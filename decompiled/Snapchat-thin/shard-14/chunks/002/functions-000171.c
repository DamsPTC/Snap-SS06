/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b06ee38; end: 10b06ee5b; -[SCPlatformAnalyticsSponsoredSnapInfo copyWithZone:] */

undefined8 FUN_10b06ee38(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b06ee5c; end: 10b06eecf; -[SCPlatformAnalyticsSponsoredSnapInfo encodeWithCoder:] */

void FUN_10b06ee5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e2ddf8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110e2ddb8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f556b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b06eed0; end: 10b06ef4f; -[SCPlatformAnalyticsSponsoredSnapInfo hash] */

undefined8 * FUN_10b06eed0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b06efe8:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b06eff4;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_10b06eff4;
          }
          goto LAB_10b06efe8;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b06eff4:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b06ef50; end: 10b06f00f; -[SCPlatformAnalyticsSponsoredSnapInfo isEqual:] */

long FUN_10b06ef50(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b06efe8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b06eff4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_10b06eff4;
          }
          goto LAB_10b06efe8;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b06eff4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b06f010; end: 10b06f017; -[SCPlatformAnalyticsSponsoredSnapInfo adId] */

undefined8 FUN_10b06f010(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b06f018; end: 10b06f01f; -[SCPlatformAnalyticsSponsoredSnapInfo serveItemId] */

undefined8 FUN_10b06f018(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b06f020; end: 10b06f027; -[SCPlatformAnalyticsSponsoredSnapInfo lineItemId] */

undefined8 FUN_10b06f020(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b06f028; end: 10b06f063; -[SCPlatformAnalyticsSponsoredSnapInfo .cxx_destruct] */

void FUN_10b06f028(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b06f064; end: 10b06f113; -[SCPlatformAnalyticsLensInfo initWithCoder:] */

undefined1 * FUN_10b06f064(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112705188;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b06f114; end: 10b06f1bf; -[SCPlatformAnalyticsLensInfo initWithLensSessionId:lensConfigurations:] */

undefined1 *
FUN_10b06f114(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112705188;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b06f1c0; end: 10b06f1e3; -[SCPlatformAnalyticsLensInfo copyWithZone:] */

undefined8 FUN_10b06f1c0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b06f1e4; end: 10b06f243; -[SCPlatformAnalyticsLensInfo encodeWithCoder:] */

void FUN_10b06f1e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f315b8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f556d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b06f244; end: 10b06f2b7; -[SCPlatformAnalyticsLensInfo hash] */

undefined8 * FUN_10b06f244(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b06f338:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b06f344;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_10b06f344;
        }
        goto LAB_10b06f338;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b06f344:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b06f2b8; end: 10b06f35f; -[SCPlatformAnalyticsLensInfo isEqual:] */

long FUN_10b06f2b8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b06f338:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b06f344;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10b06f344;
        }
        goto LAB_10b06f338;
      }
    }
    lVar3 = 0;
  }
LAB_10b06f344:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b06f360; end: 10b06f367; -[SCPlatformAnalyticsLensInfo lensSessionId] */

undefined8 FUN_10b06f360(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b06f368; end: 10b06f36f; -[SCPlatformAnalyticsLensInfo lensConfigurations] */

undefined8 FUN_10b06f368(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b06f370; end: 10b06f39f; -[SCPlatformAnalyticsLensInfo .cxx_destruct] */

void FUN_10b06f370(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b06f3a0; end: 10b06f427; -[SCBloopsChatMediaContentProviderAnalytics initWithCoder:] */

undefined1 * FUN_10b06f3a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112705190;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b06f428; end: 10b06f44b; -[SCBloopsChatMediaContentProviderAnalytics copyWithZone:] */

undefined8 FUN_10b06f428(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b06f44c; end: 10b06f463; -[SCBloopsChatMediaContentProviderAnalytics encodeWithCoder:] */

void FUN_10b06f44c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf93030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_encodeObject_forKey__1125c25b0,*(undefined8 *)(param_1 + 8),
             &PTR____CFConstantStringClassReference_110f556f8);
  return;
}



/* Entry: 10b06f464; end: 10b06f46b; -[SCBloopsChatMediaContentProviderAnalytics generatedVideoSize] */

undefined8 FUN_10b06f464(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b06f46c; end: 10b06f49b; -[SCBloopsChatMediaContentProviderAnalytics setGeneratedVideoSize:] */

void FUN_10b06f46c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b06f49c; end: 10b06f543; -[SCBloopsChatMediaContentProviderAnalytics .cxx_destruct] */

void FUN_10b06f49c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b06f544; end: 10b06f647;  */

bool FUN_10b06f544(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain();
  uVar2 = param_1;
  func_0x00010bfd76a0();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_1;
    func_0x00010bfadd80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c08fa60();
    if ((uVar3 == 0) && (uVar3 = param_1, func_0x00010bf1b840(), (long)uVar3 < 1)) {
      uVar3 = param_1;
      func_0x00010c297de0();
      _objc_retainAutoreleasedReturnValue();
      if (uVar3 == 0) {
        uVar4 = param_1;
        func_0x00010bfc1820();
        _objc_retainAutoreleasedReturnValue();
        if (uVar4 == 0) {
          uVar5 = param_1;
          func_0x00010c281360(param_1);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010bf529e0();
          bVar1 = uVar6 != 0;
          _objc_release(uVar5);
        }
        else {
          bVar1 = true;
        }
        _objc_release(uVar4);
      }
      else {
        bVar1 = true;
      }
      _objc_release(uVar3);
    }
    else {
      bVar1 = true;
    }
    _objc_release(uVar2);
  }
  else {
    bVar1 = true;
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 10b06f648; end: 10b06fac3;  */

/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x00010b07027c */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined1 * FUN_10b06f648(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar11;
  undefined *puVar12;
  undefined1 *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  long lStack_be0;
  undefined *puStack_bd8;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  lVar2 = param_1;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar14 = 0;
    do {
      if (lRam0000000000000000 != lVar4) {
        _objc_enumerationMutation(param_1);
      }
      lVar16 = *(long *)(lVar14 * 8);
      lVar15 = lVar16;
      func_0x00010c094540();
      _objc_retainAutoreleasedReturnValue();
      if (lVar15 == 0) {
        lVar15 = lVar16;
        func_0x00010c270160();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar15;
        func_0x00010bf529e0();
        _objc_release(lVar15);
        if (lVar7 != 0) goto LAB_10b06f750;
      }
      else {
        _objc_release();
LAB_10b06f750:
        puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        _objc_opt_new();
        func_0x00010c1d0640();
        lVar15 = lVar16;
        func_0x00010c094540(lVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar3);
        _objc_release(lVar15);
        lVar15 = lVar16;
        func_0x00010c090320(lVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar3);
        _objc_release(lVar15);
        lVar15 = lVar16;
        func_0x00010c095a20(lVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar3);
        _objc_release(lVar15);
        puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010bf9f040(lVar16);
        func_0x00010c0df780(puVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar3);
        _objc_release(puVar12);
        puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010bf9f120(lVar16);
        func_0x00010c0df780(puVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar3);
        _objc_release(puVar12);
        puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c094800(lVar16);
        func_0x00010c0df780(puVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar3);
        _objc_release(puVar12);
        puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0947c0(lVar16);
        func_0x00010c0df780(puVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar3);
        _objc_release(puVar12);
        lVar15 = lVar16;
        func_0x00010c096ca0(lVar16);
        func_0x00010bb000e4();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar3);
        _objc_release(lVar15);
        lVar15 = lVar16;
        func_0x00010c097820(lVar16);
        func_0x00010bb00884();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar3);
        _objc_release(lVar15);
        lVar15 = lVar16;
        func_0x00010c095800(lVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar3);
        _objc_release(lVar15);
        func_0x00010c270160(lVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar3);
        _objc_release(lVar16);
        func_0x00010befa120(puVar1);
        _objc_release(puVar3);
      }
      lVar14 = lVar14 + 1;
    } while (lVar2 != lVar14);
    lVar2 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release(param_1);
  puVar12 = puVar1;
  func_0x00010bf529e0();
  if (puVar12 == (undefined *)0x0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bf64b60();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc();
    func_0x00010c008340();
    _objc_release(puVar3);
  }
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
    ___stack_chk_fail();
    lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    _objc_retain(param_1);
    lVar4 = param_1;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    puVar12 = (undefined *)0x0;
    if (lVar4 != 0) {
      do {
        lVar14 = 0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(param_1);
          }
          puVar12 = *(undefined **)(lVar14 * 8);
          puVar1 = puVar12;
          func_0x00010c094540();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar1 != (undefined *)0x0) {
            func_0x00010c14fae0();
            _objc_retainAutoreleasedReturnValue();
            goto LAB_10b06fbb0;
          }
          lVar14 = lVar14 + 1;
        } while (lVar4 != lVar14);
        lVar4 = param_1;
        func_0x00010bf52a60();
      } while (lVar4 != 0);
      puVar12 = (undefined *)0x0;
    }
LAB_10b06fbb0:
    _objc_release(param_1);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
      ___stack_chk_fail();
      lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain();
      _objc_retain(param_1);
      lVar4 = param_1;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      puVar12 = (undefined *)0x0;
      if (lVar4 != 0) {
        do {
          lVar14 = 0;
          do {
            if (lRam0000000000000000 != lVar2) {
              _objc_enumerationMutation(param_1);
            }
            puVar12 = *(undefined **)(lVar14 * 8);
            puVar1 = puVar12;
            func_0x00010c094540();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (puVar1 != (undefined *)0x0) {
              func_0x00010c14ef20();
              _objc_retainAutoreleasedReturnValue();
              goto LAB_10b06fce8;
            }
            lVar14 = lVar14 + 1;
          } while (lVar4 != lVar14);
          lVar4 = param_1;
          func_0x00010bf52a60();
        } while (lVar4 != 0);
        puVar12 = (undefined *)0x0;
      }
LAB_10b06fce8:
      _objc_release(param_1);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
        ___stack_chk_fail();
        lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
        _objc_retain();
        _objc_retain(param_1);
        lVar4 = param_1;
        func_0x00010bf52a60();
        lVar2 = lRam0000000000000000;
        puVar12 = (undefined *)0x0;
        if (lVar4 != 0) {
          do {
            lVar14 = 0;
            do {
              if (lRam0000000000000000 != lVar2) {
                _objc_enumerationMutation(param_1);
              }
              puVar12 = *(undefined **)(lVar14 * 8);
              puVar1 = puVar12;
              func_0x00010c094540();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (puVar1 != (undefined *)0x0) {
                func_0x00010c14f140();
                _objc_retainAutoreleasedReturnValue();
                goto LAB_10b06fe20;
              }
              lVar14 = lVar14 + 1;
            } while (lVar4 != lVar14);
            lVar4 = param_1;
            func_0x00010bf52a60();
          } while (lVar4 != 0);
          puVar12 = (undefined *)0x0;
        }
LAB_10b06fe20:
        _objc_release(param_1);
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
          ___stack_chk_fail();
          lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
          _objc_retain();
          _objc_retain(param_1);
          lVar4 = param_1;
          func_0x00010bf52a60();
          lVar2 = lRam0000000000000000;
          puVar12 = (undefined *)0x0;
          if (lVar4 != 0) {
            do {
              lVar14 = 0;
              do {
                if (lRam0000000000000000 != lVar2) {
                  _objc_enumerationMutation(param_1);
                }
                puVar12 = *(undefined **)(lVar14 * 8);
                puVar1 = puVar12;
                func_0x00010c094540();
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                if (puVar1 != (undefined *)0x0) {
                  func_0x00010c14eee0();
                  _objc_retainAutoreleasedReturnValue();
                  goto LAB_10b06ff58;
                }
                lVar14 = lVar14 + 1;
              } while (lVar4 != lVar14);
              lVar4 = param_1;
              func_0x00010bf52a60();
            } while (lVar4 != 0);
            puVar12 = (undefined *)0x0;
          }
LAB_10b06ff58:
          _objc_release(param_1);
          _objc_release();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
            ___stack_chk_fail();
            lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
            _objc_retain();
            _objc_retain(param_1);
            lVar4 = param_1;
            func_0x00010bf52a60();
            lVar2 = lRam0000000000000000;
            puVar12 = (undefined *)0x0;
            if (lVar4 != 0) {
              do {
                lVar14 = 0;
                do {
                  if (lRam0000000000000000 != lVar2) {
                    _objc_enumerationMutation(param_1);
                  }
                  puVar12 = *(undefined **)(lVar14 * 8);
                  puVar1 = puVar12;
                  func_0x00010c094540();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release();
                  if (puVar1 != (undefined *)0x0) {
                    func_0x00010c14eec0();
                    _objc_retainAutoreleasedReturnValue();
                    goto LAB_10b070090;
                  }
                  lVar14 = lVar14 + 1;
                } while (lVar4 != lVar14);
                lVar4 = param_1;
                func_0x00010bf52a60();
              } while (lVar4 != 0);
              puVar12 = (undefined *)0x0;
            }
LAB_10b070090:
            _objc_release(param_1);
            _objc_release();
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
              ___stack_chk_fail();
              lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
              _objc_retain();
              _objc_retain(param_1);
              lVar4 = param_1;
              func_0x00010bf52a60();
              lVar2 = lRam0000000000000000;
              puVar12 = (undefined *)0x0;
              if (lVar4 != 0) {
                do {
                  lVar14 = 0;
                  do {
                    if (lRam0000000000000000 != lVar2) {
                      _objc_enumerationMutation(param_1);
                    }
                    puVar12 = *(undefined **)(lVar14 * 8);
                    puVar1 = puVar12;
                    func_0x00010c094540();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release();
                    if (puVar1 != (undefined *)0x0) {
                      func_0x00010c14ecc0();
                      _objc_retainAutoreleasedReturnValue();
                      goto LAB_10b0701c8;
                    }
                    lVar14 = lVar14 + 1;
                  } while (lVar4 != lVar14);
                  lVar4 = param_1;
                  func_0x00010bf52a60();
                } while (lVar4 != 0);
                puVar12 = (undefined *)0x0;
              }
LAB_10b0701c8:
              _objc_release(param_1);
              _objc_release();
              if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
                ___stack_chk_fail();
                lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
                _objc_retain();
                _objc_retain(param_1);
                lVar4 = param_1;
                func_0x00010bf52a60();
                lVar2 = lRam0000000000000000;
                puVar13 = (undefined1 *)0x0;
                if (lVar4 != 0) {
                  do {
                    lVar14 = 0;
                    do {
                      if (lRam0000000000000000 != lVar2) {
                        _objc_enumerationMutation(param_1);
                      }
                      puVar13 = *(undefined1 **)(lVar14 * 8);
                      puVar5 = puVar13;
                      func_0x00010c094540();
                      _objc_retainAutoreleasedReturnValue();
                      _objc_release();
                      if (puVar5 != (undefined1 *)0x0) {
                        func_0x00010c14ef00();
                        goto LAB_10b0702f8;
                      }
                      lVar14 = lVar14 + 1;
                    } while (lVar4 != lVar14);
                    lVar4 = param_1;
                    func_0x00010bf52a60();
                  } while (lVar4 != 0);
                  puVar13 = (undefined1 *)0x0;
                }
LAB_10b0702f8:
                _objc_release(param_1);
                _objc_release();
                if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                  return puVar13;
                }
                ___stack_chk_fail();
                lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
                _objc_retain();
                puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
                func_0x00010c1607a0();
                _objc_retainAutoreleasedReturnValue();
                lVar11 = param_1;
                func_0x00010c158420();
                _objc_retainAutoreleasedReturnValue();
                lVar2 = lVar11;
                func_0x00010bf52a60();
                lVar4 = lRam0000000000000000;
                while (lVar2 != 0) {
                  lVar15 = 0;
                  do {
                    if (lRam0000000000000000 != lVar4) {
                      _objc_enumerationMutation(lVar11);
                    }
                    uVar6 = *(undefined8 *)(lVar15 * 8);
                    func_0x00010bf429e0();
                    _objc_retainAutoreleasedReturnValue();
                    uVar10 = uVar6;
                    func_0x00010bef0520();
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010befa160(puVar1);
                    _objc_release(uVar10);
                    _objc_release(uVar6);
                    lVar15 = lVar15 + 1;
                  } while (lVar2 != lVar15);
                  lVar2 = lVar11;
                  func_0x00010bf52a60();
                }
                _objc_release(lVar11);
                puVar12 = puVar1;
                func_0x00010bf00560();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar1);
                _objc_release();
                if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar14) {
                  ___stack_chk_fail();
                  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
                  _objc_retain();
                  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
                  _objc_opt_new();
                  uVar17 = 0;
                  uVar18 = 0;
                  uVar19 = 0;
                  uVar20 = 0;
                  uVar21 = 0;
                  uVar22 = 0;
                  uVar23 = 0;
                  uVar24 = 0;
                  lVar11 = param_1;
                  func_0x00010c158420();
                  _objc_retainAutoreleasedReturnValue();
                  lVar2 = lVar11;
                  func_0x00010bf52a60();
                  lVar4 = lRam0000000000000000;
                  while (lVar2 != 0) {
                    lVar15 = 0;
                    do {
                      if (lRam0000000000000000 != lVar4) {
                        _objc_enumerationMutation(lVar11);
                      }
                      lVar7 = *(long *)(lVar15 * 8);
                      func_0x00010bf429e0();
                      _objc_retainAutoreleasedReturnValue();
                      lVar16 = lVar7;
                      func_0x00010bf6f7a0();
                      _objc_retainAutoreleasedReturnValue();
                      _objc_release(lVar7);
                      lVar7 = lVar16;
                      func_0x00010c08fa60();
                      puVar12 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
                      if (lVar7 != 0) {
                        lVar7 = lVar16;
                        func_0x00010bf64920(lVar16);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010bdc1900();
                        _objc_retainAutoreleasedReturnValue();
                        _objc_release(lVar7);
                        func_0x00010bef7f60(puVar1);
                        _objc_release(puVar12);
                      }
                      _objc_release(lVar16);
                      lVar15 = lVar15 + 1;
                    } while (lVar2 != lVar15);
                    lVar2 = lVar11;
                    func_0x00010bf52a60();
                  }
                  _objc_release(lVar11);
                  uVar6 = 0;
                  puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
                  func_0x00010bf64b60();
                  _objc_retainAutoreleasedReturnValue();
                  puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                  _objc_alloc();
                  uVar10 = 4;
                  puVar9 = puVar3;
                  func_0x00010c008340();
                  _objc_release(puVar3);
                  _objc_release(puVar1);
                  _objc_release();
                  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar14) {
                    ___stack_chk_fail();
                    plVar8 = &lStack_be0;
                    puStack_bd8 = PTR_PTR_112705198;
                    lStack_be0 = param_1;
                    _objc_msgSendSuper2(&lStack_be0,PTR_s_init_1125d9248);
                    if (plVar8 != (long *)0x0) {
                      *(undefined **)((long)plVar8 + 8) = puVar9;
                      *(undefined8 *)((long)plVar8 + 0x10) = uVar10;
                      *(undefined8 *)((long)plVar8 + 0x18) = uVar6;
                      *(undefined8 *)((long)plVar8 + 0x20) = in_x5;
                      *(undefined8 *)((long)plVar8 + 0x28) = in_x6;
                      *(undefined8 *)((long)plVar8 + 0x30) = in_x7;
                      *(undefined8 *)((long)plVar8 + 0x38) = 0;
                      *(undefined8 *)((long)plVar8 + 0x40) = 0;
                      *(undefined8 *)((long)plVar8 + 0x48) = 0;
                      *(undefined8 *)((long)plVar8 + 0x50) = 0;
                      *(undefined8 *)((long)plVar8 + 0x58) = 0;
                      *(undefined8 *)((long)plVar8 + 0x60) = 0;
                      *(undefined8 *)((long)plVar8 + 0x68) = 0;
                      *(undefined8 *)((long)plVar8 + 0x70) = 0;
                      *(ulong *)((long)plVar8 + 0x78) =
                           CONCAT17(uVar24,CONCAT16(uVar23,CONCAT15(uVar22,CONCAT14(uVar21,CONCAT13(
                                                  uVar20,CONCAT12(uVar19,CONCAT11(uVar18,uVar17)))))
                                                  ));
                    }
                    return (undefined1 *)plVar8;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return puVar12;
}



/* Entry: 10b06fac4; end: 10b070343;  */

/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x00010b07027c */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined1 * FUN_10b06fac4(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long *plVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar12;
  undefined *puVar13;
  undefined1 *puVar14;
  long lVar15;
  long lVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  long lStack_aa0;
  undefined *puStack_a98;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  puVar13 = (undefined *)0x0;
  if (lVar1 != 0) {
    do {
      lVar15 = 0;
      do {
        if (lRam0000000000000000 != lVar4) {
          _objc_enumerationMutation(param_1);
        }
        puVar13 = *(undefined **)(lVar15 * 8);
        puVar2 = puVar13;
        func_0x00010c094540();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar2 != (undefined *)0x0) {
          func_0x00010c14fae0();
          _objc_retainAutoreleasedReturnValue();
          goto LAB_10b06fbb0;
        }
        lVar15 = lVar15 + 1;
      } while (lVar1 != lVar15);
      lVar1 = param_1;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
    puVar13 = (undefined *)0x0;
  }
LAB_10b06fbb0:
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
    ___stack_chk_fail();
    lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    _objc_retain(param_1);
    lVar1 = param_1;
    func_0x00010bf52a60();
    lVar4 = lRam0000000000000000;
    puVar13 = (undefined *)0x0;
    if (lVar1 != 0) {
      do {
        lVar15 = 0;
        do {
          if (lRam0000000000000000 != lVar4) {
            _objc_enumerationMutation(param_1);
          }
          puVar13 = *(undefined **)(lVar15 * 8);
          puVar2 = puVar13;
          func_0x00010c094540();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar2 != (undefined *)0x0) {
            func_0x00010c14ef20();
            _objc_retainAutoreleasedReturnValue();
            goto LAB_10b06fce8;
          }
          lVar15 = lVar15 + 1;
        } while (lVar1 != lVar15);
        lVar1 = param_1;
        func_0x00010bf52a60();
      } while (lVar1 != 0);
      puVar13 = (undefined *)0x0;
    }
LAB_10b06fce8:
    _objc_release(param_1);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
      ___stack_chk_fail();
      lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain();
      _objc_retain(param_1);
      lVar1 = param_1;
      func_0x00010bf52a60();
      lVar4 = lRam0000000000000000;
      puVar13 = (undefined *)0x0;
      if (lVar1 != 0) {
        do {
          lVar15 = 0;
          do {
            if (lRam0000000000000000 != lVar4) {
              _objc_enumerationMutation(param_1);
            }
            puVar13 = *(undefined **)(lVar15 * 8);
            puVar2 = puVar13;
            func_0x00010c094540();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (puVar2 != (undefined *)0x0) {
              func_0x00010c14f140();
              _objc_retainAutoreleasedReturnValue();
              goto LAB_10b06fe20;
            }
            lVar15 = lVar15 + 1;
          } while (lVar1 != lVar15);
          lVar1 = param_1;
          func_0x00010bf52a60();
        } while (lVar1 != 0);
        puVar13 = (undefined *)0x0;
      }
LAB_10b06fe20:
      _objc_release(param_1);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
        ___stack_chk_fail();
        lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
        _objc_retain();
        _objc_retain(param_1);
        lVar1 = param_1;
        func_0x00010bf52a60();
        lVar4 = lRam0000000000000000;
        puVar13 = (undefined *)0x0;
        if (lVar1 != 0) {
          do {
            lVar15 = 0;
            do {
              if (lRam0000000000000000 != lVar4) {
                _objc_enumerationMutation(param_1);
              }
              puVar13 = *(undefined **)(lVar15 * 8);
              puVar2 = puVar13;
              func_0x00010c094540();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (puVar2 != (undefined *)0x0) {
                func_0x00010c14eee0();
                _objc_retainAutoreleasedReturnValue();
                goto LAB_10b06ff58;
              }
              lVar15 = lVar15 + 1;
            } while (lVar1 != lVar15);
            lVar1 = param_1;
            func_0x00010bf52a60();
          } while (lVar1 != 0);
          puVar13 = (undefined *)0x0;
        }
LAB_10b06ff58:
        _objc_release(param_1);
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
          ___stack_chk_fail();
          lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
          _objc_retain();
          _objc_retain(param_1);
          lVar1 = param_1;
          func_0x00010bf52a60();
          lVar4 = lRam0000000000000000;
          puVar13 = (undefined *)0x0;
          if (lVar1 != 0) {
            do {
              lVar15 = 0;
              do {
                if (lRam0000000000000000 != lVar4) {
                  _objc_enumerationMutation(param_1);
                }
                puVar13 = *(undefined **)(lVar15 * 8);
                puVar2 = puVar13;
                func_0x00010c094540();
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                if (puVar2 != (undefined *)0x0) {
                  func_0x00010c14eec0();
                  _objc_retainAutoreleasedReturnValue();
                  goto LAB_10b070090;
                }
                lVar15 = lVar15 + 1;
              } while (lVar1 != lVar15);
              lVar1 = param_1;
              func_0x00010bf52a60();
            } while (lVar1 != 0);
            puVar13 = (undefined *)0x0;
          }
LAB_10b070090:
          _objc_release(param_1);
          _objc_release();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
            ___stack_chk_fail();
            lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
            _objc_retain();
            _objc_retain(param_1);
            lVar1 = param_1;
            func_0x00010bf52a60();
            lVar4 = lRam0000000000000000;
            puVar13 = (undefined *)0x0;
            if (lVar1 != 0) {
              do {
                lVar15 = 0;
                do {
                  if (lRam0000000000000000 != lVar4) {
                    _objc_enumerationMutation(param_1);
                  }
                  puVar13 = *(undefined **)(lVar15 * 8);
                  puVar2 = puVar13;
                  func_0x00010c094540();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release();
                  if (puVar2 != (undefined *)0x0) {
                    func_0x00010c14ecc0();
                    _objc_retainAutoreleasedReturnValue();
                    goto LAB_10b0701c8;
                  }
                  lVar15 = lVar15 + 1;
                } while (lVar1 != lVar15);
                lVar1 = param_1;
                func_0x00010bf52a60();
              } while (lVar1 != 0);
              puVar13 = (undefined *)0x0;
            }
LAB_10b0701c8:
            _objc_release(param_1);
            _objc_release();
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
              ___stack_chk_fail();
              lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
              _objc_retain();
              _objc_retain(param_1);
              lVar1 = param_1;
              func_0x00010bf52a60();
              lVar4 = lRam0000000000000000;
              puVar14 = (undefined1 *)0x0;
              if (lVar1 != 0) {
                do {
                  lVar15 = 0;
                  do {
                    if (lRam0000000000000000 != lVar4) {
                      _objc_enumerationMutation(param_1);
                    }
                    puVar14 = *(undefined1 **)(lVar15 * 8);
                    puVar3 = puVar14;
                    func_0x00010c094540();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release();
                    if (puVar3 != (undefined1 *)0x0) {
                      func_0x00010c14ef00();
                      goto LAB_10b0702f8;
                    }
                    lVar15 = lVar15 + 1;
                  } while (lVar1 != lVar15);
                  lVar1 = param_1;
                  func_0x00010bf52a60();
                } while (lVar1 != 0);
                puVar14 = (undefined1 *)0x0;
              }
LAB_10b0702f8:
              _objc_release(param_1);
              _objc_release();
              if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                return puVar14;
              }
              ___stack_chk_fail();
              lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
              _objc_retain();
              puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
              func_0x00010c1607a0();
              _objc_retainAutoreleasedReturnValue();
              lVar12 = param_1;
              func_0x00010c158420();
              _objc_retainAutoreleasedReturnValue();
              lVar4 = lVar12;
              func_0x00010bf52a60();
              lVar1 = lRam0000000000000000;
              while (lVar4 != 0) {
                lVar16 = 0;
                do {
                  if (lRam0000000000000000 != lVar1) {
                    _objc_enumerationMutation(lVar12);
                  }
                  uVar5 = *(undefined8 *)(lVar16 * 8);
                  func_0x00010bf429e0();
                  _objc_retainAutoreleasedReturnValue();
                  uVar11 = uVar5;
                  func_0x00010bef0520();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010befa160(puVar2);
                  _objc_release(uVar11);
                  _objc_release(uVar5);
                  lVar16 = lVar16 + 1;
                } while (lVar4 != lVar16);
                lVar4 = lVar12;
                func_0x00010bf52a60();
              }
              _objc_release(lVar12);
              puVar13 = puVar2;
              func_0x00010bf00560();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar2);
              _objc_release();
              if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar15) {
                ___stack_chk_fail();
                lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
                _objc_retain();
                puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
                _objc_opt_new();
                uVar17 = 0;
                uVar18 = 0;
                uVar19 = 0;
                uVar20 = 0;
                uVar21 = 0;
                uVar22 = 0;
                uVar23 = 0;
                uVar24 = 0;
                lVar12 = param_1;
                func_0x00010c158420();
                _objc_retainAutoreleasedReturnValue();
                lVar4 = lVar12;
                func_0x00010bf52a60();
                lVar1 = lRam0000000000000000;
                while (lVar4 != 0) {
                  lVar16 = 0;
                  do {
                    if (lRam0000000000000000 != lVar1) {
                      _objc_enumerationMutation(lVar12);
                    }
                    lVar6 = *(long *)(lVar16 * 8);
                    func_0x00010bf429e0();
                    _objc_retainAutoreleasedReturnValue();
                    lVar7 = lVar6;
                    func_0x00010bf6f7a0();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(lVar6);
                    lVar6 = lVar7;
                    func_0x00010c08fa60();
                    puVar13 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
                    if (lVar6 != 0) {
                      lVar6 = lVar7;
                      func_0x00010bf64920(lVar7);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010bdc1900();
                      _objc_retainAutoreleasedReturnValue();
                      _objc_release(lVar6);
                      func_0x00010bef7f60(puVar2);
                      _objc_release(puVar13);
                    }
                    _objc_release(lVar7);
                    lVar16 = lVar16 + 1;
                  } while (lVar4 != lVar16);
                  lVar4 = lVar12;
                  func_0x00010bf52a60();
                }
                _objc_release(lVar12);
                uVar5 = 0;
                puVar8 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
                func_0x00010bf64b60();
                _objc_retainAutoreleasedReturnValue();
                puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                _objc_alloc();
                uVar11 = 4;
                puVar10 = puVar8;
                func_0x00010c008340();
                _objc_release(puVar8);
                _objc_release(puVar2);
                _objc_release();
                if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar15) {
                  ___stack_chk_fail();
                  plVar9 = &lStack_aa0;
                  puStack_a98 = PTR_PTR_112705198;
                  lStack_aa0 = param_1;
                  _objc_msgSendSuper2(&lStack_aa0,PTR_s_init_1125d9248);
                  if (plVar9 != (long *)0x0) {
                    *(undefined **)((long)plVar9 + 8) = puVar10;
                    *(undefined8 *)((long)plVar9 + 0x10) = uVar11;
                    *(undefined8 *)((long)plVar9 + 0x18) = uVar5;
                    *(undefined8 *)((long)plVar9 + 0x20) = in_x5;
                    *(undefined8 *)((long)plVar9 + 0x28) = in_x6;
                    *(undefined8 *)((long)plVar9 + 0x30) = in_x7;
                    *(undefined8 *)((long)plVar9 + 0x38) = 0;
                    *(undefined8 *)((long)plVar9 + 0x40) = 0;
                    *(undefined8 *)((long)plVar9 + 0x48) = 0;
                    *(undefined8 *)((long)plVar9 + 0x50) = 0;
                    *(undefined8 *)((long)plVar9 + 0x58) = 0;
                    *(undefined8 *)((long)plVar9 + 0x60) = 0;
                    *(undefined8 *)((long)plVar9 + 0x68) = 0;
                    *(undefined8 *)((long)plVar9 + 0x70) = 0;
                    *(ulong *)((long)plVar9 + 0x78) =
                         CONCAT17(uVar24,CONCAT16(uVar23,CONCAT15(uVar22,CONCAT14(uVar21,CONCAT13(
                                                  uVar20,CONCAT12(uVar19,CONCAT11(uVar18,uVar17)))))
                                                 ));
                  }
                  return (undefined1 *)plVar9;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return puVar13;
}



/* Entry: 10b070344; end: 10b0706cf;  */

void FUN_10b070344(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long *plVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar13;
  long lVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  long lStack_2c0;
  undefined *puStack_2b8;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c158420();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar14 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar3);
      }
      uVar5 = *(undefined8 *)(lVar14 * 8);
      func_0x00010bf429e0();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar5;
      func_0x00010bef0520();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar2);
      _objc_release(uVar12);
      _objc_release(uVar5);
      lVar14 = lVar14 + 1;
    } while (lVar4 != lVar14);
    lVar4 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  puVar6 = puVar2;
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
    ___stack_chk_fail();
    lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar15 = 0;
    uVar16 = 0;
    uVar17 = 0;
    uVar18 = 0;
    uVar19 = 0;
    uVar20 = 0;
    uVar21 = 0;
    uVar22 = 0;
    lVar3 = param_1;
    func_0x00010c158420();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar4 != 0) {
      lVar14 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar3);
        }
        lVar7 = *(long *)(lVar14 * 8);
        func_0x00010bf429e0();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar7;
        func_0x00010bf6f7a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar7);
        lVar7 = lVar8;
        func_0x00010c08fa60();
        puVar6 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
        if (lVar7 != 0) {
          lVar7 = lVar8;
          func_0x00010bf64920(lVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bdc1900();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar7);
          func_0x00010bef7f60(puVar2);
          _objc_release(puVar6);
        }
        _objc_release(lVar8);
        lVar14 = lVar14 + 1;
      } while (lVar4 != lVar14);
      lVar4 = lVar3;
      func_0x00010bf52a60();
    }
    _objc_release(lVar3);
    uVar5 = 0;
    puVar9 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bf64b60();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc();
    uVar12 = 4;
    puVar11 = puVar9;
    func_0x00010c008340();
    _objc_release(puVar9);
    _objc_release(puVar2);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
      ___stack_chk_fail();
      plVar10 = &lStack_2c0;
      puStack_2b8 = PTR_PTR_112705198;
      lStack_2c0 = param_1;
      _objc_msgSendSuper2(&lStack_2c0,PTR_s_init_1125d9248);
      if (plVar10 != (long *)0x0) {
        *(undefined **)((long)plVar10 + 8) = puVar11;
        *(undefined8 *)((long)plVar10 + 0x10) = uVar12;
        *(undefined8 *)((long)plVar10 + 0x18) = uVar5;
        *(undefined8 *)((long)plVar10 + 0x20) = in_x5;
        *(undefined8 *)((long)plVar10 + 0x28) = in_x6;
        *(undefined8 *)((long)plVar10 + 0x30) = in_x7;
        *(undefined8 *)((long)plVar10 + 0x38) = 0;
        *(undefined8 *)((long)plVar10 + 0x40) = 0;
        *(undefined8 *)((long)plVar10 + 0x48) = 0;
        *(undefined8 *)((long)plVar10 + 0x50) = 0;
        *(undefined8 *)((long)plVar10 + 0x58) = 0;
        *(undefined8 *)((long)plVar10 + 0x60) = 0;
        *(undefined8 *)((long)plVar10 + 0x68) = 0;
        *(undefined8 *)((long)plVar10 + 0x70) = 0;
        *(ulong *)((long)plVar10 + 0x78) =
             CONCAT17(uVar22,CONCAT16(uVar21,CONCAT15(uVar20,CONCAT14(uVar19,CONCAT13(uVar18,
                                                  CONCAT12(uVar17,CONCAT11(uVar16,uVar15)))))));
      }
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10b0706d0; end: 10b070773; -[SCFilterCarouselLoggingParams initWithBitmojiLoadedCount:bitmojiViewCount:frameLoadedCount:frameViewCount:organicLoadedCount:organicViewCount:sponsoredLoadedCount:sponsoredViewCount:venueLoadedCount:venueViewCount:filterLoadedCount:filterViewCount:geoFilterLoadedCount:geoFilterViewCount:previewStartTime:] */

