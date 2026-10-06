/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10389487c; end: 1038948c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10389487c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fa5d40) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038948c8; end: 103894923;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038948c8(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112fa5d40) = param_1;
  func_0x000103894904();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103894924; end: 103894993;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103894924(undefined8 param_1)

{
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x0001000d224c(auStack_58);
  func_0x0001000a8868(auStack_58,uStack_40);
  (**(code **)(lStack_38 + 8))(param_1,uStack_40,lStack_38);
  func_0x0001000834e4(auStack_58);
  return;
}



/* Entry: 103894994; end: 103894a33; -[_TtC11SCARBarImpl21ARBarOverlayPresenter presentOverlay:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103894994(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x0001000d224c(auStack_68);
  func_0x0001000a8868(auStack_68,uStack_50);
  (**(code **)(lStack_48 + 8))(param_3,uStack_50,lStack_48);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x0001000834e4(auStack_68);
  return;
}



/* Entry: 103894a34; end: 103894a9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103894a34(void)

{
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x0001000d224c(auStack_58);
  func_0x0001000a8868(auStack_58,uStack_40);
  (**(code **)(lStack_38 + 0x10))(uStack_40,lStack_38);
  func_0x0001000834e4(auStack_58);
  return;
}



/* Entry: 103894a9c; end: 103894b13; -[_TtC11SCARBarImpl21ARBarOverlayPresenter dismissOverlay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103894a9c(undefined8 param_1)

{
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000107c61174();
  func_0x0001000d224c(auStack_58);
  func_0x0001000a8868(auStack_58,uStack_40);
  (**(code **)(lStack_38 + 0x10))(uStack_40,lStack_38);
  func_0x000107c61170(param_1);
  func_0x0001000834e4(auStack_58);
  return;
}



/* Entry: 103894b14; end: 103894b6f; -[_TtC11SCARBarImpl21ARBarOverlayPresenter init] */

void FUN_103894b14(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCARBarImpl.ARBarOverlayPresenter",0x21,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103894b40);
  (*pcVar1)();
}



/* Entry: 103894b70; end: 103894b7f; -[_TtC11SCARBarImpl21ARBarOverlayPresenter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103894b70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fa5d40));
  return;
}



/* Entry: 103894b80; end: 103894c0b;  */

/* WARNING: Possible PIC construction at 0x000103894bcc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103894bd0) */

void FUN_103894b80(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x20);
  if (lVar2 == 0) {
    if (param_1 != 0) {
      lVar1 = unaff_x20 + 0x18;
      func_0x000107c61618();
      if (lVar1 != 0) {
        func_0x000107c550d8();
        goto code_r0x000107c61170;
      }
    }
  }
  else if (lVar2 != param_1) {
    lVar1 = unaff_x20 + 0x18;
    func_0x000107c61618();
    if (lVar1 != 0) {
      func_0x000107c61174(lVar2);
      func_0x000107c44e2c();
      func_0x000107c550d8(lVar1,param_2,lVar2);
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 103894c0c; end: 103894ddb;  */

/* WARNING: Possible PIC construction at 0x000103894c98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103894cd0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103894c9c) */

void FUN_103894c0c(long param_1)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 == 0) {
    return;
  }
  lVar1 = param_1;
  func_0x000107c4e1ac();
  func_0x000107c61180();
  if (lVar1 != 0) {
    if (*(long *)(unaff_x20 + 0x20) == 0) {
      lVar2 = 0;
    }
    else {
      func_0x000103894cec();
      lVar2 = *(long *)(unaff_x20 + 0x20);
    }
    *(long *)(unaff_x20 + 0x20) = param_1;
    func_0x000107c61174(param_1);
    FUN_103894b80(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 103894ddc; end: 103894e2f;  */

void FUN_103894ddc(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
  func_0x000107c61610(unaff_x20 + 0x18);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103894e30; end: 103894f8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103894e30(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined *puVar4;
  code *pcVar5;
  code *pcVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long unaff_x20;
  long *plVar9;
  
  lVar1 = _DAT_112fa5ea0;
  if (param_1 == 0) {
    if (*(long *)(unaff_x20 + _DAT_112fa5ea0) == 0) {
      return;
    }
  }
  else if (param_1 == *(long *)(unaff_x20 + _DAT_112fa5ea0)) {
    return;
  }
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112fa5e98);
  func_0x000100c82230();
  func_0x000107c550d8();
  func_0x000107c59c6c(*(undefined8 *)(unaff_x20 + _DAT_112fa5e90));
  plVar9 = *(long **)(unaff_x20 + lVar1);
  if (plVar9 == (long *)0x0) {
    return;
  }
  func_0x0001000285a8(0x112d53860,&UNK_10d92b600);
  func_0x000107c61174();
  plVar2 = plVar9;
  func_0x0001000b637c();
  plVar3 = plVar2;
  func_0x00010109e534();
  func_0x000104884898();
  func_0x000107c61574(plVar2);
  puVar4 = &UNK_1106a1c70;
  func_0x000107c613fc(&UNK_1106a1c70,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  pcVar5 = FUN_1038955d4;
  puVar7 = puVar4;
  (**(code **)(*plVar3 + 0x60))(FUN_1038955d4);
  func_0x000107c61574(plVar3);
  func_0x000107c61574(puVar4);
  pcVar6 = pcVar5;
  func_0x000107c614f0(pcVar5);
  (**(code **)(puVar7 + 0x18))(uVar8,pcVar6,puVar7);
  func_0x000107c61170(plVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(pcVar5);
  return;
}



/* Entry: 103894f90; end: 103895087;  */

/* WARNING: Possible PIC construction at 0x000103895030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103895034) */
/* WARNING: Removing unreachable block (ram,0x000103895044) */
/* WARNING: Removing unreachable block (ram,0x00010389504c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103894f90(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  func_0x000107c550d8();
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112fa5e90);
  if (param_1 < 1) {
    uVar2 = 0;
  }
  else {
    puVar1 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar1);
    uVar2 = 0;
    func_0x000107c5fadc(0,0xe000000000000000);
    func_0x000107c6142c(0xe000000000000000);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c212f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar3,PTR_s_setText__1126625f0,uVar2);
  return;
}



/* Entry: 103895088; end: 1038950e7;  */

void FUN_103895088(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000107c49820(uVar1);
    FUN_103894f90();
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1038950e8; end: 103895447;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1038950e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  long unaff_x20;
  
  puVar4 = &stack0xffffffffffffff80;
  func_0x000107c614f0();
  lVar1 = _DAT_112fa5e90;
  puVar2 = PTR_PTR_1126c51b8;
  func_0x000107c610f8();
  func_0x000107c48b14();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112fa5e98;
  uVar3 = 0;
  func_0x0001005f60b4();
  func_0x000107c613fc();
  func_0x0001005f60d4();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112fa5ea0) = 0;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffff80,
                      PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  func_0x000107c61174();
  func_0x000107c5a050();
  func_0x000107c550d8(puVar4);
  lVar1 = _DAT_112fa5e90;
  uVar3 = *(undefined8 *)(puVar4 + _DAT_112fa5e90);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61174(uVar3);
  func_0x000107c5af88(puVar2);
  func_0x000107c61180();
  func_0x000107c59c78(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c5a050(*(undefined8 *)(puVar4 + lVar1));
  func_0x000107c3d89c(puVar4);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  puVar5 = puVar2;
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar5 + 0x18) = 9;
  *(undefined8 *)(puVar5 + 0x10) = 4;
  uVar6 = *(undefined8 *)(puVar4 + lVar1);
  func_0x000107c5cbe4();
  func_0x000107c61180();
  puVar7 = puVar4;
  func_0x000107c5cbe4(puVar4);
  func_0x000107c61180();
  uVar3 = uVar6;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar7);
  *(undefined8 *)(puVar5 + 0x20) = uVar3;
  uVar6 = *(undefined8 *)(puVar4 + lVar1);
  func_0x000107c3ec1c();
  func_0x000107c61180();
  puVar7 = puVar4;
  func_0x000107c3ec1c(puVar4);
  func_0x000107c61180();
  uVar3 = uVar6;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar7);
  *(undefined8 *)(puVar5 + 0x28) = uVar3;
  uVar6 = *(undefined8 *)(puVar4 + lVar1);
  func_0x000107c4acb0();
  func_0x000107c61180();
  puVar7 = puVar4;
  func_0x000107c4acb0(puVar4);
  func_0x000107c61180();
  uVar3 = uVar6;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar7);
  *(undefined8 *)(puVar5 + 0x30) = uVar3;
  uVar6 = *(undefined8 *)(puVar4 + lVar1);
  func_0x000107c5ce8c();
  func_0x000107c61180();
  puVar7 = puVar4;
  func_0x000107c5ce8c(puVar4);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  uVar3 = uVar6;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar7);
  *(undefined8 *)(puVar5 + 0x38) = uVar3;
  uVar3 = 0;
  FUN_103895d74(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  puVar8 = puVar5;
  func_0x000107c5fc48(puVar5,uVar3);
  func_0x000107c61574(puVar5);
  func_0x000107c3d048(puVar2);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar8);
  return puVar4;
}



/* Entry: 103895448; end: 103895467; -[_TtC11SCARBarImpl14ARBarBadgeView initWithFrame:] */

void FUN_103895448(void)

{
  FUN_1038950e8();
  return;
}



/* Entry: 103895468; end: 103895523; -[_TtC11SCARBarImpl14ARBarBadgeView initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103895468(long param_1)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  lVar1 = _DAT_112fa5e90;
  puVar3 = PTR_PTR_1126c51b8;
  func_0x000107c610f8();
  func_0x000107c48b14();
  *(undefined **)(param_1 + lVar1) = puVar3;
  lVar1 = _DAT_112fa5e98;
  uVar4 = 0;
  func_0x0001005f60b4();
  func_0x000107c613fc();
  func_0x0001005f60d4();
  *(undefined8 *)(param_1 + lVar1) = uVar4;
  *(undefined8 *)(param_1 + _DAT_112fa5ea0) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd00000000000001d,0x800000010ef19c10,
                      "SCARBarImpl/ARBarBadgeView.swift",0x20,2,0x35,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103895524);
  (*pcVar2)();
}



/* Entry: 103895524; end: 103895537;  */

void FUN_103895524(void)

{
  puRam0000000112fa5ed8 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  return;
}



/* Entry: 103895538; end: 10389556b;  */

void FUN_103895538(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10389556c; end: 1038955b3; -[_TtC11SCARBarImpl14ARBarBadgeView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103895588: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010389558c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10389556c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fa5e90));
  return;
}



/* Entry: 1038955b4; end: 1038955d3;  */

void FUN_1038955b4(void)

{
  func_0x000107c61168(&PTR_PTR_1128f7ae8);
  return;
}



/* Entry: 1038955d4; end: 1038955db;  */

