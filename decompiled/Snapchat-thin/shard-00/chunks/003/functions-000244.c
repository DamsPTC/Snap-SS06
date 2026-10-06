/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100588120; end: 100588127; -[SCStreamingLocationSharingPreferencesCachedObject locationPreferences] */

undefined8 FUN_100588120(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100588128; end: 10058812f; -[SCStreamingLocationSharingPreferencesProvider setPreferences:] */

void FUN_100588128(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 100588130; end: 10058813b; -[SCStreamingLocationSharingPreferencesProvider preferences] */

void FUN_100588130(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0xb0,1);
  return;
}



/* Entry: 10058813c; end: 100588193;  */

void FUN_10058813c(void)

{
  undefined8 uVar1;
  
  func_0x000107c61168();
  if (lRam00000001137f7360 != -1) {
    FUN_10002a2fc(0x1137f7360,&PTR___NSConcreteGlobalBlock_110d25a18);
  }
  uVar1 = uRam00000001137f7358;
  func_0x000107c61174(uRam00000001137f7358);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100588194; end: 1005881bf;  */

void FUN_100588194(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126bad10;
  func_0x000107c61160();
  uVar1 = puRam00000001137f7358;
  puRam00000001137f7358 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1005881c0; end: 1005881c7; -[SCStreamingLocationSharingPreferencesProvider setHasEverSetPreferences:] */

void FUN_1005881c0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x99) = param_3;
  return;
}



/* Entry: 1005881c8; end: 10058863f; -[SCStreamingLocationSharingPreferencesProvider _migrateUserFromBlocklistIfNecessary] */

void FUN_1005881c8(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  lVar2 = param_1;
  func_0x000107c4ec80();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5aa6c();
  func_0x000107c61170(lVar2);
  if (lVar3 == 3) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x88);
    func_0x000107c3ebd4();
    if (iVar1 != 0) {
      func_0x000107c61144(auStack_68,param_1);
      lVar4 = *(long *)(param_1 + 0x38);
      func_0x000107c5c734();
      func_0x000107c61180();
      lVar2 = lVar4;
      func_0x000107c3db3c();
      func_0x000107c61180();
      puVar5 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
      func_0x000107c6111c(auStack_70,auStack_68);
      func_0x000107c4ec5c(puVar5);
      func_0x000107c61180();
      lVar3 = lVar2;
      func_0x000107c43524();
      func_0x000107c61180();
      lVar6 = lVar3;
      func_0x000107c4d2d4();
      func_0x000107c61170(lVar3);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar4);
      puVar5 = PTR__OBJC_CLASS___NSSet_1126ae870;
      func_0x000107c610f4(PTR__OBJC_CLASS___NSSet_1126ae870);
      lVar2 = param_1;
      func_0x000107c4ec80(param_1);
      func_0x000107c61180();
      lVar3 = lVar2;
      func_0x000107c3ea84();
      func_0x000107c61180();
      func_0x000107c45788(puVar5);
      func_0x000107c4cfa4(lVar6);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(lVar2);
      lVar2 = lVar6;
      func_0x000107c3db80();
      func_0x000107c61180();
      lVar3 = lVar2;
      func_0x000107c40808();
      puVar5 = PTR_PTR_1126bf2d8;
      if (lVar3 == 0) {
        func_0x000107c610f4(PTR_PTR_1126bf2d8);
        lVar3 = param_1;
        func_0x000107c4ec80(param_1);
        func_0x000107c61180();
        lVar4 = lVar3;
        func_0x000107c443d0();
        func_0x000107c61180();
        lVar8 = param_1;
        func_0x000107c4ec80(param_1);
        func_0x000107c61180();
        lVar9 = lVar8;
        func_0x000107c5e2b0();
        func_0x000107c61180();
        lVar10 = param_1;
        func_0x000107c4ec80(param_1);
        func_0x000107c61180();
        lVar11 = lVar10;
        func_0x000107c3ea84();
        func_0x000107c61180();
        lVar12 = param_1;
        func_0x000107c4ec80(param_1);
        func_0x000107c61180();
        func_0x000107c4ddac();
        func_0x000107c4867c(puVar5);
        func_0x000107c61170(lVar12);
        func_0x000107c61170(lVar11);
        func_0x000107c61170(lVar10);
        func_0x000107c61170(lVar9);
        func_0x000107c61170(lVar8);
        func_0x000107c61170(lVar4);
        func_0x000107c61170(lVar3);
        uVar7 = 0x19;
        func_0x000107c60f2c(0x19,0);
        func_0x000107c61180();
        func_0x000107c5d538(param_1);
      }
      else {
        func_0x000107c610f4();
        lVar3 = param_1;
        func_0x000107c4ec80(param_1);
        func_0x000107c61180();
        func_0x000107c443c8();
        lVar4 = param_1;
        func_0x000107c4ec80(param_1);
        func_0x000107c61180();
        lVar8 = lVar4;
        func_0x000107c443d0();
        func_0x000107c61180();
        lVar9 = param_1;
        func_0x000107c4ec80(param_1);
        func_0x000107c61180();
        lVar10 = lVar9;
        func_0x000107c3ea84();
        func_0x000107c61180();
        lVar11 = param_1;
        func_0x000107c4ec80(param_1);
        func_0x000107c61180();
        func_0x000107c4ddac();
        func_0x000107c4867c(puVar5);
        func_0x000107c61170(lVar11);
        func_0x000107c61170(lVar10);
        func_0x000107c61170(lVar9);
        func_0x000107c61170(lVar8);
        func_0x000107c61170(lVar4);
        func_0x000107c61170(lVar3);
        uVar7 = 0x19;
        func_0x000107c60f2c(0x19,0);
        func_0x000107c61180();
        func_0x000107c5d538(param_1);
      }
      func_0x000107c61170(uVar7);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(lVar6);
      func_0x000107c61120(auStack_70);
      func_0x000107c61120(auStack_68);
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 100588640; end: 100588647; -[SCLocationSharingPreferences sharingAudience] */

undefined8 FUN_100588640(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100588648; end: 1005886af; -[SIGHeader setTooltipPresenter:] */

/* WARNING: Possible PIC construction at 0x000100588698: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010058869c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100588648(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_1127949b8;
  func_0x000107c61174(param_3);
  func_0x000107c611a0(param_1 + lVar1,param_3);
  func_0x000107c61174();
  func_0x000107c59ebc(*(undefined8 *)(param_1 + _DAT_1127949b4));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1005886b0; end: 10058873b;  */

void FUN_1005886b0(void)

{
  int iVar1;
  undefined *puVar2;
  
  func_0x000107c61168();
  if ((bRam00000001137f7370 & 1) == 0) {
    iVar1 = 0x137f7370;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      func_0x000107c61160();
      puRam00000001137f7368 = puVar2;
      func_0x000107c60e4c(0x1137f7370);
    }
  }
  puVar2 = puRam00000001137f7368;
  func_0x000107c61174(puRam00000001137f7368);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10058873c; end: 100588757; -[SIGHeader setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10058873c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127949c0,param_3);
  return;
}



/* Entry: 100588758; end: 100588783; +[SCGrapheneFideliusMetric dbv2LoadLatency] */

void FUN_100588758(void)

{
  func_0x000107c610f4(PTR_PTR_1126c04d8);
  func_0x000107c46d68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100588784; end: 1005888db; -[SCFideliusFriendDeviceInfoCacheV2 initWithDB:performer:] */

undefined1 *
FUN_100588784(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar2 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puVar1 = &UNK_10f30dadc;
  FUN_1000ba800(&UNK_10f30dadc);
  puStack_48 = PTR_PTR_1126eaef8;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar3 = *(undefined8 *)((long)puVar2 + 8);
    *(undefined8 *)((long)puVar2 + 8) = param_3;
    func_0x000107c61170(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar2 + 0x18);
    *(undefined **)((long)puVar2 + 0x18) = puVar4;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_4);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x10);
    *(undefined8 *)((long)puVar2 + 0x10) = param_4;
    func_0x000107c61170(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar2 + 0x20);
    *(undefined **)((long)puVar2 + 0x20) = puVar4;
    func_0x000107c61170(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x000107c520a4();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar2 + 0x28);
    *(undefined **)((long)puVar2 + 0x28) = puVar4;
    func_0x000107c61170(uVar3);
  }
  func_0x0001000e2a84(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 1005888dc; end: 100588903; -[SCFideliusUserDatabaseManager fidDbV2] */

void FUN_1005888dc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100588904; end: 100588cc3; -[SCFideliusEncryptedDatabaseV2 getFideliusUserIdentityWithHashedBeta:] */

void FUN_100588904(double param_1,undefined *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  double dVar8;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  
  func_0x000107c61174(param_4);
  puVar1 = &UNK_10f30c957;
  FUN_1000ba800(&UNK_10f30c957);
  func_0x000107c6071c();
  puVar2 = param_2;
  func_0x000107c3b46c();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c51804(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61180();
    func_0x000107c3be18(param_2);
    puVar7 = (undefined *)0x0;
    goto LAB_100588b68;
  }
  uVar6 = *(undefined8 *)(param_2 + 8);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1005fb5f4;
  puStack_80 = &UNK_1108c0420;
  func_0x000107c61174(puVar2);
  puStack_78 = puVar2;
  FUN_100589538(uVar6,0,&puStack_98);
  func_0x000107c61180();
  puStack_c0 = &uStack_c8;
  uStack_c8 = 0;
  dVar8 = 1.02270250269256e-312;
  uStack_b8 = 0x3032000000;
  pcStack_b0 = FUN_1004547d4;
  uStack_a8 = 0x100588750;
  uStack_a0 = 0;
  puStack_f0 = &uStack_f8;
  uStack_f8 = 0;
  uStack_e8 = 0x3032000000;
  pcStack_e0 = FUN_1004547d4;
  uStack_d8 = 0x100588750;
  uStack_d0 = 0;
  func_0x000107c4c754();
  if (puStack_f0[5] != 0) goto LAB_100588a58;
  lVar4 = puStack_c0[5];
  func_0x000107c40808();
  if (lVar4 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    if (puStack_f0[5] == 0) {
      lVar4 = puStack_c0[5];
      func_0x000107c40808();
      if (lVar4 != 1) goto LAB_100588a58;
      uVar3 = puStack_c0[5];
      func_0x000107c43638(uVar3);
      func_0x000107c61180();
      puVar7 = param_2;
      func_0x000107c3ca7c(param_2);
      func_0x000107c61180();
      func_0x000107c61170(uVar3);
      func_0x000107c6071c();
      puVar5 = *(undefined **)(param_2 + 0x18);
      func_0x000107c5c734(puVar5);
      func_0x000107c61180();
      func_0x000107c4baec(dVar8 - param_1);
    }
    else {
LAB_100588a58:
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c40808();
      func_0x000107c51804(puVar5);
      func_0x000107c61180();
      func_0x000107c3be18(param_2);
      uVar3 = puStack_c0[5];
      func_0x000107c43638(uVar3);
      func_0x000107c61180();
      func_0x000107c3ca7c(param_2);
      func_0x000107c61180();
      func_0x000107c61170(uVar3);
      puVar7 = param_2;
    }
    func_0x000107c61170(puVar5);
  }
  func_0x000107c60bcc(&uStack_f8,8);
  func_0x000107c61170(uStack_d0);
  func_0x000107c60bcc(&uStack_c8,8);
  func_0x000107c61170(uStack_a0);
  func_0x000107c61170(uVar6);
  puVar5 = puStack_78;
LAB_100588b68:
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar2);
  func_0x0001000e2a84(puVar1);
  func_0x000107c61170(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 100588cc4; end: 100588dbf; -[SCFideliusEncryptedDatabaseV2 _deterministicEncryptString:] */

void FUN_100588cc4(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  func_0x000107c61174(param_3);
  puVar1 = &UNK_10f30d9c3;
  FUN_1000ba800(&UNK_10f30d9c3);
  if (param_3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar2 = param_3;
    func_0x000107c412d4(param_3);
    func_0x000107c61180();
    lVar3 = *(long *)(param_1 + 0x10);
    FUN_100588dc0(lVar3,lVar2,0);
    func_0x000107c61180();
    if (lVar3 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar3;
      func_0x000107c3e684(lVar3);
      func_0x000107c61180();
    }
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar2);
  }
  func_0x0001000e2a84(puVar1);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 100588dc0; end: 100588f2b;  */

void FUN_100588dc0(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  lVar5 = param_2;
  func_0x000107c61174();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  lVar1 = param_1;
  FUN_100588f2c();
  lVar2 = lVar1;
  FUN_100589080();
  func_0x000107c61180();
  if (lVar2 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    lVar3 = param_2;
    func_0x000107c4adac();
    FUN_1005892b8();
    func_0x000107c61180();
    if (lVar3 == 0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      lVar4 = param_2;
      FUN_1005893fc(param_2,lVar3);
      func_0x000107c61180();
      if (lVar4 == 0) {
        puVar6 = (undefined *)0x0;
      }
      else {
        puVar6 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
        func_0x000107c412fc(PTR__OBJC_CLASS___NSMutableData_1126b4958);
        func_0x000107c61180();
        func_0x000107c3def0();
      }
      func_0x000107c61170(lVar4);
    }
    func_0x000107c61170(lVar3);
  }
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 100588f2c; end: 10058903b;  */

undefined1  [16] FUN_100588f2c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  func_0x000107c61174();
  lVar1 = param_1;
  func_0x000107c4adac();
  lVar3 = param_1;
  if (lVar1 == 0x20) {
    func_0x000107c40794(param_1);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x000107c412e4(PTR__OBJC_CLASS___NSData_1126ae778);
    func_0x000107c61180();
    func_0x000107c31288(param_1,puVar2,0,0x20);
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
  }
  lVar1 = lVar3;
  func_0x000107c5c27c(lVar3);
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c5c27c(lVar3);
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  func_0x000107c61170(param_1);
  auVar5._8_8_ = lVar4;
  auVar5._0_8_ = lVar1;
  return auVar5;
}



/* Entry: 10058903c; end: 10058907f; -[SIGSubscreenView scrollViewTopAnchor] */

void FUN_10058903c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c515ac();
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100589080; end: 1005892b7;  */

void FUN_100589080(ulong param_1,undefined *param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x000107c61174();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  uVar1 = param_1;
  func_0x000107c4adac();
  if (uVar1 < 0x10) {
    uVar3 = 0;
  }
  else {
    if (param_3 == 0) {
      puVar2 = param_2;
      func_0x000107c40794(param_2);
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
      func_0x000107c412fc(PTR__OBJC_CLASS___NSMutableData_1126b4958);
      func_0x000107c61180();
      func_0x000107c3def0();
    }
    uVar1 = param_1;
    func_0x000100589174(param_1,puVar2);
    func_0x000107c61180();
    uVar3 = uVar1;
    func_0x000107c5c27c();
    func_0x000107c61180();
    func_0x000107c61170(uVar1);
    func_0x000107c61170(puVar2);
  }
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1005892b8; end: 1005893fb;  */

void FUN_1005892b8(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
  func_0x000107c61160(PTR__OBJC_CLASS___NSMutableData_1126b4958);
  lVar5 = 0;
  do {
    puVar2 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
    func_0x000107c41304(PTR__OBJC_CLASS___NSMutableData_1126b4958);
    func_0x000107c61180();
    func_0x000107c50150();
    puVar3 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
    func_0x000107c412fc(PTR__OBJC_CLASS___NSMutableData_1126b4958);
    func_0x000107c61180();
    func_0x000107c3def0();
    uVar4 = param_2;
    func_0x000100589174(param_2,puVar3);
    func_0x000107c61180();
    func_0x000107c3def0(puVar1);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar2);
    lVar5 = lVar5 + 1;
  } while ((param_1 >> 5) + 1 != lVar5);
  puVar2 = puVar1;
  func_0x000107c5c27c(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1005893fc; end: 100589537;  */

void FUN_1005893fc(ulong param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  
  func_0x000107c61174();
  func_0x000107c61174(param_2);
  puVar1 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
  func_0x000107c4adac(param_1);
  func_0x000107c41304();
  func_0x000107c61180();
  uVar2 = param_1;
  func_0x000107c4adac();
  uVar3 = param_2;
  func_0x000107c4adac();
  if (uVar2 == uVar3) {
    puVar5 = puVar1;
    func_0x000107c61178();
    func_0x000107c4d2d0();
    uVar2 = param_1;
    func_0x000107c61178();
    func_0x000107c3eea8();
    uVar3 = param_2;
    func_0x000107c61178();
    func_0x000107c3eea8();
    uVar6 = param_1;
    func_0x000107c4adac();
    if (uVar6 != 0) {
      uVar6 = 0;
      do {
        puVar5[uVar6] = *(byte *)(uVar3 + uVar6) ^ *(byte *)(uVar2 + uVar6);
        uVar6 = uVar6 + 1;
        uVar4 = param_1;
        func_0x000107c4adac();
      } while (uVar6 < uVar4);
    }
    puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x000107c4adac(param_1);
    func_0x000107c412e4(puVar5);
    func_0x000107c61180();
  }
  else {
    puVar5 = (undefined *)0x0;
  }
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 100589538; end: 1005895f7;  */

void FUN_100589538(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  if (param_1 != 0) {
    if (param_2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined8 *)(param_2 + 8);
    }
    func_0x000107c61174(uVar1);
    FUN_1005895f8(param_1,uVar1,0,0,0,param_3);
    func_0x000107c61180();
    func_0x000107c61170(uVar1);
  }
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1005895f8; end: 100589c63;  */

void FUN_1005895f8(long param_1,long param_2,ulong param_3,undefined8 param_4,ulong param_5,
                  long param_6)

{
  long *plVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  long ****pppplVar6;
  long ****pppplVar7;
  long **pplVar8;
  undefined *puVar9;
  long ****pppplVar10;
  long lVar11;
  long lVar12;
  long ****pppplVar13;
  long ****pppplVar14;
  long ****pppplVar15;
  long lVar16;
  long ***ppplVar17;
  long ****pppplVar18;
  long ****pppplVar19;
  long ***ppplStack_80;
  long ***ppplStack_78;
  long **pplStack_70;
  
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_6);
  puVar9 = (undefined *)0x0;
  if (param_1 == 0) goto LAB_100589a94;
  if (((param_3 & 1) == 0) && (*(char *)(param_1 + 0x18) != '\x01')) {
    func_0x000107c611ec(param_1 + 0x50);
    if (*(long *)(param_1 + 0x30) == 0) {
      pppplVar19 = (long ****)(param_1 + 0x50);
      func_0x000107c611f0(pppplVar19);
LAB_100589ad0:
      pppplVar18 = pppplVar19;
      pppplVar19 = (long ****)0x0;
    }
    else {
      func_0x000107c60f38(*(undefined8 *)(param_1 + 0x38));
      pppplVar18 = *(long *****)(param_1 + 0x30);
      if (pppplVar18 == (long ****)0x0) {
        pppplVar19 = (long ****)0x0;
      }
      else {
        pppplVar19 = pppplVar18;
        func_0x000107c4aa28();
        func_0x000107c61180();
        if (pppplVar19 != (long ****)0x0) {
          func_0x000107c4ff54(pppplVar18);
        }
      }
      pppplVar18 = (long ****)(param_1 + 0x50);
      func_0x000107c611f0(pppplVar18);
      if (pppplVar19 == (long ****)0x0) {
        pppplVar18 = (long ****)PTR_PTR_1126e03e0;
        if (*(long *)(param_1 + 0x20) == 0) {
          func_0x000107c610f4();
          pppplVar19 = *(long *****)(param_1 + 8);
          uVar2 = *(undefined8 *)(param_1 + 0x10);
          func_0x000107c5193c(pppplVar19);
          func_0x000107c61180();
          FUN_10045dbf0(pppplVar18,uVar2,pppplVar19,0,1,0);
          func_0x000107c61170(pppplVar19);
        }
        else {
          func_0x000107c610f4();
          ppplStack_78 = *(long ****)(param_1 + 0x28);
          ppplStack_80 = *(long ****)(param_1 + 0x20);
          if (*(long *)(param_1 + 0x28) != 0) {
            plVar1 = (long *)(*(long *)(param_1 + 0x28) + 8);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar5) {
                *plVar1 = *plVar1 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          func_0x000107c30758();
          pppplVar10 = (long ****)ppplStack_78;
          pppplVar19 = pppplVar18;
          if ((long ****)ppplStack_78 != (long ****)0x0) {
            pppplVar13 = (long ****)(ppplStack_78 + 1);
            do {
              ppplVar17 = *pppplVar13;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(pppplVar13,0x10);
              if (bVar5) {
                *pppplVar13 = (long ***)((long)ppplVar17 + -1);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (ppplVar17 == (long ***)0x0) {
              (*(code *)(*ppplStack_78)[2])(ppplStack_78);
              func_0x000107c60d68(pppplVar10);
              pppplVar19 = pppplVar10;
            }
          }
        }
        if (pppplVar18 == (long ****)0x0) goto LAB_100589ad0;
        pppplVar19 = *(long *****)(param_1 + 8);
        func_0x000107c610f4();
        func_0x000107c48968();
        func_0x000107c61170(pppplVar18);
      }
    }
  }
  else {
    func_0x000107c611ec(param_1 + 0x4c);
    pppplVar19 = *(long *****)(param_1 + 0x40);
    pppplVar18 = pppplVar19;
    func_0x000107c61174(pppplVar19);
  }
  if (pppplVar19 == (long ****)0x0) {
    FUN_1005ffac0(param_1,0,param_3);
    puVar9 = PTR_PTR_1126af5d0;
    func_0x000107c61168(PTR_PTR_1126c03b0);
    pppplVar10 = (long ****)PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c42a58(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c61180();
    func_0x000107c42d78(puVar9);
    func_0x000107c61180();
  }
  else {
    if ((param_2 == 0) || ((param_5 & 1) == 0)) {
      if (param_2 != 0) goto LAB_1005898a8;
      pppplVar18 = (long ****)0x0;
      bVar5 = false;
    }
    else {
      pppplVar18 = pppplVar19;
      func_0x000107c43fa4();
      func_0x000107c61180();
      pppplVar10 = pppplVar18;
      func_0x000107c43fd0();
      func_0x000107c61170(pppplVar18);
      uVar3 = *(undefined4 *)(pppplVar10 + 0x13);
      if (*(char *)((long)pppplVar10 + 0x10f) < '\0') {
        FUN_100033dac(&ppplStack_80,pppplVar10[0x1f],pppplVar10[0x20]);
      }
      else {
        ppplStack_78 = pppplVar10[0x20];
        ppplStack_80 = pppplVar10[0x1f];
        pplStack_70 = (long **)pppplVar10[0x21];
      }
      FUN_100061168();
      pplVar8 = pplStack_70;
      pppplVar10 = (long ****)ppplStack_78;
      pppplVar13 = (long ****)ppplStack_80;
      pppplVar18 = (long ****)PTR_DAT_113404410;
      pppplVar14 = (long ****)((ulong)pplStack_70 >> 0x38);
      lVar11 = param_2;
      func_0x000107c61178(param_2);
      func_0x000107c3ac4c();
      if (-1 < (long)pplVar8) {
        pppplVar10 = pppplVar14;
        pppplVar13 = &ppplStack_80;
      }
      lVar12 = lVar11;
      func_0x000107c613d0();
      (**(code **)((long)*pppplVar18 + 0x38))
                (pppplVar18,uVar3,pppplVar13,pppplVar10,lVar11,lVar12,param_3,param_4);
      if ((long)pplStack_70 < 0) {
        pppplVar18 = (long ****)ppplStack_80;
        func_0x000107c60e14(ppplStack_80);
      }
LAB_1005898a8:
      bVar5 = true;
      func_0x000107c60d9c();
    }
    pppplVar10 = pppplVar19;
    func_0x000107c43fa4();
    func_0x000107c61180();
    func_0x000107c3e828();
    lVar11 = param_6;
    (**(code **)(param_6 + 0x10))(param_6,pppplVar19);
    func_0x000107c61180();
    pppplVar13 = pppplVar10;
    func_0x000107c4403c();
    func_0x000107c61180();
    pppplVar14 = pppplVar10;
    if (pppplVar13 == (long ****)0x0) {
      func_0x000107c3fe60(pppplVar10);
      pppplVar13 = pppplVar10;
      func_0x000107c4403c();
      func_0x000107c61180();
      func_0x000107c54654(pppplVar10);
    }
    else {
      func_0x000107c54654(pppplVar10);
      func_0x000107c508c8(pppplVar10);
    }
    if (bVar5) {
      func_0x000107c60d9c();
      pppplVar15 = pppplVar10;
      func_0x000107c43fd0();
      uVar3 = *(undefined4 *)(pppplVar15 + 0x13);
      if (*(char *)((long)pppplVar15 + 0x10f) < '\0') {
        FUN_100033dac(&ppplStack_80,pppplVar15[0x1f],pppplVar15[0x20]);
      }
      else {
        ppplStack_78 = pppplVar15[0x20];
        ppplStack_80 = pppplVar15[0x1f];
        pplStack_70 = (long **)pppplVar15[0x21];
      }
      FUN_100061168();
      pplVar8 = pplStack_70;
      pppplVar15 = (long ****)ppplStack_78;
      pppplVar6 = (long ****)ppplStack_80;
      puVar9 = PTR_DAT_113404410;
      pppplVar7 = (long ****)((ulong)pplStack_70 >> 0x38);
      lVar12 = param_2;
      func_0x000107c61178(param_2);
      func_0x000107c3ac4c();
      if (-1 < (long)pplVar8) {
        pppplVar15 = pppplVar7;
        pppplVar6 = &ppplStack_80;
      }
      lVar16 = lVar12;
      func_0x000107c613d0();
      (**(code **)(*(long *)puVar9 + 0x30))
                (puVar9,uVar3,pppplVar6,pppplVar15,lVar12,lVar16,param_3 & 0xffffffff,
                 (long)pppplVar14 - (long)pppplVar18);
      if ((long)pplStack_70 < 0) {
        func_0x000107c60e14(ppplStack_80);
      }
      param_3 = param_3 & 0xffffffff;
    }
    FUN_1005ffac0(param_1,pppplVar19,param_3);
    puVar9 = PTR_PTR_1126af5d0;
    if (pppplVar13 == (long ****)0x0) {
      func_0x000107c5c3c8(PTR_PTR_1126af5d0);
      func_0x000107c61180();
    }
    else {
      func_0x000107c42d78();
      func_0x000107c61180();
    }
    func_0x000107c61170(pppplVar13);
    func_0x000107c61170(lVar11);
  }
  func_0x000107c61170(pppplVar10);
  func_0x000107c61170(pppplVar19);
LAB_100589a94:
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 100589c64; end: 100589ca3;  */

undefined1 FUN_100589c64(void)

{
  if (lRam00000001137fbfd8 != -1) {
    FUN_10002a2fc(0x1137fbfd8,&PTR___NSConcreteGlobalBlock_110d66278);
  }
  return uRam00000001137fbfd0;
}



/* Entry: 100589ca4; end: 100589d2f; -[SIGSubscreenView _stylize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100589ca4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127951e8;
  FUN_100589c64();
  lVar1 = param_1;
  func_0x000107c3b170(param_1);
  func_0x000107c61180();
  func_0x000107c52b50(*(undefined8 *)(param_1 + _DAT_1127951c8));
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127951cc),PTR_s_setHidden__1126479f8,
             *(long *)(param_1 + lVar2) != 1 || 2 < lRam00000001138466f0);
  return;
}



/* Entry: 100589d30; end: 100589db7;  */

undefined1 FUN_100589d30(void)

{
  if (lRam00000001137fc120 != -1) {
    FUN_10002a2fc(0x1137fc120,&PTR___NSConcreteGlobalBlock_110d665f8);
  }
  return uRam00000001137fc00f;
}



/* Entry: 100589db8; end: 100589eb7; -[SIGSubscreenView _contentBackgroundColorForStyle:themedBackgroundEnabled:] */

void FUN_100589db8(undefined8 param_1,undefined8 param_2,long param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  if (param_3 == 1) {
    if (param_4 == 0) {
      uVar4 = 0x3feefeff00000000;
      uVar5 = 0x3fef1f1f20000000;
      uVar6 = 0x3fef3f3f40000000;
LAB_100589e3c:
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x000107c3fde8(uVar4,uVar5,uVar6,0x3ff0000000000000);
      func_0x000107c61180();
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x000107c3fde8(0x3fb2121220000000,0x3fb2121220000000,0x3fb2121220000000,
                          0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70);
      func_0x000107c61180();
      puVar1 = puVar2;
      func_0x000107c30a84(puVar2,puVar3,0);
      func_0x000107c61180();
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar2);
      goto LAB_100589ea4;
    }
    uVar4 = 0x28;
  }
  else {
    if (param_3 != 0) {
      func_0x000107c3fa94(PTR__OBJC_CLASS___UIColor_1126aea70);
      func_0x000107c61180();
      goto LAB_100589ea4;
    }
    if (param_4 == 0) {
      uVar4 = 0x3ff0000000000000;
      uVar5 = 0x3ff0000000000000;
      uVar6 = 0x3ff0000000000000;
      goto LAB_100589e3c;
    }
    uVar4 = 0x21;
  }
  func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar4);
  func_0x000107c61180();
LAB_100589ea4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100589eb8; end: 10058a0ef;  */

void FUN_100589eb8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  func_0x000107c61174();
  iVar2 = 0x10dafe18;
  func_0x000107c49d0c(&PTR____CFConstantStringClassReference_110dafe18,param_2,param_1);
  uVar1 = 0;
  if (iVar2 == 0) {
    uVar1 = param_1;
  }
  func_0x000107c61174(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10058a0f0; end: 10058a2fb; -[SCCarrierNetworkInfoProviderImpl maxConnectionTypeWithinOneWeek] */

/* WARNING: Possible PIC construction at 0x00010058a370: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010058a374) */

undefined * FUN_10058a0f0(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined **ppuVar14;
  double dVar15;
  double dVar16;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = *(undefined ***)(param_1 + 0x30);
  func_0x000100589f50();
  func_0x000107c61180();
  ppuVar3 = ppuVar2;
  func_0x000107c49804();
  ppuVar4 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d38e8;
  func_0x000107c49804();
  ppuVar9 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d38e8;
  if ((int)ppuVar4 < (int)ppuVar3) {
    func_0x000107c61174(ppuVar2);
    ppuVar9 = ppuVar2;
  }
  dVar16 = 0.0;
  lVar12 = *(long *)(param_1 + 0x10);
  func_0x000107c61174(lVar12);
  lVar5 = lVar12;
  func_0x000107c4080c();
  lVar1 = lRam0000000000000000;
  while (lVar5 != 0) {
    lVar13 = 0;
    do {
      dVar15 = dVar16;
      if (lRam0000000000000000 != lVar1) {
        func_0x000107c61128(lVar12);
        dVar15 = dVar16;
      }
      ppuVar14 = *(undefined ***)(lVar13 * 8);
      puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x000107c41324(PTR__OBJC_CLASS___NSDate_1126ae770);
      func_0x000107c61180();
      func_0x000107c5c9e4();
      uVar7 = *(undefined8 *)(param_1 + 0x10);
      dVar16 = dVar15;
      func_0x000107c4d9e8();
      func_0x000107c61180();
      uVar8 = uVar7;
      func_0x000107c49804();
      func_0x000107c61170(uVar7);
      func_0x000107c61170(puVar6);
      ppuVar3 = ppuVar14;
      func_0x000107c49804();
      ppuVar4 = ppuVar9;
      func_0x000107c49804();
      if (((int)ppuVar4 < (int)ppuVar3) && (dVar16 = (double)(int)uVar8, dVar15 <= dVar16)) {
        func_0x000107c61174(ppuVar14);
        func_0x000107c61170(ppuVar9);
        ppuVar9 = ppuVar14;
      }
      lVar13 = lVar13 + 1;
    } while (lVar5 != lVar13);
    lVar5 = lVar12;
    func_0x000107c4080c();
  }
  func_0x000107c61170(lVar12);
  ppuVar4 = ppuVar2;
  func_0x000107c3cc24(param_1);
  ppuVar3 = ppuVar9;
  func_0x000107c49804();
  func_0x000107c61170(ppuVar2);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return (undefined *)(long)(int)ppuVar3;
  }
  func_0x000107c60e78();
  puVar10 = PTR__OBJC_CLASS___NSDate_1126ae770;
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c61174(ppuVar4);
  func_0x000107c41324(puVar10);
  func_0x000107c61180();
  func_0x000107c5c9e4();
  func_0x000107c4d954(dVar16 + 604800.0,puVar6);
  func_0x000107c61180();
  puVar10 = ppuVar9[2];
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (puVar10,PTR_s_setObject_forKeyedSubscript__112651bb8,puVar6,ppuVar4);
  return puVar10;
}



/* Entry: 10058a2fc; end: 10058a3a7; -[SCCarrierNetworkInfoProviderImpl _updateMaxConnectionType:] */

/* WARNING: Possible PIC construction at 0x00010058a370: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010058a374) */

void FUN_10058a2fc(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c61174(param_4);
  func_0x000107c41324(puVar1);
  func_0x000107c61180();
  func_0x000107c5c9e4();
  func_0x000107c4d954(param_1 + 604800.0,puVar2);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_2 + 0x10),PTR_s_setObject_forKeyedSubscript__112651bb8,puVar2,
             param_4);
  return;
}



/* Entry: 10058a3a8; end: 10058a3e7; -[SCCarrierNetworkInfoProviderImpl realTimeRadioAccessConnectionType] */

long FUN_10058a3a8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x000100589f50(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c49804();
  func_0x000107c61170(uVar1);
  return (long)(int)uVar2;
}



/* Entry: 10058a3e8; end: 10058a59b; -[SCCarrierNetworkInfo initWithCarrierName:carrierMCC:carrierMNC:carrierISOCountry:maxConnectionTypeWithinOneWeek:realTimeRadioAccessConnectionType:realTimeRadioAccessConnectionTechnology:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10058a3e8(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                  undefined8 param_7,undefined8 param_8,long param_9)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lStack_98;
  long lStack_90;
  long lStack_70;
  long lStack_68;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  if (param_3 == 0) {
    lStack_98 = 0;
    lStack_90 = 0;
  }
  else {
    func_0x000107c5faec();
    lStack_98 = param_2;
    lStack_90 = param_3;
  }
  if (param_4 == 0) {
    param_4 = 0;
    lVar7 = 0;
  }
  else {
    func_0x000107c5faec();
    lVar7 = param_2;
  }
  if (param_5 == 0) {
    param_5 = 0;
    lVar5 = 0;
  }
  else {
    func_0x000107c5faec();
    lVar5 = param_2;
  }
  lVar3 = param_6;
  func_0x000107c61174();
  lVar4 = param_9;
  func_0x000107c61174();
  if (lVar3 == 0) {
    param_6 = 0;
    lVar3 = 0;
    lVar6 = param_2;
  }
  else {
    func_0x000107c5faec();
    lVar6 = param_2;
    func_0x000107c61170(lVar3);
    lVar3 = param_2;
  }
  if (lVar4 == 0) {
    param_9 = 0;
    lVar6 = 0;
  }
  else {
    func_0x000107c5faec();
    func_0x000107c61170(lVar4);
  }
  plVar1 = (long *)(param_1 + _DAT_113080b48);
  *plVar1 = lStack_90;
  plVar1[1] = lStack_98;
  plVar1 = (long *)(param_1 + _DAT_113080b50);
  *plVar1 = param_4;
  plVar1[1] = lVar7;
  plVar1 = (long *)(param_1 + _DAT_113080b58);
  *plVar1 = param_5;
  plVar1[1] = lVar5;
  plVar1 = (long *)(param_1 + _DAT_113080b60);
  *plVar1 = param_6;
  plVar1[1] = lVar3;
  *(undefined8 *)(param_1 + _DAT_113080b68) = param_7;
  *(undefined8 *)(param_1 + _DAT_113080b70) = param_8;
  plVar1 = (long *)(param_1 + _DAT_113080b78);
  *plVar1 = param_9;
  plVar1[1] = lVar6;
  lStack_70 = param_1;
  lStack_68 = lVar2;
  func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10058a59c; end: 10058a5a3; -[SCAudioSessionServices session] */

undefined8 FUN_10058a59c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10058a5a4; end: 10058a5b3; -[SCSystemLocationServices locationOperationsUpdateObservable] */

undefined8 FUN_10058a5a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10058a5b4; end: 10058a637;  */

void FUN_10058a5b4(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10058a638; end: 10058a65f; -[SCLocationManager locationOperationUpdateObservable] */

void FUN_10058a638(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10058a660; end: 10058a663;  */

void FUN_10058a660(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10058a664; end: 10058aebf; -[SCLocationSharingServiceV2 initWithUserInfoProvider:locationAuthorizationProvider:userLocationPermissionsManager:locationProvider:locationSharingPreferencesProvider:audioSession:locationOperationsUpdateObservable:appStartExperimentReader:locationRPCManager:applicationLifecycleEvents:featureSettingsService:] */

undefined8 *
FUN_10058a664(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,ulong param_14)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_1b8 [8];
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined1 auStack_160 [8];
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined1 auStack_138 [8];
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  puStack_80 = PTR_PTR_1126edf90;
  puVar2 = &uStack_88;
  uStack_88 = param_2;
  func_0x000107c61154(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    func_0x000107c61174(param_4);
    uVar3 = puVar2[6];
    puVar2[6] = param_4;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_7);
    uVar3 = puVar2[1];
    puVar2[1] = param_7;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_5);
    uVar3 = puVar2[2];
    puVar2[2] = param_5;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_8);
    uVar3 = puVar2[4];
    puVar2[4] = param_8;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_9);
    uVar3 = puVar2[5];
    puVar2[5] = param_9;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_11);
    uVar3 = puVar2[7];
    puVar2[7] = param_11;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_12);
    uVar3 = puVar2[8];
    puVar2[8] = param_12;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_6);
    uVar3 = puVar2[3];
    puVar2[3] = param_6;
    func_0x000107c61170(uVar3);
    puVar4 = PTR_PTR_1126c5e18;
    func_0x000107c610fc();
    uVar3 = puVar2[0x1f];
    puVar2[0x1f] = puVar4;
    func_0x000107c61170(uVar3);
    uVar5 = param_14;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar6 = uVar5;
    func_0x000107c437cc();
    if ((uVar6 & 1) == 0) {
      *(undefined1 *)(puVar2 + 0x22) = 0;
    }
    else {
      uVar6 = param_14;
      func_0x000107c5c734();
      func_0x000107c61180();
      uVar7 = uVar6;
      func_0x000107c437d0();
      *(char *)(puVar2 + 0x22) = (char)uVar7;
      func_0x000107c61170(uVar6);
    }
    func_0x000107c61170(uVar5);
    puVar4 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61180();
    func_0x000107c470d0();
    uVar3 = puVar2[9];
    puVar2[9] = puVar4;
    func_0x000107c61170(uVar3);
    func_0x000107c61170(puVar8);
    func_0x000107c61144(auStack_90,puVar2);
    uVar9 = puVar2[2];
    func_0x000107c4e640();
    func_0x000107c61180();
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    puStack_a8 = &UNK_100c73b34;
    puStack_a0 = &UNK_11089ef90;
    func_0x000107c6111c(auStack_98,auStack_90);
    uVar3 = uVar9;
    func_0x000107c5c320();
    func_0x000107c61180();
    uVar11 = puVar2[0x17];
    puVar2[0x17] = uVar3;
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar9);
    uVar9 = puVar2[1];
    func_0x000107c4b930();
    func_0x000107c61180();
    puStack_e0 = puVar4;
    uStack_d8 = 0xc2000000;
    puStack_d0 = &UNK_105f0c220;
    puStack_c8 = &UNK_11085fbf8;
    func_0x000107c6111c(auStack_c0,auStack_90);
    uVar3 = uVar9;
    func_0x000107c5c320();
    func_0x000107c61180();
    uVar11 = puVar2[0x16];
    puVar2[0x16] = uVar3;
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar9);
    uVar9 = puVar2[1];
    func_0x000107c5dff8();
    func_0x000107c61180();
    puStack_108 = puVar4;
    uStack_100 = 0xc2000000;
    puStack_f8 = &UNK_105f0c2f8;
    puStack_f0 = &UNK_1108f8040;
    func_0x000107c6111c(auStack_e8,auStack_90);
    uVar3 = uVar9;
    func_0x000107c5c320();
    func_0x000107c61180();
    uVar11 = puVar2[0x19];
    puVar2[0x19] = uVar3;
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar9);
    uVar9 = puVar2[4];
    func_0x000107c4ec98();
    func_0x000107c61180();
    puStack_130 = puVar4;
    uStack_128 = 0xc2000000;
    puStack_120 = &UNK_105f0c340;
    puStack_118 = &UNK_1108f3470;
    func_0x000107c6111c(auStack_110,auStack_90);
    uVar3 = uVar9;
    func_0x000107c5c320();
    func_0x000107c61180();
    uVar11 = puVar2[0x18];
    puVar2[0x18] = uVar3;
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar9);
    puStack_158 = puVar4;
    uStack_150 = 0xc2000000;
    puStack_148 = &UNK_105f0c388;
    puStack_140 = &UNK_110876320;
    func_0x000107c6111c(auStack_138,auStack_90);
    uVar3 = param_10;
    func_0x000107c5c320();
    func_0x000107c61180();
    uVar9 = puVar2[0x1b];
    puVar2[0x1b] = uVar3;
    func_0x000107c61170(uVar9);
    uVar11 = puVar2[8];
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar3 = uVar11;
    func_0x000107c5c118();
    func_0x000107c61180();
    puStack_180 = puVar4;
    uStack_178 = 0xc2000000;
    puStack_170 = &UNK_105f0c468;
    puStack_168 = &UNK_110842a38;
    func_0x000107c6111c(auStack_160,auStack_90);
    uVar9 = uVar3;
    func_0x000107c5c320();
    func_0x000107c61180();
    uVar12 = puVar2[0x1c];
    puVar2[0x1c] = uVar9;
    func_0x000107c61170(uVar12);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar11);
    func_0x000107c61144(auStack_188,puVar2);
    puVar8 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar3 = puVar2[0x1e];
    puVar2[0x1e] = puVar8;
    func_0x000107c61170(uVar3);
    uVar3 = param_13;
    func_0x000107c41b80(param_13);
    func_0x000107c61180();
    puStack_1b0 = puVar4;
    uStack_1a8 = 0xc2000000;
    puStack_1a0 = &UNK_105f0c4c8;
    puStack_198 = &UNK_110846510;
    func_0x000107c6111c(auStack_190,auStack_188);
    uVar9 = uVar3;
    func_0x000107c5c320(uVar3);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar3);
    uVar3 = param_13;
    func_0x000107c419f0(param_13);
    func_0x000107c61180();
    func_0x000107c6111c(auStack_1b8,auStack_188);
    uVar9 = uVar3;
    func_0x000107c5c320(uVar3);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar3);
    puVar2[10] = 0;
    uVar1 = (undefined1)puVar2[2];
    func_0x000107c4a998();
    *(undefined1 *)(puVar2 + 0xb) = uVar1;
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c610fc();
    uVar3 = puVar2[0xc];
    puVar2[0xc] = puVar4;
    func_0x000107c61170(uVar3);
    func_0x000107c6071c();
    puVar2[0xd] = param_1;
    func_0x000107c6071c();
    puVar2[0x10] = param_1;
    puVar2[0xe] = 0x4014000000000000;
    puVar10 = puVar2;
    func_0x000107c3bb0c();
    *(byte *)(puVar2 + 0x1d) = (byte)puVar10 ^ 1;
    puVar2[0xf] = 0;
    *(undefined1 *)(puVar2 + 0x1a) = 1;
    func_0x000107c61120(auStack_1b8);
    func_0x000107c61120(auStack_190);
    func_0x000107c61120(auStack_188);
    func_0x000107c61120(auStack_160);
    func_0x000107c61120(auStack_138);
    func_0x000107c61120(auStack_110);
    func_0x000107c61120(auStack_e8);
    func_0x000107c61120(auStack_c0);
    func_0x000107c61120(auStack_98);
    func_0x000107c61120(auStack_90);
  }
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  return puVar2;
}



