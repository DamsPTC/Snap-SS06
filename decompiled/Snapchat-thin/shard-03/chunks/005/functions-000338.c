/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10296d360; end: 10296d3bf;  */

void FUN_10296d360(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_4;
  func_0x000107c61428(param_1 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  func_0x000107c615f0(param_3);
  func_0x000107c615e8(uVar1);
  return;
}



/* Entry: 10296d3c0; end: 10296d4ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10296d3c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  
  func_0x000107c614f0();
  lVar1 = _DAT_112ecffa0;
  puVar2 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112ecffa8) = 0;
  func_0x000107c61614(unaff_x20 + _DAT_112ecffb0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112ecffb8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ecffc0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ecffc8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ecffd0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ecffd8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ecffe0) = param_4;
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10296d4ac; end: 10296d527; -[SCPlusMerlinFriendProfileSectionComposerContextProvider initWithValdiRuntimeProvider:performerProvider:merlinSnapchatter:featureSettingsService:] */

void FUN_10296d4ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  FUN_10296d3c0(param_3,param_4,param_5,param_6);
  return;
}



/* Entry: 10296d528; end: 10296d7db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10296d528(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_48 [24];
  
  puVar1 = PTR_PTR_1126afdb8;
  func_0x000107c610f8(PTR_PTR_1126afdb8);
  func_0x000107c45510();
  puVar2 = PTR_PTR_1126b02a8;
  func_0x000107c610f8(PTR_PTR_1126b02a8);
  func_0x000107c61174(puVar1);
  uVar3 = 0xd000000000000030;
  func_0x000107c5fadc(0xd000000000000030,0x800000010f0cfed0);
  func_0x000107c46d50(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  lVar4 = _DAT_112ecffc0;
  func_0x000107c61428(unaff_x20 + _DAT_112ecffc0,auStack_48,0,0);
  lVar4 = *(long *)(unaff_x20 + lVar4);
  if (lVar4 != 0) {
    func_0x000107c615f0(lVar4);
    func_0x000107c445ac();
    func_0x000107c615e8(lVar4);
  }
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 10296d7dc; end: 10296d83b; -[SCPlusMerlinFriendProfileSectionComposerContextProvider init] */

void FUN_10296d7dc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCPlusMerlinFriendProfileSection.SCPlusMerlinFriendProfileSectionComposerContextProvider"
                      ,0x58,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10296d808);
  (*pcVar1)();
}



/* Entry: 10296d83c; end: 10296d967; -[SCPlusMerlinFriendProfileSectionComposerContextProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010296d8a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010296d8c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010296d8ac) */
/* WARNING: Removing unreachable block (ram,0x00010296d8cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10296d83c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ecffc8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ecffd0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ecffd8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ecffe0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ecffa0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ecffa8));
  return;
}



/* Entry: 10296d968; end: 10296d98f; -[SCPlusMerlinFriendProfileSectionComposerContextProvider setUp] */

