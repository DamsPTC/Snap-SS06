/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10298afa4; end: 10298afb3; -[_TtC44SpotlightPayoutsProfileSectionPluginProvider42SpotlightPayoutsProfileSectionDataProvider numberOfItemsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10298afa4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112ed16b0);
}



/* Entry: 10298afb4; end: 10298afbb; -[_TtC44SpotlightPayoutsProfileSectionPluginProvider42SpotlightPayoutsProfileSectionDataProvider dataLoadingStatus] */

undefined8 FUN_10298afb4(void)

{
  return 2;
}



/* Entry: 10298afbc; end: 10298b02b; -[_TtC44SpotlightPayoutsProfileSectionPluginProvider42SpotlightPayoutsProfileSectionDataProvider containerCellViewModelsForIndexPaths:] */

void FUN_10298afbc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x000107c61174();
  lVar1 = param_1;
  FUN_10298b650();
  func_0x000107c61170(param_1);
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    uVar2 = 0;
    func_0x00010298bb28(0,0x112d6fa28,&PTR_PTR_1126aea98);
    lVar3 = lVar1;
    func_0x000107c5fc48(lVar1,uVar2);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10298b02c; end: 10298b323; -[_TtC44SpotlightPayoutsProfileSectionPluginProvider42SpotlightPayoutsProfileSectionDataProvider contentCellClassesByReuseIdentifier] */

void FUN_10298b02c(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = 0x112d71de8;
  func_0x0001000285a8(0x112d71de8,&UNK_10d932900);
  func_0x000107c61534();
  *(undefined8 *)(lVar1 + 0x18) = 2;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  *(undefined8 *)(lVar1 + 0x20) = 0xd00000000000002b;
  *(undefined8 *)(lVar1 + 0x28) = 0x800000010f0d1350;
  uVar2 = 0;
  func_0x00010298bb28(0,0x112ed1708,&PTR_PTR_1126abba8);
  *(undefined8 *)(lVar1 + 0x30) = uVar2;
  lVar3 = lVar1;
  func_0x00010124b9b8(lVar1);
  func_0x000107c61588(lVar1);
  func_0x00010298bae8((undefined8 *)(lVar1 + 0x20),0x112d71df0,&UNK_10d932bc0);
  uVar2 = 0x112d6cac8;
  func_0x0001000285a8(0x112d6cac8,&UNK_10d9312f0);
  lVar1 = lVar3;
  func_0x000107c5f9dc(lVar3,PTR___sSSN_11034da80,uVar2,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10298b324; end: 10298b393; -[_TtC44SpotlightPayoutsProfileSectionPluginProvider42SpotlightPayoutsProfileSectionDataProvider configurationBlocksByReuseIdentifier] */

void FUN_10298b324(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x00010298b12c();
  func_0x000107c61170(param_1);
  uVar2 = 0x112ed16e8;
  func_0x0001000285a8(0x112ed16e8,&UNK_10daf8590);
  uVar3 = uVar1;
  func_0x000107c5f9dc(uVar1,PTR___sSSN_11034da80,uVar2,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10298b394; end: 10298b3bf; +[_TtC44SpotlightPayoutsProfileSectionPluginProvider42SpotlightPayoutsProfileSectionDataProvider announcerIdentifier] */

void FUN_10298b394(void)

{
  func_0x000107c5fadc(0xd000000000000040,0x800000010f0d1380);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10298b3c0; end: 10298b3c3; -[_TtC44SpotlightPayoutsProfileSectionPluginProvider42SpotlightPayoutsProfileSectionDataProvider addListener:] */

void FUN_10298b3c0(void)

{
  return;
}



/* Entry: 10298b3c4; end: 10298b3c7; -[_TtC44SpotlightPayoutsProfileSectionPluginProvider42SpotlightPayoutsProfileSectionDataProvider removeListener:] */

void FUN_10298b3c4(void)

{
  return;
}



/* Entry: 10298b3c8; end: 10298b503;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10298b3c8(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if (param_1 != 0) {
      uVar4 = *(undefined8 *)(param_2 + _DAT_112ed16b8);
      *(long *)(param_2 + _DAT_112ed16b8) = param_1;
      func_0x000107c61174();
      iVar1 = (int)param_1;
      func_0x000107c61174();
      func_0x000107c61170(uVar4);
      func_0x000107c49ca4();
      if (iVar1 != 0) {
        *(undefined1 *)(param_2 + _DAT_112ed16b0) = 1;
        lVar2 = param_2 + _DAT_112ed1670;
        func_0x000107c61618();
        if (lVar2 != 0) {
          lVar3 = param_2;
          func_0x000107c61174(param_2);
          func_0x000107c51b5c(lVar2);
          func_0x000107c615e8(lVar2);
          func_0x000107c61170(lVar3);
        }
      }
      func_0x000107c61170(param_2);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 10298b504; end: 10298b563; -[_TtC44SpotlightPayoutsProfileSectionPluginProvider42SpotlightPayoutsProfileSectionDataProvider init] */

void FUN_10298b504(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpotlightPayoutsProfileSectionPluginProvider.SpotlightPayoutsProfileSectionDataProvider"
                      ,0x57,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10298b530);
  (*pcVar1)();
}



/* Entry: 10298b564; end: 10298b60b; -[_TtC44SpotlightPayoutsProfileSectionPluginProvider42SpotlightPayoutsProfileSectionDataProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010298b5d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010298b5d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10298b564(long param_1)

{
  func_0x0001012b7b48(param_1 + _DAT_112ed1670);
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ed1678));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ed1680));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ed1688));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ed1690));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ed1698));
  return;
}



/* Entry: 10298b60c; end: 10298b62b;  */

void FUN_10298b60c(void)

{
  func_0x000107c61168(&PTR_PTR_1128756e0);
  return;
}



/* Entry: 10298b62c; end: 10298b64f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10298b62c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    if (param_1 != 0) {
      puVar2 = PTR_PTR_1126abba8;
      func_0x000107c61168(PTR_PTR_1126abba8);
      lVar3 = param_1;
      func_0x000107c6148c(param_1,puVar2);
      if (lVar3 != 0) {
        uVar4 = *(undefined8 *)(lVar1 + _DAT_112ed1698);
        func_0x000107c61174(param_1);
        func_0x000107c5c734(uVar4);
        func_0x000107c61180();
        func_0x000107c56cf0(lVar3);
        func_0x000107c615e8(uVar4);
        func_0x000107c5340c(lVar3);
        func_0x000107c61170(lVar1);
      }
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 10298b650; end: 10298b9eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10298b650(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined *puVar10;
  undefined1 auStack_74 [20];
  
  puVar2 = PTR_PTR_1126b02a8;
  func_0x000107c610f8(PTR_PTR_1126b02a8);
  uVar9 = 0x800000010f0d1260;
  uVar3 = 0xd000000000000027;
  func_0x000107c5fadc(0xd000000000000027,0x800000010f0d1260);
  func_0x000107c46d50(puVar2);
  func_0x000107c61170(uVar3);
  lVar8 = _DAT_112ed16b8;
  puVar4 = *(undefined **)(unaff_x20 + _DAT_112ed16b8);
  if (puVar4 == (undefined *)0x0) goto LAB_10298b720;
  func_0x000107c4d548();
  if ((int)puVar4 != 0) {
    func_0x00010604c6b0();
    func_0x000107c61180();
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10298b9ec);
      (*pcVar1)();
    }
    puVar10 = puVar4;
    func_0x000107c5faec();
    goto LAB_10298b878;
  }
  puVar5 = *(undefined **)(unaff_x20 + lVar8);
  if (puVar5 == (undefined *)0x0) {
LAB_10298b720:
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ed0();
  }
  else {
    func_0x000107c5cce0();
    func_0x000107c61180();
    if (puVar5 == (undefined *)0x0) goto LAB_10298b720;
  }
  func_0x000107c413fc(auStack_74,puVar5);
  puVar6 = PTR__OBJC_CLASS___NSDecimalNumber_1126be480;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSDecimalNumber_1126be480);
  func_0x000107c463fc();
  puVar7 = PTR__OBJC_CLASS___NSDecimalNumber_1126be480;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSDecimalNumber_1126be480);
  uVar3 = 0x303031;
  func_0x000107c5fadc(0x303031,0xe300000000000000);
  func_0x000107c48af4(puVar7);
  func_0x000107c61170(uVar3);
  puVar4 = puVar6;
  func_0x000107c413f8(puVar6);
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar7);
  puVar6 = PTR__OBJC_CLASS___NSNumberFormatter_1126b1a70;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c56bbc();
  uVar3 = 0x445355;
  uVar9 = 0xe300000000000000;
  func_0x000107c5fadc(0x445355,0xe300000000000000);
  func_0x000107c53c64(puVar6);
  func_0x000107c61170(uVar3);
  puVar7 = puVar6;
  func_0x000107c5c1c0();
  func_0x000107c61180();
  if (puVar7 == (undefined *)0x0) {
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar6);
    puVar10 = (undefined *)0x0;
    uVar9 = 0xe000000000000000;
  }
  else {
    puVar10 = puVar7;
    func_0x000107c5faec();
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar7);
  }
LAB_10298b878:
  func_0x000107c61170(puVar4);
  if ((*(long *)(unaff_x20 + lVar8) != 0) &&
     (func_0x000107c449c0(), *(long *)(unaff_x20 + lVar8) != 0)) {
    func_0x000107c4d548();
  }
  puVar4 = PTR_PTR_1126c74e0;
  func_0x000107c610f8(PTR_PTR_1126c74e0);
  func_0x000107c61174(puVar2);
  func_0x000107c5fadc(puVar10,uVar9);
  func_0x000107c6142c(uVar9);
  func_0x000107c48da4(puVar4);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar10);
  puVar5 = PTR_PTR_1126aea98;
  func_0x000107c610f8();
  func_0x000107c61174(puVar4);
  lVar8 = -0x2fffffffffffffd5;
  func_0x000107c5fadc(0xd00000000000002b,0x800000010f0d1350);
  func_0x000107c45d60();
  func_0x000107c61170(puVar4);
  func_0x000107c61170();
  if (puVar5 == (undefined *)0x0) {
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar2);
  }
  else {
    func_0x0001012c5c28();
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar4);
    func_0x000107c613fc(lVar8,((ulong)*(uint *)(lVar8 + 0x30) + 7 & 0x1fffffff8) + 8,
                        *(ushort *)(lVar8 + 0x34) | 7);
    *(undefined8 *)(lVar8 + 0x18) = 3;
    *(undefined8 *)(lVar8 + 0x10) = 1;
    *(undefined **)(lVar8 + 0x20) = puVar5;
  }
  return;
}



/* Entry: 10298b9ec; end: 10298bae7;  */

undefined * FUN_10298b9ec(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112ed1700,&UNK_10dc001d0);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c60bc4(uVar9);
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10298bae4);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10298bae8);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 10298bae8; end: 10298bb67;  */

undefined8 FUN_10298bae8(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10298bb68; end: 10298bb87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10298bb68(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    if (param_1 != 0) {
      uVar5 = *(undefined8 *)(lVar2 + _DAT_112ed16b8);
      *(long *)(lVar2 + _DAT_112ed16b8) = param_1;
      func_0x000107c61174();
      iVar1 = (int)param_1;
      func_0x000107c61174();
      func_0x000107c61170(uVar5);
      func_0x000107c49ca4();
      if (iVar1 != 0) {
        *(undefined1 *)(lVar2 + _DAT_112ed16b0) = 1;
        lVar3 = lVar2 + _DAT_112ed1670;
        func_0x000107c61618();
        if (lVar3 != 0) {
          lVar4 = lVar2;
          func_0x000107c61174(lVar2);
          func_0x000107c51b5c(lVar3);
          func_0x000107c615e8(lVar3);
          func_0x000107c61170(lVar4);
        }
      }
      func_0x000107c61170(lVar2);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 10298bb88; end: 10298bbd3;  */

void FUN_10298bb88(undefined8 param_1)

{
  func_0x0001000285a8(0x112ecfc30,&UNK_10daf6370);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10298bc94,param_1);
  return;
}



/* Entry: 10298bbd4; end: 10298bc93;  */

void FUN_10298bbd4(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lStack_48;
  
  lVar1 = 0x112ecfd08;
  func_0x0001000285a8(0x112ecfd08,&UNK_10daf65f0);
  FUN_10296aaf0();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 3;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  lVar2 = lVar1;
  func_0x000100083b20(&lStack_48);
  FUN_10298a644();
  func_0x000107c61574(lStack_48);
  *(long *)(lVar1 + 0x20) = lVar2;
  plVar3 = &lStack_48;
  lStack_48 = lVar1;
  func_0x000100854cb0();
  func_0x000107c61574(lVar1);
  *param_1 = (long)plVar3;
  return;
}



/* Entry: 10298bc94; end: 10298bcab;  */

void FUN_10298bc94(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lStack_48;
  
  lVar1 = 0x112ecfd08;
  func_0x0001000285a8(0x112ecfd08,&UNK_10daf65f0);
  FUN_10296aaf0();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 3;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  lVar2 = lVar1;
  func_0x000100083b20(&lStack_48);
  FUN_10298a644();
  func_0x000107c61574(lStack_48);
  *(long *)(lVar1 + 0x20) = lVar2;
  plVar3 = &lStack_48;
  lStack_48 = lVar1;
  func_0x000100854cb0();
  func_0x000107c61574(lVar1);
  *param_1 = (long)plVar3;
  return;
}



/* Entry: 10298bcac; end: 10298bf6b;  */

void FUN_10298bcac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ecfc30,&UNK_10daf6370);
  puVar1 = &UNK_110576c80;
  func_0x000107c613fc(&UNK_110576c80,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  *(undefined8 *)(puVar1 + 0x30) = param_4;
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(0x10298bd68,puVar1);
  return;
}



/* Entry: 10298bf6c; end: 10298bf7b;  */

undefined1  [16] FUN_10298bf6c(void)

{
  return ZEXT816(0x110576ca8);
}



/* Entry: 10298bf7c; end: 10298bfe7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10298bf7c(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  func_0x00010038b2cc();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112ed1718) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 10298bfe8; end: 10298bfef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10298bfe8(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  func_0x00010038b2cc();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112ed1718) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 10298bff0; end: 10298c0a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10298bff0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ed1718) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10298c0a8; end: 10298c103; -[_TtC28ProfileSectionPluginRegistry35ProfileSectionPluginFactoryServices build:] */

void FUN_10298c0a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  func_0x00010298c03c(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10298c104; end: 10298c163; -[_TtC28ProfileSectionPluginRegistry35ProfileSectionPluginFactoryServices init] */

void FUN_10298c104(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ProfileSectionPluginRegistry.ProfileSectionPluginFactoryServices",0x40,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10298c130);
  (*pcVar1)();
}



/* Entry: 10298c164; end: 10298c2e7; -[_TtC28ProfileSectionPluginRegistry35ProfileSectionPluginFactoryServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10298c164(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ed1718));
  return;
}



/* Entry: 10298c2e8; end: 10298c313;  */

void FUN_10298c2e8(void)

{
  func_0x0001000285a8(0x112ed1780,&UNK_10daf86c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_initStaticObject_11034f440)();
  return;
}



/* Entry: 10298c314; end: 10298c3d7;  */

void FUN_10298c314(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112ed1780;
  func_0x0001000285a8(0x112ed1780,&UNK_10daf86c0);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 10298c3d8; end: 10298c3db;  */

void FUN_10298c3d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ed17c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daf86d0;
  func_0x000107c61520(&UNK_10daf86d0,&UNK_110576e78);
  puRam0000000112ed17c8 = puVar1;
  return;
}



/* Entry: 10298c3dc; end: 10298c447;  */

void FUN_10298c3dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ed17c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daf86d0;
  func_0x000107c61520(&UNK_10daf86d0,&UNK_110576e78);
  puRam0000000112ed17c8 = puVar1;
  return;
}



/* Entry: 10298c448; end: 10298c44b;  */

void FUN_10298c448(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ed17e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daf8778;
  func_0x000107c61520(&UNK_10daf8778,&UNK_110576dd8);
  puRam0000000112ed17e0 = puVar1;
  return;
}



/* Entry: 10298c44c; end: 10298c4b7;  */

void FUN_10298c44c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ed17e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daf8778;
  func_0x000107c61520(&UNK_10daf8778,&UNK_110576dd8);
  puRam0000000112ed17e0 = puVar1;
  return;
}



/* Entry: 10298c4b8; end: 10298c53b;  */

void FUN_10298c4b8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 10298c53c; end: 10298c53f;  */

void FUN_10298c53c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ed17f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daf87e8;
  func_0x000107c61520(&UNK_10daf87e8,&UNK_110576dd8);
  puRam0000000112ed17f8 = puVar1;
  return;
}



/* Entry: 10298c540; end: 10298c57f;  */

void FUN_10298c540(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ed17f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daf87e8;
  func_0x000107c61520(&UNK_10daf87e8,&UNK_110576dd8);
  puRam0000000112ed17f8 = puVar1;
  return;
}



/* Entry: 10298c580; end: 10298c583;  */

void FUN_10298c580(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ed1800 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daf87a0;
  func_0x000107c61520(&UNK_10daf87a0,&UNK_110576dd8);
  puRam0000000112ed1800 = puVar1;
  return;
}



/* Entry: 10298c584; end: 10298c5c3;  */

void FUN_10298c584(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ed1800 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daf87a0;
  func_0x000107c61520(&UNK_10daf87a0,&UNK_110576dd8);
  puRam0000000112ed1800 = puVar1;
  return;
}



/* Entry: 10298c5c4; end: 10298c747;  */

int FUN_10298c5c4(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf5 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 10) {
      iVar2 = 4;
    }
    if (param_2 + 10 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10298c640;
        goto LAB_10298c624;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10298c624:
      return ((uint)*param_1 | uVar1 << 8) - 10;
    }
  }
