/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102948bf8; end: 102948e0b;  */

long FUN_102948bf8(ulong param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar4 = 0;
  func_0x000107c5f94c();
  lVar9 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  puVar8 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = 0x112dbf7e0;
  func_0x0001000285a8(0x112dbf7e0,&UNK_10d97aea8);
  lVar10 = *(long *)(lVar9 + 0x48);
  bVar3 = *(byte *)(lVar9 + 0x50);
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x18) = 4;
  *(undefined8 *)(lVar5 + 0x10) = 2;
  lVar1 = lVar5 + ((ulong)bVar3 + 0x20 & ((ulong)bVar3 ^ 0xffffffffffffffff));
  func_0x000107c5f940(lVar1,param_3);
  func_0x000107c5f944(lVar1 + lVar10,FUN_102947b20,0);
  lVar10 = lVar5;
  func_0x0001016a16bc();
  func_0x000107c61588(lVar5);
  func_0x000107c61408(lVar1,2,lVar4);
  func_0x000107c6145c(lVar5,0x20,7);
  uVar2 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar2 = param_2 >> 0x38 & 0xf;
  }
  lStack_68 = lVar10;
  if (uVar2 != 0) {
    uStack_78 = 0;
    uStack_70 = 0xe000000000000000;
    func_0x000107c602fc(0x20);
    func_0x000107c6142c(uStack_70);
    uStack_78 = 0xd00000000000001b;
    uStack_70 = 0x800000010efb6050;
    func_0x000107c5fb78(param_1,param_2);
    func_0x000107c5fb78(0x7d7d22,0xe300000000000000);
    uVar6 = uStack_78;
    uVar7 = uStack_70;
    func_0x000100e35e30(uStack_78,uStack_70);
    func_0x000107c5f948(puVar8,0xd000000000000014,0x800000010efb6070,uVar6,uVar7);
    func_0x00010006c090(uVar6,uVar7);
    func_0x0001016a0a3c((long)puVar8 - extraout_x12,puVar8);
    (**(code **)(lVar9 + 8))((long)puVar8 - extraout_x12,lVar4);
  }
  return lStack_68;
}



/* Entry: 102948e0c; end: 102948e2f;  */

