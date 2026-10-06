/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106e948a4; end: 106e948a7; -[SCSpectaclesDevice updateLastConnectionFailureReason:] */

void FUN_106e948a4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1b7a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setLastConnectionFailureReason__11264b8c0);
  return;
}



/* Entry: 106e948a8; end: 106e948ab; -[SCSpectaclesDevice updateLastConnectedTimestamp:] */

void FUN_106e948a8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1b7a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setLastConnectedTimestamp__11264b8b8);
  return;
}



/* Entry: 106e948ac; end: 106e948af; -[SCSpectaclesDevice updateLastActivatedTimestamp:] */

void FUN_106e948ac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1b76f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setLastActivatedTimestamp__11264b7e0);
  return;
}



/* Entry: 106e948b0; end: 106e948b3; -[SCSpectaclesDevice updateShouldRequestCrashReports:] */

void FUN_106e948b0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c200df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setShouldRequestCrashReports__11265dda0);
  return;
}



/* Entry: 106e948b4; end: 106e94957; -[SCSpectaclesDevice sendDeviceInfoRequestWithSupportsHevc] */

void FUN_106e948b4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 0x1b0);
  lVar1 = param_1;
  func_0x00010c2637e0();
  lVar2 = param_1;
  func_0x00010c09edc0(param_1);
  func_0x00010bfa1c80(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c105b80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15bac0(uVar5,param_2,lVar1,lVar2,lVar4 == 0);
  _objc_release(lVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106e94958; end: 106e94e7f; -[SCSpectaclesDevice initWithCoder:] */

long FUN_106e94958(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  func_0x00010bfeee40();
  if (param_1 != 0) {
    uVar1 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x150);
    *(ulong *)(param_1 + 0x150) = uVar1;
    _objc_release(uVar4);
    if (*(long *)(param_1 + 0x150) == 0) {
      uVar1 = param_3;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0x150);
      *(ulong *)(param_1 + 0x150) = uVar1;
      _objc_release(uVar4);
      uVar1 = *(ulong *)(param_1 + 0x150);
      func_0x00010c08fa60();
      if (0x10 < uVar1) {
        uVar4 = *(undefined8 *)(param_1 + 0x150);
        func_0x00010c25eac0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = *(undefined8 *)(param_1 + 0x150);
        *(undefined8 *)(param_1 + 0x150) = uVar4;
        _objc_release(uVar5);
      }
    }
    uVar1 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x60);
    *(ulong *)(param_1 + 0x60) = uVar1;
    _objc_release(uVar4);
    uVar1 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x1c8);
    *(ulong *)(param_1 + 0x1c8) = uVar1;
    _objc_release(uVar4);
    uVar1 = param_3;
    func_0x00010bf66f40();
    *(ulong *)(param_1 + 0xb8) = uVar1;
    uVar1 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x68);
    *(ulong *)(param_1 + 0x68) = uVar1;
    _objc_release(uVar4);
    uVar1 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar6 = uVar1;
    _objc_opt_isKindOfClass(uVar1,puVar2);
    if ((uVar6 & 1) == 0) {
      _objc_retain(uVar1);
      uVar4 = *(undefined8 *)(param_1 + 0x70);
      *(ulong *)(param_1 + 0x70) = uVar1;
    }
    else {
      puVar2 = PTR_PTR_1126c0c68;
      _objc_alloc();
      func_0x00010c04e820();
      uVar4 = *(undefined8 *)(param_1 + 0x70);
      *(undefined **)(param_1 + 0x70) = puVar2;
    }
    _objc_release(uVar4);
    uVar6 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x78);
    *(ulong *)(param_1 + 0x78) = uVar6;
    _objc_release(uVar4);
    uVar6 = *(ulong *)(param_1 + 0x78);
    puVar2 = PTR_PTR_1126c0c70;
    _objc_opt_class(PTR_PTR_1126c0c70);
    _objc_opt_isKindOfClass(uVar6,puVar2);
    if ((uVar6 & 1) == 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x78);
      *(undefined8 *)(param_1 + 0x78) = 0;
      _objc_release(uVar4);
    }
    uVar6 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0xa0);
    *(ulong *)(param_1 + 0xa0) = uVar6;
    _objc_release(uVar4);
    uVar6 = param_3;
    func_0x00010bf66f40();
    if (0xe < uVar6) {
      uVar6 = 0;
    }
    *(ulong *)(param_1 + 0xc0) = uVar6;
    uVar6 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x158);
    *(ulong *)(param_1 + 0x158) = uVar6;
    _objc_release(uVar4);
    uVar6 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x1a0);
    *(ulong *)(param_1 + 0x1a0) = uVar6;
    _objc_release(uVar4);
    uVar6 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x00010c0b4ca0();
    *(ulong *)(param_1 + 200) = uVar3;
    _objc_release(uVar6);
    uVar6 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x00010c0b4ca0();
    *(ulong *)(param_1 + 0xd0) = uVar3;
    _objc_release(uVar6);
    uVar6 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x00010c0b4ca0();
    *(ulong *)(param_1 + 0xd8) = uVar3;
    _objc_release(uVar6);
    uVar6 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x00010c0b4ca0();
    *(ulong *)(param_1 + 0xe0) = uVar3;
    _objc_release(uVar6);
    uVar6 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x00010c0b4ca0();
    *(ulong *)(param_1 + 0xe8) = uVar3;
    _objc_release(uVar6);
    uVar6 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x00010c0b4ca0();
    *(ulong *)(param_1 + 0xf0) = uVar3;
    _objc_release(uVar6);
    uVar6 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x00010c0b4ca0();
    *(ulong *)(param_1 + 0xf8) = uVar3;
    _objc_release(uVar6);
    uVar6 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f5b40(*(undefined8 *)(param_1 + 0x1f0));
    _objc_release(uVar6);
    uVar6 = param_3;
    func_0x00010bf66f40();
    *(ulong *)(param_1 + 0x1e0) = uVar6;
    uVar6 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x138);
    *(ulong *)(param_1 + 0x138) = uVar6;
    _objc_release(uVar4);
    *(undefined1 *)(param_1 + 0x52) = 1;
    uVar6 = param_3;
    func_0x00010bf66ce0();
    *(ulong *)(param_1 + 0x168) = (ulong)((uint)uVar6 ^ 1);
    uVar6 = param_3;
    func_0x00010bf66ce0();
    *(char *)(param_1 + 0x56) = (char)uVar6;
    uVar6 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0xb0);
    *(ulong *)(param_1 + 0xb0) = uVar6;
    _objc_release(uVar4);
    uVar6 = param_3;
    func_0x00010bf66ce0();
    *(char *)(param_1 + 0x51) = (char)uVar6;
    uVar6 = param_3;
    func_0x00010bf66ce0();
    *(char *)(param_1 + 0x57) = (char)uVar6;
    uVar6 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x178);
    *(ulong *)(param_1 + 0x178) = uVar6;
    _objc_release(uVar4);
    func_0x00010c229b00(*(undefined8 *)(param_1 + 0x28));
    func_0x00010bddd580(param_1);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 106e94e80; end: 106e953d3; -[SCSpectaclesDevice encodeWithCoder:] */

