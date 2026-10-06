/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10217bc44; end: 10217bcf3;  */

void FUN_10217bc44(void)

{
  long unaff_x20;
  
  FUN_10217a6a0(*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 10217bcf4; end: 10217bcf7;  */

void FUN_10217bcf4(ulong param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  (**(code **)(unaff_x20 + 0x20))();
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uVar2 = 4;
  if ((param_1 & 1) == 0) {
    uVar2 = 0x44;
  }
  (*pcVar1)(uVar2,0,0,&uStack_50);
  func_0x00010006e7f4(&uStack_50);
  return;
}



/* Entry: 10217bcf8; end: 10217bd63;  */

undefined8 FUN_10217bcf8(undefined8 param_1)

{
  (*(code *)(undefined *)0x1021768fc)();
  return param_1;
}



/* Entry: 10217bd64; end: 10217bd77;  */

void FUN_10217bd64(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined1 *)(unaff_x20 + 0x28);
  ppuVar5 = &puStack_60;
  puVar4 = &UNK_1104d66d8;
  func_0x000107c613fc(&UNK_1104d66d8,0x21,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar2;
  *(undefined8 *)(puVar4 + 0x18) = uVar6;
  puVar4[0x20] = uVar3;
  uStack_40 = 0x10217bf84;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1104d66f0;
  puStack_38 = puVar4;
  func_0x000107c60bc4(&puStack_60);
  puVar4 = puStack_38;
  func_0x000107c6157c(uVar6);
  func_0x000107c61574(puVar4);
  func_0x000107c4e524(uVar1);
  func_0x000107c60bd0(ppuVar5);
  return;
}



/* Entry: 10217bd78; end: 10217bdc3;  */

void FUN_10217bd78(void)

{
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  (**(code **)(unaff_x20 + 0x10))
            (*(undefined8 *)(unaff_x20 + 0x18),0,0,*(undefined1 *)(unaff_x20 + 0x20),&uStack_40);
  func_0x00010006e7f4(&uStack_40);
  return;
}



/* Entry: 10217bdc4; end: 10217bdef;  */

void FUN_10217bdc4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10217bdf0; end: 10217be57;  */

void FUN_10217bdf0(ulong param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  (**(code **)(unaff_x20 + 0x20))();
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uVar2 = 4;
  if ((param_1 & 1) == 0) {
    uVar2 = 0x44;
  }
  (*pcVar1)(uVar2,0,0,&uStack_50);
  func_0x00010006e7f4(&uStack_50);
  return;
}



/* Entry: 10217be58; end: 10217be97;  */

void FUN_10217be58(void)

{
  long unaff_x20;
  
  func_0x00010217af80(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),unaff_x20 + 0x28,
                      *(undefined8 *)(unaff_x20 + 0x68),*(undefined8 *)(unaff_x20 + 0x70),
                      *(undefined8 *)(unaff_x20 + 0x78),*(undefined8 *)(unaff_x20 + 0x80),
                      *(undefined8 *)(unaff_x20 + 0x88),*(undefined8 *)(unaff_x20 + 0x90),
                      *(undefined8 *)(unaff_x20 + 0x98),*(undefined8 *)(unaff_x20 + 0xa0));
  return;
}



/* Entry: 10217be98; end: 10217beeb;  */

void FUN_10217be98(undefined1 *param_1)

{
  long unaff_x20;
  undefined1 *puVar1;
  undefined1 auStack_48 [24];
  
  puVar1 = *(undefined1 **)(unaff_x20 + 0x10);
  func_0x000107c61428(puVar1,auStack_48,0,0);
  *param_1 = *puVar1;
  return;
}



/* Entry: 10217beec; end: 10217bf8b;  */

void FUN_10217beec(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010217bf00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 10217bf8c; end: 10217bfe7;  */

long FUN_10217bf8c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar2 = *(long *)(unaff_x20 + 0x28);
  lVar1 = lVar2;
  if (lVar2 == 1) {
    lVar1 = unaff_x20;
    FUN_10217bfe8();
    uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
    *(long *)(unaff_x20 + 0x28) = lVar1;
    func_0x000107c61174();
    FUN_10217c240(uVar3);
  }
  func_0x00010217c250(lVar2);
  return lVar1;
}



/* Entry: 10217bfe8; end: 10217c12b;  */

/* WARNING: Removing unreachable block (ram,0x00010217c0d0) */

long FUN_10217bfe8(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  undefined8 uVar7;
  
  uVar5 = *(ulong *)(param_1 + 0x18);
  lVar2 = *(long *)(param_1 + 0x20);
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c5fadc(uVar7);
  func_0x000107c4f558();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c5dc0c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = lVar3;
      func_0x000107c5ee30();
      func_0x000107c61170(lVar3);
      uVar1 = (uint)(uVar5 >> 0x20);
      uVar6 = uVar1 >> 0x1e;
      if (uVar1 >> 0x1e < 2) {
        if (uVar6 == 0) {
          if ((uVar5 & 0xff000000000000) != 0) {
LAB_10217c09c:
            func_0x000107c610f8(PTR_PTR_1126c32b8);
            lVar3 = lVar4;
            FUN_10217c260(lVar4,uVar5);
            func_0x00010006c090(lVar4,uVar5);
            func_0x000107c61170(lVar2);
            return lVar3;
          }
        }
        else if ((long)(int)lVar4 != lVar4 >> 0x20) goto LAB_10217c09c;
      }
      else if ((uVar6 == 2) && (*(long *)(lVar4 + 0x10) != *(long *)(lVar4 + 0x18)))
      goto LAB_10217c09c;
      func_0x00010006c090(lVar4,uVar5);
    }
    func_0x000107c61170(lVar2);
  }
  return 0;
}



/* Entry: 10217c12c; end: 10217c1cb;  */

undefined1  [16] FUN_10217c12c(void)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = 0;
  uStack_28 = 0xe000000000000000;
  func_0x000107c602fc(0x22);
  uVar2 = uStack_28;
  func_0x000107c6142c();
  uStack_30 = 0xd000000000000020;
  uStack_28 = 0x800000010f067f10;
  FUN_10217bf8c();
  uVar3 = 0x112e5df40;
  uStack_38 = uVar2;
  func_0x0001000285a8(0x112e5df40,&UNK_10da65070);
  func_0x000107c5fb18(&uStack_38,uVar3);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  auVar1._8_8_ = uStack_28;
  auVar1._0_8_ = uStack_30;
  return auVar1;
}



/* Entry: 10217c1cc; end: 10217c21f;  */

void FUN_10217c1cc(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  FUN_10217c240(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10217c220; end: 10217c23f;  */

void FUN_10217c220(void)

{
  FUN_10217c12c();
  return;
}



/* Entry: 10217c240; end: 10217c25f;  */

void FUN_10217c240(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10217c260; end: 10217c31f;  */

long FUN_10217c260(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c5ee20();
  func_0x000107c4636c();
  func_0x000107c61170(param_1);
  uVar2 = 0;
  if (unaff_x20 == 0) {
    func_0x000107c61174();
    func_0x000107c5ed30(0);
    func_0x000107c61170(uVar2);
    func_0x000107c61654();
  }
  else {
    func_0x000107c61174();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return unaff_x20;
  }
  func_0x000107c60e78();
  func_0x000107c60eb0("OnDeviceMLModelsPrefetcher.OnDeviceMLModelsPrefetcher",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10217c34c);
  (*pcVar1)();
}



/* Entry: 10217c320; end: 10217c37f; -[_TtC26OnDeviceMLModelsPrefetcher26OnDeviceMLModelsPrefetcher init] */

void FUN_10217c320(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("OnDeviceMLModelsPrefetcher.OnDeviceMLModelsPrefetcher",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10217c34c);
  (*pcVar1)();
}



/* Entry: 10217c380; end: 10217c437; -[_TtC26OnDeviceMLModelsPrefetcher26OnDeviceMLModelsPrefetcher .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010217c3bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010217c3fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010217c3c0) */
/* WARNING: Removing unreachable block (ram,0x00010217c400) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10217c380(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e5df48));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e5df50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112e5df58));
  return;
}



/* Entry: 10217c438; end: 10217c457;  */

void FUN_10217c438(void)

{
  func_0x000107c61168(&PTR_PTR_112822630);
  return;
}



/* Entry: 10217c458; end: 10217c483; -[_TtC26OnDeviceMLModelsPrefetcher26OnDeviceMLModelsPrefetcher dataSyncerIdentifier] */

void FUN_10217c458(void)

{
  func_0x000107c5fadc(0xd000000000000025,0x800000010f068070);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10217c484; end: 10217c48b; -[_TtC26OnDeviceMLModelsPrefetcher26OnDeviceMLModelsPrefetcher submitOnRegister] */

undefined8 FUN_10217c484(void)

{
  return 1;
}



/* Entry: 10217c48c; end: 10217c807;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10217c48c(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  
  puVar2 = PTR_PTR_1126b7228;
  func_0x000107c610f8(PTR_PTR_1126b7228);
  func_0x000107c453e4();
  puVar3 = PTR_PTR_1126b7238;
  func_0x000107c610f8(PTR_PTR_1126b7238);
  func_0x000107c453e4();
  puVar4 = PTR_PTR_1126b7248;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar5 = puVar4;
  FUN_10217bf8c();
  if (puVar5 == (undefined *)0x0) {
    lVar10 = 0;
  }
  else {
    puVar6 = puVar5;
    func_0x000107c4ed14();
    func_0x000107c61170(puVar5);
    lVar10 = (long)(int)puVar6;
  }
  uVar9 = lVar10 * 0x3c;
  if (SUB168(SEXT816(lVar10) * SEXT816(0x3c),8) != (long)uVar9 >> 0x3f) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10217c7f0);
    (*pcVar1)();
  }
  if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10217c7f4);
    (*pcVar1)();
  }
  if (uVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10217c7f8);
    (*pcVar1)();
  }
  func_0x000107c57d34(puVar4);
  func_0x000107c57c1c(puVar3);
  func_0x000107c55974(puVar2);
  puVar5 = PTR_PTR_1126b7240;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar6 = puVar5;
  FUN_10217bf8c();
  if (puVar6 != (undefined *)0x0) {
    func_0x000107c4d590();
    func_0x000107c61170(puVar6);
  }
  puVar6 = puVar5;
  func_0x000107c56a40();
  FUN_10217bf8c();
  if (puVar6 != (undefined *)0x0) {
    func_0x000107c3e720();
    func_0x000107c61170(puVar6);
  }
  puVar6 = puVar5;
  func_0x000107c52c2c();
  FUN_10217bf8c();
  if (puVar6 == (undefined *)0x0) {
LAB_10217c5f4:
    FUN_10217bf8c();
    if (puVar6 != (undefined *)0x0) {
      puVar7 = puVar6;
      func_0x000107c4ed2c();
      func_0x000107c61170();
      if ((int)puVar7 == 3) goto LAB_10217c618;
    }
  }
  else {
    puVar7 = puVar6;
    func_0x000107c4ed2c();
    func_0x000107c61170();
    if ((int)puVar7 != 2) goto LAB_10217c5f4;
LAB_10217c618:
    FUN_10217bf8c();
    if (puVar6 != (undefined *)0x0) {
      puVar7 = puVar6;
      func_0x000107c4ed38();
      func_0x000107c61170();
      if ((int)puVar7 != 0) {
        puVar6 = puVar5;
        func_0x000107c3de68();
        func_0x000107c61180();
        if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10217c800);
          (*pcVar1)();
        }
        func_0x000107c3d93c();
        func_0x000107c61170();
      }
    }
    FUN_10217bf8c();
    if (puVar6 != (undefined *)0x0) {
      puVar7 = puVar6;
      func_0x000107c4ed30();
      func_0x000107c61170();
      if ((int)puVar7 != 0) {
        puVar6 = puVar5;
        func_0x000107c3de68();
        func_0x000107c61180();
        if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10217c804);
          (*pcVar1)();
        }
        func_0x000107c3d93c();
        func_0x000107c61170();
      }
    }
    FUN_10217bf8c();
    if (puVar6 != (undefined *)0x0) {
      puVar7 = puVar6;
      func_0x000107c4ed34();
      func_0x000107c61170();
      if ((int)puVar7 != 0) {
        puVar6 = puVar5;
        func_0x000107c3de68();
        func_0x000107c61180();
        if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10217c808);
          (*pcVar1)();
        }
        func_0x000107c3d93c();
        func_0x000107c61170();
      }
    }
  }
  FUN_10217bf8c();
  if (puVar6 == (undefined *)0x0) {
LAB_10217c714:
    FUN_10217bf8c();
    if (puVar6 == (undefined *)0x0) goto LAB_10217c760;
    puVar7 = puVar6;
    func_0x000107c4ed2c();
    func_0x000107c61170(puVar6);
    if ((int)puVar7 != 3) goto LAB_10217c760;
  }
  else {
    puVar7 = puVar6;
    func_0x000107c4ed2c();
    func_0x000107c61170();
    if ((int)puVar7 != 1) goto LAB_10217c714;
  }
  puVar6 = puVar5;
  func_0x000107c3de68();
  func_0x000107c61180();
  if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10217c7fc);
    (*pcVar1)();
  }
  func_0x000107c3d93c();
  func_0x000107c61170(puVar6);
LAB_10217c760:
  func_0x000107c55958(puVar2);
  func_0x000107c54734(puVar2);
  uVar8 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f068070);
  func_0x000107c5597c(puVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c55968(puVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar5);
  return puVar2;
}



/* Entry: 10217c808; end: 10217c83b; -[_TtC26OnDeviceMLModelsPrefetcher26OnDeviceMLModelsPrefetcher jobConfig] */

void FUN_10217c808(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10217c48c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10217c83c; end: 10217ca83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10217c83c(code *param_1,undefined8 param_2)

{
  long lVar1;
  code *pcVar2;
  code *pcVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar7 = &puStack_80;
  pcVar2 = param_1;
  FUN_10217bf8c();
  if (pcVar2 != (code *)0x0) {
    pcVar3 = pcVar2;
    func_0x000107c4ed2c();
    func_0x000107c61170();
    if ((int)pcVar3 != 0) {
      FUN_10217bf8c();
      if (pcVar2 != (code *)0x0) {
        pcVar3 = pcVar2;
        func_0x000107c4ed2c();
        func_0x000107c61170(pcVar2);
        if ((int)pcVar3 == -0x4524111) goto LAB_10217c8bc;
      }
      uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112e5df60);
      puVar5 = &UNK_1104d6828;
      func_0x000107c613fc(&UNK_1104d6828,0x18,7);
      func_0x000107c61614(puVar5 + 0x10);
      puVar6 = &UNK_1104d6850;
      func_0x000107c613fc(&UNK_1104d6850,0x28,7);
      *(undefined **)(puVar6 + 0x10) = puVar5;
      *(code **)(puVar6 + 0x18) = param_1;
      *(undefined8 *)(puVar6 + 0x20) = param_2;
      pcStack_60 = FUN_10217e834;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_1000f6b44;
      puStack_68 = &UNK_1104d6868;
      puStack_58 = puVar6;
      func_0x000107c60bc4(&puStack_80);
      puVar5 = puStack_58;
      FUN_10212d7c8(param_1,param_2);
      func_0x000107c61574(puVar5);
      func_0x000107c4e524(uVar9);
      func_0x000107c60bd0(ppuVar7);
      return;
    }
  }
LAB_10217c8bc:
  lVar1 = _DAT_112e5e0f8;
  lVar11 = *(long *)(unaff_x20 + _DAT_112e5df68);
  uVar8 = *(undefined8 *)(lVar11 + _DAT_112e5e0f8);
  uVar10 = 0x64656c6261736964;
  uVar9 = uVar10;
  func_0x000107c5fadc(0x64656c6261736964,0xe800000000000000);
  func_0x000105c197f4(uVar8,uVar9,1);
  func_0x000107c61170(uVar9);
  uVar9 = *(undefined8 *)(lVar11 + lVar1);
  func_0x000107c5fadc(0x64656c6261736964,0xe800000000000000);
  func_0x000105c19968(uVar9,uVar10,0);
  func_0x000107c61170(uVar10);
  puVar4 = (undefined1 *)0x0;
  FUN_102174824(0,0x3eb);
  if (param_1 == (code *)0x0) {
    return;
  }
  FUN_102176b2c();
  puVar5 = &UNK_1104d6010;
  func_0x000107c613f8(&UNK_1104d6010,puVar4,0,0);
  *puVar4 = 2;
  (*param_1)(2,puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(puVar5);
  return;
}



/* Entry: 10217ca84; end: 10217caf3;  */

void FUN_10217ca84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_10217caf4(param_2,param_3);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 10217caf4; end: 10217d207;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10217caf4(undefined8 param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined *puVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined **ppuVar18;
  long extraout_x8;
  long lVar19;
  long extraout_x12;
  long extraout_x13;
  long unaff_x20;
  long lVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  undefined8 uStack_180;
  long lStack_178;
  long lStack_170;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
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
  
  lVar5 = 0;
  lVar8 = param_2;
  func_0x000107c5eec8();
  lVar22 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar22 + 0x40));
  lVar20 = (long)&uStack_180 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  func_0x000107c5eea4();
  lVar24 = *(long *)(lVar6 + -8);
  lVar7 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar19 = lVar20 - (extraout_x13 + 0xfU & 0xfffffffffffffff0);
  lStack_178 = extraout_x13;
  lStack_170 = lVar19;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar19 = lVar19 - extraout_x12;
  func_0x000107c5eea0();
  lVar21 = *(long *)(unaff_x20 + _DAT_112e5df70);
  func_0x000107c5eec4(lVar20);
  func_0x000107c5eeac();
  (**(code **)(lVar22 + 8))(lVar20,lVar5);
  plVar1 = (long *)(lVar21 + _DAT_112e5dc08);
  lVar5 = plVar1[1];
  *plVar1 = lVar7;
  plVar1[1] = lVar8;
  func_0x000107c6142c(lVar5);
  lVar7 = *(long *)(*(long *)(unaff_x20 + _DAT_112e5df68) + _DAT_112e5e0f8);
  func_0x000105c1977c(lVar7,1);
  FUN_10217475c();
  uStack_180 = *(undefined8 *)(unaff_x20 + _DAT_112e5df48);
  FUN_10217bf8c();
  puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar7 != 0) {
    lVar8 = lVar7;
    func_0x000107c4d0ac();
    func_0x000107c61180();
    func_0x000107c61170(lVar7);
    puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar8 != 0) {
      puStack_e0 = (undefined *)0x0;
      uVar9 = 0;
      FUN_10217e898(0);
      func_0x000107c5fc50(lVar8,&puStack_e0,uVar9);
      func_0x000107c61170(lVar8);
      if (puStack_e0 != (undefined *)0x0) {
        puVar15 = puStack_e0;
      }
    }
  }
  if ((ulong)puVar15 >> 0x3e == 0) {
    puVar10 = *(undefined **)(((ulong)puVar15 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar10 = (undefined *)((ulong)puVar15 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar15) {
      puVar10 = puVar15;
    }
    func_0x000107c60480();
  }
  puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar10 != (undefined *)0x0) {
    uVar23 = 0;
    uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112e5df58);
    do {
      if (((ulong)puVar15 & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)puVar15 & 0xffffffffffffff8) + 0x10) <= uVar23) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10217d1f4);
          (*pcVar4)();
        }
        uVar11 = *(ulong *)(puVar15 + uVar23 * 8 + 0x20);
        func_0x000107c61174(uVar11);
      }
      else {
        uVar11 = uVar23;
        func_0x000102183cf8(uVar23,puVar15);
      }
      puVar16 = (undefined *)(uVar23 + 1);
      if (SCARRY8(uVar23,1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10217d1f0);
        (*pcVar4)();
      }
      FUN_102177044(&puStack_e0,uVar11,uVar9);
      lVar7 = lStack_d8;
      puVar3 = puStack_e0;
      if (lStack_d8 == 0) {
        FUN_10217d29c(param_1,param_2,0,lVar19);
        func_0x000107c61170(uVar11);
        func_0x000107c6142c(puVar15);
        goto LAB_10217d1b4;
      }
      uStack_98 = uStack_c8;
      uStack_a0 = uStack_d0;
      uStack_88 = uStack_b8;
      uStack_90 = uStack_c0;
      uStack_78 = uStack_a8;
      uStack_80 = uStack_b0;
      puStack_110 = (undefined *)0x0;
      uStack_108 = 0xe000000000000000;
      func_0x000107c602fc(0x2d);
      func_0x000107c6142c(uStack_108);
      puStack_110 = (undefined *)0xd00000000000002b;
      uStack_108 = 0x800000010f067f40;
      func_0x000107c61434(lVar7);
      func_0x000107c5fb78(puVar3,lVar7);
      func_0x000107c6142c(lVar7);
      func_0x000107c6142c(uStack_108);
      puVar12 = puVar14;
      func_0x000107c61558();
      puVar13 = puVar14;
      if (((ulong)puVar12 & 1) == 0) {
        puVar13 = (undefined *)0x0;
        func_0x000102183ebc(0,*(long *)(puVar14 + 0x10) + 1,1,puVar14);
      }
      uVar2 = *(ulong *)(puVar13 + 0x10);
      puVar14 = puVar13;
      if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar2) {
        puVar14 = (undefined *)(ulong)(1 < *(ulong *)(puVar13 + 0x18));
        func_0x000102183ebc(puVar14,uVar2 + 1,1,puVar13);
      }
      *(ulong *)(puVar14 + 0x10) = uVar2 + 1;
      *(undefined **)(puVar14 + uVar2 * 0x40 + 0x20) = puVar3;
      *(long *)(puVar14 + uVar2 * 0x40 + 0x28) = lVar7;
      *(undefined8 *)(puVar14 + uVar2 * 0x40 + 0x48) = uStack_88;
      *(undefined8 *)(puVar14 + uVar2 * 0x40 + 0x40) = uStack_90;
      *(undefined8 *)(puVar14 + uVar2 * 0x40 + 0x58) = uStack_78;
      *(undefined8 *)(puVar14 + uVar2 * 0x40 + 0x50) = uStack_80;
      *(undefined8 *)(puVar14 + uVar2 * 0x40 + 0x38) = uStack_98;
      *(undefined8 *)(puVar14 + uVar2 * 0x40 + 0x30) = uStack_a0;
      func_0x000107c61170(uVar11);
      uVar23 = uVar23 + 1;
    } while (puVar16 != puVar10);
  }
  func_0x000107c6142c();
  if (*(long *)(puVar14 + 0x10) == 0) {
    FUN_10217d29c(param_1,param_2,0,lVar19);
  }
  else {
    *(undefined1 *)(unaff_x20 + _DAT_112e5df98) = 0;
    FUN_10217bf8c();
    puVar10 = PTR___NSConcreteStackBlock_11034bd00;
    if (puVar15 != (undefined *)0x0) {
      puVar16 = puVar15;
      func_0x000107c498e4();
      func_0x000107c61170(puVar15);
      if ((int)puVar16 != 0) {
        uVar17 = *(undefined8 *)(unaff_x20 + _DAT_112e5df78);
        func_0x000107c5e370();
        func_0x000107c61180();
        puVar15 = &UNK_1104d6828;
        func_0x000107c613fc(&UNK_1104d6828,0x18,7);
        func_0x000107c61614(puVar15 + 0x10,unaff_x20);
        pcStack_f0 = FUN_10217e890;
        puStack_110 = puVar10;
        uStack_108 = 0x42000000;
        puStack_100 = &UNK_100c1de60;
        puStack_f8 = &UNK_1104d68e0;
        ppuVar18 = &puStack_110;
        puStack_e8 = puVar15;
        func_0x000107c60bc4(ppuVar18);
        func_0x000107c61574(puStack_e8);
        uVar9 = uVar17;
        func_0x000107c5c320();
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar18);
        func_0x000107c61170(uVar17);
        uVar17 = *(undefined8 *)(unaff_x20 + _DAT_112e5df80);
        *(undefined8 *)(unaff_x20 + _DAT_112e5df80) = uVar9;
        func_0x000107c61174(uVar9);
        func_0x000107c4218c(uVar17);
        func_0x000107c61170(uVar9);
        func_0x000107c61170(uVar17);
      }
    }
    uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112e5df60);
    puVar15 = &UNK_1104d6828;
    func_0x000107c613fc(&UNK_1104d6828,0x18,7);
    func_0x000107c61614(puVar15 + 0x10,unaff_x20);
    lVar7 = lStack_170;
    (**(code **)(lVar24 + 0x10))(lStack_170,lVar19,lVar6);
    uVar23 = (ulong)*(byte *)(lVar24 + 0x50);
    uVar11 = uVar23 + 0x30 & (uVar23 ^ 0xffffffffffffffff);
    puVar10 = &UNK_1104d68a0;
    func_0x000107c613fc(&UNK_1104d68a0,uVar11 + lStack_178,uVar23 | 7);
    *(undefined **)(puVar10 + 0x10) = puVar15;
    *(undefined8 *)(puVar10 + 0x18) = param_1;
    *(long *)(puVar10 + 0x20) = param_2;
    *(undefined **)(puVar10 + 0x28) = puVar14;
    (**(code **)(lVar24 + 0x20))(puVar10 + uVar11,lVar7,lVar6);
    pcStack_f0 = FUN_10217e85c;
    puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_108 = 0x42000000;
    puStack_100 = &UNK_1000f6b44;
    puStack_f8 = &UNK_1104d68b8;
    ppuVar18 = &puStack_110;
    puStack_e8 = puVar10;
    func_0x000107c60bc4(ppuVar18);
    puVar15 = puStack_e8;
    FUN_10212d7c8(param_1,param_2);
    func_0x000107c61434(puVar14);
    func_0x000107c61574(puVar15);
    func_0x000107c4e524(uVar9);
    func_0x000107c60bd0(ppuVar18);
  }
LAB_10217d1b4:
  (**(code **)(lVar24 + 8))(lVar19,lVar6);
  func_0x000107c6142c(puVar14);
  return;
}



/* Entry: 10217d208; end: 10217d293; -[_TtC26OnDeviceMLModelsPrefetcher26OnDeviceMLModelsPrefetcher onSync:] */

void FUN_10217d208(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    pcVar2 = (code *)0x0;
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = &UNK_1104d6800;
    func_0x000107c613fc(&UNK_1104d6800,0x18,7);
    *(long *)(puVar1 + 0x10) = param_3;
    pcVar2 = FUN_10217d294;
  }
  func_0x000107c61174(param_1);
  FUN_10217c83c(pcVar2,puVar1);
  FUN_10212d6a4(pcVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10217d294; end: 10217d29b;  */

void FUN_10217d294(undefined8 param_1,long param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5ed2c(param_2);
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10217d29c; end: 10217d577;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10217d29c(double param_1,code *param_2,undefined8 param_3,ulong param_4,undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  long extraout_x8;
  long unaff_x20;
  long lVar8;
  long lVar9;
  double dVar10;
  undefined8 uStack_90;
  undefined1 uStack_81;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar2 = 0;
  uStack_90 = param_3;
  func_0x000107c5eea4();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar8 = (long)&uStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112e5df90);
  *(undefined8 *)(unaff_x20 + _DAT_112e5df90) = 0;
  func_0x000107c615e8(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112e5df80);
  *(undefined8 *)(unaff_x20 + _DAT_112e5df80) = 0;
  func_0x000107c4218c(uVar3);
  func_0x000107c61170(uVar3);
  uStack_80 = 0;
  uStack_78 = 0xe000000000000000;
  func_0x000107c602fc(0x1f);
  func_0x000107c5fb78(0xd00000000000001c,0x800000010f068050);
  uStack_81 = (char)param_4;
  func_0x000107c603d0(&uStack_81,&uStack_80,&UNK_1104d6010,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0x2e,0xe100000000000000);
  func_0x000107c6142c(uStack_78);
  func_0x000107c5eea0(lVar8);
  func_0x000107c5ee68(param_5);
  (**(code **)(lVar9 + 8))(lVar8,lVar2);
  lVar9 = *(long *)(unaff_x20 + _DAT_112e5df68);
  uVar4 = param_4;
  FUN_102176b6c(param_4);
  lVar8 = _DAT_112e5e0f8;
  dVar10 = (double)(long)(param_1 * 1000.0);
  if (0x7fefffffffffffff < (ulong)ABS(dVar10)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10217d564);
    (*pcVar1)();
  }
  if (dVar10 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10217d568);
    (*pcVar1)();
  }
  if (9.223372036854776e+18 <= dVar10) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10217d56c);
    (*pcVar1)();
  }
  uVar3 = *(undefined8 *)(lVar9 + _DAT_112e5e0f8);
  uVar5 = uVar4;
  func_0x000107c5fadc();
  func_0x000105c197f4(uVar3,uVar5,1);
  func_0x000107c61170(uVar5);
  uVar3 = *(undefined8 *)(lVar9 + lVar8);
  func_0x000107c5fadc(uVar4,lVar2);
  func_0x000105c19968(uVar3,uVar4,(long)dVar10);
  func_0x000107c6142c(lVar2);
  func_0x000107c61170(uVar4);
  if ((ulong)ABS(param_1) < 0x7ff0000000000000) {
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10217d574);
      (*pcVar1)();
    }
    if (param_1 < 9.223372036854776e+18) {
      puVar6 = (undefined1 *)(long)param_1;
      FUN_102174824(puVar6,(param_4 & 0xff) + 0x3e9);
      if (param_2 != (code *)0x0) {
        FUN_102176b2c();
        puVar7 = &UNK_1104d6010;
        func_0x000107c613f8(&UNK_1104d6010,puVar6,0,0);
        *puVar6 = (char)param_4;
        (*param_2)(2,puVar7);
        func_0x000107c614ac(puVar7);
      }
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10217d578);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10217d570);
  (*pcVar1)();
}



