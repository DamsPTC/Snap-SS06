/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101054444; end: 10105449b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101054444(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar9 = *(long *)(unaff_x20 + 0x18);
  bVar3 = *(byte *)(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c61428(lVar4 + 0x10,auStack_78,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    uVar12 = *(undefined8 *)(lVar4 + _DAT_112d56dc8);
    lVar5 = lVar4;
    func_0x000100673624();
    func_0x000107c613fc();
    *(undefined8 *)(lVar5 + 0x18) = 3;
    *(undefined8 *)(lVar5 + 0x10) = 1;
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c615f0(uVar12);
    func_0x000107c46ecc();
    *(undefined **)(lVar5 + 0x20) = puVar6;
    uVar7 = 0;
    func_0x000101054230(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    lVar8 = lVar5;
    func_0x000107c5fc48(lVar5,uVar7);
    func_0x000107c61574(lVar5);
    if (lVar9 != 0) {
      uVar7 = 0;
      func_0x000101054230(0,0x112d56e30,&PTR_PTR_1126c0dd8);
      func_0x000107c5fc48(lVar9,uVar7);
    }
    puVar6 = &UNK_11037a6a0;
    func_0x000107c613fc(&UNK_11037a6a0,0x18,7);
    func_0x000107c61614(puVar6 + 0x10,lVar4);
    puVar10 = &UNK_11037a790;
    func_0x000107c613fc(&UNK_11037a790,0x30,7);
    *(undefined **)(puVar10 + 0x10) = puVar6;
    puVar10[0x18] = bVar3 & 1;
    *(undefined8 *)(puVar10 + 0x20) = uVar1;
    *(undefined8 *)(puVar10 + 0x28) = uVar2;
    uStack_88 = 0x101052a3c;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    uStack_98 = 0x101054494;
    puStack_90 = &UNK_11037a7a8;
    ppuVar11 = &puStack_a8;
    puStack_80 = puVar10;
    func_0x000107c60bc4(ppuVar11);
    puVar6 = puStack_80;
    func_0x000107c6157c(uVar2);
    func_0x000107c61574(puVar6);
    func_0x000107c432c8(uVar12);
    func_0x000107c60bd0(ppuVar11);
    func_0x000107c61170(lVar4);
    func_0x000107c615e8(uVar12);
    func_0x000107c61170(lVar8);
    func_0x000107c61170(lVar9);
  }
  return;
}



/* Entry: 10105449c; end: 1010548f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10105449c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  lVar2 = param_1;
  func_0x000104e421a4();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1010548f0);
    (*pcVar1)();
  }
  puVar3 = PTR_PTR_1126b10a0;
  func_0x000107c61168();
  puVar4 = puVar3;
  func_0x000107c41858();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  puVar5 = &UNK_11037a948;
  func_0x000107c613fc(&UNK_11037a948,0x18,7);
  func_0x000107c61614(puVar5 + 0x10);
  puVar6 = &UNK_11037a970;
  func_0x000107c613fc(&UNK_11037a970,0x48,7);
  *(undefined **)(puVar6 + 0x10) = puVar5;
  *(undefined8 *)(puVar6 + 0x18) = param_2;
  *(undefined8 *)(puVar6 + 0x20) = param_3;
  *(undefined8 *)(puVar6 + 0x28) = param_4;
  *(undefined8 *)(puVar6 + 0x30) = param_5;
  *(undefined8 *)(puVar6 + 0x38) = param_6;
  *(undefined8 *)(puVar6 + 0x40) = param_7;
  pcStack_80 = FUN_101054f74;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_101054b14;
  puStack_88 = &UNK_11037a988;
  ppuVar7 = &puStack_a0;
  puStack_78 = puVar6;
  func_0x000107c60bc4(ppuVar7);
  puVar5 = puStack_78;
  func_0x000107c61434(param_7);
  func_0x000107c61434(param_3);
  func_0x000107c61434(param_5);
  func_0x000107c61574(puVar5);
  puVar5 = puVar4;
  func_0x000107c3eae8();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61170();
  func_0x000104e4218c();
  func_0x000107c61180();
  if (puVar4 != (undefined *)0x0) {
    puVar8 = puVar3;
    func_0x000107c4dfcc();
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    puVar6 = &UNK_11037a948;
    func_0x000107c613fc(&UNK_11037a948,0x18,7);
    func_0x000107c61614(puVar6 + 0x10);
    puVar4 = &UNK_11037a9c0;
    func_0x000107c613fc(&UNK_11037a9c0,0x28,7);
    *(undefined **)(puVar4 + 0x10) = puVar6;
    *(undefined8 *)(puVar4 + 0x18) = param_2;
    *(undefined8 *)(puVar4 + 0x20) = param_3;
    puVar6 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_80 = (code *)0x101054fa4;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_101054b14;
    puStack_88 = &UNK_11037a9d8;
    ppuVar7 = &puStack_a0;
    puStack_78 = puVar4;
    func_0x000107c60bc4(ppuVar7);
    puVar4 = puStack_78;
    func_0x000107c61434(param_3);
    func_0x000107c61574(puVar4);
    puVar4 = puVar8;
    func_0x000107c3eae8();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61170();
    func_0x000104e4215c();
    func_0x000107c61180();
    if (puVar8 != (undefined *)0x0) {
      func_0x000107c437a0();
      func_0x000107c61180();
      func_0x000107c61170(puVar8);
      puVar8 = &UNK_11037a948;
      func_0x000107c613fc(&UNK_11037a948,0x18,7);
      func_0x000107c61614(puVar8 + 0x10);
      pcStack_80 = (code *)0x101054fb0;
      puStack_a0 = puVar6;
      uStack_98 = 0x42000000;
      pcStack_90 = FUN_101054b14;
      puStack_88 = &UNK_11037aa00;
      ppuVar7 = &puStack_a0;
      puStack_78 = puVar8;
      func_0x000107c60bc4(ppuVar7);
      func_0x000107c61574(puStack_78);
      puVar6 = puVar3;
      func_0x000107c3eae8(puVar3);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar7);
      func_0x000107c61170();
      FUN_101064e0c();
      func_0x000107c613fc();
      *(undefined8 *)(puVar3 + 0x18) = 5;
      *(undefined8 *)(puVar3 + 0x10) = 2;
      *(undefined **)(puVar3 + 0x20) = puVar5;
      *(undefined **)(puVar3 + 0x28) = puVar4;
      puVar8 = PTR_PTR_1126b10a8;
      func_0x000107c610f8();
      uVar9 = 0;
      FUN_101054fb8(0);
      func_0x000107c61174(puVar5);
      func_0x000107c61174(puVar4);
      func_0x000107c61174(puVar6);
      puVar10 = puVar3;
      func_0x000107c5fc48(puVar3,uVar9);
      func_0x000107c61574(puVar3);
      func_0x000107c46c9c();
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar10);
      uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112d56e70);
      *(undefined **)(unaff_x20 + _DAT_112d56e70) = puVar8;
      func_0x000107c61174(puVar8);
      func_0x000107c61170(uVar9);
      func_0x000107c4ee8c(param_1);
      puVar3 = PTR_PTR_1126affa8;
      func_0x000107c61168();
      func_0x000107c5aa04();
      func_0x000107c61180();
      if (puVar3 != (undefined *)0x0) {
        func_0x000107c4e57c();
        func_0x000107c61170(puVar3);
      }
      func_0x000107c61170(puVar8);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar5);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1010548f8);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1010548f4);
  (*pcVar1)();
}



/* Entry: 1010548f8; end: 101054b13;  */

void FUN_1010548f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  if (param_1 != 0) {
    ppuVar2 = &puStack_80;
    puVar1 = &UNK_11037aab0;
    func_0x000107c613fc(&UNK_11037aab0,0x48,7);
    *(undefined8 *)(puVar1 + 0x10) = param_2;
    *(undefined8 *)(puVar1 + 0x18) = param_3;
    *(undefined8 *)(puVar1 + 0x20) = param_4;
    *(undefined8 *)(puVar1 + 0x28) = param_5;
    *(undefined8 *)(puVar1 + 0x30) = param_6;
    *(undefined8 *)(puVar1 + 0x38) = param_7;
    *(undefined8 *)(puVar1 + 0x40) = param_8;
    pcStack_60 = FUN_101055078;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1000f6b44;
    puStack_68 = &UNK_11037aac8;
    puStack_58 = puVar1;
    func_0x000107c60bc4(&puStack_80);
    puVar1 = puStack_58;
    func_0x000107c61434(param_8);
    func_0x000107c6157c(param_2);
    func_0x000107c61434(param_4);
    func_0x000107c61434(param_6);
    func_0x000107c61574(puVar1);
    func_0x000107c42010(param_1);
    func_0x000107c60bd0(ppuVar2);
  }
  return;
}



/* Entry: 101054b14; end: 101054b63;  */

void FUN_101054b14(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  (*pcVar1)(param_2);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 101054b64; end: 101054c37;  */

void FUN_101054b64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  if (param_1 != 0) {
    ppuVar2 = &puStack_70;
    puVar1 = &UNK_11037aa60;
    func_0x000107c613fc(&UNK_11037aa60,0x28,7);
    *(undefined8 *)(puVar1 + 0x10) = param_2;
    *(undefined8 *)(puVar1 + 0x18) = param_3;
    *(undefined8 *)(puVar1 + 0x20) = param_4;
    pcStack_50 = FUN_101055030;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000f6b44;
    puStack_58 = &UNK_11037aa78;
    puStack_48 = puVar1;
    func_0x000107c60bc4(&puStack_70);
    puVar1 = puStack_48;
    func_0x000107c6157c(param_2);
    func_0x000107c61434(param_4);
    func_0x000107c61574(puVar1);
    func_0x000107c42010(param_1);
    func_0x000107c60bd0(ppuVar2);
  }
  return;
}



/* Entry: 101054c38; end: 101054db7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101054c38(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_68;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  lVar1 = param_1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112d56e70);
    *(undefined8 *)(lVar1 + _DAT_112d56e70) = 0;
    func_0x000107c61170();
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61428(param_1 + 0x10,auStack_60,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112d56e60);
    func_0x000107c6157c(uVar2);
    func_0x000107c61170(param_1);
    uStack_68 = 0x80;
    uStack_a0 = param_2;
    uStack_98 = param_3;
    func_0x000107c61434(param_3);
    func_0x0001002a64a8(&uStack_a0);
    func_0x000107c61574(uVar2);
    FUN_101052098(&uStack_a0);
  }
  return;
}



/* Entry: 101054db8; end: 101054e17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101054db8(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112d56e70);
    *(undefined8 *)(param_1 + _DAT_112d56e70) = 0;
    func_0x000107c61170();
    func_0x000107c61170(uVar1);
  }
  return;
}



/* Entry: 101054e18; end: 101054e2f; -[_TtC19SpotlightManagement38SpotlightManagementActionMenuPresenter actionSheetDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101054e18(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112d56e70);
  *(undefined8 *)(param_1 + _DAT_112d56e70) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 101054e30; end: 101054edb; -[_TtC19SpotlightManagement38SpotlightManagementActionMenuPresenter init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101054e30(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar1 = _DAT_112d56e60;
  uVar2 = 0x112d56ea8;
  func_0x0001000285a8(0x112d56ea8,&UNK_10d91dd10);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(param_1 + lVar1) = uVar2;
  lVar1 = _DAT_112d56e68;
  uVar2 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(param_1 + lVar1) = uVar2;
  *(undefined8 *)(param_1 + _DAT_112d56e70) = 0;
  FUN_101054f54();
  lStack_40 = param_1;
  uStack_38 = uVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101054edc; end: 101054f0b;  */

void FUN_101054edc(void)

{
  FUN_101054f54();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101054f0c; end: 101054f53; -[_TtC19SpotlightManagement38SpotlightManagementActionMenuPresenter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101054f0c(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d56e60));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d56e68));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d56e70));
  return;
}



/* Entry: 101054f54; end: 101054f73;  */

void FUN_101054f54(void)

{
  func_0x000107c61168(&PTR_PTR_1127aadd0);
  return;
}



/* Entry: 101054f74; end: 101054fb7;  */

void FUN_101054f74(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x40);
  if (param_1 != 0) {
    ppuVar8 = &puStack_80;
    puVar7 = &UNK_11037aab0;
    func_0x000107c613fc(&UNK_11037aab0,0x48,7);
    *(undefined8 *)(puVar7 + 0x10) = uVar1;
    *(undefined8 *)(puVar7 + 0x18) = uVar4;
    *(undefined8 *)(puVar7 + 0x20) = uVar2;
    *(undefined8 *)(puVar7 + 0x28) = uVar5;
    *(undefined8 *)(puVar7 + 0x30) = uVar3;
    *(undefined8 *)(puVar7 + 0x38) = uVar6;
    *(undefined8 *)(puVar7 + 0x40) = uVar9;
    pcStack_60 = FUN_101055078;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1000f6b44;
    puStack_68 = &UNK_11037aac8;
    puStack_58 = puVar7;
    func_0x000107c60bc4(&puStack_80);
    puVar7 = puStack_58;
    func_0x000107c61434(uVar9);
    func_0x000107c6157c(uVar1);
    func_0x000107c61434(uVar2);
    func_0x000107c61434(uVar3);
    func_0x000107c61574(puVar7);
    func_0x000107c42010(param_1);
    func_0x000107c60bd0(ppuVar8);
  }
  return;
}



/* Entry: 101054fb8; end: 101054ffb;  */

void FUN_101054fb8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d56ea0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126b10a0;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d56ea0 = puVar1;
  return;
}



/* Entry: 101054ffc; end: 101055003;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101054ffc(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112d56e70);
    *(undefined8 *)(lVar1 + _DAT_112d56e70) = 0;
    func_0x000107c61170();
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 101055004; end: 10105502f;  */

void FUN_101055004(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101055030; end: 10105503b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101055030(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_68;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar3 + 0x10,auStack_48,0,0);
  lVar2 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    uVar5 = *(undefined8 *)(lVar2 + _DAT_112d56e70);
    *(undefined8 *)(lVar2 + _DAT_112d56e70) = 0;
    func_0x000107c61170();
    func_0x000107c61170(uVar5);
  }
  func_0x000107c61428(lVar3 + 0x10,auStack_60,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    uVar5 = *(undefined8 *)(lVar3 + _DAT_112d56e60);
    func_0x000107c6157c(uVar5);
    func_0x000107c61170(lVar3);
    uStack_68 = 0x80;
    uStack_a0 = uVar1;
    uStack_98 = uVar4;
    func_0x000107c61434(uVar4);
    func_0x0001002a64a8(&uStack_a0);
    func_0x000107c61574(uVar5);
    FUN_101052098(&uStack_a0);
  }
  return;
}



/* Entry: 10105503c; end: 101055077;  */

