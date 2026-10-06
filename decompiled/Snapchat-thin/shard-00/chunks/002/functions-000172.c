/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1003f6b84; end: 1003f6c27; -[SCFideliusReEncryptionDelegateImpl initWithDatabaseFetcher:retryService:] */

undefined1 *
FUN_1003f6b84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126eaf90;
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



/* Entry: 1003f6c28; end: 1003f6c83; -[RTUSFilteringEvaluator init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003f6c28(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  puVar2 = PTR_PTR_1126adba0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_1 + _DAT_11305ecb0) = puVar2;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1003f6c84; end: 1003f6cb3; -[SCFideliusManager setServices:] */

void FUN_1003f6c84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1003f6cb4; end: 1003f6d27; -[SCGrapheneRtusConfigsSwiftMetric2 init] */

undefined1 * FUN_1003f6cb4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112702e18;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1003f6d28; end: 1003f6ef3; -[SCRTUSConfigProviderImpl _initLazyConfigs] */

void FUN_1003f6d28(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  func_0x000107c61144(auStack_68,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1003f78a8;
  puStack_78 = &UNK_11085dc48;
  func_0x000107c6111c(auStack_70,auStack_68);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  func_0x000107c55fa4(param_1);
  func_0x000107c61170(puVar1);
  puVar1 = PTR_PTR_1126ae720;
  puStack_b8 = puVar2;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_1003f76c0;
  puStack_a0 = &UNK_110ade950;
  func_0x000107c6111c(auStack_98,auStack_68);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  func_0x000107c59c20(param_1);
  func_0x000107c61170(puVar1);
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_c0,auStack_68);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c57290(param_1);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_c0);
  func_0x000107c61120(auStack_98);
  func_0x000107c61120(auStack_70);
  func_0x000107c61120(auStack_68);
  return;
}



/* Entry: 1003f6ef4; end: 1003f6f23; -[SCRTUSConfigProviderImpl setListAllowlistedProducts:] */

void FUN_1003f6ef4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1003f6f24; end: 1003f6f53; -[SCRTUSConfigProviderImpl setTargetedProductsToConfigs:] */

void FUN_1003f6f24(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1003f6f54; end: 1003f6f5b; -[SCFideliusManager services] */

undefined8 FUN_1003f6f54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 1003f6f5c; end: 1003f6fab; -[SCFideliusServiceCoordinator beginObservationOnIdentityService:] */

/* WARNING: Possible PIC construction at 0x0001003f6f98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001003f6f9c) */

void FUN_1003f6f5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c44ff8(param_1);
  func_0x000107c61180();
  func_0x000107c3e7a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1003f6fac; end: 1003f6fb7; -[SCFideliusServiceCoordinator identityService] */

void FUN_1003f6fac(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x50,1);
  return;
}



/* Entry: 1003f6fb8; end: 1003f700f; -[SCFideliusIdentityService beginObservation:] */

undefined8 FUN_1003f6fb8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  if (*(long *)(param_1 + 0x68) == 0) {
    if (param_3 == 0) {
      uVar1 = 0;
      goto LAB_1003f6ff0;
    }
    func_0x000107c3aec0(param_1,param_2,param_3);
  }
  uVar1 = 1;
LAB_1003f6ff0:
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 1003f7010; end: 1003f703f; -[SCRTUSConfigProviderImpl setPayloadIdToEventConfigMap:] */

void FUN_1003f7010(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1003f7040; end: 1003f706b;  */

void FUN_1003f7040(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003f706c; end: 1003f71e7; -[SCFideliusIdentityService _beginObservation:] */

void FUN_1003f706c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61174(param_3);
  puVar1 = &UNK_10f30eeec;
  FUN_1000ba800(&UNK_10f30eeec);
  puVar2 = PTR_PTR_1126ae810;
  func_0x000107c61160();
  uVar5 = *(undefined8 *)(param_1 + 0x68);
  *(undefined **)(param_1 + 0x68) = puVar2;
  func_0x000107c61170(uVar5);
  func_0x000107c61144(auStack_58,param_1);
  uVar5 = param_3;
  func_0x000107c5c734(param_3);
  func_0x000107c61180();
  uVar3 = uVar5;
  func_0x000107c41e3c();
  func_0x000107c61180();
  func_0x000107c6111c(auStack_60,auStack_58);
  uVar4 = uVar3;
  func_0x000107c5c320(uVar3);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar5);
  func_0x000107c61120(auStack_60);
  func_0x000107c61120(auStack_58);
  func_0x0001000e2a84(puVar1);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1003f71e8; end: 1003f7303;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003f71e8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  lVar1 = param_1 + 0x28;
  func_0x000107c61148();
  if (lVar1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    lVar2 = lVar1 + _DAT_112727b78;
    func_0x000107c61148(lVar2);
    lVar3 = lVar2;
    func_0x000107c5b4bc();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar2);
    puVar6 = PTR_PTR_1126bd080;
    func_0x000107c610f4(PTR_PTR_1126bd080);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c5c734(uVar5);
    func_0x000107c61180();
    lVar2 = lVar1 + _DAT_112727bb4;
    func_0x000107c61148(lVar2);
    lVar3 = lVar2;
    func_0x000107c3fa04();
    func_0x000107c61180();
    func_0x000107c468f0(puVar6,param_2,uVar5,lVar4,lVar3);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(lVar4);
  }
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1003f7304; end: 1003f739f; -[SCRTUSConfigProviderImpl isRTUSEvent:] */

bool FUN_1003f7304(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  func_0x000107c4e498();
  func_0x000107c61180();
  lVar1 = param_1;
  func_0x000107c5c734();
  func_0x000107c61180();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d960(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  func_0x000107c61180();
  lVar3 = lVar1;
  func_0x000107c4d9e8(lVar1,param_2,puVar2);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_1);
  return lVar3 != 0;
}



/* Entry: 1003f73a0; end: 1003f73a7; -[SCRTUSConfigProviderImpl payloadIdToEventConfigMap] */

undefined8 FUN_1003f73a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1003f73a8; end: 1003f76b7;  */

undefined * FUN_1003f73a8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  long lStack_208;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x000107c61160();
  if (param_1 != 0) {
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    lStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    plStack_1a0 = (long *)0x0;
    lVar10 = param_1;
    func_0x000107c5c760();
    func_0x000107c61180();
    lVar11 = lVar10;
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar2 = lVar11;
    func_0x000107c3db60();
    func_0x000107c61180();
    func_0x000107c61170(lVar11);
    func_0x000107c61170(lVar10);
    lStack_208 = lVar2;
    func_0x000107c4080c(lVar2,param_2,&uStack_1b0,auStack_f0,0x10);
    if (lStack_208 != 0) {
      lVar10 = *plStack_1a0;
      do {
        lVar11 = 0;
        do {
          if (*plStack_1a0 != lVar10) {
            func_0x000107c61128(lVar2);
          }
          uVar13 = *(undefined8 *)(lStack_1a8 + lVar11 * 8);
          lVar3 = param_1;
          func_0x000107c5c760();
          func_0x000107c61180();
          lVar4 = lVar3;
          func_0x000107c5c734();
          func_0x000107c61180();
          lVar12 = lVar4;
          func_0x000107c4d9e8();
          func_0x000107c61180();
          lVar5 = lVar12;
          func_0x000107c42adc();
          func_0x000107c61180();
          func_0x000107c61170(lVar12);
          func_0x000107c61170(lVar4);
          func_0x000107c61170(lVar3);
          uStack_1c8 = 0;
          uStack_1d0 = 0;
          uStack_1b8 = 0;
          uStack_1c0 = 0;
          lStack_1e8 = 0;
          uStack_1f0 = 0;
          uStack_1d8 = 0;
          plStack_1e0 = (long *)0x0;
          lVar3 = lVar5;
          func_0x000107c3db60();
          func_0x000107c61180();
          lVar4 = lVar3;
          func_0x000107c4080c();
          if (lVar4 != 0) {
            lVar12 = *plStack_1e0;
            do {
              lVar14 = 0;
              do {
                if (*plStack_1e0 != lVar12) {
                  func_0x000107c61128(lVar3);
                }
                uVar15 = *(undefined8 *)(lStack_1e8 + lVar14 * 8);
                lVar6 = lVar5;
                func_0x000107c4d9e8(lVar5,param_2,uVar15);
                func_0x000107c61180();
                puVar7 = puVar1;
                func_0x000107c4d9e8(puVar1,param_2,uVar15);
                func_0x000107c61180();
                puVar8 = puVar1;
                func_0x000107c4d9e8(puVar1,param_2,uVar15);
                func_0x000107c61180();
                func_0x000107c61170();
                puVar9 = puVar7;
                if (puVar8 == (undefined *)0x0) {
                  puVar9 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
                  func_0x000107c61160(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
                  func_0x000107c61170(puVar7);
                }
                func_0x000107c56bcc(puVar9,param_2,lVar6,uVar13);
                func_0x000107c56bcc(puVar1,param_2,puVar9,uVar15);
                func_0x000107c61170(puVar9);
                func_0x000107c61170(lVar6);
                lVar14 = lVar14 + 1;
              } while (lVar4 != lVar14);
              lVar4 = lVar3;
              func_0x000107c4080c(lVar3,param_2,&uStack_1f0,auStack_170,0x10);
            } while (lVar4 != 0);
          }
          func_0x000107c61170(lVar3);
          func_0x000107c61170(lVar5);
          lVar11 = lVar11 + 1;
        } while (lVar11 != lStack_208);
        lStack_208 = lVar2;
        func_0x000107c4080c(lVar2,param_2,&uStack_1b0,auStack_f0,0x10);
      } while (lStack_208 != 0);
    }
    func_0x000107c61170(lVar2);
  }
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return puVar1;
  }
  func_0x000107c60e78();
  return *(undefined **)(param_1 + 0x30);
}