void FUN_106e94e80(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf93ec0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,lVar1,&PTR____CFConstantStringClassReference_110e8a738);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c15e740(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,lVar1,&PTR____CFConstantStringClassReference_110e190d8);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c22d240(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,lVar1,&PTR____CFConstantStringClassReference_110e8a778);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf70cc0(param_1);
  func_0x00010bf92fc0(param_3,param_2,lVar1,&PTR____CFConstantStringClassReference_110e8a798);
  lVar1 = param_1;
  func_0x00010bf85d80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,lVar1,&PTR____CFConstantStringClassReference_110e8a7b8);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bfb0d20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,lVar1,&PTR____CFConstantStringClassReference_110e184f8);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bfd38e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,lVar1,&PTR____CFConstantStringClassReference_110e184d8);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c257160(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,lVar1,&PTR____CFConstantStringClassReference_110e8a7d8);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf40c40(param_1);
  func_0x00010bf92fc0(param_3,param_2,lVar1,&PTR____CFConstantStringClassReference_110dbf658);
  lVar1 = param_1;
  func_0x00010bfe5ec0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,lVar1,&PTR____CFConstantStringClassReference_110dae8f8);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf4d760(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,lVar1,&PTR____CFConstantStringClassReference_110e8a7f8);
  _objc_release(lVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar1 = param_1;
  func_0x00010bfb19a0(param_1);
  func_0x00010c0df7c0(puVar2,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,puVar2,&PTR____CFConstantStringClassReference_110e8a818);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar1 = param_1;
  func_0x00010c089980(param_1);
  func_0x00010c0df7c0(puVar2,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,puVar2,&PTR____CFConstantStringClassReference_110e8a838);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar1 = param_1;
  func_0x00010c089960(param_1);
  func_0x00010c0df7c0(puVar2,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,puVar2,&PTR____CFConstantStringClassReference_110e8a858);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar1 = param_1;
  func_0x00010c089780(param_1);
  func_0x00010c0df7c0(puVar2,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,puVar2,&PTR____CFConstantStringClassReference_110e8a878);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar1 = param_1;
  func_0x00010c088da0(param_1);
  func_0x00010c0df7c0(puVar2,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,puVar2,&PTR____CFConstantStringClassReference_110e8a898);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar1 = param_1;
  func_0x00010c088780(param_1);
  func_0x00010c0df7c0(puVar2,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,puVar2,&PTR____CFConstantStringClassReference_110e8a8b8);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar1 = param_1;
  func_0x00010c088200(param_1);
  func_0x00010c0df7c0(puVar2,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,puVar2,&PTR____CFConstantStringClassReference_110e8a8d8);
  _objc_release(puVar2);
  lVar1 = param_1;
  func_0x00010c252440(param_1);
  func_0x00010bf92da0(param_3,param_2,lVar1 == 0,&PTR____CFConstantStringClassReference_110e8a958);
  lVar1 = param_1;
  func_0x00010bfb0ce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c14ba80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,lVar3,&PTR____CFConstantStringClassReference_110e8a8f8);
  _objc_release(lVar3);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c089580(param_1);
  func_0x00010bf92fc0(param_3,param_2,lVar1,&PTR____CFConstantStringClassReference_110e8a918);
  lVar1 = param_1;
  func_0x00010c08a840(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,lVar1,&PTR____CFConstantStringClassReference_110e8a938);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf92320();
  func_0x00010bf92da0(param_3,param_2,lVar1,&PTR____CFConstantStringClassReference_110e8a978);
  lVar1 = param_1;
  func_0x00010bf27c00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,lVar1,&PTR____CFConstantStringClassReference_110e8a998);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c09edc0();
  func_0x00010bf92da0(param_3,param_2,lVar1,&PTR____CFConstantStringClassReference_110e8a9b8);
  lVar1 = param_1;
  func_0x00010c2286c0(param_1);
  func_0x00010bf92da0(param_3,param_2,lVar1,&PTR____CFConstantStringClassReference_110e8a9d8);
  lVar1 = param_1;
  func_0x00010c26f520(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,lVar1,&PTR____CFConstantStringClassReference_110e8a9f8);
  _objc_release(lVar1);
  func_0x00010c0fa2c0(*(undefined8 *)(param_1 + 0x28),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e953d4; end: 106e953fb; -[SCSpectaclesDevice preferences] */

void FUN_106e953d4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106e953fc; end: 106e95407; -[SCSpectaclesDevice devicePreferencesDidRequestArchiving:] */

void FUN_106e953fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf703f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x1a8),PTR_s_deviceDidRequestArchiving__1125b9aa0,param_1);
  return;
}



/* Entry: 106e95408; end: 106e954b7; -[SCSpectaclesDevice _sendDeviceRestart] */

void FUN_106e95408(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  lVar1 = param_1;
  func_0x00010bf48d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf48920();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x1b0);
    puVar3 = PTR_PTR_1126b6718;
    func_0x00010c27d400(PTR_PTR_1126b6718);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15c6e0(uVar4,param_2,puVar3);
    _objc_release(puVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x1b0);
    puVar3 = PTR_PTR_1126b6718;
    func_0x00010bf70e60(PTR_PTR_1126b6718);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15c6e0(uVar4,param_2,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  return;
}



/* Entry: 106e954b8; end: 106e9571b; -[SCSpectaclesDevice clearContentWithSuccess:failure:] */

