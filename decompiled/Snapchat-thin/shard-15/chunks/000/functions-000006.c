/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b74f5d0; end: 10b74f5d7; -[CTPPersistedItem clientCacheTtlMinutes] */

undefined8 FUN_10b74f5d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b74f5d8; end: 10b74f5df; -[CTPPersistedItem requestId] */

undefined8 FUN_10b74f5d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b74f5e0; end: 10b74f5e7; -[CTPPersistedItem sectionName] */

undefined8 FUN_10b74f5e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b74f5e8; end: 10b74f65f; -[CTPPersistedItem .cxx_destruct] */

void FUN_10b74f5e8(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
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



/* Entry: 10b74f660; end: 10b74f6e7; -[CTPPersistedExternalId initWithExternalItemId:type:] */

undefined1 *
FUN_10b74f660(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270a7d0;
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



/* Entry: 10b74f6e8; end: 10b74f70b; -[CTPPersistedExternalId copyWithZone:] */

undefined8 FUN_10b74f6e8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b74f70c; end: 10b74f777; -[CTPPersistedExternalId hash] */

undefined8 * FUN_10b74f70c(long param_1,undefined8 param_2,undefined8 *param_3)

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
  func_0x000107c3191c(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b74f7fc;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (puVar2[2] != param_3[2])) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_10b74f7fc;
    }
    puVar4 = (undefined8 *)puVar2[1];
    if (puVar4 != (undefined8 *)param_3[1]) {
      func_0x00010c071ae0();
      goto LAB_10b74f7fc;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_10b74f7fc:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10b74f778; end: 10b74f817; -[CTPPersistedExternalId isEqual:] */

long FUN_10b74f778(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b74f7fc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) {
      lVar3 = 0;
      goto LAB_10b74f7fc;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10b74f7fc;
    }
  }
  lVar3 = 1;
LAB_10b74f7fc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b74f818; end: 10b74f81f; -[CTPPersistedExternalId externalItemId] */

undefined8 FUN_10b74f818(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b74f820; end: 10b74f827; -[CTPPersistedExternalId type] */

undefined8 FUN_10b74f820(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b74f828; end: 10b74f833; -[CTPPersistedExternalId .cxx_destruct] */

void FUN_10b74f828(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b74f834; end: 10b74f88b; -[CTPExternalIdSyncPersistedMetadata initWithExternalIdType:lastUpdatedTimestamp:] */

void FUN_10b74f834(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_11270a7d8;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
  }
  return;
}



/* Entry: 10b74f88c; end: 10b74f8af; -[CTPExternalIdSyncPersistedMetadata copyWithZone:] */

undefined8 FUN_10b74f88c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b74f8b0; end: 10b74f927; -[CTPExternalIdSyncPersistedMetadata hash] */

undefined8 * FUN_10b74f8b0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  double dVar5;
  undefined8 uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 8);
  uVar3 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar3 = (uVar3 ^ uVar3 >> 0x1f) * 0x15;
  uStack_20 = (uVar3 ^ uVar3 >> 0xb) * 0x41;
  uStack_20 = uStack_20 ^ uStack_20 >> 0x16;
  puVar1 = &uStack_28;
  func_0x000107c3191c(puVar1,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == param_3) {
    puVar4 = (undefined8 *)0x1;
  }
  else {
    puVar4 = (undefined8 *)0x0;
    if ((puVar1 != (undefined8 *)0x0) && (param_3 != (undefined8 *)0x0)) {
      puVar4 = puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar4);
      if ((((ulong)puVar2 & 1) == 0) || (puVar1[1] != param_3[1])) {
        puVar4 = (undefined8 *)0x0;
      }
      else {
        dVar5 = ABS((double)puVar1[2] + (double)param_3[2]) * 2.220446049250313e-16;
        if (dVar5 <= 2.2250738585072014e-308) {
          dVar5 = 2.2250738585072014e-308;
        }
        puVar4 = (undefined8 *)(ulong)(ABS((double)puVar1[2] - (double)param_3[2]) < dVar5);
      }
    }
  }
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10b74f928; end: 10b74f9e3; -[CTPExternalIdSyncPersistedMetadata isEqual:] */

bool FUN_10b74f928(ulong param_1,undefined8 param_2,ulong param_3)

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
      if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
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



/* Entry: 10b74f9e4; end: 10b74f9eb; -[CTPExternalIdSyncPersistedMetadata externalIdType] */

undefined8 FUN_10b74f9e4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b74f9ec; end: 10b74f9f3; -[CTPExternalIdSyncPersistedMetadata lastUpdatedTimestamp] */

undefined8 FUN_10b74f9ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b74f9f4; end: 10b74facf; -[CTPPersistedSearchSection initWithSection:term:lastUpdatedTimestamp:hasBitmoji:hasCameo:data:] */

undefined1 *
FUN_10b74f9f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_11270a7e0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    *(undefined1 *)((long)puVar1 + 9) = param_7;
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_8);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b74fad0; end: 10b74faf3; -[CTPPersistedSearchSection copyWithZone:] */