undefined8 FUN_102948e0c(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102948e30; end: 10294955f;  */

undefined * FUN_102948e30(undefined1 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 **ppuVar11;
  undefined1 **ppuVar12;
  undefined8 uVar13;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar14;
  long lVar15;
  undefined1 auStack_150 [8];
  long lStack_148;
  undefined1 *puStack_140;
  long lStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined1 *puStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined1 *puStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined1 *puStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined1 auStack_88 [8];
  long lStack_80;
  undefined1 auStack_70 [16];
  
  iVar3 = 2;
  uVar13 = 0x12;
  func_0x000100029b9c(2,0x12,4,0);
  if (iVar3 != 0) {
    lVar4 = 0;
    func_0x000107c5f938();
    lVar15 = *(long *)(lVar4 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
    puVar8 = auStack_150 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    lVar5 = 0x112ece628;
    puStack_c0 = param_1;
    func_0x0001000285a8(0x112ece628,&UNK_10daf4318);
    (*(code *)PTR____chkstk_darwin_11034bd40)
              (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    uVar14 = (long)puVar8 - extraout_x8_00;
    func_0x000107c614b0(param_1);
    uVar13 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    uVar6 = uVar14;
    func_0x000107c6147c(uVar14,&puStack_c0,uVar13,lVar4,6);
    if ((uVar6 & 1) != 0) {
      (**(code **)(lVar15 + 0x38))(uVar14,0,1,lVar4);
      puVar9 = puVar8;
      (**(code **)(lVar15 + 0x20))(puVar8,uVar14,lVar4);
      func_0x000107c5f930();
      puVar7 = PTR___ss5Int64VN_11034ee50;
      puStack_c0 = puVar9;
      func_0x000107c6057c(PTR___ss5Int64VN_11034ee50,
                          PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68);
      func_0x000107c5f934();
      (**(code **)(lVar15 + 8))(puVar8,lVar4);
      return puVar7;
    }
    (**(code **)(lVar15 + 0x38))(uVar14,1,1,lVar4);
    uVar13 = 0x112ece628;
    func_0x00010294a72c(uVar14,0x112ece628,&UNK_10daf4318);
  }
  puVar8 = param_1;
  func_0x000107c5ed2c();
  puVar9 = puVar8;
  func_0x000107c42210();
  func_0x000107c61180();
  puVar10 = puVar9;
  func_0x000107c5faec();
  func_0x000107c61170(puVar9);
  puStack_f0 = (undefined1 *)0xd000000000000013;
  lStack_e8 = -0x7ffffffef0f321b0;
  puStack_c0 = puVar10;
  lStack_b8 = uVar13;
  func_0x000100e8b654();
  ppuVar11 = &puStack_f0;
  func_0x000107c6022c(ppuVar11,PTR___sSSN_11034da80,PTR___sSSN_11034da80,puVar9,puVar9);
  func_0x000107c6142c(uVar13);
  if (((ulong)ppuVar11 & 1) == 0) {
    func_0x000107c61170(puVar8);
  }
  else {
    lVar4 = 0;
    func_0x000107c606c4();
    lStack_138 = *(long *)(lVar4 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_138 + 0x40));
    puVar10 = auStack_150 + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
    func_0x000107c614cc(param_1,auStack_70,auStack_88);
    lStack_a8 = lStack_80;
    func_0x0001000a9d90(&puStack_c0);
    (**(code **)(*(long *)(lStack_80 + -8) + 0x10))();
    ppuVar12 = &puStack_c0;
    func_0x000107c606b0(puVar10,ppuVar12);
    func_0x000107c606c0();
    ppuVar11 = ppuVar12;
    func_0x000107c603c8();
    func_0x000107c6049c(&puStack_f0);
    lVar5 = lStack_118;
    puVar9 = puStack_f0;
    lStack_118 = lStack_e8;
    uStack_110 = uStack_e0;
    uStack_108 = uStack_d8;
    uStack_100 = uStack_d0;
    lStack_f8 = lStack_c8;
    while (lStack_e8 = lStack_118, uStack_e0 = uStack_110, uStack_d8 = uStack_108,
          uStack_d0 = uStack_100, lStack_c8 = lStack_f8, puStack_f0 = puVar9, lStack_f8 != 0) {
      puStack_120 = puVar9;
      if ((lStack_118 != 0) &&
         ((puVar9 == (undefined1 *)0x65646f63 && lStack_118 == -0x1c00000000000000 ||
          (func_0x000107c605b8(puVar9,lStack_118,0x65646f63,0xe400000000000000,0),
          ((ulong)puVar9 & 1) != 0)))) {
        func_0x000107c61574(ppuVar12);
        func_0x000107c61574(ppuVar11);
        lStack_b8 = lStack_118;
        puStack_c0 = puStack_120;
        lStack_a8 = uStack_108;
        uStack_b0 = uStack_110;
        goto LAB_1029491e4;
      }
      func_0x00010294a72c(&puStack_120,0x112ece620,&UNK_10daf4310);
      func_0x000107c6049c(&puStack_f0);
      lVar5 = lStack_118;
      puVar9 = puStack_f0;
      lStack_118 = lStack_e8;
      uStack_110 = uStack_e0;
      uStack_108 = uStack_d8;
      uStack_100 = uStack_d0;
      lStack_f8 = lStack_c8;
    }
    lStack_118 = lVar5;
    func_0x000107c61574(ppuVar11);
    func_0x000107c61574(ppuVar12);
    uStack_100 = 0;
    lStack_f8 = 0;
    lStack_b8 = 0;
    puStack_c0 = (undefined1 *)0x0;
    lStack_a8 = 0;
    uStack_b0 = 0;
LAB_1029491e4:
    uStack_a0 = uStack_100;
    lStack_98 = lStack_f8;
    func_0x00010294a6a4(&puStack_c0,&puStack_f0,0x112ece618,&UNK_10daf4308);
    if (lStack_c8 != 0) {
      lStack_118 = lStack_e8;
      puStack_120 = puStack_f0;
      uStack_108 = uStack_d8;
      uStack_110 = uStack_e0;
      lStack_f8 = lStack_c8;
      uStack_100 = uStack_d0;
      puStack_130 = (undefined *)0x0;
      uStack_128 = 0xe000000000000000;
      lStack_148 = lVar4;
      puStack_140 = auStack_150;
      func_0x000107c603d0(&uStack_110,&puStack_130,PTR___sypN_11034f1a8 + 8,
                          PTR___ss26DefaultStringInterpolationVN_11034ec00,
                          PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      puVar7 = puStack_130;
      func_0x00010294a72c(&puStack_120,0x112ece620,&UNK_10daf4310);
      ppuVar12 = &puStack_c0;
      func_0x00010294a72c(ppuVar12,0x112ece618,&UNK_10daf4308);
      func_0x000107c606c0();
      ppuVar11 = ppuVar12;
      func_0x000107c603c8();
      func_0x000107c6049c(&puStack_f0);
      lVar5 = lStack_118;
      uVar13 = uStack_110;
      uVar1 = uStack_108;
      uVar2 = uStack_100;
      lVar4 = lStack_f8;
      puVar9 = puStack_f0;
      lStack_118 = lStack_e8;
      uStack_110 = uStack_e0;
      uStack_108 = uStack_d8;
      uStack_100 = uStack_d0;
      lStack_f8 = lStack_c8;
      do {
        lStack_e8 = lStack_118;
        uStack_e0 = uStack_110;
        uStack_d8 = uStack_108;
        uStack_d0 = uStack_100;
        lStack_c8 = lStack_f8;
        puStack_f0 = puVar9;
        if (lStack_f8 == 0) {
          lStack_118 = lVar5;
          uStack_110 = uVar13;
          uStack_108 = uVar1;
          uStack_100 = uVar2;
          lStack_f8 = lVar4;
          func_0x000107c61574(ppuVar11);
          func_0x000107c61574(ppuVar12);
          uStack_a0 = 0;
          lStack_98 = 0;
          lStack_b8 = 0;
          puStack_c0 = (undefined1 *)0x0;
          lStack_a8 = 0;
          uStack_b0 = 0;
LAB_1029493a8:
          func_0x00010294a6a4(&puStack_c0,&puStack_f0,0x112ece618,&UNK_10daf4308);
          lVar5 = lStack_148;
          if (lStack_c8 != 0) {
            lStack_118 = lStack_e8;
            puStack_120 = puStack_f0;
            uStack_108 = uStack_d8;
            uStack_110 = uStack_e0;
            lStack_f8 = lStack_c8;
            uStack_100 = uStack_d0;
            puStack_130 = (undefined *)0x0;
            uStack_128 = 0xe000000000000000;
            func_0x000107c603d0(&uStack_110,&puStack_130,PTR___sypN_11034f1a8 + 8,
                                PTR___ss26DefaultStringInterpolationVN_11034ec00,
                                PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08
                               );
            func_0x000107c61170(puVar8);
            func_0x00010294a72c(&puStack_120,0x112ece620,&UNK_10daf4310);
            func_0x00010294a72c(&puStack_c0,0x112ece618,&UNK_10daf4308);
            (**(code **)(lStack_138 + 8))(puVar10,lVar5);
            return puVar7;
          }
          func_0x000107c61170(puVar8);
          func_0x00010294a72c(&puStack_c0,0x112ece618,&UNK_10daf4308);
          (**(code **)(lStack_138 + 8))(puVar10,lVar5);
          return puVar7;
        }
        puStack_120 = puVar9;
        if ((lStack_118 != 0) &&
           ((puVar9 == (undefined1 *)0x6567617373656d && lStack_118 == -0x1900000000000000 ||
            (func_0x000107c605b8(puVar9,lStack_118,0x6567617373656d,0xe700000000000000,0),
            ((ulong)puVar9 & 1) != 0)))) {
          func_0x000107c61574(ppuVar12);
          func_0x000107c61574(ppuVar11);
          lStack_b8 = lStack_118;
          puStack_c0 = puStack_120;
          lStack_a8 = uStack_108;
          uStack_b0 = uStack_110;
          uStack_a0 = uStack_100;
          lStack_98 = lStack_f8;
          goto LAB_1029493a8;
        }
        func_0x00010294a72c(&puStack_120,0x112ece620,&UNK_10daf4310);
        func_0x000107c6049c(&puStack_f0);
        lVar5 = lStack_118;
        uVar13 = uStack_110;
        uVar1 = uStack_108;
        uVar2 = uStack_100;
        lVar4 = lStack_f8;
        puVar9 = puStack_f0;
        lStack_118 = lStack_e8;
        uStack_110 = uStack_e0;
        uStack_108 = uStack_d8;
        uStack_100 = uStack_d0;
        lStack_f8 = lStack_c8;
      } while( true );
    }
    func_0x000107c61170(puVar8);
    func_0x00010294a72c(&puStack_c0,0x112ece618,&UNK_10daf4308);
    (**(code **)(lStack_138 + 8))(puVar10,lVar4);
  }
  return (undefined *)0x0;
}



/* Entry: 102949560; end: 10294965f;  */

undefined8 FUN_102949560(ulong param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  
  FUN_102948e30();
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else if (((param_1 == 0x31303030303035) && (param_2 == -0x1900000000000000)) ||
          (uVar1 = param_1,
          func_0x000107c605b8(param_1,param_2,0x31303030303035,0xe700000000000000,0),
          (uVar1 & 1) != 0)) {
    func_0x000107c602fc(0x12);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c61434(param_2);
    func_0x000107c5fb78(param_1,param_2);
    func_0x000107c61430(param_2,2);
    func_0x000107c6142c(param_4);
    uVar2 = 0xd000000000000010;
  }
  else {
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(param_4);
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 102949660; end: 10294969f;  */

void FUN_102949660(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ece4f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daf42b8;
  func_0x000107c61520(&UNK_10daf42b8,&UNK_1105701a8);
  puRam0000000112ece4f0 = puVar1;
  return;
}



/* Entry: 1029496a0; end: 1029496af;  */

void FUN_1029496a0(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
  return;
}



/* Entry: 1029496b0; end: 1029496ef;  */

void FUN_1029496b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ece4f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daf4290;
  func_0x000107c61520(&UNK_10daf4290,&UNK_110570128);
  puRam0000000112ece4f8 = puVar1;
  return;
}



/* Entry: 1029496f0; end: 1029496f3;  */

void FUN_1029496f0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ece500 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daf4040;
  func_0x000107c61520(&UNK_10daf4040,&UNK_110570000);
  puRam0000000112ece500 = puVar1;
  return;
}



/* Entry: 1029496f4; end: 102949733;  */

void FUN_1029496f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ece500 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daf4040;
  func_0x000107c61520(&UNK_10daf4040,&UNK_110570000);
  puRam0000000112ece500 = puVar1;
  return;
}



/* Entry: 102949734; end: 102949737;  */

void FUN_102949734(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ece508 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daf40e0;
  func_0x000107c61520(&UNK_10daf40e0,&UNK_110570090);
  puRam0000000112ece508 = puVar1;
  return;
}



/* Entry: 102949738; end: 102949777;  */

void FUN_102949738(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ece508 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daf40e0;
  func_0x000107c61520(&UNK_10daf40e0,&UNK_110570090);
  puRam0000000112ece508 = puVar1;
  return;
}



/* Entry: 102949778; end: 102949a1f;  */

int FUN_102949778(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1029497f4;
        goto LAB_1029497d8;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1029497d8:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_1029497f4:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 102949a20; end: 102949b1b;  */

long * FUN_102949a20(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_3 + -8);
  uVar1 = *(uint *)(lVar5 + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    plVar2 = param_2;
    func_0x000107c614c4(param_2,param_3);
    if ((int)plVar2 == 1) {
      lVar5 = 0;
      func_0x000107c5f918();
      (**(code **)(*(long *)(lVar5 + -8) + 0x10))(param_1,param_2,lVar5);
      lVar5 = 0x112ece3b8;
      func_0x0001000285a8(0x112ece3b8,&UNK_10daf3f00);
      *(undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x30)) =
           *(undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x30));
      uVar3 = 1;
    }
    else {
      if ((int)plVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__memcpy_11034c658)(param_1,param_2,*(undefined8 *)(lVar5 + 0x40));
        return param_1;
      }
      lVar5 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = lVar5;
      func_0x000107c61434();
      uVar3 = 0;
    }
    func_0x000107c6159c(param_1,param_3,uVar3);
  }
  else {
    lVar5 = *param_2;
    *param_1 = lVar5;
    uVar4 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar5 + (uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 102949b1c; end: 102949b7b;  */

void FUN_102949b1c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107c614c4();
  if ((int)lVar1 == 1) {
    lVar1 = 0;
    func_0x000107c5f918();
                    /* WARNING: Could not recover jumptable at 0x000102949b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
    return;
  }
  if ((int)lVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
    return;
  }
  return;
}



/* Entry: 102949b7c; end: 102949eb3;  */

undefined8 * FUN_102949b7c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = param_2;
  func_0x000107c614c4(param_2,param_3);
  if ((int)puVar1 == 1) {
    lVar2 = 0;
    func_0x000107c5f918();
    (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,param_2,lVar2);
    lVar2 = 0x112ece3b8;
    func_0x0001000285a8(0x112ece3b8,&UNK_10daf3f00);
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar2 + 0x30)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar2 + 0x30));
    uVar3 = 1;
  }
  else {
    if ((int)puVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)
                (param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
      return param_1;
    }
    uVar3 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar3;
    func_0x000107c61434();
    uVar3 = 0;
  }
  func_0x000107c6159c(param_1,param_3,uVar3);
  return param_1;
}



/* Entry: 102949eb4; end: 102949ee3;  */

void FUN_102949eb4(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000102949ebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + -8) + 0x30))();
  return;
}