void FUN_1038955d4(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  uVar2 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c49820(uVar2);
    FUN_103894f90();
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1038955dc; end: 103895633;  */

void FUN_1038955dc(ulong param_1)

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



/* Entry: 103895634; end: 103895697;  */

void FUN_103895634(long param_1,ulong param_2)

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



/* Entry: 103895698; end: 1038957bf;  */

void FUN_103895698(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar3 = param_3;
  uVar5 = param_4;
  FUN_1038955dc();
  lVar6 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar5 & 1;
  lVar7 = lVar6 + uVar8;
  if (SCARRY8(lVar6,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10389574c);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar7) {
    uVar4 = (uint)param_4 & 1;
    FUN_103895910(lVar7);
    uVar3 = param_3;
    FUN_1038955dc();
    if (((uint)uVar5 & 1) != (uVar4 & 1)) {
      func_0x00010388cde0(0);
      func_0x000107c60624();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10389572c);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_1038957c0();
    lVar7 = *unaff_x20;
    goto joined_r0x000103895760;
  }
  lVar7 = *unaff_x20;
joined_r0x000103895760:
  if ((uVar5 & 1) == 0) {
    lVar6 = lVar7 + (uVar3 >> 6) * 8;
    *(ulong *)(lVar6 + 0x40) = *(ulong *)(lVar6 + 0x40) | 1L << (uVar3 & 0x3f);
    *(ulong *)(*(long *)(lVar7 + 0x30) + uVar3 * 8) = param_3;
    puVar1 = (undefined8 *)(*(long *)(lVar7 + 0x38) + uVar3 * 0x10);
    *puVar1 = param_1;
    puVar1[1] = param_2;
    if (SCARRY8(*(long *)(lVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1038957c0);
      (*pcVar2)();
    }
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
  }
  else {
    puVar1 = (undefined8 *)(*(long *)(lVar7 + 0x38) + uVar3 * 0x10);
    *puVar1 = param_1;
    puVar1[1] = param_2;
  }
  return;
}



/* Entry: 1038957c0; end: 10389590f;  */

void FUN_1038957c0(void)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long *unaff_x20;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  func_0x0001000285a8(0x112fa5ee0,&UNK_10dc18f90);
  lVar10 = *unaff_x20;
  lVar4 = lVar10;
  func_0x000107c6048c();
  if (*(long *)(lVar10 + 0x10) != 0) {
    lVar1 = lVar10 + 0x40;
    uVar5 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar10 || lVar1 + uVar5 * 8 <= lVar4 + 0x40U) {
      func_0x000107c610b8(lVar4 + 0x40U,lVar1,uVar5 << 3);
    }
    lVar6 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar10 + 0x10);
    uVar7 = 1L << ((ulong)*(byte *)(lVar10 + 0x20) & 0x3f);
    uVar5 = 0xffffffffffffffff;
    if ((*(byte *)(lVar10 + 0x20) & 0x3f) < 6) {
      uVar5 = ~(-1L << (uVar7 & 0x3f));
    }
    uVar5 = uVar5 & *(ulong *)(lVar10 + 0x40);
    lVar8 = lVar6;
    if (uVar5 == 0) goto LAB_103895898;
    do {
      uVar9 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 - 1 & uVar5;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | lVar6 << 6;
      while( true ) {
        puVar2 = (undefined8 *)(*(long *)(lVar10 + 0x38) + uVar9 * 0x10);
        uVar12 = puVar2[1];
        uVar11 = *puVar2;
        *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar9 * 8) =
             *(undefined8 *)(*(long *)(lVar10 + 0x30) + uVar9 * 8);
        puVar2 = (undefined8 *)(*(long *)(lVar4 + 0x38) + uVar9 * 0x10);
        puVar2[1] = uVar12;
        *puVar2 = uVar11;
        lVar8 = lVar6;
        if (uVar5 != 0) break;
LAB_103895898:
        do {
          lVar6 = lVar8 + 1;
          if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x103895910);
            (*pcVar3)();
          }
          if ((long)(uVar7 + 0x3f >> 6) <= lVar6) goto LAB_1038958f0;
          uVar5 = *(ulong *)(lVar1 + lVar6 * 8);
          lVar8 = lVar8 + 1;
        } while (uVar5 == 0);
        uVar9 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar5 = uVar5 - 1 & uVar5;
        uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | lVar6 * 0x40;
      }
    } while( true );
  }
LAB_1038958f0:
  func_0x000107c61574(lVar10);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 103895910; end: 103895b87;  */

void FUN_103895910(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *unaff_x20;
  long lVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 auStack_a8 [72];
  
  lVar12 = *unaff_x20;
  lVar1 = *(long *)(lVar12 + 0x18);
  if (*(long *)(lVar12 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar17 = 0x112fa5ee0;
  func_0x0001000285a8(0x112fa5ee0,&UNK_10dc18f90);
  lVar5 = lVar12;
  func_0x000107c60490(lVar12,lVar1,param_2,uVar17);
  if (*(long *)(lVar12 + 0x10) == 0) {
LAB_103895b54:
    func_0x000107c61574(lVar12);
    *unaff_x20 = lVar5;
    return;
  }
  puVar14 = (ulong *)(lVar12 + 0x40);
  uVar9 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
  uVar13 = 0xffffffffffffffff;
  if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
    uVar13 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar13 = uVar13 & *puVar14;
  lVar1 = lVar5 + 0x40;
  lVar7 = 0;
  do {
    if (uVar13 == 0) {
      do {
        lVar16 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x103895b84);
          (*pcVar4)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar16) {
          if ((param_2 & 1) != 0) {
            uVar13 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
            if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
              *puVar14 = -1L << (uVar13 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar14,uVar13 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar12 + 0x10) = 0;
          }
          goto LAB_103895b54;
        }
        uVar13 = puVar14[lVar16];
        lVar7 = lVar7 + 1;
      } while (uVar13 == 0);
      uVar6 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar13 = uVar13 - 1 & uVar13;
    }
    else {
      uVar6 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar13 = uVar13 - 1 & uVar13;
      lVar16 = lVar7;
    }
    uVar6 = LZCOUNT(uVar6) | lVar16 << 6;
    uVar15 = *(ulong *)(*(long *)(lVar12 + 0x30) + uVar6 * 8);
    puVar2 = (undefined8 *)(*(long *)(lVar12 + 0x38) + uVar6 * 0x10);
    uVar18 = puVar2[1];
    uVar17 = *puVar2;
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar5 + 0x28));
    uVar10 = uVar15;
    func_0x000107c60690();
    func_0x000107c606a8();
    uVar11 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
    uVar10 = uVar10 & (uVar11 ^ 0xffffffffffffffff);
    uVar8 = uVar10 >> 6;
    uVar6 = -1L << (uVar10 & 0x3f) & (*(ulong *)(lVar1 + uVar8 * 8) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar3 = false;
      uVar6 = 0x3f - uVar11 >> 6;
      do {
        uVar10 = uVar8 + 1;
        if ((uVar10 == uVar6) && (bVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x103895b88);
          (*pcVar4)();
        }
        uVar8 = 0;
        if (uVar10 != uVar6) {
          uVar8 = uVar10;
        }
        bVar3 = (bool)(uVar10 == uVar6 | bVar3);
        uVar10 = *(ulong *)(lVar1 + uVar8 * 8);
      } while (uVar10 == 0xffffffffffffffff);
      uVar10 = ~uVar10;
      uVar6 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar10 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar8) = 1L << (uVar6 & 0x3f) | *(ulong *)(lVar1 + uVar8);
    *(ulong *)(*(long *)(lVar5 + 0x30) + uVar6 * 8) = uVar15;
    puVar2 = (undefined8 *)(*(long *)(lVar5 + 0x38) + uVar6 * 0x10);
    puVar2[1] = uVar18;
    *puVar2 = uVar17;
    *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
    lVar7 = lVar16;
  } while( true );
}



/* Entry: 103895b88; end: 103895d73;  */

undefined1  [16] FUN_103895b88(ulong param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  if ((long)param_1 < 1) {
    uVar7 = 0;
    uVar8 = 0;
  }
  else {
    lVar1 = 3;
    if (99 < param_1) {
      lVar1 = 4;
    }
    lVar2 = 0;
    if (9 < param_1) {
      lVar2 = lVar1;
    }
    if (lRam0000000112fa5ed0 != -1) {
      func_0x000107c61568(0x112fa5ed0,FUN_103895524);
    }
    puVar5 = &uStack_68;
    func_0x000107c61428(0x112fa5ed8,puVar5,0x20,0);
    lVar1 = lRam0000000112fa5ed8;
    if ((*(long *)(lRam0000000112fa5ed8 + 0x10) == 0) ||
       (lVar3 = lVar2, FUN_1038955dc(), ((ulong)puVar5 & 1) == 0)) {
      func_0x000107c614a8(&uStack_68);
      puVar4 = PTR_PTR_1126c51b8;
      func_0x000107c610f8(PTR_PTR_1126c51b8);
      func_0x000107c48b14();
      uStack_68 = 0;
      uStack_60 = 0xe000000000000000;
      puVar6 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
      func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar6);
      uVar7 = uStack_60;
      uVar8 = uStack_68;
      func_0x000107c5fadc(uStack_68,uStack_60);
      func_0x000107c6142c(uVar7);
      func_0x000107c59c6c(puVar4);
      func_0x000107c61170(uVar8);
      uVar7 = *(undefined8 *)PTR__UILayoutFittingCompressedSize_110345d28;
      uVar8 = *(undefined8 *)(PTR__UILayoutFittingCompressedSize_110345d28 + 8);
      func_0x000107c5c610(uVar7,uVar8,puVar4);
      func_0x000107c61428(0x112fa5ed8,&uStack_68,0x21,0);
      lVar3 = lRam0000000112fa5ed8;
      func_0x000107c61558(lRam0000000112fa5ed8);
      lVar1 = lRam0000000112fa5ed8;
      lRam0000000112fa5ed8 = 0x8000000000000000;
      FUN_103895698(uVar7,uVar8,lVar2,lVar3);
      lRam0000000112fa5ed8 = lVar1;
      func_0x000107c614a8(&uStack_68);
      func_0x000107c61170(puVar4);
    }
    else {
      puVar5 = (undefined8 *)(*(long *)(lVar1 + 0x38) + lVar3 * 0x10);
      uVar7 = *puVar5;
      uVar8 = puVar5[1];
      func_0x000107c614a8(&uStack_68);
    }
  }
  auVar9._8_8_ = uVar8;
  auVar9._0_8_ = uVar7;
  return auVar9;
}



/* Entry: 103895d74; end: 103895db3;  */

void FUN_103895d74(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 103895db4; end: 103895e0b;  */

void FUN_103895db4(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd00000000000004a,0x800000010f170af0,
                      "SCARBarImpl/ARBarPickerCell.swift",0x21,2,0xf,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103895e0c);
  (*pcVar1)();
}



/* Entry: 103895e0c; end: 103895e83;  */

/* WARNING: Possible PIC construction at 0x000103895e40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103895e44) */

void FUN_103895e0c(long param_1)

{
  if (param_1 == 0) {
    func_0x000107c520f4();
    param_1 = 0;
  }
  else {
    func_0x000107c3cf00();
    func_0x000107c61180();
    func_0x000107c5faec();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103895e84; end: 103895e8b;  */

void FUN_103895e84(void)

{
  return;
}



/* Entry: 103895e8c; end: 103895f67; -[_TtC11SCARBarImpl15ARBarPickerCell applyLayoutAttributes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103895e8c(ulong *param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  undefined *puVar2;
  ulong *puVar3;
  undefined8 uVar4;
  long lVar5;
  code *pcVar6;
  ulong *puStack_50;
  ulong *puStack_48;
  
  puVar3 = param_1;
  func_0x0001038960dc();
  puVar2 = PTR_s_applyLayoutAttributes__112527ed0;
  puStack_50 = param_1;
  puStack_48 = puVar3;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61154(&puStack_50,puVar2,param_3);
  uVar4 = 0;
  FUN_10389c658(0);
  lVar5 = param_3;
  func_0x000107c61480(param_3,uVar4);
  if (lVar5 != 0) {
    uVar1 = *(undefined1 *)(lVar5 + _DAT_112fa60d0);
    pcVar6 = *(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *param_1) + 0x70);
    lVar5 = param_3;
    func_0x000107c61174(param_3);
    (*pcVar6)(uVar1);
    func_0x000107c61170(lVar5);
  }
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 103895f68; end: 103895fbf;  */

void FUN_103895f68(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd00000000000003c,0x800000010f170ab0,
                      "SCARBarImpl/ARBarPickerCell.swift",0x21,2,0x29,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103895fc0);
  (*pcVar1)();
}



/* Entry: 103895fc0; end: 10389602b; -[_TtC11SCARBarImpl15ARBarPickerCell initWithFrame:] */

void FUN_103895fc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = param_5;
  func_0x0001038960dc();
  uStack_50 = param_5;
  uStack_48 = uVar1;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&uStack_50,PTR_s_initWithFrame__1125e2948);
  return;
}



/* Entry: 10389602c; end: 1038960ab; -[_TtC11SCARBarImpl15ARBarPickerCell initWithCoder:] */

