/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102028bb8; end: 102028c63; -[SCSCRecentlyActiveEducationAlertScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_102028bb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102028a98(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102028c64; end: 102028cc3; -[SCSCRecentlyActiveEducationAlertScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102028c64(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e51598,0);
  *(undefined8 *)(param_1 + _DAT_112e515a0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102028cc4; end: 102028cf7;  */

void FUN_102028cc4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102028cf8; end: 102028d2f; -[SCSCRecentlyActiveEducationAlertScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102028cf8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e51598);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e515a0));
  return;
}



/* Entry: 102028d30; end: 102028d4f;  */

void FUN_102028d30(void)

{
  func_0x000107c61168(&PTR_PTR_112819598);
  return;
}



/* Entry: 102028d50; end: 102028d7f;  */

void FUN_102028d50(undefined8 param_1)

{
  func_0x000107c610f8();
  FUN_102028d80(param_1);
  return;
}



/* Entry: 102028d80; end: 102028e67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102028d80(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  puVar3 = &stack0xffffffffffffffc0;
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e515d0);
  *puVar1 = 0xd00000000000006f;
  puVar1[1] = 0x800000010f059fb0;
  *(undefined8 *)(unaff_x20 + _DAT_112e515d8) = param_1;
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&stack0xffffffffffffffc0,puVar2);
  func_0x000107c61180();
  puVar4 = puVar3;
  FUN_102028e68();
  if (puVar4 != (undefined1 *)0x0) {
    uVar5 = *(undefined8 *)(puVar3 + _DAT_112e515d8);
    func_0x000107c5d17c(uVar5);
    func_0x000107c61180();
    func_0x000107c3e2c0();
    func_0x000107c61170(puVar4);
    func_0x000107c615e8(uVar5);
  }
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar3);
  return puVar3;
}



/* Entry: 102028e68; end: 1020296cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102028e68(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined **ppuVar21;
  long unaff_x20;
  undefined8 uVar22;
  undefined8 *puVar23;
  undefined8 uVar24;
  undefined *puStack_230;
  undefined8 uStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  code *pcStack_210;
  undefined *puStack_208;
  undefined1 auStack_200 [192];
  undefined1 auStack_140 [72];
  undefined1 auStack_f8 [152];
  
  puVar1 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar2 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f05a070);
  puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x000107c61168();
  puVar4 = puVar3;
  func_0x000107c43794(0x402c000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  if (puVar4 != (undefined *)0x0) {
    uVar2 = 0xd000000000000013;
    func_0x000107c5fadc(0xd000000000000013,0x800000010f05a090);
    func_0x000107c43794(0x402c000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    if (puVar3 != (undefined *)0x0) {
      uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112e515d0);
      uVar12 = ((undefined8 *)(unaff_x20 + _DAT_112e515d0))[1];
      puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x000107c610f8();
      func_0x000107c5fadc(uVar2,uVar12);
      func_0x000107c48af4();
      func_0x000107c61170(uVar2);
      if (puVar5 != (undefined *)0x0) {
        FUN_10202989c();
        lVar6 = 0x112d48380;
        func_0x0001000285a8(0x112d48380,&UNK_10d910f10);
        lVar7 = lVar6;
        func_0x000107c61534();
        *(undefined8 *)(lVar7 + 0x18) = 2;
        *(undefined8 *)(lVar7 + 0x10) = 1;
        uVar24 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
        *(undefined8 *)(lVar7 + 0x20) = uVar24;
        uVar8 = 0;
        FUN_10202981c(0,0x112d48388,&PTR__OBJC_CLASS___UIFont_1126aec38);
        *(undefined8 *)(lVar7 + 0x40) = uVar8;
        *(undefined **)(lVar7 + 0x28) = puVar4;
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        lVar9 = lVar7;
        func_0x000100ecbca8(lVar7);
        func_0x000107c61588(lVar7);
        func_0x000100ef0820((undefined8 *)(lVar7 + 0x20));
        puVar10 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
        func_0x000107c610f8();
        func_0x000107c5fadc(uVar2,uVar12);
        func_0x000107c6142c(uVar12);
        uVar11 = 0;
        func_0x000100eca28c();
        uVar12 = 0x112d483a0;
        func_0x00010202985c(0x112d483a0,&UNK_10d90f180);
        lVar7 = lVar9;
        uVar22 = uVar11;
        func_0x000107c5f9dc(lVar9,uVar11,PTR___sypN_11034f1a8 + 8,uVar12);
        func_0x000107c6142c(lVar9);
        func_0x000107c48af8();
        func_0x000107c61170(uVar2);
        func_0x000107c61170(lVar7);
        func_0x000102029968();
        lVar9 = lVar6;
        func_0x000107c61534(lVar6,auStack_f8);
        *(undefined8 *)(lVar9 + 0x18) = 2;
        *(undefined8 *)(lVar9 + 0x10) = 1;
        *(undefined8 *)(lVar9 + 0x20) = uVar24;
        *(undefined8 *)(lVar9 + 0x40) = uVar8;
        *(undefined **)(lVar9 + 0x28) = puVar3;
        func_0x000107c61174();
        func_0x000107c61174();
        lVar13 = lVar9;
        func_0x000100ecbca8(lVar9);
        func_0x000107c61588(lVar9);
        func_0x000100ef0820((undefined8 *)(lVar9 + 0x20));
        puVar14 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
        func_0x000107c610f8();
        func_0x000107c5fadc(lVar7,uVar22);
        func_0x000107c6142c(uVar22);
        lVar9 = lVar13;
        uVar2 = uVar11;
        func_0x000107c5f9dc(lVar13,uVar11,PTR___sypN_11034f1a8 + 8,uVar12);
        func_0x000107c6142c(lVar13);
        func_0x000107c48af8();
        func_0x000107c61170(lVar7);
        func_0x000107c61170(lVar9);
        func_0x000102029a34();
        lVar7 = lVar6;
        func_0x000107c61534(lVar6,auStack_140);
        *(undefined8 *)(lVar7 + 0x18) = 2;
        *(undefined8 *)(lVar7 + 0x10) = 1;
        *(undefined8 *)(lVar7 + 0x20) = uVar24;
        *(undefined8 *)(lVar7 + 0x40) = uVar8;
        *(undefined **)(lVar7 + 0x28) = puVar4;
        func_0x000107c61174();
        lVar13 = lVar7;
        func_0x000100ecbca8(lVar7);
        func_0x000107c61588(lVar7);
        func_0x000100ef0820((undefined8 *)(lVar7 + 0x20));
        puVar15 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
        func_0x000107c610f8();
        func_0x000107c5fadc(lVar9,uVar2);
        func_0x000107c6142c(uVar2);
        lVar7 = lVar13;
        func_0x000107c5f9dc(lVar13,uVar11,PTR___sypN_11034f1a8 + 8,uVar12);
        func_0x000107c6142c(lVar13);
        func_0x000107c48af8();
        func_0x000107c61170(lVar9);
        func_0x000107c61170(lVar7);
        func_0x000107c61534(lVar6,auStack_200);
        *(undefined8 *)(lVar6 + 0x18) = 8;
        *(undefined8 *)(lVar6 + 0x10) = 4;
        puVar23 = (undefined8 *)(lVar6 + 0x20);
        *puVar23 = uVar24;
        *(undefined **)(lVar6 + 0x28) = puVar4;
        uVar2 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
        *(undefined8 *)(lVar6 + 0x40) = uVar8;
        *(undefined8 *)(lVar6 + 0x48) = uVar2;
        puVar16 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x000107c61168();
        func_0x000107c61174();
        func_0x000107c61174(uVar2);
        func_0x000107c3eb60();
        func_0x000107c61180();
        uVar2 = 0;
        FUN_10202981c(0,0x112d48390,&PTR__OBJC_CLASS___UIColor_1126aea70);
        *(undefined **)(lVar6 + 0x50) = puVar16;
        uVar22 = *(undefined8 *)PTR__NSUnderlineStyleAttributeName_110345880;
        *(undefined8 *)(lVar6 + 0x68) = uVar2;
        *(undefined8 *)(lVar6 + 0x70) = uVar22;
        puVar16 = PTR___sSiN_11034deb0;
        *(undefined8 *)(lVar6 + 0x78) = 1;
        uVar8 = *(undefined8 *)PTR__NSLinkAttributeName_110345818;
        *(undefined **)(lVar6 + 0x90) = puVar16;
        *(undefined8 *)(lVar6 + 0x98) = uVar8;
        uVar2 = 0;
        FUN_10202981c(0,0x112d72f98,&PTR__OBJC_CLASS___NSURL_1126ae598);
        *(undefined8 *)(lVar6 + 0xb8) = uVar2;
        *(undefined **)(lVar6 + 0xa0) = puVar5;
        func_0x000107c61174(uVar22);
        func_0x000107c61174(uVar8);
        func_0x000107c61174();
        lVar7 = lVar6;
        func_0x000100ecbca8(lVar6);
        func_0x000107c61588(lVar6);
        uVar2 = 0x112d48398;
        func_0x0001000285a8(0x112d48398,&UNK_10d90f130);
        uVar22 = 4;
        func_0x000107c61408(puVar23,4,uVar2);
        func_0x000102029b00();
        puVar17 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSAttributedString_1126af068);
        func_0x000107c5fadc(puVar23,uVar22);
        func_0x000107c6142c(uVar22);
        lVar6 = lVar7;
        func_0x000107c5f9dc(lVar7,uVar11,PTR___sypN_11034f1a8 + 8,uVar12);
        func_0x000107c6142c(lVar7);
        func_0x000107c48af8();
        func_0x000107c61170(puVar23);
        func_0x000107c61170(lVar6);
        func_0x000107c3dee8(puVar1);
        func_0x000107c3dee8(puVar1);
        func_0x000107c3dee8(puVar1);
        puVar18 = puVar1;
        func_0x000107c3dee8();
        func_0x000102029bcc();
        puVar19 = puVar18;
        func_0x000100de9c28();
        lVar6 = ((ulong)*(uint *)(puVar19 + 0x30) + 7 & 0x1fffffff8) + 8;
        func_0x000107c613fc();
        *(undefined8 *)(puVar19 + 0x18) = 3;
        *(undefined8 *)(puVar19 + 0x10) = 1;
        func_0x000107c61174();
        puVar20 = puVar1;
        func_0x000102029c98();
        puVar16 = &UNK_1104bf760;
        func_0x000107c613fc(&UNK_1104bf760,0x18,7);
        *(long *)(puVar16 + 0x10) = unaff_x20;
        func_0x000107c61174();
        func_0x000107c5fadc(puVar20,lVar6);
        func_0x000107c6142c(lVar6);
        pcStack_210 = FUN_1020297f8;
        puStack_230 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_228 = 0x42000000;
        puStack_220 = &UNK_100de205c;
        puStack_218 = &UNK_1104bf778;
        ppuVar21 = &puStack_230;
        puStack_208 = puVar16;
        func_0x000107c60bc4();
        puVar16 = PTR_PTR_1126aed70;
        func_0x000107c61168();
        func_0x000107c3dad0();
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar21);
        func_0x000107c61170(puVar20);
        func_0x000107c61574(puStack_208);
        *(undefined **)(puVar19 + 0x20) = puVar16;
        puVar16 = PTR_PTR_1126aed78;
        func_0x000107c610f8(PTR_PTR_1126aed78);
        func_0x000107c5fadc(puVar18,uVar11);
        func_0x000107c6142c(uVar11);
        uVar2 = 0;
        FUN_10202981c(0,0x112d360a8,&PTR_PTR_1126aed70);
        puVar20 = puVar19;
        func_0x000107c5fc48(puVar19,uVar2);
        func_0x000107c61574(puVar19);
        func_0x000107c454bc(puVar16);
        func_0x000107c61170(puVar1);
        func_0x000107c61170(puVar18);
        func_0x000107c61170(puVar20);
        func_0x000107c59bc8(puVar16);
        func_0x000107c61170(puVar1);
        func_0x000107c61170(puVar4);
        func_0x000107c61170(puVar3);
        func_0x000107c61170(puVar5);
        func_0x000107c61170(puVar10);
        func_0x000107c61170(puVar14);
        func_0x000107c61170(puVar15);
        func_0x000107c61170(puVar17);
        return puVar16;
      }
      func_0x000107c61170(puVar4);
      puVar4 = puVar3;
    }
    func_0x000107c61170(puVar4);
  }
  func_0x000107c61170(puVar1);
  return (undefined *)0x0;
}



/* Entry: 1020296d0; end: 10202972f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020296d0(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x000107c420a8(param_1,param_2,1,0);
  lVar1 = *(long *)(param_2 + _DAT_112e515d8);
  func_0x000107c4fa14();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c4fa18();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 102029730; end: 10202978f; -[_TtC28RecentlyActiveEducationAlert38RecentlyActiveEducationAlertEntryPoint init] */

void FUN_102029730(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("RecentlyActiveEducationAlert.RecentlyActiveEducationAlertEntryPoint",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10202975c);
  (*pcVar1)();
}



/* Entry: 102029790; end: 1020297cb; -[_TtC28RecentlyActiveEducationAlert38RecentlyActiveEducationAlertEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102029790(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112e515d0 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e515d8));
  return;
}



/* Entry: 1020297cc; end: 1020297d7;  */

void FUN_1020297cc(void)

{
  return;
}



/* Entry: 1020297d8; end: 1020297f7;  */

void FUN_1020297d8(void)

{
  func_0x000107c61168(&PTR_PTR_112819658);
  return;
}



/* Entry: 1020297f8; end: 10202981b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020297f8(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c420a8(param_1,lVar1,1,0);
  lVar1 = *(long *)(lVar1 + _DAT_112e515d8);
  func_0x000107c4fa14();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c4fa18();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 10202981c; end: 10202989b;  */

void FUN_10202981c(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 10202989c; end: 102029dcf;  */

undefined1  [16] FUN_10202989c(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffd5;
  func_0x000107c5fadc(0xd00000000000002b,0x800000010f05a1d0);
  uVar3 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f05a0e0);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102029968);
  (*pcVar1)();
}