/* Entry: 102949ee4; end: 102949f6b;  */

void FUN_102949ee4(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined1 auStack_50 [32];
  undefined *puStack_30;
  undefined1 *puStack_28;
  
  puStack_30 = &UNK_10daf41d0;
  lVar1 = 0x13f;
  func_0x000107c5f918();
  if (param_2 < 0x40) {
    func_0x000107c61504(auStack_50,*(long *)(lVar1 + -8) + 0x40,PTR___sBi64_WV_11034d670 + 0x40);
    puStack_28 = auStack_50;
    func_0x000107c61528(param_1,0x100,2,&puStack_30);
  }
  return;
}



/* Entry: 102949f6c; end: 102949f9f;  */

undefined1  [16] FUN_102949f6c(void)

{
  return ZEXT816(0x1105700b0);
}



/* Entry: 102949fa0; end: 10294a0a7;  */

long * FUN_102949fa0(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = *param_2;
  if (lVar2 == 1) {
    if (lVar1 != 1) {
      *param_1 = lVar1;
      func_0x000107c61434();
      return param_1;
    }
    lVar1 = 1;
  }
  else {
    if (lVar1 != 1) {
      *param_1 = lVar1;
      func_0x000107c61434();
      func_0x000107c6142c(lVar2);
      return param_1;
    }
    func_0x00010294a01c(param_1);
    lVar1 = *param_2;
  }
  *param_1 = lVar1;
  return param_1;
}



/* Entry: 10294a0a8; end: 10294a173;  */

int FUN_10294a0a8(ulong *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffd < param_2) && ((char)param_1[1] != '\0')) {
    return (int)*param_1 + 0x7ffffffe;
  }
  uVar4 = *param_1;
  if (0xfffffffe < uVar4) {
    uVar4 = 0xffffffff;
  }
  uVar2 = (int)uVar4 - 1;
  uVar1 = uVar2;
  if (0x7fffffff < uVar2) {
    uVar1 = 0xffffffff;
  }
  iVar3 = uVar1 - 1;
  if ((int)uVar2 < 1) {
    iVar3 = -1;
  }
  return iVar3 + 1;
}



/* Entry: 10294a174; end: 10294a1db;  */

undefined8 * FUN_10294a174(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 10294a1dc; end: 10294a297;  */

int FUN_10294a1dc(ulong *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[1] != '\0')) {
    return (int)*param_1 + 0x7fffffff;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10294a298; end: 10294a3cf;  */

long FUN_10294a298(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  undefined1 auStack_60 [8];
  long lStack_58;
  
  lVar2 = 0x112ece5e0;
  func_0x0001000285a8(0x112ece5e0,&UNK_10daf42f0);
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar3 = param_1;
  func_0x0001000a8868(param_1,uVar5);
  lVar4 = lVar3;
  func_0x00010294a5b4();
  func_0x000107c606e0(auStack_60 + -extraout_x8,&UNK_1105702c0,&UNK_1105702c0,lVar4,uVar5,uVar1);
  if (unaff_x21 == 0) {
    uVar5 = 0x112ece5f0;
    func_0x0001000285a8(0x112ece5f0,&UNK_10daf42f8);
    FUN_10294a5f4();
    func_0x000107c604e8(&lStack_58,uVar5);
    (**(code **)(lVar6 + 8))(auStack_60 + -extraout_x8,lVar2);
    func_0x0001000834e4(param_1);
  }
  else {
    func_0x0001000834e4(param_1);
    lStack_58 = lVar3;
  }
  return lStack_58;
}



/* Entry: 10294a3d0; end: 10294a4f3;  */

long FUN_10294a3d0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  undefined1 auStack_60 [8];
  long lStack_58;
  
  lVar3 = 0x112ece5b8;
  func_0x0001000285a8(0x112ece5b8,&UNK_10daf42e0);
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar4 = param_1;
  func_0x0001000a8868(param_1,uVar1);
  lVar5 = lVar4;
  FUN_10294a4f4();
  func_0x000107c606e0(auStack_60 + -extraout_x8,&UNK_1105703e0,&UNK_1105703e0,lVar5,uVar1,uVar2);
  if (unaff_x21 == 0) {
    func_0x00010294a534();
    func_0x000107c604e8(&lStack_58);
    (**(code **)(lVar6 + 8))(auStack_60 + -extraout_x8,lVar3);
    func_0x0001000834e4(param_1);
  }
  else {
    func_0x0001000834e4(param_1);
    lStack_58 = lVar4;
  }
  return lStack_58;
}



/* Entry: 10294a4f4; end: 10294a5f3;  */

void FUN_10294a4f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ece5c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daf4630;
  func_0x000107c61520(&UNK_10daf4630,&UNK_1105703e0);
  puRam0000000112ece5c0 = puVar1;
  return;
}



/* Entry: 10294a5f4; end: 10294a663;  */

void FUN_10294a5f4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_28;
  
  if (puRam0000000112ece5f8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112ece5f0;
  func_0x00010002969c(0x112ece5f0,&UNK_10daf42f8);
  uVar2 = uVar1;
  FUN_10294a664();
  puVar3 = PTR___sSayxGSesSeRzlMc_11034dd10;
  uStack_28 = uVar2;
  func_0x000107c61520(PTR___sSayxGSesSeRzlMc_11034dd10,uVar1,&uStack_28);
  puRam0000000112ece5f8 = puVar3;
  return;
}



/* Entry: 10294a664; end: 10294a6a3;  */

void FUN_10294a664(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ece600 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daf4568;
  func_0x000107c61520(&UNK_10daf4568,&UNK_110570458);
  puRam0000000112ece600 = puVar1;
  return;
}



/* Entry: 10294a6a4; end: 10294a76b;  */

undefined8 FUN_10294a6a4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10294a76c; end: 10294a7cb;  */

undefined8 FUN_10294a76c(void)

{
  return 0;
}



/* Entry: 10294a7cc; end: 10294a80b;  */

undefined8 * FUN_10294a7cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 10294a80c; end: 10294a8cb;  */

int FUN_10294a80c(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10294a8cc; end: 10294a90b;  */

void FUN_10294a8cc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ece7f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daf43d0;
  func_0x000107c61520(&UNK_10daf43d0,&UNK_1105703e0);
  puRam0000000112ece7f8 = puVar1;
  return;
}



/* Entry: 10294a90c; end: 10294a90f;  */

void FUN_10294a90c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ece800 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daf4488;
  func_0x000107c61520(&UNK_10daf4488,&UNK_110570350);
  puRam0000000112ece800 = puVar1;
  return;
}



/* Entry: 10294a910; end: 10294a94f;  */

void FUN_10294a910(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ece800 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daf4488;
  func_0x000107c61520(&UNK_10daf4488,&UNK_110570350);
  puRam0000000112ece800 = puVar1;
  return;
}



/* Entry: 10294a950; end: 10294a953;  */

void FUN_10294a950(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ece808 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daf4540;
  func_0x000107c61520(&UNK_10daf4540,&UNK_1105702c0);
  puRam0000000112ece808 = puVar1;
  return;
}



/* Entry: 10294a954; end: 10294a993;  */

void FUN_10294a954(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ece808 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daf4540;
  func_0x000107c61520(&UNK_10daf4540,&UNK_1105702c0);
  puRam0000000112ece808 = puVar1;
  return;
}



/* Entry: 10294a994; end: 10294a997;  */

void FUN_10294a994(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ece810 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daf44d8;
  func_0x000107c61520(&UNK_10daf44d8,&UNK_1105702c0);
  puRam0000000112ece810 = puVar1;
  return;
}



/* Entry: 10294a998; end: 10294a9d7;  */

void FUN_10294a998(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ece810 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daf44d8;
  func_0x000107c61520(&UNK_10daf44d8,&UNK_1105702c0);
  puRam0000000112ece810 = puVar1;
  return;
}



/* Entry: 10294a9d8; end: 10294a9db;  */

void FUN_10294a9d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ece818 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daf44b0;
  func_0x000107c61520(&UNK_10daf44b0,&UNK_1105702c0);
  puRam0000000112ece818 = puVar1;
  return;
}



/* Entry: 10294a9dc; end: 10294aa1b;  */

void FUN_10294a9dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ece818 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daf44b0;
  func_0x000107c61520(&UNK_10daf44b0,&UNK_1105702c0);
  puRam0000000112ece818 = puVar1;
  return;
}



/* Entry: 10294aa1c; end: 10294aa1f;  */

void FUN_10294aa1c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ece820 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daf4420;
  func_0x000107c61520(&UNK_10daf4420,&UNK_110570350);
  puRam0000000112ece820 = puVar1;
  return;
}



/* Entry: 10294aa20; end: 10294aa5f;  */

void FUN_10294aa20(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ece820 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daf4420;
  func_0x000107c61520(&UNK_10daf4420,&UNK_110570350);
  puRam0000000112ece820 = puVar1;
  return;
}



/* Entry: 10294aa60; end: 10294aa63;  */

