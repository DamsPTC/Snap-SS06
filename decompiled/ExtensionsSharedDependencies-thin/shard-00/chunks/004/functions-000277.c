/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0058e890; end: 0058eb0f; -[AFStreamingMultipartFormData requestByFinalizingMultipartFormData] */

void FUN_0058e890(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  uVar1 = param_1;
  func_0x0077fae0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x007877a0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    _objc_autoreleasePoolPush();
    uVar2 = param_1;
    func_0x0077fae0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x0078e680();
    _objc_release(uVar2);
    uVar2 = param_1;
    func_0x0078b720(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_00ac2988;
    func_0x0078c100(PTR__OBJC_CLASS___NSString_00ac2988,param_2,
                    &PTR____CFConstantStringClassReference_00a2a7e0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00791160(uVar2,param_2,puVar3,&PTR____CFConstantStringClassReference_00a244c0);
    _objc_release(puVar3);
    _objc_release(uVar2);
    uVar2 = param_1;
    func_0x0078b720(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_00ac2988;
    uVar4 = param_1;
    func_0x0077fae0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00780cc0();
    func_0x0078c100(puVar3,param_2,&PTR____CFConstantStringClassReference_00a2a800);
    _objc_retainAutoreleasedReturnValue();
    func_0x00791160(uVar2,param_2,puVar3,&PTR____CFConstantStringClassReference_00a2a820);
    _objc_release(puVar3);
    _objc_release(uVar4);
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableData_00ac2cc8;
    uVar2 = param_1;
    func_0x0077fae0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00780cc0();
    func_0x00781720(puVar3,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = param_1;
    func_0x0077fae0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x0078a160();
    _objc_release(uVar2);
    uVar2 = param_1;
    func_0x0077fae0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    _objc_retainAutorelease(puVar3);
    func_0x0077fde0();
    puVar6 = puVar3;
    func_0x007882e0(puVar3);
    func_0x0078aec0(uVar2,param_2,puVar5,puVar6);
    _objc_release(uVar2);
    uVar2 = param_1;
    func_0x0078b720(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00780e20(puVar3);
    func_0x0078e380(uVar2,param_2,puVar5);
    _objc_release(puVar5);
    _objc_release(uVar2);
    uVar2 = param_1;
    func_0x0077fae0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00780360();
    _objc_release(uVar2);
    _objc_release(puVar3);
    _objc_autoreleasePoolPop(uVar1);
  }
  func_0x0078b720(param_1);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0058eb10; end: 0058eb17; -[AFStreamingMultipartFormData request] */

undefined8 FUN_0058eb10(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 0058eb18; end: 0058eb1f; -[AFStreamingMultipartFormData setRequest:] */

void FUN_0058eb18(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_0099ade8)();
  return;
}



/* Entry: 0058eb20; end: 0058eb27; -[AFStreamingMultipartFormData bodyStream] */

undefined8 FUN_0058eb20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 0058eb28; end: 0058eb57; -[AFStreamingMultipartFormData setBodyStream:] */

void FUN_0058eb28(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0058eb58; end: 0058eb5f; -[AFStreamingMultipartFormData stringEncoding] */

undefined8 FUN_0058eb58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 0058eb60; end: 0058eb67; -[AFStreamingMultipartFormData setStringEncoding:] */

void FUN_0058eb60(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 0058eb68; end: 0058eb97; -[AFStreamingMultipartFormData .cxx_destruct] */

void FUN_0058eb68(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 0058eb98; end: 0058ec37; -[AFMultipartBodyStream initWithStringEncoding:] */

undefined1 * FUN_0058eb98(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_00ac3f30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00790860(puVar1);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
    func_0x0077f120(PTR__OBJC_CLASS___NSMutableArray_00ac29a0);
    _objc_retainAutoreleasedReturnValue();
    func_0x0078e3c0(puVar1);
    _objc_release(puVar2);
    func_0x0078f420(puVar1);
    _objc_retain(puVar1);
  }
  _objc_release(puVar1);
  return (undefined1 *)puVar1;
}



/* Entry: 0058ec38; end: 0058edeb; -[AFMultipartBodyStream setInitialAndFinalBoundaries] */

void FUN_0058ec38(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
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
  
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar1 = param_1;
  func_0x0077b9a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00780e80();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    lVar1 = param_1;
    func_0x0077b9a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00780ea0();
    if (lVar2 != 0) {
      lVar4 = *plStack_110;
      do {
        lVar5 = 0;
        do {
          if (*plStack_110 != lVar4) {
            _objc_enumerationMutation(lVar1);
          }
          uVar3 = *(undefined8 *)(lStack_118 + lVar5 * 8);
          func_0x0078e4a0(uVar3,param_2,0);
          func_0x0078e480(uVar3,param_2,0);
          lVar5 = lVar5 + 1;
        } while (lVar2 != lVar5);
        lVar2 = lVar1;
        func_0x00780ea0(lVar1,param_2,&uStack_120,auStack_d8,0x10);
      } while (lVar2 != 0);
    }
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x0077b9a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00789e00();
    _objc_retainAutoreleasedReturnValue();
    func_0x0078e4a0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x0077b9a0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00788220();
    _objc_retainAutoreleasedReturnValue();
    param_3 = 1;
    func_0x0078e480();
    _objc_release(lVar1);
    _objc_release(param_1);
    lVar1 = param_1;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  func_0x0077b9a0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0077e720();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(lVar1);
  return;
}



/* Entry: 0058edec; end: 0058ee3b; -[AFMultipartBodyStream appendHTTPBodyPart:] */

void FUN_0058edec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x0077b9a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0077e720();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 0058ee3c; end: 0058ee7b; -[AFMultipartBodyStream isEmpty] */

bool FUN_0058ee3c(long param_1)

{
  long lVar1;
  
  func_0x0077b9a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00780e80();
  _objc_release(param_1);
  return lVar1 == 0;
}



/* Entry: 0058ee7c; end: 0058efe3; -[AFMultipartBodyStream read:maxLength:] */

ulong FUN_0058ee7c(double param_1,ulong param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar5 = param_2;
  func_0x00791de0();
  if (uVar5 != 6) {
    uVar2 = param_2;
    func_0x00789b80();
    uVar5 = param_5;
    if (uVar2 <= param_5) {
      uVar5 = uVar2;
    }
    if (uVar5 != 0) {
      uVar5 = 0;
      do {
        uVar2 = param_2;
        func_0x007812e0();
        _objc_retainAutoreleasedReturnValue();
        if (uVar2 == 0) {
LAB_0058ef64:
          uVar2 = param_2;
          func_0x0077b980();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          func_0x00789980();
          _objc_retainAutoreleasedReturnValue();
          func_0x0078d860(param_2,param_3,uVar3);
          _objc_release(uVar3);
          _objc_release(uVar2);
          if (uVar3 == 0) {
            return uVar5;
          }
        }
        else {
          uVar3 = param_2;
          func_0x007812e0();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00784260();
          _objc_release(uVar3);
          _objc_release(uVar2);
          if ((uVar4 & 1) == 0) goto LAB_0058ef64;
          uVar2 = param_2;
          func_0x007812e0();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          func_0x0078aec0();
          uVar5 = uVar3 + uVar5;
          _objc_release(uVar2);
          func_0x00781d00(param_2);
          puVar1 = PTR__OBJC_CLASS___NSThread_00ac30f8;
          if (0.0 < param_1) {
            func_0x00781d00(param_2);
            func_0x00791980(puVar1);
          }
        }
        uVar3 = param_2;
        func_0x00789b80();
        uVar2 = param_5;
        if (uVar3 <= param_5) {
          uVar2 = uVar3;
        }
        if (uVar2 <= uVar5) {
          return uVar5;
        }
      } while( true );
    }
  }
  return 0;
}



/* Entry: 0058efe4; end: 0058efeb; -[AFMultipartBodyStream getBuffer:length:] */

undefined8 FUN_0058efe4(void)

{
  return 0;
}



/* Entry: 0058efec; end: 0058f007; -[AFMultipartBodyStream hasBytesAvailable] */

bool FUN_0058efec(long param_1)

{
  func_0x00791de0();
  return param_1 == 2;
}



/* Entry: 0058f008; end: 0058f097; -[AFMultipartBodyStream open] */

void FUN_0058f008(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00791de0();
  if (lVar1 == 2) {
    return;
  }
  func_0x00790820(param_1,param_2,2);
  func_0x0078e680(param_1);
  lVar1 = param_1;
  func_0x0077b9a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00789e40();
  _objc_retainAutoreleasedReturnValue();
  func_0x0078e3a0(param_1,param_2,lVar2);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(lVar1);
  return;
}



/* Entry: 0058f098; end: 0058f09f; -[AFMultipartBodyStream close] */

void FUN_0058f098(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00790830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_setStreamStatus__00abef18,6);
  return;
}



/* Entry: 0058f0a0; end: 0058f0a7; -[AFMultipartBodyStream propertyForKey:] */

undefined8 FUN_0058f0a0(void)

{
  return 0;
}



/* Entry: 0058f0a8; end: 0058f0af; -[AFMultipartBodyStream setProperty:forKey:] */

undefined8 FUN_0058f0a8(void)

{
  return 0;
}



/* Entry: 0058f0b0; end: 0058f0b3; -[AFMultipartBodyStream scheduleInRunLoop:forMode:] */

void FUN_0058f0b0(void)

{
  return;
}



/* Entry: 0058f0b4; end: 0058f0b7; -[AFMultipartBodyStream removeFromRunLoop:forMode:] */

void FUN_0058f0b4(void)

{
  return;
}



/* Entry: 0058f0b8; end: 0058f1bb; -[AFMultipartBodyStream contentLength] */

long FUN_0058f0b8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
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
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  func_0x0077b9a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00780ea0();
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    lVar4 = *plStack_100;
    do {
      lVar5 = 0;
      do {
        if (*plStack_100 != lVar4) {
          _objc_enumerationMutation(param_1);
        }
        lVar2 = *(long *)(lStack_108 + lVar5 * 8);
        func_0x00780cc0(lVar2);
        lVar3 = lVar2 + lVar3;
        lVar5 = lVar5 + 1;
      } while (lVar1 != lVar5);
      lVar1 = param_1;
      func_0x00780ea0(param_1,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_48) {
    ___stack_chk_fail();
    return param_1;
  }
  return lVar3;
}



/* Entry: 0058f1bc; end: 0058f1bf; -[AFMultipartBodyStream _scheduleInCFRunLoop:forMode:] */

void FUN_0058f1bc(void)

{
  return;
}



/* Entry: 0058f1c0; end: 0058f1c3; -[AFMultipartBodyStream _unscheduleFromCFRunLoop:forMode:] */

void FUN_0058f1c0(void)

{
  return;
}



/* Entry: 0058f1c4; end: 0058f1cb; -[AFMultipartBodyStream _setCFClientFlags:callback:context:] */

undefined8 FUN_0058f1c4(void)

{
  return 0;
}



/* Entry: 0058f1cc; end: 0058f31b; -[AFMultipartBodyStream copyWithZone:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_0058f1cc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
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
  
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar1 = param_1;
  _objc_opt_class();
  func_0x0077ec40();
  lVar2 = param_1;
  func_0x00792020(param_1);
  func_0x00786980(lVar1,param_2,lVar2);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  func_0x0077b9a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00780ea0();
  if (lVar2 != 0) {
    lVar4 = *plStack_110;
    do {
      lVar5 = 0;
      do {
        if (*plStack_110 != lVar4) {
          _objc_enumerationMutation(param_1);
        }
        uVar3 = *(undefined8 *)(lStack_118 + lVar5 * 8);
        func_0x00780e20(uVar3);
        func_0x0077eee0(lVar1,param_2,uVar3);
        _objc_release(uVar3);
        lVar5 = lVar5 + 1;
      } while (lVar2 != lVar5);
      lVar2 = param_1;
      func_0x00780ea0(param_1,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(param_1);
  lVar2 = lVar1;
  func_0x0078e680();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return lVar1;
  }
  ___stack_chk_fail();
  return *(long *)(lVar2 + _DAT_00ac53cc);
}



/* Entry: 0058f31c; end: 0058f32b; -[AFMultipartBodyStream streamStatus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0058f31c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_00ac53cc);
}



/* Entry: 0058f32c; end: 0058f33b; -[AFMultipartBodyStream setStreamStatus:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0058f32c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_00ac53cc) = param_3;
  return;
}



/* Entry: 0058f33c; end: 0058f34b; -[AFMultipartBodyStream streamError] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0058f33c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_00ac5400);
}



/* Entry: 0058f34c; end: 0058f38b; -[AFMultipartBodyStream setStreamError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0058f34c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_00ac5400;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0058f38c; end: 0058f39b; -[AFMultipartBodyStream stringEncoding] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0058f38c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_00ac53d0);
}



/* Entry: 0058f39c; end: 0058f3ab; -[AFMultipartBodyStream setStringEncoding:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0058f39c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_00ac53d0) = param_3;
  return;
}



/* Entry: 0058f3ac; end: 0058f3bb; -[AFMultipartBodyStream HTTPBodyParts] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0058f3ac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_00ac5404);
}



/* Entry: 0058f3bc; end: 0058f3fb; -[AFMultipartBodyStream setHTTPBodyParts:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0058f3bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_00ac5404;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0058f3fc; end: 0058f40b; -[AFMultipartBodyStream HTTPBodyPartEnumerator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0058f3fc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_00ac5408);
}



/* Entry: 0058f40c; end: 0058f44b; -[AFMultipartBodyStream setHTTPBodyPartEnumerator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0058f40c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_00ac5408;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0058f44c; end: 0058f45b; -[AFMultipartBodyStream currentHTTPBodyPart] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0058f44c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_00ac540c);
}



/* Entry: 0058f45c; end: 0058f49b; -[AFMultipartBodyStream setCurrentHTTPBodyPart:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0058f45c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_00ac540c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0058f49c; end: 0058f4ab; -[AFMultipartBodyStream buffer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0058f49c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_00ac5410);
}



/* Entry: 0058f4ac; end: 0058f4eb; -[AFMultipartBodyStream setBuffer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0058f4ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_00ac5410;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0058f4ec; end: 0058f4fb; -[AFMultipartBodyStream numberOfBytesInPacket] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0058f4ec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_00ac53d4);
}



/* Entry: 0058f4fc; end: 0058f50b; -[AFMultipartBodyStream setNumberOfBytesInPacket:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0058f4fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_00ac53d4) = param_3;
  return;
}



/* Entry: 0058f50c; end: 0058f51b; -[AFMultipartBodyStream delay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0058f50c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_00ac53d8);
}



/* Entry: 0058f51c; end: 0058f52b; -[AFMultipartBodyStream setDelay:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0058f51c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_00ac53d8) = param_1;
  return;
}



/* Entry: 0058f52c; end: 0058f59b; -[AFMultipartBodyStream .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0058f52c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_00ac5410,0);
  _objc_storeStrong(param_1 + _DAT_00ac540c,0);
  _objc_storeStrong(param_1 + _DAT_00ac5408,0);
  _objc_storeStrong(param_1 + _DAT_00ac5404,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + _DAT_00ac5400,0);
  return;
}



/* Entry: 0058f59c; end: 0058f5fb; -[AFHTTPBodyPart init] */

undefined1 * FUN_0058f59c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_00ac3f38;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00792da0(puVar1);
    _objc_retain(puVar1);
  }
  _objc_release(puVar1);
  return (undefined1 *)puVar1;
}



/* Entry: 0058f5fc; end: 0058f653; -[AFHTTPBodyPart dealloc] */

void FUN_0058f5fc(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x00780360();
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    _objc_release(uVar1);
  }
  puStack_28 = PTR_PTR_00ac3f38;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 0058f654; end: 0058f7db; -[AFHTTPBodyPart inputStream] */

void FUN_0058f654(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  if (*(long *)(param_1 + 0x10) != 0) goto LAB_0058f764;
  uVar5 = param_1;
  func_0x0077faa0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSData_00ac2b10;
  _objc_opt_class(PTR__OBJC_CLASS___NSData_00ac2b10);
  uVar2 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar1);
  _objc_release(uVar5);
  puVar1 = PTR__OBJC_CLASS___NSInputStream_00ac3100;
  uVar5 = param_1;
  if ((uVar2 & 1) == 0) {
    uVar2 = param_1;
    func_0x0077faa0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSURL_00ac2a90;
    _objc_opt_class(PTR__OBJC_CLASS___NSURL_00ac2a90);
    uVar3 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar1);
    _objc_release(uVar2);
    puVar1 = PTR__OBJC_CLASS___NSInputStream_00ac3100;
    if ((uVar3 & 1) != 0) {
      func_0x0077faa0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x007870c0();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_0058f74c;
    }
    func_0x0077faa0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSInputStream_00ac3100;
    _objc_opt_class(PTR__OBJC_CLASS___NSInputStream_00ac3100);
    uVar2 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar1);
    _objc_release(uVar5);
    if ((uVar2 & 1) == 0) goto LAB_0058f764;
    uVar2 = param_1;
    func_0x0077faa0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(ulong *)(param_1 + 0x10);
    *(ulong *)(param_1 + 0x10) = uVar2;
  }
  else {
    func_0x0077faa0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x007870a0();
    _objc_retainAutoreleasedReturnValue();
LAB_0058f74c:
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar1;
    _objc_release(uVar4);
  }
  _objc_release(uVar5);
LAB_0058f764:
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar4);
  return;
}