LAB_10298c640:
  iVar2 = *param_1 - 0xb;
  if (*param_1 < 0xb) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10298c748; end: 10298c89f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10298c748(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined1 auStack_b8 [8];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112ed1830;
  func_0x000107c61614(unaff_x20 + _DAT_112ed1830,0);
  lVar3 = _DAT_112ed1838;
  func_0x000107c61614(unaff_x20 + _DAT_112ed1838,0);
  lVar4 = _DAT_112ed1840;
  func_0x000107c61614(unaff_x20 + _DAT_112ed1840,0);
  func_0x000107c61428(unaff_x20 + lVar2,auStack_78,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_1);
  func_0x000107c61428(unaff_x20 + lVar3,auStack_90,1,0);
  func_0x000107c61604(unaff_x20 + lVar3,param_2);
  func_0x000107c61428(unaff_x20 + lVar4,auStack_a8,1,0);
  func_0x000107c61604(unaff_x20 + lVar4,param_3);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ed1848);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  *(undefined1 *)(unaff_x20 + _DAT_112ed1850) = param_6;
  puVar5 = auStack_b8;
  func_0x000107c61154(puVar5,PTR_s_init_1125d9248);
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_2);
  func_0x000107c615e8(param_3);
  return puVar5;
}



/* Entry: 10298c8a0; end: 10298c947; -[_TtC28ProfileSectionPluginRegistry25ProfileSectionPluginScope initWithPageActionHandler:displayContentDelegate:deckContainerFactory:profileSessionId:hideRecursiveOptions:] */

undefined8
FUN_10298c8a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_6);
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_5);
  uVar1 = param_3;
  FUN_10298ca04(param_3,param_4,param_5,param_6,param_2,param_7);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c615e8(param_5);
  return uVar1;
}



/* Entry: 10298c948; end: 10298c9a7; -[_TtC28ProfileSectionPluginRegistry25ProfileSectionPluginScope init] */

void FUN_10298c948(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ProfileSectionPluginRegistry.ProfileSectionPluginScope",0x36,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10298c974);
  (*pcVar1)();
}



/* Entry: 10298c9a8; end: 10298ca03; -[_TtC28ProfileSectionPluginRegistry25ProfileSectionPluginScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10298c9a8(long param_1)

{
  func_0x000100d14168(param_1 + _DAT_112ed1830);
  func_0x000100d14168(param_1 + _DAT_112ed1838);
  func_0x000100d14168(param_1 + _DAT_112ed1840);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112ed1848 + 8))
  ;
  return;
}



/* Entry: 10298ca04; end: 10298cb37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10298ca04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  func_0x000107c614f0();
  lVar2 = _DAT_112ed1830;
  func_0x000107c61614(unaff_x20 + _DAT_112ed1830,0);
  lVar3 = _DAT_112ed1838;
  func_0x000107c61614(unaff_x20 + _DAT_112ed1838,0);
  lVar4 = _DAT_112ed1840;
  func_0x000107c61614(unaff_x20 + _DAT_112ed1840,0);
  func_0x000107c61428(unaff_x20 + lVar2,auStack_78,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_1);
  func_0x000107c61428(unaff_x20 + lVar3,auStack_90,1,0);
  func_0x000107c61604(unaff_x20 + lVar3,param_2);
  func_0x000107c61428(unaff_x20 + lVar4,auStack_a8,1,0);
  func_0x000107c61604(unaff_x20 + lVar4,param_3);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ed1848);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  *(undefined1 *)(unaff_x20 + _DAT_112ed1850) = param_6;
  func_0x000107c61154(&stack0xffffffffffffff48,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10298cb38; end: 10298cc77; +[SCSpectaclesDeviceCellViewModel makeForSettingsWithDevices:appStatusProvider:assetResources:activatingDevice:flightStatusMap:flightModeMap:flightErrorMap:] */

void FUN_10298cb38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = 0x112e60bf8;
  func_0x0001000285a8(0x112e60bf8,&UNK_10da68ed8);
  func_0x000107c5fc54(param_3,uVar1);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c615f0(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  uVar1 = param_3;
  FUN_10298d180(param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c615e8(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c6142c(param_3);
  uVar2 = 0;
  FUN_10298e104(0,0x112ed1890,&PTR_PTR_1126b6a58);
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10298cc78; end: 10298cd07; +[SCSpectaclesDeviceCellViewModel makeForStatusBarWithDevice:appStatusProvider:assetResources:flightStatus:flightMode:] */

void FUN_10298cc78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_5);
  uVar1 = param_3;
  FUN_10298dc54(param_3,param_4,param_5,param_6,param_7);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10298cd08; end: 10298cdef; +[SCSpectaclesDeviceCellViewModel shouldShowStatusBarForDevice:] */

uint FUN_10298cd08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  uVar1 = param_3;
  FUN_10298dbd4(param_3);
  func_0x000107c615e8(param_3);
  return (uint)uVar1 & 1;
}



/* Entry: 10298cdf0; end: 10298ce1f;  */

bool FUN_10298cdf0(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10298ce20; end: 10298ce3b;  */

void FUN_10298ce20(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10298ce3c();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 10298ce3c; end: 10298cf6f;  */

undefined * FUN_10298ce3c(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10298cf70);
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
    puVar3 = param_1;
    FUN_10298cf70();
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
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_10298e104(0,0x112ed1890,&PTR_PTR_1126b6a58);
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



/* Entry: 10298cf70; end: 10298cfdb;  */

void FUN_10298cf70(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    FUN_10298e104(0,0x112ed1890,&PTR_PTR_1126b6a58);
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112ed1898;
  plVar5 = (long *)&UNK_10daf8948;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 10298cfdc; end: 10298d17f;  */

ulong FUN_10298cfdc(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10298d0b4);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10298d0b8);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61494();
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
    uVar3 = param_1;
    func_0x000107c61494();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd000000000000012,0x800000010f0d1460);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10298d180);
  (*pcVar2)();
}