/* Entry: 10217d578; end: 10217d697;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10217d578(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  ppuVar3 = &puStack_90;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  lVar1 = param_2 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(lVar1 + _DAT_112e5df60);
    func_0x000107c615f0(uVar4);
    func_0x000107c61170(lVar1);
    puVar2 = &UNK_1104d6828;
    func_0x000107c613fc(&UNK_1104d6828,0x18,7);
    func_0x000107c61428(param_2 + 0x10,auStack_60,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618(param_2);
    func_0x000107c61614(puVar2 + 0x10,param_2);
    func_0x000107c61170(param_2);
    pcStack_70 = FUN_10217e8dc;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_1104d6908;
    puStack_68 = puVar2;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c61574(puStack_68);
    func_0x000107c4e524(uVar4);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(uVar4);
  }
  return;
}



/* Entry: 10217d698; end: 10217d74b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10217d698(long param_1)

{
  long lVar1;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  lVar1 = param_1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + _DAT_112e5df98) = 1;
    func_0x000107c61170();
  }
  func_0x000107c61428(param_1 + 0x10,auStack_50,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + _DAT_112e5df90);
    if (lVar1 == 0) {
      func_0x000107c61170();
    }
    else {
      func_0x000107c615f0(lVar1);
      func_0x000107c61170(param_1);
      func_0x000107c3f474(lVar1);
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 10217d74c; end: 10217e11b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10217d74c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_140 [8];
  undefined *puStack_138;
  ulong uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 auStack_c8 [24];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar9 = *(long *)(lVar3 + -8);
  lVar12 = *(long *)(lVar9 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000107c61428(param_1 + 0x10,auStack_c8,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    if (*(char *)(param_1 + _DAT_112e5df98) == '\x01') {
      FUN_10217d29c(param_2,param_3,7,param_5);
    }
    else {
      puVar4 = &UNK_1104d6940;
      func_0x000107c613fc(&UNK_1104d6940,0x18,7);
      *(long *)(puVar4 + 0x10) = param_4;
      puStack_110 = puVar4;
      if (*(long *)(param_4 + 0x10) != 0) {
        uStack_a8 = *(undefined8 *)(param_4 + 0x28);
        uStack_b0 = *(undefined8 *)(param_4 + 0x20);
        uStack_98 = *(undefined8 *)(param_4 + 0x38);
        uStack_a0 = *(undefined8 *)(param_4 + 0x30);
        uStack_88 = *(undefined8 *)(param_4 + 0x48);
        uStack_90 = *(undefined8 *)(param_4 + 0x40);
        uStack_78 = *(undefined8 *)(param_4 + 0x58);
        uStack_80 = *(undefined8 *)(param_4 + 0x50);
        func_0x000107c61434(param_4);
        FUN_10217ba98(&uStack_b0,&uStack_108);
        func_0x00010217e9a0(0,1);
        uStack_108 = 0;
        uStack_100 = 0xe000000000000000;
        func_0x000107c602fc(0x2c);
        func_0x000107c6142c(uStack_100);
        uVar2 = uStack_a8;
        uVar10 = uStack_b0;
        uStack_108 = 0xd00000000000002a;
        uStack_100 = 0x800000010f067f70;
        uStack_128 = param_2;
        func_0x000107c61434(uStack_a8);
        func_0x000107c5fb78(uVar10,uVar2);
        func_0x000107c6142c(uVar2);
        func_0x000107c6142c(uStack_100);
        uStack_118 = *(undefined8 *)(param_1 + _DAT_112e5df50);
        uStack_120 = *(undefined8 *)(param_1 + _DAT_112e5df60);
        puVar4 = &UNK_1104d6828;
        func_0x000107c613fc(&UNK_1104d6828,0x18,7);
        puStack_138 = puVar4;
        func_0x000107c61614(puVar4 + 0x10,param_1);
        (**(code **)(lVar9 + 0x10))
                  (auStack_140 + -(lVar12 + 0xfU & 0xfffffffffffffff0),param_5,lVar3);
        uVar7 = (ulong)*(byte *)(lVar9 + 0x50);
        uVar11 = uVar7 + 0x68 & (uVar7 ^ 0xffffffffffffffff);
        uStack_130 = lVar12 + uVar11 + 7 & 0xfffffffffffffff8;
        lVar8 = uStack_130 + 8;
        lVar13 = uStack_130 + 0x10;
        puVar5 = &UNK_1104d6968;
        func_0x000107c613fc(&UNK_1104d6968,uStack_130 + 0x18,uVar7 | 7);
        uVar10 = uStack_128;
        *(undefined **)(puVar5 + 0x10) = puVar4;
        *(undefined8 *)(puVar5 + 0x20) = uStack_a8;
        *(undefined8 *)(puVar5 + 0x18) = uStack_b0;
        *(undefined8 *)(puVar5 + 0x30) = uStack_98;
        *(undefined8 *)(puVar5 + 0x28) = uStack_a0;
        *(undefined8 *)(puVar5 + 0x40) = uStack_88;
        *(undefined8 *)(puVar5 + 0x38) = uStack_90;
        *(undefined8 *)(puVar5 + 0x50) = uStack_78;
        *(undefined8 *)(puVar5 + 0x48) = uStack_80;
        *(undefined8 *)(puVar5 + 0x58) = uStack_128;
        *(undefined8 *)(puVar5 + 0x60) = param_3;
        (**(code **)(lVar9 + 0x20))
                  (puVar5 + uVar11,auStack_140 + -(lVar12 + 0xfU & 0xfffffffffffffff0),lVar3);
        puVar1 = puStack_110;
        puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
        *(undefined **)(puVar5 + uStack_130) = PTR___swiftEmptyArrayStorage_11034f1c8;
        *(undefined **)(puVar5 + lVar8) = puVar4;
        *(undefined **)(puVar5 + lVar13) = puStack_110;
        FUN_10217ba98(&uStack_b0,&uStack_108);
        puVar4 = puStack_138;
        func_0x000107c6157c(puStack_138);
        FUN_10212d7c8(uVar10,param_3);
        func_0x000107c6157c(puVar1);
        puVar6 = &uStack_b0;
        FUN_10217914c(puVar6,uStack_120,FUN_10217ea5c,puVar5);
        func_0x000107c61574(puVar5);
        FUN_10217bcf8(&uStack_b0);
        func_0x000107c61574(puVar4);
        uVar10 = *(undefined8 *)(param_1 + _DAT_112e5df90);
        *(undefined8 **)(param_1 + _DAT_112e5df90) = puVar6;
        func_0x000107c61574(puVar1);
        func_0x000107c61170(param_1);
        func_0x000107c615e8(uVar10);
        return;
      }
      func_0x000107c61434(param_4);
      func_0x000107c61574(puStack_110);
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 10217e11c; end: 10217e41f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10217e11c(double param_1,code *param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  long unaff_x20;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  double dVar14;
  undefined8 uStack_90;
  undefined1 uStack_81;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar6 = 0;
  uStack_78 = param_3;
  func_0x000107c5eea4();
  lVar9 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar13 = (long)&uStack_80 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112e5df90);
  *(undefined8 *)(unaff_x20 + _DAT_112e5df90) = 0;
  func_0x000107c615e8(uVar7);
  lVar10 = *(long *)(unaff_x20 + _DAT_112e5df80);
  *(undefined8 *)(unaff_x20 + _DAT_112e5df80) = 0;
  func_0x000107c4218c(lVar10);
  func_0x000107c61170();
  FUN_10217bf8c();
  if (lVar10 != 0) {
    lVar8 = lVar10;
    func_0x000107c4d0a8();
    func_0x000107c61170();
    if ((int)lVar8 != 0) {
      FUN_10217bf8c();
      if (lVar10 != 0) {
        lVar8 = lVar10;
        func_0x000107c4edb0();
        func_0x000107c61170();
        if ((int)lVar8 != 0) {
          FUN_10217bf8c();
          if (lVar10 == 0) goto LAB_10217e258;
          lVar8 = lVar10;
          func_0x000107c4edb0();
          func_0x000107c61170(lVar10);
          if ((int)lVar8 != -0x4524111) goto LAB_10217e258;
        }
      }
      FUN_10217f6b8(param_4,*(undefined8 *)(unaff_x20 + _DAT_112e5df88));
      if (((uint)param_4 & 0xff) != 0xd) {
        uStack_90 = uStack_78;
        lVar10 = 0;
        func_0x000107c5eea4();
        lVar9 = *(long *)(lVar10 + -8);
        (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
        lVar6 = (long)&uStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
        uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112e5df90);
        *(undefined8 *)(unaff_x20 + _DAT_112e5df90) = 0;
        func_0x000107c615e8(uVar7);
        uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112e5df80);
        *(undefined8 *)(unaff_x20 + _DAT_112e5df80) = 0;
        func_0x000107c4218c(uVar7);
        func_0x000107c61170(uVar7);
        uStack_80 = 0;
        uStack_78 = 0xe000000000000000;
        func_0x000107c602fc(0x1f);
        func_0x000107c5fb78(0xd00000000000001c,0x800000010f068050);
        uStack_81 = (char)param_4;
        func_0x000107c603d0(&uStack_81,&uStack_80,&UNK_1104d6010,
                            PTR___ss26DefaultStringInterpolationVN_11034ec00,
                            PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
        func_0x000107c5fb78(0x2e,0xe100000000000000);
        func_0x000107c6142c(uStack_78);
        func_0x000107c5eea0(lVar6);
        func_0x000107c5ee68(param_6);
        (**(code **)(lVar9 + 8))(lVar6,lVar10);
        lVar9 = *(long *)(unaff_x20 + _DAT_112e5df68);
        uVar2 = param_4;
        FUN_102176b6c(param_4);
        lVar6 = _DAT_112e5e0f8;
        dVar14 = (double)(long)(param_1 * 1000.0);
        if (0x7fefffffffffffff < (ulong)ABS(dVar14)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10217d564);
          (*pcVar1)();
        }
        if (dVar14 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10217d568);
          (*pcVar1)();
        }
        if (9.223372036854776e+18 <= dVar14) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10217d56c);
          (*pcVar1)();
        }
        uVar7 = *(undefined8 *)(lVar9 + _DAT_112e5e0f8);
        uVar3 = uVar2;
        func_0x000107c5fadc();
        func_0x000105c197f4(uVar7,uVar3,1);
        func_0x000107c61170(uVar3);
        uVar7 = *(undefined8 *)(lVar9 + lVar6);
        func_0x000107c5fadc(uVar2,lVar10);
        func_0x000105c19968(uVar7,uVar2,(long)dVar14);
        func_0x000107c6142c(lVar10);
        func_0x000107c61170(uVar2);
        if ((ulong)ABS(param_1) < 0x7ff0000000000000) {
          if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10217d574);
            (*pcVar1)();
          }
          if (param_1 < 9.223372036854776e+18) {
            puVar4 = (undefined1 *)(long)param_1;
            FUN_102174824(puVar4,(param_4 & 0xff) + 0x3e9);
            if (param_2 != (code *)0x0) {
              FUN_102176b2c();
              puVar5 = &UNK_1104d6010;
              func_0x000107c613f8(&UNK_1104d6010,puVar4,0,0);
              *puVar4 = (char)param_4;
              (*param_2)(2,puVar5);
              func_0x000107c614ac(puVar5);
            }
            return;
          }
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10217d578);
          (*pcVar1)();
        }
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10217d570);
        (*pcVar1)();
      }
    }
  }
LAB_10217e258:
  func_0x000107c5eea0(lVar13);
  func_0x000107c5ee68(param_6);
  (**(code **)(lVar9 + 8))(lVar13,lVar6);
  lVar6 = _DAT_112e5e0f8;
  dVar14 = (double)(long)(param_1 * 1000.0);
  if (0x7fefffffffffffff < (ulong)ABS(dVar14)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10217e40c);
    (*pcVar1)();
  }
  if (dVar14 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10217e410);
    (*pcVar1)();
  }
  if (9.223372036854776e+18 <= dVar14) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10217e414);
    (*pcVar1)();
  }
  lVar10 = *(long *)(unaff_x20 + _DAT_112e5df68);
  uVar11 = *(undefined8 *)(lVar10 + _DAT_112e5e0f8);
  uVar12 = 0x73736563637573;
  uVar7 = uVar12;
  func_0x000107c5fadc(0x73736563637573,0xe700000000000000);
  func_0x000105c197f4(uVar11,uVar7,1);
  func_0x000107c61170(uVar7);
  uVar7 = *(undefined8 *)(lVar10 + lVar6);
  func_0x000107c5fadc(0x73736563637573,0xe700000000000000);
  func_0x000105c19968(uVar7,uVar12,(long)dVar14);
  func_0x000107c61170(uVar12);
  if ((ulong)ABS(param_1) < 0x7ff0000000000000) {
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10217e41c);
      (*pcVar1)();
    }
    if (param_1 < 9.223372036854776e+18) {
      FUN_102174824((long)param_1,200);
      if (param_2 != (code *)0x0) {
        (*param_2)(0,0);
      }
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10217e420);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10217e418);
  (*pcVar1)();
}



/* Entry: 10217e420; end: 10217e833;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10217e420(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined *puStack_170;
  long lStack_168;
  ulong uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar5 = 0;
  uStack_128 = param_2;
  func_0x000107c5eea4();
  lVar13 = *(long *)(lVar5 + -8);
  lVar12 = *(long *)(lVar13 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = (long)&puStack_170 - (lVar12 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(param_1 + 0x10,auStack_c8,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uStack_130 = param_5;
    func_0x000107c61428(param_4 + 0x10,auStack_e0,0,0);
    lVar14 = *(long *)(param_4 + 0x10);
    if (*(char *)(param_1 + _DAT_112e5df98) == '\x01') {
      func_0x000107c61434(lVar14);
      FUN_10217d29c(uStack_128,param_3,7,param_7);
      func_0x000107c6142c(lVar14);
    }
    else {
      puVar6 = &UNK_1104d6940;
      func_0x000107c613fc(&UNK_1104d6940,0x18,7);
      *(long *)(puVar6 + 0x10) = lVar14;
      puStack_138 = puVar6;
      if (*(long *)(lVar14 + 0x10) != 0) {
        uStack_a8 = *(undefined8 *)(lVar14 + 0x28);
        uStack_b0 = *(undefined8 *)(lVar14 + 0x20);
        uStack_98 = *(undefined8 *)(lVar14 + 0x38);
        uStack_a0 = *(undefined8 *)(lVar14 + 0x30);
        uStack_88 = *(undefined8 *)(lVar14 + 0x48);
        uStack_90 = *(undefined8 *)(lVar14 + 0x40);
        uStack_78 = *(undefined8 *)(lVar14 + 0x58);
        uStack_80 = *(undefined8 *)(lVar14 + 0x50);
        func_0x000107c61438(lVar14,2);
        FUN_10217ba98(&uStack_b0,&uStack_120);
        func_0x00010217e9a0(0,1);
        uStack_120 = 0;
        uStack_118 = 0xe000000000000000;
        func_0x000107c602fc(0x2c);
        func_0x000107c6142c(uStack_118);
        uVar1 = uStack_a8;
        uVar10 = uStack_b0;
        uStack_120 = 0xd00000000000002a;
        uStack_118 = 0x800000010f067f70;
        uStack_158 = param_3;
        uStack_150 = param_6;
        func_0x000107c61434(uStack_a8);
        func_0x000107c5fb78(uVar10,uVar1);
        func_0x000107c6142c(uVar1);
        func_0x000107c6142c(uStack_118);
        uStack_140 = *(undefined8 *)(param_1 + _DAT_112e5df50);
        uStack_148 = *(undefined8 *)(param_1 + _DAT_112e5df60);
        puVar6 = &UNK_1104d6828;
        func_0x000107c613fc(&UNK_1104d6828,0x18,7);
        puStack_170 = puVar6;
        func_0x000107c61614(puVar6 + 0x10,param_1);
        (**(code **)(lVar13 + 0x10))(lVar15,param_7,lVar5);
        uVar9 = (ulong)*(byte *)(lVar13 + 0x50);
        uVar11 = uVar9 + 0x68 & (uVar9 ^ 0xffffffffffffffff);
        uStack_160 = lVar12 + uVar11 + 7 & 0xfffffffffffffff8;
        lStack_168 = uStack_160 + 8;
        lVar12 = uStack_160 + 0x10;
        puVar7 = &UNK_1104d69e0;
        func_0x000107c613fc(&UNK_1104d69e0,uStack_160 + 0x18,uVar9 | 7);
        uVar4 = uStack_128;
        uVar10 = uStack_158;
        *(undefined **)(puVar7 + 0x10) = puVar6;
        *(undefined8 *)(puVar7 + 0x20) = uStack_a8;
        *(undefined8 *)(puVar7 + 0x18) = uStack_b0;
        *(undefined8 *)(puVar7 + 0x30) = uStack_98;
        *(undefined8 *)(puVar7 + 0x28) = uStack_a0;
        *(undefined8 *)(puVar7 + 0x40) = uStack_88;
        *(undefined8 *)(puVar7 + 0x38) = uStack_90;
        *(undefined8 *)(puVar7 + 0x50) = uStack_78;
        *(undefined8 *)(puVar7 + 0x48) = uStack_80;
        *(undefined8 *)(puVar7 + 0x58) = uStack_128;
        *(undefined8 *)(puVar7 + 0x60) = uStack_158;
        (**(code **)(lVar13 + 0x20))(puVar7 + uVar11,lVar15,lVar5);
        uVar3 = uStack_130;
        puVar2 = puStack_138;
        uVar1 = uStack_150;
        *(undefined8 *)(puVar7 + uStack_160) = uStack_130;
        *(undefined8 *)(puVar7 + lStack_168) = uStack_150;
        *(undefined **)(puVar7 + lVar12) = puStack_138;
        FUN_10217ba98(&uStack_b0,&uStack_120);
        puVar6 = puStack_170;
        func_0x000107c6157c(puStack_170);
        FUN_10212d7c8(uVar4,uVar10);
        func_0x000107c61434(uVar3);
        func_0x000107c61434(uVar1);
        func_0x000107c6157c(puVar2);
        puVar8 = &uStack_b0;
        FUN_10217914c(puVar8,uStack_148,0x10217ec30,puVar7);
        func_0x000107c61574(puVar7);
        func_0x000107c6142c(lVar14);
        FUN_10217bcf8(&uStack_b0);
        func_0x000107c61574(puVar6);
        uVar10 = *(undefined8 *)(param_1 + _DAT_112e5df90);
        *(undefined8 **)(param_1 + _DAT_112e5df90) = puVar8;
        func_0x000107c61574(puVar2);
        func_0x000107c61170(param_1);
        func_0x000107c615e8(uVar10);
        return;
      }
      func_0x000107c61434(lVar14);
      func_0x000107c61574(puStack_138);
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 10217e834; end: 10217e85b;  */

void FUN_10217e834(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    FUN_10217caf4(uVar1,uVar3);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 10217e85c; end: 10217e88f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10217e85c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long unaff_x20;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined1 auStack_140 [8];
  undefined *puStack_138;
  ulong uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 auStack_c8 [24];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar9 = 0;
  func_0x000107c5eea4();
  uVar10 = (ulong)*(byte *)(*(long *)(lVar9 + -8) + 0x50);
  lVar9 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar16 = *(long *)(unaff_x20 + 0x28);
  lVar11 = unaff_x20 + (uVar10 + 0x30 & (uVar10 ^ 0xffffffffffffffff));
  lVar5 = 0;
  func_0x000107c5eea4();
  lVar12 = *(long *)(lVar5 + -8);
  lVar15 = *(long *)(lVar12 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000107c61428(lVar9 + 0x10,auStack_c8,0,0);
  lVar9 = lVar9 + 0x10;
  func_0x000107c61618();
  if (lVar9 != 0) {
    if (*(char *)(lVar9 + _DAT_112e5df98) == '\x01') {
      FUN_10217d29c(uVar1,uVar13,7,lVar11);
    }
    else {
      puVar6 = &UNK_1104d6940;
      func_0x000107c613fc(&UNK_1104d6940,0x18,7);
      *(long *)(puVar6 + 0x10) = lVar16;
      puStack_110 = puVar6;
      if (*(long *)(lVar16 + 0x10) != 0) {
        uStack_a8 = *(undefined8 *)(lVar16 + 0x28);
        uStack_b0 = *(undefined8 *)(lVar16 + 0x20);
        uStack_98 = *(undefined8 *)(lVar16 + 0x38);
        uStack_a0 = *(undefined8 *)(lVar16 + 0x30);
        uStack_88 = *(undefined8 *)(lVar16 + 0x48);
        uStack_90 = *(undefined8 *)(lVar16 + 0x40);
        uStack_78 = *(undefined8 *)(lVar16 + 0x58);
        uStack_80 = *(undefined8 *)(lVar16 + 0x50);
        func_0x000107c61434(lVar16);
        FUN_10217ba98(&uStack_b0,&uStack_108);
        func_0x00010217e9a0(0,1);
        uStack_108 = 0;
        uStack_100 = 0xe000000000000000;
        func_0x000107c602fc(0x2c);
        func_0x000107c6142c(uStack_100);
        uVar4 = uStack_a8;
        uVar3 = uStack_b0;
        uStack_108 = 0xd00000000000002a;
        uStack_100 = 0x800000010f067f70;
        uStack_128 = uVar1;
        func_0x000107c61434(uStack_a8);
        func_0x000107c5fb78(uVar3,uVar4);
        func_0x000107c6142c(uVar4);
        func_0x000107c6142c(uStack_100);
        uStack_118 = *(undefined8 *)(lVar9 + _DAT_112e5df50);
        uStack_120 = *(undefined8 *)(lVar9 + _DAT_112e5df60);
        puVar6 = &UNK_1104d6828;
        func_0x000107c613fc(&UNK_1104d6828,0x18,7);
        puStack_138 = puVar6;
        func_0x000107c61614(puVar6 + 0x10,lVar9);
        (**(code **)(lVar12 + 0x10))
                  (auStack_140 + -(lVar15 + 0xfU & 0xfffffffffffffff0),lVar11,lVar5);
        uVar10 = (ulong)*(byte *)(lVar12 + 0x50);
        uVar14 = uVar10 + 0x68 & (uVar10 ^ 0xffffffffffffffff);
        uStack_130 = lVar15 + uVar14 + 7 & 0xfffffffffffffff8;
        lVar11 = uStack_130 + 8;
        lVar16 = uStack_130 + 0x10;
        puVar7 = &UNK_1104d6968;
        func_0x000107c613fc(&UNK_1104d6968,uStack_130 + 0x18,uVar10 | 7);
        uVar1 = uStack_128;
        *(undefined **)(puVar7 + 0x10) = puVar6;
        *(undefined8 *)(puVar7 + 0x20) = uStack_a8;
        *(undefined8 *)(puVar7 + 0x18) = uStack_b0;
        *(undefined8 *)(puVar7 + 0x30) = uStack_98;
        *(undefined8 *)(puVar7 + 0x28) = uStack_a0;
        *(undefined8 *)(puVar7 + 0x40) = uStack_88;
        *(undefined8 *)(puVar7 + 0x38) = uStack_90;
        *(undefined8 *)(puVar7 + 0x50) = uStack_78;
        *(undefined8 *)(puVar7 + 0x48) = uStack_80;
        *(undefined8 *)(puVar7 + 0x58) = uStack_128;
        *(undefined8 *)(puVar7 + 0x60) = uVar13;
        (**(code **)(lVar12 + 0x20))
                  (puVar7 + uVar14,auStack_140 + -(lVar15 + 0xfU & 0xfffffffffffffff0),lVar5);
        puVar2 = puStack_110;
        puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
        *(undefined **)(puVar7 + uStack_130) = PTR___swiftEmptyArrayStorage_11034f1c8;
        *(undefined **)(puVar7 + lVar11) = puVar6;
        *(undefined **)(puVar7 + lVar16) = puStack_110;
        FUN_10217ba98(&uStack_b0,&uStack_108);
        puVar6 = puStack_138;
        func_0x000107c6157c(puStack_138);
        FUN_10212d7c8(uVar1,uVar13);
        func_0x000107c6157c(puVar2);
        puVar8 = &uStack_b0;
        FUN_10217914c(puVar8,uStack_120,FUN_10217ea5c,puVar7);
        func_0x000107c61574(puVar7);
        FUN_10217bcf8(&uStack_b0);
        func_0x000107c61574(puVar6);
        uVar13 = *(undefined8 *)(lVar9 + _DAT_112e5df90);
        *(undefined8 **)(lVar9 + _DAT_112e5df90) = puVar8;
        func_0x000107c61574(puVar2);
        func_0x000107c61170(lVar9);
        func_0x000107c615e8(uVar13);
        return;
      }
      func_0x000107c61434(lVar16);
      func_0x000107c61574(puStack_110);
    }
    func_0x000107c61170(lVar9);
  }
  return;
}



/* Entry: 10217e890; end: 10217e897;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10217e890(void)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  ppuVar3 = &puStack_90;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(lVar1 + _DAT_112e5df60);
    func_0x000107c615f0(uVar4);
    func_0x000107c61170(lVar1);
    puVar2 = &UNK_1104d6828;
    func_0x000107c613fc(&UNK_1104d6828,0x18,7);
    func_0x000107c61428(unaff_x20 + 0x10,auStack_60,0,0);
    lVar1 = unaff_x20 + 0x10;
    func_0x000107c61618(lVar1);
    func_0x000107c61614(puVar2 + 0x10,lVar1);
    func_0x000107c61170(lVar1);
    pcStack_70 = FUN_10217e8dc;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_1104d6908;
    puStack_68 = puVar2;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c61574(puStack_68);
    func_0x000107c4e524(uVar4);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(uVar4);
  }
  return;
}



/* Entry: 10217e898; end: 10217e8db;  */

void FUN_10217e898(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e5dfc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126c32c0;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112e5dfc8 = puVar1;
  return;
}



/* Entry: 10217e8dc; end: 10217e8e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10217e8dc(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + _DAT_112e5df98) = 1;
    func_0x000107c61170();
  }
  func_0x000107c61428(unaff_x20 + 0x10,auStack_50,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + _DAT_112e5df90);
    if (lVar2 == 0) {
      func_0x000107c61170();
    }
    else {
      func_0x000107c615f0(lVar2);
      func_0x000107c61170(lVar1);
      func_0x000107c3f474(lVar2);
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 10217e8e4; end: 10217ea5b;  */

void FUN_10217e8e4(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  long *unaff_x20;
  long lVar7;
  
  lVar4 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10217e990);
    (*pcVar6)();
  }
  lVar7 = *unaff_x20;
  lVar1 = lVar7 + 0x20 + param_1 * 0x40;
  func_0x000107c61408(lVar1,lVar4,&UNK_1104d5f68);
  lVar5 = param_3 - lVar4;
  if (SBORROW8(param_3,lVar4)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10217e994);
    (*pcVar6)();
  }
  if (lVar5 != 0) {
    lVar4 = *(long *)(lVar7 + 0x10) - param_2;
    if (SBORROW8(*(long *)(lVar7 + 0x10),param_2)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10217e998);
      (*pcVar6)();
    }
    uVar2 = lVar1 + param_3 * 0x40;
    uVar3 = lVar7 + 0x20 + param_2 * 0x40;
    if (uVar2 != uVar3 || uVar3 + lVar4 * 0x40 <= uVar2) {
      func_0x000107c610b8(uVar2,uVar3,lVar4 * 0x40);
    }
    if (SCARRY8(*(long *)(lVar7 + 0x10),lVar5)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10217e99c);
      (*pcVar6)();
    }
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + lVar5;
  }
  if (param_3 < 1) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10217e9a0);
  (*pcVar6)();
}