/* Entry: 0058f7dc; end: 0058f9d3; -[AFHTTPBodyPart stringForHeaders] */

undefined * FUN_0058f7dc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar1 = PTR__OBJC_CLASS___NSMutableString_00ac2cc0;
  func_0x00791e20();
  _objc_retainAutoreleasedReturnValue();
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar13 = param_1;
  func_0x00784420();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar13;
  func_0x0077eae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar13);
  lVar13 = lVar2;
  func_0x00780ea0(lVar2,param_2,&uStack_130,auStack_f0,0x10);
  if (lVar13 != 0) {
    lVar14 = *plStack_120;
    do {
      lVar12 = 0;
      do {
        if (*plStack_120 != lVar14) {
          _objc_enumerationMutation(lVar2);
        }
        puVar5 = PTR__OBJC_CLASS___NSString_00ac2988;
        lVar3 = param_1;
        func_0x00784420();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00793600();
        _objc_retainAutoreleasedReturnValue();
        func_0x0078c100(puVar5,param_2,&PTR____CFConstantStringClassReference_00a2a840);
        _objc_retainAutoreleasedReturnValue();
        func_0x0077ef80(puVar1,param_2,puVar5);
        _objc_release(puVar5);
        _objc_release(lVar4);
        _objc_release(lVar3);
        lVar12 = lVar12 + 1;
      } while (lVar13 != lVar12);
      lVar13 = lVar2;
      func_0x00780ea0(lVar2,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar13 != 0);
  }
  _objc_release(lVar2);
  func_0x0077ef80(puVar1,param_2,&PTR____CFConstantStringClassReference_00a2a760);
  puVar5 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x00792200(PTR__OBJC_CLASS___NSString_00ac2988,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar5);
    return puVar5;
  }
  ___stack_chk_fail();
  puVar5 = puVar1;
  func_0x007842c0();
  if ((int)puVar5 == 0) {
    ppuVar11 = &PTR____CFConstantStringClassReference_00a2a8c0;
  }
  else {
    ppuVar11 = &PTR____CFConstantStringClassReference_00a2a8a0;
  }
  puVar5 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x0078c100(PTR__OBJC_CLASS___NSString_00ac2988,param_2,ppuVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00792020(puVar1);
  puVar7 = puVar5;
  func_0x007815a0(puVar5,param_2,puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = puVar7;
  func_0x007882e0(puVar7);
  puVar6 = puVar1;
  func_0x00792040(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar1;
  func_0x00792020(puVar1);
  puVar9 = puVar6;
  func_0x007815a0(puVar6,param_2,puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar6 = puVar9;
  func_0x007882e0(puVar9);
  lVar13 = *(long *)(puVar1 + 0x40);
  puVar8 = puVar1;
  func_0x007842a0();
  if (((ulong)puVar8 & 1) == 0) {
    puVar8 = PTR__OBJC_CLASS___NSData_00ac2b10;
    func_0x007814c0(PTR__OBJC_CLASS___NSData_00ac2b10);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar10 = PTR__OBJC_CLASS___NSString_00ac2988;
    func_0x0078c100(PTR__OBJC_CLASS___NSString_00ac2988,param_2,
                    &PTR____CFConstantStringClassReference_00a2a8e0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00792020(puVar1);
    puVar8 = puVar10;
    func_0x007815a0(puVar10,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
  }
  puVar1 = puVar8;
  func_0x007882e0(puVar8);
  _objc_release(puVar8);
  _objc_release(puVar9);
  _objc_release(puVar7);
  return puVar6 + (long)puVar5 + (long)(puVar1 + lVar13);
}



/* Entry: 0058f9d4; end: 0058fb8b; -[AFHTTPBodyPart contentLength] */

undefined * FUN_0058f9d4(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long lVar9;
  
  uVar1 = param_1;
  func_0x007842c0();
  if ((int)uVar1 == 0) {
    ppuVar8 = &PTR____CFConstantStringClassReference_00a2a8c0;
  }
  else {
    ppuVar8 = &PTR____CFConstantStringClassReference_00a2a8a0;
  }
  puVar2 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x0078c100(PTR__OBJC_CLASS___NSString_00ac2988,param_2,ppuVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00792020(param_1);
  puVar3 = puVar2;
  func_0x007815a0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar3;
  func_0x007882e0(puVar3);
  uVar1 = param_1;
  func_0x00792040(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00792020(param_1);
  uVar5 = uVar1;
  func_0x007815a0(uVar1,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar5;
  func_0x007882e0(uVar5);
  lVar9 = *(long *)(param_1 + 0x40);
  uVar4 = param_1;
  func_0x007842a0();
  if ((uVar4 & 1) == 0) {
    puVar7 = PTR__OBJC_CLASS___NSData_00ac2b10;
    func_0x007814c0(PTR__OBJC_CLASS___NSData_00ac2b10);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar6 = PTR__OBJC_CLASS___NSString_00ac2988;
    func_0x0078c100(PTR__OBJC_CLASS___NSString_00ac2988,param_2,
                    &PTR____CFConstantStringClassReference_00a2a8e0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00792020(param_1);
    puVar7 = puVar6;
    func_0x007815a0(puVar6,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
  }
  puVar6 = puVar7;
  func_0x007882e0(puVar7);
  _objc_release(puVar7);
  _objc_release(uVar5);
  _objc_release(puVar3);
  return puVar2 + uVar1 + (long)(puVar6 + lVar9);
}



/* Entry: 0058fb8c; end: 0058fbdf; -[AFHTTPBodyPart hasBytesAvailable] */

bool FUN_0058fb8c(ulong param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 8) == 4) {
    return true;
  }
  func_0x00787080();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00791de0();
  _objc_release(param_1);
  return uVar1 < 5;
}



/* Entry: 0058fbe0; end: 0058fe8f; -[AFHTTPBodyPart read:maxLength:] */

ulong FUN_0058fbe0(ulong param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined **ppuVar6;
  int iVar7;
  ulong uVar8;
  
  iVar7 = *(int *)(param_1 + 8);
  if (iVar7 == 1) {
    uVar8 = param_1;
    func_0x007842c0();
    if ((int)uVar8 == 0) {
      ppuVar6 = &PTR____CFConstantStringClassReference_00a2a8c0;
    }
    else {
      ppuVar6 = &PTR____CFConstantStringClassReference_00a2a8a0;
    }
    puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
    func_0x0078c100(PTR__OBJC_CLASS___NSString_00ac2988,param_2,ppuVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_1;
    func_0x00792020(param_1);
    puVar2 = puVar1;
    func_0x007815a0(puVar1,param_2,uVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    uVar8 = param_1;
    func_0x0078af00(param_1,param_2,puVar2,param_3,param_4);
    _objc_release(puVar2);
    iVar7 = *(int *)(param_1 + 8);
  }
  else {
    uVar8 = 0;
  }
  if (iVar7 == 2) {
    uVar3 = param_1;
    func_0x00792040(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00792020(param_1);
    uVar5 = uVar3;
    func_0x007815a0(uVar3,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    uVar3 = param_1;
    func_0x0078af00(param_1,param_2,uVar5,param_3 + uVar8,param_4 - uVar8);
    uVar8 = uVar3 + uVar8;
    _objc_release(uVar5);
    iVar7 = *(int *)(param_1 + 8);
  }
  if (iVar7 == 3) {
    uVar3 = param_1;
    func_0x00787080();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00784260();
    _objc_release(uVar3);
    if ((int)uVar4 != 0) {
      uVar3 = param_1;
      func_0x00787080(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x0078aec0();
      uVar8 = uVar4 + uVar8;
      _objc_release(uVar3);
    }
    uVar3 = param_1;
    func_0x00787080();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00784260();
    _objc_release(uVar3);
    if ((uVar4 & 1) == 0) {
      func_0x00792da0(param_1);
    }
    iVar7 = *(int *)(param_1 + 8);
  }
  if (iVar7 == 4) {
    uVar3 = param_1;
    func_0x007842a0();
    if ((uVar3 & 1) == 0) {
      puVar1 = PTR__OBJC_CLASS___NSData_00ac2b10;
      func_0x007814c0(PTR__OBJC_CLASS___NSData_00ac2b10);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSString_00ac2988;
      func_0x0078c100(PTR__OBJC_CLASS___NSString_00ac2988,param_2,
                      &PTR____CFConstantStringClassReference_00a2a8e0);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_1;
      func_0x00792020(param_1);
      puVar1 = puVar2;
      func_0x007815a0(puVar2,param_2,uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
    }
    func_0x0078af00(param_1,param_2,puVar1,param_3 + uVar8,param_4 - uVar8);
    uVar8 = param_1 + uVar8;
    _objc_release(puVar1);
  }
  return uVar8;
}



/* Entry: 0058fe90; end: 0058ff33; -[AFHTTPBodyPart readData:intoBuffer:maxLength:] */

ulong FUN_0058fe90(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x007882e0();
  uVar3 = uVar3 - *(long *)(param_1 + 0x18);
  if (param_5 <= uVar3) {
    uVar3 = param_5;
  }
  func_0x00783d20(param_3,param_2,param_4,uVar4,uVar3);
  uVar1 = *(long *)(param_1 + 0x18) + uVar3;
  *(ulong *)(param_1 + 0x18) = uVar1;
  uVar2 = param_3;
  func_0x007882e0();
  _objc_release(param_3);
  if (uVar2 <= uVar1) {
    func_0x00792da0(param_1);
  }
  return uVar3;
}



/* Entry: 0058ff34; end: 00590077; -[AFHTTPBodyPart transitionToNextPhase] */

undefined8 FUN_0058ff34(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined4 uVar5;
  
  puVar2 = PTR__OBJC_CLASS___NSThread_00ac30f8;
  func_0x00781420();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00787a60();
  _objc_release(puVar2);
  if (((ulong)puVar3 & 1) == 0) {
    func_0x0078a600(param_1,param_2,PTR_s_transitionToNextPhase_00abf878,0,1);
  }
  else {
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 1) {
      uVar5 = 2;
    }
    else if (iVar1 == 3) {
      lVar4 = param_1;
      func_0x00787080(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00780360();
      _objc_release(lVar4);
      uVar5 = 4;
    }
    else if (iVar1 == 2) {
      lVar4 = param_1;
      func_0x00787080(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSRunLoop_00ac3108;
      func_0x007813e0(PTR__OBJC_CLASS___NSRunLoop_00ac3108);
      _objc_retainAutoreleasedReturnValue();
      func_0x0078c320(lVar4,param_2,puVar2,*(undefined8 *)PTR__NSRunLoopCommonModes_00999cc0);
      _objc_release(puVar2);
      _objc_release(lVar4);
      lVar4 = param_1;
      func_0x00787080(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x0078a160();
      _objc_release(lVar4);
      uVar5 = 3;
    }
    else {
      uVar5 = 1;
    }
    *(undefined4 *)(param_1 + 8) = uVar5;
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return 1;
}



/* Entry: 00590078; end: 0059012f; -[AFHTTPBodyPart copyWithZone:] */

undefined8 FUN_00590078(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  _objc_opt_class();
  func_0x0077ec40();
  func_0x007849a0();
  uVar2 = param_1;
  func_0x00792020(param_1);
  func_0x00790860(uVar1,param_2,uVar2);
  uVar2 = param_1;
  func_0x00784420(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078e4e0(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x0077fac0(param_1);
  func_0x0078d000(uVar1,param_2,uVar2);
  func_0x0077faa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078cfe0(uVar1,param_2,param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 00590130; end: 00590137; -[AFHTTPBodyPart stringEncoding] */

undefined8 FUN_00590130(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 00590138; end: 0059013f; -[AFHTTPBodyPart setStringEncoding:] */

void FUN_00590138(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 00590140; end: 00590147; -[AFHTTPBodyPart headers] */

undefined8 FUN_00590140(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 00590148; end: 00590177; -[AFHTTPBodyPart setHeaders:] */

void FUN_00590148(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 00590178; end: 0059017f; -[AFHTTPBodyPart body] */

undefined8 FUN_00590178(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 00590180; end: 005901af; -[AFHTTPBodyPart setBody:] */

void FUN_00590180(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 005901b0; end: 005901b7; -[AFHTTPBodyPart bodyContentLength] */

undefined8 FUN_005901b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 005901b8; end: 005901bf; -[AFHTTPBodyPart setBodyContentLength:] */

void FUN_005901b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 005901c0; end: 005901ef; -[AFHTTPBodyPart setInputStream:] */

void FUN_005901c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 005901f0; end: 005901f7; -[AFHTTPBodyPart hasInitialBoundary] */

undefined1 FUN_005901f0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x20);
}



/* Entry: 005901f8; end: 005901ff; -[AFHTTPBodyPart setHasInitialBoundary:] */

void FUN_005901f8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 00590200; end: 00590207; -[AFHTTPBodyPart hasFinalBoundary] */

undefined1 FUN_00590200(long param_1)

{
  return *(undefined1 *)(param_1 + 0x21);
}



/* Entry: 00590208; end: 0059020f; -[AFHTTPBodyPart setHasFinalBoundary:] */

void FUN_00590208(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x21) = param_3;
  return;
}



/* Entry: 00590210; end: 0059024b; -[AFHTTPBodyPart .cxx_destruct] */

void FUN_00590210(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 0x10,0);
  return;
}



/* Entry: 0059024c; end: 005902d3; +[AFNetworkActivityIndicatorManager sharedManager] */

void FUN_0059024c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_00999f30;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_005902d4;
  puStack_30 = &UNK_00a023b0;
  uStack_28 = param_1;
  if (lRam0000000000b62a28 != -1) {
    _dispatch_once(0xb62a28,&puStack_48);
  }
  uVar1 = uRam0000000000b62a20;
  _objc_retain(uRam0000000000b62a20);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 005902d4; end: 005902fb;  */

void FUN_005902d4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_alloc_init();
  uVar1 = uRam0000000000b62a20;
  uRam0000000000b62a20 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 005902fc; end: 0059042f; -[AFNetworkActivityIndicatorManager init] */

undefined1 * FUN_005902fc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_00ac3f40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x0078d880(puVar1);
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_00ac2d50;
    func_0x00781c00(PTR__OBJC_CLASS___NSNotificationCenter_00ac2d50);
    _objc_retainAutoreleasedReturnValue();
    func_0x0077e7c0();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_00ac2d50;
    func_0x00781c00(PTR__OBJC_CLASS___NSNotificationCenter_00ac2d50);
    _objc_retainAutoreleasedReturnValue();
    func_0x0077e7c0();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_00ac2d50;
    func_0x00781c00(PTR__OBJC_CLASS___NSNotificationCenter_00ac2d50);
    _objc_retainAutoreleasedReturnValue();
    func_0x0077e7c0();
    _objc_release(puVar2);
    func_0x0078ca60(0x3ff0000000000000,puVar1);
    func_0x0078d540(0x3fc5c28f5c28f5c3,puVar1);
    _objc_retain(puVar1);
  }
  _objc_release(puVar1);
  return (undefined1 *)puVar1;
}



/* Entry: 00590430; end: 005904a7; -[AFNetworkActivityIndicatorManager dealloc] */

void FUN_00590430(long param_1)

{
  undefined *puVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_00ac2d50;
  func_0x00781c00(PTR__OBJC_CLASS___NSNotificationCenter_00ac2d50);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078b4e0();
  _objc_release(puVar1);
  func_0x00787320(*(undefined8 *)(param_1 + 0x28));
  func_0x00787320(*(undefined8 *)(param_1 + 0x30));
  puStack_28 = PTR_PTR_00ac3f40;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 005904a8; end: 005904bb; -[AFNetworkActivityIndicatorManager setEnabled:] */

void FUN_005904a8(long param_1,undefined8 param_2,byte param_3)

{
  *(byte *)(param_1 + 8) = param_3;
  if ((param_3 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0078d890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_setCurrentState__00abe330,0);
  return;
}



/* Entry: 005904bc; end: 005904bf; -[AFNetworkActivityIndicatorManager setNetworkingActivityActionWithBlock:] */

void FUN_005904bc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0078f1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_setNetworkActivityActionBlock__00abe988);
  return;
}



/* Entry: 005904c0; end: 0059051f; -[AFNetworkActivityIndicatorManager isNetworkActivityOccurring] */

bool FUN_005904c0(long param_1)

{
  long lVar1;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  lVar1 = param_1;
  func_0x0077e3e0(param_1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  return 0 < lVar1;
}



/* Entry: 00590520; end: 005905fb; -[AFNetworkActivityIndicatorManager setNetworkActivityIndicatorVisible:] */

void FUN_00590520(undefined *param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  
  if ((byte)param_1[9] == param_3) {
    return;
  }
  func_0x00793b00(param_1,param_2,&PTR____CFConstantStringClassReference_00a2a960);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  param_1[9] = (char)param_3;
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  func_0x007820c0(param_1);
  puVar1 = param_1;
  func_0x00789880();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar1 == (undefined *)0x0) {
    param_1 = PTR__OBJC_CLASS___UIApplication_00ac2df8;
    func_0x00791500(PTR__OBJC_CLASS___UIApplication_00ac2df8);
    _objc_retainAutoreleasedReturnValue();
    func_0x0078f200();
  }
  else {
    func_0x00789880();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_1 + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 005905fc; end: 00590683; -[AFNetworkActivityIndicatorManager setActivityCount:] */

void FUN_005905fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  puStack_48 = PTR___NSConcreteStackBlock_00999f30;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_00590684;
  puStack_30 = &UNK_009e3fc0;
  lStack_28 = param_1;
  _dispatch_async(PTR___dispatch_main_q_00999fc0,&puStack_48);
  return;
}



/* Entry: 00590684; end: 0059068b;  */

void FUN_00590684(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007931f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_updateCurrentStateForNetworkActi_00abf988);
  return;
}



/* Entry: 0059068c; end: 00590737; -[AFNetworkActivityIndicatorManager incrementActivityCount] */

void FUN_0059068c(long param_1,undefined8 param_2)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  func_0x00793b00(param_1,param_2,&PTR____CFConstantStringClassReference_00a2a980);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  func_0x007820c0(param_1);
  puStack_48 = PTR___NSConcreteStackBlock_00999f30;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_00590738;
  puStack_30 = &UNK_009e3fc0;
  lStack_28 = param_1;
  _dispatch_async(PTR___dispatch_main_q_00999fc0,&puStack_48);
  return;
}



/* Entry: 00590738; end: 0059073f;  */

void FUN_00590738(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007931f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_updateCurrentStateForNetworkActi_00abf988);
  return;
}



/* Entry: 00590740; end: 005907f3; -[AFNetworkActivityIndicatorManager decrementActivityCount] */

void FUN_00590740(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  func_0x00793b00(param_1,param_2,&PTR____CFConstantStringClassReference_00a2a980);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 < 2) {
    lVar1 = 1;
  }
  *(long *)(param_1 + 0x20) = lVar1 + -1;
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  func_0x007820c0(param_1);
  puStack_48 = PTR___NSConcreteStackBlock_00999f30;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_005907f4;
  puStack_30 = &UNK_009e3fc0;
  lStack_28 = param_1;
  _dispatch_async(PTR___dispatch_main_q_00999fc0,&puStack_48);
  return;
}



/* Entry: 005907f4; end: 005907fb;  */

void FUN_005907f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007931f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_updateCurrentStateForNetworkActi_00abf988);
  return;
}



/* Entry: 005907fc; end: 005908ff; -[AFNetworkActivityIndicatorManager networkRequestDidStart:] */

void FUN_005907fc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x00590868();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x0077baa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(param_3);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00784890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_incrementActivityCount_00abbf28);
    return;
  }
  return;
}



/* Entry: 00590900; end: 0059096b; -[AFNetworkActivityIndicatorManager networkRequestDidFinish:] */

void FUN_00590900(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x00590868();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x0077baa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(param_3);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00781b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_decrementActivityCount_00abb3d8);
    return;
  }
  return;
}



/* Entry: 0059096c; end: 00590a4f; -[AFNetworkActivityIndicatorManager setCurrentState:] */

void FUN_0059096c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  if (*(long *)(param_1 + 0x40) == param_3) goto LAB_00590a24;
  func_0x00793b00(param_1,param_2,&PTR____CFConstantStringClassReference_00a2a9a0);
  *(long *)(param_1 + 0x40) = param_3;
  if (param_3 < 2) {
    if (param_3 == 0) {
      func_0x0077ffa0(param_1);
      func_0x00780000(param_1);
      uVar1 = 0;
LAB_00590a0c:
      func_0x0078f200(param_1,param_2,uVar1);
    }
    else if (param_3 == 1) {
      func_0x00791b80(param_1);
    }
  }
  else {
    if (param_3 == 2) {
      func_0x00780000(param_1);
      uVar1 = 1;
      goto LAB_00590a0c;
    }
    if (param_3 == 3) {
      func_0x00791ba0(param_1);
    }
  }
  func_0x007820c0(param_1,param_2,&PTR____CFConstantStringClassReference_00a2a9a0);
LAB_00590a24:
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 00590a50; end: 00590ad7; -[AFNetworkActivityIndicatorManager updateCurrentStateForNetworkActivityChange] */

void FUN_00590a50(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x007877c0();
  if ((int)uVar1 == 0) {
    return;
  }
  uVar1 = param_1;
  func_0x00781400();
  if (uVar1 == 3) {
    uVar1 = param_1;
    func_0x00787b00();
    if ((int)uVar1 == 0) {
      return;
    }
    uVar2 = 2;
  }
  else if (uVar1 == 2) {
    uVar1 = param_1;
    func_0x00787b00();
    if ((uVar1 & 1) != 0) {
      return;
    }
    uVar2 = 3;
  }
  else {
    if (uVar1 != 0) {
      return;
    }
    uVar1 = param_1;
    func_0x00787b00();
    if ((uVar1 & 1) == 0) {
      return;
    }
    uVar2 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x0078d890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_setCurrentState__00abe330,uVar2);
  return;
}



/* Entry: 00590ad8; end: 00590b8b; -[AFNetworkActivityIndicatorManager startActivationDelayTimer] */

void FUN_00590ad8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSTimer_00ac3110;
  func_0x0077e360();
  func_0x00792a00(puVar1,param_2,param_1,PTR_s_activationDelayTimerFired_00ab7358,0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078ca80(param_1,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSRunLoop_00ac3108;
  func_0x00788c40(PTR__OBJC_CLASS___NSRunLoop_00ac3108);
  _objc_retainAutoreleasedReturnValue();
  func_0x0077e380(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0077e940(puVar1,param_2,param_1,*(undefined8 *)PTR__NSRunLoopCommonModes_00999cc0);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 00590b8c; end: 00590bbb; -[AFNetworkActivityIndicatorManager activationDelayTimerFired] */

void FUN_00590b8c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  func_0x00787b00();
  uVar1 = 2;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0078d890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_setCurrentState__00abe330,uVar1);
  return;
}



/* Entry: 00590bbc; end: 00590c8f; -[AFNetworkActivityIndicatorManager startCompletionDelayTimer] */

void FUN_00590bbc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = param_1;
  func_0x00780780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00787320();
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSTimer_00ac3110;
  func_0x00780760(param_1);
  func_0x00792a00(puVar2,param_2,param_1,PTR_s_completionDelayTimerFired_00ab7360,0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078d560(param_1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSRunLoop_00ac3108;
  func_0x00788c40(PTR__OBJC_CLASS___NSRunLoop_00ac3108);
  _objc_retainAutoreleasedReturnValue();
  func_0x00780780(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0077e940(puVar2,param_2,param_1,*(undefined8 *)PTR__NSRunLoopCommonModes_00999cc0);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar2);
  return;
}



/* Entry: 00590c90; end: 00590c97; -[AFNetworkActivityIndicatorManager completionDelayTimerFired] */

void FUN_00590c90(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0078d890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_setCurrentState__00abe330,0);
  return;
}



/* Entry: 00590c98; end: 00590cc7; -[AFNetworkActivityIndicatorManager cancelActivationDelayTimer] */

void FUN_00590c98(undefined8 param_1)

{
  func_0x0077e380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00787320();
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 00590cc8; end: 00590cf7; -[AFNetworkActivityIndicatorManager cancelCompletionDelayTimer] */

void FUN_00590cc8(undefined8 param_1)

{
  func_0x00780780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00787320();
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 00590cf8; end: 00590cff; -[AFNetworkActivityIndicatorManager isEnabled] */

undefined1 FUN_00590cf8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 00590d00; end: 00590d07; -[AFNetworkActivityIndicatorManager isNetworkActivityIndicatorVisible] */

undefined1 FUN_00590d00(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 00590d08; end: 00590d0f; -[AFNetworkActivityIndicatorManager activationDelay] */

undefined8 FUN_00590d08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 00590d10; end: 00590d17; -[AFNetworkActivityIndicatorManager setActivationDelay:] */

void FUN_00590d10(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x10) = param_1;
  return;
}



/* Entry: 00590d18; end: 00590d1f; -[AFNetworkActivityIndicatorManager completionDelay] */

undefined8 FUN_00590d18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 00590d20; end: 00590d27; -[AFNetworkActivityIndicatorManager setCompletionDelay:] */

void FUN_00590d20(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x18) = param_1;
  return;
}



/* Entry: 00590d28; end: 00590d2f; -[AFNetworkActivityIndicatorManager activityCount] */

undefined8 FUN_00590d28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}


