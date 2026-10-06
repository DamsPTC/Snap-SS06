/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00010000; end: 00010047;  */

void FUN_00010000(void)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)(*unaff_x20);
  return;
}



/* Entry: 00010048; end: 000100c7;  */

void FUN_00010048(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xae5fd8;
  FUN_000103cc(0xae5fd8,0x10234,&UNK_007cc908);
                    /* WARNING: Could not recover jumptable at 0x00777864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s10Foundation21_BridgedStoredNSErrorPAAE9errorCodeSivg_0099c270)(param_1,uVar1);
  return;
}



/* Entry: 000100c8; end: 0001012f;  */

void FUN_000100c8(undefined8 param_1,undefined8 param_2)

{
  FUN_000103cc(0xae5fd8,0x10234,&UNK_007cc908);
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00777828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s10Foundation21_BridgedStoredNSErrorPAAE08_bridgedD0xSgSo0D0C_tcfC_0099c248)
            (param_1);
  return;
}



/* Entry: 00010130; end: 0001014f;  */

void FUN_00010130(void)

{
  __sSo8NSObjectC10ObjectiveCE9hashValueSivg();
  return;
}



/* Entry: 00010150; end: 000101fb;  */

void FUN_00010150(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0xae5fd8;
  FUN_000103cc(0xae5fd8,0x10234,&UNK_007cc908);
                    /* WARNING: Could not recover jumptable at 0x00777858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s10Foundation21_BridgedStoredNSErrorPAAE4hash4intoys6HasherVz_tF_0099c268)
            (param_1,param_2,uVar1);
  return;
}



/* Entry: 000101fc; end: 00010283;  */

void FUN_000101fc(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 00010284; end: 00010303;  */

void FUN_00010284(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xae5fa0;
  FUN_000103cc(0xae5fa0,0x10234,&UNK_007cc8c4);
                    /* WARNING: Could not recover jumptable at 0x00779010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorP10FoundationAC13CustomNSErrorRzrlE7_domainSSvg_0099c5d8)(param_1,uVar1);
  return;
}



/* Entry: 00010304; end: 00010307;  */

void FUN_00010304(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077904c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE9_userInfoyXlSgvg_0099b710)();
  return;
}



/* Entry: 00010308; end: 00010347;  */

void FUN_00010308(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xae5fd8;
  FUN_000103cc(0xae5fd8,0x10234,&UNK_007cc908);
                    /* WARNING: Could not recover jumptable at 0x0077781c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s10Foundation21_BridgedStoredNSErrorPAAE012_getEmbeddedD0yXlSgyF_0099c240)
            (param_1,uVar1);
  return;
}



/* Entry: 00010348; end: 0001039f;  */

void FUN_00010348(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0xae5fd8;
  FUN_000103cc(0xae5fd8,0x10234,&UNK_007cc908);
                    /* WARNING: Could not recover jumptable at 0x00777840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s10Foundation21_BridgedStoredNSErrorPAAE2eeoiySbx_xtFZ_0099c258)
            (param_1,param_2,param_3,uVar1);
  return;
}



/* Entry: 000103a0; end: 000103cb;  */

void FUN_000103a0(void)

{
  FUN_000103cc(0xae5f90,0x10234,&UNK_007cc7dc);
  return;
}



/* Entry: 000103cc; end: 0001040b;  */

void FUN_000103cc(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    _swift_getWitnessTable(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 0001040c; end: 000104e7;  */

void FUN_0001040c(void)

{
  FUN_000103cc(0xae5f98,0x10234,&UNK_007cc808);
  return;
}



/* Entry: 000104e8; end: 000104fb;  */

void FUN_000104e8(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_0099c760;
  if (lRam0000000000ae5fe0 != 0) {
    return;
  }
  _swift_getForeignTypeMetadata();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000000ae5fe0 = param_1;
  }
  return;
}



/* Entry: 000104fc; end: 0001053f;  */

void FUN_000104fc(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  _swift_getForeignTypeMetadata();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 00010540; end: 0001056b;  */

void FUN_00010540(void)

{
  FUN_000103cc(0xae5fc0,FUN_000104e8,&UNK_007cc974);
  return;
}



/* Entry: 0001056c; end: 0001056f;  */

void FUN_0001056c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae5fc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR___sSis17FixedWidthIntegersMc_0099b2e0;
  _swift_getWitnessTable(PTR___sSis17FixedWidthIntegersMc_0099b2e0,PTR___sSiN_0099b2c0);
  puRam0000000000ae5fc8 = puVar1;
  return;
}



/* Entry: 00010570; end: 00010607;  */

void FUN_00010570(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae5fc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR___sSis17FixedWidthIntegersMc_0099b2e0;
  _swift_getWitnessTable(PTR___sSis17FixedWidthIntegersMc_0099b2e0,PTR___sSiN_0099b2c0);
  puRam0000000000ae5fc8 = puVar1;
  return;
}



/* Entry: 00010608; end: 0001079f;  */

void FUN_00010608(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 000107a0; end: 000107df;  */

void FUN_000107a0(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae5fe8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007ccad4;
  _swift_getWitnessTable(&UNK_007ccad4,&UNK_0099c920);
  puRam0000000000ae5fe8 = puVar1;
  return;
}



/* Entry: 000107e0; end: 000107f3;  */

bool FUN_000107e0(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 000107f4; end: 0001089f;  */

void FUN_000107f4(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 000108a0; end: 000108af;  */

void FUN_000108a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00779040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_0099b708)();
  return;
}



/* Entry: 000108b0; end: 000108db;  */

void FUN_000108b0(undefined8 param_1)

{
  func_0x0078d9e0();
                    /* WARNING: Could not recover jumptable at 0x0077b62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_0099bb78)(param_1);
  return;
}



/* Entry: 000108dc; end: 00010903;  */

void FUN_000108dc(void)

{
                    /* WARNING: Could not recover jumptable at 0x0078da50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)();
  return;
}



/* Entry: 00010904; end: 00010923;  */

bool FUN_00010904(void)

{
  long unaff_x20;
  
  func_0x0077e2a0();
  return unaff_x20 == 0;
}



/* Entry: 00010924; end: 000109ff; +[SCLocationPushHandlerFactory makeHandlerWithNotificationPayload:configuration:isLocationPushExtension:isPermissionsRecovery:authContextDelegate:grapheneExtensionLogger:blizzardExtensionLogger:] */

void FUN_00010924(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9)

{
  undefined8 uVar1;
  
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (param_3,PTR___sSSN_0099b040,PTR___sypN_0099b8d8 + 8,PTR___sSSSHsWP_0099b050);
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  uVar1 = param_3;
  FUN_00010a70(param_3,param_4,param_5,param_7,param_8,param_9);
  _objc_release(param_4);
  _swift_unknownObjectRelease(param_7);
  _objc_release(param_8);
  _objc_release(param_9);
  _swift_bridgeObjectRelease(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 00010a00; end: 00010a3b; -[SCLocationPushHandlerFactory init] */

void FUN_00010a00(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  return;
}



/* Entry: 00010a3c; end: 00010a6f;  */

void FUN_00010a3c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 00010a70; end: 0001153f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_00010a70(undefined8 param_1,undefined8 param_2,byte param_3,long param_4,
                   undefined8 param_5,undefined8 param_6)

{
  undefined4 *puVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long *plVar15;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  code *pcVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined4 uVar21;
  ulong uVar22;
  ulong uVar23;
  long alStack_320 [2];
  undefined *puStack_310;
  undefined8 *puStack_308;
  long lStack_300;
  undefined8 *puStack_2f8;
  long lStack_2f0;
  undefined8 uStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  undefined1 auStack_2b0 [104];
  undefined8 auStack_248 [3];
  long lStack_230;
  undefined **ppuStack_228;
  undefined8 auStack_220 [3];
  long lStack_208;
  undefined **ppuStack_200;
  undefined8 auStack_1f8 [3];
  long lStack_1e0;
  undefined **ppuStack_1d8;
  long alStack_1d0 [3];
  long lStack_1b8;
  undefined **ppuStack_1b0;
  long alStack_1a8 [3];
  long lStack_190;
  undefined **ppuStack_188;
  long alStack_180 [3];
  long lStack_168;
  undefined **ppuStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  ulong uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  lVar3 = 0;
  __s10Foundation4DateVMa();
  lStack_2e0 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lStack_2e0 + 0x40));
  lVar19 = (long)alStack_320 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000028,0x80000000008b4970);
  _objc_release();
  _swift_bridgeObjectRetain(param_1);
  __s10Foundation4DateVACycfC(lVar19);
  _objc_retain();
  FUN_000227d4(&uStack_158,param_1,lVar19,param_3 & 1,param_2);
  if (lStack_148 == 0) {
    return (long *)0x0;
  }
  uStack_e8 = uStack_150;
  uStack_f0 = uStack_158;
  lStack_e0 = lStack_148;
  uStack_b0 = uStack_118;
  uStack_b8 = uStack_120;
  uStack_a0 = uStack_108;
  uStack_a8 = uStack_110;
  uStack_90 = uStack_f8;
  uStack_98 = uStack_100;
  uStack_d0 = uStack_138;
  uStack_d8 = uStack_140;
  uStack_c0 = uStack_128;
  uStack_c8 = uStack_130;
  FUN_00025c38(param_4,&uStack_f0);
  if (param_4 == 0) {
    FUN_00011560(&uStack_158);
    return (long *)0x0;
  }
  lVar4 = 0;
  uStack_2e8 = param_2;
  func_0x0001ef34();
  lVar5 = lVar4;
  _swift_allocObject();
  *(undefined8 *)(lVar5 + 0x10) = param_6;
  lVar6 = 0;
  func_0x000202a0();
  lVar7 = lVar6;
  _swift_allocObject();
  *(byte *)(lVar7 + 0x10) = param_3 & 1;
  *(undefined8 *)(lVar7 + 0x18) = param_5;
  lStack_2f0 = lVar19;
  lStack_2d8 = lVar7;
  lStack_208 = lVar4;
  lStack_1e0 = lVar6;
  alStack_1d0[0] = param_4;
  alStack_1a8[0] = lVar5;
  lStack_190 = lVar4;
  lStack_168 = lVar6;
  if ((uStack_c0 & 1) == 0) {
    _objc_retain(param_6);
    _objc_retain(param_5);
  }
  else {
    cVar2 = (char)uStack_f0;
    _objc_retain(param_6);
    _objc_retain(param_5);
    if (cVar2 == '\x01') {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000037,0x80000000008b49e0);
      _objc_release();
      puVar10 = PTR__OBJC_CLASS___CLLocationManager_00ac27d0;
      _objc_allocWithZone();
      func_0x007849a0();
      ppuStack_160 = &PTR_DAT_0099d1a8;
      alStack_180[0] = lStack_2d8;
      ppuStack_188 = &PTR_DAT_0099d158;
      lVar7 = 0;
      puStack_310 = puVar10;
      func_0x000247ec();
      ppuStack_1b0 = &PTR_DAT_0099d788;
      lVar8 = 0;
      alStack_320[0] = param_4;
      lStack_1b8 = lVar7;
      FUN_00012c70();
      lStack_300 = lVar8;
      _objc_allocWithZone();
      FUN_000115f8(alStack_180,lVar6);
      (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
      puVar17 = (undefined8 *)(lVar19 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
      (**(code **)(extraout_x12 + 0x10))(puVar17);
      FUN_000115f8(alStack_1a8,lVar4);
      puStack_2f8 = puVar17;
      (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
      puVar18 = (undefined8 *)((long)puVar17 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
      (**(code **)(extraout_x12_00 + 0x10))(puVar18);
      FUN_000115f8(alStack_1d0,lVar7);
      puStack_308 = puVar18;
      (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
      puVar20 = (undefined8 *)((long)puVar18 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
      (**(code **)(extraout_x12_01 + 0x10))(puVar20);
      param_4 = alStack_320[0];
      auStack_1f8[0] = *puVar17;
      auStack_220[0] = *puVar18;
      auStack_248[0] = *puVar20;
      ppuStack_1d8 = &PTR_DAT_0099d1a8;
      ppuStack_200 = &PTR_DAT_0099d158;
      ppuStack_228 = &PTR_DAT_0099d788;
      *(undefined8 *)(lVar8 + _DAT_00ae6060) = 0;
      puVar17 = (undefined8 *)(lVar8 + _DAT_00ae6068);
      *puVar17 = 0;
      puVar17[1] = 0;
      lVar19 = _DAT_00ae6070;
      lStack_230 = lVar7;
      __s11SwiftSCLock4LockCMa(0);
      _swift_allocObject();
      _swift_retain(lStack_2d8);
      _swift_retain(lVar5);
      lVar7 = param_4;
      _swift_retain();
      func_0x001d45e0();
      *(long *)(lVar8 + lVar19) = lVar7;
      (**(code **)(lStack_2e0 + 0x38))(lVar8 + _DAT_00ae6078,1,1,lVar3);
      *(undefined **)(lVar8 + _DAT_00ae6080) = PTR___swiftEmptyArrayStorage_0099b8f0;
      puVar17 = (undefined8 *)(lVar8 + _DAT_00ae6020);
      puVar17[9] = uStack_a8;
      puVar17[8] = uStack_b0;
      puVar17[0xb] = uStack_98;
      puVar17[10] = uStack_a0;
      puVar17[0xc] = uStack_90;
      puVar17[1] = uStack_e8;
      *puVar17 = uStack_f0;
      puVar17[3] = uStack_d8;
      puVar17[2] = lStack_e0;
      puVar17[5] = uStack_c8;
      puVar17[4] = uStack_d0;
      puVar17[7] = uStack_b8;
      puVar17[6] = uStack_c0;
      uVar23 = uStack_c0;
      FUN_00011690(auStack_1f8,lVar8 + _DAT_00ae6030);
      FUN_00011690(auStack_220,lVar8 + _DAT_00ae6038);
      FUN_00011690(auStack_248,lVar8 + _DAT_00ae6040);
      uVar9 = uStack_2e8;
      puVar10 = puStack_310;
      *(undefined8 *)(lVar8 + _DAT_00ae6048) = uStack_2e8;
      puVar17 = (undefined8 *)(lVar8 + _DAT_00ae6028);
      *puVar17 = puStack_310;
      puVar17[1] = &PTR_DAT_0099c990;
      puVar13 = PTR__OBJC_CLASS___UIDevice_00ac2f80;
      _objc_opt_self();
      _objc_retain(uVar9);
      FUN_00011620(&uStack_158,auStack_2b0);
      _objc_retain(puVar10);
      func_0x007812c0();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar13;
      func_0x007874a0();
      func_0x0078cf60(puVar13);
      func_0x0078cf60(puVar13);
      func_0x0077f7e0(puVar13);
      puVar11 = puVar13;
      uVar22 = uVar23;
      func_0x0077f800();
      if (((ulong)puVar12 & 1) == 0) {
        func_0x0078cf60(puVar13);
      }
      puVar12 = PTR__OBJC_CLASS___NSProcessInfo_00ac2a20;
      _objc_opt_self();
      func_0x0078aa40();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar12;
      func_0x00787a40();
      _objc_release(puVar13);
      _objc_release(puVar12);
      puVar1 = (undefined4 *)(lVar8 + _DAT_00ae6050);
      *puVar1 = (int)uVar23;
      *(undefined **)(puVar1 + 2) = puVar11;
      *(char *)(puVar1 + 4) = (char)puVar14;
      func_0x00781ec0(uVar9);
      *(ulong *)(lVar8 + _DAT_00ae6058) = uVar22;
      lStack_2c8 = lStack_300;
      plVar15 = &lStack_2d0;
      lStack_2d0 = lVar8;
      goto LAB_000114a0;
    }
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000033,0x80000000008b49a0);
  _objc_release();
  puVar10 = PTR__OBJC_CLASS___CLLocationManager_00ac27d0;
  _objc_allocWithZone();
  func_0x007849a0();
  ppuStack_160 = &PTR_DAT_0099d1a8;
  alStack_180[0] = lStack_2d8;
  ppuStack_188 = &PTR_DAT_0099d178;
  lVar7 = 0;
  puStack_310 = puVar10;
  func_0x000247ec();
  ppuStack_1b0 = &PTR_DAT_0099d770;
  lVar8 = 0;
  alStack_320[1] = lVar5;
  lStack_1b8 = lVar7;
  FUN_00015654();
  lStack_300 = lVar8;
  _objc_allocWithZone();
  FUN_000115f8(alStack_180,lVar6);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  puVar17 = (undefined8 *)(lVar19 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12_02 + 0x10))(puVar17);
  FUN_000115f8(alStack_1a8,lVar4);
  puStack_2f8 = puVar17;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar20 = (undefined8 *)((long)puVar17 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12_03 + 0x10))(puVar20);
  FUN_000115f8(alStack_1d0,lVar7);
  puStack_308 = puVar20;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  puVar18 = (undefined8 *)((long)puVar20 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12_04 + 0x10))(puVar18);
  lVar19 = _DAT_00ae6110;
  auStack_1f8[0] = *puVar17;
  auStack_220[0] = *puVar20;
  auStack_248[0] = *puVar18;
  ppuStack_1d8 = &PTR_DAT_0099d1a8;
  ppuStack_200 = &PTR_DAT_0099d178;
  ppuStack_228 = &PTR_DAT_0099d770;
  lStack_230 = lVar7;
  __s11SwiftSCLock4LockCMa(0);
  _swift_allocObject();
  _swift_retain(lStack_2d8);
  lVar5 = alStack_320[1];
  _swift_retain();
  lVar7 = param_4;
  _swift_retain();
  func_0x001d45e0();
  *(long *)(lVar8 + lVar19) = lVar7;
  *(undefined8 *)(lVar8 + _DAT_00ae6120) = 0;
  puVar1 = (undefined4 *)(lVar8 + _DAT_00ae6128);
  *(undefined1 *)(puVar1 + 1) = 2;
  *puVar1 = 0;
  *(undefined8 *)(lVar8 + _DAT_00ae6130) = 0;
  pcVar16 = *(code **)(lStack_2e0 + 0x38);
  (*pcVar16)(lVar8 + _DAT_00b64780,1,1,lVar3);
  (*pcVar16)(lVar8 + _DAT_00b64788,1,1,lVar3);
  (*pcVar16)(lVar8 + _DAT_00b64790,1,1,lVar3);
  (*pcVar16)(lVar8 + _DAT_00b64798,1,1,lVar3);
  (*pcVar16)(lVar8 + _DAT_00b647a0,1,1,lVar3);
  uVar9 = uStack_2e8;
  puVar10 = puStack_310;
  puVar17 = (undefined8 *)(lVar8 + _DAT_00ae6138);
  *puVar17 = 0;
  puVar17[1] = 0;
  puVar17 = (undefined8 *)(lVar8 + _DAT_00ae60e0);
  puVar17[9] = uStack_a8;
  puVar17[8] = uStack_b0;
  puVar17[0xb] = uStack_98;
  puVar17[10] = uStack_a0;
  puVar17[0xc] = uStack_90;
  puVar17[1] = uStack_e8;
  *puVar17 = uStack_f0;
  puVar17[3] = uStack_d8;
  puVar17[2] = lStack_e0;
  puVar17[5] = uStack_c8;
  puVar17[4] = uStack_d0;
  puVar17[7] = uStack_b8;
  puVar17[6] = uStack_c0;
  *(undefined8 *)(lVar8 + _DAT_00ae60e8) = uStack_2e8;
  puVar17 = (undefined8 *)(lVar8 + _DAT_00ae60f0);
  *puVar17 = puStack_310;
  puVar17[1] = &PTR_DAT_0099c990;
  uVar23 = uStack_c0;
  FUN_00011690(auStack_1f8,lVar8 + _DAT_00ae60f8);
  uVar21 = (undefined4)uVar23;
  FUN_00011690(auStack_220,lVar8 + _DAT_00ae6100);
  FUN_00011690(auStack_248,lVar8 + _DAT_00ae6108);
  puVar11 = PTR__OBJC_CLASS___UIDevice_00ac2f80;
  _objc_opt_self();
  _objc_retain(uVar9);
  FUN_00011620(&uStack_158,auStack_2b0);
  _objc_retain(puVar10);
  func_0x007812c0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x007874a0();
  func_0x0078cf60(puVar11);
  func_0x0078cf60(puVar11);
  func_0x0077f7e0(puVar11);
  puVar13 = puVar11;
  func_0x0077f800();
  if (((ulong)puVar12 & 1) == 0) {
    func_0x0078cf60(puVar11);
  }
  puVar12 = PTR__OBJC_CLASS___NSProcessInfo_00ac2a20;
  _objc_opt_self();
  func_0x0078aa40();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar12;
  func_0x00787a40();
  _objc_release(puVar11);
  _objc_release(puVar12);
  puVar1 = (undefined4 *)(lVar8 + _DAT_00ae6118);
  *puVar1 = uVar21;
  *(undefined **)(puVar1 + 2) = puVar13;
  *(char *)(puVar1 + 4) = (char)puVar14;
  lStack_2b8 = lStack_300;
  plVar15 = &lStack_2c0;
  lStack_2c0 = lVar8;
LAB_000114a0:
  _objc_msgSendSuper2(plVar15,PTR_s_init_00abbf70);
  _objc_release(puVar10);
  _swift_release(lStack_2d8);
  _swift_release(lVar5);
  _swift_release(param_4);
  FUN_00011560(&uStack_158);
  FUN_00011670(auStack_248);
  FUN_00011670(auStack_220);
  FUN_00011670(auStack_1f8);
  FUN_00011670(alStack_1d0);
  FUN_00011670(alStack_1a8);
  FUN_00011670(alStack_180);
  return plVar15;
}



/* Entry: 00011540; end: 0001155f;  */

void FUN_00011540(void)

{
  _objc_opt_self(&_OBJC_CLASS___SCLocationPushHandlerFactory);
  return;
}



/* Entry: 00011560; end: 000115f7;  */

undefined8 FUN_00011560(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0xae6018;
  func_0x000115a8(0xae6018,&UNK_007ccc10);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 000115f8; end: 0001161f;  */

long FUN_000115f8(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(long *)(param_2 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) != 0) {
    _swift_makeBoxUnique(param_1,param_2,uVar1 & 0xff);
    param_1 = param_2;
  }
  return param_1;
}



/* Entry: 00011620; end: 0001166f;  */

undefined8 FUN_00011620(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0xae6018;
  func_0x000115a8(0xae6018,&UNK_007ccc10);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 00011670; end: 0001168f;  */

void FUN_00011670(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00011684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(*param_1);
  return;
}



/* Entry: 00011690; end: 000116d3;  */

long FUN_00011690(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 000116d4; end: 00011b1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000116d4(undefined8 param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  long extraout_x8;
  long unaff_x20;
  long lVar9;
  undefined8 uVar10;
  code *pcVar11;
  double dVar12;
  undefined8 uVar13;
  double dVar14;
  double dVar15;
  undefined4 uVar16;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  double dStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  double dStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lVar4 = 0xae60c8;
  func_0x000115a8(0xae60c8,&UNK_007cccd0);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)&puStack_110 - extraout_x8;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002e,0x80000000008b4b80);
  _objc_release();
  __s10Foundation4DateVACycfC(lVar9);
  lVar4 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(lVar9,0,1,lVar4);
  lVar4 = _DAT_00ae6078;
  _swift_beginAccess(unaff_x20 + _DAT_00ae6078,&uStack_e0,0x21,0);
  FUN_00013a14(lVar9,unaff_x20 + lVar4);
  _swift_endAccess(&uStack_e0);
  puVar6 = (undefined8 *)(unaff_x20 + _DAT_00ae6068);
  uVar10 = *puVar6;
  uVar13 = puVar6[1];
  *puVar6 = param_1;
  puVar6[1] = param_2;
  FUN_00013a64(uVar10,uVar13);
  FUN_0001393c(unaff_x20 + _DAT_00ae6030,*(undefined8 *)(unaff_x20 + _DAT_00ae6030 + 0x18));
  puVar6 = (undefined8 *)(unaff_x20 + _DAT_00ae6020);
  dVar12 = (double)puVar6[3];
  dVar15 = (double)puVar6[10];
  puVar1 = (undefined4 *)(unaff_x20 + _DAT_00ae6050);
  uVar16 = *puVar1;
  uVar10 = *(undefined8 *)(puVar1 + 2);
  uVar2 = *(undefined1 *)(puVar1 + 4);
  lVar4 = puVar6[0xc];
  _swift_retain(param_2);
  func_0x00789a00();
  FUN_0001ef54(dVar12 - dVar15,uVar16,uVar10,uVar2,(double)lVar4 * 1000.0 < dVar12 - dVar15);
  FUN_0001393c(unaff_x20 + _DAT_00ae6038,*(undefined8 *)(unaff_x20 + _DAT_00ae6038 + 0x18));
  uVar13 = puVar6[5];
  uStack_c0 = puVar6[4];
  uStack_a8 = puVar6[7];
  uStack_b0 = puVar6[6];
  uStack_98 = puVar6[9];
  uStack_a0 = puVar6[8];
  uStack_88 = puVar6[0xb];
  dVar12 = (double)puVar6[10];
  lVar9 = puVar6[0xc];
  uStack_d8 = puVar6[1];
  uStack_e0 = *puVar6;
  dVar14 = (double)puVar6[3];
  uStack_d0 = puVar6[2];
  dStack_c8 = dVar14;
  uStack_b8 = uVar13;
  dStack_90 = dVar12;
  lStack_80 = lVar9;
  FUN_0001ea08(uVar16,&uStack_e0,uVar10,uVar2);
  puVar6 = (undefined8 *)(unaff_x20 + _DAT_00ae6040);
  FUN_0001393c(puVar6,puVar6[3]);
  puVar5 = &UNK_0099ca28;
  _swift_allocObject(&UNK_0099ca28,0x18,7);
  _swift_unknownObjectWeakInit(puVar5 + 0x10);
  _swift_retain(puVar5);
  FUN_00023c38(FUN_00013a98,puVar5);
  _swift_release_n(puVar5,2);
  FUN_0001393c(puVar6,puVar6[3]);
  FUN_00019308(uVar13,*puVar6);
  lVar4 = lVar9;
  func_0x00789a00();
  dVar15 = (double)lVar4 * 1000.0;
  if (dVar14 - dVar12 <= dVar15) {
    uVar10 = *(undefined8 *)(unaff_x20 + _DAT_00ae6028);
    lVar4 = ((undefined8 *)(unaff_x20 + _DAT_00ae6028))[1];
    _swift_getObjectType(uVar10);
    pcVar11 = *(code **)(lVar4 + 0x10);
    _swift_unknownObjectRetain();
    (*pcVar11)();
    (**(code **)(lVar4 + 0x38))(uVar10,lVar4);
    func_0x00789000(lVar9);
    dVar12 = 20.0;
    if ((1.0 <= dVar15) && (dVar15 <= 25.0)) {
      func_0x00789000(lVar9);
      dVar12 = dVar15;
    }
    puVar5 = &UNK_0099ca28;
    _swift_allocObject(&UNK_0099ca28,0x18,7);
    _swift_unknownObjectWeakInit(puVar5 + 0x10);
    uStack_f0 = 0x13aa0;
    puStack_110 = PTR___NSConcreteStackBlock_00999f30;
    uStack_108 = 0x42000000;
    pcStack_100 = FUN_00013b44;
    puStack_f8 = &UNK_0099ca40;
    ppuVar7 = &puStack_110;
    puStack_e8 = puVar5;
    __Block_copy(ppuVar7);
    puVar8 = PTR__OBJC_CLASS___NSTimer_00ac3110;
    _objc_opt_self();
    _swift_retain(puVar5);
    func_0x007929e0(dVar12);
    _objc_retainAutoreleasedReturnValue();
    __Block_release(ppuVar7);
    puVar3 = puStack_e8;
    _swift_release(puVar5);
    _swift_release(puVar3);
    uVar10 = *(undefined8 *)(unaff_x20 + _DAT_00ae6060);
    *(undefined **)(unaff_x20 + _DAT_00ae6060) = puVar8;
    _objc_retain(puVar8);
    _objc_release(uVar10);
    puVar5 = PTR__OBJC_CLASS___NSRunLoop_00ac3108;
    _objc_opt_self(PTR__OBJC_CLASS___NSRunLoop_00ac3108);
    func_0x00788c40();
    _objc_retainAutoreleasedReturnValue();
    func_0x0077e940();
    _objc_release(puVar8);
    _objc_release(puVar5);
  }
  else {
    FUN_00012648(0);
  }
  return;
}



/* Entry: 00011b20; end: 00012647;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00011b20(double param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined **ppuVar12;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar13;
  long extraout_x12;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  code *pcVar18;
  undefined8 uVar19;
  long lVar20;
  ulong uVar21;
  double dVar22;
  undefined4 *puStack_130;
  long lStack_128;
  long *plStack_120;
  code *pcStack_118;
  ulong uStack_110;
  long lStack_108;
  long lStack_100;
  code *pcStack_f8;
  undefined1 auStack_f0 [24];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [32];
  
  lVar4 = 0xae60c8;
  func_0x000115a8(0xae60c8,&UNK_007cccd0);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = (long)&puStack_130 - extraout_x8;
  lVar4 = 0;
  __s10Foundation4DateVMa();
  lVar20 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar20 + 0x40));
  lVar16 = lVar17 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar15 = lVar16 - extraout_x12;
  _swift_beginAccess(param_3 + 0x10,auStack_90,0,0);
  param_3 = param_3 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_3 == 0) {
    return;
  }
  plVar1 = (long *)(param_3 + _DAT_00ae6068);
  pcStack_f8 = (code *)*plVar1;
  if (pcStack_f8 == (code *)0x0) goto LAB_000123ac;
  lStack_100 = plVar1[1];
  if (param_2 == 0) {
    _swift_retain(lStack_100);
  }
  else {
    func_0x00013b10(pcStack_f8,lStack_100);
    _swift_errorRetain(param_2);
    func_0x00012414(0);
    _swift_errorRelease(param_2);
  }
  lVar5 = _DAT_00ae6078;
  _swift_beginAccess(param_3 + _DAT_00ae6078,auStack_a8,0,0);
  FUN_000138a4(param_3 + lVar5,lVar17);
  lVar5 = lVar17;
  (**(code **)(lVar20 + 0x30))(lVar17,1,lVar4);
  if ((int)lVar5 == 1) {
    func_0x000138f4(lVar17);
  }
  else {
    (**(code **)(lVar20 + 0x20))(lVar15,lVar17,lVar4);
    puStack_d8 = (undefined *)0x0;
    uStack_d0 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x4b);
    __sSS6appendyySSF(0xd000000000000049,0x80000000008b4bf0);
    __s10Foundation4DateVACycfC(lVar16);
    __s10Foundation4DateV17timeIntervalSinceySdACF(lVar15);
    pcVar18 = *(code **)(lVar20 + 8);
    (*pcVar18)(lVar16,lVar4);
    __sSd5write2toyxz_ts16TextOutputStreamRzlF
              (&puStack_d8,PTR___ss26DefaultStringInterpolationVN_0099b698,
               PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_0099b6a0);
    uVar14 = uStack_d0;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puStack_d8,uStack_d0);
    _objc_release();
    _swift_bridgeObjectRelease(uVar14);
    __s10Foundation4DateVACycfC(lVar16);
    __s10Foundation4DateV17timeIntervalSinceySdACF(lVar15);
    pcStack_118 = pcVar18;
    (*pcVar18)(lVar16,lVar4);
    plVar6 = (long *)(param_3 + _DAT_00ae6030);
    plStack_120 = plVar6;
    FUN_0001393c(plVar6,plVar6[3]);
    lVar16 = _DAT_00ae6080;
    lStack_128 = param_3 + _DAT_00ae6020;
    lVar17 = *(long *)(lStack_128 + 0x40);
    _swift_beginAccess(param_3 + _DAT_00ae6080,auStack_f0,0,0);
    lStack_108 = lVar16;
    uVar13 = *(ulong *)(param_3 + lVar16);
    if (uVar13 >> 0x3e == 0) {
      uStack_110 = *(ulong *)((uVar13 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar21 = uVar13 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar13) {
        uVar21 = uVar13;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      uStack_110 = uVar21;
    }
    puVar2 = (undefined4 *)(param_3 + _DAT_00ae6050);
    puVar7 = *(undefined **)(puVar2 + 2);
    lVar16 = *plVar6;
    FUN_0001f134(*puVar2,puVar7,*(undefined1 *)(puVar2 + 4));
    if (lVar17 < 4) {
      if (lVar17 == 1) {
        uVar21 = 0xe700000000000000;
        uVar13 = 0x6e776f6e6b6e75;
      }
      else if (lVar17 == 2) {
        uVar21 = 0xef6369646f697265;
        uVar13 = 0x705f726572616873;
      }
      else {
        if (lVar17 != 3) goto LAB_00011ef0;
        uVar21 = 0x80000000008b4ca0;
        uVar13 = 0xd000000000000011;
      }
    }
    else if (lVar17 < 6) {
      if (lVar17 == 4) {
        uVar21 = 0x70615f6e;
LAB_00011f20:
        uVar21 = uVar21 | 0xed00007000000000;
        uVar13 = 0x77656976;
      }
      else {
        if (lVar17 == 5) {
          uVar21 = 0xef6e65706f5f7061;
          uVar13 = 0x6d5f726577656976;
          goto LAB_00011f5c;
        }
LAB_00011ef0:
        uVar21 = 0xef7375636f665f6e;
        uVar13 = 0x72616873;
      }
      uVar13 = uVar13 | 0x695f726500000000;
    }
    else {
      if (lVar17 == 6) {
        uVar21 = 0x616d5f6e;
        goto LAB_00011f20;
      }
      if (lVar17 != 7) goto LAB_00011ef0;
      uVar21 = 0x80000000008b4c80;
      uVar13 = 0xd000000000000012;
    }
LAB_00011f5c:
    puVar8 = puVar7;
    puStack_130 = puVar2;
    _swift_isUniquelyReferenced_nonNull_native(puVar7);
    puStack_d8 = puVar7;
    FUN_000203d0(uVar13,uVar21,0x7079745f68737570,0xe900000000000065,puVar8);
    puVar7 = puStack_d8;
    puVar8 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_00ac2aa0;
    _objc_allocWithZone(PTR__OBJC_CLASS___SCExtensionGrapheneMetric_00ac2aa0);
    uVar14 = 0xd00000000000001f;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001f,0x80000000008b4c40);
    uVar9 = 0xd000000000000012;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x80000000008b4c60);
    puVar10 = puVar7;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (puVar7,PTR___sSSN_0099b040,PTR___sSSN_0099b040,PTR___sSSSHsWP_0099b050);
    func_0x00786420(puVar8);
    _objc_release(uVar14);
    _objc_release(uVar9);
    _objc_release(puVar10);
    dVar22 = param_1 * 1000.0;
    func_0x0077e920(*(undefined8 *)(lVar16 + 0x18));
    func_0x0077e640(*(undefined8 *)(lVar16 + 0x18));
    func_0x00784860(*(undefined8 *)(lVar16 + 0x18));
    _swift_release(puVar7);
    _objc_release(puVar8);
    uVar13 = *(ulong *)(param_3 + lStack_108);
    if (uVar13 >> 0x3e == 0) {
      uVar21 = *(ulong *)((uVar13 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar21 = uVar13 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar13) {
        uVar21 = uVar13;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (uVar21 == 0) {
      (*pcStack_118)(lVar15,lVar4);
    }
    else {
      uVar11 = uVar21 - 1;
      if (SBORROW8(uVar21,1)) {
                    /* WARNING: Does not return */
        pcVar18 = (code *)SoftwareBreakpoint(1,0x123dc);
        (*pcVar18)();
      }
      if ((uVar13 & 0xc000000000000001) == 0) {
        if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
          pcVar18 = (code *)SoftwareBreakpoint(1,0x12404);
          (*pcVar18)();
        }
        if (*(ulong *)((uVar13 & 0xffffffffffffff8) + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
          pcVar18 = (code *)SoftwareBreakpoint(1,0x1240c);
          (*pcVar18)();
        }
        uVar11 = *(ulong *)(uVar13 + uVar11 * 8 + 0x20);
        _objc_retain(uVar11);
      }
      else {
        _swift_bridgeObjectRetain(uVar13);
        FUN_00015f60(uVar11,uVar13);
        _swift_bridgeObjectRelease(uVar13);
      }
      FUN_0001393c(plStack_120,plStack_120[3]);
      uVar14 = *(undefined8 *)(lStack_128 + 0x38);
      uVar9 = *(undefined8 *)(lStack_128 + 0x40);
      uVar19 = *(undefined8 *)(lStack_128 + 0x48);
      func_0x00784480(uVar11);
      if (0x7fefffffffffffff < (ulong)ABS(dVar22)) {
                    /* WARNING: Does not return */
        pcVar18 = (code *)SoftwareBreakpoint(1,0x12408);
        (*pcVar18)();
      }
      if (dVar22 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar18 = (code *)SoftwareBreakpoint(1,0x12410);
        (*pcVar18)();
      }
      if (9.223372036854776e+18 <= dVar22) {
                    /* WARNING: Does not return */
        pcVar18 = (code *)SoftwareBreakpoint(1,0x12414);
        (*pcVar18)();
      }
      FUN_0001f948(param_1 * 1000.0,*puStack_130,uVar14,uVar9,uVar19,(long)dVar22,
                   *(undefined8 *)(puStack_130 + 2),*(undefined1 *)(puStack_130 + 4));
      _objc_release(uVar11);
      (*pcStack_118)(lVar15,lVar4);
    }
  }
  lVar4 = _DAT_00ae6070;
  uVar14 = *(undefined8 *)(param_3 + _DAT_00ae6070);
  _swift_retain(uVar14);
  __s11SwiftSCLock4LockC4lockyyF();
  _swift_release(uVar14);
  if (*(long *)(param_3 + _DAT_00ae6060) != 0) {
    func_0x00787320();
  }
  puVar3 = (undefined8 *)(param_3 + _DAT_00ae6028);
  uVar14 = *puVar3;
  lVar15 = puVar3[1];
  uVar9 = uVar14;
  _swift_getObjectType(uVar14);
  pcVar18 = *(code **)(lVar15 + 0x40);
  _objc_retain(uVar14);
  (*pcVar18)(uVar9,lVar15);
  _objc_release(uVar14);
  uVar14 = *puVar3;
  lVar15 = puVar3[1];
  uVar9 = uVar14;
  _swift_getObjectType(uVar14);
  pcVar18 = *(code **)(lVar15 + 0x10);
  _objc_retain(uVar14);
  (*pcVar18)(0,uVar9,lVar15);
  _objc_release(uVar14);
  pcVar18 = pcStack_f8;
  lVar15 = lStack_100;
  if (*(char *)(param_3 + _DAT_00ae6020) == '\x01') {
    plVar6 = (long *)(param_3 + _DAT_00ae6030);
    FUN_0001393c(plVar6,plVar6[3]);
    puVar7 = &UNK_0099ca78;
    _swift_allocObject(&UNK_0099ca78,0x20,7);
    pcVar18 = pcStack_f8;
    lVar15 = lStack_100;
    *(code **)(puVar7 + 0x10) = pcStack_f8;
    *(long *)(puVar7 + 0x18) = lStack_100;
    uVar14 = *(undefined8 *)(*plVar6 + 0x18);
    puVar8 = &UNK_0099caa0;
    _swift_allocObject(&UNK_0099caa0,0x20,7);
    *(code **)(puVar8 + 0x10) = FUN_00013ac4;
    *(undefined **)(puVar8 + 0x18) = puVar7;
    uStack_b8 = 0x13b08;
    puStack_d8 = PTR___NSConcreteStackBlock_00999f30;
    uStack_d0 = 0x42000000;
    pcStack_c8 = FUN_0001d1e4;
    puStack_c0 = &UNK_0099cab8;
    ppuVar12 = &puStack_d8;
    puStack_b0 = puVar8;
    __Block_copy(ppuVar12);
    puVar8 = puStack_b0;
    func_0x00013b10(pcVar18,lVar15);
    _swift_retain(puVar7);
    _swift_release(puVar8);
    func_0x00783880(uVar14);
    __Block_release(ppuVar12);
    _swift_release(puVar7);
  }
  else {
    (*pcStack_f8)();
  }
  lVar16 = *plVar1;
  lVar17 = plVar1[1];
  *plVar1 = 0;
  plVar1[1] = 0;
  FUN_00013a64(lVar16,lVar17);
  uVar14 = *(undefined8 *)(param_3 + lVar4);
  _swift_retain(uVar14);
  func_0x001d46c8();
  _swift_release(uVar14);
  FUN_00013a64(pcVar18,lVar15);
LAB_000123ac:
  _objc_release(param_3);
  return;
}



/* Entry: 00012648; end: 0001273b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00012648(uint param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar2 = _DAT_00ae6070;
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_00ae6070);
  _swift_retain(uVar3);
  __s11SwiftSCLock4LockC4lockyyF();
  _swift_release(uVar3);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000028,0x80000000008b4a60);
  _objc_release();
  if (*(long *)(unaff_x20 + _DAT_00ae6060) != 0) {
    func_0x00787320();
  }
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_00ae6028);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_00ae6028))[1];
  _swift_getObjectType(uVar3);
  (**(code **)(lVar1 + 0x40))();
  (**(code **)(lVar1 + 0x10))(0,uVar3,lVar1);
  FUN_0001393c(unaff_x20 + _DAT_00ae6040,*(undefined8 *)(unaff_x20 + _DAT_00ae6040 + 0x18));
  FUN_000240a4(param_1 & 1);
  uVar3 = *(undefined8 *)(unaff_x20 + lVar2);
  _swift_retain(uVar3);
  func_0x001d46c8();
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(uVar3);
  return;
}



/* Entry: 0001273c; end: 000127b3;  */

void FUN_0001273c(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000038,0x80000000008b4bb0);
  _objc_release();
  _swift_beginAccess(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    FUN_00012648(0);
    _objc_release(param_2);
  }
  return;
}



/* Entry: 000127b4; end: 00012827; -[_TtC19LocationPushHandler28StreamingLocationPushHandler processWithCompletion:] */

void FUN_000127b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  __Block_copy();
  puVar1 = &UNK_0099ca00;
  _swift_allocObject(&UNK_0099ca00,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  _objc_retain(param_1);
  FUN_000116d4(FUN_00013a0c,puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(puVar1);
  return;
}



/* Entry: 00012828; end: 00012a17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00012828(double param_1)

{
  undefined4 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  code *pcVar9;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  
  lVar2 = 0xae60c8;
  func_0x000115a8(0xae60c8,&UNK_007cccd0);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_80 + -extraout_x8;
  lVar3 = 0;
  __s10Foundation4DateVMa();
  lVar8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar8 + 0x40));
  lVar5 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar6 = lVar5 - extraout_x12;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002d,0x80000000008b4b50);
  _objc_release();
  lVar2 = _DAT_00ae6078;
  _swift_beginAccess(unaff_x20 + _DAT_00ae6078,auStack_78,0,0);
  FUN_000138a4(unaff_x20 + lVar2,puVar7);
  puVar4 = puVar7;
  (**(code **)(lVar8 + 0x30))(puVar7,1,lVar3);
  if ((int)puVar4 == 1) {
    func_0x000138f4(puVar7);
  }
  else {
    (**(code **)(lVar8 + 0x20))(lVar6,puVar7,lVar3);
    FUN_0001393c(unaff_x20 + _DAT_00ae6030,*(undefined8 *)(unaff_x20 + _DAT_00ae6030 + 0x18));
    __s10Foundation4DateVACycfC(lVar5);
    __s10Foundation4DateV17timeIntervalSinceySdACF(lVar6);
    pcVar9 = *(code **)(lVar8 + 8);
    (*pcVar9)(lVar5,lVar3);
    lVar2 = unaff_x20 + _DAT_00ae6020;
    puVar1 = (undefined4 *)(unaff_x20 + _DAT_00ae6050);
    FUN_0001ffa4(param_1 * 1000.0,*puVar1,*(undefined8 *)(lVar2 + 0x38),
                 *(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x48),
                 *(undefined8 *)(puVar1 + 2),*(undefined1 *)(puVar1 + 4));
    (*pcVar9)(lVar6,lVar3);
  }
  FUN_00012648(1);
  return;
}



/* Entry: 00012a18; end: 00012a3f; -[_TtC19LocationPushHandler28StreamingLocationPushHandler forceComplete] */

void FUN_00012a18(undefined8 param_1)

{
  _objc_retain();
  FUN_00012828();
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 00012a40; end: 00012b03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00012a40(ulong param_1)

{
  undefined4 *puVar1;
  long lVar2;
  undefined1 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined4 uVar7;
  
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000034,0x80000000008b4ad0);
  _objc_release();
  puVar1 = (undefined4 *)(unaff_x20 + _DAT_00ae6050);
  uVar7 = *puVar1;
  uVar6 = *(undefined8 *)(puVar1 + 2);
  uVar3 = *(undefined1 *)(puVar1 + 4);
  puVar5 = (undefined8 *)(unaff_x20 + _DAT_00ae6040);
  FUN_0001393c(puVar5,puVar5[3]);
  FUN_000195cc(uVar7,param_1 & 0x1ffffffff,uVar6,uVar3,*puVar5);
  if ((int)param_1 == 3) {
    if ((param_1 >> 0x20 & 1) != 0) {
      return;
    }
    uVar6 = 1;
  }
  else {
    uVar6 = 2;
  }
  func_0x00012414(uVar6);
  lVar4 = _DAT_00ae6070;
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_00ae6070);
  _swift_retain(uVar6);
  __s11SwiftSCLock4LockC4lockyyF();
  _swift_release(uVar6);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000028,0x80000000008b4a60);
  _objc_release();
  if (*(long *)(unaff_x20 + _DAT_00ae6060) != 0) {
    func_0x00787320();
  }
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_00ae6028);
  lVar2 = ((undefined8 *)(unaff_x20 + _DAT_00ae6028))[1];
  _swift_getObjectType(uVar6);
  (**(code **)(lVar2 + 0x40))();
  (**(code **)(lVar2 + 0x10))(0,uVar6,lVar2);
  FUN_0001393c(unaff_x20 + _DAT_00ae6040,*(undefined8 *)(unaff_x20 + _DAT_00ae6040 + 0x18));
  FUN_000240a4(0);
  uVar6 = *(undefined8 *)(unaff_x20 + lVar4);
  _swift_retain(uVar6);
  func_0x001d46c8();
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(uVar6);
  return;
}



/* Entry: 00012b04; end: 00012b63; -[_TtC19LocationPushHandler28StreamingLocationPushHandler init] */

void FUN_00012b04(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LocationPushHandler.StreamingLocationPushHandler",0x30,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x12b30);
  (*pcVar1)();
}



/* Entry: 00012b64; end: 00012c67; -[_TtC19LocationPushHandler28StreamingLocationPushHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00012b64(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = param_1 + _DAT_00ae6020;
  uVar2 = *(undefined8 *)(lVar1 + 0x38);
  uVar3 = *(undefined8 *)(lVar1 + 0x40);
  uVar4 = *(undefined8 *)(lVar1 + 0x48);
  uVar5 = *(undefined8 *)(lVar1 + 0x60);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x10));
  func_0x00013b20(uVar2,uVar3,uVar4);
  _objc_release(uVar5);
  _objc_release(*(undefined8 *)(param_1 + _DAT_00ae6028));
  FUN_00011670(param_1 + _DAT_00ae6030);
  FUN_00011670(param_1 + _DAT_00ae6038);
  FUN_00011670(param_1 + _DAT_00ae6040);
  _objc_release(*(undefined8 *)(param_1 + _DAT_00ae6048));
  _objc_release(*(undefined8 *)(param_1 + _DAT_00ae6060));
  FUN_00013a64(*(undefined8 *)(param_1 + _DAT_00ae6068),((undefined8 *)(param_1 + _DAT_00ae6068))[1]
              );
  _swift_release(*(undefined8 *)(param_1 + _DAT_00ae6070));
  func_0x000138f4(param_1 + _DAT_00ae6078);
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(*(undefined8 *)(param_1 + _DAT_00ae6080));
  return;
}



/* Entry: 00012c68; end: 00012c6f;  */

void FUN_00012c68(void)

{
  if (lRam0000000000ae60b0 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_0083d8d0);
  return;
}



/* Entry: 00012c70; end: 00012ca7;  */

void FUN_00012c70(undefined8 param_1)

{
  if (lRam0000000000ae60b0 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_0083d8d0);
  return;
}



/* Entry: 00012ca8; end: 00012dcf;  */

void FUN_00012ca8(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_88 = &UNK_007ccc40;
  puStack_80 = &UNK_007ccc58;
  puStack_78 = &UNK_007ccc70;
  puStack_70 = &UNK_007ccc70;
  puStack_68 = &UNK_007ccc70;
  puStack_60 = &UNK_007ccc88;
  puStack_50 = PTR___sBi64_WV_0099ae80 + 0x40;
  puStack_58 = &UNK_007ccca0;
  puStack_48 = &UNK_007ccc88;
  puStack_40 = &UNK_007cccb8;
  puStack_38 = PTR___sBoWV_0099ae88 + 0x40;
  lVar1 = 0x13f;
  func_0x00012d7c();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = PTR___sBbWV_0099ae78 + 0x40;
    _swift_updateClassMetadata2(param_1,0x100,0xd,&puStack_88,param_1 + 0x50);
  }
  return;
}



/* Entry: 00012dd0; end: 00012e6f; -[_TtC19LocationPushHandler28StreamingLocationPushHandler locationManagerDidChangeAuthorization:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00012dd0(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  code *pcVar5;
  
  puVar1 = (ulong *)(param_1 + _DAT_00ae6028);
  uVar3 = *puVar1;
  uVar2 = puVar1[1];
  _swift_getObjectType(uVar3);
  pcVar5 = *(code **)(uVar2 + 0x48);
  _objc_retain(param_1);
  (*pcVar5)(uVar3,uVar2);
  uVar4 = *puVar1;
  uVar2 = puVar1[1];
  _swift_getObjectType();
  (**(code **)(uVar2 + 0x50))();
  uVar2 = 0x100000000;
  if ((uVar4 & 1) == 0) {
    uVar2 = 0;
  }
  FUN_00012a40(uVar2 | uVar3 & 0xffffffff);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 00012e70; end: 00012e73; -[_TtC19LocationPushHandler28StreamingLocationPushHandler locationManager:didChangeAuthorizationStatus:] */

void FUN_00012e70(void)

{
  return;
}



/* Entry: 00012e74; end: 00012eeb; -[_TtC19LocationPushHandler28StreamingLocationPushHandler locationManager:didUpdateLocations:] */

void FUN_00012e74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_00013960(0);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_4,uVar1);
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_00012fc4(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(param_4);
  return;
}



