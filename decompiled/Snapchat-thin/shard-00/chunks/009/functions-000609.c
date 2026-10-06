/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100ba7c24; end: 100ba7d1b;  */

undefined * FUN_100ba7c24(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  
  puVar9 = *(undefined **)(param_1 + 0x10);
  puVar4 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar9 != (undefined *)0x0) {
    uVar7 = 0;
    FUN_1000285a8(0x112f143d8);
    puVar4 = puVar9;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar11 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar5 = puVar11[-2];
      uVar2 = puVar11[-1];
      uVar10 = *puVar11;
      func_0x000107c61174();
      func_0x000107c61434(uVar10);
      uVar6 = uVar5;
      FUN_100bd0a8c();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100ba7d18);
        (*pcVar3)();
      }
      uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar4 + uVar8 + 0x40) = *(ulong *)(puVar4 + uVar8 + 0x40) | 1L << (uVar6 & 0x3f);
      *(ulong *)(*(long *)(puVar4 + 0x30) + uVar6 * 8) = uVar5;
      puVar1 = (undefined8 *)(*(long *)(puVar4 + 0x38) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar10;
      if (SCARRY8(*(long *)(puVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100ba7d1c);
        (*pcVar3)();
      }
      *(long *)(puVar4 + 0x10) = *(long *)(puVar4 + 0x10) + 1;
      puVar9 = puVar9 + -1;
      puVar11 = puVar11 + 3;
    } while (puVar9 != (undefined *)0x0);
    func_0x000107c61574(puVar4);
  }
  return puVar4;
}



/* Entry: 100ba7d1c; end: 100ba7d37;  */

void FUN_100ba7d1c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  func_0x000107c615f0();
  return;
}



/* Entry: 100ba7d38; end: 100ba825b; -[SCFriendsFeedDataServicesEntryPoint _personDataCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ba7d38(long param_1,undefined8 param_2)

{
  long lVar1;
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
  undefined *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined *puVar22;
  long lVar23;
  long lVar24;
  
  lVar24 = (long)_DAT_112749348;
  lVar1 = param_1 + lVar24;
  func_0x000107c61148();
  lVar2 = lVar1;
  func_0x000107c5b4b0();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + lVar24;
  func_0x000107c61148();
  lVar3 = lVar1;
  func_0x000107c5b484();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_11274934c;
  func_0x000107c61148();
  lVar4 = lVar1;
  func_0x000107c5d9b0();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_112749350;
  func_0x000107c61148();
  lVar5 = lVar1;
  func_0x000107c5da30();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_112749310;
  func_0x000107c61148();
  lVar6 = lVar1;
  func_0x000107c5b374();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_112749354;
  func_0x000107c61148();
  lVar7 = lVar1;
  func_0x000107c3e550();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_112749358;
  func_0x000107c61148();
  lVar8 = lVar1;
  func_0x000107c51d3c();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_11274931c;
  func_0x000107c61148();
  lVar9 = lVar1;
  func_0x000107c3f874();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_112749318;
  func_0x000107c61148();
  lVar10 = lVar1;
  func_0x000107c5da60();
  func_0x000107c61180();
  lVar11 = lVar10;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + lVar24;
  func_0x000107c61148();
  lVar10 = lVar1;
  func_0x000107c5b478();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_112749338;
  func_0x000107c61148();
  lVar12 = lVar1;
  func_0x000107c5bf3c();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  puVar13 = PTR_PTR_1126cb1c0;
  func_0x000107c610f4(PTR_PTR_1126cb1c0);
  func_0x000107c48820();
  lVar1 = param_1 + lVar24;
  func_0x000107c61148();
  lVar14 = lVar1;
  func_0x000107c5b4bc();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_11274935c;
  func_0x000107c61148();
  lVar15 = lVar1;
  func_0x000107c439f4();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = lVar14;
  func_0x000107c5c734(lVar14);
  func_0x000107c61180();
  func_0x000107c3d740();
  func_0x000107c61170(lVar1);
  lVar1 = lVar15;
  func_0x000107c5c734(lVar15);
  func_0x000107c61180();
  func_0x000107c3d740();
  func_0x000107c61170(lVar1);
  lVar23 = (long)_DAT_112749360;
  lVar1 = param_1 + lVar23;
  func_0x000107c61148();
  lVar16 = lVar1;
  func_0x000107c4456c();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_112749304;
  func_0x000107c61148(lVar1);
  lVar17 = lVar1;
  func_0x000107c421c8();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_1127492dc;
  func_0x000107c61148(lVar1);
  lVar18 = lVar1;
  func_0x000107c443dc();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar24 = param_1 + lVar24;
  func_0x000107c61148(lVar24);
  lVar19 = lVar24;
  func_0x000107c3eb20();
  func_0x000107c61180();
  func_0x000107c61170(lVar24);
  lVar1 = param_1 + _DAT_112749300;
  func_0x000107c61148();
  lVar20 = lVar1;
  func_0x000107c4cdb8();
  func_0x000107c61180();
  lVar21 = lVar20;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar24 = lVar21;
  func_0x000107c41ee4();
  func_0x000107c61170(lVar21);
  func_0x000107c61170(lVar20);
  func_0x000107c61170(lVar1);
  puVar22 = PTR_PTR_1126cb158;
  func_0x000107c610f4();
  func_0x000107c47e74();
  func_0x000107c3d934(puVar13,param_2,puVar22);
  if ((int)lVar24 != 0) {
    param_1 = param_1 + lVar23;
    func_0x000107c61148(param_1);
    lVar1 = param_1;
    func_0x000107c44574();
    func_0x000107c61180();
    lVar24 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c3d740();
    func_0x000107c61170(lVar24);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(param_1);
  }
  func_0x000107c61170(lVar19);
  func_0x000107c61170(lVar18);
  func_0x000107c61170(lVar17);
  func_0x000107c61170(lVar16);
  func_0x000107c61170(lVar15);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar22);
  return;
}



/* Entry: 100ba825c; end: 100ba8263; -[SCChatEligibilityServices chatEligibilityProvider] */

undefined8 FUN_100ba825c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100ba8264; end: 100ba8633; -[SCFeedSnapchattersRepository initWithSnapchatterDataFetcher:snapchatterPublicInfoFetcher:snapchattersObservableRepository:userInfoProvider:lazyUserSnapPrivacyProvider:snapProUserProfileIdProvider:bitmojiAvatarProvider:bitmojiSelfieProvider:chatEligibilityProvider:userId:graphene:storiesConfigProvider:] */

undefined8 *
FUN_100ba8264(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
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
  puStack_70 = PTR_PTR_1126f1818;
  puVar2 = &uStack_78;
  uStack_78 = param_1;
  func_0x000107c61154(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = PTR_PTR_1126b45a0;
    func_0x000107c61160();
    uVar6 = puVar2[8];
    puVar2[8] = puVar3;
    func_0x000107c61170(uVar6);
    func_0x000107c61174(param_3);
    uVar6 = puVar2[1];
    puVar2[1] = param_3;
    func_0x000107c61170(uVar6);
    func_0x000107c61174(param_4);
    uVar6 = puVar2[2];
    puVar2[2] = param_4;
    func_0x000107c61170(uVar6);
    func_0x000107c61174(param_11);
    uVar6 = puVar2[4];
    puVar2[4] = param_11;
    func_0x000107c61170(uVar6);
    func_0x000107c61174(param_6);
    uVar6 = puVar2[3];
    puVar2[3] = param_6;
    func_0x000107c61170(uVar6);
    func_0x000107c61174(param_12);
    uVar6 = puVar2[5];
    puVar2[5] = param_12;
    func_0x000107c61170(uVar6);
    puVar3 = PTR_PTR_1126cb178;
    func_0x000107c610f4();
    func_0x000107c46a78();
    uVar6 = puVar2[6];
    puVar2[6] = puVar3;
    func_0x000107c61170(uVar6);
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c610fc();
    uVar6 = puVar2[7];
    puVar2[7] = puVar3;
    func_0x000107c61170(uVar6);
    func_0x000107c61144(auStack_80,puVar2);
    puVar1 = PTR_PTR_1126aeec0;
    puVar3 = PTR_PTR_1126ae960;
    puVar4 = PTR_PTR_1126b2990;
    func_0x000107c5b16c(PTR_PTR_1126b2990);
    func_0x000107c61180();
    func_0x000107c4074c(puVar3);
    func_0x000107c61180();
    puVar5 = PTR_PTR_1126ae970;
    func_0x000107c44e60(PTR_PTR_1126ae970);
    func_0x000107c61180();
    func_0x000107c6111c(auStack_88,auStack_80);
    func_0x000107c61174(param_9);
    func_0x000107c61174(param_10);
    func_0x000107c61174(param_5);
    func_0x000107c3e2d4(puVar1);
    func_0x000107c611b0();
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar4);
    *(undefined1 *)(puVar2 + 9) = 1;
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_10);
    func_0x000107c61170(param_9);
    func_0x000107c61120(auStack_88);
    func_0x000107c61120(auStack_80);
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
  func_0x000107c61170(param_3);
  return puVar2;
}