void FUN_10296d968(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x00010296d8e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10296d990; end: 10296d9db; -[SCPlusMerlinFriendProfileSectionComposerContextProvider tearDown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10296d990(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ecffb8;
  func_0x000107c61428(param_1 + _DAT_112ecffb8,auStack_38,0,0);
  if (*(long *)(param_1 + lVar1) != 0) {
    func_0x000107c3e208();
  }
  return;
}



/* Entry: 10296d9dc; end: 10296dad3;  */

void FUN_10296d9dc(long param_1)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  pcVar1 = "valdiContext()";
  func_0x0001000c10c0("valdiContext()");
  func_0x000107c61180();
  puVar2 = &UNK_110573c50;
  func_0x000107c613fc(&UNK_110573c50,0x18,7);
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618(param_1);
  func_0x000107c61614(puVar2 + 0x10,param_1);
  func_0x000107c61170(param_1);
  uStack_58 = 0x10296e134;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x42000000;
  puStack_68 = &UNK_1000f6b44;
  puStack_60 = &UNK_110573d30;
  ppuVar3 = &puStack_78;
  puStack_50 = puVar2;
  func_0x000107c60bc4(ppuVar3);
  func_0x000107c61574(puStack_50);
  func_0x000107c4e590(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 10296dad4; end: 10296db27;  */

void FUN_10296dad4(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_10296d528();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 10296db28; end: 10296dc47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10296db28(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  ppuVar2 = &puStack_90;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  lVar3 = _DAT_112ecffb8;
  if (param_2 != 0) {
    func_0x000107c61428(param_2 + _DAT_112ecffb8,auStack_60,0,0);
    lVar3 = *(long *)(param_2 + lVar3);
    if (lVar3 == 0) {
      func_0x000107c61170(param_2);
    }
    else {
      puVar1 = &UNK_110573c50;
      func_0x000107c613fc(&UNK_110573c50,0x18,7);
      func_0x000107c61614(puVar1 + 0x10,param_2);
      pcStack_70 = FUN_10296e12c;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1000f6b44;
      puStack_78 = &UNK_110573d08;
      puStack_68 = puVar1;
      func_0x000107c60bc4(&puStack_90);
      puVar1 = puStack_68;
      func_0x000107c615f0(lVar3);
      func_0x000107c61574(puVar1);
      func_0x000107c4e524(lVar3);
      func_0x000107c61170(param_2);
      func_0x000107c60bd0(ppuVar2);
      func_0x000107c615e8(lVar3);
    }
  }
  return;
}



/* Entry: 10296dc48; end: 10296dc7f; -[SCPlusMerlinFriendProfileSectionComposerContextProvider valdiContext] */

void FUN_10296dc48(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10296dc80();
  func_0x000107c615f0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10296dc80; end: 10296e08f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10296dc80(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  long unaff_x20;
  ulong uVar13;
  long lVar14;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  
  lVar3 = _DAT_112ecffb8;
  func_0x000107c61428(unaff_x20 + _DAT_112ecffb8,auStack_88,0,0);
  lVar3 = *(long *)(unaff_x20 + lVar3);
  if (lVar3 != 0) {
    func_0x000107c3e208();
  }
  func_0x00010296d6b4();
  lVar2 = _DAT_112ecffa8;
  uVar13 = *(ulong *)(unaff_x20 + _DAT_112ecffa8);
  if (uVar13 != 0) {
    uVar4 = uVar13;
    func_0x000107c615f0();
    func_0x000107c41854();
    if ((uVar4 & 1) == 0) {
      func_0x000107c5a588(uVar13);
      func_0x000107c615e8(uVar13);
      goto LAB_10296e060;
    }
    func_0x000107c615e8(uVar13);
  }
  puVar5 = &UNK_110573c50;
  func_0x000107c613fc(&UNK_110573c50,0x18,7);
  func_0x000107c61614(puVar5 + 0x10);
  puVar6 = PTR_PTR_1126aba98;
  func_0x000107c610f8(PTR_PTR_1126aba98);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_98 = FUN_10296e0b0;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0x42000000;
  puStack_a8 = &UNK_1000f6b44;
  puStack_a0 = &UNK_110573c68;
  ppuVar7 = &puStack_b8;
  puStack_90 = puVar5;
  func_0x000107c60bc4(ppuVar7);
  func_0x000107c6157c(puVar5);
  func_0x000107c48038(puVar6);
  func_0x000107c60bd0(ppuVar7);
  puVar12 = puStack_90;
  func_0x000107c61574(puVar5);
  func_0x000107c61574(puVar12);
  lVar8 = *(long *)(unaff_x20 + _DAT_112ecffc8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar8 == 0) {
LAB_10296de34:
    lVar8 = 0;
  }
  else {
    lVar14 = lVar8;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar8);
    if (lVar14 == 0) goto LAB_10296de34;
    FUN_10296e0ec(0,0x112ed0048,&PTR_PTR_1126abaa0);
    func_0x000107c614e8();
    lVar8 = lVar14;
    func_0x000107c40994();
    func_0x000107c61180();
    func_0x000107c615e8(lVar14);
  }
  uVar9 = *(undefined8 *)(unaff_x20 + lVar2);
  *(long *)(unaff_x20 + lVar2) = lVar8;
  func_0x000107c615e8(uVar9);
  lVar8 = *(long *)(unaff_x20 + _DAT_112ecffe0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar8 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c61538();
    lVar10 = lVar14;
    func_0x000100403a6c();
    func_0x000100bcb1dc(lVar14 + 0x20);
    lVar11 = lVar10;
    func_0x000107c5fe08(lVar10,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(lVar10);
    uVar9 = 0;
    FUN_10296e0ec(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
    func_0x000107c5ffdc();
    puVar5 = &UNK_110573c50;
    func_0x000107c613fc(&UNK_110573c50,0x18,7);
    func_0x000107c61614(puVar5 + 0x10);
    pcStack_98 = (code *)0x10296e0e4;
    puStack_b8 = puVar1;
    uStack_b0 = 0x42000000;
    puStack_a8 = &UNK_1019e993c;
    puStack_a0 = &UNK_110573ce0;
    ppuVar7 = &puStack_b8;
    puStack_90 = puVar5;
    func_0x000107c60bc4(ppuVar7);
    func_0x000107c61574(puStack_90);
    lVar14 = lVar8;
    func_0x000107c4da68();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61170(lVar8);
    func_0x000107c61170(lVar11);
    func_0x000107c61170(uVar9);
  }
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112ecffa0);
  puVar12 = PTR_PTR_1126b0418;
  func_0x000107c61168(PTR_PTR_1126b0418);
  puVar5 = &UNK_110573ca0;
  func_0x000107c613fc(&UNK_110573ca0,0x18,7);
  *(long *)(puVar5 + 0x10) = lVar14;
  pcStack_98 = (code *)0x10296e0d4;
  puStack_b8 = puVar1;
  uStack_b0 = 0x42000000;
  puStack_a8 = &UNK_1000f6b44;
  puStack_a0 = &UNK_110573cb8;
  ppuVar7 = &puStack_b8;
  puStack_90 = puVar5;
  func_0x000107c60bc4(ppuVar7);
  puVar5 = puStack_90;
  func_0x000107c615f0(lVar14);
  func_0x000107c61574(puVar5);
  func_0x000107c408f0(puVar12);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c3d65c(uVar9);
  func_0x000107c61170(puVar6);
  func_0x000107c615e8(lVar14);
  func_0x000107c61170(puVar12);
LAB_10296e060:
  func_0x000107c61170(lVar3);
  return *(undefined8 *)(unaff_x20 + lVar2);
}



/* Entry: 10296e090; end: 10296e0af;  */

void FUN_10296e090(void)

{
  func_0x000107c61168(&PTR_PTR_112873f88);
  return;
}



/* Entry: 10296e0b0; end: 10296e0eb;  */

void FUN_10296e0b0(void)

{
  char *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  pcVar1 = "valdiContext()";
  func_0x0001000c10c0("valdiContext()");
  func_0x000107c61180();
  puVar2 = &UNK_110573c50;
  func_0x000107c613fc(&UNK_110573c50,0x18,7);
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61618(lVar3);
  func_0x000107c61614(puVar2 + 0x10,lVar3);
  func_0x000107c61170(lVar3);
  uStack_58 = 0x10296e134;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x42000000;
  puStack_68 = &UNK_1000f6b44;
  puStack_60 = &UNK_110573d30;
  ppuVar4 = &puStack_78;
  puStack_50 = puVar2;
  func_0x000107c60bc4(ppuVar4);
  func_0x000107c61574(puStack_50);
  func_0x000107c4e590(pcVar1);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 10296e0ec; end: 10296e12b;  */

void FUN_10296e0ec(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10296e12c; end: 10296e15b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10296e12c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + _DAT_112ecffa8);
    if (lVar3 != 0) {
      lVar2 = lVar3;
      func_0x000107c615f0(lVar3);
      func_0x00010296d6b4();
      func_0x000107c5a588(lVar3);
      func_0x000107c615e8(lVar3);
      func_0x000107c61170(lVar2);
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 10296e15c; end: 10296e1a7;  */

void FUN_10296e15c(undefined8 param_1)

{
  func_0x0001000285a8(0x112ecfc30,&UNK_10daf6370);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10296e268,param_1);
  return;
}



/* Entry: 10296e1a8; end: 10296e267;  */

void FUN_10296e1a8(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  FUN_10296c8dc();
  func_0x000107c61574(lStack_38);
  plVar2 = (long *)0x0;
  if (param_2 != 0) {
    lVar1 = 0x112ecfd08;
    func_0x0001000285a8(0x112ecfd08,&UNK_10daf65f0);
    FUN_10296aaf0();
    func_0x000107c613fc();
    *(undefined8 *)(lVar1 + 0x18) = 3;
    *(undefined8 *)(lVar1 + 0x10) = 1;
    *(long *)(lVar1 + 0x20) = param_2;
    plVar2 = &lStack_38;
    lStack_38 = lVar1;
    func_0x000100854cb0();
    func_0x000107c61574(lVar1);
  }
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10296e268; end: 10296e27f;  */

void FUN_10296e268(long *param_1)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  FUN_10296c8dc();
  func_0x000107c61574(lStack_38);
  plVar2 = (long *)0x0;
  if (unaff_x20 != 0) {
    lVar1 = 0x112ecfd08;
    func_0x0001000285a8(0x112ecfd08,&UNK_10daf65f0);
    FUN_10296aaf0();
    func_0x000107c613fc();
    *(undefined8 *)(lVar1 + 0x18) = 3;
    *(undefined8 *)(lVar1 + 0x10) = 1;
    *(long *)(lVar1 + 0x20) = unaff_x20;
    plVar2 = &lStack_38;
    lStack_38 = lVar1;
    func_0x000100854cb0();
    func_0x000107c61574(lVar1);
  }
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10296e280; end: 10296e557;  */

void FUN_10296e280(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ed0050,&UNK_10daf67b0);
  puVar1 = &UNK_110573e10;
  func_0x000107c613fc(&UNK_110573e10,0x90,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  *(undefined8 *)(puVar1 + 0x80) = param_15;
  *(undefined8 *)(puVar1 + 0x88) = param_16;
  func_0x000107c6157c();
  func_0x000107c6157c(param_2);
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
  func_0x000107c6157c(param_16);
  func_0x0001000823a8(FUN_10296e558,puVar1);
  return;
}



/* Entry: 10296e558; end: 10296e59b;  */

void FUN_10296e558(void)

{
  long unaff_x20;
  
  func_0x00010296e3f4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                      *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88));
  return;
}



/* Entry: 10296e59c; end: 10296e663;  */

void FUN_10296e59c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x50) = param_1;
  *(undefined8 *)(unaff_x20 + 0x58) = param_5;
  *(undefined8 *)(unaff_x20 + 0x10) = param_8;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_9;
  *(undefined8 *)(unaff_x20 + 0x30) = param_10;
  *(undefined8 *)(unaff_x20 + 0x38) = param_7;
  *(undefined8 *)(unaff_x20 + 0x80) = param_12;
  *(undefined8 *)(unaff_x20 + 0x88) = param_11;
  *(undefined8 *)(unaff_x20 + 0x70) = param_13;
  *(undefined8 *)(unaff_x20 + 0x78) = param_6;
  *(undefined8 *)(unaff_x20 + 0x60) = param_15;
  *(undefined8 *)(unaff_x20 + 0x68) = param_3;
  *(undefined8 *)(unaff_x20 + 0x40) = param_14;
  *(undefined8 *)(unaff_x20 + 0x48) = param_16;
  return;
}



/* Entry: 10296e664; end: 10296f0eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10296e664(void)

{
  undefined8 *puVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  long unaff_x20;
  undefined8 uVar32;
  long lVar33;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  
  lVar33 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(ulong *)(lVar33 + _DAT_112ed0ac8);
  func_0x000107c61174();
  uVar5 = uVar4;
  func_0x000100bf119c();
  if ((((int)uVar5 == 0) || (uVar5 = uVar4, func_0x00010901c5a4(), (uVar5 & 1) != 0)) ||
     (uVar5 = uVar4, func_0x00010901d2dc(), (uVar5 & 1) != 0)) goto LAB_10296f094;
  func_0x000100083b20(&puStack_a8);
  puVar10 = puStack_a8;
  uVar32 = 0xd00000000000002d;
  uVar30 = 0x800000010f0cff80;
  func_0x000107c5fadc(0xd00000000000002d,0x800000010f0cff80);
  puVar6 = puVar10;
  func_0x000107c3ebd4();
  func_0x000107c615e8(puVar10);
  func_0x000107c61170(uVar32);
  if ((int)puVar6 == 0) {
LAB_10296e878:
    uVar3 = 0;
  }
  else {
    func_0x000100083b20(&puStack_a8);
    puVar10 = puStack_a8;
    lVar7 = *(long *)(puStack_a8 + _DAT_1130366f0);
    func_0x000107c61174();
    func_0x000107c61170(puVar10);
    lVar8 = lVar7;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar7);
    if (lVar8 == 0) {
LAB_10296e814:
      func_0x000100083b20(&puStack_a8);
      puVar10 = puStack_a8;
      lVar7 = *(long *)(puStack_a8 + _DAT_1130366f0);
      func_0x000107c61174();
      func_0x000107c61170(puVar10);
      lVar8 = lVar7;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar7);
      if (lVar8 != 0) {
        func_0x000107c432e4(lVar8);
        func_0x000107c61180();
        func_0x000107c61170();
        func_0x000107c615e8(lVar8);
      }
      goto LAB_10296e878;
    }
    lVar7 = lVar8;
    func_0x000107c43004();
    func_0x000107c61180();
    func_0x000107c615e8(lVar8);
    if (lVar7 == 0) goto LAB_10296e814;
    uVar5 = uVar4;
    func_0x000107c5d984();
    func_0x000107c61180();
    if (uVar5 == 0) {
      uVar3 = 0;
    }
    else {
      uVar9 = uVar5;
      func_0x000107c5faec();
      func_0x000107c61170(uVar5);
      uVar32 = *(undefined8 *)(lVar7 + _DAT_113036aa0);
      func_0x000107c61434(uVar32);
      func_0x000107c61434(uVar30);
      func_0x0001000f66f0(uVar9,uVar30,uVar32);
      uVar3 = (uint)uVar9;
      func_0x000107c6142c(uVar32);
      func_0x000107c61430(uVar30,2);
    }
    bVar2 = *(byte *)(lVar7 + _DAT_113036a98);
    func_0x000107c61170(lVar7);
    uVar3 = bVar2 | uVar3;
  }
  func_0x000100083b20(&puStack_a8);
  puVar10 = puStack_a8;
  puVar6 = puStack_a8;
  func_0x000107c5c360();
  func_0x000107c61180();
  func_0x000107c61170(puVar10);
  puVar10 = puVar6;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  if (puVar10 == (undefined *)0x0) {
LAB_10296e960:
    func_0x000100083b20(&puStack_a8);
    puVar10 = puStack_a8;
    puVar6 = puStack_a8;
    func_0x000107c5d7b4();
    func_0x000107c61180();
    func_0x000107c61170(puVar10);
    puVar10 = puVar6;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(puVar6);
    if (puVar10 == (undefined *)0x0) goto LAB_10296f094;
    puVar6 = puVar10;
    func_0x000107c439c0();
  }
  else {
    puVar6 = puVar10;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(puVar10);
    puVar10 = puVar6;
    func_0x000107c4a564();
    func_0x000107c61170(puVar6);
    if ((int)puVar10 == 0) goto LAB_10296e960;
    func_0x000100083b20(&puStack_a8);
    puVar10 = puStack_a8;
    puVar6 = puStack_a8;
    func_0x000107c5d7b4();
    func_0x000107c61180();
    func_0x000107c61170(puVar10);
    puVar10 = puVar6;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(puVar6);
    if (puVar10 == (undefined *)0x0) goto LAB_10296f094;
    puVar6 = puVar10;
    func_0x000107c439cc();
  }
  func_0x000107c61180();
  func_0x000107c615e8(puVar10);
  puVar10 = puVar6;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  if (puVar10 != (undefined *)0x0) {
    puVar6 = puVar10;
    func_0x000107c4dc88();
    func_0x000107c61180();
    if (((uVar3 & 1) == 0) && (puVar11 = puVar6, func_0x000107c4a728(), (int)puVar11 == 0)) {
      func_0x000107c615e8(puVar10);
    }
    else {
      func_0x000100083b20(&puStack_a8);
      puVar11 = puStack_a8;
      lVar7 = *(long *)(puStack_a8 + _DAT_113093a98);
      func_0x000107c61174();
      func_0x000107c61170(puVar11);
      lVar8 = lVar7;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar7);
      if (lVar8 != 0) {
        uVar32 = 0xd00000000000001a;
        func_0x000107c5fadc(0xd00000000000001a,0x800000010f0cffb0);
        lVar7 = lVar8;
        func_0x000107c4e60c();
        func_0x000107c61180();
        func_0x000107c61170(uVar32);
        func_0x000100083b20(&puStack_a8);
        puVar11 = puStack_a8;
        uVar32 = 0x112e5f738;
        func_0x0001000285a8(0x112e5f738,&UNK_10da67770);
        func_0x000107c610f8();
        func_0x00010017da58(puVar11,uVar32);
        puVar12 = PTR_PTR_1126a73e0;
        func_0x000107c610f8();
        func_0x000107c4907c();
        func_0x000107c61170(puVar11);
        func_0x000100083b20(&puStack_a8);
        puVar11 = puStack_a8;
        uVar32 = 0x112e5e838;
        func_0x0001000285a8(0x112e5e838,&UNK_10da68a50);
        func_0x000107c610f8();
        func_0x00010017da58(puVar11,uVar32);
        puVar13 = PTR_PTR_1126a73e0;
        func_0x000107c610f8();
        func_0x000107c4907c();
        func_0x000107c61170(puVar11);
        func_0x000100083b20(&puStack_a8);
        puVar11 = puStack_a8;
        uVar32 = 0x112ed0170;
        func_0x0001000285a8(0x112ed0170,&UNK_10daf68d8);
        func_0x000107c610f8();
        func_0x00010017da58(puVar11,uVar32);
        puVar14 = PTR_PTR_1126a73e0;
        func_0x000107c610f8();
        func_0x000107c4907c();
        func_0x000107c61170(puVar11);
        puVar1 = (undefined8 *)(lVar33 + _DAT_112ed0ac0);
        uVar32 = *puVar1;
        uVar30 = puVar1[1];
        func_0x000107c61434(uVar30);
        func_0x000100083b20(&puStack_a8);
        puVar11 = puStack_a8;
        uVar31 = *(undefined8 *)(puStack_a8 + _DAT_113041e10);
        func_0x000107c615f0(uVar31);
        func_0x000107c61170(puVar11);
        puVar15 = puVar6;
        func_0x000107c42e38();
        func_0x000100083b20(&puStack_a8);
        puVar18 = puStack_a8;
        puVar16 = PTR_PTR_1126ae720;
        func_0x000107c61168();
        puVar11 = &UNK_110573e58;
        func_0x000107c613fc(&UNK_110573e58,0x58,7);
        *(undefined **)(puVar11 + 0x10) = puVar13;
        *(undefined **)(puVar11 + 0x18) = puStack_a8;
        *(undefined **)(puVar11 + 0x20) = puVar12;
        *(undefined8 *)(puVar11 + 0x28) = uVar31;
        *(undefined **)(puVar11 + 0x30) = puVar14;
        *(ulong *)(puVar11 + 0x38) = uVar4;
        *(undefined8 *)(puVar11 + 0x40) = uVar32;
        *(undefined8 *)(puVar11 + 0x48) = uVar30;
        *(undefined **)(puVar11 + 0x50) = puVar15;
        pcStack_88 = (code *)0x10296f528;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        uStack_98 = 0x10296d15c;
        puStack_90 = &UNK_110573e70;
        ppuVar17 = &puStack_a8;
        puStack_80 = puVar11;
        func_0x000107c60bc4(ppuVar17);
        puVar11 = puStack_80;
        func_0x000107c61174();
        func_0x000107c61434(uVar30);
        func_0x000107c615f0(uVar31);
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61574(puVar11);
        func_0x000107c3e4fc();
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar17);
        func_0x000100083b20(&puStack_a8);
        puVar11 = puStack_a8;
        func_0x000100083b20(&puStack_a8);
        puVar15 = puStack_a8;
        func_0x000100083b20(&puStack_a8);
        puVar26 = puStack_a8;
        func_0x000100083b20(&puStack_a8);
        puVar27 = puStack_a8;
        func_0x000100083b20(&puStack_a8);
        puVar28 = puStack_a8;
        func_0x000100083b20(&puStack_a8);
        puVar29 = puStack_a8;
        func_0x000100083b20(&puStack_a8);
        puVar22 = puStack_a8;
        func_0x000100083b20(&puStack_a8);
        puVar23 = puStack_a8;
        func_0x000100083b20(&puStack_a8);
        puVar24 = puStack_a8;
        func_0x000100083b20(&puStack_a8);
        puVar25 = puStack_a8;
        puVar19 = puVar6;
        func_0x000107c4a728();
        puVar21 = (undefined *)0x0;
        if ((int)puVar19 != 0) {
          func_0x000107c61174(puVar6);
          puVar21 = puVar6;
        }
        puVar20 = PTR_PTR_1126ae720;
        func_0x000107c61168();
        puVar19 = &UNK_110573ea8;
        func_0x000107c613fc(&UNK_110573ea8,0x98,7);
        *(undefined **)(puVar19 + 0x10) = puVar15;
        *(undefined8 *)(puVar19 + 0x18) = uVar31;
        *(undefined **)(puVar19 + 0x20) = puVar26;
        *(undefined **)(puVar19 + 0x28) = puVar27;
        *(undefined **)(puVar19 + 0x30) = puVar11;
        *(undefined **)(puVar19 + 0x38) = puVar28;
        *(undefined **)(puVar19 + 0x40) = puVar29;
        *(undefined **)(puVar19 + 0x48) = puVar13;
        *(ulong *)(puVar19 + 0x50) = uVar4;
        *(undefined8 *)(puVar19 + 0x58) = uVar32;
        *(undefined8 *)(puVar19 + 0x60) = uVar30;
        *(undefined **)(puVar19 + 0x68) = puVar21;
        *(undefined **)(puVar19 + 0x70) = puVar22;
        *(undefined **)(puVar19 + 0x78) = puVar23;
        *(undefined **)(puVar19 + 0x80) = puVar24;
        *(undefined **)(puVar19 + 0x88) = puVar25;
        *(long *)(puVar19 + 0x90) = lVar7;
        pcStack_88 = FUN_10296f578;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        uStack_98 = 0x10296d158;
        puStack_90 = &UNK_110573ec0;
        ppuVar17 = &puStack_a8;
        puStack_80 = puVar19;
        func_0x000107c60bc4();
        puVar19 = puStack_80;
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174(puVar25);
        func_0x000107c615f0(lVar7);
        func_0x000107c61174();
        func_0x000107c615f0(uVar31);
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174(puVar27);
        func_0x000107c615f0(puVar11);
        func_0x000107c61174(puVar28);
        func_0x000107c61174(puVar29);
        func_0x000107c61574(puVar19);
        func_0x000107c3e4fc(puVar20);
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar17);
        puVar19 = PTR_PTR_1126afda8;
        func_0x000107c610f8(PTR_PTR_1126afda8);
        func_0x000107c47cac();
        func_0x000107c615e8(lVar8);
        func_0x000107c61170(puVar20);
        func_0x000107c61170(puVar16);
        func_0x000107c615e8(lVar7);
        func_0x000107c61170(puVar25);
        func_0x000107c61170(puVar24);
        func_0x000107c61170(puVar23);
        func_0x000107c61170(puVar22);
        func_0x000107c61170(puVar21);
        func_0x000107c61170(puVar29);
        func_0x000107c61170(puVar28);
        func_0x000107c615e8(puVar11);
        func_0x000107c61170(puVar27);
        func_0x000107c61170(puVar26);
        func_0x000107c61170(puVar15);
        func_0x000107c61170(puVar14);
        func_0x000107c615e8(uVar31);
        func_0x000107c61170(puVar12);
        func_0x000107c61170(puVar18);
        func_0x000107c61170(puVar13);
        func_0x000107c61170(puVar6);
        func_0x000107c615e8(puVar10);
        func_0x000107c61170(uVar4);
        return puVar19;
      }
      func_0x000107c615e8(puVar10);
    }
    func_0x000107c61170(puVar6);
  }
LAB_10296f094:
  func_0x000107c61170(uVar4);
  return (undefined *)0x0;
}



/* Entry: 10296f0ec; end: 10296f443;  */

undefined * FUN_10296f0ec(void)

{
  undefined *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  
  puVar1 = PTR_PTR_1126abab8;
  func_0x000107c610f8(PTR_PTR_1126abab8);
  func_0x000107c5fadc(in_x6,in_x7);
  func_0x000107c48b34(puVar1);
  func_0x000107c61170(in_x6);
  return puVar1;
}



/* Entry: 10296f444; end: 10296f4f7;  */

void FUN_10296f444(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
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
  return;
}



/* Entry: 10296f4f8; end: 10296f507;  */

undefined1  [16] FUN_10296f4f8(void)

{
  return ZEXT816(0x110573e38);
}



/* Entry: 10296f508; end: 10296f55b;  */

void FUN_10296f508(void)

{
  func_0x000107c61168(&PTR_PTR_112ed0098);
  return;
}



/* Entry: 10296f55c; end: 10296f577;  */

void FUN_10296f55c(long param_1,long param_2)

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



/* Entry: 10296f578; end: 10296f5bb;  */

void FUN_10296f578(void)

{
  long unaff_x20;
  
  func_0x00010296f1b0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                      *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                      *(undefined8 *)(unaff_x20 + 0x90));
  return;
}



/* Entry: 10296f5bc; end: 10296f5c3;  */

void FUN_10296f5bc(long param_1,long param_2)

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



/* Entry: 10296f5c4; end: 10296f60f;  */

void FUN_10296f5c4(undefined8 param_1)

{
  func_0x0001000285a8(0x112ecfc30,&UNK_10daf6370);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10296f6d0,param_1);
  return;
}



/* Entry: 10296f610; end: 10296f6cf;  */

void FUN_10296f610(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  FUN_10296e664();
  func_0x000107c61574(lStack_38);
  plVar2 = (long *)0x0;
  if (param_2 != 0) {
    lVar1 = 0x112ecfd08;
    func_0x0001000285a8(0x112ecfd08,&UNK_10daf65f0);
    FUN_10296aaf0();
    func_0x000107c613fc();
    *(undefined8 *)(lVar1 + 0x18) = 3;
    *(undefined8 *)(lVar1 + 0x10) = 1;
    *(long *)(lVar1 + 0x20) = param_2;
    plVar2 = &lStack_38;
    lStack_38 = lVar1;
    func_0x000100854cb0();
    func_0x000107c61574(lVar1);
  }
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10296f6d0; end: 10296f6e7;  */

void FUN_10296f6d0(long *param_1)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  FUN_10296e664();
  func_0x000107c61574(lStack_38);
  plVar2 = (long *)0x0;
  if (unaff_x20 != 0) {
    lVar1 = 0x112ecfd08;
    func_0x0001000285a8(0x112ecfd08,&UNK_10daf65f0);
    FUN_10296aaf0();
    func_0x000107c613fc();
    *(undefined8 *)(lVar1 + 0x18) = 3;
    *(undefined8 *)(lVar1 + 0x10) = 1;
    *(long *)(lVar1 + 0x20) = unaff_x20;
    plVar2 = &lStack_38;
    lStack_38 = lVar1;
    func_0x000100854cb0();
    func_0x000107c61574(lVar1);
  }
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10296f6e8; end: 10296f733;  */

void FUN_10296f6e8(undefined8 param_1)

{
  func_0x0001000285a8(0x112d60b28,&UNK_10d926f10);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10296f7c0,param_1);
  return;
}



/* Entry: 10296f734; end: 10296f7bf;  */

void FUN_10296f734(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = 0x112e609b8;
  func_0x0001000285a8(0x112e609b8,&UNK_10da68a80);
  func_0x000107c610f8();
  uVar2 = uStack_38;
  func_0x00010017da58(uStack_38,uVar1);
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 10296f7c0; end: 10296f7d7;  */

void FUN_10296f7c0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = 0x112e609b8;
  func_0x0001000285a8(0x112e609b8,&UNK_10da68a80);
  func_0x000107c610f8();
  uVar2 = uStack_38;
  func_0x00010017da58(uStack_38,uVar1);
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 10296f7d8; end: 10296f98f;  */

void FUN_10296f7d8(void)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  pcVar1 = "presentGiftingPage()";
  func_0x0001000c10c0("presentGiftingPage()");
  func_0x000107c61180();
  puVar2 = &UNK_110573fc0;
  func_0x000107c613fc(&UNK_110573fc0,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  pcStack_40 = FUN_10296fa48;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_110573fd8;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c4e590(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 10296f990; end: 10296f9b7; -[SCPlusGiftingFriendProfileGiftingPagePresenter presentGiftingPage] */

void FUN_10296f990(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10296f7d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10296f9b8; end: 10296fa17; -[SCPlusGiftingFriendProfileGiftingPagePresenter init] */

void FUN_10296f9b8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCPlusGiftingFriendProfileSection.SCPlusGiftingFriendProfileGiftingPagePresenter"
                      ,0x50,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10296f9e4);
  (*pcVar1)();
}



/* Entry: 10296fa18; end: 10296fa27; -[SCPlusGiftingFriendProfileGiftingPagePresenter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10296fa18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ed0178));
  return;
}



/* Entry: 10296fa28; end: 10296fa47;  */

void FUN_10296fa28(void)

{
  func_0x000107c61168(&PTR_PTR_112874088);
  return;
}



/* Entry: 10296fa48; end: 10296fa6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10296fa48(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126afdb8;
    func_0x000107c610f8(PTR_PTR_1126afdb8);
    func_0x000107c45510();
    puVar3 = PTR_PTR_1126b02a8;
    func_0x000107c610f8(PTR_PTR_1126b02a8);
    uVar4 = 0xd00000000000003c;
    func_0x000107c5fadc(0xd00000000000003c,0x800000010f0d0050);
    func_0x000107c46d50(puVar3);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(uVar4);
    func_0x000107c445ac(*(undefined8 *)(lVar1 + _DAT_112ed0178));
    func_0x000107c61170(lVar1);
    func_0x000107c61170(puVar3);
  }
  return;
}



/* Entry: 10296fa6c; end: 10296fab3; -[SCPlusGiftingFriendProfileSectionActionHandler presentingViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10296fa6c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ed01a8;
  func_0x000107c61428(param_1 + _DAT_112ed01a8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10296fab4; end: 10296fb0b; -[SCPlusGiftingFriendProfileSectionActionHandler setPresentingViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10296fab4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ed01a8;
  func_0x000107c61428(param_1 + _DAT_112ed01a8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10296fb0c; end: 10296fba7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10296fb0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  func_0x000107c61614(unaff_x20 + _DAT_112ed01a8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112ed01b0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ed01b8) = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ed01c0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10296fba8; end: 10296fc63; -[SCPlusGiftingFriendProfileSectionActionHandler initWithGiftingScopeExposer:friendSnapchatter:profileSessionId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10296fba8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_50;
  long lStack_48;
  
  lVar3 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  func_0x000107c61614(param_1 + _DAT_112ed01a8,0);
  *(undefined8 *)(param_1 + _DAT_112ed01b0) = param_3;
  *(undefined8 *)(param_1 + _DAT_112ed01b8) = param_4;
  puVar1 = (undefined8 *)(param_1 + _DAT_112ed01c0);
  *puVar1 = param_5;
  puVar1[1] = param_2;
  puVar2 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61154(&lStack_50,puVar2);
  return;
}



/* Entry: 10296fc64; end: 10296fe4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10296fc64(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lVar8;
  undefined1 auStack_68 [24];
  
  lVar2 = _DAT_112ed01a8;
  func_0x000107c61428(unaff_x20 + _DAT_112ed01a8,auStack_68,0,0);
  lVar2 = unaff_x20 + lVar2;
  func_0x000107c61618();
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126aead8;
    func_0x000107c610f8(PTR_PTR_1126aead8);
    func_0x000107c4807c();
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112ed01c0);
    uVar1 = ((undefined8 *)(unaff_x20 + _DAT_112ed01c0))[1];
    func_0x00010439c014(0);
    func_0x000107c610f8();
    func_0x000107c61434(uVar1);
    uVar4 = 0x6a;
    func_0x00010439b9d8(0x6a,uVar7,uVar1,0x4b,0,0,0xffffffffffffffff,0);
    lVar5 = *(long *)(unaff_x20 + _DAT_112ed01b8);
    func_0x000107c5d984();
    func_0x000107c61180();
    if (lVar5 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = lVar5;
      func_0x000107c5faec();
      func_0x000107c61170(lVar5);
      func_0x00010375ea5c(0);
      func_0x000107c61434(uVar7);
      func_0x00010375e7d0(lVar8,uVar7);
      func_0x000107c61430(uVar7,2);
    }
    func_0x00010375e4c0(0);
    func_0x000107c610f8();
    lVar5 = lVar8;
    func_0x000107c61174(lVar8);
    func_0x000107c61174();
    func_0x000107c61174(puVar3);
    func_0x000107c61174(uVar4);
    puVar6 = puVar3;
    func_0x00010375e178(puVar3,uVar4,0,lVar8,unaff_x20);
    func_0x000107c42c1c(*(undefined8 *)(unaff_x20 + _DAT_112ed01b0));
    func_0x000107c61170(puVar6);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(lVar2);
  }
  return lVar2 != 0;
}



/* Entry: 10296fe4c; end: 10296ff0f; -[SCPlusGiftingFriendProfileSectionActionHandler handleActionWithSender:actionModel:fromSourceView:] */

uint FUN_10296fe4c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  uint uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    func_0x000107c61174(param_4);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_4);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_50);
    func_0x000107c615e8(param_3);
  }
  func_0x000102970050(&uStack_50,param_4);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 10296ff10; end: 10296ff6f; -[SCPlusGiftingFriendProfileSectionActionHandler init] */