undefined1 * FUN_10389602c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = &uStack_40;
  uVar2 = param_1;
  func_0x0001038960dc();
  puVar1 = PTR_s_initWithCoder__1125dd730;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&uStack_40,puVar1,param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  if (puVar3 != (undefined8 *)0x0) {
    func_0x000107c61170(puVar3);
  }
  return (undefined1 *)puVar3;
}



/* Entry: 1038960ac; end: 1038960fb;  */

void FUN_1038960ac(void)

{
  func_0x0001038960dc();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1038960fc; end: 103896237;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_1038960fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  lVar2 = param_5;
  func_0x000107c40510();
  func_0x000107c61180();
  func_0x000107c438d4();
  func_0x000107c61170(lVar2);
  puVar3 = PTR_PTR_1126aea58;
  func_0x000107c610f8(PTR_PTR_1126aea58);
  func_0x000107c469a4(param_1,param_2,param_3,param_4);
  func_0x000107c5a100();
  plVar1 = (long *)&DAT_112fa5f40;
  if (*(char *)(param_5 + _DAT_112fa5f30) == '\0') {
    plVar1 = (long *)&DAT_112fa5f38;
  }
  puVar5 = *(undefined **)(param_5 + *plVar1);
  if (puVar5 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c61174(puVar3);
    func_0x000107c5af88(puVar4,param_6,0xd5);
    func_0x000107c61180();
  }
  else {
    func_0x000107c61174(puVar3);
    puVar4 = puVar5;
  }
  func_0x000107c61174(puVar5);
  func_0x000107c59c78(puVar3,param_6,puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c59c74(puVar3,param_6,1);
  func_0x000107c61170(puVar3);
  func_0x000107c5a050(puVar3,param_6,0);
  return puVar3;
}



/* Entry: 103896238; end: 10389650b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103896238(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = PTR_PTR_1126b0648;
  func_0x000107c610f8(PTR_PTR_1126b0648);
  func_0x000107c469a4(0,0,0,0);
  plVar1 = (long *)&DAT_112fa5f40;
  if (*(char *)(param_1 + _DAT_112fa5f30) == '\0') {
    plVar1 = (long *)&DAT_112fa5f38;
  }
  puVar4 = *(undefined **)(param_1 + *plVar1);
  if (puVar4 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c61174(puVar2);
    func_0x000107c5af88(puVar3,param_2,0xd5);
    func_0x000107c61180();
  }
  else {
    func_0x000107c61174(puVar2);
    puVar3 = puVar4;
  }
  func_0x000107c61174(puVar4);
  func_0x000107c59e10(puVar2,param_2,puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c5a050(puVar2,param_2,0);
  return puVar2;
}



/* Entry: 10389650c; end: 10389653f; -[_TtC11SCARBarImpl19ARBarPickerIconCell initWithCoder:] */

undefined8 FUN_10389650c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1038975e4();
  func_0x000107c61174(param_3);
  return param_1;
}



/* Entry: 103896540; end: 103896633;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103896540(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  long unaff_x20;
  
  puVar1 = &stack0xffffffffffffffb0;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112fa5f10) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fa5f18) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fa5f20) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fa5f28) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112fa5f30) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fa5f38) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fa5f40) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fa5f48) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112fa5f50) = 0;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffffb0,
                      PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  FUN_103896634();
  func_0x000107c61170(puVar1);
  return puVar1;
}



/* Entry: 103896634; end: 1038969b3;  */

/* WARNING: Possible PIC construction at 0x000103896690: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038966c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103896758: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103896778: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038967c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038967e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103896824: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103896844: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103896894: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038968f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010389694c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001038968f8) */
/* WARNING: Removing unreachable block (ram,0x000103896898) */
/* WARNING: Removing unreachable block (ram,0x000103896848) */
/* WARNING: Removing unreachable block (ram,0x000103896828) */
/* WARNING: Removing unreachable block (ram,0x0001038967e8) */
/* WARNING: Removing unreachable block (ram,0x0001038967c8) */
/* WARNING: Removing unreachable block (ram,0x00010389677c) */
/* WARNING: Removing unreachable block (ram,0x00010389675c) */
/* WARNING: Removing unreachable block (ram,0x0001038966cc) */
/* WARNING: Removing unreachable block (ram,0x000103896694) */
/* WARNING: Removing unreachable block (ram,0x000103896950) */

void FUN_103896634(void)

