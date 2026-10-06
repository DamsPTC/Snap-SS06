/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102e0dd48; end: 102e0e107;  */

/* WARNING: Possible PIC construction at 0x000102e0e090: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e0e004: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e0e030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e0e008) */
/* WARNING: Removing unreachable block (ram,0x000102e0e094) */
/* WARNING: Removing unreachable block (ram,0x000102e0e034) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e0dd48(ulong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  uint uVar9;
  undefined8 uVar10;
  long unaff_x20;
  code *pcVar11;
  undefined *puVar12;
  int iVar13;
  undefined8 uVar14;
  uint uVar15;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar5 = unaff_x20;
  func_0x000107c614f0();
  lVar7 = _DAT_112f1cba8;
  lVar6 = unaff_x20 + _DAT_112f1cba8;
  func_0x000107c61618();
  if (lVar6 == 0) {
    lVar6 = *(long *)(unaff_x20 + _DAT_112f1cb70);
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar6 == 0) {
      func_0x0001007d6c6c(1,0xd00000000000002c,0x800000010f10f8a0,lVar5,&PTR_DAT_1105d82e8);
      return;
    }
  }
  func_0x000107c61170();
  puStack_90 = (undefined *)0x0;
  uStack_88 = 0xe000000000000000;
  func_0x000107c602fc(0x1a);
  func_0x000107c6142c(uStack_88);
  puStack_90 = (undefined *)0xd000000000000018;
  uStack_88 = 0x800000010f10f8d0;
  bVar4 = (param_1 & 1) == 0;
  uVar14 = 0x65757274;
  if (bVar4) {
    uVar14 = 0x65736c6166;
  }
  uVar10 = 0xe400000000000000;
  if (bVar4) {
    uVar10 = 0xe500000000000000;
  }
  func_0x000107c5fb78(uVar14,uVar10);
  func_0x000107c6142c(uVar10);
  uVar14 = uStack_88;
  func_0x0001007d6c6c(1,puStack_90,uStack_88,lVar5,&PTR_DAT_1105d82e8);
  func_0x000107c6142c(uVar14);
  lVar7 = unaff_x20 + lVar7;
  func_0x000107c61618();
  if (lVar7 == 0) {
    iVar13 = 0;
    iVar3 = 0;
    if ((param_1 & 1) != 0) goto LAB_102e0de74;
LAB_102e0de84:
    iVar13 = iVar3;
    uVar15 = (uint)*(byte *)(unaff_x20 + _DAT_112f1cc38);
  }
  else {
    lVar6 = lVar7;
    func_0x000107c49aa0();
    iVar13 = (int)lVar6;
    func_0x000107c61170(lVar7);
    iVar3 = iVar13;
    if ((param_1 & 1) == 0) goto LAB_102e0de84;
LAB_102e0de74:
    uVar15 = 1;
  }
  cVar2 = *(char *)(unaff_x20 + _DAT_112f1cc40);
  lVar6 = unaff_x20 + _DAT_112f1cbc0;
  lVar7 = lVar6;
  FUN_102e0ffdc();
  if ((int)lVar7 == 1) {
    pcVar11 = (code *)0x0;
    puVar12 = (undefined *)0x0;
  }
  else {
    pcVar11 = *(code **)(lVar6 + 0x70);
    puVar12 = *(undefined **)(lVar6 + 0x78);
    func_0x000100d280a4(pcVar11,puVar12);
  }
  FUN_102e10194();
  FUN_102e0e114();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f1cc30);
  if (*(char *)(puVar1 + 1) == '\x01') {
    func_0x000104366fc4(0x100000000000002d,0x800000010f10f8f0,lVar5,&PTR_DAT_1105d82e8);
    uVar14 = 0x27;
  }
  else {
    uVar14 = *puVar1;
  }
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  if (iVar13 == 0) {
    lVar6 = unaff_x20 + _DAT_112f1cba0;
    func_0x000107c61618();
    if (lVar6 != 0) {
      uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112f1cb88);
      puVar8 = &UNK_1105d7478;
      func_0x000107c613fc(&UNK_1105d7478,0x32,7);
      *(undefined8 *)(puVar8 + 0x10) = uVar10;
      *(undefined8 *)(puVar8 + 0x18) = uVar14;
      *(code **)(puVar8 + 0x20) = pcVar11;
      *(undefined **)(puVar8 + 0x28) = puVar12;
      puVar8[0x30] = (char)uVar15;
      puVar8[0x31] = cVar2;
      uStack_70 = 0x102e10368;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1000f6b44;
      puStack_78 = &UNK_1105d7490;
      puStack_68 = puVar8;
      func_0x000107c60bc4(&puStack_90);
      puVar8 = puStack_68;
      func_0x000100d280a4(pcVar11,puVar12);
      func_0x000107c615f0(uVar10);
      puVar12 = puVar8;
      goto code_r0x000107c61574;
    }
    func_0x000104366fc4(0xd000000000000013,0x800000010f10f920,lVar5,&PTR_DAT_1105d82e8);
  }
  else {
    func_0x000107c5bb50(*(undefined8 *)(unaff_x20 + _DAT_112f1cb88));
  }
  if (pcVar11 == (code *)0x0) {
    return;
  }
  uVar9 = 0x100;
  if (cVar2 == '\0') {
    uVar9 = 0;
  }
  func_0x000107c6157c(puVar12);
  (*pcVar11)(uVar9 | uVar15);
  if (pcVar11 == (code *)0x0) {
    return;
  }
code_r0x000107c61574:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar12);
  return;
}



/* Entry: 102e0e108; end: 102e0e113;  */

void FUN_102e0e108(void)

{
  return;
}



/* Entry: 102e0e114; end: 102e0e32f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e0e114(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long unaff_x20;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  code *pcVar10;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
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
  undefined1 uStack_68;
  
  lVar7 = *(long *)(unaff_x20 + _DAT_112f1cb70);
  lVar1 = lVar7;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    uVar8 = *(undefined8 *)(lVar1 + _DAT_11306fb28);
    lVar9 = ((undefined8 *)(lVar1 + _DAT_11306fb28))[1];
    uVar2 = uVar8;
    func_0x000107c614f0(uVar8);
    uStack_c8 = 7;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_70 = 0;
    uStack_68 = 5;
    pcVar10 = *(code **)(lVar9 + 0x28);
    func_0x000107c615f0(uVar8);
    (*pcVar10)(&uStack_c8,uVar2,lVar9);
    func_0x000107c615e8(uVar8);
    func_0x000107c4ffe8(lVar7);
    func_0x000107c61180();
    func_0x000107c615e8();
    lVar7 = _DAT_112f1cbe8;
    lVar9 = *(long *)(unaff_x20 + _DAT_112f1cbe8);
    if (lVar9 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      uVar8 = *(undefined8 *)(lVar9 + _DAT_112f1c5e0);
      puVar3 = &UNK_1105d74c8;
      func_0x000107c613fc(&UNK_1105d74c8,0x18,7);
      *(long *)(puVar3 + 0x10) = lVar9;
      puVar4 = &UNK_1105d74f0;
      func_0x000107c613fc(&UNK_1105d74f0,0x20,7);
      *(undefined8 *)(puVar4 + 0x10) = 0x102e103d4;
      *(undefined **)(puVar4 + 0x18) = puVar3;
      pcStack_d8 = FUN_102e103dc;
      puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_f0 = 0x42000000;
      puStack_e8 = &UNK_10006eb60;
      puStack_e0 = &UNK_1105d7508;
      ppuVar5 = &puStack_f8;
      puStack_d0 = puVar4;
      func_0x000107c60bc4(ppuVar5);
      puVar6 = puStack_d0;
      func_0x000107c61174(lVar9);
      func_0x000107c61174();
      func_0x000107c6157c(puVar4);
      func_0x000107c61574(puVar6);
      func_0x00010006eaa4(uVar8,ppuVar5);
      func_0x000107c60bd0(ppuVar5);
      puVar6 = puVar4;
      func_0x000107c61544(puVar4,"",0x75,0x99,0x1b,1);
      func_0x000107c61170(lVar9);
      func_0x000107c61170(lVar1);
      func_0x000107c61574(puVar3);
      func_0x000107c61574(puVar4);
      if (((ulong)puVar6 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x102e0e2fc);
        (*pcVar10)();
      }
    }
    uVar8 = *(undefined8 *)(unaff_x20 + lVar7);
    *(undefined8 *)(unaff_x20 + lVar7) = 0;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 102e0e330; end: 102e0e38f; -[_TtC21PlayGamesServicesImpl18PlayGamesPresenter init] */

void FUN_102e0e330(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PlayGamesServicesImpl.PlayGamesPresenter",0x28,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102e0e35c);
  (*pcVar1)();
}



/* Entry: 102e0e390; end: 102e0e537; -[_TtC21PlayGamesServicesImpl18PlayGamesPresenter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102e0e3ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e0e3ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e0e42c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e0e46c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e0e48c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e0e4ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e0e490) */
/* WARNING: Removing unreachable block (ram,0x000102e0e470) */
/* WARNING: Removing unreachable block (ram,0x000102e0e430) */
/* WARNING: Removing unreachable block (ram,0x000102e0e3f0) */
/* WARNING: Removing unreachable block (ram,0x000102e0e3b0) */
/* WARNING: Removing unreachable block (ram,0x000102e0e4b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e0e390(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f1cb70));
  return;
}



/* Entry: 102e0e538; end: 102e0e557;  */

void FUN_102e0e538(void)

{
  func_0x000107c61168(&PTR_PTR_1128a76f0);
  return;
}



/* Entry: 102e0e558; end: 102e0e567;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e0e558(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakLoadStrong_11034f590)(unaff_x20 + _DAT_112f1cba8);
  return;
}



/* Entry: 102e0e568; end: 102e0e63f;  */

/* WARNING: Possible PIC construction at 0x000102e0e090: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e0e004: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e0e030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e0e008) */
/* WARNING: Removing unreachable block (ram,0x000102e0e094) */
/* WARNING: Removing unreachable block (ram,0x000102e0e034) */
/* WARNING: Removing unreachable block (ram,0x000102e0de10) */
/* WARNING: Removing unreachable block (ram,0x000102e0de04) */
/* WARNING: Removing unreachable block (ram,0x000102e0de84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e0e568(void)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  undefined8 uVar9;
  long unaff_x20;
  code *pcVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar6 = unaff_x20;
  func_0x000107c614f0();
  *(undefined1 *)(unaff_x20 + _DAT_112f1cc38) = 1;
  lVar4 = unaff_x20 + _DAT_112f1cbc0;
  lVar7 = lVar4;
  FUN_102e0ffdc();
  if (((int)lVar7 != 1) && (*(char *)(lVar4 + 0x88) != '\x01')) {
    func_0x0001007d6c6c(1,0x1000000000000025,0x800000010f10f840,lVar6,&PTR_DAT_1105d82e8);
    return;
  }
  func_0x0001007d6c6c(1,0x1000000000000023,0x800000010f10f870,lVar6,&PTR_DAT_1105d82e8);
  lVar7 = unaff_x20;
  func_0x000107c614f0(unaff_x20);
  lVar6 = _DAT_112f1cba8;
  lVar4 = unaff_x20 + _DAT_112f1cba8;
  func_0x000107c61618();
  if (lVar4 == 0) {
    lVar4 = *(long *)(unaff_x20 + _DAT_112f1cb70);
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar4 == 0) {
      func_0x0001007d6c6c(1,0xd00000000000002c,0x800000010f10f8a0,lVar7,&PTR_DAT_1105d82e8);
      return;
    }
  }
  func_0x000107c61170();
  puStack_90 = (undefined *)0x0;
  uStack_88 = 0xe000000000000000;
  func_0x000107c602fc(0x1a);
  func_0x000107c6142c(uStack_88);
  puStack_90 = (undefined *)0xd000000000000018;
  uStack_88 = 0x800000010f10f8d0;
  func_0x000107c5fb78(0x65757274,0xe400000000000000);
  func_0x000107c6142c(0xe400000000000000);
  uVar12 = uStack_88;
  func_0x0001007d6c6c(1,puStack_90,uStack_88,lVar7,&PTR_DAT_1105d82e8);
  func_0x000107c6142c(uVar12);
  lVar6 = unaff_x20 + lVar6;
  func_0x000107c61618();
  if (lVar6 == 0) {
    iVar3 = 0;
  }
  else {
    lVar4 = lVar6;
    func_0x000107c49aa0();
    iVar3 = (int)lVar4;
    func_0x000107c61170(lVar6);
  }
  cVar2 = *(char *)(unaff_x20 + _DAT_112f1cc40);
  lVar4 = unaff_x20 + _DAT_112f1cbc0;
  lVar6 = lVar4;
  func_0x000102e0ffe0();
  if ((int)lVar6 == 1) {
    pcVar10 = (code *)0x0;
    puVar11 = (undefined *)0x0;
  }
  else {
    pcVar10 = *(code **)(lVar4 + 0x70);
    puVar11 = *(undefined **)(lVar4 + 0x78);
    func_0x000100d280a4(pcVar10,puVar11);
  }
  FUN_102e10194();
  FUN_102e0e114();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f1cc30);
  if (*(char *)(puVar1 + 1) == '\x01') {
    func_0x000104366fc4(0x100000000000002d,0x800000010f10f8f0,lVar7,&PTR_DAT_1105d82e8);
    uVar12 = 0x27;
  }
  else {
    uVar12 = *puVar1;
  }
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  if (iVar3 == 0) {
    lVar4 = unaff_x20 + _DAT_112f1cba0;
    func_0x000107c61618();
    if (lVar4 != 0) {
      uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112f1cb88);
      puVar5 = &UNK_1105d7478;
      func_0x000107c613fc(&UNK_1105d7478,0x32,7);
      *(undefined8 *)(puVar5 + 0x10) = uVar9;
      *(undefined8 *)(puVar5 + 0x18) = uVar12;
      *(code **)(puVar5 + 0x20) = pcVar10;
      *(undefined **)(puVar5 + 0x28) = puVar11;
      puVar5[0x30] = 1;
      puVar5[0x31] = cVar2;
      uStack_70 = 0x102e10368;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1000f6b44;
      puStack_78 = &UNK_1105d7490;
      puStack_68 = puVar5;
      func_0x000107c60bc4(&puStack_90);
      puVar5 = puStack_68;
      func_0x000100d280a4(pcVar10,puVar11);
      func_0x000107c615f0(uVar9);
      puVar11 = puVar5;
      goto code_r0x000107c61574;
    }
    func_0x000104366fc4(0xd000000000000013,0x800000010f10f920,lVar7,&PTR_DAT_1105d82e8);
  }
  else {
    func_0x000107c5bb50(*(undefined8 *)(unaff_x20 + _DAT_112f1cb88));
  }
  if (pcVar10 == (code *)0x0) {
    return;
  }
  uVar8 = 0x100;
  if (cVar2 == '\0') {
    uVar8 = 0;
  }
  func_0x000107c6157c(puVar11);
  (*pcVar10)(uVar8 | 1);
  if (pcVar10 == (code *)0x0) {
    return;
  }
code_r0x000107c61574:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar11);
  return;
}



/* Entry: 102e0e640; end: 102e0e673;  */

