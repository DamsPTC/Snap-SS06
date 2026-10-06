/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100bc7fb0; end: 100bc835b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bc7fb0(void)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  long lVar7;
  undefined **ppuVar8;
  long unaff_x20;
  undefined8 uVar9;
  long lVar10;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  ppuVar4 = &puStack_80;
  ppuVar5 = &puStack_80;
  ppuVar8 = &puStack_80;
  lVar2 = *(long *)(unaff_x20 + _DAT_112de8420);
  if (lVar2 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar10 = lVar2;
      func_0x000107c5d304();
      func_0x000107c61180();
      func_0x000107c615e8(lVar2);
      lVar2 = lVar10;
      func_0x000107c4da88(lVar10);
      func_0x000107c61180();
      func_0x000107c61170(lVar10);
      puVar3 = &UNK_1104298a8;
      func_0x000107c613fc(&UNK_1104298a8,0x18,7);
      func_0x000107c61614(puVar3 + 0x10);
      puStack_60 = &UNK_1019eb10c;
      puStack_80 = puVar1;
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_1019eb2d8;
      puStack_68 = &UNK_110429c08;
      puStack_58 = puVar3;
      func_0x000107c60bc4(&puStack_80);
      func_0x000107c61574(puStack_58);
      lVar10 = lVar2;
      func_0x000107c5c320(lVar2);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c61170(lVar2);
      func_0x000107c3e924(lVar10);
      func_0x000107c61170(lVar10);
    }
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_112de8430);
  if (lVar2 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar10 = lVar2;
      func_0x000107c4b130();
      func_0x000107c61180();
      func_0x000107c615e8(lVar2);
      lVar2 = lVar10;
      func_0x000107c4da88(lVar10);
      func_0x000107c61180();
      func_0x000107c61170(lVar10);
      puVar3 = &UNK_1104298a8;
      func_0x000107c613fc(&UNK_1104298a8,0x18,7);
      func_0x000107c61614(puVar3 + 0x10);
      puStack_60 = &UNK_1019eb104;
      puStack_80 = puVar1;
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_1019eb2dc;
      puStack_68 = &UNK_110429be0;
      puStack_58 = puVar3;
      func_0x000107c60bc4(&puStack_80);
      func_0x000107c61574(puStack_58);
      lVar10 = lVar2;
      func_0x000107c5c320(lVar2);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c61170(lVar2);
      func_0x000107c3e924(lVar10);
      func_0x000107c61170(lVar10);
    }
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_112de8418);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = 0x112d38280;
    FUN_1000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c61538();
    lVar6 = lVar10;
    FUN_100111634();
    FUN_100bcb1dc(lVar10 + 0x20);
    lVar7 = lVar6;
    func_0x000107c5fe08(lVar6,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(lVar6);
    uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112de8460);
    func_0x000107c614f0(uVar9);
    FUN_100bcb214();
    puVar3 = &UNK_1104298a8;
    func_0x000107c613fc(&UNK_1104298a8,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    puStack_60 = &UNK_1019eb0fc;
    puStack_80 = puVar1;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1019e993c;
    puStack_68 = &UNK_110429bb8;
    puStack_58 = puVar3;
    func_0x000107c60bc4(&puStack_80);
    func_0x000107c61574(puStack_58);
    lVar10 = lVar2;
    func_0x000107c4da1c();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar7);
    func_0x000107c61170(uVar9);
  }
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112de8470);
  *(long *)(unaff_x20 + _DAT_112de8470) = lVar10;
  func_0x000107c615e8(uVar9);
  return;
}



/* Entry: 100bc835c; end: 100bc83a3;  */

void FUN_100bc835c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3cac4();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 100bc83a4; end: 100bc853b; -[SCLensUnlockerEntryPoint _trackedLensUnlockerWithLensRepostiory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bc83a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  func_0x000107c61174(param_3);
  lVar1 = param_1;
  func_0x000107c3bfc0(param_1,param_2,param_3);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126bbbf0;
  func_0x000107c610f4(PTR_PTR_1126bbbf0);
  if (param_1 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_1 + _DAT_1127265c8;
    func_0x000107c61148();
  }
  lVar3 = lVar9;
  func_0x000107c5dac4();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_1 + _DAT_1127265bc;
    func_0x000107c61148(lVar10);
  }
  lVar4 = lVar10;
  func_0x000107c444a4(lVar10);
  func_0x000107c61180();
  lVar5 = lVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar6 = lVar5;
  func_0x000107c4b1a4();
  func_0x000107c61180();
  lVar7 = 0;
  if (param_1 != 0) {
    lVar7 = param_1 + _DAT_1127265d4;
    func_0x000107c61148(lVar7);
  }
  lVar8 = lVar7;
  func_0x000107c4b2ec(lVar7);
  func_0x000107c61180();
  func_0x000107c490cc(puVar2,param_2,lVar1,lVar3,lVar6,lVar8);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100bc853c; end: 100bc87ef; -[SCLensUnlockerEntryPoint _nonTrackedLensUnlockerWithLensRepostiory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bc853c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  
  func_0x000107c61174(param_3);
  puVar1 = PTR_PTR_1126bbbc8;
  func_0x000107c610f4();
  lVar11 = param_1;
  FUN_100bc89a0(param_1);
  func_0x000107c61180();
  lVar2 = lVar11;
  func_0x000107c5d2f8();
  func_0x000107c61180();
  func_0x000107c47414(puVar1,param_2,lVar2);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar11);
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_1127265d8;
    func_0x000107c61148(lVar11);
  }
  lVar2 = lVar11;
  func_0x000107c4ce34(lVar11);
  func_0x000107c61180();
  func_0x000107c61170(lVar11);
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_1127265d0;
    func_0x000107c61148(lVar11);
  }
  lVar3 = lVar11;
  func_0x000107c3f770(lVar11);
  func_0x000107c61180();
  func_0x000107c61170(lVar11);
  lVar11 = lVar3;
  func_0x000107c436a8(lVar3,param_2,&PTR___NSConcreteGlobalBlock_11089cd30);
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126ae790;
  func_0x000107c610f4(PTR_PTR_1126ae790);
  func_0x000107c470d0();
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_1127265c0;
    func_0x000107c61148(param_1);
  }
  lVar5 = param_1;
  func_0x000107c5d2c4(param_1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  lVar6 = lVar5;
  func_0x000107c436a8(lVar5,param_2,&PTR___NSConcreteGlobalBlock_11089cd70);
  func_0x000107c61180();
  puVar7 = PTR_PTR_1126bbbd0;
  func_0x000107c610f4();
  func_0x000107c48878();
  lVar8 = lVar3;
  func_0x000107c4c280(lVar3,param_2,&PTR___NSConcreteGlobalBlock_11089cdb0);
  func_0x000107c61180();
  puVar9 = PTR_PTR_1126bbbe0;
  func_0x000107c610f4(PTR_PTR_1126bbbe0);
  func_0x000107c47a5c();
  if (puVar7 == (undefined *)0x0) {
    func_0x000107c61174(puVar9);
    puVar10 = puVar9;
  }
  else {
    puVar10 = PTR_PTR_1126bbbe8;
    func_0x000107c610f4(PTR_PTR_1126bbbe8);
    func_0x000107c490b4();
  }
  func_0x000107c61170(puVar9);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 100bc87f0; end: 100bc899f; -[SCLensDataProviderV2 _setupLensUserStatusSubscription] */

void FUN_100bc87f0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  uVar1 = *(ulong *)(param_1 + 0x98);
  if (uVar1 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar2 = uVar1;
    func_0x000107c4b50c();
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c499b0();
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar1);
    if (((uVar3 & 1) == 0) && ((*(byte *)(param_1 + 0xc6) & 1) == 0)) {
      func_0x000107c61144(auStack_58,param_1);
      uVar4 = *(undefined8 *)(param_1 + 0x98);
      func_0x000107c5c734(uVar4);
      func_0x000107c61180();
      uVar5 = uVar4;
      func_0x000107c4b50c();
      func_0x000107c61180();
      uVar6 = uVar5;
      func_0x000107c499b4();
      func_0x000107c61180();
      uVar7 = uVar6;
      FUN_100078e94();
      func_0x000107c61180();
      uVar8 = uVar6;
      func_0x000107c4da88(uVar6);
      func_0x000107c61180();
      func_0x000107c6111c(auStack_60,auStack_58);
      uVar9 = uVar8;
      func_0x000107c5c320(uVar8);
      func_0x000107c61180();
      func_0x000107c3e924();
      func_0x000107c61170(uVar9);
      func_0x000107c61170(uVar8);
      func_0x000107c61170(uVar7);
      func_0x000107c61170(uVar6);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar4);
      func_0x000107c61120(auStack_60);
      func_0x000107c61120(auStack_58);
    }
  }
  return;
}