/* Entry: 10217ea5c; end: 10217ea5f;  */

void FUN_10217ea5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  uVar3 = uVar2 + 0x68 & (uVar2 ^ 0xffffffffffffffff);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + uVar3 + 7 & 0xfffffffffffffff8;
  func_0x00010217dac0(param_1,param_2,param_3,param_4,*(undefined8 *)(unaff_x20 + 0x10),
                      unaff_x20 + 0x18,*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),unaff_x20 + uVar3,
                      *(undefined8 *)(unaff_x20 + uVar2),*(undefined8 *)(unaff_x20 + uVar2 + 8),
                      *(undefined8 *)(unaff_x20 + (uVar2 + 0x17 & 0xffffffffffffff8)));
  return;
}



/* Entry: 10217ea60; end: 10217ea97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10217ea60(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  long unaff_x20;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined *puStack_170;
  long lStack_168;
  ulong uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar9 = 0;
  func_0x000107c5eea4();
  uVar10 = (ulong)*(byte *)(*(long *)(lVar9 + -8) + 0x50);
  lVar9 = *(long *)(unaff_x20 + 0x10);
  uStack_128 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar15 = *(long *)(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  lVar16 = unaff_x20 + (uVar10 + 0x40 & (uVar10 ^ 0xffffffffffffffff));
  lVar5 = 0;
  func_0x000107c5eea4();
  lVar14 = *(long *)(lVar5 + -8);
  lVar13 = *(long *)(lVar14 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar17 = (long)&puStack_170 - (lVar13 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(lVar9 + 0x10,auStack_c8,0,0);
  lVar9 = lVar9 + 0x10;
  func_0x000107c61618();
  if (lVar9 != 0) {
    uStack_130 = uVar1;
    func_0x000107c61428(lVar15 + 0x10,auStack_e0,0,0);
    lVar15 = *(long *)(lVar15 + 0x10);
    if (*(char *)(lVar9 + _DAT_112e5df98) == '\x01') {
      func_0x000107c61434(lVar15);
      FUN_10217d29c(uStack_128,uVar11,7,lVar16);
      func_0x000107c6142c(lVar15);
    }
    else {
      puVar6 = &UNK_1104d6940;
      func_0x000107c613fc(&UNK_1104d6940,0x18,7);
      *(long *)(puVar6 + 0x10) = lVar15;
      puStack_138 = puVar6;
      if (*(long *)(lVar15 + 0x10) != 0) {
        uStack_a8 = *(undefined8 *)(lVar15 + 0x28);
        uStack_b0 = *(undefined8 *)(lVar15 + 0x20);
        uStack_98 = *(undefined8 *)(lVar15 + 0x38);
        uStack_a0 = *(undefined8 *)(lVar15 + 0x30);
        uStack_88 = *(undefined8 *)(lVar15 + 0x48);
        uStack_90 = *(undefined8 *)(lVar15 + 0x40);
        uStack_78 = *(undefined8 *)(lVar15 + 0x58);
        uStack_80 = *(undefined8 *)(lVar15 + 0x50);
        func_0x000107c61438(lVar15,2);
        FUN_10217ba98(&uStack_b0,&uStack_120);
        func_0x00010217e9a0(0,1);
        uStack_120 = 0;
        uStack_118 = 0xe000000000000000;
        func_0x000107c602fc(0x2c);
        func_0x000107c6142c(uStack_118);
        uVar4 = uStack_a8;
        uVar1 = uStack_b0;
        uStack_120 = 0xd00000000000002a;
        uStack_118 = 0x800000010f067f70;
        uStack_158 = uVar11;
        uStack_150 = uVar2;
        func_0x000107c61434(uStack_a8);
        func_0x000107c5fb78(uVar1,uVar4);
        func_0x000107c6142c(uVar4);
        func_0x000107c6142c(uStack_118);
        uStack_140 = *(undefined8 *)(lVar9 + _DAT_112e5df50);
        uStack_148 = *(undefined8 *)(lVar9 + _DAT_112e5df60);
        puVar6 = &UNK_1104d6828;
        func_0x000107c613fc(&UNK_1104d6828,0x18,7);
        puStack_170 = puVar6;
        func_0x000107c61614(puVar6 + 0x10,lVar9);
        (**(code **)(lVar14 + 0x10))(lVar17,lVar16,lVar5);
        uVar10 = (ulong)*(byte *)(lVar14 + 0x50);
        uVar12 = uVar10 + 0x68 & (uVar10 ^ 0xffffffffffffffff);
        uStack_160 = lVar13 + uVar12 + 7 & 0xfffffffffffffff8;
        lStack_168 = uStack_160 + 8;
        lVar16 = uStack_160 + 0x10;
        puVar7 = &UNK_1104d69e0;
        func_0x000107c613fc(&UNK_1104d69e0,uStack_160 + 0x18,uVar10 | 7);
        uVar4 = uStack_128;
        uVar11 = uStack_158;
        *(undefined **)(puVar7 + 0x10) = puVar6;
        *(undefined8 *)(puVar7 + 0x20) = uStack_a8;
        *(undefined8 *)(puVar7 + 0x18) = uStack_b0;
        *(undefined8 *)(puVar7 + 0x30) = uStack_98;
        *(undefined8 *)(puVar7 + 0x28) = uStack_a0;
        *(undefined8 *)(puVar7 + 0x40) = uStack_88;
        *(undefined8 *)(puVar7 + 0x38) = uStack_90;
        *(undefined8 *)(puVar7 + 0x50) = uStack_78;
        *(undefined8 *)(puVar7 + 0x48) = uStack_80;
        *(undefined8 *)(puVar7 + 0x58) = uStack_128;
        *(undefined8 *)(puVar7 + 0x60) = uStack_158;
        (**(code **)(lVar14 + 0x20))(puVar7 + uVar12,lVar17,lVar5);
        uVar2 = uStack_130;
        puVar3 = puStack_138;
        uVar1 = uStack_150;
        *(undefined8 *)(puVar7 + uStack_160) = uStack_130;
        *(undefined8 *)(puVar7 + lStack_168) = uStack_150;
        *(undefined **)(puVar7 + lVar16) = puStack_138;
        FUN_10217ba98(&uStack_b0,&uStack_120);
        puVar6 = puStack_170;
        func_0x000107c6157c(puStack_170);
        FUN_10212d7c8(uVar4,uVar11);
        func_0x000107c61434(uVar2);
        func_0x000107c61434(uVar1);
        func_0x000107c6157c(puVar3);
        puVar8 = &uStack_b0;
        FUN_10217914c(puVar8,uStack_148,0x10217ec30,puVar7);
        func_0x000107c61574(puVar7);
        func_0x000107c6142c(lVar15);
        FUN_10217bcf8(&uStack_b0);
        func_0x000107c61574(puVar6);
        uVar11 = *(undefined8 *)(lVar9 + _DAT_112e5df90);
        *(undefined8 **)(lVar9 + _DAT_112e5df90) = puVar8;
        func_0x000107c61574(puVar3);
        func_0x000107c61170(lVar9);
        func_0x000107c615e8(uVar11);
        return;
      }
      func_0x000107c61434(lVar15);
      func_0x000107c61574(puStack_138);
    }
    func_0x000107c61170(lVar9);
  }
  return;
}



/* Entry: 10217ea98; end: 10217ec0f;  */

void FUN_10217ea98(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x20;
  ulong uVar4;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x40));
  if (*(long *)(unaff_x20 + 0x58) != 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  }
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50) + 0x68 &
          ((ulong)*(byte *)(lVar2 + 0x50) ^ 0xffffffffffffffff);
  uVar4 = *(long *)(lVar2 + 0x40) + uVar3 + 7 & 0xfffffffffffffff8;
  (**(code **)(lVar2 + 8))(unaff_x20 + uVar3,lVar1);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + uVar4));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + uVar4 + 8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + uVar4 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10217ec10; end: 10217ec33;  */

void FUN_10217ec10(long param_1,long param_2)

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



/* Entry: 10217ec34; end: 10217f4eb;  */

void FUN_10217ec34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9f398,&UNK_10d93fb00);
  puVar1 = &UNK_1104d6a08;
  func_0x000107c613fc(&UNK_1104d6a08,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  *(undefined8 *)(puVar1 + 0x28) = param_6;
  *(undefined8 *)(puVar1 + 0x30) = param_1;
  *(undefined8 *)(puVar1 + 0x38) = param_4;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_7);
  func_0x0001000823a8(FUN_10217f4ec,puVar1);
  return;
}



/* Entry: 10217f4ec; end: 10217f50f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10217f4ec(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  undefined8 uVar15;
  long extraout_x8;
  long extraout_x12;
  long *plVar16;
  undefined8 uVar17;
  long unaff_x20;
  undefined8 *puVar18;
  long *plStack_150;
  long lStack_148;
  long *plStack_140;
  undefined1 *puStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  long lStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined8 auStack_d8 [3];
  long lStack_c0;
  undefined **ppuStack_b8;
  long alStack_b0 [3];
  long lStack_98;
  undefined **ppuStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  uVar17 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x40);
  func_0x000100083b20(alStack_b0,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  lVar4 = alStack_b0[0];
  lVar1 = alStack_b0[0];
  func_0x000107c40430();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  func_0x000100083b20(alStack_b0);
  lVar4 = alStack_b0[0];
  lVar2 = alStack_b0[0];
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  if (lVar2 == 0) {
LAB_10217eeb0:
    func_0x000107c61170(lVar1);
  }
  else {
    func_0x000100083b20(alStack_b0);
    lVar4 = alStack_b0[0];
    lVar3 = *(long *)(alStack_b0[0] + _DAT_113093a98);
    func_0x000107c61174();
    func_0x000107c61170(lVar4);
    lVar4 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar4 == 0) {
      func_0x000107c615e8(lVar2);
      goto LAB_10217eeb0;
    }
    lVar5 = 0;
    uStack_110 = uVar15;
    func_0x00010217c200();
    func_0x000107c613fc();
    *(undefined8 *)(lVar5 + 0x10) = 0xd000000000000023;
    *(undefined8 *)(lVar5 + 0x18) = 0x800000010f0680e0;
    *(long *)(lVar5 + 0x20) = lVar2;
    *(undefined8 *)(lVar5 + 0x28) = 1;
    lVar3 = lVar2;
    func_0x000107c615f0();
    FUN_10217bf8c();
    if (lVar3 != 0) {
      lVar7 = lVar3;
      func_0x000107c4ed2c();
      func_0x000107c61170(lVar3);
      if ((int)lVar7 != 0) {
        lVar3 = *(long *)(lVar5 + 0x28);
        puStack_120 = param_1;
        if (lVar3 != 0) {
          func_0x000107c4ed2c();
          if ((int)lVar3 == -0x4524111) goto LAB_10217ee84;
          if (*(long *)(lVar5 + 0x28) != 0) {
            func_0x000107c4ec74();
          }
        }
        uVar15 = 0xd000000000000023;
        func_0x000107c5fadc(0xd000000000000023,0x800000010f068110);
        lVar3 = lVar4;
        func_0x000107c4e60c();
        func_0x000107c61180();
        lStack_128 = lVar3;
        func_0x000107c61170(uVar15);
        puVar6 = PTR_PTR_1126a9fe0;
        func_0x000107c610f8();
        func_0x000107c453e4();
        lVar7 = 0;
        FUN_102185670();
        lVar3 = lVar7;
        func_0x000107c610f8();
        *(undefined **)(lVar3 + _DAT_112e5e0f8) = puVar6;
        plVar8 = &lStack_78;
        lStack_78 = lVar3;
        lStack_70 = lVar7;
        func_0x000107c61154(plVar8,PTR_s_init_1125d9248);
        plStack_140 = plVar8;
        func_0x000100083b20(alStack_b0);
        lVar3 = alStack_b0[0];
        uVar15 = *(undefined8 *)(alStack_b0[0] + _DAT_113083868);
        func_0x000107c61174();
        func_0x000107c61170(lVar3);
        lVar7 = 0;
        FUN_102174ed4();
        lVar3 = lVar7;
        func_0x000107c610f8();
        puVar18 = (undefined8 *)(lVar3 + _DAT_112e5dc08);
        *puVar18 = 0;
        puVar18[1] = 0;
        *(undefined8 *)(lVar3 + _DAT_112e5dc00) = uVar15;
        plVar8 = &lStack_88;
        lStack_88 = lVar3;
        lStack_80 = lVar7;
        func_0x000107c61154(plVar8,PTR_s_init_1125d9248);
        plStack_150 = plVar8;
        func_0x000100083b20(alStack_b0);
        lStack_118 = alStack_b0[0];
        lVar9 = 0;
        func_0x000102176228();
        lVar7 = lVar9;
        func_0x000107c613fc();
        *(long *)(lVar7 + 0x10) = lVar1;
        ppuStack_90 = &PTR_DAT_1104d5e10;
        lVar10 = 0;
        alStack_b0[0] = lVar7;
        lStack_98 = lVar9;
        FUN_10217b8b8();
        lStack_148 = lVar10;
        func_0x000107c610f8();
        func_0x0001000c6518(alStack_b0,lVar9);
        puStack_138 = (undefined1 *)&plStack_150;
        (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
        puVar18 = (undefined8 *)((long)&plStack_150 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
        (**(code **)(extraout_x12 + 0x10))(puVar18);
        lVar3 = _DAT_112e5de60;
        auStack_d8[0] = *puVar18;
        ppuStack_b8 = &PTR_DAT_1104d5e10;
        lStack_c0 = lVar9;
        func_0x00010006a340(0);
        func_0x000107c613fc();
        func_0x000107c61580(uVar17,2);
        func_0x000107c61174();
        lStack_130 = lVar1;
        func_0x000107c6157c(lVar5);
        plVar11 = plStack_140;
        func_0x000107c61174();
        plVar12 = plStack_150;
        func_0x000107c61174();
        lVar1 = lVar7;
        func_0x000107c6157c();
        func_0x00010006a360();
        *(long *)(lVar10 + lVar3) = lVar1;
        FUN_10217f658(auStack_d8,lVar10 + _DAT_112e5de30);
        *(long *)(lVar10 + _DAT_112e5de38) = lVar5;
        *(long **)(lVar10 + _DAT_112e5de40) = plVar11;
        *(long **)(lVar10 + _DAT_112e5de48) = plVar12;
        puVar18 = (undefined8 *)(lVar10 + _DAT_112e5de50);
        *puVar18 = FUN_10217f648;
        puVar18[1] = uVar17;
        puVar18 = (undefined8 *)(lVar10 + _DAT_112e5de58);
        *puVar18 = 0x10217f650;
        puVar18[1] = uVar17;
        puVar6 = PTR_s_init_1125d9248;
        lStack_e0 = lStack_148;
        lStack_e8 = lVar10;
        func_0x000107c6157c(lVar5);
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61580(uVar17,2);
        plVar8 = &lStack_e8;
        func_0x000107c61154(plVar8,puVar6);
        plStack_140 = plVar8;
        func_0x000107c61574(lVar5);
        func_0x000107c61170(plVar11);
        func_0x000107c61170(plVar12);
        func_0x000107c61578(uVar17,2);
        func_0x000107c61574(lVar7);
        func_0x0001000834e4(auStack_d8);
        func_0x0001000834e4(alStack_b0);
        func_0x000107c6157c(lVar5);
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000100083b20(alStack_b0);
        lVar1 = alStack_b0[0];
        lVar3 = alStack_b0[0];
        func_0x000107c4cffc();
        func_0x000107c61180();
        func_0x000107c61170(lVar1);
        lVar1 = lStack_118;
        uVar17 = *(undefined8 *)(lStack_118 + _DAT_113091b58);
        lVar9 = 0;
        FUN_1021805f0();
        lVar7 = lVar9;
        func_0x000107c610f8();
        *(long *)(lVar7 + _DAT_112e5dfd0) = lVar5;
        *(long **)(lVar7 + _DAT_112e5dfd8) = plVar11;
        *(long **)(lVar7 + _DAT_112e5dfe0) = plVar12;
        *(long *)(lVar7 + _DAT_112e5dfe8) = lVar3;
        *(undefined8 *)(lVar7 + _DAT_112e5dff0) = uVar17;
        puVar6 = PTR_s_init_1125d9248;
        lStack_f8 = lVar7;
        lStack_f0 = lVar9;
        func_0x000107c61174(uVar17);
        plVar13 = &lStack_f8;
        func_0x000107c61154(plVar13,puVar6);
        uVar17 = *(undefined8 *)(lVar1 + _DAT_113091b70);
        lVar7 = 0;
        FUN_10217c438();
        lVar3 = lVar7;
        func_0x000107c610f8();
        lVar1 = lStack_128;
        plVar8 = plStack_140;
        *(undefined8 *)(lVar3 + _DAT_112e5df80) = 0;
        *(undefined8 *)(lVar3 + _DAT_112e5df90) = 0;
        *(undefined1 *)(lVar3 + _DAT_112e5df98) = 0;
        *(long *)(lVar3 + _DAT_112e5df48) = lVar5;
        *(long **)(lVar3 + _DAT_112e5df50) = plStack_140;
        *(long *)(lVar3 + _DAT_112e5df58) = lVar2;
        *(long *)(lVar3 + _DAT_112e5df60) = lStack_128;
        *(long **)(lVar3 + _DAT_112e5df68) = plVar11;
        *(long **)(lVar3 + _DAT_112e5df70) = plVar12;
        *(undefined8 *)(lVar3 + _DAT_112e5df78) = uVar17;
        *(long **)(lVar3 + _DAT_112e5df88) = plVar13;
        puVar6 = PTR_s_init_1125d9248;
        lStack_108 = lVar3;
        lStack_100 = lVar7;
        func_0x000107c615f0(lVar2);
        func_0x000107c6157c(lVar5);
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c615f0(lVar1);
        func_0x000107c615f0(uVar17);
        func_0x000107c61174();
        plVar14 = &lStack_108;
        func_0x000107c61154(plVar14,puVar6);
        func_0x0001000a0a8c(0);
        plVar16 = plVar14;
        func_0x000104494b00();
        func_0x000107c61170(plVar14);
        func_0x000107c615e8(lVar4);
        func_0x000107c61170(lStack_118);
        func_0x000107c61170(plVar13);
        func_0x000107c615e8(lVar1);
        func_0x000107c61170(plVar8);
        func_0x000107c61170(plVar12);
        func_0x000107c61170(plVar11);
        func_0x000107c61574(lVar5);
        func_0x000107c61170(lStack_130);
        func_0x000107c615e8(lVar2);
        param_1 = puStack_120;
        goto LAB_10217eebc;
      }
    }
LAB_10217ee84:
    func_0x000107c61574(lVar5);
    func_0x000107c61170(lVar1);
    func_0x000107c615e8(lVar2);
    func_0x000107c615e8(lVar4);
  }
  plVar16 = (long *)0x0;
LAB_10217eebc:
  *param_1 = plVar16;
  return;
}



/* Entry: 10217f510; end: 10217f647;  */

uint FUN_10217f510(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c4ec80(uStack_38);
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  FUN_1021767c8(param_1,param_2,uVar1);
  func_0x000107c61170(uVar1);
  return (uint)param_1 & 1;
}



/* Entry: 10217f648; end: 10217f657;  */

uint FUN_10217f648(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c4ec80(uStack_38);
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  FUN_1021767c8(param_1,param_2,uVar1);
  func_0x000107c61170(uVar1);
  return (uint)param_1 & 1;
}



/* Entry: 10217f658; end: 10217f69b;  */

