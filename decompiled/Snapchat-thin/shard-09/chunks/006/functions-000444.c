/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106fcfe70; end: 106fcfe77; -[SCSpectaclesRemoteFile size] */

undefined8 FUN_106fcfe70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106fcfe78; end: 106fcfe83; -[SCSpectaclesRemoteFile .cxx_destruct] */

void FUN_106fcfe78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106fcfe84; end: 106fcfed7;  */

void FUN_106fcfe84(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c28ed80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c25cfc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106fcfed8; end: 106fcff7b;  */

void FUN_106fcfed8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c25cea0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d3c80();
  _objc_release(uVar1);
  _objc_release(param_1);
  func_0x00010c066ec0(uVar2,param_2,&PTR____CFConstantStringClassReference_110db3638,8);
  func_0x00010c066ec0(uVar2,param_2,&PTR____CFConstantStringClassReference_110db3638,0xd);
  func_0x00010c066ec0(uVar2,param_2,&PTR____CFConstantStringClassReference_110db3638,0x12);
  func_0x00010c066ec0(uVar2,param_2,&PTR____CFConstantStringClassReference_110db3638,0x17);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106fcff7c; end: 106fcffa3;  */

void FUN_106fcff7c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf41630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3fea3a3a3a3a3a3a,0x3fe8d8d8d8d8d8d9,0x3fe8181818181818,0x3ff0000000000000,
             PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_colorWithRed_green_blue_alpha__1125adf30);
  return;
}



/* Entry: 106fcffa4; end: 106fd0037; -[SCSpectaclesFirmwareVersion initWithString:] */

undefined1 * FUN_106fcffa4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f8230;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if ((puVar1 == (undefined8 *)0x0) ||
     (puVar2 = (undefined1 *)puVar1, func_0x00010be70620(), (int)puVar2 != 0)) {
    _objc_retain(puVar1);
    puVar2 = (undefined1 *)puVar1;
  }
  else {
    puVar2 = (undefined1 *)0x0;
  }
  _objc_release(param_3);
  _objc_release(puVar1);
  return puVar2;
}



/* Entry: 106fd0038; end: 106fd00cf; +[SCSpectaclesFirmwareVersion isVersionStringValid:] */

bool FUN_106fd0038(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_opt_class(param_1);
  func_0x00010beb2100();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c08fa60(param_3);
  lVar2 = param_1;
  func_0x00010bfb1800(param_1,param_2,param_3,0,0,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar2);
  _objc_release(param_1);
  return lVar2 != 0;
}



/* Entry: 106fd00d0; end: 106fd01c3; -[SCSpectaclesFirmwareVersion compare:] */

ulong FUN_106fd00d0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c0b6e60();
  lVar2 = param_3;
  func_0x00010c0b6e60();
  if (lVar2 <= lVar1) {
    lVar1 = param_1;
    func_0x00010c0b6e60();
    lVar2 = param_3;
    func_0x00010c0b6e60();
    if (lVar2 < lVar1) {
LAB_106fd0130:
      uVar3 = 1;
      goto LAB_106fd0134;
    }
    lVar1 = param_1;
    func_0x00010c0ce800();
    lVar2 = param_3;
    func_0x00010c0ce800();
    if (lVar2 <= lVar1) {
      lVar1 = param_1;
      func_0x00010c0ce800();
      lVar2 = param_3;
      func_0x00010c0ce800();
      if (lVar2 < lVar1) goto LAB_106fd0130;
      lVar1 = param_1;
      func_0x00010c0f57e0();
      lVar2 = param_3;
      func_0x00010c0f57e0();
      if (lVar2 <= lVar1) {
        func_0x00010c0f57e0(param_1);
        lVar1 = param_3;
        func_0x00010c0f57e0(param_3);
        uVar3 = (ulong)(lVar1 < param_1);
        goto LAB_106fd0134;
      }
    }
  }
  uVar3 = 0xffffffffffffffff;
LAB_106fd0134:
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 106fd01c4; end: 106fd01df; -[SCSpectaclesFirmwareVersion isVersionGreaterThan:] */

bool FUN_106fd01c4(long param_1)

{
  func_0x00010bf433a0();
  return param_1 == 1;
}



/* Entry: 106fd01e0; end: 106fd030f; -[SCSpectaclesFirmwareVersion isEqualToVersion:] */