/* Entry: 100bc89a0; end: 100bc89c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bc89a0(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_1127265c4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100bc89c4; end: 100bc8a37; -[SCLensDataStoreWriterAdapter initWithLensUnlockableDatastore:] */

undefined1 * FUN_100bc89c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112705830;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100bc8a38; end: 100bc8a3f; -[SCLensUserProvider lensUser] */

void FUN_100bc8a38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_target_112678178);
  return;
}



/* Entry: 100bc8a40; end: 100bc8a47; -[SCSnapcodeServices metadataProvider] */

undefined8 FUN_100bc8a40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100bc8a48; end: 100bc8b97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bc8a48(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar9 = PTR_PTR_1126bb8d0;
    func_0x000107c610f4(PTR_PTR_1126bb8d0);
    lVar1 = param_1 + _DAT_1127262f4;
    func_0x000107c61148(lVar1);
    lVar2 = lVar1;
    func_0x000107c4ec80();
    func_0x000107c61180();
    lVar3 = param_1 + _DAT_1127262f8;
    func_0x000107c61148(lVar3);
    lVar4 = lVar3;
    func_0x000107c5da50();
    func_0x000107c61180();
    lVar5 = param_1 + _DAT_1127262fc;
    func_0x000107c61148(lVar5);
    lVar6 = lVar5;
    func_0x000107c5db24();
    func_0x000107c61180();
    lVar7 = param_1 + _DAT_1127262f0;
    func_0x000107c61148(lVar7);
    lVar8 = lVar7;
    func_0x000107c5da60();
    func_0x000107c61180();
    func_0x000107c492f8(puVar9,param_2,lVar2,lVar4,lVar6,lVar8);
    func_0x000107c61170(lVar8);
    func_0x000107c61170(lVar7);
    func_0x000107c61170(lVar6);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 100bc8b98; end: 100bc8d3b; -[SCLensUserSettings initWithUserPreferences:userSegmentsProvider:usernameProvider:userSession:] */

undefined8 *
FUN_100bc8b98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined *puStack_58;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_58 = PTR_PTR_1126e92f0;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61144(auStack_68,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c6111c(auStack_70,auStack_68);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61120(auStack_70);
    func_0x000107c61120(auStack_68);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100bc8d3c; end: 100bc8df7; -[SCLensUserSettings isActiveLensesUser] */

bool FUN_100bc8d3c(double param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c61174(0);
  func_0x000107c4aa0c();
  func_0x000107c61180();
  if (param_2 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x000107c421a8(PTR__OBJC_CLASS___NSDate_1126ae770);
    func_0x000107c61180();
  }
  else {
    func_0x000107c61174(param_2);
    puVar1 = param_2;
  }
  func_0x000107c61170(param_2);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x000107c41324(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x000107c61180();
  func_0x000107c5c9ec();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(0);
  return param_1 < 432000.0;
}



/* Entry: 100bc8df8; end: 100bc8f37; -[SCScannableLensUnlocker initWithSnapcodeMetadataProvider:unlockNetworkManager:lensMetadataRetriever:dataStoreWriter:queuePerformer:] */

undefined1 *
FUN_100bc8df8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puStack_48 = PTR_PTR_112705800;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100bc8f38; end: 100bc8f8f; -[_TtC42SCDiscoverFeedFriendsSectionLegacyServices42SCDiscoverFeedFriendsSectionLegacyServices initWithFriendStoriesPrefetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bc8f38(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112fb97d8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c615f0(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 100bc8f90; end: 100bc8fe3;  */

void FUN_100bc8f90(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100bc8fe4; end: 100bc9063; -[SCLensUserSettings lastLensesActivationDate] */

void FUN_100bc8fe4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c4d9e8();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x000107c61158(PTR__OBJC_CLASS___NSDate_1126ae770);
  uVar4 = uVar2;
  func_0x000107c6115c(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  func_0x000107c61174(uVar1);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100bc9064; end: 100bc9137; -[SCLensUnlockableUnlockerImpl initWithNetworkManager:unlockManager:localLensCache:dataStoreWriter:] */

undefined8
FUN_100bc9064(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae790;
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  func_0x000107c470d0();
  func_0x000107c47a60(param_1,param_2,param_3,param_4,param_5,param_6,puVar1);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(puVar1);
  return param_1;
}



/* Entry: 100bc9138; end: 100bc925b; -[SCLensUnlockableUnlockerImpl initWithNetworkManager:unlockManager:localLensCache:dataStoreWriter:queuePerformer:] */

undefined1 *
FUN_100bc9138(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puStack_48 = PTR_PTR_112705808;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100bc925c; end: 100bc9267; -[SCLensCompoundUnlocker initWithUnlockableUnlocker:scannableUnlocker:] */

void FUN_100bc925c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c059350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithUnlockableUnlocker_scann_1125f3ee0,param_3,param_4,1,0);
  return;
}



/* Entry: 100bc9268; end: 100bc937b; -[SCLensCompoundUnlocker initWithUnlockableUnlocker:scannableUnlocker:unlockFlowType:queuePerformer:] */

undefined1 *
FUN_100bc9268(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_6);
  puStack_48 = PTR_PTR_1127057f8;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    if (param_6 == 0) {
      puVar3 = PTR_PTR_1126ae790;
      func_0x000107c610f4();
      func_0x000107c470d0();
      uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
      *(undefined **)((long)puVar1 + 0x20) = puVar3;
    }
    else {
      func_0x000107c61174(param_6);
      uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
      *(long *)((long)puVar1 + 0x20) = param_6;
    }
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100bc937c; end: 100bc9493; -[SCEventTrackingLensUnlocker initWithUnlocker:logger:grapheneLogger:lensPerformerProvider:] */

undefined1 *
FUN_100bc937c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_48 = PTR_PTR_1127057f0;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100bc9494; end: 100bc949b;  */

void FUN_100bc9494(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x40);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100bc949c; end: 100bc94ef;  */

void FUN_100bc949c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x40);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100bc94f0; end: 100bc9507; -[SCEventTrackingLensUnlocker unlockedLensMetadataObservable] */

undefined8 FUN_100bc94f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 100bc9508; end: 100bc98bf;  */

void FUN_100bc9508(long *param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_1002be850();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_70;
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x18) = puVar2;
  puVar7 = PTR_PTR_1126a9680;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar7;
  func_0x000107c61174();
  uVar8 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar9 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar7);
  uVar9 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010f015810);
  func_0x000107c5a49c(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar7);
  uVar9 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f0157d0);
  func_0x000107c5a49c(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar7);
  uVar9 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(puVar7);
  uVar9 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010efc3050);
  func_0x000107c5a49c(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(puVar7);
  func_0x000107c61174();
  uVar9 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f015830);
  func_0x000107c5a49c(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar9);
  func_0x000107c3e740(puVar7);
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    *(undefined **)(param_2 + 0x40) = puVar2;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100bc98c0);
  (*pcVar1)();
}



