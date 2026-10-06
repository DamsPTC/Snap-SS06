/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103fd7368; end: 103fd7377; -[_TtC25PlusPinBestFriendServices25PlusPinBestFriendServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fd7368(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_113041e10));
  return;
}



/* Entry: 103fd7378; end: 103fd73db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fd7378(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113041e48) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113041e50) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fd73dc; end: 103fd73fb; -[CreatorSubscriptionsServices subscriptionsInfoProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fd73dc(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_113041e48));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103fd73fc; end: 103fd7457; -[CreatorSubscriptionsServices init] */

void FUN_103fd73fc(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("CreatorSubscriptionsServices.CreatorSubscriptionsServices",0x39,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fd7428);
  (*pcVar1)();
}



/* Entry: 103fd7458; end: 103fd748f; -[CreatorSubscriptionsServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fd7458(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113041e48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_113041e50));
  return;
}



/* Entry: 103fd7490; end: 103fd74b3;  */

undefined1  [16] FUN_103fd7490(void)

{
  return ZEXT816(0x11072f138);
}



/* Entry: 103fd74b4; end: 103fd758b;  */

void FUN_103fd74b4(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103fd758c; end: 103fd75ab;  */

void FUN_103fd758c(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 103fd75ac; end: 103fd75eb;  */

void FUN_103fd75ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000113041e80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcbac90;
  _swift_getWitnessTable(&UNK_10dcbac90,&UNK_11072f158);
  puRam0000000113041e80 = puVar1;
  return;
}



/* Entry: 103fd75ec; end: 103fd75fb;  */

undefined1  [16] FUN_103fd75ec(void)

{
  return ZEXT816(0x11072f158);
}



/* Entry: 103fd75fc; end: 103fd7607; -[_TtC28CreatorSubscriptionsServices19CreatorSubscription creatorId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fd75fc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113041e88);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113041e88))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103fd7608; end: 103fd7613; -[_TtC28CreatorSubscriptionsServices19CreatorSubscription productId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fd7608(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113041e90);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113041e90))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103fd7614; end: 103fd765b;  */

void FUN_103fd7614(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103fd765c; end: 103fd766b; -[_TtC28CreatorSubscriptionsServices19CreatorSubscription isActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103fd765c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113041e98);
}



/* Entry: 103fd766c; end: 103fd767b; -[_TtC28CreatorSubscriptionsServices19CreatorSubscription subscribedAtMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103fd766c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113041ea0);
}



/* Entry: 103fd767c; end: 103fd76bf; -[_TtC28CreatorSubscriptionsServices19CreatorSubscription expirationTimeMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103fd767c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113041ea8;
  _swift_beginAccess(param_1 + _DAT_113041ea8,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 103fd76c0; end: 103fd770f; -[_TtC28CreatorSubscriptionsServices19CreatorSubscription setExpirationTimeMillis:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fd76c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113041ea8;
  _swift_beginAccess(param_1 + _DAT_113041ea8,auStack_48,1,0);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 103fd7710; end: 103fd7777; -[_TtC28CreatorSubscriptionsServices19CreatorSubscription originalTransactionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fd7710(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_113041eb0);
  _swift_beginAccess(puVar1,auStack_38,0,0);
  uVar3 = *puVar1;
  uVar2 = puVar1[1];
  _swift_bridgeObjectRetain(uVar2);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,uVar2);
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103fd7778; end: 103fd77df; -[_TtC28CreatorSubscriptionsServices19CreatorSubscription setOriginalTransactionId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fd7778(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_1 + _DAT_113041eb0);
  _swift_beginAccess(puVar1,auStack_48,1,0);
  uVar2 = puVar1[1];
  *puVar1 = param_3;
  puVar1[1] = param_2;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 103fd77e0; end: 103fd7823; -[_TtC28CreatorSubscriptionsServices19CreatorSubscription status] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103fd77e0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113041eb8;
  _swift_beginAccess(param_1 + _DAT_113041eb8,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 103fd7824; end: 103fd7873; -[_TtC28CreatorSubscriptionsServices19CreatorSubscription setStatus:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fd7824(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113041eb8;
  _swift_beginAccess(param_1 + _DAT_113041eb8,auStack_48,1,0);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 103fd7874; end: 103fd787f; -[_TtC28CreatorSubscriptionsServices19CreatorSubscription displayName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fd7874(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113041ec0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113041ec0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103fd7880; end: 103fd788b; -[_TtC28CreatorSubscriptionsServices19CreatorSubscription logoUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fd7880(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113041ec8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113041ec8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103fd788c; end: 103fd78e3;  */

void FUN_103fd788c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103fd78e4; end: 103fd7b3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fd78e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113041e88);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113041e90);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined1 *)(unaff_x20 + _DAT_113041e98) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_113041ea0) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_113041ea8) = param_7;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113041eb0);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_113041eb8) = param_10;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113041ec0);
  *puVar1 = param_11;
  puVar1[1] = param_12;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113041ec8);
  *puVar1 = param_13;
  puVar1[1] = param_14;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fd7b3c; end: 103fd7b9b; -[_TtC28CreatorSubscriptionsServices19CreatorSubscription init] */

