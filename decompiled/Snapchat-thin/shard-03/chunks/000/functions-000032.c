/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1023bcaa0; end: 1023bcb9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023bcaa0(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  uVar1 = param_1;
  func_0x0001023bc278();
  if ((uVar1 & 1) != 0) {
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112e92c98);
    puVar2 = &UNK_1104fd310;
    func_0x000107c613fc(&UNK_1104fd310,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    puVar3 = &UNK_1104fd338;
    func_0x000107c613fc(&UNK_1104fd338,0x30,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(ulong *)(puVar3 + 0x18) = param_1;
    *(undefined8 *)(puVar3 + 0x20) = param_2;
    *(undefined8 *)(puVar3 + 0x28) = param_3;
    pcStack_50 = FUN_1023bfbdc;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000f6b44;
    puStack_58 = &UNK_1104fd350;
    puStack_48 = puVar3;
    func_0x000107c60bc4(&puStack_70);
    puVar2 = puStack_48;
    func_0x000107c61434(param_3);
    func_0x000107c61574(puVar2);
    func_0x000107c4e524(uVar5);
    func_0x000107c60bd0(ppuVar4);
  }
  return;
}



/* Entry: 1023bcb9c; end: 1023bcc13;  */

void FUN_1023bcb9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_1023bcc14(param_2,param_3,param_4);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1023bcc14; end: 1023bcd53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023bcc14(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  lVar1 = _DAT_112e92cb0;
  ppuVar4 = &puStack_70;
  lVar5 = *(long *)(unaff_x20 + _DAT_112e92ca8);
  if (lVar5 == 0) {
    if (param_1 == 2) {
      FUN_1023b8658(param_2,param_3);
    }
  }
  else if (*(char *)(unaff_x20 + _DAT_112e92cb0) != '\x01' || param_1 != 1) {
    lVar2 = lVar5;
    func_0x000107c615f0(lVar5);
    func_0x000107c3f474();
    *(undefined1 *)(unaff_x20 + lVar1) = 0;
    *(undefined1 *)(unaff_x20 + _DAT_112e92cb8) = 0;
    *(undefined8 *)(unaff_x20 + _DAT_112e92cc8) = 0;
    FUN_1023bc208();
    puVar3 = &UNK_1104fd388;
    func_0x000107c613fc(&UNK_1104fd388,0x18,7);
    *(long *)(puVar3 + 0x10) = unaff_x20;
    uStack_50 = 0x1023bfc04;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000f6b44;
    puStack_58 = &UNK_1104fd3a0;
    puStack_48 = puVar3;
    func_0x000107c60bc4(&puStack_70);
    puVar3 = puStack_48;
    func_0x000107c61174();
    func_0x000107c61574(puVar3);
    func_0x000107c4e524(lVar2);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c615e8(lVar5);
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 1023bcd54; end: 1023bcdb3; -[_TtC26SCMagicCaptionServicesImpl20MagicCaptionProvider stopMagicCaptionGenerationWithActionType:editingCaptionText:] */

void FUN_1023bcd54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_1);
  FUN_1023bcaa0(param_3,param_4,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1023bcdb4; end: 1023bcde7; -[_TtC26SCMagicCaptionServicesImpl20MagicCaptionProvider isMagicCaptionFeatureAvaliableForSnap] */

uint FUN_1023bcdb4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001023bc278();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 1023bcde8; end: 1023bce77; -[_TtC26SCMagicCaptionServicesImpl20MagicCaptionProvider isCaptionCountedAsMagicCaption:originalMagicCaption:] */

uint FUN_1023bcde8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_2;
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_1);
  FUN_1023bfaf8(param_3,param_2,param_4,uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar1);
  return (uint)param_3 & 1;
}



/* Entry: 1023bce78; end: 1023bcf97;  */

/* WARNING: Possible PIC construction at 0x0001023bcee0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023bcf70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023bcee4) */
/* WARNING: Removing unreachable block (ram,0x0001023bcee8) */
/* WARNING: Removing unreachable block (ram,0x0001023bcf74) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023bce78(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112e92c48);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c5d180();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    func_0x000107c4d070(lVar2,param_2,1);
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 1023bcf98; end: 1023bd06b;  */

/* WARNING: Possible PIC construction at 0x0001023bd04c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023bd050) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023bcf98(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_112e92c98);
  puVar1 = &UNK_1104fd310;
  func_0x000107c613fc(&UNK_1104fd310,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  puVar2 = &UNK_1104fd568;
  func_0x000107c613fc(&UNK_1104fd568,0x38,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  *(undefined8 *)(puVar2 + 0x28) = param_4;
  *(undefined8 *)(puVar2 + 0x30) = param_5;
  func_0x000107c6157c(puVar1);
  func_0x000107c61174(param_2);
  func_0x000107c61434(param_4);
  FUN_1023bd608(uVar3,0x1023bfc50,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1023bd06c; end: 1023bd0e7;  */

void FUN_1023bd06c(ulong param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_48 [24];
  
  if ((param_1 & 1) != 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 != 0) {
      FUN_1023bd0e8(param_3,param_4,param_5);
      func_0x000107c61170(param_2);
    }
  }
  return;
}



/* Entry: 1023bd0e8; end: 1023bd607;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023bd0e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  long unaff_x20;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar3 = &puStack_a0;
  ppuVar5 = &puStack_a0;
  ppuVar7 = &puStack_a0;
  lVar14 = unaff_x20;
  uVar8 = param_2;
  func_0x000107c614f0();
  lVar12 = lVar14;
  FUN_1023bda9c();
  if (lVar12 != 0) {
    lVar14 = lVar12;
    FUN_1023bfd34();
    lVar2 = lVar14;
    FUN_1023bc208();
    puVar4 = &UNK_1104fd798;
    func_0x000107c613fc(&UNK_1104fd798,0x30,7);
    *(long *)(puVar4 + 0x10) = unaff_x20;
    *(long *)(puVar4 + 0x18) = lVar14;
    *(undefined8 *)(puVar4 + 0x20) = uVar8;
    *(long *)(puVar4 + 0x28) = lVar12;
    pcStack_80 = (code *)0x1023c0028;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_1000f6b44;
    puStack_88 = &UNK_1104fd7b0;
    puStack_78 = puVar4;
    func_0x000107c60bc4(&puStack_a0);
    puVar4 = puStack_78;
    func_0x000107c61174();
    func_0x000107c61434(uVar8);
    func_0x000107c61174(lVar12);
    func_0x000107c61574(puVar4);
    func_0x000107c4e524(lVar2);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(lVar2);
    FUN_1023b854c(param_2,param_3);
    FUN_1023b83b8(lVar14,uVar8);
    func_0x000107c61170(lVar12);
    func_0x000107c6142c(uVar8);
    return;
  }
  FUN_1023bc208();
  puVar4 = &UNK_1104fd6d0;
  func_0x000107c613fc(&UNK_1104fd6d0,0x18,7);
  *(long *)(puVar4 + 0x10) = unaff_x20;
  puVar9 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = (code *)0x1023c0058;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_1104fd6e8;
  puStack_78 = puVar4;
  func_0x000107c60bc4(&puStack_a0);
  puVar4 = puStack_78;
  func_0x000107c61174();
  func_0x000107c61574(puVar4);
  func_0x000107c4e524(lVar12);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c615e8(lVar12);
  puVar4 = &UNK_1104fd720;
  func_0x000107c613fc(&UNK_1104fd720,0x11,7);
  puVar4[0x10] = 0;
  puVar6 = PTR_PTR_1126afd78;
  func_0x000107c610f8();
  pcStack_80 = FUN_1023bfcec;
  puStack_a0 = puVar9;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_1104fd738;
  puStack_78 = puVar4;
  func_0x000107c60bc4(&puStack_a0);
  puVar9 = puStack_78;
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar9);
  func_0x000107c45b74();
  func_0x000107c60bd0(ppuVar7);
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e92ca8);
  *(undefined **)(unaff_x20 + _DAT_112e92ca8) = puVar6;
  func_0x000107c615e8(uVar8);
  lVar12 = *(long *)(unaff_x20 + _DAT_112e92c78);
  puVar9 = &UNK_1104fd310;
  func_0x000107c613fc(&UNK_1104fd310,0x18,7);
  func_0x000107c61614(puVar9 + 0x10,unaff_x20);
  puVar6 = &UNK_1104fd770;
  func_0x000107c613fc(&UNK_1104fd770,0x30,7);
  *(undefined **)(puVar6 + 0x10) = puVar9;
  *(undefined **)(puVar6 + 0x18) = puVar4;
  *(undefined8 *)(puVar6 + 0x20) = param_1;
  *(long *)(puVar6 + 0x28) = lVar14;
  uVar13 = *(ulong *)(lVar12 + 0x20);
  if (uVar13 == 0) {
    func_0x000107c61580(puVar4,3);
    func_0x000107c61174(param_1);
    func_0x000107c61580(puVar9,2);
    func_0x000107c61174(param_1);
    FUN_1023bdcd8(0,7,puVar9,puVar4,param_1,lVar14);
LAB_1023bd4c0:
    func_0x000107c61170(param_1);
    func_0x000107c61578(puVar4,2);
    func_0x000107c61574(puVar9);
    goto LAB_1023bd5cc;
  }
  func_0x000107c61580(puVar4,3);
  func_0x000107c61174(param_1);
  func_0x000107c61580(puVar9,2);
  func_0x000107c61174(param_1);
  uVar10 = uVar13;
  func_0x000107c615f0();
  func_0x000107c4a704();
  uVar11 = uVar13;
  if (((uVar10 & 1) == 0) || (uVar10 = uVar13, func_0x000107c4a48c(), (int)uVar10 == 0)) {
    lVar14 = *(long *)(lVar12 + 0x18);
    if (lVar14 != 0) {
      lVar12 = lVar14;
      func_0x000107c615f0();
      iVar1 = (int)lVar12;
      func_0x000107c426e0();
      if (((iVar1 != 0) && (lVar12 = lVar14, func_0x000107c4b82c(), lVar12 != 0)) &&
         (lVar12 = lVar14, func_0x000107c3f5b8(), (int)lVar12 != 0)) {
        FUN_1023bae94(uVar13,lVar14,FUN_1023bfd28,puVar6);
        func_0x000107c615e8(lVar14);
        func_0x000107c615e8(uVar13);
        goto LAB_1023bd4c0;
      }
      func_0x000107c615e8(lVar14);
    }
    uVar10 = uVar13;
    func_0x000107c4a704();
    if ((int)uVar10 == 0) {
      func_0x000107c43bb0();
      func_0x000107c61180();
      goto joined_r0x0001023bd518;
    }
    func_0x000107c5ddac();
    func_0x000107c61180();
    if (uVar11 != 0) goto LAB_1023bd51c;
LAB_1023bd584:
    FUN_1023bdcd8();
    func_0x000107c61574(puVar9);
    func_0x000107c61574(puVar6);
  }
  else {
    uVar10 = uVar13;
    func_0x000107c4a704();
    if ((int)uVar10 == 0) {
      func_0x000107c43bb0();
    }
    else {
      func_0x000107c5ddac();
    }
    func_0x000107c61180();
joined_r0x0001023bd518:
    if (uVar11 == 0) goto LAB_1023bd584;
LAB_1023bd51c:
    func_0x000107c61174();
    uVar10 = uVar11;
    FUN_1023bb894();
    FUN_1023bdcd8();
    func_0x000107c61574(puVar9);
    func_0x000107c61574(puVar6);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar10);
  }
  func_0x000107c61574(puVar9);
  func_0x000107c615e8(uVar13);
  func_0x000107c61170(param_1);
  puVar9 = puVar4;
  puVar6 = puVar4;
LAB_1023bd5cc:
  func_0x000107c61574(puVar9);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar4);
  return;
}



/* Entry: 1023bd608; end: 1023bd947;  */

