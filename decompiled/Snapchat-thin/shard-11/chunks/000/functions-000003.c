/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10800c348; end: 10800c4df; -[SCCloudSyncTriggerUserContext initWithSource:action:startTime:parentContext:savingEventUuid:contextMenuSource:captureSessionId:] */

undefined1 *
FUN_10800c348(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126fc1d0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10800c4e0; end: 10800c503; -[SCCloudSyncTriggerUserContext copyWithZone:] */

undefined8 FUN_10800c4e0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10800c504; end: 10800c67b; -[SCCloudSyncTriggerUserContext initWithCoder:] */

undefined1 * FUN_10800c504(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fc1d0;
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



/* Entry: 10800c67c; end: 10800c73f; -[SCCloudSyncTriggerUserContext encodeWithCoder:] */

void FUN_10800c67c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110dae8d8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110daf5b8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110e4f798);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110ecf0f8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110ecf118);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110ecf138);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                      &PTR____CFConstantStringClassReference_110ecf158);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10800c740; end: 10800c747; -[SCCloudSyncTriggerUserContext preferFasterCoding] */

undefined8 FUN_10800c740(void)

{
  return 1;
}



/* Entry: 10800c748; end: 10800c7d3; -[SCCloudSyncTriggerUserContext encodeWithFasterCoder:] */

void FUN_10800c748(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010bf93000(param_3,param_2,uVar1);
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x38));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x30));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x20));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x28));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 8));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10800c7d4; end: 10800c8e7; -[SCCloudSyncTriggerUserContext decodeWithFasterDecoder:] */

void FUN_10800c7d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10800c8e8; end: 10800ca3f; -[SCCloudSyncTriggerUserContext setObject:forUInt64Key:] */

void FUN_10800c8e8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (param_4 < 0xc2977e750b5fb8) {
    if (param_4 == 0x44a970b0b32ba1) {
      lVar2 = 0x10;
    }
    else if (param_4 == 0x566069c7404278) {
      lVar2 = 0x20;
    }
    else {
      if (param_4 != 0x877f0cfa91085b) goto LAB_10800ca2c;
      lVar2 = 0x28;
    }
  }
  else if (param_4 < 0xc83778638ccd70) {
    if (param_4 == 0xc2977e750b5fb8) {
      lVar2 = 0x18;
    }
    else {
      if (param_4 != 0xc5c6abe5f49e00) goto LAB_10800ca2c;
      lVar2 = 0x38;
    }
  }
  else if (param_4 == 0xc83778638ccd70) {
    lVar2 = 0x30;
  }
  else {
    if (param_4 != 0xe39416ced8360d) goto LAB_10800ca2c;
    lVar2 = 8;
  }
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  _objc_release(uVar1);
LAB_10800ca2c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10800ca40; end: 10800ca53; +[SCCloudSyncTriggerUserContext fasterCodingVersion] */

undefined8 FUN_10800ca40(void)

{
  return 0x914b2eeed80cea9b;
}



/* Entry: 10800ca54; end: 10800ca5f; +[SCCloudSyncTriggerUserContext fasterCodingKeys] */

undefined8 FUN_10800ca54(void)

{
  return 0x11324fe90;
}



/* Entry: 10800ca60; end: 10800ca7b; -[SCCloudSyncTriggerUserContext isEqual:] */

undefined8 * FUN_10800ca60(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  char *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  char *pcVar6;
  long lVar7;
  undefined8 *puVar8;
  
  plVar4 = (long *)0x113728b60;
  if (param_1 == param_3) {
    return (undefined8 *)0x1;
  }
  lVar3 = 7;
  lVar5 = 7;
  _objc_opt_class();
  puVar2 = param_3;
  func_0x00010c077980();
  if ((int)puVar2 != 0) {
    if ((bRam0000000113728b58 & 1) == 0) {
      puVar2 = param_1;
      _objc_opt_class();
      _class_copyIvarList();
      lVar7 = 0;
      puVar8 = puVar2;
      do {
        pcVar6 = (char *)*puVar8;
        pcVar1 = pcVar6;
        _ivar_getTypeEncoding();
        if (*pcVar1 == '@') {
          _ivar_getOffset();
          *(char **)(lVar7 * 8 + 0x113728b60) = pcVar6;
          lVar7 = lVar7 + 1;
        }
        lVar5 = lVar5 + -1;
        puVar8 = puVar8 + 1;
      } while (lVar5 != 0);
      _free(puVar2);
      DataMemoryBarrier(2,3);
      bRam0000000113728b58 = 1;
    }
    do {
      puVar2 = *(undefined8 **)((long)param_1 + *plVar4);
      if ((puVar2 != *(undefined8 **)((long)param_3 + *plVar4)) &&
         (func_0x00010c071ae0(), (int)puVar2 == 0)) {
        return puVar2;
      }
      lVar3 = lVar3 + -1;
      plVar4 = plVar4 + 1;
    } while (lVar3 != 0);
    puVar2 = (undefined8 *)0x1;
  }
  return puVar2;
}



/* Entry: 10800ca7c; end: 10800ca8f; -[SCCloudSyncTriggerUserContext hash] */

ulong FUN_10800ca7c(undefined8 *param_1)