void FUN_10296ff10(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCPlusGiftingFriendProfileSection.SCPlusGiftingFriendProfileSectionActionHandler"
                      ,0x50,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10296ff3c);
  (*pcVar1)();
}



/* Entry: 10296ff70; end: 10296ffcb; -[SCPlusGiftingFriendProfileSectionActionHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10296ff70(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed01b0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed01b8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ed01c0 + 8));
  param_1 = param_1 + _DAT_112ed01a8;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10296ffcc; end: 1029700ef; -[SCPlusGiftingFriendProfileSectionActionHandler plusGiftingPageDidDismiss] */

/* WARNING: Possible PIC construction at 0x000102970008: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102970024: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010297000c) */
/* WARNING: Removing unreachable block (ram,0x000102970028) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10296ffcc(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1029700f0; end: 10297010f;  */

void FUN_1029700f0(void)

{
  func_0x000107c61168(&PTR_PTR_112874148);
  return;
}



/* Entry: 102970110; end: 10297027f;  */

void FUN_102970110(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ed0230,&UNK_10daf69f0);
  puVar1 = &UNK_110574010;
  func_0x000107c613fc(&UNK_110574010,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x0001000823a8(FUN_102970280,puVar1);
  return;
}



/* Entry: 102970280; end: 10297028f;  */