void FUN_106e954b8(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = param_1;
  func_0x00010bf48d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf48920();
  _objc_release(uVar2);
  if ((uVar3 & 1) == 0) {
    (**(code **)(param_4 + 0x10))(param_4);
  }
  else {
    uVar2 = param_1;
    func_0x00010bf48d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf48980();
    _objc_release(uVar2);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    if ((int)uVar3 != 0) {
      _objc_initWeak(auStack_68,param_1);
      uVar2 = param_1;
      func_0x00010c0f98a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puStack_90 = puVar1;
      uStack_88 = 0xc2000000;
      pcStack_80 = FUN_106e9571c;
      puStack_78 = &UNK_1108434b0;
      _objc_copyWeak(auStack_70,auStack_68);
      func_0x00010c0f7fc0(uVar2);
      _objc_release(uVar2);
      _objc_destroyWeak(auStack_70);
      _objc_destroyWeak(auStack_68);
    }
    puVar4 = PTR_PTR_1126b6718;
    func_0x00010bf3a7e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_b8 = puVar1;
    uStack_b0 = 0xc2000000;
    uStack_a8 = 0x106e957b8;
    puStack_a0 = &UNK_110981d40;
    _objc_retain();
    ppuVar5 = &puStack_b8;
    puStack_98 = puVar4;
    _objc_retainBlock(ppuVar5);
    _objc_initWeak(auStack_68,param_1);
    _objc_copyWeak(auStack_c0,auStack_68);
    _objc_retain(param_3);
    func_0x00010bdc80a0(param_1);
    func_0x00010c15c6e0(*(undefined8 *)(param_1 + 0x1b0));
    _objc_release(param_3);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_68);
    _objc_release(ppuVar5);
    _objc_release(puStack_98);
    _objc_release(puVar4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106e9571c; end: 106e95897;  */

void FUN_106e9571c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c26a8c0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12b0c0();
    _objc_release(uVar1);
    lVar2 = param_1;
    func_0x00010bf48c40(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b6718;
    func_0x00010c27d400(PTR_PTR_1126b6718);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15c6e0(lVar2,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106e95898; end: 106e959ef; -[SCSpectaclesDevice _addResponseMonitorWithHandler:successBlock:failureBlock:timeoutBlock:] */

void FUN_106e95898(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x188);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106e959f0; end: 106e95a47;  */

void FUN_106e959f0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c13ba00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf54800();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106e95a48; end: 106e95aaf;  */

void FUN_106e95a48(long param_1,long param_2)

{
  __Block_object_assign(param_1 + 0x20,*(undefined8 *)(param_2 + 0x20),7);
  __Block_object_assign(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),7);
  __Block_object_assign(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),7);
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x40,param_2 + 0x40);
  return;
}



/* Entry: 106e95ab0; end: 106e95af7; -[SCSpectaclesDevice setEnableUsbImport:] */

void FUN_106e95ab0(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(param_1 + 0x56) = param_3;
  uVar2 = *(undefined8 *)(param_1 + 0x1b0);
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010c21b0e0(PTR_PTR_1126b6718);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106e95af8; end: 106e95bef; -[SCSpectaclesDevice handlePeripheralResponse:] */

void FUN_106e95af8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(param_1);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106e95bf0; end: 106e95c2b;  */

void FUN_106e95bf0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be2ddc0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106e95c2c; end: 106e963cb; -[SCSpectaclesDevice _handlePeripheralResponse:] */

void FUN_106e95c2c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  lVar5 = param_3;
  func_0x00010c13bcc0();
  if (lVar5 == 0) {
    lVar5 = param_1;
    func_0x00010bf026c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ab200();
    _objc_release(lVar5);
    uVar1 = 4;
  }
  else {
    lVar5 = param_3;
    func_0x00010c13bcc0();
    if ((lVar5 != 5) || (lVar5 = param_3, func_0x00010bf93f00(), (int)lVar5 == 0)) {
      lVar5 = param_1;
      func_0x00010c0ef260();
      _objc_retainAutoreleasedReturnValue();
      if (lVar5 == 0) {
LAB_106e95d84:
        lVar5 = param_3;
        func_0x00010c13bcc0();
        if (lVar5 == 5) {
          lVar5 = param_3;
          func_0x00010c2a5660();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (lVar5 != 0) {
            lVar5 = param_1;
            func_0x00010bf026c0(param_1);
            _objc_retainAutoreleasedReturnValue();
            lVar3 = param_1;
            func_0x00010c15e740(param_1);
            _objc_retainAutoreleasedReturnValue();
            uVar1 = *(undefined8 *)(param_1 + 0x70);
            func_0x00010bf6e340();
            _objc_retainAutoreleasedReturnValue();
            uVar2 = *(undefined8 *)(param_1 + 0x78);
            func_0x00010bf6e340();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0a4a20(lVar5,param_2,0,lVar3,
                                &PTR____CFConstantStringClassReference_110e17c18,0,0,0,0,uVar1,uVar2
                                ,*(undefined8 *)(param_1 + 0xc0));
            _objc_release(uVar2);
            _objc_release(uVar1);
            _objc_release(lVar3);
            _objc_release(lVar5);
          }
        }
        lVar5 = param_1;
        func_0x00010c13ba00(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0f4d40();
        _objc_release(lVar5);
        lVar5 = param_1;
        func_0x00010bdea220(param_1,param_2,param_3);
        if ((int)lVar5 != 0) {
          func_0x00010c200de0(param_1,param_2,1);
          lVar5 = param_3;
          func_0x00010bf02280();
          if ((int)lVar5 != 0) {
            func_0x00010be25940(param_1);
          }
        }
        lVar5 = param_1;
        func_0x00010be283c0(param_1,param_2,param_3);
        if (lVar5 != 0) {
          lVar5 = param_1;
          func_0x00010bf6ff00(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf6fde0();
          _objc_release(lVar5);
        }
        lVar5 = param_3;
        func_0x00010c29af80();
        if ((int)lVar5 != 0) {
          lVar5 = param_1;
          func_0x00010bf6ff00(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf70440();
          _objc_release(lVar5);
          puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
          func_0x00010bf64de0();
          _objc_retainAutoreleasedReturnValue();
          uVar1 = *(undefined8 *)(param_1 + 8);
          *(undefined **)(param_1 + 8) = puVar6;
          _objc_release(uVar1);
          *(undefined8 *)(param_1 + 0x10) = 0x4024000000000000;
        }
        lVar5 = param_3;
        func_0x00010c0fb440();
        if ((int)lVar5 != 0) {
          puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
          func_0x00010bf64de0();
          _objc_retainAutoreleasedReturnValue();
          uVar1 = *(undefined8 *)(param_1 + 8);
          *(undefined **)(param_1 + 8) = puVar6;
          _objc_release(uVar1);
          *(undefined8 *)(param_1 + 0x10) = 0x3ff0000000000000;
        }
        lVar5 = param_3;
        func_0x00010bf540c0();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar5;
        func_0x00010bf529e0();
        _objc_release(lVar5);
        if (lVar3 != 0) {
          lVar5 = param_1;
          func_0x00010bf6ff00(param_1);
          _objc_retainAutoreleasedReturnValue();
          lVar3 = param_3;
          func_0x00010bf540c0(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf6fda0(lVar5,param_2,param_1,lVar3);
          _objc_release(lVar3);
          _objc_release(lVar5);
        }
        lVar5 = param_3;
        func_0x00010c13bcc0();
        if ((lVar5 == 5) && (lVar5 = param_3, func_0x00010bfd9940(), (int)lVar5 != 0)) {
          lVar5 = param_1;
          func_0x00010bf6ff00(param_1);
          _objc_retainAutoreleasedReturnValue();
          lVar3 = param_3;
          func_0x00010c0ddaa0(param_3);
          func_0x00010bf6fd80(lVar5,param_2,param_1,lVar3);
          _objc_release(lVar5);
          lVar5 = *(long *)(param_1 + 8);
          func_0x00010bf64e40(*(undefined8 *)(param_1 + 0x10));
          _objc_retainAutoreleasedReturnValue();
          if (lVar5 != 0) {
            puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
            func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
            _objc_retainAutoreleasedReturnValue();
            lVar3 = lVar5;
            func_0x00010c08aee0(lVar5,param_2,puVar6);
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(puVar6);
            if (lVar3 == lVar5) {
              lVar3 = param_1;
              func_0x00010bf026c0(param_1);
              _objc_retainAutoreleasedReturnValue();
              lVar4 = param_3;
              func_0x00010c0ddaa0(param_3);
              func_0x00010c0a3d40(lVar3,param_2,param_1,lVar4,*(undefined8 *)(param_1 + 8));
              _objc_release(lVar3);
            }
          }
          _objc_release(lVar5);
        }
        lVar5 = param_3;
        func_0x00010bf3e600();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar5 != 0) {
          lVar5 = param_1;
          func_0x00010bf6ff00(param_1);
          _objc_retainAutoreleasedReturnValue();
          lVar3 = param_3;
          func_0x00010bf3e600(param_3);
          _objc_retainAutoreleasedReturnValue();
          lVar4 = param_3;
          func_0x00010c134ae0(param_3);
          func_0x00010bf6fe20(lVar5,param_2,param_1,lVar3,lVar4);
          _objc_release(lVar3);
          _objc_release(lVar5);
        }
        lVar5 = param_3;
        func_0x00010c28e920();
        if (lVar5 != 0) {
          lVar5 = param_1;
          func_0x00010bf6ff00(param_1);
          _objc_retainAutoreleasedReturnValue();
          lVar3 = param_3;
          func_0x00010c28e920(param_3);
          func_0x00010bf6fe80(lVar5,param_2,param_1,lVar3);
          _objc_release(lVar5);
        }
        lVar5 = param_3;
        func_0x00010c0873e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar5 != 0) {
          lVar5 = param_1;
          func_0x00010bf6ff00(param_1);
          _objc_retainAutoreleasedReturnValue();
          lVar3 = param_3;
          func_0x00010c0873e0(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf6fe60(lVar5,param_2,param_1,lVar3);
          _objc_release(lVar3);
          _objc_release(lVar5);
        }
        lVar5 = param_3;
        func_0x00010c088680();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar5 != 0) {
          lVar5 = param_1;
          func_0x00010bf6ff00(param_1);
          _objc_retainAutoreleasedReturnValue();
          lVar3 = param_3;
          func_0x00010c088680(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf6fe40(lVar5,param_2,param_1,lVar3);
          _objc_release(lVar3);
          _objc_release(lVar5);
        }
        lVar5 = param_1;
        func_0x00010bf48d40();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar5;
        func_0x00010bf48920();
        _objc_release(lVar5);
        if ((int)lVar3 != 0) {
          func_0x00010c135140(param_1);
        }
        lVar5 = param_3;
        func_0x00010c28fd00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar5 == 0) goto LAB_106e96324;
        lVar5 = param_3;
        func_0x00010c28fd00();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar5;
        func_0x00010bf1f3c0();
        *(char *)(param_1 + 0x56) = (char)lVar3;
        param_1 = lVar5;
      }
      else {
        lVar3 = param_3;
        func_0x00010c134680();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = param_1;
        func_0x00010c0ef260();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar3);
        _objc_release(lVar5);
        if (lVar3 != lVar4) goto LAB_106e95d84;
        func_0x00010c1d7320(param_1,param_2,0);
        lVar5 = param_3;
        func_0x00010c13bcc0();
        if (lVar5 == 4) goto LAB_106e96324;
        lVar5 = param_1;
        func_0x00010bf48d40();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar5;
        func_0x00010c27d020();
        _objc_release(lVar5);
        if ((int)lVar3 == 0) goto LAB_106e96324;
        func_0x00010bf48c40(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR_PTR_1126b6718;
        func_0x00010c27d400(PTR_PTR_1126b6718);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c15c6e0(param_1,param_2,puVar6);
        _objc_release(puVar6);
      }
      _objc_release(param_1);
      goto LAB_106e96324;
    }
    lVar5 = param_1;
    func_0x00010bf026c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c15e740(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    func_0x00010bf6e340();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010bf6e340();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a4a20(lVar5,param_2,0,lVar3,&PTR____CFConstantStringClassReference_110e17bb8,0,0,0
                        ,0,uVar1,uVar2,*(undefined8 *)(param_1 + 0xc0));
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(lVar3);
    _objc_release(lVar5);
    uVar1 = 5;
  }
  func_0x00010c1b7a60(param_1,param_2,uVar1);
  lVar5 = param_1;
  func_0x00010bf6ff00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf70400();
  _objc_release(lVar5);
  func_0x00010c200de0(param_1,param_2,1);
LAB_106e96324:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e963cc; end: 106e96433; -[SCSpectaclesDevice _crashDetectedInResponse:] */

bool FUN_106e963cc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bf02280();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_3;
    func_0x00010bfd9940();
    if ((int)uVar2 == 0) {
      bVar1 = false;
    }
    else {
      uVar2 = param_3;
      func_0x00010c0ddaa0(param_3);
      bVar1 = uVar2 == 0xc;
    }
  }
  else {
    bVar1 = true;
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 106e96434; end: 106e96437; -[SCSpectaclesDevice _handleAmbaCrashed] */

void FUN_106e96434(void)

{
  return;
}



/* Entry: 106e96438; end: 106e96c5f; -[SCSpectaclesDevice _handleDeviceStatus:] */

ulong FUN_106e96438(ulong param_1,undefined8 param_2,ulong param_3)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bf17500();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = 0;
  if (uVar2 != 0) {
    uVar7 = param_1;
    func_0x00010bf17500();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010bf17500(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar7;
    func_0x00010c071ae0(uVar7,param_2,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar7);
    _objc_release(uVar2);
    if ((uVar4 & 1) == 0) {
      uVar7 = param_3;
      func_0x00010bf17500(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16f9e0(param_1,param_2,uVar7);
      _objc_release(uVar7);
      uVar7 = 1;
    }
    else {
      uVar7 = 0;
    }
  }
  uVar2 = param_3;
  func_0x00010bfd48c0();
  if ((int)uVar2 != 0) {
    uVar2 = param_1;
    func_0x00010bf175c0();
    uVar3 = param_3;
    func_0x00010bf175c0();
    if (uVar2 != uVar3) {
      uVar7 = param_3;
      func_0x00010bf175c0(param_3);
      func_0x00010c16fa60(param_1,param_2,uVar7);
      uVar7 = 1;
    }
  }
  uVar2 = param_3;
  func_0x00010bfcfc40();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 != 0) {
    uVar3 = param_1;
    func_0x00010bfcfc40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010bfcfc40(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c071ae0(uVar3,param_2,uVar4);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((uVar5 & 1) == 0) {
      uVar2 = param_3;
      func_0x00010bfcfc40(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a4dc0(param_1,param_2,uVar2);
      _objc_release(uVar2);
      uVar7 = uVar7 | 0x4000;
    }
  }
  uVar2 = param_3;
  func_0x00010c2a0da0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 != 0) {
    uVar3 = param_1;
    func_0x00010c2a0da0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010c2a0da0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c071ae0(uVar3,param_2,uVar4);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((uVar5 & 1) == 0) {
      uVar2 = param_3;
      func_0x00010c2a0da0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c224180(param_1,param_2,uVar2);
      _objc_release(uVar2);
      uVar7 = uVar7 | 0x1000;
    }
  }
  uVar2 = param_3;
  func_0x00010bfd6420();
  if ((int)uVar2 != 0) {
    uVar2 = param_3;
    func_0x00010bf700a0();
    uVar3 = param_1;
    func_0x00010bf40c40();
    if (uVar2 != uVar3) {
      uVar2 = param_3;
      func_0x00010bf700a0(param_3);
      func_0x00010c17e800(param_1,param_2,uVar2);
      uVar7 = uVar7 | 2;
    }
  }
  uVar2 = param_3;
  func_0x00010bfb0d20();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 != 0) {
    uVar3 = param_3;
    func_0x00010bfb0d20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010bfb0d20(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c071ae0(uVar3,param_2,uVar4);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((uVar5 & 1) == 0) {
      uVar2 = param_3;
      func_0x00010bfb0d20(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19cd80(param_1,param_2,uVar2);
      _objc_release(uVar2);
      func_0x00010bddd580(param_1);
      uVar7 = uVar7 | 4;
    }
  }
  uVar2 = param_3;
  func_0x00010c15e740();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 != 0) {
    uVar3 = param_3;
    func_0x00010c15e740();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010c15e740(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c0720c0(uVar3,param_2,uVar4);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((uVar5 & 1) == 0) {
      uVar2 = param_3;
      func_0x00010c15e740(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fcfc0(param_1,param_2,uVar2);
      _objc_release(uVar2);
      uVar7 = uVar7 | 8;
    }
  }
  uVar2 = param_3;
  func_0x00010bfd7b20();
  if ((int)uVar2 != 0) {
    uVar2 = param_3;
    func_0x00010bfdc7a0();
    uVar3 = param_1;
    func_0x00010bfdc7a0();
    if ((int)uVar2 != (int)uVar3) {
      uVar2 = param_3;
      func_0x00010bfdc7a0(param_3);
      func_0x00010c1a6e20(param_1,param_2,uVar2);
      uVar7 = uVar7 | 0x100;
    }
  }
  uVar2 = param_3;
  func_0x00010c257260();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 != 0) {
    uVar3 = param_3;
    func_0x00010c257260();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010c257160(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c071ae0(uVar3,param_2,uVar4);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((uVar5 & 1) == 0) {
      uVar2 = param_3;
      func_0x00010c257260(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c20c060(param_1,param_2,uVar2);
      _objc_release(uVar2);
      uVar2 = param_3;
      func_0x00010bfdcbe0();
      if ((int)uVar2 != 0) {
        uVar2 = param_3;
        func_0x00010c257180(param_3);
        func_0x00010c20c080(param_1,param_2,uVar2);
      }
      uVar7 = uVar7 | 0x10;
    }
  }
  uVar2 = param_3;
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 != 0) {
    uVar3 = param_3;
    func_0x00010bfd38e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010bfd38e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c072160(uVar3,param_2,uVar4);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((uVar5 & 1) == 0) {
      uVar2 = param_3;
      func_0x00010bfd38e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a5640(param_1,param_2,uVar2);
      _objc_release(uVar2);
      func_0x00010bddd580(param_1);
      uVar7 = uVar7 | 0x20;
    }
  }
  uVar2 = param_3;
  func_0x00010c0db2a0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 != 0) {
    uVar3 = param_3;
    func_0x00010c2a5660();
    _objc_retainAutoreleasedReturnValue();
    if (uVar3 != 0) {
      uVar4 = param_3;
      func_0x00010c246060();
      _objc_retainAutoreleasedReturnValue();
      if (uVar4 != 0) {
        uVar5 = param_3;
        func_0x00010bf52980();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(uVar4);
        _objc_release(uVar3);
        _objc_release(uVar2);
        if (uVar5 != 0) {
          uVar2 = param_3;
          func_0x00010c0db2a0(param_3);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          func_0x00010c067fc0();
          func_0x00010c1cdb20(param_1,param_2,uVar3);
          _objc_release(uVar2);
          uVar2 = param_3;
          func_0x00010c2a5660(param_3);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          func_0x00010c067fc0();
          func_0x00010c2259c0(param_1,param_2,uVar3);
          _objc_release(uVar2);
          uVar2 = param_3;
          func_0x00010c246060(param_3);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          func_0x00010c067fc0();
          func_0x00010c2065c0(param_1,param_2,uVar3);
          _objc_release(uVar2);
          uVar2 = param_3;
          func_0x00010bf52980(param_3);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          func_0x00010c067fc0();
          func_0x00010c184680(param_1,param_2,uVar3);
          _objc_release(uVar2);
          puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
          func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1b8c60(param_1,param_2,puVar6);
          _objc_release(puVar6);
          uVar2 = param_3;
          func_0x00010bfdd360();
          if ((int)uVar2 != 0) {
            uVar2 = param_3;
            func_0x00010c26af00(param_3);
            func_0x00010c212bc0(param_1,param_2,uVar2);
          }
          uVar7 = uVar7 | 0x400;
        }
        goto LAB_106e96b10;
      }
      _objc_release(uVar3);
    }
    _objc_release(uVar2);
  }
LAB_106e96b10:
  uVar2 = param_3;
  func_0x00010c246060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    uVar2 = param_3;
    func_0x00010c246060(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c067fc0();
    func_0x00010c2065c0(param_1,param_2,uVar3);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bfdd360();
    if ((int)uVar2 != 0) {
      uVar2 = param_3;
      func_0x00010c26af00(param_3);
      func_0x00010c212bc0(param_1,param_2,uVar2);
    }
    uVar7 = uVar7 | 0x400;
  }
  uVar2 = param_3;
  func_0x00010bfd5380();
  if ((int)uVar2 != 0) {
    func_0x00010c1a5b60(param_1,param_2,1);
    uVar2 = param_3;
    func_0x00010bf35b20();
    uVar3 = param_1;
    func_0x00010c06e420();
    if ((int)uVar2 != (int)uVar3) {
      uVar2 = param_3;
      func_0x00010bf35b20(param_3);
      func_0x00010c17ad20(param_1,param_2,uVar2);
      uVar7 = uVar7 | 0x800;
    }
  }
  uVar2 = param_3;
  func_0x00010c28fcc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    bVar1 = *(byte *)(param_1 + 0x59);
    uVar2 = param_3;
    func_0x00010c28fcc0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf1f3c0();
    _objc_release(uVar2);
    if ((uint)bVar1 != (uint)uVar3) {
      uVar2 = param_3;
      func_0x00010c28fcc0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf1f3c0();
      *(char *)(param_1 + 0x59) = (char)uVar3;
      _objc_release(uVar2);
      uVar7 = uVar7 | 0x20000;
    }
  }
  _objc_release(param_3);
  return uVar7;
}



/* Entry: 106e96c60; end: 106e96c67; -[SCSpectaclesDevice ambaWatchdogKick] */

void FUN_106e96c60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf023b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x1b0),PTR_s_ambaWatchdogKick_11259e290);
  return;
}



/* Entry: 106e96c68; end: 106e96d07; -[SCSpectaclesDevice requestCrashReport] */

void FUN_106e96c68(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  lVar1 = param_1;
  func_0x00010c232780();
  if ((int)lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010bf17500();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c067fc0();
    _objc_release(lVar1);
    if (10 < lVar2) {
      uVar4 = *(undefined8 *)(param_1 + 0x1b0);
      puVar3 = PTR_PTR_1126b6718;
      func_0x00010c135140(PTR_PTR_1126b6718);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c15c6e0(uVar4);
      _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c200df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s_setShouldRequestCrashReports__11265dda0,0);
      return;
    }
  }
  return;
}



/* Entry: 106e96d08; end: 106e96d0f; -[SCSpectaclesDevice clearCrashReport] */

void FUN_106e96d08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3b0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x1b0),PTR_s_clearCrashReport_1125ac5d0);
  return;
}



