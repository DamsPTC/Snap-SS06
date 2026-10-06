/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1024b0a10; end: 1024b0a43; -[_TtC33ContentStoryManagementOperaPlugin44ContentStoryManagementOperaPluginCreatorImpl createPlugin] */

void FUN_1024b0a10(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c6157c();
  func_0x0001024b0258();
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1024b0a44; end: 1024b0bb7;  */

void FUN_1024b0a44(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x168));
  return;
}



/* Entry: 1024b0bb8; end: 1024b0cfb;  */

void FUN_1024b0bb8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_48;
  
  uVar1 = 0x112e9ee00;
  func_0x000100083b20(&uStack_48);
  func_0x0001000285a8(0x112e9ee00,&UNK_10daaf8c0);
  func_0x000107c610f8();
  uVar2 = uStack_48;
  (*(code *)&SUB_1003b3b80)(uStack_48,uVar1);
  puVar3 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 1024b0cfc; end: 1024b0d8f;  */

void FUN_1024b0cfc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,code *param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c610f8();
  uVar1 = uStack_48;
  (*param_4)(uStack_48,param_2);
  uVar2 = *param_5;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 1024b0d90; end: 1024b0d9f;  */

undefined1  [16] FUN_1024b0d90(void)

{
  return ZEXT816(0x110513730);
}



/* Entry: 1024b0da0; end: 1024b0dbf;  */

void FUN_1024b0da0(void)

{
  func_0x000107c61168(&PTR_PTR_112e9ec10);
  return;
}



/* Entry: 1024b0dc0; end: 1024b0e77;  */

undefined1  [16] FUN_1024b0dc0(void)

{
  return ZEXT816(0x110513750);
}



/* Entry: 1024b0e78; end: 1024b0ebb;  */

void FUN_1024b0e78(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 1024b0ebc; end: 1024b0f53;  */

void FUN_1024b0ebc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e9ee08,&UNK_10daaf8d0);
  puVar1 = &UNK_110513958;
  func_0x000107c613fc(&UNK_110513958,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_1024b1104,puVar1);
  return;
}



/* Entry: 1024b0f54; end: 1024b1103;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024b0f54(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lStack_58;
  long lVar4;
  
  func_0x000100083b20(&lStack_58);
  lVar7 = lStack_58;
  lVar3 = lStack_58;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  if (lVar3 != 0) {
    lVar7 = lVar3;
    func_0x000108f49578();
    if (((int)lVar7 != 0) && (lVar7 = lVar3, func_0x000108f4958c(), (int)lVar7 != 0)) {
      func_0x000100083b20(&lStack_58);
      lVar4 = lStack_58;
      lVar7 = lStack_58;
      func_0x000107c4ec80();
      func_0x000107c61180();
      func_0x000107c61170();
      iVar2 = (int)lVar4;
      func_0x000108f49cd0();
      if (iVar2 != 0) {
        lVar4 = lVar7;
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar4 != 0) {
          func_0x000107c61174();
          puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
          puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
          FUN_1024a2fc0(PTR___swiftEmptyArrayStorage_11034f1c8);
          func_0x000103b65358();
          func_0x000107c61170(lVar4);
          func_0x000107c6142c(puVar5);
          func_0x000107c61174(lVar4);
          func_0x000103b65750(puVar1);
          func_0x000107c61170(lVar4);
          func_0x000107c61170(lVar4);
        }
      }
      func_0x000107c615f0(lVar3);
      func_0x000100083b20(&lStack_58);
      uVar8 = *(undefined8 *)(lStack_58 + _DAT_113041e48);
      func_0x000107c615f0(uVar8);
      func_0x000107c61170(lStack_58);
      lVar4 = lStack_58;
      func_0x000108f49cd8();
      uVar6 = 0;
      func_0x000103b61cf8(0);
      func_0x000107c610f8();
      func_0x000103b60148(lVar7,lVar3,uVar8,lVar4,uVar6);
      func_0x000107c615e8(lVar3);
      goto LAB_1024b10e4;
    }
    func_0x000107c615e8(lVar3);
  }
  lVar7 = 0;
LAB_1024b10e4:
  *param_1 = lVar7;
  return;
}



/* Entry: 1024b1104; end: 1024b111f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024b1104(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x20;
  undefined8 uVar8;
  long lStack_58;
  long lVar4;
  
  func_0x000100083b20(&lStack_58,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20));
  lVar7 = lStack_58;
  lVar3 = lStack_58;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  if (lVar3 != 0) {
    lVar7 = lVar3;
    func_0x000108f49578();
    if (((int)lVar7 != 0) && (lVar7 = lVar3, func_0x000108f4958c(), (int)lVar7 != 0)) {
      func_0x000100083b20(&lStack_58);
      lVar4 = lStack_58;
      lVar7 = lStack_58;
      func_0x000107c4ec80();
      func_0x000107c61180();
      func_0x000107c61170();
      iVar2 = (int)lVar4;
      func_0x000108f49cd0();
      if (iVar2 != 0) {
        lVar4 = lVar7;
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar4 != 0) {
          func_0x000107c61174();
          puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
          puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
          FUN_1024a2fc0(PTR___swiftEmptyArrayStorage_11034f1c8);
          func_0x000103b65358();
          func_0x000107c61170(lVar4);
          func_0x000107c6142c(puVar5);
          func_0x000107c61174(lVar4);
          func_0x000103b65750(puVar1);
          func_0x000107c61170(lVar4);
          func_0x000107c61170(lVar4);
        }
      }
      func_0x000107c615f0(lVar3);
      func_0x000100083b20(&lStack_58);
      uVar8 = *(undefined8 *)(lStack_58 + _DAT_113041e48);
      func_0x000107c615f0(uVar8);
      func_0x000107c61170(lStack_58);
      lVar4 = lStack_58;
      func_0x000108f49cd8();
      uVar6 = 0;
      func_0x000103b61cf8(0);
      func_0x000107c610f8();
      func_0x000103b60148(lVar7,lVar3,uVar8,lVar4,uVar6);
      func_0x000107c615e8(lVar3);
      goto LAB_1024b10e4;
    }
    func_0x000107c615e8(lVar3);
  }
  lVar7 = 0;
LAB_1024b10e4:
  *param_1 = lVar7;
  return;
}



/* Entry: 1024b1120; end: 1024b118f;  */

void FUN_1024b1120(void)

{
  func_0x0001000285a8(0x112e9ee10,&UNK_10daaf940);
  func_0x0001000823a8(0x1024b1160,0);
  return;
}



/* Entry: 1024b1190; end: 1024b119f;  */

undefined1  [16] FUN_1024b1190(void)

{
  return ZEXT816(0x1105139a0);
}



/* Entry: 1024b11a0; end: 1024b11b7; -[_TtC32SpotlightRepliesTrayPageLauncher39SpotlightRepliesTrayPageLauncherHandler payloadClass] */

void FUN_1024b11a0(void)

{
  func_0x00010432ef64(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getObjCClassFromMetadata_11034f3a0)();
  return;
}



/* Entry: 1024b11b8; end: 1024b11bb; -[_TtC32SpotlightRepliesTrayPageLauncher39SpotlightRepliesTrayPageLauncherHandler setPayloadClass:] */

void FUN_1024b11b8(void)

{
  return;
}



/* Entry: 1024b11bc; end: 1024b12d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1024b11bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  puVar3 = auStack_60;
  func_0x000107c610f8();
  lVar2 = _DAT_112e9ee18;
  func_0x000107c61614(unaff_x20 + _DAT_112e9ee18,0);
  *(undefined8 *)(unaff_x20 + _DAT_112e9ee20) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e9ee28) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e9ee30) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e9ee38) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112e9ee40) = param_5;
  func_0x000107c61604(unaff_x20 + lVar2,param_4);
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c615f0(param_3);
  func_0x000107c61154(auStack_60,puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_4);
  return puVar3;
}



/* Entry: 1024b12d4; end: 1024b199b;  */

/* WARNING: Possible PIC construction at 0x0001024b1348: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024b1384: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024b14d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024b1514: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024b1584: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024b15a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024b1600: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024b161c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024b174c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024b176c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024b17b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024b183c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024b1858: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024b191c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024b1938: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024b1948: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024b193c) */
/* WARNING: Removing unreachable block (ram,0x0001024b1920) */
/* WARNING: Removing unreachable block (ram,0x0001024b185c) */
/* WARNING: Removing unreachable block (ram,0x0001024b1840) */
/* WARNING: Removing unreachable block (ram,0x0001024b1844) */
/* WARNING: Removing unreachable block (ram,0x0001024b17bc) */
/* WARNING: Removing unreachable block (ram,0x0001024b17dc) */
/* WARNING: Removing unreachable block (ram,0x0001024b17c0) */
/* WARNING: Removing unreachable block (ram,0x0001024b17c8) */
/* WARNING: Removing unreachable block (ram,0x0001024b17e4) */
/* WARNING: Removing unreachable block (ram,0x0001024b17d0) */
/* WARNING: Removing unreachable block (ram,0x0001024b1800) */
/* WARNING: Removing unreachable block (ram,0x0001024b1808) */
/* WARNING: Removing unreachable block (ram,0x0001024b1860) */
/* WARNING: Removing unreachable block (ram,0x0001024b1868) */
/* WARNING: Removing unreachable block (ram,0x0001024b187c) */
/* WARNING: Removing unreachable block (ram,0x0001024b1884) */
/* WARNING: Removing unreachable block (ram,0x0001024b188c) */
/* WARNING: Removing unreachable block (ram,0x0001024b1890) */
/* WARNING: Removing unreachable block (ram,0x0001024b1824) */
/* WARNING: Removing unreachable block (ram,0x0001024b1770) */
/* WARNING: Removing unreachable block (ram,0x0001024b1750) */
/* WARNING: Removing unreachable block (ram,0x0001024b1784) */
/* WARNING: Removing unreachable block (ram,0x0001024b1758) */
/* WARNING: Removing unreachable block (ram,0x0001024b1620) */
/* WARNING: Removing unreachable block (ram,0x0001024b1604) */
/* WARNING: Removing unreachable block (ram,0x0001024b1608) */
/* WARNING: Removing unreachable block (ram,0x0001024b15ac) */
/* WARNING: Removing unreachable block (ram,0x0001024b1624) */
/* WARNING: Removing unreachable block (ram,0x0001024b162c) */
/* WARNING: Removing unreachable block (ram,0x0001024b15b4) */
/* WARNING: Removing unreachable block (ram,0x0001024b1638) */
/* WARNING: Removing unreachable block (ram,0x0001024b15c0) */
/* WARNING: Removing unreachable block (ram,0x0001024b1980) */
/* WARNING: Removing unreachable block (ram,0x0001024b15c8) */
/* WARNING: Removing unreachable block (ram,0x0001024b1990) */
/* WARNING: Removing unreachable block (ram,0x0001024b15d4) */
/* WARNING: Removing unreachable block (ram,0x0001024b15dc) */
/* WARNING: Removing unreachable block (ram,0x0001024b1588) */
/* WARNING: Removing unreachable block (ram,0x0001024b1998) */
/* WARNING: Removing unreachable block (ram,0x0001024b158c) */
/* WARNING: Removing unreachable block (ram,0x0001024b1518) */
/* WARNING: Removing unreachable block (ram,0x0001024b14dc) */
/* WARNING: Removing unreachable block (ram,0x0001024b1524) */
/* WARNING: Removing unreachable block (ram,0x0001024b152c) */
/* WARNING: Removing unreachable block (ram,0x0001024b1548) */
/* WARNING: Removing unreachable block (ram,0x0001024b1640) */
/* WARNING: Removing unreachable block (ram,0x0001024b1648) */
/* WARNING: Removing unreachable block (ram,0x0001024b1678) */
/* WARNING: Removing unreachable block (ram,0x0001024b1684) */
/* WARNING: Removing unreachable block (ram,0x0001024b16a0) */
/* WARNING: Removing unreachable block (ram,0x0001024b16a8) */
/* WARNING: Removing unreachable block (ram,0x0001024b1774) */
/* WARNING: Removing unreachable block (ram,0x0001024b178c) */
/* WARNING: Removing unreachable block (ram,0x0001024b1734) */
/* WARNING: Removing unreachable block (ram,0x0001024b156c) */
/* WARNING: Removing unreachable block (ram,0x0001024b14f0) */
/* WARNING: Removing unreachable block (ram,0x0001024b1994) */
/* WARNING: Removing unreachable block (ram,0x0001024b1504) */
/* WARNING: Removing unreachable block (ram,0x0001024b1388) */
/* WARNING: Removing unreachable block (ram,0x0001024b139c) */
/* WARNING: Removing unreachable block (ram,0x0001024b13fc) */
/* WARNING: Removing unreachable block (ram,0x0001024b13ac) */
/* WARNING: Removing unreachable block (ram,0x0001024b134c) */
/* WARNING: Removing unreachable block (ram,0x0001024b1350) */
/* WARNING: Removing unreachable block (ram,0x0001024b13d4) */
/* WARNING: Removing unreachable block (ram,0x0001024b136c) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Removing unreachable block (ram,0x0001024b194c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024b12d4(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_112e9ee18;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1024b199c; end: 1024b1a7f; -[_TtC32SpotlightRepliesTrayPageLauncher39SpotlightRepliesTrayPageLauncherHandler launchWithPayload:completion:] */

void FUN_1024b199c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_68;
  undefined8 auStack_60 [3];
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_40);
    func_0x000107c615e8(param_3);
  }
  func_0x000100672b50(&uStack_40,auStack_60);
  if (lStack_48 == 0) {
    func_0x000107c61170(param_1);
    func_0x00010006e7f4(&uStack_40);
    puVar2 = auStack_60;
  }
  else {
    uVar1 = 0;
    func_0x00010432ef64(0);
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,auStack_60,PTR___sypN_11034f1a8 + 8,uVar1,6);
    if (((ulong)puVar2 & 1) != 0) {
      FUN_1024b12d4(uStack_68);
      func_0x000107c61170(param_1);
      param_1 = uStack_68;
    }
    func_0x000107c61170(param_1);
    puVar2 = &uStack_40;
  }
  func_0x00010006e7f4(puVar2);
  return;
}



/* Entry: 1024b1a80; end: 1024b1adf; -[_TtC32SpotlightRepliesTrayPageLauncher39SpotlightRepliesTrayPageLauncherHandler init] */

void FUN_1024b1a80(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpotlightRepliesTrayPageLauncher.SpotlightRepliesTrayPageLauncherHandler",
                      0x48,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024b1aac);
  (*pcVar1)();
}



/* Entry: 1024b1ae0; end: 1024b1b57; -[_TtC32SpotlightRepliesTrayPageLauncher39SpotlightRepliesTrayPageLauncherHandler .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001024b1afc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024b1b2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024b1b00) */
/* WARNING: Removing unreachable block (ram,0x0001024b1b30) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024b1ae0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e9ee28));
  return;
}



/* Entry: 1024b1b58; end: 1024b1c2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024b1b58(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  lVar2 = _DAT_112e9ee28;
  lVar1 = _DAT_112e9ee20;
  if (param_1 != 0) {
    lVar3 = *(long *)(param_1 + _DAT_112e9ee20);
    if (lVar3 != 0) {
      iVar4 = (int)*(undefined8 *)(param_1 + _DAT_112e9ee28);
      func_0x000107c61174(lVar3);
      func_0x000107c49d24();
      if (iVar4 == 0) {
        func_0x000107c61170(lVar3);
      }
      else {
        func_0x000107c4ffec(*(undefined8 *)(param_1 + lVar2));
        func_0x000107c61180();
        func_0x000107c615e8();
        func_0x000107c61170(lVar3);
        *(undefined8 *)(param_1 + lVar1) = 0;
        func_0x000107c61170(param_1);
      }
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1024b1c30; end: 1024b1de7;  */

/* WARNING: Possible PIC construction at 0x0001024b1c90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024b1c94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024b1c30(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112e9ee20);
  if (lVar1 == 0) {
    return;
  }
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112e9ee28);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c49d24(uVar3,param_2,lVar1);
  if ((int)uVar2 != 0) {
    func_0x000107c4ffec(uVar3,param_2,lVar1);
    func_0x000107c61180();
    func_0x000107c615e8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1024b1de8; end: 1024b1e0f; -[_TtC32SpotlightRepliesTrayPageLauncher39SpotlightRepliesTrayPageLauncherHandler didCompleteSpotlightRepliesScope] */

void FUN_1024b1de8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1024b1c30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1024b1e10; end: 1024b1e13; -[_TtC32SpotlightRepliesTrayPageLauncher39SpotlightRepliesTrayPageLauncherHandler modalPresentationOnCommentsTrayDidEnd] */

