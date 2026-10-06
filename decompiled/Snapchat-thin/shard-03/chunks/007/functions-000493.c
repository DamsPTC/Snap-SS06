/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102c34860; end: 102c3491b;  */

/* WARNING: Possible PIC construction at 0x000102c348b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c348c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c348d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c348e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c348dc) */
/* WARNING: Removing unreachable block (ram,0x000102c348cc) */
/* WARNING: Removing unreachable block (ram,0x000102c348bc) */
/* WARNING: Removing unreachable block (ram,0x000102c348ec) */

void FUN_102c34860(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)0x112d38280;
  func_0x0001000285a8("OperaEventListenerImpl",0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  puVar2[3] = 10;
  puVar2[2] = 5;
  puVar3 = puVar2;
  func_0x000103bb7dd0();
  uVar1 = puVar3[1];
  puVar2[4] = *puVar3;
  puVar2[5] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)();
  return;
}



/* Entry: 102c3491c; end: 102c3499b;  */

void FUN_102c3491c(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c3499c; end: 102c349bb;  */

void FUN_102c3499c(void)

{
  return;
}



/* Entry: 102c349bc; end: 102c34a07;  */

void FUN_102c349bc(long param_1)

{
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_20 = PTR___sBoWV_11034d678 + 0x40;
  puStack_18 = &UNK_10db355d0;
  func_0x000107c61524(param_1,0,2,&puStack_20,param_1 + 0x70);
  return;
}



/* Entry: 102c34a08; end: 102c34a93;  */

void FUN_102c34a08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  undefined *puStack_50;
  undefined **ppuStack_48;
  undefined1 auStack_40 [16];
  
  puStack_50 = &UNK_11065d188;
  ppuStack_48 = &PTR_DAT_11065d0f0;
  auStack_68[0] = 2;
  uStack_80 = param_1;
  uStack_78 = param_2;
  uStack_70 = param_4;
  func_0x0001034e24cc(0x102c34f8c,auStack_40,auStack_68,0x102c34f94,auStack_90,0,0,0);
  func_0x0001000834e4(auStack_68);
  func_0x0001002a64a8(param_3);
  return;
}



/* Entry: 102c34a94; end: 102c34b8f;  */

undefined1  [16] FUN_102c34a94(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = 0;
  uStack_38 = 0xe000000000000000;
  func_0x000107c602fc(0x23);
  func_0x000107c6142c(uStack_38);
  uStack_40 = 0x766520617265704f;
  uStack_38 = 0xec00000020746e65;
  func_0x000107c5fb78(param_1,param_2);
  func_0x000107c5fb78(0xd000000000000013,0x800000010f100a10);
  if (param_3 == 0) {
    uVar2 = 0xe300000000000000;
  }
  else {
    lStack_48 = param_3;
    func_0x000107c61434(param_3);
    uVar2 = 0x112d472a8;
    func_0x0001000285a8(0x112d472a8,&UNK_10d90e490);
    func_0x000107c5fb18(&lStack_48,uVar2);
  }
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar2);
  auVar1._8_8_ = uStack_38;
  auVar1._0_8_ = uStack_40;
  return auVar1;
}



/* Entry: 102c34b90; end: 102c34b97;  */

void FUN_102c34b90(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102c34b98; end: 102c34bbb;  */

void FUN_102c34b98(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c34bbc; end: 102c34bc7;  */

void FUN_102c34bbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e722604);
  return;
}



/* Entry: 102c34bc8; end: 102c34c17;  */

void FUN_102c34bc8(long param_1)

{
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_20 = PTR___syycWV_11034f1c0 + 0x40;
  puStack_18 = PTR___sBoWV_11034d678 + 0x40;
  func_0x000107c61524(param_1,0,2,&puStack_20,param_1 + 0x78);
  return;
}



/* Entry: 102c34c18; end: 102c34e5f;  */

/* WARNING: Removing unreachable block (ram,0x000102c34d08) */

void FUN_102c34c18(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long *unaff_x20;
  long lVar11;
  long lVar12;
  undefined1 *puVar13;
  undefined1 auStack_f0 [8];
  undefined8 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_90 [24];
  undefined *puStack_78;
  undefined **ppuStack_70;
  
  lVar1 = *(long *)(*unaff_x20 + 0x68);
  lVar3 = *(long *)(*unaff_x20 + 0x70);
  lVar5 = 0;
  uStack_c8 = param_1;
  func_0x000107c61510(0,lVar1,lVar3,0,0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar13 = auStack_f0 + -extraout_x8;
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar12 = (long)puVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  if (param_4 == 0) {
    puVar7 = (undefined8 *)0x0;
    uVar10 = 0;
    func_0x0001048db000(0,0,0xd000000000000065,0x800000010f100980,0x36);
    puVar8 = puVar7;
    func_0x0001018e0ad8();
    puVar9 = &UNK_1107b6098;
    func_0x000107c613f8(&UNK_1107b6098,puVar8,0,0);
    *puVar8 = puVar7;
    puVar8[1] = uVar10;
    func_0x000107c61654();
    puStack_78 = &UNK_11065d188;
    ppuStack_70 = &PTR_DAT_11065d0f0;
    auStack_90[0] = 3;
    uStack_b0 = uStack_c8;
    uStack_a8 = param_2;
    puStack_a0 = puVar9;
    func_0x0001034e2644(auStack_90,0x102c34f80,auStack_c0,0,0,0);
    func_0x000107c614ac(puVar9);
    func_0x0001000834e4(auStack_90);
  }
  else {
    lVar6 = 0;
    uStack_e8 = param_3;
    lStack_e0 = extraout_x12;
    lStack_d8 = lVar5;
    uStack_d0 = param_2;
    func_0x000102c3384c();
    func_0x000107c613fc();
    *(long *)(lVar6 + 0x10) = param_4;
    pcVar2 = (code *)unaff_x20[2];
    func_0x000107c61434(param_4);
    (*pcVar2)(lVar12,lVar6);
    lVar5 = lStack_d8;
    iVar4 = *(int *)(lStack_d8 + 0x30);
    (**(code **)(*(long *)(lVar1 + -8) + 0x10))(puVar13,uStack_e8,lVar1);
    (**(code **)(lVar11 + 0x10))(puVar13 + iVar4,lVar12,lVar3);
    func_0x0001002a64a8(puVar13);
    func_0x000107c61574(lVar6);
    (**(code **)(lStack_e0 + 8))(puVar13,lVar5);
    (**(code **)(lVar11 + 8))(lVar12,lVar3);
  }
  return;
}



/* Entry: 102c34e60; end: 102c34f2b;  */

undefined1  [16] FUN_102c34e60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = 0;
  uStack_38 = 0xe000000000000000;
  func_0x000107c602fc(0x23);
  func_0x000107c5fb78(0xd00000000000001e,0x800000010f1009f0);
  func_0x000107c5fb78(param_1,param_2);
  func_0x000107c5fb78(0x20,0xe100000000000000);
  uVar2 = 0x112d393f0;
  uStack_48 = param_3;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c603d0(&uStack_48,&uStack_40,uVar2,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  auVar1._8_8_ = uStack_38;
  auVar1._0_8_ = uStack_40;
  return auVar1;
}



/* Entry: 102c34f2c; end: 102c34f73;  */

/* WARNING: Possible PIC construction at 0x000102c34f38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c34f3c) */

void FUN_102c34f2c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 102c34f74; end: 102c34fab;  */

void FUN_102c34f74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e722670);
  return;
}



/* Entry: 102c34fac; end: 102c350df;  */

undefined8 FUN_102c34fac(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  code *pcVar5;
  bool bVar6;
  undefined8 uVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c5fe14(uVar7,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  lVar9 = 0;
  puVar8 = (ulong *)(param_1 + 0x40);
  uVar10 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar11 = 0xffffffffffffffff;
  if (-uVar10 < 0x40) {
    uVar11 = ~(-1L << (-uVar10 & 0x3f));
  }
  uVar11 = uVar11 & *puVar8;
  uStack_68 = uVar7;
  lVar1 = lVar9;
  while( true ) {
    for (; uVar11 != 0; uVar11 = uVar11 - 1 & uVar11) {
      uVar4 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      puVar2 = (undefined8 *)
               (*(long *)(param_1 + 0x30) + LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) * 0x10 +
               lVar1 * 0x400);
      uVar7 = *puVar2;
      uVar3 = puVar2[1];
      func_0x000107c61434(uVar3);
      func_0x000100403b00(auStack_78,uVar7,uVar3);
      func_0x000107c6142c(uStack_70);
      lVar9 = lVar1;
    }
    bVar6 = SCARRY8(lVar1,1);
    lVar1 = lVar1 + 1;
    if (bVar6) break;
    if ((long)(0x3f - uVar10 >> 6) <= lVar1) {
      FUN_102c35828(param_1,puVar8,~uVar10,lVar9,0);
      return uStack_68;
    }
    uVar11 = puVar8[lVar1];
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x102c350e0);
  (*pcVar5)();
}



/* Entry: 102c350e0; end: 102c3513b;  */

long FUN_102c350e0(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x38);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    lVar2 = unaff_x20;
    FUN_102c3513c();
    uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
    *(long *)(unaff_x20 + 0x38) = lVar2;
    func_0x000107c61434();
    func_0x000107c6142c(uVar3);
    lVar1 = 0;
  }
  func_0x000107c61434(lVar1);
  return lVar2;
}



/* Entry: 102c3513c; end: 102c3541b;  */

undefined * FUN_102c3513c(long param_1)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  code *pcVar5;
  bool bVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined *puVar17;
  ulong uVar18;
  long alStack_88 [4];
  long lStack_68;
  
  FUN_102c387cc();
  alStack_88[0] = param_1;
  FUN_102c392d4();
  alStack_88[1] = param_1;
  FUN_102c37b10();
  alStack_88[2] = param_1;
  FUN_102c399e8();
  alStack_88[3] = param_1;
  FUN_102c39f38();
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lStack_68 = param_1;
  FUN_102c35c64(PTR___swiftEmptyArrayStorage_11034f1c8,0x112f01ef8,&UNK_10db35760);
  func_0x000107c61434();
  lVar11 = 0;
  do {
    lVar14 = alStack_88[lVar11];
    lVar11 = lVar11 + 1;
    func_0x000107c61434(lVar14);
    puVar17 = puVar7;
    func_0x000107c61558();
    uVar12 = 1L << ((ulong)*(byte *)(lVar14 + 0x20) & 0x3f);
    uVar18 = 0xffffffffffffffff;
    if ((*(byte *)(lVar14 + 0x20) & 0x3f) < 6) {
      uVar18 = ~(-1L << (uVar12 & 0x3f));
    }
    uVar18 = uVar18 & *(ulong *)(lVar14 + 0x40);
    func_0x000107c61434(lVar14);
    lVar16 = 0;
    while( true ) {
      while (uVar18 != 0) {
        uVar4 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
        uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
        uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
        uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
        uVar10 = LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) | lVar16 << 6;
        puVar1 = (ulong *)(*(long *)(lVar14 + 0x30) + uVar10 * 0x10);
        uVar4 = *puVar1;
        uVar3 = puVar1[1];
        uVar15 = *(undefined8 *)(*(long *)(lVar14 + 0x38) + uVar10 * 8);
        func_0x000107c61434(uVar3);
        func_0x000107c6157c(uVar15);
        uVar10 = uVar4;
        uVar9 = uVar3;
        func_0x000100029284();
        uVar13 = (ulong)~(uint)uVar9 & 1;
        lVar2 = *(long *)(puVar7 + 0x10) + uVar13;
        if (SCARRY8(*(long *)(puVar7 + 0x10),uVar13)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x102c35408);
          (*pcVar5)();
        }
        if (*(long *)(puVar7 + 0x18) < lVar2) {
          FUN_102c359a0(lVar2,(uint)puVar17 & 1);
          uVar10 = uVar4;
          uVar13 = uVar3;
          func_0x000100029284();
          if (((uint)uVar9 & 1) != ((uint)uVar13 & 1)) {
            func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x102c3541c);
            (*pcVar5)();
          }
        }
        else if (((ulong)puVar17 & 1) == 0) {
          FUN_102c35830();
        }
        uVar18 = uVar18 - 1 & uVar18;
        if ((uVar9 & 1) == 0) {
          *(ulong *)(puVar7 + (uVar10 >> 6) * 8 + 0x40) =
               *(ulong *)(puVar7 + (uVar10 >> 6) * 8 + 0x40) | 1L << (uVar10 & 0x3f);
          puVar1 = (ulong *)(*(long *)(puVar7 + 0x30) + uVar10 * 0x10);
          *puVar1 = uVar4;
          puVar1[1] = uVar3;
          *(undefined8 *)(*(long *)(puVar7 + 0x38) + uVar10 * 8) = uVar15;
          if (SCARRY8(*(long *)(puVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x102c3540c);
            (*pcVar5)();
          }
          *(long *)(puVar7 + 0x10) = *(long *)(puVar7 + 0x10) + 1;
        }
        else {
          func_0x000107c6142c(uVar3);
          uVar8 = *(undefined8 *)(*(long *)(puVar7 + 0x38) + uVar10 * 8);
          *(undefined8 *)(*(long *)(puVar7 + 0x38) + uVar10 * 8) = uVar15;
          func_0x000107c61574(uVar8);
        }
        puVar17 = (undefined *)0x1;
      }
      bVar6 = SCARRY8(lVar16,1);
      lVar16 = lVar16 + 1;
      if (bVar6) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x102c35404);
        (*pcVar5)();
      }
      if ((long)(uVar12 + 0x3f >> 6) <= lVar16) break;
      uVar18 = ((ulong *)(lVar14 + 0x40))[lVar16];
    }
    func_0x000107c61574(lVar14);
    func_0x000107c6142c(lVar14);
    if (lVar11 == 5) {
      func_0x000107c6142c(puVar7);
      uVar15 = 0x112f01ef0;
      func_0x0001000285a8(0x112f01ef0,&UNK_10db35758);
      func_0x000107c61408(alStack_88,5,uVar15);
      return puVar7;
    }
  } while( true );
}