/* Entry: 10298d180; end: 10298dbd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_10298d180(undefined8 *****param_1,undefined8 *****param_2,long param_3,long param_4,long param_5
             ,long param_6,long param_7)

{
  ulong uVar1;
  long lVar2;
  undefined8 ****ppppuVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 *****pppppuVar6;
  undefined8 *****pppppuVar7;
  undefined8 ****ppppuVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *****pppppuVar12;
  undefined8 *****pppppuVar13;
  undefined8 *****pppppuVar14;
  undefined8 *****pppppuVar15;
  undefined8 *****pppppuVar16;
  undefined *puVar17;
  undefined8 *****pppppuVar18;
  undefined8 *****pppppuVar19;
  long lVar20;
  undefined8 *****pppppuVar21;
  undefined8 *****pppppuVar22;
  undefined8 *****pppppuVar23;
  undefined8 *****pppppuVar24;
  undefined8 *****pppppuVar25;
  undefined8 ****ppppuStack_138;
  undefined8 ****ppppuStack_118;
  undefined8 ****ppppuStack_d0;
  undefined8 ****ppppuStack_c8;
  undefined8 ****ppppuStack_c0;
  undefined8 ****ppppuStack_b8;
  undefined8 ****ppppuStack_b0;
  undefined8 ****ppppuStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 ****ppppuStack_90;
  undefined8 ****ppppuStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined *puStack_70;
  
  if ((ulong)param_1 >> 0x3e == 0) {
    pppppuVar21 = (undefined8 *****)((undefined8 *****)((ulong)param_1 & 0xffffffffffffff8))[2];
  }
  else {
    pppppuVar21 = (undefined8 *****)((ulong)param_1 & 0xffffffffffffff8);
    if (((ulong)param_1 & 0x8000000000000000) != 0) {
      pppppuVar21 = param_1;
    }
    func_0x000107c60480();
  }
  puStack_70 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (pppppuVar21 != (undefined8 *****)0x0) {
    pppppuVar13 = (undefined8 *****)
                  ((ulong)pppppuVar21 & ((long)pppppuVar21 >> 0x3f ^ 0xffffffffffffffffU));
    FUN_10298ce20(0,pppppuVar13,0);
    puVar17 = puStack_70;
    if ((long)pppppuVar21 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10298dbd0);
      (*pcVar4)();
    }
    pppppuVar15 = (undefined8 *****)((ulong)param_1 & 0xffffffffffffff8);
    if ((ulong)param_1 >> 0x3e == 0) {
      ppppuStack_138 = pppppuVar15[2];
    }
    else {
      ppppuStack_138 = pppppuVar15;
      if (((ulong)param_1 & 0x8000000000000000) != 0) {
        ppppuStack_138 = param_1;
      }
      func_0x000107c60480();
    }
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168();
    pppppuVar6 = (undefined8 *****)PTR_PTR_1126b68a0;
    func_0x000107c61168();
    lVar2 = _DAT_112ed18a0;
    pppppuVar7 = (undefined8 *****)0x0;
    do {
      puVar10 = PTR___sSSN_11034da80;
      if (pppppuVar21 == pppppuVar7) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10298dbb4);
        (*pcVar4)();
      }
      if (((ulong)param_1 & 0xc000000000000001) == 0) {
        if ((long)pppppuVar15[2] <= (long)pppppuVar7) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10298dbb8);
          (*pcVar4)();
        }
        pppppuVar22 = (undefined8 *****)param_1[(long)((long)pppppuVar7 + 4)];
        func_0x000107c615f0(pppppuVar22);
        if ((undefined8 *****)ppppuStack_138 == (undefined8 *****)0x0) goto LAB_10298d2e4;
        ppppuVar8 = param_1[4];
        func_0x000107c615f0(ppppuVar8);
      }
      else {
        pppppuVar22 = pppppuVar7;
        pppppuVar13 = param_1;
        FUN_10298cfdc();
        if ((undefined8 *****)ppppuStack_138 == (undefined8 *****)0x0) {
LAB_10298d2e4:
          ppppuVar8 = (undefined8 ****)0x0;
        }
        else {
          ppppuVar8 = (undefined8 ****)0x0;
          pppppuVar13 = param_1;
          FUN_10298cfdc(0);
        }
      }
      pppppuVar14 = pppppuVar22;
      func_0x000107c49cec();
      func_0x000107c615e8(ppppuVar8);
      if (param_4 == 0) {
        if ((int)pppppuVar14 == 0) goto LAB_10298d344;
LAB_10298d310:
        pppppuVar18 = param_2;
        func_0x000107c42b94();
        func_0x000107c61180();
        ppppuStack_118 = pppppuVar18;
        func_0x000107c5faec();
        pppppuVar14 = pppppuVar13;
        func_0x000107c61170(pppppuVar18);
        ppppuStack_d0 = pppppuVar13;
      }
      else {
        if (((ulong)pppppuVar14 & 1) != 0) goto LAB_10298d310;
LAB_10298d344:
        ppppuStack_118 = (undefined8 *****)0x0;
        ppppuStack_d0 = (undefined8 *****)0x0;
        pppppuVar14 = pppppuVar13;
      }
      pppppuVar13 = pppppuVar22;
      func_0x000107c4a670();
      if (((ulong)pppppuVar13 & 1) == 0) {
        pppppuVar13 = pppppuVar22;
        func_0x000107c40220();
        func_0x000107c61180();
        if (pppppuVar13 != (undefined8 *****)0x0) {
          func_0x000107c40208();
          func_0x000107c615e8(pppppuVar13);
        }
      }
      func_0x000107c4a670();
      pppppuVar13 = pppppuVar22;
      func_0x000107c51f44();
      func_0x000107c61180();
      if (pppppuVar13 == (undefined8 *****)0x0) {
        pppppuVar18 = (undefined8 *****)0x0;
        pppppuVar13 = (undefined8 *****)0x0;
      }
      else {
        pppppuVar23 = pppppuVar13;
        func_0x000107c5faec();
        func_0x000107c61170(pppppuVar13);
        ppppuStack_b0 = pppppuVar23;
        ppppuStack_a8 = pppppuVar14;
        func_0x000107c61434(pppppuVar14);
        pppppuVar13 = &ppppuStack_b0;
        func_0x000107c6061c(pppppuVar13,puVar10);
        lVar20 = param_5;
        func_0x000107c3ac74();
        func_0x000107c61180();
        func_0x000107c615e8(pppppuVar13);
        if (lVar20 == 0) {
          ppppuStack_a8 = (undefined8 *****)0x0;
          ppppuStack_b0 = (undefined8 *****)0x0;
          lStack_98 = 0;
          uStack_a0 = 0;
        }
        else {
          func_0x000107c60234(&ppppuStack_b0,lVar20);
          func_0x000107c615e8(lVar20);
        }
        ppppuStack_88 = ppppuStack_a8;
        ppppuStack_90 = ppppuStack_b0;
        lStack_78 = lStack_98;
        uStack_80 = uStack_a0;
        if (lStack_98 == 0) {
          func_0x00010006e7f4(&ppppuStack_90);
LAB_10298d4ac:
          pppppuVar13 = (undefined8 *****)0x0;
        }
        else {
          uVar9 = 0;
          FUN_10298e104(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
          pppppuVar13 = &ppppuStack_c0;
          func_0x000107c6147c(pppppuVar13,&ppppuStack_90,PTR___sypN_11034f1a8 + 8,uVar9,6);
          ppppuVar8 = ppppuStack_c0;
          if (((ulong)pppppuVar13 & 1) == 0) goto LAB_10298d4ac;
          pppppuVar13 = (undefined8 *****)ppppuStack_c0;
          func_0x000107c5d388();
          func_0x000107c61170(ppppuVar8);
        }
        ppppuStack_b0 = pppppuVar23;
        ppppuStack_a8 = pppppuVar14;
        func_0x000107c61434(pppppuVar14);
        pppppuVar18 = &ppppuStack_b0;
        func_0x000107c6061c(pppppuVar18,puVar10);
        lVar20 = param_6;
        func_0x000107c3ac74();
        func_0x000107c61180();
        func_0x000107c615e8(pppppuVar18);
        if (lVar20 == 0) {
          ppppuStack_a8 = (undefined8 *****)0x0;
          ppppuStack_b0 = (undefined8 *****)0x0;
          lStack_98 = 0;
          uStack_a0 = 0;
        }
        else {
          func_0x000107c60234(&ppppuStack_b0,lVar20);
          func_0x000107c615e8(lVar20);
        }
        ppppuStack_88 = ppppuStack_a8;
        ppppuStack_90 = ppppuStack_b0;
        lStack_78 = lStack_98;
        uStack_80 = uStack_a0;
        if (lStack_98 == 0) {
          func_0x00010006e7f4(&ppppuStack_90);
LAB_10298d580:
          pppppuVar18 = (undefined8 *****)0x0;
        }
        else {
          uVar9 = 0;
          FUN_10298e104(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
          pppppuVar18 = &ppppuStack_c0;
          func_0x000107c6147c(pppppuVar18,&ppppuStack_90,PTR___sypN_11034f1a8 + 8,uVar9,6);
          ppppuVar8 = ppppuStack_c0;
          if (((ulong)pppppuVar18 & 1) == 0) goto LAB_10298d580;
          pppppuVar18 = (undefined8 *****)ppppuStack_c0;
          func_0x000107c5d388();
          func_0x000107c61170(ppppuVar8);
        }
        ppppuStack_b0 = pppppuVar23;
        ppppuStack_a8 = pppppuVar14;
        func_0x000107c61434(pppppuVar14);
        pppppuVar25 = &ppppuStack_b0;
        pppppuVar23 = (undefined8 *****)puVar10;
        func_0x000107c6061c(pppppuVar25);
        lVar20 = param_7;
        func_0x000107c3ac74();
        func_0x000107c61180();
        func_0x000107c615e8(pppppuVar25);
        if (lVar20 == 0) {
          func_0x000107c6142c(pppppuVar14);
          ppppuStack_a8 = (undefined8 *****)0x0;
          ppppuStack_b0 = (undefined8 *****)0x0;
          lStack_98 = 0;
          uStack_a0 = 0;
          pppppuVar14 = pppppuVar23;
        }
        else {
          func_0x000107c60234(&ppppuStack_b0,lVar20);
          func_0x000107c615e8(lVar20);
          func_0x000107c6142c(pppppuVar14);
          pppppuVar14 = pppppuVar23;
        }
        ppppuStack_88 = ppppuStack_a8;
        ppppuStack_90 = ppppuStack_b0;
        lStack_78 = lStack_98;
        uStack_80 = uStack_a0;
        if (lStack_98 == 0) {
          func_0x00010006e7f4(&ppppuStack_90);
        }
        else {
          pppppuVar23 = &ppppuStack_c0;
          pppppuVar14 = &ppppuStack_90;
          func_0x000107c6147c(pppppuVar23,pppppuVar14,PTR___sypN_11034f1a8 + 8,puVar10,6);
          ppppuVar3 = ppppuStack_b8;
          ppppuVar8 = ppppuStack_c0;
          if (((ulong)pppppuVar23 & 1) != 0) {
            uVar1 = (ulong)ppppuStack_c0 & 0xffffffffffff;
            if (((ulong)ppppuStack_b8 & 0x2000000000000000) != 0) {
              uVar1 = (ulong)ppppuStack_b8 >> 0x38 & 0xf;
            }
            if (uVar1 == 0) {
              func_0x000107c6142c(ppppuStack_b8);
            }
            else {
              func_0x000107c6142c(ppppuStack_d0);
              ppppuStack_118 = ppppuVar8;
              ppppuStack_d0 = ppppuVar3;
            }
          }
        }
      }
      pppppuVar23 = param_2;
      func_0x000107c3de78();
      puVar10 = puVar5;
      func_0x000107c5af88();
      func_0x000107c61180();
      func_0x000107c615f0(pppppuVar22);
      pppppuVar25 = pppppuVar6;
      func_0x000107c4fafc();
      puVar11 = puVar10;
      if ((int)pppppuVar25 != 0) {
        puVar11 = puVar5;
        func_0x000107c5af88();
        func_0x000107c61180();
        func_0x000107c61170(puVar10);
      }
      pppppuVar25 = pppppuVar6;
      func_0x000107c5bd3c();
      func_0x000107c61180();
      pppppuVar19 = pppppuVar22;
      func_0x000107c615e8();
      if (pppppuVar25 == (undefined8 *****)0x0) {
        pppppuVar24 = (undefined8 *****)0x0;
        ppppuStack_c8 = (undefined8 *****)0x0;
        pppppuVar25 = pppppuVar19;
        pppppuVar19 = pppppuVar14;
      }
      else {
        pppppuVar24 = pppppuVar25;
        func_0x000107c5faec(pppppuVar25);
        pppppuVar19 = pppppuVar14;
        func_0x000107c61170();
        ppppuStack_c8 = pppppuVar14;
      }
      pppppuVar14 = pppppuVar19;
      if ((pppppuVar18 != (undefined8 *****)0x0) && (pppppuVar23 == (undefined8 *****)0x3)) {
        if (pppppuVar13 == (undefined8 *****)0x2) {
          func_0x000109025720();
          func_0x000107c61180();
          if (pppppuVar25 == (undefined8 *****)0x0) {
            func_0x000107c6142c(ppppuStack_c8);
            pppppuVar24 = (undefined8 *****)0x0;
            ppppuStack_c8 = (undefined8 *****)0x0;
            pppppuVar14 = pppppuVar19;
          }
          else {
            pppppuVar24 = pppppuVar25;
            func_0x000107c5faec();
            pppppuVar14 = pppppuVar19;
            func_0x000107c61170(pppppuVar25);
            func_0x000107c6142c(ppppuStack_c8);
            ppppuStack_c8 = pppppuVar19;
          }
        }
        else if (pppppuVar13 == (undefined8 *****)0x1) {
          pppppuVar13 = (undefined8 *****)0x0;
          FUN_102991150();
          FUN_10298f854(pppppuVar18);
          pppppuVar14 = pppppuVar13;
          func_0x000107c6142c(ppppuStack_c8);
          pppppuVar24 = pppppuVar18;
          ppppuStack_c8 = pppppuVar13;
        }
      }
      pppppuVar13 = pppppuVar22;
      func_0x000107c498b0();
      func_0x000107c61180();
      pppppuVar18 = pppppuVar13;
      func_0x000107c3e70c();
      func_0x000107c61180();
      func_0x000107c615e8(pppppuVar13);
      if (pppppuVar18 == (undefined8 *****)0x0) {
        pppppuVar23 = (undefined8 *****)0x0;
      }
      else {
        pppppuVar23 = pppppuVar18;
        func_0x000107c49820();
        func_0x000107c61170(pppppuVar18);
      }
      pppppuVar13 = pppppuVar22;
      func_0x000107c40220();
      func_0x000107c61180();
      if (pppppuVar13 == (undefined8 *****)0x0) {
LAB_10298d888:
        pppppuVar25 = (undefined8 *****)0x0;
        pppppuVar18 = (undefined8 *****)0x0;
      }
      else {
        pppppuVar18 = pppppuVar13;
        func_0x000107c40208();
        func_0x000107c615e8(pppppuVar13);
        if ((int)pppppuVar18 == 0) goto LAB_10298d888;
        pppppuVar18 = (undefined8 *****)0x0;
        pppppuVar25 = (undefined8 *****)0x0;
        if (0 < (long)pppppuVar23) {
          pppppuVar13 = (undefined8 *****)PTR___sSiN_11034deb0;
          pppppuVar18 = (undefined8 *****)PTR___sSis23CustomStringConvertiblesWP_11034df00;
          ppppuStack_b0 = pppppuVar23;
          func_0x000107c6057c();
          pppppuVar14 = (undefined8 *****)0xe100000000000000;
          ppppuStack_90 = pppppuVar13;
          ppppuStack_88 = pppppuVar18;
          func_0x000107c5fb78(0x25,0xe100000000000000);
          pppppuVar18 = (undefined8 *****)ppppuStack_88;
          pppppuVar25 = (undefined8 *****)ppppuStack_90;
        }
      }
      pppppuVar13 = pppppuVar22;
      func_0x000107c51f44();
      func_0x000107c61180();
      if (pppppuVar13 == (undefined8 *****)0x0) {
        pppppuVar19 = (undefined8 *****)0x0;
        pppppuVar14 = (undefined8 *****)0xe000000000000000;
      }
      else {
        pppppuVar19 = pppppuVar13;
        func_0x000107c5faec();
        func_0x000107c61170(pppppuVar13);
      }
      func_0x000107c5fadc(pppppuVar19,pppppuVar14);
      func_0x000107c6142c(pppppuVar14);
      pppppuVar13 = pppppuVar22;
      func_0x000107c3fdb8();
      pppppuVar14 = &ppppuStack_90;
      func_0x000107c61428(param_3 + lVar2,pppppuVar14,0x20,0);
      lVar20 = *(long *)(param_3 + lVar2);
      if ((*(long *)(lVar20 + 0x10) == 0) ||
         (pppppuVar16 = pppppuVar13, FUN_10298e8ec(), ((ulong)pppppuVar14 & 1) == 0)) {
        func_0x000107c614a8(&ppppuStack_90);
        pppppuVar14 = pppppuVar13;
        FUN_10298e56c();
        if (pppppuVar14 == (undefined8 *****)0x0) {
          pppppuVar16 = (undefined8 *****)0x0;
        }
        else {
          func_0x000107c61428(param_3 + lVar2,&ppppuStack_90,0x21,0);
          pppppuVar16 = pppppuVar14;
          func_0x000107c61174(pppppuVar14);
          func_0x000107c61174();
          FUN_10298e75c(pppppuVar14,pppppuVar13);
          func_0x000107c614a8(&ppppuStack_90);
          func_0x000107c61170(pppppuVar16);
        }
      }
      else {
        pppppuVar16 = *(undefined8 ******)(*(long *)(lVar20 + 0x38) + (long)pppppuVar16 * 8);
        func_0x000107c614a8(&ppppuStack_90);
        func_0x000107c61174(pppppuVar16);
      }
      pppppuVar13 = pppppuVar22;
      func_0x000107c4d3e4();
      func_0x000107c61180();
      pppppuVar14 = pppppuVar13;
      func_0x000107c42120();
      func_0x000107c61180();
      func_0x000107c615e8(pppppuVar13);
      if (pppppuVar14 == (undefined8 *****)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10298dbd4);
        (*pcVar4)();
      }
      pppppuVar13 = (undefined8 *****)ppppuStack_c8;
      if ((undefined8 *****)ppppuStack_c8 == (undefined8 *****)0x0) {
        pppppuVar24 = (undefined8 *****)0x0;
      }
      else {
        func_0x000107c5fadc(pppppuVar24);
      }
      pppppuVar12 = pppppuVar22;
      func_0x000107c498b0();
      func_0x000107c61180();
      func_0x000107c49b38();
      func_0x000107c615e8(pppppuVar12);
      if (pppppuVar18 == (undefined8 *****)0x0) {
        pppppuVar25 = (undefined8 *****)0x0;
        if ((undefined8 *****)ppppuStack_d0 == (undefined8 *****)0x0) goto LAB_10298da64;
LAB_10298da3c:
        pppppuVar13 = (undefined8 *****)ppppuStack_d0;
        func_0x000107c5fadc();
        func_0x000107c6142c(ppppuStack_d0);
      }
      else {
        pppppuVar13 = pppppuVar18;
        func_0x000107c5fadc();
        if ((undefined8 *****)ppppuStack_d0 != (undefined8 *****)0x0) goto LAB_10298da3c;
LAB_10298da64:
        ppppuStack_118 = (undefined8 *****)0x0;
      }
      puVar10 = PTR_PTR_1126b6a58;
      func_0x000107c610f8();
      func_0x000107c485cc((double)(long)pppppuVar23);
      func_0x000107c61170(pppppuVar19);
      func_0x000107c61170(pppppuVar16);
      func_0x000107c61170(pppppuVar14);
      func_0x000107c61170(pppppuVar24);
      func_0x000107c61170(puVar11);
      func_0x000107c61170(pppppuVar25);
      func_0x000107c61170(ppppuStack_118);
      func_0x000107c615e8(pppppuVar22);
      func_0x000107c6142c(ppppuStack_c8);
      func_0x000107c6142c(pppppuVar18);
      uVar1 = *(ulong *)(puVar17 + 0x10);
      pppppuVar22 = (undefined8 *****)(uVar1 + 1);
      puStack_70 = puVar17;
      if (*(ulong *)(puVar17 + 0x18) >> 1 <= uVar1) {
        pppppuVar13 = pppppuVar22;
        FUN_10298ce20(1 < *(ulong *)(puVar17 + 0x18),pppppuVar22,1);
      }
      pppppuVar7 = (undefined8 *****)((long)pppppuVar7 + 1);
      *(undefined8 ******)(puStack_70 + 0x10) = pppppuVar22;
      *(undefined **)(puStack_70 + uVar1 * 8 + 0x20) = puVar10;
      puVar17 = puStack_70;
    } while (pppppuVar21 != pppppuVar7);
  }
  return puStack_70;
}



/* Entry: 10298dbd4; end: 10298dc53;  */