void FUN_1024b1e10(void)

{
  return;
}



/* Entry: 1024b1e14; end: 1024b1e33;  */

void FUN_1024b1e14(void)

{
  func_0x000107c61168(&PTR_PTR_1128469b0);
  return;
}



/* Entry: 1024b1e34; end: 1024b1e5b; -[_TtC32SpotlightRepliesTrayPageLauncher39SpotlightRepliesTrayPageLauncherHandler modalDismissalOnCommentsTrayDidEnd] */

void FUN_1024b1e34(void)

{
  return;
}



/* Entry: 1024b1e5c; end: 1024b1e9f;  */

void FUN_1024b1e5c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e9ee70 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126d50b8;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112e9ee70 = puVar1;
  return;
}



/* Entry: 1024b1ea0; end: 1024b2053;  */

ulong FUN_1024b1ea0(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1024b1f84);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1024b1f88);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126d50b8;
    func_0x000107c61168(PTR_PTR_1126d50b8);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126d50b8;
    func_0x000107c61168(PTR_PTR_1126d50b8);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_1024b1e5c(0);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1024b2054);
  (*pcVar2)();
}



/* Entry: 1024b2054; end: 1024b210f;  */

void FUN_1024b2054(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e4c7e0,&UNK_10da460f0);
  puVar1 = &UNK_110513ab8;
  func_0x000107c613fc(&UNK_110513ab8,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x0001000823a8(FUN_1024b2374,puVar1);
  return;
}



/* Entry: 1024b2110; end: 1024b2373;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024b2110(long *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  FUN_1024b2734();
  lVar4 = param_2;
  func_0x000107c610f8();
  func_0x000100083b20(&lStack_68);
  lVar5 = lStack_68;
  uVar7 = 0x112e9ee78;
  func_0x0001000285a8(0x112e9ee78,&UNK_10daaf9d8);
  func_0x000107c610f8();
  func_0x0001003b3b80(lVar5,uVar7);
  puVar6 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(lVar5);
  func_0x000100083b20(&lStack_68);
  uVar7 = *(undefined8 *)(lStack_68 + _DAT_112ff1e00);
  func_0x000107c61174();
  func_0x000107c61170(lStack_68);
  func_0x000100083b20(&lStack_70);
  lVar5 = lStack_70;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(lStack_70);
  if (lVar5 != 0) {
    func_0x000100083b20(&uStack_78);
    lVar8 = lStack_70;
    func_0x00010451338c();
    func_0x000107c61170(uStack_78);
    func_0x000100083b20(&lStack_80);
    uVar9 = *(undefined8 *)(lStack_80 + _DAT_113091ad8);
    func_0x000107c61174();
    func_0x000107c61170(lStack_80);
    lVar10 = 0;
    FUN_1024b1e14();
    lVar11 = lVar10;
    func_0x000107c610f8();
    lVar2 = _DAT_112e9ee18;
    func_0x000107c61614(lVar11 + _DAT_112e9ee18,0);
    *(undefined8 *)(lVar11 + _DAT_112e9ee20) = 0;
    *(undefined **)(lVar11 + _DAT_112e9ee28) = puVar6;
    *(undefined8 *)(lVar11 + _DAT_112e9ee30) = uVar7;
    *(long *)(lVar11 + _DAT_112e9ee38) = lVar5;
    *(undefined8 *)(lVar11 + _DAT_112e9ee40) = uVar9;
    func_0x000107c61604(lVar11 + lVar2,lVar8);
    puVar1 = PTR_s_init_1125d9248;
    lStack_90 = lVar11;
    lStack_88 = lVar10;
    func_0x000107c61174(uVar7);
    func_0x000107c61174(puVar6);
    func_0x000107c615f0(lVar5);
    plVar12 = &lStack_90;
    func_0x000107c61154(plVar12,puVar1);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c615e8(lVar5);
    func_0x000107c61170(lVar8);
    *(long **)(lVar4 + _DAT_112e9ee80) = plVar12;
    plVar12 = &lStack_a0;
    lStack_a0 = lVar4;
    lStack_98 = param_2;
    func_0x000107c61154(plVar12,PTR_s_init_1125d9248);
    *param_1 = (long)plVar12;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1024b2374);
  (*pcVar3)();
}



/* Entry: 1024b2374; end: 1024b2383;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024b2374(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long unaff_x20;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  FUN_1024b2734(lVar4,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  lVar5 = lVar4;
  func_0x000107c610f8();
  func_0x000100083b20(&lStack_68);
  lVar6 = lStack_68;
  uVar8 = 0x112e9ee78;
  func_0x0001000285a8(0x112e9ee78,&UNK_10daaf9d8);
  func_0x000107c610f8();
  func_0x0001003b3b80(lVar6,uVar8);
  puVar7 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(lVar6);
  func_0x000100083b20(&lStack_68);
  uVar8 = *(undefined8 *)(lStack_68 + _DAT_112ff1e00);
  func_0x000107c61174();
  func_0x000107c61170(lStack_68);
  func_0x000100083b20(&lStack_70);
  lVar6 = lStack_70;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(lStack_70);
  if (lVar6 != 0) {
    func_0x000100083b20(&uStack_78);
    lVar9 = lStack_70;
    func_0x00010451338c();
    func_0x000107c61170(uStack_78);
    func_0x000100083b20(&lStack_80);
    uVar10 = *(undefined8 *)(lStack_80 + _DAT_113091ad8);
    func_0x000107c61174();
    func_0x000107c61170(lStack_80);
    lVar11 = 0;
    FUN_1024b1e14();
    lVar12 = lVar11;
    func_0x000107c610f8();
    lVar2 = _DAT_112e9ee18;
    func_0x000107c61614(lVar12 + _DAT_112e9ee18,0);
    *(undefined8 *)(lVar12 + _DAT_112e9ee20) = 0;
    *(undefined **)(lVar12 + _DAT_112e9ee28) = puVar7;
    *(undefined8 *)(lVar12 + _DAT_112e9ee30) = uVar8;
    *(long *)(lVar12 + _DAT_112e9ee38) = lVar6;
    *(undefined8 *)(lVar12 + _DAT_112e9ee40) = uVar10;
    func_0x000107c61604(lVar12 + lVar2,lVar9);
    puVar1 = PTR_s_init_1125d9248;
    lStack_90 = lVar12;
    lStack_88 = lVar11;
    func_0x000107c61174(uVar8);
    func_0x000107c61174(puVar7);
    func_0x000107c615f0(lVar6);
    plVar13 = &lStack_90;
    func_0x000107c61154(plVar13,puVar1);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c615e8(lVar6);
    func_0x000107c61170(lVar9);
    *(long **)(lVar5 + _DAT_112e9ee80) = plVar13;
    plVar13 = &lStack_a0;
    lStack_a0 = lVar5;
    lStack_98 = lVar4;
    func_0x000107c61154(plVar13,PTR_s_init_1125d9248);
    *param_1 = (long)plVar13;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1024b2374);
  (*pcVar3)();
}



/* Entry: 1024b2384; end: 1024b261f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1024b2384(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined1 *puVar12;
  long unaff_x20;
  undefined1 auStack_a0 [16];
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  func_0x000107c610f8();
  func_0x000100083b20(&lStack_68);
  lVar4 = lStack_68;
  func_0x0001000285a8(0x112e9ee78,&UNK_10daaf9d8);
  func_0x000107c610f8();
  func_0x0001003b3b80(lVar4);
  puVar5 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(lVar4);
  func_0x000100083b20(&lStack_68);
  uVar6 = *(undefined8 *)(lStack_68 + _DAT_112ff1e00);
  func_0x000107c61174();
  func_0x000107c61170(lStack_68);
  func_0x000100083b20(&lStack_70);
  lVar4 = lStack_70;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(lStack_70);
  if (lVar4 != 0) {
    func_0x000100083b20(&uStack_78);
    lVar7 = lStack_70;
    func_0x00010451338c();
    func_0x000107c61170(uStack_78);
    func_0x000100083b20(&lStack_80);
    uVar8 = *(undefined8 *)(lStack_80 + _DAT_113091ad8);
    func_0x000107c61174();
    func_0x000107c61170(lStack_80);
    lVar9 = 0;
    FUN_1024b1e14();
    lVar10 = lVar9;
    func_0x000107c610f8();
    lVar2 = _DAT_112e9ee18;
    func_0x000107c61614(lVar10 + _DAT_112e9ee18,0);
    *(undefined8 *)(lVar10 + _DAT_112e9ee20) = 0;
    *(undefined **)(lVar10 + _DAT_112e9ee28) = puVar5;
    *(undefined8 *)(lVar10 + _DAT_112e9ee30) = uVar6;
    *(long *)(lVar10 + _DAT_112e9ee38) = lVar4;
    *(undefined8 *)(lVar10 + _DAT_112e9ee40) = uVar8;
    func_0x000107c61604(lVar10 + lVar2,lVar7);
    puVar1 = PTR_s_init_1125d9248;
    lStack_90 = lVar10;
    lStack_88 = lVar9;
    func_0x000107c61174(uVar6);
    func_0x000107c61174(puVar5);
    func_0x000107c615f0(lVar4);
    plVar11 = &lStack_90;
    func_0x000107c61154(plVar11,puVar1);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c615e8(lVar4);
    func_0x000107c61170(lVar7);
    *(long **)(unaff_x20 + _DAT_112e9ee80) = plVar11;
    puVar12 = auStack_a0;
    func_0x000107c61154(puVar12,PTR_s_init_1125d9248);
    func_0x000107c61574(param_1);
    func_0x000107c61574(param_2);
    func_0x000107c61574(param_3);
    func_0x000107c61574(param_4);
    func_0x000107c61574(param_5);
    return puVar12;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1024b2620);
  (*pcVar3)();
}



/* Entry: 1024b2620; end: 1024b26af; -[_TtC32SpotlightRepliesTrayPageLauncher38SpotlightRepliesTrayPageLauncherPlugin nativePayloadHandlers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024b2620(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x000100f1b134();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 3;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_1 + _DAT_112e9ee80);
  func_0x000107c61174();
  uVar2 = 0x112d4bc28;
  func_0x0001000285a8(0x112d4bc28,&DAT_10d9133e0);
  lVar3 = lVar1;
  func_0x000107c5fc48(lVar1,uVar2);
  func_0x000107c61574(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1024b26b0; end: 1024b26b3; -[_TtC32SpotlightRepliesTrayPageLauncher38SpotlightRepliesTrayPageLauncherPlugin setNativePayloadHandlers:] */

void FUN_1024b26b0(void)

{
  return;
}



/* Entry: 1024b26b4; end: 1024b2713; -[_TtC32SpotlightRepliesTrayPageLauncher38SpotlightRepliesTrayPageLauncherPlugin init] */

void FUN_1024b26b4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpotlightRepliesTrayPageLauncher.SpotlightRepliesTrayPageLauncherPlugin",0x47
                      ,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024b26e0);
  (*pcVar1)();
}



/* Entry: 1024b2714; end: 1024b2733; -[_TtC32SpotlightRepliesTrayPageLauncher38SpotlightRepliesTrayPageLauncherPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024b2714(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e9ee80));
  return;
}



/* Entry: 1024b2734; end: 1024b2753;  */

void FUN_1024b2734(void)

{
  func_0x000107c61168(&PTR_PTR_112846a98);
  return;
}



/* Entry: 1024b2754; end: 1024b27bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024b2754(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1024b2b48();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e9eeb8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1024b27c0; end: 1024b282b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024b27c0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e9eeb8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1024b282c; end: 1024b288b; -[_TtC37SpotlightScopedFactoryServiceProvider25SCSpotlightScopedServices init] */

void FUN_1024b282c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpotlightScopedFactoryServiceProvider.SCSpotlightScopedServices",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024b2858);
  (*pcVar1)();
}



/* Entry: 1024b288c; end: 1024b289b; -[_TtC37SpotlightScopedFactoryServiceProvider25SCSpotlightScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024b288c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e9eeb8));
  return;
}



/* Entry: 1024b289c; end: 1024b2907;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024b289c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110513cb8;
  func_0x000107c613fc(&UNK_110513cb8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1024b2be0,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1024b2908; end: 1024b29a3;  */

void FUN_1024b2908(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110513bc8;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110513bc8;
  return;
}



/* Entry: 1024b29a4; end: 1024b29db;  */

void FUN_1024b29a4(long *param_1)

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



/* Entry: 1024b29dc; end: 1024b29e3;  */

undefined8 FUN_1024b29dc(void)

{
  return 0x1b;
}



/* Entry: 1024b29e4; end: 1024b2b17;  */

