/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10285bf6c; end: 10285c02b;  */

/* WARNING: Possible PIC construction at 0x00010285bff4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010285bff8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10285bf6c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_112ec49c8;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x0001006732c8(param_2,*(undefined8 *)(param_2 + 0x18));
    func_0x000107c605b0();
    func_0x0001006732c8(param_3,*(undefined8 *)(param_3 + 0x18));
    func_0x000107c605b0();
    func_0x000107c4df10(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 10285c02c; end: 10285c19f; -[_TtC20AdShareMessagePlugin20AdShareMessagePlugin operaPresenter:didFinishViewingPlaylistGroupDataModel:nextGroupDataModel:] */

void FUN_10285c02c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_4);
  func_0x000107c615e8(param_4);
  func_0x000107c60234(auStack_70,param_5);
  func_0x000107c615e8(param_5);
  FUN_10285bf6c(param_3,auStack_50,auStack_70);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
  func_0x000100183ab8(auStack_70);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10285c1a0; end: 10285c45f;  */

void FUN_10285c1a0(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar8;
  if (SCARRY8(lVar5,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10285c278);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    FUN_10285c460(lVar6,param_4 & 1);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10285c240);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x00010285c2f0();
    lVar6 = *unaff_x20;
    goto joined_r0x00010285c28c;
  }
  lVar6 = *unaff_x20;
joined_r0x00010285c28c:
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar7);
    return;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10285c2f0);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 10285c460; end: 10285ced3;  */

void FUN_10285c460(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x112ead788;
  func_0x0001000285a8(0x112ead788,&UNK_10dac2090);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_10285c6c8:
    func_0x000107c61574(lVar17);
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar17 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10285c6f8);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
            if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar15 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar17 + 0x10) = 0;
          }
          goto LAB_10285c6c8;
        }
        uVar15 = puVar16[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar15 == 0);
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar9 * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar3);
      func_0x000107c61174(uVar18);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar6,uVar3);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10285c6fc);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar9 | bVar4);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 10285ced4; end: 10285ceef;  */

void FUN_10285ced4(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10285afa8(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 10285cef0; end: 10285cef7;  */

void FUN_10285cef0(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c4ce08(lVar5,lVar5,*param_2);
  func_0x000107c61180();
  lVar1 = lVar5;
  func_0x000107c4c930();
  func_0x000107c61180();
  *param_1 = lVar1;
  lVar1 = lVar5;
  func_0x000107c4c930();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x000107c615e8(lVar5);
    lVar6 = 0;
  }
  else {
    lVar2 = lVar5;
    func_0x000107c40258(lVar5);
    func_0x000107c61180();
    lVar3 = lVar5;
    func_0x000107c3dc7c(lVar5);
    func_0x000107c61180();
    lVar4 = lVar5;
    func_0x000107c40674(lVar5);
    func_0x000107c61180();
    lVar6 = lVar1;
    func_0x000107c5caf0();
    func_0x000107c61180();
    func_0x000107c615e8(lVar5);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar4);
  }
  param_1[1] = lVar6;
  return;
}



/* Entry: 10285cef8; end: 10285d047;  */

void FUN_10285cef8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_28;
  
  if (puRam0000000112ec4a78 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112ec4a68;
  func_0x00010002969c(0x112ec4a68,&UNK_10dae4a08);
  uVar2 = 0x112ec4a80;
  func_0x00010285d008(0x112ec4a80,0x112d64e68,&PTR_PTR_1126b4628);
  puVar3 = PTR___sxSgSQsSQRzlMc_11034f190;
  uStack_28 = uVar2;
  func_0x000107c61520(PTR___sxSgSQsSQRzlMc_11034f190,uVar1,&uStack_28);
  puRam0000000112ec4a78 = puVar3;
  return;
}



/* Entry: 10285d048; end: 10285d04f;  */

void FUN_10285d048(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar1 = &UNK_110558960;
  func_0x000107c613fc(&UNK_110558960,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,uVar3);
  puVar2 = &UNK_110558a78;
  func_0x000107c613fc(&UNK_110558a78,0x28,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  func_0x0001000285a8(0x112ec4ab8,&UNK_10dae4a20);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_1);
  func_0x0001000b64ac(FUN_10285d138,puVar2);
  return;
}



/* Entry: 10285d050; end: 10285d077;  */

void FUN_10285d050(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1,param_1[1]);
  return;
}



/* Entry: 10285d078; end: 10285d0a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10285d078(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  long unaff_x20;
  undefined8 uVar15;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar8 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar8 + 0x10,auStack_78,0,0);
  lVar2 = lVar8 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c4c930();
    func_0x000107c61180();
    puVar4 = &UNK_110558a00;
    uVar12 = 0x20;
    func_0x000107c613fc(&UNK_110558a00,0x20,7);
    *(long *)(puVar4 + 0x10) = lVar8;
    *(undefined8 *)(puVar4 + 0x18) = param_1;
    func_0x000107c615f0(param_1);
    func_0x000107c6157c(lVar8);
    if (lVar3 != 0) {
      lVar5 = lVar3;
      func_0x000107c61174();
      lVar6 = lVar5;
      func_0x000107c4c99c();
      func_0x000107c61180();
      if (lVar6 != 0) {
        lVar7 = lVar6;
        func_0x000107c5faec();
        func_0x000107c61170(lVar6);
        func_0x0001000d224c(&puStack_a8);
        puVar1 = puStack_a8;
        if (puStack_a8 != (undefined *)0x0) {
          uVar14 = *(undefined8 *)(lVar2 + _DAT_112ec4a28);
          func_0x000107c6157c(uVar14);
          func_0x0001000c74f0(&puStack_a8);
          func_0x000107c61574(uVar14);
          if (*(long *)(puStack_a8 + 0x10) != 0) {
            func_0x000107c61434(puStack_a8);
            lVar3 = lVar7;
            uVar13 = uVar12;
            func_0x000100029284();
            if ((uVar13 & 1) != 0) {
              uVar15 = *(undefined8 *)(*(long *)(puStack_a8 + 0x38) + lVar3 * 8);
              uVar14 = uVar15;
              func_0x000107c61174(uVar15);
              func_0x000107c6142c(uVar12);
              func_0x000107c61430(puStack_a8,2);
              func_0x000107c61174(uVar14);
              FUN_10285adbc(uVar15,lVar8,param_1);
              func_0x000107c615e8(puVar1);
              func_0x000107c61170(uVar14);
              func_0x000107c61170(uVar14);
              func_0x000107c61170(lVar5);
              func_0x000107c61170(lVar5);
              func_0x000107c61574(puVar4);
              func_0x000107c61170(lVar2);
              return;
            }
            func_0x000107c6142c(puStack_a8);
          }
          func_0x000107c6142c(puStack_a8);
          puVar9 = &UNK_110558960;
          func_0x000107c613fc(&UNK_110558960,0x18,7);
          func_0x000107c61614(puVar9 + 0x10,lVar2);
          puVar10 = &UNK_110558a28;
          func_0x000107c613fc(&UNK_110558a28,0x38,7);
          *(undefined **)(puVar10 + 0x10) = puVar9;
          *(code **)(puVar10 + 0x18) = FUN_10285d110;
          *(undefined **)(puVar10 + 0x20) = puVar4;
          *(long *)(puVar10 + 0x28) = lVar7;
          *(ulong *)(puVar10 + 0x30) = uVar12;
          uStack_88 = 0x10285d118;
          puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_a0 = 0x42000000;
          pcStack_98 = FUN_10285b8d8;
          puStack_90 = &UNK_110558a40;
          ppuVar11 = &puStack_a8;
          puStack_80 = puVar10;
          func_0x000107c60bc4(ppuVar11);
          puVar9 = puStack_80;
          func_0x000107c6157c(puVar4);
          func_0x000107c61574(puVar9);
          func_0x000107c4eb90(puVar1);
          func_0x000107c61170(lVar5);
          func_0x000107c61574(puVar4);
          func_0x000107c61170(lVar2);
          func_0x000107c60bd0(ppuVar11);
          func_0x000107c61170(lVar5);
          func_0x000107c615e8(puVar1);
          return;
        }
        func_0x000107c6142c(uVar12);
      }
      func_0x000107c61170(lVar5);
    }
    func_0x000107c61428(lVar8 + 0x10,&puStack_a8,0,0);
    lVar8 = lVar8 + 0x10;
    func_0x000107c61618();
    func_0x000107c61170(lVar3);
    func_0x000107c61574(puVar4);
    func_0x000107c61170(lVar2);
    if (lVar8 != 0) {
      func_0x000107c61170(lVar8);
    }
  }
  return;
}



/* Entry: 10285d0a4; end: 10285d0e3;  */

void FUN_10285d0a4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10285d0e4; end: 10285d10f;  */

void FUN_10285d0e4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10285d110; end: 10285d11b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10285d110(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  undefined1 auStack_58 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar1 + 0x10,auStack_58,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    uVar4 = 1;
  }
  else {
    lVar6 = lVar1;
    if (param_1 != 0) {
      lVar2 = lVar1 + _DAT_112ec49c0;
      func_0x000107c61618();
      if (lVar2 != 0) {
        lVar5 = *(long *)(lVar1 + _DAT_112ec49f0);
        func_0x000107c61174(param_1);
        lVar6 = lVar5;
        func_0x000107c5194c();
        func_0x000107c61180();
        if (lVar6 != 0) {
          func_0x000107c61170();
          func_0x000107c4ffe8(lVar5);
          func_0x000107c61180();
          func_0x000107c615e8();
        }
        lVar6 = *(long *)(lVar1 + _DAT_112ec49f8);
        if (lVar3 != 0) {
          func_0x000107c5de64(lVar3);
          func_0x000107c61180();
        }
        func_0x000107c3ed1c(lVar6);
        func_0x000107c61180();
        func_0x000107c61170(lVar3);
        func_0x000107c42c1c(lVar5);
        func_0x000107c61170(lVar1);
        func_0x000107c61170(param_1);
        func_0x000107c61170(lVar2);
      }
    }
    func_0x000107c61170(lVar6);
    uVar4 = 0;
  }
  return uVar4;
}



