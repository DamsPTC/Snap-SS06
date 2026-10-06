/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1011a051c; end: 1011a0733;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a051c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar5 = &puStack_90;
  ppuVar7 = &puStack_90;
  if (*(char *)(unaff_x20 + _DAT_112d63b08) == '\x01') {
    FUN_10119ee94();
    if (param_1 != 0) {
      func_0x000107c42018();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  else {
    *(undefined1 *)(unaff_x20 + _DAT_112d63b00) = 0;
    FUN_100c82230(*(undefined8 *)(unaff_x20 + _DAT_112d63af8));
    puVar2 = &UNK_11038ccf0;
    func_0x000107c613fc(&UNK_11038ccf0,0x18,7);
    *(long *)(puVar2 + 0x10) = unaff_x20;
    puVar3 = &UNK_11038cd18;
    func_0x000107c613fc(&UNK_11038cd18,0x18,7);
    *(long *)(puVar3 + 0x10) = unaff_x20;
    puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x1011a1c4c;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_11038cd30;
    puStack_68 = puVar2;
    func_0x000107c60bc4(&puStack_90);
    puVar6 = puStack_68;
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c6157c(puVar2);
    func_0x000107c61574(puVar6);
    puVar6 = &UNK_11038cd68;
    func_0x000107c613fc(&UNK_11038cd68,0x20,7);
    *(undefined8 *)(puVar6 + 0x10) = 0x1011a1c50;
    *(undefined **)(puVar6 + 0x18) = puVar3;
    uStack_70 = 0x1011a1c88;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_100288f10;
    puStack_78 = &UNK_11038cd80;
    puStack_68 = puVar6;
    func_0x000107c60bc4(&puStack_90);
    puVar6 = puStack_68;
    func_0x000107c6157c(puVar3);
    func_0x000107c61574(puVar6);
    func_0x000107c3dcd8(0x3fd3333333333333,0,0x3feb333333333333,0,puVar4);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61574(puVar2);
    func_0x000107c61574(puVar3);
  }
  return;
}



/* Entry: 1011a0734; end: 1011a0a07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a0734(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined1 auStack_80 [16];
  undefined *puStack_70;
  undefined *puStack_68;
  
  if (param_1 >> 0x3e == 0) {
    uVar9 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar9 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar9 = param_1;
    }
    func_0x000107c60480();
  }
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar9 != 0) {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_1011a1374(0,uVar9 & ((long)uVar9 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1011a0a04);
      (*pcVar1)();
    }
    uVar10 = 0;
    do {
      puVar8 = puStack_68;
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(long *)((param_1 & 0xffffffffffffff8) + 0x10) <= (long)uVar10) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1011a09e0);
          (*pcVar1)();
        }
        uVar2 = *(ulong *)(param_1 + uVar10 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar2 = uVar10;
        FUN_1011a14e4();
      }
      lVar3 = *(long *)(uVar2 + _DAT_112feb9f8);
      func_0x0001070b0b9c();
      func_0x000107c61180();
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1011a0a08);
        (*pcVar1)();
      }
      lVar12 = ((undefined8 *)(uVar2 + _DAT_112feba08))[1];
      if (lVar12 == 0) {
        uVar11 = 0;
        lVar7 = -0x2000000000000000;
      }
      else {
        uVar11 = *(undefined8 *)(uVar2 + _DAT_112feba08);
        lVar7 = lVar12;
      }
      puVar4 = PTR_PTR_1126a64e0;
      func_0x000107c610f8();
      func_0x000107c61434(lVar12);
      func_0x000107c5fadc(uVar11,lVar7);
      func_0x000107c6142c(lVar7);
      func_0x000107c477c4();
      func_0x000107c61170(lVar3);
      func_0x000107c61170(uVar11);
      puStack_70 = puVar4;
      func_0x000103b08884(FUN_1011a1be4,auStack_80,FUN_1011a0a50,0);
      func_0x000107c61170(uVar2);
      uVar2 = *(ulong *)(puVar8 + 0x10);
      puStack_68 = puVar8;
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar2) {
        FUN_1011a1374(1 < *(ulong *)(puVar8 + 0x18),uVar2 + 1,1);
      }
      uVar10 = uVar10 + 1;
      *(ulong *)(puStack_68 + 0x10) = uVar2 + 1;
      *(undefined **)(puStack_68 + uVar2 * 8 + 0x20) = puVar4;
      puVar8 = puStack_68;
    } while (uVar9 != uVar10);
  }
  puVar4 = &DAT_112d63ad8;
  FUN_10119f19c(&DAT_112d63ad8,0x10119efc8,0x1011a1c98,0x1011a1c9c);
  if (puVar4 == (undefined *)0x0) {
    func_0x000107c6142c(puVar8);
  }
  else {
    puVar5 = PTR_PTR_1126a64d8;
    func_0x000107c610f8(PTR_PTR_1126a64d8);
    uVar11 = 0;
    func_0x0001011a1b48(0,0x112d63b38,&PTR_PTR_1126a64e0);
    puVar6 = puVar8;
    func_0x000107c5fc48(puVar8,uVar11);
    func_0x000107c6142c(puVar8);
    func_0x000107c48268(puVar5);
    func_0x000107c61170(puVar6);
    func_0x000107c5a588(puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar5);
  }
  return;
}



/* Entry: 1011a0a08; end: 1011a0a4f;  */

void FUN_1011a0a08(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  if (param_4 == 0) {
    param_3 = 0;
  }
  else {
    func_0x000107c5fadc(param_3,param_4);
  }
  func_0x000107c52ae0(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1011a0a50; end: 1011a0a53;  */

void FUN_1011a0a50(void)

{
  return;
}



/* Entry: 1011a0a54; end: 1011a0adf;  */

/* WARNING: Possible PIC construction at 0x0001011a0aac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011a0ab0) */

void FUN_1011a0a54(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  
  func_0x000107c5de64();
  func_0x000107c61180();
  if (param_1 != 0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5af88();
    func_0x000107c61180();
    func_0x000107c52b50(param_1,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011a0ae0);
  (*pcVar1)();
}



/* Entry: 1011a0ae0; end: 1011a0b3b;  */

/* WARNING: Possible PIC construction at 0x0001011a0b28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011a0b2c) */

void FUN_1011a0ae0(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c4aba4(param_2);
  func_0x000107c61180();
  func_0x000107c3ab28(param_1);
  func_0x000107c61180();
  func_0x000107c500d4(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1011a0b3c; end: 1011a0bdb; -[_TtC30ReactionsDetailScopeEntryPoint29ReactionsDetailViewController dismissTray] */

void FUN_1011a0b3c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1011a051c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1011a0bdc; end: 1011a0c67;  */

/* WARNING: Possible PIC construction at 0x0001011a0c34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011a0c38) */

void FUN_1011a0bdc(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  
  func_0x000107c5de64();
  func_0x000107c61180();
  if (param_1 != 0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5af88();
    func_0x000107c61180();
    func_0x000107c52b50(param_1,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011a0c68);
  (*pcVar1)();
}



/* Entry: 1011a0c68; end: 1011a0d8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a0c68(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  ppuVar4 = &puStack_50;
  lVar5 = *(long *)(param_1 + _DAT_112d63ab0);
  lVar1 = lVar5;
  func_0x000107c5194c();
  func_0x000107c61180();
  lVar2 = 0;
  if (lVar1 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar5);
    func_0x000107c61180();
    func_0x000107c615e8();
    lVar2 = lVar5;
  }
  FUN_10119f120();
  func_0x000107c50524();
  func_0x000107c61170(lVar2);
  uVar6 = *(undefined8 *)(param_1 + _DAT_112d63a98);
  func_0x000107c5742c(uVar6);
  func_0x000107c50580(uVar6);
  func_0x000107c53830(uVar6);
  puVar3 = &UNK_11038cca0;
  func_0x000107c613fc(&UNK_11038cca0,0x18,7);
  func_0x000107c61614(puVar3 + 0x10,param_1);
  uStack_30 = 0x1011a12f4;
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0x42000000;
  puStack_40 = &UNK_1000f6b44;
  puStack_38 = &UNK_11038ccb8;
  puStack_28 = puVar3;
  func_0x000107c60bc4(&puStack_50);
  func_0x000107c61574(puStack_28);
  func_0x000107c420a8(param_1);
  func_0x000107c60bd0(ppuVar4);
  return;
}



/* Entry: 1011a0d90; end: 1011a0def; -[_TtC30ReactionsDetailScopeEntryPoint29ReactionsDetailViewController initWithNibName:bundle:] */

void FUN_1011a0d90(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ReactionsDetailScopeEntryPoint.ReactionsDetailViewController",0x3c,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011a0dbc);
  (*pcVar1)();
}



/* Entry: 1011a0df0; end: 1011a0ee7; -[_TtC30ReactionsDetailScopeEntryPoint29ReactionsDetailViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001011a0e0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011a0e10) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a0df0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d63a90));
  return;
}



/* Entry: 1011a0ee8; end: 1011a0f07;  */

void FUN_1011a0ee8(void)

{
  func_0x000107c61168(&PTR_PTR_1127b4b50);
  return;
}



/* Entry: 1011a0f08; end: 1011a0f5b; -[_TtC30ReactionsDetailScopeEntryPoint29ReactionsDetailViewController tray:positionDidChange:] */

/* WARNING: Possible PIC construction at 0x0001011a0f44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011a0f48) */

void FUN_1011a0f08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1011a1794(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1011a0f5c; end: 1011a0fc3; -[_TtC30ReactionsDetailScopeEntryPoint29ReactionsDetailViewController tray:heightForPosition:] */

undefined8
FUN_1011a0f5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_2);
  FUN_1011a19ac(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_2);
  return param_1;
}



/* Entry: 1011a0fc4; end: 1011a11db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a0fc4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar5 = &puStack_90;
  ppuVar7 = &puStack_90;
  if (*(char *)(param_1 + _DAT_112d63b08) == '\x01') {
    FUN_10119ee94();
    if (param_1 != 0) {
      func_0x000107c42018();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  else {
    *(undefined1 *)(param_1 + _DAT_112d63b00) = 0;
    FUN_100c82230();
    puVar2 = &UNK_11038cbd8;
    func_0x000107c613fc(&UNK_11038cbd8,0x18,7);
    *(long *)(puVar2 + 0x10) = param_1;
    puVar3 = &UNK_11038cc00;
    func_0x000107c613fc(&UNK_11038cc00,0x18,7);
    *(long *)(puVar3 + 0x10) = param_1;
    puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x1011a12e0;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_11038cc18;
    puStack_68 = puVar2;
    func_0x000107c60bc4(&puStack_90);
    puVar6 = puStack_68;
    func_0x000107c61174(param_1);
    func_0x000107c61174();
    func_0x000107c6157c(puVar2);
    func_0x000107c61574(puVar6);
    puVar6 = &UNK_11038cc50;
    func_0x000107c613fc(&UNK_11038cc50,0x20,7);
    *(undefined8 *)(puVar6 + 0x10) = 0x1011a12e8;
    *(undefined **)(puVar6 + 0x18) = puVar3;
    uStack_70 = 0x1011a12f0;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_100288f10;
    puStack_78 = &UNK_11038cc68;
    puStack_68 = puVar6;
    func_0x000107c60bc4(&puStack_90);
    puVar6 = puStack_68;
    func_0x000107c6157c(puVar3);
    func_0x000107c61574(puVar6);
    func_0x000107c3dcd8(0x3fd3333333333333,0,0x3feb333333333333,0,puVar4);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61574(puVar2);
    func_0x000107c61574(puVar3);
  }
  return;
}



/* Entry: 1011a11dc; end: 1011a12bb; -[_TtC30ReactionsDetailScopeEntryPoint29ReactionsDetailViewController didReactToMessage] */

void FUN_1011a11dc(undefined8 param_1)

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
  func_0x000107c61174();
  pcVar1 = "didReactToMessage()";
  func_0x0001000c10c0("didReactToMessage()");
  func_0x000107c61180();
  puVar2 = &UNK_11038cb88;
  func_0x000107c613fc(&UNK_11038cb88,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  pcStack_40 = FUN_1011a12bc;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_11038cba0;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  puVar2 = puStack_38;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 1011a12bc; end: 1011a12fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a12bc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar8 = *(long *)(unaff_x20 + 0x10);
  ppuVar5 = &puStack_90;
  ppuVar7 = &puStack_90;
  if (*(char *)(lVar8 + _DAT_112d63b08) == '\x01') {
    FUN_10119ee94();
    if (lVar8 != 0) {
      func_0x000107c42018();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar8);
      return;
    }
  }
  else {
    *(undefined1 *)(lVar8 + _DAT_112d63b00) = 0;
    FUN_100c82230();
    puVar2 = &UNK_11038cbd8;
    func_0x000107c613fc(&UNK_11038cbd8,0x18,7);
    *(long *)(puVar2 + 0x10) = lVar8;
    puVar3 = &UNK_11038cc00;
    func_0x000107c613fc(&UNK_11038cc00,0x18,7);
    *(long *)(puVar3 + 0x10) = lVar8;
    puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x1011a12e0;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_11038cc18;
    puStack_68 = puVar2;
    func_0x000107c60bc4(&puStack_90);
    puVar6 = puStack_68;
    func_0x000107c61174(lVar8);
    func_0x000107c61174();
    func_0x000107c6157c(puVar2);
    func_0x000107c61574(puVar6);
    puVar6 = &UNK_11038cc50;
    func_0x000107c613fc(&UNK_11038cc50,0x20,7);
    *(undefined8 *)(puVar6 + 0x10) = 0x1011a12e8;
    *(undefined **)(puVar6 + 0x18) = puVar3;
    uStack_70 = 0x1011a12f0;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_100288f10;
    puStack_78 = &UNK_11038cc68;
    puStack_68 = puVar6;
    func_0x000107c60bc4(&puStack_90);
    puVar6 = puStack_68;
    func_0x000107c6157c(puVar3);
    func_0x000107c61574(puVar6);
    func_0x000107c3dcd8(0x3fd3333333333333,0,0x3feb333333333333,0,puVar4);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61574(puVar2);
    func_0x000107c61574(puVar3);
  }
  return;
}



/* Entry: 1011a12fc; end: 1011a1373;  */

void FUN_1011a12fc(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    func_0x0001011a1b48(0,param_1,param_2);
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



/* Entry: 1011a1374; end: 1011a138f;  */

void FUN_1011a1374(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1011a1390();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1011a1390; end: 1011a14e3;  */

undefined * FUN_1011a1390(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1011a14e4);
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
    puVar3 = (undefined *)0x112d63b38;
    FUN_1011a12fc(0x112d63b38,&PTR_PTR_1126a64e0,0x112d63b50,&UNK_10d9294f8);
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
    uVar5 = 0;
    func_0x0001011a1b48(0,0x112d63b38,&PTR_PTR_1126a64e0);
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



/* Entry: 1011a14e4; end: 1011a167f;  */

ulong FUN_1011a14e4(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1011a15b4);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1011a15b8);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000103b08624(0);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61480();
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
    uVar4 = 0;
    func_0x000103b08624(0);
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
  func_0x000107c5fb78(0xd000000000000017,0x800000010ef2a710);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1011a1680);
  (*pcVar2)();
}



/* Entry: 1011a1680; end: 1011a1793;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a1680(void)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  func_0x000107c61614(unaff_x20 + _DAT_112d63ac0,0);
  lVar1 = _DAT_112d63ac8;
  puVar3 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112d63ad0) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112d63ad8) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112d63ae0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d63ae8) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112d63af0) = 0;
  lVar1 = _DAT_112d63af8;
  uVar4 = 0;
  func_0x0001005f60b4();
  func_0x000107c613fc();
  func_0x0001005f60d4();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar4;
  *(undefined1 *)(unaff_x20 + _DAT_112d63b00) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112d63b08) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "ReactionsDetailScopeEntryPoint/ReactionsDetailViewController.swift",0x42,2,
                      0x8e,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1011a1794);
  (*pcVar2)();
}



/* Entry: 1011a1794; end: 1011a19ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a1794(uint param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar5 = &puStack_90;
  ppuVar7 = &puStack_90;
  if ((param_1 >> 1 & 1) != 0) {
    *(undefined1 *)(unaff_x20 + _DAT_112d63b00) = 0;
    FUN_100c82230(*(undefined8 *)(unaff_x20 + _DAT_112d63af8));
    puVar2 = &UNK_11038cdb8;
    func_0x000107c613fc(&UNK_11038cdb8,0x18,7);
    *(long *)(puVar2 + 0x10) = unaff_x20;
    puVar3 = &UNK_11038cde0;
    func_0x000107c613fc(&UNK_11038cde0,0x18,7);
    *(long *)(puVar3 + 0x10) = unaff_x20;
    puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x1011a1c5c;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_11038cdf8;
    puStack_68 = puVar2;
    func_0x000107c60bc4(&puStack_90);
    puVar6 = puStack_68;
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c6157c(puVar2);
    func_0x000107c61574(puVar6);
    puVar6 = &UNK_11038ce30;
    func_0x000107c613fc(&UNK_11038ce30,0x20,7);
    *(undefined8 *)(puVar6 + 0x10) = 0x1011a1c60;
    *(undefined **)(puVar6 + 0x18) = puVar3;
    uStack_70 = 0x1011a1c8c;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_100288f10;
    puStack_78 = &UNK_11038ce48;
    puStack_68 = puVar6;
    func_0x000107c60bc4(&puStack_90);
    puVar6 = puStack_68;
    func_0x000107c6157c(puVar3);
    func_0x000107c61574(puVar6);
    func_0x000107c3dcd8(0x3fd3333333333333,0,0x3feb333333333333,0,puVar4);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61574(puVar2);
    func_0x000107c61574(puVar3);
  }
  puVar2 = &DAT_112d63ad8;
  FUN_10119f19c(&DAT_112d63ad8,0x10119efc8,0x1011a1c98,0x1011a1c9c);
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c5a378();
    func_0x000107c61170(puVar2);
  }
  return;
}



/* Entry: 1011a19ac; end: 1011a1a63;  */

double FUN_1011a19ac(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    uint param_5)

{
  code *pcVar1;
  long unaff_x20;
  double dVar2;
  
  if ((param_5 >> 4 & 1) == 0) {
    param_1 = -1.0;
    if ((param_5 >> 2 & 1) == 0) {
      return -1.0;
    }
    func_0x000107c5de64(0xbff0000000000000);
    func_0x000107c61180();
    if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1011a1a64);
      (*pcVar1)();
    }
    dVar2 = 0.5;
  }
  else {
    func_0x000107c5de64();
    func_0x000107c61180();
    if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1011a1a60);
      (*pcVar1)();
    }
    dVar2 = 0.85;
  }
  func_0x000107c3ec60();
  func_0x000107c61170(unaff_x20);
  func_0x000107c609b0(param_1,param_2,param_3,param_4);
  return param_1 * dVar2;
}