void FUN_103fd7b3c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("CreatorSubscriptionsServices.CreatorSubscription",0x30,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fd7b68);
  (*pcVar1)();
}



/* Entry: 103fd7b9c; end: 103fd7c17; -[_TtC28CreatorSubscriptionsServices19CreatorSubscription .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fd7b9c(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113041e88 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113041e90 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113041eb0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113041ec0 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113041ec8 + 8))
  ;
  return;
}



/* Entry: 103fd7c18; end: 103fd7c63; -[_TtC28CreatorSubscriptionsServices19CreatorSubscription isCanceled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_103fd7c18(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113041eb8;
  _swift_beginAccess(param_1 + _DAT_113041eb8,auStack_38,0,0);
  return *(long *)(param_1 + lVar1) == 4;
}



/* Entry: 103fd7c64; end: 103fd7d4f; -[_TtC28CreatorSubscriptionsServices19CreatorSubscription isTrulyActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_103fd7c64(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113041eb8;
  if (*(char *)(param_1 + _DAT_113041e98) == '\x01') {
    _swift_beginAccess(param_1 + _DAT_113041eb8,auStack_38,0,0);
    return *(long *)(param_1 + lVar1) != 4;
  }
  return false;
}



/* Entry: 103fd7d50; end: 103fd7d53;  */

void FUN_103fd7d50(void)