/* Entry: 10285d11c; end: 10285d137;  */

void FUN_10285d11c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10285b810(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 10285d138; end: 10285d14f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10285d138(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long unaff_x20;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x18);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar3 + 0x10,auStack_78,0,0);
  lVar1 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) goto LAB_10285b4a0;
  puVar2 = &UNK_110558960;
  func_0x000107c613fc(&UNK_110558960,0x18,7);
  func_0x000107c61428(lVar3 + 0x10,auStack_90,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618(lVar3);
  func_0x000107c61614(puVar2 + 0x10,lVar3);
  func_0x000107c61170(lVar3);
  puVar4 = &UNK_110558aa0;
  uVar12 = 0x28;
  func_0x000107c613fc(&UNK_110558aa0,0x28,7);
  *(undefined **)(puVar4 + 0x10) = puVar2;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  *(undefined8 *)(puVar4 + 0x20) = uVar14;
  if (lVar5 == 0) {
    func_0x000107c61174(uVar14);
    func_0x000107c6157c(param_1);
    func_0x000107c6157c(puVar2);
LAB_10285b420:
    func_0x000107c61428(puVar2 + 0x10,&puStack_c8,0,0);
    puVar9 = puVar2 + 0x10;
    func_0x000107c61618();
    if (puVar9 != (undefined *)0x0) {
      puVar10 = PTR_PTR_1126ab418;
      func_0x000107c610f8();
      func_0x000107c453e4();
      func_0x000107c53384();
      puStack_98 = puVar10;
      func_0x000100087f6c(&puStack_98);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar9);
    }
    func_0x000100c7f554();
    func_0x000107c61574(puVar2);
  }
  else {
    func_0x000107c61174(uVar14);
    func_0x000107c6157c(param_1);
    func_0x000107c6157c(puVar2);
    func_0x000107c61174();
    lVar3 = lVar5;
    func_0x000107c4c99c();
    func_0x000107c61180();
    if (lVar3 == 0) {
LAB_10285b418:
      func_0x000107c61170(lVar5);
      goto LAB_10285b420;
    }
    lVar6 = lVar3;
    func_0x000107c5faec();
    func_0x000107c61170(lVar3);
    func_0x0001000d224c(&puStack_c8);
    puVar9 = puStack_c8;
    if (puStack_c8 == (undefined *)0x0) {
      func_0x000107c6142c(uVar12);
      goto LAB_10285b418;
    }
    uVar15 = *(undefined8 *)(lVar1 + _DAT_112ec4a28);
    func_0x000107c6157c(uVar15);
    func_0x0001000c74f0(&puStack_c8);
    func_0x000107c61574(uVar15);
    puVar10 = puStack_c8;
    if (*(long *)(puStack_c8 + 0x10) == 0) {
LAB_10285b4e8:
      func_0x000107c6142c(puVar10);
      puVar10 = &UNK_110558960;
      func_0x000107c613fc(&UNK_110558960,0x18,7);
      func_0x000107c61614(puVar10 + 0x10,lVar1);
      puVar7 = &UNK_110558ac8;
      func_0x000107c613fc(&UNK_110558ac8,0x38,7);
      *(undefined **)(puVar7 + 0x10) = puVar10;
      *(undefined8 *)(puVar7 + 0x18) = 0x10285d144;
      *(undefined **)(puVar7 + 0x20) = puVar4;
      *(long *)(puVar7 + 0x28) = lVar6;
      *(ulong *)(puVar7 + 0x30) = uVar12;
      pcStack_a8 = FUN_10285d45c;
      puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c0 = 0x42000000;
      pcStack_b8 = FUN_10285b8d8;
      puStack_b0 = &UNK_110558ae0;
      ppuVar11 = &puStack_c8;
      puStack_a0 = puVar7;
      func_0x000107c60bc4(ppuVar11);
      puVar10 = puStack_a0;
      func_0x000107c6157c(puVar4);
      func_0x000107c61574(puVar10);
      func_0x000107c4eb90(puVar9);
      func_0x000107c61574(puVar4);
      func_0x000107c61170(lVar1);
      func_0x000107c60bd0(ppuVar11);
      func_0x000107c61574(puVar2);
      func_0x000107c61170(lVar5);
      func_0x000107c615e8(puVar9);
      goto LAB_10285b4a0;
    }
    func_0x000107c61434(puStack_c8);
    lVar3 = lVar6;
    uVar13 = uVar12;
    func_0x000100029284();
    if ((uVar13 & 1) == 0) {
      func_0x000107c6142c(puVar10);
      goto LAB_10285b4e8;
    }
    puVar7 = *(undefined **)(*(long *)(puVar10 + 0x38) + lVar3 * 8);
    func_0x000107c61174();
    func_0x000107c6142c(uVar12);
    func_0x000107c61430(puVar10,2);
    func_0x000107c61428(puVar2 + 0x10,&puStack_c8,0,0);
    puVar10 = puVar2 + 0x10;
    func_0x000107c61618();
    if (puVar10 == (undefined *)0x0) {
      func_0x000107c61174(puVar7);
    }
    else {
      func_0x000107c61174(puVar7);
      puVar8 = puVar7;
      FUN_10285d194(puVar7,uVar14);
      puStack_98 = puVar8;
      func_0x000100087f6c(&puStack_98);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar8);
    }
    func_0x000100c7f554();
    func_0x000107c61574(puVar2);
    func_0x000107c61170(lVar5);
    func_0x000107c615e8(puVar9);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar7);
  }
  func_0x000107c61574(puVar4);
  func_0x000107c61170(lVar1);
LAB_10285b4a0:
  func_0x0001000b6d30(0);
  func_0x000104885df0(0,0);
  return;
}



/* Entry: 10285d150; end: 10285d183;  */