/* WARNING: Possible PIC construction at 0x000102e0e090: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e0e004: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e0e030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e0e008) */
/* WARNING: Removing unreachable block (ram,0x000102e0e094) */
/* WARNING: Removing unreachable block (ram,0x000102e0e034) */
/* WARNING: Removing unreachable block (ram,0x000102e0de10) */
/* WARNING: Removing unreachable block (ram,0x000102e0de04) */
/* WARNING: Removing unreachable block (ram,0x000102e0de84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e0e640(void)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  undefined8 uVar9;
  long unaff_x20;
  code *pcVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar6 = unaff_x20;
  func_0x000107c614f0();
  *(undefined1 *)(unaff_x20 + _DAT_112f1cc38) = 1;
  lVar4 = unaff_x20 + _DAT_112f1cbc0;
  lVar7 = lVar4;
  FUN_102e0ffdc();
  if (((int)lVar7 != 1) && (*(char *)(lVar4 + 0x88) != '\x01')) {
    func_0x0001007d6c6c(1,0x1000000000000025,0x800000010f10f840,lVar6,&PTR_DAT_1105d82e8);
    return;
  }
  func_0x0001007d6c6c(1,0x1000000000000023,0x800000010f10f870,lVar6,&PTR_DAT_1105d82e8);
  lVar7 = unaff_x20;
  func_0x000107c614f0(unaff_x20);
  lVar6 = _DAT_112f1cba8;
  lVar4 = unaff_x20 + _DAT_112f1cba8;
  func_0x000107c61618();
  if (lVar4 == 0) {
    lVar4 = *(long *)(unaff_x20 + _DAT_112f1cb70);
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar4 == 0) {
      func_0x0001007d6c6c(1,0xd00000000000002c,0x800000010f10f8a0,lVar7,&PTR_DAT_1105d82e8);
      return;
    }
  }
  func_0x000107c61170();
  puStack_90 = (undefined *)0x0;
  uStack_88 = 0xe000000000000000;
  func_0x000107c602fc(0x1a);
  func_0x000107c6142c(uStack_88);
  puStack_90 = (undefined *)0xd000000000000018;
  uStack_88 = 0x800000010f10f8d0;
  func_0x000107c5fb78(0x65757274,0xe400000000000000);
  func_0x000107c6142c(0xe400000000000000);
  uVar12 = uStack_88;
  func_0x0001007d6c6c(1,puStack_90,uStack_88,lVar7,&PTR_DAT_1105d82e8);
  func_0x000107c6142c(uVar12);
  lVar6 = unaff_x20 + lVar6;
  func_0x000107c61618();
  if (lVar6 == 0) {
    iVar3 = 0;
  }
  else {
    lVar4 = lVar6;
    func_0x000107c49aa0();
    iVar3 = (int)lVar4;
    func_0x000107c61170(lVar6);
  }
  cVar2 = *(char *)(unaff_x20 + _DAT_112f1cc40);
  lVar4 = unaff_x20 + _DAT_112f1cbc0;
  lVar6 = lVar4;
  func_0x000102e0ffe0();
  if ((int)lVar6 == 1) {
    pcVar10 = (code *)0x0;
    puVar11 = (undefined *)0x0;
  }
  else {
    pcVar10 = *(code **)(lVar4 + 0x70);
    puVar11 = *(undefined **)(lVar4 + 0x78);
    func_0x000100d280a4(pcVar10,puVar11);
  }
  FUN_102e10194();
  FUN_102e0e114();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f1cc30);
  if (*(char *)(puVar1 + 1) == '\x01') {
    func_0x000104366fc4(0x100000000000002d,0x800000010f10f8f0,lVar7,&PTR_DAT_1105d82e8);
    uVar12 = 0x27;
  }
  else {
    uVar12 = *puVar1;
  }
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  if (iVar3 == 0) {
    lVar4 = unaff_x20 + _DAT_112f1cba0;
    func_0x000107c61618();
    if (lVar4 != 0) {
      uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112f1cb88);
      puVar5 = &UNK_1105d7478;
      func_0x000107c613fc(&UNK_1105d7478,0x32,7);
      *(undefined8 *)(puVar5 + 0x10) = uVar9;
      *(undefined8 *)(puVar5 + 0x18) = uVar12;
      *(code **)(puVar5 + 0x20) = pcVar10;
      *(undefined **)(puVar5 + 0x28) = puVar11;
      puVar5[0x30] = 1;
      puVar5[0x31] = cVar2;
      uStack_70 = 0x102e10368;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1000f6b44;
      puStack_78 = &UNK_1105d7490;
      puStack_68 = puVar5;
      func_0x000107c60bc4(&puStack_90);
      puVar5 = puStack_68;
      func_0x000100d280a4(pcVar10,puVar11);
      func_0x000107c615f0(uVar9);
      puVar11 = puVar5;
      goto code_r0x000107c61574;
    }
    func_0x000104366fc4(0xd000000000000013,0x800000010f10f920,lVar7,&PTR_DAT_1105d82e8);
  }
  else {
    func_0x000107c5bb50(*(undefined8 *)(unaff_x20 + _DAT_112f1cb88));
  }
  if (pcVar10 == (code *)0x0) {
    return;
  }
  uVar8 = 0x100;
  if (cVar2 == '\0') {
    uVar8 = 0;
  }
  func_0x000107c6157c(puVar11);
  (*pcVar10)(uVar8 | 1);
  if (pcVar10 == (code *)0x0) {
    return;
  }
code_r0x000107c61574:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar11);
  return;
}



/* Entry: 102e0e674; end: 102e0e6cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102e0e674(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x102e0e644;
  func_0x0001000bfde0(0x102e0e644,0,&UNK_1105d72c8);
  uVar2 = uVar1;
  FUN_102e0d820();
  func_0x0001000c2068();
  func_0x000107c61574(uVar1);
  return uVar2;
}



/* Entry: 102e0e6cc; end: 102e0f353;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e0e6cc(undefined8 param_1,long param_2,long param_3,undefined8 *param_4,long *param_5,
                  long param_6,long param_7)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  byte bVar12;
  bool bVar13;
  long lVar14;
  char *pcVar15;
  undefined *puVar16;
  undefined8 ***pppuVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  code *pcVar21;
  long lVar22;
  long lVar23;
  long *plVar24;
  undefined8 uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  undefined8 ***pppuVar29;
  long unaff_x20;
  ulong uVar30;
  long lVar31;
  undefined *puVar32;
  undefined8 uVar33;
  long lStack_3b0;
  long lStack_3a0;
  char cStack_370;
  char cStack_36c;
  ulong uStack_368;
  long lStack_360;
  long lStack_330;
  undefined1 auStack_328 [80];
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  undefined8 **ppuStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long lStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long *plStack_248;
  undefined1 uStack_240;
  undefined7 uStack_23f;
  char cStack_238;
  char cStack_237;
  undefined6 uStack_236;
  ulong uStack_230;
  char cStack_228;
  undefined7 uStack_227;
  long lStack_220;
  long lStack_218;
  char cStack_210;
  undefined7 uStack_20f;
  undefined *puStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  undefined8 **ppuStack_130;
  long lStack_128;
  ulong uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  long lStack_108;
  ulong uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  
  lVar31 = unaff_x20;
  func_0x000107c614f0();
  lStack_98 = param_5[5];
  lStack_a0 = param_5[4];
  lStack_88 = param_5[7];
  lStack_90 = param_5[6];
  lStack_78 = param_5[9];
  lStack_80 = param_5[8];
  lStack_b8 = param_5[1];
  lStack_c0 = *param_5;
  lStack_a8 = param_5[3];
  lStack_b0 = param_5[2];
  pppuVar29 = (undefined8 ***)*param_4;
  cVar6 = *(char *)(param_4 + 1);
  cVar7 = *(char *)((long)param_4 + 9);
  uStack_368 = param_4[2];
  cStack_36c = *(char *)(param_4 + 3);
  lStack_330 = param_4[4];
  lStack_360 = param_4[5];
  cStack_370 = *(char *)(param_4 + 6);
  puVar32 = (undefined *)param_4[7];
  lVar14 = *(long *)(unaff_x20 + _DAT_112f1cb70);
  func_0x000107c5194c();
  func_0x000107c61180();
  pcVar15 = (char *)0x0;
  if (lVar14 != 0) {
    func_0x000107c61170();
    pcVar15 = (char *)0x100000000000003d;
    func_0x000104366fc4(0x100000000000003d,0x800000010f10f9a0,lVar31,&PTR_DAT_1105d82e8);
    FUN_102e0e114();
  }
  func_0x00010433bef4();
  cVar8 = *pcVar15;
  cVar9 = pcVar15[1];
  uVar26 = *(ulong *)(pcVar15 + 8);
  cVar10 = pcVar15[0x10];
  lVar14 = *(long *)(pcVar15 + 0x18);
  lVar18 = *(long *)(pcVar15 + 0x20);
  cVar11 = pcVar15[0x28];
  func_0x000107c61434(uVar26);
  func_0x000100de78a0(lVar14,lVar18);
  puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x00010076e8cc();
  uVar30 = param_4[6];
  bVar12 = *(byte *)(param_4 + 0xe);
  if (bVar12 < 5) {
    lStack_3a0 = param_4[1];
    if (1 < bVar12) {
      if (bVar12 == 2) {
        uStack_e8 = param_4[9];
        uStack_f0 = param_4[8];
        uStack_d8 = param_4[0xb];
        uStack_e0 = param_4[10];
        uStack_c8 = param_4[0xd];
        uStack_d0 = param_4[0xc];
        pppuVar17 = &ppuStack_130;
        ppuStack_130 = pppuVar29;
        lStack_128 = lStack_3a0;
        uStack_120 = uStack_368;
        uStack_118 = param_4[3];
        lStack_110 = lStack_330;
        lStack_108 = lStack_360;
        uStack_100 = uVar30;
        puStack_f8 = puVar32;
        FUN_102e11e9c();
      }
      else {
        if (bVar12 != 3) {
          FUN_102e12274();
          func_0x000107c61180();
          lStack_3a0 = 0;
          goto LAB_102e0ea54;
        }
        pppuVar17 = &ppuStack_130;
        ppuStack_130 = pppuVar29;
        lStack_128 = lStack_3a0;
        uStack_120 = uStack_368;
        uStack_118 = param_4[3];
        lStack_110 = lStack_330;
        lStack_108 = lStack_360;
        uStack_100 = uVar30;
        puStack_f8 = puVar32;
        FUN_102e12154();
      }
      func_0x000107c61180();
      bVar13 = true;
      lStack_3a0 = 2;
      puVar32 = puVar16;
      pppuVar29 = pppuVar17;
      uStack_368 = uVar26;
      lStack_360 = lVar18;
      lStack_330 = lVar14;
      cStack_36c = cVar10;
      cStack_370 = cVar11;
      cVar6 = cVar8;
      cVar7 = cVar9;
      goto LAB_102e0eaf4;
    }
    if (bVar12 == 0) {
      FUN_102e12610(param_4,&lStack_200);
      func_0x000107c61174();
LAB_102e0ea54:
      bVar13 = true;
      puVar32 = puVar16;
      uStack_368 = uVar26;
      lStack_360 = lVar18;
      lStack_330 = lVar14;
      cStack_36c = cVar10;
      cStack_370 = cVar11;
      cVar6 = cVar8;
      cVar7 = cVar9;
      goto LAB_102e0eaf4;
    }
    puVar32 = PTR_PTR_1126ae6d8;
    func_0x000107c610f8(PTR_PTR_1126ae6d8);
    bVar13 = true;
    func_0x000107c486a0();
    pppuVar17 = (undefined8 ***)PTR_PTR_1126b1bb0;
    func_0x000107c61168();
    func_0x000107c4b3c4();
    func_0x000107c61180();
    func_0x000107c61170(puVar32);
    func_0x000107c61174();
  }
  else {
    if (bVar12 == 5) {
      func_0x000107c6142c(uVar26);
      func_0x000107c6142c(puVar16);
      func_0x0001000b44c0(lVar14,lVar18);
      bVar13 = (uVar30 & 0xff) != 2;
      func_0x000107c61434(uStack_368);
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000100de78a0(lStack_330,lStack_360);
      func_0x000107c61434(puVar32);
      lStack_3a0 = 0;
      goto LAB_102e0eaf4;
    }
    lVar1 = param_4[0xc];
    lVar23 = param_4[0xd];
    lVar20 = param_4[10];
    lVar22 = param_4[0xb];
    lVar4 = param_4[8];
    lVar5 = param_4[9];
    uVar28 = param_4[3];
    uVar27 = param_4[1];
    pppuVar17 = (undefined8 ***)(uVar28 | uStack_368 | uVar27);
    bVar13 = ((((uVar30 == 0 && pppuVar29 == (undefined8 ***)0x0) && (lVar23 == 0 && lVar1 == 0)) &&
              ((lVar22 == 0 && lVar20 == 0) && lVar5 == 0)) &&
             (((lVar4 == 0 && puVar32 == (undefined *)0x0) && lStack_360 == 0) && lStack_330 == 0))
             && pppuVar17 == (undefined8 ***)0x0;
    if (((((uVar30 == 0 && pppuVar29 == (undefined8 ***)0x0) && uVar27 == 0) &&
         ((uStack_368 == 0 && uVar28 == 0) && lStack_330 == 0)) &&
        (((lStack_360 == 0 && puVar32 == (undefined *)0x0) && lVar4 == 0) && lVar5 == 0)) &&
        (((lVar20 == 0 && lVar22 == 0) && lVar1 == 0) && lVar23 == 0)) {
      func_0x000102e123c8();
    }
    else if ((pppuVar29 == (undefined8 ***)0x1) &&
            (((((uVar27 == 0 && uVar30 == 0) && (uStack_368 == 0 && uVar28 == 0)) &&
              ((lStack_330 == 0 && lStack_360 == 0) && puVar32 == (undefined *)0x0)) &&
             (((lVar4 == 0 && lVar5 == 0) && lVar20 == 0) && lVar22 == 0)) &&
             (lVar1 == 0 && lVar23 == 0))) {
      FUN_102e11d24();
    }
    else {
      func_0x000102e11de0();
    }
    func_0x000107c61180();
  }
  lStack_3a0 = 0;
  puVar32 = puVar16;
  pppuVar29 = pppuVar17;
  uStack_368 = uVar26;
  lStack_360 = lVar18;
  lStack_330 = lVar14;
  cStack_36c = cVar10;
  cStack_370 = cVar11;
  cVar6 = cVar8;
  cVar7 = cVar9;
LAB_102e0eaf4:
  lStack_200 = 0;
  lStack_1f8 = 0xe000000000000000;
  func_0x000107c602fc(0x16);
  func_0x000107c6142c(lStack_1f8);
  lStack_200 = -0x2fffffffffffffec;
  lStack_1f8 = 0x800000010f10f980;
  func_0x000107c5fb78(param_2,param_3);
  lVar14 = lStack_1f8;
  func_0x0001007d6c6c(1,lStack_200,lStack_1f8,lVar31,&PTR_DAT_1105d82e8);
  func_0x000107c6142c(lVar14);
  func_0x000107c61604(unaff_x20 + _DAT_112f1cba0,param_1);
  *(undefined1 *)(unaff_x20 + _DAT_112f1cc38) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f1cc40) = 0;
  lStack_1e8 = 0;
  lStack_1f0 = 0;
  lStack_1d8 = 0;
  lStack_1e0 = 0;
  lStack_1c8 = 0;
  lStack_1d0 = 0;
  lStack_1b8 = 0;
  lStack_1c0 = 0;
  lStack_1a8 = 0;
  lStack_1b0 = 0;
  lStack_1a0 = 0;
  lStack_200 = param_2;
  lStack_1f8 = param_3;
  func_0x000107c61434(param_3);
  func_0x0001007d6d78(&lStack_200);
  FUN_102e11cf0(&lStack_200);
  func_0x0001000d224c(&lStack_200);
  lVar31 = lStack_200;
  lVar14 = lStack_200;
  func_0x000107c4f938(lStack_200);
  func_0x000107c615e8(lVar31);
  func_0x0001000d224c(&lStack_200);
  lVar31 = lStack_200;
  lVar18 = lStack_200;
  func_0x000107c4f93c();
  func_0x000107c615e8(lVar31);
  uVar19 = 0;
  FUN_102e086f0(0);
  func_0x000107c610f8();
  FUN_102e046b0(lVar18,lVar14,lVar14 == 0,uVar19);
  uVar19 = *(undefined8 *)(unaff_x20 + _DAT_112f1cbe8);
  *(long *)(unaff_x20 + _DAT_112f1cbe8) = lVar18;
  func_0x000107c61174();
  func_0x000107c61170(uVar19);
  lVar31 = 0;
  if (cVar7 != '\x01') {
    lVar31 = 0;
    func_0x000102e1c77c();
    func_0x000107c613fc();
    *(undefined8 *)(lVar31 + 0x18) = 0;
    func_0x000107c61614(lVar31 + 0x10,0);
    *(undefined8 *)(lVar31 + 0x28) = 0;
    *(undefined8 *)(lVar31 + 0x30) = 0;
    *(undefined ***)(lVar31 + 0x18) = &PTR_DAT_1105d73e0;
    *(undefined8 *)(lVar31 + 0x20) = 0;
    lVar14 = unaff_x20;
    func_0x000107c61604(lVar31 + 0x10);
  }
  uVar19 = *(undefined8 *)(unaff_x20 + _DAT_112f1cc08);
  *(long *)(unaff_x20 + _DAT_112f1cc08) = lVar31;
  func_0x000107c6157c(lVar31);
  func_0x000107c61574(uVar19);
  func_0x0001000d224c(&lStack_200);
  lVar1 = lStack_200;
  lVar20 = lStack_200;
  func_0x000107c5d0b0();
  func_0x000107c615e8(lVar1);
  pppuVar17 = pppuVar29;
  FUN_102e12484(pppuVar29);
  uVar19 = 0x112d3b7d8;
  func_0x0001000285a8(0x112d3b7d8,&UNK_10d920690);
  pcVar21 = FUN_102e0f354;
  func_0x0001000bfde0(FUN_102e0f354,0,uVar19);
  func_0x000102e0c818(0);
  func_0x000107c613fc();
  FUN_102e0c838(lVar20,pppuVar17,lVar14,pcVar21);
  func_0x000107c61574(pcVar21);
  if (lVar31 == 0) {
    lStack_3b0 = 0;
  }
  else {
    lStack_3b0 = lVar31;
    func_0x000107c6157c();
    FUN_102e1c2bc();
    func_0x000107c61574(lVar31);
  }
  lVar22 = 0;
  FUN_102e19fc0();
  lVar23 = lVar22;
  func_0x000107c610f8();
  func_0x000107c61614(lVar23 + _DAT_112f1d1b0,0);
  lVar14 = lVar23 + _DAT_112f1d1b8;
  *(undefined8 *)(lVar14 + 8) = 0;
  func_0x000107c61614(lVar14,0);
  lVar1 = lVar23 + _DAT_112f1d1c0;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  lVar4 = _DAT_112f1d1c8;
  puVar16 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c6157c(lVar20);
  func_0x000107c453e4();
  *(undefined **)(lVar23 + lVar4) = puVar16;
  *(undefined8 *)(lVar23 + _DAT_112f1d1d0) = 0;
  func_0x000107c61614(lVar23 + _DAT_112f1d1f8,0);
  func_0x000107c61614(lVar23 + _DAT_112f1d200,0);
  func_0x000107c61614(lVar23 + _DAT_112f1d208,0);
  func_0x000107c61614(lVar23 + _DAT_112f1d210,0);
  *(undefined8 *)(lVar23 + _DAT_112f1d218) = 0;
  puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(lVar23 + _DAT_112f1d220) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(lVar23 + _DAT_112f1d228) = puVar16;
  *(undefined **)(lVar23 + _DAT_112f1d230) = puVar16;
  *(undefined **)(lVar23 + _DAT_112f1d238) = puVar16;
  *(undefined8 *)(lVar23 + _DAT_112f1d240) = 0;
  *(undefined1 *)(lVar23 + _DAT_112f1d248) = 0;
  puVar2 = (undefined8 *)(lVar23 + _DAT_112f1d250);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(lVar23 + _DAT_112f1d258) = 0;
  *(undefined8 *)(lVar23 + _DAT_112f1d260) = 0;
  *(undefined ***)(lVar1 + 8) = &PTR_DAT_1105d73c8;
  func_0x000107c61604(lVar1,unaff_x20);
  *(undefined ***)(lVar14 + 8) = &PTR_DAT_1105d73f0;
  func_0x000107c61604(lVar14,unaff_x20);
  *(long *)(lVar23 + _DAT_112f1d1d8) = lVar18;
  *(long *)(lVar23 + _DAT_112f1d1e0) = lStack_3b0;
  *(bool *)(lVar23 + _DAT_112f1d1e8) = cVar6 != '\0';
  *(long *)(lVar23 + _DAT_112f1d1f0) = lVar20;
  puVar16 = PTR_s_initWithNibName_bundle__1125e9850;
  lStack_2d8 = lVar23;
  lStack_2d0 = lVar22;
  func_0x000107c61174();
  func_0x000107c6157c(lVar20);
  func_0x000107c61174(lStack_3b0);
  plVar24 = &lStack_2d8;
  func_0x000107c61154(plVar24,puVar16,0,0);
  FUN_102e18788();
  func_0x000107c61170(lVar18);
  func_0x000107c61170(lStack_3b0);
  func_0x000107c61574(lVar20);
  lStack_280 = lStack_98;
  lStack_288 = lStack_a0;
  lStack_270 = lStack_88;
  lStack_278 = lStack_90;
  lStack_260 = lStack_78;
  lStack_268 = lStack_80;
  lStack_290 = lStack_a8;
  lStack_298 = lStack_b0;
  lStack_2a0 = lStack_b8;
  lStack_2a8 = lStack_c0;
  lStack_2b0 = lStack_3a0;
  uStack_230 = uStack_368;
  cStack_228 = cStack_36c;
  lStack_220 = lStack_330;
  lStack_218 = lStack_360;
  cStack_210 = cStack_370;
  lStack_2c8 = param_2;
  lStack_2c0 = param_3;
  ppuStack_2b8 = pppuVar29;
  lStack_258 = param_6;
  lStack_250 = param_7;
  plStack_248 = plVar24;
  uStack_240 = bVar13;
  cStack_238 = cVar6;
  cStack_237 = cVar7;
  puStack_208 = puVar32;
  FUN_102e1260c(&lStack_2c8);
  plVar3 = (long *)(unaff_x20 + _DAT_112f1cbc0);
  lStack_158 = plVar3[0x15];
  lStack_160 = plVar3[0x14];
  lStack_148 = plVar3[0x17];
  lStack_150 = plVar3[0x16];
  lStack_140 = plVar3[0x18];
  lStack_198 = plVar3[0xd];
  lStack_1a0 = plVar3[0xc];
  lStack_188 = plVar3[0xf];
  lStack_190 = plVar3[0xe];
  lStack_178 = plVar3[0x11];
  lStack_180 = plVar3[0x10];
  lStack_168 = plVar3[0x13];
  lStack_170 = plVar3[0x12];
  lStack_1d8 = plVar3[5];
  lStack_1e0 = plVar3[4];
  lStack_1c8 = plVar3[7];
  lStack_1d0 = plVar3[6];
  lStack_1b8 = plVar3[9];
  lStack_1c0 = plVar3[8];
  lStack_1a8 = plVar3[0xb];
  lStack_1b0 = plVar3[10];
  lStack_1f8 = plVar3[1];
  lStack_200 = *plVar3;
  lStack_1e8 = plVar3[3];
  lStack_1f0 = plVar3[2];
  plVar3[0x15] = lStack_220;
  plVar3[0x14] = CONCAT71(uStack_227,cStack_228);
  plVar3[0x17] = CONCAT71(uStack_20f,cStack_210);
  plVar3[0x16] = lStack_218;
  plVar3[0x18] = (long)puStack_208;
  plVar3[0xd] = lStack_260;
  plVar3[0xc] = lStack_268;
  plVar3[0xf] = lStack_250;
  plVar3[0xe] = lStack_258;
  plVar3[0x11] = CONCAT71(uStack_23f,uStack_240);
  plVar3[0x10] = (long)plStack_248;
  plVar3[0x13] = uStack_230;
  plVar3[0x12] = CONCAT62(uStack_236,CONCAT11(cStack_237,cStack_238));
  plVar3[5] = lStack_2a0;
  plVar3[4] = lStack_2a8;
  plVar3[7] = lStack_290;
  plVar3[6] = lStack_298;
  plVar3[9] = lStack_280;
  plVar3[8] = lStack_288;
  plVar3[0xb] = lStack_270;
  plVar3[10] = lStack_278;
  plVar3[1] = lStack_2c0;
  *plVar3 = lStack_2c8;
  plVar3[3] = lStack_2b0;
  plVar3[2] = (long)ppuStack_2b8;
  func_0x000107c61434(param_3);
  func_0x000102e1280c(param_5,auStack_328,0x112e55fd0,&UNK_10da58ae0);
  func_0x000107c61434(uStack_368);
  func_0x000107c61174(plVar24);
  func_0x000100de78a0(lStack_330,lStack_360);
  func_0x000107c61434(puVar32);
  func_0x000100d280a4(param_6,param_7);
  func_0x000102e103fc(&lStack_200,0x112f1cc78,&UNK_10db55178);
  uVar25 = 0;
  FUN_102e1d760();
  func_0x000107c610f8();
  func_0x000107c61174(plVar24);
  func_0x000107c4804c();
  uVar19 = *(undefined8 *)(unaff_x20 + _DAT_112f1cbb0);
  *(undefined8 *)(unaff_x20 + _DAT_112f1cbb0) = uVar25;
  func_0x000107c61174();
  func_0x000107c61170(uVar19);
  func_0x000107c5677c(plVar24);
  func_0x000107c5a048(plVar24);
  func_0x000107c5676c(plVar24);
  func_0x000107c61170(plVar24);
  func_0x000107c61604(unaff_x20 + _DAT_112f1cba8,plVar24);
  uVar33 = *(undefined8 *)(unaff_x20 + _DAT_112f1cb88);
  uVar19 = uVar33;
  func_0x000107c44368();
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112f1cc30);
  *puVar2 = uVar19;
  *(undefined1 *)(puVar2 + 1) = 0;
  func_0x000107c5bb50(uVar33);
  func_0x000107c55238(*(undefined8 *)(unaff_x20 + _DAT_112f1cbb8));
  func_0x000107c4f018(param_1);
  func_0x000107c6142c(uStack_368);
  func_0x000107c6142c(puVar32);
  func_0x000107c61170(pppuVar29);
  func_0x0001000b44c0(lStack_330,lStack_360);
  func_0x000107c61170(plVar24);
  func_0x000107c61170(uVar25);
  func_0x000107c61574(lVar20);
  func_0x000107c61574(lVar31);
  func_0x000107c61170(lVar18);
  return;
}



/* Entry: 102e0f354; end: 102e0f417;  */