/* Entry: 00012eec; end: 00012f53; -[_TtC19LocationPushHandler28StreamingLocationPushHandler locationManager:didFailWithError:] */

void FUN_00012eec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_1);
  FUN_00013548(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_4);
  return;
}



/* Entry: 00012f54; end: 00012fc3;  */

void FUN_00012f54(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  
  uVar3 = *unaff_x20;
  uVar1 = uVar3;
  _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
  *unaff_x20 = uVar3;
  if ((((int)uVar1 == 0) || ((long)uVar3 < 0)) || ((uVar3 >> 0x3e & 1) != 0)) {
    if (uVar3 >> 0x3e == 0) {
      uVar1 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar1 = uVar3 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar3) {
        uVar1 = uVar3;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg(uVar1);
    }
    uVar2 = 0;
    FUN_00015b7c(0,uVar1 + 1,1,uVar3);
    *unaff_x20 = uVar2;
  }
  return;
}



/* Entry: 00012fc4; end: 00013547;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00012fc4(double param_1,ulong param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 *puVar10;
  bool bVar11;
  ulong uVar12;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar13;
  double dVar14;
  long extraout_x12;
  long unaff_x20;
  undefined1 *puVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  code *pcVar20;
  double dVar21;
  ulong uStack_110;
  undefined1 auStack_108 [24];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
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
  
  lVar7 = 0xae60c8;
  func_0x000115a8(0xae60c8,&UNK_007cccd0);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar15 = auStack_108 + (-8 - extraout_x8);
  lVar7 = 0;
  __s10Foundation4DateVMa();
  lVar19 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar19 + 0x40));
  lVar17 = (long)puVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar16 = lVar17 - extraout_x12;
  if (param_2 >> 0x3e == 0) {
    uVar8 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar8 = param_2 & 0xffffffffffffff8;
    if ((param_2 & 0x8000000000000000) != 0) {
      uVar8 = param_2;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar8 != 0) {
    uVar9 = uVar8 - 1;
    if (SBORROW8(uVar8,1)) {
                    /* WARNING: Does not return */
      pcVar20 = (code *)SoftwareBreakpoint(1,0x13508);
      (*pcVar20)();
    }
    if ((param_2 & 0xc000000000000001) == 0) {
      if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
        pcVar20 = (code *)SoftwareBreakpoint(1,0x13518);
        (*pcVar20)();
      }
      if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
        pcVar20 = (code *)SoftwareBreakpoint(1,0x1351c);
        (*pcVar20)();
      }
      uVar9 = *(ulong *)(param_2 + uVar9 * 8 + 0x20);
      _objc_retain();
    }
    else {
      FUN_00015f60(uVar9,param_2);
    }
    lVar6 = _DAT_00ae6078;
    _swift_beginAccess(unaff_x20 + _DAT_00ae6078,auStack_108,0,0);
    FUN_000138a4(unaff_x20 + lVar6,puVar15);
    puVar10 = puVar15;
    (**(code **)(lVar19 + 0x30))(puVar15,1,lVar7);
    if ((int)puVar10 == 1) {
      _objc_release(uVar9);
      func_0x000138f4(puVar15);
    }
    else {
      uStack_110 = param_2 >> 0x3e;
      (**(code **)(lVar19 + 0x20))(lVar16,puVar15,lVar7);
      lVar6 = _DAT_00ae6080;
      _swift_beginAccess(unaff_x20 + _DAT_00ae6080,&uStack_f0,0x21,0);
      _objc_retain();
      FUN_00012f54();
      uVar12 = *(ulong *)(unaff_x20 + lVar6);
      uVar13 = uVar12 & 0xffffffffffffff8;
      uVar8 = *(ulong *)(uVar13 + 0x10);
      if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar8) {
        uVar12 = (ulong)(1 < *(ulong *)(uVar13 + 0x18));
        FUN_00015b7c(uVar12,uVar8 + 1,1);
        uVar13 = uVar12 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar13 + 0x10) = uVar8 + 1;
      *(ulong *)(uVar13 + uVar8 * 8 + 0x20) = uVar9;
      *(ulong *)(unaff_x20 + lVar6) = uVar12;
      _swift_endAccess(&uStack_f0);
      __s10Foundation4DateVACycfC(lVar17);
      __s10Foundation4DateV17timeIntervalSinceySdACF(lVar16);
      pcVar20 = *(code **)(lVar19 + 8);
      dVar21 = param_1;
      (*pcVar20)(lVar17,lVar7);
      FUN_000139a4(unaff_x20 + _DAT_00ae6030,&uStack_f0);
      FUN_0001393c(&uStack_f0,uStack_d8);
      func_0x00784480(uVar9);
      if (0x7fefffffffffffff < (ulong)ABS(dVar21)) {
                    /* WARNING: Does not return */
        pcVar20 = (code *)SoftwareBreakpoint(1,0x13540);
        (*pcVar20)();
      }
      if (dVar21 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar20 = (code *)SoftwareBreakpoint(1,0x13544);
        (*pcVar20)();
      }
      if (9.223372036854776e+18 <= dVar21) {
                    /* WARNING: Does not return */
        pcVar20 = (code *)SoftwareBreakpoint(1,0x13548);
        (*pcVar20)();
      }
      dVar14 = 1000.0;
      puVar1 = (uint *)(unaff_x20 + _DAT_00ae6050);
      uVar8 = (ulong)*puVar1;
      uVar18 = *(undefined8 *)(puVar1 + 2);
      uVar3 = puVar1[4];
      func_0x00791b00(uVar9);
      if (dVar14 <= 0.0) {
        func_0x00780f40(uVar9);
        bVar11 = 0.0 < dVar14;
      }
      else {
        bVar11 = true;
      }
      FUN_0001fc18(param_1 * 1000.0,uVar8,(long)dVar21,uVar18,(char)uVar3,bVar11);
      FUN_00011670(&uStack_f0);
      uStack_f0 = 0;
      uStack_e8 = 0xe000000000000000;
      __ss11_StringGutsV4growyySiF(0x44);
      __sSS6appendyySSF(0xd000000000000039,0x80000000008b4a90);
      func_0x00780da0(uVar9);
      puVar5 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_0099b6a0;
      puVar4 = PTR___ss26DefaultStringInterpolationVN_0099b698;
      __sSd5write2toyxz_ts16TextOutputStreamRzlF
                (&uStack_f0,PTR___ss26DefaultStringInterpolationVN_0099b698,
                 PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_0099b6a0);
      __sSS6appendyySSF(0x203a676e6c202c,0xe700000000000000);
      func_0x00780da0(uVar9);
      __sSd5write2toyxz_ts16TextOutputStreamRzlF(uVar8,&uStack_f0,puVar4,puVar5);
      uVar18 = uStack_e8;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_f0,uStack_e8);
      _objc_release();
      _swift_bridgeObjectRelease(uVar18);
      FUN_000139a4(unaff_x20 + _DAT_00ae6040,&uStack_f0);
      FUN_0001393c(&uStack_f0,uStack_d8);
      uVar8 = *(ulong *)(unaff_x20 + _DAT_00ae6048);
      if (uVar8 == 0) {
        _objc_retain(uVar9);
        FUN_00019888();
        _objc_release(uVar9);
        FUN_00011670(&uStack_f0);
        (*pcVar20)(lVar16,lVar7);
      }
      else {
        func_0x00787b60(uVar8);
        _objc_retain(uVar9);
        FUN_00019888();
        _objc_release(uVar9);
        FUN_00011670(&uStack_f0);
        _objc_retain();
        uVar12 = uVar8;
        func_0x0078ac00();
        if ((uVar12 & 1) != 0) {
          FUN_0001393c(unaff_x20 + _DAT_00ae6038,*(undefined8 *)(unaff_x20 + _DAT_00ae6038 + 0x18));
          puVar2 = (undefined8 *)(unaff_x20 + _DAT_00ae6020);
          uStack_a8 = puVar2[9];
          uStack_b0 = puVar2[8];
          uStack_98 = puVar2[0xb];
          uStack_a0 = puVar2[10];
          uStack_90 = puVar2[0xc];
          uStack_e8 = puVar2[1];
          uStack_f0 = *puVar2;
          uStack_d8 = puVar2[3];
          uStack_e0 = puVar2[2];
          uStack_c8 = puVar2[5];
          uStack_d0 = puVar2[4];
          uStack_b8 = puVar2[7];
          uStack_c0 = puVar2[6];
          if (uStack_110 == 0) {
            uVar12 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
          }
          else {
            uVar12 = param_2 & 0xffffffffffffff8;
            if ((param_2 & 0x8000000000000000) != 0) {
              uVar12 = param_2;
            }
            __ss18_CocoaArrayWrapperV8endIndexSivg(uVar12);
          }
          FUN_0001eb58(param_1 * 1000.0,&uStack_f0,uVar12,uVar9);
          _objc_release(uVar9);
          _objc_release(uVar8);
          (*pcVar20)(lVar16,lVar7);
          return;
        }
        (*pcVar20)(lVar16,lVar7);
        _objc_release(uVar8);
      }
      _objc_release(uVar9);
    }
  }
  return;
}