{
  undefined8 *puVar1;
  char *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  char *pcVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  
  plVar5 = (long *)0x113728b60;
  if ((bRam0000000113728b58 & 1) == 0) {
    puVar1 = param_1;
    _objc_opt_class();
    _class_copyIvarList();
    lVar7 = 0;
    lVar9 = 7;
    puVar8 = puVar1;
    do {
      pcVar6 = (char *)*puVar8;
      pcVar2 = pcVar6;
      _ivar_getTypeEncoding();
      if (*pcVar2 == '@') {
        _ivar_getOffset();
        *(char **)(lVar7 * 8 + 0x113728b60) = pcVar6;
        lVar7 = lVar7 + 1;
      }
      lVar9 = lVar9 + -1;
      puVar8 = puVar8 + 1;
    } while (lVar9 != 0);
    _free(puVar1);
    DataMemoryBarrier(2,3);
    bRam0000000113728b58 = 1;
  }
  uVar3 = *(ulong *)((long)param_1 + lRam0000000113728b60);
  func_0x00010bfde980(uVar3);
  lVar7 = 6;
  do {
    plVar5 = plVar5 + 1;
    uVar4 = *(ulong *)((long)param_1 + *plVar5);
    func_0x00010bfde980(uVar4);
    uVar4 = uVar4 | uVar3 << 0x20;
    uVar3 = ~uVar4 + uVar4 * 0x40000;
    uVar3 = (uVar3 ^ uVar3 >> 0x1f) * 0x15;
    uVar3 = (uVar3 ^ uVar3 >> 0xb) * 0x41;
    uVar3 = uVar3 ^ uVar3 >> 0x16;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  return uVar3;
}



/* Entry: 10800ca90; end: 10800ca97; -[SCCloudSyncTriggerUserContext source] */

undefined8 FUN_10800ca90(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10800ca98; end: 10800ca9f; -[SCCloudSyncTriggerUserContext action] */

undefined8 FUN_10800ca98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10800caa0; end: 10800caa7; -[SCCloudSyncTriggerUserContext startTime] */

undefined8 FUN_10800caa0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10800caa8; end: 10800caaf; -[SCCloudSyncTriggerUserContext parentContext] */

undefined8 FUN_10800caa8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10800cab0; end: 10800cab7; -[SCCloudSyncTriggerUserContext savingEventUuid] */

undefined8 FUN_10800cab0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10800cab8; end: 10800cabf; -[SCCloudSyncTriggerUserContext contextMenuSource] */

undefined8 FUN_10800cab8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10800cac0; end: 10800cac7; -[SCCloudSyncTriggerUserContext captureSessionId] */

undefined8 FUN_10800cac0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10800cac8; end: 10800cb33; -[SCCloudSyncTriggerUserContext .cxx_destruct] */

void FUN_10800cac8(long param_1)

{
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



/* Entry: 10800cb34; end: 10800ccd3; +[SCCloudSyncTriggerUserContextBuilder withCloudSyncTriggerUserContext:] */

void FUN_10800cb34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126d8dc8;
  _objc_retain(param_3);
  _objc_alloc_init();
  uVar2 = param_3;
  func_0x00010c247520();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 8);
  *(undefined8 *)(puVar1 + 8) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010beedca0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 0x10);
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c250f20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 0x18);
  *(undefined8 *)(puVar1 + 0x18) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c0f3ba0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 0x20);
  *(undefined8 *)(puVar1 + 0x20) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c14bf80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 0x28);
  *(undefined8 *)(puVar1 + 0x28) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf4eae0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 0x30);
  *(undefined8 *)(puVar1 + 0x30) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf31200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 0x38);
  *(undefined8 *)(puVar1 + 0x38) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10800ccd4; end: 10800cd1b; -[SCCloudSyncTriggerUserContextBuilder build] */

void FUN_10800ccd4(void)