/* Entry: 102c3541c; end: 102c35477;  */

long FUN_102c3541c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x40);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    FUN_102c350e0();
    FUN_102c34fac();
    uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
    *(long *)(unaff_x20 + 0x40) = lVar1;
    func_0x000107c61434();
    func_0x000107c6142c(uVar3);
    lVar2 = 0;
  }
  func_0x000107c61434(lVar2);
  return lVar1;
}



/* Entry: 102c35478; end: 102c35503;  */

void FUN_102c35478(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 102c35504; end: 102c356bf;  */

void FUN_102c35504(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  uVar1 = 0;
  func_0x000102c38b38();
  func_0x000107c613fc();
  FUN_102c38b58();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar1 = 0;
  func_0x000102c394dc();
  func_0x000107c613fc();
  FUN_102c394fc();
  *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
  uVar1 = 0;
  func_0x000102c38370();
  func_0x000107c613fc();
  FUN_102c38390();
  *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
  uVar1 = 0;
  func_0x000102c39b7c();
  func_0x000107c613fc();
  FUN_102c39b9c();
  *(undefined8 *)(unaff_x20 + 0x28) = uVar1;
  lVar2 = 0;
  func_0x000102c3a038();
  func_0x000107c613fc();
  lVar3 = 0x112f01ee0;
  func_0x0001000285a8(0x112f01ee0,&UNK_10db35740);
  func_0x000107c613fc();
  uVar1 = 0x112f01ee8;
  func_0x0001000285a8(0x112f01ee8,&UNK_10db35748);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(lVar3 + 0x10) = uVar1;
  *(undefined1 *)(lVar3 + 0x18) = 0;
  *(long *)(lVar2 + 0x10) = lVar3;
  *(undefined8 *)(lVar2 + 0x18) = 0;
  uVar1 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(lVar2 + 0x20) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(long *)(unaff_x20 + 0x30) = lVar2;
  return;
}



/* Entry: 102c356c0; end: 102c356db;  */

void FUN_102c356c0(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 102c356dc; end: 102c3572b;  */

void FUN_102c356dc(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  FUN_102c35478();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
  func_0x000107c6157c();
  func_0x000107c615e8(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x58);
  func_0x000107c61574();
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c3572c; end: 102c3574b;  */

void FUN_102c3572c(void)

{
  func_0x000107c61168(&PTR_PTR_112f01e08);
  return;
}



/* Entry: 102c3574c; end: 102c35827;  */

void FUN_102c3574c(void)

{
  long unaff_x20;
  
  func_0x000107c6157c(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102c35828; end: 102c3582f;  */

void FUN_102c35828(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 102c35830; end: 102c3599f;  */

void FUN_102c35830(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  
  func_0x0001000285a8(0x112f01ef8,&UNK_10db35760);
  lVar11 = *unaff_x20;
  lVar7 = lVar11;
  func_0x000107c6048c();
  if (*(long *)(lVar11 + 0x10) != 0) {
    lVar1 = lVar11 + 0x40;
    uVar8 = (1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar7 != lVar11 || lVar1 + uVar8 * 8 <= lVar7 + 0x40U) {
      func_0x000107c610b8(lVar7 + 0x40U,lVar1,uVar8 << 3);
    }
    lVar13 = 0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
    uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(lVar11 + 0x40);
    if (uVar8 == 0) goto LAB_102c3590c;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar13 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar11 + 0x30) + uVar10 * 0x10);
        uVar5 = puVar3[1];
        uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar10 * 8);
        puVar4 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar10 * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar10 * 8) = uVar12;
        func_0x000107c61434();
        func_0x000107c6157c(uVar12);
        if (uVar8 != 0) break;
LAB_102c3590c:
        do {
          lVar2 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x102c359a0);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_102c35978;
          uVar8 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar13 = lVar13 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar13 = lVar2;
      }
    } while( true );
  }
LAB_102c35978:
  func_0x000107c61574(lVar11);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 102c359a0; end: 102c35c3b;  */

void FUN_102c359a0(long param_1,ulong param_2)

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
  uVar6 = 0x112f01ef8;
  func_0x0001000285a8(0x112f01ef8,&UNK_10db35760);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_102c35c08:
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
          pcVar5 = (code *)SoftwareBreakpoint(1,0x102c35c38);
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
          goto LAB_102c35c08;
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
      func_0x000107c6157c(uVar18);
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
          pcVar5 = (code *)SoftwareBreakpoint(1,0x102c35c3c);
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



/* Entry: 102c35c3c; end: 102c35c63;  */

undefined * FUN_102c35c3c(long param_1)

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
    func_0x0001000285a8(0x112f01ef8,&UNK_10db35760);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c6157c(uVar9);
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102c35d54);
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
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102c35d58);
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



/* Entry: 102c35c64; end: 102c35d57;  */

undefined * FUN_102c35c64(long param_1,undefined8 param_2,undefined8 param_3)

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
    func_0x0001000285a8(param_2,param_3);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c6157c(uVar9);
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102c35d54);
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
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102c35d58);
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



/* Entry: 102c35d58; end: 102c35e9f;  */

undefined8 * FUN_102c35d58(void)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x38);
  puVar2 = puVar1;
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x112f01fd0;
    func_0x0001000285a8(0x112f01fd0,&UNK_10db357d8);
    func_0x000107c61534();
    puVar1[3] = 8;
    puVar1[2] = 4;
    puVar2 = puVar1;
    func_0x000103bb9d1c();
    uVar3 = puVar2[1];
    puVar1[4] = *puVar2;
    puVar1[5] = uVar3;
    puVar2 = *(undefined8 **)(unaff_x20 + 0x10);
    puVar1[6] = puVar2;
    func_0x000107c61434();
    func_0x000107c6157c();
    func_0x000103bb9c00();
    uVar3 = puVar2[1];
    puVar1[7] = *puVar2;
    puVar1[8] = uVar3;
    puVar2 = *(undefined8 **)(unaff_x20 + 0x18);
    puVar1[9] = puVar2;
    func_0x000107c61434();
    func_0x000107c6157c();
    func_0x000103bb9c70();
    uVar3 = puVar2[1];
    puVar1[10] = *puVar2;
    puVar1[0xb] = uVar3;
    puVar2 = *(undefined8 **)(unaff_x20 + 0x20);
    puVar1[0xc] = puVar2;
    func_0x000107c61434();
    func_0x000107c6157c();
    func_0x000103bb9d5c();
    uVar3 = puVar2[1];
    puVar1[0xd] = *puVar2;
    puVar1[0xe] = uVar3;
    uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
    puVar1[0xf] = uVar3;
    func_0x000107c61434();
    func_0x000107c6157c(uVar3);
    puVar2 = puVar1;
    func_0x000102c35c50();
    func_0x000107c61588(puVar1);
    uVar3 = 0x112f01fd8;
    func_0x0001000285a8(0x112f01fd8,&UNK_10db357e0);
    func_0x000107c61408(puVar1 + 4,4,uVar3);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
    *(undefined8 **)(unaff_x20 + 0x38) = puVar2;
    func_0x000107c61434(puVar2);
    func_0x000107c6142c(uVar3);
    puVar1 = (undefined8 *)0x0;
  }
  func_0x000107c61434(puVar1);
  return puVar2;
}



/* Entry: 102c35ea0; end: 102c35f0b;  */

void FUN_102c35ea0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c35f0c; end: 102c3611f;  */

void FUN_102c35f0c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  lVar1 = 0x112f01fe0;
  func_0x0001000285a8(0x112f01fe0,&UNK_10db357e8);
  lVar2 = lVar1;
  func_0x000107c613fc();
  lVar3 = 0x112f01fe8;
  func_0x0001000285a8(0x112f01fe8,&UNK_10db357f0);
  lVar4 = lVar3;
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(long *)(lVar2 + 0x10) = lVar4;
  *(undefined1 *)(lVar2 + 0x18) = 0;
  *(long *)(unaff_x20 + 0x10) = lVar2;
  lVar2 = lVar1;
  func_0x000107c613fc(lVar1,0x19,7);
  lVar4 = lVar3;
  func_0x000107c613fc(lVar3,*(undefined4 *)(lVar3 + 0x30),*(undefined2 *)(lVar3 + 0x34));
  func_0x0001000c2754();
  *(long *)(lVar2 + 0x10) = lVar4;
  *(undefined1 *)(lVar2 + 0x18) = 0;
  *(long *)(unaff_x20 + 0x18) = lVar2;
  lVar2 = lVar1;
  func_0x000107c613fc(lVar1,0x19,7);
  lVar4 = lVar3;
  func_0x000107c613fc(lVar3,*(undefined4 *)(lVar3 + 0x30),*(undefined2 *)(lVar3 + 0x34));
  func_0x0001000c2754();
  *(long *)(lVar2 + 0x10) = lVar4;
  *(undefined1 *)(lVar2 + 0x18) = 0;
  *(long *)(unaff_x20 + 0x20) = lVar2;
  func_0x000107c613fc(lVar1,0x19,7);
  func_0x000107c613fc(lVar3,*(undefined4 *)(lVar3 + 0x30),*(undefined2 *)(lVar3 + 0x34));
  func_0x0001000c2754();
  *(long *)(lVar1 + 0x10) = lVar3;
  *(undefined1 *)(lVar1 + 0x18) = 0;
  *(long *)(unaff_x20 + 0x28) = lVar1;
  uVar5 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + 0x30) = uVar5;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  return;
}



/* Entry: 102c36120; end: 102c3614b;  */

void FUN_102c36120(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1,param_1[1],*(undefined1 *)(param_1 + 2));
  return;
}



/* Entry: 102c3614c; end: 102c36467;  */

void FUN_102c3614c(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lVar7;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  long lStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar2 = 0;
  lVar7 = *(long *)(unaff_x20 + 0x10);
  if (*(long *)(lVar7 + 0x10) != 0) {
    func_0x000107c61434(lVar7);
    lVar1 = param_1;
    uVar5 = param_2;
    func_0x000100029284(param_1);
    if ((uVar5 & 1) != 0) {
      func_0x0001000bb420(*(long *)(lVar7 + 0x38) + lVar1 * 0x20,&uStack_60);
      func_0x000107c6142c(lVar7);
      goto LAB_102c361c0;
    }
    func_0x000107c6142c(lVar7);
  }
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
LAB_102c361c0:
  func_0x000100672b50(&uStack_60,&puStack_80);
  uVar6 = 0x112d387f8;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  func_0x000107c6147c(&puStack_a0,&puStack_80,uVar6,PTR___sSdN_11034dd90,6);
  if ((uVar2 & 1) == 0) {
    func_0x000100672b50(&uStack_60,&puStack_a0);
    if (lStack_88 == 0) {
      func_0x00010006e7f4(&puStack_a0);
      puStack_80 = (undefined8 *)0x0;
      uStack_78 = 0xe000000000000000;
      func_0x000107c602fc(0x23);
      func_0x000107c6142c(uStack_78);
      puStack_80 = (undefined8 *)0xd000000000000016;
      uStack_78 = 0x800000010f100a50;
      func_0x000107c5fb78(param_1,param_2);
      func_0x000107c5fb78(0x6570797420666f20,0xe900000000000020);
      func_0x000107c5fb78(0x656c62756f44,0xe600000000000000);
      puVar3 = puStack_80;
      uVar6 = uStack_78;
      func_0x0001048db000(puStack_80,uStack_78,0xd00000000000006f,0x800000010f100a70,0x14);
      puVar4 = puVar3;
      func_0x0001018e0ad8();
      func_0x000107c613f8(&UNK_1107b6098,puVar4,0,0);
      *puVar4 = puVar3;
      puVar4[1] = uVar6;
      func_0x000107c61654();
    }
    else {
      func_0x000100102924(&puStack_a0,&puStack_80);
      puStack_a0 = (undefined8 *)0x0;
      uStack_98 = 0xe000000000000000;
      func_0x000107c602fc(0x30);
      func_0x000107c6142c(uStack_98);
      puStack_a0 = (undefined8 *)0xd000000000000011;
      uStack_98 = 0x800000010f100ae0;
      func_0x0001006732c8(&puStack_80,uStack_68);
      func_0x000107c614c0();
      uVar6 = 0;
      func_0x000107c60714();
      func_0x000107c5fb78();
      func_0x000107c6142c(uVar6);
      func_0x000107c5fb78(0x79656b20726f6620,0xe900000000000020);
      func_0x000107c5fb78(param_1,param_2);
      func_0x000107c5fb78(0xd000000000000010,0x800000010f100b00);
      func_0x000107c5fb78(0x656c62756f44,0xe600000000000000);
      puVar3 = puStack_a0;
      uVar6 = uStack_98;
      func_0x0001048db000(puStack_a0,uStack_98,0xd00000000000006f,0x800000010f100a70,0x12);
      puVar4 = puVar3;
      func_0x0001018e0ad8();
      func_0x000107c613f8(&UNK_1107b6098,puVar4,0,0);
      *puVar4 = puVar3;
      puVar4[1] = uVar6;
      func_0x000107c61654();
      func_0x000100183ab8(&puStack_80);
    }
    func_0x00010006e7f4(&uStack_60);
  }
  else {
    func_0x00010006e7f4(&uStack_60);
  }
  return;
}



