/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10110e7a0; end: 10110e80b;  */

void FUN_10110e7a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x78) = param_1;
  *(undefined8 *)(unaff_x22 + 0x80) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x88) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10110e80c,uVar1,uVar2);
  return;
}



/* Entry: 10110e80c; end: 10110e91b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10110e80c(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x78);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x88));
  func_0x000107c61428(lVar3 + 0x10,unaff_x22 + 0x60,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    uVar2 = *(undefined8 *)(unaff_x22 + 0x80);
    func_0x000101114dfc(lVar3 + _DAT_112d5e728,unaff_x22 + 0x38);
    func_0x000107c61170(lVar3);
    FUN_100ca3f8c(unaff_x22 + 0x38,unaff_x22 + 0x10);
    lVar3 = unaff_x22 + 0x10;
    func_0x0001000a8868(lVar3,*(undefined8 *)(unaff_x22 + 0x28));
    FUN_101120558();
    lVar1 = lVar3;
    FUN_101064e0c();
    func_0x000107c613fc();
    *(undefined8 *)(lVar1 + 0x18) = 3;
    *(undefined8 *)(lVar1 + 0x10) = 1;
    *(long *)(lVar1 + 0x20) = lVar3;
    func_0x000107c61174(lVar3);
    FUN_1011222f4(lVar1,uVar2,0,0);
    func_0x000107c61574(lVar1);
    func_0x000107c61170(lVar3);
    func_0x0001000834e4(unaff_x22 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010110e918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10110e91c; end: 10110edcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10110e91c(undefined4 param_1)

{
  ulong uVar1;
  undefined1 uVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined **ppuVar9;
  long extraout_x8;
  ulong uVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong *puVar13;
  long unaff_x20;
  long lVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  undefined1 auStack_f0 [8];
  ulong uStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined4 uStack_c4;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar16 = unaff_x20 + _DAT_112d5e6b0;
  func_0x000107c61618();
  lVar14 = _DAT_112d5e7d0;
  if (lVar16 != 0) {
    func_0x000107c61428(unaff_x20 + _DAT_112d5e7d0,auStack_78,0,0);
    FUN_101113bfc(unaff_x20 + lVar14,&puStack_c0,0x112d5e670,&UNK_10d9262b0);
    if (puStack_a8 == (undefined *)0x0) {
      func_0x000107c61170(lVar16);
      func_0x000101113c44(&puStack_c0,0x112d5e670,&UNK_10d9262b0);
    }
    else {
      func_0x0001000a8868(&puStack_c0,puStack_a8);
      lVar14 = *(long *)((long)puStack_a8 + -8);
      (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
      (**(code **)(lVar14 + 0x10))(auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
      func_0x000101113c44(&puStack_c0,0x112d5e670,&UNK_10d9262b0);
      puVar6 = puStack_a8;
      FUN_101141bc8(puStack_a8,pcStack_a0);
      (**(code **)(lVar14 + 8))(auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),puStack_a8);
      if (puVar6 != (undefined *)0x0) {
        lStack_d0 = (long)puVar6;
        uStack_c4 = param_1;
        func_0x000107c439a4();
        func_0x000107c61180();
        lVar4 = (long)puVar6;
        func_0x000107c5fc54();
        func_0x000107c61170(puVar6);
        lVar14 = _DAT_112d5e7d8;
        uVar17 = *(ulong *)(lVar4 + 0x10);
        func_0x000107c61428(unaff_x20 + _DAT_112d5e7d8,auStack_90,0,0);
        puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if (uVar17 != 0) {
          uVar10 = 0;
          lStack_e0 = lVar4 + 0x28;
          uStack_e8 = uVar17 - 1;
          lStack_d8 = lVar16;
LAB_10110eaa8:
          puVar13 = (ulong *)(lStack_e0 + uVar10 * 0x10);
          uVar15 = uVar10;
          do {
            if (*(ulong *)(lVar4 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10110ed64);
              (*pcVar3)();
            }
            lVar16 = *(long *)(unaff_x20 + lVar14);
            if (*(long *)(lVar16 + 0x10) != 0) {
              uVar10 = puVar13[-1];
              uVar1 = *puVar13;
              func_0x000107c61434(uVar1);
              func_0x000107c61434(lVar16);
              uVar12 = uVar1;
              func_0x000100029284();
              if ((uVar12 & 1) != 0) goto LAB_10110eb18;
              func_0x000107c6142c(lVar16);
              func_0x000107c6142c(uVar1);
            }
            uVar15 = uVar15 + 1;
            puVar13 = puVar13 + 2;
            lVar16 = lStack_d8;
            if (uVar17 == uVar15) break;
          } while( true );
        }
LAB_10110ec18:
        func_0x000107c6142c(lVar4);
        if ((ulong)puVar6 >> 0x3e == 0) {
          puVar11 = *(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
          uVar2 = (undefined1)uStack_c4;
          lVar14 = lStack_d0;
        }
        else {
          puVar11 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar6) {
            puVar11 = puVar6;
          }
          func_0x000107c60480();
          uVar2 = (undefined1)uStack_c4;
          lVar14 = lStack_d0;
        }
        if (puVar11 != (undefined *)0x0) {
          if (((ulong)puVar6 & 0xc000000000000001) == 0) {
            if (*(long *)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10110edcc);
              (*pcVar3)();
            }
            uVar7 = *(undefined8 *)(puVar6 + 0x20);
            func_0x000107c61174();
          }
          else {
            uVar7 = 0;
            func_0x00010111c1ac(0,puVar6);
          }
          func_0x000107c6142c(puVar6);
          pcVar8 = "presentDirectionsActionSheet(for:)";
          func_0x0001000c10c0("presentDirectionsActionSheet(for:)");
          func_0x000107c61180();
          puVar6 = &UNK_110385ac8;
          func_0x000107c613fc(&UNK_110385ac8,0x18,7);
          func_0x000107c61614(puVar6 + 0x10);
          puVar11 = &UNK_110385d20;
          func_0x000107c613fc(&UNK_110385d20,0x29,7);
          *(undefined **)(puVar11 + 0x10) = puVar6;
          *(undefined8 *)(puVar11 + 0x18) = uVar7;
          *(long *)(puVar11 + 0x20) = lVar16;
          puVar11[0x28] = uVar2;
          pcStack_a0 = FUN_10111409c;
          puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_b8 = 0x42000000;
          puStack_b0 = &UNK_1000f6b44;
          puStack_a8 = &UNK_110385d38;
          ppuVar9 = &puStack_c0;
          puStack_98 = puVar11;
          func_0x000107c60bc4(ppuVar9);
          puVar6 = puStack_98;
          func_0x000107c61174(uVar7);
          func_0x000107c61174(lVar16);
          func_0x000107c61574(puVar6);
          func_0x000107c4e524(pcVar8);
          func_0x000107c60bd0(ppuVar9);
          func_0x000107c61170(lVar16);
          func_0x000107c61170(lVar14);
          func_0x000107c61170(uVar7);
          func_0x000107c615e8(pcVar8);
          return;
        }
        func_0x000107c6142c(puVar6);
        func_0x000107c61170(lVar14);
      }
      func_0x000107c61170(lVar16);
    }
  }
  return;
LAB_10110eb18:
  uVar7 = *(undefined8 *)(*(long *)(lVar16 + 0x38) + uVar10 * 8);
  func_0x000107c61174();
  func_0x000107c6142c(lVar16);
  func_0x000107c6142c(uVar1);
  puVar11 = puVar6;
  func_0x000107c61550();
  if ((((int)puVar11 == 0) || ((long)puVar6 < 0)) ||
     (puVar11 = puVar6, ((ulong)puVar6 >> 0x3e & 1) != 0)) {
    if ((ulong)puVar6 >> 0x3e == 0) {
      puVar5 = *(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar5 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar6) {
        puVar5 = puVar6;
      }
      func_0x000107c60480(puVar5);
    }
    puVar11 = (undefined *)0x0;
    FUN_101136b48(0,puVar5 + 1,1,puVar6);
  }
  uVar12 = (ulong)puVar11 & 0xffffffffffffff8;
  uVar1 = *(ulong *)(uVar12 + 0x10);
  puVar6 = puVar11;
  if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar1) {
    puVar6 = (undefined *)(ulong)(1 < *(ulong *)(uVar12 + 0x18));
    FUN_101136b48(puVar6,uVar1 + 1,1,puVar11);
    uVar12 = (ulong)puVar6 & 0xffffffffffffff8;
  }
  uVar10 = uVar15 + 1;
  *(ulong *)(uVar12 + 0x10) = uVar1 + 1;
  *(undefined8 *)(uVar12 + uVar1 * 8 + 0x20) = uVar7;
  lVar16 = lStack_d8;
  if (uStack_e8 == uVar15) goto LAB_10110ec18;
  goto LAB_10110eaa8;
}



/* Entry: 10110edcc; end: 10110ef6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10110edcc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_c8 [24];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long alStack_88 [3];
  undefined8 uStack_70;
  
  func_0x000107c61428(param_3 + 0x10,auStack_c8,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    func_0x000101114dfc(param_3 + _DAT_112d5e728,&uStack_b0);
    func_0x000107c61170(param_3);
    FUN_100ca3f8c(&uStack_b0,alStack_88);
    uStack_b0 = 0;
    uStack_a8 = 0xe000000000000000;
    func_0x000107c4077c(param_4);
    puVar1 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08;
    puVar4 = PTR___ss26DefaultStringInterpolationVN_11034ec00;
    func_0x000107c5fddc(&uStack_b0,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    func_0x000107c5fb78(0x202c,0xe200000000000000);
    func_0x000107c4077c(param_4);
    uVar7 = param_2;
    func_0x000107c5fddc(param_2,&uStack_b0,puVar4,puVar1);
    uVar2 = uStack_a8;
    uVar5 = uStack_b0;
    plVar3 = alStack_88;
    func_0x0001000a8868(plVar3,uStack_70);
    func_0x000107c4077c(param_4);
    func_0x000107c4077c(param_4);
    lVar6 = *plVar3;
    puVar4 = PTR_PTR_1126aead8;
    func_0x000107c610f8(PTR_PTR_1126aead8);
    func_0x000107c4807c();
    func_0x00010438ae00(param_2,uVar7,uVar5,uVar2,
                        *(undefined8 *)(&UNK_10d9258f0 + (param_6 & 0xff) * 8),puVar4,lVar6);
    func_0x000107c42c1c(*(undefined8 *)(lVar6 + 0x28));
    func_0x000107c6142c(uVar2);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar5);
    func_0x0001000834e4(alStack_88);
  }
  return;
}



/* Entry: 10110ef70; end: 10110f03b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10110ef70(undefined8 param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112d5e6f0);
  func_0x000107c5fadc();
  puVar1 = &UNK_110385ac8;
  func_0x000107c613fc(&UNK_110385ac8,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  pcStack_40 = FUN_101113fa8;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  uStack_50 = 0x100ff4e14;
  puStack_48 = &UNK_110385c98;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c4d2fc(uVar3);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10110f03c; end: 10110f1eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10110f03c(long param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if (param_1 != 0) {
      lVar6 = param_2;
      func_0x0001068751fc();
      func_0x000107c61180();
      if (lVar6 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10110f1ec);
        (*pcVar1)();
      }
      puVar2 = PTR_PTR_1126afde0;
      func_0x000107c61168();
      func_0x000107c409d8();
      func_0x000107c61180();
      func_0x000107c61170(lVar6);
      lVar6 = *(long *)(param_2 + _DAT_112d5e700);
      func_0x000107c61174();
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar6 != 0) {
        puVar3 = &UNK_110385cd0;
        func_0x000107c613fc(&UNK_110385cd0,0x20,7);
        *(long *)(puVar3 + 0x10) = lVar6;
        *(undefined **)(puVar3 + 0x18) = puVar2;
        puVar4 = &UNK_110385cf8;
        func_0x000107c613fc(&UNK_110385cf8,0x20,7);
        *(undefined **)(puVar4 + 0x10) = &UNK_10d925868;
        *(undefined **)(puVar4 + 0x18) = puVar3;
        func_0x000107c61174(puVar2);
        func_0x000107c615f0(lVar6);
        uVar5 = 0x12;
        func_0x0001001ca524(0x12,0,0x3c,4,0,0,&UNK_10d925870,puVar4,PTR___sytN_11034f1b0 + 8);
        func_0x000107c61170(puVar2);
        func_0x000107c61170(puVar2);
        func_0x000107c61170(param_2);
        func_0x000107c615e8(lVar6);
        func_0x000107c61574(puVar4);
        func_0x000107c61574(uVar5);
        return;
      }
      func_0x000107c61170(puVar2);
      func_0x000107c61170(puVar2);
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 10110f1ec; end: 10110f357;  */