{
  undefined *puVar1;
  
  if (puRam0000000113041ed0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcbad50;
  _swift_getWitnessTable(&UNK_10dcbad50,&UNK_11072f1d0);
  puRam0000000113041ed0 = puVar1;
  return;
}



/* Entry: 103fd7d54; end: 103fd7d93;  */

void FUN_103fd7d54(void)

{
  undefined *puVar1;
  
  if (puRam0000000113041ed0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcbad50;
  _swift_getWitnessTable(&UNK_10dcbad50,&UNK_11072f1d0);
  puRam0000000113041ed0 = puVar1;
  return;
}



/* Entry: 103fd7d94; end: 103fd7d97;  */

void FUN_103fd7d94(void)

{
  undefined *puVar1;
  
  if (puRam0000000113041ed8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcbadf0;
  _swift_getWitnessTable(&UNK_10dcbadf0,&UNK_11072f1f0);
  puRam0000000113041ed8 = puVar1;
  return;
}



/* Entry: 103fd7d98; end: 103fd7df7;  */

void FUN_103fd7d98(void)

{
  undefined *puVar1;
  
  if (puRam0000000113041ed8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcbadf0;
  _swift_getWitnessTable(&UNK_10dcbadf0,&UNK_11072f1f0);
  puRam0000000113041ed8 = puVar1;
  return;
}



/* Entry: 103fd7df8; end: 103fd7fc7;  */

undefined1  [16] FUN_103fd7df8(void)

{
  return ZEXT816(0x11072f1f0);
}



/* Entry: 103fd7fc8; end: 103fd8073;  */

void FUN_103fd7fc8(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103fd8074; end: 103fd809b;  */

void FUN_103fd8074(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 2) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 1 < uVar2;
  return;
}



/* Entry: 103fd809c; end: 103fd810b;  */

undefined1  [16] FUN_103fd809c(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  undefined1 auVar4 [16];
  long lStack_18;
  
  lStack_18 = *unaff_x20;
  if (lStack_18 == 0) {
    uVar3 = 0xe500000000000000;
    uVar2 = 0x7972746572;
  }
  else {
    if (lStack_18 != 1) {
      __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                (param_1,&lStack_18,param_1,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103fd810c);
      (*pcVar1)();
    }
    uVar3 = 0x800000010efb9230;
    uVar2 = 0xd000000000000010;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 103fd810c; end: 103fd817f;  */

void FUN_103fd810c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  func_0x00010bf27040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  if (unaff_x20 != 0) {
    lVar1 = unaff_x20;
    func_0x000107c49820(unaff_x20);
    _objc_release(unaff_x20);
    func_0x000103fd7e08(lVar1);
  }
  return;
}



/* Entry: 103fd8180; end: 103fd8183;  */

void FUN_103fd8180(void)

{
  undefined *puVar1;
  
  if (puRam0000000113041f08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcbaf50;
  _swift_getWitnessTable(&UNK_10dcbaf50,&UNK_11072f2f8);
  puRam0000000113041f08 = puVar1;
  return;
}



/* Entry: 103fd8184; end: 103fd81c3;  */

void FUN_103fd8184(void)

{
  undefined *puVar1;
  
  if (puRam0000000113041f08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcbaf50;
  _swift_getWitnessTable(&UNK_10dcbaf50,&UNK_11072f2f8);
  puRam0000000113041f08 = puVar1;
  return;
}



/* Entry: 103fd81c4; end: 103fd81df;  */

undefined1  [16] FUN_103fd81c4(void)

{
  return ZEXT816(0x11072f2f8);
}



/* Entry: 103fd81e0; end: 103fd821f;  */

void FUN_103fd81e0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x113041fe8;
  func_0x0001000285a8(0x113041fe8,&UNK_10dcbb050);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 103fd8220; end: 103fd8237;  */

void FUN_103fd8220(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_103fd8eb0();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 103fd8238; end: 103fd8277;  */

void FUN_103fd8238(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x1130420b8;
  func_0x0001000285a8(0x1130420b8,&UNK_10dcbb058);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 103fd8278; end: 103fd828f;  */

void FUN_103fd8278(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*(code *)0x103fd8ebc)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 103fd8290; end: 103fd82cf;  */

void FUN_103fd8290(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x113042138;
  func_0x0001000285a8(0x113042138,&UNK_10dcbb060);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 103fd82d0; end: 103fd82f3;  */

void FUN_103fd82d0(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*(code *)0x103fd8ec8)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 103fd82f4; end: 103fd8333;  */

void FUN_103fd82f4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x113042198;
  func_0x0001000285a8(0x113042198,&UNK_10dcbb068);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 103fd8334; end: 103fd834f;  */

void FUN_103fd8334(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = uVar1 < 3;
  *(undefined1 *)((long)param_1 + 9) = 0;
  return;
}



/* Entry: 103fd8350; end: 103fd838f;  */

void FUN_103fd8350(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x1130421e8;
  func_0x0001000285a8(0x1130421e8,&UNK_10dcbb070);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 103fd8390; end: 103fd839b;  */

void FUN_103fd8390(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  (*(code *)0x103fd8ed4)();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 103fd839c; end: 103fd83db;  */

void FUN_103fd839c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x113042258;
  func_0x0001000285a8(0x113042258,&UNK_10dcbb078);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 103fd83dc; end: 103fd83f3;  */

void FUN_103fd83dc(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*(code *)0x103fd8ed4)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 103fd83f4; end: 103fd8463;  */

void FUN_103fd83f4(undefined8 *param_1,undefined8 param_2,undefined2 param_3,undefined8 param_4,
                  code *param_5)

{
  (*param_5)();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 103fd8464; end: 103fd846f;  */

void FUN_103fd8464(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*(code *)0x103fd8ee0)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 103fd8470; end: 103fd864b;  */

void FUN_103fd8470(undefined8 *param_1,undefined8 *param_2,undefined2 param_3,undefined8 param_4,
                  code *param_5)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*param_5)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 103fd864c; end: 103fd8687;  */

bool FUN_103fd864c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = (ulong)(*param_1 != 0);
  if ((char)param_1[1] != '\x01') {
    uVar1 = *param_1;
  }
  uVar2 = (ulong)(*param_2 != 0);
  if ((char)param_2[1] != '\x01') {
    uVar2 = *param_2;
  }
  return uVar1 == uVar2;
}



/* Entry: 103fd8688; end: 103fd86cf;  */

void FUN_103fd8688(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dcbbf80,199,2);
  uRam00000001138127e0 = uStack_38;
  uRam00000001138127d8 = uStack_40;
  uRam00000001138127f0 = uStack_28;
  uRam00000001138127e8 = uStack_30;
  uRam0000000113812800 = uStack_18;
  uRam00000001138127f8 = uStack_20;
  return;
}



/* Entry: 103fd86d0; end: 103fd876f;  */

void FUN_103fd86d0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam00000001130423a0 != -1) {
    _swift_once(0x1130423a0,FUN_103fd8688);
  }
  uVar5 = uRam0000000113812800;
  uVar4 = uRam00000001138127f8;
  uVar3 = uRam00000001138127f0;
  uVar2 = uRam00000001138127e8;
  uVar1 = uRam00000001138127e0;
  *param_1 = uRam00000001138127d8;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 103fd8770; end: 103fd87b7;  */

void FUN_103fd8770(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dcbbf10,0x6c,2);
  uRam0000000113812810 = uStack_38;
  uRam0000000113812808 = uStack_40;
  uRam0000000113812820 = uStack_28;
  uRam0000000113812818 = uStack_30;
  uRam0000000113812830 = uStack_18;
  uRam0000000113812828 = uStack_20;
  return;
}



/* Entry: 103fd87b8; end: 103fd8857;  */

void FUN_103fd87b8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam00000001130423a8 != -1) {
    _swift_once(0x1130423a8,FUN_103fd8770);
  }
  uVar5 = uRam0000000113812830;
  uVar4 = uRam0000000113812828;
  uVar3 = uRam0000000113812820;
  uVar2 = uRam0000000113812818;
  uVar1 = uRam0000000113812810;
  *param_1 = uRam0000000113812808;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 103fd8858; end: 103fd889f;  */

void FUN_103fd8858(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dcbbe50,0xb6,2);
  uRam0000000113812840 = uStack_38;
  uRam0000000113812838 = uStack_40;
  uRam0000000113812850 = uStack_28;
  uRam0000000113812848 = uStack_30;
  uRam0000000113812860 = uStack_18;
  uRam0000000113812858 = uStack_20;
  return;
}



/* Entry: 103fd88a0; end: 103fd893f;  */

void FUN_103fd88a0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam00000001130423b0 != -1) {
    _swift_once(0x1130423b0,FUN_103fd8858);
  }
  uVar5 = uRam0000000113812860;
  uVar4 = uRam0000000113812858;
  uVar3 = uRam0000000113812850;
  uVar2 = uRam0000000113812848;
  uVar1 = uRam0000000113812840;
  *param_1 = uRam0000000113812838;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 103fd8940; end: 103fd8987;  */

void FUN_103fd8940(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dcbbdd0,0x77,2);
  uRam0000000113812870 = uStack_38;
  uRam0000000113812868 = uStack_40;
  uRam0000000113812880 = uStack_28;
  uRam0000000113812878 = uStack_30;
  uRam0000000113812890 = uStack_18;
  uRam0000000113812888 = uStack_20;
  return;
}



/* Entry: 103fd8988; end: 103fd8a27;  */

void FUN_103fd8988(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam00000001130423b8 != -1) {
    _swift_once(0x1130423b8,FUN_103fd8940);
  }
  uVar5 = uRam0000000113812890;
  uVar4 = uRam0000000113812888;
  uVar3 = uRam0000000113812880;
  uVar2 = uRam0000000113812878;
  uVar1 = uRam0000000113812870;
  *param_1 = uRam0000000113812868;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 103fd8a28; end: 103fd8a6f;  */

void FUN_103fd8a28(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dcbbda0,0x25,2);
  uRam00000001138128a0 = uStack_38;
  uRam0000000113812898 = uStack_40;
  uRam00000001138128b0 = uStack_28;
  uRam00000001138128a8 = uStack_30;
  uRam00000001138128c0 = uStack_18;
  uRam00000001138128b8 = uStack_20;
  return;
}



/* Entry: 103fd8a70; end: 103fd8b0f;  */

void FUN_103fd8a70(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam00000001130423c0 != -1) {
    _swift_once(0x1130423c0,FUN_103fd8a28);
  }
  uVar5 = uRam00000001138128c0;
  uVar4 = uRam00000001138128b8;
  uVar3 = uRam00000001138128b0;
  uVar2 = uRam00000001138128a8;
  uVar1 = uRam00000001138128a0;
  *param_1 = uRam0000000113812898;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 103fd8b10; end: 103fd8b57;  */

void FUN_103fd8b10(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dcbbd30,0x6b,2);
  uRam00000001138128d0 = uStack_38;
  uRam00000001138128c8 = uStack_40;
  uRam00000001138128e0 = uStack_28;
  uRam00000001138128d8 = uStack_30;
  uRam00000001138128f0 = uStack_18;
  uRam00000001138128e8 = uStack_20;
  return;
}



/* Entry: 103fd8b58; end: 103fd8bf7;  */

void FUN_103fd8b58(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam00000001130423c8 != -1) {
    _swift_once(0x1130423c8,FUN_103fd8b10);
  }
  uVar5 = uRam00000001138128f0;
  uVar4 = uRam00000001138128e8;
  uVar3 = uRam00000001138128e0;
  uVar2 = uRam00000001138128d8;
  uVar1 = uRam00000001138128d0;
  *param_1 = uRam00000001138128c8;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 103fd8bf8; end: 103fd8c3f;  */

void FUN_103fd8bf8(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dcbbc30,0xfc,2);
  uRam0000000113812900 = uStack_38;
  uRam00000001138128f8 = uStack_40;
  uRam0000000113812910 = uStack_28;
  uRam0000000113812908 = uStack_30;
  uRam0000000113812920 = uStack_18;
  uRam0000000113812918 = uStack_20;
  return;
}



/* Entry: 103fd8c40; end: 103fd8cdf;  */

void FUN_103fd8c40(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam00000001130423d0 != -1) {
    _swift_once(0x1130423d0,FUN_103fd8bf8);
  }
  uVar5 = uRam0000000113812920;
  uVar4 = uRam0000000113812918;
  uVar3 = uRam0000000113812910;
  uVar2 = uRam0000000113812908;
  uVar1 = uRam0000000113812900;
  *param_1 = uRam00000001138128f8;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 103fd8ce0; end: 103fd8d27;  */

void FUN_103fd8ce0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dcbbbf0,0x36,2);
  uRam0000000113812930 = uStack_38;
  uRam0000000113812928 = uStack_40;
  uRam0000000113812940 = uStack_28;
  uRam0000000113812938 = uStack_30;
  uRam0000000113812950 = uStack_18;
  uRam0000000113812948 = uStack_20;
  return;
}