void FUN_1024b29e4(undefined8 *param_1)

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
  puVar1 = &UNK_110513ce0;
  func_0x000107c613fc(&UNK_110513ce0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1024b2bb8;
  func_0x00010058fa64(FUN_1024b2bb8,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1024b2b18; end: 1024b2b47;  */

undefined ** FUN_1024b2b18(void)

{
  return &PTR_DAT_113067000;
}



/* Entry: 1024b2b48; end: 1024b2b67;  */

void FUN_1024b2b48(void)

{
  func_0x000107c61168(&PTR_PTR_112846b58);
  return;
}



/* Entry: 1024b2b68; end: 1024b2bb7;  */

undefined1  [16] FUN_1024b2b68(void)

{
  return ZEXT816(0x110513c18);
}



/* Entry: 1024b2bb8; end: 1024b2bdf;  */

void FUN_1024b2bb8(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1024b2be0; end: 1024b2bf3;  */

void FUN_1024b2be0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1024b2bf4; end: 1024b431f;  */

void FUN_1024b2bf4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
                  undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
                  undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
                  undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
                  undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
                  undefined8 param_61,undefined8 param_62,undefined8 param_63,undefined8 param_64,
                  undefined8 param_65,undefined8 param_66,undefined8 param_67,undefined8 param_68,
                  undefined8 param_69,undefined8 param_70,undefined8 param_71)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  undefined8 *puVar15;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  char *pcVar19;
  char *pcVar20;
  char *pcVar21;
  char *pcVar22;
  char *pcVar23;
  char *pcVar24;
  char *pcVar25;
  char *pcVar26;
  char *pcVar27;
  code *pcVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  code *pcVar31;
  code *pcVar32;
  code *pcVar33;
  code *pcVar34;
  undefined *puVar35;
  undefined8 uVar36;
  undefined8 *puVar37;
  code *pcVar38;
  code *pcVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 in_stack_000001f0;
  undefined8 in_stack_000001f8;
  undefined8 in_stack_00000200;
  undefined8 in_stack_00000208;
  undefined8 in_stack_00000210;
  undefined8 in_stack_00000218;
  undefined8 in_stack_00000220;
  undefined8 in_stack_00000228;
  undefined8 in_stack_00000230;
  undefined8 in_stack_00000238;
  undefined8 in_stack_00000240;
  undefined8 in_stack_00000248;
  undefined8 in_stack_00000250;
  undefined8 in_stack_00000258;
  undefined8 in_stack_00000260;
  undefined8 in_stack_00000268;
  undefined8 in_stack_00000270;
  undefined8 in_stack_00000278;
  undefined8 in_stack_00000280;
  undefined8 in_stack_00000288;
  undefined8 in_stack_00000290;
  undefined8 in_stack_00000298;
  undefined8 in_stack_000002a0;
  undefined8 in_stack_000002a8;
  undefined8 in_stack_000002b0;
  undefined8 in_stack_000002b8;
  undefined8 in_stack_000002c0;
  undefined8 in_stack_000002c8;
  undefined8 in_stack_000002d0;
  undefined8 in_stack_000002d8;
  undefined8 in_stack_000002e0;
  undefined8 in_stack_000002e8;
  undefined8 in_stack_000002f0;
  undefined8 in_stack_000002f8;
  undefined8 in_stack_00000300;
  undefined8 in_stack_00000308;
  undefined8 in_stack_00000310;
  undefined8 in_stack_00000318;
  undefined8 in_stack_00000320;
  undefined8 in_stack_00000328;
  undefined8 in_stack_00000330;
  undefined8 in_stack_00000338;
  undefined8 in_stack_00000340;
  undefined8 in_stack_00000348;
  undefined8 in_stack_00000350;
  undefined8 in_stack_00000358;
  undefined8 in_stack_00000360;
  undefined8 in_stack_00000368;
  undefined8 in_stack_00000370;
  undefined8 in_stack_00000378;
  undefined8 in_stack_00000380;
  undefined8 in_stack_00000388;
  undefined8 in_stack_00000390;
  undefined8 auStack_70 [2];
  
  uVar41 = *param_2;
  func_0x0001000285a8(0x112e9ef30,&UNK_10daafc90);
  puVar1 = auStack_70;
  auStack_70[0] = uVar41;
  func_0x0001000838ec();
  puVar2 = puVar1;
  func_0x0001024c64f0();
  pcVar3 = "CreatorsSpotlightSubmissionV2ScopeExposerSubjectServiceProvider";
  func_0x000100082720("CreatorsSpotlightSubmissionV2ScopeExposerSubjectServiceProvider",0x3f,2);
  FUN_1024c653c();
  pcVar4 = "SCBloopsReportScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCBloopsReportScopeExposerSubjectServiceProvider",0x30,2);
  FUN_1024c6588();
  pcVar5 = "SCBusinessProfilesPresenterScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCBusinessProfilesPresenterScopeExposerSubjectServiceProvider",0x3d,2);
  FUN_1024c65d4();
  pcVar6 = "SCCreatorsSpotlightSubmissionScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCCreatorsSpotlightSubmissionScopeExposerSubjectServiceProvider",0x3f,2);
  func_0x0001024c6654();
  pcVar7 = "SCDSAExplainerScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCDSAExplainerScopeExposerSubjectServiceProvider",0x30,2);
  FUN_1024c66a0();
  pcVar8 = "SCDeeplinkSendToScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCDeeplinkSendToScopeExposerSubjectServiceProvider",0x32,2);
  FUN_1024c66ec();
  pcVar9 = "SCDiscoverFeedExpandedStoryFeedScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCDiscoverFeedExpandedStoryFeedScopeExposerSubjectServiceProvider",0x41,2);
  FUN_1024c6738();
  pcVar10 = "SCDiscoverFeedManagementScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCDiscoverFeedManagementScopeExposerSubjectServiceProvider",0x3a,2);
  FUN_1024c6784();
  pcVar11 = "SCOperaSessionScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCOperaSessionScopeExposerSubjectServiceProvider",0x30,2);
  FUN_1024c67d0();
  pcVar12 = "SCSafetyReportScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCSafetyReportScopeExposerSubjectServiceProvider",0x30,2);
  FUN_1024c681c();
  pcVar13 = "SCSearchScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCSearchScopeExposerSubjectServiceProvider",0x2a,2);
  FUN_1024c6868();
  pcVar14 = "SCSendToScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCSendToScopeExposerSubjectServiceProvider",0x2a,2);
  FUN_1024c68b4();
  func_0x000100082720("SCSpotlightRepliesScopeExposerSubjectServiceProvider",0x34,2);
  FUN_1024cb6e4(param_3,param_4,param_5,param_6,param_7);
  func_0x000100082720("SCCreatorsSpotlightSubmissionScopedFactoryServiceProvider",0x39,2);
  FUN_1024c129c(param_8,param_9,param_10,param_11,param_12,param_13,param_14,param_15,param_16,
                param_17,param_18,param_19,param_20,param_21,param_22,param_23,param_24,param_5,
                param_25,param_26,param_27);
  func_0x000100082720("SCDiscoverFeedManagementScopedFactoryServiceProvider",0x34,2);
  puVar15 = puVar2;
  FUN_1024c6530();
  func_0x000100082720("CreatorsSpotlightSubmissionV2ScopeExposerObservableServiceProvider",0x42,2);
  pcVar16 = pcVar3;
  FUN_1024c657c();
  func_0x000100082720("SCBloopsReportScopeExposerObservableServiceProvider",0x33,2);
  pcVar17 = pcVar4;
  FUN_1024c65c8();
  func_0x000100082720("SCBusinessProfilesPresenterScopeExposerObservableServiceProvider",0x40,2);
  pcVar18 = pcVar5;
  FUN_1024c6614();
  func_0x000100082720("SCCreatorsSpotlightSubmissionScopeExposerObservableServiceProvider",0x42,2);
  pcVar19 = pcVar6;
  FUN_1024c6694();
  func_0x000100082720("SCDSAExplainerScopeExposerObservableServiceProvider",0x33,2);
  pcVar20 = pcVar7;
  FUN_1024c66e0();
  func_0x000100082720("SCDeeplinkSendToScopeExposerObservableServiceProvider",0x35,2);
  pcVar21 = pcVar8;
  FUN_1024c672c();
  func_0x000100082720("SCDiscoverFeedExpandedStoryFeedScopeExposerObservableServiceProvider",0x44,2)
  ;
  pcVar22 = pcVar9;
  FUN_1024c6778();
  func_0x000100082720("SCDiscoverFeedManagementScopeExposerObservableServiceProvider",0x3d,2);
  pcVar23 = pcVar10;
  FUN_1024c67c4();
  func_0x000100082720("SCOperaSessionScopeExposerObservableServiceProvider",0x33,2);
  pcVar24 = pcVar11;
  FUN_1024c6810();
  func_0x000100082720("SCSafetyReportScopeExposerObservableServiceProvider",0x33,2);
  pcVar25 = pcVar12;
  FUN_1024c685c();
  func_0x000100082720("SCSearchScopeExposerObservableServiceProvider",0x2d,2);
  pcVar26 = pcVar13;
  FUN_1024c68a8();
  func_0x000100082720("SCSendToScopeExposerObservableServiceProvider",0x2d,2);
  pcVar27 = pcVar14;
  FUN_1024c6940();
  func_0x000100082720("SCSpotlightRepliesScopeExposerObservableServiceProvider",0x37,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar28 = FUN_1024b29a4;
  func_0x0001000823a8(FUN_1024b29a4,0);
  func_0x000100082720("SCSpotlightScopedServicesCleanupRelayServiceProvider",0x34,2);
  uVar29 = param_3;
  func_0x000104318ed0();
  func_0x000100082720("SCCreatorsSpotlightSubmissionScopeServicesServiceProvider",0x39,2);
  uVar30 = param_8;
  func_0x000102fe3f20();
  func_0x000100082720("SCDiscoverFeedManagementScopeServicesServiceProvider",0x34,2);
  func_0x0001000285a8(0x112e9ef38,&UNK_10daafca0);
  puVar35 = &UNK_110513d90;
  func_0x000107c613fc(&UNK_110513d90,0x378,7);
  *(undefined8 **)(puVar35 + 0x10) = puVar1;
  *(undefined8 *)(puVar35 + 0x18) = param_28;
  *(undefined8 *)(puVar35 + 0x20) = param_29;
  *(undefined8 *)(puVar35 + 0x28) = param_30;
  *(undefined8 *)(puVar35 + 0x30) = param_31;
  *(undefined8 *)(puVar35 + 0x38) = param_27;
  *(undefined8 *)(puVar35 + 0x40) = param_32;
  *(undefined8 *)(puVar35 + 0x48) = param_13;
  *(undefined8 *)(puVar35 + 0x50) = param_15;
  *(undefined8 *)(puVar35 + 0x58) = param_16;
  *(undefined8 *)(puVar35 + 0x60) = param_33;
  *(undefined8 *)(puVar35 + 0x68) = param_34;
  *(undefined8 *)(puVar35 + 0x70) = param_35;
  *(undefined8 *)(puVar35 + 0x78) = param_36;
  *(undefined8 *)(puVar35 + 0x80) = param_37;
  *(undefined8 *)(puVar35 + 0x88) = param_38;
  *(undefined8 *)(puVar35 + 0x90) = param_25;
  *(undefined8 *)(puVar35 + 0x98) = param_39;
  *(undefined8 *)(puVar35 + 0xa0) = param_40;
  *(undefined8 *)(puVar35 + 0xa8) = param_41;
  *(undefined8 *)(puVar35 + 0xb0) = param_20;
  *(undefined8 *)(puVar35 + 0xb8) = param_18;
  *(undefined8 *)(puVar35 + 0xc0) = param_14;
  *(undefined8 *)(puVar35 + 200) = param_19;
  *(undefined8 *)(puVar35 + 0xd0) = param_42;
  *(undefined8 *)(puVar35 + 0xd8) = param_43;
  *(undefined8 *)(puVar35 + 0xe0) = param_44;
  *(undefined8 *)(puVar35 + 0xe8) = param_17;
  *(undefined8 *)(puVar35 + 0xf0) = param_45;
  *(undefined8 *)(puVar35 + 0xf8) = param_46;
  *(undefined8 *)(puVar35 + 0x100) = param_47;
  *(undefined8 *)(puVar35 + 0x108) = param_48;
  *(undefined8 *)(puVar35 + 0x110) = param_9;
  *(undefined8 *)(puVar35 + 0x118) = param_49;
  *(undefined8 *)(puVar35 + 0x120) = param_50;
  *(undefined8 *)(puVar35 + 0x128) = param_51;
  *(undefined8 *)(puVar35 + 0x130) = param_52;
  *(undefined8 *)(puVar35 + 0x138) = param_53;
  *(undefined8 *)(puVar35 + 0x140) = param_11;
  *(undefined8 *)(puVar35 + 0x148) = param_10;
  *(undefined8 *)(puVar35 + 0x150) = param_54;
  *(undefined8 *)(puVar35 + 0x158) = param_55;
  *(undefined8 *)(puVar35 + 0x160) = param_56;
  *(undefined8 *)(puVar35 + 0x168) = param_21;
  *(undefined8 *)(puVar35 + 0x170) = param_57;
  *(undefined8 *)(puVar35 + 0x178) = param_58;
  *(undefined8 *)(puVar35 + 0x180) = param_59;
  *(undefined8 *)(puVar35 + 0x188) = param_60;
  *(undefined8 *)(puVar35 + 400) = param_61;
  *(undefined8 *)(puVar35 + 0x198) = param_62;
  *(undefined8 *)(puVar35 + 0x1a0) = param_63;
  *(undefined8 *)(puVar35 + 0x1a8) = param_64;
  *(undefined8 *)(puVar35 + 0x1b0) = param_22;
  *(undefined8 *)(puVar35 + 0x1b8) = param_65;
  *(undefined8 *)(puVar35 + 0x1c0) = param_66;
  *(undefined8 *)(puVar35 + 0x1c8) = param_67;
  *(undefined8 *)(puVar35 + 0x1d0) = param_68;
  *(undefined8 *)(puVar35 + 0x1d8) = param_69;
  *(undefined8 *)(puVar35 + 0x1e0) = param_70;
  *(undefined8 *)(puVar35 + 0x1e8) = param_71;
  *(undefined8 *)(puVar35 + 0x1f0) = in_stack_000001f0;
  *(undefined8 *)(puVar35 + 0x1f8) = in_stack_000001f8;
  *(undefined8 *)(puVar35 + 0x200) = in_stack_00000200;
  *(undefined8 *)(puVar35 + 0x208) = in_stack_00000208;
  *(undefined8 *)(puVar35 + 0x210) = in_stack_00000210;
  *(undefined8 *)(puVar35 + 0x218) = in_stack_00000218;
  *(undefined8 *)(puVar35 + 0x220) = in_stack_00000220;
  *(undefined8 *)(puVar35 + 0x228) = in_stack_00000228;
  *(undefined8 *)(puVar35 + 0x230) = in_stack_00000230;
  *(undefined8 *)(puVar35 + 0x238) = in_stack_00000238;
  *(undefined8 *)(puVar35 + 0x240) = in_stack_00000240;
  *(undefined8 *)(puVar35 + 0x248) = in_stack_00000248;
  *(undefined8 *)(puVar35 + 0x250) = in_stack_00000250;
  *(undefined8 *)(puVar35 + 600) = in_stack_00000258;
  *(undefined8 *)(puVar35 + 0x260) = in_stack_00000260;
  *(undefined8 *)(puVar35 + 0x268) = in_stack_00000268;
  *(undefined8 *)(puVar35 + 0x270) = in_stack_00000270;
  *(undefined8 *)(puVar35 + 0x278) = param_6;
  *(undefined8 *)(puVar35 + 0x280) = in_stack_00000278;
  *(undefined8 *)(puVar35 + 0x288) = in_stack_00000280;
  *(undefined8 *)(puVar35 + 0x290) = in_stack_00000288;
  *(undefined8 *)(puVar35 + 0x298) = in_stack_00000290;
  *(undefined8 *)(puVar35 + 0x2a0) = in_stack_00000298;
  *(undefined8 *)(puVar35 + 0x2a8) = in_stack_000002a0;
  *(undefined8 *)(puVar35 + 0x2b0) = in_stack_000002a8;
  *(undefined8 *)(puVar35 + 0x2b8) = in_stack_000002b0;
  *(undefined8 *)(puVar35 + 0x2c0) = in_stack_000002b8;
  *(undefined8 *)(puVar35 + 0x2c8) = in_stack_000002c0;
  *(undefined8 *)(puVar35 + 0x2d0) = in_stack_000002c8;
  *(undefined8 *)(puVar35 + 0x2d8) = in_stack_000002d0;
  *(undefined8 *)(puVar35 + 0x2e0) = in_stack_000002d8;
  *(undefined8 *)(puVar35 + 0x2e8) = in_stack_000002e0;
  *(undefined8 *)(puVar35 + 0x2f0) = in_stack_000002e8;
  *(undefined8 *)(puVar35 + 0x2f8) = in_stack_000002f0;
  *(undefined8 *)(puVar35 + 0x300) = in_stack_000002f8;
  *(undefined8 *)(puVar35 + 0x308) = in_stack_00000300;
  *(undefined8 *)(puVar35 + 0x310) = in_stack_00000308;
  *(undefined8 *)(puVar35 + 0x318) = in_stack_00000310;
  *(undefined8 *)(puVar35 + 800) = in_stack_00000318;
  *(undefined8 *)(puVar35 + 0x328) = in_stack_00000320;
  *(undefined8 *)(puVar35 + 0x330) = in_stack_00000328;
  *(char **)(puVar35 + 0x338) = pcVar24;
  *(char **)(puVar35 + 0x340) = pcVar23;
  *(char **)(puVar35 + 0x348) = pcVar20;
  *(char **)(puVar35 + 0x350) = pcVar26;
  *(char **)(puVar35 + 0x358) = pcVar16;
  *(char **)(puVar35 + 0x360) = pcVar19;
  *(char **)(puVar35 + 0x368) = pcVar17;
  *(char **)(puVar35 + 0x370) = pcVar27;
  func_0x000107c6157c();
  func_0x000107c6157c(param_28);
  func_0x000107c6157c(param_29);
  func_0x000107c6157c(param_30);
  func_0x000107c6157c(param_31);
  func_0x000107c6157c(param_27);
  func_0x000107c6157c(param_32);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_33);
  func_0x000107c6157c(param_34);
  func_0x000107c6157c(param_35);
  func_0x000107c6157c(param_36);
  func_0x000107c6157c(param_37);
  func_0x000107c6157c(param_38);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(param_39);
  func_0x000107c6157c(param_40);
  func_0x000107c6157c(param_41);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_42);
  func_0x000107c6157c(param_43);
  func_0x000107c6157c(param_44);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_45);
  func_0x000107c6157c(param_46);
  func_0x000107c6157c(param_47);
  func_0x000107c6157c();
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_49);
  func_0x000107c6157c(param_50);
  func_0x000107c6157c(param_51);
  func_0x000107c6157c(param_52);
  func_0x000107c6157c(param_53);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_54);
  func_0x000107c6157c(param_55);
  func_0x000107c6157c(param_56);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_57);
  func_0x000107c6157c(param_58);
  func_0x000107c6157c(param_59);
  func_0x000107c6157c(param_60);
  func_0x000107c6157c(param_61);
  func_0x000107c6157c(param_62);
  func_0x000107c6157c(param_63);
  func_0x000107c6157c(param_64);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_65);
  func_0x000107c6157c(param_66);
  func_0x000107c6157c(param_67);
  func_0x000107c6157c(param_68);
  func_0x000107c6157c(param_69);
  func_0x000107c6157c(param_70);
  func_0x000107c6157c(param_71);
  func_0x000107c6157c(in_stack_000001f0);
  func_0x000107c6157c(in_stack_000001f8);
  func_0x000107c6157c(in_stack_00000200);
  func_0x000107c6157c(in_stack_00000208);
  func_0x000107c6157c(in_stack_00000210);
  func_0x000107c6157c(in_stack_00000218);
  func_0x000107c6157c(in_stack_00000220);
  func_0x000107c6157c(in_stack_00000228);
  func_0x000107c6157c(in_stack_00000230);
  func_0x000107c6157c(in_stack_00000238);
  func_0x000107c6157c(in_stack_00000240);
  func_0x000107c6157c(in_stack_00000248);
  func_0x000107c6157c(in_stack_00000250);
  func_0x000107c6157c(in_stack_00000258);
  func_0x000107c6157c(in_stack_00000260);
  func_0x000107c6157c(in_stack_00000268);
  func_0x000107c6157c(in_stack_00000270);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(in_stack_00000278);
  func_0x000107c6157c(in_stack_00000280);
  func_0x000107c6157c(in_stack_00000288);
  func_0x000107c6157c(in_stack_00000290);
  func_0x000107c6157c(in_stack_00000298);
  func_0x000107c6157c(in_stack_000002a0);
  func_0x000107c6157c(in_stack_000002a8);
  func_0x000107c6157c(in_stack_000002b0);
  func_0x000107c6157c(in_stack_000002b8);
  func_0x000107c6157c(in_stack_000002c0);
  func_0x000107c6157c(in_stack_000002c8);
  func_0x000107c6157c(in_stack_000002d0);
  func_0x000107c6157c(in_stack_000002d8);
  func_0x000107c6157c(in_stack_000002e0);
  func_0x000107c6157c(in_stack_000002e8);
  func_0x000107c6157c(in_stack_000002f0);
  func_0x000107c6157c(in_stack_000002f8);
  func_0x000107c6157c(in_stack_00000300);
  func_0x000107c6157c(in_stack_00000308);
  func_0x000107c6157c(in_stack_00000310);
  func_0x000107c6157c(in_stack_00000318);
  func_0x000107c6157c(in_stack_00000320);
  func_0x000107c6157c(in_stack_00000328);
  func_0x000107c6157c(pcVar24);
  func_0x000107c6157c(pcVar23);
  func_0x000107c6157c(pcVar20);
  func_0x000107c6157c(pcVar26);
  func_0x000107c6157c(pcVar16);
  func_0x000107c6157c(pcVar19);
  func_0x000107c6157c(pcVar17);
  func_0x000107c6157c(pcVar27);
  pcVar31 = FUN_1024b4678;
  func_0x0001000823a8(FUN_1024b4678,puVar35);
  func_0x000100082720("SCLegacySpotlightServicesEntryPointWrapperServiceProvider",0x39,2);
  func_0x0001000285a8(0x112e9ef40,&UNK_10daafca8);
  func_0x000107c6157c(pcVar31);
  pcVar32 = FUN_1024b4818;
  func_0x0001000823a8(FUN_1024b4818,pcVar31);
  func_0x000100082720("SCLegacySpotlightServicesServiceProvider",0x28,2);
  func_0x0001000285a8(0x112e9ef48,&UNK_10daafcb0);
  puVar35 = &UNK_110513db8;
  func_0x000107c613fc(&UNK_110513db8,0x150,7);
  *(undefined8 **)(puVar35 + 0x10) = puVar1;
  *(undefined8 *)(puVar35 + 0x18) = in_stack_00000330;
  *(undefined8 *)(puVar35 + 0x20) = param_49;
  *(code **)(puVar35 + 0x28) = pcVar32;
  *(undefined8 *)(puVar35 + 0x30) = param_13;
  *(undefined8 *)(puVar35 + 0x38) = param_15;
  *(undefined8 *)(puVar35 + 0x40) = param_48;
  *(undefined8 *)(puVar35 + 0x48) = param_27;
  *(undefined8 *)(puVar35 + 0x50) = in_stack_00000338;
  *(undefined8 *)(puVar35 + 0x58) = in_stack_00000340;
  *(undefined8 *)(puVar35 + 0x60) = in_stack_00000218;
  *(undefined8 *)(puVar35 + 0x68) = param_28;
  *(undefined8 *)(puVar35 + 0x70) = param_41;
  *(undefined8 *)(puVar35 + 0x78) = param_17;
  *(undefined8 *)(puVar35 + 0x80) = param_43;
  *(undefined8 *)(puVar35 + 0x88) = in_stack_00000348;
  *(undefined8 *)(puVar35 + 0x90) = param_16;
  *(undefined8 *)(puVar35 + 0x98) = param_9;
  *(undefined8 *)(puVar35 + 0xa0) = param_56;
  *(undefined8 *)(puVar35 + 0xa8) = in_stack_00000350;
  *(undefined8 *)(puVar35 + 0xb0) = in_stack_00000358;
  *(undefined8 *)(puVar35 + 0xb8) = in_stack_00000360;
  *(undefined8 *)(puVar35 + 0xc0) = param_5;
  *(undefined8 *)(puVar35 + 200) = param_44;
  *(undefined8 *)(puVar35 + 0xd0) = param_36;
  *(undefined8 *)(puVar35 + 0xd8) = param_34;
  *(undefined8 *)(puVar35 + 0xe0) = in_stack_00000368;
  *(undefined8 *)(puVar35 + 0xe8) = in_stack_00000370;
  *(undefined8 *)(puVar35 + 0xf0) = in_stack_00000378;
  *(undefined8 *)(puVar35 + 0xf8) = param_37;
  *(undefined8 *)(puVar35 + 0x100) = param_61;
  *(undefined8 *)(puVar35 + 0x108) = param_6;
  *(undefined8 *)(puVar35 + 0x110) = param_23;
  *(undefined8 *)(puVar35 + 0x118) = uVar29;
  *(undefined8 *)(puVar35 + 0x120) = in_stack_00000380;
  *(undefined8 *)(puVar35 + 0x128) = uVar30;
  *(char **)(puVar35 + 0x130) = pcVar18;
  *(char **)(puVar35 + 0x138) = pcVar22;
  *(char **)(puVar35 + 0x140) = pcVar21;
  *(undefined8 **)(puVar35 + 0x148) = puVar15;
  func_0x000107c6157c();
  func_0x000107c6157c(param_28);
  func_0x000107c6157c(param_27);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_34);
  func_0x000107c6157c(param_36);
  func_0x000107c6157c(param_37);
  func_0x000107c6157c(param_41);
  func_0x000107c6157c(param_43);
  func_0x000107c6157c(param_44);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_48);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_49);
  func_0x000107c6157c(param_56);
  func_0x000107c6157c(param_61);
  func_0x000107c6157c(in_stack_00000218);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(in_stack_00000330);
  func_0x000107c6157c(pcVar32);
  func_0x000107c6157c(in_stack_00000338);
  func_0x000107c6157c(in_stack_00000340);
  func_0x000107c6157c(in_stack_00000348);
  func_0x000107c6157c(in_stack_00000350);
  func_0x000107c6157c(in_stack_00000358);
  func_0x000107c6157c(in_stack_00000360);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(in_stack_00000368);
  func_0x000107c6157c(in_stack_00000370);
  func_0x000107c6157c(in_stack_00000378);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(uVar29);
  func_0x000107c6157c(in_stack_00000380);
  func_0x000107c6157c(uVar30);
  func_0x000107c6157c(pcVar18);
  func_0x000107c6157c(pcVar22);
  func_0x000107c6157c(pcVar21);
  func_0x000107c6157c(puVar15);
  pcVar33 = FUN_1024b4820;
  func_0x0001000823a8(FUN_1024b4820,puVar35);
  func_0x000100082720("SCSpotlightEntryPointWrapperServiceProvider",0x2b,2);
  func_0x0001000285a8(0x112e9ef50,&UNK_10daafcb8);
  func_0x000107c6157c(pcVar33);
  pcVar34 = FUN_1024b489c;
  func_0x0001000823a8(FUN_1024b489c,pcVar33);
  func_0x000100082720("SpotlightSubFeedServicesServiceProvider",0x27,2);
  func_0x0001000285a8(0x112e9ef58,&UNK_10daafcc0);
  puVar35 = &UNK_110513de0;
  func_0x000107c613fc(&UNK_110513de0,0x38,7);
  *(undefined8 **)(puVar35 + 0x10) = puVar1;
  *(undefined8 *)(puVar35 + 0x18) = param_15;
  *(undefined8 *)(puVar35 + 0x20) = param_6;
  *(code **)(puVar35 + 0x28) = pcVar34;
  *(undefined8 *)(puVar35 + 0x30) = in_stack_00000388;
  func_0x000107c6157c();
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(pcVar34);
  func_0x000107c6157c(in_stack_00000388);
  uVar41 = 0x1024b48a4;
  func_0x0001000823a8(0x1024b48a4,puVar35);
  func_0x000100082720("LensPlayTimeTrackingInSpotlightEntryPointWrapperServiceProvider",0x3f,2);
  func_0x0001000285a8(0x112e9ef60,&UNK_10dab05f0);
  puVar35 = &UNK_110513e08;
  func_0x000107c613fc(&UNK_110513e08,0x28,7);
  *(undefined8 **)(puVar35 + 0x10) = puVar1;
  *(undefined8 *)(puVar35 + 0x18) = param_6;
  *(code **)(puVar35 + 0x20) = pcVar34;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(pcVar34);
  uVar36 = 0x1024b48b4;
  func_0x0001000823a8(0x1024b48b4,puVar35);
  func_0x000100082720("SpotlightLensesFeedDataFetchingEntryPointWrapperServiceProvider",0x3f,2);
  puVar37 = puVar2;
  FUN_1024c5dc4(puVar2,pcVar3,pcVar4,pcVar5,uVar29,pcVar6,pcVar7,pcVar8,pcVar9,uVar30,pcVar32,
                pcVar10,pcVar11,pcVar12,pcVar13,pcVar14,pcVar34);
  func_0x000100082720("SpotlightScopeGraphBridgeServicesServiceProvider",0x30,2);
  func_0x0001000285a8(0x112e9ef68,&UNK_10daafcd0);
  puVar35 = &UNK_110513e30;
  func_0x000107c613fc(&UNK_110513e30,0x60,7);
  *(undefined8 **)(puVar35 + 0x10) = puVar1;
  *(undefined8 *)(puVar35 + 0x18) = in_stack_00000390;
  *(undefined8 *)(puVar35 + 0x20) = param_9;
  *(undefined8 *)(puVar35 + 0x28) = param_36;
  *(undefined8 *)(puVar35 + 0x30) = uVar41;
  *(code **)(puVar35 + 0x38) = pcVar31;
  *(code **)(puVar35 + 0x40) = pcVar33;
  *(code **)(puVar35 + 0x48) = pcVar28;
  *(undefined8 *)(puVar35 + 0x50) = uVar36;
  *(undefined8 **)(puVar35 + 0x58) = puVar37;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_36);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(pcVar31);
  func_0x000107c6157c(pcVar33);
  func_0x000107c6157c(in_stack_00000390);
  func_0x000107c6157c(uVar41);
  func_0x000107c6157c(pcVar28);
  func_0x000107c6157c(uVar36);
  func_0x000107c6157c(puVar37);
  pcVar38 = FUN_1024b48c0;
  func_0x0001000823a8(FUN_1024b48c0,puVar35);
  func_0x000100082720("SCSpotlightScopeInitializationPluginRegistryServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112e9eec0,&UNK_10daafa60);
  func_0x000107c6157c(pcVar38);
  pcVar39 = FUN_1024b48f4;
  func_0x0001000823a8(FUN_1024b48f4,pcVar38);
  func_0x000100082720("SCSpotlightScopeInitializationServiceProvider",0x2d,2);
  func_0x0001000285a8(0x112e9eeb0,&UNK_10daafa50);
  func_0x000107c6157c(pcVar39);
  uVar40 = 0x1024b48fc;
  func_0x0001000823a8(0x1024b48fc,pcVar39);
  func_0x000100082720("SCSpotlightScopedServicesServiceProvider",0x28,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar35 = &UNK_110513e58;
  func_0x000107c613fc(&UNK_110513e58,0x20,7);
  *(undefined8 *)(puVar35 + 0x10) = uVar40;
  *(code **)(puVar35 + 0x18) = pcVar28;
  func_0x000107c6157c(pcVar28);
  uVar40 = 0x1024b4904;
  func_0x0001000823a8(0x1024b4904,puVar35);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(pcVar8);
  func_0x000107c61574(pcVar9);
  func_0x000107c61574(pcVar10);
  func_0x000107c61574(pcVar11);
  func_0x000107c61574(pcVar12);
  func_0x000107c61574(pcVar13);
  func_0x000107c61574(pcVar14);
  func_0x000107c61574(param_3);
  func_0x000107c61574(param_8);
  func_0x000107c61574(puVar15);
  func_0x000107c61574(pcVar16);
  func_0x000107c61574(pcVar17);
  func_0x000107c61574(pcVar18);
  func_0x000107c61574(pcVar19);
  func_0x000107c61574(pcVar20);
  func_0x000107c61574(pcVar21);
  func_0x000107c61574(pcVar22);
  func_0x000107c61574(pcVar23);
  func_0x000107c61574(pcVar24);
  func_0x000107c61574(pcVar25);
  func_0x000107c61574(pcVar26);
  func_0x000107c61574(pcVar27);
  func_0x000107c61574(pcVar28);
  func_0x000107c61574(uVar29);
  func_0x000107c61574(uVar30);
  func_0x000107c61574(pcVar31);
  func_0x000107c61574(pcVar32);
  func_0x000107c61574(pcVar33);
  func_0x000107c61574(pcVar34);
  func_0x000107c61574(uVar41);
  func_0x000107c61574(uVar36);
  func_0x000107c61574(puVar37);
  func_0x000107c61574(pcVar38);
  func_0x000107c61574(pcVar39);
  func_0x000100082720("SCSpotlightScopeEntryPointProvider",0x22,2);
  *param_1 = uVar40;
  return;
}



/* Entry: 1024b4320; end: 1024b4677;  */

void FUN_1024b4320(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1024b2bf4(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128),
                *(undefined8 *)(unaff_x20 + 0x130),*(undefined8 *)(unaff_x20 + 0x138),
                *(undefined8 *)(unaff_x20 + 0x140),*(undefined8 *)(unaff_x20 + 0x148),
                *(undefined8 *)(unaff_x20 + 0x150),*(undefined8 *)(unaff_x20 + 0x158),
                *(undefined8 *)(unaff_x20 + 0x160),*(undefined8 *)(unaff_x20 + 0x168),
                *(undefined8 *)(unaff_x20 + 0x170),*(undefined8 *)(unaff_x20 + 0x178),
                *(undefined8 *)(unaff_x20 + 0x180),*(undefined8 *)(unaff_x20 + 0x188),
                *(undefined8 *)(unaff_x20 + 400),*(undefined8 *)(unaff_x20 + 0x198),
                *(undefined8 *)(unaff_x20 + 0x1a0),*(undefined8 *)(unaff_x20 + 0x1a8),
                *(undefined8 *)(unaff_x20 + 0x1b0),*(undefined8 *)(unaff_x20 + 0x1b8),
                *(undefined8 *)(unaff_x20 + 0x1c0),*(undefined8 *)(unaff_x20 + 0x1c8),
                *(undefined8 *)(unaff_x20 + 0x1d0),*(undefined8 *)(unaff_x20 + 0x1d8),
                *(undefined8 *)(unaff_x20 + 0x1e0),*(undefined8 *)(unaff_x20 + 0x1e8),
                *(undefined8 *)(unaff_x20 + 0x1f0),*(undefined8 *)(unaff_x20 + 0x1f8),
                *(undefined8 *)(unaff_x20 + 0x200),*(undefined8 *)(unaff_x20 + 0x208),
                *(undefined8 *)(unaff_x20 + 0x210),*(undefined8 *)(unaff_x20 + 0x218),
                *(undefined8 *)(unaff_x20 + 0x220),*(undefined8 *)(unaff_x20 + 0x228),
                *(undefined8 *)(unaff_x20 + 0x230));
  return;
}