/* Entry: 100bc98c0; end: 100bc98d7;  */

void FUN_100bc98c0(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 100bc98d8; end: 100bc9917;  */

void FUN_100bc98d8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3b664();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 100bc9918; end: 100bc9aff; -[SCLensFavoritesServiceProvider _favoritesLocalPersistance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bc9918(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  
  puVar1 = PTR_PTR_1126bbca0;
  func_0x000107c61160(PTR_PTR_1126bbca0);
  if (param_1 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = param_1 + _DAT_11272664c;
    func_0x000107c61148(lVar8);
  }
  lVar2 = lVar8;
  func_0x000107c5d2c4(lVar8);
  func_0x000107c61180();
  func_0x000107c61170(lVar8);
  lVar8 = lVar2;
  func_0x000107c5c734(lVar2);
  func_0x000107c61180();
  lVar3 = lVar8;
  func_0x000107c5d2c0();
  func_0x000107c61180();
  func_0x000107c61170(lVar8);
  puVar4 = PTR_PTR_1126bbca8;
  func_0x000107c610f4(PTR_PTR_1126bbca8);
  lVar8 = lVar3;
  func_0x000107c5c734(lVar3);
  func_0x000107c61180();
  lVar5 = param_1;
  FUN_100bca41c(param_1);
  func_0x000107c61180();
  lVar6 = lVar5;
  func_0x000107c45390();
  func_0x000107c61180();
  func_0x000107c490a8(puVar4,param_2,lVar8,lVar6,puVar1);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar8);
  puVar7 = PTR_PTR_1126bbcb0;
  func_0x000107c610f4(PTR_PTR_1126bbcb0);
  lVar8 = param_1;
  FUN_100bca41c(param_1);
  func_0x000107c61180();
  lVar5 = lVar8;
  func_0x000107c45390();
  func_0x000107c61180();
  FUN_100bca50c(param_1);
  func_0x000107c61180();
  lVar6 = param_1;
  func_0x000107c421c8();
  func_0x000107c61180();
  func_0x000107c47e6c(puVar7,param_2,puVar4,lVar5,lVar6,puVar1);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 100bc9b00; end: 100bc9b7b; -[SCLensFavoritesPerformerProvider init] */

undefined1 * FUN_100bc9b00(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e93b0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    func_0x000107c470d0();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100bc9b7c; end: 100bc9b83;  */

void FUN_100bc9b7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_target_112678178);
  return;
}



/* Entry: 100bc9b84; end: 100bc9bc3;  */

void FUN_100bc9b84(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3b65c();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 100bc9bc4; end: 100bc9d93; -[SCUnlockablesNetworkServiceProvider _factory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bc9bc4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  puVar1 = PTR_PTR_1126bbec8;
  func_0x000107c610f4(PTR_PTR_1126bbec8);
  lVar2 = param_1;
  FUN_100bc9d94();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c503b4();
  func_0x000107c61180();
  lVar4 = param_1;
  FUN_100bc9d94();
  func_0x000107c61180();
  lVar5 = lVar4;
  func_0x000107c50388();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_1 + _DAT_112726778;
    func_0x000107c61148(lVar10);
  }
  lVar6 = lVar10;
  func_0x000107c444a4(lVar10);
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = param_1 + _DAT_112726770;
    func_0x000107c61148(lVar12);
  }
  lVar7 = lVar12;
  func_0x000107c3fa04(lVar12);
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_11272677c;
    func_0x000107c61148(lVar11);
  }
  lVar8 = lVar11;
  func_0x000107c4b274(lVar11);
  func_0x000107c61180();
  lVar9 = 0;
  if (param_1 != 0) {
    lVar9 = param_1 + _DAT_112726780;
    func_0x000107c61148(lVar9);
  }
  func_0x000107c46c44(puVar1,param_2,lVar3,lVar5,lVar6,lVar7,lVar8,lVar9);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100bc9d94; end: 100bc9db7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bc9d94(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_112726774);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100bc9db8; end: 100bc9dbf; -[SCGtqNetworkServices requestManager] */

undefined8 FUN_100bc9db8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100bc9dc0; end: 100bc9dc7; -[SCGtqNetworkServices requestInfoProvider] */

undefined8 FUN_100bc9dc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100bc9dc8; end: 100bc9f2b; -[SCUnlockablesNetworkFactory initWithGtqRequestManager:requestInfoProvider:grapheneRegistry:circumstanceEngine:lensSnapchatMapper:lensCoreVersionProvider:] */

undefined1 *
FUN_100bc9dc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  puStack_58 = PTR_PTR_1126e9488;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126bc000;
    func_0x000107c610f4();
    func_0x000107c46bb4();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100bc9f2c; end: 100bc9f9f; -[SCUnlockableNetworkLogger initWithGrapheneRegistry:] */

undefined1 * FUN_100bc9f2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126e9480;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100bc9fa0; end: 100bca067; -[SCUnlockablesNetworkFactory unlockableNetworkManagerForNamespace:] */

void FUN_100bc9fa0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  func_0x000107c61120(auStack_48);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100bca068; end: 100bca0cb;  */

void FUN_100bca068(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x20;
  func_0x000107c61148();
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c3cb40(lVar1,param_2,*(undefined8 *)(param_1 + 0x28));
    lVar3 = lVar1;
    func_0x000107c3b25c(lVar1,param_2,lVar2);
    func_0x000107c61180();
  }
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 100bca0cc; end: 100bca0db; -[SCUnlockablesNetworkFactory _unlocksNamespaceFromUnlockableNetworkNamespace:] */

undefined4 FUN_100bca0cc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if (param_3 != 0) {
    uVar1 = 2;
  }
  return uVar1;
}



/* Entry: 100bca0dc; end: 100bca21b; -[SCUnlockablesNetworkFactory _createGTQUnlockableNetworkManagerWithUnlocksNamespace:] */

void FUN_100bca0dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  puVar3 = PTR_PTR_1126bc020;
  func_0x000107c610f4(PTR_PTR_1126bc020);
  func_0x000107c45e04();
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c61174(uVar7);
  puVar4 = PTR_PTR_1126ae720;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  puStack_78 = &UNK_1055e7e54;
  puStack_70 = &UNK_11089e340;
  uStack_68 = uVar7;
  func_0x000107c61174(uVar7);
  func_0x000107c3e4fc(puVar4,param_2,&puStack_88);
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126bbfa0;
  func_0x000107c610f4(PTR_PTR_1126bbfa0);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  puVar6 = PTR_PTR_1126aeea8;
  func_0x000107c61160(PTR_PTR_1126aeea8);
  func_0x000107c4839c(puVar5,param_2,uVar1,puVar3,uVar2,param_3,uVar8,puVar6,puVar4);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uStack_68);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 100bca21c; end: 100bca2bf; -[SCUnlockableAPINetworkConfig initWithCircumstanceEngine:lensCoreVersionProvider:] */

undefined1 *
FUN_100bca21c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126e9478;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100bca2c0; end: 100bca41b; -[SCUnlockableAPIManager initWithRequestManager:networkConfig:requestInfoProvider:unlocksNamespace:networkLogging:timeProvider:responseParser:] */