/* Entry: 102029dd0; end: 102029e3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102029dd0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e51610) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102029e3c; end: 102029e9b; -[_TtC55FriendingSuggestionTakeoverScopedFactoryServiceProvider43SCFriendingSuggestionTakeoverScopedServices init] */

void FUN_102029e3c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FriendingSuggestionTakeoverScopedFactoryServiceProvider.SCFriendingSuggestionTakeoverScopedServices"
                      ,99,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102029e68);
  (*pcVar1)();
}



/* Entry: 102029e9c; end: 102029eab; -[_TtC55FriendingSuggestionTakeoverScopedFactoryServiceProvider43SCFriendingSuggestionTakeoverScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102029e9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e51610));
  return;
}



/* Entry: 102029eac; end: 102029f17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102029eac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104bf970;
  func_0x000107c613fc(&UNK_1104bf970,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_10202a234,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102029f18; end: 102029fb3;  */

void FUN_102029f18(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1104bf880;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104bf880;
  return;
}



/* Entry: 102029fb4; end: 102029feb;  */

void FUN_102029fb4(long *param_1)

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



/* Entry: 102029fec; end: 102029ff3;  */

undefined8 FUN_102029fec(void)

{
  return 0x1b;
}



/* Entry: 102029ff4; end: 10202a127;  */