/* Entry: 00013548; end: 0001385f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00013548(double param_1,long param_2)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  code *pcVar14;
  long lVar15;
  undefined4 uVar16;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long alStack_88 [3];
  
  lVar3 = 0xae60c8;
  func_0x000115a8(0xae60c8,&UNK_007cccd0);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)&lStack_b0 - extraout_x8;
  lVar4 = 0;
  __s10Foundation4DateVMa();
  lVar15 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar15 + 0x40));
  lVar12 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar11 = lVar12 - extraout_x12;
  alStack_88[0] = param_2;
  _swift_errorRetain(param_2);
  uVar5 = 0xae60d0;
  func_0x000115a8(0xae60d0,&UNK_007ccdd0);
  uVar6 = 0;
  func_0x00010234();
  plVar7 = &lStack_98;
  _swift_dynamicCast(plVar7,alStack_88,uVar5,uVar6,6);
  lVar3 = lStack_98;
  if (((ulong)plVar7 & 1) != 0) {
    alStack_88[0] = lStack_98;
    FUN_00013860();
    __s10Foundation21_BridgedStoredNSErrorPAAE4code4CodeQzvg(&lStack_98,uVar6,plVar7);
    lVar8 = _DAT_00ae6078;
    if (lStack_98 != 0) {
      _swift_beginAccess(unaff_x20 + _DAT_00ae6078,alStack_88,0,0);
      FUN_000138a4(unaff_x20 + lVar8,lVar9);
      lVar8 = lVar9;
      (**(code **)(lVar15 + 0x30))(lVar9,1,lVar4);
      if ((int)lVar8 == 1) {
        func_0x000138f4(lVar9);
      }
      else {
        (**(code **)(lVar15 + 0x20))(lVar11,lVar9,lVar4);
        lVar9 = unaff_x20 + _DAT_00ae6030;
        FUN_0001393c(lVar9,*(undefined8 *)(lVar9 + 0x18));
        lStack_b0 = lVar9;
        __s10Foundation4DateVACycfC(lVar12);
        __s10Foundation4DateV17timeIntervalSinceySdACF(lVar11);
        pcVar14 = *(code **)(lVar15 + 8);
        (*pcVar14)(lVar12,lVar4);
        puVar1 = (undefined4 *)(unaff_x20 + _DAT_00ae6050);
        uVar16 = *puVar1;
        uVar13 = *(undefined8 *)(puVar1 + 2);
        uVar2 = *(undefined1 *)(puVar1 + 4);
        uVar5 = uVar6;
        __s10Foundation21_BridgedStoredNSErrorPAAE9errorCodeSivg(uVar6,plVar7);
        FUN_0001f63c(param_1 * 1000.0,uVar16,uVar13,uVar2,uVar5);
        (*pcVar14)(lVar11,lVar4);
      }
      func_0x00012414(3);
      lStack_98 = 0;
      uStack_90 = 0xe000000000000000;
      __ss11_StringGutsV4growyySiF(0x38);
      __sSS6appendyySSF(0xd000000000000036,0x80000000008b4a20);
      lStack_a0 = lVar3;
      __s10Foundation21_BridgedStoredNSErrorPAAE9errorCodeSivg(uVar6,plVar7);
      puVar10 = PTR___sSis23CustomStringConvertiblesWP_0099b2e8;
      uStack_a8 = uVar6;
      __ss23CustomStringConvertibleP11descriptionSSvgTj
                (PTR___sSiN_0099b2c0,PTR___sSis23CustomStringConvertiblesWP_0099b2e8);
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(puVar10);
      uVar5 = uStack_90;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_98,uStack_90);
      _objc_release();
      _swift_bridgeObjectRelease(uVar5);
      FUN_00012648(0);
    }
    _objc_release(lVar3);
  }
  return;
}



/* Entry: 00013860; end: 000138a3;  */