void FUN_10294aa60(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ece828 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daf43f8;
  func_0x000107c61520(&UNK_10daf43f8,&UNK_110570350);
  puRam0000000112ece828 = puVar1;
  return;
}



/* Entry: 10294aa64; end: 10294aaa3;  */

void FUN_10294aa64(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ece828 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daf43f8;
  func_0x000107c61520(&UNK_10daf43f8,&UNK_110570350);
  puRam0000000112ece828 = puVar1;
  return;
}



/* Entry: 10294aaa4; end: 10294aaa7;  */

void FUN_10294aaa4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ece830 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daf4368;
  func_0x000107c61520(&UNK_10daf4368,&UNK_1105703e0);
  puRam0000000112ece830 = puVar1;
  return;
}



/* Entry: 10294aaa8; end: 10294aae7;  */

void FUN_10294aaa8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ece830 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daf4368;
  func_0x000107c61520(&UNK_10daf4368,&UNK_1105703e0);
  puRam0000000112ece830 = puVar1;
  return;
}



/* Entry: 10294aae8; end: 10294aaeb;  */

void FUN_10294aae8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ece838 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daf4340;
  func_0x000107c61520(&UNK_10daf4340,&UNK_1105703e0);
  puRam0000000112ece838 = puVar1;
  return;
}



/* Entry: 10294aaec; end: 10294ab6b;  */

void FUN_10294aaec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ece838 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daf4340;
  func_0x000107c61520(&UNK_10daf4340,&UNK_1105703e0);
  puRam0000000112ece838 = puVar1;
  return;
}



/* Entry: 10294ab6c; end: 10294ac5b;  */

uint FUN_10294ab6c(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 10294ac5c; end: 10294ac9b;  */

void FUN_10294ac5c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ece850 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daf4718;
  func_0x000107c61520(&UNK_10daf4718,&UNK_1105704f0);
  puRam0000000112ece850 = puVar1;
  return;
}



/* Entry: 10294ac9c; end: 10294ac9f;  */

void FUN_10294ac9c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ece858 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daf46b0;
  func_0x000107c61520(&UNK_10daf46b0,&UNK_1105704f0);
  puRam0000000112ece858 = puVar1;
  return;
}



/* Entry: 10294aca0; end: 10294acdf;  */

void FUN_10294aca0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ece858 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daf46b0;
  func_0x000107c61520(&UNK_10daf46b0,&UNK_1105704f0);
  puRam0000000112ece858 = puVar1;
  return;
}



/* Entry: 10294ace0; end: 10294ace3;  */

void FUN_10294ace0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ece860 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daf4688;
  func_0x000107c61520(&UNK_10daf4688,&UNK_1105704f0);
  puRam0000000112ece860 = puVar1;
  return;
}



/* Entry: 10294ace4; end: 10294ad23;  */

void FUN_10294ace4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ece860 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daf4688;
  func_0x000107c61520(&UNK_10daf4688,&UNK_1105704f0);
  puRam0000000112ece860 = puVar1;
  return;
}



/* Entry: 10294ad24; end: 10294ade3;  */

undefined1 FUN_10294ad24(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 10294ade4; end: 10294ae37;  */

void FUN_10294ade4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  FUN_102948e0c(unaff_x20 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10294ae38; end: 10294af1f;  */

long * FUN_10294ae38(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    plVar2 = param_2;
    func_0x000107c614c4(param_2,param_3);
    if ((int)plVar2 == 2) {
      lVar5 = *param_2;
      func_0x000107c614b0(lVar5);
      *param_1 = lVar5;
      uVar3 = 2;
    }
    else if ((int)plVar2 == 1) {
      lVar5 = *param_2;
      func_0x000107c614b0(lVar5);
      *param_1 = lVar5;
      uVar3 = 1;
    }
    else {
      lVar5 = 0;
      func_0x000107c5f950();
      (**(code **)(*(long *)(lVar5 + -8) + 0x10))(param_1,param_2,lVar5);
      uVar3 = 0;
    }
    func_0x000107c6159c(param_1,param_3,uVar3);
  }
  else {
    lVar5 = *param_2;
    *param_1 = lVar5;
    uVar4 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar5 + (uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 10294af20; end: 10294af87;  */

void FUN_10294af20(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar2 = param_1;
  func_0x000107c614c4();
  iVar1 = (int)puVar2;
  if ((iVar1 != 2) && (iVar1 != 1)) {
    if (iVar1 == 0) {
      lVar3 = 0;
      func_0x000107c5f950();
                    /* WARNING: Could not recover jumptable at 0x00010294af68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar3 + -8) + 8))(param_1,lVar3);
      return;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(*param_1);
  return;
}



/* Entry: 10294af88; end: 10294b0bf;  */

undefined8 * FUN_10294af88(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = param_2;
  func_0x000107c614c4(param_2,param_3);
  if (((int)puVar1 == 2) || ((int)puVar1 == 1)) {
    uVar3 = *param_2;
    func_0x000107c614b0(uVar3);
    *param_1 = uVar3;
  }
  else {
    lVar2 = 0;
    func_0x000107c5f950();
    (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,param_2,lVar2);
  }
  func_0x000107c6159c(param_1,param_3,puVar1);
  return param_1;
}



/* Entry: 10294b0c0; end: 10294b0fb;  */

undefined8 FUN_10294b0c0(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10294b0fc();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 10294b0fc; end: 10294b133;  */

void FUN_10294b0fc(undefined8 param_1)

{
  if (lRam0000000112ece998 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6ffaac);
  return;
}



/* Entry: 10294b134; end: 10294b263;  */

undefined8 FUN_10294b134(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = param_2;
  func_0x000107c614c4(param_2,param_3);
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)
              (param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
    return param_1;
  }
  lVar2 = 0;
  func_0x000107c5f950();
  (**(code **)(*(long *)(lVar2 + -8) + 0x20))(param_1,param_2,lVar2);
  func_0x000107c6159c(param_1,param_3,0);
  return param_1;
}



/* Entry: 10294b264; end: 10294b293;  */

void FUN_10294b264(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010294b26c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + -8) + 0x30))();
  return;
}



/* Entry: 10294b294; end: 10294b303;  */

void FUN_10294b294(undefined8 param_1,ulong param_2)

{
  long lVar1;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  func_0x000107c5f950();
  if (param_2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = &UNK_10daf4810;
    puStack_28 = &UNK_10daf4810;
    func_0x000107c61528(param_1,0x100,3,&lStack_38);
  }
  return;
}



/* Entry: 10294b304; end: 10294b43f;  */

void FUN_10294b304(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  
  func_0x000107c602fc(0x14);
  func_0x000107c61434(param_3);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c5fb78(0xd000000000000010,0x800000010f0cdf00);
  puVar3 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar3);
  func_0x000103b6883c(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),param_2,
                      param_3);
  func_0x000103b68990(param_1);
  if (param_1 <= *(long *)(unaff_x20 + 0x28)) {
    lVar1 = unaff_x20 + 0x38;
    func_0x000107c61618();
    if (lVar1 != 0) {
      lVar4 = *(long *)(unaff_x20 + 0x40);
      lVar2 = lVar1;
      func_0x000107c614f0();
      (**(code **)(lVar4 + 8))(param_2,param_3,lVar2,lVar4);
      func_0x000107c6142c(param_3);
      func_0x000107c615e8(lVar1);
      return;
    }
  }
  func_0x000107c6142c(param_3);
  return;
}



/* Entry: 10294b440; end: 10294b44f;  */

undefined1  [16] FUN_10294b440(void)

{
  return ZEXT816(0x110570680);
}



/* Entry: 10294b450; end: 10294b54b;  */

void FUN_10294b450(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uStack_68;
  
  uVar4 = *param_2;
  func_0x0001000285a8(0x112ece9e0,&UNK_10daf48b8);
  puVar1 = &uStack_68;
  uStack_68 = uVar4;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_10294b654();
  func_0x000100082720("PlusDefaultTabTrayViewControllerServiceProvider",0x2f,2);
  puVar3 = puVar1;
  FUN_10294b54c(puVar1,puVar2);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar1);
  func_0x000100082720("PlusDefaultTabTrayViewControllerEntryPointProvider",0x32,2);
  *param_1 = (long)puVar3;
  return;
}



/* Entry: 10294b54c; end: 10294b653;  */

void FUN_10294b54c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e9c1f8,&UNK_10daaa000);
  puVar1 = &UNK_110570750;
  func_0x000107c613fc(&UNK_110570750,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x10294b5cc,puVar1);
  return;
}



/* Entry: 10294b654; end: 10294b9bb;  */

void FUN_10294b654(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ece9e8,&UNK_10daf48c8);
  puVar1 = &UNK_110570778;
  func_0x000107c613fc(&UNK_110570778,0x58,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x0001000823a8(0x10294b758,puVar1);
  return;
}



/* Entry: 10294b9bc; end: 10294ba13;  */