void FUN_10105503c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101055078; end: 1010550b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101055078(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar7 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x40);
  func_0x000107c61428(lVar7 + 0x10,auStack_68,0,0);
  lVar6 = lVar7 + 0x10;
  func_0x000107c61618();
  if (lVar6 != 0) {
    uVar9 = *(undefined8 *)(lVar6 + _DAT_112d56e70);
    *(undefined8 *)(lVar6 + _DAT_112d56e70) = 0;
    func_0x000107c61170();
    func_0x000107c61170(uVar9);
  }
  func_0x000107c61428(lVar7 + 0x10,auStack_80,0,0);
  lVar7 = lVar7 + 0x10;
  func_0x000107c61618();
  if (lVar7 != 0) {
    uVar9 = *(undefined8 *)(lVar7 + _DAT_112d56e60);
    func_0x000107c6157c(uVar9);
    func_0x000107c61170(lVar7);
    uStack_88 = 0x90;
    uStack_c0 = uVar3;
    uStack_b8 = uVar1;
    uStack_b0 = uVar4;
    uStack_a8 = uVar2;
    uStack_a0 = uVar5;
    uStack_98 = uVar8;
    func_0x000107c61434(uVar8);
    func_0x000107c61434(uVar1);
    func_0x000107c61434(uVar2);
    func_0x0001002a64a8(&uStack_c0);
    func_0x000107c61574(uVar9);
    FUN_101052098(&uStack_c0);
  }
  return;
}



/* Entry: 1010550b4; end: 101055a0f;  */

/* WARNING: Removing unreachable block (ram,0x000101055a00) */

void FUN_1010550b4(undefined8 *param_1,undefined8 *param_2,undefined *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  code *pcVar14;
  uint uVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 uVar19;
  undefined *puVar20;
  undefined8 uVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined8 *puVar24;
  undefined *puVar25;
  ulong *puVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  ulong uVar33;
  ulong uVar34;
  undefined8 *puVar35;
  ulong uVar36;
  undefined *puStack_3f0;
  undefined *puStack_2f0;
  long lStack_2e8;
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
  undefined *puStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  long lStack_100;
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
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puVar18;
  
  uStack_98 = param_2[0x15];
  uStack_a0 = param_2[0x14];
  lStack_88 = param_2[0x17];
  uStack_90 = param_2[0x16];
  uStack_78 = param_2[0x19];
  uStack_80 = param_2[0x18];
  uStack_d8 = param_2[0xd];
  uStack_e0 = param_2[0xc];
  uStack_c8 = param_2[0xf];
  uStack_d0 = param_2[0xe];
  uStack_b8 = param_2[0x11];
  uStack_c0 = param_2[0x10];
  uStack_a8 = param_2[0x13];
  uStack_b0 = param_2[0x12];
  uStack_118 = param_2[5];
  lStack_120 = param_2[4];
  puVar25 = (undefined *)param_2[7];
  uStack_110 = param_2[6];
  uStack_f8 = param_2[9];
  lStack_100 = param_2[8];
  uStack_e8 = param_2[0xb];
  uStack_f0 = param_2[10];
  uStack_138 = param_2[1];
  uStack_140 = *param_2;
  uStack_128 = param_2[3];
  uStack_130 = param_2[2];
  puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_108 = puVar25;
  if (lStack_120 != 0) {
    func_0x000107c61434();
    puVar16 = puVar25;
  }
  uVar34 = *(ulong *)(puVar16 + 0x10);
  puVar25 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar34 != 0) {
    uVar29 = 0;
    do {
      if (*(ulong *)(puVar16 + 0x10) <= uVar29) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x1010554d8);
        (*pcVar14)();
      }
      puVar30 = *(undefined **)(puVar16 + uVar29 * 0x90 + 0x70);
      if ((ulong)puVar30 >> 0x3e == 0) {
        puVar31 = *(undefined **)((undefined *)((ulong)puVar30 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar31 = (undefined *)((ulong)puVar30 & 0xffffffffffffff8);
        if (((ulong)puVar30 & 0x8000000000000000) != 0) {
          puVar31 = puVar30;
        }
        func_0x000107c60480();
      }
      uVar33 = (ulong)puVar25 >> 0x3e;
      if (uVar33 == 0) {
        puVar17 = *(undefined **)((undefined *)((ulong)puVar25 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar17 = (undefined *)((ulong)puVar25 & 0xffffffffffffff8);
        if (((ulong)puVar25 & 0x8000000000000000) != 0) {
          puVar17 = puVar25;
        }
        func_0x000107c60480();
      }
      if (SCARRY8((long)puVar17,(long)puVar31)) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x1010554dc);
        (*pcVar14)();
      }
      puVar17 = puVar17 + (long)puVar31;
      func_0x000107c61434(puVar30);
      puVar18 = puVar25;
      func_0x000107c61550();
      uVar15 = 0;
      if (uVar33 == 0) {
        uVar15 = (uint)puVar18;
      }
      puVar18 = (undefined *)(ulong)uVar15;
      if ((uVar15 != 1) ||
         (uVar36 = (ulong)puVar25 & 0xffffffffffffff8,
         (long)(*(ulong *)(uVar36 + 0x18) >> 1) < (long)puVar17)) {
        if (uVar33 == 0) {
          param_3 = *(undefined **)((undefined *)((ulong)puVar25 & 0xffffffffffffff8) + 0x10);
        }
        else {
          param_3 = (undefined *)((ulong)puVar25 & 0xffffffffffffff8);
          if (((ulong)puVar25 & 0x8000000000000000) != 0) {
            param_3 = puVar25;
          }
          func_0x000107c60480();
        }
        if ((long)param_3 <= (long)puVar17) {
          param_3 = puVar17;
        }
        FUN_101055e1c(puVar18,param_3,1,puVar25);
        uVar36 = (ulong)puVar18 & 0xffffffffffffff8;
        puVar25 = puVar18;
      }
      lVar3 = *(long *)(uVar36 + 0x10);
      puVar17 = (undefined *)((*(ulong *)(uVar36 + 0x18) >> 1) - lVar3);
      if ((ulong)puVar30 >> 0x3e == 0) {
        puVar18 = *(undefined **)(((ulong)puVar30 & 0xffffffffffffff8) + 0x10);
        if (puVar18 != (undefined *)0x0) {
          if (puVar17 < puVar18) {
                    /* WARNING: Does not return */
            pcVar14 = (code *)SoftwareBreakpoint(1,0x1010554f4);
            (*pcVar14)();
          }
          uVar19 = 0;
          FUN_10105686c(0);
          param_3 = (undefined *)(((ulong)puVar30 & 0xffffffffffffff8) + 0x20);
          func_0x000107c6140c(uVar36 + lVar3 * 8 + 0x20,param_3,puVar18,uVar19);
          goto LAB_101055308;
        }
LAB_101055154:
        func_0x000107c6142c(puVar30);
        if (0 < (long)puVar31) goto LAB_1010554dc;
      }
      else {
        puVar18 = (undefined *)((ulong)puVar30 & 0xffffffffffffff8);
        if (((ulong)puVar30 & 0x8000000000000000) != 0) {
          puVar18 = puVar30;
        }
        puVar22 = puVar18;
        func_0x000107c60480();
        if (puVar22 == (undefined *)0x0) goto LAB_101055154;
        func_0x000107c60480();
        if ((long)puVar17 < (long)puVar18) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x1010554f0);
          (*pcVar14)();
        }
        if ((long)puVar22 < 1) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x1010554f8);
          (*pcVar14)();
        }
        lVar3 = uVar36 + lVar3 * 8;
        puVar24 = (undefined8 *)(lVar3 + 0x20);
        if (((ulong)puVar30 & 0xc000000000000001) == 0) {
          uVar19 = *(undefined8 *)(puVar30 + 0x20);
          *puVar24 = uVar19;
          puVar22 = puVar22 + -1;
          if (puVar22 != (undefined *)0x0) {
            uVar21 = uVar19;
            puVar24 = (undefined8 *)(lVar3 + 0x28);
            puVar35 = (undefined8 *)(puVar30 + 0x28);
            do {
              uVar19 = *puVar35;
              *puVar24 = uVar19;
              func_0x000107c61174(uVar21);
              puVar22 = puVar22 + -1;
              uVar21 = uVar19;
              puVar24 = puVar24 + 1;
              puVar35 = puVar35 + 1;
            } while (puVar22 != (undefined *)0x0);
          }
          func_0x000107c61174(uVar19);
        }
        else {
          puVar17 = (undefined *)0x0;
          do {
            puVar20 = puVar17;
            param_3 = puVar30;
            FUN_101059128();
            puVar24[(long)puVar17] = puVar20;
            puVar17 = puVar17 + 1;
          } while (puVar22 != puVar17);
        }
LAB_101055308:
        func_0x000107c6142c(puVar30);
        if ((long)puVar18 < (long)puVar31) {
LAB_1010554dc:
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x1010554e0);
          (*pcVar14)();
        }
        if (0 < (long)puVar18) {
          if (SCARRY8(*(long *)(uVar36 + 0x10),(long)puVar18)) {
                    /* WARNING: Does not return */
            pcVar14 = (code *)SoftwareBreakpoint(1,0x1010554ec);
            (*pcVar14)();
          }
          *(undefined **)(uVar36 + 0x10) = puVar18 + *(long *)(uVar36 + 0x10);
        }
      }
      uVar29 = uVar29 + 1;
    } while (uVar29 != uVar34);
  }
  puVar30 = (undefined *)((ulong)puVar25 & 0xffffffffffffff8);
  if ((ulong)puVar25 >> 0x3e == 0) {
    puVar31 = *(undefined **)(puVar30 + 0x10);
    puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar31 = puVar30;
    if ((undefined *)0x7fffffffffffffff < puVar25) {
      puVar31 = puVar25;
    }
    func_0x000107c60480();
    puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar17;
  if (puVar31 != (undefined *)0x0) {
    puVar18 = (undefined *)0x0;
    do {
      while( true ) {
        if (((ulong)puVar25 & 0xc000000000000001) == 0) {
          if (*(undefined **)(puVar30 + 0x10) <= puVar18) {
                    /* WARNING: Does not return */
            pcVar14 = (code *)SoftwareBreakpoint(1,0x1010554e8);
            (*pcVar14)();
          }
          puVar22 = *(undefined **)(puVar25 + (long)puVar18 * 8 + 0x20);
          func_0x000107c61174();
          puVar20 = param_3;
        }
        else {
          puVar22 = puVar18;
          puVar20 = puVar25;
          FUN_101059128();
        }
        if (SCARRY8((long)puVar18,1)) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x1010554e4);
          (*pcVar14)();
        }
        puVar32 = puVar18 + 1;
        func_0x000107c61174();
        puVar23 = puVar22;
        func_0x000107c3fb8c();
        func_0x000107c61180();
        if (puVar23 == (undefined *)0x0) break;
        puVar18 = puVar23;
        func_0x000107c5faec();
        param_3 = puVar20;
        func_0x000107c61170(puVar22);
        func_0x000107c61170(puVar22);
        func_0x000107c61170(puVar23);
        puVar22 = puVar17;
        func_0x000107c61558();
        puVar23 = puVar17;
        if (((ulong)puVar22 & 1) == 0) {
          param_3 = (undefined *)(*(long *)(puVar17 + 0x10) + 1);
          puVar23 = (undefined *)0x0;
          func_0x000101056600(0,param_3,1,puVar17,PTR__swift_bridgeObjectRelease_11034f258);
        }
        uVar34 = *(ulong *)(puVar23 + 0x10);
        puVar22 = (undefined *)(uVar34 + 1);
        puVar17 = puVar23;
        if (*(ulong *)(puVar23 + 0x18) >> 1 <= uVar34) {
          puVar17 = (undefined *)(ulong)(1 < *(ulong *)(puVar23 + 0x18));
          param_3 = puVar22;
          func_0x000101056600(puVar17,puVar22,1,puVar23,PTR__swift_bridgeObjectRelease_11034f258);
        }
        *(undefined **)(puVar17 + 0x10) = puVar22;
        *(undefined **)(puVar17 + uVar34 * 0x10 + 0x20) = puVar18;
        *(undefined **)(puVar17 + uVar34 * 0x10 + 0x28) = puVar20;
        puVar18 = puVar32;
        if (puVar32 == puVar31) goto LAB_101055514;
      }
      func_0x000107c61170(puVar22);
      func_0x000107c61170(puVar22);
      param_3 = puVar20;
      puVar18 = puVar18 + 1;
    } while (puVar32 != puVar31);
  }