/* WARNING: Possible PIC construction at 0x0001023bd674: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023bd750: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023bd908: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023bd754) */
/* WARNING: Removing unreachable block (ram,0x0001023bd678) */
/* WARNING: Removing unreachable block (ram,0x0001023bd69c) */
/* WARNING: Removing unreachable block (ram,0x0001023bd800) */
/* WARNING: Removing unreachable block (ram,0x0001023bd928) */
/* WARNING: Removing unreachable block (ram,0x0001023bd83c) */
/* WARNING: Removing unreachable block (ram,0x0001023bd6d0) */
/* WARNING: Removing unreachable block (ram,0x0001023bd90c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023bd608(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  lVar1 = unaff_x20;
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e92c48);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c5d180();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
    return;
  }
  puVar3 = &UNK_1104fd590;
  func_0x000107c613fc(&UNK_1104fd590,0x28,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(long *)(puVar3 + 0x20) = lVar1;
  pcStack_60 = FUN_1023bfc60;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_1104fd5a8;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  puVar3 = puStack_58;
  func_0x000107c6157c(param_3);
  func_0x000107c61574(puVar3);
  func_0x000107c4e524(param_1);
  func_0x000107c60bd0(ppuVar4);
  return;
}



/* Entry: 1023bd948; end: 1023bda9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023bd948(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined1 auStack_88 [24];
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  uVar1 = param_1;
  func_0x000107c3ebcc();
  if ((int)uVar1 != 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_88,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 != 0) {
      lVar5 = *(long *)(param_2 + _DAT_112e92cd8);
      func_0x000107c61174();
      func_0x000107c61170(param_2);
      lVar2 = lVar5;
      func_0x000107c5a850();
      func_0x000107c61180();
      func_0x000107c61170(lVar5);
      (**(code **)(lVar2 + 0x10))(lVar2,1);
      func_0x000107c60bd0(lVar2);
    }
  }
  puVar3 = &UNK_1104fd680;
  func_0x000107c613fc(&UNK_1104fd680,0x28,7);
  *(undefined8 *)(puVar3 + 0x10) = param_4;
  *(undefined8 *)(puVar3 + 0x18) = param_5;
  *(undefined8 *)(puVar3 + 0x20) = param_1;
  pcStack_50 = FUN_1023bfcb8;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1104fd698;
  ppuVar4 = &puStack_70;
  puStack_48 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  puVar3 = puStack_48;
  func_0x000107c6157c(param_5);
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar3);
  func_0x000107c4e524(param_3);
  func_0x000107c60bd0(ppuVar4);
  return;
}



/* Entry: 1023bda9c; end: 1023bdc87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1023bda9c(void)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x20;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  uVar3 = *(ulong *)(unaff_x20 + _DAT_112e92cc0);
  uVar7 = 0;
  if (uVar3 != 0) {
    func_0x000107c61174();
    uVar7 = uVar3;
    func_0x000107c3f564();
    func_0x000107c61180();
    uVar4 = 0;
    FUN_1023bff68(0,0x112e12808,&PTR_PTR_1126bd998);
    uVar6 = uVar7;
    func_0x000107c5fc54(uVar7,uVar4);
    func_0x000107c61170(uVar7);
    if (uVar6 >> 0x3e == 0) {
      uVar7 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar7 = uVar6 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar6) {
        uVar7 = uVar6;
      }
      func_0x000107c60480();
    }
    func_0x000107c6142c(uVar6);
    if (uVar7 == 0) {
      func_0x000107c61170(uVar3);
      uVar7 = 0;
    }
    else {
      uVar7 = uVar3;
      func_0x000107c3f564();
      func_0x000107c61180();
      uVar6 = uVar7;
      func_0x000107c5fc54();
      func_0x000107c61170(uVar7);
      lVar1 = _DAT_112e92cc8;
      uVar7 = *(ulong *)(unaff_x20 + _DAT_112e92cc8);
      if ((uVar6 & 0xc000000000000001) == 0) {
        if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1023bdc5c);
          (*pcVar2)();
        }
        if (*(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1023bdc88);
          (*pcVar2)();
        }
        uVar7 = *(ulong *)(uVar6 + uVar7 * 8 + 0x20);
        func_0x000107c61174(uVar7);
      }
      else {
        func_0x000101ca0230(uVar7,uVar6);
      }
      func_0x000107c6142c(uVar6);
      lVar8 = *(long *)(unaff_x20 + lVar1);
      uVar6 = uVar3;
      func_0x000107c3f564();
      func_0x000107c61180();
      uVar5 = uVar6;
      func_0x000107c5fc54();
      func_0x000107c61170(uVar6);
      if (uVar5 >> 0x3e == 0) {
        uVar6 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar6 = uVar5 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar5) {
          uVar6 = uVar5;
        }
        func_0x000107c60480();
      }
      func_0x000107c6142c(uVar5);
      func_0x000107c61170(uVar3);
      if (SBORROW8(uVar6,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1023bdc84);
        (*pcVar2)();
      }
      if (lVar8 < (long)(uVar6 - 1)) {
        lVar8 = *(long *)(unaff_x20 + lVar1) + 1;
        if (SCARRY8(*(long *)(unaff_x20 + lVar1),1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1023bdc00);
          (*pcVar2)();
        }
      }
      else {
        lVar8 = 0;
      }
      *(long *)(unaff_x20 + lVar1) = lVar8;
    }
  }
  return uVar7;
}



/* Entry: 1023bdc88; end: 1023bdcd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023bdc88(long param_1)

{
  param_1 = param_1 + _DAT_112e92c28;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c41e14();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 1023bdcd8; end: 1023bed8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023bdcd8(long param_1,byte param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  char *pcVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined1 auStack_d8 [24];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_78,0,0);
  lVar1 = param_3 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    return;
  }
  lVar7 = param_4 + 0x10;
  func_0x000107c61428(lVar7,auStack_90,0,0);
  if ((*(byte *)(param_4 + 0x10) & 1) != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112e92ca8);
    *(undefined8 *)(lVar1 + _DAT_112e92ca8) = 0;
    func_0x000107c615e8(uVar2);
    lVar7 = *(long *)(lVar1 + _DAT_112e92c90);
    *(undefined8 *)(lVar7 + 0x18) = 1;
    *(undefined1 *)(lVar7 + 0x20) = 0;
    goto LAB_1023be150;
  }
  uVar10 = 0xec0000004c525520;
  uVar2 = 0x616964656d206f4e;
  if (param_1 == 0) {
    if (param_2 < 4) {
      if (1 < param_2) goto LAB_1023bdfec;
      if (param_2 == 0) goto LAB_1023bdf74;
LAB_1023bdfcc:
      uVar10 = 0x800000010f096200;
      uVar2 = 0xd00000000000001a;
    }
    else {
      if (param_2 < 6) goto LAB_1023bdf94;
      if (param_2 == 6) goto LAB_1023be008;
      if (param_2 == 7) goto LAB_1023bdf50;
      uVar10 = 0x800000010f096170;
      uVar2 = 0xd000000000000017;
    }
  }
  else if (param_2 < 4) {
    if (param_2 < 2) {
      if (param_2 != 0) goto LAB_1023bdfcc;
LAB_1023bdf74:
      uVar10 = 0x800000010f096220;
      uVar2 = 0xd00000000000001d;
    }
    else {
LAB_1023bdfec:
      if (param_2 == 2) {
        pcVar6 = "No media reference";
        goto LAB_1023be018;
      }
    }
  }
  else if (param_2 < 6) {
LAB_1023bdf94:
    if (param_2 == 4) {
      uVar10 = 0xef4c525520746120;
      uVar2 = 0x6567616d69206f4e;
    }
    else {
      uVar10 = 0x800000010f0961b0;
      uVar2 = 0xd000000000000026;
    }
  }
  else if (param_2 == 6) {
LAB_1023be008:
    pcVar6 = "Unknown media type";
LAB_1023be018:
    uVar2 = 0xd000000000000012;
    uVar10 = (ulong)(pcVar6 + -0x20) | 0x8000000000000000;
  }
  else {
    if (param_2 != 7) {
      lVar7 = *(long *)(lVar1 + _DAT_112e92c38);
      func_0x000107c61174();
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar7 == 0) {
        func_0x000107c61170(param_1);
        lVar9 = 0;
      }
      else {
        uVar2 = param_5;
        func_0x0001023be1dc(param_5);
        uVar8 = *(undefined8 *)(lVar1 + _DAT_112e92c98);
        puVar4 = &UNK_1104fd310;
        func_0x000107c613fc(&UNK_1104fd310,0x18,7);
        func_0x000107c61428(param_3 + 0x10,auStack_d8,0,0);
        param_3 = param_3 + 0x10;
        func_0x000107c61618(param_3);
        func_0x000107c61614(puVar4 + 0x10,param_3);
        func_0x000107c615f0(uVar8);
        func_0x000107c61170(param_3);
        puVar3 = &UNK_1104fd838;
        func_0x000107c613fc(&UNK_1104fd838,0x30,7);
        *(undefined **)(puVar3 + 0x10) = puVar4;
        *(undefined8 *)(puVar3 + 0x18) = param_5;
        *(long *)(puVar3 + 0x20) = param_1;
        *(undefined8 *)(puVar3 + 0x28) = param_6;
        pcStack_a0 = FUN_1023bfe70;
        puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_b8 = 0x42000000;
        puStack_b0 = &UNK_101c9e8c0;
        puStack_a8 = &UNK_1104fd850;
        ppuVar5 = &puStack_c0;
        puStack_98 = puVar3;
        func_0x000107c60bc4(ppuVar5);
        puVar4 = puStack_98;
        func_0x000107c61174(param_1);
        func_0x000107c61174(param_5);
        func_0x000107c61574(puVar4);
        lVar9 = lVar7;
        func_0x000107c43dd8();
        func_0x000107c61180();
        func_0x000107c61170(param_1);
        func_0x000107c60bd0(ppuVar5);
        func_0x000107c615e8(lVar7);
        func_0x000107c61170(uVar2);
        func_0x000107c615e8(uVar8);
      }
      uVar2 = *(undefined8 *)(lVar1 + _DAT_112e92ca8);
      *(long *)(lVar1 + _DAT_112e92ca8) = lVar9;
      func_0x000107c61170(lVar1);
      func_0x000107c615e8(uVar2);
      return;
    }
LAB_1023bdf50:
    uVar10 = 0xe700000000000000;
    uVar2 = 0x6e776f6e6b6e55;
  }
  FUN_1023bc208();
  puVar4 = &UNK_1104fd7e8;
  func_0x000107c613fc(&UNK_1104fd7e8,0x38,7);
  *(long *)(puVar4 + 0x10) = lVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  *(undefined8 *)(puVar4 + 0x28) = 0;
  *(undefined8 *)(puVar4 + 0x30) = 0;
  *(ulong *)(puVar4 + 0x20) = uVar10;
  pcStack_a0 = (code *)0x1023c0090;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0x42000000;
  puStack_b0 = &UNK_1000f6b44;
  puStack_a8 = &UNK_1104fd800;
  ppuVar5 = &puStack_c0;
  puStack_98 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  puVar4 = puStack_98;
  func_0x000107c61434(uVar10);
  func_0x000107c61174();
  func_0x000107c61574(puVar4);
  func_0x000107c4e524(lVar7);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c6142c(uVar10);
  func_0x000107c615e8(lVar7);
  uVar2 = *(undefined8 *)(lVar1 + _DAT_112e92ca8);
  *(undefined8 *)(lVar1 + _DAT_112e92ca8) = 0;
  func_0x000107c615e8(uVar2);
  lVar7 = *(long *)(lVar1 + _DAT_112e92c90);
  *(undefined8 *)(lVar7 + 0x18) = 2;
  *(undefined1 *)(lVar7 + 0x20) = 0;
  *(undefined8 *)(lVar7 + 0x28) = 0x3f1;
  *(undefined1 *)(lVar7 + 0x30) = 0;
LAB_1023be150:
  lVar9 = lVar7;
  func_0x000107c6157c();
  FUN_1023b8138();
  if (lVar9 != 0) {
    func_0x000107c4bc98(*(undefined8 *)(lVar7 + 0x10));
    func_0x000107c61170(lVar9);
  }
  FUN_1023b84fc();
  func_0x000107c61170(lVar1);
  func_0x000107c61574(lVar7);
  return;
}



/* Entry: 1023bed8c; end: 1023bee87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023bed8c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e92c98);
  puVar1 = &UNK_1104fd310;
  func_0x000107c613fc(&UNK_1104fd310,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puVar2 = &UNK_1104fd978;
  func_0x000107c613fc(&UNK_1104fd978,0x28,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  pcStack_50 = FUN_1023bfebc;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1104fd990;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61574(puVar1);
  func_0x000107c4e524(uVar4);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 1023bee88; end: 1023beed7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023bee88(long param_1)

{
  param_1 = param_1 + _DAT_112e92c28;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c41e14();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 1023beed8; end: 1023befd7;  */

/* WARNING: Possible PIC construction at 0x0001023bef8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023bef90) */
/* WARNING: Removing unreachable block (ram,0x0001023befac) */
/* WARNING: Removing unreachable block (ram,0x0001023befc0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023beed8(long param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  
  param_1 = param_1 + _DAT_112e92c28;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c41e14();
    func_0x000107c615e8(param_1);
  }
  lVar2 = param_5;
  if (param_5 == 0) {
    FUN_1023c0d28();
    param_4 = param_1;
    lVar2 = param_2;
  }
  puVar1 = PTR_PTR_1126afde0;
  func_0x000107c61168(PTR_PTR_1126afde0);
  func_0x000107c61434(param_5);
  func_0x000107c5fadc(param_4,lVar2);
  func_0x000107c6142c(lVar2);
  func_0x000107c409d8(puVar1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1023befd8; end: 1023bf047;  */

void FUN_1023befd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_1023bf048(param_2,param_3);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1023bf048; end: 1023bf1c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023bf048(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar5 = &puStack_80;
  lVar7 = unaff_x20;
  func_0x000107c614f0();
  lVar1 = _DAT_112e92ca8;
  if (*(long *)(unaff_x20 + _DAT_112e92ca8) == 0) {
    *(undefined1 *)(unaff_x20 + _DAT_112e92cb0) = 1;
    lVar2 = *(long *)(unaff_x20 + _DAT_112e92c38);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 == 0) {
      lVar7 = 0;
    }
    else {
      func_0x0001023be1dc(param_1);
      puVar3 = &UNK_1104fd310;
      func_0x000107c613fc(&UNK_1104fd310,0x18,7);
      func_0x000107c61614(puVar3 + 0x10);
      puVar4 = &UNK_1104fd9c8;
      func_0x000107c613fc(&UNK_1104fd9c8,0x20,7);
      *(undefined **)(puVar4 + 0x10) = puVar3;
      *(long *)(puVar4 + 0x18) = lVar7;
      uStack_60 = 0x1023bfec8;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_101c9e8c0;
      puStack_68 = &UNK_1104fd9e0;
      puStack_58 = puVar4;
      func_0x000107c60bc4(&puStack_80);
      func_0x000107c61574(puStack_58);
      lVar7 = lVar2;
      func_0x000107c43dd8();
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(param_1);
    }
    uVar6 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar7;
    func_0x000107c615e8(uVar6);
  }
  return;
}