undefined1 *
FUN_100bca2c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  puStack_58 = PTR_PTR_1126e9470;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    *(undefined4 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100bca41c; end: 100bca43f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bca41c(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_112726654);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100bca440; end: 100bca50b; -[SCLensFavoriteRemotePersistance initWithUnlockableNetworkPinner:infoCardsProvider:performerProvider:] */

undefined1 *
FUN_100bca440(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_1126e93a8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100bca50c; end: 100bca52f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bca50c(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_112726650);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100bca530; end: 100bca63f; -[SCLensFavoriteLocalPersistance initWithPersistenceStore:infoCardsProvider:docObjectContext:performerProvider:] */

undefined1 *
FUN_100bca530(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_48 = PTR_PTR_1126e93a0;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c3c66c(puVar1);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100bca640; end: 100bca79f; -[SCLensFavoriteLocalPersistance _setupInfoCardsDataObservableWithProvider:] */

void FUN_100bca640(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61144(auStack_58,param_1);
  uVar1 = param_3;
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c45394();
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c3d190(uVar3);
  func_0x000107c61180();
  uVar4 = uVar2;
  func_0x000107c4da88();
  func_0x000107c61180();
  func_0x000107c6111c(auStack_60,auStack_58);
  uVar5 = uVar4;
  func_0x000107c5c320();
  func_0x000107c61180();
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar5;
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_60);
  func_0x000107c61120(auStack_58);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100bca7a0; end: 100bca7df;  */

void FUN_100bca7a0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3b9d4();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 100bca7e0; end: 100bcaad7; -[SCLensInfoCardsServicesEntryPoint _infoCardProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bca7e0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  if (param_1 == 0) {
    puVar9 = (undefined *)0x0;
    puVar10 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1 + _DAT_1127266a4;
    func_0x000107c61148();
    func_0x000107c61170();
    if (lVar1 == 0) {
      puVar10 = (undefined *)0x0;
      goto LAB_100bcaaac;
    }
    puVar9 = PTR_PTR_1126bbcf0;
    func_0x000107c610f4(PTR_PTR_1126bbcf0);
    lVar1 = param_1 + _DAT_1127266a8;
    func_0x000107c61148(lVar1);
    lVar2 = lVar1;
    func_0x000107c3fa04();
    func_0x000107c61180();
    lVar3 = param_1 + _DAT_1127266bc;
    func_0x000107c61148(lVar3);
    func_0x000107c45e04(puVar9,param_2,lVar2,lVar3);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar1);
    lVar1 = param_1 + _DAT_1127266b0;
    func_0x000107c61148(lVar1);
    lVar3 = lVar1;
    func_0x000107c4b2ec();
    func_0x000107c61180();
    lVar2 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar4 = lVar2;
    func_0x000107c51f40();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar1);
    lVar1 = param_1 + _DAT_1127266b4;
    func_0x000107c61148();
    lVar3 = lVar1;
    func_0x000107c4b100();
    func_0x000107c61180();
    lVar2 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar5 = lVar2;
    func_0x000107c5d850();
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar1);
    if ((int)lVar5 == 0) {
      puVar6 = PTR_PTR_1126bbd00;
      func_0x000107c610f4(PTR_PTR_1126bbd00);
      lVar1 = param_1;
      FUN_100bcaccc(param_1);
      func_0x000107c61180();
      lVar3 = lVar1;
      func_0x000107c44f4c();
      func_0x000107c61180();
      lVar2 = lVar3;
      func_0x000107c5c734();
      func_0x000107c61180();
      FUN_100bcaccc(param_1);
      func_0x000107c61180();
      lVar5 = param_1;
      func_0x000107c44f60();
      func_0x000107c61180();
      lVar7 = lVar5;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c47340(puVar6,param_2,puVar9,lVar2,lVar7,lVar4);
      func_0x000107c61170(lVar7);
      func_0x000107c61170(lVar5);
      func_0x000107c61170(param_1);
      func_0x000107c61170(lVar2);
    }
    else {
      puVar6 = PTR_PTR_1126bbcf8;
      func_0x000107c610f4(PTR_PTR_1126bbcf8);
      lVar1 = param_1 + _DAT_1127266b8;
      func_0x000107c61148(lVar1);
      lVar3 = lVar1;
      func_0x000107c44580();
      func_0x000107c61180();
      func_0x000107c4733c(puVar6,param_2,puVar9,lVar3,lVar4);
    }
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar1);
    puVar8 = PTR_PTR_1126bbd08;
    func_0x000107c610f4(PTR_PTR_1126bbd08);
    func_0x000107c48380();
    puVar10 = PTR_PTR_1126bbd10;
    func_0x000107c610f4(PTR_PTR_1126bbd10);
    func_0x000107c45934();
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(lVar4);
  }
  func_0x000107c61170(puVar9);
LAB_100bcaaac:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 100bcaad8; end: 100bcab7b; -[SCLensInfoCardNetworkConfig initWithCircumstanceEngine:lensCoreVersionProvider:] */

undefined1 *
FUN_100bcaad8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126f0528;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100bcab7c; end: 100bcabcb; -[SCLensExplorerExperiments useGrpcForInfocardRequests] */

undefined8 FUN_100bcab7c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 100bcabcc; end: 100bcaccb; -[SCPlaybackMediaPrefetchServiceEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bcabcc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126bff68;
  func_0x000107c610f4(PTR_PTR_1126bff68);
  func_0x000107c47f44();
  func_0x000107c42c20(*(undefined8 *)(param_1 + _DAT_11272bfec));
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
  return;
}



/* Entry: 100bcaccc; end: 100bcacef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bcaccc(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_1127266ac);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100bcacf0; end: 100bcad63; -[SCPlaybackMediaPrefetchService initWithPlaybackMediaPrefetcher:] */

undefined1 * FUN_100bcacf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112704ff0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100bcad64; end: 100bcae63; -[SCLensInfoCardHTTPRequestManager initWithLensInfoCardNetworkConfig:metadataService:requestModifier:performer:] */

undefined1 *
FUN_100bcad64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_48 = PTR_PTR_1126f0520;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    func_0x000107c61170(uVar2);
    *(undefined4 *)((long)puVar1 + 0x30) = 0;
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100bcae64; end: 100bcaea7;  */

void FUN_100bcae64(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100bcaea8; end: 100bcaf57; -[SCLensInfoCardRemoteDataProvider initWithRequestManager:] */

undefined1 * FUN_100bcaea8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f0510;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    func_0x000107c61170(uVar2);
    *(undefined4 *)((long)puVar1 + 0x18) = 0;
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100bcaf58; end: 100bcafeb; -[SCLensInfoCardLocalDataProvider initWithBaseDataProvider:] */

undefined1 * FUN_100bcaf58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f0508;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    func_0x000107c61170(uVar2);
    *(undefined4 *)((long)puVar1 + 0x18) = 0;
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100bcafec; end: 100bcaff3; -[SCLensInfoCardLocalDataProvider infoCardsDataObservable] */

void FUN_100bcafec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfedb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_infoCardsDataObservable_1125d9090);
  return;
}



/* Entry: 100bcaff4; end: 100bcaffb; -[SCLensInfoCardRemoteDataProvider infoCardsDataObservable] */

undefined8 FUN_100bcaff4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100bcaffc; end: 100bcb023; -[SCLensFavoritesPerformerProvider activeSerialPerformer] */

void FUN_100bcaffc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100bcb024; end: 100bcb02f; -[SCLensBackendPrefetchFiltersFactory .cxx_destruct] */

void FUN_100bcb024(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 100bcb030; end: 100bcb043; -[SCLensAuthPrefetchFiltersFactory .cxx_destruct] */

void FUN_100bcb030(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 100bcb044; end: 100bcb08b;  */

void FUN_100bcb044(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001000ad7c4();
  uVar1 = 0;
  FUN_1002b33d4(0);
  func_0x000107c610f8();
  FUN_100bcb098(param_2,uVar1);
  *param_1 = param_2;
  return;
}



/* Entry: 100bcb08c; end: 100bcb097; -[SCLensFavoriteLocalPersistance lensFavoritesObservable] */

undefined8 FUN_100bcb08c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100bcb098; end: 100bcb0e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bcb098(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_11307cf00) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100bcb0e4; end: 100bcb0eb; -[SCLensDataProviderV2 warmUp] */

void FUN_100bcb0e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2a1c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x28),PTR_s_warmUp_112686130);
  return;
}