void FUN_102970280(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  lVar6 = lVar1;
  func_0x000100083b20(&uStack_58);
  FUN_102970ba0();
  func_0x000107c613fc();
  *(undefined8 *)(lVar6 + 0x10) = uStack_58;
  *(undefined8 *)(lVar6 + 0x18) = uVar2;
  *(undefined8 *)(lVar6 + 0x20) = uVar4;
  *(undefined8 *)(lVar6 + 0x28) = uVar3;
  *(undefined8 *)(lVar6 + 0x30) = uVar5;
  *(long *)(lVar6 + 0x38) = lVar1;
  *param_1 = lVar6;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar5);
  return;
}



/* Entry: 102970290; end: 1029702f3;  */

void FUN_102970290(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_4;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = param_6;
  *(undefined8 *)(unaff_x20 + 0x38) = param_1;
  return;
}



/* Entry: 1029702f4; end: 1029707bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1029702f4(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  long unaff_x20;
  ulong uVar17;
  int iVar18;
  long lVar19;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  lVar19 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(ulong *)(lVar19 + _DAT_112ed0ac8);
  func_0x000107c61174();
  func_0x000100083b20(&puStack_a0);
  puVar5 = puStack_a0;
  puVar4 = puStack_a0;
  func_0x000107c42e5c();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  puVar5 = puVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  if (puVar5 == (undefined *)0x0) goto LAB_1029703ec;
  puVar4 = puVar5;
  func_0x000107c443ec();
  func_0x000107c61180();
  puVar6 = puVar4;
  func_0x000107c41050();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  puVar4 = puVar6;
  func_0x000107c5bcc0();
  func_0x000107c61170(puVar6);
  if (((puVar4 != (undefined *)0x0) && (uVar7 = uVar3, func_0x000100bf119c(), (int)uVar7 != 0)) &&
     (uVar7 = uVar3, func_0x00010901c5a4(), (uVar7 & 1) == 0)) {
    func_0x000100083b20(&puStack_a0);
    puVar4 = puStack_a0;
    puVar6 = puStack_a0;
    func_0x000107c3fa04();
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    if (puVar6 == (undefined *)0x0) goto LAB_102970564;
    func_0x000107c615f0(puVar6);
    uVar8 = 0xd000000000000021;
    func_0x000107c5fadc(0xd000000000000021,0x800000010f0d00f0);
    puVar4 = puVar6;
    func_0x000107c3ebd4();
    func_0x000107c615e8(puVar6);
    func_0x000107c61170(uVar8);
    func_0x000107c615f0(puVar6);
    uVar8 = 0xd000000000000020;
    func_0x000107c5fadc(0xd000000000000020,0x800000010f0d0120);
    puVar9 = puVar6;
    func_0x000107c3ebd4();
    func_0x000107c615e8(puVar6);
    func_0x000107c61170(uVar8);
    if ((int)puVar4 == 0) {
      if ((int)puVar9 == 0) goto LAB_102970564;
LAB_102970530:
      uVar17 = 0;
LAB_102970534:
      iVar18 = (int)uVar17;
      uVar7 = uVar3;
      func_0x000107c4ea60();
      func_0x000107c61180();
      if (uVar7 == 0) goto joined_r0x000102970560;
      uVar10 = uVar7;
      func_0x000107c4a060();
      func_0x000107c61170(uVar7);
      if ((uVar17 & 1) == 0) {
        iVar18 = (int)uVar10;
        goto joined_r0x000102970560;
      }
    }
    else {
      uVar7 = uVar3;
      func_0x000107c4ea60();
      func_0x000107c61180();
      if (uVar7 == 0) {
        if (((ulong)puVar9 & 1) == 0) goto LAB_102970564;
        goto LAB_102970530;
      }
      uVar17 = uVar7;
      func_0x000107c4a574();
      iVar18 = (int)uVar17;
      func_0x000107c61170(uVar7);
      if (((ulong)puVar9 & 1) != 0) goto LAB_102970534;
joined_r0x000102970560:
      if (iVar18 == 0) {
LAB_102970564:
        func_0x000100083b20(&puStack_a0);
        puVar9 = puStack_a0;
        puVar1 = (undefined8 *)(lVar19 + _DAT_112ed0ac0);
        uVar8 = *puVar1;
        uVar2 = puVar1[1];
        puVar11 = PTR_PTR_1126ae720;
        func_0x000107c61168(PTR_PTR_1126ae720);
        puVar4 = &UNK_110574058;
        func_0x000107c613fc(&UNK_110574058,0x30,7);
        *(undefined **)(puVar4 + 0x10) = puStack_a0;
        *(ulong *)(puVar4 + 0x18) = uVar3;
        *(undefined8 *)(puVar4 + 0x20) = uVar8;
        *(undefined8 *)(puVar4 + 0x28) = uVar2;
        pcStack_80 = FUN_102970bc0;
        puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_98 = 0x42000000;
        uStack_90 = 0x10296d15c;
        puStack_88 = &UNK_110574070;
        ppuVar12 = &puStack_a0;
        puStack_78 = puVar4;
        func_0x000107c60bc4(ppuVar12);
        puVar4 = puStack_78;
        func_0x000107c61174();
        func_0x000107c61434(uVar2);
        func_0x000107c61174();
        func_0x000107c61574(puVar4);
        func_0x000107c3e4fc(puVar11);
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar12);
        func_0x000100083b20(&puStack_a0);
        puVar15 = puStack_a0;
        func_0x000100083b20(&puStack_a0);
        puVar16 = puStack_a0;
        func_0x000100083b20(&puStack_a0);
        puVar14 = puStack_a0;
        puVar13 = PTR_PTR_1126ae720;
        func_0x000107c61168(PTR_PTR_1126ae720);
        puVar4 = &UNK_1105740a8;
        func_0x000107c613fc(&UNK_1105740a8,0x30,7);
        *(undefined **)(puVar4 + 0x10) = puVar14;
        *(undefined **)(puVar4 + 0x18) = puVar15;
        *(undefined **)(puVar4 + 0x20) = puVar16;
        *(ulong *)(puVar4 + 0x28) = uVar3;
        pcStack_80 = (code *)0x102970be8;
        puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_98 = 0x42000000;
        uStack_90 = 0x10296d158;
        puStack_88 = &UNK_1105740c0;
        ppuVar12 = &puStack_a0;
        puStack_78 = puVar4;
        func_0x000107c60bc4(ppuVar12);
        puVar4 = puStack_78;
        func_0x000107c61174();
        func_0x000107c61174(puVar14);
        func_0x000107c61174(puVar15);
        func_0x000107c61174(puVar16);
        func_0x000107c61574(puVar4);
        func_0x000107c3e4fc(puVar13);
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar12);
        puVar4 = PTR_PTR_1126afda8;
        func_0x000107c610f8(PTR_PTR_1126afda8);
        func_0x000107c47cac();
        func_0x000107c615e8(puVar5);
        func_0x000107c61170(puVar13);
        func_0x000107c61170(puVar11);
        func_0x000107c61170(puVar16);
        func_0x000107c61170(puVar15);
        func_0x000107c61170(puVar14);
        func_0x000107c61170(puVar9);
        func_0x000107c615e8(puVar6);
        func_0x000107c61170(uVar3);
        return puVar4;
      }
    }
    func_0x000107c615e8(puVar5);
    puVar5 = puVar6;
  }
  func_0x000107c615e8(puVar5);
LAB_1029703ec:
  func_0x000107c61170(uVar3);
  return (undefined *)0x0;
}



/* Entry: 1029707c0; end: 102970883;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029707c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_50;
  long lStack_48;
  
  lVar3 = 0;
  FUN_1029700f0();
  lVar4 = lVar3;
  func_0x000107c610f8();
  func_0x000107c61614(lVar4 + _DAT_112ed01a8,0);
  *(undefined8 *)(lVar4 + _DAT_112ed01b0) = param_1;
  *(undefined8 *)(lVar4 + _DAT_112ed01b8) = param_2;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112ed01c0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar2 = PTR_s_init_1125d9248;
  lStack_50 = lVar4;
  lStack_48 = lVar3;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61434(param_4);
  func_0x000107c61154(&lStack_50,puVar2);
  return;
}



/* Entry: 102970884; end: 102970b43;  */