void FUN_10294b9bc(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "PlusDefaultTabTrayImplementation/PlusDefaultTabTrayViewController.swift",0x47
                      ,2,0x49,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10294ba14);
  (*pcVar1)();
}



/* Entry: 10294ba14; end: 10294be5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10294ba14(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  long lVar14;
  undefined *puVar15;
  long unaff_x20;
  undefined8 uVar16;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112ecea00);
  func_0x000107c5dbd4();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    if (lVar1 != 0) {
      lVar2 = *(long *)(*(long *)(unaff_x20 + _DAT_112ecea28) + _DAT_113083898);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar2 != 0) {
        lVar3 = *(long *)(unaff_x20 + _DAT_112ecea08);
        func_0x000107c3dae4();
        func_0x000107c61180();
        lVar4 = lVar3;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(lVar3);
        if (lVar4 != 0) {
          puVar5 = PTR_PTR_1126b33f0;
          func_0x000107c610f8();
          func_0x000107c4842c();
          lVar3 = unaff_x20;
          func_0x000106c733fc();
          func_0x000107c61180();
          uVar6 = 0;
          func_0x00010439c014(0);
          func_0x000107c610f8();
          uVar7 = 0x51;
          func_0x00010439b9d8(uVar6,0x51,0,0,0xffffffffffffffff,0,0,0x17,0);
          uVar6 = uVar7;
          func_0x000106c68d1c();
          func_0x000107c61180();
          puVar8 = PTR_PTR_1126b35c8;
          func_0x000107c610f8();
          func_0x000107c48f74();
          uVar16 = *(undefined8 *)(unaff_x20 + _DAT_112ecea18);
          puVar9 = &UNK_1105707a0;
          func_0x000107c613fc(&UNK_1105707a0,0x18,7);
          *(undefined8 *)(puVar9 + 0x10) = uVar16;
          puVar10 = &UNK_1105707c8;
          func_0x000107c613fc(&UNK_1105707c8,0x20,7);
          *(undefined8 *)(puVar10 + 0x10) = uVar16;
          *(long *)(puVar10 + 0x18) = lVar3;
          puVar11 = PTR_PTR_1126b3690;
          func_0x000107c610f8();
          puVar15 = PTR___NSConcreteStackBlock_11034bd00;
          pcStack_88 = FUN_10294be5c;
          puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_a0 = 0x42000000;
          pcStack_98 = FUN_10290743c;
          puStack_90 = &UNK_1105707e0;
          ppuVar12 = &puStack_a8;
          puStack_80 = puVar9;
          func_0x000107c60bc4(ppuVar12);
          uStack_b8 = 0x10294bf28;
          puStack_d8 = puVar15;
          uStack_d0 = 0x42000000;
          pcStack_c8 = FUN_1029074c8;
          puStack_c0 = &UNK_110570808;
          ppuVar13 = &puStack_d8;
          puStack_b0 = puVar10;
          func_0x000107c60bc4(ppuVar13);
          func_0x000107c61174(uVar16);
          func_0x000107c61174();
          func_0x000107c615f0(lVar3);
          func_0x000107c46b54();
          func_0x000107c60bd0(ppuVar13);
          func_0x000107c60bd0(ppuVar12);
          func_0x000107c61574(puStack_b0);
          func_0x000107c61574(puStack_80);
          puVar9 = PTR_PTR_1126b34d8;
          func_0x000107c610f8(PTR_PTR_1126b34d8);
          func_0x000107c47f90();
          puVar10 = PTR_PTR_1126aba30;
          func_0x000107c610f8(PTR_PTR_1126aba30);
          func_0x000107c47a20();
          lVar14 = lVar4;
          func_0x000107c4c1e0(lVar4);
          func_0x000107c61180();
          func_0x000107c52604(puVar10);
          func_0x000107c615e8(lVar14);
          puVar15 = PTR_PTR_1126aba38;
          func_0x000107c610f8(PTR_PTR_1126aba38);
          func_0x000107c49520();
          func_0x000107c61174();
          func_0x000107c561c0();
          func_0x000107c61170(puVar5);
          func_0x000107c615e8(lVar4);
          func_0x000107c61170(puVar10);
          func_0x000107c61170(puVar9);
          func_0x000107c61170(uVar6);
          func_0x000107c61170(puVar11);
          func_0x000107c61170(puVar8);
          func_0x000107c61170(uVar7);
          func_0x000107c615e8(lVar3);
          func_0x000107c615e8(lVar2);
          func_0x000107c615e8(lVar1);
          uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112ece9f0);
          *(undefined **)(unaff_x20 + _DAT_112ece9f0) = puVar5;
          func_0x000107c61170(uVar6);
          return puVar15;
        }
        func_0x000107c615e8(lVar1);
        lVar1 = lVar2;
      }
      func_0x000107c615e8(lVar1);
    }
  }
  return (undefined *)0x0;
}



/* Entry: 10294be5c; end: 10294bfab;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_10294be5c(code *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  long unaff_x20;
  
  uVar2 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c5d6f8();
  func_0x000107c61180();
  uVar1 = uVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x000107c442a0();
    func_0x000107c61180();
    func_0x000107c615e8(uVar1);
    if (uVar2 != 0) {
      uVar1 = uVar2;
      func_0x000107c5ee30(uVar2);
      func_0x000107c61170(uVar2);
      goto SUB_10006c090;
    }
    uVar1 = 0;
  }
  param_2 = 0xc000000000000000;
SUB_10006c090:
  uVar2 = uVar1;
  func_0x000107c5ee20(uVar1,param_2);
  (*param_1)();
  func_0x000107c61170(uVar2);
  uVar3 = (uint)(param_2 >> 0x3e);
  if (uVar3 == 1) {
    uVar1 = param_2 & 0x3fffffffffffffff;
  }
  else if (uVar3 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 10294bfac; end: 10294c007;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10294bfac(long param_1)

{
  long unaff_x20;
  
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & **(ulong **)(unaff_x20 + _DAT_112ece9f8)) +
              0x60))();
  if (param_1 != 0) {
    func_0x000107c41630();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 10294c008; end: 10294c0e7;  */

/* WARNING: Possible PIC construction at 0x00010294c01c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010294c03c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010294c05c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010294c07c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010294c09c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010294c080) */
/* WARNING: Removing unreachable block (ram,0x00010294c060) */
/* WARNING: Removing unreachable block (ram,0x00010294c040) */
/* WARNING: Removing unreachable block (ram,0x00010294c020) */
/* WARNING: Removing unreachable block (ram,0x00010294c0a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10294c008(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + _DAT_112ece9f8));
  return;
}



/* Entry: 10294c0e8; end: 10294c19f; -[_TtC32PlusDefaultTabTrayImplementation32PlusDefaultTabTrayViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010294c104: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010294c124: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010294c144: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010294c164: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010294c184: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010294c168) */
/* WARNING: Removing unreachable block (ram,0x00010294c148) */
/* WARNING: Removing unreachable block (ram,0x00010294c128) */
/* WARNING: Removing unreachable block (ram,0x00010294c108) */
/* WARNING: Removing unreachable block (ram,0x00010294c188) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10294c0e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ece9f8));
  return;
}



/* Entry: 10294c1a0; end: 10294c1db;  */

void FUN_10294c1a0(long param_1,long param_2)

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



/* Entry: 10294c1dc; end: 10294c1fb;  */

void FUN_10294c1dc(void)

{
  func_0x000107c61168(&PTR_PTR_112871d70);
  return;
}



/* Entry: 10294c1fc; end: 10294c203;  */

void FUN_10294c1fc(long param_1,long param_2)

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



/* Entry: 10294c204; end: 10294c2df;  */

/* WARNING: Possible PIC construction at 0x00010294c2a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010294c2b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010294c2ac) */
/* WARNING: Removing unreachable block (ram,0x00010294c2bc) */

