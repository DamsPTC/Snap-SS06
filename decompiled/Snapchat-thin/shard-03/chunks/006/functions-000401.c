/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102a79ef0; end: 102a79f7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a79ef0(undefined8 param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined **)(unaff_x20 + _DAT_112ee6d58) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  *(undefined8 *)(unaff_x20 + _DAT_112ee6d60) = 0x40f5180000000000;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ee6d68);
  *puVar1 = 0x534e454c;
  puVar1[1] = 0xe400000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_112ee6d70) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102a79f80; end: 102a7a01b; -[_TtC19ShoppingLensFetcher34ShoppingLensARAssetDataCoordinator initWithAssetDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a79f80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_30;
  long lStack_28;
  
  lVar3 = param_1;
  func_0x000107c614f0();
  *(undefined **)(param_1 + _DAT_112ee6d58) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  *(undefined8 *)(param_1 + _DAT_112ee6d60) = 0x40f5180000000000;
  puVar1 = (undefined8 *)(param_1 + _DAT_112ee6d68);
  *puVar1 = 0x534e454c;
  puVar1[1] = 0xe400000000000000;
  *(undefined8 *)(param_1 + _DAT_112ee6d70) = param_3;
  puVar2 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar3;
  func_0x000107c615f0(param_3);
  func_0x000107c61154(&lStack_30,puVar2);
  return;
}



/* Entry: 102a7a01c; end: 102a7a73b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a7a01c(long param_1,code *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long extraout_x8;
  long extraout_x8_00;
  long lVar14;
  long extraout_x8_01;
  undefined8 *puVar15;
  long extraout_x8_02;
  long lVar16;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x13;
  long extraout_x13_00;
  long unaff_x20;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  long alStack_170 [6];
  code *pcStack_140;
  long lStack_138;
  ulong uStack_130;
  ulong uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  undefined8 *puStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [32];
  
  lVar3 = 0;
  alStack_170[5] = param_3;
  pcStack_140 = param_2;
  func_0x000107c5f804();
  alStack_170[3] = *(long *)(lVar3 + -8);
  alStack_170[4] = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(alStack_170[3] + 0x40));
  lVar14 = (long)alStack_170 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  alStack_170[2] = lVar14;
  func_0x000107c5f7fc();
  alStack_170[0] = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar14 = lVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x112d36580;
  alStack_170[1] = lVar14;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar15 = (undefined8 *)(lVar14 - extraout_x8_01);
  lVar4 = 0;
  puStack_100 = puVar15;
  func_0x000107c5ede0();
  lVar17 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar17 + 0x40));
  lVar16 = (long)puVar15 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  lStack_118 = lVar16;
  FUN_102aabc7c();
  lVar18 = *(long *)(lVar3 + -8);
  lStack_f0 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar16 = lVar16 - (extraout_x13 + 0xfU & 0xfffffffffffffff0);
  lStack_110 = lVar16;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar16 = lVar16 - extraout_x12;
  lStack_108 = extraout_x13_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_f8 = lVar16 - extraout_x12_00;
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001830b8();
  lVar3 = _DAT_112ee6d58;
  func_0x000107c61428(unaff_x20 + _DAT_112ee6d58,auStack_90,1,0);
  uVar6 = *(undefined8 *)(unaff_x20 + lVar3);
  *(undefined **)(unaff_x20 + lVar3) = puVar5;
  func_0x000107c6142c();
  func_0x000107c60f34();
  lVar14 = lStack_118;
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 != 0) {
    uStack_120 = *(undefined8 *)(unaff_x20 + _DAT_112ee6d70);
    uStack_128 = (ulong)*(byte *)(lVar18 + 0x50);
    uStack_130 = uStack_128 + 0x20 & (uStack_128 ^ 0xffffffffffffffff);
    param_1 = param_1 + uStack_130;
    lStack_138 = *(long *)(lVar18 + 0x48);
    do {
      lVar18 = lStack_f8;
      FUN_102a5c6f0(param_1,lStack_f8);
      func_0x000102a5d690(lVar18,lVar16);
      puVar15 = (undefined8 *)(lVar16 + *(int *)(lStack_f0 + 0x30));
      puVar13 = (undefined8 *)puVar15[2];
      puVar7 = (undefined8 *)puVar15[3];
      puVar19 = (undefined8 *)puVar15[4];
      puVar1 = (undefined8 *)puVar15[5];
      func_0x000102a776f4();
      if (((int)puVar15 == 1) ||
         ((((puVar1 < (undefined8 *)0x2 ||
            (puVar19 == (undefined8 *)0x0 && puVar1 == (undefined8 *)0xe000000000000000)) ||
           (puVar15 = puVar19, func_0x000107c605b8(puVar19,puVar1,0,0xe000000000000000,0),
           ((ulong)puVar15 & 1) != 0)) &&
          (puVar19 = puVar13, puVar1 = puVar7, puVar7 == (undefined8 *)0x0)))) {
LAB_102a7a66c:
        pcVar11 = pcStack_140;
        if (pcStack_140 == (code *)0x0) goto LAB_102a7a6fc;
        FUN_102a7b6f4();
        puVar5 = &UNK_11058f798;
        func_0x000107c613f8(&UNK_11058f798,puVar15,0,0);
        *puVar15 = 0;
        puVar15[1] = 0;
LAB_102a7a6e8:
        (*pcVar11)();
        func_0x000107c614ac(puVar5);
LAB_102a7a6fc:
        func_0x000107c61170(uVar6);
        func_0x000102a5d654(lVar16);
        return;
      }
      puVar15 = puVar1;
      func_0x000107c61434(puVar15);
      puVar7 = puVar19;
      func_0x000107c5fb5c(puVar19,puVar15);
      puVar13 = puStack_100;
      if ((long)puVar7 < 1) {
        func_0x000107c6142c();
        goto LAB_102a7a66c;
      }
      func_0x000107c5edd0(puStack_100,puVar19,puVar15);
      puVar7 = puVar13;
      (**(code **)(lVar17 + 0x30))(puVar13,1,lVar4);
      if ((int)puVar7 == 1) {
        func_0x000102a7ba24(puVar13,0x112d36580,&UNK_10d9016d0);
        pcVar11 = pcStack_140;
        if (pcStack_140 == (code *)0x0) {
          func_0x000107c6142c(puVar15);
          goto LAB_102a7a6fc;
        }
        FUN_102a7b6f4();
        puVar5 = &UNK_11058f798;
        func_0x000107c613f8(&UNK_11058f798,puVar13,0,0);
        *puVar13 = puVar19;
        puVar13[1] = puVar15;
        goto LAB_102a7a6e8;
      }
      func_0x000107c6142c(puVar15);
      (**(code **)(lVar17 + 0x20))(lVar14,puVar13,lVar4);
      uVar8 = uVar6;
      func_0x000107c60f38();
      func_0x000107c5ed90();
      puVar5 = &UNK_11058f640;
      func_0x000107c613fc(&UNK_11058f640,0x18,7);
      func_0x000107c61614(puVar5 + 0x10,unaff_x20);
      lVar18 = lStack_110;
      FUN_102a5c6f0(lVar16,lStack_110);
      uVar2 = uStack_130;
      puVar9 = &UNK_11058f668;
      func_0x000107c613fc(&UNK_11058f668,uStack_130 + lStack_108,uStack_128 | 7);
      *(undefined8 *)(puVar9 + 0x10) = uVar6;
      *(undefined **)(puVar9 + 0x18) = puVar5;
      func_0x000102a5d690(lVar18,puVar9 + uVar2);
      pcStack_a0 = FUN_102a7b734;
      puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b8 = 0x42000000;
      pcStack_b0 = FUN_102a79dec;
      puStack_a8 = &UNK_11058f680;
      ppuVar10 = &puStack_c0;
      puStack_98 = puVar9;
      func_0x000107c60bc4(ppuVar10);
      puVar5 = puStack_98;
      func_0x000107c61174(uVar6);
      func_0x000107c61574(puVar5);
      func_0x000107c42f84(0x40f5180000000000,uStack_120);
      func_0x000107c61180();
      func_0x000107c615e8();
      func_0x000107c60bd0(ppuVar10);
      func_0x000107c61170(uVar8);
      (**(code **)(lVar17 + 8))(lVar14,lVar4);
      func_0x000102a5d654(lVar16);
      param_1 = param_1 + lStack_138;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  puVar5 = &UNK_11058f6b8;
  func_0x000107c613fc(&UNK_11058f6b8,0x20,7);
  pcVar11 = pcStack_140;
  lVar3 = alStack_170[5];
  *(code **)(puVar5 + 0x10) = pcStack_140;
  *(long *)(puVar5 + 0x18) = alStack_170[5];
  pcStack_a0 = FUN_102a7b790;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0x42000000;
  pcStack_b0 = (code *)&UNK_1000f6b44;
  puStack_a8 = &UNK_11058f6d0;
  ppuVar10 = &puStack_c0;
  puStack_98 = puVar5;
  func_0x000107c60bc4(ppuVar10);
  puStack_c8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001013c2988(pcVar11,lVar3);
  func_0x0001001c7eec();
  uVar8 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar12 = uVar8;
  func_0x0001001c7f30();
  lVar3 = alStack_170[1];
  func_0x000107c60264(alStack_170[1],&puStack_c8,uVar8,uVar12,alStack_170[0],pcVar11);
  func_0x000107c5f850();
  func_0x000107c613fc();
  func_0x000107c5f844(lVar3,ppuVar10);
  func_0x000107c61574(puStack_98);
  FUN_102a7b9e4(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  lVar16 = alStack_170[4];
  lVar4 = alStack_170[3];
  lVar14 = alStack_170[2];
  (**(code **)(alStack_170[3] + 0x68))
            (alStack_170[2],
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_11034f7f0,
             alStack_170[4]);
  lVar17 = lVar14;
  func_0x000107c5fff0(lVar14);
  (**(code **)(lVar4 + 8))(lVar14,lVar16);
  func_0x000107c5ffbc(lVar17,lVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61574(lVar3);
  func_0x000107c61170(lVar17);
  return;
}



/* Entry: 102a7a73c; end: 102a7ab7b;  */

/* WARNING: Possible PIC construction at 0x000102a7ab30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a7ab34) */
/* WARNING: Removing unreachable block (ram,0x000102a7ab4c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_102a7a73c(undefined1 *param_1,undefined1 *param_2,long param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  code *pcVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 **ppuVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined1 *puVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auStack_128 [24];
  undefined1 *puStack_d0;
  undefined1 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a0;
  undefined1 *puStack_98;
  undefined1 uStack_90;
  undefined1 uStack_8f;
  undefined1 uStack_8e;
  undefined1 uStack_8d;
  undefined1 uStack_8c;
  undefined1 uStack_8b;
  undefined1 uStack_8a;
  undefined1 uStack_89;
  undefined1 uStack_88;
  undefined1 uStack_87;
  undefined1 uStack_86;
  undefined1 uStack_85;
  undefined1 uStack_84;
  undefined1 uStack_83;
  ulong uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_1;
  puVar10 = param_2;
  func_0x000107c5c3b4();
  if ((int)puVar5 != 0) {
    puVar6 = param_1;
    func_0x000107c44008();
    func_0x000107c61180();
    puVar5 = (undefined1 *)0x0;
    if (puVar6 != (undefined1 *)0x0) {
      puVar5 = puVar6;
      func_0x000107c5ee30();
      func_0x000107c61170(puVar6);
      uVar3 = (uint)((ulong)puVar10 >> 0x20);
      uVar12 = uVar3 >> 0x1e;
      if (uVar3 >> 0x1e < 2) {
        if (uVar12 != 0) {
          lVar14 = (long)(int)puVar5;
          puVar16 = (undefined1 *)(((long)puVar5 >> 0x20) - lVar14);
          if ((long)puVar5 >> 0x20 < lVar14) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102a7ab70);
            (*pcVar4)();
          }
          puVar6 = (undefined1 *)((ulong)puVar10 & 0x3fffffffffffffff);
          func_0x000107c6157c();
          func_0x000107c5ec30();
          if (puVar6 != (undefined1 *)0x0) {
            puVar11 = puVar6;
            func_0x000107c5ec3c();
            if (SBORROW8(lVar14,(long)puVar11)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x102a7ab78);
              (*pcVar4)();
            }
            puVar6 = puVar6 + (lVar14 - (long)puVar11);
            goto LAB_102a7a8f8;
          }
          func_0x000107c5ec38();
LAB_102a7a934:
          puVar6 = (undefined1 *)0x0;
          puVar11 = (undefined1 *)0x0;
          goto LAB_102a7a93c;
        }
        uStack_90 = SUB81(puVar5,0);
        uStack_8f = (undefined1)((ulong)puVar5 >> 8);
        uStack_8e = (undefined1)((ulong)puVar5 >> 0x10);
        uStack_8d = (undefined1)((ulong)puVar5 >> 0x18);
        uStack_8c = (undefined1)((ulong)puVar5 >> 0x20);
        uStack_8b = (undefined1)((ulong)puVar5 >> 0x28);
        uStack_8a = (undefined1)((ulong)puVar5 >> 0x30);
        uStack_89 = (undefined1)((ulong)puVar5 >> 0x38);
        uStack_88 = SUB81(puVar10,0);
        uStack_87 = (undefined1)((ulong)puVar10 >> 8);
        uStack_86 = (undefined1)((ulong)puVar10 >> 0x10);
        uStack_85 = (undefined1)((ulong)puVar10 >> 0x18);
        uStack_84 = (undefined1)((ulong)puVar10 >> 0x20);
        puVar11 = (undefined1 *)((ulong)puVar10 >> 0x30 & 0xff);
        uStack_83 = (undefined1)((ulong)puVar10 >> 0x28);
LAB_102a7a924:
        puVar6 = &uStack_90;
        func_0x000107c5fb50(puVar6,puVar11);
LAB_102a7aa5c:
        func_0x00010006c090(puVar5,puVar10);
      }
      else {
        if (uVar12 != 2) {
          uStack_88 = 0;
          uStack_87 = 0;
          uStack_86 = 0;
          uStack_85 = 0;
          uStack_84 = 0;
          uStack_83 = 0;
          uStack_90 = 0;
          uStack_8f = 0;
          uStack_8e = 0;
          uStack_8d = 0;
          uStack_8c = 0;
          uStack_8b = 0;
          uStack_8a = 0;
          uStack_89 = 0;
          puVar11 = (undefined1 *)0x0;
          goto LAB_102a7a924;
        }
        lVar14 = *(long *)(puVar5 + 0x10);
        lVar2 = *(long *)(puVar5 + 0x18);
        func_0x000107c6157c(puVar5);
        puVar6 = (undefined1 *)((ulong)puVar10 & 0x3fffffffffffffff);
        func_0x000107c6157c();
        func_0x000107c5ec30();
        puVar11 = puVar6;
        if (puVar6 != (undefined1 *)0x0) {
          func_0x000107c5ec3c();
          if (SBORROW8(lVar14,(long)puVar11)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102a7ab74);
            (*pcVar4)();
          }
          puVar6 = puVar6 + (lVar14 - (long)puVar11);
        }
        puVar16 = (undefined1 *)(lVar2 - lVar14);
        if (SBORROW8(lVar2,lVar14)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102a7a8bc);
          (*pcVar4)();
        }
LAB_102a7a8f8:
        func_0x000107c5ec38();
        if (puVar6 == (undefined1 *)0x0) goto LAB_102a7a934;
        if ((long)puVar16 <= (long)puVar11) {
          puVar11 = puVar16;
        }
LAB_102a7a93c:
        func_0x000107c5fb50(puVar6);
        if (puVar11 != (undefined1 *)0x0) goto LAB_102a7aa5c;
        puStack_a0 = puVar5;
        puStack_98 = puVar10;
        func_0x00010006c00c(puVar5,puVar10);
        uVar13 = 0x112dd0c48;
        func_0x0001000285a8(0x112dd0c48,&UNK_10dca5e20);
        ppuVar7 = &puStack_d0;
        func_0x000107c6147c(ppuVar7,&puStack_a0,PTR___s10Foundation4DataVN_110350ae0,uVar13,6);
        if (((ulong)ppuVar7 & 1) == 0) {
          uStack_b0 = 0;
          puStack_c8 = (undefined1 *)0x0;
          puStack_d0 = (undefined1 *)0x0;
          uStack_b8 = 0;
          uStack_c0 = 0;
          func_0x000102a7ba24(&puStack_d0,0x112dd0c50,&UNK_10d9920d0);
LAB_102a7aa48:
          puVar6 = puVar5;
          puVar11 = puVar10;
          func_0x0001018e4f60(puVar5,puVar10);
          goto LAB_102a7aa5c;
        }
        func_0x0001018e61f8(&puStack_d0,&uStack_90);
        uVar13 = uStack_70;
        uVar8 = uStack_78;
        func_0x0001000a8868(&uStack_90,uStack_78);
        func_0x000107c604a4(uVar8,uVar13);
        if ((uVar8 & 1) == 0) {
          func_0x0001000834e4(&uStack_90);
          goto LAB_102a7aa48;
        }
        func_0x0001000a8868(&uStack_90,uStack_78);
        func_0x000107c604a0(&puStack_d0,&UNK_1018e4fc8,0,PTR___sSSN_11034da80,uStack_78,uStack_70);
        func_0x00010006c090(puVar5,puVar10);
        func_0x0001000834e4(&uStack_90);
        puVar6 = puStack_d0;
        puVar11 = puStack_c8;
      }
      func_0x000107c61428(param_3 + 0x10,&uStack_90,0,0);
      param_3 = param_3 + 0x10;
      func_0x000107c61618();
      lVar14 = _DAT_112ee6d58;
      if (param_3 == 0) {
        func_0x00010006c090(puVar5,puVar10);
        func_0x000107c6142c(puVar11);
      }
      else {
        uVar13 = *param_4;
        uVar15 = param_4[1];
        func_0x000107c61428(param_3 + _DAT_112ee6d58,&puStack_d0,0x21,0);
        func_0x000107c61434(uVar15);
        uVar9 = *(undefined8 *)(param_3 + lVar14);
        func_0x000107c61558(uVar9);
        puStack_a0 = *(undefined1 **)(param_3 + lVar14);
        *(undefined8 *)(param_3 + lVar14) = 0x8000000000000000;
        func_0x00010018433c(puVar6,puVar11,uVar13,uVar15,uVar9);
        func_0x000107c6142c(uVar15);
        *(undefined1 **)(param_3 + lVar14) = puStack_a0;
        func_0x000107c614a8(&puStack_d0);
        func_0x00010006c090(puVar5,puVar10);
        func_0x000107c61170(param_3);
      }
      goto code_r0x000107c60f3c;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    func_0x000107c60e78();
    lVar14 = _DAT_112ee6d58;
    func_0x000107c61428(param_1 + _DAT_112ee6d58,auStack_128,0x20,0);
    lVar14 = *(long *)(param_1 + lVar14);
    if (*(long *)(lVar14 + 0x10) == 0) {
      uVar13 = 0;
      uVar15 = 0;
    }
    else {
      func_0x000107c61434(lVar14);
      func_0x000100029284();
      if (((ulong)puVar10 & 1) == 0) {
        uVar13 = 0;
        uVar15 = 0;
      }
      else {
        puVar1 = (undefined8 *)(*(long *)(lVar14 + 0x38) + (long)puVar5 * 0x10);
        uVar13 = *puVar1;
        uVar15 = puVar1[1];
        func_0x000107c61434(uVar15);
      }
      func_0x000107c6142c(lVar14);
    }
    func_0x000107c614a8(auStack_128);
    auVar17._8_8_ = uVar15;
    auVar17._0_8_ = uVar13;
    return auVar17;
  }
code_r0x000107c60f3c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(param_2);
  auVar18._8_8_ = puVar10;
  auVar18._0_8_ = param_2;
  return auVar18;
}



/* Entry: 102a7ab7c; end: 102a7ac2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102a7ab7c(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_48 [24];
  
  lVar3 = _DAT_112ee6d58;
  func_0x000107c61428(unaff_x20 + _DAT_112ee6d58,auStack_48,0x20,0);
  lVar3 = *(long *)(unaff_x20 + lVar3);
  if (*(long *)(lVar3 + 0x10) == 0) {
    uVar2 = 0;
    uVar4 = 0;
  }
  else {
    func_0x000107c61434(lVar3);
    func_0x000100029284();
    if ((param_2 & 1) == 0) {
      uVar2 = 0;
      uVar4 = 0;
    }
    else {
      puVar1 = (undefined8 *)(*(long *)(lVar3 + 0x38) + param_1 * 0x10);
      uVar2 = *puVar1;
      uVar4 = puVar1[1];
      func_0x000107c61434(uVar4);
    }
    func_0x000107c6142c(lVar3);
  }
  func_0x000107c614a8(auStack_48);
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = uVar2;
  return auVar5;
}



/* Entry: 102a7ac30; end: 102a7ac8f; -[_TtC19ShoppingLensFetcher34ShoppingLensARAssetDataCoordinator init] */

void FUN_102a7ac30(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ShoppingLensFetcher.ShoppingLensARAssetDataCoordinator",0x36,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102a7ac5c);
  (*pcVar1)();
}



/* Entry: 102a7ac90; end: 102a7acdb; -[_TtC19ShoppingLensFetcher34ShoppingLensARAssetDataCoordinator .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102a7acbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a7acc0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a7ac90(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ee6d70));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112ee6d58));
  return;
}



/* Entry: 102a7acdc; end: 102a7acdf;  */