/* Entry: 1024b4678; end: 1024b4817;  */

void FUN_1024b4678(void)

{
  long unaff_x20;
  
  FUN_1024b4cac(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128),
                *(undefined8 *)(unaff_x20 + 0x130),*(undefined8 *)(unaff_x20 + 0x138),
                *(undefined8 *)(unaff_x20 + 0x140),*(undefined8 *)(unaff_x20 + 0x148),
                *(undefined8 *)(unaff_x20 + 0x150),*(undefined8 *)(unaff_x20 + 0x158),
                *(undefined8 *)(unaff_x20 + 0x160),*(undefined8 *)(unaff_x20 + 0x168),
                *(undefined8 *)(unaff_x20 + 0x170),*(undefined8 *)(unaff_x20 + 0x178),
                *(undefined8 *)(unaff_x20 + 0x180),*(undefined8 *)(unaff_x20 + 0x188),
                *(undefined8 *)(unaff_x20 + 400),*(undefined8 *)(unaff_x20 + 0x198),
                *(undefined8 *)(unaff_x20 + 0x1a0),*(undefined8 *)(unaff_x20 + 0x1a8),
                *(undefined8 *)(unaff_x20 + 0x1b0),*(undefined8 *)(unaff_x20 + 0x1b8),
                *(undefined8 *)(unaff_x20 + 0x1c0),*(undefined8 *)(unaff_x20 + 0x1c8),
                *(undefined8 *)(unaff_x20 + 0x1d0),*(undefined8 *)(unaff_x20 + 0x1d8),
                *(undefined8 *)(unaff_x20 + 0x1e0),*(undefined8 *)(unaff_x20 + 0x1e8),
                *(undefined8 *)(unaff_x20 + 0x1f0),*(undefined8 *)(unaff_x20 + 0x1f8),
                *(undefined8 *)(unaff_x20 + 0x200),*(undefined8 *)(unaff_x20 + 0x208),
                *(undefined8 *)(unaff_x20 + 0x210),*(undefined8 *)(unaff_x20 + 0x218),
                *(undefined8 *)(unaff_x20 + 0x220),*(undefined8 *)(unaff_x20 + 0x228),
                *(undefined8 *)(unaff_x20 + 0x230),*(undefined8 *)(unaff_x20 + 0x238));
  return;
}