/* WARNING: Removing unreachable block (ram,0x000102970aec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102970884(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined1 auStack_a0 [80];
  
  puVar9 = auStack_a0;
  lVar1 = *(long *)(param_1 + _DAT_113093a98);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    uVar2 = 0xd000000000000021;
    func_0x000107c5fadc(0xd000000000000021,0x800000010daf69e0);
    lVar3 = lVar1;
    func_0x000107c4e60c(lVar1);
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    func_0x000107c5dbd4(param_2);
    func_0x000107c61180();
    func_0x000102971414(0);
    func_0x000107c610f8();
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_4);
    FUN_102970db8(param_2,param_3,param_4);
    ppuVar4 = &PTR____CFConstantStringClassReference_110f123d8;
    func_0x000107c61174();
    lVar5 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    func_0x000107c61534();
    *(undefined8 *)(lVar5 + 0x18) = 2;
    *(undefined8 *)(lVar5 + 0x10) = 1;
    ppuVar6 = &PTR____CFConstantStringClassReference_110eb4ff8;
    func_0x000107c5faec();
    *(undefined8 *)(lVar5 + 0x20) = ppuVar6;
    *(undefined1 **)(lVar5 + 0x28) = puVar9;
    uVar2 = 0;
    func_0x0001000e2834();
    *(undefined8 *)(lVar5 + 0x48) = uVar2;
    *(undefined ***)(lVar5 + 0x30) = ppuVar4;
    func_0x000107c61174(ppuVar4);
    lVar7 = lVar5;
    func_0x000100214a84(lVar5);
    func_0x000107c61588(lVar5);
    func_0x000100f15a0c((undefined8 *)(lVar5 + 0x20));
    func_0x000107c61174(param_2);
    lVar5 = lVar7;
    func_0x00010018cc3c(lVar7);
    func_0x000107c6142c(lVar7);
    puVar8 = PTR_PTR_1126b2b48;
    func_0x000107c610f8();
    func_0x000107c615f0(lVar3);
    lVar7 = lVar5;
    func_0x000107c5f9dc(lVar5,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
    func_0x000107c6142c(lVar5);
    func_0x000107c45f10(0x4038000000000000,0x4030000000000000,0,0x4030000000000000);
    func_0x000107c61170(param_2);
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(lVar7);
    if (puVar8 == (undefined *)0x0) {
      func_0x000107c615e8(lVar1);
      func_0x000107c615e8(lVar3);
      func_0x000107c61170(param_2);
      func_0x000107c61170(ppuVar4);
    }
    else {
      func_0x000107c5a1fc(puVar8);
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(ppuVar4);
      func_0x000107c615e8(lVar3);
      func_0x000107c61170(param_2);
    }
  }
  return;
}



/* Entry: 102970b44; end: 102970b8f;  */