/* Entry: 103fd8d28; end: 103fd8dc7;  */

void FUN_103fd8d28(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam00000001130423d8 != -1) {
    _swift_once(0x1130423d8,FUN_103fd8ce0);
  }
  uVar5 = uRam0000000113812950;
  uVar4 = uRam0000000113812948;
  uVar3 = uRam0000000113812940;
  uVar2 = uRam0000000113812938;
  uVar1 = uRam0000000113812930;
  *param_1 = uRam0000000113812928;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 103fd8dc8; end: 103fd8e0f;  */

void FUN_103fd8dc8(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dcbbbc0,0x2a,2);
  uRam0000000113812960 = uStack_38;
  uRam0000000113812958 = uStack_40;
  uRam0000000113812970 = uStack_28;
  uRam0000000113812968 = uStack_30;
  uRam0000000113812980 = uStack_18;
  uRam0000000113812978 = uStack_20;
  return;
}



/* Entry: 103fd8e10; end: 103fd8eaf;  */

void FUN_103fd8e10(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam00000001130423e0 != -1) {
    _swift_once(0x1130423e0,FUN_103fd8dc8);
  }
  uVar5 = uRam0000000113812980;
  uVar4 = uRam0000000113812978;
  uVar3 = uRam0000000113812970;
  uVar2 = uRam0000000113812968;
  uVar1 = uRam0000000113812960;
  *param_1 = uRam0000000113812958;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 103fd8eb0; end: 103fd8eff;  */