/* Entry: 1024b4818; end: 1024b481f;  */

void FUN_1024b4818(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x380);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1024b4820; end: 1024b489b;  */

void FUN_1024b4820(void)

{
  long unaff_x20;
  
  FUN_1024bd194(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128),
                *(undefined8 *)(unaff_x20 + 0x130),*(undefined8 *)(unaff_x20 + 0x138),
                *(undefined8 *)(unaff_x20 + 0x140),*(undefined8 *)(unaff_x20 + 0x148));
  return;
}



/* Entry: 1024b489c; end: 1024b48bf;  */

void FUN_1024b489c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x158);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1024b48c0; end: 1024b48f3;  */

void FUN_1024b48c0(void)

{
  long unaff_x20;
  
  FUN_1024c0798(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 1024b48f4; end: 1024b490b;  */

void FUN_1024b48f4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x0001000285a8(0x112e9ef18,&UNK_10daafc40);
  uVar1 = 0;
  func_0x00010037796c();
  func_0x000100083b20(&uStack_38);
  func_0x0001000a8548(uVar1,uStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1024b490c; end: 1024b4aef;  */

void FUN_1024b490c(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  FUN_1024b4c38();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  *(undefined8 *)(param_2 + 0x28) = uStack_70;
  *(undefined8 *)(param_2 + 0x30) = uStack_78;
  FUN_1024cf7d8(0);
  func_0x000107c613fc();
  uVar1 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar2 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  func_0x000107c61174(uStack_78);
  func_0x0001024cf404(uStack_58,uVar1,uVar2,uVar3,uStack_78);
  *(undefined8 *)(param_2 + 0x10) = uStack_58;
  *param_1 = param_2;
  return;
}



/* Entry: 1024b4af0; end: 1024b4b33;  */

void FUN_1024b4af0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1024b4b34; end: 1024b4b3b;  */

undefined8 FUN_1024b4b34(void)

{
  return 0x1b;
}



/* Entry: 1024b4b3c; end: 1024b4bbf;  */

void FUN_1024b4b3c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1024b4c78,param_2,FUN_1024b4c7c,param_2,FUN_1024b4ca4,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1024b4bc0; end: 1024b4c07;  */

undefined8 FUN_1024b4bc0(undefined8 param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_1024cf74c();
  func_0x000107c61574(uStack_28);
  return param_1;
}



/* Entry: 1024b4c08; end: 1024b4c37;  */

undefined ** FUN_1024b4c08(void)

{
  return &PTR_DAT_113067000;
}



/* Entry: 1024b4c38; end: 1024b4c57;  */

void FUN_1024b4c38(void)

{
  func_0x000107c61168(&PTR_PTR_112e9efd8);
  return;
}



/* Entry: 1024b4c58; end: 1024b4c7b;  */

undefined1  [16] FUN_1024b4c58(void)

{
  return ZEXT816(0x110513eb0);
}



/* Entry: 1024b4c7c; end: 1024b4ca3;  */

void FUN_1024b4c7c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1024b4ca4; end: 1024b4cab;  */

undefined8 FUN_1024b4ca4(void)

{
  undefined8 unaff_x20;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_1024cf74c();
  func_0x000107c61574(uStack_28);
  return unaff_x20;
}



/* Entry: 1024b4cac; end: 1024bcc03;  */

void FUN_1024b4cac(long *param_1,long param_2)

{
  code *pcVar1;
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
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined *puVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  undefined8 uVar61;
  undefined8 uVar62;
  undefined8 uVar63;
  undefined8 uVar64;
  undefined8 uVar65;
  undefined8 uVar66;
  undefined8 uVar67;
  undefined8 uVar68;
  undefined8 uVar69;
  undefined8 uVar70;
  undefined8 uVar71;
  undefined8 uVar72;
  undefined8 uVar73;
  undefined8 uVar74;
  undefined8 uVar75;
  undefined8 uVar76;
  undefined8 uVar77;
  undefined8 uVar78;
  undefined8 uVar79;
  undefined8 uVar80;
  undefined8 uVar81;
  undefined8 uVar82;
  undefined8 uVar83;
  undefined8 uVar84;
  undefined8 uVar85;
  undefined8 uVar86;
  undefined8 uVar87;
  undefined8 uVar88;
  undefined8 uVar89;
  undefined8 uVar90;
  undefined8 uVar91;
  undefined8 uVar92;
  undefined8 uVar93;
  undefined8 uVar94;
  undefined8 uVar95;
  undefined8 uVar96;
  undefined8 uVar97;
  undefined8 uVar98;
  undefined8 uVar99;
  undefined8 uVar100;
  undefined8 uVar101;
  undefined8 uVar102;
  undefined8 uVar103;
  undefined8 uVar104;
  undefined8 uVar105;
  long lVar106;
  undefined8 uVar107;
  undefined8 uVar108;
  undefined8 uVar109;
  undefined8 uVar110;
  undefined8 uVar111;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
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
  
  func_0x000100083b20(auStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  func_0x000100083b20(&uStack_b0);
  func_0x000100083b20(&uStack_b8);
  func_0x000100083b20(&uStack_c0);
  func_0x000100083b20(&uStack_c8);
  func_0x000100083b20(&uStack_d0);
  func_0x000100083b20(&uStack_d8);
  func_0x000100083b20(&uStack_e0);
  func_0x000100083b20(&uStack_e8);
  func_0x000100083b20(&uStack_f0);
  func_0x000100083b20(&uStack_f8);
  func_0x000100083b20(&uStack_100);
  func_0x000100083b20(&uStack_108);
  func_0x000100083b20(&uStack_110);
  func_0x000100083b20(&uStack_118);
  func_0x000100083b20(&uStack_120);
  func_0x000100083b20(&uStack_128);
  func_0x000100083b20(&uStack_130);
  func_0x000100083b20(&uStack_138);
  func_0x000100083b20(&uStack_140);
  func_0x000100083b20(&uStack_148);
  func_0x000100083b20(&uStack_150);
  func_0x000100083b20(&uStack_158);
  func_0x000100083b20(&uStack_160);
  func_0x000100083b20(&uStack_168);
  func_0x000100083b20(&uStack_170);
  func_0x000100083b20(&uStack_178);
  func_0x000100083b20(&uStack_180);
  func_0x000100083b20(&uStack_188);
  func_0x000100083b20(&uStack_190);
  func_0x000100083b20(&uStack_198);
  func_0x000100083b20(&uStack_1a0);
  func_0x000100083b20(&uStack_1a8);
  func_0x000100083b20(&uStack_1b0);
  func_0x000100083b20(&uStack_1b8);
  func_0x000100083b20(&uStack_1c0);
  func_0x000100083b20(&uStack_1c8);
  func_0x000100083b20(&uStack_1d0);
  func_0x000100083b20(&uStack_1d8);
  func_0x000100083b20(&uStack_1e0);
  func_0x000100083b20(&uStack_1e8);
  func_0x000100083b20(&uStack_1f0);
  func_0x000100083b20(&uStack_1f8);
  func_0x000100083b20(&uStack_200);
  func_0x000100083b20(&uStack_208);
  func_0x000100083b20(&uStack_210);
  func_0x000100083b20(&uStack_218);
  func_0x000100083b20(&uStack_220);
  func_0x000100083b20(&uStack_228);
  func_0x000100083b20(&uStack_230);
  func_0x000100083b20(&uStack_238);
  func_0x000100083b20(&uStack_240);
  func_0x000100083b20(&uStack_248);
  func_0x000100083b20(&uStack_250);
  func_0x000100083b20(&uStack_258);
  func_0x000100083b20(&uStack_260);
  func_0x000100083b20(&uStack_268);
  func_0x000100083b20(&uStack_270);
  func_0x000100083b20(&uStack_278);
  func_0x000100083b20(&uStack_280);
  func_0x000100083b20(&uStack_288);
  func_0x000100083b20(&uStack_290);
  func_0x000100083b20(&uStack_298);
  func_0x000100083b20(&uStack_2a0);
  func_0x000100083b20(&uStack_2a8);
  func_0x000100083b20(&uStack_2b0);
  func_0x000100083b20(&uStack_2b8);
  func_0x000100083b20(&uStack_2c0);
  func_0x000100083b20(&uStack_2c8);
  func_0x000100083b20(&uStack_2d0);
  func_0x000100083b20(&uStack_2d8);
  func_0x000100083b20(&uStack_2e0);
  func_0x000100083b20(&uStack_2e8);
  func_0x000100083b20(&uStack_2f0);
  func_0x000100083b20(&uStack_2f8);
  func_0x000100083b20(&uStack_300);
  func_0x000100083b20(&uStack_308);
  func_0x000100083b20(&uStack_310);
  func_0x000100083b20(&uStack_318);
  func_0x000100083b20(&uStack_320);
  func_0x000100083b20(&uStack_328);
  func_0x000100083b20(&uStack_330);
  func_0x000100083b20(&uStack_338);
  func_0x000100083b20(&uStack_340);
  func_0x000100083b20(&uStack_348);
  func_0x000100083b20(&uStack_350);
  func_0x000100083b20(&uStack_358);
  func_0x000100083b20(&uStack_360);
  func_0x000100083b20(&uStack_368);
  func_0x000100083b20(&uStack_370);
  func_0x000100083b20(&uStack_378);
  func_0x000100083b20(&uStack_380);
  func_0x000100083b20(&uStack_388);
  func_0x000100083b20(&uStack_390);
  func_0x000100083b20(&uStack_398);
  func_0x000100083b20(&uStack_3a0);
  func_0x000100083b20(&uStack_3a8);
  func_0x000100083b20(&uStack_3b0);
  func_0x000100083b20(&uStack_3b8);
  func_0x000100083b20(&uStack_3c0);
  func_0x000100083b20(&uStack_3c8);
  func_0x000100083b20(&uStack_3d0);
  FUN_1024bd110();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x60) = uStack_78;
  *(undefined8 *)(param_2 + 0x68) = uStack_80;
  *(undefined8 *)(param_2 + 0x70) = uStack_88;
  *(undefined8 *)(param_2 + 0x78) = uStack_90;
  *(undefined8 *)(param_2 + 0x80) = uStack_98;
  *(undefined8 *)(param_2 + 0x88) = uStack_a0;
  *(undefined8 *)(param_2 + 0x90) = uStack_a8;
  *(undefined8 *)(param_2 + 0x98) = uStack_b0;
  *(undefined8 *)(param_2 + 0xa0) = uStack_b8;
  *(undefined8 *)(param_2 + 0xa8) = uStack_c0;
  *(undefined8 *)(param_2 + 0xb0) = uStack_c8;
  *(undefined8 *)(param_2 + 0xb8) = uStack_d0;
  *(undefined8 *)(param_2 + 0xc0) = uStack_d8;
  *(undefined8 *)(param_2 + 200) = uStack_e0;
  *(undefined8 *)(param_2 + 0xd0) = uStack_e8;
  *(undefined8 *)(param_2 + 0xd8) = uStack_f0;
  *(undefined8 *)(param_2 + 0xe0) = uStack_f8;
  *(undefined8 *)(param_2 + 0xe8) = uStack_100;
  *(undefined8 *)(param_2 + 0xf0) = uStack_108;
  *(undefined8 *)(param_2 + 0xf8) = uStack_110;
  *(undefined8 *)(param_2 + 0x100) = uStack_118;
  *(undefined8 *)(param_2 + 0x108) = uStack_120;
  *(undefined8 *)(param_2 + 0x110) = uStack_128;
  *(undefined8 *)(param_2 + 0x118) = uStack_130;
  *(undefined8 *)(param_2 + 0x120) = uStack_138;
  *(undefined8 *)(param_2 + 0x128) = uStack_140;
  *(undefined8 *)(param_2 + 0x130) = uStack_148;
  *(undefined8 *)(param_2 + 0x138) = uStack_150;
  *(undefined8 *)(param_2 + 0x140) = uStack_158;
  *(undefined8 *)(param_2 + 0x148) = uStack_160;
  *(undefined8 *)(param_2 + 0x150) = uStack_168;
  *(undefined8 *)(param_2 + 0x158) = uStack_170;
  *(undefined8 *)(param_2 + 0x160) = uStack_178;
  *(undefined8 *)(param_2 + 0x168) = uStack_180;
  *(undefined8 *)(param_2 + 0x170) = uStack_188;
  *(undefined8 *)(param_2 + 0x178) = uStack_190;
  *(undefined8 *)(param_2 + 0x180) = uStack_198;
  *(undefined8 *)(param_2 + 0x188) = uStack_1a0;
  *(undefined8 *)(param_2 + 400) = uStack_1a8;
  *(undefined8 *)(param_2 + 0x198) = uStack_1b0;
  *(undefined8 *)(param_2 + 0x1a0) = uStack_1b8;
  *(undefined8 *)(param_2 + 0x1a8) = uStack_1c0;
  *(undefined8 *)(param_2 + 0x1b0) = uStack_1c8;
  *(undefined8 *)(param_2 + 0x1b8) = uStack_1d0;
  *(undefined8 *)(param_2 + 0x1c0) = uStack_1d8;
  *(undefined8 *)(param_2 + 0x1c8) = uStack_1e0;
  *(undefined8 *)(param_2 + 0x1d0) = uStack_1e8;
  *(undefined8 *)(param_2 + 0x1d8) = uStack_1f0;
  *(undefined8 *)(param_2 + 0x1e0) = uStack_1f8;
  *(undefined8 *)(param_2 + 0x1e8) = uStack_200;
  *(undefined8 *)(param_2 + 0x1f0) = uStack_208;
  *(undefined8 *)(param_2 + 0x1f8) = uStack_210;
  *(undefined8 *)(param_2 + 0x200) = uStack_218;
  *(undefined8 *)(param_2 + 0x208) = uStack_220;
  *(undefined8 *)(param_2 + 0x210) = uStack_228;
  *(undefined8 *)(param_2 + 0x218) = uStack_230;
  *(undefined8 *)(param_2 + 0x220) = uStack_238;
  *(undefined8 *)(param_2 + 0x228) = uStack_240;
  *(undefined8 *)(param_2 + 0x230) = uStack_248;
  *(undefined8 *)(param_2 + 0x238) = uStack_250;
  *(undefined8 *)(param_2 + 0x240) = uStack_258;
  *(undefined8 *)(param_2 + 0x248) = uStack_260;
  *(undefined8 *)(param_2 + 0x250) = uStack_268;
  *(undefined8 *)(param_2 + 600) = uStack_270;
  *(undefined8 *)(param_2 + 0x260) = uStack_278;
  *(undefined8 *)(param_2 + 0x268) = uStack_280;
  *(undefined8 *)(param_2 + 0x270) = uStack_288;
  *(undefined8 *)(param_2 + 0x278) = uStack_290;
  *(undefined8 *)(param_2 + 0x280) = uStack_298;
  *(undefined8 *)(param_2 + 0x288) = uStack_2a0;
  *(undefined8 *)(param_2 + 0x290) = uStack_2a8;
  *(undefined8 *)(param_2 + 0x298) = uStack_2b0;
  *(undefined8 *)(param_2 + 0x2a0) = uStack_2b8;
  *(undefined8 *)(param_2 + 0x2a8) = uStack_2c0;
  *(undefined8 *)(param_2 + 0x2b0) = uStack_2c8;
  *(undefined8 *)(param_2 + 0x2b8) = uStack_2d0;
  *(undefined8 *)(param_2 + 0x2c0) = uStack_2d8;
  *(undefined8 *)(param_2 + 0x2c8) = uStack_2e0;
  *(undefined8 *)(param_2 + 0x2d0) = uStack_2e8;
  *(undefined8 *)(param_2 + 0x2d8) = uStack_2f0;
  *(undefined8 *)(param_2 + 0x2e0) = uStack_2f8;
  *(undefined8 *)(param_2 + 0x2e8) = uStack_300;
  *(undefined8 *)(param_2 + 0x2f0) = uStack_308;
  *(undefined8 *)(param_2 + 0x2f8) = uStack_310;
  *(undefined8 *)(param_2 + 0x300) = uStack_318;
  *(undefined8 *)(param_2 + 0x308) = uStack_320;
  *(undefined8 *)(param_2 + 0x310) = uStack_328;
  *(undefined8 *)(param_2 + 0x318) = uStack_330;
  *(undefined8 *)(param_2 + 800) = uStack_338;
  *(undefined8 *)(param_2 + 0x328) = uStack_340;
  *(undefined8 *)(param_2 + 0x330) = uStack_348;
  *(undefined8 *)(param_2 + 0x338) = uStack_350;
  *(undefined8 *)(param_2 + 0x340) = uStack_358;
  *(undefined8 *)(param_2 + 0x348) = uStack_360;
  *(undefined8 *)(param_2 + 0x350) = uStack_368;
  *(undefined8 *)(param_2 + 0x358) = uStack_370;
  *(undefined8 *)(param_2 + 0x360) = uStack_378;
  *(undefined8 *)(param_2 + 0x368) = uStack_380;
  *(undefined8 *)(param_2 + 0x370) = uStack_388;
  *(undefined8 *)(param_2 + 0x378) = uStack_390;
  func_0x0001000285a8(0x112e4cd20,&UNK_10da47070);
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
  func_0x000107c61174();
  uVar18 = uStack_f8;
  func_0x000107c61174();
  uVar19 = uStack_100;
  func_0x000107c61174();
  uVar20 = uStack_108;
  func_0x000107c61174();
  uVar21 = uStack_110;
  func_0x000107c61174();
  uVar22 = uStack_118;
  func_0x000107c61174();
  uVar23 = uStack_120;
  func_0x000107c61174();
  uVar24 = uStack_128;
  func_0x000107c61174();
  uVar25 = uStack_130;
  func_0x000107c61174();
  uVar26 = uStack_138;
  func_0x000107c61174();
  uVar27 = uStack_140;
  func_0x000107c61174();
  uVar28 = uStack_148;
  func_0x000107c61174();
  uVar29 = uStack_150;
  func_0x000107c61174();
  uVar30 = uStack_158;
  func_0x000107c61174();
  uVar31 = uStack_160;
  func_0x000107c61174();
  uVar32 = uStack_168;
  func_0x000107c61174();
  uVar33 = uStack_170;
  func_0x000107c61174();
  uVar34 = uStack_178;
  func_0x000107c61174();
  uVar35 = uStack_180;
  func_0x000107c61174();
  uVar36 = uStack_188;
  func_0x000107c61174();
  uVar37 = uStack_190;
  func_0x000107c61174();
  uVar42 = uStack_198;
  func_0x000107c61174();
  uVar43 = uStack_1a0;
  func_0x000107c61174();
  uVar44 = uStack_1a8;
  func_0x000107c61174();
  uVar45 = uStack_1b0;
  func_0x000107c61174();
  uVar46 = uStack_1b8;
  func_0x000107c61174();
  uVar47 = uStack_1c0;
  func_0x000107c61174();
  uVar48 = uStack_1c8;
  func_0x000107c61174();
  uVar49 = uStack_1d0;
  func_0x000107c61174();
  uVar50 = uStack_1d8;
  func_0x000107c61174();
  uVar51 = uStack_1e0;
  func_0x000107c61174();
  uVar52 = uStack_1e8;
  func_0x000107c61174();
  uVar53 = uStack_1f0;
  func_0x000107c61174();
  uVar54 = uStack_1f8;
  func_0x000107c61174();
  uVar55 = uStack_200;
  func_0x000107c61174();
  uVar56 = uStack_208;
  func_0x000107c61174();
  uVar57 = uStack_210;
  func_0x000107c61174();
  uVar58 = uStack_218;
  func_0x000107c61174();
  uVar59 = uStack_220;
  func_0x000107c61174();
  uVar60 = uStack_228;
  func_0x000107c61174();
  uVar61 = uStack_230;
  func_0x000107c61174();
  uVar62 = uStack_238;
  func_0x000107c61174();
  uVar63 = uStack_240;
  func_0x000107c61174();
  uVar64 = uStack_248;
  func_0x000107c61174();
  uVar65 = uStack_250;
  func_0x000107c61174();
  uVar66 = uStack_258;
  func_0x000107c61174();
  uVar67 = uStack_260;
  func_0x000107c61174();
  uVar68 = uStack_268;
  func_0x000107c61174();
  uVar69 = uStack_270;
  func_0x000107c61174();
  uVar70 = uStack_278;
  func_0x000107c61174();
  uVar71 = uStack_280;
  func_0x000107c61174();
  uVar72 = uStack_288;
  func_0x000107c61174();
  uVar73 = uStack_290;
  func_0x000107c61174();
  uVar74 = uStack_298;
  func_0x000107c61174();
  uVar75 = uStack_2a0;
  func_0x000107c61174();
  uVar76 = uStack_2a8;
  func_0x000107c61174();
  uVar77 = uStack_2b0;
  func_0x000107c61174();
  uVar78 = uStack_2b8;
  func_0x000107c61174();
  uVar79 = uStack_2c0;
  func_0x000107c61174();
  uVar80 = uStack_2c8;
  func_0x000107c61174();
  uVar81 = uStack_2d0;
  func_0x000107c61174();
  uVar82 = uStack_2d8;
  func_0x000107c61174();
  uVar83 = uStack_2e0;
  func_0x000107c61174();
  uVar84 = uStack_2e8;
  func_0x000107c61174();
  uVar85 = uStack_2f0;
  func_0x000107c61174();
  uVar86 = uStack_2f8;
  func_0x000107c61174();
  uVar87 = uStack_300;
  func_0x000107c61174();
  uVar88 = uStack_308;
  func_0x000107c61174();
  uVar89 = uStack_310;
  func_0x000107c61174();
  uVar90 = uStack_318;
  func_0x000107c61174();
  uVar91 = uStack_320;
  func_0x000107c61174();
  uVar92 = uStack_328;
  func_0x000107c61174();
  uVar93 = uStack_330;
  func_0x000107c61174();
  uVar94 = uStack_338;
  func_0x000107c61174();
  uVar95 = uStack_340;
  func_0x000107c61174();
  uVar96 = uStack_348;
  func_0x000107c61174();
  uVar97 = uStack_350;
  func_0x000107c61174();
  uVar98 = uStack_358;
  func_0x000107c61174();
  uVar99 = uStack_360;
  func_0x000107c61174();
  uVar100 = uStack_368;
  func_0x000107c61174();
  uVar101 = uStack_370;
  func_0x000107c61174();
  uVar102 = uStack_378;
  func_0x000107c61174();
  uVar103 = uStack_380;
  func_0x000107c61174();
  uVar104 = uStack_388;
  func_0x000107c61174();
  uVar105 = uStack_390;
  func_0x000107c61174();
  uVar40 = uStack_398;
  func_0x000107c6157c(uStack_398);
  func_0x00010017da58();
  puVar38 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar40);
  *(undefined **)(param_2 + 0x18) = puVar38;
  func_0x0001000285a8(0x112e9f058,&UNK_10daafe58);
  func_0x000107c610f8();
  uVar40 = uStack_3a0;
  func_0x000107c6157c(uStack_3a0);
  func_0x0001003b3b80();
  puVar38 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar40);
  *(undefined **)(param_2 + 0x20) = puVar38;
  func_0x0001000285a8(0x112e4cd28,&UNK_10daaf350);
  func_0x000107c610f8();
  uVar40 = uStack_3a8;
  func_0x000107c6157c(uStack_3a8);
  func_0x00010017da58();
  puVar38 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar40);
  *(undefined **)(param_2 + 0x28) = puVar38;
  func_0x0001000285a8(0x112e50c28,&UNK_10dab6a10);
  func_0x000107c610f8();
  uVar40 = uStack_3b0;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar38 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar40);
  *(undefined **)(param_2 + 0x30) = puVar38;
  func_0x0001000285a8(0x112e51df8,&UNK_10daafe60);
  func_0x000107c610f8();
  uVar40 = uStack_3b8;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar38 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar40);
  *(undefined **)(param_2 + 0x38) = puVar38;
  func_0x0001000285a8(0x112e4cd38,&UNK_10daaf250);
  func_0x000107c610f8();
  uVar40 = uStack_3c0;
  func_0x000107c6157c(uStack_3c0);
  func_0x00010017da58();
  puVar38 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar40);
  *(undefined **)(param_2 + 0x40) = puVar38;
  func_0x0001000285a8(0x112e9ebb8,&UNK_10daafe70);
  func_0x000107c610f8();
  uVar40 = uStack_3c8;
  func_0x000107c6157c(uStack_3c8);
  func_0x0001003b3b80();
  puVar38 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar40);
  *(undefined **)(param_2 + 0x48) = puVar38;
  func_0x0001000285a8(0x112e9ee78,&UNK_10daaf9d8);
  func_0x000107c610f8();
  uVar40 = uStack_3d0;
  func_0x000107c6157c(uStack_3d0);
  func_0x0001003b3b80();
  puVar38 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar40);
  *(undefined **)(param_2 + 0x50) = puVar38;
  puVar38 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x58) = puVar38;
  puVar38 = PTR_PTR_1126aa920;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar38;
  func_0x000107c61174();
  uVar39 = auStack_70[0];
  func_0x000107c61174();
  uVar40 = 0x6867696c746f7073;
  func_0x000107c5fadc(0x6867696c746f7073,0xee0065706f635374);
  func_0x000107c5a49c(puVar38);
  func_0x000107c61170(puVar38);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar40);
  uVar107 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar107);
  uVar108 = 0xd000000000000014;
  uVar40 = uVar108;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(uVar107);
  func_0x000107c61170(uVar107);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar40);
  uVar107 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar107);
  uVar41 = 0xd000000000000013;
  uVar40 = uVar41;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef2dcc0);
  func_0x000107c5a49c(uVar107);
  func_0x000107c61170(uVar107);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar40);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar40);
  uVar107 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f009f80);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar107);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar107 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f05bfb0);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar107);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar40);
  uVar107 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar107);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar40);
  uVar107 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f0583b0);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar107);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar40);
  uVar107 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f007170);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar107);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar40);
  uVar107 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f00aef0);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar107);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar40);
  uVar107 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f00ad40);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar107);
  uVar107 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar107);
  uVar109 = 0xd000000000000016;
  uVar40 = uVar109;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f052100);
  func_0x000107c5a49c(uVar107);
  func_0x000107c61170(uVar107);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar40);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar40);
  uVar107 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f03f160);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar107);
  uVar107 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar107);
  uVar40 = 0xd000000000000027;
  func_0x000107c5fadc(0xd000000000000027,0x800000010f0a3ef0);
  func_0x000107c5a49c(uVar107);
  func_0x000107c61170(uVar107);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar40);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar107 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f0a3f20);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar107);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar107 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f01a810);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar107);
  uVar107 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar40 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f05c010);
  func_0x000107c5a49c(uVar107);
  func_0x000107c61170(uVar107);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar40);
  uVar107 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar107);
  uVar40 = uVar41;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(uVar107);
  func_0x000107c61170(uVar107);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar40);
  uVar107 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar107);
  uVar110 = 0xd000000000000012;
  uVar40 = uVar110;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f0520a0);
  func_0x000107c5a49c(uVar107);
  func_0x000107c61170(uVar107);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar40);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar40);
  uVar107 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f05c3a0);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar107);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar40);
  uVar107 = 0x53736569726f7473;
  func_0x000107c5fadc(0x53736569726f7473,0xef73656369767265);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar107);
  uVar107 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar107);
  uVar40 = uVar110;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef120a0);
  func_0x000107c5a49c(uVar107);
  func_0x000107c61170(uVar107);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar40);
  uVar107 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar107);
  uVar40 = uVar108;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f05bfd0);
  func_0x000107c5a49c(uVar107);
  func_0x000107c61170(uVar107);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar40);
  uVar107 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar40 = 0xd00000000000002f;
  func_0x000107c5fadc(0xd00000000000002f,0x800000010f052190);
  func_0x000107c5a49c(uVar107);
  func_0x000107c61170(uVar107);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar40);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar107 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef21bb0);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar107);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar107 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f0a3f40);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar107);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar40);
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar41);
  uVar107 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar107);
  uVar40 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef132f0);
  func_0x000107c5a49c(uVar107);
  func_0x000107c61170(uVar107);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar40);
  uVar107 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar107);
  uVar111 = 0xd000000000000017;
  uVar40 = uVar111;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(uVar107);
  func_0x000107c61170(uVar107);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar40);
  uVar107 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar107);
  uVar41 = 0xd000000000000010;
  uVar40 = uVar41;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar107);
  func_0x000107c61170(uVar107);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar40);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar107 = 0x6769666e6f436461;
  func_0x000107c5fadc(0x6769666e6f436461,0xef65636976726553);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar30);
  func_0x000107c61170(uVar107);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar40);
  func_0x000107c5fadc(0xd000000000000012,0x800000010f03f080);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar110);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar40);
  uVar107 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f051690);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar32);
  func_0x000107c61170(uVar107);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar107 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar33);
  func_0x000107c61170(uVar107);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef11140);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar41);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar40);
  uVar107 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f09ddb0);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar35);
  func_0x000107c61170(uVar107);
  uVar107 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar107);
  uVar40 = 0xd000000000000029;
  func_0x000107c5fadc(0xd000000000000029,0x800000010f0a3f60);
  func_0x000107c5a49c(uVar107);
  func_0x000107c61170(uVar107);
  func_0x000107c61170(uVar36);
  func_0x000107c61170(uVar40);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef19dd0);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar37);
  func_0x000107c61170(uVar111);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar40);
  uVar107 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef9e300);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar42);
  func_0x000107c61170(uVar107);
  uVar107 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar107);
  uVar40 = uVar109;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f00acf0);
  func_0x000107c5a49c(uVar107);
  func_0x000107c61170(uVar107);
  func_0x000107c61170(uVar43);
  func_0x000107c61170(uVar40);
  uVar107 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar107);
  uVar40 = uVar108;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef19650);
  func_0x000107c5a49c(uVar107);
  func_0x000107c61170(uVar107);
  func_0x000107c61170(uVar44);
  func_0x000107c61170(uVar40);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar40);
  uVar107 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010effcda0);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar45);
  func_0x000107c61170(uVar107);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar107 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef19df0);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar46);
  func_0x000107c61170(uVar107);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar40);
  uVar107 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef21b90);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar47);
  func_0x000107c61170(uVar107);
  uVar107 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar107);
  uVar40 = uVar108;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef3bff0);
  func_0x000107c5a49c(uVar107);
  func_0x000107c61170(uVar107);
  func_0x000107c61170(uVar48);
  func_0x000107c61170(uVar40);
  uVar107 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar107);
  uVar111 = 0xd000000000000015;
  uVar40 = uVar111;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef2fd80);
  func_0x000107c5a49c(uVar107);
  func_0x000107c61170(uVar107);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar40);
  uVar107 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar107);
  uVar41 = 0xd000000000000013;
  uVar40 = uVar41;
  func_0x000107c5fadc(0xd000000000000013,0x800000010f0a3f90);
  func_0x000107c5a49c(uVar107);
  func_0x000107c61170(uVar107);
  func_0x000107c61170(uVar50);
  func_0x000107c61170(uVar40);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar40);
  uVar107 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efc4520);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar51);
  func_0x000107c61170(uVar107);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar40);
  uVar107 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef20b70);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar52);
  func_0x000107c61170(uVar107);
  uVar107 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar107);
  uVar40 = uVar109;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef85540);
  func_0x000107c5a49c(uVar107);
  func_0x000107c61170(uVar107);
  func_0x000107c61170(uVar53);
  func_0x000107c61170(uVar40);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar40);
  uVar107 = 0x53636f4470616e73;
  func_0x000107c5fadc(0x53636f4470616e73,0xef73656369767265);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar54);
  func_0x000107c61170(uVar107);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar107 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f0a3fb0);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar55);
  func_0x000107c61170(uVar107);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar40);
  uVar107 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f006f40);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar56);
  func_0x000107c61170(uVar107);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar40);
  uVar107 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef19380);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar57);
  func_0x000107c61170(uVar107);
  uVar107 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar107);
  uVar40 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010ef2dd00);
  func_0x000107c5a49c(uVar107);
  func_0x000107c61170(uVar107);
  func_0x000107c61170(uVar58);
  func_0x000107c61170(uVar40);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar40);
  uVar107 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f0a3fd0);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar59);
  func_0x000107c61170(uVar107);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar40);
  uVar107 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f0a3ff0);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar60);
  func_0x000107c61170(uVar107);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar40);
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef1de30);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar61);
  func_0x000107c61170(uVar109);
  uVar107 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar107);
  uVar40 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef3dbc0);
  func_0x000107c5a49c(uVar107);
  func_0x000107c61170(uVar107);
  func_0x000107c61170(uVar62);
  func_0x000107c61170(uVar40);
  uVar107 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar107);
  uVar40 = uVar108;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef21240);
  func_0x000107c5a49c(uVar107);
  func_0x000107c61170(uVar107);
  func_0x000107c61170(uVar63);
  func_0x000107c61170(uVar40);
  uVar107 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar107);
  uVar40 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f00ad10);
  func_0x000107c5a49c(uVar107);
  func_0x000107c61170(uVar107);
  func_0x000107c61170(uVar64);
  func_0x000107c61170(uVar40);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar107 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f09edb0);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar65);
  func_0x000107c61170(uVar107);
  uVar107 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar40 = uVar108;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef113a0);
  func_0x000107c5a49c(uVar107);
  func_0x000107c61170(uVar107);
  func_0x000107c61170(uVar66);
  func_0x000107c61170(uVar40);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar40);
  uVar107 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef2b4b0);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar67);
  func_0x000107c61170(uVar107);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar40);
  uVar107 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar68);
  func_0x000107c61170(uVar107);
  uVar107 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar107);
  uVar110 = 0xd000000000000017;
  uVar40 = uVar110;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef2b490);
  func_0x000107c5a49c(uVar107);
  func_0x000107c61170(uVar107);
  func_0x000107c61170(uVar69);
  func_0x000107c61170(uVar40);
  uVar107 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar107);
  uVar40 = uVar111;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f01a7f0);
  func_0x000107c5a49c(uVar107);
  func_0x000107c61170(uVar107);
  func_0x000107c61170(uVar70);
  func_0x000107c61170(uVar40);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar107 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010efbb870);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar71);
  func_0x000107c61170(uVar107);
  uVar107 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar107);
  uVar40 = uVar108;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef20500);
  func_0x000107c5a49c(uVar107);
  func_0x000107c61170(uVar107);
  func_0x000107c61170(uVar72);
  func_0x000107c61170(uVar40);
  uVar107 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar107);
  uVar40 = 0xd00000000000002d;
  func_0x000107c5fadc(0xd00000000000002d,0x800000010f0a4010);
  func_0x000107c5a49c(uVar107);
  func_0x000107c61170(uVar107);
  func_0x000107c61170(uVar73);
  func_0x000107c61170(uVar40);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar40);
  uVar107 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f03f0a0);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar74);
  func_0x000107c61170(uVar107);
  uVar107 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar107);
  uVar40 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f0a4040);
  func_0x000107c5a49c(uVar107);
  func_0x000107c61170(uVar107);
  func_0x000107c61170(uVar75);
  func_0x000107c61170(uVar40);
  uVar107 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar107);
  uVar40 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef2a530);
  func_0x000107c5a49c(uVar107);
  func_0x000107c61170(uVar107);
  func_0x000107c61170(uVar76);
  func_0x000107c61170(uVar40);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar40);
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef234e0);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar77);
  func_0x000107c61170(uVar41);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar40);
  uVar107 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f05c040);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar78);
  func_0x000107c61170(uVar107);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar40);
  uVar107 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f0a4070);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar79);
  func_0x000107c61170(uVar107);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar40);
  uVar107 = 0x72655374736f6f62;
  func_0x000107c5fadc(0x72655374736f6f62,0xed00007365636976);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar80);
  func_0x000107c61170(uVar107);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar40);
  uVar107 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef35720);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar81);
  func_0x000107c61170(uVar107);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar40);
  uVar107 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef21a40);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar82);
  func_0x000107c61170(uVar107);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000017,0x800000010f0a4090);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar83);
  func_0x000107c61170(uVar110);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar40);
  uVar107 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef32a00);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar84);
  func_0x000107c61170(uVar107);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar40);
  uVar107 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef329e0);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar85);
  func_0x000107c61170(uVar107);
  uVar107 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar107);
  uVar40 = uVar108;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef1a530);
  func_0x000107c5a49c(uVar107);
  func_0x000107c61170(uVar107);
  func_0x000107c61170(uVar86);
  func_0x000107c61170(uVar40);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar40);
  uVar107 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef32650);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar107);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar40);
  uVar107 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010efe1e20);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar88);
  func_0x000107c61170(uVar107);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar40);
  uVar107 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f01a8f0);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar89);
  func_0x000107c61170(uVar107);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar40);
  uVar107 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f0a40b0);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar90);
  func_0x000107c61170(uVar107);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar40);
  uVar107 = 0x7265536873617263;
  func_0x000107c5fadc(0x7265536873617263,0xed00007365636976);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar91);
  func_0x000107c61170(uVar107);
  uVar107 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar40 = uVar111;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f0a40d0);
  func_0x000107c5a49c(uVar107);
  func_0x000107c61170(uVar107);
  func_0x000107c61170(uVar92);
  func_0x000107c61170(uVar40);
  uVar107 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar107);
  uVar41 = 0xd000000000000012;
  uVar40 = uVar41;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f05c610);
  func_0x000107c5a49c(uVar107);
  func_0x000107c61170(uVar107);
  func_0x000107c61170(uVar93);
  func_0x000107c61170(uVar40);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef1e0e0);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar94);
  func_0x000107c61170(uVar108);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar40);
  func_0x000107c5fadc(0xd000000000000012,0x800000010f05c380);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar95);
  func_0x000107c61170(uVar41);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar40);
  uVar107 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f00a420);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar96);
  func_0x000107c61170(uVar107);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar40);
  uVar107 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010efc33b0);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar97);
  func_0x000107c61170(uVar107);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar40);
  uVar107 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f0157d0);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar98);
  func_0x000107c61170(uVar107);
  uVar107 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar107);
  uVar40 = 0xd000000000000029;
  func_0x000107c5fadc(0xd000000000000029,0x800000010f007220);
  func_0x000107c5a49c(uVar107);
  func_0x000107c61170(uVar107);
  func_0x000107c61170(uVar99);
  func_0x000107c61170(uVar40);
  uVar107 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar107);
  uVar40 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010ef2d6e0);
  func_0x000107c5a49c(uVar107);
  func_0x000107c61170(uVar107);
  func_0x000107c61170(uVar100);
  func_0x000107c61170(uVar40);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar107 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010efc89e0);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar101);
  func_0x000107c61170(uVar107);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar107 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010efc7150);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar102);
  func_0x000107c61170(uVar107);
  uVar107 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar40 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010efc8a80);
  func_0x000107c5a49c(uVar107);
  func_0x000107c61170(uVar107);
  func_0x000107c61170(uVar103);
  func_0x000107c61170(uVar40);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar104);
  func_0x000107c61174(uVar40);
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef384a0);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar104);
  func_0x000107c61170(uVar111);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar105);
  func_0x000107c61174(uVar40);
  uVar107 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef1d180);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar105);
  func_0x000107c61170(uVar107);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  uVar107 = *(undefined8 *)(param_2 + 0x58);
  func_0x000107c61174(uVar40);
  func_0x000107c61174(uVar107);
  uVar41 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f0a40f0);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar107);
  func_0x000107c61170(uVar41);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  uVar107 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174(uVar40);
  func_0x000107c61174(uVar107);
  uVar41 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef2b760);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar107);
  func_0x000107c61170(uVar41);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  uVar107 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar41 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f03f140);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar107);
  func_0x000107c61170(uVar41);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  uVar107 = *(undefined8 *)(param_2 + 0x28);
  func_0x000107c61174(uVar40);
  func_0x000107c61174(uVar107);
  uVar41 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f0a4110);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar107);
  func_0x000107c61170(uVar41);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  uVar107 = *(undefined8 *)(param_2 + 0x30);
  func_0x000107c61174(uVar40);
  func_0x000107c61174();
  uVar41 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef2dd30);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar107);
  func_0x000107c61170(uVar41);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  uVar107 = *(undefined8 *)(param_2 + 0x38);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar41 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f05c900);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar107);
  func_0x000107c61170(uVar41);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  uVar107 = *(undefined8 *)(param_2 + 0x40);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar41 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f0a4130);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar107);
  func_0x000107c61170(uVar41);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  uVar107 = *(undefined8 *)(param_2 + 0x48);
  func_0x000107c61174(uVar40);
  func_0x000107c61174(uVar107);
  uVar41 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f0a4150);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar107);
  func_0x000107c61170(uVar41);
  uVar40 = *(undefined8 *)(param_2 + 0x10);
  uVar107 = *(undefined8 *)(param_2 + 0x50);
  func_0x000107c61174(uVar40);
  func_0x000107c61174(uVar107);
  uVar41 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f0a4170);
  func_0x000107c5a49c(uVar40);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar107);
  func_0x000107c61170(uVar41);
  func_0x000107c3e740(*(undefined8 *)(param_2 + 0x10));
  lVar106 = *(long *)(param_2 + 0x58);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar106 != 0) {
    func_0x000107c61170(uVar39);
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
    func_0x000107c61170(uVar20);
    func_0x000107c61170(uVar21);
    func_0x000107c61170(uVar22);
    func_0x000107c61170(uVar23);
    func_0x000107c61170(uVar24);
    func_0x000107c61170(uVar25);
    func_0x000107c61170(uVar26);
    func_0x000107c61170(uVar27);
    func_0x000107c61170(uVar28);
    func_0x000107c61170(uVar29);
    func_0x000107c61170(uVar30);
    func_0x000107c61170(uVar31);
    func_0x000107c61170(uVar32);
    func_0x000107c61170(uVar33);
    func_0x000107c61170(uVar34);
    func_0x000107c61170(uVar35);
    func_0x000107c61170(uVar36);
    func_0x000107c61170(uVar37);
    func_0x000107c61170(uVar42);
    func_0x000107c61170(uVar43);
    func_0x000107c61170(uVar44);
    func_0x000107c61170(uVar45);
    func_0x000107c61170(uVar46);
    func_0x000107c61170(uVar47);
    func_0x000107c61170(uVar48);
    func_0x000107c61170(uVar49);
    func_0x000107c61170(uVar50);
    func_0x000107c61170(uVar51);
    func_0x000107c61170(uVar52);
    func_0x000107c61170(uVar53);
    func_0x000107c61170(uVar54);
    func_0x000107c61170(uVar55);
    func_0x000107c61170(uVar56);
    func_0x000107c61170(uVar57);
    func_0x000107c61170(uVar58);
    func_0x000107c61170(uVar59);
    func_0x000107c61170(uVar60);
    func_0x000107c61170(uVar61);
    func_0x000107c61170(uVar62);
    func_0x000107c61170(uVar63);
    func_0x000107c61170(uVar64);
    func_0x000107c61170(uVar65);
    func_0x000107c61170(uVar66);
    func_0x000107c61170(uVar67);
    func_0x000107c61170(uVar68);
    func_0x000107c61170(uVar69);
    func_0x000107c61170(uVar70);
    func_0x000107c61170(uVar71);
    func_0x000107c61170(uVar72);
    func_0x000107c61170(uVar73);
    func_0x000107c61170(uVar74);
    func_0x000107c61170(uVar75);
    func_0x000107c61170(uVar76);
    func_0x000107c61170(uVar77);
    func_0x000107c61170(uVar78);
    func_0x000107c61170(uVar79);
    func_0x000107c61170(uVar80);
    func_0x000107c61170(uVar81);
    func_0x000107c61170(uVar82);
    func_0x000107c61170(uVar83);
    func_0x000107c61170(uVar84);
    func_0x000107c61170(uVar85);
    func_0x000107c61170(uVar86);
    func_0x000107c61170(uVar87);
    func_0x000107c61170(uVar88);
    func_0x000107c61170(uVar89);
    func_0x000107c61170(uVar90);
    func_0x000107c61170(uVar91);
    func_0x000107c61170(uVar92);
    func_0x000107c61170(uVar93);
    func_0x000107c61170(uVar94);
    func_0x000107c61170(uVar95);
    func_0x000107c61170(uVar96);
    func_0x000107c61170(uVar97);
    func_0x000107c61170(uVar98);
    func_0x000107c61170(uVar99);
    func_0x000107c61170(uVar100);
    func_0x000107c61170(uVar101);
    func_0x000107c61170(uVar102);
    func_0x000107c61170(uVar103);
    func_0x000107c61170(uVar104);
    func_0x000107c61170(uVar105);
    func_0x000107c61574(uStack_398);
    func_0x000107c61574(uStack_3a0);
    func_0x000107c61574(uStack_3a8);
    func_0x000107c61574(uStack_3b0);
    func_0x000107c61574(uStack_3b8);
    func_0x000107c61574(uStack_3c0);
    func_0x000107c61574(uStack_3c8);
    func_0x000107c61574(uStack_3d0);
    *(long *)(param_2 + 0x380) = lVar106;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024b9194);
  (*pcVar1)();
}