{
  _objc_alloc(PTR_PTR_1126b2220);
  func_0x00010c04a560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10800cd1c; end: 10800cd53; -[SCCloudSyncTriggerUserContextBuilder setSource:] */

long FUN_10800cd1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10800cd54; end: 10800cd8b; -[SCCloudSyncTriggerUserContextBuilder setAction:] */

long FUN_10800cd54(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10800cd8c; end: 10800cdc3; -[SCCloudSyncTriggerUserContextBuilder setStartTime:] */

long FUN_10800cd8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10800cdc4; end: 10800cdfb; -[SCCloudSyncTriggerUserContextBuilder setParentContext:] */

long FUN_10800cdc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10800cdfc; end: 10800ce33; -[SCCloudSyncTriggerUserContextBuilder setSavingEventUuid:] */

long FUN_10800cdfc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10800ce34; end: 10800ce6b; -[SCCloudSyncTriggerUserContextBuilder setContextMenuSource:] */

long FUN_10800ce34(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10800ce6c; end: 10800cea3; -[SCCloudSyncTriggerUserContextBuilder setCaptureSessionId:] */

long FUN_10800ce6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10800cea4; end: 10800cf0f; -[SCCloudSyncTriggerUserContextBuilder .cxx_destruct] */

void FUN_10800cea4(long param_1)

{
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



/* Entry: 10800cf10; end: 10800cf97; -[SCCloudSyncSnapshotDeserializationOutput initWithSnapshot:type:] */

undefined1 *
FUN_10800cf10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126fc1d8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10800cf98; end: 10800cfbb; -[SCCloudSyncSnapshotDeserializationOutput copyWithZone:] */

undefined8 FUN_10800cf98(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10800cfbc; end: 10800d027; -[SCCloudSyncSnapshotDeserializationOutput hash] */

undefined8 * FUN_10800cfbc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + 0x10);
  puVar2 = &uStack_38;
  uStack_38 = uVar1;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10800d0ac;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (puVar2[2] != param_3[2])) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_10800d0ac;
    }
    puVar4 = (undefined8 *)puVar2[1];
    if (puVar4 != (undefined8 *)param_3[1]) {
      func_0x00010c071ae0();
      goto LAB_10800d0ac;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_10800d0ac:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10800d028; end: 10800d0c7; -[SCCloudSyncSnapshotDeserializationOutput isEqual:] */

long FUN_10800d028(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10800d0ac;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) {
      lVar3 = 0;
      goto LAB_10800d0ac;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10800d0ac;
    }
  }
  lVar3 = 1;
LAB_10800d0ac:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10800d0c8; end: 10800d0cf; -[SCCloudSyncSnapshotDeserializationOutput snapshot] */

undefined8 FUN_10800d0c8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10800d0d0; end: 10800d0d7; -[SCCloudSyncSnapshotDeserializationOutput type] */

undefined8 FUN_10800d0d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10800d0d8; end: 10800d0e3; -[SCCloudSyncSnapshotDeserializationOutput .cxx_destruct] */

void FUN_10800d0d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10800d0e4; end: 10800d1bf; -[SCMemoriesCloudFSFileDownloadEntityStreamingBytesReuser initWithCircumstanceEngine:contentDelivery:encryptedContentManager:cloudFS:] */

undefined1 *
FUN_10800d0e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126fc1e0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_6);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10800d1c0; end: 10800d437; -[SCMemoriesCloudFSFileDownloadEntityStreamingBytesReuser attemptToStreamIfAvailableForSnap:completionPerformer:completion:] */

void FUN_10800d1c0(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined **ppuStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined **ppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010b5fa088();
  puVar3 = PTR_PTR_1126ba150;
  if ((uVar1 < 0xd) && ((1L << (uVar1 & 0x3f) & 0x1566U) != 0)) {
    uVar1 = param_3;
    func_0x00010b5fb6c8(param_3);
    lVar2 = param_1 + 8;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bf88960(puVar3,param_2,uVar1,lVar2);
    _objc_release(lVar2);
    if ((int)puVar3 != 0) {
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc2000000;
      pcStack_88 = FUN_10800d438;
      puStack_80 = &UNK_110849530;
      uStack_78 = param_5;
      _objc_retain(param_5);
      func_0x00010c0f88c0(param_4,param_2,&puStack_98);
      uVar6 = uStack_78;
      goto LAB_10800d3f8;
    }
  }
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_10800d448;
  puStack_b0 = &UNK_1108846a8;
  _objc_retain(param_4);
  uStack_a8 = param_4;
  uStack_a0 = param_5;
  _objc_retain(param_5);
  ppuVar4 = &puStack_c8;
  _objc_retainBlock();
  puVar5 = PTR_PTR_1126d2b30;
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c25c740(puVar5,param_2,param_3,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  puStack_108 = puVar3;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_10800d4f8;
  puStack_f0 = &UNK_110a17018;
  lStack_e8 = param_1;
  _objc_retain(param_3);
  uStack_e0 = param_3;
  _objc_retain(param_4);
  uStack_d8 = param_4;
  _objc_retain(ppuVar4);
  puStack_130 = puVar3;
  uStack_128 = 0xc2000000;
  pcStack_120 = FUN_10800d71c;
  puStack_118 = &UNK_110859a38;
  ppuStack_110 = ppuVar4;
  ppuStack_d0 = ppuVar4;
  _objc_retain(ppuVar4);
  func_0x00010c0c0800(puVar5,param_2,&puStack_108,&puStack_130);
  _objc_release(ppuStack_110);
  _objc_release(ppuStack_d0);
  _objc_release(uStack_d8);
  _objc_release(uStack_e0);
  _objc_release(ppuVar4);
  _objc_release(puVar5);
  _objc_release(uStack_a0);
  uVar6 = uStack_a8;
LAB_10800d3f8:
  _objc_release(uVar6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10800d438; end: 10800d447;  */

void FUN_10800d438(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010800d444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10800d448; end: 10800d4e7;  */

void FUN_10800d448(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  _objc_retain(param_2);
  func_0x00010c0f88c0(uVar1);
  _objc_release(param_2);
  _objc_release(uVar2);
  _objc_release(param_2);
  return;
}



/* Entry: 10800d4e8; end: 10800d4f7;  */

void FUN_10800d4e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010800d4f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10800d4f8; end: 10800d687;  */

void FUN_10800d4f8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  _objc_initWeak(auStack_58,*(undefined8 *)(param_1 + 0x20));
  lVar1 = *(long *)(param_1 + 0x20) + 0x18;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar6);
  _objc_retain(param_2);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  func_0x00010c135a80(lVar2);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(uVar4);
  _objc_release(param_2);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 10800d688; end: 10800d71b;  */

void FUN_10800d688(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (((param_2 == 0) || (param_3 == 0)) || (lVar1 == 0)) {
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),0);
  }
  else {
    func_0x00010bec52a0(lVar1);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10800d71c; end: 10800d72b;  */

void FUN_10800d71c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010800d728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10800d72c; end: 10800d9f7; -[SCMemoriesCloudFSFileDownloadEntityStreamingBytesReuser _streamAndEncryptAndMoveFilesWithKey:IV:snap:intrinsicContentKey:completionQueue:completion:] */

void FUN_10800d72c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_128 [8];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = PTR_PTR_1126b1060;
  _objc_alloc();
  puVar2 = PTR_PTR_1126b19f8;
  func_0x00010c0c7a40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c032f60();
  puStack_d8 = puVar1;
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar1 = PTR_PTR_1126b1378;
  func_0x00010c0c46a0(param_6);
  func_0x00010c291580(puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + 0x10;
  _objc_loadWeakRetained();
  _objc_initWeak(auStack_78,param_1);
  lVar5 = lVar4;
  func_0x00010c269d40(lVar4);
  _objc_retainAutoreleasedReturnValue();
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_10800d9f8;
  puStack_b8 = &UNK_110a17078;
  lStack_b0 = lVar4;
  _objc_retain(param_7);
  puVar8 = auStack_78;
  uStack_a8 = param_7;
  _objc_copyWeak(auStack_80,puVar8);
  _objc_retain(param_8);
  uStack_88 = param_8;
  _objc_retain(param_3);
  lStack_a0 = param_3;
  _objc_retain(param_4);
  uStack_98 = param_4;
  _objc_retain(param_5);
  uStack_90 = param_5;
  func_0x00010c13e5c0(lVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(lStack_a0);
  _objc_release(uStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(uStack_a8);
  _objc_destroyWeak(auStack_78);
  _objc_release(lVar4);
  _objc_release(puVar1);
  _objc_release(puStack_d8);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  lVar4 = param_3;
  __Unwind_Resume();
  pcStack_e8 = FUN_10800d9f8;
  uStack_120 = param_8;
  uStack_118 = param_7;
  uStack_110 = param_6;
  uStack_108 = param_5;
  uStack_100 = param_4;
  lStack_f8 = param_3;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar8);
  uVar6 = *(undefined8 *)(lVar4 + 0x20);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar4 + 0x28);
  func_0x00010c11de00(uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_128,lVar4 + 0x50);
  uVar10 = *(undefined8 *)(lVar4 + 0x48);
  _objc_retain(uVar10);
  uVar11 = *(undefined8 *)(lVar4 + 0x30);
  _objc_retain(uVar11);
  uVar12 = *(undefined8 *)(lVar4 + 0x38);
  _objc_retain(uVar12);
  uVar9 = *(undefined8 *)(lVar4 + 0x40);
  _objc_retain(uVar9);
  func_0x00010c13e420(uVar6);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar9);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_destroyWeak(auStack_128);
  _objc_release(puVar8);
  return;
}



/* Entry: 10800d9f8; end: 10800db43;  */

void FUN_10800d9f8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,param_1 + 0x50);
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar6);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar3);
  func_0x00010c13e420(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 10800db44; end: 10800dbf3;  */

void FUN_10800db44(long param_1,long param_2,int param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  lVar3 = *(long *)(param_1 + 0x38);
  if (((param_3 == 0) || (param_2 == 0)) || (lVar1 == 0)) {
    (**(code **)(lVar3 + 0x10))(lVar3,0);
  }
  else {
    lVar2 = lVar1;
    func_0x00010be09440(lVar1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar3 + 0x10))(lVar3,lVar2);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10800dbf4; end: 10800de9b; -[SCMemoriesCloudFSFileDownloadEntityStreamingBytesReuser _encryptAndMoveFilesWithKey:IV:snap:mediaData:] */

void FUN_10800dbf4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar7 = param_1 + 0x18;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar8;
  func_0x00010c156cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar8);
  _objc_release(lVar7);
  uVar9 = param_1 + 0x20;
  _objc_loadWeakRetained();
  uVar2 = uVar9;
  func_0x00010c13a8c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  uVar9 = uVar2;
  func_0x00010c06cde0();
  uVar6 = uVar2;
  if ((uVar9 & 1) != 0) {
    uVar9 = 0;
    goto LAB_10800de68;
  }
  uVar3 = param_5;
  func_0x00010bfd9dc0();
  if ((int)uVar3 == 0) {
    lVar7 = 0;
  }
  else {
    lVar8 = param_1 + 0x20;
    _objc_loadWeakRetained();
    lVar7 = lVar8;
    func_0x00010c13ada0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar8);
  }
  lVar8 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar8);
  lVar4 = lVar8;
  func_0x00010c27a620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  lVar8 = lVar4;
  func_0x00010bfad160(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010c14e060(lVar1,param_2,lVar8,1);
  _objc_release(lVar8);
  uVar3 = param_5;
  func_0x00010bfd9dc0();
  if ((int)uVar3 == 0) {
LAB_10800ddb8:
    lVar8 = 0;
    if ((int)lVar5 == 0) {
LAB_10800ddb0:
      uVar9 = 0;
    }
    else {
LAB_10800ddc0:
      lVar5 = param_1 + 0x20;
      _objc_loadWeakRetained(lVar5);
      func_0x00010befb560();
      _objc_release(lVar5);
      uVar9 = param_1 + 0x20;
      _objc_loadWeakRetained();
      uVar6 = uVar9;
      func_0x00010c13a8c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      _objc_release(uVar9);
      uVar9 = uVar6;
      func_0x00010c06cde0();
      if ((int)uVar9 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = uVar6;
        func_0x00010c242d40(uVar6);
        _objc_retainAutoreleasedReturnValue();
      }
    }
  }
  else {
    if (lVar7 != 0) {
      lVar8 = lVar7;
      func_0x00010c06cde0();
      if ((int)lVar8 == 0) goto LAB_10800ddb8;
      lVar8 = lVar7;
      func_0x00010bfaca60(lVar7,param_2,&PTR____CFConstantStringClassReference_110f72718);
      _objc_retainAutoreleasedReturnValue();
      if ((int)lVar5 != 0) goto LAB_10800ddc0;
      goto LAB_10800ddb0;
    }
    uVar9 = 0;
    lVar8 = 0;
  }
  _objc_release(lVar8);
  _objc_release(lVar4);
  _objc_release(lVar7);
LAB_10800de68:
  _objc_release(uVar6);
  _objc_release(lVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar9);
  return;
}