/* Entry: 1003f76b8; end: 1003f76bf; -[SCRTUSConfigProviderImpl targetedProductsToConfigs] */

undefined8 FUN_1003f76b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1003f76c0; end: 1003f7897;  */

undefined * FUN_1003f76c0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x000107c61160(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  if (param_1 != 0) {
    lVar3 = param_1;
    func_0x000107c4b684();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    lVar3 = lVar4;
    func_0x000107c4080c();
    lVar1 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          func_0x000107c61128(lVar4);
        }
        func_0x000107c49820(*(undefined8 *)(lVar9 * 8));
        lVar5 = param_1;
        func_0x000107c3b808();
        func_0x000107c61180();
        lVar6 = param_1;
        if (lVar5 == 0) {
          uVar8 = *(undefined8 *)(param_1 + 8);
          func_0x000107c40730(param_1);
          func_0x000107c61180();
          func_0x000107c2bbc8(uVar8,lVar6,1);
        }
        else {
          func_0x000107c3b87c(param_1);
          func_0x000107c61180();
          func_0x000107c56bcc(puVar2);
        }
        func_0x000107c61170(lVar6);
        func_0x000107c61170(lVar5);
        lVar9 = lVar9 + 1;
      } while (lVar3 != lVar9);
      lVar3 = lVar4;
      func_0x000107c4080c();
    }
    func_0x000107c61170(lVar4);
  }
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return puVar2;
  }
  func_0x000107c60e78();
  return *(undefined **)(param_1 + 0x18);
}



/* Entry: 1003f7898; end: 1003f789f; -[SCSnapchatterServices snapchattersDataTracker] */

undefined8 FUN_1003f7898(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1003f78a0; end: 1003f78a7; -[SCRTUSConfigProviderImpl listAllowlistedProducts] */

undefined8 FUN_1003f78a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1003f78a8; end: 1003f793f;  */

void FUN_1003f78a8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar1 = (undefined *)(param_1 + 0x20);
  func_0x000107c61148();
  if (puVar1 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x000107c61160(PTR__OBJC_CLASS___NSArray_1126ae530);
  }
  else {
    puVar2 = puVar1;
    func_0x000107c3b864(puVar1);
    func_0x000107c61180();
    puVar4 = puVar1;
    func_0x000107c3b868(puVar1);
    func_0x000107c61180();
    uVar5 = *(undefined8 *)(puVar1 + 8);
    puVar3 = puVar4;
    func_0x000107c40808();
    FUN_1003f84ac(uVar5,puVar3);
    func_0x000107c61170(puVar2);
  }
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1003f7940; end: 1003f7bab; -[SCRTUSConfigProviderImpl _getListAllowlistedProductNamesFromCof] */

void FUN_1003f7940(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x000107c4f558(lVar1,param_2,&PTR____CFConstantStringClassReference_110f3d698,0,0);
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c5dc0c();
    func_0x000107c61180();
    func_0x000107c61170();
    if (lVar2 != 0) {
      puVar3 = PTR_PTR_1126debc8;
      func_0x000107c610f4();
      lVar4 = lVar1;
      func_0x000107c5dc0c(lVar1);
      func_0x000107c61180();
      lStack_48 = 0;
      func_0x000107c4636c(puVar3,param_2,lVar4,&lStack_48);
      lVar2 = lStack_48;
      func_0x000107c61170(lVar4);
      if (lVar2 == 0) {
        puVar6 = puVar3;
        func_0x000107c3dc34();
        func_0x000107c61180();
        if (puVar6 == (undefined *)0x0) {
          puVar5 = PTR_PTR_1126debc0;
          func_0x000107c4400c(PTR_PTR_1126debc0);
          func_0x000107c61180();
        }
        else {
          func_0x000107c61174(puVar6);
          puVar5 = puVar6;
        }
        func_0x000107c61170(puVar6);
      }
      else {
        func_0x000107c3be74(param_1,param_2,&PTR____CFConstantStringClassReference_110f3d698,
                            &PTR____CFConstantStringClassReference_110daafd8);
        puVar5 = PTR_PTR_1126debc0;
        func_0x000107c4400c(PTR_PTR_1126debc0);
        func_0x000107c61180();
      }
      func_0x000107c61170(puVar3);
      goto LAB_1003f7a8c;
    }
  }
  puVar5 = PTR_PTR_1126debc0;
  func_0x000107c4400c(PTR_PTR_1126debc0);
  func_0x000107c61180();
LAB_1003f7a8c:
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1003f7bac; end: 1003f7bb3;  */

void FUN_1003f7bac(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x12;
  code *pcVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined4 auStack_b0 [4];
  long alStack_a0 [4];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = 0xea00000000007374;
  lVar12 = 0x63656a624f636f44;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar13 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  puVar9 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = (long)puVar9 - extraout_x12;
  FUN_100083b20(&lStack_70);
  uVar6 = 0xea00000000007374;
  lVar2 = lVar12;
  func_0x000107c5fadc(0x63656a624f636f44,0xea00000000007374);
  uStack_78 = 0;
  lVar3 = lStack_70;
  func_0x000107c421f4();
  func_0x000107c61180();
  func_0x000107c615e8(lStack_70);
  func_0x000107c61170(lVar2);
  uVar7 = uStack_78;
  if (lVar3 == 0) {
    uVar6 = uStack_78;
    func_0x000107c61174(uStack_78);
    func_0x000107c5ed30(uVar7);
    func_0x000107c61170(uVar6);
    func_0x000107c61654();
    func_0x000107c614ac(uVar7);
  }
  else {
    lVar12 = lVar3;
    func_0x000107c5faec(lVar3);
    func_0x000107c61174(uVar7);
    func_0x000107c61170(lVar3);
    uVar11 = uVar6;
  }
  func_0x000107c5ed80(lVar10,lVar12,uVar11);
  func_0x000107c6142c(uVar11);
  uVar7 = 0x800000010ef3eb40;
  func_0x000107c5ed9c(puVar9,0xd000000000000012,0x800000010ef3eb40);
  puVar4 = PTR_PTR_1126e0368;
  func_0x000107c61168();
  puVar5 = puVar4;
  func_0x000107c5edc4();
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar7);
  func_0x000107c421cc();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  pcVar8 = *(code **)(lVar13 + 8);
  (*pcVar8)(lVar10,lVar1);
  *param_1 = puVar4;
  (*pcVar8)(puVar9,lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  func_0x000107c60e78();
  *(undefined **)(lVar10 + -0x20) = puVar4;
  *(undefined8 **)(lVar10 + -0x18) = param_1;
  *(undefined1 **)(lVar10 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)(lVar10 + -8) = FUN_1003f7df0;
  if (puRam00000001137f0da8 == (undefined *)0x0) {
    *(undefined4 *)(lVar10 + -0x30) = 0x1c;
    puVar4 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc();
    puRam00000001137f0da8 = puVar4;
  }
  return;
}



/* Entry: 1003f7bb4; end: 1003f7def;  */

void FUN_1003f7bb4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x12;
  code *pcVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined4 auStack_b0 [4];
  long alStack_a0 [4];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = 0xea00000000007374;
  lVar12 = 0x63656a624f636f44;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar13 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  puVar9 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = (long)puVar9 - extraout_x12;
  FUN_100083b20(&lStack_70);
  uVar6 = 0xea00000000007374;
  lVar2 = lVar12;
  func_0x000107c5fadc(0x63656a624f636f44,0xea00000000007374);
  uStack_78 = 0;
  lVar3 = lStack_70;
  func_0x000107c421f4();
  func_0x000107c61180();
  func_0x000107c615e8(lStack_70);
  func_0x000107c61170(lVar2);
  uVar7 = uStack_78;
  if (lVar3 == 0) {
    uVar6 = uStack_78;
    func_0x000107c61174(uStack_78);
    func_0x000107c5ed30(uVar7);
    func_0x000107c61170(uVar6);
    func_0x000107c61654();
    func_0x000107c614ac(uVar7);
  }
  else {
    lVar12 = lVar3;
    func_0x000107c5faec(lVar3);
    func_0x000107c61174(uVar7);
    func_0x000107c61170(lVar3);
    uVar11 = uVar6;
  }
  func_0x000107c5ed80(lVar10,lVar12,uVar11);
  func_0x000107c6142c(uVar11);
  uVar7 = 0x800000010ef3eb40;
  func_0x000107c5ed9c(puVar9,0xd000000000000012,0x800000010ef3eb40);
  puVar4 = PTR_PTR_1126e0368;
  func_0x000107c61168();
  puVar5 = puVar4;
  func_0x000107c5edc4();
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar7);
  func_0x000107c421cc();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  pcVar8 = *(code **)(lVar13 + 8);
  (*pcVar8)(lVar10,lVar1);
  *param_1 = puVar4;
  (*pcVar8)(puVar9,lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  func_0x000107c60e78();
  *(undefined **)(lVar10 + -0x20) = puVar4;
  *(undefined8 **)(lVar10 + -0x18) = param_1;
  *(undefined1 **)(lVar10 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)(lVar10 + -8) = FUN_1003f7df0;
  if (puRam00000001137f0da8 == (undefined *)0x0) {
    *(undefined4 *)(lVar10 + -0x30) = 0x1c;
    puVar4 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc();
    puRam00000001137f0da8 = puVar4;
  }
  return;
}



