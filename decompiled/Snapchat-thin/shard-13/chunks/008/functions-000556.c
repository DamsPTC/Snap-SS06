/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10adaffa0; end: 10adaffa7; -[LSAGlobalRemoteAssetsPrefetchProvider .cxx_destruct] */

long FUN_10adaffa0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x10);
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
  return param_1 + 8;
}



/* Entry: 10adaffa8; end: 10adaffaf; -[LSAGlobalRemoteAssetsPrefetchProvider .cxx_construct] */

void FUN_10adaffa8(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



/* Entry: 10adaffb0; end: 10adb0063;  */

void FUN_10adaffb0(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar1 = param_1[1];
    lVar2 = lVar3;
    if (lVar1 != lVar3) {
      do {
        lVar1 = lVar1 + -0xb0;
        FUN_10a23298c();
      } while (lVar1 != lVar3);
      lVar2 = *param_1;
    }
    param_1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10adb0064; end: 10adb0073;  */

void FUN_10adb0064(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c73ec8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10adb0074; end: 10adb0093;  */

void FUN_10adb0074(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c73ec8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10adb0094; end: 10adb00a3;  */

void FUN_10adb0094(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010adb009c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10adb00a4; end: 10adb01ab;  */

void FUN_10adb00a4(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if ((param_2 != (undefined8 *)0x0) &&
     ((lVar4 = param_2[1], lVar4 == 0 || (*(long *)(lVar4 + 8) == -1)))) {
    plVar5 = *(long **)(param_1 + 8);
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plVar5 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar4 = param_2[1];
    }
    *param_2 = param_3;
    param_2[1] = plVar5;
    if (lVar4 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
        return;
      }
    }
  }
  return;
}



/* Entry: 10adb01ac; end: 10adb01d3; +[LSARemoteAsset lsaRemoteAssetTypeFromAssetType:] */

undefined8 FUN_10adb01ac(undefined8 param_1,undefined8 param_2,int *param_3)

{
  if (*param_3 - 1U < 6) {
    return *(undefined8 *)(&UNK_10e513a48 + (ulong)(*param_3 - 1U) * 8);
  }
  return 2;
}



/* Entry: 10adb01d4; end: 10adb0447; +[LSARemoteAsset remoteAssetFromDescriptor:] */

void FUN_10adb01d4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  func_0x00010c0b5b60(PTR_PTR_1126de180);
  puVar1 = *(undefined8 **)(param_3 + 8);
  if (-1 < *(char *)(param_3 + 0x1f)) {
    puVar1 = (undefined8 *)(param_3 + 8);
  }
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  plVar4 = (long *)(param_3 + 0x50);
  if (*(char *)(param_3 + 0x67) < '\0') {
    if (*(long *)(param_3 + 0x58) == 0) goto LAB_10adb0270;
    plVar4 = (long *)*plVar4;
LAB_10adb0258:
    puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf64a00(PTR__OBJC_CLASS___NSData_1126ae778,param_2,plVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (*(char *)(param_3 + 0x67) != '\0') goto LAB_10adb0258;
LAB_10adb0270:
    puVar5 = (undefined *)0x0;
  }
  plVar4 = (long *)(param_3 + 0x68);
  if (*(char *)(param_3 + 0x7f) < '\0') {
    if (*(long *)(param_3 + 0x70) == 0) goto LAB_10adb02ac;
    plVar4 = (long *)*plVar4;
LAB_10adb0294:
    puVar6 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf64a00(PTR__OBJC_CLASS___NSData_1126ae778,param_2,plVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (*(char *)(param_3 + 0x7f) != '\0') goto LAB_10adb0294;
LAB_10adb02ac:
    puVar6 = (undefined *)0x0;
  }
  plVar4 = (long *)(param_3 + 0x20);
  if (*(char *)(param_3 + 0x37) < '\0') {
    if (*(long *)(param_3 + 0x28) == 0) goto LAB_10adb02e8;
    plVar4 = (long *)*plVar4;
LAB_10adb02d0:
    puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,plVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (*(char *)(param_3 + 0x37) != '\0') goto LAB_10adb02d0;
LAB_10adb02e8:
    puVar8 = (undefined *)0x0;
  }
  plVar4 = (long *)(param_3 + 0x80);
  if (*(char *)(param_3 + 0x97) < '\0') {
    if (*(long *)(param_3 + 0x88) == 0) goto LAB_10adb0324;
    plVar4 = (long *)*plVar4;
LAB_10adb030c:
    puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,plVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (*(char *)(param_3 + 0x97) != '\0') goto LAB_10adb030c;
LAB_10adb0324:
    puVar9 = (undefined *)0x0;
  }
  plVar4 = (long *)(param_3 + 0x98);
  if (*(char *)(param_3 + 0xaf) < '\0') {
    if (*(long *)(param_3 + 0xa0) != 0) {
      plVar4 = (long *)*plVar4;
      goto LAB_10adb0348;
    }
  }
  else if (*(char *)(param_3 + 0xaf) != '\0') {
LAB_10adb0348:
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,plVar4);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_10adb0364;
  }
  puVar7 = (undefined *)0x0;
LAB_10adb0364:
  puVar3 = PTR_PTR_1126de180;
  _objc_alloc(PTR_PTR_1126de180);
  func_0x00010bff43e0();
  _objc_release(puVar7);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10adb0448; end: 10adb05bb; -[LSARemoteAsset initWithAssetId:assetType:avatarId:encryptionKey:encryptionIv:urlString:checksum:] */

undefined1 *
FUN_10adb0448(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1127013f8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10adb05bc; end: 10adb071f; -[LSARemoteAsset initWithCoder:] */

undefined1 * FUN_10adb05bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127013f8;
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
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
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
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10adb0720; end: 10adb08f7; -[LSARemoteAsset isEqual:] */

bool FUN_10adb0720(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  
  _objc_retain(param_3);
  if (param_3 == param_1) {
    bVar1 = true;
  }
  else {
    _objc_retain(param_3);
    uVar9 = *(undefined8 *)(param_1 + 8);
    lVar2 = param_3;
    func_0x00010bf0b260(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_10addcae0(uVar9,lVar2);
    if ((int)uVar9 == 0) {
      bVar1 = false;
    }
    else {
      uVar9 = *(undefined8 *)(param_1 + 0x18);
      lVar3 = param_3;
      func_0x00010bf12ea0(param_3);
      _objc_retainAutoreleasedReturnValue();
      FUN_10addcae0(uVar9,lVar3);
      if ((int)uVar9 == 0) {
        bVar1 = false;
      }
      else {
        uVar9 = *(undefined8 *)(param_1 + 0x20);
        lVar4 = param_3;
        func_0x00010bf93ec0(param_3);
        _objc_retainAutoreleasedReturnValue();
        FUN_10addcae0(uVar9,lVar4);
        if ((int)uVar9 == 0) {
          bVar1 = false;
        }
        else {
          uVar9 = *(undefined8 *)(param_1 + 0x28);
          lVar5 = param_3;
          func_0x00010bf93e80(param_3);
          _objc_retainAutoreleasedReturnValue();
          FUN_10addcae0(uVar9,lVar5);
          if ((int)uVar9 == 0) {
            bVar1 = false;
          }
          else {
            uVar9 = *(undefined8 *)(param_1 + 0x30);
            lVar6 = param_3;
            func_0x00010c28f9a0(param_3);
            _objc_retainAutoreleasedReturnValue();
            FUN_10addcae0(uVar9,lVar6);
            if ((int)uVar9 == 0) {
              bVar1 = false;
            }
            else {
              uVar9 = *(undefined8 *)(param_1 + 0x38);
              lVar7 = param_3;
              func_0x00010bf38a80(param_3);
              _objc_retainAutoreleasedReturnValue();
              FUN_10addcae0(uVar9,lVar7);
              if ((int)uVar9 == 0) {
                bVar1 = false;
              }
              else {
                lVar10 = *(long *)(param_1 + 0x10);
                lVar8 = param_3;
                func_0x00010bf0b760(param_3);
                bVar1 = lVar10 == lVar8;
              }
              _objc_release(lVar7);
            }
            _objc_release(lVar6);
          }
          _objc_release(lVar5);
        }
        _objc_release(lVar4);
      }
      _objc_release(lVar3);
    }
    _objc_release(lVar2);
    _objc_release(param_3);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10adb08f8; end: 10adb09d3; -[LSARemoteAsset hash] */

ulong FUN_10adb08f8(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong auStack_60 [6];
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010bfde980();
  auStack_60[1] = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  auStack_60[2] = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  auStack_60[3] = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  auStack_60[4] = uVar3;
  func_0x00010bfde980();
  uVar4 = *(ulong *)(param_1 + 0x38);
  auStack_60[5] = uVar2;
  func_0x00010bfde980();
  lVar5 = 8;
  do {
    uVar1 = *(ulong *)((long)auStack_60 + lVar5) | uVar1 << 0x20;
    uVar1 = ~uVar1 + uVar1 * 0x40000;
    uVar1 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
    uVar1 = (uVar1 ^ uVar1 >> 0xb) * 0x41;
    uVar1 = uVar1 ^ uVar1 >> 0x16;
    lVar5 = lVar5 + 8;
  } while (lVar5 != 0x30);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return uVar1;
  }
  uStack_30 = uVar4;
  ___stack_chk_fail();
  _objc_retain();
  return uVar4;
}



/* Entry: 10adb09d4; end: 10adb09f7; -[LSARemoteAsset copyWithZone:] */

undefined8 FUN_10adb09d4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10adb09f8; end: 10adb0a9f; -[LSARemoteAsset description] */

void FUN_10adb09f8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_38 = PTR_PTR_1127013f8;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10adb0aa0; end: 10adb0b63; -[LSARemoteAsset encodeWithCoder:] */

void FUN_10adb0aa0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110de1838);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110de1878);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110dc65f8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110e8a738);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110f2e478);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110db11d8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                      &PTR____CFConstantStringClassReference_110e186f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10adb0b64; end: 10adb0b6b; -[LSARemoteAsset assetId] */

undefined8 FUN_10adb0b64(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10adb0b6c; end: 10adb0b73; -[LSARemoteAsset assetType] */

undefined8 FUN_10adb0b6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10adb0b74; end: 10adb0b7b; -[LSARemoteAsset avatarId] */

undefined8 FUN_10adb0b74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10adb0b7c; end: 10adb0b83; -[LSARemoteAsset encryptionKey] */

undefined8 FUN_10adb0b7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10adb0b84; end: 10adb0b8b; -[LSARemoteAsset encryptionIv] */

undefined8 FUN_10adb0b84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10adb0b8c; end: 10adb0b93; -[LSARemoteAsset urlString] */

undefined8 FUN_10adb0b8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10adb0b94; end: 10adb0b9b; -[LSARemoteAsset checksum] */

undefined8 FUN_10adb0b94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10adb0b9c; end: 10adb0bfb; -[LSARemoteAsset .cxx_destruct] */

void FUN_10adb0b9c(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10adb0bfc; end: 10adb0c07; -[LSARemoteAssetsComponent setAssetWithPath:lsaAsset:lensId:completion:] */

void FUN_10adb0bfc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea1f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setAssetWithPath_lsaAsset_lensI_112586180);
  return;
}



/* Entry: 10adb0c08; end: 10adb0e07; -[LSARemoteAssetsComponent setAssetUploadStatus:assetId:lensId:assetUrl:assetUploadMetadata:completion:] */

void FUN_10adb0c08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar2 = param_1;
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126db570;
  func_0x00010c129f20(PTR_PTR_1126db570,param_2,2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_10adb0e08;
  puStack_a0 = &UNK_110c73f38;
  uStack_98 = param_1;
  _objc_retain(param_4);
  uStack_90 = param_4;
  uStack_78 = param_3;
  _objc_retain(param_6);
  uStack_88 = param_6;
  _objc_retain(param_7);
  puStack_e0 = puVar1;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_10adb0f64;
  puStack_c8 = &UNK_110c72a10;
  uStack_80 = param_7;
  _objc_retain(param_8);
  uStack_c0 = param_8;
  func_0x00010c0f91a0(uVar2,param_2,puVar3,&puStack_b8,&puStack_e0);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uStack_c0);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  return;
}



/* Entry: 10adb0e08; end: 10adb0eef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adb0e08(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127844c8);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10adb0ef0;
  puStack_58 = &UNK_110c73f08;
  uStack_38 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = uVar1;
  _objc_retain(uVar4);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_48 = uVar4;
  _objc_retain(uVar2);
  uStack_40 = uVar2;
  func_0x00010c142760(uVar3,param_2,uVar1,&puStack_70);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  return;
}



/* Entry: 10adb0ef0; end: 10adb0f63;  */

void FUN_10adb0ef0(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  if (*(long *)(param_1 + 0x38) == 1) {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
  }
  else {
    uVar1 = 0;
    uVar2 = 0;
  }
  (**(code **)(param_2 + 0x10))
            (param_2,*(undefined8 *)(param_1 + 0x20),uVar1,uVar2,*(long *)(param_1 + 0x38) == 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10adb0f64; end: 10adb0fb7;  */

void FUN_10adb0f64(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10adb0fb8; end: 10adb10a3; -[LSARemoteAssetsComponent setInMemoryAssetProvider:] */

void FUN_10adb0fb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10adb10a4;
  puStack_48 = &UNK_110883780;
  uStack_40 = param_1;
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x00010c0f92c0(uVar1,param_2,&puStack_60);
  _objc_release(uVar1);
  func_0x00010bdece00(param_1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10adb10a4; end: 10adb10df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adb10a4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  lVar4 = (long)_DAT_1127844cc;
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(lVar1 + lVar4);
  *(undefined8 *)(lVar1 + lVar4) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10adb10e0; end: 10adb113b; -[LSARemoteAssetsComponent addListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adb10e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bef9980(*(undefined8 *)(param_1 + _DAT_1127844d0),param_2,param_3);
  func_0x00010bdece00(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10adb113c; end: 10adb114b; -[LSARemoteAssetsComponent removeListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adb113c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127844d0),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 10adb114c; end: 10adb1273; -[LSARemoteAssetsComponent initWithPerformer:announcerQueuePerformer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10adb114c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_112701400;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithPerformer_announcerQueue_1125eac68,param_3,param_4);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126de188;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127844d0);
    *(undefined **)((long)puVar1 + (long)_DAT_1127844d0) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126de190;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127844d4);
    *(undefined **)((long)puVar1 + (long)_DAT_1127844d4) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126de190;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127844c8);
    *(undefined **)((long)puVar1 + (long)_DAT_1127844c8) = puVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10adb1274; end: 10adb1373; -[LSARemoteAssetsComponent setCoreManager:announcer:configuration:] */

void FUN_10adb1274(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long *plStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  plStack_38 = (long *)param_3[1];
  uStack_40 = *param_3;
  if (param_3[1] != 0) {
    plVar1 = (long *)(param_3[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puStack_48 = PTR_PTR_112701400;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_setCoreManager_announcer_configu_11263ea88,&uStack_40,param_4
                      ,param_5);
  plVar1 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar2 = plStack_38 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10adb1374; end: 10adb1513; -[LSARemoteAssetsComponent didRequestAsset:lensId:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adb1374(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(ulong *)(param_1 + _DAT_1127844d4);
  _objc_retainBlock(param_5);
  func_0x00010bef78e0();
  _objc_release(param_5);
  if (uVar1 < 2) {
    _objc_initWeak(auStack_48,param_1);
    func_0x00010c0f98a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010c0f88c0(param_1);
    _objc_release(param_1);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10adb1514; end: 10adb1697;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adb1514(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + _DAT_1127844cc);
    func_0x00010c129e40(lVar2,param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      uVar3 = *(ulong *)(lVar1 + _DAT_1127844d0);
      func_0x00010bfd4200();
      if ((uVar3 & 1) == 0) {
        func_0x00010c16aa60(lVar1,param_2,0,*(undefined8 *)(param_1 + 0x20),
                            *(undefined8 *)(param_1 + 0x28),0);
      }
      else {
        uVar4 = *(undefined8 *)(param_1 + 0x30);
        func_0x00010bf047a0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_70 = 0xc2000000;
        pcStack_68 = FUN_10adb1698;
        puStack_60 = &UNK_110896e48;
        uVar6 = *(undefined8 *)(param_1 + 0x20);
        lStack_58 = lVar1;
        _objc_retain(uVar6);
        uVar5 = *(undefined8 *)(param_1 + 0x28);
        uStack_50 = uVar6;
        _objc_retain(uVar5);
        uStack_48 = uVar5;
        func_0x00010c0f88c0(uVar4,param_2,&puStack_78);
        _objc_release(uVar4);
        _objc_release(uStack_48);
        _objc_release(uStack_50);
      }
    }
    else {
      func_0x00010bea4a00(lVar1,param_2,lVar2,*(undefined8 *)(param_1 + 0x20),
                          *(undefined8 *)(param_1 + 0x28));
    }
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 10adb1698; end: 10adb16b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adb1698(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c129ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127844d0),
             PTR_s_remoteAssetsComponent_didRequest_1126281d0,*(long *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 10adb16b4; end: 10adb185f; -[LSARemoteAssetsComponent didRequestAssetUpload:atPath:lensId:deleteAfterUploading:assetType:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adb16b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  ulong uVar2;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar2 = *(ulong *)(param_1 + _DAT_1127844c8);
  _objc_retainBlock(param_8);
  func_0x00010bef78e0(uVar2,param_2,param_8,param_3);
  _objc_release(param_8);
  if (uVar2 < 2) {
    lVar1 = param_1;
    func_0x00010bf047a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_10adb1860;
    puStack_88 = &UNK_110c73f68;
    lStack_80 = param_1;
    _objc_retain(param_3);
    uStack_78 = param_3;
    _objc_retain(param_4);
    uStack_70 = param_4;
    _objc_retain(param_5);
    uStack_68 = param_5;
    uStack_60 = param_7;
    uStack_58 = param_6;
    func_0x00010c0f88c0(lVar1,param_2,&puStack_a0);
    _objc_release(lVar1);
    _objc_release(uStack_68);
    _objc_release(uStack_70);
    _objc_release(uStack_78);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10adb1860; end: 10adb1883;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adb1860(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c129f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127844d0),
             PTR_s_remoteAssetsComponent_didRequest_1126281e0,*(long *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38),*(undefined1 *)(param_1 + 0x48),
             *(undefined8 *)(param_1 + 0x40));
  return;
}



/* Entry: 10adb1884; end: 10adb1adf; -[LSARemoteAssetsComponent didRequestAssetUpload:atPath:encryptionKey:encryptionIv:assetBatchId:lensId:deleteAfterUploading:assetType:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adb1884(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12)

{
  long lVar1;
  ulong uVar2;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar2 = *(ulong *)(param_1 + _DAT_1127844c8);
  _objc_retainBlock(param_12);
  func_0x00010bef78e0(uVar2,param_2,param_12,param_3);
  _objc_release(param_12);
  if (uVar2 < 2) {
    lVar1 = param_1;
    func_0x00010bf047a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_10adb1ae0;
    puStack_b0 = &UNK_110c73f98;
    lStack_a8 = param_1;
    _objc_retain(param_3);
    uStack_a0 = param_3;
    _objc_retain(param_4);
    uStack_98 = param_4;
    _objc_retain(param_5);
    uStack_90 = param_5;
    _objc_retain(param_6);
    uStack_88 = param_6;
    _objc_retain(param_7);
    uStack_80 = param_7;
    _objc_retain(param_8);
    uStack_68 = param_9;
    uStack_70 = param_11;
    uStack_78 = param_8;
    func_0x00010c0f88c0(lVar1,param_2,&puStack_c8);
    _objc_release(lVar1);
    _objc_release(uStack_78);
    _objc_release(uStack_80);
    _objc_release(uStack_88);
    _objc_release(uStack_90);
    _objc_release(uStack_98);
    _objc_release(uStack_a0);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10adb1ae0; end: 10adb1b2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adb1ae0(long param_1,undefined8 param_2)

{
  func_0x00010c129ee0(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127844d0),param_2,
                      *(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                      *(undefined8 *)(param_1 + 0x50),*(undefined1 *)(param_1 + 0x60));
  return;
}



/* Entry: 10adb1b2c; end: 10adb1b7b;  */

void FUN_10adb1b2c(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(param_2 + 0x50));
  return;
}



/* Entry: 10adb1b7c; end: 10adb1c4f; -[LSARemoteAssetsComponent _createDelegateWrapperIfNeeded] */

void FUN_10adb1b7c(undefined8 param_1)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f92c0(param_1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10adb1c50; end: 10adb1e6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adb1c50(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  long lStack_50;
  long lStack_48;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (plVar2 = (long *)(param_1 + _DAT_1127844d8), *plVar2 == 0)) {
    func_0x00010bf52380(&lStack_80,param_1);
    lStack_60 = 0;
    plStack_58 = (long *)0x0;
    if (plStack_78 != (long *)0x0) {
      plVar7 = plStack_78;
      __ZNSt3__119__shared_weak_count4lockEv();
      plStack_58 = plVar7;
      if (plVar7 != (long *)0x0) {
        lStack_60 = lStack_80;
        if (lStack_80 != 0) {
          lStack_70 = lStack_80;
          plVar1 = plVar7 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = *plVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          puVar5 = (undefined8 *)0x28;
          plStack_68 = plVar7;
          __Znwm();
          puVar5[1] = 0;
          puVar5[2] = 0;
          *puVar5 = &PTR_DAT_110c74038;
          puVar5[3] = &PTR_FUN_110c740d8;
          _objc_initWeak(puVar5 + 4,param_1);
          plVar7 = (long *)plVar2[1];
          *plVar2 = (long)(puVar5 + 3);
          plVar2[1] = (long)puVar5;
          if (plVar7 != (long *)0x0) {
            plVar1 = plVar7 + 1;
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
              (**(code **)(*plVar7 + 0x10))(plVar7);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
            }
          }
          lStack_48 = plVar2[1];
          lStack_50 = *plVar2;
          if (plVar2[1] != 0) {
            plVar2 = (long *)(plVar2[1] + 0x10);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar4) {
                *plVar2 = *plVar2 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          FUN_10a227714(lStack_70,&lStack_50);
          if (lStack_48 != 0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
          if (plStack_68 != (long *)0x0) {
            plVar2 = plStack_68 + 1;
            do {
              lVar6 = *plVar2;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar4) {
                *plVar2 = lVar6 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar6 == 0) {
              (**(code **)(*plStack_68 + 0x10))(plStack_68);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
            }
          }
        }
      }
    }
    plVar2 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar7 = plStack_58 + 1;
      do {
        lVar6 = *plVar7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    if (plStack_78 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  _objc_release(param_1);
  return;
}



/* Entry: 10adb1e6c; end: 10adb2063; -[LSARemoteAssetsComponent _setAssetWithPath:lsaAsset:lensId:isFromInMemoryProvider:completion:] */

void FUN_10adb1e6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined1 auStack_78 [8];
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_initWeak(auStack_68,param_1);
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126db570;
  func_0x00010c129f20(PTR_PTR_1126db570);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_78,auStack_68);
  uStack_70 = param_6;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  func_0x00010c0f9160(param_1);
  _objc_release(puVar1);
  _objc_release(param_1);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10adb2064; end: 10adb2147;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adb2064(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  lVar3 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar3 != 0) {
    if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
      func_0x00010c1ea220(*(undefined8 *)(lVar3 + _DAT_1127844cc),param_2,
                          *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
    }
    uVar4 = *(undefined8 *)(lVar3 + _DAT_1127844d4);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_10adb2148;
    puStack_40 = &UNK_110c73fc8;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar1);
    uStack_38 = uVar1;
    func_0x00010c142760(uVar4,param_2,uVar2,&puStack_58);
    _objc_release(uStack_38);
  }
  _objc_release(lVar3);
  return;
}



/* Entry: 10adb2148; end: 10adb215b;  */

void FUN_10adb2148(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010adb2158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x10))(param_2,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10adb215c; end: 10adb21af;  */

void FUN_10adb215c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10adb21b0; end: 10adb22eb; -[LSARemoteAssetsComponent _setInMemoryPath:asset:lensId:] */

void FUN_10adb21b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_50 = param_2;
  _objc_retain(param_4);
  func_0x00010bea1f60(param_1);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 10adb22ec; end: 10adb2467;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adb22ec(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 in_x6;
  undefined8 in_x7;
  
  _objc_retain(param_2);
  if (param_2 != 0) {
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    if (lVar1 != 0) {
      func_0x00010c069d80(*(undefined8 *)(lVar1 + _DAT_1127844cc));
      if ((bRam000000011330a9e8 & 1) != 0) {
        uVar2 = *(undefined8 *)(param_1 + 0x30);
        _NSStringFromSelector();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        _objc_retainAutorelease();
        func_0x00010bdc3520();
        uVar4 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010bf0b260();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        _objc_retainAutorelease();
        func_0x00010bdc3520();
        lVar6 = param_2;
        func_0x00010bf6e340();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        _objc_retainAutorelease();
        func_0x00010bdc3520();
        func_0x00010ae06f08(0,1,&UNK_10f6ad635,&UNK_10f6ad6e1,0x101,&UNK_10f6ad729,in_x6,in_x7,uVar3
                            ,uVar5,lVar7);
        _objc_release(lVar6);
        _objc_release(uVar4);
        _objc_release(uVar2);
      }
      _objc_release(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10adb2468; end: 10adb250f; -[LSARemoteAssetsComponent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adb2468(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  _objc_storeStrong(param_1 + _DAT_1127844c8,0);
  _objc_storeStrong(param_1 + _DAT_1127844d4,0);
  plVar5 = *(long **)(param_1 + _DAT_1127844d8 + 8);
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
  _objc_storeStrong(param_1 + _DAT_1127844d0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127844cc,0);
  return;
}



/* Entry: 10adb2510; end: 10adb2533; -[LSARemoteAssetsComponent .cxx_construct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adb2510(long param_1)

{
  long lVar1;
  
  lVar1 = (long)_DAT_1127844d8;
  *(undefined8 *)(param_1 + lVar1) = 0;
  ((undefined8 *)(param_1 + lVar1))[1] = 0;
  return;
}



/* Entry: 10adb2534; end: 10adb2553;  */

void FUN_10adb2534(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c74038;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10adb2554; end: 10adb2563;  */

void FUN_10adb2554(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010adb255c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x10))();
  return;
}



/* Entry: 10adb2564; end: 10adb26df; -[LSARemoteAssetsComponentListenerAnnouncer description] */

void FUN_10adb2564(long param_1)

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
  
  FUN_10adb26e0(&plStack_60,param_1 + 0x48);
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



/* Entry: 10adb26e0; end: 10adb273f;  */

void FUN_10adb26e0(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10adb2740; end: 10adb29eb; -[LSARemoteAssetsComponentListenerAnnouncer addListener:] */

undefined8 FUN_10adb2740(long param_1,undefined8 param_2,long param_3)

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
  *plVar3 = (long)&PTR_FUN_110c74088;
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
    FUN_10adb29ec(plVar10,auStack_90);
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
    FUN_10adb2b2c(puVar8,&plStack_a0);
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
LAB_10adb28f4:
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
      goto LAB_10adb2914;
    }
    for (lVar7 = *plVar6; lVar7 != lVar12; lVar7 = lVar7 + 8) {
      lVar5 = lVar7;
      _objc_loadWeakRetained();
      _objc_release();
      if (lVar5 != 0) {
        FUN_10adb29ec(plVar10,lVar7);
      }
    }
    _objc_initWeak(auStack_78,param_3);
    FUN_10adb29ec(plVar10,auStack_78);
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
    FUN_10adb2b2c(puVar8,&plStack_88);
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
      goto LAB_10adb28f4;
    }
  }
  uVar9 = 1;
LAB_10adb2914:
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



/* Entry: 10adb29ec; end: 10adb2b2b;  */

void FUN_10adb29ec(long *param_1,long *param_2)

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
      FUN_10adb32ac();
LAB_10adb2b28:
      func_0x000104c4f740();
      plVar5 = param_1;
      __ZNSt3__112__get_sp_mutEPKv();
      __ZNSt3__18__sp_mut4lockEv();
      lVar9 = *param_1;
      *param_1 = *param_2;
      *param_2 = lVar9;
      lVar9 = param_1[1];
      param_1[1] = param_2[1];
      param_2[1] = lVar9;
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
      if (uVar7 >> 0x3d != 0) goto LAB_10adb2b28;
      lVar4 = uVar7 << 3;
      __Znwm();
    }
    lVar9 = lVar4 + lVar9;
    _objc_copyWeak(lVar9,param_2);
    lVar8 = *param_1;
    lVar3 = param_1[1];
    lVar1 = lVar9 + (lVar8 - lVar3);
    lVar10 = lVar8;
    lVar11 = lVar1;
    if (lVar3 != lVar8) {
      do {
        _objc_moveWeak(lVar11,lVar10);
        lVar10 = lVar10 + 8;
        lVar11 = lVar11 + 8;
      } while (lVar10 != lVar3);
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



/* Entry: 10adb2b2c; end: 10adb2b83;  */

void FUN_10adb2b2c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_1;
  __ZNSt3__112__get_sp_mutEPKv();
  __ZNSt3__18__sp_mut4lockEv();
  uVar2 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar2;
  uVar2 = param_1[1];
  param_1[1] = param_2[1];
  param_2[1] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar1);
  return;
}



/* Entry: 10adb2b84; end: 10adb2db3; -[LSARemoteAssetsComponentListenerAnnouncer removeListener:] */

void FUN_10adb2b84(long param_1,undefined8 param_2,long param_3)

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
  if (plVar6 == (long *)0x0) goto LAB_10adb2d38;
  lVar7 = *plVar6;
  if (plVar6[1] - lVar7 == 8) {
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar7 != param_3) goto LAB_10adb2bec;
    uStack_70 = 0;
    plStack_68 = (long *)0x0;
    FUN_10adb2b2c(puVar8,&uStack_70);
    if (plStack_68 == (long *)0x0) goto LAB_10adb2d38;
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
LAB_10adb2bec:
    plVar6 = (long *)0x30;
    __Znwm();
    plVar10 = plVar6 + 1;
    *plVar10 = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_110c74088;
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
          FUN_10adb29ec(plVar9,lVar7);
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
    FUN_10adb2b2c(puVar8,&plStack_90);
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
    if (plStack_78 == (long *)0x0) goto LAB_10adb2d38;
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
LAB_10adb2d38:
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10adb2db4; end: 10adb2dff; -[LSARemoteAssetsComponentListenerAnnouncer hasAnyListeners] */

bool FUN_10adb2db4(long param_1)

{
  bool bVar1;
  long *plVar2;
  
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  plVar2 = *(long **)(param_1 + 0x48);
  if (plVar2 == (long *)0x0) {
    bVar1 = false;
  }
  else {
    bVar1 = plVar2[1] != *plVar2;
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
  return bVar1;
}



/* Entry: 10adb2e00; end: 10adb2f2b; -[LSARemoteAssetsComponentListenerAnnouncer remoteAssetsComponent:didRequestAsset:lensId:] */

void FUN_10adb2e00(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

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
  _objc_retain(param_5);
  FUN_10adb26e0(&plStack_50,param_1 + 0x48);
  if (plStack_50 != (long *)0x0) {
    lVar2 = plStack_50[1];
    for (lVar6 = *plStack_50; lVar6 != lVar2; lVar6 = lVar6 + 8) {
      lVar5 = lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010c129ec0();
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
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10adb2f2c; end: 10adb3097; -[LSARemoteAssetsComponentListenerAnnouncer remoteAssetsComponent:didRequestAssetUploadWithId:assetPath:lensId:deleteAfterUploading:assetType:] */

void FUN_10adb2f2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plStack_70;
  long *plStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  FUN_10adb26e0(&plStack_70,param_1 + 0x48);
  if (plStack_70 != (long *)0x0) {
    lVar2 = plStack_70[1];
    for (lVar6 = *plStack_70; lVar6 != lVar2; lVar6 = lVar6 + 8) {
      lVar5 = lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010c129f00();
      _objc_release(lVar5);
    }
  }
  if (plStack_68 != (long *)0x0) {
    plVar1 = plStack_68 + 1;
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
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10adb3098; end: 10adb3263; -[LSARemoteAssetsComponentListenerAnnouncer remoteAssetsComponent:didRequestAssetUploadWithId:assetPath:encryptionKey:encryptionIv:assetBatchId:lensId:deleteAfterUploading:assetType:] */

void FUN_10adb3098(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plStack_70;
  long *plStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  FUN_10adb26e0(&plStack_70,param_1 + 0x48);
  if (plStack_70 != (long *)0x0) {
    lVar2 = plStack_70[1];
    for (lVar6 = *plStack_70; lVar6 != lVar2; lVar6 = lVar6 + 8) {
      lVar5 = lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010c129ee0();
      _objc_release(lVar5);
    }
  }
  if (plStack_68 != (long *)0x0) {
    plVar1 = plStack_68 + 1;
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
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
    }
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10adb3264; end: 10adb328b; -[LSARemoteAssetsComponentListenerAnnouncer .cxx_destruct] */

void FUN_10adb3264(long param_1)

{
  FUN_10adb32c0(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 8);
  return;
}



/* Entry: 10adb328c; end: 10adb32ab; -[LSARemoteAssetsComponentListenerAnnouncer .cxx_construct] */

void FUN_10adb328c(long param_1)

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



/* Entry: 10adb32ac; end: 10adb32bf;  */

undefined * FUN_10adb32ac(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  
  puVar4 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
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



/* Entry: 10adb32c0; end: 10adb3317;  */

long FUN_10adb32c0(long param_1)

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



/* Entry: 10adb3318; end: 10adb3327;  */

void FUN_10adb3318(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c74088;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10adb3328; end: 10adb3347;  */

void FUN_10adb3328(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c74088;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10adb3348; end: 10adb33af;  */

void FUN_10adb3348(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    lVar1 = lVar3;
    if (lVar2 != lVar3) {
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



/* Entry: 10adb33b0; end: 10adb33b3;  */

void FUN_10adb33b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10adb33b4; end: 10adb343b;  */

undefined8 * FUN_10adb33b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c740d8;
  _objc_storeWeak(param_1 + 1,0);
  _objc_destroyWeak(param_1 + 1);
  return param_1;
}



/* Entry: 10adb343c; end: 10adb3653;  */

void FUN_10adb343c(long param_1,long param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  
  plVar7 = (long *)*(long *)(param_2 + 0x38);
  if (-1 < *(char *)(param_2 + 0x4f)) {
    plVar7 = (long *)(param_2 + 0x38);
  }
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,plVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126de180;
  func_0x00010c129e00(PTR_PTR_1126de180);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar6 = uVar5;
  _objc_opt_respondsToSelector();
  if ((uVar6 & 1) != 0) {
    plVar7 = (long *)0x58;
    __Znwm();
    plVar9 = plVar7 + 1;
    *plVar9 = 0;
    plVar7[2] = 0;
    *plVar7 = (long)&PTR_FUN_110c74180;
    plVar7[3] = *param_3;
    (**(code **)(param_3[1] + 0x10))(plVar7 + 4,param_3 + 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = *plVar9 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    func_0x00010bf79d80(uVar5);
    if (plVar7 != (long *)0x0) {
      plVar9 = plVar7 + 1;
      do {
        lVar8 = *plVar9;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar2) {
          *plVar9 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if (plVar7 != (long *)0x0) {
      plVar9 = plVar7 + 1;
      do {
        lVar8 = *plVar9;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar2) {
          *plVar9 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
  }
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  return;
}



/* Entry: 10adb3654; end: 10adb37b7;  */

/* WARNING: Removing unreachable block (ram,0x00010adb375c) */

void FUN_10adb3654(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined1 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_48;
  long *plStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  
  _objc_retain(param_2);
  puVar7 = *(undefined8 **)(param_1 + 0x20);
  if (param_2 == 0) {
    func_0x000107c31940(&uStack_38,"");
    uStack_60 = uStack_28;
    uStack_68 = uStack_30;
    uStack_70 = uStack_38;
  }
  else {
    lVar6 = param_2;
    _objc_retainAutorelease(param_2);
    func_0x00010bdc3520();
    func_0x000107c31940(&uStack_38,lVar6);
    uStack_60 = uStack_28;
    uStack_68 = uStack_30;
    uStack_70 = uStack_38;
    uStack_30 = 0;
    uStack_28 = 0;
    uStack_38 = 0;
  }
  uVar2 = uStack_68;
  if (-1 < (long)uStack_60) {
    uVar2 = uStack_60 >> 0x38;
  }
  uStack_58 = uVar2 != 0;
  uStack_50 = 0;
  uStack_48 = 0;
  plStack_40 = (long *)0x0;
  (*(code *)*puVar7)(&uStack_70,puVar7);
  plVar5 = plStack_40;
  if (plStack_40 != (long *)0x0) {
    plVar1 = plStack_40 + 1;
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
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  if ((long)uStack_60 < 0) {
    __ZdlPv(uStack_70);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 10adb37b8; end: 10adb37e7;  */

void FUN_10adb37b8(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)(param_2 + 0x28);
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* Entry: 10adb37e8; end: 10adb3c8f;  */

void FUN_10adb37e8(undefined8 param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long *plVar10;
  undefined *puVar11;
  ulong uVar12;
  int in_w7;
  long lVar13;
  long *plVar14;
  long *in_stack_00000000;
  
  puVar3 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  func_0x00010bdc3540(PTR__OBJC_CLASS___NSUUID_1126b0270);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bdc3580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64a00();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64a00();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_2 + 8;
  _objc_loadWeakRetained();
  plVar10 = (long *)0x58;
  __Znwm();
  plVar14 = plVar10 + 1;
  *plVar14 = 0;
  plVar10[2] = 0;
  *plVar10 = (long)&PTR_FUN_110c741d0;
  plVar10[3] = *in_stack_00000000;
  (**(code **)(in_stack_00000000[1] + 0x10))(plVar10 + 4);
  puVar11 = puVar7;
  func_0x00010c08fa60();
  if ((puVar11 == (undefined *)0x0) ||
     ((puVar11 = puVar8, func_0x00010c08fa60(), puVar11 == (undefined *)0x0 && (1 < in_w7 - 5U)))) {
    uVar12 = uVar9;
    _objc_opt_respondsToSelector(uVar9,PTR_s_didRequestAssetUpload_atPath_len_1125bc118);
    if ((uVar12 & 1) == 0) goto LAB_10adb3b40;
    func_0x00010c0b5b60(PTR_PTR_1126de180);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar2) {
        *plVar14 = *plVar14 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    func_0x00010bf79dc0(uVar9);
    puVar11 = puVar4;
    _objc_retainAutorelease(puVar4);
    func_0x00010bdc3520();
    func_0x000107c31940(param_1,puVar11);
    if (plVar10 == (long *)0x0) goto LAB_10adb3b50;
    plVar14 = plVar10 + 1;
    do {
      lVar13 = *plVar14;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar2) {
        *plVar14 = lVar13 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  else {
    uVar12 = uVar9;
    _objc_opt_respondsToSelector(uVar9,PTR_s_didRequestAssetUpload_atPath_enc_1125bc110);
    if ((uVar12 & 1) == 0) {
LAB_10adb3b40:
      func_0x000107c31940(param_1,"");
      goto LAB_10adb3b50;
    }
    func_0x00010c0b5b60();
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar2) {
        *plVar14 = *plVar14 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    func_0x00010bf79da0(uVar9);
    puVar11 = puVar4;
    _objc_retainAutorelease(puVar4);
    func_0x00010bdc3520();
    func_0x000107c31940(param_1,puVar11);
    if (plVar10 == (long *)0x0) goto LAB_10adb3b50;
    plVar14 = plVar10 + 1;
    do {
      lVar13 = *plVar14;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar2) {
        *plVar14 = lVar13 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if (lVar13 == 0) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
  }
LAB_10adb3b50:
  if (plVar10 != (long *)0x0) {
    plVar14 = plVar10 + 1;
    do {
      lVar13 = *plVar14;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar2) {
        *plVar14 = lVar13 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  _objc_release(uVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar4);
  return;
}



/* Entry: 10adb3c90; end: 10adb3f07;  */

void FUN_10adb3c90(char *param_1,undefined8 param_2,char *param_3,long param_4,undefined1 param_5)

{
  long lVar1;
  undefined8 uVar2;
  char *pcVar3;
  long lVar4;
  undefined8 *puVar5;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  _objc_retainAutorelease(param_4);
  func_0x00010bf25f00();
  puVar5 = *(undefined8 **)(param_1 + 0x20);
  uVar2 = param_2;
  _objc_retainAutorelease(param_2);
  func_0x00010bdc3520();
  func_0x000107c31940(&uStack_b8,uVar2);
  if (param_3 == (char *)0x0) {
    pcVar3 = "";
  }
  else {
    param_1 = param_3;
    func_0x00010beec820(param_3);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = param_1;
    _objc_retainAutorelease();
    func_0x00010bdc3520();
  }
  func_0x000107c31940(&uStack_d0,pcVar3);
  lVar4 = param_4;
  func_0x00010c08fa60();
  if (lVar4 == 0) {
    uStack_60 = 0;
    lStack_70 = 0;
    lStack_68 = 0;
  }
  else {
    lVar4 = param_4;
    func_0x00010c08fa60(param_4);
    lStack_f0 = 0;
    lStack_e8 = 0;
    uStack_e0 = 0;
    func_0x0001092b13d0(&lStack_f0,lVar1,lVar1 + lVar4);
    uStack_60 = uStack_e0;
    lStack_70 = lStack_f0;
    lStack_68 = lStack_e8;
  }
  lStack_90 = lStack_a8;
  uStack_98 = uStack_b0;
  uStack_a0 = uStack_b8;
  uStack_b0 = 0;
  lStack_a8 = 0;
  uStack_80 = uStack_c8;
  uStack_88 = uStack_d0;
  lStack_78 = lStack_c0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  lStack_c0 = 0;
  uStack_b8 = 0;
  lStack_e8 = 0;
  uStack_e0 = 0;
  lStack_f0 = 0;
  uStack_58 = param_5;
  (*(code *)*puVar5)(&uStack_a0,puVar5);
  if (lStack_70 != 0) {
    lStack_68 = lStack_70;
    __ZdlPv();
  }
  if (lStack_78 < 0) {
    __ZdlPv(uStack_88);
  }
  if (lStack_90 < 0) {
    __ZdlPv(uStack_a0);
  }
  if (lStack_f0 != 0) {
    lStack_e8 = lStack_f0;
    __ZdlPv();
  }
  if (lStack_c0 < 0) {
    __ZdlPv(uStack_d0);
  }
  if (param_3 != (char *)0x0) {
    _objc_release(param_1);
  }
  if (lStack_a8 < 0) {
    __ZdlPv(uStack_b8);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10adb3f08; end: 10adb3f57;  */

undefined8 * FUN_10adb3f08(undefined8 *param_1)

{
  if (param_1[6] != 0) {
    param_1[7] = param_1[6];
    __ZdlPv();
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10adb3f58; end: 10adb3f87;  */

void FUN_10adb3f58(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)(param_2 + 0x28);
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* Entry: 10adb3f88; end: 10adb41ff;  */

void FUN_10adb3f88(char *param_1,undefined8 param_2,char *param_3,long param_4,undefined1 param_5)

{
  long lVar1;
  undefined8 uVar2;
  char *pcVar3;
  long lVar4;
  undefined8 *puVar5;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  _objc_retainAutorelease(param_4);
  func_0x00010bf25f00();
  puVar5 = *(undefined8 **)(param_1 + 0x20);
  uVar2 = param_2;
  _objc_retainAutorelease(param_2);
  func_0x00010bdc3520();
  func_0x000107c31940(&uStack_b8,uVar2);
  if (param_3 == (char *)0x0) {
    pcVar3 = "";
  }
  else {
    param_1 = param_3;
    func_0x00010beec820(param_3);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = param_1;
    _objc_retainAutorelease();
    func_0x00010bdc3520();
  }
  func_0x000107c31940(&uStack_d0,pcVar3);
  lVar4 = param_4;
  func_0x00010c08fa60();
  if (lVar4 == 0) {
    uStack_60 = 0;
    lStack_70 = 0;
    lStack_68 = 0;
  }
  else {
    lVar4 = param_4;
    func_0x00010c08fa60(param_4);
    lStack_f0 = 0;
    lStack_e8 = 0;
    uStack_e0 = 0;
    func_0x0001092b13d0(&lStack_f0,lVar1,lVar1 + lVar4);
    uStack_60 = uStack_e0;
    lStack_70 = lStack_f0;
    lStack_68 = lStack_e8;
  }
  lStack_90 = lStack_a8;
  uStack_98 = uStack_b0;
  uStack_a0 = uStack_b8;
  uStack_b0 = 0;
  lStack_a8 = 0;
  uStack_80 = uStack_c8;
  uStack_88 = uStack_d0;
  lStack_78 = lStack_c0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  lStack_c0 = 0;
  uStack_b8 = 0;
  lStack_e8 = 0;
  uStack_e0 = 0;
  lStack_f0 = 0;
  uStack_58 = param_5;
  (*(code *)*puVar5)(&uStack_a0,puVar5);
  if (lStack_70 != 0) {
    lStack_68 = lStack_70;
    __ZdlPv();
  }
  if (lStack_78 < 0) {
    __ZdlPv(uStack_88);
  }
  if (lStack_90 < 0) {
    __ZdlPv(uStack_a0);
  }
  if (lStack_f0 != 0) {
    lStack_e8 = lStack_f0;
    __ZdlPv();
  }
  if (lStack_c0 < 0) {
    __ZdlPv(uStack_d0);
  }
  if (param_3 != (char *)0x0) {
    _objc_release(param_1);
  }
  if (lStack_a8 < 0) {
    __ZdlPv(uStack_b8);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10adb4200; end: 10adb420f;  */

void FUN_10adb4200(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c74180;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10adb4210; end: 10adb422f;  */

void FUN_10adb4210(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c74180;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10adb4230; end: 10adb423f;  */

void FUN_10adb4230(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010adb4238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x20))();
  return;
}



/* Entry: 10adb4240; end: 10adb4297;  */

long FUN_10adb4240(long param_1)

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



/* Entry: 10adb4298; end: 10adb42a7;  */

void FUN_10adb4298(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c741d0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10adb42a8; end: 10adb42c7;  */

void FUN_10adb42a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c741d0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10adb42c8; end: 10adb42d7;  */

void FUN_10adb42c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010adb42d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x20))();
  return;
}



/* Entry: 10adb42d8; end: 10adb432f;  */

long FUN_10adb42d8(long param_1)

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



/* Entry: 10adb4330; end: 10adb44eb; -[LSASerializationComponent setSerializationData:completion:] */

void FUN_10adb4330(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x2020000000;
  uStack_68 = 0xffffffffffffffff;
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126db570;
  func_0x00010c15e7e0(PTR_PTR_1126db570);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f91a0(param_1);
  _objc_release(puVar1);
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10adb44ec; end: 10adb4627;  */

void FUN_10adb44ec(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 auStack_48 [2];
  char cStack_31;
  undefined8 *puStack_30;
  long lStack_28;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    puStack_30 = (undefined8 *)0x0;
    lStack_28 = 0;
  }
  else {
    func_0x00010bf52380(&puStack_30);
  }
  puVar1 = puStack_30;
  FUN_10adb4628(puStack_30,lStack_28);
  if (lStack_28 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retainAutorelease(uVar2);
    func_0x00010bdc3520();
    func_0x000107c31940(auStack_48,uVar2);
    (**(code **)*puVar1)(puVar1,auStack_48);
    *(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = (long)(int)puVar1;
    if (cStack_31 < '\0') {
      __ZdlPv(auStack_48[0]);
    }
  }
  return;
}



/* Entry: 10adb4628; end: 10adb4743;  */

long FUN_10adb4628(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  if (param_2 == (long *)0x0) {
    lVar5 = 0;
  }
  else {
    plVar4 = param_2 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar4 = param_2;
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 == (long *)0x0) {
      lVar5 = 0;
    }
    else {
      lVar5 = 0;
      if (param_1 != (long *)0x0) {
        plVar1 = plVar4 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (((*(long *)(*(long *)(*param_1 + 0x180) + 0xb8) == 0) ||
            (lVar5 = *(long *)(*(long *)(*(long *)(*param_1 + 0x180) + 0xa8) + 0x28), lVar5 == 0))
           || (lVar5 = *(long *)(lVar5 + 0x108), lVar5 == 0)) {
          lVar5 = 0;
        }
        else {
          lVar6 = *(long *)(lVar5 + 0xa50);
          lVar5 = 0;
          if (lVar6 != 0) {
            lVar5 = lVar6 + 0x18;
          }
        }
        do {
          lVar6 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
      }
      plVar1 = plVar4 + 1;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    __ZNSt3__119__shared_weak_count14__release_weakEv(param_2);
  }
  return lVar5;
}



/* Entry: 10adb4744; end: 10adb47a3;  */

void FUN_10adb4744(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))
              (lVar1,*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18),param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10adb47a4; end: 10adb491b; -[LSASerializationComponent addListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adb47a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_1127844e4;
  lVar1 = *(long *)(param_1 + lVar4);
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126de198;
    _objc_opt_new();
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar2;
    _objc_release(uVar3);
    _objc_initWeak(auStack_48,param_1);
    lVar1 = param_1;
    func_0x00010c0f98a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126db570;
    func_0x00010c15e7e0(PTR_PTR_1126db570);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c0f9140(lVar1);
    _objc_release(puVar2);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    lVar1 = *(long *)(param_1 + lVar4);
  }
  func_0x00010bef9980(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10adb491c; end: 10adb4a63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adb491c(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined1 auStack_90 [8];
  long *plStack_88;
  long lStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined1 auStack_68 [48];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bf52380(&plStack_88,lVar1);
    plVar2 = plStack_88;
    FUN_10adb4628(plStack_88,lStack_80);
    if (lStack_80 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (plVar2 != (long *)0x0) {
      _objc_copyWeak(auStack_90,param_1 + 0x20);
      pcStack_78 = FUN_10adb4adc;
      ppuStack_70 = &PTR_FUN_110c74210;
      _objc_moveWeak(auStack_68,auStack_90);
      (**(code **)(*plVar2 + 8))(plVar2,&pcStack_78);
      (*(code *)*ppuStack_70)(&ppuStack_70);
      _objc_destroyWeak(auStack_90);
    }
  }
  lVar3 = lVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(&ppuStack_70);
  _objc_destroyWeak(auStack_90);
  _objc_release(lVar1);
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar3 + _DAT_1127844e4),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 10adb4a64; end: 10adb4a73; -[LSASerializationComponent removeListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adb4a64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127844e4),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 10adb4a74; end: 10adb4ac7; -[LSASerializationComponent clearResources] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adb4a74(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127844e4);
  *(undefined8 *)(param_1 + _DAT_1127844e4) = 0;
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_112701408;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_clearResources_1125ac968);
  return;
}



/* Entry: 10adb4ac8; end: 10adb4adb; -[LSASerializationComponent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adb4ac8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127844e4,0);
  return;
}



/* Entry: 10adb4adc; end: 10adb4d9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adb4adc(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long *plStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long *plStack_60;
  long *plStack_50;
  long *plStack_48;
  
  param_2 = param_2 + 0x10;
  _objc_loadWeakRetained();
  if (param_2 == 0) goto LAB_10adb4c9c;
  func_0x00010bf52380(&plStack_90,param_2);
  plVar4 = plStack_88;
  if (plStack_88 == (long *)0x0) {
    plStack_50 = (long *)0x0;
    plStack_48 = (long *)0x0;
LAB_10adb4bb0:
    func_0x000107c31940(&uStack_80,0);
  }
  else {
    plVar5 = plStack_88 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plStack_50 = (long *)0x0;
    plVar5 = plStack_88;
    __ZNSt3__119__shared_weak_count4lockEv();
    plStack_48 = plVar5;
    if ((plVar5 == (long *)0x0) || (plStack_50 = plStack_90, plStack_90 == (long *)0x0))
    goto LAB_10adb4bb0;
    plStack_60 = plStack_90;
    plVar1 = plVar5 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((*(long *)(*(long *)(*plStack_90 + 0x180) + 0xb8) == 0) ||
       (lVar8 = *(long *)(*(long *)(*(long *)(*plStack_90 + 0x180) + 0xa8) + 0x28), lVar8 == 0)) {
      func_0x000107c31940(&uStack_80,"");
    }
    else {
      lVar8 = *(long *)(lVar8 + 0xf8);
      if (*(char *)(lVar8 + 0x21f) < '\0') {
        func_0x000107c3192c(&uStack_80,*(undefined8 *)(lVar8 + 0x208),*(undefined8 *)(lVar8 + 0x210)
                           );
      }
      else {
        uStack_78 = *(undefined8 *)(lVar8 + 0x210);
        uStack_80 = *(undefined8 *)(lVar8 + 0x208);
        lStack_70 = *(long *)(lVar8 + 0x218);
      }
    }
    do {
      lVar8 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  plVar5 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar8 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
  if (plStack_88 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  uVar9 = *(undefined8 *)(param_2 + _DAT_1127844e4);
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15e7c0(uVar9);
  _objc_release(puVar7);
  _objc_release(puVar6);
  if (lStack_70 < 0) {
    __ZdlPv(uStack_80);
  }
LAB_10adb4c9c:
  _objc_release(param_2);
  return;
}