/* Entry: 10800de9c; end: 10800ded3; -[SCMemoriesCloudFSFileDownloadEntityStreamingBytesReuser .cxx_destruct] */

void FUN_10800de9c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10800ded4; end: 10800dfb7; -[SCMemoriesCloudFSFileDownloadEntryAssetEntity initWithEntryId:assetId:snapRepresentation:assetType:] */

undefined1 *
FUN_10800ded4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126fc1e8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    *(undefined8 *)((long)puVar1 + 0x28) = 0;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10800dfb8; end: 10800dfbf; -[SCMemoriesCloudFSFileDownloadEntryAssetEntity snapDocKeyForEntity] */

void FUN_10800dfb8(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b25b8;
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain();
  _objc_alloc(puVar2);
  func_0x00010c011280();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10800dfc0; end: 10800dfc7; -[SCMemoriesCloudFSFileDownloadEntryAssetEntity isDirectDownloadAvailable] */

undefined8 FUN_10800dfc0(void)

{
  return 1;
}



/* Entry: 10800dfc8; end: 10800e07f; -[SCMemoriesCloudFSFileDownloadEntryAssetEntity snapDocForLocalOpsWithMediaReferenceFactory:snapDocKey:] */

void FUN_10800dfc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_38;
  
  puVar2 = PTR_PTR_1126b25c8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init();
  puStack_38 = puVar2;
  func_0x00010bebc9c0(param_1,param_2,param_3,param_4,&puStack_38,0,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  puVar1 = puStack_38;
  _objc_retain(puStack_38);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10800e080; end: 10800e1b7; -[SCMemoriesCloudFSFileDownloadEntryAssetEntity prepareDownloadInfoWithSnapInfoFetcher:memoriesGrapheneContext:completionQueue:completion:] */

void FUN_10800e080(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_6 != 0) {
    _objc_initWeak(auStack_58,param_1);
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_6);
    func_0x00010bfa5060(param_3);
    _objc_release(param_6);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10800e1b8; end: 10800e283;  */

void FUN_10800e1b8(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  long lVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar4 = *(long *)(param_1 + 0x20);
    ppuVar3 = &PTR____CFConstantStringClassReference_110ecf198;
    FUN_108019184(&PTR____CFConstantStringClassReference_110ecf198);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar4 + 0x10))(lVar4,ppuVar3);
    _objc_release(ppuVar3);
  }
  else {
    if ((param_2 == 0) && (param_3 != 0)) {
      _objc_retain(param_3);
      uVar2 = *(undefined8 *)(lVar1 + 0x28);
      *(long *)(lVar1 + 0x28) = param_3;
      _objc_release(uVar2);
    }
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10800e284; end: 10800e5df; -[SCMemoriesCloudFSFileDownloadEntryAssetEntity retrieveMediaWithSnapDocManager:mediaReferenceFactory:accessToken:mdpCommonTrigger:progressHandler:completionQueue:completion:] */

void FUN_10800e284(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,long param_9
                  )

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined *apuStack_80 [2];
  
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar3 = PTR_PTR_1126b25c8;
  if (param_9 == 0) {
    uVar10 = 0;
  }
  else {
    _objc_retain(param_6);
    _objc_retain(param_5);
    _objc_retain(param_4);
    _objc_alloc_init();
    lVar4 = param_1;
    func_0x00010c240220(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    apuStack_80[0] = puVar3;
    func_0x00010bebc9c0(param_1,param_2,param_4,lVar4,apuStack_80,1,param_5,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
    _objc_release(param_4);
    puVar2 = apuStack_80[0];
    _objc_retain(apuStack_80[0]);
    _objc_release(puVar3);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar1);
    FUN_108018d28();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126bfc90;
    puVar3 = PTR_PTR_1126b1378;
    lVar7 = lVar4;
    func_0x00010c0c46a0(lVar4);
    func_0x00010c119380(puVar8,param_2,lVar7);
    puVar9 = puVar8;
    FUN_108017f48();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = param_6;
    func_0x00010c067ec0(param_6);
    _objc_release(param_6);
    func_0x00010c291580(puVar3,param_2,puVar8,puVar9,(long)(int)uVar10);
    _objc_retainAutoreleasedReturnValue();
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_10800e5e0;
    puStack_a8 = &UNK_110a170d8;
    _objc_retain(param_8);
    uStack_a0 = param_8;
    _objc_retain(uVar1);
    uStack_98 = uVar1;
    _objc_retain(uVar6);
    uStack_90 = uVar6;
    _objc_retain(param_9);
    lStack_88 = param_9;
    uVar10 = param_3;
    func_0x00010c13eb80(param_3,param_2,lVar4,puVar2,lVar5,puVar3,&puStack_c0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar9);
    if (param_7 != 0) {
      puVar3 = puVar2;
      func_0x00010c0c5180(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_e0 = 0xc2000000;
      pcStack_d8 = FUN_10800ea24;
      puStack_d0 = &UNK_110a17108;
      _objc_retain(param_7);
      lStack_c8 = param_7;
      func_0x00010c0d0cc0(param_3,param_2,lVar4,puVar3,lVar5,&puStack_e8,
                          &PTR___NSConcreteGlobalBlock_110a17138);
      _objc_release(puVar3);
      _objc_release(lStack_c8);
    }
    _objc_release(lStack_88);
    _objc_release(uStack_90);
    _objc_release(uStack_98);
    _objc_release(uStack_a0);
    _objc_release(uVar6);
    _objc_release(uVar1);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(puVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar10);
  return;
}



/* Entry: 10800e5e0; end: 10800e6b3;  */

void FUN_10800e5e0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10800e6b4;
  puStack_58 = &UNK_1108465d0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = param_2;
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = uVar2;
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_40 = uVar3;
  _objc_retain(uVar2);
  uStack_38 = uVar2;
  _objc_retain(param_2);
  func_0x00010007380c(uVar1,&puStack_70);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(param_2);
  return;
}



/* Entry: 10800e6b4; end: 10800ea23;  */

void FUN_10800e6b4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar17 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar6);
  _objc_retain(uVar1);
  _objc_retain(uVar17);
  uVar2 = uVar6;
  func_0x00010bfc4120();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfc79a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0d7ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13b780();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = uVar6;
  func_0x00010bfc4120();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfc79a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0d7ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f66a0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = uVar6;
  func_0x00010bfc4120(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfc79a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0d7ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c135340();
  uVar5 = uVar6;
  func_0x00010bfc4120(uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  uVar6 = uVar5;
  func_0x00010bfc79a0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c0d7ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1367a0();
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar8 = PTR_PTR_1126d8dd0;
  _objc_alloc();
  FUN_1080191d4(uVar17);
  uVar6 = uVar17;
  func_0x000108019250();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar17);
  func_0x00010c047a60();
  _objc_release(uVar1);
  _objc_release(uVar6);
  lVar9 = *(long *)(param_1 + 0x20);
  func_0x00010bfc4120();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar9;
  func_0x00010bfcaaa0();
  _objc_release(lVar9);
  if (lVar16 == 0) {
    lVar16 = *(long *)(param_1 + 0x38);
    puVar13 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    (**(code **)(lVar16 + 0x10))(lVar16,puVar13,0,puVar8);
  }
  else {
    puVar10 = *(undefined **)(param_1 + 0x20);
    func_0x00010bfc4120();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar10;
    func_0x00010bfc79a0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar14;
    func_0x00010bf987e0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010bf98a20();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    FUN_108019184();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar14);
    _objc_release(puVar10);
    puVar14 = (undefined *)0x0;
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),0,puVar13,puVar8);
  }
  _objc_release(puVar13);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return;
  }
  ___stack_chk_fail();
  lVar16 = *(long *)(puVar8 + 0x20);
  func_0x00010bfb67a0(puVar14);
                    /* WARNING: Could not recover jumptable at 0x00010800ea4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar16 + 0x10))(lVar16);
  return;
}



/* Entry: 10800ea24; end: 10800ea4f;  */