void FUN_102e0f354(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if ((uint)((ulong)param_2[2] >> 0x3d) - 1 < 3) {
    uVar1 = *param_2;
    FUN_102e1264c(uVar1,param_2[1],param_2[2],param_2[3],param_2[4],param_2[5],param_2[6],param_2[7]
                  ,param_2[8],param_2[9],param_2[10],param_2[0xb],param_2[0xc]);
  }
  else {
    uVar1 = 0;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 102e0f418; end: 102e0f47f;  */

void FUN_102e0f418(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long *in_x7;
  long lVar2;
  
  if (param_3 != 0) {
    func_0x000107c40674();
    func_0x000107c61180();
    if (param_3 != 0) {
      lVar2 = param_3;
      func_0x000107c5faec();
      func_0x000107c61170(param_3);
      goto LAB_102e0f468;
    }
  }
  lVar2 = 0;
  param_2 = 0;
LAB_102e0f468:
  lVar1 = in_x7[1];
  *in_x7 = lVar2;
  in_x7[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar1);
  return;
}



/* Entry: 102e0f480; end: 102e0f4bf;  */

void FUN_102e0f480(void)

{
  FUN_102e0e6cc();
  return;
}



/* Entry: 102e0f4c0; end: 102e0f61f; -[_TtC21PlayGamesServicesImpl18PlayGamesPresenter presentGameWithPresentingViewController:lensId:replyConfiguration:launchContext:completion:] */

/* WARNING: Possible PIC construction at 0x000102e0f5d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e0f5f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e0f5d8) */
/* WARNING: Removing unreachable block (ram,0x000102e0f5fc) */

void FUN_102e0f4c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 uStack_b8;
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
  
  func_0x000107c60bc4();
  func_0x000107c5faec(param_4);
  if (param_7 == 0) {
    puVar2 = (undefined *)0x0;
    pcVar3 = (code *)0x0;
  }
  else {
    puVar2 = &UNK_1105d7658;
    func_0x000107c613fc(&UNK_1105d7658,0x18,7);
    *(long *)(puVar2 + 0x10) = param_7;
    pcVar3 = FUN_102e129ec;
  }
  uStack_b8 = 0;
  puVar1 = &UNK_1105d7630;
  uStack_128 = param_5;
  uStack_120 = param_6;
  func_0x000107c613fc(&UNK_1105d7630,0x20,7);
  *(code **)(puVar1 + 0x10) = pcVar3;
  *(undefined **)(puVar1 + 0x18) = puVar2;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  func_0x000100d280a4(pcVar3,puVar2);
  FUN_102e0e6cc(param_3,param_4,param_2,&uStack_128,&uStack_b0,FUN_102e129c0,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102e0f620; end: 102e0f6df;  */

long FUN_102e0f620(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 102e0f6e0; end: 102e0fbcf;  */

undefined8 * FUN_102e0f6e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  uVar5 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar5;
  lVar4 = param_2[5];
  func_0x000107c61434();
  func_0x000107c61174(uVar1);
  if (lVar4 == 0) {
    uVar1 = param_2[8];
    uVar6 = param_2[0xb];
    uVar5 = param_2[10];
    param_1[9] = param_2[9];
    param_1[8] = uVar1;
    param_1[0xb] = uVar6;
    param_1[10] = uVar5;
    uVar1 = param_2[0xc];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar1;
    uVar6 = param_2[4];
    uVar5 = param_2[7];
    uVar1 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar6;
    param_1[7] = uVar5;
    param_1[6] = uVar1;
  }
  else {
    param_1[4] = param_2[4];
    param_1[5] = lVar4;
    lVar2 = param_2[7];
    func_0x000107c61434(lVar4);
    if (lVar2 == 1) {
      uVar1 = param_2[6];
      uVar6 = param_2[9];
      uVar5 = param_2[8];
      param_1[7] = param_2[7];
      param_1[6] = uVar1;
      param_1[9] = uVar6;
      param_1[8] = uVar5;
    }
    else {
      param_1[6] = param_2[6];
      param_1[7] = lVar2;
      uVar1 = param_2[9];
      param_1[8] = param_2[8];
      param_1[9] = uVar1;
      func_0x000107c61434(lVar2);
      func_0x000107c61434(uVar1);
    }
    param_1[10] = param_2[10];
    *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
    uVar1 = param_2[0xd];
    param_1[0xc] = param_2[0xc];
    param_1[0xd] = uVar1;
    func_0x000107c61434();
  }
  lVar4 = param_2[0xe];
  if (lVar4 == 0) {
    lVar4 = param_2[0xe];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = lVar4;
  }
  else {
    uVar1 = param_2[0xf];
    param_1[0xe] = lVar4;
    param_1[0xf] = uVar1;
    func_0x000107c6157c();
  }
  param_1[0x10] = param_2[0x10];
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x11);
  *(undefined2 *)(param_1 + 0x12) = *(undefined2 *)(param_2 + 0x12);
  uVar1 = param_2[0x13];
  param_1[0x13] = uVar1;
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 0x14);
  uVar3 = param_2[0x16];
  func_0x000107c615f0();
  func_0x000107c61434(uVar1);
  if (uVar3 >> 0x3c < 0xf) {
    uVar1 = param_2[0x15];
    func_0x00010006c00c(uVar1,uVar3);
    param_1[0x15] = uVar1;
    param_1[0x16] = uVar3;
  }
  else {
    uVar1 = param_2[0x15];
    param_1[0x16] = param_2[0x16];
    param_1[0x15] = uVar1;
  }
  *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)(param_2 + 0x17);
  param_1[0x18] = param_2[0x18];
  func_0x000107c61434();
  return param_1;
}