void FUN_10b0706d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17)

{
  undefined8 *puVar1;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_112705198;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    *(undefined8 *)((long)puVar1 + 0x28) = param_8;
    *(undefined8 *)((long)puVar1 + 0x30) = param_9;
    *(undefined8 *)((long)puVar1 + 0x38) = param_10;
    *(undefined8 *)((long)puVar1 + 0x40) = param_11;
    *(undefined8 *)((long)puVar1 + 0x48) = param_12;
    *(undefined8 *)((long)puVar1 + 0x50) = param_13;
    *(undefined8 *)((long)puVar1 + 0x58) = param_14;
    *(undefined8 *)((long)puVar1 + 0x60) = param_15;
    *(undefined8 *)((long)puVar1 + 0x68) = param_16;
    *(undefined8 *)((long)puVar1 + 0x70) = param_17;
    *(undefined8 *)((long)puVar1 + 0x78) = param_1;
  }
  return;
}



/* Entry: 10b070774; end: 10b0708ff; -[SCFilterCarouselLoggingParams initWithCoder:] */

undefined1 *
FUN_10b070774(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_4);
  puStack_28 = PTR_PTR_112705198;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x50) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x58) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x60) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x68) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x70) = uVar2;
    func_0x00010bf66da0(param_4);
    *(undefined8 *)((long)puVar1 + 0x78) = param_1;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b070900; end: 10b070923; -[SCFilterCarouselLoggingParams copyWithZone:] */

undefined8 FUN_10b070900(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b070924; end: 10b070a87; -[SCFilterCarouselLoggingParams encodeWithCoder:] */

void FUN_10b070924(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf92fc0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f55858);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f55878);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f55898);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110f558b8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110f558d8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110f558f8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                      &PTR____CFConstantStringClassReference_110f55918);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x40),
                      &PTR____CFConstantStringClassReference_110f55938);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x48),
                      &PTR____CFConstantStringClassReference_110f55958);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x50),
                      &PTR____CFConstantStringClassReference_110f55978);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x58),
                      &PTR____CFConstantStringClassReference_110f55998);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x60),
                      &PTR____CFConstantStringClassReference_110f559b8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x68),
                      &PTR____CFConstantStringClassReference_110f559d8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x70),
                      &PTR____CFConstantStringClassReference_110f559f8);
  func_0x00010bf92e80(*(undefined8 *)(param_1 + 0x78),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110f55a18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b070a88; end: 10b070b47; -[SCFilterCarouselLoggingParams hash] */

undefined8 * FUN_10b070a88(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined1 *puVar4;
  double dVar5;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  puVar1 = &uStack_90;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_90 = MP_INT_ABS(*(undefined8 *)(param_1 + 8));
  uStack_88 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x10));
  uStack_80 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  uStack_78 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x20));
  uStack_70 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x28));
  uStack_68 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x30));
  uStack_60 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x38));
  uStack_58 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x40));
  uStack_50 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x48));
  uStack_48 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x50));
  uStack_40 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x58));
  uStack_38 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x60));
  uStack_30 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x68));
  uStack_28 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x70));
  uVar3 = ~*(ulong *)(param_1 + 0x78) + *(ulong *)(param_1 + 0x78) * 0x40000;
  uVar3 = (uVar3 ^ uVar3 >> 0x1f) * 0x15;
  uStack_20 = (uVar3 ^ uVar3 >> 0xb) * 0x41;
  uStack_20 = uStack_20 ^ uStack_20 >> 0x16;
  func_0x000107c3191c(&uStack_90,0xf);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == (undefined8 *)param_3) {
    puVar4 = (undefined1 *)0x1;
  }
  else {
    puVar4 = (undefined1 *)0x0;
    if ((puVar1 != (undefined8 *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar4 = (undefined1 *)puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar4);
      if ((((((ulong)puVar2 & 1) == 0) ||
           (((*(long *)((long)puVar1 + 8) != *(long *)(param_3 + 8) ||
             (*(long *)((long)puVar1 + 0x10) != *(long *)(param_3 + 0x10))) ||
            (*(long *)((long)puVar1 + 0x18) != *(long *)(param_3 + 0x18))))) ||
          ((((*(long *)((long)puVar1 + 0x20) != *(long *)(param_3 + 0x20) ||
             (*(long *)((long)puVar1 + 0x28) != *(long *)(param_3 + 0x28))) ||
            (*(long *)((long)puVar1 + 0x30) != *(long *)(param_3 + 0x30))) ||
           ((*(long *)((long)puVar1 + 0x38) != *(long *)(param_3 + 0x38) ||
            (*(long *)((long)puVar1 + 0x40) != *(long *)(param_3 + 0x40))))))) ||
         ((*(long *)((long)puVar1 + 0x48) != *(long *)(param_3 + 0x48) ||
          ((((*(long *)((long)puVar1 + 0x50) != *(long *)(param_3 + 0x50) ||
             (*(long *)((long)puVar1 + 0x58) != *(long *)(param_3 + 0x58))) ||
            (*(long *)((long)puVar1 + 0x60) != *(long *)(param_3 + 0x60))) ||
           ((*(long *)((long)puVar1 + 0x68) != *(long *)(param_3 + 0x68) ||
            (*(long *)((long)puVar1 + 0x70) != *(long *)(param_3 + 0x70))))))))) {
        puVar4 = (undefined1 *)0x0;
      }
      else {
        dVar5 = ABS(*(double *)((long)puVar1 + 0x78) + *(double *)(param_3 + 0x78)) *
                2.220446049250313e-16;
        if (dVar5 <= 2.2250738585072014e-308) {
          dVar5 = 2.2250738585072014e-308;
        }
        puVar4 = (undefined1 *)
                 (ulong)(ABS(*(double *)((long)puVar1 + 0x78) - *(double *)(param_3 + 0x78)) < dVar5
                        );
      }
    }
  }
  _objc_release(param_3);
  return (undefined8 *)puVar4;
}



/* Entry: 10b070b48; end: 10b070cd3; -[SCFilterCarouselLoggingParams isEqual:] */

bool FUN_10b070b48(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  double dVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar1 = param_1;
      _objc_opt_class(param_1);
      uVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar1);
      if (((((uVar2 & 1) == 0) ||
           (((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
             (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) ||
            (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))))) ||
          ((((*(long *)(param_1 + 0x20) != *(long *)(param_3 + 0x20) ||
             (*(long *)(param_1 + 0x28) != *(long *)(param_3 + 0x28))) ||
            (*(long *)(param_1 + 0x30) != *(long *)(param_3 + 0x30))) ||
           ((*(long *)(param_1 + 0x38) != *(long *)(param_3 + 0x38) ||
            (*(long *)(param_1 + 0x40) != *(long *)(param_3 + 0x40))))))) ||
         ((*(long *)(param_1 + 0x48) != *(long *)(param_3 + 0x48) ||
          ((((*(long *)(param_1 + 0x50) != *(long *)(param_3 + 0x50) ||
             (*(long *)(param_1 + 0x58) != *(long *)(param_3 + 0x58))) ||
            (*(long *)(param_1 + 0x60) != *(long *)(param_3 + 0x60))) ||
           ((*(long *)(param_1 + 0x68) != *(long *)(param_3 + 0x68) ||
            (*(long *)(param_1 + 0x70) != *(long *)(param_3 + 0x70))))))))) {
        bVar3 = false;
      }
      else {
        dVar4 = ABS(*(double *)(param_1 + 0x78) + *(double *)(param_3 + 0x78)) *
                2.220446049250313e-16;
        if (dVar4 <= 2.2250738585072014e-308) {
          dVar4 = 2.2250738585072014e-308;
        }
        bVar3 = ABS(*(double *)(param_1 + 0x78) - *(double *)(param_3 + 0x78)) < dVar4;
      }
    }
  }
  _objc_release(param_3);
  return bVar3;
}



/* Entry: 10b070cd4; end: 10b070cdb; -[SCFilterCarouselLoggingParams bitmojiLoadedCount] */

undefined8 FUN_10b070cd4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b070cdc; end: 10b070ce3; -[SCFilterCarouselLoggingParams bitmojiViewCount] */

undefined8 FUN_10b070cdc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b070ce4; end: 10b070ceb; -[SCFilterCarouselLoggingParams frameLoadedCount] */

undefined8 FUN_10b070ce4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b070cec; end: 10b070cf3; -[SCFilterCarouselLoggingParams frameViewCount] */

undefined8 FUN_10b070cec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b070cf4; end: 10b070cfb; -[SCFilterCarouselLoggingParams organicLoadedCount] */

undefined8 FUN_10b070cf4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b070cfc; end: 10b070d03; -[SCFilterCarouselLoggingParams organicViewCount] */

undefined8 FUN_10b070cfc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b070d04; end: 10b070d0b; -[SCFilterCarouselLoggingParams sponsoredLoadedCount] */

undefined8 FUN_10b070d04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b070d0c; end: 10b070d13; -[SCFilterCarouselLoggingParams sponsoredViewCount] */

undefined8 FUN_10b070d0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b070d14; end: 10b070d1b; -[SCFilterCarouselLoggingParams venueLoadedCount] */

undefined8 FUN_10b070d14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b070d1c; end: 10b070d23; -[SCFilterCarouselLoggingParams venueViewCount] */

undefined8 FUN_10b070d1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b070d24; end: 10b070d2b; -[SCFilterCarouselLoggingParams filterLoadedCount] */

undefined8 FUN_10b070d24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10b070d2c; end: 10b070d33; -[SCFilterCarouselLoggingParams filterViewCount] */

undefined8 FUN_10b070d2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10b070d34; end: 10b070d3b; -[SCFilterCarouselLoggingParams geoFilterLoadedCount] */

undefined8 FUN_10b070d34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10b070d3c; end: 10b070d43; -[SCFilterCarouselLoggingParams geoFilterViewCount] */

undefined8 FUN_10b070d3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10b070d44; end: 10b070d4b; -[SCFilterCarouselLoggingParams previewStartTime] */

undefined8 FUN_10b070d44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 10b070d4c; end: 10b070d67; +[SCFilterCarouselLoggingParamsBuilder filterCarouselLoggingParams] */

void FUN_10b070d4c(void)

{
  _objc_alloc_init(PTR_PTR_1126df520);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b070d68; end: 10b071057; +[SCFilterCarouselLoggingParamsBuilder filterCarouselLoggingParamsFromExistingFilterCarouselLoggingParams:] */

void FUN_10b070d68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  
  puVar1 = PTR_PTR_1126df520;
  _objc_retain(param_4);
  func_0x00010bfada80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010bf1bd20(param_4);
  puVar3 = puVar1;
  func_0x00010c2a9480(puVar1,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010bf1c660(param_4);
  puVar4 = puVar3;
  func_0x00010c2a9560(puVar3,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010bfb6de0(param_4);
  puVar5 = puVar4;
  func_0x00010c2ae600(puVar4,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010bfb7200(param_4);
  puVar6 = puVar5;
  func_0x00010c2ae640(puVar5,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c0ed040(param_4);
  puVar7 = puVar6;
  func_0x00010c2b5040(puVar6,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c0ed0c0(param_4);
  puVar8 = puVar7;
  func_0x00010c2b5060(puVar7,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c24a600(param_4);
  puVar9 = puVar8;
  func_0x00010c2b9ca0(puVar8,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c24ab80(param_4);
  puVar10 = puVar9;
  func_0x00010c2b9d20(puVar9,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c297f20(param_4);
  puVar11 = puVar10;
  func_0x00010c2bc560(puVar10,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c298160(param_4);
  puVar12 = puVar11;
  func_0x00010c2bc5a0(puVar11,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010bfae0e0(param_4);
  puVar13 = puVar12;
  func_0x00010c2adf80(puVar12,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010bfae800(param_4);
  puVar14 = puVar13;
  func_0x00010c2ae180(puVar13,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010bfc1280(param_4);
  puVar15 = puVar14;
  func_0x00010c2aed80(puVar14,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010bfc13a0(param_4);
  puVar16 = puVar15;
  func_0x00010c2aeda0(puVar15,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c111d20(param_4);
  _objc_release(param_4);
  puVar17 = puVar16;
  func_0x00010c2b5e40(param_1,puVar16);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
  return;
}



/* Entry: 10b071058; end: 10b0710b7; -[SCFilterCarouselLoggingParamsBuilder build] */

void FUN_10b071058(long param_1)

{
  _objc_alloc(PTR_PTR_1126d9640);
  func_0x00010bff81c0(*(undefined8 *)(param_1 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0710b8; end: 10b0710bf; -[SCFilterCarouselLoggingParamsBuilder withBitmojiLoadedCount:] */

void FUN_10b0710b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b0710c0; end: 10b0710c7; -[SCFilterCarouselLoggingParamsBuilder withBitmojiViewCount:] */

void FUN_10b0710c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10b0710c8; end: 10b0710cf; -[SCFilterCarouselLoggingParamsBuilder withFrameLoadedCount:] */

void FUN_10b0710c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 10b0710d0; end: 10b0710d7; -[SCFilterCarouselLoggingParamsBuilder withFrameViewCount:] */

void FUN_10b0710d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 10b0710d8; end: 10b0710df; -[SCFilterCarouselLoggingParamsBuilder withOrganicLoadedCount:] */

void FUN_10b0710d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 10b0710e0; end: 10b0710e7; -[SCFilterCarouselLoggingParamsBuilder withOrganicViewCount:] */

void FUN_10b0710e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 10b0710e8; end: 10b0710ef; -[SCFilterCarouselLoggingParamsBuilder withSponsoredLoadedCount:] */

void FUN_10b0710e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x38) = param_3;
  return;
}



/* Entry: 10b0710f0; end: 10b0710f7; -[SCFilterCarouselLoggingParamsBuilder withSponsoredViewCount:] */

void FUN_10b0710f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 10b0710f8; end: 10b0710ff; -[SCFilterCarouselLoggingParamsBuilder withVenueLoadedCount:] */

void FUN_10b0710f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x48) = param_3;
  return;
}



/* Entry: 10b071100; end: 10b071107; -[SCFilterCarouselLoggingParamsBuilder withVenueViewCount:] */

void FUN_10b071100(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x50) = param_3;
  return;
}



/* Entry: 10b071108; end: 10b07110f; -[SCFilterCarouselLoggingParamsBuilder withFilterLoadedCount:] */

void FUN_10b071108(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x58) = param_3;
  return;
}



/* Entry: 10b071110; end: 10b071117; -[SCFilterCarouselLoggingParamsBuilder withFilterViewCount:] */

void FUN_10b071110(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x60) = param_3;
  return;
}



/* Entry: 10b071118; end: 10b07111f; -[SCFilterCarouselLoggingParamsBuilder withGeoFilterLoadedCount:] */

void FUN_10b071118(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x68) = param_3;
  return;
}



/* Entry: 10b071120; end: 10b071127; -[SCFilterCarouselLoggingParamsBuilder withGeoFilterViewCount:] */

void FUN_10b071120(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x70) = param_3;
  return;
}



/* Entry: 10b071128; end: 10b07112f; -[SCFilterCarouselLoggingParamsBuilder withPreviewStartTime:] */

void FUN_10b071128(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x78) = param_1;
  return;
}



/* Entry: 10b071130; end: 10b073c6f; -[SCSnapCommonLoggingParams initWithCoder:] */

undefined1 * FUN_10b071130(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  double dVar5;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_4);
  puStack_28 = PTR_PTR_1127051a0;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 9) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 10) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x88) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x90) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0xb) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0xc) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0xd) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0xe) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0xf) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x10) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x11) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x12) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x13) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x14) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x15) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x16) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x98) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0xa0) = uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0xa8);
    *(undefined8 *)((long)puVar1 + 0xa8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0xb0);
    *(undefined8 *)((long)puVar1 + 0xb0) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x17) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x18) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x19) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x1a) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x1b) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x1c) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x1d) = (char)uVar2;
    func_0x00010bf66e40(param_4);
    *(float *)((long)puVar1 + 0x68) = param_1;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0xb8) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0xc0) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 200) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0xd0) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0xd8) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0xe0) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0xe8) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0xf0) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0xf8) = uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x100);
    *(undefined8 *)((long)puVar1 + 0x100) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x108) = uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x110);
    *(undefined8 *)((long)puVar1 + 0x110) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x118);
    *(undefined8 *)((long)puVar1 + 0x118) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x120);
    *(undefined8 *)((long)puVar1 + 0x120) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x128);
    *(undefined8 *)((long)puVar1 + 0x128) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x130);
    *(undefined8 *)((long)puVar1 + 0x130) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x138);
    *(undefined8 *)((long)puVar1 + 0x138) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x140);
    *(undefined8 *)((long)puVar1 + 0x140) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x148);
    *(undefined8 *)((long)puVar1 + 0x148) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x150);
    *(undefined8 *)((long)puVar1 + 0x150) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x158);
    *(undefined8 *)((long)puVar1 + 0x158) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x160);
    *(undefined8 *)((long)puVar1 + 0x160) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x168) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x170) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x178) = uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x180);
    *(undefined8 *)((long)puVar1 + 0x180) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x188);
    *(undefined8 *)((long)puVar1 + 0x188) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 400) = uVar2;
    func_0x00010bf66e40(param_4);
    *(float *)((long)puVar1 + 0x6c) = param_1;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x1e) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x198) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x1f) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x1a0) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x20) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x21) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x22) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x1a8) = uVar2;
    func_0x00010bf66e40(param_4);
    *(float *)((long)puVar1 + 0x70) = param_1;
    func_0x00010bf66e40(param_4);
    *(float *)((long)puVar1 + 0x74) = param_1;
    func_0x00010bf66e40(param_4);
    *(float *)((long)puVar1 + 0x78) = param_1;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x1b0) = uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x1b8);
    *(undefined8 *)((long)puVar1 + 0x1b8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x1c0) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x1c8) = uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x1d0);
    *(undefined8 *)((long)puVar1 + 0x1d0) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x1d8);
    *(undefined8 *)((long)puVar1 + 0x1d8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x1e0) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x1e8) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x1f0) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x23) = (char)uVar2;
    func_0x00010bf66e40(param_4);
    dVar5 = (double)param_1;
    *(double *)((long)puVar1 + 0x1f8) = dVar5;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x200);
    *(undefined8 *)((long)puVar1 + 0x200) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x24) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x25) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x26) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x208) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x27) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x210);
    *(undefined8 *)((long)puVar1 + 0x210) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x218) = uVar2;
    func_0x00010bf66da0(param_4);
    *(double *)((long)puVar1 + 0x220) = dVar5;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x28) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x29) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x228);
    *(undefined8 *)((long)puVar1 + 0x228) = uVar2;
    _objc_release(uVar3);
    func_0x00010bf66da0(param_4);
    *(double *)((long)puVar1 + 0x230) = dVar5;
    func_0x00010bf66da0(param_4);
    *(double *)((long)puVar1 + 0x238) = dVar5;
    func_0x00010bf66da0(param_4);
    *(double *)((long)puVar1 + 0x240) = dVar5;
    uVar2 = param_4;
    func_0x00010bf67000();
    fVar4 = SUB84(dVar5,0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x248);
    *(undefined8 *)((long)puVar1 + 0x248) = uVar2;
    _objc_release(uVar3);
    func_0x00010bf66e40(param_4);
    dVar5 = (double)fVar4;
    *(double *)((long)puVar1 + 0x250) = dVar5;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 600) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x260) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x268) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x270) = uVar2;
    func_0x00010bf66e40(param_4);
    *(int *)((long)puVar1 + 0x7c) = SUB84(dVar5,0);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x278);
    *(undefined8 *)((long)puVar1 + 0x278) = uVar2;
    _objc_release(uVar3);
    func_0x00010bf66da0(param_4);
    *(double *)((long)puVar1 + 0x280) = dVar5;
    uVar2 = param_4;
    func_0x00010bf66f40();
    fVar4 = SUB84(dVar5,0);
    *(undefined8 *)((long)puVar1 + 0x288) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x290) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x2a) = (char)uVar2;
    func_0x00010bf66e40(param_4);
    *(float *)((long)puVar1 + 0x80) = fVar4;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x298) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x2a0) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x2a8) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x2b) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x2b0) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x2c) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x2b8);
    *(undefined8 *)((long)puVar1 + 0x2b8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x2c0) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x2c8) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x2d0) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x2d8) = uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x2e0);
    *(undefined8 *)((long)puVar1 + 0x2e0) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x2e8);
    *(undefined8 *)((long)puVar1 + 0x2e8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x2f0);
    *(undefined8 *)((long)puVar1 + 0x2f0) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x2f8);
    *(undefined8 *)((long)puVar1 + 0x2f8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x300);
    *(undefined8 *)((long)puVar1 + 0x300) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x308);
    *(undefined8 *)((long)puVar1 + 0x308) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x310) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x318) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 800) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x328) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x330) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x338) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x340) = uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x348);
    *(undefined8 *)((long)puVar1 + 0x348) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x350);
    *(undefined8 *)((long)puVar1 + 0x350) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x358);
    *(undefined8 *)((long)puVar1 + 0x358) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x360);
    *(undefined8 *)((long)puVar1 + 0x360) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x2d) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x2e) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x368);
    *(undefined8 *)((long)puVar1 + 0x368) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x370);
    *(undefined8 *)((long)puVar1 + 0x370) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x378);
    *(undefined8 *)((long)puVar1 + 0x378) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x380);
    *(undefined8 *)((long)puVar1 + 0x380) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x388) = uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x390);
    *(undefined8 *)((long)puVar1 + 0x390) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x398);
    *(undefined8 *)((long)puVar1 + 0x398) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x3a0);
    *(undefined8 *)((long)puVar1 + 0x3a0) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x3a8);
    *(undefined8 *)((long)puVar1 + 0x3a8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x3b0);
    *(undefined8 *)((long)puVar1 + 0x3b0) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x3b8);
    *(undefined8 *)((long)puVar1 + 0x3b8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x3c0);
    *(undefined8 *)((long)puVar1 + 0x3c0) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x3c8);
    *(undefined8 *)((long)puVar1 + 0x3c8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x3d0);
    *(undefined8 *)((long)puVar1 + 0x3d0) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x3d8);
    *(undefined8 *)((long)puVar1 + 0x3d8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x2f) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x3e0) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 1000) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x3f0) = uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x3f8);
    *(undefined8 *)((long)puVar1 + 0x3f8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x400);
    *(undefined8 *)((long)puVar1 + 0x400) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x408) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x30) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x410) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x418) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x420) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x428) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x430) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x438) = uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x440);
    *(undefined8 *)((long)puVar1 + 0x440) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x448);
    *(undefined8 *)((long)puVar1 + 0x448) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x450);
    *(undefined8 *)((long)puVar1 + 0x450) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x458) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x31) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x32) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x33) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x460) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x34) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x468) = uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x470);
    *(undefined8 *)((long)puVar1 + 0x470) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x478);
    *(undefined8 *)((long)puVar1 + 0x478) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x480);
    *(undefined8 *)((long)puVar1 + 0x480) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x488) = uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x490);
    *(undefined8 *)((long)puVar1 + 0x490) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x498);
    *(undefined8 *)((long)puVar1 + 0x498) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x4a0);
    *(undefined8 *)((long)puVar1 + 0x4a0) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x4a8) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x4b0) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x4b8) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x35) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x4c0);
    *(undefined8 *)((long)puVar1 + 0x4c0) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x36) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x4c8) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x37) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x38) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x39) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x3a) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x3b) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x4d0);
    *(undefined8 *)((long)puVar1 + 0x4d0) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x4d8) = uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x4e0);
    *(undefined8 *)((long)puVar1 + 0x4e0) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x4e8) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x4f0) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x4f8) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x3c) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x3d) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x500);
    *(undefined8 *)((long)puVar1 + 0x500) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x508);
    *(undefined8 *)((long)puVar1 + 0x508) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x510) = uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x518);
    *(undefined8 *)((long)puVar1 + 0x518) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x520);
    *(undefined8 *)((long)puVar1 + 0x520) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x528);
    *(undefined8 *)((long)puVar1 + 0x528) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x530) = uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x538);
    *(undefined8 *)((long)puVar1 + 0x538) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x540);
    *(undefined8 *)((long)puVar1 + 0x540) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x548);
    *(undefined8 *)((long)puVar1 + 0x548) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x550);
    *(undefined8 *)((long)puVar1 + 0x550) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x558);
    *(undefined8 *)((long)puVar1 + 0x558) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x560);
    *(undefined8 *)((long)puVar1 + 0x560) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x568) = uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x570);
    *(undefined8 *)((long)puVar1 + 0x570) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x578) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x580) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x588) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x590) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x598) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x5a0) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x5a8) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x5b0) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x5b8) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x5c0) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x5c8) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x5d0) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x5d8) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x5e0) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x5e8) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x5f0) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x5f8) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x600) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x608) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x610) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x618) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x620) = uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x628);
    *(undefined8 *)((long)puVar1 + 0x628) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x630);
    *(undefined8 *)((long)puVar1 + 0x630) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x638);
    *(undefined8 *)((long)puVar1 + 0x638) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x640);
    *(undefined8 *)((long)puVar1 + 0x640) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x648);
    *(undefined8 *)((long)puVar1 + 0x648) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x650);
    *(undefined8 *)((long)puVar1 + 0x650) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x658);
    *(undefined8 *)((long)puVar1 + 0x658) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x660);
    *(undefined8 *)((long)puVar1 + 0x660) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x668);
    *(undefined8 *)((long)puVar1 + 0x668) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x670);
    *(undefined8 *)((long)puVar1 + 0x670) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x678);
    *(undefined8 *)((long)puVar1 + 0x678) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x680);
    *(undefined8 *)((long)puVar1 + 0x680) = uVar2;
    _objc_release(uVar3);
    func_0x00010bf66e40(param_4);
    dVar5 = (double)fVar4;
    *(double *)((long)puVar1 + 0x688) = dVar5;
    uVar2 = param_4;
    func_0x00010bf67000();
    fVar4 = SUB84(dVar5,0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x690);
    *(undefined8 *)((long)puVar1 + 0x690) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x698);
    *(undefined8 *)((long)puVar1 + 0x698) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x6a0) = uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x6a8);
    *(undefined8 *)((long)puVar1 + 0x6a8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x6b0) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x6b8) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x6c0) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x6c8) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x6d0) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x6d8) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x3e) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x3f) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x40) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x41) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x42) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x43) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x44) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x6e0);
    *(undefined8 *)((long)puVar1 + 0x6e0) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x6e8);
    *(undefined8 *)((long)puVar1 + 0x6e8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x6f0);
    *(undefined8 *)((long)puVar1 + 0x6f0) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x6f8);
    *(undefined8 *)((long)puVar1 + 0x6f8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x700);
    *(undefined8 *)((long)puVar1 + 0x700) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x708) = uVar2;
    func_0x00010bf66e40(param_4);
    dVar5 = (double)fVar4;
    *(double *)((long)puVar1 + 0x710) = dVar5;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x718) = uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x720);
    *(undefined8 *)((long)puVar1 + 0x720) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x728);
    *(undefined8 *)((long)puVar1 + 0x728) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x45) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x46) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x47) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x48) = (char)uVar2;
    func_0x00010bf66e40(param_4);
    *(int *)((long)puVar1 + 0x84) = SUB84(dVar5,0);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x730);
    *(undefined8 *)((long)puVar1 + 0x730) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x49) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x738) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x740) = uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x748);
    *(undefined8 *)((long)puVar1 + 0x748) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x750);
    *(undefined8 *)((long)puVar1 + 0x750) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x758) = uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x760);
    *(undefined8 *)((long)puVar1 + 0x760) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x768) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x4a) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x770);
    *(undefined8 *)((long)puVar1 + 0x770) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x4b) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x778);
    *(undefined8 *)((long)puVar1 + 0x778) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x780) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x788) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x790) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x798) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x4c) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x7a0) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x7a8) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x7b0) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x7b8) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x7c0) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x7c8) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 2000) = uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x7d8);
    *(undefined8 *)((long)puVar1 + 0x7d8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x7e0) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x7e8) = uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x7f0);
    *(undefined8 *)((long)puVar1 + 0x7f0) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x4d) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x7f8);
    *(undefined8 *)((long)puVar1 + 0x7f8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x800);
    *(undefined8 *)((long)puVar1 + 0x800) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x808) = uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x810);
    *(undefined8 *)((long)puVar1 + 0x810) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x818) = uVar2;
    func_0x00010bf66da0(param_4);
    *(double *)((long)puVar1 + 0x820) = dVar5;
    func_0x00010bf66da0(param_4);
    *(double *)((long)puVar1 + 0x828) = dVar5;
    func_0x00010bf66da0(param_4);
    *(double *)((long)puVar1 + 0x830) = dVar5;
    func_0x00010bf66da0(param_4);
    *(double *)((long)puVar1 + 0x838) = dVar5;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x4e) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x4f) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x50) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x51) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x840);
    *(undefined8 *)((long)puVar1 + 0x840) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x848);
    *(undefined8 *)((long)puVar1 + 0x848) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x850) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x52) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x858) = uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x860);
    *(undefined8 *)((long)puVar1 + 0x860) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x53) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x54) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x868) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x870) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x878) = uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x880);
    *(undefined8 *)((long)puVar1 + 0x880) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x888);
    *(undefined8 *)((long)puVar1 + 0x888) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x890);
    *(undefined8 *)((long)puVar1 + 0x890) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x55) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x898) = uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x8a0);
    *(undefined8 *)((long)puVar1 + 0x8a0) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x8a8);
    *(undefined8 *)((long)puVar1 + 0x8a8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x8b0);
    *(undefined8 *)((long)puVar1 + 0x8b0) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x8b8) = uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x8c0);
    *(undefined8 *)((long)puVar1 + 0x8c0) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x8c8);
    *(undefined8 *)((long)puVar1 + 0x8c8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x8d0);
    *(undefined8 *)((long)puVar1 + 0x8d0) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x56) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x8d8);
    *(undefined8 *)((long)puVar1 + 0x8d8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x8e0);
    *(undefined8 *)((long)puVar1 + 0x8e0) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x8e8);
    *(undefined8 *)((long)puVar1 + 0x8e8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x8f0);
    *(undefined8 *)((long)puVar1 + 0x8f0) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x8f8);
    *(undefined8 *)((long)puVar1 + 0x8f8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x900) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x908) = uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x910);
    *(undefined8 *)((long)puVar1 + 0x910) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x918);
    *(undefined8 *)((long)puVar1 + 0x918) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x920) = uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x928);
    *(undefined8 *)((long)puVar1 + 0x928) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x57) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x58) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x59) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x5a) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x930);
    *(undefined8 *)((long)puVar1 + 0x930) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x938);
    *(undefined8 *)((long)puVar1 + 0x938) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x940);
    *(undefined8 *)((long)puVar1 + 0x940) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x5b) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x948) = uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x950);
    *(undefined8 *)((long)puVar1 + 0x950) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x958);
    *(undefined8 *)((long)puVar1 + 0x958) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x960);
    *(undefined8 *)((long)puVar1 + 0x960) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x968);
    *(undefined8 *)((long)puVar1 + 0x968) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x970);
    *(undefined8 *)((long)puVar1 + 0x970) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x978) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x5c) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x5d) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x5e) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x5f) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x980);
    *(undefined8 *)((long)puVar1 + 0x980) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x60) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x988);
    *(undefined8 *)((long)puVar1 + 0x988) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x990);
    *(undefined8 *)((long)puVar1 + 0x990) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x998);
    *(undefined8 *)((long)puVar1 + 0x998) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x9a0);
    *(undefined8 *)((long)puVar1 + 0x9a0) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x61) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x9a8) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x62) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 99) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x9b0);
    *(undefined8 *)((long)puVar1 + 0x9b0) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x9b8);
    *(undefined8 *)((long)puVar1 + 0x9b8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 100) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x9c0);
    *(undefined8 *)((long)puVar1 + 0x9c0) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x9c8) = uVar2;
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x9d0) = uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x9d8);
    *(undefined8 *)((long)puVar1 + 0x9d8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x65) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x66) = (char)uVar2;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x67) = (char)uVar2;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b073c70; end: 10b073c93; -[SCSnapCommonLoggingParams copyWithZone:] */

