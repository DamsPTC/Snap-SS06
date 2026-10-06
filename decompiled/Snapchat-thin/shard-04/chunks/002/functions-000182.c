/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1032a0eb8; end: 1032a0f83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a0eb8(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long unaff_x20;
  
  lVar2 = _DAT_112f51520;
  func_0x000107c61604(unaff_x20 + _DAT_112f51520,param_1);
  lVar2 = unaff_x20 + lVar2;
  func_0x000107c61618();
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c613fc();
    puVar3[3] = 2;
    puVar3[2] = 1;
    puVar4 = puVar3;
    func_0x000103bb8c88();
    uVar1 = puVar4[1];
    puVar3[4] = *puVar4;
    puVar3[5] = uVar1;
    func_0x000107c61434();
    puVar4 = puVar3;
    func_0x000107c5fc48(puVar3,PTR___sSSN_11034da80);
    func_0x000107c61574(puVar3);
    func_0x000107c3d744(lVar2);
    func_0x000107c615e8(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar4);
    return;
  }
  return;
}



/* Entry: 1032a0f84; end: 1032a0fcb; -[SCSpotlightWidgetPlugin addEventListenersWithEventAnnouncing:] */

void FUN_1032a0f84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_1032a0eb8(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1032a0fcc; end: 1032a0ff7; -[SCSpotlightWidgetPlugin type] */

void FUN_1032a0fcc(void)

{
  func_0x000107c5fadc(0xd000000000000017,0x800000010f135690);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1032a0ff8; end: 1032a10ab; -[SCSpotlightWidgetPlugin operaViewDidSendEvent:page:params:] */

/* WARNING: Possible PIC construction at 0x0001032a1090: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032a1094) */

void FUN_1032a0ff8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  func_0x000107c5faec(param_3);
  if (param_5 != 0) {
    func_0x000107c5f9e8(param_5,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                        PTR___sSSSHsWP_11034da90);
  }
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_1032a1200(param_3,param_2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1032a10ac; end: 1032a112f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a10ac(long param_1)

{
  long *plVar1;
  byte *pbVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  
  pbVar2 = *(byte **)(unaff_x20 + 0x10);
  lVar5 = ((long *)(param_1 + _DAT_11307f1f8))[1];
  plVar1 = (long *)(*(long *)(unaff_x20 + 0x18) + _DAT_112f51548);
  lVar6 = plVar1[1];
  bVar3 = lVar5 == 0 && lVar6 == 0;
  if (lVar5 != 0 && lVar6 != 0) {
    lVar4 = *(long *)(param_1 + _DAT_11307f1f8);
    if (lVar4 == *plVar1 && lVar5 == lVar6) {
      bVar3 = 1;
    }
    else {
      func_0x000107c605b8();
      bVar3 = (byte)lVar4;
    }
  }
  *pbVar2 = bVar3 & 1;
  return;
}



/* Entry: 1032a1130; end: 1032a11ff;  */

/* WARNING: Possible PIC construction at 0x0001032a1190: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032a1194) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a1130(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = ((undefined8 *)(unaff_x20 + _DAT_112f51548))[1];
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f51548);
    lVar1 = unaff_x20 + _DAT_112f51538;
    func_0x000107c61618();
    if (lVar1 != 0) {
      func_0x000107c61434(lVar2);
      func_0x000107c5fadc(uVar3,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar2);
      return;
    }
  }
  return;
}



/* Entry: 1032a1200; end: 1032a137f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a1200(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar7 = &puStack_80;
  plVar2 = param_1;
  func_0x000103bb8c88();
  plVar3 = (long *)*plVar2;
  if ((plVar3 == param_1 && plVar2[1] == param_2) ||
     (func_0x000107c605b8(plVar3,plVar2[1],param_1,param_2,0), ((ulong)plVar3 & 1) != 0)) {
    lVar1 = _DAT_112f51558;
    if ((*(char *)(unaff_x20 + _DAT_112f51558) == '\x01') &&
       (lVar9 = *(long *)(unaff_x20 + _DAT_112f51550), lVar9 != 0)) {
      func_0x000107c615f0(lVar9);
      pcVar4 = "autoAdvanceToNextStory(startingGroup:)";
      func_0x0001000c10c0("autoAdvanceToNextStory(startingGroup:)");
      func_0x000107c61180();
      puVar5 = &UNK_110632700;
      func_0x000107c613fc(&UNK_110632700,0x18,7);
      func_0x000107c61614(puVar5 + 0x10);
      puVar6 = &UNK_110632728;
      func_0x000107c613fc(&UNK_110632728,0x20,7);
      *(undefined **)(puVar6 + 0x10) = puVar5;
      *(long *)(puVar6 + 0x18) = lVar9;
      pcStack_60 = FUN_1032a13a0;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_1000f6b44;
      puStack_68 = &UNK_110632740;
      puStack_58 = puVar6;
      func_0x000107c60bc4(&puStack_80);
      puVar5 = puStack_58;
      func_0x000107c615f0(lVar9);
      func_0x000107c61574(puVar5);
      func_0x000107c4e524(pcVar4);
      func_0x000107c60bd0(ppuVar7);
      func_0x000107c615e8(lVar9);
      func_0x000107c615e8(pcVar4);
    }
    *(undefined1 *)(unaff_x20 + lVar1) = 0;
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f51550);
    *(undefined8 *)(unaff_x20 + _DAT_112f51550) = 0;
    func_0x000107c615e8(uVar8);
  }
  return;
}



/* Entry: 1032a1380; end: 1032a139f;  */

void FUN_1032a1380(void)

{
  func_0x000107c61168(&PTR_PTR_1128c75c0);
  return;
}



/* Entry: 1032a13a0; end: 1032a15a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a13a0(void)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  long unaff_x20;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  uVar5 = *(ulong *)(unaff_x20 + 0x18);
  puVar8 = auStack_68;
  func_0x000107c61428(lVar6 + 0x10,puVar8,0,0);
  lVar1 = lVar6 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    return;
  }
  uVar2 = lVar1 + _DAT_112f51538;
  func_0x000107c61618();
  func_0x000107c61170(lVar1);
  if (uVar2 == 0) {
    return;
  }
  uVar3 = uVar2;
  func_0x000107c4e9c4();
  func_0x000107c61180();
  func_0x000107c615e8(uVar2);
  if (uVar3 == 0) {
    return;
  }
  uVar2 = uVar3;
  func_0x000107c40f40();
  func_0x000107c61180();
  func_0x000107c615e8(uVar3);
  if (uVar2 == 0) {
    return;
  }
  uVar3 = uVar2;
  func_0x000107c3b9ac();
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c5faec();
  puVar9 = puVar8;
  func_0x000107c61170(uVar3);
  func_0x000107c3b9ac();
  func_0x000107c61180();
  uVar3 = uVar5;
  func_0x000107c5faec();
  func_0x000107c61170(uVar5);
  if (uVar4 == uVar3 && puVar8 == puVar9) {
    func_0x000107c6142c(puVar9);
    func_0x000107c6142c(puVar8);
  }
  else {
    func_0x000107c605b8(uVar4,puVar8,uVar3,puVar9,0);
    func_0x000107c6142c(puVar9);
    func_0x000107c6142c(puVar8);
    if ((uVar4 & 1) == 0) goto LAB_1032a1580;
  }
  func_0x000107c61428(lVar6 + 0x10,auStack_80,0,0);
  lVar6 = lVar6 + 0x10;
  func_0x000107c61618();
  if (lVar6 != 0) {
    lVar1 = lVar6 + _DAT_112f51530;
    func_0x000107c61618();
    func_0x000107c61170(lVar6);
    if (lVar1 != 0) {
      lVar6 = lVar1;
      func_0x000107c4d4b8();
      func_0x000107c61180();
      func_0x000107c615e8(lVar1);
      if (lVar6 != 0) {
        func_0x00010443f8c4(0);
        uVar7 = 9;
        func_0x00010443f8e4(9);
        func_0x000107c4d4b0(lVar6);
        func_0x000107c61170(uVar7);
        func_0x000107c615e8(lVar6);
      }
    }
  }
LAB_1032a1580:
  func_0x000107c615e8(uVar2);
  return;
}



/* Entry: 1032a15a4; end: 1032a15bf;  */

void FUN_1032a15a4(long param_1,long param_2)

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



/* Entry: 1032a15c0; end: 1032a15eb; +[SCSpotlightTracer annotate:] */

void FUN_1032a15c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  FUN_1032a1738();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1032a15ec; end: 1032a1623; +[SCSpotlightTracer beginFor:] */

undefined8 FUN_1032a15ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x0001032a1848();
  func_0x000107c6142c(param_2);
  return param_3;
}



/* Entry: 1032a1624; end: 1032a167b; +[SCSpotlightTracer endFor:] */

void FUN_1032a1624(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar1 = *param_1;
  func_0x000107c61174(uVar1);
  func_0x000100069b5c(param_3);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 1032a167c; end: 1032a1687; +[SCSpotlightTracer beginAndStoreCookieFor:] */

void FUN_1032a167c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  FUN_1032a1968();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1032a1688; end: 1032a16bb;  */

void FUN_1032a1688(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  FUN_1032a1968();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1032a16bc; end: 1032a16c7; +[SCSpotlightTracer endStoredCookieFor:] */

void FUN_1032a16bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  FUN_1032a1968();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1032a16c8; end: 1032a1703; -[SCSpotlightTracer init] */

void FUN_1032a16c8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1032a1704; end: 1032a1737;  */

void FUN_1032a1704(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1032a1738; end: 1032a1967;  */

void FUN_1032a1738(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  puVar1 = param_1;
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar2 = *puVar1;
  uStack_58 = 0;
  uStack_50 = 0xe000000000000000;
  func_0x000107c61174(uVar2);
  func_0x000107c602fc(0x1c);
  uVar3 = uStack_50;
  func_0x000107c6142c();
  uStack_58 = 0xd00000000000001a;
  uStack_50 = 0x800000010f135700;
  uStack_78 = 0x3a;
  uStack_70 = 0xe100000000000000;
  uStack_88 = 0x2d;
  uStack_80 = 0xe100000000000000;
  puStack_68 = param_1;
  uStack_60 = param_2;
  func_0x000100e8b654();
  puVar1 = &uStack_88;
  func_0x000107c601fc(&uStack_78,puVar1,0,0,0,1,PTR___sSSN_11034da80,PTR___sSSN_11034da80,
                      PTR___sSSN_11034da80,uVar3,uVar3,uVar3);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar1);
  uVar3 = uStack_50;
  func_0x0001048d85b4(uStack_58,uStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c6142c(uVar3);
  return;
}



/* Entry: 1032a1968; end: 1032a1a8b;  */

void FUN_1032a1968(undefined8 *param_1,undefined8 param_2,code *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  puVar1 = param_1;
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar2 = *puVar1;
  uStack_68 = 0;
  uStack_60 = 0xe000000000000000;
  func_0x000107c61174(uVar2);
  func_0x000107c602fc(0x11);
  uVar3 = uStack_60;
  func_0x000107c6142c();
  uStack_68 = 0x6867696c746f7053;
  uStack_60 = 0xef3a656361725474;
  uStack_88 = 0x3a;
  uStack_80 = 0xe100000000000000;
  uStack_98 = 0x2d;
  uStack_90 = 0xe100000000000000;
  puStack_78 = param_1;
  uStack_70 = param_2;
  func_0x000100e8b654();
  puVar1 = &uStack_98;
  func_0x000107c601fc(&uStack_88,puVar1,0,0,0,1,PTR___sSSN_11034da80,PTR___sSSN_11034da80,
                      PTR___sSSN_11034da80,uVar3,uVar3,uVar3);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar1);
  uVar3 = uStack_60;
  (*param_3)(uStack_68,uStack_60);
  func_0x000107c61170(uVar2);
  func_0x000107c6142c(uVar3);
  return;
}



/* Entry: 1032a1a8c; end: 1032a1aab;  */

void FUN_1032a1a8c(void)

{
  func_0x000107c61168(&PTR_PTR_1128c76a8);
  return;
}



/* Entry: 1032a1aac; end: 1032a1abb; -[_TtC40SCDiscoverFeedUpNextV2RequestingServices40SCDiscoverFeedUpNextV2RequestingServices upNextV2NetworkRequester] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a1aac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f515b0));
  return;
}



/* Entry: 1032a1abc; end: 1032a1b07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a1abc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f515b0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1032a1b08; end: 1032a1b5f; -[_TtC40SCDiscoverFeedUpNextV2RequestingServices40SCDiscoverFeedUpNextV2RequestingServices initWithUpNextV2NetworkRequester:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a1b08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112f515b0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1032a1b60; end: 1032a1bbf; -[_TtC40SCDiscoverFeedUpNextV2RequestingServices40SCDiscoverFeedUpNextV2RequestingServices init] */

void FUN_1032a1b60(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCDiscoverFeedUpNextV2RequestingServices.SCDiscoverFeedUpNextV2RequestingServices"
                      ,0x51,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032a1b8c);
  (*pcVar1)();
}



/* Entry: 1032a1bc0; end: 1032a1bcf; -[_TtC40SCDiscoverFeedUpNextV2RequestingServices40SCDiscoverFeedUpNextV2RequestingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a1bc0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f515b0));
  return;
}



/* Entry: 1032a1bd0; end: 1032a1bef;  */

void FUN_1032a1bd0(void)

{
  func_0x000107c61168(&PTR_PTR_1128c7758);
  return;
}



/* Entry: 1032a1bf0; end: 1032a1c5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a1bf0(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1032a1fe4();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f515e8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1032a1c5c; end: 1032a1cc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a1c5c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f515e8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1032a1cc8; end: 1032a1d27; -[_TtC42FollowCreatorsScopedFactoryServiceProvider28FollowCreatorsScopedServices init] */

void FUN_1032a1cc8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FollowCreatorsScopedFactoryServiceProvider.FollowCreatorsScopedServices",0x47
                      ,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032a1cf4);
  (*pcVar1)();
}



/* Entry: 1032a1d28; end: 1032a1d37; -[_TtC42FollowCreatorsScopedFactoryServiceProvider28FollowCreatorsScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a1d28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f515e8));
  return;
}



/* Entry: 1032a1d38; end: 1032a1da3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a1d38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110632a10;
  func_0x000107c613fc(&UNK_110632a10,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1032a207c,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1032a1da4; end: 1032a1e3f;  */

void FUN_1032a1da4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110632920;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110632920;
  return;
}