long FUN_10217f658(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 10217f69c; end: 10217f6b7;  */

void FUN_10217f69c(void)

{
  long unaff_x20;
  
  FUN_1021762d0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 10217f6b8; end: 102180527;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10217f6b8(long param_1,long param_2)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x12;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  code *pcVar12;
  long lVar13;
  undefined8 *puVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_1e0 [8];
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  undefined8 *puStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined1 *puStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long lStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  byte bStack_d1;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  double dStack_90;
  undefined8 uStack_88;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lStack_198 = *(long *)(lVar2 + -8);
  lStack_160 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_198 + 0x40));
  puStack_1a0 = auStack_1e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_138 = (long)(auStack_1e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == 0) {
    uVar11 = 0;
    puVar9 = (undefined *)0x0;
  }
  else {
    uStack_190 = *(undefined8 *)(param_2 + _DAT_112e5dfd0);
    lStack_168 = *(long *)(param_2 + _DAT_112e5dfd8);
    lStack_178 = *(long *)(param_2 + _DAT_112e5dfe0);
    lStack_1c8 = *(long *)(param_2 + _DAT_112e5dfe8);
    lStack_170 = _DAT_112e5e0f8;
    puStack_1c0 = (undefined8 *)(lStack_178 + _DAT_112e5dc08);
    lStack_1b8 = _DAT_112e5dc00;
    puVar14 = (undefined8 *)(param_1 + 0x20);
    uVar3 = 0;
    lStack_1a8 = param_2;
    func_0x0001000295c4();
    puVar9 = (undefined *)0x0;
    uVar11 = 0;
    uStack_1d0 = 0x800000010f068140;
    uStack_1d8 = 0x800000010f068170;
    uStack_1b0 = uVar3;
    do {
      uVar8 = puVar14[1];
      uVar3 = *puVar14;
      uStack_148 = puVar14[3];
      uStack_158 = puVar14[2];
      uStack_140 = puVar14[5];
      uStack_150 = puVar14[4];
      uStack_188 = puVar14[7];
      uStack_a0 = puVar14[6];
      uStack_88 = puVar14[9];
      dVar15 = (double)puVar14[8];
      bStack_d1 = 0;
      puVar4 = &uStack_d0;
      uStack_d0 = uVar3;
      uStack_c8 = uVar8;
      uStack_c0 = uStack_158;
      uStack_b8 = uStack_148;
      uStack_b0 = uStack_150;
      uStack_a8 = uStack_140;
      uStack_98 = uStack_188;
      dStack_90 = dVar15;
      FUN_1021815c8(puVar4,&puStack_128);
      func_0x000107c5ffdc();
      puVar5 = &UNK_1104d6ac8;
      func_0x000107c613fc(&UNK_1104d6ac8,0x20,7);
      *(byte **)(puVar5 + 0x10) = &bStack_d1;
      *(long *)(puVar5 + 0x18) = lStack_1a8;
      func_0x000107c61174();
      func_0x00010058d43c(uVar11,puVar9);
      puVar9 = &UNK_1104d6af0;
      func_0x000107c613fc(&UNK_1104d6af0,0x20,7);
      *(undefined8 *)(puVar9 + 0x10) = 0x10218169c;
      *(undefined **)(puVar9 + 0x18) = puVar5;
      uStack_108 = 0x102181698;
      puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_120 = 0x42000000;
      puStack_118 = &UNK_10006eb60;
      puStack_110 = &UNK_1104d6b08;
      ppuVar6 = &puStack_128;
      puStack_180 = puVar5;
      puStack_100 = puVar9;
      func_0x000107c60bc4(ppuVar6);
      puVar5 = puStack_100;
      func_0x000107c6157c(puVar9);
      func_0x000107c61574(puVar5);
      func_0x00010006eaa4(puVar4,ppuVar6);
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c61170(puVar4);
      puVar5 = puVar9;
      func_0x000107c61544(puVar9,"",0x56,0x26,0x25,1);
      func_0x000107c61574();
      if (((ulong)puVar5 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x1021804f8);
        (*pcVar12)();
      }
      FUN_10217bf8c();
      if (puVar9 != (undefined *)0x0) {
        puVar5 = puVar9;
        func_0x000107c498e4();
        func_0x000107c61170();
        if (((ulong)puVar5 & 1) != 0) {
          FUN_10217bf8c();
          if (puVar9 != (undefined *)0x0) {
            puVar5 = puVar9;
            func_0x000107c4edb0();
            func_0x000107c61170(puVar9);
            if ((int)puVar5 == 1) goto LAB_10217fa80;
          }
          if ((bStack_d1 & 1) == 0) {
            puStack_128 = (undefined *)0x0;
            uStack_120 = 0xe000000000000000;
            func_0x000107c602fc(0x34);
            func_0x000107c5fb78(0xd000000000000032,0x800000010f0681d0);
            func_0x000107c5fb78(uVar3,uVar8);
            func_0x000107c6142c(uVar8);
            func_0x000107c6142c(uStack_120);
            lVar10 = lStack_168;
            lVar2 = lStack_170;
            uVar8 = *(undefined8 *)(lStack_168 + lStack_170);
            uVar3 = 0x6572705f706f7473;
            uVar11 = uVar3;
            func_0x000107c5fadc(0x6572705f706f7473,0xee00665f64616f6c);
            func_0x000105c1a3a4(uVar8,uVar11,1);
            func_0x000107c61170(uVar11);
            uVar11 = *(undefined8 *)(lVar10 + lVar2);
            func_0x000107c5fadc(0x6572705f706f7473,0xee00665f64616f6c);
            func_0x000105c1a518(uVar11,uVar3,0);
            func_0x000107c61170(uVar3);
            puVar9 = PTR_PTR_1126e2760;
            func_0x000107c610f8(PTR_PTR_1126e2760);
            func_0x000107c453e4();
            lVar2 = puStack_1c0[1];
            if (lVar2 == 0) {
              uVar11 = 0;
            }
            else {
              uVar11 = *puStack_1c0;
              func_0x000107c61434(lVar2);
              func_0x000107c5fadc(uVar11,lVar2);
              func_0x000107c6142c(lVar2);
            }
            uVar8 = uStack_140;
            uVar3 = uStack_148;
            puVar5 = puStack_180;
            func_0x000107c5595c(puVar9);
            func_0x000107c61170(uVar11);
            func_0x000107c52140(puVar9);
            uVar11 = uStack_158;
            func_0x000107c5fadc(uStack_158,uVar3);
            func_0x000107c56420(puVar9);
            func_0x000107c61170(uVar11);
            uVar11 = uStack_150;
            func_0x000107c5fadc(uStack_150,uVar8);
            func_0x000107c5a26c(puVar9);
            func_0x000107c61170(uVar11);
            func_0x000107c59860(puVar9);
            func_0x000107c542a8(puVar9);
            func_0x000107c55658(puVar9);
            lVar2 = *(long *)(lStack_178 + lStack_1b8);
            func_0x000107c5c734();
            func_0x000107c61180();
            if (lVar2 == 0) {
              func_0x000107c61574(puVar5);
            }
            else {
              puVar7 = puVar9;
              func_0x000107c61174(puVar9);
              func_0x000107c4bfb0(lVar2);
              func_0x000107c61574(puVar5);
              func_0x000107c615e8(lVar2);
              func_0x000107c61170(puVar7);
            }
            func_0x000107c61170(puVar9);
            func_0x000107c6142c(uStack_188);
            func_0x000107c6142c(uVar8);
            func_0x000107c6142c(uVar3);
            return 6;
          }
        }
      }
LAB_10217fa80:
      puStack_128 = (undefined *)0x0;
      uStack_120 = 0xe000000000000000;
      func_0x000107c602fc(0x27);
      func_0x000107c6142c(uStack_120);
      puStack_128 = (undefined *)0xd000000000000025;
      uStack_120 = uStack_1d0;
      func_0x000107c5fb78(uVar3,uVar8);
      func_0x000107c6142c(uStack_120);
      func_0x000107c5eea0(lStack_138);
      func_0x000105c1a32c(*(undefined8 *)(lStack_168 + lStack_170),1);
      FUN_102174d08(uStack_158,uStack_148,uStack_150,uStack_140);
      lVar10 = lStack_1c8;
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar10 == 0) {
        lVar13 = 0;
      }
      else {
        uVar11 = uVar3;
        func_0x000107c5fadc(uVar3,uVar8);
        lVar13 = lVar10;
        func_0x000107c4ed90();
        func_0x000107c61180();
        func_0x000107c615e8(lVar10);
        func_0x000107c61170(uVar11);
      }
      puVar1 = puStack_1a0;
      func_0x000107c5eea0(puStack_1a0);
      func_0x000107c5ee68(lStack_138);
      pcVar12 = *(code **)(lStack_198 + 8);
      (*pcVar12)(puVar1,lStack_160);
      if (lVar13 != 0) {
        func_0x000107c6142c(uVar8);
        puStack_128 = (undefined *)0x0;
        uStack_120 = 0xe000000000000000;
        func_0x000107c602fc(0x26);
        func_0x000107c5fb78(0xd000000000000024,0x800000010f0681a0);
        uVar11 = 0x112d393f0;
        lStack_130 = lVar13;
        func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
        func_0x000107c603d0(&lStack_130,&puStack_128,uVar11,
                            PTR___ss26DefaultStringInterpolationVN_11034ec00,
                            PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
        func_0x000107c6142c(uStack_120);
        lVar10 = lStack_168;
        lVar2 = lStack_170;
        dVar16 = (double)(long)(dVar15 * 1000.0);
        if (0x7fefffffffffffff < (ulong)ABS(dVar16)) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x102180514);
          (*pcVar12)();
        }
        if (dVar16 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x102180518);
          (*pcVar12)();
        }
        if (9.223372036854776e+18 <= dVar16) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x10218051c);
          (*pcVar12)();
        }
        uVar8 = *(undefined8 *)(lStack_168 + lStack_170);
        uVar3 = 0x5f64616f6c657270;
        uVar11 = uVar3;
        func_0x000107c5fadc(0x5f64616f6c657270,0xed0000726f727265);
        func_0x000105c1a3a4(uVar8,uVar11,1);
        func_0x000107c61170(uVar11);
        uVar11 = *(undefined8 *)(lVar10 + lVar2);
        func_0x000107c5fadc(0x5f64616f6c657270,0xed0000726f727265);
        func_0x000105c1a518(uVar11,uVar3,(long)dVar16);
        func_0x000107c61170(uVar3);
        if ((ulong)ABS(dVar15) < 0x7ff0000000000000) {
          if (dVar15 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
            pcVar12 = (code *)SoftwareBreakpoint(1,0x102180524);
            (*pcVar12)();
          }
          if (dVar15 < 9.223372036854776e+18) {
            lVar2 = lVar13;
            func_0x000107c5ed2c(lVar13);
            func_0x000107c3fcb0();
            func_0x000107c61170(lVar2);
            puVar9 = PTR_PTR_1126e2760;
            func_0x000107c610f8(PTR_PTR_1126e2760);
            func_0x000107c453e4();
            lVar2 = puStack_1c0[1];
            if (lVar2 == 0) {
              uVar11 = 0;
            }
            else {
              uVar11 = *puStack_1c0;
              func_0x000107c61434(lVar2);
              func_0x000107c5fadc(uVar11,lVar2);
              func_0x000107c6142c(lVar2);
            }
            puVar5 = puStack_180;
            func_0x000107c5595c(puVar9);
            func_0x000107c61170(uVar11);
            func_0x000107c52140(puVar9);
            uVar11 = uStack_148;
            uVar3 = uStack_158;
            func_0x000107c5fadc(uStack_158,uStack_148);
            func_0x000107c56420(puVar9);
            func_0x000107c61170(uVar3);
            uVar3 = uStack_140;
            uVar8 = uStack_150;
            func_0x000107c5fadc(uStack_150,uStack_140);
            func_0x000107c5a26c(puVar9);
            func_0x000107c61170(uVar8);
            func_0x000107c59860(puVar9);
            func_0x000107c542a8(puVar9);
            func_0x000107c55658(puVar9);
            lVar2 = *(long *)(lStack_178 + lStack_1b8);
            func_0x000107c5c734();
            func_0x000107c61180();
            if (lVar2 == 0) {
              func_0x000107c61170(puVar9);
              func_0x000107c614ac(lVar13);
            }
            else {
              func_0x000107c4bfb0();
              func_0x000107c615e8(lVar2);
              func_0x000107c614ac(lVar13);
              func_0x000107c61170(puVar9);
            }
            func_0x000107c6142c(uStack_188);
            func_0x000107c6142c(uVar3);
            func_0x000107c6142c(uVar11);
            (*pcVar12)(lStack_138,lStack_160);
            func_0x000107c61574(puVar5);
            return 5;
          }
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x102180528);
          (*pcVar12)();
        }
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x102180520);
        (*pcVar12)();
      }
      puStack_128 = (undefined *)0x0;
      uStack_120 = 0xe000000000000000;
      func_0x000107c602fc(0x26);
      func_0x000107c6142c(uStack_120);
      puStack_128 = (undefined *)0xd000000000000024;
      uStack_120 = uStack_1d8;
      func_0x000107c5fb78(uVar3,uVar8);
      func_0x000107c6142c(uVar8);
      func_0x000107c6142c(uStack_120);
      lVar13 = lStack_168;
      lVar10 = lStack_170;
      dVar16 = (double)(long)(dVar15 * 1000.0);
      if (0x7fefffffffffffff < (ulong)ABS(dVar16)) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x1021804fc);
        (*pcVar12)();
      }
      if (dVar16 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x102180500);
        (*pcVar12)();
      }
      if (9.223372036854776e+18 <= dVar16) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x102180504);
        (*pcVar12)();
      }
      uVar8 = *(undefined8 *)(lStack_168 + lStack_170);
      uVar3 = 0x73736563637573;
      uVar11 = uVar3;
      func_0x000107c5fadc(0x73736563637573,0xe700000000000000);
      func_0x000105c1a3a4(uVar8,uVar11,1);
      func_0x000107c61170(uVar11);
      uVar11 = *(undefined8 *)(lVar13 + lVar10);
      func_0x000107c5fadc(0x73736563637573,0xe700000000000000);
      func_0x000105c1a518(uVar11,uVar3,(long)dVar16);
      func_0x000107c61170(uVar3);
      if (0x7fefffffffffffff < (ulong)ABS(dVar15)) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x102180508);
        (*pcVar12)();
      }
      if (dVar15 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x10218050c);
        (*pcVar12)();
      }
      if (9.223372036854776e+18 <= dVar15) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x102180510);
        (*pcVar12)();
      }
      puVar5 = PTR_PTR_1126e2760;
      func_0x000107c610f8(PTR_PTR_1126e2760);
      func_0x000107c453e4();
      lVar10 = puStack_1c0[1];
      if (lVar10 == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = *puStack_1c0;
        func_0x000107c61434(lVar10);
        func_0x000107c5fadc(uVar11,lVar10);
        func_0x000107c6142c(lVar10);
      }
      uVar8 = uStack_140;
      uVar3 = uStack_148;
      puVar9 = puStack_180;
      func_0x000107c5595c(puVar5);
      func_0x000107c61170(uVar11);
      func_0x000107c52140(puVar5);
      uVar11 = uStack_158;
      func_0x000107c5fadc(uStack_158,uVar3);
      func_0x000107c56420(puVar5);
      func_0x000107c61170(uVar11);
      uVar11 = uStack_150;
      func_0x000107c5fadc(uStack_150,uVar8);
      func_0x000107c5a26c(puVar5);
      func_0x000107c61170(uVar11);
      func_0x000107c59860(puVar5);
      func_0x000107c542a8(puVar5);
      func_0x000107c55658(puVar5);
      lVar10 = *(long *)(lStack_178 + lStack_1b8);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar10 == 0) {
        func_0x000107c61170(puVar5);
        func_0x000107c6142c(uStack_188);
        func_0x000107c6142c(uVar8);
        func_0x000107c6142c(uVar3);
      }
      else {
        func_0x000107c4bfb0();
        func_0x000107c61170(puVar5);
        func_0x000107c6142c(uStack_188);
        func_0x000107c6142c(uVar8);
        func_0x000107c6142c(uVar3);
        func_0x000107c615e8(lVar10);
      }
      (*pcVar12)(lStack_138,lStack_160);
      puVar14 = puVar14 + 10;
      uVar11 = 0x10218169c;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  func_0x00010058d43c(uVar11,puVar9);
  return 0xd;
}



/* Entry: 102180528; end: 102180587; -[_TtC26OnDeviceMLModelsPrefetcher25OnDeviceMLModelsPreloader init] */

void FUN_102180528(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("OnDeviceMLModelsPrefetcher.OnDeviceMLModelsPreloader",0x34,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102180554);
  (*pcVar1)();
}



/* Entry: 102180588; end: 1021805ef; -[_TtC26OnDeviceMLModelsPrefetcher25OnDeviceMLModelsPreloader .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001021805b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021805d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021805b8) */
/* WARNING: Removing unreachable block (ram,0x0001021805d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102180588(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e5dfd0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e5dfd8));
  return;
}



/* Entry: 1021805f0; end: 10218060f;  */

void FUN_1021805f0(void)

{
  func_0x000107c61168(&PTR_PTR_112822740);
  return;
}



/* Entry: 102180610; end: 1021815c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_102180610(long param_1,long param_2,long param_3)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x12;
  undefined8 *puVar9;
  undefined *puVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_1f0 [8];
  code *pcStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 *puStack_1d0;
  long lStack_1c8;
  undefined1 *puStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long lStack_140;
  byte bStack_131;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  double dStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [32];
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lStack_1b8 = *(long *)(lVar2 + -8);
  lStack_180 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_1b8 + 0x40));
  puStack_1c0 = auStack_1f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = _DAT_112e5dc08;
  lStack_148 = (long)(auStack_1f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  uStack_198 = *(undefined8 *)(param_2 + _DAT_112e5dfd0);
  lStack_170 = *(long *)(param_2 + _DAT_112e5dfd8);
  lVar2 = *(long *)(param_1 + 0x10);
  lVar13 = *(long *)(param_2 + _DAT_112e5dfe0);
  lStack_1c8 = *(long *)(param_2 + _DAT_112e5dfe8);
  lStack_178 = _DAT_112e5e0f8;
  lStack_1b0 = _DAT_112e5dc00;
  lStack_1a8 = param_2;
  lStack_1a0 = param_3;
  func_0x000107c61428(param_3,auStack_90,0,0);
  if (lVar2 == 0) {
    pcStack_1e8 = (code *)0x0;
    puVar10 = (undefined *)0x0;
  }
  else {
    pcVar11 = (code *)0x0;
    puStack_1d0 = (undefined8 *)(lVar13 + lVar12);
    puVar9 = (undefined8 *)(param_1 + 0x20);
    uStack_1d8 = 0x800000010f068140;
    uStack_1e0 = 0x800000010f068170;
    pcStack_1e8 = FUN_102181618;
    puVar5 = (undefined *)0x0;
    lStack_188 = lVar13;
    do {
      uVar14 = puVar9[1];
      uVar8 = *puVar9;
      uStack_150 = puVar9[3];
      uStack_168 = puVar9[2];
      uStack_158 = puVar9[5];
      uStack_160 = puVar9[4];
      uStack_190 = puVar9[7];
      uStack_b0 = puVar9[6];
      uStack_98 = puVar9[9];
      dVar15 = (double)puVar9[8];
      lVar12 = lStack_1a0;
      uStack_e0 = uVar8;
      uStack_d8 = uVar14;
      uStack_d0 = uStack_168;
      uStack_c8 = uStack_150;
      uStack_c0 = uStack_160;
      uStack_b8 = uStack_158;
      uStack_a8 = uStack_190;
      dStack_a0 = dVar15;
      func_0x000107c61618();
      if (lVar12 == 0) {
        FUN_1021815c8(&uStack_e0,&puStack_130);
      }
      else {
        puVar3 = &uStack_e0;
        FUN_1021815c8(puVar3,&puStack_130);
        FUN_102181820();
        func_0x000107c61170(lVar12);
        if (((uint)puVar3 & 0xff) != 0xd) {
          func_0x000107c6142c(uVar14);
          func_0x000107c6142c(uStack_190);
          func_0x000107c6142c(uStack_158);
          func_0x000107c6142c(uStack_150);
          puStack_130 = (undefined *)0x0;
          uStack_128 = 0xe000000000000000;
          func_0x000107c602fc(0x3f);
          uVar8 = 0x800000010f068210;
          func_0x000107c5fb78(0xd000000000000029,0x800000010f068210);
          FUN_102176b6c(puVar3);
          func_0x000107c5fb78();
          func_0x000107c6142c(uVar8);
          func_0x000107c5fb78(0xd000000000000014,0x800000010f068240);
          func_0x000107c6142c(uStack_128);
          func_0x00010058d43c(pcVar11,puVar5);
          return puVar3;
        }
      }
      bStack_131 = 0;
      uVar4 = 0;
      func_0x0001000295c4(0);
      func_0x000107c5ffdc();
      puVar10 = &UNK_1104d6a50;
      func_0x000107c613fc(&UNK_1104d6a50,0x20,7);
      *(byte **)(puVar10 + 0x10) = &bStack_131;
      *(long *)(puVar10 + 0x18) = lStack_1a8;
      func_0x000107c61174();
      func_0x00010058d43c(pcVar11,puVar5);
      puVar5 = &UNK_1104d6a78;
      func_0x000107c613fc(&UNK_1104d6a78,0x20,7);
      *(code **)(puVar5 + 0x10) = FUN_102181618;
      *(undefined **)(puVar5 + 0x18) = puVar10;
      pcStack_110 = FUN_10218161c;
      puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_128 = 0x42000000;
      puStack_120 = &UNK_10006eb60;
      puStack_118 = &UNK_1104d6a90;
      ppuVar6 = &puStack_130;
      puStack_108 = puVar5;
      func_0x000107c60bc4(ppuVar6);
      puVar7 = puStack_108;
      func_0x000107c6157c(puVar5);
      func_0x000107c61574(puVar7);
      func_0x00010006eaa4(uVar4,ppuVar6);
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c61170(uVar4);
      puVar7 = puVar5;
      func_0x000107c61544(puVar5,"",0x56,0x26,0x25,1);
      func_0x000107c61574();
      if (((ulong)puVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x102181598);
        (*pcVar11)();
      }
      FUN_10217bf8c();
      if (puVar5 != (undefined *)0x0) {
        puVar7 = puVar5;
        func_0x000107c498e4();
        func_0x000107c61170();
        if (((ulong)puVar7 & 1) != 0) {
          FUN_10217bf8c();
          if (puVar5 != (undefined *)0x0) {
            puVar7 = puVar5;
            func_0x000107c4edb0();
            func_0x000107c61170(puVar5);
            if ((int)puVar7 == 1) goto LAB_102180a38;
          }
          if ((bStack_131 & 1) == 0) {
            puStack_130 = (undefined *)0x0;
            uStack_128 = 0xe000000000000000;
            func_0x000107c602fc(0x34);
            func_0x000107c5fb78(0xd000000000000032,0x800000010f0681d0);
            func_0x000107c5fb78(uVar8,uVar14);
            func_0x000107c6142c(uVar14);
            func_0x000107c6142c(uStack_128);
            lVar12 = lStack_170;
            lVar2 = lStack_178;
            uVar4 = *(undefined8 *)(lStack_170 + lStack_178);
            uVar14 = 0x6572705f706f7473;
            uVar8 = uVar14;
            func_0x000107c5fadc(0x6572705f706f7473,0xee00665f64616f6c);
            func_0x000105c1a3a4(uVar4,uVar8,1);
            func_0x000107c61170(uVar8);
            uVar8 = *(undefined8 *)(lVar12 + lVar2);
            func_0x000107c5fadc(0x6572705f706f7473,0xee00665f64616f6c);
            func_0x000105c1a518(uVar8,uVar14,0);
            func_0x000107c61170(uVar14);
            puVar5 = PTR_PTR_1126e2760;
            func_0x000107c610f8(PTR_PTR_1126e2760);
            func_0x000107c453e4();
            lVar2 = puStack_1d0[1];
            if (lVar2 == 0) {
              uVar8 = 0;
            }
            else {
              uVar8 = *puStack_1d0;
              func_0x000107c61434(lVar2);
              func_0x000107c5fadc(uVar8,lVar2);
              func_0x000107c6142c(lVar2);
            }
            uVar4 = uStack_150;
            uVar14 = uStack_158;
            lVar2 = lStack_188;
            func_0x000107c5595c(puVar5);
            func_0x000107c61170(uVar8);
            func_0x000107c52140(puVar5);
            uVar8 = uStack_168;
            func_0x000107c5fadc(uStack_168,uVar4);
            func_0x000107c56420(puVar5);
            func_0x000107c61170(uVar8);
            uVar8 = uStack_160;
            func_0x000107c5fadc(uStack_160,uVar14);
            func_0x000107c5a26c(puVar5);
            func_0x000107c61170(uVar8);
            func_0x000107c59860(puVar5);
            func_0x000107c542a8(puVar5);
            func_0x000107c55658(puVar5);
            lVar2 = *(long *)(lVar2 + lStack_1b0);
            func_0x000107c5c734();
            func_0x000107c61180();
            if (lVar2 == 0) {
              func_0x000107c61574(puVar10);
            }
            else {
              puVar7 = puVar5;
              func_0x000107c61174(puVar5);
              func_0x000107c4bfb0(lVar2);
              func_0x000107c61574(puVar10);
              func_0x000107c615e8(lVar2);
              func_0x000107c61170(puVar7);
            }
            uVar8 = uStack_190;
            func_0x000107c61170(puVar5);
            func_0x000107c6142c(uVar8);
            func_0x000107c6142c(uVar14);
            func_0x000107c6142c(uVar4);
            return (undefined8 *)0x6;
          }
        }
      }
LAB_102180a38:
      puStack_130 = (undefined *)0x0;
      uStack_128 = 0xe000000000000000;
      func_0x000107c602fc(0x27);
      func_0x000107c6142c(uStack_128);
      puStack_130 = (undefined *)0xd000000000000025;
      uStack_128 = uStack_1d8;
      func_0x000107c5fb78(uVar8,uVar14);
      func_0x000107c6142c(uStack_128);
      func_0x000107c5eea0(lStack_148);
      func_0x000105c1a32c(*(undefined8 *)(lStack_170 + lStack_178),1);
      FUN_102174d08(uStack_168,uStack_150,uStack_160,uStack_158);
      lVar12 = lStack_1c8;
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar12 == 0) {
        lVar13 = 0;
      }
      else {
        uVar4 = uVar8;
        func_0x000107c5fadc(uVar8,uVar14);
        lVar13 = lVar12;
        func_0x000107c4ed90();
        func_0x000107c61180();
        func_0x000107c615e8(lVar12);
        func_0x000107c61170(uVar4);
      }
      puVar1 = puStack_1c0;
      func_0x000107c5eea0(puStack_1c0);
      func_0x000107c5ee68(lStack_148);
      pcVar11 = *(code **)(lStack_1b8 + 8);
      (*pcVar11)(puVar1,lStack_180);
      if (lVar13 != 0) {
        func_0x000107c6142c(uVar14);
        puStack_130 = (undefined *)0x0;
        uStack_128 = 0xe000000000000000;
        func_0x000107c602fc(0x26);
        func_0x000107c5fb78(0xd000000000000024,0x800000010f0681a0);
        uVar8 = 0x112d393f0;
        lStack_140 = lVar13;
        func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
        func_0x000107c603d0(&lStack_140,&puStack_130,uVar8,
                            PTR___ss26DefaultStringInterpolationVN_11034ec00,
                            PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
        func_0x000107c6142c(uStack_128);
        lVar12 = lStack_170;
        lVar2 = lStack_178;
        dVar16 = (double)(long)(dVar15 * 1000.0);
        if (0x7fefffffffffffff < (ulong)ABS(dVar16)) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x1021815b4);
          (*pcVar11)();
        }
        if (dVar16 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x1021815b8);
          (*pcVar11)();
        }
        if (9.223372036854776e+18 <= dVar16) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x1021815bc);
          (*pcVar11)();
        }
        uVar4 = *(undefined8 *)(lStack_170 + lStack_178);
        uVar14 = 0x5f64616f6c657270;
        uVar8 = uVar14;
        func_0x000107c5fadc(0x5f64616f6c657270,0xed0000726f727265);
        func_0x000105c1a3a4(uVar4,uVar8,1);
        func_0x000107c61170(uVar8);
        uVar8 = *(undefined8 *)(lVar12 + lVar2);
        func_0x000107c5fadc(0x5f64616f6c657270,0xed0000726f727265);
        func_0x000105c1a518(uVar8,uVar14,(long)dVar16);
        func_0x000107c61170(uVar14);
        uVar8 = uStack_150;
        if ((ulong)ABS(dVar15) < 0x7ff0000000000000) {
          if (dVar15 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
            pcVar11 = (code *)SoftwareBreakpoint(1,0x1021815c4);
            (*pcVar11)();
          }
          if (dVar15 < 9.223372036854776e+18) {
            lVar2 = lVar13;
            func_0x000107c5ed2c(lVar13);
            func_0x000107c3fcb0();
            func_0x000107c61170(lVar2);
            puVar5 = PTR_PTR_1126e2760;
            func_0x000107c610f8(PTR_PTR_1126e2760);
            func_0x000107c453e4();
            lVar2 = puStack_1d0[1];
            if (lVar2 == 0) {
              uVar14 = 0;
            }
            else {
              uVar14 = *puStack_1d0;
              func_0x000107c61434(lVar2);
              func_0x000107c5fadc(uVar14,lVar2);
              func_0x000107c6142c(lVar2);
            }
            func_0x000107c5595c(puVar5);
            func_0x000107c61170(uVar14);
            func_0x000107c52140(puVar5);
            uVar14 = uStack_168;
            func_0x000107c5fadc(uStack_168,uVar8);
            func_0x000107c56420(puVar5);
            func_0x000107c61170(uVar14);
            uVar14 = uStack_158;
            uVar4 = uStack_160;
            func_0x000107c5fadc(uStack_160,uStack_158);
            func_0x000107c5a26c(puVar5);
            func_0x000107c61170(uVar4);
            func_0x000107c59860(puVar5);
            func_0x000107c542a8(puVar5);
            func_0x000107c55658(puVar5);
            lVar2 = *(long *)(lStack_188 + lStack_1b0);
            func_0x000107c5c734();
            func_0x000107c61180();
            if (lVar2 == 0) {
              func_0x000107c61170(puVar5);
              func_0x000107c614ac(lVar13);
            }
            else {
              func_0x000107c4bfb0();
              func_0x000107c615e8(lVar2);
              func_0x000107c614ac(lVar13);
              func_0x000107c61170(puVar5);
            }
            func_0x000107c6142c(uStack_190);
            func_0x000107c6142c(uVar14);
            func_0x000107c6142c(uVar8);
            (*pcVar11)(lStack_148,lStack_180);
            func_0x000107c61574(puVar10);
            return (undefined8 *)0x5;
          }
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x1021815c8);
          (*pcVar11)();
        }
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x1021815c0);
        (*pcVar11)();
      }
      puStack_130 = (undefined *)0x0;
      uStack_128 = 0xe000000000000000;
      func_0x000107c602fc(0x26);
      func_0x000107c6142c(uStack_128);
      puStack_130 = (undefined *)0xd000000000000024;
      uStack_128 = uStack_1e0;
      func_0x000107c5fb78(uVar8,uVar14);
      func_0x000107c6142c(uVar14);
      func_0x000107c6142c(uStack_128);
      lVar13 = lStack_170;
      lVar12 = lStack_178;
      dVar16 = (double)(long)(dVar15 * 1000.0);
      if (0x7fefffffffffffff < (ulong)ABS(dVar16)) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x10218159c);
        (*pcVar11)();
      }
      if (dVar16 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x1021815a0);
        (*pcVar11)();
      }
      if (9.223372036854776e+18 <= dVar16) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x1021815a4);
        (*pcVar11)();
      }
      uVar4 = *(undefined8 *)(lStack_170 + lStack_178);
      uVar14 = 0x73736563637573;
      uVar8 = uVar14;
      func_0x000107c5fadc(0x73736563637573,0xe700000000000000);
      func_0x000105c1a3a4(uVar4,uVar8,1);
      func_0x000107c61170(uVar8);
      uVar8 = *(undefined8 *)(lVar13 + lVar12);
      func_0x000107c5fadc(0x73736563637573,0xe700000000000000);
      func_0x000105c1a518(uVar8,uVar14,(long)dVar16);
      func_0x000107c61170(uVar14);
      if (0x7fefffffffffffff < (ulong)ABS(dVar15)) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x1021815a8);
        (*pcVar11)();
      }
      if (dVar15 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x1021815ac);
        (*pcVar11)();
      }
      if (9.223372036854776e+18 <= dVar15) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x1021815b0);
        (*pcVar11)();
      }
      puVar5 = PTR_PTR_1126e2760;
      func_0x000107c610f8(PTR_PTR_1126e2760);
      func_0x000107c453e4();
      lVar12 = puStack_1d0[1];
      if (lVar12 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *puStack_1d0;
        func_0x000107c61434(lVar12);
        func_0x000107c5fadc(uVar8,lVar12);
        func_0x000107c6142c(lVar12);
      }
      uVar4 = uStack_150;
      uVar14 = uStack_158;
      func_0x000107c5595c(puVar5);
      func_0x000107c61170(uVar8);
      func_0x000107c52140(puVar5);
      uVar8 = uStack_168;
      func_0x000107c5fadc(uStack_168,uVar4);
      func_0x000107c56420(puVar5);
      func_0x000107c61170(uVar8);
      uVar8 = uStack_160;
      func_0x000107c5fadc(uStack_160,uVar14);
      func_0x000107c5a26c(puVar5);
      func_0x000107c61170(uVar8);
      func_0x000107c59860(puVar5);
      func_0x000107c542a8(puVar5);
      func_0x000107c55658(puVar5);
      lVar12 = *(long *)(lStack_188 + lStack_1b0);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar12 == 0) {
        func_0x000107c61170(puVar5);
        func_0x000107c6142c(uStack_190);
        func_0x000107c6142c(uVar14);
        func_0x000107c6142c(uVar4);
      }
      else {
        func_0x000107c4bfb0();
        func_0x000107c61170(puVar5);
        func_0x000107c6142c(uStack_190);
        func_0x000107c6142c(uVar14);
        func_0x000107c6142c(uVar4);
        func_0x000107c615e8(lVar12);
      }
      (*pcVar11)(lStack_148,lStack_180);
      puVar9 = puVar9 + 10;
      pcVar11 = FUN_102181618;
      lVar2 = lVar2 + -1;
      puVar5 = puVar10;
    } while (lVar2 != 0);
  }
  func_0x00010058d43c(pcStack_1e8,puVar10);
  return (undefined8 *)0xd;
}



/* Entry: 1021815c8; end: 102181617;  */