void FUN_10298dbd4(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x000107c446c0();
  func_0x000107c61180();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x000107c49ea8();
    func_0x000107c615e8(uVar1);
    if ((uVar2 & 1) != 0) {
      return;
    }
  }
  func_0x000107c446c0();
  func_0x000107c61180();
  if (param_1 != 0) {
    func_0x000107c49b5c();
    func_0x000107c615e8(param_1);
  }
  return;
}



/* Entry: 10298dc54; end: 10298e06b;  */

undefined *
FUN_10298dc54(ulong param_1,long param_2,undefined8 param_3,long param_4,undefined *param_5)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  
  uVar10 = param_1;
  lVar8 = param_2;
  FUN_10298dbd4();
  if ((uVar10 & 1) == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    func_0x000107c3de78();
    puVar13 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168();
    puVar2 = puVar13;
    func_0x000107c5af88();
    func_0x000107c61180();
    puVar3 = PTR_PTR_1126b68a0;
    func_0x000107c61168();
    puVar12 = puVar3;
    func_0x000107c4fafc();
    if ((int)puVar12 != 0) {
      func_0x000107c5af88();
      func_0x000107c61180();
      func_0x000107c61170(puVar2);
      puVar2 = puVar13;
    }
    func_0x000107c5bd3c();
    func_0x000107c61180();
    if (puVar3 == (undefined *)0x0) {
      puVar13 = (undefined *)0x0;
      lVar11 = 0;
      lVar4 = lVar8;
    }
    else {
      puVar13 = puVar3;
      func_0x000107c5faec();
      lVar4 = lVar8;
      func_0x000107c61170();
      lVar11 = lVar8;
    }
    lVar8 = lVar4;
    if ((param_5 != (undefined *)0x0) && (param_2 == 3)) {
      if (param_4 == 2) {
        func_0x000109025720();
        func_0x000107c61180();
        if (puVar3 == (undefined *)0x0) {
          func_0x000107c6142c(lVar11);
          puVar13 = (undefined *)0x0;
          lVar11 = 0;
          lVar8 = lVar4;
        }
        else {
          puVar13 = puVar3;
          func_0x000107c5faec();
          lVar8 = lVar4;
          func_0x000107c61170(puVar3);
          func_0x000107c6142c(lVar11);
          lVar11 = lVar4;
        }
      }
      else if (param_4 == 1) {
        lVar4 = 0;
        FUN_102991150();
        FUN_10298f854(param_5);
        lVar8 = lVar4;
        func_0x000107c6142c(lVar11);
        lVar11 = lVar4;
        puVar13 = param_5;
      }
    }
    uVar10 = param_1;
    func_0x000107c498b0();
    func_0x000107c61180();
    uVar5 = uVar10;
    func_0x000107c3e70c();
    func_0x000107c61180();
    func_0x000107c615e8(uVar10);
    if (uVar5 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = uVar5;
      func_0x000107c49820();
      func_0x000107c61170(uVar5);
    }
    uVar5 = param_1;
    func_0x000107c40220();
    func_0x000107c61180();
    if (uVar5 == 0) {
      puVar12 = (undefined *)0x0;
      puVar14 = (undefined *)0x0;
    }
    else {
      uVar9 = uVar5;
      func_0x000107c40208();
      func_0x000107c615e8(uVar5);
      puVar12 = (undefined *)0x0;
      puVar14 = (undefined *)0x0;
      if (((int)uVar9 != 0) && (0 < (long)uVar10)) {
        puVar12 = PTR___sSiN_11034deb0;
        puVar14 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
        func_0x000107c6057c();
        lVar8 = -0x1f00000000000000;
        func_0x000107c5fb78(0x25,0xe100000000000000);
      }
    }
    uVar5 = param_1;
    func_0x000107c51f44();
    func_0x000107c61180();
    if (uVar5 == 0) {
      uVar9 = 0;
      lVar8 = -0x2000000000000000;
    }
    else {
      uVar9 = uVar5;
      func_0x000107c5faec();
      func_0x000107c61170(uVar5);
    }
    func_0x000107c5fadc(uVar9,lVar8);
    func_0x000107c6142c(lVar8);
    uVar5 = param_1;
    func_0x000107c3fdb8(param_1);
    FUN_10298e3b4();
    uVar6 = param_1;
    func_0x000107c4d3e4();
    func_0x000107c61180();
    uVar7 = uVar6;
    func_0x000107c42120();
    func_0x000107c61180();
    func_0x000107c615e8(uVar6);
    if (uVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10298e06c);
      (*pcVar1)();
    }
    if (lVar11 == 0) {
      puVar13 = (undefined *)0x0;
    }
    else {
      func_0x000107c5fadc(puVar13,lVar11);
    }
    func_0x000107c498b0();
    func_0x000107c61180();
    func_0x000107c49b38();
    func_0x000107c615e8(param_1);
    if (puVar14 == (undefined *)0x0) {
      puVar12 = (undefined *)0x0;
    }
    else {
      func_0x000107c5fadc(puVar12,puVar14);
    }
    puVar3 = PTR_PTR_1126b6a58;
    func_0x000107c610f8(PTR_PTR_1126b6a58);
    func_0x000107c485cc((double)(long)uVar10);
    func_0x000107c6142c(puVar14);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(puVar13);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar12);
    func_0x000107c6142c(lVar11);
  }
  return puVar3;
}



/* Entry: 10298e06c; end: 10298e0bb;  */

void FUN_10298e06c(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112ed1880 != 0) {
    return;
  }
  puVar1 = &UNK_110576fb0;
  func_0x000107c614d4();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112ed1880 = param_1;
  return;
}



/* Entry: 10298e0bc; end: 10298e0bf;  */

void FUN_10298e0bc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112ed1888 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_10298e06c(0xff);
  puVar2 = &UNK_10daf88e8;
  func_0x000107c61520(&UNK_10daf88e8,uVar1);
  puRam0000000112ed1888 = puVar2;
  return;
}



/* Entry: 10298e0c0; end: 10298e103;  */

void FUN_10298e0c0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112ed1888 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_10298e06c(0xff);
  puVar2 = &UNK_10daf88e8;
  func_0x000107c61520(&UNK_10daf88e8,uVar1);
  puRam0000000112ed1888 = puVar2;
  return;
}



/* Entry: 10298e104; end: 10298e143;  */

