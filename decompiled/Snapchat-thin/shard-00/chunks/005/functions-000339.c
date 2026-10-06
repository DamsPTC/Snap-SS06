/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1007168a0; end: 10071694b;  */

void FUN_1007168a0(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10071694c; end: 100716953;  */

void FUN_10071694c(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 100716954; end: 100717fa3;  */

void FUN_100716954(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x20);
  if ((*(ulong *)(param_1 + 0x28) & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(*(long *)(*(long *)(param_1 + 0x30) + ((long)*(ulong *)(param_1 + 0x28) >> 1)) +
                   ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
  }
                    /* WARNING: Could not recover jumptable at 0x00010071696c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 100717fa4; end: 100718bdf; -[SCImpalaLegacyServicesEntryPoint begin] */

/* WARNING: Possible PIC construction at 0x00010071828c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010071829c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007182ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007182bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007182cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007182dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007182ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007182fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010071830c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010071831c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010071832c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010071833c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010071834c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010071835c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010071836c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010071837c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100718458: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100718468: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100718478: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100718488: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100718498: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100718968: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100718978: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100718988: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100718998: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007189a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007189b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007189c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007189d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007189e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007189f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100718a08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100718a18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100718a28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100718a38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100718a48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100718a58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100718a68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100718a78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100718a88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100718a98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100718aa8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100718ab8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100718ac8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100718ad8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100718ae8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100718af8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100718b08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100718b18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100718b28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100718b38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100718b48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100718b58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100718ba8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100718bb8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100718bac) */
/* WARNING: Removing unreachable block (ram,0x000100718b5c) */
/* WARNING: Removing unreachable block (ram,0x000100718b4c) */
/* WARNING: Removing unreachable block (ram,0x000100718b3c) */
/* WARNING: Removing unreachable block (ram,0x000100718b2c) */
/* WARNING: Removing unreachable block (ram,0x000100718b1c) */
/* WARNING: Removing unreachable block (ram,0x000100718b0c) */
/* WARNING: Removing unreachable block (ram,0x000100718afc) */
/* WARNING: Removing unreachable block (ram,0x000100718aec) */
/* WARNING: Removing unreachable block (ram,0x000100718adc) */
/* WARNING: Removing unreachable block (ram,0x000100718acc) */
/* WARNING: Removing unreachable block (ram,0x000100718abc) */
/* WARNING: Removing unreachable block (ram,0x000100718aac) */
/* WARNING: Removing unreachable block (ram,0x000100718a9c) */
/* WARNING: Removing unreachable block (ram,0x000100718a8c) */
/* WARNING: Removing unreachable block (ram,0x000100718a7c) */
/* WARNING: Removing unreachable block (ram,0x000100718a6c) */
/* WARNING: Removing unreachable block (ram,0x000100718a5c) */
/* WARNING: Removing unreachable block (ram,0x000100718a4c) */
/* WARNING: Removing unreachable block (ram,0x000100718a3c) */
/* WARNING: Removing unreachable block (ram,0x000100718a2c) */
/* WARNING: Removing unreachable block (ram,0x000100718a1c) */
/* WARNING: Removing unreachable block (ram,0x000100718a0c) */
/* WARNING: Removing unreachable block (ram,0x0001007189fc) */
/* WARNING: Removing unreachable block (ram,0x0001007189ec) */
/* WARNING: Removing unreachable block (ram,0x0001007189dc) */
/* WARNING: Removing unreachable block (ram,0x0001007189cc) */
/* WARNING: Removing unreachable block (ram,0x0001007189bc) */
/* WARNING: Removing unreachable block (ram,0x0001007189ac) */
/* WARNING: Removing unreachable block (ram,0x00010071899c) */
/* WARNING: Removing unreachable block (ram,0x00010071898c) */
/* WARNING: Removing unreachable block (ram,0x00010071897c) */
/* WARNING: Removing unreachable block (ram,0x00010071896c) */
/* WARNING: Removing unreachable block (ram,0x00010071849c) */
/* WARNING: Removing unreachable block (ram,0x00010071848c) */
/* WARNING: Removing unreachable block (ram,0x00010071847c) */
/* WARNING: Removing unreachable block (ram,0x00010071846c) */
/* WARNING: Removing unreachable block (ram,0x00010071845c) */
/* WARNING: Removing unreachable block (ram,0x000100718380) */
/* WARNING: Removing unreachable block (ram,0x000100718370) */
/* WARNING: Removing unreachable block (ram,0x000100718360) */
/* WARNING: Removing unreachable block (ram,0x000100718350) */
/* WARNING: Removing unreachable block (ram,0x000100718340) */
/* WARNING: Removing unreachable block (ram,0x000100718330) */
/* WARNING: Removing unreachable block (ram,0x000100718320) */
/* WARNING: Removing unreachable block (ram,0x000100718310) */
/* WARNING: Removing unreachable block (ram,0x000100718300) */
/* WARNING: Removing unreachable block (ram,0x0001007182f0) */
/* WARNING: Removing unreachable block (ram,0x0001007182e0) */
/* WARNING: Removing unreachable block (ram,0x0001007182d0) */
/* WARNING: Removing unreachable block (ram,0x0001007182c0) */
/* WARNING: Removing unreachable block (ram,0x0001007182b0) */
/* WARNING: Removing unreachable block (ram,0x0001007182a0) */
/* WARNING: Removing unreachable block (ram,0x000100718290) */
/* WARNING: Removing unreachable block (ram,0x000100718bbc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100717fa4(long param_1,undefined8 param_2)

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
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  
  puVar1 = PTR_PTR_1126cc1b8;
  func_0x000107c610f4();
  lVar2 = param_1 + _DAT_11274c06c;
  func_0x000107c61148();
  func_0x000107c5da60();
  func_0x000107c61180();
  lVar3 = param_1 + _DAT_11274c070;
  func_0x000107c61148();
  lVar4 = param_1 + _DAT_11274c074;
  func_0x000107c61148();
  func_0x000107c3fa04();
  func_0x000107c61180();
  lVar5 = param_1 + _DAT_11274c078;
  func_0x000107c61148();
  lVar6 = param_1 + _DAT_11274c07c;
  func_0x000107c61148();
  lVar7 = param_1 + _DAT_11274c080;
  func_0x000107c61148();
  func_0x000107c406a0();
  func_0x000107c61180();
  uVar20 = *(undefined8 *)(param_1 + _DAT_11274c084);
  lVar8 = param_1 + _DAT_11274c088;
  func_0x000107c61148();
  lVar9 = param_1 + _DAT_11274c08c;
  func_0x000107c61148();
  func_0x000107c51d00();
  func_0x000107c61180();
  lVar10 = param_1 + _DAT_11274c090;
  func_0x000107c61148();
  lVar11 = param_1 + _DAT_11274c094;
  func_0x000107c61148();
  func_0x000107c42eac();
  func_0x000107c61180();
  lVar12 = param_1 + _DAT_11274c098;
  func_0x000107c61148();
  func_0x000107c43a84();
  func_0x000107c61180();
  lVar13 = param_1 + _DAT_11274c09c;
  func_0x000107c61148();
  func_0x000107c5dbd4();
  func_0x000107c61180();
  lVar14 = param_1 + _DAT_11274c0a0;
  func_0x000107c61148();
  func_0x000107c3eabc();
  func_0x000107c61180();
  lVar15 = param_1 + _DAT_11274c0a4;
  func_0x000107c61148();
  func_0x000107c3fd24();
  func_0x000107c61180();
  lVar16 = param_1 + _DAT_11274c0a8;
  func_0x000107c61148();
  lVar17 = param_1 + _DAT_11274c0ac;
  func_0x000107c61148();
  lVar18 = param_1 + _DAT_11274c0b0;
  func_0x000107c61148();
  func_0x000107c5c03c();
  func_0x000107c61180();
  lVar19 = param_1 + _DAT_11274c0b4;
  func_0x000107c61148();
  func_0x000107c4e26c();
  func_0x000107c61180();
  param_1 = param_1 + _DAT_11274c0b8;
  func_0x000107c61148();
  func_0x000107c40cc0();
  func_0x000107c61180();
  func_0x000107c49378(puVar1,param_2,lVar2,lVar3,lVar4,lVar5,lVar6,lVar7,uVar20,lVar8,lVar9,lVar10,
                      lVar11,lVar12,lVar13,lVar14,lVar15,lVar16,lVar17,lVar18,lVar19,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100718be0; end: 100718be7; -[SCConversationServices conversationManager] */

undefined8 FUN_100718be0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100718be8; end: 100718bf7; -[_TtC18SCBlizzardServices28ValdiBlizzardLoggingServices blizzardLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100718be8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113083898));
  return;
}



/* Entry: 100718bf8; end: 100718c07; -[_TtC22ValdiCOFStoresServices22ValdiCOFStoresServices cofStore] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100718bf8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fbabe0));
  return;
}



/* Entry: 100718c08; end: 100718c27; -[_TtC24StoryReplyMutingServices24StoryReplyMutingServices storyReplyMutingService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100718c08(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_113042988));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100718c28; end: 100718c47; -[CreatorSubscriptionsServices creatorInfoProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100718c28(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_113041e50));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100718c48; end: 10071908b; -[SCLegacyImpalaSnapInsightsHelper initWithUserSession:payoutsPresenterScopeFactoryServices:circumstanceEngine:contentDeliveryServices:snapchatterServices:conversationManager:safetyReportScopeExposer:composerPeopleBridgeFriendServices:bitmojiSelfieFetcher:composerCoreUIServices:featureSettingsService:friendsFeedEntryStore:valdiRuntimeProvider:composerBlizzardLogger:cofStore:chatReactionServices:deckServices:storyReplyMutingService:pageLauncher:creatorInfoProvider:] */

undefined8 *
FUN_100718c48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  func_0x000107c61174(param_3);
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
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_16);
  func_0x000107c61174(param_17);
  func_0x000107c61174(param_18);
  func_0x000107c61174(param_19);
  func_0x000107c61174(param_20);
  func_0x000107c61174(param_21);
  func_0x000107c61174(param_22);
  puStack_70 = PTR_PTR_1126f2398;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_22);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_22;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_18);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_18;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_19);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_19;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = puVar1[9];
    puVar1[9] = param_10;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_11);
    uVar2 = puVar1[10];
    puVar1[10] = param_11;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_12);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_12;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_13);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_13;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_14);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_14;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_15);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_15;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_16);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_16;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_17);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_17;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_20);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_20;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_21);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_21;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_22);
  func_0x000107c61170(param_21);
  func_0x000107c61170(param_20);
  func_0x000107c61170(param_19);
  func_0x000107c61170(param_18);
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_15);
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
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 10071908c; end: 100719093; -[SCImmediateUserFeatureLaunchServices friendProfileScopeLauncher] */