undefined8 FUN_1021815c8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112e5e020;
  func_0x0001000285a8(0x112e5e020,&UNK_10da650f0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 102181618; end: 10218161b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102181618(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(*(long *)(unaff_x20 + 0x18) + _DAT_112e5dff0);
  func_0x000107c3dfc0();
  *(bool *)uVar1 = lVar2 == 2;
  return;
}



/* Entry: 10218161c; end: 10218163b;  */

void FUN_10218161c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10218163c; end: 102181657;  */

void FUN_10218163c(long param_1,long param_2)

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



/* Entry: 102181658; end: 10218168f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102181658(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(*(long *)(unaff_x20 + 0x18) + _DAT_112e5dff0);
  func_0x000107c3dfc0();
  *(bool *)uVar1 = lVar2 == 2;
  return;
}



/* Entry: 102181690; end: 10218169f;  */

void FUN_102181690(long param_1,long param_2)

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



/* Entry: 1021816a0; end: 1021817ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021816a0(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  lVar1 = param_2 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(lVar1 + _DAT_112e5e040);
    func_0x000107c615f0(uVar4);
    func_0x000107c61170(lVar1);
    puVar2 = &UNK_1104d6cd0;
    func_0x000107c613fc(&UNK_1104d6cd0,0x20,7);
    *(long *)(puVar2 + 0x10) = param_2;
    *(undefined8 *)(puVar2 + 0x18) = param_1;
    pcStack_68 = FUN_1021841d0;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_1000f6b44;
    puStack_70 = &UNK_1104d6ce8;
    ppuVar3 = &puStack_88;
    puStack_60 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    puVar2 = puStack_60;
    func_0x000107c6157c(param_2);
    func_0x000107c61174(param_1);
    func_0x000107c61574(puVar2);
    func_0x000107c4e524(uVar4);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(uVar4);
  }
  return;
}



/* Entry: 1021817ac; end: 10218181f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021817ac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112e5e070);
    *(undefined8 *)(param_1 + _DAT_112e5e070) = param_2;
    func_0x000107c61170(uVar1);
    func_0x000107c61174(param_2);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102181820; end: 102181abf;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102181820(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long unaff_x20;
  long alStack_58 [3];
  
  FUN_10217bf8c();
  if (param_1 != 0) {
    lVar2 = param_1;
    func_0x000107c4ccf8();
    func_0x000107c61170();
    if ((int)lVar2 != 0) {
      FUN_10217bf8c();
      if (param_1 != 0) {
        lVar2 = param_1;
        func_0x000107c4ceec();
        func_0x000107c61170();
        if (0 < lVar2) {
          param_1 = *(long *)(unaff_x20 + _DAT_112e5e068);
          func_0x000107c4cd10();
          func_0x000107c61180();
          lVar3 = param_1;
          func_0x000107c5c734();
          func_0x000107c61180();
          func_0x000107c61170();
          if (lVar3 != 0) {
            lVar4 = lVar3;
            func_0x000107c43938();
            if (lVar4 < lVar2) {
              alStack_58[1] = 0;
              alStack_58[2] = 0xe000000000000000;
              func_0x000107c602fc(0x33);
              func_0x000107c5fb78(0xd00000000000002b,0x800000010f068350);
              puVar8 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68;
              puVar1 = PTR___ss5Int64VN_11034ee50;
              puVar7 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68;
              alStack_58[0] = lVar4;
              func_0x000107c6057c(PTR___ss5Int64VN_11034ee50,
                                  PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68);
              func_0x000107c5fb78();
              func_0x000107c6142c(puVar7);
              func_0x000107c5fb78(0x203c20,0xe300000000000000);
              alStack_58[0] = lVar2;
              func_0x000107c6057c(puVar1,puVar8);
              func_0x000107c5fb78();
              func_0x000107c6142c(puVar8);
              func_0x000107c5fb78(0x29,0xe100000000000000);
              func_0x000107c615e8(lVar3);
              func_0x000107c6142c(alStack_58[2]);
              return 9;
            }
            func_0x000107c615e8();
            param_1 = lVar3;
          }
        }
      }
      FUN_10217bf8c();
      if (param_1 != 0) {
        lVar2 = param_1;
        func_0x000107c5b0f8();
        func_0x000107c61170(param_1);
        if (((int)lVar2 != 0) && (uVar5 = *(ulong *)(unaff_x20 + _DAT_112e5e070), uVar5 != 0)) {
          func_0x000107c61174();
          uVar6 = uVar5;
          FUN_102185870();
          if (((uVar6 & 0xff) != 0) && (((uint)uVar6 & 0xff) != 3)) {
            alStack_58[1] = 0;
            alStack_58[2] = 0xe000000000000000;
            func_0x000107c602fc(0x32);
            func_0x000107c5fb78(0xd00000000000002f,0x800000010f068320);
            alStack_58[0] = CONCAT71(alStack_58[0]._1_7_,(char)uVar6);
            func_0x000107c603d0(alStack_58,alStack_58 + 1,&UNK_1104d7070,
                                PTR___ss26DefaultStringInterpolationVN_11034ec00,
                                PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08
                               );
            func_0x000107c5fb78(0x29,0xe100000000000000);
            func_0x000107c61170(uVar5);
            func_0x000107c6142c(alStack_58[2]);
            return 10;
          }
          func_0x000107c61170(uVar5);
        }
      }
    }
  }
  return 0xd;
}



/* Entry: 102181ac0; end: 102181b1f; -[_TtC26OnDeviceMLModelsPrefetcher28OnDeviceMLModelsPreloaderJob init] */

void FUN_102181ac0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("OnDeviceMLModelsPrefetcher.OnDeviceMLModelsPreloaderJob",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102181aec);
  (*pcVar1)();
}



/* Entry: 102181b20; end: 102181be7; -[_TtC26OnDeviceMLModelsPrefetcher28OnDeviceMLModelsPreloaderJob .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102181b4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102181b7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102181b9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102181bbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102181ba0) */
/* WARNING: Removing unreachable block (ram,0x000102181b80) */
/* WARNING: Removing unreachable block (ram,0x000102181b50) */
/* WARNING: Removing unreachable block (ram,0x000102181bc0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102181b20(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e5e028));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e5e030));
  return;
}



/* Entry: 102181be8; end: 102181c07;  */

void FUN_102181be8(void)

{
  func_0x000107c61168(&PTR_PTR_112822820);
  return;
}



/* Entry: 102181c08; end: 102181d23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102181c08(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auVar6 [16];
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = 0xd00000000000001c;
  lVar4 = *(long *)(unaff_x20 + _DAT_112e5e060);
  if (lVar4 == 0) {
    uStack_38 = 0x800000010da650e0;
  }
  else {
    uStack_40 = 0;
    uStack_38 = 0xe000000000000000;
    func_0x000107c61174();
    func_0x000107c5fb78(0xd00000000000001c,0x800000010da650e0);
    uVar3 = 0xe100000000000000;
    func_0x000107c5fb78(0x5f);
    lVar1 = lVar4;
    func_0x000107c44fd8();
    func_0x000107c61180();
    if (lVar1 == 0) {
      lVar5 = 0;
      uVar3 = 0;
    }
    else {
      lVar5 = lVar1;
      func_0x000107c5faec();
      func_0x000107c61170(lVar1);
    }
    uVar2 = 0x112d35ff8;
    lStack_50 = lVar5;
    uStack_48 = uVar3;
    func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
    func_0x000107c603d0(&lStack_50,&uStack_40,uVar2,PTR___ss26DefaultStringInterpolationVN_11034ec00
                        ,PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    func_0x000107c61170(lVar4);
    func_0x000107c6142c(uVar3);
  }
  auVar6._8_8_ = uStack_38;
  auVar6._0_8_ = uStack_40;
  return auVar6;
}



/* Entry: 102181d24; end: 102181d7b; -[_TtC26OnDeviceMLModelsPrefetcher28OnDeviceMLModelsPreloaderJob dataSyncerIdentifier] */