/* Entry: 106e96d10; end: 106e96e03; -[SCSpectaclesDevice setPeripheralDisplayName] */

void FUN_106e96d10(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar2 = PTR_PTR_1126b6718;
  uVar4 = *(undefined8 *)(param_1 + 0x1b0);
  lVar1 = param_1;
  func_0x00010bf1ca80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf70c60(puVar2,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(uVar4,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf48d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf48960();
  _objc_release(lVar1);
  if ((int)lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x1b0);
    lVar1 = param_1;
    func_0x00010bf1e640(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15cc40(uVar4,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d7320(param_1,param_2,uVar4);
    _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 106e96e04; end: 106e96e1f; -[SCSpectaclesDevice transferDisabled] */

bool FUN_106e96e04(long param_1)

{
  func_0x00010c27a260();
  return param_1 != 0;
}



/* Entry: 106e96e20; end: 106e96f37; -[SCSpectaclesDevice setTransferDisabled:forReason:] */

void FUN_106e96e20(ulong param_1,undefined8 param_2,int param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = param_1;
  func_0x00010c27a240();
  uVar2 = param_1;
  func_0x00010c27a260();
  uVar3 = uVar2 | param_4;
  if (param_3 == 0) {
    uVar3 = uVar2 & (param_4 ^ 0xffffffffffffffff);
  }
  if (((uVar2 != uVar3) && (func_0x00010c219800(param_1), (uVar1 & 1) == 0)) &&
     (uVar3 = param_1, func_0x00010c27a240(), (int)uVar3 != 0)) {
    _objc_initWeak(auStack_38,param_1);
    func_0x00010c0f98a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c0f7fc0(param_1);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 106e96f38; end: 106e97007;  */

void FUN_106e96f38(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010c263440();
    if ((int)lVar1 != 0) {
      lVar1 = param_1;
      func_0x00010bf48d40();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bf48920();
      _objc_release(lVar1);
      if ((int)lVar2 != 0) {
        lVar1 = param_1;
        func_0x00010bf48c40(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR_PTR_1126b6718;
        func_0x00010c27d400(PTR_PTR_1126b6718);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c15c6e0(lVar1,param_2,puVar3);
        _objc_release(puVar3);
        _objc_release(lVar1);
      }
    }
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c26a8c0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12b0c0();
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106e97008; end: 106e9711f; -[SCSpectaclesDevice adoptBabyDevice:performer:] */

void FUN_106e97008(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c1da9c0(param_1);
  _objc_initWeak(auStack_38,param_1);
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f88c0(param_1);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106e97120; end: 106e97153;  */

void FUN_106e97120(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdc96c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106e97154; end: 106e9744f; -[SCSpectaclesDevice _adoptBabyDevice:] */

void FUN_106e97154(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  
  _objc_retain(param_3);
  *(undefined8 *)(param_1 + 0x168) = 2;
  uVar2 = param_3;
  func_0x00010c0f99c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c0f99c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1daac0(*(undefined8 *)(param_1 + 0x1b0),param_2,uVar2);
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x1b0);
  func_0x00010c0f99c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c0f99c0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar2;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x158);
  *(undefined8 *)(param_1 + 0x158) = uVar8;
  _objc_release(uVar7);
  _objc_release(uVar2);
  _objc_release(uVar3);
  uVar2 = param_3;
  func_0x00010bf93ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x150);
  *(undefined8 *)(param_1 + 0x150) = uVar2;
  _objc_release(uVar8);
  func_0x00010bf3bd00(*(undefined8 *)(param_1 + 0x28),param_2,1);
  puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f260(puVar5,param_2,puVar4);
  _objc_release(puVar4);
  *(undefined **)(param_1 + 0xd0) = puVar5;
  *(undefined **)(param_1 + 0xf0) = puVar5;
  *(undefined **)(param_1 + 0xf8) = puVar5;
  lVar6 = param_1;
  func_0x00010c082060();
  if ((int)lVar6 != 0) {
    *(undefined **)(param_1 + 0xd8) = puVar5;
  }
  uVar9 = *(ulong *)(param_1 + 0x68);
  if (uVar9 != 0) {
    uVar2 = param_3;
    func_0x00010bfbb7e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0(uVar9,param_2,uVar2);
    _objc_release(uVar2);
    if ((uVar9 & 1) != 0) goto LAB_106e972d0;
  }
  *(undefined **)(param_1 + 0xe0) = puVar5;
LAB_106e972d0:
  uVar2 = param_3;
  func_0x00010bfbb7e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar2;
  func_0x00010bf51e00();
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = uVar8;
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c22d240();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar2;
  func_0x00010bf51e00();
  uVar3 = *(undefined8 *)(param_1 + 0x1c8);
  *(undefined8 *)(param_1 + 0x1c8) = uVar8;
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf70cc0();
  *(undefined8 *)(param_1 + 0xb8) = uVar2;
  uVar2 = param_3;
  func_0x00010c15e740();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar2;
  func_0x00010bf51e00();
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = uVar8;
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bfb0d20();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = uVar2;
  _objc_release(uVar8);
  uVar2 = param_3;
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = uVar2;
  _objc_release(uVar8);
  uVar2 = param_3;
  func_0x00010bf17500();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = uVar2;
  _objc_release(uVar8);
  uVar2 = param_3;
  func_0x00010bf175c0();
  *(undefined8 *)(param_1 + 0x88) = uVar2;
  iVar1 = (int)*(undefined8 *)(param_1 + 0x78);
  func_0x00010c078aa0();
  if (iVar1 != 0) {
    uVar2 = param_3;
    func_0x00010c076e80();
    *(char *)(param_1 + 0x51) = (char)uVar2;
  }
  uVar2 = param_3;
  func_0x00010bfd38e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beabfe0(param_1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c07dae0();
  *(char *)(param_1 + 0x57) = (char)uVar2;
  *(undefined8 *)(param_1 + 0x1e0) = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0x52) = 0;
  func_0x00010bddd580(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e97450; end: 106e974b7; -[SCSpectaclesDevice _setupDefaultDeviceColorForHardwareVersion:] */

void FUN_106e97450(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c074bc0();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0776e0();
    if ((uVar1 & 1) == 0) {
      uVar1 = param_3;
      func_0x00010c06e7e0();
      if ((int)uVar1 == 0) goto LAB_106e974a8;
      uVar2 = 0xd;
    }
    else {
      uVar2 = 0xe;
    }
  }
  else {
    uVar2 = 0xc;
  }
  *(undefined8 *)(param_1 + 0xc0) = uVar2;
LAB_106e974a8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e974b8; end: 106e9759b; -[SCSpectaclesDevice removeCorruptContent:] */

void FUN_106e974b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf6fd20(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000106e937b0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf026c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bdc3540(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a3f80(uVar1,param_2,uVar3,uVar2,0);
  _objc_release(uVar3);
  _objc_release(uVar1);
  func_0x00010bf6ff00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6fd60();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106e9759c; end: 106e97663; -[SCSpectaclesDevice activate] */

void FUN_106e9759c(undefined8 param_1)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(param_1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106e97664; end: 106e976ab;  */

void FUN_106e97664(long param_1,undefined8 param_2)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (lVar1 = param_1, func_0x00010c252440(), lVar1 == 1)) {
    func_0x00010c209fc0(param_1,param_2,2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106e976ac; end: 106e97773; -[SCSpectaclesDevice deactivate] */

void FUN_106e976ac(undefined8 param_1)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(param_1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106e97774; end: 106e977db;  */

void FUN_106e97774(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (lVar1 = param_1, func_0x00010c252440(), lVar1 == 2)) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c26a8c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12b0c0();
    _objc_release(uVar2);
    func_0x00010c209fc0(param_1,param_2,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106e977dc; end: 106e978b3; -[SCSpectaclesDevice unpairWithReason:] */

void FUN_106e977dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010c0f7fc0(param_1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106e978b4; end: 106e979bb;  */

void FUN_106e978b4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (lVar1 = param_1, func_0x00010c252440(), lVar1 != 0)) {
    lVar1 = param_1;
    func_0x00010bf026c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a4ea0();
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bf6ff00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6fdc0();
    _objc_release(lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c26a8c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12b0c0();
    _objc_release(uVar2);
    func_0x00010c209fc0(param_1,param_2,0);
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f260(puVar4,param_2,puVar3);
    func_0x00010c1b84c0(param_1,param_2,puVar4);
    _objc_release(puVar3);
    func_0x00010bf3bd00(*(undefined8 *)(param_1 + 0x28),param_2,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106e979bc; end: 106e97b6b; -[SCSpectaclesDevice manualUnpairWithSuccess:failure:] */

void FUN_106e979bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  puVar1 = PTR_PTR_1126b6718;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c281c60();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x106e97ab0;
  puStack_50 = &UNK_110981d40;
  puStack_48 = puVar1;
  _objc_retain();
  ppuVar2 = &puStack_68;
  _objc_retainBlock(ppuVar2);
  func_0x00010bdc80a0(param_1,param_2,ppuVar2,param_3,param_4,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010c15c6e0(*(undefined8 *)(param_1 + 0x1b0),param_2,puVar1);
  _objc_release(ppuVar2);
  _objc_release(puStack_48);
  _objc_release(puVar1);
  return;
}



/* Entry: 106e97b6c; end: 106e97c33; -[SCSpectaclesDevice restart] */

void FUN_106e97b6c(undefined8 param_1)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(param_1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106e97c34; end: 106e97c5f;  */

void FUN_106e97c34(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be9eec0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106e97c60; end: 106e97c67; -[SCSpectaclesDevice cancelBackupForIdentifiers:] */

void FUN_106e97c60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2df30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x1b0),PTR_s_cancelBackupForIdentifiers__1125a9170);
  return;
}



/* Entry: 106e97c68; end: 106e97c6f; -[SCSpectaclesDevice resumeBackup] */

void FUN_106e97c68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c13d350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x1b0),PTR_s_resumeBackup_11262cef0);
  return;
}



/* Entry: 106e97c70; end: 106e97c77; -[SCSpectaclesDevice shareWifiCredentialsWithSSID:password:] */

void FUN_106e97c70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c22b2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x1b0),PTR_s_shareWifiCredentialsWithSSID_pas_1126686e0);
  return;
}



/* Entry: 106e97c78; end: 106e97c7f; -[SCSpectaclesDevice requestClientId] */

void FUN_106e97c78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c134ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x1b0),PTR_s_requestClientId_11262add0);
  return;
}



/* Entry: 106e97c80; end: 106e97c87; -[SCSpectaclesDevice sendAuthzCode:codeVerifier:redirectUri:] */

void FUN_106e97c80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c15b670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x1b0),PTR_s_sendAuthzCode_codeVerifier_redir_1126347b8);
  return;
}



/* Entry: 106e97c88; end: 106e97c8f; -[SCSpectaclesDevice sendAccessToken:refreshToken:expirationTimeMs:userId:snapadsId:email:birthday:fideliusKeyProvider:scopes:] */

void FUN_106e97c88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c15b450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x1b0),PTR_s_sendAccessToken_refreshToken_exp_112634730);
  return;
}



/* Entry: 106e97c90; end: 106e97c97; -[SCSpectaclesDevice requestWifiAPList] */

void FUN_106e97c90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c137010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x1b0),PTR_s_requestWifiAPList_11262b620);
  return;
}