void FUN_10285d150(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10285d184; end: 10285d193;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10285d184(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c61428(lVar3 + 0x10,auStack_78,0,0,pcVar1,*(undefined8 *)(unaff_x20 + 0x20));
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    if (param_3 == 0) {
      (*pcVar1)(0);
    }
    else {
      func_0x000107c5f9dc(param_3,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                          PTR___ss11AnyHashableVSHsWP_11034e450);
      uVar6 = *(undefined8 *)(lVar3 + _DAT_112ec4a08);
      uVar7 = uVar6;
      func_0x000107c6157c(uVar6);
      func_0x0001003a5b88();
      func_0x000107c61574(uVar6);
      lVar4 = param_3;
      func_0x000105fa4bdc(param_3,uVar7);
      func_0x000107c61180();
      func_0x000107c61170(param_3);
      func_0x000107c61170(uVar7);
      uVar7 = *(undefined8 *)(lVar3 + _DAT_112ec4a28);
      uStack_90 = uVar2;
      uStack_88 = uVar5;
      lStack_80 = lVar4;
      func_0x000107c6157c(uVar7);
      func_0x000100075034(FUN_10285d11c,auStack_a0,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(uVar7);
      (*pcVar1)(lVar4);
      func_0x000107c61170(lVar3);
      lVar3 = lVar4;
    }
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 10285d194; end: 10285d413;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10285d194(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  
  puVar3 = PTR_PTR_1126ab418;
  func_0x000107c610f8(PTR_PTR_1126ab418);
  func_0x000107c453e4();
  if (param_1 == 0) goto LAB_10285d394;
  uVar5 = *(ulong *)(param_1 + _DAT_113815208);
  if (uVar5 == 0) {
LAB_10285d36c:
    func_0x000107c61174(param_1);
LAB_10285d374:
    lVar8 = 0;
LAB_10285d378:
    lVar10 = lVar8;
    func_0x000107c59d1c(puVar3);
    func_0x000107c61170(param_1);
  }
  else {
    uVar7 = uVar5 & 0xffffffffffffff8;
    if (uVar5 >> 0x3e != 0) {
      uVar4 = uVar5;
      if (-1 < (long)uVar5) {
        uVar4 = uVar7;
      }
      func_0x000107c60480();
      if (uVar4 != 0) goto LAB_10285d1f0;
      goto LAB_10285d36c;
    }
    if (*(long *)(uVar7 + 0x10) == 0) goto LAB_10285d36c;
LAB_10285d1f0:
    if ((uVar5 & 0xc000000000000001) != 0) {
      func_0x000107c61174(param_1);
      func_0x000107c61434(uVar5);
      lVar8 = 0;
      func_0x000100e471e4(0,uVar5);
      func_0x000107c6142c(uVar5);
      lVar10 = *(long *)(lVar8 + _DAT_11308f208);
      lVar6 = lVar10;
      func_0x000107c61174();
      func_0x000107c615e8(lVar8);
      if (lVar10 != 0) goto LAB_10285d22c;
      goto LAB_10285d374;
    }
    if (*(long *)(uVar7 + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10285d414);
      (*pcVar2)();
    }
    lVar6 = *(long *)(*(long *)(uVar5 + 0x20) + _DAT_11308f208);
    if (lVar6 == 0) goto LAB_10285d36c;
    func_0x000107c61174(param_1);
    func_0x000107c61174();
LAB_10285d22c:
    lVar8 = *(long *)(lVar6 + _DAT_113091068);
    lVar10 = lVar8;
    func_0x000107c61174();
    func_0x000107c61170(lVar6);
    if (lVar8 == 0) goto LAB_10285d378;
    if ((*(long *)(lVar10 + _DAT_1130905f0) == 0) ||
       (lVar6 = *(long *)(*(long *)(lVar10 + _DAT_1130905f0) + _DAT_1130906c8), lVar6 == 0)) {
LAB_10285d2dc:
      if (*(long *)(lVar10 + _DAT_1130905f8) != 0) {
        puVar1 = (undefined8 *)(*(long *)(lVar10 + _DAT_1130905f8) + _DAT_113090408);
        lVar6 = puVar1[1];
        if (lVar6 != 0) {
          uVar9 = *puVar1;
          func_0x000107c61434(lVar6);
          func_0x000107c5fadc(uVar9,lVar6);
          func_0x000107c6142c(lVar6);
          func_0x000107c59d20(puVar3);
          func_0x000107c61170(uVar9);
          goto LAB_10285d348;
        }
      }
      goto LAB_10285d378;
    }
    puVar1 = (undefined8 *)(lVar6 + _DAT_1130904b8);
    lVar6 = puVar1[1];
    if (lVar6 == 0) goto LAB_10285d2dc;
    uVar9 = *puVar1;
    func_0x000107c61434(lVar6);
    func_0x000107c5fadc(uVar9,lVar6);
    func_0x000107c6142c(lVar6);
    func_0x000107c59d20(puVar3);
    func_0x000107c61170(uVar9);
LAB_10285d348:
    func_0x000107c59d1c(puVar3);
    func_0x000107c61170(param_1);
  }
  func_0x000107c61170(lVar10);
LAB_10285d394:
  func_0x000107c53384(puVar3);
  return puVar3;
}



/* Entry: 10285d414; end: 10285d433;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10285d414(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_68 [32];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  puVar1 = PTR___sytN_11034f1b0;
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + _DAT_112ec4a20);
    func_0x000107c6157c(uVar3);
    func_0x000107c61170(lVar2);
    func_0x000100075034(0x10285d448,0,puVar1 + 8);
    func_0x000107c61574(uVar3);
  }
  func_0x000107c61428(unaff_x20 + 0x10,auStack_68,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + _DAT_112ec4a28);
    func_0x000107c6157c(uVar3);
    func_0x000107c61170(lVar2);
    func_0x000100075034(FUN_10285d434,0,puVar1 + 8);
    func_0x000107c61574(uVar3);
  }
  return;
}



/* Entry: 10285d434; end: 10285d45b;  */

void FUN_10285d434(void)

{
  func_0x000100d0adf0();
  return;
}



/* Entry: 10285d45c; end: 10285d45f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10285d45c(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c61428(lVar3 + 0x10,auStack_78,0,0,pcVar1,*(undefined8 *)(unaff_x20 + 0x20));
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    if (param_3 == 0) {
      (*pcVar1)(0);
    }
    else {
      func_0x000107c5f9dc(param_3,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                          PTR___ss11AnyHashableVSHsWP_11034e450);
      uVar6 = *(undefined8 *)(lVar3 + _DAT_112ec4a08);
      uVar7 = uVar6;
      func_0x000107c6157c(uVar6);
      func_0x0001003a5b88();
      func_0x000107c61574(uVar6);
      lVar4 = param_3;
      func_0x000105fa4bdc(param_3,uVar7);
      func_0x000107c61180();
      func_0x000107c61170(param_3);
      func_0x000107c61170(uVar7);
      uVar7 = *(undefined8 *)(lVar3 + _DAT_112ec4a28);
      uStack_90 = uVar2;
      uStack_88 = uVar5;
      lStack_80 = lVar4;
      func_0x000107c6157c(uVar7);
      func_0x000100075034(FUN_10285d11c,auStack_a0,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(uVar7);
      (*pcVar1)(lVar4);
      func_0x000107c61170(lVar3);
      lVar3 = lVar4;
    }
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 10285d460; end: 10285d527;  */

void FUN_10285d460(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec2370,&UNK_10dae07b0);
  puVar1 = &UNK_110558b40;
  func_0x000107c613fc(&UNK_110558b40,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  *(undefined8 *)(puVar1 + 0x18) = param_6;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  *(undefined8 *)(puVar1 + 0x30) = param_4;
  *(undefined8 *)(puVar1 + 0x38) = param_1;
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10285d8a8,puVar1);
  return;
}



/* Entry: 10285d528; end: 10285d8a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10285d528(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  long *plVar11;
  undefined8 uVar12;
  long lStack_90;
  long lStack_88;
  undefined *puStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  uVar6 = uStack_68;
  uVar2 = 0x112e9a918;
  func_0x0001000285a8(0x112e9a918,&UNK_10dabac60);
  func_0x000107c610f8();
  func_0x00010017da58(uVar6,uVar2);
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar6);
  func_0x000100083b20(&uStack_68);
  func_0x0001000285a8(0x112ddb730,&UNK_10d9a0440);
  func_0x000100083b20(&lStack_70);
  lVar1 = lStack_70;
  lVar4 = lStack_70;
  func_0x000107c3f854();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar5 = lVar4;
  func_0x0001000bda74();
  func_0x000107c61170(lVar4);
  func_0x000100083b20(&lStack_70);
  uVar12 = *(undefined8 *)(lStack_70 + _DAT_113010610);
  func_0x000107c6157c(uVar12);
  func_0x000107c61170(lStack_70);
  func_0x0001000285a8(0x112ec4ac0,&UNK_10dae4a50);
  func_0x000100083b20(&lStack_78);
  lVar1 = lStack_78;
  uVar6 = *(undefined8 *)(lStack_78 + _DAT_112fdf698);
  func_0x000107c61174();
  func_0x000107c61170(lVar1);
  uVar2 = uVar6;
  func_0x0001000bda74();
  func_0x000107c61170(uVar6);
  func_0x000100083b20(&lStack_78);
  uVar6 = *(undefined8 *)(lStack_78 + _DAT_11301aef0);
  func_0x000107c615f0(uVar6);
  func_0x000107c61170(lStack_78);
  lVar7 = 0;
  FUN_10285bad0();
  lVar4 = lVar7;
  func_0x000107c610f8();
  func_0x000107c61614(lVar4 + _DAT_112ec49c0,0);
  func_0x000107c61614(lVar4 + _DAT_112ec49c8,0);
  func_0x000107c61614(lVar4 + _DAT_112ec49d0,0);
  *(undefined8 *)(lVar4 + _DAT_112ec49d8) = 0;
  *(undefined8 *)(lVar4 + _DAT_112ec49e0) = 0;
  *(undefined8 *)(lVar4 + _DAT_112ec49e8) = 0;
  lVar1 = _DAT_112ec4a20;
  puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_1027f8eb0();
  puStack_80 = puVar8;
  func_0x0001000285a8(0x112ec2720,&UNK_10dae0ac0);
  func_0x000107c613fc();
  ppuVar9 = &puStack_80;
  func_0x00010006c248();
  *(undefined ***)(lVar4 + lVar1) = ppuVar9;
  lVar1 = _DAT_112ec4a28;
  FUN_10285d8c8();
  puStack_80 = puVar10;
  func_0x0001000285a8(0x112ec4ac8,&UNK_10dae4a60);
  func_0x000107c613fc();
  ppuVar9 = &puStack_80;
  func_0x00010006c248();
  *(undefined ***)(lVar4 + lVar1) = ppuVar9;
  lVar1 = _DAT_112ec4a30;
  puVar10 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar4 + lVar1) = puVar10;
  *(undefined **)(lVar4 + _DAT_112ec49f0) = puVar3;
  *(undefined8 *)(lVar4 + _DAT_112ec49f8) = uStack_68;
  *(long *)(lVar4 + _DAT_112ec4a00) = lVar5;
  *(undefined8 *)(lVar4 + _DAT_112ec4a08) = uVar12;
  *(undefined8 *)(lVar4 + _DAT_112ec4a10) = uVar2;
  *(undefined8 *)(lVar4 + _DAT_112ec4a18) = uVar6;
  plVar11 = &lStack_90;
  lStack_90 = lVar4;
  lStack_88 = lVar7;
  func_0x000107c61154(plVar11,PTR_s_init_1125d9248);
  *param_1 = (long)plVar11;
  return;
}



/* Entry: 10285d8a8; end: 10285d8c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10285d8a8(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  long *plVar11;
  long unaff_x20;
  undefined8 uVar12;
  long lStack_90;
  long lStack_88;
  undefined *puStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  uVar6 = uStack_68;
  uVar2 = 0x112e9a918;
  func_0x0001000285a8(0x112e9a918,&UNK_10dabac60);
  func_0x000107c610f8();
  func_0x00010017da58(uVar6,uVar2);
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar6);
  func_0x000100083b20(&uStack_68);
  func_0x0001000285a8(0x112ddb730,&UNK_10d9a0440);
  func_0x000100083b20(&lStack_70);
  lVar1 = lStack_70;
  lVar4 = lStack_70;
  func_0x000107c3f854();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar5 = lVar4;
  func_0x0001000bda74();
  func_0x000107c61170(lVar4);
  func_0x000100083b20(&lStack_70);
  uVar12 = *(undefined8 *)(lStack_70 + _DAT_113010610);
  func_0x000107c6157c(uVar12);
  func_0x000107c61170(lStack_70);
  func_0x0001000285a8(0x112ec4ac0,&UNK_10dae4a50);
  func_0x000100083b20(&lStack_78);
  lVar1 = lStack_78;
  uVar6 = *(undefined8 *)(lStack_78 + _DAT_112fdf698);
  func_0x000107c61174();
  func_0x000107c61170(lVar1);
  uVar2 = uVar6;
  func_0x0001000bda74();
  func_0x000107c61170(uVar6);
  func_0x000100083b20(&lStack_78);
  uVar6 = *(undefined8 *)(lStack_78 + _DAT_11301aef0);
  func_0x000107c615f0(uVar6);
  func_0x000107c61170(lStack_78);
  lVar7 = 0;
  FUN_10285bad0();
  lVar4 = lVar7;
  func_0x000107c610f8();
  func_0x000107c61614(lVar4 + _DAT_112ec49c0,0);
  func_0x000107c61614(lVar4 + _DAT_112ec49c8,0);
  func_0x000107c61614(lVar4 + _DAT_112ec49d0,0);
  *(undefined8 *)(lVar4 + _DAT_112ec49d8) = 0;
  *(undefined8 *)(lVar4 + _DAT_112ec49e0) = 0;
  *(undefined8 *)(lVar4 + _DAT_112ec49e8) = 0;
  lVar1 = _DAT_112ec4a20;
  puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_1027f8eb0();
  puStack_80 = puVar8;
  func_0x0001000285a8(0x112ec2720,&UNK_10dae0ac0);
  func_0x000107c613fc();
  ppuVar9 = &puStack_80;
  func_0x00010006c248();
  *(undefined ***)(lVar4 + lVar1) = ppuVar9;
  lVar1 = _DAT_112ec4a28;
  FUN_10285d8c8();
  puStack_80 = puVar10;
  func_0x0001000285a8(0x112ec4ac8,&UNK_10dae4a60);
  func_0x000107c613fc();
  ppuVar9 = &puStack_80;
  func_0x00010006c248();
  *(undefined ***)(lVar4 + lVar1) = ppuVar9;
  lVar1 = _DAT_112ec4a30;
  puVar10 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar4 + lVar1) = puVar10;
  *(undefined **)(lVar4 + _DAT_112ec49f0) = puVar3;
  *(undefined8 *)(lVar4 + _DAT_112ec49f8) = uStack_68;
  *(long *)(lVar4 + _DAT_112ec4a00) = lVar5;
  *(undefined8 *)(lVar4 + _DAT_112ec4a08) = uVar12;
  *(undefined8 *)(lVar4 + _DAT_112ec4a10) = uVar2;
  *(undefined8 *)(lVar4 + _DAT_112ec4a18) = uVar6;
  plVar11 = &lStack_90;
  lStack_90 = lVar4;
  lStack_88 = lVar7;
  func_0x000107c61154(plVar11,PTR_s_init_1125d9248);
  *param_1 = (long)plVar11;
  return;
}



/* Entry: 10285d8c8; end: 10285d9c7;  */

undefined * FUN_10285d8c8(long param_1)

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
    func_0x0001000285a8(0x112ead788,&UNK_10dac2090);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c61174();
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10285d9c4);
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
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10285d9c8);
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