undefined8 FUN_102a7acdc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  ulong uVar4;
  long extraout_x8;
  long extraout_x12;
  long extraout_x13;
  undefined1 *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  lVar2 = 0;
  FUN_102aabc7c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar5 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 != 0) {
    param_1 = param_1 + ((ulong)*(byte *)(extraout_x12 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(extraout_x12 + 0x50) ^ 0xffffffffffffffff));
    lVar8 = *(long *)(extraout_x12 + 0x48);
    do {
      FUN_102a5c6f0(param_1,(long)puVar5 - extraout_x13);
      func_0x000102a5d690((long)puVar5 - extraout_x13,puVar5);
      puVar3 = puVar5 + *(int *)(lVar2 + 0x30);
      lVar1 = *(long *)(puVar3 + 0x18);
      uVar4 = *(ulong *)(puVar3 + 0x20);
      uVar6 = *(ulong *)(puVar3 + 0x28);
      func_0x000102a776f4();
      if (((int)puVar3 != 1) &&
         ((((1 < uVar6 && (uVar4 != 0 || uVar6 != 0xe000000000000000)) &&
           (func_0x000107c605b8(uVar4,uVar6,0,0xe000000000000000,0), (uVar4 & 1) == 0)) ||
          (lVar1 != 0)))) {
        func_0x000102a5d654(puVar5);
        return 1;
      }
      func_0x000102a5d654(puVar5);
      param_1 = param_1 + lVar8;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return 0;
}



/* Entry: 102a7ace0; end: 102a7ad1f;  */

void FUN_102a7ace0(void)

{
  FUN_102a7a01c();
  return;
}



/* Entry: 102a7ad20; end: 102a7b5ab;  */

void FUN_102a7ad20(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  long extraout_x8;
  undefined1 *puVar9;
  long extraout_x8_00;
  long extraout_x12;
  undefined8 extraout_x13;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined1 *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined1 auStack_3c0 [8];
  ulong uStack_3b8;
  undefined8 uStack_3b0;
  undefined1 *puStack_3a8;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  uint uStack_394;
  undefined8 *puStack_390;
  long lStack_388;
  undefined1 *puStack_380;
  long lStack_378;
  ulong uStack_370;
  ulong uStack_368;
  ulong uStack_360;
  undefined *puStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined1 *puStack_340;
  undefined8 uStack_338;
  ulong uStack_330;
  long lStack_328;
  ulong uStack_320;
  long lStack_318;
  ulong uStack_310;
  long lStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 uStack_2e8;
  undefined4 uStack_2e7;
  undefined2 uStack_2e3;
  undefined1 uStack_2e1;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined1 uStack_2c8;
  undefined1 uStack_2c7;
  undefined6 uStack_2c6;
  ulong uStack_2c0;
  ulong uStack_2b8;
  undefined *puStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined1 *puStack_298;
  undefined8 uStack_290;
  ulong uStack_288;
  long lStack_280;
  ulong uStack_278;
  long lStack_270;
  ulong uStack_268;
  long lStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined1 uStack_240;
  undefined4 uStack_23f;
  undefined2 uStack_23b;
  undefined1 uStack_239;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 uStack_220;
  undefined1 uStack_21f;
  ulong uStack_218;
  ulong uStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 *puStack_1f0;
  undefined8 uStack_1e8;
  ulong uStack_1e0;
  long lStack_1d8;
  ulong uStack_1d0;
  long lStack_1c8;
  ulong uStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  undefined *puStack_160;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 *puStack_140;
  undefined8 uStack_138;
  ulong uStack_130;
  long lStack_128;
  ulong uStack_120;
  long lStack_118;
  ulong uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined *puStack_b0;
  
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar14 = *(long *)(lVar3 + -8);
  lStack_388 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  puVar9 = auStack_3c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x112d36580;
  puStack_380 = puVar9;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puStack_390 = param_1;
  if (param_3 == 0) {
    FUN_102a7b948(&uStack_150);
    goto LAB_102a7b54c;
  }
  uStack_3b0 = extraout_x13;
  func_0x000107c61174();
  uVar5 = param_3;
  func_0x000107c44408();
  func_0x000107c61180();
  uVar19 = 0;
  if (uVar5 == 0) {
LAB_102a7ae80:
    uStack_39c = 0;
    uStack_398 = 1;
    uStack_394 = 0;
    uVar20 = 0;
    uVar21 = 0;
LAB_102a7ae94:
    uVar22 = 0;
    uVar23 = 0;
    uVar24 = 0;
  }
  else {
    uVar4 = uVar5;
    func_0x000107c5cf30();
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    if (uVar4 == 0) goto LAB_102a7ae80;
    uVar5 = uVar4;
    func_0x000107c51820();
    func_0x000107c61180();
    if (uVar5 == 0) {
      uVar20 = 0;
      uVar21 = 0;
      uVar22 = param_2;
    }
    else {
      func_0x000107c5e9e0();
      uVar20 = param_2;
      func_0x000107c5e9f0(uVar5);
      uVar21 = uVar20;
      func_0x000107c5ea04(uVar5);
      uVar22 = uVar21;
      func_0x000107c61170(uVar5);
      uVar19 = param_2;
    }
    uStack_394 = (uint)(uVar5 == 0);
    uVar5 = uVar4;
    func_0x000107c5cf74();
    func_0x000107c61180();
    if (uVar5 == 0) {
      func_0x000107c61170(uVar4);
      uStack_39c = 1;
      uStack_398 = 0;
      goto LAB_102a7ae94;
    }
    func_0x000107c5e9e0();
    uVar23 = uVar22;
    func_0x000107c5e9f0(uVar5);
    uVar24 = uVar23;
    func_0x000107c5ea04(uVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    uStack_39c = 0;
    uStack_398 = 0;
  }
  uVar5 = param_3;
  func_0x000107c5011c();
  func_0x000107c61180();
  puStack_3a8 = puVar9 + (-extraout_x12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  lStack_378 = lVar14;
  uStack_370 = param_3;
  if (uVar5 == 0) {
    uVar5 = 0;
    uVar4 = 0;
    puStack_358 = (undefined *)0x0;
  }
  else {
    uStack_3b8 = uVar5;
    func_0x000107c4fe30();
    func_0x000107c61180();
    uVar4 = 0;
    FUN_102a7b9e4(0,0x112ee6da8,&PTR_PTR_1126c7ef0);
    uVar15 = uVar5;
    func_0x000107c5fc54();
    func_0x000107c61170(uVar5);
    if (uVar15 >> 0x3e == 0) {
      uVar5 = *(ulong *)((uVar15 & 0xffffffffffffff8) + 0x10);
      if (uVar5 == 0) goto LAB_102a7b108;
LAB_102a7af84:
      if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102a7b5ac);
        (*pcVar2)();
      }
      uVar13 = 0;
      uStack_368 = uVar15 & 0xc000000000000001;
      puStack_358 = PTR___swiftEmptyArrayStorage_11034f1c8;
      uStack_360 = uVar5;
      do {
        if (uStack_368 == 0) {
          uVar5 = *(ulong *)(uVar15 + uVar13 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar5 = uVar13;
          uVar4 = uVar15;
          FUN_102a81bd0();
        }
        uVar10 = uVar5;
        func_0x000107c5d7e8();
        func_0x000107c61180();
        if (uVar10 == 0) {
          uVar16 = 0;
          uVar10 = 0;
          uVar7 = uVar4;
        }
        else {
          uVar16 = uVar10;
          func_0x000107c5faec();
          uVar7 = uVar4;
          func_0x000107c61170(uVar10);
          uVar10 = uVar4;
        }
        uVar11 = uVar5;
        func_0x000107c3f9b4();
        func_0x000107c61180();
        if (uVar11 == 0) {
          uVar17 = 0;
          uVar11 = 0;
          uVar4 = uVar7;
        }
        else {
          uVar17 = uVar11;
          func_0x000107c5faec();
          uVar4 = uVar7;
          func_0x000107c61170(uVar11);
          uVar11 = uVar7;
        }
        puVar6 = puStack_358;
        func_0x000107c61558();
        if (((ulong)puVar6 & 1) == 0) {
          uVar4 = *(long *)(puStack_358 + 0x10) + 1;
          puVar6 = (undefined *)0x0;
          FUN_102a815cc(0,uVar4,1);
          puStack_358 = puVar6;
        }
        uVar1 = *(ulong *)(puStack_358 + 0x10);
        uVar7 = uVar1 + 1;
        if (*(ulong *)(puStack_358 + 0x18) >> 1 <= uVar1) {
          puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puStack_358 + 0x18));
          uVar4 = uVar7;
          FUN_102a815cc(puVar6,uVar7,1,puStack_358);
          puStack_358 = puVar6;
        }
        uVar13 = uVar13 + 1;
        *(ulong *)(puStack_358 + 0x10) = uVar7;
        *(ulong *)(puStack_358 + uVar1 * 0x20 + 0x20) = uVar16;
        *(ulong *)(puStack_358 + uVar1 * 0x20 + 0x28) = uVar10;
        *(ulong *)(puStack_358 + uVar1 * 0x20 + 0x30) = uVar17;
        *(ulong *)(puStack_358 + uVar1 * 0x20 + 0x38) = uVar11;
        func_0x000107c61170(uVar5);
      } while (uStack_360 != uVar13);
    }
    else {
      uVar5 = uVar15 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar15) {
        uVar5 = uVar15;
      }
      func_0x000107c60480();
      if (uVar5 != 0) goto LAB_102a7af84;
LAB_102a7b108:
      puStack_358 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    func_0x000107c6142c(uVar15);
    uVar15 = uStack_3b8;
    uVar13 = uStack_3b8;
    func_0x000107c4a898();
    func_0x000107c61180();
    if (uVar13 == 0) {
      func_0x000107c61170(uVar15);
      uVar5 = 0;
      uVar4 = 0;
    }
    else {
      uVar5 = uVar13;
      func_0x000107c5faec();
      func_0x000107c61170(uVar13);
      func_0x000107c61170(uVar15);
    }
  }
  uVar15 = uStack_370;
  lVar3 = lStack_388;
  uVar13 = uStack_370;
  func_0x000107c45018();
  func_0x000107c61180();
  if (uVar13 != 0) {
    func_0x000107c5edb4(uStack_3b0);
    func_0x000107c61170(uVar13);
  }
  lVar14 = lStack_378;
  (**(code **)(lStack_378 + 0x38))(uStack_3b0,uVar13 == 0,1,lVar3);
  puVar9 = puStack_3a8;
  func_0x0001001021cc(uStack_3b0,puStack_3a8);
  uVar8 = 1;
  puVar18 = puVar9;
  (**(code **)(lVar14 + 0x30))(puVar9,1,lVar3);
  if ((int)puVar18 == 1) {
    lVar12 = 0x112d36580;
    func_0x000102a7ba24(puVar9,0x112d36580,&UNK_10d9016d0);
    puVar18 = (undefined1 *)0x0;
    uVar8 = 0;
  }
  else {
    func_0x000107c5ed70();
    lVar12 = lVar3;
    (**(code **)(lVar14 + 8))(puVar9);
  }
  uVar13 = uVar15;
  func_0x000107c4c21c();
  func_0x000107c61180();
  if (uVar13 == 0) {
    uStack_368 = 0;
    uStack_360 = 0;
  }
  else {
    uVar10 = uVar13;
    func_0x000107c45018();
    func_0x000107c61180();
    func_0x000107c61170(uVar13);
    puVar9 = puStack_380;
    func_0x000107c5edb4(puStack_380,uVar10);
    func_0x000107c61170();
    func_0x000107c5ed70();
    lVar14 = lVar3;
    uStack_368 = lVar12;
    uStack_360 = uVar10;
    (**(code **)(lStack_378 + 8))(puVar9);
    lVar12 = lVar14;
  }
  func_0x000107c44408();
  func_0x000107c61180();
  if (uVar15 == 0) {
    uVar15 = 0;
    lVar14 = 0;
    lVar3 = lVar12;
  }
  else {
    uVar13 = uVar15;
    func_0x000107c4440c();
    func_0x000107c61180();
    func_0x000107c61170(uVar15);
    if (uVar13 == 0) {
      uVar15 = 0;
      lVar14 = 0;
      lVar3 = lVar12;
    }
    else {
      uVar15 = uVar13;
      func_0x000107c5d7e8();
      func_0x000107c61180();
      func_0x000107c61170(uVar13);
      puVar9 = puStack_380;
      func_0x000107c5edb4(puStack_380,uVar15);
      func_0x000107c61170();
      func_0x000107c5ed70();
      (**(code **)(lStack_378 + 8))(puVar9);
      lVar14 = lVar12;
    }
  }
  uVar13 = uStack_370;
  uVar10 = uStack_370;
  func_0x000107c44408();
  func_0x000107c61180();
  if (uVar10 == 0) {
    func_0x000107c61170(uVar13);
    uVar13 = 0;
LAB_102a7b430:
    lVar12 = 0;
  }
  else {
    uVar13 = uVar10;
    func_0x000107c4440c();
    func_0x000107c61180();
    func_0x000107c61170(uVar10);
    if (uVar13 == 0) {
      func_0x000107c61170(uStack_370);
      goto LAB_102a7b430;
    }
    uVar10 = uVar13;
    func_0x000107c3f9b4();
    func_0x000107c61180();
    func_0x000107c61170(uVar13);
    uVar13 = uVar10;
    func_0x000107c5faec();
    func_0x000107c61170(uVar10);
    lVar12 = lVar3;
    func_0x000107c5fb24();
    func_0x000107c6142c(lVar3);
    func_0x000107c61170(uStack_370);
  }
  uStack_350 = 0;
  uStack_348 = 0;
  uStack_330 = uStack_360;
  lStack_328 = uStack_368;
  uStack_2e8 = (undefined1)uStack_394;
  uStack_2e1 = 0;
  uStack_2e3 = 0;
  uStack_2e7 = 0;
  uStack_2c8 = (undefined1)uStack_39c;
  uStack_2c7 = (undefined1)uStack_398;
  puStack_2b0 = puStack_358;
  uStack_2a8 = 0;
  uStack_2a0 = 0;
  uStack_288 = uStack_360;
  lStack_280 = uStack_368;
  uStack_239 = 0;
  uStack_23b = 0;
  uStack_23f = 0;
  puStack_208 = puStack_358;
  puStack_340 = puVar18;
  uStack_338 = uVar8;
  uStack_320 = uVar15;
  lStack_318 = lVar14;
  uStack_310 = uVar13;
  lStack_308 = lVar12;
  uStack_300 = uVar19;
  uStack_2f8 = uVar20;
  uStack_2f0 = uVar21;
  uStack_2e0 = uVar22;
  uStack_2d8 = uVar23;
  uStack_2d0 = uVar24;
  uStack_2c0 = uVar5;
  uStack_2b8 = uVar4;
  puStack_298 = puVar18;
  uStack_290 = uVar8;
  uStack_278 = uVar15;
  lStack_270 = lVar14;
  uStack_268 = uVar13;
  lStack_260 = lVar12;
  uStack_258 = uVar19;
  uStack_250 = uVar20;
  uStack_248 = uVar21;
  uStack_240 = uStack_2e8;
  uStack_238 = uVar22;
  uStack_230 = uVar23;
  uStack_228 = uVar24;
  uStack_220 = uStack_2c8;
  uStack_21f = uStack_2c7;
  uStack_218 = uVar5;
  uStack_210 = uVar4;
  FUN_102a7b970(&uStack_350,&uStack_150);
  func_0x000102a7b9ac(&uStack_2a8);
  uStack_178 = CONCAT62(uStack_2c6,CONCAT11(uStack_2c7,uStack_2c8));
  uStack_180 = uStack_2d0;
  uStack_168 = uStack_2b8;
  uStack_170 = uStack_2c0;
  puStack_160 = puStack_2b0;
  lStack_1b8 = lStack_308;
  uStack_1c0 = uStack_310;
  uStack_1a8 = uStack_2f8;
  uStack_1b0 = uStack_300;
  uStack_198 = CONCAT17(uStack_2e1,CONCAT25(uStack_2e3,CONCAT41(uStack_2e7,uStack_2e8)));
  uStack_1a0 = uStack_2f0;
  uStack_188 = uStack_2d8;
  uStack_190 = uStack_2e0;
  uStack_1f8 = uStack_348;
  uStack_200 = uStack_350;
  uStack_1e8 = uStack_338;
  puStack_1f0 = puStack_340;
  lStack_1d8 = lStack_328;
  uStack_1e0 = uStack_330;
  lStack_1c8 = lStack_318;
  uStack_1d0 = uStack_320;
  FUN_102a7b9e0(&uStack_200);
  uStack_c8 = uStack_178;
  uStack_d0 = uStack_180;
  uStack_b8 = uStack_168;
  uStack_c0 = uStack_170;
  puStack_b0 = puStack_160;
  lStack_108 = lStack_1b8;
  uStack_110 = uStack_1c0;
  uStack_f8 = uStack_1a8;
  uStack_100 = uStack_1b0;
  uStack_e8 = uStack_198;
  uStack_f0 = uStack_1a0;
  uStack_d8 = uStack_188;
  uStack_e0 = uStack_190;
  uStack_148 = uStack_1f8;
  uStack_150 = uStack_200;
  uStack_138 = uStack_1e8;
  puStack_140 = puStack_1f0;
  lStack_128 = lStack_1d8;
  uStack_130 = uStack_1e0;
  lStack_118 = lStack_1c8;
  uStack_120 = uStack_1d0;
LAB_102a7b54c:
  puStack_390[0x11] = uStack_c8;
  puStack_390[0x10] = uStack_d0;
  puStack_390[0x13] = uStack_b8;
  puStack_390[0x12] = uStack_c0;
  puStack_390[0x14] = puStack_b0;
  puStack_390[9] = lStack_108;
  puStack_390[8] = uStack_110;
  puStack_390[0xb] = uStack_f8;
  puStack_390[10] = uStack_100;
  puStack_390[0xd] = uStack_e8;
  puStack_390[0xc] = uStack_f0;
  puStack_390[0xf] = uStack_d8;
  puStack_390[0xe] = uStack_e0;
  puStack_390[1] = uStack_148;
  *puStack_390 = uStack_150;
  puStack_390[3] = uStack_138;
  puStack_390[2] = puStack_140;
  puStack_390[5] = lStack_128;
  puStack_390[4] = uStack_130;
  puStack_390[7] = lStack_118;
  puStack_390[6] = uStack_120;
  return;
}



/* Entry: 102a7b5ac; end: 102a7b6f3;  */

undefined8 FUN_102a7b5ac(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  ulong uVar4;
  long extraout_x8;
  long extraout_x12;
  long extraout_x13;
  undefined1 *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  lVar2 = 0;
  FUN_102aabc7c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar5 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 != 0) {
    param_1 = param_1 + ((ulong)*(byte *)(extraout_x12 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(extraout_x12 + 0x50) ^ 0xffffffffffffffff));
    lVar8 = *(long *)(extraout_x12 + 0x48);
    do {
      FUN_102a5c6f0(param_1,(long)puVar5 - extraout_x13);
      func_0x000102a5d690((long)puVar5 - extraout_x13,puVar5);
      puVar3 = puVar5 + *(int *)(lVar2 + 0x30);
      lVar1 = *(long *)(puVar3 + 0x18);
      uVar4 = *(ulong *)(puVar3 + 0x20);
      uVar6 = *(ulong *)(puVar3 + 0x28);
      func_0x000102a776f4();
      if (((int)puVar3 != 1) &&
         ((((1 < uVar6 && (uVar4 != 0 || uVar6 != 0xe000000000000000)) &&
           (func_0x000107c605b8(uVar4,uVar6,0,0xe000000000000000,0), (uVar4 & 1) == 0)) ||
          (lVar1 != 0)))) {
        func_0x000102a5d654(puVar5);
        return 1;
      }
      func_0x000102a5d654(puVar5);
      param_1 = param_1 + lVar8;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return 0;
}



/* Entry: 102a7b6f4; end: 102a7b733;  */

void FUN_102a7b6f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee6d78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db12110;
  func_0x000107c61520(&UNK_10db12110,&UNK_11058f798);
  puRam0000000112ee6d78 = puVar1;
  return;
}



/* Entry: 102a7b734; end: 102a7b773;  */