/* Entry: 10058aec0; end: 10058af33; -[SCGrapheneLocationPublishMetric2 init] */

undefined1 * FUN_10058aec0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126edfd8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10058af34; end: 10058af43; -[SCFeatureSettingsService footstepsOnboardingSeen] */

void FUN_10058af34(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110ed2638,0);
  return;
}



/* Entry: 10058af44; end: 10058af53; -[SCContainerViewLayoutConfig disableBorderAndCornerViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10058af44(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113083ad0);
}



/* Entry: 10058af54; end: 10058af63; -[SIGContainerView setDisableBorderAndCornerViews:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10058af54(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11278c7b4) = param_3;
  return;
}



/* Entry: 10058af64; end: 10058af8b; -[SCCarrierNetworkInfoProviderImpl currentCarrierNetworkInfo] */

void FUN_10058af64(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10058af8c; end: 10058af97; -[SCCarrierNetworkInfo carrierName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10058af8c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113080b48))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113080b48);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10058af98; end: 10058b023;  */

void FUN_10058af98(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10058b024; end: 10058b0ff;  */

void FUN_10058b024(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar1 = PTR_PTR_1126c1078;
  func_0x000107c3f6d0(PTR_PTR_1126c1078);
  func_0x000107c61180();
  puVar2 = puVar5;
  func_0x000107c4d6c4(puVar5,param_2,puVar1);
  func_0x000107c61180();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar3 = PTR_PTR_1126c1078;
  func_0x000107c3f6d4(PTR_PTR_1126c1078);
  func_0x000107c61180();
  func_0x000107c4d6c4(puVar4,param_2,puVar3);
  func_0x000107c61180();
  func_0x000107c51804(puVar5,param_2,&PTR____CFConstantStringClassReference_110dd4898);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10058b100; end: 10058b16b; +[SCCarrierNetworkInfoStaticProvider carrierMCC] */

void FUN_10058b100(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = uRam00000001137f46a0;
  func_0x000107c5c734(uRam00000001137f46a0);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c40eec();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c3f6d0();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10058b16c; end: 10058b177; -[SCCarrierNetworkInfo carrierMCC] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10058b16c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113080b50))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113080b50);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10058b178; end: 10058b1e3; +[SCCarrierNetworkInfoStaticProvider carrierMNC] */