/* WARNING: Possible PIC construction at 0x00010110f318: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010110f31c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10110f1ec(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar2 = unaff_x20 + _DAT_112d5e6b0;
  func_0x000107c61618();
  lVar1 = _DAT_112d5e7c0;
  if (lVar2 == 0) {
    return;
  }
  if ((*(char *)((undefined8 *)(unaff_x20 + _DAT_112d5e770) + 1) != '\x01') &&
     (*(long *)(unaff_x20 + _DAT_112d5e7c0) == 0)) {
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112d5e770);
    puVar3 = PTR_PTR_1126aead8;
    func_0x000107c610f8(PTR_PTR_1126aead8);
    func_0x000107c4807c();
    func_0x0001038b6d8c(0);
    func_0x000107c610f8();
    func_0x000107c61174(puVar3);
    lVar2 = unaff_x20;
    func_0x000107c61174();
    func_0x0001038b6b00(puVar3,0,0x36,0x7c,0xf,uVar4,4);
    uVar4 = *(undefined8 *)(*(long *)(lVar2 + _DAT_112d5e7b8) + _DAT_112fa91d0);
    func_0x000107c3eccc();
    func_0x000107c61180();
    uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined8 *)(unaff_x20 + lVar1) = uVar4;
    func_0x000107c615f0();
    func_0x000107c615e8(uVar5);
    func_0x000107c4ee7c(uVar4);
    func_0x000107c615e8(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10110f358; end: 10110f6f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10110f358(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  long lVar10;
  int iStack_68;
  char cStack_64;
  
  lVar10 = *(long *)(unaff_x20 + _DAT_112d5e720);
  if (lVar10 == 0) goto LAB_10110f544;
  lVar2 = unaff_x20 + _DAT_112d5e6b0;
  uVar8 = param_2;
  func_0x000107c61618();
  if (lVar2 == 0) goto LAB_10110f544;
  func_0x000107c61174();
  lVar3 = lVar2;
  func_0x000107c5de64();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10110f6d0);
    (*pcVar1)();
  }
  lVar2 = lVar3;
  func_0x000107c5e3f8();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c508f0();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar3 != 0) {
      lVar2 = param_3;
      func_0x000107c4d8a8();
      func_0x000107c61180();
      if (lVar2 != 0) {
        lVar4 = lVar2;
        func_0x000107c4f59c();
        func_0x000107c61180();
        func_0x000107c61170(lVar2);
        if (lVar4 != 0) {
          lVar2 = lVar4;
          func_0x000107c5faec();
          uVar9 = uVar8;
          func_0x000107c61170(lVar4);
          lVar4 = param_3;
          func_0x000107c4d8a8();
          func_0x000107c61180();
          if (lVar4 == 0) {
LAB_10110f580:
            func_0x000107c61170(lVar10);
            func_0x000107c61170(lVar3);
          }
          else {
            lVar5 = lVar4;
            func_0x000107c4a760();
            func_0x000107c61180();
            func_0x000107c61170(lVar4);
            if (lVar5 == 0) goto LAB_10110f580;
            lVar4 = lVar5;
            func_0x000107c5faec();
            func_0x000107c61170(lVar5);
            lVar5 = param_3;
            func_0x000107c4d8a8();
            func_0x000107c61180();
            if (lVar5 == 0) {
              func_0x000107c61170(lVar10);
              func_0x000107c61170(lVar3);
            }
            else {
              lVar6 = lVar5;
              func_0x000107c4f5a0();
              func_0x000107c61180();
              func_0x000107c61170(lVar5);
              if (lVar6 != 0) {
                iStack_68 = 0;
                cStack_64 = '\x01';
                func_0x000107c60664(lVar6,&iStack_68);
                func_0x000107c61170(lVar6);
                if (cStack_64 != '\x01') {
                  if (iStack_68 == 0) {
                    func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
                    puVar7 = &UNK_110385c80;
                    func_0x000107c613fc(&UNK_110385c80,0x68,7);
                    *(long *)(puVar7 + 0x10) = lVar10;
                    *(long *)(puVar7 + 0x18) = lVar4;
                    *(undefined8 *)(puVar7 + 0x20) = uVar9;
                    *(long *)(puVar7 + 0x28) = lVar2;
                    *(undefined8 *)(puVar7 + 0x30) = uVar8;
                    *(undefined8 *)(puVar7 + 0x38) = 0;
                    *(long *)(puVar7 + 0x40) = lVar3;
                    *(long *)(puVar7 + 0x48) = unaff_x20;
                    *(undefined8 *)(puVar7 + 0x50) = param_1;
                    *(undefined8 *)(puVar7 + 0x58) = param_2;
                    *(long *)(puVar7 + 0x60) = param_3;
                    func_0x000107c61174(lVar10);
                    func_0x000107c61174(lVar3);
                    func_0x000107c61174();
                    func_0x000107c61434(param_2);
                    func_0x000107c61174(param_3);
                    func_0x000104887c7c(0x12,0,0x3c,4,0xd000000000000033,0x800000010ef26dd0,
                                        &UNK_10d925860,puVar7);
                    func_0x000107c61170(lVar10);
                    func_0x000107c61170(lVar3);
                    func_0x000107c61574(puVar7);
                    return;
                  }
                  if (iStack_68 != 1) {
                    func_0x000101107304(0);
                    func_0x000107c60614();
                    /* WARNING: Does not return */
                    pcVar1 = (code *)SoftwareBreakpoint(1,0x10110f6f4);
                    (*pcVar1)();
                  }
                  func_0x000107c61170(lVar10);
                  func_0x000107c61170(lVar3);
                  func_0x000107c6142c(uVar8);
                  func_0x000107c6142c(uVar9);
                  goto LAB_10110f544;
                }
              }
              func_0x000107c61170(lVar10);
              func_0x000107c61170(lVar3);
            }
            func_0x000107c6142c(uVar9);
          }
          func_0x000107c6142c(uVar8);
          goto LAB_10110f544;
        }
      }
      func_0x000107c61170(lVar10);
      lVar10 = lVar3;
    }
  }
  func_0x000107c61170(lVar10);
LAB_10110f544:
  func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
  func_0x000104888f7c();
  return;
}



/* Entry: 10110f6f4; end: 10110f72b;  */

void FUN_10110f6f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x80) = param_11;
  *(undefined8 *)(unaff_x22 + 0x88) = param_12;
  *(undefined8 *)(unaff_x22 + 0x78) = param_10;
  *(undefined8 *)(unaff_x22 + 0x70) = param_9;
  *(undefined8 *)(unaff_x22 + 0x60) = param_7;
  *(undefined8 *)(unaff_x22 + 0x68) = param_8;
  *(undefined8 *)(unaff_x22 + 0x50) = param_5;
  *(undefined8 *)(unaff_x22 + 0x58) = param_6;
  *(undefined8 *)(unaff_x22 + 0x40) = param_3;
  *(undefined8 *)(unaff_x22 + 0x48) = param_4;
  *(undefined8 *)(unaff_x22 + 0x38) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10110f72c,0,0);
  return;
}



/* Entry: 10110f72c; end: 10110f7d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10110f72c(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  func_0x0001000d224c(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
  piVar5 = *(int **)(lVar3 + 8);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x90) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10110f7d4;
                    /* WARNING: Could not recover jumptable at 0x00010110f7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))
            (*(undefined8 *)(unaff_x22 + 0x40),*(undefined8 *)(unaff_x22 + 0x48),
             *(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0x58),
             *(undefined8 *)(unaff_x22 + 0x60),*(undefined8 *)(unaff_x22 + 0x68),3,uVar2,lVar3);
  return;
}



/* Entry: 10110f7d4; end: 10110f84b;  */

void FUN_10110f7d4(undefined8 param_1,undefined1 param_2)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x98) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x90));
  if (unaff_x20 == 0) {
    *(undefined1 *)(lVar2 + 0xa0) = param_2;
    pcVar1 = FUN_10110f84c;
  }
  else {
    func_0x000107c614ac();
    pcVar1 = FUN_10110f8fc;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10110f84c; end: 10110f8fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10110f84c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  cVar5 = *(char *)(unaff_x22 + 0xa0);
  func_0x0001000834e4(unaff_x22 + 0x10);
  if (cVar5 != '\x01') {
    uVar7 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x78);
    lVar1 = *(long *)(unaff_x22 + 0x70) + _DAT_112d5e730;
    func_0x0001000a8868(lVar1,*(undefined8 *)(lVar1 + 0x18));
    uVar6 = 0;
    func_0x00010111bd60(0);
    FUN_10111c038(uVar4,uVar2,uVar7,uVar3,uVar6,&PTR_DAT_110386148);
  }
                    /* WARNING: Could not recover jumptable at 0x00010110f8f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10110f8fc; end: 10110f92f;  */

void FUN_10110f8fc(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010110f92c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10110f930; end: 10110f99b;  */

void FUN_10110f930(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10110f99c,uVar1,uVar2);
  return;
}



/* Entry: 10110f99c; end: 10110f9db;  */