/* Entry: 1003f7df0; end: 1003f7e57; +[RTUSAllowlistedClientConfigs descriptor] */

void FUN_1003f7df0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0da8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c29e70,
                        &PTR____CFConstantStringClassReference_110f3d7d8,&PTR_DAT_11333e040,
                        &PTR_DAT_11333e058,2,0x18,0x1c);
    puRam00000001137f0da8 = puVar1;
  }
  return;
}



/* Entry: 1003f7e58; end: 1003f7fb7; -[SCRTUSConfigProviderImpl _getListValidProductsFromProductNames:] */

undefined * FUN_1003f7e58(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar7 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c61160();
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  func_0x000107c61174(param_3);
  puVar2 = param_3;
  func_0x000107c4080c();
  if (puVar2 != (undefined *)0x0) {
    lVar8 = *plStack_120;
    do {
      puVar9 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar8) {
          func_0x000107c61128(param_3);
        }
        lVar3 = param_1;
        func_0x000107c4072c();
        if (lVar3 != 0) {
          puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x000107c4d960();
          func_0x000107c61180();
          func_0x000107c3d798(puVar1);
          func_0x000107c61170(puVar4);
        }
        puVar9 = puVar9 + 1;
      } while (puVar2 != puVar9);
      puVar2 = param_3;
      puVar7 = &uStack_130;
      func_0x000107c4080c();
    } while (puVar2 != (undefined *)0x0);
  }
  func_0x000107c61170(param_3);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return puVar1;
  }
  func_0x000107c60e78();
  func_0x000107c61174(puVar7);
  puVar5 = (undefined1 *)puVar7;
  func_0x000107c5c190(puVar7);
  func_0x000107c61180();
  puVar6 = puVar5;
  func_0x000107c5d798();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  puVar1 = param_3;
  func_0x000107c3b8b8();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c4d9e8();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
    FUN_1003f8338(*(undefined8 *)(param_3 + 8),puVar7,1);
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar9 = puVar2;
    func_0x000107c49820(puVar2);
  }
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar7);
  return puVar9;
}



/* Entry: 1003f7fb8; end: 1003f808f; -[SCRTUSConfigProviderImpl convertRTUSProductFrom:] */

long FUN_1003f7fb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000107c5c190(param_3);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5d798();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  lVar3 = param_1;
  func_0x000107c3b8b8();
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c4d9e8();
  func_0x000107c61180();
  if (lVar4 == 0) {
    FUN_1003f8338(*(undefined8 *)(param_1 + 8),param_3,1);
    lVar5 = 0;
  }
  else {
    lVar5 = lVar4;
    func_0x000107c49820(lVar4);
  }
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_3);
  return lVar5;
}



/* Entry: 1003f8090; end: 1003f8177; -[SCRTUSConfigProviderImpl _getStringToRTUSProductMap] */

void FUN_1003f8090(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1003f8118;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001137f0d70 != -1) {
    FUN_10002a2fc(0x1137f0d70,&puStack_48);
  }
  uVar1 = uRam00000001137f0d68;
  func_0x000107c61174(uRam00000001137f0d68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1003f8178; end: 1003f81cb; -[SCRTUSConfigProviderImpl _getRTUSProductToStringMap] */

void FUN_1003f8178(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137f0d60 != -1) {
    FUN_10002a2fc(0x1137f0d60,&PTR___NSConcreteGlobalBlock_110c98ac8);
  }
  uVar1 = uRam00000001137f0d58;
  func_0x000107c61174(uRam00000001137f0d58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1003f81cc; end: 1003f8323;  */

void FUN_1003f81cc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined ***pppuVar3;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  undefined **ppuStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_c8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2640;
  ppuStack_c0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2658;
  ppuStack_70 = &PTR____CFConstantStringClassReference_110df78d8;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110e9c0b8;
  ppuStack_b8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2670;
  ppuStack_b0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2688;
  ppuStack_60 = &PTR____CFConstantStringClassReference_110e1cc58;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110f3d6f8;
  ppuStack_a8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d26a0;
  ppuStack_a0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d26b8;
  ppuStack_50 = &PTR____CFConstantStringClassReference_110f3d718;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110f3d738;
  ppuStack_98 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d26d0;
  ppuStack_90 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d26e8;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110f3d758;
  ppuStack_38 = &PTR____CFConstantStringClassReference_110f3d778;
  ppuStack_88 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2700;
  ppuStack_80 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2718;
  ppuStack_30 = &PTR____CFConstantStringClassReference_110ee1cb8;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110dba418;
  ppuStack_78 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2730;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110f3d798;
  pppuVar3 = &ppuStack_70;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x000107c419ac(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,pppuVar3,&ppuStack_c8,0xb);
  func_0x000107c61180();
  uVar1 = puRam00000001137f0d58;
  puRam00000001137f0d58 = puVar2;
  func_0x000107c61170(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  func_0x000107c60e78();
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uRam00000001137f0d68,PTR_s_setObject_forKeyedSubscript__112651bb8,param_2,pppuVar3);
  return;
}



/* Entry: 1003f8324; end: 1003f8337;  */

void FUN_1003f8324(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uRam00000001137f0d68,PTR_s_setObject_forKeyedSubscript__112651bb8,param_2,param_3);
  return;
}



/* Entry: 1003f8338; end: 1003f84ab;  */

void FUN_1003f8338(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  func_0x000107c61174(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    func_0x000107c61174(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ec1b9;
    }
    else {
      puVar1 = param_2;
      func_0x000107c61178(param_2);
      func_0x000107c3ac4c();
    }
    func_0x000107c61170(param_2);
    FUN_10002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    FUN_10007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110c98cb8;
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110c98cb8,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    FUN_10007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      func_0x000107c60e14(auStack_60[0]);
    }
  }
  puVar2 = param_2;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_2);
  puVar3 = puVar2;
  func_0x000107c60bd8();
  puStack_a8 = (undefined1 *)&uStack_c0;
  pcStack_88 = FUN_1003f84ac;
  if (puVar3 != (undefined *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    puStack_a0 = puVar2;
    puStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_110c98bc8,&uStack_c0,puVar1);
    FUN_10007e5dc(&puStack_a8);
  }
  return;
}



/* Entry: 1003f84ac; end: 1003f8523;  */