/* Entry: 106e97c98; end: 106e97ddb; -[SCSpectaclesDevice setWifiAPList:success:failure:] */

void FUN_106e97c98(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_1;
  func_0x00010bf48d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf48920();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))(param_5);
    }
  }
  else {
    puVar3 = PTR_PTR_1126b6718;
    func_0x00010c225800(PTR_PTR_1126b6718,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_106e97ddc;
    puStack_50 = &UNK_110981d40;
    puStack_48 = puVar3;
    _objc_retain();
    ppuVar4 = &puStack_68;
    _objc_retainBlock(ppuVar4);
    func_0x00010bdc80a0(param_1,param_2,ppuVar4,param_4,param_5,param_5);
    func_0x00010c15c6e0(*(undefined8 *)(param_1 + 0x1b0),param_2,puVar3);
    _objc_release(ppuVar4);
    _objc_release(puStack_48);
    _objc_release(puVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106e97ddc; end: 106e97e67;  */

void FUN_106e97ddc(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  *(bool *)param_4 = lVar1 == *(long *)(param_1 + 0x20);
  _objc_release();
  lVar1 = param_2;
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  *(bool *)param_3 = lVar1 == *(long *)(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106e97e68; end: 106e97e6f; -[SCSpectaclesDevice requestLastCloudUploadTime] */

void FUN_106e97e68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c135ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x1b0),PTR_s_requestLastCloudUploadTime_11262b0d0);
  return;
}



/* Entry: 106e97e70; end: 106e97e83; -[SCSpectaclesDevice setLastMediaCountSeenInResponse:] */

void FUN_106e97e70(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + 0x160) != param_3) {
    *(long *)(param_1 + 0x160) = param_3;
  }
  return;
}