LAB_101055514:
  func_0x000107c6142c(puVar25);
  puVar25 = puVar17;
  func_0x000100403a6c();
  func_0x000107c6142c(puVar17);
  lVar13 = lStack_88;
  lVar3 = lStack_100;
  uVar34 = *(ulong *)(lStack_100 + 0x10);
  puStack_3f0 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar34 == 0) {
LAB_101055814:
    func_0x000107c6142c(puVar25);
    puStack_1d0 = puStack_3f0;
    func_0x000101056278(puVar16);
    puVar16 = puStack_1d0;
    uVar34 = *(ulong *)(puStack_1d0 + 0x10);
    puVar25 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar34 != 0) {
      uVar29 = 0;
      puVar24 = (undefined8 *)(puStack_1d0 + 0x20);
      do {
        if (*(ulong *)(puVar16 + 0x10) <= uVar29) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x101055a00);
          (*pcVar14)();
        }
        uStack_1c8 = puVar24[1];
        puStack_1d0 = (undefined *)*puVar24;
        uStack_1b8 = puVar24[3];
        uStack_1c0 = puVar24[2];
        uStack_1a8 = puVar24[5];
        uStack_1b0 = puVar24[4];
        uStack_198 = puVar24[7];
        uStack_1a0 = puVar24[6];
        uStack_188 = puVar24[9];
        uStack_190 = puVar24[8];
        uStack_178 = puVar24[0xb];
        uStack_180 = puVar24[10];
        uStack_168 = puVar24[0xd];
        uStack_170 = puVar24[0xc];
        uStack_158 = puVar24[0xf];
        uStack_160 = puVar24[0xe];
        uStack_148 = puVar24[0x11];
        uStack_150 = puVar24[0x10];
        uStack_258 = puVar24[1];
        uStack_260 = *puVar24;
        uStack_248 = puVar24[3];
        uStack_250 = puVar24[2];
        uStack_238 = puVar24[5];
        uStack_240 = puVar24[4];
        uStack_228 = puVar24[7];
        uStack_230 = puVar24[6];
        uStack_218 = puVar24[9];
        uStack_220 = puVar24[8];
        uStack_208 = puVar24[0xb];
        uStack_210 = puVar24[10];
        uStack_1f8 = puVar24[0xd];
        uStack_200 = puVar24[0xc];
        uStack_1e8 = puVar24[0xf];
        uStack_1f0 = puVar24[0xe];
        uStack_1d8 = puVar24[0x11];
        uStack_1e0 = puVar24[0x10];
        func_0x000101054270(&puStack_1d0,&puStack_2f0);
        FUN_101055a10(&puStack_2f0,&uStack_260,&uStack_140);
        func_0x0001010542ac(&uStack_260);
        uVar12 = uStack_298;
        uVar11 = uStack_2a0;
        uVar10 = uStack_2a8;
        uVar9 = uStack_2b0;
        uVar8 = uStack_2b8;
        uVar7 = uStack_2c0;
        uVar6 = uStack_2c8;
        uVar5 = uStack_2d0;
        uVar21 = uStack_2d8;
        uVar19 = uStack_2e0;
        lVar3 = lStack_2e8;
        puVar30 = puStack_2f0;
        if (lStack_2e8 == 0) {
          FUN_1010568b0(&puStack_2f0,0x112d56ec8,&UNK_10d91da40);
        }
        else {
          puVar31 = puVar25;
          func_0x000107c61558();
          puVar17 = puVar25;
          if (((ulong)puVar31 & 1) == 0) {
            puVar17 = (undefined *)0x0;
            FUN_101055f50(0,*(long *)(puVar25 + 0x10) + 1,1,puVar25);
          }
          uVar33 = *(ulong *)(puVar17 + 0x10);
          puVar25 = puVar17;
          if (*(ulong *)(puVar17 + 0x18) >> 1 <= uVar33) {
            puVar25 = (undefined *)(ulong)(1 < *(ulong *)(puVar17 + 0x18));
            FUN_101055f50(puVar25,uVar33 + 1,1,puVar17);
          }
          *(ulong *)(puVar25 + 0x10) = uVar33 + 1;
          *(undefined8 *)(puVar25 + uVar33 * 0x60 + 0x38) = uVar21;
          *(undefined8 *)(puVar25 + uVar33 * 0x60 + 0x30) = uVar19;
          *(undefined8 *)(puVar25 + uVar33 * 0x60 + 0x68) = uVar10;
          *(undefined8 *)(puVar25 + uVar33 * 0x60 + 0x60) = uVar9;
          *(undefined8 *)(puVar25 + uVar33 * 0x60 + 0x78) = uVar12;
          *(undefined8 *)(puVar25 + uVar33 * 0x60 + 0x70) = uVar11;
          *(undefined8 *)(puVar25 + uVar33 * 0x60 + 0x48) = uVar6;
          *(undefined8 *)(puVar25 + uVar33 * 0x60 + 0x40) = uVar5;
          *(undefined8 *)(puVar25 + uVar33 * 0x60 + 0x58) = uVar8;
          *(undefined8 *)(puVar25 + uVar33 * 0x60 + 0x50) = uVar7;
          *(long *)(puVar25 + uVar33 * 0x60 + 0x28) = lVar3;
          *(undefined **)(puVar25 + uVar33 * 0x60 + 0x20) = puVar30;
        }
        uVar29 = uVar29 + 1;
        puVar24 = puVar24 + 0x12;
      } while (uVar34 != uVar29);
    }
    func_0x000107c6142c(puVar16);
    *param_1 = puVar25;
    return;
  }
  uVar29 = 0;
  lVar1 = lStack_100 + 0x20;
  lVar2 = lStack_88 + 0x38;
LAB_10105558c:
  do {
    if (*(ulong *)(lVar3 + 0x10) <= uVar29) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x1010559fc);
      (*pcVar14)();
    }
    puVar26 = (ulong *)(lVar1 + uVar29 * 0x90);
    uVar36 = puVar26[1];
    puVar17 = (undefined *)*puVar26;
    uStack_1b8 = puVar26[3];
    uStack_1c0 = puVar26[2];
    uStack_1a8 = puVar26[5];
    uStack_1b0 = puVar26[4];
    uStack_198 = puVar26[7];
    uStack_1a0 = puVar26[6];
    uStack_188 = puVar26[9];
    uStack_190 = puVar26[8];
    uStack_178 = puVar26[0xb];
    uStack_180 = puVar26[10];
    uStack_168 = puVar26[0xd];
    uStack_170 = puVar26[0xc];
    uStack_158 = puVar26[0xf];
    uStack_160 = puVar26[0xe];
    uStack_148 = puVar26[0x11];
    uStack_150 = puVar26[0x10];
    uVar29 = uVar29 + 1;
    puStack_1d0 = puVar17;
    uStack_1c8 = uVar36;
    func_0x000101054270(&puStack_1d0,&uStack_260);
    puVar30 = puVar17;
    uVar33 = uVar36;
    func_0x000107c5fadc();
    puVar31 = puVar30;
    func_0x000108ea5f00();
    func_0x000107c61180();
    func_0x000107c61170(puVar30);
    puVar30 = puVar31;
    func_0x000107c5faec();
    func_0x000107c61170(puVar31);
    if (*(long *)(lVar13 + 0x10) != 0) {
      func_0x000107c6068c(&uStack_260,*(undefined8 *)(lVar13 + 0x28));
      puVar24 = &uStack_260;
      func_0x000107c5fb58(puVar24,puVar30,uVar33);
      func_0x000107c606a8();
      uVar27 = -1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
      uVar28 = (ulong)puVar24 & (uVar27 ^ 0xffffffffffffffff);
      if ((*(ulong *)(lVar2 + (uVar28 >> 6) * 8) >> (uVar28 & 0x3f) & 1) != 0) {
        do {
          puVar26 = (ulong *)(*(long *)(lVar13 + 0x30) + uVar28 * 0x10);
          puVar31 = (undefined *)*puVar26;
          uVar4 = puVar26[1];
          if ((puVar31 == puVar30 && uVar4 == uVar33) ||
             (func_0x000107c605b8(puVar31,uVar4,puVar30,uVar33,0), ((ulong)puVar31 & 1) != 0)) {
            func_0x000107c6142c(uVar33);
            goto LAB_101055578;
          }
          uVar28 = uVar28 + 1 & ~uVar27;
        } while ((*(ulong *)(lVar2 + (uVar28 >> 6) * 8) >> (uVar28 & 0x3f) & 1) != 0);
      }
    }
    func_0x000107c6142c(uVar33);
    if (*(long *)(puVar25 + 0x10) != 0) {
      func_0x000107c6068c(&uStack_260,*(undefined8 *)(puVar25 + 0x28));
      puVar24 = &uStack_260;
      func_0x000107c5fb58(puVar24,puVar17,uVar36);
      func_0x000107c606a8();
      uVar33 = -1L << ((ulong)(byte)puVar25[0x20] & 0x3f);
      uVar27 = (ulong)puVar24 & (uVar33 ^ 0xffffffffffffffff);
      if ((*(ulong *)(puVar25 + (uVar27 >> 6) * 8 + 0x38) >> (uVar27 & 0x3f) & 1) != 0) {
        do {
          puVar26 = (ulong *)(*(long *)(puVar25 + 0x30) + uVar27 * 0x10);
          puVar30 = (undefined *)*puVar26;
          uVar28 = puVar26[1];
          if ((puVar30 == puVar17 && uVar28 == uVar36) ||
             (func_0x000107c605b8(puVar30,uVar28,puVar17,uVar36,0), ((ulong)puVar30 & 1) != 0))
          goto LAB_101055578;
          uVar27 = uVar27 + 1 & ~uVar33;
        } while ((*(ulong *)(puVar25 + (uVar27 >> 6) * 8 + 0x38) >> (uVar27 & 0x3f) & 1) != 0);
      }
    }
    puVar30 = puStack_3f0;
    func_0x000107c61558();
    puStack_2f0 = puStack_3f0;
    if (((ulong)puVar30 & 1) == 0) {
      FUN_10105637c(0,*(long *)(puStack_3f0 + 0x10) + 1,1);
    }
    uVar33 = *(ulong *)(puStack_2f0 + 0x10);
    if (*(ulong *)(puStack_2f0 + 0x18) >> 1 <= uVar33) {
      FUN_10105637c(1 < *(ulong *)(puStack_2f0 + 0x18),uVar33 + 1,1);
    }
    *(ulong *)(puStack_2f0 + 0x10) = uVar33 + 1;
    *(ulong *)(puStack_2f0 + uVar33 * 0x90 + 0x28) = uStack_1c8;
    *(undefined **)(puStack_2f0 + uVar33 * 0x90 + 0x20) = puStack_1d0;
    *(ulong *)(puStack_2f0 + uVar33 * 0x90 + 0x58) = uStack_198;
    *(ulong *)(puStack_2f0 + uVar33 * 0x90 + 0x50) = uStack_1a0;
    *(ulong *)(puStack_2f0 + uVar33 * 0x90 + 0x68) = uStack_188;
    *(ulong *)(puStack_2f0 + uVar33 * 0x90 + 0x60) = uStack_190;
    *(ulong *)(puStack_2f0 + uVar33 * 0x90 + 0x38) = uStack_1b8;
    *(ulong *)(puStack_2f0 + uVar33 * 0x90 + 0x30) = uStack_1c0;
    *(ulong *)(puStack_2f0 + uVar33 * 0x90 + 0x48) = uStack_1a8;
    *(ulong *)(puStack_2f0 + uVar33 * 0x90 + 0x40) = uStack_1b0;
    *(ulong *)(puStack_2f0 + uVar33 * 0x90 + 0x98) = uStack_158;
    *(ulong *)(puStack_2f0 + uVar33 * 0x90 + 0x90) = uStack_160;
    *(ulong *)(puStack_2f0 + uVar33 * 0x90 + 0xa8) = uStack_148;
    *(ulong *)(puStack_2f0 + uVar33 * 0x90 + 0xa0) = uStack_150;
    *(ulong *)(puStack_2f0 + uVar33 * 0x90 + 0x78) = uStack_178;
    *(ulong *)(puStack_2f0 + uVar33 * 0x90 + 0x70) = uStack_180;
    *(ulong *)(puStack_2f0 + uVar33 * 0x90 + 0x88) = uStack_168;
    *(ulong *)(puStack_2f0 + uVar33 * 0x90 + 0x80) = uStack_170;
    puStack_3f0 = puStack_2f0;
  } while (uVar29 != uVar34);
  goto LAB_101055814;
LAB_101055578:
  func_0x0001010542ac(&puStack_1d0);
  if (uVar29 == uVar34) goto LAB_101055814;
  goto LAB_10105558c;
}



/* Entry: 101055a10; end: 101055c6b;  */

void FUN_101055a10(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined1 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
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
  long lVar20;
  long lStack_70;
  long lStack_68;
  
  lVar1 = *param_2;
  uVar2 = param_2[1];
  lVar19 = param_2[3];
  lVar18 = param_2[2];
  lVar10 = param_2[3];
  lVar17 = param_2[9];
  lVar16 = param_2[8];
  lVar11 = param_2[9];
  lVar15 = param_2[0xb];
  lVar4 = param_2[0xc];
  uVar3 = *(undefined1 *)((long)param_2 + 0x61);
  lVar20 = param_2[0xf];
  puVar5 = PTR_PTR_1126b10c8;
  lVar7 = param_3;
  func_0x000107c61168();
  func_0x000107c5ab20((double)lVar20);
  func_0x000107c61180();
  puVar6 = puVar5;
  func_0x000107c5faec();
  func_0x000107c61170(puVar5);
  lVar13 = *(long *)(param_3 + 0xc0);
  lVar20 = lVar1;
  uVar8 = uVar2;
  lStack_68 = lVar13;
  func_0x000107c5fadc();
  lVar12 = lVar20;
  func_0x000108ea5f00();
  func_0x000107c61180();
  func_0x000107c61170(lVar20);
  lVar20 = lVar12;
  func_0x000107c5faec();
  func_0x000107c61170(lVar12);
  if (*(long *)(lVar13 + 0x10) != 0) {
    func_0x000107c61434(lVar13);
    uVar9 = uVar8;
    func_0x000100029284();
    if ((uVar9 & 1) != 0) {
      lVar20 = *(long *)(*(long *)(lVar13 + 0x38) + lVar20 * 8);
      FUN_1010568b0(&lStack_68,0x112d56ed8,&UNK_10d91da50);
      func_0x000107c6142c(uVar8);
      goto LAB_101055b5c;
    }
    FUN_1010568b0(&lStack_68,0x112d56ed8,&UNK_10d91da50);
  }
  func_0x000107c6142c(uVar8);
  lVar20 = 1;
LAB_101055b5c:
  lVar14 = *(long *)(param_3 + 200);
  lVar12 = lVar1;
  uVar8 = uVar2;
  lStack_70 = lVar14;
  func_0x000107c5fadc();
  lVar13 = lVar12;
  func_0x000108ea5f00();
  func_0x000107c61180();
  func_0x000107c61170(lVar12);
  lVar12 = lVar13;
  func_0x000107c5faec();
  func_0x000107c61170(lVar13);
  if (*(long *)(lVar14 + 0x10) == 0) {
    lVar12 = 0;
  }
  else {
    func_0x000107c61434(lVar14);
    uVar9 = uVar8;
    func_0x000100029284();
    if ((uVar9 & 1) == 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = *(long *)(*(long *)(lVar14 + 0x38) + lVar12 * 8);
    }
    FUN_1010568b0(&lStack_70,0x112d56ee0,&UNK_10d91da58);
  }
  func_0x000107c6142c(uVar8);
  *param_1 = lVar1;
  param_1[1] = uVar2;
  param_1[3] = lVar19;
  param_1[2] = lVar18;
  param_1[5] = lVar17;
  param_1[4] = lVar16;
  param_1[6] = lVar15;
  *(char *)(param_1 + 7) = (char)lVar4;
  *(undefined1 *)((long)param_1 + 0x39) = uVar3;
  param_1[8] = (long)puVar6;
  param_1[9] = lVar7;
  param_1[10] = lVar20;
  param_1[0xb] = lVar12;
  func_0x000107c61434(lVar11);
  func_0x000107c61174(lVar15);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(lVar10);
  return;
}



/* Entry: 101055c6c; end: 101055c8f;  */

void FUN_101055c6c(undefined1 *param_1,long param_2)

{
  *param_1 = *(undefined1 *)(param_2 + 0x51);
  return;
}



/* Entry: 101055c90; end: 101055ddb;  */

undefined8 FUN_101055c90(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  
  func_0x000103dbf46c();
  uVar1 = 0x112d56eb0;
  func_0x0001000285a8(0x112d56eb0,&UNK_10d91da38);
  pcVar2 = FUN_1010550b4;
  func_0x0001000bfde0(FUN_1010550b4,0,uVar1);
  func_0x000107c61574(param_1);
  func_0x000101055d6c();
  func_0x000104884898();
  func_0x000107c61574(pcVar2);
  return param_1;
}



/* Entry: 101055ddc; end: 101055e1b;  */

void FUN_101055ddc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d56ec0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d91dba8;
  func_0x000107c61520(&UNK_10d91dba8,&UNK_11037ad50);
  puRam0000000112d56ec0 = puVar1;
  return;
}