void FUN_102181d24(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102181c08();
  func_0x000107c61170(param_1);
  func_0x000107c5fadc(uVar1,param_2);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102181d7c; end: 102181d83; -[_TtC26OnDeviceMLModelsPrefetcher28OnDeviceMLModelsPreloaderJob submitOnRegister] */

undefined8 FUN_102181d7c(void)

{
  return 1;
}



/* Entry: 102181d84; end: 1021821d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102181d84(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  
  puVar2 = PTR_PTR_1126b7228;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = PTR_PTR_1126b7238;
  func_0x000107c610f8(PTR_PTR_1126b7238);
  func_0x000107c453e4();
  puVar4 = PTR_PTR_1126b7248;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar5 = puVar4;
  FUN_10217bf8c();
  if (puVar5 == (undefined *)0x0) {
    lVar9 = 0;
  }
  else {
    puVar6 = puVar5;
    func_0x000107c4ed84();
    func_0x000107c61170(puVar5);
    lVar9 = (long)(int)puVar6;
  }
  uVar8 = lVar9 * 0x3c;
  if (SUB168(SEXT816(lVar9) * SEXT816(0x3c),8) != (long)uVar8 >> 0x3f) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1021821c0);
    (*pcVar1)();
  }
  if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1021821c4);
    (*pcVar1)();
  }
  if (uVar8 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1021821c8);
    (*pcVar1)();
  }
  func_0x000107c57d34(puVar4);
  func_0x000107c57c1c(puVar3);
  func_0x000107c55974(puVar2);
  puVar5 = PTR_PTR_1126b7240;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar6 = puVar5;
  func_0x000107c56a40();
  FUN_10217bf8c();
  if (puVar6 != (undefined *)0x0) {
    func_0x000107c3e720();
    func_0x000107c61170(puVar6);
  }
  puVar6 = puVar5;
  func_0x000107c52c2c();
  FUN_10217bf8c();
  if (puVar6 == (undefined *)0x0) {
LAB_102181ed4:
    FUN_10217bf8c();
    if (puVar6 != (undefined *)0x0) {
      puVar7 = puVar6;
      func_0x000107c4edb0();
      func_0x000107c61170();
      if ((int)puVar7 == 3) goto LAB_102181efc;
    }
  }
  else {
    puVar7 = puVar6;
    func_0x000107c4edb0();
    func_0x000107c61170();
    if ((int)puVar7 != 2) goto LAB_102181ed4;
LAB_102181efc:
    FUN_10217bf8c();
    if (puVar6 != (undefined *)0x0) {
      puVar7 = puVar6;
      func_0x000107c4ed38();
      func_0x000107c61170();
      if ((int)puVar7 != 0) {
        puVar6 = puVar5;
        func_0x000107c3de68();
        func_0x000107c61180();
        if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1021821d0);
          (*pcVar1)();
        }
        func_0x000107c3d93c();
        func_0x000107c61170();
      }
    }
    FUN_10217bf8c();
    if (puVar6 != (undefined *)0x0) {
      puVar7 = puVar6;
      func_0x000107c4ed30();
      func_0x000107c61170();
      if ((int)puVar7 != 0) {
        puVar6 = puVar5;
        func_0x000107c3de68();
        func_0x000107c61180();
        if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1021821d4);
          (*pcVar1)();
        }
        func_0x000107c3d93c();
        func_0x000107c61170();
      }
    }
    FUN_10217bf8c();
    if (puVar6 != (undefined *)0x0) {
      puVar7 = puVar6;
      func_0x000107c4ed34();
      func_0x000107c61170();
      if ((int)puVar7 != 0) {
        puVar6 = puVar5;
        func_0x000107c3de68();
        func_0x000107c61180();
        if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1021821d8);
          (*pcVar1)();
        }
        func_0x000107c3d93c();
        func_0x000107c61170();
      }
    }
  }
  FUN_10217bf8c();
  if (puVar6 == (undefined *)0x0) {
LAB_102182008:
    FUN_10217bf8c();
    if (puVar6 == (undefined *)0x0) goto LAB_102182064;
    puVar7 = puVar6;
    func_0x000107c4edb0();
    func_0x000107c61170(puVar6);
    if ((int)puVar7 != 3) goto LAB_102182064;
  }
  else {
    puVar7 = puVar6;
    func_0x000107c4edb0();
    func_0x000107c61170();
    if ((int)puVar7 != 1) goto LAB_102182008;
  }
  puVar6 = puVar5;
  func_0x000107c3de68();
  func_0x000107c61180();
  if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1021821cc);
    (*pcVar1)();
  }
  func_0x000107c3d93c();
  func_0x000107c61170(puVar6);
  func_0x000107c5277c(puVar5);
LAB_102182064:
  func_0x000107c55958(puVar2);
  puVar6 = puVar2;
  func_0x000107c54734(puVar2);
  FUN_102181c08();
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  func_0x000107c5597c(puVar2);
  func_0x000107c61170(puVar6);
  puVar6 = puVar2;
  func_0x000107c55968();
  FUN_10217bf8c();
  if (puVar6 != (undefined *)0x0) {
    puVar7 = puVar6;
    func_0x000107c4ccf8();
    func_0x000107c61170(puVar6);
    if ((int)puVar7 != 0) {
      puVar6 = PTR_PTR_1126b7230;
      func_0x000107c610f8();
      func_0x000107c453e4();
      puVar7 = puVar6;
      func_0x000107c57ed0();
      FUN_10217bf8c();
      if (puVar7 != (undefined *)0x0) {
        func_0x000107c4eda0();
        func_0x000107c61170(puVar7);
      }
      puVar7 = puVar6;
      func_0x000107c57ecc();
      FUN_10217bf8c();
      if (puVar7 != (undefined *)0x0) {
        func_0x000107c4ed8c();
        func_0x000107c61170(puVar7);
      }
      func_0x000107c56358(puVar6);
      func_0x000107c61174(puVar6);
      func_0x000107c57ec0(puVar2);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar6);
    }
  }
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar4);
  return puVar2;
}



/* Entry: 1021821d8; end: 10218220b; -[_TtC26OnDeviceMLModelsPrefetcher28OnDeviceMLModelsPreloaderJob jobConfig] */

void FUN_1021821d8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102181d84();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10218220c; end: 102182453;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10218220c(code *param_1,undefined8 param_2)

{
  long lVar1;
  code *pcVar2;
  code *pcVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar7 = &puStack_80;
  pcVar2 = param_1;
  FUN_10217bf8c();
  if (pcVar2 != (code *)0x0) {
    pcVar3 = pcVar2;
    func_0x000107c4edb0();
    func_0x000107c61170();
    if ((int)pcVar3 != 0) {
      FUN_10217bf8c();
      if (pcVar2 != (code *)0x0) {
        pcVar3 = pcVar2;
        func_0x000107c4edb0();
        func_0x000107c61170(pcVar2);
        if ((int)pcVar3 == -0x4524111) goto LAB_10218228c;
      }
      uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112e5e040);
      puVar5 = &UNK_1104d6b68;
      func_0x000107c613fc(&UNK_1104d6b68,0x18,7);
      func_0x000107c61614(puVar5 + 0x10);
      puVar6 = &UNK_1104d6b90;
      func_0x000107c613fc(&UNK_1104d6b90,0x28,7);
      *(undefined **)(puVar6 + 0x10) = puVar5;
      *(code **)(puVar6 + 0x18) = param_1;
      *(undefined8 *)(puVar6 + 0x20) = param_2;
      pcStack_60 = FUN_102183bfc;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_1000f6b44;
      puStack_68 = &UNK_1104d6ba8;
      puStack_58 = puVar6;
      func_0x000107c60bc4(&puStack_80);
      puVar5 = puStack_58;
      FUN_10212d7c8(param_1,param_2);
      func_0x000107c61574(puVar5);
      func_0x000107c4e524(uVar9);
      func_0x000107c60bd0(ppuVar7);
      return;
    }
  }
LAB_10218228c:
  lVar1 = _DAT_112e5e0f8;
  lVar11 = *(long *)(unaff_x20 + _DAT_112e5e048);
  uVar8 = *(undefined8 *)(lVar11 + _DAT_112e5e0f8);
  uVar10 = 0x64656c6261736964;
  uVar9 = uVar10;
  func_0x000107c5fadc(0x64656c6261736964,0xe800000000000000);
  func_0x000105c19b54(uVar8,uVar9,1);
  func_0x000107c61170(uVar9);
  uVar9 = *(undefined8 *)(lVar11 + lVar1);
  func_0x000107c5fadc(0x64656c6261736964,0xe800000000000000);
  func_0x000105c19cc8(uVar9,uVar10,0);
  func_0x000107c61170(uVar10);
  puVar4 = (undefined1 *)0x0;
  FUN_1021749dc(0,0x3eb);
  if (param_1 == (code *)0x0) {
    return;
  }
  FUN_102176b2c();
  puVar5 = &UNK_1104d6010;
  func_0x000107c613f8(&UNK_1104d6010,puVar4,0,0);
  *puVar4 = 2;
  (*param_1)(2,puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(puVar5);
  return;
}



/* Entry: 102182454; end: 1021824c3;  */

void FUN_102182454(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_1021824c4(param_2,param_3);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1021824c4; end: 10218317f;  */

/* WARNING: Possible PIC construction at 0x0001021830c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021830c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021824c4(double param_1,code *param_2,ulong param_3)

{
  long *plVar1;
  ulong *puVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined1 *puVar15;
  long extraout_x8;
  long extraout_x8_00;
  long lVar16;
  long extraout_x8_01;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  long extraout_x12;
  long extraout_x13;
  long unaff_x20;
  undefined *puVar20;
  code *pcVar21;
  long lVar22;
  undefined8 uVar23;
  long lVar24;
  undefined8 uVar25;
  undefined8 *puVar26;
  long lVar27;
  ulong uVar28;
  double dVar29;
  long lStack_230;
  long lStack_228;
  undefined *puStack_220;
  code *pcStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  double dStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  double dStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  lVar4 = 0;
  uVar7 = param_3;
  func_0x000107c5f7fc();
  lStack_1e8 = *(long *)(lVar4 + -8);
  lStack_1e0 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_1e8 + 0x40));
  lVar16 = (long)&lStack_230 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  lStack_1f0 = lVar16;
  func_0x000107c5f824();
  lStack_200 = *(long *)(lVar4 + -8);
  lStack_1f8 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_200 + 0x40));
  lVar16 = lVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  lStack_208 = lVar16;
  func_0x000107c5eec8();
  lVar24 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar24 + 0x40));
  lVar16 = lVar16 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uVar5 = 0;
  func_0x000107c5eea4();
  lVar17 = *(long *)(uVar5 - 8);
  uVar28 = uVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar18 = lVar16 - (extraout_x13 + 0xfU & 0xfffffffffffffff0);
  lStack_210 = extraout_x13;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  FUN_102181820();
  if (((uint)uVar28 & 0xff) == 0xd) {
    lStack_1d8 = lVar18 - extraout_x12;
    func_0x000107c5eea0(lVar18 - extraout_x12);
    lVar27 = *(long *)(unaff_x20 + _DAT_112e5e050);
    func_0x000107c5eec4(lVar16);
    func_0x000107c5eeac();
    (**(code **)(lVar24 + 8))(lVar16,lVar4);
    puVar2 = (ulong *)(lVar27 + _DAT_112e5dc08);
    uVar6 = puVar2[1];
    *puVar2 = uVar28;
    puVar2[1] = uVar7;
    func_0x000107c6142c(uVar6);
    lVar4 = _DAT_112e5e0f8;
    lVar22 = *(long *)(unaff_x20 + _DAT_112e5e048);
    lVar16 = *(long *)(lVar22 + _DAT_112e5e0f8);
    func_0x000105c19adc(lVar16,1);
    FUN_102174914();
    lVar24 = *(long *)(unaff_x20 + _DAT_112e5e060);
    if (lVar24 == 0) {
      FUN_10217bf8c();
      puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (lVar16 != 0) {
        lVar10 = lVar16;
        func_0x000107c4d0ac();
        func_0x000107c61180();
        func_0x000107c61170(lVar16);
        puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if (lVar10 != 0) {
          puStack_c0 = (undefined *)0x0;
          uVar19 = 0;
          FUN_102184190(0,0x112e5dfc8,&PTR_PTR_1126c32c0);
          func_0x000107c5fc50(lVar10,&puStack_c0,uVar19);
          func_0x000107c61170(lVar10);
          if (puStack_c0 != (undefined *)0x0) {
            puVar9 = puStack_c0;
          }
        }
      }
    }
    else {
      puVar9 = (undefined *)0x112e5dfc8;
      FUN_102183c24(0x112e5dfc8,&PTR_PTR_1126c32c0,0x112e5e0a8,&UNK_10da65128);
      func_0x000107c613fc();
      param_1 = 4.94065645841247e-324;
      *(undefined8 *)(puVar9 + 0x18) = 3;
      *(undefined8 *)(puVar9 + 0x10) = 1;
      *(long *)(puVar9 + 0x20) = lVar24;
    }
    if ((ulong)puVar9 >> 0x3e == 0) {
      puVar20 = *(undefined **)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar20 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar9) {
        puVar20 = puVar9;
      }
      func_0x000107c60480();
    }
    uVar19 = *(undefined8 *)(unaff_x20 + _DAT_112e5e038);
    pcStack_218 = param_2;
    func_0x000107c61174(lVar24);
    if (puVar20 == (undefined *)0x0) {
      puStack_188 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      lStack_228 = lVar4;
      uVar28 = 0;
      puStack_188 = PTR___swiftEmptyArrayStorage_11034f1c8;
      lStack_230 = lVar27;
      puStack_220 = (undefined *)lVar22;
      do {
        if (((ulong)puVar9 & 0xc000000000000001) == 0) {
          if (*(ulong *)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10) <= uVar28) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10218314c);
            (*pcVar3)();
          }
          uVar7 = *(ulong *)(puVar9 + uVar28 * 8 + 0x20);
          func_0x000107c61174(uVar7);
        }
        else {
          uVar7 = uVar28;
          func_0x000102183cf8(uVar28,puVar9);
        }
        puVar12 = (undefined *)(uVar28 + 1);
        if (SCARRY8(uVar28,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102183148);
          (*pcVar3)();
        }
        FUN_102177044(&uStack_130,uVar7,uVar19);
        lVar4 = lStack_128;
        uVar25 = uStack_130;
        if (lStack_128 == 0) {
          func_0x000107c5eea0(lVar18);
          func_0x000107c5ee68(lStack_1d8);
          pcVar21 = *(code **)(lVar17 + 8);
          (*pcVar21)(lVar18,uVar5);
          pcVar3 = pcStack_218;
          puVar20 = puStack_220;
          lVar4 = lStack_228;
          dVar29 = (double)(long)(param_1 * 1000.0);
          if (0x7fefffffffffffff < (ulong)ABS(dVar29)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102183168);
            (*pcVar3)();
          }
          if (dVar29 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10218316c);
            (*pcVar3)();
          }
          if (9.223372036854776e+18 <= dVar29) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102183170);
            (*pcVar3)();
          }
          uVar23 = *(undefined8 *)((long)puStack_220 + lStack_228);
          uVar25 = 0x6f635f726f727265;
          uVar19 = uVar25;
          func_0x000107c5fadc(0x6f635f726f727265,0xe900000000000066);
          func_0x000105c19b54(uVar23,uVar19,1);
          func_0x000107c61170(uVar19);
          uVar19 = *(undefined8 *)((long)puVar20 + lVar4);
          func_0x000107c5fadc(0x6f635f726f727265,0xe900000000000066);
          func_0x000105c19cc8(uVar19,uVar25,(long)dVar29);
          func_0x000107c61170(uVar25);
          lVar4 = lStack_1d8;
          if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102183174);
            (*pcVar3)();
          }
          if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102183178);
            (*pcVar3)();
          }
          if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10218317c);
            (*pcVar3)();
          }
          puVar15 = (undefined1 *)(long)param_1;
          FUN_1021749dc(puVar15,0x3e9);
          if (pcVar3 == (code *)0x0) {
            (*pcVar21)(lVar4,uVar5);
            func_0x000107c6142c(puStack_188);
            func_0x000107c6142c(puVar9);
            func_0x000107c61170(uVar7);
            return;
          }
          FUN_102176b2c();
          puVar9 = &UNK_1104d6010;
          func_0x000107c613f8(&UNK_1104d6010,puVar15,0,0);
          *puVar15 = 0;
          (*pcVar3)(2,puVar9);
          func_0x000107c61170(uVar7);
          goto code_r0x000107c614ac;
        }
        uStack_e8 = uStack_118;
        dStack_f0 = dStack_120;
        uStack_d8 = uStack_108;
        uStack_e0 = uStack_110;
        uStack_c8 = uStack_f8;
        uStack_d0 = uStack_100;
        puStack_c0 = (undefined *)0x0;
        uStack_b8 = 0xe000000000000000;
        func_0x000107c602fc(0x2d);
        func_0x000107c6142c(uStack_b8);
        puStack_c0 = (undefined *)0xd00000000000002b;
        uStack_b8 = 0x800000010f067f40;
        func_0x000107c61434(lVar4);
        func_0x000107c5fb78(uVar25,lVar4);
        func_0x000107c6142c(lVar4);
        func_0x000107c6142c(uStack_b8);
        puVar8 = puStack_188;
        func_0x000107c61558();
        if (((ulong)puVar8 & 1) == 0) {
          plVar1 = (long *)(puStack_188 + 0x10);
          puStack_188 = (undefined *)0x0;
          func_0x000102183ebc(0,*plVar1 + 1,1);
        }
        uVar6 = *(ulong *)(puStack_188 + 0x10);
        if (*(ulong *)(puStack_188 + 0x18) >> 1 <= uVar6) {
          puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puStack_188 + 0x18));
          func_0x000102183ebc(puVar8,uVar6 + 1,1,puStack_188);
          puStack_188 = puVar8;
        }
        *(ulong *)(puStack_188 + 0x10) = uVar6 + 1;
        *(undefined8 *)(puStack_188 + uVar6 * 0x40 + 0x20) = uVar25;
        *(long *)(puStack_188 + uVar6 * 0x40 + 0x28) = lVar4;
        *(undefined8 *)(puStack_188 + uVar6 * 0x40 + 0x48) = uStack_d8;
        *(undefined8 *)(puStack_188 + uVar6 * 0x40 + 0x40) = uStack_e0;
        *(undefined8 *)(puStack_188 + uVar6 * 0x40 + 0x58) = uStack_c8;
        *(undefined8 *)(puStack_188 + uVar6 * 0x40 + 0x50) = uStack_d0;
        *(undefined8 *)(puStack_188 + uVar6 * 0x40 + 0x38) = uStack_e8;
        *(double *)(puStack_188 + uVar6 * 0x40 + 0x30) = dStack_f0;
        param_1 = dStack_f0;
        func_0x000107c61170(uVar7);
        uVar28 = uVar28 + 1;
      } while (puVar12 != puVar20);
    }
    func_0x000107c6142c(puVar9);
    puVar9 = &UNK_1104d6be0;
    func_0x000107c613fc(&UNK_1104d6be0,0x11,7);
    puVar9[0x10] = 1;
    puVar11 = puVar9;
    func_0x000107c60f34();
    puVar20 = &UNK_1104d6c08;
    func_0x000107c613fc(&UNK_1104d6c08,0x18,7);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    *(undefined **)(puVar20 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar12 = &UNK_1104d6c30;
    func_0x000107c613fc(&UNK_1104d6c30,0x18,7);
    *(undefined **)(puVar12 + 0x10) = puVar8;
    lVar4 = *(long *)(puStack_188 + 0x10);
    if (lVar4 != 0) {
      uVar19 = *(undefined8 *)(unaff_x20 + _DAT_112e5e040);
      puVar26 = (undefined8 *)(puStack_188 + 0x20);
      do {
        uStack_b8 = puVar26[1];
        puStack_c0 = (undefined *)*puVar26;
        uStack_a8 = puVar26[3];
        uStack_b0 = puVar26[2];
        uStack_98 = puVar26[5];
        uStack_a0 = puVar26[4];
        uStack_88 = puVar26[7];
        uStack_90 = puVar26[6];
        puStack_140 = (undefined *)0x0;
        uStack_138 = 0xe000000000000000;
        FUN_10217ba98(&puStack_c0,&puStack_180);
        func_0x000107c602fc(0x33);
        puStack_180 = puStack_140;
        uStack_178 = uStack_138;
        func_0x000107c5fb78(0xd000000000000031,0x800000010f0682a0);
        uVar25 = uStack_b8;
        puVar8 = puStack_c0;
        func_0x000107c61434(uStack_b8);
        func_0x000107c5fb78(puVar8,uVar25);
        func_0x000107c6142c(uVar25);
        func_0x000107c6142c(uStack_178);
        func_0x000107c60f38(puVar11);
        puVar8 = &UNK_1104d6c58;
        func_0x000107c613fc(&UNK_1104d6c58,0x70,7);
        *(undefined **)(puVar8 + 0x10) = puVar11;
        *(undefined8 *)(puVar8 + 0x20) = uStack_b8;
        *(undefined **)(puVar8 + 0x18) = puStack_c0;
        *(undefined8 *)(puVar8 + 0x30) = uStack_a8;
        *(undefined8 *)(puVar8 + 0x28) = uStack_b0;
        *(undefined8 *)(puVar8 + 0x40) = uStack_98;
        *(undefined8 *)(puVar8 + 0x38) = uStack_a0;
        *(undefined8 *)(puVar8 + 0x50) = uStack_88;
        *(undefined8 *)(puVar8 + 0x48) = uStack_90;
        *(undefined **)(puVar8 + 0x58) = puVar9;
        *(undefined **)(puVar8 + 0x60) = puVar20;
        *(undefined **)(puVar8 + 0x68) = puVar12;
        FUN_10217ba98(&puStack_c0,&puStack_180);
        func_0x000107c61174(puVar11);
        func_0x000107c6157c(puVar9);
        func_0x000107c6157c(puVar20);
        func_0x000107c6157c(puVar12);
        FUN_102178c14(&puStack_c0,uVar19,FUN_102183fc4,puVar8);
        func_0x000107c61574(puVar8);
        FUN_10217bcf8(&puStack_c0);
        puVar26 = puVar26 + 8;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    lVar4 = *(long *)(unaff_x20 + _DAT_112e5e040);
    func_0x000107c4f7c0();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102183180);
      (*pcVar3)();
    }
    puVar8 = &UNK_1104d6b68;
    func_0x000107c613fc(&UNK_1104d6b68,0x18,7);
    func_0x000107c61614(puVar8 + 0x10,unaff_x20);
    (**(code **)(lVar17 + 0x10))(lVar18,lStack_1d8,uVar5);
    uVar28 = (ulong)*(byte *)(lVar17 + 0x50);
    uVar6 = uVar28 + 0x10 & (uVar28 ^ 0xffffffffffffffff);
    uVar7 = lStack_210 + uVar6 + 7 & 0xfffffffffffffff8;
    puVar13 = &UNK_1104d6c80;
    func_0x000107c613fc(&UNK_1104d6c80,uVar7 + 0x30,uVar28 | 7);
    (**(code **)(lVar17 + 0x20))(puVar13 + uVar6,lVar18,uVar5);
    pcVar3 = pcStack_218;
    *(undefined **)(puVar13 + uVar7) = puVar9;
    *(undefined **)(puVar13 + uVar7 + 8) = puVar8;
    *(code **)(puVar13 + uVar7 + 0x10) = pcStack_218;
    *(ulong *)((long)(puVar13 + uVar7 + 0x10) + 8) = param_3;
    *(undefined **)(puVar13 + uVar7 + 0x20) = puVar12;
    *(undefined **)(puVar13 + uVar7 + 0x28) = puVar20;
    pcStack_160 = FUN_102183fd8;
    puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_178 = 0x42000000;
    puStack_170 = &UNK_1000f6b44;
    puStack_168 = &UNK_1104d6c98;
    ppuVar14 = &puStack_180;
    puStack_220 = puVar20;
    puStack_158 = puVar13;
    func_0x000107c60bc4(ppuVar14);
    func_0x000107c6157c(puVar9);
    func_0x000107c6157c(puVar20);
    func_0x000107c6157c(puVar12);
    func_0x000107c6157c(puVar8);
    FUN_10212d7c8(pcVar3,param_3);
    lVar16 = lStack_208;
    func_0x000107c5f808(lStack_208);
    puStack_140 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001001c7eec();
    uVar19 = 0x112d4af90;
    func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
    uVar25 = uVar19;
    func_0x0001001c7f30();
    lVar24 = lStack_1e0;
    lVar18 = lStack_1f0;
    func_0x000107c60264(lStack_1f0,&puStack_140,uVar19,uVar25,lStack_1e0,pcVar3);
    func_0x000107c5ffb8(lVar16,lVar18,lVar4,ppuVar14);
    func_0x000107c60bd0(ppuVar14);
    func_0x000107c61170(puVar11);
    func_0x000107c61170(lVar4);
    (**(code **)(lStack_1e8 + 8))(lVar18,lVar24);
    (**(code **)(lStack_200 + 8))(lVar16,lStack_1f8);
    (**(code **)(lVar17 + 8))(lStack_1d8,uVar5);
    func_0x000107c6142c(puStack_188);
    puVar20 = puStack_158;
    func_0x000107c61574(puVar9);
    func_0x000107c61574(puStack_220);
    func_0x000107c61574(puVar12);
    func_0x000107c61574(puVar8);
    func_0x000107c61574(puVar20);
  }
  else {
    puStack_c0 = (undefined *)0x0;
    uStack_b8 = 0xe000000000000000;
    func_0x000107c602fc(0x35);
    uVar19 = 0x800000010f0682e0;
    func_0x000107c5fb78(0xd00000000000001f,0x800000010f0682e0);
    FUN_102176b6c(uVar28);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar19);
    uVar19 = 0x800000010f068240;
    func_0x000107c5fb78(0xd000000000000014,0x800000010f068240);
    func_0x000107c6142c(uStack_b8);
    lVar16 = *(long *)(unaff_x20 + _DAT_112e5e048);
    uVar7 = uVar28;
    FUN_102176b6c(uVar28);
    lVar4 = _DAT_112e5e0f8;
    uVar25 = *(undefined8 *)(lVar16 + _DAT_112e5e0f8);
    uVar5 = uVar7;
    func_0x000107c5fadc();
    func_0x000105c19b54(uVar25,uVar5,1);
    func_0x000107c61170(uVar5);
    uVar25 = *(undefined8 *)(lVar16 + lVar4);
    func_0x000107c5fadc(uVar7,uVar19);
    func_0x000105c19cc8(uVar25,uVar7,0);
    func_0x000107c6142c(uVar19);
    func_0x000107c61170(uVar7);
    puVar15 = (undefined1 *)0x0;
    FUN_1021749dc(0,(uVar28 & 0xff) + 0x3e9);
    if (param_2 != (code *)0x0) {
      FUN_102176b2c();
      puVar9 = &UNK_1104d6010;
      func_0x000107c613f8(&UNK_1104d6010,puVar15,0,0);
      *puVar15 = (char)uVar28;
      (*param_2)(1,puVar9);
code_r0x000107c614ac:
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_errorRelease_11034f318)(puVar9);
      return;
    }
  }
  return;
}



/* Entry: 102183180; end: 10218320b; -[_TtC26OnDeviceMLModelsPrefetcher28OnDeviceMLModelsPreloaderJob onSync:] */

void FUN_102183180(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    pcVar2 = (code *)0x0;
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = &UNK_1104d6b40;
    func_0x000107c613fc(&UNK_1104d6b40,0x18,7);
    *(long *)(puVar1 + 0x10) = param_3;
    pcVar2 = FUN_10218320c;
  }
  func_0x000107c61174(param_1);
  FUN_10218220c(pcVar2,puVar1);
  FUN_10212d6a4(pcVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10218320c; end: 102183213;  */

void FUN_10218320c(undefined8 param_1,long param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5ed2c(param_2);
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 102183214; end: 1021834cf;  */

void FUN_102183214(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,long param_6,long param_7,long param_8)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [24];
  long lStack_118;
  undefined1 auStack_110 [32];
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
  
  uStack_a8 = param_5[1];
  uStack_b0 = *param_5;
  uStack_98 = param_5[3];
  uStack_a0 = param_5[2];
  uStack_88 = param_5[5];
  uStack_90 = param_5[4];
  uStack_78 = param_5[7];
  uStack_80 = param_5[6];
  if (param_2 == 0) {
    uStack_f0 = 0;
    uStack_e8 = 0xe000000000000000;
    func_0x000107c602fc(0x2b);
    func_0x000107c6142c(uStack_e8);
    uStack_f0 = 0xd000000000000018;
    uStack_e8 = 0x800000010f067fa0;
    func_0x000107c5fb78(*param_5,param_5[1]);
    func_0x000107c5fb78(0xd000000000000011,0x800000010f068300);
    func_0x000107c6142c(uStack_e8);
    func_0x000107c61428(param_6 + 0x10,&uStack_f0,1,0);
    *(undefined1 *)(param_6 + 0x10) = 0;
  }
  else {
    func_0x000107c61428(param_7 + 0x10,auStack_110,0x21,0);
    uVar4 = *(ulong *)(param_7 + 0x10);
    func_0x000107c61434(param_2);
    FUN_10217ba98(param_5,&uStack_f0);
    uVar1 = uVar4;
    func_0x000107c61558();
    *(ulong *)(param_7 + 0x10) = uVar4;
    uVar2 = uVar4;
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
      FUN_10218404c(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
      *(ulong *)(param_7 + 0x10) = uVar2;
    }
    uVar1 = *(ulong *)(uVar2 + 0x10);
    uVar4 = uVar2;
    if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
      uVar4 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
      FUN_10218404c(uVar4,uVar1 + 1,1,uVar2);
    }
    uStack_b8 = uStack_78;
    uStack_c0 = uStack_80;
    uStack_d8 = uStack_98;
    uStack_e0 = uStack_a0;
    uStack_c8 = uStack_88;
    uStack_d0 = uStack_90;
    uStack_e8 = uStack_a8;
    uStack_f0 = uStack_b0;
    *(ulong *)(uVar4 + 0x10) = uVar1 + 1;
    lVar3 = uVar4 + uVar1 * 0x50;
    *(undefined8 *)(lVar3 + 0x20) = param_1;
    *(long *)(lVar3 + 0x28) = param_2;
    *(undefined8 *)(lVar3 + 0x58) = uStack_88;
    *(undefined8 *)(lVar3 + 0x50) = uStack_90;
    *(undefined8 *)(lVar3 + 0x68) = uStack_78;
    *(undefined8 *)(lVar3 + 0x60) = uStack_80;
    *(undefined8 *)(lVar3 + 0x38) = uStack_a8;
    *(undefined8 *)(lVar3 + 0x30) = uStack_b0;
    *(undefined8 *)(lVar3 + 0x48) = uStack_98;
    *(undefined8 *)(lVar3 + 0x40) = uStack_a0;
    *(ulong *)(param_7 + 0x10) = uVar4;
    func_0x000107c614a8(auStack_110);
    func_0x000100672b50(param_3,auStack_130);
    if (lStack_118 == 0) {
      func_0x00010006e7f4(auStack_130);
    }
    else {
      func_0x000100102924(auStack_130,auStack_110);
      func_0x0001000bb420(auStack_110,auStack_130);
      func_0x000107c61428(param_8 + 0x10,auStack_148,0x21,0);
      uVar4 = *(ulong *)(param_8 + 0x10);
      uVar1 = uVar4;
      func_0x000107c61558();
      *(ulong *)(param_8 + 0x10) = uVar4;
      uVar2 = uVar4;
      if ((uVar1 & 1) == 0) {
        uVar2 = 0;
        func_0x000100f6a040(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
        *(ulong *)(param_8 + 0x10) = uVar2;
      }
      uVar1 = *(ulong *)(uVar2 + 0x10);
      uVar4 = uVar2;
      if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
        uVar4 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
        func_0x000100f6a040(uVar4,uVar1 + 1,1,uVar2);
      }
      *(ulong *)(uVar4 + 0x10) = uVar1 + 1;
      func_0x000100102924(auStack_130,uVar4 + uVar1 * 0x20 + 0x20);
      *(ulong *)(param_8 + 0x10) = uVar4;
      func_0x000107c614a8(auStack_148);
      func_0x000100183ab8(auStack_110);
    }
  }
  func_0x000107c60f3c(param_4);
  return;
}



/* Entry: 1021834d0; end: 102183bfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021834d0(double param_1,undefined8 param_2,long param_3,long param_4,code *param_5,
                  undefined8 param_6,long param_7,long param_8)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined1 *puVar7;
  long extraout_x8;
  undefined1 *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  double dVar14;
  undefined1 auStack_f0 [8];
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  func_0x000107c5eea0(auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5ee68(param_2);
  (**(code **)(lVar10 + 8))(auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  func_0x000107c61428(param_3 + 0x10,auStack_88,0,0);
  if (*(char *)(param_3 + 0x10) == '\x01') {
    func_0x000107c61428(param_4 + 0x10,auStack_a0,0,0);
    puVar8 = (undefined1 *)(param_4 + 0x10);
    func_0x000107c61618();
    if (puVar8 != (undefined1 *)0x0) {
      func_0x000107c61614(auStack_c0,puVar8);
      func_0x000107c61428(param_7 + 0x10,auStack_b8,0,0);
      uVar9 = *(undefined8 *)(param_7 + 0x10);
      uVar11 = *(undefined8 *)(puVar8 + _DAT_112e5e058);
      func_0x000107c61428(param_8 + 0x10,auStack_d8,0,0);
      uVar13 = *(ulong *)(param_8 + 0x10);
      func_0x000107c61434(uVar9);
      uVar3 = uVar13;
      func_0x000107c61434();
      FUN_102180610();
      func_0x000107c6142c(uVar9);
      func_0x000107c6142c(uVar13);
      lVar2 = _DAT_112e5e0f8;
      lVar10 = *(long *)(puVar8 + _DAT_112e5e048);
      if (((uint)uVar3 & 0xff) == 0xd) {
        dVar14 = (double)(long)(param_1 * 1000.0);
        if (0x7fefffffffffffff < (ulong)ABS(dVar14)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102183bd0);
          (*pcVar1)();
        }
        if (dVar14 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102183bd8);
          (*pcVar1)();
        }
        if (9.223372036854776e+18 <= dVar14) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102183be0);
          (*pcVar1)();
        }
        uVar12 = *(undefined8 *)(lVar10 + _DAT_112e5e0f8);
        lVar5 = lVar10;
        func_0x000107c61174(lVar10);
        uVar9 = 0x73736563637573;
        uVar11 = uVar9;
        func_0x000107c5fadc(0x73736563637573,0xe700000000000000);
        func_0x000105c19b54(uVar12,uVar11,1);
        func_0x000107c61170(uVar11);
        uVar11 = *(undefined8 *)(lVar10 + lVar2);
        func_0x000107c5fadc(0x73736563637573,0xe700000000000000);
        func_0x000105c19cc8(uVar11,uVar9,(long)dVar14);
        func_0x000107c61170(lVar5);
        func_0x000107c61170(uVar9);
        if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102183be8);
          (*pcVar1)();
        }
        if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102183bf0);
          (*pcVar1)();
        }
        if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102183bf8);
          (*pcVar1)();
        }
        uVar11 = *(undefined8 *)(puVar8 + _DAT_112e5e050);
        func_0x000107c61174(uVar11);
        FUN_1021749dc((long)param_1,200);
        func_0x000107c61170(uVar11);
        if (param_5 != (code *)0x0) {
          (*param_5)(0,0);
        }
      }
      else {
        uVar13 = uVar3;
        FUN_102176b6c(uVar3);
        lVar2 = _DAT_112e5e0f8;
        dVar14 = (double)(long)(param_1 * 1000.0);
        if (0x7fefffffffffffff < (ulong)ABS(dVar14)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102183bd4);
          (*pcVar1)();
        }
        if (dVar14 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102183bdc);
          (*pcVar1)();
        }
        uStack_e8 = param_6;
        pcStack_e0 = param_5;
        if (9.223372036854776e+18 <= dVar14) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102183be4);
          (*pcVar1)();
        }
        uVar9 = *(undefined8 *)(lVar10 + _DAT_112e5e0f8);
        lVar5 = lVar10;
        func_0x000107c61174(lVar10);
        uVar6 = uVar13;
        func_0x000107c5fadc(uVar13,uVar11);
        func_0x000105c19b54(uVar9,uVar6,1);
        func_0x000107c61170(uVar6);
        uVar9 = *(undefined8 *)(lVar10 + lVar2);
        func_0x000107c5fadc(uVar13,uVar11);
        func_0x000105c19cc8(uVar9,uVar13,(long)dVar14);
        func_0x000107c61170(lVar5);
        func_0x000107c6142c(uVar11);
        func_0x000107c61170(uVar13);
        pcVar1 = pcStack_e0;
        if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102183bec);
          (*pcVar1)();
        }
        if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102183bf4);
          (*pcVar1)();
        }
        if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102183bfc);
          (*pcVar1)();
        }
        puVar7 = *(undefined1 **)(puVar8 + _DAT_112e5e050);
        func_0x000107c61174();
        FUN_1021749dc((long)param_1,(uVar3 & 0xff) + 0x3e9);
        func_0x000107c61170();
        if (pcVar1 != (code *)0x0) {
          uVar11 = 1;
          if (1 < ((uint)uVar3 - 9 & 0xff)) {
            uVar11 = 2;
          }
          FUN_102176b2c();
          puVar4 = &UNK_1104d6010;
          func_0x000107c613f8(&UNK_1104d6010,puVar7,0,0);
          *puVar7 = (char)uVar3;
          (*pcVar1)(uVar11,puVar4);
          func_0x000107c61610(auStack_c0);
          func_0x000107c61170(puVar8);
          goto LAB_102183b78;
        }
      }
      func_0x000107c61610(auStack_c0);
      func_0x000107c61170(puVar8);
      return;
    }
    if (param_5 == (code *)0x0) {
      return;
    }
    FUN_102176b2c();
    puVar4 = &UNK_1104d6010;
    func_0x000107c613f8(&UNK_1104d6010,puVar8,0,0);
    *puVar8 = 3;
    (*param_5)(2,puVar4);
  }
  else {
    func_0x000107c61428(param_4 + 0x10,auStack_a0,0,0);
    lVar2 = param_4 + 0x10;
    func_0x000107c61618();
    if (lVar2 != 0) {
      lVar10 = *(long *)(lVar2 + _DAT_112e5e048);
      func_0x000107c61174();
      func_0x000107c61170(lVar2);
      lVar2 = _DAT_112e5e0f8;
      dVar14 = (double)(long)(param_1 * 1000.0);
      if (0x7fefffffffffffff < (ulong)ABS(dVar14)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102183bb8);
        (*pcVar1)();
      }
      if (dVar14 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102183bbc);
        (*pcVar1)();
      }
      if (9.223372036854776e+18 <= dVar14) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102183bc4);
        (*pcVar1)();
      }
      uVar12 = *(undefined8 *)(lVar10 + _DAT_112e5e0f8);
      uVar9 = 0x5f6d6f72665f6c70;
      uVar11 = uVar9;
      func_0x000107c5fadc(0x5f6d6f72665f6c70,0xef655f6568636163);
      func_0x000105c19b54(uVar12,uVar11,1);
      func_0x000107c61170(uVar11);
      uVar11 = *(undefined8 *)(lVar10 + lVar2);
      func_0x000107c5fadc(0x5f6d6f72665f6c70,0xef655f6568636163);
      func_0x000105c19cc8(uVar11,uVar9,(long)dVar14);
      func_0x000107c61170(lVar10);
      func_0x000107c61170(uVar9);
    }
    func_0x000107c61428(param_4 + 0x10,auStack_b8,0,0);
    param_4 = param_4 + 0x10;
    func_0x000107c61618();
    puVar8 = (undefined1 *)0x0;
    if (param_4 != 0) {
      puVar8 = *(undefined1 **)(param_4 + _DAT_112e5e050);
      func_0x000107c61174();
      func_0x000107c61170(param_4);
      if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102183bc0);
        (*pcVar1)();
      }
      if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102183bc8);
        (*pcVar1)();
      }
      if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102183bcc);
        (*pcVar1)();
      }
      FUN_1021749dc((long)param_1,0x3f1);
      func_0x000107c61170();
    }
    if (param_5 == (code *)0x0) {
      return;
    }
    FUN_102176b2c();
    puVar4 = &UNK_1104d6010;
    func_0x000107c613f8(&UNK_1104d6010,puVar8,0,0);
    *puVar8 = 8;
    (*param_5)(2,puVar4);
  }
LAB_102183b78:
  func_0x000107c614ac(puVar4);
  return;
}



/* Entry: 102183bfc; end: 102183c23;  */

void FUN_102183bfc(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    FUN_1021824c4(uVar1,uVar3);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 102183c24; end: 102183c9b;  */

void FUN_102183c24(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_102184190(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 102183c9c; end: 102183cf7;  */

void FUN_102183c9c(void)

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
    func_0x0001000a0a8c();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112e5e0c0;
  plVar5 = (long *)&UNK_10da65150;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 102183cf8; end: 102183fc3;  */

ulong FUN_102183cf8(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102183ddc);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102183de0);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126c32c0;
    func_0x000107c61168(PTR_PTR_1126c32c0);
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
    puVar4 = PTR_PTR_1126c32c0;
    func_0x000107c61168(PTR_PTR_1126c32c0);
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
  FUN_102184190(0,0x112e5dfc8,&PTR_PTR_1126c32c0);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102183ebc);
  (*pcVar2)();
}



/* Entry: 102183fc4; end: 102183fd7;  */

void FUN_102183fc4(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  ulong uVar8;
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [24];
  long lStack_118;
  undefined1 auStack_110 [32];
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
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar7 = *(long *)(unaff_x20 + 0x58);
  lVar2 = *(long *)(unaff_x20 + 0x60);
  lVar6 = *(long *)(unaff_x20 + 0x68);
  puVar1 = (undefined8 *)(unaff_x20 + 0x18);
  uStack_a8 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_b0 = *puVar1;
  uStack_98 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_a0 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_90 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x50);
  uStack_80 = *(undefined8 *)(unaff_x20 + 0x48);
  if (param_2 == 0) {
    uStack_f0 = 0;
    uStack_e8 = 0xe000000000000000;
    func_0x000107c602fc(0x2b);
    func_0x000107c6142c(uStack_e8);
    uStack_f0 = 0xd000000000000018;
    uStack_e8 = 0x800000010f067fa0;
    func_0x000107c5fb78(*puVar1,*(undefined8 *)(unaff_x20 + 0x20));
    func_0x000107c5fb78(0xd000000000000011,0x800000010f068300);
    func_0x000107c6142c(uStack_e8);
    func_0x000107c61428(lVar7 + 0x10,&uStack_f0,1,0);
    *(undefined1 *)(lVar7 + 0x10) = 0;
  }
  else {
    func_0x000107c61428(lVar2 + 0x10,auStack_110,0x21,0);
    uVar8 = *(ulong *)(lVar2 + 0x10);
    func_0x000107c61434(param_2);
    FUN_10217ba98(puVar1,&uStack_f0);
    uVar3 = uVar8;
    func_0x000107c61558();
    *(ulong *)(lVar2 + 0x10) = uVar8;
    uVar4 = uVar8;
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
      FUN_10218404c(0,*(long *)(uVar8 + 0x10) + 1,1,uVar8);
      *(ulong *)(lVar2 + 0x10) = uVar4;
    }
    uVar3 = *(ulong *)(uVar4 + 0x10);
    uVar8 = uVar4;
    if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar3) {
      uVar8 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
      FUN_10218404c(uVar8,uVar3 + 1,1,uVar4);
    }
    uStack_b8 = uStack_78;
    uStack_c0 = uStack_80;
    uStack_d8 = uStack_98;
    uStack_e0 = uStack_a0;
    uStack_c8 = uStack_88;
    uStack_d0 = uStack_90;
    uStack_e8 = uStack_a8;
    uStack_f0 = uStack_b0;
    *(ulong *)(uVar8 + 0x10) = uVar3 + 1;
    lVar7 = uVar8 + uVar3 * 0x50;
    *(undefined8 *)(lVar7 + 0x20) = param_1;
    *(long *)(lVar7 + 0x28) = param_2;
    *(undefined8 *)(lVar7 + 0x58) = uStack_88;
    *(undefined8 *)(lVar7 + 0x50) = uStack_90;
    *(undefined8 *)(lVar7 + 0x68) = uStack_78;
    *(undefined8 *)(lVar7 + 0x60) = uStack_80;
    *(undefined8 *)(lVar7 + 0x38) = uStack_a8;
    *(undefined8 *)(lVar7 + 0x30) = uStack_b0;
    *(undefined8 *)(lVar7 + 0x48) = uStack_98;
    *(undefined8 *)(lVar7 + 0x40) = uStack_a0;
    *(ulong *)(lVar2 + 0x10) = uVar8;
    func_0x000107c614a8(auStack_110);
    func_0x000100672b50(param_3,auStack_130);
    if (lStack_118 == 0) {
      func_0x00010006e7f4(auStack_130);
    }
    else {
      func_0x000100102924(auStack_130,auStack_110);
      func_0x0001000bb420(auStack_110,auStack_130);
      func_0x000107c61428(lVar6 + 0x10,auStack_148,0x21,0);
      uVar8 = *(ulong *)(lVar6 + 0x10);
      uVar3 = uVar8;
      func_0x000107c61558();
      *(ulong *)(lVar6 + 0x10) = uVar8;
      uVar4 = uVar8;
      if ((uVar3 & 1) == 0) {
        uVar4 = 0;
        func_0x000100f6a040(0,*(long *)(uVar8 + 0x10) + 1,1,uVar8);
        *(ulong *)(lVar6 + 0x10) = uVar4;
      }
      uVar3 = *(ulong *)(uVar4 + 0x10);
      uVar8 = uVar4;
      if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar3) {
        uVar8 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
        func_0x000100f6a040(uVar8,uVar3 + 1,1,uVar4);
      }
      *(ulong *)(uVar8 + 0x10) = uVar3 + 1;
      func_0x000100102924(auStack_130,uVar8 + uVar3 * 0x20 + 0x20);
      *(ulong *)(lVar6 + 0x10) = uVar8;
      func_0x000107c614a8(auStack_148);
      func_0x000100183ab8(auStack_110);
    }
  }
  func_0x000107c60f3c(uVar5);
  return;
}



