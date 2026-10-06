/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0049c524; end: 0049c6af; -[KSCrashInstallationSnapAirAppExtension sendAllReportsWithAppName:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049c524(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_4);
  _objc_retainAutorelease(param_3);
  _objc_retain();
  func_0x0077bcc0(param_3);
  lVar1 = param_1;
  func_0x0077eb40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00780e80();
  if ((param_4 != 0) && (lVar2 == 0)) {
    (**(code **)(param_4 + 0x10))(param_4,lVar1,1,0);
  }
  puVar3 = PTR_PTR_00ac2f58;
  func_0x00783580(PTR_PTR_00ac2f58);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_00ac2f60;
  _objc_alloc();
  lVar1 = param_1;
  func_0x00788e00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00780fe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00791ec0(*(undefined8 *)(param_1 + _DAT_00ac50a0));
  _objc_retainAutoreleasedReturnValue();
  func_0x00785180();
  func_0x0049ca7c();
  func_0x0049ca74();
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x007835e0(PTR_PTR_00ac2f38);
  _objc_retainAutoreleasedReturnValue();
  func_0x007835a0();
  func_0x0049ca7c();
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x0049ca6c();
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_4);
  return;
}



/* Entry: 0049c6b0; end: 0049c783; -[KSCrashInstallationSnapAirAppExtension sendAllReportsWithAppNames:completion:] */

void FUN_0049c6b0(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined1 in_ZR;
  ulong *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long extraout_x8;
  undefined *puVar7;
  ulong *puVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong auStack_1a8 [7];
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  
  uVar4 = param_3;
  func_0x0049ca9c();
  _objc_retain(uVar4);
  _objc_retain();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  func_0x0049ca58();
  if (param_4 != 0) {
    lVar10 = *plStack_110;
    do {
      uVar11 = 0;
      do {
        if (*plStack_110 != lVar10) {
          _objc_enumerationMutation(param_3);
        }
        uVar4 = *(undefined8 *)(lStack_118 + uVar11 * 8);
        uVar12 = param_1;
        func_0x0078c600();
        uVar11 = uVar11 + 1;
        in_ZR = uVar11 == param_4;
      } while (uVar11 < param_4);
      func_0x0049ca58();
      param_4 = uVar12;
    } while (uVar12 != 0);
  }
  uVar11 = 0;
  func_0x0049ca6c();
  func_0x0049ca50();
  func_0x0049ca84();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_0049c784;
  uVar12 = uVar11;
  puStack_130 = &stack0xfffffffffffffff0;
  func_0x0049ca9c();
  func_0x0077cb80();
  FUN_004a3424();
  (*(code *)PTR____chkstk_darwin_00999f48)((uVar12 & 0xffffffff) * 8 + 0xf & 0xffffffff0);
  lVar10 = -extraout_x8;
  puVar8 = (ulong *)((long)auStack_1a8 + lVar10 + 0x28);
  puVar1 = puVar8;
  uVar6 = uVar4;
  FUN_004a3508();
  uVar9 = (uint)puVar1;
  uVar5 = (ulong)(int)uVar9;
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
  func_0x0077f1a0(PTR__OBJC_CLASS___NSMutableArray_00ac29a0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar7;
  for (uVar12 = (ulong)(uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU)); uVar12 != 0;
      uVar12 = uVar12 - 1) {
    uVar5 = *puVar8;
    uVar2 = uVar11;
    uVar6 = uVar4;
    func_0x0078b6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined *)0x0;
    if (uVar2 != 0) {
      puVar3 = puVar7;
      func_0x0077e720(puVar7);
      uVar5 = uVar2;
    }
    func_0x0049ca74();
    puVar8 = puVar8 + 1;
  }
  func_0x0049ca84();
  if ((bool)in_ZR) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  *(ulong *)((long)auStack_1a8 + lVar10 + 8) = uVar11;
  *(undefined8 *)((long)auStack_1a8 + lVar10 + 0x10) = uVar4;
  *(undefined1 ***)((long)auStack_1a8 + lVar10 + 0x18) = &puStack_130;
  *(code **)((long)auStack_1a8 + lVar10 + 0x20) = FUN_0049c88c;
  if (-1 < (long)uVar5) {
    func_0x0077cb80();
    FUN_004a366c(uVar5,puVar3,uVar6);
    puVar7 = (undefined *)0x0;
    if (uVar5 == 0) goto _objc_autoreleaseReturnValue;
    uVar11 = uVar5;
    FUN_004a2dcc();
    _free(uVar5);
    puVar3 = PTR__OBJC_CLASS___NSData_00ac2b10;
    if (uVar11 != 0) {
      _strlen(uVar11);
      func_0x00781620();
      _objc_retainAutoreleasedReturnValue();
      if (puVar3 == (undefined *)0x0) {
        puVar7 = (undefined *)0x0;
      }
      else {
        *(undefined8 *)((long)auStack_1a8 + lVar10) = 0;
        puVar7 = PTR_PTR_00ac2f28;
        func_0x00781a40();
        _objc_retainAutoreleasedReturnValue();
        if (puVar7 != (undefined *)0x0) {
          _objc_retain(puVar7);
        }
        func_0x0049ca6c();
      }
      func_0x0049ca50();
      goto _objc_autoreleaseReturnValue;
    }
  }
  puVar7 = (undefined *)0x0;
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar7);
  return;
}



/* Entry: 0049c784; end: 0049c88b; -[KSCrashInstallationSnapAirAppExtension allReportsForApp:] */

void FUN_0049c784(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 in_ZR;
  ulong *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long extraout_x8;
  undefined *puVar7;
  ulong *puVar8;
  uint uVar9;
  ulong uVar10;
  ulong auStack_88 [7];
  
  uVar10 = param_1;
  func_0x0049ca9c();
  func_0x0077cb80();
  FUN_004a3424();
  (*(code *)PTR____chkstk_darwin_00999f48)((uVar10 & 0xffffffff) * 8 + 0xf & 0xffffffff0);
  lVar1 = -extraout_x8;
  puVar8 = (ulong *)((long)auStack_88 + lVar1 + 0x28);
  puVar2 = puVar8;
  uVar6 = param_3;
  FUN_004a3508();
  uVar9 = (uint)puVar2;
  uVar5 = (ulong)(int)uVar9;
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
  func_0x0077f1a0(PTR__OBJC_CLASS___NSMutableArray_00ac29a0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar7;
  for (uVar10 = (ulong)(uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU)); uVar10 != 0;
      uVar10 = uVar10 - 1) {
    uVar5 = *puVar8;
    uVar3 = param_1;
    uVar6 = param_3;
    func_0x0078b6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = (undefined *)0x0;
    if (uVar3 != 0) {
      puVar4 = puVar7;
      func_0x0077e720(puVar7);
      uVar5 = uVar3;
    }
    func_0x0049ca74();
    puVar8 = puVar8 + 1;
  }
  func_0x0049ca84();
  if ((bool)in_ZR) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  *(ulong *)((long)auStack_88 + lVar1 + 8) = param_1;
  *(undefined8 *)((long)auStack_88 + lVar1 + 0x10) = param_3;
  *(undefined1 **)((long)auStack_88 + lVar1 + 0x18) = &stack0xfffffffffffffff0;
  *(code **)((long)auStack_88 + lVar1 + 0x20) = FUN_0049c88c;
  if (-1 < (long)uVar5) {
    func_0x0077cb80();
    FUN_004a366c(uVar5,puVar4,uVar6);
    puVar7 = (undefined *)0x0;
    if (uVar5 == 0) goto _objc_autoreleaseReturnValue;
    uVar10 = uVar5;
    FUN_004a2dcc();
    _free(uVar5);
    puVar4 = PTR__OBJC_CLASS___NSData_00ac2b10;
    if (uVar10 != 0) {
      _strlen(uVar10);
      func_0x00781620();
      _objc_retainAutoreleasedReturnValue();
      if (puVar4 == (undefined *)0x0) {
        puVar7 = (undefined *)0x0;
      }
      else {
        *(undefined8 *)((long)auStack_88 + lVar1) = 0;
        puVar7 = PTR_PTR_00ac2f28;
        func_0x00781a40();
        _objc_retainAutoreleasedReturnValue();
        if (puVar7 != (undefined *)0x0) {
          _objc_retain(puVar7);
        }
        func_0x0049ca6c();
      }
      func_0x0049ca50();
      goto _objc_autoreleaseReturnValue;
    }
  }
  puVar7 = (undefined *)0x0;
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar7);
  return;
}



/* Entry: 0049c88c; end: 0049c96f; -[KSCrashInstallationSnapAirAppExtension reportWithIntID:appName:] */

void FUN_0049c88c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  
  if (-1 < param_3) {
    func_0x0077cb80();
    FUN_004a366c(param_3,param_1,param_4);
    puVar2 = (undefined *)0x0;
    if (param_3 == 0) goto LAB_0049c95c;
    lVar1 = param_3;
    FUN_004a2dcc();
    _free(param_3);
    puVar2 = PTR__OBJC_CLASS___NSData_00ac2b10;
    if (lVar1 != 0) {
      _strlen(lVar1);
      func_0x00781620();
      _objc_retainAutoreleasedReturnValue();
      if (puVar2 == (undefined *)0x0) {
        puVar2 = (undefined *)0x0;
      }
      else {
        puVar2 = PTR_PTR_00ac2f28;
        func_0x00781a40();
        _objc_retainAutoreleasedReturnValue();
        if (puVar2 != (undefined *)0x0) {
          _objc_retain(puVar2);
        }
        func_0x0049ca6c();
      }
      func_0x0049ca50();
      goto LAB_0049c95c;
    }
  }
  puVar2 = (undefined *)0x0;
LAB_0049c95c:
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 0049c970; end: 0049c97f; -[KSCrashInstallationSnapAirAppExtension deleteAllReports] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049c970(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00781d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + _DAT_00ac50a4),PTR_s_deleteAllReports_00abb448);
  return;
}



/* Entry: 0049c980; end: 0049c9cf; -[KSCrashInstallationSnapAirAppExtension _getReportsPath] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0049c980(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_00ac50a0);
  func_0x00791ec0(uVar1,param_2,&PTR____CFConstantStringClassReference_00a26ba0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x0077bcc0();
  FUN_0049ca50();
  return uVar1;
}



/* Entry: 0049c9d0; end: 0049ca0f; -[KSCrashInstallationSnapAirAppExtension setUserInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049c9d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00780e20(param_3);
  func_0x007910e0(*(undefined8 *)(param_1 + _DAT_00ac50a4),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 0049ca10; end: 0049ca4f; -[KSCrashInstallationSnapAirAppExtension .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049ca10(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_00ac50a4,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + _DAT_00ac50a0,0);
  return;
}



/* Entry: 0049ca50; end: 0049caaf;  */

