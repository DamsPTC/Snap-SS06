/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10562f758; end: 10562f75f; -[SCUploadStepMetricsTracker setLocationAttribution:] */

void FUN_10562f758(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10562f760; end: 10562f853; -[SCUploadStepMetricsTracker .cxx_destruct] */

void FUN_10562f760(long param_1)

{
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10562f854; end: 10562f9cf;  */

void FUN_10562f854(double param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  double dVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = param_4;
  func_0x00010c08a240();
  if (puVar1 == (undefined *)0x0) {
    FUN_10562fac0();
    dVar4 = param_1;
    func_0x00010c08a220(param_4);
    dVar4 = (param_1 - dVar4) * 1000.0;
    puVar1 = param_4;
    func_0x00010c270960(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c0d3c80();
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(dVar4,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2);
    _objc_release(puVar3);
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126bc6c8;
    _objc_alloc(PTR_PTR_1126bc6c8);
    FUN_10562fac0();
    puVar3 = puVar2;
    func_0x00010bf51e00(puVar2);
    func_0x00010c0218a0(dVar4,puVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  else {
    _objc_retain(param_4);
    puVar1 = param_4;
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10562f9d0; end: 10562fabf;  */

void FUN_10562f9d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126bc6d0;
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_alloc(puVar1);
  uVar2 = param_1;
  func_0x00010c270960(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08a200(param_1);
  func_0x00010c08a240(param_1);
  uVar3 = param_1;
  func_0x00010bf66200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa00c0(param_1);
  _objc_release(param_1);
  func_0x00010c052840(puVar1);
  _objc_release(param_2);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10562fac0; end: 10562fb2b;  */

void FUN_10562fac0(void)

{
  if (lRam00000001136bd3a8 != -1) {
    func_0x00010002a2fc(0x1136bd3a8,&PTR___NSConcreteGlobalBlock_1108a10d8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010beec810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uRam00000001136bd3b0,PTR_s_absoluteSeconds_112598ba8);
  return;
}



/* Entry: 10562fb2c; end: 10562fbd7; -[SCUploadClientFailureResult initWithPublicResult:statusCode:] */

undefined1 *
FUN_10562fb2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e96e0;
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



/* Entry: 10562fbd8; end: 10562fbfb; -[SCUploadClientFailureResult copyWithZone:] */

undefined8 FUN_10562fbd8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10562fbfc; end: 10562fc6f; -[SCUploadClientFailureResult hash] */

undefined8 * FUN_10562fbfc(long param_1,undefined8 param_2,undefined8 *param_3)

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
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10562fcf0:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10562fcfc;
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
          goto LAB_10562fcfc;
        }
        goto LAB_10562fcf0;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10562fcfc:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10562fc70; end: 10562fd17; -[SCUploadClientFailureResult isEqual:] */

long FUN_10562fc70(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10562fcf0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10562fcfc;
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
          goto LAB_10562fcfc;
        }
        goto LAB_10562fcf0;
      }
    }
    lVar3 = 0;
  }
LAB_10562fcfc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10562fd18; end: 10562fd1f; -[SCUploadClientFailureResult publicResult] */

undefined8 FUN_10562fd18(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10562fd20; end: 10562fd27; -[SCUploadClientFailureResult statusCode] */

undefined8 FUN_10562fd20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10562fd28; end: 10562fd57; -[SCUploadClientFailureResult .cxx_destruct] */

void FUN_10562fd28(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10562fd58; end: 10562fe0b; -[SCUploadClientResult initWithPublicResult:statusCode:responseHeaders:] */

undefined1 *
FUN_10562fd58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e96e8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10562fe0c; end: 10562fe2f; -[SCUploadClientResult copyWithZone:] */

undefined8 FUN_10562fe0c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10562fe30; end: 10562feaf; -[SCUploadClientResult hash] */

undefined8 * FUN_10562fe30(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar2 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + 0x10);
  uStack_30 = *(undefined8 *)(param_1 + 0x18);
  lStack_38 = -lVar4;
  if (-1 < lVar4) {
    lStack_38 = lVar4;
  }
  uStack_40 = uVar1;
  func_0x00010bfde980();
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 == (undefined8 *)param_3) {
LAB_10562ff40:
    puVar5 = (undefined1 *)0x1;
  }
  else {
    puVar5 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10562ff4c;
    puVar5 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((((ulong)puVar3 & 1) != 0) && (*(long *)((long)puVar2 + 0x10) == *(long *)(param_3 + 0x10)))
    {
      lVar4 = *(long *)((long)puVar2 + 8);
      if ((lVar4 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
        puVar5 = *(undefined1 **)((long)puVar2 + 0x18);
        if (puVar5 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10562ff4c;
        }
        goto LAB_10562ff40;
      }
    }
    puVar5 = (undefined1 *)0x0;
  }
LAB_10562ff4c:
  _objc_release(param_3);
  return (undefined8 *)puVar5;
}



/* Entry: 10562feb0; end: 10562ff67; -[SCUploadClientResult isEqual:] */

long FUN_10562feb0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10562ff40:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10562ff4c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10562ff4c;
        }
        goto LAB_10562ff40;
      }
    }
    lVar3 = 0;
  }
LAB_10562ff4c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10562ff68; end: 10562ff6f; -[SCUploadClientResult publicResult] */

undefined8 FUN_10562ff68(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10562ff70; end: 10562ff77; -[SCUploadClientResult statusCode] */

undefined8 FUN_10562ff70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10562ff78; end: 10562ff7f; -[SCUploadClientResult responseHeaders] */

undefined8 FUN_10562ff78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10562ff80; end: 10562ffaf; -[SCUploadClientResult .cxx_destruct] */

void FUN_10562ff80(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10562ffb0; end: 10563009f; -[SCBoltResumableUploadState initWithBoltUploadLocation:bytesUploaded:isBytesUploadedFromGcs:resumableURI:resumableURIExpiry:] */

undefined1 *
FUN_10562ffb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126e96f0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    *(undefined1 *)((long)puVar1 + 8) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1056300a0; end: 10563019f; -[SCBoltResumableUploadState initWithCoder:] */

undefined1 * FUN_1056300a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e96f0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1056301a0; end: 1056301c3; -[SCBoltResumableUploadState copyWithZone:] */

undefined8 FUN_1056301a0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1056301c4; end: 10563025f; -[SCBoltResumableUploadState encodeWithCoder:] */

void FUN_1056301c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110df3798);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110df37b8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110df37d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110df37f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110df3818);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105630260; end: 1056302f3; -[SCBoltResumableUploadState hash] */

undefined8 * FUN_105630260(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uStack_50;
  long lStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar2 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + 0x18);
  uStack_38 = *(undefined8 *)(param_1 + 0x20);
  lStack_48 = -lVar4;
  if (-1 < lVar4) {
    lStack_48 = lVar4;
  }
  uStack_40 = (ulong)*(byte *)(param_1 + 8);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 == (undefined8 *)param_3) {
LAB_1056303ac:
    puVar5 = (undefined1 *)0x1;
  }
  else {
    puVar5 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1056303b8;
    puVar5 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((((ulong)puVar3 & 1) != 0) &&
       ((*(long *)((long)puVar2 + 0x18) == *(long *)(param_3 + 0x18) &&
        (*(char *)((long)puVar2 + 8) == param_3[8])))) {
      lVar4 = *(long *)((long)puVar2 + 0x10);
      if ((lVar4 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
        lVar4 = *(long *)((long)puVar2 + 0x20);
        if ((lVar4 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
          puVar5 = *(undefined1 **)((long)puVar2 + 0x28);
          if (puVar5 != *(undefined1 **)(param_3 + 0x28)) {
            func_0x00010c071ae0();
            goto LAB_1056303b8;
          }
          goto LAB_1056303ac;
        }
      }
    }
    puVar5 = (undefined1 *)0x0;
  }
LAB_1056303b8:
  _objc_release(param_3);
  return (undefined8 *)puVar5;
}



/* Entry: 1056302f4; end: 1056303d3; -[SCBoltResumableUploadState isEqual:] */

long FUN_1056302f4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1056303ac:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1056303b8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18) &&
        (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if (lVar3 != *(long *)(param_3 + 0x28)) {
            func_0x00010c071ae0();
            goto LAB_1056303b8;
          }
          goto LAB_1056303ac;
        }
      }
    }
    lVar3 = 0;
  }