void FUN_10800ea24(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bfb67a0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010800ea4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(lVar1);
  return;
}



/* Entry: 10800ea50; end: 10800ea53;  */

void FUN_10800ea50(void)

{
  return;
}



/* Entry: 10800ea54; end: 10800ea63; -[SCMemoriesCloudFSFileDownloadEntryAssetEntity continueToStreamIfAvailableCompletionPerformer:completion:] */

void FUN_10800ea54(void)

{
  long in_x3;
  
                    /* WARNING: Could not recover jumptable at 0x00010800ea60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x3 + 0x10))(in_x3,0);
  return;
}



/* Entry: 10800ea64; end: 10800eba7; -[SCMemoriesCloudFSFileDownloadEntryAssetEntity _snapDocForSingleMediaWithMediaReferenceFactory:snapDocKey:mediaMetadata:shouldAddNetworkConfig:accessToken:hardcodeAPIGatewayHost:] */

void FUN_10800ea64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_108018d28(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  FUN_1080191a0(uVar3,*(undefined8 *)(param_1 + 0x10));
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  FUN_108019e88();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  if (param_6 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x0001080174b0(uVar3,uVar1,*(undefined8 *)(param_1 + 0x28),param_7,param_8,0,0);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar4 = param_3;
  FUN_108017710(param_3,param_4,uVar2,param_5,uVar3,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10800eba8; end: 10800ebb3; -[SCMemoriesCloudFSFileDownloadEntryAssetEntity delayNetworkDownloadEnabled] */

byte FUN_10800eba8(long param_1)

{
  return *(byte *)(param_1 + 0x30) & 1;
}



/* Entry: 10800ebb4; end: 10800ebbb; -[SCMemoriesCloudFSFileDownloadEntryAssetEntity setDelayNetworkDownloadEnabled:] */

void FUN_10800ebb4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 10800ebbc; end: 10800ebc7; -[SCMemoriesCloudFSFileDownloadEntryAssetEntity allMediaLocallyAvailable] */

byte FUN_10800ebbc(long param_1)

{
  return *(byte *)(param_1 + 0x31) & 1;
}



/* Entry: 10800ebc8; end: 10800ebcf; -[SCMemoriesCloudFSFileDownloadEntryAssetEntity setAllMediaLocallyAvailable:] */

void FUN_10800ebc8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x31) = param_3;
  return;
}



/* Entry: 10800ebd0; end: 10800ec17; -[SCMemoriesCloudFSFileDownloadEntryAssetEntity .cxx_destruct] */

void FUN_10800ebd0(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10800ec18; end: 10800ed43; -[SCMemoriesCloudFSFileDownloadPlaybackEntity initWithSnap:snapRepresentations:enableContentReuse:circumstanceEngine:streamingBytesReuser:decryptionContextProvider:] */

undefined1 *
FUN_10800ec18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126fc1f0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x18) = param_5;
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_6);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10800ed44; end: 10800ed8f; -[SCMemoriesCloudFSFileDownloadPlaybackEntity snapDocKeyForEntity] */

void FUN_10800ed44(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c241220(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_108017660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10800ed90; end: 10800ed97; -[SCMemoriesCloudFSFileDownloadPlaybackEntity snapDocForLocalOpsWithMediaReferenceFactory:snapDocKey:] */

void FUN_10800ed90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bebc990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__snapDocForPlaybackWithMediaRefe_11258cc08,param_3,param_4,0);
  return;
}



/* Entry: 10800ed98; end: 10800eee7; -[SCMemoriesCloudFSFileDownloadPlaybackEntity prepareDownloadInfoWithSnapInfoFetcher:memoriesGrapheneContext:completionQueue:completion:] */

void FUN_10800ed98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_6 != 0) {
    _objc_initWeak(auStack_58,param_1);
    func_0x00010beb53a0(param_1);
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_6);
    func_0x00010bfaa340(param_3);
    _objc_release(param_6);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10800eee8; end: 10800ef73;  */