void FUN_10058b178(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = uRam00000001137f46a0;
  func_0x000107c5c734(uRam00000001137f46a0);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c40eec();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c3f6d4();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10058b1e4; end: 10058b1fb; -[SCCarrierNetworkInfo carrierMNC] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10058b1e4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113080b58))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113080b58);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10058b1fc; end: 10058b263; +[SCSCOREDeviceInfo descriptor] */

void FUN_10058b1fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f7610 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c7e290,
                        &PTR____CFConstantStringClassReference_110f04078,&PTR_DAT_1133b95b8,
                        &PTR_DAT_1133b95d0,2,0x18,0x1c);
    puRam00000001137f7610 = puVar1;
  }
  return;
}



/* Entry: 10058b264; end: 10058b31b; -[SCUserLocationProvider locationUpdateObservable] */

void FUN_10058b264(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x000107c61144(auStack_28,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c41654(puVar1);
  func_0x000107c61180();
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10058b31c; end: 10058b35b;  */

void FUN_10058b31c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3b2c8();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10058b35c; end: 10058b3b7; -[SCUserLocationProvider _createLocationUpdateObservable] */

void FUN_10058b35c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126ae568;
    func_0x000107c610fc();
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar1;
    func_0x000107c61170(uVar2);
    func_0x000107c3d7b4(*(undefined8 *)(param_1 + 0x20),param_2,param_1);
    lVar3 = *(long *)(param_1 + 8);
  }
  func_0x000107c61174(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10058b3b8; end: 10058b56b; -[SCLocationManager addObserver:] */

void FUN_10058b3b8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  func_0x000107c61174(param_3);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar1 = param_3;
  func_0x000107c4b8c0();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c42e78();
  func_0x000107c61180();
  func_0x000107c51804(puVar3);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  puVar4 = PTR_PTR_1126bc330;
  func_0x000107c5cd50();
  func_0x000107c61180();
  func_0x000107c3e740();
  lVar1 = param_1;
  func_0x000107c49a8c();
  if ((int)lVar1 != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x68);
    lVar1 = param_3;
    func_0x000107c61158(param_3);
    func_0x000107c60b14();
    func_0x000107c61180();
    func_0x000105604014(uVar6,lVar1,1);
    func_0x000107c61170(lVar1);
  }
  if (param_3 != 0) {
    puVar5 = PTR_PTR_1126bc338;
    func_0x000107c610fc(PTR_PTR_1126bc338);
    func_0x000107c56bfc();
    func_0x000107c61188(param_3,0x1136bd378,puVar5,0x301);
    func_0x000107c61170(puVar5);
  }
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c61174(puVar4);
  func_0x000107c61174(param_3);
  func_0x000107c4e524(uVar6);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(puVar3);
  return;
}