undefined8 FUN_10b74fad0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b74faf4; end: 10b74fb7b; -[CTPPersistedSearchSection hash] */

undefined8 * FUN_10b74faf4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_58 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uStack_48 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = (ulong)*(byte *)(param_1 + 9);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_58;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b74fc3c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b74fc48;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((((ulong)puVar4 & 1) != 0) &&
        (((puVar3[2] == param_3[2] && (puVar3[4] == param_3[4])) &&
         (*(char *)(puVar3 + 1) == *(char *)(param_3 + 1))))) &&
       (*(char *)((long)puVar3 + 9) == *(char *)((long)param_3 + 9))) {
      lVar5 = puVar3[3];
      if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[5];
        if (puVar6 != (undefined8 *)param_3[5]) {
          func_0x00010c071ae0();
          goto LAB_10b74fc48;
        }
        goto LAB_10b74fc3c;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b74fc48:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b74fb7c; end: 10b74fc63; -[CTPPersistedSearchSection isEqual:] */

long FUN_10b74fb7c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b74fc3c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b74fc48;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) != 0) &&
        (((*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10) &&
          (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) &&
         (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))))) &&
       (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) {
      lVar3 = *(long *)(param_1 + 0x18);
      if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x28);
        if (lVar3 != *(long *)(param_3 + 0x28)) {
          func_0x00010c071ae0();
          goto LAB_10b74fc48;
        }
        goto LAB_10b74fc3c;
      }
    }
    lVar3 = 0;
  }
LAB_10b74fc48:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b74fc64; end: 10b74fc6b; -[CTPPersistedSearchSection section] */

undefined8 FUN_10b74fc64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b74fc6c; end: 10b74fc73; -[CTPPersistedSearchSection term] */

undefined8 FUN_10b74fc6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b74fc74; end: 10b74fc7b; -[CTPPersistedSearchSection lastUpdatedTimestamp] */

undefined8 FUN_10b74fc74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b74fc7c; end: 10b74fc83; -[CTPPersistedSearchSection hasBitmoji] */

undefined1 FUN_10b74fc7c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b74fc84; end: 10b74fc8b; -[CTPPersistedSearchSection hasCameo] */