/* Entry: 102c36468; end: 102c367ab;  */

void FUN_102c36468(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lVar8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  long lStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar3 = 0;
  lVar8 = *(long *)(unaff_x20 + 0x10);
  if (*(long *)(lVar8 + 0x10) != 0) {
    func_0x000107c61434(lVar8);
    lVar1 = param_1;
    uVar6 = param_2;
    func_0x000100029284(param_1);
    if ((uVar6 & 1) != 0) {
      func_0x0001000bb420(*(long *)(lVar8 + 0x38) + lVar1 * 0x20,&uStack_60);
      func_0x000107c6142c(lVar8);
      goto LAB_102c364dc;
    }
    func_0x000107c6142c(lVar8);
  }
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
LAB_102c364dc:
  func_0x000100672b50(&uStack_60,&puStack_80);
  uVar7 = 0x112d387f8;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  uVar2 = 0x112dc10e8;
  func_0x0001000285a8(0x112dc10e8,&UNK_10d97dc20);
  func_0x000107c6147c(&puStack_a0,&puStack_80,uVar7,uVar2,6);
  if ((uVar3 & 1) == 0) {
    func_0x000100672b50(&uStack_60,&puStack_a0);
    if (lStack_88 == 0) {
      func_0x00010006e7f4(&puStack_a0);
      puStack_80 = (undefined8 *)0x0;
      uStack_78 = 0xe000000000000000;
      func_0x000107c602fc(0x23);
      func_0x000107c6142c(uStack_78);
      puStack_80 = (undefined8 *)0xd000000000000016;
      uStack_78 = 0x800000010f100a50;
      func_0x000107c5fb78(param_1,param_2);
      func_0x000107c5fb78(0x6570797420666f20,0xe900000000000020);
      func_0x000107c5fb78(0xd000000000000010,0x800000010f100b20);
      puVar4 = puStack_80;
      uVar7 = uStack_78;
      func_0x0001048db000(puStack_80,uStack_78,0xd00000000000006f,0x800000010f100a70,0x14);
      puVar5 = puVar4;
      func_0x0001018e0ad8();
      func_0x000107c613f8(&UNK_1107b6098,puVar5,0,0);
      *puVar5 = puVar4;
      puVar5[1] = uVar7;
      func_0x000107c61654();
    }
    else {
      func_0x000100102924(&puStack_a0,&puStack_80);
      puStack_a0 = (undefined8 *)0x0;
      uStack_98 = 0xe000000000000000;
      func_0x000107c602fc(0x30);
      func_0x000107c6142c(uStack_98);
      puStack_a0 = (undefined8 *)0xd000000000000011;
      uStack_98 = 0x800000010f100ae0;
      func_0x0001006732c8(&puStack_80,uStack_68);
      func_0x000107c614c0();
      uVar7 = 0;
      func_0x000107c60714();
      func_0x000107c5fb78();
      func_0x000107c6142c(uVar7);
      func_0x000107c5fb78(0x79656b20726f6620,0xe900000000000020);
      func_0x000107c5fb78(param_1,param_2);
      func_0x000107c5fb78(0xd000000000000010,0x800000010f100b00);
      func_0x000107c5fb78(0xd000000000000010,0x800000010f100b20);
      puVar4 = puStack_a0;
      uVar7 = uStack_98;
      func_0x0001048db000(puStack_a0,uStack_98,0xd00000000000006f,0x800000010f100a70,0x12);
      puVar5 = puVar4;
      func_0x0001018e0ad8();
      func_0x000107c613f8(&UNK_1107b6098,puVar5,0,0);
      *puVar5 = puVar4;
      puVar5[1] = uVar7;
      func_0x000107c61654();
      func_0x000100183ab8(&puStack_80);
    }
    func_0x00010006e7f4(&uStack_60);
  }
  else {
    func_0x00010006e7f4(&uStack_60);
  }
  return;
}



/* Entry: 102c367ac; end: 102c36ad3;  */

void FUN_102c367ac(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lVar8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  long lStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar3 = 0;
  lVar8 = *(long *)(unaff_x20 + 0x10);
  if (*(long *)(lVar8 + 0x10) != 0) {
    func_0x000107c61434(lVar8);
    lVar1 = param_1;
    uVar6 = param_2;
    func_0x000100029284(param_1);
    if ((uVar6 & 1) != 0) {
      func_0x0001000bb420(*(long *)(lVar8 + 0x38) + lVar1 * 0x20,&uStack_60);
      func_0x000107c6142c(lVar8);
      goto LAB_102c36820;
    }
    func_0x000107c6142c(lVar8);
  }
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
LAB_102c36820:
  func_0x000100672b50(&uStack_60,&puStack_80);
  uVar7 = 0x112d387f8;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  uVar2 = 0;
  func_0x000100f6e714(0);
  func_0x000107c6147c(&puStack_a0,&puStack_80,uVar7,uVar2,6);
  if ((uVar3 & 1) == 0) {
    func_0x000100672b50(&uStack_60,&puStack_a0);
    if (lStack_88 == 0) {
      func_0x00010006e7f4(&puStack_a0);
      puStack_80 = (undefined8 *)0x0;
      uStack_78 = 0xe000000000000000;
      func_0x000107c602fc(0x23);
      func_0x000107c6142c(uStack_78);
      puStack_80 = (undefined8 *)0xd000000000000016;
      uStack_78 = 0x800000010f100a50;
      func_0x000107c5fb78(param_1,param_2);
      func_0x000107c5fb78(0x6570797420666f20,0xe900000000000020);
      func_0x000107c5fb78(0x746e696f504743,0xe700000000000000);
      puVar4 = puStack_80;
      uVar7 = uStack_78;
      func_0x0001048db000(puStack_80,uStack_78,0xd00000000000006f,0x800000010f100a70,0x14);
      puVar5 = puVar4;
      func_0x0001018e0ad8();
      func_0x000107c613f8(&UNK_1107b6098,puVar5,0,0);
      *puVar5 = puVar4;
      puVar5[1] = uVar7;
      func_0x000107c61654();
    }
    else {
      func_0x000100102924(&puStack_a0,&puStack_80);
      puStack_a0 = (undefined8 *)0x0;
      uStack_98 = 0xe000000000000000;
      func_0x000107c602fc(0x30);
      func_0x000107c6142c(uStack_98);
      puStack_a0 = (undefined8 *)0xd000000000000011;
      uStack_98 = 0x800000010f100ae0;
      func_0x0001006732c8(&puStack_80,uStack_68);
      func_0x000107c614c0();
      uVar7 = 0;
      func_0x000107c60714();
      func_0x000107c5fb78();
      func_0x000107c6142c(uVar7);
      func_0x000107c5fb78(0x79656b20726f6620,0xe900000000000020);
      func_0x000107c5fb78(param_1,param_2);
      func_0x000107c5fb78(0xd000000000000010,0x800000010f100b00);
      func_0x000107c5fb78(0x746e696f504743,0xe700000000000000);
      puVar4 = puStack_a0;
      uVar7 = uStack_98;
      func_0x0001048db000(puStack_a0,uStack_98,0xd00000000000006f,0x800000010f100a70,0x12);
      puVar5 = puVar4;
      func_0x0001018e0ad8();
      func_0x000107c613f8(&UNK_1107b6098,puVar5,0,0);
      *puVar5 = puVar4;
      puVar5[1] = uVar7;
      func_0x000107c61654();
      func_0x000100183ab8(&puStack_80);
    }
    func_0x00010006e7f4(&uStack_60);
  }
  else {
    func_0x00010006e7f4(&uStack_60);
  }
  return;
}



/* Entry: 102c36ad4; end: 102c36def;  */

uint FUN_102c36ad4(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint extraout_w8;
  long unaff_x20;
  long lVar8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  long lStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar2 = 0;
  lVar8 = *(long *)(unaff_x20 + 0x10);
  if (*(long *)(lVar8 + 0x10) != 0) {
    func_0x000107c61434(lVar8);
    lVar1 = param_1;
    uVar5 = param_2;
    func_0x000100029284(param_1);
    if ((uVar5 & 1) != 0) {
      func_0x0001000bb420(*(long *)(lVar8 + 0x38) + lVar1 * 0x20,&uStack_60);
      func_0x000107c6142c(lVar8);
      goto LAB_102c36b48;
    }
    func_0x000107c6142c(lVar8);
  }
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
LAB_102c36b48:
  func_0x000100672b50(&uStack_60,&puStack_80);
  uVar6 = 0x112d387f8;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  func_0x000107c6147c(&puStack_a0,&puStack_80,uVar6,PTR___sSbN_11034dd40,6);
  if ((uVar2 & 1) == 0) {
    func_0x000100672b50(&uStack_60,&puStack_a0);
    if (lStack_88 == 0) {
      func_0x00010006e7f4(&puStack_a0);
      puStack_80 = (undefined8 *)0x0;
      uStack_78 = 0xe000000000000000;
      func_0x000107c602fc(0x23);
      func_0x000107c6142c(uStack_78);
      puStack_80 = (undefined8 *)0xd000000000000016;
      uStack_78 = 0x800000010f100a50;
      func_0x000107c5fb78(param_1,param_2);
      func_0x000107c5fb78(0x6570797420666f20,0xe900000000000020);
      func_0x000107c5fb78(0x6c6f6f42,0xe400000000000000);
      puVar3 = puStack_80;
      uVar6 = uStack_78;
      func_0x0001048db000(puStack_80,uStack_78,0xd00000000000006f,0x800000010f100a70,0x14);
      puVar4 = puVar3;
      func_0x0001018e0ad8();
      func_0x000107c613f8(&UNK_1107b6098,puVar4,0,0);
      *puVar4 = puVar3;
      puVar4[1] = uVar6;
      func_0x000107c61654();
    }
    else {
      func_0x000100102924(&puStack_a0,&puStack_80);
      puStack_a0 = (undefined8 *)0x0;
      uStack_98 = 0xe000000000000000;
      func_0x000107c602fc(0x30);
      func_0x000107c6142c(uStack_98);
      puStack_a0 = (undefined8 *)0xd000000000000011;
      uStack_98 = 0x800000010f100ae0;
      func_0x0001006732c8(&puStack_80,uStack_68);
      func_0x000107c614c0();
      uVar6 = 0;
      func_0x000107c60714();
      func_0x000107c5fb78();
      func_0x000107c6142c(uVar6);
      func_0x000107c5fb78(0x79656b20726f6620,0xe900000000000020);
      func_0x000107c5fb78(param_1,param_2);
      func_0x000107c5fb78(0xd000000000000010,0x800000010f100b00);
      func_0x000107c5fb78(0x6c6f6f42,0xe400000000000000);
      puVar3 = puStack_a0;
      uVar6 = uStack_98;
      func_0x0001048db000(puStack_a0,uStack_98,0xd00000000000006f,0x800000010f100a70,0x12);
      puVar4 = puVar3;
      func_0x0001018e0ad8();
      func_0x000107c613f8(&UNK_1107b6098,puVar4,0,0);
      *puVar4 = puVar3;
      puVar4[1] = uVar6;
      func_0x000107c61654();
      func_0x000100183ab8(&puStack_80);
    }
    func_0x00010006e7f4(&uStack_60);
    uVar7 = extraout_w8;
  }
  else {
    func_0x00010006e7f4(&uStack_60);
    uVar7 = (uint)(byte)puStack_a0;
  }
  return uVar7 & 1;
}