{
  undefined8 unaff_x20;
  
  func_0x000107c40510();
  func_0x000107c61180();
  func_0x00010389639c(&DAT_112fa5f28,0x1038963fc);
  func_0x000107c3d89c(unaff_x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
  return;
}



/* Entry: 1038969b4; end: 103896aa7; -[_TtC11SCARBarImpl19ARBarPickerIconCell initWithFrame:] */

void FUN_1038969b4(void)

{
  FUN_103896540();
  return;
}



/* Entry: 103896aa8; end: 103896acf; -[_TtC11SCARBarImpl19ARBarPickerIconCell prepareForReuse] */

void FUN_103896aa8(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x0001038969d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103896ad0; end: 103896b8b;  */

undefined1  [16] FUN_103896ad0(double param_1,double param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  double dVar3;
  undefined1 auVar4 [16];
  
  func_0x000107c4d3e4();
  func_0x000107c61180();
  if (param_3 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(param_4);
  }
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x000107c48af4();
  func_0x000107c61170(param_3);
  puVar2 = puVar1;
  func_0x000107c5af80(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c5b078(puVar2);
  func_0x000107c61170(puVar2);
  dVar3 = 24.0;
  if (24.0 < param_1) {
    dVar3 = param_1;
  }
  auVar4._8_8_ = param_2 + 24.0 + 4.0;
  auVar4._0_8_ = dVar3;
  return auVar4;
}



/* Entry: 103896b8c; end: 103896bef;  */

/* WARNING: Possible PIC construction at 0x000103896bb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103896bd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103896db0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103896ddc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103896e50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103896ce4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103896d00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103896d4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103896ed8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103896f28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103896f44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103896f90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103896fec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103897008: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103896ff0) */
/* WARNING: Removing unreachable block (ram,0x000103896f94) */
/* WARNING: Removing unreachable block (ram,0x000103896f48) */
/* WARNING: Removing unreachable block (ram,0x000103896f2c) */
/* WARNING: Removing unreachable block (ram,0x000103896f30) */
/* WARNING: Removing unreachable block (ram,0x000103896edc) */
/* WARNING: Removing unreachable block (ram,0x000103896f98) */
/* WARNING: Removing unreachable block (ram,0x000103896fa4) */
/* WARNING: Removing unreachable block (ram,0x000103896fbc) */
/* WARNING: Removing unreachable block (ram,0x000103896fb4) */
/* WARNING: Removing unreachable block (ram,0x000103896fd8) */
/* WARNING: Removing unreachable block (ram,0x000103896fdc) */
/* WARNING: Removing unreachable block (ram,0x000103896f10) */
/* WARNING: Removing unreachable block (ram,0x000103896d50) */
/* WARNING: Removing unreachable block (ram,0x000103896d04) */
/* WARNING: Removing unreachable block (ram,0x000103896ce8) */
/* WARNING: Removing unreachable block (ram,0x000103896cec) */
/* WARNING: Removing unreachable block (ram,0x000103896e54) */
/* WARNING: Removing unreachable block (ram,0x000103896e70) */
/* WARNING: Removing unreachable block (ram,0x000103896e84) */
/* WARNING: Removing unreachable block (ram,0x000103896e88) */
/* WARNING: Removing unreachable block (ram,0x000103896de0) */
/* WARNING: Removing unreachable block (ram,0x000103896e00) */
/* WARNING: Removing unreachable block (ram,0x000103896e18) */
/* WARNING: Removing unreachable block (ram,0x000103896e10) */
/* WARNING: Removing unreachable block (ram,0x000103896e3c) */
/* WARNING: Removing unreachable block (ram,0x000103896db4) */
/* WARNING: Removing unreachable block (ram,0x000103896dd8) */
/* WARNING: Removing unreachable block (ram,0x000103896ddc) */
/* WARNING: Removing unreachable block (ram,0x000107c526c0) */
/* WARNING: Removing unreachable block (ram,0x00010c1677c0) */
/* WARNING: Removing unreachable block (ram,0x000103896bd8) */
/* WARNING: Removing unreachable block (ram,0x000103896bf0) */
/* WARNING: Removing unreachable block (ram,0x000103896c2c) */
/* WARNING: Removing unreachable block (ram,0x000103896c30) */
/* WARNING: Removing unreachable block (ram,0x000103896c84) */
/* WARNING: Removing unreachable block (ram,0x000103896d54) */
/* WARNING: Removing unreachable block (ram,0x000103896d60) */
/* WARNING: Removing unreachable block (ram,0x000103896ea8) */
/* WARNING: Removing unreachable block (ram,0x000103896d70) */
/* WARNING: Removing unreachable block (ram,0x000103896ec4) */
/* WARNING: Removing unreachable block (ram,0x000103896ec8) */
/* WARNING: Removing unreachable block (ram,0x000103896ccc) */
/* WARNING: Removing unreachable block (ram,0x000103896c34) */
/* WARNING: Removing unreachable block (ram,0x000103896c6c) */
/* WARNING: Removing unreachable block (ram,0x000103896d78) */
/* WARNING: Removing unreachable block (ram,0x000103896c7c) */
/* WARNING: Removing unreachable block (ram,0x000103896d9c) */
/* WARNING: Removing unreachable block (ram,0x000103896bb8) */
/* WARNING: Removing unreachable block (ram,0x00010389700c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103896b8c(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112fa5f38);
  *(undefined8 *)(unaff_x20 + _DAT_112fa5f38) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103896bf0; end: 103897043;  */

/* WARNING: Possible PIC construction at 0x000103896db0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103896ddc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103896e50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103896ce4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103896d00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103896d4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103896ed8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103896f28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103896f44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103896f90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103896fec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103897008: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103896ff0) */
/* WARNING: Removing unreachable block (ram,0x000103896f94) */
/* WARNING: Removing unreachable block (ram,0x000103896f48) */
/* WARNING: Removing unreachable block (ram,0x000103896f2c) */
/* WARNING: Removing unreachable block (ram,0x000103896f30) */
/* WARNING: Removing unreachable block (ram,0x000103896edc) */
/* WARNING: Removing unreachable block (ram,0x000103896f98) */
/* WARNING: Removing unreachable block (ram,0x000103896fa4) */
/* WARNING: Removing unreachable block (ram,0x000103896fbc) */
/* WARNING: Removing unreachable block (ram,0x000103896fb4) */
/* WARNING: Removing unreachable block (ram,0x000103896fd8) */
/* WARNING: Removing unreachable block (ram,0x000103896fdc) */
/* WARNING: Removing unreachable block (ram,0x000103896f10) */
/* WARNING: Removing unreachable block (ram,0x000103896d50) */
/* WARNING: Removing unreachable block (ram,0x000103896d04) */
/* WARNING: Removing unreachable block (ram,0x000103896ce8) */
/* WARNING: Removing unreachable block (ram,0x000103896cec) */
/* WARNING: Removing unreachable block (ram,0x000103896e54) */
/* WARNING: Removing unreachable block (ram,0x000103896e70) */
/* WARNING: Removing unreachable block (ram,0x000103896e84) */
/* WARNING: Removing unreachable block (ram,0x000103896e88) */
/* WARNING: Removing unreachable block (ram,0x000103896de0) */
/* WARNING: Removing unreachable block (ram,0x000103896e00) */
/* WARNING: Removing unreachable block (ram,0x000103896e18) */
/* WARNING: Removing unreachable block (ram,0x000103896e10) */
/* WARNING: Removing unreachable block (ram,0x000103896e3c) */
/* WARNING: Removing unreachable block (ram,0x000103896db4) */
/* WARNING: Removing unreachable block (ram,0x000103896dd8) */
/* WARNING: Removing unreachable block (ram,0x000103896ddc) */
/* WARNING: Removing unreachable block (ram,0x000107c526c0) */
/* WARNING: Removing unreachable block (ram,0x00010c1677c0) */
/* WARNING: Removing unreachable block (ram,0x00010389700c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103896bf0(void)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long unaff_x20;
  
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112fa5f48);
  if (puVar2 == (undefined *)0x0 || *(char *)(unaff_x20 + _DAT_112fa5f50) == '\0') {
    puVar4 = &DAT_112fa5f10;
    func_0x00010389639c(&DAT_112fa5f10,FUN_1038960fc);
    plVar1 = (long *)&DAT_112fa5f40;
    if (*(char *)(unaff_x20 + _DAT_112fa5f30) == '\0') {
      plVar1 = (long *)&DAT_112fa5f38;
    }
    lVar3 = *(long *)(unaff_x20 + *plVar1);
    if (lVar3 == 0) {
      func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
      func_0x000107c5af88();
      func_0x000107c61180();
      lVar3 = 0;
    }
    func_0x000107c61174(lVar3);
    func_0x000107c59c78(puVar4);
  }
  else {
    func_0x000107c61174();
    puVar4 = &DAT_112fa5f10;
    func_0x00010389639c(&DAT_112fa5f10,FUN_1038960fc);
    func_0x000107c3d1b8();
    func_0x000107c61180();
    if (puVar2 == (undefined *)0x0) {
      plVar1 = (long *)&DAT_112fa5f40;
      if (*(char *)(unaff_x20 + _DAT_112fa5f30) == '\0') {
        plVar1 = (long *)&DAT_112fa5f38;
      }
      if (*(long *)(unaff_x20 + *plVar1) == 0) {
        func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
        func_0x000107c5af88();
        func_0x000107c61180();
      }
      else {
        func_0x000107c61174();
      }
      func_0x000107c59c78(puVar4);
    }
    else {
      func_0x000107c44dc4();
      func_0x000107c61180();
      puVar4 = puVar2;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 103897044; end: 10389708f;  */

void FUN_103897044(char param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = &DAT_112fa5f28;
  func_0x00010389639c(&DAT_112fa5f28,0x1038963fc);
  uVar2 = 0x4010000000000000;
  if (param_1 != '\0') {
    uVar2 = 0x4000000000000000;
  }
  func_0x000107c59594(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 103897090; end: 1038973cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103897090(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  undefined **ppuVar4;
  code *pcVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lVar7;
  long lVar8;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  
  ppuVar4 = &puStack_80;
  if (param_1 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = param_1;
    func_0x000107c3cf00();
    func_0x000107c61180();
    if (lVar7 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(param_2);
    }
  }
  func_0x000107c520f4();
  func_0x000107c61170(lVar7);
  puVar2 = &DAT_112fa5f10;
  pcVar5 = FUN_1038960fc;
  func_0x00010389639c(&DAT_112fa5f10,FUN_1038960fc);
  if (param_1 == 0) {
    func_0x000107c59c6c(puVar2);
    func_0x000107c61170(puVar2);
    puVar2 = &DAT_112fa5f18;
    func_0x00010389639c(&DAT_112fa5f18,0x103896238);
    func_0x000107c55258();
    func_0x000107c61170(puVar2);
    uVar1 = 0;
  }
  else {
    lVar7 = param_1;
    func_0x000107c4d3e4();
    func_0x000107c61180();
    if (lVar7 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(pcVar5);
    }
    func_0x000107c59c6c(puVar2);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(lVar7);
    puVar2 = &DAT_112fa5f18;
    func_0x00010389639c(&DAT_112fa5f18,0x103896238);
    func_0x000107c55258();
    func_0x000107c61170(puVar2);
    lVar7 = param_1;
    func_0x000107c4a4c4();
    uVar1 = (uint)lVar7;
  }
  lVar7 = param_1;
  func_0x000107c5c8bc();
  func_0x000107c61180();
  if (lVar7 != 0) {
    func_0x000107c61170(lVar7);
  }
  lVar8 = param_1;
  func_0x000107c5c8bc();
  func_0x000107c61180();
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112fa5f48);
  *(long *)(unaff_x20 + _DAT_112fa5f48) = lVar8;
  func_0x000107c61170(uVar6);
  if (uVar1 == 0) {
    if (param_1 == 0) {
      lVar8 = 0;
    }
    else {
      lVar3 = param_1;
      func_0x000107c44f7c();
      func_0x000107c61180();
      pcStack_60 = FUN_1038973d0;
      uStack_58 = 0;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_102146f74;
      puStack_68 = &UNK_1106a1c88;
      func_0x000107c60bc4(&puStack_80);
      lVar8 = lVar3;
      func_0x000107c4c280();
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c61170(lVar3);
    }
    func_0x000107c5528c(*(undefined8 *)(unaff_x20 + _DAT_112fa5f18));
  }
  else {
    uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112fa5f18);
    func_0x000107c61174(uVar6);
    if (param_1 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = param_1;
      func_0x000107c44f7c();
      func_0x000107c61180();
    }
    func_0x000107c5528c(uVar6);
    func_0x000107c61170(uVar6);
  }
  func_0x000107c61170();
  func_0x000103896324();
  func_0x000107c3e620();
  func_0x000107c61180();
  uVar6 = *(undefined8 *)(lVar8 + _DAT_112fa5ea0);
  *(long *)(lVar8 + _DAT_112fa5ea0) = param_1;
  func_0x000107c61174();
  FUN_103894e30(uVar6);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar6);
  if (uVar1 == *(byte *)(unaff_x20 + _DAT_112fa5f30)) {
    if (lVar7 == 0) {
      return;
    }
  }
  else {
    *(char *)(unaff_x20 + _DAT_112fa5f30) = (char)uVar1;
  }
  FUN_103896bf0();
  return;
}



/* Entry: 1038973d0; end: 10389741f;  */

void FUN_1038973d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c45154(param_2,param_3,2);
  func_0x000107c61180();
  uVar1 = 0;
  FUN_1038975a4(0,0x112d36850,&PTR__OBJC_CLASS___UIImage_1126aea68);
  param_1[3] = uVar1;
  *param_1 = param_2;
  return;
}



/* Entry: 103897420; end: 10389742f;  */

/* WARNING: Possible PIC construction at 0x000103896db0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103896ddc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103896e50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103896ce4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103896d00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103896d4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103896ed8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103896f28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103896f44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103896f90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103896fec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103897008: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103896ff0) */
/* WARNING: Removing unreachable block (ram,0x000103896f94) */
/* WARNING: Removing unreachable block (ram,0x000103896f48) */
/* WARNING: Removing unreachable block (ram,0x000103896f2c) */
/* WARNING: Removing unreachable block (ram,0x000103896f30) */
/* WARNING: Removing unreachable block (ram,0x000103896edc) */
/* WARNING: Removing unreachable block (ram,0x000103896f98) */
/* WARNING: Removing unreachable block (ram,0x000103896fa4) */
/* WARNING: Removing unreachable block (ram,0x000103896fbc) */
/* WARNING: Removing unreachable block (ram,0x000103896fb4) */
/* WARNING: Removing unreachable block (ram,0x000103896fd8) */
/* WARNING: Removing unreachable block (ram,0x000103896fdc) */
/* WARNING: Removing unreachable block (ram,0x000103896f10) */
/* WARNING: Removing unreachable block (ram,0x000103896d50) */
/* WARNING: Removing unreachable block (ram,0x000103896d04) */
/* WARNING: Removing unreachable block (ram,0x000103896ce8) */
/* WARNING: Removing unreachable block (ram,0x000103896cec) */
/* WARNING: Removing unreachable block (ram,0x000103896e54) */
/* WARNING: Removing unreachable block (ram,0x000103896e70) */
/* WARNING: Removing unreachable block (ram,0x000103896e84) */
/* WARNING: Removing unreachable block (ram,0x000103896e88) */
/* WARNING: Removing unreachable block (ram,0x000103896de0) */
/* WARNING: Removing unreachable block (ram,0x000103896e00) */
/* WARNING: Removing unreachable block (ram,0x000103896e18) */
/* WARNING: Removing unreachable block (ram,0x000103896e10) */
/* WARNING: Removing unreachable block (ram,0x000103896e3c) */
/* WARNING: Removing unreachable block (ram,0x000103896db4) */
/* WARNING: Removing unreachable block (ram,0x000103896dd8) */
/* WARNING: Removing unreachable block (ram,0x000103896ddc) */
/* WARNING: Removing unreachable block (ram,0x000107c526c0) */
/* WARNING: Removing unreachable block (ram,0x00010c1677c0) */
/* WARNING: Removing unreachable block (ram,0x00010389700c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103897420(undefined1 param_1)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + _DAT_112fa5f50) = param_1;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112fa5f48);
  if (puVar2 == (undefined *)0x0 || *(char *)(unaff_x20 + _DAT_112fa5f50) == '\0') {
    puVar4 = &DAT_112fa5f10;
    func_0x00010389639c(&DAT_112fa5f10,FUN_1038960fc);
    plVar1 = (long *)&DAT_112fa5f40;
    if (*(char *)(unaff_x20 + _DAT_112fa5f30) == '\0') {
      plVar1 = (long *)&DAT_112fa5f38;
    }
    lVar3 = *(long *)(unaff_x20 + *plVar1);
    if (lVar3 == 0) {
      func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
      func_0x000107c5af88();
      func_0x000107c61180();
      lVar3 = 0;
    }
    func_0x000107c61174(lVar3);
    func_0x000107c59c78(puVar4);
  }
  else {
    func_0x000107c61174();
    puVar4 = &DAT_112fa5f10;
    func_0x00010389639c(&DAT_112fa5f10,FUN_1038960fc);
    func_0x000107c3d1b8();
    func_0x000107c61180();
    if (puVar2 == (undefined *)0x0) {
      plVar1 = (long *)&DAT_112fa5f40;
      if (*(char *)(unaff_x20 + _DAT_112fa5f30) == '\0') {
        plVar1 = (long *)&DAT_112fa5f38;
      }
      if (*(long *)(unaff_x20 + *plVar1) == 0) {
        func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
        func_0x000107c5af88();
        func_0x000107c61180();
      }
      else {
        func_0x000107c61174();
      }
      func_0x000107c59c78(puVar4);
    }
    else {
      func_0x000107c44dc4();
      func_0x000107c61180();
      puVar4 = puVar2;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 103897430; end: 1038974df;  */

/* WARNING: Possible PIC construction at 0x000103897444: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103897464: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103897484: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103897468) */
/* WARNING: Removing unreachable block (ram,0x000103897448) */
/* WARNING: Removing unreachable block (ram,0x000103897488) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103897430(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + _DAT_112fa5f10));
  return;
}



/* Entry: 1038974e0; end: 103897567; -[_TtC11SCARBarImpl19ARBarPickerIconCell .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001038974fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010389751c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010389753c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103897520) */
/* WARNING: Removing unreachable block (ram,0x000103897500) */
/* WARNING: Removing unreachable block (ram,0x000103897540) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038974e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fa5f10));
  return;
}



/* Entry: 103897568; end: 103897587;  */

void FUN_103897568(void)

{
  func_0x000107c61168(&PTR_PTR_1128f7c88);
  return;
}



/* Entry: 103897588; end: 1038975a3;  */

void FUN_103897588(long param_1,long param_2)

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



/* Entry: 1038975a4; end: 1038975e3;  */

void FUN_1038975a4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1038975e4; end: 1038976a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038975e4(void)

{
  code *pcVar1;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112fa5f10) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fa5f18) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fa5f20) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fa5f28) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112fa5f30) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fa5f38) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fa5f40) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fa5f48) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112fa5f50) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd00000000000001d,0x800000010ef19c10,
                      "SCARBarImpl/ARBarPickerIconCell.swift",0x25,2,0x40,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038976a8);
  (*pcVar1)();
}