undefined8 FUN_10071908c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 100719094; end: 10071909b; -[SCImmediateUserFeatureLaunchServices unifiedPublicProfilesPresenterScopeLauncher] */

undefined8 FUN_100719094(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 10071909c; end: 1007191ef; -[SCLegacyImpalaPublicProfilePresentationHandler initWithUserSession:friendProfileScopeLauncher:friendActionSheetScopeExposer:unifiedPublicProfilesScopeLauncher:snapchatterServices:pageLauncher:] */

undefined1 *
FUN_10071909c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  puStack_58 = PTR_PTR_1126f21a8;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
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



/* Entry: 1007191f0; end: 1007191f7; -[SCStoriesServices snapViewerDataCoordinator] */

undefined8 FUN_1007191f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1007191f8; end: 100719207; -[SCSwipeToProfileParamsProviderService swipeToProfileParamsStreaming] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007191f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff3018));
  return;
}



/* Entry: 100719208; end: 10071920f; -[SCUserInfoServices snapPrivacyProvider] */

undefined8 FUN_100719208(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 100719210; end: 100719217; -[SCComposerNetworkingBridgeServices networkingClient] */

undefined8 FUN_100719210(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100719218; end: 100719917; -[SCImpalaOperaLayerViewControllerProviderCreator initWithUserSession:unifiedPublicProfilesScopeLauncher:readReceiptCoordinator:snapViewerDataCoordinator:swipeToProfileParamsStream:snapPrivacyProvider:conversationIdResolver:snapchattersDataFetcher:snapchattersDataMutator:snapchattersDataTracker:snapchatterObservableRepository:valdiRuntimeProvider:snapchatterPublicInfoFetcher:conversationDataUpdateAnnouncer:bitmojiSelfieFetcher:snapProServices:composerBlizzardLogger:cofStore:networkingClient:tokenProvider:payoutsPresenterScopeFactoryServices:circumstanceEngine:conversationManager:safetyReportScopeExposer:snapchatterServices:onboardingChecklistScopeFactoryServices:simpleContentFetcher:composerPeopleBridgeFriendServices:composerCoreUIServices:featureSettingsService:friendsFeedEntryStore:chatReactionServices:deckServices:storyReplyMutingService:pageLauncher:creatorInfoProvider:] */

undefined8 *
FUN_100719218(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  func_0x000107c61174(param_3);
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
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_16);
  func_0x000107c61174(param_17);
  func_0x000107c61174(param_18);
  func_0x000107c61174(param_19);
  func_0x000107c61174(param_20);
  func_0x000107c61174(param_21);
  func_0x000107c61174(param_22);
  func_0x000107c61174(param_23);
  func_0x000107c61174(param_24);
  func_0x000107c61174(param_25);
  func_0x000107c61174(param_26);
  func_0x000107c61174(param_27);
  func_0x000107c61174(param_28);
  func_0x000107c61174(param_29);
  func_0x000107c61174(param_30);
  func_0x000107c61174(param_31);
  func_0x000107c61174(param_32);
  func_0x000107c61174(param_33);
  func_0x000107c61174(param_34);
  func_0x000107c61174(param_35);
  func_0x000107c61174(param_36);
  func_0x000107c61174(param_37);
  func_0x000107c61174(param_38);
  puStack_70 = PTR_PTR_1126f21b0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_34);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_34;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_35);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_35;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_38);
    uVar2 = puVar1[0x24];
    puVar1[0x24] = param_38;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[5];
    puVar1[5] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[4];
    puVar1[4] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_16);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_16;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_17);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_17;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_18);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_18;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_19);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_19;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_20);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_20;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_21);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_21;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_22);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_22;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_23);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_23;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_24);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_24;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_25);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_25;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_26);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_26;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0(puVar1 + 0x1a,param_27);
    func_0x000107c61174(param_28);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_28;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_29);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_29;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_30);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_30;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_31);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_31;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_32);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_32;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_33);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_33;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_36);
    uVar2 = puVar1[0x22];
    puVar1[0x22] = param_36;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_37);
    uVar2 = puVar1[0x23];
    puVar1[0x23] = param_37;
    func_0x000107c61170(uVar2);
    *(undefined4 *)(puVar1 + 0x27) = 0;
  }
  func_0x000107c61170(param_38);
  func_0x000107c61170(param_37);
  func_0x000107c61170(param_36);
  func_0x000107c61170(param_35);
  func_0x000107c61170(param_34);
  func_0x000107c61170(param_33);
  func_0x000107c61170(param_32);
  func_0x000107c61170(param_31);
  func_0x000107c61170(param_30);
  func_0x000107c61170(param_29);
  func_0x000107c61170(param_28);
  func_0x000107c61170(param_27);
  func_0x000107c61170(param_26);
  func_0x000107c61170(param_25);
  func_0x000107c61170(param_24);
  func_0x000107c61170(param_23);
  func_0x000107c61170(param_22);
  func_0x000107c61170(param_21);
  func_0x000107c61170(param_20);
  func_0x000107c61170(param_19);
  func_0x000107c61170(param_18);
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_15);
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
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100719918; end: 1007199e3; -[SCImpalaLegacyServices initWithImpalaSnapInsightsHelper:impalaPublicProfilePresentationHandler:impalaOperaLayerViewControllerProviderCreator:] */