/* Entry: 100bcb0ec; end: 100bcb1db; -[SCCompositeLensMetadataStore warmUp] */

long FUN_100bcb0ec(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = *(long *)(param_1 + 0x10);
  func_0x000107c61174(lVar4);
  lVar2 = lVar4;
  func_0x000107c4080c();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        func_0x000107c61128(lVar4);
      }
      func_0x000107c5e0cc(*(undefined8 *)(lVar5 * 8));
      lVar5 = lVar5 + 1;
    } while (lVar2 != lVar5);
    lVar2 = lVar4;
    func_0x000107c4080c();
  }
  func_0x000107c61170(lVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return lVar4;
  }
  func_0x000107c60e78();
  (**(code **)(*(long *)(PTR___sSSN_11034da80 + -8) + 8))();
  return lVar4;
}



/* Entry: 100bcb1dc; end: 100bcb20f;  */

undefined8 FUN_100bcb1dc(undefined8 param_1)

{
  (**(code **)(*(long *)(PTR___sSSN_11034da80 + -8) + 8))();
  return param_1;
}



/* Entry: 100bcb210; end: 100bcb213;  */

void FUN_100bcb210(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c11de10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_queue_1126251a0);
  return;
}



/* Entry: 100bcb214; end: 100bcb22f;  */

void FUN_100bcb214(void)

{
  FUN_100bcb210();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 100bcb230; end: 100bcb237;  */

void FUN_100bcb230(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_target_112678178);
  return;
}



/* Entry: 100bcb238; end: 100bcb337;  */

void FUN_100bcb238(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c61160(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c5c734(uVar3);
    func_0x000107c61180();
    func_0x000107c3d798(puVar1,param_2,uVar3);
    func_0x000107c61170(uVar3);
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 0x70);
  func_0x000107c4b2d0();
  func_0x000107c61180();
  lVar2 = lVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  if (lVar2 != 0) {
    func_0x000107c3d798(puVar1,param_2,lVar2);
  }
  puVar5 = PTR_PTR_1126ddcf0;
  func_0x000107c610f4(PTR_PTR_1126ddcf0);
  puVar6 = puVar1;
  func_0x000107c40794(puVar1);
  func_0x000107c477bc(puVar5,param_2,puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 100bcb338; end: 100bcb3a3;  */

void FUN_100bcb338(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae790;
  func_0x000107c610f4(PTR_PTR_1126ae790);
  func_0x000107c470d0();
  puVar2 = PTR_PTR_1126ddc98;
  func_0x000107c610f4(PTR_PTR_1126ddc98);
  func_0x000107c46e94();
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100bcb3a4; end: 100bcb3ab;  */

void FUN_100bcb3a4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x50);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100bcb3ac; end: 100bcb3ff;  */

void FUN_100bcb3ac(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x50);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100bcb400; end: 100bcb417;  */

void FUN_100bcb400(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 100bcb418; end: 100bcb8fb;  */

void FUN_100bcb418(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_10032cd18();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  *(undefined8 *)(param_2 + 0x48) = uStack_a0;
  puVar1 = PTR_PTR_1126ac9d0;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174();
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar7 = uStack_98;
  func_0x000107c61174();
  uVar8 = uStack_a0;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar9 = uStack_68;
  func_0x000107c61174();
  uVar10 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar10 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar10 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef16f90);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar10 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f01a7f0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar10 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef21a40);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar10 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f007170);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  uVar10 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef3dbc0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar8);
  func_0x000107c61174();
  uVar10 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef21240);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar10);
  func_0x000107c61174();
  puVar11 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  *(undefined **)(param_2 + 0x50) = puVar11;
  *param_1 = param_2;
  return;
}



