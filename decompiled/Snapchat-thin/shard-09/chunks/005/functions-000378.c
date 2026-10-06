/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106ec2564; end: 106ec2633; -[SCSpectaclesManager device0StateShortCode] */

void FUN_106ec2564(undefined **param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  ppuVar1 = param_1;
  func_0x00010bf71280();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010bf529e0();
  _objc_release(ppuVar1);
  if (ppuVar2 == (undefined **)0x0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dae278;
  }
  else {
    func_0x00010bf71280(param_1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = param_1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar1;
    func_0x000106e937b0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
    _objc_release(param_1);
    ppuVar3 = ppuVar2;
    func_0x00010c0692a0(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = ppuVar3;
    func_0x00010c252800();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
    _objc_release(ppuVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 106ec2634; end: 106ec27f7; -[SCSpectaclesManager requestCurrentDeviceLogs:] */

void FUN_106ec2634(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  code *pcStack_1b0;
  undefined *puStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar2 = param_1;
  func_0x00010bf71280();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  func_0x00010bf52a60();
  if (lVar6 != 0) {
    lVar5 = *plStack_120;
    unaff_x22 = lVar6;
    do {
      lVar6 = 0;
      do {
        if (*plStack_120 != lVar5) {
          _objc_enumerationMutation(lVar2);
        }
        uVar4 = *(undefined8 *)(lStack_128 + lVar6 * 8);
        uVar3 = uVar4;
        func_0x00010bf48d40();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar3;
        func_0x00010bf48920();
        if ((int)uVar1 == 0) {
          _objc_release(uVar3);
        }
        else {
          func_0x00010c2636a0();
          _objc_release(uVar3);
          if ((int)uVar4 != 0) {
            puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_150 = 0xc2000000;
            pcStack_148 = FUN_106ec27f8;
            puStack_140 = &UNK_11084f370;
            _objc_retain(param_3);
            lStack_138 = param_3;
            func_0x00010bef7dc0(param_1);
            _objc_release(lStack_138);
            _objc_release(lVar2);
            goto LAB_106ec27b4;
          }
        }
        lVar6 = lVar6 + 1;
      } while (unaff_x22 != lVar6);
      unaff_x22 = lVar2;
      func_0x00010bf52a60();
    } while (unaff_x22 != 0);
  }
  _objc_release(lVar2);
  param_2 = 0;
  (**(code **)(param_3 + 0x10))(param_3);
LAB_106ec27b4:
  lVar6 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    pcStack_168 = FUN_106ec27f8;
    lStack_190 = unaff_x22;
    lStack_188 = lVar2;
    lStack_180 = param_1;
    lStack_178 = param_3;
    puStack_170 = &stack0xfffffffffffffff0;
    _objc_retain(param_2);
    lVar2 = param_2;
    func_0x00010bf529e0();
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = param_2;
      FUN_106fd2d78();
      _objc_retainAutoreleasedReturnValue();
    }
    puStack_1c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1b8 = 0xc2000000;
    pcStack_1b0 = FUN_106ec28d0;
    puStack_1a8 = &UNK_11084aaa8;
    uVar3 = *(undefined8 *)(lVar6 + 0x20);
    _objc_retain(uVar3);
    lStack_1a0 = lVar2;
    uStack_198 = uVar3;
    _objc_retain(lVar2);
    func_0x000100c749e0(0x40400000,"APPSTORE",&puStack_1c0);
    _objc_release(lStack_1a0);
    _objc_release(uStack_198);
    _objc_release(lVar2);
    _objc_release(param_2);
    return;
  }
  return;
}



/* Entry: 106ec27f8; end: 106ec28cf;  */

void FUN_106ec27f8(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_2;
    FUN_106fd2d78();
    _objc_retainAutoreleasedReturnValue();
  }
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106ec28d0;
  puStack_48 = &UNK_11084aaa8;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  lStack_40 = lVar1;
  uStack_38 = uVar2;
  _objc_retain(lVar1);
  func_0x000100c749e0(0x40400000,"APPSTORE",&puStack_60);
  _objc_release(lStack_40);
  _objc_release(uStack_38);
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 106ec28d0; end: 106ec28df;  */

void FUN_106ec28d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106ec28dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106ec28e0; end: 106ec2a07; -[SCSpectaclesManager unpairDevicesWithError] */

void FUN_106ec28e0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1e8 [128];
  long lStack_168;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar7 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  func_0x00010bf71080();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf71280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar9 = *plStack_100;
    do {
      lVar10 = 0;
      do {
        if (*plStack_100 != lVar9) {
          _objc_enumerationMutation(lVar1);
        }
        uVar3 = *(undefined8 *)(lStack_108 + lVar10 * 8);
        func_0x00010c0692a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c281d00();
        _objc_release(uVar3);
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      lVar2 = lVar1;
      puVar7 = &uStack_110;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puVar8 = &uStack_230;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  plStack_220 = (long *)0x0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  lVar2 = lVar1;
  func_0x00010bf71080();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar2;
  func_0x00010bf71280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  puVar6 = auStack_1e8;
  lVar2 = lVar9;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar10 = *plStack_220;
    do {
      lVar11 = 0;
      do {
        if (*plStack_220 != lVar10) {
          _objc_enumerationMutation(lVar9);
        }
        func_0x00010bdce4c0(lVar1,param_2,*(undefined8 *)(lStack_228 + lVar11 * 8),puVar7);
        lVar11 = lVar11 + 1;
      } while (lVar2 != lVar11);
      puVar6 = auStack_1e8;
      lVar2 = lVar9;
      puVar8 = &uStack_230;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar8);
  puVar4 = (undefined1 *)puVar8;
  func_0x00010bf48d40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf48920();
  _objc_release(puVar4);
  if ((puVar6 == (undefined1 *)0x2) && ((int)puVar5 != 0)) {
    puVar6 = (undefined1 *)puVar8;
    func_0x00010bf6ff00(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6fd80();
    _objc_release(puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar8);
  return;
}



/* Entry: 106ec2a08; end: 106ec2b2b; -[SCSpectaclesManager updateMockBatteryLevelStatus:] */

void FUN_106ec2a08(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar6 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar1 = param_1;
  func_0x00010bf71080();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf71280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar5 = auStack_d8;
  lVar1 = lVar2;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar7 = *plStack_110;
    do {
      lVar8 = 0;
      do {
        if (*plStack_110 != lVar7) {
          _objc_enumerationMutation(lVar2);
        }
        func_0x00010bdce4c0(param_1,param_2,*(undefined8 *)(lStack_118 + lVar8 * 8),param_3);
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      puVar5 = auStack_d8;
      lVar1 = lVar2;
      puVar6 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  puVar3 = (undefined1 *)puVar6;
  func_0x00010bf48d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf48920();
  _objc_release(puVar3);
  if ((puVar5 == (undefined1 *)0x2) && ((int)puVar4 != 0)) {
    puVar5 = (undefined1 *)puVar6;
    func_0x00010bf6ff00(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6fd80();
    _objc_release(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 106ec2b2c; end: 106ec2bb7; -[SCSpectaclesManager _applyMockBatteryLevelStatusToDevice:mockBatteryLevelStatusToDevice:] */

void FUN_106ec2b2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf48d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf48920();
  _objc_release(uVar1);
  if ((param_4 == 2) && ((int)uVar2 != 0)) {
    uVar1 = param_3;
    func_0x00010bf6ff00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6fd80();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106ec2bb8; end: 106ec2cdb; -[SCSpectaclesManager updateMockTemperatureStatus:] */

void FUN_106ec2bb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar6 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar1 = param_1;
  func_0x00010bf71080();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf71280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar5 = auStack_d8;
  lVar1 = lVar2;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar7 = *plStack_110;
    do {
      lVar8 = 0;
      do {
        if (*plStack_110 != lVar7) {
          _objc_enumerationMutation(lVar2);
        }
        func_0x00010bdce500(param_1,param_2,*(undefined8 *)(lStack_118 + lVar8 * 8),param_3);
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      puVar5 = auStack_d8;
      lVar1 = lVar2;
      puVar6 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_retain(puVar6);
    puVar3 = (undefined1 *)puVar6;
    func_0x00010bf48d40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf48920();
    _objc_release(puVar3);
    if (((int)puVar4 != 0) && ((puVar5 == (undefined1 *)0x2 || (puVar5 == (undefined1 *)0x3)))) {
      puVar5 = (undefined1 *)puVar6;
      func_0x00010bf6ff00(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6fd80();
      _objc_release(puVar5);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar6);
    return;
  }
  return;
}



/* Entry: 106ec2cdc; end: 106ec2d7b; -[SCSpectaclesManager _applyMockTemperatureStatusToDevice:mockTemperatureStatusToDevice:] */

void FUN_106ec2cdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf48d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf48920();
  _objc_release(uVar1);
  if (((int)uVar2 != 0) && ((param_4 == 2 || (param_4 == 3)))) {
    uVar1 = param_3;
    func_0x00010bf6ff00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6fd80();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106ec2d7c; end: 106ec2e9f; -[SCSpectaclesManager updateMockStorageLevelStatus:] */

void FUN_106ec2d7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar6 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar1 = param_1;
  func_0x00010bf71080();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf71280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar5 = auStack_d8;
  lVar1 = lVar2;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar7 = *plStack_110;
    do {
      lVar8 = 0;
      do {
        if (*plStack_110 != lVar7) {
          _objc_enumerationMutation(lVar2);
        }
        func_0x00010bdce4e0(param_1,param_2,*(undefined8 *)(lStack_118 + lVar8 * 8),param_3);
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      puVar5 = auStack_d8;
      lVar1 = lVar2;
      puVar6 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  puVar3 = (undefined1 *)puVar6;
  func_0x00010bf48d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf48920();
  _objc_release(puVar3);
  if ((puVar5 == (undefined1 *)0x2) && ((int)puVar4 != 0)) {
    puVar5 = (undefined1 *)puVar6;
    func_0x00010bf6ff00(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6fd80();
    _objc_release(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 106ec2ea0; end: 106ec2f2b; -[SCSpectaclesManager _applyMockStorageLevelStatusToDevice:mockStorageLevelStatus:] */

void FUN_106ec2ea0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf48d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf48920();
  _objc_release(uVar1);
  if ((param_4 == 2) && ((int)uVar2 != 0)) {
    uVar1 = param_3;
    func_0x00010bf6ff00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6fd80();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106ec2f2c; end: 106ec308b; -[SCSpectaclesManager crashDetected] */

void FUN_106ec2f2c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_5a0;
  long lStack_598;
  long *plStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined1 auStack_558 [128];
  long lStack_4d8;
  undefined8 uStack_480;
  long lStack_478;
  long *plStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined1 auStack_438 [128];
  long lStack_3b8;
  undefined8 uStack_360;
  long lStack_358;
  long *plStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined1 auStack_318 [128];
  long lStack_298;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 auStack_1f8 [128];
  long lStack_178;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  func_0x00010bf71080();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf71280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar2 = lVar1;
  func_0x00010bf52a60(lVar1,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar2 != 0) {
    lVar9 = *plStack_110;
    do {
      lVar10 = 0;
      do {
        if (*plStack_110 != lVar9) {
          _objc_enumerationMutation(lVar1);
        }
        uVar8 = *(undefined8 *)(lStack_118 + lVar10 * 8);
        uVar3 = uVar8;
        func_0x00010bf48d40();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010bf48920();
        _objc_release(uVar3);
        if ((int)uVar4 != 0) {
          func_0x00010bf6ff00();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf6fd80();
          _objc_release(uVar8);
        }
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      lVar2 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  plStack_230 = (long *)0x0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  func_0x00010bf71080();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf71280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bf52a60(lVar2,param_2,&uStack_240,auStack_1f8,0x10);
  if (lVar1 != 0) {
    lVar9 = *plStack_230;
    do {
      lVar10 = 0;
      do {
        if (*plStack_230 != lVar9) {
          _objc_enumerationMutation(lVar2);
        }
        uVar8 = *(undefined8 *)(lStack_238 + lVar10 * 8);
        uVar3 = uVar8;
        func_0x00010bf48d40();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010bf48920();
        _objc_release(uVar3);
        if ((int)uVar4 != 0) {
          func_0x00010bfa1c80();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar8;
          func_0x00010c119e80();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c27d7e0();
          _objc_release(uVar4);
          _objc_release(uVar3);
          _objc_release(uVar8);
          goto LAB_106ec31d8;
        }
        lVar10 = lVar10 + 1;
      } while (lVar1 != lVar10);
      lVar1 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_240,auStack_1f8,0x10);
    } while (lVar1 != 0);
  }
LAB_106ec31d8:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return;
  }
  ___stack_chk_fail();
  lStack_298 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_358 = 0;
  uStack_360 = 0;
  uStack_348 = 0;
  plStack_350 = (long *)0x0;
  uStack_338 = 0;
  uStack_340 = 0;
  uStack_328 = 0;
  uStack_330 = 0;
  func_0x00010bf71080();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010bf71280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar1;
  func_0x00010bf52a60(lVar1,param_2,&uStack_360,auStack_318,0x10);
  if (lVar2 != 0) {
    lVar9 = *plStack_350;
    do {
      lVar10 = 0;
      do {
        if (*plStack_350 != lVar9) {
          _objc_enumerationMutation(lVar1);
        }
        uVar8 = *(undefined8 *)(lStack_358 + lVar10 * 8);
        uVar3 = uVar8;
        func_0x00010bf48d40();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010bf48920();
        _objc_release(uVar3);
        if ((int)uVar4 != 0) {
          func_0x00010bfa1c80();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar8;
          func_0x00010c119e80();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c27d820();
          _objc_release(uVar4);
          _objc_release(uVar3);
          _objc_release(uVar8);
          goto LAB_106ec3364;
        }
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      lVar2 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_360,auStack_318,0x10);
    } while (lVar2 != 0);
  }
LAB_106ec3364:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_298) {
    return;
  }
  ___stack_chk_fail();
  lStack_3b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_478 = 0;
  uStack_480 = 0;
  uStack_468 = 0;
  plStack_470 = (long *)0x0;
  uStack_458 = 0;
  uStack_460 = 0;
  uStack_448 = 0;
  uStack_450 = 0;
  func_0x00010bf71080();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf71280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bf52a60(lVar2,param_2,&uStack_480,auStack_438,0x10);
  if (lVar1 != 0) {
    lVar9 = *plStack_470;
    do {
      lVar10 = 0;
      do {
        if (*plStack_470 != lVar9) {
          _objc_enumerationMutation(lVar2);
        }
        uVar8 = *(undefined8 *)(lStack_478 + lVar10 * 8);
        uVar3 = uVar8;
        func_0x00010bf48d40();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010bf48920();
        _objc_release(uVar3);
        if ((int)uVar4 != 0) {
          func_0x00010bfa1c80();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar8;
          func_0x00010c119e80();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c27d7c0();
          _objc_release(uVar4);
          _objc_release(uVar3);
          _objc_release(uVar8);
          goto LAB_106ec34f0;
        }
        lVar10 = lVar10 + 1;
      } while (lVar1 != lVar10);
      lVar1 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_480,auStack_438,0x10);
    } while (lVar1 != 0);
  }
LAB_106ec34f0:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3b8) {
    return;
  }
  ___stack_chk_fail();
  lStack_4d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_598 = 0;
  uStack_5a0 = 0;
  uStack_588 = 0;
  plStack_590 = (long *)0x0;
  uStack_578 = 0;
  uStack_580 = 0;
  uStack_568 = 0;
  uStack_570 = 0;
  func_0x00010bf71080();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010bf71280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar1;
  func_0x00010bf52a60(lVar1,param_2,&uStack_5a0,auStack_558,0x10);
  if (lVar2 != 0) {
    lVar9 = *plStack_590;
    do {
      lVar10 = 0;
      do {
        if (*plStack_590 != lVar9) {
          _objc_enumerationMutation(lVar1);
        }
        uVar8 = *(undefined8 *)(lStack_598 + lVar10 * 8);
        uVar3 = uVar8;
        func_0x00010bf48d40();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010bf48920();
        _objc_release(uVar3);
        if ((int)uVar4 != 0) {
          func_0x00010bfa1c80();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar8;
          func_0x00010c119e80();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c27d800();
          _objc_release(uVar4);
          _objc_release(uVar3);
          _objc_release(uVar8);
          goto LAB_106ec367c;
        }
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      lVar2 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_5a0,auStack_558,0x10);
    } while (lVar2 != 0);
  }
LAB_106ec367c:
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_4d8) {
    ___stack_chk_fail();
    puVar5 = PTR_PTR_1126c1ed8;
    _objc_alloc(PTR_PTR_1126c1ed8);
    puVar6 = PTR_PTR_1126c0c68;
    _objc_alloc();
    func_0x00010c04e820();
    puVar7 = PTR_PTR_1126c0c70;
    _objc_alloc();
    func_0x00010c04e820();
    func_0x00010c044900(puVar5,param_2,&PTR____CFConstantStringClassReference_110e8af58,
                        &PTR____CFConstantStringClassReference_110e8af78,1,0,0,0,1,puVar6,puVar7,0);
    _objc_release(puVar7);
    _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  return;
}



/* Entry: 106ec308c; end: 106ec3217; -[SCSpectaclesManager startProxy] */

void FUN_106ec308c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_480;
  long lStack_478;
  long *plStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined1 auStack_438 [128];
  long lStack_3b8;
  undefined8 uStack_360;
  long lStack_358;
  long *plStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined1 auStack_318 [128];
  long lStack_298;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 auStack_1f8 [128];
  long lStack_178;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  func_0x00010bf71080();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf71280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar2 = lVar1;
  func_0x00010bf52a60(lVar1,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar2 != 0) {
    lVar9 = *plStack_110;
    do {
      lVar10 = 0;
      do {
        if (*plStack_110 != lVar9) {
          _objc_enumerationMutation(lVar1);
        }
        uVar8 = *(undefined8 *)(lStack_118 + lVar10 * 8);
        uVar3 = uVar8;
        func_0x00010bf48d40();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010bf48920();
        _objc_release(uVar3);
        if ((int)uVar4 != 0) {
          func_0x00010bfa1c80();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar8;
          func_0x00010c119e80();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c27d7e0();
          _objc_release(uVar4);
          _objc_release(uVar3);
          _objc_release(uVar8);
          goto LAB_106ec31d8;
        }
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      lVar2 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar2 != 0);
  }
LAB_106ec31d8:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  plStack_230 = (long *)0x0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  func_0x00010bf71080();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf71280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bf52a60(lVar2,param_2,&uStack_240,auStack_1f8,0x10);
  if (lVar1 != 0) {
    lVar9 = *plStack_230;
    do {
      lVar10 = 0;
      do {
        if (*plStack_230 != lVar9) {
          _objc_enumerationMutation(lVar2);
        }
        uVar8 = *(undefined8 *)(lStack_238 + lVar10 * 8);
        uVar3 = uVar8;
        func_0x00010bf48d40();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010bf48920();
        _objc_release(uVar3);
        if ((int)uVar4 != 0) {
          func_0x00010bfa1c80();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar8;
          func_0x00010c119e80();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c27d820();
          _objc_release(uVar4);
          _objc_release(uVar3);
          _objc_release(uVar8);
          goto LAB_106ec3364;
        }
        lVar10 = lVar10 + 1;
      } while (lVar1 != lVar10);
      lVar1 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_240,auStack_1f8,0x10);
    } while (lVar1 != 0);
  }
LAB_106ec3364:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return;
  }
  ___stack_chk_fail();
  lStack_298 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_358 = 0;
  uStack_360 = 0;
  uStack_348 = 0;
  plStack_350 = (long *)0x0;
  uStack_338 = 0;
  uStack_340 = 0;
  uStack_328 = 0;
  uStack_330 = 0;
  func_0x00010bf71080();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010bf71280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar1;
  func_0x00010bf52a60(lVar1,param_2,&uStack_360,auStack_318,0x10);
  if (lVar2 != 0) {
    lVar9 = *plStack_350;
    do {
      lVar10 = 0;
      do {
        if (*plStack_350 != lVar9) {
          _objc_enumerationMutation(lVar1);
        }
        uVar8 = *(undefined8 *)(lStack_358 + lVar10 * 8);
        uVar3 = uVar8;
        func_0x00010bf48d40();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010bf48920();
        _objc_release(uVar3);
        if ((int)uVar4 != 0) {
          func_0x00010bfa1c80();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar8;
          func_0x00010c119e80();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c27d7c0();
          _objc_release(uVar4);
          _objc_release(uVar3);
          _objc_release(uVar8);
          goto LAB_106ec34f0;
        }
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      lVar2 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_360,auStack_318,0x10);
    } while (lVar2 != 0);
  }
LAB_106ec34f0:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_298) {
    return;
  }
  ___stack_chk_fail();
  lStack_3b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_478 = 0;
  uStack_480 = 0;
  uStack_468 = 0;
  plStack_470 = (long *)0x0;
  uStack_458 = 0;
  uStack_460 = 0;
  uStack_448 = 0;
  uStack_450 = 0;
  func_0x00010bf71080();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf71280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bf52a60(lVar2,param_2,&uStack_480,auStack_438,0x10);
  if (lVar1 != 0) {
    lVar9 = *plStack_470;
    do {
      lVar10 = 0;
      do {
        if (*plStack_470 != lVar9) {
          _objc_enumerationMutation(lVar2);
        }
        uVar8 = *(undefined8 *)(lStack_478 + lVar10 * 8);
        uVar3 = uVar8;
        func_0x00010bf48d40();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010bf48920();
        _objc_release(uVar3);
        if ((int)uVar4 != 0) {
          func_0x00010bfa1c80();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar8;
          func_0x00010c119e80();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c27d800();
          _objc_release(uVar4);
          _objc_release(uVar3);
          _objc_release(uVar8);
          goto LAB_106ec367c;
        }
        lVar10 = lVar10 + 1;
      } while (lVar1 != lVar10);
      lVar1 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_480,auStack_438,0x10);
    } while (lVar1 != 0);
  }
LAB_106ec367c:
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3b8) {
    ___stack_chk_fail();
    puVar5 = PTR_PTR_1126c1ed8;
    _objc_alloc(PTR_PTR_1126c1ed8);
    puVar6 = PTR_PTR_1126c0c68;
    _objc_alloc();
    func_0x00010c04e820();
    puVar7 = PTR_PTR_1126c0c70;
    _objc_alloc();
    func_0x00010c04e820();
    func_0x00010c044900(puVar5,param_2,&PTR____CFConstantStringClassReference_110e8af58,
                        &PTR____CFConstantStringClassReference_110e8af78,1,0,0,0,1,puVar6,puVar7,0);
    _objc_release(puVar7);
    _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  return;
}



/* Entry: 106ec3218; end: 106ec33a3; -[SCSpectaclesManager stopProxy] */

void FUN_106ec3218(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_360;
  long lStack_358;
  long *plStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined1 auStack_318 [128];
  long lStack_298;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 auStack_1f8 [128];
  long lStack_178;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  func_0x00010bf71080();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf71280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar2 = lVar1;
  func_0x00010bf52a60(lVar1,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar2 != 0) {
    lVar9 = *plStack_110;
    do {
      lVar10 = 0;
      do {
        if (*plStack_110 != lVar9) {
          _objc_enumerationMutation(lVar1);
        }
        uVar8 = *(undefined8 *)(lStack_118 + lVar10 * 8);
        uVar3 = uVar8;
        func_0x00010bf48d40();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010bf48920();
        _objc_release(uVar3);
        if ((int)uVar4 != 0) {
          func_0x00010bfa1c80();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar8;
          func_0x00010c119e80();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c27d820();
          _objc_release(uVar4);
          _objc_release(uVar3);
          _objc_release(uVar8);
          goto LAB_106ec3364;
        }
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      lVar2 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar2 != 0);
  }
LAB_106ec3364:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  plStack_230 = (long *)0x0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  func_0x00010bf71080();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf71280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bf52a60(lVar2,param_2,&uStack_240,auStack_1f8,0x10);
  if (lVar1 != 0) {
    lVar9 = *plStack_230;
    do {
      lVar10 = 0;
      do {
        if (*plStack_230 != lVar9) {
          _objc_enumerationMutation(lVar2);
        }
        uVar8 = *(undefined8 *)(lStack_238 + lVar10 * 8);
        uVar3 = uVar8;
        func_0x00010bf48d40();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010bf48920();
        _objc_release(uVar3);
        if ((int)uVar4 != 0) {
          func_0x00010bfa1c80();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar8;
          func_0x00010c119e80();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c27d7c0();
          _objc_release(uVar4);
          _objc_release(uVar3);
          _objc_release(uVar8);
          goto LAB_106ec34f0;
        }
        lVar10 = lVar10 + 1;
      } while (lVar1 != lVar10);
      lVar1 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_240,auStack_1f8,0x10);
    } while (lVar1 != 0);
  }
LAB_106ec34f0:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return;
  }
  ___stack_chk_fail();
  lStack_298 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_358 = 0;
  uStack_360 = 0;
  uStack_348 = 0;
  plStack_350 = (long *)0x0;
  uStack_338 = 0;
  uStack_340 = 0;
  uStack_328 = 0;
  uStack_330 = 0;
  func_0x00010bf71080();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010bf71280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar1;
  func_0x00010bf52a60(lVar1,param_2,&uStack_360,auStack_318,0x10);
  if (lVar2 != 0) {
    lVar9 = *plStack_350;
    do {
      lVar10 = 0;
      do {
        if (*plStack_350 != lVar9) {
          _objc_enumerationMutation(lVar1);
        }
        uVar8 = *(undefined8 *)(lStack_358 + lVar10 * 8);
        uVar3 = uVar8;
        func_0x00010bf48d40();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010bf48920();
        _objc_release(uVar3);
        if ((int)uVar4 != 0) {
          func_0x00010bfa1c80();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar8;
          func_0x00010c119e80();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c27d800();
          _objc_release(uVar4);
          _objc_release(uVar3);
          _objc_release(uVar8);
          goto LAB_106ec367c;
        }
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      lVar2 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_360,auStack_318,0x10);
    } while (lVar2 != 0);
  }
LAB_106ec367c:
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_298) {
    ___stack_chk_fail();
    puVar5 = PTR_PTR_1126c1ed8;
    _objc_alloc(PTR_PTR_1126c1ed8);
    puVar6 = PTR_PTR_1126c0c68;
    _objc_alloc();
    func_0x00010c04e820();
    puVar7 = PTR_PTR_1126c0c70;
    _objc_alloc();
    func_0x00010c04e820();
    func_0x00010c044900(puVar5,param_2,&PTR____CFConstantStringClassReference_110e8af58,
                        &PTR____CFConstantStringClassReference_110e8af78,1,0,0,0,1,puVar6,puVar7,0);
    _objc_release(puVar7);
    _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  return;
}



/* Entry: 106ec33a4; end: 106ec352f; -[SCSpectaclesManager startProxyFull] */

void FUN_106ec33a4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 auStack_1f8 [128];
  long lStack_178;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  func_0x00010bf71080();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf71280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar2 = lVar1;
  func_0x00010bf52a60(lVar1,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar2 != 0) {
    lVar9 = *plStack_110;
    do {
      lVar10 = 0;
      do {
        if (*plStack_110 != lVar9) {
          _objc_enumerationMutation(lVar1);
        }
        uVar8 = *(undefined8 *)(lStack_118 + lVar10 * 8);
        uVar3 = uVar8;
        func_0x00010bf48d40();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010bf48920();
        _objc_release(uVar3);
        if ((int)uVar4 != 0) {
          func_0x00010bfa1c80();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar8;
          func_0x00010c119e80();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c27d7c0();
          _objc_release(uVar4);
          _objc_release(uVar3);
          _objc_release(uVar8);
          goto LAB_106ec34f0;
        }
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      lVar2 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar2 != 0);
  }
LAB_106ec34f0:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  plStack_230 = (long *)0x0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  func_0x00010bf71080();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf71280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bf52a60(lVar2,param_2,&uStack_240,auStack_1f8,0x10);
  if (lVar1 != 0) {
    lVar9 = *plStack_230;
    do {
      lVar10 = 0;
      do {
        if (*plStack_230 != lVar9) {
          _objc_enumerationMutation(lVar2);
        }
        uVar8 = *(undefined8 *)(lStack_238 + lVar10 * 8);
        uVar3 = uVar8;
        func_0x00010bf48d40();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010bf48920();
        _objc_release(uVar3);
        if ((int)uVar4 != 0) {
          func_0x00010bfa1c80();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar8;
          func_0x00010c119e80();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c27d800();
          _objc_release(uVar4);
          _objc_release(uVar3);
          _objc_release(uVar8);
          goto LAB_106ec367c;
        }
        lVar10 = lVar10 + 1;
      } while (lVar1 != lVar10);
      lVar1 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_240,auStack_1f8,0x10);
    } while (lVar1 != 0);
  }
LAB_106ec367c:
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_178) {
    ___stack_chk_fail();
    puVar5 = PTR_PTR_1126c1ed8;
    _objc_alloc(PTR_PTR_1126c1ed8);
    puVar6 = PTR_PTR_1126c0c68;
    _objc_alloc();
    func_0x00010c04e820();
    puVar7 = PTR_PTR_1126c0c70;
    _objc_alloc();
    func_0x00010c04e820();
    func_0x00010c044900(puVar5,param_2,&PTR____CFConstantStringClassReference_110e8af58,
                        &PTR____CFConstantStringClassReference_110e8af78,1,0,0,0,1,puVar6,puVar7,0);
    _objc_release(puVar7);
    _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  return;
}



/* Entry: 106ec3530; end: 106ec36bb; -[SCSpectaclesManager stopProxyFull] */

void FUN_106ec3530(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  func_0x00010bf71080();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf71280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar2 = lVar1;
  func_0x00010bf52a60(lVar1,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar2 != 0) {
    lVar9 = *plStack_110;
    do {
      lVar10 = 0;
      do {
        if (*plStack_110 != lVar9) {
          _objc_enumerationMutation(lVar1);
        }
        uVar8 = *(undefined8 *)(lStack_118 + lVar10 * 8);
        uVar3 = uVar8;
        func_0x00010bf48d40();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010bf48920();
        _objc_release(uVar3);
        if ((int)uVar4 != 0) {
          func_0x00010bfa1c80();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar8;
          func_0x00010c119e80();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c27d800();
          _objc_release(uVar4);
          _objc_release(uVar3);
          _objc_release(uVar8);
          goto LAB_106ec367c;
        }
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      lVar2 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar2 != 0);
  }
LAB_106ec367c:
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    puVar5 = PTR_PTR_1126c1ed8;
    _objc_alloc(PTR_PTR_1126c1ed8);
    puVar6 = PTR_PTR_1126c0c68;
    _objc_alloc();
    func_0x00010c04e820();
    puVar7 = PTR_PTR_1126c0c70;
    _objc_alloc();
    func_0x00010c04e820();
    func_0x00010c044900(puVar5,param_2,&PTR____CFConstantStringClassReference_110e8af58,
                        &PTR____CFConstantStringClassReference_110e8af78,1,0,0,0,1,puVar6,puVar7,0);
    _objc_release(puVar7);
    _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  return;
}



/* Entry: 106ec36bc; end: 106ec3777;  */

void FUN_106ec36bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126c1ed8;
  _objc_alloc(PTR_PTR_1126c1ed8);
  puVar2 = PTR_PTR_1126c0c68;
  _objc_alloc();
  func_0x00010c04e820();
  puVar3 = PTR_PTR_1126c0c70;
  _objc_alloc();
  func_0x00010c04e820();
  func_0x00010c044900(puVar1,param_2,&PTR____CFConstantStringClassReference_110e8af58,
                      &PTR____CFConstantStringClassReference_110e8af78,1,0,0,0,1,puVar2,puVar3,0);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106ec3778; end: 106ec390b; -[SCSpectaclesManager mockSpectaclesPairingComplete] */

void FUN_106ec3778(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = param_1;
  func_0x00010bf71280();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126d3160;
  _objc_alloc(PTR_PTR_1126d3160);
  uVar1 = uVar2;
  func_0x00010c15e740(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bfb0d20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010bfd38e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c044960(puVar3,param_2,uVar1,0,uVar4,uVar5,9,2,0,0);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf04760(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2492c0();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf04760(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2492c0();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf04760(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2492c0();
  _objc_release(uVar1);
  func_0x00010bf04760(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c248880();
  _objc_release(param_1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106ec390c; end: 106ec396f; -[SCSpectaclesManager mockSpectaclesTransferSessionCompleteHdVideo] */

void FUN_106ec390c(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d3168;
  _objc_alloc(PTR_PTR_1126d3168);
  func_0x00010bffd6c0();
  func_0x00010bf04760(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c249980();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106ec3970; end: 106ec39d3; -[SCSpectaclesManager mockSpectaclesTransferSessionCompletePhoto] */

void FUN_106ec3970(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d3168;
  _objc_alloc(PTR_PTR_1126d3168);
  func_0x00010bffd6c0();
  func_0x00010bf04760(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c249980();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106ec39d4; end: 106ec3a37; -[SCSpectaclesManager mockSpectaclesContentDownloading] */

void FUN_106ec39d4(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d3168;
  _objc_alloc(PTR_PTR_1126d3168);
  func_0x00010bffd6c0();
  func_0x00010bf04760(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c249980();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106ec3a38; end: 106ec3a6f; -[SCSpectaclesManager mockFoundSpectaclesBackupPairing] */

void FUN_106ec3a38(undefined8 param_1)

{
  func_0x00010bf04760();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2492c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ec3a70; end: 106ec3c3b; -[SCSpectaclesManager mockSpectaclesTransferInterrupted] */

void FUN_106ec3a70(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_1;
  FUN_106ec36bc();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d2f58;
  _objc_alloc();
  func_0x00010c02d640();
  puVar3 = PTR_PTR_1126d3118;
  _objc_alloc(PTR_PTR_1126d3118);
  puVar4 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  func_0x00010bdc3540(PTR__OBJC_CLASS___NSUUID_1126b0270);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_78 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9598;
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_80 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_80,1);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_70 = puVar6;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_70,&ppuStack_78,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00bd00(0x3f800000,puVar3,param_2,uVar1,puVar4,puVar5,1,1,
                      PTR____NSDictionary0__struct_11034ab58,puVar7,puVar2,1);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  func_0x00010bf04760();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c249980();
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c172ae0();
  uVar8 = uVar1;
  func_0x00010bf04760(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1e6e0(uVar1);
  func_0x00010c249200(uVar8,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar8);
  return;
}



/* Entry: 106ec3c3c; end: 106ec3c87; -[SCSpectaclesManager setOverrideBluetoothOn:] */

void FUN_106ec3c3c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c172ae0();
  uVar1 = param_1;
  func_0x00010bf04760(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1e6e0(param_1);
  func_0x00010c249200(uVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ec3c88; end: 106ec3c8b; -[SCSpectaclesManager getOverrideBluetoothOn] */

void FUN_106ec3c88(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1e6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_bluetoothOverrideOn_1125a5350);
  return;
}



/* Entry: 106ec3c8c; end: 106ec3d1b; -[SCSpectaclesMockTransferSession initWithChannel:component:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106ec3c8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f7b80;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_112760c24) = param_3;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112760c28) = param_4;
    puVar2 = (undefined1 *)puVar1;
    FUN_106ec36bc();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112760c2c);
    *(undefined1 **)((long)puVar1 + (long)_DAT_112760c2c) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106ec3d1c; end: 106ec3d2b; -[SCSpectaclesMockTransferSession component] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106ec3d1c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112760c28);
}



/* Entry: 106ec3d2c; end: 106ec3d3b; -[SCSpectaclesMockTransferSession channel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106ec3d2c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112760c24);
}



/* Entry: 106ec3d3c; end: 106ec3da7; -[SCSpectaclesMockTransferSession currentlyTransferringContent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ec3d3c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d2f58;
  _objc_alloc(PTR_PTR_1126d2f58);
  func_0x00010c02d640();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_alloc_init(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010c214e00(puVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106ec3da8; end: 106ec3dd7; -[SCSpectaclesMockTransferSession device] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ec3da8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112760c2c);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106ec3dd8; end: 106ec3de7; -[SCSpectaclesMockTransferSession channelInternal] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106ec3dd8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112760c24);
}



/* Entry: 106ec3de8; end: 106ec3df7; -[SCSpectaclesMockTransferSession setChannelInternal:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ec3de8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112760c24) = param_3;
  return;
}



/* Entry: 106ec3df8; end: 106ec3e07; -[SCSpectaclesMockTransferSession componentInternal] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106ec3df8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112760c28);
}



/* Entry: 106ec3e08; end: 106ec3e17; -[SCSpectaclesMockTransferSession setComponentInternal:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ec3e08(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112760c28) = param_3;
  return;
}



/* Entry: 106ec3e18; end: 106ec3e27; -[SCSpectaclesMockTransferSession deviceInternal] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106ec3e18(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112760c2c);
}



/* Entry: 106ec3e28; end: 106ec3e67; -[SCSpectaclesMockTransferSession setDeviceInternal:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ec3e28(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112760c2c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ec3e68; end: 106ec3e7b; -[SCSpectaclesMockTransferSession .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ec3e68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112760c2c,0);
  return;
}



/* Entry: 106ec3e7c; end: 106ec3ff7; -[SCSpectaclesTaskQueueListenerAnnouncer description] */

void FUN_106ec3e7c(long param_1)

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
  
  FUN_106ec3ff8(&plStack_60,param_1 + 0x48);
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



/* Entry: 106ec3ff8; end: 106ec4057;  */

void FUN_106ec3ff8(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 106ec4058; end: 106ec4303; -[SCSpectaclesTaskQueueListenerAnnouncer addListener:] */

undefined8 FUN_106ec4058(long param_1,undefined8 param_2,long param_3)

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
  *plVar3 = (long)&PTR_FUN_110982388;
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
    FUN_106ec4304(plVar10,auStack_90);
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
    FUN_106ec4444(puVar8,&plStack_a0);
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
LAB_106ec420c:
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
      goto LAB_106ec422c;
    }
    for (lVar7 = *plVar6; lVar7 != lVar12; lVar7 = lVar7 + 8) {
      lVar5 = lVar7;
      _objc_loadWeakRetained();
      _objc_release();
      if (lVar5 != 0) {
        FUN_106ec4304(plVar10,lVar7);
      }
    }
    _objc_initWeak(auStack_78,param_3);
    FUN_106ec4304(plVar10,auStack_78);
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
    FUN_106ec4444(puVar8,&plStack_88);
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
      goto LAB_106ec420c;
    }
  }
  uVar9 = 1;
LAB_106ec422c:
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



/* Entry: 106ec4304; end: 106ec4443;  */

void FUN_106ec4304(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  uVar2 = param_1[1];
  if (uVar2 < (ulong)param_1[2]) {
    _objc_copyWeak(uVar2,param_2);
    lVar9 = uVar2 + 8;
  }
  else {
    lVar9 = uVar2 - *param_1;
    uVar2 = (lVar9 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
      FUN_106ec4810();
LAB_106ec4440:
      func_0x000104bd35f4();
      plVar5 = param_1;
      __ZNSt3__112__get_sp_mutEPKv();
      __ZNSt3__18__sp_mut4lockEv();
      lVar9 = *param_2;
      lVar11 = param_1[1];
      lVar4 = *param_1;
      param_1[1] = param_2[1];
      *param_1 = lVar9;
      param_2[1] = lVar11;
      *param_2 = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(plVar5);
      return;
    }
    uVar6 = param_1[2] - *param_1;
    uVar7 = (long)uVar6 >> 2;
    if (uVar7 <= uVar2) {
      uVar7 = uVar2;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar7 = 0x1fffffffffffffff;
    }
    if (uVar7 == 0) {
      lVar4 = 0;
    }
    else {
      if (uVar7 >> 0x3d != 0) goto LAB_106ec4440;
      lVar4 = uVar7 << 3;
      __Znwm();
    }
    lVar9 = lVar4 + lVar9;
    _objc_copyWeak(lVar9,param_2);
    lVar8 = *param_1;
    lVar3 = param_1[1];
    lVar1 = lVar9 + (lVar8 - lVar3);
    lVar11 = lVar8;
    lVar10 = lVar1;
    if (lVar3 != lVar8) {
      do {
        _objc_moveWeak(lVar10,lVar11);
        lVar11 = lVar11 + 8;
        lVar10 = lVar10 + 8;
      } while (lVar11 != lVar3);
      do {
        _objc_destroyWeak(lVar8);
        lVar8 = lVar8 + 8;
      } while (lVar8 != lVar3);
      lVar8 = *param_1;
    }
    lVar9 = lVar9 + 8;
    *param_1 = lVar1;
    param_1[1] = lVar9;
    param_1[2] = lVar4 + uVar7 * 8;
    if (lVar8 != 0) {
      __ZdlPv(lVar8);
    }
  }
  param_1[1] = lVar9;
  return;
}



/* Entry: 106ec4444; end: 106ec448b;  */

void FUN_106ec4444(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = param_1;
  __ZNSt3__112__get_sp_mutEPKv();
  __ZNSt3__18__sp_mut4lockEv();
  uVar2 = *param_2;
  uVar4 = param_1[1];
  uVar3 = *param_1;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_2[1] = uVar4;
  *param_2 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar1);
  return;
}



/* Entry: 106ec448c; end: 106ec46bb; -[SCSpectaclesTaskQueueListenerAnnouncer removeListener:] */

void FUN_106ec448c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  puVar8 = (undefined8 *)(param_1 + 0x48);
  plVar6 = (long *)*puVar8;
  if (plVar6 == (long *)0x0) goto LAB_106ec4640;
  lVar7 = *plVar6;
  if (plVar6[1] - lVar7 == 8) {
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar7 != param_3) goto LAB_106ec44f4;
    uStack_70 = 0;
    plStack_68 = (long *)0x0;
    FUN_106ec4444(puVar8,&uStack_70);
    if (plStack_68 == (long *)0x0) goto LAB_106ec4640;
    plVar6 = plStack_68 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar9 = plStack_68;
    } while (cVar2 != '\0');
  }
  else {
LAB_106ec44f4:
    plVar6 = (long *)0x30;
    __Znwm();
    plVar10 = plVar6 + 1;
    *plVar10 = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_110982388;
    plVar9 = plVar6 + 3;
    *plVar9 = 0;
    plVar6[4] = 0;
    plVar6[5] = 0;
    lVar1 = ((long *)*puVar8)[1];
    plStack_80 = plVar9;
    plStack_78 = plVar6;
    for (lVar7 = *(long *)*puVar8; lVar7 != lVar1; lVar7 = lVar7 + 8) {
      lVar4 = lVar7;
      _objc_loadWeakRetained();
      if (lVar4 != 0) {
        lVar5 = lVar7;
        _objc_loadWeakRetained();
        _objc_release();
        _objc_release(lVar4);
        if (lVar5 != param_3) {
          FUN_106ec4304(plVar9,lVar7);
        }
      }
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plStack_90 = plVar9;
    plStack_88 = plVar6;
    FUN_106ec4444(puVar8,&plStack_90);
    plVar6 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar9 = plStack_88 + 1;
      do {
        lVar7 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if (plStack_78 == (long *)0x0) goto LAB_106ec4640;
    plVar6 = plStack_78 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar9 = plStack_78;
    } while (cVar2 != '\0');
  }
  if (lVar7 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
  }
LAB_106ec4640:
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106ec46bc; end: 106ec47c7; -[SCSpectaclesTaskQueueListenerAnnouncer taskQueue:didAddNewTaskToQueue:] */

void FUN_106ec46bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plStack_50;
  long *plStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  FUN_106ec3ff8(&plStack_50,param_1 + 0x48);
  if (plStack_50 != (long *)0x0) {
    lVar2 = plStack_50[1];
    for (lVar6 = *plStack_50; lVar6 != lVar2; lVar6 = lVar6 + 8) {
      lVar5 = lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010c26a8e0();
      _objc_release(lVar5);
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106ec47c8; end: 106ec47ef; -[SCSpectaclesTaskQueueListenerAnnouncer .cxx_destruct] */

void FUN_106ec47c8(long param_1)

{
  FUN_106ec4824(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 8);
  return;
}



/* Entry: 106ec47f0; end: 106ec480f; -[SCSpectaclesTaskQueueListenerAnnouncer .cxx_construct] */

void FUN_106ec47f0(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}



/* Entry: 106ec4810; end: 106ec4823;  */

undefined * FUN_106ec4810(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  
  puVar4 = &DAT_10f62a4d8;
  func_0x000104bd47e8();
  plVar6 = *(long **)(puVar4 + 8);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return puVar4;
}



/* Entry: 106ec4824; end: 106ec487b;  */

long FUN_106ec4824(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 106ec487c; end: 106ec488b;  */

void FUN_106ec487c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110982388;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 106ec488c; end: 106ec48ab;  */

void FUN_106ec488c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110982388;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 106ec48ac; end: 106ec4913;  */

void FUN_106ec48ac(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    lVar1 = lVar3;
    if (lVar3 != lVar2) {
      do {
        lVar2 = lVar2 + -8;
        _objc_destroyWeak(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *(long *)(param_1 + 0x18);
    }
    *(long *)(param_1 + 0x20) = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 106ec4914; end: 106ec4917;  */

void FUN_106ec4914(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 106ec4918; end: 106ec4923; -[SCSpectaclesServerNetworkingServices .cxx_destruct] */

void FUN_106ec4918(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106ec4924; end: 106ec4aab; -[SCAsyncQueueTimer initWithTimeInterval:repeats:block:queue:] */

undefined8 *
FUN_106ec4924(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126f7b90;
  puVar1 = &uStack_60;
  uStack_60 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126c18e0;
    _objc_opt_new(PTR_PTR_1126c18e0);
    func_0x000106ec5470(puVar1,puVar2);
    _objc_release(puVar2);
    _objc_initWeak(auStack_68,puVar1);
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_106ec4aac;
    puStack_98 = &UNK_110894020;
    _objc_copyWeak(auStack_80,auStack_68);
    uStack_70 = param_4;
    _objc_retain(param_5);
    uStack_88 = param_5;
    uStack_78 = param_1;
    _objc_retain(param_6);
    uVar3 = 0;
    uStack_90 = param_6;
    func_0x0001008553e8(0,&puStack_b0);
    uVar4 = puVar1[1];
    puVar1[1] = uVar3;
    _objc_release(uVar4);
    func_0x00010c0f7fe0(param_1,param_6);
    _objc_release(uStack_90);
    _objc_release(uStack_88);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  return puVar1;
}



/* Entry: 106ec4aac; end: 106ec4b17;  */

void FUN_106ec4aac(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
      func_0x00010c069d00(lVar1);
    }
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),lVar1);
    if (*(char *)(param_1 + 0x40) == '\x01') {
      func_0x00010c130c00(*(undefined8 *)(param_1 + 0x38),lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106ec4b18; end: 106ec4b97; +[SCAsyncQueueTimer scheduledTimerWithTimeInterval:repeats:block:queue:] */

void FUN_106ec4b18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_alloc(param_2);
  func_0x00010c052320(param_1);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 106ec4b98; end: 106ec4c8b; +[SCAsyncQueueTimer scheduledTimerWithTimeInterval:repeats:target:selector:queue:] */

void FUN_106ec4b98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  _objc_retain(param_5);
  _objc_retain(param_7);
  uVar1 = param_5;
  FUN_106ec4c8c(param_5,param_6);
  if ((int)uVar1 == 0) {
    param_2 = 0;
  }
  else {
    _objc_alloc(param_2);
    _objc_retain(param_5);
    func_0x00010c052320(param_1,param_2);
    _objc_release(param_5);
  }
  _objc_release(param_7);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 106ec4c8c; end: 106ec4d1f;  */

bool FUN_106ec4c8c(char *param_1,undefined8 param_2)

{
  bool bVar1;
  char *pcVar2;
  
  func_0x00010c0cca80(param_1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = param_1;
  _objc_retainAutorelease();
  func_0x00010c0cca40();
  if (((*pcVar2 == 'v') && (pcVar2[1] == '\0')) &&
     (pcVar2 = param_1, func_0x00010c0dea80(), pcVar2 == (char *)0x3)) {
    pcVar2 = param_1;
    _objc_retainAutorelease();
    func_0x00010bfc2760();
    if (*pcVar2 == '@') {
      bVar1 = pcVar2[1] == '\0';
      goto LAB_106ec4d08;
    }
  }
  bVar1 = false;
LAB_106ec4d08:
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 106ec4d20; end: 106ec4d2f;  */

void FUN_106ec4d20(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_2);
  _objc_retain(pcVar1);
  pcVar3 = pcVar1;
  func_0x00010c0cc960();
  (*pcVar3)(pcVar1,uVar2,param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar1);
  return;
}



/* Entry: 106ec4d30; end: 106ec4d97;  */

void FUN_106ec4d30(code *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  pcVar1 = param_1;
  func_0x00010c0cc960();
  (*pcVar1)(param_1,param_2,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ec4d98; end: 106ec4ecb; +[SCAsyncQueueTimer scheduledTimerWithTimeInterval:repeats:weakTarget:selector:queue:] */

void FUN_106ec4d98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_5);
  _objc_retain(param_7);
  uVar1 = param_5;
  FUN_106ec4c8c(param_5,param_6);
  if ((int)uVar1 == 0) {
    param_2 = 0;
  }
  else {
    _objc_initWeak(auStack_58,param_5);
    _objc_alloc(param_2);
    _objc_copyWeak(auStack_68,auStack_58);
    uStack_60 = param_6;
    func_0x00010c052320(param_1,param_2);
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_7);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 106ec4ecc; end: 106ec4f27;  */

void FUN_106ec4ecc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    FUN_106ec4d30(lVar1,*(undefined8 *)(param_1 + 0x28),param_2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106ec4f28; end: 106ec4f37; -[SCAsyncQueueTimer isValid] */

bool FUN_106ec4f28(long param_1)

{
  return *(long *)(param_1 + 8) != 0;
}



/* Entry: 106ec4f38; end: 106ec4f7f; -[SCAsyncQueueTimer invalidate] */

void FUN_106ec4f38(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 8) != 0) {
    _dispatch_block_cancel();
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 106ec4f80; end: 106ec4fb3; -[SCAsyncQueueTimer retainSelf] */

void FUN_106ec4f80(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 8) != 0) {
    _objc_retain();
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 106ec4fb4; end: 106ec4fcb; -[SCAsyncQueueTimer repeatWithTimeInterval:queue:] */

void FUN_106ec4fb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(long *)(param_1 + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0f7ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_3,PTR_s_perform_after__11261ba18,*(long *)(param_1 + 8));
    return;
  }
  return;
}



/* Entry: 106ec4fcc; end: 106ec4ffb; -[SCAsyncQueueTimer .cxx_destruct] */

void FUN_106ec4fcc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106ec4ffc; end: 106ec5077; -[SCConfigurableProxy initWithTarget:block:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106ec4ffc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112760c44;
  _objc_retain(param_4);
  _objc_storeWeak(param_1 + lVar3,param_3);
  uVar1 = param_4;
  _objc_retainBlock();
  _objc_release(param_4);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112760c48);
  *(undefined8 *)(param_1 + _DAT_112760c48) = uVar1;
  _objc_release(uVar2);
  return param_1;
}



/* Entry: 106ec5078; end: 106ec50bf; -[SCConfigurableProxy isKindOfClass:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_106ec5078(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_112760c44;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  _objc_opt_isKindOfClass();
  _objc_release(param_1);
  return (uint)lVar1 & 1;
}



/* Entry: 106ec50c0; end: 106ec517f; -[SCConfigurableProxy conformsToProtocol:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106ec50c0(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_copyWeak(auStack_38,param_1 + _DAT_112760c44);
  if (param_3 == 0) {
    bVar1 = false;
  }
  else {
    puVar2 = auStack_38;
    _objc_loadWeakRetained();
    puVar3 = puVar2;
    func_0x00010010fab4();
    if ((int)puVar3 == 0) {
      bVar1 = false;
    }
    else {
      puVar3 = auStack_38;
      _objc_loadWeakRetained(puVar3);
      _objc_release();
      bVar1 = puVar3 != (undefined1 *)0x0;
    }
    _objc_release(puVar2);
  }
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 106ec5180; end: 106ec51c7; -[SCConfigurableProxy respondsToSelector:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_106ec5180(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_112760c44;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  _objc_opt_respondsToSelector();
  _objc_release(param_1);
  return (uint)lVar1 & 1;
}



/* Entry: 106ec51c8; end: 106ec51cf; -[SCConfigurableProxy forwardingTargetForSelector:] */

undefined8 FUN_106ec51c8(void)

{
  return 0;
}



/* Entry: 106ec51d0; end: 106ec521f; -[SCConfigurableProxy methodSignatureForSelector:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ec51d0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_112760c44;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0cca80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106ec5220; end: 106ec5237; -[SCConfigurableProxy forwardInvocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ec5220(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000106ec5234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + _DAT_112760c48) + 0x10))
            (*(long *)(param_1 + _DAT_112760c48),param_3);
  return;
}



/* Entry: 106ec5238; end: 106ec5273; -[SCConfigurableProxy .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ec5238(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112760c48,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112760c44);
  return;
}



/* Entry: 106ec5274; end: 106ec5317; -[SCDeferredSubject initWithTarget:context:] */

undefined1 *
FUN_106ec5274(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f7b98;
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



/* Entry: 106ec5318; end: 106ec53a7; -[SCDeferredSubject next:] */

void FUN_106ec5318(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106ec53a8;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010bf6ab00(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106ec53a8; end: 106ec53b3;  */

void FUN_106ec53a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),PTR_s_next__112614028,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106ec53b4; end: 106ec540b; -[SCDeferredSubject complete] */

void FUN_106ec53b4(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106ec540c;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010bf6ab00(*(undefined8 *)(param_1 + 0x10),param_2,&puStack_38);
  return;
}



/* Entry: 106ec540c; end: 106ec5417;  */

void FUN_106ec540c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),PTR_s_complete_1125ae760);
  return;
}



/* Entry: 106ec5418; end: 106ec543f; -[SCDeferredSubject wrappedSubject] */

void FUN_106ec5418(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106ec5440; end: 106ec54c7; -[SCDeferredSubject .cxx_destruct] */

void FUN_106ec5440(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106ec54c8; end: 106ec54ef;  */

undefined ** FUN_106ec54c8(undefined8 param_1,int param_2)

{
  undefined **ppuVar1;
  
  func_0x000106ec5b70();
  ppuVar1 = (undefined **)0x0;
  if (param_2 == 0) {
    ppuVar1 = &PTR___NSConcreteGlobalBlock_110982488;
  }
  return ppuVar1;
}



/* Entry: 106ec54f0; end: 106ec5597;  */

void FUN_106ec54f0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = param_2;
  _objc_getAssociatedObject(param_2,0x106ec5470);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf96920();
  _objc_retain(uVar1);
  (**(code **)(param_3 + 0x10))(param_3);
  func_0x00010bf9b400(uVar1);
  _objc_release(uVar1);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106ec5598; end: 106ec5607; -[SCExclusiveAccessContext init] */

undefined1 * FUN_106ec5598(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f7ba0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = 0;
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106ec5608; end: 106ec562f; -[SCExclusiveAccessContext enter] */

void FUN_106ec5608(long param_1)

{
  _os_unfair_lock_assert_not_owner(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_lock_11034c780)(param_1 + 8);
  return;
}



/* Entry: 106ec5630; end: 106ec576b; -[SCExclusiveAccessContext exit] */

void FUN_106ec5630(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
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
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  puVar4 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _os_unfair_lock_assert_owner(param_1 + 8);
  lVar6 = *(long *)(param_1 + 0x10);
  _objc_retain(lVar6);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar1;
  _objc_release(uVar5);
  _os_unfair_lock_unlock(param_1 + 8);
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  _objc_retain(lVar6);
  lVar2 = lVar6;
  func_0x00010bf52a60(lVar6,param_2,&uStack_110,auStack_c8,0x10);
  if (lVar2 != 0) {
    lVar7 = *plStack_100;
    do {
      lVar8 = 0;
      do {
        if (*plStack_100 != lVar7) {
          _objc_enumerationMutation(lVar6);
        }
        (**(code **)(*(long *)(lStack_108 + lVar8 * 8) + 0x10))();
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = lVar6;
      puVar4 = &uStack_110;
      func_0x00010bf52a60(lVar6,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  _os_unfair_lock_assert_owner(lVar6 + 8);
  uVar5 = *(undefined8 *)(lVar6 + 0x10);
  puVar3 = (undefined1 *)puVar4;
  _objc_retainBlock(puVar4);
  _objc_release(puVar4);
  func_0x00010befa120(uVar5,param_2,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 106ec576c; end: 106ec57cb; -[SCExclusiveAccessContext defer:] */

void FUN_106ec576c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _os_unfair_lock_assert_owner(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = param_3;
  _objc_retainBlock(param_3);
  _objc_release(param_3);
  func_0x00010befa120(uVar2,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ec57cc; end: 106ec57d3; -[SCExclusiveAccessContext assertEntered] */

void FUN_106ec57cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_assert_owner_11034c778)(param_1 + 8);
  return;
}



/* Entry: 106ec57d4; end: 106ec57db; -[SCExclusiveAccessContext assertNotEntered] */

void FUN_106ec57d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_assert_not_owner_11034c770)(param_1 + 8);
  return;
}



/* Entry: 106ec57dc; end: 106ec57e3; -[SCExclusiveAccessContext setUsesTestFlagForAsserts:] */

void FUN_106ec57dc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 106ec57e4; end: 106ec57ef; -[SCExclusiveAccessContext .cxx_destruct] */

void FUN_106ec57e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106ec57f0; end: 106ec595f;  */

void FUN_106ec57f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126d3170;
  _objc_alloc(PTR_PTR_1126d3170);
  _objc_retain(param_1);
  _objc_retain(param_2);
  func_0x00010c0509e0(puVar1);
  _objc_release(param_1);
  _objc_release(param_2);
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106ec5960; end: 106ec596b;  */

void FUN_106ec5960(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c06ae50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_invokeWithTarget__1125f85a0,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106ec596c; end: 106ec5a6f;  */

void FUN_106ec596c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126d3170;
  _objc_alloc(PTR_PTR_1126d3170);
  _objc_retain(param_2);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0509e0(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106ec5a70; end: 106ec5b33;  */

void FUN_106ec5a70(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  func_0x00010c13dce0(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  _objc_retain(param_2);
  func_0x00010bf6ab00(uVar1);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 106ec5b34; end: 106ec5bb3;  */

void FUN_106ec5b34(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c06ae40(*(undefined8 *)(param_1 + 0x20),param_2,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106ec5bb4; end: 106ec5d6f;  */

void FUN_106ec5bb4(ulong param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = param_1;
  _objc_opt_class();
  uVar2 = uVar1;
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfda7c0();
  if ((uVar3 & 1) == 0) {
    lVar4 = param_2;
    func_0x00010c25ce40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    _NSClassFromString();
    if (lVar5 == 0) {
      lVar5 = lVar4;
      _objc_retainAutorelease(lVar4);
      func_0x00010bdc3520();
      uVar3 = uVar1;
      _objc_allocateClassPair(uVar1,lVar5,0);
      if (uVar3 != 0) {
        puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_78 = 0xc2000000;
        pcStack_70 = FUN_106ec5e0c;
        puStack_68 = &UNK_110982508;
        _objc_retain(param_3);
        uStack_60 = param_3;
        uStack_58 = uVar3;
        FUN_106ec5d70(uVar1,&puStack_80);
        _objc_registerClassPair(uVar3);
        _object_setClass(param_1,uVar3);
        _objc_release(uStack_60);
      }
    }
    else {
      _object_setClass(param_1);
    }
    _objc_release(lVar4);
  }
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  return;
}



/* Entry: 106ec5d70; end: 106ec5e0b;  */

void FUN_106ec5d70(long param_1,long param_2)

{
  ulong uVar1;
  uint uStack_34;
  
  _objc_retain(param_2);
  _class_copyMethodList(param_1,&uStack_34);
  if (uStack_34 != 0) {
    uVar1 = 0;
    do {
      (**(code **)(param_2 + 0x10))(param_2,*(undefined8 *)(param_1 + uVar1 * 8));
      uVar1 = uVar1 + 1;
    } while (uVar1 < uStack_34);
  }
  _free(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 106ec5e0c; end: 106ec602b;  */

void FUN_106ec5e0c(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  uVar1 = param_2;
  _method_getName();
  if (lRam00000001136c7fe8 != -1) {
    func_0x00010002a2fc(0x1136c7fe8,&PTR___NSConcreteGlobalBlock_110982538);
  }
  uVar3 = uVar1;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uRam00000001136c7fe0;
  func_0x00010bf4b900();
  if (((uVar2 & 1) == 0) && (uVar2 = uVar3, func_0x00010bfda7c0(), (uVar2 & 1) == 0)) {
    uVar2 = uVar3;
    func_0x00010bfda7c0();
    _objc_release(uVar3);
    if ((uVar2 & 1) != 0) {
      return;
    }
    uVar3 = *(ulong *)(param_1 + 0x20);
    (**(code **)(uVar3 + 0x10))(uVar3,uVar1);
    _objc_retainAutoreleasedReturnValue();
    if (uVar3 != 0) {
      if (lRam00000001136c7ff8 != -1) {
        func_0x00010002a2fc(0x1136c7ff8,&PTR___NSConcreteGlobalBlock_110982598);
      }
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _method_getTypeEncoding(param_2);
      func_0x00010c25da80(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c14dde0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      lVar6 = lRam00000001136c7ff0;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      if (lVar6 != 0) {
        uVar2 = param_2;
        _method_getImplementation(param_2);
        lVar7 = lVar6;
        (**(code **)(lVar6 + 0x10))(lVar6,uVar1,uVar2,uVar3);
        uVar8 = *(undefined8 *)(param_1 + 0x28);
        _method_getTypeEncoding(param_2);
        _class_addMethod(uVar8,uVar1,lVar7,param_2);
      }
      _objc_release(lVar6);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}