undefined1 FUN_10b74fc84(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b74fc8c; end: 10b74fc93; -[CTPPersistedSearchSection data] */

undefined8 FUN_10b74fc8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b74fc94; end: 10b74fcc3; -[CTPPersistedSearchSection .cxx_destruct] */

void FUN_10b74fc94(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10b74fcc4; end: 10b74fd7f; -[CTPFeedSyncPersistedMetadata initWithLastUpdatedTimestamp:feedIdentifiers:pageToken:] */

undefined1 *
FUN_10b74fcc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_11270a7e8;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
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
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b74fd80; end: 10b74fda3; -[CTPFeedSyncPersistedMetadata copyWithZone:] */

undefined8 FUN_10b74fd80(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b74fda4; end: 10b74fe3b; -[CTPFeedSyncPersistedMetadata hash] */

ulong * FUN_10b74fda4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  double dVar9;
  double dVar10;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar7 = ~*(ulong *)(param_1 + 8) + *(ulong *)(param_1 + 8) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_40 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar3;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (ulong *)param_3) {
LAB_10b74fef0:
    puVar8 = (undefined1 *)0x1;
  }
  else {
    puVar8 = (undefined1 *)0x0;
    if ((puVar4 == (ulong *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b74fefc;
    puVar8 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if (((ulong)puVar5 & 1) != 0) {
      dVar10 = ABS(*(double *)((long)puVar4 + 8) - *(double *)(param_3 + 8));
      dVar9 = ABS(*(double *)((long)puVar4 + 8) + *(double *)(param_3 + 8)) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
        bVar1 = dVar10 < dVar9;
      }
      if ((bVar1) &&
         ((lVar6 = *(long *)((long)puVar4 + 0x10), lVar6 == *(long *)(param_3 + 0x10) ||
          (func_0x00010c071ae0(), (int)lVar6 != 0)))) {
        puVar8 = *(undefined1 **)((long)puVar4 + 0x18);
        if (puVar8 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10b74fefc;
        }
        goto LAB_10b74fef0;
      }
    }
    puVar8 = (undefined1 *)0x0;
  }
LAB_10b74fefc:
  _objc_release(param_3);
  return (ulong *)puVar8;
}



/* Entry: 10b74fe3c; end: 10b74ff17; -[CTPFeedSyncPersistedMetadata isEqual:] */

long FUN_10b74fe3c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b74fef0:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b74fefc;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      dVar6 = ABS(*(double *)(param_1 + 8) - *(double *)(param_3 + 8));
      dVar5 = ABS(*(double *)(param_1 + 8) + *(double *)(param_3 + 8)) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if ((bVar1) &&
         ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
          (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
        lVar4 = *(long *)(param_1 + 0x18);
        if (lVar4 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10b74fefc;
        }
        goto LAB_10b74fef0;
      }
    }
    lVar4 = 0;
  }
LAB_10b74fefc:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b74ff18; end: 10b74ff1f; -[CTPFeedSyncPersistedMetadata lastUpdatedTimestamp] */

undefined8 FUN_10b74ff18(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b74ff20; end: 10b74ff27; -[CTPFeedSyncPersistedMetadata feedIdentifiers] */

undefined8 FUN_10b74ff20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b74ff28; end: 10b74ff2f; -[CTPFeedSyncPersistedMetadata pageToken] */

undefined8 FUN_10b74ff28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b74ff30; end: 10b74ff5f; -[CTPFeedSyncPersistedMetadata .cxx_destruct] */

void FUN_10b74ff30(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b74ff60; end: 10b750087; -[CTPKmpDeltaForceItem initWithExternalId:sectionId:itemId:rankId:data:context:feedId:] */

undefined1 *
FUN_10b74ff60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_58 = PTR_PTR_11270a7f0;
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
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b750088; end: 10b7500ab; -[CTPKmpDeltaForceItem copyWithZone:] */

undefined8 FUN_10b750088(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b7500ac; end: 10b750143; -[CTPKmpDeltaForceItem hash] */

undefined8 * FUN_10b7500ac(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uStack_58 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + 0x38);
  uStack_38 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = uVar2;
  func_0x000107c3191c(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b750224:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b750230;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((*(long *)((long)puVar3 + 0x10) == *(long *)(param_3 + 0x10) &&
         (*(long *)((long)puVar3 + 0x30) == *(long *)(param_3 + 0x30))) &&
        (*(long *)((long)puVar3 + 0x38) == *(long *)(param_3 + 0x38))))) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x20);
          if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = *(undefined1 **)((long)puVar3 + 0x28);
            if (puVar6 != *(undefined1 **)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_10b750230;
            }
            goto LAB_10b750224;
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b750230:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b750144; end: 10b75024b; -[CTPKmpDeltaForceItem isEqual:] */

long FUN_10b750144(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b750224:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b750230;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10) &&
         (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))) &&
        (*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38))))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if (lVar3 != *(long *)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_10b750230;
            }
            goto LAB_10b750224;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b750230:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b75024c; end: 10b750253; -[CTPKmpDeltaForceItem externalId] */