/* Entry: 100ba8634; end: 100ba897b; -[SCFeedSnapchattersRepositoryGrapheneLogger initWithFriendsFeedGraphene:userSnapPrivacyProvider:snapProUserProfileIdProvider:storiesConfigProvider:] */

undefined8 *
FUN_100ba8634(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
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
  puStack_78 = PTR_PTR_1126f1820;
  puVar2 = &uStack_80;
  uStack_80 = param_1;
  func_0x000107c61154(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar3 = puVar2[1];
    puVar2[1] = param_3;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_5);
    uVar3 = puVar2[3];
    puVar2[3] = param_5;
    func_0x000107c61170(uVar3);
    puVar4 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    func_0x000107c470d0();
    uVar3 = puVar2[4];
    puVar2[4] = puVar4;
    func_0x000107c61170(uVar3);
    puVar4 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar3 = puVar2[5];
    puVar2[5] = puVar4;
    func_0x000107c61170(uVar3);
    func_0x000107c61144(auStack_88,puVar2);
    uVar3 = param_4;
    func_0x000107c5c734(param_4);
    func_0x000107c61180();
    uVar5 = uVar3;
    func_0x000107c5d6fc();
    func_0x000107c61180();
    uVar6 = uVar5;
    func_0x000107c4da88();
    func_0x000107c61180();
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_100bdff94;
    puStack_98 = &UNK_11084eff0;
    func_0x000107c6111c(auStack_90,auStack_88);
    uVar7 = uVar6;
    func_0x000107c5c320(uVar6);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar3);
    puVar9 = PTR_PTR_1126be840;
    puVar1 = PTR_PTR_1126aeec0;
    puVar4 = PTR_PTR_1126ae960;
    puVar8 = PTR_PTR_1126be848;
    func_0x000107c4ad94(PTR_PTR_1126be848);
    func_0x000107c61180();
    func_0x000107c5bf20(puVar9);
    func_0x000107c61180();
    func_0x000107c40418(puVar4);
    func_0x000107c61180();
    puVar10 = PTR_PTR_1126ae970;
    func_0x000107c5d9b8(PTR_PTR_1126ae970);
    func_0x000107c61180();
    func_0x000107c6111c(auStack_b8,auStack_88);
    func_0x000107c3e2d8(puVar1);
    func_0x000107c611b0();
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(puVar8);
    func_0x000107c61120(auStack_b8);
    func_0x000107c61120(auStack_90);
    func_0x000107c61120(auStack_88);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar2;
}



/* Entry: 100ba897c; end: 100ba89bb;  */

void FUN_100ba897c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3c854();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 100ba89bc; end: 100ba8ae7; -[SCUserInfoServicesEntryPoint _snapPrivacyProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ba89bc(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + _DAT_112722ebc);
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf6f8;
  func_0x000107c5c1d4(&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf6f8);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae750;
  func_0x000107c4d73c(PTR_PTR_1126ae750);
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112722ee4);
  func_0x000107c421ac(uVar3);
  func_0x000107c61180();
  func_0x000107c407c8(uVar5,param_2,0xb,ppuVar1,puVar2,uVar3,&PTR___NSConcreteGlobalBlock_1108856f8)
  ;
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(ppuVar1);
  puVar2 = PTR_PTR_1126b88e0;
  func_0x000107c610f4(PTR_PTR_1126b88e0);
  param_1 = param_1 + _DAT_112722f04;
  func_0x000107c61148(param_1);
  lVar4 = param_1;
  func_0x000107c444a4();
  func_0x000107c61180();
  func_0x000107c46bcc(puVar2,param_2,lVar4,0xb,uVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100ba8ae8; end: 100ba8b47;  */

void FUN_100ba8ae8(undefined8 param_1,int param_2)

{
  FUN_1007f98b8();
  if (param_2 == 2) {
    func_0x000107c42b14(PTR_PTR_1126b29b8);
    func_0x000107c61180();
  }
  else if (param_2 == 1) {
    func_0x000107c43a64();
    func_0x000107c61180();
  }
  else {
    func_0x000107c5d26c();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ba8b48; end: 100ba8b93; +[SCUserSnapPrivacy friends] */

void FUN_100ba8b48(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b29b8;
  func_0x000107c610f4();
  puVar2 = puVar1;
  func_0x000107c498b8();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100ba8b94; end: 100ba8bd7; -[SCUserSnapPrivacy internalInit] */

void FUN_100ba8b94(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x000107c61174();
  puStack_28 = PTR_PTR_11270e0f0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ba8bd8; end: 100ba8c5f; -[SCUserSnapPrivacy isEqual:] */

bool FUN_100ba8bd8(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  func_0x000107c61174(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      func_0x000107c61158(param_1);
      uVar3 = param_3;
      func_0x000107c6115c(param_3,uVar2);
      if ((uVar3 & 1) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 8) == *(long *)(param_3 + 8);
      }
    }
  }
  func_0x000107c61170(param_3);
  return bVar1;
}



/* Entry: 100ba8c60; end: 100ba8c67; +[SCAttributedConvoTask snapChattersRepository] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ba8c60(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309b1f0) = 9;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ba8c68; end: 100ba8c6f; -[SCSnapchatterServices blockedSnapchatterSynchronousFetcher] */

undefined8 FUN_100ba8c68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 100ba8c70; end: 100ba8c87; -[SCMessagingExperimentServiceImpl disableLegacyGroupsFeedDataCoordinator] */

void FUN_100ba8c70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110de8f58,0,0);
  return;
}



/* Entry: 100ba8c88; end: 100ba900b; -[SCPersonDataCoordinator initWithPersonRepository:groupsDataFetcher:docObjectContext:ghostToFeedLogger:userId:blockedSnapchattersSynchronousDataFetcher:snapchattersObservableRepository:disableLegacyGroupsFeedDataCoordinator:] */

undefined8 *
FUN_100ba8c88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  puStack_68 = PTR_PTR_1126f1828;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[4];
    puVar1[4] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[5];
    puVar1[5] = param_4;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126b4990;
    func_0x000107c61160();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[1];
    puVar1[1] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[6];
    puVar1[6] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[7];
    puVar1[7] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[8];
    puVar1[8] = param_8;
    func_0x000107c61170(uVar2);
    *(undefined1 *)(puVar1 + 0xc) = param_10;
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61180();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61180();
    func_0x000107c45454();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar4);
    func_0x000107c61144(auStack_78,puVar1);
    puVar4 = PTR_PTR_1126aeec0;
    puVar3 = PTR_PTR_1126ae960;
    puVar5 = PTR_PTR_1126b2990;
    func_0x000107c4e670(PTR_PTR_1126b2990);
    func_0x000107c61180();
    func_0x000107c4074c(puVar3);
    func_0x000107c61180();
    puVar6 = PTR_PTR_1126ae970;
    func_0x000107c44e60(PTR_PTR_1126ae970);
    func_0x000107c61180();
    func_0x000107c6111c(auStack_80,auStack_78);
    func_0x000107c61174(param_9);
    func_0x000107c3e2d4(puVar4);
    func_0x000107c611b0();
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(param_9);
    func_0x000107c61120(auStack_80);
    func_0x000107c61120(auStack_78);
  }
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100ba900c; end: 100ba9013; +[SCAttributedConvoTask personDataCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ba900c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309b1f0) = 7;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ba9014; end: 100ba901b; -[SCFeedSnapchattersRepository addUpdateListener:] */