void FUN_10800eee8(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if ((param_2 == 0) && (param_3 != 0)) {
      _objc_retain(param_3);
      uVar2 = *(undefined8 *)(lVar1 + 8);
      *(long *)(lVar1 + 8) = param_3;
      _objc_release(uVar2);
    }
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10800ef74; end: 10800f3cf; -[SCMemoriesCloudFSFileDownloadPlaybackEntity retrieveMediaWithSnapDocManager:mediaReferenceFactory:accessToken:mdpCommonTrigger:progressHandler:completionQueue:completion:] */

void FUN_10800ef74(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,long param_9
                  )

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  if (param_9 == 0) {
    uVar4 = 0;
    goto LAB_10800f370;
  }
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010b5fa088();
  puVar3 = PTR_PTR_1126ba150;
  if ((uVar1 < 0xd) && ((1L << (uVar1 & 0x3f) & 0x1566U) != 0)) {
    func_0x00010b5fb6c8(*(undefined8 *)(param_1 + 8));
    puVar2 = param_1 + 0x20;
    _objc_loadWeakRetained(puVar2);
    func_0x00010bf88960();
    _objc_release(puVar2);
    if ((int)puVar3 == 0) goto LAB_10800f144;
    puVar3 = PTR_PTR_1126d8dd0;
    _objc_alloc();
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c241220(uVar4);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = &PTR____CFConstantStringClassReference_110f726f8;
    func_0x000108018fdc(&PTR____CFConstantStringClassReference_110f726f8,
                        *(undefined8 *)(param_1 + 8));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c047a60();
    _objc_release(ppuVar5);
    _objc_release(uVar4);
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_10800f3d0;
    puStack_90 = &UNK_11084aaa8;
    _objc_retain(param_9);
    lStack_80 = param_9;
    puStack_88 = puVar3;
    _objc_retain(puVar3);
    func_0x00010007380c(param_8,&puStack_a8);
    _objc_release(puStack_88);
    uVar4 = 0;
    lVar6 = lStack_80;
  }
  else {
LAB_10800f144:
    puVar3 = param_1;
    func_0x00010c240220(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = *(long *)(param_1 + 8);
    if ((param_1[0x18] & 1) == 0) {
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010b5f9b9c();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar7 = PTR_PTR_1126d8dd8;
    _objc_alloc();
    func_0x00010c047000();
    puVar8 = param_1;
    func_0x00010bebc980();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + 8);
    _objc_retain(uVar10);
    puVar9 = PTR_PTR_1126bfc90;
    puVar2 = PTR_PTR_1126b1378;
    func_0x00010c0c46a0(puVar3);
    func_0x00010c119380(puVar9);
    FUN_108017f48();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067ec0(param_6);
    func_0x00010c291580(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_8);
    _objc_retain(puVar8);
    _objc_retain(uVar10);
    _objc_retain(param_9);
    uVar4 = param_3;
    func_0x00010c13edc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar9);
    if (param_7 != 0) {
      _objc_retain(param_7);
      func_0x00010c0d0ce0(param_3);
      _objc_release(param_7);
    }
    _objc_release(param_9);
    _objc_release(uVar10);
    _objc_release(puVar8);
    _objc_release(param_8);
    _objc_release(uVar10);
    _objc_release(puVar8);
    _objc_release(puVar7);
  }
  _objc_release(lVar6);
  _objc_release(puVar3);
LAB_10800f370:
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10800f3d0; end: 10800f4ff;  */

void FUN_10800f3d0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  puVar1 = PTR_PTR_1126ba158;
  func_0x00010bf3efe0(PTR_PTR_1126ba158);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,0,puVar1,*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10800f500; end: 10800f79b;  */

void FUN_10800f500(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010801800c(uVar1,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar11);
  uVar2 = uVar1;
  func_0x00010bfc4120();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar2;
  func_0x00010bfc79a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar9;
  func_0x00010c0d7ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13b780();
  _objc_release(uVar3);
  _objc_release(uVar9);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010bfc4120();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar2;
  func_0x00010bfc79a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar9;
  func_0x00010c0d7ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f66a0();
  _objc_release(uVar3);
  _objc_release(uVar9);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010bfc4120(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar2;
  func_0x00010bfc79a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar9;
  func_0x00010c0d7ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c135340();
  uVar4 = uVar1;
  func_0x00010bfc4120(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfc79a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0d7ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1367a0();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar9);
  _objc_release(uVar2);
  puVar7 = PTR_PTR_1126d8dd0;
  _objc_alloc(PTR_PTR_1126d8dd0);
  uVar2 = uVar11;
  func_0x00010c241220(uVar11);
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = &PTR____CFConstantStringClassReference_110f726f8;
  func_0x000108018fdc(&PTR____CFConstantStringClassReference_110f726f8,uVar11);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar11);
  func_0x00010c047a60(puVar7);
  _objc_release(ppuVar8);
  _objc_release(uVar2);
  _objc_release(uVar1);
  lVar10 = *(long *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_108017cd0(uVar2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfc5240(uVar9);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar10 + 0x10))(lVar10,uVar2,uVar9,puVar7);
  _objc_release(uVar9);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 10800f79c; end: 10800f7c7;  */

void FUN_10800f79c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bfb67a0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010800f7c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(lVar1);
  return;
}



/* Entry: 10800f7c8; end: 10800f7cb;  */

void FUN_10800f7c8(void)

{
  return;
}



/* Entry: 10800f7cc; end: 10800f953; -[SCMemoriesCloudFSFileDownloadPlaybackEntity continueToStreamIfAvailableCompletionPerformer:completion:] */

void FUN_10800f7cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar1 = &puStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x10800f8b4;
  puStack_48 = &UNK_1108846a8;
  _objc_retain(param_3);
  uStack_40 = param_3;
  _objc_retain(param_4);
  uStack_38 = param_4;
  _objc_retainBlock();
  if (*(long *)(param_1 + 0x28) == 0) {
    (**(code **)((long)ppuVar1 + 0x10))(ppuVar1,0);
  }
  else {
    func_0x00010bf0dbc0();
  }
  _objc_release(ppuVar1);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10800f954; end: 10800f963;  */

void FUN_10800f954(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010800f960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10800f964; end: 10800fb47; -[SCMemoriesCloudFSFileDownloadPlaybackEntity _snapDocForPlaybackWithMediaReferenceFactory:snapDocKey:networkConfigParams:] */

void FUN_10800f964(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 8);
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    func_0x00010c241220(uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010b5f9b9c();
    _objc_retainAutoreleasedReturnValue();
  }
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_10800fb48;
  uStack_60 = 0x10800fb58;
  uStack_58 = 0;
  if (param_5 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_5;
    func_0x00010c23f220(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0c4ac0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(uVar2);
    func_0x00010c0c0800(uVar4);
    _objc_release(uVar4);
  }
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfd9dc0(uVar2);
  uVar4 = param_3;
  func_0x000108017894(param_3,param_4,uVar1,uVar2,param_5,puStack_78[5]);
  _objc_retainAutoreleasedReturnValue();
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10800fb48; end: 10800fb5f;  */

void FUN_10800fb48(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10800fb60; end: 10800fb97;  */

void FUN_10800fb60(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10800fb98; end: 10800fb9b;  */

void FUN_10800fb98(void)

{
  return;
}



/* Entry: 10800fb9c; end: 10800fca7; -[SCMemoriesCloudFSFileDownloadPlaybackEntity _shouldRemoteFetchUrls] */

byte FUN_10800fb9c(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  byte bVar7;
  long lVar8;
  long lVar9;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = *(long *)(param_1 + 0x10);
  _objc_retain(lVar6);
  lVar2 = lVar6;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar6);
      }
      uVar3 = *(ulong *)(lVar8 * 8);
      FUN_108018f48(uVar3,*(undefined8 *)(param_1 + 8));
      if ((uVar3 & 1) != 0) {
        bVar7 = 1;
        goto LAB_10800fc68;
      }
      lVar8 = lVar8 + 1;
    } while (lVar2 != lVar8);
    lVar2 = lVar6;
    func_0x00010bf52a60();
  }
  bVar7 = 0;
LAB_10800fc68:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return bVar7;
  }
  ___stack_chk_fail();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)(lVar6 + 0x10);
  _objc_retain(lVar5);
  lVar2 = lVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar2 == 0) {
      bVar7 = 1;
LAB_10800fd88:
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
        return bVar7;
      }
      ___stack_chk_fail();
      return *(byte *)(lVar5 + 0x38) & 1;
    }
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar5);
      }
      lVar4 = *(long *)(lVar9 * 8);
      func_0x0001080190b0(lVar4,*(undefined8 *)(lVar6 + 8));
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar4 == 0) {
        bVar7 = 0;
        goto LAB_10800fd88;
      }
      lVar9 = lVar9 + 1;
    } while (lVar2 != lVar9);
    lVar2 = lVar5;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 10800fca8; end: 10800fdcb; -[SCMemoriesCloudFSFileDownloadPlaybackEntity isDirectDownloadAvailable] */