undefined8 FUN_10b75024c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b750254; end: 10b75025b; -[CTPKmpDeltaForceItem sectionId] */

undefined8 FUN_10b750254(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b75025c; end: 10b750263; -[CTPKmpDeltaForceItem itemId] */

undefined8 FUN_10b75025c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b750264; end: 10b75026b; -[CTPKmpDeltaForceItem rankId] */

undefined8 FUN_10b750264(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b75026c; end: 10b750273; -[CTPKmpDeltaForceItem data] */

undefined8 FUN_10b75026c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b750274; end: 10b75027b; -[CTPKmpDeltaForceItem context] */

undefined8 FUN_10b750274(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b75027c; end: 10b750283; -[CTPKmpDeltaForceItem feedId] */

undefined8 FUN_10b75027c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b750284; end: 10b7502cb; -[CTPKmpDeltaForceItem .cxx_destruct] */

void FUN_10b750284(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b7502cc; end: 10b750333; +[SDMEditCapabilities descriptor] */

void FUN_10b7502cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9028 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb6eb0,
                        &PTR____CFConstantStringClassReference_110f79c78,&PTR_DAT_1133c9620,
                        &PTR_DAT_1133c9638,3,4,0x1c);
    puRam00000001137f9028 = puVar1;
  }
  return;
}



/* Entry: 10b750334; end: 10b75039b; +[SCCTPCTItemInstance descriptor] */

void FUN_10b750334(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9030 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb6f50,
                        &PTR____CFConstantStringClassReference_110efb9f8,&PTR_DAT_1133c96a0,
                        &PTR_DAT_1133c96b8,4,0x28,0x1c);
    puRam00000001137f9030 = puVar1;
  }
  return;
}



/* Entry: 10b75039c; end: 10b750437; +[SCCTPCTItemInstance_Metadata descriptor] */

undefined * FUN_10b75039c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9038 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb6fa0,
                        &PTR____CFConstantStringClassReference_110dae2d8,&PTR_DAT_1133c96a0,
                        &PTR_DAT_1133c9738,0xe,0x78,0x1c);
    func_0x00010c229040();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112cb6f50);
    puRam00000001137f9038 = puVar1;
  }
  return puRam00000001137f9038;
}



/* Entry: 10b750438; end: 10b7504b3;  */

undefined * FUN_10b750438(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f9040 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f79c98,
                        &UNK_10e5d7dc8,&UNK_10e5d7f1c,0x1f,FUN_10b7504b4,0);
    do {
      if (puRam00000001137f9040 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f9040;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f9040,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f9040 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f9040;
}



/* Entry: 10b7504b4; end: 10b7504d3;  */

uint FUN_10b7504b4(ulong param_1)

{
  return (uint)((uint)param_1 < 0x2d) & (uint)(0x1ffffef8003f >> (param_1 & 0x3f));
}



/* Entry: 10b7504d4; end: 10b750563;  */

undefined * FUN_10b7504d4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f9048 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f79cb8,
                        &UNK_10e5d7f98,&UNK_10e5d7fb0,3,FUN_10b750564,0,&UNK_10e5d7fbc);
    do {
      if (puRam00000001137f9048 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f9048;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f9048,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f9048 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f9048;
}



/* Entry: 10b750564; end: 10b75056f;  */

bool FUN_10b750564(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b750570; end: 10b7505d7; +[SCCTPCTItem descriptor] */

void FUN_10b750570(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9050 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb7040,
                        &PTR____CFConstantStringClassReference_110f79cd8,&PTR_DAT_1133c9908,
                        &PTR_DAT_1133c99a0,7,0x38,0x1c);
    puRam00000001137f9050 = puVar1;
  }
  return;
}