/* Entry: 100bcb8fc; end: 100bcbc03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bcb8fc(void)

{
  code *pcVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  
  lVar8 = *(long *)(unaff_x20 + _DAT_112de8460);
  func_0x000107c614f0();
  lVar6 = lVar8;
  FUN_100bc7fa4();
  FUN_100bcbc04();
  lVar2 = lVar6;
  FUN_100bcc0dc();
  lVar11 = *(long *)(lVar6 + 0x10);
  func_0x000107c6142c(lVar6);
  if (lVar11 == *(long *)(lVar2 + 0x10)) {
    FUN_100bc7fa4(lVar8);
    uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112de8450);
    lVar6 = lVar2;
    func_0x000107c61434(lVar2);
    FUN_100bcc4c4();
    lVar11 = lVar6;
    func_0x000107c5fe08();
    func_0x000107c6142c(lVar6);
    func_0x000107c4d664(uVar9);
    func_0x000107c61170(lVar11);
    ppuVar10 = *(undefined ***)(lVar2 + 0x10);
  }
  else {
    func_0x0001019e92e8(lVar2);
    ppuVar10 = *(undefined ***)(lVar2 + 0x10);
  }
  if (ppuVar10 == (undefined **)0x0) {
    func_0x000107c6142c(lVar2);
    ppuVar3 = (undefined **)PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    ppuVar3 = ppuVar10;
    func_0x00010109b448(ppuVar10,0);
    ppuVar4 = &puStack_88;
    func_0x0001019ea7bc(ppuVar4,ppuVar3 + 4,ppuVar10,lVar2);
    FUN_100bcc4bc(puStack_88,uStack_80,pcStack_78,puStack_70,pcStack_68);
    if (ppuVar4 != ppuVar10) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100bcba14);
      (*pcVar1)();
    }
  }
  puVar5 = &UNK_1104298a8;
  func_0x000107c613fc(&UNK_1104298a8,0x18,7);
  func_0x000107c61614(puVar5 + 0x10);
  func_0x000107c6157c(puVar5);
  FUN_100bc7fa4(lVar8);
  lVar6 = *(long *)(unaff_x20 + _DAT_112de8430);
  if (lVar6 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar6 != 0) {
      ppuVar10 = ppuVar3;
      func_0x000107c5fc48(ppuVar3,PTR___sSSN_11034da80);
      lVar2 = lVar6;
      func_0x000107c4b13c(lVar6);
      func_0x000107c61180();
      func_0x000107c61170(ppuVar10);
      puVar7 = &UNK_110429b78;
      func_0x000107c613fc(&UNK_110429b78,0x20,7);
      *(code **)(puVar7 + 0x10) = FUN_100bce4f8;
      *(undefined **)(puVar7 + 0x18) = puVar5;
      pcStack_68 = FUN_100bcdab4;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      pcStack_78 = FUN_100bcda3c;
      puStack_70 = &UNK_110429b90;
      ppuVar10 = &puStack_88;
      puStack_60 = puVar7;
      func_0x000107c60bc4(ppuVar10);
      puVar7 = puStack_60;
      func_0x000107c6157c(puVar5);
      func_0x000107c61574(puVar7);
      func_0x000107c5dc64(lVar2);
      func_0x000107c61574(puVar5);
      func_0x000107c61574(ppuVar3);
      func_0x000107c60bd0(ppuVar10);
      func_0x000107c61574(puVar5);
      func_0x000107c615e8(lVar6);
      func_0x000107c61170(lVar2);
      return;
    }
  }
  func_0x000107c61428(puVar5 + 0x10,&puStack_88,0,0);
  puVar7 = puVar5 + 0x10;
  func_0x000107c61618();
  if (puVar7 == (undefined *)0x0) {
    func_0x000107c61574(puVar5);
    func_0x000107c61574(ppuVar3);
  }
  else {
    FUN_100bce55c(PTR___swiftEmptyArrayStorage_11034f1c8);
    func_0x000107c61574(puVar5);
    func_0x000107c61574(ppuVar3);
    func_0x000107c61170(puVar7);
  }
  func_0x000107c61574(puVar5);
  return;
}



/* Entry: 100bcbc04; end: 100bcbd0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100bcbc04(void)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  ulong uVar9;
  long extraout_x8;
  ulong uVar10;
  ulong *puVar11;
  long unaff_x20;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  func_0x000107c614f0(*(undefined8 *)(unaff_x20 + _DAT_112de8460));
  FUN_100bc7fa4();
  puVar6 = *(undefined **)(unaff_x20 + _DAT_112de8418);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (puVar6 != (undefined *)0x0) {
    uVar7 = 0xd000000000000023;
    func_0x000107c5fadc(0xd000000000000023,0x800000010efc8240);
    puVar12 = puVar6;
    func_0x000107c4198c();
    func_0x000107c61180();
    func_0x000107c61170(puVar6);
    func_0x000107c61170(uVar7);
    if (puVar12 != (undefined *)0x0) {
      puVar6 = puVar12;
      func_0x000107c5f9e8(puVar12,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                          PTR___ss11AnyHashableVSHsWP_11034e450);
      func_0x000107c61170(puVar12);
      puVar12 = puVar6;
      func_0x0001019e99a8();
      func_0x000107c6142c(puVar6);
      if (puVar12 != (undefined *)0x0) {
        return puVar12;
      }
    }
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar15 = 0x112d53b50;
  FUN_1000285a8(0x112d53b50,&UNK_10d91a730);
  lVar13 = *(long *)(lVar15 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = (ulong *)(&stack0xffffffffffffffa0 + -extraout_x8);
  puVar12 = *(undefined **)(puVar6 + 0x10);
  puVar8 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar12 != (undefined *)0x0) {
    FUN_1000285a8(0x112d52ae0,&UNK_10d9192a0);
    puVar8 = puVar12;
    func_0x000107c60498();
    iVar4 = *(int *)(lVar15 + 0x30);
    puVar6 = puVar6 + ((ulong)*(byte *)(lVar13 + 0x50) + 0x20 &
                      ((ulong)*(byte *)(lVar13 + 0x50) ^ 0xffffffffffffffff));
    lVar15 = *(long *)(lVar13 + 0x48);
    func_0x000107c6157c();
    do {
      func_0x000100ff36b8(puVar6,puVar11);
      uVar2 = *puVar11;
      uVar3 = *(ulong *)(&stack0xffffffffffffffa8 + -extraout_x8);
      uVar9 = uVar2;
      uVar10 = uVar3;
      func_0x000100029284();
      if ((uVar10 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100bcc07c);
        (*pcVar5)();
      }
      uVar10 = uVar9 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar8 + uVar10 + 0x40) = *(ulong *)(puVar8 + uVar10 + 0x40) | 1L << (uVar9 & 0x3f)
      ;
      puVar1 = (ulong *)(*(long *)(puVar8 + 0x30) + uVar9 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      lVar14 = *(long *)(puVar8 + 0x38);
      lVar13 = 0;
      func_0x000107c5eea4();
      (**(code **)(*(long *)(lVar13 + -8) + 0x20))
                (lVar14 + *(long *)(*(long *)(lVar13 + -8) + 0x48) * uVar9,
                 (long)puVar11 + (long)iVar4,lVar13);
      if (SCARRY8(*(long *)(puVar8 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100bcc080);
        (*pcVar5)();
      }
      *(long *)(puVar8 + 0x10) = *(long *)(puVar8 + 0x10) + 1;
      puVar6 = puVar6 + lVar15;
      puVar12 = puVar12 + -1;
    } while (puVar12 != (undefined *)0x0);
    func_0x000107c61574(puVar8);
  }
  return puVar8;
}



/* Entry: 100bcbd10; end: 100bcbd6b; -[SCPreferences dictionaryForKey:] */