/* Entry: 10058b56c; end: 10058b5cf; -[SCUserLocationProvider locationObserverAttributedFeature] */

void FUN_10058b56c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126aebf0;
  func_0x000107c610f4(PTR_PTR_1126aebf0);
  func_0x000107c61158(param_1);
  func_0x000107c60b14();
  func_0x000107c61180();
  func_0x000107c46858(puVar1,param_2,param_1,0x18);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10058b5d0; end: 10058b643; -[SCAttributedFeature initWithFeatureName:jiraProject:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10058b5d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_1 + _DAT_11309aa88);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_11309aa90) = param_4;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10058b644; end: 10058b68f; -[SCAttributedFeature featureName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10058b644(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11309aa88);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11309aa88))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10058b690; end: 10058b6a3; -[SCAttributedFeature .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10058b690(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11309aa88 + 8))
  ;
  return;
}



/* Entry: 10058b6a4; end: 10058b6eb; +[SCMapAsyncTrace traceWithName:] */

void FUN_10058b6a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c610f4(param_1);
  func_0x000107c478bc();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10058b6ec; end: 10058b77f; -[SCMapAsyncTrace initWithName:] */

undefined8 * FUN_10058b6ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f4fa8;
  puVar1 = &uStack_30;
  uStack_30 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c51804();
    func_0x000107c61180();
    uVar3 = puVar1[1];
    puVar1[1] = puVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + 0x19) = 0;
  }
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 10058b780; end: 10058b807; -[SCMapAsyncTrace begin] */