/* Entry: 10b7505d8; end: 10b750673; +[SCCTPCTItem_Entity descriptor] */

undefined * FUN_10b7505d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9058 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb7090,
                        &PTR____CFConstantStringClassReference_110f3b9f8,&PTR_DAT_1133c9908,
                        &PTR_DAT_1133c9da0,0x1b,0xe0,0x1c);
    func_0x00010c229040();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112cb7040);
    puRam00000001137f9058 = puVar1;
  }
  return puRam00000001137f9058;
}



/* Entry: 10b750674; end: 10b7506ef; +[SCCTPCTItem_AssociatedId descriptor] */

undefined * FUN_10b750674(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9060 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb70e0,
                        &PTR____CFConstantStringClassReference_110f79cf8,&PTR_DAT_1133c9908,
                        &PTR_DAT_1133c9920,2,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137f9060 = puVar1;
  }
  return puRam00000001137f9060;
}



/* Entry: 10b7506f0; end: 10b750757; +[SCCTPExternalKey descriptor] */

void FUN_10b7506f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9068 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb7130,
                        &PTR____CFConstantStringClassReference_110f79d18,&PTR_DAT_1133c9908,
                        &PTR_DAT_1133c9960,2,0x10,0x1c);
    puRam00000001137f9068 = puVar1;
  }
  return;
}



/* Entry: 10b750758; end: 10b7507e3; +[SCCTPCTItemExternalID descriptor] */

undefined * FUN_10b750758(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9070 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb7180,
                        &PTR____CFConstantStringClassReference_110f79d38,&PTR_DAT_1133c9908,
                        &PTR_DAT_1133c9a80,0x19,0xd0,0x1c);
    func_0x00010c229040();
    puRam00000001137f9070 = puVar1;
  }
  return puRam00000001137f9070;
}



/* Entry: 10b7507e4; end: 10b75085f;  */

undefined * FUN_10b7507e4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f9078 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f79d58,
                        &UNK_10e5d7fc4,&UNK_10e5d7fd4,2,FUN_10b750860,0);
    do {
      if (puRam00000001137f9078 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f9078;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f9078,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f9078 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f9078;
}



/* Entry: 10b750860; end: 10b75086b;  */

bool FUN_10b750860(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b75086c; end: 10b7508d3; +[SCCTPCTConfig descriptor] */

void FUN_10b75086c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9080 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb7220,
                        &PTR____CFConstantStringClassReference_110f79d78,&PTR_DAT_1133ca100,
                        &PTR_DAT_1133ca118,2,0x18,0x1c);
    puRam00000001137f9080 = puVar1;
  }
  return;
}



/* Entry: 10b7508d4; end: 10b75093b; +[SCCTPAutoCaptions descriptor] */

void FUN_10b7508d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9088 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb72c0,
                        &PTR____CFConstantStringClassReference_110f79d98,&PTR_DAT_1133ca158,0,0,4,
                        0x1c);
    puRam00000001137f9088 = puVar1;
  }
  return;
}



/* Entry: 10b75093c; end: 10b7509a3; +[SCCTPCustomoji descriptor] */

void FUN_10b75093c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9090 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb7360,
                        &PTR____CFConstantStringClassReference_110f79db8,&PTR_DAT_1133ca170,
                        &PTR_DAT_1133ca188,1,0x10,0x1c);
    puRam00000001137f9090 = puVar1;
  }
  return;
}



/* Entry: 10b7509a4; end: 10b750a0b; +[SCCTPCameraRollSticker descriptor] */

void FUN_10b7509a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9098 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb7400,
                        &PTR____CFConstantStringClassReference_110f79dd8,&PTR_DAT_1133ca1a8,
                        &PTR_DAT_1133ca1c0,7,0x38,0x1c);
    puRam00000001137f9098 = puVar1;
  }
  return;
}



/* Entry: 10b750a0c; end: 10b750a73; +[SCCTPChatCameo descriptor] */

