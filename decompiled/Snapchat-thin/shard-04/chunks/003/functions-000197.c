/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1032cf660; end: 1032cf67f;  */

void FUN_1032cf660(void)

{
  func_0x000107c61168(&PTR_PTR_1128cb2b0);
  return;
}



/* Entry: 1032cf680; end: 1032cf87b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1032cf680(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  lVar1 = *(long *)(param_2 + _DAT_113082920);
  func_0x000107c61174();
  func_0x000107c61170(param_2);
  uVar2 = *(undefined8 *)(lVar1 + _DAT_1130828e8);
  func_0x000107c61174();
  func_0x000107c61170(lVar1);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
  return unaff_x20;
}



/* Entry: 1032cf87c; end: 1032cf88b;  */

void FUN_1032cf87c(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = 0;
  func_0x0001032cfc18();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x20) = 0;
  func_0x000107c61614(lVar2 + 0x18,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_110637d68;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar3);
  return;
}



/* Entry: 1032cf88c; end: 1032cf8af;  */

void FUN_1032cf88c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1032cf8b0; end: 1032cf957;  */

void FUN_1032cf8b0(undefined8 *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar1 = &UNK_110637cb8;
  func_0x000107c613fc(&UNK_110637cb8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  func_0x0001000285a8(0x112f554e8,&UNK_10dbac9c0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar3);
  pcVar2 = FUN_1032cfa54;
  func_0x0001000bdd8c(FUN_1032cfa54,puVar1);
  uVar3 = 0;
  func_0x000103a1afc4(0);
  func_0x000107c610f8();
  func_0x000103a1af08(pcVar2,uVar3);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1032cf958; end: 1032cf9d3;  */

void FUN_1032cf958(undefined8 param_1)

{
  if (lRam0000000112f55518 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e757e10);
  return;
}



/* Entry: 1032cf9d4; end: 1032cfa0f;  */

void FUN_1032cf9d4(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110637ce0;
  if (lRam0000000112f555c0 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112f555c0 = param_1;
  }
  return;
}



/* Entry: 1032cfa10; end: 1032cfa53;  */

void FUN_1032cfa10(long param_1,long *param_2,long param_3)

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



/* Entry: 1032cfa54; end: 1032cfa57;  */

void FUN_1032cfa54(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = 0;
  func_0x0001032cfc18();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x20) = 0;
  func_0x000107c61614(lVar2 + 0x18,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_110637d68;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar3);
  return;
}



/* Entry: 1032cfa58; end: 1032cfbbf;  */

void FUN_1032cfa58(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c61494();
    if (lVar2 == 0) {
      func_0x000107c615e8(lVar1);
    }
    else {
      if (param_2 == 0) {
        param_1 = 0;
      }
      else {
        func_0x000107c5fadc(param_1,param_2);
      }
      func_0x000107c43ba4();
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(param_1);
    }
  }
  return;
}



/* Entry: 1032cfbc0; end: 1032cfbe3;  */

void FUN_1032cfbc0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1032cfbe4; end: 1032cfbeb;  */

void FUN_1032cfbe4(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c61494();
    if (lVar2 == 0) {
      func_0x000107c615e8(lVar1);
    }
    else {
      if (param_2 == 0) {
        param_1 = 0;
      }
      else {
        func_0x000107c5fadc(param_1,param_2);
      }
      func_0x000107c43ba4();
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(param_1);
    }
  }
  return;
}



/* Entry: 1032cfbec; end: 1032cfc37;  */

void FUN_1032cfbec(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  FUN_1032cfee8(unaff_x20 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1032cfc38; end: 1032cfe6f;  */

void FUN_1032cfc38(uint param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  long lVar4;
  
  puVar2 = unaff_x20 + 3;
  uVar3 = *unaff_x20;
  func_0x000107c61618();
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)unaff_x20[2];
    func_0x000107c5c734();
    func_0x000107c61180();
    if (puVar2 == (undefined8 *)0x0) {
      func_0x000104366fc4(0xd000000000000023,0x800000010f13b1d0,uVar3,&PTR_DAT_110638610);
      return;
    }
    func_0x000107c5a8ac();
  }
  else {
    lVar4 = unaff_x20[4];
    puVar1 = puVar2;
    func_0x000107c614f0();
    (**(code **)(lVar4 + 8))(param_1 & 1,param_2,puVar1,lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(puVar2);
  return;
}



/* Entry: 1032cfe70; end: 1032cfecf;  */

void FUN_1032cfe70(void)

{
  FUN_1032cfc38();
  return;
}



/* Entry: 1032cfed0; end: 1032cfee7;  */

void FUN_1032cfed0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = *unaff_x20;
  *(undefined8 *)(lVar1 + 0x20) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(lVar1 + 0x18,param_1);
  return;
}



/* Entry: 1032cfee8; end: 1032cff0b;  */

undefined8 FUN_1032cfee8(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1032cff0c; end: 1032d0273;  */

long FUN_1032cff0c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1032d0274; end: 1032d030b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032d0274(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112f55730;
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + _DAT_112f55730);
    if (lVar2 == 0) {
      uVar3 = 0;
    }
    else {
      func_0x000107c61174(lVar2);
      FUN_1032d9cc4();
      func_0x000107c61170(lVar2);
      uVar3 = *(undefined8 *)(param_1 + lVar1);
    }
    *(undefined8 *)(param_1 + lVar1) = 0;
    func_0x000107c61170();
    func_0x000107c61170(uVar3);
  }
  return;
}



/* Entry: 1032d030c; end: 1032d036b; -[_TtC16LensFullScreenUX23LensFullScreenUXFeature init] */

void FUN_1032d030c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensFullScreenUX.LensFullScreenUXFeature",0x28,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032d0338);
  (*pcVar1)();
}



/* Entry: 1032d036c; end: 1032d03c3; -[_TtC16LensFullScreenUX23LensFullScreenUXFeature .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001032d03a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032d03ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032d036c(long param_1)

{
  func_0x000100775640(param_1 + _DAT_112f55720);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f55728));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f55730));
  return;
}



/* Entry: 1032d03c4; end: 1032d03e3;  */

void FUN_1032d03c4(void)

{
  func_0x000107c61168(&PTR_PTR_1128cb370);
  return;
}



/* Entry: 1032d03e4; end: 1032d03e7; -[_TtC16LensFullScreenUX23LensFullScreenUXFeature activate] */

void FUN_1032d03e4(void)

{
  return;
}



/* Entry: 1032d03e8; end: 1032d0517;  */