LAB_1056303b8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1056303d4; end: 1056303db; -[SCBoltResumableUploadState boltUploadLocation] */

undefined8 FUN_1056303d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1056303dc; end: 1056303e3; -[SCBoltResumableUploadState bytesUploaded] */

undefined8 FUN_1056303dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1056303e4; end: 1056303eb; -[SCBoltResumableUploadState isBytesUploadedFromGcs] */

undefined1 FUN_1056303e4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1056303ec; end: 1056303f3; -[SCBoltResumableUploadState resumableURI] */

undefined8 FUN_1056303ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1056303f4; end: 1056303fb; -[SCBoltResumableUploadState resumableURIExpiry] */

undefined8 FUN_1056303f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1056303fc; end: 105630437; -[SCBoltResumableUploadState .cxx_destruct] */

void FUN_1056303fc(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105630438; end: 105630453; +[SCBoltResumableUploadStateBuilder boltResumableUploadState] */

void FUN_105630438(void)

{
  _objc_alloc_init(PTR_PTR_1126bc688);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105630454; end: 1056305c3; +[SCBoltResumableUploadStateBuilder boltResumableUploadStateFromExistingBoltResumableUploadState:] */

void FUN_105630454(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  
  puVar1 = PTR_PTR_1126bc688;
  _objc_retain(param_3);
  func_0x00010bf1f0c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf1f1c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2a96a0(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf26040(param_3);
  puVar5 = puVar3;
  func_0x00010c2a9be0(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c06da40(param_3);
  puVar6 = puVar5;
  func_0x00010c2b0300(puVar5,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c13d120(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c2b7420(puVar6,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c13d140(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar9 = puVar7;
  func_0x00010c2b7440(puVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(uVar4);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 1056305c4; end: 1056305fb; -[SCBoltResumableUploadStateBuilder build] */

void FUN_1056305c4(void)

{
  _objc_alloc(PTR_PTR_1126bc678);
  func_0x00010bff9140();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056305fc; end: 105630633; -[SCBoltResumableUploadStateBuilder withBoltUploadLocation:] */

long FUN_1056305fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 105630634; end: 10563063b; -[SCBoltResumableUploadStateBuilder withBytesUploaded:] */

void FUN_105630634(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10563063c; end: 105630643; -[SCBoltResumableUploadStateBuilder withIsBytesUploadedFromGcs:] */

void FUN_10563063c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 105630644; end: 10563067b; -[SCBoltResumableUploadStateBuilder withResumableURI:] */

long FUN_105630644(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10563067c; end: 1056306b3; -[SCBoltResumableUploadStateBuilder withResumableURIExpiry:] */

long FUN_10563067c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1056306b4; end: 1056306ef; -[SCBoltResumableUploadStateBuilder .cxx_destruct] */

void FUN_1056306b4(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1056306f0; end: 10563077b; -[SCResumableUploadConfig initWithEnableResumableUpload:minimumUploadTimeInSecondsForResumable:minimumUploadSizeInKilobytesForResumable:fetchUploadStateRetryLimit:createSessionRetryLimit:uploadLevelRetryLimit:uploadDataRetryLimit:resumeSessionBytesThreshold:] */

void FUN_1056306f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_1126e96f8;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
  }
  return;
}



/* Entry: 10563077c; end: 10563079f; -[SCResumableUploadConfig copyWithZone:] */

undefined8 FUN_10563077c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1056307a0; end: 10563083f; -[SCResumableUploadConfig hash] */

ulong * FUN_1056307a0(long param_1,undefined8 param_2,ulong *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  double dVar5;
  ulong uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar3 = (uVar3 ^ uVar3 >> 0x1f) * 0x15;
  uStack_58 = (ulong)*(byte *)(param_1 + 8);
  uStack_50 = (uVar3 ^ uVar3 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uStack_48 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  uStack_40 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x20));
  uStack_38 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x28));
  uStack_30 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x30));
  uStack_28 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x38));
  uStack_20 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x40));
  puVar1 = &uStack_58;
  func_0x000100505190(puVar1,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == param_3) {
    puVar4 = (ulong *)0x1;
  }
  else {
    puVar4 = (ulong *)0x0;
    if ((puVar1 != (ulong *)0x0) && (param_3 != (ulong *)0x0)) {
      puVar4 = puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar4);
      if ((((((ulong)puVar2 & 1) == 0) ||
           ((((char)puVar1[1] != (char)param_3[1] || (puVar1[3] != param_3[3])) ||
            (puVar1[4] != param_3[4])))) ||
          (((puVar1[5] != param_3[5] || (puVar1[6] != param_3[6])) || (puVar1[7] != param_3[7]))))
         || (puVar1[8] != param_3[8])) {
        puVar4 = (ulong *)0x0;
      }
      else {
        dVar5 = ABS((double)puVar1[2] + (double)param_3[2]) * 2.220446049250313e-16;
        if (dVar5 <= 2.2250738585072014e-308) {
          dVar5 = 2.2250738585072014e-308;
        }
        puVar4 = (ulong *)(ulong)(ABS((double)puVar1[2] - (double)param_3[2]) < dVar5);
      }
    }
  }
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 105630840; end: 10563095b; -[SCResumableUploadConfig isEqual:] */

bool FUN_105630840(ulong param_1,undefined8 param_2,ulong param_3)

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
           (((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
             (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))) ||
            (*(long *)(param_1 + 0x20) != *(long *)(param_3 + 0x20))))) ||
          (((*(long *)(param_1 + 0x28) != *(long *)(param_3 + 0x28) ||
            (*(long *)(param_1 + 0x30) != *(long *)(param_3 + 0x30))) ||
           (*(long *)(param_1 + 0x38) != *(long *)(param_3 + 0x38))))) ||
         (*(long *)(param_1 + 0x40) != *(long *)(param_3 + 0x40))) {
        bVar3 = false;
      }
      else {
        dVar4 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) *
                2.220446049250313e-16;
        if (dVar4 <= 2.2250738585072014e-308) {
          dVar4 = 2.2250738585072014e-308;
        }
        bVar3 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10)) < dVar4;
      }
    }
  }
  _objc_release(param_3);
  return bVar3;
}