void FUN_1003f84ac(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110c98bc8,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    FUN_10007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1003f8524; end: 1003f875f; -[SCRTUSConfigProviderImpl _getConfigProtoValueForProductFromCof:] */

/* WARNING: Removing unreachable block (ram,0x0001003f862c) */

void FUN_1003f8524(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  lVar1 = param_1;
  func_0x000107c40730();
  func_0x000107c61180();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar3 = lVar1;
  func_0x000107c5d798();
  func_0x000107c61180();
  func_0x000107c51804(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  lVar3 = *(long *)(param_1 + 0x18);
  func_0x000107c4f558();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = lVar3;
    func_0x000107c5dc0c();
    func_0x000107c61180();
    func_0x000107c61170();
    if (lVar4 != 0) {
      puVar5 = PTR_PTR_1126debd0;
      func_0x000107c610f4(PTR_PTR_1126debd0);
      lVar4 = lVar3;
      func_0x000107c5dc0c(lVar3);
      func_0x000107c61180();
      func_0x000107c4636c(puVar5);
      func_0x000107c61174(0);
      func_0x000107c61170(lVar4);
      uVar7 = *(undefined8 *)(param_1 + 8);
      puVar6 = puVar5;
      func_0x000107c5dd14(puVar5);
      func_0x000107c61180();
      FUN_1004bf94c(uVar7,lVar1,puVar6,1);
      func_0x000107c61170(0);
      func_0x000107c61170(puVar6);
      func_0x000107c61174(puVar5);
      func_0x000107c61170(puVar5);
      goto LAB_1003f8728;
    }
  }
  FUN_1004bf94c(*(undefined8 *)(param_1 + 8),lVar1,&PTR____CFConstantStringClassReference_110e21798,
                1);
  puVar5 = PTR_PTR_1126debc0;
  func_0x000107c44014(PTR_PTR_1126debc0);
  func_0x000107c61180();
LAB_1003f8728:
  func_0x000107c61170(lVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1003f8760; end: 1003f87db; -[SCRTUSConfigProviderImpl convertRTUSProductToString:] */

void FUN_1003f8760(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c3b894();
  func_0x000107c61180();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d960(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  func_0x000107c61180();
  uVar2 = param_1;
  func_0x000107c4d9e8(param_1,param_2,puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1003f87dc; end: 1003f8843; +[RTUSClientSignalConfig descriptor] */

void FUN_1003f87dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0db8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c29f10,
                        &PTR____CFConstantStringClassReference_110f3d818,&PTR_DAT_11333e040,
                        &PTR_DAT_11333e198,9,0x40,0x1c);
    puRam00000001137f0db8 = puVar1;
  }
  return;
}



/* Entry: 1003f8844; end: 1003f88a7;  */

long FUN_1003f8844(long param_1,long param_2)

{
  long lVar1;
  
  if ((*(long *)(param_1 + 0x40) == 0) ||
     (lVar1 = *(long *)(*(long *)(param_1 + 0x40) + (ulong)*(uint *)(*(long *)(param_2 + 8) + 0x18))
     , lVar1 == 0)) {
    lVar1 = param_2;
    FUN_1003f88a8(param_2,0);
    FUN_100109e00(param_1,param_2,lVar1);
  }
  return lVar1;
}



/* Entry: 1003f88a8; end: 1003f8ce3;  */

/* WARNING: Possible PIC construction at 0x0001003f8b04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001003f8b08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003f88a8(undefined *param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = param_1;
  func_0x000107c4c354();
  bVar1 = *(byte *)(*(long *)(param_1 + 8) + 0x1e);
  puVar3 = (undefined *)0x0;
  puVar4 = puVar2;
  switch((ulong)puVar2 & 0xffffffff) {
  case 0:
    puVar4 = puVar3;
    switch(bVar1) {
    case 0:
      puVar4 = PTR_PTR_1126e31f8;
      break;
    case 1:
    case 0xb:
      puVar4 = PTR_PTR_1126e31d8;
      break;
    case 2:
    case 7:
    case 9:
      puVar4 = PTR_PTR_1126e31e0;
      break;
    case 3:
      puVar4 = PTR_PTR_1126e3200;
      break;
    case 4:
    case 0xc:
      puVar4 = PTR_PTR_1126e31e8;
      break;
    case 5:
    case 8:
    case 10:
      puVar4 = PTR_PTR_1126e31f0;
      break;
    case 6:
      puVar4 = PTR_PTR_1126e3208;
      break;
    case 0xd:
    case 0xe:
    case 0xf:
      puVar4 = PTR_PTR_1126e3210;
      break;
    case 0x10:
      goto LAB_1003f8cd0;
    case 0x11:
      puVar4 = PTR_PTR_1126e3218;
code_r0x0001003f8c74:
      func_0x000107c610f4();
      func_0x000107c429a8(param_1);
      func_0x000107c429b0();
      func_0x000107c49464();
    default:
      goto LAB_1003f8ca4;
    }
    break;
  case 1:
  case 0xb:
    puVar4 = puVar3;
    switch(bVar1) {
    case 0:
      puVar4 = PTR_PTR_1126e30d8;
      break;
    case 1:
    case 0xb:
      puVar4 = PTR_PTR_1126d8cc8;
      break;
    case 2:
    case 7:
    case 9:
      puVar4 = PTR_PTR_1126e30c0;
      break;
    case 3:
      puVar4 = PTR_PTR_1126e30e0;
      break;
    case 4:
    case 0xc:
      puVar4 = PTR_PTR_1126e30c8;
      break;
    case 5:
    case 8:
    case 10:
      puVar4 = PTR_PTR_1126e30d0;
      break;
    case 6:
      puVar4 = PTR_PTR_1126e30e8;
      break;
    case 0xd:
    case 0xe:
    case 0xf:
      puVar4 = PTR_PTR_1126b9a90;
      break;
    case 0x10:
      goto LAB_1003f8cd0;
    case 0x11:
      puVar4 = PTR_PTR_1126e30f0;
      goto code_r0x0001003f8c74;
    default:
      goto LAB_1003f8ca4;
    }
    break;
  case 2:
  case 7:
  case 9:
    puVar4 = puVar3;
    switch(bVar1) {
    case 0:
      puVar4 = PTR_PTR_1126d7248;
      break;
    case 1:
    case 0xb:
      puVar4 = PTR_PTR_1126e30f8;
      break;
    case 2:
    case 7:
    case 9:
      puVar4 = PTR_PTR_1126c1100;
      break;
    case 3:
      puVar4 = PTR_PTR_1126e3110;
      break;
    case 4:
    case 0xc:
      puVar4 = PTR_PTR_1126e3100;
      break;
    case 5:
    case 8:
    case 10:
      puVar4 = PTR_PTR_1126e3108;
      break;
    case 6:
      puVar4 = PTR_PTR_1126e3118;
      break;
    case 0xd:
    case 0xe:
    case 0xf:
      puVar4 = PTR_PTR_1126b7708;
      break;
    case 0x10:
      goto LAB_1003f8cd0;
    case 0x11:
      puVar4 = PTR_PTR_1126e3120;
      goto code_r0x0001003f8c74;
    default:
      goto LAB_1003f8ca4;
    }
    break;
  case 3:
  case 6:
  case 0xd:
  case 0xf:
  case 0x10:
  case 0x11:
    goto LAB_1003f8cd0;
  case 4:
  case 0xc:
    puVar4 = puVar3;
    switch(bVar1) {
    case 0:
      puVar4 = PTR_PTR_1126e3148;
      break;
    case 1:
    case 0xb:
      puVar4 = PTR_PTR_1126e3128;
      break;
    case 2:
    case 7:
    case 9:
      puVar4 = PTR_PTR_1126e3130;
      break;
    case 3:
      puVar4 = PTR_PTR_1126e3150;
      break;
    case 4:
    case 0xc:
      puVar4 = PTR_PTR_1126e3138;
      break;
    case 5:
    case 8:
    case 10:
      puVar4 = PTR_PTR_1126e3140;
      break;
    case 6:
      puVar4 = PTR_PTR_1126e3158;
      break;
    case 0xd:
    case 0xe:
    case 0xf:
      puVar4 = PTR_PTR_1126e3168;
      break;
    case 0x10:
      goto LAB_1003f8cd0;
    case 0x11:
      puVar4 = PTR_PTR_1126e3160;
      goto code_r0x0001003f8c74;
    default:
      goto LAB_1003f8ca4;
    }
    break;
  case 5:
  case 8:
  case 10:
    puVar4 = puVar3;
    switch(bVar1) {
    case 0:
      puVar4 = PTR_PTR_1126e3190;
      break;
    case 1:
    case 0xb:
      puVar4 = PTR_PTR_1126e3170;
      break;
    case 2:
    case 7:
    case 9:
      puVar4 = PTR_PTR_1126e3178;
      break;
    case 3:
      puVar4 = PTR_PTR_1126e3198;
      break;
    case 4:
    case 0xc:
      puVar4 = PTR_PTR_1126e3180;
      break;
    case 5:
    case 8:
    case 10:
      puVar4 = PTR_PTR_1126e3188;
      break;
    case 6:
      puVar4 = PTR_PTR_1126e31a0;
      break;
    case 0xd:
    case 0xe:
    case 0xf:
      puVar4 = PTR_PTR_1126bbfd0;
      break;
    case 0x10:
      goto LAB_1003f8cd0;
    case 0x11:
      puVar4 = PTR_PTR_1126e31a8;
      goto code_r0x0001003f8c74;
    default:
      goto LAB_1003f8ca4;
    }
    break;
  case 0xe:
    puVar4 = puVar3;
    switch(bVar1) {
    case 0:
      puVar4 = PTR_PTR_1126d9bf8;
      break;
    case 1:
    case 0xb:
      puVar4 = PTR_PTR_1126e31b0;
      break;
    case 2:
    case 7:
    case 9:
      puVar4 = PTR_PTR_1126e31b8;
      break;
    case 3:
      puVar4 = PTR_PTR_1126e31c8;
      break;
    case 4:
    case 0xc:
      puVar4 = PTR_PTR_1126e31c0;
      break;
    case 5:
    case 8:
    case 10:
      puVar4 = PTR_PTR_1126db040;
      break;
    case 6:
      puVar4 = PTR_PTR_1126ded68;
      break;
    case 0xd:
    case 0xe:
    case 0xf:
      puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      if (param_2 != 0) {
        puVar2 = PTR_PTR_1126e3230;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_alloc_init_11034d1b8)(puVar2);
      return;
    case 0x10:
      goto LAB_1003f8cd0;
    case 0x11:
      puVar4 = PTR_PTR_1126e31d0;
      goto code_r0x0001003f8c74;
    default:
      goto LAB_1003f8ca4;
    }
    break;
  default:
    goto LAB_1003f8ca4;
  }
  func_0x000107c610fc();
LAB_1003f8ca4:
  if (param_2 != 0) {
    if (((int)puVar2 == 0xe) && (bVar1 - 0xd < 4)) {
      *(long *)(puVar4 + _DAT_112796db0) = param_2;
    }
    else {
      *(long *)(puVar4 + 8) = param_2;
    }
  }
LAB_1003f8cd0:
  return;
}



/* Entry: 1003f8ce4; end: 1003f8d1b; -[GPBFieldDescriptor mapKeyDataType] */

undefined1 FUN_1003f8ce4(long param_1)

{
  uint uVar1;
  
  uVar1 = ((*(ushort *)(*(long *)(param_1 + 8) + 0x1c) & 0xf00) - 0x100 >> 8) - 1;
  if (uVar1 < 0xb) {
    return (&UNK_10e60ddfe)[uVar1];
  }
  return 7;
}



/* Entry: 1003f8d1c; end: 1003f8d2b; -[GPBInt32ObjectDictionary init] */

void FUN_1003f8d1c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c030a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithObjects_forKeys_count__1125e9c78,0,0,0);
  return;
}



/* Entry: 1003f8d2c; end: 1003f8e1f; -[GPBInt32ObjectDictionary initWithObjects:forKeys:count:] */

undefined1 *
FUN_1003f8d2c(undefined8 param_1,undefined8 param_2,long *param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  puStack_68 = PTR_PTR_11270e898;
  uStack_70 = param_1;
  func_0x000107c61154(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c610fc();
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    if ((param_4 != 0) && (param_3 != (long *)0x0)) {
      for (; param_5 != 0; param_5 = param_5 + -1) {
        if (*param_3 == 0) {
          func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520);
        }
        uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
        func_0x000107c4d95c(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x000107c56bcc(uVar3);
        param_3 = param_3 + 1;
      }
    }
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1003f8e20; end: 1003f8f07; -[GPBCodedInputStream readMapEntry:extensionRegistry:field:parentMessage:] */

void FUN_1003f8e20(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  
  if (99 < *(ulong *)(param_1 + 0x30)) {
    func_0x000107c3ab00(0xffffffffffffff96,0);
  }
  uVar2 = param_1 + 8;
  FUN_100109638();
  if (uVar2 >> 0x1f != 0) {
    func_0x000107c3ab00(0xffffffffffffff9c,0);
  }
  uVar1 = *(ulong *)(param_1 + 0x20);
  uVar2 = *(long *)(param_1 + 0x18) + uVar2;
  if (uVar1 < uVar2) {
    func_0x000107c3ab00(0xffffffffffffff9a,0);
  }
  *(ulong *)(param_1 + 0x20) = uVar2;
  *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 1;
  FUN_1003f8f08(param_3,param_1,param_4,param_5,param_6);
  if (*(int *)(param_1 + 0x28) != 0) {
    func_0x000107c3ab00(0xffffffffffffff99,&PTR____CFConstantStringClassReference_11102f538);
  }
  *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + -1;
  *(ulong *)(param_1 + 0x20) = uVar1;
  return;
}



/* Entry: 1003f8f08; end: 1003f913f;  */

void FUN_1003f8f08(undefined8 param_1,ulong param_2,undefined8 param_3,undefined **param_4,
                  undefined8 param_5)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  ulong uVar7;
  undefined ***pppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  int iVar11;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  
  ppuVar5 = param_4;
  func_0x000107c4c354();
  bVar3 = param_4[1][0x1e];
  ppuVar10 = (undefined **)(ulong)bVar3;
  ppuStack_70 = (undefined **)0x0;
  ppuStack_68 = (undefined **)0x0;
  if (ppuVar10 == (undefined **)0x11) {
    ppuVar6 = param_4;
    func_0x000107c4163c();
    ppuStack_70 = ppuVar6;
  }
  uVar1 = *(uint *)(&UNK_10e60e064 + ((ulong)ppuVar5 & 0xffffffff) * 4);
  uVar2 = *(uint *)(&UNK_10e60e064 + (long)ppuVar10 * 4);
  do {
    while( true ) {
      ppuVar6 = (undefined **)(param_2 + 8);
      FUN_100109554();
      uVar4 = (uint)ppuVar6;
      if (uVar4 != (uVar1 | 8)) break;
      pppuVar8 = &ppuStack_68;
      ppuVar9 = ppuVar5;
LAB_1003f8fb8:
      FUN_1003f9140(param_2,pppuVar8,ppuVar9,param_3,param_4);
    }
    pppuVar8 = &ppuStack_70;
    ppuVar9 = ppuVar10;
    if (uVar4 == (uVar2 | 0x10)) goto LAB_1003f8fb8;
    iVar11 = (int)ppuVar5;
    if (uVar4 == 0) {
      if ((iVar11 == 0xe) && (ppuStack_68 == (undefined **)0x0)) {
        ppuVar6 = &PTR____CFConstantStringClassReference_110daafd8;
        func_0x000107c61174();
        ppuStack_68 = ppuVar6;
      }
      ppuVar5 = ppuStack_68;
      if (((byte)(bVar3 - 0xd) < 4) && (ppuStack_70 == (undefined **)0x0)) {
        if (bVar3 == 0xd) {
          FUN_1001d679c();
LAB_1003f9050:
          func_0x000107c61174();
          ppuStack_70 = ppuVar6;
        }
        else if (bVar3 == 0xf) {
          ppuVar10 = param_4;
          func_0x000107c4d160();
          func_0x000107c610fc();
          ppuStack_70 = ppuVar10;
        }
        else if (bVar3 == 0xe) {
          ppuVar6 = &PTR____CFConstantStringClassReference_110daafd8;
          goto LAB_1003f9050;
        }
      }
      if ((iVar11 == 0xe) && ((byte)(bVar3 - 0xd) < 4)) {
        func_0x000107c56bcc(param_1);
        goto LAB_1003f90d4;
      }
      if (((bVar3 == 0x11) && ((*(ushort *)(param_4[1] + 0x1c) >> 0xc & 1) != 0)) &&
         (func_0x000107c4a6c0(), (int)param_4 == 0)) {
        func_0x000107c51f5c(param_1);
        func_0x000107c3d928(param_5);
      }
      else {
        func_0x000107c54d34(param_1);
      }
      goto LAB_1003f90c0;
    }
    uVar7 = param_2;
    func_0x000107c5b0ec();
    if ((uVar7 & 1) == 0) {
LAB_1003f90c0:
      ppuVar5 = ppuStack_68;
      if ((iVar11 - 0xdU & 0xff) < 4) {
LAB_1003f90d4:
        func_0x000107c61170(ppuVar5);
      }
      if ((byte)(bVar3 - 0xd) < 4) {
        func_0x000107c61170(ppuStack_70);
      }
      return;
    }
  } while( true );
}



/* Entry: 1003f9140; end: 1003f92e3;  */

void FUN_1003f9140(long param_1,ulong *param_2,undefined4 param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  uint uVar2;
  
  switch(param_3) {
  case 0:
    param_1 = param_1 + 8;
    FUN_100109638();
    *(bool *)param_2 = param_1 != 0;
    break;
  case 1:
  case 2:
    func_0x0001001095dc(param_1 + 8,4);
    uVar2 = *(uint *)(*(long *)(param_1 + 8) + *(long *)(param_1 + 0x18));
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 4;
    goto code_r0x0001003f92d0;
  case 3:
    func_0x0001001095dc(param_1 + 8,4);
    uVar2 = *(uint *)(*(long *)(param_1 + 8) + *(long *)(param_1 + 0x18));
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 4;
    *(uint *)param_2 = uVar2;
    break;
  case 4:
  case 5:
    func_0x0001001095dc(param_1 + 8,8);
    uVar1 = *(ulong *)(*(long *)(param_1 + 8) + *(long *)(param_1 + 0x18));
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 8;
    goto code_r0x0001003f9224;
  case 6:
    func_0x0001001095dc(param_1 + 8,8);
    uVar1 = *(ulong *)(*(long *)(param_1 + 8) + *(long *)(param_1 + 0x18));
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 8;
    *param_2 = uVar1;
    break;
  case 7:
  case 0xb:
  case 0x11:
    uVar2 = (int)param_1 + 8;
    FUN_100109638();
    *(uint *)param_2 = uVar2;
    break;
  case 8:
  case 0xc:
    uVar1 = param_1 + 8;
    FUN_100109638();
    goto code_r0x0001003f9250;
  case 9:
    uVar2 = (int)param_1 + 8;
    FUN_100109638();
    uVar2 = -(uVar2 & 1) ^ uVar2 >> 1;
code_r0x0001003f92d0:
    *(uint *)param_2 = uVar2;
    break;
  case 10:
    uVar1 = param_1 + 8;
    FUN_100109638();
    uVar1 = -(uVar1 & 1) ^ uVar1 >> 1;
code_r0x0001003f9224:
    *param_2 = uVar1;
    break;
  case 0xd:
    func_0x000107c61170(*param_2);
    uVar1 = param_1 + 8;
    FUN_10010cdb0();
    goto code_r0x0001003f9250;
  case 0xe:
    func_0x000107c61170(*param_2);
    uVar1 = param_1 + 8;
    FUN_10010c8fc();
code_r0x0001003f9250:
    *param_2 = uVar1;
    break;
  case 0xf:
    func_0x000107c4d160();
    func_0x000107c610fc();
    func_0x000107c4f9ac(param_1);
    func_0x000107c61170(*param_2);
    *param_2 = param_5;
  }
  return;
}



/* Entry: 1003f92e4; end: 1003f934b; +[RTUSBlizzardEventConfig descriptor] */

void FUN_1003f92e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0dc0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c29f60,
                        &PTR____CFConstantStringClassReference_110f3d838,&PTR_DAT_11333e040,
                        &PTR_s_fieldsArray_11333e098,3,0x20,0x1c);
    puRam00000001137f0dc0 = puVar1;
  }
  return;
}