/* WARNING: Possible PIC construction at 0x0001032d04f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032d04f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032d03e8(long param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  lVar1 = unaff_x20;
  func_0x000107c614f0();
  if (param_1 != 0) {
    if (*(long *)(unaff_x20 + _DAT_112f55730) == 0) {
      func_0x000107c61174(param_1);
    }
    else {
      func_0x000107c61174(param_1);
      func_0x000104366fc4(0xd00000000000001b,0x800000010f13b220,lVar1,&PTR_DAT_1106385f0);
    }
    func_0x0001007d6c6c(1,0xd000000000000014,0x800000010f13b200,lVar1,&PTR_DAT_1106385f0);
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f55738);
    *(long *)(unaff_x20 + _DAT_112f55738) = param_1;
    func_0x000107c61174(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  func_0x000104366fc4(0x2073692077656956,0xeb000000006c696e,lVar1,&PTR_DAT_1106385f0);
  return;
}



/* Entry: 1032d0518; end: 1032d1773;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032d0518(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  undefined1 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  byte bVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined8 uVar19;
  ulong uVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  undefined *puVar26;
  char *pcVar27;
  undefined8 *puVar28;
  long *plVar29;
  undefined *puVar30;
  ulong uVar31;
  undefined8 uVar32;
  ulong uVar33;
  undefined8 uVar34;
  ulong uVar35;
  long unaff_x20;
  long lVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  code *pcVar39;
  ulong uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  byte bVar44;
  undefined8 uVar45;
  ulong uVar46;
  ulong uVar47;
  ulong uVar48;
  undefined **ppuStack_1b8;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined1 auStack_c8 [40];
  undefined *puStack_a0;
  long lStack_98;
  undefined8 uStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined *apuStack_70 [2];
  
  lVar14 = unaff_x20;
  func_0x000107c614f0();
  func_0x0001007d6c6c(1,0xd000000000000013,0x800000010f13b240,lVar14,&PTR_DAT_1106385f0);
  apuStack_70[0] = PTR_DAT_11269cb50;
  lVar8 = param_1;
  func_0x000107c61494(param_1,1,apuStack_70);
  if (lVar8 != 0) {
    func_0x000107c61174();
    lVar9 = lVar8;
    func_0x000107c3f2f8();
    func_0x000107c61180();
    if (lVar9 != 0) {
      lVar10 = lVar8;
      func_0x000107c3f250();
      func_0x000107c61180();
      if (lVar10 != 0) {
        puStack_78 = PTR_DAT_1126a1a28;
        lVar11 = param_1;
        func_0x000107c61494(param_1,1,&puStack_78);
        if (lVar11 != 0) {
          func_0x000107c4b1a0();
          func_0x000107c61180();
          if (lVar11 != 0) goto LAB_1032d0650;
        }
        func_0x000104366fc4(0xd000000000000012,0x800000010f13b290,lVar14,&PTR_DAT_1106385f0);
        lVar11 = param_1;
        func_0x000107c61174();
LAB_1032d0650:
        func_0x0001000285a8(0x112f55808,&UNK_10dbacb78);
        puVar1 = (ulong *)(unaff_x20 + _DAT_112f55720);
        uVar40 = puVar1[4];
        func_0x000107c61174();
        func_0x000107c3f124(uVar40);
        func_0x000107c61180();
        uVar12 = uVar40;
        func_0x0001000bda74();
        func_0x000107c61170(uVar40);
        uVar38 = 0x112f55810;
        func_0x0001000285a8(0x112f55810,&UNK_10dbacb80);
        uVar13 = 0x1032d1824;
        func_0x0001000cb480(0x1032d1824,0,uVar38);
        func_0x000107c61574(uVar12);
        lVar14 = 0;
        func_0x0001032d9240();
        func_0x000107c613fc();
        puStack_a0 = (undefined *)0x0;
        func_0x0001000285a8(0x112f55818,&UNK_10dbacb88);
        func_0x000107c613fc();
        func_0x000107c6157c(uVar13);
        ppuVar17 = &puStack_a0;
        func_0x00010006c248();
        *(undefined8 *)(lVar14 + 0x10) = uVar13;
        *(undefined ***)(lVar14 + 0x18) = ppuVar17;
        lVar15 = 0;
        func_0x0001032d95e8();
        func_0x000107c613fc();
        puStack_a0 = (undefined *)0x0;
        lStack_98 = 0;
        func_0x0001000285a8(0x112f55820,&UNK_10dbacb90);
        func_0x000107c613fc();
        ppuVar17 = &puStack_a0;
        func_0x00010006c248();
        *(undefined ***)(lVar15 + 0x10) = ppuVar17;
        uVar40 = puVar1[10];
        func_0x0001032d1884();
        uVar38 = *(undefined8 *)(puVar1[5] + _DAT_112fe9ea8);
        func_0x0001000285a8(0x112d3b7c8,&UNK_10da59ea0);
        uVar33 = puVar1[6];
        func_0x000107c6157c(uVar38);
        func_0x000107c4b1cc();
        func_0x000107c61180();
        uVar12 = uVar33;
        func_0x0001000bda74();
        func_0x000107c61170(uVar33);
        func_0x0001000285a8(0x112d53860,&UNK_10d92b600);
        puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8();
        func_0x000107c45a48();
        ppuStack_1b8 = &puStack_a0;
        puStack_a0 = puVar16;
        func_0x000100854cb0();
        func_0x000107c61170(puVar16);
        ppuVar17 = *(undefined ***)(puVar1[9] + _DAT_113035b60);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (ppuVar17 != (undefined **)0x0) {
          ppuVar18 = ppuVar17;
          func_0x000107c4cf50();
          func_0x000107c61180();
          func_0x000107c615e8(ppuVar17);
          ppuVar17 = ppuVar18;
          func_0x0001000b637c();
          func_0x000107c61170(ppuVar18);
          func_0x000107c61574(ppuStack_1b8);
          ppuStack_1b8 = ppuVar17;
        }
        uVar33 = puVar1[1];
        uVar41 = *(undefined8 *)(uVar33 + _DAT_112fcaac0);
        uVar45 = *(undefined8 *)(puVar1[2] + _DAT_113070ea8);
        func_0x0001000285a8(0x112f55828,&UNK_10dbcae70);
        uVar34 = *(undefined8 *)(puVar1[8] + _DAT_1130828e8);
        func_0x000107c6157c(uVar41);
        func_0x000107c6157c(uVar45);
        func_0x000107c61174();
        uVar19 = uVar34;
        func_0x0001000bda74();
        func_0x000107c61170(uVar34);
        uVar20 = puVar1[7];
        func_0x000107c3f198();
        func_0x000107c61180();
        lVar36 = _DAT_112fcaab8;
        uVar46 = *puVar1;
        FUN_1032d1d90(uVar33 + _DAT_112fcaab8,&puStack_a0);
        lVar25 = lStack_80;
        uVar42 = uStack_88;
        func_0x0001000a8868(&puStack_a0,uStack_88);
        (**(code **)(lVar25 + 0x28))(uVar42,lVar25);
        puVar16 = &UNK_110637e70;
        func_0x000107c613fc(&UNK_110637e70,0x18,7);
        *(ulong *)(puVar16 + 0x10) = uVar46;
        uVar34 = 0x112f55830;
        func_0x0001000285a8(0x112f55830,&UNK_10dbacba0);
        uVar21 = 0x1032d1c78;
        func_0x0001000bfde0(0x1032d1c78,puVar16,uVar34);
        func_0x000107c61574(uVar42);
        func_0x000107c61574(puVar16);
        func_0x0001000834e4(&puStack_a0);
        puStack_a0 = (undefined *)0x0;
        ppuVar17 = &puStack_a0;
        func_0x0001006c71a4(ppuVar17);
        func_0x000107c61574();
        func_0x0001032d1cc0();
        func_0x0001000c2068();
        func_0x000107c61574(ppuVar17);
        FUN_1032d1d90(uVar33 + lVar36,&puStack_a0);
        lVar25 = _DAT_112fcaac8;
        uVar34 = *(undefined8 *)(uVar33 + _DAT_112fcaac8);
        lVar22 = 0;
        func_0x0001032d8bac();
        func_0x000107c613fc();
        *(long *)(lVar22 + 0x28) = lVar11;
        FUN_1032d1d90(&puStack_a0,lVar22 + 0x38);
        *(undefined8 *)(lVar22 + 0x60) = uVar34;
        func_0x000107c6157c(uVar45);
        func_0x000107c6157c(uVar34);
        func_0x000107c6157c(uVar21);
        func_0x000107c61174();
        func_0x000107c61174();
        uVar34 = 0x112f55848;
        func_0x0001000285a8(0x112f55848,&UNK_10dbacba8);
        uVar42 = 0x1032d8388;
        func_0x0001000bfde0(0x1032d8388,0,uVar34);
        *(undefined8 *)(lVar22 + 0x30) = uVar42;
        puVar16 = &UNK_110637e98;
        func_0x000107c613fc(&UNK_110637e98,0x30,7);
        *(long *)(puVar16 + 0x10) = param_1;
        *(long *)(puVar16 + 0x18) = lVar10;
        *(long *)(puVar16 + 0x20) = lVar9;
        *(undefined8 *)(puVar16 + 0x28) = uVar45;
        func_0x0001000285a8(0x112f55850,&UNK_10dbacbb0);
        func_0x000107c613fc();
        func_0x000107c61174();
        func_0x000107c6157c(uVar45);
        func_0x000107c61174();
        func_0x000107c61174();
        pcVar39 = FUN_1032d1d74;
        func_0x0001000bdd8c(FUN_1032d1d74,puVar16);
        *(code **)(lVar22 + 0x10) = pcVar39;
        puVar16 = &UNK_110637ec0;
        func_0x000107c613fc(&UNK_110637ec0,0x20,7);
        *(long *)(puVar16 + 0x10) = param_1;
        *(long *)(puVar16 + 0x18) = lVar9;
        func_0x0001000285a8(0x112f55858,&UNK_10dbacbb8);
        func_0x000107c613fc();
        func_0x000107c61174();
        func_0x000107c61174();
        uVar34 = 0x1032d1d80;
        func_0x0001000bdd8c(0x1032d1d80,puVar16);
        *(undefined8 *)(lVar22 + 0x18) = uVar34;
        puVar16 = &UNK_110637ee8;
        func_0x000107c613fc(&UNK_110637ee8,0x20,7);
        *(long *)(puVar16 + 0x10) = param_1;
        *(long *)(puVar16 + 0x18) = lVar9;
        func_0x0001000285a8(0x112f55860,&UNK_10dbacbc0);
        func_0x000107c613fc();
        func_0x000107c61174();
        func_0x000107c61174();
        uVar34 = 0x1032d1d88;
        func_0x0001000bdd8c(0x1032d1d88,puVar16);
        func_0x000107c61170(lVar10);
        func_0x000107c61170(lVar9);
        func_0x000107c61574(uVar45);
        func_0x000107c61574(uVar21);
        func_0x0001000834e4(&puStack_a0);
        *(undefined8 *)(lVar22 + 0x20) = uVar34;
        lVar23 = 0;
        func_0x0001032d1c34();
        func_0x000107c613fc();
        func_0x000107c61614(lVar23 + 0x10,0);
        func_0x000107c61604(lVar23 + 0x10,lVar8);
        func_0x0001000d224c(&puStack_a0);
        lVar5 = lStack_98;
        puVar16 = puStack_a0;
        func_0x0001000d224c(&puStack_a0);
        lVar6 = lStack_98;
        puVar4 = puStack_a0;
        uVar42 = *(undefined8 *)(uVar33 + lVar25);
        FUN_1032d1d90(uVar33 + lVar36,&puStack_a0);
        uVar35 = puVar1[3];
        func_0x000107c6157c(uVar42);
        func_0x000107c6157c();
        func_0x000107c6157c();
        func_0x000107c6157c(lVar22);
        FUN_1032d7764();
        FUN_1032d1d90(uVar33 + _DAT_112fcaab0,auStack_c8);
        uVar33 = puVar1[0xe];
        func_0x000107c6157c(lVar23);
        func_0x000107c4b2ec();
        func_0x000107c61180();
        uVar31 = puVar1[0xd];
        lVar24 = 0;
        func_0x0001032dd294();
        uVar47 = puVar1[0xc];
        uVar48 = puVar1[0xb];
        lVar25 = lVar24;
        func_0x000107c610f8();
        *(undefined2 *)(lVar25 + _DAT_112f56090) = 0x2001;
        *(undefined8 *)(lVar25 + _DAT_112f56098) = 0;
        *(undefined1 *)(lVar25 + _DAT_112f560a0) = 0;
        *(undefined1 *)(lVar25 + _DAT_112f560a8) = 10;
        puVar28 = (undefined8 *)(lVar25 + _DAT_112f560c8);
        puVar28[1] = 0;
        *puVar28 = 0;
        puVar28[3] = 0;
        puVar28[2] = 0;
        puVar28[4] = 0;
        *(undefined8 *)(lVar25 + _DAT_112f560d0) = 0;
        *(undefined8 *)(lVar25 + _DAT_112f560e8) = 0;
        puVar28 = (undefined8 *)(lVar25 + _DAT_112f560f0);
        *puVar28 = 0;
        puVar28[1] = 0;
        lVar8 = _DAT_112f560f8;
        uStack_100 = 0;
        func_0x0001000285a8(0x112f55868,&UNK_10dbacbc8);
        func_0x000107c613fc();
        puVar28 = &uStack_100;
        func_0x00010006c248();
        *(undefined8 **)(lVar25 + lVar8) = puVar28;
        lVar8 = _DAT_112f56100;
        uStack_100 = 0;
        func_0x0001000285a8(0x112f55870,&UNK_10dbacbd0);
        func_0x000107c613fc();
        puVar28 = &uStack_100;
        func_0x00010006c248();
        *(undefined8 **)(lVar25 + lVar8) = puVar28;
        lVar8 = _DAT_112f56108;
        uStack_100 = 0;
        func_0x0001000285a8(0x112f55878,&UNK_10dbacbd8);
        func_0x000107c613fc();
        puVar28 = &uStack_100;
        func_0x00010006c248();
        *(undefined8 **)(lVar25 + lVar8) = puVar28;
        lVar8 = _DAT_112f56128;
        puVar26 = PTR_PTR_1126c1838;
        func_0x000107c610f8();
        func_0x000107c453e4();
        *(undefined **)(lVar25 + lVar8) = puVar26;
        lVar8 = _DAT_112f56158;
        uVar34 = 0;
        func_0x0001000c6560();
        func_0x000107c613fc();
        func_0x0001000c6580();
        *(undefined8 *)(lVar25 + lVar8) = uVar34;
        lVar8 = _DAT_112f56160;
        pcVar27 = "LensFullScreenUXWorkflow";
        func_0x0001000c10c0();
        func_0x000107c61180();
        *(char **)(lVar25 + lVar8) = pcVar27;
        plVar29 = (long *)(lVar25 + _DAT_112f56180);
        *plVar29 = 0;
        plVar29[1] = 0;
        *(undefined1 *)(lVar25 + _DAT_112f56188) = 0;
        lVar8 = _DAT_112f56190;
        func_0x000107c61614(lVar25 + _DAT_112f56190,0);
        puVar28 = (undefined8 *)(lVar25 + _DAT_112f56198);
        *puVar28 = 0;
        puVar28[1] = 0;
        puVar28 = (undefined8 *)(lVar25 + _DAT_112f561a0);
        *puVar28 = 0;
        puVar28[1] = 0;
        lVar36 = _DAT_112f561a8;
        uStack_100 = 0;
        lStack_f8 = 0;
        func_0x0001000285a8(0x112f55880,&UNK_10dbacbe0);
        func_0x000107c613fc();
        puVar28 = &uStack_100;
        func_0x00010006c248();
        *(undefined8 **)(lVar25 + lVar36) = puVar28;
        *(ulong *)(lVar25 + _DAT_112f56110) = uVar46;
        FUN_1032d1d90(&puStack_a0,lVar25 + _DAT_112f56170);
        plVar2 = (long *)(lVar25 + _DAT_112f560d8);
        *plVar2 = lVar14;
        plVar2[1] = (long)&PTR_DAT_110638848;
        plVar2 = (long *)(lVar25 + _DAT_112f560e0);
        *plVar2 = lVar15;
        plVar2[1] = (long)&PTR_DAT_110638898;
        plVar2 = (long *)(lVar25 + _DAT_112f560c0);
        *plVar2 = lVar22;
        plVar2[1] = (long)&PTR_DAT_110638788;
        *(long *)(lVar25 + _DAT_112f560b8) = param_1;
        *(undefined8 *)(lVar25 + _DAT_112f56150) = uVar38;
        *(long *)(lVar25 + _DAT_112f560b0) = lVar9;
        lVar36 = *plVar29;
        *plVar29 = lVar23;
        plVar29[1] = (long)&PTR_DAT_110637e50;
        func_0x000107c61174();
        func_0x000107c6157c(uVar38);
        func_0x000107c61174();
        func_0x000107c6157c(lVar14);
        func_0x000107c6157c(lVar15);
        func_0x000107c6157c(lVar22);
        func_0x000107c6157c(lVar23);
        func_0x000107c615e8(lVar36);
        *(undefined8 *)(lVar25 + _DAT_112f56118) = uVar19;
        *(ulong *)(lVar25 + _DAT_112f56120) = uVar12;
        *(undefined8 *)(lVar25 + _DAT_112f56168) = uVar41;
        FUN_1032d1d90(auStack_c8,lVar25 + _DAT_112f56178);
        func_0x000107c61604(lVar25 + lVar8,uVar20);
        *(undefined8 *)(lVar25 + _DAT_112f56148) = uVar42;
        *(ulong *)(lVar25 + _DAT_112f561b0) = uVar33;
        *(undefined8 *)(lVar25 + _DAT_112f561b8) = uVar45;
        puVar28 = (undefined8 *)(lVar25 + _DAT_112f56130);
        *puVar28 = puVar16;
        puVar28[1] = lVar5;
        puVar28 = (undefined8 *)(lVar25 + _DAT_112f56138);
        *puVar28 = puVar4;
        puVar28[1] = lVar6;
        puVar1 = (ulong *)(lVar25 + _DAT_112f56140);
        puVar1[1] = uVar47;
        *puVar1 = uVar48;
        lVar8 = _DAT_113070e70;
        uVar34 = *(undefined8 *)(uVar31 + _DAT_113070e70);
        *(undefined8 *)(lVar25 + _DAT_112f561d0) = uVar34;
        if (uVar46 < 9) {
          uVar47 = (ulong)(byte)(&UNK_10dbacbfa)[uVar46];
        }
        else {
          uVar47 = 4;
        }
        bVar44 = (byte)uVar47;
        func_0x000107c615f0(puVar4);
        func_0x000107c615f0(uVar48);
        func_0x000107c61580(uVar34,2);
        func_0x000107c6157c(uVar41);
        func_0x000107c6157c(uVar45);
        func_0x000107c6157c(uVar42);
        func_0x000107c6157c(uVar19);
        func_0x000107c6157c(uVar12);
        func_0x000107c61174();
        func_0x000107c615f0(puVar16);
        func_0x0001000d224c(&uStack_100);
        lVar36 = lStack_f8;
        uVar32 = uStack_100;
        uVar37 = uStack_100;
        func_0x000107c614f0(uStack_100);
        bVar7 = bVar44;
        (**(code **)(lVar36 + 0x20))(uVar47,uVar37,lVar36);
        func_0x000107c615e8(uVar32);
        *(byte *)(lVar25 + _DAT_112f561c0) = bVar7 & 1;
        func_0x0001000d224c(&uStack_100);
        lVar36 = lStack_f8;
        uVar32 = uStack_100;
        uVar37 = uStack_100;
        func_0x000107c614f0(uStack_100);
        (**(code **)(lVar36 + 0x28))(uVar47,uVar37,lVar36);
        func_0x000107c615e8(uVar32);
        *(byte *)(lVar25 + _DAT_112f561c8) = bVar44 & 1;
        plVar29 = &lStack_d8;
        lStack_d8 = lVar25;
        lStack_d0 = lVar24;
        func_0x000107c61154(plVar29,PTR_s_init_1125d9248);
        puVar26 = puVar16;
        func_0x000107c614f0(puVar16);
        pcVar39 = *(code **)(lVar5 + 8);
        func_0x000107c61174();
        (*pcVar39)();
        func_0x000107c61170(plVar29);
        (**(code **)(lVar5 + 0x10))(puVar26,lVar5);
        func_0x0001000d224c(&uStack_100);
        lVar36 = lStack_f8;
        uVar32 = uStack_100;
        uVar37 = uStack_100;
        func_0x000107c614f0(uStack_100);
        (**(code **)(lVar36 + 0x18))(uVar47,uVar37,lVar36);
        func_0x000107c615e8(uVar32);
        if ((uVar47 & 1) != 0) {
          func_0x000107c6157c(uVar45);
          lVar36 = lVar9;
          func_0x000107c61174();
          func_0x0001000d224c(&uStack_100);
          func_0x0001000a8868(&uStack_100,uStack_e8);
          uVar32 = uStack_e8;
          (**(code **)(lStack_e0 + 0x10))(uStack_e8,lStack_e0);
          func_0x0001000834e4(&uStack_100);
          uVar43 = *(undefined8 *)(uVar31 + _DAT_113070e68);
          uVar37 = *(undefined8 *)(uVar31 + lVar8);
          uVar3 = *(undefined1 *)((long)plVar29 + _DAT_112f561c8);
          puVar26 = &UNK_110637f10;
          func_0x000107c613fc(&UNK_110637f10,0x18,7);
          func_0x000107c61614(puVar26 + 0x10,plVar29);
          puVar30 = &UNK_110637f38;
          func_0x000107c613fc(&UNK_110637f38,0x50,7);
          *(long *)(puVar30 + 0x10) = param_1;
          *(long *)(puVar30 + 0x18) = lVar36;
          *(undefined8 *)(puVar30 + 0x20) = uVar45;
          puVar30[0x28] = (byte)uVar32 & 1;
          *(undefined8 *)(puVar30 + 0x30) = uVar43;
          *(undefined8 *)(puVar30 + 0x38) = uVar37;
          puVar30[0x40] = uVar3;
          *(undefined **)(puVar30 + 0x48) = puVar26;
          func_0x0001000285a8(0x112f55888,&UNK_10dbacbe8);
          func_0x000107c613fc();
          func_0x000107c61174(param_1);
          func_0x000107c6157c(uVar43);
          func_0x000107c6157c(uVar37);
          pcVar39 = FUN_1032d1dd4;
          func_0x0001000bdd8c(FUN_1032d1dd4,puVar30);
          uVar32 = *(undefined8 *)((long)plVar29 + _DAT_112f560e8);
          *(code **)((long)plVar29 + _DAT_112f560e8) = pcVar39;
          func_0x000107c61574(uVar32);
        }
        lVar8 = lStack_80;
        uVar32 = uStack_88;
        func_0x0001000a8868(&puStack_a0,uStack_88);
        (**(code **)(lVar8 + 0x38))(uVar32,lVar8);
        FUN_1032da064(uVar21,uVar32);
        func_0x000107c61574(uVar32);
        FUN_1032da214(uVar35);
        FUN_1032da32c(ppuStack_1b8);
        FUN_1032da578(uVar40);
        if (uVar46 == 0) {
          func_0x000107c61574(uVar19);
          func_0x000107c61574(uVar12);
          func_0x000107c61574(uVar41);
          func_0x000107c61170(uVar20);
          func_0x000107c61574(uVar42);
          func_0x000107c61170(uVar33);
          func_0x000107c615e8(puVar16);
          func_0x000107c615e8(puVar4);
          func_0x000107c61574(uVar34);
          func_0x000107c61170(lVar11);
        }
        else {
          func_0x0001000a8868(&puStack_a0,uStack_88);
          uVar32 = uStack_88;
          (**(code **)(lStack_80 + 0x40))(uStack_88,lStack_80);
          func_0x0001032da6d4(uVar40,uVar32);
          func_0x000107c61574(uVar19);
          func_0x000107c61574(uVar12);
          func_0x000107c61574(uVar41);
          func_0x000107c61170(uVar20);
          func_0x000107c61574(uVar42);
          func_0x000107c61170(uVar33);
          func_0x000107c615e8(puVar16);
          func_0x000107c615e8(puVar4);
          func_0x000107c61574(uVar34);
          func_0x000107c61170(lVar11);
          func_0x000107c61574(uVar32);
        }
        func_0x000107c61574(uVar35);
        func_0x000107c61574(uVar40);
        func_0x000107c61574(ppuStack_1b8);
        func_0x000107c61574(uVar13);
        func_0x000107c61170(lVar9);
        func_0x000107c61170(lVar10);
        func_0x000107c61574(uVar45);
        func_0x000107c61574(uVar21);
        func_0x000107c61170(param_1);
        func_0x000107c61578(lVar14,2);
        func_0x000107c61578(lVar15,2);
        func_0x000107c61578(lVar22,2);
        func_0x000107c61574(uVar38);
        func_0x000107c61578(lVar23,2);
        func_0x0001000834e4(auStack_c8);
        func_0x0001000834e4(&puStack_a0);
        uVar38 = *(undefined8 *)(unaff_x20 + _DAT_112f55730);
        *(long **)(unaff_x20 + _DAT_112f55730) = plVar29;
        func_0x000107c61170(uVar38);
        return;
      }
      func_0x000107c61170(param_1);
      param_1 = lVar9;
    }
    func_0x000107c61170(param_1);
  }
  func_0x000104366fc4(0xd000000000000027,0x800000010f13b260,lVar14,&PTR_DAT_1106385f0);
  return;
}



/* Entry: 1032d1774; end: 1032d17c7; -[_TtC16LensFullScreenUX23LensFullScreenUXFeature configureWithView:] */