/* WARNING: Possible PIC construction at 0x000102a7ab30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a7ab34) */
/* WARNING: Removing unreachable block (ram,0x000102a7ab4c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102a7b734(undefined1 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  code *pcVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 **ppuVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  ulong uVar14;
  undefined8 uVar15;
  long unaff_x20;
  undefined8 uVar16;
  undefined1 *puVar17;
  long lVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auStack_128 [24];
  undefined1 *puStack_d0;
  undefined1 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a0;
  undefined1 *puStack_98;
  undefined1 uStack_90;
  undefined1 uStack_8f;
  undefined1 uStack_8e;
  undefined1 uStack_8d;
  undefined1 uStack_8c;
  undefined1 uStack_8b;
  undefined1 uStack_8a;
  undefined1 uStack_89;
  undefined1 uStack_88;
  undefined1 uStack_87;
  undefined1 uStack_86;
  undefined1 uStack_85;
  undefined1 uStack_84;
  undefined1 uStack_83;
  ulong uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar9 = 0;
  FUN_102aabc7c();
  uVar14 = (ulong)*(byte *)(*(long *)(lVar9 + -8) + 0x50);
  puVar10 = *(undefined1 **)(unaff_x20 + 0x10);
  lVar9 = *(long *)(unaff_x20 + 0x18);
  puVar1 = (undefined8 *)(unaff_x20 + (uVar14 + 0x20 & (uVar14 ^ 0xffffffffffffffff)));
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_1;
  puVar11 = puVar10;
  func_0x000107c5c3b4();
  if ((int)puVar5 != 0) {
    puVar6 = param_1;
    func_0x000107c44008();
    func_0x000107c61180();
    puVar5 = (undefined1 *)0x0;
    if (puVar6 != (undefined1 *)0x0) {
      puVar5 = puVar6;
      func_0x000107c5ee30();
      func_0x000107c61170(puVar6);
      uVar3 = (uint)((ulong)puVar11 >> 0x20);
      uVar13 = uVar3 >> 0x1e;
      if (uVar3 >> 0x1e < 2) {
        if (uVar13 != 0) {
          lVar18 = (long)(int)puVar5;
          puVar17 = (undefined1 *)(((long)puVar5 >> 0x20) - lVar18);
          if ((long)puVar5 >> 0x20 < lVar18) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102a7ab70);
            (*pcVar4)();
          }
          puVar6 = (undefined1 *)((ulong)puVar11 & 0x3fffffffffffffff);
          func_0x000107c6157c();
          func_0x000107c5ec30();
          if (puVar6 != (undefined1 *)0x0) {
            puVar12 = puVar6;
            func_0x000107c5ec3c();
            if (SBORROW8(lVar18,(long)puVar12)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x102a7ab78);
              (*pcVar4)();
            }
            puVar6 = puVar6 + (lVar18 - (long)puVar12);
            goto LAB_102a7a8f8;
          }
          func_0x000107c5ec38();
LAB_102a7a934:
          puVar6 = (undefined1 *)0x0;
          puVar12 = (undefined1 *)0x0;
          goto LAB_102a7a93c;
        }
        uStack_90 = SUB81(puVar5,0);
        uStack_8f = (undefined1)((ulong)puVar5 >> 8);
        uStack_8e = (undefined1)((ulong)puVar5 >> 0x10);
        uStack_8d = (undefined1)((ulong)puVar5 >> 0x18);
        uStack_8c = (undefined1)((ulong)puVar5 >> 0x20);
        uStack_8b = (undefined1)((ulong)puVar5 >> 0x28);
        uStack_8a = (undefined1)((ulong)puVar5 >> 0x30);
        uStack_89 = (undefined1)((ulong)puVar5 >> 0x38);
        uStack_88 = SUB81(puVar11,0);
        uStack_87 = (undefined1)((ulong)puVar11 >> 8);
        uStack_86 = (undefined1)((ulong)puVar11 >> 0x10);
        uStack_85 = (undefined1)((ulong)puVar11 >> 0x18);
        uStack_84 = (undefined1)((ulong)puVar11 >> 0x20);
        puVar12 = (undefined1 *)((ulong)puVar11 >> 0x30 & 0xff);
        uStack_83 = (undefined1)((ulong)puVar11 >> 0x28);
LAB_102a7a924:
        puVar6 = &uStack_90;
        func_0x000107c5fb50(puVar6,puVar12);
LAB_102a7aa5c:
        func_0x00010006c090(puVar5,puVar11);
      }
      else {
        if (uVar13 != 2) {
          uStack_88 = 0;
          uStack_87 = 0;
          uStack_86 = 0;
          uStack_85 = 0;
          uStack_84 = 0;
          uStack_83 = 0;
          uStack_90 = 0;
          uStack_8f = 0;
          uStack_8e = 0;
          uStack_8d = 0;
          uStack_8c = 0;
          uStack_8b = 0;
          uStack_8a = 0;
          uStack_89 = 0;
          puVar12 = (undefined1 *)0x0;
          goto LAB_102a7a924;
        }
        lVar18 = *(long *)(puVar5 + 0x10);
        lVar2 = *(long *)(puVar5 + 0x18);
        func_0x000107c6157c(puVar5);
        puVar6 = (undefined1 *)((ulong)puVar11 & 0x3fffffffffffffff);
        func_0x000107c6157c();
        func_0x000107c5ec30();
        puVar12 = puVar6;
        if (puVar6 != (undefined1 *)0x0) {
          func_0x000107c5ec3c();
          if (SBORROW8(lVar18,(long)puVar12)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102a7ab74);
            (*pcVar4)();
          }
          puVar6 = puVar6 + (lVar18 - (long)puVar12);
        }
        puVar17 = (undefined1 *)(lVar2 - lVar18);
        if (SBORROW8(lVar2,lVar18)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102a7a8bc);
          (*pcVar4)();
        }
LAB_102a7a8f8:
        func_0x000107c5ec38();
        if (puVar6 == (undefined1 *)0x0) goto LAB_102a7a934;
        if ((long)puVar17 <= (long)puVar12) {
          puVar12 = puVar17;
        }
LAB_102a7a93c:
        func_0x000107c5fb50(puVar6);
        if (puVar12 != (undefined1 *)0x0) goto LAB_102a7aa5c;
        puStack_a0 = puVar5;
        puStack_98 = puVar11;
        func_0x00010006c00c(puVar5,puVar11);
        uVar15 = 0x112dd0c48;
        func_0x0001000285a8(0x112dd0c48,&UNK_10dca5e20);
        ppuVar7 = &puStack_d0;
        func_0x000107c6147c(ppuVar7,&puStack_a0,PTR___s10Foundation4DataVN_110350ae0,uVar15,6);
        if (((ulong)ppuVar7 & 1) == 0) {
          uStack_b0 = 0;
          puStack_c8 = (undefined1 *)0x0;
          puStack_d0 = (undefined1 *)0x0;
          uStack_b8 = 0;
          uStack_c0 = 0;
          func_0x000102a7ba24(&puStack_d0,0x112dd0c50,&UNK_10d9920d0);
LAB_102a7aa48:
          puVar6 = puVar5;
          puVar12 = puVar11;
          func_0x0001018e4f60(puVar5,puVar11);
          goto LAB_102a7aa5c;
        }
        func_0x0001018e61f8(&puStack_d0,&uStack_90);
        uVar15 = uStack_70;
        uVar14 = uStack_78;
        func_0x0001000a8868(&uStack_90,uStack_78);
        func_0x000107c604a4(uVar14,uVar15);
        if ((uVar14 & 1) == 0) {
          func_0x0001000834e4(&uStack_90);
          goto LAB_102a7aa48;
        }
        func_0x0001000a8868(&uStack_90,uStack_78);
        func_0x000107c604a0(&puStack_d0,&UNK_1018e4fc8,0,PTR___sSSN_11034da80,uStack_78,uStack_70);
        func_0x00010006c090(puVar5,puVar11);
        func_0x0001000834e4(&uStack_90);
        puVar6 = puStack_d0;
        puVar12 = puStack_c8;
      }
      func_0x000107c61428(lVar9 + 0x10,&uStack_90,0,0);
      lVar9 = lVar9 + 0x10;
      func_0x000107c61618();
      lVar18 = _DAT_112ee6d58;
      if (lVar9 == 0) {
        func_0x00010006c090(puVar5,puVar11);
        func_0x000107c6142c(puVar12);
      }
      else {
        uVar15 = *puVar1;
        uVar16 = puVar1[1];
        func_0x000107c61428(lVar9 + _DAT_112ee6d58,&puStack_d0,0x21,0);
        func_0x000107c61434(uVar16);
        uVar8 = *(undefined8 *)(lVar9 + lVar18);
        func_0x000107c61558(uVar8);
        puStack_a0 = *(undefined1 **)(lVar9 + lVar18);
        *(undefined8 *)(lVar9 + lVar18) = 0x8000000000000000;
        func_0x00010018433c(puVar6,puVar12,uVar15,uVar16,uVar8);
        func_0x000107c6142c(uVar16);
        *(undefined1 **)(lVar9 + lVar18) = puStack_a0;
        func_0x000107c614a8(&puStack_d0);
        func_0x00010006c090(puVar5,puVar11);
        func_0x000107c61170(lVar9);
      }
      goto code_r0x000107c60f3c;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    func_0x000107c60e78();
    lVar9 = _DAT_112ee6d58;
    func_0x000107c61428(param_1 + _DAT_112ee6d58,auStack_128,0x20,0);
    lVar9 = *(long *)(param_1 + lVar9);
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar15 = 0;
      uVar16 = 0;
    }
    else {
      func_0x000107c61434(lVar9);
      func_0x000100029284();
      if (((ulong)puVar11 & 1) == 0) {
        uVar15 = 0;
        uVar16 = 0;
      }
      else {
        puVar1 = (undefined8 *)(*(long *)(lVar9 + 0x38) + (long)puVar5 * 0x10);
        uVar15 = *puVar1;
        uVar16 = puVar1[1];
        func_0x000107c61434(uVar16);
      }
      func_0x000107c6142c(lVar9);
    }
    func_0x000107c614a8(auStack_128);
    auVar19._8_8_ = uVar16;
    auVar19._0_8_ = uVar15;
    return auVar19;
  }
code_r0x000107c60f3c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(puVar10);
  auVar20._8_8_ = puVar11;
  auVar20._0_8_ = puVar10;
  return auVar20;
}



/* Entry: 102a7b774; end: 102a7b78f;  */

void FUN_102a7b774(long param_1,long param_2)

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



/* Entry: 102a7b790; end: 102a7b7bb;  */

void FUN_102a7b790(void)

{
  long unaff_x20;
  
  if (*(code **)(unaff_x20 + 0x10) != (code *)0x0) {
    (**(code **)(unaff_x20 + 0x10))(0);
  }
  return;
}



/* Entry: 102a7b7bc; end: 102a7b7c7;  */

void FUN_102a7b7bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee6d78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db12110;
  func_0x000107c61520(&UNK_10db12110,&UNK_11058f798);
  puRam0000000112ee6d78 = puVar1;
  return;
}



/* Entry: 102a7b7c8; end: 102a7b837;  */

undefined8 * FUN_102a7b7c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 102a7b838; end: 102a7b927;  */

int FUN_102a7b838(int *param_1,uint param_2)

{
  int iVar1;
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
  iVar1 = 0;
  if (1 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2;
  }
  return iVar1;
}



/* Entry: 102a7b928; end: 102a7b947;  */

void FUN_102a7b928(void)

{
  func_0x000107c61168(&PTR_PTR_112883710);
  return;
}



/* Entry: 102a7b948; end: 102a7b96f;  */

void FUN_102a7b948(undefined8 *param_1)

{
  param_1[1] = 1;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  return;
}



/* Entry: 102a7b970; end: 102a7b9df;  */

undefined8 FUN_102a7b970(undefined8 param_1,undefined8 param_2)

{
  FUN_102aa99b4(param_2,param_1);
  return param_2;
}



/* Entry: 102a7b9e0; end: 102a7b9e3;  */

void FUN_102a7b9e0(void)

{
  return;
}



/* Entry: 102a7b9e4; end: 102a7ba63;  */

void FUN_102a7b9e4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102a7ba64; end: 102a7ba73;  */

void FUN_102a7ba64(long param_1,long param_2)

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



/* Entry: 102a7ba74; end: 102a7babf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a7ba74(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ee6db0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102a7bac0; end: 102a7badf;  */

void FUN_102a7bac0(void)

{
  func_0x000107c61168(&PTR_PTR_1128837e8);
  return;
}



/* Entry: 102a7bae0; end: 102a7bb0b; -[_TtC19ShoppingLensFetcher27ShoppingLensAssetDownloader init] */

void FUN_102a7bae0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ShoppingLensFetcher.ShoppingLensAssetDownloader",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102a7bb0c);
  (*pcVar1)();
}



/* Entry: 102a7bb0c; end: 102a7bb17;  */

void FUN_102a7bb0c(void)

{
  FUN_102a7bac0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102a7bb18; end: 102a7bb27; -[_TtC19ShoppingLensFetcher27ShoppingLensAssetDownloader .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a7bb18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ee6db0));
  return;
}



/* Entry: 102a7bb28; end: 102a7bbbf;  */

undefined8 FUN_102a7bb28(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112ee6db8;
  func_0x0001000285a8(0x112ee6db8,&UNK_10db12230);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 102a7bbc0; end: 102a7bc8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a7bbc0(long param_1,long param_2,code *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lStack_50;
  long lStack_48;
  
  plVar3 = &lStack_50;
  func_0x000107c3ef24();
  func_0x000107c61180();
  if (param_2 != 0) {
    func_0x000107c61170(param_2);
  }
  lVar1 = 0;
  FUN_102a73a44();
  lVar2 = lVar1;
  func_0x000107c610f8();
  *(bool *)(lVar2 + _DAT_112ee69b8) = param_1 == 0;
  *(bool *)(lVar2 + _DAT_112ee69c0) = param_2 != 0;
  *(undefined8 *)(lVar2 + _DAT_112ee69c8) = 0;
  lStack_50 = lVar2;
  lStack_48 = lVar1;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  (*param_3)();
  func_0x000107c61170(plVar3);
  return;
}



/* Entry: 102a7bc8c; end: 102a7bcaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a7bc8c(long param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  plVar4 = &lStack_50;
  func_0x000107c3ef24();
  func_0x000107c61180();
  if (param_2 != 0) {
    func_0x000107c61170(param_2);
  }
  lVar2 = 0;
  FUN_102a73a44();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(bool *)(lVar3 + _DAT_112ee69b8) = param_1 == 0;
  *(bool *)(lVar3 + _DAT_112ee69c0) = param_2 != 0;
  *(undefined8 *)(lVar3 + _DAT_112ee69c8) = 0;
  lStack_50 = lVar3;
  lStack_48 = lVar2;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  (*pcVar1)();
  func_0x000107c61170(plVar4);
  return;
}



/* Entry: 102a7bcb0; end: 102a7bcbb; -[_TtC19ShoppingLensFetcher27ShoppingLensAssetDownloader prefetchUrl:checksum:ttl:completionBlock:] */

void FUN_102a7bcb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c60bc4(param_6);
  func_0x000107c5edb4(puVar3,param_4);
  if (param_5 == 0) {
    param_5 = 0;
    param_3 = 0;
  }
  else {
    func_0x000107c5faec(param_5);
  }
  func_0x000107c60bc4(param_6);
  func_0x000107c61174(param_2);
  puVar2 = puVar3;
  FUN_102a7c224(param_1,puVar3,param_5,param_3,param_2,param_6);
  func_0x000107c60bd0(param_6);
  func_0x000107c60bd0(param_6);
  func_0x000107c61170(param_2);
  func_0x000107c6142c(param_3);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 102a7bcbc; end: 102a7bcdb;  */

void FUN_102a7bcbc(void)

{
  func_0x000107c61168(&PTR_PTR_1128838b0);
  return;
}



/* Entry: 102a7bcdc; end: 102a7bf63;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a7bcdc(ulong param_1,long param_2,code *param_3,undefined8 param_4,long param_5,
                  undefined8 param_6)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long extraout_x8;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined *apuStack_c0 [5];
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  long lStack_70;
  long lStack_68;
  
  lVar7 = 0x112ee6db8;
  func_0x0001000285a8(0x112ee6db8,&UNK_10db12230);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = (undefined8 *)((long)apuStack_c0 + -extraout_x8);
  if (((param_1 & 1) == 0) || ((*(byte *)(param_2 + _DAT_112ee6df0) & 1) != 0)) {
    lVar2 = 0;
    FUN_102a73a44();
    lVar7 = lVar2;
    func_0x000107c610f8();
    *(undefined1 *)(lVar7 + _DAT_112ee69b8) = 0;
    *(undefined1 *)(lVar7 + _DAT_112ee69c0) = 0;
    *(undefined8 *)(lVar7 + _DAT_112ee69c8) = 0;
    plVar3 = &lStack_70;
    lStack_70 = lVar7;
    lStack_68 = lVar2;
    func_0x000107c61154(plVar3,PTR_s_init_1125d9248);
    (*param_3)();
    func_0x000107c61170(plVar3);
    return;
  }
  func_0x000107c61428(param_5 + 0x10,auStack_88,0,0);
  param_5 = param_5 + 0x10;
  func_0x000107c61618();
  if (param_5 != 0) {
    lVar2 = *(long *)(param_5 + _DAT_112ee6db0);
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(param_5);
    if (lVar2 != 0) {
      func_0x000102a7bb70(param_6,puVar8);
      func_0x000107c61170(*puVar8);
      func_0x000107c615e8(*(undefined8 *)((long)apuStack_c0 + -extraout_x8 + 8U));
      iVar1 = *(int *)(lVar7 + 0x40);
      uVar9 = *(undefined8 *)((long)puVar8 + (long)*(int *)(lVar7 + 0x50));
      uVar6 = uVar9;
      func_0x000107c5d1a4(uVar9);
      func_0x000107c61180();
      func_0x000107c61170(uVar9);
      puVar4 = &UNK_11058f928;
      func_0x000107c613fc(&UNK_11058f928,0x20,7);
      *(code **)(puVar4 + 0x10) = param_3;
      *(undefined8 *)(puVar4 + 0x18) = param_4;
      pcStack_98 = FUN_102a7ce50;
      apuStack_c0[1] = PTR___NSConcreteStackBlock_11034bd00;
      apuStack_c0[2] = (undefined *)0x42000000;
      apuStack_c0[3] = &UNK_100f17d9c;
      apuStack_c0[4] = &UNK_11058f940;
      puVar5 = apuStack_c0 + 1;
      puStack_90 = puVar4;
      func_0x000107c60bc4(puVar5);
      puVar4 = puStack_90;
      func_0x000107c6157c(param_4);
      func_0x000107c61574(puVar4);
      lVar7 = lVar2;
      func_0x000107c50784();
      func_0x000107c61180();
      func_0x000107c60bd0(puVar5);
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(uVar6);
      lVar2 = 0;
      func_0x000107c5eea4();
      (**(code **)(*(long *)(lVar2 + -8) + 8))((long)puVar8 + (long)iVar1,lVar2);
      goto LAB_102a7bf30;
    }
  }
  lVar7 = 0;
LAB_102a7bf30:
  uVar6 = *(undefined8 *)(param_2 + _DAT_112ee6de8);
  *(long *)(param_2 + _DAT_112ee6de8) = lVar7;
  func_0x000107c615e8(uVar6);
  return;
}



/* Entry: 102a7bf64; end: 102a7bfb3;  */

undefined8 FUN_102a7bf64(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112ee6db8;
  func_0x0001000285a8(0x112ee6db8,&UNK_10db12230);
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 102a7bfb4; end: 102a7bfb7;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a7bfb4(ulong param_1)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long extraout_x8;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long unaff_x20;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined *apuStack_c0 [5];
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  long lStack_70;
  long lStack_68;
  
  lVar12 = 0x112ee6db8;
  func_0x0001000285a8(0x112ee6db8,&UNK_10db12230);
  uVar11 = (ulong)*(byte *)(*(long *)(lVar12 + -8) + 0x50);
  lVar1 = *(long *)(unaff_x20 + 0x10);
  pcVar2 = *(code **)(unaff_x20 + 0x18);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  lVar12 = 0x112ee6db8;
  func_0x0001000285a8(0x112ee6db8,&UNK_10db12230);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar13 = (undefined8 *)((long)apuStack_c0 + -extraout_x8);
  if (((param_1 & 1) == 0) || ((*(byte *)(lVar1 + _DAT_112ee6df0) & 1) != 0)) {
    lVar4 = 0;
    FUN_102a73a44();
    lVar12 = lVar4;
    func_0x000107c610f8();
    *(undefined1 *)(lVar12 + _DAT_112ee69b8) = 0;
    *(undefined1 *)(lVar12 + _DAT_112ee69c0) = 0;
    *(undefined8 *)(lVar12 + _DAT_112ee69c8) = 0;
    plVar5 = &lStack_70;
    lStack_70 = lVar12;
    lStack_68 = lVar4;
    func_0x000107c61154(plVar5,PTR_s_init_1125d9248);
    (*pcVar2)();
    func_0x000107c61170(plVar5);
    return;
  }
  func_0x000107c61428(lVar4 + 0x10,auStack_88,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    lVar10 = *(long *)(lVar4 + _DAT_112ee6db0);
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar10 != 0) {
      func_0x000102a7bb70(unaff_x20 + (uVar11 + 0x30 & (uVar11 ^ 0xffffffffffffffff)),puVar13);
      func_0x000107c61170(*puVar13);
      func_0x000107c615e8(*(undefined8 *)((long)apuStack_c0 + -extraout_x8 + 8U));
      iVar3 = *(int *)(lVar12 + 0x40);
      uVar14 = *(undefined8 *)((long)puVar13 + (long)*(int *)(lVar12 + 0x50));
      uVar6 = uVar14;
      func_0x000107c5d1a4(uVar14);
      func_0x000107c61180();
      func_0x000107c61170(uVar14);
      puVar7 = &UNK_11058f928;
      func_0x000107c613fc(&UNK_11058f928,0x20,7);
      *(code **)(puVar7 + 0x10) = pcVar2;
      *(undefined8 *)(puVar7 + 0x18) = uVar9;
      pcStack_98 = FUN_102a7ce50;
      apuStack_c0[1] = PTR___NSConcreteStackBlock_11034bd00;
      apuStack_c0[2] = (undefined *)0x42000000;
      apuStack_c0[3] = &UNK_100f17d9c;
      apuStack_c0[4] = &UNK_11058f940;
      puVar8 = apuStack_c0 + 1;
      puStack_90 = puVar7;
      func_0x000107c60bc4(puVar8);
      puVar7 = puStack_90;
      func_0x000107c6157c(uVar9);
      func_0x000107c61574(puVar7);
      lVar12 = lVar10;
      func_0x000107c50784();
      func_0x000107c61180();
      func_0x000107c60bd0(puVar8);
      func_0x000107c615e8(lVar10);
      func_0x000107c61170(uVar6);
      lVar4 = 0;
      func_0x000107c5eea4();
      (**(code **)(*(long *)(lVar4 + -8) + 8))((long)puVar13 + (long)iVar3,lVar4);
      goto LAB_102a7bf30;
    }
  }
  lVar12 = 0;
LAB_102a7bf30:
  uVar9 = *(undefined8 *)(lVar1 + _DAT_112ee6de8);
  *(long *)(lVar1 + _DAT_112ee6de8) = lVar12;
  func_0x000107c615e8(uVar9);
  return;
}



/* Entry: 102a7bfb8; end: 102a7bff3;  */

void FUN_102a7bfb8(undefined8 param_1,code *param_2)