void FUN_10058b780(long param_1,undefined8 param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (((*(byte *)(param_1 + 0x18) & 1) == 0) && (*(long *)(param_1 + 0x10) == 0)) {
    cVar1 = *(char *)(param_1 + 0x19);
    puVar2 = PTR_PTR_1126ae4e8;
    func_0x000107c5a9bc();
    func_0x000107c61180();
    puVar3 = puVar2;
    if (cVar1 == '\x01') {
      func_0x000107c3e75c();
    }
    else {
      func_0x000107c3e750(puVar2,param_2,*(undefined8 *)(param_1 + 8));
    }
    *(undefined **)(param_1 + 0x10) = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 10058b808; end: 10058b80f; -[SCLocationManager isBackgrounded] */

undefined1 FUN_10058b808(long param_1)

{
  return *(undefined1 *)(param_1 + 0x40);
}



/* Entry: 10058b810; end: 10058b81b; -[SCLocationObserverWeakHook setObserver:] */

void FUN_10058b810(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 10058b81c; end: 10058b82f; -[SCObservableDeferred .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10058b81c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127967c4,0);
  return;
}



/* Entry: 10058b830; end: 10058b857; -[SCUserLocationProvider visitObservable] */

void FUN_10058b830(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10058b858; end: 10058b8bf; -[SCStreamingLocationSharingPreferencesProvider preferencesSyncObservable] */

void FUN_10058b858(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10058b8c0; end: 10058bafb; -[SCMapValisServiceProvider _valisService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10058b8c0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined1 uStack_78;
  
  lVar16 = (long)_DAT_11272ac58;
  uVar1 = param_1 + lVar16;
  func_0x000107c61148();
  uVar2 = uVar1;
  func_0x000107c5da68();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c49e14();
  if ((uVar3 & 1) == 0) {
    lVar4 = param_1 + lVar16;
    func_0x000107c61148();
    lVar5 = lVar4;
    func_0x000107c5da68();
    func_0x000107c61180();
    lVar6 = lVar5;
    func_0x000107c49e24();
    uStack_78 = (undefined1)lVar6;
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar4);
  }
  else {
    uStack_78 = 1;
  }
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  puVar7 = PTR_PTR_1126bf2f8;
  func_0x000107c610f4();
  lVar16 = param_1 + lVar16;
  func_0x000107c61148();
  lVar8 = lVar16;
  func_0x000107c5da60();
  func_0x000107c61180();
  lVar9 = lVar8;
  func_0x000107c5d984();
  func_0x000107c61180();
  lVar4 = param_1 + _DAT_11272ac5c;
  func_0x000107c61148();
  lVar10 = lVar4;
  func_0x000107c3fa04();
  func_0x000107c61180();
  lVar5 = param_1 + _DAT_11272ac60;
  func_0x000107c61148(lVar5);
  lVar11 = lVar5;
  func_0x000107c3de48();
  func_0x000107c61180();
  lVar6 = param_1 + _DAT_11272ac64;
  func_0x000107c61148(lVar6);
  lVar12 = lVar6;
  func_0x000107c44580();
  func_0x000107c61180();
  lVar13 = param_1 + _DAT_11272ac68;
  func_0x000107c61148(lVar13);
  lVar14 = lVar13;
  func_0x000107c4d598();
  func_0x000107c61180();
  param_1 = param_1 + _DAT_11272ac6c;
  func_0x000107c61148(param_1);
  lVar15 = param_1;
  func_0x000107c4d998();
  func_0x000107c61180();
  func_0x000107c462c8(puVar7,param_2,lVar9,lVar10,lVar11,lVar12,lVar14,lVar15,uStack_78);
  func_0x000107c61170(lVar15);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar16);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10058bafc; end: 10058bb0b; -[_TtC31SCPrimaryLocationDeviceServices31SCPrimaryLocationDeviceServices objcDeviceLocationPrimacyProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10058bafc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fcd708));
  return;
}



/* Entry: 10058bb0c; end: 10058bff3; -[SCMapGRPCValisService initWithCurrentUserId:circumstanceEngine:appStartExperimentReader:unifiedGRPCClientFactory:networkConnectivityMonitor:deviceLocationPrimacyProvider:isLoginOrRegistrationSession:] */

undefined8 *
FUN_10058bb0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined *puStack_78;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  puStack_78 = PTR_PTR_1126ea9b0;
  puVar1 = &uStack_80;
  uStack_80 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[8];
    puVar1[8] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[1];
    puVar1[1] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[2];
    puVar1[2] = param_6;
    func_0x000107c61170(uVar2);
    *(undefined1 *)(puVar1 + 0x1e) = param_9;
    puVar3 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61180();
    func_0x000107c470d0();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar4);
    uVar2 = param_5;
    func_0x000107c3ebd4();
    *(char *)((long)puVar1 + 0xf1) = (char)uVar2;
    puVar1[0xb] = 0;
    *(undefined4 *)(puVar1 + 0x10) = 0;
    puVar3 = PTR_PTR_1126ae568;
    func_0x000107c610fc();
    uVar2 = puVar1[0x16];
    puVar1[0x16] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    func_0x000107c610fc();
    uVar2 = puVar1[0x17];
    puVar1[0x17] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    func_0x000107c610fc();
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    func_0x000107c610fc();
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61144(auStack_88,puVar1);
    uVar2 = param_7;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar5 = uVar2;
    func_0x000107c4d5a4();
    func_0x000107c61180();
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_10058c300;
    puStack_98 = &UNK_110876508;
    func_0x000107c6111c(auStack_90,auStack_88);
    uVar6 = uVar5;
    func_0x000107c5c320();
    func_0x000107c61180();
    uVar7 = puVar1[0x18];
    puVar1[0x18] = uVar6;
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae728;
    func_0x000107c3edf4();
    func_0x000107c61180();
    uVar2 = puVar1[0x15];
    puVar1[0x15] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c545b8(puVar1[0x15]);
    func_0x000107c611b0();
    func_0x000107c59d5c(puVar1[0x15]);
    func_0x000107c611b0();
    func_0x000107c5343c(puVar1[0x15]);
    func_0x000107c611b0();
    puVar3 = PTR_PTR_1126ae728;
    func_0x000107c3edf4();
    func_0x000107c61180();
    uVar2 = puVar1[0x13];
    puVar1[0x13] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c545b8(puVar1[0x13]);
    func_0x000107c611b0();
    func_0x000107c59d5c(puVar1[0x13]);
    func_0x000107c611b0();
    func_0x000107c5343c(puVar1[0x13]);
    func_0x000107c611b0();
    puVar3 = PTR_PTR_1126ae728;
    func_0x000107c3edf4();
    func_0x000107c61180();
    uVar2 = puVar1[0x14];
    puVar1[0x14] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c545b8(puVar1[0x14]);
    func_0x000107c611b0();
    func_0x000107c59d5c(puVar1[0x14]);
    func_0x000107c611b0();
    func_0x000107c5343c(puVar1[0x14]);
    func_0x000107c611b0();
    func_0x000107c53310(puVar1[0x14]);
    func_0x000107c611b0();
    puVar3 = PTR_PTR_1126bf260;
    func_0x000107c610fc();
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = puVar3;
    func_0x000107c61170(uVar2);
    uVar2 = param_8;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar5 = uVar2;
    func_0x000107c41940();
    func_0x000107c61180();
    func_0x000107c6111c(auStack_b8,auStack_88);
    uVar6 = uVar5;
    func_0x000107c5c320();
    func_0x000107c61180();
    uVar7 = puVar1[0x1d];
    puVar1[0x1d] = uVar6;
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar2);
    func_0x000107c61120(auStack_b8);
    func_0x000107c61120(auStack_90);
    func_0x000107c61120(auStack_88);
  }
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 10058bff4; end: 10058c0ff;  */