void FUN_10298e104(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10298e144; end: 10298e3b3;  */

undefined1  [16] FUN_10298e144(undefined8 param_1,char param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  char *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  uVar1 = 0;
  uVar2 = 0;
  switch(param_1) {
  case 1:
    uVar2 = 0x800000010f0d1780;
    pcVar3 = "EtgVKeUlWNLrXpir4Zt4T";
    goto code_r0x00010298e28c;
  case 2:
    goto code_r0x00010298e3a8;
  case 3:
    uVar2 = 0x800000010f0d1700;
    pcVar3 = "k5Hrsv2J2hNLoyqJ8Qojm";
    break;
  case 4:
    uVar2 = 0x800000010f0d1740;
    pcVar3 = "vBaP9LuQRCsqf99yuU5mL";
    break;
  case 5:
    uVar2 = 0x800000010f0d16c0;
    pcVar3 = "n37NAhvz0WZjuXUGrh8fa";
    goto code_r0x00010298e28c;
  case 6:
    uVar2 = 0x800000010f0d1640;
    pcVar3 = "2KednghtnrGJ2KtTWewsJ";
    goto code_r0x00010298e28c;
  case 7:
    uVar2 = 0x800000010f0d1680;
    pcVar3 = "2zfBTXlL6LfL33EM7lIRP";
    break;
  case 8:
    uVar2 = 0x800000010f0d15c0;
    pcVar3 = "FOKFl3Qida9neZKhs303B";
    break;
  case 9:
    uVar2 = 0x800000010f0d1600;
    pcVar3 = "195cXZXC9rXeNEeyPNfzR";
    break;
  case 10:
    uVar2 = 0x800000010f0d1580;
    pcVar3 = "peQAHkWw0OpqwOiAjAbKY";
    break;
  case 0xb:
    uVar2 = 0x800000010f0d1540;
    pcVar3 = "arosr65mjcVNq5nRkC85J";
    break;
  case 0xc:
    uVar2 = 0x800000010f0d1500;
    pcVar3 = "uLRUWQmpao5GFVnporzaS";
    goto code_r0x00010298e28c;
  case 0xd:
    uVar2 = 0x800000010f0d14c0;
    pcVar3 = "UvJEsGBAWEuSomcPiWE7X";
code_r0x00010298e28c:
    if (param_2 != '\x01') {
      uVar2 = (ulong)(pcVar3 + -0x20) | 0x8000000000000000;
    }
    auVar4._8_8_ = uVar2;
    auVar4._0_8_ = 0xd000000000000015;
    return auVar4;
  case 0xe:
    uVar2 = 0x800000010f0d1480;
    pcVar3 = "kCiqjpwDAtXk3OUgTH4eZ";
    break;
  default:
    return ZEXT816(0);
  }
  uVar1 = 0xd000000000000015;
  if (param_2 != '\x01') {
    uVar2 = (ulong)(pcVar3 + -0x20) | 0x8000000000000000;
  }
code_r0x00010298e3a8:
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = uVar1;
  return auVar5;
}



/* Entry: 10298e3b4; end: 10298e49f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10298e3b4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_58 [24];
  
  lVar2 = _DAT_112ed18a0;
  puVar3 = auStack_58;
  func_0x000107c61428(unaff_x20 + _DAT_112ed18a0,puVar3,0x20,0);
  lVar4 = *(long *)(unaff_x20 + lVar2);
  if ((*(long *)(lVar4 + 0x10) == 0) || (lVar1 = param_1, FUN_10298e8ec(), ((ulong)puVar3 & 1) == 0)
     ) {
    func_0x000107c614a8(auStack_58);
    lVar4 = param_1;
    FUN_10298e56c();
    if (lVar4 != 0) {
      func_0x000107c61428(unaff_x20 + lVar2,auStack_58,0x21,0);
      lVar2 = lVar4;
      func_0x000107c61174(lVar4);
      func_0x000107c61174();
      FUN_10298e75c(lVar4,param_1);
      func_0x000107c614a8(auStack_58);
      func_0x000107c61170(lVar2);
    }
  }
  else {
    lVar4 = *(long *)(*(long *)(lVar4 + 0x38) + lVar1 * 8);
    func_0x000107c614a8(auStack_58);
    func_0x000107c61174(lVar4);
  }
  return lVar4;
}



/* Entry: 10298e4a0; end: 10298e4ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10298e4a0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined **)(unaff_x20 + _DAT_112ed18a0) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  *(undefined8 *)(unaff_x20 + _DAT_112ed18a8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10298e500; end: 10298e56b; -[SCSpectaclesDeviceIconAssetResources initWithOnDemandResourceFetching:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10298e500(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined **)(param_1 + _DAT_112ed18a0) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  *(undefined8 *)(param_1 + _DAT_112ed18a8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 10298e56c; end: 10298e75b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10298e56c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  lVar4 = 0;
  uVar1 = param_1;
  FUN_10298e144();
  if (lVar4 != 0) {
    func_0x000107c602fc(0x3a);
    func_0x000107c5fb78(0xd00000000000001b,0x800000010f0d1810);
    func_0x000107c5fb78(uVar1,lVar4);
    func_0x000107c6142c(lVar4);
    func_0x000107c5fb78(0xd00000000000001d,0x800000010f0d1830);
    uVar1 = 0;
    lVar4 = 1;
    FUN_10298e144(param_1);
    if (lVar4 != 0) {
      func_0x000107c602fc(0x3a);
      func_0x000107c5fb78(0xd00000000000001b,0x800000010f0d1810);
      func_0x000107c5fb78(param_1,lVar4);
      func_0x000107c6142c(lVar4);
      func_0x000107c5fb78(0xd00000000000001d,0x800000010f0d1830);
      uVar2 = 0;
      lVar4 = *(long *)(unaff_x20 + _DAT_112ed18a8);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar4 != 0) {
        func_0x000107c5fadc(0,0xe000000000000000);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fadc(0,0xe000000000000000);
        func_0x000107c6142c(0xe000000000000000);
        lVar3 = lVar4;
        func_0x000107c450b0(lVar4);
        func_0x000107c61180();
        func_0x000107c615e8(lVar4);
        func_0x000107c61170(uVar1);
        func_0x000107c61170(uVar2);
        return lVar3;
      }
      func_0x000107c6142c(0xe000000000000000);
    }
    func_0x000107c6142c(0xe000000000000000);
  }
  return 0;
}



/* Entry: 10298e75c; end: 10298e817;  */

void FUN_10298e75c(long param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  
  if (param_1 == 0) {
    uVar3 = param_2;
    FUN_10298e8ec();
    if ((uVar3 & 1) != 0) {
      iVar1 = (int)*unaff_x20;
      func_0x000107c61558();
      lVar2 = *unaff_x20;
      if (iVar1 == 0) {
        FUN_10298eaf8();
      }
      func_0x000107c61170(*(undefined8 *)(*(long *)(lVar2 + 0x38) + param_2 * 8));
      func_0x00010298eed8(param_2,lVar2);
      *unaff_x20 = lVar2;
    }
  }
  else {
    lVar2 = *unaff_x20;
    func_0x000107c61558(lVar2);
    lVar4 = *unaff_x20;
    FUN_10298e964(param_1,param_2,lVar2);
    *unaff_x20 = lVar4;
  }
  return;
}



/* Entry: 10298e818; end: 10298e853; -[SCSpectaclesDeviceIconAssetResources iconFutureForDeviceColor:] */

void FUN_10298e818(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_10298e3b4(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10298e854; end: 10298e8b3; -[SCSpectaclesDeviceIconAssetResources init] */

void FUN_10298e854(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSpectaclesDeviceCellViewModelHelpers.SpectaclesDeviceIconAssetResources",
                      0x49,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10298e880);
  (*pcVar1)();
}



/* Entry: 10298e8b4; end: 10298e8eb; -[SCSpectaclesDeviceIconAssetResources .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10298e8b4(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed18a8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112ed18a0));
  return;
}



/* Entry: 10298e8ec; end: 10298e943;  */

void FUN_10298e8ec(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  func_0x000107c6068c(auStack_78,*(undefined8 *)(unaff_x20 + 0x28));
  uVar1 = param_1;
  func_0x000107c60690();
  func_0x000107c606a8();
  uVar2 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar1 = uVar1 & (uVar2 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    if (*(ulong *)(*(long *)(unaff_x20 + 0x30) + uVar1 * 8) == param_1) {
      return;
    }
    uVar1 = uVar1 + 1 & ~uVar2;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
  return;
}



/* Entry: 10298e944; end: 10298e963;  */

void FUN_10298e944(void)

{
  func_0x000107c61168(&PTR_PTR_112875988);
  return;
}



/* Entry: 10298e964; end: 10298ea93;  */

void FUN_10298e964(undefined8 param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  uVar2 = param_2;
  uVar3 = param_2;
  FUN_10298e8ec();
  lVar4 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar3 & 1;
  lVar5 = lVar4 + uVar7;
  if (SCARRY8(lVar4,uVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10298ea28);
    (*pcVar1)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar5) {
    param_3 = param_3 & 1;
    FUN_10298ec54(lVar5);
    uVar2 = param_2;
    FUN_10298e8ec();
    if (((uint)uVar3 & 1) != (param_3 & 1)) {
      FUN_10298e06c(0);
      func_0x000107c60624();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10298e9f4);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    FUN_10298eaf8();
    lVar5 = *unaff_x20;
    goto joined_r0x00010298ea3c;
  }
  lVar5 = *unaff_x20;
joined_r0x00010298ea3c:
  if ((uVar3 & 1) != 0) {
    uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8);
    *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar6);
    return;
  }
  lVar4 = lVar5 + (uVar2 >> 6) * 8;
  *(ulong *)(lVar4 + 0x40) = *(ulong *)(lVar4 + 0x40) | 1L << (uVar2 & 0x3f);
  *(ulong *)(*(long *)(lVar5 + 0x30) + uVar2 * 8) = param_2;
  *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10298ea94);
    (*pcVar1)();
  }
  *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
  return;
}



/* Entry: 10298ea94; end: 10298eaf7;  */

void FUN_10298ea94(long param_1,ulong param_2)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar1 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    if (*(long *)(*(long *)(unaff_x20 + 0x30) + param_2 * 8) == param_1) {
      return;
    }
    param_2 = param_2 + 1 & ~uVar1;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  return;
}



/* Entry: 10298eaf8; end: 10298ec53;  */

void FUN_10298eaf8(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  long lVar10;
  
  func_0x0001000285a8(0x112ed18d8,&UNK_10daf89b8);
  lVar9 = *unaff_x20;
  lVar4 = lVar9;
  func_0x000107c6048c();
  if (*(long *)(lVar9 + 0x10) != 0) {
    lVar1 = lVar9 + 0x40;
    uVar6 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar9 || lVar1 + uVar6 * 8 <= lVar4 + 0x40U) {
      func_0x000107c610b8(lVar4 + 0x40U,lVar1,uVar6 << 3);
    }
    lVar10 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar9 + 0x10);
    uVar7 = 1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar6 = 0xffffffffffffffff;
    if ((*(byte *)(lVar9 + 0x20) & 0x3f) < 6) {
      uVar6 = ~(-1L << (uVar7 & 0x3f));
    }
    uVar6 = uVar6 & *(ulong *)(lVar9 + 0x40);
    if (uVar6 == 0) goto LAB_10298ebd4;
    do {
      uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar6 = uVar6 - 1 & uVar6;
      while( true ) {
        uVar8 = LZCOUNT(uVar8) | lVar10 << 6;
        uVar5 = *(undefined8 *)(*(long *)(lVar9 + 0x38) + uVar8 * 8);
        *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar8 * 8) =
             *(undefined8 *)(*(long *)(lVar9 + 0x30) + uVar8 * 8);
        *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar8 * 8) = uVar5;
        func_0x000107c61174();
        if (uVar6 != 0) break;
LAB_10298ebd4:
        do {
          lVar2 = lVar10 + 1;
          if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10298ec54);
            (*pcVar3)();
          }
          if ((long)(uVar7 + 0x3f >> 6) <= lVar2) goto LAB_10298ec2c;
          uVar6 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar10 = lVar10 + 1;
        } while (uVar6 == 0);
        uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
        uVar6 = uVar6 - 1 & uVar6;
        lVar10 = lVar2;
      }
    } while( true );
  }
LAB_10298ec2c:
  func_0x000107c61574(lVar9);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 10298ec54; end: 10298f06b;  */