/* Entry: 1003f934c; end: 1003f937f; -[GPBInt32Array init] */

void FUN_1003f934c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_11270e788;
  uStack_20 = param_1;
  func_0x000107c61154(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1003f9380; end: 1003f93a7; -[GPBInt32Array addValue:] */

void FUN_1003f9380(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uStack_14;
  
  uStack_14 = param_3;
  func_0x000107c3d940(param_1,param_2,&uStack_14,1);
  return;
}



/* Entry: 1003f93a8; end: 1003f943b; -[GPBInt32Array addValues:count:] */

void FUN_1003f93a8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  ulong uVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  if ((param_3 != 0) && (param_4 != 0)) {
    lVar4 = *(long *)(param_1 + 0x18);
    uVar1 = lVar4 + param_4;
    if (*(ulong *)(param_1 + 0x20) < uVar1) {
      func_0x000107c498c8(param_1,param_2,(uVar1 & 0xfffffffffffffff0) + 0x10);
    }
    *(ulong *)(param_1 + 0x18) = uVar1;
    func_0x000107c610b4(*(long *)(param_1 + 0x10) + lVar4 * 4,param_3,param_4 << 2);
    lVar4 = *(long *)(param_1 + 8);
    if (lVar4 != 0) {
      lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar5 = lVar4;
      func_0x000107c61158();
      func_0x000107c41800();
      lVar8 = *(long *)(lVar5 + 8);
      lVar5 = lVar8;
      func_0x000107c4080c();
      lVar3 = lRam0000000000000000;
      do {
        if (lVar5 == 0) {
LAB_10060c364:
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
            return;
          }
          func_0x000107c60e78();
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_msgSend_11034d288)();
          return;
        }
        lVar10 = 0;
        do {
          if (lRam0000000000000000 != lVar3) {
            func_0x000107c61128(lVar8);
          }
          lVar9 = *(long *)(lVar10 * 8);
          lVar7 = lVar9;
          func_0x000107c433d8();
          if ((int)lVar7 == 1) {
            lVar7 = 0;
            if (*(long *)(lVar4 + 0x40) != 0) {
              lVar7 = *(long *)(*(long *)(lVar4 + 0x40) +
                               (ulong)*(uint *)(*(long *)(lVar9 + 8) + 0x18));
            }
            if (lVar7 == param_1) {
              piVar2 = (int *)&DAT_112796b30;
              if (3 < *(byte *)(*(long *)(lVar9 + 8) + 0x1e) - 0xd) {
                piVar2 = (int *)&DAT_112796b34;
              }
              *(undefined8 *)(param_1 + *piVar2) = 0;
              FUN_100109ff0(lVar4);
              goto LAB_10060c364;
            }
          }
          lVar10 = lVar10 + 1;
        } while (lVar5 != lVar10);
        lVar5 = lVar8;
        func_0x000107c4080c();
      } while( true );
    }
  }
  return;
}