void FUN_00013860(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000000ae5fd8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x00010234(0xff);
  puVar2 = &UNK_007cc908;
  _swift_getWitnessTable(&UNK_007cc908,uVar1);
  puRam0000000000ae5fd8 = puVar2;
  return;
}



/* Entry: 000138a4; end: 0001393b;  */

undefined8 FUN_000138a4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0xae60c8;
  func_0x000115a8(0xae60c8,&UNK_007cccd0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 0001393c; end: 0001395f;  */

long * FUN_0001393c(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(*(long *)(param_2 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) != 0) {
    uVar2 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(*param_1 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  }
  return param_1;
}



/* Entry: 00013960; end: 000139a3;  */

void FUN_00013960(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae60d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___CLLocation_00ac35c0;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  puRam0000000000ae60d8 = puVar1;
  return;
}



/* Entry: 000139a4; end: 000139e7;  */

long FUN_000139a4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 000139e8; end: 00013a0b;  */

void FUN_000139e8(void)

{
  long unaff_x20;
  
  __Block_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 00013a0c; end: 00013a13;  */

void FUN_00013a0c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001a548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 00013a14; end: 00013a63;  */

undefined8 FUN_00013a14(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0xae60c8;
  func_0x000115a8(0xae60c8,&UNK_007cccd0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 00013a64; end: 00013a73;  */

void FUN_00013a64(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_0099bb20)(param_2);
    return;
  }
  return;
}



/* Entry: 00013a74; end: 00013a97;  */

void FUN_00013a74(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 00013a98; end: 00013ac3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00013a98(double param_1,long param_2)

{
  long *plVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined **ppuVar13;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar14;
  long extraout_x12;
  undefined8 uVar15;
  long unaff_x20;
  long lVar16;
  long lVar17;
  long lVar18;
  code *pcVar19;
  undefined8 uVar20;
  long lVar21;
  ulong uVar22;
  double dVar23;
  undefined4 *puStack_130;
  long lStack_128;
  long *plStack_120;
  code *pcStack_118;
  ulong uStack_110;
  long lStack_108;
  long lStack_100;
  code *pcStack_f8;
  undefined1 auStack_f0 [24];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [32];
  
  lVar4 = 0xae60c8;
  func_0x000115a8(0xae60c8,&UNK_007cccd0);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar18 = (long)&puStack_130 - extraout_x8;
  lVar5 = 0;
  __s10Foundation4DateVMa();
  lVar21 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar21 + 0x40));
  lVar17 = lVar18 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar16 = lVar17 - extraout_x12;
  _swift_beginAccess(unaff_x20 + 0x10,auStack_90,0,0);
  lVar4 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar4 == 0) {
    return;
  }
  plVar1 = (long *)(lVar4 + _DAT_00ae6068);
  pcStack_f8 = (code *)*plVar1;
  if (pcStack_f8 == (code *)0x0) goto LAB_000123ac;
  lStack_100 = plVar1[1];
  if (param_2 == 0) {
    _swift_retain(lStack_100);
  }
  else {
    func_0x00013b10(pcStack_f8,lStack_100);
    _swift_errorRetain(param_2);
    func_0x00012414(0);
    _swift_errorRelease(param_2);
  }
  lVar6 = _DAT_00ae6078;
  _swift_beginAccess(lVar4 + _DAT_00ae6078,auStack_a8,0,0);
  FUN_000138a4(lVar4 + lVar6,lVar18);
  lVar6 = lVar18;
  (**(code **)(lVar21 + 0x30))(lVar18,1,lVar5);
  if ((int)lVar6 == 1) {
    func_0x000138f4(lVar18);
  }
  else {
    (**(code **)(lVar21 + 0x20))(lVar16,lVar18,lVar5);
    puStack_d8 = (undefined *)0x0;
    uStack_d0 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x4b);
    __sSS6appendyySSF(0xd000000000000049,0x80000000008b4bf0);
    __s10Foundation4DateVACycfC(lVar17);
    __s10Foundation4DateV17timeIntervalSinceySdACF(lVar16);
    pcVar19 = *(code **)(lVar21 + 8);
    (*pcVar19)(lVar17,lVar5);
    __sSd5write2toyxz_ts16TextOutputStreamRzlF
              (&puStack_d8,PTR___ss26DefaultStringInterpolationVN_0099b698,
               PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_0099b6a0);
    uVar15 = uStack_d0;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puStack_d8,uStack_d0);
    _objc_release();
    _swift_bridgeObjectRelease(uVar15);
    __s10Foundation4DateVACycfC(lVar17);
    __s10Foundation4DateV17timeIntervalSinceySdACF(lVar16);
    pcStack_118 = pcVar19;
    (*pcVar19)(lVar17,lVar5);
    plVar7 = (long *)(lVar4 + _DAT_00ae6030);
    plStack_120 = plVar7;
    FUN_0001393c(plVar7,plVar7[3]);
    lVar17 = _DAT_00ae6080;
    lStack_128 = lVar4 + _DAT_00ae6020;
    lVar18 = *(long *)(lStack_128 + 0x40);
    _swift_beginAccess(lVar4 + _DAT_00ae6080,auStack_f0,0,0);
    lStack_108 = lVar17;
    uVar14 = *(ulong *)(lVar4 + lVar17);
    if (uVar14 >> 0x3e == 0) {
      uStack_110 = *(ulong *)((uVar14 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar22 = uVar14 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar14) {
        uVar22 = uVar14;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      uStack_110 = uVar22;
    }
    puVar2 = (undefined4 *)(lVar4 + _DAT_00ae6050);
    puVar8 = *(undefined **)(puVar2 + 2);
    lVar17 = *plVar7;
    FUN_0001f134(*puVar2,puVar8,*(undefined1 *)(puVar2 + 4));
    if (lVar18 < 4) {
      if (lVar18 == 1) {
        uVar22 = 0xe700000000000000;
        uVar14 = 0x6e776f6e6b6e75;
      }
      else if (lVar18 == 2) {
        uVar22 = 0xef6369646f697265;
        uVar14 = 0x705f726572616873;
      }
      else {
        if (lVar18 != 3) goto LAB_00011ef0;
        uVar22 = 0x80000000008b4ca0;
        uVar14 = 0xd000000000000011;
      }
    }
    else if (lVar18 < 6) {
      if (lVar18 == 4) {
        uVar22 = 0x70615f6e;
LAB_00011f20:
        uVar22 = uVar22 | 0xed00007000000000;
        uVar14 = 0x77656976;
      }
      else {
        if (lVar18 == 5) {
          uVar22 = 0xef6e65706f5f7061;
          uVar14 = 0x6d5f726577656976;
          goto LAB_00011f5c;
        }
LAB_00011ef0:
        uVar22 = 0xef7375636f665f6e;
        uVar14 = 0x72616873;
      }
      uVar14 = uVar14 | 0x695f726500000000;
    }
    else {
      if (lVar18 == 6) {
        uVar22 = 0x616d5f6e;
        goto LAB_00011f20;
      }
      if (lVar18 != 7) goto LAB_00011ef0;
      uVar22 = 0x80000000008b4c80;
      uVar14 = 0xd000000000000012;
    }
LAB_00011f5c:
    puVar9 = puVar8;
    puStack_130 = puVar2;
    _swift_isUniquelyReferenced_nonNull_native(puVar8);
    puStack_d8 = puVar8;
    FUN_000203d0(uVar14,uVar22,0x7079745f68737570,0xe900000000000065,puVar9);
    puVar8 = puStack_d8;
    puVar9 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_00ac2aa0;
    _objc_allocWithZone(PTR__OBJC_CLASS___SCExtensionGrapheneMetric_00ac2aa0);
    uVar15 = 0xd00000000000001f;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001f,0x80000000008b4c40);
    uVar10 = 0xd000000000000012;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x80000000008b4c60);
    puVar11 = puVar8;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (puVar8,PTR___sSSN_0099b040,PTR___sSSN_0099b040,PTR___sSSSHsWP_0099b050);
    func_0x00786420(puVar9);
    _objc_release(uVar15);
    _objc_release(uVar10);
    _objc_release(puVar11);
    dVar23 = param_1 * 1000.0;
    func_0x0077e920(*(undefined8 *)(lVar17 + 0x18));
    func_0x0077e640(*(undefined8 *)(lVar17 + 0x18));
    func_0x00784860(*(undefined8 *)(lVar17 + 0x18));
    _swift_release(puVar8);
    _objc_release(puVar9);
    uVar14 = *(ulong *)(lVar4 + lStack_108);
    if (uVar14 >> 0x3e == 0) {
      uVar22 = *(ulong *)((uVar14 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar22 = uVar14 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar14) {
        uVar22 = uVar14;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (uVar22 == 0) {
      (*pcStack_118)(lVar16,lVar5);
    }
    else {
      uVar12 = uVar22 - 1;
      if (SBORROW8(uVar22,1)) {
                    /* WARNING: Does not return */
        pcVar19 = (code *)SoftwareBreakpoint(1,0x123dc);
        (*pcVar19)();
      }
      if ((uVar14 & 0xc000000000000001) == 0) {
        if ((long)uVar12 < 0) {
                    /* WARNING: Does not return */
          pcVar19 = (code *)SoftwareBreakpoint(1,0x12404);
          (*pcVar19)();
        }
        if (*(ulong *)((uVar14 & 0xffffffffffffff8) + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
          pcVar19 = (code *)SoftwareBreakpoint(1,0x1240c);
          (*pcVar19)();
        }
        uVar12 = *(ulong *)(uVar14 + uVar12 * 8 + 0x20);
        _objc_retain(uVar12);
      }
      else {
        _swift_bridgeObjectRetain(uVar14);
        FUN_00015f60(uVar12,uVar14);
        _swift_bridgeObjectRelease(uVar14);
      }
      FUN_0001393c(plStack_120,plStack_120[3]);
      uVar15 = *(undefined8 *)(lStack_128 + 0x38);
      uVar10 = *(undefined8 *)(lStack_128 + 0x40);
      uVar20 = *(undefined8 *)(lStack_128 + 0x48);
      func_0x00784480(uVar12);
      if (0x7fefffffffffffff < (ulong)ABS(dVar23)) {
                    /* WARNING: Does not return */
        pcVar19 = (code *)SoftwareBreakpoint(1,0x12408);
        (*pcVar19)();
      }
      if (dVar23 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar19 = (code *)SoftwareBreakpoint(1,0x12410);
        (*pcVar19)();
      }
      if (9.223372036854776e+18 <= dVar23) {
                    /* WARNING: Does not return */
        pcVar19 = (code *)SoftwareBreakpoint(1,0x12414);
        (*pcVar19)();
      }
      FUN_0001f948(param_1 * 1000.0,*puStack_130,uVar15,uVar10,uVar20,(long)dVar23,
                   *(undefined8 *)(puStack_130 + 2),*(undefined1 *)(puStack_130 + 4));
      _objc_release(uVar12);
      (*pcStack_118)(lVar16,lVar5);
    }
  }
  lVar5 = _DAT_00ae6070;
  uVar15 = *(undefined8 *)(lVar4 + _DAT_00ae6070);
  _swift_retain(uVar15);
  __s11SwiftSCLock4LockC4lockyyF();
  _swift_release(uVar15);
  if (*(long *)(lVar4 + _DAT_00ae6060) != 0) {
    func_0x00787320();
  }
  puVar3 = (undefined8 *)(lVar4 + _DAT_00ae6028);
  uVar15 = *puVar3;
  lVar16 = puVar3[1];
  uVar10 = uVar15;
  _swift_getObjectType(uVar15);
  pcVar19 = *(code **)(lVar16 + 0x40);
  _objc_retain(uVar15);
  (*pcVar19)(uVar10,lVar16);
  _objc_release(uVar15);
  uVar15 = *puVar3;
  lVar16 = puVar3[1];
  uVar10 = uVar15;
  _swift_getObjectType(uVar15);
  pcVar19 = *(code **)(lVar16 + 0x10);
  _objc_retain(uVar15);
  (*pcVar19)(0,uVar10,lVar16);
  _objc_release(uVar15);
  pcVar19 = pcStack_f8;
  lVar16 = lStack_100;
  if (*(char *)(lVar4 + _DAT_00ae6020) == '\x01') {
    plVar7 = (long *)(lVar4 + _DAT_00ae6030);
    FUN_0001393c(plVar7,plVar7[3]);
    puVar8 = &UNK_0099ca78;
    _swift_allocObject(&UNK_0099ca78,0x20,7);
    pcVar19 = pcStack_f8;
    lVar16 = lStack_100;
    *(code **)(puVar8 + 0x10) = pcStack_f8;
    *(long *)(puVar8 + 0x18) = lStack_100;
    uVar15 = *(undefined8 *)(*plVar7 + 0x18);
    puVar9 = &UNK_0099caa0;
    _swift_allocObject(&UNK_0099caa0,0x20,7);
    *(code **)(puVar9 + 0x10) = FUN_00013ac4;
    *(undefined **)(puVar9 + 0x18) = puVar8;
    uStack_b8 = 0x13b08;
    puStack_d8 = PTR___NSConcreteStackBlock_00999f30;
    uStack_d0 = 0x42000000;
    pcStack_c8 = FUN_0001d1e4;
    puStack_c0 = &UNK_0099cab8;
    ppuVar13 = &puStack_d8;
    puStack_b0 = puVar9;
    __Block_copy(ppuVar13);
    puVar9 = puStack_b0;
    func_0x00013b10(pcVar19,lVar16);
    _swift_retain(puVar8);
    _swift_release(puVar9);
    func_0x00783880(uVar15);
    __Block_release(ppuVar13);
    _swift_release(puVar8);
  }
  else {
    (*pcStack_f8)();
  }
  lVar17 = *plVar1;
  lVar18 = plVar1[1];
  *plVar1 = 0;
  plVar1[1] = 0;
  FUN_00013a64(lVar17,lVar18);
  uVar15 = *(undefined8 *)(lVar4 + lVar5);
  _swift_retain(uVar15);
  func_0x001d46c8();
  _swift_release(uVar15);
  FUN_00013a64(pcVar19,lVar16);
LAB_000123ac:
  _objc_release(lVar4);
  return;
}



/* Entry: 00013ac4; end: 00013ae3;  */

void FUN_00013ac4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 00013ae4; end: 00013b07;  */

void FUN_00013ae4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 00013b08; end: 00013b43;  */

void FUN_00013b08(void)

{
  code *pcVar1;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000035,0x80000000008b5120);
  _objc_release();
  (*pcVar1)();
  return;
}



/* Entry: 00013b44; end: 00013b8f;  */

void FUN_00013b44(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _swift_retain(uVar2);
  _objc_retain(param_2);
  (*pcVar1)();
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_2);
  return;
}



/* Entry: 00013b90; end: 00013faf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00013b90(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long extraout_x8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  code *pcVar12;
  undefined8 uVar13;
  double dVar14;
  double dVar15;
  undefined4 uVar16;
  double dVar17;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  double dStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  double dStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  lVar10 = 0xae60c8;
  func_0x000115a8(0xae60c8,&UNK_007cccd0);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)&puStack_120 - extraout_x8;
  puStack_f0 = (undefined *)0x0;
  uStack_e8 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x2d);
  puStack_120 = puStack_f0;
  uStack_118 = uStack_e8;
  __sSS6appendyySSF(0xd00000000000002b,0x80000000008b4f70);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_00ae60e0);
  uStack_e8 = puVar1[1];
  puStack_f0 = (undefined *)*puVar1;
  uStack_e0 = puVar1[2];
  dVar15 = (double)puVar1[3];
  uStack_c8 = puVar1[5];
  uStack_d0 = puVar1[4];
  uStack_b8 = puVar1[7];
  uStack_c0 = puVar1[6];
  uStack_a8 = puVar1[9];
  uStack_b0 = puVar1[8];
  dVar17 = (double)puVar1[10];
  uStack_98 = puVar1[0xb];
  lVar10 = puVar1[0xc];
  dStack_d8 = dVar15;
  dStack_a0 = dVar17;
  lStack_90 = lVar10;
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&puStack_f0,&puStack_120,&UNK_0099d660,PTR___ss26DefaultStringInterpolationVN_0099b698,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_0099b6a0);
  uVar11 = uStack_118;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puStack_120,uStack_118);
  _objc_release();
  _swift_bridgeObjectRelease(uVar11);
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_00ae6138);
  uVar11 = *puVar2;
  uVar5 = puVar2[1];
  *puVar2 = param_1;
  puVar2[1] = param_2;
  FUN_00013a64(uVar11,uVar5);
  FUN_0001393c(unaff_x20 + _DAT_00ae60f8,*(undefined8 *)(unaff_x20 + _DAT_00ae60f8 + 0x18));
  dVar15 = dVar15 - dVar17;
  puVar3 = (undefined4 *)(unaff_x20 + _DAT_00ae6118);
  uVar16 = *puVar3;
  uVar11 = *(undefined8 *)(puVar3 + 2);
  uVar4 = *(undefined1 *)(puVar3 + 4);
  _swift_retain(param_2);
  func_0x00789a00();
  FUN_0001ef54(dVar15,uVar16,uVar11,uVar4,(double)lVar10 * 1000.0 < dVar15);
  FUN_0001393c(unaff_x20 + _DAT_00ae6100,*(undefined8 *)(unaff_x20 + _DAT_00ae6100 + 0x18));
  uStack_a8 = puVar1[9];
  uStack_b0 = puVar1[8];
  uStack_98 = puVar1[0xb];
  dVar15 = (double)puVar1[10];
  lVar10 = puVar1[0xc];
  uStack_e8 = puVar1[1];
  puStack_f0 = (undefined *)*puVar1;
  dVar14 = (double)puVar1[3];
  uStack_e0 = puVar1[2];
  uStack_c8 = puVar1[5];
  uStack_d0 = puVar1[4];
  uStack_b8 = puVar1[7];
  uStack_c0 = puVar1[6];
  dStack_d8 = dVar14;
  dStack_a0 = dVar15;
  lStack_90 = lVar10;
  FUN_0001ea08(uVar16,&puStack_f0,uVar11,uVar4);
  func_0x00789a00();
  dVar17 = (double)lVar10 * 1000.0;
  if (dVar14 - dVar15 <= dVar17) {
    __s10Foundation4DateVACycfC(lVar9);
    lVar10 = 0;
    __s10Foundation4DateVMa();
    (**(code **)(*(long *)(lVar10 + -8) + 0x38))(lVar9,0,1,lVar10);
    lVar10 = _DAT_00b64780;
    _swift_beginAccess(unaff_x20 + _DAT_00b64780,&puStack_120,0x21,0);
    FUN_00013a14(lVar9,unaff_x20 + lVar10);
    _swift_endAccess(&puStack_120);
    uVar11 = *(undefined8 *)(unaff_x20 + _DAT_00ae60f0);
    lVar10 = ((undefined8 *)(unaff_x20 + _DAT_00ae60f0))[1];
    _swift_getObjectType(uVar11);
    pcVar12 = *(code **)(lVar10 + 0x10);
    _swift_unknownObjectRetain();
    (*pcVar12)();
    (**(code **)(lVar10 + 0x38))(uVar11,lVar10);
    uVar13 = *(undefined8 *)(unaff_x20 + _DAT_00ae60e8);
    uVar5 = uVar13;
    func_0x007932e0();
    if ((int)uVar5 != 0) {
      dVar17 = *(double *)PTR__kCLLocationAccuracyHundredMeters_00998fc8;
      (**(code **)(lVar10 + 0x28))(dVar17,uVar11,lVar10);
    }
    puVar6 = PTR__OBJC_CLASS___NSTimer_00ac3110;
    _objc_opt_self();
    func_0x00788fc0(uVar13);
    puVar7 = &UNK_0099cb90;
    _swift_allocObject(&UNK_0099cb90,0x18,7);
    _swift_unknownObjectWeakInit(puVar7 + 0x10);
    uStack_100 = 0x169e8;
    puStack_120 = PTR___NSConcreteStackBlock_00999f30;
    uStack_118 = 0x42000000;
    pcStack_110 = FUN_00013b44;
    puStack_108 = &UNK_0099cbf8;
    ppuVar8 = &puStack_120;
    puStack_f8 = puVar7;
    __Block_copy(ppuVar8);
    _swift_release(puStack_f8);
    func_0x0078c340(dVar17);
    _objc_retainAutoreleasedReturnValue();
    __Block_release(ppuVar8);
    uVar11 = *(undefined8 *)(unaff_x20 + _DAT_00ae6120);
    *(undefined **)(unaff_x20 + _DAT_00ae6120) = puVar6;
    _objc_release(uVar11);
  }
  else {
    FUN_00013fb0(2);
  }
  return;
}



/* Entry: 00013fb0; end: 0001429b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00013fb0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  long lVar4;
  long *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar9;
  code *pcVar10;
  undefined8 uVar11;
  long lVar12;
  undefined4 uVar13;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
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
  
  lVar4 = 0xae60c8;
  func_0x000115a8(0xae60c8,&UNK_007cccd0);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = (long)&puStack_110 - extraout_x8;
  __s11SwiftSCLock4LockC4lockyyF();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_00ae6138);
  pcVar10 = (code *)*puVar1;
  if (pcVar10 != (code *)0x0) {
    uVar9 = puVar1[1];
    lVar12 = *(long *)(unaff_x20 + _DAT_00ae6120);
    if (lVar12 == 0) {
      _swift_retain(uVar9);
    }
    else {
      _swift_retain(uVar9);
      func_0x00787320(lVar12);
    }
    __s10Foundation4DateVACycfC(lVar4);
    lVar12 = 0;
    __s10Foundation4DateVMa();
    (**(code **)(*(long *)(lVar12 + -8) + 0x38))(lVar4,0,1,lVar12);
    lVar12 = _DAT_00b647a0;
    _swift_beginAccess(unaff_x20 + _DAT_00b647a0,&uStack_e0,0x21,0);
    FUN_00013a14(lVar4,unaff_x20 + lVar12);
    _swift_endAccess(&uStack_e0);
    FUN_0001393c(unaff_x20 + _DAT_00ae6100,*(undefined8 *)(unaff_x20 + _DAT_00ae6100 + 0x18));
    puVar2 = (undefined8 *)(unaff_x20 + _DAT_00ae60e0);
    uStack_98 = puVar2[9];
    uStack_a0 = puVar2[8];
    uStack_88 = puVar2[0xb];
    uStack_90 = puVar2[10];
    uStack_80 = puVar2[0xc];
    uStack_d8 = puVar2[1];
    uStack_e0 = *puVar2;
    uStack_c8 = puVar2[3];
    uStack_d0 = puVar2[2];
    uStack_b8 = puVar2[5];
    uStack_c0 = puVar2[4];
    uStack_a8 = puVar2[7];
    uStack_b0 = puVar2[6];
    uVar13 = *(undefined4 *)(unaff_x20 + _DAT_00ae6118);
    cVar3 = (char)uStack_e0;
    uVar11 = *(undefined8 *)(unaff_x20 + _DAT_00ae6130);
    _objc_retain(uVar11);
    FUN_0001d2b4(uVar13,&uStack_e0);
    _objc_release(uVar11);
    if (cVar3 == '\x01') {
      plVar5 = (long *)(unaff_x20 + _DAT_00ae60f8);
      FUN_0001393c(plVar5,plVar5[3]);
      puVar6 = &UNK_0099cb18;
      _swift_allocObject(&UNK_0099cb18,0x20,7);
      *(code **)(puVar6 + 0x10) = pcVar10;
      *(undefined8 *)(puVar6 + 0x18) = uVar9;
      uVar11 = *(undefined8 *)(*plVar5 + 0x18);
      puVar7 = &UNK_0099cb40;
      _swift_allocObject(&UNK_0099cb40,0x20,7);
      *(code **)(puVar7 + 0x10) = FUN_00016868;
      *(undefined **)(puVar7 + 0x18) = puVar6;
      pcStack_f0 = FUN_00016888;
      puStack_110 = PTR___NSConcreteStackBlock_00999f30;
      uStack_108 = 0x42000000;
      pcStack_100 = FUN_0001d1e4;
      puStack_f8 = &UNK_0099cb58;
      ppuVar8 = &puStack_110;
      puStack_e8 = puVar7;
      __Block_copy(ppuVar8);
      puVar7 = puStack_e8;
      func_0x00013b10(pcVar10,uVar9);
      _swift_retain(puVar6);
      _swift_release(puVar7);
      func_0x00783880(uVar11);
      __Block_release(ppuVar8);
      FUN_00013a64(pcVar10,uVar9);
      _swift_release(puVar6);
    }
    else {
      (*pcVar10)();
      FUN_00013a64(pcVar10,uVar9);
    }
    uVar9 = *puVar1;
    uVar11 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    FUN_00013a64(uVar9,uVar11);
  }
  func_0x001d46c8();
  return;
}



/* Entry: 0001429c; end: 0001433f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001429c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000029,0x80000000008b4f40);
    _objc_release();
    FUN_000143b4();
    lVar1 = *(long *)(param_2 + _DAT_00ae6130);
    if (lVar1 == 0) {
      FUN_00013fb0(3);
    }
    else {
      _objc_retain();
      FUN_00014748();
      _objc_release(lVar1);
    }
    _objc_release(param_2);
  }
  return;
}



/* Entry: 00014340; end: 000143b3; -[_TtC19LocationPushHandler24UnaryLocationPushHandler processWithCompletion:] */

void FUN_00014340(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  __Block_copy();
  puVar1 = &UNK_0099cbe0;
  _swift_allocObject(&UNK_0099cbe0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  _objc_retain(param_1);
  FUN_00013b90(FUN_000169e0,puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(puVar1);
  return;
}



/* Entry: 000143b4; end: 00014747;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000143b4(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar6;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  long lVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  code *pcVar13;
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar10 + 0x40));
  lVar9 = (long)&lStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0xae6178;
  lStack_a0 = lVar9;
  func_0x000115a8(0xae6178,&UNK_007d6270);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = lVar9 - extraout_x8_00;
  lVar6 = 0xae60c8;
  func_0x000115a8(0xae60c8,&UNK_007cccd0);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  lVar6 = lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_98 = lVar6;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uVar11 = lVar6 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar12 = uVar11 - extraout_x12_00;
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_00ae60f0);
  lVar6 = ((undefined8 *)(unaff_x20 + _DAT_00ae60f0))[1];
  _swift_getObjectType(uVar3);
  (**(code **)(lVar6 + 0x40))();
  (**(code **)(lVar6 + 0x10))(0,uVar3,lVar6);
  lVar6 = _DAT_00b64788;
  _swift_beginAccess(unaff_x20 + _DAT_00b64788,auStack_78,0,0);
  pcVar8 = *(code **)(lVar10 + 0x38);
  (*pcVar8)(lVar12,1,1,lVar2);
  lVar7 = (long)*(int *)(lVar7 + 0x30);
  FUN_000138a4(unaff_x20 + lVar6,lVar9);
  FUN_000138a4(lVar12,lVar9 + lVar7);
  pcVar13 = *(code **)(lVar10 + 0x30);
  lVar4 = lVar9;
  (*pcVar13)(lVar9,1,lVar2);
  if ((int)lVar4 == 1) {
    FUN_000168ac(lVar12,0xae60c8,&UNK_007cccd0);
    lVar7 = lVar9 + lVar7;
    (*pcVar13)(lVar7,1,lVar2);
    if ((int)lVar7 != 1) {
LAB_00014610:
      FUN_000168ac(lVar9,0xae6178,&UNK_007d6270);
      goto LAB_00014714;
    }
    FUN_000168ac(lVar9,0xae60c8,&UNK_007cccd0);
  }
  else {
    FUN_000138a4(lVar9,uVar11);
    lVar4 = lVar9 + lVar7;
    (*pcVar13)(lVar4,1,lVar2);
    lVar1 = lStack_a0;
    if ((int)lVar4 == 1) {
      FUN_000168ac(lVar12,0xae60c8,&UNK_007cccd0);
      (**(code **)(lVar10 + 8))(uVar11,lVar2);
      goto LAB_00014610;
    }
    (**(code **)(lVar10 + 0x20))(lStack_a0,lVar9 + lVar7,lVar2);
    uVar3 = 0xae6180;
    func_0x000168ec(0xae6180,PTR___s10Foundation4DateVMa_0099c440,
                    PTR___s10Foundation4DateVSQAAMc_0099c458);
    uVar5 = uVar11;
    __sSQ2eeoiySbx_xtFZTj(uVar11,lVar1,lVar2,uVar3);
    pcVar13 = *(code **)(lVar10 + 8);
    (*pcVar13)(lVar1,lVar2);
    FUN_000168ac(lVar12,0xae60c8,&UNK_007cccd0);
    (*pcVar13)(uVar11,lVar2);
    FUN_000168ac(lVar9,0xae60c8,&UNK_007cccd0);
    if ((uVar5 & 1) == 0) goto LAB_00014714;
  }
  lVar7 = lStack_98;
  __s10Foundation4DateVACycfC(lStack_98);
  (*pcVar8)(lVar7,0,1,lVar2);
  _swift_beginAccess(unaff_x20 + lVar6,auStack_90,0x21,0);
  FUN_00013a14(lVar7,unaff_x20 + lVar6);
  _swift_endAccess(auStack_90);
LAB_00014714:
  if (*(long *)(unaff_x20 + _DAT_00ae6120) != 0) {
    func_0x00787320();
  }
  return;
}



/* Entry: 00014748; end: 00014dd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00014748(double param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  uint5 uVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  long extraout_x8;
  long lVar13;
  long extraout_x8_00;
  long extraout_x8_01;
  double dVar14;
  long lVar15;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long lVar16;
  long unaff_x20;
  long lVar17;
  code *pcVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 uVar21;
  code *pcVar22;
  long lVar23;
  undefined4 uVar24;
  double dVar25;
  undefined1 auStack_110 [12];
  uint uStack_104;
  long lStack_100;
  undefined1 *puStack_f8;
  code *pcStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined *apuStack_d0 [3];
  undefined *puStack_b8;
  undefined **ppuStack_b0;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [32];
  
  lVar7 = 0;
  uStack_e0 = param_2;
  __s10Foundation4DateVMa();
  lVar20 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar20 + 0x40));
  puStack_f8 = auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar13 = (long)(auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  lVar17 = 0xae6178;
  lStack_d8 = lVar13;
  func_0x000115a8(0xae6178,&UNK_007d6270);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar17 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = lVar13 - extraout_x8_00;
  lVar10 = 0xae60c8;
  func_0x000115a8(0xae60c8,&UNK_007cccd0);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
  lVar15 = lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_e8 = lVar15;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar15 = lVar15 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar23 = lVar15 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar16 = lVar23 - extraout_x12_02;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002e,0x80000000008b4d40);
  _objc_release();
  lVar10 = _DAT_00b64790;
  _swift_beginAccess(unaff_x20 + _DAT_00b64790,auStack_90,0,0);
  pcStack_f0 = *(code **)(lVar20 + 0x38);
  (*pcStack_f0)(lVar16,1,1,lVar7);
  lVar17 = (long)*(int *)(lVar17 + 0x30);
  FUN_000138a4(unaff_x20 + lVar10,lVar13);
  FUN_000138a4(lVar16,lVar13 + lVar17);
  pcVar22 = *(code **)(lVar20 + 0x30);
  lVar8 = lVar13;
  (*pcVar22)(lVar13,1,lVar7);
  if ((int)lVar8 == 1) {
    FUN_000168ac(lVar16,0xae60c8,&UNK_007cccd0);
    lVar17 = lVar13 + lVar17;
    (*pcVar22)(lVar17,1,lVar7);
    if ((int)lVar17 != 1) {
LAB_000149d4:
      FUN_000168ac(lVar13,0xae6178,&UNK_007d6270);
      return;
    }
    lStack_100 = lVar10;
    FUN_000168ac(lVar13,0xae60c8,&UNK_007cccd0);
  }
  else {
    FUN_000138a4(lVar13,lVar23);
    lVar8 = lVar13 + lVar17;
    (*pcVar22)(lVar8,1,lVar7);
    lVar5 = lStack_d8;
    if ((int)lVar8 == 1) {
      FUN_000168ac(lVar16,0xae60c8,&UNK_007cccd0);
      (**(code **)(lVar20 + 8))(lVar23,lVar7);
      goto LAB_000149d4;
    }
    lStack_100 = lVar10;
    (**(code **)(lVar20 + 0x20))(lStack_d8,lVar13 + lVar17,lVar7);
    uVar9 = 0xae6180;
    func_0x000168ec(0xae6180,PTR___s10Foundation4DateVMa_0099c440,
                    PTR___s10Foundation4DateVSQAAMc_0099c458);
    lVar17 = lVar23;
    __sSQ2eeoiySbx_xtFZTj(lVar23,lVar5,lVar7,uVar9);
    uStack_104 = (uint)lVar17;
    pcVar18 = *(code **)(lVar20 + 8);
    (*pcVar18)(lVar5,lVar7);
    FUN_000168ac(lVar16,0xae60c8,&UNK_007cccd0);
    (*pcVar18)(lVar23,lVar7);
    FUN_000168ac(lVar13,0xae60c8,&UNK_007cccd0);
    if ((uStack_104 & 1) == 0) {
      return;
    }
  }
  lVar17 = _DAT_00ae6120;
  uVar9 = 0;
  if (*(long *)(unaff_x20 + _DAT_00ae6120) != 0) {
    func_0x00787320();
    uVar9 = *(undefined8 *)(unaff_x20 + lVar17);
  }
  *(undefined8 *)(unaff_x20 + lVar17) = 0;
  _objc_release(uVar9);
  FUN_0001393c(unaff_x20 + _DAT_00ae60f8,*(undefined8 *)(unaff_x20 + _DAT_00ae60f8 + 0x18));
  lVar17 = _DAT_00b64780;
  _swift_beginAccess(unaff_x20 + _DAT_00b64780,auStack_a8,0,0);
  FUN_000138a4(unaff_x20 + lVar17,lVar15);
  lVar17 = lVar15;
  (*pcVar22)(lVar15,1,lVar7);
  puVar4 = puStack_f8;
  if ((int)lVar17 == 1) {
    FUN_000168ac(lVar15,0xae60c8,&UNK_007cccd0);
    dVar25 = 0.0;
    dVar14 = param_1;
  }
  else {
    (**(code **)(lVar20 + 0x20))(puStack_f8,lVar15,lVar7);
    lVar17 = lStack_d8;
    __s10Foundation4DateVACycfC(lStack_d8);
    __s10Foundation4DateV17timeIntervalSinceySdACF(puVar4);
    pcVar22 = *(code **)(lVar20 + 8);
    (*pcVar22)(lVar17,lVar7);
    (*pcVar22)(puVar4,lVar7);
    dVar14 = 1000.0;
    dVar25 = param_1 * 1000.0;
  }
  uVar9 = uStack_e0;
  lVar17 = lStack_100;
  func_0x00784480(uStack_e0);
  puVar1 = (undefined4 *)(unaff_x20 + _DAT_00ae6118);
  uVar24 = *puVar1;
  uVar21 = *(undefined8 *)(puVar1 + 2);
  uVar2 = *(undefined1 *)(puVar1 + 4);
  func_0x0001f4c8(dVar25,dVar14,uVar24,uVar21,uVar2);
  lVar10 = lStack_e8;
  __s10Foundation4DateVACycfC(lStack_e8);
  (*pcStack_f0)(lVar10,0,1,lVar7);
  _swift_beginAccess(unaff_x20 + lVar17,apuStack_d0,0x21,0);
  FUN_00013a14(lVar10,unaff_x20 + lVar17);
  _swift_endAccess(apuStack_d0);
  lVar17 = 0xae6188;
  func_0x000115a8(0xae6188,&UNK_007ccde0);
  _swift_allocObject();
  *(undefined8 *)(lVar17 + 0x18) = 2;
  *(undefined8 *)(lVar17 + 0x10) = 1;
  uVar6 = (undefined1)*(undefined8 *)(unaff_x20 + _DAT_00ae60e8);
  func_0x00787b60();
  *(undefined **)(lVar17 + 0x38) = &UNK_0099d4f8;
  *(undefined ***)(lVar17 + 0x40) = &PTR_DAT_0099d510;
  *(undefined8 *)(lVar17 + 0x20) = uVar9;
  *(undefined1 *)(lVar17 + 0x28) = uVar6;
  uVar3 = *(uint5 *)(unaff_x20 + _DAT_00ae6128);
  if (((ulong)uVar3 & 0xff00000000) == 0x200000000) {
    _objc_retain(uVar9);
    lVar10 = lVar17;
  }
  else {
    _objc_retain(uVar9);
    lVar10 = 1;
    func_0x00015ca4(1,2,1,lVar17);
    puStack_b8 = &UNK_0099d388;
    ppuStack_b0 = &PTR_DAT_0099d310;
    puVar11 = &UNK_0099cbb8;
    _swift_allocObject(&UNK_0099cbb8,0x30,7);
    *(int *)(puVar11 + 0x10) = (int)uVar3;
    puVar11[0x14] = (byte)(uVar3 >> 0x20) & 1;
    *(undefined4 *)(puVar11 + 0x18) = uVar24;
    *(undefined8 *)(puVar11 + 0x20) = uVar21;
    puVar11[0x28] = uVar2;
    *(undefined8 *)(lVar10 + 0x10) = 2;
    apuStack_d0[0] = puVar11;
    func_0x00016960(apuStack_d0,lVar10 + 0x48);
  }
  puVar12 = (undefined8 *)(unaff_x20 + _DAT_00ae6108);
  FUN_0001393c(puVar12,puVar12[3]);
  uVar19 = *(undefined8 *)(unaff_x20 + _DAT_00ae60e0 + 0x28);
  puVar11 = &UNK_0099cb90;
  _swift_allocObject(&UNK_0099cb90,0x18,7);
  _swift_unknownObjectWeakInit(puVar11 + 0x10);
  uVar21 = *puVar12;
  _objc_retain(uVar9);
  FUN_000254c8(uVar19,lVar10,uVar21,uVar9,puVar11);
  _swift_release(puVar11);
  _swift_bridgeObjectRelease(lVar10);
  _objc_release(uVar9);
  return;
}



/* Entry: 00014dd4; end: 00014e4b; -[_TtC19LocationPushHandler24UnaryLocationPushHandler forceComplete] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00014dd4(long param_1)

{
  long lVar1;
  
  _objc_retain();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000029,0x80000000008b4f40);
  _objc_release();
  FUN_000143b4();
  lVar1 = *(long *)(param_1 + _DAT_00ae6130);
  if (lVar1 == 0) {
    FUN_00013fb0(3);
  }
  else {
    _objc_retain();
    FUN_00014748();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 00014e4c; end: 00015113;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00014e4c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long extraout_x8;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined1 auStack_e0 [8];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar3 = 0xae60c8;
  puVar5 = &UNK_007cccd0;
  func_0x000115a8(0xae60c8,&UNK_007cccd0);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_e0 + -extraout_x8;
  uStack_d8 = 0;
  uStack_d0 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x31);
  _swift_bridgeObjectRelease(uStack_d0);
  uStack_d8 = 0xd00000000000002f;
  uStack_d0 = 0x80000000008b4d70;
  func_0x00781e40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  _objc_release(param_3);
  __sSS6appendyySSF(uVar7,puVar5);
  _swift_bridgeObjectRelease(puVar5);
  uVar7 = uStack_d0;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_d8,uStack_d0);
  _objc_release();
  _swift_bridgeObjectRelease(uVar7);
  _swift_beginAccess(param_4 + 0x10,auStack_68,0,0);
  lVar3 = param_4 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar3 != 0) {
    __s10Foundation4DateVACycfC(puVar6);
    lVar4 = 0;
    __s10Foundation4DateVMa();
    (**(code **)(*(long *)(lVar4 + -8) + 0x38))(puVar6,0,1,lVar4);
    lVar4 = _DAT_00b64798;
    _swift_beginAccess(lVar3 + _DAT_00b64798,&uStack_d8,0x21,0);
    FUN_00013a14(puVar6,lVar3 + lVar4);
    _swift_endAccess(&uStack_d8);
    _objc_release(lVar3);
  }
  _swift_beginAccess(param_4 + 0x10,auStack_80,0,0);
  lVar3 = param_4 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar3 != 0) {
    FUN_000158fc(&DAT_00b64790,&DAT_00b64798);
    _objc_release(lVar3);
    _swift_beginAccess(param_4 + 0x10,auStack_98,0,0);
    lVar3 = param_4 + 0x10;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar3 != 0) {
      puVar1 = (undefined4 *)(lVar3 + _DAT_00ae6118);
      uVar8 = *puVar1;
      uVar7 = *(undefined8 *)(puVar1 + 2);
      uVar2 = *(undefined1 *)(puVar1 + 4);
      _objc_release();
      _swift_beginAccess(param_4 + 0x10,auStack_b0,0,0);
      lVar3 = param_4 + 0x10;
      _swift_unknownObjectWeakLoadStrong();
      if (lVar3 != 0) {
        FUN_00016978(lVar3 + _DAT_00ae60f8,&uStack_d8);
        _objc_release(lVar3);
        FUN_0001393c(&uStack_d8,uStack_c0);
        func_0x0001f7c8(param_1,uVar8,uVar7,uVar2,param_2 == 0);
        FUN_00011670(&uStack_d8);
      }
    }
  }
  _swift_beginAccess(param_4 + 0x10,&uStack_d8,0,0);
  param_4 = param_4 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_4 != 0) {
    uVar7 = 0;
    if (param_2 != 0) {
      uVar7 = 5;
    }
    FUN_00013fb0(uVar7);
    _objc_release(param_4);
  }
  return;
}



/* Entry: 00015114; end: 00015127;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_00015114(double param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  undefined1 *puVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  code *pcVar8;
  long lVar9;
  code *pcVar10;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  
  lVar1 = 0xae60c8;
  func_0x000115a8(0xae60c8,&UNK_007cccd0);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar4 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  puVar7 = puVar4 + -extraout_x12;
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar9 + 0x40));
  lVar6 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar1 = _DAT_00b64790;
  lVar5 = lVar6 - extraout_x12_00;
  _swift_beginAccess(unaff_x20 + _DAT_00b64790,auStack_88,0,0);
  FUN_000138a4(unaff_x20 + lVar1,puVar7);
  pcVar8 = *(code **)(lVar9 + 0x30);
  puVar3 = puVar7;
  (*pcVar8)(puVar7,1,lVar2);
  if ((int)puVar3 != 1) {
    pcVar10 = *(code **)(lVar9 + 0x20);
    (*pcVar10)(lVar5,puVar7,lVar2);
    lVar1 = _DAT_00b64798;
    _swift_beginAccess(unaff_x20 + _DAT_00b64798,auStack_a0,0,0);
    FUN_000138a4(unaff_x20 + lVar1,puVar4);
    puVar3 = puVar4;
    (*pcVar8)(puVar4,1,lVar2);
    if ((int)puVar3 != 1) {
      (*pcVar10)(lVar6,puVar4,lVar2);
      __s10Foundation4DateV17timeIntervalSinceySdACF(lVar5);
      pcVar8 = *(code **)(lVar9 + 8);
      (*pcVar8)(lVar6,lVar2);
      (*pcVar8)(lVar5,lVar2);
      return param_1 * 1000.0;
    }
    (**(code **)(lVar9 + 8))(lVar5,lVar2);
    puVar7 = puVar4;
  }
  FUN_000168ac(puVar7,0xae60c8,&UNK_007cccd0);
  return 0.0;
}



/* Entry: 00015128; end: 00015463;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00015128(double param_1,ulong param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  int iVar9;
  long unaff_x20;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined4 uVar17;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [24];
  
  lVar5 = 0xae60c8;
  func_0x000115a8(0xae60c8,&UNK_007cccd0);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar13 = auStack_90 + -extraout_x8;
  lVar5 = 0;
  __s10Foundation4DateVMa();
  lVar16 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar16 + 0x40));
  lVar14 = (long)puVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar15 = lVar14 - extraout_x12;
  piVar1 = (int *)(unaff_x20 + _DAT_00ae6128);
  *(byte *)(piVar1 + 1) = (byte)(param_2 >> 0x20) & 1;
  iVar9 = (int)param_2;
  *piVar1 = iVar9;
  if ((iVar9 != 3) || ((param_2 & 0x100000000) == 0)) {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000030,0x80000000008b4e50);
    _objc_release();
    FUN_000143b4();
    FUN_0001393c(unaff_x20 + _DAT_00ae60f8,*(undefined8 *)(unaff_x20 + _DAT_00ae60f8 + 0x18));
    lVar4 = _DAT_00b64780;
    _swift_beginAccess(unaff_x20 + _DAT_00b64780,auStack_88,0,0);
    FUN_000138a4(unaff_x20 + lVar4,puVar13);
    puVar6 = puVar13;
    (**(code **)(lVar16 + 0x30))(puVar13,1,lVar5);
    if ((int)puVar6 == 1) {
      FUN_000168ac(puVar13,0xae60c8,&UNK_007cccd0);
      param_1 = 0.0;
    }
    else {
      (**(code **)(lVar16 + 0x20))(lVar15,puVar13,lVar5);
      __s10Foundation4DateVACycfC(lVar14);
      __s10Foundation4DateV17timeIntervalSinceySdACF(lVar15);
      pcVar10 = *(code **)(lVar16 + 8);
      (*pcVar10)(lVar14,lVar5);
      (*pcVar10)(lVar15,lVar5);
      param_1 = param_1 * 1000.0;
    }
    puVar2 = (undefined4 *)(unaff_x20 + _DAT_00ae6118);
    uVar17 = *puVar2;
    uVar12 = *(undefined8 *)(puVar2 + 2);
    uVar3 = *(undefined1 *)(puVar2 + 4);
    FUN_0001f63c(param_1,uVar17,uVar12,uVar3,1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000030,0x80000000008b4e90);
    _objc_release();
    puVar7 = (undefined8 *)(unaff_x20 + _DAT_00ae6108);
    FUN_0001393c(puVar7,puVar7[3]);
    uVar11 = *(undefined8 *)(unaff_x20 + _DAT_00ae60e0 + 0x28);
    lVar5 = 0xae6188;
    func_0x000115a8(0xae6188,&UNK_007ccde0);
    _swift_allocObject();
    *(undefined8 *)(lVar5 + 0x18) = 2;
    *(undefined8 *)(lVar5 + 0x10) = 1;
    *(undefined **)(lVar5 + 0x38) = &UNK_0099d388;
    *(undefined ***)(lVar5 + 0x40) = &PTR_DAT_0099d310;
    puVar8 = &UNK_0099cbb8;
    _swift_allocObject(&UNK_0099cbb8,0x30,7);
    *(undefined **)(lVar5 + 0x20) = puVar8;
    *(int *)(puVar8 + 0x10) = iVar9;
    puVar8[0x14] = (char)((param_2 & 0x100000000) >> 0x20);
    *(undefined4 *)(puVar8 + 0x18) = uVar17;
    *(undefined8 *)(puVar8 + 0x20) = uVar12;
    puVar8[0x28] = uVar3;
    puVar8 = &UNK_0099cb90;
    _swift_allocObject(&UNK_0099cb90,0x18,7);
    _swift_unknownObjectWeakInit(puVar8 + 0x10);
    FUN_0002588c(uVar11,lVar5,*puVar7,param_2 & 0x1ffffffff,puVar8);
    _swift_release(puVar8);
    _swift_release(lVar5);
  }
  return;
}



/* Entry: 00015464; end: 0001546f;  */

void FUN_00015464(undefined8 param_1,ulong param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000030,0x80000000008b4ed0);
  _objc_release();
  if ((int)(param_2 & 0x1ffffffff) == 3) {
    if ((param_2 & 0x1ffffffff) >> 0x20 != 0) {
      return;
    }
    _swift_beginAccess(param_3 + 0x10,auStack_38,0,0);
    param_3 = param_3 + 0x10;
    _swift_unknownObjectWeakLoadStrong();
    if (param_3 == 0) {
      return;
    }
    uVar1 = 7;
  }
  else {
    _swift_beginAccess(param_3 + 0x10,auStack_38,0,0);
    param_3 = param_3 + 0x10;
    _swift_unknownObjectWeakLoadStrong();
    if (param_3 == 0) {
      return;
    }
    uVar1 = 8;
  }
  FUN_00013fb0(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 00015470; end: 000154cf; -[_TtC19LocationPushHandler24UnaryLocationPushHandler init] */

void FUN_00015470(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LocationPushHandler.UnaryLocationPushHandler",0x2c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1549c);
  (*pcVar1)();
}



/* Entry: 000154d0; end: 0001564b; -[_TtC19LocationPushHandler24UnaryLocationPushHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000154d0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = param_1 + _DAT_00ae60e0;
  uVar2 = *(undefined8 *)(lVar1 + 0x38);
  uVar3 = *(undefined8 *)(lVar1 + 0x40);
  uVar4 = *(undefined8 *)(lVar1 + 0x48);
  uVar5 = *(undefined8 *)(lVar1 + 0x60);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x10));
  func_0x00013b20(uVar2,uVar3,uVar4);
  _objc_release(uVar5);
  _objc_release(*(undefined8 *)(param_1 + _DAT_00ae60e8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_00ae60f0));
  FUN_00011670(param_1 + _DAT_00ae60f8);
  FUN_00011670(param_1 + _DAT_00ae6100);
  FUN_00011670(param_1 + _DAT_00ae6108);
  _swift_release(*(undefined8 *)(param_1 + _DAT_00ae6110));
  _objc_release(*(undefined8 *)(param_1 + _DAT_00ae6120));
  _objc_release(*(undefined8 *)(param_1 + _DAT_00ae6130));
  FUN_000168ac(param_1 + _DAT_00b64780,0xae60c8,&UNK_007cccd0);
  FUN_000168ac(param_1 + _DAT_00b64788,0xae60c8,&UNK_007cccd0);
  FUN_000168ac(param_1 + _DAT_00b64790,0xae60c8,&UNK_007cccd0);
  FUN_000168ac(param_1 + _DAT_00b64798,0xae60c8,&UNK_007cccd0);
  FUN_000168ac(param_1 + _DAT_00b647a0,0xae60c8,&UNK_007cccd0);
  if (*(long *)(param_1 + _DAT_00ae6138) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_0099bb20)(((long *)(param_1 + _DAT_00ae6138))[1]);
    return;
  }
  return;
}



/* Entry: 0001564c; end: 00015653;  */

void FUN_0001564c(void)

{
  if (lRam0000000000ae6168 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_0083d918);
  return;
}



/* Entry: 00015654; end: 0001568b;  */

void FUN_00015654(undefined8 param_1)

{
  if (lRam0000000000ae6168 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_0083d918);
  return;
}



/* Entry: 0001568c; end: 00015763;  */

void FUN_0001568c(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_a0 = PTR___sBOWV_0099ae70 + 0x40;
  puStack_a8 = &UNK_007ccd10;
  puStack_98 = &UNK_007ccd28;
  puStack_90 = &UNK_007ccd40;
  puStack_88 = &UNK_007ccd40;
  puStack_80 = &UNK_007ccd40;
  puStack_78 = PTR___sBoWV_0099ae88 + 0x40;
  puStack_70 = &UNK_007ccd58;
  puStack_68 = &UNK_007ccd70;
  puStack_60 = &UNK_007ccd88;
  puStack_58 = &UNK_007ccd70;
  lVar1 = 0x13f;
  func_0x00012d7c();
  if (param_2 < 0x40) {
    lStack_50 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &UNK_007ccda0;
    lStack_48 = lStack_50;
    lStack_40 = lStack_50;
    lStack_38 = lStack_50;
    lStack_30 = lStack_50;
    _swift_updateClassMetadata2(param_1,0x100,0x11,&puStack_a8,param_1 + 0x50);
  }
  return;
}



/* Entry: 00015764; end: 00015803; -[_TtC19LocationPushHandler24UnaryLocationPushHandler locationManagerDidChangeAuthorization:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00015764(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  code *pcVar5;
  
  puVar1 = (ulong *)(param_1 + _DAT_00ae60f0);
  uVar3 = *puVar1;
  uVar2 = puVar1[1];
  _swift_getObjectType(uVar3);
  pcVar5 = *(code **)(uVar2 + 0x48);
  _objc_retain(param_1);
  (*pcVar5)(uVar3,uVar2);
  uVar4 = *puVar1;
  uVar2 = puVar1[1];
  _swift_getObjectType();
  (**(code **)(uVar2 + 0x50))();
  uVar2 = 0x100000000;
  if ((uVar4 & 1) == 0) {
    uVar2 = 0;
  }
  FUN_00015128(uVar2 | uVar3 & 0xffffffff);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 00015804; end: 00015807; -[_TtC19LocationPushHandler24UnaryLocationPushHandler locationManager:didChangeAuthorizationStatus:] */

void FUN_00015804(void)

{
  return;
}



/* Entry: 00015808; end: 0001587f; -[_TtC19LocationPushHandler24UnaryLocationPushHandler locationManager:didUpdateLocations:] */

void FUN_00015808(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_00013960(0);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_4,uVar1);
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_000161c8(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(param_4);
  return;
}



/* Entry: 00015880; end: 000158e7; -[_TtC19LocationPushHandler24UnaryLocationPushHandler locationManager:didFailWithError:] */

void FUN_00015880(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_1);
  func_0x0001650c(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_4);
  return;
}



/* Entry: 000158e8; end: 000158fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_000158e8(double param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  undefined1 *puVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  code *pcVar8;
  long lVar9;
  code *pcVar10;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  
  lVar1 = 0xae60c8;
  func_0x000115a8(0xae60c8,&UNK_007cccd0);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar4 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  puVar7 = puVar4 + -extraout_x12;
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar9 + 0x40));
  lVar6 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar1 = _DAT_00b64780;
  lVar5 = lVar6 - extraout_x12_00;
  _swift_beginAccess(unaff_x20 + _DAT_00b64780,auStack_88,0,0);
  FUN_000138a4(unaff_x20 + lVar1,puVar7);
  pcVar8 = *(code **)(lVar9 + 0x30);
  puVar3 = puVar7;
  (*pcVar8)(puVar7,1,lVar2);
  if ((int)puVar3 != 1) {
    pcVar10 = *(code **)(lVar9 + 0x20);
    (*pcVar10)(lVar5,puVar7,lVar2);
    lVar1 = _DAT_00b64788;
    _swift_beginAccess(unaff_x20 + _DAT_00b64788,auStack_a0,0,0);
    FUN_000138a4(unaff_x20 + lVar1,puVar4);
    puVar3 = puVar4;
    (*pcVar8)(puVar4,1,lVar2);
    if ((int)puVar3 != 1) {
      (*pcVar10)(lVar6,puVar4,lVar2);
      __s10Foundation4DateV17timeIntervalSinceySdACF(lVar5);
      pcVar8 = *(code **)(lVar9 + 8);
      (*pcVar8)(lVar6,lVar2);
      (*pcVar8)(lVar5,lVar2);
      return param_1 * 1000.0;
    }
    (**(code **)(lVar9 + 8))(lVar5,lVar2);
    puVar7 = puVar4;
  }
  FUN_000168ac(puVar7,0xae60c8,&UNK_007cccd0);
  return 0.0;
}



/* Entry: 000158fc; end: 00015b1f;  */

double FUN_000158fc(double param_1,long *param_2,long *param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  undefined1 *puVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  code *pcVar10;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  
  lVar1 = 0xae60c8;
  func_0x000115a8(0xae60c8,&UNK_007cccd0);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar3 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  puVar6 = puVar3 + -extraout_x12;
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar9 + 0x40));
  lVar5 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar4 = lVar5 - extraout_x12_00;
  lVar7 = *param_2;
  _swift_beginAccess(unaff_x20 + lVar7,auStack_88,0,0);
  FUN_000138a4(unaff_x20 + lVar7,puVar6);
  pcVar8 = *(code **)(lVar9 + 0x30);
  puVar2 = puVar6;
  (*pcVar8)(puVar6,1,lVar1);
  if ((int)puVar2 != 1) {
    pcVar10 = *(code **)(lVar9 + 0x20);
    (*pcVar10)(lVar4,puVar6,lVar1);
    lVar7 = *param_3;
    _swift_beginAccess(unaff_x20 + lVar7,auStack_a0,0,0);
    FUN_000138a4(unaff_x20 + lVar7,puVar3);
    puVar2 = puVar3;
    (*pcVar8)(puVar3,1,lVar1);
    if ((int)puVar2 != 1) {
      (*pcVar10)(lVar5,puVar3,lVar1);
      __s10Foundation4DateV17timeIntervalSinceySdACF(lVar4);
      pcVar8 = *(code **)(lVar9 + 8);
      (*pcVar8)(lVar5,lVar1);
      (*pcVar8)(lVar4,lVar1);
      return param_1 * 1000.0;
    }
    (**(code **)(lVar9 + 8))(lVar4,lVar1);
    puVar6 = puVar3;
  }
  FUN_000168ac(puVar6,0xae60c8,&UNK_007cccd0);
  return 0.0;
}



/* Entry: 00015b20; end: 00015b7b;  */

void FUN_00015b20(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  FUN_0040c9a8(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    FUN_00013960();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0xae61a0;
      plVar5 = (long *)&UNK_007cfbd0;
      goto SUB_000115a8;
    }
  }
  puVar2 = (ulong *)0xae6198;
  plVar5 = (long *)&UNK_007ccdf0;
SUB_000115a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    _swift_getTypeByMangledNameInContext(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 00015b7c; end: 00015de7;  */

ulong FUN_00015b7c(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x15ca4);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_00015de8(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x15ca0);
      (*pcVar1)();
    }
    FUN_00015e68(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      _memmove(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    _swift_bridgeObjectRelease(param_4);
  }
  return uVar3;
}



/* Entry: 00015de8; end: 00015e67;  */

undefined * FUN_00015de8(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_0099b8f0;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    FUN_00015b20();
    _swift_allocObject();
    puVar3 = puVar2;
    _malloc_size();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 00015e68; end: 00015f5f;  */

long FUN_00015e68(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x15f5c);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x15f60);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_00013960(0);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        __ss12_ArrayBufferV18_typeCheckSlowPathyySiF(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_00013960(0);
      _swift_arrayInitWithCopy
                (param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,param_2 - param_1,uVar4)
      ;
      _swift_bridgeObjectRelease(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x15f58);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00778e3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_0099b580)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 00015f60; end: 00016113;  */

ulong FUN_00015f60(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x16044);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x16048);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    _swift_unknownObjectRetain(param_1);
    puVar4 = PTR__OBJC_CLASS___CLLocation_00ac35c0;
    _objc_opt_self(PTR__OBJC_CLASS___CLLocation_00ac35c0);
    uVar5 = param_1;
    _swift_dynamicCastObjCClass(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    __ss18_CocoaArrayWrapperVyyXlSicig(param_1,uVar5);
    puVar4 = PTR__OBJC_CLASS___CLLocation_00ac35c0;
    _objc_opt_self(PTR__OBJC_CLASS___CLLocation_00ac35c0);
    uVar5 = param_1;
    _swift_dynamicCastObjCClass(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  __sSS6appendyySSF(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_00013960(0);
  uVar3 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar3);
  __sSS6appendyySSF(0x756f662074756220,0xeb0000000020646e);
  _swift_getObjectType(param_1);
  uVar3 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar3);
  __ss17_assertionFailure__5flagss5NeverOs12StaticStringV_SSs6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x16114);
  (*pcVar2)();
}



