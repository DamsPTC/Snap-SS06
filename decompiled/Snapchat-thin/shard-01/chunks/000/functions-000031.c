/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100c68aec; end: 100c68af3; -[SCDataHandlerMetadata setWasLoadedOnce:] */

void FUN_100c68aec(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 100c68af4; end: 100c68afb; -[SCDataHandler setAtomicData:] */

void FUN_100c68af4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 100c68afc; end: 100c68b03; -[SCDataHandlerMetadata setNeedsUpdate:] */

void FUN_100c68afc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 100c68b04; end: 100c68b33; -[SCDataHandlerMetadata setLastRefreshDate:] */

void FUN_100c68b04(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100c68b34; end: 100c68b5f; -[SCDataHandler _removeRefresh] */

void FUN_100c68b34(long param_1)

{
  undefined8 uVar1;
  
  func_0x000107c498f8(*(undefined8 *)(param_1 + 0x38));
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100c68b60; end: 100c68b83; -[SCDataHandler dataDidChange] */

void FUN_100c68b60(undefined8 param_1)

{
  func_0x000107c3bfd8();
                    /* WARNING: Could not recover jumptable at 0x00010bed4770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateCache_112592b80);
  return;
}



/* Entry: 100c68b84; end: 100c68b8f; -[SCDataHandler _notifyDataDidChange] */

void FUN_100c68b84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dd830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_notifyWithHandler__112615020,param_1);
  return;
}



/* Entry: 100c68b90; end: 100c68c3b; -[SCDataHandler _updateCache] */

void FUN_100c68b90(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_38;
  
  if ((*(long *)(param_1 + 0x60) != 0) && (lVar2 = *(long *)(param_1 + 0x10), lVar2 != 0)) {
    lStack_38 = 0;
    func_0x000107c51f4c(lVar2,param_2,&lStack_38);
    func_0x000107c61180();
    lVar1 = lStack_38;
    func_0x000107c61174(lStack_38);
    if (lVar1 == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x60);
      func_0x000107c3e298(param_1);
      func_0x000107c61180();
      func_0x000107c5bedc(uVar3,param_2,param_1,lVar2,&PTR___NSConcreteGlobalBlock_110acba68);
      func_0x000107c61170(param_1);
    }
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 100c68c3c; end: 100c68cff; -[SCImpalaBusinessProfileHandlers _scheduleCleanUp] */

void FUN_100c68c3c(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  puVar1 = auStack_28;
  func_0x000107c61144(puVar1,param_1);
  func_0x000100078e94();
  func_0x000107c61180();
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c4e528(0x4014000000000000,puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
  return;
}



/* Entry: 100c68d00; end: 100c68d7b; -[SCMainQueuePerformerImpl perform:after:] */

/* WARNING: Possible PIC construction at 0x000100c68d54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c68d58) */

void FUN_100c68d00(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_4);
  func_0x000107c60f94(0,(long)(param_1 * 1000000000.0));
  func_0x000107c61184(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 100c68d7c; end: 100c68d83;  */

void FUN_100c68d7c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd3230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_handler_1125d2630);
  return;
}



/* Entry: 100c68d84; end: 100c68d9b; -[SCImpalaBusinessProfileHandlerEntry handler] */

void FUN_100c68d84(long param_1)

{
  func_0x000107c61148(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c68d9c; end: 100c68f67; -[SCImpalaBusinessProfileManager businessProfileHandlers:didUpdateHandlers:] */

/* WARNING: Possible PIC construction at 0x000100c68ea0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c68ebc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c68edc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c68f14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c68f28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c68fcc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c68f2c) */
/* WARNING: Removing unreachable block (ram,0x000100c68f64) */
/* WARNING: Removing unreachable block (ram,0x000100c68f44) */
/* WARNING: Removing unreachable block (ram,0x000100c68f18) */
/* WARNING: Removing unreachable block (ram,0x000100c68ee0) */
/* WARNING: Removing unreachable block (ram,0x000100c68eec) */
/* WARNING: Removing unreachable block (ram,0x000100c68f08) */
/* WARNING: Removing unreachable block (ram,0x000100c68ec0) */
/* WARNING: Removing unreachable block (ram,0x000100c68ec4) */
/* WARNING: Removing unreachable block (ram,0x000100c68ed8) */
/* WARNING: Removing unreachable block (ram,0x000100c68ea4) */
/* WARNING: Removing unreachable block (ram,0x000100c68fd0) */
/* WARNING: Removing unreachable block (ram,0x000100c68e5c) */

void FUN_100c68d9c(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  func_0x000107c61174(param_4);
  if (param_3 == *(long *)(param_1 + 0x98)) {
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    func_0x000107c40808(param_4);
    func_0x000107c55028(uVar5);
    func_0x000107c61174(param_4);
    uVar2 = param_4;
    func_0x000107c4080c();
    puVar3 = PTR_PTR_1126b0f68;
    uVar1 = uRam0000000000000000;
    if (uVar2 != 0) {
      func_0x000107c61174(uRam0000000000000000);
      func_0x000107c61158(puVar3);
      uVar4 = uVar1;
      func_0x000107c6115c(uVar1,puVar3);
      uVar2 = uVar1;
      if ((uVar4 & 1) == 0) {
        uVar2 = 0;
      }
      func_0x000107c61174(uVar2);
      param_4 = uVar1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 100c68f68; end: 100c68fe3; -[SCImpalaPreferences setHasManagedBusinessProfilesHint:] */

/* WARNING: Possible PIC construction at 0x000100c68fcc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c68fd0) */

void FUN_100c68f68(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x000107c3bfe8(param_1,param_2,&PTR____CFConstantStringClassReference_110f05658);
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d94c(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  func_0x000107c61180();
  func_0x000107c56bcc(uVar3,param_2,puVar2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 100c68fe4; end: 100c6901b; -[SCImpalaPreferences _nsUserDefaultsKeyForKey:] */

void FUN_100c68fe4(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c51804(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110f056b8);
  return;
}



/* Entry: 100c6901c; end: 100c69027;  */

bool FUN_100c6901c(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 100c69028; end: 100c690a3; -[SCImpalaPreferences setHasManagedBusinessProfileStandardCategoryHint:] */

/* WARNING: Possible PIC construction at 0x000100c6908c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c69090) */

void FUN_100c69028(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x000107c3bfe8(param_1,param_2,&PTR____CFConstantStringClassReference_110f05678);
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d94c(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  func_0x000107c61180();
  func_0x000107c56bcc(uVar3,param_2,puVar2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 100c690a4; end: 100c6914b;  */

/* WARNING: Possible PIC construction at 0x000100c6911c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c69120) */

void FUN_100c690a4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dc860;
  func_0x000107c61174(param_2);
  func_0x000107c610f4(puVar1);
  func_0x000107c4a1e8(*(undefined8 *)(param_1 + 0x20));
  func_0x000107c4f36c(*(undefined8 *)(param_1 + 0x20));
  func_0x000107c3dc64(*(undefined8 *)(param_1 + 0x20));
  func_0x000107c46c70(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100c6914c; end: 100c692e7; -[SCImpalaManagedBusinessesResponse initWithHandlers:isPopular:isEligibleForProfileCreation:alwaysShowSpotlightSendToProfile:] */

undefined1 *
FUN_100c6914c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  puStack_48 = PTR_PTR_1126ff408;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    *(undefined1 *)((long)puVar1 + 9) = param_5;
    *(undefined1 *)((long)puVar1 + 10) = param_6;
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100c692e8; end: 100c692f3;  */

void FUN_100c692e8(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar5 = *(ulong *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_58,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 == 0) {
    return;
  }
  func_0x00010083f5a0();
  func_0x000107c4e020();
  func_0x000107c61180();
  uVar3 = 0;
  func_0x00010082024c(0);
  uVar4 = uVar5;
  func_0x000107c5fc54(uVar5,uVar3);
  func_0x000107c61170(uVar5);
  if (uVar4 >> 0x3e == 0) {
    uVar5 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = uVar4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar4) {
      uVar5 = uVar4;
    }
    func_0x000107c60480();
  }
  if (uVar5 == 0) {
    func_0x000107c6142c(uVar4);
  }
  else {
    if ((uVar4 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar4 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100c69450);
        (*pcVar1)();
      }
      uVar3 = *(undefined8 *)(uVar4 + 0x20);
      func_0x000107c61174(uVar3);
    }
    else {
      uVar3 = 0;
      func_0x0001024f445c(0,uVar4);
    }
    func_0x000107c6142c(uVar4);
    uVar6 = uVar3;
    func_0x000107c3e614(uVar3);
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    func_0x000107c53598(uVar6);
    func_0x000107c61170(uVar6);
  }
  func_0x000107c5d45c(uVar7);
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 100c692f4; end: 100c6944f;  */

void FUN_100c692f4(long param_1,ulong param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    return;
  }
  func_0x00010083f5a0();
  func_0x000107c4e020();
  func_0x000107c61180();
  uVar2 = 0;
  func_0x00010082024c(0);
  uVar3 = param_2;
  func_0x000107c5fc54(param_2,uVar2);
  func_0x000107c61170(param_2);
  if (uVar3 >> 0x3e == 0) {
    uVar4 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar4 = uVar3;
    }
    func_0x000107c60480();
  }
  if (uVar4 == 0) {
    func_0x000107c6142c(uVar3);
  }
  else {
    if ((uVar3 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar3 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100c69450);
        (*pcVar1)();
      }
      uVar2 = *(undefined8 *)(uVar3 + 0x20);
      func_0x000107c61174(uVar2);
    }
    else {
      uVar2 = 0;
      func_0x0001024f445c(0,uVar3);
    }
    func_0x000107c6142c(uVar3);
    uVar5 = uVar2;
    func_0x000107c3e614(uVar2);
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    func_0x000107c53598(uVar5);
    func_0x000107c61170(uVar5);
  }
  func_0x000107c5d45c(param_3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100c69450; end: 100c694a3; -[SIGHeaderButtonBadge setColor:] */

void FUN_100c69450(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_100c694a4;
  puStack_20 = &UNK_110d62a20;
  lStack_18 = param_1;
  func_0x000107c437dc(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 100c694a4; end: 100c694f3;  */

void FUN_100c694a4(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  func_0x000107c61174(param_2);
  uVar1 = param_2;
  func_0x000107c61164(param_2,PTR_s_headerButtonBadge_didChangeColor_1125d5610);
  if ((uVar1 & 1) != 0) {
    func_0x000107c44c78(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100c694f4; end: 100c6950f; -[SIGHeaderButtonOptionView headerButtonBadge:didChangeColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c694f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde4b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__configureBadgeView_forOption__112556c70,
             *(undefined8 *)(param_1 + _DAT_112794b54),*(undefined8 *)(param_1 + _DAT_112794b68));
  return;
}



/* Entry: 100c69510; end: 100c69527; -[SCAddFriendsButtonMutator updateDefaultBadgeColor:] */

void FUN_100c69510(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 100c69528; end: 100c6955b;  */

void FUN_100c69528(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c6955c; end: 100c695ff;  */

/* WARNING: Possible PIC construction at 0x000100c6959c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c695e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c695a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c6955c(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_11274112c;
    func_0x000107c61148(param_1);
    func_0x000107c51670();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c69600; end: 100c6967f; -[SIGFooterItem saveConfig] */

void FUN_100c69600(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((*(byte *)(param_1 + 0x19) & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    func_0x000107c61174(uVar4);
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = uVar4;
    func_0x000107c61170(uVar1);
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    func_0x000107c61174(uVar4);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    func_0x000107c61170(uVar1);
    lVar2 = param_1;
    func_0x000107c4a76c();
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c5ae60();
    *(char *)(param_1 + 0x18) = (char)lVar3;
    func_0x000107c61170(lVar2);
    *(undefined1 *)(param_1 + 0x19) = 1;
  }
  return;
}



/* Entry: 100c69680; end: 100c69d8f; -[SCFeatureRingFlashImpl _setupRingFlashConstraints] */

/* WARNING: Possible PIC construction at 0x000100c696d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c69734: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c69754: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c69ba8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c69bb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c69bc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c69bd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c69be8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c69bf8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c69c08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c69c20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c69e24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c69e4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c69e80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c69eb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c69e84) */
/* WARNING: Removing unreachable block (ram,0x000100c69e50) */
/* WARNING: Removing unreachable block (ram,0x000100c69e28) */
/* WARNING: Removing unreachable block (ram,0x000100c69c24) */
/* WARNING: Removing unreachable block (ram,0x000100c69c0c) */
/* WARNING: Removing unreachable block (ram,0x000100c69bfc) */
/* WARNING: Removing unreachable block (ram,0x000100c69bec) */
/* WARNING: Removing unreachable block (ram,0x000100c69bdc) */
/* WARNING: Removing unreachable block (ram,0x000100c69bcc) */
/* WARNING: Removing unreachable block (ram,0x000100c69bbc) */
/* WARNING: Removing unreachable block (ram,0x000100c69bac) */
/* WARNING: Removing unreachable block (ram,0x000100c69758) */
/* WARNING: Removing unreachable block (ram,0x000100c698b4) */
/* WARNING: Removing unreachable block (ram,0x000100c69900) */
/* WARNING: Removing unreachable block (ram,0x000100c69904) */
/* WARNING: Removing unreachable block (ram,0x000100c69908) */
/* WARNING: Removing unreachable block (ram,0x000100c69914) */
/* WARNING: Removing unreachable block (ram,0x000100c69918) */
/* WARNING: Removing unreachable block (ram,0x000100c6991c) */
/* WARNING: Removing unreachable block (ram,0x000100c69928) */
/* WARNING: Removing unreachable block (ram,0x000100c6992c) */
/* WARNING: Removing unreachable block (ram,0x000100c69a6c) */
/* WARNING: Removing unreachable block (ram,0x000100c69930) */
/* WARNING: Removing unreachable block (ram,0x000100c69944) */
/* WARNING: Removing unreachable block (ram,0x000100c69948) */
/* WARNING: Removing unreachable block (ram,0x000100c69c6c) */
/* WARNING: Removing unreachable block (ram,0x000100c6994c) */
/* WARNING: Removing unreachable block (ram,0x000100c69794) */
/* WARNING: Removing unreachable block (ram,0x000100c69b88) */
/* WARNING: Removing unreachable block (ram,0x000100c69738) */
/* WARNING: Removing unreachable block (ram,0x000100c696dc) */
/* WARNING: Removing unreachable block (ram,0x000100c69c2c) */
/* WARNING: Removing unreachable block (ram,0x000100c69d8c) */
/* WARNING: Removing unreachable block (ram,0x000100c69efc) */
/* WARNING: Removing unreachable block (ram,0x000100c69db8) */
/* WARNING: Removing unreachable block (ram,0x000100c69e08) */
/* WARNING: Removing unreachable block (ram,0x000100c69e0c) */
/* WARNING: Removing unreachable block (ram,0x000100c69c44) */
/* WARNING: Removing unreachable block (ram,0x000100c696e0) */
/* WARNING: Removing unreachable block (ram,0x000100c696f8) */
/* WARNING: Removing unreachable block (ram,0x000100c69704) */
/* WARNING: Removing unreachable block (ram,0x000100c69eb8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c69680(long param_1)

{
  func_0x000107c5e3f8(*(undefined8 *)(param_1 + _DAT_1127411fc));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 100c69d90; end: 100c69f13; -[SCFeatureRingFlashImpl _updateRingFlashBorderWithColor:widthRatio:animated:] */

/* WARNING: Possible PIC construction at 0x000100c69e24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c69e4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c69e80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c69eb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c69e84) */
/* WARNING: Removing unreachable block (ram,0x000100c69e50) */
/* WARNING: Removing unreachable block (ram,0x000100c69e28) */
/* WARNING: Removing unreachable block (ram,0x000100c69eb8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c69d90(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = (long)_DAT_1127411fc;
  lVar2 = *(long *)(param_2 + lVar3);
  if (lVar2 != 0) {
    func_0x000107c61174(param_4);
    func_0x000107c3f7b8(param_1,lVar2,param_3,param_5);
    func_0x000107c3f7b4(*(undefined8 *)(param_2 + lVar3),param_3,param_4);
    puVar1 = PTR_PTR_1126b9aa0;
    func_0x000107c49b2c();
    uVar4 = 0x3feb333340000000;
    if ((int)puVar1 == 0) {
      uVar4 = 0x3ff0000000000000;
    }
    func_0x000107c3fdd0(uVar4,param_4);
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_4);
    return;
  }
  return;
}



/* Entry: 100c69f14; end: 100c69fd3;  */

void FUN_100c69f14(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x000107c41324(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x000107c61180();
  func_0x000107c5c9e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100c69fd4; end: 100c6a06b; -[SCMainCameraViewController _didChangeLensesActive:] */

/* WARNING: Possible PIC construction at 0x000100c6a010: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c6a044: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c6a014) */
/* WARNING: Removing unreachable block (ram,0x000100c6a05c) */
/* WARNING: Removing unreachable block (ram,0x000100c6a018) */
/* WARNING: Removing unreachable block (ram,0x000100c6a048) */

void FUN_100c69fd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c3cb88(param_1,param_2,param_3);
  func_0x000107c4b570(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100c6a06c; end: 100c6a0df; -[SCMainCameraViewController _updateBottomCornerVisibilityIfNecessary:] */

/* WARNING: Possible PIC construction at 0x000100c6a0a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c6a0a4) */
/* WARNING: Removing unreachable block (ram,0x000100c6a0c8) */
/* WARNING: Removing unreachable block (ram,0x000100c6a0c0) */
/* WARNING: Removing unreachable block (ram,0x000100c6a0cc) */

void FUN_100c6a06c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c508a4(param_3);
  func_0x000107c61180();
  func_0x000107c508a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100c6a0e0; end: 100c6a173; -[SCMainCameraViewController _ringFlashDelegate] */

void FUN_100c6a0e0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x000107c4e360();
  func_0x000107c61180();
  lVar1 = param_1;
  func_0x00010010fab4();
  lVar2 = param_1;
  if ((int)lVar1 == 0) {
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  lVar1 = param_1;
  if (lVar2 == 0) {
    lVar2 = param_1;
    func_0x000107c4e360();
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x00010010fab4();
    lVar1 = lVar2;
    if ((int)lVar3 == 0) {
      lVar1 = 0;
    }
    func_0x000107c61174(lVar1);
    func_0x000107c61170(lVar2);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 100c6a174; end: 100c6a1a7; -[SCSwipeViewContainerViewController onRingFlashDisable] */

void FUN_100c6a174(undefined8 param_1)

{
  func_0x000107c50914();
  func_0x000107c61180();
  func_0x000107c52e24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c6a1a8; end: 100c6a1c7; -[SCSwipeViewContainerViewController roundCornerDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c6a1a8(long param_1)

{
  func_0x000107c61148(param_1 + _DAT_112776b40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c6a1c8; end: 100c6a22b; -[SCActiveUserNGSNavigationRouter setBottomRoundCornerViewsHidden:] */

/* WARNING: Possible PIC construction at 0x000100c6a208: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c6a20c) */

void FUN_100c6a1c8(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 8;
  func_0x000107c61148();
  lVar2 = param_1;
  func_0x00010010fab4();
  lVar1 = param_1;
  if ((int)lVar2 == 0) {
    lVar1 = 0;
  }
  func_0x000107c61174(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c6a22c; end: 100c6a23b; -[SCContainerViewController setCornerViewsHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c6a22c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c184370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11278c72c),PTR_s_setCornersHidden__11263eaf8);
  return;
}



/* Entry: 100c6a23c; end: 100c6a27f; -[SCContainerViewControllerView setCornersHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c6a23c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11278c7d8);
  func_0x000107c3d110(uVar1);
  func_0x000107c61180();
  func_0x000107c57f2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100c6a280; end: 100c6a2af; -[SIGContainerPresentationView activeContainerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c6a280(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11278c77c);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100c6a2b0; end: 100c6a2f7; -[SIGContainerView setRoundedCornersHidden:] */

/* WARNING: Possible PIC construction at 0x000100c6a2d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c6a2dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c6a2b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11278c7a4),PTR_s_setHidden__1126479f8);
  return;
}



/* Entry: 100c6a2f8; end: 100c6a307; -[SCManagedCapturerState lensesActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_100c6a2f8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113075bf0);
}



/* Entry: 100c6a308; end: 100c6a38f; -[SCMainCameraViewController _didChangeRingFlashState:] */

/* WARNING: Possible PIC construction at 0x000100c6a33c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c6a340) */
/* WARNING: Removing unreachable block (ram,0x000100c6a360) */
/* WARNING: Removing unreachable block (ram,0x000100c6a348) */
/* WARNING: Removing unreachable block (ram,0x000107c4ffd0) */
/* WARNING: Removing unreachable block (ram,0x00010c12e0e0) */

void FUN_100c6a308(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c508a4(param_3);
  func_0x000107c61180();
  func_0x000107c508a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100c6a390; end: 100c6a66b; -[SCSafeAreaBaselinePersistence updateBaselineInsets:] */

undefined *
FUN_100c6a390(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined *param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_5;
  func_0x000107c61158();
  func_0x000107c3bb20();
  if (((int)puVar1 != 0) && (puVar1 = param_5, func_0x000107c44ac4(), ((ulong)puVar1 & 1) == 0)) {
    puVar1 = param_5;
    func_0x000107c61158();
    func_0x000107c3ba9c(param_1,param_2,param_3,param_4);
    if ((int)puVar1 != 0) {
      puVar2 = param_5;
      func_0x000107c5d93c();
      func_0x000107c61180();
      puVar3 = puVar2;
      func_0x000107c4198c();
      func_0x000107c61180();
      puVar1 = puVar3;
      func_0x000107c4d2d4();
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar2);
      if (puVar1 == (undefined *)0x0) {
        puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        func_0x000107c41988();
        func_0x000107c61180();
      }
      puVar3 = param_5;
      func_0x000107c61158(param_5);
      func_0x000107c3b3e0();
      func_0x000107c61180();
      ppuStack_d8 = &PTR____CFConstantStringClassReference_110dfeaf8;
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c4d954(param_1);
      func_0x000107c61180();
      ppuStack_d0 = &PTR____CFConstantStringClassReference_110e8f298;
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puStack_b0 = puVar4;
      func_0x000107c4d954(param_2);
      func_0x000107c61180();
      ppuStack_c8 = &PTR____CFConstantStringClassReference_110dfec58;
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puStack_a8 = puVar5;
      func_0x000107c4d954(param_3);
      func_0x000107c61180();
      ppuStack_c0 = &PTR____CFConstantStringClassReference_110e8f278;
      puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puStack_a0 = puVar6;
      func_0x000107c4d954(param_4);
      func_0x000107c61180();
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_b8 = &PTR____CFConstantStringClassReference_110dc1558;
      puVar8 = PTR__OBJC_CLASS___NSDate_1126ae770;
      puStack_98 = puVar7;
      func_0x000107c41324(PTR__OBJC_CLASS___NSDate_1126ae770);
      func_0x000107c61180();
      func_0x000107c5c9e4();
      func_0x000107c4d954();
      func_0x000107c61180();
      puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_90 = puVar2;
      func_0x000107c419ac(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_6,&puStack_b0,&ppuStack_d8,
                          5);
      func_0x000107c61180();
      func_0x000107c61170(puVar2);
      func_0x000107c61170(puVar8);
      func_0x000107c61170(puVar7);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar4);
      func_0x000107c56bd8(puVar1,param_6,puVar9,puVar3);
      puVar2 = param_5;
      func_0x000107c5d93c(param_5);
      func_0x000107c61180();
      func_0x000107c56bcc();
      func_0x000107c61170(puVar2);
      func_0x000107c55040(param_5,param_6,1);
      func_0x000107c61170(puVar9);
      func_0x000107c61170(puVar3);
      func_0x000107c61170();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return puVar1;
  }
  func_0x000107c60e78();
  return (undefined *)(ulong)(byte)puVar1[8];
}



/* Entry: 100c6a66c; end: 100c6a673; -[SCSafeAreaBaselinePersistence hasSavedThisSession] */

undefined1 FUN_100c6a66c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 100c6a674; end: 100c6a6cf; +[SCSafeAreaBaselinePersistence _isBaselineInsets:] */

undefined8 FUN_100c6a674(double param_1,undefined8 param_2,double param_3,int param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  
  bVar1 = false;
  bVar2 = false;
  bVar3 = false;
  if (param_1 <= 100.0) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(param_3)) {
      bVar1 = param_3 < 100.0;
      bVar2 = param_3 == 100.0;
      bVar3 = false;
    }
  }
  if ((!bVar2 && bVar1 == bVar3) ||
     (((func_0x000107c3bb20(), param_4 != 0 && (0.0 < param_1)) && (param_1 < 44.0)))) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}



/* Entry: 100c6a6d0; end: 100c6a6d7; -[SCSafeAreaBaselinePersistence setHasSavedThisSession:] */

void FUN_100c6a6d0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 100c6a6d8; end: 100c6a70b;  */

void FUN_100c6a6d8(long param_1)

{
  param_1 = param_1 + 0x28;
  func_0x000107c61148(param_1);
  func_0x000107c3b4b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c6a70c; end: 100c6a71f;  */

void FUN_100c6a70c(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100c6a718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 100c6a720; end: 100c6a79f;  */

void FUN_100c6a720(long param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x000107c49c70();
    if (iVar1 != 0) {
      func_0x000107c550d8(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010c1b0770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + 0x20),PTR_s_setIsDisappearing__112649c00,0);
      return;
    }
  }
  return;
}



/* Entry: 100c6a7a0; end: 100c6a807; -[SCFeatureAutoEnableRingFlashHandler _didChangeRingFlashState:] */

void FUN_100c6a7a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c508a4();
  func_0x000107c61180();
  uVar1 = param_3;
  func_0x000107c508a8();
  *(undefined8 *)(param_1 + 0xa8) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100c6a808; end: 100c6a87f; -[SCFeatureAutoEnableRingFlashHandler _autoEnableRingFlashIfNeeded] */

void FUN_100c6a808(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = param_1;
  func_0x000107c3c71c();
  if ((int)uVar1 != 0) {
    func_0x000107c3aff8(param_1);
    puVar2 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
    func_0x000107c51930(0x3ff0000000000000,PTR__OBJC_CLASS___NSTimer_1126af1b0,param_2,param_1,
                        PTR_s__autoEnableRingFlash_11252f7b0,0,0);
    func_0x000107c61180();
    func_0x000107c53e60(param_1,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 100c6a880; end: 100c6a92f; -[SCFeatureAutoEnableRingFlashHandler _shouldAutoEnableRingFlash] */

bool FUN_100c6a880(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  
  lVar1 = param_1;
  func_0x000107c3afe4();
  if ((int)lVar1 == 0) {
    bVar5 = false;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x000107c5c734(uVar2);
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c5bcc0();
    func_0x000107c61180();
    uVar4 = uVar3;
    func_0x000107c4193c();
    lVar1 = param_1;
    func_0x000107c3afe8(param_1,param_2,uVar4);
    if (((int)lVar1 == 0) || ((*(byte *)(param_1 + 0xb1) & 1) != 0)) {
      bVar5 = false;
    }
    else {
      param_1 = param_1 + 0x40;
      func_0x000107c61148(param_1);
      lVar1 = param_1;
      func_0x000107c5089c();
      bVar5 = lVar1 < 1;
      func_0x000107c61170(param_1);
    }
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
  }
  return bVar5;
}



/* Entry: 100c6a930; end: 100c6a967; -[SCFeatureAutoEnableRingFlashHandler _canAutoEnable] */

byte FUN_100c6a930(long param_1)

{
  byte bVar1;
  
  if ((((*(ulong *)(param_1 + 0xa8) & 0xfffffffffffffffe) == 2) ||
      (*(char *)(param_1 + 0xa1) != '\x01')) || ((*(byte *)(param_1 + 0xb0) & 1) != 0)) {
    bVar1 = 0;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0xa0);
  }
  return bVar1 & 1;
}



/* Entry: 100c6a968; end: 100c6a9df;  */

/* WARNING: Possible PIC construction at 0x000100c6a9c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c6a9c8) */

void FUN_100c6a968(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 100c6a9e0; end: 100c6a9e7;  */

void FUN_100c6a9e0(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (param_1 != 0) {
      func_0x000107c4bfb0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 100c6a9e8; end: 100c6aa33;  */

void FUN_100c6a9e8(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (param_1 != 0) {
      func_0x000107c4bfb0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 100c6aa34; end: 100c6ab2b; -[SCCameraUserBlizzardLogger logUserTrackedEvent:] */

void FUN_100c6aa34(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61144(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c61174(param_3);
  func_0x000107c5099c(uVar1);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100c6ab2c; end: 100c6ab33;  */

void FUN_100c6ab2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100c6ab34; end: 100c6ab57;  */

void FUN_100c6ab34(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c6ab58; end: 100c6ab5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c6ab58(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + _DAT_112ed67d0);
    if (lVar2 != 0) {
      func_0x000107c61174();
      func_0x000107c5bcc0();
      if ((lVar2 != 5) && (lVar2 = *(long *)(lVar1 + _DAT_112ed67d8), lVar2 != 0)) {
        func_0x000107c61174(lVar2);
        func_0x000107c445f0();
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      func_0x000107c61170(lVar1);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 100c6ab60; end: 100c6ac17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c6ab60(long param_1)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + _DAT_112ed67d0);
    if (lVar1 != 0) {
      func_0x000107c61174();
      func_0x000107c5bcc0();
      if ((lVar1 != 5) && (lVar1 = *(long *)(param_1 + _DAT_112ed67d8), lVar1 != 0)) {
        func_0x000107c61174(lVar1);
        func_0x000107c445f0();
        func_0x000107c61170(param_1);
        param_1 = lVar1;
      }
      func_0x000107c61170(param_1);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 100c6ac18; end: 100c6ac3f; -[SCCameraToSnappableStabilityMonitorImpl frameRendered] */

void FUN_100c6ac18(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100c6ac40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c6ac40; end: 100c6ae03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c6ac40(double param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 *puVar7;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  puVar3 = (undefined8 *)0x0;
  func_0x000107c5eea4();
  lVar9 = puVar3[-1];
  puVar4 = puVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ed67e8);
  if (*(char *)(puVar1 + 1) != '\x01') {
    uVar8 = *puVar1;
    func_0x0001000298f0();
    param_3 = auStack_98;
    func_0x000107c61428();
    uVar5 = *puVar4;
    func_0x000107c61174(uVar5);
    func_0x000100069b5c(uVar8);
    func_0x000107c61170(uVar5);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
  }
  pcVar2 = (code *)auStack_80;
  func_0x0001008b81c8();
  lVar6 = 0;
  func_0x0001005d3d88();
  puVar7 = param_3;
  (**(code **)(*(long *)(lVar6 + -8) + 0x30))(param_3,1,lVar6);
  if ((int)puVar7 == 0) {
    param_3[*(int *)(lVar6 + 0x58)] = 1;
    func_0x000107c5eea0(auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    func_0x000107c5ee68(param_3 + *(int *)(lVar6 + 0x2c));
    (**(code **)(lVar9 + 8))(auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),puVar3);
    param_1 = param_1 * 1000.0;
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100c6adfc);
      (*pcVar2)();
    }
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100c6ae00);
      (*pcVar2)();
    }
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100c6ae04);
      (*pcVar2)();
    }
    *(long *)(param_3 + *(int *)(lVar6 + 0x30)) = (long)param_1;
  }
  (*pcVar2)(auStack_80,0);
  func_0x0001008ca8d4();
  return;
}



/* Entry: 100c6ae04; end: 100c6b19b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c6ae04(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  byte *pbVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar10;
  byte *pbVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 auStack_110 [3];
  undefined1 auStack_f8 [8];
  ulong auStack_f0 [2];
  byte abStack_e0 [8];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar3 = 0x112ed6868;
  func_0x0001000285a8(0x112ed6868,&UNK_10db00e60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  pbVar11 = abStack_e0 + -extraout_x8;
  lVar4 = 0;
  func_0x0001005d3d88();
  lVar13 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar3 = _DAT_112ed67c0;
  lVar10 = (long)pbVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(unaff_x20 + _DAT_112ed67c0,auStack_78,0,0);
  func_0x0001008caa18(unaff_x20 + lVar3,pbVar11);
  pbVar5 = pbVar11;
  (**(code **)(lVar13 + 0x30))(pbVar11,1,lVar4);
  if ((int)pbVar5 == 1) {
    func_0x0001008b7578(pbVar11);
    return;
  }
  func_0x0001008caa68(pbVar11,lVar10);
  if (*(long *)(unaff_x20 + _DAT_112ed67c8) != 0) {
    func_0x000107c498f8();
  }
  uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112ed67b0);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ed0();
  func_0x000107c4d664(uVar12);
  func_0x000107c61170(puVar6);
  lVar3 = _DAT_112ed6798;
  uStack_b0 = *(undefined8 *)(unaff_x20 + _DAT_112ed6810);
  puVar9 = auStack_90;
  func_0x000107c61428(unaff_x20 + _DAT_112ed6798,puVar9,0,0);
  if ((*(char *)(lVar10 + *(int *)(lVar4 + 0x58)) == '\x01') &&
     (*(char *)(lVar10 + *(int *)(lVar4 + 0x5c)) == '\x01')) {
    lVar13 = *(long *)(lVar10 + *(int *)(lVar4 + 0x30));
    lStack_b8 = *(long *)(lVar10 + *(int *)(lVar4 + 0x34));
    if (lStack_b8 <= lVar13) {
      lStack_b8 = lVar13;
    }
  }
  else if (((*(byte *)(lVar10 + *(int *)(lVar4 + 100)) & 1) == 0) &&
          (*(char *)(lVar10 + *(int *)(lVar4 + 0x60)) != '\x01')) {
    lStack_b8 = -1;
  }
  else {
    lStack_b8 = *(long *)(lVar10 + *(int *)(lVar4 + 0x38));
  }
  uStack_c8 = *(undefined8 *)(unaff_x20 + _DAT_112ed67a8);
  uStack_c0 = *(undefined8 *)(unaff_x20 + lVar3);
  uStack_d8 = *(undefined8 *)(unaff_x20 + _DAT_112ed6828);
  uStack_d0 = *(undefined8 *)(unaff_x20 + _DAT_112ed6820);
  uVar12 = *(undefined8 *)(lVar10 + *(int *)(lVar4 + 0x30));
  uVar14 = *(undefined8 *)(lVar10 + *(int *)(lVar4 + 0x40));
  uVar15 = *(undefined8 *)(lVar10 + *(int *)(lVar4 + 0x44));
  puVar7 = *(undefined8 **)(unaff_x20 + _DAT_112ed6850);
  func_0x000107c5bcc0();
  func_0x000107c61180();
  uVar1 = *(undefined1 *)((long)puVar7 + _DAT_113075b98);
  func_0x000107c61170();
  FUN_100c6b19c();
  if (((ulong)puVar7 & 1) != 0) {
    puVar8 = *(undefined8 **)(unaff_x20 + _DAT_112ed6838);
    func_0x000107c5c734();
    func_0x000107c61180();
    puVar7 = puVar8;
    if (puVar8 != (undefined8 *)0x0) {
      func_0x000107c3f52c();
      func_0x000107c61180();
      func_0x000107c615e8(puVar8);
      puVar8 = puVar7;
      func_0x000107c4a590();
      uVar2 = SUB81(puVar8,0);
      func_0x000107c615e8();
      goto LAB_100c6b0ac;
    }
  }
  uVar2 = 0;
LAB_100c6b0ac:
  FUN_100c6b228();
  if (puVar9 == (undefined1 *)0x0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar9);
  }
  *(undefined8 **)(lVar10 + -0x10) = puVar7;
  *(undefined1 *)(lVar10 + -0x17) = uVar2;
  *(undefined1 *)(lVar10 + -0x18) = uVar1;
  *(undefined8 *)(lVar10 + -0x28) = uVar14;
  *(undefined8 *)(lVar10 + -0x20) = uVar15;
  *(undefined8 *)(lVar10 + -0x30) = uVar12;
  func_0x000107c4bf3c(uStack_b0);
  func_0x000107c61170();
  puVar8 = (undefined8 *)(unaff_x20 + _DAT_112ed67e0);
  if (*(char *)(puVar8 + 1) != '\x01') {
    uVar14 = *puVar8;
    func_0x0001000298f0();
    func_0x000107c61428();
    uVar12 = *puVar7;
    func_0x000107c61174(uVar12);
    func_0x000100069b5c(uVar14);
    func_0x000107c61170(uVar12);
    *puVar8 = 0;
    *(undefined1 *)(puVar8 + 1) = 1;
  }
  FUN_100c6c3f8();
  func_0x0001008caaac(lVar10);
  return;
}



/* Entry: 100c6b19c; end: 100c6b20f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_100c6b19c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long unaff_x20;
  
  lVar1 = _DAT_112ed67b8;
  uVar4 = (uint)*(byte *)(unaff_x20 + _DAT_112ed67b8);
  if (*(byte *)(unaff_x20 + _DAT_112ed67b8) == 2) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112ed6840);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 == 0) {
      uVar4 = 0;
    }
    else {
      lVar3 = lVar2;
      func_0x000107c4a5e8();
      uVar4 = (uint)lVar3;
      func_0x000107c615e8(lVar2);
    }
    *(char *)(unaff_x20 + lVar1) = (char)uVar4;
  }
  return uVar4 & 1;
}



/* Entry: 100c6b210; end: 100c6b227; -[SCCameraHardwareConfigurationImpl isToSnappablePortraitEffectReportingEnabled] */

void FUN_100c6b210(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd0c98,0,0);
  return;
}



/* Entry: 100c6b228; end: 100c6b553;  */

undefined1  [16] FUN_100c6b228(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *unaff_x20;
  long lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  lVar4 = 0x112ed69b0;
  func_0x0001000285a8(0x112ed69b0,&UNK_10db00f60);
  func_0x000107c61534();
  *(undefined8 *)(lVar4 + 0x18) = 0x12;
  *(undefined8 *)(lVar4 + 0x10) = 9;
  *(undefined8 *)(lVar4 + 0x20) = 0xd000000000000025;
  *(undefined8 *)(lVar4 + 0x28) = 0x800000010f0d81b0;
  lVar1 = 0;
  func_0x0001005d3d88();
  *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar1 + 0x48));
  *(undefined8 *)(lVar4 + 0x38) = 0;
  *(undefined1 *)(lVar4 + 0x40) = 1;
  *(undefined8 *)(lVar4 + 0x48) = 0xd00000000000001a;
  *(undefined8 *)(lVar4 + 0x50) = 0x800000010f0d81e0;
  *(undefined8 *)(lVar4 + 0x58) = *(undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar1 + 0x3c));
  *(undefined8 *)(lVar4 + 0x60) = 0;
  *(undefined1 *)(lVar4 + 0x68) = 1;
  *(undefined8 *)(lVar4 + 0x70) = 0xd000000000000020;
  *(undefined8 *)(lVar4 + 0x78) = 0x800000010f0d8200;
  *(undefined8 *)(lVar4 + 0x80) = *(undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar1 + 0x4c));
  *(undefined8 *)(lVar4 + 0x88) = 0;
  *(undefined1 *)(lVar4 + 0x90) = 1;
  *(undefined8 *)(lVar4 + 0x98) = 0xd00000000000002a;
  *(undefined8 *)(lVar4 + 0xa0) = 0x800000010f0d8230;
  *(undefined8 *)(lVar4 + 0xa8) = *(undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar1 + 0x50));
  *(undefined8 *)(lVar4 + 0xb0) = 0;
  *(undefined1 *)(lVar4 + 0xb8) = 1;
  *(undefined8 *)(lVar4 + 0xc0) = 0xd00000000000002e;
  *(undefined8 *)(lVar4 + 200) = 0x800000010f0d8260;
  *(undefined8 *)(lVar4 + 0xd0) = *(undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar1 + 0x54));
  *(undefined8 *)(lVar4 + 0xd8) = 0;
  *(undefined1 *)(lVar4 + 0xe0) = 1;
  *(undefined8 *)(lVar4 + 0xe8) = 0xd000000000000014;
  *(undefined8 *)(lVar4 + 0xf0) = 0x800000010f0d8290;
  *(ulong *)(lVar4 + 0xf8) = (ulong)*(byte *)(unaff_x20 + 2);
  *(undefined8 *)(lVar4 + 0x100) = 0;
  *(undefined1 *)(lVar4 + 0x108) = 2;
  *(undefined8 *)(lVar4 + 0x110) = 0xd000000000000012;
  *(undefined8 *)(lVar4 + 0x118) = 0x800000010f0d82b0;
  *(ulong *)(lVar4 + 0x120) = (ulong)*(byte *)(unaff_x20 + 8);
  *(undefined8 *)(lVar4 + 0x128) = 0;
  *(undefined1 *)(lVar4 + 0x130) = 2;
  *(undefined8 *)(lVar4 + 0x138) = 0xd000000000000017;
  *(undefined8 *)(lVar4 + 0x140) = 0x800000010f0d82d0;
  *(undefined8 *)(lVar4 + 0x148) = unaff_x20[4];
  *(undefined8 *)(lVar4 + 0x150) = 0;
  *(undefined1 *)(lVar4 + 0x158) = 1;
  *(undefined8 *)(lVar4 + 0x160) = 0xd00000000000001b;
  *(undefined8 *)(lVar4 + 0x168) = 0x800000010f0d82f0;
  *(undefined8 *)(lVar4 + 0x170) = unaff_x20[3];
  *(undefined8 *)(lVar4 + 0x178) = 0;
  *(undefined1 *)(lVar4 + 0x180) = 1;
  lVar1 = lVar4;
  FUN_100c6b564();
  func_0x000107c61588(lVar4);
  uVar5 = 0x112ed69b8;
  func_0x0001000285a8(0x112ed69b8,&UNK_10db00f68);
  lVar3 = 9;
  func_0x000107c61408((undefined8 *)(lVar4 + 0x20),9,uVar5);
  lVar4 = unaff_x20[1];
  if (lVar4 != 0) {
    uVar5 = *unaff_x20;
    func_0x000107c61434(lVar4);
    lVar3 = lVar1;
    func_0x000107c61558(lVar1);
    FUN_100c6b6b8(uVar5,lVar4,0,0xd000000000000016,0x800000010f0d8350,lVar3);
    lVar3 = lVar4;
  }
  lVar4 = unaff_x20[6];
  if (lVar4 != 0) {
    uVar5 = unaff_x20[5];
    func_0x000107c61434(lVar4);
    lVar3 = lVar1;
    func_0x000107c61558(lVar1);
    FUN_100c6b6b8(uVar5,lVar4,0,0xd000000000000013,0x800000010f0d8330,lVar3);
    lVar3 = lVar4;
  }
  lVar4 = unaff_x20[7];
  if (lVar4 != -1) {
    lVar2 = lVar1;
    func_0x000107c61558(lVar1);
    lVar3 = 0;
    FUN_100c6b6b8(lVar4,0,1,0xd000000000000016,0x800000010f0d8310,lVar2);
  }
  lVar4 = lVar1;
  func_0x000100c6b834(lVar1);
  func_0x000107c6142c(lVar1);
  auVar6._8_8_ = lVar3;
  auVar6._0_8_ = lVar4;
  return auVar6;
}



/* Entry: 100c6b554; end: 100c6b563;  */

undefined1  [16] FUN_100c6b554(void)

{
  return ZEXT816(0x110582850);
}



/* Entry: 100c6b564; end: 100c6b67f;  */

undefined * FUN_100c6b564(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  code *pcVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined1 *puVar13;
  
  puVar12 = *(undefined **)(param_1 + 0x10);
  puVar8 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar12 != (undefined *)0x0) {
    func_0x0001000285a8(0x112ed69c0,&UNK_10db00f70);
    puVar8 = puVar12;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar13 = (undefined1 *)(param_1 + 0x40);
    do {
      uVar2 = *(ulong *)(puVar13 + -0x20);
      uVar4 = *(ulong *)(puVar13 + -0x18);
      uVar3 = *(undefined8 *)(puVar13 + -0x10);
      uVar5 = *(undefined8 *)(puVar13 + -8);
      uVar6 = *puVar13;
      func_0x000107c61434(uVar4);
      FUN_100c6b680(uVar3,uVar5,uVar6);
      uVar9 = uVar2;
      uVar10 = uVar4;
      func_0x000100029284();
      if ((uVar10 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100c6b67c);
        (*pcVar7)();
      }
      uVar10 = uVar9 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar8 + uVar10 + 0x40) = *(ulong *)(puVar8 + uVar10 + 0x40) | 1L << (uVar9 & 0x3f)
      ;
      puVar1 = (ulong *)(*(long *)(puVar8 + 0x30) + uVar9 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar4;
      puVar11 = (undefined8 *)(*(long *)(puVar8 + 0x38) + uVar9 * 0x18);
      *puVar11 = uVar3;
      puVar11[1] = uVar5;
      *(undefined1 *)(puVar11 + 2) = uVar6;
      if (SCARRY8(*(long *)(puVar8 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100c6b680);
        (*pcVar7)();
      }
      *(long *)(puVar8 + 0x10) = *(long *)(puVar8 + 0x10) + 1;
      puVar12 = puVar12 + -1;
      puVar13 = puVar13 + 0x28;
    } while (puVar12 != (undefined *)0x0);
    func_0x000107c61574(puVar8);
  }
  return puVar8;
}



/* Entry: 100c6b680; end: 100c6b6b7;  */

void FUN_100c6b680(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 != '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
  return;
}



/* Entry: 100c6b6b8; end: 100c6bb4b;  */

ulong FUN_100c6b6b8(ulong param_1,ulong param_2,undefined1 param_3,ulong param_4,ulong param_5,
                   uint param_6)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong *puVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  uVar2 = param_4;
  uVar3 = param_5;
  func_0x000100029284();
  lVar4 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar3 & 1;
  lVar5 = lVar4 + uVar7;
  if (SCARRY8(lVar4,uVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100c6b7ac);
    (*pcVar1)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar5) {
    func_0x0001029f39a8(lVar5,param_6 & 1);
    uVar2 = param_4;
    uVar7 = param_5;
    func_0x000100029284();
    if (((uint)uVar3 & 1) != ((uint)uVar7 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100c6b764);
      (*pcVar1)();
    }
  }
  else if ((param_6 & 1) == 0) {
    func_0x0001029f3810();
    lVar5 = *unaff_x20;
    goto joined_r0x000100c6b7c0;
  }
  lVar5 = *unaff_x20;
joined_r0x000100c6b7c0:
  if ((uVar3 & 1) == 0) {
    lVar4 = lVar5 + (uVar2 >> 6) * 8;
    *(ulong *)(lVar4 + 0x40) = *(ulong *)(lVar4 + 0x40) | 1L << (uVar2 & 0x3f);
    puVar6 = (ulong *)(*(long *)(lVar5 + 0x30) + uVar2 * 0x10);
    *puVar6 = param_4;
    puVar6[1] = param_5;
    puVar6 = (ulong *)(*(long *)(lVar5 + 0x38) + uVar2 * 0x18);
    *puVar6 = param_1;
    puVar6[1] = param_2;
    *(undefined1 *)(puVar6 + 2) = param_3;
    if (SCARRY8(*(long *)(lVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100c6b834);
      (*pcVar1)();
    }
    *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_5);
    return param_5;
  }
  puVar6 = (ulong *)(*(long *)(lVar5 + 0x38) + uVar2 * 0x18);
  uVar2 = *puVar6;
  uVar3 = puVar6[1];
  *puVar6 = param_1;
  puVar6[1] = param_2;
  uVar7 = puVar6[2];
  *(undefined1 *)(puVar6 + 2) = param_3;
  if ((char)uVar7 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
    return uVar3;
  }
  return uVar2;
}



/* Entry: 100c6bb4c; end: 100c6c18f; -[SCCameraStabilityLogger logToSnappableSuccessWith:cameraType:cameraDirection:initialCameraState:overallLatencyMs:uiRenderLatency:frameRenderLatency:cameraViewWillStartCameraLatency:cameraViewDidStartCameraLatencyMs:isLowLightStatus:isSystemVideoEffectsPortraitActive:splits:] */

void FUN_100c6bb4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12,
                  undefined4 param_13,long param_14)

{
  if (param_14 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  func_0x000107c61174(param_1);
  func_0x000100c6bc18(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,
                      param_12);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 100c6c190; end: 100c6c1e3; -[SCAToSnappableTerminateBase setOverallLatencyMs:] */

void FUN_100c6c190(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d968(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c54984(param_1,param_2,&PTR____CFConstantStringClassReference_110fb9d18,8,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100c6c1e4; end: 100c6c237; -[SCAToSnappableTerminateBase setUiDrawLatencyMs:] */

void FUN_100c6c1e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d968(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c54984(param_1,param_2,&PTR____CFConstantStringClassReference_111024d78,9,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100c6c238; end: 100c6c28b; -[SCAToSnappableTerminateBase setCameraStartupLatencyMs:] */

void FUN_100c6c238(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d968(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c54984(param_1,param_2,&PTR____CFConstantStringClassReference_11101d8f8,4,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100c6c28c; end: 100c6c2df; -[SCAToSnappableTerminateBase setCameraWillCallStartRunningLatencyMs:] */

void FUN_100c6c28c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d968(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c54984(param_1,param_2,&PTR____CFConstantStringClassReference_111024db8,0xb,puVar1,4)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100c6c2e0; end: 100c6c333; -[SCAToSnappableTerminateBase setCameraDidStartRunningLatencyMs:] */

void FUN_100c6c2e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d968(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c54984(param_1,param_2,&PTR____CFConstantStringClassReference_111024d98,10,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100c6c334; end: 100c6c34b; -[SCAToSnappableTerminateBase setSplits:] */

void FUN_100c6c334(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fb9818,0xd,param_3,0);
  return;
}



/* Entry: 100c6c34c; end: 100c6c39f; -[SCAToSnappableBase setIsLowLightStatus:] */

void FUN_100c6c34c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d94c(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c54984(param_1,param_2,&PTR____CFConstantStringClassReference_111024d58,9,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100c6c3a0; end: 100c6c3f3; -[SCAToSnappableBase setIsPortraitEffectActive:] */

void FUN_100c6c3a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d94c(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c54984(param_1,param_2,&PTR____CFConstantStringClassReference_1110226d8,8,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100c6c3f4; end: 100c6c3f7;  */

void FUN_100c6c3f4(long param_1,long param_2)

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



/* Entry: 100c6c3f8; end: 100c6c4e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c6c3f8(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112ed6848);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ed6808);
  func_0x000107c5fadc(uVar4,((undefined8 *)(unaff_x20 + _DAT_112ed6808))[1]);
  func_0x000107c4e278(uVar3);
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ed6858);
  puVar1 = &UNK_110582358;
  func_0x000107c613fc(&UNK_110582358,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar4;
  pcStack_40 = FUN_100c817f0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_110582370;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  puVar1 = puStack_38;
  func_0x000107c615f0(uVar4);
  func_0x000107c61574(puVar1);
  FUN_100c6d86c(ppuVar2);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 100c6c4e4; end: 100c6c4eb; -[SCPageLoadMetricManagerImpl pageLoadCompletes:] */

void FUN_100c6c4e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f1590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_pageLoadCompletes_customSplits__112619f78,param_3,0);
  return;
}



/* Entry: 100c6c4ec; end: 100c6c5d3; -[SCPageLoadMetricManagerImpl pageLoadCompletes:customSplits:] */

/* WARNING: Possible PIC construction at 0x000100c6c584: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c6c5a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c6c5b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c6c5ac) */
/* WARNING: Removing unreachable block (ram,0x000100c6c588) */
/* WARNING: Removing unreachable block (ram,0x000100c6c5bc) */

void FUN_100c6c4ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c3b08c(param_1);
  lVar1 = param_1;
  func_0x000107c3c0a0(param_1,param_2,param_3);
  func_0x000107c61180();
  func_0x000107c4e274();
  lVar2 = lVar1;
  func_0x000107c4e284();
  func_0x000107c61180();
  func_0x000107c504e8(lVar1);
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x000107c5c734(uVar3);
    func_0x000107c61180();
    func_0x000107c4bd4c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 100c6c5d4; end: 100c6c613; -[SCPageLoadMetricManagerImpl _clearLoadingPage] */

void FUN_100c6c5d4(long param_1)

{
  undefined8 uVar1;
  
  func_0x000107c611ec(param_1 + 0x50);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x50);
  return;
}



/* Entry: 100c6c614; end: 100c6c69f; -[SCPageLoadMetric pageLoadComplete] */

void FUN_100c6c614(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x000107c6071c();
  func_0x000107c611ec(param_2 + 0x3c);
  func_0x000107c42850(*(undefined8 *)(param_2 + 0x28));
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d954(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c56bd8(*(undefined8 *)(param_2 + 8),param_3,puVar1,
                      &PTR____CFConstantStringClassReference_110db3a78);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_2 + 0x3c);
  return;
}



/* Entry: 100c6c6a0; end: 100c6c6cb; -[SCPageLoadTrace endPagePresentation] */

void FUN_100c6c6a0(long param_1,undefined8 param_2)

{
  func_0x000107c42880(param_1,param_2,*(undefined8 *)(param_1 + 8),0);
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Entry: 100c6c6cc; end: 100c6ca6f; -[SCPageLoadMetric pageLoadMetricDataModel] */

void FUN_100c6c6cc(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [128];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c611ec(param_2 + 0x3c);
  lVar1 = *(long *)(param_2 + 8);
  func_0x000107c4d9e8(lVar1,param_3,&PTR____CFConstantStringClassReference_110e4c2b8);
  func_0x000107c61180();
  func_0x000107c61170();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c61160(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    lVar1 = param_2;
    func_0x000107c3b414(param_2);
    func_0x000107c61180();
    func_0x000107c3d79c(puVar2,param_3,lVar1);
    func_0x000107c61170(lVar1);
    lVar1 = param_2;
    func_0x000107c3c09c(param_2);
    func_0x000107c61180();
    func_0x000107c3d79c(puVar2,param_3,lVar1);
    func_0x000107c61170(lVar1);
    lVar1 = param_2;
    func_0x000107c3cdec(param_2);
    func_0x000107c61180();
    func_0x000107c3d79c(puVar2,param_3,lVar1);
    func_0x000107c61170(lVar1);
    lVar1 = param_2;
    func_0x000107c3cde8(param_2);
    func_0x000107c61180();
    func_0x000107c3d79c(puVar2,param_3,lVar1);
    func_0x000107c61170(lVar1);
    lVar1 = param_2;
    func_0x000107c3cd68(param_2);
    func_0x000107c61180();
    func_0x000107c3d79c(puVar2,param_3,lVar1);
    func_0x000107c61170(lVar1);
    dVar9 = 0.0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    lVar5 = *(long *)(param_2 + 0x10);
    func_0x000107c61174(lVar5);
    lVar1 = lVar5;
    func_0x000107c4080c(lVar5,param_3,&uStack_140,auStack_100,0x10);
    if (lVar1 != 0) {
      lVar7 = *plStack_130;
      do {
        lVar8 = 0;
        do {
          if (*plStack_130 != lVar7) {
            func_0x000107c61128(lVar5);
          }
          uVar6 = *(undefined8 *)(lStack_138 + lVar8 * 8);
          uVar3 = *(undefined8 *)(param_2 + 0x10);
          func_0x000107c4d9e8(uVar3,param_3,uVar6);
          func_0x000107c61180();
          func_0x000107c4223c();
          func_0x000107c61170(uVar3);
          dVar9 = dVar9 * 1000000.0;
          puVar4 = PTR_PTR_1126c9ee8;
          func_0x000107c51ba0(PTR_PTR_1126c9ee8,param_3,uVar6,(long)dVar9);
          func_0x000107c61180();
          func_0x000107c3d798(puVar2,param_3,puVar4);
          func_0x000107c61170(puVar4);
          lVar8 = lVar8 + 1;
        } while (lVar1 != lVar8);
        lVar1 = lVar5;
        func_0x000107c4080c(lVar5,param_3,&uStack_140,auStack_100,0x10);
      } while (lVar1 != 0);
    }
    func_0x000107c61170(lVar5);
    lVar1 = *(long *)(param_2 + 8);
    func_0x000107c4d9e8(lVar1,param_3,&PTR____CFConstantStringClassReference_110db3a78);
    func_0x000107c61180();
    uVar3 = *(undefined8 *)(param_2 + 8);
    if (lVar1 == 0) {
      func_0x000107c4d9e8(uVar3,param_3,&PTR____CFConstantStringClassReference_110e4c3d8);
      func_0x000107c61180();
      func_0x000107c4223c();
    }
    else {
      func_0x000107c4d9e8(uVar3,param_3,&PTR____CFConstantStringClassReference_110db3a78);
      func_0x000107c61180();
      func_0x000107c4223c();
    }
    dVar10 = dVar9;
    func_0x000107c61170(uVar3);
    func_0x000107c61170(lVar1);
    uVar3 = *(undefined8 *)(param_2 + 8);
    func_0x000107c4d9e8(uVar3,param_3,&PTR____CFConstantStringClassReference_110e4c2b8);
    func_0x000107c61180();
    func_0x000107c4223c();
    func_0x000107c61170(uVar3);
    func_0x000107c610f4();
    param_1 = (dVar9 - dVar10) * 1000000.0;
    func_0x000107c48928();
    *(undefined1 *)(param_2 + 0x38) = 0;
    func_0x000107c61170(puVar2);
  }
  lVar1 = param_2 + 0x3c;
  func_0x000107c611f0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    func_0x000107c60e78();
    func_0x000107c611f0(param_2 + 0x3c);
    func_0x000107c60bd8();
    lVar5 = *(long *)(lVar1 + 8);
    func_0x000107c4d9e8(lVar5,param_3,&PTR____CFConstantStringClassReference_110e4c358);
    func_0x000107c61180();
    if (lVar5 != 0) {
      lVar7 = *(long *)(lVar1 + 8);
      func_0x000107c4d9e8(lVar7,param_3,&PTR____CFConstantStringClassReference_110e4c378);
      func_0x000107c61180();
      func_0x000107c61170();
      func_0x000107c61170(lVar5);
      if (lVar7 != 0) {
        uVar3 = *(undefined8 *)(lVar1 + 8);
        func_0x000107c4d9e8(uVar3,param_3,&PTR____CFConstantStringClassReference_110e4c378);
        func_0x000107c61180();
        func_0x000107c4223c();
        uVar6 = *(undefined8 *)(lVar1 + 8);
        dVar9 = param_1;
        func_0x000107c4d9e8(uVar6,param_3,&PTR____CFConstantStringClassReference_110e4c358);
        func_0x000107c61180();
        func_0x000107c4223c();
        dVar10 = (param_1 - dVar9) * 1000000.0;
        lVar5 = (long)dVar10;
        func_0x000107c61170(uVar6);
        func_0x000107c61170(uVar3);
        uVar3 = *(undefined8 *)(lVar1 + 8);
        func_0x000107c4d9e8(uVar3,param_3,&PTR____CFConstantStringClassReference_110e4c378);
        func_0x000107c61180();
        func_0x000107c4223c();
        uVar6 = *(undefined8 *)(lVar1 + 8);
        dVar9 = dVar10;
        func_0x000107c4d9e8(uVar6,param_3,&PTR____CFConstantStringClassReference_110e4c2b8);
        func_0x000107c61180();
        func_0x000107c4223c();
        func_0x000107c61170(uVar6);
        func_0x000107c61170(uVar3);
        func_0x000107c41250(PTR_PTR_1126c9ee8,param_3,lVar5,dVar10 < dVar9);
        func_0x000107c61180();
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c6ca70; end: 100c6cbd7; -[SCPageLoadMetric _dataLoadSubMetric] */

void FUN_100c6ca70(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  
  lVar1 = *(long *)(param_2 + 8);
  func_0x000107c4d9e8(lVar1,param_3,&PTR____CFConstantStringClassReference_110e4c358);
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_2 + 8);
    func_0x000107c4d9e8(lVar2,param_3,&PTR____CFConstantStringClassReference_110e4c378);
    func_0x000107c61180();
    func_0x000107c61170();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(param_2 + 8);
      func_0x000107c4d9e8(uVar3,param_3,&PTR____CFConstantStringClassReference_110e4c378);
      func_0x000107c61180();
      func_0x000107c4223c();
      uVar4 = *(undefined8 *)(param_2 + 8);
      dVar5 = param_1;
      func_0x000107c4d9e8(uVar4,param_3,&PTR____CFConstantStringClassReference_110e4c358);
      func_0x000107c61180();
      func_0x000107c4223c();
      dVar6 = (param_1 - dVar5) * 1000000.0;
      lVar1 = (long)dVar6;
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar3);
      uVar3 = *(undefined8 *)(param_2 + 8);
      func_0x000107c4d9e8(uVar3,param_3,&PTR____CFConstantStringClassReference_110e4c378);
      func_0x000107c61180();
      func_0x000107c4223c();
      uVar4 = *(undefined8 *)(param_2 + 8);
      dVar5 = dVar6;
      func_0x000107c4d9e8(uVar4,param_3,&PTR____CFConstantStringClassReference_110e4c2b8);
      func_0x000107c61180();
      func_0x000107c4223c();
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar3);
      func_0x000107c41250(PTR_PTR_1126c9ee8,param_3,lVar1,dVar6 < dVar5);
      func_0x000107c61180();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c6cbd8; end: 100c6cbe3;  */

void FUN_100c6cbd8(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_addObject__11259c1f0);
    return;
  }
  return;
}



/* Entry: 100c6cbe4; end: 100c6cd4b; -[SCPageLoadMetric _pageInjectionSubMetric] */

void FUN_100c6cbe4(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  
  lVar1 = *(long *)(param_2 + 8);
  func_0x000107c4d9e8(lVar1,param_3,&PTR____CFConstantStringClassReference_110e4c318);
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_2 + 8);
    func_0x000107c4d9e8(lVar2,param_3,&PTR____CFConstantStringClassReference_110e4c338);
    func_0x000107c61180();
    func_0x000107c61170();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(param_2 + 8);
      func_0x000107c4d9e8(uVar3,param_3,&PTR____CFConstantStringClassReference_110e4c338);
      func_0x000107c61180();
      func_0x000107c4223c();
      uVar4 = *(undefined8 *)(param_2 + 8);
      dVar5 = param_1;
      func_0x000107c4d9e8(uVar4,param_3,&PTR____CFConstantStringClassReference_110e4c318);
      func_0x000107c61180();
      func_0x000107c4223c();
      dVar6 = (param_1 - dVar5) * 1000000.0;
      lVar1 = (long)dVar6;
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar3);
      uVar3 = *(undefined8 *)(param_2 + 8);
      func_0x000107c4d9e8(uVar3,param_3,&PTR____CFConstantStringClassReference_110e4c338);
      func_0x000107c61180();
      func_0x000107c4223c();
      uVar4 = *(undefined8 *)(param_2 + 8);
      dVar5 = dVar6;
      func_0x000107c4d9e8(uVar4,param_3,&PTR____CFConstantStringClassReference_110e4c2b8);
      func_0x000107c61180();
      func_0x000107c4223c();
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar3);
      func_0x000107c4e258(PTR_PTR_1126c9ee8,param_3,lVar1,dVar6 < dVar5);
      func_0x000107c61180();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c6cd4c; end: 100c6ceb3; -[SCPageLoadMetric _viewModelCreationSubMetric] */

void FUN_100c6cd4c(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  
  lVar1 = *(long *)(param_2 + 8);
  func_0x000107c4d9e8(lVar1,param_3,&PTR____CFConstantStringClassReference_110e4c3b8);
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_2 + 8);
    func_0x000107c4d9e8(lVar2,param_3,&PTR____CFConstantStringClassReference_110e4c398);
    func_0x000107c61180();
    func_0x000107c61170();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(param_2 + 8);
      func_0x000107c4d9e8(uVar3,param_3,&PTR____CFConstantStringClassReference_110e4c3b8);
      func_0x000107c61180();
      func_0x000107c4223c();
      uVar4 = *(undefined8 *)(param_2 + 8);
      dVar5 = param_1;
      func_0x000107c4d9e8(uVar4,param_3,&PTR____CFConstantStringClassReference_110e4c398);
      func_0x000107c61180();
      func_0x000107c4223c();
      dVar6 = (param_1 - dVar5) * 1000000.0;
      lVar1 = (long)dVar6;
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar3);
      uVar3 = *(undefined8 *)(param_2 + 8);
      func_0x000107c4d9e8(uVar3,param_3,&PTR____CFConstantStringClassReference_110e4c3b8);
      func_0x000107c61180();
      func_0x000107c4223c();
      uVar4 = *(undefined8 *)(param_2 + 8);
      dVar5 = dVar6;
      func_0x000107c4d9e8(uVar4,param_3,&PTR____CFConstantStringClassReference_110e4c2b8);
      func_0x000107c61180();
      func_0x000107c4223c();
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar3);
      func_0x000107c5defc(PTR_PTR_1126c9ee8,param_3,lVar1,dVar6 < dVar5);
      func_0x000107c61180();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c6ceb4; end: 100c6d01b; -[SCPageLoadMetric _viewInitToLoadSubMetric] */

void FUN_100c6ceb4(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  
  lVar1 = *(long *)(param_2 + 8);
  func_0x000107c4d9e8(lVar1,param_3,&PTR____CFConstantStringClassReference_110e4c2f8);
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_2 + 8);
    func_0x000107c4d9e8(lVar2,param_3,&PTR____CFConstantStringClassReference_110e4c338);
    func_0x000107c61180();
    func_0x000107c61170();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(param_2 + 8);
      func_0x000107c4d9e8(uVar3,param_3,&PTR____CFConstantStringClassReference_110e4c2f8);
      func_0x000107c61180();
      func_0x000107c4223c();
      uVar4 = *(undefined8 *)(param_2 + 8);
      dVar5 = param_1;
      func_0x000107c4d9e8(uVar4,param_3,&PTR____CFConstantStringClassReference_110e4c338);
      func_0x000107c61180();
      func_0x000107c4223c();
      dVar6 = (param_1 - dVar5) * 1000000.0;
      lVar1 = (long)dVar6;
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar3);
      uVar3 = *(undefined8 *)(param_2 + 8);
      func_0x000107c4d9e8(uVar3,param_3,&PTR____CFConstantStringClassReference_110e4c2f8);
      func_0x000107c61180();
      func_0x000107c4223c();
      uVar4 = *(undefined8 *)(param_2 + 8);
      dVar5 = dVar6;
      func_0x000107c4d9e8(uVar4,param_3,&PTR____CFConstantStringClassReference_110e4c2b8);
      func_0x000107c61180();
      func_0x000107c4223c();
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar3);
      func_0x000107c5dee8(PTR_PTR_1126c9ee8,param_3,lVar1,dVar6 < dVar5);
      func_0x000107c61180();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c6d01c; end: 100c6d0f3; -[SCPageLoadMetric _userActionToRenderSubMetric] */

void FUN_100c6d01c(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  
  lVar1 = *(long *)(param_2 + 8);
  func_0x000107c4d9e8(lVar1,param_3,&PTR____CFConstantStringClassReference_110e4c2d8);
  func_0x000107c61180();
  func_0x000107c61170();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_2 + 8);
    func_0x000107c4d9e8(uVar2,param_3,&PTR____CFConstantStringClassReference_110e4c2d8);
    func_0x000107c61180();
    func_0x000107c4223c();
    uVar3 = *(undefined8 *)(param_2 + 8);
    dVar4 = param_1;
    func_0x000107c4d9e8(uVar3,param_3,&PTR____CFConstantStringClassReference_110e4c2b8);
    func_0x000107c61180();
    func_0x000107c4223c();
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
    func_0x000107c5d8cc(PTR_PTR_1126c9ee8,param_3,(long)((param_1 - dVar4) * 1000000.0));
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c6d0f4; end: 100c6d1f3; -[SCPageLoadMetricDataModel initWithSplits:latencyInMicroseconds:page:source:isFirstLoad:abandonedType:] */

undefined1 *
FUN_100c6d0f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_58 = PTR_PTR_1126f0fe8;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    uVar2 = param_5;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_6;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_7;
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100c6d1f4; end: 100c6d24b; -[SCPageLoadMetric reset] */

void FUN_100c6d1f4(long param_1)

{
  undefined8 uVar1;
  
  func_0x000107c611ec(param_1 + 0x3c);
  func_0x000107c4fe7c(*(undefined8 *)(param_1 + 8));
  *(undefined8 *)(param_1 + 0x30) = 0xffffffffffffffff;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x3c);
  return;
}



/* Entry: 100c6d24c; end: 100c6d28b;  */

void FUN_100c6d24c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3c0a4();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 100c6d28c; end: 100c6d3df; -[SCPageLoadMetricServiceProvider _pageLoadMetricReporter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c6d28c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  if (param_1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_1 + _DAT_1127461bc;
    func_0x000107c61148(lVar6);
  }
  lVar1 = lVar6;
  func_0x000107c3e270(lVar6);
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c4f7fc();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar6);
  puVar4 = PTR_PTR_1126c9f20;
  func_0x000107c610f4(PTR_PTR_1126c9f20);
  if (param_1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_1 + _DAT_1127461b4;
    func_0x000107c61148(lVar6);
  }
  lVar2 = lVar6;
  func_0x000107c5da04(lVar6);
  func_0x000107c61180();
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_1127461b8;
    func_0x000107c61148(lVar1);
  }
  lVar5 = lVar1;
  func_0x000107c444a4(lVar1);
  func_0x000107c61180();
  func_0x000107c4919c(puVar4,param_2,lVar2,lVar5,lVar3);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 100c6d3e0; end: 100c6d4ab; -[SCPageLoadMetricReporter initWithUserBlizzard:grapheneRegistry:loggerQueue:] */

undefined1 *
FUN_100c6d3e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f0fd8;
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