void FUN_100bcbd10(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x000107c4d9c0();
  func_0x000107c61180();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x000107c61158(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  uVar3 = param_1;
  func_0x000107c6115c(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  func_0x000107c61174(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100bcbd6c; end: 100bcbe4f; -[SCContentSyncCacheServiceProvider provide] */

void FUN_100bcbd6c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126cf050;
  func_0x000107c610f4(PTR_PTR_1126cf050);
  func_0x000107c48b94();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100bcbe50; end: 100bcbea7; -[_TtC26SCContentSyncCacheServices26SCContentSyncCacheServices initWithSyncCacheRequestSender:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bcbe50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112fb9a78) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 100bcbea8; end: 100bcbf03;  */

void FUN_100bcbea8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100bcbf04; end: 100bcc07f;  */

undefined * FUN_100bcbf04(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  code *pcVar5;
  undefined *puVar6;
  ulong uVar7;
  long extraout_x8;
  ulong uVar8;
  ulong *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  lVar13 = 0x112d53b50;
  FUN_1000285a8(0x112d53b50,&UNK_10d91a730);
  lVar11 = *(long *)(lVar13 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = (ulong *)(&stack0xffffffffffffffa0 + -extraout_x8);
  puVar10 = *(undefined **)(param_1 + 0x10);
  puVar6 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar10 != (undefined *)0x0) {
    FUN_1000285a8(0x112d52ae0,&UNK_10d9192a0);
    puVar6 = puVar10;
    func_0x000107c60498();
    iVar4 = *(int *)(lVar13 + 0x30);
    param_1 = param_1 + ((ulong)*(byte *)(lVar11 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar11 + 0x50) ^ 0xffffffffffffffff));
    lVar13 = *(long *)(lVar11 + 0x48);
    func_0x000107c6157c();
    do {
      func_0x000100ff36b8(param_1,puVar9);
      uVar2 = *puVar9;
      uVar3 = *(ulong *)(&stack0xffffffffffffffa8 + -extraout_x8);
      uVar7 = uVar2;
      uVar8 = uVar3;
      func_0x000100029284();
      if ((uVar8 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100bcc07c);
        (*pcVar5)();
      }
      uVar8 = uVar7 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar6 + uVar8 + 0x40) = *(ulong *)(puVar6 + uVar8 + 0x40) | 1L << (uVar7 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar6 + 0x30) + uVar7 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      lVar12 = *(long *)(puVar6 + 0x38);
      lVar11 = 0;
      func_0x000107c5eea4();
      (**(code **)(*(long *)(lVar11 + -8) + 0x20))
                (lVar12 + *(long *)(*(long *)(lVar11 + -8) + 0x48) * uVar7,
                 (long)puVar9 + (long)iVar4,lVar11);
      if (SCARRY8(*(long *)(puVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100bcc080);
        (*pcVar5)();
      }
      *(long *)(puVar6 + 0x10) = *(long *)(puVar6 + 0x10) + 1;
      param_1 = param_1 + lVar13;
      puVar10 = puVar10 + -1;
    } while (puVar10 != (undefined *)0x0);
    func_0x000107c61574(puVar6);
  }
  return puVar6;
}



/* Entry: 100bcc080; end: 100bcc087;  */

void FUN_100bcc080(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x80);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100bcc088; end: 100bcc0db;  */

void FUN_100bcc088(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x80);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100bcc0dc; end: 100bcc4bb;  */

undefined * FUN_100bcc0dc(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined *puVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long extraout_x8;
  long lVar14;
  long extraout_x8_00;
  ulong uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  long extraout_x12;
  ulong *puVar22;
  ulong uVar23;
  code *pcVar24;
  undefined8 *puVar25;
  ulong auStack_110 [2];
  undefined1 auStack_b0 [80];
  
  lVar6 = 0;
  func_0x000107c5eea4();
  lVar13 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar14 = (long)auStack_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0x112de84a8;
  FUN_1000285a8(0x112de84a8,&UNK_10da1a5d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  puVar17 = (undefined8 *)(lVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar4 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puVar25 = (undefined8 *)((long)puVar17 - extraout_x12);
  puVar22 = (ulong *)(param_1 + 0x40);
  auStack_110[1] = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar23 = 0xffffffffffffffff;
  if (-auStack_110[1] < 0x40) {
    uVar23 = ~(-1L << (-auStack_110[1] & 0x3f));
  }
  uVar23 = uVar23 & *puVar22;
  uVar15 = 0x3f - auStack_110[1];
  func_0x000107c61434(param_1);
  lVar11 = 0;
  lVar12 = lVar11;
  while( true ) {
    for (; uVar23 != 0; uVar23 = uVar23 - 1 & uVar23) {
      uVar16 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
      uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
      uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
      uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
      uVar16 = LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) | lVar11 << 6;
      lVar12 = *(long *)(param_1 + 0x38);
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar16 * 0x10);
      uVar9 = puVar1[1];
      *puVar25 = *puVar1;
      puVar25[1] = uVar9;
      iVar3 = *(int *)(lVar7 + 0x30);
      lVar20 = *(long *)(lVar13 + 0x48);
      pcVar24 = *(code **)(lVar13 + 0x10);
      (*pcVar24)((long)puVar25 + (long)iVar3,lVar12 + lVar20 * uVar16,lVar6);
      puVar8 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x000107c61168();
      func_0x000107c61434(uVar9);
      func_0x000107c5ee70();
      func_0x000107c4137c();
      func_0x000107c61170(uVar9);
      if ((long)puVar8 < 0x1f) {
        (*pcVar24)(lVar14,(long)puVar25 + (long)iVar3,lVar6);
        func_0x0001019eb074(puVar25,puVar17,0x112de84a8,&UNK_10da1a5d0);
        uVar9 = *puVar17;
        uVar2 = puVar17[1];
        if (*(ulong *)(puVar4 + 0x18) <= *(ulong *)(puVar4 + 0x10)) {
          func_0x000100fdb65c(*(ulong *)(puVar4 + 0x10) + 1,1);
        }
        func_0x000107c6068c(auStack_b0,*(undefined8 *)(puVar4 + 0x28));
        puVar10 = auStack_b0;
        func_0x000107c5fb58(puVar10,uVar9,uVar2);
        func_0x000107c606a8();
        uVar21 = -1L << ((ulong)(byte)puVar4[0x20] & 0x3f);
        uVar19 = (ulong)puVar10 & (uVar21 ^ 0xffffffffffffffff);
        uVar18 = uVar19 >> 6;
        uVar16 = -1L << (uVar19 & 0x3f) &
                 (*(ulong *)(puVar4 + uVar18 * 8 + 0x40) ^ 0xffffffffffffffff);
        if (uVar16 == 0) {
          bVar5 = false;
          uVar16 = 0x3f - uVar21 >> 6;
          do {
            uVar19 = uVar18 + 1;
            if ((uVar19 == uVar16) && (bVar5)) {
                    /* WARNING: Does not return */
              pcVar24 = (code *)SoftwareBreakpoint(1,0x100bcc4bc);
              (*pcVar24)();
            }
            uVar18 = 0;
            if (uVar19 != uVar16) {
              uVar18 = uVar19;
            }
            bVar5 = (bool)(uVar19 == uVar16 | bVar5);
          } while (*(ulong *)(puVar4 + uVar18 * 8 + 0x40) == 0xffffffffffffffff);
          uVar16 = ~*(ulong *)(puVar4 + uVar18 * 8 + 0x40);
          uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
          uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
          uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
          uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
          uVar16 = LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) | uVar18 << 6;
        }
        else {
          uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
          uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
          uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
          uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
          uVar16 = LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) | uVar19 & 0x7fffffffffffffc0;
        }
        iVar3 = *(int *)(lVar7 + 0x30);
        uVar18 = uVar16 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(puVar4 + uVar18 + 0x40) =
             *(ulong *)(puVar4 + uVar18 + 0x40) | 1L << (uVar16 & 0x3f);
        puVar1 = (undefined8 *)(*(long *)(puVar4 + 0x30) + uVar16 * 0x10);
        *puVar1 = uVar9;
        puVar1[1] = uVar2;
        (**(code **)(lVar13 + 0x20))(*(long *)(puVar4 + 0x38) + uVar16 * lVar20,lVar14,lVar6);
        *(long *)(puVar4 + 0x10) = *(long *)(puVar4 + 0x10) + 1;
        (**(code **)(lVar13 + 8))((long)puVar17 + (long)iVar3,lVar6);
      }
      func_0x0001019eb0bc(puVar25,0x112de84a8,&UNK_10da1a5d0);
      lVar12 = lVar11;
    }
    bVar5 = SCARRY8(lVar11,1);
    lVar11 = lVar11 + 1;
    if (bVar5) {
                    /* WARNING: Does not return */
      pcVar24 = (code *)SoftwareBreakpoint(1,0x100bcc4b8);
      (*pcVar24)();
    }
    if ((long)(uVar15 >> 6) <= lVar11) break;
    uVar23 = puVar22[lVar11];
  }
  FUN_100bcc4bc(param_1,puVar22,~auStack_110[1],lVar12,0);
  return puVar4;
}



/* Entry: 100bcc4bc; end: 100bcc4c3;  */

void FUN_100bcc4bc(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 100bcc4c4; end: 100bcc5f7;  */

undefined8 FUN_100bcc4c4(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  code *pcVar5;
  bool bVar6;
  undefined8 uVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c5fe14(uVar7,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  lVar9 = 0;
  puVar8 = (ulong *)(param_1 + 0x40);
  uVar10 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar11 = 0xffffffffffffffff;
  if (-uVar10 < 0x40) {
    uVar11 = ~(-1L << (-uVar10 & 0x3f));
  }
  uVar11 = uVar11 & *puVar8;
  uStack_68 = uVar7;
  lVar1 = lVar9;
  while( true ) {
    for (; uVar11 != 0; uVar11 = uVar11 - 1 & uVar11) {
      uVar4 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      puVar2 = (undefined8 *)
               (*(long *)(param_1 + 0x30) + LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) * 0x10 +
               lVar1 * 0x400);
      uVar7 = *puVar2;
      uVar3 = puVar2[1];
      func_0x000107c61434(uVar3);
      FUN_100403b00(auStack_78,uVar7,uVar3);
      func_0x000107c6142c(uStack_70);
      lVar9 = lVar1;
    }
    bVar6 = SCARRY8(lVar1,1);
    lVar1 = lVar1 + 1;
    if (bVar6) break;
    if ((long)(0x3f - uVar10 >> 6) <= lVar1) {
      FUN_100bcc4bc(param_1,puVar8,~uVar10,lVar9,0);
      return uStack_68;
    }
    uVar11 = puVar8[lVar1];
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x100bcc5f8);
  (*pcVar5)();
}



/* Entry: 100bcc5f8; end: 100bcc6e3; -[SCLensFavoriteLocalPersistance lensFavoritesStatusForIds:] */

void FUN_100bcc5f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  func_0x000107c61174(param_3);
  puVar1 = PTR_PTR_1126ae560;
  func_0x000107c61160();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c3d190(uVar2);
  func_0x000107c61180();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_100bcc70c;
  puStack_50 = &UNK_110848ba8;
  lStack_48 = param_1;
  uStack_40 = param_3;
  puStack_38 = puVar1;
  func_0x000107c61174(puVar1);
  func_0x000107c61174(param_3);
  func_0x000107c4e524(uVar2,param_2,&puStack_68);
  func_0x000107c61170(uVar2);
  puVar3 = puVar1;
  func_0x000107c43bf4(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puStack_38);
  func_0x000107c61170(uStack_40);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100bcc6e4; end: 100bcc6e7;  */

void FUN_100bcc6e4(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 100bcc6e8; end: 100bcc70b;  */

void FUN_100bcc6e8(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100bcc70c; end: 100bcc7cb;  */

void FUN_100bcc70c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c3bc90(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  func_0x000107c61180();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_100bcd818;
  puStack_40 = &UNK_11085c638;
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c61174(uVar3);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  uStack_38 = uVar3;
  func_0x000107c3d190(uVar2);
  func_0x000107c61180();
  func_0x000107c5dc64(uVar1,param_2,&puStack_58,uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uStack_38);
  return;
}



/* Entry: 100bcc7cc; end: 100bcca93; -[SCLensFavoriteLocalPersistance _lensFavoritesStatusForIds:] */

void FUN_100bcc7cc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c40808(param_3);
  func_0x000107c3e170();
  func_0x000107c61180();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c61160();
  func_0x000107c61174(param_3);
  lVar4 = param_3;
  func_0x000107c4080c();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        func_0x000107c61128(param_3);
      }
      lVar5 = param_1;
      func_0x000107c3bca4();
      func_0x000107c61180();
      puVar7 = puVar3;
      if (lVar5 != 0) {
        puVar7 = puVar2;
      }
      func_0x000107c3d798(puVar7);
      func_0x000107c61170(lVar5);
      lVar11 = lVar11 + 1;
    } while (lVar4 != lVar11);
    lVar4 = param_3;
    func_0x000107c4080c();
  }
  func_0x000107c61170(param_3);
  puVar6 = puVar3;
  func_0x000107c40808();
  puVar7 = PTR_PTR_1126ae558;
  if (puVar6 == (undefined *)0x0) {
    puVar6 = puVar2;
    func_0x000107c40794(puVar2);
    func_0x000107c451b0(puVar7);
    func_0x000107c61180();
  }
  else {
    puVar6 = PTR_PTR_1126ae560;
    func_0x000107c61160();
    uVar10 = *(undefined8 *)(param_1 + 8);
    puVar7 = puVar3;
    func_0x000107c40794(puVar3);
    func_0x000107c4b13c(uVar10);
    func_0x000107c61180();
    func_0x000107c61174(puVar3);
    func_0x000107c61174(puVar2);
    uVar9 = *(undefined8 *)(param_1 + 0x18);
    func_0x000107c61174(puVar6);
    func_0x000107c3d190(uVar9);
    func_0x000107c61180();
    func_0x000107c5dc64(uVar10);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(puVar7);
    puVar7 = puVar6;
    func_0x000107c43bf4(puVar6);
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar3);
  }
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  func_0x000107c60e78();
  FUN_100bccad0(*(undefined8 *)(puVar2 + 0x10),*(undefined8 *)(puVar2 + 0x18),
                *(undefined8 *)(puVar2 + 0x20),*(undefined8 *)(puVar2 + 0x28),
                *(undefined8 *)(puVar2 + 0x30),*(undefined8 *)(puVar2 + 0x38),
                *(undefined8 *)(puVar2 + 0x40),*(undefined8 *)(puVar2 + 0x48),
                *(undefined8 *)(puVar2 + 0x50),*(undefined8 *)(puVar2 + 0x58),
                *(undefined8 *)(puVar2 + 0x60),*(undefined8 *)(puVar2 + 0x68),
                *(undefined8 *)(puVar2 + 0x70),*(undefined8 *)(puVar2 + 0x78),
                &stack0xfffffffffffffff0,FUN_100bcca94);
  return;
}