{
  func_0x000107c615f0();
  func_0x000102a73b68();
  (*param_2)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102a7bff4; end: 102a7bfff; -[_TtC19ShoppingLensFetcher27ShoppingLensAssetDownloader fetch:checksum:ttl:completionBlock:] */

void FUN_102a7bff4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c60bc4(param_6);
  func_0x000107c5edb4(puVar3,param_4);
  if (param_5 == 0) {
    param_5 = 0;
    param_3 = 0;
  }
  else {
    func_0x000107c5faec(param_5);
  }
  func_0x000107c60bc4(param_6);
  func_0x000107c61174(param_2);
  puVar2 = puVar3;
  (*(code *)0x102a7c77c)(param_1,puVar3,param_5,param_3,param_2,param_6);
  func_0x000107c60bd0(param_6);
  func_0x000107c60bd0(param_6);
  func_0x000107c61170(param_2);
  func_0x000107c6142c(param_3);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 102a7c000; end: 102a7c127;  */

void FUN_102a7c000(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,code *param_7)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c60bc4(param_6);
  func_0x000107c5edb4(puVar3,param_4);
  if (param_5 == 0) {
    param_5 = 0;
    param_3 = 0;
  }
  else {
    func_0x000107c5faec(param_5);
  }
  func_0x000107c60bc4(param_6);
  func_0x000107c61174(param_2);
  puVar2 = puVar3;
  (*param_7)(param_1,puVar3,param_5,param_3,param_2,param_6);
  func_0x000107c60bd0(param_6);
  func_0x000107c60bd0(param_6);
  func_0x000107c61170(param_2);
  func_0x000107c6142c(param_3);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 102a7c128; end: 102a7c157; -[_TtC19ShoppingLensFetcherP33_656CB6D45229008A6ECBE3CB86C6D40613FetchCanceler cancel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a7c128(long param_1)

{
  if ((*(byte *)(param_1 + _DAT_112ee6df0) & 1) == 0) {
    *(undefined1 *)(param_1 + _DAT_112ee6df0) = 1;
    if (*(long *)(param_1 + _DAT_112ee6de8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(long *)(param_1 + _DAT_112ee6de8),PTR_s_cancel_1125a9090);
      return;
    }
  }
  return;
}



/* Entry: 102a7c158; end: 102a7c167; -[_TtC19ShoppingLensFetcherP33_656CB6D45229008A6ECBE3CB86C6D40613FetchCanceler isCancelled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_102a7c158(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112ee6df0);
}



/* Entry: 102a7c168; end: 102a7c1bf; -[_TtC19ShoppingLensFetcherP33_656CB6D45229008A6ECBE3CB86C6D40613FetchCanceler init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a7c168(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined8 uStack_28;
  
  *(undefined8 *)(param_1 + _DAT_112ee6de8) = 0;
  *(undefined1 *)(param_1 + _DAT_112ee6df0) = 0;
  uVar1 = 0;
  FUN_102a7bcbc();
  lStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102a7c1c0; end: 102a7c1cf;  */

void FUN_102a7c1c0(void)

{
  FUN_102a7bcbc();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102a7c1d0; end: 102a7c1ff;  */

void FUN_102a7c1d0(undefined8 param_1,code *param_2)

{
  (*param_2)();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102a7c200; end: 102a7c223; -[_TtC19ShoppingLensFetcherP33_656CB6D45229008A6ECBE3CB86C6D40613FetchCanceler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a7c200(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ee6de8));
  return;
}



/* Entry: 102a7c224; end: 102a7cd0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102a7c224(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined **ppuVar12;
  long *plVar13;
  long lVar14;
  long extraout_x8;
  long extraout_x12;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 auStack_100 [4];
  long alStack_e0 [2];
  undefined *puStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  long lStack_80;
  long lStack_78;
  
  lVar7 = 0x112ee6db8;
  lStack_c0 = param_5;
  func_0x0001000285a8(0x112ee6db8,&UNK_10db12230);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  lVar11 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar16 = (undefined8 *)((long)alStack_e0 + lVar11);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar15 = (undefined8 *)((long)puVar16 - extraout_x12);
  puVar2 = &UNK_11058f8b0;
  lVar14 = 0x18;
  func_0x000107c613fc(&UNK_11058f8b0,0x18,7);
  *(long *)(puVar2 + 0x10) = param_6;
  alStack_e0[0] = param_6;
  puStack_b8 = puVar2;
  if (param_4 == 0) {
    func_0x000107c60bc4(param_6);
    func_0x000107c5ed70();
  }
  else {
    func_0x000107c60bc4(param_6);
    lVar14 = param_4;
    param_6 = param_3;
  }
  puStack_b0 = (undefined *)0x7461642e736e656c;
  uStack_a8 = 0xe900000000000061;
  func_0x000107c61434(param_4);
  func_0x000107c5fb78(param_6,lVar14);
  func_0x000107c6142c(lVar14);
  uVar8 = uStack_a8;
  puVar2 = puStack_b0;
  puVar3 = PTR_PTR_1126b08b8;
  func_0x000107c610f8();
  uVar9 = uVar8;
  func_0x000107c5fadc(puVar2,uVar8);
  func_0x000107c6142c(uVar8);
  func_0x000107c4766c();
  func_0x000107c61170(puVar2);
  puVar2 = PTR_PTR_1126b1058;
  func_0x000107c610f8();
  func_0x000107c46d48();
  puVar4 = puVar2;
  func_0x000107c5ed70();
  puVar5 = puVar3;
  uVar8 = uVar9;
  func_0x000107c4c99c();
  func_0x000107c61180();
  if (puVar5 == (undefined *)0x0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar8);
  }
  puStack_d0 = (undefined *)(long)*(int *)(lVar7 + 0x40);
  lStack_c8 = (long)*(int *)(lVar7 + 0x50);
  puVar6 = PTR_PTR_1126b1050;
  func_0x000107c610f8();
  alStack_e0[1] = lVar7;
  func_0x000107c61174();
  func_0x000107c5fadc(puVar4,uVar9);
  func_0x000107c6142c(uVar9);
  puVar15[-2] = puVar2;
  *(undefined1 *)(puVar15 + -3) = 0;
  puVar15[-4] = puVar5;
  func_0x000107c4915c();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar5);
  puVar4 = PTR_PTR_1126b1378;
  func_0x000107c61168();
  func_0x000107c4c950(puVar3);
  uVar8 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61538();
  puVar5 = PTR_PTR_1126b1060;
  func_0x000107c610f8(PTR_PTR_1126b1060);
  func_0x000107c5fc48(uVar8,PTR___sSSN_11034da80);
  func_0x000107c47d08(puVar5);
  func_0x000107c61170(uVar8);
  func_0x000107c4ed5c();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  func_0x000107c5ee80((long)puVar15 + (long)puStack_d0,param_1);
  func_0x000107c61170(puVar2);
  *puVar15 = puVar3;
  puVar15[1] = puVar6;
  lVar7 = lStack_c0;
  puStack_d0 = puVar6;
  *(undefined **)((long)puVar15 + lStack_c8) = puVar4;
  lVar7 = *(long *)(lVar7 + _DAT_112ee6db0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar7 == 0) {
    FUN_102a73a44();
    lVar11 = lVar7;
    func_0x000107c610f8();
    *(undefined1 *)(lVar11 + _DAT_112ee69b8) = 0;
    *(undefined1 *)(lVar11 + _DAT_112ee69c0) = 0;
    *(undefined8 *)(lVar11 + _DAT_112ee69c8) = 0;
    plVar13 = &lStack_80;
    lStack_80 = lVar11;
    lStack_78 = lVar7;
    func_0x000107c61154(plVar13,PTR_s_init_1125d9248);
    (**(code **)(alStack_e0[0] + 0x10))(alStack_e0[0],plVar13);
    func_0x000107c61170(plVar13);
    lVar11 = 0;
    puVar2 = puStack_b8;
  }
  else {
    uVar8 = 0;
    func_0x000107c5fadc(0,0xe000000000000000);
    uVar9 = 0;
    func_0x000107c5fadc(0,0xe000000000000000);
    func_0x000102a7bb70(puVar15,puVar16);
    func_0x000107c61170(*puVar16);
    func_0x000107c615e8(*(undefined8 *)((long)alStack_e0 + lVar11 + 8));
    iVar1 = *(int *)(alStack_e0[1] + 0x40);
    uVar10 = *(undefined8 *)((long)puVar16 + (long)*(int *)(alStack_e0[1] + 0x50));
    func_0x000107c61170();
    func_0x000107c5ee70();
    lVar11 = 0;
    func_0x000107c5eea4();
    (**(code **)(*(long *)(lVar11 + -8) + 8))((long)puVar16 + (long)iVar1,lVar11);
    puVar3 = &UNK_11058f8d8;
    func_0x000107c613fc(&UNK_11058f8d8,0x20,7);
    puVar2 = puStack_b8;
    *(undefined8 *)(puVar3 + 0x10) = 0x102a7ce58;
    *(undefined **)(puVar3 + 0x18) = puStack_b8;
    uStack_90 = 0x102a7ce74;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0x42000000;
    puStack_a0 = &UNK_100f17820;
    puStack_98 = &UNK_11058f8f0;
    ppuVar12 = &puStack_b0;
    puStack_88 = puVar3;
    func_0x000107c60bc4();
    puVar3 = puStack_88;
    func_0x000107c6157c(puVar2);
    func_0x000107c61574(puVar3);
    puVar15[-3] = uVar10;
    puVar15[-2] = ppuVar12;
    *(undefined2 *)(puVar15 + -4) = 0x100;
    lVar11 = lVar7;
    func_0x000107c42260(lVar7);
    func_0x000107c61180();
    func_0x000107c615e8(lVar7);
    func_0x000107c60bd0(ppuVar12);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar10);
  }
  func_0x000102a7bb28(puVar15);
  func_0x000107c61574(puVar2);
  return lVar11;
}



/* Entry: 102a7cd10; end: 102a7cd3f;  */

void FUN_102a7cd10(undefined8 param_1)

{
  long unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c614f0();
                    /* WARNING: Could not recover jumptable at 0x000102a7c220. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
  return;
}



/* Entry: 102a7cd40; end: 102a7cdff;  */

void FUN_102a7cd40(void)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  ulong uVar5;
  
  lVar3 = 0x112ee6db8;
  func_0x0001000285a8(0x112ee6db8,&UNK_10db12230);
  uVar5 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  puVar1 = (undefined8 *)(unaff_x20 + (uVar5 + 0x30 & (uVar5 ^ 0xffffffffffffffff)));
  func_0x000107c61170(*puVar1);
  func_0x000107c615e8(puVar1[1]);
  iVar2 = *(int *)(lVar3 + 0x40);
  lVar4 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar4 + -8) + 8))((long)puVar1 + (long)iVar2,lVar4);
  func_0x000107c61170(*(undefined8 *)((long)puVar1 + (long)*(int *)(lVar3 + 0x50)));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102a7ce00; end: 102a7ce4f;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a7ce00(ulong param_1)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long extraout_x8;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long unaff_x20;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined *apuStack_c0 [5];
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  long lStack_70;
  long lStack_68;
  
  lVar12 = 0x112ee6db8;
  func_0x0001000285a8(0x112ee6db8,&UNK_10db12230);
  uVar11 = (ulong)*(byte *)(*(long *)(lVar12 + -8) + 0x50);
  lVar1 = *(long *)(unaff_x20 + 0x10);
  pcVar2 = *(code **)(unaff_x20 + 0x18);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  lVar12 = 0x112ee6db8;
  func_0x0001000285a8(0x112ee6db8,&UNK_10db12230);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar13 = (undefined8 *)((long)apuStack_c0 + -extraout_x8);
  if (((param_1 & 1) == 0) || ((*(byte *)(lVar1 + _DAT_112ee6df0) & 1) != 0)) {
    lVar4 = 0;
    FUN_102a73a44();
    lVar12 = lVar4;
    func_0x000107c610f8();
    *(undefined1 *)(lVar12 + _DAT_112ee69b8) = 0;
    *(undefined1 *)(lVar12 + _DAT_112ee69c0) = 0;
    *(undefined8 *)(lVar12 + _DAT_112ee69c8) = 0;
    plVar5 = &lStack_70;
    lStack_70 = lVar12;
    lStack_68 = lVar4;
    func_0x000107c61154(plVar5,PTR_s_init_1125d9248);
    (*pcVar2)();
    func_0x000107c61170(plVar5);
    return;
  }
  func_0x000107c61428(lVar4 + 0x10,auStack_88,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    lVar10 = *(long *)(lVar4 + _DAT_112ee6db0);
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar10 != 0) {
      func_0x000102a7bb70(unaff_x20 + (uVar11 + 0x30 & (uVar11 ^ 0xffffffffffffffff)),puVar13);
      func_0x000107c61170(*puVar13);
      func_0x000107c615e8(*(undefined8 *)((long)apuStack_c0 + -extraout_x8 + 8U));
      iVar3 = *(int *)(lVar12 + 0x40);
      uVar14 = *(undefined8 *)((long)puVar13 + (long)*(int *)(lVar12 + 0x50));
      uVar6 = uVar14;
      func_0x000107c5d1a4(uVar14);
      func_0x000107c61180();
      func_0x000107c61170(uVar14);
      puVar7 = &UNK_11058f928;
      func_0x000107c613fc(&UNK_11058f928,0x20,7);
      *(code **)(puVar7 + 0x10) = pcVar2;
      *(undefined8 *)(puVar7 + 0x18) = uVar9;
      pcStack_98 = FUN_102a7ce50;
      apuStack_c0[1] = PTR___NSConcreteStackBlock_11034bd00;
      apuStack_c0[2] = (undefined *)0x42000000;
      apuStack_c0[3] = &UNK_100f17d9c;
      apuStack_c0[4] = &UNK_11058f940;
      puVar8 = apuStack_c0 + 1;
      puStack_90 = puVar7;
      func_0x000107c60bc4(puVar8);
      puVar7 = puStack_90;
      func_0x000107c6157c(uVar9);
      func_0x000107c61574(puVar7);
      lVar12 = lVar10;
      func_0x000107c50784();
      func_0x000107c61180();
      func_0x000107c60bd0(puVar8);
      func_0x000107c615e8(lVar10);
      func_0x000107c61170(uVar6);
      lVar4 = 0;
      func_0x000107c5eea4();
      (**(code **)(*(long *)(lVar4 + -8) + 8))((long)puVar13 + (long)iVar3,lVar4);
      goto LAB_102a7bf30;
    }
  }
  lVar12 = 0;
LAB_102a7bf30:
  uVar9 = *(undefined8 *)(lVar1 + _DAT_112ee6de8);
  *(long *)(lVar1 + _DAT_112ee6de8) = lVar12;
  func_0x000107c615e8(uVar9);
  return;
}



/* Entry: 102a7ce50; end: 102a7ce7b;  */

void FUN_102a7ce50(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  func_0x000107c615f0(param_1,pcVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000102a73b68();
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102a7ce7c; end: 102a7d057;  */

undefined1  [16]
FUN_102a7ce7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  undefined1 *puVar7;
  long lVar8;
  code *pcVar9;
  undefined1 auVar10 [16];
  
  lVar1 = 0;
  func_0x000107c5ef14();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar7 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = PTR__OBJC_CLASS___NSNumberFormatter_1126b1a70;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar3 = 0x53555f6e65;
  func_0x000107c5eed0(puVar7,0x53555f6e65,0xe500000000000000);
  func_0x000107c5ef00();
  pcVar9 = *(code **)(lVar8 + 8);
  (*pcVar9)(puVar7,lVar1);
  func_0x000107c5601c(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c5fadc(param_3,param_4);
  puVar4 = puVar2;
  func_0x000107c4d904();
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  if (puVar4 != (undefined *)0x0) {
    func_0x000107c5ef04(puVar7);
    func_0x000107c5ef00();
    (*pcVar9)(puVar7,lVar1);
    func_0x000107c5601c(puVar2);
    func_0x000107c61170(param_3);
    func_0x000107c56bbc(puVar2);
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c53c64(puVar2);
    func_0x000107c61170(param_1);
    puVar5 = puVar2;
    func_0x000107c5c1c0();
    func_0x000107c61180();
    if (puVar5 != (undefined *)0x0) {
      puVar6 = puVar5;
      func_0x000107c5faec();
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(puVar4);
      goto LAB_102a7d038;
    }
    func_0x000107c61170(puVar2);
    puVar2 = puVar4;
  }
  func_0x000107c61170(puVar2);
  puVar6 = (undefined *)0x0;
  param_2 = 0;
LAB_102a7d038:
  auVar10._8_8_ = param_2;
  auVar10._0_8_ = puVar6;
  return auVar10;
}



/* Entry: 102a7d058; end: 102a7d09b;  */

long FUN_102a7d058(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 102a7d09c; end: 102a7dbef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a7d09c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long extraout_x8;
  long lVar12;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  undefined8 *puVar13;
  long alStack_1a0 [2];
  undefined8 *puStack_190;
  undefined8 uStack_188;
  long *plStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long alStack_138 [3];
  long lStack_120;
  undefined **ppuStack_118;
  long alStack_110 [3];
  long lStack_f8;
  undefined **ppuStack_f0;
  undefined1 auStack_e8 [40];
  undefined1 auStack_c0 [40];
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  lVar1 = 0;
  func_0x000107c5f804();
  lStack_170 = *(long *)(lVar1 + -8);
  lStack_168 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_170 + 0x40));
  lVar12 = (long)alStack_1a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_178 = lVar12;
  func_0x000107c613fc();
  lVar2 = 0;
  FUN_102a7e384();
  lVar4 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar4 + _DAT_112ee6f60) = param_2;
  *(undefined8 *)(lVar4 + _DAT_112ee6f68) = param_3;
  *(undefined8 *)(lVar4 + _DAT_112ee6f70) = param_4;
  lVar1 = 0x112ee6e90;
  uStack_140 = param_2;
  func_0x0001000285a8(0x112ee6e90,&UNK_10db12270);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = param_5;
  *(undefined8 *)(lVar1 + 0x18) = 0x4072c00000000000;
  *(long *)(lVar4 + _DAT_112ee6f78) = lVar1;
  *(undefined8 *)(lVar4 + _DAT_112ee6f80) = param_6;
  puVar7 = PTR_s_init_1125d9248;
  uStack_150 = param_5;
  uStack_148 = param_6;
  lStack_78 = lVar4;
  lStack_70 = lVar2;
  func_0x000107c615f0(param_2);
  uVar11 = param_3;
  func_0x000107c61174();
  alStack_1a0[1] = uVar11;
  func_0x000107c61174();
  uStack_188 = param_4;
  func_0x000107c615f0(param_5);
  func_0x000107c615f0(param_6);
  plVar3 = &lStack_78;
  func_0x000107c61154(plVar3,puVar7);
  *(long *)(unaff_x20 + 0x28) = lVar2;
  *(undefined ***)(unaff_x20 + 0x30) = &PTR_DAT_11058faa0;
  puStack_190 = (undefined8 *)(unaff_x20 + 0x10);
  *puStack_190 = plVar3;
  lVar4 = 0;
  FUN_102a7bac0();
  lVar1 = lVar4;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ee6db0) = param_1;
  puVar7 = PTR_s_init_1125d9248;
  lStack_88 = lVar1;
  lStack_80 = lVar4;
  func_0x000107c61174();
  plVar3 = &lStack_88;
  uStack_158 = param_1;
  func_0x000107c61154(plVar3,puVar7);
  *(long **)(unaff_x20 + 0x60) = plVar3;
  lVar4 = 0;
  FUN_102a7b928();
  lVar1 = lVar4;
  func_0x000107c610f8();
  *(undefined **)(lVar1 + _DAT_112ee6d58) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  *(undefined8 *)(lVar1 + _DAT_112ee6d60) = 0x40f5180000000000;
  puVar13 = (undefined8 *)(lVar1 + _DAT_112ee6d68);
  *puVar13 = 0x534e454c;
  puVar13[1] = 0xe400000000000000;
  *(long **)(lVar1 + _DAT_112ee6d70) = plVar3;
  puVar7 = PTR_s_init_1125d9248;
  lStack_98 = lVar1;
  lStack_90 = lVar4;
  func_0x000107c61174();
  plVar5 = &lStack_98;
  plStack_180 = plVar3;
  func_0x000107c61154(plVar5,puVar7);
  *(long *)(unaff_x20 + 0x50) = lVar4;
  *(undefined ***)(unaff_x20 + 0x58) = &PTR_DAT_11058f6f8;
  *(undefined8 *)(unaff_x20 + 0x38) = plVar5;
  lVar6 = 0;
  lStack_160 = unaff_x20;
  func_0x000102a79dcc();
  lVar1 = lVar6;
  func_0x000107c613fc();
  alStack_1a0[0] = lVar1;
  func_0x000107c3fa04();
  func_0x000107c61180();
  *(undefined8 *)(lVar1 + 0x10) = param_4;
  puVar7 = PTR_PTR_1126aeea8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar8 = 0;
  FUN_102a79690();
  lVar9 = lVar8;
  func_0x000107c613fc();
  func_0x000107c61174();
  puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_102a7349c();
  lVar2 = lStack_168;
  lVar4 = lStack_170;
  lVar1 = lStack_178;
  *(undefined8 *)(lVar9 + 0x18) = param_3;
  *(undefined **)(lVar9 + 0x20) = puVar10;
  *(undefined **)(lVar9 + 0x10) = puVar7;
  (**(code **)(lStack_170 + 0x68))
            (lStack_178,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7utilityyA2EmFWC_11034f7f8,
             lStack_168);
  puVar10 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  uVar11 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f0e5df0);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar11);
  (**(code **)(lVar4 + 8))(lVar1,lVar2);
  FUN_102a7d058(puStack_190,auStack_c0);
  FUN_102a7d058((undefined8 *)(unaff_x20 + 0x38),auStack_e8);
  lVar1 = alStack_1a0[0];
  ppuStack_f0 = &PTR_DAT_11058f610;
  alStack_110[0] = alStack_1a0[0];
  ppuStack_118 = &PTR_DAT_11058f400;
  lVar2 = 0;
  alStack_138[0] = lVar9;
  lStack_120 = lVar8;
  lStack_f8 = lVar6;
  func_0x000102a757c4();
  func_0x000107c613fc();
  func_0x0001000c6518(alStack_110,lVar6);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  puVar13 = (undefined8 *)(lVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar13);
  uVar11 = *puVar13;
  *(long *)(lVar2 + 0x30) = lVar6;
  *(undefined ***)(lVar2 + 0x38) = &PTR_DAT_11058f610;
  *(undefined8 *)(lVar2 + 0x18) = uVar11;
  func_0x0001000c6560(0);
  func_0x000107c613fc();
  plVar3 = plStack_180;
  func_0x000107c61174();
  lVar4 = lVar1;
  func_0x000107c6157c();
  func_0x0001000c6580();
  func_0x000107c61574(lVar1);
  func_0x000107c615e8(uStack_140);
  func_0x000107c61170(alStack_1a0[1]);
  func_0x000107c61170(uStack_188);
  func_0x000107c615e8(uStack_150);
  func_0x000107c615e8(uStack_148);
  func_0x000107c61170(uStack_158);
  *(long *)(lVar2 + 0xc0) = lVar4;
  func_0x000107c61614(lVar2 + 200,0);
  func_0x000107c61614(lVar2 + 0xd0,0);
  *(undefined8 *)(lVar2 + 0xd8) = 0;
  *(undefined8 *)(lVar2 + 0xe0) = 0;
  puVar7 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  *(undefined **)(lVar2 + 0xe8) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  *(undefined **)(lVar2 + 0xf0) = puVar7;
  *(undefined **)(lVar2 + 0x10) = puVar10;
  func_0x000100d1855c(auStack_c0,lVar2 + 0x70);
  func_0x000100d1855c(auStack_e8,lVar2 + 0x98);
  *(long **)(lVar2 + 0x68) = plVar3;
  func_0x000100d1855c(alStack_138,lVar2 + 0x40);
  func_0x0001000834e4(alStack_110);
  *(long *)(lStack_160 + 0x68) = lVar2;
  return;
}