/* Entry: 1003f943c; end: 1003f94af; -[GPBInt32Array internalResizeToCapacity:] */

void FUN_1003f943c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x000107c612c8(lVar1,param_3 << 2);
  *(long *)(param_1 + 0x10) = lVar1;
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520);
  }
  *(long *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 1003f94b0; end: 1003f94eb; -[GPBInt32ObjectDictionary setGPBGenericValue:forGPBGenericValueKey:] */

void FUN_1003f94b0(long param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *param_3;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d95c(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*param_4);
                    /* WARNING: Could not recover jumptable at 0x00010c1d0570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_setObject_forKey__112651b80,uVar3,puVar1);
  return;
}



/* Entry: 1003f94ec; end: 1003f955b; +[SCFideliusPerformerInitializer fetcherPerformer] */

void FUN_1003f94ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae790;
  func_0x000107c610f4(PTR_PTR_1126ae790);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f310b3f);
  func_0x000107c61180();
  func_0x000107c470d0(puVar1,param_2,puVar2,0x11,0,0x18);
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1003f955c; end: 1003f95c3; +[RTUSFilteringParseTree descriptor] */

void FUN_1003f955c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0dd0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c2a5f0,
                        &PTR____CFConstantStringClassReference_110f3db78,&PTR_DAT_11333e330,
                        &PTR_DAT_11333e348,1,0x10,0x1c);
    puRam00000001137f0dd0 = puVar1;
  }
  return;
}



/* Entry: 1003f95c4; end: 1003f9633; +[SCFideliusPerformerInitializer mutatorPerformer] */

void FUN_1003f95c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae790;
  func_0x000107c610f4(PTR_PTR_1126ae790);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f310b6d);
  func_0x000107c61180();
  func_0x000107c470d0(puVar1,param_2,puVar2,0x11,0,0x18);
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1003f9634; end: 1003f971b; -[SCDocObjectFideliusFriendMetadataCoordinator initWithDocObjectContext:fetcherPerformer:mutatorPerformer:] */

undefined1 *
FUN_1003f9634(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_1126e9a90;
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
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1003f971c; end: 1003f985b; -[SCDocObjectFideliusFriendMetadataObservableRepository initWithFideliusFriendMetadataCoordinator:snapchattersDataTracker:circumstanceEngine:] */

undefined1 *
FUN_1003f971c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_48 = PTR_PTR_1126e9a98;
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
    puVar3 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61180();
    func_0x000107c470d0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar4);
    func_0x000107c3d740(*(undefined8 *)((long)puVar1 + 0x10));
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1003f985c; end: 1003f994f; +[RTUSFilteringExpression descriptor] */

undefined * FUN_1003f985c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0de0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c2a690,
                        &PTR____CFConstantStringClassReference_110f3dbb8,&PTR_DAT_11333e330,
                        &PTR_DAT_11333e6c8,0xb,0x60,0x1c);
    func_0x000107c5a8b4();
    puRam00000001137f0de0 = puVar1;
  }
  return puRam00000001137f0de0;
}



/* Entry: 1003f9950; end: 1003f9953;  */

void FUN_1003f9950(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1003f9954; end: 1003f9a07; -[SCDocObjectFideliusFriendMetadataObservableRepository diffFideliusFriendMetadataObservable] */

void FUN_1003f9954(long param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1003f99d0;
  puStack_30 = &UNK_110842e18;
  lStack_28 = param_1;
  if (*(long *)(param_1 + 0x38) != -1) {
    FUN_10002a2fc((long *)(param_1 + 0x38),&puStack_48);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1003f9a08; end: 1003f9a1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003f9a08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3f950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112727ba0),
             PTR_s_coldStartLoad_1125ad7f8);
  return;
}



/* Entry: 1003f9a1c; end: 1003f9abb; -[SCFideliusManager coldStartLoad] */

void FUN_1003f9a1c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar1 = &UNK_10f310200;
  FUN_1000ba800(&UNK_10f310200);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x1003f9c58;
  puStack_40 = &UNK_110842e18;
  lStack_38 = param_1;
  func_0x000107c4e524(*(undefined8 *)(param_1 + 0x88),param_2,&puStack_58);
  func_0x0001000e2a84(puVar1);
  return;
}



/* Entry: 1003f9abc; end: 1003f9b87; -[SCSecurityServices initWithFideliusFriendMetadataCoordinator:fideliusFriendMetadataObservableRepository:fideliusManager:] */

undefined1 *
FUN_1003f9abc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_112702d40;
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



/* Entry: 1003f9b88; end: 1003f9bff; -[_TtC24SCFideliusArroyoServices24SCFideliusArroyoServices initWithKeyProvider:reEncryptionDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003f9b88(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_1130443a0) = param_3;
  *(undefined8 *)(param_1 + _DAT_1130443a8) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 1003f9c00; end: 1003f9c9f; -[_TtC18SCFideliusServices18SCFideliusServices initWithKeyProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003f9c00(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_1130443d8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1003f9ca0; end: 1003f9d2b;  */

void FUN_1003f9ca0(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003f9d2c; end: 1003f9d7b;  */

void FUN_1003f9d2c(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000ad7c4();
  puVar1 = PTR_PTR_1126b7a80;
  func_0x000107c610f8();
  func_0x000107c45780();
  func_0x000107c61170(param_2);
  *param_1 = puVar1;
  return;
}



/* Entry: 1003f9d7c; end: 1003f9def; -[SCArgosService initWithArgosImpl:] */

undefined1 * FUN_1003f9d7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112706508;
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



/* Entry: 1003f9df0; end: 1003f9df7;  */

void FUN_1003f9df0(undefined8 *param_1)

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



/* Entry: 1003f9df8; end: 1003f9e4b;  */

void FUN_1003f9df8(undefined8 *param_1)

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



/* Entry: 1003f9e4c; end: 1003f9e5b;  */

void FUN_1003f9e4c(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar2,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_10022dd14();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x28) = uStack_70;
  *(undefined8 *)(lVar2 + 0x30) = uStack_78;
  *(undefined8 *)(lVar2 + 0x38) = uStack_80;
  *(undefined8 *)(lVar2 + 0x40) = uStack_88;
  *(undefined8 *)(lVar2 + 0x48) = uStack_90;
  puVar3 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar4 = uStack_70;
  func_0x000107c61174();
  uVar5 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar6 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar7 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar8 = uStack_90;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x18) = puVar3;
  puVar9 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x20) = puVar9;
  puVar10 = PTR_PTR_1126a7f78;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x10) = puVar10;
  func_0x000107c61174();
  uVar11 = uStack_68;
  func_0x000107c61174();
  uVar12 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174(puVar10);
  uVar12 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef19dd0);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar10);
  uVar12 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef29570);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(puVar10);
  uVar12 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(puVar10);
  uVar12 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010efc3070);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(puVar10);
  uVar12 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(puVar10);
  func_0x000107c61174();
  uVar12 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010efc3260);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(puVar10);
  func_0x000107c61174();
  uVar12 = 0xd00000000000002a;
  func_0x000107c5fadc(0xd00000000000002a,0x800000010efc3290);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar12);
  func_0x000107c3e740(puVar10);
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1003fa338);
    (*pcVar1)();
  }
  *(undefined **)(lVar2 + 0x50) = puVar3;
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar9 != (undefined *)0x0) {
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    *(undefined **)(lVar2 + 0x58) = puVar9;
    *param_1 = lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003fa33c);
  (*pcVar1)();
}



/* Entry: 1003f9e5c; end: 1003fa33b;  */