/* Entry: 1023bf1c4; end: 1023bf89f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023bf1c4(long param_1,long param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  puVar10 = auStack_78;
  func_0x000107c61428(param_4 + 0x10,puVar10,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61618();
  lVar11 = _DAT_112e92c90;
  if (param_4 == 0) {
    return;
  }
  uVar13 = *(undefined8 *)(param_4 + _DAT_112e92c90);
  func_0x000107c6157c(uVar13);
  FUN_1023b8478(param_3);
  func_0x000107c61574(uVar13);
  lVar2 = _DAT_112e92cc0;
  if (param_2 == 0) {
    puVar3 = *(undefined **)(param_4 + _DAT_112e92cc0);
    if (puVar3 != (undefined *)0x0 && param_1 != 0) {
      func_0x000107c61174();
      func_0x000107c61174(param_1);
      puVar4 = puVar3;
      func_0x000107c3f564();
      func_0x000107c61180();
      uVar13 = 0;
      FUN_1023bff68(0,0x112e12808,&PTR_PTR_1126bd998);
      puVar14 = puVar4;
      func_0x000107c5fc54(puVar4,uVar13);
      func_0x000107c61170(puVar4);
      lVar5 = param_1;
      func_0x000107c3f564(param_1);
      func_0x000107c61180();
      lVar12 = lVar5;
      func_0x000107c5fc54();
      func_0x000107c61170(lVar5);
      puStack_a8 = puVar14;
      func_0x000101c9fdb4(lVar12);
      puVar4 = puStack_a8;
      puVar14 = PTR_PTR_1126bd9a0;
      func_0x000107c610f8();
      puVar6 = puVar4;
      func_0x000107c5fc48(puVar4);
      func_0x000107c45ce4();
      func_0x000107c61170(puVar6);
      uVar7 = *(undefined8 *)(param_4 + lVar2);
      *(undefined **)(param_4 + lVar2) = puVar14;
      func_0x000107c61170(uVar7);
      if ((ulong)puVar4 >> 0x3e == 0) {
        puVar14 = *(undefined **)(((ulong)puVar4 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar14 = (undefined *)((ulong)puVar4 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar4) {
          puVar14 = puVar4;
        }
        func_0x000107c60480();
      }
      func_0x000107c6142c();
      if (1 < (long)puVar14) {
        *(undefined8 *)(param_4 + _DAT_112e92cc8) = 1;
      }
      if (SCARRY8(*(long *)(param_4 + _DAT_112e92cd0),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1023bf8a0);
        (*pcVar1)();
      }
      *(long *)(param_4 + _DAT_112e92cd0) = *(long *)(param_4 + _DAT_112e92cd0) + 1;
      lVar2 = _DAT_112e92cb8;
      if (*(char *)(param_4 + _DAT_112e92cb8) == '\x01') {
        FUN_1023bda9c();
        if (puVar4 != (undefined *)0x0) {
          puVar6 = puVar4;
          FUN_1023bfd34();
          puVar8 = puVar6;
          FUN_1023bc208();
          puVar14 = &UNK_1104fda68;
          func_0x000107c613fc(&UNK_1104fda68,0x30,7);
          *(long *)(puVar14 + 0x10) = param_4;
          *(undefined **)(puVar14 + 0x18) = puVar6;
          *(undefined8 *)(puVar14 + 0x20) = uVar13;
          *(undefined **)(puVar14 + 0x28) = puVar4;
          uStack_88 = 0x1023bff04;
          puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_a0 = 0x42000000;
          puStack_98 = &UNK_1000f6b44;
          puStack_90 = &UNK_1104fda80;
          ppuVar9 = &puStack_a8;
          puStack_80 = puVar14;
          func_0x000107c60bc4(ppuVar9);
          puVar14 = puStack_80;
          func_0x000107c61174(param_4);
          func_0x000107c61434(uVar13);
          func_0x000107c61174(puVar4);
          func_0x000107c61574(puVar14);
          func_0x000107c4e524(puVar8);
          func_0x000107c61170(puVar4);
          func_0x000107c61170(param_1);
          func_0x000107c61170(puVar3);
          func_0x000107c60bd0(ppuVar9);
          func_0x000107c615e8(puVar8);
          lVar11 = *(long *)(param_4 + lVar11);
          *(undefined8 *)(lVar11 + 0x18) = 0;
          *(undefined1 *)(lVar11 + 0x20) = 0;
          uVar7 = *(undefined8 *)(lVar11 + 0x48);
          *(undefined **)(lVar11 + 0x40) = puVar6;
          *(undefined8 *)(lVar11 + 0x48) = uVar13;
          func_0x000107c6142c(uVar7);
          goto LAB_1023bf738;
        }
        FUN_1023bc208();
        puVar14 = &UNK_1104fda18;
        func_0x000107c613fc(&UNK_1104fda18,0x38,7);
        *(long *)(puVar14 + 0x10) = param_4;
        *(undefined8 *)(puVar14 + 0x18) = 0xd000000000000017;
        *(undefined8 *)(puVar14 + 0x28) = 0;
        *(undefined8 *)(puVar14 + 0x30) = 0;
        *(undefined8 *)(puVar14 + 0x20) = 0x800000010f096240;
        uStack_88 = 0x1023c009c;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        puStack_98 = &UNK_1000f6b44;
        puStack_90 = &UNK_1104fda30;
        ppuVar9 = &puStack_a8;
        puStack_80 = puVar14;
        func_0x000107c60bc4(ppuVar9);
        puVar14 = puStack_80;
        lVar5 = param_4;
        func_0x000107c61174();
        func_0x000107c61574(puVar14);
        func_0x000107c4e524(puVar4);
        func_0x000107c60bd0(ppuVar9);
        func_0x000107c615e8(puVar4);
        lVar12 = *(long *)(param_4 + lVar11);
        *(undefined8 *)(lVar12 + 0x18) = 2;
        *(undefined1 *)(lVar12 + 0x20) = 0;
        *(undefined8 *)(lVar12 + 0x28) = 0x3f0;
        *(undefined1 *)(lVar12 + 0x30) = 0;
        lVar11 = lVar12;
        func_0x000107c6157c();
        FUN_1023b8138();
        if (lVar11 != 0) {
          func_0x000107c4bc98(*(undefined8 *)(lVar12 + 0x10));
          func_0x000107c61170(lVar11);
        }
        FUN_1023b84fc();
        func_0x000107c61170(puVar3);
        func_0x000107c61170(param_1);
        func_0x000107c61574(lVar12);
        uVar13 = *(undefined8 *)(lVar5 + _DAT_112e92ca8);
        *(undefined8 *)(lVar5 + _DAT_112e92ca8) = 0;
      }
      else {
        func_0x000107c61170(param_1);
        func_0x000107c61170(puVar3);
LAB_1023bf738:
        uVar13 = *(undefined8 *)(param_4 + _DAT_112e92ca8);
        *(undefined8 *)(param_4 + _DAT_112e92ca8) = 0;
      }
      func_0x000107c615e8(uVar13);
      *(undefined1 *)(param_4 + lVar2) = 0;
      goto LAB_1023bf4b0;
    }
    uVar13 = *(undefined8 *)(param_4 + _DAT_112e92ca8);
    *(undefined8 *)(param_4 + _DAT_112e92ca8) = 0;
    func_0x000107c615e8(uVar13);
  }
  else {
    func_0x000107c614b0(param_2);
    lVar2 = param_2;
    func_0x000107c5ed2c();
    lVar5 = lVar2;
    func_0x000107c3fcb0();
    func_0x000107c61170(lVar2);
    if (lVar5 != 0x3ee) {
      puStack_a8 = (undefined *)0x0;
      uStack_a0 = 0xe000000000000000;
      func_0x000107c602fc(0x13);
      func_0x000107c6142c(uStack_a0);
      puStack_a8 = (undefined *)0x203a726f727265;
      uStack_a0 = 0xe700000000000000;
      lVar2 = param_2;
      func_0x000107c5ed2c(param_2);
      lVar5 = lVar2;
      func_0x000107c417f0();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      lVar2 = lVar5;
      func_0x000107c5faec(lVar5);
      func_0x000107c61170(lVar5);
      func_0x000107c5fb78(lVar2,puVar10);
      func_0x000107c6142c(puVar10);
      func_0x000107c5fb78(0x203a65646f63202c,0xe800000000000000);
      lVar2 = param_2;
      func_0x000107c5ed2c();
      func_0x000107c3fcb0();
      func_0x000107c61170(lVar2);
      puVar4 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
      func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar4);
      uVar13 = uStack_a0;
      puVar3 = puStack_a8;
      if (*(char *)(param_4 + _DAT_112e92cb8) == '\x01') {
        FUN_1023bc208();
        puVar14 = &UNK_1104fdab8;
        func_0x000107c613fc(&UNK_1104fdab8,0x38,7);
        *(long *)(puVar14 + 0x10) = param_4;
        *(undefined **)(puVar14 + 0x18) = puVar3;
        *(undefined8 *)(puVar14 + 0x28) = 0;
        *(undefined8 *)(puVar14 + 0x30) = 0;
        *(undefined8 *)(puVar14 + 0x20) = uVar13;
        uStack_88 = 0x1023c00a0;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        puStack_98 = &UNK_1000f6b44;
        puStack_90 = &UNK_1104fdad0;
        ppuVar9 = &puStack_a8;
        puStack_80 = puVar14;
        func_0x000107c60bc4(ppuVar9);
        puVar3 = puStack_80;
        func_0x000107c61174(param_4);
        func_0x000107c61434(uVar13);
        func_0x000107c61574(puVar3);
        func_0x000107c4e524(puVar4);
        func_0x000107c60bd0(ppuVar9);
        func_0x000107c6142c(uVar13);
        func_0x000107c615e8(puVar4);
      }
      else {
        func_0x000107c6142c(uStack_a0);
      }
    }
    uVar13 = *(undefined8 *)(param_4 + lVar11);
    func_0x000107c6157c(uVar13);
    FUN_1023b85ac(param_2);
    func_0x000107c61574(uVar13);
    func_0x000107c614ac(param_2);
    uVar13 = *(undefined8 *)(param_4 + _DAT_112e92ca8);
    *(undefined8 *)(param_4 + _DAT_112e92ca8) = 0;
    func_0x000107c615e8(uVar13);
  }
  *(undefined1 *)(param_4 + _DAT_112e92cb8) = 0;
LAB_1023bf4b0:
  *(undefined1 *)(param_4 + _DAT_112e92cb0) = 0;
  func_0x000107c61170(param_4);
  return;
}



/* Entry: 1023bf8a0; end: 1023bf9eb;  */

/* WARNING: Possible PIC construction at 0x0001023bf92c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023bf9a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023bf9c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023bf9a8) */
/* WARNING: Removing unreachable block (ram,0x0001023bf9e8) */
/* WARNING: Removing unreachable block (ram,0x0001023bf9ac) */
/* WARNING: Removing unreachable block (ram,0x0001023bf9c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023bf8a0(long param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = _DAT_112e92c28;
  lVar2 = param_1 + _DAT_112e92c28;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c41e14();
    func_0x000107c615e8(lVar2);
  }
  param_1 = param_1 + lVar1;
  func_0x000107c61618();
  if (param_1 == 0) {
    func_0x000107c5fadc(param_2,param_3);
    lVar2 = param_4;
    func_0x000107c43e28();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(param_3);
    }
    func_0x000107c4ce20(param_4);
    func_0x000107c61180();
    func_0x000107c3f550();
    func_0x000107c61180();
  }
  else {
    func_0x000107c5fadc(param_2,param_3);
    func_0x000107c41c00(param_1);
    func_0x000107c615e8(param_1);
    param_4 = param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1023bf9ec; end: 1023bfacf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023bf9ec(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  
  lVar3 = *(long *)(unaff_x20 + _DAT_112e92c80);
  lVar4 = lVar3;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar4 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar3);
    func_0x000107c61180();
    func_0x000107c615e8();
    uVar1 = *(ulong *)(unaff_x20 + _DAT_112e92c70);
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar2 = uVar1;
    if (uVar1 != 0) {
      func_0x000107c41050();
      func_0x000107c61180();
      func_0x000107c61170(uVar1);
      uVar1 = uVar2;
      func_0x000107c4a564();
      func_0x000107c61170();
      if ((uVar1 & 1) != 0) {
        return;
      }
    }
    lVar4 = *(long *)(unaff_x20 + _DAT_112e92c90);
    *(undefined8 *)(lVar4 + 0x18) = 3;
    *(undefined1 *)(lVar4 + 0x20) = 0;
    FUN_1023b8138();
    if (uVar2 != 0) {
      func_0x000107c4bc98(*(undefined8 *)(lVar4 + 0x10),param_2,uVar2);
      func_0x000107c61170(uVar2);
    }
    FUN_1023b84fc();
  }
  return;
}



/* Entry: 1023bfad0; end: 1023bfaf7; -[_TtC26SCMagicCaptionServicesImpl20MagicCaptionProvider plusSubscribeDidDismiss] */

void FUN_1023bfad0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1023bf9ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1023bfaf8; end: 1023bfbdb;  */

bool FUN_1023bfaf8(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x000107c5fb5c();
  if ((lVar2 < 1) || (lVar2 = param_3, func_0x000107c5fb5c(param_3,param_4), lVar2 < 1)) {
    bVar1 = false;
  }
  else {
    FUN_1023ba344(param_3,param_4,0xa89ce2,0xa300000000000000);
    FUN_1023ba344(param_1,param_2,0xa89ce2,0xa300000000000000);
    lVar2 = param_3;
    func_0x000107c5fb5c(param_3,param_4);
    func_0x0001031bff60(param_3,param_4,param_1,param_2);
    func_0x000107c6142c(param_4);
    func_0x000107c6142c(param_2);
    bVar1 = (double)param_3 <= (double)lVar2 / 4.0;
  }
  return bVar1;
}



/* Entry: 1023bfbdc; end: 1023bfc17;  */