void FUN_10298ec54(long param_1,ulong param_2)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  ulong uVar12;
  ulong *puVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  undefined1 auStack_a8 [72];
  
  lVar11 = *unaff_x20;
  lVar1 = *(long *)(lVar11 + 0x18);
  if (*(long *)(lVar11 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar14 = 0x112ed18d8;
  func_0x0001000285a8(0x112ed18d8,&UNK_10daf89b8);
  lVar4 = lVar11;
  func_0x000107c60490(lVar11,lVar1,param_2,uVar14);
  if (*(long *)(lVar11 + 0x10) == 0) {
LAB_10298eea4:
    func_0x000107c61574(lVar11);
    *unaff_x20 = lVar4;
    return;
  }
  puVar13 = (ulong *)(lVar11 + 0x40);
  uVar8 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar12 = uVar12 & *puVar13;
  lVar1 = lVar4 + 0x40;
  lVar6 = 0;
  do {
    if (uVar12 == 0) {
      do {
        lVar16 = lVar6 + 1;
        if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10298eed4);
          (*pcVar3)();
        }
        if ((long)(uVar8 + 0x3f >> 6) <= lVar16) {
          if ((param_2 & 1) != 0) {
            uVar12 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
            if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
              *puVar13 = -1L << (uVar12 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar13,uVar12 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar11 + 0x10) = 0;
          }
          goto LAB_10298eea4;
        }
        uVar12 = puVar13[lVar16];
        lVar6 = lVar6 + 1;
      } while (uVar12 == 0);
      uVar5 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
    }
    else {
      uVar5 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
      lVar16 = lVar6;
    }
    uVar5 = LZCOUNT(uVar5) | lVar16 << 6;
    uVar15 = *(ulong *)(*(long *)(lVar11 + 0x30) + uVar5 * 8);
    uVar14 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar5 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61174(uVar14);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar4 + 0x28));
    uVar9 = uVar15;
    func_0x000107c60690();
    func_0x000107c606a8();
    uVar10 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    uVar9 = uVar9 & (uVar10 ^ 0xffffffffffffffff);
    uVar7 = uVar9 >> 6;
    uVar5 = -1L << (uVar9 & 0x3f) & (*(ulong *)(lVar1 + uVar7 * 8) ^ 0xffffffffffffffff);
    if (uVar5 == 0) {
      bVar2 = false;
      uVar5 = 0x3f - uVar10 >> 6;
      do {
        uVar9 = uVar7 + 1;
        if ((uVar9 == uVar5) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10298eed8);
          (*pcVar3)();
        }
        uVar7 = 0;
        if (uVar9 != uVar5) {
          uVar7 = uVar9;
        }
        bVar2 = (bool)(uVar9 == uVar5 | bVar2);
        uVar9 = *(ulong *)(lVar1 + uVar7 * 8);
      } while (uVar9 == 0xffffffffffffffff);
      uVar9 = ~uVar9;
      uVar5 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | uVar7 << 6;
    }
    else {
      uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | uVar9 & 0x7fffffffffffffc0;
    }
    uVar7 = uVar5 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar7) = 1L << (uVar5 & 0x3f) | *(ulong *)(lVar1 + uVar7);
    *(ulong *)(*(long *)(lVar4 + 0x30) + uVar5 * 8) = uVar15;
    *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar5 * 8) = uVar14;
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    lVar6 = lVar16;
  } while( true );
}



/* Entry: 10298f06c; end: 10298f17b;  */

undefined1  [16] FUN_10298f06c(ulong param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long extraout_x8;
  undefined1 *puVar6;
  long lVar7;
  undefined1 auVar8 [16];
  
  lVar1 = 0x112da9b98;
  func_0x0001000285a8(0x112da9b98,&UNK_10daf89c0);
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &stack0xffffffffffffffb0 + -extraout_x8;
  uVar2 = 1;
  FUN_10298f284(1,0);
  puVar3 = PTR__OBJC_CLASS___NSUnitDuration_1126a74b8;
  func_0x000107c61168(PTR__OBJC_CLASS___NSUnitDuration_1126a74b8);
  func_0x000107c51b2c();
  func_0x000107c61180();
  uVar4 = 0;
  FUN_10298f7d0(0,0x112da9bd8,&PTR__OBJC_CLASS___NSUnitDuration_1126a74b8);
  func_0x000107c5eb5c(puVar6,(double)param_1,puVar3,uVar4);
  puVar5 = puVar6;
  func_0x000107c60070(puVar6,uVar4);
  func_0x000107c61170(uVar2);
  (**(code **)(lVar7 + 8))(puVar6,lVar1);
  auVar8._8_8_ = uVar4;
  auVar8._0_8_ = puVar5;
  return auVar8;
}



/* Entry: 10298f17c; end: 10298f183;  */

undefined1  [16] FUN_10298f17c(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar7;
  undefined1 *puVar8;
  code *pcVar9;
  long lVar10;
  undefined1 auVar11 [16];
  
  lVar1 = 0x112e57030;
  func_0x0001000285a8(0x112e57030,&UNK_10daf8a30);
  lVar10 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  puVar8 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar7 = puVar8 + -extraout_x12;
  puVar2 = PTR__OBJC_CLASS___NSUnitLength_1126de068;
  func_0x000107c61168(PTR__OBJC_CLASS___NSUnitLength_1126de068);
  puVar3 = puVar2;
  func_0x000107c4ce58();
  func_0x000107c61180();
  uVar4 = 0;
  FUN_10298f7d0(0,0x112e57038,&PTR__OBJC_CLASS___NSUnitLength_1126de068);
  func_0x000107c5eb5c(puVar7,param_1,puVar3,uVar4);
  if ((param_2 & 1) == 0) {
    uVar5 = 2;
    FUN_10298f284(2,0);
    func_0x000107c42f78(puVar2);
    func_0x000107c61180();
    func_0x000107c5eb64(puVar8);
    func_0x000107c61170(puVar2);
    puVar6 = puVar8;
    func_0x000107c60070(puVar8,uVar4);
    func_0x000107c61170(uVar5);
    pcVar9 = *(code **)(lVar10 + 8);
    (*pcVar9)(puVar8,lVar1);
  }
  else {
    uVar5 = 1;
    FUN_10298f284(1,1);
    puVar6 = puVar7;
    func_0x000107c60070(puVar7,uVar4);
    func_0x000107c61170(uVar5);
    pcVar9 = *(code **)(lVar10 + 8);
  }
  (*pcVar9)(puVar7,lVar1);
  auVar11._8_8_ = uVar4;
  auVar11._0_8_ = puVar6;
  return auVar11;
}



/* Entry: 10298f184; end: 10298f20f;  */

undefined1  [16] FUN_10298f184(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  if (param_1 == 2) {
    func_0x0001090259a8();
    func_0x000107c61180();
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10298f1cc);
      (*pcVar1)();
    }
  }
  else if (param_1 == 1) {
    func_0x000109025990();
    func_0x000107c61180();
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10298f1b8);
      (*pcVar1)();
    }
  }
  else {
    func_0x0001090258a0();
    func_0x000107c61180();
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10298f210);
      (*pcVar1)();
    }
  }
  lVar2 = param_1;
  func_0x000107c5faec();
  func_0x000107c61170(param_1);
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = lVar2;
  return auVar3;
}



/* Entry: 10298f210; end: 10298f213;  */

uint FUN_10298f210(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  uint uVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  ulong uVar12;
  undefined1 auStack_70 [8];
  undefined1 *puStack_68;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  lVar2 = 0;
  func_0x000107c5ef14();
  lVar11 = *(long *)(lVar2 + -8);
  lVar7 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  uVar4 = (uint)lVar7;
  puVar5 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5ef04(puVar5);
  if (iVar1 == 0) {
    func_0x000107c5eee8();
    (**(code **)(lVar11 + 8))(puVar5,lVar2);
  }
  else {
    lVar3 = 0;
    func_0x000107c5eef0();
    lVar9 = *(long *)(lVar3 + -8);
    lVar7 = *(long *)(lVar9 + 0x40);
    puStack_68 = puVar5;
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    uVar12 = lVar7 + 0xfU & 0xfffffffffffffff0;
    lVar6 = (long)puVar5 - uVar12;
    func_0x000107c5eef8(lVar6);
    (**(code **)(lVar11 + 8))(puVar5,lVar2);
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    lVar11 = lVar6 - uVar12;
    lVar7 = lVar11;
    (**(code **)(lVar9 + 0x10))(lVar11,lVar6,lVar3);
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    lVar8 = lVar11 - uVar12;
    func_0x000107c5eeec(lVar8);
    FUN_10298f810();
    lVar2 = lVar8;
    func_0x000107c5fab8(lVar8,lVar11,lVar3,lVar7);
    pcVar10 = *(code **)(lVar9 + 8);
    (*pcVar10)(lVar8,lVar3);
    (*pcVar10)(lVar11,lVar3);
    (*pcVar10)(lVar6,lVar3);
    uVar4 = (uint)lVar2 ^ 1;
  }
  return uVar4 & 1;
}



/* Entry: 10298f214; end: 10298f24f; -[_TtC23SCSpectaclesFlightUtils22FlightModeSettingUtils init] */

void FUN_10298f214(undefined8 param_1)

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



/* Entry: 10298f250; end: 10298f283;  */

void FUN_10298f250(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10298f284; end: 10298f32f;  */

undefined * FUN_10298f284(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSMeasurementFormatter_1126dc3b0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c5a18c();
  func_0x000107c5a188(puVar2);
  puVar3 = puVar2;
  func_0x000107c4d900();
  func_0x000107c61180();
  if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10298f32c);
    (*pcVar1)();
  }
  func_0x000107c566ec();
  func_0x000107c61170(puVar3);
  puVar3 = puVar2;
  func_0x000107c4d900();
  func_0x000107c61180();
  if (puVar3 != (undefined *)0x0) {
    func_0x000107c56390();
    func_0x000107c61170(puVar3);
    return puVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10298f330);
  (*pcVar1)();
}



/* Entry: 10298f330; end: 10298f507;  */

uint FUN_10298f330(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  uint uVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  ulong uVar12;
  undefined1 auStack_70 [8];
  undefined1 *puStack_68;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  lVar2 = 0;
  func_0x000107c5ef14();
  lVar11 = *(long *)(lVar2 + -8);
  lVar7 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  uVar4 = (uint)lVar7;
  puVar5 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5ef04(puVar5);
  if (iVar1 == 0) {
    func_0x000107c5eee8();
    (**(code **)(lVar11 + 8))(puVar5,lVar2);
  }
  else {
    lVar3 = 0;
    func_0x000107c5eef0();
    lVar9 = *(long *)(lVar3 + -8);
    lVar7 = *(long *)(lVar9 + 0x40);
    puStack_68 = puVar5;
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    uVar12 = lVar7 + 0xfU & 0xfffffffffffffff0;
    lVar6 = (long)puVar5 - uVar12;
    func_0x000107c5eef8(lVar6);
    (**(code **)(lVar11 + 8))(puVar5,lVar2);
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    lVar11 = lVar6 - uVar12;
    lVar7 = lVar11;
    (**(code **)(lVar9 + 0x10))(lVar11,lVar6,lVar3);
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    lVar8 = lVar11 - uVar12;
    func_0x000107c5eeec(lVar8);
    FUN_10298f810();
    lVar2 = lVar8;
    func_0x000107c5fab8(lVar8,lVar11,lVar3,lVar7);
    pcVar10 = *(code **)(lVar9 + 8);
    (*pcVar10)(lVar8,lVar3);
    (*pcVar10)(lVar11,lVar3);
    (*pcVar10)(lVar6,lVar3);
    uVar4 = (uint)lVar2 ^ 1;
  }
  return uVar4 & 1;
}



/* Entry: 10298f508; end: 10298f6b7;  */

undefined1  [16] FUN_10298f508(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar7;
  undefined1 *puVar8;
  code *pcVar9;
  long lVar10;
  undefined1 auVar11 [16];
  
  lVar1 = 0x112e57030;
  func_0x0001000285a8(0x112e57030,&UNK_10daf8a30);
  lVar10 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  puVar8 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar7 = puVar8 + -extraout_x12;
  puVar2 = PTR__OBJC_CLASS___NSUnitLength_1126de068;
  func_0x000107c61168(PTR__OBJC_CLASS___NSUnitLength_1126de068);
  puVar3 = puVar2;
  func_0x000107c4ce58();
  func_0x000107c61180();
  uVar4 = 0;
  FUN_10298f7d0(0,0x112e57038,&PTR__OBJC_CLASS___NSUnitLength_1126de068);
  func_0x000107c5eb5c(puVar7,param_1,puVar3,uVar4);
  if ((param_2 & 1) == 0) {
    uVar5 = 2;
    FUN_10298f284(2,0);
    func_0x000107c42f78(puVar2);
    func_0x000107c61180();
    func_0x000107c5eb64(puVar8);
    func_0x000107c61170(puVar2);
    puVar6 = puVar8;
    func_0x000107c60070(puVar8,uVar4);
    func_0x000107c61170(uVar5);
    pcVar9 = *(code **)(lVar10 + 8);
    (*pcVar9)(puVar8,lVar1);
  }
  else {
    uVar5 = 1;
    FUN_10298f284(1,1);
    puVar6 = puVar7;
    func_0x000107c60070(puVar7,uVar4);
    func_0x000107c61170(uVar5);
    pcVar9 = *(code **)(lVar10 + 8);
  }
  (*pcVar9)(puVar7,lVar1);
  auVar11._8_8_ = uVar4;
  auVar11._0_8_ = puVar6;
  return auVar11;
}



/* Entry: 10298f6b8; end: 10298f75f;  */

undefined1  [16] FUN_10298f6b8(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  if (param_1 == 3) {
    func_0x000109025978();
    func_0x000107c61180();
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10298f71c);
      (*pcVar1)();
    }
  }
  else if (param_1 == 2) {
    func_0x000109025960();
    func_0x000107c61180();
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10298f708);
      (*pcVar1)();
    }
  }
  else if (param_1 == 1) {
    func_0x000109025948();
    func_0x000107c61180();
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10298f6f4);
      (*pcVar1)();
    }
  }
  else {
    func_0x0001090258a0();
    func_0x000107c61180();
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10298f760);
      (*pcVar1)();
    }
  }
  lVar2 = param_1;
  func_0x000107c5faec();
  func_0x000107c61170(param_1);
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = lVar2;
  return auVar3;
}