/* Entry: 100bcca94; end: 100bccacf;  */

void FUN_100bcca94(void)

{
  long unaff_x20;
  
  FUN_100bccad0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78));
  return;
}



/* Entry: 100bccad0; end: 100bcd36f;  */

void FUN_100bccad0(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  FUN_100083b20(auStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_100083b20(&uStack_a8);
  FUN_100083b20(&uStack_b0);
  FUN_100083b20(&uStack_b8);
  FUN_100083b20(&uStack_c0);
  FUN_100083b20(&uStack_c8);
  FUN_100083b20(&uStack_d0);
  FUN_100083b20(&uStack_d8);
  FUN_100332624();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_78;
  *(undefined8 *)(param_2 + 0x20) = uStack_80;
  *(undefined8 *)(param_2 + 0x28) = uStack_88;
  *(undefined8 *)(param_2 + 0x30) = uStack_90;
  *(undefined8 *)(param_2 + 0x38) = uStack_98;
  *(undefined8 *)(param_2 + 0x40) = uStack_a0;
  *(undefined8 *)(param_2 + 0x48) = uStack_a8;
  *(undefined8 *)(param_2 + 0x50) = uStack_b0;
  *(undefined8 *)(param_2 + 0x58) = uStack_b8;
  *(undefined8 *)(param_2 + 0x60) = uStack_c0;
  *(undefined8 *)(param_2 + 0x68) = uStack_c8;
  *(undefined8 *)(param_2 + 0x70) = uStack_d0;
  *(undefined8 *)(param_2 + 0x78) = uStack_d8;
  puVar1 = PTR_PTR_1126ac9a0;
  func_0x000107c610f8();
  uVar2 = uStack_78;
  func_0x000107c61174();
  uVar3 = uStack_80;
  func_0x000107c61174();
  uVar4 = uStack_88;
  func_0x000107c61174();
  uVar5 = uStack_90;
  func_0x000107c61174();
  uVar6 = uStack_98;
  func_0x000107c61174();
  uVar7 = uStack_a0;
  func_0x000107c61174();
  uVar8 = uStack_a8;
  func_0x000107c61174();
  uVar9 = uStack_b0;
  func_0x000107c61174();
  uVar10 = uStack_b8;
  func_0x000107c61174();
  uVar11 = uStack_c0;
  func_0x000107c61174();
  uVar12 = uStack_c8;
  func_0x000107c61174();
  uVar13 = uStack_d0;
  func_0x000107c61174(uStack_d0);
  uVar14 = uStack_d8;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar15 = auStack_70[0];
  func_0x000107c61174();
  uVar16 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar16 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar16 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f007170);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar16 = 0x53736569726f7473;
  func_0x000107c5fadc(0x53736569726f7473,0xef73656369767265);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar16);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef129b0);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef132f0);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f0157d0);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f0a3fd0);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef9e300);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar16);
  uVar16 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0x53636f4470616e73;
  func_0x000107c5fadc(0x53636f4470616e73,0xef73656369767265);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar17);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar13);
  func_0x000107c61174();
  uVar16 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef32630);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar16);
  func_0x000107c61174(uVar14);
  func_0x000107c61174();
  uVar16 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f01a8f0);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  uVar16 = uVar17;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  *(undefined8 *)(param_2 + 0x80) = uVar16;
  *param_1 = param_2;
  return;
}



/* Entry: 100bcd370; end: 100bcd3d7; +[SDMSnapDoc descriptor] */

void FUN_100bcd370(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8040 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ca8e50,
                        &PTR____CFConstantStringClassReference_110e5d998,&PTR_DAT_1133be318,
                        &PTR_DAT_1133be590,0x26,0x130,0x1c);
    puRam00000001137f8040 = puVar1;
  }
  return;
}



/* Entry: 100bcd3d8; end: 100bcd4bb; -[SCSpotlightMediaFetchingServiceProvider provide] */

void FUN_100bcd3d8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126cead0;
  func_0x000107c610f4(PTR_PTR_1126cead0);
  func_0x000107c48940();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}