long FUN_106fd01e0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = param_1;
  func_0x00010c0b6e60();
  lVar1 = param_3;
  func_0x00010c0b6e60();
  if (lVar4 == lVar1) {
    lVar4 = param_1;
    func_0x00010c0ce800();
    lVar1 = param_3;
    func_0x00010c0ce800();
    if (lVar4 == lVar1) {
      lVar4 = param_1;
      func_0x00010c0f57e0();
      lVar1 = param_3;
      func_0x00010c0f57e0();
      if (lVar4 == lVar1) {
        lVar1 = param_1;
        func_0x00010c261ce0();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = param_3;
        func_0x00010c261ce0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar1 == lVar2) {
          lVar4 = 1;
        }
        else {
          func_0x00010c261ce0(param_1);
          _objc_retainAutoreleasedReturnValue();
          lVar3 = param_3;
          func_0x00010c261ce0(param_3);
          _objc_retainAutoreleasedReturnValue();
          lVar4 = param_1;
          func_0x00010c0720c0(param_1,param_2,lVar3);
          _objc_release(lVar3);
          _objc_release(param_1);
        }
        _objc_release(lVar2);
        _objc_release(lVar1);
        goto LAB_106fd02d8;
      }
    }
  }
  lVar4 = 0;
LAB_106fd02d8:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 106fd0310; end: 106fd0383; -[SCSpectaclesFirmwareVersion isEqual:] */

ulong FUN_106fd0310(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    param_1 = 1;
  }
  else {
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      param_1 = 0;
    }
    else {
      func_0x00010c072160(param_1);
    }
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 106fd0384; end: 106fd0457; -[SCSpectaclesFirmwareVersion hash] */

ulong FUN_106fd0384(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  ulong auStack_48 [4];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = param_1;
  func_0x00010c0b6e60();
  uVar1 = param_1;
  func_0x00010c0ce800();
  uVar2 = param_1;
  auStack_48[1] = uVar1;
  func_0x00010c0f57e0();
  auStack_48[2] = uVar2;
  func_0x00010c261ce0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfde980();
  uVar2 = param_1;
  auStack_48[3] = uVar1;
  _objc_release();
  lVar3 = 8;
  do {
    uVar4 = *(ulong *)((long)auStack_48 + lVar3) | uVar4 << 0x20;
    uVar4 = ~uVar4 + uVar4 * 0x40000;
    uVar4 = (uVar4 ^ uVar4 >> 0x1f) * 0x15;
    uVar4 = (uVar4 ^ uVar4 >> 0xb) * 0x41;
    uVar4 = uVar4 ^ uVar4 >> 0x16;
    lVar3 = lVar3 + 8;
  } while (lVar3 != 0x18);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return uVar4;
  }
  ___stack_chk_fail();
  pcStack_58 = FUN_106fd0458;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc0000000;
  pcStack_88 = FUN_106fd04e0;
  puStack_80 = &UNK_110848088;
  uStack_78 = uVar2;
  uStack_70 = param_1;
  uStack_68 = uVar4;
  puStack_60 = &stack0xfffffffffffffff0;
  if (lRam00000001136c9d88 != -1) {
    func_0x00010002a2fc(0x1136c9d88,&puStack_98);
  }
  uVar4 = uRam00000001136c9d90;
  _objc_retain(uRam00000001136c9d90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return uVar4;
}



/* Entry: 106fd0458; end: 106fd04df; +[SCSpectaclesFirmwareVersion lagunaRecovery] */