/* Entry: 1011a1a64; end: 1011a1ad3;  */

void FUN_1011a1a64(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_28;
  
  if (puRam0000000112d63b40 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112d639b8;
  func_0x00010002969c(0x112d639b8,&UNK_10d9294f0);
  uVar2 = uVar1;
  FUN_1011a1ad4();
  puVar3 = PTR___sxSgSQsSQRzlMc_11034f190;
  uStack_28 = uVar2;
  func_0x000107c61520(PTR___sxSgSQsSQRzlMc_11034f190,uVar1,&uStack_28);
  puRam0000000112d63b40 = puVar3;
  return;
}



/* Entry: 1011a1ad4; end: 1011a1b17;  */

void FUN_1011a1ad4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112d63b48 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x000103b09d58(0xff);
  puVar2 = PTR___sSo8NSObjectCSQ10ObjectiveCMc_11034fac0;
  func_0x000107c61520(PTR___sSo8NSObjectCSQ10ObjectiveCMc_11034fac0,uVar1);
  puRam0000000112d63b48 = puVar2;
  return;
}



/* Entry: 1011a1b18; end: 1011a1b27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a1b18(long *param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar4 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    FUN_10119f670(lVar4);
    if ((lVar4 != 0) && (uVar3 = *(ulong *)(lVar4 + _DAT_112febaa8), uVar3 >> 0x3e != 0)) {
      uVar1 = uVar3 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar3) {
        uVar1 = uVar3;
      }
      func_0x000107c60480(uVar1);
    }
    FUN_10119f958();
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 1011a1b28; end: 1011a1b87;  */