/* Entry: 1024bcc04; end: 1024bcfaf;  */

void FUN_1024bcc04(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x168));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x170));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x178));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x180));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x188));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 400));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x198));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1a0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1a8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1b0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1b8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1c0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1c8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1d0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1d8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1e0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1e8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1f0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1f8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x200));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x208));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x210));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x218));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x220));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x228));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x230));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x238));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x240));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x248));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x250));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 600));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x260));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x268));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x270));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x278));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x280));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x288));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x290));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x298));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x2a0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x2a8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x2b0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x2b8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x2c0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x2c8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x2d0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x2d8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x2e0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x2e8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x2f0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x2f8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x300));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x308));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x310));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x318));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 800));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x328));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x330));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x338));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x340));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x348));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x350));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x358));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x360));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x368));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x370));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x378));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x380));
  return;
}



/* Entry: 1024bcfb0; end: 1024bd003;  */

void FUN_1024bcfb0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x380);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1024bd004; end: 1024bd00b;  */

undefined8 FUN_1024bd004(void)

{
  return 0x1b;
}



/* Entry: 1024bd00c; end: 1024bd08f;  */

void FUN_1024bd00c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1024bd160,param_2,FUN_1024bd164,param_2,FUN_1024bd18c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1024bd090; end: 1024bd0df;  */