/* Entry: 102e0fbd0; end: 102e0fc03;  */

undefined8 FUN_102e0fbd0(undefined8 param_1)

{
  (*(code *)&DAT_10433b53c)();
  return param_1;
}



/* Entry: 102e0fc04; end: 102e0fdef;  */

undefined8 * FUN_102e0fc04(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61170(uVar2);
  param_1[3] = param_2[3];
  if (param_1[5] == 0) {
LAB_102e0fca4:
    uVar2 = param_2[8];
    uVar5 = param_2[0xb];
    uVar1 = param_2[10];
    param_1[9] = param_2[9];
    param_1[8] = uVar2;
    param_1[0xb] = uVar5;
    param_1[10] = uVar1;
    uVar2 = param_2[0xc];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar2;
    uVar5 = param_2[4];
    uVar1 = param_2[7];
    uVar2 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar5;
    param_1[7] = uVar1;
    param_1[6] = uVar2;
  }
  else {
    lVar3 = param_2[5];
    if (lVar3 == 0) {
      FUN_102e0fbd0(param_1 + 4);
      goto LAB_102e0fca4;
    }
    param_1[4] = param_2[4];
    param_1[5] = lVar3;
    func_0x000107c6142c();
    if (param_1[7] == 1) {
LAB_102e0fc90:
      uVar2 = param_2[6];
      uVar5 = param_2[9];
      uVar1 = param_2[8];
      param_1[7] = param_2[7];
      param_1[6] = uVar2;
      param_1[9] = uVar5;
      param_1[8] = uVar1;
    }
    else {
      lVar3 = param_2[7];
      if (lVar3 == 1) {
        func_0x000102e103fc(param_1 + 6,0x112f1cc70,&UNK_10dcec9e0);
        goto LAB_102e0fc90;
      }
      param_1[6] = param_2[6];
      param_1[7] = lVar3;
      func_0x000107c6142c();
      uVar2 = param_2[9];
      uVar1 = param_1[9];
      param_1[8] = param_2[8];
      param_1[9] = uVar2;
      func_0x000107c6142c(uVar1);
    }
    param_1[10] = param_2[10];
    *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
    uVar2 = param_2[0xd];
    uVar1 = param_1[0xd];
    param_1[0xc] = param_2[0xc];
    param_1[0xd] = uVar2;
    func_0x000107c6142c(uVar1);
  }
  lVar3 = param_2[0xe];
  if (param_1[0xe] == 0) {
    if (lVar3 == 0) goto LAB_102e0fd40;
    uVar2 = param_2[0xf];
    param_1[0xe] = lVar3;
    param_1[0xf] = uVar2;
  }
  else if (lVar3 == 0) {
    func_0x000107c61574(param_1[0xf]);
LAB_102e0fd40:
    lVar3 = param_2[0xe];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = lVar3;
  }
  else {
    uVar1 = param_2[0xf];
    uVar2 = param_1[0xf];
    param_1[0xe] = lVar3;
    param_1[0xf] = uVar1;
    func_0x000107c61574(uVar2);
  }
  uVar2 = param_1[0x10];
  param_1[0x10] = param_2[0x10];
  func_0x000107c615e8(uVar2);
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x11);
  *(undefined2 *)(param_1 + 0x12) = *(undefined2 *)(param_2 + 0x12);
  uVar2 = param_1[0x13];
  param_1[0x13] = param_2[0x13];
  func_0x000107c6142c(uVar2);
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 0x14);
  if ((ulong)param_1[0x16] >> 0x3c < 0xf) {
    uVar4 = param_2[0x16];
    if (uVar4 >> 0x3c < 0xf) {
      uVar2 = param_1[0x15];
      param_1[0x15] = param_2[0x15];
      param_1[0x16] = uVar4;
      func_0x00010006c090(uVar2);
      goto LAB_102e0fdc4;
    }
    func_0x0001006e5814(param_1 + 0x15);
  }
  uVar2 = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  param_1[0x15] = uVar2;
LAB_102e0fdc4:
  *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)(param_2 + 0x17);
  uVar2 = param_1[0x18];
  param_1[0x18] = param_2[0x18];
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 102e0fdf0; end: 102e0feb7;  */

int FUN_102e0fdf0(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x32] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102e0feb8; end: 102e0ff83;  */

void FUN_102e0feb8(void)

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
  pcVar1 = "gamesMessageSent()";
  func_0x0001000c10c0("gamesMessageSent()");
  func_0x000107c61180();
  puVar2 = &UNK_1105d75b8;
  func_0x000107c613fc(&UNK_1105d75b8,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  pcStack_40 = FUN_102e127d0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1105d75d0;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 102e0ff84; end: 102e0ffdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e0ff84(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + _DAT_112f1cc40) = 1;
    func_0x000107c61170();
  }
  return;
}



/* Entry: 102e0ffdc; end: 102e0fff7;  */