undefined1 *
FUN_100719918(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126faef8;
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



/* Entry: 1007199e4; end: 100719b0f;  */

void FUN_1007199e4(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100719b10; end: 100719bf3; -[SCAdOperaParserServiceProvider provide] */

void FUN_100719b10(undefined8 param_1)

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
  puVar2 = PTR_PTR_1126ca038;
  func_0x000107c610f4(PTR_PTR_1126ca038);
  func_0x000107c45640();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100719bf4; end: 100719c4b; -[_TtC21AdOperaParserServices21AdOperaParserServices initWithAdsOperaParser:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100719bf4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  *(undefined8 *)(param_1 + _DAT_112f94e58) = param_3;
  lVar2 = param_1;
  FUN_100369284();
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 100719c4c; end: 100719cdf;  */

void FUN_100719c4c(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100719ce0; end: 100719ce7;  */

void FUN_100719ce0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100719ce8; end: 100719d3b;  */

void FUN_100719ce8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100719d3c; end: 100719d47;  */

void FUN_100719d3c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_48,uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
               );
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_1001df290();
  func_0x000107c613fc();
  FUN_100719e14(uStack_48,uStack_50,uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 100719d48; end: 100719ddb;  */

void FUN_100719d48(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_1001df290();
  func_0x000107c613fc();
  FUN_100719e14(uStack_48,uStack_50,uStack_58);
  *param_1 = param_2;
  return;
}



/* Entry: 100719ddc; end: 100719e13;  */

void FUN_100719ddc(undefined8 param_1)

{
  if (lRam0000000112dd12f0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6572c4);
  return;
}



/* Entry: 100719e14; end: 100719eef;  */

void FUN_100719e14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  FUN_100719ddc(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100719f34();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_100719f68();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  return;
}



/* Entry: 100719ef0; end: 100719f33;  */

void FUN_100719ef0(long param_1)

{
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_20 = PTR___sBOWV_11034d658 + 0x40;
  puStack_18 = puStack_20;
  func_0x000107c61524(param_1,0x100,2,&puStack_20,param_1 + 0x70);
  return;
}



/* Entry: 100719f34; end: 100719f67;  */

void FUN_100719f34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c61170();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  return;
}



/* Entry: 100719f68; end: 10071a05b;  */

undefined * FUN_100719f68(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c421c8();
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c444a4();
  func_0x000107c61180();
  puVar3 = &UNK_11040f0a8;
  func_0x000107c613fc(&UNK_11040f0a8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  FUN_1000285a8(0x112dd12c0,&UNK_10d992470);
  func_0x000107c613fc();
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  puVar4 = &UNK_1018eab70;
  FUN_1000bdd8c(&UNK_1018eab70,puVar3);
  uVar5 = 0;
  FUN_1001f5a74(0);
  func_0x000107c610f8();
  FUN_10071a088(puVar4,uVar5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  return puVar4;
}



/* Entry: 10071a05c; end: 10071a087;  */

void FUN_10071a05c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10071a088; end: 10071a0df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10071a088(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_1130115f8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_1130115f0) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10071a0e0; end: 10071a113;  */

void FUN_10071a0e0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10071a114; end: 10071a11b;  */

void FUN_10071a114(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x68);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10071a11c; end: 10071a16f;  */

void FUN_10071a11c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x68);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10071a170; end: 10071a82f;  */

void FUN_10071a170(long *param_1,long param_2)

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
  FUN_1003571b0();
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
  puVar1 = PTR_PTR_1126ca008;
  func_0x000107c610f8();
  uVar2 = uStack_78;
  func_0x000107c61174();
  uVar3 = uStack_80;
  func_0x000107c61174();
  uVar4 = uStack_88;
  func_0x000107c61174();
  uVar5 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar6 = uStack_98;
  func_0x000107c61174();
  uVar7 = uStack_a0;
  func_0x000107c61174(uStack_a0);
  uVar8 = uStack_a8;
  func_0x000107c61174();
  uVar9 = uStack_b0;
  func_0x000107c61174();
  uVar10 = uStack_b8;
  func_0x000107c61174();
  uVar11 = uStack_c0;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar12 = auStack_70[0];
  func_0x000107c61174();
  uVar13 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar13 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar13 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef113a0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar13 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f1084e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar13);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar1);
  uVar13 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar13);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(puVar1);
  uVar13 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef32a00);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef202e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f017660);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef21240);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0x69767265536f6375;
  func_0x000107c5fadc(0x69767265536f6375,0xeb00000000736563);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar13);
  uVar14 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef13320);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  uVar13 = uVar14;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar12);
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
  *(undefined8 *)(param_2 + 0x68) = uVar13;
  *param_1 = param_2;
  return;
}