undefined8 FUN_10b073c70(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b073c94; end: 10b075c57; -[SCSnapCommonLoggingParams encodeWithCoder:] */

void FUN_10b073c94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf92da0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f55a38);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 9),
                      &PTR____CFConstantStringClassReference_110f55a58);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 10),
                      &PTR____CFConstantStringClassReference_110f55a78);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x88),
                      &PTR____CFConstantStringClassReference_110f55a98);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x90),
                      &PTR____CFConstantStringClassReference_110f55ab8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0xb),
                      &PTR____CFConstantStringClassReference_110f55ad8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0xc),
                      &PTR____CFConstantStringClassReference_110e551d8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0xd),
                      &PTR____CFConstantStringClassReference_110f55af8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0xe),
                      &PTR____CFConstantStringClassReference_110f55b18);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0xf),
                      &PTR____CFConstantStringClassReference_110f55b38);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f55b58);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x11),
                      &PTR____CFConstantStringClassReference_110f55b78);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x12),
                      &PTR____CFConstantStringClassReference_110f55b98);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x13),
                      &PTR____CFConstantStringClassReference_110f55bb8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x14),
                      &PTR____CFConstantStringClassReference_110f55bd8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x15),
                      &PTR____CFConstantStringClassReference_110f55bf8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x16),
                      &PTR____CFConstantStringClassReference_110f55c18);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x98),
                      &PTR____CFConstantStringClassReference_110f55c38);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0xa0),
                      &PTR____CFConstantStringClassReference_110f55c58);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0xa8),
                      &PTR____CFConstantStringClassReference_110f55c78);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0xb0),
                      &PTR____CFConstantStringClassReference_110f55c98);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x17),
                      &PTR____CFConstantStringClassReference_110f55cb8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f55cd8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x19),
                      &PTR____CFConstantStringClassReference_110f55cf8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x1a),
                      &PTR____CFConstantStringClassReference_110f55d18);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x1b),
                      &PTR____CFConstantStringClassReference_110f55d38);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x1c),
                      &PTR____CFConstantStringClassReference_110f55d58);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x1d),
                      &PTR____CFConstantStringClassReference_110f55d78);
  func_0x00010bf92ee0(*(undefined4 *)(param_1 + 0x68),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110f55d98);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0xb8),
                      &PTR____CFConstantStringClassReference_110e2a6f8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0xc0),
                      &PTR____CFConstantStringClassReference_110f55db8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 200),
                      &PTR____CFConstantStringClassReference_110f55dd8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0xd0),
                      &PTR____CFConstantStringClassReference_110f55df8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0xd8),
                      &PTR____CFConstantStringClassReference_110f55e18);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0xe0),
                      &PTR____CFConstantStringClassReference_110f55e38);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0xe8),
                      &PTR____CFConstantStringClassReference_110f55e58);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0xf0),
                      &PTR____CFConstantStringClassReference_110dd8398);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0xf8),
                      &PTR____CFConstantStringClassReference_110f55e78);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x100),
                      &PTR____CFConstantStringClassReference_110f55e98);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x108),
                      &PTR____CFConstantStringClassReference_110f1c538);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x110),
                      &PTR____CFConstantStringClassReference_110f55eb8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x118),
                      &PTR____CFConstantStringClassReference_110f55ed8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x120),
                      &PTR____CFConstantStringClassReference_110f55ef8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x128),
                      &PTR____CFConstantStringClassReference_110f55f18);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x130),
                      &PTR____CFConstantStringClassReference_110f55f38);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x138),
                      &PTR____CFConstantStringClassReference_110f55f58);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x140),
                      &PTR____CFConstantStringClassReference_110f55f78);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x148),
                      &PTR____CFConstantStringClassReference_110f55f98);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x150),
                      &PTR____CFConstantStringClassReference_110f55fb8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x158),
                      &PTR____CFConstantStringClassReference_110f55fd8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x160),
                      &PTR____CFConstantStringClassReference_110f55ff8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x168),
                      &PTR____CFConstantStringClassReference_110f56018);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x170),
                      &PTR____CFConstantStringClassReference_110f56038);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x178),
                      &PTR____CFConstantStringClassReference_110f56058);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x180),
                      &PTR____CFConstantStringClassReference_110f54878);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x188),
                      &PTR____CFConstantStringClassReference_110f54898);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 400),
                      &PTR____CFConstantStringClassReference_110e432f8);
  func_0x00010bf92ee0(*(undefined4 *)(param_1 + 0x6c),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110f56078);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x1e),
                      &PTR____CFConstantStringClassReference_110f56098);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x198),
                      &PTR____CFConstantStringClassReference_110f560b8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x1f),
                      &PTR____CFConstantStringClassReference_110f560d8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x1a0),
                      &PTR____CFConstantStringClassReference_110f560f8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110f56118);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x21),
                      &PTR____CFConstantStringClassReference_110f56138);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x22),
                      &PTR____CFConstantStringClassReference_110f56158);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x1a8),
                      &PTR____CFConstantStringClassReference_110f56178);
  func_0x00010bf92ee0(*(undefined4 *)(param_1 + 0x70),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110f56198);
  func_0x00010bf92ee0(*(undefined4 *)(param_1 + 0x74),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110f561b8);
  func_0x00010bf92ee0(*(undefined4 *)(param_1 + 0x78),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110f561d8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x1b0),
                      &PTR____CFConstantStringClassReference_110df2798);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x1b8),
                      &PTR____CFConstantStringClassReference_110f561f8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x1c0),
                      &PTR____CFConstantStringClassReference_110f56218);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x1c8),
                      &PTR____CFConstantStringClassReference_110f56238);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x1d0),
                      &PTR____CFConstantStringClassReference_110f56258);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x1d8),
                      &PTR____CFConstantStringClassReference_110f56278);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x1e0),
                      &PTR____CFConstantStringClassReference_110f56298);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x1e8),
                      &PTR____CFConstantStringClassReference_110f562b8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x1f0),
                      &PTR____CFConstantStringClassReference_110f562d8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x23),
                      &PTR____CFConstantStringClassReference_110f562f8);
  func_0x00010bf92ee0((float)*(double *)(param_1 + 0x1f8),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110f56318);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x200),
                      &PTR____CFConstantStringClassReference_110f56338);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x24),
                      &PTR____CFConstantStringClassReference_110f56358);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x25),
                      &PTR____CFConstantStringClassReference_110f56378);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x26),
                      &PTR____CFConstantStringClassReference_110f56398);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x208),
                      &PTR____CFConstantStringClassReference_110f563b8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x27),
                      &PTR____CFConstantStringClassReference_110f563d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x210),
                      &PTR____CFConstantStringClassReference_110f563f8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x218),
                      &PTR____CFConstantStringClassReference_110f56418);
  func_0x00010bf92e80(*(undefined8 *)(param_1 + 0x220),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110f56438);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110f56458);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x29),
                      &PTR____CFConstantStringClassReference_110f56478);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x228),
                      &PTR____CFConstantStringClassReference_110f56498);
  func_0x00010bf92e80(*(undefined8 *)(param_1 + 0x230),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110f564b8);
  func_0x00010bf92e80(*(undefined8 *)(param_1 + 0x238),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110f564d8);
  func_0x00010bf92e80(*(undefined8 *)(param_1 + 0x240),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110f564f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x248),
                      &PTR____CFConstantStringClassReference_110f56518);
  func_0x00010bf92ee0((float)*(double *)(param_1 + 0x250),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110f56538);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 600),
                      &PTR____CFConstantStringClassReference_110f56558);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x260),
                      &PTR____CFConstantStringClassReference_110f56578);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x268),
                      &PTR____CFConstantStringClassReference_110e64b38);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x270),
                      &PTR____CFConstantStringClassReference_110f56598);
  func_0x00010bf92ee0(*(undefined4 *)(param_1 + 0x7c),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110f565b8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x278),
                      &PTR____CFConstantStringClassReference_110f565d8);
  func_0x00010bf92e80(*(undefined8 *)(param_1 + 0x280),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110f565f8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x288),
                      &PTR____CFConstantStringClassReference_110f56618);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x290),
                      &PTR____CFConstantStringClassReference_110f56638);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x2a),
                      &PTR____CFConstantStringClassReference_110f56658);
  func_0x00010bf92ee0(*(undefined4 *)(param_1 + 0x80),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110f56678);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x298),
                      &PTR____CFConstantStringClassReference_110f56698);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x2a0),
                      &PTR____CFConstantStringClassReference_110f566b8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x2a8),
                      &PTR____CFConstantStringClassReference_110f566d8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x2b),
                      &PTR____CFConstantStringClassReference_110f566f8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x2b0),
                      &PTR____CFConstantStringClassReference_110f56718);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x2c),
                      &PTR____CFConstantStringClassReference_110f56738);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x2b8),
                      &PTR____CFConstantStringClassReference_110f56758);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x2c0),
                      &PTR____CFConstantStringClassReference_110f56778);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x2c8),
                      &PTR____CFConstantStringClassReference_110f56798);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x2d0),
                      &PTR____CFConstantStringClassReference_110f567b8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x2d8),
                      &PTR____CFConstantStringClassReference_110f567d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x2e0),
                      &PTR____CFConstantStringClassReference_110f315b8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x2e8),
                      &PTR____CFConstantStringClassReference_110ef16f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x2f0),
                      &PTR____CFConstantStringClassReference_110ef1718);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x2f8),
                      &PTR____CFConstantStringClassReference_110f567f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x300),
                      &PTR____CFConstantStringClassReference_110eeb138);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x308),
                      &PTR____CFConstantStringClassReference_110ef16b8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x310),
                      &PTR____CFConstantStringClassReference_110ef1818);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x318),
                      &PTR____CFConstantStringClassReference_110eeabf8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 800),
                      &PTR____CFConstantStringClassReference_110f02a38);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x328),
                      &PTR____CFConstantStringClassReference_110ef1758);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x330),
                      &PTR____CFConstantStringClassReference_110ef1778);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x338),
                      &PTR____CFConstantStringClassReference_110ef1798);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x340),
                      &PTR____CFConstantStringClassReference_110ef17b8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x348),
                      &PTR____CFConstantStringClassReference_110f56818);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x350),
                      &PTR____CFConstantStringClassReference_110f556d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x358),
                      &PTR____CFConstantStringClassReference_110f56838);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x360),
                      &PTR____CFConstantStringClassReference_110f56858);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x2d),
                      &PTR____CFConstantStringClassReference_110f56878);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x2e),
                      &PTR____CFConstantStringClassReference_110f56898);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x368),
                      &PTR____CFConstantStringClassReference_110f568b8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x370),
                      &PTR____CFConstantStringClassReference_110f568d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x378),
                      &PTR____CFConstantStringClassReference_110f568f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x380),
                      &PTR____CFConstantStringClassReference_110f56918);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x388),
                      &PTR____CFConstantStringClassReference_110f56938);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x390),
                      &PTR____CFConstantStringClassReference_110f56958);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x398),
                      &PTR____CFConstantStringClassReference_110f56978);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x3a0),
                      &PTR____CFConstantStringClassReference_110f56998);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x3a8),
                      &PTR____CFConstantStringClassReference_110f569b8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x3b0),
                      &PTR____CFConstantStringClassReference_110f569d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x3b8),
                      &PTR____CFConstantStringClassReference_110f569f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x3c0),
                      &PTR____CFConstantStringClassReference_110f56a18);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x3c8),
                      &PTR____CFConstantStringClassReference_110f56a38);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x3d0),
                      &PTR____CFConstantStringClassReference_110ef1738);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x3d8),
                      &PTR____CFConstantStringClassReference_110f56a58);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x2f),
                      &PTR____CFConstantStringClassReference_110f56a78);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x3e0),
                      &PTR____CFConstantStringClassReference_110f56a98);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 1000),
                      &PTR____CFConstantStringClassReference_110f56ab8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x3f0),
                      &PTR____CFConstantStringClassReference_110f56ad8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x3f8),
                      &PTR____CFConstantStringClassReference_110f56af8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x400),
                      &PTR____CFConstantStringClassReference_110f56b18);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x408),
                      &PTR____CFConstantStringClassReference_110f56b38);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110f56b58);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x410),
                      &PTR____CFConstantStringClassReference_110f56b78);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x418),
                      &PTR____CFConstantStringClassReference_110f56b98);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x420),
                      &PTR____CFConstantStringClassReference_110f56bb8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x428),
                      &PTR____CFConstantStringClassReference_110f56bd8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x430),
                      &PTR____CFConstantStringClassReference_110f56bf8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x438),
                      &PTR____CFConstantStringClassReference_110f56c18);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x440),
                      &PTR____CFConstantStringClassReference_110f56c38);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x448),
                      &PTR____CFConstantStringClassReference_110f56c58);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x450),
                      &PTR____CFConstantStringClassReference_110f56c78);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x458),
                      &PTR____CFConstantStringClassReference_110f56c98);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x31),
                      &PTR____CFConstantStringClassReference_110f56cb8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x32),
                      &PTR____CFConstantStringClassReference_110f56cd8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x33),
                      &PTR____CFConstantStringClassReference_110f56cf8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x460),
                      &PTR____CFConstantStringClassReference_110f56d18);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x34),
                      &PTR____CFConstantStringClassReference_110f56d38);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x468),
                      &PTR____CFConstantStringClassReference_110ddfc38);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x470),
                      &PTR____CFConstantStringClassReference_110f1c438);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x478),
                      &PTR____CFConstantStringClassReference_110f56d58);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x480),
                      &PTR____CFConstantStringClassReference_110df27d8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x488),
                      &PTR____CFConstantStringClassReference_110f56d78);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x490),
                      &PTR____CFConstantStringClassReference_110f56d98);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x498),
                      &PTR____CFConstantStringClassReference_110f56db8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x4a0),
                      &PTR____CFConstantStringClassReference_110f56dd8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x4a8),
                      &PTR____CFConstantStringClassReference_110f56df8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x4b0),
                      &PTR____CFConstantStringClassReference_110f56e18);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x4b8),
                      &PTR____CFConstantStringClassReference_110f56e38);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x35),
                      &PTR____CFConstantStringClassReference_110f56e58);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x4c0),
                      &PTR____CFConstantStringClassReference_110f56e78);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x36),
                      &PTR____CFConstantStringClassReference_110f56e98);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x4c8),
                      &PTR____CFConstantStringClassReference_110f56eb8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x37),
                      &PTR____CFConstantStringClassReference_110f56ed8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x38),
                      &PTR____CFConstantStringClassReference_110f56ef8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x39),
                      &PTR____CFConstantStringClassReference_110f56f18);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x3a),
                      &PTR____CFConstantStringClassReference_110f56f38);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x3b),
                      &PTR____CFConstantStringClassReference_110f56f58);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x4d0),
                      &PTR____CFConstantStringClassReference_110f56f78);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x4d8),
                      &PTR____CFConstantStringClassReference_110f56f98);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x4e0),
                      &PTR____CFConstantStringClassReference_110f56fb8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x4e8),
                      &PTR____CFConstantStringClassReference_110f56fd8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x4f0),
                      &PTR____CFConstantStringClassReference_110f56ff8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x4f8),
                      &PTR____CFConstantStringClassReference_110f57018);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x3c),
                      &PTR____CFConstantStringClassReference_110f57038);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x3d),
                      &PTR____CFConstantStringClassReference_110f57058);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x500),
                      &PTR____CFConstantStringClassReference_110f57078);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x508),
                      &PTR____CFConstantStringClassReference_110f57098);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x510),
                      &PTR____CFConstantStringClassReference_110f570b8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x518),
                      &PTR____CFConstantStringClassReference_110f570d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x520),
                      &PTR____CFConstantStringClassReference_110f570f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x528),
                      &PTR____CFConstantStringClassReference_110f57118);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x530),
                      &PTR____CFConstantStringClassReference_110f57138);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x538),
                      &PTR____CFConstantStringClassReference_110f57158);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x540),
                      &PTR____CFConstantStringClassReference_110f57178);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x548),
                      &PTR____CFConstantStringClassReference_110f57198);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x550),
                      &PTR____CFConstantStringClassReference_110f571b8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x558),
                      &PTR____CFConstantStringClassReference_110f571d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x560),
                      &PTR____CFConstantStringClassReference_110f571f8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x568),
                      &PTR____CFConstantStringClassReference_110f57218);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x570),
                      &PTR____CFConstantStringClassReference_110f57238);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x578),
                      &PTR____CFConstantStringClassReference_110f57258);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x580),
                      &PTR____CFConstantStringClassReference_110f57278);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x588),
                      &PTR____CFConstantStringClassReference_110f57298);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x590),
                      &PTR____CFConstantStringClassReference_110f572b8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x598),
                      &PTR____CFConstantStringClassReference_110f572d8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x5a0),
                      &PTR____CFConstantStringClassReference_110f572f8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x5a8),
                      &PTR____CFConstantStringClassReference_110f57318);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x5b0),
                      &PTR____CFConstantStringClassReference_110f57338);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x5b8),
                      &PTR____CFConstantStringClassReference_110f57358);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x5c0),
                      &PTR____CFConstantStringClassReference_110f57378);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x5c8),
                      &PTR____CFConstantStringClassReference_110f57398);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x5d0),
                      &PTR____CFConstantStringClassReference_110f573b8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x5d8),
                      &PTR____CFConstantStringClassReference_110f573d8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x5e0),
                      &PTR____CFConstantStringClassReference_110f573f8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x5e8),
                      &PTR____CFConstantStringClassReference_110f57418);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x5f0),
                      &PTR____CFConstantStringClassReference_110f57438);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x5f8),
                      &PTR____CFConstantStringClassReference_110f57458);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x600),
                      &PTR____CFConstantStringClassReference_110f57478);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x608),
                      &PTR____CFConstantStringClassReference_110f57498);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x610),
                      &PTR____CFConstantStringClassReference_110f574b8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x618),
                      &PTR____CFConstantStringClassReference_110f574d8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x620),
                      &PTR____CFConstantStringClassReference_110f574f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x628),
                      &PTR____CFConstantStringClassReference_110f57518);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x630),
                      &PTR____CFConstantStringClassReference_110f57538);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x638),
                      &PTR____CFConstantStringClassReference_110f57558);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x640),
                      &PTR____CFConstantStringClassReference_110f57578);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x648),
                      &PTR____CFConstantStringClassReference_110f57598);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x650),
                      &PTR____CFConstantStringClassReference_110f575b8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x658),
                      &PTR____CFConstantStringClassReference_110f575d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x660),
                      &PTR____CFConstantStringClassReference_110f575f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x668),
                      &PTR____CFConstantStringClassReference_110f57618);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x670),
                      &PTR____CFConstantStringClassReference_110f57638);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x678),
                      &PTR____CFConstantStringClassReference_110f57658);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x680),
                      &PTR____CFConstantStringClassReference_110f57678);
  func_0x00010bf92ee0((float)*(double *)(param_1 + 0x688),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110f57698);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x690),
                      &PTR____CFConstantStringClassReference_110f576b8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x698),
                      &PTR____CFConstantStringClassReference_110f576d8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x6a0),
                      &PTR____CFConstantStringClassReference_110f576f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x6a8),
                      &PTR____CFConstantStringClassReference_110f57718);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x6b0),
                      &PTR____CFConstantStringClassReference_110f57738);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x6b8),
                      &PTR____CFConstantStringClassReference_110f57758);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x6c0),
                      &PTR____CFConstantStringClassReference_110f57778);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x6c8),
                      &PTR____CFConstantStringClassReference_110f57798);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x6d0),
                      &PTR____CFConstantStringClassReference_110f577b8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x6d8),
                      &PTR____CFConstantStringClassReference_110f577d8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x3e),
                      &PTR____CFConstantStringClassReference_110f577f8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x3f),
                      &PTR____CFConstantStringClassReference_110f57818);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x40),
                      &PTR____CFConstantStringClassReference_110f57838);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x41),
                      &PTR____CFConstantStringClassReference_110f57858);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x42),
                      &PTR____CFConstantStringClassReference_110f57878);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x43),
                      &PTR____CFConstantStringClassReference_110f57898);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x44),
                      &PTR____CFConstantStringClassReference_110f578b8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x6e0),
                      &PTR____CFConstantStringClassReference_110f1c478);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x6e8),
                      &PTR____CFConstantStringClassReference_110f578d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x6f0),
                      &PTR____CFConstantStringClassReference_110f578f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x6f8),
                      &PTR____CFConstantStringClassReference_110f57918);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x700),
                      &PTR____CFConstantStringClassReference_110f57938);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x708),
                      &PTR____CFConstantStringClassReference_110f1c4b8);
  func_0x00010bf92ee0((float)*(double *)(param_1 + 0x710),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110f57958);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x718),
                      &PTR____CFConstantStringClassReference_110f57978);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x720),
                      &PTR____CFConstantStringClassReference_110f55518);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x728),
                      &PTR____CFConstantStringClassReference_110f57998);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x45),
                      &PTR____CFConstantStringClassReference_110f579b8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x46),
                      &PTR____CFConstantStringClassReference_110f579d8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x47),
                      &PTR____CFConstantStringClassReference_110f579f8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x48),
                      &PTR____CFConstantStringClassReference_110f57a18);
  func_0x00010bf92ee0(*(undefined4 *)(param_1 + 0x84),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110f57a38);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x730),
                      &PTR____CFConstantStringClassReference_110f57a58);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x49),
                      &PTR____CFConstantStringClassReference_110f57a78);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x738),
                      &PTR____CFConstantStringClassReference_110f57a98);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x740),
                      &PTR____CFConstantStringClassReference_110f57ab8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x748),
                      &PTR____CFConstantStringClassReference_110f57ad8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x750),
                      &PTR____CFConstantStringClassReference_110f57af8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x758),
                      &PTR____CFConstantStringClassReference_110f57b18);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x760),
                      &PTR____CFConstantStringClassReference_110f57b38);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x768),
                      &PTR____CFConstantStringClassReference_110f57b58);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x4a),
                      &PTR____CFConstantStringClassReference_110f57b78);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x770),
                      &PTR____CFConstantStringClassReference_110f57b98);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x4b),
                      &PTR____CFConstantStringClassReference_110f57bb8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x778),
                      &PTR____CFConstantStringClassReference_110f57bd8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x780),
                      &PTR____CFConstantStringClassReference_110f57bf8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x788),
                      &PTR____CFConstantStringClassReference_110f57c18);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x790),
                      &PTR____CFConstantStringClassReference_110f57c38);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x798),
                      &PTR____CFConstantStringClassReference_110f57c58);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x4c),
                      &PTR____CFConstantStringClassReference_110f57c78);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x7a0),
                      &PTR____CFConstantStringClassReference_110f57c98);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x7a8),
                      &PTR____CFConstantStringClassReference_110f57cb8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x7b0),
                      &PTR____CFConstantStringClassReference_110f57cd8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x7b8),
                      &PTR____CFConstantStringClassReference_110f57cf8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x7c0),
                      &PTR____CFConstantStringClassReference_110f57d18);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x7c8),
                      &PTR____CFConstantStringClassReference_110f57d38);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 2000),
                      &PTR____CFConstantStringClassReference_110f57d58);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x7d8),
                      &PTR____CFConstantStringClassReference_110f57d78);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x7e0),
                      &PTR____CFConstantStringClassReference_110f57d98);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x7e8),
                      &PTR____CFConstantStringClassReference_110f57db8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x7f0),
                      &PTR____CFConstantStringClassReference_110f57dd8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x4d),
                      &PTR____CFConstantStringClassReference_110f57df8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x7f8),
                      &PTR____CFConstantStringClassReference_110f57e18);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x800),
                      &PTR____CFConstantStringClassReference_110dbb0f8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x808),
                      &PTR____CFConstantStringClassReference_110f57e38);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x810),
                      &PTR____CFConstantStringClassReference_110f57e58);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x818),
                      &PTR____CFConstantStringClassReference_110f57e78);
  func_0x00010bf92e80(*(undefined8 *)(param_1 + 0x820),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110f57e98);
  func_0x00010bf92e80(*(undefined8 *)(param_1 + 0x828),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110edb398);
  func_0x00010bf92e80(*(undefined8 *)(param_1 + 0x830),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110f57eb8);
  func_0x00010bf92e80(*(undefined8 *)(param_1 + 0x838),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110f57ed8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x4e),
                      &PTR____CFConstantStringClassReference_110f57ef8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x4f),
                      &PTR____CFConstantStringClassReference_110f57f18);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x50),
                      &PTR____CFConstantStringClassReference_110f57f38);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x51),
                      &PTR____CFConstantStringClassReference_110f57f58);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x840),
                      &PTR____CFConstantStringClassReference_110f57f78);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x848),
                      &PTR____CFConstantStringClassReference_110f57f98);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x850),
                      &PTR____CFConstantStringClassReference_110f57fb8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x52),
                      &PTR____CFConstantStringClassReference_110f57fd8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x858),
                      &PTR____CFConstantStringClassReference_110f57ff8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x860),
                      &PTR____CFConstantStringClassReference_110f58018);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x53),
                      &PTR____CFConstantStringClassReference_110f58038);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x54),
                      &PTR____CFConstantStringClassReference_110f58058);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x868),
                      &PTR____CFConstantStringClassReference_110f58078);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x870),
                      &PTR____CFConstantStringClassReference_110f58098);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x878),
                      &PTR____CFConstantStringClassReference_110f580b8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x880),
                      &PTR____CFConstantStringClassReference_110f580d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x888),
                      &PTR____CFConstantStringClassReference_110f580f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x890),
                      &PTR____CFConstantStringClassReference_110f58118);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x55),
                      &PTR____CFConstantStringClassReference_110f58138);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x898),
                      &PTR____CFConstantStringClassReference_110f58158);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x8a0),
                      &PTR____CFConstantStringClassReference_110f58178);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x8a8),
                      &PTR____CFConstantStringClassReference_110f58198);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x8b0),
                      &PTR____CFConstantStringClassReference_110f581b8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x8b8),
                      &PTR____CFConstantStringClassReference_110f581d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x8c0),
                      &PTR____CFConstantStringClassReference_110f581f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x8c8),
                      &PTR____CFConstantStringClassReference_110f58218);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x8d0),
                      &PTR____CFConstantStringClassReference_110f58238);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x56),
                      &PTR____CFConstantStringClassReference_110f58258);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x8d8),
                      &PTR____CFConstantStringClassReference_110f58278);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x8e0),
                      &PTR____CFConstantStringClassReference_110f58298);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x8e8),
                      &PTR____CFConstantStringClassReference_110f55458);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x8f0),
                      &PTR____CFConstantStringClassReference_110f582b8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x8f8),
                      &PTR____CFConstantStringClassReference_110f582d8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x900),
                      &PTR____CFConstantStringClassReference_110f582f8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x908),
                      &PTR____CFConstantStringClassReference_110f58318);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x910),
                      &PTR____CFConstantStringClassReference_110f58338);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x918),
                      &PTR____CFConstantStringClassReference_110f58358);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x920),
                      &PTR____CFConstantStringClassReference_110f58378);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x928),
                      &PTR____CFConstantStringClassReference_110f58398);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x57),
                      &PTR____CFConstantStringClassReference_110f583b8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x58),
                      &PTR____CFConstantStringClassReference_110f583d8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x59),
                      &PTR____CFConstantStringClassReference_110f583f8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x5a),
                      &PTR____CFConstantStringClassReference_110f58418);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x930),
                      &PTR____CFConstantStringClassReference_110f58438);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x938),
                      &PTR____CFConstantStringClassReference_110f58458);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x940),
                      &PTR____CFConstantStringClassReference_110f58478);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x5b),
                      &PTR____CFConstantStringClassReference_110f58498);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x948),
                      &PTR____CFConstantStringClassReference_110f584b8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x950),
                      &PTR____CFConstantStringClassReference_110f584d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x958),
                      &PTR____CFConstantStringClassReference_110f584f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x960),
                      &PTR____CFConstantStringClassReference_110f58518);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x968),
                      &PTR____CFConstantStringClassReference_110f58538);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x970),
                      &PTR____CFConstantStringClassReference_110f58558);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x978),
                      &PTR____CFConstantStringClassReference_110f58578);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x5c),
                      &PTR____CFConstantStringClassReference_110f58598);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x5d),
                      &PTR____CFConstantStringClassReference_110f585b8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x5e),
                      &PTR____CFConstantStringClassReference_110f585d8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x5f),
                      &PTR____CFConstantStringClassReference_110f585f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x980),
                      &PTR____CFConstantStringClassReference_110f58618);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x60),
                      &PTR____CFConstantStringClassReference_110f58638);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x988),
                      &PTR____CFConstantStringClassReference_110f58658);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x990),
                      &PTR____CFConstantStringClassReference_110f58678);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x998),
                      &PTR____CFConstantStringClassReference_110f58698);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x9a0),
                      &PTR____CFConstantStringClassReference_110f586b8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x61),
                      &PTR____CFConstantStringClassReference_110f586d8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x9a8),
                      &PTR____CFConstantStringClassReference_110f586f8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x62),
                      &PTR____CFConstantStringClassReference_110f58718);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 99),
                      &PTR____CFConstantStringClassReference_110f58738);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x9b0),
                      &PTR____CFConstantStringClassReference_110f58758);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x9b8),
                      &PTR____CFConstantStringClassReference_110ef1878);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 100),
                      &PTR____CFConstantStringClassReference_110f58778);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x9c0),
                      &PTR____CFConstantStringClassReference_110f58798);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x9c8),
                      &PTR____CFConstantStringClassReference_110f49378);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x9d0),
                      &PTR____CFConstantStringClassReference_110f587b8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x9d8),
                      &PTR____CFConstantStringClassReference_110f587d8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x65),
                      &PTR____CFConstantStringClassReference_110f587f8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x66),
                      &PTR____CFConstantStringClassReference_110f58818);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x67),
                      &PTR____CFConstantStringClassReference_110f58838);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b075c58; end: 10b076ec3; -[SCSnapCommonLoggingParams hash] */