/* Entry: 10563095c; end: 105630963; -[SCResumableUploadConfig enableResumableUpload] */

undefined1 FUN_10563095c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105630964; end: 10563096b; -[SCResumableUploadConfig minimumUploadTimeInSecondsForResumable] */

undefined8 FUN_105630964(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10563096c; end: 105630973; -[SCResumableUploadConfig minimumUploadSizeInKilobytesForResumable] */

undefined8 FUN_10563096c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105630974; end: 10563097b; -[SCResumableUploadConfig fetchUploadStateRetryLimit] */

undefined8 FUN_105630974(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10563097c; end: 105630983; -[SCResumableUploadConfig createSessionRetryLimit] */

undefined8 FUN_10563097c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105630984; end: 10563098b; -[SCResumableUploadConfig uploadLevelRetryLimit] */

undefined8 FUN_105630984(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10563098c; end: 105630993; -[SCResumableUploadConfig uploadDataRetryLimit] */

undefined8 FUN_10563098c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 105630994; end: 10563099b; -[SCResumableUploadConfig resumeSessionBytesThreshold] */

undefined8 FUN_105630994(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10563099c; end: 1056309b7; +[SCResumableUploadConfigBuilder resumableUploadConfig] */

void FUN_10563099c(void)

{
  _objc_alloc_init(PTR_PTR_1126bc4e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056309b8; end: 105630b63; +[SCResumableUploadConfigBuilder resumableUploadConfigFromExistingResumableUploadConfig:] */

void FUN_1056309b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  
  puVar1 = PTR_PTR_1126bc4e0;
  _objc_retain(param_3);
  func_0x00010c13d160(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf916e0(param_3);
  puVar3 = puVar1;
  func_0x00010c2ad060(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ce720(param_3);
  puVar4 = puVar3;
  func_0x00010c2b4040(puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0ce700(param_3);
  puVar5 = puVar4;
  func_0x00010c2b4020(puVar4,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfab2e0(param_3);
  puVar6 = puVar5;
  func_0x00010c2adda0(puVar5,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf58d40(param_3);
  puVar7 = puVar6;
  func_0x00010c2ab320(puVar6,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c28e040(param_3);
  puVar8 = puVar7;
  func_0x00010c2bc160(puVar7,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c28db20(param_3);
  puVar9 = puVar8;
  func_0x00010c2bc120(puVar8,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c13d920(param_3);
  _objc_release(param_3);
  puVar10 = puVar9;
  func_0x00010c2b7460(puVar9,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
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
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 105630b64; end: 105630baf; -[SCResumableUploadConfigBuilder build] */

void FUN_105630b64(long param_1)

{
  _objc_alloc(PTR_PTR_1126bc6d8);
  func_0x00010c00f8c0(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105630bb0; end: 105630bb7; -[SCResumableUploadConfigBuilder withEnableResumableUpload:] */

void FUN_105630bb0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 105630bb8; end: 105630bbf; -[SCResumableUploadConfigBuilder withMinimumUploadTimeInSecondsForResumable:] */

void FUN_105630bb8(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x10) = param_1;
  return;
}



/* Entry: 105630bc0; end: 105630bc7; -[SCResumableUploadConfigBuilder withMinimumUploadSizeInKilobytesForResumable:] */

void FUN_105630bc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 105630bc8; end: 105630bcf; -[SCResumableUploadConfigBuilder withFetchUploadStateRetryLimit:] */

void FUN_105630bc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 105630bd0; end: 105630bd7; -[SCResumableUploadConfigBuilder withCreateSessionRetryLimit:] */

void FUN_105630bd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 105630bd8; end: 105630bdf; -[SCResumableUploadConfigBuilder withUploadLevelRetryLimit:] */

void FUN_105630bd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 105630be0; end: 105630be7; -[SCResumableUploadConfigBuilder withUploadDataRetryLimit:] */

void FUN_105630be0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x38) = param_3;
  return;
}



/* Entry: 105630be8; end: 105630bef; -[SCResumableUploadConfigBuilder withResumeSessionBytesThreshold:] */

void FUN_105630be8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 105630bf0; end: 105630c63; -[SCGrapheneMediaorchestrationMetric2 init] */

undefined1 * FUN_105630bf0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e9700;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105630c64; end: 105630d7b;  */

undefined1 ** FUN_105630c64(long param_1,int param_2,undefined1 *param_3,undefined1 *param_4)

{
  undefined *puVar1;
  undefined1 **ppuVar2;
  undefined1 **ppuVar3;
  undefined1 ***pppuVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long *plVar9;
  undefined8 *unaff_x21;
  undefined1 **ppuStack_120;
  undefined *puStack_118;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 *puStack_c8;
  undefined1 **appuStack_c0 [2];
  char cStack_a9;
  long lStack_a8;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  puVar6 = &uStack_70;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = (undefined1 **)0x0;
  puVar5 = param_3;
  if (param_1 != 0) {
    plVar9 = *(long **)(param_1 + 8);
    puVar1 = &UNK_10f2dfc97;
    if (param_2 == 0) {
      puVar1 = &UNK_10f2dfc9c;
    }
    func_0x00010002b838(appuStack_50,puVar1);
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    func_0x00010007e1e8(&uStack_70,appuStack_50,&lStack_38,1);
    param_2 = 0x108a10f8;
    (**(code **)(*plVar9 + 0x18))(plVar9);
    ppuVar2 = &puStack_58;
    puStack_58 = (undefined1 *)&uStack_70;
    func_0x00010007e5dc();
    puVar5 = (undefined1 *)puVar6;
    param_4 = param_3;
    unaff_x21 = &uStack_70;
    if (cStack_39 < '\0') {
      ppuVar2 = appuStack_50[0];
      __ZdlPv();
      puVar5 = (undefined1 *)puVar6;
      param_4 = param_3;
      unaff_x21 = &uStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  puStack_58 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_58);
  if (cStack_39 < '\0') {
    __ZdlPv(appuStack_50[0]);
  }
  __Unwind_Resume();
  puVar6 = &uStack_e0;
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = (undefined1 **)0x0;
  puVar7 = puVar5;
  if (ppuVar2 != (undefined1 **)0x0) {
    plVar9 = (long *)ppuVar2[1];
    puVar1 = &UNK_10f2dfc97;
    if (param_2 == 0) {
      puVar1 = &UNK_10f2dfc9c;
    }
    func_0x00010002b838(appuStack_c0,puVar1);
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    func_0x00010007e1e8(&uStack_e0,appuStack_c0,&lStack_a8,1);
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_1108a1148);
    ppuVar3 = &puStack_c8;
    puStack_c8 = (undefined1 *)&uStack_e0;
    func_0x00010007e5dc();
    puVar7 = (undefined1 *)puVar6;
    param_4 = puVar5;
    unaff_x21 = &uStack_e0;
    if (cStack_a9 < '\0') {
      ppuVar3 = appuStack_c0[0];
      __ZdlPv();
      puVar7 = (undefined1 *)puVar6;
      param_4 = puVar5;
      unaff_x21 = &uStack_e0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return ppuVar3;
  }
  ___stack_chk_fail();
  puStack_c8 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_c8);
  if (cStack_a9 < '\0') {
    __ZdlPv(appuStack_c0[0]);
  }
  __Unwind_Resume();
  pppuVar4 = &ppuStack_120;
  _objc_retain(puVar7);
  _objc_retain(param_4);
  puStack_118 = PTR_PTR_1126e9708;
  ppuStack_120 = ppuVar3;
  _objc_msgSendSuper2(&ppuStack_120,PTR_s_init_1125d9248);
  if (pppuVar4 != (undefined1 ***)0x0) {
    _objc_retain(puVar7);
    puVar5 = (undefined1 *)pppuVar4[1];
    pppuVar4[1] = (undefined1 **)puVar7;
    _objc_release(puVar5);
    puVar5 = param_4;
    _objc_retainBlock();
    puVar8 = (undefined1 *)pppuVar4[2];
    pppuVar4[2] = (undefined1 **)puVar5;
    _objc_release(puVar8);
  }
  _objc_release(param_4);
  _objc_release(puVar7);
  return (undefined1 **)pppuVar4;
}



/* Entry: 105630d7c; end: 105630e93;  */

undefined1 ** FUN_105630d7c(long param_1,int param_2,undefined1 *param_3,undefined1 *param_4)

{
  undefined *puVar1;
  undefined1 **ppuVar2;
  undefined1 ***pppuVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long *plVar8;
  undefined8 *unaff_x21;
  undefined1 **ppuStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  puVar5 = &uStack_70;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = (undefined1 **)0x0;
  puVar6 = param_3;
  if (param_1 != 0) {
    plVar8 = *(long **)(param_1 + 8);
    puVar1 = &UNK_10f2dfc97;
    if (param_2 == 0) {
      puVar1 = &UNK_10f2dfc9c;
    }
    func_0x00010002b838(appuStack_50,puVar1);
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    func_0x00010007e1e8(&uStack_70,appuStack_50,&lStack_38,1);
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_1108a1148);
    ppuVar2 = &puStack_58;
    puStack_58 = (undefined1 *)&uStack_70;
    func_0x00010007e5dc();
    puVar6 = (undefined1 *)puVar5;
    param_4 = param_3;
    unaff_x21 = &uStack_70;
    if (cStack_39 < '\0') {
      ppuVar2 = appuStack_50[0];
      __ZdlPv();
      puVar6 = (undefined1 *)puVar5;
      param_4 = param_3;
      unaff_x21 = &uStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  puStack_58 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_58);
  if (cStack_39 < '\0') {
    __ZdlPv(appuStack_50[0]);
  }
  __Unwind_Resume();
  pppuVar3 = &ppuStack_b0;
  _objc_retain(puVar6);
  _objc_retain(param_4);
  puStack_a8 = PTR_PTR_1126e9708;
  ppuStack_b0 = ppuVar2;
  _objc_msgSendSuper2(&ppuStack_b0,PTR_s_init_1125d9248);
  if (pppuVar3 != (undefined1 ***)0x0) {
    _objc_retain(puVar6);
    puVar4 = (undefined1 *)pppuVar3[1];
    pppuVar3[1] = (undefined1 **)puVar6;
    _objc_release(puVar4);
    puVar4 = param_4;
    _objc_retainBlock();
    puVar7 = (undefined1 *)pppuVar3[2];
    pppuVar3[2] = (undefined1 **)puVar4;
    _objc_release(puVar7);
  }
  _objc_release(param_4);
  _objc_release(puVar6);
  return (undefined1 **)pppuVar3;
}



/* Entry: 105630e94; end: 105630f3b; -[SCNCupsUploadLocationCallbackImpl initWithCallbackPerformer:handler:] */

undefined1 *
FUN_105630e94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e9708;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105630f3c; end: 105631073; -[SCNCupsUploadLocationCallbackImpl onFailure:metrics:] */

void FUN_105630f3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_retain(param_3);
  uVar5 = param_3;
  func_0x00010bf98a40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf6e340(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf98940(param_3);
  _objc_release(param_3);
  func_0x00010bf99260(puVar3,param_2,uVar5,uVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar5);
  lVar4 = *(long *)(param_1 + 0x10);
  func_0x00010bf51e00();
  if (lVar4 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 8);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_105631074;
    puStack_58 = &UNK_11084aaa8;
    _objc_retain(lVar4);
    lStack_48 = lVar4;
    _objc_retain(puVar3);
    puStack_50 = puVar3;
    func_0x00010c0f7fc0(uVar5,param_2,&puStack_70);
    _objc_release(puStack_50);
    _objc_release(lStack_48);
  }
  _objc_release(lVar4);
  _objc_release(puVar3);
  return;
}



/* Entry: 105631074; end: 105631087;  */

void FUN_105631074(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105631084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 105631088; end: 1056311a3; -[SCNCupsUploadLocationCallbackImpl onSuccess:metrics:] */

void FUN_105631088(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  puVar2 = PTR_PTR_1126bc698;
  func_0x00010c28e0e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uStack_38 = 0;
  func_0x00010c0f40e0(puVar2,param_2,param_3,&uStack_38);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uStack_38;
  _objc_retain(uStack_38);
  _objc_release(param_3);
  lVar3 = *(long *)(param_1 + 0x10);
  func_0x00010bf51e00();
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_1056311a4;
    puStack_58 = &UNK_11084a9e8;
    _objc_retain(lVar3);
    lStack_40 = lVar3;
    _objc_retain(puVar2);
    puStack_50 = puVar2;
    _objc_retain(uVar1);
    uStack_48 = uVar1;
    func_0x00010c0f7fc0(uVar4,param_2,&puStack_70);
    _objc_release(uStack_48);
    _objc_release(puStack_50);
    _objc_release(lStack_40);
  }
  _objc_release(lVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 1056311a4; end: 1056311b7;  */

void FUN_1056311a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001056311b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1056311b8; end: 1056311e7; -[SCNCupsUploadLocationCallbackImpl .cxx_destruct] */

void FUN_1056311b8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1056311e8; end: 105631213; +[SCGrapheneUploadUrlCacheMetric uploadLocation] */

void FUN_1056311e8(void)

{
  _objc_alloc(PTR_PTR_1126bc6e0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105631214; end: 10563123f; +[SCGrapheneUploadUrlCacheMetric rabCacheResult] */

void FUN_105631214(void)

{
  _objc_alloc(PTR_PTR_1126bc6e0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105631240; end: 10563126b; +[SCGrapheneUploadUrlCacheMetric ulExpired] */

void FUN_105631240(void)

{
  _objc_alloc(PTR_PTR_1126bc6e0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10563126c; end: 105631297; +[SCGrapheneUploadUrlCacheMetric ulRestored] */

void FUN_10563126c(void)

{
  _objc_alloc(PTR_PTR_1126bc6e0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105631298; end: 1056312c3; +[SCGrapheneUploadUrlCacheMetric ulDiskWResult] */

void FUN_105631298(void)

{
  _objc_alloc(PTR_PTR_1126bc6e0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056312c4; end: 1056312ef; +[SCGrapheneUploadUrlCacheMetric ulDiskRResult] */

void FUN_1056312c4(void)

{
  _objc_alloc(PTR_PTR_1126bc6e0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056312f0; end: 10563131b; +[SCGrapheneUploadUrlCacheMetric ulDiskEResult] */

void FUN_1056312f0(void)

{
  _objc_alloc(PTR_PTR_1126bc6e0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10563131c; end: 1056313bb; -[SCGrapheneUploadUrlCacheMetric description] */

void FUN_10563131c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110df3838;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110df3838,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126e9710;
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



/* Entry: 1056313bc; end: 10563153b; -[SCGrapheneRegistry uploadUrlCacheGraphene] */

void FUN_1056313bc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x105631444;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136bd3c0 != -1) {
    func_0x00010002a2fc(0x1136bd3c0,&puStack_48);
  }
  uVar1 = uRam00000001136bd3b8;
  _objc_retain(uRam00000001136bd3b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10563153c; end: 1056315a3; +[SCCNativeDULPABConfig descriptor] */

void FUN_10563153c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd3c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a53790,
                        &PTR____CFConstantStringClassReference_110df3938,&PTR_DAT_1130ef9c8,
                        &PTR_DAT_1130ef9e0,1,0x10,0x1c);
    puRam00000001136bd3c8 = puVar1;
  }
  return;
}



/* Entry: 1056315a4; end: 10563161b; -[SCNCupsBackgroundUploadStatusUpdater initWithCpp:] */

undefined1 * FUN_1056315a4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126e9718;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_105631ac0();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000105631a98(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10563161c; end: 10563171b; +[SCNCupsBackgroundUploadStatusUpdater create:] */

void FUN_10563161c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int extraout_w10;
  undefined8 unaff_x20;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  
  _objc_retain(param_3);
  FUN_105633a18(&lStack_48,param_3);
  FUN_1056406d8(&lStack_58,&lStack_48);
  FUN_105631a70(&lStack_48);
  if (lStack_58 == 0) {
    unaff_x20 = 0;
  }
  else {
    lStack_40 = lStack_50;
    ppuStack_38 = &PTR_DAT_1108a11b8;
    lStack_48 = lStack_58;
    if (lStack_50 != 0) {
      do {
        FUN_105631ac0();
      } while (extraout_w10 != 0);
    }
    func_0x00010015c218(&ppuStack_38,&lStack_48,FUN_1056319fc);
    _objc_retainAutoreleasedReturnValue();
    func_0x000105631ae0();
  }
  func_0x000105631a98(&lStack_58);
  func_0x000105631ad8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x20);
  return;
}



/* Entry: 10563171c; end: 10563182b; -[SCNCupsBackgroundUploadStatusUpdater setUploadContentStatus:contentUploadStatus:] */

void FUN_10563171c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  long *plVar2;
  undefined1 auStack_250 [32];
  undefined1 auStack_230 [504];
  char cStack_38;
  
  _objc_retain(param_3);
  plVar2 = *(long **)(param_1 + 0x18);
  FUN_1056333c0(auStack_250,param_3);
  (**(code **)(*plVar2 + 0x10))(auStack_230,plVar2,auStack_250,param_4);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_250);
  if (cStack_38 == '\x01') {
    puVar1 = auStack_230;
    FUN_10563275c(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = (undefined1 *)0x0;
  }
  FUN_105631920(auStack_230);
  func_0x000105631ad8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10563182c; end: 10563188b; -[SCNCupsBackgroundUploadStatusUpdater appDidEnterBackground] */

void FUN_10563182c(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x18))();
  return;
}



/* Entry: 10563188c; end: 1056318df; -[SCNCupsBackgroundUploadStatusUpdater .cxx_destruct] */

void FUN_10563188c(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_1108a11b8;
    func_0x0001004a52a0(param_1 + 8,&ppuStack_28);
  }
  func_0x000105631a98((long *)(param_1 + 0x18));
  func_0x0001004a5588(param_1 + 8);
  return;
}



/* Entry: 1056318e0; end: 10563191f; -[SCNCupsBackgroundUploadStatusUpdater .cxx_construct] */

undefined8 * FUN_1056318e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x00010015c19c();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_105631ac0();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 105631920; end: 10563193f;  */

void FUN_105631920(long param_1)

{
  if (*(char *)(param_1 + 0x1f8) == '\x01') {
    FUN_105631940();
  }
  return;
}



/* Entry: 105631940; end: 1056319a3;  */

long FUN_105631940(long param_1)

{
  FUN_1056319a4(param_1 + 0x148);
  func_0x0001001148fc(param_1 + 0x128);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x108);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xf0);
  func_0x00010028ad98(param_1 + 0xb8);
  func_0x0001001148fc(param_1 + 0x98);
  func_0x0001001148fc(param_1 + 0x78);
  FUN_1052a038c(param_1 + 0x20);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 8);
  return param_1;
}



/* Entry: 1056319a4; end: 1056319c3;  */

void FUN_1056319a4(long param_1)

{
  if (*(char *)(param_1 + 0xa0) == '\x01') {
    FUN_1056319c4();
  }
  return;
}



/* Entry: 1056319c4; end: 1056319fb;  */

void FUN_1056319c4(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x88);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x70);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x50);
  if (*(char *)(param_1 + 0x40) == '\x01') {
    FUN_1052a03ac();
  }
  return;
}



/* Entry: 1056319fc; end: 105631a6f;  */

void FUN_1056319fc(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126bc5d0;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_105631ac0();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x000105631a98(&uStack_30);
  return;
}



/* Entry: 105631a70; end: 105631abf;  */

long FUN_105631a70(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 105631ac0; end: 105631af7;  */

void FUN_105631ac0(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 105631af8; end: 105631b6f; -[SCNCupsContentUploadCallbackCppProxy initWithCpp:] */

undefined1 * FUN_105631af8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126e9720;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x0001056322d0();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000105632298(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105631b70; end: 105631ca3; -[SCNCupsContentUploadCallbackCppProxy onSuccess:serializedContentObject:contentUploadCallbackMetrics:] */

void FUN_105631b70(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined1 auStack_260 [504];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [24];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x0001000fbca4(auStack_58,param_3);
  func_0x0001000fef20(auStack_68,param_4);
  FUN_105632320(auStack_260,param_5);
  (**(code **)(*plVar1 + 0x10))(plVar1,auStack_58,auStack_68,auStack_260);
  FUN_105631940(auStack_260);
  func_0x0001000ff1ac(auStack_68);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  func_0x0001056322c8();
  func_0x0001056322e0();
  func_0x0001056322c0();
  return;
}



/* Entry: 105631ca4; end: 105631da7; -[SCNCupsContentUploadCallbackCppProxy onFailure:contentUploadCallbackMetrics:] */

void FUN_105631ca4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined1 auStack_278 [504];
  undefined1 auStack_80 [64];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x00010bcc1b7c(auStack_80,param_3);
  FUN_105632320(auStack_278,param_4);
  (**(code **)(*plVar1 + 0x18))(plVar1,auStack_80,auStack_278);
  FUN_105631940(auStack_278);
  FUN_1052a03ac(auStack_80);
  func_0x0001056322e0();
  func_0x0001056322c0();
  return;
}



/* Entry: 105631da8; end: 105631e8f;  */

void FUN_105631da8(void)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  int extraout_w10;
  ulong unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001000fef14();
  if (unaff_x19 == 0) {
    *unaff_x20 = 0;
    unaff_x20[1] = 0;
  }
  else {
    _objc_opt_class(PTR_PTR_1126bc6e8);
    uVar2 = unaff_x19;
    _objc_opt_isKindOfClass();
    if ((uVar2 & 1) == 0) {
      _objc_retain();
      ppuStack_38 = &PTR_DAT_1108a1220;
      func_0x0001000de59c(&uStack_30,&ppuStack_38,&stack0xffffffffffffffc0,FUN_105631f2c);
      uVar1 = uStack_28;
      uVar4 = uStack_30;
      uStack_30 = 0;
      uStack_28 = 0;
      func_0x0001000df524(&uStack_30);
      _objc_release(unaff_x19);
      unaff_x20[1] = uVar1;
      *unaff_x20 = uVar4;
      uStack_50 = 0;
      uStack_48 = 0;
      FUN_105632270(&uStack_50);
    }
    else {
      lVar3 = *(long *)(unaff_x19 + 0x20);
      uVar4 = *(undefined8 *)(unaff_x19 + 0x18);
      unaff_x20[1] = *(undefined8 *)(unaff_x19 + 0x20);
      *unaff_x20 = uVar4;
      if (lVar3 != 0) {
        do {
          func_0x0001056322d0();
        } while (extraout_w10 != 0);
      }
    }
  }
  func_0x0001056322c0();
  return;
}