void FUN_102e0ffdc(void)

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
  pcVar1 = "gamesMessageSent()";
  func_0x0001000c10c0("gamesMessageSent()");
  func_0x000107c61180();
  puVar2 = &UNK_1105d75b8;
  func_0x000107c613fc(&UNK_1105d75b8,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  pcStack_40 = FUN_102e127d0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1105d75d0;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 102e0fff8; end: 102e10193;  */

/* WARNING: Possible PIC construction at 0x000102e1007c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e100cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e10170: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e100d0) */
/* WARNING: Removing unreachable block (ram,0x000102e10080) */
/* WARNING: Removing unreachable block (ram,0x000102e1016c) */
/* WARNING: Removing unreachable block (ram,0x000102e100ac) */
/* WARNING: Removing unreachable block (ram,0x000102e10174) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e0fff8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c614f0();
  lVar2 = unaff_x20 + _DAT_112f1cba8;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar3 = *(long *)(unaff_x20 + _DAT_112f1cb70);
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar3 == 0) {
      func_0x0001007d6c6c(2,0xd000000000000031,0x800000010f10fa10,lVar1,&PTR_DAT_1105d82e8);
    }
    else {
      func_0x000107c61174(*(undefined8 *)(lVar3 + _DAT_11306fb68));
      lVar2 = lVar3;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  func_0x0001007d6c6c(2,0xd00000000000002e,0x800000010f10f9e0,lVar1,&PTR_DAT_1105d82e8);
  return;
}



/* Entry: 102e10194; end: 102e103b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e10194(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000107c55238(*(undefined8 *)(unaff_x20 + _DAT_112f1cbb8),param_2,0);
  uStack_100 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0xc000000000000000;
  uStack_e0 = 0;
  uStack_e8 = 0;
  uStack_d0 = 0;
  uStack_d8 = 0;
  uStack_c0 = 0;
  uStack_c8 = 0;
  uStack_b0 = 0;
  uStack_b8 = 0;
  uStack_a0 = 0;
  uStack_a8 = 0;
  func_0x0001007d6d78(&uStack_100);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f1cbf0);
  *(undefined8 *)(unaff_x20 + _DAT_112f1cbf0) = 0;
  func_0x000107c61574(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f1cbf8);
  *(undefined8 *)(unaff_x20 + _DAT_112f1cbf8) = 0;
  func_0x000107c61574(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f1cc10);
  *(undefined8 *)(unaff_x20 + _DAT_112f1cc10) = 0;
  func_0x000107c61574(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f1cc00);
  *(undefined8 *)(unaff_x20 + _DAT_112f1cc00) = 0;
  func_0x000107c61574(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f1cc08);
  *(undefined8 *)(unaff_x20 + _DAT_112f1cc08) = 0;
  func_0x000107c61574(uVar2);
  func_0x000102e0bee4(&uStack_1c8);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f1cbc0);
  uStack_58 = puVar1[0x15];
  uStack_60 = puVar1[0x14];
  uStack_48 = puVar1[0x17];
  uStack_50 = puVar1[0x16];
  uStack_40 = puVar1[0x18];
  uStack_98 = puVar1[0xd];
  uStack_a0 = puVar1[0xc];
  uStack_88 = puVar1[0xf];
  uStack_90 = puVar1[0xe];
  uStack_78 = puVar1[0x11];
  uStack_80 = puVar1[0x10];
  uStack_68 = puVar1[0x13];
  uStack_70 = puVar1[0x12];
  uStack_d8 = puVar1[5];
  uStack_e0 = puVar1[4];
  uStack_c8 = puVar1[7];
  uStack_d0 = puVar1[6];
  uStack_b8 = puVar1[9];
  uStack_c0 = puVar1[8];
  uStack_a8 = puVar1[0xb];
  uStack_b0 = puVar1[10];
  uStack_f8 = puVar1[1];
  uStack_100 = *puVar1;
  uStack_e8 = puVar1[3];
  uStack_f0 = puVar1[2];
  puVar1[0x15] = uStack_120;
  puVar1[0x14] = uStack_128;
  puVar1[0x17] = uStack_110;
  puVar1[0x16] = uStack_118;
  puVar1[0x18] = uStack_108;
  puVar1[0xd] = uStack_160;
  puVar1[0xc] = uStack_168;
  puVar1[0xf] = uStack_150;
  puVar1[0xe] = uStack_158;
  puVar1[0x11] = uStack_140;
  puVar1[0x10] = uStack_148;
  puVar1[0x13] = uStack_130;
  puVar1[0x12] = uStack_138;
  puVar1[5] = uStack_1a0;
  puVar1[4] = uStack_1a8;
  puVar1[7] = uStack_190;
  puVar1[6] = uStack_198;
  puVar1[9] = uStack_180;
  puVar1[8] = uStack_188;
  puVar1[0xb] = uStack_170;
  puVar1[10] = uStack_178;
  puVar1[1] = uStack_1c0;
  *puVar1 = uStack_1c8;
  puVar1[3] = uStack_1b0;
  puVar1[2] = uStack_1b8;
  func_0x000102e103fc(&uStack_100,0x112f1cc78,&UNK_10db55178);
  *(undefined1 *)(unaff_x20 + _DAT_112f1cc38) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f1cc40) = 0;
  func_0x000107c61604(unaff_x20 + _DAT_112f1cba8,0);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f1cbb0);
  *(undefined8 *)(unaff_x20 + _DAT_112f1cbb0) = 0;
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102e103b8; end: 102e103db;  */

void FUN_102e103b8(long param_1,long param_2)

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



/* Entry: 102e103dc; end: 102e1043b;  */

void FUN_102e103dc(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102e1043c; end: 102e10d1f;  */

/* WARNING: Possible PIC construction at 0x000102e107ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e10860: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e108a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e10a54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e10b10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e10c48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e10c58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e10c4c) */
/* WARNING: Removing unreachable block (ram,0x000102e10b14) */
/* WARNING: Removing unreachable block (ram,0x000102e10a58) */
/* WARNING: Removing unreachable block (ram,0x000102e10b50) */
/* WARNING: Removing unreachable block (ram,0x000102e10b10) */
/* WARNING: Removing unreachable block (ram,0x000102e108a8) */
/* WARNING: Removing unreachable block (ram,0x000102e10864) */
/* WARNING: Removing unreachable block (ram,0x000102e107b0) */
/* WARNING: Removing unreachable block (ram,0x000102e10c5c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e1043c(undefined8 param_1)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  ulong *puVar4;
  long unaff_x20;
  long lVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  ulong uVar13;
  undefined1 auStack_3e8 [200];
  ulong uStack_320;
  ulong uStack_318;
  ulong uStack_310;
  ulong uStack_308;
  ulong uStack_300;
  ulong uStack_2f8;
  ulong uStack_2f0;
  ulong uStack_2e8;
  ulong uStack_2e0;
  double dStack_2d8;
  ulong uStack_2d0;
  double dStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  double dStack_130;
  ulong uStack_128;
  double dStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  
  lVar3 = unaff_x20;
  func_0x000107c614f0();
  lVar5 = *(long *)(unaff_x20 + _DAT_112f1cb70);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar5 != 0) {
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
  puVar4 = (ulong *)(unaff_x20 + _DAT_112f1cbc0);
  uStack_e8 = puVar4[0x13];
  uStack_f0 = puVar4[0x12];
  uStack_1a8 = puVar4[0x15];
  uStack_1b0 = puVar4[0x14];
  uStack_d8 = puVar4[0x15];
  uVar13 = puVar4[0x14];
  uStack_198 = puVar4[0x17];
  uStack_1a0 = puVar4[0x16];
  uStack_128 = puVar4[0xb];
  dVar12 = (double)puVar4[10];
  uStack_1e8 = puVar4[0xd];
  uStack_1f0 = puVar4[0xc];
  uStack_118 = puVar4[0xd];
  dStack_120 = (double)puVar4[0xc];
  uStack_1d8 = puVar4[0xf];
  uStack_1e0 = puVar4[0xe];
  uStack_108 = puVar4[0xf];
  uStack_110 = puVar4[0xe];
  uStack_1c8 = puVar4[0x11];
  uStack_1d0 = puVar4[0x10];
  uStack_f8 = puVar4[0x11];
  uStack_100 = puVar4[0x10];
  uStack_1b8 = puVar4[0x13];
  uStack_1c0 = puVar4[0x12];
  uStack_168 = puVar4[3];
  uStack_170 = puVar4[2];
  uStack_228 = puVar4[5];
  uStack_230 = puVar4[4];
  uStack_158 = puVar4[5];
  uStack_160 = puVar4[4];
  uStack_218 = puVar4[7];
  uStack_220 = puVar4[6];
  uStack_148 = puVar4[7];
  uStack_150 = puVar4[6];
  uStack_208 = puVar4[9];
  uStack_210 = puVar4[8];
  uStack_138 = puVar4[9];
  uStack_140 = puVar4[8];
  uStack_1f8 = puVar4[0xb];
  uStack_200 = puVar4[10];
  uStack_248 = puVar4[1];
  uStack_250 = *puVar4;
  uStack_238 = puVar4[3];
  uStack_240 = puVar4[2];
  uStack_178 = puVar4[1];
  uStack_180 = *puVar4;
  uStack_c8 = puVar4[0x17];
  uStack_d0 = puVar4[0x16];
  uStack_190 = puVar4[0x18];
  uStack_c0 = puVar4[0x18];
  iVar2 = (int)&uStack_250;
  dStack_130 = dVar12;
  uStack_e0 = uVar13;
  FUN_102e0ffdc();
  uStack_318 = uStack_178;
  uVar1 = uStack_180;
  if (iVar2 == 1) {
    func_0x000104366fc4(0xd000000000000019,0x800000010f10fa70,lVar3,&PTR_DAT_1105d82e8);
  }
  else {
    if (*(long *)(unaff_x20 + _DAT_112f1cbe8) != 0) {
      lVar3 = 0;
      func_0x000102e17204();
      func_0x000107c613fc();
      func_0x0001000285a8(0x112ea35b0,&UNK_10db33120);
      func_0x000107c613fc();
      func_0x000107c61438(uStack_318,2);
      func_0x000107c61174();
      func_0x000102e1280c(&uStack_250,&uStack_320,0x112f1cc78,&UNK_10db55178);
      puVar4 = &uStack_160;
      func_0x000102e1280c(puVar4,&uStack_320,0x112e55fd0,&UNK_10da58ae0);
      func_0x0001000c2754();
      *(ulong **)(lVar3 + 0x18) = puVar4;
      uStack_320 = uStack_320 & 0xffffffffffffff00;
      func_0x0001000285a8(0x112d61fd8,&UNK_10d927f90);
      func_0x000107c613fc();
      puVar4 = &uStack_320;
      func_0x00010042e6a0();
      uStack_300 = uStack_158;
      uStack_308 = uStack_160;
      uStack_2f0 = uStack_148;
      uStack_2f8 = uStack_150;
      uStack_2e0 = uStack_138;
      uStack_2e8 = uStack_140;
      *(ulong **)(lVar3 + 0x20) = puVar4;
      uStack_320 = uVar1;
      uStack_310 = 0;
      uStack_2d0 = uStack_128;
      dStack_2d8 = dStack_130;
      uStack_2c0 = uStack_118;
      dStack_2c8 = dStack_120;
      dVar7 = dStack_120;
      dVar11 = dStack_130;
      func_0x0001000285a8(0x112f1c818,&UNK_10db54e80);
      func_0x000107c613fc();
      puVar4 = &uStack_320;
      func_0x00010042e6a0();
      *(ulong **)(lVar3 + 0x10) = puVar4;
      uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f1cbc8);
      func_0x000107c3ec60(param_1);
      dVar8 = dVar7;
      func_0x000107c609b0();
      dVar9 = dVar7;
      func_0x000107c609cc(dVar7,dVar11,dVar12,uVar13);
      dVar10 = dVar7;
      func_0x000107c609b0(dVar7,dVar11,dVar12,uVar13);
      func_0x000107c61168(PTR__OBJC_CLASS___NSValue_1126afdf8);
      func_0x000107c5dc54(dVar7,dVar11 + dVar8 * 0.05,dVar9,dVar10 * 0.8);
      func_0x000107c61180();
      func_0x000107c4d664(uVar6);
      goto code_r0x000107c61170;
    }
    uStack_278 = uStack_1a8;
    uStack_280 = uStack_1b0;
    uStack_268 = uStack_198;
    uStack_270 = uStack_1a0;
    uStack_260 = uStack_190;
    uStack_2b8 = uStack_1e8;
    uStack_2c0 = uStack_1f0;
    uStack_2a8 = uStack_1d8;
    uStack_2b0 = uStack_1e0;
    uStack_298 = uStack_1c8;
    uStack_2a0 = uStack_1d0;
    uStack_288 = uStack_1b8;
    uStack_290 = uStack_1c0;
    uStack_2f8 = uStack_228;
    uStack_300 = uStack_230;
    uStack_2e8 = uStack_218;
    uStack_2f0 = uStack_220;
    dStack_2d8 = (double)uStack_208;
    uStack_2e0 = uStack_210;
    dStack_2c8 = (double)uStack_1f8;
    uStack_2d0 = uStack_200;
    uStack_318 = uStack_248;
    uStack_320 = uStack_250;
    uStack_308 = uStack_238;
    uStack_310 = uStack_240;
    func_0x000102e127d8(&uStack_320,auStack_3e8);
    func_0x000104366fc4(0xd000000000000014,0x800000010f10fa90,lVar3,&PTR_DAT_1105d82e8);
    func_0x000102e103fc(&uStack_250,0x112f1cc78,&UNK_10db55178);
  }
  return;
}



/* Entry: 102e10d20; end: 102e11053;  */

/* WARNING: Possible PIC construction at 0x000102e10e48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e10e4c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e10d20(void)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined *puVar5;
  code *pcVar6;
  code *pcVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined8 uVar9;
  
  uVar1 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112f1cbf0);
  *(undefined8 *)(unaff_x20 + _DAT_112f1cbf0) = uVar1;
  func_0x000107c6157c();
  func_0x000107c61574(uVar9);
  plVar2 = (long *)0x102e20354;
  func_0x0001000bfde0(0x102e20354,0,&UNK_1105d8390);
  plVar3 = plVar2;
  FUN_102e12930();
  plVar4 = plVar3;
  func_0x0001000c2068();
  func_0x000107c61574(plVar2);
  func_0x000104884898();
  func_0x000107c61574(plVar4);
  puVar5 = &UNK_1105d75b8;
  func_0x000107c613fc(&UNK_1105d75b8,0x18,7);
  func_0x000107c61614(puVar5 + 0x10);
  pcVar6 = FUN_102e12970;
  puVar8 = puVar5;
  (**(code **)(*plVar3 + 0x60))(FUN_102e12970);
  func_0x000107c61574(plVar3);
  func_0x000107c61574(puVar5);
  pcVar7 = pcVar6;
  func_0x000107c614f0(pcVar6);
  (**(code **)(puVar8 + 0x10))(uVar1,pcVar7,puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(pcVar6);
  return;
}



/* Entry: 102e11054; end: 102e113b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e11054(void)

{
  undefined8 uVar1;
  long *plVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  if (*(long *)(unaff_x20 + _DAT_112f1cc08) != 0) {
    uVar1 = 0;
    func_0x0001000c6560();
    func_0x000107c613fc();
    func_0x0001000c6580();
    uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f1cc00);
    *(undefined8 *)(unaff_x20 + _DAT_112f1cc00) = uVar1;
    func_0x000107c6157c();
    func_0x000107c61574(uVar6);
    plVar2 = (long *)0x102e1127c;
    func_0x00010487de38(0x102e1127c,0);
    puVar3 = &UNK_1105d75b8;
    func_0x000107c613fc(&UNK_1105d75b8,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    uVar6 = 0x102e1290c;
    puVar5 = puVar3;
    (**(code **)(*plVar2 + 0x60))(0x102e1290c);
    func_0x000107c61574(plVar2);
    func_0x000107c61574(puVar3);
    uVar4 = uVar6;
    func_0x000107c614f0(uVar6);
    (**(code **)(puVar5 + 0x10))(uVar1,uVar4,puVar5);
    func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar6);
    return;
  }
  return;
}



/* Entry: 102e113b4; end: 102e114fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e113b4(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_78 [24];
  
  lVar12 = *param_1;
  lVar6 = param_1[1];
  lVar1 = param_1[2];
  lVar7 = param_1[3];
  lVar2 = param_1[4];
  lVar8 = param_1[5];
  lVar3 = param_1[6];
  lVar9 = param_1[7];
  lVar4 = param_1[8];
  lVar10 = param_1[9];
  lVar5 = param_1[10];
  lVar11 = param_1[0xb];
  lVar14 = param_1[0xc];
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar13 = *(long *)(param_2 + _DAT_112f1cc08);
    if (lVar13 != 0) {
      if ((uint)((ulong)lVar1 >> 0x3d) - 1 < 3) {
        FUN_102e1264c(lVar12,lVar6,lVar1,lVar7,lVar2,lVar8,lVar3,lVar9,lVar4,lVar10,lVar5,lVar11,
                      lVar14);
      }
      else {
        lVar12 = 0;
      }
      func_0x000107c6157c(lVar13);
      FUN_102e1c3bc(lVar12);
      if (lVar12 != 0) {
        FUN_102e114fc(lVar12);
        func_0x000107c61170(lVar12);
        func_0x000107c61170(param_2);
        func_0x000107c61574(lVar13);
        return;
      }
      FUN_102e1c2bc();
      func_0x000107c5d4c8();
      func_0x000107c61170(param_2);
      func_0x000107c61574(lVar13);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 102e114fc; end: 102e11693;  */

/* WARNING: Possible PIC construction at 0x000102e11650: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e11654) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e114fc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112f1cb98);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    uVar2 = param_1;
    func_0x000107c4b1dc();
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c5faec();
    func_0x000107c61170(uVar2);
    pcVar4 = "fetchLensIcon(for:)";
    func_0x0001000c10c0("fetchLensIcon(for:)");
    func_0x000107c61180();
    func_0x0001000285a8(0x112d4f920,&UNK_10d92c9e0);
    func_0x000107c4045c(param_1);
    func_0x000107c61180();
    lVar5 = lVar1;
    func_0x000107c4b1c0(lVar1);
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    lVar6 = lVar5;
    func_0x000100759c94(lVar5,0);
    func_0x000107c61170(lVar5);
    puVar7 = &UNK_1105d75b8;
    func_0x000107c613fc(&UNK_1105d75b8,0x18,7);
    func_0x000107c61614(puVar7 + 0x10);
    puVar8 = &UNK_1105d7608;
    func_0x000107c613fc(&UNK_1105d7608,0x28,7);
    *(undefined **)(puVar8 + 0x10) = puVar7;
    *(undefined8 *)(puVar8 + 0x18) = uVar3;
    *(undefined8 *)(puVar8 + 0x20) = param_2;
    func_0x000107c615f0(pcVar4);
    func_0x00010075a04c();
    func_0x000107c615e8(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(lVar6);
    return;
  }
  return;
}



/* Entry: 102e11694; end: 102e11817;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e11694(long *param_1,long param_2,ulong param_3,undefined1 *param_4)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined1 auStack_78 [24];
  
  lVar6 = *param_1;
  cVar1 = (char)param_1[1];
  puVar4 = auStack_78;
  func_0x000107c61428(param_2 + 0x10,puVar4,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  lVar5 = _DAT_112f1cc08;
  if (param_2 == 0) {
    return;
  }
  if ((((cVar1 == '\x01') || (lVar6 == 0)) || (*(long *)(param_2 + _DAT_112f1cc08) == 0)) ||
     (uVar7 = *(ulong *)(*(long *)(param_2 + _DAT_112f1cc08) + 0x28), uVar7 == 0))
  goto LAB_102e117f4;
  func_0x000107c61174(lVar6);
  func_0x000107c4b1dc();
  func_0x000107c61180();
  uVar2 = uVar7;
  func_0x000107c5faec();
  func_0x000107c61170(uVar7);
  if (uVar2 == param_3 && puVar4 == param_4) {
    func_0x000107c6142c(puVar4);
LAB_102e11784:
    lVar5 = *(long *)(param_2 + lVar5);
    if (lVar5 != 0) {
      func_0x000100f96518(lVar6,cVar1);
      lVar3 = lVar5;
      func_0x000107c6157c(lVar5);
      FUN_102e1c2bc();
      func_0x000107c5d4c8();
      func_0x000107c61170(lVar3);
      func_0x000100f838dc(lVar6,cVar1);
      func_0x000100f838dc(lVar6,cVar1);
      func_0x000107c61170(param_2);
      func_0x000107c61574(lVar5);
      return;
    }
  }
  else {
    func_0x000107c605b8(uVar2,puVar4,param_3,param_4,0);
    func_0x000107c6142c(puVar4);
    if ((uVar2 & 1) != 0) goto LAB_102e11784;
  }
  func_0x000100f838dc(lVar6,cVar1);
LAB_102e117f4:
  func_0x000107c61170();
  return;
}



/* Entry: 102e11818; end: 102e1189b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e11818(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar2 = param_2 + _DAT_112f1cba8;
    func_0x000107c61618();
    func_0x000107c61170(param_2);
    if (lVar2 != 0) {
      FUN_102e18258(uVar1);
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 102e1189c; end: 102e11a7b;  */

/* WARNING: Possible PIC construction at 0x000102e11970: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e11a1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e11974) */
/* WARNING: Removing unreachable block (ram,0x000102e11a20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e1189c(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f1cbc8);
  func_0x000107c3ec60();
  dVar3 = param_1;
  func_0x000107c609b0();
  dVar4 = param_1;
  func_0x000107c609cc(param_1,param_2,param_3,param_4);
  dVar5 = param_1;
  func_0x000107c609b0(param_1,param_2,param_3,param_4);
  puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x000107c61168(PTR__OBJC_CLASS___NSValue_1126afdf8);
  func_0x000107c5dc54(param_1,param_2 + dVar3 * 0.05,dVar4,dVar5 * 0.8);
  func_0x000107c61180();
  func_0x000107c4d664(uVar2,param_6,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 102e11a7c; end: 102e11cef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e11a7c(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar2 = param_2 + _DAT_112f1cba8;
    func_0x000107c61618();
    func_0x000107c61170(param_2);
    if (lVar2 != 0) {
      FUN_102e184d0(uVar1);
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 102e11cf0; end: 102e11d23;  */

undefined8 FUN_102e11cf0(undefined8 param_1)

{
  (*(code *)&DAT_10433f238)();
  return param_1;
}



/* Entry: 102e11d24; end: 102e11e9b;  */

undefined * FUN_102e11d24(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126ae6d0;
  func_0x000107c610f8(PTR_PTR_1126ae6d0);
  func_0x000107c4831c();
  puVar2 = PTR_PTR_1126ae6d8;
  func_0x000107c610f8(PTR_PTR_1126ae6d8);
  func_0x000107c486a0();
  puVar3 = PTR_PTR_1126b1bb0;
  func_0x000107c61168(PTR_PTR_1126b1bb0);
  func_0x000107c4b3c4();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 102e11e9c; end: 102e12153;  */

undefined * FUN_102e11e9c(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  uVar11 = *param_1;
  uVar6 = param_1[1];
  uVar4 = param_1[2];
  uVar12 = param_1[3];
  uVar5 = param_1[4];
  uVar8 = param_1[5];
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ed0();
  uVar17 = param_1[6];
  lVar1 = param_1[7];
  func_0x000107c5fadc(uVar11,uVar6);
  func_0x000107c5fadc(uVar4,uVar12);
  func_0x000107c5ee20(uVar5,uVar8);
  if (lVar1 == 0) {
    uVar17 = 0;
  }
  else {
    func_0x000107c5fadc(uVar17,lVar1);
  }
  uVar6 = param_1[8];
  uVar12 = param_1[10];
  uVar2 = param_1[0xb];
  uVar8 = param_1[0xc];
  lVar1 = param_1[0xd];
  func_0x000107c5fadc(uVar6,param_1[9]);
  uVar7 = uVar12;
  func_0x000107c5fadc(uVar12,uVar2);
  uVar16 = 0;
  if (lVar1 != 0) {
    func_0x000107c5fadc(uVar8,lVar1);
    uVar16 = uVar8;
  }
  puVar9 = PTR_PTR_1126b5ca0;
  func_0x000107c610f8(PTR_PTR_1126b5ca0);
  func_0x000107c47310();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar16);
  puVar3 = PTR_PTR_1126cac98;
  func_0x000107c610f8();
  func_0x000107c48188();
  puVar10 = PTR_PTR_1126ae6c8;
  func_0x000107c610f8(PTR_PTR_1126ae6c8);
  uVar11 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  func_0x000107c5fadc(uVar12,uVar2);
  func_0x000107c48320(puVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  puVar13 = PTR_PTR_1126ae6d0;
  func_0x000107c610f8(PTR_PTR_1126ae6d0);
  func_0x000107c4831c();
  puVar14 = PTR_PTR_1126ae6d8;
  func_0x000107c610f8(PTR_PTR_1126ae6d8);
  func_0x000107c486a0();
  puVar15 = PTR_PTR_1126b1bb0;
  func_0x000107c61168(PTR_PTR_1126b1bb0);
  func_0x000107c4b3c4();
  func_0x000107c61180();
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(puVar14);
  return puVar15;
}



/* Entry: 102e12154; end: 102e12273;  */

undefined8 * FUN_102e12154(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined1 uStack_58;
  
  lVar9 = *(long *)(param_1 + 0x38);
  if (lVar9 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = *(undefined8 *)(param_1 + 0x30);
  }
  bVar3 = lVar9 != 0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c61434(uVar2);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  puVar4 = PTR_PTR_1126c55c8;
  uStack_78 = uVar1;
  uStack_70 = uVar2;
  uStack_68 = uVar10;
  lStack_60 = lVar9;
  uStack_58 = bVar3;
  func_0x000107c610f8(PTR_PTR_1126c55c8);
  func_0x000107c61434(lVar9);
  func_0x000107c5fadc(uVar5,uVar6);
  uVar6 = uVar1;
  func_0x000107c5fadc(uVar1,uVar2);
  func_0x000107c48618(puVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  puVar7 = puVar4;
  func_0x000107c61174(puVar4);
  puVar8 = &uStack_78;
  func_0x000104348394(puVar8,4,puVar4);
  func_0x000107c61170(puVar7);
  func_0x000102e021b8(uVar1,uVar2,uVar10,lVar9,bVar3);
  func_0x000107c61170(puVar7);
  return puVar8;
}



/* Entry: 102e12274; end: 102e12483;  */

undefined * FUN_102e12274(ulong param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  if (param_2 != 0) {
    uVar1 = param_1 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar1 = param_2 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      puVar6 = PTR_PTR_1126ae6c8;
      func_0x000107c610f8(PTR_PTR_1126ae6c8);
      uVar2 = 0;
      func_0x000107c5fadc(0,0xe000000000000000);
      func_0x000107c5fadc(param_1,param_2);
      func_0x000107c48320(puVar6);
      func_0x000107c61170(uVar2);
      func_0x000107c61170(param_1);
      goto LAB_102e12318;
    }
  }
  puVar6 = (undefined *)0x0;
LAB_102e12318:
  puVar3 = PTR_PTR_1126ae6d0;
  func_0x000107c610f8(PTR_PTR_1126ae6d0);
  func_0x000107c4831c();
  puVar4 = PTR_PTR_1126ae6d8;
  func_0x000107c610f8(PTR_PTR_1126ae6d8);
  func_0x000107c486a0();
  puVar5 = PTR_PTR_1126b1bb0;
  func_0x000107c61168(PTR_PTR_1126b1bb0);
  func_0x000107c4b3c4();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar4);
  return puVar5;
}



/* Entry: 102e12484; end: 102e1260b;  */

undefined1  [16] FUN_102e12484(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  uStack_48 = 0;
  uStack_50 = 0;
  puVar4 = &UNK_1105d7540;
  func_0x000107c613fc(&UNK_1105d7540,0x18,7);
  *(ulong **)(puVar4 + 0x10) = &uStack_50;
  puVar5 = &UNK_1105d7568;
  func_0x000107c613fc(&UNK_1105d7568,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_102e127a8;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  pcStack_60 = FUN_102e127b0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1019dec60;
  puStack_68 = &UNK_1105d7580;
  ppuVar6 = &puStack_80;
  puStack_58 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  puVar2 = puStack_58;
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(puVar2);
  func_0x000107c4c590(param_1);
  func_0x000107c60bd0(ppuVar6);
  uVar8 = uStack_48;
  uVar7 = uStack_50;
  if (uStack_48 == 0) {
    func_0x000107c61574(puVar4);
  }
  else {
    uVar1 = uStack_50 & 0xffffffffffff;
    if ((uStack_48 & 0x2000000000000000) != 0) {
      uVar1 = uStack_48 >> 0x38 & 0xf;
    }
    func_0x000107c61574(puVar4);
    if (uVar1 == 0) {
      func_0x000107c6142c(uVar8);
      uVar7 = 0;
      uVar8 = 0;
    }
  }
  puVar4 = puVar5;
  func_0x000107c61544(puVar5,"",99,0x19f,0x25,1);
  func_0x000107c61574(puVar5);
  if (((ulong)puVar4 & 1) == 0) {
    auVar9._8_8_ = uVar8;
    auVar9._0_8_ = uVar7;
    return auVar9;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x102e1260c);
  (*pcVar3)();
}



/* Entry: 102e1260c; end: 102e1260f;  */

void FUN_102e1260c(void)

{
  return;
}



/* Entry: 102e12610; end: 102e1264b;  */

undefined8 FUN_102e12610(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&DAT_10433d5b8)(param_2,param_1);
  return param_2;
}



/* Entry: 102e1264c; end: 102e1270f;  */

/* WARNING: Possible PIC construction at 0x000102e126c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e126cc) */
/* WARNING: Removing unreachable block (ram,0x000102e12710) */
/* WARNING: Removing unreachable block (ram,0x000102e12770) */
/* WARNING: Removing unreachable block (ram,0x000102e12714) */

void FUN_102e1264c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)((ulong)param_3 >> 0x20);
  uVar2 = uVar1 >> 0x1d;
  if (uVar1 >> 0x1d < 2) {
    if (uVar2 != 0) {
      if (uVar2 != 1) {
        return;
      }
      goto _objc_retain;
    }
  }
  else {
    if ((uVar2 == 2) || (uVar2 == 3)) {
_objc_retain:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_retain_11034d2d8)();
      return;
    }
    if (uVar2 != 4) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
  return;
}