/* Entry: 102c36df0; end: 102c37137;  */

void FUN_102c36df0(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lVar8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  long lStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar3 = 0;
  lVar8 = *(long *)(unaff_x20 + 0x10);
  if (*(long *)(lVar8 + 0x10) != 0) {
    func_0x000107c61434(lVar8);
    lVar1 = param_1;
    uVar6 = param_2;
    func_0x000100029284(param_1);
    if ((uVar6 & 1) != 0) {
      func_0x0001000bb420(*(long *)(lVar8 + 0x38) + lVar1 * 0x20,&uStack_60);
      func_0x000107c6142c(lVar8);
      goto LAB_102c36e64;
    }
    func_0x000107c6142c(lVar8);
  }
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
LAB_102c36e64:
  func_0x000100672b50(&uStack_60,&puStack_80);
  uVar7 = 0x112d387f8;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  uVar2 = 0x112dc3de0;
  func_0x0001000285a8(0x112dc3de0,&UNK_10d9813c0);
  func_0x000107c6147c(&puStack_a0,&puStack_80,uVar7,uVar2,6);
  if ((uVar3 & 1) == 0) {
    func_0x000100672b50(&uStack_60,&puStack_a0);
    if (lStack_88 == 0) {
      func_0x00010006e7f4(&puStack_a0);
      puStack_80 = (undefined8 *)0x0;
      uStack_78 = 0xe000000000000000;
      func_0x000107c602fc(0x23);
      func_0x000107c6142c(uStack_78);
      puStack_80 = (undefined8 *)0xd000000000000016;
      uStack_78 = 0x800000010f100a50;
      func_0x000107c5fb78(param_1,param_2);
      func_0x000107c5fb78(0x6570797420666f20,0xe900000000000020);
      uVar7 = 0;
      func_0x000107c60714(uVar2,0);
      func_0x000107c5fb78();
      func_0x000107c6142c(uVar7);
      puVar4 = puStack_80;
      uVar7 = uStack_78;
      func_0x0001048db000(puStack_80,uStack_78,0xd00000000000006f,0x800000010f100a70,0x14);
      puVar5 = puVar4;
      func_0x0001018e0ad8();
      func_0x000107c613f8(&UNK_1107b6098,puVar5,0,0);
      *puVar5 = puVar4;
      puVar5[1] = uVar7;
      func_0x000107c61654();
    }
    else {
      func_0x000100102924(&puStack_a0,&puStack_80);
      puStack_a0 = (undefined8 *)0x0;
      uStack_98 = 0xe000000000000000;
      func_0x000107c602fc(0x30);
      func_0x000107c6142c(uStack_98);
      puStack_a0 = (undefined8 *)0xd000000000000011;
      uStack_98 = 0x800000010f100ae0;
      func_0x0001006732c8(&puStack_80,uStack_68);
      func_0x000107c614c0();
      uVar7 = 0;
      func_0x000107c60714();
      func_0x000107c5fb78();
      func_0x000107c6142c(uVar7);
      func_0x000107c5fb78(0x79656b20726f6620,0xe900000000000020);
      func_0x000107c5fb78(param_1,param_2);
      func_0x000107c5fb78(0xd000000000000010,0x800000010f100b00);
      uVar7 = 0;
      func_0x000107c60714(uVar2,0);
      func_0x000107c5fb78();
      func_0x000107c6142c(uVar7);
      puVar4 = puStack_a0;
      uVar7 = uStack_98;
      func_0x0001048db000(puStack_a0,uStack_98,0xd00000000000006f,0x800000010f100a70,0x12);
      puVar5 = puVar4;
      func_0x0001018e0ad8();
      func_0x000107c613f8(&UNK_1107b6098,puVar5,0,0);
      *puVar5 = puVar4;
      puVar5[1] = uVar7;
      func_0x000107c61654();
      func_0x000100183ab8(&puStack_80);
    }
    func_0x00010006e7f4(&uStack_60);
  }
  else {
    func_0x00010006e7f4(&uStack_60);
  }
  return;
}



/* Entry: 102c37138; end: 102c37483;  */

void FUN_102c37138(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lVar8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  long lStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar3 = 0;
  lVar8 = *(long *)(unaff_x20 + 0x10);
  if (*(long *)(lVar8 + 0x10) != 0) {
    func_0x000107c61434(lVar8);
    lVar1 = param_1;
    uVar6 = param_2;
    func_0x000100029284(param_1);
    if ((uVar6 & 1) != 0) {
      func_0x0001000bb420(*(long *)(lVar8 + 0x38) + lVar1 * 0x20,&uStack_70);
      func_0x000107c6142c(lVar8);
      goto LAB_102c371b0;
    }
    func_0x000107c6142c(lVar8);
  }
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
LAB_102c371b0:
  func_0x000100672b50(&uStack_70,&puStack_90);
  uVar7 = 0x112d387f8;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  uVar2 = 0x112dc3dc8;
  func_0x0001000285a8(0x112dc3dc8,&UNK_10d9813a0);
  func_0x000107c6147c(&puStack_b0,&puStack_90,uVar7,uVar2,6);
  if ((uVar3 & 1) == 0) {
    func_0x000100672b50(&uStack_70,&puStack_b0);
    if (lStack_98 == 0) {
      func_0x00010006e7f4(&puStack_b0);
      puStack_90 = (undefined8 *)0x0;
      uStack_88 = 0xe000000000000000;
      func_0x000107c602fc(0x23);
      func_0x000107c6142c(uStack_88);
      puStack_90 = (undefined8 *)0xd000000000000016;
      uStack_88 = 0x800000010f100a50;
      func_0x000107c5fb78(param_1,param_2);
      func_0x000107c5fb78(0x6570797420666f20,0xe900000000000020);
      func_0x000107c5fb78(0x6c616e6f6974704f,0xee003e6c6f6f423c);
      puVar4 = puStack_90;
      uVar7 = uStack_88;
      func_0x0001048db000(puStack_90,uStack_88,0xd00000000000006f,0x800000010f100a70,0x14);
      puVar5 = puVar4;
      func_0x0001018e0ad8();
      func_0x000107c613f8(&UNK_1107b6098,puVar5,0,0);
      *puVar5 = puVar4;
      puVar5[1] = uVar7;
      func_0x000107c61654();
    }
    else {
      func_0x000100102924(&puStack_b0,&puStack_90);
      puStack_b0 = (undefined8 *)0x0;
      uStack_a8 = 0xe000000000000000;
      func_0x000107c602fc(0x30);
      func_0x000107c6142c(uStack_a8);
      puStack_b0 = (undefined8 *)0xd000000000000011;
      uStack_a8 = 0x800000010f100ae0;
      func_0x0001006732c8(&puStack_90,uStack_78);
      func_0x000107c614c0();
      uVar7 = 0;
      func_0x000107c60714();
      func_0x000107c5fb78();
      func_0x000107c6142c(uVar7);
      func_0x000107c5fb78(0x79656b20726f6620,0xe900000000000020);
      func_0x000107c5fb78(param_1,param_2);
      func_0x000107c5fb78(0xd000000000000010,0x800000010f100b00);
      func_0x000107c5fb78(0x6c616e6f6974704f,0xee003e6c6f6f423c);
      puVar4 = puStack_b0;
      uVar7 = uStack_a8;
      func_0x0001048db000(puStack_b0,uStack_a8,0xd00000000000006f,0x800000010f100a70,0x12);
      puVar5 = puVar4;
      func_0x0001018e0ad8();
      func_0x000107c613f8(&UNK_1107b6098,puVar5,0,0);
      *puVar5 = puVar4;
      puVar5[1] = uVar7;
      func_0x000107c61654();
      func_0x000100183ab8(&puStack_90);
    }
    func_0x00010006e7f4(&uStack_70);
  }
  else {
    func_0x00010006e7f4(&uStack_70);
  }
  return;
}



/* Entry: 102c37484; end: 102c377d3;  */

void FUN_102c37484(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lVar8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  long lStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar3 = 0;
  lVar8 = *(long *)(unaff_x20 + 0x10);
  if (*(long *)(lVar8 + 0x10) != 0) {
    func_0x000107c61434(lVar8);
    lVar1 = param_1;
    uVar6 = param_2;
    func_0x000100029284(param_1);
    if ((uVar6 & 1) != 0) {
      func_0x0001000bb420(*(long *)(lVar8 + 0x38) + lVar1 * 0x20,&uStack_70);
      func_0x000107c6142c(lVar8);
      goto LAB_102c374fc;
    }
    func_0x000107c6142c(lVar8);
  }
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
LAB_102c374fc:
  func_0x000100672b50(&uStack_70,&puStack_90);
  uVar7 = 0x112d387f8;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  uVar2 = 0x112d4f4d0;
  func_0x0001000285a8(0x112d4f4d0,&UNK_10d9153c0);
  func_0x000107c6147c(&puStack_b0,&puStack_90,uVar7,uVar2,6);
  if ((uVar3 & 1) == 0) {
    func_0x000100672b50(&uStack_70,&puStack_b0);
    if (lStack_98 == 0) {
      func_0x00010006e7f4(&puStack_b0);
      puStack_90 = (undefined8 *)0x0;
      uStack_88 = 0xe000000000000000;
      func_0x000107c602fc(0x23);
      func_0x000107c6142c(uStack_88);
      puStack_90 = (undefined8 *)0xd000000000000016;
      uStack_88 = 0x800000010f100a50;
      func_0x000107c5fb78(param_1,param_2);
      func_0x000107c5fb78(0x6570797420666f20,0xe900000000000020);
      func_0x000107c5fb78(0x6c616e6f6974704f,0xed00003e746e493c);
      puVar4 = puStack_90;
      uVar7 = uStack_88;
      func_0x0001048db000(puStack_90,uStack_88,0xd00000000000006f,0x800000010f100a70,0x14);
      puVar5 = puVar4;
      func_0x0001018e0ad8();
      func_0x000107c613f8(&UNK_1107b6098,puVar5,0,0);
      *puVar5 = puVar4;
      puVar5[1] = uVar7;
      func_0x000107c61654();
    }
    else {
      func_0x000100102924(&puStack_b0,&puStack_90);
      puStack_b0 = (undefined8 *)0x0;
      uStack_a8 = 0xe000000000000000;
      func_0x000107c602fc(0x30);
      func_0x000107c6142c(uStack_a8);
      puStack_b0 = (undefined8 *)0xd000000000000011;
      uStack_a8 = 0x800000010f100ae0;
      func_0x0001006732c8(&puStack_90,uStack_78);
      func_0x000107c614c0();
      uVar7 = 0;
      func_0x000107c60714();
      func_0x000107c5fb78();
      func_0x000107c6142c(uVar7);
      func_0x000107c5fb78(0x79656b20726f6620,0xe900000000000020);
      func_0x000107c5fb78(param_1,param_2);
      func_0x000107c5fb78(0xd000000000000010,0x800000010f100b00);
      func_0x000107c5fb78(0x6c616e6f6974704f,0xed00003e746e493c);
      puVar4 = puStack_b0;
      uVar7 = uStack_a8;
      func_0x0001048db000(puStack_b0,uStack_a8,0xd00000000000006f,0x800000010f100a70,0x12);
      puVar5 = puVar4;
      func_0x0001018e0ad8();
      func_0x000107c613f8(&UNK_1107b6098,puVar5,0,0);
      *puVar5 = puVar4;
      puVar5[1] = uVar7;
      func_0x000107c61654();
      func_0x000100183ab8(&puStack_90);
    }
    func_0x00010006e7f4(&uStack_70);
  }
  else {
    func_0x00010006e7f4(&uStack_70);
  }
  return;
}



/* Entry: 102c377d4; end: 102c37b0f;  */