byte FUN_10800fca8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  byte bVar6;
  long lVar7;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)(param_1 + 0x10);
  _objc_retain(lVar5);
  lVar2 = lVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar2 == 0) {
      bVar6 = 1;
LAB_10800fd88:
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
        return bVar6;
      }
      ___stack_chk_fail();
      return *(byte *)(lVar5 + 0x38) & 1;
    }
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar5);
      }
      lVar3 = *(long *)(lVar7 * 8);
      func_0x0001080190b0(lVar3,*(undefined8 *)(param_1 + 8));
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar3 == 0) {
        bVar6 = 0;
        goto LAB_10800fd88;
      }
      lVar7 = lVar7 + 1;
    } while (lVar2 != lVar7);
    lVar2 = lVar5;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 10800fdcc; end: 10800fdd7; -[SCMemoriesCloudFSFileDownloadPlaybackEntity delayNetworkDownloadEnabled] */

byte FUN_10800fdcc(long param_1)

{
  return *(byte *)(param_1 + 0x38) & 1;
}



/* Entry: 10800fdd8; end: 10800fddf; -[SCMemoriesCloudFSFileDownloadPlaybackEntity setDelayNetworkDownloadEnabled:] */

void FUN_10800fdd8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x38) = param_3;
  return;
}