/* Entry: 102a7dbf0; end: 102a7dce3;  */

void FUN_102a7dbf0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  lVar5 = *(long *)(unaff_x20 + 0x68);
  uVar4 = *(undefined8 *)(lVar5 + 0x10);
  puVar1 = &UNK_11058f978;
  func_0x000107c613fc(&UNK_11058f978,0x18,7);
  func_0x000107c61644(puVar1 + 0x10,lVar5);
  puVar2 = &UNK_11058f9a0;
  func_0x000107c613fc(&UNK_11058f9a0,0x28,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  uStack_50 = 0x102a7dec8;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_11058f9b8;
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



/* Entry: 102a7dce4; end: 102a7de7b;  */

void FUN_102a7dce4(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  lVar3 = *(long *)(unaff_x20 + 0x68);
  uVar4 = *(undefined8 *)(lVar3 + 0x10);
  puVar1 = &UNK_11058f978;
  func_0x000107c613fc(&UNK_11058f978,0x18,7);
  func_0x000107c61644(puVar1 + 0x10,lVar3);
  uStack_40 = 0x102a7df28;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_11058f9e0;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c4e524(uVar4);
  func_0x000107c60bd0(ppuVar2);
  func_0x0001000834e4(unaff_x20 + 0x10);
  func_0x0001000834e4(unaff_x20 + 0x38);
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c6145c();
  return;
}



/* Entry: 102a7de7c; end: 102a7debb;  */

void FUN_102a7de7c(undefined8 param_1)

{
  long *unaff_x20;
  
  FUN_102a7d058(*unaff_x20 + 0x10,param_1);
  return;
}



/* Entry: 102a7debc; end: 102a7def7;  */

void FUN_102a7debc(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)(*(undefined8 *)(*unaff_x20 + 0x60));
  return;
}



/* Entry: 102a7def8; end: 102a7df17;  */

void FUN_102a7def8(void)

{
  func_0x000107c61168(&PTR_PTR_112ee6ed8);
  return;
}



/* Entry: 102a7df18; end: 102a7df2f;  */

void FUN_102a7df18(long param_1,long param_2)

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



/* Entry: 102a7df30; end: 102a7dfbf;  */

void FUN_102a7df30(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5fadc();
  func_0x000107c4d9e8();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  if (lVar3 != 0) {
    lVar1 = lVar3;
    func_0x000107c4a764();
    func_0x000107c61180();
    func_0x000107c615e8(lVar3);
    if (lVar1 != 0) {
      FUN_102a83314();
      lVar2 = lVar1;
      func_0x000107c61480(lVar1,lVar3);
      if (lVar2 == 0) {
        func_0x000107c615e8(lVar1);
      }
    }
  }
  return;
}



/* Entry: 102a7dfc0; end: 102a7e15b;  */

/* WARNING: Possible PIC construction at 0x000102a7e0e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a7e0f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a7e0ec) */
/* WARNING: Removing unreachable block (ram,0x000102a7e0fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a7dfc0(long param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lStack_50;
  long lStack_48;
  
  if (param_1 == 0) {
    uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
    func_0x000107c5fadc(param_2,param_3);
    func_0x000107c6142c(param_3);
    func_0x000107c56bd8(uVar5);
  }
  else {
    uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
    lVar3 = 0x112ee7010;
    func_0x0001000285a8(0x112ee7010,&UNK_10db123e0);
    lVar4 = lVar3;
    func_0x000107c610f8();
    puVar1 = (undefined8 *)(lVar4 + _DAT_112ee6868);
    *puVar1 = 0x5344415241;
    puVar1[1] = 0xe500000000000000;
    puVar1 = (undefined8 *)(lVar4 + _DAT_112ee6870);
    *puVar1 = 0x676e6970706f6853;
    puVar1[1] = 0xec000000736e654c;
    *(undefined1 *)(lVar4 + _DAT_112ee6880) = 0;
    *(long *)(lVar4 + _DAT_112ee6860) = param_1;
    *(undefined8 *)(lVar4 + _DAT_112ee6878) = 0x4072c00000000000;
    puVar2 = PTR_s_init_1125d9248;
    lStack_50 = lVar4;
    lStack_48 = lVar3;
    func_0x000107c61174(param_1);
    func_0x000107c61154(&lStack_50,puVar2);
    func_0x000107c5fadc(param_2,param_3);
    func_0x000107c6142c(param_3);
    func_0x000107c56bd8(uVar5);
    param_2 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 102a7e15c; end: 102a7e22f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a7e15c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ee6f60) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ee6f68) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ee6f70) = param_3;
  lVar1 = 0x112ee6e90;
  func_0x0001000285a8(0x112ee6e90,&UNK_10db12270);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = param_4;
  *(undefined8 *)(lVar1 + 0x18) = 0x4072c00000000000;
  *(long *)(unaff_x20 + _DAT_112ee6f78) = lVar1;
  *(undefined8 *)(unaff_x20 + _DAT_112ee6f80) = param_5;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102a7e230; end: 102a7e243;  */

bool FUN_102a7e230(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 102a7e244; end: 102a7e2ef;  */

void FUN_102a7e244(void)

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



/* Entry: 102a7e2f0; end: 102a7e2ff;  */

void FUN_102a7e2f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 102a7e300; end: 102a7e337; -[SCShoppingLensProductPickerDataCoordinatorFetchResult initWithCoder:] */

undefined8 FUN_102a7e300(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61464(param_1,uVar1,0x10,7);
  return 0;
}



/* Entry: 102a7e338; end: 102a7e33b; -[SCShoppingLensProductPickerDataCoordinatorFetchResult encodeWithCoder:] */

void FUN_102a7e338(void)

{
  return;
}



/* Entry: 102a7e33c; end: 102a7e367; -[SCShoppingLensProductPickerDataCoordinatorFetchResult init] */

void FUN_102a7e33c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ShoppingLensFetcher.FetchResult",0x1f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102a7e368);
  (*pcVar1)();
}



/* Entry: 102a7e368; end: 102a7e373;  */

void FUN_102a7e368(void)

{
  FUN_102a83314();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102a7e374; end: 102a7e383; -[SCShoppingLensProductPickerDataCoordinatorFetchResult .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a7e374(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112ee6f88));
  return;
}



/* Entry: 102a7e384; end: 102a7e3a3;  */

void FUN_102a7e384(void)

{
  func_0x000107c61168(&PTR_PTR_1128839b0);
  return;
}



/* Entry: 102a7e3a4; end: 102a7e497; -[_TtC19ShoppingLensFetcher40ShoppingLensProductPickerDataCoordinator initWithCommerceShowcaseService:grapheneLogger:circumstanceEngineServices:metadataCache:showcaseResponsePreloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a7e3a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  *(undefined8 *)(param_1 + _DAT_112ee6f60) = param_3;
  *(undefined8 *)(param_1 + _DAT_112ee6f68) = param_4;
  *(undefined8 *)(param_1 + _DAT_112ee6f70) = param_5;
  lVar2 = 0x112ee6e90;
  func_0x0001000285a8(0x112ee6e90,&UNK_10db12270);
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = param_6;
  *(undefined8 *)(lVar2 + 0x18) = 0x4072c00000000000;
  *(long *)(param_1 + _DAT_112ee6f78) = lVar2;
  *(undefined8 *)(param_1 + _DAT_112ee6f80) = param_7;
  FUN_102a7e384();
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c615f0(param_6);
  func_0x000107c615f0(param_7);
  func_0x000107c61154(&lStack_50,puVar1);
  return;
}



/* Entry: 102a7e498; end: 102a7e4c3; -[_TtC19ShoppingLensFetcher40ShoppingLensProductPickerDataCoordinator init] */

void FUN_102a7e498(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ShoppingLensFetcher.ShoppingLensProductPickerDataCoordinator",0x3c,"init()",6
                      ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102a7e4c4);
  (*pcVar1)();
}



/* Entry: 102a7e4c4; end: 102a7e4cf;  */

void FUN_102a7e4c4(void)

{
  FUN_102a7e384();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102a7e4d0; end: 102a7e4ff;  */

void FUN_102a7e4d0(code *param_1)

{
  (*param_1)();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102a7e500; end: 102a7e567; -[_TtC19ShoppingLensFetcher40ShoppingLensProductPickerDataCoordinator .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102a7e51c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a7e520) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a7e500(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ee6f60));
  return;
}



/* Entry: 102a7e568; end: 102a7f2ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a7e568(byte *param_1,byte **param_2,long param_3,undefined4 param_4,byte *param_5,
                  uint param_6,uint param_7,code *param_8,undefined8 param_9)

{
  ulong uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  byte **ppbVar16;
  long extraout_x8;
  undefined8 *puVar17;
  byte **ppbVar18;
  byte *pbVar19;
  byte **ppbVar20;
  ulong uVar21;
  char cVar22;
  long unaff_x20;
  long lVar23;
  long lVar24;
  byte **ppbVar25;
  ulong *puVar26;
  byte *pbVar27;
  byte *pbVar28;
  byte **ppbVar29;
  byte *pbStack_200;
  byte **ppbStack_1f8;
  long lStack_1f0;
  byte *pbStack_1e8;
  uint uStack_1dc;
  byte **ppbStack_1d8;
  long lStack_1d0;
  undefined4 uStack_1c8;
  uint uStack_1c4;
  byte *pbStack_1c0;
  ulong uStack_1b8;
  code *pcStack_1b0;
  undefined8 uStack_1a8;
  byte *pbStack_1a0;
  byte **ppbStack_198;
  long lStack_190;
  byte **ppbStack_188;
  byte *pbStack_180;
  undefined8 uStack_178;
  long lStack_170;
  byte **ppbStack_168;
  byte bStack_160;
  byte *pbStack_140;
  byte **ppbStack_138;
  long lStack_130;
  byte **ppbStack_128;
  byte *pbStack_120;
  byte *pbStack_118;
  long lStack_110;
  byte **ppbStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  byte **ppbStack_e8;
  byte *pbStack_e0;
  ulong uStack_d8;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uStack_1a8 = param_9;
  lVar11 = 0;
  uStack_1dc = param_7;
  uStack_1c8 = param_4;
  uStack_1c4 = param_6;
  pbStack_1c0 = param_5;
  pcStack_1b0 = param_8;
  FUN_102aabc7c();
  lStack_1d0 = *(long *)(lVar11 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_1d0 + 0x40));
  lVar11 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar26 = (ulong *)((long)&pbStack_200 + lVar11);
  lVar23 = *(long *)(unaff_x20 + _DAT_112ee6f80);
  pbVar27 = param_1;
  ppbVar16 = param_2;
  func_0x000107c5fadc(param_1);
  func_0x000107c441f8();
  func_0x000107c61180();
  func_0x000107c61170(pbVar27);
  if (lVar23 != 0) {
    lVar12 = lVar23;
    func_0x000107c5ee30(lVar23);
    func_0x000107c61170(lVar23);
    puVar13 = PTR_PTR_1126be250;
    func_0x000107c61168();
    lVar23 = lVar12;
    ppbStack_1d8 = ppbVar16;
    func_0x000107c5ee20(lVar12,ppbVar16);
    func_0x000107c4f334();
    func_0x000107c61180();
    func_0x000107c61170(lVar23);
    if (puVar13 != (undefined *)0x0) {
      puVar15 = puVar13;
      FUN_102a82acc(&pbStack_1a0,param_3,puVar13);
      lVar11 = lStack_190;
      uStack_1b8 = (ulong)ppbStack_198;
      pbStack_1c0 = pbStack_1a0;
      lVar23 = param_3;
      func_0x000107c5af0c(param_3);
      func_0x000107c61180();
      lVar24 = lVar23;
      func_0x000107c5ee30();
      func_0x000107c61170(lVar23);
      puVar14 = puVar13;
      func_0x000102a83160(puVar13,lVar24,puVar15);
      func_0x00010006c090(lVar24,puVar15);
      func_0x000107c5af0c(param_3);
      func_0x000107c61180();
      lVar23 = param_3;
      func_0x000107c5ee30();
      func_0x000107c61170(param_3);
      ppbStack_138 = (byte **)uStack_1b8;
      pbStack_140 = pbStack_1c0;
      lStack_130 = lVar11;
      pbStack_120 = pbStack_180;
      ppbStack_128 = ppbStack_188;
      pbStack_118 = (byte *)uStack_178;
      (*pcStack_1b0)(lVar23,puVar15,&pbStack_140,puVar14,1,0);
      uStack_d8 = (ulong)ppbStack_198;
      pbStack_e0 = pbStack_1a0;
      func_0x000100bcb1dc(&pbStack_e0);
      uStack_78 = ppbStack_188;
      uStack_80 = lStack_190;
      func_0x000100bcb1dc(&uStack_80);
      uStack_88 = pbStack_180;
      FUN_102a83b74(&uStack_88,0x112ee5e28,&UNK_10db11218);
      uStack_90 = uStack_178;
      FUN_102a83b74(&uStack_90,0x112ee5e30,&UNK_10db11220);
      func_0x00010006c090(lVar23,puVar15);
      func_0x000107c61170(puVar13);
      func_0x000107c6142c(puVar14);
      func_0x00010006c090(lVar12,ppbStack_1d8);
      return;
    }
    func_0x00010006c090(lVar12,ppbStack_1d8);
  }
  ppbVar25 = param_2;
  ppbStack_1d8 = (byte **)param_1;
  FUN_102a7df30();
  ppbVar16 = ppbVar25;
  if (param_1 != (byte *)0x0) {
    lVar24 = *(long *)(param_1 + _DAT_112ee6f88);
    func_0x000107c61434(lVar24);
    lVar23 = param_3;
    func_0x000107c42214();
    func_0x000107c61180();
    lVar12 = lVar23;
    func_0x000107c5faec();
    ppbVar16 = ppbVar25;
    func_0x000107c61170(lVar23);
    if ((*(long *)(lVar24 + 0x10) == 0) ||
       (ppbVar16 = ppbVar25, func_0x000100029284(), ((ulong)ppbVar16 & 1) == 0)) {
      func_0x000107c6142c(lVar24);
      func_0x000107c6142c(ppbVar25);
    }
    else {
      puVar17 = (undefined8 *)(*(long *)(lVar24 + 0x38) + lVar12 * 0x60);
      ppbStack_138 = (byte **)puVar17[1];
      pbStack_140 = (byte *)*puVar17;
      ppbStack_128 = (byte **)puVar17[3];
      lStack_130 = puVar17[2];
      uStack_f8 = puVar17[9];
      uStack_100 = puVar17[8];
      ppbStack_e8 = (byte **)puVar17[0xb];
      uStack_f0 = puVar17[10];
      pbStack_118 = (byte *)puVar17[5];
      pbStack_120 = (byte *)puVar17[4];
      ppbStack_108 = (byte **)puVar17[7];
      lStack_110 = puVar17[6];
      ppbVar16 = &pbStack_1a0;
      func_0x000102a79920(&pbStack_140);
      func_0x000107c6142c(lVar24);
      func_0x000107c6142c();
      ppbVar29 = ppbStack_e8;
      if (ppbStack_e8 != (byte **)0x0) {
        if ((uStack_1c4 & 0xff) == 1) {
LAB_102a7ec2c:
          pbVar27 = pbStack_120;
          ppbVar18 = ppbStack_128;
          if ((char)pbStack_140 == '\b') {
            if (ppbVar29[2] != (byte *)0x0) {
              ppbStack_198 = (byte **)lStack_110;
              pbStack_1a0 = pbStack_118;
              ppbStack_188 = (byte **)uStack_100;
              lStack_190 = (long)ppbStack_108;
              uStack_178 = uStack_f0;
              pbStack_180 = (byte *)uStack_f8;
              func_0x000107c61434(ppbVar29);
              (*pcStack_1b0)(ppbVar18,pbVar27,&pbStack_1a0,ppbVar29,1,0);
              func_0x000107c6142c(ppbVar29);
              FUN_102a812c4(&pbStack_140);
              func_0x000107c61170(param_1);
              return;
            }
            if ((uStack_1dc & 1) != 0) {
              cVar22 = '\x05';
LAB_102a7ecc4:
              FUN_102a76360();
              puVar13 = &UNK_11058f138;
              func_0x000107c613f8(&UNK_11058f138,ppbVar25,0,0);
              pbVar27 = pbStack_120;
              ppbVar16 = ppbStack_128;
              *(char *)ppbVar25 = cVar22;
              ppbStack_198 = (byte **)lStack_110;
              pbStack_1a0 = pbStack_118;
              ppbStack_188 = (byte **)uStack_100;
              lStack_190 = (long)ppbStack_108;
              uStack_178 = uStack_f0;
              pbStack_180 = (byte *)uStack_f8;
              func_0x000107c614b0();
              (*pcStack_1b0)(ppbVar16,pbVar27,&pbStack_1a0,PTR___swiftEmptyArrayStorage_11034f1c8,1,
                             puVar13);
              func_0x000107c614ac(puVar13);
              func_0x000107c61170(param_1);
              func_0x000107c614ac(puVar13);
              FUN_102a812c4(&pbStack_140);
              return;
            }
          }
          else {
            cVar22 = (char)pbStack_140;
            if ((uStack_1dc & 1) != 0) goto LAB_102a7ecc4;
          }
        }
        else {
          pbStack_1e8 = ppbStack_e8[2];
          if (pbStack_1e8 != (byte *)0x0) {
            lStack_1f0 = (long)ppbStack_e8 +
                         ((ulong)*(byte *)(lStack_1d0 + 0x50) + 0x20 &
                         ((ulong)*(byte *)(lStack_1d0 + 0x50) ^ 0xffffffffffffffff));
            pbStack_200 = (byte *)((ulong)&pbStack_1a0 | 1);
            func_0x000107c61434(ppbStack_e8);
            pbVar27 = (byte *)0x0;
            ppbStack_1f8 = ppbVar29;
            do {
              if (ppbStack_1f8[2] <= pbVar27) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x102a7eec8);
                (*pcVar10)();
              }
              FUN_102a5c6f0(lStack_1f0 + *(long *)(lStack_1d0 + 0x48) * (long)pbVar27,puVar26);
              pbVar19 = (byte *)*puVar26;
              ppbVar29 = *(byte ***)((long)&ppbStack_1f8 + lVar11);
              ppbVar16 = (byte **)((ulong)pbVar19 & 0xffffffffffff);
              ppbVar18 = (byte **)((ulong)ppbVar29 >> 0x38 & 0xf);
              ppbVar25 = ppbVar16;
              if (((ulong)ppbVar29 & 0x2000000000000000) != 0) {
                ppbVar25 = ppbVar18;
              }
              if (ppbVar25 == (byte **)0x0) {
                func_0x000102a5d654(puVar26);
              }
              else {
                if (((ulong)ppbVar29 >> 0x3c & 1) == 0) {
                  if (((ulong)ppbVar29 >> 0x3d & 1) == 0) {
                    if (((ulong)pbVar19 >> 0x3c & 1) == 0) {
                      ppbVar16 = ppbVar29;
                      func_0x000107c60358();
                    }
                    else {
                      pbVar19 = (byte *)(((ulong)ppbVar29 & 0xfffffffffffffff) + 0x20);
                    }
                    if (*pbVar19 == 0x2b) {
                      if ((long)ppbVar16 < 1) {
                    /* WARNING: Does not return */
                        pcVar10 = (code *)SoftwareBreakpoint(1,0x102a7eed8);
                        (*pcVar10)();
                      }
                      lVar23 = (long)ppbVar16 - 1;
                      if (lVar23 == 0) goto LAB_102a7eba4;
                      pbVar28 = (byte *)0x0;
                      do {
                        pbVar19 = pbVar19 + 1;
                        if (((9 < *pbVar19 - 0x30) ||
                            (auVar5._8_8_ = 0, auVar5._0_8_ = pbVar28,
                            SUB168(auVar5 * ZEXT816(10),8) != 0)) ||
                           (uVar21 = (long)pbVar28 * 10, uVar1 = (ulong)(byte)(*pbVar19 - 0x30),
                           pbVar28 = (byte *)(uVar21 + uVar1), CARRY8(uVar21,uVar1)))
                        goto LAB_102a7eba4;
                        ppbVar25 = (byte **)0x0;
                        lVar23 = lVar23 + -1;
                      } while (lVar23 != 0);
                    }
                    else if (*pbVar19 == 0x2d) {
                      if ((long)ppbVar16 < 1) {
                    /* WARNING: Does not return */
                        pcVar10 = (code *)SoftwareBreakpoint(1,0x102a7eed0);
                        (*pcVar10)();
                      }
                      lVar23 = (long)ppbVar16 - 1;
                      if (lVar23 == 0) {
LAB_102a7eba4:
                        pbVar28 = (byte *)0x0;
                        ppbVar25 = (byte **)0x1;
                      }
                      else {
                        pbVar28 = (byte *)0x0;
                        do {
                          pbVar19 = pbVar19 + 1;
                          if (((9 < *pbVar19 - 0x30) ||
                              (auVar3._8_8_ = 0, auVar3._0_8_ = pbVar28,
                              SUB168(auVar3 * ZEXT816(10),8) != 0)) ||
                             (uVar21 = (long)pbVar28 * 10, uVar1 = (ulong)(byte)(*pbVar19 - 0x30),
                             pbVar28 = (byte *)(uVar21 - uVar1), uVar21 < uVar1))
                          goto LAB_102a7eba4;
                          ppbVar25 = (byte **)0x0;
                          lVar23 = lVar23 + -1;
                        } while (lVar23 != 0);
                      }
                    }
                    else {
                      if (ppbVar16 == (byte **)0x0) goto LAB_102a7eba4;
                      if (pbVar19 == (byte *)0x0) {
                        ppbVar25 = (byte **)0x0;
                        pbVar28 = (byte *)0x0;
                      }
                      else {
                        pbVar28 = (byte *)0x0;
                        do {
                          if (((9 < *pbVar19 - 0x30) ||
                              (auVar7._8_8_ = 0, auVar7._0_8_ = pbVar28,
                              SUB168(auVar7 * ZEXT816(10),8) != 0)) ||
                             (uVar21 = (long)pbVar28 * 10, uVar1 = (ulong)(byte)(*pbVar19 - 0x30),
                             pbVar28 = (byte *)(uVar21 + uVar1), CARRY8(uVar21,uVar1)))
                          goto LAB_102a7eba4;
                          ppbVar25 = (byte **)0x0;
                          ppbVar16 = (byte **)((long)ppbVar16 - 1);
                          pbVar19 = pbVar19 + 1;
                        } while (ppbVar16 != (byte **)0x0);
                      }
                    }
                  }
                  else {
                    pbStack_1a0 = pbVar19;
                    ppbStack_198 = (byte **)((ulong)ppbVar29 & 0xffffffffffffff);
                    uVar2 = (uint)pbVar19 & 0xff;
                    if (uVar2 == 0x2b) {
                      if (ppbVar18 == (byte **)0x0) {
                    /* WARNING: Does not return */
                        pcVar10 = (code *)SoftwareBreakpoint(1,0x102a7eecc);
                        (*pcVar10)();
                      }
                      lVar23 = (long)ppbVar18 + -1;
                      if (lVar23 == 0) goto LAB_102a7eba4;
                      pbVar28 = (byte *)0x0;
                      pbVar19 = pbStack_200;
                      do {
                        if (((9 < *pbVar19 - 0x30) ||
                            (auVar6._8_8_ = 0, auVar6._0_8_ = pbVar28,
                            SUB168(auVar6 * ZEXT816(10),8) != 0)) ||
                           (uVar21 = (long)pbVar28 * 10, uVar1 = (ulong)(byte)(*pbVar19 - 0x30),
                           pbVar28 = (byte *)(uVar21 + uVar1), CARRY8(uVar21,uVar1)))
                        goto LAB_102a7eba4;
                        ppbVar25 = (byte **)0x0;
                        lVar23 = lVar23 + -1;
                        pbVar19 = pbVar19 + 1;
                      } while (lVar23 != 0);
                    }
                    else if (uVar2 == 0x2d) {
                      if (ppbVar18 == (byte **)0x0) {
                    /* WARNING: Does not return */
                        pcVar10 = (code *)SoftwareBreakpoint(1,0x102a7eed4);
                        (*pcVar10)();
                      }
                      lVar23 = (long)ppbVar18 + -1;
                      if (lVar23 == 0) goto LAB_102a7eba4;
                      pbVar28 = (byte *)0x0;
                      pbVar19 = pbStack_200;
                      do {
                        if (((9 < *pbVar19 - 0x30) ||
                            (auVar4._8_8_ = 0, auVar4._0_8_ = pbVar28,
                            SUB168(auVar4 * ZEXT816(10),8) != 0)) ||
                           (uVar21 = (long)pbVar28 * 10, uVar1 = (ulong)(byte)(*pbVar19 - 0x30),
                           pbVar28 = (byte *)(uVar21 - uVar1), uVar21 < uVar1)) goto LAB_102a7eba4;
                        ppbVar25 = (byte **)0x0;
                        lVar23 = lVar23 + -1;
                        pbVar19 = pbVar19 + 1;
                      } while (lVar23 != 0);
                    }
                    else {
                      if (ppbVar18 == (byte **)0x0) goto LAB_102a7eba4;
                      pbVar28 = (byte *)0x0;
                      ppbVar20 = &pbStack_1a0;
                      do {
                        if (((9 < *(byte *)ppbVar20 - 0x30) ||
                            (auVar8._8_8_ = 0, auVar8._0_8_ = pbVar28,
                            SUB168(auVar8 * ZEXT816(10),8) != 0)) ||
                           (uVar21 = (long)pbVar28 * 10,
                           uVar1 = (ulong)(byte)(*(byte *)ppbVar20 - 0x30),
                           pbVar28 = (byte *)(uVar21 + uVar1), CARRY8(uVar21,uVar1)))
                        goto LAB_102a7eba4;
                        ppbVar25 = (byte **)0x0;
                        ppbVar18 = (byte **)((long)ppbVar18 + -1);
                        ppbVar20 = (byte **)((long)ppbVar20 + 1);
                      } while (ppbVar18 != (byte **)0x0);
                    }
                  }
                  func_0x000107c61434(ppbVar29);
                  pbVar19 = pbVar28;
                }
                else {
                  func_0x000107c61434(ppbVar29);
                  ppbVar16 = ppbVar29;
                  func_0x000100f5015c(pbVar19,ppbVar29,10);
                  ppbVar25 = ppbVar16;
                }
                func_0x000102a5d654(puVar26);
                func_0x000107c6142c(ppbVar29);
                ppbVar29 = ppbStack_1f8;
                if ((((uint)ppbVar25 & 0xff) != 1) && (pbVar19 == pbStack_1c0)) {
                  ppbVar25 = ppbStack_1f8;
                  func_0x000107c6142c();
                  goto LAB_102a7ec2c;
                }
              }
              pbVar27 = pbVar27 + 1;
            } while (pbVar27 != pbStack_1e8);
            func_0x000107c6142c(ppbStack_1f8);
          }
        }
      }
      FUN_102a812c4(&pbStack_140);
    }
    func_0x000107c61170(param_1);
  }
  func_0x000107c61434(param_2);
  lVar11 = param_3;
  func_0x000107c42214();
  func_0x000107c61180();
  lVar23 = lVar11;
  func_0x000107c5faec();
  ppbVar25 = ppbVar16;
  func_0x000107c61170(lVar11);
  lVar11 = param_3;
  func_0x000107c5af0c();
  func_0x000107c61180();
  lVar12 = lVar11;
  func_0x000107c5ee30();
  func_0x000107c61170(lVar11);
  pbStack_1a0 = (byte *)ppbStack_1d8;
  pbStack_180 = pbStack_1c0;
  uStack_178 = CONCAT71(uStack_178._1_7_,(char)uStack_1c4);
  bStack_160 = (byte)uStack_1c8 & 1;
  uStack_100 = CONCAT71(uStack_100._1_7_,(byte)uStack_1c8) & 0xffffffffffffff01;
  pbStack_118 = (byte *)uStack_178;
  pbStack_120 = pbStack_1c0;
  pbStack_140 = (byte *)ppbStack_1d8;
  puVar13 = &UNK_11058fa60;
  ppbStack_198 = param_2;
  lStack_190 = lVar23;
  ppbStack_188 = ppbVar16;
  lStack_170 = lVar12;
  ppbStack_168 = ppbVar25;
  ppbStack_138 = param_2;
  lStack_130 = lVar23;
  ppbStack_128 = ppbVar16;
  lStack_110 = lVar12;
  ppbStack_108 = ppbVar25;
  func_0x000107c613fc(&UNK_11058fa60,0x18,7);
  func_0x000107c61614(puVar13 + 0x10);
  puVar14 = &UNK_11058fa88;
  func_0x000107c613fc(&UNK_11058fa88,0x71,7);
  uVar9 = uStack_1a8;
  *(undefined **)(puVar14 + 0x10) = puVar13;
  *(code **)(puVar14 + 0x18) = pcStack_1b0;
  *(undefined8 *)(puVar14 + 0x20) = uStack_1a8;
  *(long *)(puVar14 + 0x28) = param_3;
  *(undefined8 *)(puVar14 + 0x58) = uStack_178;
  *(byte **)(puVar14 + 0x50) = pbStack_180;
  *(byte ***)(puVar14 + 0x68) = ppbStack_168;
  *(long *)(puVar14 + 0x60) = lStack_170;
  puVar14[0x70] = bStack_160;
  *(byte ***)(puVar14 + 0x38) = ppbStack_198;
  *(byte **)(puVar14 + 0x30) = pbStack_1a0;
  *(byte ***)(puVar14 + 0x48) = ppbStack_188;
  *(long *)(puVar14 + 0x40) = lStack_190;
  func_0x000107c6157c(puVar13);
  func_0x000107c6157c(uVar9);
  func_0x000107c61174(param_3);
  FUN_102a7f550(&pbStack_1a0,&pbStack_e0);
  FUN_102a7f2bc(&pbStack_140,FUN_102a7f2ac,puVar14);
  func_0x000107c61574(puVar13);
  func_0x000107c61574(puVar14);
  func_0x000102a7f584(&pbStack_1a0);
  return;
}