ulong * FUN_10b075c58(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong *puVar5;
  undefined1 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined1 *puVar9;
  ushort uVar10;
  ushort uVar11;
  undefined4 uVar12;
  float fVar13;
  ulong uVar14;
  double dVar15;
  ulong uStack_cf0;
  ulong uStack_ce8;
  ulong uStack_ce0;
  undefined8 uStack_cd8;
  undefined8 uStack_cd0;
  ulong uStack_cc8;
  ulong uStack_cc0;
  ulong uStack_cb8;
  ulong uStack_cb0;
  ulong uStack_ca8;
  ulong uStack_ca0;
  ulong uStack_c98;
  ulong uStack_c90;
  ulong uStack_c88;
  ulong uStack_c80;
  ulong uStack_c78;
  ulong uStack_c70;
  undefined8 uStack_c68;
  undefined8 uStack_c60;
  undefined8 uStack_c58;
  undefined8 uStack_c50;
  ulong uStack_c48;
  ulong uStack_c40;
  ulong uStack_c38;
  ulong uStack_c30;
  ulong uStack_c28;
  ulong uStack_c20;
  ulong uStack_c18;
  long lStack_c10;
  undefined8 uStack_c08;
  undefined8 uStack_c00;
  undefined8 uStack_bf8;
  undefined8 uStack_bf0;
  undefined8 uStack_be8;
  undefined8 uStack_be0;
  undefined8 uStack_bd8;
  undefined8 uStack_bd0;
  long lStack_bc8;
  undefined8 uStack_bc0;
  long lStack_bb8;
  undefined8 uStack_bb0;
  undefined8 uStack_ba8;
  undefined8 uStack_ba0;
  undefined8 uStack_b98;
  undefined8 uStack_b90;
  undefined8 uStack_b88;
  undefined8 uStack_b80;
  undefined8 uStack_b78;
  undefined8 uStack_b70;
  undefined8 uStack_b68;
  undefined8 uStack_b60;
  undefined8 uStack_b58;
  undefined8 uStack_b50;
  long lStack_b48;
  undefined8 uStack_b40;
  undefined8 uStack_b38;
  long lStack_b30;
  long lStack_b28;
  ulong uStack_b20;
  long lStack_b18;
  ulong uStack_b10;
  long lStack_b08;
  ulong uStack_b00;
  ulong uStack_af8;
  ulong uStack_af0;
  long lStack_ae8;
  long lStack_ae0;
  long lStack_ad8;
  long lStack_ad0;
  long lStack_ac8;
  undefined8 uStack_ac0;
  undefined8 uStack_ab8;
  undefined8 uStack_ab0;
  undefined8 uStack_aa8;
  undefined8 uStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  long lStack_a88;
  ulong uStack_a80;
  ulong uStack_a78;
  undefined8 uStack_a70;
  ulong uStack_a68;
  ulong uStack_a60;
  ulong uStack_a58;
  long lStack_a50;
  ulong uStack_a48;
  undefined8 uStack_a40;
  long lStack_a38;
  ulong uStack_a30;
  ulong uStack_a28;
  ulong uStack_a20;
  undefined8 uStack_a18;
  ulong uStack_a10;
  ulong uStack_a08;
  ulong uStack_a00;
  undefined8 uStack_9f8;
  ulong uStack_9f0;
  undefined8 uStack_9e8;
  undefined8 uStack_9e0;
  undefined8 uStack_9d8;
  undefined8 uStack_9d0;
  long lStack_9c8;
  undefined8 uStack_9c0;
  ulong uStack_9b8;
  undefined8 uStack_9b0;
  undefined8 uStack_9a8;
  ulong uStack_9a0;
  long lStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  long lStack_980;
  ulong uStack_978;
  long lStack_970;
  ulong uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined8 uStack_948;
  undefined8 uStack_940;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  long lStack_8d8;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  ulong uStack_8b0;
  ulong uStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  long lStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  ulong uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  long lStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  long lStack_7f8;
  ulong uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  long lStack_7a0;
  ulong uStack_798;
  ulong uStack_790;
  ulong uStack_788;
  long lStack_780;
  ulong uStack_778;
  long lStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  long lStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  long lStack_720;
  ulong uStack_718;
  undefined8 uStack_710;
  ulong uStack_708;
  long lStack_700;
  ulong uStack_6f8;
  ulong uStack_6f0;
  ulong uStack_6e8;
  ulong uStack_6e0;
  ulong uStack_6d8;
  undefined8 uStack_6d0;
  long lStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  long lStack_6a8;
  ulong uStack_6a0;
  ulong uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  ulong uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  long lStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  ulong uStack_4b0;
  ulong uStack_4a8;
  ulong uStack_4a0;
  ulong uStack_498;
  ulong uStack_490;
  ulong uStack_488;
  ulong uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  ulong uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  ulong uStack_428;
  ulong uStack_420;
  ulong uStack_418;
  ulong uStack_410;
  long lStack_408;
  undefined8 uStack_400;
  ulong uStack_3f8;
  undefined8 uStack_3f0;
  long lStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  long lStack_3d0;
  undefined8 uStack_3c8;
  long lStack_3c0;
  ulong uStack_3b8;
  undefined8 uStack_3b0;
  ulong uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  long lStack_380;
  ulong uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  long lStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  ulong uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  long lStack_300;
  undefined8 uStack_2f8;
  long lStack_2f0;
  ulong uStack_2e8;
  ulong uStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b8;
  ulong uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  long lStack_298;
  ulong uStack_290;
  long lStack_288;
  undefined8 uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  long lStack_268;
  undefined8 uStack_260;
  long lStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  ulong uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  ulong uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  ulong uStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  long lStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  long lStack_58;
  
  puVar5 = &uStack_cf0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_cf0 = (ulong)*(byte *)(param_1 + 8);
  uStack_ce8 = (ulong)*(byte *)(param_1 + 9);
  uStack_ce0 = (ulong)*(byte *)(param_1 + 10);
  uStack_cd8 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x88));
  uStack_cd0 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x90));
  uVar12 = *(undefined4 *)(param_1 + 0xb);
  uVar14 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar12 >> 0x18),
                                           (uint6)(byte)((uint)uVar12 >> 0x10) << 0x20) >> 0x10),
                           (ushort)(byte)uVar12) & 0xffffffffffffff01;
  uVar2 = (uint)CONCAT12((char)((uint)uVar12 >> 8),(short)uVar14);
  uVar8 = CONCAT44((int)(uVar14 >> 0x20),uVar2) & 0xffffffffff01ffff;
  uVar8 = CONCAT26((short)(uVar8 >> 0x30),CONCAT24((short)(uVar14 >> 0x20),(int)uVar8)) &
          0xff01ff01ffffffff;
  uVar10 = (ushort)(uVar8 >> 0x30);
  uStack_cc8 = (ulong)uVar2 & 0xff;
  uStack_cc0 = uVar8 >> 0x10 & 0xff;
  uStack_cb8 = (ulong)CONCAT24(uVar10,(uint)(ushort)(uVar8 >> 0x20)) & 0xffffffff;
  uStack_cb0 = (ulong)uVar10;
  uVar12 = *(undefined4 *)(param_1 + 0xf);
  uVar14 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar12 >> 0x18),
                                           (uint6)(byte)((uint)uVar12 >> 0x10) << 0x20) >> 0x10),
                           (ushort)(byte)uVar12) & 0xffffffffffffff01;
  uVar2 = (uint)CONCAT12((char)((uint)uVar12 >> 8),(short)uVar14);
  uVar8 = CONCAT44((int)(uVar14 >> 0x20),uVar2) & 0xffffffffff01ffff;
  uVar8 = CONCAT26((short)(uVar8 >> 0x30),CONCAT24((short)(uVar14 >> 0x20),(int)uVar8)) &
          0xff01ff01ffffffff;
  uVar10 = (ushort)(uVar8 >> 0x30);
  uStack_ca8 = (ulong)uVar2 & 0xff;
  uStack_ca0 = uVar8 >> 0x10 & 0xff;
  uStack_c98 = (ulong)CONCAT24(uVar10,(uint)(ushort)(uVar8 >> 0x20)) & 0xffffffff;
  uStack_c90 = (ulong)uVar10;
  uVar12 = *(undefined4 *)(param_1 + 0x13);
  uVar8 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar12 >> 0x18),
                                          (uint6)(byte)((uint)uVar12 >> 0x10) << 0x20) >> 0x10),
                          (ushort)(byte)uVar12) & 0xffffffffffffff01;
  uVar14 = CONCAT44((int)(uVar8 >> 0x20),(uint)CONCAT12((char)((uint)uVar12 >> 8),(short)uVar8)) &
           0xffffffffff01ffff;
  uVar12 = (undefined4)uVar14;
  uVar8 = CONCAT26((short)(uVar14 >> 0x30),CONCAT24((short)(uVar8 >> 0x20),uVar12)) &
          0xff01ff01ffffffff;
  uVar10 = (ushort)(uVar8 >> 0x10);
  uVar11 = (ushort)(uVar8 >> 0x30);
  uStack_c88 = (ulong)(CONCAT24(uVar10,uVar12) & 0xffff0000ffff) & 0xffffffff;
  uStack_c80 = (ulong)uVar10;
  uStack_c78 = (ulong)CONCAT24(uVar11,(uint)(ushort)(uVar8 >> 0x20)) & 0xffffffff;
  uStack_c70 = (ulong)uVar11;
  uStack_c60 = *(undefined8 *)(param_1 + 0xa0);
  uStack_c68 = *(undefined8 *)(param_1 + 0x98);
  uVar3 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0xb0);
  uStack_c58 = uVar3;
  func_0x00010bfde980();
  uVar12 = *(undefined4 *)(param_1 + 0x17);
  uStack_c28 = (ulong)*(byte *)(param_1 + 0x1b);
  uStack_c20 = (ulong)*(byte *)(param_1 + 0x1c);
  uStack_c18 = (ulong)*(byte *)(param_1 + 0x1d);
  uVar8 = (ulong)*(uint *)(param_1 + 0x68) * 0x200000 - 1;
  uVar8 = (uVar8 ^ uVar8 >> 0x18) * 0x109;
  uVar8 = (uVar8 ^ uVar8 >> 0xe) * 0x15;
  lStack_c10 = (uVar8 ^ uVar8 >> 0x1c) * 0x80000001;
  lVar7 = *(long *)(param_1 + 0xf8);
  uStack_bc0 = *(undefined8 *)(param_1 + 0x100);
  lStack_bc8 = -lVar7;
  if (-1 < lVar7) {
    lStack_bc8 = lVar7;
  }
  uVar8 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar12 >> 0x18),
                                          (uint6)(byte)((uint)uVar12 >> 0x10) << 0x20) >> 0x10),
                          (ushort)(byte)uVar12) & 0xffffffffffffff01;
  uVar2 = (uint)CONCAT12((char)((uint)uVar12 >> 8),(short)uVar8);
  uVar14 = CONCAT44((int)(uVar8 >> 0x20),uVar2) & 0xffffffffff01ffff;
  uVar8 = CONCAT26((short)(uVar14 >> 0x30),CONCAT24((short)(uVar8 >> 0x20),(int)uVar14)) &
          0xff01ff01ffffffff;
  uVar10 = (ushort)(uVar8 >> 0x30);
  uStack_c48 = (ulong)uVar2 & 0xff;
  uStack_c40 = uVar8 >> 0x10 & 0xff;
  uStack_c38 = (ulong)CONCAT24(uVar10,(uint)(ushort)(uVar8 >> 0x20)) & 0xffffffff;
  uStack_c30 = (ulong)uVar10;
  uStack_c08 = MP_INT_ABS(*(undefined8 *)(param_1 + 0xb8));
  uStack_c00 = MP_INT_ABS(*(undefined8 *)(param_1 + 0xc0));
  uStack_bf8 = MP_INT_ABS(*(undefined8 *)(param_1 + 200));
  uStack_bf0 = MP_INT_ABS(*(undefined8 *)(param_1 + 0xd0));
  uStack_be8 = MP_INT_ABS(*(undefined8 *)(param_1 + 0xd8));
  uStack_be0 = MP_INT_ABS(*(undefined8 *)(param_1 + 0xe0));
  uStack_bd8 = MP_INT_ABS(*(undefined8 *)(param_1 + 0xe8));
  uStack_bd0 = MP_INT_ABS(*(undefined8 *)(param_1 + 0xf0));
  uStack_c50 = uVar4;
  func_0x00010bfde980();
  lVar7 = *(long *)(param_1 + 0x108);
  uStack_bb0 = *(undefined8 *)(param_1 + 0x110);
  lStack_bb8 = -lVar7;
  if (-1 < lVar7) {
    lStack_bb8 = lVar7;
  }
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x118);
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x120);
  uStack_ba8 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x128);
  uStack_ba0 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x130);
  uStack_b98 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x138);
  uStack_b90 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x140);
  uStack_b88 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x148);
  uStack_b80 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x150);
  uStack_b78 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x158);
  uStack_b70 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x160);
  uStack_b68 = uVar3;
  func_0x00010bfde980();
  uStack_b58 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x168));
  uStack_b50 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x170));
  lVar7 = *(long *)(param_1 + 0x178);
  uStack_b40 = *(undefined8 *)(param_1 + 0x180);
  lStack_b48 = -lVar7;
  if (-1 < lVar7) {
    lStack_b48 = lVar7;
  }
  uStack_b60 = uVar4;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x188);
  func_0x00010bfde980();
  lVar7 = *(long *)(param_1 + 400);
  lVar1 = *(long *)(param_1 + 0x198);
  lStack_b30 = -lVar7;
  if (-1 < lVar7) {
    lStack_b30 = lVar7;
  }
  uVar8 = (ulong)*(uint *)(param_1 + 0x6c) * 0x200000 - 1;
  uVar8 = (uVar8 ^ uVar8 >> 0x18) * 0x109;
  uVar8 = (uVar8 ^ uVar8 >> 0xe) * 0x15;
  lStack_b28 = (uVar8 ^ uVar8 >> 0x1c) * 0x80000001;
  uStack_b20 = (ulong)*(byte *)(param_1 + 0x1e);
  lStack_b18 = -lVar1;
  if (-1 < lVar1) {
    lStack_b18 = lVar1;
  }
  uStack_b10 = (ulong)*(byte *)(param_1 + 0x1f);
  lVar7 = *(long *)(param_1 + 0x1a0);
  lVar1 = *(long *)(param_1 + 0x1a8);
  lStack_b08 = -lVar7;
  if (-1 < lVar7) {
    lStack_b08 = lVar7;
  }
  uStack_b00 = (ulong)*(byte *)(param_1 + 0x20);
  uStack_af8 = (ulong)*(byte *)(param_1 + 0x21);
  uStack_af0 = (ulong)*(byte *)(param_1 + 0x22);
  lStack_ae8 = -lVar1;
  if (-1 < lVar1) {
    lStack_ae8 = lVar1;
  }
  uVar8 = (ulong)*(uint *)(param_1 + 0x70) * 0x200000 - 1;
  uVar8 = (uVar8 ^ uVar8 >> 0x18) * 0x109;
  uVar8 = (uVar8 ^ uVar8 >> 0xe) * 0x15;
  lStack_ae0 = (uVar8 ^ uVar8 >> 0x1c) * 0x80000001;
  uVar8 = (ulong)*(uint *)(param_1 + 0x74) * 0x200000 - 1;
  uVar8 = (uVar8 ^ uVar8 >> 0x18) * 0x109;
  uVar8 = (uVar8 ^ uVar8 >> 0xe) * 0x15;
  lStack_ad8 = (uVar8 ^ uVar8 >> 0x1c) * 0x80000001;
  uVar8 = (ulong)*(uint *)(param_1 + 0x78) * 0x200000 - 1;
  uVar8 = (uVar8 ^ uVar8 >> 0x18) * 0x109;
  uVar8 = (uVar8 ^ uVar8 >> 0xe) * 0x15;
  lStack_ad0 = (uVar8 ^ uVar8 >> 0x1c) * 0x80000001;
  lVar7 = *(long *)(param_1 + 0x1b0);
  uVar4 = *(undefined8 *)(param_1 + 0x1b8);
  lStack_ac8 = -lVar7;
  if (-1 < lVar7) {
    lStack_ac8 = lVar7;
  }
  uStack_b38 = uVar3;
  func_0x00010bfde980();
  uStack_ab8 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x1c0));
  uStack_ab0 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x1c8));
  uVar3 = *(undefined8 *)(param_1 + 0x1d0);
  uStack_ac0 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x1d8);
  uStack_aa8 = uVar3;
  func_0x00010bfde980();
  uStack_a98 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x1e0));
  uStack_a90 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x1e8));
  lVar7 = *(long *)(param_1 + 0x1f0);
  lStack_a88 = -lVar7;
  if (-1 < lVar7) {
    lStack_a88 = lVar7;
  }
  uStack_a80 = (ulong)*(byte *)(param_1 + 0x23);
  uVar8 = ~*(ulong *)(param_1 + 0x1f8) + *(ulong *)(param_1 + 0x1f8) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_a78 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_a78 = uStack_a78 ^ uStack_a78 >> 0x16;
  uVar3 = *(undefined8 *)(param_1 + 0x200);
  uStack_aa0 = uVar4;
  func_0x00010bfde980();
  uStack_a68 = (ulong)*(byte *)(param_1 + 0x24);
  uStack_a60 = (ulong)*(byte *)(param_1 + 0x25);
  uStack_a58 = (ulong)*(byte *)(param_1 + 0x26);
  lVar7 = *(long *)(param_1 + 0x208);
  lStack_a50 = -lVar7;
  if (-1 < lVar7) {
    lStack_a50 = lVar7;
  }
  uStack_a48 = (ulong)*(byte *)(param_1 + 0x27);
  uVar4 = *(undefined8 *)(param_1 + 0x210);
  uStack_a70 = uVar3;
  func_0x00010bfde980();
  lVar7 = *(long *)(param_1 + 0x218);
  lStack_a38 = -lVar7;
  if (-1 < lVar7) {
    lStack_a38 = lVar7;
  }
  uVar8 = ~*(ulong *)(param_1 + 0x220) + *(ulong *)(param_1 + 0x220) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_a30 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_a30 = uStack_a30 ^ uStack_a30 >> 0x16;
  uStack_a28 = (ulong)*(byte *)(param_1 + 0x28);
  uStack_a20 = (ulong)*(byte *)(param_1 + 0x29);
  uVar3 = *(undefined8 *)(param_1 + 0x228);
  uStack_a40 = uVar4;
  func_0x00010bfde980();
  uVar8 = ~*(ulong *)(param_1 + 0x230) + *(ulong *)(param_1 + 0x230) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_a10 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_a10 = uStack_a10 ^ uStack_a10 >> 0x16;
  uVar8 = ~*(ulong *)(param_1 + 0x238) + *(ulong *)(param_1 + 0x238) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_a08 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_a08 = uStack_a08 ^ uStack_a08 >> 0x16;
  uVar8 = ~*(ulong *)(param_1 + 0x240) + *(ulong *)(param_1 + 0x240) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_a00 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_a00 = uStack_a00 ^ uStack_a00 >> 0x16;
  uVar4 = *(undefined8 *)(param_1 + 0x248);
  uStack_a18 = uVar3;
  func_0x00010bfde980();
  uVar8 = ~*(ulong *)(param_1 + 0x250) + *(ulong *)(param_1 + 0x250) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_9f0 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_9f0 = uStack_9f0 ^ uStack_9f0 >> 0x16;
  uStack_9e8 = MP_INT_ABS(*(undefined8 *)(param_1 + 600));
  uStack_9e0 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x260));
  uStack_9d8 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x268));
  uStack_9d0 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x270));
  uVar8 = (ulong)*(uint *)(param_1 + 0x7c) * 0x200000 - 1;
  uVar8 = (uVar8 ^ uVar8 >> 0x18) * 0x109;
  uVar8 = (uVar8 ^ uVar8 >> 0xe) * 0x15;
  lStack_9c8 = (uVar8 ^ uVar8 >> 0x1c) * 0x80000001;
  uVar3 = *(undefined8 *)(param_1 + 0x278);
  uStack_9f8 = uVar4;
  func_0x00010bfde980();
  uStack_9b0 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x288));
  uStack_9a8 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x290));
  uVar8 = ~*(ulong *)(param_1 + 0x280) + *(ulong *)(param_1 + 0x280) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_9b8 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_9b8 = uStack_9b8 ^ uStack_9b8 >> 0x16;
  uStack_9a0 = (ulong)*(byte *)(param_1 + 0x2a);
  uVar8 = (ulong)*(uint *)(param_1 + 0x80) * 0x200000 - 1;
  uVar8 = (uVar8 ^ uVar8 >> 0x18) * 0x109;
  uVar8 = (uVar8 ^ uVar8 >> 0xe) * 0x15;
  lStack_998 = (uVar8 ^ uVar8 >> 0x1c) * 0x80000001;
  uStack_990 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x298));
  uStack_988 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x2a0));
  lVar7 = *(long *)(param_1 + 0x2a8);
  lStack_980 = -lVar7;
  if (-1 < lVar7) {
    lStack_980 = lVar7;
  }
  uStack_978 = (ulong)*(byte *)(param_1 + 0x2b);
  lVar7 = *(long *)(param_1 + 0x2b0);
  lStack_970 = -lVar7;
  if (-1 < lVar7) {
    lStack_970 = lVar7;
  }
  uStack_968 = (ulong)*(byte *)(param_1 + 0x2c);
  uVar4 = *(undefined8 *)(param_1 + 0x2b8);
  uStack_9c0 = uVar3;
  func_0x00010bfde980();
  uStack_958 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x2c0));
  uStack_950 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x2c8));
  uStack_948 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x2d0));
  uStack_940 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x2d8));
  uVar3 = *(undefined8 *)(param_1 + 0x2e0);
  uStack_960 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x2e8);
  uStack_938 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x2f0);
  uStack_930 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x2f8);
  uStack_928 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x300);
  uStack_920 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x308);
  uStack_918 = uVar3;
  func_0x00010bfde980();
  uStack_908 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x310));
  uStack_900 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x318));
  uStack_8f8 = MP_INT_ABS(*(undefined8 *)(param_1 + 800));
  uStack_8f0 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x328));
  uStack_8e8 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x330));
  uStack_8e0 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x338));
  lVar7 = *(long *)(param_1 + 0x340);
  lStack_8d8 = -lVar7;
  if (-1 < lVar7) {
    lStack_8d8 = lVar7;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x348);
  uStack_910 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x350);
  uStack_8d0 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x358);
  uStack_8c8 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x360);
  uStack_8c0 = uVar3;
  func_0x00010bfde980();
  uStack_8b0 = (ulong)*(byte *)(param_1 + 0x2d);
  uStack_8a8 = (ulong)*(byte *)(param_1 + 0x2e);
  uVar3 = *(undefined8 *)(param_1 + 0x368);
  uStack_8b8 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x370);
  uStack_8a0 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x378);
  uStack_898 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x380);
  uStack_890 = uVar3;
  func_0x00010bfde980();
  lVar7 = *(long *)(param_1 + 0x388);
  lStack_880 = -lVar7;
  if (-1 < lVar7) {
    lStack_880 = lVar7;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x390);
  uStack_888 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x398);
  uStack_878 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x3a0);
  uStack_870 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x3a8);
  uStack_868 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x3b0);
  uStack_860 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x3b8);
  uStack_858 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x3c0);
  uStack_850 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x3c8);
  uStack_848 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x3d0);
  uStack_840 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x3d8);
  uStack_838 = uVar3;
  func_0x00010bfde980();
  uStack_828 = (ulong)*(byte *)(param_1 + 0x2f);
  uStack_820 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x3e0));
  uStack_818 = MP_INT_ABS(*(undefined8 *)(param_1 + 1000));
  lVar7 = *(long *)(param_1 + 0x3f0);
  lStack_810 = -lVar7;
  if (-1 < lVar7) {
    lStack_810 = lVar7;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x3f8);
  uStack_830 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x400);
  uStack_808 = uVar3;
  func_0x00010bfde980();
  lVar7 = *(long *)(param_1 + 0x408);
  lStack_7f8 = -lVar7;
  if (-1 < lVar7) {
    lStack_7f8 = lVar7;
  }
  uStack_7f0 = (ulong)*(byte *)(param_1 + 0x30);
  uStack_7e8 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x410));
  uStack_7e0 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x418));
  uStack_7d8 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x420));
  uStack_7d0 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x428));
  uStack_7c8 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x430));
  uStack_7c0 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x438));
  uVar3 = *(undefined8 *)(param_1 + 0x440);
  uStack_800 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x448);
  uStack_7b8 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x450);
  uStack_7b0 = uVar4;
  func_0x00010bfde980();
  lVar7 = *(long *)(param_1 + 0x458);
  lStack_7a0 = -lVar7;
  if (-1 < lVar7) {
    lStack_7a0 = lVar7;
  }
  uStack_798 = (ulong)*(byte *)(param_1 + 0x31);
  uStack_790 = (ulong)*(byte *)(param_1 + 0x32);
  uStack_788 = (ulong)*(byte *)(param_1 + 0x33);
  lVar7 = *(long *)(param_1 + 0x460);
  lStack_780 = -lVar7;
  if (-1 < lVar7) {
    lStack_780 = lVar7;
  }
  uStack_778 = (ulong)*(byte *)(param_1 + 0x34);
  lVar7 = *(long *)(param_1 + 0x468);
  lStack_770 = -lVar7;
  if (-1 < lVar7) {
    lStack_770 = lVar7;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x470);
  uStack_7a8 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x478);
  uStack_768 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x480);
  uStack_760 = uVar3;
  func_0x00010bfde980();
  lVar7 = *(long *)(param_1 + 0x488);
  lStack_750 = -lVar7;
  if (-1 < lVar7) {
    lStack_750 = lVar7;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x490);
  uStack_758 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x498);
  uStack_748 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x4a0);
  uStack_740 = uVar4;
  func_0x00010bfde980();
  uStack_730 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x4a8));
  uStack_728 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x4b0));
  lVar7 = *(long *)(param_1 + 0x4b8);
  lStack_720 = -lVar7;
  if (-1 < lVar7) {
    lStack_720 = lVar7;
  }
  uStack_718 = (ulong)*(byte *)(param_1 + 0x35);
  uVar4 = *(undefined8 *)(param_1 + 0x4c0);
  uStack_738 = uVar3;
  func_0x00010bfde980();
  uStack_708 = (ulong)*(byte *)(param_1 + 0x36);
  lVar7 = *(long *)(param_1 + 0x4c8);
  lStack_700 = -lVar7;
  if (-1 < lVar7) {
    lStack_700 = lVar7;
  }
  uVar12 = *(undefined4 *)(param_1 + 0x37);
  uVar8 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar12 >> 0x18),
                                          (uint6)(byte)((uint)uVar12 >> 0x10) << 0x20) >> 0x10),
                          (ushort)(byte)uVar12) & 0xffffffffffffff01;
  uVar2 = (uint)CONCAT12((char)((uint)uVar12 >> 8),(short)uVar8);
  uVar14 = CONCAT44((int)(uVar8 >> 0x20),uVar2) & 0xffffffffff01ffff;
  uVar8 = CONCAT26((short)(uVar14 >> 0x30),CONCAT24((short)(uVar8 >> 0x20),(int)uVar14)) &
          0xff01ff01ffffffff;
  uVar10 = (ushort)(uVar8 >> 0x30);
  uStack_6f8 = (ulong)uVar2 & 0xff;
  uStack_6f0 = uVar8 >> 0x10 & 0xff;
  uStack_6e8 = (ulong)CONCAT24(uVar10,(uint)(ushort)(uVar8 >> 0x20)) & 0xffffffff;
  uStack_6e0 = (ulong)uVar10;
  uStack_6d8 = (ulong)*(byte *)(param_1 + 0x3b);
  uVar3 = *(undefined8 *)(param_1 + 0x4d0);
  uStack_710 = uVar4;
  func_0x00010bfde980();
  lVar7 = *(long *)(param_1 + 0x4d8);
  lStack_6c8 = -lVar7;
  if (-1 < lVar7) {
    lStack_6c8 = lVar7;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x4e0);
  uStack_6d0 = uVar3;
  func_0x00010bfde980();
  uStack_6b8 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x4e8));
  uStack_6b0 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x4f0));
  lVar7 = *(long *)(param_1 + 0x4f8);
  lStack_6a8 = -lVar7;
  if (-1 < lVar7) {
    lStack_6a8 = lVar7;
  }
  uStack_6a0 = (ulong)*(byte *)(param_1 + 0x3c);
  uStack_698 = (ulong)*(byte *)(param_1 + 0x3d);
  uVar3 = *(undefined8 *)(param_1 + 0x500);
  uStack_6c0 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x508);
  uStack_690 = uVar3;
  func_0x00010bfde980();
  uStack_680 = *(undefined8 *)(param_1 + 0x510);
  uVar3 = *(undefined8 *)(param_1 + 0x518);
  uStack_688 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x520);
  uStack_678 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x528);
  uStack_670 = uVar4;
  func_0x00010bfde980();
  uStack_660 = *(undefined8 *)(param_1 + 0x530);
  uVar4 = *(undefined8 *)(param_1 + 0x538);
  uStack_668 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x540);
  uStack_658 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x548);
  uStack_650 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x550);
  uStack_648 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x558);
  uStack_640 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x560);
  uStack_638 = uVar4;
  func_0x00010bfde980();
  uStack_628 = *(undefined8 *)(param_1 + 0x568);
  uVar4 = *(undefined8 *)(param_1 + 0x570);
  uStack_630 = uVar3;
  func_0x00010bfde980();
  uStack_618 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x578));
  uStack_610 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x580));
  uStack_608 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x588));
  uStack_600 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x590));
  uStack_5f8 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x598));
  uStack_5f0 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x5a0));
  uStack_5e8 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x5a8));
  uStack_5e0 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x5b0));
  uStack_5d8 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x5b8));
  uStack_5d0 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x5c0));
  uStack_5c8 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x5c8));
  uStack_5c0 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x5d0));
  uStack_5b8 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x5d8));
  uStack_5b0 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x5e0));
  uStack_5a8 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x5e8));
  uStack_5a0 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x5f0));
  uStack_598 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x5f8));
  uStack_590 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x600));
  uStack_588 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x608));
  uStack_580 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x610));
  uStack_578 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x618));
  uStack_570 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x620));
  uVar3 = *(undefined8 *)(param_1 + 0x628);
  uStack_620 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x630);
  uStack_568 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x638);
  uStack_560 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x640);
  uStack_558 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x648);
  uStack_550 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x650);
  uStack_548 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x658);
  uStack_540 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x660);
  uStack_538 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x668);
  uStack_530 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x670);
  uStack_528 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x678);
  uStack_520 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x680);
  uStack_518 = uVar3;
  func_0x00010bfde980();
  uVar8 = ~*(ulong *)(param_1 + 0x688) + *(ulong *)(param_1 + 0x688) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_508 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_508 = uStack_508 ^ uStack_508 >> 0x16;
  uVar3 = *(undefined8 *)(param_1 + 0x690);
  uStack_510 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x698);
  uStack_500 = uVar3;
  func_0x00010bfde980();
  lVar7 = *(long *)(param_1 + 0x6a0);
  lStack_4f0 = -lVar7;
  if (-1 < lVar7) {
    lStack_4f0 = lVar7;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x6a8);
  uStack_4f8 = uVar4;
  func_0x00010bfde980();
  uStack_4e0 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x6b0));
  uStack_4d8 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x6b8));
  uStack_4d0 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x6c0));
  uStack_4c8 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x6c8));
  uStack_4c0 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x6d0));
  uStack_4b8 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x6d8));
  uVar12 = *(undefined4 *)(param_1 + 0x3e);
  uVar14 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar12 >> 0x18),
                                           (uint6)(byte)((uint)uVar12 >> 0x10) << 0x20) >> 0x10),
                           (ushort)(byte)uVar12) & 0xffffffffffffff01;
  uVar2 = (uint)CONCAT12((char)((uint)uVar12 >> 8),(short)uVar14);
  uVar8 = CONCAT44((int)(uVar14 >> 0x20),uVar2) & 0xffffffffff01ffff;
  uVar8 = CONCAT26((short)(uVar8 >> 0x30),CONCAT24((short)(uVar14 >> 0x20),(int)uVar8)) &
          0xff01ff01ffffffff;
  uVar10 = (ushort)(uVar8 >> 0x30);
  uStack_4b0 = (ulong)uVar2 & 0xff;
  uStack_4a8 = uVar8 >> 0x10 & 0xff;
  uStack_4a0 = (ulong)CONCAT24(uVar10,(uint)(ushort)(uVar8 >> 0x20)) & 0xffffffff;
  uStack_498 = (ulong)uVar10;
  uStack_490 = (ulong)*(byte *)(param_1 + 0x42);
  uStack_488 = (ulong)*(byte *)(param_1 + 0x43);
  uStack_480 = (ulong)*(byte *)(param_1 + 0x44);
  uVar4 = *(undefined8 *)(param_1 + 0x6e0);
  uStack_4e8 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x6e8);
  uStack_478 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x6f0);
  uStack_470 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x6f8);
  uStack_468 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x700);
  uStack_460 = uVar3;
  func_0x00010bfde980();
  uStack_450 = *(undefined8 *)(param_1 + 0x708);
  uVar8 = ~*(ulong *)(param_1 + 0x710) + *(ulong *)(param_1 + 0x710) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_448 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_448 = uStack_448 ^ uStack_448 >> 0x16;
  uStack_440 = *(undefined8 *)(param_1 + 0x718);
  uVar3 = *(undefined8 *)(param_1 + 0x720);
  uStack_458 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x728);
  uStack_438 = uVar3;
  func_0x00010bfde980();
  uVar12 = *(undefined4 *)(param_1 + 0x45);
  uVar14 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar12 >> 0x18),
                                           (uint6)(byte)((uint)uVar12 >> 0x10) << 0x20) >> 0x10),
                           (ushort)(byte)uVar12) & 0xffffffffffffff01;
  uVar2 = (uint)CONCAT12((char)((uint)uVar12 >> 8),(short)uVar14);
  uVar8 = CONCAT44((int)(uVar14 >> 0x20),uVar2) & 0xffffffffff01ffff;
  uVar8 = CONCAT26((short)(uVar8 >> 0x30),CONCAT24((short)(uVar14 >> 0x20),(int)uVar8)) &
          0xff01ff01ffffffff;
  uVar10 = (ushort)(uVar8 >> 0x30);
  uStack_428 = (ulong)uVar2 & 0xff;
  uStack_420 = uVar8 >> 0x10 & 0xff;
  uStack_418 = (ulong)CONCAT24(uVar10,(uint)(ushort)(uVar8 >> 0x20)) & 0xffffffff;
  uStack_410 = (ulong)uVar10;
  uVar8 = (ulong)*(uint *)(param_1 + 0x84) * 0x200000 - 1;
  uVar8 = (uVar8 ^ uVar8 >> 0x18) * 0x109;
  uVar8 = (uVar8 ^ uVar8 >> 0xe) * 0x15;
  lStack_408 = (uVar8 ^ uVar8 >> 0x1c) * 0x80000001;
  uVar3 = *(undefined8 *)(param_1 + 0x730);
  uStack_430 = uVar4;
  func_0x00010bfde980();
  uStack_3f8 = (ulong)*(byte *)(param_1 + 0x49);
  uStack_3f0 = *(undefined8 *)(param_1 + 0x738);
  lVar7 = *(long *)(param_1 + 0x740);
  lStack_3e8 = -lVar7;
  if (-1 < lVar7) {
    lStack_3e8 = lVar7;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x748);
  uStack_400 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x750);
  uStack_3e0 = uVar4;
  func_0x00010bfde980();
  lVar7 = *(long *)(param_1 + 0x758);
  lStack_3d0 = -lVar7;
  if (-1 < lVar7) {
    lStack_3d0 = lVar7;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x760);
  uStack_3d8 = uVar3;
  func_0x00010bfde980();
  lVar7 = *(long *)(param_1 + 0x768);
  lStack_3c0 = -lVar7;
  if (-1 < lVar7) {
    lStack_3c0 = lVar7;
  }
  uStack_3b8 = (ulong)*(byte *)(param_1 + 0x4a);
  uVar3 = *(undefined8 *)(param_1 + 0x770);
  uStack_3c8 = uVar4;
  func_0x00010bfde980();
  uStack_3a8 = (ulong)*(byte *)(param_1 + 0x4b);
  uVar4 = *(undefined8 *)(param_1 + 0x778);
  uStack_3b0 = uVar3;
  func_0x00010bfde980();
  uStack_390 = *(undefined8 *)(param_1 + 0x788);
  uStack_398 = *(undefined8 *)(param_1 + 0x780);
  uStack_388 = *(undefined8 *)(param_1 + 0x790);
  lVar7 = *(long *)(param_1 + 0x798);
  lStack_380 = -lVar7;
  if (-1 < lVar7) {
    lStack_380 = lVar7;
  }
  uStack_378 = (ulong)*(byte *)(param_1 + 0x4c);
  uStack_370 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x7a0));
  uStack_368 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x7a8));
  uStack_360 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x7b0));
  uStack_358 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x7b8));
  uStack_350 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x7c0));
  uStack_348 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x7c8));
  lVar7 = *(long *)(param_1 + 2000);
  lStack_340 = -lVar7;
  if (-1 < lVar7) {
    lStack_340 = lVar7;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x7d8);
  uStack_3a0 = uVar4;
  func_0x00010bfde980();
  uStack_330 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x7e0));
  uStack_328 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x7e8));
  uVar4 = *(undefined8 *)(param_1 + 0x7f0);
  uStack_338 = uVar3;
  func_0x00010bfde980();
  uStack_318 = (ulong)*(byte *)(param_1 + 0x4d);
  uVar3 = *(undefined8 *)(param_1 + 0x7f8);
  uStack_320 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x800);
  uStack_310 = uVar3;
  func_0x00010bfde980();
  lVar7 = *(long *)(param_1 + 0x808);
  lStack_300 = -lVar7;
  if (-1 < lVar7) {
    lStack_300 = lVar7;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x810);
  uStack_308 = uVar4;
  func_0x00010bfde980();
  lVar7 = *(long *)(param_1 + 0x818);
  lStack_2f0 = -lVar7;
  if (-1 < lVar7) {
    lStack_2f0 = lVar7;
  }
  uVar8 = ~*(ulong *)(param_1 + 0x820) + *(ulong *)(param_1 + 0x820) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_2e8 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_2e8 = uStack_2e8 ^ uStack_2e8 >> 0x16;
  uVar8 = ~*(ulong *)(param_1 + 0x828) + *(ulong *)(param_1 + 0x828) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_2e0 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_2e0 = uStack_2e0 ^ uStack_2e0 >> 0x16;
  uVar8 = ~*(ulong *)(param_1 + 0x830) + *(ulong *)(param_1 + 0x830) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_2d8 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_2d8 = uStack_2d8 ^ uStack_2d8 >> 0x16;
  uVar8 = ~*(ulong *)(param_1 + 0x838) + *(ulong *)(param_1 + 0x838) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_2d0 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_2d0 = uStack_2d0 ^ uStack_2d0 >> 0x16;
  uVar12 = *(undefined4 *)(param_1 + 0x4e);
  uVar8 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar12 >> 0x18),
                                          (uint6)(byte)((uint)uVar12 >> 0x10) << 0x20) >> 0x10),
                          (ushort)(byte)uVar12) & 0xffffffffffffff01;
  uVar2 = (uint)CONCAT12((char)((uint)uVar12 >> 8),(short)uVar8);
  uVar14 = CONCAT44((int)(uVar8 >> 0x20),uVar2) & 0xffffffffff01ffff;
  uVar8 = CONCAT26((short)(uVar14 >> 0x30),CONCAT24((short)(uVar8 >> 0x20),(int)uVar14)) &
          0xff01ff01ffffffff;
  uVar10 = (ushort)(uVar8 >> 0x30);
  uStack_2c8 = (ulong)uVar2 & 0xff;
  uStack_2c0 = uVar8 >> 0x10 & 0xff;
  uStack_2b8 = (ulong)CONCAT24(uVar10,(uint)(ushort)(uVar8 >> 0x20)) & 0xffffffff;
  uStack_2b0 = (ulong)uVar10;
  uVar4 = *(undefined8 *)(param_1 + 0x840);
  uStack_2f8 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x848);
  uStack_2a8 = uVar4;
  func_0x00010bfde980();
  lVar7 = *(long *)(param_1 + 0x850);
  lStack_298 = -lVar7;
  if (-1 < lVar7) {
    lStack_298 = lVar7;
  }
  uStack_290 = (ulong)*(byte *)(param_1 + 0x52);
  lVar7 = *(long *)(param_1 + 0x858);
  lStack_288 = -lVar7;
  if (-1 < lVar7) {
    lStack_288 = lVar7;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x860);
  uStack_2a0 = uVar3;
  func_0x00010bfde980();
  uStack_278 = (ulong)*(byte *)(param_1 + 0x53);
  uStack_270 = (ulong)*(byte *)(param_1 + 0x54);
  lVar7 = *(long *)(param_1 + 0x868);
  lStack_268 = -lVar7;
  if (-1 < lVar7) {
    lStack_268 = lVar7;
  }
  uStack_260 = *(undefined8 *)(param_1 + 0x870);
  lVar7 = *(long *)(param_1 + 0x878);
  lStack_258 = -lVar7;
  if (-1 < lVar7) {
    lStack_258 = lVar7;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x880);
  uStack_280 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x888);
  uStack_250 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x890);
  uStack_248 = uVar4;
  func_0x00010bfde980();
  uStack_238 = (ulong)*(byte *)(param_1 + 0x55);
  uStack_230 = *(undefined8 *)(param_1 + 0x898);
  uVar4 = *(undefined8 *)(param_1 + 0x8a0);
  uStack_240 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x8a8);
  uStack_228 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x8b0);
  uStack_220 = uVar3;
  func_0x00010bfde980();
  lVar7 = *(long *)(param_1 + 0x8b8);
  lStack_210 = -lVar7;
  if (-1 < lVar7) {
    lStack_210 = lVar7;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x8c0);
  uStack_218 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x8c8);
  uStack_208 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x8d0);
  uStack_200 = uVar4;
  func_0x00010bfde980();
  uStack_1f0 = (ulong)*(byte *)(param_1 + 0x56);
  uVar4 = *(undefined8 *)(param_1 + 0x8d8);
  uStack_1f8 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x8e0);
  uStack_1e8 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x8e8);
  uStack_1e0 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x8f0);
  uStack_1d8 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x8f8);
  uStack_1d0 = uVar3;
  func_0x00010bfde980();
  uStack_1c0 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x900));
  uStack_1b8 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x908));
  uVar3 = *(undefined8 *)(param_1 + 0x910);
  uStack_1c8 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x918);
  uStack_1b0 = uVar3;
  func_0x00010bfde980();
  lVar7 = *(long *)(param_1 + 0x920);
  lStack_1a0 = -lVar7;
  if (-1 < lVar7) {
    lStack_1a0 = lVar7;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x928);
  uStack_1a8 = uVar4;
  func_0x00010bfde980();
  uVar12 = *(undefined4 *)(param_1 + 0x57);
  uVar14 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar12 >> 0x18),
                                           (uint6)(byte)((uint)uVar12 >> 0x10) << 0x20) >> 0x10),
                           (ushort)(byte)uVar12) & 0xffffffffffffff01;
  uVar2 = (uint)CONCAT12((char)((uint)uVar12 >> 8),(short)uVar14);
  uVar8 = CONCAT44((int)(uVar14 >> 0x20),uVar2) & 0xffffffffff01ffff;
  uVar8 = CONCAT26((short)(uVar8 >> 0x30),CONCAT24((short)(uVar14 >> 0x20),(int)uVar8)) &
          0xff01ff01ffffffff;
  uVar10 = (ushort)(uVar8 >> 0x30);
  uStack_190 = (ulong)uVar2 & 0xff;
  uStack_188 = uVar8 >> 0x10 & 0xff;
  uStack_180 = (ulong)CONCAT24(uVar10,(uint)(ushort)(uVar8 >> 0x20)) & 0xffffffff;
  uStack_178 = (ulong)uVar10;
  uVar4 = *(undefined8 *)(param_1 + 0x930);
  uStack_198 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x938);
  uStack_170 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x940);
  uStack_168 = uVar3;
  func_0x00010bfde980();
  uStack_158 = (ulong)*(byte *)(param_1 + 0x5b);
  lVar7 = *(long *)(param_1 + 0x948);
  lStack_150 = -lVar7;
  if (-1 < lVar7) {
    lStack_150 = lVar7;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x950);
  uStack_160 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x958);
  uStack_148 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x960);
  uStack_140 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x968);
  uStack_138 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x970);
  uStack_130 = uVar4;
  func_0x00010bfde980();
  uStack_120 = *(undefined8 *)(param_1 + 0x978);
  uVar12 = *(undefined4 *)(param_1 + 0x5c);
  uVar14 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar12 >> 0x18),
                                           (uint6)(byte)((uint)uVar12 >> 0x10) << 0x20) >> 0x10),
                           (ushort)(byte)uVar12) & 0xffffffffffffff01;
  uVar2 = (uint)CONCAT12((char)((uint)uVar12 >> 8),(short)uVar14);
  uVar8 = CONCAT44((int)(uVar14 >> 0x20),uVar2) & 0xffffffffff01ffff;
  uVar8 = CONCAT26((short)(uVar8 >> 0x30),CONCAT24((short)(uVar14 >> 0x20),(int)uVar8)) &
          0xff01ff01ffffffff;
  uVar10 = (ushort)(uVar8 >> 0x30);
  uStack_118 = (ulong)uVar2 & 0xff;
  uStack_110 = uVar8 >> 0x10 & 0xff;
  uStack_108 = (ulong)CONCAT24(uVar10,(uint)(ushort)(uVar8 >> 0x20)) & 0xffffffff;
  uStack_100 = (ulong)uVar10;
  uVar4 = *(undefined8 *)(param_1 + 0x980);
  uStack_128 = uVar3;
  func_0x00010bfde980();
  uStack_f0 = (ulong)*(byte *)(param_1 + 0x60);
  uVar3 = *(undefined8 *)(param_1 + 0x988);
  uStack_f8 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x990);
  uStack_e8 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x998);
  uStack_e0 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x9a0);
  uStack_d8 = uVar3;
  func_0x00010bfde980();
  uStack_c8 = (ulong)*(byte *)(param_1 + 0x61);
  lVar7 = *(long *)(param_1 + 0x9a8);
  lStack_c0 = -lVar7;
  if (-1 < lVar7) {
    lStack_c0 = lVar7;
  }
  uStack_b8 = (ulong)*(byte *)(param_1 + 0x62);
  uStack_b0 = (ulong)*(byte *)(param_1 + 99);
  uVar3 = *(undefined8 *)(param_1 + 0x9b0);
  uStack_d0 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x9b8);
  uStack_a8 = uVar3;
  func_0x00010bfde980();
  uStack_98 = (ulong)*(byte *)(param_1 + 100);
  uVar3 = *(undefined8 *)(param_1 + 0x9c0);
  uStack_a0 = uVar4;
  func_0x00010bfde980();
  uStack_88 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x9c8));
  uStack_80 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x9d0));
  uVar4 = *(undefined8 *)(param_1 + 0x9d8);
  uStack_90 = uVar3;
  func_0x00010bfde980();
  uStack_70 = (ulong)*(byte *)(param_1 + 0x65);
  uStack_68 = (ulong)*(byte *)(param_1 + 0x66);
  uStack_60 = (ulong)*(byte *)(param_1 + 0x67);
  uStack_78 = uVar4;
  func_0x000107c3191c(&uStack_cf0,0x193);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar5 == (ulong *)param_3) {
LAB_10b078fe4:
    puVar9 = (undefined1 *)0x1;
  }
  else {
    puVar9 = (undefined1 *)0x0;
    if ((puVar5 == (ulong *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b078ff0;
    puVar9 = (undefined1 *)puVar5;
    _objc_opt_class(puVar5);
    puVar6 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar9);
    if ((((((((ulong)puVar6 & 1) != 0) &&
           (((((((*(char *)((long)puVar5 + 8) == param_3[8] &&
                 (*(char *)((long)puVar5 + 9) == param_3[9])) &&
                (*(char *)((long)puVar5 + 10) == param_3[10])) &&
               ((*(long *)((long)puVar5 + 0x88) == *(long *)(param_3 + 0x88) &&
                (*(long *)((long)puVar5 + 0x90) == *(long *)(param_3 + 0x90))))) &&
              (*(char *)((long)puVar5 + 0xb) == param_3[0xb])) &&
             ((*(char *)((long)puVar5 + 0xc) == param_3[0xc] &&
              (*(char *)((long)puVar5 + 0xd) == param_3[0xd])))) &&
            (*(char *)((long)puVar5 + 0xe) == param_3[0xe])))) &&
          ((((*(char *)((long)puVar5 + 0xf) == param_3[0xf] &&
             (*(char *)((long)puVar5 + 0x10) == param_3[0x10])) &&
            (*(char *)((long)puVar5 + 0x11) == param_3[0x11])) &&
           (((*(char *)((long)puVar5 + 0x12) == param_3[0x12] &&
             (*(char *)((long)puVar5 + 0x13) == param_3[0x13])) &&
            (*(char *)((long)puVar5 + 0x14) == param_3[0x14])))))) &&
         ((((*(char *)((long)puVar5 + 0x15) == param_3[0x15] &&
            (*(char *)((long)puVar5 + 0x16) == param_3[0x16])) &&
           ((((*(long *)((long)puVar5 + 0x98) == *(long *)(param_3 + 0x98) &&
              (((*(long *)((long)puVar5 + 0xa0) == *(long *)(param_3 + 0xa0) &&
                (*(char *)((long)puVar5 + 0x17) == param_3[0x17])) &&
               (*(char *)((long)puVar5 + 0x18) == param_3[0x18])))) &&
             ((*(char *)((long)puVar5 + 0x19) == param_3[0x19] &&
              (*(char *)((long)puVar5 + 0x1a) == param_3[0x1a])))) &&
            (*(char *)((long)puVar5 + 0x1b) == param_3[0x1b])))) &&
          (((((*(char *)((long)puVar5 + 0x1c) == param_3[0x1c] &&
              (*(char *)((long)puVar5 + 0x1d) == param_3[0x1d])) &&
             ((*(long *)((long)puVar5 + 0xb8) == *(long *)(param_3 + 0xb8) &&
              ((((*(long *)((long)puVar5 + 0xc0) == *(long *)(param_3 + 0xc0) &&
                 (*(long *)((long)puVar5 + 200) == *(long *)(param_3 + 200))) &&
                (*(long *)((long)puVar5 + 0xd0) == *(long *)(param_3 + 0xd0))) &&
               ((*(long *)((long)puVar5 + 0xd8) == *(long *)(param_3 + 0xd8) &&
                (*(long *)((long)puVar5 + 0xe0) == *(long *)(param_3 + 0xe0))))))))) &&
            (*(long *)((long)puVar5 + 0xe8) == *(long *)(param_3 + 0xe8))) &&
           ((*(long *)((long)puVar5 + 0xf0) == *(long *)(param_3 + 0xf0) &&
            (*(long *)((long)puVar5 + 0xf8) == *(long *)(param_3 + 0xf8))))))))) &&
        ((((*(long *)((long)puVar5 + 0x108) == *(long *)(param_3 + 0x108) &&
           (((*(long *)((long)puVar5 + 0x168) == *(long *)(param_3 + 0x168) &&
             (*(long *)((long)puVar5 + 0x170) == *(long *)(param_3 + 0x170))) &&
            (*(long *)((long)puVar5 + 0x178) == *(long *)(param_3 + 0x178))))) &&
          ((((*(long *)((long)puVar5 + 400) == *(long *)(param_3 + 400) &&
             (*(char *)((long)puVar5 + 0x1e) == param_3[0x1e])) &&
            (*(long *)((long)puVar5 + 0x198) == *(long *)(param_3 + 0x198))) &&
           (((*(char *)((long)puVar5 + 0x1f) == param_3[0x1f] &&
             (*(long *)((long)puVar5 + 0x1a0) == *(long *)(param_3 + 0x1a0))) &&
            ((*(char *)((long)puVar5 + 0x20) == param_3[0x20] &&
             (((*(char *)((long)puVar5 + 0x21) == param_3[0x21] &&
               (*(char *)((long)puVar5 + 0x22) == param_3[0x22])) &&
              (*(long *)((long)puVar5 + 0x1a8) == *(long *)(param_3 + 0x1a8))))))))))) &&
         ((((*(long *)((long)puVar5 + 0x1b0) == *(long *)(param_3 + 0x1b0) &&
            (*(long *)((long)puVar5 + 0x1c0) == *(long *)(param_3 + 0x1c0))) &&
           ((*(long *)((long)puVar5 + 0x1c8) == *(long *)(param_3 + 0x1c8) &&
            (((*(long *)((long)puVar5 + 0x1e0) == *(long *)(param_3 + 0x1e0) &&
              (*(long *)((long)puVar5 + 0x1e8) == *(long *)(param_3 + 0x1e8))) &&
             ((*(long *)((long)puVar5 + 0x1f0) == *(long *)(param_3 + 0x1f0) &&
              ((((*(char *)((long)puVar5 + 0x23) == param_3[0x23] &&
                 (*(char *)((long)puVar5 + 0x24) == param_3[0x24])) &&
                (*(char *)((long)puVar5 + 0x25) == param_3[0x25])) &&
               ((*(char *)((long)puVar5 + 0x26) == param_3[0x26] &&
                (*(long *)((long)puVar5 + 0x208) == *(long *)(param_3 + 0x208))))))))))))) &&
          (((((*(char *)((long)puVar5 + 0x27) == param_3[0x27] &&
              (((((((*(long *)((long)puVar5 + 0x218) == *(long *)(param_3 + 0x218) &&
                    (*(char *)((long)puVar5 + 0x28) == param_3[0x28])) &&
                   (((*(char *)((long)puVar5 + 0x29) == param_3[0x29] &&
                     (((*(long *)((long)puVar5 + 600) == *(long *)(param_3 + 600) &&
                       (*(long *)((long)puVar5 + 0x260) == *(long *)(param_3 + 0x260))) &&
                      (*(long *)((long)puVar5 + 0x268) == *(long *)(param_3 + 0x268))))) &&
                    (((*(long *)((long)puVar5 + 0x270) == *(long *)(param_3 + 0x270) &&
                      (*(long *)((long)puVar5 + 0x288) == *(long *)(param_3 + 0x288))) &&
                     (*(long *)((long)puVar5 + 0x290) == *(long *)(param_3 + 0x290))))))) &&
                  ((*(char *)((long)puVar5 + 0x2a) == param_3[0x2a] &&
                   (*(long *)((long)puVar5 + 0x298) == *(long *)(param_3 + 0x298))))) &&
                 (((*(long *)((long)puVar5 + 0x2a0) == *(long *)(param_3 + 0x2a0) &&
                   (((*(long *)((long)puVar5 + 0x2a8) == *(long *)(param_3 + 0x2a8) &&
                     (*(char *)((long)puVar5 + 0x2b) == param_3[0x2b])) &&
                    (*(long *)((long)puVar5 + 0x2b0) == *(long *)(param_3 + 0x2b0))))) &&
                  (((*(char *)((long)puVar5 + 0x2c) == param_3[0x2c] &&
                    (*(long *)((long)puVar5 + 0x2c0) == *(long *)(param_3 + 0x2c0))) &&
                   ((*(long *)((long)puVar5 + 0x2c8) == *(long *)(param_3 + 0x2c8) &&
                    ((((((*(long *)((long)puVar5 + 0x2d0) == *(long *)(param_3 + 0x2d0) &&
                         (*(long *)((long)puVar5 + 0x2d8) == *(long *)(param_3 + 0x2d8))) &&
                        ((*(long *)((long)puVar5 + 0x310) == *(long *)(param_3 + 0x310) &&
                         (((((*(long *)((long)puVar5 + 0x318) == *(long *)(param_3 + 0x318) &&
                             (*(long *)((long)puVar5 + 800) == *(long *)(param_3 + 800))) &&
                            (*(long *)((long)puVar5 + 0x328) == *(long *)(param_3 + 0x328))) &&
                           ((*(long *)((long)puVar5 + 0x330) == *(long *)(param_3 + 0x330) &&
                            (*(long *)((long)puVar5 + 0x338) == *(long *)(param_3 + 0x338))))) &&
                          (*(long *)((long)puVar5 + 0x340) == *(long *)(param_3 + 0x340))))))) &&
                       ((*(char *)((long)puVar5 + 0x2d) == param_3[0x2d] &&
                        (*(char *)((long)puVar5 + 0x2e) == param_3[0x2e])))) &&
                      (*(long *)((long)puVar5 + 0x388) == *(long *)(param_3 + 0x388))) &&
                     (((*(char *)((long)puVar5 + 0x2f) == param_3[0x2f] &&
                       (*(long *)((long)puVar5 + 0x3e0) == *(long *)(param_3 + 0x3e0))) &&
                      (*(long *)((long)puVar5 + 1000) == *(long *)(param_3 + 1000))))))))))))) &&
                (((*(long *)((long)puVar5 + 0x3f0) == *(long *)(param_3 + 0x3f0) &&
                  (*(long *)((long)puVar5 + 0x408) == *(long *)(param_3 + 0x408))) &&
                 ((*(char *)((long)puVar5 + 0x30) == param_3[0x30] &&
                  ((*(long *)((long)puVar5 + 0x410) == *(long *)(param_3 + 0x410) &&
                   (*(long *)((long)puVar5 + 0x418) == *(long *)(param_3 + 0x418))))))))) &&
               (*(long *)((long)puVar5 + 0x420) == *(long *)(param_3 + 0x420))))) &&
             (((((*(long *)((long)puVar5 + 0x428) == *(long *)(param_3 + 0x428) &&
                 (*(long *)((long)puVar5 + 0x430) == *(long *)(param_3 + 0x430))) &&
                (*(long *)((long)puVar5 + 0x438) == *(long *)(param_3 + 0x438))) &&
               ((*(long *)((long)puVar5 + 0x458) == *(long *)(param_3 + 0x458) &&
                (*(char *)((long)puVar5 + 0x31) == param_3[0x31])))) &&
              (((*(char *)((long)puVar5 + 0x32) == param_3[0x32] &&
                ((*(char *)((long)puVar5 + 0x33) == param_3[0x33] &&
                 (*(long *)((long)puVar5 + 0x460) == *(long *)(param_3 + 0x460))))) &&
               (*(char *)((long)puVar5 + 0x34) == param_3[0x34])))))) &&
            (((((*(long *)((long)puVar5 + 0x468) == *(long *)(param_3 + 0x468) &&
                (*(long *)((long)puVar5 + 0x488) == *(long *)(param_3 + 0x488))) &&
               (*(long *)((long)puVar5 + 0x4a8) == *(long *)(param_3 + 0x4a8))) &&
              ((*(long *)((long)puVar5 + 0x4b0) == *(long *)(param_3 + 0x4b0) &&
               (*(long *)((long)puVar5 + 0x4b8) == *(long *)(param_3 + 0x4b8))))) &&
             ((*(char *)((long)puVar5 + 0x35) == param_3[0x35] &&
              ((*(char *)((long)puVar5 + 0x36) == param_3[0x36] &&
               (*(long *)((long)puVar5 + 0x4c8) == *(long *)(param_3 + 0x4c8))))))))) &&
           (((*(char *)((long)puVar5 + 0x37) == param_3[0x37] &&
             (((*(char *)((long)puVar5 + 0x38) == param_3[0x38] &&
               (*(char *)((long)puVar5 + 0x39) == param_3[0x39])) &&
              (*(char *)((long)puVar5 + 0x3a) == param_3[0x3a])))) &&
            ((((*(char *)((long)puVar5 + 0x3b) == param_3[0x3b] &&
               (*(long *)((long)puVar5 + 0x4d8) == *(long *)(param_3 + 0x4d8))) &&
              ((*(long *)((long)puVar5 + 0x4e8) == *(long *)(param_3 + 0x4e8) &&
               ((*(long *)((long)puVar5 + 0x4f0) == *(long *)(param_3 + 0x4f0) &&
                (*(long *)((long)puVar5 + 0x4f8) == *(long *)(param_3 + 0x4f8))))))) &&
             (*(char *)((long)puVar5 + 0x3c) == param_3[0x3c])))))))))))) &&
       ((((((((*(char *)((long)puVar5 + 0x3d) == param_3[0x3d] &&
              (*(long *)((long)puVar5 + 0x510) == *(long *)(param_3 + 0x510))) &&
             (*(long *)((long)puVar5 + 0x530) == *(long *)(param_3 + 0x530))) &&
            ((*(long *)((long)puVar5 + 0x568) == *(long *)(param_3 + 0x568) &&
             (*(long *)((long)puVar5 + 0x578) == *(long *)(param_3 + 0x578))))) &&
           ((*(long *)((long)puVar5 + 0x580) == *(long *)(param_3 + 0x580) &&
            ((*(long *)((long)puVar5 + 0x588) == *(long *)(param_3 + 0x588) &&
             (*(long *)((long)puVar5 + 0x590) == *(long *)(param_3 + 0x590))))))) &&
          ((((*(long *)((long)puVar5 + 0x598) == *(long *)(param_3 + 0x598) &&
             ((((*(long *)((long)puVar5 + 0x5a0) == *(long *)(param_3 + 0x5a0) &&
                (*(long *)((long)puVar5 + 0x5a8) == *(long *)(param_3 + 0x5a8))) &&
               (*(long *)((long)puVar5 + 0x5b0) == *(long *)(param_3 + 0x5b0))) &&
              ((*(long *)((long)puVar5 + 0x5b8) == *(long *)(param_3 + 0x5b8) &&
               (*(long *)((long)puVar5 + 0x5c0) == *(long *)(param_3 + 0x5c0))))))) &&
            (((((*(long *)((long)puVar5 + 0x5c8) == *(long *)(param_3 + 0x5c8) &&
                ((*(long *)((long)puVar5 + 0x5d0) == *(long *)(param_3 + 0x5d0) &&
                 (*(long *)((long)puVar5 + 0x5d8) == *(long *)(param_3 + 0x5d8))))) &&
               (*(long *)((long)puVar5 + 0x5e0) == *(long *)(param_3 + 0x5e0))) &&
              (((((((*(long *)((long)puVar5 + 0x5e8) == *(long *)(param_3 + 0x5e8) &&
                    (*(long *)((long)puVar5 + 0x5f0) == *(long *)(param_3 + 0x5f0))) &&
                   (*(long *)((long)puVar5 + 0x5f8) == *(long *)(param_3 + 0x5f8))) &&
                  (((*(long *)((long)puVar5 + 0x600) == *(long *)(param_3 + 0x600) &&
                    (*(long *)((long)puVar5 + 0x608) == *(long *)(param_3 + 0x608))) &&
                   ((*(long *)((long)puVar5 + 0x610) == *(long *)(param_3 + 0x610) &&
                    ((*(long *)((long)puVar5 + 0x618) == *(long *)(param_3 + 0x618) &&
                     (*(long *)((long)puVar5 + 0x620) == *(long *)(param_3 + 0x620))))))))) &&
                 (*(long *)((long)puVar5 + 0x6a0) == *(long *)(param_3 + 0x6a0))) &&
                (((*(long *)((long)puVar5 + 0x6b0) == *(long *)(param_3 + 0x6b0) &&
                  (*(long *)((long)puVar5 + 0x6b8) == *(long *)(param_3 + 0x6b8))) &&
                 (*(long *)((long)puVar5 + 0x6c0) == *(long *)(param_3 + 0x6c0))))) &&
               (((*(long *)((long)puVar5 + 0x6c8) == *(long *)(param_3 + 0x6c8) &&
                 (*(long *)((long)puVar5 + 0x6d0) == *(long *)(param_3 + 0x6d0))) &&
                ((((*(long *)((long)puVar5 + 0x6d8) == *(long *)(param_3 + 0x6d8) &&
                   ((*(char *)((long)puVar5 + 0x3e) == param_3[0x3e] &&
                    (*(char *)((long)puVar5 + 0x3f) == param_3[0x3f])))) &&
                  (*(char *)((long)puVar5 + 0x40) == param_3[0x40])) &&
                 ((((((*(char *)((long)puVar5 + 0x41) == param_3[0x41] &&
                      (*(char *)((long)puVar5 + 0x42) == param_3[0x42])) &&
                     (*(char *)((long)puVar5 + 0x43) == param_3[0x43])) &&
                    ((*(char *)((long)puVar5 + 0x44) == param_3[0x44] &&
                     (*(long *)((long)puVar5 + 0x708) == *(long *)(param_3 + 0x708))))) &&
                   (*(long *)((long)puVar5 + 0x718) == *(long *)(param_3 + 0x718))) &&
                  (((*(char *)((long)puVar5 + 0x45) == param_3[0x45] &&
                    (*(char *)((long)puVar5 + 0x46) == param_3[0x46])) &&
                   ((*(char *)((long)puVar5 + 0x47) == param_3[0x47] &&
                    (((*(char *)((long)puVar5 + 0x48) == param_3[0x48] &&
                      (*(char *)((long)puVar5 + 0x49) == param_3[0x49])) &&
                     (*(long *)((long)puVar5 + 0x738) == *(long *)(param_3 + 0x738)))))))))))))))))
             && ((*(long *)((long)puVar5 + 0x740) == *(long *)(param_3 + 0x740) &&
                 (*(long *)((long)puVar5 + 0x758) == *(long *)(param_3 + 0x758))))))) &&
           ((((*(long *)((long)puVar5 + 0x768) == *(long *)(param_3 + 0x768) &&
              ((((*(char *)((long)puVar5 + 0x4a) == param_3[0x4a] &&
                 (*(char *)((long)puVar5 + 0x4b) == param_3[0x4b])) &&
                ((*(long *)((long)puVar5 + 0x780) == *(long *)(param_3 + 0x780) &&
                 (((*(long *)((long)puVar5 + 0x788) == *(long *)(param_3 + 0x788) &&
                   (*(long *)((long)puVar5 + 0x790) == *(long *)(param_3 + 0x790))) &&
                  (*(long *)((long)puVar5 + 0x798) == *(long *)(param_3 + 0x798))))))) &&
               ((*(char *)((long)puVar5 + 0x4c) == param_3[0x4c] &&
                (*(long *)((long)puVar5 + 0x7a0) == *(long *)(param_3 + 0x7a0))))))) &&
             (*(long *)((long)puVar5 + 0x7a8) == *(long *)(param_3 + 0x7a8))) &&
            (((*(long *)((long)puVar5 + 0x7b0) == *(long *)(param_3 + 0x7b0) &&
              (*(long *)((long)puVar5 + 0x7b8) == *(long *)(param_3 + 0x7b8))) &&
             ((*(long *)((long)puVar5 + 0x7c0) == *(long *)(param_3 + 0x7c0) &&
              ((((*(long *)((long)puVar5 + 0x7c8) == *(long *)(param_3 + 0x7c8) &&
                 (*(long *)((long)puVar5 + 2000) == *(long *)(param_3 + 2000))) &&
                (*(long *)((long)puVar5 + 0x7e0) == *(long *)(param_3 + 0x7e0))) &&
               ((*(long *)((long)puVar5 + 0x7e8) == *(long *)(param_3 + 0x7e8) &&
                (*(char *)((long)puVar5 + 0x4d) == param_3[0x4d])))))))))))))) &&
         ((*(long *)((long)puVar5 + 0x808) == *(long *)(param_3 + 0x808) &&
          ((*(long *)((long)puVar5 + 0x818) == *(long *)(param_3 + 0x818) &&
           (*(char *)((long)puVar5 + 0x4e) == param_3[0x4e])))))) &&
        (((((*(char *)((long)puVar5 + 0x4f) == param_3[0x4f] &&
            (((*(char *)((long)puVar5 + 0x50) == param_3[0x50] &&
              (*(char *)((long)puVar5 + 0x51) == param_3[0x51])) &&
             (*(long *)((long)puVar5 + 0x850) == *(long *)(param_3 + 0x850))))) &&
           (((*(char *)((long)puVar5 + 0x52) == param_3[0x52] &&
             (*(long *)((long)puVar5 + 0x858) == *(long *)(param_3 + 0x858))) &&
            (*(char *)((long)puVar5 + 0x53) == param_3[0x53])))) &&
          ((((*(char *)((long)puVar5 + 0x54) == param_3[0x54] &&
             (*(long *)((long)puVar5 + 0x868) == *(long *)(param_3 + 0x868))) &&
            ((*(long *)((long)puVar5 + 0x870) == *(long *)(param_3 + 0x870) &&
             (((*(long *)((long)puVar5 + 0x878) == *(long *)(param_3 + 0x878) &&
               (*(char *)((long)puVar5 + 0x55) == param_3[0x55])) &&
              (*(long *)((long)puVar5 + 0x898) == *(long *)(param_3 + 0x898))))))) &&
           ((((*(long *)((long)puVar5 + 0x8b8) == *(long *)(param_3 + 0x8b8) &&
              (*(char *)((long)puVar5 + 0x56) == param_3[0x56])) &&
             (*(long *)((long)puVar5 + 0x900) == *(long *)(param_3 + 0x900))) &&
            (((((*(long *)((long)puVar5 + 0x908) == *(long *)(param_3 + 0x908) &&
                (*(long *)((long)puVar5 + 0x920) == *(long *)(param_3 + 0x920))) &&
               ((*(char *)((long)puVar5 + 0x57) == param_3[0x57] &&
                ((((*(char *)((long)puVar5 + 0x58) == param_3[0x58] &&
                   (*(char *)((long)puVar5 + 0x59) == param_3[0x59])) &&
                  (*(char *)((long)puVar5 + 0x5a) == param_3[0x5a])) &&
                 ((*(char *)((long)puVar5 + 0x5b) == param_3[0x5b] &&
                  (*(long *)((long)puVar5 + 0x948) == *(long *)(param_3 + 0x948))))))))) &&
              (*(long *)((long)puVar5 + 0x978) == *(long *)(param_3 + 0x978))) &&
             (((*(char *)((long)puVar5 + 0x5c) == param_3[0x5c] &&
               (*(char *)((long)puVar5 + 0x5d) == param_3[0x5d])) &&
              (((*(char *)((long)puVar5 + 0x5e) == param_3[0x5e] &&
                (((*(char *)((long)puVar5 + 0x5f) == param_3[0x5f] &&
                  (*(char *)((long)puVar5 + 0x60) == param_3[0x60])) &&
                 (*(char *)((long)puVar5 + 0x61) == param_3[0x61])))) &&
               (((*(long *)((long)puVar5 + 0x9a8) == *(long *)(param_3 + 0x9a8) &&
                 (*(char *)((long)puVar5 + 0x62) == param_3[0x62])) &&
                (*(char *)((long)puVar5 + 99) == param_3[99])))))))))))))) &&
         (((*(char *)((long)puVar5 + 100) == param_3[100] &&
           (*(long *)((long)puVar5 + 0x9c8) == *(long *)(param_3 + 0x9c8))) &&
          ((*(long *)((long)puVar5 + 0x9d0) == *(long *)(param_3 + 0x9d0) &&
           (((*(char *)((long)puVar5 + 0x65) == param_3[0x65] &&
             (*(char *)((long)puVar5 + 0x66) == param_3[0x66])) &&
            (*(char *)((long)puVar5 + 0x67) == param_3[0x67])))))))))))) {
      fVar13 = ABS(*(float *)((long)puVar5 + 0x68) - *(float *)(param_3 + 0x68));
      if ((fVar13 < 1.1754944e-38) ||
         (fVar13 < ABS(*(float *)((long)puVar5 + 0x68) + *(float *)(param_3 + 0x68)) * 1.1920929e-07
         )) {
        fVar13 = ABS(*(float *)((long)puVar5 + 0x6c) - *(float *)(param_3 + 0x6c));
        if ((fVar13 < 1.1754944e-38) ||
           (fVar13 < ABS(*(float *)((long)puVar5 + 0x6c) + *(float *)(param_3 + 0x6c)) *
                     1.1920929e-07)) {
          fVar13 = ABS(*(float *)((long)puVar5 + 0x70) - *(float *)(param_3 + 0x70));
          if ((fVar13 < 1.1754944e-38) ||
             (fVar13 < ABS(*(float *)((long)puVar5 + 0x70) + *(float *)(param_3 + 0x70)) *
                       1.1920929e-07)) {
            fVar13 = ABS(*(float *)((long)puVar5 + 0x74) - *(float *)(param_3 + 0x74));
            if ((fVar13 < 1.1754944e-38) ||
               (fVar13 < ABS(*(float *)((long)puVar5 + 0x74) + *(float *)(param_3 + 0x74)) *
                         1.1920929e-07)) {
              fVar13 = ABS(*(float *)((long)puVar5 + 0x78) - *(float *)(param_3 + 0x78));
              if ((fVar13 < 1.1754944e-38) ||
                 (fVar13 < ABS(*(float *)((long)puVar5 + 0x78) + *(float *)(param_3 + 0x78)) *
                           1.1920929e-07)) {
                dVar15 = ABS(*(double *)((long)puVar5 + 0x1f8) - *(double *)(param_3 + 0x1f8));
                if ((dVar15 < 2.2250738585072014e-308) ||
                   (dVar15 < ABS(*(double *)((long)puVar5 + 0x1f8) + *(double *)(param_3 + 0x1f8)) *
                             2.220446049250313e-16)) {
                  dVar15 = ABS(*(double *)((long)puVar5 + 0x220) - *(double *)(param_3 + 0x220));
                  if ((dVar15 < 2.2250738585072014e-308) ||
                     (dVar15 < ABS(*(double *)((long)puVar5 + 0x220) + *(double *)(param_3 + 0x220))
                               * 2.220446049250313e-16)) {
                    dVar15 = ABS(*(double *)((long)puVar5 + 0x230) - *(double *)(param_3 + 0x230));
                    if ((dVar15 < 2.2250738585072014e-308) ||
                       (dVar15 < ABS(*(double *)((long)puVar5 + 0x230) +
                                     *(double *)(param_3 + 0x230)) * 2.220446049250313e-16)) {
                      dVar15 = ABS(*(double *)((long)puVar5 + 0x238) - *(double *)(param_3 + 0x238))
                      ;
                      if ((dVar15 < 2.2250738585072014e-308) ||
                         (dVar15 < ABS(*(double *)((long)puVar5 + 0x238) +
                                       *(double *)(param_3 + 0x238)) * 2.220446049250313e-16)) {
                        dVar15 = ABS(*(double *)((long)puVar5 + 0x240) -
                                     *(double *)(param_3 + 0x240));
                        if ((dVar15 < 2.2250738585072014e-308) ||
                           (dVar15 < ABS(*(double *)((long)puVar5 + 0x240) +
                                         *(double *)(param_3 + 0x240)) * 2.220446049250313e-16)) {
                          dVar15 = ABS(*(double *)((long)puVar5 + 0x250) -
                                       *(double *)(param_3 + 0x250));
                          if ((dVar15 < 2.2250738585072014e-308) ||
                             (dVar15 < ABS(*(double *)((long)puVar5 + 0x250) +
                                           *(double *)(param_3 + 0x250)) * 2.220446049250313e-16)) {
                            fVar13 = ABS(*(float *)((long)puVar5 + 0x7c) -
                                         *(float *)(param_3 + 0x7c));
                            if ((fVar13 < 1.1754944e-38) ||
                               (fVar13 < ABS(*(float *)((long)puVar5 + 0x7c) +
                                             *(float *)(param_3 + 0x7c)) * 1.1920929e-07)) {
                              dVar15 = ABS(*(double *)((long)puVar5 + 0x280) -
                                           *(double *)(param_3 + 0x280));
                              if ((dVar15 < 2.2250738585072014e-308) ||
                                 (dVar15 < ABS(*(double *)((long)puVar5 + 0x280) +
                                               *(double *)(param_3 + 0x280)) * 2.220446049250313e-16
                                 )) {
                                fVar13 = ABS(*(float *)((long)puVar5 + 0x80) -
                                             *(float *)(param_3 + 0x80));
                                if ((fVar13 < 1.1754944e-38) ||
                                   (fVar13 < ABS(*(float *)((long)puVar5 + 0x80) +
                                                 *(float *)(param_3 + 0x80)) * 1.1920929e-07)) {
                                  dVar15 = ABS(*(double *)((long)puVar5 + 0x688) -
                                               *(double *)(param_3 + 0x688));
                                  if ((dVar15 < 2.2250738585072014e-308) ||
                                     (dVar15 < ABS(*(double *)((long)puVar5 + 0x688) +
                                                   *(double *)(param_3 + 0x688)) *
                                               2.220446049250313e-16)) {
                                    dVar15 = ABS(*(double *)((long)puVar5 + 0x710) -
                                                 *(double *)(param_3 + 0x710));
                                    if ((dVar15 < 2.2250738585072014e-308) ||
                                       (dVar15 < ABS(*(double *)((long)puVar5 + 0x710) +
                                                     *(double *)(param_3 + 0x710)) *
                                                 2.220446049250313e-16)) {
                                      fVar13 = ABS(*(float *)((long)puVar5 + 0x84) -
                                                   *(float *)(param_3 + 0x84));
                                      if ((fVar13 < 1.1754944e-38) ||
                                         (fVar13 < ABS(*(float *)((long)puVar5 + 0x84) +
                                                       *(float *)(param_3 + 0x84)) * 1.1920929e-07))
                                      {
                                        dVar15 = ABS(*(double *)((long)puVar5 + 0x820) -
                                                     *(double *)(param_3 + 0x820));
                                        if ((dVar15 < 2.2250738585072014e-308) ||
                                           (dVar15 < ABS(*(double *)((long)puVar5 + 0x820) +
                                                         *(double *)(param_3 + 0x820)) *
                                                     2.220446049250313e-16)) {
                                          dVar15 = ABS(*(double *)((long)puVar5 + 0x828) -
                                                       *(double *)(param_3 + 0x828));
                                          if ((dVar15 < 2.2250738585072014e-308) ||
                                             (dVar15 < ABS(*(double *)((long)puVar5 + 0x828) +
                                                           *(double *)(param_3 + 0x828)) *
                                                       2.220446049250313e-16)) {
                                            dVar15 = ABS(*(double *)((long)puVar5 + 0x830) -
                                                         *(double *)(param_3 + 0x830));
                                            if ((dVar15 < 2.2250738585072014e-308) ||
                                               (dVar15 < ABS(*(double *)((long)puVar5 + 0x830) +
                                                             *(double *)(param_3 + 0x830)) *
                                                         2.220446049250313e-16)) {
                                              dVar15 = ABS(*(double *)((long)puVar5 + 0x838) -
                                                           *(double *)(param_3 + 0x838));
                                              if ((((((((dVar15 < 2.2250738585072014e-308) ||
                                                       (dVar15 < ABS(*(double *)
                                                                      ((long)puVar5 + 0x838) +
                                                                     *(double *)(param_3 + 0x838)) *
                                                                 2.220446049250313e-16)) &&
                                                      ((lVar7 = *(long *)((long)puVar5 + 0xa8),
                                                       lVar7 == *(long *)(param_3 + 0xa8) ||
                                                       (func_0x00010c071ae0(), (int)lVar7 != 0))))
                                                     && ((((((lVar7 = *(long *)((long)puVar5 + 0xb0)
                                                             , lVar7 == *(long *)(param_3 + 0xb0) ||
                                                             (func_0x00010c071ae0(), (int)lVar7 != 0
                                                             )) && ((lVar7 = *(long *)((long)puVar5
                                                                                      + 0x100),
                                                                    lVar7 == *(long *)(param_3 +
                                                                                      0x100) ||
                                                                    (func_0x00010c071ae0(),
                                                                    (int)lVar7 != 0)))) &&
                                                           (((lVar7 = *(long *)((long)puVar5 + 0x110
                                                                               ),
                                                             lVar7 == *(long *)(param_3 + 0x110) ||
                                                             (func_0x00010c071ae0(), (int)lVar7 != 0
                                                             )) && ((lVar7 = *(long *)((long)puVar5
                                                                                      + 0x118),
                                                                    lVar7 == *(long *)(param_3 +
                                                                                      0x118) ||
                                                                    (func_0x00010c071ae0(),
                                                                    (int)lVar7 != 0)))))) &&
                                                          (((lVar7 = *(long *)((long)puVar5 + 0x120)
                                                            , lVar7 == *(long *)(param_3 + 0x120) ||
                                                            (func_0x00010c071ae0(), (int)lVar7 != 0)
                                                            ) && ((lVar7 = *(long *)((long)puVar5 +
                                                                                    0x128),
                                                                  lVar7 == *(long *)(param_3 + 0x128
                                                                                    ) ||
                                                                  (func_0x00010c071ae0(),
                                                                  (int)lVar7 != 0)))))) &&
                                                         ((lVar7 = *(long *)((long)puVar5 + 0x130),
                                                          lVar7 == *(long *)(param_3 + 0x130) ||
                                                          (func_0x00010c071ae0(), (int)lVar7 != 0)))
                                                         ))) &&
                                                    (((lVar7 = *(long *)((long)puVar5 + 0x138),
                                                      lVar7 == *(long *)(param_3 + 0x138) ||
                                                      (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
                                                     (((((lVar7 = *(long *)((long)puVar5 + 0x140),
                                                         lVar7 == *(long *)(param_3 + 0x140) ||
                                                         (func_0x00010c071ae0(), (int)lVar7 != 0))
                                                        && ((lVar7 = *(long *)((long)puVar5 + 0x148)
                                                            , lVar7 == *(long *)(param_3 + 0x148) ||
                                                            (func_0x00010c071ae0(), (int)lVar7 != 0)
                                                            ))) &&
                                                       ((lVar7 = *(long *)((long)puVar5 + 0x150),
                                                        lVar7 == *(long *)(param_3 + 0x150) ||
                                                        (func_0x00010c071ae0(), (int)lVar7 != 0))))
                                                      && (((((lVar7 = *(long *)((long)puVar5 + 0x158
                                                                               ),
                                                             lVar7 == *(long *)(param_3 + 0x158) ||
                                                             (func_0x00010c071ae0(), (int)lVar7 != 0
                                                             )) && ((((lVar7 = *(long *)((long)
                                                  puVar5 + 0x160),
                                                  lVar7 == *(long *)(param_3 + 0x160) ||
                                                  (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
                                                  ((lVar7 = *(long *)((long)puVar5 + 0x180),
                                                   lVar7 == *(long *)(param_3 + 0x180) ||
                                                   (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
                                                  ((lVar7 = *(long *)((long)puVar5 + 0x188),
                                                   lVar7 == *(long *)(param_3 + 0x188) ||
                                                   (func_0x00010c071ae0(), (int)lVar7 != 0)))))) &&
                                                  ((lVar7 = *(long *)((long)puVar5 + 0x1b8),
                                                   lVar7 == *(long *)(param_3 + 0x1b8) ||
                                                   (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
                                                  ((((lVar7 = *(long *)((long)puVar5 + 0x1d0),
                                                     lVar7 == *(long *)(param_3 + 0x1d0) ||
                                                     (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
                                                    ((lVar7 = *(long *)((long)puVar5 + 0x1d8),
                                                     lVar7 == *(long *)(param_3 + 0x1d8) ||
                                                     (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
                                                   ((((lVar7 = *(long *)((long)puVar5 + 0x200),
                                                      lVar7 == *(long *)(param_3 + 0x200) ||
                                                      (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
                                                     ((lVar7 = *(long *)((long)puVar5 + 0x210),
                                                      lVar7 == *(long *)(param_3 + 0x210) ||
                                                      (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
                                                    ((((lVar7 = *(long *)((long)puVar5 + 0x228),
                                                       lVar7 == *(long *)(param_3 + 0x228) ||
                                                       (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
                                                      ((lVar7 = *(long *)((long)puVar5 + 0x248),
                                                       lVar7 == *(long *)(param_3 + 0x248) ||
                                                       (func_0x00010c071ae0(), (int)lVar7 != 0))))
                                                     && ((lVar7 = *(long *)((long)puVar5 + 0x278),
                                                         lVar7 == *(long *)(param_3 + 0x278) ||
                                                         (func_0x00010c071ae0(), (int)lVar7 != 0))))
                                                    )))))))))))) &&
                                                  ((((lVar7 = *(long *)((long)puVar5 + 0x2b8),
                                                     lVar7 == *(long *)(param_3 + 0x2b8) ||
                                                     (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
                                                    ((((lVar7 = *(long *)((long)puVar5 + 0x2e0),
                                                       lVar7 == *(long *)(param_3 + 0x2e0) ||
                                                       (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
                                                      ((lVar7 = *(long *)((long)puVar5 + 0x2e8),
                                                       lVar7 == *(long *)(param_3 + 0x2e8) ||
                                                       (func_0x00010c071ae0(), (int)lVar7 != 0))))
                                                     && ((((lVar7 = *(long *)((long)puVar5 + 0x2f0),
                                                           lVar7 == *(long *)(param_3 + 0x2f0) ||
                                                           (func_0x00010c071ae0(), (int)lVar7 != 0))
                                                          && ((lVar7 = *(long *)((long)puVar5 +
                                                                                0x2f8),
                                                              lVar7 == *(long *)(param_3 + 0x2f8) ||
                                                              (func_0x00010c071ae0(),
                                                              (int)lVar7 != 0)))) &&
                                                         (((((lVar7 = *(long *)((long)puVar5 + 0x300
                                                                               ),
                                                             lVar7 == *(long *)(param_3 + 0x300) ||
                                                             (func_0x00010c071ae0(), (int)lVar7 != 0
                                                             )) && ((lVar7 = *(long *)((long)puVar5
                                                                                      + 0x308),
                                                                    lVar7 == *(long *)(param_3 +
                                                                                      0x308) ||
                                                                    (func_0x00010c071ae0(),
                                                                    (int)lVar7 != 0)))) &&
                                                           ((lVar7 = *(long *)((long)puVar5 + 0x348)
                                                            , lVar7 == *(long *)(param_3 + 0x348) ||
                                                            (func_0x00010c071ae0(), (int)lVar7 != 0)
                                                            ))) && ((lVar7 = *(long *)((long)puVar5
                                                                                      + 0x350),
                                                                    lVar7 == *(long *)(param_3 +
                                                                                      0x350) ||
                                                                    (func_0x00010c071ae0(),
                                                                    (int)lVar7 != 0)))))))))) &&
                                                   (((((((lVar7 = *(long *)((long)puVar5 + 0x358),
                                                         lVar7 == *(long *)(param_3 + 0x358) ||
                                                         (func_0x00010c071ae0(), (int)lVar7 != 0))
                                                        && ((lVar7 = *(long *)((long)puVar5 + 0x360)
                                                            , lVar7 == *(long *)(param_3 + 0x360) ||
                                                            (func_0x00010c071ae0(), (int)lVar7 != 0)
                                                            ))) &&
                                                       ((lVar7 = *(long *)((long)puVar5 + 0x368),
                                                        lVar7 == *(long *)(param_3 + 0x368) ||
                                                        (func_0x00010c071ae0(), (int)lVar7 != 0))))
                                                      && ((lVar7 = *(long *)((long)puVar5 + 0x370),
                                                          lVar7 == *(long *)(param_3 + 0x370) ||
                                                          (func_0x00010c071ae0(), (int)lVar7 != 0)))
                                                      ) && (((lVar7 = *(long *)((long)puVar5 + 0x378
                                                                               ),
                                                             lVar7 == *(long *)(param_3 + 0x378) ||
                                                             (func_0x00010c071ae0(), (int)lVar7 != 0
                                                             )) && ((lVar7 = *(long *)((long)puVar5
                                                                                      + 0x380),
                                                                    lVar7 == *(long *)(param_3 +
                                                                                      0x380) ||
                                                                    (func_0x00010c071ae0(),
                                                                    (int)lVar7 != 0)))))) &&
                                                    ((lVar7 = *(long *)((long)puVar5 + 0x390),
                                                     lVar7 == *(long *)(param_3 + 0x390) ||
                                                     (func_0x00010c071ae0(), (int)lVar7 != 0))))))))
                                                  && (((lVar7 = *(long *)((long)puVar5 + 0x398),
                                                       lVar7 == *(long *)(param_3 + 0x398) ||
                                                       (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
                                                      ((((((((lVar7 = *(long *)((long)puVar5 + 0x3a0
                                                                               ),
                                                             lVar7 == *(long *)(param_3 + 0x3a0) ||
                                                             (func_0x00010c071ae0(), (int)lVar7 != 0
                                                             )) && ((lVar7 = *(long *)((long)puVar5
                                                                                      + 0x3a8),
                                                                    lVar7 == *(long *)(param_3 +
                                                                                      0x3a8) ||
                                                                    (func_0x00010c071ae0(),
                                                                    (int)lVar7 != 0)))) &&
                                                           (((lVar7 = *(long *)((long)puVar5 + 0x3b0
                                                                               ),
                                                             lVar7 == *(long *)(param_3 + 0x3b0) ||
                                                             (func_0x00010c071ae0(), (int)lVar7 != 0
                                                             )) && ((lVar7 = *(long *)((long)puVar5
                                                                                      + 0x3b8),
                                                                    lVar7 == *(long *)(param_3 +
                                                                                      0x3b8) ||
                                                                    (func_0x00010c071ae0(),
                                                                    (int)lVar7 != 0)))))) &&
                                                          (((((lVar7 = *(long *)((long)puVar5 +
                                                                                0x3c0),
                                                              lVar7 == *(long *)(param_3 + 0x3c0) ||
                                                              (func_0x00010c071ae0(),
                                                              (int)lVar7 != 0)) &&
                                                             ((lVar7 = *(long *)((long)puVar5 +
                                                                                0x3c8),
                                                              lVar7 == *(long *)(param_3 + 0x3c8) ||
                                                              (func_0x00010c071ae0(),
                                                              (int)lVar7 != 0)))) &&
                                                            ((lVar7 = *(long *)((long)puVar5 + 0x3d0
                                                                               ),
                                                             lVar7 == *(long *)(param_3 + 0x3d0) ||
                                                             (func_0x00010c071ae0(), (int)lVar7 != 0
                                                             )))) && ((lVar7 = *(long *)((long)
                                                  puVar5 + 0x3d8),
                                                  lVar7 == *(long *)(param_3 + 0x3d8) ||
                                                  (func_0x00010c071ae0(), (int)lVar7 != 0)))))) &&
                                                  ((((((((lVar7 = *(long *)((long)puVar5 + 0x3f8),
                                                         lVar7 == *(long *)(param_3 + 0x3f8) ||
                                                         (func_0x00010c071ae0(), (int)lVar7 != 0))
                                                        && ((lVar7 = *(long *)((long)puVar5 + 0x400)
                                                            , lVar7 == *(long *)(param_3 + 0x400) ||
                                                            (func_0x00010c071ae0(), (int)lVar7 != 0)
                                                            ))) &&
                                                       ((lVar7 = *(long *)((long)puVar5 + 0x440),
                                                        lVar7 == *(long *)(param_3 + 0x440) ||
                                                        (func_0x00010c071ae0(), (int)lVar7 != 0))))
                                                      && (((lVar7 = *(long *)((long)puVar5 + 0x448),
                                                           lVar7 == *(long *)(param_3 + 0x448) ||
                                                           (func_0x00010c071ae0(), (int)lVar7 != 0))
                                                          && (((lVar7 = *(long *)((long)puVar5 +
                                                                                 0x450),
                                                               lVar7 == *(long *)(param_3 + 0x450)
                                                               || (func_0x00010c071ae0(),
                                                                  (int)lVar7 != 0)) &&
                                                              ((lVar7 = *(long *)((long)puVar5 +
                                                                                 0x470),
                                                               lVar7 == *(long *)(param_3 + 0x470)
                                                               || (func_0x00010c071ae0(),
                                                                  (int)lVar7 != 0)))))))) &&
                                                     (((lVar7 = *(long *)((long)puVar5 + 0x478),
                                                       lVar7 == *(long *)(param_3 + 0x478) ||
                                                       (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
                                                      ((lVar7 = *(long *)((long)puVar5 + 0x480),
                                                       lVar7 == *(long *)(param_3 + 0x480) ||
                                                       (func_0x00010c071ae0(), (int)lVar7 != 0))))))
                                                    && (((((lVar7 = *(long *)((long)puVar5 + 0x490),
                                                           lVar7 == *(long *)(param_3 + 0x490) ||
                                                           (func_0x00010c071ae0(), (int)lVar7 != 0))
                                                          && ((lVar7 = *(long *)((long)puVar5 +
                                                                                0x498),
                                                              lVar7 == *(long *)(param_3 + 0x498) ||
                                                              (func_0x00010c071ae0(),
                                                              (int)lVar7 != 0)))) &&
                                                         ((lVar7 = *(long *)((long)puVar5 + 0x4a0),
                                                          lVar7 == *(long *)(param_3 + 0x4a0) ||
                                                          (func_0x00010c071ae0(), (int)lVar7 != 0)))
                                                         ) && ((lVar7 = *(long *)((long)puVar5 +
                                                                                 0x4c0),
                                                               lVar7 == *(long *)(param_3 + 0x4c0)
                                                               || (func_0x00010c071ae0(),
                                                                  (int)lVar7 != 0)))))) &&
                                                   (((lVar7 = *(long *)((long)puVar5 + 0x4d0),
                                                     lVar7 == *(long *)(param_3 + 0x4d0) ||
                                                     (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
                                                    ((lVar7 = *(long *)((long)puVar5 + 0x4e0),
                                                     lVar7 == *(long *)(param_3 + 0x4e0) ||
                                                     (func_0x00010c071ae0(), (int)lVar7 != 0))))))))
                                                  && (((lVar7 = *(long *)((long)puVar5 + 0x500),
                                                       lVar7 == *(long *)(param_3 + 0x500) ||
                                                       (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
                                                      ((lVar7 = *(long *)((long)puVar5 + 0x508),
                                                       lVar7 == *(long *)(param_3 + 0x508) ||
                                                       (func_0x00010c071ae0(), (int)lVar7 != 0))))))
                                                  && (((((lVar7 = *(long *)((long)puVar5 + 0x518),
                                                         lVar7 == *(long *)(param_3 + 0x518) ||
                                                         (func_0x00010c071ae0(), (int)lVar7 != 0))
                                                        && ((lVar7 = *(long *)((long)puVar5 + 0x520)
                                                            , lVar7 == *(long *)(param_3 + 0x520) ||
                                                            (func_0x00010c071ae0(), (int)lVar7 != 0)
                                                            ))) &&
                                                       (((lVar7 = *(long *)((long)puVar5 + 0x528),
                                                         lVar7 == *(long *)(param_3 + 0x528) ||
                                                         (func_0x00010c071ae0(), (int)lVar7 != 0))
                                                        && ((lVar7 = *(long *)((long)puVar5 + 0x538)
                                                            , lVar7 == *(long *)(param_3 + 0x538) ||
                                                            (func_0x00010c071ae0(), (int)lVar7 != 0)
                                                            ))))) &&
                                                      ((((lVar7 = *(long *)((long)puVar5 + 0x540),
                                                         lVar7 == *(long *)(param_3 + 0x540) ||
                                                         (func_0x00010c071ae0(), (int)lVar7 != 0))
                                                        && ((lVar7 = *(long *)((long)puVar5 + 0x548)
                                                            , lVar7 == *(long *)(param_3 + 0x548) ||
                                                            (func_0x00010c071ae0(), (int)lVar7 != 0)
                                                            ))) &&
                                                       ((lVar7 = *(long *)((long)puVar5 + 0x550),
                                                        lVar7 == *(long *)(param_3 + 0x550) ||
                                                        (func_0x00010c071ae0(), (int)lVar7 != 0)))))
                                                      ))))))) &&
                                                 ((((((lVar7 = *(long *)((long)puVar5 + 0x558),
                                                      lVar7 == *(long *)(param_3 + 0x558) ||
                                                      (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
                                                     (((((lVar7 = *(long *)((long)puVar5 + 0x560),
                                                         lVar7 == *(long *)(param_3 + 0x560) ||
                                                         (func_0x00010c071ae0(), (int)lVar7 != 0))
                                                        && ((lVar7 = *(long *)((long)puVar5 + 0x570)
                                                            , lVar7 == *(long *)(param_3 + 0x570) ||
                                                            (func_0x00010c071ae0(), (int)lVar7 != 0)
                                                            ))) &&
                                                       ((lVar7 = *(long *)((long)puVar5 + 0x628),
                                                        lVar7 == *(long *)(param_3 + 0x628) ||
                                                        (func_0x00010c071ae0(), (int)lVar7 != 0))))
                                                      && (((((lVar7 = *(long *)((long)puVar5 + 0x630
                                                                               ),
                                                             lVar7 == *(long *)(param_3 + 0x630) ||
                                                             (func_0x00010c071ae0(), (int)lVar7 != 0
                                                             )) && ((((lVar7 = *(long *)((long)
                                                  puVar5 + 0x638),
                                                  lVar7 == *(long *)(param_3 + 0x638) ||
                                                  (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
                                                  ((lVar7 = *(long *)((long)puVar5 + 0x640),
                                                   lVar7 == *(long *)(param_3 + 0x640) ||
                                                   (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
                                                  ((lVar7 = *(long *)((long)puVar5 + 0x648),
                                                   lVar7 == *(long *)(param_3 + 0x648) ||
                                                   (func_0x00010c071ae0(), (int)lVar7 != 0)))))) &&
                                                  (((lVar7 = *(long *)((long)puVar5 + 0x650),
                                                    lVar7 == *(long *)(param_3 + 0x650) ||
                                                    (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
                                                   ((((((lVar7 = *(long *)((long)puVar5 + 0x658),
                                                        lVar7 == *(long *)(param_3 + 0x658) ||
                                                        (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
                                                       ((lVar7 = *(long *)((long)puVar5 + 0x660),
                                                        lVar7 == *(long *)(param_3 + 0x660) ||
                                                        (func_0x00010c071ae0(), (int)lVar7 != 0))))
                                                      && ((lVar7 = *(long *)((long)puVar5 + 0x668),
                                                          lVar7 == *(long *)(param_3 + 0x668) ||
                                                          (func_0x00010c071ae0(), (int)lVar7 != 0)))
                                                      ) && ((lVar7 = *(long *)((long)puVar5 + 0x670)
                                                            , lVar7 == *(long *)(param_3 + 0x670) ||
                                                            (func_0x00010c071ae0(), (int)lVar7 != 0)
                                                            ))) &&
                                                    (((lVar7 = *(long *)((long)puVar5 + 0x678),
                                                      lVar7 == *(long *)(param_3 + 0x678) ||
                                                      (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
                                                     ((lVar7 = *(long *)((long)puVar5 + 0x680),
                                                      lVar7 == *(long *)(param_3 + 0x680) ||
                                                      (func_0x00010c071ae0(), (int)lVar7 != 0)))))))
                                                   ))) && ((lVar7 = *(long *)((long)puVar5 + 0x690),
                                                           lVar7 == *(long *)(param_3 + 0x690) ||
                                                           (func_0x00010c071ae0(), (int)lVar7 != 0))
                                                          )))))) &&
                                                  (((lVar7 = *(long *)((long)puVar5 + 0x698),
                                                    lVar7 == *(long *)(param_3 + 0x698) ||
                                                    (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
                                                   ((((lVar7 = *(long *)((long)puVar5 + 0x6a8),
                                                      lVar7 == *(long *)(param_3 + 0x6a8) ||
                                                      (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
                                                     ((lVar7 = *(long *)((long)puVar5 + 0x6e0),
                                                      lVar7 == *(long *)(param_3 + 0x6e0) ||
                                                      (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
                                                    ((((((lVar7 = *(long *)((long)puVar5 + 0x6e8),
                                                         lVar7 == *(long *)(param_3 + 0x6e8) ||
                                                         (func_0x00010c071ae0(), (int)lVar7 != 0))
                                                        && ((lVar7 = *(long *)((long)puVar5 + 0x6f0)
                                                            , lVar7 == *(long *)(param_3 + 0x6f0) ||
                                                            (func_0x00010c071ae0(), (int)lVar7 != 0)
                                                            ))) &&
                                                       ((((lVar7 = *(long *)((long)puVar5 + 0x6f8),
                                                          lVar7 == *(long *)(param_3 + 0x6f8) ||
                                                          (func_0x00010c071ae0(), (int)lVar7 != 0))
                                                         && ((lVar7 = *(long *)((long)puVar5 + 0x700
                                                                               ),
                                                             lVar7 == *(long *)(param_3 + 0x700) ||
                                                             (func_0x00010c071ae0(), (int)lVar7 != 0
                                                             )))) &&
                                                        ((lVar7 = *(long *)((long)puVar5 + 0x720),
                                                         lVar7 == *(long *)(param_3 + 0x720) ||
                                                         (func_0x00010c071ae0(), (int)lVar7 != 0))))
                                                       )) && (((lVar7 = *(long *)((long)puVar5 +
                                                                                 0x728),
                                                               lVar7 == *(long *)(param_3 + 0x728)
                                                               || (func_0x00010c071ae0(),
                                                                  (int)lVar7 != 0)) &&
                                                              (((((lVar7 = *(long *)((long)puVar5 +
                                                                                    0x730),
                                                                  lVar7 == *(long *)(param_3 + 0x730
                                                                                    ) ||
                                                                  (func_0x00010c071ae0(),
                                                                  (int)lVar7 != 0)) &&
                                                                 ((lVar7 = *(long *)((long)puVar5 +
                                                                                    0x748),
                                                                  lVar7 == *(long *)(param_3 + 0x748
                                                                                    ) ||
                                                                  (func_0x00010c071ae0(),
                                                                  (int)lVar7 != 0)))) &&
                                                                ((lVar7 = *(long *)((long)puVar5 +
                                                                                   0x750),
                                                                 lVar7 == *(long *)(param_3 + 0x750)
                                                                 || (func_0x00010c071ae0(),
                                                                    (int)lVar7 != 0)))) &&
                                                               ((lVar7 = *(long *)((long)puVar5 +
                                                                                  0x760),
                                                                lVar7 == *(long *)(param_3 + 0x760)
                                                                || (func_0x00010c071ae0(),
                                                                   (int)lVar7 != 0)))))))) &&
                                                     ((((lVar7 = *(long *)((long)puVar5 + 0x770),
                                                        lVar7 == *(long *)(param_3 + 0x770) ||
                                                        (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
                                                       ((lVar7 = *(long *)((long)puVar5 + 0x778),
                                                        lVar7 == *(long *)(param_3 + 0x778) ||
                                                        (func_0x00010c071ae0(), (int)lVar7 != 0))))
                                                      && ((lVar7 = *(long *)((long)puVar5 + 0x7d8),
                                                          lVar7 == *(long *)(param_3 + 0x7d8) ||
                                                          (func_0x00010c071ae0(), (int)lVar7 != 0)))
                                                      ))))))))) &&
                                                  ((lVar7 = *(long *)((long)puVar5 + 0x7f0),
                                                   lVar7 == *(long *)(param_3 + 0x7f0) ||
                                                   (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
                                                  (((((((((lVar7 = *(long *)((long)puVar5 + 0x7f8),
                                                          lVar7 == *(long *)(param_3 + 0x7f8) ||
                                                          (func_0x00010c071ae0(), (int)lVar7 != 0))
                                                         && ((lVar7 = *(long *)((long)puVar5 + 0x800
                                                                               ),
                                                             lVar7 == *(long *)(param_3 + 0x800) ||
                                                             (func_0x00010c071ae0(), (int)lVar7 != 0
                                                             )))) &&
                                                        ((lVar7 = *(long *)((long)puVar5 + 0x810),
                                                         lVar7 == *(long *)(param_3 + 0x810) ||
                                                         (func_0x00010c071ae0(), (int)lVar7 != 0))))
                                                       && ((lVar7 = *(long *)((long)puVar5 + 0x840),
                                                           lVar7 == *(long *)(param_3 + 0x840) ||
                                                           (func_0x00010c071ae0(), (int)lVar7 != 0))
                                                          )) && (((lVar7 = *(long *)((long)puVar5 +
                                                                                    0x848),
                                                                  lVar7 == *(long *)(param_3 + 0x848
                                                                                    ) ||
                                                                  (func_0x00010c071ae0(),
                                                                  (int)lVar7 != 0)) &&
                                                                 ((lVar7 = *(long *)((long)puVar5 +
                                                                                    0x860),
                                                                  lVar7 == *(long *)(param_3 + 0x860
                                                                                    ) ||
                                                                  (func_0x00010c071ae0(),
                                                                  (int)lVar7 != 0)))))) &&
                                                     (((lVar7 = *(long *)((long)puVar5 + 0x880),
                                                       lVar7 == *(long *)(param_3 + 0x880) ||
                                                       (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
                                                      ((lVar7 = *(long *)((long)puVar5 + 0x888),
                                                       lVar7 == *(long *)(param_3 + 0x888) ||
                                                       (func_0x00010c071ae0(), (int)lVar7 != 0))))))
                                                    && (((((lVar7 = *(long *)((long)puVar5 + 0x890),
                                                           lVar7 == *(long *)(param_3 + 0x890) ||
                                                           (func_0x00010c071ae0(), (int)lVar7 != 0))
                                                          && ((lVar7 = *(long *)((long)puVar5 +
                                                                                0x8a0),
                                                              lVar7 == *(long *)(param_3 + 0x8a0) ||
                                                              (func_0x00010c071ae0(),
                                                              (int)lVar7 != 0)))) &&
                                                         (((lVar7 = *(long *)((long)puVar5 + 0x8a8),
                                                           lVar7 == *(long *)(param_3 + 0x8a8) ||
                                                           (func_0x00010c071ae0(), (int)lVar7 != 0))
                                                          && ((lVar7 = *(long *)((long)puVar5 +
                                                                                0x8b0),
                                                              lVar7 == *(long *)(param_3 + 0x8b0) ||
                                                              (func_0x00010c071ae0(),
                                                              (int)lVar7 != 0)))))) &&
                                                        ((((lVar7 = *(long *)((long)puVar5 + 0x8c0),
                                                           lVar7 == *(long *)(param_3 + 0x8c0) ||
                                                           (func_0x00010c071ae0(), (int)lVar7 != 0))
                                                          && ((lVar7 = *(long *)((long)puVar5 +
                                                                                0x8c8),
                                                              lVar7 == *(long *)(param_3 + 0x8c8) ||
                                                              (func_0x00010c071ae0(),
                                                              (int)lVar7 != 0)))) &&
                                                         ((lVar7 = *(long *)((long)puVar5 + 0x8d0),
                                                          lVar7 == *(long *)(param_3 + 0x8d0) ||
                                                          (func_0x00010c071ae0(), (int)lVar7 != 0)))
                                                         ))))) &&
                                                   ((((lVar7 = *(long *)((long)puVar5 + 0x8d8),
                                                      lVar7 == *(long *)(param_3 + 0x8d8) ||
                                                      (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
                                                     (((lVar7 = *(long *)((long)puVar5 + 0x8e0),
                                                       lVar7 == *(long *)(param_3 + 0x8e0) ||
                                                       (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
                                                      ((lVar7 = *(long *)((long)puVar5 + 0x8e8),
                                                       lVar7 == *(long *)(param_3 + 0x8e8) ||
                                                       (func_0x00010c071ae0(), (int)lVar7 != 0))))))
                                                    && ((((((lVar7 = *(long *)((long)puVar5 + 0x8f0)
                                                            , lVar7 == *(long *)(param_3 + 0x8f0) ||
                                                            (func_0x00010c071ae0(), (int)lVar7 != 0)
                                                            ) && ((((lVar7 = *(long *)((long)puVar5
                                                                                      + 0x8f8),
                                                                    lVar7 == *(long *)(param_3 +
                                                                                      0x8f8) ||
                                                                    (func_0x00010c071ae0(),
                                                                    (int)lVar7 != 0)) &&
                                                                   ((((lVar7 = *(long *)((long)
                                                  puVar5 + 0x910),
                                                  lVar7 == *(long *)(param_3 + 0x910) ||
                                                  (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
                                                  ((lVar7 = *(long *)((long)puVar5 + 0x918),
                                                   lVar7 == *(long *)(param_3 + 0x918) ||
                                                   (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
                                                  ((lVar7 = *(long *)((long)puVar5 + 0x928),
                                                   lVar7 == *(long *)(param_3 + 0x928) ||
                                                   (func_0x00010c071ae0(), (int)lVar7 != 0)))))) &&
                                                  ((lVar7 = *(long *)((long)puVar5 + 0x930),
                                                   lVar7 == *(long *)(param_3 + 0x930) ||
                                                   (func_0x00010c071ae0(), (int)lVar7 != 0)))))) &&
                                                  ((((((lVar7 = *(long *)((long)puVar5 + 0x938),
                                                       lVar7 == *(long *)(param_3 + 0x938) ||
                                                       (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
                                                      ((lVar7 = *(long *)((long)puVar5 + 0x940),
                                                       lVar7 == *(long *)(param_3 + 0x940) ||
                                                       (func_0x00010c071ae0(), (int)lVar7 != 0))))
                                                     && ((lVar7 = *(long *)((long)puVar5 + 0x950),
                                                         lVar7 == *(long *)(param_3 + 0x950) ||
                                                         (func_0x00010c071ae0(), (int)lVar7 != 0))))
                                                    && ((lVar7 = *(long *)((long)puVar5 + 0x958),
                                                        lVar7 == *(long *)(param_3 + 0x958) ||
                                                        (func_0x00010c071ae0(), (int)lVar7 != 0))))
                                                   && ((((lVar7 = *(long *)((long)puVar5 + 0x960),
                                                         lVar7 == *(long *)(param_3 + 0x960) ||
                                                         (func_0x00010c071ae0(), (int)lVar7 != 0))
                                                        && ((lVar7 = *(long *)((long)puVar5 + 0x968)
                                                            , lVar7 == *(long *)(param_3 + 0x968) ||
                                                            (func_0x00010c071ae0(), (int)lVar7 != 0)
                                                            ))) &&
                                                       ((lVar7 = *(long *)((long)puVar5 + 0x970),
                                                        lVar7 == *(long *)(param_3 + 0x970) ||
                                                        (func_0x00010c071ae0(), (int)lVar7 != 0)))))
                                                   ))) && ((lVar7 = *(long *)((long)puVar5 + 0x980),
                                                           lVar7 == *(long *)(param_3 + 0x980) ||
                                                           (func_0x00010c071ae0(), (int)lVar7 != 0))
                                                          )) &&
                                                  ((((lVar7 = *(long *)((long)puVar5 + 0x988),
                                                     lVar7 == *(long *)(param_3 + 0x988) ||
                                                     (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
                                                    ((lVar7 = *(long *)((long)puVar5 + 0x990),
                                                     lVar7 == *(long *)(param_3 + 0x990) ||
                                                     (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
                                                   ((((lVar7 = *(long *)((long)puVar5 + 0x998),
                                                      lVar7 == *(long *)(param_3 + 0x998) ||
                                                      (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
                                                     ((lVar7 = *(long *)((long)puVar5 + 0x9a0),
                                                      lVar7 == *(long *)(param_3 + 0x9a0) ||
                                                      (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
                                                    ((((lVar7 = *(long *)((long)puVar5 + 0x9b0),
                                                       lVar7 == *(long *)(param_3 + 0x9b0) ||
                                                       (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
                                                      ((lVar7 = *(long *)((long)puVar5 + 0x9b8),
                                                       lVar7 == *(long *)(param_3 + 0x9b8) ||
                                                       (func_0x00010c071ae0(), (int)lVar7 != 0))))
                                                     && ((lVar7 = *(long *)((long)puVar5 + 0x9c0),
                                                         lVar7 == *(long *)(param_3 + 0x9c0) ||
                                                         (func_0x00010c071ae0(), (int)lVar7 != 0))))
                                                    )))))))))))))) {
                                                puVar9 = *(undefined1 **)((long)puVar5 + 0x9d8);
                                                if (puVar9 != *(undefined1 **)(param_3 + 0x9d8)) {
                                                  func_0x00010c071ae0();
                                                  goto LAB_10b078ff0;
                                                }
                                                goto LAB_10b078fe4;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar9 = (undefined1 *)0x0;
  }
LAB_10b078ff0:
  _objc_release(param_3);
  return (ulong *)puVar9;
}



/* Entry: 10b076ec4; end: 10b07900b; -[SCSnapCommonLoggingParams isEqual:] */

long FUN_10b076ec4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  double dVar5;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b078fe4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b078ff0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((((uVar2 & 1) != 0) &&
           (((((((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
                 (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
                (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))) &&
               ((*(long *)(param_1 + 0x88) == *(long *)(param_3 + 0x88) &&
                (*(long *)(param_1 + 0x90) == *(long *)(param_3 + 0x90))))) &&
              (*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb))) &&
             ((*(char *)(param_1 + 0xc) == *(char *)(param_3 + 0xc) &&
              (*(char *)(param_1 + 0xd) == *(char *)(param_3 + 0xd))))) &&
            (*(char *)(param_1 + 0xe) == *(char *)(param_3 + 0xe))))) &&
          ((((*(char *)(param_1 + 0xf) == *(char *)(param_3 + 0xf) &&
             (*(char *)(param_1 + 0x10) == *(char *)(param_3 + 0x10))) &&
            (*(char *)(param_1 + 0x11) == *(char *)(param_3 + 0x11))) &&
           (((*(char *)(param_1 + 0x12) == *(char *)(param_3 + 0x12) &&
             (*(char *)(param_1 + 0x13) == *(char *)(param_3 + 0x13))) &&
            (*(char *)(param_1 + 0x14) == *(char *)(param_3 + 0x14))))))) &&
         ((((*(char *)(param_1 + 0x15) == *(char *)(param_3 + 0x15) &&
            (*(char *)(param_1 + 0x16) == *(char *)(param_3 + 0x16))) &&
           ((((*(long *)(param_1 + 0x98) == *(long *)(param_3 + 0x98) &&
              (((*(long *)(param_1 + 0xa0) == *(long *)(param_3 + 0xa0) &&
                (*(char *)(param_1 + 0x17) == *(char *)(param_3 + 0x17))) &&
               (*(char *)(param_1 + 0x18) == *(char *)(param_3 + 0x18))))) &&
             ((*(char *)(param_1 + 0x19) == *(char *)(param_3 + 0x19) &&
              (*(char *)(param_1 + 0x1a) == *(char *)(param_3 + 0x1a))))) &&
            (*(char *)(param_1 + 0x1b) == *(char *)(param_3 + 0x1b))))) &&
          (((((*(char *)(param_1 + 0x1c) == *(char *)(param_3 + 0x1c) &&
              (*(char *)(param_1 + 0x1d) == *(char *)(param_3 + 0x1d))) &&
             ((*(long *)(param_1 + 0xb8) == *(long *)(param_3 + 0xb8) &&
              ((((*(long *)(param_1 + 0xc0) == *(long *)(param_3 + 0xc0) &&
                 (*(long *)(param_1 + 200) == *(long *)(param_3 + 200))) &&
                (*(long *)(param_1 + 0xd0) == *(long *)(param_3 + 0xd0))) &&
               ((*(long *)(param_1 + 0xd8) == *(long *)(param_3 + 0xd8) &&
                (*(long *)(param_1 + 0xe0) == *(long *)(param_3 + 0xe0))))))))) &&
            (*(long *)(param_1 + 0xe8) == *(long *)(param_3 + 0xe8))) &&
           ((*(long *)(param_1 + 0xf0) == *(long *)(param_3 + 0xf0) &&
            (*(long *)(param_1 + 0xf8) == *(long *)(param_3 + 0xf8))))))))) &&
        ((((*(long *)(param_1 + 0x108) == *(long *)(param_3 + 0x108) &&
           (((*(long *)(param_1 + 0x168) == *(long *)(param_3 + 0x168) &&
             (*(long *)(param_1 + 0x170) == *(long *)(param_3 + 0x170))) &&
            (*(long *)(param_1 + 0x178) == *(long *)(param_3 + 0x178))))) &&
          ((((*(long *)(param_1 + 400) == *(long *)(param_3 + 400) &&
             (*(char *)(param_1 + 0x1e) == *(char *)(param_3 + 0x1e))) &&
            (*(long *)(param_1 + 0x198) == *(long *)(param_3 + 0x198))) &&
           (((*(char *)(param_1 + 0x1f) == *(char *)(param_3 + 0x1f) &&
             (*(long *)(param_1 + 0x1a0) == *(long *)(param_3 + 0x1a0))) &&
            ((*(char *)(param_1 + 0x20) == *(char *)(param_3 + 0x20) &&
             (((*(char *)(param_1 + 0x21) == *(char *)(param_3 + 0x21) &&
               (*(char *)(param_1 + 0x22) == *(char *)(param_3 + 0x22))) &&
              (*(long *)(param_1 + 0x1a8) == *(long *)(param_3 + 0x1a8))))))))))) &&
         ((((*(long *)(param_1 + 0x1b0) == *(long *)(param_3 + 0x1b0) &&
            (*(long *)(param_1 + 0x1c0) == *(long *)(param_3 + 0x1c0))) &&
           ((*(long *)(param_1 + 0x1c8) == *(long *)(param_3 + 0x1c8) &&
            (((*(long *)(param_1 + 0x1e0) == *(long *)(param_3 + 0x1e0) &&
              (*(long *)(param_1 + 0x1e8) == *(long *)(param_3 + 0x1e8))) &&
             ((*(long *)(param_1 + 0x1f0) == *(long *)(param_3 + 0x1f0) &&
              ((((*(char *)(param_1 + 0x23) == *(char *)(param_3 + 0x23) &&
                 (*(char *)(param_1 + 0x24) == *(char *)(param_3 + 0x24))) &&
                (*(char *)(param_1 + 0x25) == *(char *)(param_3 + 0x25))) &&
               ((*(char *)(param_1 + 0x26) == *(char *)(param_3 + 0x26) &&
                (*(long *)(param_1 + 0x208) == *(long *)(param_3 + 0x208))))))))))))) &&
          (((((*(char *)(param_1 + 0x27) == *(char *)(param_3 + 0x27) &&
              (((((((*(long *)(param_1 + 0x218) == *(long *)(param_3 + 0x218) &&
                    (*(char *)(param_1 + 0x28) == *(char *)(param_3 + 0x28))) &&
                   (((*(char *)(param_1 + 0x29) == *(char *)(param_3 + 0x29) &&
                     (((*(long *)(param_1 + 600) == *(long *)(param_3 + 600) &&
                       (*(long *)(param_1 + 0x260) == *(long *)(param_3 + 0x260))) &&
                      (*(long *)(param_1 + 0x268) == *(long *)(param_3 + 0x268))))) &&
                    (((*(long *)(param_1 + 0x270) == *(long *)(param_3 + 0x270) &&
                      (*(long *)(param_1 + 0x288) == *(long *)(param_3 + 0x288))) &&
                     (*(long *)(param_1 + 0x290) == *(long *)(param_3 + 0x290))))))) &&
                  ((*(char *)(param_1 + 0x2a) == *(char *)(param_3 + 0x2a) &&
                   (*(long *)(param_1 + 0x298) == *(long *)(param_3 + 0x298))))) &&
                 (((*(long *)(param_1 + 0x2a0) == *(long *)(param_3 + 0x2a0) &&
                   (((*(long *)(param_1 + 0x2a8) == *(long *)(param_3 + 0x2a8) &&
                     (*(char *)(param_1 + 0x2b) == *(char *)(param_3 + 0x2b))) &&
                    (*(long *)(param_1 + 0x2b0) == *(long *)(param_3 + 0x2b0))))) &&
                  (((*(char *)(param_1 + 0x2c) == *(char *)(param_3 + 0x2c) &&
                    (*(long *)(param_1 + 0x2c0) == *(long *)(param_3 + 0x2c0))) &&
                   ((*(long *)(param_1 + 0x2c8) == *(long *)(param_3 + 0x2c8) &&
                    ((((((*(long *)(param_1 + 0x2d0) == *(long *)(param_3 + 0x2d0) &&
                         (*(long *)(param_1 + 0x2d8) == *(long *)(param_3 + 0x2d8))) &&
                        ((*(long *)(param_1 + 0x310) == *(long *)(param_3 + 0x310) &&
                         (((((*(long *)(param_1 + 0x318) == *(long *)(param_3 + 0x318) &&
                             (*(long *)(param_1 + 800) == *(long *)(param_3 + 800))) &&
                            (*(long *)(param_1 + 0x328) == *(long *)(param_3 + 0x328))) &&
                           ((*(long *)(param_1 + 0x330) == *(long *)(param_3 + 0x330) &&
                            (*(long *)(param_1 + 0x338) == *(long *)(param_3 + 0x338))))) &&
                          (*(long *)(param_1 + 0x340) == *(long *)(param_3 + 0x340))))))) &&
                       ((*(char *)(param_1 + 0x2d) == *(char *)(param_3 + 0x2d) &&
                        (*(char *)(param_1 + 0x2e) == *(char *)(param_3 + 0x2e))))) &&
                      (*(long *)(param_1 + 0x388) == *(long *)(param_3 + 0x388))) &&
                     (((*(char *)(param_1 + 0x2f) == *(char *)(param_3 + 0x2f) &&
                       (*(long *)(param_1 + 0x3e0) == *(long *)(param_3 + 0x3e0))) &&
                      (*(long *)(param_1 + 1000) == *(long *)(param_3 + 1000))))))))))))) &&
                (((*(long *)(param_1 + 0x3f0) == *(long *)(param_3 + 0x3f0) &&
                  (*(long *)(param_1 + 0x408) == *(long *)(param_3 + 0x408))) &&
                 ((*(char *)(param_1 + 0x30) == *(char *)(param_3 + 0x30) &&
                  ((*(long *)(param_1 + 0x410) == *(long *)(param_3 + 0x410) &&
                   (*(long *)(param_1 + 0x418) == *(long *)(param_3 + 0x418))))))))) &&
               (*(long *)(param_1 + 0x420) == *(long *)(param_3 + 0x420))))) &&
             (((((*(long *)(param_1 + 0x428) == *(long *)(param_3 + 0x428) &&
                 (*(long *)(param_1 + 0x430) == *(long *)(param_3 + 0x430))) &&
                (*(long *)(param_1 + 0x438) == *(long *)(param_3 + 0x438))) &&
               ((*(long *)(param_1 + 0x458) == *(long *)(param_3 + 0x458) &&
                (*(char *)(param_1 + 0x31) == *(char *)(param_3 + 0x31))))) &&
              (((*(char *)(param_1 + 0x32) == *(char *)(param_3 + 0x32) &&
                ((*(char *)(param_1 + 0x33) == *(char *)(param_3 + 0x33) &&
                 (*(long *)(param_1 + 0x460) == *(long *)(param_3 + 0x460))))) &&
               (*(char *)(param_1 + 0x34) == *(char *)(param_3 + 0x34))))))) &&
            (((((*(long *)(param_1 + 0x468) == *(long *)(param_3 + 0x468) &&
                (*(long *)(param_1 + 0x488) == *(long *)(param_3 + 0x488))) &&
               (*(long *)(param_1 + 0x4a8) == *(long *)(param_3 + 0x4a8))) &&
              ((*(long *)(param_1 + 0x4b0) == *(long *)(param_3 + 0x4b0) &&
               (*(long *)(param_1 + 0x4b8) == *(long *)(param_3 + 0x4b8))))) &&
             ((*(char *)(param_1 + 0x35) == *(char *)(param_3 + 0x35) &&
              ((*(char *)(param_1 + 0x36) == *(char *)(param_3 + 0x36) &&
               (*(long *)(param_1 + 0x4c8) == *(long *)(param_3 + 0x4c8))))))))) &&
           (((*(char *)(param_1 + 0x37) == *(char *)(param_3 + 0x37) &&
             (((*(char *)(param_1 + 0x38) == *(char *)(param_3 + 0x38) &&
               (*(char *)(param_1 + 0x39) == *(char *)(param_3 + 0x39))) &&
              (*(char *)(param_1 + 0x3a) == *(char *)(param_3 + 0x3a))))) &&
            ((((*(char *)(param_1 + 0x3b) == *(char *)(param_3 + 0x3b) &&
               (*(long *)(param_1 + 0x4d8) == *(long *)(param_3 + 0x4d8))) &&
              ((*(long *)(param_1 + 0x4e8) == *(long *)(param_3 + 0x4e8) &&
               ((*(long *)(param_1 + 0x4f0) == *(long *)(param_3 + 0x4f0) &&
                (*(long *)(param_1 + 0x4f8) == *(long *)(param_3 + 0x4f8))))))) &&
             (*(char *)(param_1 + 0x3c) == *(char *)(param_3 + 0x3c))))))))))))) &&
       ((((((((*(char *)(param_1 + 0x3d) == *(char *)(param_3 + 0x3d) &&
              (*(long *)(param_1 + 0x510) == *(long *)(param_3 + 0x510))) &&
             (*(long *)(param_1 + 0x530) == *(long *)(param_3 + 0x530))) &&
            ((*(long *)(param_1 + 0x568) == *(long *)(param_3 + 0x568) &&
             (*(long *)(param_1 + 0x578) == *(long *)(param_3 + 0x578))))) &&
           ((*(long *)(param_1 + 0x580) == *(long *)(param_3 + 0x580) &&
            ((*(long *)(param_1 + 0x588) == *(long *)(param_3 + 0x588) &&
             (*(long *)(param_1 + 0x590) == *(long *)(param_3 + 0x590))))))) &&
          ((((*(long *)(param_1 + 0x598) == *(long *)(param_3 + 0x598) &&
             ((((*(long *)(param_1 + 0x5a0) == *(long *)(param_3 + 0x5a0) &&
                (*(long *)(param_1 + 0x5a8) == *(long *)(param_3 + 0x5a8))) &&
               (*(long *)(param_1 + 0x5b0) == *(long *)(param_3 + 0x5b0))) &&
              ((*(long *)(param_1 + 0x5b8) == *(long *)(param_3 + 0x5b8) &&
               (*(long *)(param_1 + 0x5c0) == *(long *)(param_3 + 0x5c0))))))) &&
            (((((*(long *)(param_1 + 0x5c8) == *(long *)(param_3 + 0x5c8) &&
                ((*(long *)(param_1 + 0x5d0) == *(long *)(param_3 + 0x5d0) &&
                 (*(long *)(param_1 + 0x5d8) == *(long *)(param_3 + 0x5d8))))) &&
               (*(long *)(param_1 + 0x5e0) == *(long *)(param_3 + 0x5e0))) &&
              (((((((*(long *)(param_1 + 0x5e8) == *(long *)(param_3 + 0x5e8) &&
                    (*(long *)(param_1 + 0x5f0) == *(long *)(param_3 + 0x5f0))) &&
                   (*(long *)(param_1 + 0x5f8) == *(long *)(param_3 + 0x5f8))) &&
                  (((*(long *)(param_1 + 0x600) == *(long *)(param_3 + 0x600) &&
                    (*(long *)(param_1 + 0x608) == *(long *)(param_3 + 0x608))) &&
                   ((*(long *)(param_1 + 0x610) == *(long *)(param_3 + 0x610) &&
                    ((*(long *)(param_1 + 0x618) == *(long *)(param_3 + 0x618) &&
                     (*(long *)(param_1 + 0x620) == *(long *)(param_3 + 0x620))))))))) &&
                 (*(long *)(param_1 + 0x6a0) == *(long *)(param_3 + 0x6a0))) &&
                (((*(long *)(param_1 + 0x6b0) == *(long *)(param_3 + 0x6b0) &&
                  (*(long *)(param_1 + 0x6b8) == *(long *)(param_3 + 0x6b8))) &&
                 (*(long *)(param_1 + 0x6c0) == *(long *)(param_3 + 0x6c0))))) &&
               (((*(long *)(param_1 + 0x6c8) == *(long *)(param_3 + 0x6c8) &&
                 (*(long *)(param_1 + 0x6d0) == *(long *)(param_3 + 0x6d0))) &&
                ((((*(long *)(param_1 + 0x6d8) == *(long *)(param_3 + 0x6d8) &&
                   ((*(char *)(param_1 + 0x3e) == *(char *)(param_3 + 0x3e) &&
                    (*(char *)(param_1 + 0x3f) == *(char *)(param_3 + 0x3f))))) &&
                  (*(char *)(param_1 + 0x40) == *(char *)(param_3 + 0x40))) &&
                 ((((((*(char *)(param_1 + 0x41) == *(char *)(param_3 + 0x41) &&
                      (*(char *)(param_1 + 0x42) == *(char *)(param_3 + 0x42))) &&
                     (*(char *)(param_1 + 0x43) == *(char *)(param_3 + 0x43))) &&
                    ((*(char *)(param_1 + 0x44) == *(char *)(param_3 + 0x44) &&
                     (*(long *)(param_1 + 0x708) == *(long *)(param_3 + 0x708))))) &&
                   (*(long *)(param_1 + 0x718) == *(long *)(param_3 + 0x718))) &&
                  (((*(char *)(param_1 + 0x45) == *(char *)(param_3 + 0x45) &&
                    (*(char *)(param_1 + 0x46) == *(char *)(param_3 + 0x46))) &&
                   ((*(char *)(param_1 + 0x47) == *(char *)(param_3 + 0x47) &&
                    (((*(char *)(param_1 + 0x48) == *(char *)(param_3 + 0x48) &&
                      (*(char *)(param_1 + 0x49) == *(char *)(param_3 + 0x49))) &&
                     (*(long *)(param_1 + 0x738) == *(long *)(param_3 + 0x738))))))))))))))))) &&
             ((*(long *)(param_1 + 0x740) == *(long *)(param_3 + 0x740) &&
              (*(long *)(param_1 + 0x758) == *(long *)(param_3 + 0x758))))))) &&
           ((((*(long *)(param_1 + 0x768) == *(long *)(param_3 + 0x768) &&
              ((((*(char *)(param_1 + 0x4a) == *(char *)(param_3 + 0x4a) &&
                 (*(char *)(param_1 + 0x4b) == *(char *)(param_3 + 0x4b))) &&
                ((*(long *)(param_1 + 0x780) == *(long *)(param_3 + 0x780) &&
                 (((*(long *)(param_1 + 0x788) == *(long *)(param_3 + 0x788) &&
                   (*(long *)(param_1 + 0x790) == *(long *)(param_3 + 0x790))) &&
                  (*(long *)(param_1 + 0x798) == *(long *)(param_3 + 0x798))))))) &&
               ((*(char *)(param_1 + 0x4c) == *(char *)(param_3 + 0x4c) &&
                (*(long *)(param_1 + 0x7a0) == *(long *)(param_3 + 0x7a0))))))) &&
             (*(long *)(param_1 + 0x7a8) == *(long *)(param_3 + 0x7a8))) &&
            (((*(long *)(param_1 + 0x7b0) == *(long *)(param_3 + 0x7b0) &&
              (*(long *)(param_1 + 0x7b8) == *(long *)(param_3 + 0x7b8))) &&
             ((*(long *)(param_1 + 0x7c0) == *(long *)(param_3 + 0x7c0) &&
              ((((*(long *)(param_1 + 0x7c8) == *(long *)(param_3 + 0x7c8) &&
                 (*(long *)(param_1 + 2000) == *(long *)(param_3 + 2000))) &&
                (*(long *)(param_1 + 0x7e0) == *(long *)(param_3 + 0x7e0))) &&
               ((*(long *)(param_1 + 0x7e8) == *(long *)(param_3 + 0x7e8) &&
                (*(char *)(param_1 + 0x4d) == *(char *)(param_3 + 0x4d))))))))))))))) &&
         ((*(long *)(param_1 + 0x808) == *(long *)(param_3 + 0x808) &&
          ((*(long *)(param_1 + 0x818) == *(long *)(param_3 + 0x818) &&
           (*(char *)(param_1 + 0x4e) == *(char *)(param_3 + 0x4e))))))) &&
        (((((*(char *)(param_1 + 0x4f) == *(char *)(param_3 + 0x4f) &&
            (((*(char *)(param_1 + 0x50) == *(char *)(param_3 + 0x50) &&
              (*(char *)(param_1 + 0x51) == *(char *)(param_3 + 0x51))) &&
             (*(long *)(param_1 + 0x850) == *(long *)(param_3 + 0x850))))) &&
           (((*(char *)(param_1 + 0x52) == *(char *)(param_3 + 0x52) &&
             (*(long *)(param_1 + 0x858) == *(long *)(param_3 + 0x858))) &&
            (*(char *)(param_1 + 0x53) == *(char *)(param_3 + 0x53))))) &&
          ((((*(char *)(param_1 + 0x54) == *(char *)(param_3 + 0x54) &&
             (*(long *)(param_1 + 0x868) == *(long *)(param_3 + 0x868))) &&
            ((*(long *)(param_1 + 0x870) == *(long *)(param_3 + 0x870) &&
             (((*(long *)(param_1 + 0x878) == *(long *)(param_3 + 0x878) &&
               (*(char *)(param_1 + 0x55) == *(char *)(param_3 + 0x55))) &&
              (*(long *)(param_1 + 0x898) == *(long *)(param_3 + 0x898))))))) &&
           ((((*(long *)(param_1 + 0x8b8) == *(long *)(param_3 + 0x8b8) &&
              (*(char *)(param_1 + 0x56) == *(char *)(param_3 + 0x56))) &&
             (*(long *)(param_1 + 0x900) == *(long *)(param_3 + 0x900))) &&
            (((((*(long *)(param_1 + 0x908) == *(long *)(param_3 + 0x908) &&
                (*(long *)(param_1 + 0x920) == *(long *)(param_3 + 0x920))) &&
               ((*(char *)(param_1 + 0x57) == *(char *)(param_3 + 0x57) &&
                ((((*(char *)(param_1 + 0x58) == *(char *)(param_3 + 0x58) &&
                   (*(char *)(param_1 + 0x59) == *(char *)(param_3 + 0x59))) &&
                  (*(char *)(param_1 + 0x5a) == *(char *)(param_3 + 0x5a))) &&
                 ((*(char *)(param_1 + 0x5b) == *(char *)(param_3 + 0x5b) &&
                  (*(long *)(param_1 + 0x948) == *(long *)(param_3 + 0x948))))))))) &&
              (*(long *)(param_1 + 0x978) == *(long *)(param_3 + 0x978))) &&
             (((*(char *)(param_1 + 0x5c) == *(char *)(param_3 + 0x5c) &&
               (*(char *)(param_1 + 0x5d) == *(char *)(param_3 + 0x5d))) &&
              (((*(char *)(param_1 + 0x5e) == *(char *)(param_3 + 0x5e) &&
                (((*(char *)(param_1 + 0x5f) == *(char *)(param_3 + 0x5f) &&
                  (*(char *)(param_1 + 0x60) == *(char *)(param_3 + 0x60))) &&
                 (*(char *)(param_1 + 0x61) == *(char *)(param_3 + 0x61))))) &&
               (((*(long *)(param_1 + 0x9a8) == *(long *)(param_3 + 0x9a8) &&
                 (*(char *)(param_1 + 0x62) == *(char *)(param_3 + 0x62))) &&
                (*(char *)(param_1 + 99) == *(char *)(param_3 + 99))))))))))))))) &&
         (((*(char *)(param_1 + 100) == *(char *)(param_3 + 100) &&
           (*(long *)(param_1 + 0x9c8) == *(long *)(param_3 + 0x9c8))) &&
          ((*(long *)(param_1 + 0x9d0) == *(long *)(param_3 + 0x9d0) &&
           (((*(char *)(param_1 + 0x65) == *(char *)(param_3 + 0x65) &&
             (*(char *)(param_1 + 0x66) == *(char *)(param_3 + 0x66))) &&
            (*(char *)(param_1 + 0x67) == *(char *)(param_3 + 0x67))))))))))))) {
      fVar4 = ABS(*(float *)(param_1 + 0x68) - *(float *)(param_3 + 0x68));
      if ((fVar4 < 1.1754944e-38) ||
         (fVar4 < ABS(*(float *)(param_1 + 0x68) + *(float *)(param_3 + 0x68)) * 1.1920929e-07)) {
        fVar4 = ABS(*(float *)(param_1 + 0x6c) - *(float *)(param_3 + 0x6c));
        if ((fVar4 < 1.1754944e-38) ||
           (fVar4 < ABS(*(float *)(param_1 + 0x6c) + *(float *)(param_3 + 0x6c)) * 1.1920929e-07)) {
          fVar4 = ABS(*(float *)(param_1 + 0x70) - *(float *)(param_3 + 0x70));
          if ((fVar4 < 1.1754944e-38) ||
             (fVar4 < ABS(*(float *)(param_1 + 0x70) + *(float *)(param_3 + 0x70)) * 1.1920929e-07))
          {
            fVar4 = ABS(*(float *)(param_1 + 0x74) - *(float *)(param_3 + 0x74));
            if ((fVar4 < 1.1754944e-38) ||
               (fVar4 < ABS(*(float *)(param_1 + 0x74) + *(float *)(param_3 + 0x74)) * 1.1920929e-07
               )) {
              fVar4 = ABS(*(float *)(param_1 + 0x78) - *(float *)(param_3 + 0x78));
              if ((fVar4 < 1.1754944e-38) ||
                 (fVar4 < ABS(*(float *)(param_1 + 0x78) + *(float *)(param_3 + 0x78)) *
                          1.1920929e-07)) {
                dVar5 = ABS(*(double *)(param_1 + 0x1f8) - *(double *)(param_3 + 0x1f8));
                if ((dVar5 < 2.2250738585072014e-308) ||
                   (dVar5 < ABS(*(double *)(param_1 + 0x1f8) + *(double *)(param_3 + 0x1f8)) *
                            2.220446049250313e-16)) {
                  dVar5 = ABS(*(double *)(param_1 + 0x220) - *(double *)(param_3 + 0x220));
                  if ((dVar5 < 2.2250738585072014e-308) ||
                     (dVar5 < ABS(*(double *)(param_1 + 0x220) + *(double *)(param_3 + 0x220)) *
                              2.220446049250313e-16)) {
                    dVar5 = ABS(*(double *)(param_1 + 0x230) - *(double *)(param_3 + 0x230));
                    if ((dVar5 < 2.2250738585072014e-308) ||
                       (dVar5 < ABS(*(double *)(param_1 + 0x230) + *(double *)(param_3 + 0x230)) *
                                2.220446049250313e-16)) {
                      dVar5 = ABS(*(double *)(param_1 + 0x238) - *(double *)(param_3 + 0x238));
                      if ((dVar5 < 2.2250738585072014e-308) ||
                         (dVar5 < ABS(*(double *)(param_1 + 0x238) + *(double *)(param_3 + 0x238)) *
                                  2.220446049250313e-16)) {
                        dVar5 = ABS(*(double *)(param_1 + 0x240) - *(double *)(param_3 + 0x240));
                        if ((dVar5 < 2.2250738585072014e-308) ||
                           (dVar5 < ABS(*(double *)(param_1 + 0x240) + *(double *)(param_3 + 0x240))
                                    * 2.220446049250313e-16)) {
                          dVar5 = ABS(*(double *)(param_1 + 0x250) - *(double *)(param_3 + 0x250));
                          if ((dVar5 < 2.2250738585072014e-308) ||
                             (dVar5 < ABS(*(double *)(param_1 + 0x250) +
                                          *(double *)(param_3 + 0x250)) * 2.220446049250313e-16)) {
                            fVar4 = ABS(*(float *)(param_1 + 0x7c) - *(float *)(param_3 + 0x7c));
                            if ((fVar4 < 1.1754944e-38) ||
                               (fVar4 < ABS(*(float *)(param_1 + 0x7c) + *(float *)(param_3 + 0x7c))
                                        * 1.1920929e-07)) {
                              dVar5 = ABS(*(double *)(param_1 + 0x280) -
                                          *(double *)(param_3 + 0x280));
                              if ((dVar5 < 2.2250738585072014e-308) ||
                                 (dVar5 < ABS(*(double *)(param_1 + 0x280) +
                                              *(double *)(param_3 + 0x280)) * 2.220446049250313e-16)
                                 ) {
                                fVar4 = ABS(*(float *)(param_1 + 0x80) - *(float *)(param_3 + 0x80))
                                ;
                                if ((fVar4 < 1.1754944e-38) ||
                                   (fVar4 < ABS(*(float *)(param_1 + 0x80) +
                                                *(float *)(param_3 + 0x80)) * 1.1920929e-07)) {
                                  dVar5 = ABS(*(double *)(param_1 + 0x688) -
                                              *(double *)(param_3 + 0x688));
                                  if ((dVar5 < 2.2250738585072014e-308) ||
                                     (dVar5 < ABS(*(double *)(param_1 + 0x688) +
                                                  *(double *)(param_3 + 0x688)) *
                                              2.220446049250313e-16)) {
                                    dVar5 = ABS(*(double *)(param_1 + 0x710) -
                                                *(double *)(param_3 + 0x710));
                                    if ((dVar5 < 2.2250738585072014e-308) ||
                                       (dVar5 < ABS(*(double *)(param_1 + 0x710) +
                                                    *(double *)(param_3 + 0x710)) *
                                                2.220446049250313e-16)) {
                                      fVar4 = ABS(*(float *)(param_1 + 0x84) -
                                                  *(float *)(param_3 + 0x84));
                                      if ((fVar4 < 1.1754944e-38) ||
                                         (fVar4 < ABS(*(float *)(param_1 + 0x84) +
                                                      *(float *)(param_3 + 0x84)) * 1.1920929e-07))
                                      {
                                        dVar5 = ABS(*(double *)(param_1 + 0x820) -
                                                    *(double *)(param_3 + 0x820));
                                        if ((dVar5 < 2.2250738585072014e-308) ||
                                           (dVar5 < ABS(*(double *)(param_1 + 0x820) +
                                                        *(double *)(param_3 + 0x820)) *
                                                    2.220446049250313e-16)) {
                                          dVar5 = ABS(*(double *)(param_1 + 0x828) -
                                                      *(double *)(param_3 + 0x828));
                                          if ((dVar5 < 2.2250738585072014e-308) ||
                                             (dVar5 < ABS(*(double *)(param_1 + 0x828) +
                                                          *(double *)(param_3 + 0x828)) *
                                                      2.220446049250313e-16)) {
                                            dVar5 = ABS(*(double *)(param_1 + 0x830) -
                                                        *(double *)(param_3 + 0x830));
                                            if ((dVar5 < 2.2250738585072014e-308) ||
                                               (dVar5 < ABS(*(double *)(param_1 + 0x830) +
                                                            *(double *)(param_3 + 0x830)) *
                                                        2.220446049250313e-16)) {
                                              dVar5 = ABS(*(double *)(param_1 + 0x838) -
                                                          *(double *)(param_3 + 0x838));
                                              if ((((((((dVar5 < 2.2250738585072014e-308) ||
                                                       (dVar5 < ABS(*(double *)(param_1 + 0x838) +
                                                                    *(double *)(param_3 + 0x838)) *
                                                                2.220446049250313e-16)) &&
                                                      ((lVar3 = *(long *)(param_1 + 0xa8),
                                                       lVar3 == *(long *)(param_3 + 0xa8) ||
                                                       (func_0x00010c071ae0(), (int)lVar3 != 0))))
                                                     && ((((((lVar3 = *(long *)(param_1 + 0xb0),
                                                             lVar3 == *(long *)(param_3 + 0xb0) ||
                                                             (func_0x00010c071ae0(), (int)lVar3 != 0
                                                             )) && ((lVar3 = *(long *)(param_1 +
                                                                                      0x100),
                                                                    lVar3 == *(long *)(param_3 +
                                                                                      0x100) ||
                                                                    (func_0x00010c071ae0(),
                                                                    (int)lVar3 != 0)))) &&
                                                           (((lVar3 = *(long *)(param_1 + 0x110),
                                                             lVar3 == *(long *)(param_3 + 0x110) ||
                                                             (func_0x00010c071ae0(), (int)lVar3 != 0
                                                             )) && ((lVar3 = *(long *)(param_1 +
                                                                                      0x118),
                                                                    lVar3 == *(long *)(param_3 +
                                                                                      0x118) ||
                                                                    (func_0x00010c071ae0(),
                                                                    (int)lVar3 != 0)))))) &&
                                                          (((lVar3 = *(long *)(param_1 + 0x120),
                                                            lVar3 == *(long *)(param_3 + 0x120) ||
                                                            (func_0x00010c071ae0(), (int)lVar3 != 0)
                                                            ) && ((lVar3 = *(long *)(param_1 + 0x128
                                                                                    ),
                                                                  lVar3 == *(long *)(param_3 + 0x128
                                                                                    ) ||
                                                                  (func_0x00010c071ae0(),
                                                                  (int)lVar3 != 0)))))) &&
                                                         ((lVar3 = *(long *)(param_1 + 0x130),
                                                          lVar3 == *(long *)(param_3 + 0x130) ||
                                                          (func_0x00010c071ae0(), (int)lVar3 != 0)))
                                                         ))) &&
                                                    (((lVar3 = *(long *)(param_1 + 0x138),
                                                      lVar3 == *(long *)(param_3 + 0x138) ||
                                                      (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                                                     (((((lVar3 = *(long *)(param_1 + 0x140),
                                                         lVar3 == *(long *)(param_3 + 0x140) ||
                                                         (func_0x00010c071ae0(), (int)lVar3 != 0))
                                                        && ((lVar3 = *(long *)(param_1 + 0x148),
                                                            lVar3 == *(long *)(param_3 + 0x148) ||
                                                            (func_0x00010c071ae0(), (int)lVar3 != 0)
                                                            ))) &&
                                                       ((lVar3 = *(long *)(param_1 + 0x150),
                                                        lVar3 == *(long *)(param_3 + 0x150) ||
                                                        (func_0x00010c071ae0(), (int)lVar3 != 0))))
                                                      && (((((lVar3 = *(long *)(param_1 + 0x158),
                                                             lVar3 == *(long *)(param_3 + 0x158) ||
                                                             (func_0x00010c071ae0(), (int)lVar3 != 0
                                                             )) && ((((lVar3 = *(long *)(param_1 +
                                                                                        0x160),
                                                                      lVar3 == *(long *)(param_3 +
                                                                                        0x160) ||
                                                                      (func_0x00010c071ae0(),
                                                                      (int)lVar3 != 0)) &&
                                                                     ((lVar3 = *(long *)(param_1 +
                                                                                        0x180),
                                                                      lVar3 == *(long *)(param_3 +
                                                                                        0x180) ||
                                                                      (func_0x00010c071ae0(),
                                                                      (int)lVar3 != 0)))) &&
                                                                    ((lVar3 = *(long *)(param_1 +
                                                                                       0x188),
                                                                     lVar3 == *(long *)(param_3 +
                                                                                       0x188) ||
                                                                     (func_0x00010c071ae0(),
                                                                     (int)lVar3 != 0)))))) &&
                                                           ((lVar3 = *(long *)(param_1 + 0x1b8),
                                                            lVar3 == *(long *)(param_3 + 0x1b8) ||
                                                            (func_0x00010c071ae0(), (int)lVar3 != 0)
                                                            ))) && ((((lVar3 = *(long *)(param_1 +
                                                                                        0x1d0),
                                                                      lVar3 == *(long *)(param_3 +
                                                                                        0x1d0) ||
                                                                      (func_0x00010c071ae0(),
                                                                      (int)lVar3 != 0)) &&
                                                                     ((lVar3 = *(long *)(param_1 +
                                                                                        0x1d8),
                                                                      lVar3 == *(long *)(param_3 +
                                                                                        0x1d8) ||
                                                                      (func_0x00010c071ae0(),
                                                                      (int)lVar3 != 0)))) &&
                                                                    ((((lVar3 = *(long *)(param_1 +
                                                                                         0x200),
                                                                       lVar3 == *(long *)(param_3 +
                                                                                         0x200) ||
                                                                       (func_0x00010c071ae0(),
                                                                       (int)lVar3 != 0)) &&
                                                                      ((lVar3 = *(long *)(param_1 +
                                                                                         0x210),
                                                                       lVar3 == *(long *)(param_3 +
                                                                                         0x210) ||
                                                                       (func_0x00010c071ae0(),
                                                                       (int)lVar3 != 0)))) &&
                                                                     ((((lVar3 = *(long *)(param_1 +
                                                                                          0x228),
                                                                        lVar3 == *(long *)(param_3 +
                                                                                          0x228) ||
                                                                        (func_0x00010c071ae0(),
                                                                        (int)lVar3 != 0)) &&
                                                                       ((lVar3 = *(long *)(param_1 +
                                                                                          0x248),
                                                                        lVar3 == *(long *)(param_3 +
                                                                                          0x248) ||
                                                                        (func_0x00010c071ae0(),
                                                                        (int)lVar3 != 0)))) &&
                                                                      ((lVar3 = *(long *)(param_1 +
                                                                                         0x278),
                                                                       lVar3 == *(long *)(param_3 +
                                                                                         0x278) ||
                                                                       (func_0x00010c071ae0(),
                                                                       (int)lVar3 != 0))))))))))))))
                                                    )) && ((((lVar3 = *(long *)(param_1 + 0x2b8),
                                                             lVar3 == *(long *)(param_3 + 0x2b8) ||
                                                             (func_0x00010c071ae0(), (int)lVar3 != 0
                                                             )) && ((((lVar3 = *(long *)(param_1 +
                                                                                        0x2e0),
                                                                      lVar3 == *(long *)(param_3 +
                                                                                        0x2e0) ||
                                                                      (func_0x00010c071ae0(),
                                                                      (int)lVar3 != 0)) &&
                                                                     ((lVar3 = *(long *)(param_1 +
                                                                                        0x2e8),
                                                                      lVar3 == *(long *)(param_3 +
                                                                                        0x2e8) ||
                                                                      (func_0x00010c071ae0(),
                                                                      (int)lVar3 != 0)))) &&
                                                                    ((((lVar3 = *(long *)(param_1 +
                                                                                         0x2f0),
                                                                       lVar3 == *(long *)(param_3 +
                                                                                         0x2f0) ||
                                                                       (func_0x00010c071ae0(),
                                                                       (int)lVar3 != 0)) &&
                                                                      ((lVar3 = *(long *)(param_1 +
                                                                                         0x2f8),
                                                                       lVar3 == *(long *)(param_3 +
                                                                                         0x2f8) ||
                                                                       (func_0x00010c071ae0(),
                                                                       (int)lVar3 != 0)))) &&
                                                                     (((((lVar3 = *(long *)(param_1 
                                                  + 0x300), lVar3 == *(long *)(param_3 + 0x300) ||
                                                  (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                                                  ((lVar3 = *(long *)(param_1 + 0x308),
                                                   lVar3 == *(long *)(param_3 + 0x308) ||
                                                   (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                                                  ((lVar3 = *(long *)(param_1 + 0x348),
                                                   lVar3 == *(long *)(param_3 + 0x348) ||
                                                   (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                                                  ((lVar3 = *(long *)(param_1 + 0x350),
                                                   lVar3 == *(long *)(param_3 + 0x350) ||
                                                   (func_0x00010c071ae0(), (int)lVar3 != 0))))))))))
                                                  && (((((((lVar3 = *(long *)(param_1 + 0x358),
                                                           lVar3 == *(long *)(param_3 + 0x358) ||
                                                           (func_0x00010c071ae0(), (int)lVar3 != 0))
                                                          && ((lVar3 = *(long *)(param_1 + 0x360),
                                                              lVar3 == *(long *)(param_3 + 0x360) ||
                                                              (func_0x00010c071ae0(),
                                                              (int)lVar3 != 0)))) &&
                                                         ((lVar3 = *(long *)(param_1 + 0x368),
                                                          lVar3 == *(long *)(param_3 + 0x368) ||
                                                          (func_0x00010c071ae0(), (int)lVar3 != 0)))
                                                         ) && ((lVar3 = *(long *)(param_1 + 0x370),
                                                               lVar3 == *(long *)(param_3 + 0x370)
                                                               || (func_0x00010c071ae0(),
                                                                  (int)lVar3 != 0)))) &&
                                                       (((lVar3 = *(long *)(param_1 + 0x378),
                                                         lVar3 == *(long *)(param_3 + 0x378) ||
                                                         (func_0x00010c071ae0(), (int)lVar3 != 0))
                                                        && ((lVar3 = *(long *)(param_1 + 0x380),
                                                            lVar3 == *(long *)(param_3 + 0x380) ||
                                                            (func_0x00010c071ae0(), (int)lVar3 != 0)
                                                            ))))) &&
                                                      ((lVar3 = *(long *)(param_1 + 0x390),
                                                       lVar3 == *(long *)(param_3 + 0x390) ||
                                                       (func_0x00010c071ae0(), (int)lVar3 != 0))))))
                                                  )) && (((lVar3 = *(long *)(param_1 + 0x398),
                                                          lVar3 == *(long *)(param_3 + 0x398) ||
                                                          (func_0x00010c071ae0(), (int)lVar3 != 0))
                                                         && ((((((((lVar3 = *(long *)(param_1 +
                                                                                     0x3a0),
                                                                   lVar3 == *(long *)(param_3 +
                                                                                     0x3a0) ||
                                                                   (func_0x00010c071ae0(),
                                                                   (int)lVar3 != 0)) &&
                                                                  ((lVar3 = *(long *)(param_1 +
                                                                                     0x3a8),
                                                                   lVar3 == *(long *)(param_3 +
                                                                                     0x3a8) ||
                                                                   (func_0x00010c071ae0(),
                                                                   (int)lVar3 != 0)))) &&
                                                                 (((lVar3 = *(long *)(param_1 +
                                                                                     0x3b0),
                                                                   lVar3 == *(long *)(param_3 +
                                                                                     0x3b0) ||
                                                                   (func_0x00010c071ae0(),
                                                                   (int)lVar3 != 0)) &&
                                                                  ((lVar3 = *(long *)(param_1 +
                                                                                     0x3b8),
                                                                   lVar3 == *(long *)(param_3 +
                                                                                     0x3b8) ||
                                                                   (func_0x00010c071ae0(),
                                                                   (int)lVar3 != 0)))))) &&
                                                                (((((lVar3 = *(long *)(param_1 +
                                                                                      0x3c0),
                                                                    lVar3 == *(long *)(param_3 +
                                                                                      0x3c0) ||
                                                                    (func_0x00010c071ae0(),
                                                                    (int)lVar3 != 0)) &&
                                                                   ((lVar3 = *(long *)(param_1 +
                                                                                      0x3c8),
                                                                    lVar3 == *(long *)(param_3 +
                                                                                      0x3c8) ||
                                                                    (func_0x00010c071ae0(),
                                                                    (int)lVar3 != 0)))) &&
                                                                  ((lVar3 = *(long *)(param_1 +
                                                                                     0x3d0),
                                                                   lVar3 == *(long *)(param_3 +
                                                                                     0x3d0) ||
                                                                   (func_0x00010c071ae0(),
                                                                   (int)lVar3 != 0)))) &&
                                                                 ((lVar3 = *(long *)(param_1 + 0x3d8
                                                                                    ),
                                                                  lVar3 == *(long *)(param_3 + 0x3d8
                                                                                    ) ||
                                                                  (func_0x00010c071ae0(),
                                                                  (int)lVar3 != 0)))))) &&
                                                               ((((((((lVar3 = *(long *)(param_1 +
                                                                                        0x3f8),
                                                                      lVar3 == *(long *)(param_3 +
                                                                                        0x3f8) ||
                                                                      (func_0x00010c071ae0(),
                                                                      (int)lVar3 != 0)) &&
                                                                     ((lVar3 = *(long *)(param_1 +
                                                                                        0x400),
                                                                      lVar3 == *(long *)(param_3 +
                                                                                        0x400) ||
                                                                      (func_0x00010c071ae0(),
                                                                      (int)lVar3 != 0)))) &&
                                                                    ((lVar3 = *(long *)(param_1 +
                                                                                       0x440),
                                                                     lVar3 == *(long *)(param_3 +
                                                                                       0x440) ||
                                                                     (func_0x00010c071ae0(),
                                                                     (int)lVar3 != 0)))) &&
                                                                   (((lVar3 = *(long *)(param_1 +
                                                                                       0x448),
                                                                     lVar3 == *(long *)(param_3 +
                                                                                       0x448) ||
                                                                     (func_0x00010c071ae0(),
                                                                     (int)lVar3 != 0)) &&
                                                                    (((lVar3 = *(long *)(param_1 +
                                                                                        0x450),
                                                                      lVar3 == *(long *)(param_3 +
                                                                                        0x450) ||
                                                                      (func_0x00010c071ae0(),
                                                                      (int)lVar3 != 0)) &&
                                                                     ((lVar3 = *(long *)(param_1 +
                                                                                        0x470),
                                                                      lVar3 == *(long *)(param_3 +
                                                                                        0x470) ||
                                                                      (func_0x00010c071ae0(),
                                                                      (int)lVar3 != 0)))))))) &&
                                                                  (((lVar3 = *(long *)(param_1 +
                                                                                      0x478),
                                                                    lVar3 == *(long *)(param_3 +
                                                                                      0x478) ||
                                                                    (func_0x00010c071ae0(),
                                                                    (int)lVar3 != 0)) &&
                                                                   ((lVar3 = *(long *)(param_1 +
                                                                                      0x480),
                                                                    lVar3 == *(long *)(param_3 +
                                                                                      0x480) ||
                                                                    (func_0x00010c071ae0(),
                                                                    (int)lVar3 != 0)))))) &&
                                                                 (((((lVar3 = *(long *)(param_1 +
                                                                                       0x490),
                                                                     lVar3 == *(long *)(param_3 +
                                                                                       0x490) ||
                                                                     (func_0x00010c071ae0(),
                                                                     (int)lVar3 != 0)) &&
                                                                    ((lVar3 = *(long *)(param_1 +
                                                                                       0x498),
                                                                     lVar3 == *(long *)(param_3 +
                                                                                       0x498) ||
                                                                     (func_0x00010c071ae0(),
                                                                     (int)lVar3 != 0)))) &&
                                                                   ((lVar3 = *(long *)(param_1 +
                                                                                      0x4a0),
                                                                    lVar3 == *(long *)(param_3 +
                                                                                      0x4a0) ||
                                                                    (func_0x00010c071ae0(),
                                                                    (int)lVar3 != 0)))) &&
                                                                  ((lVar3 = *(long *)(param_1 +
                                                                                     0x4c0),
                                                                   lVar3 == *(long *)(param_3 +
                                                                                     0x4c0) ||
                                                                   (func_0x00010c071ae0(),
                                                                   (int)lVar3 != 0)))))) &&
                                                                (((lVar3 = *(long *)(param_1 + 0x4d0
                                                                                    ),
                                                                  lVar3 == *(long *)(param_3 + 0x4d0
                                                                                    ) ||
                                                                  (func_0x00010c071ae0(),
                                                                  (int)lVar3 != 0)) &&
                                                                 ((lVar3 = *(long *)(param_1 + 0x4e0
                                                                                    ),
                                                                  lVar3 == *(long *)(param_3 + 0x4e0
                                                                                    ) ||
                                                                  (func_0x00010c071ae0(),
                                                                  (int)lVar3 != 0)))))))) &&
                                                              (((lVar3 = *(long *)(param_1 + 0x500),
                                                                lVar3 == *(long *)(param_3 + 0x500)
                                                                || (func_0x00010c071ae0(),
                                                                   (int)lVar3 != 0)) &&
                                                               ((lVar3 = *(long *)(param_1 + 0x508),
                                                                lVar3 == *(long *)(param_3 + 0x508)
                                                                || (func_0x00010c071ae0(),
                                                                   (int)lVar3 != 0)))))) &&
                                                             (((((lVar3 = *(long *)(param_1 + 0x518)
                                                                 , lVar3 == *(long *)(param_3 +
                                                                                     0x518) ||
                                                                 (func_0x00010c071ae0(),
                                                                 (int)lVar3 != 0)) &&
                                                                ((lVar3 = *(long *)(param_1 + 0x520)
                                                                 , lVar3 == *(long *)(param_3 +
                                                                                     0x520) ||
                                                                 (func_0x00010c071ae0(),
                                                                 (int)lVar3 != 0)))) &&
                                                               (((lVar3 = *(long *)(param_1 + 0x528)
                                                                 , lVar3 == *(long *)(param_3 +
                                                                                     0x528) ||
                                                                 (func_0x00010c071ae0(),
                                                                 (int)lVar3 != 0)) &&
                                                                ((lVar3 = *(long *)(param_1 + 0x538)
                                                                 , lVar3 == *(long *)(param_3 +
                                                                                     0x538) ||
                                                                 (func_0x00010c071ae0(),
                                                                 (int)lVar3 != 0)))))) &&
                                                              ((((lVar3 = *(long *)(param_1 + 0x540)
                                                                 , lVar3 == *(long *)(param_3 +
                                                                                     0x540) ||
                                                                 (func_0x00010c071ae0(),
                                                                 (int)lVar3 != 0)) &&
                                                                ((lVar3 = *(long *)(param_1 + 0x548)
                                                                 , lVar3 == *(long *)(param_3 +
                                                                                     0x548) ||
                                                                 (func_0x00010c071ae0(),
                                                                 (int)lVar3 != 0)))) &&
                                                               ((lVar3 = *(long *)(param_1 + 0x550),
                                                                lVar3 == *(long *)(param_3 + 0x550)
                                                                || (func_0x00010c071ae0(),
                                                                   (int)lVar3 != 0)))))))))))) &&
                                                 ((((((lVar3 = *(long *)(param_1 + 0x558),
                                                      lVar3 == *(long *)(param_3 + 0x558) ||
                                                      (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                                                     (((((lVar3 = *(long *)(param_1 + 0x560),
                                                         lVar3 == *(long *)(param_3 + 0x560) ||
                                                         (func_0x00010c071ae0(), (int)lVar3 != 0))
                                                        && ((lVar3 = *(long *)(param_1 + 0x570),
                                                            lVar3 == *(long *)(param_3 + 0x570) ||
                                                            (func_0x00010c071ae0(), (int)lVar3 != 0)
                                                            ))) &&
                                                       ((lVar3 = *(long *)(param_1 + 0x628),
                                                        lVar3 == *(long *)(param_3 + 0x628) ||
                                                        (func_0x00010c071ae0(), (int)lVar3 != 0))))
                                                      && (((((lVar3 = *(long *)(param_1 + 0x630),
                                                             lVar3 == *(long *)(param_3 + 0x630) ||
                                                             (func_0x00010c071ae0(), (int)lVar3 != 0
                                                             )) && ((((lVar3 = *(long *)(param_1 +
                                                                                        0x638),
                                                                      lVar3 == *(long *)(param_3 +
                                                                                        0x638) ||
                                                                      (func_0x00010c071ae0(),
                                                                      (int)lVar3 != 0)) &&
                                                                     ((lVar3 = *(long *)(param_1 +
                                                                                        0x640),
                                                                      lVar3 == *(long *)(param_3 +
                                                                                        0x640) ||
                                                                      (func_0x00010c071ae0(),
                                                                      (int)lVar3 != 0)))) &&
                                                                    ((lVar3 = *(long *)(param_1 +
                                                                                       0x648),
                                                                     lVar3 == *(long *)(param_3 +
                                                                                       0x648) ||
                                                                     (func_0x00010c071ae0(),
                                                                     (int)lVar3 != 0)))))) &&
                                                           (((lVar3 = *(long *)(param_1 + 0x650),
                                                             lVar3 == *(long *)(param_3 + 0x650) ||
                                                             (func_0x00010c071ae0(), (int)lVar3 != 0
                                                             )) && ((((((lVar3 = *(long *)(param_1 +
                                                                                          0x658),
                                                                        lVar3 == *(long *)(param_3 +
                                                                                          0x658) ||
                                                                        (func_0x00010c071ae0(),
                                                                        (int)lVar3 != 0)) &&
                                                                       ((lVar3 = *(long *)(param_1 +
                                                                                          0x660),
                                                                        lVar3 == *(long *)(param_3 +
                                                                                          0x660) ||
                                                                        (func_0x00010c071ae0(),
                                                                        (int)lVar3 != 0)))) &&
                                                                      ((lVar3 = *(long *)(param_1 +
                                                                                         0x668),
                                                                       lVar3 == *(long *)(param_3 +
                                                                                         0x668) ||
                                                                       (func_0x00010c071ae0(),
                                                                       (int)lVar3 != 0)))) &&
                                                                     ((lVar3 = *(long *)(param_1 +
                                                                                        0x670),
                                                                      lVar3 == *(long *)(param_3 +
                                                                                        0x670) ||
                                                                      (func_0x00010c071ae0(),
                                                                      (int)lVar3 != 0)))) &&
                                                                    (((lVar3 = *(long *)(param_1 +
                                                                                        0x678),
                                                                      lVar3 == *(long *)(param_3 +
                                                                                        0x678) ||
                                                                      (func_0x00010c071ae0(),
                                                                      (int)lVar3 != 0)) &&
                                                                     ((lVar3 = *(long *)(param_1 +
                                                                                        0x680),
                                                                      lVar3 == *(long *)(param_3 +
                                                                                        0x680) ||
                                                                      (func_0x00010c071ae0(),
                                                                      (int)lVar3 != 0)))))))))) &&
                                                          ((lVar3 = *(long *)(param_1 + 0x690),
                                                           lVar3 == *(long *)(param_3 + 0x690) ||
                                                           (func_0x00010c071ae0(), (int)lVar3 != 0))
                                                          )))))) &&
                                                    (((lVar3 = *(long *)(param_1 + 0x698),
                                                      lVar3 == *(long *)(param_3 + 0x698) ||
                                                      (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                                                     ((((lVar3 = *(long *)(param_1 + 0x6a8),
                                                        lVar3 == *(long *)(param_3 + 0x6a8) ||
                                                        (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                                                       ((lVar3 = *(long *)(param_1 + 0x6e0),
                                                        lVar3 == *(long *)(param_3 + 0x6e0) ||
                                                        (func_0x00010c071ae0(), (int)lVar3 != 0))))
                                                      && ((((((lVar3 = *(long *)(param_1 + 0x6e8),
                                                              lVar3 == *(long *)(param_3 + 0x6e8) ||
                                                              (func_0x00010c071ae0(),
                                                              (int)lVar3 != 0)) &&
                                                             ((lVar3 = *(long *)(param_1 + 0x6f0),
                                                              lVar3 == *(long *)(param_3 + 0x6f0) ||
                                                              (func_0x00010c071ae0(),
                                                              (int)lVar3 != 0)))) &&
                                                            ((((lVar3 = *(long *)(param_1 + 0x6f8),
                                                               lVar3 == *(long *)(param_3 + 0x6f8)
                                                               || (func_0x00010c071ae0(),
                                                                  (int)lVar3 != 0)) &&
                                                              ((lVar3 = *(long *)(param_1 + 0x700),
                                                               lVar3 == *(long *)(param_3 + 0x700)
                                                               || (func_0x00010c071ae0(),
                                                                  (int)lVar3 != 0)))) &&
                                                             ((lVar3 = *(long *)(param_1 + 0x720),
                                                              lVar3 == *(long *)(param_3 + 0x720) ||
                                                              (func_0x00010c071ae0(),
                                                              (int)lVar3 != 0)))))) &&
                                                           (((lVar3 = *(long *)(param_1 + 0x728),
                                                             lVar3 == *(long *)(param_3 + 0x728) ||
                                                             (func_0x00010c071ae0(), (int)lVar3 != 0
                                                             )) && (((((lVar3 = *(long *)(param_1 +
                                                                                         0x730),
                                                                       lVar3 == *(long *)(param_3 +
                                                                                         0x730) ||
                                                                       (func_0x00010c071ae0(),
                                                                       (int)lVar3 != 0)) &&
                                                                      ((lVar3 = *(long *)(param_1 +
                                                                                         0x748),
                                                                       lVar3 == *(long *)(param_3 +
                                                                                         0x748) ||
                                                                       (func_0x00010c071ae0(),
                                                                       (int)lVar3 != 0)))) &&
                                                                     ((lVar3 = *(long *)(param_1 +
                                                                                        0x750),
                                                                      lVar3 == *(long *)(param_3 +
                                                                                        0x750) ||
                                                                      (func_0x00010c071ae0(),
                                                                      (int)lVar3 != 0)))) &&
                                                                    ((lVar3 = *(long *)(param_1 +
                                                                                       0x760),
                                                                     lVar3 == *(long *)(param_3 +
                                                                                       0x760) ||
                                                                     (func_0x00010c071ae0(),
                                                                     (int)lVar3 != 0)))))))) &&
                                                          ((((lVar3 = *(long *)(param_1 + 0x770),
                                                             lVar3 == *(long *)(param_3 + 0x770) ||
                                                             (func_0x00010c071ae0(), (int)lVar3 != 0
                                                             )) && ((lVar3 = *(long *)(param_1 +
                                                                                      0x778),
                                                                    lVar3 == *(long *)(param_3 +
                                                                                      0x778) ||
                                                                    (func_0x00010c071ae0(),
                                                                    (int)lVar3 != 0)))) &&
                                                           ((lVar3 = *(long *)(param_1 + 0x7d8),
                                                            lVar3 == *(long *)(param_3 + 0x7d8) ||
                                                            (func_0x00010c071ae0(), (int)lVar3 != 0)
                                                            ))))))))))) &&
                                                   ((lVar3 = *(long *)(param_1 + 0x7f0),
                                                    lVar3 == *(long *)(param_3 + 0x7f0) ||
                                                    (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                                                  (((((((((lVar3 = *(long *)(param_1 + 0x7f8),
                                                          lVar3 == *(long *)(param_3 + 0x7f8) ||
                                                          (func_0x00010c071ae0(), (int)lVar3 != 0))
                                                         && ((lVar3 = *(long *)(param_1 + 0x800),
                                                             lVar3 == *(long *)(param_3 + 0x800) ||
                                                             (func_0x00010c071ae0(), (int)lVar3 != 0
                                                             )))) &&
                                                        ((lVar3 = *(long *)(param_1 + 0x810),
                                                         lVar3 == *(long *)(param_3 + 0x810) ||
                                                         (func_0x00010c071ae0(), (int)lVar3 != 0))))
                                                       && ((lVar3 = *(long *)(param_1 + 0x840),
                                                           lVar3 == *(long *)(param_3 + 0x840) ||
                                                           (func_0x00010c071ae0(), (int)lVar3 != 0))
                                                          )) && (((lVar3 = *(long *)(param_1 + 0x848
                                                                                    ),
                                                                  lVar3 == *(long *)(param_3 + 0x848
                                                                                    ) ||
                                                                  (func_0x00010c071ae0(),
                                                                  (int)lVar3 != 0)) &&
                                                                 ((lVar3 = *(long *)(param_1 + 0x860
                                                                                    ),
                                                                  lVar3 == *(long *)(param_3 + 0x860
                                                                                    ) ||
                                                                  (func_0x00010c071ae0(),
                                                                  (int)lVar3 != 0)))))) &&
                                                     (((lVar3 = *(long *)(param_1 + 0x880),
                                                       lVar3 == *(long *)(param_3 + 0x880) ||
                                                       (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                                                      ((lVar3 = *(long *)(param_1 + 0x888),
                                                       lVar3 == *(long *)(param_3 + 0x888) ||
                                                       (func_0x00010c071ae0(), (int)lVar3 != 0))))))
                                                    && (((((lVar3 = *(long *)(param_1 + 0x890),
                                                           lVar3 == *(long *)(param_3 + 0x890) ||
                                                           (func_0x00010c071ae0(), (int)lVar3 != 0))
                                                          && ((lVar3 = *(long *)(param_1 + 0x8a0),
                                                              lVar3 == *(long *)(param_3 + 0x8a0) ||
                                                              (func_0x00010c071ae0(),
                                                              (int)lVar3 != 0)))) &&
                                                         (((lVar3 = *(long *)(param_1 + 0x8a8),
                                                           lVar3 == *(long *)(param_3 + 0x8a8) ||
                                                           (func_0x00010c071ae0(), (int)lVar3 != 0))
                                                          && ((lVar3 = *(long *)(param_1 + 0x8b0),
                                                              lVar3 == *(long *)(param_3 + 0x8b0) ||
                                                              (func_0x00010c071ae0(),
                                                              (int)lVar3 != 0)))))) &&
                                                        ((((lVar3 = *(long *)(param_1 + 0x8c0),
                                                           lVar3 == *(long *)(param_3 + 0x8c0) ||
                                                           (func_0x00010c071ae0(), (int)lVar3 != 0))
                                                          && ((lVar3 = *(long *)(param_1 + 0x8c8),
                                                              lVar3 == *(long *)(param_3 + 0x8c8) ||
                                                              (func_0x00010c071ae0(),
                                                              (int)lVar3 != 0)))) &&
                                                         ((lVar3 = *(long *)(param_1 + 0x8d0),
                                                          lVar3 == *(long *)(param_3 + 0x8d0) ||
                                                          (func_0x00010c071ae0(), (int)lVar3 != 0)))
                                                         ))))) &&
                                                   ((((lVar3 = *(long *)(param_1 + 0x8d8),
                                                      lVar3 == *(long *)(param_3 + 0x8d8) ||
                                                      (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                                                     (((lVar3 = *(long *)(param_1 + 0x8e0),
                                                       lVar3 == *(long *)(param_3 + 0x8e0) ||
                                                       (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                                                      ((lVar3 = *(long *)(param_1 + 0x8e8),
                                                       lVar3 == *(long *)(param_3 + 0x8e8) ||
                                                       (func_0x00010c071ae0(), (int)lVar3 != 0))))))
                                                    && ((((((lVar3 = *(long *)(param_1 + 0x8f0),
                                                            lVar3 == *(long *)(param_3 + 0x8f0) ||
                                                            (func_0x00010c071ae0(), (int)lVar3 != 0)
                                                            ) && ((((lVar3 = *(long *)(param_1 +
                                                                                      0x8f8),
                                                                    lVar3 == *(long *)(param_3 +
                                                                                      0x8f8) ||
                                                                    (func_0x00010c071ae0(),
                                                                    (int)lVar3 != 0)) &&
                                                                   ((((lVar3 = *(long *)(param_1 +
                                                                                        0x910),
                                                                      lVar3 == *(long *)(param_3 +
                                                                                        0x910) ||
                                                                      (func_0x00010c071ae0(),
                                                                      (int)lVar3 != 0)) &&
                                                                     ((lVar3 = *(long *)(param_1 +
                                                                                        0x918),
                                                                      lVar3 == *(long *)(param_3 +
                                                                                        0x918) ||
                                                                      (func_0x00010c071ae0(),
                                                                      (int)lVar3 != 0)))) &&
                                                                    ((lVar3 = *(long *)(param_1 +
                                                                                       0x928),
                                                                     lVar3 == *(long *)(param_3 +
                                                                                       0x928) ||
                                                                     (func_0x00010c071ae0(),
                                                                     (int)lVar3 != 0)))))) &&
                                                                  ((lVar3 = *(long *)(param_1 +
                                                                                     0x930),
                                                                   lVar3 == *(long *)(param_3 +
                                                                                     0x930) ||
                                                                   (func_0x00010c071ae0(),
                                                                   (int)lVar3 != 0)))))) &&
                                                          ((((((lVar3 = *(long *)(param_1 + 0x938),
                                                               lVar3 == *(long *)(param_3 + 0x938)
                                                               || (func_0x00010c071ae0(),
                                                                  (int)lVar3 != 0)) &&
                                                              ((lVar3 = *(long *)(param_1 + 0x940),
                                                               lVar3 == *(long *)(param_3 + 0x940)
                                                               || (func_0x00010c071ae0(),
                                                                  (int)lVar3 != 0)))) &&
                                                             ((lVar3 = *(long *)(param_1 + 0x950),
                                                              lVar3 == *(long *)(param_3 + 0x950) ||
                                                              (func_0x00010c071ae0(),
                                                              (int)lVar3 != 0)))) &&
                                                            ((lVar3 = *(long *)(param_1 + 0x958),
                                                             lVar3 == *(long *)(param_3 + 0x958) ||
                                                             (func_0x00010c071ae0(), (int)lVar3 != 0
                                                             )))) && ((((lVar3 = *(long *)(param_1 +
                                                                                          0x960),
                                                                        lVar3 == *(long *)(param_3 +
                                                                                          0x960) ||
                                                                        (func_0x00010c071ae0(),
                                                                        (int)lVar3 != 0)) &&
                                                                       ((lVar3 = *(long *)(param_1 +
                                                                                          0x968),
                                                                        lVar3 == *(long *)(param_3 +
                                                                                          0x968) ||
                                                                        (func_0x00010c071ae0(),
                                                                        (int)lVar3 != 0)))) &&
                                                                      ((lVar3 = *(long *)(param_1 +
                                                                                         0x970),
                                                                       lVar3 == *(long *)(param_3 +
                                                                                         0x970) ||
                                                                       (func_0x00010c071ae0(),
                                                                       (int)lVar3 != 0)))))))) &&
                                                         ((lVar3 = *(long *)(param_1 + 0x980),
                                                          lVar3 == *(long *)(param_3 + 0x980) ||
                                                          (func_0x00010c071ae0(), (int)lVar3 != 0)))
                                                         ) && ((((lVar3 = *(long *)(param_1 + 0x988)
                                                                 , lVar3 == *(long *)(param_3 +
                                                                                     0x988) ||
                                                                 (func_0x00010c071ae0(),
                                                                 (int)lVar3 != 0)) &&
                                                                ((lVar3 = *(long *)(param_1 + 0x990)
                                                                 , lVar3 == *(long *)(param_3 +
                                                                                     0x990) ||
                                                                 (func_0x00010c071ae0(),
                                                                 (int)lVar3 != 0)))) &&
                                                               ((((lVar3 = *(long *)(param_1 + 0x998
                                                                                    ),
                                                                  lVar3 == *(long *)(param_3 + 0x998
                                                                                    ) ||
                                                                  (func_0x00010c071ae0(),
                                                                  (int)lVar3 != 0)) &&
                                                                 ((lVar3 = *(long *)(param_1 + 0x9a0
                                                                                    ),
                                                                  lVar3 == *(long *)(param_3 + 0x9a0
                                                                                    ) ||
                                                                  (func_0x00010c071ae0(),
                                                                  (int)lVar3 != 0)))) &&
                                                                ((((lVar3 = *(long *)(param_1 +
                                                                                     0x9b0),
                                                                   lVar3 == *(long *)(param_3 +
                                                                                     0x9b0) ||
                                                                   (func_0x00010c071ae0(),
                                                                   (int)lVar3 != 0)) &&
                                                                  ((lVar3 = *(long *)(param_1 +
                                                                                     0x9b8),
                                                                   lVar3 == *(long *)(param_3 +
                                                                                     0x9b8) ||
                                                                   (func_0x00010c071ae0(),
                                                                   (int)lVar3 != 0)))) &&
                                                                 ((lVar3 = *(long *)(param_1 + 0x9c0
                                                                                    ),
                                                                  lVar3 == *(long *)(param_3 + 0x9c0
                                                                                    ) ||
                                                                  (func_0x00010c071ae0(),
                                                                  (int)lVar3 != 0))))))))))))))))))
                                              {
                                                lVar3 = *(long *)(param_1 + 0x9d8);
                                                if (lVar3 != *(long *)(param_3 + 0x9d8)) {
                                                  func_0x00010c071ae0();
                                                  goto LAB_10b078ff0;
                                                }
                                                goto LAB_10b078fe4;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b078ff0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b07900c; end: 10b079013; -[SCSnapCommonLoggingParams snapEditor] */

undefined1 FUN_10b07900c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b079014; end: 10b07901b; -[SCSnapCommonLoggingParams timelineEdit] */

undefined1 FUN_10b079014(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b07901c; end: 10b079023; -[SCSnapCommonLoggingParams timelineLayer] */

undefined1 FUN_10b07901c(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10b079024; end: 10b07902b; -[SCSnapCommonLoggingParams animatedStickerCount] */

undefined8 FUN_10b079024(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 10b07902c; end: 10b079033; -[SCSnapCommonLoggingParams animatedFilterCount] */

undefined8 FUN_10b07902c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 10b079034; end: 10b07903b; -[SCSnapCommonLoggingParams withAnimated] */

undefined1 FUN_10b079034(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 10b07903c; end: 10b079043; -[SCSnapCommonLoggingParams drawing] */

undefined1 FUN_10b07903c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 10b079044; end: 10b07904b; -[SCSnapCommonLoggingParams cropping] */

undefined1 FUN_10b079044(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 10b07904c; end: 10b079053; -[SCSnapCommonLoggingParams croppingStateChanged] */

undefined1 FUN_10b07904c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xe);
}



/* Entry: 10b079054; end: 10b07905b; -[SCSnapCommonLoggingParams withGallery] */

undefined1 FUN_10b079054(long param_1)

{
  return *(undefined1 *)(param_1 + 0xf);
}



/* Entry: 10b07905c; end: 10b079063; -[SCSnapCommonLoggingParams withMyStory] */

undefined1 FUN_10b07905c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 10b079064; end: 10b07906b; -[SCSnapCommonLoggingParams withFriendStory] */

undefined1 FUN_10b079064(long param_1)

{
  return *(undefined1 *)(param_1 + 0x11);
}



/* Entry: 10b07906c; end: 10b079073; -[SCSnapCommonLoggingParams withPublicStory] */

undefined1 FUN_10b07906c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x12);
}



/* Entry: 10b079074; end: 10b07907b; -[SCSnapCommonLoggingParams withMapStory] */

undefined1 FUN_10b079074(long param_1)

{
  return *(undefined1 *)(param_1 + 0x13);
}



/* Entry: 10b07907c; end: 10b079083; -[SCSnapCommonLoggingParams withSpotlightStory] */

undefined1 FUN_10b07907c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x14);
}



/* Entry: 10b079084; end: 10b07908b; -[SCSnapCommonLoggingParams withGroupCustomStory] */

undefined1 FUN_10b079084(long param_1)

{
  return *(undefined1 *)(param_1 + 0x15);
}



/* Entry: 10b07908c; end: 10b079093; -[SCSnapCommonLoggingParams withStoryPost] */

undefined1 FUN_10b07908c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x16);
}



/* Entry: 10b079094; end: 10b07909b; -[SCSnapCommonLoggingParams withPrivateStoryCount] */

undefined8 FUN_10b079094(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 10b07909c; end: 10b0790a3; -[SCSnapCommonLoggingParams withNonPrivateStoryCount] */

undefined8 FUN_10b07909c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 10b0790a4; end: 10b0790ab; -[SCSnapCommonLoggingParams storyBusinessIds] */

undefined8 FUN_10b0790a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 10b0790ac; end: 10b0790b3; -[SCSnapCommonLoggingParams withMyStoryPrivacyOverride] */

undefined8 FUN_10b0790ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 10b0790b4; end: 10b0790bb; -[SCSnapCommonLoggingParams withOurStory] */

undefined1 FUN_10b0790b4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x17);
}



/* Entry: 10b0790bc; end: 10b0790c3; -[SCSnapCommonLoggingParams withSnap] */

undefined1 FUN_10b0790bc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x18);
}



/* Entry: 10b0790c4; end: 10b0790cb; -[SCSnapCommonLoggingParams withLocationEnabled] */

undefined1 FUN_10b0790c4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x19);
}



/* Entry: 10b0790cc; end: 10b0790d3; -[SCSnapCommonLoggingParams fromPreview] */

undefined1 FUN_10b0790cc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1a);
}



/* Entry: 10b0790d4; end: 10b0790db; -[SCSnapCommonLoggingParams savedToGalleryByScreenshot] */

undefined1 FUN_10b0790d4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1b);
}



/* Entry: 10b0790dc; end: 10b0790e3; -[SCSnapCommonLoggingParams savedToGalleryByScreenRecording] */

undefined1 FUN_10b0790dc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1c);
}



/* Entry: 10b0790e4; end: 10b0790eb; -[SCSnapCommonLoggingParams reply] */

undefined1 FUN_10b0790e4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1d);
}



/* Entry: 10b0790ec; end: 10b0790f3; -[SCSnapCommonLoggingParams viewTime] */

undefined4 FUN_10b0790ec(long param_1)

{
  return *(undefined4 *)(param_1 + 0x68);
}