/* Entry: 102e12710; end: 102e12773;  */

/* WARNING: Possible PIC construction at 0x000102e12740: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e12744) */

void FUN_102e12710(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
    return;
  }
  return;
}



/* Entry: 102e12774; end: 102e127a7;  */

/* WARNING: Possible PIC construction at 0x000102e12794: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e12798) */

void FUN_102e12774(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_2 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_4);
  return;
}



/* Entry: 102e127a8; end: 102e127af;  */

void FUN_102e127a8(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long unaff_x20;
  
  plVar2 = *(long **)(unaff_x20 + 0x10);
  if (param_3 != 0) {
    func_0x000107c40674();
    func_0x000107c61180();
    if (param_3 != 0) {
      lVar3 = param_3;
      func_0x000107c5faec();
      func_0x000107c61170(param_3);
      goto LAB_102e0f468;
    }
  }
  lVar3 = 0;
  param_2 = 0;
LAB_102e0f468:
  lVar1 = plVar2[1];
  *plVar2 = lVar3;
  plVar2[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar1);
  return;
}



/* Entry: 102e127b0; end: 102e127cf;  */

void FUN_102e127b0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102e127d0; end: 102e127d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e127d0(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + _DAT_112f1cc40) = 1;
    func_0x000107c61170();
  }
  return;
}