/* Entry: 102a7f2ac; end: 102a7f2bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a7f2ac(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined1 *puVar16;
  undefined *puVar17;
  long unaff_x20;
  undefined8 *puStack_198;
  undefined8 *puStack_190;
  undefined *apuStack_188 [2];
  undefined1 auStack_178 [24];
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
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar8 = *(long *)(unaff_x20 + 0x10);
  pcVar3 = *(code **)(unaff_x20 + 0x18);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar16 = auStack_178;
  func_0x000107c61428(lVar8 + 0x10,puVar16,0,0,*(undefined8 *)(unaff_x20 + 0x20));
  lVar8 = lVar8 + 0x10;
  func_0x000107c61618();
  if (lVar8 == 0) {
    func_0x000107c5af0c(uVar9);
    func_0x000107c61180();
    uVar10 = uVar9;
    func_0x000107c5ee30();
    func_0x000107c61170(uVar9);
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    (*pcVar3)(uVar10,puVar16,&uStack_100,PTR___swiftEmptyArrayStorage_11034f1c8,0,param_2);
    func_0x00010006c090(uVar10,puVar16);
  }
  else if ((param_1 == 0) || (param_2 != 0)) {
    func_0x000107c5af0c(uVar9);
    func_0x000107c61180();
    uVar10 = uVar9;
    func_0x000107c5ee30();
    func_0x000107c61170(uVar9);
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    (*pcVar3)(uVar10,puVar16,&uStack_100,PTR___swiftEmptyArrayStorage_11034f1c8,0,param_2);
    func_0x00010006c090(uVar10,puVar16);
    func_0x000107c61170(lVar8);
  }
  else {
    func_0x000107c61174();
    FUN_102a82acc(&uStack_160,uVar9,param_1);
    uVar7 = uStack_148;
    uVar6 = uStack_150;
    uVar5 = uStack_158;
    uVar4 = uStack_160;
    uVar9 = *(undefined8 *)(unaff_x20 + 0x60);
    uVar10 = *(undefined8 *)(unaff_x20 + 0x68);
    lVar11 = param_1;
    func_0x000102a83160(param_1,uVar9,uVar10);
    uStack_a0 = uVar4;
    uStack_98 = uVar5;
    uStack_90 = uVar6;
    uStack_88 = uVar7;
    uStack_80 = uStack_140;
    uStack_78 = uStack_138;
    func_0x00010006c00c(uVar9,uVar10);
    (*pcVar3)(uVar9,uVar10,&uStack_a0,lVar11,0,0);
    lVar12 = *(long *)(unaff_x20 + 0x30);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
    func_0x000107c61434(uVar1);
    FUN_102a7df30(lVar12,uVar1);
    puVar17 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
    if (lVar12 != 0) {
      puVar17 = *(undefined **)(lVar12 + _DAT_112ee6f88);
      func_0x000107c61434(puVar17);
    }
    uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x48);
    uStack_f8 = *(undefined8 *)(unaff_x20 + 0x50);
    uStack_108 = uStack_158;
    uStack_110 = uStack_160;
    uStack_118 = uStack_148;
    uStack_120 = uStack_150;
    uStack_130 = uStack_138;
    uStack_128 = uStack_140;
    uStack_100 = CONCAT71(uStack_100._1_7_,8);
    uStack_f0 = CONCAT71(uStack_f0._1_7_,*(undefined1 *)(unaff_x20 + 0x58));
    uStack_d8 = uVar4;
    uStack_d0 = uVar5;
    uStack_c8 = uVar6;
    uStack_c0 = uVar7;
    uStack_b8 = uStack_140;
    uStack_b0 = uStack_138;
    uStack_e8 = uVar9;
    uStack_e0 = uVar10;
    lStack_a8 = lVar11;
    func_0x000107c61434(lVar11);
    func_0x000100402194(&uStack_110,apuStack_188);
    func_0x000100402194(&uStack_120,apuStack_188);
    FUN_102a83c90(&uStack_128,apuStack_188,0x112ee5e28,&UNK_10db11218);
    FUN_102a83c90(&uStack_130,apuStack_188,0x112ee5e30,&UNK_10db11220);
    puVar13 = puVar17;
    func_0x000107c61558(puVar17);
    puVar14 = &uStack_100;
    apuStack_188[0] = puVar17;
    func_0x000102a794d0(puVar14,uVar1,uVar2,puVar13);
    puVar13 = apuStack_188[0];
    FUN_102a83314();
    puVar15 = puVar14;
    func_0x000107c610f8();
    puVar17 = PTR_s_init_1125d9248;
    *(undefined **)((long)puVar15 + _DAT_112ee6f88) = puVar13;
    puStack_198 = puVar15;
    puStack_190 = puVar14;
    func_0x000107c6157c(puVar13);
    func_0x000107c61154(&puStack_198,puVar17);
    FUN_102a7dfc0();
    func_0x000107c61170(param_1);
    func_0x000100bcb1dc(&uStack_110);
    func_0x000100bcb1dc(&uStack_120);
    FUN_102a83b74(&uStack_128,0x112ee5e28,&UNK_10db11218);
    FUN_102a83b74(&uStack_130,0x112ee5e30,&UNK_10db11220);
    func_0x000107c61170(lVar8);
    func_0x000107c61574(puVar13);
    func_0x000107c61170(lVar12);
    func_0x000107c6142c(lVar11);
  }
  return;
}



/* Entry: 102a7f2bc; end: 102a7f54f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a7f2bc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  ulong uVar7;
  long extraout_x12;
  ulong uVar8;
  long unaff_x20;
  long lVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auStack_110 [8];
  long lStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [72];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  
  lVar2 = 0;
  uStack_f0 = param_2;
  uStack_e8 = param_3;
  func_0x000107c5eea4();
  lVar12 = *(long *)(lVar2 + -8);
  lVar13 = *(long *)(lVar12 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar11 = auStack_110 + -(lVar13 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = (long)puVar11 - extraout_x12;
  puVar10 = (undefined *)0x0;
  if (*(char *)(param_1 + 5) != '\x01') {
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c490d8();
    func_0x000107c61180();
  }
  puVar3 = PTR_PTR_1126b0840;
  func_0x000107c61168();
  uVar4 = param_1[6];
  func_0x000107c5ee20(uVar4,param_1[7]);
  func_0x000107c4b058();
  func_0x000107c61180();
  puStack_f8 = puVar3;
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar4);
  func_0x000107c5eea0(lVar9);
  uStack_100 = *(undefined8 *)(unaff_x20 + _DAT_112ee6f60);
  puVar3 = &UNK_11058fa60;
  func_0x000107c613fc(&UNK_11058fa60,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  (**(code **)(lVar12 + 0x10))(puVar11,lVar9,lVar2);
  uVar7 = (ulong)*(byte *)(lVar12 + 0x50);
  uVar14 = uVar7 + 0x18 & (uVar7 ^ 0xffffffffffffffff);
  lVar13 = uVar14 + lVar13;
  uVar8 = lVar13 + 0x4fU & 0xfffffffffffffff8;
  puVar5 = &UNK_11058fdc0;
  lStack_108 = lVar9;
  func_0x000107c613fc(&UNK_11058fdc0,uVar8 + 0x10,uVar7 | 7);
  *(undefined **)(puVar5 + 0x10) = puVar3;
  (**(code **)(lVar12 + 0x20))(puVar5 + uVar14,puVar11,lVar2);
  uVar4 = uStack_e8;
  puVar1 = (undefined8 *)(puVar5 + (lVar13 + 7U & 0xfffffffffffffff8));
  uVar15 = param_1[4];
  uVar17 = param_1[7];
  uVar16 = param_1[6];
  puVar1[5] = param_1[5];
  puVar1[4] = uVar15;
  puVar1[7] = uVar17;
  puVar1[6] = uVar16;
  *(undefined1 *)(puVar1 + 8) = *(undefined1 *)(param_1 + 8);
  uVar17 = *param_1;
  uVar16 = param_1[3];
  uVar15 = param_1[2];
  puVar1[1] = param_1[1];
  *puVar1 = uVar17;
  puVar1[3] = uVar16;
  puVar1[2] = uVar15;
  *(undefined8 *)(puVar5 + uVar8) = uStack_f0;
  *(undefined8 *)((long)(puVar5 + uVar8) + 8) = uStack_e8;
  pcStack_78 = FUN_102a83bb4;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0x42000000;
  pcStack_88 = FUN_102a7f9cc;
  puStack_80 = &UNK_11058fdd8;
  ppuVar6 = &puStack_98;
  puStack_70 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  puVar3 = puStack_70;
  FUN_102a7f550(param_1,auStack_e0);
  func_0x000107c6157c(uVar4);
  func_0x000107c61574(puVar3);
  puVar3 = puStack_f8;
  func_0x000107c43f70(uStack_100);
  func_0x000107c61170(puVar3);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61170(puVar10);
  (**(code **)(lVar12 + 8))(lStack_108,lVar2);
  return;
}



/* Entry: 102a7f550; end: 102a7f5df;  */

undefined8 FUN_102a7f550(undefined8 param_1,undefined8 param_2)

{
  FUN_102a838a0(param_2,param_1,&UNK_11058fba8);
  return param_2;
}



/* Entry: 102a7f5e0; end: 102a7f9cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a7f5e0(undefined8 param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  code *param_9)

{
  bool bVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long extraout_x8;
  long lVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  long lVar14;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  
  lVar3 = 0;
  uStack_a8 = param_7;
  uStack_a0 = param_8;
  pcStack_98 = param_9;
  func_0x000107c5eea4();
  lVar14 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  if (param_2 == (undefined1 *)0x0) {
    bVar1 = false;
  }
  else {
    puVar12 = param_2;
    func_0x000107c61174();
    puVar13 = puVar12;
    func_0x000107c4f340();
    func_0x000107c61180();
    if (puVar13 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102a7f9c8);
      (*pcVar2)();
    }
    uVar4 = 0;
    func_0x000102a83cd8(0,0x112e118a0,&PTR_PTR_1126b02b0);
    puVar5 = puVar13;
    func_0x000107c5fc54(puVar13,uVar4);
    func_0x000107c61170(puVar13);
    if ((ulong)puVar5 >> 0x3e == 0) {
      puVar13 = *(undefined1 **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar13 = (undefined1 *)((ulong)puVar5 & 0xffffffffffffff8);
      if ((undefined1 *)0x7fffffffffffffff < puVar5) {
        puVar13 = puVar5;
      }
      func_0x000107c60480();
    }
    func_0x000107c6142c(puVar5);
    func_0x000107c61170(puVar12);
    bVar1 = puVar13 != (undefined1 *)0x0 &&
            (param_2 != (undefined1 *)0x0 && param_5 == (undefined *)0x0);
  }
  func_0x000107c61428(param_6 + 0x10,auStack_88,0,0);
  puVar12 = (undefined1 *)(param_6 + 0x10);
  func_0x000107c61618();
  puVar6 = puVar12;
  if (puVar12 != (undefined1 *)0x0) {
    lVar11 = *(long *)(puVar12 + _DAT_112ee6f68);
    if (lVar11 != 0) {
      func_0x000107c61174(lVar11);
      func_0x000107c5eea0(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
      func_0x000107c5ee68(uStack_a8);
      (**(code **)(lVar14 + 8))(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar3);
      puVar6 = PTR_PTR_1126abe10;
      func_0x000107c610f8();
      func_0x000107c453e4();
      func_0x000107c55860();
      if (param_5 != (undefined *)0x0) {
        puVar7 = param_5;
        func_0x000107c5ed2c();
        puVar8 = puVar7;
        func_0x000107c3fcb0();
        puVar9 = PTR___sSiN_11034deb0;
        puVar10 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
        puStack_90 = puVar8;
        func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
        func_0x000107c5fadc();
        func_0x000107c6142c(puVar10);
        func_0x000107c5465c(puVar6);
        func_0x000107c61170(puVar7);
        func_0x000107c61170(puVar9);
      }
      func_0x000107c61174();
      func_0x000107c4bbb8(param_1,lVar11);
      func_0x000107c4bbbc(lVar11);
      func_0x000107c61170(puVar12);
      func_0x000107c61170(lVar11);
      func_0x000107c61170(puVar6);
    }
    func_0x000107c61170();
  }
  if (bVar1) {
    (*pcStack_98)(param_2,0);
  }
  else {
    if (param_5 == (undefined *)0x0) {
      if (param_2 != (undefined1 *)0x0) {
        func_0x000107c61174();
        puVar12 = param_2;
        func_0x000107c4f340();
        func_0x000107c61180();
        if (puVar12 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102a7f9cc);
          (*pcVar2)();
        }
        uVar4 = 0;
        func_0x000102a83cd8(0,0x112e118a0,&PTR_PTR_1126b02b0);
        puVar13 = puVar12;
        func_0x000107c5fc54(puVar12,uVar4);
        func_0x000107c61170(puVar12);
        if ((ulong)puVar13 >> 0x3e == 0) {
          puVar12 = *(undefined1 **)(((ulong)puVar13 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar12 = (undefined1 *)((ulong)puVar13 & 0xffffffffffffff8);
          if ((undefined1 *)0x7fffffffffffffff < puVar13) {
            puVar12 = puVar13;
          }
          func_0x000107c60480();
        }
        func_0x000107c6142c();
        if (puVar12 == (undefined1 *)0x0) {
          FUN_102a83c50();
          puVar6 = &UNK_11058fe80;
          func_0x000107c613f8(&UNK_11058fe80,puVar13,0,0);
          *puVar13 = 4;
          (*pcStack_98)(0,puVar6);
          func_0x000107c614ac(puVar6);
          func_0x000107c61170(param_2);
          return;
        }
        func_0x000107c61170();
        puVar6 = param_2;
      }
      FUN_102a83c50();
      param_5 = &UNK_11058fe80;
      func_0x000107c613f8(&UNK_11058fe80,puVar6,0,0);
      *puVar6 = 3;
      (*pcStack_98)(0,param_5);
    }
    else {
      func_0x000107c614b0(param_5);
      (*pcStack_98)(0,param_5);
    }
    func_0x000107c614ac(param_5);
  }
  return;
}



/* Entry: 102a7f9cc; end: 102a7fa97;  */