void FUN_102c377d4(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lVar8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  long lStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar3 = 0;
  lVar8 = *(long *)(unaff_x20 + 0x10);
  if (*(long *)(lVar8 + 0x10) != 0) {
    func_0x000107c61434(lVar8);
    lVar1 = param_1;
    uVar6 = param_2;
    func_0x000100029284(param_1);
    if ((uVar6 & 1) != 0) {
      func_0x0001000bb420(*(long *)(lVar8 + 0x38) + lVar1 * 0x20,&uStack_60);
      func_0x000107c6142c(lVar8);
      goto LAB_102c37848;
    }
    func_0x000107c6142c(lVar8);
  }
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
LAB_102c37848:
  func_0x000100672b50(&uStack_60,&puStack_80);
  uVar7 = 0x112d387f8;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  uVar2 = 0x112f020c0;
  func_0x0001000285a8(0x112f020c0,&UNK_10db35898);
  func_0x000107c6147c(&puStack_a0,&puStack_80,uVar7,uVar2,6);
  if ((uVar3 & 1) == 0) {
    func_0x000100672b50(&uStack_60,&puStack_a0);
    if (lStack_88 == 0) {
      func_0x00010006e7f4(&puStack_a0);
      puStack_80 = (undefined8 *)0x0;
      uStack_78 = 0xe000000000000000;
      func_0x000107c602fc(0x23);
      func_0x000107c6142c(uStack_78);
      puStack_80 = (undefined8 *)0xd000000000000016;
      uStack_78 = 0x800000010f100a50;
      func_0x000107c5fb78(param_1,param_2);
      func_0x000107c5fb78(0x6570797420666f20,0xe900000000000020);
      func_0x000107c5fb78(0xd000000000000011,0x800000010f100b40);
      puVar4 = puStack_80;
      uVar7 = uStack_78;
      func_0x0001048db000(puStack_80,uStack_78,0xd00000000000006f,0x800000010f100a70,0x14);
      puVar5 = puVar4;
      func_0x0001018e0ad8();
      func_0x000107c613f8(&UNK_1107b6098,puVar5,0,0);
      *puVar5 = puVar4;
      puVar5[1] = uVar7;
      func_0x000107c61654();
    }
    else {
      func_0x000100102924(&puStack_a0,&puStack_80);
      puStack_a0 = (undefined8 *)0x0;
      uStack_98 = 0xe000000000000000;
      func_0x000107c602fc(0x30);
      func_0x000107c6142c(uStack_98);
      puStack_a0 = (undefined8 *)0xd000000000000011;
      uStack_98 = 0x800000010f100ae0;
      func_0x0001006732c8(&puStack_80,uStack_68);
      func_0x000107c614c0();
      uVar7 = 0;
      func_0x000107c60714();
      func_0x000107c5fb78();
      func_0x000107c6142c(uVar7);
      func_0x000107c5fb78(0x79656b20726f6620,0xe900000000000020);
      func_0x000107c5fb78(param_1,param_2);
      func_0x000107c5fb78(0xd000000000000010,0x800000010f100b00);
      func_0x000107c5fb78(0xd000000000000011,0x800000010f100b40);
      puVar4 = puStack_a0;
      uVar7 = uStack_98;
      func_0x0001048db000(puStack_a0,uStack_98,0xd00000000000006f,0x800000010f100a70,0x12);
      puVar5 = puVar4;
      func_0x0001018e0ad8();
      func_0x000107c613f8(&UNK_1107b6098,puVar5,0,0);
      *puVar5 = puVar4;
      puVar5[1] = uVar7;
      func_0x000107c61654();
      func_0x000100183ab8(&puStack_80);
    }
    func_0x00010006e7f4(&uStack_60);
  }
  else {
    func_0x00010006e7f4(&uStack_60);
  }
  return;
}



/* Entry: 102c37b10; end: 102c37c5b;  */

undefined8 * FUN_102c37b10(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long unaff_x20;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x28);
  puVar2 = puVar1;
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x112f020c8;
    func_0x0001000285a8(0x112f020c8,&UNK_10db358a0);
    func_0x000107c61534();
    puVar1[3] = 8;
    puVar1[2] = 4;
    puVar2 = puVar1;
    func_0x000103b934bc();
    uVar4 = puVar2[1];
    puVar1[4] = *puVar2;
    puVar1[5] = uVar4;
    puVar3 = *(undefined8 **)(unaff_x20 + 0x10);
    puVar1[6] = puVar3;
    func_0x000107c61434();
    func_0x000107c6157c();
    func_0x000103b81928();
    puVar2 = (undefined8 *)puVar3[1];
    puVar1[7] = *puVar3;
    puVar1[8] = puVar2;
    uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
    puVar1[9] = uVar4;
    func_0x000107c61580(uVar4,2);
    func_0x000107c61434();
    func_0x000103b818f0();
    puVar3 = (undefined8 *)puVar2[1];
    puVar1[10] = *puVar2;
    puVar1[0xb] = puVar3;
    puVar1[0xc] = uVar4;
    func_0x000107c61434();
    func_0x000103b81960();
    uVar4 = puVar3[1];
    puVar1[0xd] = *puVar3;
    puVar1[0xe] = uVar4;
    uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
    puVar1[0xf] = uVar4;
    func_0x000107c61434();
    func_0x000107c6157c(uVar4);
    puVar2 = puVar1;
    FUN_102c35c3c();
    func_0x000107c61588(puVar1);
    uVar4 = 0x112f020d0;
    func_0x0001000285a8(0x112f020d0,&UNK_10db35ab0);
    func_0x000107c61408(puVar1 + 4,4,uVar4);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
    *(undefined8 **)(unaff_x20 + 0x28) = puVar2;
    func_0x000107c61434(puVar2);
    func_0x000107c6142c(uVar4);
    puVar1 = (undefined8 *)0x0;
  }
  func_0x000107c61434(puVar1);
  return puVar2;
}



/* Entry: 102c37c5c; end: 102c3804f;  */

/* WARNING: Removing unreachable block (ram,0x000102c37fc0) */

void FUN_102c37c5c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  ulong *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  long unaff_x21;
  undefined1 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  
  func_0x000103b93750();
  uStack_b0 = *param_4;
  uStack_a8 = param_4[1];
  func_0x000107c61434();
  puVar2 = (undefined8 *)PTR___sSSN_11034da80;
  func_0x000107c5fbd4(&uStack_b0,PTR___sSSN_11034da80,
                      PTR___sSSs25LosslessStringConvertiblesWP_11034dad0,PTR___sSSSTsWP_11034daa0);
  FUN_102c3614c();
  if (unaff_x21 != 0) {
    func_0x000107c6142c(puVar2);
    return;
  }
  uVar13 = param_2;
  func_0x000107c6142c();
  func_0x000103b93788();
  uStack_b0 = *puVar2;
  uStack_a8 = puVar2[1];
  func_0x000107c61434();
  puVar2 = (undefined8 *)PTR___sSSN_11034da80;
  func_0x000107c5fbd4(&uStack_b0,PTR___sSSN_11034da80,
                      PTR___sSSs25LosslessStringConvertiblesWP_11034dad0,PTR___sSSSTsWP_11034daa0);
  FUN_102c3614c();
  uVar14 = uVar13;
  func_0x000107c6142c();
  func_0x000103b93718();
  uVar3 = *puVar2;
  puVar2 = (undefined8 *)puVar2[1];
  func_0x000107c61434(puVar2);
  puVar10 = puVar2;
  FUN_102c36468();
  func_0x000107c6142c();
  func_0x000103bb813c();
  uVar4 = *puVar2;
  puVar2 = (undefined8 *)puVar2[1];
  func_0x000107c61434(puVar2);
  FUN_102c367ac(uVar4,puVar2);
  uVar15 = uVar14;
  uVar20 = param_3;
  func_0x000107c6142c();
  func_0x000103bb821c();
  uVar4 = *puVar2;
  puVar2 = (undefined8 *)puVar2[1];
  func_0x000107c61434(puVar2);
  FUN_102c367ac(uVar4,puVar2);
  uVar16 = uVar15;
  func_0x000107c6142c();
  func_0x000103bb8174();
  uVar4 = *puVar2;
  puVar2 = (undefined8 *)puVar2[1];
  func_0x000107c61434(puVar2);
  FUN_102c3614c(uVar4,puVar2);
  uVar17 = uVar16;
  func_0x000107c6142c();
  func_0x000103bb81ac();
  uVar4 = *puVar2;
  puVar2 = (undefined8 *)puVar2[1];
  func_0x000107c61434(puVar2);
  FUN_102c3614c(uVar4,puVar2);
  uVar18 = uVar17;
  func_0x000107c6142c();
  func_0x000103bb8254();
  uVar4 = *puVar2;
  puVar2 = (undefined8 *)puVar2[1];
  func_0x000107c61434(puVar2);
  FUN_102c3614c(uVar4,puVar2);
  uVar19 = uVar18;
  func_0x000107c6142c();
  func_0x000103bb828c();
  uVar4 = *puVar2;
  puVar2 = (undefined8 *)puVar2[1];
  func_0x000107c61434(puVar2);
  FUN_102c3614c(uVar4,puVar2);
  func_0x000107c6142c();
  func_0x000103b93670();
  uVar4 = *puVar2;
  puVar2 = (undefined8 *)puVar2[1];
  func_0x000107c61434(puVar2);
  FUN_102c36ad4(uVar4,puVar2);
  func_0x000107c6142c();
  func_0x000103b93638();
  uVar5 = *puVar2;
  plVar6 = (long *)puVar2[1];
  func_0x000107c61434(plVar6);
  FUN_102c36ad4(uVar5,plVar6);
  func_0x000107c6142c();
  func_0x000103b936a8();
  lVar7 = *plVar6;
  puVar8 = (ulong *)plVar6[1];
  func_0x000107c61434(puVar8);
  FUN_102c36df0(lVar7,puVar8);
  func_0x000107c6142c();
  func_0x000103b936e0();
  uVar9 = *puVar8;
  uVar1 = puVar8[1];
  func_0x000107c61434(uVar1);
  FUN_102c36ad4(uVar9,uVar1);
  func_0x000107c6142c(uVar1);
  if ((uVar9 & 1) == 0) {
    lVar11 = 0;
    uVar12 = 1;
  }
  else {
    if (lVar7 == 0) {
      lVar11 = 0;
      uVar12 = 1;
      goto LAB_102c37ff8;
    }
    lVar11 = lVar7;
    func_0x000107c49820();
    uVar12 = 0;
  }
  func_0x000107c61170(lVar7);
LAB_102c37ff8:
  *param_1 = uVar14;
  param_1[1] = param_3;
  param_1[2] = uVar16;
  param_1[3] = uVar17;
  param_1[4] = uVar15;
  param_1[5] = uVar20;
  param_1[6] = uVar18;
  param_1[7] = uVar19;
  param_1[8] = param_2;
  param_1[9] = uVar13;
  param_1[10] = uVar3;
  *(char *)(param_1 + 0xb) = (char)puVar10;
  *(byte *)((long)param_1 + 0x59) = (byte)uVar4 & 1;
  *(byte *)((long)param_1 + 0x5a) = (byte)uVar5 & 1;
  param_1[0xc] = lVar11;
  *(undefined1 *)(param_1 + 0xd) = uVar12;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0xf) = 1;
  return;
}



/* Entry: 102c38050; end: 102c3832b;  */

void FUN_102c38050(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x21;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  func_0x000103bb8104();
  uVar3 = *param_4;
  puVar2 = (undefined8 *)param_4[1];
  func_0x000107c61434(puVar2);
  FUN_102c3614c(uVar3,puVar2);
  if (unaff_x21 == 0) {
    uVar7 = param_2;
    func_0x000107c6142c();
    func_0x000103bb81e4();
    uVar3 = *puVar2;
    puVar2 = (undefined8 *)puVar2[1];
    func_0x000107c61434(puVar2);
    FUN_102c3614c(uVar3,puVar2);
    uVar8 = uVar7;
    func_0x000107c6142c();
    func_0x000103bb813c();
    uVar3 = *puVar2;
    puVar2 = (undefined8 *)puVar2[1];
    func_0x000107c61434(puVar2);
    FUN_102c367ac(uVar3,puVar2);
    uVar9 = uVar8;
    uVar14 = param_3;
    func_0x000107c6142c();
    func_0x000103bb821c();
    uVar3 = *puVar2;
    puVar2 = (undefined8 *)puVar2[1];
    func_0x000107c61434(puVar2);
    FUN_102c367ac(uVar3,puVar2);
    uVar10 = uVar9;
    func_0x000107c6142c();
    func_0x000103bb8174();
    uVar3 = *puVar2;
    puVar2 = (undefined8 *)puVar2[1];
    func_0x000107c61434(puVar2);
    FUN_102c3614c(uVar3,puVar2);
    uVar11 = uVar10;
    func_0x000107c6142c();
    func_0x000103bb81ac();
    uVar3 = *puVar2;
    puVar2 = (undefined8 *)puVar2[1];
    func_0x000107c61434(puVar2);
    FUN_102c3614c(uVar3,puVar2);
    uVar12 = uVar11;
    func_0x000107c6142c();
    func_0x000103bb8254();
    uVar3 = *puVar2;
    puVar2 = (undefined8 *)puVar2[1];
    func_0x000107c61434(puVar2);
    FUN_102c3614c(uVar3,puVar2);
    uVar13 = uVar12;
    func_0x000107c6142c();
    func_0x000103bb828c();
    uVar3 = *puVar2;
    puVar2 = (undefined8 *)puVar2[1];
    func_0x000107c61434(puVar2);
    FUN_102c3614c(uVar3,puVar2);
    func_0x000107c6142c();
    func_0x000103b81a00();
    uVar3 = *puVar2;
    puVar4 = (ulong *)puVar2[1];
    func_0x000107c61434(puVar4);
    FUN_102c37138(uVar3,puVar4);
    func_0x000107c6142c();
    func_0x000103b81b90();
    uVar5 = *puVar4;
    uVar1 = puVar4[1];
    func_0x000107c61434(uVar1);
    uVar6 = uVar1;
    FUN_102c37484();
    func_0x000107c6142c(uVar1);
    uVar1 = 0;
    if (((uint)uVar6 & 0xff) != 1) {
      uVar1 = uVar5;
    }
    *param_1 = uVar8;
    param_1[1] = param_3;
    uVar5 = 0;
    if (uVar1 < 5) {
      uVar5 = uVar1;
    }
    param_1[2] = uVar10;
    param_1[3] = uVar11;
    param_1[4] = uVar9;
    param_1[5] = uVar14;
    param_1[6] = uVar12;
    param_1[7] = uVar13;
    param_1[8] = param_2;
    param_1[9] = uVar7;
    param_1[10] = 0;
    *(undefined2 *)(param_1 + 0xb) = 0x201;
    *(char *)((long)param_1 + 0x5a) = (char)uVar3;
    param_1[0xc] = 0;
    *(undefined1 *)(param_1 + 0xd) = 1;
    param_1[0xe] = uVar5;
    *(bool *)(param_1 + 0xf) = 4 < uVar1;
  }
  else {
    func_0x000107c6142c(puVar2);
  }
  return;
}