/* Entry: 102e127d8; end: 102e128c3;  */

undefined8 FUN_102e127d8(undefined8 param_1,undefined8 param_2)

{
  FUN_102e0f6e0(param_2,param_1,&UNK_1105d7380);
  return param_2;
}



/* Entry: 102e128c4; end: 102e12903;  */

void FUN_102e128c4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f1cc90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dced170;
  func_0x000107c61520(&UNK_10dced170,&UNK_11075c198);
  puRam0000000112f1cc90 = puVar1;
  return;
}



/* Entry: 102e12904; end: 102e1292f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e12904(undefined1 *param_1)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar3 = lVar2 + _DAT_112f1cba8;
    func_0x000107c61618();
    func_0x000107c61170(lVar2);
    if (lVar3 != 0) {
      FUN_102e18258(uVar1);
      func_0x000107c61170(lVar3);
    }
  }
  return;
}



/* Entry: 102e12930; end: 102e1296f;  */

void FUN_102e12930(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f1cc98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db5594c;
  func_0x000107c61520(&UNK_10db5594c,&UNK_1105d8390);
  puRam0000000112f1cc98 = puVar1;
  return;
}



/* Entry: 102e12970; end: 102e12977;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e12970(undefined1 *param_1)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar3 = lVar2 + _DAT_112f1cba8;
    func_0x000107c61618();
    func_0x000107c61170(lVar2);
    if (lVar3 != 0) {
      FUN_102e184d0(uVar1);
      func_0x000107c61170(lVar3);
    }
  }
  return;
}



/* Entry: 102e12978; end: 102e129b7;  */

void FUN_102e12978(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f1cca0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dced268;
  func_0x000107c61520(&UNK_10dced268,&UNK_11075c318);
  puRam0000000112f1cca0 = puVar1;
  return;
}



/* Entry: 102e129b8; end: 102e129bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e129b8(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
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
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112f1cbe0);
    func_0x000107c6157c(uVar2);
    func_0x000107c61170(lVar1);
    uStack_68 = param_1[9];
    uStack_70 = param_1[8];
    uStack_58 = param_1[0xb];
    uStack_60 = param_1[10];
    uStack_50 = param_1[0xc];
    uStack_a8 = param_1[1];
    uStack_b0 = *param_1;
    uStack_98 = param_1[3];
    uStack_a0 = param_1[2];
    uStack_88 = param_1[5];
    uStack_90 = param_1[4];
    uStack_78 = param_1[7];
    uStack_80 = param_1[6];
    func_0x0001007d6d78(&uStack_b0);
    func_0x000107c61574(uVar2);
  }
  return;
}



/* Entry: 102e129c0; end: 102e129eb;  */

void FUN_102e129c0(uint param_1)

{
  long unaff_x20;
  
  if (*(code **)(unaff_x20 + 0x10) != (code *)0x0) {
    (**(code **)(unaff_x20 + 0x10))(param_1 & 1);
  }
  return;
}



/* Entry: 102e129ec; end: 102e12a1f;  */

void FUN_102e129ec(uint param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000102e129fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1 & 1);
  return;
}



/* Entry: 102e12a20; end: 102e12ab7;  */

void FUN_102e12a20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined4 *)(unaff_x20 + 0x30) = 0;
  *(undefined2 *)(unaff_x20 + 0x34) = 0x201;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined2 *)(unaff_x20 + 0x40) = 0x201;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined1 *)(unaff_x20 + 0x50) = 1;
  *(undefined4 *)(unaff_x20 + 0x51) = 0x2020202;
  *(undefined1 *)(unaff_x20 + 0x55) = 2;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined1 *)(unaff_x20 + 0x60) = 1;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined1 *)(unaff_x20 + 0x70) = 1;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined1 *)(unaff_x20 + 0x80) = 1;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  return;
}



/* Entry: 102e12ab8; end: 102e12acb;  */

bool FUN_102e12ab8(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 102e12acc; end: 102e12bbb;  */

void FUN_102e12acc(void)

{
  byte bVar1;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690((ulong)bVar1 * 0x1e + 0x1e);
  func_0x000107c606a8();
  return;
}



/* Entry: 102e12bbc; end: 102e12bd3;  */

void FUN_102e12bbc(long *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20 * 0x1e + 0x1e;
  return;
}



/* Entry: 102e12bd4; end: 102e12c7b;  */

undefined1  [16] FUN_102e12bd4(void)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR___sSiN_11034deb0;
  puVar3 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c();
  func_0x000107c5fb78(0x53504620,0xe400000000000000);
  auVar1._8_8_ = puVar3;
  auVar1._0_8_ = puVar2;
  return auVar1;
}



/* Entry: 102e12c7c; end: 102e12cb7; -[_TtC21PlayGamesServicesImpl40PlayGamesPresentingStudySettingsProvider framesPerSecond] */

undefined8 FUN_102e12c7c(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c6157c();
  FUN_102e12cb8();
  func_0x000107c61574(param_2);
  return param_1;
}



/* Entry: 102e12cb8; end: 102e12d63;  */

undefined4 FUN_102e12cb8(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined4 uVar2;
  undefined1 uStack_32;
  byte bStack_31;
  
  if (*(char *)(unaff_x20 + 0x34) == '\x01') {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
    uStack_32 = 0;
    FUN_102e12d64();
    func_0x000107c615f0(uVar1);
    func_0x0001040ad4f8(&bStack_31,0xd00000000000001c,0x800000010f10fb50,uVar1,&uStack_32,0,
                        &UNK_1105d7778,param_1);
    func_0x000107c615e8(uVar1);
    uVar2 = *(undefined4 *)(&UNK_10db55460 + (ulong)bStack_31 * 4);
    *(undefined4 *)(unaff_x20 + 0x30) = uVar2;
    *(undefined1 *)(unaff_x20 + 0x34) = 0;
  }
  else {
    uVar2 = *(undefined4 *)(unaff_x20 + 0x30);
  }
  return uVar2;
}



/* Entry: 102e12d64; end: 102e12da3;  */

void FUN_102e12d64(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f1cca8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db55414;
  func_0x000107c61520(&UNK_10db55414,&UNK_1105d7778);
  puRam0000000112f1cca8 = puVar1;
  return;
}



/* Entry: 102e12da4; end: 102e12daf; -[_TtC21PlayGamesServicesImpl40PlayGamesPresentingStudySettingsProvider setFramesPerSecond:] */

void FUN_102e12da4(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x30) = param_1;
  *(undefined1 *)(param_2 + 0x34) = 0;
  return;
}



/* Entry: 102e12db0; end: 102e12dbb; -[_TtC21PlayGamesServicesImpl40PlayGamesPresentingStudySettingsProvider thermalAdaptiveFramesPerSecondEnabled] */

uint FUN_102e12db0(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  func_0x000107c6157c();
  uVar1 = (uint)uVar2;
  FUN_102e12dbc();
  func_0x000107c61574(param_1);
  return uVar1 & 1;
}



/* Entry: 102e12dbc; end: 102e12e33;  */

uint FUN_102e12dbc(void)

{
  undefined8 uVar1;
  uint uVar2;
  long unaff_x20;
  
  uVar2 = (uint)*(byte *)(unaff_x20 + 0x35);
  if (*(byte *)(unaff_x20 + 0x35) == 2) {
    uVar2 = (uint)*(undefined8 *)(unaff_x20 + 0x18);
    uVar1 = 0xd00000000000002b;
    func_0x000107c5fadc(0xd00000000000002b,0x800000010f10fb70);
    func_0x000107c3ebd4();
    func_0x000107c61170(uVar1);
    *(char *)(unaff_x20 + 0x35) = (char)uVar2;
  }
  return uVar2 & 1;
}



/* Entry: 102e12e34; end: 102e12e3b; -[_TtC21PlayGamesServicesImpl40PlayGamesPresentingStudySettingsProvider setThermalAdaptiveFramesPerSecondEnabled:] */

void FUN_102e12e34(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x35) = param_3;
  return;
}



/* Entry: 102e12e3c; end: 102e12eb3; -[_TtC21PlayGamesServicesImpl40PlayGamesPresentingStudySettingsProvider turnBasedV2NotificationsEnabled] */

undefined8 FUN_102e12e3c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c6157c();
  uVar1 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010efc7cc0);
  func_0x000107c3ebd4(uVar2);
  func_0x000107c61574(param_1);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 102e12eb4; end: 102e12ebf; -[_TtC21PlayGamesServicesImpl40PlayGamesPresentingStudySettingsProvider featureMode] */

undefined8 FUN_102e12eb4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c6157c();
  FUN_102e12ec0();
  func_0x000107c61574(param_1);
  return uVar1;
}



/* Entry: 102e12ec0; end: 102e12f5f;  */

undefined8 FUN_102e12ec0(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*(char *)(unaff_x20 + 0x40) == '\x01') {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
    uStack_40 = 0;
    FUN_102e12f60();
    func_0x000107c615f0(uVar1);
    func_0x0001040ad4f8(&uStack_38,0xd00000000000001b,0x800000010f10fba0,uVar1,&uStack_40,0,
                        &UNK_11075c060,param_1);
    func_0x000107c615e8(uVar1);
    *(undefined8 *)(unaff_x20 + 0x38) = uStack_38;
    *(undefined1 *)(unaff_x20 + 0x40) = 0;
  }
  else {
    uStack_38 = *(undefined8 *)(unaff_x20 + 0x38);
  }
  return uStack_38;
}



/* Entry: 102e12f60; end: 102e12f9f;  */

void FUN_102e12f60(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f1ccb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dceceb8;
  func_0x000107c61520(&UNK_10dceceb8,&UNK_11075c060);
  puRam0000000112f1ccb0 = puVar1;
  return;
}



/* Entry: 102e12fa0; end: 102e12fab; -[_TtC21PlayGamesServicesImpl40PlayGamesPresentingStudySettingsProvider setFeatureMode:] */