void FUN_100ba9014(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 100ba901c; end: 100ba916b; -[SCFriendsFeedDataServicesEntryPoint _presenceInfoDataProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ba901c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar7 = (long)_DAT_112749364;
  lVar1 = param_1 + lVar7;
  func_0x000107c61148(lVar1);
  lVar2 = lVar1;
  func_0x000107c4ee78();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar7 = param_1 + lVar7;
  func_0x000107c61148(lVar7);
  lVar3 = lVar7;
  func_0x000107c3efb8();
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  lVar1 = param_1 + _DAT_112749368;
  func_0x000107c61148(lVar1);
  lVar7 = lVar1;
  func_0x000107c42e5c();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  param_1 = param_1 + _DAT_11274936c;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3f770();
  func_0x000107c61180();
  lVar4 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar5 = lVar4;
  func_0x000107c41574();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_1);
  puVar6 = PTR_PTR_1126cb1c8;
  func_0x000107c610f4(PTR_PTR_1126cb1c8);
  func_0x000107c45b70();
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 100ba916c; end: 100ba9173; -[SCTalkServices presenceStateProvider] */

undefined8 FUN_100ba916c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100ba9174; end: 100ba933b;  */

void FUN_100ba9174(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c3f768();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  uVar1 = uVar2;
  func_0x000107c5bf0c();
  puVar7 = PTR_PTR_1126de3a0;
  uVar9 = *(undefined8 *)(param_1 + 0x28);
  if ((int)uVar1 == 3) {
    uVar8 = *(undefined8 *)(param_1 + 0x30);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c5c734(uVar3);
    func_0x000107c61180();
    uVar4 = uVar3;
    func_0x000107c3d974();
    func_0x000107c61180();
    uVar11 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    func_0x000107c5c734(uVar5);
    func_0x000107c61180();
    uVar6 = uVar5;
    func_0x000107c4b1a4();
    func_0x000107c61180();
    func_0x000107c3b024(puVar7,param_2,uVar9,uVar8,uVar4,uVar1,uVar11,uVar6,
                        *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50));
    func_0x000107c61180();
  }
  else {
    uVar11 = *(undefined8 *)(param_1 + 0x58);
    uVar8 = *(undefined8 *)(param_1 + 0x30);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c5c734(uVar3);
    func_0x000107c61180();
    uVar4 = uVar3;
    func_0x000107c3d974();
    func_0x000107c61180();
    uVar10 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar6 = uVar5;
    func_0x000107c4b1a4();
    func_0x000107c61180();
    func_0x000107c3b028(puVar7,param_2,uVar9,uVar11,uVar8,uVar4,uVar1,uVar10,uVar6,
                        *(undefined8 *)(param_1 + 0x50));
    func_0x000107c61180();
  }
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 100ba933c; end: 100ba9357; -[SCLensDataConfigProvider centralizedDataStoreConfig] */

void FUN_100ba933c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x38),PTR_s_target_112678178);
  return;
}



/* Entry: 100ba9358; end: 100ba940b; +[SCLensDataConfigProvider _centralizedDataStoreWithConfigProvider:] */

void FUN_100ba9358(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar1 = param_3;
  func_0x000107c4f558();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5dc0c();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_3);
  if (lVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126bc068;
    func_0x000107c610f4(PTR_PTR_1126bc068);
    func_0x000107c4636c();
  }
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100ba940c; end: 100ba94ef; +[SCLensMetadataCentralizedStoreConfig descriptor] */

void FUN_100ba940c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8f00 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb29a0,
                        &PTR____CFConstantStringClassReference_110f76b98,&PTR_DAT_1133c9018,
                        &PTR_DAT_1133c9030,4,0x10,0x1c);
    puRam00000001137f8f00 = puVar1;
  }
  return;
}



/* Entry: 100ba94f0; end: 100ba9557; +[SCCustomMetadataStoreConfig descriptor] */

void FUN_100ba94f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8ef8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb2950,
                        &PTR____CFConstantStringClassReference_110f76b78,&PTR_DAT_1133c9018,
                        &PTR_DAT_1133c90b0,5,0x28,0x1c);
    puRam00000001137f8ef8 = puVar1;
  }
  return;
}



/* Entry: 100ba9558; end: 100ba9563;  */

bool FUN_100ba9558(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 100ba9564; end: 100ba962f; -[SCLensDataConfigProvider additionalCacheNamespaces] */

void FUN_100ba9564(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126bc050;
  func_0x000107c3bec4(PTR_PTR_1126bc050);
  func_0x000107c61180();
  uVar3 = uVar1;
  func_0x000107c5c1dc(uVar1,param_2,&PTR____CFConstantStringClassReference_110df0778,puVar2,0);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar1);
  uVar1 = uVar3;
  func_0x000107c3ff54(uVar3,param_2,&PTR____CFConstantStringClassReference_110db3ed8);
  func_0x000107c61180();
  uVar4 = uVar1;
  func_0x000107c4c284();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 100ba9630; end: 100ba9673; +[SCLensDataConfigProvider _mainNamespacesString] */

void FUN_100ba9630(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c51804(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110df0a78);
  return;
}



/* Entry: 100ba9674; end: 100ba970b; -[SCPreferences setAdvertiserId:] */

/* WARNING: Possible PIC construction at 0x000100ba96f4: Changing call to branch */

void FUN_100ba9674(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  
  func_0x000107c61174(param_3);
  puVar1 = param_3;
  func_0x000107c4adac();
  if (puVar1 != (undefined *)0x0) {
    func_0x000107c56bd8(param_1,param_2,param_3,&PTR____CFConstantStringClassReference_110ee8978);
    param_3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c4101c(PTR_PTR_1126afec0);
    func_0x000107c4d954(param_3);
    func_0x000107c61180();
    func_0x000107c56bd8(param_1,param_2,param_3,&PTR____CFConstantStringClassReference_110ee8998);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100ba970c; end: 100ba9757;  */

void FUN_100ba970c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c5c190();
  func_0x000107c61180();
  lVar2 = param_2;
  func_0x000107c4adac();
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = param_2;
  }
  func_0x000107c61174(lVar1);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 100ba9758; end: 100ba9897; +[SCLensScheduleNamespaceServiceEntryPoint _centralizedMetadataStoreFactoryWithLensDataFetcher:storeProvider:scheduleServiceProvider:additionalCacheNamespaces:applicationLifecycleEvents:lensDataConfig:graphene:performerProvider:] */

void FUN_100ba9758(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126de4a0;
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  puVar2 = PTR_PTR_1126c8c48;
  func_0x000107c4d428(PTR_PTR_1126c8c48);
  func_0x000107c61180();
  func_0x000107c47364(puVar1,param_2,param_3,param_4,param_5,puVar2,param_6,param_7,param_8,param_9,
                      param_10);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100ba9898; end: 100ba9bcf; -[SCLensCentralizedDataStoreFactory initWithLensMetadataFetcher:metadataStoreProvider:scheduleServiceProvider:customNamespaceNames:additionalCacheNamespaces:applicationLifecycleEvents:lensDataConfig:graphene:performerProvider:] */

undefined8 *
FUN_100ba9898(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  puStack_78 = PTR_PTR_112701550;
  puVar1 = &uStack_80;
  uStack_80 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[4];
    puVar1[4] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[5];
    puVar1[5] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[2];
    puVar1[2] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[3];
    puVar1[3] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_11);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_11;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_9;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    func_0x000107c61170(uVar2);
    *(undefined4 *)(puVar1 + 0xe) = 0;
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41998();
    func_0x000107c61180();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41998();
    func_0x000107c61180();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_3);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_10);
    func_0x000107c61174(param_11);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126de298;
    func_0x000107c610f4();
    func_0x000107c4723c();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c3c998(puVar1);
    func_0x000107c61170(param_11);
    func_0x000107c61170(param_10);
    func_0x000107c61170(param_3);
  }
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



/* Entry: 100ba9bd0; end: 100ba9c93; -[SCCentralizedStoreConfigProvider initWithLensDataConfig:] */

undefined1 * FUN_100ba9bd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_112701548;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar4 = param_3;
    func_0x000107c5c734(param_3);
    func_0x000107c61180();
    uVar2 = uVar4;
    func_0x000107c3f768();
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    puVar3 = PTR_PTR_1126de298;
    func_0x000107c3b02c();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100ba9c94; end: 100ba9d3f; +[SCCentralizedStoreConfigProvider _centralizedStoreConfigWithConfig:] */