/* Entry: 10071a830; end: 10071a86b;  */

void FUN_10071a830(void)

{
  long unaff_x20;
  
  FUN_10071a170(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 10071a86c; end: 10071a873;  */

void FUN_10071a86c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xb8);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10071a874; end: 10071a8c7;  */

void FUN_10071a874(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xb8);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10071a8c8; end: 10071b56b;  */

void FUN_10071a8c8(long *param_1,long param_2)

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
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
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
  FUN_100083b20(&uStack_e0);
  FUN_100083b20(&uStack_e8);
  FUN_100083b20(&uStack_f0);
  FUN_100083b20(&uStack_f8);
  FUN_100083b20(&uStack_100);
  FUN_100083b20(&uStack_108);
  FUN_100083b20(&uStack_110);
  FUN_10034f554();
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
  *(undefined8 *)(param_2 + 0x80) = uStack_e0;
  *(undefined8 *)(param_2 + 0x88) = uStack_e8;
  *(undefined8 *)(param_2 + 0x90) = uStack_f0;
  *(undefined8 *)(param_2 + 0x98) = uStack_f8;
  *(undefined8 *)(param_2 + 0xa0) = uStack_100;
  *(undefined8 *)(param_2 + 0xa8) = uStack_108;
  *(undefined8 *)(param_2 + 0xb0) = uStack_110;
  puVar1 = PTR_PTR_1126ac770;
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
  func_0x000107c61174();
  uVar14 = uStack_d8;
  func_0x000107c61174();
  uVar15 = uStack_e0;
  func_0x000107c61174();
  uVar16 = uStack_e8;
  func_0x000107c61174();
  uVar17 = uStack_f0;
  func_0x000107c61174(uStack_f0);
  uVar18 = uStack_f8;
  func_0x000107c61174();
  uVar19 = uStack_100;
  func_0x000107c61174();
  func_0x000107c615f0(uStack_108);
  func_0x000107c615f0(uStack_110);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar20 = auStack_70[0];
  func_0x000107c61174();
  uVar21 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010ef2dc90);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f113420);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar21 = 0x536f725070616e73;
  func_0x000107c5fadc(0x536f725070616e73,0xef73656369767265);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar21);
  uVar22 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174(uVar22);
  uVar21 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010efc3430);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef2b490);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef3dbc0);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174(uVar22);
  uVar21 = 0x53736569726f7473;
  func_0x000107c5fadc(0x53736569726f7473,0xef73656369767265);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar21);
  uVar21 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar22 = 0x767265536c6c6f70;
  func_0x000107c5fadc(0x767265536c6c6f70,0xec00000073656369);
  func_0x000107c5a49c(uVar21);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar22);
  uVar22 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010f01aa80);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f113440);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f113460);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef1df40);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f0a4040);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar21);
  func_0x000107c61174(uVar18);
  func_0x000107c61174();
  uVar21 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010ef21090);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar21);
  func_0x000107c61174(uVar19);
  func_0x000107c61174();
  uVar21 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f089080);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar21);
  func_0x000107c615f0(uStack_108);
  func_0x000107c61174();
  uVar21 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f0890b0);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c615e8(uStack_108);
  func_0x000107c61170(uVar21);
  func_0x000107c615f0(uStack_110);
  func_0x000107c61174();
  uVar21 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef34da0);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c615e8(uStack_110);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  uVar21 = uVar22;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar20);
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
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar19);
  func_0x000107c615e8(uStack_108);
  func_0x000107c615e8(uStack_110);
  *(undefined8 *)(param_2 + 0xb8) = uVar21;
  *param_1 = param_2;
  return;
}