void FUN_10110f99c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x20));
  func_0x000107c5c2e0(uVar2,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010110f9d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10110f9dc; end: 10110fca7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10110f9dc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112d5e6f0);
  func_0x000107c4d30c(uVar1);
  func_0x000107c61180();
  puVar2 = &UNK_110385ac8;
  func_0x000107c613fc(&UNK_110385ac8,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  uStack_40 = 0x101113eac;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  uStack_50 = 0x101114e88;
  puStack_48 = &UNK_110385c48;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  uVar4 = uVar1;
  func_0x000107c5c320(uVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c3e924(uVar4);
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 10110fca8; end: 10110fcfb;  */

void FUN_10110fca8(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x0001011104a0();
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 10110fcfc; end: 10110fdf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10110fcfc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112d5e710);
  func_0x000107c4ec88(uVar1);
  func_0x000107c61180();
  puVar2 = &UNK_110385ac8;
  func_0x000107c613fc(&UNK_110385ac8,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  uStack_40 = 0x101113e9c;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  uStack_50 = 0x101114e90;
  puStack_48 = &UNK_110385bf8;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  uVar4 = uVar1;
  func_0x000107c5c320(uVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c3e924(uVar4);
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 10110fdf4; end: 10111001f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10110fdf4(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long extraout_x8;
  long lVar7;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  ulong uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  uVar1 = param_2 + 0x10;
  func_0x000107c61618();
  lVar7 = _DAT_112d5e7d0;
  if (uVar1 != 0) {
    func_0x000107c61428(uVar1 + _DAT_112d5e7d0,auStack_a8,0,0);
    FUN_101113bfc(uVar1 + lVar7,auStack_90,0x112d5e670,&UNK_10d9262b0);
    if (uStack_78 == 0) {
      func_0x000107c61170(uVar1);
      func_0x000101113c44(auStack_90,0x112d5e670,&UNK_10d9262b0);
    }
    else {
      func_0x0001000a8868(auStack_90,uStack_78);
      lVar7 = *(long *)(uStack_78 - 8);
      (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
      (**(code **)(lVar7 + 0x10))(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
      func_0x000101113c44(auStack_90,0x112d5e670,&UNK_10d9262b0);
      uVar2 = uStack_78;
      FUN_101141bc8(uStack_78,uStack_70);
      (**(code **)(lVar7 + 8))(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),uStack_78);
      if (uVar2 != 0) {
        uVar3 = uVar2;
        func_0x000107c49b64();
        if ((uVar3 & 1) != 0) {
          func_0x0001000a8868(uVar1 + _DAT_112d5e730,*(undefined8 *)(uVar1 + _DAT_112d5e730 + 0x18))
          ;
          uVar3 = uVar2;
          func_0x000107c439a4(uVar2);
          func_0x000107c61180();
          uVar4 = uVar3;
          func_0x000107c5fc54();
          func_0x000107c61170(uVar3);
          uVar5 = 0x112d5e858;
          func_0x0001000285a8(0x112d5e858,&UNK_10d925c20);
          func_0x000107c61538();
          uVar6 = 0;
          func_0x00010111bd60(0);
          FUN_10111c004(uVar4,uVar5,uVar6,&PTR_DAT_110386148);
          func_0x000107c61170(uVar1);
          func_0x000107c61170(uVar2);
          func_0x000107c6142c(uVar4);
          return;
        }
        func_0x000107c61170(uVar1);
        uVar1 = uVar2;
      }
      func_0x000107c61170(uVar1);
    }
  }
  return;
}



/* Entry: 101110020; end: 101110117;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101110020(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112d5e6e8);
  func_0x000107c43af4(uVar1);
  func_0x000107c61180();
  puVar2 = &UNK_110385ac8;
  func_0x000107c613fc(&UNK_110385ac8,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  pcStack_40 = FUN_101113e50;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  uStack_50 = 0x101114e94;
  puStack_48 = &UNK_110385bd0;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  uVar4 = uVar1;
  func_0x000107c5c320(uVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c3e924(uVar4);
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 101110118; end: 10111011f;  */

void FUN_101110118(void)

{
  return;
}



/* Entry: 101110120; end: 101110173;  */

void FUN_101110120(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_1011101c0();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 101110174; end: 1011101bf;  */

void FUN_101110174(long param_1,undefined8 param_2)

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



/* Entry: 1011101c0; end: 1011107e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011101c0(void)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long extraout_x8;
  long unaff_x20;
  ulong uVar6;
  long lVar7;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  ulong uStack_60;
  undefined8 uStack_58;
  
  lVar7 = _DAT_112d5e7d0;
  func_0x000107c61428(unaff_x20 + _DAT_112d5e7d0,auStack_90,0,0);
  FUN_101113bfc(unaff_x20 + lVar7,auStack_78,0x112d5e670,&UNK_10d9262b0);
  if (uStack_60 == 0) {
    func_0x000101113c44(auStack_78,0x112d5e670,&UNK_10d9262b0);
  }
  else {
    func_0x0001000a8868(auStack_78,uStack_60);
    lVar7 = *(long *)(uStack_60 - 8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
    (**(code **)(lVar7 + 0x10))(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    func_0x000101113c44(auStack_78,0x112d5e670,&UNK_10d9262b0);
    uVar1 = uStack_60;
    FUN_101141bc8(uStack_60,uStack_58);
    (**(code **)(lVar7 + 8))(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),uStack_60);
    if (uVar1 != 0) {
      uVar6 = uVar1;
      func_0x000107c49b64();
      if ((uVar6 & 1) == 0) {
        uVar6 = uVar1;
        func_0x000107c439a4();
        func_0x000107c61180();
        uVar2 = uVar6;
        func_0x000107c5fc54();
        func_0x000107c61170(uVar6);
        if (*(long *)(uVar2 + 0x10) == 0) {
          func_0x000107c6142c(uVar2);
        }
        else {
          uVar3 = *(undefined8 *)(uVar2 + 0x20);
          uVar5 = *(undefined8 *)(uVar2 + 0x28);
          func_0x000107c61434(uVar5);
          func_0x000107c6142c(uVar2);
          uVar6 = *(ulong *)(unaff_x20 + _DAT_112d5e718);
          func_0x000107c5fadc(uVar3,uVar5);
          func_0x000107c6142c(uVar5);
          func_0x000107c43aa0();
          func_0x000107c61180();
          func_0x000107c61170(uVar3);
          if (uVar6 != 0) {
            uVar2 = uVar6;
            func_0x000107c3d15c();
            func_0x000107c61180();
            if (uVar2 != 0) {
              uVar4 = uVar2;
              func_0x000107c4cde4();
              func_0x000107c61180();
              func_0x000107c61170(uVar2);
              if (uVar4 != 0) {
                uVar2 = uVar4;
                func_0x000107cff030();
                func_0x000107c61170(uVar4);
                if ((uVar2 & 1) == 0) {
                  func_0x0001000a8868(unaff_x20 + _DAT_112d5e730,
                                      *(undefined8 *)(unaff_x20 + _DAT_112d5e730 + 0x18));
                  uVar2 = uVar1;
                  func_0x000107c439a4(uVar1);
                  func_0x000107c61180();
                  uVar4 = uVar2;
                  func_0x000107c5fc54();
                  func_0x000107c61170(uVar2);
                  uVar3 = 0x112d5e858;
                  func_0x0001000285a8(0x112d5e858,&UNK_10d925c20);
                  func_0x000107c61538();
                  uVar5 = 0;
                  func_0x00010111bd60(0);
                  FUN_10111c004(uVar4,uVar3,uVar5,&PTR_DAT_110386148);
                  func_0x000107c61170(uVar1);
                  func_0x000107c61170(uVar6);
                  func_0x000107c6142c(uVar4);
                  return;
                }
              }
            }
            func_0x000107c61170(uVar6);
          }
        }
      }
      func_0x000107c61170(uVar1);
    }
  }
  return;
}



/* Entry: 1011107e4; end: 101110c73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011107e4(long param_1,uint param_2)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long unaff_x20;
  ulong uVar11;
  ulong uVar12;
  ulong *puVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  undefined1 auStack_c8 [72];
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  func_0x00010006c804();
  lVar16 = _DAT_112d5e7d8;
  func_0x000107c61428(unaff_x20 + _DAT_112d5e7d8,auStack_78,0,0);
  lVar15 = *(long *)(unaff_x20 + lVar16);
  func_0x000107c61434(lVar15);
  func_0x000100070bfc();
  lVar16 = _DAT_112d5e6e0;
  uVar10 = *(ulong *)(param_1 + 0x10);
  if (uVar10 != 0) {
    puVar13 = (ulong *)(param_1 + 0x28);
    uVar18 = uVar10;
    do {
      uVar4 = puVar13[-1];
      uVar1 = *puVar13;
      if (*(long *)(lVar15 + 0x10) == 0) {
        func_0x000107c61434(uVar1);
LAB_1011108e8:
        uVar11 = 0;
      }
      else {
        func_0x000107c61434(lVar15);
        func_0x000107c61434(uVar1);
        uVar11 = uVar4;
        uVar17 = uVar1;
        func_0x000100029284();
        if ((uVar17 & 1) == 0) {
          func_0x000107c6142c(lVar15);
          goto LAB_1011108e8;
        }
        uVar11 = *(ulong *)(*(long *)(lVar15 + 0x38) + uVar11 * 8);
        func_0x000107c61174(uVar11);
        func_0x000107c6142c(lVar15);
      }
      uVar17 = *(ulong *)(unaff_x20 + lVar16);
      func_0x000107c5fadc(uVar4,uVar1);
      func_0x000107c4e680();
      func_0x000107c61180();
      func_0x000107c61170(uVar4);
      if (uVar11 == 0) {
        if (uVar17 != 0) {
          func_0x000107c6142c(lVar15);
          func_0x000107c6142c(uVar1);
LAB_1011109dc:
          func_0x000107c61170(uVar17);
LAB_1011109e4:
          func_0x00010006c804();
          lVar16 = *(long *)(unaff_x20 + _DAT_112d5e6d8);
          func_0x000107c61434(lVar16);
          func_0x000100070bfc();
          uVar18 = 0;
          puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
          do {
            uVar4 = uVar18;
            if (uVar18 <= uVar10) {
              uVar4 = uVar10;
            }
            while( true ) {
              if (uVar18 == uVar4) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x101110c74);
                (*pcVar3)();
              }
              puVar13 = (ulong *)(param_1 + 0x20 + uVar18 * 0x10);
              uVar1 = *puVar13;
              uVar11 = puVar13[1];
              uVar18 = uVar18 + 1;
              if (*(long *)(lVar16 + 0x10) == 0) break;
              func_0x000107c6068c(auStack_c8,*(undefined8 *)(lVar16 + 0x28));
              func_0x000107c61434(uVar11);
              puVar5 = auStack_c8;
              func_0x000107c5fb58(puVar5,uVar1,uVar11);
              func_0x000107c606a8();
              uVar17 = -1L << ((ulong)*(byte *)(lVar16 + 0x20) & 0x3f);
              uVar12 = (ulong)puVar5 & (uVar17 ^ 0xffffffffffffffff);
              if ((*(ulong *)(lVar16 + 0x38 + (uVar12 >> 6) * 8) >> (uVar12 & 0x3f) & 1) == 0)
              goto LAB_101110ae4;
              while( true ) {
                puVar13 = (ulong *)(*(long *)(lVar16 + 0x30) + uVar12 * 0x10);
                uVar6 = *puVar13;
                uVar2 = puVar13[1];
                if ((uVar6 == uVar1 && uVar2 == uVar11) ||
                   (func_0x000107c605b8(uVar6,uVar2,uVar1,uVar11,0), (uVar6 & 1) != 0)) break;
                uVar12 = uVar12 + 1 & ~uVar17;
                if ((*(ulong *)(lVar16 + 0x38 + (uVar12 >> 6) * 8) >> (uVar12 & 0x3f) & 1) == 0)
                goto LAB_101110ae4;
              }
              func_0x000107c6142c(uVar11);
              if (uVar18 == uVar10) goto LAB_101110b64;
            }
            func_0x000107c61434(uVar11);
LAB_101110ae4:
            puVar7 = puVar14;
            func_0x000107c61558();
            puStack_80 = puVar14;
            if (((ulong)puVar7 & 1) == 0) {
              func_0x000100403514(0,*(long *)(puVar14 + 0x10) + 1,1);
            }
            uVar4 = *(ulong *)(puStack_80 + 0x10);
            if (*(ulong *)(puStack_80 + 0x18) >> 1 <= uVar4) {
              func_0x000100403514(1 < *(ulong *)(puStack_80 + 0x18),uVar4 + 1,1);
            }
            *(ulong *)(puStack_80 + 0x10) = uVar4 + 1;
            *(ulong *)(puStack_80 + uVar4 * 0x10 + 0x20) = uVar1;
            *(ulong *)(puStack_80 + uVar4 * 0x10 + 0x28) = uVar11;
            puVar14 = puStack_80;
            if (uVar18 == uVar10) {
LAB_101110b64:
              func_0x000107c6142c(lVar16);
              lVar16 = *(long *)(puVar14 + 0x10);
              func_0x000107c61574(puVar14);
              if ((lVar16 != 0) || ((param_2 & 1) != 0)) {
                func_0x0001000a8868(unaff_x20 + _DAT_112d5e730,
                                    *(undefined8 *)(unaff_x20 + _DAT_112d5e730 + 0x18));
                uVar8 = 0x112d5e858;
                func_0x0001000285a8(0x112d5e858,&UNK_10d925c20);
                func_0x000107c61538();
                uVar9 = 0;
                func_0x00010111bd60(0);
                FUN_10111c004(param_1,uVar8,uVar9,&PTR_DAT_110386148);
                return;
              }
              lVar16 = *(long *)(unaff_x20 + _DAT_112d5e748);
              func_0x000107c5194c();
              func_0x000107c61180();
              if (lVar16 != 0) {
                func_0x000107c61170();
                return;
              }
              lVar16 = unaff_x20 + _DAT_112d5e6c0;
              lVar15 = lVar16;
              func_0x000107c61618();
              if (lVar15 == 0) {
                return;
              }
              lVar16 = *(long *)(lVar16 + 8);
              func_0x000107c614f0();
              (**(code **)(lVar16 + 8))();
              func_0x000107c615e8(lVar15);
              return;
            }
          } while( true );
        }
        func_0x000107c6142c(uVar1);
      }
      else {
        if (uVar17 == 0) {
          func_0x000107c6142c(lVar15);
          func_0x000107c6142c(uVar1);
          uVar17 = uVar11;
          goto LAB_1011109dc;
        }
        func_0x000107c61174();
        func_0x000107c61174(uVar17);
        uVar4 = uVar11;
        FUN_10111e7c0(uVar11,uVar17);
        func_0x000107c6142c(uVar1);
        func_0x000107c61170(uVar11);
        func_0x000107c61170(uVar11);
        func_0x000107c61170(uVar17);
        func_0x000107c61170(uVar17);
        if ((uVar4 & 1) != 0) {
          func_0x000107c6142c(lVar15);
          goto LAB_1011109e4;
        }
      }
      puVar13 = puVar13 + 2;
      uVar18 = uVar18 - 1;
    } while (uVar18 != 0);
  }
  func_0x000107c6142c(lVar15);
  return;
}



/* Entry: 101110c74; end: 101110db7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_101110c74(double param_1,double param_2,long param_3,ulong param_4)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x20;
  long lVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_78 [24];
  
  lVar4 = _DAT_112d5e7d8;
  func_0x000107c61428(unaff_x20 + _DAT_112d5e7d8,auStack_78,0,0);
  lVar4 = *(long *)(unaff_x20 + lVar4);
  if (*(long *)(lVar4 + 0x10) != 0) {
    func_0x000107c61434(lVar4);
    lVar1 = param_3;
    uVar3 = param_4;
    func_0x000100029284();
    if ((uVar3 & 1) == 0) {
      func_0x000107c6142c(lVar4);
    }
    else {
      uVar2 = *(undefined8 *)(*(long *)(lVar4 + 0x38) + lVar1 * 8);
      func_0x000107c61174(uVar2);
      func_0x000107c6142c(lVar4);
      func_0x000107c3fc68(uVar2);
      dVar5 = param_1;
      dVar6 = param_2;
      func_0x000107c61170(uVar2);
      lVar4 = *(long *)(unaff_x20 + _DAT_112d5e6e0);
      func_0x000107c5fadc(param_3,param_4);
      func_0x000107c4e680();
      func_0x000107c61180();
      func_0x000107c61170(param_3);
      if (lVar4 != 0) {
        func_0x000107c3fc68(lVar4);
        func_0x000107c61170(lVar4);
        if (ABS(param_2 - dVar6) <= 2.220446049250313e-16) {
          return 2.220446049250313e-16 < ABS(param_1 - dVar5);
        }
        return true;
      }
    }
  }
  return false;
}



/* Entry: 101110db8; end: 10111128f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101110db8(long param_1)

{
  ulong *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  code *pcVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long unaff_x20;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  undefined *puVar20;
  long lVar21;
  undefined8 uVar22;
  long lVar23;
  long *plVar24;
  undefined8 *puVar25;
  undefined *apuStack_78 [3];
  
  lVar21 = *(long *)(param_1 + 0x10);
  puVar20 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar21 != 0) {
    apuStack_78[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_1011453a4(0,lVar21,0);
    uVar22 = *(undefined8 *)(unaff_x20 + _DAT_112d5e6e0);
    puVar25 = (undefined8 *)(param_1 + 0x28);
    do {
      puVar20 = apuStack_78[0];
      uVar2 = puVar25[-1];
      uVar10 = *puVar25;
      func_0x000107c61434(uVar10);
      uVar12 = uVar2;
      func_0x000107c5fadc(uVar2,uVar10);
      uVar6 = uVar22;
      func_0x000107c4e680();
      func_0x000107c61180();
      func_0x000107c61170(uVar12);
      uVar13 = *(ulong *)(puVar20 + 0x10);
      apuStack_78[0] = puVar20;
      if (*(ulong *)(puVar20 + 0x18) >> 1 <= uVar13) {
        FUN_1011453a4(1 < *(ulong *)(puVar20 + 0x18),uVar13 + 1,1);
      }
      puVar25 = puVar25 + 2;
      *(ulong *)(apuStack_78[0] + 0x10) = uVar13 + 1;
      *(undefined8 *)(apuStack_78[0] + uVar13 * 0x18 + 0x20) = uVar2;
      *(undefined8 *)(apuStack_78[0] + uVar13 * 0x18 + 0x28) = uVar10;
      *(undefined8 *)(apuStack_78[0] + uVar13 * 0x18 + 0x30) = uVar6;
      lVar21 = lVar21 + -1;
      puVar20 = apuStack_78[0];
    } while (lVar21 != 0);
  }
  lVar16 = *(long *)(unaff_x20 + _DAT_112d5e6e0);
  uVar22 = *(undefined8 *)(unaff_x20 + _DAT_112d5e6b8);
  uVar2 = ((undefined8 *)(unaff_x20 + _DAT_112d5e6b8))[1];
  uVar10 = uVar22;
  func_0x000107c5fadc();
  func_0x000107c4e680();
  func_0x000107c61180();
  func_0x000107c61170(uVar10);
  func_0x00010006c804();
  lVar21 = _DAT_112d5e7d8;
  uVar13 = *(ulong *)(puVar20 + 0x10);
  if (uVar13 != 0) {
    uVar15 = 0;
    plVar24 = (long *)(puVar20 + 0x30);
    do {
      if (*(ulong *)(puVar20 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101111278);
        (*pcVar4)();
      }
      uVar9 = plVar24[-2];
      uVar3 = plVar24[-1];
      lVar23 = *plVar24;
      func_0x000107c61428(unaff_x20 + lVar21,apuStack_78,0x21,0);
      if (lVar23 == 0) {
        uVar10 = *(undefined8 *)(unaff_x20 + lVar21);
        func_0x000107c61438(uVar3,2);
        func_0x000107c61434(uVar10);
        uVar8 = uVar3;
        func_0x000100029284();
        func_0x000107c6142c(uVar10);
        if ((uVar8 & 1) == 0) {
          func_0x000107c6142c(uVar3);
        }
        else {
          iVar5 = (int)*(undefined8 *)(unaff_x20 + lVar21);
          func_0x000107c61558();
          lVar19 = *(long *)(unaff_x20 + lVar21);
          *(undefined8 *)(unaff_x20 + lVar21) = 0x8000000000000000;
          if (iVar5 == 0) {
            func_0x0001011361f4();
          }
          func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar19 + 0x30) + uVar9 * 0x10 + 8));
          func_0x000107c61170(*(undefined8 *)(*(long *)(lVar19 + 0x38) + uVar9 * 8));
          FUN_10111ca90(uVar9,lVar19);
          func_0x000107c6142c(uVar3);
          *(long *)(unaff_x20 + lVar21) = lVar19;
        }
      }
      else {
        lVar7 = lVar23;
        func_0x000107c61174();
        func_0x000107c61434(uVar3);
        func_0x000107c61174();
        uVar17 = *(ulong *)(unaff_x20 + lVar21);
        func_0x000107c61434(uVar3);
        func_0x000107c61558();
        lVar18 = *(long *)(unaff_x20 + lVar21);
        *(undefined8 *)(unaff_x20 + lVar21) = 0x8000000000000000;
        uVar8 = uVar9;
        uVar11 = uVar3;
        func_0x000100029284();
        uVar14 = (ulong)~(uint)uVar11 & 1;
        lVar19 = *(long *)(lVar18 + 0x10) + uVar14;
        if (SCARRY8(*(long *)(lVar18 + 0x10),uVar14)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10111127c);
          (*pcVar4)();
        }
        if (*(long *)(lVar18 + 0x18) < lVar19) {
          func_0x0001011364e4(lVar19,uVar17);
          uVar8 = uVar9;
          uVar17 = uVar3;
          func_0x000100029284();
          if (((uint)uVar11 & 1) != ((uint)uVar17 & 1)) {
            func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101111290);
            (*pcVar4)();
          }
joined_r0x00010111117c:
          if ((uVar11 & 1) != 0) goto LAB_101110f3c;
LAB_10111111c:
          lVar19 = lVar18 + (uVar8 >> 6) * 8;
          *(ulong *)(lVar19 + 0x40) = *(ulong *)(lVar19 + 0x40) | 1L << (uVar8 & 0x3f);
          puVar1 = (ulong *)(*(long *)(lVar18 + 0x30) + uVar8 * 0x10);
          *puVar1 = uVar9;
          puVar1[1] = uVar3;
          *(long *)(*(long *)(lVar18 + 0x38) + uVar8 * 8) = lVar7;
          if (SCARRY8(*(long *)(lVar18 + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101111280);
            (*pcVar4)();
          }
          *(long *)(lVar18 + 0x10) = *(long *)(lVar18 + 0x10) + 1;
        }
        else {
          if ((uVar17 & 1) == 0) {
            func_0x0001011361f4();
            goto joined_r0x00010111117c;
          }
          if ((uVar11 & 1) == 0) goto LAB_10111111c;
LAB_101110f3c:
          uVar10 = *(undefined8 *)(*(long *)(lVar18 + 0x38) + uVar8 * 8);
          *(long *)(*(long *)(lVar18 + 0x38) + uVar8 * 8) = lVar7;
          func_0x000107c6142c(uVar3);
          func_0x000107c61170(uVar10);
        }
        *(long *)(unaff_x20 + lVar21) = lVar18;
      }
      uVar15 = uVar15 + 1;
      func_0x000107c614a8(apuStack_78);
      func_0x000107c6142c(uVar3);
      func_0x000107c61170(lVar23);
      plVar24 = plVar24 + 3;
    } while (uVar13 != uVar15);
  }
  func_0x000107c6142c(puVar20);
  func_0x000107c61428(unaff_x20 + lVar21,apuStack_78,0x21,0);
  func_0x000107c61434(uVar2);
  if (lVar16 == 0) {
    FUN_10111c844(uVar22,uVar2);
    func_0x000107c6142c(uVar2);
    func_0x000107c61170(uVar22);
  }
  else {
    lVar23 = lVar16;
    func_0x000107c61174(lVar16);
    uVar10 = *(undefined8 *)(unaff_x20 + lVar21);
    func_0x000107c61558(uVar10);
    uVar12 = *(undefined8 *)(unaff_x20 + lVar21);
    *(undefined8 *)(unaff_x20 + lVar21) = 0x8000000000000000;
    FUN_10111c918(lVar23,uVar22,uVar2,uVar10);
    func_0x000107c6142c(uVar2);
    *(undefined8 *)(unaff_x20 + lVar21) = uVar12;
  }
  func_0x000107c614a8(apuStack_78);
  func_0x000100070bfc();
  func_0x000107c61170(lVar16);
  return;
}



/* Entry: 101111290; end: 1011113b3;  */

/* WARNING: Possible PIC construction at 0x000101111384: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101111388) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101111290(void)

{
  long lVar1;
  long *plVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined *puVar5;
  long lVar6;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + _DAT_112d5e7b0) == '\x01') {
    lVar6 = *(long *)(unaff_x20 + _DAT_112d5e7a8);
    if (lVar6 != 0) {
      lVar1 = lVar6;
      func_0x000107c614f0(lVar6);
      plVar2 = (long *)0x0;
      func_0x000103b3bcdc();
      func_0x000107c615f0(lVar6);
      func_0x00010267c6f8(plVar2,lVar1,plVar2);
      puVar3 = &UNK_110385ac8;
      func_0x000107c613fc(&UNK_110385ac8,0x18,7);
      func_0x000107c61614(puVar3 + 0x10);
      pcVar4 = FUN_101113e48;
      puVar5 = puVar3;
      (**(code **)(*plVar2 + 0x60))(FUN_101113e48);
      func_0x000107c61574(plVar2);
      func_0x000107c61574(puVar3);
      func_0x000107c614f0(pcVar4);
      (**(code **)(puVar5 + 0x10))(*(undefined8 *)(unaff_x20 + _DAT_112d5e6d0),pcVar4,puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar6);
      return;
    }
  }
  return;
}



/* Entry: 1011113b4; end: 101111427;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011113b4(long *param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_101111428(*(undefined8 *)(lVar1 + _DAT_112fed870),
                  ((undefined8 *)(lVar1 + _DAT_112fed870))[1]);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 101111428; end: 101111713;  */

/* WARNING: Possible PIC construction at 0x000101111474: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011114d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011114ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101111580: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011115a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011115cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101111694: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011116e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011116c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011116ec) */
/* WARNING: Removing unreachable block (ram,0x000101111698) */
/* WARNING: Removing unreachable block (ram,0x0001011116f4) */
/* WARNING: Removing unreachable block (ram,0x0001011115d0) */
/* WARNING: Removing unreachable block (ram,0x0001011116e4) */
/* WARNING: Removing unreachable block (ram,0x0001011115fc) */
/* WARNING: Removing unreachable block (ram,0x0001011115ac) */
/* WARNING: Removing unreachable block (ram,0x000101111584) */
/* WARNING: Removing unreachable block (ram,0x0001011114f0) */
/* WARNING: Removing unreachable block (ram,0x0001011114d4) */
/* WARNING: Removing unreachable block (ram,0x0001011114fc) */
/* WARNING: Removing unreachable block (ram,0x000101111508) */
/* WARNING: Removing unreachable block (ram,0x0001011116bc) */
/* WARNING: Removing unreachable block (ram,0x000101111510) */
/* WARNING: Removing unreachable block (ram,0x0001011114d8) */
/* WARNING: Removing unreachable block (ram,0x000101111478) */
/* WARNING: Removing unreachable block (ram,0x00010111147c) */
/* WARNING: Removing unreachable block (ram,0x0001011114a4) */
/* WARNING: Removing unreachable block (ram,0x000101111494) */
/* WARNING: Removing unreachable block (ram,0x0001011114ac) */
/* WARNING: Removing unreachable block (ram,0x0001011116c4) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101111428(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112d5e6e8);
  func_0x000107c5fadc();
  func_0x000107c4c39c(uVar1,param_2,param_1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101111714; end: 10111176f; -[_TtC32MapFriendFocusViewImplementation23FocusCardsBusinessLogic init] */

void FUN_101111714(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapFriendFocusViewImplementation.FocusCardsBusinessLogic",0x38,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101111740);
  (*pcVar1)();
}



/* Entry: 101111770; end: 101111a0b; -[_TtC32MapFriendFocusViewImplementation23FocusCardsBusinessLogic .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001011117d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011117d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101111770(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d5e6b0);
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d5e6b8 + 8));
  FUN_10111457c(param_1 + _DAT_112d5e6c0);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d5e6c8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d5e6d0));
  return;
}



/* Entry: 101111a0c; end: 101111a2b;  */

void FUN_101111a0c(void)

{
  func_0x000107c61168(&PTR_PTR_1127afe68);
  return;
}



/* Entry: 101111a2c; end: 101111a37; -[_TtC32MapFriendFocusViewImplementation23FocusCardsBusinessLogic didEndSnapshot] */

/* WARNING: Possible PIC construction at 0x0001011121b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011121cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011121b4) */
/* WARNING: Removing unreachable block (ram,0x0001011121d0) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101111a2c(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 101111a38; end: 101111a83; -[_TtC32MapFriendFocusViewImplementation23FocusCardsBusinessLogic chatScopeDidDismiss:] */

/* WARNING: Possible PIC construction at 0x000101111a6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101111a70) */

void FUN_101111a38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_101113688();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 101111a84; end: 101111acb; -[_TtC32MapFriendFocusViewImplementation23FocusCardsBusinessLogic createChatScopeWantsToDismiss:] */

void FUN_101111a84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000107c5d17c();
  func_0x000107c61180();
  func_0x000107c41864();
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 101111acc; end: 101111b17; -[_TtC32MapFriendFocusViewImplementation23FocusCardsBusinessLogic createChatScopeDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101111acc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112d5e750);
  func_0x000107c61174();
  func_0x000107c4ffe8(uVar1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 101111b18; end: 101111c07;  */

void FUN_101111b18(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  func_0x000107c5d17c();
  func_0x000107c61180();
  puVar1 = &UNK_110385ac8;
  func_0x000107c613fc(&UNK_110385ac8,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puVar2 = &UNK_110385af0;
  func_0x000107c613fc(&UNK_110385af0,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  uStack_40 = 0x101113cb0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000b0c7c;
  puStack_48 = &UNK_110385b08;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  puVar1 = puStack_38;
  func_0x000107c61174(param_2);
  func_0x000107c61574(puVar1);
  func_0x000107c41864(param_1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(param_1);
  return;
}



/* Entry: 101111c08; end: 101111d53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101111c08(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112d5e6b0;
    func_0x000107c61618();
    if (lVar1 != 0) {
      puVar2 = &UNK_110385ac8;
      func_0x000107c613fc(&UNK_110385ac8,0x18,7);
      func_0x000107c61614(puVar2 + 0x10,param_1);
      puVar3 = &UNK_110385b40;
      func_0x000107c613fc(&UNK_110385b40,0x28,7);
      *(undefined **)(puVar3 + 0x10) = puVar2;
      *(long *)(puVar3 + 0x18) = lVar1;
      *(undefined8 *)(puVar3 + 0x20) = param_2;
      puVar2 = &UNK_110385b68;
      func_0x000107c613fc(&UNK_110385b68,0x20,7);
      *(undefined **)(puVar2 + 0x10) = &UNK_10d925818;
      *(undefined **)(puVar2 + 0x18) = puVar3;
      func_0x000107c61174(lVar1);
      func_0x000107c61174(param_2);
      uVar4 = 0x12;
      func_0x0001001ca524(0x12,0,0x3c,4,0,0,&UNK_10d925828,puVar2,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61170(lVar1);
      func_0x000107c61574(puVar2);
      func_0x000107c61574(uVar4);
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 101111d54; end: 101111dbf; -[_TtC32MapFriendFocusViewImplementation23FocusCardsBusinessLogic createChatScope:wantsToDismissWithNewChat:] */

/* WARNING: Possible PIC construction at 0x000101111da0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101111da4) */

void FUN_101111d54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_101111b18(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 101111dc0; end: 101111e43; -[_TtC32MapFriendFocusViewImplementation23FocusCardsBusinessLogic dismissCameraScope:] */

/* WARNING: Possible PIC construction at 0x000101111dfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101111e18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101111e00) */
/* WARNING: Removing unreachable block (ram,0x000101111e1c) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101111dc0(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 101111e44; end: 10111208f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101111e44(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  ulong uStack_70;
  undefined8 uStack_68;
  
  func_0x00010006c804();
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d5e6d8);
  func_0x000107c61434(uVar5);
  uVar1 = param_1;
  func_0x0001000f66f0(param_1,param_2,uVar5);
  func_0x000107c6142c(uVar5);
  func_0x000100070bfc();
  lVar6 = _DAT_112d5e7d0;
  if ((uVar1 & 1) == 0) {
    return;
  }
  func_0x000107c61428(unaff_x20 + _DAT_112d5e7d0,auStack_a0,0,0);
  FUN_101113bfc(unaff_x20 + lVar6,auStack_88,0x112d5e670,&UNK_10d9262b0);
  if (uStack_70 == 0) {
    func_0x000101113c44(auStack_88,0x112d5e670,&UNK_10d9262b0);
    return;
  }
  func_0x0001000a8868(auStack_88,uStack_70);
  lVar6 = *(long *)(uStack_70 - 8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  (**(code **)(lVar6 + 0x10))(auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000101113c44(auStack_88,0x112d5e670,&UNK_10d9262b0);
  uVar1 = uStack_70;
  FUN_101141bc8(uStack_70,uStack_68);
  (**(code **)(lVar6 + 8))(auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),uStack_70);
  if (uVar1 == 0) {
    return;
  }
  uVar2 = uVar1;
  func_0x000107c49b64();
  if ((uVar2 & 1) == 0) {
    uVar2 = uVar1;
    func_0x000107c49e0c();
    func_0x000107c61180();
    if (uVar2 != 0) {
      uVar3 = uVar2;
      func_0x000107c3ebcc();
      func_0x000107c61170(uVar2);
      if ((uVar3 & 1) != 0) goto LAB_10111204c;
    }
    uVar2 = uVar1;
    func_0x000107c439a4(uVar1);
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c5fc54();
    func_0x000107c61170(uVar2);
    func_0x000100077018(param_1,param_2,uVar3);
    func_0x000107c6142c(uVar3);
    if ((param_1 & 1) != 0) {
      lVar6 = unaff_x20 + _DAT_112d5e6c0;
      lVar4 = lVar6;
      func_0x000107c61618();
      if (lVar4 != 0) {
        lVar6 = *(long *)(lVar6 + 8);
        func_0x000107c614f0();
        (**(code **)(lVar6 + 8))();
        func_0x000107c615e8(lVar4);
      }
    }
  }
LAB_10111204c:
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 101112090; end: 10111216b; -[_TtC32MapFriendFocusViewImplementation23FocusCardsBusinessLogic friendProfileDidDismiss:] */

/* WARNING: Possible PIC construction at 0x0001011120f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101112128: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011120fc) */
/* WARNING: Removing unreachable block (ram,0x00010111212c) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101112090(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112d5e748);
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c5d984();
    func_0x000107c61180();
    func_0x000107c5faec();
    param_1 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10111216c; end: 101112177; -[_TtC32MapFriendFocusViewImplementation23FocusCardsBusinessLogic plusGiftingPageDidDismiss] */

/* WARNING: Possible PIC construction at 0x0001011121b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011121cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011121b4) */
/* WARNING: Removing unreachable block (ram,0x0001011121d0) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10111216c(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 101112178; end: 1011121f7;  */

/* WARNING: Possible PIC construction at 0x0001011121b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011121cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011121b4) */
/* WARNING: Removing unreachable block (ram,0x0001011121d0) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */

void FUN_101112178(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1011121f8; end: 1011122a7; -[_TtC32MapFriendFocusViewImplementation23FocusCardsBusinessLogic permissionsManagerWantsToPresentPermissionsPrompt:] */

/* WARNING: Possible PIC construction at 0x000101112270: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101112280: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101112274) */
/* WARNING: Removing unreachable block (ram,0x000101112284) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011121f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1 + _DAT_112d5e6b0;
  func_0x000107c61618();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126aead8;
    func_0x000107c610f8(PTR_PTR_1126aead8);
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_1);
    func_0x000107c4807c(puVar2,param_2,lVar1,1);
    func_0x000107c3e2c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1011122a8; end: 1011124cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011122a8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long extraout_x8;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  long lStack_70;
  long lStack_68;
  
  lVar1 = _DAT_112d5e7d0;
  if (param_1 - 6U < 3) {
    func_0x000107c61428(unaff_x20 + _DAT_112d5e7d0,auStack_a0,0,0);
    FUN_101113bfc(unaff_x20 + lVar1,auStack_88,0x112d5e670,&UNK_10d9262b0);
    if (lStack_70 == 0) {
      func_0x000101113c44(auStack_88,0x112d5e670,&UNK_10d9262b0);
    }
    else {
      func_0x0001000a8868(auStack_88,lStack_70);
      lVar5 = *(long *)(lStack_70 + -8);
      (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
      (**(code **)(lVar5 + 0x10))(auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
      func_0x000101113c44(auStack_88,0x112d5e670,&UNK_10d9262b0);
      lVar1 = lStack_70;
      lVar4 = lStack_68;
      (**(code **)(lStack_68 + 8))(lStack_70,lStack_68);
      (**(code **)(lVar5 + 8))(auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lStack_70);
      puVar2 = PTR_PTR_1126a6388;
      func_0x000107c610f8(PTR_PTR_1126a6388);
      func_0x000107c5fadc(lVar1,lVar4);
      func_0x000107c6142c(lVar4);
      func_0x000107c45d20(puVar2);
      func_0x000107c61170(lVar1);
      param_1 = param_1 + 2;
      func_0x000107c311bc(param_1);
      func_0x000107c61180();
      func_0x000107c52140(puVar2);
      func_0x000107c61170(param_1);
      uVar3 = 0;
      func_0x000107c311c4(0);
      func_0x000107c61180();
      func_0x000107c58d70(puVar2);
      func_0x000107c61170(uVar3);
      func_0x000107c311c8(param_2);
      func_0x000107c61180();
      func_0x000107c59a30(puVar2);
      func_0x000107c61170(param_2);
      func_0x000107c4d664(*(undefined8 *)(unaff_x20 + _DAT_112d5e7e8));
      func_0x000107c61170(puVar2);
    }
  }
  return;
}



/* Entry: 1011124cc; end: 1011126cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011124cc(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long extraout_x8;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  long lStack_60;
  long lStack_58;
  
  lVar1 = _DAT_112d5e7d0;
  func_0x000107c61428(unaff_x20 + _DAT_112d5e7d0,auStack_90,0,0);
  FUN_101113bfc(unaff_x20 + lVar1,auStack_78,0x112d5e670,&UNK_10d9262b0);
  if (lStack_60 == 0) {
    func_0x000101113c44(auStack_78,0x112d5e670,&UNK_10d9262b0);
  }
  else {
    func_0x0001000a8868(auStack_78,lStack_60);
    lVar5 = *(long *)(lStack_60 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
    (**(code **)(lVar5 + 0x10))(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    func_0x000101113c44(auStack_78,0x112d5e670,&UNK_10d9262b0);
    lVar1 = lStack_60;
    lVar4 = lStack_58;
    (**(code **)(lStack_58 + 8))(lStack_60,lStack_58);
    (**(code **)(lVar5 + 8))(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lStack_60);
    puVar2 = PTR_PTR_1126a6388;
    func_0x000107c610f8(PTR_PTR_1126a6388);
    func_0x000107c5fadc(lVar1,lVar4);
    func_0x000107c6142c(lVar4);
    func_0x000107c45d20(puVar2);
    func_0x000107c61170(lVar1);
    uVar3 = 0x1b;
    func_0x000107c311bc(0x1b);
    func_0x000107c61180();
    func_0x000107c52140(puVar2);
    func_0x000107c61170(uVar3);
    uVar3 = 0;
    func_0x000107c311c4(0);
    func_0x000107c61180();
    func_0x000107c58d70(puVar2);
    func_0x000107c61170(uVar3);
    uVar3 = 8;
    func_0x000107c311c8(8);
    func_0x000107c61180();
    func_0x000107c59a30(puVar2);
    func_0x000107c61170(uVar3);
    func_0x000107c4d664(*(undefined8 *)(unaff_x20 + _DAT_112d5e7e8));
    func_0x000107c61170(puVar2);
  }
  return;
}



/* Entry: 1011126d0; end: 101112717;  */

void FUN_1011126d0(undefined8 param_1)

{
  FUN_1011122a8(param_1,0);
  return;
}



/* Entry: 101112718; end: 10111271f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101112718(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar9;
  long lVar10;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  ulong uStack_70;
  long lStack_68;
  
  lVar8 = _DAT_112d5e7d0;
  func_0x000107c61428(unaff_x20 + _DAT_112d5e7d0,auStack_a0,0,0);
  FUN_101113bfc(unaff_x20 + lVar8,auStack_88,0x112d5e670,&UNK_10d9262b0);
  lVar10 = lStack_68;
  uVar4 = uStack_70;
  if (uStack_70 == 0) {
    func_0x000101113c44(auStack_88,0x112d5e670,&UNK_10d9262b0);
  }
  else {
    func_0x0001000a8868(auStack_88,uStack_70);
    lVar9 = *(long *)(uVar4 - 8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
    (**(code **)(lVar9 + 0x10))(auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    func_0x000101113c44(auStack_88,0x112d5e670,&UNK_10d9262b0);
    uVar3 = uVar4;
    FUN_101141bc8(uVar4,lVar10);
    (**(code **)(lVar9 + 8))(auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),uVar4);
    if (uVar3 != 0) {
      uVar4 = uVar3;
      func_0x000107c49b64();
      if ((uVar4 & 1) == 0) {
        uVar4 = uVar3;
        func_0x000107c439a4();
        func_0x000107c61180();
        uVar5 = uVar4;
        func_0x000107c5fc54();
        func_0x000107c61170(uVar4);
        if (*(long *)(uVar5 + 0x10) != 0) {
          uVar1 = *(undefined8 *)(uVar5 + 0x20);
          uVar2 = *(undefined8 *)(uVar5 + 0x28);
          func_0x000107c61434(uVar2);
          func_0x000107c6142c(uVar5);
          FUN_101113bfc(unaff_x20 + lVar8,auStack_88,0x112d5e670,&UNK_10d9262b0);
          if (uStack_70 == 0) {
            func_0x000101113c44(auStack_88,0x112d5e670,&UNK_10d9262b0);
          }
          else {
            func_0x0001000a8868(auStack_88,uStack_70);
            lVar10 = *(long *)(uStack_70 - 8);
            (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
            (**(code **)(lVar10 + 0x10))(auStack_a0 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0))
            ;
            func_0x000101113c44(auStack_88,0x112d5e670,&UNK_10d9262b0);
            uVar4 = uStack_70;
            lVar8 = lStack_68;
            (**(code **)(lStack_68 + 8))(uStack_70,lStack_68);
            (**(code **)(lVar10 + 8))
                      (auStack_a0 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0),uStack_70);
            puVar6 = PTR_PTR_1126a6388;
            func_0x000107c610f8(PTR_PTR_1126a6388);
            func_0x000107c5fadc(uVar4,lVar8);
            func_0x000107c6142c(lVar8);
            func_0x000107c45d20(puVar6);
            func_0x000107c61170(uVar4);
            uVar7 = 0x1b;
            func_0x000107c311bc(0x1b);
            func_0x000107c61180();
            func_0x000107c52140(puVar6);
            func_0x000107c61170(uVar7);
            uVar7 = 0;
            func_0x000107c311c4(0);
            func_0x000107c61180();
            func_0x000107c58d70(puVar6);
            func_0x000107c61170(uVar7);
            uVar7 = 4;
            func_0x000107c311c8(4);
            func_0x000107c61180();
            func_0x000107c59a30(puVar6);
            func_0x000107c61170(uVar7);
            func_0x000107c4d664(*(undefined8 *)(unaff_x20 + _DAT_112d5e7e8));
            func_0x000107c61170(puVar6);
          }
          FUN_10110ef70(uVar1,uVar2);
          func_0x000107c61170(uVar3);
          func_0x000107c6142c(uVar2);
          return;
        }
        func_0x000107c6142c(uVar5);
      }
      func_0x000107c61170(uVar3);
    }
  }
  return;
}



/* Entry: 101112720; end: 10111284b;  */

void FUN_101112720(undefined8 param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  puVar3 = &UNK_110385a50;
  func_0x000107c613fc(&UNK_110385a50,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = unaff_x20;
  puVar4 = &UNK_110385a78;
  func_0x000107c613fc(&UNK_110385a78,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_101113c84;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  uStack_50 = 0x101113c8c;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_10006eb60;
  puStack_58 = &UNK_110385a90;
  puStack_48 = puVar4;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c61174();
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar1);
  func_0x000107c4c6e4(param_1);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar3);
  puVar3 = puVar4;
  func_0x000107c61544(puVar4,"",0x73,0x4a6,0x38,1);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar3 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10111284c);
  (*pcVar2)();
}



/* Entry: 10111284c; end: 101112a1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10111284c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long extraout_x8;
  long lVar5;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  long lStack_60;
  undefined8 uStack_58;
  
  lVar1 = _DAT_112d5e7d0;
  func_0x000107c61428(param_1 + _DAT_112d5e7d0,auStack_90,0,0);
  FUN_101113bfc(param_1 + lVar1,auStack_78,0x112d5e670,&UNK_10d9262b0);
  if (lStack_60 == 0) {
    func_0x000101113c44(auStack_78,0x112d5e670,&UNK_10d9262b0);
  }
  else {
    func_0x0001000a8868(auStack_78,lStack_60);
    lVar5 = *(long *)(lStack_60 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
    (**(code **)(lVar5 + 0x10))(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    func_0x000101113c44(auStack_78,0x112d5e670,&UNK_10d9262b0);
    lVar1 = lStack_60;
    FUN_101141bc8(lStack_60,uStack_58);
    (**(code **)(lVar5 + 8))(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lStack_60);
    if (lVar1 != 0) {
      func_0x0001000a8868(param_1 + _DAT_112d5e730,*(undefined8 *)(param_1 + _DAT_112d5e730 + 0x18))
      ;
      lVar5 = lVar1;
      func_0x000107c439a4(lVar1);
      func_0x000107c61180();
      lVar2 = lVar5;
      func_0x000107c5fc54();
      func_0x000107c61170(lVar5);
      uVar3 = 0x112d5e858;
      func_0x0001000285a8(0x112d5e858,&UNK_10d925c20);
      func_0x000107c61538();
      uVar4 = 0;
      func_0x00010111bd60(0);
      FUN_10111c004(lVar2,uVar3,uVar4,&PTR_DAT_110386148);
      func_0x000107c61170(lVar1);
      func_0x000107c6142c(lVar2);
    }
  }
  return;
}



/* Entry: 101112a1c; end: 101112a6b; -[_TtC32MapFriendFocusViewImplementation23FocusCardsBusinessLogic didUpdateSummaryInfo:] */

/* WARNING: Possible PIC construction at 0x000101112a54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101112a58) */

void FUN_101112a1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_101112720(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 101112a6c; end: 101112b37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101112a6c(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  
  lVar1 = _DAT_112d5e790;
  func_0x000107c61428(unaff_x20 + _DAT_112d5e790,auStack_88,0,0);
  FUN_101113bfc(unaff_x20 + lVar1,&uStack_70,0x112d5e820,&UNK_10d925800);
  func_0x000101113c44(&uStack_70,0x112d5e820,&UNK_10d925800);
  if (lStack_58 != 0) {
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
    func_0x000107c61428(unaff_x20 + lVar1,auStack_a0,0x21,0);
    FUN_1011141fc(&uStack_70,unaff_x20 + lVar1,0x112d5e820,&UNK_10d925800);
    func_0x000107c614a8(auStack_a0);
  }
  return;
}



/* Entry: 101112b38; end: 101112bd3; -[_TtC32MapFriendFocusViewImplementation23FocusCardsBusinessLogic didCompleteTopicViewerMusicScope:] */

/* WARNING: Possible PIC construction at 0x000101112b7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101112b98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101112bbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101112b80) */
/* WARNING: Removing unreachable block (ram,0x000101112b9c) */
/* WARNING: Removing unreachable block (ram,0x000101112bc0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101112b38(long param_1)

{
  if (*(long *)(param_1 + _DAT_112d5e778) != 0) {
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c5194c();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
  return;
}



/* Entry: 101112bd4; end: 101112beb; -[_TtC32MapFriendFocusViewImplementation23FocusCardsBusinessLogic trayScopeDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101112bd4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112d5e7c0);
  *(undefined8 *)(param_1 + _DAT_112d5e7c0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 101112bec; end: 101112cfb;  */

undefined8 FUN_101112bec(undefined8 param_1,long param_2,ulong param_3,uint param_4)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  lVar2 = param_2;
  uVar3 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar3 & 1;
  lVar4 = lVar5 + uVar7;
  if (SCARRY8(lVar5,uVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101112cac);
    (*pcVar1)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar4) {
    func_0x0001011364e4(lVar4,param_4 & 1);
    uVar7 = param_3;
    func_0x000100029284();
    lVar2 = param_2;
    if (((uint)uVar3 & 1) != ((uint)uVar7 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101112c8c);
      (*pcVar1)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x0001011361f4();
    lVar4 = *unaff_x20;
    goto joined_r0x000101112cc0;
  }
  lVar4 = *unaff_x20;
joined_r0x000101112cc0:
  if ((uVar3 & 1) == 0) {
    func_0x00010111e02c();
    func_0x000107c61434(param_3);
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(*(long *)(lVar4 + 0x38) + lVar2 * 8);
    *(undefined8 *)(*(long *)(lVar4 + 0x38) + lVar2 * 8) = param_1;
  }
  return uVar6;
}



/* Entry: 101112cfc; end: 101113527;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101112cfc(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  long extraout_x8;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long unaff_x20;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  ulong *puVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined1 auStack_f0 [8];
  long alStack_c8 [3];
  undefined1 auStack_b0 [24];
  ulong auStack_98 [3];
  long lStack_80;
  undefined **ppuStack_78;
  
  uVar18 = param_2;
  func_0x000107c49e0c();
  func_0x000107c61180();
  if (uVar18 == 0) {
    uVar18 = 0;
  }
  else {
    auStack_98[0] = CONCAT71(auStack_98[0]._1_7_,2);
    func_0x000107c5fca4();
    func_0x000107c61170(uVar18);
    uVar18 = auStack_98[0] & 0xff;
  }
  lVar21 = _DAT_112d5e7d0;
  func_0x000107c61428(unaff_x20 + _DAT_112d5e7d0,auStack_b0,0,0);
  FUN_101113bfc(unaff_x20 + lVar21,auStack_98,0x112d5e670,&UNK_10d9262b0);
  if (lStack_80 == 0) {
    func_0x000101113c44(auStack_98,0x112d5e670,&UNK_10d9262b0);
  }
  else {
    func_0x0001000a8868(auStack_98,lStack_80);
    lVar23 = *(long *)(lStack_80 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar23 + 0x40));
    (**(code **)(lVar23 + 0x10))(auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    func_0x000101113c44(auStack_98,0x112d5e670,&UNK_10d9262b0);
    lVar14 = lStack_80;
    FUN_101141bc8(lStack_80,ppuStack_78);
    (**(code **)(lVar23 + 8))(auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lStack_80);
    if (lVar14 != 0) {
      if ((uVar18 & 1) == 0) {
        lVar23 = unaff_x20 + _DAT_112d5e6c0;
        lVar5 = lVar23;
        func_0x000107c61618();
        if (lVar5 != 0) {
          lVar22 = *(long *)(lVar23 + 8);
          lVar23 = lVar5;
          func_0x000107c614f0();
          lVar17 = lVar14;
          func_0x000107c439a4(lVar14);
          func_0x000107c61180();
          lVar6 = lVar17;
          func_0x000107c5fc54();
          func_0x000107c61170(lVar17);
          (**(code **)(lVar22 + 0x30))(lVar6,lVar23,lVar22);
          func_0x000107c615e8(lVar5);
          func_0x000107c6142c(lVar6);
        }
      }
      func_0x000107c61170(lVar14);
    }
  }
  uVar7 = 0;
  FUN_101114dbc(0,0x112d5e958,&PTR_PTR_1126a6398);
  ppuStack_78 = &PTR_DAT_110387f90;
  auStack_98[0] = param_2;
  lStack_80 = uVar7;
  func_0x000107c61428(unaff_x20 + lVar21,alStack_c8,0x21,0);
  func_0x000107c61174();
  FUN_1011141fc(auStack_98,unaff_x20 + lVar21,0x112d5e670,&UNK_10d9262b0);
  func_0x000107c614a8(alStack_c8);
  func_0x0001000a8868(unaff_x20 + _DAT_112d5e730,*(undefined8 *)(unaff_x20 + _DAT_112d5e730 + 0x18))
  ;
  FUN_101115408(param_2);
  if ((uVar18 & 1) != 0) {
    return;
  }
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d5e7e0);
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c466c0(param_1);
  func_0x000107c4d664(uVar7);
  func_0x000107c61170(puVar8);
  lVar21 = unaff_x20 + _DAT_112d5e6c0;
  lVar14 = lVar21;
  func_0x000107c61618();
  if (lVar14 != 0) {
    lVar21 = *(long *)(lVar21 + 8);
    uVar18 = param_2;
    func_0x000107c439a4(param_2);
    func_0x000107c61180();
    uVar16 = uVar18;
    puVar8 = PTR___sSSN_11034da80;
    func_0x000107c5fc54();
    func_0x000107c61170(uVar18);
    uVar18 = param_2;
    func_0x000107c44fdc(param_2);
    func_0x000107c61180();
    uVar19 = uVar18;
    func_0x000107c5faec();
    func_0x000107c61170(uVar18);
    if (param_4 == 0) {
      param_3 = 0;
    }
    else {
      func_0x000107c5fadc(param_3);
    }
    lVar23 = lVar14;
    func_0x000107c614f0(lVar14);
    uVar7 = param_3;
    func_0x000107c31150(param_3);
    func_0x000107c61170(param_3);
    (**(code **)(lVar21 + 0x20))(uVar16,uVar19,puVar8,uVar7,lVar23,lVar21);
    func_0x000107c615e8(lVar14);
    func_0x000107c6142c(uVar16);
    func_0x000107c6142c(puVar8);
  }
  uVar18 = param_2;
  func_0x000107c439a4();
  func_0x000107c61180();
  uVar16 = uVar18;
  func_0x000107c5fc54();
  func_0x000107c61170(uVar18);
  uVar18 = uVar16;
  if (*(long *)(uVar16 + 0x10) != 0) {
    uVar19 = *(ulong *)(uVar16 + 0x20);
    uVar18 = *(ulong *)(uVar16 + 0x28);
    func_0x000107c61434(uVar18);
    func_0x000107c6142c(uVar16);
    uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112d5e6e8);
    func_0x000107c3e884(uVar9);
    func_0x000107c61180();
    uVar7 = uVar9;
    func_0x000107c5fc54();
    func_0x000107c61170(uVar9);
    uVar16 = uVar19;
    func_0x000100077018(uVar19,uVar18,uVar7);
    func_0x000107c6142c(uVar7);
    if ((uVar16 & 1) != 0) {
      uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d5e7c8);
      puVar8 = &UNK_110385f28;
      func_0x000107c613fc(&UNK_110385f28,0x28,7);
      *(undefined8 *)(puVar8 + 0x10) = uVar7;
      *(ulong *)(puVar8 + 0x18) = uVar19;
      *(ulong *)(puVar8 + 0x20) = uVar18;
      func_0x000107c61174(uVar7);
      uVar7 = 0x112d5e960;
      func_0x0001000285a8(0x112d5e960,&UNK_10d9258e0);
      uVar9 = 0x12;
      func_0x0001001ca524(0x12,0,0x3c,4,0,0,&UNK_10d9258d8,puVar8,uVar7);
      func_0x000107c61574(puVar8);
      func_0x000107c61574(uVar9);
      goto LAB_1011131e4;
    }
  }
  func_0x000107c6142c(uVar18);
LAB_1011131e4:
  func_0x000107c439a4();
  func_0x000107c61180();
  uVar18 = param_2;
  func_0x000107c5fc54();
  func_0x000107c61170(param_2);
  lVar21 = _DAT_112d5e7d8;
  uVar16 = *(ulong *)(uVar18 + 0x10);
  lVar14 = *(long *)(unaff_x20 + _DAT_112d5e6e0);
  if (uVar16 != 0) {
    uVar19 = 0;
    puVar20 = (ulong *)(uVar18 + 0x28);
    do {
      if (*(ulong *)(uVar18 + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101113510);
        (*pcVar4)();
      }
      uVar2 = puVar20[-1];
      uVar3 = *puVar20;
      func_0x000107c61434(uVar3);
      uVar10 = uVar2;
      func_0x000107c5fadc(uVar2,uVar3);
      lVar23 = lVar14;
      func_0x000107c4e680();
      func_0x000107c61180();
      func_0x000107c61170(uVar10);
      if (lVar23 != 0) {
        func_0x00010006c804();
        func_0x000107c61428(unaff_x20 + lVar21,auStack_98,0x21,0);
        func_0x000107c61174();
        uVar11 = *(ulong *)(unaff_x20 + lVar21);
        func_0x000107c61558();
        lVar17 = *(long *)(unaff_x20 + lVar21);
        *(undefined8 *)(unaff_x20 + lVar21) = 0x8000000000000000;
        uVar10 = uVar2;
        uVar13 = uVar3;
        alStack_c8[0] = lVar17;
        func_0x000100029284();
        uVar15 = (ulong)~(uint)uVar13 & 1;
        lVar5 = *(long *)(lVar17 + 0x10) + uVar15;
        if (SCARRY8(*(long *)(lVar17 + 0x10),uVar15)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101113514);
          (*pcVar4)();
        }
        if (*(long *)(lVar17 + 0x18) < lVar5) {
          func_0x0001011364e4(lVar5,uVar11);
          uVar10 = uVar2;
          uVar11 = uVar3;
          func_0x000100029284();
          if (((uint)uVar13 & 1) != ((uint)uVar11 & 1)) {
            func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101113528);
            (*pcVar4)();
          }
        }
        else if ((uVar11 & 1) == 0) {
          func_0x0001011361f4();
        }
        lVar5 = alStack_c8[0];
        if ((uVar13 & 1) == 0) {
          lVar17 = alStack_c8[0] + (uVar10 >> 6) * 8;
          *(ulong *)(lVar17 + 0x40) = *(ulong *)(lVar17 + 0x40) | 1L << (uVar10 & 0x3f);
          puVar1 = (ulong *)(*(long *)(alStack_c8[0] + 0x30) + uVar10 * 0x10);
          *puVar1 = uVar2;
          puVar1[1] = uVar3;
          *(long *)(*(long *)(alStack_c8[0] + 0x38) + uVar10 * 8) = lVar23;
          if (SCARRY8(*(long *)(alStack_c8[0] + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101113518);
            (*pcVar4)();
          }
          *(long *)(alStack_c8[0] + 0x10) = *(long *)(alStack_c8[0] + 0x10) + 1;
          func_0x000107c61434(uVar3);
        }
        else {
          func_0x000107c61170(*(undefined8 *)(*(long *)(alStack_c8[0] + 0x38) + uVar10 * 8));
          *(long *)(*(long *)(lVar5 + 0x38) + uVar10 * 8) = lVar23;
        }
        *(long *)(unaff_x20 + lVar21) = lVar5;
        func_0x000107c614a8(auStack_98);
        func_0x000100070bfc();
        func_0x000107c61170(lVar23);
      }
      uVar19 = uVar19 + 1;
      func_0x000107c6142c(uVar3);
      puVar20 = puVar20 + 2;
    } while (uVar16 != uVar19);
  }
  func_0x000107c6142c(uVar18);
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d5e6b8);
  uVar9 = ((undefined8 *)(unaff_x20 + _DAT_112d5e6b8))[1];
  uVar12 = uVar7;
  func_0x000107c5fadc(uVar7,uVar9);
  func_0x000107c4e680();
  func_0x000107c61180();
  func_0x000107c61170(uVar12);
  if (lVar14 != 0) {
    func_0x00010006c804();
    func_0x000107c61428(unaff_x20 + lVar21,auStack_98,0x21,0);
    func_0x000107c61174(lVar14);
    uVar12 = *(undefined8 *)(unaff_x20 + lVar21);
    func_0x000107c61558(uVar12);
    alStack_c8[0] = *(long *)(unaff_x20 + lVar21);
    *(undefined8 *)(unaff_x20 + lVar21) = 0x8000000000000000;
    lVar23 = lVar14;
    FUN_101112bec(lVar14,uVar7,uVar9,uVar12);
    *(long *)(unaff_x20 + lVar21) = alStack_c8[0];
    func_0x000107c614a8(auStack_98);
    func_0x000107c61170(lVar23);
    func_0x000100070bfc();
    func_0x000107c61170(lVar14);
  }
  return;
}



/* Entry: 101113528; end: 101113687;  */

/* WARNING: Possible PIC construction at 0x000101113620: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101113648: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101113658: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010111364c) */
/* WARNING: Removing unreachable block (ram,0x000101113624) */
/* WARNING: Removing unreachable block (ram,0x00010111365c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101113528(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  
  lVar1 = unaff_x20 + _DAT_112d5e6b0;
  func_0x000107c61618();
  if (lVar1 == 0) {
    return;
  }
  puVar2 = PTR_PTR_1126aead8;
  func_0x000107c610f8(PTR_PTR_1126aead8);
  func_0x000107c4807c();
  func_0x00010439c014(0);
  func_0x000107c610f8();
  uVar3 = 0x36;
  func_0x00010439b9d8(0x36,0,0,0x7c,0,0,0xffffffffffffffff,0);
  func_0x00010375e4c0(0);
  func_0x000107c610f8();
  func_0x000107c61174(puVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  func_0x00010375e178(puVar2,uVar3,0,0,unaff_x20);
  lVar4 = *(long *)(unaff_x20 + _DAT_112d5e768);
  lVar1 = lVar4;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x000107c42c1c(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 101113688; end: 10111388f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101113688(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long extraout_x8;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  long lStack_60;
  undefined8 uStack_58;
  
  lVar5 = *(long *)(unaff_x20 + _DAT_112d5e740);
  lVar1 = lVar5;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar5);
    func_0x000107c61180();
    func_0x000107c615e8();
    lVar1 = _DAT_112d5e7d0;
    func_0x000107c61428(unaff_x20 + _DAT_112d5e7d0,auStack_90,0,0);
    FUN_101113bfc(unaff_x20 + lVar1,auStack_78,0x112d5e670,&UNK_10d9262b0);
    if (lStack_60 == 0) {
      func_0x000101113c44(auStack_78,0x112d5e670,&UNK_10d9262b0);
    }
    else {
      func_0x0001000a8868(auStack_78,lStack_60);
      lVar5 = *(long *)(lStack_60 + -8);
      (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
      (**(code **)(lVar5 + 0x10))(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
      func_0x000101113c44(auStack_78,0x112d5e670,&UNK_10d9262b0);
      lVar1 = lStack_60;
      FUN_101141bc8(lStack_60,uStack_58);
      (**(code **)(lVar5 + 8))(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lStack_60);
      if (lVar1 != 0) {
        func_0x0001000a8868(unaff_x20 + _DAT_112d5e730,
                            *(undefined8 *)(unaff_x20 + _DAT_112d5e730 + 0x18));
        lVar5 = lVar1;
        func_0x000107c439a4(lVar1);
        func_0x000107c61180();
        lVar2 = lVar5;
        func_0x000107c5fc54();
        func_0x000107c61170(lVar5);
        uVar3 = 0x112d5e858;
        func_0x0001000285a8(0x112d5e858,&UNK_10d925c20);
        func_0x000107c61538();
        uVar4 = 0;
        func_0x00010111bd60(0);
        FUN_10111c004(lVar2,uVar3,uVar4,&PTR_DAT_110386148);
        func_0x000107c61170(lVar1);
        func_0x000107c6142c(lVar2);
      }
    }
  }
  return;
}



/* Entry: 101113890; end: 101113bfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101113890(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar9;
  long lVar10;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  ulong uStack_70;
  long lStack_68;
  
  lVar8 = _DAT_112d5e7d0;
  func_0x000107c61428(unaff_x20 + _DAT_112d5e7d0,auStack_a0,0,0);
  FUN_101113bfc(unaff_x20 + lVar8,auStack_88,0x112d5e670,&UNK_10d9262b0);
  lVar10 = lStack_68;
  uVar4 = uStack_70;
  if (uStack_70 == 0) {
    func_0x000101113c44(auStack_88,0x112d5e670,&UNK_10d9262b0);
  }
  else {
    func_0x0001000a8868(auStack_88,uStack_70);
    lVar9 = *(long *)(uVar4 - 8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
    (**(code **)(lVar9 + 0x10))(auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    func_0x000101113c44(auStack_88,0x112d5e670,&UNK_10d9262b0);
    uVar3 = uVar4;
    FUN_101141bc8(uVar4,lVar10);
    (**(code **)(lVar9 + 8))(auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),uVar4);
    if (uVar3 != 0) {
      uVar4 = uVar3;
      func_0x000107c49b64();
      if ((uVar4 & 1) == 0) {
        uVar4 = uVar3;
        func_0x000107c439a4();
        func_0x000107c61180();
        uVar5 = uVar4;
        func_0x000107c5fc54();
        func_0x000107c61170(uVar4);
        if (*(long *)(uVar5 + 0x10) != 0) {
          uVar1 = *(undefined8 *)(uVar5 + 0x20);
          uVar2 = *(undefined8 *)(uVar5 + 0x28);
          func_0x000107c61434(uVar2);
          func_0x000107c6142c(uVar5);
          FUN_101113bfc(unaff_x20 + lVar8,auStack_88,0x112d5e670,&UNK_10d9262b0);
          if (uStack_70 == 0) {
            func_0x000101113c44(auStack_88,0x112d5e670,&UNK_10d9262b0);
          }
          else {
            func_0x0001000a8868(auStack_88,uStack_70);
            lVar10 = *(long *)(uStack_70 - 8);
            (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
            (**(code **)(lVar10 + 0x10))(auStack_a0 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0))
            ;
            func_0x000101113c44(auStack_88,0x112d5e670,&UNK_10d9262b0);
            uVar4 = uStack_70;
            lVar8 = lStack_68;
            (**(code **)(lStack_68 + 8))(uStack_70,lStack_68);
            (**(code **)(lVar10 + 8))
                      (auStack_a0 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0),uStack_70);
            puVar6 = PTR_PTR_1126a6388;
            func_0x000107c610f8(PTR_PTR_1126a6388);
            func_0x000107c5fadc(uVar4,lVar8);
            func_0x000107c6142c(lVar8);
            func_0x000107c45d20(puVar6);
            func_0x000107c61170(uVar4);
            uVar7 = 0x1b;
            func_0x000107c311bc(0x1b);
            func_0x000107c61180();
            func_0x000107c52140(puVar6);
            func_0x000107c61170(uVar7);
            uVar7 = 0;
            func_0x000107c311c4(0);
            func_0x000107c61180();
            func_0x000107c58d70(puVar6);
            func_0x000107c61170(uVar7);
            uVar7 = 4;
            func_0x000107c311c8(4);
            func_0x000107c61180();
            func_0x000107c59a30(puVar6);
            func_0x000107c61170(uVar7);
            func_0x000107c4d664(*(undefined8 *)(unaff_x20 + _DAT_112d5e7e8));
            func_0x000107c61170(puVar6);
          }
          FUN_10110ef70(uVar1,uVar2);
          func_0x000107c61170(uVar3);
          func_0x000107c6142c(uVar2);
          return;
        }
        func_0x000107c6142c(uVar5);
      }
      func_0x000107c61170(uVar3);
    }
  }
  return;
}



/* Entry: 101113bfc; end: 101113c83;  */

undefined8 FUN_101113bfc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 101113c84; end: 101113cb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101113c84(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long extraout_x8;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  long lStack_60;
  undefined8 uStack_58;
  
  lVar1 = _DAT_112d5e7d0;
  lVar4 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar4 + _DAT_112d5e7d0,auStack_90,0,0);
  FUN_101113bfc(lVar4 + lVar1,auStack_78,0x112d5e670,&UNK_10d9262b0);
  if (lStack_60 == 0) {
    func_0x000101113c44(auStack_78,0x112d5e670,&UNK_10d9262b0);
  }
  else {
    func_0x0001000a8868(auStack_78,lStack_60);
    lVar5 = *(long *)(lStack_60 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
    (**(code **)(lVar5 + 0x10))(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    func_0x000101113c44(auStack_78,0x112d5e670,&UNK_10d9262b0);
    lVar1 = lStack_60;
    FUN_101141bc8(lStack_60,uStack_58);
    (**(code **)(lVar5 + 8))(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lStack_60);
    if (lVar1 != 0) {
      func_0x0001000a8868(lVar4 + _DAT_112d5e730,*(undefined8 *)(lVar4 + _DAT_112d5e730 + 0x18));
      lVar4 = lVar1;
      func_0x000107c439a4(lVar1);
      func_0x000107c61180();
      lVar5 = lVar4;
      func_0x000107c5fc54();
      func_0x000107c61170(lVar4);
      uVar2 = 0x112d5e858;
      func_0x0001000285a8(0x112d5e858,&UNK_10d925c20);
      func_0x000107c61538();
      uVar3 = 0;
      func_0x00010111bd60(0);
      FUN_10111c004(lVar5,uVar2,uVar3,&PTR_DAT_110386148);
      func_0x000107c61170(lVar1);
      func_0x000107c6142c(lVar5);
    }
  }
  return;
}



/* Entry: 101113cb8; end: 101113d17;  */

void FUN_101113cb8(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101114ec8;
  plVar3[6] = lVar1;
  plVar3[7] = lVar4;
  plVar3[5] = lVar2;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[8] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10110e13c,lVar1,lVar2);
  return;
}



/* Entry: 101113d18; end: 101113d87;  */

void FUN_101113d18(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101114e98;
  FUN_100f7cc44(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 101113d88; end: 101113dd7;  */

void FUN_101113d88(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101114e9c;
  plVar3[2] = lVar2;
  plVar3[3] = lVar1;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[4] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10110f99c,lVar1,lVar2);
  return;
}



/* Entry: 101113dd8; end: 101113e47;  */

void FUN_101113dd8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101114ea0;
  FUN_100f7cc44(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 101113e48; end: 101113e4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101113e48(long *param_1)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_101111428(*(undefined8 *)(lVar2 + _DAT_112fed870),
                  ((undefined8 *)(lVar2 + _DAT_112fed870))[1]);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 101113e50; end: 101113e93;  */

void FUN_101113e50(void)

{
  func_0x000103a2e590(FUN_101110118,0,0x10111011c,0,FUN_101113e94);
  return;
}



/* Entry: 101113e94; end: 101113eb3;  */

void FUN_101113e94(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_1011101c0();
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 101113eb4; end: 101113f6b;  */

void FUN_101113eb4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long unaff_x20;
  long unaff_x22;
  long lVar10;
  long lVar11;
  long lVar12;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar6 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  lVar7 = *(long *)(unaff_x20 + 0x38);
  lVar10 = *(long *)(unaff_x20 + 0x40);
  lVar12 = *(long *)(unaff_x20 + 0x50);
  lVar11 = *(long *)(unaff_x20 + 0x48);
  lVar4 = *(long *)(unaff_x20 + 0x58);
  lVar8 = *(long *)(unaff_x20 + 0x60);
  plVar9 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = (long)FUN_101113f6c;
  plVar9[0x10] = lVar4;
  plVar9[0x11] = lVar8;
  plVar9[0xf] = lVar12;
  plVar9[0xe] = lVar11;
  plVar9[0xc] = lVar7;
  plVar9[0xd] = lVar10;
  plVar9[10] = lVar6;
  plVar9[0xb] = lVar3;
  plVar9[8] = lVar5;
  plVar9[9] = lVar2;
  plVar9[7] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10110f72c,0,0);
  return;
}



/* Entry: 101113f6c; end: 101113fa7;  */

void FUN_101113f6c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101113fa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101113fa8; end: 101113faf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101113fa8(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    if (param_1 != 0) {
      lVar7 = lVar2;
      func_0x0001068751fc();
      func_0x000107c61180();
      if (lVar7 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10110f1ec);
        (*pcVar1)();
      }
      puVar3 = PTR_PTR_1126afde0;
      func_0x000107c61168();
      func_0x000107c409d8();
      func_0x000107c61180();
      func_0x000107c61170(lVar7);
      lVar7 = *(long *)(lVar2 + _DAT_112d5e700);
      func_0x000107c61174();
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar7 != 0) {
        puVar4 = &UNK_110385cd0;
        func_0x000107c613fc(&UNK_110385cd0,0x20,7);
        *(long *)(puVar4 + 0x10) = lVar7;
        *(undefined **)(puVar4 + 0x18) = puVar3;
        puVar5 = &UNK_110385cf8;
        func_0x000107c613fc(&UNK_110385cf8,0x20,7);
        *(undefined **)(puVar5 + 0x10) = &UNK_10d925868;
        *(undefined **)(puVar5 + 0x18) = puVar4;
        func_0x000107c61174(puVar3);
        func_0x000107c615f0(lVar7);
        uVar6 = 0x12;
        func_0x0001001ca524(0x12,0,0x3c,4,0,0,&UNK_10d925870,puVar5,PTR___sytN_11034f1b0 + 8);
        func_0x000107c61170(puVar3);
        func_0x000107c61170(puVar3);
        func_0x000107c61170(lVar2);
        func_0x000107c615e8(lVar7);
        func_0x000107c61574(puVar5);
        func_0x000107c61574(uVar6);
        return;
      }
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar3);
    }
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 101113fb0; end: 101113fdb;  */

void FUN_101113fb0(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101113fdc; end: 10111402b;  */

void FUN_101113fdc(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101114ea4;
  plVar3[2] = lVar2;
  plVar3[3] = lVar1;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[4] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10110f99c,lVar1,lVar2);
  return;
}



/* Entry: 10111402c; end: 10111409b;  */

void FUN_10111402c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101114ea8;
  FUN_100f7cc44(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 10111409c; end: 1011140c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10111409c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lVar8;
  undefined8 uVar9;
  undefined1 auStack_c8 [24];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long alStack_88 [3];
  undefined8 uStack_70;
  
  lVar8 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  bVar2 = *(byte *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar8 + 0x10,auStack_c8,0,0);
  lVar8 = lVar8 + 0x10;
  func_0x000107c61618();
  if (lVar8 != 0) {
    func_0x000101114dfc(lVar8 + _DAT_112d5e728,&uStack_b0);
    func_0x000107c61170(lVar8);
    FUN_100ca3f8c(&uStack_b0,alStack_88);
    uStack_b0 = 0;
    uStack_a8 = 0xe000000000000000;
    func_0x000107c4077c(uVar1);
    puVar3 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08;
    puVar6 = PTR___ss26DefaultStringInterpolationVN_11034ec00;
    func_0x000107c5fddc(&uStack_b0,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    func_0x000107c5fb78(0x202c,0xe200000000000000);
    func_0x000107c4077c(uVar1);
    uVar9 = param_2;
    func_0x000107c5fddc(param_2,&uStack_b0,puVar6,puVar3);
    uVar4 = uStack_a8;
    uVar7 = uStack_b0;
    plVar5 = alStack_88;
    func_0x0001000a8868(plVar5,uStack_70);
    func_0x000107c4077c(uVar1);
    func_0x000107c4077c(uVar1);
    lVar8 = *plVar5;
    puVar6 = PTR_PTR_1126aead8;
    func_0x000107c610f8(PTR_PTR_1126aead8);
    func_0x000107c4807c();
    func_0x00010438ae00(param_2,uVar9,uVar7,uVar4,*(undefined8 *)(&UNK_10d9258f0 + (ulong)bVar2 * 8)
                        ,puVar6,lVar8);
    func_0x000107c42c1c(*(undefined8 *)(lVar8 + 0x28));
    func_0x000107c6142c(uVar4);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(uVar7);
    func_0x0001000834e4(alStack_88);
  }
  return;
}



/* Entry: 1011140c4; end: 101114103;  */

void FUN_1011140c4(void)

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



/* Entry: 101114104; end: 10111410f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101114104(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_58,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112d5e758;
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + _DAT_112d5e758);
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c61170();
      uVar4 = *(undefined8 *)(lVar2 + lVar1);
      func_0x000107c61174(uVar4);
      uVar5 = uVar4;
      func_0x000107c4ffe8();
      func_0x000107c61180();
      func_0x000107c61170(uVar4);
      func_0x000107c615e8(uVar5);
    }
    uVar5 = *(undefined8 *)(lVar2 + _DAT_112d5e760);
    func_0x000107c61174(uVar5);
    func_0x000107c5cae4(uVar7);
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c61174(lVar2);
    func_0x000104314d44(uVar6,uVar7,lVar3,1,0,0,0,0,0);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(lVar3);
    func_0x000107c42c1c(*(undefined8 *)(lVar2 + lVar1));
    func_0x000107c61170(lVar3);
    func_0x000107c61170(uVar6);
  }
  return;
}



/* Entry: 101114110; end: 10111413b;  */

void FUN_101114110(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10111413c; end: 10111418b;  */

void FUN_10111413c(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101114eac;
  plVar3[0xf] = lVar2;
  plVar3[0x10] = lVar1;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[0x11] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10110e80c,lVar1,lVar2);
  return;
}



/* Entry: 10111418c; end: 1011141fb;  */

void FUN_10111418c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101114eb0;
  FUN_100f7cc44(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 1011141fc; end: 101114243;  */

undefined8 FUN_1011141fc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x28))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 101114244; end: 1011142c3;  */

void FUN_101114244(void)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  uVar3 = *(undefined4 *)(unaff_x20 + 0x30);
  plVar6 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = 0x101114eb4;
  *(undefined4 *)(plVar6 + 10) = uVar3;
  plVar6[4] = lVar4;
  plVar6[5] = lVar2;
  plVar6[2] = lVar5;
  plVar6[3] = lVar1;
  lVar4 = 0;
  func_0x000107c5fcec();
  lVar5 = lVar4;
  func_0x000107c5fce8();
  plVar6[6] = lVar5;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar6[7] = lVar4;
  plVar6[8] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10110cd9c,lVar4,lVar5);
  return;
}



/* Entry: 1011142c4; end: 101114327;  */

void FUN_1011142c4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x101114eb8;
  plVar5[7] = lVar3;
  plVar5[8] = lVar2;
  plVar5[5] = lVar4;
  plVar5[6] = lVar1;
  lVar3 = 0;
  func_0x000107c5fcec();
  lVar4 = lVar3;
  func_0x000107c5fce8();
  plVar5[9] = lVar4;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar3,lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10110de64,lVar3,lVar4);
  return;
}



/* Entry: 101114328; end: 101114397;  */

void FUN_101114328(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101114ebc;
  FUN_100f7cc44(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 101114398; end: 1011143cb;  */

void FUN_101114398(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1011143cc; end: 10111442f;  */

void FUN_1011143cc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x101114ec0;
  plVar5[7] = lVar3;
  plVar5[8] = lVar2;
  plVar5[5] = lVar4;
  plVar5[6] = lVar1;
  lVar3 = 0;
  func_0x000107c5fcec();
  lVar4 = lVar3;
  func_0x000107c5fce8();
  plVar5[9] = lVar4;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar3,lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10110de64,lVar3,lVar4);
  return;
}



/* Entry: 101114430; end: 10111449f;  */

void FUN_101114430(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101114ec4;
  FUN_100f7cc44(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 1011144a0; end: 1011144d3;  */

undefined8 FUN_1011144a0(undefined8 param_1)

{
  (*(code *)&DAT_10266d714)();
  return param_1;
}



/* Entry: 1011144d4; end: 10111453f;  */

void FUN_1011144d4(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101114540;
  plVar3[6] = lVar2;
  plVar3[7] = lVar4;
  plVar3[4] = param_1;
  plVar3[5] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10110bc80,0,0);
  return;
}



/* Entry: 101114540; end: 10111457b;  */

void FUN_101114540(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101114578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10111457c; end: 10111459f;  */

undefined8 FUN_10111457c(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1011145a0; end: 101114dbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 **
FUN_1011145a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined1 **ppuVar13;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  byte in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  byte in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  byte in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  long in_stack_000000d0;
  long in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 auStack_220 [4];
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined1 *puStack_1d0;
  undefined8 uStack_1c8;
  uint uStack_1bc;
  undefined8 uStack_1b8;
  uint uStack_1ac;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  uint uStack_17c;
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
  undefined1 *puStack_118;
  undefined1 *puStack_110;
  undefined8 auStack_108 [3];
  undefined8 uStack_f0;
  undefined **ppuStack_e8;
  undefined8 auStack_e0 [3];
  undefined8 uStack_c8;
  undefined **ppuStack_c0;
  undefined1 auStack_b8 [24];
  long lStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [24];
  long lStack_78;
  undefined8 uStack_70;
  
  uStack_170 = in_stack_000000b8;
  uStack_178 = in_stack_000000b0;
  uStack_17c = (uint)in_stack_000000a8;
  uStack_188 = in_stack_000000a0;
  uStack_190 = in_stack_00000098;
  uStack_198 = in_stack_00000090;
  uStack_1a0 = in_stack_00000088;
  uStack_1a8 = in_stack_00000080;
  uStack_1ac = (uint)in_stack_00000078;
  uStack_1b8 = in_stack_00000070;
  uStack_150 = in_stack_00000068;
  uStack_1bc = (uint)in_stack_00000060;
  uStack_130 = in_stack_00000058;
  uStack_128 = in_stack_00000050;
  uStack_138 = in_stack_00000048;
  uStack_140 = in_stack_00000040;
  uStack_120 = in_stack_00000038;
  uStack_1c8 = in_stack_00000030;
  uStack_148 = in_stack_00000028;
  uStack_1d8 = in_stack_00000020;
  lStack_78 = in_stack_000000d0;
  uStack_70 = in_stack_000000e8;
  uStack_200 = param_10;
  auStack_220[3] = param_9;
  uStack_1f8 = in_stack_000000f0;
  auStack_220[1] = param_4;
  auStack_220[2] = param_5;
  uStack_1f0 = param_1;
  uStack_1e8 = param_2;
  uStack_1e0 = param_3;
  uStack_168 = param_6;
  uStack_160 = param_7;
  uStack_158 = param_8;
  func_0x0001000c5db4(auStack_90);
  (**(code **)(*(long *)(in_stack_000000d0 + -8) + 0x20))();
  lStack_a0 = in_stack_000000e0;
  uStack_98 = in_stack_000000f8;
  puVar9 = auStack_b8;
  func_0x0001000c5db4();
  (**(code **)(*(long *)(in_stack_000000e0 + -8) + 0x20))();
  FUN_101111a0c();
  puStack_1d0 = puVar9;
  func_0x000107c610f8();
  lVar2 = lStack_78;
  func_0x0001000c6518(auStack_90,lStack_78);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar15 = (undefined8 *)((long)auStack_220 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar15);
  lVar2 = lStack_a0;
  func_0x0001000c6518(auStack_b8,lStack_a0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar17 = (undefined8 *)((long)puVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12_00 + 0x10))(puVar17);
  uVar14 = *puVar15;
  uVar16 = *puVar17;
  uVar10 = 0;
  func_0x000101121fd4();
  ppuStack_c0 = &PTR_DAT_1103866a0;
  uVar11 = 0;
  auStack_e0[0] = uVar14;
  uStack_c8 = uVar10;
  func_0x00010111bd60();
  ppuStack_e8 = &PTR_DAT_110386148;
  auStack_108[0] = uVar16;
  uStack_f0 = uVar11;
  func_0x000107c61614(puVar9 + _DAT_112d5e6b0,0);
  puVar1 = puVar9 + _DAT_112d5e6c0;
  *(undefined8 *)(puVar1 + 8) = 0;
  func_0x000107c61614(puVar1,0);
  lVar2 = _DAT_112d5e6c8;
  puVar12 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar3 = _DAT_112d5e6d0;
  *(undefined **)(puVar9 + lVar2) = puVar12;
  uVar10 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  lVar2 = _DAT_112d5e7d8;
  *(undefined8 *)(puVar9 + lVar3) = uVar10;
  *(undefined **)(puVar9 + _DAT_112d5e6d8) = PTR___swiftEmptySetSingleton_11034f1d8;
  puVar15 = (undefined8 *)(puVar9 + _DAT_112d5e790);
  puVar15[1] = 0;
  *puVar15 = 0;
  puVar15[3] = 0;
  puVar15[2] = 0;
  puVar15[4] = 0;
  *(undefined8 *)(puVar9 + _DAT_112d5e7c0) = 0;
  puVar15 = (undefined8 *)(puVar9 + _DAT_112d5e7d0);
  puVar15[1] = 0;
  *puVar15 = 0;
  puVar15[3] = 0;
  puVar15[2] = 0;
  puVar15[4] = 0;
  puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_101136fcc();
  lVar3 = _DAT_112d5e7e0;
  *(undefined **)(puVar9 + lVar2) = puVar12;
  FUN_101114dbc(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar10 = 0;
  func_0x000107c60110(0);
  puVar12 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c49470();
  func_0x000107c61170(uVar10);
  lVar2 = _DAT_112d5e7e8;
  *(undefined **)(puVar9 + lVar3) = puVar12;
  puVar12 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar3 = _DAT_112d5e7f0;
  *(undefined **)(puVar9 + lVar2) = puVar12;
  uVar10 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(puVar9 + lVar3) = uVar10;
  *(undefined8 *)(puVar9 + _DAT_112d5e6b8) = uStack_1f0;
  *(undefined8 *)((long)(puVar9 + _DAT_112d5e6b8) + 8) = uStack_1e8;
  *(undefined8 *)(puVar1 + 8) = uStack_1f8;
  func_0x000107c61604(puVar1,uStack_1e0);
  *(undefined8 *)(puVar9 + _DAT_112d5e6e0) = param_4;
  *(undefined8 *)(puVar9 + _DAT_112d5e6e8) = param_5;
  *(undefined8 *)(puVar9 + _DAT_112d5e6f0) = uStack_168;
  *(undefined8 *)(puVar9 + _DAT_112d5e6f8) = uStack_160;
  *(undefined8 *)(puVar9 + _DAT_112d5e700) = uStack_158;
  *(undefined8 *)(puVar9 + _DAT_112d5e708) = param_9;
  *(undefined8 *)(puVar9 + _DAT_112d5e710) = param_10;
  func_0x000101114dfc(auStack_e0,puVar9 + _DAT_112d5e728);
  func_0x000101114dfc(auStack_108,puVar9 + _DAT_112d5e730);
  uVar8 = uStack_170;
  uVar7 = uStack_178;
  uVar6 = uStack_188;
  uVar5 = uStack_190;
  uVar4 = uStack_198;
  uVar16 = uStack_1a0;
  uVar14 = uStack_1a8;
  uVar11 = uStack_1c8;
  uVar10 = uStack_1d8;
  puVar12 = PTR_s_init_1125d9248;
  *(undefined8 *)(puVar9 + _DAT_112d5e738) = uStack_1d8;
  *(undefined8 *)(puVar9 + _DAT_112d5e740) = uStack_148;
  *(undefined8 *)(puVar9 + _DAT_112d5e748) = uStack_1c8;
  *(undefined8 *)(puVar9 + _DAT_112d5e750) = uStack_120;
  *(undefined8 *)(puVar9 + _DAT_112d5e758) = uStack_140;
  *(undefined8 *)(puVar9 + _DAT_112d5e760) = uStack_138;
  *(undefined8 *)(puVar9 + _DAT_112d5e718) = uStack_128;
  *(undefined8 *)(puVar9 + _DAT_112d5e788) = uStack_130;
  puVar9[_DAT_112d5e798] = (char)uStack_1bc;
  *(undefined8 *)(puVar9 + _DAT_112d5e768) = uStack_150;
  *(undefined8 *)(puVar9 + _DAT_112d5e770) = uStack_1b8;
  *(char *)((long)(puVar9 + _DAT_112d5e770) + 8) = (char)uStack_1ac;
  *(undefined8 *)(puVar9 + _DAT_112d5e720) = uStack_1a8;
  *(undefined8 *)(puVar9 + _DAT_112d5e7a0) = uStack_1a0;
  *(undefined8 *)(puVar9 + _DAT_112d5e778) = uStack_198;
  *(undefined8 *)(puVar9 + _DAT_112d5e780) = uStack_190;
  *(undefined8 *)(puVar9 + _DAT_112d5e7a8) = uStack_188;
  puVar9[_DAT_112d5e7b0] = (char)uStack_17c;
  *(undefined8 *)(puVar9 + _DAT_112d5e7b8) = uStack_178;
  *(undefined8 *)(puVar9 + _DAT_112d5e7c8) = uStack_170;
  puStack_110 = puStack_1d0;
  puStack_118 = puVar9;
  func_0x000107c615f0(auStack_220[1]);
  func_0x000107c615f0(auStack_220[2]);
  func_0x000107c615f0(uStack_168);
  func_0x000107c615f0(uStack_160);
  func_0x000107c61174(uStack_158);
  func_0x000107c615f0(auStack_220[3]);
  func_0x000107c615f0(uStack_200);
  func_0x000107c61174(uVar10);
  func_0x000107c61174(uStack_148);
  func_0x000107c61174(uVar11);
  func_0x000107c61174(uStack_120);
  func_0x000107c61174(uStack_140);
  func_0x000107c61174(uStack_138);
  func_0x000107c615f0(uStack_128);
  func_0x000107c61174(uStack_130);
  func_0x000107c61174(uStack_150);
  func_0x000107c61174(uVar14);
  func_0x000107c61174(uVar16);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c615f0(uVar6);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar8);
  ppuVar13 = &puStack_118;
  func_0x000107c61154(ppuVar13,puVar12);
  func_0x000107c61180();
  FUN_10110f9dc();
  func_0x00010110fbb0();
  FUN_10110fcfc();
  FUN_101110020();
  FUN_101111290();
  func_0x000107c3d740(*(undefined8 *)((long)ppuVar13 + _DAT_112d5e708));
  func_0x000107c61170(ppuVar13);
  func_0x0001000834e4(auStack_108);
  func_0x0001000834e4(auStack_e0);
  func_0x0001000834e4(auStack_b8);
  func_0x0001000834e4(auStack_90);
  return ppuVar13;
}



/* Entry: 101114dbc; end: 101114e3f;  */

void FUN_101114dbc(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101114e40; end: 101114ecb;  */

void FUN_101114e40(long param_1,long param_2)

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



/* Entry: 101114ecc; end: 101114f4f;  */

void FUN_101114ecc(void)

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



/* Entry: 101114f50; end: 101114f53;  */

void FUN_101114f50(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5e968 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d925910;
  func_0x000107c61520(&UNK_10d925910,&UNK_110385fd0);
  puRam0000000112d5e968 = puVar1;
  return;
}



/* Entry: 101114f54; end: 101114f93;  */

void FUN_101114f54(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5e968 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d925910;
  func_0x000107c61520(&UNK_10d925910,&UNK_110385fd0);
  puRam0000000112d5e968 = puVar1;
  return;
}



/* Entry: 101114f94; end: 101114f97;  */

void FUN_101114f94(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5e970 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d925978;
  func_0x000107c61520(&UNK_10d925978,&UNK_110386060);
  puRam0000000112d5e970 = puVar1;
  return;
}