void FUN_10b750a0c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f90a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb74a0,
                        &PTR____CFConstantStringClassReference_110f79df8,&PTR_DAT_1133ca2a0,
                        &PTR_DAT_1133ca2b8,9,0x50,0x1c);
    puRam00000001137f90a0 = puVar1;
  }
  return;
}



/* Entry: 10b750a74; end: 10b750adb; +[SCCameosChatCameoResourceCollection descriptor] */

void FUN_10b750a74(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f90a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb7540,
                        &PTR____CFConstantStringClassReference_110f79e18,&PTR_DAT_1133ca3d8,
                        &PTR_DAT_1133ca3f0,3,0x20,0x1c);
    puRam00000001137f90a8 = puVar1;
  }
  return;
}



/* Entry: 10b750adc; end: 10b750b57; +[SCCameosChatCameoResource descriptor] */

undefined * FUN_10b750adc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f90b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb75e0,
                        &PTR____CFConstantStringClassReference_110f79e38,&PTR_DAT_1133ca450,
                        &PTR_s_URL_1133ca468,3,0x18,0x1c);
    func_0x00010c2289e0();
    puRam00000001137f90b0 = puVar1;
  }
  return puRam00000001137f90b0;
}



/* Entry: 10b750b58; end: 10b750bd3; +[SCCameosQuickIconResource descriptor] */

undefined * FUN_10b750b58(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f90b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb7680,
                        &PTR____CFConstantStringClassReference_110f79e58,&PTR_DAT_1133ca4c8,
                        &PTR_s_URL_1133ca4e0,2,0x18,0x1c);
    func_0x00010c2289e0();
    puRam00000001137f90b8 = puVar1;
  }
  return puRam00000001137f90b8;
}



/* Entry: 10b750bd4; end: 10b750c3b; +[SCCameosResolution descriptor] */

void FUN_10b750bd4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f90c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb7720,
                        &PTR____CFConstantStringClassReference_110f79e78,&PTR_DAT_1133ca520,
                        &PTR_s_height_1133ca538,2,0xc,0x1c);
    puRam00000001137f90c0 = puVar1;
  }
  return;
}



/* Entry: 10b750c3c; end: 10b750ca3; +[SPCPStringListValue descriptor] */

void FUN_10b750c3c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f90c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb77c0,
                        &PTR____CFConstantStringClassReference_110f79e98,&PTR_DAT_1133ca578,
                        &PTR_DAT_1133ca590,1,0x10,0x1c);
    puRam00000001137f90c8 = puVar1;
  }
  return;
}



/* Entry: 10b750ca4; end: 10b750d0b; +[SPCPInt32ListValue descriptor] */

void FUN_10b750ca4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f90d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb7810,
                        &PTR____CFConstantStringClassReference_110f79eb8,&PTR_DAT_1133ca578,
                        &PTR_DAT_1133ca5b0,1,0x10,0x1c);
    puRam00000001137f90d0 = puVar1;
  }
  return;
}



/* Entry: 10b750d0c; end: 10b750def; +[SPCPInt64ListValue descriptor] */

void FUN_10b750d0c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f90d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb7860,
                        &PTR____CFConstantStringClassReference_110f79ed8,&PTR_DAT_1133ca578,
                        &PTR_DAT_1133ca5d0,1,0x10,0x1c);
    puRam00000001137f90d8 = puVar1;
  }
  return;
}



/* Entry: 10b750df0; end: 10b750dfb;  */

bool FUN_10b750df0(uint param_1)

{
  return param_1 < 0xf;
}



/* Entry: 10b750dfc; end: 10b750e63; +[SCCTPChatReactionIntent descriptor] */

void FUN_10b750dfc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f90e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb7900,
                        &PTR____CFConstantStringClassReference_110f79f18,&PTR_DAT_1133ca5f8,
                        &PTR_DAT_1133ca610,2,0x10,0x1c);
    puRam00000001137f90e8 = puVar1;
  }
  return;
}