void FUN_102029ff4(undefined8 *param_1)

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
  puVar1 = &UNK_1104bf998;
  func_0x000107c613fc(&UNK_1104bf998,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_10202a20c;
  func_0x00010058fa64(FUN_10202a20c,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10202a128; end: 10202a157;  */

undefined ** FUN_10202a128(void)

{
  return &PTR_DAT_112e777f0;
}



/* Entry: 10202a158; end: 10202a177;  */

void FUN_10202a158(void)

{
  func_0x000107c61168(&PTR_PTR_112819720);
  return;
}



/* Entry: 10202a178; end: 10202a1c7;  */

undefined1  [16] FUN_10202a178(void)

{
  return ZEXT816(0x1104bf8d0);
}



/* Entry: 10202a1c8; end: 10202a20b;  */

void FUN_10202a1c8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e51678 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126a9e10;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112e51678 = puVar1;
  return;
}



/* Entry: 10202a20c; end: 10202a233;  */

void FUN_10202a20c(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 10202a234; end: 10202a237;  */

void FUN_10202a234(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10202a238; end: 10202a3a3;  */

/* WARNING: Possible PIC construction at 0x00010202a324: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010202a334: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010202a344: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010202a354: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010202a364: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010202a374: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010202a368) */
/* WARNING: Removing unreachable block (ram,0x00010202a358) */
/* WARNING: Removing unreachable block (ram,0x00010202a348) */
/* WARNING: Removing unreachable block (ram,0x00010202a338) */
/* WARNING: Removing unreachable block (ram,0x00010202a328) */
/* WARNING: Removing unreachable block (ram,0x00010202a378) */

void FUN_10202a238(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_1104bfa20;
  func_0x000107c613fc(&UNK_1104bfa20,0x78,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_10;
  *(undefined8 *)(puVar1 + 0x58) = param_11;
  *(undefined8 *)(puVar1 + 0x60) = param_12;
  *(undefined8 *)(puVar1 + 0x68) = param_13;
  *(undefined8 *)(puVar1 + 0x70) = param_14;
  uVar2 = 0x112e51688;
  func_0x0001000285a8(0x112e51688,&UNK_10da511f0);
  func_0x000107c613fc();
  uVar3 = 0x10202a924;
  func_0x0001000841fc(0x10202a924,puVar1,uVar2);
  func_0x000100084214(&UNK_10da511b0,0x39,2);
  *param_1 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 10202a3a4; end: 10202a3df;  */

void FUN_10202a3a4(void)

{
  long unaff_x20;
  
  FUN_10202a238(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 10202a3e0; end: 10202a3ef;  */

undefined1  [16] FUN_10202a3e0(void)

{
  return ZEXT816(0x1104bfa00);
}



/* Entry: 10202a3f0; end: 10202a89f;  */

void FUN_10202a3f0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char *pcVar3;
  undefined8 *puVar4;
  char *pcVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 auStack_70 [2];
  
  uVar12 = *param_2;
  func_0x0001000285a8(0x112e51690,&UNK_10da511f8);
  puVar1 = auStack_70;
  auStack_70[0] = uVar12;
  func_0x0001000838ec();
  puVar2 = puVar1;
  func_0x00010202c948();
  pcVar3 = "SCChatCameraScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCChatCameraScopeExposerSubjectServiceProvider",0x2e,2);
  func_0x00010202c9c8();
  func_0x000100082720("SCChatScopeExposerSubjectServiceProvider",0x28,2);
  puVar4 = puVar2;
  FUN_10202c988();
  func_0x000100082720("SCChatCameraScopeExposerObservableServiceProvider",0x31,2);
  pcVar5 = pcVar3;
  FUN_10202ca54();
  func_0x000100082720("SCChatScopeExposerObservableServiceProvider",0x2b,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar6 = FUN_102029fb4;
  func_0x0001000823a8(FUN_102029fb4,0);
  func_0x000100082720("SCFriendingSuggestionTakeoverScopedServicesCleanupRelayServiceProvider",0x46,
                      2);
  puVar7 = puVar2;
  FUN_10202c79c(puVar2,pcVar3);
  func_0x000100082720("FriendingSuggestionTakeoverScopeGraphBridgeServicesServiceProvider",0x42,2);
  func_0x0001000285a8(0x112e51698,&UNK_10da51210);
  puVar8 = &UNK_1104bfa48;
  func_0x000107c613fc(&UNK_1104bfa48,0x90,7);
  *(undefined8 **)(puVar8 + 0x10) = puVar1;
  *(undefined8 *)(puVar8 + 0x18) = param_3;
  *(undefined8 *)(puVar8 + 0x20) = param_4;
  *(undefined8 *)(puVar8 + 0x28) = param_5;
  *(undefined8 *)(puVar8 + 0x30) = param_6;
  *(undefined8 *)(puVar8 + 0x38) = param_7;
  *(undefined8 *)(puVar8 + 0x40) = param_8;
  *(undefined8 *)(puVar8 + 0x48) = param_9;
  *(undefined8 *)(puVar8 + 0x50) = param_10;
  *(undefined8 *)(puVar8 + 0x58) = param_11;
  *(undefined8 *)(puVar8 + 0x60) = param_12;
  *(undefined8 *)(puVar8 + 0x68) = param_13;
  *(undefined8 *)(puVar8 + 0x70) = param_14;
  *(undefined8 *)(puVar8 + 0x78) = param_15;
  *(undefined8 **)(puVar8 + 0x80) = puVar4;
  *(char **)(puVar8 + 0x88) = pcVar5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(puVar4);
  func_0x000107c6157c(pcVar5);
  uVar12 = 0x10202a964;
  func_0x0001000823a8(0x10202a964,puVar8);
  func_0x000100082720("SCFriendingSuggestionTakeoverFeatureEntryPointWrapperServiceProvider",0x44,2)
  ;
  func_0x0001000285a8(0x112e516a0,&UNK_10da51200);
  puVar8 = &UNK_1104bfa70;
  func_0x000107c613fc(&UNK_1104bfa70,0x30,7);
  *(undefined8 **)(puVar8 + 0x10) = puVar1;
  *(undefined8 **)(puVar8 + 0x18) = puVar7;
  *(undefined8 *)(puVar8 + 0x20) = uVar12;
  *(code **)(puVar8 + 0x28) = pcVar6;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar7);
  func_0x000107c6157c(uVar12);
  func_0x000107c6157c(pcVar6);
  pcVar9 = FUN_10202a9a8;
  func_0x0001000823a8(FUN_10202a9a8,puVar8);
  func_0x000100082720("SCFriendingSuggestionTakeoverScopeInitializationPluginRegistryServiceProvider"
                      ,0x4d,2);
  func_0x0001000285a8(0x112e51618,&UNK_10da50f30);
  func_0x000107c6157c(pcVar9);
  uVar10 = 0x10202a9b4;
  func_0x0001000823a8(0x10202a9b4,pcVar9);
  func_0x000100082720("SCFriendingSuggestionTakeoverScopeInitializationServiceProvider",0x3f,2);
  func_0x0001000285a8(0x112e51608,&UNK_10da50f20);
  func_0x000107c6157c(uVar10);
  uVar11 = 0x10202a9bc;
  func_0x0001000823a8(0x10202a9bc,uVar10);
  func_0x000100082720("SCFriendingSuggestionTakeoverScopedServicesServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar8 = &UNK_1104bfa98;
  func_0x000107c613fc(&UNK_1104bfa98,0x20,7);
  *(undefined8 *)(puVar8 + 0x10) = uVar11;
  *(code **)(puVar8 + 0x18) = pcVar6;
  func_0x000107c6157c(pcVar6);
  uVar11 = 0x10202a9c4;
  func_0x0001000823a8(0x10202a9c4,puVar8);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(uVar12);
  func_0x000107c61574(pcVar9);
  func_0x000107c61574(uVar10);
  func_0x000100082720("SCFriendingSuggestionTakeoverScopeEntryPointProvider",0x34,2);
  *param_1 = uVar11;
  return;
}



/* Entry: 10202a8a0; end: 10202a9a7;  */

void FUN_10202a8a0(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10202a9a8; end: 10202a9cb;  */

void FUN_10202a9a8(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_10202bec8(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("SCFriendingSuggestionTakeoverScopeInitializationPluginRegistryServiceProvider"
                      ,0x4d,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10202a9cc; end: 10202bc57;  */

void FUN_10202a9cc(long *param_1,long param_2)

{
  undefined8 uVar1;
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
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
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
  FUN_10202be18();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  *(undefined8 *)(param_2 + 0x40) = uStack_90;
  *(undefined8 *)(param_2 + 0x48) = uStack_98;
  *(undefined8 *)(param_2 + 0x50) = uStack_a0;
  *(undefined8 *)(param_2 + 0x58) = uStack_a8;
  *(undefined8 *)(param_2 + 0x60) = uStack_b0;
  *(undefined8 *)(param_2 + 0x68) = uStack_b8;
  *(undefined8 *)(param_2 + 0x70) = uStack_c0;
  *(undefined8 *)(param_2 + 0x78) = uStack_c8;
  *(undefined8 *)(param_2 + 0x80) = uStack_d0;
  *(undefined8 *)(param_2 + 0x88) = uStack_d8;
  func_0x0001000285a8(0x112e4ccd8,&UNK_10da46ce0);
  func_0x000107c610f8();
  uVar1 = uStack_78;
  func_0x000107c61174();
  uVar2 = uStack_80;
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
  func_0x000107c61174(uStack_d0);
  uVar13 = uStack_d8;
  func_0x000107c61174(uStack_d8);
  uVar16 = uStack_e0;
  func_0x000107c6157c(uStack_e0);
  func_0x00010017da58();
  puVar14 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar16);
  *(undefined **)(param_2 + 0x18) = puVar14;
  func_0x0001000285a8(0x112e4d1b8,&UNK_10da477e0);
  func_0x000107c610f8();
  uVar16 = uStack_e8;
  func_0x000107c6157c(uStack_e8);
  func_0x00010017da58();
  puVar14 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar16);
  *(undefined **)(param_2 + 0x20) = puVar14;
  puVar14 = PTR_PTR_1126a9e18;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar14;
  func_0x000107c61174();
  uVar15 = auStack_70[0];
  func_0x000107c61174();
  uVar16 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f05a470);
  func_0x000107c5a49c(puVar14);
  func_0x000107c61170(puVar14);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174(puVar14);
  uVar16 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar14);
  func_0x000107c61170(puVar14);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef18660);
  func_0x000107c5a49c(puVar14);
  func_0x000107c61170(puVar14);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef12650);
  func_0x000107c5a49c(puVar14);
  func_0x000107c61170(puVar14);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar14);
  func_0x000107c61170(puVar14);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(puVar14);
  func_0x000107c61170(puVar14);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef2d400);
  func_0x000107c5a49c(puVar14);
  func_0x000107c61170(puVar14);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efc45c0);
  func_0x000107c5a49c(puVar14);
  func_0x000107c61170(puVar14);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(puVar14);
  func_0x000107c61170(puVar14);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef2e2d0);
  func_0x000107c5a49c(puVar14);
  func_0x000107c61170(puVar14);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(puVar14);
  func_0x000107c61170(puVar14);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar16);
  uVar18 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010effecb0);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar16);
  func_0x000107c61174(uVar12);
  func_0x000107c61174(uVar18);
  uVar16 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef27e00);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar16);
  func_0x000107c61174(uVar13);
  func_0x000107c61174(uVar18);
  uVar16 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef1a6f0);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar16);
  uVar16 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174(uVar18);
  func_0x000107c61174(uVar16);
  uVar17 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef28140);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar17);
  uVar16 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1a710);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar17);
  func_0x000107c3e740(uVar18);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar1);
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
  func_0x000107c61574(uStack_e0);
  func_0x000107c61574(uStack_e8);
  *param_1 = param_2;
  return;
}