void FUN_102970b44(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102970b90; end: 102970b9f;  */

undefined1  [16] FUN_102970b90(void)

{
  return ZEXT816(0x110574038);
}



/* Entry: 102970ba0; end: 102970bbf;  */

void FUN_102970ba0(void)

{
  func_0x000107c61168(&PTR_PTR_112ed0278);
  return;
}



/* Entry: 102970bc0; end: 102970bfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102970bc0(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar7 = 0;
  FUN_1029700f0();
  lVar8 = lVar7;
  func_0x000107c610f8();
  func_0x000107c61614(lVar8 + _DAT_112ed01a8,0);
  *(undefined8 *)(lVar8 + _DAT_112ed01b0) = uVar2;
  *(undefined8 *)(lVar8 + _DAT_112ed01b8) = uVar4;
  puVar1 = (undefined8 *)(lVar8 + _DAT_112ed01c0);
  *puVar1 = uVar3;
  puVar1[1] = uVar5;
  puVar6 = PTR_s_init_1125d9248;
  lStack_50 = lVar8;
  lStack_48 = lVar7;
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar4);
  func_0x000107c61434(uVar5);
  func_0x000107c61154(&lStack_50,puVar6);
  return;
}



/* Entry: 102970bfc; end: 102970c43;  */

void FUN_102970bfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c610f8();
  FUN_102970db8(param_1,param_2,param_3);
  return;
}



/* Entry: 102970c44; end: 102970c8b; -[SCPlusGiftingFriendProfileSectionComposerContextProvider contextProviderDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102970c44(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ed0300;
  func_0x000107c61428(param_1 + _DAT_112ed0300,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102970c8c; end: 102970ce3; -[SCPlusGiftingFriendProfileSectionComposerContextProvider setContextProviderDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102970c8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ed0300;
  func_0x000107c61428(param_1 + _DAT_112ed0300,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102970ce4; end: 102970cef; -[SCPlusGiftingFriendProfileSectionComposerContextProvider updateQueuePerformer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102970ce4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ed0308;
  func_0x000107c61428(param_1 + _DAT_112ed0308,auStack_38,0,0);
  func_0x000107c615f0(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102970cf0; end: 102970cfb; -[SCPlusGiftingFriendProfileSectionComposerContextProvider setUpdateQueuePerformer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102970cf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ed0308;
  func_0x000107c61428(param_1 + _DAT_112ed0308,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c615f0(param_3);
  func_0x000107c615e8(uVar2);
  return;
}



/* Entry: 102970cfc; end: 102970d07; -[SCPlusGiftingFriendProfileSectionComposerContextProvider actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102970cfc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ed0310;
  func_0x000107c61428(param_1 + _DAT_112ed0310,auStack_38,0,0);
  func_0x000107c615f0(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102970d08; end: 102970d4b;  */