/* Entry: 10071b56c; end: 10071b5b7;  */

void FUN_10071b56c(void)

{
  long unaff_x20;
  
  FUN_10071a8c8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0));
  return;
}



/* Entry: 10071b5b8; end: 10071b5bf;  */

void FUN_10071b5b8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10071b5c0; end: 10071b613;  */

void FUN_10071b5c0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10071b614; end: 10071b61f;  */

void FUN_10071b614(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_48,uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
               );
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_100340140();
  func_0x000107c613fc();
  FUN_10071bc50(uStack_48,uStack_50,uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 10071b620; end: 10071b6b3;  */

void FUN_10071b620(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_100340140();
  func_0x000107c613fc();
  FUN_10071bc50(uStack_48,uStack_50,uStack_58);
  *param_1 = param_2;
  return;
}



/* Entry: 10071b6b4; end: 10071b6bb;  */

void FUN_10071b6b4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10071b6bc; end: 10071b70f;  */

void FUN_10071b6bc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10071b710; end: 10071b71f;  */

void FUN_10071b710(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long unaff_x20;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_10032dcb4();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  puVar2 = PTR_PTR_1126ac418;
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
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar7 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar8 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar8 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010efc3430);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar8 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef2b8b0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar8 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef2b430);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar8 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  puVar9 = puVar2;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  *(undefined **)(lVar1 + 0x38) = puVar9;
  *param_1 = lVar1;
  return;
}



/* Entry: 10071b720; end: 10071ba57;  */

void FUN_10071b720(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
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
  FUN_10032dcb4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  puVar1 = PTR_PTR_1126ac418;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar6 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar7 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar2);
  func_0x000107c61174();
  uVar7 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010efc3430);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar7 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef2b8b0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar7 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef2b430);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar7 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  puVar8 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined **)(param_2 + 0x38) = puVar8;
  *param_1 = param_2;
  return;
}



/* Entry: 10071ba58; end: 10071ba5f;  */

void FUN_10071ba58(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x150);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10071ba60; end: 10071bab3;  */

void FUN_10071ba60(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x150);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10071bab4; end: 10071bb97; -[SCExternalMediaPreparingServiceProvider provide] */