/* WARNING: Possible PIC construction at 0x000102a7fa28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a7fa64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a7fa2c) */
/* WARNING: Removing unreachable block (ram,0x000102a7fa68) */

void FUN_102a7f9cc(long param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  if (param_3 == 0) {
    func_0x000107c6157c(*(undefined8 *)(param_1 + 0x28));
    func_0x000107c61174(param_2);
    lVar2 = param_4;
    func_0x000107c61174(param_4);
    (*pcVar1)(param_2,0,0xf000000000000000,param_4);
  }
  else {
    func_0x000107c6157c(*(undefined8 *)(param_1 + 0x28));
    func_0x000107c61174(param_2);
    lVar2 = param_3;
    func_0x000107c61174(param_3);
    func_0x000107c5ee30(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 102a7fa98; end: 102a805f3;  */

void FUN_102a7fa98(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong *param_4)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined *puVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  ulong uVar16;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  ulong uVar17;
  ulong uVar18;
  undefined *puVar19;
  long lVar20;
  undefined8 *puVar21;
  long lVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puStack_1d0;
  ulong uStack_1c8;
  code *apcStack_1c0 [5];
  long lStack_198;
  undefined *apuStack_190 [2];
  long lStack_180;
  undefined *apuStack_178 [6];
  long lStack_148;
  ulong *puStack_140;
  long lStack_138;
  code *pcStack_128;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
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
  
  lVar6 = 0;
  puStack_140 = param_4;
  FUN_102aabc7c();
  lStack_138 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_138 + 0x40));
  lVar22 = (long)&puStack_1d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_148 = lVar22;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar21 = (undefined8 *)(lVar22 - extraout_x12);
  lVar22 = 0x112ee5e70;
  func_0x0001000285a8(0x112ee5e70,&UNK_10db11270);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar22 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  iVar5 = (int)lVar22;
  lVar22 = (long)puVar21 - extraout_x8_00;
  puVar24 = (undefined *)*param_1;
  func_0x0001060faadc();
  puVar9 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_128 = (code *)0x0;
  puVar23 = (undefined *)0x0;
  if (iVar5 != 0) {
    puVar12 = puVar24;
    func_0x000107c3cfd4();
    func_0x000107c61180();
    if (puVar12 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x102a805f4);
      (*pcVar4)();
    }
    puVar23 = &UNK_11058fd48;
    func_0x000107c613fc(&UNK_11058fd48,0x18,7);
    *(undefined **)(puVar23 + 0x10) = puVar24;
    puVar19 = &UNK_11058fd70;
    func_0x000107c613fc(&UNK_11058fd70,0x20,7);
    pcStack_128 = FUN_102a83b6c;
    *(code **)(puVar19 + 0x10) = FUN_102a83b6c;
    *(undefined **)(puVar19 + 0x18) = puVar23;
    pcStack_f0 = (code *)0x102a83ee0;
    puStack_110 = puVar9;
    uStack_108 = 0x42000000;
    puStack_100 = &UNK_1010f3860;
    puStack_f8 = &UNK_11058fd88;
    ppuVar7 = &puStack_110;
    puStack_e8 = puVar19;
    func_0x000107c60bc4(ppuVar7);
    puVar19 = puStack_e8;
    func_0x000107c61174(puVar24);
    func_0x000107c61574(puVar19);
    func_0x000107c4c6b0(puVar12);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61170(puVar12);
  }
  lVar8 = 0;
  apuStack_178[0] = puVar23;
  FUN_102aabe08();
  (**(code **)(*(long *)(lVar8 + -8) + 0x38))(lVar22,1,1,lVar8);
  puVar23 = puVar24;
  func_0x000107c3cfd4();
  func_0x000107c61180();
  if (puVar23 == (undefined *)0x0) {
    apuStack_178[4] = (undefined *)0x0;
    apuStack_178[5] = (undefined *)0x0;
    apuStack_178[2] = (undefined *)0x0;
    apuStack_178[3] = (undefined *)0x0;
    pcVar4 = (code *)0x0;
    apuStack_178[1] = (undefined *)0x0;
  }
  else {
    puVar12 = &UNK_11058fbe0;
    func_0x000107c613fc(&UNK_11058fbe0,0x30,7);
    *(long *)(puVar12 + 0x10) = lVar22;
    *(undefined **)(puVar12 + 0x18) = puVar24;
    *(undefined8 *)(puVar12 + 0x20) = param_2;
    *(undefined8 *)(puVar12 + 0x28) = param_3;
    puVar19 = &UNK_11058fc08;
    func_0x000107c613fc(&UNK_11058fc08,0x20,7);
    apuStack_178[4] = (undefined *)0x102a83ad4;
    *(undefined8 *)(puVar19 + 0x10) = 0x102a83ad4;
    *(undefined **)(puVar19 + 0x18) = puVar12;
    pcStack_f0 = FUN_102a83ae0;
    puStack_110 = puVar9;
    uStack_108 = 0x42000000;
    puStack_100 = &UNK_101339710;
    puStack_f8 = &UNK_11058fc20;
    ppuVar7 = &puStack_110;
    apuStack_178[5] = puVar12;
    puStack_e8 = puVar19;
    func_0x000107c60bc4(ppuVar7);
    puVar9 = puStack_e8;
    puVar19 = puVar24;
    func_0x000107c61174();
    func_0x00010006c00c(param_2,param_3);
    func_0x000107c61574(puVar9);
    puVar9 = &UNK_11058fc58;
    func_0x000107c613fc(&UNK_11058fc58,0x20,7);
    *(long *)(puVar9 + 0x10) = lVar22;
    *(undefined **)(puVar9 + 0x18) = puVar19;
    puVar12 = &UNK_11058fc80;
    func_0x000107c613fc(&UNK_11058fc80,0x20,7);
    apuStack_178[2] = (undefined *)0x102a83b1c;
    *(undefined8 *)(puVar12 + 0x10) = 0x102a83b1c;
    *(undefined **)(puVar12 + 0x18) = puVar9;
    pcStack_f0 = FUN_102a83b24;
    puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_108 = 0x42000000;
    puStack_100 = &UNK_1010f3860;
    puStack_f8 = &UNK_11058fc98;
    ppuVar10 = &puStack_110;
    apuStack_178[3] = puVar9;
    puStack_e8 = puVar12;
    func_0x000107c60bc4(ppuVar10);
    puVar9 = puStack_e8;
    func_0x000107c61174();
    func_0x000107c61574(puVar9);
    puVar9 = &UNK_11058fcd0;
    func_0x000107c613fc(&UNK_11058fcd0,0x20,7);
    *(long *)(puVar9 + 0x10) = lVar22;
    *(undefined **)(puVar9 + 0x18) = puVar19;
    puVar12 = &UNK_11058fcf8;
    func_0x000107c613fc(&UNK_11058fcf8,0x20,7);
    pcVar4 = FUN_102a83b44;
    *(code **)(puVar12 + 0x10) = FUN_102a83b44;
    *(undefined **)(puVar12 + 0x18) = puVar9;
    pcStack_f0 = FUN_102a83b4c;
    puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_108 = 0x42000000;
    puStack_100 = &UNK_101339a78;
    puStack_f8 = &UNK_11058fd10;
    ppuVar11 = &puStack_110;
    apuStack_178[1] = puVar9;
    puStack_e8 = puVar12;
    func_0x000107c60bc4(ppuVar11);
    puVar9 = puStack_e8;
    func_0x000107c61174(puVar19);
    func_0x000107c61574(puVar9);
    func_0x000107c4c6b0(puVar23);
    func_0x000107c60bd0(ppuVar11);
    func_0x000107c60bd0(ppuVar10);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61170(puVar23);
  }
  puVar23 = puVar24;
  func_0x000107c5dc94();
  func_0x000107c61180();
  if (puVar23 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x102a805e4);
    (*pcVar4)();
  }
  puVar12 = (undefined *)0x0;
  func_0x000102a83cd8(0,0x112ee6fe0,&PTR_PTR_1126be2f0);
  puVar9 = puVar23;
  func_0x000107c5fc54();
  func_0x000107c61170(puVar23);
  if ((ulong)puVar9 >> 0x3e == 0) {
    puVar19 = puVar12;
    if (*(long *)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10) == 0) goto LAB_102a80074;
LAB_102a7ff68:
    if (((ulong)puVar9 & 0xc000000000000001) == 0) {
      if (*(long *)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102a805e0);
        (*pcVar4)();
      }
      lVar8 = *(long *)(puVar9 + 0x20);
      func_0x000107c61174();
    }
    else {
      lVar8 = 0;
      puVar19 = puVar9;
      func_0x000102a81a14(0,puVar9,&PTR_PTR_1126be2f0,0x112ee6fe0);
    }
    func_0x000107c6142c(puVar9);
    lVar13 = lVar8;
    func_0x000107c4f210();
    func_0x000107c61180();
    func_0x000107c61170(lVar8);
    if (lVar13 == 0) goto LAB_102a80078;
    lVar8 = lVar13;
    func_0x000107c40eb8();
    func_0x000107c61180();
    if (lVar8 == 0) {
      func_0x000107c61170(lVar13);
      goto LAB_102a80078;
    }
    lVar20 = lVar8;
    puVar9 = puVar19;
    func_0x000107c5faec();
    puVar12 = puVar9;
    func_0x000107c61170(lVar8);
    lVar8 = lVar13;
    func_0x000107c3dc6c();
    func_0x000107c61180();
    if (lVar8 == 0) {
      func_0x000107c61170(lVar13);
      goto LAB_102a80074;
    }
    lVar14 = lVar8;
    func_0x000107c5faec();
    func_0x000107c61170(lVar8);
    puVar23 = puVar9;
    FUN_102a7ce7c(lVar20,puVar9,lVar14,puVar12);
    puVar19 = puVar23;
    func_0x000107c6142c(puVar9);
    func_0x000107c6142c(puVar12);
    func_0x000107c61170(lVar13);
  }
  else {
    puVar23 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar9) {
      puVar23 = puVar9;
    }
    func_0x000107c60480();
    puVar19 = puVar12;
    if (puVar23 != (undefined *)0x0) goto LAB_102a7ff68;
LAB_102a80074:
    func_0x000107c6142c(puVar9);
    puVar19 = puVar12;
LAB_102a80078:
    lVar20 = 0;
    puVar23 = (undefined *)0x0;
  }
  puVar9 = puVar24;
  func_0x000107c3e0d0(puVar24);
  func_0x000107c61180();
  FUN_102a7ad20(&puStack_110);
  func_0x000107c61170(puVar9);
  puVar9 = puVar24;
  func_0x000107c4f31c();
  func_0x000107c61180();
  if (puVar9 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x102a805e8);
    (*pcVar4)();
  }
  puVar12 = puVar9;
  func_0x000107c5faec();
  apuStack_190[0] = puVar19;
  func_0x000107c61170(puVar9);
  puVar9 = puVar24;
  func_0x000107c5cab0();
  func_0x000107c61180();
  if (puVar9 == (undefined *)0x0) {
    lStack_198 = 0;
    apcStack_1c0[4] = (code *)0x0;
  }
  else {
    puVar15 = puVar9;
    func_0x000107c5faec();
    apcStack_1c0[4] = (code *)puVar19;
    lStack_198 = (long)puVar15;
    func_0x000107c61170(puVar9);
  }
  puVar9 = puVar24;
  func_0x000107c4f318();
  func_0x000107c61180();
  if (puVar9 == (undefined *)0x0) {
    apcStack_1c0[3] = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar15 = puVar9;
    puVar19 = PTR___sSSN_11034da80;
    func_0x000107c5fc54();
    apcStack_1c0[3] = (code *)puVar15;
    func_0x000107c61170(puVar9);
  }
  puVar9 = puVar24;
  func_0x000107c3ec6c();
  func_0x000107c61180();
  if (puVar9 == (undefined *)0x0) {
    apcStack_1c0[2] = (code *)0x0;
    apcStack_1c0[1] = (code *)0x0;
  }
  else {
    puVar15 = puVar9;
    func_0x000107c5faec();
    apcStack_1c0[1] = (code *)puVar19;
    apcStack_1c0[2] = (code *)puVar15;
    func_0x000107c61170(puVar9);
  }
  puVar9 = puVar24;
  apuStack_190[1] = puVar23;
  lStack_180 = lVar20;
  func_0x000107c44fc0();
  func_0x000107c61180();
  if (puVar9 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x102a805ec);
    (*pcVar4)();
  }
  iVar5 = *(int *)(lVar6 + 0x28);
  puVar23 = puVar9;
  func_0x000107c5faec();
  func_0x000107c61170(puVar9);
  func_0x000107c5edd0((long)puVar21 + (long)iVar5,puVar23,puVar19);
  func_0x000107c6142c(puVar19);
  uVar17 = (long)puVar21 + (long)*(int *)(lVar6 + 0x2c);
  func_0x000102a83c90(lVar22,uVar17,0x112ee5e70,&UNK_10db11270);
  puVar23 = puVar24;
  func_0x000107c5bee8();
  func_0x000107c61180();
  if (puVar23 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x102a805f0);
    (*pcVar4)();
  }
  puVar9 = puVar23;
  func_0x000107c5faec();
  uVar18 = uVar17;
  func_0x000107c61170(puVar23);
  func_0x000107c6142c(uVar17);
  uVar16 = (ulong)puVar9 & 0xffffffffffff;
  if ((uVar17 & 0x2000000000000000) != 0) {
    uVar16 = uVar17 >> 0x38 & 0xf;
  }
  uVar17 = uVar18;
  if (uVar16 == 0) {
LAB_102a802ac:
    uStack_1c8 = 0;
    uVar18 = 0;
  }
  else {
    puVar23 = puVar24;
    func_0x000107c5bee8();
    func_0x000107c61180();
    uVar17 = uVar18;
    if (puVar23 == (undefined *)0x0) goto LAB_102a802ac;
    puVar9 = puVar23;
    func_0x000107c5faec();
    uVar17 = uVar18;
    uStack_1c8 = (ulong)puVar9;
    func_0x000107c61170(puVar23);
  }
  puVar23 = puVar24;
  func_0x000107c5beec();
  func_0x000107c61180();
  uVar16 = uVar17;
  apcStack_1c0[0] = pcVar4;
  if (puVar23 != (undefined *)0x0) {
    puVar9 = puVar23;
    func_0x000107c42120();
    func_0x000107c61180();
    func_0x000107c61170(puVar23);
    uVar16 = uVar17;
    if (puVar9 != (undefined *)0x0) {
      puVar23 = puVar9;
      func_0x000107c5faec();
      uVar16 = uVar17;
      func_0x000107c61170(puVar9);
      goto LAB_102a80318;
    }
  }
  puVar23 = (undefined *)0x0;
  uVar17 = 0;
LAB_102a80318:
  puVar9 = puVar24;
  func_0x000107c5ce58();
  func_0x000107c61180();
  if (puVar9 == (undefined *)0x0) {
    puVar19 = (undefined *)0x0;
    uVar16 = 0;
  }
  else {
    puVar19 = puVar9;
    func_0x000107c5faec();
    func_0x000107c61170(puVar9);
  }
  puVar15 = apuStack_178[0];
  puVar9 = apuStack_190[0];
  *puVar21 = puVar12;
  puVar21[1] = puVar9;
  pcVar4 = apcStack_1c0[4];
  puVar21[2] = lStack_198;
  puVar21[3] = pcVar4;
  puVar21[4] = 0;
  puVar21[5] = 0;
  lVar8 = lStack_180;
  puVar21[6] = apcStack_1c0[3];
  puVar21[7] = lVar8;
  puVar21[8] = apuStack_190[1];
  puVar21[9] = apcStack_1c0[2];
  puVar21[10] = apcStack_1c0[1];
  puVar1 = (undefined8 *)((long)puVar21 + (long)*(int *)(lVar6 + 0x30));
  puVar1[0x11] = uStack_88;
  puVar1[0x10] = uStack_90;
  puVar1[0x13] = uStack_78;
  puVar1[0x12] = uStack_80;
  puVar1[0x14] = uStack_70;
  puVar1[9] = uStack_c8;
  puVar1[8] = uStack_d0;
  puVar1[0xb] = uStack_b8;
  puVar1[10] = uStack_c0;
  puVar3 = puStack_f8;
  puVar12 = puStack_100;
  puVar9 = puStack_110;
  puVar1[1] = uStack_108;
  *puVar1 = puVar9;
  puVar1[3] = puVar3;
  puVar1[2] = puVar12;
  pcVar4 = pcStack_f0;
  puVar1[5] = puStack_e8;
  puVar1[4] = pcVar4;
  puVar1[7] = uStack_d8;
  puVar1[6] = uStack_e0;
  puVar1[0xd] = uStack_a8;
  puVar1[0xc] = uStack_b0;
  puVar1[0xf] = uStack_98;
  puVar1[0xe] = uStack_a0;
  puVar1 = (undefined8 *)((long)puVar21 + (long)*(int *)(lVar6 + 0x34));
  *puVar1 = uStack_1c8;
  puVar1[1] = uVar18;
  puVar1 = (undefined8 *)((long)puVar21 + (long)*(int *)(lVar6 + 0x38));
  *puVar1 = puVar23;
  puVar1[1] = uVar17;
  puVar1 = (undefined8 *)((long)puVar21 + (long)*(int *)(lVar6 + 0x3c));
  *puVar1 = puVar19;
  puVar1[1] = uVar16;
  *(undefined **)((long)puVar21 + (long)*(int *)(lVar6 + 0x40)) = puVar24;
  lVar6 = lStack_148;
  FUN_102a5c6f0(puVar21,lStack_148);
  puVar2 = puStack_140;
  uVar18 = *puStack_140;
  func_0x000107c61174(puVar24);
  uVar17 = uVar18;
  func_0x000107c61558();
  *puVar2 = uVar18;
  uVar16 = uVar18;
  if ((uVar17 & 1) == 0) {
    uVar16 = 0;
    FUN_102a816d4(0,*(long *)(uVar18 + 0x10) + 1,1,uVar18,0x112ee63b8,&UNK_10db123b0,FUN_102aabc7c,
                  PTR__swift_bridgeObjectRelease_11034f258);
    *puVar2 = uVar16;
  }
  uVar17 = *(ulong *)(uVar16 + 0x10);
  uVar18 = uVar16;
  if (*(ulong *)(uVar16 + 0x18) >> 1 <= uVar17) {
    uVar18 = (ulong)(1 < *(ulong *)(uVar16 + 0x18));
    FUN_102a816d4(uVar18,uVar17 + 1,1,uVar16,0x112ee63b8,&UNK_10db123b0,FUN_102aabc7c,
                  PTR__swift_bridgeObjectRelease_11034f258);
    *puVar2 = uVar18;
  }
  *(ulong *)(uVar18 + 0x10) = uVar17 + 1;
  func_0x000102a5d690(lVar6,uVar18 + ((ulong)*(byte *)(lStack_138 + 0x50) + 0x20 &
                                     ((ulong)*(byte *)(lStack_138 + 0x50) ^ 0xffffffffffffffff)) +
                            *(long *)(lStack_138 + 0x48) * uVar17);
  func_0x000102a5d654(puVar21);
  FUN_102a83b74(lVar22,0x112ee5e70,&UNK_10db11270);
  func_0x000100d18668(pcStack_128,puVar15);
  func_0x000100d18668(apuStack_178[4],apuStack_178[5]);
  func_0x000100d18668(apuStack_178[2],apuStack_178[3]);
  func_0x000100d18668(apcStack_1c0[0],apuStack_178[1]);
  return;
}



/* Entry: 102a805f4; end: 102a807d7;  */