void FUN_102970d08(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c615f0(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102970d4c; end: 102970d57; -[SCPlusGiftingFriendProfileSectionComposerContextProvider setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102970d4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ed0310;
  func_0x000107c61428(param_1 + _DAT_112ed0310,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c615f0(param_3);
  func_0x000107c615e8(uVar2);
  return;
}



/* Entry: 102970d58; end: 102970db7;  */

void FUN_102970d58(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_4;
  func_0x000107c61428(param_1 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  func_0x000107c615f0(param_3);
  func_0x000107c615e8(uVar1);
  return;
}



/* Entry: 102970db8; end: 102970e7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102970db8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112ed0318) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112ed0320) = 0;
  func_0x000107c61614(unaff_x20 + _DAT_112ed0300,0);
  *(undefined8 *)(unaff_x20 + _DAT_112ed0308) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ed0310) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ed0328) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ed0330) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ed0338) = param_3;
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102970e7c; end: 102970edb; -[SCPlusGiftingFriendProfileSectionComposerContextProvider initWithValdiRuntimeProvider:plusServices:friendSnapchatter:] */

void FUN_102970e7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  FUN_102970db8(param_3,param_4,param_5);
  return;
}



/* Entry: 102970edc; end: 102970f3b; -[SCPlusGiftingFriendProfileSectionComposerContextProvider init] */

void FUN_102970edc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCPlusGiftingFriendProfileSection.SCPlusGiftingFriendProfileSectionComposerContextProvider"
                      ,0x5a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102970f08);
  (*pcVar1)();
}



/* Entry: 102970f3c; end: 102970fc3; -[SCPlusGiftingFriendProfileSectionComposerContextProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102970f88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102970fa8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102970f8c) */
/* WARNING: Removing unreachable block (ram,0x000102970fac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102970f3c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed0328));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed0330));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed0338));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ed0318));
  return;
}



/* Entry: 102970fc4; end: 1029710d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102970fc4(void)

{
  long lVar1;
  long lVar2;
  byte *pbVar3;
  uint uVar4;
  long unaff_x20;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar2 = _DAT_112ed0308;
  func_0x000107c61428(unaff_x20 + _DAT_112ed0308,auStack_48,0,0);
  if (*(long *)(unaff_x20 + lVar2) != 0) {
    func_0x000107c3e208();
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_112ed0330);
  func_0x000107c42e5c();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    pbVar3 = (byte *)(unaff_x20 + _DAT_112ed0320);
    if ((*pbVar3 & 1) == 0) {
      return;
    }
    uVar4 = 0;
  }
  else {
    lVar1 = lVar2;
    func_0x000107c443f4();
    uVar4 = (uint)lVar1;
    func_0x000107c615e8(lVar2);
    pbVar3 = (byte *)(unaff_x20 + _DAT_112ed0320);
    if (uVar4 == *pbVar3) {
      return;
    }
  }
  *pbVar3 = (byte)uVar4;
  lVar2 = _DAT_112ed0300;
  func_0x000107c61428(unaff_x20 + _DAT_112ed0300,auStack_60,0,0);
  lVar2 = unaff_x20 + lVar2;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c5dbc4();
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 1029710d4; end: 1029710fb; -[SCPlusGiftingFriendProfileSectionComposerContextProvider setUp] */

void FUN_1029710d4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102970fc4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1029710fc; end: 102971147; -[SCPlusGiftingFriendProfileSectionComposerContextProvider tearDown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029710fc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ed0308;
  func_0x000107c61428(param_1 + _DAT_112ed0308,auStack_38,0,0);
  if (*(long *)(param_1 + lVar1) != 0) {
    func_0x000107c3e208();
  }
  return;
}



/* Entry: 102971148; end: 1029713cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102971148(void)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  long unaff_x20;
  ulong uVar10;
  long lVar11;
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar1 = _DAT_112ed0308;
  plVar5 = &lStack_a0;
  puVar9 = auStack_78;
  func_0x000107c61428(unaff_x20 + _DAT_112ed0308,puVar9,0,0);
  if (*(long *)(unaff_x20 + lVar1) != 0) {
    func_0x000107c3e208();
  }
  if (*(char *)(unaff_x20 + _DAT_112ed0320) != '\x01') {
    return;
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_112ed0338);
  func_0x00010901d7c4();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar9);
  }
  puVar2 = PTR_PTR_1126abac0;
  func_0x000107c610f8(PTR_PTR_1126abac0);
  func_0x000107c46a28();
  func_0x000107c61170(lVar1);
  lVar1 = _DAT_112ed0318;
  uVar10 = *(ulong *)(unaff_x20 + _DAT_112ed0318);
  if (uVar10 == 0) {
LAB_102971224:
    lVar11 = _DAT_112ed0310;
    func_0x000107c61428(unaff_x20 + _DAT_112ed0310,auStack_90,0,0);
    lVar11 = *(long *)(unaff_x20 + lVar11);
    if (lVar11 != 0) {
      lVar4 = 0;
      FUN_10296fa28();
      lVar7 = lVar4;
      func_0x000107c610f8();
      *(long *)(lVar7 + _DAT_112ed0178) = lVar11;
      puVar6 = PTR_s_init_1125d9248;
      lStack_a0 = lVar7;
      lStack_98 = lVar4;
      func_0x000107c615f4(lVar11,2);
      func_0x000107c61154(&lStack_a0,puVar6);
      puVar6 = PTR_PTR_1126abac8;
      func_0x000107c610f8(PTR_PTR_1126abac8);
      func_0x000107c46b64();
      lVar7 = *(long *)(unaff_x20 + _DAT_112ed0328);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar7 == 0) {
LAB_102971378:
        func_0x000107c61170(puVar6);
        func_0x000107c61170(plVar5);
        func_0x000107c615e8(lVar11);
        func_0x000107c61170(puVar2);
        lVar7 = 0;
      }
      else {
        lVar4 = lVar7;
        func_0x000107c509b4();
        func_0x000107c61180();
        func_0x000107c615e8(lVar7);
        if (lVar4 == 0) goto LAB_102971378;
        FUN_1029713d0(0);
        func_0x000107c614e8();
        func_0x000107c61174(puVar6);
        lVar7 = lVar4;
        func_0x000107c40994();
        func_0x000107c61180();
        func_0x000107c615e8(lVar4);
        func_0x000107c61170(puVar2);
        func_0x000107c61170(puVar6);
        func_0x000107c61170(puVar6);
        func_0x000107c61170(plVar5);
        func_0x000107c615e8(lVar11);
      }
      uVar8 = *(undefined8 *)(unaff_x20 + lVar1);
      *(long *)(unaff_x20 + lVar1) = lVar7;
      func_0x000107c615e8(uVar8);
      goto LAB_1029713a8;
    }
  }
  else {
    uVar3 = uVar10;
    func_0x000107c615f0();
    func_0x000107c41854();
    if ((uVar3 & 1) != 0) {
      func_0x000107c615e8(uVar10);
      goto LAB_102971224;
    }
    func_0x000107c5a588(uVar10);
    func_0x000107c615e8(uVar10);
  }
  func_0x000107c61170(puVar2);
LAB_1029713a8:
  func_0x000107c615f0(*(undefined8 *)(unaff_x20 + lVar1));
  return;
}



/* Entry: 1029713d0; end: 102971433;  */

void FUN_1029713d0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ed0340 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126abad0;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112ed0340 = puVar1;
  return;
}



/* Entry: 102971434; end: 1029714b3; -[SCPlusGiftingFriendProfileSectionComposerContextProvider valdiContext] */