void FUN_1003f9e5c(long *param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
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
  FUN_10022dd14();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x28) = uStack_70;
  *(undefined8 *)(param_2 + 0x30) = uStack_78;
  *(undefined8 *)(param_2 + 0x38) = uStack_80;
  *(undefined8 *)(param_2 + 0x40) = uStack_88;
  *(undefined8 *)(param_2 + 0x48) = uStack_90;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174();
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar7 = uStack_90;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x18) = puVar2;
  puVar8 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x20) = puVar8;
  puVar9 = PTR_PTR_1126a7f78;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar9;
  func_0x000107c61174();
  uVar10 = uStack_68;
  func_0x000107c61174();
  uVar11 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174(puVar9);
  uVar11 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef19dd0);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar9);
  uVar11 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef29570);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar9);
  uVar11 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(puVar9);
  uVar11 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010efc3070);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(puVar9);
  uVar11 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(puVar9);
  func_0x000107c61174();
  uVar11 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010efc3260);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(puVar9);
  func_0x000107c61174();
  uVar11 = 0xd00000000000002a;
  func_0x000107c5fadc(0xd00000000000002a,0x800000010efc3290);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar11);
  func_0x000107c3e740(puVar9);
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1003fa338);
    (*pcVar1)();
  }
  *(undefined **)(param_2 + 0x50) = puVar2;
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar8 != (undefined *)0x0) {
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    *(undefined **)(param_2 + 0x58) = puVar8;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003fa33c);
  (*pcVar1)();
}



/* Entry: 1003fa33c; end: 1003fa343;  */

void FUN_1003fa33c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x60);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003fa344; end: 1003fa397;  */

void FUN_1003fa344(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x60);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1003fa398; end: 1003fa3ab;  */

void FUN_1003fa398(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long unaff_x20;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar2,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                *(undefined8 *)(unaff_x20 + 0x48));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_10020ebd8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x28) = uStack_70;
  *(undefined8 *)(lVar2 + 0x30) = uStack_78;
  *(undefined8 *)(lVar2 + 0x38) = uStack_80;
  *(undefined8 *)(lVar2 + 0x40) = uStack_88;
  *(undefined8 *)(lVar2 + 0x48) = uStack_90;
  *(undefined8 *)(lVar2 + 0x50) = uStack_98;
  *(undefined8 *)(lVar2 + 0x58) = uStack_a0;
  puVar3 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar4 = uStack_70;
  func_0x000107c61174();
  uVar5 = uStack_78;
  func_0x000107c61174();
  uVar6 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar7 = uStack_88;
  func_0x000107c61174();
  uVar8 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar9 = uStack_98;
  func_0x000107c61174();
  uVar10 = uStack_a0;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x18) = puVar3;
  puVar11 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x20) = puVar11;
  puVar12 = PTR_PTR_1126a7f10;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x10) = puVar12;
  func_0x000107c61174();
  uVar13 = uStack_68;
  func_0x000107c61174();
  uVar14 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar12);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174(puVar12);
  uVar14 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar12);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174(puVar12);
  uVar14 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010efc3010);
  func_0x000107c5a49c(puVar12);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar14);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(puVar12);
  uVar14 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef19dd0);
  func_0x000107c5a49c(puVar12);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar14);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(puVar12);
  uVar14 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef9e300);
  func_0x000107c5a49c(puVar12);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar14);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(puVar12);
  uVar14 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010efc3030);
  func_0x000107c5a49c(puVar12);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar14);
  func_0x000107c61174(uVar9);
  func_0x000107c61174(puVar12);
  uVar14 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar12);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar14);
  func_0x000107c61174(uVar10);
  func_0x000107c61174(puVar12);
  uVar14 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010efc3050);
  func_0x000107c5a49c(puVar12);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010efc3070);
  func_0x000107c5a49c(puVar12);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010efc3090);
  func_0x000107c5a49c(puVar12);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar14);
  func_0x000107c3e740(puVar12);
  lVar15 = *(long *)(lVar2 + 0x18);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar15 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1003fa99c);
    (*pcVar1)();
  }
  *(long *)(lVar2 + 0x60) = lVar15;
  lVar15 = *(long *)(lVar2 + 0x20);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar15 != 0) {
    func_0x000107c61170(uVar13);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar10);
    *(long *)(lVar2 + 0x68) = lVar15;
    *param_1 = lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003fa9a0);
  (*pcVar1)();
}



/* Entry: 1003fa3ac; end: 1003fa99f;  */

void FUN_1003fa3ac(long *param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
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
  FUN_10020ebd8();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x28) = uStack_70;
  *(undefined8 *)(param_2 + 0x30) = uStack_78;
  *(undefined8 *)(param_2 + 0x38) = uStack_80;
  *(undefined8 *)(param_2 + 0x40) = uStack_88;
  *(undefined8 *)(param_2 + 0x48) = uStack_90;
  *(undefined8 *)(param_2 + 0x50) = uStack_98;
  *(undefined8 *)(param_2 + 0x58) = uStack_a0;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174();
  uVar4 = uStack_78;
  func_0x000107c61174();
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174();
  uVar7 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar8 = uStack_98;
  func_0x000107c61174();
  uVar9 = uStack_a0;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x18) = puVar2;
  puVar10 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x20) = puVar10;
  puVar11 = PTR_PTR_1126a7f10;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar11;
  func_0x000107c61174();
  uVar12 = uStack_68;
  func_0x000107c61174();
  uVar13 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174(puVar11);
  uVar13 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174(puVar11);
  uVar13 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010efc3010);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar13);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar11);
  uVar13 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef19dd0);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar13);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(puVar11);
  uVar13 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef9e300);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(puVar11);
  uVar13 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010efc3030);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar13);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(puVar11);
  uVar13 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar13);
  func_0x000107c61174(uVar9);
  func_0x000107c61174(puVar11);
  uVar13 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010efc3050);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010efc3070);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010efc3090);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar13);
  func_0x000107c3e740(puVar11);
  lVar14 = *(long *)(param_2 + 0x18);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar14 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1003fa99c);
    (*pcVar1)();
  }
  *(long *)(param_2 + 0x60) = lVar14;
  lVar14 = *(long *)(param_2 + 0x20);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar14 != 0) {
    func_0x000107c61170(uVar12);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    *(long *)(param_2 + 0x68) = lVar14;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003fa9a0);
  (*pcVar1)();
}



/* Entry: 1003fa9a0; end: 1003fa9ef;  */

void FUN_1003fa9a0(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000ad7c4();
  puVar1 = PTR_PTR_1126a7118;
  func_0x000107c610f8();
  func_0x000107c45b30();
  func_0x000107c61170(param_2);
  *param_1 = puVar1;
  return;
}



/* Entry: 1003fa9f0; end: 1003faa63; -[SCContentDeliveryCacheControllerServices initWithCacheController:] */

undefined1 * FUN_1003fa9f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112702bd0;
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



/* Entry: 1003faa64; end: 1003faab3;  */

void FUN_1003faa64(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000ad7c4();
  puVar1 = PTR_PTR_1126a7120;
  func_0x000107c610f8();
  func_0x000107c47a68();
  func_0x000107c61170(param_2);
  *param_1 = puVar1;
  return;
}



/* Entry: 1003faab4; end: 1003fab27; -[SCNetworkMappingProviderServices initWithNetworkMappingProvider:] */

undefined1 * FUN_1003faab4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112702bd8;
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



/* Entry: 1003fab28; end: 1003fab2f;  */