void FUN_102e12fa0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x38) = param_3;
  *(undefined1 *)(param_1 + 0x40) = 0;
  return;
}



/* Entry: 102e12fac; end: 102e12fb7; -[_TtC21PlayGamesServicesImpl40PlayGamesPresentingStudySettingsProvider supportsReplyCamera] */

bool FUN_102e12fac(undefined8 param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puStack_40;
  long lStack_38;
  
  func_0x000107c6157c();
  func_0x0001000d224c(&puStack_40);
  puVar1 = puStack_40;
  func_0x000107c614f0(puStack_40);
  (**(code **)(lStack_38 + 8))();
  func_0x000107c615e8();
  (*(code *)&UNK_10433a0f0)();
  uVar2 = *puStack_40;
  func_0x000107c61574(param_1);
  return (uVar2 & ((ulong)puVar1 ^ 0xffffffffffffffff)) == 0;
}



/* Entry: 102e12fb8; end: 102e12fc3; -[_TtC21PlayGamesServicesImpl40PlayGamesPresentingStudySettingsProvider supportsModularCameraAll] */

bool FUN_102e12fb8(undefined8 param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puStack_40;
  long lStack_38;
  
  func_0x000107c6157c();
  func_0x0001000d224c(&puStack_40);
  puVar1 = puStack_40;
  func_0x000107c614f0(puStack_40);
  (**(code **)(lStack_38 + 8))();
  func_0x000107c615e8();
  (*(code *)&UNK_10433a0e4)();
  uVar2 = *puStack_40;
  func_0x000107c61574(param_1);
  return (uVar2 & ((ulong)puVar1 ^ 0xffffffffffffffff)) == 0;
}



/* Entry: 102e12fc4; end: 102e12fcf; -[_TtC21PlayGamesServicesImpl40PlayGamesPresentingStudySettingsProvider supportsSpotlightSharedMessage] */

bool FUN_102e12fc4(undefined8 param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puStack_40;
  long lStack_38;
  
  func_0x000107c6157c();
  func_0x0001000d224c(&puStack_40);
  puVar1 = puStack_40;
  func_0x000107c614f0(puStack_40);
  (**(code **)(lStack_38 + 8))();
  func_0x000107c615e8();
  (*(code *)&UNK_10433a0d8)();
  uVar2 = *puStack_40;
  func_0x000107c61574(param_1);
  return (uVar2 & ((ulong)puVar1 ^ 0xffffffffffffffff)) == 0;
}



/* Entry: 102e12fd0; end: 102e12fdb; -[_TtC21PlayGamesServicesImpl40PlayGamesPresentingStudySettingsProvider supportsPlayGamesDiscover] */

bool FUN_102e12fd0(undefined8 param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puStack_40;
  long lStack_38;
  
  func_0x000107c6157c();
  func_0x0001000d224c(&puStack_40);
  puVar1 = puStack_40;
  func_0x000107c614f0(puStack_40);
  (**(code **)(lStack_38 + 8))();
  func_0x000107c615e8();
  (*(code *)&UNK_10433a0fc)();
  uVar2 = *puStack_40;
  func_0x000107c61574(param_1);
  return (uVar2 & ((ulong)puVar1 ^ 0xffffffffffffffff)) == 0;
}



/* Entry: 102e12fdc; end: 102e12fe7; -[_TtC21PlayGamesServicesImpl40PlayGamesPresentingStudySettingsProvider supportsPlayGamesSpotlight] */

bool FUN_102e12fdc(undefined8 param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puStack_40;
  long lStack_38;
  
  func_0x000107c6157c();
  func_0x0001000d224c(&puStack_40);
  puVar1 = puStack_40;
  func_0x000107c614f0(puStack_40);
  (**(code **)(lStack_38 + 8))();
  func_0x000107c615e8();
  (*(code *)&UNK_10433a108)();
  uVar2 = *puStack_40;
  func_0x000107c61574(param_1);
  return (uVar2 & ((ulong)puVar1 ^ 0xffffffffffffffff)) == 0;
}



/* Entry: 102e12fe8; end: 102e12ff3; -[_TtC21PlayGamesServicesImpl40PlayGamesPresentingStudySettingsProvider supportsModularCameraGamesLensPSA] */

bool FUN_102e12fe8(undefined8 param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puStack_40;
  long lStack_38;
  
  func_0x000107c6157c();
  func_0x0001000d224c(&puStack_40);
  puVar1 = puStack_40;
  func_0x000107c614f0(puStack_40);
  (**(code **)(lStack_38 + 8))();
  func_0x000107c615e8();
  (*(code *)&UNK_10433a114)();
  uVar2 = *puStack_40;
  func_0x000107c61574(param_1);
  return (uVar2 & ((ulong)puVar1 ^ 0xffffffffffffffff)) == 0;
}



/* Entry: 102e12ff4; end: 102e12fff; -[_TtC21PlayGamesServicesImpl40PlayGamesPresentingStudySettingsProvider supportsReplyCameraGamesLensPSA] */

bool FUN_102e12ff4(undefined8 param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puStack_40;
  long lStack_38;
  
  func_0x000107c6157c();
  func_0x0001000d224c(&puStack_40);
  puVar1 = puStack_40;
  func_0x000107c614f0(puStack_40);
  (**(code **)(lStack_38 + 8))();
  func_0x000107c615e8();
  (*(code *)&UNK_10433a120)();
  uVar2 = *puStack_40;
  func_0x000107c61574(param_1);
  return (uVar2 & ((ulong)puVar1 ^ 0xffffffffffffffff)) == 0;
}



/* Entry: 102e13000; end: 102e1307b;  */

bool FUN_102e13000(undefined8 param_1,undefined8 param_2,code *param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puStack_40;
  long lStack_38;
  
  func_0x000107c6157c();
  func_0x0001000d224c(&puStack_40);
  puVar1 = puStack_40;
  func_0x000107c614f0(puStack_40);
  (**(code **)(lStack_38 + 8))();
  func_0x000107c615e8();
  (*param_3)();
  uVar2 = *puStack_40;
  func_0x000107c61574(param_1);
  return (uVar2 & ((ulong)puVar1 ^ 0xffffffffffffffff)) == 0;
}



/* Entry: 102e1307c; end: 102e13087; -[_TtC21PlayGamesServicesImpl40PlayGamesPresentingStudySettingsProvider isMultiplayerChatEnabled] */

uint FUN_102e1307c(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  func_0x000107c6157c();
  uVar1 = (uint)uVar2;
  FUN_102e13088();
  func_0x000107c61574(param_1);
  return uVar1 & 1;
}



/* Entry: 102e13088; end: 102e130ff;  */

uint FUN_102e13088(void)

{
  undefined8 uVar1;
  uint uVar2;
  long unaff_x20;
  
  uVar2 = (uint)*(byte *)(unaff_x20 + 0x41);
  if (*(byte *)(unaff_x20 + 0x41) == 2) {
    uVar2 = (uint)*(undefined8 *)(unaff_x20 + 0x10);
    uVar1 = 0xd000000000000018;
    func_0x000107c5fadc(0xd000000000000018,0x800000010efc7c80);
    func_0x000107c3ebd4();
    func_0x000107c61170(uVar1);
    *(char *)(unaff_x20 + 0x41) = (char)uVar2;
  }
  return uVar2 & 1;
}



/* Entry: 102e13100; end: 102e13107; -[_TtC21PlayGamesServicesImpl40PlayGamesPresentingStudySettingsProvider setIsMultiplayerChatEnabled:] */

void FUN_102e13100(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x41) = param_3;
  return;
}



/* Entry: 102e13108; end: 102e13113; -[_TtC21PlayGamesServicesImpl40PlayGamesPresentingStudySettingsProvider bufferTargetWidth] */

undefined8 FUN_102e13108(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c6157c();
  FUN_102e13114();
  func_0x000107c61574(param_2);
  return param_1;
}



/* Entry: 102e13114; end: 102e131b3;  */

double FUN_102e13114(void)

{
  undefined8 uVar1;
  int iVar2;
  long unaff_x20;
  double dVar3;
  
  if (*(char *)(unaff_x20 + 0x50) == '\x01') {
    iVar2 = (int)*(undefined8 *)(unaff_x20 + 0x10);
    uVar1 = 0xd000000000000022;
    func_0x000107c5fadc(0xd000000000000022,0x800000010f10fbc0);
    func_0x000107c4980c();
    func_0x000107c61170(uVar1);
    dVar3 = (double)iVar2;
    if (0x1b30 < iVar2 - 0x2d0U) {
      dVar3 = 720.0;
    }
    *(double *)(unaff_x20 + 0x48) = dVar3;
    *(undefined1 *)(unaff_x20 + 0x50) = 0;
  }
  else {
    dVar3 = *(double *)(unaff_x20 + 0x48);
  }
  return dVar3;
}



/* Entry: 102e131b4; end: 102e131bf; -[_TtC21PlayGamesServicesImpl40PlayGamesPresentingStudySettingsProvider setBufferTargetWidth:] */

void FUN_102e131b4(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x48) = param_1;
  *(undefined1 *)(param_2 + 0x50) = 0;
  return;
}



/* Entry: 102e131c0; end: 102e131cb; -[_TtC21PlayGamesServicesImpl40PlayGamesPresentingStudySettingsProvider regeneratesGradientOnLensSwitch] */

uint FUN_102e131c0(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  func_0x000107c6157c();
  uVar1 = (uint)uVar2;
  FUN_102e131cc();
  func_0x000107c61574(param_1);
  return uVar1 & 1;
}



/* Entry: 102e131cc; end: 102e13243;  */

uint FUN_102e131cc(void)

{
  undefined8 uVar1;
  uint uVar2;
  long unaff_x20;
  
  uVar2 = (uint)*(byte *)(unaff_x20 + 0x52);
  if (*(byte *)(unaff_x20 + 0x52) == 2) {
    uVar2 = (uint)*(undefined8 *)(unaff_x20 + 0x10);
    uVar1 = 0xd000000000000039;
    func_0x000107c5fadc(0xd000000000000039,0x800000010f10fbf0);
    func_0x000107c3ebd4();
    func_0x000107c61170(uVar1);
    *(char *)(unaff_x20 + 0x52) = (char)uVar2;
  }
  return uVar2 & 1;
}



/* Entry: 102e13244; end: 102e1324b; -[_TtC21PlayGamesServicesImpl40PlayGamesPresentingStudySettingsProvider setRegeneratesGradientOnLensSwitch:] */

void FUN_102e13244(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x52) = param_3;
  return;
}



/* Entry: 102e1324c; end: 102e13257; -[_TtC21PlayGamesServicesImpl40PlayGamesPresentingStudySettingsProvider recordsAudioWithoutCamera] */

uint FUN_102e1324c(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  func_0x000107c6157c();
  uVar1 = (uint)uVar2;
  FUN_102e13258();
  func_0x000107c61574(param_1);
  return uVar1 & 1;
}



/* Entry: 102e13258; end: 102e132cf;  */

uint FUN_102e13258(void)

{
  undefined8 uVar1;
  uint uVar2;
  long unaff_x20;
  
  uVar2 = (uint)*(byte *)(unaff_x20 + 0x53);
  if (*(byte *)(unaff_x20 + 0x53) == 2) {
    uVar2 = (uint)*(undefined8 *)(unaff_x20 + 0x10);
    uVar1 = 0xd00000000000002b;
    func_0x000107c5fadc(0xd00000000000002b,0x800000010f10fc30);
    func_0x000107c3ebd4();
    func_0x000107c61170(uVar1);
    *(char *)(unaff_x20 + 0x53) = (char)uVar2;
  }
  return uVar2 & 1;
}



/* Entry: 102e132d0; end: 102e132d7; -[_TtC21PlayGamesServicesImpl40PlayGamesPresentingStudySettingsProvider setRecordsAudioWithoutCamera:] */

void FUN_102e132d0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x53) = param_3;
  return;
}



/* Entry: 102e132d8; end: 102e132e3; -[_TtC21PlayGamesServicesImpl40PlayGamesPresentingStudySettingsProvider forceFrontCamera] */

uint FUN_102e132d8(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  func_0x000107c6157c();
  uVar1 = (uint)uVar2;
  FUN_102e132e4();
  func_0x000107c61574(param_1);
  return uVar1 & 1;
}



/* Entry: 102e132e4; end: 102e1335b;  */

uint FUN_102e132e4(void)

{
  undefined8 uVar1;
  uint uVar2;
  long unaff_x20;
  
  uVar2 = (uint)*(byte *)(unaff_x20 + 0x54);
  if (*(byte *)(unaff_x20 + 0x54) == 2) {
    uVar2 = (uint)*(undefined8 *)(unaff_x20 + 0x10);
    uVar1 = 0xd000000000000021;
    func_0x000107c5fadc(0xd000000000000021,0x800000010f10fc60);
    func_0x000107c3ebd4();
    func_0x000107c61170(uVar1);
    *(char *)(unaff_x20 + 0x54) = (char)uVar2;
  }
  return uVar2 & 1;
}



/* Entry: 102e1335c; end: 102e13363; -[_TtC21PlayGamesServicesImpl40PlayGamesPresentingStudySettingsProvider setForceFrontCamera:] */

void FUN_102e1335c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x54) = param_3;
  return;
}



/* Entry: 102e13364; end: 102e1336f; -[_TtC21PlayGamesServicesImpl40PlayGamesPresentingStudySettingsProvider preservesLensOnCapture] */

uint FUN_102e13364(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  func_0x000107c6157c();
  uVar1 = (uint)uVar2;
  FUN_102e133a8();
  func_0x000107c61574(param_1);
  return uVar1 & 1;
}