void FUN_1023bfbdc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar4 + 0x10,auStack_48,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    FUN_1023bcc14(uVar2,uVar1,uVar3);
    func_0x000107c61170(lVar4);
  }
  return;
}



/* Entry: 1023bfc18; end: 1023bfc2f;  */

void FUN_1023bfc18(void)

{
  long unaff_x20;
  
  FUN_1023bdc88(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1023bfc30; end: 1023bfc5f;  */

/* WARNING: Possible PIC construction at 0x0001023bef8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023bef90) */
/* WARNING: Removing unreachable block (ram,0x0001023befac) */
/* WARNING: Removing unreachable block (ram,0x0001023befc0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023bfc30(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  
  lVar4 = *(long *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  lVar5 = *(long *)(unaff_x20 + 0x30);
  lVar1 = *(long *)(unaff_x20 + 0x10) + _DAT_112e92c28;
  func_0x000107c61618(lVar1,lVar4,*(undefined8 *)(unaff_x20 + 0x20));
  if (lVar1 != 0) {
    func_0x000107c41e14();
    func_0x000107c615e8(lVar1);
  }
  lVar6 = lVar5;
  if (lVar5 == 0) {
    FUN_1023c0d28();
    lVar3 = lVar1;
    lVar6 = lVar4;
  }
  puVar2 = PTR_PTR_1126afde0;
  func_0x000107c61168(PTR_PTR_1126afde0);
  func_0x000107c61434(lVar5);
  func_0x000107c5fadc(lVar3,lVar6);
  func_0x000107c6142c(lVar6);
  func_0x000107c409d8(puVar2);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1023bfc60; end: 1023bfc83;  */

void FUN_1023bfc60(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(0);
  return;
}



/* Entry: 1023bfc84; end: 1023bfc93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023bfc84(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  long unaff_x20;
  undefined1 auStack_88 [24];
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar4 = param_1;
  func_0x000107c3ebcc();
  if ((int)uVar4 != 0) {
    func_0x000107c61428(lVar5 + 0x10,auStack_88,0,0);
    lVar5 = lVar5 + 0x10;
    func_0x000107c61618();
    if (lVar5 != 0) {
      lVar8 = *(long *)(lVar5 + _DAT_112e92cd8);
      func_0x000107c61174();
      func_0x000107c61170(lVar5);
      lVar5 = lVar8;
      func_0x000107c5a850();
      func_0x000107c61180();
      func_0x000107c61170(lVar8);
      (**(code **)(lVar5 + 0x10))(lVar5,1);
      func_0x000107c60bd0(lVar5);
    }
  }
  puVar6 = &UNK_1104fd680;
  func_0x000107c613fc(&UNK_1104fd680,0x28,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar1;
  *(undefined8 *)(puVar6 + 0x18) = uVar3;
  *(undefined8 *)(puVar6 + 0x20) = param_1;
  pcStack_50 = FUN_1023bfcb8;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1104fd698;
  ppuVar7 = &puStack_70;
  puStack_48 = puVar6;
  func_0x000107c60bc4(ppuVar7);
  puVar6 = puStack_48;
  func_0x000107c6157c(uVar3);
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar6);
  func_0x000107c4e524(uVar2);
  func_0x000107c60bd0(ppuVar7);
  return;
}



/* Entry: 1023bfc94; end: 1023bfcb7;  */

void FUN_1023bfc94(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(1);
  return;
}



/* Entry: 1023bfcb8; end: 1023bfceb;  */

void FUN_1023bfcb8(void)

{
  code *pcVar1;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  func_0x000107c3ebcc(*(undefined8 *)(unaff_x20 + 0x20));
  (*pcVar1)();
  return;
}



/* Entry: 1023bfcec; end: 1023bfd27;  */

void FUN_1023bfcec(void)

{
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,1,0);
  *(undefined1 *)(unaff_x20 + 0x10) = 1;
  return;
}



/* Entry: 1023bfd28; end: 1023bfd33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023bfd28(long param_1,byte param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  char *pcVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x20;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined1 auStack_d8 [24];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar9 = *(long *)(unaff_x20 + 0x10);
  lVar12 = *(long *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar9 + 0x10,auStack_78,0,0);
  lVar2 = lVar9 + 0x10;
  func_0x000107c61618();
  if (lVar2 == 0) {
    return;
  }
  lVar3 = lVar12 + 0x10;
  func_0x000107c61428(lVar3,auStack_90,0,0);
  if ((*(byte *)(lVar12 + 0x10) & 1) != 0) {
    uVar4 = *(undefined8 *)(lVar2 + _DAT_112e92ca8);
    *(undefined8 *)(lVar2 + _DAT_112e92ca8) = 0;
    func_0x000107c615e8(uVar4);
    lVar9 = *(long *)(lVar2 + _DAT_112e92c90);
    *(undefined8 *)(lVar9 + 0x18) = 1;
    *(undefined1 *)(lVar9 + 0x20) = 0;
    goto LAB_1023be150;
  }
  uVar11 = 0xec0000004c525520;
  uVar13 = 0x616964656d206f4e;
  if (param_1 == 0) {
    if (param_2 < 4) {
      if (1 < param_2) goto LAB_1023bdfec;
      if (param_2 == 0) goto LAB_1023bdf74;
LAB_1023bdfcc:
      uVar11 = 0x800000010f096200;
      uVar13 = 0xd00000000000001a;
    }
    else {
      if (param_2 < 6) goto LAB_1023bdf94;
      if (param_2 == 6) goto LAB_1023be008;
      if (param_2 == 7) goto LAB_1023bdf50;
      uVar11 = 0x800000010f096170;
      uVar13 = 0xd000000000000017;
    }
  }
  else if (param_2 < 4) {
    if (param_2 < 2) {
      if (param_2 != 0) goto LAB_1023bdfcc;
LAB_1023bdf74:
      uVar11 = 0x800000010f096220;
      uVar13 = 0xd00000000000001d;
    }
    else {
LAB_1023bdfec:
      if (param_2 == 2) {
        pcVar8 = "No media reference";
        goto LAB_1023be018;
      }
    }
  }
  else if (param_2 < 6) {
LAB_1023bdf94:
    if (param_2 == 4) {
      uVar11 = 0xef4c525520746120;
      uVar13 = 0x6567616d69206f4e;
    }
    else {
      uVar11 = 0x800000010f0961b0;
      uVar13 = 0xd000000000000026;
    }
  }
  else if (param_2 == 6) {
LAB_1023be008:
    pcVar8 = "Unknown media type";
LAB_1023be018:
    uVar13 = 0xd000000000000012;
    uVar11 = (ulong)(pcVar8 + -0x20) | 0x8000000000000000;
  }
  else {
    if (param_2 != 7) {
      lVar12 = *(long *)(lVar2 + _DAT_112e92c38);
      func_0x000107c61174();
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar12 == 0) {
        func_0x000107c61170(param_1);
        lVar9 = 0;
      }
      else {
        uVar13 = uVar4;
        func_0x0001023be1dc(uVar4);
        uVar10 = *(undefined8 *)(lVar2 + _DAT_112e92c98);
        puVar6 = &UNK_1104fd310;
        func_0x000107c613fc(&UNK_1104fd310,0x18,7);
        func_0x000107c61428(lVar9 + 0x10,auStack_d8,0,0);
        lVar9 = lVar9 + 0x10;
        func_0x000107c61618(lVar9);
        func_0x000107c61614(puVar6 + 0x10,lVar9);
        func_0x000107c615f0(uVar10);
        func_0x000107c61170(lVar9);
        puVar5 = &UNK_1104fd838;
        func_0x000107c613fc(&UNK_1104fd838,0x30,7);
        *(undefined **)(puVar5 + 0x10) = puVar6;
        *(undefined8 *)(puVar5 + 0x18) = uVar4;
        *(long *)(puVar5 + 0x20) = param_1;
        *(undefined8 *)(puVar5 + 0x28) = uVar1;
        pcStack_a0 = FUN_1023bfe70;
        puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_b8 = 0x42000000;
        puStack_b0 = &UNK_101c9e8c0;
        puStack_a8 = &UNK_1104fd850;
        ppuVar7 = &puStack_c0;
        puStack_98 = puVar5;
        func_0x000107c60bc4(ppuVar7);
        puVar6 = puStack_98;
        func_0x000107c61174(param_1);
        func_0x000107c61174(uVar4);
        func_0x000107c61574(puVar6);
        lVar9 = lVar12;
        func_0x000107c43dd8();
        func_0x000107c61180();
        func_0x000107c61170(param_1);
        func_0x000107c60bd0(ppuVar7);
        func_0x000107c615e8(lVar12);
        func_0x000107c61170(uVar13);
        func_0x000107c615e8(uVar10);
      }
      uVar4 = *(undefined8 *)(lVar2 + _DAT_112e92ca8);
      *(long *)(lVar2 + _DAT_112e92ca8) = lVar9;
      func_0x000107c61170(lVar2);
      func_0x000107c615e8(uVar4);
      return;
    }
LAB_1023bdf50:
    uVar11 = 0xe700000000000000;
    uVar13 = 0x6e776f6e6b6e55;
  }
  FUN_1023bc208();
  puVar6 = &UNK_1104fd7e8;
  func_0x000107c613fc(&UNK_1104fd7e8,0x38,7);
  *(long *)(puVar6 + 0x10) = lVar2;
  *(undefined8 *)(puVar6 + 0x18) = uVar13;
  *(undefined8 *)(puVar6 + 0x28) = 0;
  *(undefined8 *)(puVar6 + 0x30) = 0;
  *(ulong *)(puVar6 + 0x20) = uVar11;
  pcStack_a0 = (code *)0x1023c0090;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0x42000000;
  puStack_b0 = &UNK_1000f6b44;
  puStack_a8 = &UNK_1104fd800;
  ppuVar7 = &puStack_c0;
  puStack_98 = puVar6;
  func_0x000107c60bc4(ppuVar7);
  puVar6 = puStack_98;
  func_0x000107c61434(uVar11);
  func_0x000107c61174();
  func_0x000107c61574(puVar6);
  func_0x000107c4e524(lVar3);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c6142c(uVar11);
  func_0x000107c615e8(lVar3);
  uVar4 = *(undefined8 *)(lVar2 + _DAT_112e92ca8);
  *(undefined8 *)(lVar2 + _DAT_112e92ca8) = 0;
  func_0x000107c615e8(uVar4);
  lVar9 = *(long *)(lVar2 + _DAT_112e92c90);
  *(undefined8 *)(lVar9 + 0x18) = 2;
  *(undefined1 *)(lVar9 + 0x20) = 0;
  *(undefined8 *)(lVar9 + 0x28) = 0x3f1;
  *(undefined1 *)(lVar9 + 0x30) = 0;
LAB_1023be150:
  lVar12 = lVar9;
  func_0x000107c6157c();
  FUN_1023b8138();
  if (lVar12 != 0) {
    func_0x000107c4bc98(*(undefined8 *)(lVar9 + 0x10));
    func_0x000107c61170(lVar12);
  }
  FUN_1023b84fc();
  func_0x000107c61170(lVar2);
  func_0x000107c61574(lVar9);
  return;
}



/* Entry: 1023bfd34; end: 1023bfe6f;  */

undefined1  [16] FUN_1023bfd34(long param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_50 = 0;
  uStack_48 = 0xe000000000000000;
  uVar8 = 0xa89ce2;
  func_0x000107c5fa68(&uStack_50,0xa89ce2,0xa300000000000000,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  uVar3 = uStack_48;
  uVar2 = uStack_50;
  func_0x000107c4ce20();
  func_0x000107c61180();
  lVar6 = param_1;
  func_0x000107c3f53c();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  if (lVar6 != 0) {
    lVar7 = lVar6;
    func_0x000107c5faec(lVar6);
    func_0x000107c61170(lVar6);
    uStack_50 = uVar2;
    uStack_48 = uVar3;
    func_0x000107c61434(uVar3);
    func_0x000107c5fb78(lVar7,uVar8);
    func_0x000107c6142c(uVar3);
    func_0x000107c6142c(uVar8);
    uVar8 = uStack_48;
    uVar2 = uStack_50;
    uStack_50 = 0;
    uStack_48 = 0xe000000000000000;
    func_0x000107c5fa68(&uStack_50,0xa89ce2,0xa300000000000000,
                        PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    uVar4 = uStack_48;
    uVar3 = uStack_50;
    uStack_50 = uVar2;
    uStack_48 = uVar8;
    func_0x000107c61434(uVar8);
    func_0x000107c5fb78(uVar3,uVar4);
    func_0x000107c6142c(uVar8);
    func_0x000107c6142c(uVar4);
    auVar1._8_8_ = uStack_48;
    auVar1._0_8_ = uStack_50;
    return auVar1;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1023bfe70);
  (*pcVar5)();
}



/* Entry: 1023bfe70; end: 1023bfe7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023bfe70(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long unaff_x20;
  undefined8 uVar15;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar11 = auStack_78;
  func_0x000107c61428(lVar3 + 0x10,puVar11,0,0,uVar5,uVar13,*(undefined8 *)(unaff_x20 + 0x28));
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  lVar12 = _DAT_112e92c90;
  if (lVar3 != 0) {
    uVar15 = *(undefined8 *)(lVar3 + _DAT_112e92c90);
    func_0x000107c6157c(uVar15);
    FUN_1023b8478(param_3);
    func_0x000107c61574(uVar15);
    if (param_2 == 0) {
      lVar14 = *(long *)(lVar3 + _DAT_112e92cc0);
      *(undefined8 *)(lVar3 + _DAT_112e92cc0) = param_1;
      func_0x000107c61174(param_1);
      func_0x000107c61170();
      *(undefined8 *)(lVar3 + _DAT_112e92cc8) = 0;
      FUN_1023bda9c();
      if (lVar14 == 0) {
        FUN_1023bc208();
        puVar9 = &UNK_1104fd888;
        func_0x000107c613fc(&UNK_1104fd888,0x38,7);
        *(long *)(puVar9 + 0x10) = lVar3;
        *(undefined8 *)(puVar9 + 0x18) = 0xd000000000000017;
        *(undefined8 *)(puVar9 + 0x28) = 0;
        *(undefined8 *)(puVar9 + 0x30) = 0;
        *(undefined8 *)(puVar9 + 0x20) = 0x800000010f096240;
        uStack_88 = 0x1023c0094;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        puStack_98 = &UNK_1000f6b44;
        puStack_90 = &UNK_1104fd8a0;
        ppuVar10 = &puStack_a8;
        puStack_80 = puVar9;
        func_0x000107c60bc4(ppuVar10);
        puVar9 = puStack_80;
        func_0x000107c61174(lVar3);
        func_0x000107c61574(puVar9);
        func_0x000107c4e524(lVar14);
        func_0x000107c60bd0(ppuVar10);
        func_0x000107c615e8(lVar14);
        lVar14 = *(long *)(lVar3 + lVar12);
        *(undefined8 *)(lVar14 + 0x18) = 2;
        *(undefined1 *)(lVar14 + 0x20) = 0;
        *(undefined8 *)(lVar14 + 0x28) = 0x3f0;
        *(undefined1 *)(lVar14 + 0x30) = 0;
        lVar12 = lVar14;
        func_0x000107c6157c();
        FUN_1023b8138();
        if (lVar12 != 0) {
          func_0x000107c4bc98(*(undefined8 *)(lVar14 + 0x10));
          func_0x000107c61170(lVar12);
        }
        FUN_1023b84fc();
        func_0x000107c61574(lVar14);
      }
      else {
        lVar6 = lVar14;
        FUN_1023bfd34();
        lVar4 = _DAT_112e92cd0;
        if (SCARRY8(*(long *)(lVar3 + _DAT_112e92cd0),1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1023bed8c);
          (*pcVar2)();
        }
        *(long *)(lVar3 + _DAT_112e92cd0) = *(long *)(lVar3 + _DAT_112e92cd0) + 1;
        lVar7 = lVar6;
        FUN_1023bc208();
        puVar9 = &UNK_1104fd8d8;
        func_0x000107c613fc(&UNK_1104fd8d8,0x30,7);
        *(long *)(puVar9 + 0x10) = lVar3;
        *(long *)(puVar9 + 0x18) = lVar6;
        *(undefined1 **)(puVar9 + 0x20) = puVar11;
        *(long *)(puVar9 + 0x28) = lVar14;
        uStack_88 = 0x1023c002c;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        puStack_98 = &UNK_1000f6b44;
        puStack_90 = &UNK_1104fd8f0;
        ppuVar10 = &puStack_a8;
        puStack_80 = puVar9;
        func_0x000107c60bc4(ppuVar10);
        puVar9 = puStack_80;
        lVar8 = lVar3;
        func_0x000107c61174();
        func_0x000107c61434(puVar11);
        func_0x000107c61174(lVar14);
        func_0x000107c61574(puVar9);
        func_0x000107c4e524(lVar7);
        func_0x000107c60bd0(ppuVar10);
        func_0x000107c615e8(lVar7);
        lVar12 = *(long *)(lVar3 + lVar12);
        *(undefined8 *)(lVar12 + 0x18) = 0;
        *(undefined1 *)(lVar12 + 0x20) = 0;
        uVar15 = *(undefined8 *)(lVar12 + 0x48);
        *(long *)(lVar12 + 0x40) = lVar6;
        *(undefined1 **)(lVar12 + 0x48) = puVar11;
        func_0x000107c6142c(uVar15);
        lVar12 = *(long *)(lVar8 + _DAT_112e92c70);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar12 != 0) {
          lVar6 = lVar12;
          func_0x000107c41050();
          func_0x000107c61180();
          func_0x000107c61170(lVar12);
          lVar12 = lVar6;
          func_0x000107c4a564();
          func_0x000107c61170(lVar6);
          if ((((int)lVar12 != 0) && (uVar15 = uVar5, func_0x000107c5e728(), (int)uVar15 != 0)) &&
             (*(long *)(lVar3 + lVar4) == 1)) {
            FUN_1023bed8c(uVar5,uVar13);
          }
        }
        func_0x000107c61170(lVar14);
      }
    }
    else {
      func_0x000107c614b0(param_2);
      lVar14 = param_2;
      func_0x000107c5ed2c();
      lVar4 = lVar14;
      func_0x000107c3fcb0();
      func_0x000107c61170(lVar14);
      if (lVar4 != 0x3ee) {
        puStack_a8 = (undefined *)0x0;
        uStack_a0 = 0xe000000000000000;
        func_0x000107c602fc(0x13);
        func_0x000107c6142c(uStack_a0);
        puStack_a8 = (undefined *)0x203a726f727265;
        uStack_a0 = 0xe700000000000000;
        lVar14 = param_2;
        func_0x000107c5ed2c(param_2);
        lVar4 = lVar14;
        func_0x000107c417f0();
        func_0x000107c61180();
        func_0x000107c61170(lVar14);
        lVar14 = lVar4;
        func_0x000107c5faec(lVar4);
        func_0x000107c61170(lVar4);
        func_0x000107c5fb78(lVar14,puVar11);
        func_0x000107c6142c(puVar11);
        func_0x000107c5fb78(0x203a65646f63202c,0xe800000000000000);
        lVar14 = param_2;
        func_0x000107c5ed2c();
        func_0x000107c3fcb0();
        func_0x000107c61170(lVar14);
        puVar9 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
        func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
        func_0x000107c5fb78();
        func_0x000107c6142c(puVar9);
        uVar13 = uStack_a0;
        puVar1 = puStack_a8;
        uVar5 = uStack_a0;
        func_0x000107c61434(uStack_a0);
        FUN_1023bc208();
        puVar9 = &UNK_1104fd928;
        func_0x000107c613fc(&UNK_1104fd928,0x38,7);
        *(long *)(puVar9 + 0x10) = lVar3;
        *(undefined **)(puVar9 + 0x18) = puVar1;
        *(undefined8 *)(puVar9 + 0x28) = 0;
        *(undefined8 *)(puVar9 + 0x30) = 0;
        *(undefined8 *)(puVar9 + 0x20) = uVar13;
        uStack_88 = 0x1023c0098;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        puStack_98 = &UNK_1000f6b44;
        puStack_90 = &UNK_1104fd940;
        ppuVar10 = &puStack_a8;
        puStack_80 = puVar9;
        func_0x000107c60bc4(ppuVar10);
        puVar9 = puStack_80;
        func_0x000107c61434(uVar13);
        func_0x000107c61174(lVar3);
        func_0x000107c61574(puVar9);
        func_0x000107c4e524(uVar5);
        func_0x000107c60bd0(ppuVar10);
        func_0x000107c61430(uVar13,2);
        func_0x000107c615e8(uVar5);
      }
      uVar13 = *(undefined8 *)(lVar3 + lVar12);
      func_0x000107c6157c(uVar13);
      FUN_1023b85ac(param_2);
      func_0x000107c61574(uVar13);
      func_0x000107c614ac(param_2);
    }
    uVar13 = *(undefined8 *)(lVar3 + _DAT_112e92ca8);
    *(undefined8 *)(lVar3 + _DAT_112e92ca8) = 0;
    func_0x000107c61170(lVar3);
    func_0x000107c615e8(uVar13);
  }
  return;
}



/* Entry: 1023bfe7c; end: 1023bfebb;  */

void FUN_1023bfe7c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1023bfebc; end: 1023bfecf;  */

void FUN_1023bfebc(void)

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
    FUN_1023bf048(uVar1,uVar3);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 1023bfed0; end: 1023bff53;  */

void FUN_1023bfed0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1023bff54; end: 1023bff67;  */

void FUN_1023bff54(code *UNRECOVERED_JUMPTABLE)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001023bff64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
             *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
             *(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Entry: 1023bff68; end: 1023bffcb;  */

void FUN_1023bff68(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1023bffcc; end: 1023c00a3;  */

void FUN_1023bffcc(long param_1,long param_2)

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



/* Entry: 1023c00a4; end: 1023c015b;  */

void FUN_1023c00a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x58) = param_10;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  *(undefined8 *)(unaff_x20 + 0x68) = param_15;
  *(undefined8 *)(unaff_x20 + 0x60) = param_14;
  *(undefined8 *)(unaff_x20 + 0x70) = param_16;
  *(undefined8 *)(unaff_x20 + 0x78) = param_13;
  *(undefined8 *)(unaff_x20 + 0x80) = param_11;
  *(undefined8 *)(unaff_x20 + 0x88) = param_12;
  return;
}



/* Entry: 1023c015c; end: 1023c0193;  */

void FUN_1023c015c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x58) = param_10;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  *(undefined8 *)(unaff_x20 + 0x68) = param_15;
  *(undefined8 *)(unaff_x20 + 0x60) = param_14;
  *(undefined8 *)(unaff_x20 + 0x70) = param_16;
  *(undefined8 *)(unaff_x20 + 0x78) = param_13;
  *(undefined8 *)(unaff_x20 + 0x80) = param_11;
  *(undefined8 *)(unaff_x20 + 0x88) = param_12;
  return;
}



/* Entry: 1023c0194; end: 1023c02c7;  */

/* WARNING: Possible PIC construction at 0x0001023c0240: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023c0244) */

void FUN_1023c0194(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  code *pcVar4;
  long unaff_x20;
  
  puVar1 = &UNK_1104fdb08;
  func_0x000107c613fc(&UNK_1104fdb08,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  uVar2 = 0x112e92d28;
  func_0x0001000285a8(0x112e92d28,&UNK_10da9ea70);
  func_0x000107c613fc();
  pcVar3 = FUN_1023c02c8;
  func_0x0001000bdd8c(FUN_1023c02c8,puVar1,uVar2);
  pcVar4 = pcVar3;
  func_0x0001000bf56c();
  func_0x000107c61574(pcVar3);
  func_0x000107c610f8(PTR_PTR_1126aa700);
  func_0x000107c47588();
  func_0x000107c42c20(*(undefined8 *)(unaff_x20 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar4);
  return;
}



/* Entry: 1023c02c8; end: 1023c02cf;  */

void FUN_1023c02c8(long *param_1)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    FUN_1023c02d0();
    func_0x000107c61574(lVar1);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 1023c02d0; end: 1023c090f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1023c02d0(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long lVar23;
  long *plVar24;
  undefined8 uVar25;
  long unaff_x20;
  undefined8 uVar26;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c4c124();
  func_0x000107c61180();
  uVar25 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = uVar25;
  func_0x000107c5b1b8();
  func_0x000107c61180();
  func_0x000107c5b1fc();
  func_0x000107c61180();
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c4ad1c();
  func_0x000107c61180();
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar26 = *(undefined8 *)(*(long *)(unaff_x20 + 0x28) + _DAT_11302ecd0);
  func_0x000107c615f0(uVar26);
  func_0x000107c3e944();
  func_0x000107c61180();
  uVar7 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c4d80c();
  func_0x000107c61180();
  uVar8 = *(undefined8 *)(unaff_x20 + 0x40);
  func_0x000107c5c360();
  func_0x000107c61180();
  lVar9 = *(long *)(unaff_x20 + 0x50);
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar9 == 0) {
    func_0x000107c61170(uVar8);
    func_0x000107c615e8(uVar26);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar25);
    func_0x000107c61170(uVar3);
    goto LAB_1023c0898;
  }
  lVar10 = *(long *)(*(long *)(unaff_x20 + 0x48) + _DAT_113093a98);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar10 == 0) {
LAB_1023c0860:
    func_0x000107c61170(uVar8);
    func_0x000107c615e8(uVar26);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar25);
    func_0x000107c61170(uVar3);
  }
  else {
    lVar11 = *(long *)(*(long *)(unaff_x20 + 0x80) + _DAT_113083868);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar11 == 0) {
      func_0x000107c615e8(lVar10);
      goto LAB_1023c0860;
    }
    lVar12 = *(long *)(*(long *)(unaff_x20 + 0x88) + _DAT_113083800);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar12 != 0) {
      uVar13 = 0xd000000000000027;
      func_0x000107c5fadc(0xd000000000000027,0x800000010f096290);
      lVar14 = lVar10;
      func_0x000107c4e60c();
      func_0x000107c61180();
      func_0x000107c61170(uVar13);
      lVar15 = 0;
      func_0x0001023bba98();
      func_0x000107c613fc();
      *(undefined8 *)(lVar15 + 0x20) = uVar5;
      *(long *)(lVar15 + 0x28) = lVar9;
      *(long *)(lVar15 + 0x10) = lVar14;
      *(undefined8 *)(lVar15 + 0x18) = uVar4;
      func_0x000107c615f4(uVar4,2);
      func_0x000107c615f0(uVar5);
      func_0x000107c615f0(lVar14);
      lVar16 = lVar9;
      func_0x000107c615f0(lVar9);
      FUN_1023c0b78();
      puVar17 = PTR_PTR_1126c6770;
      func_0x000107c610f8();
      func_0x000107c495a4();
      func_0x000107c61170(lVar16);
      lVar18 = 0;
      FUN_1023b894c();
      lVar16 = lVar18;
      func_0x000107c610f8();
      puVar1 = (undefined8 *)(lVar16 + _DAT_112e92b18);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar2 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
      *(undefined **)(lVar16 + _DAT_112e92b20) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
      *(undefined **)(lVar16 + _DAT_112e92b28) = puVar2;
      *(undefined8 *)(lVar16 + _DAT_112e92b30) = 0;
      *(long *)(lVar16 + _DAT_112e92b00) = lVar11;
      *(long *)(lVar16 + _DAT_112e92b08) = lVar12;
      *(undefined8 *)(lVar16 + _DAT_112e92b10) = uVar5;
      puVar2 = PTR_s_init_1125d9248;
      lStack_78 = lVar16;
      lStack_70 = lVar18;
      func_0x000107c615f0(uVar5);
      func_0x000107c615f0(lVar11);
      func_0x000107c615f0(lVar12);
      plVar19 = &lStack_78;
      func_0x000107c61154(plVar19,puVar2);
      lVar20 = 0;
      func_0x0001023b86ec();
      func_0x000107c613fc();
      *(undefined1 *)(lVar20 + 0x20) = 1;
      *(undefined8 *)(lVar20 + 0x28) = 0;
      *(undefined1 *)(lVar20 + 0x30) = 1;
      *(undefined8 *)(lVar20 + 0x40) = 0;
      *(undefined8 *)(lVar20 + 0x38) = 0;
      *(undefined8 *)(lVar20 + 0x50) = 0;
      *(undefined8 *)(lVar20 + 0x48) = 0;
      *(undefined8 *)(lVar20 + 0x60) = 0;
      *(undefined8 *)(lVar20 + 0x58) = 0;
      *(undefined1 *)(lVar20 + 0x68) = 1;
      *(undefined8 *)(lVar20 + 0x70) = 0;
      *(long **)(lVar20 + 0x10) = plVar19;
      *(undefined8 *)(lVar20 + 0x18) = 0;
      uVar13 = *(undefined8 *)(unaff_x20 + 0x70);
      uVar21 = *(undefined8 *)(unaff_x20 + 0x78);
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      uVar22 = uVar21;
      FUN_1023c0910();
      lVar23 = 0;
      FUN_1023bc4d8();
      lVar18 = lVar23;
      func_0x000107c610f8();
      func_0x000107c61614(lVar18 + _DAT_112e92c28,0);
      *(undefined8 *)(lVar18 + _DAT_112e92ca0) = 0;
      *(undefined8 *)(lVar18 + _DAT_112e92ca8) = 0;
      *(undefined1 *)(lVar18 + _DAT_112e92cb0) = 0;
      *(undefined1 *)(lVar18 + _DAT_112e92cb8) = 0;
      *(undefined8 *)(lVar18 + _DAT_112e92cc0) = 0;
      *(undefined8 *)(lVar18 + _DAT_112e92cc8) = 0;
      *(undefined8 *)(lVar18 + _DAT_112e92cd0) = 0;
      *(undefined8 *)(lVar18 + _DAT_112e92ce8) = 0;
      lVar16 = _DAT_112e92cf0;
      func_0x0001000c6560(0);
      func_0x000107c613fc();
      func_0x000107c61174();
      plVar24 = plVar19;
      func_0x0001000c6580();
      *(long **)(lVar18 + lVar16) = plVar24;
      *(undefined1 *)(lVar18 + _DAT_112e92cf8) = 2;
      *(undefined8 *)(lVar18 + _DAT_112e92c38) = uVar3;
      *(undefined8 *)(lVar18 + _DAT_112e92c40) = uVar4;
      *(undefined8 *)(lVar18 + _DAT_112e92c48) = uVar25;
      *(undefined8 *)(lVar18 + _DAT_112e92c50) = uVar5;
      *(undefined8 *)(lVar18 + _DAT_112e92c58) = uVar6;
      *(undefined8 *)(lVar18 + _DAT_112e92c60) = uVar7;
      *(undefined8 *)(lVar18 + _DAT_112e92c68) = uVar26;
      *(undefined8 *)(lVar18 + _DAT_112e92c70) = uVar8;
      *(long *)(lVar18 + _DAT_112e92c78) = lVar15;
      *(long *)(lVar18 + _DAT_112e92c98) = lVar14;
      *(undefined8 *)(lVar18 + _DAT_112e92c80) = uVar13;
      *(undefined8 *)(lVar18 + _DAT_112e92c88) = uVar21;
      *(undefined8 *)(lVar18 + _DAT_112e92cd8) = uVar22;
      *(undefined **)(lVar18 + _DAT_112e92ce0) = puVar17;
      *(long **)(lVar18 + _DAT_112e92c30) = plVar19;
      *(long *)(lVar18 + _DAT_112e92c90) = lVar20;
      plVar24 = &lStack_88;
      lStack_88 = lVar18;
      lStack_80 = lVar23;
      func_0x000107c61154(plVar24,PTR_s_init_1125d9248);
      func_0x000107c615e8(lVar10);
      func_0x000107c61170(plVar19);
      func_0x000107c615e8(lVar12);
      func_0x000107c615e8(lVar11);
      func_0x000107c615e8(lVar9);
      func_0x000107c615e8(uVar4);
      return plVar24;
    }
    func_0x000107c615e8(lVar10);
    func_0x000107c61170(uVar8);
    func_0x000107c615e8(uVar26);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar25);
    func_0x000107c61170(uVar3);
    func_0x000107c615e8(lVar11);
  }
  func_0x000107c615e8(lVar9);