/* Entry: 101055e1c; end: 101055f43;  */

ulong FUN_101055e1c(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101055f44);
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
  FUN_10105606c(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101055f40);
      (*pcVar1)();
    }
    FUN_101056180(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 101055f44; end: 101055f4f;  */

undefined * FUN_101055f44(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  puVar2 = PTR__swift_bridgeObjectRelease_11034f258;
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101056600);
        (*pcVar3)();
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
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar4 = (undefined *)0x112d56ee8;
    func_0x0001000285a8(0x112d56ee8,&UNK_10d91da60);
    func_0x000107c613fc();
    puVar5 = puVar4;
    func_0x000107c610a4();
    *(ulong *)(puVar4 + 0x10) = uVar7;
    *(long *)(puVar4 + 0x18) = ((long)(puVar5 + -0x20) / 0x90) * 2;
  }
  puVar5 = puVar4 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar5,puVar1,uVar7,&UNK_11037b170);
  }
  else {
    if (puVar4 != param_4 || puVar1 + uVar7 * 0x90 <= puVar5) {
      func_0x000107c610b8(puVar5,puVar1,uVar7 * 0x90);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*(code *)puVar2)(param_4);
  return puVar4;
}



/* Entry: 101055f50; end: 10105606b;  */

undefined * FUN_101055f50(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10105606c);
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
    puVar3 = (undefined *)0x112d56ed0;
    func_0x0001000285a8(0x112d56ed0,&UNK_10d91da48);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x60) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar4,puVar1,uVar6,&UNK_11037ad50);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x60 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6 * 0x60);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 10105606c; end: 10105617f;  */

undefined * FUN_10105606c(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    func_0x000101064d4c();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 101056180; end: 10105637b;  */

long FUN_101056180(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101056274);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101056278);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_10105686c(0);
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
      FUN_10105686c(0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101056270);
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



/* Entry: 10105637c; end: 10105639f;  */

void FUN_10105637c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1010564d0();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1010563a0; end: 1010564c3;  */

undefined * FUN_1010563a0(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1010564c4);
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
    func_0x000101064d4c();
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
    FUN_10105686c(0);
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



/* Entry: 1010564c4; end: 1010564cf;  */

undefined * FUN_1010564c4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  puVar2 = PTR__swift_release_11034f4c0;
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101056600);
        (*pcVar3)();
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
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar4 = (undefined *)0x112d56ee8;
    func_0x0001000285a8(0x112d56ee8,&UNK_10d91da60);
    func_0x000107c613fc();
    puVar5 = puVar4;
    func_0x000107c610a4();
    *(ulong *)(puVar4 + 0x10) = uVar7;
    *(long *)(puVar4 + 0x18) = ((long)(puVar5 + -0x20) / 0x90) * 2;
  }
  puVar5 = puVar4 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar5,puVar1,uVar7,&UNK_11037b170);
  }
  else {
    if (puVar4 != param_4 || puVar1 + uVar7 * 0x90 <= puVar5) {
      func_0x000107c610b8(puVar5,puVar1,uVar7 * 0x90);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*(code *)puVar2)(param_4);
  return puVar4;
}



/* Entry: 1010564d0; end: 101056713;  */

undefined *
FUN_1010564d0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101056600);
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
    puVar3 = (undefined *)0x112d56ee8;
    func_0x0001000285a8(0x112d56ee8,&UNK_10d91da60);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x90) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar4,puVar1,uVar6,&UNK_11037b170);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x90 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6 * 0x90);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*param_5)(param_4);
  return puVar3;
}



/* Entry: 101056714; end: 10105686b;  */

ulong FUN_101056714(undefined8 *param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  if (param_3 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_3 & 0xffffffffffffff8;
    if ((param_3 & 0x8000000000000000) != 0) {
      uVar5 = param_3;
    }
    func_0x000107c60480();
  }
  if (uVar5 != 0) {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10105686c);
      (*pcVar1)();
    }
    if (param_3 >> 0x3e == 0) {
      lVar6 = *(long *)((param_3 & 0xffffffffffffff8) + 0x10);
      if (param_2 < lVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101056860);
        (*pcVar1)();
      }
      uVar2 = 0;
      FUN_10105686c(0);
      func_0x000107c6140c(param_1,(param_3 & 0xffffffffffffff8) + 0x20,lVar6,uVar2);
    }
    else {
      uVar7 = param_3 & 0xffffffffffffff8;
      if ((param_3 & 0x8000000000000000) != 0) {
        uVar7 = param_3;
      }
      func_0x000107c60480();
      if (param_2 < (long)uVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101056864);
        (*pcVar1)();
      }
      if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101056868);
        (*pcVar1)();
      }
      if ((param_3 & 0xc000000000000001) == 0) {
        uVar2 = *(undefined8 *)(param_3 + 0x20);
        *param_1 = uVar2;
        lVar6 = uVar5 - 1;
        if (lVar6 != 0) {
          uVar4 = uVar2;
          puVar8 = (undefined8 *)(param_3 + 0x28);
          do {
            param_1 = param_1 + 1;
            uVar2 = *puVar8;
            *param_1 = uVar2;
            func_0x000107c61174(uVar4);
            lVar6 = lVar6 + -1;
            uVar4 = uVar2;
            puVar8 = puVar8 + 1;
          } while (lVar6 != 0);
        }
        func_0x000107c61174(uVar2);
      }
      else {
        uVar7 = 0;
        do {
          uVar3 = uVar7;
          FUN_101059128(uVar7,param_3);
          param_1[uVar7] = uVar3;
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
      }
    }
  }
  return param_3;
}



/* Entry: 10105686c; end: 1010568af;  */

void FUN_10105686c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d56e50 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126cc4e0;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d56e50 = puVar1;
  return;
}



/* Entry: 1010568b0; end: 10105692b;  */

undefined8 FUN_1010568b0(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10105692c; end: 101056937;  */

void FUN_10105692c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = unaff_x20[1];
  *param_1 = *unaff_x20;
  param_1[1] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)();
  return;
}



/* Entry: 101056938; end: 10105693f; -[_TtC19SpotlightManagement23SingleScreenUIContainer pageViewName] */

undefined8 FUN_101056938(void)

{
  return 0x11b;
}



/* Entry: 101056940; end: 101056983; -[_TtC19SpotlightManagement23SingleScreenUIContainer defaultProjectNameV2] */

void FUN_101056940(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000104070474();
  uVar2 = *param_1;
  uVar1 = param_1[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 101056984; end: 101056a3b; -[_TtC19SpotlightManagement23SingleScreenUIContainer initWithNibName:bundle:] */

undefined1 * FUN_101056984(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar2 = &uStack_50;
  uVar1 = param_1;
  func_0x000107c614f0();
  if (param_3 == 0) {
    func_0x000107c61174(param_4);
  }
  else {
    func_0x000107c5faec(param_3);
    func_0x000107c61174(param_4);
    func_0x000107c5fadc(param_3,param_2);
    func_0x000107c6142c(param_2);
  }
  uStack_50 = param_1;
  uStack_48 = uVar1;
  func_0x000107c61154(&uStack_50,PTR_s_initWithNibName_bundle__1125e9850,param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar2;
}



/* Entry: 101056a3c; end: 101056abb; -[_TtC19SpotlightManagement23SingleScreenUIContainer initWithCoder:] */

undefined1 * FUN_101056a3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = &uStack_40;
  uVar2 = param_1;
  func_0x000107c614f0();
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



/* Entry: 101056abc; end: 101056f33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_101056abc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  long unaff_x20;
  undefined1 auStack_90 [8];
  
  func_0x000107c610f8();
  lVar1 = _DAT_112d56ef0;
  lVar3 = 0x112d56d60;
  func_0x0001000285a8(0x112d56d60,&UNK_10d91d7c0);
  func_0x000107c613fc();
  func_0x000102100730();
  *(long *)(unaff_x20 + lVar1) = lVar3;
  FUN_101056f34();
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar4 = lVar3;
  func_0x000107c5de64();
  func_0x000107c61180();
  lVar1 = _DAT_112d56ef8;
  if (lVar4 != 0) {
    puVar5 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
    func_0x000107c4c194();
    func_0x000107c61180();
    func_0x000107c3ec60();
    func_0x000107c61170(puVar5);
    func_0x000107c54b80(param_1,param_2,param_3,param_4,lVar4);
    func_0x000107c61170(lVar4);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    lVar3 = _DAT_112d56f00;
    func_0x000107c61614(unaff_x20 + _DAT_112d56f00,0);
    lVar1 = _DAT_112d56f08;
    uVar6 = 0;
    func_0x0001000c6560();
    func_0x000107c613fc();
    func_0x0001000c6580();
    *(undefined8 *)(unaff_x20 + lVar1) = uVar6;
    func_0x000107c61614(unaff_x20 + _DAT_112d56f10,0);
    lVar1 = _DAT_112d56f18;
    uVar6 = 0;
    FUN_101054f54();
    func_0x000107c610f8();
    func_0x000107c453e4();
    *(undefined8 *)(unaff_x20 + lVar1) = uVar6;
    *(undefined8 *)(unaff_x20 + _DAT_112d56f20) = param_5;
    *(undefined8 *)(unaff_x20 + _DAT_112d56f28) = param_6;
    *(undefined8 *)(unaff_x20 + _DAT_112d56f30) = param_7;
    func_0x000107c61604(unaff_x20 + lVar3,param_8);
    *(undefined8 *)(unaff_x20 + _DAT_112d56f38) = param_9;
    puVar5 = PTR_s_init_1125d9248;
    func_0x000107c6157c(param_5);
    func_0x000107c615f0(param_6);
    func_0x000107c615f0(param_7);
    puVar7 = auStack_90;
    func_0x000107c61154(puVar7,puVar5);
    func_0x000107c61574(param_5);
    func_0x000107c615e8(param_6);
    func_0x000107c615e8(param_7);
    func_0x000107c615e8(param_8);
    return puVar7;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101056cf8);
  (*pcVar2)();
}



/* Entry: 101056f34; end: 101056f53;  */

void FUN_101056f34(void)

{
  func_0x000107c61168(&PTR_PTR_1127aaed0);
  return;
}



/* Entry: 101056f54; end: 10105719f;  */

/* WARNING: Possible PIC construction at 0x0001010570c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010570cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101056f54(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined *puVar2;
  code *pcVar3;
  code *pcVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112d56ef8);
  func_0x000107c5677c(uVar6,param_2,0);
  func_0x000107c53dec(uVar6);
  func_0x000107c5676c(uVar6);
  func_0x000107c3e2c0(*(undefined8 *)(unaff_x20 + _DAT_112d56f28));
  FUN_1010571a0();
  uVar7 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112d56f18) + _DAT_112d56e60);
  func_0x000107c6157c(uVar7);
  func_0x000103dbf524();
  func_0x000107c61574(uVar7);
  func_0x000103dbf46c();
  uVar6 = 0x101055c78;
  func_0x0001000bfde0(0x101055c78,0,PTR___sSbN_11034dd40);
  func_0x000107c61574(uVar7);
  plVar1 = (long *)PTR___sSbSQsWP_11034dd50;
  func_0x000104884898();
  func_0x000107c61574(uVar6);
  puVar2 = &UNK_11037ab20;
  func_0x000107c613fc(&UNK_11037ab20,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  pcVar3 = FUN_101057344;
  puVar5 = puVar2;
  (**(code **)(*plVar1 + 0x60))(FUN_101057344);
  func_0x000107c61574(plVar1);
  func_0x000107c61574(puVar2);
  pcVar4 = pcVar3;
  func_0x000107c614f0(pcVar3);
  (**(code **)(puVar5 + 0x10))(*(undefined8 *)(unaff_x20 + _DAT_112d56f08),pcVar4,puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(pcVar3);
  return;
}



/* Entry: 1010571a0; end: 1010572e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010571a0(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [24];
  undefined8 auStack_58 [3];
  undefined8 uStack_40;
  undefined **ppuStack_38;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112d56f30);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112d56ef0);
  FUN_101064470(0);
  func_0x000107c610f8();
  func_0x000107c615f0(lVar2);
  func_0x000107c6157c(uVar4);
  FUN_101063034(lVar2,uVar4);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112d56f20);
  uVar4 = *(undefined8 *)(lVar2 + _DAT_112d572d0);
  func_0x000107c6157c(uVar4);
  func_0x000103dbf524();
  func_0x000107c61574(uVar4);
  uVar4 = 0;
  FUN_10105df1c();
  lVar1 = _DAT_112d572c8;
  ppuStack_38 = &PTR_DAT_11037aaf0;
  auStack_58[0] = uVar3;
  uStack_40 = uVar4;
  func_0x000107c61428(lVar2 + _DAT_112d572c8,auStack_70,0x21,0);
  func_0x000107c6157c(uVar3);
  FUN_101057ebc(auStack_58,lVar2 + lVar1);
  func_0x000107c614a8(auStack_70);
  FUN_101063418();
  func_0x000101057f0c(auStack_58);
  func_0x000107c5677c(lVar2);
  func_0x000107c3e2c0(*(undefined8 *)(unaff_x20 + _DAT_112d56ef8));
  func_0x000107c61604(unaff_x20 + _DAT_112d56f10,lVar2);
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 1010572e4; end: 101057343;  */

void FUN_1010572e4(char *param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  if (*param_1 == '\x01') {
    func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 != 0) {
      FUN_10105738c();
      func_0x000107c61170(param_2);
    }
  }
  return;
}



/* Entry: 101057344; end: 10105734b;  */

void FUN_101057344(char *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  if (*param_1 == '\x01') {
    func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
    lVar1 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar1 != 0) {
      FUN_10105738c();
      func_0x000107c61170(lVar1);
    }
  }
  return;
}



/* Entry: 10105734c; end: 10105738b;  */

void FUN_10105734c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d56f40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d91dce0;
  func_0x000107c61520(&UNK_10d91dce0,&UNK_11037afe0);
  puRam0000000112d56f40 = puVar1;
  return;
}