/* Entry: 102c3832c; end: 102c3838f;  */

void FUN_102c3832c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c38390; end: 102c384df;  */

void FUN_102c38390(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  lVar1 = 0x112f020b0;
  func_0x0001000285a8(0x112f020b0,&UNK_10db35880);
  lVar2 = lVar1;
  func_0x000107c613fc();
  lVar3 = 0x112f020b8;
  func_0x0001000285a8(0x112f020b8,&UNK_10db35888);
  lVar4 = lVar3;
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(lVar2 + 0x18) = 0;
  *(long *)(lVar2 + 0x20) = lVar4;
  *(code **)(lVar2 + 0x10) = FUN_102c37c5c;
  *(long *)(unaff_x20 + 0x10) = lVar2;
  func_0x000107c613fc(lVar1,0x28,7);
  func_0x000107c613fc(lVar3,*(undefined4 *)(lVar3 + 0x30),*(undefined2 *)(lVar3 + 0x34));
  func_0x0001000c2754();
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(long *)(lVar1 + 0x20) = lVar3;
  *(code **)(lVar1 + 0x10) = FUN_102c38050;
  *(long *)(unaff_x20 + 0x18) = lVar1;
  lVar1 = 0x112f01ee0;
  func_0x0001000285a8(0x112f01ee0,&UNK_10db35740);
  func_0x000107c613fc();
  uVar5 = 0x112f01ee8;
  func_0x0001000285a8(0x112f01ee8,&UNK_10db35748);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(lVar1 + 0x10) = uVar5;
  *(undefined1 *)(lVar1 + 0x18) = 0;
  *(long *)(unaff_x20 + 0x20) = lVar1;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  uVar5 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + 0x30) = uVar5;
  return;
}



/* Entry: 102c384e0; end: 102c38503;  */

void FUN_102c384e0(undefined8 *param_1,code *param_2)

{
  (*param_2)(*param_1);
  return;
}



/* Entry: 102c38504; end: 102c38737;  */

/* WARNING: Possible PIC construction at 0x000102c3854c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c38550) */

void FUN_102c38504(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + 0x20);
  puVar1 = &UNK_1105b5db0;
  func_0x000107c613fc(&UNK_1105b5db0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar2);
  return;
}



/* Entry: 102c38738; end: 102c3875b;  */

void FUN_102c38738(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1);
  return;
}



/* Entry: 102c3875c; end: 102c3875f;  */

void FUN_102c3875c(undefined8 *param_1)

{
  long unaff_x20;
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
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  
  uStack_58 = param_1[10];
  uStack_60 = param_1[9];
  uStack_48 = param_1[0xc];
  uStack_50 = param_1[0xb];
  uStack_40 = param_1[0xd];
  uStack_38 = (undefined1)param_1[0xe];
  uStack_2f = *(undefined8 *)((long)param_1 + 0x79);
  uStack_37 = (undefined7)*(undefined8 *)((long)param_1 + 0x71);
  uStack_30 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x71) >> 0x38);
  uStack_98 = param_1[2];
  uStack_a0 = param_1[1];
  uStack_88 = param_1[4];
  uStack_90 = param_1[3];
  uStack_78 = param_1[6];
  uStack_80 = param_1[5];
  uStack_68 = param_1[8];
  uStack_70 = param_1[7];
  (**(code **)(unaff_x20 + 0x10))(*param_1,&uStack_a0);
  return;
}



/* Entry: 102c38760; end: 102c387c7;  */

void FUN_102c38760(undefined8 *param_1)

{
  long unaff_x20;
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
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  
  uStack_58 = param_1[10];
  uStack_60 = param_1[9];
  uStack_48 = param_1[0xc];
  uStack_50 = param_1[0xb];
  uStack_40 = param_1[0xd];
  uStack_38 = (undefined1)param_1[0xe];
  uStack_2f = *(undefined8 *)((long)param_1 + 0x79);
  uStack_37 = (undefined7)*(undefined8 *)((long)param_1 + 0x71);
  uStack_30 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x71) >> 0x38);
  uStack_98 = param_1[2];
  uStack_a0 = param_1[1];
  uStack_88 = param_1[4];
  uStack_90 = param_1[3];
  uStack_78 = param_1[6];
  uStack_80 = param_1[5];
  uStack_68 = param_1[8];
  uStack_70 = param_1[7];
  (**(code **)(unaff_x20 + 0x10))(*param_1,&uStack_a0);
  return;
}



/* Entry: 102c387c8; end: 102c387cb;  */

void FUN_102c387c8(undefined8 *param_1)

{
  long unaff_x20;
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
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  
  uStack_58 = param_1[10];
  uStack_60 = param_1[9];
  uStack_48 = param_1[0xc];
  uStack_50 = param_1[0xb];
  uStack_40 = param_1[0xd];
  uStack_38 = (undefined1)param_1[0xe];
  uStack_2f = *(undefined8 *)((long)param_1 + 0x79);
  uStack_37 = (undefined7)*(undefined8 *)((long)param_1 + 0x71);
  uStack_30 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x71) >> 0x38);
  uStack_98 = param_1[2];
  uStack_a0 = param_1[1];
  uStack_88 = param_1[4];
  uStack_90 = param_1[3];
  uStack_78 = param_1[6];
  uStack_80 = param_1[5];
  uStack_68 = param_1[8];
  uStack_70 = param_1[7];
  (**(code **)(unaff_x20 + 0x10))(*param_1,&uStack_a0);
  return;
}



/* Entry: 102c387cc; end: 102c38953;  */

undefined8 * FUN_102c387cc(void)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x40);
  puVar2 = puVar1;
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x112f020c8;
    func_0x0001000285a8(0x112f020c8,&UNK_10db358a0);
    func_0x000107c61534();
    puVar1[3] = 0xc;
    puVar1[2] = 6;
    puVar2 = puVar1;
    func_0x000103bb53d8();
    uVar3 = puVar2[1];
    puVar1[4] = *puVar2;
    puVar1[5] = uVar3;
    puVar2 = *(undefined8 **)(unaff_x20 + 0x10);
    puVar1[6] = puVar2;
    func_0x000107c61434();
    func_0x000107c6157c();
    func_0x000103bb543c();
    uVar3 = puVar2[1];
    puVar1[7] = *puVar2;
    puVar1[8] = uVar3;
    puVar2 = *(undefined8 **)(unaff_x20 + 0x20);
    puVar1[9] = puVar2;
    func_0x000107c61434();
    func_0x000107c6157c();
    func_0x000103bb54ac();
    uVar3 = puVar2[1];
    puVar1[10] = *puVar2;
    puVar1[0xb] = uVar3;
    puVar2 = *(undefined8 **)(unaff_x20 + 0x28);
    puVar1[0xc] = puVar2;
    func_0x000107c61434();
    func_0x000107c6157c();
    func_0x000103bb5474();
    uVar3 = puVar2[1];
    puVar1[0xd] = *puVar2;
    puVar1[0xe] = uVar3;
    puVar2 = *(undefined8 **)(unaff_x20 + 0x18);
    puVar1[0xf] = puVar2;
    func_0x000107c61434();
    func_0x000107c6157c();
    func_0x000103bb903c();
    uVar3 = puVar2[1];
    puVar1[0x10] = *puVar2;
    puVar1[0x11] = uVar3;
    puVar2 = *(undefined8 **)(unaff_x20 + 0x30);
    puVar1[0x12] = puVar2;
    func_0x000107c61434();
    func_0x000107c6157c();
    func_0x000103bb9074();
    uVar3 = puVar2[1];
    puVar1[0x13] = *puVar2;
    puVar1[0x14] = uVar3;
    uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
    puVar1[0x15] = uVar3;
    func_0x000107c61434();
    func_0x000107c6157c(uVar3);
    puVar2 = puVar1;
    FUN_102c35c3c();
    func_0x000107c61588(puVar1);
    uVar3 = 0x112f020d0;
    func_0x0001000285a8(0x112f020d0,&UNK_10db35ab0);
    func_0x000107c61408(puVar1 + 4,6,uVar3);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
    *(undefined8 **)(unaff_x20 + 0x40) = puVar2;
    func_0x000107c61434(puVar2);
    func_0x000107c6142c(uVar3);
    puVar1 = (undefined8 *)0x0;
  }
  func_0x000107c61434(puVar1);
  return puVar2;
}



/* Entry: 102c38954; end: 102c389f3;  */

void FUN_102c38954(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 uVar4;
  long unaff_x21;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = &uStack_50;
  func_0x000103b937c0();
  uStack_50 = *param_2;
  uStack_48 = param_2[1];
  func_0x000107c61434();
  puVar2 = PTR___sSSN_11034da80;
  puVar3 = PTR___sSSs25LosslessStringConvertiblesWP_11034dad0;
  func_0x000107c5fbd4();
  uVar4 = SUB81(puVar3,0);
  puVar3 = puVar2;
  FUN_102c377d4();
  func_0x000107c6142c(puVar2);
  if (unaff_x21 == 0) {
    *param_1 = puVar1;
    param_1[1] = puVar3;
    *(undefined1 *)(param_1 + 2) = uVar4;
  }
  return;
}



/* Entry: 102c389f4; end: 102c38ac3;  */

void FUN_102c389f4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  long unaff_x21;
  
  func_0x000103bb813c();
  uVar2 = *param_2;
  puVar3 = (undefined8 *)param_2[1];
  func_0x000107c61434(puVar3);
  puVar5 = puVar3;
  FUN_102c377d4();
  uVar7 = param_4;
  func_0x000107c6142c();
  if (unaff_x21 == 0) {
    func_0x000103bb821c();
    uVar4 = *puVar3;
    uVar1 = puVar3[1];
    func_0x000107c61434(uVar1);
    uVar6 = uVar1;
    FUN_102c377d4();
    func_0x000107c6142c(uVar1);
    *param_1 = uVar2;
    param_1[1] = puVar5;
    *(undefined1 *)(param_1 + 2) = param_4;
    param_1[3] = uVar4;
    param_1[4] = uVar6;
    *(undefined1 *)(param_1 + 5) = uVar7;
  }
  return;
}



/* Entry: 102c38ac4; end: 102c38b57;  */

void FUN_102c38ac4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 102c38b58; end: 102c3920b;  */