LAB_1023c0898:
  func_0x000107c615e8(uVar5);
  func_0x000107c615e8(uVar4);
  return (long *)0x0;
}



/* Entry: 1023c0910; end: 1023c0a7b;  */

undefined * FUN_1023c0910(void)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long unaff_x20;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar9 = &puStack_b0;
  lVar3 = *(long *)(unaff_x20 + 0x58);
  func_0x000107c42eac();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    puVar5 = &UNK_1104fdb48;
    func_0x000107c613fc(&UNK_1104fdb48,0x18,7);
    *(long *)(puVar5 + 0x10) = lVar4;
    puVar6 = &UNK_1104fdb70;
    func_0x000107c613fc(&UNK_1104fdb70,0x18,7);
    *(long *)(puVar6 + 0x10) = lVar4;
    puVar7 = PTR_PTR_1126c6798;
    func_0x000107c610f8(PTR_PTR_1126c6798);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_60 = FUN_1023c0cc8;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1001de374;
    puStack_68 = &UNK_1104fdb88;
    ppuVar8 = &puStack_80;
    puStack_58 = puVar5;
    func_0x000107c60bc4(ppuVar8);
    pcStack_90 = FUN_1023c0cec;
    puStack_b0 = puVar1;
    uStack_a8 = 0x42000000;
    puStack_a0 = &UNK_100288f10;
    puStack_98 = &UNK_1104fdbb0;
    puStack_88 = puVar6;
    func_0x000107c60bc4(&puStack_b0);
    func_0x000107c61174(lVar4);
    func_0x000107c46b5c(puVar7);
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c61574(puStack_88);
    func_0x000107c61574(puStack_58);
    return puVar7;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1023c0a7c);
  (*pcVar2)();
}