void FUN_10294c204(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 uVar7;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
  puVar4 = &UNK_110570968;
  func_0x000107c613fc(&UNK_110570968,0x38,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  *(undefined8 *)(puVar4 + 0x20) = uVar5;
  *(undefined8 *)(puVar4 + 0x28) = uVar3;
  *(undefined8 *)(puVar4 + 0x30) = uVar7;
  uVar5 = 0x112ecea70;
  func_0x0001000285a8(0x112ecea70,&UNK_10daf49e8);
  func_0x000107c613fc();
  pcVar6 = FUN_10294c334;
  func_0x0001000841fc(FUN_10294c334,puVar4,uVar5);
  func_0x000100084214(&UNK_10daf49b0,0x30,2);
  *param_1 = pcVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10294c2e0; end: 10294c2ef;  */

undefined1  [16] FUN_10294c2e0(void)

{
  return ZEXT816(0x110570948);
}



/* Entry: 10294c2f0; end: 10294c333;  */

void FUN_10294c2f0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10294c334; end: 10294c3eb;  */

void FUN_10294c334(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_58;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar7 = *param_2;
  func_0x0001000285a8(0x112ecea78,&UNK_10daf49f0);
  puVar4 = &uStack_58;
  uStack_58 = uVar7;
  func_0x0001000838ec(puVar4);
  FUN_10294c480(uVar5,uVar2,uVar1,uVar3,puVar4,uVar6);
  func_0x000107c61574(puVar4);
  func_0x000100082720("PlusFullscreenUpsellViewControllerEntryPointProvider",0x34,2);
  *param_1 = uVar5;
  return;
}



/* Entry: 10294c3ec; end: 10294c477;  */

void FUN_10294c3ec(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = 0x112e5e838;
  func_0x0001000285a8(0x112e5e838,&UNK_10da68a50);
  func_0x000107c610f8();
  uVar2 = uStack_38;
  func_0x00010017da58(uStack_38,uVar1);
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 10294c478; end: 10294c47f;  */

void FUN_10294c478(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = 0x112e5e838;
  func_0x0001000285a8(0x112e5e838,&UNK_10da68a50);
  func_0x000107c610f8();
  uVar2 = uStack_38;
  func_0x00010017da58(uStack_38,uVar1);
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 10294c480; end: 10294c547;  */

void FUN_10294c480(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e9c1f8,&UNK_10daaa000);
  puVar1 = &UNK_110570a10;
  func_0x000107c613fc(&UNK_110570a10,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x0001000823a8(FUN_10294c7e0,puVar1);
  return;
}



/* Entry: 10294c548; end: 10294c7df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10294c548(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  long lStack_70;
  long lStack_68;
  
  lVar3 = param_2;
  FUN_10294fc40();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined1 *)(lVar4 + _DAT_112ecea80) = 0;
  *(undefined1 *)(lVar4 + _DAT_112ecea88) = 0;
  *(undefined1 *)(lVar4 + _DAT_112ecea90) = 0;
  *(undefined1 *)(lVar4 + _DAT_112ecea98) = 0;
  lVar2 = _DAT_112eceaa0;
  puVar5 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61180();
  func_0x000107c5a050();
  func_0x000107c5a378(puVar5);
  func_0x000107c53840(puVar5);
  func_0x000107c61170(puVar5);
  *(undefined **)(lVar4 + lVar2) = puVar5;
  lVar2 = _DAT_112eceaa8;
  puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c5a050();
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c52b50(puVar5);
  func_0x000107c61170(puVar6);
  func_0x000107c526c0(0x3feb333333333333,puVar5);
  func_0x000107c5a378(puVar5);
  *(undefined **)(lVar4 + lVar2) = puVar5;
  *(undefined8 *)(lVar4 + _DAT_112eceab0) = 0;
  *(undefined8 *)(lVar4 + _DAT_112eceab8) = 0;
  *(undefined8 *)(lVar4 + _DAT_112eceac0) = 0;
  *(undefined8 *)(lVar4 + _DAT_112eceac8) = 0;
  *(undefined8 *)(lVar4 + _DAT_112ecead0) = 0;
  *(undefined8 *)(lVar4 + _DAT_112ecead8) = 0;
  *(undefined8 *)(lVar4 + _DAT_112eceae0) = 0;
  *(undefined8 *)(lVar4 + _DAT_112eceae8) = 0;
  *(undefined8 *)(lVar4 + _DAT_112eceaf0) = 0;
  *(undefined8 *)(lVar4 + _DAT_112eceaf8) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112eceb00);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  *(long *)(lVar4 + _DAT_112eceb08) = param_2;
  *(undefined8 *)(lVar4 + _DAT_112eceb10) = param_3;
  *(undefined8 *)(lVar4 + _DAT_112eceb18) = param_4;
  *(undefined8 *)(lVar4 + _DAT_112eceb20) = param_5;
  *(undefined8 *)(lVar4 + _DAT_112eceb28) = param_6;
  *(undefined8 *)(lVar4 + _DAT_112eceb30) = param_7;
  puVar5 = PTR_s_initWithNibName_bundle__1125e9850;
  lStack_70 = lVar4;
  lStack_68 = lVar3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  plVar7 = &lStack_70;
  func_0x000107c61154(plVar7,puVar5,0,0);
  *param_1 = (long)plVar7;
  return;
}



/* Entry: 10294c7e0; end: 10294c7ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10294c7e0(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  long *plVar13;
  long unaff_x20;
  long lStack_70;
  long lStack_68;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x38);
  lVar9 = lVar2;
  FUN_10294fc40();
  lVar10 = lVar9;
  func_0x000107c610f8();
  *(undefined1 *)(lVar10 + _DAT_112ecea80) = 0;
  *(undefined1 *)(lVar10 + _DAT_112ecea88) = 0;
  *(undefined1 *)(lVar10 + _DAT_112ecea90) = 0;
  *(undefined1 *)(lVar10 + _DAT_112ecea98) = 0;
  lVar8 = _DAT_112eceaa0;
  puVar11 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61180();
  func_0x000107c5a050();
  func_0x000107c5a378(puVar11);
  func_0x000107c53840(puVar11);
  func_0x000107c61170(puVar11);
  *(undefined **)(lVar10 + lVar8) = puVar11;
  lVar8 = _DAT_112eceaa8;
  puVar11 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c5a050();
  puVar12 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c52b50(puVar11);
  func_0x000107c61170(puVar12);
  func_0x000107c526c0(0x3feb333333333333,puVar11);
  func_0x000107c5a378(puVar11);
  *(undefined **)(lVar10 + lVar8) = puVar11;
  *(undefined8 *)(lVar10 + _DAT_112eceab0) = 0;
  *(undefined8 *)(lVar10 + _DAT_112eceab8) = 0;
  *(undefined8 *)(lVar10 + _DAT_112eceac0) = 0;
  *(undefined8 *)(lVar10 + _DAT_112eceac8) = 0;
  *(undefined8 *)(lVar10 + _DAT_112ecead0) = 0;
  *(undefined8 *)(lVar10 + _DAT_112ecead8) = 0;
  *(undefined8 *)(lVar10 + _DAT_112eceae0) = 0;
  *(undefined8 *)(lVar10 + _DAT_112eceae8) = 0;
  *(undefined8 *)(lVar10 + _DAT_112eceaf0) = 0;
  *(undefined8 *)(lVar10 + _DAT_112eceaf8) = 0;
  puVar1 = (undefined8 *)(lVar10 + _DAT_112eceb00);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  *(long *)(lVar10 + _DAT_112eceb08) = lVar2;
  *(undefined8 *)(lVar10 + _DAT_112eceb10) = uVar5;
  *(undefined8 *)(lVar10 + _DAT_112eceb18) = uVar3;
  *(undefined8 *)(lVar10 + _DAT_112eceb20) = uVar6;
  *(undefined8 *)(lVar10 + _DAT_112eceb28) = uVar4;
  *(undefined8 *)(lVar10 + _DAT_112eceb30) = uVar7;
  puVar11 = PTR_s_initWithNibName_bundle__1125e9850;
  lStack_70 = lVar10;
  lStack_68 = lVar9;
  func_0x000107c6157c(lVar2);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar7);
  plVar13 = &lStack_70;
  func_0x000107c61154(plVar13,puVar11,0,0);
  *param_1 = (long)plVar13;
  return;
}



/* Entry: 10294c7f0; end: 10294ca47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10294c7f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_112ecea80) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112ecea88) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112ecea90) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112ecea98) = 0;
  lVar2 = _DAT_112eceaa0;
  puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61180();
  func_0x000107c5a050();
  func_0x000107c5a378(puVar3);
  func_0x000107c53840(puVar3);
  func_0x000107c61170(puVar3);
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  lVar2 = _DAT_112eceaa8;
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c5a050();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c52b50(puVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c526c0(0x3feb333333333333,puVar3);
  func_0x000107c5a378(puVar3);
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112eceab0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eceab8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eceac0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eceac8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ecead0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ecead8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eceae0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eceae8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eceaf0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eceaf8) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eceb00);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112eceb08) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112eceb10) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112eceb18) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112eceb20) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112eceb28) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112eceb30) = param_6;
  func_0x000107c61154(auStack_70,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  return;
}



/* Entry: 10294ca48; end: 10294ca6f;  */

void FUN_10294ca48(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___CIContext_1126b3120;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puRam0000000112eceb68 = puVar1;
  return;
}



/* Entry: 10294ca70; end: 10294caf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10294ca70(void)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x000107c614f0();
  func_0x000100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c4ffe8(uStack_38);
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  func_0x000107c615e8(uVar1);
  func_0x000107c61154(&stack0xffffffffffffffb8,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10294caf8; end: 10294cb87; -[_TtC24PlusFullscreenUpsellImpl34PlusFullscreenUpsellViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10294caf8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c4ffe8(uStack_38);
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  func_0x000107c615e8(uVar2);
  uStack_48 = param_1;
  uStack_40 = uVar1;
  func_0x000107c61154(&uStack_48,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10294cb88; end: 10294cd13; -[_TtC24PlusFullscreenUpsellImpl34PlusFullscreenUpsellViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010294cc04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010294cc24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010294cc44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010294cc64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010294cc84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010294cca4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010294cc88) */
/* WARNING: Removing unreachable block (ram,0x00010294cc68) */
/* WARNING: Removing unreachable block (ram,0x00010294cc48) */
/* WARNING: Removing unreachable block (ram,0x00010294cc28) */
/* WARNING: Removing unreachable block (ram,0x00010294cc08) */
/* WARNING: Removing unreachable block (ram,0x00010294cca8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10294cb88(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eceb28));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eceb18));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eceb20));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eceb30));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eceb10));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eceb08));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eceaa0));
  return;
}



/* Entry: 10294cd14; end: 10294cf17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10294cd14(void)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined8 uVar6;
  long lStack_48;
  
  if ((*(byte *)(unaff_x20 + _DAT_112ecea90) & 1) == 0) {
    *(undefined1 *)(unaff_x20 + _DAT_112ecea90) = 1;
    puVar3 = PTR_PTR_1126aead8;
    func_0x000107c610f8(PTR_PTR_1126aead8);
    func_0x000107c4807c();
    func_0x000100083b20(&lStack_48);
    lVar5 = *(long *)(lStack_48 + _DAT_112fb0738);
    func_0x000107c61170();
    func_0x000107c61174(puVar3);
    func_0x000100083b20(&lStack_48);
    uVar6 = *(undefined8 *)(lStack_48 + _DAT_112fb0730);
    func_0x000107c61170();
    func_0x000100083b20(&lStack_48);
    lVar1 = lStack_48;
    if (lVar5 != 0) {
      lStack_48 = lVar5;
      func_0x000107c61174(puVar3);
      func_0x000107c60614(&UNK_1106ae070,&lStack_48,&UNK_1106ae070,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10294cf18);
      (*pcVar2)();
    }
    func_0x00010439c014(0);
    func_0x000107c610f8();
    func_0x000107c61174(puVar3);
    uVar4 = 0x8a;
    func_0x00010439b9d8(0x8a,0,0,uVar6,0x4445525554414546,0xee0059524f54535f,0x3d,0);
    uVar6 = 0;
    func_0x00010439a550(0);
    func_0x000104399a00();
    lVar5 = lVar1;
    func_0x000107c3eda8(lVar1);
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar6);
    func_0x000100083b20(&lStack_48);
    func_0x000107c42c1c(lStack_48);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lStack_48);
  }
  return;
}



/* Entry: 10294cf18; end: 10294d057;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10294cf18(long *param_1,code *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lStack_58;
  
  lVar6 = *param_1;
  lVar2 = *(long *)(unaff_x20 + lVar6);
  lVar4 = lVar2;
  if (lVar2 == 0) {
    pcVar1 = param_2;
    func_0x000100083b20(&lStack_58);
    lVar4 = *(long *)(lStack_58 + _DAT_112fb0738);
    func_0x000107c61170();
    if (lVar4 != 0) {
      lStack_58 = lVar4;
      func_0x000107c60614(&UNK_1106ae070,&lStack_58,&UNK_1106ae070,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10294d058);
      (*pcVar1)();
    }
    lVar4 = lStack_58;
    (*param_2)();
    puVar3 = &UNK_110570a38;
    func_0x000107c613fc(&UNK_110570a38,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    func_0x000107c6157c(puVar3);
    FUN_10294fc60(lVar4,pcVar1,param_3,param_4,puVar3);
    func_0x000107c6142c(pcVar1);
    func_0x000107c61578(puVar3,2);
    uVar5 = *(undefined8 *)(unaff_x20 + lVar6);
    *(long *)(unaff_x20 + lVar6) = lVar4;
    func_0x000107c61174(lVar4);
    func_0x000107c61170(uVar5);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar4;
}



/* Entry: 10294d058; end: 10294d1c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10294d058(long param_1)

{
  long lVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  ppuVar5 = &puStack_a0;
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000100083b20(&puStack_a0);
    puVar6 = puStack_a0;
    lVar1 = _DAT_112fb0740;
    func_0x000107c61428(puStack_a0 + _DAT_112fb0740,auStack_70,0,0);
    puVar2 = puStack_a0 + lVar1;
    func_0x000107c61618();
    FUN_10294ecb0(1);
    pcVar3 = "dismissUpsell(dismissAction:)";
    func_0x0001000c10c0("dismissUpsell(dismissAction:)");
    func_0x000107c61180();
    puVar4 = &UNK_110570d20;
    func_0x000107c613fc(&UNK_110570d20,0x20,7);
    *(undefined **)(puVar4 + 0x10) = puStack_a0;
    *(undefined **)(puVar4 + 0x18) = puVar2;
    uStack_80 = 0x10295069c;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_1000f6b44;
    puStack_88 = &UNK_110570d38;
    puStack_78 = puVar4;
    func_0x000107c60bc4(&puStack_a0);
    puVar4 = puStack_78;
    func_0x000107c61174(puVar6);
    func_0x000107c615f0(puVar2);
    func_0x000107c61574(puVar4);
    func_0x000107c4e524(pcVar3);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(param_1);
    func_0x000107c61170(puVar6);
    func_0x000107c615e8(puVar2);
    func_0x000107c615e8(pcVar3);
  }
  return;
}



/* Entry: 10294d1c8; end: 10294d363;  */

undefined * FUN_10294d1c8(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = 0x112d360b0;
  FUN_10294fb80(0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20,0x112d36e80,&UNK_10d904c70);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 5;
  *(undefined8 *)(lVar1 + 0x10) = 2;
  puVar2 = &DAT_112eceab0;
  FUN_10294cf18(&DAT_112eceab0,FUN_1029506a4,0,0x1029505e0);
  *(undefined **)(lVar1 + 0x20) = puVar2;
  puVar2 = &DAT_112eceab8;
  FUN_10294cf18(&DAT_112eceab8,0x102950770,1,FUN_102950628);
  *(undefined **)(lVar1 + 0x28) = puVar2;
  puVar2 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIStackView_1126aefe8);
  uVar3 = 0;
  FUN_1029505e8(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
  lVar4 = lVar1;
  func_0x000107c5fc48(lVar1,uVar3);
  func_0x000107c61574(lVar1);
  func_0x000107c45784(puVar2);
  func_0x000107c61170(lVar4);
  func_0x000107c5a050(puVar2);
  func_0x000107c52b2c(puVar2);
  func_0x000107c59594(0x4028000000000000,puVar2);
  return puVar2;
}



/* Entry: 10294d364; end: 10294d4df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10294d364(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = 0x112d360b0;
  FUN_10294fb80(0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20,0x112d36e80,&UNK_10d904c70);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 7;
  *(undefined8 *)(lVar1 + 0x10) = 3;
  puVar2 = &DAT_112eceac8;
  func_0x00010294d304(&DAT_112eceac8,FUN_10294fe2c);
  *(undefined **)(lVar1 + 0x20) = puVar2;
  puVar2 = &DAT_112ecead0;
  func_0x00010294d304(&DAT_112ecead0,0x10294ff64);
  *(undefined **)(lVar1 + 0x28) = puVar2;
  puVar2 = &DAT_112eceac0;
  func_0x00010294d304(&DAT_112eceac0,0x10294d1c8);
  *(undefined **)(lVar1 + 0x30) = puVar2;
  puVar2 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIStackView_1126aefe8);
  uVar3 = 0;
  FUN_1029505e8(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
  lVar4 = lVar1;
  func_0x000107c5fc48(lVar1,uVar3);
  func_0x000107c61574(lVar1);
  func_0x000107c45784(puVar2);
  func_0x000107c61170(lVar4);
  func_0x000107c5a050(puVar2);
  func_0x000107c52b2c(puVar2);
  func_0x000107c52610(puVar2);
  func_0x000107c53d1c(0x4028000000000000,puVar2);
  func_0x000107c53d1c(0x4034000000000000,puVar2);
  return puVar2;
}



/* Entry: 10294d4e0; end: 10294d6a3;  */

undefined * FUN_10294d4e0(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *param_1;
  puVar1 = *(undefined **)(unaff_x20 + lVar4);
  puVar2 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c5a050();
    func_0x000107c5a378(puVar2,param_2,0);
    uVar3 = *(undefined8 *)(unaff_x20 + lVar4);
    *(undefined **)(unaff_x20 + lVar4) = puVar2;
    func_0x000107c61174(puVar2);
    func_0x000107c61170(uVar3);
    puVar1 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar1);
  return puVar2;
}



/* Entry: 10294d6a4; end: 10294df5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10294d6a4(void)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_68;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_viewDidLoad_112684cd8);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10294df18);
    (*pcVar1)();
  }
  func_0x000107c56f90();
  func_0x000107c61170(lVar2);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10294df1c);
    (*pcVar1)();
  }
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c3fa94();
  func_0x000107c61180();
  func_0x000107c52b50(lVar2);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(puVar3);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10294df20);
    (*pcVar1)();
  }
  lVar4 = lVar2;
  func_0x00010294d564();
  func_0x000107c3d6fc(lVar2);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar4);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10294df24);
    (*pcVar1)();
  }
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112eceaa0);
  func_0x000107c3d89c();
  func_0x000107c61170(lVar2);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10294df28);
    (*pcVar1)();
  }
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112eceaa8);
  func_0x000107c3d89c();
  func_0x000107c61170(lVar2);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10294df2c);
    (*pcVar1)();
  }
  puVar3 = &DAT_112ecead8;
  func_0x00010294d304(&DAT_112ecead8,FUN_10294d364);
  func_0x000107c3d89c(lVar2);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(puVar3);
  lVar2 = 0x112d360b8;
  FUN_10294fb80(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                &UNK_10d9011a0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 0x19;
  *(undefined8 *)(lVar2 + 0x10) = 0xc;
  uVar5 = uVar10;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  lVar4 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10294df30);
    (*pcVar1)();
  }
  lVar6 = lVar4;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  uVar7 = uVar5;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(lVar6);
  *(undefined8 *)(lVar2 + 0x20) = uVar7;
  uVar5 = uVar10;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  lVar4 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10294df34);
    (*pcVar1)();
  }
  lVar6 = lVar4;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  uVar7 = uVar5;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(lVar6);
  *(undefined8 *)(lVar2 + 0x28) = uVar7;
  uVar5 = uVar10;
  func_0x000107c4acb0();
  func_0x000107c61180();
  lVar4 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10294df38);
    (*pcVar1)();
  }
  lVar6 = lVar4;
  func_0x000107c4acb0();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  uVar7 = uVar5;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(lVar6);
  *(undefined8 *)(lVar2 + 0x30) = uVar7;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  lVar4 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10294df3c);
    (*pcVar1)();
  }
  lVar6 = lVar4;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  uVar5 = uVar10;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar10);
  func_0x000107c61170(lVar6);
  *(undefined8 *)(lVar2 + 0x38) = uVar5;
  uVar10 = uVar9;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  lVar4 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10294df40);
    (*pcVar1)();
  }
  lVar6 = lVar4;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  uVar5 = uVar10;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar10);
  func_0x000107c61170(lVar6);
  *(undefined8 *)(lVar2 + 0x40) = uVar5;
  uVar10 = uVar9;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  lVar4 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10294df44);
    (*pcVar1)();
  }
  lVar6 = lVar4;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  uVar5 = uVar10;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar10);
  func_0x000107c61170(lVar6);
  *(undefined8 *)(lVar2 + 0x48) = uVar5;
  uVar10 = uVar9;
  func_0x000107c4acb0();
  func_0x000107c61180();
  lVar4 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10294df48);
    (*pcVar1)();
  }
  lVar6 = lVar4;
  func_0x000107c4acb0();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  uVar5 = uVar10;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar10);
  func_0x000107c61170(lVar6);
  *(undefined8 *)(lVar2 + 0x50) = uVar5;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  lVar4 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10294df4c);
    (*pcVar1)();
  }
  lVar6 = lVar4;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  uVar10 = uVar9;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  func_0x000107c61170(lVar6);
  *(undefined8 *)(lVar2 + 0x58) = uVar10;
  lVar4 = _DAT_112ecead8;
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112ecead8);
  func_0x000107c3f75c();
  func_0x000107c61180();
  lVar6 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10294df50);
    (*pcVar1)();
  }
  lVar8 = lVar6;
  func_0x000107c3f75c();
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  uVar9 = uVar10;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar10);
  func_0x000107c61170(lVar8);
  *(undefined8 *)(lVar2 + 0x60) = uVar9;
  uVar10 = *(undefined8 *)(unaff_x20 + lVar4);
  func_0x000107c3f764();
  func_0x000107c61180();
  lVar6 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar6 != 0) {
    lVar8 = lVar6;
    func_0x000107c3f764();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    uVar9 = uVar10;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar10);
    func_0x000107c61170(lVar8);
    *(undefined8 *)(lVar2 + 0x68) = uVar9;
    uVar10 = *(undefined8 *)(unaff_x20 + lVar4);
    func_0x000107c4acb0();
    func_0x000107c61180();
    lVar6 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10294df58);
      (*pcVar1)();
    }
    lVar8 = lVar6;
    func_0x000107c515ac();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    lVar6 = lVar8;
    func_0x000107c4acb0(lVar8);
    func_0x000107c61180();
    func_0x000107c61170(lVar8);
    uVar9 = uVar10;
    func_0x000107c40284(0x4045800000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar10);
    func_0x000107c61170(lVar6);
    *(undefined8 *)(lVar2 + 0x70) = uVar9;
    uVar10 = *(undefined8 *)(unaff_x20 + lVar4);
    func_0x000107c5ce8c();
    func_0x000107c61180();
    func_0x000107c5de64();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar4 = unaff_x20;
      func_0x000107c515ac(unaff_x20);
      func_0x000107c61180();
      func_0x000107c61170(unaff_x20);
      lVar6 = lVar4;
      func_0x000107c5ce8c(lVar4);
      func_0x000107c61180();
      func_0x000107c61170(lVar4);
      uVar9 = uVar10;
      func_0x000107c40284(0xc045800000000000);
      func_0x000107c61180();
      func_0x000107c61170(uVar10);
      func_0x000107c61170(lVar6);
      *(undefined8 *)(lVar2 + 0x78) = uVar9;
      uVar10 = 0;
      FUN_1029505e8(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar4 = lVar2;
      func_0x000107c5fc48(lVar2,uVar10);
      func_0x000107c61574(lVar2);
      func_0x000107c3d048(puVar3);
      func_0x000107c61170(lVar4);
      func_0x000100083b20(&uStack_68);
      uVar9 = 0xd00000000000002e;
      func_0x000107c5fadc(0xd00000000000002e,0x800000010f0ce070);
      uVar10 = uStack_68;
      func_0x000107c3ebd4();
      func_0x000107c615e8(uStack_68);
      func_0x000107c61170(uVar9);
      if ((int)uVar10 != 0) {
        FUN_10294df5c();
      }
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10294df5c);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10294df54);
  (*pcVar1)();
}



/* Entry: 10294df5c; end: 10294e4f3;  */

/* WARNING: Possible PIC construction at 0x00010294dfa8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010294dfec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010294e030: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010294e0d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010294e0f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010294e118: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010294e174: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010294e198: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010294e1e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010294e204: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010294e22c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010294e27c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010294e298: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010294e2bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010294e324: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010294e384: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010294e3a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010294e3c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010294e41c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010294e470: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010294e420) */
/* WARNING: Removing unreachable block (ram,0x00010294e3cc) */
/* WARNING: Removing unreachable block (ram,0x00010294e3a4) */
/* WARNING: Removing unreachable block (ram,0x00010294e388) */
/* WARNING: Removing unreachable block (ram,0x00010294e328) */
/* WARNING: Removing unreachable block (ram,0x00010294e4f0) */
/* WARNING: Removing unreachable block (ram,0x00010294e35c) */
/* WARNING: Removing unreachable block (ram,0x00010294e2c0) */
/* WARNING: Removing unreachable block (ram,0x00010294e29c) */
/* WARNING: Removing unreachable block (ram,0x00010294e280) */
/* WARNING: Removing unreachable block (ram,0x00010294e230) */
/* WARNING: Removing unreachable block (ram,0x00010294e4ec) */
/* WARNING: Removing unreachable block (ram,0x00010294e264) */
/* WARNING: Removing unreachable block (ram,0x00010294e208) */
/* WARNING: Removing unreachable block (ram,0x00010294e1ec) */
/* WARNING: Removing unreachable block (ram,0x00010294e19c) */
/* WARNING: Removing unreachable block (ram,0x00010294e4e8) */
/* WARNING: Removing unreachable block (ram,0x00010294e1d0) */
/* WARNING: Removing unreachable block (ram,0x00010294e178) */
/* WARNING: Removing unreachable block (ram,0x00010294e11c) */
/* WARNING: Removing unreachable block (ram,0x00010294e0f8) */
/* WARNING: Removing unreachable block (ram,0x00010294e0dc) */
/* WARNING: Removing unreachable block (ram,0x00010294e034) */
/* WARNING: Removing unreachable block (ram,0x00010294e4e4) */
/* WARNING: Removing unreachable block (ram,0x00010294e0c0) */
/* WARNING: Removing unreachable block (ram,0x00010294dff0) */
/* WARNING: Removing unreachable block (ram,0x00010294e4e0) */
/* WARNING: Removing unreachable block (ram,0x00010294e00c) */
/* WARNING: Removing unreachable block (ram,0x00010294dfac) */
/* WARNING: Removing unreachable block (ram,0x00010294e4dc) */
/* WARNING: Removing unreachable block (ram,0x00010294dfc8) */
/* WARNING: Removing unreachable block (ram,0x00010294e474) */

void FUN_10294df5c(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  
  func_0x000107c5de64();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar2 = unaff_x20;
    func_0x00010294d60c();
    func_0x000107c3d6fc(unaff_x20,param_2,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10294e4dc);
  (*pcVar1)();
}