/* Entry: 10b750e64; end: 10b750eff; +[SCCTPChatReactionIntent_ReactionSticker descriptor] */

undefined * FUN_10b750e64(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f90f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb7950,
                        &PTR____CFConstantStringClassReference_110f79f38,&PTR_DAT_1133ca5f8,
                        &PTR_s_bitmoji_1133ca650,5,0x30,0x1c);
    func_0x00010c229040();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112cb7900);
    puRam00000001137f90f0 = puVar1;
  }
  return puRam00000001137f90f0;
}



/* Entry: 10b750f00; end: 10b750f7b;  */

undefined * FUN_10b750f00(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f90f8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f79f58,
                        &UNK_10e5d80a8,&UNK_10e5d80c0,2,FUN_10b750f7c,0);
    do {
      if (puRam00000001137f90f8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f90f8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f90f8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f90f8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f90f8;
}



/* Entry: 10b750f7c; end: 10b750f87;  */

bool FUN_10b750f7c(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b750f88; end: 10b750fef; +[SCCTPBitmojiSticker descriptor] */

void FUN_10b750f88(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9100 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb79f0,
                        &PTR____CFConstantStringClassReference_110f79f78,&PTR_DAT_1133ca6f0,
                        &PTR_DAT_1133ca748,6,0x20,0x1c);
    puRam00000001137f9100 = puVar1;
  }
  return;
}



/* Entry: 10b750ff0; end: 10b75106b; +[SCCTPBitmojiSticker_CustomojiInfo descriptor] */

undefined * FUN_10b750ff0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9108 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb7a40,
                        &PTR____CFConstantStringClassReference_110f79f98,&PTR_DAT_1133ca6f0,
                        &PTR_DAT_1133ca708,2,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001137f9108 = puVar1;
  }
  return puRam00000001137f9108;
}



/* Entry: 10b75106c; end: 10b75114f; +[SCCTPCameo descriptor] */

void FUN_10b75106c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9110 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb7ae0,
                        &PTR____CFConstantStringClassReference_110f79fb8,&PTR_DAT_1133ca808,
                        &PTR_DAT_1133ca820,9,0x48,0x1c);
    puRam00000001137f9110 = puVar1;
  }
  return;
}



/* Entry: 10b751150; end: 10b75115b;  */

bool FUN_10b751150(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b75115c; end: 10b7511d7;  */

undefined * FUN_10b75115c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f9120 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f79ff8,
                        &UNK_10e5d8104,&UNK_10e5d814c,5,FUN_10b7511d8,0);
    do {
      if (puRam00000001137f9120 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f9120;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f9120,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f9120 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f9120;
}



/* Entry: 10b7511d8; end: 10b7511e3;  */

bool FUN_10b7511d8(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 10b7511e4; end: 10b75125f;  */

undefined * FUN_10b7511e4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f9128 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f7a018,
                        &UNK_10e5d8160,&UNK_10e5d8188,4,FUN_10b751260,0);
    do {
      if (puRam00000001137f9128 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f9128;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f9128,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f9128 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f9128;
}



/* Entry: 10b751260; end: 10b75126b;  */

bool FUN_10b751260(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b75126c; end: 10b7512e7;  */

undefined * FUN_10b75126c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f9130 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f7a038,
                        &UNK_10e5d8198,&UNK_10e5d8218,8,FUN_10b7512e8,0);
    do {
      if (puRam00000001137f9130 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f9130;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f9130,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f9130 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f9130;
}



/* Entry: 10b7512e8; end: 10b7512f3;  */

bool FUN_10b7512e8(uint param_1)

{
  return param_1 < 8;
}



/* Entry: 10b7512f4; end: 10b75136f;  */

undefined * FUN_10b7512f4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f9138 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f7a058,
                        &UNK_10e5d8238,&UNK_10e5d826c,4,FUN_10b751370,0);
    do {
      if (puRam00000001137f9138 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f9138;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f9138,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f9138 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f9138;
}



/* Entry: 10b751370; end: 10b75137b;  */

bool FUN_10b751370(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b75137c; end: 10b7513e3; +[SCCTPCaptionStyle descriptor] */

void FUN_10b75137c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9140 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb7b80,
                        &PTR____CFConstantStringClassReference_110df0258,&PTR_DAT_1133ca940,
                        &PTR_DAT_1133cabd8,8,0x30,0x1c);
    puRam00000001137f9140 = puVar1;
  }
  return;
}



/* Entry: 10b7513e4; end: 10b75145f; +[SCCTPCaptionStyle_Color descriptor] */

undefined * FUN_10b7513e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9148 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb7bd0,
                        &PTR____CFConstantStringClassReference_110e7c578,&PTR_DAT_1133ca940,
                        &PTR_DAT_1133caa98,5,0x28,0x1c);
    func_0x00010c228780();
    puRam00000001137f9148 = puVar1;
  }
  return puRam00000001137f9148;
}