void FUN_0049ca50(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)();
  return;
}



/* Entry: 0049cab0; end: 0049cafb; +[KSCrash sharedInstance] */

void FUN_0049cab0(void)

{
  undefined8 uVar1;
  
  if (lRam0000000000b60358 != -1) {
    _dispatch_once(0xb60358,&PTR___NSConcreteGlobalBlock_009ebb10);
  }
  uVar1 = uRam0000000000b60350;
  func_0x0049e3e0();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 0049cafc; end: 0049cb27;  */

void FUN_0049cafc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_00ac2f48;
  _objc_alloc_init();
  uVar1 = puRam0000000000b60350;
  puRam0000000000b60350 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0049cb28; end: 0049cb73; +[KSCrash deviceID] */

void FUN_0049cb28(void)

{
  undefined8 uVar1;
  
  if (lRam0000000000b60360 != -1) {
    _dispatch_once(0xb60360,&PTR___NSConcreteGlobalBlock_009ebb30);
  }
  uVar1 = uRam0000000000b60368;
  func_0x0049e3e0();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 0049cb74; end: 0049cbab;  */

void FUN_0049cb74(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_004a60dc();
  func_0x0049e440();
  func_0x00792220();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uRam0000000000b60368;
  uRam0000000000b60368 = param_1;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0049cbac; end: 0049cce3; -[KSCrash init] */

undefined8 FUN_0049cbac(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  
  lVar1 = 0xd;
  _NSSearchPathForDirectoriesInDomains(0xd,1,1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00780e80();
  if (lVar2 == 0) {
    func_0x0049e350();
    func_0x0049e480();
    FUN_004ab180();
  }
  else {
    func_0x00789e00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x007882e0();
    if (lVar2 == 0) {
      func_0x0049e350();
      func_0x0049e480();
      FUN_004ab180();
    }
    else {
      FUN_0049e2cc();
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = &PTR____CFConstantStringClassReference_00a26b80;
      func_0x00791e80(&PTR____CFConstantStringClassReference_00a26b80);
      _objc_retainAutoreleasedReturnValue();
      func_0x0049e398();
      func_0x00791f80(ppuVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00791e80(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x0049e44c();
      _objc_release(ppuVar3);
    }
    func_0x0049e390();
  }
  func_0x0049e388();
  func_0x00784cc0(param_1);
  func_0x0049e398();
  return param_1;
}



/* Entry: 0049cce4; end: 0049ce5b; -[KSCrash initWithBasePath:] */

undefined8 * FUN_0049cce4(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lStack_288;
  undefined8 uStack_240;
  undefined *puStack_238;
  undefined8 auStack_22c [62];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  func_0x0049e3a0();
  puStack_238 = PTR_PTR_00ac3d88;
  puVar1 = &uStack_240;
  uStack_240 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_00abbf70);
  puVar3 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_0049e2cc();
    _objc_retainAutoreleasedReturnValue();
    func_0x0078d120(puVar1);
    func_0x0049e390();
    func_0x0078cf00(puVar1);
    puVar2 = puVar1;
    func_0x0077f780();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    _objc_release();
    if (puVar2 == (undefined8 *)0x0) {
      func_0x0049e350();
      FUN_004ab180();
      puVar1 = (undefined8 *)0x0;
      goto LAB_0049ce2c;
    }
    func_0x0078da20(puVar1);
    func_0x0078e720(puVar1);
    func_0x0078d340(puVar1);
    func_0x0078ee00(puVar1);
    func_0x007902c0(puVar1);
    func_0x0078f040(puVar1);
    func_0x0077f780();
    _objc_retainAutoreleasedReturnValue();
    func_0x0049e464();
    func_0x0077bcc0();
    _snprintf(auStack_22c,500,"%s/Data/CrashState.json");
    func_0x0049e390();
    puVar3 = auStack_22c;
    func_0x004a41c4(puVar3);
  }
  func_0x0049e3e8();
LAB_0049ce2c:
  func_0x0049e3a8();
  func_0x0049e388();
  func_0x0049e3b8(uStack_38);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x0049e46c();
  func_0x00781700();
  _objc_retainAutoreleasedReturnValue();
  func_0x0049e3e0();
  if (lStack_288 == 0) {
    func_0x0049e440();
    _objc_alloc();
    func_0x007851e0();
    func_0x0049e464();
    func_0x0077bcc0();
    FUN_004a1fd8();
    func_0x0049e390();
  }
  else {
    func_0x0049e350();
    FUN_004ab180();
  }
  func_0x0049e388();
  func_0x0049e3a8();
  return puVar3;
}



/* Entry: 0049ce5c; end: 0049cef7; -[KSCrash setUserInfo:] */

void FUN_0049ce5c(void)

{
  undefined8 uStack_38;
  
  func_0x0049e46c();
  func_0x00781700();
  _objc_retainAutoreleasedReturnValue();
  func_0x0049e3e0();
  if (uStack_38 == 0) {
    func_0x0049e440();
    _objc_alloc();
    func_0x007851e0();
    func_0x0049e464();
    func_0x0077bcc0();
    FUN_004a1fd8();
    func_0x0049e390();
  }
  else {
    func_0x0049e350();
    FUN_004ab180();
  }
  func_0x0049e388();
  func_0x0049e3a8();
  return;
}



/* Entry: 0049cef8; end: 0049cfe7; -[KSCrash userInfo] */

void FUN_0049cef8(long param_1)

{
  undefined8 uStack_48;
  
  if (lRam0000000000b66158 == 0) {
    param_1 = 0;
  }
  else {
    func_0x0049e440();
    func_0x00792220();
    _objc_retainAutoreleasedReturnValue();
    func_0x007815a0();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      param_1 = 0;
    }
    else {
      func_0x0049e46c();
      func_0x0077ba20();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(uStack_48);
      if (uStack_48 == 0) {
        _objc_retain(param_1);
      }
      else {
        func_0x0049e350();
        FUN_004ab180();
        param_1 = 0;
      }
      func_0x0049e398();
      func_0x0049e390();
    }
    func_0x0049e388();
    func_0x0049e3a8();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
  return;
}



/* Entry: 0049cfe8; end: 0049d00f; -[KSCrash setMonitoring:] */

void FUN_0049cfe8(long param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_0049e6e8();
  *(undefined4 *)(param_1 + 0x14) = param_3;
  return;
}



/* Entry: 0049d010; end: 0049d01f; -[KSCrash setSearchQueueNames:] */

void FUN_0049d010(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  uRam0000000000b6611c = param_3;
  return;
}



/* Entry: 0049d020; end: 0049d02f; -[KSCrash setOnCrash:] */

void FUN_0049d020(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  uRam0000000000b66160 = param_3;
  return;
}



/* Entry: 0049d030; end: 0049d03f; -[KSCrash setIntrospectMemory:] */

void FUN_0049d030(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  uRam0000000000b66140 = param_3;
  return;
}



/* Entry: 0049d040; end: 0049d103; -[KSCrash setDoNotIntrospectClasses:] */

void FUN_0049d040(void)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong unaff_x19;
  long unaff_x20;
  
  func_0x0049e364();
  func_0x0049e3e0();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  *(ulong *)(unaff_x20 + 0x40) = unaff_x19;
  _objc_release(uVar1);
  uVar2 = unaff_x19;
  func_0x00780e80();
  if (uVar2 == 0) {
    FUN_004a2008();
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSMutableData_00ac2cc8;
    func_0x00781720();
    _objc_retainAutoreleasedReturnValue();
    func_0x0049e464();
    func_0x007896e0();
    for (uVar5 = 0; uVar5 < uVar2; uVar5 = (ulong)((int)uVar5 + 1)) {
      uVar4 = unaff_x19;
      func_0x00789e00();
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x0049e3b0();
      *(ulong *)(puVar3 + uVar5 * 8) = uVar4;
      func_0x0049e44c();
    }
    FUN_004a2008(puVar3,uVar2);
    func_0x0049e390();
  }
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)();
  return;
}



/* Entry: 0049d104; end: 0049d113; -[KSCrash setMaxReportCount:] */

void FUN_0049d104(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x1c) = param_3;
  uRam0000000000b09290 = param_3;
  return;
}



/* Entry: 0049d114; end: 0049d6a3; -[KSCrash systemInfo] */

void FUN_0049d114(void)

{
  undefined *puVar1;
  undefined1 auStack_228 [256];
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_90;
  long lStack_88;
  long lStack_78;
  long lStack_50;
  
  _bzero(auStack_228,0x1e8);
  (*(code *)PTR_FUN_00b09390)(auStack_228);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8);
  if (lStack_128 != 0) {
    func_0x00792220(PTR__OBJC_CLASS___NSString_00ac2988);
    _objc_retainAutoreleasedReturnValue();
    FUN_0049e344();
    func_0x0049e388();
  }
  if (lStack_120 != 0) {
    func_0x00792220(PTR__OBJC_CLASS___NSString_00ac2988);
    _objc_retainAutoreleasedReturnValue();
    FUN_0049e344();
    func_0x0049e388();
  }
  if (lStack_118 != 0) {
    func_0x00792220(PTR__OBJC_CLASS___NSString_00ac2988);
    _objc_retainAutoreleasedReturnValue();
    FUN_0049e344();
    func_0x0049e388();
  }
  if (lStack_110 != 0) {
    func_0x00792220(PTR__OBJC_CLASS___NSString_00ac2988);
    _objc_retainAutoreleasedReturnValue();
    FUN_0049e344();
    func_0x0049e388();
  }
  if (lStack_108 != 0) {
    func_0x00792220(PTR__OBJC_CLASS___NSString_00ac2988);
    _objc_retainAutoreleasedReturnValue();
    FUN_0049e344();
    func_0x0049e388();
  }
  if (lStack_100 != 0) {
    func_0x00792220(PTR__OBJC_CLASS___NSString_00ac2988);
    _objc_retainAutoreleasedReturnValue();
    FUN_0049e344();
    func_0x0049e388();
  }
  func_0x00789be0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  FUN_0049e344();
  func_0x0049e388();
  if (lStack_f0 != 0) {
    func_0x00792220(PTR__OBJC_CLASS___NSString_00ac2988);
    _objc_retainAutoreleasedReturnValue();
    FUN_0049e344();
    func_0x0049e388();
  }
  if (lStack_e8 != 0) {
    func_0x00792220(PTR__OBJC_CLASS___NSString_00ac2988);
    _objc_retainAutoreleasedReturnValue();
    FUN_0049e344();
    func_0x0049e388();
  }
  if (lStack_e0 != 0) {
    func_0x00792220(PTR__OBJC_CLASS___NSString_00ac2988);
    _objc_retainAutoreleasedReturnValue();
    FUN_0049e344();
    func_0x0049e388();
  }
  if (lStack_d8 != 0) {
    func_0x00792220(PTR__OBJC_CLASS___NSString_00ac2988);
    _objc_retainAutoreleasedReturnValue();
    FUN_0049e344();
    func_0x0049e388();
  }
  if (lStack_d0 != 0) {
    func_0x00792220(PTR__OBJC_CLASS___NSString_00ac2988);
    _objc_retainAutoreleasedReturnValue();
    FUN_0049e344();
    func_0x0049e388();
  }
  if (lStack_c8 != 0) {
    func_0x00792220(PTR__OBJC_CLASS___NSString_00ac2988);
    _objc_retainAutoreleasedReturnValue();
    FUN_0049e344();
    func_0x0049e388();
  }
  if (lStack_c0 != 0) {
    func_0x00792220(PTR__OBJC_CLASS___NSString_00ac2988);
    _objc_retainAutoreleasedReturnValue();
    FUN_0049e344();
    func_0x0049e388();
  }
  if (lStack_b8 != 0) {
    func_0x00792220(PTR__OBJC_CLASS___NSString_00ac2988);
    _objc_retainAutoreleasedReturnValue();
    FUN_0049e344();
    func_0x0049e388();
  }
  if (lStack_b0 != 0) {
    func_0x00792220(PTR__OBJC_CLASS___NSString_00ac2988);
    _objc_retainAutoreleasedReturnValue();
    FUN_0049e344();
    func_0x0049e388();
  }
  if (lStack_a8 != 0) {
    func_0x00792220(PTR__OBJC_CLASS___NSString_00ac2988);
    _objc_retainAutoreleasedReturnValue();
    FUN_0049e344();
    func_0x0049e388();
  }
  func_0x00789c60(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  FUN_0049e344();
  func_0x0049e388();
  func_0x00789c60(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  FUN_0049e344();
  func_0x0049e388();
  func_0x00789c60(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  FUN_0049e344();
  func_0x0049e388();
  func_0x00789c60(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  FUN_0049e344();
  func_0x0049e388();
  if (lStack_90 != 0) {
    func_0x00792220(PTR__OBJC_CLASS___NSString_00ac2988);
    _objc_retainAutoreleasedReturnValue();
    FUN_0049e344();
    func_0x0049e388();
  }
  if (lStack_88 != 0) {
    func_0x00792220(PTR__OBJC_CLASS___NSString_00ac2988);
    _objc_retainAutoreleasedReturnValue();
    FUN_0049e344();
    func_0x0049e388();
  }
  func_0x00789c60(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  FUN_0049e344();
  func_0x0049e388();
  func_0x00789c60(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  FUN_0049e344();
  func_0x0049e388();
  if (lStack_78 != 0) {
    func_0x00792220(PTR__OBJC_CLASS___NSString_00ac2988);
    _objc_retainAutoreleasedReturnValue();
    FUN_0049e344();
    func_0x0049e388();
  }
  func_0x00789d60(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  FUN_0049e344();
  func_0x0049e388();
  func_0x00789d60(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  FUN_0049e344();
  func_0x0049e388();
  func_0x00789d60(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  FUN_0049e344();
  func_0x0049e388();
  func_0x00789d60(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  FUN_0049e344();
  func_0x0049e388();
  if (lStack_50 != 0) {
    func_0x00792220(PTR__OBJC_CLASS___NSString_00ac2988);
    _objc_retainAutoreleasedReturnValue();
    FUN_0049e344();
    func_0x0049e388();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 0049d6a4; end: 0049d7bb; -[KSCrash install] */

bool FUN_0049d6a4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x0077fd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x0077bcc0();
  lVar2 = param_1;
  func_0x0077f780(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x0077bcc0();
  FUN_0049e494(lVar1,lVar2);
  *(int *)(param_1 + 0x14) = (int)lVar1;
  func_0x0049e398();
  func_0x0049e388();
  func_0x00789500();
  if ((int)param_1 != 0) {
    func_0x00781c00(PTR__OBJC_CLASS___NSNotificationCenter_00ac2d50);
    _objc_retainAutoreleasedReturnValue();
    func_0x0077e7c0();
    func_0x0049e374(PTR__UIApplicationWillResignActiveNotification_00999030);
    func_0x0049e374(PTR__UIApplicationDidEnterBackgroundNotification_00999028);
    func_0x0049e374(&PTR_PTR_00b2c0e0);
    func_0x0049e374(PTR__UIApplicationWillTerminateNotification_00999038);
    func_0x0049e390();
  }
  return (int)param_1 != 0;
}



/* Entry: 0049d7bc; end: 0049d8f7; -[KSCrash sendAllReportsWithCompletion:] */

void FUN_0049d7bc(void)

{
  undefined8 unaff_x19;
  
  func_0x0049e364();
  func_0x0077eb20();
  _objc_retainAutoreleasedReturnValue();
  func_0x0049e3e0();
  func_0x0078c680();
  _objc_release(unaff_x19);
  func_0x0049e3a8();
  func_0x0049e390();
  return;
}



/* Entry: 0049d8f8; end: 0049d8fb; -[KSCrash deleteAllReports] */

void FUN_0049d8f8(void)

{
  func_0x004a3964();
  FUN_004a7cfc(uRam0000000000b66170);
                    /* WARNING: Could not recover jumptable at 0x0077ad38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_mutex_unlock_0099a598)();
  return;
}



/* Entry: 0049d8fc; end: 0049d913; -[KSCrash deleteReportWithID:] */

ulong FUN_0049d8fc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  bool bVar2;
  int iVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong auStack_490 [2];
  
  func_0x00788b40();
  func_0x004a3954();
  FUN_004a33e0();
  func_0x004a39d0();
  func_0x004a3940(extraout_x8);
  if ((bool)in_ZR) {
    return param_3;
  }
  ___stack_chk_fail();
  func_0x004a3954();
  FUN_004a36f4();
  func_0x004a39d0();
  func_0x004a3940(extraout_x8_00);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x004a3954();
    auStack_490[1] = extraout_x8_01;
    FUN_004a38a0();
    bVar2 = (int)param_3 == iRam0000000000b09290;
    if (iRam0000000000b09290 < (int)param_3) {
      (*(code *)PTR____chkstk_darwin_00999f48)((param_3 & 0xffffffff) * 8 + 0xf & 0xffffffff0);
      param_3 = (long)auStack_490 - extraout_x8_02;
      FUN_004a34f4();
      iVar3 = (int)param_3;
      for (lVar6 = 0; lVar4 = (long)iVar3 - (long)iRam0000000000b09290, bVar2 = lVar6 == lVar4,
          lVar6 < lVar4; lVar6 = lVar6 + 1) {
        param_3 = *(ulong *)(((long)auStack_490 - extraout_x8_02) + lVar6 * 8);
        FUN_004a3754(param_3);
      }
    }
    func_0x004a3940(auStack_490[1]);
    if (!bVar2) {
      ___stack_chk_fail();
      uVar1 = uRam0000000000b66168;
      lVar6 = lRam0000000000b66170;
      _opendir();
      if (lVar6 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0;
        while (lVar4 = lVar6, _readdir(), lVar4 != 0) {
          lVar4 = lVar4 + 0x15;
          FUN_004a38b4(lVar4,uVar1);
          uVar5 = (ulong)((int)uVar5 + ((uint)((ulong)lVar4 >> 0x3f) ^ 1));
        }
        _closedir(lVar6);
      }
      return uVar5;
    }
    return param_3;
  }
  return param_3;
}



/* Entry: 0049d914; end: 0049daab; -[KSCrash reportUserException:reason:language:lineOfCode:stackTrace:logAllThreads:terminateProgram:] */

void FUN_0049d914(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6,long param_7,undefined8 param_8,undefined1 param_9)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lStack_68;
  
  _objc_retain(param_7);
  _objc_retainAutorelease(param_3);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x0049e3b0(param_3);
  _objc_retainAutorelease(param_4);
  func_0x0049e3b0();
  func_0x0049e44c();
  uVar1 = param_5;
  _objc_retainAutorelease(param_5);
  func_0x0049e3b0();
  _objc_release(param_5);
  lVar2 = param_6;
  _objc_retainAutorelease(param_6);
  func_0x0049e3b0();
  _objc_release();
  if (param_7 == 0) {
    lVar3 = 0;
  }
  else {
    func_0x0049e428();
    func_0x00782680();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lStack_68;
    _objc_retain(lStack_68);
    if ((param_6 == 0) || (lStack_68 != 0)) {
      func_0x0049e350();
      FUN_004ab180();
    }
    func_0x0049e440();
    _objc_alloc();
    func_0x007851e0();
    _objc_retainAutorelease();
    func_0x0049e3b0();
    func_0x0049e388();
    _objc_release(param_6);
    _objc_release(lStack_68);
  }
  func_0x0049e71c(param_3,param_4,uVar1,lVar2,lVar3,param_8,param_9);
  func_0x0049e3a8();
  return;
}



/* Entry: 0049daac; end: 0049daaf; -[KSCrash enableSwapOfCxaThrow] */

void FUN_0049daac(void)

{
  if ((bRam0000000000b66209 & 1) == 0) {
    FUN_004a6c1c(0x4a4648);
    bRam0000000000b66209 = 1;
  }
  return;
}



/* Entry: 0049dab0; end: 0049dabb; -[KSCrash activeDurationSinceLastCrash] */

undefined8 FUN_0049dab0(void)

{
  return uRam0000000000b661b0;
}



/* Entry: 0049dabc; end: 0049dac7; -[KSCrash backgroundDurationSinceLastCrash] */

undefined8 FUN_0049dabc(void)

{
  return uRam0000000000b661b8;
}



/* Entry: 0049dac8; end: 0049dad3; -[KSCrash launchesSinceLastCrash] */

undefined4 FUN_0049dac8(void)

{
  return uRam0000000000b661c0;
}



/* Entry: 0049dad4; end: 0049dadf; -[KSCrash sessionsSinceLastCrash] */

undefined4 FUN_0049dad4(void)

{
  return uRam0000000000b661c4;
}



/* Entry: 0049dae0; end: 0049daeb; -[KSCrash activeDurationSinceLaunch] */

undefined8 FUN_0049dae0(void)

{
  return uRam0000000000b661c8;
}



/* Entry: 0049daec; end: 0049daf7; -[KSCrash backgroundDurationSinceLaunch] */

undefined8 FUN_0049daec(void)

{
  return uRam0000000000b661d0;
}



/* Entry: 0049daf8; end: 0049db03; -[KSCrash sessionsSinceLaunch] */

undefined4 FUN_0049daf8(void)

{
  return uRam0000000000b661d8;
}



/* Entry: 0049db04; end: 0049db0f; -[KSCrash crashedLastLaunch] */

undefined1 FUN_0049db04(void)

{
  return uRam0000000000b661dc;
}



/* Entry: 0049db10; end: 0049db1b; -[KSCrash reportID] */

undefined8 FUN_0049db10(void)

{
  return uRam0000000000b661f0;
}



/* Entry: 0049db1c; end: 0049db27; -[KSCrash sessionId] */

undefined8 FUN_0049db1c(void)

{
  return uRam0000000000b661f8;
}



/* Entry: 0049db28; end: 0049db57; -[KSCrash getLastCrashReportID] */

void FUN_0049db28(long param_1)

{
  func_0x0078b660();
  if (param_1 != 0) {
    func_0x0049e440();
    func_0x00792140();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0049db58; end: 0049db73; +[KSCrash setCurrentSessionID:] */

void FUN_0049db58(undefined8 param_1,undefined8 param_2,char *param_3)

{
  _objc_retainAutorelease();
  func_0x0049e3b0();
  if (param_3 == (char *)0x0) {
    param_3 = "unavailable";
  }
  else {
    _strdup();
  }
  PTR_s_unavailable_00b09240 = param_3;
  return;
}



/* Entry: 0049db74; end: 0049db77; -[KSCrash reportCount] */

undefined8 FUN_0049db74(undefined8 param_1)

{
  func_0x004a3964();
  FUN_004a38a0();
  _pthread_mutex_unlock();
  return param_1;
}



/* Entry: 0049db78; end: 0049dcc7; -[KSCrash sendReports:onCompletion:] */

void FUN_0049db78(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  
  func_0x0049e3a0();
  func_0x0049e3e8();
  lVar1 = param_3;
  func_0x00780e80();
  if (lVar1 == 0) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,param_3,1,0);
    }
  }
  else {
    lVar1 = param_1;
    func_0x00791880();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar2 = PTR__OBJC_CLASS___NSError_00ac2b00;
    if (lVar1 == 0) {
      _objc_opt_class(param_1);
      func_0x00781e40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00782e20(puVar2);
      _objc_retainAutoreleasedReturnValue();
      if (param_4 != 0) {
        (**(code **)(param_4 + 0x10))(param_4,param_3,0,puVar2);
      }
      func_0x0049e398();
    }
    else {
      func_0x00791880(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x0049e3e8();
      func_0x007835a0(param_1);
      func_0x0049e390();
      param_1 = param_4;
    }
    _objc_release(param_1);
  }
  func_0x0049e388();
  func_0x0049e3a8();
  return;
}



/* Entry: 0049dcc8; end: 0049dcdb;  */

void FUN_0049dcc8(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0049dcd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 0049dcdc; end: 0049dd2b; -[KSCrash loadCrashReportJSONWithID:] */

void FUN_0049dcdc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  FUN_0049e748(param_3,0);
  puVar1 = PTR__OBJC_CLASS___NSData_00ac2b10;
  if (param_3 != 0) {
    _strlen();
    func_0x00781620(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0049dd2c; end: 0049de43; -[KSCrash doctorReport:] */

void FUN_0049dd2c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  func_0x0049e3a0();
  lVar1 = param_3;
  func_0x00789f00(param_3,param_2,&PTR____CFConstantStringClassReference_00a27060);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_00ac2f68;
    func_0x00782360(PTR_PTR_00ac2f68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00781fc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x0078f4e0(lVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_00a27080);
    func_0x0049e398();
    func_0x0049e390();
  }
  lVar1 = param_3;
  func_0x00789f00(param_3,param_2,&PTR____CFConstantStringClassReference_00a270a0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x0049e388();
  func_0x0049e398();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_00ac2f68;
    func_0x00782360(PTR_PTR_00ac2f68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00781fc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x0078f4e0(lVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_00a27080);
    func_0x0049e398();
    func_0x0049e388();
  }
  func_0x0049e390();
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 0049de44; end: 0049df13; -[KSCrash reportIDs] */

void FUN_0049de44(ulong param_1)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  undefined1 *puVar7;
  uint uVar8;
  ulong uVar9;
  long alStack_70 [4];
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  func_0x0049e3cc();
  (*(code *)PTR____chkstk_darwin_00999f48)((param_1 & 0xffffffff) * 8 + 0xf & 0xffffffff0);
  lVar1 = -extraout_x8;
  puVar7 = auStack_50 + lVar1;
  puVar2 = puVar7;
  func_0x004a34c0();
  uVar8 = (uint)puVar2;
  puVar6 = (undefined *)(long)(int)uVar8;
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
  func_0x0077f1a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  puVar4 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  for (uVar9 = (ulong)(uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU));
      PTR__OBJC_CLASS___NSNumber_00ac29d8 = puVar4, uVar9 != 0; uVar9 = uVar9 - 1) {
    puVar7 = puVar7 + 8;
    func_0x00789cc0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x0077e720(puVar3);
    func_0x0049e390();
    puVar6 = puVar4;
    puVar4 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  }
  func_0x0049e3b8(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    *(undefined **)((long)alStack_70 + lVar1) = puVar3;
    *(undefined1 **)((long)alStack_70 + lVar1 + 8) = puVar7;
    *(undefined1 **)((long)alStack_70 + lVar1 + 0x10) = &stack0xfffffffffffffff0;
    *(code **)((long)alStack_70 + lVar1 + 0x18) = FUN_0049df14;
    func_0x00788b40(puVar6);
                    /* WARNING: Could not recover jumptable at 0x0078b6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)(puVar5,PTR_s_reportWithIntID__00abdac0,puVar6);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar3);
  return;
}



/* Entry: 0049df14; end: 0049df3f; -[KSCrash reportWithID:] */

void FUN_0049df14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00788b40(param_3);
                    /* WARNING: Could not recover jumptable at 0x0078b6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_reportWithIntID__00abdac0,param_3);
  return;
}



/* Entry: 0049df40; end: 0049e01f; -[KSCrash reportWithIntID:] */

void FUN_0049df40(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uStack_48;
  
  lVar1 = param_1;
  func_0x00788420();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    func_0x0049e428();
    func_0x00781a40();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uStack_48);
    if (uStack_48 != 0) {
      func_0x0049e350();
      FUN_004ab180();
    }
    if (lVar1 == 0) {
      func_0x0049e350();
      FUN_004ab180();
    }
    else {
      func_0x00782380(param_1,param_2,lVar1);
      func_0x0049e3e8();
    }
    func_0x0049e388();
    func_0x0049e390();
  }
  func_0x0049e3a8();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(lVar1);
  return;
}



/* Entry: 0049e020; end: 0049e0f7; -[KSCrash allReports] */

void FUN_0049e020(ulong param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined1 uVar5;
  uint uVar6;
  long extraout_x8;
  undefined8 *puVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 auStack_50 [2];
  
  uVar9 = param_1;
  func_0x0049e3cc();
  (*(code *)PTR____chkstk_darwin_00999f48)((uVar9 & 0xffffffff) * 8 + 0xf & 0xffffffff0);
  puVar7 = (undefined8 *)((long)auStack_50 - extraout_x8);
  puVar1 = puVar7;
  func_0x004a34c0();
  uVar8 = (uint)puVar1;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
  uVar6 = uVar8;
  func_0x0077f1a0();
  uVar5 = (undefined1)uVar6;
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  for (uVar9 = (ulong)(uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU)); uVar9 != 0; uVar9 = uVar9 - 1) {
    uVar5 = (undefined1)*puVar7;
    uVar3 = param_1;
    func_0x0078b6c0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = (undefined *)0x0;
    if (uVar3 != 0) {
      puVar4 = puVar2;
      func_0x0077e720();
      uVar5 = (undefined1)uVar3;
    }
    func_0x0049e398();
    puVar7 = puVar7 + 1;
  }
  func_0x0049e3b8(auStack_50[1]);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    puVar4[10] = uVar5;
    uRam0000000000b66106 = uVar5;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 0049e0f8; end: 0049e107; -[KSCrash setAddConsoleLogToReport:] */

void FUN_0049e0f8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 10) = param_3;
  uRam0000000000b66106 = param_3;
  return;
}



/* Entry: 0049e108; end: 0049e117; -[KSCrash setPrintPreviousLog:] */

void FUN_0049e108(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xb) = param_3;
  uRam0000000000b66105 = param_3;
  return;
}



/* Entry: 0049e118; end: 0049e163; -[KSCrash nullTerminated:] */

void FUN_0049e118(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  if (param_3 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableData_00ac2cc8;
    func_0x007816e0(PTR__OBJC_CLASS___NSMutableData_00ac2cc8);
    _objc_retainAutoreleasedReturnValue();
    func_0x0077ee80();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 0049e164; end: 0049e16b; -[KSCrash applicationDidBecomeActive] */

/* WARNING: Removing unreachable block (ram,0x004a4234) */

void FUN_0049e164(undefined8 param_1)

{
  if (cRam0000000000b66208 == '\x01') {
    uRam0000000000b661e8 = 1;
    FUN_004a4554();
    uRam0000000000b661e0 = param_1;
  }
  return;
}



/* Entry: 0049e16c; end: 0049e173; -[KSCrash applicationWillResignActive] */

/* WARNING: Removing unreachable block (ram,0x004a4224) */

void FUN_0049e16c(double param_1)

{
  double dVar1;
  
  dVar1 = dRam0000000000b661e0;
  if (cRam0000000000b66208 == '\x01') {
    uRam0000000000b661e8 = 0;
    FUN_004a4554();
    dRam0000000000b661c8 = dRam0000000000b661c8 + (param_1 - dVar1);
    dRam0000000000b661b0 = (param_1 - dVar1) + dRam0000000000b661b0;
  }
  return;
}



/* Entry: 0049e174; end: 0049e17b; -[KSCrash applicationDidEnterBackground] */

/* WARNING: Removing unreachable block (ram,0x004a42a8) */

bool FUN_0049e174(undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  code **ppcVar5;
  ulong uVar6;
  long lVar7;
  undefined *puVar8;
  char *pcVar9;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  uint uStack_11c;
  code *pcStack_118;
  uint *puStack_110;
  undefined1 auStack_108 [204];
  undefined1 uStack_3c;
  undefined8 uStack_38;
  
  uVar4 = uRam0000000000b66200;
  uVar2 = cRam0000000000b66208 == '\x01';
  if (!(bool)uVar2) {
    return false;
  }
  uRam0000000000b661e9 = 0;
  FUN_004a4554();
  uRam0000000000b661e0 = param_1;
  func_0x004a45e8();
  uStack_11c = (uint)uVar4;
  pcVar9 = "";
  uStack_38 = extraout_x8;
  _open();
  if ((int)uStack_11c < 0) {
    ___error();
    _strerror();
    func_0x004a45a4();
    param_4 = section_00000108.sectname + 8;
    uVar6 = extraout_x8_01;
    func_0x004ab038(extraout_x8_01);
    bVar1 = false;
    goto LAB_004a4110;
  }
  _bzero(auStack_108,0xd0);
  puStack_110 = &uStack_11c;
  pcStack_118 = FUN_004a4194;
  uStack_3c = 1;
  ppcVar5 = &pcStack_118;
  pcVar9 = (char *)0x0;
  func_0x004a8cec(ppcVar5,0);
  iVar3 = (int)ppcVar5;
  if (iVar3 == 0) {
    pcVar9 = "version";
    ppcVar5 = &pcStack_118;
    param_4 = (char *)((long)&MACH_HEADER.magic + 1);
    FUN_004a88c0(ppcVar5,"version");
    iVar3 = (int)ppcVar5;
    if (iVar3 == 0) {
      param_4 = (char *)(ulong)bRam0000000000b661dd;
      pcVar9 = "crashedLastLaunch";
      ppcVar5 = &pcStack_118;
      FUN_004a8808(ppcVar5,"crashedLastLaunch");
      iVar3 = (int)ppcVar5;
      if (iVar3 == 0) {
        pcVar9 = "activeDurationSinceLastCrash";
        ppcVar5 = &pcStack_118;
        FUN_004a8858(uRam0000000000b661b0,ppcVar5,"activeDurationSinceLastCrash");
        iVar3 = (int)ppcVar5;
        if (iVar3 == 0) {
          pcVar9 = "backgroundDurationSinceLastCrash";
          ppcVar5 = &pcStack_118;
          FUN_004a8858(uRam0000000000b661b8,ppcVar5,"backgroundDurationSinceLastCrash");
          iVar3 = (int)ppcVar5;
          if (iVar3 == 0) {
            param_4 = (char *)(long)iRam0000000000b661c0;
            pcVar9 = "launchesSinceLastCrash";
            ppcVar5 = &pcStack_118;
            FUN_004a88c0(ppcVar5,"launchesSinceLastCrash");
            iVar3 = (int)ppcVar5;
            if (iVar3 == 0) {
              param_4 = (char *)(long)iRam0000000000b661c4;
              pcVar9 = "sessionsSinceLastCrash";
              ppcVar5 = &pcStack_118;
              FUN_004a88c0(ppcVar5,"sessionsSinceLastCrash");
              iVar3 = (int)ppcVar5;
              if (iVar3 == 0) {
                if (lRam0000000000b661f0 != 0) {
                  lVar7 = lRam0000000000b661f0;
                  _strlen();
                  iVar3 = (int)lVar7;
                  pcVar9 = "reportIDLastLaunch";
                  func_0x004a45c8();
                  if (iVar3 != 0) goto LAB_004a4094;
                }
                if (PTR_s_unavailable_00b09240 != (undefined *)0x0) {
                  puVar8 = PTR_s_unavailable_00b09240;
                  _strlen();
                  iVar3 = (int)puVar8;
                  pcVar9 = "sessionIdLastLaunch";
                  func_0x004a45c8();
                  if (iVar3 != 0) goto LAB_004a4094;
                }
                iVar3 = (int)&pcStack_118;
                FUN_004a8e08();
              }
            }
          }
        }
      }
    }
  }
LAB_004a4094:
  uVar6 = (ulong)uStack_11c;
  _close(uVar6);
  bVar1 = iVar3 == 0;
  uVar2 = bVar1;
  if (iVar3 != 0) {
    FUN_004a8664();
    func_0x004a45a4();
    param_4 = section_00000158.sectname + 4;
    uVar6 = extraout_x8_00;
    func_0x004ab038(extraout_x8_00);
  }
LAB_004a4110:
  func_0x004a45fc(uStack_38);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    iVar3 = *(int *)param_4;
    FUN_004a7908(iVar3,uVar6,pcVar9);
    uVar2 = 0;
    if (iVar3 == 0) {
      uVar2 = 3;
    }
    return (bool)uVar2;
  }
  return bVar1;
}



/* Entry: 0049e17c; end: 0049e183; -[KSCrash applicationWillEnterForeground] */

/* WARNING: Removing unreachable block (ram,0x004a3f84) */
/* WARNING: Removing unreachable block (ram,0x004a40dc) */
/* WARNING: Removing unreachable block (ram,0x004a3fb8) */
/* WARNING: Removing unreachable block (ram,0x004a3ff0) */
/* WARNING: Removing unreachable block (ram,0x004a4008) */
/* WARNING: Removing unreachable block (ram,0x004a4024) */
/* WARNING: Removing unreachable block (ram,0x004a4040) */
/* WARNING: Removing unreachable block (ram,0x004a405c) */
/* WARNING: Removing unreachable block (ram,0x004a4078) */
/* WARNING: Removing unreachable block (ram,0x004a4134) */
/* WARNING: Removing unreachable block (ram,0x004a4140) */
/* WARNING: Removing unreachable block (ram,0x004a415c) */
/* WARNING: Removing unreachable block (ram,0x004a4168) */
/* WARNING: Removing unreachable block (ram,0x004a4184) */
/* WARNING: Removing unreachable block (ram,0x004a4094) */
/* WARNING: Removing unreachable block (ram,0x004a40ac) */
/* WARNING: Removing unreachable block (ram,0x004a4110) */
/* WARNING: Removing unreachable block (ram,0x004a411c) */
/* WARNING: Removing unreachable block (ram,0x004a4190) */
/* WARNING: Removing unreachable block (ram,0x004a41b8) */

undefined8 FUN_0049e17c(double param_1)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if (cRam0000000000b66208 == '\x01') {
    uRam0000000000b661e9 = 1;
    FUN_004a4554();
    dRam0000000000b661d0 = dRam0000000000b661d0 + (param_1 - dRam0000000000b661e0);
    dRam0000000000b661b8 = (param_1 - dRam0000000000b661e0) + dRam0000000000b661b8;
    iRam0000000000b661c4 = iRam0000000000b661c4 + 1;
    iRam0000000000b661d8 = iRam0000000000b661d8 + 1;
  }
  return uVar1;
}



/* Entry: 0049e184; end: 0049e187; -[KSCrash applicationWillTerminate] */

ulong FUN_0049e184(double param_1,ulong param_2,undefined8 param_3,char *param_4)

{
  double dVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  code **ppcVar5;
  ulong uVar6;
  long lVar7;
  undefined *puVar8;
  char *pcVar9;
  uint uVar10;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong uVar11;
  uint uStack_11c;
  code *pcStack_118;
  uint *puStack_110;
  undefined1 auStack_108 [204];
  undefined1 uStack_3c;
  undefined8 uStack_38;
  
  uVar4 = uRam0000000000b66200;
  dVar1 = dRam0000000000b661e0;
  uVar2 = cRam0000000000b66208 == '\x01';
  if (!(bool)uVar2) {
    return param_2;
  }
  FUN_004a4554();
  dRam0000000000b661b8 = dRam0000000000b661b8 + (param_1 - dVar1);
  func_0x004a45e8();
  uStack_11c = (uint)uVar4;
  pcVar9 = "";
  uStack_38 = extraout_x8;
  _open();
  if ((int)uStack_11c < 0) {
    ___error();
    _strerror();
    func_0x004a45a4();
    param_4 = section_00000108.sectname + 8;
    uVar6 = extraout_x8_01;
    func_0x004ab038(extraout_x8_01);
    uVar11 = 0;
    goto LAB_004a4110;
  }
  _bzero(auStack_108,0xd0);
  puStack_110 = &uStack_11c;
  pcStack_118 = FUN_004a4194;
  uStack_3c = 1;
  ppcVar5 = &pcStack_118;
  pcVar9 = (char *)0x0;
  func_0x004a8cec(ppcVar5,0);
  iVar3 = (int)ppcVar5;
  if (iVar3 == 0) {
    pcVar9 = "version";
    ppcVar5 = &pcStack_118;
    param_4 = (char *)((long)&MACH_HEADER.magic + 1);
    FUN_004a88c0(ppcVar5,"version");
    iVar3 = (int)ppcVar5;
    if (iVar3 == 0) {
      param_4 = (char *)(ulong)bRam0000000000b661dd;
      pcVar9 = "crashedLastLaunch";
      ppcVar5 = &pcStack_118;
      FUN_004a8808(ppcVar5,"crashedLastLaunch");
      iVar3 = (int)ppcVar5;
      if (iVar3 == 0) {
        pcVar9 = "activeDurationSinceLastCrash";
        ppcVar5 = &pcStack_118;
        FUN_004a8858(uRam0000000000b661b0,ppcVar5,"activeDurationSinceLastCrash");
        iVar3 = (int)ppcVar5;
        if (iVar3 == 0) {
          pcVar9 = "backgroundDurationSinceLastCrash";
          ppcVar5 = &pcStack_118;
          FUN_004a8858(dRam0000000000b661b8,ppcVar5,"backgroundDurationSinceLastCrash");
          iVar3 = (int)ppcVar5;
          if (iVar3 == 0) {
            param_4 = (char *)(long)iRam0000000000b661c0;
            pcVar9 = "launchesSinceLastCrash";
            ppcVar5 = &pcStack_118;
            FUN_004a88c0(ppcVar5,"launchesSinceLastCrash");
            iVar3 = (int)ppcVar5;
            if (iVar3 == 0) {
              param_4 = (char *)(long)iRam0000000000b661c4;
              pcVar9 = "sessionsSinceLastCrash";
              ppcVar5 = &pcStack_118;
              FUN_004a88c0(ppcVar5,"sessionsSinceLastCrash");
              iVar3 = (int)ppcVar5;
              if (iVar3 == 0) {
                if (lRam0000000000b661f0 != 0) {
                  lVar7 = lRam0000000000b661f0;
                  _strlen();
                  iVar3 = (int)lVar7;
                  pcVar9 = "reportIDLastLaunch";
                  func_0x004a45c8();
                  if (iVar3 != 0) goto LAB_004a4094;
                }
                if (PTR_s_unavailable_00b09240 != (undefined *)0x0) {
                  puVar8 = PTR_s_unavailable_00b09240;
                  _strlen();
                  iVar3 = (int)puVar8;
                  pcVar9 = "sessionIdLastLaunch";
                  func_0x004a45c8();
                  if (iVar3 != 0) goto LAB_004a4094;
                }
                iVar3 = (int)&pcStack_118;
                FUN_004a8e08();
              }
            }
          }
        }
      }
    }
  }
LAB_004a4094:
  uVar6 = (ulong)uStack_11c;
  _close(uVar6);
  uVar2 = iVar3 == 0;
  uVar11 = (ulong)(byte)uVar2;
  if (iVar3 != 0) {
    FUN_004a8664();
    func_0x004a45a4();
    param_4 = section_00000158.sectname + 4;
    uVar6 = extraout_x8_00;
    func_0x004ab038(extraout_x8_00);
  }
LAB_004a4110:
  func_0x004a45fc(uStack_38);
  if ((bool)uVar2) {
    return uVar11;
  }
  ___stack_chk_fail();
  iVar3 = *(int *)param_4;
  FUN_004a7908(iVar3,uVar6,pcVar9);
  uVar10 = 0;
  if (iVar3 == 0) {
    uVar10 = 3;
  }
  return (ulong)uVar10;
}



/* Entry: 0049e188; end: 0049e18f; -[KSCrash sink] */

undefined8 FUN_0049e188(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 0049e190; end: 0049e1af; -[KSCrash setSink:] */

void FUN_0049e190(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x0049e364();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0049e1b0; end: 0049e1b7; -[KSCrash deleteBehaviorAfterSendAll] */

undefined4 FUN_0049e1b0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 0049e1b8; end: 0049e1bf; -[KSCrash setDeleteBehaviorAfterSendAll:] */

void FUN_0049e1b8(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 0049e1c0; end: 0049e1c7; -[KSCrash monitoring] */

undefined4 FUN_0049e1c0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



/* Entry: 0049e1c8; end: 0049e1cf; -[KSCrash searchQueueNames] */

undefined1 FUN_0049e1c8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 0049e1d0; end: 0049e1d7; -[KSCrash onCrash] */

undefined8 FUN_0049e1d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 0049e1d8; end: 0049e1df; -[KSCrash bundleName] */

undefined8 FUN_0049e1d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 0049e1e0; end: 0049e1ff; -[KSCrash setBundleName:] */

void FUN_0049e1e0(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x0049e364();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x30) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0049e200; end: 0049e207; -[KSCrash basePath] */

undefined8 FUN_0049e200(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 0049e208; end: 0049e227; -[KSCrash setBasePath:] */

void FUN_0049e208(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x0049e364();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x38) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0049e228; end: 0049e22f; -[KSCrash introspectMemory] */

undefined1 FUN_0049e228(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 0049e230; end: 0049e237; -[KSCrash doNotIntrospectClasses] */

undefined8 FUN_0049e230(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 0049e238; end: 0049e23f; -[KSCrash demangleLanguages] */

undefined4 FUN_0049e238(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



/* Entry: 0049e240; end: 0049e247; -[KSCrash setDemangleLanguages:] */

void FUN_0049e240(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 0049e248; end: 0049e24f; -[KSCrash addConsoleLogToReport] */

undefined1 FUN_0049e248(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 0049e250; end: 0049e257; -[KSCrash printPreviousLog] */

undefined1 FUN_0049e250(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 0049e258; end: 0049e25f; -[KSCrash maxReportCount] */

undefined4 FUN_0049e258(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}



/* Entry: 0049e260; end: 0049e267; -[KSCrash uncaughtExceptionHandler] */

undefined8 FUN_0049e260(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 0049e268; end: 0049e26f; -[KSCrash setUncaughtExceptionHandler:] */

void FUN_0049e268(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x48) = param_3;
  return;
}



/* Entry: 0049e270; end: 0049e277; -[KSCrash currentSnapshotUserReportedExceptionHandler] */

undefined8 FUN_0049e270(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 0049e278; end: 0049e27f; -[KSCrash setCurrentSnapshotUserReportedExceptionHandler:] */

void FUN_0049e278(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x50) = param_3;
  return;
}



/* Entry: 0049e280; end: 0049e287; -[KSCrash catchZombies] */

undefined1 FUN_0049e280(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 0049e288; end: 0049e28f; -[KSCrash setCatchZombies:] */

void FUN_0049e288(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xc) = param_3;
  return;
}



/* Entry: 0049e290; end: 0049e2cb; -[KSCrash .cxx_destruct] */

void FUN_0049e290(long param_1)

{
  func_0x0049e45c(param_1 + 0x40);
  func_0x0049e45c(param_1 + 0x38);
  func_0x0049e45c(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 0x20,0);
  return;
}



/* Entry: 0049e2cc; end: 0049e343;  */

void FUN_0049e2cc(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSBundle_00ac2c38;
  func_0x00788c00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00784940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00789ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0049e388();
  func_0x0049e3a8();
  ppuVar1 = &PTR____CFConstantStringClassReference_00a27180;
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar1 = ppuVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(ppuVar1);
  return;
}



/* Entry: 0049e344; end: 0049e493;  */

void FUN_0049e344(void)

{
                    /* WARNING: Could not recover jumptable at 0x0078f4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)();
  return;
}



/* Entry: 0049e494; end: 0049e5fb;  */

undefined8 * FUN_0049e494(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  char *pcVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  code *extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 *unaff_x19;
  undefined4 *puVar13;
  undefined1 auStack_820 [112];
  code *pcStack_7b0;
  undefined8 uStack_7a0;
  code **ppcStack_798;
  undefined8 auStack_790 [3];
  code *pcStack_778;
  undefined8 *puStack_770;
  undefined1 ***pppuStack_6c0;
  code *pcStack_6b8;
  undefined8 auStack_6ac [2];
  undefined1 uStack_69c;
  undefined8 auStack_698 [61];
  undefined1 **ppuStack_490;
  undefined8 uStack_488;
  undefined8 auStack_47c [60];
  undefined8 uStack_298;
  undefined1 *puStack_260;
  code *pcStack_258;
  undefined8 *puStack_250;
  undefined1 auStack_23c [4];
  undefined8 *puStack_238;
  undefined1 auStack_22c [508];
  
  func_0x0049e880();
  if (cRam0000000000b65f10 == '\x01') {
    puVar5 = (undefined8 *)(ulong)uRam0000000000b09238;
    uVar3 = 1;
    param_2 = unaff_x19;
  }
  else {
    cRam0000000000b65f10 = '\x01';
    puStack_250 = param_2;
    func_0x0049e8a8();
    FUN_004a7bb8(auStack_22c);
    FUN_004a32d0(param_1,auStack_22c);
    puStack_250 = param_2;
    func_0x0049e8a8();
    FUN_004a7bb8(auStack_22c);
    puStack_250 = param_2;
    _snprintf(0xb65f11,500,"%s/Data/ConsoleLog.txt");
    uVar3 = cRam0000000000b66105 == '\x01';
    if ((bool)uVar3) {
      iVar4 = 0xb65f11;
      FUN_004a7a00(0xb65f11,&puStack_238,auStack_23c,0);
      if (iVar4 != 0) {
        _puts(
             "\nvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv Previous Log vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv\n"
             );
        _puts(puStack_238);
        _free(puStack_238);
        _puts(
             "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n"
             );
        _fflush(*(undefined8 *)PTR____stdoutp_00999f98);
        param_2 = puStack_238;
      }
    }
    FUN_004aae44(0xb65f11,1);
    FUN_0049e8c0(0x3c);
    pcRam0000000000b66188 = FUN_0049e5fc;
    uRam0000000000b66190 = 0x49e6a4;
    puVar5 = (undefined8 *)(ulong)uRam0000000000b09238;
    FUN_0049e6e8();
  }
  func_0x0049e830();
  if ((bool)uVar3) {
    return puVar5;
  }
  ___stack_chk_fail();
  pcStack_258 = FUN_0049e5fc;
  puVar6 = puVar5;
  puStack_260 = &stack0xfffffffffffffff0;
  func_0x0049e880();
  if ((*(byte *)(puVar6 + 2) & 1) == 0) {
    FUN_004a436c(*puVar5);
  }
  uVar11 = 0xb65f11;
  if (cRam0000000000b66106 == '\0') {
    uVar11 = 0;
  }
  puVar5[0x3c] = uVar11;
  uVar3 = *(char *)((long)puVar5 + 0x13) == '\x01';
  if ((bool)uVar3) {
    pcVar10 = (char *)0xb60378;
    uVar11 = uRam0000000000b60370;
    func_0x0049e830();
    if ((bool)uVar3) {
      func_0x004a2bdc(puVar5);
      lVar7 = 0xb60588;
      uStack_298 = extraout_x8;
      _strncpy();
      _strlen();
      *(undefined4 *)(lVar7 + 0xb60583) = 0x646c6f2e;
      *(undefined1 *)(lVar7 + 0xb60587) = 0;
      pcVar8 = pcVar10;
      _rename(pcVar10,0xb60588);
      if ((int)pcVar8 < 0) {
        ___error();
        func_0x004a2d24();
        func_0x004a2c78();
        func_0x004ab038(extraout_x8_00);
      }
      puVar5 = auStack_790;
      puVar6 = auStack_698;
      FUN_004a802c(puVar5,pcVar10,puVar6,0x400);
      if ((int)puVar5 != 0) {
        FUN_0049ebdc();
        func_0x004a2db8();
        func_0x004a2da4();
        func_0x004a2d90();
        func_0x004a2d7c();
        func_0x004a2d68();
        func_0x004a2d54();
        func_0x004a2d40();
        func_0x004a2d2c();
        ppcStack_798 = &pcStack_778;
        uStack_7a0 = 0x4a253c;
        pcStack_7b0 = extraout_x8_01;
        func_0x004a2cd8();
        pcStack_778 = FUN_004a0db8;
        uStack_69c = 1;
        puStack_770 = auStack_790;
        func_0x004a8cec(&pcStack_778,"report");
        iVar4 = 0xb60588;
        FUN_004a93e8(&pcStack_778,"recrash_report",0xb60588,1);
        func_0x004a2ca4();
        _remove();
        if (iVar4 < 0) {
          ___error();
          func_0x004a2d24();
          func_0x004a2c78();
          func_0x004ab038(extraout_x8_02);
        }
        FUN_004a0de8(auStack_820,"minimal",*param_2,param_2[0x34],uVar11);
        func_0x004a2ca4();
        (*pcStack_7b0)(auStack_820,"crash");
        func_0x004a0ec4(auStack_820,param_2);
        func_0x004a2ca4();
        puVar13 = (undefined4 *)param_2[3];
        puVar9 = puVar13;
        FUN_004ab9d4(puVar13,*puVar13);
        pcVar10 = "crashed_thread";
        FUN_004a12b4(auStack_820,"crashed_thread",param_2,puVar13,puVar9,0,1);
        func_0x004a2ca4();
        func_0x004a2d18();
        func_0x004a2d18();
        FUN_004a8e08(ppcStack_798);
        puVar5 = auStack_790;
        FUN_004a80a8(puVar5);
        do {
          iVar4 = iRam0000000000b66118 + -1;
          uVar3 = iVar4 == 0;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(0xb66118,0x10);
          if (bVar2) {
            cVar1 = ExclusiveMonitorsStatus();
            iRam0000000000b66118 = iVar4;
          }
        } while (cVar1 != '\0');
        puVar6 = param_2;
        if (iVar4 < 0) {
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(0xb66118,0x10);
            if (bVar2) {
              cVar1 = ExclusiveMonitorsStatus();
              iRam0000000000b66118 = iRam0000000000b66118 + 1;
            }
          } while (cVar1 != '\0');
        }
      }
      func_0x004a2b94(uStack_298);
      if ((bool)uVar3) {
        return puVar5;
      }
      ___stack_chk_fail();
      FUN_004a8128(puVar6,puVar5,pcVar10);
      uVar12 = 0;
      if ((int)puVar6 == 0) {
        uVar12 = 3;
      }
      return (undefined8 *)(ulong)uVar12;
    }
  }
  else {
    puVar5 = auStack_47c;
    FUN_004a33a0(puVar5);
    func_0x0049e864();
    func_0x0049e894();
    func_0x0049e830();
    if ((bool)uVar3) {
      return puVar5;
    }
  }
  uVar3 = 0;
  ___stack_chk_fail();
  uStack_488 = 0x49e6a4;
  ppuStack_490 = &puStack_260;
  func_0x0049e880();
  puVar5 = auStack_6ac;
  FUN_004a33a0();
  func_0x0049e864();
  func_0x0049e894();
  func_0x0049e830();
  if ((bool)uVar3) {
    return puVar5;
  }
  ___stack_chk_fail();
  uRam0000000000b09238 = (uint)puVar5;
  if (cRam0000000000b65f10 == '\x01') {
    pcStack_6b8 = FUN_0049e6e8;
    pppuStack_6c0 = &ppuStack_490;
    FUN_004a39f0();
    puVar5 = (undefined8 *)(ulong)uRam0000000000b6619c;
  }
  return puVar5;
}



/* Entry: 0049e5fc; end: 0049e6e7;  */

undefined1 * FUN_0049e5fc(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  char *pcVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  code *extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 *unaff_x19;
  undefined4 *puVar13;
  undefined1 auStack_5d0 [112];
  code *pcStack_560;
  undefined8 uStack_550;
  code **ppcStack_548;
  undefined1 auStack_540 [24];
  code *pcStack_528;
  undefined1 *puStack_520;
  undefined1 **ppuStack_470;
  code *pcStack_468;
  undefined1 auStack_45c [16];
  undefined1 uStack_44c;
  undefined8 auStack_448 [61];
  undefined1 *puStack_240;
  undefined8 uStack_238;
  undefined1 auStack_22c [484];
  undefined8 uStack_48;
  
  puVar5 = param_1;
  func_0x0049e880();
  if ((*(byte *)(puVar5 + 2) & 1) == 0) {
    FUN_004a436c(*param_1);
  }
  uVar11 = 0xb65f11;
  if (cRam0000000000b66106 == '\0') {
    uVar11 = 0;
  }
  param_1[0x3c] = uVar11;
  uVar3 = *(char *)((long)param_1 + 0x13) == '\x01';
  if ((bool)uVar3) {
    pcVar10 = (char *)0xb60378;
    uVar11 = uRam0000000000b60370;
    func_0x0049e830();
    if ((bool)uVar3) {
      func_0x004a2bdc(param_1);
      lVar7 = 0xb60588;
      uStack_48 = extraout_x8;
      _strncpy();
      _strlen();
      *(undefined4 *)(lVar7 + 0xb60583) = 0x646c6f2e;
      *(undefined1 *)(lVar7 + 0xb60587) = 0;
      pcVar8 = pcVar10;
      _rename(pcVar10,0xb60588);
      if ((int)pcVar8 < 0) {
        ___error();
        func_0x004a2d24();
        func_0x004a2c78();
        func_0x004ab038(extraout_x8_00);
      }
      puVar6 = auStack_540;
      puVar5 = auStack_448;
      FUN_004a802c(puVar6,pcVar10,puVar5,0x400);
      if ((int)puVar6 != 0) {
        FUN_0049ebdc();
        func_0x004a2db8();
        func_0x004a2da4();
        func_0x004a2d90();
        func_0x004a2d7c();
        func_0x004a2d68();
        func_0x004a2d54();
        func_0x004a2d40();
        func_0x004a2d2c();
        ppcStack_548 = &pcStack_528;
        uStack_550 = 0x4a253c;
        pcStack_560 = extraout_x8_01;
        func_0x004a2cd8();
        pcStack_528 = FUN_004a0db8;
        uStack_44c = 1;
        puStack_520 = auStack_540;
        func_0x004a8cec(&pcStack_528,"report");
        iVar4 = 0xb60588;
        FUN_004a93e8(&pcStack_528,"recrash_report",0xb60588,1);
        func_0x004a2ca4();
        _remove();
        if (iVar4 < 0) {
          ___error();
          func_0x004a2d24();
          func_0x004a2c78();
          func_0x004ab038(extraout_x8_02);
        }
        FUN_004a0de8(auStack_5d0,"minimal",*unaff_x19,unaff_x19[0x34],uVar11);
        func_0x004a2ca4();
        (*pcStack_560)(auStack_5d0,"crash");
        func_0x004a0ec4(auStack_5d0,unaff_x19);
        func_0x004a2ca4();
        puVar13 = (undefined4 *)unaff_x19[3];
        puVar9 = puVar13;
        FUN_004ab9d4(puVar13,*puVar13);
        pcVar10 = "crashed_thread";
        FUN_004a12b4(auStack_5d0,"crashed_thread",unaff_x19,puVar13,puVar9,0,1);
        func_0x004a2ca4();
        func_0x004a2d18();
        func_0x004a2d18();
        FUN_004a8e08(ppcStack_548);
        puVar6 = auStack_540;
        FUN_004a80a8(puVar6);
        do {
          iVar4 = iRam0000000000b66118 + -1;
          uVar3 = iVar4 == 0;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(0xb66118,0x10);
          if (bVar2) {
            cVar1 = ExclusiveMonitorsStatus();
            iRam0000000000b66118 = iVar4;
          }
        } while (cVar1 != '\0');
        puVar5 = unaff_x19;
        if (iVar4 < 0) {
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(0xb66118,0x10);
            if (bVar2) {
              cVar1 = ExclusiveMonitorsStatus();
              iRam0000000000b66118 = iRam0000000000b66118 + 1;
            }
          } while (cVar1 != '\0');
        }
      }
      func_0x004a2b94(uStack_48);
      if ((bool)uVar3) {
        return puVar6;
      }
      ___stack_chk_fail();
      FUN_004a8128(puVar5,puVar6,pcVar10);
      uVar12 = 0;
      if ((int)puVar5 == 0) {
        uVar12 = 3;
      }
      return (undefined1 *)(ulong)uVar12;
    }
  }
  else {
    puVar6 = auStack_22c;
    FUN_004a33a0(puVar6);
    func_0x0049e864();
    func_0x0049e894();
    func_0x0049e830();
    if ((bool)uVar3) {
      return puVar6;
    }
  }
  uVar3 = 0;
  ___stack_chk_fail();
  uStack_238 = 0x49e6a4;
  puStack_240 = &stack0xfffffffffffffff0;
  func_0x0049e880();
  puVar6 = auStack_45c;
  FUN_004a33a0();
  func_0x0049e864();
  func_0x0049e894();
  func_0x0049e830();
  if ((bool)uVar3) {
    return puVar6;
  }
  ___stack_chk_fail();
  uRam0000000000b09238 = SUB84(puVar6,0);
  if (cRam0000000000b65f10 == '\x01') {
    pcStack_468 = FUN_0049e6e8;
    ppuStack_470 = &puStack_240;
    FUN_004a39f0();
    puVar6 = (undefined1 *)(ulong)uRam0000000000b6619c;
  }
  return puVar6;
}



/* Entry: 0049e6e8; end: 0049e747;  */

ulong FUN_0049e6e8(ulong param_1)

{
  uRam0000000000b09238 = (undefined4)param_1;
  if (cRam0000000000b65f10 == '\x01') {
    FUN_004a39f0();
    param_1 = (ulong)uRam0000000000b6619c;
  }
  return param_1;
}



/* Entry: 0049e748; end: 0049e803;  */

long FUN_0049e748(long param_1,int param_2)

{
  long lVar1;
  
  if (param_1 < 0) {
    func_0x0049e848();
    func_0x004ab038();
    param_1 = 0;
  }
  else {
    FUN_004a3600();
    if (param_1 == 0) {
      func_0x0049e848();
      func_0x004ab038();
    }
    else if (param_2 != 0) {
      lVar1 = param_1;
      FUN_004a2dcc();
      if (lVar1 == 0) {
        func_0x0049e848();
        func_0x004ab038();
      }
      _free(param_1);
      param_1 = lVar1;
    }
  }
  return param_1;
}



/* Entry: 0049e804; end: 0049e82f;  */

void FUN_0049e804(char *param_1)

{
  if (param_1 == (char *)0x0) {
    param_1 = "unavailable";
  }
  else {
    _strdup();
  }
  PTR_s_unavailable_00b09240 = param_1;
  return;
}



/* Entry: 0049e830; end: 0049e8bf;  */

void FUN_0049e830(void)

{
  return;
}



/* Entry: 0049e8c0; end: 0049e993;  */

void FUN_0049e8c0(undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  char *pcVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  char acStack_4c0 [1000];
  long lStack_d8;
  uint auStack_cc [3];
  undefined1 auStack_58 [64];
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_00999f88;
  if ((bRam0000000000b66108 & 1) == 0) {
    bRam0000000000b66108 = 1;
    uRam0000000000b6610c = param_1;
    _pthread_attr_init(auStack_58);
    _pthread_attr_setdetachstate(auStack_58,2);
    iVar5 = 0xb66110;
    _pthread_create(0xb66110,auStack_58,FUN_0049e994,"KSCrash Cached Data Monitor");
    if (iVar5 != 0) {
      _strerror();
      func_0x004ab038("ERROR","Vendors/KSCrash/implementation/Recording/KSCrashCachedData.c",0xb3,
                      "void ksccd_init(int)","pthread_create_suspended_np: %s");
    }
    _pthread_attr_destroy(auStack_58);
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_18) {
    ___stack_chk_fail();
    _pthread_setname_np("KSCrash Detection");
    _usleep(1);
    do {
      uVar2 = uRam0000000000b66120;
      if (iRam0000000000b66118 < 1) {
        uVar11 = (ulong)*(uint *)PTR__mach_task_self__0099a3c0;
        uVar7 = uVar11;
        _task_threads(uVar11,&lStack_d8,auStack_cc);
        uVar1 = auStack_cc[0];
        func_0x0049eca0();
        uVar8 = uVar7;
        func_0x0049eca0();
        uVar9 = uVar8;
        func_0x0049eca0();
        uRam0000000000b60570 = uVar9;
        func_0x0049eca0();
        uRam0000000000b60578 = uVar9;
        for (uVar13 = 0; uVar4 = uRam0000000000b66138, uVar3 = uRam0000000000b66130,
            uVar12 = uRam0000000000b66128, uVar9 = uRam0000000000b60580, uVar13 < uVar1;
            uVar13 = uVar13 + 1) {
          uVar12 = (ulong)*(uint *)(lStack_d8 + uVar13 * 4);
          uVar9 = uVar12;
          _pthread_from_mach_thread_np();
          *(ulong *)(uVar7 + uVar13 * 8) = uVar12;
          *(ulong *)(uVar8 + uVar13 * 8) = uVar9;
          if (((uVar9 != 0) && (_pthread_getname_np(), (int)uVar9 == 0)) && (acStack_4c0[0] != '\0')
             ) {
            pcVar10 = acStack_4c0;
            _strdup();
            *(char **)(uRam0000000000b60570 + uVar13 * 8) = pcVar10;
          }
          if (((cRam0000000000b6611c == '\x01') &&
              (FUN_004ad910(uVar12,acStack_4c0,1000), (int)uVar12 != 0)) && (acStack_4c0[0] != '\0')
             ) {
            pcVar10 = acStack_4c0;
            _strdup();
            *(char **)(uRam0000000000b60578 + uVar13 * 8) = pcVar10;
          }
          uVar1 = auStack_cc[0];
        }
        uRam0000000000b66130 = uRam0000000000b60570;
        uRam0000000000b66138 = uRam0000000000b60578;
        uRam0000000000b60570 = uVar3;
        uRam0000000000b60578 = uVar4;
        uRam0000000000b60580 = uVar8;
        uRam0000000000b66120 = uVar1;
        uRam0000000000b66128 = uVar7;
        _free(uVar12);
        _free(uVar9);
        uVar13 = (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU));
        if (uVar3 != 0) {
          for (lVar14 = 0; uVar13 << 3 != lVar14; lVar14 = lVar14 + 8) {
            _free(*(undefined8 *)(uVar3 + lVar14));
          }
          _free(uVar3);
        }
        if (uVar4 != 0) {
          for (lVar14 = 0; uVar13 << 3 != lVar14; lVar14 = lVar14 + 8) {
            _free(*(undefined8 *)(uVar4 + lVar14));
          }
          _free(uVar4);
        }
        for (uVar13 = 0; uVar13 < auStack_cc[0]; uVar13 = uVar13 + 1) {
          _mach_port_deallocate(uVar11,*(undefined4 *)(lStack_d8 + uVar13 * 4));
        }
        _vm_deallocate(uVar11,lStack_d8,(ulong)auStack_cc[0] << 2);
      }
      uVar6 = uRam0000000000b6610c;
      if (0 < iRam0000000000b09248) {
        iRam0000000000b09248 = iRam0000000000b09248 + -1;
        uVar6 = 1;
      }
      _sleep(uVar6);
    } while( true );
  }
  return;
}



/* Entry: 0049e994; end: 0049ebdb;  */

void FUN_0049e994(void)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  char *pcVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  char acStack_460 [1000];
  long lStack_78;
  uint auStack_6c [3];
  
  _pthread_setname_np("KSCrash Detection");
  _usleep(1);
  do {
    uVar2 = uRam0000000000b66120;
    if (iRam0000000000b66118 < 1) {
      uVar10 = (ulong)*(uint *)PTR__mach_task_self__0099a3c0;
      uVar6 = uVar10;
      _task_threads(uVar10,&lStack_78,auStack_6c);
      uVar1 = auStack_6c[0];
      func_0x0049eca0();
      uVar7 = uVar6;
      func_0x0049eca0();
      uVar8 = uVar7;
      func_0x0049eca0();
      uRam0000000000b60570 = uVar8;
      func_0x0049eca0();
      uRam0000000000b60578 = uVar8;
      for (uVar12 = 0; uVar4 = uRam0000000000b66138, uVar3 = uRam0000000000b66130,
          uVar11 = uRam0000000000b66128, uVar8 = uRam0000000000b60580, uVar12 < uVar1;
          uVar12 = uVar12 + 1) {
        uVar11 = (ulong)*(uint *)(lStack_78 + uVar12 * 4);
        uVar8 = uVar11;
        _pthread_from_mach_thread_np();
        *(ulong *)(uVar6 + uVar12 * 8) = uVar11;
        *(ulong *)(uVar7 + uVar12 * 8) = uVar8;
        if (((uVar8 != 0) && (_pthread_getname_np(), (int)uVar8 == 0)) && (acStack_460[0] != '\0'))
        {
          pcVar9 = acStack_460;
          _strdup();
          *(char **)(uRam0000000000b60570 + uVar12 * 8) = pcVar9;
        }
        if (((cRam0000000000b6611c == '\x01') &&
            (FUN_004ad910(uVar11,acStack_460,1000), (int)uVar11 != 0)) && (acStack_460[0] != '\0'))
        {
          pcVar9 = acStack_460;
          _strdup();
          *(char **)(uRam0000000000b60578 + uVar12 * 8) = pcVar9;
        }
        uVar1 = auStack_6c[0];
      }
      uRam0000000000b66130 = uRam0000000000b60570;
      uRam0000000000b66138 = uRam0000000000b60578;
      uRam0000000000b60570 = uVar3;
      uRam0000000000b60578 = uVar4;
      uRam0000000000b60580 = uVar7;
      uRam0000000000b66120 = uVar1;
      uRam0000000000b66128 = uVar6;
      _free(uVar11);
      _free(uVar8);
      uVar12 = (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU));
      if (uVar3 != 0) {
        for (lVar13 = 0; uVar12 << 3 != lVar13; lVar13 = lVar13 + 8) {
          _free(*(undefined8 *)(uVar3 + lVar13));
        }
        _free(uVar3);
      }
      if (uVar4 != 0) {
        for (lVar13 = 0; uVar12 << 3 != lVar13; lVar13 = lVar13 + 8) {
          _free(*(undefined8 *)(uVar4 + lVar13));
        }
        _free(uVar4);
      }
      for (uVar12 = 0; uVar12 < auStack_6c[0]; uVar12 = uVar12 + 1) {
        _mach_port_deallocate(uVar10,*(undefined4 *)(lStack_78 + uVar12 * 4));
      }
      _vm_deallocate(uVar10,lStack_78,(ulong)auStack_6c[0] << 2);
    }
    uVar5 = uRam0000000000b6610c;
    if (0 < iRam0000000000b09248) {
      iRam0000000000b09248 = iRam0000000000b09248 + -1;
      uVar5 = 1;
    }
    _sleep(uVar5);
  } while( true );
}



/* Entry: 0049ebdc; end: 0049ecab;  */

void FUN_0049ebdc(void)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  
  do {
    iVar3 = iRam0000000000b66118;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0xb66118,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      iRam0000000000b66118 = iRam0000000000b66118 + 1;
    }
  } while (cVar1 != '\0');
  if (0 < iVar3) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077b7c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__usleep_0099a830)(1);
  return;
}



/* Entry: 0049ecac; end: 0049ecb3; -[KSCrashDoctorParam className] */

undefined8 FUN_0049ecac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 0049ecb4; end: 0049ecd3; -[KSCrashDoctorParam setClassName:] */

void FUN_0049ecb4(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_004a09cc();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0049ecd4; end: 0049ecdb; -[KSCrashDoctorParam previousClassName] */

undefined8 FUN_0049ecd4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 0049ecdc; end: 0049ecfb; -[KSCrashDoctorParam setPreviousClassName:] */

void FUN_0049ecdc(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_004a09cc();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x18) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0049ecfc; end: 0049ed03; -[KSCrashDoctorParam isInstance] */

undefined1 FUN_0049ecfc(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}