/* Entry: 1023c0a7c; end: 1023c0b2f;  */

void FUN_1023c0a7c(void)

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



/* Entry: 1023c0b30; end: 1023c0b4f;  */

void FUN_1023c0b30(void)

{
  FUN_1023c0194();
  return;
}



/* Entry: 1023c0b50; end: 1023c0b57;  */

undefined8 FUN_1023c0b50(void)

{
  return 0;
}



/* Entry: 1023c0b58; end: 1023c0b77;  */

void FUN_1023c0b58(void)

{
  func_0x000107c61168(&PTR_PTR_112e92d70);
  return;
}



/* Entry: 1023c0b78; end: 1023c0cc7;  */

undefined * FUN_1023c0b78(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  func_0x0001023c0df8();
  uVar1 = param_1;
  uVar6 = param_2;
  func_0x0001023c0ec8();
  uVar2 = uVar1;
  uVar7 = uVar6;
  func_0x0001023c0f98();
  uVar3 = uVar2;
  uVar8 = uVar7;
  func_0x0001023c1068();
  puVar4 = PTR_PTR_1126c6790;
  func_0x000107c610f8(PTR_PTR_1126c6790);
  uVar5 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c5fadc(uVar1,uVar6);
  func_0x000107c6142c(uVar6);
  func_0x000107c5fadc(uVar2,uVar7);
  func_0x000107c6142c(uVar7);
  func_0x000107c5fadc(uVar3,uVar8);
  func_0x000107c6142c(uVar8);
  uVar6 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  func_0x000107c48b80(puVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar6);
  return puVar4;
}



/* Entry: 1023c0cc8; end: 1023c0ceb;  */

bool FUN_1023c0cc8(void)

{
  bool bVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  bVar1 = false;
  if (lVar2 != 0) {
    func_0x000107c3ab08();
    bVar1 = lVar2 == 1;
  }
  return bVar1;
}



/* Entry: 1023c0cec; end: 1023c0d27;  */

void FUN_1023c0cec(ulong param_1)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c160850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(unaff_x20 + 0x10),PTR_s_setAICaptionsJitAcceptedVersion__112635c30,
               param_1 & 1);
    return;
  }
  return;
}



/* Entry: 1023c0d28; end: 1023c119f;  */

undefined1  [16] FUN_1023c0d28(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffe8;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f0962c0);
  uVar3 = 0x43636967614d4353;
  func_0x000107c5fadc(0x43636967614d4353,0xee006e6f69747061);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1023c0df8);
  (*pcVar1)();
}



/* Entry: 1023c11a0; end: 1023c11eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023c11a0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e92e50) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1023c11ec; end: 1023c1333;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1023c11ec(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 in_x6;
  long in_x7;
  undefined8 uVar2;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  undefined *apuStack_78 [2];
  undefined8 uStack_68;
  
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    func_0x000107c5fe08(param_3,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  }
  uVar2 = 0;
  if (in_x7 != 0) {
    func_0x000107c5fadc(in_x6,in_x7);
    uVar2 = in_x6;
  }
  if (in_stack_00000008 == 0) {
    in_stack_00000000 = 0;
  }
  else {
    func_0x000107c5fadc(in_stack_00000000,in_stack_00000008);
  }
  puVar1 = PTR_PTR_1126aa278;
  func_0x000107c610f8();
  func_0x000107c484d8();
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(in_stack_00000000);
  apuStack_78[0] = puVar1;
  func_0x00010008a7c8(&uStack_68,apuStack_78);
  func_0x000100083b20(apuStack_78);
  func_0x000107c61574(uStack_68);
  func_0x000107c615e8(apuStack_78[0]);
  return puVar1;
}



/* Entry: 1023c1334; end: 1023c1497; -[_TtC26SCMemoriesPickerScopeProxy29SCMemoriesPickerScopeServices buildWithScopeDelegate:existingSnapsCount:disabledSnapIds:actionHandler:uiContainer:config:s2rFeature:s2rSubFeature:] */