/* Entry: 106e97e84; end: 106e97f5b; -[SCSpectaclesDevice setLastMediaCount:] */

void FUN_106e97e84(long param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  if (*(long *)(param_1 + 0x1e0) != param_3) {
    *(long *)(param_1 + 0x1e0) = param_3;
    _objc_initWeak(auStack_28,param_1);
    func_0x00010c0f98a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x00010c0f7fc0(param_1);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 106e97f5c; end: 106e97f93;  */

void FUN_106e97f5c(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bf703e0(*(undefined8 *)(param_1 + 0x1a8),param_2,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106e97f94; end: 106e9808b; -[SCSpectaclesDevice setCalibration:] */

void FUN_106e97f94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(param_1);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106e9808c; end: 106e9811f;  */

void FUN_106e9808c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(lVar1 + 0xb0);
    *(undefined8 *)(lVar1 + 0xb0) = uVar2;
    _objc_release(uVar4);
    lVar3 = lVar1;
    func_0x00010bf6ff00(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6fde0();
    _objc_release(lVar3);
    lVar3 = lVar1;
    func_0x00010bf6ff00(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf703e0();
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106e98120; end: 106e98123; -[SCSpectaclesDevice contentState] */

void FUN_106e98120(void)

{
  return;
}



/* Entry: 106e98124; end: 106e9814f; -[SCSpectaclesDevice _resetBatteryState] */

void FUN_106e98124(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = 0;
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + 0x88) = 0;
  return;
}



/* Entry: 106e98150; end: 106e98247; -[SCSpectaclesDevice setTimeOfCaptureLastViewed:] */

void FUN_106e98150(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(param_1);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106e98248; end: 106e982b3;  */

void FUN_106e98248(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
    uVar2 = *(undefined8 *)(lVar1 + 0x178);
    *(undefined8 *)(lVar1 + 0x178) = uVar4;
    _objc_release(uVar2);
    lVar3 = lVar1;
    func_0x00010bf6ff00(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf703e0();
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106e982b4; end: 106e982bb; -[SCSpectaclesDevice firmwareUpdaterSendRequest:] */

void FUN_106e982b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c15c6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x1b0),PTR_s_sendRequest__112634bd8);
  return;
}



/* Entry: 106e982bc; end: 106e982d7; -[SCSpectaclesDevice isUnpaired] */

bool FUN_106e982bc(long param_1)

{
  func_0x00010c252440();
  return param_1 == 0;
}



/* Entry: 106e982d8; end: 106e982f3; -[SCSpectaclesDevice isActive] */

bool FUN_106e982d8(long param_1)

{
  func_0x00010c252440();
  return param_1 == 2;
}



/* Entry: 106e982f4; end: 106e983a3; -[SCSpectaclesDevice _announceStateUpdated] */

void FUN_106e982f4(undefined8 param_1)

{
  func_0x00010c0f98a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fc0();
  _objc_release(param_1);
  return;
}



/* Entry: 106e983a4; end: 106e98407; -[SCSpectaclesDevice _handleConnectionStateDidChange:] */

void FUN_106e983a4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  func_0x00010bdcc520(param_1);
  lVar1 = param_3;
  func_0x00010bf1ca20();
  _objc_release(param_3);
  if (lVar1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be92450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resetBatteryState_1125822b0);
  return;
}



/* Entry: 106e98408; end: 106e9841f; -[SCSpectaclesDevice setState:] */

void FUN_106e98408(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + 0x168) == param_3) {
    return;
  }
  *(long *)(param_1 + 0x168) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdcc530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__announceStateUpdated_112550ae8);
  return;
}



/* Entry: 106e98420; end: 106e98463; -[SCSpectaclesDevice setSetupComplete:] */

void FUN_106e98420(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  
  *(undefined1 *)(param_1 + 0x57) = param_3;
  lVar1 = param_1;
  func_0x00010bf6ff00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf703e0();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdcc530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__announceStateUpdated_112550ae8);
  return;
}