undefined8 FUN_1024bd090(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1024bd0e0; end: 1024bd10f;  */

undefined ** FUN_1024bd0e0(void)

{
  return &PTR_DAT_113067000;
}



/* Entry: 1024bd110; end: 1024bd12f;  */

void FUN_1024bd110(void)

{
  func_0x000107c61168(&PTR_PTR_112e9f0c8);
  return;
}



/* Entry: 1024bd130; end: 1024bd163;  */

undefined1  [16] FUN_1024bd130(void)

{
  return ZEXT816(0x110513f30);
}



/* Entry: 1024bd164; end: 1024bd18b;  */

void FUN_1024bd164(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1024bd18c; end: 1024bd193;  */

undefined8 FUN_1024bd18c(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1024bd194; end: 1024c0127;  */

void FUN_1024bd194(long *param_1,long param_2)

{
  code *pcVar1;
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
  undefined *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  long lVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
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
  
  func_0x000100083b20(auStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  func_0x000100083b20(&uStack_b0);
  func_0x000100083b20(&uStack_b8);
  func_0x000100083b20(&uStack_c0);
  func_0x000100083b20(&uStack_c8);
  func_0x000100083b20(&uStack_d0);
  func_0x000100083b20(&uStack_d8);
  func_0x000100083b20(&uStack_e0);
  func_0x000100083b20(&uStack_e8);
  func_0x000100083b20(&uStack_f0);
  func_0x000100083b20(&uStack_f8);
  func_0x000100083b20(&uStack_100);
  func_0x000100083b20(&uStack_108);
  func_0x000100083b20(&uStack_110);
  func_0x000100083b20(&uStack_118);
  func_0x000100083b20(&uStack_120);
  func_0x000100083b20(&uStack_128);
  func_0x000100083b20(&uStack_130);
  func_0x000100083b20(&uStack_138);
  func_0x000100083b20(&uStack_140);
  func_0x000100083b20(&uStack_148);
  func_0x000100083b20(&uStack_150);
  func_0x000100083b20(&uStack_158);
  func_0x000100083b20(&uStack_160);
  func_0x000100083b20(&uStack_168);
  func_0x000100083b20(&uStack_170);
  func_0x000100083b20(&uStack_178);
  func_0x000100083b20(&uStack_180);
  func_0x000100083b20(&uStack_188);
  func_0x000100083b20(&uStack_190);
  func_0x000100083b20(&uStack_198);
  func_0x000100083b20(&uStack_1a0);
  func_0x000100083b20(&uStack_1a8);
  FUN_1024c040c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x40) = uStack_78;
  *(undefined8 *)(param_2 + 0x48) = uStack_80;
  *(undefined8 *)(param_2 + 0x50) = uStack_88;
  *(undefined8 *)(param_2 + 0x58) = uStack_90;
  *(undefined8 *)(param_2 + 0x60) = uStack_98;
  *(undefined8 *)(param_2 + 0x68) = uStack_a0;
  *(undefined8 *)(param_2 + 0x70) = uStack_a8;
  *(undefined8 *)(param_2 + 0x78) = uStack_b0;
  *(undefined8 *)(param_2 + 0x80) = uStack_b8;
  *(undefined8 *)(param_2 + 0x88) = uStack_c0;
  *(undefined8 *)(param_2 + 0x90) = uStack_c8;
  *(undefined8 *)(param_2 + 0x98) = uStack_d0;
  *(undefined8 *)(param_2 + 0xa0) = uStack_d8;
  *(undefined8 *)(param_2 + 0xa8) = uStack_e0;
  *(undefined8 *)(param_2 + 0xb0) = uStack_e8;
  *(undefined8 *)(param_2 + 0xb8) = uStack_f0;
  *(undefined8 *)(param_2 + 0xc0) = uStack_f8;
  *(undefined8 *)(param_2 + 200) = uStack_100;
  *(undefined8 *)(param_2 + 0xd0) = uStack_108;
  *(undefined8 *)(param_2 + 0xd8) = uStack_110;
  *(undefined8 *)(param_2 + 0xe0) = uStack_118;
  *(undefined8 *)(param_2 + 0xe8) = uStack_120;
  *(undefined8 *)(param_2 + 0xf0) = uStack_128;
  *(undefined8 *)(param_2 + 0xf8) = uStack_130;
  *(undefined8 *)(param_2 + 0x100) = uStack_138;
  *(undefined8 *)(param_2 + 0x108) = uStack_140;
  *(undefined8 *)(param_2 + 0x110) = uStack_148;
  *(undefined8 *)(param_2 + 0x118) = uStack_150;
  *(undefined8 *)(param_2 + 0x120) = uStack_158;
  *(undefined8 *)(param_2 + 0x128) = uStack_160;
  *(undefined8 *)(param_2 + 0x130) = uStack_168;
  *(undefined8 *)(param_2 + 0x138) = uStack_170;
  *(undefined8 *)(param_2 + 0x140) = uStack_178;
  *(undefined8 *)(param_2 + 0x148) = uStack_180;
  *(undefined8 *)(param_2 + 0x150) = uStack_188;
  func_0x0001000285a8(0x112e9f498,&UNK_10dab0360);
  func_0x000107c610f8();
  uVar2 = uStack_140;
  func_0x000107c61174();
  uVar19 = uStack_78;
  func_0x000107c61174();
  uVar20 = uStack_80;
  func_0x000107c61174();
  uVar3 = uStack_88;
  func_0x000107c61174();
  uVar4 = uStack_90;
  func_0x000107c61174();
  uVar5 = uStack_98;
  func_0x000107c61174();
  uVar6 = uStack_a0;
  func_0x000107c61174();
  uVar7 = uStack_a8;
  func_0x000107c61174();
  uVar8 = uStack_b0;
  func_0x000107c61174();
  uVar9 = uStack_b8;
  func_0x000107c61174();
  uVar10 = uStack_c0;
  func_0x000107c61174();
  uVar11 = uStack_c8;
  func_0x000107c61174();
  uVar12 = uStack_d0;
  func_0x000107c61174();
  uVar13 = uStack_d8;
  func_0x000107c61174();
  uVar14 = uStack_e0;
  func_0x000107c61174();
  uVar15 = uStack_e8;
  func_0x000107c61174();
  uVar21 = uStack_f0;
  func_0x000107c61174();
  uVar22 = uStack_f8;
  func_0x000107c61174();
  uVar23 = uStack_100;
  func_0x000107c61174();
  uVar24 = uStack_108;
  func_0x000107c61174();
  uVar25 = uStack_110;
  func_0x000107c61174();
  uVar26 = uStack_118;
  func_0x000107c61174();
  uVar27 = uStack_120;
  func_0x000107c61174();
  uVar28 = uStack_128;
  func_0x000107c61174();
  uVar29 = uStack_130;
  func_0x000107c61174();
  uVar30 = uStack_138;
  func_0x000107c61174();
  uVar31 = uStack_148;
  func_0x000107c61174();
  uVar32 = uStack_150;
  func_0x000107c61174();
  uVar33 = uStack_158;
  func_0x000107c61174();
  uVar34 = uStack_160;
  func_0x000107c61174();
  uVar35 = uStack_168;
  func_0x000107c61174();
  uVar36 = uStack_170;
  func_0x000107c61174();
  uVar37 = uStack_178;
  func_0x000107c61174();
  uVar38 = uStack_180;
  func_0x000107c61174();
  uVar39 = uStack_188;
  func_0x000107c61174();
  uVar18 = uStack_190;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar16 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar18);
  *(undefined **)(param_2 + 0x18) = puVar16;
  func_0x0001000285a8(0x112e9f4a0,&UNK_10dab0368);
  func_0x000107c610f8();
  uVar18 = uStack_198;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar16 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar18);
  *(undefined **)(param_2 + 0x20) = puVar16;
  func_0x0001000285a8(0x112e9f4a8,&UNK_10dab0370);
  func_0x000107c610f8();
  uVar18 = uStack_1a0;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar16 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar18);
  *(undefined **)(param_2 + 0x28) = puVar16;
  func_0x0001000285a8(0x112e9f4b0,&UNK_10dab0378);
  func_0x000107c610f8();
  uVar18 = uStack_1a8;
  func_0x000107c6157c(uStack_1a8);
  func_0x00010017da58();
  puVar16 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar18);
  *(undefined **)(param_2 + 0x30) = puVar16;
  puVar16 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x38) = puVar16;
  puVar16 = PTR_PTR_1126aa928;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar16;
  func_0x000107c61174();
  uVar17 = auStack_70[0];
  func_0x000107c61174();
  uVar18 = 0x6867696c746f7073;
  func_0x000107c5fadc(0x6867696c746f7073,0xee0065706f635374);
  func_0x000107c5a49c(puVar16);
  func_0x000107c61170(puVar16);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar18);
  uVar41 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar42 = 0xd000000000000013;
  uVar18 = uVar42;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef18660);
  func_0x000107c5a49c(uVar41);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar18);
  uVar41 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar44 = 0xd000000000000010;
  uVar18 = uVar44;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef11140);
  func_0x000107c5a49c(uVar41);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar18);
  uVar18 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar41 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f0a4190);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar41);
  uVar41 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f007170);
  func_0x000107c5a49c(uVar41);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar18);
  uVar41 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar41);
  uVar18 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f00aef0);
  func_0x000107c5a49c(uVar41);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar18);
  uVar41 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f051690);
  func_0x000107c5a49c(uVar41);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar18);
  uVar41 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar41);
  uVar18 = uVar44;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(uVar41);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar18);
  uVar18 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar41 = 0x655373706f6f6c62;
  func_0x000107c5fadc(0x655373706f6f6c62,0xee00736563697672);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar41);
  uVar41 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar43 = 0xd000000000000014;
  uVar18 = uVar43;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f052080);
  func_0x000107c5a49c(uVar41);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar18);
  uVar18 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar41 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f01a7f0);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar41);
  uVar41 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = uVar43;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(uVar41);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar18);
  uVar18 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar41 = 0x53736569726f7473;
  func_0x000107c5fadc(0x53736569726f7473,0xef73656369767265);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar41);
  uVar18 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar41 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010efbaa40);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar41);
  uVar18 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar42);
  uVar18 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar41 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f0a41b0);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar41);
  uVar41 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f00ad40);
  func_0x000107c5a49c(uVar41);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar18);
  uVar41 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(uVar41);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar18);
  uVar41 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef21b90);
  func_0x000107c5a49c(uVar41);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar18);
  uVar18 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar41 = 0x6553746567646977;
  func_0x000107c5fadc(0x6553746567646977,0xee00736563697672);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar41);
  uVar18 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000014,0x800000010f0a41d0);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar43);
  uVar41 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef85c30);
  func_0x000107c5a49c(uVar41);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar18);
  uVar18 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar41 = 0x536f725070616e73;
  func_0x000107c5fadc(0x536f725070616e73,0xef73656369767265);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar41);
  uVar41 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef132f0);
  func_0x000107c5a49c(uVar41);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar18);
  uVar41 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f0a3f20);
  func_0x000107c5a49c(uVar41);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar18);
  uVar18 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar18);
  uVar41 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f03f160);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar30);
  func_0x000107c61170(uVar41);
  uVar42 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  uVar18 = 0x112e4d1d8;
  func_0x0001000285a8(0x112e4d1d8,&UNK_10da47830);
  func_0x000107c60184();
  uVar41 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f0521c0);
  func_0x000107c5a49c(uVar42);
  func_0x000107c61170(uVar42);
  func_0x000107c615e8(uVar18);
  func_0x000107c61170(uVar41);
  uVar41 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f01a8d0);
  func_0x000107c5a49c(uVar41);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar18);
  uVar18 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar18);
  func_0x000107c5fadc(0xd000000000000010,0x800000010efbb890);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar32);
  func_0x000107c61170(uVar44);
  uVar18 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar41 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f01a810);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar33);
  func_0x000107c61170(uVar41);
  uVar18 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar41 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef85540);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar41);
  uVar41 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef21a40);
  func_0x000107c5a49c(uVar41);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar35);
  func_0x000107c61170(uVar18);
  uVar18 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar41 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef287a0);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar36);
  func_0x000107c61170(uVar41);
  uVar41 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar41);
  uVar18 = 0xd000000000000028;
  func_0x000107c5fadc(0xd000000000000028,0x800000010f0a41f0);
  func_0x000107c5a49c(uVar41);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar37);
  func_0x000107c61170(uVar18);
  uVar41 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd00000000000002a;
  func_0x000107c5fadc(0xd00000000000002a,0x800000010f0a4220);
  func_0x000107c5a49c(uVar41);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar38);
  func_0x000107c61170(uVar18);
  uVar41 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f0a4250);
  func_0x000107c5a49c(uVar41);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar18);
  uVar18 = *(undefined8 *)(param_2 + 0x10);
  uVar41 = *(undefined8 *)(param_2 + 0x38);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar42 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f0a4280);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar42);
  uVar41 = *(undefined8 *)(param_2 + 0x10);
  uVar42 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd000000000000027;
  func_0x000107c5fadc(0xd000000000000027,0x800000010f0a42a0);
  func_0x000107c5a49c(uVar41);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar42);
  func_0x000107c61170(uVar18);
  uVar18 = *(undefined8 *)(param_2 + 0x10);
  uVar41 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61174(uVar18);
  func_0x000107c61174(uVar41);
  uVar42 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f0a42d0);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar42);
  uVar41 = *(undefined8 *)(param_2 + 0x10);
  uVar42 = *(undefined8 *)(param_2 + 0x28);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f0a42f0);
  func_0x000107c5a49c(uVar41);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar42);
  func_0x000107c61170(uVar18);
  uVar41 = *(undefined8 *)(param_2 + 0x10);
  uVar42 = *(undefined8 *)(param_2 + 0x30);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd000000000000029;
  func_0x000107c5fadc(0xd000000000000029,0x800000010f0a4310);
  func_0x000107c5a49c(uVar41);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar42);
  func_0x000107c61170(uVar18);
  func_0x000107c3e740(*(undefined8 *)(param_2 + 0x10));
  lVar40 = *(long *)(param_2 + 0x38);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar40 != 0) {
    func_0x000107c61170(uVar17);
    func_0x000107c61170(uVar19);
    func_0x000107c61170(uVar20);
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
    func_0x000107c61170(uVar21);
    func_0x000107c61170(uVar22);
    func_0x000107c61170(uVar23);
    func_0x000107c61170(uVar24);
    func_0x000107c61170(uVar25);
    func_0x000107c61170(uVar26);
    func_0x000107c61170(uVar27);
    func_0x000107c61170(uVar28);
    func_0x000107c61170(uVar29);
    func_0x000107c61170(uVar30);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar31);
    func_0x000107c61170(uVar32);
    func_0x000107c61170(uVar33);
    func_0x000107c61170(uVar34);
    func_0x000107c61170(uVar35);
    func_0x000107c61170(uVar36);
    func_0x000107c61170(uVar37);
    func_0x000107c61170(uVar38);
    func_0x000107c61170(uVar39);
    func_0x000107c61574(uStack_190);
    func_0x000107c61574(uStack_198);
    func_0x000107c61574(uStack_1a0);
    func_0x000107c61574(uStack_1a8);
    *(long *)(param_2 + 0x158) = lVar40;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024beb38);
  (*pcVar1)();
}