void FUN_102c38b58(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  lVar1 = 0x112f021b0;
  func_0x0001000285a8(0x112f021b0,&UNK_10db35930);
  lVar2 = lVar1;
  func_0x000107c613fc();
  lVar3 = 0x112f021b8;
  func_0x0001000285a8(0x112f021b8,&UNK_10db35938);
  lVar4 = lVar3;
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(lVar2 + 0x18) = 0;
  *(long *)(lVar2 + 0x20) = lVar4;
  *(undefined8 *)(lVar2 + 0x10) = 0x102c392b4;
  *(long *)(unaff_x20 + 0x10) = lVar2;
  func_0x000107c613fc(lVar1,0x28,7);
  func_0x000107c613fc(lVar3,*(undefined4 *)(lVar3 + 0x30),*(undefined2 *)(lVar3 + 0x34));
  func_0x0001000c2754();
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(long *)(lVar1 + 0x20) = lVar3;
  *(code **)(lVar1 + 0x10) = FUN_102c392a0;
  *(long *)(unaff_x20 + 0x18) = lVar1;
  lVar1 = 0x112f01ee0;
  func_0x0001000285a8(0x112f01ee0,&UNK_10db35740);
  lVar2 = lVar1;
  func_0x000107c613fc();
  lVar3 = 0x112f01ee8;
  func_0x0001000285a8(0x112f01ee8,&UNK_10db35748);
  lVar4 = lVar3;
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(long *)(lVar2 + 0x10) = lVar4;
  *(undefined1 *)(lVar2 + 0x18) = 0;
  *(long *)(unaff_x20 + 0x20) = lVar2;
  lVar2 = lVar1;
  func_0x000107c613fc(lVar1,0x19,7);
  lVar4 = lVar3;
  func_0x000107c613fc(lVar3,*(undefined4 *)(lVar3 + 0x30),*(undefined2 *)(lVar3 + 0x34));
  func_0x0001000c2754();
  *(long *)(lVar2 + 0x10) = lVar4;
  *(undefined1 *)(lVar2 + 0x18) = 0;
  *(long *)(unaff_x20 + 0x28) = lVar2;
  lVar2 = 0x112f021c0;
  func_0x0001000285a8(0x112f021c0,&UNK_10db35940);
  func_0x000107c613fc();
  uVar5 = 0x112f021c8;
  func_0x0001000285a8(0x112f021c8,&UNK_10db35948);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(lVar2 + 0x18) = 0;
  *(undefined8 *)(lVar2 + 0x20) = uVar5;
  *(code **)(lVar2 + 0x10) = FUN_102c389f4;
  *(long *)(unaff_x20 + 0x30) = lVar2;
  func_0x000107c613fc(lVar1,0x19,7);
  func_0x000107c613fc(lVar3,*(undefined4 *)(lVar3 + 0x30),*(undefined2 *)(lVar3 + 0x34));
  func_0x0001000c2754();
  *(long *)(lVar1 + 0x10) = lVar3;
  *(undefined1 *)(lVar1 + 0x18) = 0;
  *(long *)(unaff_x20 + 0x38) = lVar1;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  uVar5 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + 0x48) = uVar5;
  return;
}



/* Entry: 102c3920c; end: 102c39213;  */

void FUN_102c3920c(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))
            (*param_1,*(code **)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 102c39214; end: 102c3926b;  */

void FUN_102c39214(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102c3926c; end: 102c3926f;  */

void FUN_102c3926c(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1,param_1[1],param_1[2],*(undefined1 *)(param_1 + 3));
  return;
}



/* Entry: 102c39270; end: 102c3929f;  */

void FUN_102c39270(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1,param_1[1],param_1[2],*(undefined1 *)(param_1 + 3));
  return;
}



/* Entry: 102c392a0; end: 102c392c7;  */

void FUN_102c392a0(void)

{
  func_0x000100d20248();
  return;
}



/* Entry: 102c392c8; end: 102c392d3;  */

void FUN_102c392c8(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))
            (*param_1,*(code **)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 102c392d4; end: 102c3941b;  */

undefined8 * FUN_102c392d4(void)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x30);
  puVar2 = puVar1;
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x112f020c8;
    func_0x0001000285a8(0x112f020c8,&UNK_10db358a0);
    func_0x000107c61534();
    puVar1[3] = 8;
    puVar1[2] = 4;
    puVar2 = puVar1;
    func_0x000103bb5854();
    uVar3 = puVar2[1];
    puVar1[4] = *puVar2;
    puVar1[5] = uVar3;
    puVar2 = *(undefined8 **)(unaff_x20 + 0x10);
    puVar1[6] = puVar2;
    func_0x000107c61434();
    func_0x000107c6157c();
    func_0x000103bb588c();
    uVar3 = puVar2[1];
    puVar1[7] = *puVar2;
    puVar1[8] = uVar3;
    puVar2 = *(undefined8 **)(unaff_x20 + 0x18);
    puVar1[9] = puVar2;
    func_0x000107c61434();
    func_0x000107c6157c();
    func_0x000103bb58c4();
    uVar3 = puVar2[1];
    puVar1[10] = *puVar2;
    puVar1[0xb] = uVar3;
    puVar2 = *(undefined8 **)(unaff_x20 + 0x20);
    puVar1[0xc] = puVar2;
    func_0x000107c61434();
    func_0x000107c6157c();
    func_0x000103bb58fc();
    uVar3 = puVar2[1];
    puVar1[0xd] = *puVar2;
    puVar1[0xe] = uVar3;
    uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
    puVar1[0xf] = uVar3;
    func_0x000107c61434();
    func_0x000107c6157c(uVar3);
    puVar2 = puVar1;
    FUN_102c35c3c();
    func_0x000107c61588(puVar1);
    uVar3 = 0x112f020d0;
    func_0x0001000285a8(0x112f020d0,&UNK_10db35ab0);
    func_0x000107c61408(puVar1 + 4,4,uVar3);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
    *(undefined8 **)(unaff_x20 + 0x30) = puVar2;
    func_0x000107c61434(puVar2);
    func_0x000107c6142c(uVar3);
    puVar1 = (undefined8 *)0x0;
  }
  func_0x000107c61434(puVar1);
  return puVar2;
}



/* Entry: 102c3941c; end: 102c3948f;  */

void FUN_102c3941c(undefined8 *param_1,ulong *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x21;
  
  func_0x000103b93f18();
  uVar3 = *param_2;
  uVar2 = param_2[1];
  func_0x000107c61434(uVar2);
  FUN_102c37138(uVar3,uVar2);
  func_0x000107c6142c(uVar2);
  if (unaff_x21 == 0) {
    uVar1 = 1;
    if ((uVar3 & 1) == 0) {
      uVar1 = 2;
    }
    *param_1 = uVar1;
  }
  return;
}



/* Entry: 102c39490; end: 102c394fb;  */

void FUN_102c39490(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c394fc; end: 102c3998f;  */

void FUN_102c394fc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  lVar1 = 0x112f02298;
  func_0x0001000285a8(0x112f02298,&UNK_10db359c0);
  func_0x000107c613fc();
  uVar5 = 0x112f022a0;
  func_0x0001000285a8(0x112f022a0,&UNK_10db359c8);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x20) = uVar5;
  *(code **)(lVar1 + 0x10) = FUN_102c3941c;
  *(long *)(unaff_x20 + 0x10) = lVar1;
  lVar1 = 0x112f01ee0;
  func_0x0001000285a8(0x112f01ee0,&UNK_10db35740);
  lVar2 = lVar1;
  func_0x000107c613fc();
  lVar3 = 0x112f01ee8;
  func_0x0001000285a8(0x112f01ee8,&UNK_10db35748);
  lVar4 = lVar3;
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(long *)(lVar2 + 0x10) = lVar4;
  *(undefined1 *)(lVar2 + 0x18) = 0;
  *(long *)(unaff_x20 + 0x18) = lVar2;
  lVar2 = lVar1;
  func_0x000107c613fc(lVar1,0x19,7);
  lVar4 = lVar3;
  func_0x000107c613fc(lVar3,*(undefined4 *)(lVar3 + 0x30),*(undefined2 *)(lVar3 + 0x34));
  func_0x0001000c2754();
  *(long *)(lVar2 + 0x10) = lVar4;
  *(undefined1 *)(lVar2 + 0x18) = 0;
  *(long *)(unaff_x20 + 0x20) = lVar2;
  func_0x000107c613fc(lVar1,0x19,7);
  func_0x000107c613fc(lVar3,*(undefined4 *)(lVar3 + 0x30),*(undefined2 *)(lVar3 + 0x34));
  func_0x0001000c2754();
  *(long *)(lVar1 + 0x10) = lVar3;
  *(undefined1 *)(lVar1 + 0x18) = 0;
  *(long *)(unaff_x20 + 0x28) = lVar1;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  uVar5 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + 0x38) = uVar5;
  return;
}



/* Entry: 102c39990; end: 102c39997;  */

void FUN_102c39990(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))
            (*param_1,*(code **)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 102c39998; end: 102c399df;  */

void FUN_102c39998(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102c399e0; end: 102c399e7;  */

void FUN_102c399e0(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))
            (*param_1,*(code **)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 102c399e8; end: 102c39b2f;  */

undefined8 * FUN_102c399e8(void)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x30);
  puVar2 = puVar1;
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x112f020c8;
    func_0x0001000285a8(0x112f020c8,&UNK_10db358a0);
    func_0x000107c61534();
    puVar1[3] = 8;
    puVar1[2] = 4;
    puVar2 = puVar1;
    func_0x000103bb69b4();
    uVar3 = puVar2[1];
    puVar1[4] = *puVar2;
    puVar1[5] = uVar3;
    puVar2 = *(undefined8 **)(unaff_x20 + 0x10);
    puVar1[6] = puVar2;
    func_0x000107c61434();
    func_0x000107c6157c();
    func_0x000103bb69ec();
    uVar3 = puVar2[1];
    puVar1[7] = *puVar2;
    puVar1[8] = uVar3;
    puVar2 = *(undefined8 **)(unaff_x20 + 0x18);
    puVar1[9] = puVar2;
    func_0x000107c61434();
    func_0x000107c6157c();
    func_0x000103bb6d18();
    uVar3 = puVar2[1];
    puVar1[10] = *puVar2;
    puVar1[0xb] = uVar3;
    puVar2 = *(undefined8 **)(unaff_x20 + 0x20);
    puVar1[0xc] = puVar2;
    func_0x000107c61434();
    func_0x000107c6157c();
    func_0x000103bb6b44();
    uVar3 = puVar2[1];
    puVar1[0xd] = *puVar2;
    puVar1[0xe] = uVar3;
    uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
    puVar1[0xf] = uVar3;
    func_0x000107c61434();
    func_0x000107c6157c(uVar3);
    puVar2 = puVar1;
    FUN_102c35c3c();
    func_0x000107c61588(puVar1);
    uVar3 = 0x112f020d0;
    func_0x0001000285a8(0x112f020d0,&UNK_10db35ab0);
    func_0x000107c61408(puVar1 + 4,4,uVar3);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
    *(undefined8 **)(unaff_x20 + 0x30) = puVar2;
    func_0x000107c61434(puVar2);
    func_0x000107c6142c(uVar3);
    puVar1 = (undefined8 *)0x0;
  }
  func_0x000107c61434(puVar1);
  return puVar2;
}



/* Entry: 102c39b30; end: 102c39b9b;  */

void FUN_102c39b30(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c39b9c; end: 102c39f27;  */

void FUN_102c39b9c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  lVar1 = 0x112f01ee0;
  func_0x0001000285a8(0x112f01ee0,&UNK_10db35740);
  lVar2 = lVar1;
  func_0x000107c613fc();
  lVar3 = 0x112f01ee8;
  func_0x0001000285a8(0x112f01ee8,&UNK_10db35748);
  lVar4 = lVar3;
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(long *)(lVar2 + 0x10) = lVar4;
  *(undefined1 *)(lVar2 + 0x18) = 0;
  *(long *)(unaff_x20 + 0x10) = lVar2;
  lVar2 = lVar1;
  func_0x000107c613fc(lVar1,0x19,7);
  lVar4 = lVar3;
  func_0x000107c613fc(lVar3,*(undefined4 *)(lVar3 + 0x30),*(undefined2 *)(lVar3 + 0x34));
  func_0x0001000c2754();
  *(long *)(lVar2 + 0x10) = lVar4;
  *(undefined1 *)(lVar2 + 0x18) = 0;
  *(long *)(unaff_x20 + 0x18) = lVar2;
  lVar2 = lVar1;
  func_0x000107c613fc(lVar1,0x19,7);
  lVar4 = lVar3;
  func_0x000107c613fc(lVar3,*(undefined4 *)(lVar3 + 0x30),*(undefined2 *)(lVar3 + 0x34));
  func_0x0001000c2754();
  *(long *)(lVar2 + 0x10) = lVar4;
  *(undefined1 *)(lVar2 + 0x18) = 0;
  *(long *)(unaff_x20 + 0x20) = lVar2;
  func_0x000107c613fc(lVar1,0x19,7);
  func_0x000107c613fc(lVar3,*(undefined4 *)(lVar3 + 0x30),*(undefined2 *)(lVar3 + 0x34));
  func_0x0001000c2754();
  *(long *)(lVar1 + 0x10) = lVar3;
  *(undefined1 *)(lVar1 + 0x18) = 0;
  *(long *)(unaff_x20 + 0x28) = lVar1;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  uVar5 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + 0x38) = uVar5;
  return;
}



/* Entry: 102c39f28; end: 102c39f37;  */

void FUN_102c39f28(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))
            (*param_1,*(code **)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 102c39f38; end: 102c3a003;  */

undefined8 * FUN_102c39f38(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x18);
  puVar2 = puVar1;
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x112f020c8;
    func_0x0001000285a8(0x112f020c8,&UNK_10db358a0);
    func_0x000107c61534();
    puVar1[3] = 2;
    puVar1[2] = 1;
    puVar2 = puVar1;
    func_0x000103bb83b0();
    uVar3 = puVar2[1];
    puVar1[4] = *puVar2;
    puVar1[5] = uVar3;
    uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
    puVar1[6] = uVar3;
    func_0x000107c61434();
    func_0x000107c6157c(uVar3);
    puVar2 = puVar1;
    FUN_102c35c3c();
    func_0x000107c61588(puVar1);
    FUN_102c3a11c(puVar1 + 4);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
    *(undefined8 **)(unaff_x20 + 0x18) = puVar2;
    func_0x000107c61434(puVar2);
    func_0x000107c6142c(uVar3);
    puVar1 = (undefined8 *)0x0;
  }
  func_0x000107c61434(puVar1);
  return puVar2;
}