void FUN_100ba9c94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000107c5bf0c(param_3);
  func_0x000107c3cda8(param_1,param_2,uVar1);
  uVar1 = param_3;
  func_0x000107c5bed8(param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  func_0x000107c3c928(param_1,param_2,uVar1);
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  puVar2 = PTR_PTR_1126de2a0;
  func_0x000107c610f4(PTR_PTR_1126de2a0);
  func_0x000107c4948c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100ba9d40; end: 100ba9d57; +[SCCentralizedStoreConfigProvider _variantFromProtoVariant:] */

undefined1 FUN_100ba9d40(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined1 uVar1;
  
  uVar1 = 2;
  if (param_3 != 3) {
    uVar1 = param_3 == 2;
  }
  return uVar1;
}



/* Entry: 100ba9d58; end: 100ba9e27; +[SCCentralizedStoreConfigProvider _storesConfigurationWithProtoStoresConfiguration:] */

void FUN_100ba9d58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc0000000;
  pcStack_48 = FUN_100ba9f8c;
  puStack_40 = &UNK_110c8d080;
  uStack_38 = param_1;
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000107c40808(param_3);
  func_0x000107c41998(puVar2,param_2,uVar1);
  func_0x000107c61180();
  uVar1 = param_3;
  func_0x000107c4fb38(param_3,param_2,&puStack_58,puVar2);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  uVar3 = uVar1;
  func_0x000107c40794(uVar1);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 100ba9e28; end: 100ba9f8b;  */

void FUN_100ba9e28(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar6 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_4);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  func_0x000107c61174(param_1);
  lVar1 = param_1;
  func_0x000107c4080c();
  lVar2 = param_4;
  if (lVar1 != 0) {
    lVar8 = *plStack_120;
    do {
      lVar9 = 0;
      lVar7 = lVar2;
      do {
        if (*plStack_120 != lVar8) {
          func_0x000107c61128(param_1);
        }
        lVar2 = param_3;
        param_2 = lVar7;
        (**(code **)(param_3 + 0x10))(param_3,lVar7,*(undefined8 *)(lStack_128 + lVar9 * 8));
        func_0x000107c61180();
        func_0x000107c61170(lVar7);
        lVar9 = lVar9 + 1;
        lVar7 = lVar2;
      } while (lVar1 != lVar9);
      lVar1 = param_1;
      puVar6 = &uStack_130;
      func_0x000107c4080c();
    } while (lVar1 != 0);
  }
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_4);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    lVar2 = param_2;
    func_0x000107c60e78();
    func_0x000107c61174(lVar2);
    func_0x000107c61174(puVar6);
    puVar3 = (undefined1 *)puVar6;
    func_0x000107c4d420();
    func_0x000107c61180();
    puVar4 = puVar3;
    func_0x000107c4adac();
    if (puVar4 != (undefined1 *)0x0) {
      uVar5 = *(undefined8 *)(param_3 + 0x20);
      func_0x000107c3b3f4(uVar5);
      func_0x000107c61180();
      func_0x000107c56bd8(lVar2);
      func_0x000107c61170(uVar5);
    }
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 100ba9f8c; end: 100baa027;  */

void FUN_100ba9f8c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  lVar1 = param_3;
  func_0x000107c4d420();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c4adac();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c3b3f4(uVar3);
    func_0x000107c61180();
    func_0x000107c56bd8(param_2);
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 100baa028; end: 100baa0d7; +[SCCentralizedStoreConfigProvider _customNamespaceConfigWithProtoConfig:] */

void FUN_100baa028(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  func_0x000107c61174(param_3);
  lVar1 = param_3;
  func_0x000107c4fdac(param_3);
  puVar2 = PTR_PTR_1126de2a8;
  func_0x000107c610f4(PTR_PTR_1126de2a8);
  lVar3 = param_3;
  func_0x000107c3ef40(param_3);
  lVar4 = param_3;
  func_0x000107c4fdac(param_3);
  lVar5 = param_3;
  func_0x000107c4ccf4(param_3);
  lVar6 = param_3;
  func_0x000107c452e0(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c45b40(puVar2,param_2,lVar3,lVar4,lVar5,lVar6,lVar1 < 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100baa0d8; end: 100baa14b; -[SCLensCustomNamespaceStoreConfig initWithCacheTtlSec:reloadTtlSec:memoryCacheLimit:includeOtherNamespaces:resetAccessDate:] */

void FUN_100baa0d8(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined1 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1127017d0;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0xc) = param_3;
    *(undefined4 *)((long)puVar1 + 0x10) = param_4;
    *(undefined4 *)((long)puVar1 + 0x14) = param_5;
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    *(undefined1 *)((long)puVar1 + 9) = param_7;
  }
  return;
}



/* Entry: 100baa14c; end: 100baa1d3; -[SCLensCentralizedStoreConfig initWithVariant:storesConfiguration:] */

undefined1 *
FUN_100baa14c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1127017d8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 100baa1d4; end: 100baa337; -[SCLensCentralizedDataStoreFactory _subscribeOnAppLifecycleEvents:] */

void FUN_100baa1d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61144(auStack_58,param_1);
  uVar1 = param_3;
  func_0x000107c41b80(param_3);
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  func_0x000107c5c734(uVar2);
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c49824();
  func_0x000107c61180();
  uVar4 = uVar1;
  func_0x000107c4da88(uVar1);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_60,auStack_58);
  uVar5 = uVar4;
  func_0x000107c5c320(uVar4);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_60);
  func_0x000107c61120(auStack_58);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100baa338; end: 100baa33f; -[SCLensBasePerformerProvider intensiveWorkQueuePerformer] */

void FUN_100baa338(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_target_112678178);
  return;
}



/* Entry: 100baa340; end: 100baa373;  */

void FUN_100baa340(void)