/* Entry: 10202bc58; end: 10202bd0b;  */

void FUN_10202bc58(void)

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
  return;
}



/* Entry: 10202bd0c; end: 10202bd13;  */

undefined8 FUN_10202bd0c(void)

{
  return 0x1b;
}



/* Entry: 10202bd14; end: 10202bd97;  */

void FUN_10202bd14(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x10202be58,param_2,FUN_10202be5c,param_2,FUN_10202be84,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10202bd98; end: 10202bde7;  */

undefined8 FUN_10202bd98(void)

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



/* Entry: 10202bde8; end: 10202be17;  */

undefined ** FUN_10202bde8(void)

{
  return &PTR_DAT_112e777f0;
}



/* Entry: 10202be18; end: 10202be37;  */

void FUN_10202be18(void)

{
  func_0x000107c61168(&PTR_PTR_112e51710);
  return;
}



/* Entry: 10202be38; end: 10202be5b;  */

undefined1  [16] FUN_10202be38(void)

{
  return ZEXT816(0x1104bfaf0);
}



/* Entry: 10202be5c; end: 10202be83;  */

void FUN_10202be5c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10202be84; end: 10202be8b;  */

undefined8 FUN_10202be84(void)

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



/* Entry: 10202be8c; end: 10202bec7;  */

void FUN_10202be8c(undefined8 *param_1,undefined8 param_2)

{
  FUN_10202bec8();
  func_0x0001000a7f38("SCFriendingSuggestionTakeoverScopeInitializationPluginRegistryServiceProvider"
                      ,0x4d,2);
  *param_1 = param_2;
  return;
}



/* Entry: 10202bec8; end: 10202c0b3;  */

void FUN_10202bec8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_1104ec110;
  ppuVar4 = &PTR_DAT_112e777f0;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_1104bfb40;
  func_0x000107c613fc(&UNK_1104bfb40,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112e517e8;
  func_0x0001000285a8(0x112e517e8,&UNK_10da51408);
  func_0x0001000a6ee8(&UNK_1104bfdc8,
                      "FriendingSuggestionTakeoverScopeGraphBridgeScopeInitializationPluginKey",0x47
                      ,2,FUN_10202c0b4,puVar2,uVar3,&UNK_1104bfdc8,&PTR_DAT_112e51888);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1104bfaf0,
                      "SCFriendingSuggestionTakeoverFeatureEntryPointWrapperScopeInitializationPluginKey"
                      ,0x51,2,FUN_10202c168,param_3,uVar3,&UNK_1104bfaf0,&PTR_DAT_112e516a8);
  func_0x000107c61574(param_3);
  puVar2 = &UNK_1104bfb68;
  func_0x000107c613fc(&UNK_1104bfb68,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1104bf910,
                      "SCFriendingSuggestionTakeoverScopedServicesScopeInitializationPluginKey",0x47
                      ,2,FUN_10202c218,puVar2,uVar3,&UNK_1104bf910,&PTR_DAT_112e51620);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112e517f0;
  func_0x0001000285a8(0x112e517f0,&UNK_10da51410);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 10202c0b4; end: 10202c0f3;  */

void FUN_10202c0b4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x00010202cac0(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("FriendingSuggestionTakeoverScopeGraphBridgeScopeInitializationPluginProvider"
                      ,0x4c,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10202c0f4; end: 10202c167;  */

void FUN_10202c0f4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x10202c254;
  func_0x0001000823a8(0x10202c254,param_3);
  func_0x000100082720("SCFriendingSuggestionTakeoverFeatureEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x56,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10202c168; end: 10202c16f;  */

void FUN_10202c168(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x10202c254;
  func_0x0001000823a8();
  func_0x000100082720("SCFriendingSuggestionTakeoverFeatureEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x56,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10202c170; end: 10202c217;  */

void FUN_10202c170(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104bfb90;
  func_0x000107c613fc(&UNK_1104bfb90,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_10202c24c;
  func_0x0001000823a8(FUN_10202c24c,puVar1);
  func_0x000100082720("SCFriendingSuggestionTakeoverScopedServicesScopeInitializationPluginProvider"
                      ,0x4c,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 10202c218; end: 10202c21f;  */

void FUN_10202c218(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1104bfb90;
  func_0x000107c613fc(&UNK_1104bfb90,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_10202c24c;
  func_0x0001000823a8(FUN_10202c24c,puVar3);
  func_0x000100082720("SCFriendingSuggestionTakeoverScopedServicesScopeInitializationPluginProvider"
                      ,0x4c,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 10202c220; end: 10202c24b;  */

void FUN_10202c220(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10202c24c; end: 10202c25b;  */

void FUN_10202c24c(undefined8 *param_1)

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
  puVar1 = &UNK_1104bf998;
  func_0x000107c613fc(&UNK_1104bf998,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_10202a20c;
  func_0x00010058fa64(FUN_10202a20c,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10202c25c; end: 10202c373;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10202c25c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_70 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar4 = auStack_70;
  func_0x000107c610f8();
  lVar3 = unaff_x20;
  FUN_10202c6ac();
  if (lVar3 != 0) {
    func_0x000100083b20(&uStack_58);
    uVar1 = uStack_58;
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_3;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112e517f8) = lVar3;
    *(undefined8 *)(unaff_x20 + _DAT_112e51800) = param_4;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10202c374);
  (*pcVar2)();
}



/* Entry: 10202c374; end: 10202c3d3; -[_TtC43FriendingSuggestionTakeoverScopeGraphBridge58FriendingSuggestionTakeoverScopeGraphBridgeSaberEntryPoint init] */

void FUN_10202c374(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FriendingSuggestionTakeoverScopeGraphBridge.FriendingSuggestionTakeoverScopeGraphBridgeSaberEntryPoint"
                      ,0x66,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10202c3a0);
  (*pcVar1)();
}



/* Entry: 10202c3d4; end: 10202c40b; -[_TtC43FriendingSuggestionTakeoverScopeGraphBridge58FriendingSuggestionTakeoverScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010202c3f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010202c3f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10202c3d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e517f8));
  return;
}



/* Entry: 10202c40c; end: 10202c433;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10202c40c(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e51800),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e517f8));
  return;
}



/* Entry: 10202c434; end: 10202c453;  */

void FUN_10202c434(void)

{
  func_0x000107c61168(&PTR_PTR_1128197e0);
  return;
}



/* Entry: 10202c454; end: 10202c4db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10202c454(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e51830) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e51838);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10202c4dc);
  (*pcVar2)();
}



/* Entry: 10202c4dc; end: 10202c5c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10202c4dc(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e51830);
  *(undefined **)(unaff_x20 + _DAT_112e51830) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e51838);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e51838))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1104bfc80;
  func_0x000107c613fc(&UNK_1104bfc80,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x10202c5c8,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 10202c5c4; end: 10202c5cf;  */

void FUN_10202c5c4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10202c5d0; end: 10202c62f; -[_TtC43FriendingSuggestionTakeoverScopeGraphBridge58SCFriendingSuggestionTakeoverScopedServicesSaberEntryPoint init] */

void FUN_10202c5d0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FriendingSuggestionTakeoverScopeGraphBridge.SCFriendingSuggestionTakeoverScopedServicesSaberEntryPoint"
                      ,0x66,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10202c5fc);
  (*pcVar1)();
}



/* Entry: 10202c630; end: 10202c667; -[_TtC43FriendingSuggestionTakeoverScopeGraphBridge58SCFriendingSuggestionTakeoverScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10202c630(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e51838));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e51830));
  return;
}



/* Entry: 10202c668; end: 10202c66b;  */

void FUN_10202c668(void)

{
  return;
}



/* Entry: 10202c66c; end: 10202c68b;  */

void FUN_10202c66c(void)

{
  FUN_10202c4dc();
  return;
}



/* Entry: 10202c68c; end: 10202c6ab;  */

void FUN_10202c68c(void)

{
  func_0x000107c61168(&PTR_PTR_1128198a8);
  return;
}



/* Entry: 10202c6ac; end: 10202c77b;  */

undefined8 FUN_10202c6ac(void)

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
  
  func_0x000107c61428(0x112e51868,&uStack_40,0x20,0);
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
    FUN_10202c77c();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 10202c77c; end: 10202c79b;  */

void FUN_10202c77c(void)

{
  func_0x000107c61168(&PTR_PTR_112819970);
  return;
}



/* Entry: 10202c79c; end: 10202c7bf;  */

void FUN_10202c79c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104bfcc8;
  func_0x0001000285a8(0x112e51870,&UNK_10da514f8);
  func_0x000107c613fc(&UNK_1104bfcc8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_10202c844,puVar1);
  return;
}



/* Entry: 10202c7c0; end: 10202c843;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10202c7c0(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_10202c77c();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112e51878) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112e51880) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 10202c844; end: 10202c84b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10202c844(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar6 = &lStack_40;
  lVar4 = lVar1;
  FUN_10202c77c();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(long *)(lVar5 + _DAT_112e51878) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_112e51880) = uVar2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c61154(&lStack_40,puVar3);
  *param_1 = plVar6;
  return;
}



/* Entry: 10202c84c; end: 10202c8af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10202c84c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e51878) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e51880) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10202c8b0; end: 10202c90f; -[_TtC43FriendingSuggestionTakeoverScopeGraphBridge51FriendingSuggestionTakeoverScopeGraphBridgeServices init] */

void FUN_10202c8b0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FriendingSuggestionTakeoverScopeGraphBridge.FriendingSuggestionTakeoverScopeGraphBridgeServices"
                      ,0x5f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10202c8dc);
  (*pcVar1)();
}



/* Entry: 10202c910; end: 10202c987; -[_TtC43FriendingSuggestionTakeoverScopeGraphBridge51FriendingSuggestionTakeoverScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010202c92c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010202c930) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10202c910(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e51878));
  return;
}



/* Entry: 10202c988; end: 10202c993;  */

void FUN_10202c988(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10202c994,param_1);
  return;
}



/* Entry: 10202c994; end: 10202ca53;  */

void FUN_10202c994(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 10202ca54; end: 10202ca5f;  */

void FUN_10202ca54(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x10202cd84,param_1);
  return;
}



/* Entry: 10202ca60; end: 10202cab7;  */

void FUN_10202ca60(undefined8 param_1,undefined8 param_2)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_2,param_1);
  return;
}



/* Entry: 10202cab8; end: 10202cae3;  */

undefined8 FUN_10202cab8(void)

{
  return 0x1b;
}



/* Entry: 10202cae4; end: 10202cb63;  */

void FUN_10202cae4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c613fc(param_5,0x20,7);
  *(undefined8 *)(param_5 + 0x10) = param_1;
  *(undefined8 *)(param_5 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(param_6,param_5);
  return;
}



/* Entry: 10202cb64; end: 10202cc5b;  */

void FUN_10202cb64(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x000100083b20(auStack_50);
  func_0x000100083b20(&uStack_38);
  func_0x000107c61428(0x112e51868,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e51868,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1104bfe08;
  func_0x000107c613fc(&UNK_1104bfe08,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x10202cd7c;
  func_0x00010058fa64(0x10202cd7c,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10202cc5c; end: 10202cc87;  */

void FUN_10202cc5c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10202cc88; end: 10202cc8f;  */

void FUN_10202cc88(undefined8 *param_1)

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
  func_0x000107c61428(0x112e51868,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e51868,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1104bfe08;
  func_0x000107c613fc(&UNK_1104bfe08,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x10202cd7c;
  func_0x00010058fa64(0x10202cd7c,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10202cc90; end: 10202cceb;  */

void FUN_10202cc90(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e51868,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e51868,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 10202ccec; end: 10202cd8f;  */

undefined ** FUN_10202ccec(void)

{
  return &PTR_DAT_112e777f0;
}



/* Entry: 10202cd90; end: 10202cdd7; -[SCFriendingSuggestionTakeoverScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10202cd90(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e518d8;
  func_0x000107c61428(param_1 + _DAT_112e518d8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10202cdd8; end: 10202ce2f; -[SCFriendingSuggestionTakeoverScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10202cdd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e518d8;
  func_0x000107c61428(param_1 + _DAT_112e518d8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10202ce30; end: 10202ce77; -[SCFriendingSuggestionTakeoverScopeGraphBridgeSaberEntryPoint sCChatCameraScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10202ce30(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e518e0;
  func_0x000107c61428(param_1 + _DAT_112e518e0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10202ce78; end: 10202ce83; -[SCFriendingSuggestionTakeoverScopeGraphBridgeSaberEntryPoint setSCChatCameraScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10202ce78(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e518e0;
  func_0x000107c61428(param_1 + _DAT_112e518e0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10202ce84; end: 10202cecb; -[SCFriendingSuggestionTakeoverScopeGraphBridgeSaberEntryPoint sCChatScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10202ce84(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e518e8;
  func_0x000107c61428(param_1 + _DAT_112e518e8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10202cecc; end: 10202ced7; -[SCFriendingSuggestionTakeoverScopeGraphBridgeSaberEntryPoint setSCChatScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10202cecc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e518e8;
  func_0x000107c61428(param_1 + _DAT_112e518e8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10202ced8; end: 10202cf1f; -[SCFriendingSuggestionTakeoverScopeGraphBridgeSaberEntryPoint friendingSuggestionTakeoverScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10202ced8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e518f0;
  func_0x000107c61428(param_1 + _DAT_112e518f0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10202cf20; end: 10202cf2b; -[SCFriendingSuggestionTakeoverScopeGraphBridgeSaberEntryPoint setFriendingSuggestionTakeoverScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10202cf20(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e518f0;
  func_0x000107c61428(param_1 + _DAT_112e518f0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10202cf2c; end: 10202cf8b;  */

void FUN_10202cf2c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_4;
  func_0x000107c61428(param_1 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 10202cf8c; end: 10202d1c3;  */

/* WARNING: Possible PIC construction at 0x00010202d0f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010202d108: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010202d124: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010202d134: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010202d150: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010202d198: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010202d138) */
/* WARNING: Removing unreachable block (ram,0x00010202d128) */
/* WARNING: Removing unreachable block (ram,0x00010202d10c) */
/* WARNING: Removing unreachable block (ram,0x00010202d0fc) */
/* WARNING: Removing unreachable block (ram,0x00010202d19c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10202cf8c(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 == 0) {
    return;
  }
  lVar4 = unaff_x20;
  func_0x000107c50b6c();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = unaff_x20;
    func_0x000107c50ba4();
    func_0x000107c61180();
    if (lVar5 == 0) {
      func_0x000107c61170(lVar3);
      lVar3 = lVar4;
    }
    else {
      func_0x000107c43a3c();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar3);
        lVar3 = lVar4;
      }
      else {
        lVar6 = 0;
        FUN_10202c434();
        lVar4 = lVar6;
        func_0x000107c610f8();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        lVar5 = lVar3;
        FUN_10202c6ac();
        if (lVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10202d1c4);
          (*pcVar2)();
        }
        func_0x000100083b20(&uStack_68);
        uVar1 = uStack_68;
        func_0x000100087c34(auStack_70);
        func_0x000107c61574(uVar1);
        func_0x000100083b20(&uStack_68);
        func_0x000100087c34(auStack_70);
        func_0x000107c61574(uStack_68);
        *(long *)(lVar4 + _DAT_112e517f8) = lVar5;
        *(long *)(lVar4 + _DAT_112e51800) = unaff_x20;
        lStack_80 = lVar4;
        lStack_78 = lVar6;
        func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 10202d1c4; end: 10202d1eb; -[SCFriendingSuggestionTakeoverScopeGraphBridgeSaberEntryPoint begin] */

void FUN_10202d1c4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10202cf8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10202d1ec; end: 10202d22f; -[SCFriendingSuggestionTakeoverScopeGraphBridgeSaberEntryPoint end] */

void FUN_10202d1ec(undefined8 param_1)

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



/* Entry: 10202d230; end: 10202d49f;  */

void FUN_10202d230(long param_1,long param_2,long param_3)

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
    uVar2 = 0;
    if (((param_2 == -0x2fffffffffffffe8) && (param_3 == -0x7ffffffef0fad6c0)) ||
       (func_0x000107c605b8(0xd000000000000018,0x800000010f052940,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c58114();
    }
    else {
      if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef0fad6a0)) {
        uVar2 = 0;
        func_0x000107c605b8(0xd000000000000012,0x800000010f052960,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          uVar2 = 0;
          if (((param_2 != -0x2fffffffffffffc6) || (param_3 != -0x7ffffffef0fa5830)) &&
             (func_0x000107c605b8(0xd00000000000003a,0x800000010f05a7d0,param_2,param_3,0),
             (uVar2 & 1) == 0)) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "FriendingSuggestionTakeoverScopeGraphBridge/SCFriendingSuggestionTakeoverScopeGraphBridgeSaberEntryPoint.swift"
                                ,0x6e,2,0x39,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10202d4a0);
            (*pcVar1)();
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c54c50();
          goto LAB_10202d2bc;
        }
      }
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c5814c();
    }
  }
LAB_10202d2bc:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}