void FUN_10071bab4(undefined8 param_1)

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
  puVar2 = PTR_PTR_1126cb9a0;
  func_0x000107c610f4(PTR_PTR_1126cb9a0);
  func_0x000107c46820();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10071bb98; end: 10071bc0b; -[SCExternalMediaPreparingServices initWithExternalMediaPreparer:] */

undefined1 * FUN_10071bb98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1127008c0;
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



/* Entry: 10071bc0c; end: 10071bc4f;  */

void FUN_10071bc0c(void)

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



/* Entry: 10071bc50; end: 10071be2f;  */

void FUN_10071bc50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  puVar1 = PTR_PTR_1126aca08;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef2c420);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar3);
  uVar2 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f10afb0);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  return;
}



/* Entry: 10071be30; end: 10071bf13; -[SCDiscoverFeedMessagingServiceProvider provide] */

void FUN_10071be30(undefined8 param_1)

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
  puVar2 = PTR_PTR_1126ceda0;
  func_0x000107c610f4(PTR_PTR_1126ceda0);
  func_0x000107c465cc();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10071bf14; end: 10071bf6b; -[_TtC31SCDiscoverFeedMessagingServices31SCDiscoverFeedMessagingServices initWithDiscoverSender:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10071bf14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112fb9808) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 10071bf6c; end: 10071bf9f;  */

void FUN_10071bf6c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10071bfa0; end: 10071bfa7;  */

void FUN_10071bfa0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10071bfa8; end: 10071bffb;  */

void FUN_10071bfa8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10071bffc; end: 10071c007;  */

void FUN_10071bffc(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_1002a2388();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  puVar2 = PTR_PTR_1126a9040;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar6 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar7 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar7 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12d50);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar7 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef1bf20);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar7 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  puVar8 = puVar2;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined **)(lVar1 + 0x30) = puVar8;
  *param_1 = lVar1;
  return;
}



/* Entry: 10071c008; end: 10071c2bb;  */

void FUN_10071c008(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_1002a2388();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  puVar1 = PTR_PTR_1126a9040;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar5 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar6 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar2);
  func_0x000107c61174();
  uVar6 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12d50);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar6 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef1bf20);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar6 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61174();
  puVar7 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x30) = puVar7;
  *param_1 = param_2;
  return;
}



/* Entry: 10071c2bc; end: 10071c5a7; -[SCPollServiceProvider provide] */

void FUN_10071c2bc(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 auStack_138 [8];
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined1 auStack_108 [8];
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  func_0x000107c61144(auStack_80,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  puStack_98 = &UNK_1058003fc;
  puStack_90 = &UNK_110861c28;
  func_0x000107c6111c(auStack_88,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  puStack_d8 = puVar5;
  uStack_d0 = 0xc2000000;
  puStack_c8 = &UNK_1058004cc;
  puStack_c0 = &UNK_1108b5418;
  func_0x000107c6111c(auStack_b0,auStack_80);
  puStack_b8 = puVar1;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puStack_100 = puVar5;
  uStack_f8 = 0xc2000000;
  puStack_f0 = &UNK_105800608;
  puStack_e8 = &UNK_1108b5448;
  puVar3 = PTR_PTR_1126ae720;
  puStack_e0 = puVar2;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126ae720;
  puStack_130 = puVar5;
  uStack_128 = 0xc2000000;
  puStack_120 = &UNK_105800664;
  puStack_118 = &UNK_110868168;
  func_0x000107c6111c(auStack_108,auStack_80);
  puStack_110 = puVar1;
  func_0x000107c3e4fc(puVar4);
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_138,auStack_80);
  func_0x000107c3e4fc(puVar5);
  func_0x000107c61180();
  puVar6 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc(PTR_PTR_1126ae720);
  func_0x000107c61180();
  puVar7 = PTR_PTR_1126bead0;
  func_0x000107c610f4(PTR_PTR_1126bead0);
  func_0x000107c47fa0();
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar5);
  func_0x000107c61120(auStack_138);
  func_0x000107c61170(puVar4);
  func_0x000107c61120(auStack_108);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_b0);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_88);
  func_0x000107c61120(auStack_80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10071c5a8; end: 10071c6a3; -[SCPollServices initWithPollsDataCreator:pollsCreationManager:pollsVotingService:pollsComposerGRPCService:] */

undefined1 *
FUN_10071c5a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126fc850;
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
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10071c6a4; end: 10071c6df;  */

void FUN_10071c6a4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10071c6e0; end: 10071c6e7;  */

void FUN_10071c6e0(undefined8 *param_1)

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



/* Entry: 10071c6e8; end: 10071c73b;  */

void FUN_10071c6e8(undefined8 *param_1)

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



/* Entry: 10071c73c; end: 10071c74b;  */

void FUN_10071c73c(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar2,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_10032e2f4();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x20) = uStack_70;
  *(undefined8 *)(lVar2 + 0x28) = uStack_78;
  *(undefined8 *)(lVar2 + 0x30) = uStack_80;
  *(undefined8 *)(lVar2 + 0x38) = uStack_88;
  puVar3 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar4 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar5 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar6 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar7 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x18) = puVar3;
  puVar8 = PTR_PTR_1126ac680;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x10) = puVar8;
  func_0x000107c61174();
  uVar9 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar10 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar8);
  uVar10 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef2c420);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar8);
  uVar10 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f10afb0);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(puVar8);
  uVar10 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010f01aa80);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(puVar8);
  uVar10 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef1df40);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(puVar8);
  func_0x000107c61174();
  uVar10 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f111a90);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar10);
  func_0x000107c3e740(puVar8);
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar3 != (undefined *)0x0) {
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    *(undefined **)(lVar2 + 0x40) = puVar3;
    *param_1 = lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10071cb00);
  (*pcVar1)();
}