{
  func_0x000107c610f4(PTR_PTR_1126ae790);
  func_0x000107c470d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100baa374; end: 100baa3cf; -[SCLensCentralizedDataStoreFactory defaultCentralizedDataStore] */

void FUN_100baa374(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c8c48;
  func_0x000107c415e8(PTR_PTR_1126c8c48);
  func_0x000107c61180();
  func_0x000107c3b01c(param_1,param_2,puVar1,1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 100baa3d0; end: 100baa3fb; +[SCLensCustomNamespace defaultName] */

void FUN_100baa3d0(void)

{
  func_0x000107c5fadc(0xd000000000000018,0x800000010f1d3720);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100baa3fc; end: 100baa503; -[SCLensCentralizedDataStoreFactory _centralizedDataStoreForCustomNamespace:useCache:] */

void FUN_100baa3fc(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  func_0x000107c61174(param_3);
  lVar3 = param_3;
  func_0x000107c4adac();
  if (lVar3 != 0) {
    puVar1 = PTR_PTR_1126c8c48;
    func_0x000107c4d428();
    func_0x000107c61180();
    puVar2 = puVar1;
    func_0x000107c40404();
    func_0x000107c61170(puVar1);
    if ((int)puVar2 != 0) {
      func_0x000107c611ec(param_1 + 0x70);
      lVar3 = *(long *)(param_1 + 0x38);
      func_0x000107c4d9e8(lVar3,param_2,param_3);
      func_0x000107c61180();
      if (lVar3 == 0) {
        if ((param_4 & 1) == 0) {
          lVar3 = *(long *)(param_1 + 0x48);
          func_0x000107c61174(lVar3);
        }
        else {
          lVar3 = param_1;
          func_0x000107c3b1f4(param_1,param_2,param_3);
          func_0x000107c61180();
        }
        func_0x000107c56bd8(*(undefined8 *)(param_1 + 0x38),param_2,lVar3,param_3);
      }
      func_0x000107c611f0(param_1 + 0x70);
      goto LAB_100baa4d0;
    }
  }
  lVar3 = 0;
LAB_100baa4d0:
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 100baa504; end: 100baa82b; -[SCLensCentralizedDataStoreFactory _createCentralizedDataStoreForCustomNamespace:] */

void FUN_100baa504(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  uVar10 = *(undefined8 *)(param_1 + 0x60);
  func_0x000107c61174(uVar10);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x000107c4d404(uVar1,param_2,param_3);
  func_0x000107c61180();
  lVar2 = param_1;
  func_0x000107c3b3f8(param_1,param_2,param_3,*(undefined8 *)(param_1 + 0x20),uVar1);
  func_0x000107c61180();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_88 = lVar2;
  func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_88,1);
  func_0x000107c61180();
  uVar11 = uVar1;
  func_0x000107c452d4();
  puVar4 = puVar9;
  if ((int)uVar11 != 0) {
    lVar3 = param_1;
    func_0x000107c3ad40(param_1,param_2,param_3);
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c3e164(puVar9,param_2,lVar3);
      func_0x000107c61180();
      func_0x000107c61170(puVar9);
    }
    func_0x000107c61170(lVar3);
  }
  puVar5 = PTR_PTR_1126ae720;
  puVar9 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  puStack_a8 = &UNK_10ae969c4;
  puStack_a0 = &UNK_110c8d100;
  puStack_98 = puVar4;
  func_0x000107c61174(uVar10);
  uStack_90 = uVar10;
  func_0x000107c61174(puVar4);
  func_0x000107c3e4fc(puVar5,param_2,&puStack_b8);
  func_0x000107c61180();
  uVar12 = *(undefined8 *)(param_1 + 0x48);
  func_0x000107c61174(uVar12);
  uVar13 = *(undefined8 *)(param_1 + 0x68);
  func_0x000107c61174(uVar13);
  puVar6 = PTR_PTR_1126ae720;
  puStack_100 = puVar9;
  uStack_f8 = 0xc2000000;
  puStack_f0 = &UNK_10ae96a44;
  puStack_e8 = &UNK_110c8d130;
  uStack_e0 = uVar13;
  puStack_d8 = puVar5;
  uStack_d0 = uVar12;
  lStack_c8 = lVar2;
  uStack_c0 = uVar10;
  func_0x000107c61174(uVar10);
  func_0x000107c61174(lVar2);
  func_0x000107c61174(uVar12);
  func_0x000107c61174(puVar5);
  func_0x000107c61174(uVar13);
  func_0x000107c3e4fc(puVar6,param_2,&puStack_100);
  func_0x000107c61180();
  uVar11 = *(undefined8 *)(param_1 + 0x58);
  func_0x000107c61174(uVar11);
  puVar7 = PTR_PTR_1126ae720;
  puStack_130 = puVar9;
  uStack_128 = 0xc2000000;
  puStack_120 = &UNK_10ae96b08;
  puStack_118 = &UNK_110c8d160;
  puStack_110 = puVar6;
  uStack_108 = uVar11;
  func_0x000107c61174(uVar11);
  func_0x000107c61174(puVar6);
  ppuVar8 = &puStack_130;
  func_0x000107c3e4fc(puVar7,param_2,ppuVar8);
  func_0x000107c61180();
  func_0x000107c61170(uStack_108);
  func_0x000107c61170(puStack_110);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uStack_c0);
  func_0x000107c61170(lStack_c8);
  func_0x000107c61170(uStack_d0);
  func_0x000107c61170(puStack_d8);
  func_0x000107c61170(uStack_e0);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uStack_90);
  func_0x000107c61170(puStack_98);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar1);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    func_0x000107c60e78();
    puVar9 = *(undefined **)(param_3 + 8);
    func_0x000107c61174(ppuVar8);
    func_0x000107c5bf18();
    func_0x000107c61180();
    puVar7 = puVar9;
    func_0x000107c4d9e8();
    func_0x000107c61180();
    func_0x000107c61170(ppuVar8);
    func_0x000107c61170(puVar9);
    if (puVar7 == (undefined *)0x0) {
      puVar7 = PTR_PTR_1126de298;
      func_0x000107c3b440(PTR_PTR_1126de298);
      func_0x000107c61180();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 100baa82c; end: 100baa8b3; -[SCCentralizedStoreConfigProvider namespaceConfigForCustomNamespace:] */

void FUN_100baa82c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = *(undefined **)(param_1 + 8);
  func_0x000107c61174(param_3);
  func_0x000107c5bf18();
  func_0x000107c61180();
  puVar1 = puVar2;
  func_0x000107c4d9e8();
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  func_0x000107c61170(puVar2);
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126de298;
    func_0x000107c3b440(PTR_PTR_1126de298);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100baa8b4; end: 100baa8bb; -[SCLensCentralizedStoreConfig storesConfiguration] */

undefined8 FUN_100baa8b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100baa8bc; end: 100baaa2f; -[SCLensCentralizedDataStoreFactory _customServiceWithNamespaceName:metadataStoreProvider:namespaceConfig:] */

void FUN_100baa8bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c611e8(param_1 + 0x70);
  puVar1 = *(undefined **)(param_1 + 0x40);
  func_0x000107c4d9e8(puVar1,param_2,param_3);
  func_0x000107c61180();
  if (puVar1 == (undefined *)0x0) {
    uVar3 = *(undefined8 *)(param_1 + 0x58);
    func_0x000107c61174(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    puStack_80 = &UNK_10ae96bb4;
    puStack_78 = &UNK_110c8d190;
    func_0x000107c61174(param_3);
    uStack_70 = param_3;
    func_0x000107c61174(param_4);
    uStack_68 = param_4;
    func_0x000107c61174(param_5);
    uStack_60 = param_5;
    uStack_58 = uVar3;
    func_0x000107c61174(uVar3);
    func_0x000107c3e4fc(puVar2,param_2,&puStack_90);
    func_0x000107c61180();
    func_0x000107c56bd8(*(undefined8 *)(param_1 + 0x40),param_2,0,param_3);
    func_0x000107c61170(uStack_58);
    func_0x000107c61170(uStack_60);
    func_0x000107c61170(uStack_68);
    func_0x000107c61170(uStack_70);
    func_0x000107c61170(uVar3);
  }
  else {
    func_0x000107c61174(puVar1);
    puVar2 = puVar1;
  }
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100baaa30; end: 100baaa37; -[SCLensCustomNamespaceStoreConfig includeOtherNamespaces] */

undefined1 FUN_100baaa30(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 100baaa38; end: 100baac23; -[SCLensCentralizedDataStoreFactory _additionalCacheServicesForCustomNamespace:] */

void FUN_100baaa38(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000107c61174(param_3);
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x000107c4d2d4();
  func_0x000107c4ff80();
  lVar2 = lVar1;
  func_0x000107c40808();
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x100baab08;
    puStack_48 = &UNK_110c8d1f0;
    lStack_40 = param_1;
    func_0x000107c61174(param_3);
    lVar2 = lVar1;
    uStack_38 = param_3;
    func_0x000107c4c280(lVar1,param_2,&puStack_60);
    func_0x000107c61180();
    func_0x000107c61170(uStack_38);
  }
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 100baac24; end: 100baaddb; -[SCFriendsFeedPresenceInfoDataProvider initWithCallStateProvider:presenceStateProvider:plusFeatureGating:lensMetadataRetrieving:] */

undefined1 *
FUN_100baac24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_58 = PTR_PTR_1126f1830;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x000107c61160();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar4);
    puVar2 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    func_0x000107c61170(uVar4);
    puVar2 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    func_0x000107c61170(uVar4);
    puVar2 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61180();
    func_0x000107c470d0();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    func_0x000107c61170(uVar4);
    func_0x000107c61170(puVar3);
    func_0x000107c61174(param_3);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = param_3;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_4);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined8 *)((long)puVar1 + 0x68) = param_4;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_5);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined8 *)((long)puVar1 + 0x70) = param_5;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_6);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x78);
    *(undefined8 *)((long)puVar1 + 0x78) = param_6;
    func_0x000107c61170(uVar4);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100baaddc; end: 100bab087; -[SCFriendsFeedDataServicesEntryPoint _addFriendsDataCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100baaddc(long param_1)

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
  undefined *puVar10;
  long lVar11;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  lVar11 = (long)_DAT_112749348;
  lVar1 = param_1 + lVar11;
  func_0x000107c61148();
  lVar2 = lVar1;
  func_0x000107c5b4b0();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + lVar11;
  func_0x000107c61148();
  lVar3 = lVar1;
  func_0x000107c4d728();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_112749370;
  func_0x000107c61148();
  lVar4 = lVar1;
  func_0x000107c40324();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + lVar11;
  func_0x000107c61148(lVar1);
  lVar5 = lVar1;
  func_0x000107c5b4bc();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar11 = param_1 + lVar11;
  func_0x000107c61148(lVar11);
  lVar6 = lVar11;
  func_0x000107c452f4();
  func_0x000107c61180();
  func_0x000107c61170(lVar11);
  lVar1 = param_1 + _DAT_112749374;
  func_0x000107c61148();
  lVar11 = lVar1;
  func_0x000107c40340();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_1127492e8;
  func_0x000107c61148();
  lVar7 = lVar1;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_112749300;
  func_0x000107c61148();
  lVar8 = lVar1;
  func_0x000107c4cdb8();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  func_0x000107c61144(auStack_68,param_1);
  puVar9 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_70,auStack_68);
  func_0x000107c3e4fc(puVar9);
  func_0x000107c61180();
  puVar10 = PTR_PTR_1126cb1d0;
  func_0x000107c610f4(PTR_PTR_1126cb1d0);
  func_0x000107c48844();
  func_0x000107c61170(puVar9);
  func_0x000107c61120(auStack_70);
  func_0x000107c61120(auStack_68);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 100bab088; end: 100bab08f; -[SCSnapchatterServices nonSnapchattersDataFetcher] */