void FUN_1011a1b28(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1011a1b88; end: 1011a1b8f;  */

/* WARNING: Possible PIC construction at 0x0001011a0aac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011a0ab0) */

void FUN_1011a1b88(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 != 0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5af88();
    func_0x000107c61180();
    func_0x000107c52b50(lVar3,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011a0ae0);
  (*pcVar1)();
}



/* Entry: 1011a1b90; end: 1011a1bbb;  */

void FUN_1011a1b90(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1011a1bbc; end: 1011a1be3;  */

void FUN_1011a1bbc(void)

{
  long unaff_x20;
  
  if (*(code **)(unaff_x20 + 0x10) != (code *)0x0) {
    (**(code **)(unaff_x20 + 0x10))();
  }
  return;
}



/* Entry: 1011a1be4; end: 1011a1beb;  */

void FUN_1011a1be4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  if (param_4 == 0) {
    param_3 = 0;
  }
  else {
    func_0x000107c5fadc(param_3,param_4);
  }
  func_0x000107c52ae0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1011a1bec; end: 1011a1c0f;  */

undefined8 FUN_1011a1bec(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1011a1c10; end: 1011a1ca7;  */

void FUN_1011a1c10(long param_1,long param_2)

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



/* Entry: 1011a1ca8; end: 1011a1cb3; -[SCReactionsDetailScopeEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a1ca8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d63b58;
  func_0x000107c61428(param_1 + _DAT_112d63b58,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011a1cb4; end: 1011a1cbf; -[SCReactionsDetailScopeEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a1cb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d63b58;
  func_0x000107c61428(param_1 + _DAT_112d63b58,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011a1cc0; end: 1011a1ccb; -[SCReactionsDetailScopeEntryPoint composerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a1cc0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d63b60;
  func_0x000107c61428(param_1 + _DAT_112d63b60,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011a1ccc; end: 1011a1cd7; -[SCReactionsDetailScopeEntryPoint setComposerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a1ccc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d63b60;
  func_0x000107c61428(param_1 + _DAT_112d63b60,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011a1cd8; end: 1011a1ce3; -[SCReactionsDetailScopeEntryPoint composerAnimatedImageViewServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a1cd8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d63b68;
  func_0x000107c61428(param_1 + _DAT_112d63b68,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011a1ce4; end: 1011a1cef; -[SCReactionsDetailScopeEntryPoint setComposerAnimatedImageViewServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a1ce4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d63b68;
  func_0x000107c61428(param_1 + _DAT_112d63b68,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011a1cf0; end: 1011a1cfb; -[SCReactionsDetailScopeEntryPoint chatReactionMenuScopeBuilderServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a1cf0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d63b70;
  func_0x000107c61428(param_1 + _DAT_112d63b70,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011a1cfc; end: 1011a1d3f;  */

void FUN_1011a1cfc(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011a1d40; end: 1011a1d4b; -[SCReactionsDetailScopeEntryPoint setChatReactionMenuScopeBuilderServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a1d40(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d63b70;
  func_0x000107c61428(param_1 + _DAT_112d63b70,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011a1d4c; end: 1011a1d9f;  */

void FUN_1011a1d4c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011a1da0; end: 1011a1de7; -[SCReactionsDetailScopeEntryPoint reactionMenuScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a1da0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d63b78;
  func_0x000107c61428(param_1 + _DAT_112d63b78,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1011a1de8; end: 1011a1e4b; -[SCReactionsDetailScopeEntryPoint setReactionMenuScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a1de8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d63b78;
  func_0x000107c61428(param_1 + _DAT_112d63b78,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1011a1e4c; end: 1011a2303;  */

/* WARNING: Possible PIC construction at 0x0001011a1f54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011a21d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011a21e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011a21f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011a2230: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011a2240: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011a2250: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011a2260: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011a22cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011a22dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011a22bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011a22e0) */
/* WARNING: Removing unreachable block (ram,0x0001011a22d0) */
/* WARNING: Removing unreachable block (ram,0x0001011a2264) */
/* WARNING: Removing unreachable block (ram,0x0001011a2254) */
/* WARNING: Removing unreachable block (ram,0x0001011a2244) */
/* WARNING: Removing unreachable block (ram,0x0001011a2234) */
/* WARNING: Removing unreachable block (ram,0x0001011a21fc) */
/* WARNING: Removing unreachable block (ram,0x0001011a21ec) */
/* WARNING: Removing unreachable block (ram,0x0001011a21d4) */
/* WARNING: Removing unreachable block (ram,0x0001011a1f58) */
/* WARNING: Removing unreachable block (ram,0x0001011a22c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a1e4c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c40014();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar2 = unaff_x20;
      func_0x000107c3ff6c();
      func_0x000107c61180();
      if (lVar2 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar3;
      }
      else {
        lVar2 = unaff_x20;
        func_0x000107c4f950();
        func_0x000107c61180();
        if (lVar2 == 0) {
          func_0x000107c61170(lVar1);
          lVar1 = lVar3;
        }
        else {
          func_0x000107c3f8ec();
          func_0x000107c61180();
          if (unaff_x20 != 0) {
            lVar3 = 0;
            func_0x00010119e92c();
            func_0x000107c613fc();
            *(long *)(lVar3 + 0x10) = lVar1;
            func_0x0001000285a8(0x112d3b7d0,&UNK_10d904cc0);
            lVar3 = *(long *)(lVar1 + _DAT_112feb970);
            func_0x000107c61174(lVar1);
            func_0x000107c61174(lVar3);
            func_0x0001000b637c();
            lVar1 = lVar3;
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1011a2304; end: 1011a239b; -[SCReactionsDetailScopeEntryPoint begin] */

void FUN_1011a2304(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1011a1e4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1011a239c; end: 1011a23cf; -[SCReactionsDetailScopeEntryPoint end] */

void FUN_1011a239c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001011a232c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1011a23d0; end: 1011a26ab;  */

void FUN_1011a23d0(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10ed9b0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000010,0x800000010ef12650,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd000000000000021;
        if (((param_2 == -0x2fffffffffffffdf) && (param_3 == -0x7ffffffef10d5880)) ||
           (func_0x000107c605b8(0xd000000000000021,0x800000010ef2a780,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c53668();
        }
        else {
          uVar2 = 0;
          if (((param_2 == -0x2fffffffffffffdc) && (param_3 == -0x7ffffffef10d5850)) ||
             (func_0x000107c605b8(0xd000000000000024,0x800000010ef2a7b0,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c533a0();
          }
          else {
            uVar2 = 0;
            if (((param_2 != -0x2fffffffffffffe8) || (param_3 != -0x7ffffffef10d5820)) &&
               (func_0x000107c605b8(0xd000000000000018,0x800000010ef2a7e0,param_2,param_3,0),
               (uVar2 & 1) == 0)) {
              func_0x000107c602fc(0x15);
              func_0x000107c6142c(0xe000000000000000);
              func_0x000107c5fb78(param_2,param_3);
              func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                  "ReactionsDetailScopeEntryPoint/SCReactionsDetailScopeEntryPoint.swift"
                                  ,0x45,2,0x36,0);
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1011a26ac);
              (*pcVar1)();
            }
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c57b4c();
          }
        }
        goto LAB_1011a245c;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c536e0();
  }
LAB_1011a245c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1011a26ac; end: 1011a2757; -[SCReactionsDetailScopeEntryPoint setValue:forIvarName:] */

void FUN_1011a26ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1011a23d0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1011a2758; end: 1011a27ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a2758(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d63b58,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d63b60,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d63b68,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d63b70,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d63b78) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d63b80) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1011a2800; end: 1011a281f; -[SCReactionsDetailScopeEntryPoint init] */

void FUN_1011a2800(void)

{
  FUN_1011a2758();
  return;
}



/* Entry: 1011a2820; end: 1011a2853;  */

void FUN_1011a2820(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1011a2854; end: 1011a28cb; -[SCReactionsDetailScopeEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a2854(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d63b58);
  func_0x000107c61610(param_1 + _DAT_112d63b60);
  func_0x000107c61610(param_1 + _DAT_112d63b68);
  func_0x000107c61610(param_1 + _DAT_112d63b70);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d63b78));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d63b80));
  return;
}



/* Entry: 1011a28cc; end: 1011a28eb;  */

void FUN_1011a28cc(void)

{
  func_0x000107c61168(&PTR_PTR_1127b4c88);
  return;
}



/* Entry: 1011a28ec; end: 1011a294b; -[_TtC41ChatDeepLinkProcessorPluginImplementation21ChatDeepLinkProcessor init] */

void FUN_1011a28ec(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ChatDeepLinkProcessorPluginImplementation.ChatDeepLinkProcessor",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011a2918);
  (*pcVar1)();
}



/* Entry: 1011a294c; end: 1011a29c3; -[_TtC41ChatDeepLinkProcessorPluginImplementation21ChatDeepLinkProcessor .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a294c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d63bb0);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d63bb8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d63bc0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d63bc8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d63bd0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d63bd8));
  return;
}



/* Entry: 1011a29c4; end: 1011a33ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a29c4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  undefined ***pppuVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long unaff_x20;
  byte bVar14;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  puVar1 = param_1;
  func_0x000107c4f778();
  func_0x000107c61180();
  puVar5 = PTR___sypN_11034f1a8;
  puVar12 = puVar1;
  puVar4 = (undefined8 *)PTR___ss11AnyHashableVN_11034e448;
  func_0x000107c5f9e8();
  func_0x000107c61170(puVar1);
  ppuVar2 = &PTR____CFConstantStringClassReference_110e50838;
  func_0x000107c5faec();
  ppuStack_a0 = ppuVar2;
  puStack_98 = puVar4;
  func_0x000107c61434(puVar4);
  puVar8 = PTR___sSSN_11034da80;
  func_0x000107c602d4(&puStack_d0,&ppuStack_a0,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  if (puVar12[2] == 0) {
LAB_1011a2ab0:
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    func_0x000107c61434(puVar12);
    ppuVar2 = &puStack_d0;
    FUN_100df95d0(ppuVar2);
    if (((ulong)puVar8 & 1) == 0) {
      func_0x000107c6142c(puVar12);
      goto LAB_1011a2ab0;
    }
    func_0x0001000bb420(puVar12[7] + (long)ppuVar2 * 0x20,&uStack_90);
    func_0x000107c6142c(puVar4);
    puVar4 = puVar12;
  }
  func_0x000107c6142c(puVar4);
  func_0x000107c6142c(puVar12);
  func_0x0001007bbff0(&puStack_d0);
  if (lStack_78 == 0) {
    func_0x00010006e7f4(&uStack_90);
  }
  else {
    pppuVar3 = &ppuStack_a0;
    func_0x000107c6147c(pppuVar3,&uStack_90,puVar5 + 8,PTR___sSSN_11034da80,6);
    puVar1 = puStack_98;
    ppuVar2 = ppuStack_a0;
    if (((ulong)pppuVar3 & 1) != 0) {
      puVar12 = param_1;
      func_0x000107c4f778();
      func_0x000107c61180();
      puVar4 = puVar12;
      puVar13 = (undefined8 *)PTR___ss11AnyHashableVN_11034e448;
      func_0x000107c5f9e8();
      func_0x000107c61170(puVar12);
      ppuVar9 = &PTR____CFConstantStringClassReference_110f81798;
      func_0x000107c5faec();
      ppuStack_a0 = ppuVar9;
      puStack_98 = puVar13;
      func_0x000107c61434(puVar13);
      puVar12 = (undefined8 *)PTR___sSSN_11034da80;
      func_0x000107c602d4(&puStack_d0,&ppuStack_a0,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
      if (puVar4[2] == 0) {
LAB_1011a2d5c:
        uStack_88 = 0;
        uStack_90 = 0;
        lStack_78 = 0;
        uStack_80 = 0;
      }
      else {
        func_0x000107c61434(puVar4);
        ppuVar9 = &puStack_d0;
        FUN_100df95d0(ppuVar9);
        if (((ulong)puVar12 & 1) == 0) {
          func_0x000107c6142c(puVar4);
          goto LAB_1011a2d5c;
        }
        puVar12 = &uStack_90;
        func_0x0001000bb420(puVar4[7] + (long)ppuVar9 * 0x20,puVar12);
        func_0x000107c6142c(puVar13);
        puVar13 = puVar4;
      }
      func_0x000107c6142c(puVar13);
      func_0x000107c6142c(puVar4);
      func_0x0001007bbff0(&puStack_d0);
      if (lStack_78 == 0) {
        func_0x00010006e7f4(&uStack_90);
LAB_1011a2e08:
        func_0x000107c5faec(&PTR____CFConstantStringClassReference_110da0398);
LAB_1011a2e18:
        bVar14 = 0;
      }
      else {
        pppuVar3 = &ppuStack_a0;
        puVar12 = &uStack_90;
        func_0x000107c6147c(pppuVar3,puVar12,puVar5 + 8,PTR___sSSN_11034da80,6);
        puVar4 = puStack_98;
        ppuVar9 = ppuStack_a0;
        if (((ulong)pppuVar3 & 1) == 0) goto LAB_1011a2e08;
        ppuVar10 = &PTR____CFConstantStringClassReference_110da0398;
        func_0x000107c5faec();
        if (puVar4 == (undefined8 *)0x0) goto LAB_1011a2e18;
        if ((ppuVar9 == ppuVar10) && (puVar4 == puVar12)) {
          func_0x000107c6142c(puVar4);
          bVar14 = 1;
        }
        else {
          func_0x000107c605b8(ppuVar9,puVar4,ppuVar10,puVar12,0);
          bVar14 = (byte)ppuVar9;
          func_0x000107c6142c(puVar4);
        }
      }
      func_0x000107c6142c(puVar12);
      lVar11 = *(long *)(unaff_x20 + _DAT_112d63bb8);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar11 == 0) {
        func_0x000107c6142c(puVar1);
        return;
      }
      ppuVar9 = ppuVar2;
      func_0x000107c5fadc(ppuVar2,puVar1);
      puVar12 = (undefined8 *)0x0;
      func_0x0001000295c4(0);
      func_0x000107c5ffdc();
      puVar5 = &UNK_11038d108;
      func_0x000107c613fc(&UNK_11038d108,0x18,7);
      func_0x000107c61614(puVar5 + 0x10,unaff_x20);
      puVar8 = &UNK_11038d1d0;
      func_0x000107c613fc(&UNK_11038d1d0,0x48,7);
      *(undefined **)(puVar8 + 0x10) = puVar5;
      *(undefined8 **)(puVar8 + 0x18) = param_1;
      *(undefined8 *)(puVar8 + 0x20) = param_2;
      *(undefined8 *)(puVar8 + 0x28) = param_3;
      puVar8[0x30] = bVar14 & 1;
      *(undefined ***)(puVar8 + 0x38) = ppuVar2;
      *(undefined8 **)(puVar8 + 0x40) = puVar1;
      pcStack_b0 = FUN_1011a38d4;
      puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c8 = 0x42000000;
      pcStack_c0 = (code *)0x101043a98;
      puStack_b8 = &UNK_11038d1e8;
      ppuVar2 = &puStack_d0;
      puStack_a8 = puVar8;
      func_0x000107c60bc4(ppuVar2);
      puVar5 = puStack_a8;
      func_0x000107c615f0(param_1);
      func_0x000107c61434(param_2);
      func_0x000107c615f0(param_3);
      func_0x000107c61574(puVar5);
      func_0x000107c5b49c(lVar11);
      func_0x000107c60bd0(ppuVar2);
      func_0x000107c615e8(lVar11);
      func_0x000107c61170(ppuVar9);
      goto LAB_1011a2f48;
    }
  }
  puVar5 = PTR_PTR_1126b1068;
  func_0x000107c61168(PTR_PTR_1126b1068);
  puVar12 = param_1;
  func_0x000107c6148c(param_1,puVar5);
  if (puVar12 != (undefined8 *)0x0) {
    func_0x000107c615f0(param_1);
  }
  puVar6 = PTR_PTR_1126b41f8;
  func_0x000107c61168();
  puVar5 = &UNK_11038d108;
  puVar7 = puVar5;
  func_0x000107c613fc(&UNK_11038d108,0x18,7);
  func_0x000107c61614(puVar7 + 0x10);
  puVar8 = &UNK_11038d130;
  func_0x000107c613fc(&UNK_11038d130,0x31,7);
  *(undefined **)(puVar8 + 0x10) = puVar7;
  *(undefined8 *)(puVar8 + 0x18) = param_3;
  *(undefined8 *)(puVar8 + 0x20) = param_2;
  *(undefined8 **)(puVar8 + 0x28) = param_1;
  puVar8[0x30] = 0;
  puVar7 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_b0 = FUN_1011a38a8;
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0x42000000;
  pcStack_c0 = FUN_1011a3744;
  puStack_b8 = &UNK_11038d148;
  ppuVar2 = &puStack_d0;
  puStack_a8 = puVar8;
  func_0x000107c60bc4(ppuVar2);
  puVar8 = puStack_a8;
  func_0x000107c615f0(param_1);
  func_0x000107c61434(param_2);
  func_0x000107c615f0(param_3);
  func_0x000107c61574(puVar8);
  func_0x000107c613fc(&UNK_11038d108,0x18,7);
  func_0x000107c61614(puVar5 + 0x10);
  puVar8 = &UNK_11038d180;
  func_0x000107c613fc(&UNK_11038d180,0x21,7);
  *(undefined **)(puVar8 + 0x10) = puVar5;
  *(undefined8 *)(puVar8 + 0x18) = param_3;
  puVar8[0x20] = 0;
  pcStack_b0 = (code *)0x1011a38c8;
  puStack_d0 = puVar7;
  uStack_c8 = 0x42000000;
  pcStack_c0 = (code *)0x100ff4e14;
  puStack_b8 = &UNK_11038d198;
  ppuVar9 = &puStack_d0;
  puStack_a8 = puVar8;
  func_0x000107c60bc4(ppuVar9);
  puVar5 = puStack_a8;
  func_0x000107c615f0(param_3);
  func_0x000107c61574(puVar5);
  func_0x000107c505b8(puVar6);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c60bd0(ppuVar2);
LAB_1011a2f48:
  func_0x000107c61170(puVar12);
  return;
}



/* Entry: 1011a33f0; end: 1011a3497;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a33f0(long param_1,long param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if ((param_3 & 1) != 0) {
      uVar1 = *(undefined8 *)(param_2 + _DAT_112d63bd0);
      if (param_1 == 0) {
        func_0x000107c61174(uVar1);
        func_0x000104f2a8f4();
        func_0x000107c61170(uVar1);
      }
      else {
        func_0x000104f2a8f4(uVar1,0,0,1);
      }
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1011a3498; end: 1011a3537; -[_TtC41ChatDeepLinkProcessorPluginImplementation21ChatDeepLinkProcessor processDeepLinkURL:additionalInfo:delegate:] */

void FUN_1011a3498(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c5f9e8(param_4,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_1);
  FUN_1011a29c4(param_3,param_4,param_5);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_4);
  return;
}



/* Entry: 1011a3538; end: 1011a353f; -[_TtC41ChatDeepLinkProcessorPluginImplementation21ChatDeepLinkProcessor shouldForceNavigation] */

undefined8 FUN_1011a3538(void)

{
  return 1;
}



/* Entry: 1011a3540; end: 1011a3543; -[_TtC41ChatDeepLinkProcessorPluginImplementation21ChatDeepLinkProcessor processDeepLinkResolutionResult:additionalInfo:delegate:] */

void FUN_1011a3540(void)

{
  return;
}



/* Entry: 1011a3544; end: 1011a3743;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a3544(undefined8 param_1,long param_2,undefined8 param_3,undefined1 *param_4,
                  undefined8 param_5,ulong param_6)

{
  undefined **ppuVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined **ppuStack_c8;
  undefined1 *puStack_c0;
  undefined1 auStack_b8 [40];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined1 auStack_68 [24];
  
  puVar5 = auStack_68;
  func_0x000107c61428(param_2 + 0x10,puVar5,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    return;
  }
  func_0x000107c4bb48(param_3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110f0e358;
  func_0x000107c5faec();
  ppuStack_c8 = ppuVar1;
  puStack_c0 = puVar5;
  func_0x000107c61434(puVar5);
  puVar6 = PTR___sSSN_11034da80;
  func_0x000107c602d4(auStack_b8,&ppuStack_c8,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  if (*(long *)(param_4 + 0x10) != 0) {
    func_0x000107c61434(param_4);
    puVar2 = auStack_b8;
    FUN_100df95d0(puVar2);
    if (((ulong)puVar6 & 1) != 0) {
      func_0x0001000bb420(*(long *)(param_4 + 0x38) + (long)puVar2 * 0x20,&uStack_90);
      func_0x000107c6142c(puVar5);
      puVar5 = param_4;
      goto LAB_1011a3630;
    }
    func_0x000107c6142c(param_4);
  }
  uStack_88 = 0;
  uStack_90 = 0;
  lStack_78 = 0;
  uStack_80 = 0;
LAB_1011a3630:
  func_0x000107c6142c(puVar5);
  func_0x0001007bbff0(auStack_b8);
  if (lStack_78 == 0) {
    func_0x00010006e7f4(&uStack_90);
  }
  else {
    func_0x000107c6147c(&ppuStack_c8,&uStack_90,PTR___sypN_11034f1a8 + 8,PTR___sSbN_11034dd40,6);
  }
  lVar3 = param_2 + _DAT_112d63bb0;
  func_0x000107c61618();
  if (lVar3 != 0) {
    lVar4 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar4 != 0) {
      func_0x000107c5ae64(lVar4);
      func_0x000107c615e8(lVar4);
    }
  }
  func_0x000107c4bb60(param_3);
  func_0x000107c42804(param_3);
  if ((param_6 & 1) != 0) {
    func_0x000104f2a8f4(*(undefined8 *)(param_2 + _DAT_112d63bd0),1,1,1);
  }
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 1011a3744; end: 1011a378f;  */

void FUN_1011a3744(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1011a3790; end: 1011a3887;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a3790(long param_1,long param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if (param_1 == 0) {
      func_0x000107c4bb48(param_3);
    }
    else {
      lVar1 = param_1;
      func_0x000107c5ed2c(param_1);
      func_0x000107c4bb48(param_3);
      func_0x000107c61170(lVar1);
      func_0x000107c5ed2c(param_1);
    }
    func_0x000107c4bb60(param_3);
    func_0x000107c61170(param_1);
    func_0x000107c42804(param_3);
    if ((param_4 & 1) != 0) {
      uVar2 = *(undefined8 *)(param_2 + _DAT_112d63bd0);
      func_0x000107c61174(uVar2);
      func_0x000104f2a8f4();
      func_0x000107c61170(uVar2);
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1011a3888; end: 1011a38a7;  */

void FUN_1011a3888(void)

{
  func_0x000107c61168(&PTR_PTR_1127b4d68);
  return;
}



/* Entry: 1011a38a8; end: 1011a38d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a38a8(void)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  byte bVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  long unaff_x20;
  undefined **ppuStack_c8;
  undefined1 *puStack_c0;
  undefined1 auStack_b8 [40];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined1 auStack_68 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar1 = *(undefined1 **)(unaff_x20 + 0x20);
  bVar3 = *(byte *)(unaff_x20 + 0x30);
  puVar9 = auStack_68;
  func_0x000107c61428(lVar4 + 0x10,puVar9,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 == 0) {
    return;
  }
  func_0x000107c4bb48(uVar2);
  ppuVar5 = &PTR____CFConstantStringClassReference_110f0e358;
  func_0x000107c5faec();
  ppuStack_c8 = ppuVar5;
  puStack_c0 = puVar9;
  func_0x000107c61434(puVar9);
  puVar10 = PTR___sSSN_11034da80;
  func_0x000107c602d4(auStack_b8,&ppuStack_c8,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  if (*(long *)(puVar1 + 0x10) != 0) {
    func_0x000107c61434(puVar1);
    puVar6 = auStack_b8;
    FUN_100df95d0(puVar6);
    if (((ulong)puVar10 & 1) != 0) {
      func_0x0001000bb420(*(long *)(puVar1 + 0x38) + (long)puVar6 * 0x20,&uStack_90);
      func_0x000107c6142c(puVar9);
      puVar9 = puVar1;
      goto LAB_1011a3630;
    }
    func_0x000107c6142c(puVar1);
  }
  uStack_88 = 0;
  uStack_90 = 0;
  lStack_78 = 0;
  uStack_80 = 0;
LAB_1011a3630:
  func_0x000107c6142c(puVar9);
  func_0x0001007bbff0(auStack_b8);
  if (lStack_78 == 0) {
    func_0x00010006e7f4(&uStack_90);
  }
  else {
    func_0x000107c6147c(&ppuStack_c8,&uStack_90,PTR___sypN_11034f1a8 + 8,PTR___sSbN_11034dd40,6);
  }
  lVar7 = lVar4 + _DAT_112d63bb0;
  func_0x000107c61618();
  if (lVar7 != 0) {
    lVar8 = lVar7;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar7);
    if (lVar8 != 0) {
      func_0x000107c5ae64(lVar8);
      func_0x000107c615e8(lVar8);
    }
  }
  func_0x000107c4bb60(uVar2);
  func_0x000107c42804(uVar2);
  if ((bVar3 & 1) != 0) {
    func_0x000104f2a8f4(*(undefined8 *)(lVar4 + _DAT_112d63bd0),1,1,1);
  }
  func_0x000107c61170(lVar4);
  return;
}



/* Entry: 1011a38d4; end: 1011a3903;  */

void FUN_1011a38d4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x0001011a2fb4(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28),*(undefined1 *)(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 1011a3904; end: 1011a390f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a3904(long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  bVar1 = *(byte *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar3 + 0x10,auStack_48,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    if ((bVar1 & 1) != 0) {
      uVar2 = *(undefined8 *)(lVar3 + _DAT_112d63bd0);
      if (param_1 == 0) {
        func_0x000107c61174(uVar2);
        func_0x000104f2a8f4();
        func_0x000107c61170(uVar2);
      }
      else {
        func_0x000104f2a8f4(uVar2,0,0,1);
      }
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1011a3910; end: 1011a394b;  */

void FUN_1011a3910(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1011a394c; end: 1011a395b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a394c(void)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  byte bVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  long unaff_x20;
  undefined **ppuStack_c8;
  undefined1 *puStack_c0;
  undefined1 auStack_b8 [40];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined1 auStack_68 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar1 = *(undefined1 **)(unaff_x20 + 0x20);
  bVar3 = *(byte *)(unaff_x20 + 0x30);
  puVar9 = auStack_68;
  func_0x000107c61428(lVar4 + 0x10,puVar9,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 == 0) {
    return;
  }
  func_0x000107c4bb48(uVar2);
  ppuVar5 = &PTR____CFConstantStringClassReference_110f0e358;
  func_0x000107c5faec();
  ppuStack_c8 = ppuVar5;
  puStack_c0 = puVar9;
  func_0x000107c61434(puVar9);
  puVar10 = PTR___sSSN_11034da80;
  func_0x000107c602d4(auStack_b8,&ppuStack_c8,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  if (*(long *)(puVar1 + 0x10) != 0) {
    func_0x000107c61434(puVar1);
    puVar6 = auStack_b8;
    FUN_100df95d0(puVar6);
    if (((ulong)puVar10 & 1) != 0) {
      func_0x0001000bb420(*(long *)(puVar1 + 0x38) + (long)puVar6 * 0x20,&uStack_90);
      func_0x000107c6142c(puVar9);
      puVar9 = puVar1;
      goto LAB_1011a3630;
    }
    func_0x000107c6142c(puVar1);
  }
  uStack_88 = 0;
  uStack_90 = 0;
  lStack_78 = 0;
  uStack_80 = 0;
LAB_1011a3630:
  func_0x000107c6142c(puVar9);
  func_0x0001007bbff0(auStack_b8);
  if (lStack_78 == 0) {
    func_0x00010006e7f4(&uStack_90);
  }
  else {
    func_0x000107c6147c(&ppuStack_c8,&uStack_90,PTR___sypN_11034f1a8 + 8,PTR___sSbN_11034dd40,6);
  }
  lVar7 = lVar4 + _DAT_112d63bb0;
  func_0x000107c61618();
  if (lVar7 != 0) {
    lVar8 = lVar7;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar7);
    if (lVar8 != 0) {
      func_0x000107c5ae64(lVar8);
      func_0x000107c615e8(lVar8);
    }
  }
  func_0x000107c4bb60(uVar2);
  func_0x000107c42804(uVar2);
  if ((bVar3 & 1) != 0) {
    func_0x000104f2a8f4(*(undefined8 *)(lVar4 + _DAT_112d63bd0),1,1,1);
  }
  func_0x000107c61170(lVar4);
  return;
}



/* Entry: 1011a395c; end: 1011a3987;  */

void FUN_1011a395c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1011a3988; end: 1011a39b7;  */

void FUN_1011a3988(long param_1,long param_2)

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



/* Entry: 1011a39b8; end: 1011a3a17; -[_TtC41ChatDeepLinkProcessorPluginImplementation27ChatDeepLinkProcessorPlugin init] */

void FUN_1011a39b8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ChatDeepLinkProcessorPluginImplementation.ChatDeepLinkProcessorPlugin",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011a39e4);
  (*pcVar1)();
}



/* Entry: 1011a3a18; end: 1011a3a7f; -[_TtC41ChatDeepLinkProcessorPluginImplementation27ChatDeepLinkProcessorPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a3a18(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d63c08);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d63c10));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d63c18));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d63c20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d63c28));
  return;
}



/* Entry: 1011a3a80; end: 1011a3a9f;  */

void FUN_1011a3a80(void)

{
  func_0x000107c61168(&PTR_PTR_1127b4e50);
  return;
}



/* Entry: 1011a3aa0; end: 1011a3aef; -[_TtC41ChatDeepLinkProcessorPluginImplementation27ChatDeepLinkProcessorPlugin identifier] */

void FUN_1011a3aa0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_28;
  
  func_0x000107c614f0();
  uStack_28 = param_1;
  func_0x000107c614e4();
  puVar1 = &uStack_28;
  func_0x000107c5fb18(puVar1,param_1);
  func_0x000107c5fadc();
  func_0x000107c6142c(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1011a3af0; end: 1011a3af7; -[_TtC41ChatDeepLinkProcessorPluginImplementation27ChatDeepLinkProcessorPlugin priority] */

undefined8 FUN_1011a3af0(void)

{
  return 1000;
}



/* Entry: 1011a3af8; end: 1011a3b7f; -[_TtC41ChatDeepLinkProcessorPluginImplementation27ChatDeepLinkProcessorPlugin canProvideProcessorForFeature:] */

uint FUN_1011a3af8(undefined8 param_1,long param_2,undefined **param_3)

{
  uint uVar1;
  undefined **ppuVar2;
  long lVar3;
  
  func_0x000107c5faec();
  ppuVar2 = &PTR____CFConstantStringClassReference_110dbb9d8;
  lVar3 = param_2;
  func_0x000107c5faec();
  if (param_3 == ppuVar2 && param_2 == lVar3) {
    uVar1 = 1;
  }
  else {
    func_0x000107c605b8(param_3,param_2,ppuVar2,lVar3,0);
    uVar1 = (uint)param_3;
  }
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(lVar3);
  return uVar1 & 1;
}



/* Entry: 1011a3b80; end: 1011a3c47; -[_TtC41ChatDeepLinkProcessorPluginImplementation27ChatDeepLinkProcessorPlugin isValidDeepLink:] */

uint FUN_1011a3b80(undefined8 param_1,long param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  uint uVar4;
  
  func_0x000107c615f0(param_3);
  ppuVar2 = param_3;
  func_0x000107c42e38();
  func_0x000107c61180();
  if (ppuVar2 == (undefined **)0x0) {
    func_0x000107c615e8(param_3);
    uVar4 = 0;
  }
  else {
    ppuVar1 = ppuVar2;
    func_0x000107c5faec();
    lVar3 = param_2;
    func_0x000107c61170(ppuVar2);
    ppuVar2 = &PTR____CFConstantStringClassReference_110dbb9d8;
    func_0x000107c5faec();
    if (ppuVar1 == ppuVar2 && param_2 == lVar3) {
      uVar4 = 1;
    }
    else {
      func_0x000107c605b8(ppuVar1,param_2,ppuVar2,lVar3,0);
      uVar4 = (uint)ppuVar1;
    }
    func_0x000107c6142c(lVar3);
    func_0x000107c615e8(param_3);
    func_0x000107c6142c(param_2);
  }
  return uVar4 & 1;
}



/* Entry: 1011a3c48; end: 1011a3d93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1011a3c48(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long *plVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lStack_60;
  long lStack_58;
  
  plVar6 = &lStack_60;
  lVar2 = unaff_x20 + _DAT_112d63c08;
  func_0x000107c61618(lVar2);
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112d63c10);
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112d63c18);
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112d63c20);
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d63c28);
  lVar3 = 0;
  FUN_1011a3888();
  lVar4 = lVar3;
  func_0x000107c610f8();
  lVar1 = _DAT_112d63bb0;
  func_0x000107c61614(lVar4 + _DAT_112d63bb0,0);
  func_0x000107c61604(lVar4 + lVar1,lVar2);
  *(undefined8 *)(lVar4 + _DAT_112d63bb8) = uVar8;
  *(undefined8 *)(lVar4 + _DAT_112d63bc0) = uVar9;
  *(undefined8 *)(lVar4 + _DAT_112d63bc8) = uVar10;
  puVar5 = PTR_PTR_1126a6500;
  func_0x000107c610f8();
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar9);
  func_0x000107c61174(uVar10);
  func_0x000107c453e4();
  *(undefined **)(lVar4 + _DAT_112d63bd0) = puVar5;
  *(undefined8 *)(lVar4 + _DAT_112d63bd8) = uVar7;
  puVar5 = PTR_s_init_1125d9248;
  lStack_60 = lVar4;
  lStack_58 = lVar3;
  func_0x000107c6157c(uVar7);
  func_0x000107c61154(&lStack_60,puVar5);
  func_0x000107c61170(lVar2);
  return (undefined1 *)plVar6;
}



/* Entry: 1011a3d94; end: 1011a3dc7; -[_TtC41ChatDeepLinkProcessorPluginImplementation27ChatDeepLinkProcessorPlugin makeDeepLinkProcessor] */

void FUN_1011a3d94(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1011a3c48();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1011a3dc8; end: 1011a3fb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1011a3dc8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 unaff_x20;
  long lStack_70;
  long lStack_68;
  
  func_0x000107c613fc();
  uVar3 = param_2;
  func_0x000107c3f8cc(param_2);
  func_0x000107c61180();
  lVar4 = param_3;
  func_0x000107c5b4b0();
  func_0x000107c61180();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1011a3fb4);
    (*pcVar2)();
  }
  lVar5 = param_3;
  func_0x000107c5db34();
  func_0x000107c61180();
  if (lVar5 != 0) {
    uVar6 = param_4;
    func_0x000107c4e26c();
    func_0x000107c61180();
    func_0x0001000285a8(0x112d61fd0,&UNK_10d9295a0);
    uVar7 = param_5;
    func_0x000107c4cdb8();
    func_0x000107c61180();
    uVar8 = uVar7;
    func_0x0001000bda74();
    func_0x000107c61170(uVar7);
    lVar9 = 0;
    FUN_1011a3a80();
    lVar10 = lVar9;
    func_0x000107c610f8();
    lVar1 = _DAT_112d63c08;
    func_0x000107c61614(lVar10 + _DAT_112d63c08,0);
    func_0x000107c61604(lVar10 + lVar1,uVar3);
    *(long *)(lVar10 + _DAT_112d63c10) = lVar4;
    *(long *)(lVar10 + _DAT_112d63c18) = lVar5;
    *(undefined8 *)(lVar10 + _DAT_112d63c20) = uVar6;
    *(undefined8 *)(lVar10 + _DAT_112d63c28) = uVar8;
    plVar11 = &lStack_70;
    lStack_70 = lVar10;
    lStack_68 = lVar9;
    func_0x000107c61154(plVar11,PTR_s_init_1125d9248);
    func_0x000107c61170(uVar3);
    uVar3 = param_1;
    func_0x000107c4e9e4(param_1);
    func_0x000107c61180();
    func_0x000107c4fba8();
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(plVar11);
    func_0x000107c61170(uVar3);
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1011a3fb8);
  (*pcVar2)();
}



/* Entry: 1011a3fb8; end: 1011a3fd3;  */

void FUN_1011a3fb8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1011a3fd4; end: 1011a3ff3;  */

void FUN_1011a3fd4(void)

{
  func_0x000107c61168(&PTR_PTR_112d63c98);
  return;
}



/* Entry: 1011a3ff4; end: 1011a3fff; -[SCChatDeepLinkProcessorPluginEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a3ff4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d63cf0;
  func_0x000107c61428(param_1 + _DAT_112d63cf0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011a4000; end: 1011a400b; -[SCChatDeepLinkProcessorPluginEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a4000(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d63cf0;
  func_0x000107c61428(param_1 + _DAT_112d63cf0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011a400c; end: 1011a4017; -[SCChatDeepLinkProcessorPluginEntryPoint mainTabNavigationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a400c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d63cf8;
  func_0x000107c61428(param_1 + _DAT_112d63cf8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011a4018; end: 1011a4023; -[SCChatDeepLinkProcessorPluginEntryPoint setMainTabNavigationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a4018(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d63cf8;
  func_0x000107c61428(param_1 + _DAT_112d63cf8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011a4024; end: 1011a402f; -[SCChatDeepLinkProcessorPluginEntryPoint snapchatterServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a4024(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d63d00;
  func_0x000107c61428(param_1 + _DAT_112d63d00,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011a4030; end: 1011a403b; -[SCChatDeepLinkProcessorPluginEntryPoint setSnapchatterServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a4030(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d63d00;
  func_0x000107c61428(param_1 + _DAT_112d63d00,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011a403c; end: 1011a4047; -[SCChatDeepLinkProcessorPluginEntryPoint pageLauncherServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a403c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d63d08;
  func_0x000107c61428(param_1 + _DAT_112d63d08,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011a4048; end: 1011a4053; -[SCChatDeepLinkProcessorPluginEntryPoint setPageLauncherServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a4048(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d63d08;
  func_0x000107c61428(param_1 + _DAT_112d63d08,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011a4054; end: 1011a405f; -[SCChatDeepLinkProcessorPluginEntryPoint messagingExperimentServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a4054(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d63d10;
  func_0x000107c61428(param_1 + _DAT_112d63d10,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011a4060; end: 1011a40a3;  */

void FUN_1011a4060(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011a40a4; end: 1011a40af; -[SCChatDeepLinkProcessorPluginEntryPoint setMessagingExperimentServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011a40a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d63d10;
  func_0x000107c61428(param_1 + _DAT_112d63d10,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011a40b0; end: 1011a4103;  */

void FUN_1011a40b0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011a4104; end: 1011a43e3;  */

/* WARNING: Possible PIC construction at 0x0001011a424c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011a42e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011a4304: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011a4314: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011a4324: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011a4334: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011a43a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011a43b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011a4394: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011a43b8) */
/* WARNING: Removing unreachable block (ram,0x0001011a43a8) */
/* WARNING: Removing unreachable block (ram,0x0001011a4338) */
/* WARNING: Removing unreachable block (ram,0x0001011a4328) */
/* WARNING: Removing unreachable block (ram,0x0001011a4318) */
/* WARNING: Removing unreachable block (ram,0x0001011a4308) */
/* WARNING: Removing unreachable block (ram,0x0001011a42e4) */
/* WARNING: Removing unreachable block (ram,0x0001011a4250) */
/* WARNING: Removing unreachable block (ram,0x0001011a4398) */

void FUN_1011a4104(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  lVar3 = unaff_x20;
  func_0x000107c4c19c();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = unaff_x20;
    func_0x000107c5b490();
    func_0x000107c61180();
    if (lVar4 == 0) {
      func_0x000107c61170(lVar2);
      lVar2 = lVar3;
    }
    else {
      lVar5 = unaff_x20;
      func_0x000107c4e270();
      func_0x000107c61180();
      if (lVar5 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        func_0x000107c4cdfc();
        func_0x000107c61180();
        if (unaff_x20 != 0) {
          FUN_1011a3fd4();
          func_0x000107c613fc();
          func_0x000107c3f8cc();
          func_0x000107c61180();
          lVar2 = lVar4;
          func_0x000107c5b4b0();
          func_0x000107c61180();
          if (lVar2 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1011a43e0);
            (*pcVar1)();
          }
          func_0x000107c5db34();
          func_0x000107c61180();
          if (lVar4 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1011a43e4);
            (*pcVar1)();
          }
          func_0x000107c4e26c();
          func_0x000107c61180();
          func_0x0001000285a8(0x112d61fd0,&UNK_10d9295a0);
          func_0x000107c4cdb8(unaff_x20);
          func_0x000107c61180();
          func_0x0001000bda74();
          lVar2 = unaff_x20;
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1011a43e4; end: 1011a440b; -[SCChatDeepLinkProcessorPluginEntryPoint begin] */

void FUN_1011a43e4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1011a4104();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