void FUN_103fd8eb0(void)

{
  return;
}



/* Entry: 103fd8f00; end: 103fd8fab;  */

void FUN_103fd8f00(void)

{
  undefined *puVar1;
  
  if (puRam00000001130423e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcbb130;
  _swift_getWitnessTable(&UNK_10dcbb130,&UNK_11072f668);
  puRam00000001130423e8 = puVar1;
  return;
}



/* Entry: 103fd8fac; end: 103fd8faf;  */

void FUN_103fd8fac(void)

{
  undefined *puVar1;
  
  if (puRam0000000113042408 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcbb170;
  _swift_getWitnessTable(&UNK_10dcbb170,&UNK_11072f668);
  puRam0000000113042408 = puVar1;
  return;
}



/* Entry: 103fd8fb0; end: 103fd8fef;  */

void FUN_103fd8fb0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113042408 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcbb170;
  _swift_getWitnessTable(&UNK_10dcbb170,&UNK_11072f668);
  puRam0000000113042408 = puVar1;
  return;
}



/* Entry: 103fd8ff0; end: 103fd9003;  */

void FUN_103fd8ff0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103fd9004();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103fd9044)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103fd9004; end: 103fd90af;  */

void FUN_103fd9004(void)

{
  undefined *puVar1;
  
  if (puRam0000000113042410 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcbb230;
  _swift_getWitnessTable(&UNK_10dcbb230,&UNK_11072f6f8);
  puRam0000000113042410 = puVar1;
  return;
}



/* Entry: 103fd90b0; end: 103fd90b3;  */

void FUN_103fd90b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113042430 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcbb270;
  _swift_getWitnessTable(&UNK_10dcbb270,&UNK_11072f6f8);
  puRam0000000113042430 = puVar1;
  return;
}