void FUN_102971434(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102971148();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1029714b4; end: 102971573;  */

void FUN_1029714b4(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  FUN_1029702f4();
  func_0x000107c61574(lStack_38);
  plVar2 = (long *)0x0;
  if (param_2 != 0) {
    lVar1 = 0x112ecfd08;
    func_0x0001000285a8(0x112ecfd08,&UNK_10daf65f0);
    FUN_10296aaf0();
    func_0x000107c613fc();
    *(undefined8 *)(lVar1 + 0x18) = 3;
    *(undefined8 *)(lVar1 + 0x10) = 1;
    *(long *)(lVar1 + 0x20) = param_2;
    plVar2 = &lStack_38;
    lStack_38 = lVar1;
    func_0x000100854cb0();
    func_0x000107c61574(lVar1);
  }
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 102971574; end: 10297158b;  */

void FUN_102971574(long *param_1)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  FUN_1029702f4();
  func_0x000107c61574(lStack_38);
  plVar2 = (long *)0x0;
  if (unaff_x20 != 0) {
    lVar1 = 0x112ecfd08;
    func_0x0001000285a8(0x112ecfd08,&UNK_10daf65f0);
    FUN_10296aaf0();
    func_0x000107c613fc();
    *(undefined8 *)(lVar1 + 0x18) = 3;
    *(undefined8 *)(lVar1 + 0x10) = 1;
    *(long *)(lVar1 + 0x20) = unaff_x20;
    plVar2 = &lStack_38;
    lStack_38 = lVar1;
    func_0x000100854cb0();
    func_0x000107c61574(lVar1);
  }
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10297158c; end: 1029715d7;  */

void FUN_10297158c(undefined8 param_1)

{
  func_0x0001000285a8(0x112ed0370,&UNK_10daf6b40);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1029715d8,param_1);
  return;
}



/* Entry: 1029715d8; end: 10297163f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029715d8(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 unaff_x20;
  long lStack_40;
  long lStack_38;
  
  plVar3 = &lStack_40;
  FUN_1029720b8();
  lVar2 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112ed0378) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar2;
  lStack_38 = param_2;
  func_0x000107c6157c();
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar3;
  return;
}



/* Entry: 102971640; end: 10297168b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102971640(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ed0378) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10297168c; end: 10297193f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10297168c(long param_1)

{
  ulong uVar1;
  undefined1 uVar2;
  long lVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  code *pcVar9;
  ulong uVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  undefined1 uStack_78;
  undefined7 uStack_77;
  long lStack_70;
  undefined *puStack_68;
  
  FUN_10297ad18();
  lVar12 = *(long *)(param_1 + 0x10);
  if (lVar12 == 0) {
    func_0x000107c6142c(param_1);
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    lVar13 = 0x20;
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    do {
      uVar2 = *(undefined1 *)(param_1 + lVar13);
      func_0x000100083b20(&uStack_78);
      uVar8 = CONCAT71(uStack_77,uStack_78);
      uStack_78 = uVar2;
      func_0x00010008a7c8(&lStack_70,&uStack_78);
      func_0x000107c61574(uVar8);
      lVar3 = lStack_70;
      if (lStack_70 != 0) {
        func_0x000100083b20(&puStack_68);
        func_0x000107c61574(lVar3);
        puVar11 = puStack_68;
        if (puStack_68 != (undefined *)0x0) {
          puVar6 = puVar7;
          func_0x000107c61550();
          if ((((int)puVar6 == 0) || ((long)puVar7 < 0)) ||
             (puVar6 = puVar7, ((ulong)puVar7 >> 0x3e & 1) != 0)) {
            if ((ulong)puVar7 >> 0x3e == 0) {
              puVar5 = *(undefined **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar5 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar7) {
                puVar5 = puVar7;
              }
              func_0x000107c60480(puVar5);
            }
            puVar6 = (undefined *)0x0;
            FUN_102971a28(0,puVar5 + 1,1,puVar7);
          }
          uVar10 = (ulong)puVar6 & 0xffffffffffffff8;
          uVar1 = *(ulong *)(uVar10 + 0x10);
          puVar7 = puVar6;
          if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar1) {
            puVar7 = (undefined *)(ulong)(1 < *(ulong *)(uVar10 + 0x18));
            FUN_102971a28(puVar7,uVar1 + 1,1,puVar6);
            uVar10 = (ulong)puVar7 & 0xffffffffffffff8;
          }
          *(ulong *)(uVar10 + 0x10) = uVar1 + 1;
          *(undefined **)(uVar10 + uVar1 * 8 + 0x20) = puVar11;
        }
      }
      lVar13 = lVar13 + 1;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    func_0x000107c6142c(param_1);
  }
  if ((ulong)puVar7 >> 0x3e == 0) {
    puVar11 = *(undefined **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar11 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar7) {
      puVar11 = puVar7;
    }
    func_0x000107c60480();
  }
  if (puVar11 == (undefined *)0x0) {
    func_0x000107c6142c(puVar7);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_102971d88(0,(ulong)puVar11 & ((long)puVar11 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)puVar11 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x102971940);
      (*pcVar4)();
    }
    puVar5 = (undefined *)0x0;
    do {
      puVar6 = puStack_68;
      if (((ulong)puVar7 & 0xc000000000000001) == 0) {
        puVar14 = *(undefined **)(puVar7 + (long)puVar5 * 8 + 0x20);
        func_0x000107c6157c(puVar14);
      }
      else {
        puVar14 = puVar5;
        FUN_102971ef4(puVar5,puVar7);
      }
      uVar8 = 0;
      func_0x0001011eb06c(0);
      pcVar4 = FUN_102971940;
      func_0x0001000bfde0(FUN_102971940,0,uVar8);
      pcVar9 = pcVar4;
      func_0x0001004575f0();
      func_0x000107c61574(puVar14);
      func_0x000107c61574(pcVar4);
      uVar1 = *(ulong *)(puVar6 + 0x10);
      puStack_68 = puVar6;
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar1) {
        FUN_102971d88(1 < *(ulong *)(puVar6 + 0x18),uVar1 + 1,1);
      }
      puVar6 = puStack_68;
      puVar5 = puVar5 + 1;
      *(ulong *)(puStack_68 + 0x10) = uVar1 + 1;
      *(code **)(puStack_68 + uVar1 * 8 + 0x20) = pcVar9;
    } while (puVar11 != puVar5);
    func_0x000107c6142c(puVar7);
  }
  return puVar6;
}



/* Entry: 102971940; end: 102971983;  */

void FUN_102971940(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0x112d6cc18;
  func_0x0001000285a8(0x112d6cc18,&UNK_10d92f810);
  func_0x000107c5fc48(uVar2,uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 102971984; end: 1029719e3; -[_TtC40FriendProfileSectionPluginImplementation34FriendProfileSectionPluginProvider plugins] */

void FUN_102971984(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10297168c();
  func_0x000107c61170(param_1);
  uVar2 = 0x112d5b0a0;
  func_0x0001000285a8(0x112d5b0a0,&UNK_10d97aac0);
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1029719e4; end: 102971a17;  */

void FUN_1029719e4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102971a18; end: 102971a27; -[_TtC40FriendProfileSectionPluginImplementation34FriendProfileSectionPluginProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102971a18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ed0378));
  return;
}



/* Entry: 102971a28; end: 102971b4f;  */

ulong FUN_102971a28(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102971b50);
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
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_102971b50(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102971b4c);
      (*pcVar1)();
    }
    FUN_102971bf0(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 102971b50; end: 102971bef;  */

undefined * FUN_102971b50(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    puVar2 = (undefined *)0x112ecfd08;
    FUN_102971d14(0x112ecfd08,&UNK_10daf65f0,0x112ed03a8,&UNK_10daf8250);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(long *)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 102971bf0; end: 102971d13;  */

long FUN_102971bf0(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102971d10);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102971d14);
        (*pcVar3)();
      }
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        uVar4 = 0x112ecfd08;
        func_0x0001000285a8(0x112ecfd08,&UNK_10daf65f0);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0x112ecfd08;
      func_0x0001000285a8(0x112ecfd08,&UNK_10daf65f0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102971d0c);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 102971d14; end: 102971d87;  */

/* WARNING: Possible PIC construction at 0x000102971d54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102971d58) */
/* WARNING: Removing unreachable block (ram,0x000102971d5c) */

void FUN_102971d14(ulong *param_1,long *param_2,ulong *param_3,long *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  ulong *puVar3;
  ulong uVar4;
  long *plVar5;
  long *unaff_x19;
  ulong *unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  iVar2 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  puVar3 = param_3;
  plVar5 = param_4;
  if (iVar2 != 0) {
    unaff_x30 = 0x102971d58;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    puVar3 = param_1;
    plVar5 = param_2;
    unaff_x19 = param_4;
    unaff_x20 = param_3;
    unaff_x29 = puVar1;
  }
  *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (*puVar3 == 0 || (*puVar3 & 1) != 0) {
    uVar4 = (long)plVar5 + (long)(int)*plVar5;
    func_0x000107c61518(uVar4,*plVar5 >> 0x20,0,0);
    *puVar3 = uVar4;
  }
  return;
}



/* Entry: 102971d88; end: 102971da3;  */

void FUN_102971d88(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_102971da4();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 102971da4; end: 102971ef3;  */

undefined * FUN_102971da4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102971ef4);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x112d5b0a0;
    FUN_102971d14(0x112d5b0a0,&UNK_10d97aac0,0x112d5b228,&UNK_10d9223b0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112d5b0a0;
    func_0x0001000285a8(0x112d5b0a0,&UNK_10d97aac0);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 102971ef4; end: 1029720a7;  */

ulong FUN_102971ef4(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102971fdc);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102971fe0);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar4 = 0x112ecfd08;
    func_0x0001000285a8(0x112ecfd08,&UNK_10daf65f0);
    uVar3 = param_1;
    func_0x000107c61480(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    func_0x000107c60488(param_1,uVar3);
    uVar4 = 0x112ecfd08;
    func_0x0001000285a8(0x112ecfd08,&UNK_10daf65f0);
    uVar3 = param_1;
    func_0x000107c61480(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd00000000000002c,0x800000010f0d0200);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1029720a8);
  (*pcVar2)();
}



/* Entry: 1029720a8; end: 1029720b7;  */

undefined1  [16] FUN_1029720a8(void)

{
  return ZEXT816(0x110574198);
}