undefined8 FUN_100bab088(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 100bab090; end: 100bab097; -[SCContactPhotosServices contactPhotosService] */

undefined8 FUN_100bab090(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100bab098; end: 100bab09f; -[SCSnapchatterServices incomingFriendsRepository] */

undefined8 FUN_100bab098(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 100bab0a0; end: 100bab0a7; -[SCContactSyncCTAQualificationServices contactSyncCTAQualificationProvider] */

undefined8 FUN_100bab0a0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100bab0a8; end: 100bab3e7; -[SCDefaultFriendsFeedAddFriendsDataCoordinator initWithSnapchattersDataFetcher:nonSnapchattersDataFetcher:enableTwilioInvites:contactPhotosService:snapchattersDataTracking:incomingFriendsRepository:contactSyncCTAQualificationProvider:circumstanceEngine:messagingExperimentService:] */

undefined8 *
FUN_100bab0a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  puStack_68 = PTR_PTR_1126f1848;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
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
    uVar2 = puVar1[7];
    puVar1[7] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_9;
    func_0x000107c61170(uVar2);
    uVar2 = puVar1[7];
    func_0x000107c5c734(uVar2);
    func_0x000107c61180();
    func_0x000107c3d740();
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[8];
    puVar1[8] = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_11);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_11;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR____NSArray0__struct_11034ab48;
    uVar2 = puVar1[0xb];
    puVar1[0xb] = PTR____NSArray0__struct_11034ab48;
    func_0x000107c61170(uVar2);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    func_0x000107c61170(uVar2);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = puVar3;
    func_0x000107c61170(uVar2);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61180();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61180();
    func_0x000107c45454();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar4);
    puVar3 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar2 = puVar1[1];
    puVar1[1] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_10;
    func_0x000107c61170(uVar2);
  }
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



/* Entry: 100bab3e8; end: 100bab40f; -[SCChatConversationManager actionHandler] */

void FUN_100bab3e8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100bab410; end: 100bab41f; -[_TtC25SCStoriesPlaybackServices25SCStoriesPlaybackServices remoteStoriesDataProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bab410(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11307edc0));
  return;
}



/* Entry: 100bab420; end: 100bab427; -[SCFriendsFeedMessagingStoryReplayingServices storyReplayManager] */

undefined8 FUN_100bab420(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100bab428; end: 100bab42f; -[SCDiscoverFeedDataServices lazyDiscoverFeedDataFetcher] */

undefined8 FUN_100bab428(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100bab430; end: 100babd3f; -[SCFriendsFeedDataCoordinator initWithDocObjectContext:friendsFeedNativeDataProvider:friendsFeedNativeMultirecipientDataProvider:personDataCoordinator:storiesDataCoordinatorLazy:remoteStoriesDataProvider:sponsoredSnapAdResponseParser:presenceInfoDataProvider:pinnedConversationsDataCoordinator:addFriendsDataCoordinator:friendsFeedEntryStore:ghostToFeedLogger:friendsFeedReadyLogger:graphene:usernameProvider:messagingExperimentService:storiesReplayManager:dataWiped:userSessionContext:pageLoadMetricManager:discoverFeedDataFetcher:storiesConfigProvider:chatEligibilityProvider:userPreferences:appState:didEnterBackgroundObservable:chatActionHandler:nativeSessionManagerFuture:] */

undefined8 *
FUN_100bab430(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
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
  func_0x000107c61174();
  func_0x000107c61174(param_26);
  func_0x000107c61174(param_27);
  func_0x000107c61174(param_28);
  func_0x000107c61174(param_29);
  func_0x000107c61174(param_30);
  puStack_70 = PTR_PTR_1126f1810;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[6];
    puVar1[6] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[7];
    puVar1[7] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[8];
    puVar1[8] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[9];
    puVar1[9] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[10];
    puVar1[10] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[0x35];
    puVar1[0x35] = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_10;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_11);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_11;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_14);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_14;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_13);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_13;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_15);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_15;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_25);
    uVar2 = puVar1[0x38];
    puVar1[0x38] = param_25;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_22);
    uVar2 = puVar1[0x37];
    puVar1[0x37] = param_22;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_16);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_16;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_18);
    uVar2 = puVar1[0x36];
    puVar1[0x36] = param_18;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_23);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_23;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_24);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_24;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_26);
    uVar2 = puVar1[0x39];
    puVar1[0x39] = param_26;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_27);
    uVar2 = puVar1[0x3a];
    puVar1[0x3a] = param_27;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_28);
    uVar2 = puVar1[0x3b];
    puVar1[0x3b] = param_28;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_29);
    uVar2 = puVar1[0x3c];
    puVar1[0x3c] = param_29;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_30);
    uVar2 = puVar1[0x3d];
    puVar1[0x3d] = param_30;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61180();
    func_0x000107c45454();
    uVar2 = puVar1[0x15];
    puVar1[0x15] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar4);
    func_0x000107c61174(param_19);
    uVar2 = puVar1[0x22];
    puVar1[0x22] = param_19;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_17);
    uVar2 = puVar1[0x23];
    puVar1[0x23] = param_17;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x000107c520a4();
    func_0x000107c61180();
    uVar2 = puVar1[0x24];
    puVar1[0x24] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x000107c520a4();
    func_0x000107c61180();
    uVar2 = puVar1[0x25];
    puVar1[0x25] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x000107c61160();
    uVar2 = puVar1[0x26];
    puVar1[0x26] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x000107c61160();
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x000107c61160();
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x000107c61160();
    uVar2 = puVar1[0x28];
    puVar1[0x28] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x000107c520a4();
    func_0x000107c61180();
    uVar2 = puVar1[0x27];
    puVar1[0x27] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar2 = puVar1[0x32];
    puVar1[0x32] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_12);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_12;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar2 = puVar1[0x17];
    puVar1[0x17] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar2 = puVar1[0x18];
    puVar1[0x18] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x000107c61160();
    uVar2 = puVar1[0x19];
    puVar1[0x19] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar2 = puVar1[0x2a];
    puVar1[0x2a] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar2 = puVar1[0x2b];
    puVar1[0x2b] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    func_0x000107c61160();
    uVar2 = puVar1[0x2c];
    puVar1[0x2c] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar2 = puVar1[0x2e];
    puVar1[0x2e] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar2 = puVar1[0x2f];
    puVar1[0x2f] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar2 = puVar1[0x30];
    puVar1[0x30] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    func_0x000107c610f4();
    func_0x000107c49470();
    uVar2 = puVar1[0x31];
    puVar1[0x31] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126cb148;
    func_0x000107c610f4();
    func_0x000107c46f00(0x3fd3333340000000);
    uVar2 = puVar1[0x33];
    puVar1[0x33] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
    func_0x000107c4c190();
    func_0x000107c61180();
    func_0x000107c57f54(puVar1[0x33]);
    func_0x000107c61170(puVar3);
    func_0x000107c57f58(puVar1[0x33]);
    func_0x000107c59e90(0x3fa999999999999a,puVar1[0x33]);
    func_0x000107c61144(auStack_80,puVar1);
    uVar2 = puVar1[0x15];
    func_0x000107c6111c(auStack_88,auStack_80);
    func_0x000107c4e524(uVar2);
    func_0x000107c61120(auStack_88);
    func_0x000107c61120(auStack_80);
  }
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