/* Entry: 00016114; end: 000161c7;  */

void FUN_00016114(ulong param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000030,0x80000000008b4ed0);
  _objc_release();
  if ((int)param_1 == 3) {
    if ((param_1 >> 0x20 & 1) != 0) {
      return;
    }
    _swift_beginAccess(param_2 + 0x10,auStack_38,0,0);
    param_2 = param_2 + 0x10;
    _swift_unknownObjectWeakLoadStrong();
    if (param_2 == 0) {
      return;
    }
    uVar1 = 7;
  }
  else {
    _swift_beginAccess(param_2 + 0x10,auStack_38,0,0);
    param_2 = param_2 + 0x10;
    _swift_unknownObjectWeakLoadStrong();
    if (param_2 == 0) {
      return;
    }
    uVar1 = 8;
  }
  FUN_00013fb0(uVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 000161c8; end: 00016843;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000161c8(double param_1,ulong param_2)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  double dVar9;
  long extraout_x12;
  long unaff_x20;
  undefined1 *puVar10;
  code *pcVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  double dVar16;
  undefined4 uVar17;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [24];
  
  lVar5 = 0xae60c8;
  func_0x000115a8(0xae60c8,&UNK_007cccd0);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = auStack_90 + -extraout_x8;
  lVar5 = 0;
  __s10Foundation4DateVMa();
  lVar15 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar15 + 0x40));
  lVar12 = (long)puVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar14 = lVar12 - extraout_x12;
  if (param_2 >> 0x3e == 0) {
    uVar6 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar6 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar6 = param_2;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar6 == 0) {
    return;
  }
  uVar7 = uVar6 - 1;
  if (SBORROW8(uVar6,1)) {
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x164f8);
    (*pcVar11)();
  }
  if ((param_2 & 0xc000000000000001) == 0) {
    if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x16508);
      (*pcVar11)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x1650c);
      (*pcVar11)();
    }
    uVar7 = *(ulong *)(param_2 + uVar7 * 8 + 0x20);
    _objc_retain();
  }
  else {
    FUN_00015f60(uVar7,param_2);
  }
  lVar3 = _DAT_00ae6130;
  if (*(long *)(unaff_x20 + _DAT_00ae6130) == 0) {
    FUN_0001393c(unaff_x20 + _DAT_00ae60f8,*(undefined8 *)(unaff_x20 + _DAT_00ae60f8 + 0x18));
    lVar4 = _DAT_00b64780;
    _swift_beginAccess(unaff_x20 + _DAT_00b64780,auStack_88,0,0);
    FUN_000138a4(unaff_x20 + lVar4,puVar10);
    puVar8 = puVar10;
    (**(code **)(lVar15 + 0x30))(puVar10,1,lVar5);
    if ((int)puVar8 == 1) {
      FUN_000168ac(puVar10,0xae60c8,&UNK_007cccd0);
      dVar9 = param_1;
      param_1 = 0.0;
    }
    else {
      (**(code **)(lVar15 + 0x20))(lVar14,puVar10,lVar5);
      __s10Foundation4DateVACycfC(lVar12);
      __s10Foundation4DateV17timeIntervalSinceySdACF(lVar14);
      pcVar11 = *(code **)(lVar15 + 8);
      (*pcVar11)(lVar12,lVar5);
      (*pcVar11)(lVar14,lVar5);
      dVar9 = 1000.0;
      param_1 = param_1 * 1000.0;
    }
    puVar1 = (undefined4 *)(unaff_x20 + _DAT_00ae6118);
    uVar17 = *puVar1;
    uVar13 = *(undefined8 *)(puVar1 + 2);
    uVar2 = *(undefined1 *)(puVar1 + 4);
    func_0x00784480(uVar7);
    FUN_0001f364(param_1,uVar17,dVar9,uVar13,uVar2);
  }
  func_0x00784480(uVar7);
  dVar9 = param_1;
  func_0x00781ec0(*(undefined8 *)(unaff_x20 + _DAT_00ae60e8));
  if (dVar9 <= param_1) {
    lVar5 = *(long *)(unaff_x20 + lVar3);
    if (lVar5 == 0) {
      *(ulong *)(unaff_x20 + lVar3) = uVar7;
      return;
    }
    _objc_retain();
    func_0x00784480(uVar7);
    dVar16 = dVar9;
    func_0x00784480(lVar5);
    _objc_release(lVar5);
    if (dVar9 < dVar16) {
      uVar13 = *(undefined8 *)(unaff_x20 + lVar3);
      *(ulong *)(unaff_x20 + lVar3) = uVar7;
      _objc_release(uVar13);
      return;
    }
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000038,0x80000000008b4d00);
    _objc_release();
    uVar13 = *(undefined8 *)(unaff_x20 + lVar3);
    *(ulong *)(unaff_x20 + lVar3) = uVar7;
    _objc_retain(uVar7);
    _objc_release(uVar13);
    FUN_000143b4();
    FUN_00014748(uVar7);
  }
  _objc_release(uVar7);
  return;
}