/* Entry: 10298f760; end: 10298f7cf;  */

void FUN_10298f760(void)

{
  func_0x000107c61168(&PTR_PTR_112875a50);
  return;
}



/* Entry: 10298f7d0; end: 10298f80f;  */

void FUN_10298f7d0(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10298f810; end: 10298f853;  */

void FUN_10298f810(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112ed1910 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x000107c5eef0(0xff);
  puVar2 = PTR___s10Foundation6LocaleV17MeasurementSystemVSQAAMc_1103453b0;
  func_0x000107c61520(PTR___s10Foundation6LocaleV17MeasurementSystemVSQAAMc_1103453b0,uVar1);
  puRam0000000112ed1910 = puVar2;
  return;
}



/* Entry: 10298f854; end: 10298f857;  */

undefined1  [16] FUN_10298f854(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  if (param_1 < 3) {
    if (param_1 == 1) {
      func_0x0001090259c0();
      func_0x000107c61180();
      if (param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1029903f4);
        (*pcVar1)();
      }
      goto LAB_102990404;
    }
    if (param_1 == 2) {
      func_0x0001090259d8();
      func_0x000107c61180();
      if (param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1029903b8);
        (*pcVar1)();
      }
      goto LAB_102990404;
    }
  }
  else {
    if (param_1 == 3) {
      func_0x0001090259f0();
      func_0x000107c61180();
      if (param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1029903cc);
        (*pcVar1)();
      }
      goto LAB_102990404;
    }
    if (param_1 == 4) {
      func_0x000109025a08();
      func_0x000107c61180();
      if (param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1029903e0);
        (*pcVar1)();
      }
      goto LAB_102990404;
    }
    if (param_1 == 5) {
      func_0x000109025a20();
      func_0x000107c61180();
      if (param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102990394);
        (*pcVar1)();
      }
      goto LAB_102990404;
    }
  }
  func_0x0001090258a0();
  func_0x000107c61180();
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102990438);
    (*pcVar1)();
  }
LAB_102990404:
  lVar2 = param_1;
  func_0x000107c5faec();
  func_0x000107c61170(param_1);
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = lVar2;
  return auVar3;
}



/* Entry: 10298f858; end: 10298f88f; +[SCSpectaclesFlightModeUtils titleForFlightMode:] */

void FUN_10298f858(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_102990350(param_3);
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10298f890; end: 10298f893;  */

undefined1  [16] FUN_10298f890(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  lVar2 = param_1;
  func_0x000107c436c4();
  if ((lVar2 == 5) && (lVar2 = param_1, func_0x000107c436c8(), lVar2 != 0)) {
    func_0x000109025a38();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = lVar2;
      func_0x000107c5faec();
      func_0x000107c61170(lVar2);
      lVar2 = 0x112d36008;
      func_0x0001000285a8(0x112d36008,&UNK_10d900720);
      uVar5 = 0x48;
      func_0x000107c613fc();
      *(undefined8 *)(lVar2 + 0x18) = 2;
      *(undefined8 *)(lVar2 + 0x10) = 1;
      func_0x000107c436c8();
      FUN_102990350();
      *(undefined **)(lVar2 + 0x38) = PTR___sSSN_11034da80;
      lVar4 = param_1;
      func_0x00010075bbf0();
      *(long *)(lVar2 + 0x40) = lVar4;
      *(long *)(lVar2 + 0x20) = param_1;
      *(undefined8 *)(lVar2 + 0x28) = uVar5;
      uVar5 = param_2;
      func_0x000107c5fb00(lVar3,param_2,lVar2);
      func_0x000107c6142c(param_2);
      auVar7._8_8_ = uVar5;
      auVar7._0_8_ = lVar3;
      return auVar7;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102990548);
    (*pcVar1)();
  }
  func_0x000107c436c4();
  if (param_1 < 3) {
    if (param_1 == 1) {
      func_0x0001090259c0();
      func_0x000107c61180();
      if (param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1029903f4);
        (*pcVar1)();
      }
      goto LAB_102990404;
    }
    if (param_1 == 2) {
      func_0x0001090259d8();
      func_0x000107c61180();
      if (param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1029903b8);
        (*pcVar1)();
      }
      goto LAB_102990404;
    }
  }
  else {
    if (param_1 == 3) {
      func_0x0001090259f0();
      func_0x000107c61180();
      if (param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1029903cc);
        (*pcVar1)();
      }
      goto LAB_102990404;
    }
    if (param_1 == 4) {
      func_0x000109025a08();
      func_0x000107c61180();
      if (param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1029903e0);
        (*pcVar1)();
      }
      goto LAB_102990404;
    }
    if (param_1 == 5) {
      func_0x000109025a20();
      func_0x000107c61180();
      if (param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102990394);
        (*pcVar1)();
      }
      goto LAB_102990404;
    }
  }
  func_0x0001090258a0();
  func_0x000107c61180();
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102990438);
    (*pcVar1)();
  }
LAB_102990404:
  lVar2 = param_1;
  func_0x000107c5faec();
  func_0x000107c61170(param_1);
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = lVar2;
  return auVar6;
}



/* Entry: 10298f894; end: 10298f8ef; +[SCSpectaclesFlightModeUtils flightPathTitleFromSettings:] */

void FUN_10298f894(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  FUN_102990438();
  func_0x000107c61170(param_3);
  func_0x000107c5fadc(uVar1,param_2);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10298f8f0; end: 10298f94b;  */

undefined * FUN_10298f8f0(long param_1)

{
  undefined *puVar1;
  
  if (param_1 - 1U < 4) {
    puVar1 = (undefined *)0x112ed1950;
    func_0x0001000285a8(0x112ed1950,&UNK_10daf8a40);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_initStaticObject_11034f440)();
    return puVar1;
  }
  return PTR___swiftEmptyArrayStorage_11034f1c8;
}



/* Entry: 10298f94c; end: 10298f95f; +[SCSpectaclesFlightModeUtils defaultSettingsDict] */

void FUN_10298f94c(void)

{
  FUN_102990548();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10298f960; end: 10298f963;  */

undefined1  [16] FUN_10298f960(double param_1,ulong param_2,undefined *param_3)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  ulong *puVar3;
  int iVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar17;
  undefined1 *puVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  ulong uStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  ulong uStack_a8;
  undefined *puStack_a0;
  ulong uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  ulong uStack_80;
  undefined *puStack_78;
  
  puVar3 = &uStack_d0;
  uStack_80 = 0;
  puStack_78 = (undefined *)0xe000000000000000;
  if (((ulong)param_3 & 1) == 0) {
    uVar19 = 0;
  }
  else {
    uVar23 = param_2;
    func_0x000107c436c8();
    FUN_102990350();
    uVar19 = uVar23 & 0xffffffffffff;
    uStack_80 = uVar23;
    puStack_78 = param_3;
  }
  puVar7 = puStack_78;
  uVar23 = param_2;
  func_0x000107c436c8();
  if (uVar23 - 1 < 4) {
    param_3 = (&PTR_DAT_1105770d8)[uVar23 - 1];
    puVar5 = (undefined *)0x112ed1950;
    func_0x0001000285a8(0x112ed1950,&UNK_10daf8a40);
    func_0x000107c61538();
    uVar23 = *(ulong *)(puVar5 + 0x10);
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar23 = *(ulong *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar10;
  if (uVar23 == 0) {
    func_0x000107c6142c(puVar5);
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar20 = 0;
    uStack_d0 = uVar19;
    puStack_c8 = puVar7;
    uStack_a8 = uVar23;
    puStack_a0 = puVar5;
    uStack_98 = param_2;
    do {
      if (*(ulong *)(puVar5 + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10299111c);
        (*pcVar2)();
      }
      lVar16 = *(long *)(puVar5 + uVar20 * 8 + 0x20);
      if (lVar16 < 2) {
        if (lVar16 == 0) {
          uVar19 = param_2;
          func_0x000107c42378();
          if (uVar19 != 0) {
            func_0x000107c42378();
            puVar7 = PTR__OBJC_CLASS___NSMeasurementFormatter_1126dc3b0;
            func_0x000107c610f8();
            func_0x000107c453e4();
            func_0x000107c5a18c();
            func_0x000107c5a188(puVar7);
            puVar5 = puVar7;
            func_0x000107c4d900();
            func_0x000107c61180();
            if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x102991124);
              (*pcVar2)();
            }
            func_0x000107c566ec();
            func_0x000107c61170(puVar5);
            puVar5 = puVar7;
            func_0x000107c4d900();
            func_0x000107c61180();
            if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x102991120);
              (*pcVar2)();
            }
            func_0x000107c56390();
            func_0x000107c61170(puVar5);
            puVar11 = (undefined *)0x112da9b98;
            func_0x0001000285a8(0x112da9b98,&UNK_10daf89c0);
            lVar16 = *(long *)(puVar11 + -8);
            (*(code *)PTR____chkstk_darwin_11034bd40)
                      (*(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0);
            uVar23 = (long)puVar3 - extraout_x8_00;
            param_1 = (double)param_2;
            puVar5 = PTR__OBJC_CLASS___NSUnitDuration_1126a74b8;
            func_0x000107c61168(PTR__OBJC_CLASS___NSUnitDuration_1126a74b8);
            func_0x000107c51b2c();
            func_0x000107c61180();
            puVar8 = (undefined *)0x0;
            FUN_102991170(0,0x112da9bd8,&PTR__OBJC_CLASS___NSUnitDuration_1126a74b8);
            func_0x000107c5eb5c(uVar23,puVar5,puVar8);
            uVar19 = uVar23;
            func_0x000107c60070();
            func_0x000107c61170(puVar7);
            (**(code **)(lVar16 + 8))(uVar23);
            param_2 = uStack_98;
            puVar5 = puStack_a0;
            uVar23 = uStack_a8;
            goto LAB_102990fc8;
          }
        }
        else if ((lVar16 == 1) && (func_0x000107c4219c(param_2), 0.0 < param_1)) {
          func_0x000107c4219c(param_2);
          iVar4 = 2;
          func_0x000100029b9c(2,0x10,0,0);
          uVar23 = 0;
          func_0x000107c5ef14();
          lVar16 = *(long *)(uVar23 - 8);
          uVar19 = uVar23;
          (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
          puVar18 = (undefined1 *)((long)puVar3 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
          func_0x000107c5ef04(puVar18);
          if (iVar4 == 0) {
            func_0x000107c5eee8();
            (**(code **)(lVar16 + 8))(puVar18,uVar23);
          }
          else {
            lVar6 = 0;
            func_0x000107c5eef0();
            lVar26 = *(long *)(lVar6 + -8);
            lVar24 = *(long *)(lVar26 + 0x40);
            puStack_b0 = puVar18;
            (*(code *)PTR____chkstk_darwin_11034bd40)();
            uVar19 = lVar24 + 0xfU & 0xfffffffffffffff0;
            lVar21 = (long)puVar18 - uVar19;
            puStack_b8 = (undefined1 *)puVar3;
            func_0x000107c5eef8(lVar21);
            (**(code **)(lVar16 + 8))(puVar18,uVar23);
            lStack_c0 = lVar21;
            (*(code *)PTR____chkstk_darwin_11034bd40)();
            lVar22 = lVar21 - uVar19;
            lVar16 = lVar22;
            (**(code **)(lVar26 + 0x10))(lVar22,lVar21,lVar6);
            (*(code *)PTR____chkstk_darwin_11034bd40)();
            lVar25 = lVar22 - uVar19;
            func_0x000107c5eeec(lVar25);
            FUN_10298f810();
            lVar24 = lVar25;
            func_0x000107c5fab8(lVar25,lVar22,lVar6,lVar16);
            pcVar2 = *(code **)(lVar26 + 8);
            (*pcVar2)(lVar25,lVar6);
            (*pcVar2)(lVar22,lVar6);
            (*pcVar2)(lVar21,lVar6);
            uVar19 = (ulong)((uint)lVar24 ^ 1);
            puVar3 = (ulong *)puStack_b8;
          }
          puVar11 = (undefined *)0x112e57030;
          func_0x0001000285a8(0x112e57030,&UNK_10daf8a30);
          puStack_b8 = *(undefined1 **)(puVar11 + -8);
          lVar16 = *(long *)(puStack_b8 + 0x40);
          puStack_b0 = (undefined1 *)puVar3;
          (*(code *)PTR____chkstk_darwin_11034bd40)(lVar16 + 0xfU & 0xfffffffffffffff0);
          uVar23 = (long)puVar3 - extraout_x8_01;
          puVar7 = PTR__OBJC_CLASS___NSUnitLength_1126de068;
          func_0x000107c61168(PTR__OBJC_CLASS___NSUnitLength_1126de068);
          puVar5 = puVar7;
          func_0x000107c4ce58();
          func_0x000107c61180();
          puVar8 = (undefined *)0x0;
          FUN_102991170(0,0x112e57038,&PTR__OBJC_CLASS___NSUnitLength_1126de068);
          func_0x000107c5eb5c(uVar23,puVar5,puVar8);
          puVar5 = PTR__OBJC_CLASS___NSMeasurementFormatter_1126dc3b0;
          func_0x000107c610f8();
          func_0x000107c453e4();
          if ((uVar19 & 1) == 0) {
            func_0x000107c5a18c();
            func_0x000107c5a188(puVar5);
            puVar9 = puVar5;
            func_0x000107c4d900();
            func_0x000107c61180();
            if (puVar9 == (undefined *)0x0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10299112c);
              (*pcVar2)();
            }
            func_0x000107c566ec();
            func_0x000107c61170(puVar9);
            puVar9 = puVar5;
            func_0x000107c4d900();
            func_0x000107c61180();
            if (puVar9 == (undefined *)0x0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x102991128);
              (*pcVar2)();
            }
            func_0x000107c56390();
            func_0x000107c61170(puVar9);
            (*(code *)PTR____chkstk_darwin_11034bd40)();
            uVar17 = uVar23 - (lVar16 + 0xfU & 0xfffffffffffffff0);
            func_0x000107c42f78(puVar7);
            func_0x000107c61180();
            func_0x000107c5eb64(uVar17);
            func_0x000107c61170(puVar7);
            uVar19 = uVar17;
            func_0x000107c60070();
            func_0x000107c61170(puVar5);
            pcVar2 = *(code **)(puStack_b8 + 8);
            (*pcVar2)(uVar17,puVar11);
            (*pcVar2)(uVar23);
            puVar3 = (ulong *)puStack_b0;
            param_2 = uStack_98;
            puVar5 = puStack_a0;
            uVar23 = uStack_a8;
          }
          else {
            func_0x000107c5a18c();
            func_0x000107c5a188(puVar5);
            puVar7 = puVar5;
            func_0x000107c4d900();
            func_0x000107c61180();
            if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x102991134);
              (*pcVar2)();
            }
            func_0x000107c566ec();
            func_0x000107c61170(puVar7);
            puVar7 = puVar5;
            func_0x000107c4d900();
            func_0x000107c61180();
            if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x102991130);
              (*pcVar2)();
            }
            func_0x000107c56390();
            func_0x000107c61170(puVar7);
            uVar19 = uVar23;
            func_0x000107c60070();
            func_0x000107c61170(puVar5);
            (**(code **)(puStack_b8 + 8))(uVar23);
            puVar3 = (ulong *)puStack_b0;
            param_2 = uStack_98;
            puVar5 = puStack_a0;
            uVar23 = uStack_a8;
          }