/* Entry: 106e98464; end: 106e9856f; -[SCSpectaclesDevice _observeConnectionState] */

void FUN_106e98464(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  func_0x00010bf48d40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c252740();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 106e98570; end: 106e985b7;  */

void FUN_106e98570(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be27540();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106e985b8; end: 106e987fb; -[SCSpectaclesDevice stateShortCode] */

void FUN_106e985b8(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined **ppuVar2;
  ulong uVar3;
  undefined **ppuVar4;
  
  uVar1 = param_1;
  func_0x00010c252440();
  if (uVar1 < 3) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
    func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110daafd8,param_2,
                        (&PTR_PTR_110981da0)[uVar1]);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  uVar1 = param_1;
  func_0x00010bf48d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c27d000();
  _objc_release(uVar1);
  ppuVar4 = ppuVar2;
  if ((int)uVar3 != 0) {
    func_0x00010c25ce40(ppuVar2,param_2,&PTR____CFConstantStringClassReference_110e8aa78);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
  }
  uVar1 = param_1;
  func_0x00010bf48d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf48920();
  _objc_release(uVar1);
  ppuVar2 = ppuVar4;
  if ((int)uVar3 != 0) {
    func_0x00010c25ce40(ppuVar4,param_2,&PTR____CFConstantStringClassReference_110e8aa98);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar4);
  }
  uVar1 = param_1;
  func_0x00010bf48d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c27d020();
  _objc_release(uVar1);
  ppuVar4 = ppuVar2;
  if ((int)uVar3 != 0) {
    func_0x00010c25ce40(ppuVar2,param_2,&PTR____CFConstantStringClassReference_110e8aab8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
  }
  uVar1 = param_1;
  func_0x00010bf48d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf48960();
  _objc_release(uVar1);
  ppuVar2 = ppuVar4;
  if ((int)uVar3 != 0) {
    func_0x00010c25ce40(ppuVar4,param_2,&PTR____CFConstantStringClassReference_110e8aad8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar4);
  }
  uVar1 = param_1;
  func_0x00010bf48d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c27d060();
  _objc_release(uVar1);
  ppuVar4 = ppuVar2;
  if ((int)uVar3 != 0) {
    func_0x00010c25ce40(ppuVar2,param_2,&PTR____CFConstantStringClassReference_110e8aaf8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
  }
  func_0x00010bf48d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf489a0();
  _objc_release(param_1);
  ppuVar2 = ppuVar4;
  if ((int)uVar1 != 0) {
    func_0x00010c25ce40(ppuVar4,param_2,&PTR____CFConstantStringClassReference_110e8ab18);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 106e987fc; end: 106e9883f; -[SCSpectaclesDevice postPairingCompletionEvent] */

void FUN_106e987fc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x1b0);
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010c104a20(PTR_PTR_1126b6718);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106e98840; end: 106e98857; -[SCSpectaclesDevice supportsPsychomantis] */

ulong FUN_106e98840(ulong param_1)

{
  func_0x00010bf2f9e0();
  return param_1 >> 3 & 1;
}



/* Entry: 106e98858; end: 106e9886f; -[SCSpectaclesDevice supportsBatchRequests] */

ulong FUN_106e98858(ulong param_1)

{
  func_0x00010bf2f9e0();
  return param_1 >> 2 & 1;
}



/* Entry: 106e98870; end: 106e98887; -[SCSpectaclesDevice supportsTaskBatching] */

ulong FUN_106e98870(ulong param_1)

{
  func_0x00010bf2f9e0();
  return param_1 >> 7 & 1;
}



/* Entry: 106e98888; end: 106e9889f; -[SCSpectaclesDevice supportsAutomaticStartAsNeededDeletion] */

ulong FUN_106e98888(ulong param_1)

{
  func_0x00010bf2f9e0();
  return param_1 >> 4 & 1;
}



/* Entry: 106e988a0; end: 106e988b7; -[SCSpectaclesDevice supportsProtectedWifi] */

ulong FUN_106e988a0(ulong param_1)

{
  func_0x00010bf2f9e0();
  return param_1 >> 5 & 1;
}



/* Entry: 106e988b8; end: 106e988cf; -[SCSpectaclesDevice supportsHomeWiFi] */

ulong FUN_106e988b8(ulong param_1)

{
  func_0x00010bf2f9e0();
  return param_1 >> 8 & 1;
}



/* Entry: 106e988d0; end: 106e988e7; -[SCSpectaclesDevice supportsHevc] */

ulong FUN_106e988d0(ulong param_1)

{
  func_0x00010bf2f9e0();
  return param_1 >> 9 & 1;
}



/* Entry: 106e988e8; end: 106e988ff; -[SCSpectaclesDevice supportsAnalyticsLogs] */

ulong FUN_106e988e8(ulong param_1)

{
  func_0x00010bf2f9e0();
  return param_1 >> 10 & 1;
}



/* Entry: 106e98900; end: 106e98917; -[SCSpectaclesDevice supportsManualUnpair] */

ulong FUN_106e98900(ulong param_1)

{
  func_0x00010bf2f9e0();
  return param_1 >> 0xc & 1;
}



/* Entry: 106e98918; end: 106e9892f; -[SCSpectaclesDevice supportsDownloadLogFile] */

ulong FUN_106e98918(ulong param_1)

{
  func_0x00010bf2f9e0();
  return param_1 >> 0x2c & 1;
}



/* Entry: 106e98930; end: 106e98947; -[SCSpectaclesDevice supportsUploadLogFile] */

ulong FUN_106e98930(ulong param_1)

{
  func_0x00010bf2f9e0();
  return param_1 >> 0xd & 1;
}



/* Entry: 106e98948; end: 106e9895f; -[SCSpectaclesDevice supportsContextNotification] */

ulong FUN_106e98948(ulong param_1)

{
  func_0x00010bf2f9e0();
  return param_1 >> 0xe & 1;
}



/* Entry: 106e98960; end: 106e98977; -[SCSpectaclesDevice supportsBluetoothTransferWhileRecording] */

ulong FUN_106e98960(ulong param_1)

{
  func_0x00010bf2f9e0();
  return param_1 >> 0xf & 1;
}



/* Entry: 106e98978; end: 106e9898f; -[SCSpectaclesDevice supportsSuspendingWifiWhileRecording] */

ulong FUN_106e98978(ulong param_1)

{
  func_0x00010bf2f9e0();
  return param_1 >> 0x10 & 1;
}



/* Entry: 106e98990; end: 106e989a7; -[SCSpectaclesDevice supportsImuData] */

ulong FUN_106e98990(ulong param_1)

{
  func_0x00010bf2f9e0();
  return param_1 >> 0x11 & 1;
}



/* Entry: 106e989a8; end: 106e989bf; -[SCSpectaclesDevice supportsBundlingImuDataIntoContentFile] */

ulong FUN_106e989a8(ulong param_1)

{
  func_0x00010bf2f9e0();
  return param_1 >> 0x20 & 1;
}



/* Entry: 106e989c0; end: 106e989d7; -[SCSpectaclesDevice supportsBTC] */

ulong FUN_106e989c0(ulong param_1)

{
  func_0x00010bf2f9e0();
  return param_1 >> 0x13 & 1;
}



/* Entry: 106e989d8; end: 106e989ef; -[SCSpectaclesDevice supportsProxy] */

ulong FUN_106e989d8(ulong param_1)

{
  func_0x00010bf2f9e0();
  return param_1 >> 0x12 & 1;
}



/* Entry: 106e989f0; end: 106e98a07; -[SCSpectaclesDevice supportsLocation] */

ulong FUN_106e989f0(ulong param_1)

{
  func_0x00010bf2f9e0();
  return param_1 >> 0x14 & 1;
}



/* Entry: 106e98a08; end: 106e98a1f; -[SCSpectaclesDevice supportsLowPowerMode] */

ulong FUN_106e98a08(ulong param_1)

{
  func_0x00010bf2f9e0();
  return param_1 >> 0x15 & 1;
}



/* Entry: 106e98a20; end: 106e98a37; -[SCSpectaclesDevice supportsClearCache] */

ulong FUN_106e98a20(ulong param_1)

{
  func_0x00010bf2f9e0();
  return param_1 >> 0x16 & 1;
}



/* Entry: 106e98a38; end: 106e98a4f; -[SCSpectaclesDevice supportLocationProvider] */

ulong FUN_106e98a38(ulong param_1)

{
  func_0x00010bf2f9e0();
  return param_1 >> 0x19 & 1;
}



/* Entry: 106e98a50; end: 106e98a67; -[SCSpectaclesDevice supportsQuickSaveMode] */

ulong FUN_106e98a50(ulong param_1)

{
  func_0x00010bf2f9e0();
  return param_1 >> 0x1a & 1;
}



/* Entry: 106e98a68; end: 106e98a7f; -[SCSpectaclesDevice supportsFactoryReset] */

ulong FUN_106e98a68(ulong param_1)

{
  func_0x00010bf2f9e0();
  return param_1 >> 0x1b & 1;
}



/* Entry: 106e98a80; end: 106e98a97; -[SCSpectaclesDevice supportsDisplayAndAudio] */

ulong FUN_106e98a80(ulong param_1)

{
  func_0x00010bf2f9e0();
  return param_1 >> 0x1c & 1;
}



/* Entry: 106e98a98; end: 106e98aaf; -[SCSpectaclesDevice supportsInternalSettings] */

undefined8 FUN_106e98a98(void)

{
  func_0x00010bf2f9e0();
  return 0;
}



/* Entry: 106e98ab0; end: 106e98ac7; -[SCSpectaclesDevice supportsSpookyInstall] */

ulong FUN_106e98ab0(ulong param_1)

{
  func_0x00010bf2f9e0();
  return param_1 >> 0x2b & 1;
}