/* Entry: 1038976a8; end: 1038976bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1038976a8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112fa5fa0;
  lVar2 = *(long *)(unaff_x20 + _DAT_112fa5fa0);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    FUN_1038976bc();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 1038976bc; end: 1038977d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1038976bc(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = param_1;
  func_0x0001008479c8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 5;
  *(undefined8 *)(lVar1 + 0x10) = 2;
  uVar6 = *(undefined8 *)(param_1 + _DAT_112fa5f80);
  uVar5 = *(undefined8 *)(param_1 + _DAT_112fa5f90);
  *(undefined8 *)(lVar1 + 0x20) = uVar6;
  *(undefined8 *)(lVar1 + 0x28) = uVar5;
  puVar2 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIStackView_1126aefe8);
  uVar3 = 0;
  FUN_10389ab60(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar5);
  lVar4 = lVar1;
  func_0x000107c5fc48(lVar1,uVar3);
  func_0x000107c61574(lVar1);
  func_0x000107c45784(puVar2);
  func_0x000107c61170(lVar4);
  func_0x000107c5a050(puVar2);
  func_0x000107c52b2c(puVar2);
  func_0x000107c59594(0xc000000000000000,puVar2);
  func_0x000107c52610(puVar2);
  return puVar2;
}



/* Entry: 1038977d4; end: 1038977e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1038977d4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112fa5fa8;
  lVar2 = *(long *)(unaff_x20 + _DAT_112fa5fa8);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    (*(code *)0x103897848)();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 1038977e8; end: 103897953;  */

long FUN_1038977e8(long *param_1,code *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *param_1;
  lVar1 = *(long *)(unaff_x20 + lVar3);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    lVar2 = unaff_x20;
    (*param_2)();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar3);
    *(long *)(unaff_x20 + lVar3) = lVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar1 = 0;
  }
  func_0x000107c61174(lVar1);
  return lVar2;
}



/* Entry: 103897954; end: 1038979af;  */

undefined8 FUN_103897954(char *param_1,char *param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 8);
  if (*param_1 != *param_2) {
    return 0;
  }
  if (*(long *)(param_1 + 8) == 0) {
    if (lVar1 != 0) {
      return 0;
    }
  }
  else {
    if (lVar1 == 0) {
      return 0;
    }
    if (*(long *)(param_1 + 8) != lVar1) {
      return 0;
    }
  }
  return 1;
}



/* Entry: 1038979b0; end: 103897d6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1038979b0(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  long unaff_x20;
  undefined *puVar7;
  
  puVar6 = &stack0xffffffffffffffa0;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112fa5fa0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fa5fa8) = 0;
  func_0x000107c61614(unaff_x20 + _DAT_112fa5fb0,0);
  *(undefined1 *)(unaff_x20 + _DAT_112fa5fb8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112fa5fc0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fa5fc8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fa5fd0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fa5fd8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fa5fe0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fa5fe8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fa5ff0) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fa5ff8);
  puVar1[1] = 0;
  *puVar1 = 3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fa6000);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar3 = PTR_PTR_1126aea58;
  func_0x000107c610f8();
  func_0x000107c469a4(0,0,0,0);
  lVar2 = _DAT_112fa5f80;
  *(undefined **)(unaff_x20 + _DAT_112fa5f80) = puVar3;
  func_0x000107c5a100();
  func_0x000107c59c74(*(undefined8 *)(unaff_x20 + lVar2));
  func_0x000107c5a050(*(undefined8 *)(unaff_x20 + lVar2));
  uVar4 = *(undefined8 *)(unaff_x20 + lVar2);
  func_0x000107c4aba4(uVar4);
  func_0x000107c61180();
  func_0x000107c562fc();
  func_0x000107c61170(uVar4);
  puVar3 = PTR_PTR_1126b0648;
  func_0x000107c610f8();
  func_0x000107c469a4(0,0,0,0);
  lVar2 = _DAT_112fa5f88;
  *(undefined **)(unaff_x20 + _DAT_112fa5f88) = puVar3;
  func_0x000107c5a050();
  func_0x000107c550d8(*(undefined8 *)(unaff_x20 + lVar2));
  puVar3 = PTR_PTR_1126aea58;
  func_0x000107c610f8();
  func_0x000107c469a4(0,0,0,0);
  lVar2 = _DAT_112fa5f90;
  *(undefined **)(unaff_x20 + _DAT_112fa5f90) = puVar3;
  func_0x000107c5a100();
  func_0x000107c5638c(0x4020000000000000,*(undefined8 *)(unaff_x20 + lVar2));
  uVar4 = *(undefined8 *)(unaff_x20 + lVar2);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61174(uVar4);
  puVar5 = puVar3;
  func_0x000107c5af88(puVar3);
  func_0x000107c61180();
  puVar7 = puVar5;
  func_0x000107c3fdd0(0x3fe8000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  func_0x000107c59c78(uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(puVar7);
  func_0x000107c59c74(*(undefined8 *)(unaff_x20 + lVar2));
  func_0x000107c5a050(*(undefined8 *)(unaff_x20 + lVar2));
  func_0x000107c550d8(*(undefined8 *)(unaff_x20 + lVar2));
  puVar5 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8();
  func_0x000107c469a4(0,0,0,0);
  lVar2 = _DAT_112fa5f98;
  *(undefined **)(unaff_x20 + _DAT_112fa5f98) = puVar5;
  func_0x000107c5a050();
  func_0x000107c53840(*(undefined8 *)(unaff_x20 + lVar2));
  uVar4 = *(undefined8 *)(unaff_x20 + lVar2);
  puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168();
  func_0x000107c61174(uVar4);
  func_0x000107c5afa0(0x4024000000000000);
  func_0x000107c61180();
  if (puVar5 == (undefined *)0x0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = puVar5;
    func_0x000107c4507c();
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
  }
  func_0x000107c55258(uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(puVar7);
  uVar4 = *(undefined8 *)(unaff_x20 + lVar2);
  func_0x000107c61174(uVar4);
  func_0x000107c5af88(puVar3);
  func_0x000107c61180();
  func_0x000107c59e10(uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c550d8(*(undefined8 *)(unaff_x20 + lVar2));
  func_0x000107c61154(0,0,0,0,&stack0xffffffffffffffa0,PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  FUN_103897d70();
  func_0x000107c61170(puVar6);
  return puVar6;
}



/* Entry: 103897d70; end: 10389820b;  */

/* WARNING: Possible PIC construction at 0x000103897dbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103897e24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103897e78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103897ea4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103897ec8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103897f54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103897fa8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010389800c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103898058: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103898098: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038980e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103898138: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103898190: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038981dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103898194) */
/* WARNING: Removing unreachable block (ram,0x00010389813c) */
/* WARNING: Removing unreachable block (ram,0x0001038980e8) */
/* WARNING: Removing unreachable block (ram,0x00010389809c) */
/* WARNING: Removing unreachable block (ram,0x00010389805c) */
/* WARNING: Removing unreachable block (ram,0x000103898010) */
/* WARNING: Removing unreachable block (ram,0x000103897fac) */
/* WARNING: Removing unreachable block (ram,0x000103897f58) */
/* WARNING: Removing unreachable block (ram,0x000103897ecc) */
/* WARNING: Removing unreachable block (ram,0x000103897ea8) */
/* WARNING: Removing unreachable block (ram,0x000103897e7c) */
/* WARNING: Removing unreachable block (ram,0x000103897e28) */
/* WARNING: Removing unreachable block (ram,0x000103897dc0) */
/* WARNING: Removing unreachable block (ram,0x0001038981e0) */

void FUN_103897d70(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_112fa5fa8;
  FUN_1038977e8(&DAT_112fa5fa8,0x103897848);
  func_0x000107c3d89c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10389820c; end: 10389822b; -[_TtC11SCARBarImpl28ARBarPickerPillContainerView init] */

void FUN_10389820c(void)

{
  FUN_1038979b0();
  return;
}



/* Entry: 10389822c; end: 10389825f; -[_TtC11SCARBarImpl28ARBarPickerPillContainerView initWithCoder:] */

undefined8 FUN_10389822c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10389aa54();
  func_0x000107c61174(param_3);
  return param_1;
}



/* Entry: 103898260; end: 103898423;  */

/* WARNING: Possible PIC construction at 0x000103898394: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103898260(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long unaff_x20;
  double dVar2;
  double dVar3;
  
  func_0x000107c3ec60();
  dVar3 = param_1;
  func_0x000107c609b0();
  lVar1 = _DAT_112fa5fd8;
  if (*(long *)(unaff_x20 + _DAT_112fa5fd8) != 0) {
    func_0x000107c54b80(param_1,param_2,param_3,param_4);
    if (*(long *)(unaff_x20 + lVar1) != 0) {
      func_0x000107c539d4(dVar3 * 0.5);
    }
  }
  lVar1 = _DAT_112fa5fe0;
  if (*(long *)(unaff_x20 + _DAT_112fa5fe0) != 0) {
    func_0x000107c54b80(param_1,param_2,param_3,param_4);
    if (*(long *)(unaff_x20 + lVar1) != 0) {
      func_0x000107c539d4(dVar3 * 0.5);
    }
  }
  dVar3 = param_1;
  func_0x000107c609cc(param_1,param_2,param_3,param_4);
  dVar3 = dVar3 + -2.0;
  func_0x000107c609b0(param_1,param_2,param_3,param_4);
  lVar1 = _DAT_112fa5fe8;
  param_1 = param_1 + -2.0;
  if (*(long *)(unaff_x20 + _DAT_112fa5fe8) != 0) {
    func_0x000107c54b80(0x3ff0000000000000,0x3ff0000000000000,dVar3,param_1);
    lVar1 = *(long *)(unaff_x20 + lVar1);
    if (lVar1 != 0) {
      func_0x000107c61174();
      dVar2 = 1.0;
      func_0x000107c609b0(0x3ff0000000000000,0x3ff0000000000000,dVar3,param_1);
      func_0x000107c539d4(dVar2 * 0.5,lVar1);
      goto code_r0x000107c61170;
    }
  }
  lVar1 = _DAT_112fa5ff0;
  if (*(long *)(unaff_x20 + _DAT_112fa5ff0) != 0) {
    func_0x000107c54b80(0x3ff0000000000000,0x3ff0000000000000,dVar3,param_1);
    lVar1 = *(long *)(unaff_x20 + lVar1);
    if (lVar1 != 0) {
      func_0x000107c61174();
      dVar2 = 1.0;
      func_0x000107c609b0(0x3ff0000000000000,0x3ff0000000000000,dVar3,param_1);
      func_0x000107c539d4(dVar2 * 0.5,lVar1);
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 103898424; end: 1038984cb; -[_TtC11SCARBarImpl28ARBarPickerPillContainerView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103898424(double param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_2;
  func_0x000107c614f0();
  puVar1 = PTR_s_layoutSubviews_112600e60;
  lStack_40 = param_2;
  lStack_38 = lVar2;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_40,puVar1);
  lVar2 = param_2;
  func_0x000107c4aba4(param_2);
  func_0x000107c61180();
  func_0x000107c3ec60(param_2);
  func_0x000107c609b0();
  func_0x000107c539d4(param_1 * 0.5,lVar2);
  func_0x000107c61170(lVar2);
  if (*(long *)(param_2 + _DAT_112fa5fd8) != 0) {
    FUN_103898260();
  }
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 1038984cc; end: 1038987e7;  */