LAB_102990fc8:
          puVar7 = puVar10;
          func_0x000107c61558();
          param_3 = puVar11;
          puVar11 = puVar10;
          if (((ulong)puVar7 & 1) == 0) {
            param_3 = (undefined *)(*(long *)(puVar10 + 0x10) + 1);
            puVar11 = (undefined *)0x0;
            func_0x0001000d182c(0,param_3,1,puVar10);
          }
          uVar17 = *(ulong *)(puVar11 + 0x10);
          puVar7 = (undefined *)(uVar17 + 1);
          puVar10 = puVar11;
          if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar17) {
            puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar11 + 0x18));
            param_3 = puVar7;
            func_0x0001000d182c(puVar10,puVar7,1,puVar11);
          }
          *(undefined **)(puVar10 + 0x10) = puVar7;
          *(ulong *)(puVar10 + uVar17 * 0x10 + 0x20) = uVar19;
          *(undefined **)(puVar10 + uVar17 * 0x10 + 0x28) = puVar8;
        }
      }
      else {
        uVar17 = param_2;
        if (lVar16 == 2) {
          uVar19 = param_2;
          func_0x000107c3f5b8();
          if (uVar19 != 0) {
            func_0x000107c3f5b8();
            if (uVar17 == 3) {
              func_0x000109025978();
              func_0x000107c61180();
              if (uVar17 == 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x102991150);
                (*pcVar2)();
              }
            }
            else if (uVar17 == 2) {
              func_0x000109025960();
              func_0x000107c61180();
              if (uVar17 == 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x10299114c);
                (*pcVar2)();
              }
            }
            else if (uVar17 == 1) {
              func_0x000109025948();
              func_0x000107c61180();
              if (uVar17 == 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x102991148);
                (*pcVar2)();
              }
            }
            else {
              func_0x0001090258a0();
              func_0x000107c61180();
              if (uVar17 == 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x102991144);
                (*pcVar2)();
              }
            }
LAB_102990fb0:
            uVar19 = uVar17;
            func_0x000107c5faec();
            puVar11 = param_3;
            func_0x000107c61170(uVar17);
            puVar8 = param_3;
            goto LAB_102990fc8;
          }
        }
        else if (lVar16 == 3) {
          uVar19 = param_2;
          func_0x000107c5ce44();
          if (uVar19 != 0) {
            func_0x000107c5ce44();
            if (uVar17 == 2) {
              func_0x0001090259a8();
              func_0x000107c61180();
              if (uVar17 == 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x102991140);
                (*pcVar2)();
              }
            }
            else if (uVar17 == 1) {
              func_0x000109025990();
              func_0x000107c61180();
              if (uVar17 == 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x10299113c);
                (*pcVar2)();
              }
            }
            else {
              func_0x0001090258a0();
              func_0x000107c61180();
              if (uVar17 == 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x102991138);
                (*pcVar2)();
              }
            }
            goto LAB_102990fb0;
          }
        }
        else if ((lVar16 == 4) && (uVar19 = param_2, func_0x000107c436c8(), uVar19 != 0)) {
          uVar19 = 0;
          puVar11 = param_3;
          puVar8 = (undefined *)0xe000000000000000;
          goto LAB_102990fc8;
        }
      }
      uVar20 = uVar20 + 1;
    } while (uVar23 != uVar20);
    func_0x000107c6142c(puVar5);
    puVar7 = puStack_c8;
    uVar19 = uStack_d0;
  }
  if (((ulong)puVar7 & 0x2000000000000000) != 0) {
    uVar19 = (ulong)puVar7 >> 0x38 & 0xf;
  }
  if ((uVar19 != 0) && (*(long *)(puVar10 + 0x10) != 0)) {
    func_0x000107c5fb78(0x203a,0xe200000000000000);
  }
  puVar7 = puStack_78;
  uVar19 = uStack_80;
  uVar12 = 0x112d38270;
  puStack_90 = puVar10;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  uVar13 = uVar12;
  func_0x00010011d734();
  uVar14 = 0x202c;
  uVar15 = 0xe200000000000000;
  func_0x000107c5fa80(0x202c,0xe200000000000000,uVar12,uVar13);
  func_0x000107c6142c(puVar10);
  puStack_90 = (undefined *)uVar19;
  puStack_88 = puVar7;
  func_0x000107c61434(puVar7);
  func_0x000107c5fb78(uVar14,uVar15);
  func_0x000107c6142c(puVar7);
  func_0x000107c6142c(uVar15);
  auVar1._8_8_ = puStack_88;
  auVar1._0_8_ = puStack_90;
  return auVar1;
}



/* Entry: 10298f964; end: 10298f9c7; +[SCSpectaclesFlightModeUtils flightPathSettingsStringFromSettings:withFlightPath:] */

void FUN_10298f964(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  FUN_102990830();
  func_0x000107c61170(param_3);
  func_0x000107c5fadc(uVar1,param_4);
  func_0x000107c6142c(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10298f9c8; end: 10298fa03; -[SCSpectaclesFlightModeUtils init] */

void FUN_10298f9c8(undefined8 param_1)

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



/* Entry: 10298fa04; end: 10298fa37;  */

void FUN_10298fa04(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10298fa38; end: 10298fbab;  */

undefined8 FUN_10298fa38(long param_1,ulong param_2)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong *unaff_x20;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  uVar6 = *unaff_x20;
  if ((uVar6 & 0xc000000000000001) == 0) {
    func_0x000107c61434(uVar6);
    func_0x000100121450();
    func_0x000107c6142c(uVar6);
    if ((param_2 & 1) == 0) {
      return 0;
    }
    iVar2 = (int)*unaff_x20;
    func_0x000107c61558();
    uVar5 = *unaff_x20;
    if (iVar2 == 0) {
      FUN_10298fdf4();
    }
    func_0x000107c61170(*(undefined8 *)(*(long *)(uVar5 + 0x30) + param_1 * 8));
    uVar7 = *(undefined8 *)(*(long *)(uVar5 + 0x38) + param_1 * 8);
    func_0x0001029901c0(param_1,uVar5);
  }
  else {
    uVar5 = uVar6 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar6) {
      uVar5 = uVar6;
    }
    func_0x000107c61434(uVar6);
    func_0x000107c61174();
    lVar3 = param_1;
    func_0x000107c6043c();
    func_0x000107c61170(param_1);
    if (lVar3 == 0) {
      func_0x000107c6142c(uVar6);
      return 0;
    }
    func_0x000107c615e8(lVar3);
    uVar4 = uVar5;
    func_0x000107c6042c();
    FUN_10298fbac();
    func_0x000107c6157c();
    func_0x000100121450();
    func_0x000107c61574(uVar5);
    if ((uVar4 & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10298fb9c);
      (*pcVar1)();
    }
    func_0x000107c61170(*(undefined8 *)(*(long *)(uVar5 + 0x30) + param_1 * 8));
    uVar7 = *(undefined8 *)(*(long *)(uVar5 + 0x38) + param_1 * 8);
    func_0x0001029901c0(param_1,uVar5);
    func_0x000107c6142c(uVar6);
  }
  *unaff_x20 = uVar5;
  return uVar7;
}



/* Entry: 10298fbac; end: 10298fdf3;  */

undefined * FUN_10298fbac(undefined *param_1,undefined1 **param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  if (param_2 == (undefined1 **)0x0) {
    func_0x000107c615e8();
    puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  else {
    func_0x0001000285a8(0x112ed1ae8,&UNK_10daf8a68);
    puVar5 = param_1;
    func_0x000107c60494();
    puStack_68 = puVar5;
    func_0x000107c60418();
    puVar7 = param_1;
    func_0x000107c60444();
    if (puVar7 != (undefined *)0x0) {
      uVar6 = 0;
      FUN_102991170(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      puVar2 = PTR___syXlN_11034f1a0;
      do {
        puStack_78 = puVar7;
        func_0x000107c6147c(&uStack_70,&puStack_78,puVar2 + 8,uVar6,7);
        uVar8 = 0;
        puStack_80 = (undefined1 *)param_2;
        FUN_102991170(0,0x112e469c8,&PTR_PTR_1126c19c0);
        param_2 = &puStack_80;
        func_0x000107c6147c(&puStack_78,&puStack_80,puVar2 + 8,uVar8,7);
        uVar8 = uStack_70;
        puVar3 = puStack_78;
        if (*(ulong *)(puVar5 + 0x18) <= *(ulong *)(puVar5 + 0x10)) {
          param_2 = (undefined1 **)0x1;
          FUN_10298ff58(*(ulong *)(puVar5 + 0x10) + 1);
          puVar5 = puStack_68;
        }
        puVar7 = *(undefined **)(puVar5 + 0x28);
        func_0x000107c60114();
        uVar12 = -1L << ((ulong)(byte)puVar5[0x20] & 0x3f);
        uVar11 = (ulong)puVar7 & (uVar12 ^ 0xffffffffffffffff);
        uVar9 = uVar11 >> 6;
        uVar10 = -1L << (uVar11 & 0x3f) &
                 (*(ulong *)(puVar5 + uVar9 * 8 + 0x40) ^ 0xffffffffffffffff);
        if (uVar10 == 0) {
          bVar1 = false;
          uVar10 = 0x3f - uVar12 >> 6;
          do {
            uVar11 = uVar9 + 1;
            if ((uVar11 == uVar10) && (bVar1)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10298fdf4);
              (*pcVar4)();
            }
            uVar9 = 0;
            if (uVar11 != uVar10) {
              uVar9 = uVar11;
            }
            bVar1 = (bool)(uVar11 == uVar10 | bVar1);
          } while (*(ulong *)(puVar5 + uVar9 * 8 + 0x40) == 0xffffffffffffffff);
          uVar10 = ~*(ulong *)(puVar5 + uVar9 * 8 + 0x40);
          uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
          uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
          uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
          uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
          uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar9 << 6;
        }
        else {
          uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
          uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
          uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
          uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
          uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar11 & 0x7fffffffffffffc0;
        }
        uVar9 = uVar10 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(puVar5 + uVar9 + 0x40) =
             1L << (uVar10 & 0x3f) | *(ulong *)(puVar5 + uVar9 + 0x40);
        *(undefined8 *)(*(long *)(puVar5 + 0x30) + uVar10 * 8) = uVar8;
        *(undefined **)(*(long *)(puVar5 + 0x38) + uVar10 * 8) = puVar3;
        *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
        func_0x000107c60444();
      } while (puVar7 != (undefined *)0x0);
    }
    func_0x000107c61574(param_1);
  }
  return puVar5;
}