/* WARNING: Possible PIC construction at 0x0001032d17b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032d17b4) */

void FUN_1032d1774(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1032d03e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1032d17c8; end: 1032d17cb; -[_TtC16LensFullScreenUX23LensFullScreenUXFeature resetMetrics] */

void FUN_1032d17c8(void)

{
  return;
}



/* Entry: 1032d17cc; end: 1032d1823; -[_TtC16LensFullScreenUX23LensFullScreenUXFeature usageMetrics] */

void FUN_1032d17cc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100dfa3f0(PTR___swiftEmptyArrayStorage_11034f1c8);
  puVar2 = puVar1;
  func_0x000107c5f9dc();
  func_0x000107c6142c(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1032d1824; end: 1032d1a33;  */

void FUN_1032d1824(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_2;
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000107c3f2d0();
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 1032d1a34; end: 1032d1a5f;  */

void FUN_1032d1a34(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  func_0x000107c61174();
  return;
}



/* Entry: 1032d1a60; end: 1032d1ab7;  */

void FUN_1032d1a60(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0x112d5d810;
  func_0x0001000285a8(0x112d5d810,&UNK_10d923f50);
  func_0x0001000bda74(uVar2,uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 1032d1ab8; end: 1032d1bdf;  */

void FUN_1032d1ab8(long *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lStack_38;
  
  if ((char)param_1[1] == '\x01') {
    iVar1 = 2;
    lStack_38 = *param_1;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar1 != 0) {
      uVar2 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(&lStack_38,uVar2,PTR___ss5ErrorWS_11034ee10);
    }
  }
  else {
    func_0x0001000d224c(&lStack_38);
    if (lStack_38 != 0) {
      func_0x0001000285a8(0x112d3b7d0,&UNK_10d904cc0);
      lVar3 = lStack_38;
      func_0x000107c3d14c(lStack_38);
      func_0x000107c61180();
      func_0x0001000b637c();
      func_0x000107c615e8(lStack_38);
      func_0x000107c61170(lVar3);
      return;
    }
  }
  func_0x000104366fc4(0xd000000000000023,0x800000010f13b2d0,param_2,&PTR_DAT_1106385f0);
  func_0x0001000285a8(0x112d3b7d0,&UNK_10d904cc0);
  func_0x000104886440();
  return;
}



/* Entry: 1032d1be0; end: 1032d1c0f;  */

void FUN_1032d1be0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x000107c4dfe8();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 1032d1c10; end: 1032d1c53;  */

void FUN_1032d1c10(void)

{
  long unaff_x20;
  
  FUN_1032d1c54(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1032d1c54; end: 1032d1d2f;  */

undefined8 FUN_1032d1c54(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1032d1d30; end: 1032d1d73;  */

void FUN_1032d1d30(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f55840 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x000100768738(0xff);
  puVar2 = &UNK_10dc3b250;
  func_0x000107c61520(&UNK_10dc3b250,uVar1);
  puRam0000000112f55840 = puVar2;
  return;
}



/* Entry: 1032d1d74; end: 1032d1d8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032d1d74(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  long unaff_x20;
  long lStack_70;
  long lStack_68;
  
  uVar9 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar11 = &lStack_70;
  lVar6 = 0;
  FUN_1032d6d40();
  lVar7 = lVar6;
  func_0x000107c610f8();
  lVar1 = lVar7 + _DAT_112f55ce0;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  *(undefined8 *)(lVar7 + _DAT_112f55d00) = 0;
  *(undefined8 *)(lVar7 + _DAT_112f55d08) = 0;
  *(undefined8 *)(lVar7 + _DAT_112f55d10) = 0;
  lVar1 = _DAT_112f55d20;
  func_0x000107c61614(lVar7 + _DAT_112f55d20,0);
  lVar5 = _DAT_112f55d28;
  func_0x000107c61614(lVar7 + _DAT_112f55d28,0);
  puVar2 = (undefined8 *)(lVar7 + _DAT_112f55d30);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  func_0x000107c61604(lVar7 + lVar5,uVar9);
  func_0x000107c61604(lVar7 + lVar1,uVar3);
  *(undefined8 *)(lVar7 + _DAT_112f55d18) = uVar10;
  *(undefined8 *)(lVar7 + _DAT_112f55ce8) = uVar4;
  puVar8 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c61174(uVar10);
  func_0x000107c6157c(uVar4);
  func_0x000107c453e4();
  lVar1 = _DAT_112f55cf8;
  *(undefined **)(lVar7 + _DAT_112f55cf8) = puVar8;
  func_0x000107c55528();
  uVar9 = *(undefined8 *)(lVar7 + lVar1);
  func_0x000107c61174(uVar9);
  uVar10 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f13b820);
  func_0x000107c520f4(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  puVar8 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar7 + _DAT_112f55cf0) = puVar8;
  lStack_70 = lVar7;
  lStack_68 = lVar6;
  func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
  *param_1 = plVar11;
  return;
}



/* Entry: 1032d1d90; end: 1032d1dd3;  */

long FUN_1032d1d90(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1032d1dd4; end: 1032d1df7;  */

void FUN_1032d1dd4(long *param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  uVar9 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined1 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar6 = *(undefined1 *)(unaff_x20 + 0x40);
  lVar12 = *(long *)(unaff_x20 + 0x48);
  func_0x000107c61428(lVar12 + 0x10,auStack_78,0,0);
  lVar12 = lVar12 + 0x10;
  func_0x000107c61618();
  puVar7 = &UNK_110638b60;
  func_0x000107c613fc(&UNK_110638b60,0x20,7);
  ppuVar1 = (undefined **)0x0;
  if (lVar12 != 0) {
    ppuVar1 = &PTR_DAT_1106389b8;
  }
  *(undefined ***)(puVar7 + 0x18) = ppuVar1;
  func_0x000107c61614(puVar7 + 0x10,lVar12);
  puVar8 = &UNK_110638b88;
  func_0x000107c613fc(&UNK_110638b88,0x40,7);
  *(undefined8 *)(puVar8 + 0x10) = uVar9;
  *(undefined8 *)(puVar8 + 0x18) = uVar3;
  *(undefined8 *)(puVar8 + 0x20) = uVar11;
  puVar8[0x28] = uVar5;
  *(undefined8 *)(puVar8 + 0x30) = uVar2;
  *(undefined **)(puVar8 + 0x38) = puVar7;
  func_0x0001000285a8(0x112f56288,&UNK_10dbad408);
  func_0x000107c613fc();
  func_0x000107c61174(uVar9);
  func_0x000107c61174(uVar3);
  func_0x000107c6157c(uVar11);
  func_0x000107c6157c(uVar2);
  uVar9 = 0x1032de6ec;
  func_0x0001000bdd8c(0x1032de6ec,puVar8);
  lVar10 = 0;
  func_0x0001032d8228();
  func_0x000107c613fc();
  *(undefined8 *)(lVar10 + 0x38) = 0;
  func_0x000107c61614(lVar10 + 0x30,0);
  *(undefined8 *)(lVar10 + 0x10) = uVar9;
  *(undefined8 *)(lVar10 + 0x18) = uVar2;
  *(undefined8 *)(lVar10 + 0x20) = uVar4;
  *(undefined1 *)(lVar10 + 0x28) = uVar6;
  *(undefined ***)(lVar10 + 0x38) = ppuVar1;
  func_0x000107c61604(lVar10 + 0x30,lVar12);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar4);
  func_0x000107c61170(lVar12);
  *param_1 = lVar10;
  param_1[1] = (long)&PTR_DAT_110638748;
  return;
}



/* Entry: 1032d1df8; end: 1032d1f67;  */

/* WARNING: Possible PIC construction at 0x0001032d1f1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032d1f20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032d1df8(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar6 = &puStack_70;
  lVar1 = unaff_x20 + _DAT_112f55890;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c4ac54();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    lVar1 = lVar2;
    func_0x000107c4500c();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar1 != 0) {
      uVar3 = 0;
      FUN_1032d03c4(0);
      lVar2 = lVar1;
      func_0x000107c61480(lVar1,uVar3);
      if (lVar2 != 0) {
        pcVar4 = "cleanUp()";
        func_0x0001000c10c0("cleanUp()");
        func_0x000107c61180();
        puVar5 = &UNK_110637f90;
        func_0x000107c613fc(&UNK_110637f90,0x18,7);
        func_0x000107c61614(puVar5 + 0x10,lVar2);
        pcStack_50 = FUN_1032d1f68;
        puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_68 = 0x42000000;
        puStack_60 = &UNK_1000f6b44;
        puStack_58 = &UNK_110637fa8;
        puStack_48 = puVar5;
        func_0x000107c60bc4(&puStack_70);
        func_0x000107c61574(puStack_48);
        func_0x000107c4e524(pcVar4);
        func_0x000107c60bd0(ppuVar6);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 1032d1f68; end: 1032d1f77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032d1f68(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112f55730;
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + _DAT_112f55730);
    if (lVar3 == 0) {
      uVar4 = 0;
    }
    else {
      func_0x000107c61174(lVar3);
      FUN_1032d9cc4();
      func_0x000107c61170(lVar3);
      uVar4 = *(undefined8 *)(lVar2 + lVar1);
    }
    *(undefined8 *)(lVar2 + lVar1) = 0;
    func_0x000107c61170();
    func_0x000107c61170(uVar4);
  }
  return;
}



/* Entry: 1032d1f78; end: 1032d1fd7; -[_TtC16LensFullScreenUX29LensFullScreenUXFeaturePlugin init] */

void FUN_1032d1f78(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensFullScreenUX.LensFullScreenUXFeaturePlugin",0x2e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032d1fa4);
  (*pcVar1)();
}



/* Entry: 1032d1fd8; end: 1032d201f; -[_TtC16LensFullScreenUX29LensFullScreenUXFeaturePlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032d1fd8(long param_1)

{
  func_0x000100775640(param_1 + _DAT_112f55898);
  func_0x000102a3d2c4(param_1 + _DAT_112f558a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc05f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakDestroy_11034f580)(param_1 + _DAT_112f55890);
  return;
}



/* Entry: 1032d2020; end: 1032d2103;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032d2020(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lStack_d8;
  long lStack_d0;
  undefined1 auStack_c8 [136];
  
  lVar3 = 0;
  FUN_1032d03c4();
  lVar4 = lVar3;
  func_0x000107c610f8();
  lVar2 = _DAT_112f55728;
  uVar5 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(lVar4 + lVar2) = uVar5;
  *(undefined8 *)(lVar4 + _DAT_112f55730) = 0;
  *(undefined8 *)(lVar4 + _DAT_112f55738) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112f55720);
  uVar5 = *param_1;
  puVar1[1] = param_1[1];
  *puVar1 = uVar5;
  uVar5 = param_1[6];
  uVar7 = param_1[9];
  uVar6 = param_1[8];
  uVar11 = param_1[3];
  uVar10 = param_1[2];
  uVar9 = param_1[5];
  uVar8 = param_1[4];
  puVar1[7] = param_1[7];
  puVar1[6] = uVar5;
  puVar1[9] = uVar7;
  puVar1[8] = uVar6;
  puVar1[3] = uVar11;
  puVar1[2] = uVar10;
  puVar1[5] = uVar9;
  puVar1[4] = uVar8;
  uVar6 = param_1[0xb];
  uVar5 = param_1[10];
  uVar8 = param_1[0xd];
  uVar7 = param_1[0xc];
  uVar10 = param_1[0xf];
  uVar9 = param_1[0xe];
  puVar1[0x10] = param_1[0x10];
  puVar1[0xd] = uVar8;
  puVar1[0xc] = uVar7;
  puVar1[0xf] = uVar10;
  puVar1[0xe] = uVar9;
  puVar1[0xb] = uVar6;
  puVar1[10] = uVar5;
  func_0x000100775574(param_1,auStack_c8);
  lStack_d8 = lVar4;
  lStack_d0 = lVar3;
  func_0x000107c61154(&lStack_d8,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1032d2104; end: 1032d211b;  */

undefined8 FUN_1032d2104(void)

{
  return 1;
}



/* Entry: 1032d211c; end: 1032d214b;  */

void FUN_1032d211c(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 1032d214c; end: 1032d216f;  */

void FUN_1032d214c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1032d2170; end: 1032d21bf;  */

undefined1  [16] FUN_1032d2170(ulong param_1)

{
  long lStack_28;
  
  func_0x00010485773c();
  if ((param_1 & 1) != 0) {
    func_0x000100083b20(&lStack_28);
    if (lStack_28 != 0) {
      FUN_1032d1df8();
      func_0x000107c61170(lStack_28);
    }
  }
  return ZEXT816(0);
}



/* Entry: 1032d21c0; end: 1032d220b;  */

undefined ** FUN_1032d21c0(void)

{
  return &PTR_DAT_113066880;
}



/* Entry: 1032d220c; end: 1032d2243;  */

void FUN_1032d220c(undefined8 param_1,undefined8 param_2)

{
  FUN_1032e2438();
  uRam00000001138071f0 = param_1;
  uRam00000001138071f8 = param_2;
  uRam0000000113807200 = 0x4000000000000000;
  uRam0000000113807210 = 8;
  uRam0000000113807208 = 0;
  uRam0000000113807218 = 0;
  return;
}



/* Entry: 1032d2244; end: 1032d2437;  */

/* WARNING: Possible PIC construction at 0x0001032d2308: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032d2360: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032d239c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032d23d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032d23a0) */
/* WARNING: Removing unreachable block (ram,0x0001032d2364) */
/* WARNING: Removing unreachable block (ram,0x0001032d230c) */
/* WARNING: Removing unreachable block (ram,0x0001032d23d8) */

void FUN_1032d2244(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  
  puVar1 = unaff_x20 + 2;
  uVar3 = *unaff_x20;
  func_0x000107c61618();
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c4ef40(unaff_x20[6],unaff_x20[10]);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    func_0x000107c61168();
    func_0x0001008478a8();
    func_0x000107c613fc();
    *(undefined8 *)(puVar2 + 0x18) = 7;
    *(undefined8 *)(puVar2 + 0x10) = 3;
    uVar3 = unaff_x20[10];
    func_0x000107c3f75c(uVar3);
    func_0x000107c61180();
    func_0x000107c3f75c(unaff_x20[3]);
    func_0x000107c61180();
    func_0x000107c40280(uVar3);
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  func_0x000104366fc4(0xd00000000000002f,0x800000010f13b360,uVar3,&PTR_DAT_1106386f0);
  return;
}



/* Entry: 1032d2438; end: 1032d2493;  */

void FUN_1032d2438(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1032d2494; end: 1032d24bf;  */

long FUN_1032d2494(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1032d24c0; end: 1032d24c7;  */

void FUN_1032d24c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1032d24c8; end: 1032d24fb;  */

undefined8 * FUN_1032d24c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  uVar3 = param_2[5];
  uVar2 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  param_1[5] = uVar3;
  param_1[4] = uVar2;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 1032d24fc; end: 1032d2567;  */

undefined8 * FUN_1032d24fc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  return param_1;
}



/* Entry: 1032d2568; end: 1032d25b3;  */

undefined8 * FUN_1032d2568(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  uVar2 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar2;
  param_1[5] = param_2[5];
  return param_1;
}



/* Entry: 1032d25b4; end: 1032d2657;  */

int FUN_1032d25b4(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1032d2658; end: 1032d273f;  */

long FUN_1032d2658(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  
  lVar1 = unaff_x20[6];
  lVar4 = lVar1;
  if (lVar1 == 0) {
    uVar5 = *unaff_x20;
    puVar2 = &UNK_1106381d0;
    func_0x000107c613fc(&UNK_1106381d0,0x18,7);
    func_0x000107c61644(puVar2 + 0x10);
    puVar3 = &UNK_1106381f8;
    func_0x000107c613fc(&UNK_1106381f8,0x20,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(undefined8 *)(puVar3 + 0x18) = uVar5;
    func_0x000107c6157c(puVar2);
    lVar4 = -0x2fffffffffffffe1;
    func_0x0001043667f8(0xd00000000000001f,0x800000010f13b3e0,FUN_1032d2a3c,puVar3);
    func_0x000107c61574(puVar2);
    func_0x000107c61574(puVar3);
    uVar5 = unaff_x20[6];
    unaff_x20[6] = lVar4;
    func_0x000107c61174(lVar4);
    func_0x000107c61170(uVar5);
    lVar1 = 0;
  }
  func_0x000107c61174(lVar1);
  return lVar4;
}



/* Entry: 1032d2740; end: 1032d27db;  */

void FUN_1032d2740(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x0001007d6c6c(1,0xd000000000000014,0x800000010f13b400,param_2,&PTR_DAT_1106386d0);
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    lVar1 = param_1 + 0x10;
    func_0x000107c61618();
    func_0x000107c61574(param_1);
    if (lVar1 != 0) {
      FUN_1032ddb30();
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 1032d27dc; end: 1032d29df;  */

/* WARNING: Possible PIC construction at 0x0001032d285c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032d28f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032d2944: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032d2984: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032d2948) */
/* WARNING: Removing unreachable block (ram,0x0001032d28f4) */
/* WARNING: Removing unreachable block (ram,0x0001032d2860) */
/* WARNING: Removing unreachable block (ram,0x0001032d2988) */

void FUN_1032d27dc(void)

{
  undefined8 *puVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  
  puVar1 = unaff_x20 + 4;
  uVar2 = *unaff_x20;
  func_0x0001007d6c6c(1,0xd000000000000018,0x800000010f13b390,uVar2,&PTR_DAT_1106386d0);
  func_0x000107c61618();
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1032d2658();
    func_0x000107c526c0(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  func_0x000104366fc4(0xd00000000000002c,0x800000010f13b3b0,uVar2,&PTR_DAT_1106386d0);
  return;
}



/* Entry: 1032d29e0; end: 1032d2a3b;  */

void FUN_1032d29e0(void)

{
  long unaff_x20;
  
  FUN_1032d2a44(unaff_x20 + 0x10);
  func_0x000107c61610(unaff_x20 + 0x20);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1032d2a3c; end: 1032d2a43;  */

void FUN_1032d2a3c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x0001007d6c6c(1,0xd000000000000014,0x800000010f13b400,*(undefined8 *)(unaff_x20 + 0x18),
                      &PTR_DAT_1106386d0);
  func_0x000107c61428(lVar1 + 0x10,auStack_38,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    lVar2 = lVar1 + 0x10;
    func_0x000107c61618();
    func_0x000107c61574(lVar1);
    if (lVar2 != 0) {
      FUN_1032ddb30();
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 1032d2a44; end: 1032d2a67;  */

undefined8 FUN_1032d2a44(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1032d2a68; end: 1032d2c63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032d2a68(undefined8 *param_1,uint param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 uVar3;
  uint uVar4;
  code *pcVar5;
  long unaff_x20;
  undefined8 uVar6;
  ulong uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  ulong uStack_50;
  undefined4 uStack_48;
  
  uVar6 = *(undefined8 *)(*(long *)(unaff_x20 + 0x20) + _DAT_112f55ce8);
  func_0x000107c6157c(uVar6);
  func_0x0001000d224c(&uStack_80);
  func_0x000107c61574(uVar6);
  uVar6 = uStack_80;
  uVar4 = param_2 >> 0xc & 3;
  if (uVar4 == 0) {
    FUN_1032d2c64(&uStack_80,param_2 >> 8 & 0xff,(param_2 & 0xff) == 0);
    auVar2._8_8_ = uStack_68;
    auVar2._0_8_ = uStack_70;
    auVar14._8_8_ = uStack_68;
    auVar14._0_8_ = uStack_70;
    uVar15 = auStack_60._0_8_;
    auVar1._8_8_ = lStack_78;
    auVar1._0_8_ = uStack_80;
    auVar13._8_8_ = lStack_78;
    auVar13._0_8_ = uStack_80;
    auVar12 = NEON_ext(auStack_60,auStack_60,8,1);
    uVar17 = auVar12._0_8_;
    auVar14 = NEON_ext(auVar14,auVar2,8,1);
    auVar13 = NEON_ext(auVar13,auVar1,8,1);
    uVar11 = auVar13._0_8_;
    uVar16 = auVar14._0_8_;
    uVar8 = (undefined1)uStack_48;
    uVar3 = (undefined1)((uint)uStack_48 >> 8);
    uVar9 = (undefined1)((uint)uStack_48 >> 0x10);
    uVar10 = (undefined1)((uint)uStack_48 >> 0x18);
    func_0x000107c615e8(uVar6);
    goto LAB_1032d2c2c;
  }
  if (uVar4 == 1) {
    func_0x000107c615e8(uStack_80);
    uVar7 = 0;
    uVar3 = (param_2 & 0xff) == 0;
    uVar9 = 0;
LAB_1032d2ba8:
    uVar8 = 0;
  }
  else {
    if ((param_2 & 0xffff) - 0x2000 < 2) {
      func_0x000107c614f0();
      uVar15 = uVar6;
      FUN_1032d42fc();
      uVar7 = (ulong)((uint)uVar15 & 1);
      (**(code **)(lStack_78 + 0x18))(uVar7,uVar6,lStack_78);
      func_0x000107c615e8(uStack_80);
      uVar3 = false;
      uVar9 = 1;
      goto LAB_1032d2ba8;
    }
    if ((param_2 & 0xffff) == 0x2100) {
      func_0x000107c614f0();
      uVar15 = uVar6;
      FUN_1032d42fc();
      uVar4 = (uint)uVar15;
      pcVar5 = *(code **)(lStack_78 + 0x20);
    }
    else {
      func_0x000107c614f0();
      uVar15 = uVar6;
      FUN_1032d42fc();
      uVar4 = (uint)uVar15;
      pcVar5 = *(code **)(lStack_78 + 0x18);
    }
    uVar7 = (ulong)(uVar4 & 1);
    (*pcVar5)(uVar7,uVar6,lStack_78);
    func_0x000107c615e8(uStack_80);
    uVar8 = 1;
    uVar3 = false;
    uVar9 = 1;
  }
  uVar10 = 0;
  uVar11 = 0;
  uStack_80 = 0x3ff0000000000000;
  uStack_70 = 0;
  uVar16 = 0x3ff0000000000000;
  uVar15 = 0;
  uVar17 = 0;
  uStack_50 = uVar7;
LAB_1032d2c2c:
  param_1[1] = uVar11;
  *param_1 = uStack_80;
  param_1[3] = uVar16;
  param_1[2] = uStack_70;
  param_1[5] = uVar17;
  param_1[4] = uVar15;
  param_1[6] = uStack_50;
  *(uint *)(param_1 + 7) = CONCAT13(uVar10,CONCAT12(uVar9,CONCAT11(uVar3,uVar8)));
  return;
}



/* Entry: 1032d2c64; end: 1032d2ea7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032d2c64(ulong *param_1,uint param_2,byte param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulong uVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  code *pcVar14;
  long unaff_x20;
  undefined8 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  ulong uStack_e0;
  ulong uStack_d0;
  ulong uStack_c0;
  ulong uStack_b0;
  ulong uStack_a0;
  ulong uStack_90;
  ulong uStack_80;
  long lStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  
  uVar15 = *(undefined8 *)(*(long *)(unaff_x20 + 0x20) + _DAT_112f55ce8);
  func_0x000107c6157c(uVar15);
  func_0x0001000d224c(&uStack_80);
  func_0x000107c61574(uVar15);
  lVar10 = lStack_78;
  uVar9 = uStack_80;
  uVar11 = param_2 >> 6 & 3;
  if (uVar11 == 0) {
    uVar13 = uVar9;
    if ((param_2 & 0xff) == 1) {
      FUN_1032d3ab8(&uStack_80);
      auVar7._8_8_ = uStack_68;
      auVar7._0_8_ = uStack_70;
      auVar6._8_8_ = uStack_68;
      auVar6._0_8_ = uStack_70;
      auVar3._8_8_ = lStack_78;
      auVar3._0_8_ = uStack_80;
      auVar19._8_8_ = lStack_78;
      auVar19._0_8_ = uStack_80;
      uStack_a0 = uStack_80;
      uStack_90 = auStack_60._0_8_;
      auVar18 = NEON_ext(auStack_60,auStack_60,8,1);
      uStack_c0 = auVar18._0_8_;
      uStack_b0 = uStack_70;
      auVar20 = NEON_ext(auVar6,auVar7,8,1);
      auVar18 = NEON_ext(auVar19,auVar3,8,1);
      uStack_e0 = auVar20._0_8_;
      uStack_d0 = auVar18._0_8_;
      func_0x000107c614f0();
      uVar12 = uVar13;
      FUN_1032d42fc();
      uVar11 = (uint)uVar12;
      pcVar14 = *(code **)(lVar10 + 0x20);
    }
    else {
      FUN_1032d3ab8(&uStack_80);
      auVar8._8_8_ = uStack_68;
      auVar8._0_8_ = uStack_70;
      auVar21._8_8_ = uStack_68;
      auVar21._0_8_ = uStack_70;
      auVar20._8_8_ = lStack_78;
      auVar20._0_8_ = uStack_80;
      auVar18._8_8_ = lStack_78;
      auVar18._0_8_ = uStack_80;
      uStack_a0 = uStack_80;
      uStack_90 = auStack_60._0_8_;
      auVar19 = NEON_ext(auStack_60,auStack_60,8,1);
      uStack_c0 = auVar19._0_8_;
      uStack_b0 = uStack_70;
      auVar21 = NEON_ext(auVar21,auVar8,8,1);
      auVar18 = NEON_ext(auVar18,auVar20,8,1);
      uStack_e0 = auVar21._0_8_;
      uStack_d0 = auVar18._0_8_;
      func_0x000107c614f0();
      uVar12 = uVar13;
      FUN_1032d42fc();
      uVar11 = (uint)uVar12;
      pcVar14 = *(code **)(lVar10 + 0x18);
    }
    uVar12 = (ulong)(uVar11 & 1);
    (*pcVar14)(uVar12,uVar13,lVar10);
    uVar16 = 1;
    uVar17 = 1;
  }
  else if ((uVar11 == 1) && ((param_2 & 1) != 0)) {
    FUN_1032d3ab8(&uStack_80);
    auVar5._8_8_ = uStack_68;
    auVar5._0_8_ = uStack_70;
    auVar4._8_8_ = uStack_68;
    auVar4._0_8_ = uStack_70;
    auVar2._8_8_ = lStack_78;
    auVar2._0_8_ = uStack_80;
    auVar1._8_8_ = lStack_78;
    auVar1._0_8_ = uStack_80;
    uStack_a0 = uStack_80;
    uStack_90 = auStack_60._0_8_;
    auVar18 = NEON_ext(auStack_60,auStack_60,8,1);
    uStack_c0 = auVar18._0_8_;
    uStack_b0 = uStack_70;
    auVar20 = NEON_ext(auVar4,auVar5,8,1);
    auVar18 = NEON_ext(auVar1,auVar2,8,1);
    uStack_e0 = auVar20._0_8_;
    uStack_d0 = auVar18._0_8_;
    uVar12 = uVar9;
    func_0x000107c614f0();
    (**(code **)(lVar10 + 0x10))();
    uVar17 = 0;
    uVar16 = 1;
  }
  else {
    uVar13 = uStack_80;
    func_0x000107c614f0();
    uVar12 = uVar13;
    FUN_1032d42fc();
    uVar12 = (ulong)((uint)uVar12 & 1);
    (**(code **)(lStack_78 + 0x18))(uVar12,uVar13,lStack_78);
    uVar16 = 0;
    uVar17 = 0;
    uStack_d0 = 0;
    uStack_a0 = 0x3ff0000000000000;
    uStack_b0 = 0;
    uStack_e0 = 0x3ff0000000000000;
    uStack_90 = 0;
    uStack_c0 = 0;
  }
  func_0x000107c615e8(uVar9);
  param_1[1] = uStack_d0;
  *param_1 = uStack_a0;
  param_1[3] = uStack_e0;
  param_1[2] = uStack_b0;
  param_1[5] = uStack_c0;
  param_1[4] = uStack_90;
  param_1[6] = uVar12;
  *(undefined1 *)(param_1 + 7) = uVar16;
  *(byte *)((long)param_1 + 0x39) = param_3 & 1;
  *(undefined1 *)((long)param_1 + 0x3a) = 0;
  *(undefined1 *)((long)param_1 + 0x3b) = uVar17;
  return;
}



/* Entry: 1032d2ea8; end: 1032d31a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032d2ea8(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 *unaff_x20;
  long lVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  uint uStack_e8;
  undefined2 auStack_e0 [28];
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined2 uStack_64;
  undefined1 uStack_62;
  undefined1 uStack_61;
  
  uVar11 = *unaff_x20;
  uVar9 = param_1 >> 0x10 & 0xffff;
  uStack_a0 = 0;
  uStack_98 = 0xe000000000000000;
  func_0x000107c602fc(0x2b);
  func_0x000107c5fb78(0xd000000000000029,0x800000010f13b420);
  iVar8 = (int)uVar9;
  uVar1 = (undefined2)(param_1 >> 0x10);
  auStack_e0[0] = uVar1;
  func_0x000107c603d0(auStack_e0,&uStack_a0,&UNK_1106390f8,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  uVar5 = uStack_98;
  func_0x0001007d6c6c(1,uStack_a0,uStack_98,uVar11,&PTR_DAT_110638690);
  func_0x000107c6142c(uVar5);
  uVar10 = (uint)param_1;
  uVar2 = uVar10 >> 0x1c & 3;
  if ((uVar2 == 0) &&
     ((uVar10 >> 0x1e == 0 || ((uVar10 >> 0x1e == 1 && ((uVar10 >> 0x18 & 1) != 0)))))) {
    lVar7 = unaff_x20[4];
    FUN_1032d5d74();
    uVar5 = *(undefined8 *)(lVar7 + _DAT_112f55cf8);
    func_0x000107c5c42c(uVar5);
    func_0x000107c61180();
    func_0x000107c4abfc();
    func_0x000107c61170(uVar5);
  }
  FUN_1032d2a68(&uStack_120,uVar9);
  uVar3 = uVar10 >> 0xc & 3;
  if ((uVar3 < 2) || ((uVar10 & 0xffff) != 0x2001)) {
    bVar4 = (uVar10 & 0xffff) == 0x2000 && uVar3 == 2;
    uVar10 = (uint)bVar4;
    uVar3 = (uint)bVar4;
    if (1 < uVar2) goto LAB_1032d3008;
LAB_1032d3028:
    uStack_61 = 0;
    uVar10 = uStack_e8 & 0xff & uVar10;
    if ((((uStack_e8 & 1) != 0) || (iVar8 != 0x2000)) || (uVar2 != 2)) goto LAB_1032d306c;
  }
  else {
    uVar10 = 1;
    uVar3 = 1;
    if (uVar2 < 2) goto LAB_1032d3028;
LAB_1032d3008:
    uVar10 = uVar3;
    if (iVar8 != 0x2001) goto LAB_1032d3028;
    uStack_61 = 0;
    if ((uStack_e8 & 1) != 0) {
      uVar10 = uStack_e8 & 0xff & uVar10;
      goto LAB_1032d306c;
    }
    uVar10 = 0;
  }
  FUN_1032d2a68(auStack_e0,param_1);
  func_0x0001032d3274(auStack_e0);
  uStack_61 = uStack_a8;
LAB_1032d306c:
  uStack_98 = uStack_118;
  uStack_a0 = uStack_120;
  uStack_88 = uStack_108;
  uStack_90 = uStack_110;
  uStack_80 = uStack_100;
  uStack_62 = (undefined1)uVar10;
  uStack_64 = uVar1;
  func_0x0001032d322c(&uStack_120,&uStack_160);
  FUN_1032d31a8(&uStack_120);
  func_0x0001032d3274(&uStack_120);
  if (uVar10 != 0) {
    lVar7 = unaff_x20[4];
    FUN_1032d5d74();
    if ((CONCAT44(uStack_ec,uStack_f0) != 0) && (*(long *)(lVar7 + _DAT_112f55d00) != 0)) {
      func_0x000107c55258();
    }
  }
  FUN_1032d329c(&uStack_160,&uStack_a0);
  puVar6 = &UNK_110638220;
  func_0x000107c613fc(&UNK_110638220,0x30,7);
  *(undefined8 *)(puVar6 + 0x18) = uStack_138;
  *(undefined8 *)(puVar6 + 0x10) = uStack_140;
  *(undefined8 *)(puVar6 + 0x20) = param_2;
  *(undefined8 *)(puVar6 + 0x28) = param_3;
  func_0x000107c6157c(uStack_138);
  func_0x000100b64c10(param_2,param_3);
  FUN_1032d3634(uStack_160,uStack_158,uStack_150,uStack_148,FUN_1032d35f8,puVar6);
  func_0x000107c61574(uStack_158);
  func_0x000107c61574(uStack_148);
  func_0x000107c61574(uStack_138);
  func_0x000107c61574(puVar6);
  func_0x0001032d3274(&uStack_120);
  return;
}



/* Entry: 1032d31a8; end: 1032d322b;  */

/* WARNING: Possible PIC construction at 0x0001032d31e0: Changing call to branch */

void FUN_1032d31a8(long param_1)

{
  byte bVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar2 = unaff_x20 + 0x30;
  func_0x000107c61618();
  if (lVar2 == 0) {
    FUN_1032d2658();
    bVar1 = *(byte *)(param_1 + 0x39);
    func_0x000107c550d8();
    uVar3 = 0x3ff0000000000000;
    if ((bVar1 & 1) == 0) {
      uVar3 = 0;
    }
    func_0x000107c526c0(uVar3,lVar2);
  }
  else {
    func_0x000107c550d8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1032d322c; end: 1032d329b;  */

undefined8 * FUN_1032d322c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar3 = param_1[2];
  uVar5 = param_1[5];
  uVar4 = param_1[4];
  param_2[3] = param_1[3];
  param_2[2] = uVar3;
  param_2[5] = uVar5;
  param_2[4] = uVar4;
  param_2[1] = uVar2;
  *param_2 = uVar1;
  uVar1 = param_1[6];
  param_2[6] = uVar1;
  *(undefined4 *)(param_2 + 7) = *(undefined4 *)(param_1 + 7);
  func_0x000107c61174(uVar1);
  return param_2;
}



/* Entry: 1032d329c; end: 1032d35f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032d329c(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  undefined2 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  long unaff_x20;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined1 auStack_f0 [64];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  lVar6 = _DAT_112f55cf8;
  lVar5 = _DAT_112f55cf0;
  uStack_a8 = param_2[1];
  uStack_b0 = *param_2;
  uStack_98 = param_2[3];
  uStack_a0 = param_2[2];
  uStack_88 = param_2[5];
  uStack_90 = param_2[4];
  lVar17 = param_2[6];
  bVar1 = *(byte *)(param_2 + 7);
  bVar2 = *(byte *)((long)param_2 + 0x39);
  uVar3 = *(ushort *)((long)param_2 + 0x3a);
  lVar16 = *(long *)(unaff_x20 + 0x20);
  puVar14 = *(undefined8 **)(lVar16 + _DAT_112f55cf8);
  uVar4 = *(undefined2 *)((long)param_2 + 0x3c);
  puVar15 = *(undefined8 **)(lVar16 + _DAT_112f55cf0);
  puVar7 = &UNK_1106382c0;
  func_0x000107c613fc(&UNK_1106382c0,0x18,7);
  *(undefined8 *)(puVar7 + 0x10) = 0;
  if (lVar17 == 0) {
    func_0x000107c61174(lVar16);
    func_0x000107c61174(puVar14);
    puVar8 = puVar15;
    func_0x000107c61174();
  }
  else {
    puVar8 = param_2;
    if ((*(byte *)((long)param_2 + 0x3e) & 1) == 0) {
      if ((*(byte *)((long)param_2 + 0x3f) & 1) == 0) {
        puVar8 = puVar14;
        func_0x000107c61174();
        func_0x000107c61174(lVar16);
        func_0x000107c61174();
        func_0x000107c61174(puVar15);
        FUN_1032d3be4(param_2,auStack_f0);
        lVar9 = lVar17;
        FUN_1032d3c18(lVar17,puVar8);
        func_0x000107c61170();
        *(long *)(puVar7 + 0x10) = lVar9;
      }
      else {
        func_0x000107c61174(lVar16);
        func_0x000107c61174(puVar14);
        func_0x000107c61174(puVar15);
        FUN_1032d3be4(param_2,auStack_f0);
      }
    }
    else {
      func_0x000107c61174(lVar16);
      func_0x000107c61174(puVar14);
      func_0x000107c61174(puVar15);
      FUN_1032d3be4(param_2,auStack_f0);
    }
  }
  FUN_1032d2658();
  if ((bVar2 & 1) != 0) {
    puVar10 = puVar8;
    FUN_1032d2658();
    func_0x000107c550d8();
    func_0x000107c61170(puVar10);
  }
  if ((bVar1 & 1) != 0) {
    FUN_1032d5d74();
    func_0x000107c550d8(*(undefined8 *)(lVar16 + lVar6));
  }
  if ((uVar3 >> 8 & 1) != 0) {
    func_0x000107c550d8(*(undefined8 *)(lVar16 + lVar5));
  }
  uVar18 = 0;
  if (((bVar1 | *(byte *)((long)param_2 + 0x3f)) & 1) != 0) {
    uVar18 = 0x3ff0000000000000;
  }
  puVar11 = &UNK_1106382e8;
  func_0x000107c613fc(&UNK_1106382e8,0x78,7);
  *(undefined8 *)(puVar11 + 0x18) = uVar18;
  *(undefined8 *)(puVar11 + 0x30) = uStack_a8;
  *(undefined8 *)(puVar11 + 0x28) = uStack_b0;
  *(undefined8 **)(puVar11 + 0x10) = puVar14;
  *(undefined8 **)(puVar11 + 0x20) = puVar15;
  *(undefined8 *)(puVar11 + 0x40) = uStack_98;
  *(undefined8 *)(puVar11 + 0x38) = uStack_a0;
  *(undefined8 *)(puVar11 + 0x50) = uStack_88;
  *(undefined8 *)(puVar11 + 0x48) = uStack_90;
  *(long *)(puVar11 + 0x58) = lVar17;
  puVar11[0x60] = bVar1;
  puVar11[0x61] = bVar2;
  *(ushort *)(puVar11 + 0x62) = uVar3;
  *(undefined **)(puVar11 + 0x68) = puVar7;
  *(undefined8 **)(puVar11 + 0x70) = puVar8;
  puVar12 = &UNK_110638310;
  func_0x000107c613fc(&UNK_110638310,0x18,7);
  func_0x000107c61644(puVar12 + 0x10,unaff_x20);
  puVar13 = &UNK_110638338;
  func_0x000107c613fc(&UNK_110638338,0x78,7);
  *(undefined8 *)(puVar13 + 0x20) = uStack_a8;
  *(undefined8 *)(puVar13 + 0x18) = uStack_b0;
  *(undefined8 **)(puVar13 + 0x10) = puVar14;
  *(undefined8 *)(puVar13 + 0x30) = uStack_98;
  *(undefined8 *)(puVar13 + 0x28) = uStack_a0;
  *(undefined8 *)(puVar13 + 0x40) = uStack_88;
  *(undefined8 *)(puVar13 + 0x38) = uStack_90;
  *(long *)(puVar13 + 0x48) = lVar17;
  puVar13[0x50] = bVar1;
  puVar13[0x51] = bVar2;
  *(ushort *)(puVar13 + 0x52) = uVar3;
  *(undefined8 **)(puVar13 + 0x58) = puVar15;
  *(undefined **)(puVar13 + 0x60) = puVar12;
  *(undefined2 *)(puVar13 + 0x68) = uVar4;
  *(long *)(puVar13 + 0x70) = lVar16;
  func_0x000107c61174(puVar14);
  func_0x000107c61174(puVar15);
  FUN_1032d3be4(param_2,auStack_f0);
  func_0x000107c6157c(puVar7);
  *param_1 = FUN_1032d3bac;
  param_1[1] = puVar11;
  param_1[2] = 0x1032d3bc4;
  param_1[3] = puVar7;
  param_1[4] = 0x1032d3bcc;
  param_1[5] = puVar13;
  return;
}



/* Entry: 1032d35f8; end: 1032d3633;  */

void FUN_1032d35f8(void)

{
  code *pcVar1;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x20);
  (**(code **)(unaff_x20 + 0x10))(*(undefined8 *)(unaff_x20 + 0x18));
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  return;
}



/* Entry: 1032d3634; end: 1032d37ff;  */

void FUN_1032d3634(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar5 = &puStack_a0;
  ppuVar7 = &puStack_a0;
  lVar2 = *(long *)(unaff_x20 + 0x28);
  if (lVar2 != 0) {
    func_0x000107c61174();
    lVar3 = lVar2;
    func_0x000107c4a360();
    if ((int)lVar3 != 0) {
      func_0x000107c5be08(lVar2);
      func_0x000107c43590(lVar2);
    }
    func_0x000107c61170(lVar2);
  }
  puVar4 = PTR__OBJC_CLASS___UIViewPropertyAnimator_1126b0db0;
  func_0x000107c610f8();
  func_0x000107c4670c(0x3fc999999999999a);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_110638238;
  pcStack_80 = (code *)param_1;
  puStack_78 = (undefined *)param_2;
  func_0x000107c60bc4(&puStack_a0);
  puVar6 = puStack_78;
  func_0x000107c6157c(param_2);
  func_0x000107c61574(puVar6);
  func_0x000107c3d5ac(puVar4);
  func_0x000107c60bd0(ppuVar5);
  puVar6 = &UNK_110638270;
  func_0x000107c613fc(&UNK_110638270,0x30,7);
  *(undefined8 *)(puVar6 + 0x10) = param_3;
  *(undefined8 *)(puVar6 + 0x18) = param_4;
  *(undefined8 *)(puVar6 + 0x20) = param_5;
  *(undefined8 *)(puVar6 + 0x28) = param_6;
  pcStack_80 = FUN_1032d381c;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1023dda20;
  puStack_88 = &UNK_110638288;
  puStack_78 = puVar6;
  func_0x000107c60bc4(&puStack_a0);
  puVar6 = puStack_78;
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_6);
  func_0x000107c61574(puVar6);
  func_0x000107c3d62c(puVar4);
  func_0x000107c60bd0(ppuVar7);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined **)(unaff_x20 + 0x28) = puVar4;
  func_0x000107c61174(puVar4);
  func_0x000107c61170(uVar8);
  func_0x000107c5ba5c(puVar4);
  func_0x000107c61170(puVar4);
  return;
}



/* Entry: 1032d3800; end: 1032d381b;  */

void FUN_1032d3800(long param_1,long param_2)

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



/* Entry: 1032d381c; end: 1032d385b;  */

void FUN_1032d381c(long param_1)

{
  code *pcVar1;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x20);
  (**(code **)(unaff_x20 + 0x10))(*(undefined8 *)(unaff_x20 + 0x18));
  if (param_1 == 0) {
    (*pcVar1)();
  }
  return;
}



/* Entry: 1032d385c; end: 1032d391b;  */

void FUN_1032d385c(undefined8 param_1,undefined8 param_2,undefined8 *param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000107c526c0();
  uVar1 = 0x3ff0000000000000;
  if ((*(byte *)((long)param_3 + 0x3b) & 1) == 0) {
    uVar1 = 0;
  }
  func_0x000107c526c0(uVar1,param_2);
  uStack_78 = param_3[1];
  uStack_80 = *param_3;
  uStack_68 = param_3[3];
  uStack_70 = param_3[2];
  uStack_58 = param_3[5];
  uStack_60 = param_3[4];
  func_0x000107c5a03c(param_1);
  func_0x000107c61428(param_4 + 0x10,&uStack_80,0,0);
  if (*(long *)(param_4 + 0x10) != 0) {
    func_0x000107c526c0(0x3ff0000000000000);
  }
  uVar1 = 0x3ff0000000000000;
  if ((*(byte *)((long)param_3 + 0x39) & 1) == 0) {
    uVar1 = 0;
  }
  func_0x000107c526c0(uVar1,param_5);
  return;
}



/* Entry: 1032d391c; end: 1032d395f;  */

void FUN_1032d391c(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c4ff34();
  }
  return;
}



/* Entry: 1032d3960; end: 1032d3ab7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032d3960(undefined8 param_1,undefined8 *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_c8 [24];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  bVar1 = *(byte *)(param_2 + 7);
  uVar4 = 0x3ff0000000000000;
  if ((bVar1 & 1) == 0) {
    uVar4 = 0;
  }
  func_0x000107c526c0(uVar4);
  func_0x000107c550d8(param_1);
  uVar4 = 0x3ff0000000000000;
  if ((*(byte *)((long)param_2 + 0x3b) & 1) == 0) {
    uVar4 = 0;
  }
  func_0x000107c526c0(uVar4,param_3);
  func_0x000107c550d8(param_3);
  uStack_a8 = param_2[1];
  uStack_b0 = *param_2;
  uStack_98 = param_2[3];
  uStack_a0 = param_2[2];
  uStack_88 = param_2[5];
  uStack_90 = param_2[4];
  func_0x000107c5a03c(param_1);
  func_0x000107c61428(param_4 + 0x10,auStack_c8,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61648();
  if (param_4 == 0) {
LAB_1032d3a44:
    lVar2 = param_2[6];
    if (lVar2 == 0) goto LAB_1032d3a88;
    func_0x000107c61174();
  }
  else {
    FUN_1032d2a68(&uStack_b0,param_5);
    func_0x000107c61574(param_4);
    lVar2 = lStack_80;
    if (lStack_80 == 0) goto LAB_1032d3a44;
  }
  lVar3 = *(long *)(param_6 + _DAT_112f55d00);
  if (lVar3 != 0) {
    func_0x000107c61174();
    func_0x000107c55258();
    func_0x000107c61170(lVar3);
  }
  func_0x000107c61170(lVar2);
LAB_1032d3a88:
  if ((bVar1 & 1) == 0) {
    func_0x0001032d6254();
  }
  return;
}



/* Entry: 1032d3ab8; end: 1032d3bab;  */

void FUN_1032d3ab8(undefined8 *param_1,double param_2)

{
  long unaff_x20;
  double dVar1;
  double dVar2;
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
  
  if (*(char *)(unaff_x20 + 0x38) == '\x01') {
    FUN_1032d4b80();
    dVar1 = param_2;
    FUN_1032d4d44();
  }
  else {
    FUN_1032d4fd4();
    dVar1 = param_2;
    FUN_1032d5184();
  }
  dVar2 = dVar1;
  FUN_1032d6540();
  uStack_70 = 0x3ff0000000000000;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0x3ff0000000000000;
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x000107c6089c(&uStack_a0,0,dVar1,&uStack_70);
  uStack_68 = uStack_98;
  uStack_70 = uStack_a0;
  uStack_58 = uStack_88;
  uStack_60 = uStack_90;
  uStack_48 = uStack_78;
  uStack_50 = uStack_80;
  func_0x000107c60898(&uStack_a0,param_2,param_2,&uStack_70);
  uStack_68 = uStack_98;
  uStack_70 = uStack_a0;
  uStack_58 = uStack_88;
  uStack_60 = uStack_90;
  uStack_48 = uStack_78;
  uStack_50 = uStack_80;
  func_0x000107c6089c(&uStack_a0,0,(1.0 - param_2) * dVar2 * -0.5,&uStack_70);
  param_1[1] = uStack_98;
  *param_1 = uStack_a0;
  param_1[3] = uStack_88;
  param_1[2] = uStack_90;
  param_1[5] = uStack_78;
  param_1[4] = uStack_80;
  return;
}



/* Entry: 1032d3bac; end: 1032d3be3;  */

void FUN_1032d3bac(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar1 = *(long *)(unaff_x20 + 0x68);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x70);
  func_0x000107c526c0(*(undefined8 *)(unaff_x20 + 0x18));
  uVar5 = 0x3ff0000000000000;
  if ((*(byte *)(unaff_x20 + 99) & 1) == 0) {
    uVar5 = 0;
  }
  func_0x000107c526c0(uVar5,uVar4);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_80 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_70 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x50);
  uStack_60 = *(undefined8 *)(unaff_x20 + 0x48);
  func_0x000107c5a03c(uVar3);
  func_0x000107c61428(lVar1 + 0x10,&uStack_80,0,0);
  if (*(long *)(lVar1 + 0x10) != 0) {
    func_0x000107c526c0(0x3ff0000000000000);
  }
  uVar3 = 0x3ff0000000000000;
  if ((*(byte *)(unaff_x20 + 0x61) & 1) == 0) {
    uVar3 = 0;
  }
  func_0x000107c526c0(uVar3,uVar2);
  return;
}



/* Entry: 1032d3be4; end: 1032d3c17;  */

undefined8 FUN_1032d3be4(undefined8 param_1,undefined8 param_2)

{
  FUN_1032d3e80(param_2,param_1,&UNK_1106383b8);
  return param_2;
}



/* Entry: 1032d3c18; end: 1032d3e7f;  */

undefined * FUN_1032d3c18(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c55258();
  func_0x000107c61174();
  func_0x000107c53840();
  func_0x000107c526c0(0,puVar1);
  func_0x000107c5a378(puVar1);
  func_0x000107c5a050(puVar1);
  func_0x000107c3d89c(param_2);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  puVar3 = puVar2;
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar3 + 0x18) = 9;
  *(undefined8 *)(puVar3 + 0x10) = 4;
  puVar4 = puVar1;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  uVar6 = param_2;
  func_0x000107c5cbe4(param_2);
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar6);
  *(undefined **)(puVar3 + 0x20) = puVar5;
  puVar4 = puVar1;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  uVar6 = param_2;
  func_0x000107c3ec1c(param_2);
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar6);
  *(undefined **)(puVar3 + 0x28) = puVar5;
  puVar4 = puVar1;
  func_0x000107c4acb0();
  func_0x000107c61180();
  uVar6 = param_2;
  func_0x000107c4acb0(param_2);
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar6);
  *(undefined **)(puVar3 + 0x30) = puVar5;
  puVar4 = puVar1;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c5ce8c(param_2);
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_2);
  *(undefined **)(puVar3 + 0x38) = puVar5;
  uVar6 = 0;
  func_0x000100847984(0);
  puVar4 = puVar3;
  func_0x000107c5fc48(puVar3,uVar6);
  func_0x000107c61574(puVar3);
  func_0x000107c3d048(puVar2);
  func_0x000107c61170(puVar4);
  return puVar1;
}



/* Entry: 1032d3e80; end: 1032d3ec3;  */

undefined8 * FUN_1032d3e80(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  uVar2 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  param_1[6] = param_2[6];
  uVar1 = *(undefined4 *)((long)param_2 + 0x3c);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  *(undefined4 *)((long)param_1 + 0x3c) = uVar1;
  func_0x000107c61174();
  return param_1;
}



/* Entry: 1032d3ec4; end: 1032d3f6f;  */

undefined8 * FUN_1032d3ec4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  *(undefined1 *)((long)param_1 + 0x39) = *(undefined1 *)((long)param_2 + 0x39);
  *(undefined1 *)((long)param_1 + 0x3a) = *(undefined1 *)((long)param_2 + 0x3a);
  *(undefined1 *)((long)param_1 + 0x3b) = *(undefined1 *)((long)param_2 + 0x3b);
  *(undefined2 *)((long)param_1 + 0x3c) = *(undefined2 *)((long)param_2 + 0x3c);
  *(undefined1 *)((long)param_1 + 0x3e) = *(undefined1 *)((long)param_2 + 0x3e);
  *(undefined1 *)((long)param_1 + 0x3f) = *(undefined1 *)((long)param_2 + 0x3f);
  return param_1;
}



/* Entry: 1032d3f70; end: 1032d3feb;  */

undefined8 * FUN_1032d3f70(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar1 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar1;
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c61170(uVar1);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  *(undefined1 *)((long)param_1 + 0x39) = *(undefined1 *)((long)param_2 + 0x39);
  *(undefined1 *)((long)param_1 + 0x3a) = *(undefined1 *)((long)param_2 + 0x3a);
  *(undefined1 *)((long)param_1 + 0x3b) = *(undefined1 *)((long)param_2 + 0x3b);
  *(undefined2 *)((long)param_1 + 0x3c) = *(undefined2 *)((long)param_2 + 0x3c);
  *(undefined1 *)((long)param_1 + 0x3e) = *(undefined1 *)((long)param_2 + 0x3e);
  *(undefined1 *)((long)param_1 + 0x3f) = *(undefined1 *)((long)param_2 + 0x3f);
  return param_1;
}



/* Entry: 1032d3fec; end: 1032d40bb;  */

int FUN_1032d3fec(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 0xc);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1032d40bc; end: 1032d40ff;  */

undefined8 * FUN_1032d40bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar1 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar1;
  param_1[6] = param_2[6];
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  func_0x000107c61174();
  return param_1;
}



/* Entry: 1032d4100; end: 1032d4193;  */

undefined8 * FUN_1032d4100(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  *(undefined1 *)((long)param_1 + 0x39) = *(undefined1 *)((long)param_2 + 0x39);
  *(undefined1 *)((long)param_1 + 0x3a) = *(undefined1 *)((long)param_2 + 0x3a);
  *(undefined1 *)((long)param_1 + 0x3b) = *(undefined1 *)((long)param_2 + 0x3b);
  return param_1;
}



/* Entry: 1032d4194; end: 1032d41af;  */

void FUN_1032d4194(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar6 = param_2[5];
  uVar5 = param_2[4];
  uVar7 = *(undefined8 *)((long)param_2 + 0x2c);
  *(undefined8 *)((long)param_1 + 0x34) = *(undefined8 *)((long)param_2 + 0x34);
  *(undefined8 *)((long)param_1 + 0x2c) = uVar7;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[5] = uVar6;
  param_1[4] = uVar5;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Entry: 1032d41b0; end: 1032d4213;  */

undefined8 * FUN_1032d41b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar1 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar1;
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c61170(uVar1);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  *(undefined1 *)((long)param_1 + 0x39) = *(undefined1 *)((long)param_2 + 0x39);
  *(undefined1 *)((long)param_1 + 0x3a) = *(undefined1 *)((long)param_2 + 0x3a);
  *(undefined1 *)((long)param_1 + 0x3b) = *(undefined1 *)((long)param_2 + 0x3b);
  return param_1;
}



/* Entry: 1032d4214; end: 1032d42fb;  */

int FUN_1032d4214(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0xf] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 0xc);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1032d42fc; end: 1032d4373;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032d42fc(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  
  lVar1 = unaff_x20 + 0x40;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + _DAT_112f56098);
    lVar2 = lVar3;
    func_0x000107c61174(lVar3);
    func_0x000107c615e8(lVar1);
    if (lVar3 != 0) {
      func_0x000107c4a4c0(lVar2);
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 1032d4374; end: 1032d43df;  */

void FUN_1032d4374(long param_1)

{
  long lVar1;
  long unaff_x20;
  
  if (param_1 != 0) {
    FUN_1032d4640();
  }
  lVar1 = *(long *)(unaff_x20 + 0x50);
  if (*(char *)(unaff_x20 + 0x58) == '\x01') {
    if (lVar1 == 0) {
      return;
    }
    func_0x000107c61174();
    func_0x0001032d4750();
  }
  else {
    if (lVar1 == 0) {
      return;
    }
    func_0x000107c61174();
    FUN_1032d4640();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1032d43e0; end: 1032d43eb;  */

void FUN_1032d43e0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1032d43ec; end: 1032d450b;  */

void FUN_1032d43ec(undefined8 *param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  uVar2 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    func_0x000107c61428(param_4 + 0x10,auStack_80,0,0);
    param_4 = param_4 + 0x10;
    func_0x000107c61618(param_4);
    FUN_1032d4a34(0);
    func_0x000107c610f8();
    func_0x000107c61174(uVar2);
    func_0x000107c61174();
    uVar1 = param_3;
    FUN_1032d4a5c();
    func_0x000107c61170(param_3);
    func_0x000107c61170(uVar2);
    func_0x000107c615e8(param_4);
    uVar2 = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(param_2 + 0x50) = uVar1;
    func_0x000107c61174(uVar1);
    FUN_1032d4374(uVar2);
    func_0x000107c61574(param_2);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 1032d450c; end: 1032d457f;  */

void FUN_1032d450c(uint param_1)

{
  long lVar1;
  long unaff_x20;
  
  FUN_1032d2ea8();
  if (param_1 >> 0x11 == 0x1080) {
    *(undefined1 *)(unaff_x20 + 0x58) = 1;
    lVar1 = *(long *)(unaff_x20 + 0x50);
    if (lVar1 == 0) {
      return;
    }
    func_0x000107c61174();
    func_0x0001032d4750();
  }
  else {
    *(undefined1 *)(unaff_x20 + 0x58) = 0;
    lVar1 = *(long *)(unaff_x20 + 0x50);
    if (lVar1 == 0) {
      return;
    }
    func_0x000107c61174();
    func_0x0001032d4640();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1032d4580; end: 1032d461b;  */

void FUN_1032d4580(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61610(unaff_x20 + 0x30);
  FUN_1032d461c(unaff_x20 + 0x40);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  return;
}



/* Entry: 1032d461c; end: 1032d463f;  */

undefined8 FUN_1032d461c(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1032d4640; end: 1032d48df;  */

/* WARNING: Possible PIC construction at 0x0001032d46e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032d46ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032d4640(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c614f0();
  puVar2 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x000107c61168();
  func_0x000107c4a02c();
  if (((ulong)puVar2 & 1) == 0) {
    func_0x000104366fc4(0xd00000000000002c,0x800000010f13b4b0,lVar1,&PTR_DAT_1106385b0);
  }
  else {
    lVar3 = unaff_x20 + _DAT_112f55c98;
    func_0x000107c61618();
    if (lVar3 != 0) {
      if (*(long *)(unaff_x20 + _DAT_112f55ca8) != 0) {
        func_0x000107c61174(*(long *)(unaff_x20 + _DAT_112f55ca8));
        func_0x0001007d6c6c(1,0xd000000000000026,0x800000010f13b4e0,lVar1,&PTR_DAT_1106385b0);
        func_0x000107c4ff3c(lVar3);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)();
      return;
    }
  }
  return;
}



/* Entry: 1032d48e0; end: 1032d496b; -[_TtC16LensFullScreenUX25LensViewTouchDownDetector onTouchDown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032d48e0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61174();
  func_0x0001007d6c6c(1,0x6863756f74206e6f,0xed00006e776f6420,lVar1,&PTR_DAT_1106385b0);
  lVar1 = param_1 + _DAT_112f55c90;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_1032daf54();
    func_0x000107c615e8(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1032d496c; end: 1032d49cb; -[_TtC16LensFullScreenUX25LensViewTouchDownDetector init] */

void FUN_1032d496c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensFullScreenUX.LensViewTouchDownDetector",0x2a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032d4998);
  (*pcVar1)();
}