/* WARNING: Possible PIC construction at 0x00010389857c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038985b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038986ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038986d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103898704: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038987bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103898708) */
/* WARNING: Removing unreachable block (ram,0x0001038986d4) */
/* WARNING: Removing unreachable block (ram,0x0001038986b0) */
/* WARNING: Removing unreachable block (ram,0x0001038985b8) */
/* WARNING: Removing unreachable block (ram,0x0001038985e4) */
/* WARNING: Removing unreachable block (ram,0x000103898604) */
/* WARNING: Removing unreachable block (ram,0x000103898608) */
/* WARNING: Removing unreachable block (ram,0x000103898610) */
/* WARNING: Removing unreachable block (ram,0x000103898710) */
/* WARNING: Removing unreachable block (ram,0x000103898714) */
/* WARNING: Removing unreachable block (ram,0x000103898664) */
/* WARNING: Removing unreachable block (ram,0x000103898728) */
/* WARNING: Removing unreachable block (ram,0x00010389872c) */
/* WARNING: Removing unreachable block (ram,0x00010389866c) */
/* WARNING: Removing unreachable block (ram,0x000103898750) */
/* WARNING: Removing unreachable block (ram,0x000103898754) */
/* WARNING: Removing unreachable block (ram,0x000103898670) */
/* WARNING: Removing unreachable block (ram,0x000103898580) */
/* WARNING: Removing unreachable block (ram,0x000103898584) */
/* WARNING: Removing unreachable block (ram,0x0001038987c0) */
/* WARNING: Removing unreachable block (ram,0x0001038987c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038984cc(ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  long unaff_x20;
  ulong uVar6;
  
  uVar2 = 0x100;
  if ((param_2 & 1) == 0) {
    uVar2 = 0;
  }
  puVar1 = (ulong *)(unaff_x20 + _DAT_112fa6000);
  uVar6 = puVar1[1];
  if (uVar6 == 0) {
    func_0x000107c61174(param_3);
    func_0x000107c61174();
    uVar6 = puVar1[1];
    *puVar1 = uVar2 | param_1 & 0xff;
    puVar1[1] = param_3;
    puVar1[2] = param_4;
    puVar1[3] = param_5;
  }
  else {
    uVar2 = puVar1[2];
    uVar3 = puVar1[3];
    uVar4 = *puVar1;
    uVar5 = 0x100;
    if ((param_2 & 1) == 0) {
      uVar5 = 0;
    }
    func_0x000107c61174(param_3);
    func_0x000107c61174();
    func_0x000107c61174(uVar6);
    func_0x000103899a6c(uVar5 | (uint)param_1 & 0xff,param_3,param_4,param_5,(uint)uVar4 & 0x1ff,
                        uVar6,uVar2,uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 1038987e8; end: 103898b8b;  */

/* WARNING: Possible PIC construction at 0x000103899144: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103899174: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103898f58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103898f88: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038987e8(char param_1,undefined *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puVar2 = param_2;
  func_0x000107c61168();
  if (param_1 == '\0') {
    puVar2 = puVar1;
    func_0x000107c5af88();
    func_0x000107c61180();
    puVar6 = puVar2;
    func_0x000107c3fdd0(0x3fe0000000000000);
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    func_0x000107c52b50();
    func_0x000107c61170(puVar6);
    lVar5 = unaff_x20;
    func_0x000107c4aba4();
    func_0x000107c61180();
    func_0x000107c52e0c(0x3ff0000000000000);
    func_0x000107c61170(lVar5);
    lVar5 = unaff_x20;
    func_0x000107c4aba4();
    func_0x000107c61180();
    func_0x000107c5af88(puVar1);
    func_0x000107c61180();
    puVar2 = puVar1;
    func_0x000107c3ab24();
    func_0x000107c61180();
    func_0x000107c61170(puVar1);
    func_0x000107c52df8(lVar5);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(puVar2);
    func_0x000107c59c78(*(undefined8 *)(unaff_x20 + _DAT_112fa5f80));
    lVar5 = *(long *)(unaff_x20 + _DAT_112fa5fd8);
    if (lVar5 == 0) {
      if (*(long *)(unaff_x20 + _DAT_112fa5fe8) != 0) {
        func_0x000107c550d8();
      }
      lVar5 = *(long *)(unaff_x20 + _DAT_112fa5fe0);
      if (lVar5 == 0) {
        lVar5 = *(long *)(unaff_x20 + _DAT_112fa5ff0);
        if (lVar5 == 0) {
          return;
        }
        uVar7 = 1;
      }
      else {
        uVar7 = 1;
      }
    }
    else {
      uVar7 = 1;
    }
    goto code_r0x000107c550d8;
  }
  if (param_1 == '\x01') {
    puVar2 = puVar1;
    func_0x000107c3fa94();
    func_0x000107c61180();
    func_0x000107c52b50();
    func_0x000107c61170(puVar2);
    lVar5 = unaff_x20;
    func_0x000107c4aba4();
    func_0x000107c61180();
    func_0x000107c52e0c(0);
    func_0x000107c61170(lVar5);
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112fa5f80);
    func_0x000107c5e2ac(puVar1);
    func_0x000107c61180();
    func_0x000107c59c78(uVar7);
  }
  else {
    puVar6 = puVar1;
    func_0x000107c3fa94();
    func_0x000107c61180();
    func_0x000107c52b50();
    func_0x000107c61170(puVar6);
    lVar5 = unaff_x20;
    func_0x000107c4aba4();
    func_0x000107c61180();
    func_0x000107c52e0c(0);
    func_0x000107c61170(lVar5);
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112fa5f80);
    puVar6 = puVar2;
    if (param_3 == 0) {
LAB_103898a90:
      puVar4 = param_2;
      func_0x000107c61174(param_2);
    }
    else {
      lVar5 = param_3;
      func_0x000107c3d1b8();
      func_0x000107c61180();
      puVar6 = puVar2;
      if (lVar5 == 0) goto LAB_103898a90;
      lVar3 = lVar5;
      func_0x000107c44dc4();
      func_0x000107c61180();
      func_0x000107c61170(lVar5);
      puVar6 = puVar2;
      if (lVar3 == 0) goto LAB_103898a90;
      lVar5 = lVar3;
      func_0x000107c5faec(lVar3);
      func_0x000107c61170(lVar3);
      func_0x000107c61434(puVar2);
      func_0x000107c5fadc(lVar5,puVar2);
      puVar4 = puVar1;
      func_0x000107c3fde4();
      func_0x000107c61180();
      puVar6 = (undefined *)0x2;
      func_0x000107c61430(puVar2,2);
      func_0x000107c61170(lVar5);
      if (puVar4 == (undefined *)0x0) goto LAB_103898a90;
    }
    func_0x000107c59c78(uVar7);
    func_0x000107c61170(puVar4);
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112fa5f88);
    if (param_3 == 0) {
LAB_103898b54:
      func_0x000107c61174(param_2);
      puVar1 = param_2;
    }
    else {
      func_0x000107c3d124();
      func_0x000107c61180();
      if (param_3 == 0) goto LAB_103898b54;
      lVar5 = param_3;
      func_0x000107c44dc4();
      func_0x000107c61180();
      func_0x000107c61170(param_3);
      if (lVar5 == 0) goto LAB_103898b54;
      lVar3 = lVar5;
      func_0x000107c5faec(lVar5);
      func_0x000107c61170(lVar5);
      func_0x000107c61434(puVar6);
      func_0x000107c5fadc(lVar3,puVar6);
      func_0x000107c3fde4();
      func_0x000107c61180();
      func_0x000107c61430(puVar6,2);
      func_0x000107c61170(lVar3);
      if (puVar1 == (undefined *)0x0) goto LAB_103898b54;
    }
    func_0x000107c59e10(uVar7);
  }
  func_0x000107c61170(puVar1);
  lVar5 = *(long *)(unaff_x20 + _DAT_112fa5fd8);
  if (lVar5 == 0) {
    if (*(long *)(unaff_x20 + _DAT_112fa5fe8) != 0) {
      func_0x000107c550d8();
    }
    lVar5 = *(long *)(unaff_x20 + _DAT_112fa5fe0);
    if (lVar5 == 0) {
      lVar5 = *(long *)(unaff_x20 + _DAT_112fa5ff0);
      if (lVar5 == 0) {
        return;
      }
      uVar7 = 0;
    }
    else {
      uVar7 = 0;
    }
  }
  else {
    uVar7 = 0;
  }
code_r0x000107c550d8:
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar5,PTR_s_setHidden__1126479f8,uVar7);
  return;
}



/* Entry: 103898b8c; end: 103898c73;  */

/* WARNING: Possible PIC construction at 0x000103898f58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103898f88: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103898b8c(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c3fa94();
  func_0x000107c61180();
  func_0x000107c52b50();
  func_0x000107c61170(puVar1);
  lVar2 = unaff_x20;
  func_0x000107c4aba4();
  func_0x000107c61180();
  func_0x000107c52e0c(0);
  func_0x000107c61170(lVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112fa5f80);
  uVar4 = param_1;
  func_0x000107c3fdd0(0x3fe8000000000000,param_1);
  func_0x000107c61180();
  func_0x000107c59c78(uVar3);
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112fa5f88);
  func_0x000107c3fdd0(0x3fe8000000000000,param_1);
  func_0x000107c61180();
  func_0x000107c59e10(uVar4);
  func_0x000107c61170(param_1);
  lVar2 = *(long *)(unaff_x20 + _DAT_112fa5fd8);
  if (lVar2 == 0) {
    if (*(long *)(unaff_x20 + _DAT_112fa5fe8) != 0) {
      func_0x000107c550d8();
    }
    lVar2 = *(long *)(unaff_x20 + _DAT_112fa5fe0);
    if ((lVar2 == 0) && (lVar2 = *(long *)(unaff_x20 + _DAT_112fa5ff0), lVar2 == 0)) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar2,PTR_s_setHidden__1126479f8,1);
  return;
}



/* Entry: 103898c74; end: 103898f3b;  */

/* WARNING: Possible PIC construction at 0x000103898d60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103898d84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103898e78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103898e98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103898ebc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103898ee0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103898ef0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103898f1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103898e10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103898e2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103898e40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103898e30) */
/* WARNING: Removing unreachable block (ram,0x000103898e14) */
/* WARNING: Removing unreachable block (ram,0x000103898f20) */
/* WARNING: Removing unreachable block (ram,0x000103898ee4) */
/* WARNING: Removing unreachable block (ram,0x000103898ec0) */
/* WARNING: Removing unreachable block (ram,0x000103898e9c) */
/* WARNING: Removing unreachable block (ram,0x000103898e7c) */
/* WARNING: Removing unreachable block (ram,0x000103898d88) */
/* WARNING: Removing unreachable block (ram,0x000103898ef4) */
/* WARNING: Removing unreachable block (ram,0x000103898d8c) */
/* WARNING: Removing unreachable block (ram,0x000103898db4) */
/* WARNING: Removing unreachable block (ram,0x000103898d94) */
/* WARNING: Removing unreachable block (ram,0x000103898d64) */
/* WARNING: Removing unreachable block (ram,0x000103898e44) */
/* WARNING: Removing unreachable block (ram,0x000103898e58) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103898c74(byte param_1,ulong param_2)

{
  ulong *puVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  long unaff_x20;
  undefined8 uVar7;
  
  lVar4 = _DAT_112fa5fd8;
  uVar2 = (uint)param_1;
  if (*(long *)(unaff_x20 + _DAT_112fa5fd8) != 0) {
    bVar3 = *(byte *)(unaff_x20 + _DAT_112fa5ff8);
    if (bVar3 != 3 && uVar2 == bVar3) {
      uVar6 = *(ulong *)((byte *)(unaff_x20 + _DAT_112fa5ff8) + 8);
      if (param_2 == 0) {
        if (uVar6 == 0) {
          return;
        }
      }
      else if (uVar6 != 0 && param_2 == uVar6) {
        return;
      }
    }
    FUN_10389919c();
    if (*(long *)(unaff_x20 + lVar4) != 0) {
      return;
    }
  }
  puVar1 = (ulong *)(unaff_x20 + _DAT_112fa5ff8);
  *puVar1 = (ulong)uVar2;
  puVar1[1] = param_2;
  puVar5 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c5a0f8();
  if (param_1 != 0) {
    if (uVar2 == 1) {
      FUN_103899b5c();
    }
    else {
      FUN_103899e08(puVar5,param_2);
    }
  }
  uVar7 = *(undefined8 *)(unaff_x20 + lVar4);
  *(undefined **)(unaff_x20 + lVar4) = puVar5;
  func_0x000107c61174(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return;
}



/* Entry: 103898f3c; end: 103898faf;  */

/* WARNING: Possible PIC construction at 0x000103898f58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103898f88: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103898f3c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112fa5fd8);
  if (lVar1 == 0) {
    if (*(long *)(unaff_x20 + _DAT_112fa5fe8) != 0) {
      func_0x000107c550d8(*(long *)(unaff_x20 + _DAT_112fa5fe8),param_2,1);
    }
    lVar1 = *(long *)(unaff_x20 + _DAT_112fa5fe0);
    if ((lVar1 == 0) && (lVar1 = *(long *)(unaff_x20 + _DAT_112fa5ff0), lVar1 == 0)) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_setHidden__1126479f8,1);
  return;
}



/* Entry: 103898fb0; end: 103899127;  */