/* Entry: 10105738c; end: 101057523;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10105738c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  lVar3 = _DAT_112d56f10;
  ppuVar4 = &puStack_60;
  ppuVar6 = &puStack_60;
  lVar1 = unaff_x20 + _DAT_112d56f10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c4f078();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      func_0x000107c61170(lVar2);
      lVar3 = unaff_x20 + lVar3;
      func_0x000107c61618();
      if (lVar3 == 0) {
        return;
      }
      puVar5 = &UNK_11037aba8;
      func_0x000107c613fc(&UNK_11037aba8,0x18,7);
      *(long *)(puVar5 + 0x10) = unaff_x20;
      uStack_40 = 0x101057eb4;
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0x42000000;
      puStack_50 = &UNK_1000f6b44;
      puStack_48 = &UNK_11037abc0;
      puStack_38 = puVar5;
      func_0x000107c60bc4(&puStack_60);
      puVar5 = puStack_38;
      func_0x000107c61174();
      func_0x000107c61574(puVar5);
      func_0x000107c420a8(lVar3);
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c61170(lVar3);
      return;
    }
  }
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d56f28);
  puVar5 = &UNK_11037ab20;
  func_0x000107c613fc(&UNK_11037ab20,0x18,7);
  func_0x000107c61614(puVar5 + 0x10);
  uStack_40 = 0x101057eac;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_11037ab70;
  puStack_38 = puVar5;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c41864(uVar7);
  func_0x000107c60bd0(ppuVar6);
  return;
}



/* Entry: 101057524; end: 10105789b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101057524(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_78 [24];
  
  lVar8 = *param_1;
  lVar1 = param_1[1];
  lVar7 = param_1[2];
  lVar2 = param_1[3];
  lVar11 = param_1[4];
  lVar9 = param_1[5];
  bVar4 = *(byte *)(param_1 + 8);
  if (bVar4 < 3) {
    lVar12 = param_2 + 0x10;
    if (bVar4 == 0) {
      func_0x000107c61428(lVar12,auStack_78,0,0);
      param_2 = param_2 + 0x10;
      func_0x000107c61618();
      if (param_2 == 0) {
        return;
      }
      FUN_10105449c(*(undefined8 *)(param_2 + _DAT_112d56ef8),lVar8,lVar1,lVar7,lVar2,lVar11,lVar9);
      goto LAB_101057874;
    }
    if (bVar4 != 1) {
      func_0x000107c61428(lVar12,auStack_78,0,0);
      lVar11 = param_2 + 0x10;
      func_0x000107c61618();
      if (lVar11 == 0) {
        return;
      }
      lVar9 = lVar11 + _DAT_112d56f10;
      func_0x000107c61618();
      param_2 = lVar11;
      if (lVar9 != 0) {
        puVar10 = PTR_PTR_1126aead8;
        func_0x000107c610f8(PTR_PTR_1126aead8);
        func_0x000107c4807c();
        func_0x000103b8cbc4(0);
        func_0x000107c610f8();
        func_0x000107c61434(lVar2);
        func_0x000107c61174(puVar10);
        func_0x000107c61174();
        func_0x000107c61434(lVar1);
        func_0x000103b8c8ac(lVar8,lVar1,lVar7,lVar2,0,0,puVar10,lVar11);
        func_0x000107c42c1c(*(undefined8 *)(param_2 + _DAT_112d56f38));
        func_0x000107c61170(lVar9);
        func_0x000107c61170(puVar10);
        func_0x000107c61170(lVar8);
      }
      goto LAB_101057874;
    }
    func_0x000107c61428(lVar12,auStack_78,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 == 0) {
      return;
    }
    lVar11 = param_2 + _DAT_112d56f00;
    func_0x000107c61618();
    if (lVar11 == 0) goto LAB_101057874;
    func_0x000107c5fadc(lVar7,lVar2);
    func_0x000107c5fadc(lVar8,lVar1);
    func_0x000107c5b8f4(lVar11);
    func_0x000107c615e8(lVar11);
    func_0x000107c61170(lVar7);
    lVar5 = lVar8;
  }
  else {
    if (bVar4 == 3) {
      func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
      param_2 = param_2 + 0x10;
      func_0x000107c61618();
      if (param_2 == 0) {
        return;
      }
      FUN_1010578a4(lVar8,lVar1);
      goto LAB_101057874;
    }
    if (bVar4 != 4) {
      return;
    }
    lVar12 = param_1[6];
    lVar3 = param_1[7];
    func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 == 0) {
      return;
    }
    lVar5 = param_2 + _DAT_112d56f10;
    func_0x000107c61618();
    if (lVar5 == 0) goto LAB_101057874;
    lVar6 = param_2 + _DAT_112d56f00;
    func_0x000107c61618();
    if (lVar6 == 0) goto LAB_101057870;
    func_0x000107c5fadc(lVar7,lVar2);
    func_0x000107c5fadc(lVar8,lVar1);
    if (lVar9 == 0) {
      lVar11 = 0;
      if (lVar3 == 0) goto LAB_101057824;
LAB_101057694:
      func_0x000107c5fadc(lVar12,lVar3);
    }
    else {
      func_0x000107c5fadc(lVar11,lVar9);
      if (lVar3 != 0) goto LAB_101057694;
LAB_101057824:
      lVar12 = 0;
    }
    func_0x000107c5b8e8(lVar6);
    func_0x000107c615e8(lVar6);
    func_0x000107c61170(lVar7);
    func_0x000107c61170(lVar8);
    func_0x000107c61170(lVar11);
    func_0x000107c61170(lVar12);
  }
LAB_101057870:
  func_0x000107c61170(lVar5);
LAB_101057874:
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 10105789c; end: 1010578a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10105789c(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  long unaff_x20;
  long lVar12;
  long lVar13;
  undefined1 auStack_78 [24];
  
  lVar8 = *param_1;
  lVar1 = param_1[1];
  lVar7 = param_1[2];
  lVar2 = param_1[3];
  lVar12 = param_1[4];
  lVar10 = param_1[5];
  bVar4 = *(byte *)(param_1 + 8);
  if (bVar4 < 3) {
    lVar9 = unaff_x20 + 0x10;
    if (bVar4 == 0) {
      func_0x000107c61428(lVar9,auStack_78,0,0);
      lVar9 = unaff_x20 + 0x10;
      func_0x000107c61618();
      if (lVar9 == 0) {
        return;
      }
      FUN_10105449c(*(undefined8 *)(lVar9 + _DAT_112d56ef8),lVar8,lVar1,lVar7,lVar2,lVar12,lVar10);
      goto LAB_101057874;
    }
    if (bVar4 != 1) {
      func_0x000107c61428(lVar9,auStack_78,0,0);
      lVar12 = unaff_x20 + 0x10;
      func_0x000107c61618();
      if (lVar12 == 0) {
        return;
      }
      lVar10 = lVar12 + _DAT_112d56f10;
      func_0x000107c61618();
      lVar9 = lVar12;
      if (lVar10 != 0) {
        puVar11 = PTR_PTR_1126aead8;
        func_0x000107c610f8(PTR_PTR_1126aead8);
        func_0x000107c4807c();
        func_0x000103b8cbc4(0);
        func_0x000107c610f8();
        func_0x000107c61434(lVar2);
        func_0x000107c61174(puVar11);
        func_0x000107c61174();
        func_0x000107c61434(lVar1);
        func_0x000103b8c8ac(lVar8,lVar1,lVar7,lVar2,0,0,puVar11,lVar12);
        func_0x000107c42c1c(*(undefined8 *)(lVar9 + _DAT_112d56f38));
        func_0x000107c61170(lVar10);
        func_0x000107c61170(puVar11);
        func_0x000107c61170(lVar8);
      }
      goto LAB_101057874;
    }
    func_0x000107c61428(lVar9,auStack_78,0,0);
    lVar9 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar9 == 0) {
      return;
    }
    lVar12 = lVar9 + _DAT_112d56f00;
    func_0x000107c61618();
    if (lVar12 == 0) goto LAB_101057874;
    func_0x000107c5fadc(lVar7,lVar2);
    func_0x000107c5fadc(lVar8,lVar1);
    func_0x000107c5b8f4(lVar12);
    func_0x000107c615e8(lVar12);
    func_0x000107c61170(lVar7);
    lVar5 = lVar8;
  }
  else {
    if (bVar4 == 3) {
      func_0x000107c61428(unaff_x20 + 0x10,auStack_78,0,0);
      lVar9 = unaff_x20 + 0x10;
      func_0x000107c61618();
      if (lVar9 == 0) {
        return;
      }
      FUN_1010578a4(lVar8,lVar1);
      goto LAB_101057874;
    }
    if (bVar4 != 4) {
      return;
    }
    lVar13 = param_1[6];
    lVar3 = param_1[7];
    func_0x000107c61428(unaff_x20 + 0x10,auStack_78,0,0);
    lVar9 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar9 == 0) {
      return;
    }
    lVar5 = lVar9 + _DAT_112d56f10;
    func_0x000107c61618();
    if (lVar5 == 0) goto LAB_101057874;
    lVar6 = lVar9 + _DAT_112d56f00;
    func_0x000107c61618();
    if (lVar6 == 0) goto LAB_101057870;
    func_0x000107c5fadc(lVar7,lVar2);
    func_0x000107c5fadc(lVar8,lVar1);
    if (lVar10 == 0) {
      lVar12 = 0;
      if (lVar3 == 0) goto LAB_101057824;
LAB_101057694:
      func_0x000107c5fadc(lVar13,lVar3);
    }
    else {
      func_0x000107c5fadc(lVar12,lVar10);
      if (lVar3 != 0) goto LAB_101057694;
LAB_101057824:
      lVar13 = 0;
    }
    func_0x000107c5b8e8(lVar6);
    func_0x000107c615e8(lVar6);
    func_0x000107c61170(lVar7);
    func_0x000107c61170(lVar8);
    func_0x000107c61170(lVar12);
    func_0x000107c61170(lVar13);
  }
LAB_101057870:
  func_0x000107c61170(lVar5);
LAB_101057874:
  func_0x000107c61170(lVar9);
  return;
}



/* Entry: 1010578a4; end: 101057a57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010578a4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  ppuVar5 = &puStack_80;
  ppuVar6 = &puStack_80;
  lVar1 = unaff_x20 + _DAT_112d56f10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = unaff_x20 + _DAT_112d56f00;
    func_0x000107c61618();
    if (lVar2 != 0) {
      lVar3 = param_1;
      func_0x000107c5fadc(param_1,param_2);
      FUN_101062a4c(param_1,param_2);
      if (param_1 == 0) {
        param_1 = lVar1;
        func_0x000107c5de64(lVar1);
        func_0x000107c61180();
      }
      puVar4 = &UNK_11037ab20;
      func_0x000107c613fc(&UNK_11037ab20,0x18,7);
      func_0x000107c61614(puVar4 + 0x10);
      pcStack_60 = FUN_101057e88;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_1000f6b44;
      puStack_68 = &UNK_11037ab48;
      puStack_58 = puVar4;
      func_0x000107c60bc4(&puStack_80);
      func_0x000107c61574(puStack_58);
      func_0x000107c5b8f0(lVar2);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(param_1);
    }
    puStack_80 = (undefined *)0x2;
    puStack_70 = (undefined *)0x0;
    uStack_78 = 0;
    pcStack_60 = (code *)0x0;
    puStack_68 = (undefined *)0x0;
    uStack_50 = 0;
    puStack_58 = (undefined *)0x0;
    uStack_48 = 0xa0;
    func_0x0001000285a8(0x112d56fc0,&UNK_10d91dad8);
    func_0x000100854cb0(&puStack_80);
    func_0x000103dbf524();
    func_0x000107c61574(ppuVar6);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 101057a58; end: 101057bd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101057a58(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112d56f20);
    func_0x000107c6157c(uVar2);
    func_0x000107c61170(param_1);
    uStack_88 = 3;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_50 = 0xa0;
    func_0x0001000285a8(0x112d56fc0,&UNK_10d91dad8);
    puVar1 = &uStack_88;
    func_0x000100854cb0(puVar1);
    func_0x000103dbf524();
    func_0x000107c61574(puVar1);
    func_0x000107c61574(uVar2);
  }
  return;
}



/* Entry: 101057bd8; end: 101057c5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101057bd8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112d56f00;
    func_0x000107c61618();
    if (lVar1 != 0) {
      func_0x000107c5b8ec();
      func_0x000107c615e8(lVar1);
    }
    func_0x000107c61604(param_1 + _DAT_112d56f10,0);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 101057c60; end: 101057c8b; -[_TtC19SpotlightManagement25SpotlightManagementRouter init] */

void FUN_101057c60(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpotlightManagement.SpotlightManagementRouter",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101057c8c);
  (*pcVar1)();
}



/* Entry: 101057c8c; end: 101057c8f;  */

void FUN_101057c8c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101057c90; end: 101057cc3;  */

void FUN_101057c90(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101057cc4; end: 101057d9b; -[_TtC19SpotlightManagement25SpotlightManagementRouter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101057d10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101057d60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101057d14) */
/* WARNING: Removing unreachable block (ram,0x000101057d64) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101057cc4(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d56f20));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d56ef0));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d56f28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d56ef8));
  return;
}



/* Entry: 101057d9c; end: 101057dbb;  */

void FUN_101057d9c(void)

{
  func_0x000107c61168(&PTR_PTR_1127aaf80);
  return;
}



/* Entry: 101057dbc; end: 101057e33; -[_TtC19SpotlightManagement25SpotlightManagementRouter didCompleteSaveStoryScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101057dbc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112d56f38);
    func_0x000107c61174();
    func_0x000107c61174(param_3);
    func_0x000107c4ffec(uVar1,param_2,param_3);
    func_0x000107c61180();
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
    return;
  }
  return;
}



/* Entry: 101057e34; end: 101057e3f;  */

undefined * FUN_101057e34(void)

{
  return PTR___sSSSHsWP_11034da90;
}



/* Entry: 101057e40; end: 101057e87;  */

void FUN_101057e40(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101055ddc();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101057e88; end: 101057ebb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101057e88(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + _DAT_112d56f20);
    func_0x000107c6157c(uVar3);
    func_0x000107c61170(lVar1);
    uStack_88 = 3;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_50 = 0xa0;
    func_0x0001000285a8(0x112d56fc0,&UNK_10d91dad8);
    puVar2 = &uStack_88;
    func_0x000100854cb0(puVar2);
    func_0x000103dbf524();
    func_0x000107c61574(puVar2);
    func_0x000107c61574(uVar3);
  }
  return;
}



/* Entry: 101057ebc; end: 101057f53;  */

undefined8 FUN_101057ebc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112d56fc8;
  func_0x0001000285a8(0x112d56fc8,&UNK_10d91dae0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x18))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 101057f54; end: 101058063;  */

void FUN_101057f54(long param_1,long param_2)

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



/* Entry: 101058064; end: 1010580a3;  */

void FUN_101058064(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d56fd0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d91db58;
  func_0x000107c61520(&UNK_10d91db58,&UNK_11037aca0);
  puRam0000000112d56fd0 = puVar1;
  return;
}



/* Entry: 1010580a4; end: 1010580ab;  */

undefined8 FUN_1010580a4(void)

{
  return 1;
}



/* Entry: 1010580ac; end: 1010581b7;  */

void FUN_1010580ac(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 1010581b8; end: 101058243;  */

undefined8 * FUN_1010581b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  uVar4 = param_2[6];
  param_1[6] = uVar4;
  *(undefined2 *)(param_1 + 7) = *(undefined2 *)(param_2 + 7);
  uVar3 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar3;
  uVar5 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar5;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61174(uVar4);
  func_0x000107c61434(uVar3);
  return param_1;
}