/* Entry: 1032a1e40; end: 1032a1e77;  */

void FUN_1032a1e40(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 1032a1e78; end: 1032a1e7f;  */

undefined8 FUN_1032a1e78(void)

{
  return 0x1b;
}



/* Entry: 1032a1e80; end: 1032a1fb3;  */

void FUN_1032a1e80(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110632a38;
  func_0x000107c613fc(&UNK_110632a38,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1032a2054;
  func_0x00010058fa64(FUN_1032a2054,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1032a1fb4; end: 1032a1fe3;  */

undefined ** FUN_1032a1fb4(void)

{
  return &PTR_DAT_1130665f8;
}



/* Entry: 1032a1fe4; end: 1032a2003;  */

void FUN_1032a1fe4(void)

{
  func_0x000107c61168(&PTR_PTR_1128c7818);
  return;
}



/* Entry: 1032a2004; end: 1032a2053;  */

undefined1  [16] FUN_1032a2004(void)

{
  return ZEXT816(0x110632970);
}



/* Entry: 1032a2054; end: 1032a207b;  */

void FUN_1032a2054(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1032a207c; end: 1032a207f;  */

void FUN_1032a207c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1032a2080; end: 1032a214b;  */

/* WARNING: Possible PIC construction at 0x0001032a2120: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032a2130: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032a2124) */
/* WARNING: Removing unreachable block (ram,0x0001032a2134) */

void FUN_1032a2080(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_110632ac0;
  func_0x000107c613fc(&UNK_110632ac0,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  uVar2 = 0x112f51658;
  func_0x0001000285a8(0x112f51658,&UNK_10dba68d0);
  func_0x000107c613fc();
  pcVar3 = FUN_1032a2490;
  func_0x0001000841fc(FUN_1032a2490,puVar1,uVar2);
  func_0x000100084214(&UNK_10dba68a0,0x2a,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1032a214c; end: 1032a2167;  */

/* WARNING: Possible PIC construction at 0x0001032a2120: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032a2130: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032a2124) */
/* WARNING: Removing unreachable block (ram,0x0001032a2134) */

void FUN_1032a214c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar4 = &UNK_110632ac0;
  func_0x000107c613fc(&UNK_110632ac0,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  *(undefined8 *)(puVar4 + 0x20) = uVar5;
  *(undefined8 *)(puVar4 + 0x28) = uVar3;
  uVar5 = 0x112f51658;
  func_0x0001000285a8(0x112f51658,&UNK_10dba68d0);
  func_0x000107c613fc();
  pcVar6 = FUN_1032a2490;
  func_0x0001000841fc(FUN_1032a2490,puVar4,uVar5);
  func_0x000100084214(&UNK_10dba68a0,0x2a,2);
  *param_1 = pcVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1032a2168; end: 1032a248f;  */

void FUN_1032a2168(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  char *pcVar3;
  code *pcVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_68;
  
  uVar8 = *param_2;
  func_0x0001000285a8(0x112f51660,&UNK_10dba68d8);
  puVar1 = &uStack_68;
  uStack_68 = uVar8;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112f51668,&UNK_10dba68e0);
  puVar2 = &UNK_110632ae8;
  func_0x000107c613fc(&UNK_110632ae8,0x38,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  *(undefined8 *)(puVar2 + 0x30) = param_6;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  uVar8 = 0x1032a249c;
  func_0x0001000823a8(0x1032a249c,puVar2);
  pcVar3 = "FollowCreatorsFeatureEntryPointWrapperServiceProvider";
  func_0x000100082720("FollowCreatorsFeatureEntryPointWrapperServiceProvider",0x35,2);
  FUN_1032a31f8();
  func_0x000100082720("FollowCreatorsScopeGraphBridgeServicesServiceProvider",0x35,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_1032a1e40;
  func_0x0001000823a8(FUN_1032a1e40,0);
  func_0x000100082720("FollowCreatorsScopedServicesCleanupRelayServiceProvider",0x37,2);
  func_0x0001000285a8(0x112f51670,&UNK_10dba68f0);
  puVar2 = &UNK_110632b10;
  func_0x000107c613fc(&UNK_110632b10,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar8;
  *(undefined8 **)(puVar2 + 0x18) = puVar1;
  *(char **)(puVar2 + 0x20) = pcVar3;
  *(code **)(puVar2 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(pcVar3);
  func_0x000107c6157c(pcVar4);
  pcVar5 = FUN_1032a24e8;
  func_0x0001000823a8(FUN_1032a24e8,puVar2);
  func_0x000100082720("FollowCreatorsScopeInitializationPluginRegistryServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112f515f0,&UNK_10dba66a0);
  func_0x000107c6157c(pcVar5);
  uVar6 = 0x1032a24f4;
  func_0x0001000823a8(0x1032a24f4,pcVar5);
  func_0x000100082720("FollowCreatorsScopeInitializationServiceProvider",0x30,2);
  func_0x0001000285a8(0x112f515e0,&UNK_10dba6690);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x1032a24fc;
  func_0x0001000823a8(0x1032a24fc,uVar6);
  func_0x000100082720("FollowCreatorsScopedServicesServiceProvider",0x2b,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar2 = &UNK_110632b38;
  func_0x000107c613fc(&UNK_110632b38,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  *(code **)(puVar2 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar7 = 0x1032a2504;
  func_0x0001000823a8(0x1032a2504,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("FollowCreatorsScopeEntryPointProvider",0x25,2);
  *param_1 = uVar7;
  return;
}



/* Entry: 1032a2490; end: 1032a24ab;  */

void FUN_1032a2490(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  char *pcVar5;
  code *pcVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uStack_68;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar10 = *param_2;
  func_0x0001000285a8(0x112f51660,&UNK_10dba68d8);
  puVar2 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112f51668,&UNK_10dba68e0);
  puVar3 = &UNK_110632ae8;
  func_0x000107c613fc(&UNK_110632ae8,0x38,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = uVar4;
  *(undefined8 *)(puVar3 + 0x20) = uVar9;
  *(undefined8 *)(puVar3 + 0x28) = uVar8;
  *(undefined8 *)(puVar3 + 0x30) = uVar1;
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar1);
  uVar4 = 0x1032a249c;
  func_0x0001000823a8(0x1032a249c,puVar3);
  pcVar5 = "FollowCreatorsFeatureEntryPointWrapperServiceProvider";
  func_0x000100082720("FollowCreatorsFeatureEntryPointWrapperServiceProvider",0x35,2);
  FUN_1032a31f8();
  func_0x000100082720("FollowCreatorsScopeGraphBridgeServicesServiceProvider",0x35,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar6 = FUN_1032a1e40;
  func_0x0001000823a8(FUN_1032a1e40,0);
  func_0x000100082720("FollowCreatorsScopedServicesCleanupRelayServiceProvider",0x37,2);
  func_0x0001000285a8(0x112f51670,&UNK_10dba68f0);
  puVar3 = &UNK_110632b10;
  func_0x000107c613fc(&UNK_110632b10,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar4;
  *(undefined8 **)(puVar3 + 0x18) = puVar2;
  *(char **)(puVar3 + 0x20) = pcVar5;
  *(code **)(puVar3 + 0x28) = pcVar6;
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(pcVar5);
  func_0x000107c6157c(pcVar6);
  pcVar7 = FUN_1032a24e8;
  func_0x0001000823a8(FUN_1032a24e8,puVar3);
  func_0x000100082720("FollowCreatorsScopeInitializationPluginRegistryServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112f515f0,&UNK_10dba66a0);
  func_0x000107c6157c(pcVar7);
  uVar8 = 0x1032a24f4;
  func_0x0001000823a8(0x1032a24f4,pcVar7);
  func_0x000100082720("FollowCreatorsScopeInitializationServiceProvider",0x30,2);
  func_0x0001000285a8(0x112f515e0,&UNK_10dba6690);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x1032a24fc;
  func_0x0001000823a8(0x1032a24fc,uVar8);
  func_0x000100082720("FollowCreatorsScopedServicesServiceProvider",0x2b,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar3 = &UNK_110632b38;
  func_0x000107c613fc(&UNK_110632b38,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar9;
  *(code **)(puVar3 + 0x18) = pcVar6;
  func_0x000107c6157c(pcVar6);
  uVar9 = 0x1032a2504;
  func_0x0001000823a8(0x1032a2504,puVar3);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(uVar8);
  func_0x000100082720("FollowCreatorsScopeEntryPointProvider",0x25,2);
  *param_1 = uVar9;
  return;
}



/* Entry: 1032a24ac; end: 1032a24e7;  */

void FUN_1032a24ac(void)

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



/* Entry: 1032a24e8; end: 1032a250b;  */

void FUN_1032a24e8(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1032a29b4(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("FollowCreatorsScopeInitializationPluginRegistryServiceProvider",0x3e,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1032a250c; end: 1032a26a3;  */

void FUN_1032a250c(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  FUN_1032a28e0();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  func_0x000103db9ccc(0);
  func_0x000107c610f8();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  uVar5 = uStack_68;
  func_0x000107c61174();
  uVar6 = uVar5;
  func_0x000103db9358();
  *(undefined8 *)(param_2 + 0x10) = uVar6;
  func_0x000107c61174();
  func_0x000103db9450();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  *param_1 = param_2;
  return;
}



/* Entry: 1032a26a4; end: 1032a27df;  */

long FUN_1032a26a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  func_0x000103db9ccc(0);
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000103db9358();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  func_0x000107c61174();
  func_0x000103db9450();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar1);
  return unaff_x20;
}



/* Entry: 1032a27e0; end: 1032a2823;  */

void FUN_1032a27e0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1032a2824; end: 1032a282b;  */

undefined8 FUN_1032a2824(void)

{
  return 0x1b;
}



/* Entry: 1032a282c; end: 1032a28af;  */

void FUN_1032a282c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1032a2920,param_2,FUN_1032a2924,param_2,0x1032a294c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1032a28b0; end: 1032a28df;  */

undefined ** FUN_1032a28b0(void)

{
  return &PTR_DAT_1130665f8;
}



/* Entry: 1032a28e0; end: 1032a28ff;  */

void FUN_1032a28e0(void)

{
  func_0x000107c61168(&PTR_PTR_112f516e0);
  return;
}



/* Entry: 1032a2900; end: 1032a2923;  */

undefined1  [16] FUN_1032a2900(void)

{
  return ZEXT816(0x110632b90);
}



/* Entry: 1032a2924; end: 1032a2977;  */

void FUN_1032a2924(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1032a2978; end: 1032a29b3;  */

void FUN_1032a2978(undefined8 *param_1,undefined8 param_2)

{
  FUN_1032a29b4();
  func_0x0001000a7f38("FollowCreatorsScopeInitializationPluginRegistryServiceProvider",0x3e,2);
  *param_1 = param_2;
  return;
}



/* Entry: 1032a29b4; end: 1032a2b9f;  */

void FUN_1032a29b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074cc68;
  ppuVar4 = &PTR_DAT_1130665f8;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_1);
  uVar2 = 0x112f51760;
  func_0x0001000285a8(0x112f51760,&UNK_10dba6a48);
  func_0x0001000a6ee8(&UNK_110632b90,
                      "FollowCreatorsFeatureEntryPointWrapperScopeInitializationPluginKey",0x42,2,
                      FUN_1032a2c14,param_1,uVar2,&UNK_110632b90,&PTR_DAT_112f51678);
  func_0x000107c61574(param_1);
  puVar3 = &UNK_110632be0;
  func_0x000107c613fc(&UNK_110632be0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_110632df0,"FollowCreatorsScopeGraphBridgeScopeInitializationPluginKey",
                      0x3a,2,FUN_1032a2c1c,puVar3,uVar2,&UNK_110632df0,&PTR_DAT_112f517f0);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_110632c08;
  func_0x000107c613fc(&UNK_110632c08,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1106329b0,"FollowCreatorsScopedServicesScopeInitializationPluginKey",0x38
                      ,2,FUN_1032a2d04,puVar3,uVar2,&UNK_1106329b0,&PTR_DAT_112f515f8);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112f51768;
  func_0x0001000285a8(0x112f51768,&UNK_10dba6a50);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  return;
}



/* Entry: 1032a2ba0; end: 1032a2c13;  */

void FUN_1032a2ba0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x1032a2d40;
  func_0x0001000823a8(0x1032a2d40,param_3);
  func_0x000100082720("FollowCreatorsFeatureEntryPointWrapperScopeInitializationPluginProvider",0x47
                      ,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1032a2c14; end: 1032a2c1b;  */

void FUN_1032a2c14(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x1032a2d40;
  func_0x0001000823a8();
  func_0x000100082720("FollowCreatorsFeatureEntryPointWrapperScopeInitializationPluginProvider",0x47
                      ,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1032a2c1c; end: 1032a2c5b;  */

void FUN_1032a2c1c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1032a32dc(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("FollowCreatorsScopeGraphBridgeScopeInitializationPluginProvider",0x3f,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1032a2c5c; end: 1032a2d03;  */

void FUN_1032a2c5c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110632c30;
  func_0x000107c613fc(&UNK_110632c30,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1032a2d38;
  func_0x0001000823a8(FUN_1032a2d38,puVar1);
  func_0x000100082720("FollowCreatorsScopedServicesScopeInitializationPluginProvider",0x3d,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1032a2d04; end: 1032a2d0b;  */

void FUN_1032a2d04(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_110632c30;
  func_0x000107c613fc(&UNK_110632c30,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1032a2d38;
  func_0x0001000823a8(FUN_1032a2d38,puVar3);
  func_0x000100082720("FollowCreatorsScopedServicesScopeInitializationPluginProvider",0x3d,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1032a2d0c; end: 1032a2d37;  */

void FUN_1032a2d0c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1032a2d38; end: 1032a2d47;  */

void FUN_1032a2d38(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110632a38;
  func_0x000107c613fc(&UNK_110632a38,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1032a2054;
  func_0x00010058fa64(FUN_1032a2054,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1032a2d48; end: 1032a2dcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1032a2d48(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_1032a3108();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112f51770) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112f51778) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032a2dd0);
  (*pcVar1)();
}



/* Entry: 1032a2dd0; end: 1032a2e2f; -[_TtC30FollowCreatorsScopeGraphBridge45FollowCreatorsScopeGraphBridgeSaberEntryPoint init] */

void FUN_1032a2dd0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FollowCreatorsScopeGraphBridge.FollowCreatorsScopeGraphBridgeSaberEntryPoint"
                      ,0x4c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032a2dfc);
  (*pcVar1)();
}



/* Entry: 1032a2e30; end: 1032a2e67; -[_TtC30FollowCreatorsScopeGraphBridge45FollowCreatorsScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001032a2e4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032a2e50) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a2e30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f51770));
  return;
}



/* Entry: 1032a2e68; end: 1032a2e8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a2e68(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112f51778),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112f51770));
  return;
}



/* Entry: 1032a2e90; end: 1032a2eaf;  */

void FUN_1032a2e90(void)

{
  func_0x000107c61168(&PTR_PTR_1128c78d8);
  return;
}



/* Entry: 1032a2eb0; end: 1032a2f37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1032a2eb0(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f517a8) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112f517b0);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1032a2f38);
  (*pcVar2)();
}



/* Entry: 1032a2f38; end: 1032a301f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1032a2f38(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  
  puVar2 = PTR_PTR_1126afc98;
  func_0x000107c61168();
  func_0x000107c3e26c();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f517a8);
  *(undefined **)(unaff_x20 + _DAT_112f517a8) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f517b0);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f517b0))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_110632d50;
  func_0x000107c613fc(&UNK_110632d50,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1032a3024,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1032a3020; end: 1032a302b;  */

void FUN_1032a3020(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1032a302c; end: 1032a308b; -[_TtC30FollowCreatorsScopeGraphBridge43FollowCreatorsScopedServicesSaberEntryPoint init] */

void FUN_1032a302c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FollowCreatorsScopeGraphBridge.FollowCreatorsScopedServicesSaberEntryPoint",
                      0x4a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032a3058);
  (*pcVar1)();
}



/* Entry: 1032a308c; end: 1032a30c3; -[_TtC30FollowCreatorsScopeGraphBridge43FollowCreatorsScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a308c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f517b0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f517a8));
  return;
}



/* Entry: 1032a30c4; end: 1032a30c7;  */

void FUN_1032a30c4(void)

{
  return;
}



/* Entry: 1032a30c8; end: 1032a30e7;  */

void FUN_1032a30c8(void)

{
  FUN_1032a2f38();
  return;
}



/* Entry: 1032a30e8; end: 1032a3107;  */

void FUN_1032a30e8(void)

{
  func_0x000107c61168(&PTR_PTR_1128c79a0);
  return;
}



/* Entry: 1032a3108; end: 1032a31d7;  */

undefined8 FUN_1032a3108(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000107c61428(0x112f517e0,&uStack_40,0x20,0);
  func_0x000107c61134();
  func_0x000107c61180();
  puVar1 = &uStack_40;
  func_0x000107c614a8(puVar1);
  if (unaff_x20 == (undefined8 *)0x0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60,unaff_x20);
    func_0x000107c615e8(unaff_x20);
    puVar1 = unaff_x20;
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    func_0x00010006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_1032a31d8();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1032a31d8; end: 1032a31f7;  */

void FUN_1032a31d8(void)

{
  func_0x000107c61168(&PTR_PTR_1128c7a68);
  return;
}



/* Entry: 1032a31f8; end: 1032a3263;  */

void FUN_1032a31f8(void)

{
  func_0x0001000285a8(0x112f517e8,&UNK_10dba6b08);
  func_0x0001000823a8(0x1032a3238,0);
  return;
}



/* Entry: 1032a3264; end: 1032a329f; -[_TtC30FollowCreatorsScopeGraphBridge38FollowCreatorsScopeGraphBridgeServices init] */

void FUN_1032a3264(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1032a32a0; end: 1032a32d3;  */

void FUN_1032a32a0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1032a32d4; end: 1032a32db;  */

undefined8 FUN_1032a32d4(void)

{
  return 0x1b;
}



/* Entry: 1032a32dc; end: 1032a3453;  */

void FUN_1032a32dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110632d98;
  func_0x000107c613fc(&UNK_110632d98,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1032a3454,puVar1);
  return;
}



/* Entry: 1032a3454; end: 1032a345b;  */

void FUN_1032a3454(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x000100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&uStack_38);
  func_0x000107c61428(0x112f517e0,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f517e0,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_110632e30;
  func_0x000107c613fc(&UNK_110632e30,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1032a3508;
  func_0x00010058fa64(0x1032a3508,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1032a345c; end: 1032a34b7;  */

void FUN_1032a345c(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112f517e0,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112f517e0,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1032a34b8; end: 1032a350f;  */

undefined ** FUN_1032a34b8(void)

{
  return &PTR_DAT_1130665f8;
}



/* Entry: 1032a3510; end: 1032a3557; -[SCFollowCreatorsScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a3510(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f51840;
  func_0x000107c61428(param_1 + _DAT_112f51840,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1032a3558; end: 1032a35af; -[SCFollowCreatorsScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a3558(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f51840;
  func_0x000107c61428(param_1 + _DAT_112f51840,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1032a35b0; end: 1032a35f7; -[SCFollowCreatorsScopeGraphBridgeSaberEntryPoint followCreatorsScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a35b0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f51848;
  func_0x000107c61428(param_1 + _DAT_112f51848,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1032a35f8; end: 1032a365b; -[SCFollowCreatorsScopeGraphBridgeSaberEntryPoint setFollowCreatorsScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a35f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f51848;
  func_0x000107c61428(param_1 + _DAT_112f51848,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1032a365c; end: 1032a378f;  */

/* WARNING: Possible PIC construction at 0x0001032a3714: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032a3730: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032a374c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032a3718) */
/* WARNING: Removing unreachable block (ram,0x0001032a3734) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a365c(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  func_0x000107c43760();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_1032a2e90();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_1032a3108();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1032a3790);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112f51770) = lVar5;
    *(long *)(lVar4 + _DAT_112f51778) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1032a3790; end: 1032a37b7; -[SCFollowCreatorsScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1032a3790(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1032a365c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1032a37b8; end: 1032a37fb; -[SCFollowCreatorsScopeGraphBridgeSaberEntryPoint end] */

void FUN_1032a37b8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1032a37fc; end: 1032a3993;  */

void FUN_1032a37fc(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffd3) || (param_3 != -0x7ffffffef0eca450)) {
      uVar2 = 0xd00000000000002d;
      func_0x000107c605b8(0xd00000000000002d,0x800000010f135bb0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "FollowCreatorsScopeGraphBridge/SCFollowCreatorsScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x54,2,0x2f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1032a3994);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c54ad4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1032a3994; end: 1032a3a3f; -[SCFollowCreatorsScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1032a3994(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_1032a37fc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1032a3a40; end: 1032a3aab; -[SCFollowCreatorsScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a3a40(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f51840,0);
  *(undefined8 *)(param_1 + _DAT_112f51848) = 0;
  *(undefined8 *)(param_1 + _DAT_112f51850) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1032a3aac; end: 1032a3adf;  */

void FUN_1032a3aac(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1032a3ae0; end: 1032a3b27; -[SCFollowCreatorsScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001032a3b0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032a3b10) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a3ae0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f51840);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f51848));
  return;
}