/* WARNING: Possible PIC construction at 0x0001038990c4: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103898fb0(ulong param_1,ulong param_2,byte param_3)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112fa5f90);
  if (param_2 == 0) {
    func_0x000107c59c6c(uVar6,0,0);
    bVar3 = false;
  }
  else {
    uVar4 = param_1;
    func_0x000107c5fadc();
    func_0x000107c59c6c(uVar6);
    func_0x000107c61170(uVar4);
    uVar4 = param_1 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar4 = param_2 >> 0x38 & 0xf;
    }
    bVar3 = uVar4 != 0;
  }
  lVar1 = _DAT_112fa5fb8;
  *(bool *)(unaff_x20 + _DAT_112fa5fb8) = bVar3;
  lVar2 = _DAT_112fa5fc0;
  *(byte *)(unaff_x20 + _DAT_112fa5fc0) = param_3 & 1;
  lVar5 = *(long *)(unaff_x20 + _DAT_112fa6000 + 8);
  if (lVar5 != 0) {
    func_0x000107c61174();
    func_0x000107c550d8(uVar6);
    func_0x000107c550d8(*(undefined8 *)(unaff_x20 + _DAT_112fa5f98));
    func_0x000107c61170(lVar5);
  }
  lVar5 = *(long *)(unaff_x20 + _DAT_112fa5fc8);
  if (lVar5 == 0) {
    lVar5 = *(long *)(unaff_x20 + _DAT_112fa5fd0);
    if (lVar5 == 0) {
      return;
    }
    uVar6 = 0x4032000000000000;
    if (((*(byte *)(unaff_x20 + lVar2) & 1) == 0) &&
       (uVar6 = 0x4032000000000000, *(char *)(unaff_x20 + lVar1) == '\0')) {
      uVar6 = 0x4028000000000000;
    }
  }
  else {
    uVar6 = 0x4010000000000000;
    if (*(char *)(unaff_x20 + lVar1) == '\0') {
      uVar6 = 0x4020000000000000;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010c181150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar6,lVar5,PTR_s_setConstant__11263de70);
  return;
}



/* Entry: 103899128; end: 10389919b;  */

/* WARNING: Possible PIC construction at 0x000103899144: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103899174: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103899128(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112fa5fd8);
  if (lVar1 == 0) {
    if (*(long *)(unaff_x20 + _DAT_112fa5fe8) != 0) {
      func_0x000107c550d8(*(long *)(unaff_x20 + _DAT_112fa5fe8),param_2,0);
    }
    lVar1 = *(long *)(unaff_x20 + _DAT_112fa5fe0);
    if ((lVar1 == 0) && (lVar1 = *(long *)(unaff_x20 + _DAT_112fa5ff0), lVar1 == 0)) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_setHidden__1126479f8,0);
  return;
}



/* Entry: 10389919c; end: 10389922f;  */

/* WARNING: Possible PIC construction at 0x0001038991c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038991e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103899204: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001038991e8) */
/* WARNING: Removing unreachable block (ram,0x0001038991f8) */
/* WARNING: Removing unreachable block (ram,0x000103899200) */
/* WARNING: Removing unreachable block (ram,0x0001038991c8) */
/* WARNING: Removing unreachable block (ram,0x0001038991d8) */
/* WARNING: Removing unreachable block (ram,0x0001038991e0) */
/* WARNING: Removing unreachable block (ram,0x000103899208) */
/* WARNING: Removing unreachable block (ram,0x000103899218) */
/* WARNING: Removing unreachable block (ram,0x000103899220) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10389919c(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  lVar1 = _DAT_112fa5fd8;
  uVar2 = 0;
  if (*(long *)(unaff_x20 + _DAT_112fa5fd8) != 0) {
    func_0x000107c4ff30();
    uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  }
  *(undefined8 *)(unaff_x20 + lVar1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 103899230; end: 10389928f; -[_TtC11SCARBarImpl28ARBarPickerPillContainerView initWithFrame:] */

void FUN_103899230(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCARBarImpl.ARBarPickerPillContainerView",0x28,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10389925c);
  (*pcVar1)();
}



/* Entry: 103899290; end: 10389938b; -[_TtC11SCARBarImpl28ARBarPickerPillContainerView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001038992ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038992cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038992ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010389931c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010389933c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010389935c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103899340) */
/* WARNING: Removing unreachable block (ram,0x000103899320) */
/* WARNING: Removing unreachable block (ram,0x0001038992f0) */
/* WARNING: Removing unreachable block (ram,0x0001038992d0) */
/* WARNING: Removing unreachable block (ram,0x0001038992b0) */
/* WARNING: Removing unreachable block (ram,0x000103899360) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103899290(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fa5f80));
  return;
}



/* Entry: 10389938c; end: 1038993ab;  */

void FUN_10389938c(void)

{
  func_0x000107c61168(&PTR_PTR_1128f7da8);
  return;
}



/* Entry: 1038993ac; end: 1038993d7;  */

long FUN_1038993ac(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1038993d8; end: 1038993df;  */

void FUN_1038993d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1038993e0; end: 10389941b;  */

undefined2 * FUN_1038993e0(undefined2 *param_1,undefined2 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 8) = uVar1;
  func_0x000107c61174();
  return param_1;
}



/* Entry: 10389941c; end: 10389947f;  */

undefined1 * FUN_10389941c(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  return param_1;
}



/* Entry: 103899480; end: 1038994cb;  */

undefined1 * FUN_103899480(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  return param_1;
}



/* Entry: 1038994cc; end: 10389960b;  */

int FUN_1038994cc(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10389960c; end: 103899737;  */

void FUN_10389960c(void)

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



/* Entry: 103899738; end: 103899837;  */

undefined * FUN_103899738(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103899838);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112fa5240;
    func_0x0001000285a8(0x112fa5240,&UNK_10dc19070);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c610b4(puVar1,puVar4,uVar6 << 3);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 103899838; end: 103899973;  */

ulong FUN_103899838(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   code *param_6)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103899974);
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
  func_0x0001038996b8(uVar2,uVar4,param_5);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103899970);
      (*pcVar1)();
    }
    (*param_6)(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 103899974; end: 103899b2b;  */

long FUN_103899974(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103899a68);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103899a6c);
        (*pcVar3)();
      }
      uVar4 = 0;
      func_0x000100ef8bfc(0);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      func_0x000100ef8bfc(0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103899a64);
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



/* Entry: 103899b2c; end: 103899b5b;  */

undefined8 FUN_103899b2c(char param_1,long param_2,char param_3,long param_4)

{
  if (param_1 != param_3) {
    return 0;
  }
  if (param_2 == 0) {
    if (param_4 != 0) {
      return 0;
    }
  }
  else {
    if (param_4 == 0) {
      return 0;
    }
    if (param_2 != param_4) {
      return 0;
    }
  }
  return 1;
}



/* Entry: 103899b5c; end: 103899e07;  */

void FUN_103899b5c(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar2 = param_1;
  func_0x0001028b6d3c();
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 0xf;
  *(undefined8 *)(lVar2 + 0x10) = 7;
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  puVar4 = puVar3;
  func_0x000107c3fddc();
  func_0x000107c61180();
  if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103899df0);
    (*pcVar1)();
  }
  puVar5 = puVar4;
  func_0x000107c3ab24();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  *(undefined8 *)(lVar2 + 0x20) = puVar5;
  puVar4 = puVar3;
  func_0x000107c3fddc();
  func_0x000107c61180();
  if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103899df4);
    (*pcVar1)();
  }
  puVar5 = puVar4;
  func_0x000107c3ab24();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  *(undefined **)(lVar2 + 0x28) = puVar5;
  puVar4 = puVar3;
  func_0x000107c3fddc();
  func_0x000107c61180();
  if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103899df8);
    (*pcVar1)();
  }
  puVar5 = puVar4;
  func_0x000107c3ab24();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  *(undefined **)(lVar2 + 0x30) = puVar5;
  puVar4 = puVar3;
  func_0x000107c3fddc();
  func_0x000107c61180();
  if (puVar4 != (undefined *)0x0) {
    puVar5 = puVar4;
    func_0x000107c3ab24();
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    *(undefined **)(lVar2 + 0x38) = puVar5;
    puVar4 = puVar3;
    func_0x000107c3fddc();
    func_0x000107c61180();
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103899e00);
      (*pcVar1)();
    }
    puVar5 = puVar4;
    func_0x000107c3ab24();
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    *(undefined **)(lVar2 + 0x40) = puVar5;
    puVar4 = puVar3;
    func_0x000107c3fddc();
    func_0x000107c61180();
    if (puVar4 != (undefined *)0x0) {
      puVar5 = puVar4;
      func_0x000107c3ab24();
      func_0x000107c61180();
      func_0x000107c61170(puVar4);
      *(undefined **)(lVar2 + 0x48) = puVar5;
      func_0x000107c3fddc();
      func_0x000107c61180();
      if (puVar3 != (undefined *)0x0) {
        puVar4 = puVar3;
        func_0x000107c3ab24();
        func_0x000107c61180();
        func_0x000107c61170(puVar3);
        *(undefined **)(lVar2 + 0x50) = puVar4;
        lVar6 = lVar2;
        FUN_1033d92b8(lVar2);
        lVar7 = lVar6;
        func_0x000107c5fc48();
        func_0x000107c6142c(lVar6);
        func_0x000107c535a0(param_1);
        func_0x000107c61170(lVar7);
        func_0x000107c56084(param_1);
        func_0x000107c597c4(0x3fe0000000000000,0x3fe0000000000000,param_1);
        func_0x000107c54598(0x3ff0000000000000,0x3fe0000000000000,param_1);
        func_0x000107c61588(lVar2);
        uVar9 = *(undefined8 *)(lVar2 + 0x10);
        uVar8 = 0;
        func_0x000100ef8bfc(0);
        func_0x000107c61408((undefined8 *)(lVar2 + 0x20),uVar9,uVar8);
        return;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103899e08);
      (*pcVar1)();
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103899e04);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103899dfc);
  (*pcVar1)();
}



/* Entry: 103899e08; end: 10389a593;  */