/* WARNING: Possible PIC construction at 0x00010058c038: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010058c0ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010058c0e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010058c03c) */
/* WARNING: Removing unreachable block (ram,0x00010058c0ec) */

void FUN_10058bff4(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 0x28);
  if (lVar2 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
    func_0x000107c5e15c();
    func_0x000107c61180();
    puVar5 = *(undefined **)(*(long *)(param_1 + 0x28) + 0x28);
    *(undefined **)(*(long *)(param_1 + 0x28) + 0x28) = puVar3;
  }
  else {
    func_0x000107c3d798(lVar2,param_2,*(undefined8 *)(param_1 + 0x20));
    puVar5 = *(undefined **)(param_1 + 0x20);
    func_0x000107c4b8c0(puVar5);
    func_0x000107c61180();
    iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x000107c4b8c4();
    if (iVar1 == 0) {
      func_0x000107c427dc(*(undefined8 *)(param_1 + 0x30));
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      func_0x000107c42e78(puVar5);
      func_0x000107c61180();
      func_0x000107c3c224(uVar4,param_2,&PTR____CFConstantStringClassReference_110df17f8,puVar5);
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      func_0x000107c4a998(uVar4);
      uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x70);
      puVar3 = PTR_PTR_1126bc340;
      func_0x000107c4dac8(PTR_PTR_1126bc340,param_2,puVar5,uVar4);
      func_0x000107c61180();
      func_0x000107c4d664(uVar6,param_2,puVar3);
      puVar5 = puVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 10058c100; end: 10058c107; -[SCUserLocationProvider locationObserverWantsActiveLocationMonitoring] */

undefined8 FUN_10058c100(void)

{
  return 0;
}



/* Entry: 10058c108; end: 10058c167; -[SCMapAsyncTrace end] */

void FUN_10058c108(long param_1)

{
  undefined *puVar1;
  
  if ((*(long *)(param_1 + 0x10) != 0) && ((*(byte *)(param_1 + 0x18) & 1) == 0)) {
    puVar1 = PTR_PTR_1126ae4e8;
    func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
    func_0x000107c61180();
    func_0x000107c427e8();
    func_0x000107c61170(puVar1);
    *(undefined1 *)(param_1 + 0x18) = 1;
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}



/* Entry: 10058c168; end: 10058c283; -[SCLocationManager _recalculateDesiredLocationSettingsFromSource:observerIdentifier:] */

void FUN_10058c168(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puVar1 = PTR_PTR_1126bc330;
  func_0x000107c5cd50(PTR_PTR_1126bc330,param_2,&PTR____CFConstantStringClassReference_110df18b8);
  func_0x000107c61180();
  func_0x000107c3e740();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  puStack_70 = &UNK_100c73fcc;
  puStack_68 = &UNK_11089eec8;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lStack_60 = param_1;
  puStack_58 = puVar1;
  uStack_50 = param_3;
  uStack_48 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(puVar1);
  func_0x000107c4f7c0(uVar2);
  func_0x000107c61180();
  func_0x000107c4317c(param_1,param_2,&puStack_80,uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(puStack_58);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 10058c284; end: 10058c2f3; -[SCMapAsyncTrace dealloc] */

void FUN_10058c284(long param_1)

{
  undefined *puVar1;
  long lStack_30;
  undefined *puStack_28;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    puVar1 = PTR_PTR_1126ae4e8;
    func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
    func_0x000107c61180();
    func_0x000107c3f48c();
    func_0x000107c61170(puVar1);
  }
  puStack_28 = PTR_PTR_1126f4fa8;
  lStack_30 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10058c2f4; end: 10058c2ff; -[SCMapAsyncTrace .cxx_destruct] */

void FUN_10058c2f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10058c300; end: 10058c35f;  */

/* WARNING: Possible PIC construction at 0x00010058c33c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010058c340) */

void FUN_10058c300(long param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
  func_0x000107c61148(param_1 + 0x20);
  func_0x000107c40ef0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10058c360; end: 10058c3d3; -[SCMapGRPCValisService _networkConnectivityStatusDidChange:] */

void FUN_10058c360(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puVar1 = PTR_PTR_1126ba4e8;
  func_0x000107c49b90();
  if ((int)puVar1 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    puStack_38 = &UNK_105850ec4;
    puStack_30 = &UNK_110842e18;
    lStack_28 = param_1;
    func_0x000107c4e528(0x4000000000000000,*(undefined8 *)(param_1 + 0x18),param_2,&puStack_48);
  }
  return;
}



/* Entry: 10058c3d4; end: 10058c42b; +[_TtC36SCNetworkConnectivityMonitorServices13SCNetworkUtil isConnected:] */

uint FUN_10058c3d4(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  uint uVar2;
  long lStack_18;
  
  if ((param_3 + 1U < 6) &&
     (uVar2 = (uint)(param_3 + 1U), (0x2fU >> (ulong)(uVar2 & 0x1f) & 1) != 0)) {
    return 0x2cU >> (ulong)(uVar2 & 0x1f) & 1;
  }
  lStack_18 = param_3;
  func_0x000107c60614(&UNK_11077d010,&lStack_18,&UNK_11077d010,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10058c42c);
  (*pcVar1)();
}



/* Entry: 10058c42c; end: 10058c52f; -[SCQueuePerformer perform:after:] */

void FUN_10058c42c(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x000107c61174(param_4);
  func_0x000107c61144(auStack_48,param_2);
  uVar1 = 0;
  func_0x000107c60f94(0,(long)(param_1 * 1000000000.0));
  uVar2 = (ulong)*(uint *)(param_2 + 0x28);
  func_0x000107c60f2c(uVar2,0);
  func_0x000107c61180();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  puStack_68 = &UNK_10bcb8684;
  puStack_60 = &UNK_110848708;
  func_0x000107c6111c(auStack_50,auStack_48);
  uStack_58 = param_4;
  func_0x000107c61174(param_4);
  FUN_10058c530(uVar1,uVar2,&puStack_78);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uStack_58);
  func_0x000107c61170(param_4);
  func_0x000107c61120(auStack_50);
  func_0x000107c61120(auStack_48);
  return;
}



/* Entry: 10058c530; end: 10058c5fb;  */

/* WARNING: Possible PIC construction at 0x00010058c5a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010058c5a4) */

void FUN_10058c530(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  code *pcVar2;
  
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  if ((bRam0000000113817cb8 & 1) == 0) {
    iVar1 = 0x13817cb8;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      pcVar2 = (code *)0xffffffffffffffff;
      func_0x000107c60f9c(0xffffffffffffffff,"dispatch_after");
      pcRam0000000113817cb0 = pcVar2;
      func_0x000107c60e4c(0x113817cb8);
    }
  }
  pcVar2 = pcRam0000000113817cb0;
  FUN_10002a3a8(param_3);
  func_0x000107c61180();
  (*pcVar2)(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10058c5fc; end: 10058c613; +[SCNGrpcParamsBuilder builder] */

void FUN_10058c5fc(void)

{
  func_0x000107c610f4();
  func_0x000107c45450();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10058c614; end: 10058c6b7; -[SCNGrpcParamsBuilder initPrivate] */

undefined1 * FUN_10058c614(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112701ab0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x28) = 0;
    puVar2 = PTR_PTR_1126b0380;
    func_0x000107c5d8e4();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    func_0x000107c61170(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = 2;
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = 0;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + 0x40) = 0;
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = 0;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + 0x50) = 0;
    uVar3 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = 0;
    func_0x000107c61170(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10058c6b8; end: 10058c6ef; -[SCNGrpcParamsBuilder setEndpointAddress:] */

long FUN_10058c6b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 10058c6f0; end: 10058c6f7; -[SCNGrpcParamsBuilder setTimeAliveInBackgroundMs:] */

void FUN_10058c6f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 10058c6f8; end: 10058c6ff; -[SCNGrpcParamsBuilder setClientAttestation:] */

void FUN_10058c6f8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 10058c700; end: 10058c707; -[SCNGrpcParamsBuilder setChannelType:] */

void FUN_10058c700(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 10058c708; end: 10058c77b; -[SCGrapheneValisMetric2 init] */

undefined1 * FUN_10058c708(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ea9c0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10058c77c; end: 10058c783;  */

void FUN_10058c77c(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10058c784; end: 10058c7bb;  */

void FUN_10058c784(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10058c7bc; end: 10058c7c3;  */

long FUN_10058c7bc(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined1 auStack_68 [24];
  long *plStack_50;
  long lStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6162c();
  FUN_1000d224c(auStack_68);
  func_0x000107c61574(uVar1);
  lVar2 = 0;
  func_0x00010058cf40();
  func_0x000107c613fc();
  puVar3 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x10) = puVar3;
  FUN_10058ced8(auStack_68,plStack_50);
  plVar4 = plStack_50;
  (**(code **)(lStack_48 + 8))(plStack_50,lStack_48);
  puVar5 = &UNK_110473008;
  func_0x000107c613fc(&UNK_110473008,0x18,7);
  func_0x000107c615fc(puVar5 + 0x10,puVar3);
  uVar1 = 0x10058d0ac;
  puVar3 = puVar5;
  (**(code **)(*plVar4 + 0x60))();
  func_0x000107c61574(plVar4);
  func_0x000107c61574(puVar5);
  *(undefined8 *)(lVar2 + 0x18) = uVar1;
  *(undefined **)(lVar2 + 0x20) = puVar3;
  func_0x00010058cefc(auStack_68);
  return lVar2;
}



/* Entry: 10058c7c4; end: 10058c8c7;  */

long FUN_10058c7c4(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [24];
  long *plStack_50;
  long lStack_48;
  
  func_0x000107c6162c();
  FUN_1000d224c(auStack_68);
  func_0x000107c61574(param_1);
  lVar1 = 0;
  func_0x00010058cf40();
  func_0x000107c613fc();
  puVar2 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  FUN_10058ced8(auStack_68,plStack_50);
  plVar3 = plStack_50;
  (**(code **)(lStack_48 + 8))(plStack_50,lStack_48);
  puVar4 = &UNK_110473008;
  func_0x000107c613fc(&UNK_110473008,0x18,7);
  func_0x000107c615fc(puVar4 + 0x10,puVar2);
  uVar5 = 0x10058d0ac;
  puVar2 = puVar4;
  (**(code **)(*plVar3 + 0x60))();
  func_0x000107c61574(plVar3);
  func_0x000107c61574(puVar4);
  *(undefined8 *)(lVar1 + 0x18) = uVar5;
  *(undefined **)(lVar1 + 0x20) = puVar2;
  func_0x00010058cefc(auStack_68);
  return lVar1;
}



/* Entry: 10058c8c8; end: 10058c8eb;  */

void FUN_10058c8c8(void)

{
  long unaff_x20;
  
  func_0x000107c615f8(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10058c8ec; end: 10058c8f3;  */

void FUN_10058c8ec(long param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_60 [24];
  long lStack_48;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6162c();
  func_0x00010058c978(auStack_60);
  func_0x000107c61574(uVar1);
  FUN_10058ced8(auStack_60,lStack_48);
  *(long *)(param_1 + 0x18) = lStack_48;
  *(undefined8 *)(param_1 + 0x20) = uStack_38;
  FUN_1000c5db4(param_1);
  (**(code **)(*(long *)(lStack_48 + -8) + 0x10))();
  func_0x00010058cefc(auStack_60);
  return;
}



/* Entry: 10058c8f4; end: 10058ca9b;  */

void FUN_10058c8f4(long param_1,undefined8 param_2)

{
  undefined1 auStack_60 [24];
  long lStack_48;
  undefined8 uStack_38;
  
  func_0x000107c6162c();
  func_0x00010058c978(auStack_60);
  func_0x000107c61574(param_2);
  FUN_10058ced8(auStack_60,lStack_48);
  *(long *)(param_1 + 0x18) = lStack_48;
  *(undefined8 *)(param_1 + 0x20) = uStack_38;
  FUN_1000c5db4(param_1);
  (**(code **)(*(long *)(lStack_48 + -8) + 0x10))();
  func_0x00010058cefc(auStack_60);
  return;
}



/* Entry: 10058ca9c; end: 10058cb33;  */

undefined8 FUN_10058ca9c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112e1f370;
  FUN_1000285a8(0x112e1f370,&UNK_10da01878);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10058cb34; end: 10058cb53;  */

void FUN_10058cb34(void)

{
  func_0x000107c61168(&PTR_PTR_112e1ef88);
  return;
}



/* Entry: 10058cb54; end: 10058cc4b;  */

void FUN_10058cb54(ulong param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 uVar4;
  long unaff_x20;
  undefined1 uStack_31;
  
  FUN_1000285a8(0x112e1f0c8,&UNK_10da01670);
  func_0x000107c613fc();
  uVar2 = 1;
  FUN_10008747c();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
  puVar3 = PTR_PTR_1126c5b08;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar3;
  bVar1 = (param_1 & 1) == 0;
  uVar2 = 0x7972616d697270;
  if (bVar1) {
    uVar2 = 0x6e776f6e6b6e75;
  }
  uVar4 = 0;
  if (bVar1) {
    uVar4 = 2;
  }
  func_0x000107c61174();
  func_0x000107c5fadc(uVar2,0xe700000000000000);
  func_0x000107c6142c(0xe700000000000000);
  FUN_10058ccd0(puVar3,uVar2,1);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar2);
  uStack_31 = uVar4;
  FUN_100087c34(&uStack_31);
  return;
}



/* Entry: 10058cc4c; end: 10058cc5b;  */

undefined1  [16] FUN_10058cc4c(void)

{
  return ZEXT816(0x1106c0fb8);
}


