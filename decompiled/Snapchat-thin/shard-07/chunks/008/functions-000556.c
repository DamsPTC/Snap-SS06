/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105a5659c; end: 105a565b7; -[SCSpectaclesFlightManager _persistFlightModeSettingsToStorage] */

void FUN_105a5659c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d05d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_setObject_forKey_lifecycle__112651b98,
             *(undefined8 *)(param_1 + 0x20),&PTR____CFConstantStringClassReference_110e192b8,0);
  return;
}



/* Entry: 105a565b8; end: 105a565c7; -[SCSpectaclesFlightManager _publishFlightModeSettings] */

void FUN_105a565b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_next__112614028,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 105a565c8; end: 105a56697; -[SCSpectaclesFlightManager setDuration:flightMode:] */

void FUN_105a565c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be619e0(param_1,param_2,param_4,0,puVar1);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126c19b8;
  func_0x00010c19dcc0(PTR_PTR_1126c19b8,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c192d60(uVar2,param_2,puVar1,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a56698; end: 105a5676f; -[SCSpectaclesFlightManager setDistance:flightMode:] */

void FUN_105a56698(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be619e0(param_2,param_3,param_4,1,puVar1);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_2 + 8);
  puVar1 = PTR_PTR_1126c19b8;
  func_0x00010c19dd20(param_1,PTR_PTR_1126c19b8,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(uVar2,param_3,puVar1);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1909e0(uVar2,param_3,puVar1,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a56770; end: 105a5683b; -[SCSpectaclesFlightManager setCaptureMode:flightMode:] */

void FUN_105a56770(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be619e0(param_1);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126c19b8;
  func_0x00010c19dce0(PTR_PTR_1126c19b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(uVar2);
  _objc_release(puVar1);
  func_0x00010be18060(param_1);
  func_0x00010bea1b60(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c179090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_setCaptureMode_flightMode__11263be40,param_3,
             param_4);
  return;
}



/* Entry: 105a5683c; end: 105a568e7; -[SCSpectaclesFlightManager setTracking:flightMode:] */

void FUN_105a5683c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be619e0(param_1);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126c19b8;
  func_0x00010c19ddc0(PTR_PTR_1126c19b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c2192d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_setTracking_flightMode__112663ed8,param_3,param_4
            );
  return;
}



/* Entry: 105a568e8; end: 105a5697f; -[SCSpectaclesFlightManager setCustomFlightMode:] */

void FUN_105a568e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be619e0(param_1);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126c19b8;
  func_0x00010c19dd00(PTR_PTR_1126c19b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c188490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_setCustomFlightPath__11263fb40,param_3);
  return;
}



/* Entry: 105a56980; end: 105a56b7f; -[SCSpectaclesFlightManager _mutateFlightSettings:setting:value:] */

void FUN_105a56980(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126c19d0;
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar6,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c248b40(puVar2,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(puVar1);
  if (param_4 < 2) {
    if (param_4 == 0) {
      uVar6 = param_5;
      func_0x00010c2827c0(param_5);
      func_0x00010c2acb40(puVar2,param_2,uVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    else if (param_4 == 1) {
      func_0x00010bf885a0(param_5);
      func_0x00010c2ac800(puVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
  }
  else if (param_4 == 2) {
    uVar6 = param_5;
    func_0x00010c2827c0(param_5);
    func_0x00010c2aa160(puVar2,param_2,uVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  else if (param_4 == 3) {
    uVar6 = param_5;
    func_0x00010c2827c0(param_5);
    func_0x00010c2bbb00(puVar2,param_2,uVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  else if (param_4 == 4) {
    uVar6 = param_5;
    func_0x00010c2827c0(param_5);
    func_0x00010c2ae400(puVar2,param_2,uVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0d3c80();
  puVar1 = puVar2;
  func_0x00010bf21f60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar3,param_2,puVar1,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar1);
  uVar6 = uVar3;
  func_0x00010bf51e00();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar6;
  _objc_release(uVar5);
  func_0x00010be83fc0(param_1);
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105a56b80; end: 105a56c23; -[SCSpectaclesFlightManager _setAdjustmentsForCaptureMode:flightMode:flightPath:] */

void FUN_105a56b80(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  
  func_0x00010bdcf720(param_1,param_2,param_5);
  if (param_5 == 4) {
    if (param_3 - 2U < 2) {
      uVar1 = 0x4008000000000000;
    }
    else {
      if (param_3 != 1) {
        return;
      }
      uVar1 = 0x4012000000000000;
    }
                    /* WARNING: Could not recover jumptable at 0x00010c1909f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (uVar1,param_1,PTR_s_setDistance_flightMode__112641c98,param_4);
    return;
  }
  if ((param_5 == 1) && (param_3 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x00010c192d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_setDuration_flightMode__112642578,10,param_4);
    return;
  }
  return;
}



/* Entry: 105a56c24; end: 105a56d03; -[SCSpectaclesFlightManager _setDefaultAdjustmentsForCustomFlightMode] */

/* WARNING: Possible PIC construction at 0x000105a56cc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105a56cc4) */
/* WARNING: Removing unreachable block (ram,0x00010c2192c0) */

void FUN_105a56c24(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010be18060(param_1,param_2,5);
  if (lVar1 < 3) {
    if (lVar1 == 1) {
      func_0x00010c192d60(param_1);
      uVar2 = 3;
      goto code_r0x00010c179080;
    }
    if (lVar1 != 2) {
      return;
    }
    func_0x00010c192d60(param_1);
    uVar2 = 0x4004000000000000;
  }
  else {
    if (lVar1 == 3) {
      func_0x00010c192d60(param_1);
      uVar2 = 2;
      goto code_r0x00010c179080;
    }
    if (lVar1 != 4) {
      return;
    }
    uVar2 = 0x4008000000000000;
  }
  func_0x00010c1909e0(uVar2,param_1);
  uVar2 = 3;
code_r0x00010c179080:
                    /* WARNING: Could not recover jumptable at 0x00010c179090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setCaptureMode_flightMode__11263be40,uVar2,5)
  ;
  return;
}



/* Entry: 105a56d04; end: 105a56d67; -[SCSpectaclesFlightManager handleResponse:] */

void FUN_105a56d04(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c13bcc0();
  if (lVar1 - 1U < 4) {
    func_0x00010be2f3e0(param_1,param_2,param_3);
  }
  else if (lVar1 == 5) {
    func_0x00010be2e9a0(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a56d68; end: 105a56d6f; -[SCSpectaclesFlightManager responseMonitorState] */

undefined8 FUN_105a56d68(void)

{
  return 0;
}



/* Entry: 105a56d70; end: 105a56f1f; -[SCSpectaclesFlightManager _errorForResponse:] */

void FUN_105a56d70(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  _objc_retain(param_3);
  ppuVar1 = param_3;
  func_0x00010c13bcc0();
  if ((ppuVar1 < (undefined **)0x6) && ((1L << ((ulong)ppuVar1 & 0x3f) & 0x31U) != 0)) {
    param_1 = 0;
  }
  else {
    ppuVar1 = param_3;
    func_0x00010c134680();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar1;
    func_0x00010c27dd80();
    _objc_release(ppuVar1);
    ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
    if ((long)ppuVar2 < 0x6e) {
      if ((long)ppuVar2 < 0x60) {
        if (ppuVar2 == (undefined **)0x5e) {
          func_0x000109025cd8();
          _objc_retainAutoreleasedReturnValue();
          ppuVar3 = ppuVar1;
        }
        else if (ppuVar2 == (undefined **)0x5f) {
          func_0x000109025cc0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar3 = ppuVar1;
        }
      }
      else if (ppuVar2 == (undefined **)0x60) {
        func_0x000109025ca8();
        _objc_retainAutoreleasedReturnValue();
        ppuVar3 = ppuVar1;
      }
      else if (ppuVar2 == (undefined **)0x6d) {
        func_0x000109025d38();
        _objc_retainAutoreleasedReturnValue();
        ppuVar3 = ppuVar1;
      }
    }
    else if ((long)ppuVar2 < 0x70) {
      if (ppuVar2 == (undefined **)0x6e) {
        func_0x000109025d20();
        _objc_retainAutoreleasedReturnValue();
        ppuVar3 = ppuVar1;
      }
      else if (ppuVar2 == (undefined **)0x6f) {
        func_0x000109025d50();
        _objc_retainAutoreleasedReturnValue();
        ppuVar3 = ppuVar1;
      }
    }
    else if (ppuVar2 == (undefined **)0x70) {
      func_0x000109025d68();
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = ppuVar1;
    }
    else if (ppuVar2 == (undefined **)0x71) {
      func_0x000109025d08();
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = ppuVar1;
    }
    else {
      ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
      if (ppuVar2 == (undefined **)0x80) {
        func_0x000109025cf0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar3 = ppuVar1;
      }
    }
    ppuVar1 = param_3;
    func_0x00010c13bcc0(param_3);
    func_0x00010be0b280(param_1,param_2,ppuVar1,ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105a56f20; end: 105a56ffb; -[SCSpectaclesFlightManager _errorWithCode:message:] */

void FUN_105a56f20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  uStack_40 = param_4;
  _objc_retain(param_4);
  func_0x00010bf72080(puVar1,param_2,&uStack_40,&uStack_48,1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = &PTR____CFConstantStringClassReference_110e19298;
  func_0x00010bf99240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar6);
  ppuVar3 = ppuVar6;
  func_0x00010bfd72c0();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuVar5 = ppuVar6;
  if ((int)ppuVar3 == 0) {
    ppuVar3 = ppuVar6;
    func_0x00010bfd7320();
    if (((int)ppuVar3 == 0) ||
       (puVar4 = puVar1, func_0x00010be24f80(puVar1,param_2,ppuVar6),
       puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570, (int)puVar4 == 0)) goto LAB_105a570a0;
    uVar7 = *(undefined8 *)(puVar1 + 0x28);
    func_0x00010bfb2a80(ppuVar6);
  }
  else {
    uVar7 = *(undefined8 *)(puVar1 + 0x30);
    func_0x00010bfb2960(ppuVar6);
  }
  func_0x00010c0df840(puVar2,param_2,ppuVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar7,param_2,puVar2);
  _objc_release(puVar2);
LAB_105a570a0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar6);
  return;
}



/* Entry: 105a56ffc; end: 105a570b3; -[SCSpectaclesFlightManager _handlePushResponseMessage:] */

void FUN_105a56ffc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar4 = param_3;
  func_0x00010bfd72c0();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar3 = param_3;
  if ((int)uVar4 == 0) {
    uVar4 = param_3;
    func_0x00010bfd7320();
    if (((int)uVar4 == 0) ||
       (lVar2 = param_1, func_0x00010be24f80(param_1,param_2,param_3),
       puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570, (int)lVar2 == 0)) goto LAB_105a570a0;
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bfb2a80(param_3);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bfb2960(param_3);
  }
  func_0x00010c0df840(puVar1,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar4,param_2,puVar1);
  _objc_release(puVar1);
LAB_105a570a0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a570b4; end: 105a572a7; -[SCSpectaclesFlightManager _handleResponseMessage:] */

void FUN_105a570b4(undefined **param_1,undefined8 param_2,undefined *param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  ppuVar1 = param_1;
  func_0x00010be0af40(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_3;
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010c27dd80();
  _objc_release(puVar2);
  if ((ppuVar1 != (undefined **)0x0) && (puVar5 == (undefined *)0x80)) {
    func_0x00010c0d9840(param_1[8],param_2,ppuVar1);
  }
  puVar2 = param_3;
  func_0x00010c06b420();
  if ((int)puVar2 == 0) {
    puVar2 = param_3;
    func_0x00010bfd7320();
    puVar4 = param_3;
    if ((int)puVar2 == 0) {
      puVar2 = param_3;
      func_0x00010bfd72c0();
      if ((int)puVar2 == 0) {
        puVar2 = param_3;
        func_0x00010bf00000();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar2 != (undefined *)0x0) {
          puVar2 = param_3;
          func_0x00010bf00000();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = param_1[4];
          param_1[4] = puVar2;
          _objc_release(puVar5);
          func_0x00010be73180(param_1);
          func_0x00010be83fc0(param_1);
          goto LAB_105a57288;
        }
        if ((undefined *)0x4 < puVar5 + -0x6d) goto LAB_105a57288;
        if (ppuVar1 == (undefined **)0x0) {
          func_0x00010be73180(param_1);
          if (puVar5 == (undefined *)0x71) {
            func_0x00010bea34e0(param_1);
          }
          goto LAB_105a57288;
        }
        func_0x00010be1f220();
        puVar2 = param_1[9];
        ppuVar3 = ppuVar1;
        goto LAB_105a5715c;
      }
      puVar5 = param_3;
      func_0x00010bfb2960();
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if (puVar5 == (undefined *)0x0) goto LAB_105a57288;
      puVar5 = param_1[6];
      func_0x00010bfb2960(param_3);
    }
    else {
      ppuVar3 = param_1;
      func_0x00010be24f80(param_1,param_2,param_3);
      if (((int)ppuVar3 == 0) ||
         (puVar5 = param_3, func_0x00010bfb2a80(), puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570,
         puVar5 == (undefined *)0x0)) goto LAB_105a57288;
      puVar5 = param_1[5];
      func_0x00010bfb2a80(param_3);
    }
    func_0x00010c0df840(puVar2,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(puVar5,param_2,puVar2);
    _objc_release(puVar2);
  }
  else {
    if (ppuVar1 != (undefined **)0x0) goto LAB_105a57288;
    func_0x00010bea4be0(param_1,param_2,1);
    func_0x00010bebf4c0(param_1);
    puVar2 = param_1[5];
    ppuVar3 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c2428;
LAB_105a5715c:
    func_0x00010c0d9840(puVar2,param_2,ppuVar3);
  }
LAB_105a57288:
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a572a8; end: 105a572af; -[SCSpectaclesFlightManager _setIsAbortingFlight:] */

void FUN_105a572a8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x58) = param_3;
  return;
}



/* Entry: 105a572b0; end: 105a572bf; -[SCSpectaclesFlightManager _broadcastStandbyFlightStatus] */

void FUN_105a572b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_next__112614028,
             &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c2440);
  return;
}



/* Entry: 105a572c0; end: 105a573ab; -[SCSpectaclesFlightManager _startAbortingFlightTimer] */

void FUN_105a572c0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x105a5736c;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  uVar1 = 0;
  func_0x0001008553e8(0,&puStack_50);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  _objc_release(uVar2);
  func_0x000100c749e0(0x40e00000,"APPSTORE",*(undefined8 *)(param_1 + 0x50));
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105a573ac; end: 105a573e7; -[SCSpectaclesFlightManager _cancelFlightTimer] */

void FUN_105a573ac(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    _dispatch_block_cancel();
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x50) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 105a573e8; end: 105a5743f; -[SCSpectaclesFlightManager _handleAbortFlightStateIfNeeded:] */

byte FUN_105a573e8(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x58);
  if ((bVar1 == 1) && (func_0x00010bfb2a80(), param_3 == 3)) {
    func_0x00010bea4be0(param_1,param_2,0);
    func_0x00010bdda880(param_1);
    func_0x00010bdd58c0(param_1);
  }
  return bVar1 ^ 1;
}



/* Entry: 105a57440; end: 105a57447; -[SCSpectaclesFlightManager flightStatus] */

undefined8 FUN_105a57440(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105a57448; end: 105a5744f; -[SCSpectaclesFlightManager flightMode] */

undefined8 FUN_105a57448(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105a57450; end: 105a57457; -[SCSpectaclesFlightManager flightSettingsDict] */

undefined8 FUN_105a57450(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 105a57458; end: 105a5745f; -[SCSpectaclesFlightManager setSettingError] */

undefined8 FUN_105a57458(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 105a57460; end: 105a57467; -[SCSpectaclesFlightManager getSettingError] */

undefined8 FUN_105a57460(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 105a57468; end: 105a574f7; -[SCSpectaclesFlightManager .cxx_destruct] */

void FUN_105a57468(long param_1)

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



/* Entry: 105a574f8; end: 105a57703; -[SCSpectaclesFlightServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a574f8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  lVar7 = (long)_DAT_11272e010;
  lVar1 = param_1 + lVar7;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c263740();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar6 = PTR_PTR_1126ae720;
  if ((int)lVar3 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010bf11fe0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1 + lVar7;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf48c40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar6;
    func_0x00010c269d40(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befb0c0(lVar2);
    _objc_release(puVar4);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar7 = param_1 + lVar7;
    _objc_loadWeakRetained(lVar7);
    lVar1 = lVar7;
    func_0x00010bf48c40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar6;
    func_0x00010c269d40(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befac20(lVar1);
    _objc_release(puVar4);
    _objc_release(lVar1);
    _objc_release(lVar7);
    _objc_destroyWeak(auStack_60);
  }
  uVar5 = *(undefined8 *)(param_1 + _DAT_11272e014);
  puVar4 = PTR_PTR_1126c19d8;
  _objc_alloc(PTR_PTR_1126c19d8);
  func_0x00010c013820();
  func_0x00010bf9d660(uVar5);
  _objc_release(puVar4);
  _objc_release(puVar6);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 105a57704; end: 105a57743;  */

void FUN_105a57704(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdedd60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105a57744; end: 105a578c7; -[SCSpectaclesFlightServicesEntryPoint _createFlightManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a57744(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  
  puVar1 = PTR_PTR_1126c19e0;
  _objc_alloc(PTR_PTR_1126c19e0);
  lVar2 = param_1 + _DAT_11272e018;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = (long)_DAT_11272e010;
  lVar5 = param_1 + lVar9;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c15e740();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff86e0(puVar1,param_2,lVar4,lVar7);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar8 = PTR_PTR_1126c19e8;
  _objc_alloc(PTR_PTR_1126c19e8);
  lVar2 = param_1 + lVar9;
  _objc_loadWeakRetained(lVar2);
  lVar5 = lVar2;
  func_0x00010bf48c40();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar9;
  _objc_loadWeakRetained(param_1);
  lVar3 = param_1;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c002160(puVar8,param_2,lVar5,lVar3,puVar1);
  _objc_release(lVar3);
  _objc_release(param_1);
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 105a578c8; end: 105a5790f; -[SCSpectaclesFlightServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a578c8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272e014,0);
  _objc_destroyWeak(param_1 + _DAT_11272e010);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272e018);
  return;
}



/* Entry: 105a57910; end: 105a579b3; -[SCSpectaclesFlightSettingsLogger initWithBlizzardLogger:deviceSerialNumber:] */

undefined1 *
FUN_105a57910(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126eb718;
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



/* Entry: 105a579b4; end: 105a57a63; -[SCSpectaclesFlightSettingsLogger _logEventWithSettingsName:settingsValue:settingsUnit:flightPath:] */

void FUN_105a579b4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c19f0;
  _objc_retain(param_5);
  _objc_alloc_init(puVar1);
  func_0x00010c19dda0();
  func_0x00010c1fe500(puVar1,param_3,param_4);
  func_0x00010c1fe5e0(param_1,puVar1);
  func_0x00010c1fe5a0(puVar1,param_3,param_5);
  _objc_release(param_5);
  func_0x00010c18c9a0(puVar1,param_3,*(undefined8 *)(param_2 + 0x10));
  func_0x00010c0b2e60(*(undefined8 *)(param_2 + 8),param_3,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a57a64; end: 105a57abb; -[SCSpectaclesFlightSettingsLogger setDistance:flightMode:] */

void FUN_105a57a64(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  func_0x00010bf885a0(param_3);
  if (param_4 - 1U < 5) {
    uVar1 = *(undefined8 *)(&UNK_10ddca000 + (param_4 - 1U) * 8);
  }
  else {
    uVar1 = 0xffffffffffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be52d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logEventWithSettingsName_settin_1125724e8,1,
             &PTR____CFConstantStringClassReference_110e192d8,uVar1);
  return;
}



/* Entry: 105a57abc; end: 105a57b13; -[SCSpectaclesFlightSettingsLogger setDuration:flightMode:] */

void FUN_105a57abc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  func_0x00010bf885a0(param_3);
  if (param_4 - 1U < 5) {
    uVar1 = *(undefined8 *)(&UNK_10ddca000 + (param_4 - 1U) * 8);
  }
  else {
    uVar1 = 0xffffffffffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be52d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logEventWithSettingsName_settin_1125724e8,0,
             &PTR____CFConstantStringClassReference_110e192f8,uVar1);
  return;
}



/* Entry: 105a57b14; end: 105a57b63; -[SCSpectaclesFlightSettingsLogger setCaptureMode:flightMode:] */

void FUN_105a57b14(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  if (param_3 < 4) {
    ppuVar1 = (undefined **)(&PTR_PTR_1108cf7e8)[param_3];
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dfd2f8;
  }
  if (param_4 - 1U < 5) {
    uVar2 = *(undefined8 *)(&UNK_10ddca000 + (param_4 - 1U) * 8);
  }
  else {
    uVar2 = 0xffffffffffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be52d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            ((double)param_3,param_1,PTR_s__logEventWithSettingsName_settin_1125724e8,2,ppuVar1,
             uVar2);
  return;
}



/* Entry: 105a57b64; end: 105a57ba3; -[SCSpectaclesFlightSettingsLogger setTracking:flightMode:] */

void FUN_105a57b64(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_4 - 1U < 5) {
    uVar1 = *(undefined8 *)(&UNK_10ddca000 + (param_4 - 1U) * 8);
  }
  else {
    uVar1 = 0xffffffffffffffff;
  }
  uVar2 = 0x3ff0000000000000;
  if (param_3 < 2) {
    uVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be52d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar2,param_1,PTR_s__logEventWithSettingsName_settin_1125724e8,3,
             &PTR____CFConstantStringClassReference_110defbd8,uVar1);
  return;
}



/* Entry: 105a57ba4; end: 105a57bff; -[SCSpectaclesFlightSettingsLogger setCustomFlightPath:] */

void FUN_105a57ba4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c19c8;
  func_0x00010c271320(PTR_PTR_1126c19c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be52d20((double)param_3,param_1,param_2,4,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a57c00; end: 105a57c2f; -[SCSpectaclesFlightSettingsLogger .cxx_destruct] */

void FUN_105a57c00(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105a57c30; end: 105a57cd7; -[SCSpectaclesFlightImuCalibrationRPCManager initWithConnectionHub:] */

undefined1 * FUN_105a57c30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126eb720;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    func_0x00010befb0c0(*(undefined8 *)((long)puVar1 + 8));
    func_0x00010befac20(*(undefined8 *)((long)puVar1 + 8));
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105a57cd8; end: 105a57d1b; -[SCSpectaclesFlightImuCalibrationRPCManager startFlightImuCalibrationRequest] */

void FUN_105a57cd8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010c24ecc0(PTR_PTR_1126b6718);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a57d1c; end: 105a57d5f; -[SCSpectaclesFlightImuCalibrationRPCManager stopFlightImuCalibrationRequest] */

void FUN_105a57d1c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010c256000(PTR_PTR_1126b6718);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a57d60; end: 105a57da3; -[SCSpectaclesFlightImuCalibrationRPCManager restartCheeriosRequest] */

void FUN_105a57d60(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010bf70e60(PTR_PTR_1126b6718);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a57da4; end: 105a57f2f; -[SCSpectaclesFlightImuCalibrationRPCManager handleResponse:] */

void FUN_105a57da4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c13bcc0();
  if (lVar1 == 5) {
    func_0x00010be2e920(param_1,param_2,param_3);
    goto LAB_105a57f18;
  }
  lVar1 = param_3;
  func_0x00010c13bcc0();
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (lVar1 == 4) {
    puVar3 = (undefined *)0x0;
  }
  else {
    lVar1 = param_3;
    func_0x00010c13bcc0(param_3);
    func_0x00010bf99240(puVar3,param_2,&PTR____CFConstantStringClassReference_110e19358,lVar1,0);
    _objc_retainAutoreleasedReturnValue();
  }
  lVar1 = param_3;
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c27dd80();
  _objc_release(lVar1);
  if (lVar2 == 0x82) {
    param_1 = param_1 + 0x18;
    _objc_loadWeakRetained(param_1);
    func_0x00010bfb28e0();
LAB_105a57f08:
    _objc_release(param_1);
  }
  else {
    lVar1 = param_3;
    func_0x00010c134680();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c27dd80();
    _objc_release(lVar1);
    if (lVar2 == 0x83) {
      param_1 = param_1 + 0x18;
      _objc_loadWeakRetained(param_1);
      func_0x00010bfb2900();
      goto LAB_105a57f08;
    }
    lVar1 = param_3;
    func_0x00010c134680();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c27dd80();
    _objc_release(lVar1);
    if (lVar2 == 7) {
      param_1 = param_1 + 0x18;
      _objc_loadWeakRetained(param_1);
      func_0x00010bfb28c0();
      goto LAB_105a57f08;
    }
  }
  _objc_release(puVar3);
LAB_105a57f18:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a57f30; end: 105a57fbb; -[SCSpectaclesFlightImuCalibrationRPCManager _handlePushMessage:] */

void FUN_105a57f30(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c13bcc0();
  if (lVar1 == 5) {
    lVar1 = param_3;
    func_0x00010bfeacc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      lVar1 = param_3;
      func_0x00010bfeacc0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar2,param_2,lVar1);
      _objc_release(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a57fbc; end: 105a57fc3; -[SCSpectaclesFlightImuCalibrationRPCManager responseMonitorState] */

undefined8 FUN_105a57fbc(void)

{
  return 0;
}



/* Entry: 105a57fc4; end: 105a57fcb; -[SCSpectaclesFlightImuCalibrationRPCManager flightImuCalibrationStatusEventObservable] */

undefined8 FUN_105a57fc4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105a57fcc; end: 105a57fe3; -[SCSpectaclesFlightImuCalibrationRPCManager delegate] */

void FUN_105a57fcc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105a57fe4; end: 105a57fef; -[SCSpectaclesFlightImuCalibrationRPCManager setDelegate:] */

void FUN_105a57fe4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 105a57ff0; end: 105a58027; -[SCSpectaclesFlightImuCalibrationRPCManager .cxx_destruct] */

void FUN_105a57ff0(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105a58028; end: 105a58193; -[SCSpectaclesFlightImuCalibrationServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a58028(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar1 = param_1 + _DAT_11272e030;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf70e00();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar4 == 1) {
    _objc_initWeak(auStack_48,param_1);
    puVar7 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010bf11fe0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  else {
    puVar7 = (undefined *)0x0;
  }
  uVar6 = *(undefined8 *)(param_1 + _DAT_11272e034);
  puVar5 = PTR_PTR_1126c19f8;
  _objc_alloc(PTR_PTR_1126c19f8);
  func_0x00010c0137e0();
  func_0x00010bf9d660(uVar6);
  _objc_release(puVar5);
  _objc_release(puVar7);
  return;
}



/* Entry: 105a58194; end: 105a581d3;  */

void FUN_105a58194(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be18040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105a581d4; end: 105a5824f; -[SCSpectaclesFlightImuCalibrationServicesEntryPoint _flightImuCalibrationRPCManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a581d4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126c1a00;
  _objc_alloc(PTR_PTR_1126c1a00);
  param_1 = param_1 + _DAT_11272e030;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf48c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c002100(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105a58250; end: 105a5828b; -[SCSpectaclesFlightImuCalibrationServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a58250(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272e034,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272e030);
  return;
}



/* Entry: 105a5828c; end: 105a5841b; -[SCSpectaclesKioskModeEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a5828c(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  lVar2 = param_1 + _DAT_11272e038;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c074bc0();
  iVar1 = (int)lVar5;
  if (iVar1 == 0) {
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  else {
    func_0x00010b6fc140();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    puVar8 = PTR_PTR_1126ae720;
    if (iVar1 != 0) {
      _objc_copyWeak(auStack_50,auStack_48);
      func_0x00010bf11fe0(puVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_destroyWeak(auStack_50);
      goto LAB_105a58398;
    }
  }
  puVar8 = (undefined *)0x0;
LAB_105a58398:
  uVar7 = *(undefined8 *)(param_1 + _DAT_11272e03c);
  puVar6 = PTR_PTR_1126c1a08;
  _objc_alloc(PTR_PTR_1126c1a08);
  func_0x00010c021220();
  func_0x00010bf9d660(uVar7);
  _objc_release(puVar6);
  _objc_release(puVar8);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105a5841c; end: 105a5845b;  */

void FUN_105a5841c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdeee80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105a5845c; end: 105a5865b; -[SCSpectaclesKioskModeEntryPoint _createKioskModeManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a5845c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  lVar1 = param_1 + _DAT_11272e040;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar5 = PTR_PTR_1126c1a10;
  _objc_alloc();
  lVar12 = (long)_DAT_11272e038;
  lVar1 = param_1 + lVar12;
  _objc_loadWeakRetained();
  lVar6 = lVar1;
  func_0x00010bf48c40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + _DAT_11272e044;
  _objc_loadWeakRetained();
  lVar7 = lVar2;
  func_0x00010bfedac0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_11272e048;
  _objc_loadWeakRetained(lVar3);
  lVar8 = lVar3;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar12;
  _objc_loadWeakRetained(param_1);
  lVar12 = param_1;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar12;
  func_0x00010bfa1c80();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c105b80();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0021a0(puVar5,param_2,lVar6,lVar4,lVar7,lVar8,lVar11);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar12);
  _objc_release(param_1);
  _objc_release(lVar8);
  _objc_release(lVar3);
  _objc_release(lVar7);
  _objc_release(lVar2);
  _objc_release(lVar6);
  _objc_release(lVar1);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105a5865c; end: 105a586bb; -[SCSpectaclesKioskModeEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a5865c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272e03c,0);
  _objc_destroyWeak(param_1 + _DAT_11272e048);
  _objc_destroyWeak(param_1 + _DAT_11272e044);
  _objc_destroyWeak(param_1 + _DAT_11272e040);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272e038);
  return;
}



/* Entry: 105a586bc; end: 105a58743; -[SCSpectaclesKioskModeManager setGetSettingsForCategoryRequest:] */

void FUN_105a586bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(long *)(param_1 + 0xb8) != 0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a58744; end: 105a587cb; -[SCSpectaclesKioskModeManager setGetAvailableLensRequest:] */

void FUN_105a58744(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(long *)(param_1 + 0xc0) != 0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a587cc; end: 105a58853; -[SCSpectaclesKioskModeManager setSetKioskModeEnabledRequest:] */

void FUN_105a587cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(param_1 + 200) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(long *)(param_1 + 200) != 0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a58854; end: 105a588db; -[SCSpectaclesKioskModeManager setSetActiveLensIdRequest:] */

void FUN_105a58854(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(long *)(param_1 + 0xd0) != 0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a588dc; end: 105a58c33; -[SCSpectaclesKioskModeManager initWithConnectionHub:performer:lensInfoCardProvider:notificationPool:powerStateManager:] */

undefined1 *
FUN_105a588dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_68 = PTR_PTR_1126eb728;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined **)((long)puVar1 + 0x60) = puVar3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x60);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar2);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined **)((long)puVar1 + 0x68) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined **)((long)puVar1 + 0x70) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x78);
    *(undefined **)((long)puVar1 + 0x78) = puVar3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x78);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar2);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x80);
    *(undefined **)((long)puVar1 + 0x80) = puVar3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x80);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar2);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x88);
    *(undefined **)((long)puVar1 + 0x88) = puVar3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x88);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar2);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x90);
    *(undefined **)((long)puVar1 + 0x90) = puVar3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x90);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar2);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x98);
    *(undefined **)((long)puVar1 + 0x98) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0xa0);
    *(undefined **)((long)puVar1 + 0xa0) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0xa8);
    *(undefined **)((long)puVar1 + 0xa8) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0xb0);
    *(undefined **)((long)puVar1 + 0xb0) = puVar3;
    _objc_release(uVar2);
    func_0x00010befb0c0(*(undefined8 *)((long)puVar1 + 8));
    func_0x00010c135aa0(puVar1);
    func_0x00010c134b20(puVar1);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105a58c34; end: 105a58c5b; -[SCSpectaclesKioskModeManager currentActiveLensId] */

void FUN_105a58c34(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105a58c5c; end: 105a58d37; -[SCSpectaclesKioskModeManager requestKioskModeSettings] */

void FUN_105a58c5c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bf5fb60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c11cbc0();
  _objc_release(lVar1);
  if (lVar2 == 1) {
    _objc_initWeak(auStack_38,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c0f7fc0(uVar3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 105a58d38; end: 105a58de3;  */

void FUN_105a58d38(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010bfca2c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      puVar2 = PTR_PTR_1126b6718;
      func_0x00010bfca300(PTR_PTR_1126b6718,param_2,2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a3820(param_1,param_2,puVar2);
      _objc_release(puVar2);
      uVar3 = *(undefined8 *)(param_1 + 8);
      lVar1 = param_1;
      func_0x00010bfca2c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c15c6e0(uVar3,param_2,lVar1);
      _objc_release(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a58de4; end: 105a58ec7; -[SCSpectaclesKioskModeManager requestAvailableLens:] */

void FUN_105a58de4(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bf5fb60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c11cbc0();
  _objc_release(lVar1);
  if (lVar2 == 1) {
    _objc_initWeak(auStack_38,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    _objc_copyWeak(auStack_48,auStack_38);
    uStack_40 = param_3;
    func_0x00010c0f7fc0(uVar3);
    _objc_destroyWeak(auStack_48);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 105a58ec8; end: 105a58f77;  */

void FUN_105a58ec8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010bfc2bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      puVar3 = PTR_PTR_1126b6718;
      func_0x00010bfc2ba0(PTR_PTR_1126b6718,param_2,*(undefined1 *)(param_1 + 0x28));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a3180(lVar1,param_2,puVar3);
      _objc_release(puVar3);
      uVar4 = *(undefined8 *)(lVar1 + 8);
      lVar2 = lVar1;
      func_0x00010bfc2bc0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c15c6e0(uVar4,param_2,lVar2);
      _objc_release(lVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105a58f78; end: 105a5902f; -[SCSpectaclesKioskModeManager setKioskModeEnabled:] */

void FUN_105a58f78(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105a59030; end: 105a59223;  */

void FUN_105a59030(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *unaff_x21;
  undefined8 uVar4;
  undefined *unaff_x22;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined *puStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = (undefined *)(param_1 + 0x20);
  _objc_loadWeakRetained();
  if (puVar1 != (undefined *)0x0) {
    unaff_x21 = puVar1;
    func_0x00010c1b7080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (unaff_x21 == (undefined *)0x0) {
      uVar4 = *(undefined8 *)(puVar1 + 0x60);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar4);
      _objc_release(puVar2);
      puVar1[0x50] = *(undefined1 *)(param_1 + 0x28);
      uVar4 = *(undefined8 *)(puVar1 + 0xa8);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar4);
      _objc_release(puVar2);
      unaff_x21 = PTR_PTR_1126c1a18;
      _objc_alloc();
      puVar2 = PTR_PTR_1126c1a20;
      func_0x00010bf1f520(PTR_PTR_1126c1a20);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c045800();
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126b6718;
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_50 = unaff_x21;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16f880(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fe160(puVar1);
      _objc_release(puVar2);
      _objc_release(puVar3);
      param_1 = *(long *)(puVar1 + 8);
      unaff_x22 = puVar1;
      func_0x00010c1b7080();
      _objc_retainAutoreleasedReturnValue();
      param_3 = unaff_x22;
      func_0x00010c15c6e0(param_1);
      _objc_release(unaff_x22);
      _objc_release(unaff_x21);
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcStack_58 = FUN_105a59224;
  puStack_80 = unaff_x22;
  puStack_78 = unaff_x21;
  lStack_70 = param_1;
  puStack_68 = puVar1;
  puStack_60 = &stack0xfffffffffffffff0;
  _objc_retain(param_3);
  _objc_initWeak(auStack_88,puVar2);
  uVar4 = *(undefined8 *)(puVar2 + 0x10);
  _objc_copyWeak(auStack_90,auStack_88);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_88);
  _objc_release(param_3);
  return;
}



/* Entry: 105a59224; end: 105a592fb; -[SCSpectaclesKioskModeManager setKioskModeActiveLensId:] */

void FUN_105a59224(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105a592fc; end: 105a594f7;  */

void FUN_105a592fc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  long lStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010c162860();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      uVar6 = *(undefined8 *)(lVar1 + 0x68);
      lVar2 = lVar1;
      func_0x00010be4ae00(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar6);
      _objc_release(lVar2);
      uVar7 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar7);
      uVar6 = *(undefined8 *)(lVar1 + 0x58);
      *(undefined8 *)(lVar1 + 0x58) = uVar7;
      _objc_release(uVar6);
      uVar6 = *(undefined8 *)(lVar1 + 0xa8);
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar6);
      _objc_release(puVar3);
      puVar4 = PTR_PTR_1126c1a18;
      _objc_alloc();
      puVar3 = PTR_PTR_1126c1a20;
      func_0x00010c26cd40(PTR_PTR_1126c1a20);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c045800();
      _objc_release(puVar3);
      puVar3 = PTR_PTR_1126b6718;
      puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_40 = puVar4;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16f880(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fdfa0(lVar1);
      _objc_release(puVar3);
      _objc_release(puVar5);
      param_1 = *(long *)(lVar1 + 8);
      lVar2 = lVar1;
      func_0x00010c162860(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c15c6e0(param_1);
      _objc_release(lVar2);
      _objc_release(puVar4);
    }
  }
  lVar2 = lVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  pcStack_48 = FUN_105a594f8;
  lStack_60 = param_1;
  lStack_58 = lVar1;
  puStack_50 = &stack0xfffffffffffffff0;
  _objc_initWeak(auStack_68,lVar2);
  uVar6 = *(undefined8 *)(lVar2 + 0x10);
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010c0f7fc0(uVar6);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 105a594f8; end: 105a5959f; -[SCSpectaclesKioskModeManager restartSpectacles] */

void FUN_105a594f8(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105a595a0; end: 105a59603;  */

void FUN_105a595a0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (*(long *)(param_1 + 0x30) == 0)) {
    puVar1 = PTR_PTR_1126b6718;
    func_0x00010bf70e60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    *(undefined **)(param_1 + 0x30) = puVar1;
    _objc_release(uVar2);
    func_0x00010c15c6e0(*(undefined8 *)(param_1 + 8),param_2,*(undefined8 *)(param_1 + 0x30));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a59604; end: 105a5970b; -[SCSpectaclesKioskModeManager handleResponse:] */

void FUN_105a59604(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c134680(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010be415a0();
  _objc_release(uVar2);
  if ((int)lVar1 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105a5970c; end: 105a59d4f;  */

void FUN_105a5970c(long param_1,undefined4 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined1 uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = (undefined *)(param_1 + 0x28);
  _objc_loadWeakRetained();
  uVar10 = (undefined1)param_2;
  if (puVar2 == (undefined *)0x0) goto LAB_105a59d08;
  puVar3 = puVar2;
  func_0x00010be0afa0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 != (undefined *)0x0) {
    func_0x00010c0d9840(*(undefined8 *)(puVar2 + 0xb0));
    func_0x00010be84ba0(puVar2);
  }
  puVar4 = *(undefined **)(param_1 + 0x20);
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar2;
  func_0x00010bfca2c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar4);
  uVar10 = (undefined1)param_2;
  puVar5 = *(undefined **)(param_1 + 0x20);
  if (puVar4 == puVar9) {
    func_0x00010c228120();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR____NSArray0__struct_11034ab48;
    if (puVar5 != (undefined *)0x0) {
      puVar9 = puVar5;
    }
    _objc_retain(puVar9);
    _objc_release(puVar5);
    _objc_retain(puVar9);
    puVar4 = puVar9;
    func_0x00010bf52a60();
    lVar7 = lRam0000000000000000;
    uVar10 = (undefined1)param_2;
    while (puVar4 != (undefined *)0x0) {
      puVar5 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar7) {
          _objc_enumerationMutation(puVar9);
        }
        uVar14 = *(undefined8 *)((long)puVar5 * 8);
        uVar8 = uVar14;
        func_0x00010c227ea0();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar8;
        func_0x00010c0720c0();
        _objc_release(uVar8);
        if ((int)uVar12 != 0) {
          uVar8 = uVar14;
          func_0x00010c296d80(uVar14);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0bcc80();
          _objc_release(uVar8);
        }
        uVar8 = uVar14;
        func_0x00010c227ea0();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar8;
        func_0x00010c0720c0();
        _objc_release(uVar8);
        if ((int)uVar12 != 0) {
          func_0x00010c296d80(uVar14);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0bcc80();
          _objc_release(uVar14);
        }
        puVar5 = puVar5 + 1;
      } while (puVar4 != puVar5);
      puVar4 = puVar9;
      func_0x00010bf52a60();
      uVar10 = (undefined1)param_2;
    }
    _objc_release(puVar9);
    func_0x00010c1a3820(puVar2);
    _objc_release(puVar9);
  }
  else {
    func_0x00010c134680();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar2;
    func_0x00010c1b7080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar5);
    puVar6 = *(undefined **)(param_1 + 0x20);
    puVar4 = puVar2;
    if (puVar5 == puVar9) {
      func_0x00010bfdbf00();
      if ((int)puVar6 != 0) {
        iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
        func_0x00010c16f8a0();
        if (iVar1 != 0) {
          puVar2[0x38] = puVar2[0x50];
        }
      }
      uVar8 = *(undefined8 *)(puVar2 + 0x98);
      puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar8);
      _objc_release(puVar9);
      puVar2[0x50] = 0;
      func_0x00010c1fe160(puVar2);
      uVar8 = *(undefined8 *)(puVar2 + 0x60);
      puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar8);
      _objc_release(puVar9);
      if ((puVar2[0x38] == '\0') || (*(long *)(puVar2 + 0x40) != 0)) {
        func_0x00010c162860();
        _objc_retainAutoreleasedReturnValue();
LAB_105a59cb8:
        _objc_release();
        if (puVar4 == (undefined *)0x0) {
          uVar8 = *(undefined8 *)(puVar2 + 0xa8);
          puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0d9840(uVar8);
          goto LAB_105a59cfc;
        }
      }
    }
    else {
      func_0x00010c134680();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar2;
      func_0x00010c162860();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar6);
      lVar7 = *(long *)(param_1 + 0x20);
      if (puVar6 == puVar9) {
        func_0x00010bfdbf00();
        if ((int)lVar7 != 0) {
          iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
          func_0x00010c16f8a0();
          if (iVar1 != 0) {
            uVar12 = *(undefined8 *)(puVar2 + 0x58);
            _objc_retain(uVar12);
            uVar8 = *(undefined8 *)(puVar2 + 0x40);
            *(undefined8 *)(puVar2 + 0x40) = uVar12;
            _objc_release(uVar8);
          }
        }
        uVar8 = *(undefined8 *)(puVar2 + 0xa0);
        puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0d9840(uVar8);
        _objc_release(puVar9);
        uVar8 = *(undefined8 *)(puVar2 + 0x58);
        *(undefined8 *)(puVar2 + 0x58) = 0;
        _objc_release(uVar8);
        func_0x00010c1fdfa0(puVar2);
        uVar8 = *(undefined8 *)(puVar2 + 0x68);
        puVar9 = puVar2;
        func_0x00010be4ae00(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0d9840(uVar8);
        _objc_release(puVar9);
        if (puVar2[0x38] == '\x01') {
          func_0x00010c1b7080();
          _objc_retainAutoreleasedReturnValue();
          goto LAB_105a59cb8;
        }
      }
      else {
        func_0x00010c134680();
        _objc_retainAutoreleasedReturnValue();
        lVar13 = *(long *)(puVar2 + 0x30);
        _objc_release();
        if (lVar7 == lVar13) {
          puVar9 = *(undefined **)(puVar2 + 0x30);
          *(undefined8 *)(puVar2 + 0x30) = 0;
LAB_105a59cfc:
          _objc_release(puVar9);
        }
        else {
          puVar4 = *(undefined **)(param_1 + 0x20);
          func_0x00010c134680();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar2;
          func_0x00010bfc2bc0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(puVar4);
          if (puVar4 == puVar9) {
            uVar8 = *(undefined8 *)(param_1 + 0x20);
            func_0x00010bf12820();
            _objc_retainAutoreleasedReturnValue();
            uVar12 = *(undefined8 *)(puVar2 + 0x48);
            *(undefined8 *)(puVar2 + 0x48) = uVar8;
            _objc_release(uVar12);
            uVar12 = *(undefined8 *)(puVar2 + 0x70);
            uVar8 = *(undefined8 *)(param_1 + 0x20);
            func_0x00010bf12820(uVar8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0d9840(uVar12);
            _objc_release(uVar8);
            uVar8 = *(undefined8 *)(puVar2 + 0x68);
            puVar9 = puVar2;
            func_0x00010be4ae00(puVar2);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0d9840(uVar8);
            _objc_release(puVar9);
            func_0x00010c1a3180(puVar2);
            func_0x00010be12160(puVar2);
          }
        }
      }
    }
  }
  _objc_release(puVar3);
LAB_105a59d08:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  *(undefined1 *)(*(long *)(puVar2 + 0x20) + 0x38) = uVar10;
  uVar8 = *(undefined8 *)(*(long *)(puVar2 + 0x20) + 0x60);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105a59d50; end: 105a59da3;  */

void FUN_105a59d50(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  *(char *)(*(long *)(param_1 + 0x20) + 0x38) = (char)param_2;
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,(int)param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a59da4; end: 105a59e23;  */

void FUN_105a59da4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  lVar1 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(lVar1 + 0x68);
  func_0x00010be4ae00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105a59e24; end: 105a59f13; -[SCSpectaclesKioskModeManager _isKioskModeRequest:] */

bool FUN_105a59e24(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010bfca2c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == lVar2) {
    bVar1 = true;
  }
  else {
    lVar3 = param_1;
    func_0x00010c1b7080();
    _objc_retainAutoreleasedReturnValue();
    if (param_3 == lVar3) {
      bVar1 = true;
    }
    else {
      lVar4 = param_1;
      func_0x00010c162860();
      _objc_retainAutoreleasedReturnValue();
      if ((param_3 == lVar4) || (param_3 == *(long *)(param_1 + 0x30))) {
        bVar1 = true;
      }
      else {
        func_0x00010bfc2bc0(param_1);
        _objc_retainAutoreleasedReturnValue();
        bVar1 = param_3 == param_1;
        _objc_release();
      }
      _objc_release(lVar4);
    }
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 105a59f14; end: 105a5a067; -[SCSpectaclesKioskModeManager _lensFromId:] */

void FUN_105a59f14(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined *puVar7;
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
  long lStack_68;
  
  puVar5 = &uStack_130;
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
  lVar6 = *(long *)(param_1 + 0x48);
  _objc_retain(lVar6);
  lVar1 = lVar6;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar8 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(lVar6);
        }
        puVar7 = *(undefined **)(lStack_128 + lVar9 * 8);
        puVar2 = puVar7;
        func_0x00010c094540();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        puVar5 = (undefined8 *)param_3;
        func_0x00010c0720c0();
        _objc_release(puVar2);
        if (((ulong)puVar3 & 1) != 0) {
          _objc_retain(puVar7);
          goto LAB_105a5a018;
        }
        lVar9 = lVar9 + 1;
      } while (lVar1 != lVar9);
      lVar1 = lVar6;
      puVar5 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  puVar7 = (undefined *)0x0;
LAB_105a5a018:
  _objc_release(lVar6);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_retain(puVar5);
    puVar4 = (undefined1 *)puVar5;
    func_0x00010c13bcc0();
    puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
    if (puVar4 + -1 < (undefined1 *)0x3) {
      puVar4 = (undefined1 *)puVar5;
      func_0x00010c13bcc0(puVar5);
      func_0x00010bf99240(puVar7,param_2,&PTR____CFConstantStringClassReference_110e19398,puVar4,0);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar7 = (undefined *)0x0;
    }
    _objc_release(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105a5a068; end: 105a5a0e7; -[SCSpectaclesKioskModeManager _errorFromResponse:] */

void FUN_105a5a068(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c13bcc0();
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (lVar1 - 1U < 3) {
    lVar1 = param_3;
    func_0x00010c13bcc0(param_3);
    func_0x00010bf99240(puVar2,param_2,&PTR____CFConstantStringClassReference_110e19398,lVar1,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = (undefined *)0x0;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105a5a0e8; end: 105a5a0ef; -[SCSpectaclesKioskModeManager responseMonitorState] */

undefined8 FUN_105a5a0e8(void)

{
  return 0;
}



/* Entry: 105a5a0f0; end: 105a5a197; -[SCSpectaclesKioskModeManager _fetchLensMetadata] */

void FUN_105a5a0f0(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105a5a198; end: 105a5a2df;  */

void FUN_105a5a198(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 0x48);
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    if ((lVar1 != 0) && (lVar2 = lVar1, func_0x00010bf529e0(), lVar2 != 0)) {
      _objc_initWeak(auStack_48,param_1);
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bfc6fc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_50,auStack_48);
      func_0x00010c297280(uVar4);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_1);
  return;
}



/* Entry: 105a5a2e0; end: 105a5a2e7;  */

void FUN_105a5a2e0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c094550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_lensId_112602b60);
  return;
}



/* Entry: 105a5a2e8; end: 105a5a367;  */

void FUN_105a5a2e8(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if (param_3 == 0) {
      func_0x00010be2b460(param_1);
    }
    else {
      func_0x00010c0d9840(*(undefined8 *)(param_1 + 0xb0));
    }
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105a5a368; end: 105a5a43f; -[SCSpectaclesKioskModeManager _handleLensInfoCardData:] */

void FUN_105a5a368(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105a5a440; end: 105a5a527;  */

void FUN_105a5a440(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(lVar1 + 0x48);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_105a5a528;
    puStack_40 = &UNK_1108cf8a8;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    uStack_38 = uVar3;
    func_0x00010c0b8600(uVar4,param_2,&puStack_58);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(lVar1 + 0x48);
    *(undefined8 *)(lVar1 + 0x48) = uVar4;
    _objc_release(uVar3);
    func_0x00010c0d9840(*(undefined8 *)(lVar1 + 0x70),param_2,*(undefined8 *)(lVar1 + 0x48));
    uVar4 = *(undefined8 *)(lVar1 + 0x68);
    lVar2 = lVar1;
    func_0x00010be4ae00(lVar1,param_2,*(undefined8 *)(lVar1 + 0x40));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar4,param_2,lVar2);
    _objc_release(lVar2);
    _objc_release(uStack_38);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105a5a528; end: 105a5a79f;  */

void FUN_105a5a528(long param_1,undefined *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 unaff_x21;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined *puStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar11 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar11);
  lVar1 = lVar11;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar13 = *plStack_120;
    do {
      lVar14 = 0;
      do {
        if (*plStack_120 != lVar13) {
          _objc_enumerationMutation(lVar11);
        }
        uVar12 = *(undefined8 *)(lStack_128 + lVar14 * 8);
        puVar2 = param_2;
        func_0x00010c094540();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar12;
        func_0x00010c094540(uVar12);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar2;
        func_0x00010c0720c0();
        _objc_release(uVar3);
        _objc_release(puVar2);
        if (((ulong)puVar4 & 1) != 0) {
          puVar2 = PTR_PTR_1126c1a28;
          _objc_alloc();
          uVar3 = uVar12;
          puStack_140 = puVar2;
          func_0x00010c094540(uVar12);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar12;
          func_0x00010c094fa0();
          _objc_retainAutoreleasedReturnValue();
          uStack_138 = uVar5;
          func_0x00010c11a5e0();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar12;
          func_0x00010c094fa0(uVar12);
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar6;
          func_0x00010bfe5be0();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar7;
          func_0x00010beec820();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c092080();
          _objc_retainAutoreleasedReturnValue();
          unaff_x21 = uVar12;
          func_0x00010bf85d80();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = puStack_140;
          func_0x00010c024620();
          _objc_release(unaff_x21);
          _objc_release(uVar12);
          _objc_release(uVar8);
          _objc_release(uVar7);
          _objc_release(uVar6);
          _objc_release(uVar5);
          _objc_release(uStack_138);
          _objc_release(uVar3);
          _objc_release(lVar11);
          goto LAB_105a5a758;
        }
        lVar14 = lVar14 + 1;
      } while (lVar1 != lVar14);
      lVar1 = lVar11;
      func_0x00010bf52a60();
      unaff_x21 = 0;
    } while (lVar1 != 0);
  }
  _objc_release(lVar11);
  _objc_retain(param_2);
  puVar2 = param_2;
LAB_105a5a758:
  puVar4 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  puVar10 = PTR_PTR_1126afde0;
  pcStack_148 = FUN_105a5a7a0;
  ppuVar9 = &PTR____CFConstantStringClassReference_110e193f8;
  puStack_170 = puVar2;
  uStack_168 = unaff_x21;
  lStack_160 = lVar11;
  puStack_158 = param_2;
  puStack_150 = &stack0xfffffffffffffff0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e193f8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf55ce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar9);
  puStack_1a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_198 = 0xc2000000;
  pcStack_190 = FUN_105a5a86c;
  puStack_188 = &UNK_110841f80;
  puStack_180 = puVar4;
  puStack_178 = puVar10;
  _objc_retain(puVar10);
  func_0x0001000d76cc("APPSTORE",&puStack_1a0);
  _objc_release(puStack_178);
  _objc_release(puVar10);
  return;
}



/* Entry: 105a5a7a0; end: 105a5a86b; -[SCSpectaclesKioskModeManager _pushErrorNotification] */

void FUN_105a5a7a0(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = PTR_PTR_1126afde0;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e193f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e193f8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf55ce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105a5a86c;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_1;
  puStack_38 = puVar2;
  _objc_retain(puVar2);
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  _objc_release(puStack_38);
  _objc_release(puVar2);
  return;
}



/* Entry: 105a5a86c; end: 105a5a8ab;  */

void FUN_105a5a86c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a5a8ac; end: 105a5a8b3; -[SCSpectaclesKioskModeManager enabled] */

undefined8 FUN_105a5a8ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 105a5a8b4; end: 105a5a8bb; -[SCSpectaclesKioskModeManager activeLens] */

undefined8 FUN_105a5a8b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 105a5a8bc; end: 105a5a8c3; -[SCSpectaclesKioskModeManager availableLens] */

undefined8 FUN_105a5a8bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 105a5a8c4; end: 105a5a8cb; -[SCSpectaclesKioskModeManager isLoadingSetting] */

undefined8 FUN_105a5a8c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 105a5a8cc; end: 105a5a8d3; -[SCSpectaclesKioskModeManager isUpdatingKioskModeEnabled] */

undefined8 FUN_105a5a8cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 105a5a8d4; end: 105a5a8db; -[SCSpectaclesKioskModeManager isUpdatingKioskModeActiveLens] */

undefined8 FUN_105a5a8d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 105a5a8dc; end: 105a5a8e3; -[SCSpectaclesKioskModeManager isLoadingAvailableLens] */

undefined8 FUN_105a5a8dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 105a5a8e4; end: 105a5a8eb; -[SCSpectaclesKioskModeManager updateEnabledResult] */

undefined8 FUN_105a5a8e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 105a5a8ec; end: 105a5a8f3; -[SCSpectaclesKioskModeManager updateActiveLensResult] */

undefined8 FUN_105a5a8ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}