/* WARNING: Possible PIC construction at 0x000103899e60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103899eb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103899efc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103899fa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103899fc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010389a114: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010389a1a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010389a3a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010389a414: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010389a450: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103899f38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010389a418) */
/* WARNING: Removing unreachable block (ram,0x00010389a3ac) */
/* WARNING: Removing unreachable block (ram,0x00010389a1a8) */
/* WARNING: Removing unreachable block (ram,0x00010389a1d8) */
/* WARNING: Removing unreachable block (ram,0x00010389a1bc) */
/* WARNING: Removing unreachable block (ram,0x00010389a1d4) */
/* WARNING: Removing unreachable block (ram,0x00010389a1f8) */
/* WARNING: Removing unreachable block (ram,0x00010389a118) */
/* WARNING: Removing unreachable block (ram,0x00010389a23c) */
/* WARNING: Removing unreachable block (ram,0x00010389a244) */
/* WARNING: Removing unreachable block (ram,0x00010389a120) */
/* WARNING: Removing unreachable block (ram,0x00010389a254) */
/* WARNING: Removing unreachable block (ram,0x00010389a264) */
/* WARNING: Removing unreachable block (ram,0x00010389a3b0) */
/* WARNING: Removing unreachable block (ram,0x00010389a3b4) */
/* WARNING: Removing unreachable block (ram,0x00010389a270) */
/* WARNING: Removing unreachable block (ram,0x00010389a3c0) */
/* WARNING: Removing unreachable block (ram,0x00010389a3c8) */
/* WARNING: Removing unreachable block (ram,0x00010389a278) */
/* WARNING: Removing unreachable block (ram,0x00010389a4e8) */
/* WARNING: Removing unreachable block (ram,0x00010389a280) */
/* WARNING: Removing unreachable block (ram,0x00010389a560) */
/* WARNING: Removing unreachable block (ram,0x00010389a28c) */
/* WARNING: Removing unreachable block (ram,0x00010389a294) */
/* WARNING: Removing unreachable block (ram,0x00010389a2b8) */
/* WARNING: Removing unreachable block (ram,0x00010389a2bc) */
/* WARNING: Removing unreachable block (ram,0x00010389a564) */
/* WARNING: Removing unreachable block (ram,0x00010389a568) */
/* WARNING: Removing unreachable block (ram,0x00010389a2c4) */
/* WARNING: Removing unreachable block (ram,0x00010389a2c8) */
/* WARNING: Removing unreachable block (ram,0x00010389a2f0) */
/* WARNING: Removing unreachable block (ram,0x00010389a4f8) */
/* WARNING: Removing unreachable block (ram,0x00010389a304) */
/* WARNING: Removing unreachable block (ram,0x00010389a344) */
/* WARNING: Removing unreachable block (ram,0x00010389a348) */
/* WARNING: Removing unreachable block (ram,0x00010389a34c) */
/* WARNING: Removing unreachable block (ram,0x00010389a574) */
/* WARNING: Removing unreachable block (ram,0x00010389a57c) */
/* WARNING: Removing unreachable block (ram,0x00010389a354) */
/* WARNING: Removing unreachable block (ram,0x00010389a35c) */
/* WARNING: Removing unreachable block (ram,0x00010389a384) */
/* WARNING: Removing unreachable block (ram,0x00010389a52c) */
/* WARNING: Removing unreachable block (ram,0x00010389a398) */
/* WARNING: Removing unreachable block (ram,0x00010389a12c) */
/* WARNING: Removing unreachable block (ram,0x00010389a4e4) */
/* WARNING: Removing unreachable block (ram,0x00010389a150) */
/* WARNING: Removing unreachable block (ram,0x00010389a160) */
/* WARNING: Removing unreachable block (ram,0x00010389a174) */
/* WARNING: Removing unreachable block (ram,0x00010389a164) */
/* WARNING: Removing unreachable block (ram,0x00010389a180) */
/* WARNING: Removing unreachable block (ram,0x000103899fc8) */
/* WARNING: Removing unreachable block (ram,0x000103899f3c) */
/* WARNING: Removing unreachable block (ram,0x000103899fd4) */
/* WARNING: Removing unreachable block (ram,0x000103899fe8) */
/* WARNING: Removing unreachable block (ram,0x000103899ff8) */
/* WARNING: Removing unreachable block (ram,0x000103899ffc) */
/* WARNING: Removing unreachable block (ram,0x00010389a000) */
/* WARNING: Removing unreachable block (ram,0x00010389a09c) */
/* WARNING: Removing unreachable block (ram,0x00010389a0a4) */
/* WARNING: Removing unreachable block (ram,0x00010389a008) */
/* WARNING: Removing unreachable block (ram,0x00010389a010) */
/* WARNING: Removing unreachable block (ram,0x00010389a038) */
/* WARNING: Removing unreachable block (ram,0x00010389a068) */
/* WARNING: Removing unreachable block (ram,0x00010389a050) */
/* WARNING: Removing unreachable block (ram,0x00010389a064) */
/* WARNING: Removing unreachable block (ram,0x000103899fa8) */
/* WARNING: Removing unreachable block (ram,0x000103899f34) */
/* WARNING: Removing unreachable block (ram,0x000103899fac) */
/* WARNING: Removing unreachable block (ram,0x000103899f00) */
/* WARNING: Removing unreachable block (ram,0x00010389a228) */
/* WARNING: Removing unreachable block (ram,0x00010389a22c) */
/* WARNING: Removing unreachable block (ram,0x000103899f0c) */
/* WARNING: Removing unreachable block (ram,0x000103899f10) */
/* WARNING: Removing unreachable block (ram,0x00010389a0d4) */
/* WARNING: Removing unreachable block (ram,0x00010389a0d8) */
/* WARNING: Removing unreachable block (ram,0x00010389a590) */
/* WARNING: Removing unreachable block (ram,0x00010389a100) */
/* WARNING: Removing unreachable block (ram,0x000103899f1c) */
/* WARNING: Removing unreachable block (ram,0x000103899f2c) */
/* WARNING: Removing unreachable block (ram,0x000103899f48) */
/* WARNING: Removing unreachable block (ram,0x000103899fd8) */
/* WARNING: Removing unreachable block (ram,0x000103899f4c) */
/* WARNING: Removing unreachable block (ram,0x00010389a20c) */
/* WARNING: Removing unreachable block (ram,0x000103899f58) */
/* WARNING: Removing unreachable block (ram,0x000103899f64) */
/* WARNING: Removing unreachable block (ram,0x00010389a208) */
/* WARNING: Removing unreachable block (ram,0x000103899f70) */
/* WARNING: Removing unreachable block (ram,0x000103899eb4) */
/* WARNING: Removing unreachable block (ram,0x00010389a210) */
/* WARNING: Removing unreachable block (ram,0x00010389a218) */
/* WARNING: Removing unreachable block (ram,0x000103899ebc) */
/* WARNING: Removing unreachable block (ram,0x000103899ec4) */
/* WARNING: Removing unreachable block (ram,0x000103899ed0) */
/* WARNING: Removing unreachable block (ram,0x00010389a58c) */
/* WARNING: Removing unreachable block (ram,0x000103899ee4) */
/* WARNING: Removing unreachable block (ram,0x000103899e64) */
/* WARNING: Removing unreachable block (ram,0x000103899e68) */
/* WARNING: Removing unreachable block (ram,0x00010389a588) */
/* WARNING: Removing unreachable block (ram,0x000103899e7c) */
/* WARNING: Removing unreachable block (ram,0x00010389a454) */
/* WARNING: Removing unreachable block (ram,0x00010389a4bc) */

void FUN_103899e08(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x000107c3d0f0();
    func_0x000107c61180();
    if (param_2 != 0) {
      func_0x000107c4b648();
      func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_2);
      return;
    }
  }
  return;
}



/* Entry: 10389a594; end: 10389a80b;  */

undefined * FUN_10389a594(char param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar1 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
  func_0x000107c610f8(PTR__OBJC_CLASS___CAGradientLayer_1126b2788);
  func_0x000107c453e4();
  if (param_1 != '\0') {
    uVar8 = 0x3fe6666666666666;
    if (param_1 != '\x01') {
      uVar8 = 0x3fe3333333333333;
    }
    lVar2 = 0x112d38dc0;
    func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
    func_0x000107c613fc();
    *(undefined8 *)(lVar2 + 0x18) = 8;
    *(undefined8 *)(lVar2 + 0x10) = 4;
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168();
    puVar4 = puVar3;
    func_0x000107c5af88();
    func_0x000107c61180();
    puVar5 = puVar4;
    func_0x000107c3fdd0(0x3fe6666666666666);
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    puVar4 = puVar5;
    func_0x000107c3ab24();
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    uVar6 = 0;
    func_0x000100ef8bfc();
    *(undefined8 *)(lVar2 + 0x38) = uVar6;
    *(undefined **)(lVar2 + 0x20) = puVar4;
    puVar4 = puVar3;
    func_0x000107c5af88();
    func_0x000107c61180();
    puVar5 = puVar4;
    func_0x000107c3fdd0(0);
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    puVar4 = puVar5;
    func_0x000107c3ab24();
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    *(undefined8 *)(lVar2 + 0x58) = uVar6;
    *(undefined **)(lVar2 + 0x40) = puVar4;
    puVar4 = puVar3;
    func_0x000107c5af88();
    func_0x000107c61180();
    puVar5 = puVar4;
    func_0x000107c3fdd0(0);
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    puVar4 = puVar5;
    func_0x000107c3ab24();
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    *(undefined8 *)(lVar2 + 0x78) = uVar6;
    *(undefined **)(lVar2 + 0x60) = puVar4;
    func_0x000107c5af88();
    func_0x000107c61180();
    puVar4 = puVar3;
    func_0x000107c3fdd0(uVar8);
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    puVar3 = puVar4;
    func_0x000107c3ab24();
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    *(undefined8 *)(lVar2 + 0x98) = uVar6;
    *(undefined **)(lVar2 + 0x80) = puVar3;
    lVar7 = lVar2;
    func_0x000107c5fc48(lVar2,PTR___sypN_11034f1a8 + 8);
    func_0x000107c61574(lVar2);
    func_0x000107c535a0(puVar1);
    func_0x000107c61170(lVar7);
  }
  func_0x000107c597c4(0,0x3fe0000000000000,puVar1);
  func_0x000107c54598(0x3ff0000000000000,0x3fe0000000000000,puVar1);
  return puVar1;
}



/* Entry: 10389a80c; end: 10389aa53;  */

undefined * FUN_10389a80c(void)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar1 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
  func_0x000107c610f8(PTR__OBJC_CLASS___CAGradientLayer_1126b2788);
  func_0x000107c453e4();
  lVar2 = 0x112d38dc0;
  func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 8;
  *(undefined8 *)(lVar2 + 0x10) = 4;
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  puVar4 = puVar3;
  func_0x000107c5af88();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c3fdd0(0x3fe0000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  puVar4 = puVar5;
  func_0x000107c3ab24();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  uVar6 = 0;
  func_0x000100ef8bfc();
  *(undefined8 *)(lVar2 + 0x38) = uVar6;
  *(undefined **)(lVar2 + 0x20) = puVar4;
  puVar4 = puVar3;
  func_0x000107c5af88();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c3fdd0(0x3ff0000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  puVar4 = puVar5;
  func_0x000107c3ab24();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  *(undefined8 *)(lVar2 + 0x58) = uVar6;
  *(undefined **)(lVar2 + 0x40) = puVar4;
  puVar4 = puVar3;
  func_0x000107c5af88();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c3fdd0(0x3ff0000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  puVar4 = puVar5;
  func_0x000107c3ab24();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  *(undefined8 *)(lVar2 + 0x78) = uVar6;
  *(undefined **)(lVar2 + 0x60) = puVar4;
  func_0x000107c5af88();
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c3fdd0(0x3fe0000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  puVar3 = puVar4;
  func_0x000107c3ab24();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  *(undefined8 *)(lVar2 + 0x98) = uVar6;
  *(undefined **)(lVar2 + 0x80) = puVar3;
  lVar7 = lVar2;
  func_0x000107c5fc48(lVar2,PTR___sypN_11034f1a8 + 8);
  func_0x000107c61574(lVar2);
  func_0x000107c535a0(puVar1);
  func_0x000107c61170(lVar7);
  func_0x000107c597c4(0x3fe0000000000000,0,puVar1);
  func_0x000107c54598(0x3fe0000000000000,0x3ff0000000000000,puVar1);
  func_0x000107c562fc(puVar1);
  return puVar1;
}



/* Entry: 10389aa54; end: 10389ab5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10389aa54(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112fa5fa0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fa5fa8) = 0;
  func_0x000107c61614(unaff_x20 + _DAT_112fa5fb0,0);
  *(undefined1 *)(unaff_x20 + _DAT_112fa5fb8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112fa5fc0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fa5fc8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fa5fd0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fa5fd8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fa5fe0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fa5fe8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fa5ff0) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fa5ff8);
  *puVar1 = 3;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fa6000);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd00000000000001d,0x800000010ef19c10,
                      "SCARBarImpl/ARBarPickerPillContainerView.swift",0x2e,2,0x81,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10389ab60);
  (*pcVar2)();
}



/* Entry: 10389ab60; end: 10389ab9f;  */

void FUN_10389ab60(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10389aba0; end: 10389ad07;  */

int FUN_10389aba0(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10389ac1c;
        goto LAB_10389ac00;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10389ac00:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_10389ac1c:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10389ad08; end: 10389ad47;  */

void FUN_10389ad08(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fa6030 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc190c4;
  func_0x000107c61520(&UNK_10dc190c4,&UNK_1106a1e70);
  puRam0000000112fa6030 = puVar1;
  return;
}



/* Entry: 10389ad48; end: 10389ad53;  */

undefined8 FUN_10389ad48(void)

{
  return 0x4044000000000000;
}



/* Entry: 10389ad54; end: 10389adbf; -[_TtC11SCARBarImpl23ARBarPickerTallTextCell initWithFrame:] */

void FUN_10389ad54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = param_5;
  func_0x000107c614f0();
  uStack_50 = param_5;
  uStack_48 = uVar1;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&uStack_50,PTR_s_initWithFrame__1125e2948);
  return;
}