/* Entry: 100babd40; end: 100babdef; -[SCThrottleTimer initWithInterval:target:selector:userInfo:] */

undefined8
FUN_100babd40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined1 *puVar1;
  undefined1 auStack_48 [8];
  
  func_0x000107c61144(auStack_48,param_4);
  func_0x000107c61174(param_6);
  puVar1 = auStack_48;
  func_0x000107c61148(puVar1);
  func_0x000107c46f04(param_1,param_2);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_6);
  func_0x000107c61120(auStack_48);
  return param_2;
}



/* Entry: 100babdf0; end: 100babf0f; -[SCThrottleTimer initWithInterval:target:selector:userInfo:repeats:] */

undefined8 *
FUN_100babdf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,param_4);
  func_0x000107c61174(param_6);
  puStack_60 = PTR_PTR_112702fc0;
  puVar1 = &uStack_68;
  uStack_68 = param_2;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ded60;
    func_0x000107c610f4(PTR_PTR_1126ded60);
    puVar3 = auStack_58;
    func_0x000107c61148(puVar3);
    func_0x000107c48c38(puVar2);
    func_0x000107c59c08(puVar1);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar3);
    func_0x000107c59d64(param_1,puVar1);
    func_0x000107c5a360(puVar1);
    func_0x000107c57d3c(puVar1);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61120(auStack_58);
  return puVar1;
}



/* Entry: 100babf10; end: 100babfb3; -[SCThrottleTarget initWithTarget:selector:throttleTimer:] */

undefined1 *
FUN_100babf10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_112702fc8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c59c08(puVar1);
    func_0x000107c58e48(puVar1);
    func_0x000107c59ce8(puVar1);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100babfb4; end: 100babfbf; -[SCThrottleTarget setTarget:] */

void FUN_100babfb4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 100babfc0; end: 100bac033; -[SCLensContentRedownloadLogger initWithGraphene:] */

undefined1 * FUN_100babfc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f05a8;
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



/* Entry: 100bac034; end: 100bac057;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bac034(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_1127264ec);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100bac058; end: 100bac3f7; -[SCLensDataFetcherFactory initWithFeatureSettingsService:downloadTracker:cacheClearTracker:urlDataFetcher:operationsFactory:lensUserProvider:lensIconRepository:circumstanceEngine:networkConnectivityMonitor:redownloadLogger:fetchTypeProvider:performerProvider:resourceResolver:lensDataConfig:] */

undefined8 *
FUN_100bac058(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
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
  puStack_70 = PTR_PTR_1127059a8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
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
    func_0x000107c61174(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = puVar1[7];
    puVar1[7] = param_10;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_11);
    uVar2 = puVar1[8];
    puVar1[8] = param_11;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_12);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_12;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_13);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_13;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_15);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_15;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_16);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_16;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61180();
    func_0x000107c470d0();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar4);
    puVar3 = PTR_PTR_1126bbae8;
    func_0x000107c3cdfc();
    func_0x000107c61180();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126dfa30;
    func_0x000107c610f4();
    func_0x000107c466c8();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    func_0x000107c61170(uVar2);
  }
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



/* Entry: 100bac3f8; end: 100bac3ff; -[SCThrottleTarget setSelector:] */

void FUN_100bac3f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 100bac400; end: 100bac40b; -[SCThrottleTarget setThrottleTimer:] */

void FUN_100bac400(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 100bac40c; end: 100bac43b; -[SCThrottleTimer setTarget:] */

void FUN_100bac40c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100bac43c; end: 100bac443; -[SCThrottleTimer setTimeInterval:] */

void FUN_100bac43c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x10) = param_1;
  return;
}



/* Entry: 100bac444; end: 100bac473; -[SCThrottleTimer setUserInfo:] */

void FUN_100bac444(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100bac474; end: 100bac47b; -[SCThrottleTimer setRepeats:] */

void FUN_100bac474(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 100bac47c; end: 100bac4ab; -[SCThrottleTimer setRunLoop:] */

void FUN_100bac47c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100bac4ac; end: 100bac4db; -[SCThrottleTimer setRunLoopMode:] */

void FUN_100bac4ac(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 100bac4dc; end: 100bac4e3; -[SCThrottleTimer setTolerance:] */

void FUN_100bac4dc(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x30) = param_1;
  return;
}



/* Entry: 100bac4e4; end: 100bac4eb; -[SCPersonDataCoordinator addDataUpdateListener:] */

void FUN_100bac4e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x48),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 100bac4ec; end: 100bac527;  */

void FUN_100bac4ec(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 != 0) {
    func_0x000107c5baec(param_1);
    func_0x000107c3c010(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100bac528; end: 100bac5e3; -[SCFriendsFeedDataCoordinator startInitialLoad] */

void FUN_100bac528(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x000107c3c9ec();
  func_0x000107c3c9f0(param_1);
  func_0x000107c3ca00(param_1);
  func_0x000107c61144(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c4e590(uVar1);
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
  return;
}



/* Entry: 100bac5e4; end: 100bac6f7; -[SCFriendsFeedDataCoordinator _subscribeToNativeDataUpdates] */

void FUN_100bac5e4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x000107c61144(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x000107c4d45c(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c4da8c();
  func_0x000107c61180();
  func_0x000107c6111c(auStack_50,auStack_48);
  uVar3 = uVar2;
  func_0x000107c5c320(uVar2);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_50);
  func_0x000107c61120(auStack_48);
  return;
}



/* Entry: 100bac6f8; end: 100bac717;  */

void FUN_100bac6f8(void)

{
  func_0x000107c61168(&PTR_PTR_1128a3b70);
  return;
}



/* Entry: 100bac718; end: 100bac793; -[SCFriendsFeedNativeDataProvider nativeDataStreamObservableObjc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bac718(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  uVar1 = 0;
  FUN_100bac6f8(0);
  func_0x000107c61174(param_1);
  puVar2 = &UNK_100beb850;
  FUN_1000bfde0(&UNK_100beb850,0,uVar1);
  puVar3 = puVar2;
  FUN_1004575f0();
  func_0x000107c61170(param_1);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100bac794; end: 100bac79b; -[SCFriendsFeedUpdateServices friendsFeedLegacyGroupUpdatesDataCoordinator] */

undefined8 FUN_100bac794(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100bac79c; end: 100bac9af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bac79c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 != 0) {
    uVar1 = param_1 + _DAT_112729c18;
    func_0x000107c61148();
    uVar2 = uVar1;
    func_0x000107c4cdb8();
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar4 = uVar3;
    func_0x000107c41ee4();
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar1);
    if ((uVar4 & 1) == 0) {
      lVar5 = param_1 + _DAT_112729c10;
      func_0x000107c61148(lVar5);
      lVar6 = lVar5;
      func_0x000107c3eb20();
      func_0x000107c61180();
      func_0x000107c61170(lVar5);
      lVar5 = param_1 + _DAT_112729c0c;
      func_0x000107c61148(lVar5);
      lVar7 = lVar5;
      func_0x000107c421c8();
      func_0x000107c61180();
      lVar8 = lVar7;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar7);
      func_0x000107c61170(lVar5);
      lVar5 = param_1 + _DAT_112729c14;
      func_0x000107c61148(lVar5);
      lVar7 = lVar5;
      func_0x000107c4456c();
      func_0x000107c61180();
      func_0x000107c61170(lVar5);
      lVar5 = param_1 + _DAT_112729c14;
      func_0x000107c61148(lVar5);
      lVar9 = lVar5;
      func_0x000107c44574();
      func_0x000107c61180();
      lVar10 = lVar9;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar9);
      func_0x000107c61170(lVar5);
      lVar5 = param_1 + _DAT_112729c08;
      func_0x000107c61148(lVar5);
      lVar9 = lVar5;
      func_0x000107c5da60();
      func_0x000107c61180();
      lVar11 = lVar9;
      func_0x000107c5d984();
      func_0x000107c61180();
      func_0x000107c61170(lVar9);
      func_0x000107c61170(lVar5);
      puVar12 = PTR_PTR_1126be618;
      func_0x000107c610f4(PTR_PTR_1126be618);
      func_0x000107c45a24();
      func_0x000107c61170(lVar11);
      func_0x000107c61170(lVar10);
      func_0x000107c61170(lVar7);
      func_0x000107c61170(lVar8);
      func_0x000107c61170(lVar6);
      goto LAB_100bac98c;
    }
  }
  puVar12 = (undefined *)0x0;
LAB_100bac98c:
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 100bac9b0; end: 100baca3b; +[SCLensDataFetcherFactory _visibleLensesPerformerWithProvider:] */

void FUN_100bac9b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c5c734(param_3);
  func_0x000107c61180();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f7298c8);
  func_0x000107c61180();
  uVar2 = param_3;
  func_0x000107c4e60c(param_3,param_2,puVar1,1,0,0xe);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 100baca3c; end: 100bacbe7; -[SCFriendsFeedLegacyGroupUpdatesDataCoordinator initWithBlockedSnapchatterSynchronousFetcher:docObjectContext:groupsDataFetcher:groupsDataTracker:userId:] */