/* Entry: 101058244; end: 101058327;  */

undefined8 * FUN_101058244(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[4] = param_2[4];
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  *(undefined1 *)((long)param_1 + 0x39) = *(undefined1 *)((long)param_2 + 0x39);
  param_1[8] = param_2[8];
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  return param_1;
}



/* Entry: 101058328; end: 1010583b3;  */

undefined8 * FUN_101058328(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  func_0x000107c6142c(uVar1);
  param_1[4] = param_2[4];
  func_0x000107c6142c(param_1[5]);
  uVar2 = param_1[6];
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  func_0x000107c61170(uVar2);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  *(undefined1 *)((long)param_1 + 0x39) = *(undefined1 *)((long)param_2 + 0x39);
  uVar2 = param_2[9];
  uVar1 = param_1[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar2;
  return param_1;
}



/* Entry: 1010583b4; end: 101058463;  */

int FUN_1010583b4(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x18] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101058464; end: 1010584bb;  */

uint FUN_101058464(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_a8 = param_1[5];
  uStack_b0 = param_1[4];
  uStack_98 = param_1[7];
  uStack_a0 = param_1[6];
  uStack_88 = param_1[9];
  uStack_90 = param_1[8];
  uStack_78 = param_1[0xb];
  uStack_80 = param_1[10];
  uStack_c8 = param_1[1];
  uStack_d0 = *param_1;
  uStack_b8 = param_1[3];
  uStack_c0 = param_1[2];
  uStack_48 = param_2[5];
  uStack_50 = param_2[4];
  uStack_38 = param_2[7];
  uStack_40 = param_2[6];
  uStack_28 = param_2[9];
  uStack_30 = param_2[8];
  uStack_18 = param_2[0xb];
  uStack_20 = param_2[10];
  uStack_68 = param_2[1];
  uStack_70 = *param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  FUN_1010584bc(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 1010584bc; end: 10105861b;  */

bool FUN_1010584bc(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *param_1;
  if ((uVar1 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar1 & 1) != 0))
  {
    uVar1 = param_2[3];
    if (param_1[3] == 0) {
      if (uVar1 != 0) {
        return false;
      }
    }
    else {
      if (uVar1 == 0) {
        return false;
      }
      uVar2 = param_1[2];
      if ((uVar2 != param_2[2] || param_1[3] != uVar1) && (func_0x000107c605b8(), (uVar2 & 1) == 0))
      {
        return false;
      }
    }
    uVar1 = param_2[5];
    if (param_1[5] == 0) {
      if (uVar1 != 0) {
        return false;
      }
    }
    else {
      if (uVar1 == 0) {
        return false;
      }
      uVar2 = param_1[4];
      if (((uVar2 != param_2[4]) || (param_1[5] != uVar1)) &&
         (func_0x000107c605b8(), (uVar2 & 1) == 0)) {
        return false;
      }
    }
    func_0x0001007bbbf8(0);
    uVar1 = param_1[6];
    func_0x000107c60118(uVar1,param_2[6]);
    if ((((uVar1 & 1) != 0) && ((((byte)param_1[7] ^ (byte)param_2[7]) & 1) == 0)) &&
       (((*(byte *)((long)param_1 + 0x39) ^ *(byte *)((long)param_2 + 0x39)) & 1) == 0)) {
      uVar1 = param_2[9];
      if (param_1[9] == 0) {
        if (uVar1 != 0) {
          return false;
        }
      }
      else {
        if (uVar1 == 0) {
          return false;
        }
        uVar2 = param_1[8];
        if (((uVar2 != param_2[8]) || (param_1[9] != uVar1)) &&
           (func_0x000107c605b8(), (uVar2 & 1) == 0)) {
          return false;
        }
      }
      if (param_1[10] == param_2[10]) {
        return param_1[0xb] == param_2[0xb];
      }
    }
  }
  return false;
}



/* Entry: 10105861c; end: 10105862f;  */

bool FUN_10105861c(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101058630; end: 1010586db;  */

void FUN_101058630(void)

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



/* Entry: 1010586dc; end: 101058783;  */

undefined8 FUN_1010586dc(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  undefined1 auStack_200 [144];
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  double dStack_f0;
  double dStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  double dStack_60;
  double dStack_58;
  
  uVar4 = *param_1;
  uVar5 = param_1[2];
  uVar10 = param_1[3];
  uVar2 = param_1[4];
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  uVar7 = param_2[4];
  if (((uVar4 != *param_2 || param_1[1] != param_2[1]) && (func_0x000107c605b8(), (uVar4 & 1) == 0))
     || ((uVar5 != uVar1 || uVar10 != uVar3 &&
         (func_0x000107c605b8(uVar5,uVar10,uVar1,uVar3,0), (uVar5 & 1) == 0)))) {
    return 0;
  }
  lVar6 = *(long *)(uVar2 + 0x10);
  if (lVar6 != *(long *)(uVar7 + 0x10)) {
    return 0;
  }
  if ((lVar6 == 0) || (uVar2 == uVar7)) {
    return 1;
  }
  puVar8 = (ulong *)(uVar2 + 0x20);
  puVar9 = (ulong *)(uVar7 + 0x20);
  while( true ) {
    lVar6 = lVar6 + -1;
    uStack_108 = puVar8[0xd];
    uStack_110 = puVar8[0xc];
    uStack_f8 = puVar8[0xf];
    uStack_100 = puVar8[0xe];
    dStack_e8 = (double)puVar8[0x11];
    dStack_f0 = (double)puVar8[0x10];
    uStack_148 = puVar8[5];
    uStack_150 = puVar8[4];
    uStack_138 = puVar8[7];
    uStack_140 = puVar8[6];
    uStack_128 = puVar8[9];
    uStack_130 = puVar8[8];
    uStack_118 = puVar8[0xb];
    uStack_120 = puVar8[10];
    uStack_168 = puVar8[1];
    uVar10 = *puVar8;
    uStack_158 = puVar8[3];
    uStack_160 = puVar8[2];
    uStack_78 = puVar9[0xd];
    uStack_80 = puVar9[0xc];
    uStack_68 = puVar9[0xf];
    uStack_70 = puVar9[0xe];
    dStack_58 = (double)puVar9[0x11];
    dStack_60 = (double)puVar9[0x10];
    uStack_b8 = puVar9[5];
    uStack_c0 = puVar9[4];
    uStack_a8 = puVar9[7];
    uStack_b0 = puVar9[6];
    uStack_98 = puVar9[9];
    uStack_a0 = puVar9[8];
    uStack_88 = puVar9[0xb];
    uStack_90 = puVar9[10];
    uStack_d8 = puVar9[1];
    uStack_e0 = *puVar9;
    uStack_c8 = puVar9[3];
    uStack_d0 = puVar9[2];
    uStack_170 = uVar10;
    if (((uVar10 != uStack_e0) || (uStack_168 != uStack_d8)) &&
       (func_0x000107c605b8(), (uVar10 & 1) == 0)) {
      return 0;
    }
    if (uStack_158 == 0) {
      if (uStack_c8 != 0) {
        return 0;
      }
    }
    else {
      if (uStack_c8 == 0) {
        return 0;
      }
      if (((uStack_160 != uStack_d0) || (uStack_158 != uStack_c8)) &&
         (uVar10 = uStack_160, func_0x000107c605b8(), (uVar10 & 1) == 0)) {
        return 0;
      }
    }
    if (uStack_148 == 0) {
      if (uStack_b8 != 0) {
        return 0;
      }
    }
    else {
      if (uStack_b8 == 0) {
        return 0;
      }
      if (((uStack_150 != uStack_c0) || (uStack_148 != uStack_b8)) &&
         (uVar10 = uStack_150, func_0x000107c605b8(), (uVar10 & 1) == 0)) {
        return 0;
      }
    }
    if (((uStack_140 != uStack_b0) || (uStack_138 != uStack_a8)) &&
       (uVar10 = uStack_140, func_0x000107c605b8(), (uVar10 & 1) == 0)) {
      return 0;
    }
    if (uStack_128 == 0) {
      if (uStack_98 != 0) {
        return 0;
      }
    }
    else {
      if (uStack_98 == 0) {
        return 0;
      }
      if (((uStack_130 != uStack_a0) || (uStack_128 != uStack_98)) &&
         (uVar10 = uStack_130, func_0x000107c605b8(), (uVar10 & 1) == 0)) {
        return 0;
      }
    }
    uVar1 = uStack_90;
    uVar10 = uStack_120;
    func_0x000101054270(&uStack_170,auStack_200);
    func_0x000101054270(&uStack_e0,auStack_200);
    FUN_101058a5c(uVar10,uVar1);
    if ((uVar10 & 1) == 0) {
      func_0x0001010542ac(&uStack_e0);
      func_0x0001010542ac(&uStack_170);
      return 0;
    }
    FUN_10105aa04(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    uVar10 = uStack_118;
    func_0x000107c60118(uStack_118,uStack_88);
    func_0x0001010542ac(&uStack_e0);
    func_0x0001010542ac(&uStack_170);
    if ((uVar10 & 1) == 0) {
      return 0;
    }
    if ((char)uStack_110 != (char)uStack_80) {
      return 0;
    }
    if (uStack_110._1_1_ != uStack_80._1_1_) {
      return 0;
    }
    if (uStack_108 != uStack_78) {
      return 0;
    }
    if (uStack_100 != uStack_70) break;
    if (uStack_f8 != uStack_68) {
      return 0;
    }
    if (dStack_f0 != dStack_60) {
      return 0;
    }
    if (dStack_e8 != dStack_58) {
      return 0;
    }
    if (lVar6 == 0) {
      return 1;
    }
    puVar8 = puVar8 + 0x12;
    puVar9 = puVar9 + 0x12;
  }
  return 0;
}



/* Entry: 101058784; end: 101058a5b;  */

undefined8 FUN_101058784(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  undefined1 auStack_200 [144];
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  double dStack_f0;
  double dStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  double dStack_60;
  double dStack_58;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != *(long *)(param_2 + 0x10)) {
    return 0;
  }
  if ((lVar2 == 0) || (param_1 == param_2)) {
    return 1;
  }
  puVar3 = (ulong *)(param_1 + 0x20);
  puVar4 = (ulong *)(param_2 + 0x20);
  while( true ) {
    lVar2 = lVar2 + -1;
    uStack_108 = puVar3[0xd];
    uStack_110 = puVar3[0xc];
    uStack_f8 = puVar3[0xf];
    uStack_100 = puVar3[0xe];
    dStack_e8 = (double)puVar3[0x11];
    dStack_f0 = (double)puVar3[0x10];
    uStack_148 = puVar3[5];
    uStack_150 = puVar3[4];
    uStack_138 = puVar3[7];
    uStack_140 = puVar3[6];
    uStack_128 = puVar3[9];
    uStack_130 = puVar3[8];
    uStack_118 = puVar3[0xb];
    uStack_120 = puVar3[10];
    uStack_168 = puVar3[1];
    uVar5 = *puVar3;
    uStack_158 = puVar3[3];
    uStack_160 = puVar3[2];
    uStack_78 = puVar4[0xd];
    uStack_80 = puVar4[0xc];
    uStack_68 = puVar4[0xf];
    uStack_70 = puVar4[0xe];
    dStack_58 = (double)puVar4[0x11];
    dStack_60 = (double)puVar4[0x10];
    uStack_b8 = puVar4[5];
    uStack_c0 = puVar4[4];
    uStack_a8 = puVar4[7];
    uStack_b0 = puVar4[6];
    uStack_98 = puVar4[9];
    uStack_a0 = puVar4[8];
    uStack_88 = puVar4[0xb];
    uStack_90 = puVar4[10];
    uStack_d8 = puVar4[1];
    uStack_e0 = *puVar4;
    uStack_c8 = puVar4[3];
    uStack_d0 = puVar4[2];
    uStack_170 = uVar5;
    if (((uVar5 != uStack_e0) || (uStack_168 != uStack_d8)) &&
       (func_0x000107c605b8(), (uVar5 & 1) == 0)) {
      return 0;
    }
    if (uStack_158 == 0) {
      if (uStack_c8 != 0) {
        return 0;
      }
    }
    else {
      if (uStack_c8 == 0) {
        return 0;
      }
      if (((uStack_160 != uStack_d0) || (uStack_158 != uStack_c8)) &&
         (uVar5 = uStack_160, func_0x000107c605b8(), (uVar5 & 1) == 0)) {
        return 0;
      }
    }
    if (uStack_148 == 0) {
      if (uStack_b8 != 0) {
        return 0;
      }
    }
    else {
      if (uStack_b8 == 0) {
        return 0;
      }
      if (((uStack_150 != uStack_c0) || (uStack_148 != uStack_b8)) &&
         (uVar5 = uStack_150, func_0x000107c605b8(), (uVar5 & 1) == 0)) {
        return 0;
      }
    }
    if (((uStack_140 != uStack_b0) || (uStack_138 != uStack_a8)) &&
       (uVar5 = uStack_140, func_0x000107c605b8(), (uVar5 & 1) == 0)) {
      return 0;
    }
    if (uStack_128 == 0) {
      if (uStack_98 != 0) {
        return 0;
      }
    }
    else {
      if (uStack_98 == 0) {
        return 0;
      }
      if (((uStack_130 != uStack_a0) || (uStack_128 != uStack_98)) &&
         (uVar5 = uStack_130, func_0x000107c605b8(), (uVar5 & 1) == 0)) {
        return 0;
      }
    }
    uVar1 = uStack_90;
    uVar5 = uStack_120;
    func_0x000101054270(&uStack_170,auStack_200);
    func_0x000101054270(&uStack_e0,auStack_200);
    FUN_101058a5c(uVar5,uVar1);
    if ((uVar5 & 1) == 0) {
      func_0x0001010542ac(&uStack_e0);
      func_0x0001010542ac(&uStack_170);
      return 0;
    }
    FUN_10105aa04(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    uVar5 = uStack_118;
    func_0x000107c60118(uStack_118,uStack_88);
    func_0x0001010542ac(&uStack_e0);
    func_0x0001010542ac(&uStack_170);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    if ((char)uStack_110 != (char)uStack_80) {
      return 0;
    }
    if (uStack_110._1_1_ != uStack_80._1_1_) {
      return 0;
    }
    if (uStack_108 != uStack_78) {
      return 0;
    }
    if (uStack_100 != uStack_70) break;
    if (uStack_f8 != uStack_68) {
      return 0;
    }
    if (dStack_f0 != dStack_60) {
      return 0;
    }
    if (dStack_e8 != dStack_58) {
      return 0;
    }
    if (lVar2 == 0) {
      return 1;
    }
    puVar3 = puVar3 + 0x12;
    puVar4 = puVar4 + 0x12;
  }
  return 0;
}



/* Entry: 101058a5c; end: 10105902f;  */

uint FUN_101058a5c(ulong param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  ulong *puVar10;
  uint uVar11;
  undefined8 *puVar12;
  long lVar13;
  
  if (param_1 >> 0x3e == 0) {
    uVar8 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar8 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar8 = param_1;
    }
    func_0x000107c60480();
  }
  if (param_2 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_2 & 0xffffffffffffff8;
    if ((param_2 & 0x8000000000000000) != 0) {
      uVar2 = param_2;
    }
    func_0x000107c60480();
  }
  if (uVar8 == uVar2) {
    if (uVar8 != 0) {
      uVar5 = param_1 & 0xffffffffffffff8;
      uVar2 = uVar5;
      if ((param_1 & 0x8000000000000000) != 0) {
        uVar2 = param_1;
      }
      uVar3 = uVar5 + 0x20;
      if (param_1 >> 0x3e != 0) {
        uVar3 = uVar2;
      }
      uVar6 = param_2 & 0xffffffffffffff8;
      uVar2 = uVar6;
      if ((param_2 & 0x8000000000000000) != 0) {
        uVar2 = param_2;
      }
      uVar4 = uVar6 + 0x20;
      if (param_2 >> 0x3e != 0) {
        uVar4 = uVar2;
      }
      if (uVar3 != uVar4) {
        if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101058cd4);
          (*pcVar1)();
        }
        FUN_10105aa04(0,0x112d56e50,&PTR_PTR_1126cc4e0);
        if (((param_2 | param_1) & 0xc000000000000001) == 0) {
          lVar9 = *(long *)(uVar5 + 0x10);
          lVar13 = *(long *)(uVar6 + 0x10);
          puVar10 = (ulong *)(param_1 + 0x20);
          puVar12 = (undefined8 *)(param_2 + 0x20);
          do {
            uVar8 = uVar8 - 1;
            if (lVar9 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x101058c74);
              (*pcVar1)();
            }
            if (lVar13 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x101058c78);
              (*pcVar1)();
            }
            uVar5 = *puVar10;
            uVar7 = *puVar12;
            func_0x000107c61174();
            func_0x000107c61174(uVar7);
            uVar2 = uVar5;
            func_0x000107c60118(uVar5,uVar7);
            uVar11 = (uint)uVar2;
            func_0x000107c61170(uVar5);
            func_0x000107c61170(uVar7);
            if ((uVar2 & 1) == 0) break;
            lVar13 = lVar13 + -1;
            lVar9 = lVar9 + -1;
            puVar10 = puVar10 + 1;
            puVar12 = puVar12 + 1;
          } while (uVar8 != 0);
        }
        else {
          lVar9 = 4;
          do {
            uVar2 = lVar9 - 4;
            if ((param_1 & 0xc000000000000001) == 0) {
              if (*(long *)(uVar5 + 0x10) <= (long)uVar2) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x101058c7c);
                (*pcVar1)();
              }
              uVar3 = *(ulong *)(param_1 + lVar9 * 8);
              func_0x000107c61174();
              if ((param_2 & 0xc000000000000001) == 0) goto LAB_101058b9c;
LAB_101058b5c:
              FUN_101059150(uVar2,param_2,&PTR_PTR_1126cc4e0,0x112d56e50);
            }
            else {
              uVar3 = uVar2;
              FUN_101059150(uVar2,param_1,&PTR_PTR_1126cc4e0,0x112d56e50);
              if ((param_2 & 0xc000000000000001) != 0) goto LAB_101058b5c;
LAB_101058b9c:
              if (*(long *)(uVar6 + 0x10) <= (long)uVar2) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x101058c80);
                (*pcVar1)();
              }
              uVar2 = *(ulong *)(param_2 + lVar9 * 8);
              func_0x000107c61174(uVar2);
            }
            uVar4 = uVar3;
            func_0x000107c60118(uVar3,uVar2);
            uVar11 = (uint)uVar4;
            func_0x000107c61170(uVar3);
            func_0x000107c61170(uVar2);
          } while (((uVar4 & 1) != 0) &&
                  (lVar13 = (1 - uVar8) + lVar9, lVar9 = lVar9 + 1, lVar13 != 4));
        }
        goto LAB_101058cac;
      }
    }
    uVar11 = 1;
  }
  else {
    uVar11 = 0;
  }