/* Entry: 103fd90b4; end: 103fd90f3;  */

void FUN_103fd90b4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113042430 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcbb270;
  _swift_getWitnessTable(&UNK_10dcbb270,&UNK_11072f6f8);
  puRam0000000113042430 = puVar1;
  return;
}



/* Entry: 103fd90f4; end: 103fd9107;  */

void FUN_103fd90f4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103fd9108();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103fd9148)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103fd9108; end: 103fd91b3;  */

void FUN_103fd9108(void)

{
  undefined *puVar1;
  
  if (puRam0000000113042438 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcbb330;
  _swift_getWitnessTable(&UNK_10dcbb330,&UNK_11072f788);
  puRam0000000113042438 = puVar1;
  return;
}



/* Entry: 103fd91b4; end: 103fd91b7;  */

void FUN_103fd91b4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113042458 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcbb370;
  _swift_getWitnessTable(&UNK_10dcbb370,&UNK_11072f788);
  puRam0000000113042458 = puVar1;
  return;
}



/* Entry: 103fd91b8; end: 103fd91f7;  */

void FUN_103fd91b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113042458 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcbb370;
  _swift_getWitnessTable(&UNK_10dcbb370,&UNK_11072f788);
  puRam0000000113042458 = puVar1;
  return;
}



/* Entry: 103fd91f8; end: 103fd920b;  */