/* Entry: 10071c74c; end: 10071caff;  */

void FUN_10071c74c(long *param_1,long param_2)

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
  FUN_10032e2f4();
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
  puVar7 = PTR_PTR_1126ac680;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar7;
  func_0x000107c61174();
  uVar8 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar9 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar7);
  uVar9 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef2c420);
  func_0x000107c5a49c(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar7);
  uVar9 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f10afb0);
  func_0x000107c5a49c(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar7);
  uVar9 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010f01aa80);
  func_0x000107c5a49c(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(puVar7);
  uVar9 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef1df40);
  func_0x000107c5a49c(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(puVar7);
  func_0x000107c61174();
  uVar9 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f111a90);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10071cb00);
  (*pcVar1)();
}



/* Entry: 10071cb00; end: 10071cc03; -[SCGalleryMediaSendingServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10071cb00(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11274fafc);
  puVar2 = PTR_PTR_1126cdbe8;
  func_0x000107c610f4(PTR_PTR_1126cdbe8);
  func_0x000107c46ad8();
  func_0x000107c42c20(uVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
  return;
}



/* Entry: 10071cc04; end: 10071cc77; -[SCGalleryMediaSendingServices initWithGalleryMediaSender:] */

undefined1 * FUN_10071cc04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f71e0;
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



/* Entry: 10071cc78; end: 10071ccbb;  */

void FUN_10071cc78(void)

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



/* Entry: 10071ccbc; end: 10071ce07;  */

void FUN_10071ccbc(void)

{
  return;
}



/* Entry: 10071ce08; end: 10071ce0f;  */

void FUN_10071ce08(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10071ce10; end: 10071ce63;  */

void FUN_10071ce10(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10071ce64; end: 10071ce6f;  */

void FUN_10071ce64(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_58,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28));
  FUN_100083b20(&uStack_60);
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_10033ccb8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_60;
  *(undefined8 *)(lVar1 + 0x20) = uStack_68;
  *(undefined8 *)(lVar1 + 0x28) = uStack_70;
  FUN_10071cfd8(0);
  func_0x000107c613fc();
  uVar2 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar3 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar4 = uStack_70;
  func_0x000107c61174(uStack_70);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  uVar5 = uStack_58;
  func_0x000107c61174();
  uVar6 = uVar5;
  FUN_10071d058();
  *(undefined8 *)(lVar1 + 0x10) = uVar6;
  uVar7 = uVar6;
  func_0x000107c6157c();
  FUN_10071d094();
  func_0x000107c61574(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *(undefined8 *)(lVar1 + 0x30) = uVar7;
  *param_1 = lVar1;
  return;
}



/* Entry: 10071ce70; end: 10071cfd7;  */

void FUN_10071ce70(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  FUN_100083b20(&uStack_58);
  FUN_100083b20(&uStack_60);
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_10033ccb8();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  *(undefined8 *)(param_2 + 0x28) = uStack_70;
  FUN_10071cfd8(0);
  func_0x000107c613fc();
  uVar1 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar2 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  uVar4 = uStack_58;
  func_0x000107c61174();
  uVar5 = uVar4;
  FUN_10071d058();
  *(undefined8 *)(param_2 + 0x10) = uVar5;
  uVar6 = uVar5;
  func_0x000107c6157c();
  FUN_10071d094();
  func_0x000107c61574(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  *(undefined8 *)(param_2 + 0x30) = uVar6;
  *param_1 = param_2;
  return;
}



/* Entry: 10071cfd8; end: 10071d057;  */

void FUN_10071cfd8(undefined8 param_1)

{
  if (lRam0000000112f10390 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e72b1f4);
  return;
}



/* Entry: 10071d058; end: 10071d093;  */

void FUN_10071d058(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c61170();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  return;
}



/* Entry: 10071d094; end: 10071d197;  */

void FUN_10071d094(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar4 = &UNK_1105c7838;
  func_0x000107c613fc(&UNK_1105c7838,0x28,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar6;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  *(undefined8 *)(puVar4 + 0x20) = uVar1;
  puStack_50 = &UNK_102d44cf8;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_102d44d04;
  puStack_58 = &UNK_1105c7850;
  puStack_48 = puVar4;
  func_0x000107c60bc4(&puStack_70);
  puVar4 = puStack_48;
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar1);
  func_0x000107c61574(puVar4);
  func_0x000107c3e4fc(puVar3);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  FUN_10033cd44(0);
  func_0x000107c610f8();
  FUN_10071d1e0(puVar3);
  return;
}



/* Entry: 10071d198; end: 10071d1cb;  */

void FUN_10071d198(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10071d1cc; end: 10071d1df;  */

void FUN_10071d1cc(long param_1,long param_2)

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



/* Entry: 10071d1e0; end: 10071d22b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10071d1e0(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112f96910) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10071d22c; end: 10071d267;  */

void FUN_10071d22c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10071d268; end: 10071d26f;  */

void FUN_10071d268(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10071d270; end: 10071d2c3;  */

void FUN_10071d270(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10071d2c4; end: 10071d2d3;  */

void FUN_10071d2c4(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_10033160c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  puVar2 = PTR_PTR_1126aca48;
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
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar7 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar8 = 0x697461676976616e;
  func_0x000107c5fadc(0x697461676976616e,0xef65706f63536e6f);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  uVar9 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar8 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar8 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef2c420);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar8 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010ef2dc90);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar8 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f10afb0);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  uVar8 = uVar9;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  *(undefined8 *)(lVar1 + 0x38) = uVar8;
  *param_1 = lVar1;
  return;
}



/* Entry: 10071d2d4; end: 10071d617;  */

void FUN_10071d2d4(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
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
  FUN_10033160c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  puVar1 = PTR_PTR_1126aca48;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar6 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar7 = 0x697461676976616e;
  func_0x000107c5fadc(0x697461676976616e,0xef65706f63536e6f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  uVar8 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar2);
  func_0x000107c61174();
  uVar7 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar7 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef2c420);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar7 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010ef2dc90);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar7 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f10afb0);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  uVar7 = uVar8;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined8 *)(param_2 + 0x38) = uVar7;
  *param_1 = param_2;
  return;
}