/* Entry: 10800fde0; end: 10800fdeb; -[SCMemoriesCloudFSFileDownloadPlaybackEntity allMediaLocallyAvailable] */

byte FUN_10800fde0(long param_1)

{
  return *(byte *)(param_1 + 0x39) & 1;
}



/* Entry: 10800fdec; end: 10800fdf3; -[SCMemoriesCloudFSFileDownloadPlaybackEntity setAllMediaLocallyAvailable:] */

void FUN_10800fdec(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x39) = param_3;
  return;
}



/* Entry: 10800fdf4; end: 10800fe43; -[SCMemoriesCloudFSFileDownloadPlaybackEntity .cxx_destruct] */

void FUN_10800fdf4(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10800fe44; end: 10800feff; -[SCMemoriesCloudFSFileDownloadRequest initWithResultHandler:performer:] */

undefined1 *
FUN_10800fe44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fc1f8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar4 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar4;
    _objc_release(uVar3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_4);
    puVar2 = PTR_PTR_1126b33c0;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10800ff00; end: 10800ffcb; -[SCMemoriesCloudFSFileDownloadRequest cancel] */

void FUN_10800ff00(long param_1)

{
  long lVar1;
  
  func_0x00010bfec280(*(undefined8 *)(param_1 + 0x18));
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0f7fc0();
  _objc_release(lVar1);
  _objc_storeWeak(param_1 + 0x20,0);
  return;
}



/* Entry: 10800ffcc; end: 10801006b; -[SCMemoriesCloudFSFileDownloadRequest setAssosiatedRequest:] */

void FUN_10800ffcc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10801006c;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(lVar1,param_2,&puStack_60);
  _objc_release(lVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10801006c; end: 108010097;  */

void FUN_10801006c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(lVar1 + 0x10);
  *(undefined8 *)(lVar1 + 0x10) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 108010098; end: 1080100b7; -[SCMemoriesCloudFSFileDownloadRequest isCancelled] */

bool FUN_108010098(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c296d80(uVar1);
  return 0 < (int)uVar1;
}



/* Entry: 1080100b8; end: 1080101cf; -[SCMemoriesCloudFSFileDownloadRequest performWithStatus:error:snapRepresentationToMediaResultMap:] */

void FUN_1080100b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    _objc_retainBlock();
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = 0;
    _objc_release(uVar2);
    lVar3 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(lVar1);
    func_0x00010c0f7fc0(lVar3);
    _objc_release(lVar3);
    _objc_storeWeak(param_1 + 0x20,0);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(lVar1);
    _objc_release(lVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1080101d0; end: 1080101e3;  */

void FUN_1080101d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001080101e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1080101e4; end: 1080101fb; -[SCMemoriesCloudFSFileDownloadRequest progressReceiver] */

void FUN_1080101e4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1080101fc; end: 108010207; -[SCMemoriesCloudFSFileDownloadRequest setProgressReceiver:] */

void FUN_1080101fc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}