/* Entry: 102c3a004; end: 102c3a057;  */

void FUN_102c3a004(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c3a058; end: 102c3a113;  */

/* WARNING: Possible PIC construction at 0x000102c3a0a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c3a0a4) */

void FUN_102c3a058(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + 0x10);
  puVar1 = &UNK_1105b6140;
  func_0x000107c613fc(&UNK_1105b6140,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar2);
  return;
}



/* Entry: 102c3a114; end: 102c3a11b;  */

void FUN_102c3a114(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))
            (*param_1,*(code **)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 102c3a11c; end: 102c3a163;  */

undefined8 FUN_102c3a11c(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112f020d0;
  func_0x0001000285a8(0x112f020d0,&UNK_10db35ab0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 102c3a164; end: 102c3a1c3; -[_TtC29SCAdOperaPluginImplementation23SCAdOperaPluginWorkflow init] */

void FUN_102c3a164(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAdOperaPluginImplementation.SCAdOperaPluginWorkflow",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c3a190);
  (*pcVar1)();
}



/* Entry: 102c3a1c4; end: 102c3a25f; -[_TtC29SCAdOperaPluginImplementation23SCAdOperaPluginWorkflow .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102c3a200: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c3a204) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c3a1c4(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f02420));
  func_0x0001000834e4(param_1 + _DAT_112f02428);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f02430));
  return;
}



/* Entry: 102c3a260; end: 102c3a27f;  */

void FUN_102c3a260(void)

{
  func_0x000107c61168(&PTR_PTR_1128990c0);
  return;
}



/* Entry: 102c3a280; end: 102c3a523;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c3a280(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long unaff_x20;
  long alStack_88 [3];
  long lStack_70;
  long lStack_68;
  
  lVar1 = unaff_x20 + _DAT_112f02428;
  lVar3 = *(long *)(lVar1 + 0x18);
  lVar9 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,lVar3);
  (**(code **)(lVar9 + 8))();
  if (lVar3 != 0) {
    func_0x0001000d224c(alStack_88);
    lVar1 = alStack_88[0];
    if (alStack_88[0] == 0) {
      func_0x000107c615e8(lVar3);
    }
    else {
      pcVar2 = *(code **)(unaff_x20 + _DAT_112f02458);
      lVar4 = lVar3;
      func_0x000107c3d2ac();
      func_0x000107c61180();
      lVar5 = lVar4;
      (*pcVar2)();
      func_0x000107c615e8(lVar4);
      lVar4 = lVar5;
      func_0x000107c614f0();
      func_0x000107c546b4(lVar3);
      uVar6 = 0;
      func_0x0001041f3918();
      func_0x000107c610f8();
      func_0x000107c453e4();
      func_0x000107c52360(lVar3);
      uVar12 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112f02420) + _DAT_113078da8);
      lVar7 = lVar3;
      func_0x000107c3d2ac(lVar3);
      func_0x000107c61180();
      lVar8 = lVar3;
      func_0x000107c3d2ac(lVar3);
      func_0x000107c61180();
      alStack_88[0] = lVar5;
      lStack_70 = lVar4;
      lStack_68 = lVar9;
      func_0x000107c615f0(lVar5);
      func_0x000107c615f0(lVar1);
      lVar9 = lVar3;
      func_0x000107c3d50c(lVar3);
      func_0x000107c61180();
      lVar4 = lVar3;
      func_0x000107c3d2ac(lVar3);
      func_0x000107c61180();
      lVar10 = lVar3;
      func_0x000107c3d2ac(lVar3);
      func_0x000107c61180();
      func_0x000107c615f0(lVar3);
      lVar11 = lVar7;
      func_0x0001041f485c(lVar7,lVar8,alStack_88,lVar1,lVar9,lVar4,lVar10,uVar12,uVar6,lVar3,lVar3);
      func_0x000107c615e8(lVar7);
      func_0x000107c615e8(lVar8);
      func_0x000107c615e8(lVar1);
      func_0x000107c615e8(lVar9);
      func_0x000107c615e8(lVar4);
      func_0x000107c615e8(lVar10);
      func_0x000107c615e8(lVar3);
      func_0x0001000834e4(alStack_88);
      func_0x000107c42c1c(*(undefined8 *)(unaff_x20 + _DAT_112f02448));
      func_0x0001000d224c(alStack_88);
      lVar9 = alStack_88[0];
      if (alStack_88[0] != 0) {
        func_0x000107c3e7b4(lVar3);
        func_0x000107c615e8(lVar9);
      }
      func_0x000107c615e8(lVar5);
      func_0x000107c615e8(lVar1);
      func_0x000107c615e8(lVar3);
      func_0x000107c61170(uVar6);
      func_0x000107c61170(lVar11);
    }
  }
  return;
}



/* Entry: 102c3a524; end: 102c3a54b; -[_TtC29SCAdOperaPluginImplementation23SCAdOperaPluginWorkflow begin] */

void FUN_102c3a524(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102c3a280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102c3a54c; end: 102c3a5cf; -[_TtC29SCAdOperaPluginImplementation23SCAdOperaPluginWorkflow end] */

/* WARNING: Possible PIC construction at 0x000102c3a588: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c3a5a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c3a58c) */
/* WARNING: Removing unreachable block (ram,0x000102c3a5a8) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c3a54c(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 102c3a5d0; end: 102c3a5e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c3a5d0(void)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puStack_68;
  
  uVar2 = *(ulong *)(unaff_x20 + _DAT_113078d00);
  if (uVar2 >> 0x3e == 0) {
    uVar7 = *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar7 = uVar2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar2) {
      uVar7 = uVar2;
    }
    func_0x000107c60480();
  }
  if (uVar7 != 0) {
    uVar8 = 0;
    do {
      if ((uVar2 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102c3a78c);
          (*pcVar1)();
        }
        uVar9 = *(ulong *)(uVar2 + uVar8 * 8 + 0x20);
        func_0x000107c615f0(uVar9);
      }
      else {
        uVar9 = uVar8;
        FUN_1024a2c74(uVar8,uVar2);
      }
      if (SCARRY8(uVar8,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102c3a788);
        (*pcVar1)();
      }
      uVar6 = uVar8 + 1;
      uVar3 = uVar9;
      puStack_68 = PTR_DAT_1126a1f48;
      func_0x000107c61494(uVar9,1,&puStack_68);
      if (uVar3 != 0) {
        return;
      }
      uVar3 = uVar9;
      func_0x000107c61150(uVar9,PTR_s_respondsToSelector__11262c7e0,PTR_s_dependentPlugins_1125b9040
                         );
      if ((uVar3 & 1) == 0) {
LAB_102c3a654:
        func_0x000107c615e8(uVar9);
      }
      else {
        uVar3 = uVar9;
        func_0x000107c615f0();
        func_0x000107c417bc();
        func_0x000107c61180();
        if (uVar3 == 0) {
          func_0x000107c615e8(uVar9);
          goto LAB_102c3a654;
        }
        uVar4 = 0x112e9e980;
        func_0x0001000285a8(0x112e9e980,&UNK_10daca810);
        uVar5 = uVar3;
        func_0x000107c5fc54(uVar3,uVar4);
        func_0x000107c615e8(uVar9);
        func_0x000107c61170(uVar3);
        uVar3 = uVar5;
        FUN_102c3a5e8(uVar5,1);
        func_0x000107c6142c(uVar5);
        func_0x000107c615e8(uVar9);
        if (uVar3 != 0) {
          return;
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar6 != uVar7);
  }
  return;
}



/* Entry: 102c3a5e8; end: 102c3a98f;  */

void FUN_102c3a5e8(ulong param_1,long param_2)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puStack_68;
  
  if (param_2 < 2) {
    if (param_1 >> 0x3e == 0) {
      uVar6 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar6 = param_1 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < param_1) {
        uVar6 = param_1;
      }
      func_0x000107c60480();
    }
    if (uVar6 != 0) {
      uVar7 = 0;
      do {
        if ((param_1 & 0xc000000000000001) == 0) {
          if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102c3a78c);
            (*pcVar1)();
          }
          uVar8 = *(ulong *)(param_1 + uVar7 * 8 + 0x20);
          func_0x000107c615f0(uVar8);
        }
        else {
          uVar8 = uVar7;
          FUN_1024a2c74(uVar7,param_1);
        }
        if (SCARRY8(uVar7,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102c3a788);
          (*pcVar1)();
        }
        uVar5 = uVar7 + 1;
        uVar2 = uVar8;
        puStack_68 = PTR_DAT_1126a1f48;
        func_0x000107c61494(uVar8,1,&puStack_68);
        if (uVar2 != 0) {
          return;
        }
        uVar2 = uVar8;
        func_0x000107c61150(uVar8,PTR_s_respondsToSelector__11262c7e0,
                            PTR_s_dependentPlugins_1125b9040);
        if ((uVar2 & 1) == 0) {
LAB_102c3a654:
          func_0x000107c615e8(uVar8);
        }
        else {
          uVar2 = uVar8;
          func_0x000107c615f0();
          func_0x000107c417bc();
          func_0x000107c61180();
          if (uVar2 == 0) {
            func_0x000107c615e8(uVar8);
            goto LAB_102c3a654;
          }
          uVar3 = 0x112e9e980;
          func_0x0001000285a8(0x112e9e980,&UNK_10daca810);
          uVar4 = uVar2;
          func_0x000107c5fc54(uVar2,uVar3);
          func_0x000107c615e8(uVar8);
          func_0x000107c61170(uVar2);
          uVar2 = uVar4;
          FUN_102c3a5e8(uVar4,param_2 + 1);
          func_0x000107c6142c(uVar4);
          func_0x000107c615e8(uVar8);
          if (uVar2 != 0) {
            return;
          }
        }
        uVar7 = uVar7 + 1;
      } while (uVar5 != uVar6);
    }
  }
  return;
}



/* Entry: 102c3a990; end: 102c3ab7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c3a990(void)

{
  long *unaff_x20;
  
  FUN_102c3a5e8(*(undefined8 *)(*unaff_x20 + _DAT_113078d00),0);
  return;
}



/* Entry: 102c3ab80; end: 102c3ac7f;  */

undefined * FUN_102c3ab80(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102c3ac80);
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
    puVar3 = (undefined *)0x112f02488;
    func_0x0001000285a8(0x112f02488,&UNK_10db35b18);
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



/* Entry: 102c3ac80; end: 102c3aecf;  */

ulong FUN_102c3ac80(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102c3ada8);
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
  func_0x000102c343c0(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102c3ada4);
      (*pcVar1)();
    }
    FUN_102c3aed0(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 102c3aed0; end: 102c3aff3;  */

long FUN_102c3aed0(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102c3aff0);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102c3aff4);
        (*pcVar3)();
      }
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        uVar4 = 0x112f02490;
        func_0x0001000285a8(0x112f02490,&UNK_10db35b20);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0x112f02490;
      func_0x0001000285a8(0x112f02490,&UNK_10db35b20);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102c3afec);
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



/* Entry: 102c3aff4; end: 102c3b033;  */

void FUN_102c3aff4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102c3b034; end: 102c3b14b;  */

long FUN_102c3b034(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102c3b148);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102c3b14c);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_102c3aff4(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
      FUN_102c3aff4(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102c3b144);
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



/* Entry: 102c3b14c; end: 102c3b1b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c3b14c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_102c3b540();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f024a0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 102c3b1b8; end: 102c3b223;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c3b1b8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f024a0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102c3b224; end: 102c3b283; -[_TtC38AdPlaybackScopedFactoryServiceProvider26SCAdPlaybackScopedServices init] */

void FUN_102c3b224(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdPlaybackScopedFactoryServiceProvider.SCAdPlaybackScopedServices",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c3b250);
  (*pcVar1)();
}



/* Entry: 102c3b284; end: 102c3b293; -[_TtC38AdPlaybackScopedFactoryServiceProvider26SCAdPlaybackScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c3b284(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f024a0));
  return;
}



/* Entry: 102c3b294; end: 102c3b2ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c3b294(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1105b6348;
  func_0x000107c613fc(&UNK_1105b6348,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_102c3b5d8,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102c3b300; end: 102c3b39b;  */

void FUN_102c3b300(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1105b6258;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1105b6258;
  return;
}



/* Entry: 102c3b39c; end: 102c3b3d3;  */

void FUN_102c3b39c(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}