/* Entry: 102183fd8; end: 10218404b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102183fd8(double param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long extraout_x8;
  undefined1 *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long unaff_x20;
  long lVar16;
  undefined8 uVar17;
  double dVar18;
  undefined1 auStack_f0 [8];
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  
  lVar7 = 0;
  func_0x000107c5eea4();
  uVar12 = (ulong)*(byte *)(*(long *)(lVar7 + -8) + 0x50);
  uVar13 = uVar12 + 0x10 & (uVar12 ^ 0xffffffffffffffff);
  uVar12 = *(long *)(*(long *)(lVar7 + -8) + 0x40) + uVar13 + 7 & 0xfffffffffffffff8;
  lVar8 = *(long *)(unaff_x20 + uVar12);
  lVar7 = *(long *)(unaff_x20 + uVar12 + 8);
  puVar1 = (undefined8 *)(unaff_x20 + uVar12 + 0x10);
  pcVar2 = (code *)*puVar1;
  uVar15 = puVar1[1];
  lVar9 = *(long *)(unaff_x20 + uVar12 + 0x20);
  lVar10 = *(long *)(unaff_x20 + (uVar12 + 0x2f & 0xffffffffffffff8));
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar16 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  func_0x000107c5eea0(auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5ee68(unaff_x20 + uVar13);
  (**(code **)(lVar16 + 8))(auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar3);
  func_0x000107c61428(lVar8 + 0x10,auStack_88,0,0);
  if (*(char *)(lVar8 + 0x10) == '\x01') {
    func_0x000107c61428(lVar7 + 0x10,auStack_a0,0,0);
    puVar11 = (undefined1 *)(lVar7 + 0x10);
    func_0x000107c61618();
    if (puVar11 != (undefined1 *)0x0) {
      func_0x000107c61614(auStack_c0,puVar11);
      func_0x000107c61428(lVar9 + 0x10,auStack_b8,0,0);
      uVar14 = *(undefined8 *)(lVar9 + 0x10);
      uVar17 = *(undefined8 *)(puVar11 + _DAT_112e5e058);
      func_0x000107c61428(lVar10 + 0x10,auStack_d8,0,0);
      uVar13 = *(ulong *)(lVar10 + 0x10);
      func_0x000107c61434(uVar14);
      uVar12 = uVar13;
      func_0x000107c61434();
      FUN_102180610();
      func_0x000107c6142c(uVar14);
      func_0x000107c6142c(uVar13);
      lVar7 = _DAT_112e5e0f8;
      lVar3 = *(long *)(puVar11 + _DAT_112e5e048);
      if (((uint)uVar12 & 0xff) == 0xd) {
        dVar18 = (double)(long)(param_1 * 1000.0);
        if (0x7fefffffffffffff < (ulong)ABS(dVar18)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102183bd0);
          (*pcVar2)();
        }
        if (dVar18 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102183bd8);
          (*pcVar2)();
        }
        if (9.223372036854776e+18 <= dVar18) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102183be0);
          (*pcVar2)();
        }
        uVar14 = *(undefined8 *)(lVar3 + _DAT_112e5e0f8);
        lVar8 = lVar3;
        func_0x000107c61174(lVar3);
        uVar17 = 0x73736563637573;
        uVar15 = uVar17;
        func_0x000107c5fadc(0x73736563637573,0xe700000000000000);
        func_0x000105c19b54(uVar14,uVar15,1);
        func_0x000107c61170(uVar15);
        uVar15 = *(undefined8 *)(lVar3 + lVar7);
        func_0x000107c5fadc(0x73736563637573,0xe700000000000000);
        func_0x000105c19cc8(uVar15,uVar17,(long)dVar18);
        func_0x000107c61170(lVar8);
        func_0x000107c61170(uVar17);
        if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102183be8);
          (*pcVar2)();
        }
        if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102183bf0);
          (*pcVar2)();
        }
        if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102183bf8);
          (*pcVar2)();
        }
        uVar15 = *(undefined8 *)(puVar11 + _DAT_112e5e050);
        func_0x000107c61174(uVar15);
        FUN_1021749dc((long)param_1,200);
        func_0x000107c61170(uVar15);
        if (pcVar2 != (code *)0x0) {
          (*pcVar2)(0,0);
        }
      }
      else {
        uVar13 = uVar12;
        FUN_102176b6c(uVar12);
        lVar7 = _DAT_112e5e0f8;
        dVar18 = (double)(long)(param_1 * 1000.0);
        if (0x7fefffffffffffff < (ulong)ABS(dVar18)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102183bd4);
          (*pcVar2)();
        }
        if (dVar18 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102183bdc);
          (*pcVar2)();
        }
        uStack_e8 = uVar15;
        pcStack_e0 = pcVar2;
        if (9.223372036854776e+18 <= dVar18) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102183be4);
          (*pcVar2)();
        }
        uVar15 = *(undefined8 *)(lVar3 + _DAT_112e5e0f8);
        lVar8 = lVar3;
        func_0x000107c61174(lVar3);
        uVar5 = uVar13;
        func_0x000107c5fadc(uVar13,uVar17);
        func_0x000105c19b54(uVar15,uVar5,1);
        func_0x000107c61170(uVar5);
        uVar15 = *(undefined8 *)(lVar3 + lVar7);
        func_0x000107c5fadc(uVar13,uVar17);
        func_0x000105c19cc8(uVar15,uVar13,(long)dVar18);
        func_0x000107c61170(lVar8);
        func_0x000107c6142c(uVar17);
        func_0x000107c61170(uVar13);
        pcVar2 = pcStack_e0;
        if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102183bec);
          (*pcVar2)();
        }
        if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102183bf4);
          (*pcVar2)();
        }
        if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102183bfc);
          (*pcVar2)();
        }
        puVar6 = *(undefined1 **)(puVar11 + _DAT_112e5e050);
        func_0x000107c61174();
        FUN_1021749dc((long)param_1,(uVar12 & 0xff) + 0x3e9);
        func_0x000107c61170();
        if (pcVar2 != (code *)0x0) {
          uVar15 = 1;
          if (1 < ((uint)uVar12 - 9 & 0xff)) {
            uVar15 = 2;
          }
          FUN_102176b2c();
          puVar4 = &UNK_1104d6010;
          func_0x000107c613f8(&UNK_1104d6010,puVar6,0,0);
          *puVar6 = (char)uVar12;
          (*pcVar2)(uVar15,puVar4);
          func_0x000107c61610(auStack_c0);
          func_0x000107c61170(puVar11);
          goto LAB_102183b78;
        }
      }
      func_0x000107c61610(auStack_c0);
      func_0x000107c61170(puVar11);
      return;
    }
    if (pcVar2 == (code *)0x0) {
      return;
    }
    FUN_102176b2c();
    puVar4 = &UNK_1104d6010;
    func_0x000107c613f8(&UNK_1104d6010,puVar11,0,0);
    *puVar11 = 3;
    (*pcVar2)(2,puVar4);
  }
  else {
    func_0x000107c61428(lVar7 + 0x10,auStack_a0,0,0);
    lVar3 = lVar7 + 0x10;
    func_0x000107c61618();
    if (lVar3 != 0) {
      lVar8 = *(long *)(lVar3 + _DAT_112e5e048);
      func_0x000107c61174();
      func_0x000107c61170(lVar3);
      lVar3 = _DAT_112e5e0f8;
      dVar18 = (double)(long)(param_1 * 1000.0);
      if (0x7fefffffffffffff < (ulong)ABS(dVar18)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102183bb8);
        (*pcVar2)();
      }
      if (dVar18 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102183bbc);
        (*pcVar2)();
      }
      if (9.223372036854776e+18 <= dVar18) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102183bc4);
        (*pcVar2)();
      }
      uVar14 = *(undefined8 *)(lVar8 + _DAT_112e5e0f8);
      uVar17 = 0x5f6d6f72665f6c70;
      uVar15 = uVar17;
      func_0x000107c5fadc(0x5f6d6f72665f6c70,0xef655f6568636163);
      func_0x000105c19b54(uVar14,uVar15,1);
      func_0x000107c61170(uVar15);
      uVar15 = *(undefined8 *)(lVar8 + lVar3);
      func_0x000107c5fadc(0x5f6d6f72665f6c70,0xef655f6568636163);
      func_0x000105c19cc8(uVar15,uVar17,(long)dVar18);
      func_0x000107c61170(lVar8);
      func_0x000107c61170(uVar17);
    }
    func_0x000107c61428(lVar7 + 0x10,auStack_b8,0,0);
    lVar7 = lVar7 + 0x10;
    func_0x000107c61618();
    puVar11 = (undefined1 *)0x0;
    if (lVar7 != 0) {
      puVar11 = *(undefined1 **)(lVar7 + _DAT_112e5e050);
      func_0x000107c61174();
      func_0x000107c61170(lVar7);
      if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102183bc0);
        (*pcVar2)();
      }
      if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102183bc8);
        (*pcVar2)();
      }
      if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102183bcc);
        (*pcVar2)();
      }
      FUN_1021749dc((long)param_1,0x3f1);
      func_0x000107c61170();
    }
    if (pcVar2 == (code *)0x0) {
      return;
    }
    FUN_102176b2c();
    puVar4 = &UNK_1104d6010;
    func_0x000107c613f8(&UNK_1104d6010,puVar11,0,0);
    *puVar11 = 8;
    (*pcVar2)(2,puVar4);
  }
LAB_102183b78:
  func_0x000107c614ac(puVar4);
  return;
}



/* Entry: 10218404c; end: 10218418f;  */

undefined * FUN_10218404c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102184190);
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
    puVar3 = (undefined *)0x112e5e0b0;
    func_0x0001000285a8(0x112e5e0b0,&UNK_10da65138);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x50) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112e5e020;
    func_0x0001000285a8(0x112e5e020,&UNK_10da650f0);
    func_0x000107c6140c(puVar4,puVar1,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x50 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar7 * 0x50);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 102184190; end: 1021841cf;  */

void FUN_102184190(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1021841d0; end: 1021841e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021841d0(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_38,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + _DAT_112e5e070);
    *(undefined8 *)(lVar2 + _DAT_112e5e070) = uVar1;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(uVar1);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 1021841e8; end: 1021842d3;  */

void FUN_1021841e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e5e0c8,&UNK_10da65160);
  puVar1 = &UNK_1104d6d20;
  func_0x000107c613fc(&UNK_1104d6d20,0x50,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  *(undefined8 *)(puVar1 + 0x28) = param_6;
  *(undefined8 *)(puVar1 + 0x30) = param_4;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_1;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_8);
  func_0x0001000823a8(FUN_102185418,puVar1);
  return;
}