/* Entry: 10285d9c8; end: 10285d9d7; -[_TtC26CustomStickerMessagePlugin26CustomStickerMessagePlugin activeConversationIdObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10285d9c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec4ad0));
  return;
}



/* Entry: 10285d9d8; end: 10285da0b; -[_TtC26CustomStickerMessagePlugin26CustomStickerMessagePlugin setActiveConversationIdObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10285d9d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec4ad0);
  *(undefined8 *)(param_1 + _DAT_112ec4ad0) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10285da0c; end: 10285da1b; -[_TtC26CustomStickerMessagePlugin26CustomStickerMessagePlugin activeConversationInformationObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10285da0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec4ad8));
  return;
}



/* Entry: 10285da1c; end: 10285da4f; -[_TtC26CustomStickerMessagePlugin26CustomStickerMessagePlugin setActiveConversationInformationObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10285da1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec4ad8);
  *(undefined8 *)(param_1 + _DAT_112ec4ad8) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10285da50; end: 10285dac3; -[_TtC26CustomStickerMessagePlugin26CustomStickerMessagePlugin valdiContextParamsForMessage:conversationParticipants:] */

void FUN_10285da50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_10285dd68(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10285dac4; end: 10285dacb; -[_TtC26CustomStickerMessagePlugin26CustomStickerMessagePlugin quotedRenderingStyleForMessage:] */

undefined8 FUN_10285dac4(void)

{
  return 0;
}



/* Entry: 10285dacc; end: 10285db3f; -[_TtC26CustomStickerMessagePlugin26CustomStickerMessagePlugin valdiContextParamsForQuotedMessage:conversationParticipants:] */

void FUN_10285dacc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  func_0x00010285e16c(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10285db40; end: 10285dbb3; -[_TtC26CustomStickerMessagePlugin26CustomStickerMessagePlugin valdiContextParamsForQuotedMessagePreview:conversationParticipants:] */

void FUN_10285db40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  func_0x00010285e60c(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10285dbb4; end: 10285dbff;  */

undefined8 FUN_10285dbb4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  func_0x000107c40258(param_2);
  func_0x000107c61180();
  func_0x0001070b30c4(uVar1,param_2);
  func_0x000107c61170(param_2);
  return uVar1;
}



/* Entry: 10285dc00; end: 10285dc5f;  */

void FUN_10285dc00(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *param_2;
  func_0x000107c453dc(uVar1);
  func_0x000107c61180();
  func_0x0001070b31f8();
  func_0x000107c61170(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  *param_1 = puVar2;
  return;
}



/* Entry: 10285dc60; end: 10285dc77; -[_TtC26CustomStickerMessagePlugin26CustomStickerMessagePlugin identifier] */

/* WARNING: Removing unreachable block (ram,0x00010285dc74) */

void FUN_10285dc60(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 10285dc78; end: 10285dc7f; -[_TtC26CustomStickerMessagePlugin26CustomStickerMessagePlugin pluginType] */

undefined8 FUN_10285dc78(void)

{
  return 0;
}



/* Entry: 10285dc80; end: 10285dcdf; -[_TtC26CustomStickerMessagePlugin26CustomStickerMessagePlugin init] */

void FUN_10285dc80(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CustomStickerMessagePlugin.CustomStickerMessagePlugin",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10285dcac);
  (*pcVar1)();
}



/* Entry: 10285dce0; end: 10285dd47; -[_TtC26CustomStickerMessagePlugin26CustomStickerMessagePlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010285dcfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010285dd1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010285dd00) */
/* WARNING: Removing unreachable block (ram,0x00010285dd20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10285dce0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ec4ad0));
  return;
}



/* Entry: 10285dd48; end: 10285dd67;  */

void FUN_10285dd48(void)

{
  func_0x000107c61168(&PTR_PTR_1128669a0);
  return;
}



/* Entry: 10285dd68; end: 10285e8eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10285dd68(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  code *pcVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long unaff_x20;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined *apuStack_a0 [3];
  undefined8 uStack_88;
  undefined *apuStack_80 [3];
  undefined8 uStack_68;
  
  lVar15 = *(long *)(unaff_x20 + _DAT_112ec4ae8);
  lVar1 = lVar15;
  func_0x000107c4ce08(lVar15,param_2,param_1);
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c4c930();
  func_0x000107c61180();
  if (lVar2 == 0) {
    func_0x000107c615e8(lVar1);
    uVar7 = 0;
  }
  else {
    lVar14 = lVar1;
    func_0x000107c40258(lVar1);
    func_0x000107c61180();
    lVar3 = lVar1;
    func_0x000107c3dc7c();
    func_0x000107c61180();
    if (lVar3 == 0) {
      lVar16 = 0;
      param_2 = 0xe000000000000000;
    }
    else {
      lVar16 = lVar3;
      func_0x000107c5faec();
      func_0x000107c61170(lVar3);
    }
    func_0x000107c4ce08();
    func_0x000107c61180();
    puVar4 = PTR_PTR_1126ab420;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c45a48();
    func_0x000107c557bc(puVar4);
    func_0x000107c61170(puVar5);
    func_0x000107c5fadc(lVar16,param_2);
    lVar3 = lVar15;
    func_0x000107c40674(lVar15);
    func_0x000107c61180();
    lVar6 = lVar2;
    func_0x000107c5caf0(lVar2);
    func_0x000107c61180();
    func_0x000107c61170(lVar14);
    func_0x000107c61170(lVar16);
    func_0x000107c61170(lVar3);
    func_0x000107c53384(puVar4);
    func_0x000107c61170(lVar6);
    puVar5 = PTR_PTR_1126ab428;
    func_0x000107c610f8();
    func_0x000107c453e4();
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112ec4ae0);
    func_0x000107c5c734(uVar7);
    func_0x000107c61180();
    func_0x000107c54244(puVar5);
    func_0x000107c615e8(uVar7);
    lVar14 = *(long *)(unaff_x20 + _DAT_112ec4af0);
    if (lVar14 != 0) {
      func_0x0001000285a8(0x112ec2498,&UNK_10dae3650);
      func_0x000107c61174(lVar14);
      lVar3 = lVar14;
      func_0x0001000b637c();
      puVar8 = &UNK_110558c58;
      func_0x000107c613fc(&UNK_110558c58,0x18,7);
      *(long *)(puVar8 + 0x10) = lVar15;
      func_0x000107c615f0(lVar15);
      pcVar9 = FUN_10285e934;
      func_0x0001000c0ebc(FUN_10285e934,puVar8);
      func_0x000107c61574(lVar3);
      func_0x000107c61574(puVar8);
      uVar7 = 0;
      FUN_10285e8f4(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      pcVar10 = FUN_10285dc00;
      func_0x0001000bfde0(FUN_10285dc00,0,uVar7);
      func_0x000107c61574(pcVar9);
      func_0x0001004575f0();
      func_0x000107c61574(pcVar10);
      pcVar10 = pcVar9;
      func_0x000107c421ac(pcVar9);
      func_0x000107c61180();
      func_0x000107c61170(pcVar9);
      pcVar9 = pcVar10;
      func_0x000107c5cb24(pcVar10);
      func_0x000107c61180();
      func_0x000107c61170(pcVar10);
      func_0x000107c56660(puVar5);
      func_0x000107c61170(lVar14);
      func_0x000107c61170(pcVar9);
    }
    uVar13 = 0x112ec4b20;
    uVar11 = 0;
    FUN_10285e8f4(0,0x112ec4b20,&PTR_PTR_1126ab430);
    func_0x000107c614e8();
    func_0x000107c3ff48();
    func_0x000107c61180();
    uVar7 = uVar11;
    func_0x000107c5faec();
    func_0x000107c61170(uVar11);
    uVar11 = 0;
    FUN_10285e8f4(0,0x112ec4b28,&PTR_PTR_1126ab420);
    uVar12 = 0;
    apuStack_80[0] = puVar4;
    uStack_68 = uVar11;
    FUN_10285e8f4(0,0x112ec4b30,&PTR_PTR_1126ab428);
    apuStack_a0[0] = puVar5;
    uStack_88 = uVar12;
    func_0x000107c610f8(PTR_PTR_1126c67d8);
    func_0x000107c61174(puVar4);
    func_0x000107c61174(puVar5);
    FUN_1027efbc4(uVar7,uVar13,apuStack_80,apuStack_a0);
    func_0x000107c615e8(lVar15);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar4);
    func_0x000107c615e8(lVar1);
    func_0x000107c6142c(param_2);
    func_0x000107c61170(lVar2);
  }
  return uVar7;
}



/* Entry: 10285e8ec; end: 10285e8f3;  */

undefined8 FUN_10285e8ec(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *param_1;
  func_0x000107c40258(uVar1);
  func_0x000107c61180();
  func_0x0001070b30c4(uVar2,uVar1);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 10285e8f4; end: 10285e933;  */

void FUN_10285e8f4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10285e934; end: 10285e937;  */

undefined8 FUN_10285e934(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *param_1;
  func_0x000107c40258(uVar1);
  func_0x000107c61180();
  func_0x0001070b30c4(uVar2,uVar1);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 10285e938; end: 10285eab7;  */

void FUN_10285e938(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec2370,&UNK_10dae07b0);
  puVar1 = &UNK_110558c80;
  func_0x000107c613fc(&UNK_110558c80,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_10285eab8,puVar1);
  return;
}



/* Entry: 10285eab8; end: 10285eacf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10285eab8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_50;
  func_0x000100083b20(&lStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar1 = *(undefined8 *)(lStack_38 + _DAT_112fdf698);
  func_0x000107c61174();
  func_0x000107c61170(lStack_38);
  func_0x000100083b20(&lStack_40);
  uVar5 = *(undefined8 *)(lStack_40 + _DAT_11301aef0);
  func_0x000107c615f0(uVar5);
  func_0x000107c61170(lStack_40);
  lVar2 = 0;
  FUN_10285dd48();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112ec4ad0) = 0;
  *(undefined8 *)(lVar3 + _DAT_112ec4ad8) = 0;
  *(undefined8 *)(lVar3 + _DAT_112ec4af0) = 0;
  *(undefined8 *)(lVar3 + _DAT_112ec4ae0) = uVar1;
  *(undefined8 *)(lVar3 + _DAT_112ec4ae8) = uVar5;
  lStack_50 = lVar3;
  lStack_48 = lVar2;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  *param_1 = plVar4;
  return;
}



/* Entry: 10285ead0; end: 10285eadb; -[_TtC40NewMemberAddedCardMessageAccessoryPlugin40NewMemberAddedCardMessageAccessoryPlugin uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10285ead0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec4b38;
  func_0x000107c61428(param_1 + _DAT_112ec4b38,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10285eadc; end: 10285eb33; -[_TtC40NewMemberAddedCardMessageAccessoryPlugin40NewMemberAddedCardMessageAccessoryPlugin setUiContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10285eadc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec4b38;
  func_0x000107c61428(param_1 + _DAT_112ec4b38,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10285eb34; end: 10285eb3f; -[_TtC40NewMemberAddedCardMessageAccessoryPlugin40NewMemberAddedCardMessageAccessoryPlugin presentingViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10285eb34(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec4b40;
  func_0x000107c61428(param_1 + _DAT_112ec4b40,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10285eb40; end: 10285eb83;  */

void FUN_10285eb40(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10285eb84; end: 10285ec2f; -[_TtC40NewMemberAddedCardMessageAccessoryPlugin40NewMemberAddedCardMessageAccessoryPlugin setPresentingViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10285eb84(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec4b40;
  func_0x000107c61428(param_1 + _DAT_112ec4b40,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ec4b48);
  lVar1 = param_1 + lVar1;
  func_0x000107c61618(lVar1);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c57740(uVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(lVar1);
  return;
}



/* Entry: 10285ec30; end: 10285ed4f; -[_TtC40NewMemberAddedCardMessageAccessoryPlugin40NewMemberAddedCardMessageAccessoryPlugin dismissPresentedView] */

/* WARNING: Possible PIC construction at 0x00010285ec6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010285ec88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010285ec70) */
/* WARNING: Removing unreachable block (ram,0x00010285ec8c) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10285ec30(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10285ed50; end: 10285eee3; -[_TtC40NewMemberAddedCardMessageAccessoryPlugin40NewMemberAddedCardMessageAccessoryPlugin isApplicableToMessage:] */

uint FUN_10285ed50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  func_0x00010285ecb4(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 10285eee4; end: 10285f8fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** FUN_10285eee4(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined1 *puVar12;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  puVar12 = auStack_78;
  func_0x000107c61428(param_2 + 0x10,puVar12,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  func_0x000107c61174();
  func_0x000107c61174();
  if (param_2 != 0) {
    lVar3 = lVar1;
    func_0x00010285f1a8();
    if (lVar3 != 0) {
      lVar4 = *(long *)(param_2 + _DAT_112ec4b68);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar4 != 0) {
        lVar5 = lVar2;
        func_0x000107c40674();
        func_0x000107c61180();
        lVar6 = lVar5;
        func_0x000107c5faec();
        func_0x000107c61170(lVar5);
        func_0x0001000285a8(0x112d63f00,&UNK_10d929700);
        puVar10 = PTR_PTR_1126ae6b8;
        func_0x000107c61168(PTR_PTR_1126ae6b8);
        puVar7 = puVar10;
        func_0x0001000d224c(&puStack_80);
        func_0x00010488b298();
        func_0x000107c61574(puStack_80);
        func_0x000107c43bf8(puVar10);
        func_0x000107c61180();
        func_0x000107c61170(puVar7);
        puVar7 = puVar10;
        func_0x0001000b637c(puVar10);
        func_0x000107c61170(puVar10);
        uVar8 = 0x112ec4bb8;
        func_0x0001000285a8(0x112ec4bb8,&UNK_10dae4af0);
        pcVar9 = FUN_10285fbb4;
        func_0x0001000bfde0(FUN_10285fbb4,0,uVar8);
        func_0x000107c61574(puVar7);
        puVar10 = &UNK_110558d98;
        func_0x000107c613fc(&UNK_110558d98,0x38,7);
        *(long *)(puVar10 + 0x10) = lVar4;
        *(long *)(puVar10 + 0x18) = param_2;
        *(long *)(puVar10 + 0x20) = lVar6;
        *(undefined1 **)(puVar10 + 0x28) = puVar12;
        *(long *)(puVar10 + 0x30) = lVar3;
        func_0x000107c615f0(lVar4);
        func_0x000107c61174(param_2);
        func_0x000107c61174(lVar3);
        uVar8 = 0x112d38358;
        func_0x0001000285a8(0x112d38358,&UNK_10d902090);
        ppuVar11 = (undefined **)0x102860444;
        func_0x0001000bfde0(0x102860444,puVar10,uVar8);
        func_0x000107c61170(lVar1);
        func_0x000107c61170(lVar2);
        func_0x000107c61170(param_2);
        func_0x000107c61170(lVar3);
        func_0x000107c615e8(lVar4);
        func_0x000107c61574(pcVar9);
        func_0x000107c61574(puVar10);
        return ppuVar11;
      }
      func_0x000107c61170(param_2);
      param_2 = lVar3;
    }
    func_0x000107c61170(param_2);
  }
  func_0x0001000285a8(0x112d3b7d0,&UNK_10d904cc0);
  puVar10 = PTR_PTR_1126ae750;
  func_0x000107c61168();
  func_0x000107c4d73c();
  func_0x000107c61180();
  ppuVar11 = &puStack_80;
  puStack_80 = puVar10;
  func_0x000100854cb0(ppuVar11);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar2);
  return ppuVar11;
}



/* Entry: 10285f8fc; end: 10285fb1b;  */

void FUN_10285f8fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  puVar1 = PTR_PTR_1126e1928;
  func_0x000107c610f8(PTR_PTR_1126e1928);
  func_0x000107c453e4();
  puVar2 = &UNK_110558e10;
  func_0x000107c613fc(&UNK_110558e10,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  pcStack_50 = FUN_1028604e8;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_110558e28;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c6157c(param_1);
  func_0x000107c61434(param_3);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(puVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 10285fb1c; end: 10285fb93; -[_TtC40NewMemberAddedCardMessageAccessoryPlugin40NewMemberAddedCardMessageAccessoryPlugin accessoryParamsForMessage:conversationInformation:] */

void FUN_10285fb1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  func_0x00010285edac(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10285fb94; end: 10285fb9b; -[_TtC40NewMemberAddedCardMessageAccessoryPlugin40NewMemberAddedCardMessageAccessoryPlugin pluginType] */

undefined8 FUN_10285fb94(void)

{
  return 0;
}



/* Entry: 10285fb9c; end: 10285fbb3; -[_TtC40NewMemberAddedCardMessageAccessoryPlugin40NewMemberAddedCardMessageAccessoryPlugin identifier] */

/* WARNING: Removing unreachable block (ram,0x00010285fbb0) */

void FUN_10285fb9c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 10285fbb4; end: 10285fcdb;  */

void FUN_10285fbb4(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  uVar6 = *param_2;
  *param_1 = 0;
  puVar3 = &UNK_110558e60;
  func_0x000107c613fc(&UNK_110558e60,0x18,7);
  *(undefined8 **)(puVar3 + 0x10) = param_1;
  puVar4 = &UNK_110558e88;
  func_0x000107c613fc(&UNK_110558e88,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_1028604f4;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  uStack_50 = 0x102860520;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_10285fcdc;
  puStack_58 = &UNK_110558ea0;
  puStack_48 = puVar4;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar1);
  func_0x000107c4c754(uVar6);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar3);
  puVar3 = puVar4;
  func_0x000107c61544(puVar4,"",0x79,0xb5,0x25,1);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar3 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10285fcdc);
  (*pcVar2)();
}



/* Entry: 10285fcdc; end: 10285fd17;  */

void FUN_10285fcdc(long param_1,undefined8 param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  func_0x000107c615f0(param_2);
  (*pcVar1)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_2);
  return;
}



/* Entry: 10285fd18; end: 1028600e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10285fd18(ulong param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  undefined1 auStack_68 [24];
  
  lVar2 = _DAT_112ec4b88;
  lVar3 = _DAT_112ec4b40;
  uVar1 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    return;
  }
  lVar8 = *(long *)(unaff_x20 + _DAT_112ec4b88);
  if (lVar8 != 0) goto LAB_10285fe0c;
  func_0x000107c61428(unaff_x20 + _DAT_112ec4b40,auStack_68,0,0);
  lVar3 = unaff_x20 + lVar3;
  func_0x000107c61618();
  if (lVar3 == 0) {
LAB_10285fdf4:
    lVar9 = 0;
  }
  else {
    lVar8 = *(long *)(unaff_x20 + _DAT_112ec4b70);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar8 == 0) {
      func_0x000107c61170(lVar3);
      goto LAB_10285fdf4;
    }
    lVar4 = lVar8;
    func_0x000107c40c04();
    func_0x000107c61180();
    lVar9 = lVar4;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    func_0x000107c615e8(lVar8);
    func_0x000107c61170(lVar4);
  }
  uVar5 = *(undefined8 *)(unaff_x20 + lVar2);
  *(long *)(unaff_x20 + lVar2) = lVar9;
  func_0x000107c615e8(uVar5);
  lVar8 = *(long *)(unaff_x20 + lVar2);
  if (lVar8 == 0) {
    return;
  }
LAB_10285fe0c:
  puVar6 = PTR_PTR_1126ab438;
  func_0x000107c610f8(PTR_PTR_1126ab438);
  func_0x000107c615f0(lVar8);
  uVar5 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  func_0x000107c47d40(puVar6);
  func_0x000107c61170(uVar5);
  puVar7 = PTR_PTR_1126ab448;
  func_0x000107c610f8(PTR_PTR_1126ab448);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c491c4(puVar7);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(param_1);
  FUN_10286047c(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar5 = 1;
  func_0x000107c6010c(1);
  func_0x000107c59158(puVar7);
  func_0x000107c61170(uVar5);
  lVar3 = lVar8;
  func_0x000107c4de38(lVar8);
  func_0x000107c61180();
  func_0x000107c615e8(lVar8);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(lVar3);
  return;
}



/* Entry: 1028600e4; end: 102860143; -[_TtC40NewMemberAddedCardMessageAccessoryPlugin40NewMemberAddedCardMessageAccessoryPlugin init] */

void FUN_1028600e4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("NewMemberAddedCardMessageAccessoryPlugin.NewMemberAddedCardMessageAccessoryPlugin"
                      ,0x51,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102860110);
  (*pcVar1)();
}



/* Entry: 102860144; end: 10286020f; -[_TtC40NewMemberAddedCardMessageAccessoryPlugin40NewMemberAddedCardMessageAccessoryPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102860144(long param_1)

{
  func_0x000100d0b01c(param_1 + _DAT_112ec4b38);
  func_0x000100d0b01c(param_1 + _DAT_112ec4b40);
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ec4b60 + 8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec4b58));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec4b68));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec4b70));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec4b78));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ec4b80));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec4b50));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec4b48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ec4b88));
  return;
}



/* Entry: 102860210; end: 1028602bf; -[_TtC40NewMemberAddedCardMessageAccessoryPlugin40NewMemberAddedCardMessageAccessoryPlugin groupProfileWillDimiss:] */

/* WARNING: Possible PIC construction at 0x000102860260: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028602a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102860264) */
/* WARNING: Removing unreachable block (ram,0x000102860288) */
/* WARNING: Removing unreachable block (ram,0x0001028602a4) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102860210(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112ec4b50);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x000107c61170(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1028602c0; end: 10286033f; -[_TtC40NewMemberAddedCardMessageAccessoryPlugin40NewMemberAddedCardMessageAccessoryPlugin groupProfileDidDimiss:withRequestedFriendshipProfile:] */

/* WARNING: Possible PIC construction at 0x000102860314: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102860318) */
/* WARNING: Removing unreachable block (ram,0x000107c61170) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_1028602c0(undefined8 param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  
  func_0x000107c5faec();
  uVar1 = param_4 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    func_0x000107c61174(param_1);
    FUN_10285fd18(param_4,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102860340; end: 1028603a7; -[_TtC40NewMemberAddedCardMessageAccessoryPlugin40NewMemberAddedCardMessageAccessoryPlugin groupProfileDidDismiss:withRequestedChat:deeplinkType:] */

/* WARNING: Possible PIC construction at 0x000102860388: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010286038c) */

void FUN_102860340(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_1028603b0(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1028603a8; end: 1028603af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** FUN_1028603a8(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined1 *puVar13;
  long unaff_x20;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar2 = *param_1;
  lVar3 = param_1[1];
  puVar13 = auStack_78;
  func_0x000107c61428(unaff_x20 + 0x10,puVar13,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  func_0x000107c61174();
  func_0x000107c61174();
  if (lVar1 != 0) {
    lVar4 = lVar2;
    func_0x00010285f1a8();
    if (lVar4 != 0) {
      lVar5 = *(long *)(lVar1 + _DAT_112ec4b68);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar5 != 0) {
        lVar6 = lVar3;
        func_0x000107c40674();
        func_0x000107c61180();
        lVar7 = lVar6;
        func_0x000107c5faec();
        func_0x000107c61170(lVar6);
        func_0x0001000285a8(0x112d63f00,&UNK_10d929700);
        puVar11 = PTR_PTR_1126ae6b8;
        func_0x000107c61168(PTR_PTR_1126ae6b8);
        puVar8 = puVar11;
        func_0x0001000d224c(&puStack_80);
        func_0x00010488b298();
        func_0x000107c61574(puStack_80);
        func_0x000107c43bf8(puVar11);
        func_0x000107c61180();
        func_0x000107c61170(puVar8);
        puVar8 = puVar11;
        func_0x0001000b637c(puVar11);
        func_0x000107c61170(puVar11);
        uVar9 = 0x112ec4bb8;
        func_0x0001000285a8(0x112ec4bb8,&UNK_10dae4af0);
        pcVar10 = FUN_10285fbb4;
        func_0x0001000bfde0(FUN_10285fbb4,0,uVar9);
        func_0x000107c61574(puVar8);
        puVar11 = &UNK_110558d98;
        func_0x000107c613fc(&UNK_110558d98,0x38,7);
        *(long *)(puVar11 + 0x10) = lVar5;
        *(long *)(puVar11 + 0x18) = lVar1;
        *(long *)(puVar11 + 0x20) = lVar7;
        *(undefined1 **)(puVar11 + 0x28) = puVar13;
        *(long *)(puVar11 + 0x30) = lVar4;
        func_0x000107c615f0(lVar5);
        func_0x000107c61174(lVar1);
        func_0x000107c61174(lVar4);
        uVar9 = 0x112d38358;
        func_0x0001000285a8(0x112d38358,&UNK_10d902090);
        ppuVar12 = (undefined **)0x102860444;
        func_0x0001000bfde0(0x102860444,puVar11,uVar9);
        func_0x000107c61170(lVar2);
        func_0x000107c61170(lVar3);
        func_0x000107c61170(lVar1);
        func_0x000107c61170(lVar4);
        func_0x000107c615e8(lVar5);
        func_0x000107c61574(pcVar10);
        func_0x000107c61574(puVar11);
        return ppuVar12;
      }
      func_0x000107c61170(lVar1);
      lVar1 = lVar4;
    }
    func_0x000107c61170(lVar1);
  }
  func_0x0001000285a8(0x112d3b7d0,&UNK_10d904cc0);
  puVar11 = PTR_PTR_1126ae750;
  func_0x000107c61168();
  func_0x000107c4d73c();
  func_0x000107c61180();
  ppuVar12 = &puStack_80;
  puStack_80 = puVar11;
  func_0x000100854cb0(ppuVar12);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar3);
  return ppuVar12;
}



/* Entry: 1028603b0; end: 10286041b;  */

void FUN_1028603b0(ulong param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  
  func_0x000107c61174();
  func_0x00010452253c();
  if ((param_3 & 0xff) != 1) {
    uVar1 = param_1 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar1 = param_2 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      func_0x00010285ff1c();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10286041c; end: 10286043b;  */

void FUN_10286041c(void)

{
  func_0x000107c61168(&PTR_PTR_112866a80);
  return;
}



/* Entry: 10286043c; end: 10286047b;  */

void FUN_10286043c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10286047c; end: 1028604bb;  */

void FUN_10286047c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1028604bc; end: 1028604e7;  */

void FUN_1028604bc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1028604e8; end: 1028604f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028604e8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_58,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  lVar3 = _DAT_112ec4b38;
  if (lVar2 != 0) {
    func_0x000107c61428(lVar2 + _DAT_112ec4b38,auStack_70,0,0);
    lVar3 = lVar2 + lVar3;
    func_0x000107c61618();
    lVar1 = _DAT_112ec4b50;
    if (lVar3 != 0) {
      lVar4 = *(long *)(lVar2 + _DAT_112ec4b50);
      func_0x000107c5194c();
      func_0x000107c61180();
      if (lVar4 != 0) {
        func_0x000107c61170();
        func_0x000107c4ffe8(*(undefined8 *)(lVar2 + lVar1));
        func_0x000107c61180();
        func_0x000107c615e8();
      }
      puVar5 = PTR_PTR_1126b4b68;
      func_0x000107c610f8(PTR_PTR_1126b4b68);
      func_0x000107c615f0(lVar3);
      func_0x000107c5fadc(uVar6,uVar7);
      func_0x000107c49030(puVar5);
      func_0x000107c615e8(lVar3);
      func_0x000107c61170(uVar6);
      func_0x000107c42c1c(*(undefined8 *)(lVar2 + lVar1));
      func_0x000107c615e8(lVar3);
      func_0x000107c61170(puVar5);
    }
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 1028604f4; end: 10286053f;  */

void FUN_1028604f4(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = **(undefined8 **)(unaff_x20 + 0x10);
  **(undefined8 **)(unaff_x20 + 0x10) = param_1;
  func_0x000107c615f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 102860540; end: 10286054f;  */

void FUN_102860540(long param_1,long param_2)

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



/* Entry: 102860550; end: 102860a3f;  */

void FUN_102860550(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec3540,&UNK_10dae3580);
  puVar1 = &UNK_110558ed8;
  func_0x000107c613fc(&UNK_110558ed8,0x58,7);
  *(undefined8 *)(puVar1 + 0x10) = param_7;
  *(undefined8 *)(puVar1 + 0x18) = param_8;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_3;
  *(undefined8 *)(puVar1 + 0x38) = param_4;
  *(undefined8 *)(puVar1 + 0x40) = param_2;
  *(undefined8 *)(puVar1 + 0x48) = param_6;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_9);
  func_0x0001000823a8(FUN_102860a40,puVar1);
  return;
}



/* Entry: 102860a40; end: 102860a73;  */

void FUN_102860a40(void)

{
  long unaff_x20;
  
  func_0x000102860654(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 102860a74; end: 102860a83;  */

undefined1  [16] FUN_102860a74(void)

{
  return ZEXT816(0x110558f00);
}



/* Entry: 102860a84; end: 102860aa3; -[_TtC29SCChatDWebUpsellMessagePlugin29SCChatDWebUpsellMessagePlugin uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102860a84(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112ec4bd8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102860aa4; end: 102860ab7; -[_TtC29SCChatDWebUpsellMessagePlugin29SCChatDWebUpsellMessagePlugin setUiContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102860aa4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112ec4bd8,param_3);
  return;
}



/* Entry: 102860ab8; end: 102860ac7; -[_TtC29SCChatDWebUpsellMessagePlugin29SCChatDWebUpsellMessagePlugin activeConversationInformationObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102860ab8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec4be8));
  return;
}



/* Entry: 102860ac8; end: 102860b07; -[_TtC29SCChatDWebUpsellMessagePlugin29SCChatDWebUpsellMessagePlugin setActiveConversationInformationObservable:] */

void FUN_102860ac8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102860b08(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102860b08; end: 102860c2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102860b08(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  lVar5 = _DAT_112ec4be8;
  ppuVar2 = &puStack_70;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ec4be8);
  *(long *)(unaff_x20 + _DAT_112ec4be8) = param_1;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  lVar5 = *(long *)(unaff_x20 + lVar5);
  if (lVar5 != 0) {
    puVar1 = &UNK_110558fc8;
    func_0x000107c613fc(&UNK_110558fc8,0x18,7);
    func_0x000107c61614(puVar1 + 0x10);
    uStack_50 = 0x102861ba4;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    uStack_60 = 0x102857454;
    puStack_58 = &UNK_110559120;
    puStack_48 = puVar1;
    func_0x000107c60bc4(&puStack_70);
    puVar1 = puStack_48;
    func_0x000107c61174();
    func_0x000107c61574(puVar1);
    lVar3 = lVar5;
    func_0x000107c5c320();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    func_0x000107c60bd0(ppuVar2);
    param_1 = lVar5;
    lVar5 = lVar3;
  }
  func_0x000107c61170(param_1);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ec4c28);
  *(long *)(unaff_x20 + _DAT_112ec4c28) = lVar5;
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 102860c2c; end: 102860cd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102860c2c(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000107c4dfe8();
    func_0x000107c61180();
    if (param_1 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = param_1;
      func_0x000107c4ee74();
      func_0x000107c61180();
      func_0x000107c61170(param_1);
    }
    uVar2 = *(undefined8 *)(param_2 + _DAT_112ec4c18);
    *(long *)(param_2 + _DAT_112ec4c18) = lVar1;
    func_0x000107c61170(param_2);
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 102860cd8; end: 102860ce7; -[_TtC29SCChatDWebUpsellMessagePlugin29SCChatDWebUpsellMessagePlugin activeConversationIdObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102860cd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec4bf0));
  return;
}



/* Entry: 102860ce8; end: 102860d27; -[_TtC29SCChatDWebUpsellMessagePlugin29SCChatDWebUpsellMessagePlugin setActiveConversationIdObservable:] */

void FUN_102860ce8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102860d28(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102860d28; end: 102860e4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102860d28(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  lVar5 = _DAT_112ec4bf0;
  ppuVar2 = &puStack_70;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ec4bf0);
  *(long *)(unaff_x20 + _DAT_112ec4bf0) = param_1;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  lVar5 = *(long *)(unaff_x20 + lVar5);
  if (lVar5 != 0) {
    puVar1 = &UNK_110558fc8;
    func_0x000107c613fc(&UNK_110558fc8,0x18,7);
    func_0x000107c61614(puVar1 + 0x10);
    pcStack_50 = FUN_102861b9c;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_100b6fe98;
    puStack_58 = &UNK_1105590f8;
    puStack_48 = puVar1;
    func_0x000107c60bc4(&puStack_70);
    puVar1 = puStack_48;
    func_0x000107c61174();
    func_0x000107c61574(puVar1);
    lVar3 = lVar5;
    func_0x000107c5c320();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    func_0x000107c60bd0(ppuVar2);
    param_1 = lVar5;
    lVar5 = lVar3;
  }
  func_0x000107c61170(param_1);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ec4c20);
  *(long *)(unaff_x20 + _DAT_112ec4c20) = lVar5;
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 102860e4c; end: 102860eef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102860e4c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x0001000285a8(0x112d53b48,&UNK_10d925340);
    func_0x000107c613fc();
    uVar1 = 1;
    func_0x00010008747c();
    uVar2 = *(undefined8 *)(param_2 + _DAT_112ec4c30);
    *(undefined8 *)(param_2 + _DAT_112ec4c30) = uVar1;
    func_0x000107c61574(uVar2);
    *(undefined8 *)(param_2 + _DAT_112ec4c38) = 0xffffffffffffffff;
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102860ef0; end: 102860f4f; -[_TtC29SCChatDWebUpsellMessagePlugin29SCChatDWebUpsellMessagePlugin init] */

void FUN_102860ef0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCChatDWebUpsellMessagePlugin.SCChatDWebUpsellMessagePlugin",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102860f1c);
  (*pcVar1)();
}



/* Entry: 102860f50; end: 102861027; -[_TtC29SCChatDWebUpsellMessagePlugin29SCChatDWebUpsellMessagePlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102860f50(long param_1)

{
  func_0x000100e3b598(param_1 + _DAT_112ec4bd8);
  func_0x000107c61610(param_1 + _DAT_112ec4be0);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec4be8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec4bf0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec4bf8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec4c00));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec4c08));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ec4c10));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec4c18));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec4c20));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec4c28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ec4c30));
  return;
}



/* Entry: 102861028; end: 102861047;  */

void FUN_102861028(void)

{
  func_0x000107c61168(&PTR_PTR_112866b90);
  return;
}



/* Entry: 102861048; end: 10286122b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_102861048(ulong param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  ulong uVar9;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112ec4c10);
  func_0x000107c4ce08(lVar2,param_2,param_1);
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c4051c();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = lVar3;
    func_0x000107c5bd28();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10286122c);
      (*pcVar1)();
    }
    lVar3 = lVar4;
    func_0x000107c5bd30();
    func_0x000107c61170(lVar4);
    if ((int)lVar3 == 0x11) {
      lVar3 = 0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      uVar7 = 0x30;
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x18) = 2;
      *(undefined8 *)(lVar3 + 0x10) = 1;
      uVar9 = param_1;
      func_0x000107c51f08();
      func_0x000107c61180();
      uVar5 = uVar9;
      func_0x000107c5cb4c();
      func_0x000107c61180();
      func_0x000107c61170(uVar9);
      uVar9 = uVar5;
      func_0x000107c5faec();
      uVar8 = uVar7;
      func_0x000107c61170();
      *(ulong *)(lVar3 + 0x20) = uVar9;
      *(undefined8 *)(lVar3 + 0x28) = uVar7;
      FUN_10286122c();
      if ((uVar5 & 1) == 0) {
        uVar9 = 0;
        uVar8 = 0;
      }
      else {
        uVar9 = param_1;
        func_0x000107c41800(param_1);
        func_0x000107c61180();
        uVar5 = uVar9;
        func_0x000107c40674();
        func_0x000107c61180();
        func_0x000107c61170(uVar9);
        uVar6 = uVar5;
        func_0x000107c5cb4c(uVar5);
        func_0x000107c61180();
        func_0x000107c61170(uVar5);
        uVar9 = uVar6;
        func_0x000107c5faec(uVar6);
        func_0x000107c61170(uVar6);
      }
      FUN_102861358(param_1,lVar3,uVar9,uVar8);
      func_0x000107c615e8(lVar2);
      func_0x000107c61574(lVar3);
      func_0x000107c6142c(uVar8);
      return param_1;
    }
  }
  func_0x000107c615e8(lVar2);
  return 0;
}



/* Entry: 10286122c; end: 102861357;  */

undefined1 FUN_10286122c(void)

{
  undefined *puVar1;
  undefined1 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 uStack_41;
  
  uStack_41 = 0;
  puVar4 = &UNK_110559090;
  func_0x000107c613fc(&UNK_110559090,0x18,7);
  *(undefined1 **)(puVar4 + 0x10) = &uStack_41;
  puVar5 = &UNK_1105590b8;
  func_0x000107c613fc(&UNK_1105590b8,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = 0x102861b6c;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  pcStack_58 = FUN_102861b7c;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x42000000;
  uStack_68 = 0x102861a24;
  puStack_60 = &UNK_1105590d0;
  ppuVar6 = &puStack_78;
  puStack_50 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  puVar1 = puStack_50;
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(puVar1);
  func_0x000107c4c6d0();
  func_0x000107c60bd0(ppuVar6);
  uVar2 = uStack_41;
  func_0x000107c61574(puVar4);
  puVar4 = puVar5;
  func_0x000107c61544(puVar5,"",99,0x9b,0x1e,1);
  func_0x000107c61574(puVar5);
  if (((ulong)puVar4 & 1) == 0) {
    return uVar2;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x102861358);
  (*pcVar3)();
}



/* Entry: 102861358; end: 10286163b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102861358(undefined8 param_1,undefined *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined *apuStack_b0 [3];
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = PTR_PTR_1126ab468;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x0001000285a8(0x112d5a8a0,&UNK_10d927f50);
  func_0x000107c5fc48(param_2,PTR___sSSN_11034da80);
  ppuVar2 = &puStack_90;
  puStack_90 = param_2;
  func_0x000100854cb0(ppuVar2);
  func_0x000107c61170(param_2);
  func_0x0001004575f0();
  func_0x000107c61574(ppuVar2);
  puVar3 = param_2;
  func_0x000107c5cb24(param_2);
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  func_0x000107c5731c(puVar1);
  func_0x000107c61170(puVar3);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ec4c08);
  func_0x000107c5c734(uVar4);
  func_0x000107c61180();
  func_0x000107c5a3d0(puVar1);
  func_0x000107c615e8(uVar4);
  FUN_1028616d4(param_1);
  uVar4 = 0;
  FUN_102861b20(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  pcVar5 = FUN_102861808;
  func_0x0001000bfde0(FUN_102861808,0,uVar4);
  func_0x000107c61574(param_1);
  func_0x0001004575f0();
  func_0x000107c61574(pcVar5);
  uVar4 = param_1;
  func_0x000107c5cb24(param_1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c59224(puVar1);
  func_0x000107c61170(uVar4);
  puVar3 = &UNK_110558fc8;
  func_0x000107c613fc(&UNK_110558fc8,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar6 = &UNK_110558ff0;
  func_0x000107c613fc(&UNK_110558ff0,0x28,7);
  *(undefined **)(puVar6 + 0x10) = puVar3;
  *(undefined8 *)(puVar6 + 0x18) = param_3;
  *(undefined8 *)(puVar6 + 0x20) = param_4;
  uStack_70 = 0x102861af8;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_110559008;
  ppuVar2 = &puStack_90;
  puStack_68 = puVar6;
  func_0x000107c60bc4(ppuVar2);
  puVar3 = puStack_68;
  func_0x000107c61434(param_4);
  func_0x000107c61574(puVar3);
  func_0x000107c56dac(puVar1);
  func_0x000107c60bd0(ppuVar2);
  uVar4 = 0x112ec4c68;
  uVar7 = 0;
  FUN_102861b20(0,0x112ec4c68,&PTR_PTR_1126ab470);
  func_0x000107c614e8();
  func_0x000107c3ff48();
  func_0x000107c61180();
  uVar8 = uVar7;
  func_0x000107c5faec();
  func_0x000107c61170(uVar7);
  uStack_88 = 0;
  puStack_90 = (undefined *)0x0;
  puStack_78 = (undefined *)0x0;
  puStack_80 = (undefined *)0x0;
  uVar7 = 0;
  FUN_102861b20(0,0x112ec4c70,&PTR_PTR_1126ab468);
  apuStack_b0[0] = puVar1;
  uStack_98 = uVar7;
  func_0x000107c610f8(PTR_PTR_1126c67d8);
  FUN_1027efbc4(uVar8,uVar4,&puStack_90,apuStack_b0);
  return;
}



/* Entry: 10286163c; end: 1028616b3; -[_TtC29SCChatDWebUpsellMessagePlugin29SCChatDWebUpsellMessagePlugin valdiContextParamsForMessage:conversationParticipants:] */

void FUN_10286163c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_102861048(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1028616b4; end: 1028616cb; -[_TtC29SCChatDWebUpsellMessagePlugin29SCChatDWebUpsellMessagePlugin identifier] */

/* WARNING: Removing unreachable block (ram,0x0001028616c8) */

void FUN_1028616b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1028616cc; end: 1028616d3; -[_TtC29SCChatDWebUpsellMessagePlugin29SCChatDWebUpsellMessagePlugin pluginType] */

undefined8 FUN_1028616cc(void)

{
  return 1;
}



/* Entry: 1028616d4; end: 102861807;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1028616d4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 *puVar4;
  undefined1 uStack_33;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  lVar2 = param_1;
  func_0x000107c4e03c();
  lVar1 = _DAT_112ec4c38;
  if (lVar2 == *(long *)(unaff_x20 + _DAT_112ec4c38)) {
    puVar4 = *(undefined1 **)(unaff_x20 + _DAT_112ec4c30);
    func_0x000107c6157c(puVar4);
  }
  else {
    lVar2 = param_1;
    func_0x000107c4e03c();
    if (*(long *)(unaff_x20 + lVar1) < lVar2) {
      func_0x000107c4e03c();
      *(long *)(unaff_x20 + lVar1) = param_1;
      lVar1 = _DAT_112ec4c30;
      uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112ec4c30);
      uStack_32 = 0;
      func_0x000107c6157c(uVar3);
      func_0x000100087c34(&uStack_32);
      func_0x000107c61574(uVar3);
      func_0x0001000285a8(0x112d53b48,&UNK_10d925340);
      func_0x000107c613fc();
      puVar4 = (undefined1 *)0x1;
      func_0x00010008747c();
      uStack_33 = 1;
      func_0x000100087c34(&uStack_33);
      uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
      *(undefined1 **)(unaff_x20 + lVar1) = puVar4;
      func_0x000107c6157c(puVar4);
      func_0x000107c61574(uVar3);
    }
    else {
      func_0x0001000285a8(0x112d5ba30,&UNK_10d929a50);
      uStack_31 = 0;
      puVar4 = &uStack_31;
      func_0x000100854cb0(puVar4);
    }
  }
  return puVar4;
}



/* Entry: 102861808; end: 10286183f;  */

void FUN_102861808(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  *param_1 = puVar1;
  return;
}



/* Entry: 102861840; end: 10286198f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102861840(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112ec4bd8;
    func_0x000107c61618();
    if (lVar1 == 0) {
      func_0x000107c61170(param_1);
    }
    else {
      pcVar2 = "valdiContext(message:senderUserIds:mischiefID:)";
      func_0x0001000c10c0("valdiContext(message:senderUserIds:mischiefID:)");
      func_0x000107c61180();
      puVar3 = &UNK_110559040;
      func_0x000107c613fc(&UNK_110559040,0x30,7);
      *(long *)(puVar3 + 0x10) = param_1;
      *(long *)(puVar3 + 0x18) = lVar1;
      *(undefined8 *)(puVar3 + 0x20) = param_2;
      *(undefined8 *)(puVar3 + 0x28) = param_3;
      pcStack_68 = FUN_102861b60;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      puStack_78 = &UNK_1000f6b44;
      puStack_70 = &UNK_110559058;
      ppuVar4 = &puStack_88;
      puStack_60 = puVar3;
      func_0x000107c60bc4(ppuVar4);
      puVar3 = puStack_60;
      func_0x000107c61434(param_3);
      func_0x000107c61174(param_1);
      func_0x000107c615f0(lVar1);
      func_0x000107c61574(puVar3);
      func_0x000107c4e524(pcVar2);
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c61170(param_1);
      func_0x000107c615e8(lVar1);
      func_0x000107c615e8(pcVar2);
    }
  }
  return;
}