void FUN_1023c1334(undefined8 param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9
                  ,long param_10)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (param_5 == 0) {
    param_5 = 0;
  }
  else {
    param_2 = PTR___sSSN_11034da80;
    func_0x000107c5fe10(param_5,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  }
  if (param_9 == 0) {
    param_9 = 0;
    puVar1 = (undefined *)0x0;
  }
  else {
    func_0x000107c5faec(param_9);
    puVar1 = param_2;
  }
  if (param_10 == 0) {
    param_10 = 0;
    param_2 = (undefined *)0x0;
  }
  else {
    func_0x000107c5faec();
  }
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_6);
  func_0x000107c615f0(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_1);
  uVar2 = param_3;
  FUN_1023c11ec(param_3,param_4,param_5,param_6,param_7,param_8,param_9,puVar1,param_10,param_2);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_6);
  func_0x000107c615e8(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(puVar1);
  func_0x000107c6142c(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1023c1498; end: 1023c14cb;  */

void FUN_1023c1498(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1023c14cc; end: 1023c14fb; -[_TtC26SCMemoriesPickerScopeProxy29SCMemoriesPickerScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023c14cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e92e50));
  return;
}



/* Entry: 1023c14fc; end: 1023c1513; -[_TtC25SCUserTaggingCarouselImpl23UserTaggingCarouselImpl delegate] */

void FUN_1023c14fc(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1023c1514; end: 1023c153f; -[_TtC25SCUserTaggingCarouselImpl23UserTaggingCarouselImpl setDelegate:] */

void FUN_1023c1514(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  func_0x000107c615f0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 1023c1540; end: 1023c160f;  */

void FUN_1023c1540(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  puVar1 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c615f0(param_2);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x28) = puVar1;
  if (param_1 != 0) {
    uVar2 = param_3;
    FUN_1023c1610(param_3);
    puVar1 = PTR_PTR_1126dc1b8;
    func_0x000107c610f8();
    func_0x000107c49520();
    func_0x000107c61170(uVar2);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
    *(undefined **)(unaff_x20 + 0x20) = puVar1;
    func_0x000107c61170(uVar2);
    FUN_1023c1920(0,0xe000000000000000);
    func_0x000107c615e8(param_1);
  }
  func_0x000107c615e8(param_2);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1023c1610; end: 1023c191f;  */

undefined * FUN_1023c1610(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar7 = &puStack_90;
  ppuVar8 = &puStack_90;
  ppuVar9 = &puStack_90;
  puVar1 = PTR_PTR_1126dc1c0;
  func_0x000107c610f8(PTR_PTR_1126dc1c0);
  func_0x000107c453e4();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c5cb24(uVar2);
  func_0x000107c61180();
  func_0x000107c531a0(puVar1);
  func_0x000107c61170(uVar2);
  lVar3 = 0x112d38c88;
  FUN_1023c26e0(0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570,0x112d4a820,&UNK_10d910f30);
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 3;
  *(undefined8 *)(lVar3 + 0x10) = 1;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ecc();
  *(undefined **)(lVar3 + 0x20) = puVar4;
  uVar2 = 0;
  FUN_1023c2eec(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  lVar5 = lVar3;
  func_0x000107c5fc48(lVar3,uVar2);
  func_0x000107c61574(lVar3);
  func_0x000107c59ad0(puVar1);
  func_0x000107c61170(lVar5);
  puVar4 = &UNK_1104fddc8;
  puVar6 = puVar4;
  func_0x000107c613fc(&UNK_1104fddc8,0x18,7);
  func_0x000107c61644(puVar6 + 0x10);
  puVar10 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_70 = FUN_1023c26ac;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_1023c1b24;
  puStack_78 = &UNK_1104fdde0;
  puStack_68 = puVar6;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c61574(puStack_68);
  func_0x000107c54e68(puVar1);
  func_0x000107c60bd0(ppuVar7);
  puVar6 = puVar4;
  func_0x000107c613fc(&UNK_1104fddc8,0x18,7);
  func_0x000107c61644(puVar6 + 0x10);
  pcStack_70 = (code *)0x1023c26d0;
  puStack_90 = puVar10;
  uStack_88 = 0x42000000;
  pcStack_80 = (code *)&UNK_1010342f8;
  puStack_78 = &UNK_1104fde08;
  puStack_68 = puVar6;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c61574(puStack_68);
  func_0x000107c58d1c(puVar1);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c5c734(param_1);
  func_0x000107c61180();
  func_0x000107c56a84(puVar1);
  func_0x000107c615e8(param_1);
  func_0x000107c613fc(&UNK_1104fddc8,0x18,7);
  func_0x000107c61644(puVar4 + 0x10);
  pcStack_70 = (code *)0x1023c26d8;
  puStack_90 = puVar10;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_1023c2000;
  puStack_78 = &UNK_1104fde30;
  puStack_68 = puVar4;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c61574(puStack_68);
  func_0x000107c57304(puVar1);
  func_0x000107c60bd0(ppuVar9);
  puVar4 = PTR_PTR_1126dc218;
  func_0x000107c610f8(PTR_PTR_1126dc218);
  func_0x000107c453e4();
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c59bac(puVar4);
  func_0x000107c61170(puVar10);
  func_0x000107c59008(puVar1);
  func_0x000107c61170(puVar4);
  return puVar1;
}



/* Entry: 1023c1920; end: 1023c1993;  */

void FUN_1023c1920(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long unaff_x20;
  
  func_0x000107c5fb78();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x30) = 0x40;
  *(undefined8 *)(unaff_x20 + 0x38) = 0xe100000000000000;
  func_0x000107c6142c(uVar1);
  puVar2 = PTR_PTR_1126dc220;
  func_0x000107c610f8(PTR_PTR_1126dc220);
  func_0x000107c453e4();
  func_0x000107c54700();
  func_0x000107c4d664(*(undefined8 *)(unaff_x20 + 0x28),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1023c1994; end: 1023c1b23;  */

undefined * FUN_1023c1994(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [24];
  
  puVar1 = PTR_PTR_1126dc1e8;
  func_0x000107c610f8(PTR_PTR_1126dc1e8);
  func_0x000107c453e4();
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    lVar5 = *(long *)(param_1 + 0x38);
    func_0x000107c61434(lVar5);
    func_0x000107c61574(param_1);
    if (lVar5 != 0) goto LAB_1023c1a04;
  }
  lVar5 = -0x1f00000000000000;
  uVar6 = 0x40;
LAB_1023c1a04:
  lVar4 = lVar5;
  func_0x000107c5fadc(uVar6,lVar5);
  func_0x000107c6142c(lVar5);
  func_0x000107c59c6c(puVar1);
  func_0x000107c61170(uVar6);
  puVar2 = puVar1;
  func_0x000107c5c82c(puVar1);
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c5faec();
  func_0x000107c61170(puVar2);
  func_0x000107c5fb5c(puVar3,lVar4);
  func_0x000107c6142c(lVar4);
  puVar2 = PTR_PTR_1126dc1f0;
  func_0x000107c610f8(PTR_PTR_1126dc1f0);
  func_0x000107c48970();
  func_0x000107c58e2c(puVar1);
  func_0x000107c61170(puVar2);
  puVar2 = PTR_PTR_1126ae820;
  func_0x000107c610f8(PTR_PTR_1126ae820);
  func_0x000107c453e4();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSArray_1126ae530);
  func_0x000107c453e4();
  func_0x000107c4d664(puVar2);
  func_0x000107c61170(puVar3);
  puVar3 = puVar2;
  func_0x000107c5cb24(puVar2);
  func_0x000107c61180();
  func_0x000107c5285c(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar3);
  return puVar1;
}



/* Entry: 1023c1b24; end: 1023c1b5b;  */

void FUN_1023c1b24(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1023c1b5c; end: 1023c1c3b;  */

undefined * FUN_1023c1b5c(undefined8 param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_4 + 0x10,auStack_58,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61648();
  if (param_4 == 0) {
    param_3 = PTR_PTR_1126ae820;
    func_0x000107c610f8(PTR_PTR_1126ae820);
    func_0x000107c453e4();
    puVar1 = param_3;
    func_0x000107c5cb24();
    func_0x000107c61180();
  }
  else {
    uVar2 = *(undefined8 *)(param_4 + 0x18);
    func_0x000107c615f0(uVar2);
    FUN_1023c2bf4(param_3,param_1,param_2,uVar2);
    func_0x000107c615e8(uVar2);
    puVar1 = param_3;
    func_0x000107c5cb24(param_3);
    func_0x000107c61180();
    func_0x000107c61574(param_4);
  }
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1023c1c3c; end: 1023c1d0b;  */

/* WARNING: Possible PIC construction at 0x0001023c1c9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023c1cf4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023c1ca0) */
/* WARNING: Removing unreachable block (ram,0x0001023c1cbc) */
/* WARNING: Removing unreachable block (ram,0x0001023c1cdc) */
/* WARNING: Removing unreachable block (ram,0x0001023c1cf0) */

void FUN_1023c1c3c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107c5d0f0();
  if ((int)lVar1 == 1) {
    func_0x000107c5c87c();
    func_0x000107c61180();
    if (param_1 != 0) {
      lVar1 = param_1;
      func_0x000107c42934();
      func_0x000107c61180();
      if (lVar1 != 0) {
        func_0x000107c4c0a8();
        param_1 = lVar1;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 1023c1d0c; end: 1023c1fff;  */

/* WARNING: Possible PIC construction at 0x0001023c1d54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023c1da4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023c1dc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023c1de0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023c1e00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023c1ea8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023c1ed4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023c1f08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023c1f20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023c1f3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023c1f6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023c1fc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023c1fd0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023c1fc4) */
/* WARNING: Removing unreachable block (ram,0x0001023c1f70) */
/* WARNING: Removing unreachable block (ram,0x0001023c1f40) */
/* WARNING: Removing unreachable block (ram,0x0001023c1f24) */
/* WARNING: Removing unreachable block (ram,0x0001023c1f44) */
/* WARNING: Removing unreachable block (ram,0x0001023c1f48) */
/* WARNING: Removing unreachable block (ram,0x0001023c1f28) */
/* WARNING: Removing unreachable block (ram,0x0001023c1f0c) */
/* WARNING: Removing unreachable block (ram,0x0001023c1ed8) */
/* WARNING: Removing unreachable block (ram,0x0001023c1eac) */
/* WARNING: Removing unreachable block (ram,0x0001023c1edc) */
/* WARNING: Removing unreachable block (ram,0x0001023c1ee4) */
/* WARNING: Removing unreachable block (ram,0x0001023c1ec0) */
/* WARNING: Removing unreachable block (ram,0x0001023c1e04) */
/* WARNING: Removing unreachable block (ram,0x0001023c1e70) */
/* WARNING: Removing unreachable block (ram,0x0001023c1e84) */
/* WARNING: Removing unreachable block (ram,0x0001023c1de4) */
/* WARNING: Removing unreachable block (ram,0x0001023c1dcc) */
/* WARNING: Removing unreachable block (ram,0x0001023c1da8) */
/* WARNING: Removing unreachable block (ram,0x0001023c1d58) */
/* WARNING: Removing unreachable block (ram,0x0001023c1e4c) */
/* WARNING: Removing unreachable block (ram,0x0001023c1d6c) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */
/* WARNING: Removing unreachable block (ram,0x0001023c1fd4) */
/* WARNING: Removing unreachable block (ram,0x0001023c1e08) */
/* WARNING: Removing unreachable block (ram,0x0001023c1e10) */
/* WARNING: Removing unreachable block (ram,0x0001023c1e28) */

void FUN_1023c1d0c(long param_1)

{
  func_0x000107c5c82c();
  func_0x000107c61180();
  if (param_1 != 0) {
    func_0x000107c5faec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1023c2000; end: 1023c204b;  */

void FUN_1023c2000(long param_1,undefined8 param_2)

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



/* Entry: 1023c204c; end: 1023c2383;  */

void FUN_1023c204c(undefined8 *param_1,ulong *param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar6 = *param_2;
  uVar7 = uVar6;
  func_0x000107c5d984();
  func_0x000107c61180();
  if (uVar7 == 0) {
    puVar5 = (undefined *)0x0;
    goto LAB_1023c2364;
  }
  puVar5 = PTR_PTR_1126dc208;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c545d4();
  func_0x000107c545d0(puVar5);
  uVar8 = uVar6;
  func_0x000107c42120();
  func_0x000107c61180();
  if (uVar8 == 0) {
    uVar9 = 0;
    param_3 = 0xe000000000000000;
  }
  else {
    uVar9 = uVar8;
    func_0x000107c5faec();
    func_0x000107c61170(uVar8);
  }
  func_0x000107c5fadc(uVar9,param_3);
  func_0x000107c6142c(param_3);
  func_0x000107c59e18(puVar5);
  func_0x000107c61170(uVar9);
  uVar8 = uVar6;
  func_0x000107c5db08(uVar6);
  func_0x000107c61180();
  func_0x000107c59a8c(puVar5);
  func_0x000107c61170(uVar8);
  uVar8 = uVar6;
  func_0x000100bf119c();
  if ((uVar8 & 1) == 0) {
    uVar8 = uVar6;
    func_0x000107c40cdc();
    func_0x000107c61180();
    if (uVar8 == 0) {
LAB_1023c2184:
      uVar9 = 0;
    }
    else {
      uVar9 = uVar8;
      func_0x000107c4f3b8();
      func_0x000107c61180();
      func_0x000107c61170(uVar8);
      if (uVar9 == 0) goto LAB_1023c2184;
    }
    func_0x000107c57a28(puVar5);
    func_0x000107c61170(uVar9);
  }
  uVar8 = uVar6;
  func_0x000107c40cdc();
  func_0x000107c61180();
  if (uVar8 != 0) {
    uVar9 = uVar8;
    func_0x000107c3e64c();
    func_0x000107c61170(uVar8);
    if ((int)uVar9 == 1) {
      puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c45a48();
      func_0x000107c555e0(puVar5);
      func_0x000107c61170(puVar1);
    }
  }
  puVar1 = PTR_PTR_1126dc210;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c5a344();
  func_0x000107c61170(uVar7);
  uVar7 = uVar6;
  func_0x000107c3e9e8();
  func_0x000107c61180();
  if (uVar7 == 0) {
LAB_1023c2250:
    uVar8 = 0;
  }
  else {
    uVar8 = uVar7;
    func_0x000107c3e978();
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    if (uVar8 == 0) goto LAB_1023c2250;
  }
  func_0x000107c52ae0(puVar1);
  func_0x000107c61170(uVar8);
  func_0x000107c3e9e8();
  func_0x000107c61180();
  if (uVar6 == 0) {
LAB_1023c229c:
    uVar7 = 0;
  }
  else {
    uVar7 = uVar6;
    func_0x000107c3ea1c();
    func_0x000107c61180();
    func_0x000107c61170(uVar6);
    if (uVar7 == 0) goto LAB_1023c229c;
  }
  func_0x000107c58e54(puVar1);
  func_0x000107c61170(uVar7);
  lVar2 = 0x112d55e90;
  FUN_1023c26e0(0x112d55e90,&PTR_PTR_1126dc210,0x112d55e98,&UNK_10da9eca0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 3;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  *(undefined **)(lVar2 + 0x20) = puVar1;
  uVar3 = 0;
  FUN_1023c2eec(0,0x112d55e90,&PTR_PTR_1126dc210);
  func_0x000107c61174(puVar1);
  lVar4 = lVar2;
  func_0x000107c5fc48(lVar2,uVar3);
  func_0x000107c61574(lVar2);
  func_0x000107c52afc(puVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(puVar1);
LAB_1023c2364:
  *param_1 = puVar5;
  return;
}



/* Entry: 1023c2384; end: 1023c257f;  */

undefined * FUN_1023c2384(ulong param_1)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uStack_90;
  undefined1 auStack_88 [32];
  undefined *puStack_68;
  
  if (param_1 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar5 = param_1;
    }
    func_0x000107c60480();
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100c077e4(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
    puVar6 = puStack_68;
    puVar1 = PTR___sypN_11034f1a8;
    if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1023c2580);
      (*pcVar2)();
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      uVar4 = 0;
      FUN_1023c2eec(0,0x112d55c18,&PTR_PTR_1126dc208);
      puVar1 = PTR___sypN_11034f1a8;
      puVar8 = (ulong *)(param_1 + 0x20);
      do {
        uStack_90 = *puVar8;
        func_0x000107c61174();
        func_0x000107c6147c(auStack_88,&uStack_90,uVar4,puVar1 + 8,7);
        uVar7 = *(ulong *)(puVar6 + 0x10);
        puStack_68 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar7) {
          func_0x000100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar7 + 1,1);
        }
        puVar6 = puStack_68;
        *(ulong *)(puStack_68 + 0x10) = uVar7 + 1;
        func_0x000100102924(auStack_88,puStack_68 + uVar7 * 0x20 + 0x20);
        uVar5 = uVar5 - 1;
        puVar8 = puVar8 + 1;
      } while (uVar5 != 0);
    }
    else {
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        FUN_1023c2a38(uVar7,param_1,&PTR_PTR_1126dc208,0x112d55c18);
        uVar4 = 0;
        uStack_90 = uVar3;
        FUN_1023c2eec(0,0x112d55c18,&PTR_PTR_1126dc208);
        func_0x000107c6147c(auStack_88,&uStack_90,uVar4,puVar1 + 8,7);
        uVar3 = *(ulong *)(puVar6 + 0x10);
        puStack_68 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar3) {
          func_0x000100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar3 + 1,1);
        }
        puVar6 = puStack_68;
        uVar7 = uVar7 + 1;
        *(ulong *)(puStack_68 + 0x10) = uVar3 + 1;
        func_0x000100102924(auStack_88,puStack_68 + uVar3 * 0x20 + 0x20);
      } while (uVar5 != uVar7);
    }
  }
  return puVar6;
}



/* Entry: 1023c2580; end: 1023c25e3;  */

void FUN_1023c2580(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1023c25e4; end: 1023c2657; -[_TtC25SCUserTaggingCarouselImpl23UserTaggingCarouselImpl containerView] */

void FUN_1023c25e4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = *(undefined **)(param_1 + 0x20);
  if (puVar2 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x000107c6157c(param_1);
    func_0x000107c453e4(puVar1);
  }
  else {
    func_0x000107c6157c(param_1);
    puVar1 = puVar2;
  }
  func_0x000107c61174(puVar2);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1023c2658; end: 1023c26ab; -[_TtC25SCUserTaggingCarouselImpl23UserTaggingCarouselImpl performSearchWithText:] */

void FUN_1023c2658(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c6157c(param_1);
  FUN_1023c1920(param_3,param_2);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1023c26ac; end: 1023c26df;  */

undefined * FUN_1023c26ac(void)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined1 auStack_48 [24];
  
  puVar1 = PTR_PTR_1126dc1e8;
  func_0x000107c610f8(PTR_PTR_1126dc1e8);
  func_0x000107c453e4();
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    uVar6 = *(undefined8 *)(lVar2 + 0x30);
    lVar5 = *(long *)(lVar2 + 0x38);
    func_0x000107c61434(lVar5);
    func_0x000107c61574(lVar2);
    if (lVar5 != 0) goto LAB_1023c1a04;
  }
  lVar5 = -0x1f00000000000000;
  uVar6 = 0x40;
LAB_1023c1a04:
  lVar2 = lVar5;
  func_0x000107c5fadc(uVar6,lVar5);
  func_0x000107c6142c(lVar5);
  func_0x000107c59c6c(puVar1);
  func_0x000107c61170(uVar6);
  puVar3 = puVar1;
  func_0x000107c5c82c(puVar1);
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c5faec();
  func_0x000107c61170(puVar3);
  func_0x000107c5fb5c(puVar4,lVar2);
  func_0x000107c6142c(lVar2);
  puVar3 = PTR_PTR_1126dc1f0;
  func_0x000107c610f8(PTR_PTR_1126dc1f0);
  func_0x000107c48970();
  func_0x000107c58e2c(puVar1);
  func_0x000107c61170(puVar3);
  puVar3 = PTR_PTR_1126ae820;
  func_0x000107c610f8(PTR_PTR_1126ae820);
  func_0x000107c453e4();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSArray_1126ae530);
  func_0x000107c453e4();
  func_0x000107c4d664(puVar3);
  func_0x000107c61170(puVar4);
  puVar4 = puVar3;
  func_0x000107c5cb24(puVar3);
  func_0x000107c61180();
  func_0x000107c5285c(puVar1);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar4);
  return puVar1;
}



/* Entry: 1023c26e0; end: 1023c2757;  */

void FUN_1023c26e0(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_1023c2eec(0,param_1,param_2);
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



/* Entry: 1023c2758; end: 1023c27f7;  */

undefined * FUN_1023c2758(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    puVar2 = (undefined *)0x112d55c18;
    FUN_1023c26e0(0x112d55c18,&PTR_PTR_1126dc208,0x112d55e88,&UNK_10d91cd80);
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



/* Entry: 1023c27f8; end: 1023c2a37;  */

ulong FUN_1023c27f8(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1023c2920);
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
  FUN_1023c2758(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1023c291c);
      (*pcVar1)();
    }
    func_0x0001023c2920(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 1023c2a38; end: 1023c2bf3;  */

ulong FUN_1023c2a38(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1023c2b1c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1023c2b20);
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
  FUN_1023c2eec(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1023c2bf4);
  (*pcVar2)();
}



/* Entry: 1023c2bf4; end: 1023c2eeb;  */

undefined * FUN_1023c2bf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_70;
  ulong uStack_68;
  
  puVar3 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ecc();
  puVar7 = puVar9;
  func_0x0001010345b0();
  func_0x000107c61170(puVar9);
  if (((ulong)puVar7 & 1) != 0) {
    func_0x000107c5fadc(param_2,param_3);
    func_0x000107c5b4d4();
    func_0x000107c61180();
    func_0x000107c61170(param_2);
    if (param_4 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1023c2eec);
      (*pcVar2)();
    }
    uVar4 = 0;
    FUN_1023c2eec(0,0x112d4ed88,&PTR_PTR_1126b15c8);
    uVar5 = param_4;
    func_0x000107c5fc54(param_4,uVar4);
    func_0x000107c61170(param_4);
    if (uVar5 >> 0x3e == 0) {
      uVar11 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
      puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      uVar11 = uVar5 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar5) {
        uVar11 = uVar5;
      }
      func_0x000107c60480();
      puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    PTR___swiftEmptyArrayStorage_11034f1c8 = puVar9;
    if (uVar11 != 0) {
      uVar12 = 0;
      do {
        if ((uVar5 & 0xc000000000000001) == 0) {
          if (*(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1023c2e24);
            (*pcVar2)();
          }
          uVar8 = *(ulong *)(uVar5 + uVar12 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar8 = uVar12;
          FUN_1023c2a38(uVar12,uVar5,&PTR_PTR_1126b15c8,0x112d4ed88);
        }
        if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1023c2e20);
          (*pcVar2)();
        }
        uVar13 = uVar12 + 1;
        uStack_68 = uVar8;
        FUN_1023c204c(&lStack_70,&uStack_68);
        func_0x000107c61170(uVar8);
        lVar1 = lStack_70;
        if (lStack_70 != 0) {
          puVar7 = puVar9;
          func_0x000107c61550();
          if ((((int)puVar7 == 0) || ((long)puVar9 < 0)) ||
             (puVar7 = puVar9, ((ulong)puVar9 >> 0x3e & 1) != 0)) {
            if ((ulong)puVar9 >> 0x3e == 0) {
              puVar6 = *(undefined **)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar6 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar9) {
                puVar6 = puVar9;
              }
              func_0x000107c60480(puVar6);
            }
            puVar7 = (undefined *)0x0;
            FUN_1023c27f8(0,puVar6 + 1,1,puVar9);
          }
          uVar10 = (ulong)puVar7 & 0xffffffffffffff8;
          uVar8 = *(ulong *)(uVar10 + 0x10);
          puVar9 = puVar7;
          if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar8) {
            puVar9 = (undefined *)(ulong)(1 < *(ulong *)(uVar10 + 0x18));
            FUN_1023c27f8(puVar9,uVar8 + 1,1,puVar7);
            uVar10 = (ulong)puVar9 & 0xffffffffffffff8;
          }
          *(ulong *)(uVar10 + 0x10) = uVar8 + 1;
          *(long *)(uVar10 + uVar8 * 8 + 0x20) = lVar1;
        }
        uVar12 = uVar12 + 1;
      } while (uVar13 != uVar11);
    }
    func_0x000107c6142c(uVar5);
    puVar7 = puVar9;
    FUN_1023c2384(puVar9);
    func_0x000107c6142c(puVar9);
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSArray_1126ae530);
    puVar6 = puVar7;
    func_0x000107c5fc48(puVar7,PTR___sypN_11034f1a8 + 8);
    func_0x000107c6142c(puVar7);
    func_0x000107c45788(puVar9);
    func_0x000107c61170(puVar6);
    func_0x000107c4d664(puVar3);
    func_0x000107c61170(puVar9);
  }
  return puVar3;
}



