/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106fcd6b4; end: 106fcd6bf; -[SCSpectaclesCrashAmbaAssertError crashReason] */

undefined ** FUN_106fcd6b4(void)

{
  return &PTR____CFConstantStringClassReference_110e17cd8;
}



/* Entry: 106fcd6c0; end: 106fcd6c7; -[SCSpectaclesCrashAmbaAssertError controllerType] */

undefined8 FUN_106fcd6c0(void)

{
  return 0;
}



/* Entry: 106fcd6c8; end: 106fcd773; -[SCSpectaclesCrashLinuxCrashError crashGroupingIdentifier] */

void FUN_106fcd6c8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  func_0x00010bf54020();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0dff20(param_1,param_2,&PTR____CFConstantStringClassReference_110dae8f8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e95a58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106fcd774; end: 106fcd77f; -[SCSpectaclesCrashLinuxCrashError crashReason] */

undefined ** FUN_106fcd774(void)

{
  return &PTR____CFConstantStringClassReference_110e95a78;
}



/* Entry: 106fcd780; end: 106fcd787; -[SCSpectaclesCrashLinuxCrashError controllerType] */

undefined8 FUN_106fcd780(void)

{
  return 0;
}



/* Entry: 106fcd788; end: 106fcd8df; -[SCSpectaclesHDTransferSessionInfo initWithTransferSession:numHdVideos:sessionStartTime:device:] */

undefined1 *
FUN_106fcd788(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f8208;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_7;
    func_0x00010c15e740();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar4);
    uVar2 = param_7;
    func_0x00010bfd38e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar4);
    uVar2 = param_7;
    func_0x00010bfb0d20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar4);
    uVar2 = param_7;
    func_0x00010bf40c40();
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    uVar2 = param_4;
    func_0x00010bdc3580();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar4);
    *(undefined8 *)((long)puVar1 + 0x30) = param_5;
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380();
    *(undefined8 *)((long)puVar1 + 0x38) = param_1;
    _objc_release(puVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 106fcd8e0; end: 106fcd8e7; -[SCSpectaclesHDTransferSessionInfo deviceId] */

undefined8 FUN_106fcd8e0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106fcd8e8; end: 106fcd8ef; -[SCSpectaclesHDTransferSessionInfo firmwareVersion] */

undefined8 FUN_106fcd8e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106fcd8f0; end: 106fcd8f7; -[SCSpectaclesHDTransferSessionInfo hardwareVersion] */

undefined8 FUN_106fcd8f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106fcd8f8; end: 106fcd8ff; -[SCSpectaclesHDTransferSessionInfo deviceColor] */

undefined8 FUN_106fcd8f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106fcd900; end: 106fcd907; -[SCSpectaclesHDTransferSessionInfo transferSessionId] */

undefined8 FUN_106fcd900(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106fcd908; end: 106fcd90f; -[SCSpectaclesHDTransferSessionInfo numHdVideos] */

undefined8 FUN_106fcd908(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106fcd910; end: 106fcd917; -[SCSpectaclesHDTransferSessionInfo durationSec] */

undefined8 FUN_106fcd910(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106fcd918; end: 106fcd91f; -[SCSpectaclesHDTransferSessionInfo deviceStatusState] */

undefined8 FUN_106fcd918(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106fcd920; end: 106fcd927; -[SCSpectaclesHDTransferSessionInfo setDeviceStatusState:] */

void FUN_106fcd920(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 106fcd928; end: 106fcd96f; -[SCSpectaclesHDTransferSessionInfo .cxx_destruct] */

void FUN_106fcd928(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106fcd970; end: 106fcda9f;  */

void FUN_106fcd970(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  puVar1 = PTR_PTR_1126d3178;
  _objc_opt_class(PTR_PTR_1126d3178);
  puVar2 = puVar3;
  func_0x00010bf249e0(puVar3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  func_0x00010c0f5960();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf24ca0(puVar3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106fcdaa0; end: 106fcdb13; +[SCSpectaclesCryptoHelper nonceWithLength:] */

void FUN_106fcdaa0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
  _objc_alloc();
  func_0x00010c022640();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    _objc_retainAutorelease(puVar1);
    func_0x00010c0d3c60();
    func_0x0001001e47a4();
    puVar2 = puVar1;
    func_0x00010bf51e00(puVar1);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106fcdb14; end: 106fcdbc7; +[SCSpectaclesCryptoHelper vendorData] */

void FUN_106fcdb14(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_38 [16];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfe5f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010bfcb980(puVar2,param_2,auStack_38);
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64a00(PTR__OBJC_CLASS___NSData_1126ae778,param_2,auStack_38,0x10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
    func_0x00010c14dd40(PTR__OBJC_CLASS___NSBundle_1126aea78);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c0f5960();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf64a80(PTR__OBJC_CLASS___NSData_1126ae778,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106fcdbc8; end: 106fcdc47; +[SCSpectaclesCryptoHelper mfiPublicKey] */

void FUN_106fcdbc8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c14dd40(PTR__OBJC_CLASS___NSBundle_1126aea78);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0f5960();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64a80(PTR__OBJC_CLASS___NSData_1126ae778,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106fcdc48; end: 106fcdcc7; +[SCSpectaclesCryptoHelper mfiMagicVersion] */

void FUN_106fcdc48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c14dd40(PTR__OBJC_CLASS___NSBundle_1126aea78);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0f5960();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64a80(PTR__OBJC_CLASS___NSData_1126ae778,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106fcdcc8; end: 106fcdd7f; +[SCSpectaclesCryptoHelper peerVerifPublicKeyForVersion:] */

void FUN_106fcdcc8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (((param_3 == 1) || (param_3 == 5)) || (param_3 == 3)) {
    puVar2 = PTR__OBJC_CLASS___NSBundle_1126aea78;
    func_0x00010c14dd40(PTR__OBJC_CLASS___NSBundle_1126aea78);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    func_0x00010c0f5960();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf64a80(PTR__OBJC_CLASS___NSData_1126ae778,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  else {
    puVar2 = (undefined *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106fcdd80; end: 106fcdd87; +[SCSpectaclesCryptoHelper mfiPublicKeyDevelopment] */

undefined8 FUN_106fcdd80(void)

{
  return 0;
}



/* Entry: 106fcdd88; end: 106fcdd8f; +[SCSpectaclesCryptoHelper mfiMagicVersionDevelopment] */

undefined8 FUN_106fcdd88(void)

{
  return 0;
}



/* Entry: 106fcdd90; end: 106fcde0f; +[SCSpectaclesCryptoHelper appAuthPrivateKey] */

void FUN_106fcdd90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c14dd60(PTR__OBJC_CLASS___NSBundle_1126aea78);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0f5960();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64a80(PTR__OBJC_CLASS___NSData_1126ae778,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106fcde10; end: 106fcde53; +[SCSpectaclesCryptoHelper verificationCodeLaguna] */

void FUN_106fcde10(undefined8 param_1,undefined8 param_2)

{
  undefined2 uStack_13;
  undefined1 uStack_11;
  
  uStack_13 = 0x5420;
  uStack_11 = 0x50;
  func_0x00010bf64a00(PTR__OBJC_CLASS___NSData_1126ae778,param_2,&uStack_13,3);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fcde54; end: 106fcdebb; +[SCSpectaclesCryptoHelper _certWithBundle:resource:] */

void FUN_106fcde54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x00010c0f5960(param_3,param_2,param_4,&PTR____CFConstantStringClassReference_110e95af8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010c004040();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106fcdebc; end: 106fcdffb; +[SCSpectaclesCryptoHelper hermosaCertChains] */

undefined1 * FUN_106fcdebc(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined1 **ppuStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined **ppuStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c14dd40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_1;
  func_0x00010bddc7c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  uStack_58 = uVar10;
  func_0x00010c14dd40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bddc7c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_50 = param_1;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(uVar10);
  _objc_release(puVar1);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar3;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    ppuVar9 = &puStack_c0;
    ppuStack_a0 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
    pcStack_68 = FUN_106fcdffc;
    lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar6 = PTR__OBJC_CLASS___NSBundle_1126aea78;
    puStack_98 = puVar3;
    puStack_90 = puVar2;
    uStack_88 = uVar10;
    puStack_80 = puVar1;
    puStack_78 = puVar4;
    puStack_70 = &stack0xfffffffffffffff0;
    func_0x00010c14dd40();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar5;
    func_0x00010bddc7c0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSBundle_1126aea78;
    puStack_b8 = puVar1;
    func_0x00010c14dd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bddc7c0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_b0 = puVar5;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(puVar6);
    uVar10 = 1;
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_c0 = puVar3;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_a8) {
      ___stack_chk_fail();
      ppuVar7 = &puStack_100;
      pcStack_c8 = FUN_106fce13c;
      puStack_f0 = puVar2;
      puStack_e8 = puVar1;
      puStack_e0 = puVar6;
      puStack_d8 = puVar4;
      ppuStack_d0 = &puStack_70;
      _objc_retain(ppuVar9);
      puStack_f8 = PTR_PTR_1126f8210;
      puStack_100 = puVar3;
      _objc_msgSendSuper2(&puStack_100,PTR_s_init_1125d9248);
      if (ppuVar7 != (undefined **)0x0) {
        _objc_retain(ppuVar9);
        uVar8 = *(undefined8 *)((long)ppuVar7 + 8);
        *(undefined ***)((long)ppuVar7 + 8) = ppuVar9;
        _objc_release(uVar8);
        *(undefined8 *)((long)ppuVar7 + 0x10) = uVar10;
      }
      _objc_release(ppuVar9);
      return (undefined1 *)ppuVar7;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return puVar4;
}



/* Entry: 106fcdffc; end: 106fce13b; +[SCSpectaclesCryptoHelper cheeriosCertChains:] */

undefined1 * FUN_106fcdffc(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  ppuVar7 = &puStack_60;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c14dd40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010bddc7c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  uStack_58 = uVar6;
  func_0x00010c14dd40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bddc7c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_50 = param_1;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(uVar6);
  _objc_release(puVar1);
  uVar8 = 1;
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar3;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return puVar4;
  }
  ___stack_chk_fail();
  ppuVar5 = &puStack_a0;
  pcStack_68 = FUN_106fce13c;
  puStack_90 = puVar2;
  uStack_88 = uVar6;
  puStack_80 = puVar1;
  puStack_78 = puVar4;
  puStack_70 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar7);
  puStack_98 = PTR_PTR_1126f8210;
  puStack_a0 = puVar3;
  _objc_msgSendSuper2(&puStack_a0,PTR_s_init_1125d9248);
  if (ppuVar5 != (undefined **)0x0) {
    _objc_retain(ppuVar7);
    uVar6 = *(undefined8 *)((long)ppuVar5 + 8);
    *(undefined ***)((long)ppuVar5 + 8) = ppuVar7;
    _objc_release(uVar6);
    *(undefined8 *)((long)ppuVar5 + 0x10) = uVar8;
  }
  _objc_release(ppuVar7);
  return (undefined1 *)ppuVar5;
}



/* Entry: 106fce13c; end: 106fce1bf; -[SCSpectaclesDeviceLogFile initWithFilename:fileSize:] */

undefined1 *
FUN_106fce13c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f8210;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106fce1c0; end: 106fce1c7; -[SCSpectaclesDeviceLogFile filename] */

undefined8 FUN_106fce1c0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106fce1c8; end: 106fce1cf; -[SCSpectaclesDeviceLogFile fileSize] */

undefined8 FUN_106fce1c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106fce1d0; end: 106fce1db; -[SCSpectaclesDeviceLogFile .cxx_destruct] */

void FUN_106fce1d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106fce1dc; end: 106fce1ff; +[SCSpectaclesFile _suffixForType:] */

undefined * FUN_106fce1dc(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 2U < 0xb) {
    return (&PTR_PTR_110987370)[param_3 - 2U];
  }
  return (undefined *)0x0;
}



/* Entry: 106fce200; end: 106fce223; +[SCSpectaclesFile _extensionForType:] */

undefined * FUN_106fce200(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 0xd) {
    return (&PTR_PTR_1109873c8)[param_3 - 1U];
  }
  return (undefined *)0x0;
}



/* Entry: 106fce224; end: 106fce31b; +[SCSpectaclesFile contentTypeForExtension:] */

undefined8 FUN_106fce224(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  func_0x00010c28ed80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0720c0();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e8a618);
    if ((uVar1 & 1) == 0) {
      uVar1 = param_3;
      func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e8a678);
      if ((uVar1 & 1) == 0) {
        uVar1 = param_3;
        func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e8a658);
        if ((uVar1 & 1) == 0) {
          uVar1 = param_3;
          func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e8a698);
          if ((uVar1 & 1) == 0) {
            uVar1 = param_3;
            func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e8f8f8);
            if ((uVar1 & 1) == 0) {
              uVar1 = param_3;
              func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e95d18);
              uVar2 = 0xd;
              if ((int)uVar1 == 0) {
                uVar2 = 0;
              }
            }
            else {
              uVar2 = 4;
            }
          }
          else {
            uVar2 = 5;
          }
        }
        else {
          uVar2 = 6;
        }
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 3;
    }
  }
  else {
    uVar2 = 8;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 106fce31c; end: 106fce41f; +[SCSpectaclesFile contentNameFromRemoteFilename:] */

void FUN_106fce31c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  _objc_opt_class(param_1);
  func_0x00010bfad140();
  lVar2 = param_1;
  func_0x00010bec8d00(param_1,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be0d6a0(param_1,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  if (lVar2 == 0) {
    if (param_1 == 0) {
      uVar4 = 0;
      goto LAB_106fce3e8;
    }
    func_0x00010c0899c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c25cea0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0899c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c25cfc0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar3);
LAB_106fce3e8:
  _objc_release(param_1);
  _objc_release(lVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106fce420; end: 106fce52f; +[SCSpectaclesFile fileTypeFromRemoteFilename:] */

undefined8 FUN_106fce420(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = 0;
  do {
    uVar4 = *(undefined8 *)(&UNK_10de1e408 + lVar5);
    uVar1 = param_1;
    func_0x00010bec8d00(param_1,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010bfdcf80(param_3,param_2,uVar1);
    if ((uVar2 & 1) != 0) goto LAB_106fce504;
    _objc_release(uVar1);
    lVar5 = lVar5 + 8;
  } while (lVar5 != 0x30);
  lVar5 = 0;
  do {
    uVar4 = *(undefined8 *)(&UNK_10de1e438 + lVar5);
    uVar1 = param_1;
    func_0x00010be0d6a0(param_1,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0f58c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    if ((uVar3 & 1) != 0) goto LAB_106fce504;
    _objc_release(uVar1);
    lVar5 = lVar5 + 8;
  } while (lVar5 != 0x38);
  uVar4 = 0;
LAB_106fce50c:
  _objc_release(param_3);
  return uVar4;
LAB_106fce504:
  _objc_release(uVar1);
  goto LAB_106fce50c;
}



/* Entry: 106fce530; end: 106fce5db;  */

void FUN_106fce530(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d2f50;
  func_0x00010be0d6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d2f50;
  func_0x00010bec8d00(PTR_PTR_1126d2f50,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    if (puVar2 == (undefined *)0x0) {
      param_1 = 0;
    }
    else {
      func_0x00010c25ce40(param_1,param_2,puVar2);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    func_0x00010c25ce20(param_1,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106fce5dc; end: 106fce6c7; -[SCSpectaclesFile initWithCache:localFilename:remoteFilename:remoteFileSize:supportsUnsafeWrites:] */

undefined1 *
FUN_106fce5dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f8218;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x30) = 0xffffffffffffffff;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    *(undefined1 *)((long)puVar1 + 8) = param_7;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106fce6c8; end: 106fce70b; -[SCSpectaclesFile dealloc] */

void FUN_106fce6c8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010bde1600();
  puStack_28 = PTR_PTR_1126f8218;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106fce70c; end: 106fce7d3; -[SCSpectaclesFile dataFromLocalFileWithRange:] */

void FUN_106fce70c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010c09d8e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf64aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = puVar1;
  func_0x00010c08fa60(puVar1);
  _NSIntersectionRange(param_3,param_4,0,puVar2);
  puVar3 = puVar1;
  func_0x00010c25eac0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c08fa60();
  puVar2 = (undefined *)0x0;
  if (puVar4 != (undefined *)0x0) {
    puVar2 = puVar3;
  }
  _objc_retain(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106fce7d4; end: 106fce8df; -[SCSpectaclesFile appendData:range:] */

undefined1 FUN_106fce7d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  uStack_48 = 0;
  puVar2 = PTR_PTR_1126d2f50;
  func_0x00010be72ee0(PTR_PTR_1126d2f50);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010c0f8240(puVar2);
  _objc_release(puVar2);
  uVar1 = *(undefined1 *)(puStack_58 + 3);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 106fce8e0; end: 106fcea67;  */

/* WARNING: Removing unreachable block (ram,0x000106fcea1c) */

void FUN_106fce8e0(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010be6d1a0();
  if (iVar1 == 0) {
    return;
  }
  lVar5 = *(long *)(param_1 + 0x38);
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bfacca0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 == 0x7fffffffffffffff) {
    lVar5 = lVar2;
    func_0x00010c157180();
  }
  else {
    func_0x00010c1571a0(lVar2);
  }
  _objc_release(lVar2);
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x00010c08fa60();
  uVar3 = *(ulong *)(param_1 + 0x20);
  func_0x00010c12a120();
  if (uVar3 < (ulong)(lVar2 + lVar5)) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010c263cc0();
    if (iVar1 == 0) goto LAB_106fcea08;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfacca0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bda00();
  _objc_release(uVar4);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfacca0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c266ba0();
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfacca0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c157180();
  func_0x00010c1b8040(*(undefined8 *)(param_1 + 0x20));
  _objc_release(uVar4);
LAB_106fcea08:
                    /* WARNING: Could not recover jumptable at 0x00010bde1610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s__closeFile_112555f20)
  ;
  return;
}



/* Entry: 106fcea68; end: 106fceb43; -[SCSpectaclesFile localFileSize] */

undefined8 FUN_106fcea68(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  lVar1 = param_1;
  func_0x00010c0892a0();
  lStack_28 = lVar1;
  func_0x00010c0892a0();
  if (param_1 == -1) {
    puVar2 = PTR_PTR_1126d2f50;
    func_0x00010be72ee0(PTR_PTR_1126d2f50);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f8240();
    _objc_release(puVar2);
  }
  uVar3 = puStack_38[3];
  __Block_object_dispose(&uStack_40,8);
  return uVar3;
}



/* Entry: 106fceb44; end: 106fceb93;  */

void FUN_106fceb44(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c0892a0();
  if (lVar1 == -1) {
    func_0x00010be6d1a0(*(undefined8 *)(param_1 + 0x20));
    func_0x00010bde1600(*(undefined8 *)(param_1 + 0x20));
  }
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0892a0();
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = uVar2;
  return;
}



/* Entry: 106fceb94; end: 106fcec1b; -[SCSpectaclesFile setLocalFileSize:] */

void FUN_106fceb94(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d2f50;
  func_0x00010be72ee0(PTR_PTR_1126d2f50);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8240();
  _objc_release(puVar1);
  return;
}



/* Entry: 106fcec1c; end: 106fcec23;  */

void FUN_106fcec1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1b8050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setLastKnownFileSize__11264ba38,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106fcec24; end: 106fcecaf; -[SCSpectaclesFile localFilePath] */

void FUN_106fcec24(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010bf262a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bdc2e80(uVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106fcecb0; end: 106fced2b; -[SCSpectaclesFile _removeFromDisk] */

void FUN_106fcecb0(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d2f50;
  func_0x00010be72ee0(PTR_PTR_1126d2f50);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fc0();
  _objc_release(puVar1);
  return;
}



/* Entry: 106fced2c; end: 106fcee23;  */

void FUN_106fced2c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_48;
  
  func_0x00010bde1600(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c1ea280(*(undefined8 *)(param_1 + 0x20),param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c09d8e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bfacbe0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(puVar1);
  if ((int)puVar3 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c09d8e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uStack_48 = 0;
    func_0x00010c12cc40(puVar1,param_2,uVar4,&uStack_48);
    uVar2 = uStack_48;
    _objc_retain(uStack_48);
    _objc_release(uVar4);
    _objc_release(puVar1);
    _objc_release(uVar2);
  }
  return;
}



/* Entry: 106fcee24; end: 106fcef53; +[SCSpectaclesFile removeFilesFromDisk:completion:] */

void FUN_106fcee24(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_158;
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
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar2 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_110,auStack_c8,0x10);
  if (lVar2 != 0) {
    lVar5 = *plStack_100;
    do {
      lVar6 = 0;
      do {
        if (*plStack_100 != lVar5) {
          _objc_enumerationMutation(param_3);
        }
        func_0x00010be8c2c0(*(undefined8 *)(lStack_108 + lVar6 * 8));
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      lVar2 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar2 != 0);
  }
  if (param_4 != 0) {
    puVar3 = PTR_PTR_1126d2f50;
    func_0x00010be72ee0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f7fc0();
    _objc_release(puVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bde1600();
  puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c09d8e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bfacbe0(puVar3,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(puVar3);
  if ((int)puVar4 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c09d8e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uStack_158 = 0;
    func_0x00010c12cc40(puVar3,param_2,lVar2,&uStack_158);
    uVar1 = uStack_158;
    _objc_retain(uStack_158);
    _objc_release(lVar2);
    _objc_release(puVar3);
    _objc_release(uVar1);
  }
  func_0x00010c1b8040(param_3,param_2,0);
  return;
}



/* Entry: 106fcef54; end: 106fcf047; -[SCSpectaclesFile removeFromDiskForExport] */

void FUN_106fcef54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_48;
  
  func_0x00010bde1600();
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c09d8e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bfacbe0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(puVar1);
  if ((int)puVar3 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010c09d8e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uStack_48 = 0;
    func_0x00010c12cc40(puVar1,param_2,uVar4,&uStack_48);
    uVar2 = uStack_48;
    _objc_retain(uStack_48);
    _objc_release(uVar4);
    _objc_release(puVar1);
    _objc_release(uVar2);
  }
  func_0x00010c1b8040(param_1,param_2,0);
  return;
}



/* Entry: 106fcf048; end: 106fcf057; -[SCSpectaclesFile isConfigured] */

bool FUN_106fcf048(long param_1)

{
  return *(long *)(param_1 + 0x28) != 0;
}



/* Entry: 106fcf058; end: 106fcf0ab; -[SCSpectaclesFile extraDiskSpaceSizeInBytesNeededForDownloading] */

long FUN_106fcf058(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010c12a120();
  lVar1 = param_1;
  func_0x00010c09d900();
  if (lVar2 < lVar1) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_1;
    func_0x00010c12a120(param_1);
    func_0x00010c09d900(param_1);
    lVar2 = lVar2 - param_1;
  }
  return lVar2;
}



/* Entry: 106fcf0ac; end: 106fcf177; -[SCSpectaclesFile initWithCoder:] */

undefined1 * FUN_106fcf0ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f8218;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x30) = 0xffffffffffffffff;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106fcf178; end: 106fcf227; -[SCSpectaclesFile encodeWithCoder:] */

void FUN_106fcf178(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c09d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e95d38);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c12a100(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e95d58);
  _objc_release(uVar1);
  func_0x00010c12a120(param_1);
  func_0x00010bf92fc0(param_3,param_2,param_1,&PTR____CFConstantStringClassReference_110e95d78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106fcf228; end: 106fcf27b; +[SCSpectaclesFile _performer] */

void FUN_106fcf228(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136c9d80 != -1) {
    func_0x00010002a2fc(0x1136c9d80,&PTR___NSConcreteGlobalBlock_110987460);
  }
  uVar1 = uRam00000001136c9d78;
  _objc_retain(uRam00000001136c9d78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106fcf27c; end: 106fcf2bf;  */

void FUN_106fcf27c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126ae790;
  _objc_alloc();
  func_0x00010c021520();
  uVar1 = puRam00000001136c9d78;
  puRam00000001136c9d78 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106fcf2c0; end: 106fcf497; -[SCSpectaclesFile _openFile] */

bool FUN_106fcf2c0(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar2 = param_1;
  func_0x00010bfacca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar3 = PTR__OBJC_CLASS___NSFileHandle_1126bc690;
  if (lVar2 == 0) {
    lVar2 = param_1;
    func_0x00010c09d8e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfacd00(puVar3,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19bac0(param_1,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010bfacca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
      func_0x00010bf69bc0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010c09d8e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bf561e0(puVar3,param_2,lVar2,0,0);
      _objc_release(lVar2);
      _objc_release(puVar3);
      if ((int)puVar4 == 0) {
        return false;
      }
      func_0x00010c1b8040(param_1,param_2,0);
      puVar3 = PTR__OBJC_CLASS___NSFileHandle_1126bc690;
      lVar2 = param_1;
      func_0x00010c09d8e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfacd00(puVar3,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19bac0(param_1,param_2,puVar3);
      _objc_release(puVar3);
      _objc_release(lVar2);
    }
    lVar2 = param_1;
    func_0x00010bfacca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      lVar2 = param_1;
      func_0x00010bfacca0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar2;
      func_0x00010c157180();
      func_0x00010c1b8040(param_1,param_2,lVar5);
      _objc_release(lVar2);
    }
    func_0x00010bfacca0(param_1);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = param_1 != 0;
    _objc_release();
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 106fcf498; end: 106fcf4ff; -[SCSpectaclesFile _closeFile] */

void FUN_106fcf498(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bfacca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010bfacca0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3dba0();
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c19bad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setFileHandle__1126448d0,0);
    return;
  }
  return;
}



/* Entry: 106fcf500; end: 106fcf507; -[SCSpectaclesFile localFilename] */

undefined8 FUN_106fcf500(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106fcf508; end: 106fcf50f; -[SCSpectaclesFile setLocalFilename:] */

void FUN_106fcf508(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106fcf510; end: 106fcf517; -[SCSpectaclesFile remoteFileName] */

undefined8 FUN_106fcf510(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106fcf518; end: 106fcf51f; -[SCSpectaclesFile setRemoteFileName:] */

void FUN_106fcf518(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106fcf520; end: 106fcf527; -[SCSpectaclesFile remoteFileSize] */

undefined8 FUN_106fcf520(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106fcf528; end: 106fcf52f; -[SCSpectaclesFile setRemoteFileSize:] */

void FUN_106fcf528(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 106fcf530; end: 106fcf537; -[SCSpectaclesFile cache] */

undefined8 FUN_106fcf530(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106fcf538; end: 106fcf567; -[SCSpectaclesFile setCache:] */

void FUN_106fcf538(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106fcf568; end: 106fcf56f; -[SCSpectaclesFile lastKnownFileSize] */

undefined8 FUN_106fcf568(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106fcf570; end: 106fcf577; -[SCSpectaclesFile setLastKnownFileSize:] */

void FUN_106fcf570(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 106fcf578; end: 106fcf57f; -[SCSpectaclesFile fileHandle] */

undefined8 FUN_106fcf578(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106fcf580; end: 106fcf5af; -[SCSpectaclesFile setFileHandle:] */

void FUN_106fcf580(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106fcf5b0; end: 106fcf5b7; -[SCSpectaclesFile supportsUnsafeWrites] */

undefined1 FUN_106fcf5b0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106fcf5b8; end: 106fcf5bf; -[SCSpectaclesFile setSupportsUnsafeWrites:] */

void FUN_106fcf5b8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 106fcf5c0; end: 106fcf607; -[SCSpectaclesFile .cxx_destruct] */

void FUN_106fcf5c0(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106fcf608; end: 106fcf67b; +[SCSpectaclesFirmwareUpdateParameters activeUpdateParametersWithTargetVersion:targetDigest:] */

void FUN_106fcf608(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(param_1);
  func_0x00010c050ce0(0);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106fcf67c; end: 106fcf70f; +[SCSpectaclesFirmwareUpdateParameters passiveUpdateParametersWithTargetVersion:targetDigest:updateWindowStart:windowLength:] */

void FUN_106fcf67c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc(param_2);
  func_0x00010c050ce0(param_1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 106fcf710; end: 106fcf7fb; -[SCSpectaclesFirmwareUpdateParameters initWithTargetVersion:targetDigest:updateWindowStart:windowLength:updateIsActive:] */

undefined1 *
FUN_106fcf710(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126f8220;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
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
    *(undefined8 *)((long)puVar1 + 0x28) = param_1;
    *(undefined1 *)((long)puVar1 + 8) = param_7;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 106fcf7fc; end: 106fcf913; -[SCSpectaclesFirmwareUpdateParameters initWithCoder:] */

undefined1 *
FUN_106fcf7fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_4);
  puStack_28 = PTR_PTR_1126f8220;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    func_0x00010bf66da0(param_4);
    *(undefined8 *)((long)puVar1 + 0x28) = param_1;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = 0;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 106fcf914; end: 106fcfa1f; -[SCSpectaclesFirmwareUpdateParameters encodeWithCoder:] */

void FUN_106fcf914(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c26a240(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e95db8);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c269e80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e95dd8);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c28c3a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e95df8);
  _objc_release(uVar1);
  func_0x00010c28c380(param_1);
  func_0x00010bf92e80(param_3,param_2,&PTR____CFConstantStringClassReference_110e95e18);
  func_0x00010c292820(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,param_1,&PTR____CFConstantStringClassReference_110e510d8);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106fcfa20; end: 106fcfb97; -[SCSpectaclesFirmwareUpdateParameters matchesParameters:withErrorMargin:] */

undefined8 FUN_106fcfa20(double param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  
  dVar6 = param_1;
  _objc_retain(param_4);
  uVar1 = param_2;
  func_0x00010c26a240();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_4;
  func_0x00010c26a240(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c072160(uVar1,param_3,uVar5);
  if ((uVar2 & 1) == 0) {
LAB_106fcfb24:
    _objc_release(uVar5);
    _objc_release(uVar1);
  }
  else {
    uVar2 = param_2;
    func_0x00010c269e80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010c269e80(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0720c0(uVar2,param_3,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_release(uVar1);
    if ((int)uVar4 != 0) {
      uVar1 = param_2;
      func_0x00010c28c3a0(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_4;
      func_0x00010c28c3a0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f380(uVar1,param_3,uVar5);
      dVar6 = ABS(dVar6);
      if (param_1 < dVar6) goto LAB_106fcfb24;
      func_0x00010c28c380(param_2);
      dVar7 = dVar6;
      func_0x00010c28c380(param_4);
      _objc_release(uVar5);
      _objc_release(uVar1);
      if (ABS(dVar6 - dVar7) <= param_1) {
        uVar5 = 1;
        goto LAB_106fcfb38;
      }
    }
  }
  uVar5 = 0;
LAB_106fcfb38:
  _objc_release(param_4);
  return uVar5;
}



/* Entry: 106fcfb98; end: 106fcfb9f; -[SCSpectaclesFirmwareUpdateParameters targetVersion] */

undefined8 FUN_106fcfb98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106fcfba0; end: 106fcfbcf; -[SCSpectaclesFirmwareUpdateParameters setTargetVersion:] */

void FUN_106fcfba0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106fcfbd0; end: 106fcfbd7; -[SCSpectaclesFirmwareUpdateParameters targetDigest] */

undefined8 FUN_106fcfbd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106fcfbd8; end: 106fcfbdf; -[SCSpectaclesFirmwareUpdateParameters setTargetDigest:] */

void FUN_106fcfbd8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106fcfbe0; end: 106fcfbe7; -[SCSpectaclesFirmwareUpdateParameters updateWindowStart] */

undefined8 FUN_106fcfbe0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106fcfbe8; end: 106fcfc17; -[SCSpectaclesFirmwareUpdateParameters setUpdateWindowStart:] */

void FUN_106fcfbe8(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106fcfc18; end: 106fcfc1f; -[SCSpectaclesFirmwareUpdateParameters updateWindowLength] */

undefined8 FUN_106fcfc18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106fcfc20; end: 106fcfc27; -[SCSpectaclesFirmwareUpdateParameters setUpdateWindowLength:] */

void FUN_106fcfc20(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x28) = param_1;
  return;
}



/* Entry: 106fcfc28; end: 106fcfc2f; -[SCSpectaclesFirmwareUpdateParameters updateIsActive] */

undefined1 FUN_106fcfc28(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106fcfc30; end: 106fcfc37; -[SCSpectaclesFirmwareUpdateParameters setUpdateIsActive:] */

void FUN_106fcfc30(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 106fcfc38; end: 106fcfc3f; -[SCSpectaclesFirmwareUpdateParameters userInfo] */

undefined8 FUN_106fcfc38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106fcfc40; end: 106fcfc6f; -[SCSpectaclesFirmwareUpdateParameters setUserInfo:] */

void FUN_106fcfc40(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106fcfc70; end: 106fcfcb7; -[SCSpectaclesFirmwareUpdateParameters .cxx_destruct] */

void FUN_106fcfc70(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106fcfcb8; end: 106fcfd7f; -[SCSpectaclesRemoteFile initWithRemoteFilename:size:] */

undefined1 *
FUN_106fcfcb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f8228;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126d2f50;
    func_0x00010bf4ccc0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126d2f50;
    func_0x00010bfad140();
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    if (*(long *)((long)puVar1 + 8) == 0) {
      puVar4 = (undefined1 *)0x0;
      goto LAB_106fcfd58;
    }
  }
  _objc_retain(puVar1);
  puVar4 = (undefined1 *)puVar1;
LAB_106fcfd58:
  _objc_release(param_3);
  _objc_release(puVar1);
  return puVar4;
}



/* Entry: 106fcfd80; end: 106fcfe07; -[SCSpectaclesRemoteFile initWithRemoteContentName:type:size:] */

undefined1 *
FUN_106fcfd80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f8228;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106fcfe08; end: 106fcfe5f; -[SCSpectaclesRemoteFile remoteFilename] */

void FUN_106fcfe08(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010bf4cca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27dd80(param_1);
  uVar2 = uVar1;
  func_0x00010c12a160(uVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106fcfe60; end: 106fcfe67; -[SCSpectaclesRemoteFile contentName] */

undefined8 FUN_106fcfe60(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106fcfe68; end: 106fcfe6f; -[SCSpectaclesRemoteFile type] */

undefined8 FUN_106fcfe68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