void FUN_106fd0458(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_106fd04e0;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam00000001136c9d88 != -1) {
    func_0x00010002a2fc(0x1136c9d88,&puStack_48);
  }
  uVar1 = uRam00000001136c9d90;
  _objc_retain(uRam00000001136c9d90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106fd04e0; end: 106fd0513;  */

void FUN_106fd04e0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_alloc();
  func_0x00010c04e820();
  uVar1 = uRam00000001136c9d90;
  uRam00000001136c9d90 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106fd0514; end: 106fd059b; +[SCSpectaclesFirmwareVersion lagunaOTA1] */

void FUN_106fd0514(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_106fd059c;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam00000001136c9d98 != -1) {
    func_0x00010002a2fc(0x1136c9d98,&puStack_48);
  }
  uVar1 = uRam00000001136c9da0;
  _objc_retain(uRam00000001136c9da0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106fd059c; end: 106fd05cf;  */

void FUN_106fd059c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_alloc();
  func_0x00010c04e820();
  uVar1 = uRam00000001136c9da0;
  uRam00000001136c9da0 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106fd05d0; end: 106fd0657; +[SCSpectaclesFirmwareVersion lagunaOTA3] */

void FUN_106fd05d0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_106fd0658;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam00000001136c9da8 != -1) {
    func_0x00010002a2fc(0x1136c9da8,&puStack_48);
  }
  uVar1 = uRam00000001136c9db0;
  _objc_retain(uRam00000001136c9db0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106fd0658; end: 106fd068b;  */

void FUN_106fd0658(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_alloc();
  func_0x00010c04e820();
  uVar1 = uRam00000001136c9db0;
  uRam00000001136c9db0 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106fd068c; end: 106fd0713; +[SCSpectaclesFirmwareVersion lagunaOTA4] */

void FUN_106fd068c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_106fd0714;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam00000001136c9db8 != -1) {
    func_0x00010002a2fc(0x1136c9db8,&puStack_48);
  }
  uVar1 = uRam00000001136c9dc0;
  _objc_retain(uRam00000001136c9dc0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106fd0714; end: 106fd0747;  */

void FUN_106fd0714(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_alloc();
  func_0x00010c04e820();
  uVar1 = uRam00000001136c9dc0;
  uRam00000001136c9dc0 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106fd0748; end: 106fd07cf; +[SCSpectaclesFirmwareVersion malibuOTA1] */

void FUN_106fd0748(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_106fd07d0;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam00000001136c9dc8 != -1) {
    func_0x00010002a2fc(0x1136c9dc8,&puStack_48);
  }
  uVar1 = uRam00000001136c9dd0;
  _objc_retain(uRam00000001136c9dd0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106fd07d0; end: 106fd0803;  */

void FUN_106fd07d0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_alloc();
  func_0x00010c04e820();
  uVar1 = uRam00000001136c9dd0;
  uRam00000001136c9dd0 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106fd0804; end: 106fd088b; +[SCSpectaclesFirmwareVersion malibuOTA2] */

void FUN_106fd0804(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_106fd088c;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam00000001136c9dd8 != -1) {
    func_0x00010002a2fc(0x1136c9dd8,&puStack_48);
  }
  uVar1 = uRam00000001136c9de0;
  _objc_retain(uRam00000001136c9de0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106fd088c; end: 106fd08bf;  */

void FUN_106fd088c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_alloc();
  func_0x00010c04e820();
  uVar1 = uRam00000001136c9de0;
  uRam00000001136c9de0 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106fd08c0; end: 106fd0947; +[SCSpectaclesFirmwareVersion malibuOTA3] */

void FUN_106fd08c0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_106fd0948;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam00000001136c9de8 != -1) {
    func_0x00010002a2fc(0x1136c9de8,&puStack_48);
  }
  uVar1 = uRam00000001136c9df0;
  _objc_retain(uRam00000001136c9df0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106fd0948; end: 106fd097b;  */

void FUN_106fd0948(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_alloc();
  func_0x00010c04e820();
  uVar1 = uRam00000001136c9df0;
  uRam00000001136c9df0 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106fd097c; end: 106fd0a03; +[SCSpectaclesFirmwareVersion malibuOTA5] */

void FUN_106fd097c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_106fd0a04;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam00000001136c9df8 != -1) {
    func_0x00010002a2fc(0x1136c9df8,&puStack_48);
  }
  uVar1 = uRam00000001136c9e00;
  _objc_retain(uRam00000001136c9e00);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106fd0a04; end: 106fd0a37;  */

void FUN_106fd0a04(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_alloc();
  func_0x00010c04e820();
  uVar1 = uRam00000001136c9e00;
  uRam00000001136c9e00 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106fd0a38; end: 106fd0abf; +[SCSpectaclesFirmwareVersion newportImuFixVersion] */

void FUN_106fd0a38(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_106fd0ac0;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam00000001136c9e08 != -1) {
    func_0x00010002a2fc(0x1136c9e08,&puStack_48);
  }
  uVar1 = uRam00000001136c9e10;
  _objc_retain(uRam00000001136c9e10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106fd0ac0; end: 106fd0af3;  */

void FUN_106fd0ac0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_alloc();
  func_0x00010c04e820();
  uVar1 = uRam00000001136c9e10;
  uRam00000001136c9e10 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106fd0af4; end: 106fd0b7b; +[SCSpectaclesFirmwareVersion hermosaDevVersion] */

void FUN_106fd0af4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_106fd0b7c;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam00000001136c9e18 != -1) {
    func_0x00010002a2fc(0x1136c9e18,&puStack_48);
  }
  uVar1 = uRam00000001136c9e20;
  _objc_retain(uRam00000001136c9e20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106fd0b7c; end: 106fd0baf;  */

void FUN_106fd0b7c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_alloc();
  func_0x00010c04e820();
  uVar1 = uRam00000001136c9e20;
  uRam00000001136c9e20 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106fd0bb0; end: 106fd0c37; +[SCSpectaclesFirmwareVersion hermosaOTA1] */

void FUN_106fd0bb0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_106fd0c38;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam00000001136c9e28 != -1) {
    func_0x00010002a2fc(0x1136c9e28,&puStack_48);
  }
  uVar1 = uRam00000001136c9e30;
  _objc_retain(uRam00000001136c9e30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106fd0c38; end: 106fd0c6b;  */

void FUN_106fd0c38(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_alloc();
  func_0x00010c04e820();
  uVar1 = uRam00000001136c9e30;
  uRam00000001136c9e30 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106fd0c6c; end: 106fd0cf3; +[SCSpectaclesFirmwareVersion hermosaForgetWiFiSupportVersion] */

void FUN_106fd0c6c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_106fd0cf4;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam00000001136c9e38 != -1) {
    func_0x00010002a2fc(0x1136c9e38,&puStack_48);
  }
  uVar1 = uRam00000001136c9e40;
  _objc_retain(uRam00000001136c9e40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106fd0cf4; end: 106fd0d27;  */

void FUN_106fd0cf4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_alloc();
  func_0x00010c04e820();
  uVar1 = uRam00000001136c9e40;
  uRam00000001136c9e40 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106fd0d28; end: 106fd0daf; +[SCSpectaclesFirmwareVersion hermosaDeviceSecurityBootCompleteEventsSupportVersion] */

void FUN_106fd0d28(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_106fd0db0;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam00000001136c9e48 != -1) {
    func_0x00010002a2fc(0x1136c9e48,&puStack_48);
  }
  uVar1 = uRam00000001136c9e50;
  _objc_retain(uRam00000001136c9e50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106fd0db0; end: 106fd0de3;  */

void FUN_106fd0db0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_alloc();
  func_0x00010c04e820();
  uVar1 = uRam00000001136c9e50;
  uRam00000001136c9e50 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106fd0de4; end: 106fd0e6b; +[SCSpectaclesFirmwareVersion cheeriosCalibrationVersion] */

void FUN_106fd0de4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_106fd0e6c;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam00000001136c9e58 != -1) {
    func_0x00010002a2fc(0x1136c9e58,&puStack_48);
  }
  uVar1 = uRam00000001136c9e60;
  _objc_retain(uRam00000001136c9e60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106fd0e6c; end: 106fd0e9f;  */

void FUN_106fd0e6c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_alloc();
  func_0x00010c04e820();
  uVar1 = uRam00000001136c9e60;
  uRam00000001136c9e60 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106fd0ea0; end: 106fd0f27; +[SCSpectaclesFirmwareVersion matadorDevVersion] */

void FUN_106fd0ea0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_106fd0f28;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam00000001136c9e68 != -1) {
    func_0x00010002a2fc(0x1136c9e68,&puStack_48);
  }
  uVar1 = uRam00000001136c9e70;
  _objc_retain(uRam00000001136c9e70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106fd0f28; end: 106fd0f5b;  */

void FUN_106fd0f28(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_alloc();
  func_0x00010c04e820();
  uVar1 = uRam00000001136c9e70;
  uRam00000001136c9e70 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106fd0f5c; end: 106fd101f; -[SCSpectaclesFirmwareVersion initWithCoder:] */

undefined1 * FUN_106fd0f5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f8230;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106fd1020; end: 106fd10cf; -[SCSpectaclesFirmwareVersion encodeWithCoder:] */

void FUN_106fd1020(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c0b6e60(param_1);
  func_0x00010bf92fc0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e96038);
  uVar1 = param_1;
  func_0x00010c0ce800(param_1);
  func_0x00010bf92fc0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e96058);
  uVar1 = param_1;
  func_0x00010c0f57e0(param_1);
  func_0x00010bf92fc0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e96078);
  func_0x00010c261ce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,param_1,&PTR____CFConstantStringClassReference_110e96098);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106fd10d0; end: 106fd1293; -[SCSpectaclesFirmwareVersion _parseVersionString:] */

bool FUN_106fd10d0(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  if ((param_3 == 0) || (lVar2 = param_3, func_0x00010c08fa60(), lVar2 == 0)) {
    bVar1 = false;
  }
  else {
    lVar2 = param_1;
    _objc_opt_class();
    func_0x00010beb2100();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60(param_3);
    lVar3 = lVar2;
    func_0x00010bfb1800();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar3 != 0;
    if (lVar3 != 0) {
      func_0x00010c11f2c0(lVar3);
      lVar4 = param_3;
      func_0x00010c260c80(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067fc0();
      func_0x00010c1c1ae0(param_1);
      _objc_release(lVar4);
      func_0x00010c11f2c0(lVar3);
      lVar4 = param_3;
      func_0x00010c260c80(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067fc0();
      func_0x00010c1c84c0(param_1);
      _objc_release(lVar4);
      func_0x00010c11f2c0(lVar3);
      lVar4 = param_3;
      func_0x00010c260c80(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067fc0();
      func_0x00010c1d9800(param_1);
      _objc_release(lVar4);
      lVar4 = lVar3;
      func_0x00010c11f2c0();
      if (lVar4 != 0x7fffffffffffffff) {
        lVar4 = param_3;
        func_0x00010c260c80(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c20f920(param_1);
        _objc_release(lVar4);
      }
    }
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 106fd1294; end: 106fd12e7; +[SCSpectaclesFirmwareVersion _sharedVersionMatchingRegex] */

void FUN_106fd1294(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136c9e78 != -1) {
    func_0x00010002a2fc(0x1136c9e78,&PTR___NSConcreteGlobalBlock_110987480);
  }
  uVar1 = uRam00000001136c9e80;
  _objc_retain(uRam00000001136c9e80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106fd12e8; end: 106fd132b;  */

void FUN_106fd12e8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSRegularExpression_1126b06a8;
  func_0x00010c127e80(PTR__OBJC_CLASS___NSRegularExpression_1126b06a8,param_2,
                      &PTR____CFConstantStringClassReference_110e95e38,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136c9e80;
  puRam00000001136c9e80 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106fd132c; end: 106fd1333; -[SCSpectaclesFirmwareVersion majorVersion] */

undefined8 FUN_106fd132c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106fd1334; end: 106fd133b; -[SCSpectaclesFirmwareVersion setMajorVersion:] */

void FUN_106fd1334(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 106fd133c; end: 106fd1343; -[SCSpectaclesFirmwareVersion minorVersion] */

undefined8 FUN_106fd133c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106fd1344; end: 106fd134b; -[SCSpectaclesFirmwareVersion setMinorVersion:] */

void FUN_106fd1344(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 106fd134c; end: 106fd1353; -[SCSpectaclesFirmwareVersion patchVersion] */

undefined8 FUN_106fd134c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106fd1354; end: 106fd135b; -[SCSpectaclesFirmwareVersion setPatchVersion:] */

void FUN_106fd1354(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 106fd135c; end: 106fd1363; -[SCSpectaclesFirmwareVersion suffix] */

undefined8 FUN_106fd135c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106fd1364; end: 106fd136b; -[SCSpectaclesFirmwareVersion setSuffix:] */

void FUN_106fd1364(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106fd136c; end: 106fd1377; -[SCSpectaclesFirmwareVersion .cxx_destruct] */

void FUN_106fd136c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 106fd1378; end: 106fd13d3; -[SCSpectaclesHardwareVersion initWithDeviceProductType:majorVersion:minorVersion:] */

void FUN_106fd1378(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f8238;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
  }
  return;
}



/* Entry: 106fd13d4; end: 106fd1467; -[SCSpectaclesHardwareVersion initWithString:] */

undefined1 * FUN_106fd13d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f8238;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if ((puVar1 == (undefined8 *)0x0) ||
     (puVar2 = (undefined1 *)puVar1, func_0x00010be70620(), (int)puVar2 != 0)) {
    _objc_retain(puVar1);
    puVar2 = (undefined1 *)puVar1;
  }
  else {
    puVar2 = (undefined1 *)0x0;
  }
  _objc_release(param_3);
  _objc_release(puVar1);
  return puVar2;
}



/* Entry: 106fd1468; end: 106fd14f3; -[SCSpectaclesHardwareVersion initWithCoder:] */

void FUN_106fd1468(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf66f40(param_3);
  uVar2 = param_3;
  func_0x00010bf66f40(param_3);
  uVar3 = param_3;
  func_0x00010bf66f40(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c00c390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithDeviceProductType_majorV_1125e0ab0,uVar1,uVar2,uVar3);
  return;
}



/* Entry: 106fd14f4; end: 106fd1573; -[SCSpectaclesHardwareVersion encodeWithCoder:] */

void FUN_106fd14f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c0b6e60(param_1);
  func_0x00010bf92fc0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e96038);
  uVar1 = param_1;
  func_0x00010c0ce800(param_1);
  func_0x00010bf92fc0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e96058);
  func_0x00010bf70e00(param_1);
  func_0x00010bf92fc0(param_3,param_2,param_1,&PTR____CFConstantStringClassReference_110e960d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106fd1574; end: 106fd162f; -[SCSpectaclesHardwareVersion compare:] */

ulong FUN_106fd1574(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c0b6e60();
  lVar2 = param_3;
  func_0x00010c0b6e60();
  if (lVar2 <= lVar1) {
    lVar1 = param_1;
    func_0x00010c0b6e60();
    lVar2 = param_3;
    func_0x00010c0b6e60();
    if (lVar2 < lVar1) {
      uVar3 = 1;
      goto LAB_106fd1614;
    }
    lVar1 = param_1;
    func_0x00010c0ce800();
    lVar2 = param_3;
    func_0x00010c0ce800();
    if (lVar2 <= lVar1) {
      func_0x00010c0ce800(param_1);
      lVar1 = param_3;
      func_0x00010c0ce800(param_3);
      uVar3 = (ulong)(lVar1 < param_1);
      goto LAB_106fd1614;
    }
  }
  uVar3 = 0xffffffffffffffff;
LAB_106fd1614:
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 106fd1630; end: 106fd169b; -[SCSpectaclesHardwareVersion isLaguna] */

bool FUN_106fd1630(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    lVar2 = param_1;
    func_0x00010c0b6e60();
    _objc_opt_class(param_1);
    func_0x00010c087d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c0b6e60();
    bVar1 = lVar2 == lVar3;
    _objc_release(param_1);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 106fd169c; end: 106fd1707; -[SCSpectaclesHardwareVersion isMalibu] */

bool FUN_106fd169c(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    lVar2 = param_1;
    func_0x00010c0b6e60();
    _objc_opt_class(param_1);
    func_0x00010c0b7ce0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c0b6e60();
    bVar1 = lVar2 == lVar3;
    _objc_release(param_1);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 106fd1708; end: 106fd178b; -[SCSpectaclesHardwareVersion isNeptune] */

bool FUN_106fd1708(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    lVar2 = param_1;
    func_0x00010c0b6e60();
    lVar3 = param_1;
    _objc_opt_class();
    func_0x00010c0b7ce0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0b6e60();
    if (lVar2 == lVar4) {
      func_0x00010c0ce800(param_1);
      bVar1 = param_1 == 2;
    }
    else {
      bVar1 = false;
    }
    _objc_release(lVar3);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 106fd178c; end: 106fd17f7; -[SCSpectaclesHardwareVersion isNewport] */

bool FUN_106fd178c(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    lVar2 = param_1;
    func_0x00010c0b6e60();
    _objc_opt_class(param_1);
    func_0x00010c0d9800();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c0b6e60();
    bVar1 = lVar2 == lVar3;
    _objc_release(param_1);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 106fd17f8; end: 106fd1863; -[SCSpectaclesHardwareVersion isHermosa] */

bool FUN_106fd17f8(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    lVar2 = param_1;
    func_0x00010c0b6e60();
    _objc_opt_class(param_1);
    func_0x00010bfe0c40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c0b6e60();
    bVar1 = lVar2 == lVar3;
    _objc_release(param_1);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 106fd1864; end: 106fd18cf; -[SCSpectaclesHardwareVersion isMatador] */

bool FUN_106fd1864(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    lVar2 = param_1;
    func_0x00010c0b6e60();
    _objc_opt_class(param_1);
    func_0x00010c0bc520();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c0b6e60();
    bVar1 = lVar2 == lVar3;
    _objc_release(param_1);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 106fd18d0; end: 106fd192f; -[SCSpectaclesHardwareVersion isPreHermosa] */

ulong FUN_106fd18d0(ulong param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar1 = param_1;
    func_0x00010c075fc0();
    if ((((uVar1 & 1) == 0) && (uVar1 = param_1, func_0x00010c0774a0(), (uVar1 & 1) == 0)) &&
       (uVar1 = param_1, func_0x00010c078880(), (uVar1 & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c078ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_isNewport_1125fbcb8);
      return param_1;
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 106fd1930; end: 106fd1967; -[SCSpectaclesHardwareVersion isHermosaFamily] */

ulong FUN_106fd1930(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010c074bc0();
  if ((uVar1 & 1) != 0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0776f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_isMatador_1125fb7c8);
  return param_1;
}



/* Entry: 106fd1968; end: 106fd19d7; -[SCSpectaclesHardwareVersion isCheerios] */

bool FUN_106fd1968(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x18) == 1) {
    lVar2 = param_1;
    func_0x00010c0b6e60();
    _objc_opt_class(param_1);
    func_0x00010bf38ca0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c0b6e60();
    bVar1 = lVar2 == lVar3;
    _objc_release(param_1);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 106fd19d8; end: 106fd1a67; -[SCSpectaclesHardwareVersion isEqualToVersion:] */

bool FUN_106fd19d8(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = *(long *)(param_1 + 0x18);
  lVar2 = param_3;
  func_0x00010bf70e00();
  if (lVar3 == lVar2) {
    lVar2 = param_1;
    func_0x00010c0b6e60();
    lVar3 = param_3;
    func_0x00010c0b6e60();
    if (lVar2 == lVar3) {
      func_0x00010c0ce800(param_1);
      lVar2 = param_3;
      func_0x00010c0ce800(param_3);
      bVar1 = param_1 == lVar2;
      goto LAB_106fd1a4c;
    }
  }
  bVar1 = false;
LAB_106fd1a4c:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 106fd1a68; end: 106fd1aef; +[SCSpectaclesHardwareVersion manhattanVersion] */

void FUN_106fd1a68(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_106fd1af0;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam00000001136c9e90 != -1) {
    func_0x00010002a2fc(0x1136c9e90,&puStack_48);
  }
  uVar1 = uRam00000001136c9e88;
  _objc_retain(uRam00000001136c9e88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106fd1af0; end: 106fd1b27;  */

void FUN_106fd1af0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_alloc();
  func_0x00010c00c380();
  uVar1 = uRam00000001136c9e88;
  uRam00000001136c9e88 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106fd1b28; end: 106fd1baf; +[SCSpectaclesHardwareVersion lagunaVersion] */

void FUN_106fd1b28(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_106fd1bb0;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam00000001136c9ea0 != -1) {
    func_0x00010002a2fc(0x1136c9ea0,&puStack_48);
  }
  uVar1 = uRam00000001136c9e98;
  _objc_retain(uRam00000001136c9e98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106fd1bb0; end: 106fd1be7;  */

void FUN_106fd1bb0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_alloc();
  func_0x00010c00c380();
  uVar1 = uRam00000001136c9e98;
  uRam00000001136c9e98 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106fd1be8; end: 106fd1c6f; +[SCSpectaclesHardwareVersion malibuVersion] */

void FUN_106fd1be8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_106fd1c70;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam00000001136c9eb0 != -1) {
    func_0x00010002a2fc(0x1136c9eb0,&puStack_48);
  }
  uVar1 = uRam00000001136c9ea8;
  _objc_retain(uRam00000001136c9ea8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106fd1c70; end: 106fd1ca7;  */

void FUN_106fd1c70(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_alloc();
  func_0x00010c00c380();
  uVar1 = uRam00000001136c9ea8;
  uRam00000001136c9ea8 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106fd1ca8; end: 106fd1d2f; +[SCSpectaclesHardwareVersion neptuneVersion] */

void FUN_106fd1ca8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_106fd1d30;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam00000001136c9ec0 != -1) {
    func_0x00010002a2fc(0x1136c9ec0,&puStack_48);
  }
  uVar1 = uRam00000001136c9eb8;
  _objc_retain(uRam00000001136c9eb8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106fd1d30; end: 106fd1d67;  */

void FUN_106fd1d30(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_alloc();
  func_0x00010c00c380();
  uVar1 = uRam00000001136c9eb8;
  uRam00000001136c9eb8 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106fd1d68; end: 106fd1def; +[SCSpectaclesHardwareVersion newportVersion] */

void FUN_106fd1d68(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_106fd1df0;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam00000001136c9ed0 != -1) {
    func_0x00010002a2fc(0x1136c9ed0,&puStack_48);
  }
  uVar1 = uRam00000001136c9ec8;
  _objc_retain(uRam00000001136c9ec8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106fd1df0; end: 106fd1e27;  */

void FUN_106fd1df0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_alloc();
  func_0x00010c00c380();
  uVar1 = uRam00000001136c9ec8;
  uRam00000001136c9ec8 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106fd1e28; end: 106fd1eaf; +[SCSpectaclesHardwareVersion hermosaVersion] */

void FUN_106fd1e28(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_106fd1eb0;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam00000001136c9ee0 != -1) {
    func_0x00010002a2fc(0x1136c9ee0,&puStack_48);
  }
  uVar1 = uRam00000001136c9ed8;
  _objc_retain(uRam00000001136c9ed8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106fd1eb0; end: 106fd1ee7;  */

void FUN_106fd1eb0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_alloc();
  func_0x00010c00c380();
  uVar1 = uRam00000001136c9ed8;
  uRam00000001136c9ed8 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106fd1ee8; end: 106fd1f6f; +[SCSpectaclesHardwareVersion newportImuFixVersion] */

void FUN_106fd1ee8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_106fd1f70;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam00000001136c9ef0 != -1) {
    func_0x00010002a2fc(0x1136c9ef0,&puStack_48);
  }
  uVar1 = uRam00000001136c9ee8;
  _objc_retain(uRam00000001136c9ee8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106fd1f70; end: 106fd1fa7;  */

void FUN_106fd1f70(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_alloc();
  func_0x00010c00c380();
  uVar1 = uRam00000001136c9ee8;
  uRam00000001136c9ee8 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106fd1fa8; end: 106fd202f; +[SCSpectaclesHardwareVersion cheeriosVersion] */

void FUN_106fd1fa8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_106fd2030;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam00000001136c9f00 != -1) {
    func_0x00010002a2fc(0x1136c9f00,&puStack_48);
  }
  uVar1 = uRam00000001136c9ef8;
  _objc_retain(uRam00000001136c9ef8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106fd2030; end: 106fd2067;  */

void FUN_106fd2030(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_alloc();
  func_0x00010c00c380();
  uVar1 = uRam00000001136c9ef8;
  uRam00000001136c9ef8 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106fd2068; end: 106fd20ef; +[SCSpectaclesHardwareVersion matadorVersion] */

void FUN_106fd2068(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_106fd20f0;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam00000001136c9f10 != -1) {
    func_0x00010002a2fc(0x1136c9f10,&puStack_48);
  }
  uVar1 = uRam00000001136c9f08;
  _objc_retain(uRam00000001136c9f08);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106fd20f0; end: 106fd2127;  */

void FUN_106fd20f0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_alloc();
  func_0x00010c00c380();
  uVar1 = uRam00000001136c9f08;
  uRam00000001136c9f08 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106fd2128; end: 106fd226b; -[SCSpectaclesHardwareVersion _parseVersionString:] */

bool FUN_106fd2128(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    bVar1 = false;
  }
  else {
    lVar2 = param_1;
    _objc_opt_class();
    func_0x00010beb2100();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60(param_3);
    lVar3 = lVar2;
    func_0x00010bfb1800();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar3 != 0;
    if (lVar3 != 0) {
      func_0x00010c11f2c0(lVar3);
      lVar4 = param_3;
      func_0x00010c260c80(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067fc0();
      func_0x00010c1c1ae0(param_1);
      _objc_release(lVar4);
      func_0x00010c11f2c0(lVar3);
      lVar4 = param_3;
      func_0x00010c260c80(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067fc0();
      func_0x00010c1c84c0(param_1);
      _objc_release(lVar4);
      lVar4 = param_1;
      func_0x00010c0b6e60();
      *(ulong *)(param_1 + 0x18) = (ulong)(lVar4 == 1);
    }
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 106fd226c; end: 106fd22bf; +[SCSpectaclesHardwareVersion _sharedVersionMatchingRegex] */

void FUN_106fd226c(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136c9f18 != -1) {
    func_0x00010002a2fc(0x1136c9f18,&PTR___NSConcreteGlobalBlock_1109874a0);
  }
  uVar1 = uRam00000001136c9f20;
  _objc_retain(uRam00000001136c9f20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106fd22c0; end: 106fd2303;  */

void FUN_106fd22c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSRegularExpression_1126b06a8;
  func_0x00010c127e80(PTR__OBJC_CLASS___NSRegularExpression_1126b06a8,param_2,
                      &PTR____CFConstantStringClassReference_110e960b8,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136c9f20;
  puRam00000001136c9f20 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106fd2304; end: 106fd230b; -[SCSpectaclesHardwareVersion majorVersion] */

undefined8 FUN_106fd2304(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106fd230c; end: 106fd2313; -[SCSpectaclesHardwareVersion setMajorVersion:] */

void FUN_106fd230c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 106fd2314; end: 106fd231b; -[SCSpectaclesHardwareVersion minorVersion] */

undefined8 FUN_106fd2314(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106fd231c; end: 106fd2323; -[SCSpectaclesHardwareVersion setMinorVersion:] */

void FUN_106fd231c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 106fd2324; end: 106fd232b; -[SCSpectaclesHardwareVersion deviceProductType] */

undefined8 FUN_106fd2324(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106fd232c; end: 106fd23c3; +[SCSpectaclesCommunicationChannelEndpoint endpointWithNetworkURL:wifiSSID:interpretNilSSIDAsUnknown:] */

void FUN_106fd232c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_alloc_init();
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x10) = 2;
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = param_3;
    _objc_release(uVar1);
    _objc_retain(param_4);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = param_4;
    _objc_release(uVar1);
    *(undefined1 *)(param_1 + 8) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106fd23c4; end: 106fd2423; +[SCSpectaclesCommunicationChannelEndpoint endpointWithBTCAccessory:] */

void FUN_106fd23c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_alloc_init();
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x10) = 1;
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = param_3;
    _objc_release(uVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106fd2424; end: 106fd2507; +[SCSpectaclesCommunicationChannelEndpoint endpointWithBLEPeripheral:serviceUUID:txCharacteristicUUID:rxCharacteristicUUID:] */

void FUN_106fd2424(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_alloc_init();
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = param_3;
    _objc_release(uVar1);
    _objc_retain(param_4);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = param_4;
    _objc_release(uVar1);
    _objc_retain(param_5);
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = param_5;
    _objc_release(uVar1);
    _objc_retain(param_6);
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = param_6;
    _objc_release(uVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}