void FUN_103fd91f8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103fd920c();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103fd924c)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103fd920c; end: 103fd92b7;  */

void FUN_103fd920c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113042460 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcbb430;
  _swift_getWitnessTable(&UNK_10dcbb430,&UNK_11072f818);
  puRam0000000113042460 = puVar1;
  return;
}



/* Entry: 103fd92b8; end: 103fd92bb;  */

void FUN_103fd92b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113042480 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcbb470;
  _swift_getWitnessTable(&UNK_10dcbb470,&UNK_11072f818);
  puRam0000000113042480 = puVar1;
  return;
}



/* Entry: 103fd92bc; end: 103fd92fb;  */

void FUN_103fd92bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000113042480 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcbb470;
  _swift_getWitnessTable(&UNK_10dcbb470,&UNK_11072f818);
  puRam0000000113042480 = puVar1;
  return;
}



/* Entry: 103fd92fc; end: 103fd930f;  */

void FUN_103fd92fc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103fd9310();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103fd9350)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103fd9310; end: 103fd93bb;  */

void FUN_103fd9310(void)

{
  undefined *puVar1;
  
  if (puRam0000000113042488 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcbb530;
  _swift_getWitnessTable(&UNK_10dcbb530,&UNK_11072f8a8);
  puRam0000000113042488 = puVar1;
  return;
}



/* Entry: 103fd93bc; end: 103fd93bf;  */

void FUN_103fd93bc(void)

{
  undefined *puVar1;
  
  if (puRam00000001130424a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcbb570;
  _swift_getWitnessTable(&UNK_10dcbb570,&UNK_11072f8a8);
  puRam00000001130424a8 = puVar1;
  return;
}



/* Entry: 103fd93c0; end: 103fd93ff;  */

void FUN_103fd93c0(void)

{
  undefined *puVar1;
  
  if (puRam00000001130424a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcbb570;
  _swift_getWitnessTable(&UNK_10dcbb570,&UNK_11072f8a8);
  puRam00000001130424a8 = puVar1;
  return;
}



/* Entry: 103fd9400; end: 103fd9413;  */

void FUN_103fd9400(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103fd9414();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103fd9454)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103fd9414; end: 103fd94bf;  */

void FUN_103fd9414(void)

{
  undefined *puVar1;
  
  if (puRam00000001130424b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcbb630;
  _swift_getWitnessTable(&UNK_10dcbb630,&UNK_11072f938);
  puRam00000001130424b0 = puVar1;
  return;
}



/* Entry: 103fd94c0; end: 103fd94c3;  */

void FUN_103fd94c0(void)

{
  undefined *puVar1;
  
  if (puRam00000001130424d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcbb670;
  _swift_getWitnessTable(&UNK_10dcbb670,&UNK_11072f938);
  puRam00000001130424d0 = puVar1;
  return;
}



/* Entry: 103fd94c4; end: 103fd9503;  */

void FUN_103fd94c4(void)

{
  undefined *puVar1;
  
  if (puRam00000001130424d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcbb670;
  _swift_getWitnessTable(&UNK_10dcbb670,&UNK_11072f938);
  puRam00000001130424d0 = puVar1;
  return;
}



/* Entry: 103fd9504; end: 103fd9517;  */

void FUN_103fd9504(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103fd9518();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103fd9558)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}


