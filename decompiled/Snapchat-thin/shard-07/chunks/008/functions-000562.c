/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105a6cc80; end: 105a6cc87; -[SCSpectaclesWiFiSettingsManager connectWiFiError] */

undefined8 FUN_105a6cc80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 105a6cc88; end: 105a6cc8f; -[SCSpectaclesWiFiSettingsManager forgetWiFiError] */

undefined8 FUN_105a6cc88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 105a6cc90; end: 105a6cd57; -[SCSpectaclesWiFiSettingsManager .cxx_destruct] */

void FUN_105a6cc90(long param_1)

{
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x68,0);
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
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105a6cd58; end: 105a6d007; -[SCAppNotification initCheeriosRemainFlightInfoNotificationWithDeviceName:batteryLevel:flightMode:remainFlightTime:icon:] */

undefined **
FUN_105a6cd58(undefined **param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined **ppuVar10;
  
  puVar1 = PTR_PTR_1126c19c8;
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c271320();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  FUN_105a6d008(param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  FUN_105a6d8f4();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar5 = param_6;
  func_0x000109025ac8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  puVar4 = PTR_PTR_1126b1370;
  func_0x00010c25d500();
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_1111843d0;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = 7;
  func_0x000107fcbeb0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(ppuVar10);
  _objc_release(puVar4);
  puVar4 = puVar6;
  lVar8 = param_7;
  FUN_105a6d0f0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  func_0x00010c030320();
  _objc_release(puVar4);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(param_6);
  _objc_release(uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return param_1;
  }
  ___stack_chk_fail();
  _objc_retain();
  lVar9 = lVar8;
  _objc_retain(lVar8);
  ppuVar10 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (puVar1 == (undefined *)0x0) {
    ppuVar10 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else if (lVar8 == 0) {
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000109025870();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar8;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    _objc_release(lVar9);
  }
  _objc_release(lVar8);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar10);
  return ppuVar10;
}



/* Entry: 105a6d008; end: 105a6d0ef;  */

void FUN_105a6d008(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  
  _objc_retain();
  lVar1 = param_2;
  _objc_retain(param_2);
  ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_1 == 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else if (param_2 == 0) {
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000109025870();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 105a6d0f0; end: 105a6d177;  */

void FUN_105a6d0f0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf72020(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  if (param_2 != 0) {
    func_0x00010c1d0560(puVar1);
  }
  puVar2 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105a6d178; end: 105a6d423; -[SCAppNotification initCheeriosStandbyModeNotificationWithDeviceName:batteryLevel:unimportedSnapCount:icon:] */

undefined **
FUN_105a6d178(undefined **param_1,undefined8 param_2,undefined **param_3,undefined8 param_4,
             long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined **ppuVar15;
  long lVar16;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  FUN_105a6d008(param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_5 == 1) {
    ppuVar1 = param_3;
    func_0x000109025af8();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_5 == 0) {
    ppuVar1 = param_3;
    func_0x000109025ae0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar2 = param_3;
    func_0x000109025b10();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(ppuVar2);
  }
  puVar3 = PTR_PTR_1126b1370;
  func_0x00010c25d500();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_1111843d0;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = 7;
  func_0x000107fcbeb0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = 8;
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(ppuVar2);
  _objc_release(puVar3);
  puVar3 = puVar4;
  FUN_105a6d0f0(puVar4,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  uVar5 = 2;
  puVar6 = puVar3;
  func_0x00010c030320();
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(ppuVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(lVar11);
  _objc_retain(param_7);
  FUN_105a6d008(puVar6,uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  _objc_retain();
  func_0x000109025b28();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b1370;
  func_0x00010c25d500();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_1111843d0;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = 7;
  func_0x000107fcbeb0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar11);
  _objc_release(uVar5);
  _objc_release(ppuVar1);
  _objc_release(puVar3);
  puVar3 = puVar4;
  FUN_105a6d0f0(puVar4,param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  func_0x00010c030320();
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(lVar12);
  _objc_release(puVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return param_3;
  }
  ___stack_chk_fail();
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lVar13 = lVar11;
  func_0x00010bf52a60();
  lVar12 = lRam0000000000000000;
  if (lVar13 == 0) {
    ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c2458;
  }
  else {
    ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c2458;
    do {
      lVar16 = 0;
      do {
        if (lRam0000000000000000 != lVar12) {
          _objc_enumerationMutation(lVar11);
        }
        ppuVar15 = *(undefined ***)(lVar16 * 8);
        ppuVar2 = ppuVar15;
        func_0x00010c067ec0();
        lVar7 = (long)(int)ppuVar2;
        FUN_105a6d7d4();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar7;
        func_0x00010c067ec0();
        ppuVar2 = ppuVar1;
        func_0x00010c067ec0();
        lVar9 = (long)(int)ppuVar2;
        FUN_105a6d7d4();
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lVar9;
        func_0x00010c067ec0();
        _objc_release(lVar9);
        _objc_release(lVar7);
        if ((int)lVar10 < (int)lVar8) {
          _objc_retain(ppuVar15);
          _objc_release(ppuVar1);
          ppuVar1 = ppuVar15;
        }
        lVar16 = lVar16 + 1;
      } while (lVar13 != lVar16);
      lVar13 = lVar11;
      func_0x00010bf52a60();
    } while (lVar13 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar14) {
    ___stack_chk_fail();
    if (0xb < lVar11 - 1U) {
      return &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c2470;
    }
    return (undefined **)(&PTR_PTR_1108d0120)[lVar11 - 1U];
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return ppuVar1;
}



/* Entry: 105a6d424; end: 105a6d7d3; -[SCAppNotification initCheeriosTakeoffFailedNotificationWithDeviceName:batteryLevel:errorInfo:pushType:icon:] */

undefined **
FUN_105a6d424(undefined **param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined **ppuVar13;
  long lVar14;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_7);
  FUN_105a6d008(param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_5;
  _objc_retain();
  func_0x000109025b28();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1370;
  func_0x00010c25d500();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_1111843d0;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 7;
  func_0x000107fcbeb0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(uVar4);
  _objc_release(ppuVar3);
  _objc_release(puVar2);
  puVar2 = puVar5;
  FUN_105a6d0f0(puVar5,param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  func_0x00010c030320();
  _objc_release(puVar2);
  _objc_release(puVar5);
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lVar11 = param_5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (lVar11 == 0) {
    ppuVar3 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c2458;
  }
  else {
    ppuVar3 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c2458;
    do {
      lVar14 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_5);
        }
        ppuVar13 = *(undefined ***)(lVar14 * 8);
        ppuVar6 = ppuVar13;
        func_0x00010c067ec0();
        lVar7 = (long)(int)ppuVar6;
        FUN_105a6d7d4();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar7;
        func_0x00010c067ec0();
        ppuVar6 = ppuVar3;
        func_0x00010c067ec0();
        lVar9 = (long)(int)ppuVar6;
        FUN_105a6d7d4();
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lVar9;
        func_0x00010c067ec0();
        _objc_release(lVar9);
        _objc_release(lVar7);
        if ((int)lVar10 < (int)lVar8) {
          _objc_retain(ppuVar13);
          _objc_release(ppuVar3);
          ppuVar3 = ppuVar13;
        }
        lVar14 = lVar14 + 1;
      } while (lVar11 != lVar14);
      lVar11 = param_5;
      func_0x00010bf52a60();
    } while (lVar11 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
    ___stack_chk_fail();
    if (0xb < param_5 - 1U) {
      return &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c2470;
    }
    return (undefined **)(&PTR_PTR_1108d0120)[param_5 - 1U];
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return ppuVar3;
}



/* Entry: 105a6d7d4; end: 105a6d7fb;  */

undefined ** FUN_105a6d7d4(long param_1)

{
  if (param_1 - 1U < 0xc) {
    return (undefined **)(&PTR_PTR_1108d0120)[param_1 - 1U];
  }
  return &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c2470;
}



/* Entry: 105a6d7fc; end: 105a6d8f3;  */

void FUN_105a6d7fc(undefined8 param_1)

{
  switch(param_1) {
  case 1:
    func_0x000109025b88();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 2:
    func_0x000109025b58();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 3:
    func_0x000109025b40();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 4:
    func_0x000109025c18();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 5:
    func_0x000109025b70();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 6:
    func_0x000109025ba0();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 7:
    func_0x000109025bb8();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 8:
    func_0x000109025c48();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 9:
    func_0x000109025bd0();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 10:
    func_0x000109025c30();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0xb:
    func_0x000109025be8();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0xc:
    func_0x000109025c00();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105a6d8f4; end: 105a6d9d7;  */

void FUN_105a6d8f4(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((uint)param_1 < 0xe10) {
    if ((uint)param_1 + (int)((param_1 & 0xffffffff) / 0xe10) * -0xe10 < 0x3c) {
      func_0x000109025c90();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000109025c78();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    func_0x000109025c60();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c14de00(puVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105a6d9d8; end: 105a6dae3; -[SCSpectaclesFlightActivityNotificationEmitter initWithNotificationManager:contentStatusServices:device:iconProvider:] */

undefined1 *
FUN_105a6d9d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126eb800;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_5);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x30) = 0;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105a6dae4; end: 105a6daeb; -[SCSpectaclesFlightActivityNotificationEmitter responseMonitorState] */

undefined8 FUN_105a6dae4(void)

{
  return 0;
}



/* Entry: 105a6daec; end: 105a6db37; -[SCSpectaclesFlightActivityNotificationEmitter handleResponse:] */

void FUN_105a6daec(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c13bcc0();
  if ((uVar1 & 0xfffffffffffffffe) == 4) {
    func_0x00010be29e40(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a6db38; end: 105a6dc6b; -[SCSpectaclesFlightActivityNotificationEmitter _handleFlightInfoResponse:] */

void FUN_105a6db38(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined8 auStack_a8 [5];
  undefined1 auStack_80 [8];
  undefined8 auStack_78 [5];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  if (*(long *)(param_1 + 0x28) == 0) {
    uVar5 = 0x3f800000;
    func_0x00010be10e60(param_1);
  }
  else {
    uVar5 = 0x3e4ccccd;
  }
  uVar1 = param_3;
  func_0x00010bfd7300();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010bfd72e0();
    if ((int)uVar1 == 0) goto LAB_105a6dc30;
    puVar3 = auStack_80;
    pcVar2 = (code *)0x105a6dcc0;
    puVar4 = auStack_a8;
  }
  else {
    puVar3 = auStack_50;
    pcVar2 = FUN_105a6dc6c;
    puVar4 = auStack_78;
  }
  *puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puVar4[1] = 0xc2000000;
  puVar4[2] = pcVar2;
  puVar4[3] = &UNK_110841fb0;
  _objc_copyWeak(puVar3,auStack_48);
  _objc_retain(param_3);
  puVar4[4] = param_3;
  func_0x000100c749e0(uVar5,"APPSTORE",puVar4);
  _objc_release(puVar4[4]);
  _objc_destroyWeak(puVar3);
LAB_105a6dc30:
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 105a6dc6c; end: 105a6dd13;  */

void FUN_105a6dc6c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfb2a60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be84c00(lVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105a6dd14; end: 105a6dd57; -[SCSpectaclesFlightActivityNotificationEmitter _pushFlightRemainInfo:] */

void FUN_105a6dd14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010be84de0(param_1,param_2,param_3);
  func_0x00010be84bc0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a6dd58; end: 105a6deff; -[SCSpectaclesFlightActivityNotificationEmitter _pushStandbyModeNotificationIfNeeded:] */

void FUN_105a6dd58(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  func_0x00010c07f7e0();
  if (param_3 != 0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf5e4e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c282be0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf529e0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    puVar5 = PTR_PTR_1126b1370;
    _objc_alloc(PTR_PTR_1126b1370);
    lVar6 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar6);
    lVar7 = lVar6;
    func_0x00010c0d4f60();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010bf86080();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar9);
    lVar10 = lVar9;
    func_0x00010c0692a0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar10;
    func_0x00010bf17500();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfee5c0(puVar5,param_2,lVar8,lVar11,uVar4,*(undefined8 *)(param_1 + 0x28));
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    lVar6 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa0a0();
    _objc_release(lVar6);
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar5);
    return;
  }
  return;
}



/* Entry: 105a6df00; end: 105a6e097; -[SCSpectaclesFlightActivityNotificationEmitter _pushFlightModeNofiticationIfNeeded:] */

void FUN_105a6df00(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfb2960();
  if ((uVar1 != 0) && (uVar1 = param_3, func_0x00010c07f7e0(), (uVar1 & 1) == 0)) {
    uVar1 = param_3;
    func_0x00010bfb2960();
    if ((uVar1 != *(ulong *)(param_1 + 0x30)) &&
       (uVar1 = param_3, func_0x00010c129220(), (int)uVar1 != 0)) {
      uVar1 = param_3;
      func_0x00010bfb2960();
      *(ulong *)(param_1 + 0x30) = uVar1;
      puVar2 = PTR_PTR_1126b1370;
      _objc_alloc(PTR_PTR_1126b1370);
      lVar3 = param_1 + 0x10;
      _objc_loadWeakRetained(lVar3);
      lVar4 = lVar3;
      func_0x00010c0d4f60();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bf86080();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_1 + 0x10;
      _objc_loadWeakRetained(lVar6);
      lVar7 = lVar6;
      func_0x00010c0692a0();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010bf17500();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_3;
      func_0x00010bfb2960(param_3);
      uVar9 = param_3;
      func_0x00010c129220(param_3);
      func_0x00010bfee5a0(puVar2,param_2,lVar5,lVar8,uVar1,uVar9,*(undefined8 *)(param_1 + 0x28));
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      param_1 = param_1 + 8;
      _objc_loadWeakRetained(param_1);
      lVar3 = param_1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa0a0();
      _objc_release(lVar3);
      _objc_release(param_1);
      _objc_release(puVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a6e098; end: 105a6e25b; -[SCSpectaclesFlightActivityNotificationEmitter _pushFlightStateErrors:] */

void FUN_105a6e098(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  func_0x00010c12c080();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x000105a6d650();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c067ec0();
  iVar1 = (int)uVar3;
  lVar11 = (long)iVar1;
  _objc_release(uVar2);
  FUN_105a6d7fc();
  _objc_retainAutoreleasedReturnValue();
  if (lVar11 != 0) {
    func_0x00010be8fba0(param_1,param_2,lVar11);
    uVar2 = 0xa6;
    if (iVar1 != 7) {
      uVar2 = 0x9d;
    }
    uVar3 = 0xa8;
    if (iVar1 != 6) {
      uVar3 = uVar2;
    }
    puVar4 = PTR_PTR_1126b1370;
    _objc_alloc(PTR_PTR_1126b1370);
    lVar5 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar5);
    lVar6 = lVar5;
    func_0x00010c0d4f60();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bf86080();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar8);
    lVar9 = lVar8;
    func_0x00010c0692a0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010bf17500();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfee5e0(puVar4,param_2,lVar7,lVar10,lVar11,uVar3,*(undefined8 *)(param_1 + 0x28));
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    lVar5 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa0a0();
    _objc_release(lVar5);
    _objc_release(param_1);
    _objc_release(puVar4);
  }
  _objc_release(lVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a6e25c; end: 105a6e333; -[SCSpectaclesFlightActivityNotificationEmitter _fetchDeviceIcon] */

void FUN_105a6e25c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  if (*(long *)(param_1 + 0x28) == 0) {
    _objc_initWeak(auStack_28,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfe5640(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x00010c297260(uVar1);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 105a6e334; end: 105a6e39b;  */

void FUN_105a6e334(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_3 == 0) && (param_1 != 0)) {
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = param_2;
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105a6e39c; end: 105a6e3c3; -[SCSpectaclesFlightActivityNotificationEmitter flightErrorDescription] */

void FUN_105a6e39c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105a6e3c4; end: 105a6e4af; -[SCSpectaclesFlightActivityNotificationEmitter _reportLastFlightErrorObservable:] */

void FUN_105a6e3c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x38));
  if (*(long *)(param_1 + 0x40) != 0) {
    _dispatch_block_cancel();
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = 0;
    _objc_release(uVar1);
  }
  _objc_initWeak(auStack_38,param_1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105a6e4b0;
  puStack_48 = &UNK_1108434b0;
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = 0;
  func_0x0001008553e8(0,&puStack_60);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  _objc_release(uVar2);
  func_0x000100c749e0(0x41a00000,"APPSTORE",*(undefined8 *)(param_1 + 0x40));
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105a6e4b0; end: 105a6e4eb;  */

void FUN_105a6e4b0(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x38),param_2,
                        &PTR____CFConstantStringClassReference_110daafd8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a6e4ec; end: 105a6e54f; -[SCSpectaclesFlightActivityNotificationEmitter .cxx_destruct] */

void FUN_105a6e4ec(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105a6e550; end: 105a6ea7b; -[SCSpectaclesFlightActivityNotificationEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a6e550(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  long lVar18;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  lVar18 = (long)_DAT_11272e36c;
  uVar1 = param_1 + lVar18;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c263740();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) != 0) {
    lVar4 = param_1 + _DAT_11272e374;
    _objc_loadWeakRetained();
    lVar5 = lVar4;
    func_0x00010c0f98e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c0f9920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    puVar8 = PTR_PTR_1126c1c08;
    _objc_alloc();
    lVar4 = param_1 + _DAT_11272e378;
    _objc_loadWeakRetained(lVar4);
    lVar9 = lVar4;
    func_0x00010bfcdfa0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1 + lVar18;
    _objc_loadWeakRetained(lVar5);
    lVar10 = lVar5;
    func_0x00010bf6fd20();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar10;
    func_0x00010bfd38e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1 + lVar18;
    _objc_loadWeakRetained(lVar6);
    lVar12 = lVar6;
    func_0x00010bf6fd20();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar12;
    func_0x00010bfb0d20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c018640();
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar6);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar5);
    _objc_release(lVar9);
    _objc_release(lVar4);
    puVar14 = PTR_PTR_1126b68a8;
    _objc_alloc();
    lVar4 = param_1 + _DAT_11272e37c;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010c0e35c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0312e0();
    _objc_release(lVar5);
    _objc_release(lVar4);
    puVar16 = PTR_PTR_1126c1c10;
    _objc_alloc();
    lVar4 = param_1 + _DAT_11272e380;
    _objc_loadWeakRetained(lVar4);
    lVar9 = lVar4;
    func_0x00010c0dc6e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1 + lVar18;
    _objc_loadWeakRetained(lVar5);
    lVar10 = lVar5;
    func_0x00010bf4d720();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1 + lVar18;
    _objc_loadWeakRetained(lVar6);
    lVar11 = lVar6;
    func_0x00010bf6fd20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02ff00();
    uVar17 = *(undefined8 *)(param_1 + _DAT_11272e384);
    *(undefined **)(param_1 + _DAT_11272e384) = puVar16;
    _objc_release(uVar17);
    _objc_release(lVar11);
    _objc_release(lVar6);
    _objc_release(lVar10);
    _objc_release(lVar5);
    _objc_release(lVar9);
    _objc_release(lVar4);
    puVar16 = PTR_PTR_1126c1c18;
    _objc_alloc();
    lVar4 = param_1 + _DAT_11272e388;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010bfb2940();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c013840();
    uVar17 = *(undefined8 *)(param_1 + _DAT_11272e38c);
    *(undefined **)(param_1 + _DAT_11272e38c) = puVar16;
    _objc_release(uVar17);
    _objc_release(lVar5);
    _objc_release(lVar4);
    lVar4 = param_1 + lVar18;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010bf48c40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befac20();
    _objc_release(lVar5);
    _objc_release(lVar4);
    lVar18 = param_1 + lVar18;
    _objc_loadWeakRetained(lVar18);
    lVar4 = lVar18;
    func_0x00010bf48c40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befac20();
    _objc_release(lVar4);
    _objc_release(lVar18);
    _objc_initWeak(auStack_68,param_1);
    puVar16 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_70,auStack_68);
    func_0x00010bf11fe0(puVar16);
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(param_1 + _DAT_11272e370);
    puVar15 = PTR_PTR_1126c1c00;
    _objc_alloc();
    func_0x00010c0137c0();
    func_0x00010bf9d660(uVar17);
    _objc_release(puVar15);
    _objc_release(puVar16);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    _objc_release(puVar14);
    _objc_release(puVar8);
    _objc_release(lVar7);
    return;
  }
  uVar17 = *(undefined8 *)(param_1 + _DAT_11272e370);
  puVar16 = PTR_PTR_1126c1c00;
  _objc_alloc(PTR_PTR_1126c1c00);
  func_0x00010c0137c0();
  func_0x00010bf9d660(uVar17);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar16);
  return;
}



/* Entry: 105a6ea7c; end: 105a6eabb;  */

void FUN_105a6ea7c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be1f200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105a6eabc; end: 105a6eaeb; -[SCSpectaclesFlightActivityNotificationEntryPoint _getFlightErrorReporter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a6eabc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272e384);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105a6eaec; end: 105a6eb83; -[SCSpectaclesFlightActivityNotificationEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a6eaec(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272e370,0);
  _objc_destroyWeak(param_1 + _DAT_11272e388);
  _objc_destroyWeak(param_1 + _DAT_11272e37c);
  _objc_destroyWeak(param_1 + _DAT_11272e378);
  _objc_destroyWeak(param_1 + _DAT_11272e374);
  _objc_destroyWeak(param_1 + _DAT_11272e380);
  _objc_destroyWeak(param_1 + _DAT_11272e36c);
  _objc_storeStrong(param_1 + _DAT_11272e38c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272e384,0);
  return;
}



/* Entry: 105a6eb84; end: 105a6ec4f; -[SCSpectaclesFlightErrorLogger initWithGrapheneRegistry:hardwareVersion:firmwareVersion:] */

undefined1 *
FUN_105a6eb84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126eb808;
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



/* Entry: 105a6ec50; end: 105a6edb3; -[SCSpectaclesFlightErrorLogger logFlightError:forFlightMode:] */

void FUN_105a6ec50(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c248ae0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    _objc_release(uVar7);
    _objc_release(uVar1);
  }
  puVar3 = PTR_PTR_1126c1c20;
  func_0x00010bfb2840(PTR_PTR_1126c1c20);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c25d700(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110e19d18,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar2);
  lVar5 = param_1;
  func_0x00010be5f800(param_1,param_2,puVar4,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  lVar6 = param_1;
  func_0x00010be5f8a0(param_1,param_2,lVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  lVar5 = param_1;
  func_0x00010be5f860(param_1,param_2,lVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 0x20),param_2,lVar5);
  _objc_release(lVar5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a6edb4; end: 105a6ef17; -[SCSpectaclesFlightErrorLogger logFlightSessionWithErrorFlag:forFlightMode:] */

void FUN_105a6edb4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c248ae0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = uVar3;
    _objc_release(uVar8);
    _objc_release(uVar2);
  }
  puVar4 = PTR_PTR_1126c1c20;
  func_0x00010bfb2a20(PTR_PTR_1126c1c20);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110db2d38;
  if ((int)uVar3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db1158;
  }
  puVar5 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110e19d18,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  lVar6 = param_1;
  func_0x00010be5f800(param_1,param_2,puVar5,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  lVar7 = param_1;
  func_0x00010be5f8a0(param_1,param_2,lVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  lVar6 = param_1;
  func_0x00010be5f860(param_1,param_2,lVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 0x20),param_2,lVar6);
  _objc_release(lVar6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a6ef18; end: 105a6efb3; -[SCSpectaclesFlightErrorLogger _mergeDialPositionToMetric:flightMode:] */

void FUN_105a6ef18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_3);
  func_0x00010c0b4fe0();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110dcfe58);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c2ac460(param_3,param_2,&PTR____CFConstantStringClassReference_110e19d38,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105a6efb4; end: 105a6f02b; -[SCSpectaclesFlightErrorLogger _mergeHardwareVersionToMetric:] */

void FUN_105a6efb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010bf6e340(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c2ac460(param_3,param_2,&PTR____CFConstantStringClassReference_110e19d58,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105a6f02c; end: 105a6f183; -[SCSpectaclesFlightErrorLogger _mergeFirmwareVersionToMetric:] */

void FUN_105a6f02c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_3);
  func_0x00010c0b6e60();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110dcfe58);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c0ce800();
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110dcfe58);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c0f57e0();
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110dcfe58);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c2ac460(param_3,param_2,&PTR____CFConstantStringClassReference_110e19d78,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar5 = uVar4;
  func_0x00010c2ac460(uVar4,param_2,&PTR____CFConstantStringClassReference_110e19d98,puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 105a6f184; end: 105a6f1cb; -[SCSpectaclesFlightErrorLogger .cxx_destruct] */

void FUN_105a6f184(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105a6f1cc; end: 105a6f2bf; -[SCSpectaclesFlightErrorMetricsEmitter initWithFlightManager:logger:performer:] */

undefined1 *
FUN_105a6f1cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126eb810;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x20) = 0;
    *(undefined8 *)((long)puVar1 + 0x28) = 0;
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    func_0x00010beaca20(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105a6f2c0; end: 105a6f2c7; -[SCSpectaclesFlightErrorMetricsEmitter responseMonitorState] */

undefined8 FUN_105a6f2c0(void)

{
  return 0;
}



/* Entry: 105a6f2c8; end: 105a6f313; -[SCSpectaclesFlightErrorMetricsEmitter handleResponse:] */

void FUN_105a6f2c8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c13bcc0();
  if ((uVar1 & 0xfffffffffffffffe) == 4) {
    func_0x00010be29e40(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a6f314; end: 105a6f3eb; -[SCSpectaclesFlightErrorMetricsEmitter _handleFlightInfoResponse:] */

void FUN_105a6f314(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105a6f3ec; end: 105a6f493;  */

void FUN_105a6f3ec(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010bfd7300();
  if (iVar1 == 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010bfd72e0();
    if (iVar1 == 0) {
      return;
    }
    lVar3 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfb2a00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be84be0(lVar3,param_2,uVar2);
  }
  else {
    lVar3 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfb2a60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be84c00(lVar3,param_2,uVar2);
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 105a6f494; end: 105a6f4d7; -[SCSpectaclesFlightErrorMetricsEmitter _pushFlightRemainInfo:] */

void FUN_105a6f494(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfb2960();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010bfb2960();
    *(long *)(param_1 + 0x20) = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a6f4d8; end: 105a6f51f; -[SCSpectaclesFlightErrorMetricsEmitter _pushFlightStateErrors:] */

void FUN_105a6f4d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c12c080(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be53980(param_1);
  func_0x00010be53940(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a6f520; end: 105a6f68b; -[SCSpectaclesFlightErrorMetricsEmitter _setupFlightStatusObservable] */

void FUN_105a6f520(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  puVar1 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  *(undefined **)(param_1 + 0x38) = puVar1;
  _objc_release(uVar6);
  _objc_initWeak(auStack_58,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010bfb2a80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  uVar5 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 105a6f68c; end: 105a6f6eb;  */

void FUN_105a6f68c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2827c0(param_2);
  _objc_release(param_2);
  func_0x00010be53960(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a6f6ec; end: 105a6f76b; -[SCSpectaclesFlightErrorMetricsEmitter _logFlightSessionCountWithFlightStatus:] */

void FUN_105a6f6ec(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if ((param_3 == 1) && (*(long *)(param_1 + 0x40) != 1)) {
    *(undefined1 *)(param_1 + 0x48) = 0;
    uVar2 = *(undefined8 *)(param_1 + 8);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x20)
                       );
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a6be0(uVar2,param_2,PTR____kCFBooleanFalse_11034ab60,puVar1);
    _objc_release(puVar1);
  }
  *(long *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 105a6f76c; end: 105a6f7db; -[SCSpectaclesFlightErrorMetricsEmitter _logFlightSessionError] */

void FUN_105a6f76c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x20)
                       );
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a6be0(uVar2,param_2,PTR____kCFBooleanTrue_11034ab68,puVar1);
    _objc_release(puVar1);
    *(undefined1 *)(param_1 + 0x48) = 1;
  }
  return;
}



/* Entry: 105a6f7dc; end: 105a6fa53; -[SCSpectaclesFlightErrorMetricsEmitter _logFlightErrorMetrics:] */

void FUN_105a6f7dc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x20) != 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    if (*(long *)(param_1 + 0x20) == *(long *)(param_1 + 0x28)) {
      _objc_retain(param_3);
      lVar3 = param_3;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (lVar3 != 0) {
        lVar9 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(param_3);
          }
          uVar4 = *(ulong *)(param_1 + 0x30);
          func_0x00010bf4b900();
          if ((uVar4 & 1) == 0) {
            func_0x00010befa120(puVar2);
          }
          lVar9 = lVar9 + 1;
        } while (lVar3 != lVar9);
        lVar3 = param_3;
        func_0x00010bf52a60();
      }
      _objc_release(param_3);
    }
    else {
      func_0x00010befa160(puVar2);
    }
    if (*(long *)(param_1 + 0x20) == *(long *)(param_1 + 0x28)) {
      func_0x00010befa160(*(undefined8 *)(param_1 + 0x30));
    }
    else {
      puVar5 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      func_0x00010c225c20();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_1 + 0x30);
      *(undefined **)(param_1 + 0x30) = puVar5;
      _objc_release(uVar8);
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x20);
    }
    _objc_retain(puVar2);
    puVar5 = puVar2;
    func_0x00010bf52a60();
    lVar3 = lRam0000000000000000;
    while (puVar5 != (undefined *)0x0) {
      puVar10 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar3) {
          _objc_enumerationMutation(puVar2);
        }
        uVar8 = *(undefined8 *)(param_1 + 8);
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0a6bc0(uVar8);
        _objc_release(puVar6);
        puVar10 = puVar10 + 1;
      } while (puVar5 != puVar10);
      puVar5 = puVar2;
      func_0x00010bf52a60();
    }
    _objc_release(puVar2);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0x38,0);
  _objc_storeStrong(param_3 + 0x30,0);
  _objc_storeStrong(param_3 + 0x18,0);
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 105a6fa54; end: 105a6faa7; -[SCSpectaclesFlightErrorMetricsEmitter .cxx_destruct] */

void FUN_105a6fa54(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105a6faa8; end: 105a6fad3; +[SCGrapheneSpectaclesPairingMetric spectaclesPairingStart] */

void FUN_105a6faa8(void)

{
  _objc_alloc(PTR_PTR_1126c16e8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105a6fad4; end: 105a6faff; +[SCGrapheneSpectaclesPairingMetric spectaclesPairingSuccess] */

void FUN_105a6fad4(void)

{
  _objc_alloc(PTR_PTR_1126c16e8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105a6fb00; end: 105a6fb2b; +[SCGrapheneSpectaclesPairingMetric spectaclesPairingFailure] */

void FUN_105a6fb00(void)

{
  _objc_alloc(PTR_PTR_1126c16e8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105a6fb2c; end: 105a6fb57; +[SCGrapheneSpectaclesPairingMetric spectaclesPairingCancel] */

void FUN_105a6fb2c(void)

{
  _objc_alloc(PTR_PTR_1126c16e8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105a6fb58; end: 105a6fbf7; -[SCGrapheneSpectaclesPairingMetric description] */

void FUN_105a6fb58(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e19dd8;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e19dd8,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126eb818;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 105a6fbf8; end: 105a6fd57; -[SCGrapheneRegistry spectaclesPairingGraphene] */

void FUN_105a6fbf8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x105a6fc80;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136c1ba0 != -1) {
    func_0x00010002a2fc(0x1136c1ba0,&puStack_48);
  }
  uVar1 = uRam00000001136c1b98;
  _objc_retain(uRam00000001136c1b98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105a6fd58; end: 105a6fd83; +[SCGrapheneSpectaclesFileTransferMetric spectaclesTransferFileSuccess] */

void FUN_105a6fd58(void)

{
  _objc_alloc(PTR_PTR_1126c1540);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105a6fd84; end: 105a6fe23; -[SCGrapheneSpectaclesFileTransferMetric description] */

void FUN_105a6fd84(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e19e78;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e19e78,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126eb820;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 105a6fe24; end: 105a6ff67; -[SCGrapheneRegistry spectaclesFileTransferGraphene] */

void FUN_105a6fe24(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x105a6feac;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136c1bb0 != -1) {
    func_0x00010002a2fc(0x1136c1bb0,&puStack_48);
  }
  uVar1 = uRam00000001136c1ba8;
  _objc_retain(uRam00000001136c1ba8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105a6ff68; end: 105a6ff93; +[SCGrapheneSpectaclesFlightErrorMetric flightError] */

void FUN_105a6ff68(void)

{
  _objc_alloc(PTR_PTR_1126c1c20);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105a6ff94; end: 105a6ffbf; +[SCGrapheneSpectaclesFlightErrorMetric flightSession] */

void FUN_105a6ff94(void)

{
  _objc_alloc(PTR_PTR_1126c1c20);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105a6ffc0; end: 105a7005f; -[SCGrapheneSpectaclesFlightErrorMetric description] */

void FUN_105a6ffc0(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e19eb8;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e19eb8,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126eb828;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 105a70060; end: 105a701ab; -[SCGrapheneRegistry spectaclesFlightErrorGraphene] */

void FUN_105a70060(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x105a700e8;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136c1bc0 != -1) {
    func_0x00010002a2fc(0x1136c1bc0,&puStack_48);
  }
  uVar1 = uRam00000001136c1bb8;
  _objc_retain(uRam00000001136c1bb8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105a701ac; end: 105a703cb; -[SCAppNotification initCheeriosUnimportedSnapsNotificationWithSnapsCount:icon:] */

undefined * FUN_105a701ac(undefined *param_1,undefined8 param_2,long param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_4;
  if (param_3 == 1) {
    _objc_retain();
    func_0x000109025498();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
  }
  else {
    _objc_retain();
    func_0x0001090254b0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
  }
  func_0x0001090254c8();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b1370;
  func_0x00010c25d500();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 7;
  func_0x000107fcbeb0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(puVar3);
  puVar3 = puVar5;
  puVar6 = param_4;
  FUN_105a703cc(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c030320();
  _objc_release(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar1);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return param_1;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf72020(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  if (puVar6 != (undefined *)0x0) {
    func_0x00010c1d0560(puVar2);
  }
  puVar1 = puVar2;
  func_0x00010bf51e00(puVar2);
  _objc_release(puVar2);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return puVar1;
}



/* Entry: 105a703cc; end: 105a70453;  */

void FUN_105a703cc(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf72020(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  if (param_2 != 0) {
    func_0x00010c1d0560(puVar1);
  }
  puVar2 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105a70454; end: 105a7068f; -[SCAppNotification initCheeriosCaptureCompletedNotificationWithDeviceName:unseenSnapsCount:icon:] */

/* WARNING: Possible PIC construction at 0x000105a709ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105a709b0) */

undefined **
FUN_105a70454(undefined **param_1,undefined8 param_2,undefined **param_3,long param_4,
             undefined *param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  ppuVar6 = &PTR____CFConstantStringClassReference_110daafd8;
  if (param_3 != (undefined **)0x0) {
    ppuVar6 = param_3;
  }
  _objc_retain(ppuVar6);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_4 == 1) {
    puVar2 = param_5;
    _objc_retain();
    func_0x0001090254e0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = param_5;
    _objc_retain(param_5);
    func_0x0001090254f8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  puVar1 = PTR_PTR_1126b1370;
  func_0x00010c25d500();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 7;
  func_0x000107fcbeb0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
  puVar1 = puVar4;
  FUN_105a703cc(puVar4,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  puVar14 = (undefined *)0x2;
  puVar5 = puVar1;
  func_0x00010c030320();
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(ppuVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (puVar5 == (undefined *)0x1) {
    puVar2 = puVar14;
    _objc_retain();
    func_0x000105a73a60();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = puVar14;
    _objc_retain(puVar14);
    func_0x000105a73a78();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  puVar1 = PTR_PTR_1126b1370;
  func_0x00010c25d500();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x000105a73a48();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 7;
  func_0x000107fcbeb0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = 6;
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar4);
  _objc_release(puVar1);
  puVar1 = puVar5;
  FUN_105a703cc(puVar5,puVar14);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  lVar15 = 2;
  puVar4 = puVar1;
  func_0x00010c030320();
  _objc_release(puVar1);
  _objc_release(puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    return param_3;
  }
  ___stack_chk_fail();
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar4);
  _objc_retain(uVar16);
  _objc_retain(param_6);
  if (lVar15 != 0) {
    puVar5 = puVar4;
    func_0x00010bf61080();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar5;
    func_0x00010bdc3540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release();
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar14 != (undefined *)0x0) {
      if (lVar15 == 1) {
        func_0x000105a73ad8();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar5;
      }
      else {
        func_0x000105a73af0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
      }
      _objc_retain(puVar1);
      puVar2 = puVar4;
      goto SUB_105a70bb4;
    }
  }
  _objc_release(param_6);
  _objc_release(uVar16);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    return (undefined **)0x0;
  }
  ___stack_chk_fail();
SUB_105a70bb4:
  ppuVar6 = (undefined **)PTR_PTR_1126c1c28;
  _objc_retain();
  _objc_alloc(ppuVar6);
  func_0x00010c27a3a0();
  func_0x00010bf35520();
  puVar1 = puVar2;
  func_0x00010bf16f40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bdc3580();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar5;
  func_0x00010c15e740();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  func_0x00010bf6fd20(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bfb0d20();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar2;
  func_0x00010bf6fd20(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar2;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010bf40c40();
  func_0x00010c055940(ppuVar6);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar14);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar6);
  return ppuVar6;
}



/* Entry: 105a70690; end: 105a708a3; -[SCAppNotification initSpectaclesPairingCompletePushWithUnimportedSnapsCount:icon:] */

/* WARNING: Possible PIC construction at 0x000105a709ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105a709b0) */

undefined *
FUN_105a70690(undefined *param_1,undefined8 param_2,long param_3,undefined *param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
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
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 == 1) {
    puVar2 = param_4;
    _objc_retain();
    func_0x000105a73a60();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = param_4;
    _objc_retain(param_4);
    func_0x000105a73a78();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  puVar1 = PTR_PTR_1126b1370;
  func_0x00010c25d500();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x000105a73a48();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 7;
  func_0x000107fcbeb0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = 6;
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  puVar1 = puVar5;
  FUN_105a703cc(puVar5,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar15 = 2;
  puVar3 = puVar1;
  func_0x00010c030320();
  _objc_release(puVar1);
  _objc_release(puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar3);
  _objc_retain(uVar16);
  _objc_retain(param_6);
  if (lVar15 != 0) {
    puVar5 = puVar3;
    func_0x00010bf61080();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bdc3540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release();
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar6 != (undefined *)0x0) {
      if (lVar15 == 1) {
        func_0x000105a73ad8();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar5;
      }
      else {
        func_0x000105a73af0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
      }
      _objc_retain(puVar1);
      puVar2 = puVar3;
      goto SUB_105a70bb4;
    }
  }
  _objc_release(param_6);
  _objc_release(uVar16);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    return (undefined *)0x0;
  }
  ___stack_chk_fail();
SUB_105a70bb4:
  puVar1 = PTR_PTR_1126c1c28;
  _objc_retain();
  _objc_alloc(puVar1);
  func_0x00010c27a3a0();
  func_0x00010bf35520();
  puVar3 = puVar2;
  func_0x00010bf16f40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bdc3580();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar2;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c15e740();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar2;
  func_0x00010bf6fd20(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bfb0d20();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar2;
  func_0x00010bf6fd20(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar2;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010bf40c40();
  func_0x00010c055940(puVar1);
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
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return puVar1;
}



/* Entry: 105a708a4; end: 105a70d7f; -[SCAppNotification initNewContentAvailableNotificationWithSession:numberOfUntransferredContent:tmpFileWriter:icon:] */

/* WARNING: Possible PIC construction at 0x000105a709ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105a709b0) */

undefined *
FUN_105a708a4(undefined *param_1,undefined8 param_2,undefined *param_3,long param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
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
  long lVar16;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_4 != 0) {
    puVar1 = param_3;
    func_0x00010bf61080();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bdc3540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar2 != (undefined *)0x0) {
      if (param_4 == 1) {
        func_0x000105a73ad8();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar1;
      }
      else {
        func_0x000105a73af0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(puVar3,param_2,puVar1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar1);
      }
      _objc_retain(puVar3);
      param_1 = param_3;
      goto SUB_105a70bb4;
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    return (undefined *)0x0;
  }
  ___stack_chk_fail();
SUB_105a70bb4:
  puVar3 = PTR_PTR_1126c1c28;
  _objc_retain();
  _objc_alloc(puVar3);
  puVar1 = param_1;
  func_0x00010c27a3a0();
  puVar2 = param_1;
  func_0x00010bf35520();
  puVar4 = param_1;
  func_0x00010bf16f40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bdc3580();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = param_1;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c15e740();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_1;
  func_0x00010bf6fd20(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bfb0d20();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = param_1;
  func_0x00010bf6fd20(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = param_1;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar15 = puVar14;
  func_0x00010bf40c40();
  func_0x00010c055940(puVar3,param_2,puVar1,puVar2,puVar5,puVar7,puVar10,puVar13,puVar15);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return puVar3;
}



/* Entry: 105a70d80; end: 105a70e2b;  */

void FUN_105a70d80(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar1 = &puStack_60;
  _objc_retain();
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105a713d0;
  puStack_48 = &UNK_1108d01b0;
  uStack_40 = param_1;
  uStack_38 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_retainBlock(&puStack_60);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 105a70e2c; end: 105a711ef; -[SCAppNotification initTransferredCompleteNotificationWithSession:seenSpecsTab:tmpFileWriter:icon:] */

undefined *
FUN_105a70e2c(double param_1,double param_2,undefined *param_3,undefined8 param_4,undefined *param_5
             ,int param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_7);
  puVar1 = param_5;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c06e7e0();
  _objc_release(puVar2);
  _objc_release();
  if ((int)puVar3 == 0) {
    func_0x000105a73b20();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000109025510();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar3 = param_5;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf86080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar3);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_6 == 0) {
    func_0x000105a73ac0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar3 = param_5;
    func_0x00010bfea5c0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010bf529e0();
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar5 == (undefined *)0x1) {
      func_0x000105a73a90();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000105a73aa8();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
  puVar5 = param_5;
  func_0x000105a70bb4(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf09780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126b1370;
  func_0x00010c25d500();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = 7;
  func_0x000107fcbeb0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  puVar5 = puVar8;
  FUN_105a703cc(puVar8,param_8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  uVar7 = 2;
  func_0x00010c030320();
  _objc_release(puVar5);
  puVar5 = param_5;
  FUN_105a70d80(param_5,param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  puVar6 = puVar5;
  func_0x00010c16b160(param_3);
  _objc_release(puVar5);
  _objc_release(puVar8);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return param_3;
  }
  ___stack_chk_fail();
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(uVar7);
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar6;
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c06e7e0();
  _objc_release(puVar1);
  _objc_release();
  if ((int)puVar2 == 0) {
    func_0x000105a73b08();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000109025528();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar1 = PTR_PTR_1126b1370;
  func_0x00010c25d500();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = 7;
  func_0x000107fcbeb0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_release(puVar1);
  puVar1 = puVar2;
  FUN_105a703cc(puVar2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  func_0x00010c030320();
  _objc_release(puVar1);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return param_5;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  uVar9 = *(undefined8 *)(puVar6 + 0x20);
  func_0x00010bf61080(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar9;
  func_0x00010bf63a60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d040(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar9);
  func_0x00010c23d0a0(puVar1);
  func_0x00010c23d0a0(puVar1);
  if (param_1 <= param_2) {
    param_2 = param_1;
  }
  puVar2 = puVar1;
  func_0x00010bf5c7a0(0x4014000000000000,0x4014000000000000,param_2 + -10.0,param_2 + -10.0,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf5c7e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar9 = *(undefined8 *)(puVar6 + 0x28);
  puVar2 = puVar3;
  _UIImagePNGRepresentation(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bda80(uVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  _objc_release(puVar2);
  puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bfad300(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UNNotificationAttachment_1126c1c30;
  uVar10 = *(undefined8 *)(puVar6 + 0x20);
  func_0x00010bf61080(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar10;
  func_0x00010bdc3540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0d7c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  _objc_release(0);
  _objc_release(uVar7);
  _objc_release(uVar10);
  if (puVar2 != (undefined *)0x0) {
    _objc_retain(puVar2);
  }
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(uVar9);
  _objc_release(0);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return puVar2;
}



/* Entry: 105a711f0; end: 105a713cf; -[SCAppNotification initTransferInterruptedNotificationWithSession:icon:] */

undefined *
FUN_105a711f0(double param_1,double param_2,undefined *param_3,undefined8 param_4,long param_5,
             undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_5;
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c06e7e0();
  _objc_release(lVar1);
  _objc_release();
  if ((int)lVar2 == 0) {
    func_0x000105a73b08();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000109025528();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar3 = PTR_PTR_1126b1370;
  func_0x00010c25d500();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 7;
  func_0x000107fcbeb0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(puVar3);
  puVar3 = puVar5;
  FUN_105a703cc(puVar5,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  func_0x00010c030320();
  _objc_release(puVar3);
  _objc_release(puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return param_3;
  }
  ___stack_chk_fail();
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  uVar6 = *(undefined8 *)(param_5 + 0x20);
  func_0x00010bf61080(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x00010bf63a60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d040(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar6);
  func_0x00010c23d0a0(puVar3);
  func_0x00010c23d0a0(puVar3);
  if (param_1 <= param_2) {
    param_2 = param_1;
  }
  puVar5 = puVar3;
  func_0x00010bf5c7a0(0x4014000000000000,0x4014000000000000,param_2 + -10.0,param_2 + -10.0,puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010bf5c7e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  uVar6 = *(undefined8 *)(param_5 + 0x28);
  puVar5 = puVar7;
  _UIImagePNGRepresentation(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bda80(uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  _objc_release(puVar5);
  puVar8 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bfad300(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___UNNotificationAttachment_1126c1c30;
  uVar9 = *(undefined8 *)(param_5 + 0x20);
  func_0x00010bf61080(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar9;
  func_0x00010bdc3540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0d7c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  _objc_release(0);
  _objc_release(uVar4);
  _objc_release(uVar9);
  if (puVar5 != (undefined *)0x0) {
    _objc_retain(puVar5);
  }
  _objc_release(puVar5);
  _objc_release(puVar8);
  _objc_release(uVar6);
  _objc_release(0);
  _objc_release(puVar7);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return puVar5;
}



/* Entry: 105a713d0; end: 105a715fb;  */

void FUN_105a713d0(double param_1,double param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  uVar1 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010bf61080(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf63a60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d040(puVar3,param_4,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c23d0a0(puVar3);
  func_0x00010c23d0a0(puVar3);
  if (param_1 <= param_2) {
    param_2 = param_1;
  }
  puVar4 = puVar3;
  func_0x00010bf5c7a0(0x4014000000000000,0x4014000000000000,param_2 + -10.0,param_2 + -10.0,puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf5c7e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  uVar9 = *(undefined8 *)(param_3 + 0x28);
  puVar4 = puVar5;
  _UIImagePNGRepresentation(puVar5);
  _objc_retainAutoreleasedReturnValue();
  uStack_78 = 0;
  func_0x00010c2bda80(uVar9,param_4,puVar4,&PTR____CFConstantStringClassReference_110e19f18,5,
                      &uStack_78);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uStack_78;
  _objc_retain(uStack_78);
  _objc_release(puVar4);
  puVar6 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bfad300(PTR__OBJC_CLASS___NSURL_1126ae598,param_4,uVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UNNotificationAttachment_1126c1c30;
  uVar7 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010bf61080(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bdc3540();
  _objc_retainAutoreleasedReturnValue();
  uStack_80 = uVar1;
  func_0x00010bf0d7c0(puVar4,param_4,uVar8,puVar6,0,&uStack_80);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uStack_80;
  _objc_retain(uStack_80);
  _objc_release(uVar1);
  _objc_release(uVar8);
  _objc_release(uVar7);
  if (puVar4 != (undefined *)0x0) {
    _objc_retain(puVar4);
  }
  _objc_release(puVar4);
  _objc_release(puVar6);
  _objc_release(uVar9);
  _objc_release(uVar2);
  _objc_release(puVar5);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105a715fc; end: 105a716bf; -[SCSpectaclesEyewearNewSnapNotificationSource initWithNotificationManager:tmpFileWriter:contentStatusServices:] */

undefined1 *
FUN_105a715fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126eb830;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105a716c0; end: 105a716c7; -[SCSpectaclesEyewearNewSnapNotificationSource needDeviceIcon] */

undefined8 FUN_105a716c0(void)

{
  return 0;
}



/* Entry: 105a716c8; end: 105a716cb; -[SCSpectaclesEyewearNewSnapNotificationSource pushCaptureCompleteNotification] */

void FUN_105a716c8(void)

{
  return;
}



/* Entry: 105a716cc; end: 105a716cf; -[SCSpectaclesEyewearNewSnapNotificationSource pushPostPairingNewSnapNotification] */

void FUN_105a716cc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be84e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__pushUnimportedSnapsNotification_11257ed38);
  return;
}



/* Entry: 105a716d0; end: 105a717eb; -[SCSpectaclesEyewearNewSnapNotificationSource pushContentAvailableNotificationForSession:] */

void FUN_105a716d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf5e4e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c282be0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf529e0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar4 != 0) {
    puVar5 = PTR_PTR_1126b1370;
    _objc_alloc();
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfeefa0(puVar5,param_2,param_3,lVar4,uVar6,0);
    _objc_release(uVar6);
    if (puVar5 != (undefined *)0x0) {
      param_1 = param_1 + 8;
      _objc_loadWeakRetained(param_1);
      lVar2 = param_1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa0a0();
      _objc_release(lVar2);
      _objc_release(param_1);
    }
    _objc_release(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a717ec; end: 105a718b7; -[SCSpectaclesEyewearNewSnapNotificationSource pushImportCompleteNotificationForSession:currentlyOnMemoriesSnapsTab:] */

void FUN_105a717ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b1370;
  _objc_retain(param_3);
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfef840(puVar1,param_2,param_3,param_4,uVar2,0);
  _objc_release(param_3);
  _objc_release(uVar2);
  if (puVar1 != (undefined *)0x0) {
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    lVar3 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa0a0();
    _objc_release(lVar3);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a718b8; end: 105a7194b; -[SCSpectaclesEyewearNewSnapNotificationSource pushTransferInterruptedNotificationForSession:] */

void FUN_105a718b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b1370;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010bfef820();
  _objc_release(param_3);
  if (puVar1 != (undefined *)0x0) {
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    lVar2 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa0a0();
    _objc_release(lVar2);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a7194c; end: 105a71a3b; -[SCSpectaclesEyewearNewSnapNotificationSource _pushUnimportedSnapsNotification] */

void FUN_105a7194c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf5e4e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c282be0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf529e0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar4 != 0) {
    puVar5 = PTR_PTR_1126b1370;
    _objc_alloc();
    func_0x00010bfef5e0();
    if (puVar5 != (undefined *)0x0) {
      param_1 = param_1 + 8;
      _objc_loadWeakRetained(param_1);
      lVar2 = param_1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa0a0();
      _objc_release(lVar2);
      _objc_release(param_1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar5);
    return;
  }
  return;
}



/* Entry: 105a71a3c; end: 105a71a43; -[SCSpectaclesEyewearNewSnapNotificationSource deviceIcon] */

undefined8 FUN_105a71a3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105a71a44; end: 105a71a73; -[SCSpectaclesEyewearNewSnapNotificationSource setDeviceIcon:] */

void FUN_105a71a44(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a71a74; end: 105a71ab7; -[SCSpectaclesEyewearNewSnapNotificationSource .cxx_destruct] */

void FUN_105a71a74(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105a71ab8; end: 105a71ba3; -[SCSpectaclesFlyCameraNewSnapNotificationSource initWithNotificationManager:contentStatusServices:tmpFileWriter:device:] */

undefined1 *
FUN_105a71ab8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126eb838;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_6);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105a71ba4; end: 105a71bab; -[SCSpectaclesFlyCameraNewSnapNotificationSource needDeviceIcon] */

undefined8 FUN_105a71ba4(void)

{
  return 1;
}



/* Entry: 105a71bac; end: 105a71baf; -[SCSpectaclesFlyCameraNewSnapNotificationSource pushCaptureCompleteNotification] */

void FUN_105a71bac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be84b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__pushCaptureCompleteNotification_11257ec70);
  return;
}



/* Entry: 105a71bb0; end: 105a71bb3; -[SCSpectaclesFlyCameraNewSnapNotificationSource pushPostPairingNewSnapNotification] */

void FUN_105a71bb0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be84e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__pushUnimportedSnapsNotification_11257ed38);
  return;
}



/* Entry: 105a71bb4; end: 105a71bb7; -[SCSpectaclesFlyCameraNewSnapNotificationSource pushContentAvailableNotificationForSession:] */

void FUN_105a71bb4(void)

{
  return;
}



/* Entry: 105a71bb8; end: 105a71c83; -[SCSpectaclesFlyCameraNewSnapNotificationSource pushImportCompleteNotificationForSession:currentlyOnMemoriesSnapsTab:] */

void FUN_105a71bb8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b1370;
  _objc_retain(param_3);
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfef840(puVar1,param_2,param_3,param_4,uVar2,*(undefined8 *)(param_1 + 0x28));
  _objc_release(param_3);
  _objc_release(uVar2);
  if (puVar1 != (undefined *)0x0) {
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    lVar3 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa0a0();
    _objc_release(lVar3);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a71c84; end: 105a71d17; -[SCSpectaclesFlyCameraNewSnapNotificationSource pushTransferInterruptedNotificationForSession:] */

void FUN_105a71c84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b1370;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010bfef820();
  _objc_release(param_3);
  if (puVar1 != (undefined *)0x0) {
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    lVar2 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa0a0();
    _objc_release(lVar2);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a71d18; end: 105a71e07; -[SCSpectaclesFlyCameraNewSnapNotificationSource _pushUnimportedSnapsNotification] */

void FUN_105a71d18(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf5e4e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c282be0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf529e0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar4 != 0) {
    puVar5 = PTR_PTR_1126b1370;
    _objc_alloc();
    func_0x00010bfee600();
    if (puVar5 != (undefined *)0x0) {
      param_1 = param_1 + 8;
      _objc_loadWeakRetained(param_1);
      lVar2 = param_1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa0a0();
      _objc_release(lVar2);
      _objc_release(param_1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar5);
    return;
  }
  return;
}



/* Entry: 105a71e08; end: 105a71f43; -[SCSpectaclesFlyCameraNewSnapNotificationSource _pushCaptureCompleteNotification] */

void FUN_105a71e08(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf5e4e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c282be0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  lVar4 = param_1;
  func_0x00010be238e0(param_1,param_2,uVar3);
  if (lVar4 != 0) {
    puVar5 = PTR_PTR_1126b1370;
    _objc_alloc();
    lVar6 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar6);
    lVar7 = lVar6;
    func_0x00010c0d4f60();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010bf86080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfee580(puVar5,param_2,lVar8,lVar4,*(undefined8 *)(param_1 + 0x28));
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    if (puVar5 != (undefined *)0x0) {
      param_1 = param_1 + 8;
      _objc_loadWeakRetained(param_1);
      lVar4 = param_1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa0a0();
      _objc_release(lVar4);
      _objc_release(param_1);
    }
    _objc_release(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105a71f44; end: 105a7215f; -[SCSpectaclesFlyCameraNewSnapNotificationSource _getUnseenSnapsCount:] */

long FUN_105a71f44(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
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
  lVar10 = param_3;
  func_0x00010bf529e0(param_3);
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained();
  lVar9 = lVar1;
  func_0x00010bf4d6e0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar9;
  func_0x00010c26f520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar9);
  _objc_release(lVar1);
  if (lVar11 != 0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(param_3);
    lVar1 = param_3;
    func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
    if (lVar1 != 0) {
      lVar9 = *plStack_120;
      do {
        lVar11 = 0;
        do {
          if (*plStack_120 != lVar9) {
            _objc_enumerationMutation(param_3);
          }
          lVar2 = *(long *)(lStack_128 + lVar11 * 8);
          func_0x00010bf4bc60(lVar2);
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar2;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar3;
          func_0x00010c26f500();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = param_1 + 0x18;
          _objc_loadWeakRetained(lVar5);
          lVar6 = lVar5;
          func_0x00010bf4d6e0();
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar6;
          func_0x00010c26f520();
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar4;
          func_0x00010bf433a0(lVar4,param_2,lVar7);
          _objc_release(lVar7);
          _objc_release(lVar6);
          _objc_release(lVar5);
          _objc_release(lVar4);
          _objc_release(lVar3);
          _objc_release(lVar2);
          lVar10 = lVar10 - (ulong)(lVar8 != 1);
          lVar11 = lVar11 + 1;
        } while (lVar1 != lVar11);
        lVar1 = param_3;
        func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
      } while (lVar1 != 0);
    }
    _objc_release(param_3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return lVar10;
  }
  ___stack_chk_fail();
  return *(long *)(param_3 + 0x28);
}



/* Entry: 105a72160; end: 105a72167; -[SCSpectaclesFlyCameraNewSnapNotificationSource deviceIcon] */

undefined8 FUN_105a72160(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105a72168; end: 105a72197; -[SCSpectaclesFlyCameraNewSnapNotificationSource setDeviceIcon:] */

void FUN_105a72168(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a72198; end: 105a721e3; -[SCSpectaclesFlyCameraNewSnapNotificationSource .cxx_destruct] */

void FUN_105a72198(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105a721e4; end: 105a7232f; -[SCSpectaclesNewSnapNotificationEmitter initWithNotificationSource:onboardingMonitor:onMemoriesMonitor:devicePreferences:device:iconProvider:] */

undefined1 *
FUN_105a721e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126eb840;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_7);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
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



/* Entry: 105a72330; end: 105a724d7; -[SCSpectaclesNewSnapNotificationEmitter spectaclesDeviceDidUpdateContentList:] */

void FUN_105a72330(ulong param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  _objc_release();
  if (param_3 == lVar1) {
    func_0x00010be10e80(param_1);
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(ulong *)(param_1 + 0x20);
    func_0x00010c157aa0();
    if ((uVar2 & 1) == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0xc2000000;
      pcStack_50 = FUN_105a724d8;
      puStack_48 = &UNK_1108434b0;
      puVar4 = auStack_40;
      _objc_copyWeak(puVar4,auStack_38);
      func_0x00010c229240(uVar3);
    }
    else {
      uVar2 = param_1;
      func_0x00010be33de0();
      if ((uVar2 & 1) == 0) {
        puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_80 = 0xc2000000;
        uStack_78 = 0x105a725a8;
        puStack_70 = &UNK_1108434b0;
        puVar4 = auStack_68;
        _objc_copyWeak(puVar4,auStack_38);
        func_0x00010bdf99c0(param_1);
      }
      else {
        puVar4 = auStack_90;
        _objc_copyWeak(puVar4,auStack_38);
        func_0x00010bdf99c0(param_1);
      }
    }
    _objc_destroyWeak(puVar4);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105a724d8; end: 105a7257b;  */

void FUN_105a724d8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [8];
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010bdf99c0(lVar1);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105a7257c; end: 105a725ff;  */

void FUN_105a7257c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be84da0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