/* Entry: 1024c0128; end: 1024c02ab;  */

void FUN_1024c0128(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x158));
  return;
}



/* Entry: 1024c02ac; end: 1024c02ff;  */

void FUN_1024c02ac(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x158);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1024c0300; end: 1024c0307;  */

undefined8 FUN_1024c0300(void)

{
  return 0x1b;
}



/* Entry: 1024c0308; end: 1024c038b;  */

void FUN_1024c0308(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1024c045c,param_2,FUN_1024c0460,param_2,FUN_1024c0488,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1024c038c; end: 1024c03db;  */

undefined8 FUN_1024c038c(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1024c03dc; end: 1024c040b;  */

undefined ** FUN_1024c03dc(void)

{
  return &PTR_DAT_113067000;
}



/* Entry: 1024c040c; end: 1024c042b;  */

void FUN_1024c040c(void)

{
  func_0x000107c61168(&PTR_PTR_112e9f520);
  return;
}



/* Entry: 1024c042c; end: 1024c045f;  */

undefined1  [16] FUN_1024c042c(void)

{
  return ZEXT816(0x110513fd0);
}



/* Entry: 1024c0460; end: 1024c0487;  */

void FUN_1024c0460(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1024c0488; end: 1024c048f;  */

undefined8 FUN_1024c0488(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1024c0490; end: 1024c05eb;  */

void FUN_1024c0490(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  FUN_1024c0724();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  *(undefined8 *)(param_2 + 0x20) = uStack_58;
  func_0x0001024cebac(0);
  func_0x000107c613fc();
  uVar1 = uStack_50;
  func_0x000107c61174(uStack_50);
  func_0x000107c61174(uStack_58);
  FUN_1024ce948(uStack_48,uVar1,uStack_58);
  *(undefined8 *)(param_2 + 0x10) = uStack_48;
  *param_1 = param_2;
  return;
}



/* Entry: 1024c05ec; end: 1024c061f;  */

void FUN_1024c05ec(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1024c0620; end: 1024c0627;  */

undefined8 FUN_1024c0620(void)

{
  return 0x1b;
}



/* Entry: 1024c0628; end: 1024c06ab;  */

void FUN_1024c0628(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1024c0764,param_2,FUN_1024c0768,param_2,FUN_1024c0790,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1024c06ac; end: 1024c06f3;  */

undefined8 FUN_1024c06ac(undefined8 param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_1024ceb38();
  func_0x000107c61574(uStack_28);
  return param_1;
}



/* Entry: 1024c06f4; end: 1024c0723;  */

undefined ** FUN_1024c06f4(void)

{
  return &PTR_DAT_113067000;
}



/* Entry: 1024c0724; end: 1024c0743;  */

void FUN_1024c0724(void)

{
  func_0x000107c61168(&PTR_PTR_112e9f730);
  return;
}



/* Entry: 1024c0744; end: 1024c0767;  */

undefined1  [16] FUN_1024c0744(void)

{
  return ZEXT816(0x110514070);
}



/* Entry: 1024c0768; end: 1024c078f;  */

void FUN_1024c0768(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}