/* Entry: 10071d618; end: 10071d777; -[SCPremiumStoryShareSendingServiceProvider provide] */

void FUN_10071d618(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  puStack_70 = &UNK_1069158d4;
  puStack_68 = &UNK_11094a0c0;
  func_0x000107c6111c(auStack_60,auStack_58);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_88,auStack_58);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126cf020;
  func_0x000107c610f4(PTR_PTR_1126cf020);
  func_0x000107c48030();
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_88);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_60);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10071d778; end: 10071d7ef; -[_TtC34SCPremiumStoryShareSendingServices34SCPremiumStoryShareSendingServices initWithPremiumStoryShareSender:premiumStoryConversationResolver:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10071d778(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112fef210) = param_3;
  *(undefined8 *)(param_1 + _DAT_112fef218) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 10071d7f0; end: 10071d833;  */

void FUN_10071d7f0(void)

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



/* Entry: 10071d834; end: 10071d883;  */

void FUN_10071d834(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10071d884; end: 10071d91b;  */

void FUN_10071d884(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_1002ad1cc();
  func_0x000107c613fc();
  FUN_10071d92c(uStack_48,uStack_50,uStack_58);
  *param_1 = param_2;
  return;
}



/* Entry: 10071d91c; end: 10071d92b;  */

void FUN_10071d91c(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 10071d92c; end: 10071da93;  */

void FUN_10071d92c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  FUN_1000285a8(0x112e13838,&UNK_10d9ef7f8);
  func_0x000107c610f8();
  uVar1 = param_2;
  func_0x000107c6157c(param_2);
  FUN_10017da58();
  puVar2 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  FUN_1000285a8(0x112e13840,&UNK_10d9ef800);
  func_0x000107c610f8();
  uVar1 = param_3;
  func_0x000107c6157c(param_3);
  FUN_10017da58();
  puVar2 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x20) = puVar2;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x00010071dad4(0);
  func_0x000107c613fc();
  func_0x000107c61174(puVar2);
  func_0x000107c61174();
  func_0x000107c61174(uVar3);
  uVar1 = param_1;
  FUN_10071db50(param_1,uVar3,puVar2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar3 = uVar1;
  func_0x000107c6157c();
  FUN_10071db84();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61574(param_2);
  func_0x000107c61574(param_3);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar3;
  return;
}



/* Entry: 10071da94; end: 10071db4f;  */

void FUN_10071da94(void)

{
  func_0x000107c61168(&PTR_PTR_1128008d0);
  return;
}



/* Entry: 10071db50; end: 10071db83;  */

void FUN_10071db50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c61170();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  return;
}



/* Entry: 10071db84; end: 10071dd17;  */

void FUN_10071db84(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 *unaff_x20;
  undefined8 uVar8;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  ppuVar4 = &puStack_90;
  ppuVar6 = &puStack_90;
  uVar8 = *unaff_x20;
  uVar7 = unaff_x20[2];
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar3 = &UNK_110467488;
  func_0x000107c613fc(&UNK_110467488,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(undefined8 *)(puVar3 + 0x18) = uVar8;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_70 = &UNK_101cb727c;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_101cb7450;
  puStack_78 = &UNK_1104674a0;
  puStack_68 = puVar3;
  func_0x000107c60bc4(&puStack_90);
  puVar3 = puStack_68;
  func_0x000107c61174(uVar7);
  func_0x000107c61574(puVar3);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  uVar7 = unaff_x20[3];
  puVar3 = &UNK_1104674d8;
  func_0x000107c613fc(&UNK_1104674d8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(undefined8 *)(puVar3 + 0x18) = uVar8;
  puVar5 = PTR_PTR_1126a8e88;
  func_0x000107c610f8(PTR_PTR_1126a8e88);
  puStack_70 = &UNK_101cb7490;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_101cb772c;
  puStack_78 = &UNK_1104674f0;
  puStack_68 = puVar3;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c61174(uVar7);
  func_0x000107c46ea4(puVar5);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61574(puStack_68);
  uVar7 = 0;
  FUN_1002ad258(0);
  func_0x000107c610f8();
  FUN_10071dddc(puVar2,puVar5,uVar7);
  return;
}