void FUN_1003fab28(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 unaff_x20;
  
  func_0x0001000ad7c4();
  uVar1 = 0;
  FUN_100099490(0);
  func_0x000107c610f8();
  func_0x0001003fab78(unaff_x20,uVar1);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1003fab30; end: 1003fabc3;  */

void FUN_1003fab30(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001000ad7c4();
  uVar1 = 0;
  FUN_100099490(0);
  func_0x000107c610f8();
  func_0x0001003fab78(param_2,uVar1);
  *param_1 = param_2;
  return;
}



/* Entry: 1003fabc4; end: 1003fabcb; -[SCFideliusManager fideliusStatus] */

undefined8 FUN_1003fabc4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 1003fabcc; end: 1003fac53; -[SCFideliusManager _loadFromDisk:] */

void FUN_1003fabcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000ba800(&UNK_10f310220);
  func_0x000107c54978(param_1,param_2,1);
  func_0x000107c3bd5c(param_1,param_2,param_3);
  func_0x000107c3c050(param_1,param_2,param_3);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c42888();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1003fac54; end: 1003fafe3; -[SCFideliusManager _loadFromArchiveV2:] */

/* WARNING: Possible PIC construction at 0x0001003facac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003fad0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003fad44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003faf40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003faf50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003fae10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003fae20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003fae44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003faf38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003faf04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003faea0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003fadac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003faf8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001003fadb0) */
/* WARNING: Removing unreachable block (ram,0x0001003faf70) */
/* WARNING: Removing unreachable block (ram,0x0001003faea4) */
/* WARNING: Removing unreachable block (ram,0x0001003faf08) */
/* WARNING: Removing unreachable block (ram,0x0001003fae48) */
/* WARNING: Removing unreachable block (ram,0x0001003faecc) */
/* WARNING: Removing unreachable block (ram,0x0001003fae54) */
/* WARNING: Removing unreachable block (ram,0x0001003faf34) */
/* WARNING: Removing unreachable block (ram,0x0001003fae24) */
/* WARNING: Removing unreachable block (ram,0x0001003fae84) */
/* WARNING: Removing unreachable block (ram,0x0001003fae28) */
/* WARNING: Removing unreachable block (ram,0x0001003fae14) */
/* WARNING: Removing unreachable block (ram,0x0001003faf54) */
/* WARNING: Removing unreachable block (ram,0x0001000e2a84) */
/* WARNING: Removing unreachable block (ram,0x0001003fad48) */
/* WARNING: Removing unreachable block (ram,0x0001003faf3c) */
/* WARNING: Removing unreachable block (ram,0x0001003fad10) */
/* WARNING: Removing unreachable block (ram,0x0001003fadbc) */
/* WARNING: Removing unreachable block (ram,0x0001003fad1c) */
/* WARNING: Removing unreachable block (ram,0x0001003facb0) */
/* WARNING: Removing unreachable block (ram,0x0001003fad64) */
/* WARNING: Removing unreachable block (ram,0x0001003facd0) */
/* WARNING: Removing unreachable block (ram,0x0001003faf90) */
/* WARNING: Removing unreachable block (ram,0x0001003faf44) */

void FUN_1003fac54(long param_1)

{
  undefined8 uVar1;
  
  FUN_1000ba800(&UNK_10f31051f);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c3e0fc();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1003fafe4; end: 1003fb08f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003fafe4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  lVar1 = param_1 + 0x28;
  func_0x000107c61148();
  if (lVar1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126bd040;
    func_0x000107c610f4(PTR_PTR_1126bd040);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    lVar2 = lVar1 + _DAT_112727b5c;
    func_0x000107c61148(lVar2);
    lVar3 = lVar2;
    func_0x000107c3de48();
    func_0x000107c61180();
    func_0x000107c474fc(puVar5,param_2,uVar4,lVar3);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar2);
  }
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1003fb090; end: 1003fb11b; -[SCFideliusIdentityArchiveManager initWithLogger:appStartExperimentReader:] */

undefined8
FUN_1003fb090(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bd038;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c44fec(puVar1);
  func_0x000107c61180();
  func_0x000107c47528(param_1,param_2,param_3,puVar1,param_4);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(puVar1);
  return param_1;
}



/* Entry: 1003fb11c; end: 1003fb193; +[SCFideliusPerformerInitializer identityArchiveManagerPerformer] */

void FUN_1003fb11c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae790;
  func_0x000107c610f4(PTR_PTR_1126ae790);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f310c27);
  func_0x000107c61180();
  func_0x000107c45454(puVar1,param_2,puVar2,0x15,0,0x18,
                      &PTR____CFConstantStringClassReference_110e10b38);
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1003fb194; end: 1003fb463; -[SCContentManagerServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003fb194(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  puVar1 = PTR_PTR_1126b7f08;
  func_0x000107c610fc();
  uVar5 = *(undefined8 *)(param_1 + _DAT_1127248b8);
  *(undefined **)(param_1 + _DAT_1127248b8) = puVar1;
  func_0x000107c61170(uVar5);
  func_0x000107c61144(auStack_78,param_1);
  puVar2 = PTR_PTR_1126ae720;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  puStack_90 = &UNK_1054d7924;
  puStack_88 = &UNK_110891090;
  func_0x000107c6111c(auStack_80,auStack_78);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  uVar5 = *(undefined8 *)(param_1 + _DAT_1127248bc);
  *(undefined **)(param_1 + _DAT_1127248bc) = puVar2;
  func_0x000107c61170(uVar5);
  uVar5 = *(undefined8 *)(param_1 + _DAT_1127248c0);
  puVar2 = PTR_PTR_1126b9ec0;
  func_0x000107c610f4(PTR_PTR_1126b9ec0);
  func_0x000107c460cc();
  func_0x000107c42c20(uVar5);
  func_0x000107c61170(puVar2);
  puVar2 = PTR_PTR_1126ae720;
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  puStack_b8 = &UNK_1054d7964;
  puStack_b0 = &UNK_1108910c0;
  func_0x000107c6111c(auStack_a8,auStack_78);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126ae720;
  puStack_f0 = puVar1;
  uStack_e8 = 0xc2000000;
  puStack_e0 = &UNK_1054d79a4;
  puStack_d8 = &UNK_1108910f0;
  func_0x000107c6111c(auStack_d0,auStack_78);
  func_0x000107c3e4fc(puVar3);
  func_0x000107c61180();
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_f8,auStack_78);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  uVar5 = *(undefined8 *)(param_1 + _DAT_1127248c4);
  puVar4 = PTR_PTR_1126b9ec8;
  func_0x000107c610f4(PTR_PTR_1126b9ec8);
  func_0x000107c45a88();
  func_0x000107c42c20(uVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_f8);
  func_0x000107c61170(puVar3);
  func_0x000107c61120(auStack_d0);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_a8);
  func_0x000107c61120(auStack_80);
  func_0x000107c61120(auStack_78);
  return;
}



/* Entry: 1003fb464; end: 1003fb583; -[SCFideliusIdentityArchiveManager initWithLogger:performer:appStartExperimentReader:] */

undefined1 *
FUN_1003fb464(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar2 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puVar1 = &UNK_10f30eb3b;
  FUN_1000ba800(&UNK_10f30eb3b);
  puStack_48 = PTR_PTR_1126eaf48;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    func_0x000107c61174(param_4);
    uVar3 = *(undefined8 *)((long)puVar2 + 8);
    *(undefined8 *)((long)puVar2 + 8) = param_4;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_3);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x10);
    *(undefined8 *)((long)puVar2 + 0x10) = param_3;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_5);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x18);
    *(undefined8 *)((long)puVar2 + 0x18) = param_5;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar2 + 0x30) = 0;
    func_0x000107c3c510(puVar2);
    *(undefined1 *)((long)puVar2 + 0x31) = 0;
  }
  func_0x0001000e2a84(puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 1003fb584; end: 1003fb63b; -[SCFideliusIdentityArchiveManager _setArchiveIdentity] */

/* WARNING: Possible PIC construction at 0x0001003fb5dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003fb5fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001003fb5e0) */
/* WARNING: Removing unreachable block (ram,0x0001003fb600) */
/* WARNING: Removing unreachable block (ram,0x0001003fb608) */
/* WARNING: Removing unreachable block (ram,0x0001003fb5f4) */

void FUN_1003fb584(long param_1)

{
  long lVar1;
  undefined *puVar2;
  
  FUN_1000ba800(&UNK_10f30eb9c);
  if (((*(byte *)(param_1 + 0x30) & 1) == 0) && (*(long *)(param_1 + 0x20) == 0)) {
    lVar1 = param_1;
    func_0x000107c3bd70();
    func_0x000107c61180();
    puVar2 = *(undefined **)(param_1 + 0x20);
    *(long *)(param_1 + 0x20) = lVar1;
  }
  else {
    puVar2 = PTR_PTR_1126ae4e8;
    func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
    func_0x000107c61180();
    func_0x000107c42888();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1003fb63c; end: 1003fb677; -[SCFideliusIdentityArchiveManager _loadIdentity] */

void FUN_1003fb63c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107c3bd74();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x000107c3bd7c(param_1);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1003fb678; end: 1003fb71b; -[SCFideliusIdentityArchiveManager _loadIdentityFromArchive] */

void FUN_1003fb678(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b85c8;
  func_0x000107c5a9bc(PTR_PTR_1126b85c8);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126c03c8;
  func_0x000107c61158(PTR_PTR_1126c03c8);
  func_0x000107c60b14();
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126bd040;
  func_0x000107c3b71c(PTR_PTR_1126bd040);
  func_0x000107c61180();
  puVar4 = puVar1;
  func_0x000107c4b754(puVar1,param_2,puVar2,puVar3);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1003fb71c; end: 1003fb76f; +[SCFideliusIdentityArchiveManager _fideliusIdentityPath] */

void FUN_1003fb71c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b85c8;
  func_0x000107c5a9bc(PTR_PTR_1126b85c8);
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c4e450();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1003fb770; end: 1003fb7e3; -[SCContentManagerPlaybackServices initWithContentFetcher:] */

undefined1 * FUN_1003fb770(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126fd8a8;
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



/* Entry: 1003fb7e4; end: 1003fb8af; -[SCContentManagerServices initWithBufferedContentFetcher:cachePolicyManager:storageManager:] */

undefined1 *
FUN_1003fb7e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126fd8b0;
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



/* Entry: 1003fb8b0; end: 1003fb90b;  */

void FUN_1003fb8b0(void)

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



/* Entry: 1003fb90c; end: 1003fba4b; -[SCChatContentDeliveringEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003fb90c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x000107c61144(auStack_48,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_50,auStack_48);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ba128;
  func_0x000107c610f4(PTR_PTR_1126ba128);
  func_0x000107c45d7c();
  func_0x000107c42c20(*(undefined8 *)(param_1 + _DAT_112724d6c));
  puVar3 = PTR_PTR_1126ba130;
  func_0x000107c610f4(PTR_PTR_1126ba130);
  func_0x000107c47148();
  func_0x000107c42c20(*(undefined8 *)(param_1 + _DAT_112724d70));
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_50);
  func_0x000107c61120(auStack_48);
  return;
}



/* Entry: 1003fba4c; end: 1003fbabf; -[SCChatContentDeliveringServices initWithChatContentDelivery:] */

undefined1 * FUN_1003fba4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126fd9d0;
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



/* Entry: 1003fbac0; end: 1003fbb33; -[SCChatLegacyContentDeliveryServices initWithLegacyChatContentDelivery:] */

undefined1 * FUN_1003fbac0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126fd920;
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