/* Entry: 10b751460; end: 10b7514db; +[SCCTPCaptionStyle_Shadow descriptor] */

undefined * FUN_10b751460(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9150 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb7c20,
                        &PTR____CFConstantStringClassReference_110f7a078,&PTR_DAT_1133ca940,
                        &PTR_DAT_1133ca998,4,0x28,0x1c);
    func_0x00010c228780();
    puRam00000001137f9150 = puVar1;
  }
  return puRam00000001137f9150;
}



/* Entry: 10b7514dc; end: 10b751557; +[SCCTPCaptionStyle_TextPadding descriptor] */

undefined * FUN_10b7514dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9158 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb7c70,
                        &PTR____CFConstantStringClassReference_110df02b8,&PTR_DAT_1133ca940,
                        &PTR_s_top_1133caa18,4,0x28,0x1c);
    func_0x00010c228780();
    puRam00000001137f9158 = puVar1;
  }
  return puRam00000001137f9158;
}



/* Entry: 10b751558; end: 10b7515e3; +[SCCTPCaptionStyle_FontStyle descriptor] */

undefined * FUN_10b751558(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9160 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb7cc0,
                        &PTR____CFConstantStringClassReference_110df0298,&PTR_DAT_1133ca940,
                        &PTR_DAT_1133cacd8,0x10,0x78,0x1c);
    func_0x00010c2289e0();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112cb7b80);
    puRam00000001137f9160 = puVar1;
  }
  return puRam00000001137f9160;
}



/* Entry: 10b7515e4; end: 10b75166f; +[SCCTPCaptionStyle_BackgroundStyle descriptor] */

undefined * FUN_10b7515e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9168 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb7d10,
                        &PTR____CFConstantStringClassReference_110df0278,&PTR_DAT_1133ca940,
                        &PTR_DAT_1133cab38,5,0x28,0x1c);
    func_0x00010c2289e0();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112cb7b80);
    puRam00000001137f9168 = puVar1;
  }
  return puRam00000001137f9168;
}



/* Entry: 10b751670; end: 10b751753; +[SCCTPCaptionStyles descriptor] */

void FUN_10b751670(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9170 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb7d60,
                        &PTR____CFConstantStringClassReference_110f7a098,&PTR_DAT_1133ca940,
                        &PTR_DAT_1133ca958,2,0x18,0x1c);
    puRam00000001137f9170 = puVar1;
  }
  return;
}



/* Entry: 10b751754; end: 10b751773;  */

uint FUN_10b751754(ulong param_1)

{
  return (uint)((uint)param_1 < 0x22) & (uint)(0x3fef8003f >> (param_1 & 0x3f));
}



/* Entry: 10b751774; end: 10b7517db; +[SCCTPCompositeId descriptor] */

void FUN_10b751774(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9180 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb7e00,
                        &PTR____CFConstantStringClassReference_110e8d7f8,&PTR_DAT_1133caed8,
                        &PTR_s_id_p_1133caef0,2,0x10,0x1c);
    puRam00000001137f9180 = puVar1;
  }
  return;
}