LAB_101058cac:
  return uVar11 & 1;
}



/* Entry: 101059030; end: 1010590cf;  */

uint FUN_101059030(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  uStack_118 = param_1[0x15];
  uStack_120 = param_1[0x14];
  uStack_108 = param_1[0x17];
  uStack_110 = param_1[0x16];
  uStack_f8 = param_1[0x19];
  uStack_100 = param_1[0x18];
  uStack_158 = param_1[0xd];
  uStack_160 = param_1[0xc];
  uStack_148 = param_1[0xf];
  uStack_150 = param_1[0xe];
  uStack_138 = param_1[0x11];
  uStack_140 = param_1[0x10];
  uStack_128 = param_1[0x13];
  uStack_130 = param_1[0x12];
  uStack_198 = param_1[5];
  uStack_1a0 = param_1[4];
  uStack_188 = param_1[7];
  uStack_190 = param_1[6];
  uStack_178 = param_1[9];
  uStack_180 = param_1[8];
  uStack_168 = param_1[0xb];
  uStack_170 = param_1[10];
  uStack_1b8 = param_1[1];
  uStack_1c0 = *param_1;
  uStack_1a8 = param_1[3];
  uStack_1b0 = param_1[2];
  uStack_48 = param_2[0x15];
  uStack_50 = param_2[0x14];
  uStack_38 = param_2[0x17];
  uStack_40 = param_2[0x16];
  uStack_28 = param_2[0x19];
  uStack_30 = param_2[0x18];
  uStack_88 = param_2[0xd];
  uStack_90 = param_2[0xc];
  uStack_78 = param_2[0xf];
  uStack_80 = param_2[0xe];
  uStack_68 = param_2[0x11];
  uStack_70 = param_2[0x10];
  uStack_58 = param_2[0x13];
  uStack_60 = param_2[0x12];
  uStack_c8 = param_2[5];
  uStack_d0 = param_2[4];
  uStack_b8 = param_2[7];
  uStack_c0 = param_2[6];
  uStack_a8 = param_2[9];
  uStack_b0 = param_2[8];
  uStack_98 = param_2[0xb];
  uStack_a0 = param_2[10];
  uStack_e8 = param_2[1];
  uStack_f0 = *param_2;
  uStack_d8 = param_2[3];
  uStack_e0 = param_2[2];
  func_0x000101059628(&uStack_1c0,&uStack_f0);
  return uVar1 & 1;
}



/* Entry: 1010590d0; end: 101059127;  */

uint FUN_1010590d0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_70 = *(undefined1 *)(param_1 + 8);
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
  uStack_28 = param_2[7];
  uStack_30 = param_2[6];
  uStack_20 = *(undefined1 *)(param_2 + 8);
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  FUN_101059320(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 101059128; end: 10105914f;  */

ulong FUN_101059128(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101059234);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101059238);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126cc4e0;
    func_0x000107c61168(PTR_PTR_1126cc4e0);
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
    puVar4 = PTR_PTR_1126cc4e0;
    func_0x000107c61168(PTR_PTR_1126cc4e0);
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
  FUN_10105aa04(0,0x112d56e50,&PTR_PTR_1126cc4e0);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10105930c);
  (*pcVar2)();
}



/* Entry: 101059150; end: 10105930b;  */

ulong FUN_101059150(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101059234);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101059238);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_10105aa04(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10105930c);
  (*pcVar2)();
}



/* Entry: 10105930c; end: 10105931f;  */

ulong FUN_10105930c(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101059234);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101059238);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126b0ef0;
    func_0x000107c61168(PTR_PTR_1126b0ef0);
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
    puVar4 = PTR_PTR_1126b0ef0;
    func_0x000107c61168(PTR_PTR_1126b0ef0);
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
  FUN_10105aa04(0,0x112d56e40,&PTR_PTR_1126b0ef0);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10105930c);
  (*pcVar2)();
}



/* Entry: 101059320; end: 101059a4f;  */

/* WARNING: Possible PIC construction at 0x0001010594dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101059498: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010593c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101059428: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010593cc) */
/* WARNING: Removing unreachable block (ram,0x00010105949c) */
/* WARNING: Removing unreachable block (ram,0x0001010594a0) */
/* WARNING: Removing unreachable block (ram,0x0001010594e0) */
/* WARNING: Removing unreachable block (ram,0x00010105942c) */
/* WARNING: Removing unreachable block (ram,0x000101059430) */

ulong FUN_101059320(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  undefined1 auVar28 [16];
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  
  uVar7 = *param_1;
  uVar8 = param_1[1];
  uVar30 = param_1[2];
  uVar1 = param_1[3];
  uVar31 = param_1[4];
  uVar29 = param_1[5];
  uVar32 = param_1[6];
  uVar11 = param_1[7];
  bVar12 = (byte)param_1[8];
  if (bVar12 < 3) {
    if (bVar12 == 0) {
      if ((char)param_2[8] != '\0') {
        return 0;
      }
      uVar9 = param_2[2];
      uVar10 = param_2[3];
      uVar2 = param_2[4];
      uVar4 = param_2[5];
      uVar3 = param_2[6];
      uVar5 = param_2[7];
      if (((uVar7 != *param_2) || (uVar8 != param_2[1])) &&
         (func_0x000107c605b8(), (uVar7 & 1) == 0)) {
        return 0;
      }
      if (uVar1 == 0) {
        if (uVar10 != 0) {
          return 0;
        }
      }
      else {
        if (uVar10 == 0) {
          return 0;
        }
        uVar7 = uVar30;
        uVar8 = uVar1;
        if ((uVar30 != uVar9) || (uVar1 != uVar10)) goto code_r0x000107c605b8;
      }
      if (uVar29 == 0) {
        if (uVar4 != 0) {
          return 0;
        }
      }
      else {
        if (uVar4 == 0) {
          return 0;
        }
        if (((uVar31 != uVar2) || (uVar29 != uVar4)) &&
           (func_0x000107c605b8(uVar31,uVar29,uVar2,uVar4,0), (uVar31 & 1) == 0)) {
          return 0;
        }
      }
      uVar7 = uVar32;
      uVar8 = uVar11;
      uVar9 = uVar3;
      uVar10 = uVar5;
      if ((uVar32 == uVar3) && (uVar11 == uVar5)) {
        return 1;
      }
      goto code_r0x000107c605b8;
    }
    if (bVar12 == 1) {
      if ((char)param_2[8] != '\x01') {
        return 0;
      }
    }
    else if ((char)param_2[8] != '\x02') {
      return 0;
    }
  }
  else {
    if (bVar12 != 3) {
      if (bVar12 != 4) {
        if ((char)param_2[8] != '\x05') {
          return 0;
        }
        uVar1 = param_2[5];
        uVar8 = param_2[4];
        uVar30 = param_2[1];
        uVar29 = *param_2;
        uVar32 = param_2[3];
        uVar31 = param_2[2];
        bVar12 = (byte)uVar29 | (byte)uVar8 | (byte)uVar31 | (byte)param_2[6];
        bVar13 = (byte)(uVar29 >> 8) | (byte)(uVar8 >> 8) |
                 (byte)(uVar31 >> 8) | *(byte *)((long)param_2 + 0x31);
        bVar14 = (byte)(uVar29 >> 0x10) | (byte)(uVar8 >> 0x10) |
                 (byte)(uVar31 >> 0x10) | *(byte *)((long)param_2 + 0x32);
        bVar15 = (byte)(uVar29 >> 0x18) | (byte)(uVar8 >> 0x18) |
                 (byte)(uVar31 >> 0x18) | *(byte *)((long)param_2 + 0x33);
        bVar16 = (byte)(uVar29 >> 0x20) | (byte)(uVar8 >> 0x20) |
                 (byte)(uVar31 >> 0x20) | *(byte *)((long)param_2 + 0x34);
        bVar17 = (byte)(uVar29 >> 0x28) | (byte)(uVar8 >> 0x28) |
                 (byte)(uVar31 >> 0x28) | *(byte *)((long)param_2 + 0x35);
        bVar18 = (byte)(uVar29 >> 0x30) | (byte)(uVar8 >> 0x30) |
                 (byte)(uVar31 >> 0x30) | *(byte *)((long)param_2 + 0x36);
        bVar19 = (byte)(uVar29 >> 0x38) | (byte)(uVar8 >> 0x38) |
                 (byte)(uVar31 >> 0x38) | *(byte *)((long)param_2 + 0x37);
        bVar20 = (byte)uVar30 | (byte)uVar1 | (byte)uVar32 | (byte)param_2[7];
        bVar21 = (byte)(uVar30 >> 8) | (byte)(uVar1 >> 8) |
                 (byte)(uVar32 >> 8) | *(byte *)((long)param_2 + 0x39);
        bVar22 = (byte)(uVar30 >> 0x10) | (byte)(uVar1 >> 0x10) |
                 (byte)(uVar32 >> 0x10) | *(byte *)((long)param_2 + 0x3a);
        bVar23 = (byte)(uVar30 >> 0x18) | (byte)(uVar1 >> 0x18) |
                 (byte)(uVar32 >> 0x18) | *(byte *)((long)param_2 + 0x3b);
        bVar24 = (byte)(uVar30 >> 0x20) | (byte)(uVar1 >> 0x20) |
                 (byte)(uVar32 >> 0x20) | *(byte *)((long)param_2 + 0x3c);
        bVar25 = (byte)(uVar30 >> 0x28) | (byte)(uVar1 >> 0x28) |
                 (byte)(uVar32 >> 0x28) | *(byte *)((long)param_2 + 0x3d);
        bVar26 = (byte)(uVar30 >> 0x30) | (byte)(uVar1 >> 0x30) |
                 (byte)(uVar32 >> 0x30) | *(byte *)((long)param_2 + 0x3e);
        bVar27 = (byte)(uVar30 >> 0x38) | (byte)(uVar1 >> 0x38) |
                 (byte)(uVar32 >> 0x38) | *(byte *)((long)param_2 + 0x3f);
        auVar28[1] = bVar13;
        auVar28[0] = bVar12;
        auVar28[2] = bVar14;
        auVar28[3] = bVar15;
        auVar28[4] = bVar16;
        auVar28[5] = bVar17;
        auVar28[6] = bVar18;
        auVar28[7] = bVar19;
        auVar28[8] = bVar20;
        auVar28[9] = bVar21;
        auVar28[10] = bVar22;
        auVar28[0xb] = bVar23;
        auVar28[0xc] = bVar24;
        auVar28[0xd] = bVar25;
        auVar28[0xe] = bVar26;
        auVar28[0xf] = bVar27;
        auVar6[1] = bVar13;
        auVar6[0] = bVar12;
        auVar6[2] = bVar14;
        auVar6[3] = bVar15;
        auVar6[4] = bVar16;
        auVar6[5] = bVar17;
        auVar6[6] = bVar18;
        auVar6[7] = bVar19;
        auVar6[8] = bVar20;
        auVar6[9] = bVar21;
        auVar6[10] = bVar22;
        auVar6[0xb] = bVar23;
        auVar6[0xc] = bVar24;
        auVar6[0xd] = bVar25;
        auVar6[0xe] = bVar26;
        auVar6[0xf] = bVar27;
        auVar28 = NEON_ext(auVar28,auVar6,8,1);
        uVar2 = CONCAT17(bVar19 | auVar28[7],
                         CONCAT16(bVar18 | auVar28[6],
                                  CONCAT15(bVar17 | auVar28[5],
                                           CONCAT14(bVar16 | auVar28[4],
                                                    CONCAT13(bVar15 | auVar28[3],
                                                             CONCAT12(bVar14 | auVar28[2],
                                                                      CONCAT11(bVar13 | auVar28[1],
                                                                               bVar12 | auVar28[0]))
                                                            )))));
joined_r0x000101059554:
        if (uVar2 == 0) {
          return 1;
        }
        return 0;
      }
      if ((char)param_2[8] != '\x04') {
        return 0;
      }
      uVar9 = *param_2;
      uVar10 = param_2[1];
      uVar3 = param_2[4];
      uVar5 = param_2[5];
      uVar4 = param_2[6];
      uVar2 = param_2[7];
      if ((uVar7 == uVar9) && (uVar8 == uVar10)) {
        if (((uVar30 != param_2[2]) || (uVar1 != param_2[3])) &&
           (func_0x000107c605b8(uVar30,uVar1,param_2[2],param_2[3],0), (uVar30 & 1) == 0)) {
          return 0;
        }
        if (uVar29 == 0) {
          if (uVar5 != 0) {
            return 0;
          }
        }
        else {
          if (uVar5 == 0) {
            return 0;
          }
          uVar7 = uVar31;
          uVar8 = uVar29;
          uVar9 = uVar3;
          uVar10 = uVar5;
          if ((uVar31 != uVar3) || (uVar29 != uVar5)) goto code_r0x000107c605b8;
        }
        if (uVar11 != 0) {
          if (uVar2 == 0) {
            return 0;
          }
          if ((uVar32 == uVar4) && (uVar11 == uVar2)) {
            return 1;
          }
          func_0x000107c605b8(uVar32,uVar11,uVar4,uVar2,0);
          if ((uVar32 & 1) != 0) {
            return 1;
          }
          return 0;
        }
        goto joined_r0x000101059554;
      }
      goto code_r0x000107c605b8;
    }
    if ((char)param_2[8] != '\x03') {
      return 0;
    }
  }
  uVar9 = *param_2;
  uVar10 = param_2[1];
  uVar29 = param_2[2];
  uVar31 = param_2[3];
  if ((((uVar7 == uVar9) && (uVar8 == uVar10)) &&
      (uVar7 = uVar30, uVar8 = uVar1, uVar9 = uVar29, uVar10 = uVar31, uVar30 == uVar29)) &&
     (uVar1 == uVar31)) {
    return 1;
  }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
  )(uVar7,uVar8,uVar9,uVar10,0);
  return uVar7;
}