/* Entry: 1023c2eec; end: 1023c2f2b;  */

void FUN_1023c2eec(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1023c2f2c; end: 1023c2f3b;  */

void FUN_1023c2f2c(long param_1,long param_2)

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



/* Entry: 1023c2f3c; end: 1023c30db;  */

long FUN_1023c2f3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  uVar1 = param_3;
  func_0x000107c5dab4();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c43ae0();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  uVar1 = param_4;
  func_0x000107c4d604();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar1;
  return unaff_x20;
}



/* Entry: 1023c30dc; end: 1023c3177;  */

void FUN_1023c30dc(void)

{
  undefined *puVar1;
  code *pcVar2;
  code *pcVar3;
  
  puVar1 = &UNK_1104fde68;
  func_0x000107c613fc(&UNK_1104fde68,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  func_0x0001000285a8(0x112e92f58,&UNK_10da9ecb0);
  func_0x000107c613fc();
  pcVar2 = FUN_1023c31ec;
  func_0x0001000bdd8c(FUN_1023c31ec,puVar1);
  pcVar3 = pcVar2;
  func_0x0001000bf56c();
  func_0x000107c61574(pcVar2);
  func_0x000103ee3e4c(0);
  func_0x000107c610f8();
  func_0x000103ee3d90(pcVar3);
  return;
}



/* Entry: 1023c3178; end: 1023c31eb;  */

void FUN_1023c3178(long *param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_2;
    FUN_1023c31f4();
    func_0x000107c61574(param_2);
  }
  *param_1 = lVar1;
  return;
}



/* Entry: 1023c31ec; end: 1023c31f3;  */

void FUN_1023c31ec(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    FUN_1023c31f4();
    func_0x000107c61574(lVar1);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 1023c31f4; end: 1023c32a7;  */

void FUN_1023c31f4(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c5dbd4();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar3;
    func_0x000107c509b4(lVar3);
    func_0x000107c61180();
    func_0x000107c615e8(lVar3);
  }
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x0001023c25c4(0);
  func_0x000107c613fc();
  func_0x000107c615f0(uVar1);
  func_0x000107c61174(uVar4);
  FUN_1023c1540(lVar2,uVar1,uVar4);
  return;
}



/* Entry: 1023c32a8; end: 1023c32d3;  */

/* WARNING: Possible PIC construction at 0x0001023c32b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023c32b8) */

void FUN_1023c32a8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1023c32d4; end: 1023c332f;  */

void FUN_1023c32d4(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1023c3330; end: 1023c33b7;  */

void FUN_1023c3330(undefined8 param_1)

{
  if (lRam0000000112e92f88 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6d3750);
  return;
}



/* Entry: 1023c33b8; end: 1023c3463;  */

void FUN_1023c33b8(undefined8 *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  code *pcVar3;
  
  puVar1 = &UNK_1104fde68;
  func_0x000107c613fc(&UNK_1104fde68,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  func_0x0001000285a8(0x112e92f58,&UNK_10da9ecb0);
  func_0x000107c613fc();
  pcVar2 = FUN_1023c3464;
  func_0x0001000bdd8c(FUN_1023c3464,puVar1);
  pcVar3 = pcVar2;
  func_0x0001000bf56c();
  func_0x000107c61574(pcVar2);
  func_0x000103ee3e4c(0);
  func_0x000107c610f8();
  func_0x000103ee3d90();
  *param_1 = pcVar3;
  return;
}



/* Entry: 1023c3464; end: 1023c3467;  */

void FUN_1023c3464(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    FUN_1023c31f4();
    func_0x000107c61574(lVar1);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 1023c3468; end: 1023c3557;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1023c3468(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  code *pcVar4;
  undefined8 unaff_x20;
  undefined8 uVar5;
  
  func_0x000107c613fc();
  uVar5 = *(undefined8 *)(param_2 + _DAT_112ff3e38);
  func_0x000107c6157c(uVar5);
  uVar1 = param_1;
  func_0x000107c4e9e4(param_1);
  func_0x000107c61180();
  uVar2 = 0x112d73a18;
  func_0x0001000285a8(0x112d73a18,&UNK_10d9341e0);
  pcVar3 = FUN_1023c3558;
  func_0x0001000cb480(FUN_1023c3558,0,uVar2);
  pcVar4 = pcVar3;
  func_0x0001003a5b88();
  func_0x000107c61574(pcVar3);
  func_0x000107c4fba8(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61574(uVar5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(pcVar4);
  return unaff_x20;
}



/* Entry: 1023c3558; end: 1023c357f;  */

void FUN_1023c3558(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)();
  return;
}



/* Entry: 1023c3580; end: 1023c359f;  */

void FUN_1023c3580(void)

{
  func_0x000107c61168(&PTR_PTR_112e93088);
  return;
}



/* Entry: 1023c35a0; end: 1023c35b7;  */

void FUN_1023c35a0(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104fdf98;
  if (lRam0000000112e930e0 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112e930e0 = param_1;
  }
  return;
}



/* Entry: 1023c35b8; end: 1023c35fb;  */

void FUN_1023c35b8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112e930e8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_1023c35a0(0xff);
  puVar2 = &UNK_10da9ee08;
  func_0x000107c61520(&UNK_10da9ee08,uVar1);
  puRam0000000112e930e8 = puVar2;
  return;
}