undefined8 *
FUN_100baca3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puStack_58 = PTR_PTR_1126f1860;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
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
    func_0x000107c3d740(puVar1[5]);
    puVar3 = PTR_PTR_1126b4990;
    func_0x000107c61160();
    uVar2 = puVar1[1];
    puVar1[1] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_7);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_3);
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100bacbe8; end: 100bacbef; -[SCGroupsDataTracker addListener:] */

void FUN_100bacbe8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 100bacbf0; end: 100bace9b; -[SCGroupsDataRequestListenerAnnouncer addListener:] */

undefined8 FUN_100bacbf0(long param_1,undefined8 param_2,long param_3)

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
  
  func_0x000107c61174(param_3);
  func_0x000107c60d88(param_1 + 8);
  plVar3 = (long *)0x30;
  func_0x000107c60e20();
  plVar11 = plVar3 + 1;
  *plVar11 = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_DAT_110d27038;
  plVar10 = plVar3 + 3;
  *plVar10 = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  puVar8 = (undefined8 *)(param_1 + 0x48);
  plVar6 = (long *)*puVar8;
  plStack_70 = plVar10;
  plStack_68 = plVar3;
  if (plVar6 == (long *)0x0) {
    func_0x000107c61144(auStack_90,param_3);
    FUN_100bace9c(plVar10,auStack_90);
    func_0x000107c61120(auStack_90);
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
    FUN_100bacfdc(puVar8,&plStack_a0);
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
LAB_100bacda4:
      if (lVar7 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        func_0x000107c60d68(plVar6);
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
        func_0x000107c61148();
        func_0x000107c61170();
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
      goto LAB_100bacdc4;
    }
    for (lVar7 = *plVar6; lVar7 != lVar12; lVar7 = lVar7 + 8) {
      lVar5 = lVar7;
      func_0x000107c61148();
      func_0x000107c61170();
      if (lVar5 != 0) {
        FUN_100bace9c(plVar10,lVar7);
      }
    }
    func_0x000107c61144(auStack_78,param_3);
    FUN_100bace9c(plVar10,auStack_78);
    func_0x000107c61120(auStack_78);
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
    FUN_100bacfdc(puVar8,&plStack_88);
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
      goto LAB_100bacda4;
    }
  }
  uVar9 = 1;
LAB_100bacdc4:
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
      func_0x000107c60d68(plVar3);
    }
  }
  func_0x000107c60d8c(param_1 + 8);
  func_0x000107c61170(param_3);
  return uVar9;
}



/* Entry: 100bace9c; end: 100bacfdb;  */

void FUN_100bace9c(long *param_1,long *param_2)

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
    func_0x000107c6111c(uVar2,param_2);
    lVar9 = uVar2 + 8;
  }
  else {
    lVar9 = uVar2 - *param_1;
    uVar2 = (lVar9 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
      func_0x000107c30800();
LAB_100bacfd8:
      func_0x000104bd35f4();
      plVar5 = param_1;
      func_0x000107c60c40();
      func_0x000107c60dc4();
      lVar9 = *param_2;
      lVar11 = param_1[1];
      lVar4 = *param_1;
      param_1[1] = param_2[1];
      *param_1 = lVar9;
      param_2[1] = lVar11;
      *param_2 = lVar4;
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
      if (uVar7 >> 0x3d != 0) goto LAB_100bacfd8;
      lVar4 = uVar7 << 3;
      func_0x000107c60e20();
    }
    lVar9 = lVar4 + lVar9;
    func_0x000107c6111c(lVar9,param_2);
    lVar8 = *param_1;
    lVar3 = param_1[1];
    lVar1 = lVar9 + (lVar8 - lVar3);
    lVar11 = lVar8;
    lVar10 = lVar1;
    if (lVar3 != lVar8) {
      do {
        func_0x000107c6114c(lVar10,lVar11);
        lVar11 = lVar11 + 8;
        lVar10 = lVar10 + 8;
      } while (lVar11 != lVar3);
      do {
        func_0x000107c61120(lVar8);
        lVar8 = lVar8 + 8;
      } while (lVar8 != lVar3);
      lVar8 = *param_1;
    }
    lVar9 = lVar9 + 8;
    *param_1 = lVar1;
    param_1[1] = lVar9;
    param_1[2] = lVar4 + uVar7 * 8;
    if (lVar8 != 0) {
      func_0x000107c60e14(lVar8);
    }
  }
  param_1[1] = lVar9;
  return;
}



/* Entry: 100bacfdc; end: 100bad023;  */

void FUN_100bacfdc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = param_1;
  func_0x000107c60c40();
  func_0x000107c60dc4();
  uVar2 = *param_2;
  uVar4 = param_1[1];
  uVar3 = *param_1;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_2[1] = uVar4;
  *param_2 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar1);
  return;
}



/* Entry: 100bad024; end: 100bad0ef; -[SCLensDataFetcherEventsTracker initWithDownloadTracker:cacheClearTracker:lensUserProvider:] */

undefined1 *
FUN_100bad024(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_112705a38;
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



/* Entry: 100bad0f0; end: 100bad0f7; -[SCFriendsFeedLegacyGroupUpdatesDataCoordinator addDataUpdateListener:] */

void FUN_100bad0f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 100bad0f8; end: 100bad1ab; -[SCLensDataFetcherFactory cachedMainDataFetcher] */

void FUN_100bad0f8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x68);
  if (lVar4 == 0) {
    puVar1 = PTR_PTR_1126ddd88;
    func_0x000107c610f4(PTR_PTR_1126ddd88);
    func_0x000107c47de8();
    lVar2 = param_1;
    func_0x000107c3b714(param_1,param_2,puVar1);
    func_0x000107c61180();
    lVar4 = param_1;
    func_0x000107c3bc64(param_1,param_2,lVar2,puVar1,1);
    func_0x000107c61180();
    uVar3 = *(undefined8 *)(param_1 + 0x68);
    *(long *)(param_1 + 0x68) = lVar4;
    func_0x000107c61170(uVar3);
    lVar4 = *(long *)(param_1 + 0x68);
    func_0x000107c61174(lVar4);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(puVar1);
  }
  else {
    func_0x000107c61174(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 100bad1ac; end: 100bad2bf; -[SCFriendsFeedDataCoordinator _subscribeToNativeMultirecipientDataUpdates] */

void FUN_100bad1ac(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x000107c61144(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x000107c4d45c(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c4da8c();
  func_0x000107c61180();
  func_0x000107c6111c(auStack_50,auStack_48);
  uVar3 = uVar2;
  func_0x000107c5c320(uVar2);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_50);
  func_0x000107c61120(auStack_48);
  return;
}



/* Entry: 100bad2c0; end: 100bad33b; -[SCFriendsFeedNativeMultiRecipientDataProvider nativeDataStreamObservableObjc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bad2c0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  uVar1 = 0;
  FUN_100bac6f8(0);
  func_0x000107c61174(param_1);
  puVar2 = &UNK_102d72ef0;
  FUN_1000bfde0(&UNK_102d72ef0,0,uVar1);
  puVar3 = puVar2;
  FUN_1004575f0();
  func_0x000107c61170(param_1);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}