void FUN_102a805f4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long extraout_x8;
  long extraout_x12;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar7 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = (long)puVar7 - extraout_x12;
  FUN_102a83c90(param_1,lVar5,0x112d36580,&UNK_10d9016d0);
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar9 = *(long *)(lVar2 + -8);
  pcVar10 = *(code **)(lVar9 + 0x30);
  lVar1 = lVar5;
  (*pcVar10)(lVar5,1,lVar2);
  lVar8 = 0;
  if ((int)lVar1 != 1) {
    func_0x000107c5ed90();
    (**(code **)(lVar9 + 8))(lVar5,lVar2);
    lVar8 = lVar1;
  }
  FUN_102a83c90(param_1,puVar7,0x112d36580,&UNK_10d9016d0);
  puVar6 = puVar7;
  (*pcVar10)(puVar7,1,lVar2);
  if ((int)puVar6 == 1) {
    puVar6 = (undefined1 *)0x0;
  }
  else {
    func_0x000107c5ed90();
    (**(code **)(lVar9 + 8))(puVar7,lVar2);
  }
  puVar3 = PTR_PTR_1126be2f8;
  func_0x000107c61168(PTR_PTR_1126be2f8);
  func_0x000107c42c7c();
  func_0x000107c61180();
  func_0x000107c61170(lVar8);
  func_0x000107c61170(puVar6);
  func_0x000107c61174(puVar3);
  uVar4 = 0x694c6e6f69746361;
  func_0x000107c5fadc(0x694c6e6f69746361,0xea00000000006b6e);
  func_0x000107c5a4a0(param_2);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 102a807d8; end: 102a80877;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_102a807d8(undefined8 param_1,undefined8 *param_2,undefined8 param_3,ulong param_4,
                  ulong param_5)

{
  long lVar1;
  uint uVar2;
  
  FUN_102a83b74(param_2,0x112ee5e70,&UNK_10db11270);
  *param_2 = param_3;
  param_2[1] = param_4;
  param_2[2] = param_5;
  lVar1 = 0;
  FUN_102aabe08();
  func_0x000107c6159c(param_2,lVar1,1);
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_2,0,1,lVar1);
  func_0x000107c61174(param_3);
  uVar2 = (uint)(param_5 >> 0x3e);
  if (uVar2 == 1) {
    param_4 = param_5 & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_4);
  return;
}



/* Entry: 102a80878; end: 102a8101b;  */

void FUN_102a80878(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x8_00;
  long lVar4;
  undefined1 *puVar5;
  code *pcVar6;
  long lVar7;
  
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &stack0xffffffffffffffa0 + -extraout_x8;
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar4 = (long)puVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_102a83c90(param_1,puVar5,0x112d36580,&UNK_10d9016d0);
  puVar3 = puVar5;
  (**(code **)(lVar7 + 0x30))(puVar5,1,lVar2);
  if ((int)puVar3 == 1) {
    FUN_102a83b74(puVar5,0x112d36580,&UNK_10d9016d0);
    return;
  }
  pcVar6 = *(code **)(lVar7 + 0x20);
  (*pcVar6)(lVar4,puVar5,lVar2);
  FUN_102a83b74(param_2,0x112ee5e70,&UNK_10db11270);
  lVar7 = 0x112ee62b8;
  func_0x0001000285a8(0x112ee62b8,&UNK_10db157e0);
  iVar1 = *(int *)(lVar7 + 0x30);
  *param_2 = param_3;
  (*pcVar6)((long)param_2 + (long)iVar1,lVar4,lVar2);
  lVar2 = 0;
  FUN_102aabe08();
  func_0x000107c6159c(param_2,lVar2,0);
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(param_2,0,1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 102a8101c; end: 102a81077;  */

void FUN_102a8101c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_102a81078();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 102a81078; end: 102a81193;  */

undefined * FUN_102a81078(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102a81194);
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
    puVar3 = (undefined *)0x112ee7000;
    func_0x0001000285a8(0x112ee7000,&UNK_10db123d0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x28) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar4,puVar1,uVar6,&UNK_110592e58);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x28 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6 * 0x28);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 102a81194; end: 102a812c3;  */

undefined * FUN_102a81194(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102a812c4);
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
    puVar3 = (undefined *)0x112ee6ff0;
    func_0x0001000285a8(0x112ee6ff0,&UNK_10db123c0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -1;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 5) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112ee6ff8;
    func_0x0001000285a8(0x112ee6ff8,&UNK_10db123c8);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x20 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 5);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 102a812c4; end: 102a812ef;  */

undefined8 FUN_102a812c4(undefined8 param_1)

{
  FUN_102a83334(param_1,&UNK_11058fb18);
  return param_1;
}



/* Entry: 102a812f0; end: 102a81483;  */

undefined * FUN_102a812f0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102a81484);
        (*pcVar3)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar9 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar9) {
    uVar6 = uVar9;
  }
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar4 = (undefined *)0x112ee7020;
    func_0x0001000285a8(0x112ee7020,&UNK_10db123f0);
    lVar8 = 0x112ee6bc8;
    func_0x0001000285a8(0x112ee6bc8,&UNK_10db11ed0);
    lVar10 = *(long *)(*(long *)(lVar8 + -8) + 0x48);
    uVar7 = (ulong)*(byte *)(*(long *)(lVar8 + -8) + 0x50);
    uVar11 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
    func_0x000107c613fc(puVar4,uVar11 + lVar10 * uVar6,uVar7 | 7);
    puVar5 = puVar4;
    func_0x000107c610a4();
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102a8147c);
      (*pcVar3)();
    }
    lVar8 = (long)puVar5 - uVar11;
    if (lVar8 == -0x8000000000000000 && lVar10 == -1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102a81480);
      (*pcVar3)();
    }
    lVar2 = 0;
    if (lVar10 != 0) {
      lVar2 = lVar8 / lVar10;
    }
    *(ulong *)(puVar4 + 0x10) = uVar9;
    *(long *)(puVar4 + 0x18) = lVar2 << 1;
  }
  lVar8 = 0x112ee6bc8;
  func_0x0001000285a8(0x112ee6bc8,&UNK_10db11ed0);
  uVar6 = (ulong)*(byte *)(*(long *)(lVar8 + -8) + 0x50);
  uVar6 = uVar6 + 0x20 & (uVar6 ^ 0xffffffffffffffff);
  puVar5 = puVar4 + uVar6;
  puVar1 = param_4 + uVar6;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar5,puVar1,uVar9,lVar8);
  }
  else {
    if ((puVar4 < param_4) || (puVar1 + *(long *)(*(long *)(lVar8 + -8) + 0x48) * uVar9 <= puVar5))
    {
      func_0x000107c61414(puVar5,puVar1,uVar9);
    }
    else if (puVar4 != param_4) {
      func_0x000107c61410(puVar5,puVar1,uVar9);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar4;
}



/* Entry: 102a81484; end: 102a8148f;  */

undefined * FUN_102a81484(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  
  puVar2 = PTR__swift_bridgeObjectRelease_11034f258;
  uVar7 = param_2;
  if ((param_3 & 1) != 0) {
    uVar7 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar7 < (long)param_2) {
      if ((long)(uVar7 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102a815cc);
        (*pcVar3)();
      }
      uVar7 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar7 <= (long)param_2) {
        uVar7 = param_2;
      }
    }
  }
  uVar8 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar7 <= (long)uVar8) {
    uVar7 = uVar8;
  }
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar7 != 0) {
    puVar4 = (undefined *)0x112ee7018;
    func_0x0001000285a8(0x112ee7018,&UNK_10db123e8);
    func_0x000107c613fc();
    puVar5 = puVar4;
    func_0x000107c610a4();
    puVar1 = puVar5 + -1;
    if (0x1f < (long)puVar5) {
      puVar1 = puVar5 + -0x20;
    }
    *(ulong *)(puVar4 + 0x10) = uVar8;
    *(long *)(puVar4 + 0x18) = ((long)puVar1 >> 5) << 1;
  }
  puVar1 = puVar4 + 0x20;
  puVar5 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar6 = 0x112ee6bd8;
    func_0x0001000285a8(0x112ee6bd8,&UNK_10db11ee0);
    func_0x000107c6140c(puVar1,puVar5,uVar8,uVar6);
  }
  else {
    if (puVar4 != param_4 || puVar5 + uVar8 * 0x20 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar5,uVar8 << 5);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*(code *)puVar2)(param_4);
  return puVar4;
}



/* Entry: 102a81490; end: 102a815cb;  */

undefined *
FUN_102a81490(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102a815cc);
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
    puVar3 = (undefined *)0x112ee7018;
    func_0x0001000285a8(0x112ee7018,&UNK_10db123e8);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -1;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 5) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112ee6bd8;
    func_0x0001000285a8(0x112ee6bd8,&UNK_10db11ee0);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x20 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 5);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*param_5)(param_4);
  return puVar3;
}



/* Entry: 102a815cc; end: 102a816d3;  */

undefined * FUN_102a815cc(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102a816d4);
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
    puVar3 = (undefined *)0x112ee7028;
    func_0x0001000285a8(0x112ee7028,&UNK_10db12400);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -1;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 5) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar1,puVar4,uVar6,&UNK_110592818);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x20 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 5);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 102a816d4; end: 102a81857;  */

undefined *
FUN_102a816d4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
             undefined8 param_6,code *param_7,code *param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  uVar7 = param_2;
  if ((param_3 & 1) != 0) {
    uVar7 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar7 < (long)param_2) {
      if ((long)(uVar7 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102a81858);
        (*pcVar4)();
      }
      uVar7 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar7 <= (long)param_2) {
        uVar7 = param_2;
      }
    }
  }
  uVar9 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar7 <= (long)uVar9) {
    uVar7 = uVar9;
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar7 != 0) {
    func_0x0001000285a8(param_5,param_6);
    lVar5 = 0;
    (*param_7)();
    lVar10 = *(long *)(*(long *)(lVar5 + -8) + 0x48);
    uVar8 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
    uVar11 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
    func_0x000107c613fc(param_5,uVar11 + lVar10 * uVar7,uVar8 | 7);
    puVar6 = param_5;
    func_0x000107c610a4();
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x102a81850);
      (*pcVar4)();
    }
    lVar5 = (long)puVar6 - uVar11;
    if (lVar5 == -0x8000000000000000 && lVar10 == -1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x102a81854);
      (*pcVar4)();
    }
    lVar3 = 0;
    if (lVar10 != 0) {
      lVar3 = lVar5 / lVar10;
    }
    *(ulong *)(param_5 + 0x10) = uVar9;
    *(long *)(param_5 + 0x18) = lVar3 << 1;
    puVar6 = param_5;
  }
  lVar5 = 0;
  (*param_7)();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar7 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  puVar1 = puVar6 + uVar7;
  puVar2 = param_4 + uVar7;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar1,puVar2,uVar9,lVar5);
  }
  else {
    if ((puVar6 < param_4) || (puVar2 + *(long *)(*(long *)(lVar5 + -8) + 0x48) * uVar9 <= puVar1))
    {
      func_0x000107c61414(puVar1,puVar2,uVar9);
    }
    else if (puVar6 != param_4) {
      func_0x000107c61410(puVar1,puVar2,uVar9);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*param_8)(param_4);
  return puVar6;
}



/* Entry: 102a81858; end: 102a81bcf;  */

ulong FUN_102a81858(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102a8193c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102a81940);
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
  func_0x000102a83cd8(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102a81a14);
  (*pcVar2)();
}



/* Entry: 102a81bd0; end: 102a81be3;  */

ulong FUN_102a81bd0(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102a81af8);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102a81afc);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126c7ef0;
    func_0x000107c61168(PTR_PTR_1126c7ef0);
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
    puVar4 = PTR_PTR_1126c7ef0;
    func_0x000107c61168(PTR_PTR_1126c7ef0);
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
  func_0x000102a83cd8(0,0x112ee6da8,&PTR_PTR_1126c7ef0);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102a81bd0);
  (*pcVar2)();
}



/* Entry: 102a81be4; end: 102a81cff;  */

void FUN_102a81be4(ulong *param_1)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  long lStack_60;
  ulong uStack_58;
  
  lVar1 = 0;
  FUN_102aabc7c();
  lVar5 = *(long *)(lVar1 + -8);
  uVar4 = *param_1;
  uVar3 = uVar4;
  func_0x000107c61558();
  if ((uVar3 & 1) == 0) {
    FUN_102a82a88();
  }
  uVar6 = *(ulong *)(uVar4 + 0x10);
  uVar3 = (ulong)*(byte *)(lVar5 + 0x50);
  uVar8 = uVar3 + 0x20 & (uVar3 ^ 0xffffffffffffffff);
  lStack_60 = uVar4 + uVar8;
  uVar3 = uVar6;
  uStack_58 = uVar6;
  func_0x000107c60574();
  if ((long)uVar3 < (long)uVar6) {
    puVar7 = (undefined *)(uVar6 >> 1);
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (1 < uVar6) {
      puVar2 = puVar7;
      func_0x000107c60380(puVar7,lVar1);
      *(undefined **)(puVar2 + 0x10) = puVar7;
    }
    puStack_78 = puVar2 + uVar8;
    puStack_70 = puVar7;
    FUN_102a81d00(&puStack_78,auStack_68,&lStack_60,uVar3);
    *(undefined8 *)(puVar2 + 0x10) = 0;
    func_0x000107c61574(puVar2);
  }
  else if (uVar6 != 0) {
    FUN_102a82298(0,uVar6,1,&lStack_60);
  }
  *param_1 = uVar4;
  return;
}



/* Entry: 102a81d00; end: 102a82297;  */

void FUN_102a81d00(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long extraout_x8;
  long lVar9;
  ulong *puVar10;
  long lVar11;
  ulong *puVar12;
  ulong uVar13;
  long lVar14;
  long extraout_x12;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long unaff_x21;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long *plStack_d0;
  long lStack_c8;
  long *plStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined *puStack_58;
  
  lVar5 = 0;
  FUN_102aabc7c();
  lStack_b8 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b8 + 0x40));
  lVar11 = (long)&plStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar18 = param_3[1];
  plStack_c0 = param_3;
  if (0 < lVar18) {
    lVar9 = 0;
    plStack_d0 = param_1;
    lStack_c8 = param_4;
    do {
      lVar14 = lVar9 + 1;
      lVar16 = lVar9;
      if (lVar14 < lVar18) {
        lVar16 = *param_3;
        lVar25 = *(long *)(lStack_b8 + 0x48);
        puVar10 = (ulong *)(lVar16 + lVar25 * lVar14);
        puVar12 = (ulong *)(lVar16 + lVar25 * lVar9);
        uVar19 = *puVar10;
        lStack_b0 = lVar9;
        if (uVar19 == *puVar12 && puVar10[1] == puVar12[1]) {
          uVar19 = 0;
        }
        else {
          func_0x000107c605b8();
        }
        lVar9 = lStack_b0 + 2;
        lVar17 = lVar9;
        if (lVar9 < lVar18) {
          lVar20 = lVar25 * lVar14;
          lVar14 = lVar9;
          do {
            plVar1 = (long *)(lVar16 + lVar25 * lVar9);
            plVar2 = (long *)(lVar16 + lVar20);
            lVar21 = *plVar1;
            if (lVar21 == *plVar2 && plVar1[1] == plVar2[1]) {
              if ((uVar19 & 1) != 0) goto LAB_102a81ea8;
            }
            else {
              func_0x000107c605b8();
              lVar17 = lVar14;
              if ((((uint)uVar19 ^ (uint)lVar21) & 1) != 0) break;
            }
            lVar16 = lVar16 + lVar25;
            lVar14 = lVar14 + 1;
            lVar17 = lVar18;
          } while (lVar18 != lVar14);
        }
        lVar14 = lVar17;
        lVar16 = lStack_b0;
        if ((uVar19 & 1) != 0) {
LAB_102a81ea8:
          if (lVar14 < lStack_b0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102a8226c);
            (*pcVar3)();
          }
          lVar16 = lStack_b0;
          if (lStack_b0 < lVar14) {
            lVar17 = 0;
            lVar20 = *param_3;
            lVar21 = lVar25 * (lVar14 + -1);
            lVar22 = lVar14 * lVar25;
            lVar9 = lStack_b0 * lVar25;
            lVar18 = lStack_b0;
            do {
              if (lVar18 != lVar14 + lVar17 + -1) {
                if (lVar20 == 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x102a8228c);
                  (*pcVar3)();
                }
                uVar19 = lVar20 + lVar9;
                func_0x000102a5d690(uVar19,lVar11 - extraout_x12);
                if ((lVar9 < lVar21) || ((ulong)(lVar20 + lVar22) <= uVar19)) {
                  func_0x000107c61414(uVar19,lVar20 + lVar21,1,lVar5);
                }
                else if (lVar25 != 0) {
                  func_0x000107c61410(uVar19,lVar20 + lVar21,1,lVar5);
                }
                func_0x000102a5d690(lVar11 - extraout_x12,lVar20 + lVar21);
              }
              lVar18 = lVar18 + 1;
              lVar17 = lVar17 + -1;
              lVar21 = lVar21 - lVar25;
              lVar22 = lVar22 - lVar25;
              lVar9 = lVar9 + lVar25;
              param_3 = plStack_c0;
              lVar16 = lStack_b0;
              param_1 = plStack_d0;
            } while (lVar18 < lVar14 + lVar17);
          }
        }
      }
      lVar18 = param_3[1];
      lVar9 = lVar14;
      if (lVar14 < lVar18) {
        if (SBORROW8(lVar14,lVar16)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102a82268);
          (*pcVar3)();
        }
        if (lVar14 - lVar16 < lStack_c8) {
          if (SCARRY8(lVar16,lStack_c8)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102a82270);
            (*pcVar3)();
          }
          lVar25 = lVar16 + lStack_c8;
          if (lVar18 <= lVar16 + lStack_c8) {
            lVar25 = lVar18;
          }
          if (lVar25 < lVar16) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102a82274);
            (*pcVar3)();
          }
          if (lVar14 != lVar25) {
            lVar24 = *param_3;
            lVar15 = *(long *)(lStack_b8 + 0x48);
            lVar22 = lVar14 + -1;
            lVar18 = lVar16 - lVar14;
            lVar23 = lVar14 * lVar15;
            lVar17 = lVar24;
            lStack_b0 = lVar16;
            lVar20 = lVar24;
            lVar21 = lVar18;
LAB_102a82024:
            do {
              puVar10 = (ulong *)(lVar17 + lVar23);
              puVar12 = (ulong *)(lVar17 + lVar15 * lVar22);
              uVar19 = *puVar10;
              if ((uVar19 != *puVar12 || puVar10[1] != puVar12[1]) &&
                 (func_0x000107c605b8(), (uVar19 & 1) != 0)) {
                if (lVar24 == 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x102a82278);
                  (*pcVar3)();
                }
                func_0x000102a5d690(puVar10,lVar11);
                func_0x000107c61414(puVar10,puVar12,1,lVar5);
                func_0x000102a5d690(lVar11,puVar12);
                bVar4 = lVar18 != -1;
                lVar18 = lVar18 + 1;
                lVar17 = lVar17 - lVar15;
                if (bVar4) goto LAB_102a82024;
              }
              lVar14 = lVar14 + 1;
              lVar17 = lVar20 + lVar15;
              lVar18 = lVar21 + -1;
              lVar9 = lVar25;
              param_3 = plStack_c0;
              lVar16 = lStack_b0;
              param_1 = plStack_d0;
              lVar20 = lVar17;
              lVar21 = lVar18;
            } while (lVar14 != lVar25);
          }
        }
      }
      puVar8 = puStack_58;
      if (lVar9 < lVar16) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102a82258);
        (*pcVar3)();
      }
      puVar6 = puStack_58;
      func_0x000107c61558();
      puVar7 = puVar8;
      if (((ulong)puVar6 & 1) == 0) {
        puVar7 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
      }
      uVar19 = *(ulong *)(puVar7 + 0x10);
      puVar8 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar19) {
        puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
        func_0x0001000a91e0(puVar8,uVar19 + 1,1,puVar7);
      }
      *(ulong *)(puVar8 + 0x10) = uVar19 + 1;
      *(long *)(puVar8 + uVar19 * 0x10 + 0x20) = lVar16;
      *(long *)(puVar8 + uVar19 * 0x10 + 0x28) = lVar9;
      puStack_58 = puVar8;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102a82290);
        (*pcVar3)();
      }
      FUN_102a823f4(&puStack_58,*param_1,param_3);
      puVar8 = puStack_58;
      puVar6 = puStack_58;
      if (unaff_x21 != 0) goto LAB_102a82228;
      lVar18 = param_3[1];
    } while (lVar9 < lVar18);
  }
  puVar8 = puStack_58;
  lVar5 = *param_1;
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102a82298);
    (*pcVar3)();
  }
  puVar6 = puStack_58;
  func_0x000107c61558();
  if (((ulong)puVar6 & 1) == 0) {
    func_0x000100e06d54();
  }
  puVar10 = (ulong *)(puVar8 + 0x10);
  uVar19 = *puVar10;
  while (puVar6 = puStack_58, 1 < uVar19) {
    lVar11 = *param_3;
    if (lVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102a82294);
      (*pcVar3)();
    }
    plVar1 = (long *)(puVar8 + uVar19 * 0x10);
    lVar9 = *plVar1;
    puVar12 = puVar10 + uVar19 * 2;
    uVar13 = puVar12[1];
    lVar18 = *(long *)(lStack_b8 + 0x48);
    FUN_102a82674(lVar11 + lVar18 * lVar9,lVar11 + lVar18 * *puVar12,lVar11 + lVar18 * uVar13,lVar5)
    ;
    puVar6 = puVar8;
    if (unaff_x21 != 0) break;
    if ((long)uVar13 < lVar9) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102a8225c);
      (*pcVar3)();
    }
    if (*puVar10 <= uVar19 - 2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102a82260);
      (*pcVar3)();
    }
    *plVar1 = lVar9;
    plVar1[1] = uVar13;
    uVar13 = *puVar10;
    lVar11 = uVar13 - uVar19;
    if (uVar13 < uVar19) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102a82264);
      (*pcVar3)();
    }
    uVar19 = uVar13 - 1;
    func_0x000107c610b8(puVar12,puVar12 + 2,lVar11 * 0x10);
    *puVar10 = uVar19;
    param_3 = plStack_c0;
  }
LAB_102a82228:
  puStack_58 = puVar6;
  func_0x000107c6142c(puVar8);
  return;
}