/* Entry: 1021842d4; end: 102185417;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021842d4(long *param_1)

{
  long *plVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long **pplVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  undefined8 in_x4;
  long *in_x6;
  long *in_x7;
  long extraout_x8;
  long extraout_x12;
  long *plVar19;
  undefined8 *puVar20;
  long *aplStack_1e0 [2];
  long lStack_1d0;
  long *plStack_1c8;
  ulong uStack_1c0;
  undefined8 uStack_1b8;
  long *plStack_1b0;
  long *plStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  long *plStack_190;
  long *plStack_188;
  long *plStack_180;
  long *plStack_178;
  undefined *puStack_170;
  long *plStack_168;
  long *plStack_160;
  long *plStack_158;
  long *plStack_150;
  long *plStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  long *plStack_108;
  undefined **ppuStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long *aplStack_c0 [3];
  long *plStack_a8;
  undefined **ppuStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  
  func_0x000100083b20(&plStack_120);
  plVar5 = plStack_120;
  plVar3 = plStack_120;
  func_0x000107c40430();
  func_0x000107c61180();
  func_0x000107c61170(plVar5);
  func_0x000100083b20(&plStack_120);
  plVar5 = plStack_120;
  plVar19 = plStack_120;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(plVar5);
  if (plVar19 != (long *)0x0) {
    plStack_148 = in_x6;
    func_0x000100083b20(&plStack_120);
    plVar5 = plStack_120;
    lVar4 = *(long *)((long)plStack_120 + _DAT_113093a98);
    func_0x000107c61174();
    func_0x000107c61170(plVar5);
    lVar6 = lVar4;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar6 != 0) {
      lVar4 = 0;
      func_0x00010217c200();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = 0xd000000000000023;
      *(undefined8 *)(lVar4 + 0x18) = 0x800000010f0680e0;
      *(long **)(lVar4 + 0x20) = plVar19;
      *(undefined8 *)(lVar4 + 0x28) = 1;
      plVar5 = plVar19;
      func_0x000107c615f0();
      lStack_138 = lVar4;
      FUN_10217bf8c();
      if (plVar5 != (long *)0x0) {
        plVar9 = plVar5;
        func_0x000107c4edb0();
        func_0x000107c61170(plVar5);
        if ((int)plVar9 != 0) {
          lVar4 = *(long *)(lStack_138 + 0x28);
          plVar5 = param_1;
          plStack_178 = plVar19;
          plVar9 = in_x7;
          if (lVar4 != 0) {
            func_0x000107c4edb0();
            if ((int)lVar4 == -0x4524111) goto LAB_102184478;
            plVar5 = param_1;
            plVar9 = in_x7;
            if (*(long *)(lStack_138 + 0x28) != 0) {
              plStack_1c8 = param_1;
              plStack_150 = in_x7;
              func_0x000107c4edb4();
              plVar5 = plStack_1c8;
              plVar9 = plStack_150;
            }
          }
          plStack_150 = plVar9;
          plStack_1c8 = plVar5;
          uVar7 = 0xd000000000000022;
          func_0x000107c5fadc(0xd000000000000022,0x800000010f0683c0);
          lStack_1d0 = lVar6;
          func_0x000107c4e60c();
          func_0x000107c61180();
          lStack_140 = lVar6;
          func_0x000107c61170(uVar7);
          puVar8 = PTR_PTR_1126a9fe0;
          func_0x000107c610f8();
          func_0x000107c453e4();
          lVar4 = 0;
          FUN_102185670();
          lVar6 = lVar4;
          func_0x000107c610f8();
          *(undefined **)(lVar6 + _DAT_112e5e0f8) = puVar8;
          plVar5 = &lStack_88;
          lStack_88 = lVar6;
          lStack_80 = lVar4;
          func_0x000107c61154(plVar5,PTR_s_init_1125d9248);
          plStack_160 = plVar5;
          func_0x000100083b20(&plStack_120);
          uVar7 = *(undefined8 *)((long)plStack_120 + _DAT_113083868);
          func_0x000107c61174();
          func_0x000107c61170(plStack_120);
          lVar4 = 0;
          FUN_102174ed4();
          lVar6 = lVar4;
          func_0x000107c610f8();
          puVar20 = (undefined8 *)(lVar6 + _DAT_112e5dc08);
          *puVar20 = 0;
          puVar20[1] = 0;
          *(undefined8 *)(lVar6 + _DAT_112e5dc00) = uVar7;
          plVar5 = &lStack_98;
          lStack_98 = lVar6;
          lStack_90 = lVar4;
          func_0x000107c61154(plVar5,PTR_s_init_1125d9248);
          plVar9 = (long *)0x0;
          plStack_168 = plVar5;
          func_0x000102176228();
          plVar19 = plVar9;
          func_0x000107c613fc();
          plVar19[2] = (long)plVar3;
          ppuStack_100 = &PTR_DAT_1104d5e10;
          lVar10 = 0;
          plStack_120 = plVar19;
          plStack_108 = plVar9;
          FUN_10217b8b8();
          lVar11 = lVar10;
          func_0x000107c610f8();
          plVar5 = plStack_108;
          func_0x0001000c6518(&plStack_120,plStack_108);
          plStack_158 = (long *)aplStack_1e0;
          (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(plVar5[-1] + 0x40));
          puVar20 = (undefined8 *)((long)aplStack_1e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
          (**(code **)(extraout_x12 + 0x10))(puVar20);
          lVar6 = _DAT_112e5de60;
          aplStack_c0[0] = (long *)*puVar20;
          ppuStack_a0 = &PTR_DAT_1104d5e10;
          plStack_a8 = plVar9;
          func_0x00010006a340(0);
          func_0x000107c613fc();
          func_0x000107c61580(in_x4,2);
          func_0x000107c61174();
          lVar4 = lStack_138;
          aplStack_1e0[1] = plVar3;
          func_0x000107c6157c(lStack_138);
          plVar3 = plStack_160;
          func_0x000107c61174();
          plVar9 = plStack_168;
          func_0x000107c61174();
          plVar5 = plVar19;
          func_0x000107c6157c();
          func_0x00010006a360();
          *(long **)(lVar11 + lVar6) = plVar5;
          FUN_10217f658(aplStack_c0,lVar11 + _DAT_112e5de30);
          *(long *)(lVar11 + _DAT_112e5de38) = lVar4;
          *(long **)(lVar11 + _DAT_112e5de40) = plVar3;
          *(long **)(lVar11 + _DAT_112e5de48) = plVar9;
          puVar20 = (undefined8 *)(lVar11 + _DAT_112e5de50);
          *puVar20 = 0x1021855a4;
          puVar20[1] = in_x4;
          puVar20 = (undefined8 *)(lVar11 + _DAT_112e5de58);
          *puVar20 = 0x1021855ac;
          puVar20[1] = in_x4;
          puVar8 = PTR_s_init_1125d9248;
          lStack_d0 = lVar11;
          lStack_c8 = lVar10;
          func_0x000107c6157c(lVar4);
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c61580(in_x4,2);
          plVar5 = &lStack_d0;
          func_0x000107c61154(plVar5,puVar8);
          plStack_180 = plVar5;
          func_0x000107c61574(lVar4);
          func_0x000107c61170(plVar3);
          func_0x000107c61170(plVar9);
          func_0x000107c61578(in_x4,2);
          func_0x000107c61574(plVar19);
          func_0x0001000834e4(aplStack_c0);
          func_0x0001000834e4(&plStack_120);
          func_0x000107c6157c(lVar4);
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000100083b20(&plStack_120);
          plVar5 = plStack_120;
          plVar19 = plStack_120;
          func_0x000107c4cffc();
          func_0x000107c61180();
          func_0x000107c61170(plVar5);
          func_0x000100083b20(aplStack_c0);
          plVar5 = aplStack_c0[0];
          uVar7 = *(undefined8 *)((long)aplStack_c0[0] + _DAT_113091b58);
          func_0x000107c61174();
          func_0x000107c61170(plVar5);
          lVar11 = 0;
          FUN_1021805f0();
          lVar6 = lVar11;
          func_0x000107c610f8();
          *(long *)(lVar6 + _DAT_112e5dfd0) = lVar4;
          *(long **)(lVar6 + _DAT_112e5dfd8) = plVar3;
          *(long **)(lVar6 + _DAT_112e5dfe0) = plVar9;
          *(long **)(lVar6 + _DAT_112e5dfe8) = plVar19;
          *(undefined8 *)(lVar6 + _DAT_112e5dff0) = uVar7;
          plVar5 = &lStack_e0;
          plStack_190 = plVar9;
          plStack_188 = plVar3;
          lStack_e0 = lVar6;
          lStack_d8 = lVar11;
          func_0x000107c61154(plVar5,PTR_s_init_1125d9248);
          plStack_198 = plVar5;
          func_0x000100083b20(&plStack_120);
          plStack_1a0 = plStack_120;
          lVar6 = *(long *)(lVar4 + 0x28);
          if ((lVar6 == 0) || (func_0x000107c5b060(), (int)lVar6 == 0)) {
            lVar11 = 0;
            FUN_102181be8();
            plStack_148 = (long *)lVar11;
            func_0x000107c610f8();
            *(undefined8 *)(lVar11 + _DAT_112e5e070) = 0;
            plStack_150 = _DAT_112e5e078;
            puVar8 = PTR_PTR_1126ae810;
            func_0x000107c610f8();
            plVar5 = plStack_178;
            func_0x000107c615f0(plStack_178);
            lVar4 = lStack_138;
            func_0x000107c6157c(lStack_138);
            plVar3 = plStack_188;
            func_0x000107c61174();
            plVar19 = plStack_190;
            func_0x000107c61174();
            plVar9 = plStack_180;
            func_0x000107c61174();
            lVar6 = lStack_140;
            func_0x000107c615f0(lStack_140);
            plVar16 = plStack_198;
            func_0x000107c61174();
            plVar12 = plStack_1a0;
            func_0x000107c61174();
            func_0x000107c453e4();
            *(undefined **)(lVar11 + (long)plStack_150) = puVar8;
            *(long *)(lVar11 + _DAT_112e5e028) = lVar4;
            *(long **)(lVar11 + _DAT_112e5e030) = plVar9;
            *(long **)(lVar11 + _DAT_112e5e038) = plVar5;
            *(long *)(lVar11 + _DAT_112e5e040) = lVar6;
            *(long **)(lVar11 + _DAT_112e5e048) = plVar3;
            *(long **)(lVar11 + _DAT_112e5e050) = plVar19;
            *(long **)(lVar11 + _DAT_112e5e058) = plVar16;
            *(undefined8 *)(lVar11 + _DAT_112e5e060) = 0;
            *(long **)(lVar11 + _DAT_112e5e068) = plVar12;
            puVar8 = PTR_s_init_1125d9248;
            lStack_e8 = (long)plStack_148;
            lStack_f0 = lVar11;
            func_0x000107c615f0(plVar5);
            func_0x000107c6157c(lVar4);
            func_0x000107c61174();
            plStack_148 = plVar3;
            func_0x000107c61174(plVar19);
            func_0x000107c61174(plVar9);
            func_0x000107c615f0(lVar6);
            func_0x000107c61174(plVar16);
            func_0x000107c61174();
            plVar5 = &lStack_f0;
            func_0x000107c61154(plVar5,puVar8);
            lVar6 = *(long *)(lVar4 + 0x28);
            if ((lVar6 != 0) && (func_0x000107c4ccf8(), (int)lVar6 != 0)) {
              plVar3 = plVar12;
              func_0x000107c4cd00();
              func_0x000107c61180();
              plVar13 = plVar3;
              func_0x000107c5c734();
              func_0x000107c61180();
              func_0x000107c61170(plVar3);
              if (plVar13 != (long *)0x0) {
                puVar8 = &UNK_1104d6d90;
                func_0x000107c613fc(&UNK_1104d6d90,0x18,7);
                func_0x000107c61614(puVar8 + 0x10,plVar5);
                ppuStack_100 = (undefined **)0x1021855b4;
                plStack_120 = (long *)PTR___NSConcreteStackBlock_11034bd00;
                uStack_118 = 0x42000000;
                pcStack_110 = FUN_101930dd0;
                plStack_108 = (long *)&UNK_1104d6da8;
                pplVar14 = &plStack_120;
                puStack_f8 = puVar8;
                func_0x000107c60bc4(pplVar14);
                func_0x000107c61574(puStack_f8);
                plVar3 = plVar13;
                func_0x000107c5c320(plVar13);
                func_0x000107c61180();
                func_0x000107c60bd0(pplVar14);
                uVar7 = *(undefined8 *)((long)plVar5 + (long)_DAT_112e5e078);
                func_0x000107c61174(uVar7);
                func_0x000107c3d65c();
                func_0x000107c61170(plVar13);
                func_0x000107c61170(plVar3);
                func_0x000107c61170(uVar7);
              }
            }
            func_0x000107c61574(lStack_138);
            func_0x000107c61170(plVar9);
            func_0x000107c615e8(plStack_178);
            lVar6 = lStack_140;
            func_0x000107c615e8(lStack_140);
            plVar3 = plStack_148;
            func_0x000107c61170(plStack_148);
            func_0x000107c61170(plVar19);
            func_0x000107c61170(plVar16);
            plVar13 = plVar12;
            func_0x000107c61170();
            FUN_102183c9c();
            func_0x000107c613fc();
            plVar13[3] = 3;
            plVar13[2] = 1;
            func_0x0001000a0a8c(0);
            func_0x000107c61174();
            plVar15 = plVar5;
            func_0x000104494b00();
            func_0x000107c615e8(lStack_1d0);
            func_0x000107c61170(plVar5);
            func_0x000107c61170(plVar5);
            func_0x000107c61170(plVar12);
            func_0x000107c61170(plVar16);
            func_0x000107c615e8(lVar6);
            func_0x000107c61170(plVar9);
            func_0x000107c61170(plVar19);
            func_0x000107c61170(plVar3);
            func_0x000107c61574(lStack_138);
            func_0x000107c61170(aplStack_1e0[1]);
            func_0x000107c615e8(plStack_178);
            plVar13[4] = (long)plVar15;
            param_1 = plStack_1c8;
          }
          else {
            FUN_10217bf8c();
            plVar3 = plStack_178;
            puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
            plVar5 = (long *)PTR___swiftEmptyArrayStorage_11034f1c8;
            if (lVar6 != 0) {
              lVar4 = lVar6;
              func_0x000107c4d0ac();
              func_0x000107c61180();
              func_0x000107c61170(lVar6);
              plVar5 = (long *)PTR___swiftEmptyArrayStorage_11034f1c8;
              if (lVar4 != 0) {
                plStack_120 = (long *)0x0;
                uVar7 = 0;
                FUN_10217e898(0);
                func_0x000107c5fc50(lVar4,&plStack_120,uVar7);
                func_0x000107c61170(lVar4);
                if (plStack_120 != (long *)0x0) {
                  plVar5 = plStack_120;
                }
              }
            }
            param_1 = plStack_1c8;
            if ((ulong)plVar5 >> 0x3e == 0) {
              plVar19 = *(long **)(((ulong)plVar5 & 0xffffffffffffff8) + 0x10);
            }
            else {
              plVar19 = (long *)((ulong)plVar5 & 0xffffffffffffff8);
              if ((long *)0x7fffffffffffffff < plVar5) {
                plVar19 = plVar5;
              }
              func_0x000107c60480();
            }
            if (plVar19 == (long *)0x0) {
              func_0x000107c61170(aplStack_1e0[1]);
              func_0x000107c615e8(lStack_1d0);
              func_0x000107c61574(lStack_138);
              func_0x000107c61170(plStack_1a0);
              func_0x000107c61170(plStack_198);
              func_0x000107c615e8(lStack_140);
              func_0x000107c61170(plStack_180);
              func_0x000107c6142c(plVar5);
              func_0x000107c61170(plStack_190);
              func_0x000107c61170(plStack_188);
              func_0x000107c615e8(plVar3);
              plVar13 = (long *)PTR___swiftEmptyArrayStorage_11034f1c8;
            }
            else {
              aplStack_c0[0] = (long *)puVar8;
              plStack_1c8 = param_1;
              FUN_1021755b4(0,(ulong)plVar19 & ((long)plVar19 >> 0x3f ^ 0xffffffffffffffffU),0);
              plVar9 = aplStack_c0[0];
              if ((long)plVar19 < 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x102185418);
                (*pcVar2)();
              }
              uVar7 = 0;
              func_0x0001000a0a8c();
              plVar16 = (long *)0x0;
              uStack_1c0 = (ulong)plVar5 & 0xc000000000000001;
              uStack_1b8 = uVar7;
              plStack_1b0 = plVar19;
              plStack_1a8 = plVar5;
              do {
                plStack_158 = plVar16;
                plStack_150 = plVar9;
                if (uStack_1c0 == 0) {
                  plVar16 = (long *)plStack_1a8[(long)((long)plVar16 + 4)];
                  func_0x000107c61174();
                }
                else {
                  FUN_102183cf8();
                }
                lVar11 = 0;
                FUN_102181be8();
                plStack_148 = (long *)lVar11;
                func_0x000107c610f8();
                *(undefined8 *)(lVar11 + _DAT_112e5e070) = 0;
                plStack_160 = _DAT_112e5e078;
                puVar8 = PTR_PTR_1126ae810;
                func_0x000107c610f8();
                puStack_170 = puVar8;
                func_0x000107c615f0(plVar3);
                lVar4 = lStack_138;
                func_0x000107c6157c(lStack_138);
                plVar5 = plStack_188;
                func_0x000107c61174();
                plVar19 = plStack_190;
                func_0x000107c61174();
                plVar12 = plStack_180;
                func_0x000107c61174();
                lVar6 = lStack_140;
                func_0x000107c615f0(lStack_140);
                plVar9 = plStack_198;
                func_0x000107c61174();
                plVar13 = plVar16;
                func_0x000107c61174();
                plVar15 = plStack_1a0;
                plStack_168 = plVar13;
                func_0x000107c61174();
                puVar8 = puStack_170;
                func_0x000107c453e4();
                *(undefined **)(lVar11 + (long)plStack_160) = puVar8;
                *(long *)(lVar11 + _DAT_112e5e028) = lVar4;
                *(long **)(lVar11 + _DAT_112e5e030) = plVar12;
                *(long **)(lVar11 + _DAT_112e5e038) = plVar3;
                *(long *)(lVar11 + _DAT_112e5e040) = lVar6;
                *(long **)(lVar11 + _DAT_112e5e048) = plVar5;
                *(long **)(lVar11 + _DAT_112e5e050) = plVar19;
                *(long **)(lVar11 + _DAT_112e5e058) = plVar9;
                *(long **)(lVar11 + _DAT_112e5e060) = plVar16;
                *(long **)(lVar11 + _DAT_112e5e068) = plVar15;
                puVar8 = PTR_s_init_1125d9248;
                lStack_128 = (long)plStack_148;
                lStack_130 = lVar11;
                func_0x000107c615f0(plVar3);
                func_0x000107c6157c(lVar4);
                func_0x000107c61174();
                plStack_160 = plVar5;
                func_0x000107c61174(plVar19);
                func_0x000107c61174(plVar12);
                func_0x000107c615f0(lVar6);
                func_0x000107c61174();
                plVar5 = plStack_168;
                plStack_148 = plVar9;
                func_0x000107c61174(plStack_168);
                func_0x000107c61174();
                plVar9 = &lStack_130;
                func_0x000107c61154(plVar9,puVar8);
                uVar17 = *(ulong *)(lVar4 + 0x28);
                if ((uVar17 != 0) && (func_0x000107c4ccf8(), (uVar17 & 1) != 0)) {
                  plVar3 = plVar15;
                  func_0x000107c4cd00();
                  func_0x000107c61180();
                  plVar16 = plVar3;
                  func_0x000107c5c734();
                  func_0x000107c61180();
                  func_0x000107c61170(plVar3);
                  if (plVar16 != (long *)0x0) {
                    puVar8 = &UNK_1104d6d90;
                    func_0x000107c613fc(&UNK_1104d6d90,0x18,7);
                    func_0x000107c61614(puVar8 + 0x10,plVar9);
                    ppuStack_100 = (undefined **)0x1021855fc;
                    plStack_120 = (long *)PTR___NSConcreteStackBlock_11034bd00;
                    uStack_118 = 0x42000000;
                    pcStack_110 = FUN_101930dd0;
                    plStack_108 = (long *)&UNK_1104d6dd0;
                    pplVar14 = &plStack_120;
                    puStack_f8 = puVar8;
                    func_0x000107c60bc4(pplVar14);
                    func_0x000107c61574(puStack_f8);
                    plVar3 = plVar16;
                    func_0x000107c5c320(plVar16);
                    func_0x000107c61180();
                    func_0x000107c60bd0(pplVar14);
                    uVar7 = *(undefined8 *)((long)plVar9 + (long)_DAT_112e5e078);
                    func_0x000107c61174(uVar7);
                    func_0x000107c3d65c();
                    func_0x000107c61170(plVar16);
                    func_0x000107c61170(plVar3);
                    func_0x000107c61170(uVar7);
                  }
                }
                func_0x000107c61574(lStack_138);
                func_0x000107c61170(plVar12);
                plVar3 = plStack_178;
                func_0x000107c615e8(plStack_178);
                func_0x000107c615e8(lStack_140);
                plVar1 = plStack_160;
                func_0x000107c61170(plStack_160);
                func_0x000107c61170(plVar19);
                func_0x000107c61170(plStack_148);
                func_0x000107c61170(plVar5);
                func_0x000107c61170(plVar15);
                func_0x000107c61174();
                plVar18 = plVar9;
                func_0x000104494b00();
                func_0x000107c61170(plVar5);
                func_0x000107c61170(plVar9);
                func_0x000107c61170(plVar9);
                aplStack_c0[0] = plStack_150;
                uVar17 = plStack_150[2];
                if ((ulong)plStack_150[3] >> 1 <= uVar17) {
                  FUN_1021755b4(1 < (ulong)plStack_150[3],uVar17 + 1,1);
                }
                plVar13 = aplStack_c0[0];
                plVar5 = plStack_1a8;
                plVar16 = (long *)((long)plStack_158 + 1);
                aplStack_c0[0][2] = uVar17 + 1;
                aplStack_c0[0][uVar17 + 4] = (long)plVar18;
                plVar9 = aplStack_c0[0];
              } while (plStack_1b0 != plVar16);
              func_0x000107c61170(aplStack_1e0[1]);
              func_0x000107c615e8(lStack_1d0);
              func_0x000107c61574(lStack_138);
              func_0x000107c61170(plVar15);
              func_0x000107c61170(plStack_148);
              func_0x000107c615e8(lStack_140);
              func_0x000107c61170(plVar12);
              func_0x000107c6142c(plVar5);
              func_0x000107c61170(plVar19);
              func_0x000107c61170(plVar1);
              func_0x000107c615e8(plVar3);
              param_1 = plStack_1c8;
            }
          }
          goto LAB_1021844b8;
        }
      }
LAB_102184478:
      func_0x000107c615e8(plVar19);
      func_0x000107c61170(plVar3);
      func_0x000107c61574(lStack_138);
      func_0x000107c615e8(lVar6);
      plVar13 = (long *)PTR___swiftEmptyArrayStorage_11034f1c8;
      goto LAB_1021844b8;
    }
    func_0x000107c615e8(plVar19);
  }
  func_0x000107c61170(plVar3);
  plVar13 = (long *)PTR___swiftEmptyArrayStorage_11034f1c8;
LAB_1021844b8:
  lVar6 = 0;
  func_0x0001044928d8();
  func_0x000107c613fc();
  *(long **)(lVar6 + 0x10) = plVar13;
  *param_1 = lVar6;
  return;
}



/* Entry: 102185418; end: 10218542b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102185418(long *param_1)

{
  long *plVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long **pplVar16;
  long *plVar17;
  long *plVar18;
  ulong uVar19;
  long *plVar20;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  undefined8 *puVar21;
  long *aplStack_1e0 [2];
  long lStack_1d0;
  long *plStack_1c8;
  ulong uStack_1c0;
  undefined8 uStack_1b8;
  long *plStack_1b0;
  long *plStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  long *plStack_190;
  long *plStack_188;
  long *plStack_180;
  long *plStack_178;
  undefined *puStack_170;
  long *plStack_168;
  long *plStack_160;
  long *plStack_158;
  long *plStack_150;
  long *plStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  long *plStack_108;
  undefined **ppuStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long *aplStack_c0 [3];
  long *plStack_a8;
  undefined **ppuStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  
  uVar12 = *(undefined8 *)(unaff_x20 + 0x30);
  plVar5 = *(long **)(unaff_x20 + 0x40);
  plVar10 = *(long **)(unaff_x20 + 0x48);
  func_0x000100083b20(&plStack_120,*(undefined8 *)(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28),uVar12,*(undefined8 *)(unaff_x20 + 0x38));
  plVar9 = plStack_120;
  plVar3 = plStack_120;
  func_0x000107c40430();
  func_0x000107c61180();
  func_0x000107c61170(plVar9);
  func_0x000100083b20(&plStack_120);
  plVar9 = plStack_120;
  plVar18 = plStack_120;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(plVar9);
  if (plVar18 != (long *)0x0) {
    plStack_148 = plVar5;
    func_0x000100083b20(&plStack_120);
    plVar5 = plStack_120;
    lVar4 = *(long *)((long)plStack_120 + _DAT_113093a98);
    func_0x000107c61174();
    func_0x000107c61170(plVar5);
    lVar6 = lVar4;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar6 != 0) {
      lVar4 = 0;
      func_0x00010217c200();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = 0xd000000000000023;
      *(undefined8 *)(lVar4 + 0x18) = 0x800000010f0680e0;
      *(long **)(lVar4 + 0x20) = plVar18;
      *(undefined8 *)(lVar4 + 0x28) = 1;
      plVar5 = plVar18;
      func_0x000107c615f0();
      lStack_138 = lVar4;
      FUN_10217bf8c();
      if (plVar5 != (long *)0x0) {
        plVar9 = plVar5;
        func_0x000107c4edb0();
        func_0x000107c61170(plVar5);
        if ((int)plVar9 != 0) {
          lVar4 = *(long *)(lStack_138 + 0x28);
          plVar5 = param_1;
          plStack_178 = plVar18;
          if (lVar4 != 0) {
            func_0x000107c4edb0();
            if ((int)lVar4 == -0x4524111) goto LAB_102184478;
            plVar5 = param_1;
            if (*(long *)(lStack_138 + 0x28) != 0) {
              plStack_1c8 = param_1;
              plStack_150 = plVar10;
              func_0x000107c4edb4();
              plVar5 = plStack_1c8;
              plVar10 = plStack_150;
            }
          }
          plStack_150 = plVar10;
          plStack_1c8 = plVar5;
          uVar7 = 0xd000000000000022;
          func_0x000107c5fadc(0xd000000000000022,0x800000010f0683c0);
          lStack_1d0 = lVar6;
          func_0x000107c4e60c();
          func_0x000107c61180();
          lStack_140 = lVar6;
          func_0x000107c61170(uVar7);
          puVar8 = PTR_PTR_1126a9fe0;
          func_0x000107c610f8();
          func_0x000107c453e4();
          lVar4 = 0;
          FUN_102185670();
          lVar6 = lVar4;
          func_0x000107c610f8();
          *(undefined **)(lVar6 + _DAT_112e5e0f8) = puVar8;
          plVar5 = &lStack_88;
          lStack_88 = lVar6;
          lStack_80 = lVar4;
          func_0x000107c61154(plVar5,PTR_s_init_1125d9248);
          plStack_160 = plVar5;
          func_0x000100083b20(&plStack_120);
          uVar7 = *(undefined8 *)((long)plStack_120 + _DAT_113083868);
          func_0x000107c61174();
          func_0x000107c61170(plStack_120);
          lVar4 = 0;
          FUN_102174ed4();
          lVar6 = lVar4;
          func_0x000107c610f8();
          puVar21 = (undefined8 *)(lVar6 + _DAT_112e5dc08);
          *puVar21 = 0;
          puVar21[1] = 0;
          *(undefined8 *)(lVar6 + _DAT_112e5dc00) = uVar7;
          plVar5 = &lStack_98;
          lStack_98 = lVar6;
          lStack_90 = lVar4;
          func_0x000107c61154(plVar5,PTR_s_init_1125d9248);
          plVar9 = (long *)0x0;
          plStack_168 = plVar5;
          func_0x000102176228();
          plVar10 = plVar9;
          func_0x000107c613fc();
          plVar10[2] = (long)plVar3;
          ppuStack_100 = &PTR_DAT_1104d5e10;
          lVar11 = 0;
          plStack_120 = plVar10;
          plStack_108 = plVar9;
          FUN_10217b8b8();
          lVar13 = lVar11;
          func_0x000107c610f8();
          plVar5 = plStack_108;
          func_0x0001000c6518(&plStack_120,plStack_108);
          plStack_158 = (long *)aplStack_1e0;
          (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(plVar5[-1] + 0x40));
          puVar21 = (undefined8 *)((long)aplStack_1e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
          (**(code **)(extraout_x12 + 0x10))(puVar21);
          lVar6 = _DAT_112e5de60;
          aplStack_c0[0] = (long *)*puVar21;
          ppuStack_a0 = &PTR_DAT_1104d5e10;
          plStack_a8 = plVar9;
          func_0x00010006a340(0);
          func_0x000107c613fc();
          func_0x000107c61580(uVar12,2);
          func_0x000107c61174();
          lVar4 = lStack_138;
          aplStack_1e0[1] = plVar3;
          func_0x000107c6157c(lStack_138);
          plVar9 = plStack_160;
          func_0x000107c61174();
          plVar3 = plStack_168;
          func_0x000107c61174();
          plVar5 = plVar10;
          func_0x000107c6157c();
          func_0x00010006a360();
          *(long **)(lVar13 + lVar6) = plVar5;
          FUN_10217f658(aplStack_c0,lVar13 + _DAT_112e5de30);
          *(long *)(lVar13 + _DAT_112e5de38) = lVar4;
          *(long **)(lVar13 + _DAT_112e5de40) = plVar9;
          *(long **)(lVar13 + _DAT_112e5de48) = plVar3;
          puVar21 = (undefined8 *)(lVar13 + _DAT_112e5de50);
          *puVar21 = 0x1021855a4;
          puVar21[1] = uVar12;
          puVar21 = (undefined8 *)(lVar13 + _DAT_112e5de58);
          *puVar21 = 0x1021855ac;
          puVar21[1] = uVar12;
          puVar8 = PTR_s_init_1125d9248;
          lStack_d0 = lVar13;
          lStack_c8 = lVar11;
          func_0x000107c6157c(lVar4);
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c61580(uVar12,2);
          plVar5 = &lStack_d0;
          func_0x000107c61154(plVar5,puVar8);
          plStack_180 = plVar5;
          func_0x000107c61574(lVar4);
          func_0x000107c61170(plVar9);
          func_0x000107c61170(plVar3);
          func_0x000107c61578(uVar12,2);
          func_0x000107c61574(plVar10);
          func_0x0001000834e4(aplStack_c0);
          func_0x0001000834e4(&plStack_120);
          func_0x000107c6157c(lVar4);
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000100083b20(&plStack_120);
          plVar5 = plStack_120;
          plVar10 = plStack_120;
          func_0x000107c4cffc();
          func_0x000107c61180();
          func_0x000107c61170(plVar5);
          func_0x000100083b20(aplStack_c0);
          plVar5 = aplStack_c0[0];
          uVar12 = *(undefined8 *)((long)aplStack_c0[0] + _DAT_113091b58);
          func_0x000107c61174();
          func_0x000107c61170(plVar5);
          lVar13 = 0;
          FUN_1021805f0();
          lVar6 = lVar13;
          func_0x000107c610f8();
          *(long *)(lVar6 + _DAT_112e5dfd0) = lVar4;
          *(long **)(lVar6 + _DAT_112e5dfd8) = plVar9;
          *(long **)(lVar6 + _DAT_112e5dfe0) = plVar3;
          *(long **)(lVar6 + _DAT_112e5dfe8) = plVar10;
          *(undefined8 *)(lVar6 + _DAT_112e5dff0) = uVar12;
          plVar5 = &lStack_e0;
          plStack_190 = plVar3;
          plStack_188 = plVar9;
          lStack_e0 = lVar6;
          lStack_d8 = lVar13;
          func_0x000107c61154(plVar5,PTR_s_init_1125d9248);
          plStack_198 = plVar5;
          func_0x000100083b20(&plStack_120);
          plStack_1a0 = plStack_120;
          lVar6 = *(long *)(lVar4 + 0x28);
          if ((lVar6 == 0) || (func_0x000107c5b060(), (int)lVar6 == 0)) {
            lVar13 = 0;
            FUN_102181be8();
            plStack_148 = (long *)lVar13;
            func_0x000107c610f8();
            *(undefined8 *)(lVar13 + _DAT_112e5e070) = 0;
            plStack_150 = _DAT_112e5e078;
            puVar8 = PTR_PTR_1126ae810;
            func_0x000107c610f8();
            plVar5 = plStack_178;
            func_0x000107c615f0(plStack_178);
            lVar4 = lStack_138;
            func_0x000107c6157c(lStack_138);
            plVar10 = plStack_188;
            func_0x000107c61174();
            plVar9 = plStack_190;
            func_0x000107c61174();
            plVar3 = plStack_180;
            func_0x000107c61174();
            lVar6 = lStack_140;
            func_0x000107c615f0(lStack_140);
            plVar18 = plStack_198;
            func_0x000107c61174();
            plVar14 = plStack_1a0;
            func_0x000107c61174();
            func_0x000107c453e4();
            *(undefined **)(lVar13 + (long)plStack_150) = puVar8;
            *(long *)(lVar13 + _DAT_112e5e028) = lVar4;
            *(long **)(lVar13 + _DAT_112e5e030) = plVar3;
            *(long **)(lVar13 + _DAT_112e5e038) = plVar5;
            *(long *)(lVar13 + _DAT_112e5e040) = lVar6;
            *(long **)(lVar13 + _DAT_112e5e048) = plVar10;
            *(long **)(lVar13 + _DAT_112e5e050) = plVar9;
            *(long **)(lVar13 + _DAT_112e5e058) = plVar18;
            *(undefined8 *)(lVar13 + _DAT_112e5e060) = 0;
            *(long **)(lVar13 + _DAT_112e5e068) = plVar14;
            puVar8 = PTR_s_init_1125d9248;
            lStack_e8 = (long)plStack_148;
            lStack_f0 = lVar13;
            func_0x000107c615f0(plVar5);
            func_0x000107c6157c(lVar4);
            func_0x000107c61174();
            plStack_148 = plVar10;
            func_0x000107c61174(plVar9);
            func_0x000107c61174(plVar3);
            func_0x000107c615f0(lVar6);
            func_0x000107c61174(plVar18);
            func_0x000107c61174();
            plVar5 = &lStack_f0;
            func_0x000107c61154(plVar5,puVar8);
            lVar6 = *(long *)(lVar4 + 0x28);
            if ((lVar6 != 0) && (func_0x000107c4ccf8(), (int)lVar6 != 0)) {
              plVar10 = plVar14;
              func_0x000107c4cd00();
              func_0x000107c61180();
              plVar15 = plVar10;
              func_0x000107c5c734();
              func_0x000107c61180();
              func_0x000107c61170(plVar10);
              if (plVar15 != (long *)0x0) {
                puVar8 = &UNK_1104d6d90;
                func_0x000107c613fc(&UNK_1104d6d90,0x18,7);
                func_0x000107c61614(puVar8 + 0x10,plVar5);
                ppuStack_100 = (undefined **)0x1021855b4;
                plStack_120 = (long *)PTR___NSConcreteStackBlock_11034bd00;
                uStack_118 = 0x42000000;
                pcStack_110 = FUN_101930dd0;
                plStack_108 = (long *)&UNK_1104d6da8;
                pplVar16 = &plStack_120;
                puStack_f8 = puVar8;
                func_0x000107c60bc4(pplVar16);
                func_0x000107c61574(puStack_f8);
                plVar10 = plVar15;
                func_0x000107c5c320(plVar15);
                func_0x000107c61180();
                func_0x000107c60bd0(pplVar16);
                uVar12 = *(undefined8 *)((long)plVar5 + (long)_DAT_112e5e078);
                func_0x000107c61174(uVar12);
                func_0x000107c3d65c();
                func_0x000107c61170(plVar15);
                func_0x000107c61170(plVar10);
                func_0x000107c61170(uVar12);
              }
            }
            func_0x000107c61574(lStack_138);
            func_0x000107c61170(plVar3);
            func_0x000107c615e8(plStack_178);
            lVar6 = lStack_140;
            func_0x000107c615e8(lStack_140);
            plVar10 = plStack_148;
            func_0x000107c61170(plStack_148);
            func_0x000107c61170(plVar9);
            func_0x000107c61170(plVar18);
            plVar15 = plVar14;
            func_0x000107c61170();
            FUN_102183c9c();
            func_0x000107c613fc();
            plVar15[3] = 3;
            plVar15[2] = 1;
            func_0x0001000a0a8c(0);
            func_0x000107c61174();
            plVar17 = plVar5;
            func_0x000104494b00();
            func_0x000107c615e8(lStack_1d0);
            func_0x000107c61170(plVar5);
            func_0x000107c61170(plVar5);
            func_0x000107c61170(plVar14);
            func_0x000107c61170(plVar18);
            func_0x000107c615e8(lVar6);
            func_0x000107c61170(plVar3);
            func_0x000107c61170(plVar9);
            func_0x000107c61170(plVar10);
            func_0x000107c61574(lStack_138);
            func_0x000107c61170(aplStack_1e0[1]);
            func_0x000107c615e8(plStack_178);
            plVar15[4] = (long)plVar17;
            param_1 = plStack_1c8;
          }
          else {
            FUN_10217bf8c();
            plVar10 = plStack_178;
            puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
            plVar5 = (long *)PTR___swiftEmptyArrayStorage_11034f1c8;
            if (lVar6 != 0) {
              lVar4 = lVar6;
              func_0x000107c4d0ac();
              func_0x000107c61180();
              func_0x000107c61170(lVar6);
              plVar5 = (long *)PTR___swiftEmptyArrayStorage_11034f1c8;
              if (lVar4 != 0) {
                plStack_120 = (long *)0x0;
                uVar12 = 0;
                FUN_10217e898(0);
                func_0x000107c5fc50(lVar4,&plStack_120,uVar12);
                func_0x000107c61170(lVar4);
                if (plStack_120 != (long *)0x0) {
                  plVar5 = plStack_120;
                }
              }
            }
            param_1 = plStack_1c8;
            if ((ulong)plVar5 >> 0x3e == 0) {
              plVar9 = *(long **)(((ulong)plVar5 & 0xffffffffffffff8) + 0x10);
            }
            else {
              plVar9 = (long *)((ulong)plVar5 & 0xffffffffffffff8);
              if ((long *)0x7fffffffffffffff < plVar5) {
                plVar9 = plVar5;
              }
              func_0x000107c60480();
            }
            if (plVar9 == (long *)0x0) {
              func_0x000107c61170(aplStack_1e0[1]);
              func_0x000107c615e8(lStack_1d0);
              func_0x000107c61574(lStack_138);
              func_0x000107c61170(plStack_1a0);
              func_0x000107c61170(plStack_198);
              func_0x000107c615e8(lStack_140);
              func_0x000107c61170(plStack_180);
              func_0x000107c6142c(plVar5);
              func_0x000107c61170(plStack_190);
              func_0x000107c61170(plStack_188);
              func_0x000107c615e8(plVar10);
              plVar15 = (long *)PTR___swiftEmptyArrayStorage_11034f1c8;
            }
            else {
              aplStack_c0[0] = (long *)puVar8;
              plStack_1c8 = param_1;
              FUN_1021755b4(0,(ulong)plVar9 & ((long)plVar9 >> 0x3f ^ 0xffffffffffffffffU),0);
              plVar3 = aplStack_c0[0];
              if ((long)plVar9 < 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x102185418);
                (*pcVar2)();
              }
              uVar12 = 0;
              func_0x0001000a0a8c();
              plVar18 = (long *)0x0;
              uStack_1c0 = (ulong)plVar5 & 0xc000000000000001;
              uStack_1b8 = uVar12;
              plStack_1b0 = plVar9;
              plStack_1a8 = plVar5;
              do {
                plStack_158 = plVar18;
                plStack_150 = plVar3;
                if (uStack_1c0 == 0) {
                  plVar18 = (long *)plStack_1a8[(long)((long)plVar18 + 4)];
                  func_0x000107c61174();
                }
                else {
                  FUN_102183cf8();
                }
                lVar13 = 0;
                FUN_102181be8();
                plStack_148 = (long *)lVar13;
                func_0x000107c610f8();
                *(undefined8 *)(lVar13 + _DAT_112e5e070) = 0;
                plStack_160 = _DAT_112e5e078;
                puVar8 = PTR_PTR_1126ae810;
                func_0x000107c610f8();
                puStack_170 = puVar8;
                func_0x000107c615f0(plVar10);
                lVar4 = lStack_138;
                func_0x000107c6157c(lStack_138);
                plVar5 = plStack_188;
                func_0x000107c61174();
                plVar9 = plStack_190;
                func_0x000107c61174();
                plVar14 = plStack_180;
                func_0x000107c61174();
                lVar6 = lStack_140;
                func_0x000107c615f0(lStack_140);
                plVar3 = plStack_198;
                func_0x000107c61174();
                plVar15 = plVar18;
                func_0x000107c61174();
                plVar17 = plStack_1a0;
                plStack_168 = plVar15;
                func_0x000107c61174();
                puVar8 = puStack_170;
                func_0x000107c453e4();
                *(undefined **)(lVar13 + (long)plStack_160) = puVar8;
                *(long *)(lVar13 + _DAT_112e5e028) = lVar4;
                *(long **)(lVar13 + _DAT_112e5e030) = plVar14;
                *(long **)(lVar13 + _DAT_112e5e038) = plVar10;
                *(long *)(lVar13 + _DAT_112e5e040) = lVar6;
                *(long **)(lVar13 + _DAT_112e5e048) = plVar5;
                *(long **)(lVar13 + _DAT_112e5e050) = plVar9;
                *(long **)(lVar13 + _DAT_112e5e058) = plVar3;
                *(long **)(lVar13 + _DAT_112e5e060) = plVar18;
                *(long **)(lVar13 + _DAT_112e5e068) = plVar17;
                puVar8 = PTR_s_init_1125d9248;
                lStack_128 = (long)plStack_148;
                lStack_130 = lVar13;
                func_0x000107c615f0(plVar10);
                func_0x000107c6157c(lVar4);
                func_0x000107c61174();
                plStack_160 = plVar5;
                func_0x000107c61174(plVar9);
                func_0x000107c61174(plVar14);
                func_0x000107c615f0(lVar6);
                func_0x000107c61174();
                plVar5 = plStack_168;
                plStack_148 = plVar3;
                func_0x000107c61174(plStack_168);
                func_0x000107c61174();
                plVar3 = &lStack_130;
                func_0x000107c61154(plVar3,puVar8);
                uVar19 = *(ulong *)(lVar4 + 0x28);
                if ((uVar19 != 0) && (func_0x000107c4ccf8(), (uVar19 & 1) != 0)) {
                  plVar10 = plVar17;
                  func_0x000107c4cd00();
                  func_0x000107c61180();
                  plVar18 = plVar10;
                  func_0x000107c5c734();
                  func_0x000107c61180();
                  func_0x000107c61170(plVar10);
                  if (plVar18 != (long *)0x0) {
                    puVar8 = &UNK_1104d6d90;
                    func_0x000107c613fc(&UNK_1104d6d90,0x18,7);
                    func_0x000107c61614(puVar8 + 0x10,plVar3);
                    ppuStack_100 = (undefined **)0x1021855fc;
                    plStack_120 = (long *)PTR___NSConcreteStackBlock_11034bd00;
                    uStack_118 = 0x42000000;
                    pcStack_110 = FUN_101930dd0;
                    plStack_108 = (long *)&UNK_1104d6dd0;
                    pplVar16 = &plStack_120;
                    puStack_f8 = puVar8;
                    func_0x000107c60bc4(pplVar16);
                    func_0x000107c61574(puStack_f8);
                    plVar10 = plVar18;
                    func_0x000107c5c320(plVar18);
                    func_0x000107c61180();
                    func_0x000107c60bd0(pplVar16);
                    uVar12 = *(undefined8 *)((long)plVar3 + (long)_DAT_112e5e078);
                    func_0x000107c61174(uVar12);
                    func_0x000107c3d65c();
                    func_0x000107c61170(plVar18);
                    func_0x000107c61170(plVar10);
                    func_0x000107c61170(uVar12);
                  }
                }
                func_0x000107c61574(lStack_138);
                func_0x000107c61170(plVar14);
                plVar10 = plStack_178;
                func_0x000107c615e8(plStack_178);
                func_0x000107c615e8(lStack_140);
                plVar1 = plStack_160;
                func_0x000107c61170(plStack_160);
                func_0x000107c61170(plVar9);
                func_0x000107c61170(plStack_148);
                func_0x000107c61170(plVar5);
                func_0x000107c61170(plVar17);
                func_0x000107c61174();
                plVar20 = plVar3;
                func_0x000104494b00();
                func_0x000107c61170(plVar5);
                func_0x000107c61170(plVar3);
                func_0x000107c61170(plVar3);
                aplStack_c0[0] = plStack_150;
                uVar19 = plStack_150[2];
                if ((ulong)plStack_150[3] >> 1 <= uVar19) {
                  FUN_1021755b4(1 < (ulong)plStack_150[3],uVar19 + 1,1);
                }
                plVar15 = aplStack_c0[0];
                plVar5 = plStack_1a8;
                plVar18 = (long *)((long)plStack_158 + 1);
                aplStack_c0[0][2] = uVar19 + 1;
                aplStack_c0[0][uVar19 + 4] = (long)plVar20;
                plVar3 = aplStack_c0[0];
              } while (plStack_1b0 != plVar18);
              func_0x000107c61170(aplStack_1e0[1]);
              func_0x000107c615e8(lStack_1d0);
              func_0x000107c61574(lStack_138);
              func_0x000107c61170(plVar17);
              func_0x000107c61170(plStack_148);
              func_0x000107c615e8(lStack_140);
              func_0x000107c61170(plVar14);
              func_0x000107c6142c(plVar5);
              func_0x000107c61170(plVar9);
              func_0x000107c61170(plVar1);
              func_0x000107c615e8(plVar10);
              param_1 = plStack_1c8;
            }
          }
          goto LAB_1021844b8;
        }
      }
LAB_102184478:
      func_0x000107c615e8(plVar18);
      func_0x000107c61170(plVar3);
      func_0x000107c61574(lStack_138);
      func_0x000107c615e8(lVar6);
      plVar15 = (long *)PTR___swiftEmptyArrayStorage_11034f1c8;
      goto LAB_1021844b8;
    }
    func_0x000107c615e8(plVar18);
  }
  func_0x000107c61170(plVar3);
  plVar15 = (long *)PTR___swiftEmptyArrayStorage_11034f1c8;
LAB_1021844b8:
  lVar6 = 0;
  func_0x0001044928d8();
  func_0x000107c613fc();
  *(long **)(lVar6 + 0x10) = plVar15;
  *param_1 = lVar6;
  return;
}



/* Entry: 10218542c; end: 102185563;  */

uint FUN_10218542c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c4ec80(uStack_38);
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  FUN_1021767c8(param_1,param_2,uVar1);
  func_0x000107c61170(uVar1);
  return (uint)param_1 & 1;
}



/* Entry: 102185564; end: 1021855d7;  */

undefined ** FUN_102185564(void)

{
  return &PTR_DAT_11307e328;
}



/* Entry: 1021855d8; end: 1021855f3;  */

void FUN_1021855d8(void)

{
  long unaff_x20;
  
  FUN_1021762d0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 1021855f4; end: 1021855ff;  */

void FUN_1021855f4(long param_1,long param_2)

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



/* Entry: 102185600; end: 10218565f; -[_TtC26OnDeviceMLModelsPrefetcher26OnDeviceMLModelsPerfLogger init] */

void FUN_102185600(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("OnDeviceMLModelsPrefetcher.OnDeviceMLModelsPerfLogger",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10218562c);
  (*pcVar1)();
}



/* Entry: 102185660; end: 10218566f; -[_TtC26OnDeviceMLModelsPrefetcher26OnDeviceMLModelsPerfLogger .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102185660(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e5e0f8));
  return;
}



/* Entry: 102185670; end: 10218568f;  */

void FUN_102185670(void)

{
  func_0x000107c61168(&PTR_PTR_112822930);
  return;
}



/* Entry: 102185690; end: 10218573b;  */

void FUN_102185690(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}