/* Entry: 101059a50; end: 101059adb;  */

/* WARNING: Possible PIC construction at 0x000101059aa0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101059ab4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101059aa4) */
/* WARNING: Removing unreachable block (ram,0x000101059ab8) */

void FUN_101059a50(undefined8 param_1,undefined8 param_2)

{
  undefined8 in_x5;
  undefined8 in_x7;
  byte in_stack_00000000;
  
  if (((2 < in_stack_00000000 - 1) && (param_2 = in_x5, in_stack_00000000 != 0)) &&
     (param_2 = in_x7, in_stack_00000000 != 4)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
  return;
}



/* Entry: 101059adc; end: 101059b83;  */

/* WARNING: Possible PIC construction at 0x000101059af4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101059b08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101059b18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101059b5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101059b6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101059b60) */
/* WARNING: Removing unreachable block (ram,0x000101059b1c) */
/* WARNING: Removing unreachable block (ram,0x000101059b50) */
/* WARNING: Removing unreachable block (ram,0x000101059b58) */
/* WARNING: Removing unreachable block (ram,0x000101059b0c) */
/* WARNING: Removing unreachable block (ram,0x000101059af8) */
/* WARNING: Removing unreachable block (ram,0x000101059b14) */
/* WARNING: Removing unreachable block (ram,0x000101059b00) */
/* WARNING: Removing unreachable block (ram,0x000101059b70) */

void FUN_101059adc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 101059b84; end: 101059c0b;  */

/* WARNING: Possible PIC construction at 0x000101059bd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101059be4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101059bd4) */
/* WARNING: Removing unreachable block (ram,0x000101059be8) */

void FUN_101059b84(undefined8 param_1,undefined8 param_2)

{
  byte in_stack_00000000;
  
  if (((2 < in_stack_00000000 - 1) && (in_stack_00000000 != 0)) && (in_stack_00000000 != 4)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101059c0c; end: 10105a083;  */

undefined8 * FUN_101059c0c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar11 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar11;
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  lVar9 = param_2[4];
  func_0x000107c61434();
  if (lVar9 == 0) {
    uVar11 = param_2[3];
    param_1[4] = param_2[4];
    param_1[3] = uVar11;
    uVar11 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar11;
    param_1[7] = param_2[7];
  }
  else {
    param_1[3] = param_2[3];
    param_1[4] = lVar9;
    uVar11 = param_2[6];
    param_1[5] = param_2[5];
    param_1[6] = uVar11;
    uVar12 = param_2[7];
    param_1[7] = uVar12;
    func_0x000107c61434(lVar9);
    func_0x000107c61434(uVar11);
    func_0x000107c61434(uVar12);
  }
  uVar3 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar3;
  *(undefined2 *)(param_1 + 10) = *(undefined2 *)(param_2 + 10);
  uVar11 = param_2[0xb];
  uVar4 = param_2[0xc];
  uVar12 = param_2[0xd];
  uVar5 = param_2[0xe];
  uVar1 = param_2[0xf];
  uVar6 = param_2[0x10];
  uVar2 = param_2[0x11];
  uVar7 = param_2[0x12];
  uVar8 = *(undefined1 *)(param_2 + 0x13);
  func_0x000107c61434();
  func_0x000107c61434(uVar3);
  FUN_101059a50(uVar11,uVar4,uVar12,uVar5,uVar1,uVar6,uVar2,uVar7,uVar8);
  param_1[0xb] = uVar11;
  param_1[0xc] = uVar4;
  param_1[0xd] = uVar12;
  param_1[0xe] = uVar5;
  param_1[0xf] = uVar1;
  param_1[0x10] = uVar6;
  param_1[0x11] = uVar2;
  param_1[0x12] = uVar7;
  *(undefined1 *)(param_1 + 0x13) = uVar8;
  uVar10 = param_2[0x15];
  if (uVar10 >> 0x3c < 0xf) {
    uVar11 = param_2[0x14];
    func_0x00010006c00c(uVar11,uVar10);
    param_1[0x14] = uVar11;
    param_1[0x15] = uVar10;
  }
  else {
    uVar11 = param_2[0x14];
    param_1[0x15] = param_2[0x15];
    param_1[0x14] = uVar11;
  }
  uVar12 = param_2[0x17];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = uVar12;
  uVar11 = param_2[0x18];
  uVar1 = param_2[0x19];
  param_1[0x18] = uVar11;
  param_1[0x19] = uVar1;
  func_0x000107c61434();
  func_0x000107c61434(uVar12);
  func_0x000107c61434(uVar11);
  func_0x000107c61434(uVar1);
  return param_1;
}



/* Entry: 10105a084; end: 10105a0af;  */

undefined8 FUN_10105a084(undefined8 param_1)

{
  FUN_10105a4c0(param_1,&UNK_11037af40);
  return param_1;
}



/* Entry: 10105a0b0; end: 10105a0eb;  */

void FUN_10105a0b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  uVar4 = param_2[5];
  uVar3 = param_2[4];
  uVar5 = param_2[6];
  uVar7 = param_2[9];
  uVar6 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar5;
  param_1[9] = uVar7;
  param_1[8] = uVar6;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  uVar2 = param_2[0xb];
  uVar1 = param_2[10];
  uVar4 = param_2[0xd];
  uVar3 = param_2[0xc];
  uVar5 = param_2[0xe];
  uVar7 = param_2[0x11];
  uVar6 = param_2[0x10];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar5;
  param_1[0x11] = uVar7;
  param_1[0x10] = uVar6;
  param_1[0xb] = uVar2;
  param_1[10] = uVar1;
  param_1[0xd] = uVar4;
  param_1[0xc] = uVar3;
  uVar2 = param_2[0x13];
  uVar1 = param_2[0x12];
  uVar4 = param_2[0x15];
  uVar3 = param_2[0x14];
  uVar5 = param_2[0x16];
  uVar7 = param_2[0x19];
  uVar6 = param_2[0x18];
  param_1[0x17] = param_2[0x17];
  param_1[0x16] = uVar5;
  param_1[0x19] = uVar7;
  param_1[0x18] = uVar6;
  param_1[0x13] = uVar2;
  param_1[0x12] = uVar1;
  param_1[0x15] = uVar4;
  param_1[0x14] = uVar3;
  return;
}



/* Entry: 10105a0ec; end: 10105a28f;  */

undefined8 * FUN_10105a0ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  
  uVar10 = param_2[1];
  uVar9 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar10;
  func_0x000107c6142c(uVar9);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *(undefined1 *)((long)param_1 + 0x11) = *(undefined1 *)((long)param_2 + 0x11);
  if (param_1[4] == 0) {
LAB_10105a16c:
    uVar10 = param_2[3];
    param_1[4] = param_2[4];
    param_1[3] = uVar10;
    uVar10 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar10;
    param_1[7] = param_2[7];
  }
  else {
    lVar11 = param_2[4];
    if (lVar11 == 0) {
      FUN_10105a084(param_1 + 3);
      goto LAB_10105a16c;
    }
    param_1[3] = param_2[3];
    param_1[4] = lVar11;
    func_0x000107c6142c();
    uVar10 = param_2[6];
    uVar9 = param_1[6];
    param_1[5] = param_2[5];
    param_1[6] = uVar10;
    func_0x000107c6142c(uVar9);
    uVar10 = param_1[7];
    param_1[7] = param_2[7];
    func_0x000107c6142c(uVar10);
  }
  uVar10 = param_1[8];
  param_1[8] = param_2[8];
  func_0x000107c6142c(uVar10);
  uVar10 = param_1[9];
  param_1[9] = param_2[9];
  func_0x000107c6142c(uVar10);
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  *(undefined1 *)((long)param_1 + 0x51) = *(undefined1 *)((long)param_2 + 0x51);
  uVar7 = *(undefined1 *)(param_2 + 0x13);
  uVar10 = param_1[0xb];
  uVar3 = param_1[0xc];
  uVar9 = param_1[0xd];
  uVar4 = param_1[0xe];
  uVar1 = param_1[0xf];
  uVar5 = param_1[0x10];
  uVar2 = param_1[0x11];
  uVar6 = param_1[0x12];
  uVar8 = *(undefined1 *)(param_1 + 0x13);
  uVar13 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar13;
  uVar13 = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xd] = uVar13;
  uVar13 = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0xf] = uVar13;
  uVar13 = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x11] = uVar13;
  *(undefined1 *)(param_1 + 0x13) = uVar7;
  FUN_101059b84(uVar10,uVar3,uVar9,uVar4,uVar1,uVar5,uVar2,uVar6,uVar8);
  if ((ulong)param_1[0x15] >> 0x3c < 0xf) {
    uVar12 = param_2[0x15];
    if (uVar12 >> 0x3c < 0xf) {
      uVar10 = param_1[0x14];
      param_1[0x14] = param_2[0x14];
      param_1[0x15] = uVar12;
      func_0x00010006c090(uVar10);
      goto LAB_10105a23c;
    }
    func_0x0001006e5814(param_1 + 0x14);
  }
  uVar10 = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  param_1[0x14] = uVar10;
LAB_10105a23c:
  uVar10 = param_1[0x16];
  param_1[0x16] = param_2[0x16];
  func_0x000107c6142c(uVar10);
  uVar10 = param_1[0x17];
  param_1[0x17] = param_2[0x17];
  func_0x000107c6142c(uVar10);
  uVar10 = param_1[0x18];
  param_1[0x18] = param_2[0x18];
  func_0x000107c6142c(uVar10);
  uVar10 = param_1[0x19];
  param_1[0x19] = param_2[0x19];
  func_0x000107c6142c(uVar10);
  return param_1;
}



/* Entry: 10105a290; end: 10105a4bf;  */

int FUN_10105a290(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x34] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10105a4c0; end: 10105a4ef;  */

/* WARNING: Possible PIC construction at 0x00010105a4d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010105a4d8) */

void FUN_10105a4c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10105a4f0; end: 10105a5c7;  */

undefined8 * FUN_10105a4f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[4];
  param_1[4] = uVar2;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  return param_1;
}



/* Entry: 10105a5c8; end: 10105a61b;  */

undefined8 * FUN_10105a5c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  func_0x000107c6142c(param_1[3]);
  uVar2 = param_1[4];
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 10105a61c; end: 10105a6bb;  */

int FUN_10105a61c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10105a6bc; end: 10105a6f3;  */

void FUN_10105a6bc(undefined8 *param_1)

{
  FUN_101059b84(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                param_1[7],*(undefined1 *)(param_1 + 8));
  return;
}



/* Entry: 10105a6f4; end: 10105a83f;  */

undefined8 * FUN_10105a6f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  
  uVar1 = *param_2;
  uVar5 = param_2[1];
  uVar2 = param_2[2];
  uVar6 = param_2[3];
  uVar3 = param_2[4];
  uVar7 = param_2[5];
  uVar4 = param_2[6];
  uVar8 = param_2[7];
  uVar9 = *(undefined1 *)(param_2 + 8);
  FUN_101059a50(uVar1,uVar5,uVar2,uVar6,uVar3,uVar7,uVar4,uVar8,uVar9);
  *param_1 = uVar1;
  param_1[1] = uVar5;
  param_1[2] = uVar2;
  param_1[3] = uVar6;
  param_1[4] = uVar3;
  param_1[5] = uVar7;
  param_1[6] = uVar4;
  param_1[7] = uVar8;
  *(undefined1 *)(param_1 + 8) = uVar9;
  return param_1;
}



/* Entry: 10105a840; end: 10105a863;  */

void FUN_10105a840(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  uVar4 = param_2[5];
  uVar3 = param_2[4];
  uVar6 = param_2[7];
  uVar5 = param_2[6];
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  param_1[7] = uVar6;
  param_1[6] = uVar5;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  return;
}


