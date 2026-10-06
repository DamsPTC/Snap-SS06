/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10782bf88; end: 10782c6c3;  */

/* WARNING: Possible PIC construction at 0x00010782c3e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010782c458: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010782c760: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010782c45c) */
/* WARNING: Removing unreachable block (ram,0x00010782c3ec) */
/* WARNING: Removing unreachable block (ram,0x00010782c764) */
/* WARNING: Removing unreachable block (ram,0x00010782c794) */
/* WARNING: Removing unreachable block (ram,0x00010782c7a4) */
/* WARNING: Removing unreachable block (ram,0x00010782c780) */

void FUN_10782bf88(undefined1 *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 in_ZR;
  long *plVar6;
  uint *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined1 **ppuVar10;
  long *plVar11;
  int iVar12;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  long lVar13;
  ulong uVar14;
  long lVar15;
  ulong *puVar16;
  undefined8 ****ppppuVar17;
  undefined1 **unaff_x30;
  undefined *puVar18;
  undefined8 ***in_stack_00000050;
  undefined1 auStack_2f0 [8];
  undefined1 auStack_2e8 [24];
  undefined4 auStack_2d0 [6];
  undefined4 uStack_2b8;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined4 uStack_288;
  undefined1 uStack_284;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 auStack_260 [64];
  undefined8 *puStack_220;
  long *plStack_218;
  long lStack_210;
  undefined1 *puStack_208;
  undefined8 ***pppuStack_200;
  undefined *puStack_1f8;
  undefined1 auStack_1f0 [8];
  ulong *puStack_1e8;
  int iStack_1dc;
  long *plStack_1d8;
  ulong uStack_1d0;
  undefined8 uStack_1c8;
  undefined1 *puStack_1a0;
  long *plStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  undefined8 uStack_178;
  ulong uStack_170;
  undefined8 uStack_168;
  ulong uStack_160;
  undefined8 uStack_158;
  undefined1 auStack_128 [56];
  undefined8 auStack_f0 [7];
  undefined1 auStack_b8 [56];
  undefined1 auStack_80 [56];
  undefined4 uStack_48;
  undefined1 uStack_44;
  undefined8 uStack_10;
  
  func_0x000107833360();
  puVar5 = auStack_1f0;
  puVar8 = param_1;
  plStack_1d8 = param_2;
  func_0x000107832d38();
  func_0x00010782bdec();
  if ((int)puVar8 != 0) {
    func_0x00010783321c(*(undefined8 *)(param_1 + 0xe8));
    puStack_1a0 = puVar8;
    plStack_198 = param_2;
    while (puStack_1a0 != (undefined1 *)0x0) {
      unaff_x21 = (long *)plStack_198[7];
      if (((unaff_x21 != (long *)0x0) &&
          (plVar6 = unaff_x21, (**(code **)(*unaff_x21 + 0x48))(), (int)plVar6 != 0)) &&
         ((*(byte *)((long)unaff_x21 + 0x1c) & 1) == 0)) {
        (**(code **)(*unaff_x21 + 0x40))(unaff_x21,plStack_1d8);
      }
      func_0x00010782bcf8(&puStack_1a0);
    }
    lVar15 = *(long *)(param_1 + 0xe8);
    puVar8 = (undefined1 *)0x0;
    if ((*(byte *)(lVar15 + 0x58) & 1) != 0) {
      uStack_48 = 0x303;
      uStack_44 = 0;
      func_0x0001073c7980(&puStack_1a0,plStack_1d8,lVar15 + 0x40,&uStack_48,0);
      func_0x000107440a90(*(undefined8 *)(param_1 + 8),&puStack_1a0);
      uVar14 = uStack_190;
      uStack_190 = 0;
      if (uVar14 != 0) {
        func_0x000107832c60();
      }
      puStack_1a0 = (undefined1 *)((ulong)puStack_1a0 & 0xffffffffffffff00);
      uStack_188 = uStack_188 & 0xffffffffffffff00;
      lVar15 = *(long *)(param_1 + 0xe8);
      if (*(char *)(lVar15 + 0x58) != '\0') {
        func_0x0001073c7fd0(lVar15 + 0x40);
        *(undefined1 *)(lVar15 + 0x58) = 0;
      }
      func_0x0001078311e0(&puStack_1a0);
      lVar15 = *(long *)(param_1 + 0xe8);
      puVar8 = puStack_1a0;
    }
    puStack_1a0 = puVar8;
    if (*(char *)(lVar15 + 0x128) == '\x01') {
      unaff_x22 = (undefined8 *)0x0;
      lVar13 = 0;
      uStack_1c8 = 0;
      uStack_1d0 = 0x303;
      for (unaff_x21 = (long *)0x0; func_0x00010782bf00(lVar15 + 0x60),
          unaff_x21 <
          (long *)((*(long *)(lVar15 + 0x68) - *(long *)(lVar15 + 0x60)) / 0x18 & 0xffffffffU);
          unaff_x21 = (long *)((long)unaff_x21 + 1)) {
        puVar8 = param_1;
        func_0x00010782bf18(param_1,unaff_x21);
        if ((int)puVar8 != 0) {
          lVar15 = *(long *)(param_1 + 0xe8);
          func_0x00010783306c();
          uStack_48 = (undefined4)uStack_1d0;
          uStack_44 = 0;
          func_0x000107432024(&puStack_1a0,plStack_1d8,*(long *)(lVar15 + 0x60) + lVar13,&uStack_48,
                              0);
          func_0x000107440a90(*(long *)(*(long *)(param_1 + 8) + 0x20) + (long)unaff_x22,
                              &puStack_1a0);
          uVar14 = uStack_190;
          uStack_190 = 0;
          if (uVar14 != 0) {
            func_0x000107832c60();
          }
          if ((param_1[0x131] & 1) == 0) {
            lVar15 = *(long *)(param_1 + 0xe8);
            func_0x00010783306c();
            puStack_1a0 = (undefined1 *)0x0;
            plStack_198 = (long *)0x0;
            uStack_190 = CONCAT62(uStack_190._2_6_,1);
            func_0x00010742a894(*(long *)(lVar15 + 0x60) + lVar13,&puStack_1a0);
            func_0x00010724e5f4(&puStack_1a0);
          }
        }
        lVar15 = *(long *)(param_1 + 0xe8);
        lVar13 = lVar13 + 0x18;
        unaff_x22 = unaff_x22 + 4;
      }
      if ((*(char *)(*(long *)(param_1 + 0xe8) + 0x128) == '\x01') &&
         (*(long *)(*(long *)(param_1 + 8) + 0x20) != *(long *)(*(long *)(param_1 + 8) + 0x28))) {
        iStack_1dc = 0;
        uStack_1d0 = uStack_1d0 & 0xffffffff00000000;
        puStack_1e8 = *(ulong **)(param_1 + 0x118);
        for (puVar16 = *(ulong **)(param_1 + 0x110); iVar12 = iStack_1dc, puVar16 != puStack_1e8;
            puVar16 = puVar16 + 3) {
          unaff_x21 = *(long **)(param_1 + 0xe8);
          func_0x000107832f10();
          plVar6 = unaff_x21 + 0x1d;
          func_0x0001073f9894(plVar6,*puVar16);
          unaff_x20 = *(long *)(param_1 + 0xe8);
          func_0x00010783306c();
          if ((long *)(unaff_x20 + 0xf0) == plVar6) {
            puVar9 = *(undefined8 **)(param_1 + 0x90);
            func_0x00010002b838(&puStack_1a0,&UNK_10f42af17);
            func_0x00010724ef84(&uStack_48,*puVar16);
            unaff_x30 = &puStack_1a0;
            puVar18 = (undefined *)0x10782c3ec;
            puVar8 = param_1;
            unaff_x22 = puVar9;
            goto code_r0x00010782c6c4;
          }
          unaff_x21 = (long *)0x0;
          for (uVar14 = 0; lVar15 = *(long *)(param_1 + 0xe8), func_0x00010783306c(),
              uVar14 < ((*(long *)(lVar15 + 0x68) - *(long *)(lVar15 + 0x60)) / 0x18 & 0xffffffffU);
              uVar14 = uVar14 + 1) {
            if ((*(char *)((long)unaff_x21 + *(long *)(*(long *)(param_1 + 8) + 0x20) + 0x18) ==
                 '\x01') && (uVar14 == *(uint *)((long)plVar6 + 100))) {
              if (*(short *)((long)plVar6 + 0x5c) == (short)puVar16[2] &&
                  *(short *)((long)plVar6 + 0x5e) == *(short *)((long)puVar16 + 0x12)) {
                if ((short)plVar6[0xc] == *(short *)((long)puVar16 + 0x14) &&
                    *(short *)((long)plVar6 + 0x62) == *(short *)((long)puVar16 + 0x16)) {
                  puVar7 = (uint *)*puVar16;
                  func_0x00010778196c();
                  uVar1 = *(uint *)(plVar6 + 0x14);
                  uVar3 = *(uint *)((long)plVar6 + 0xa4);
                  uVar2 = *puVar7;
                  uVar4 = puVar7[1];
                  if (uVar2 <= uVar1 && uVar4 <= uVar3) {
                    lVar15 = *(long *)(*(long *)(param_1 + 8) + 0x20);
                    puVar9 = (undefined8 *)*puVar16;
                    func_0x00010778196c();
                    (**(code **)(*plStack_1d8 + 0x78))
                              (plStack_1d8,*(undefined8 *)((long)unaff_x21 + lVar15 + 0x10),
                               (short)puVar16[2] + 1,*(short *)((long)puVar16 + 0x12) + 1,*puVar9,
                               puVar9[1],2);
                    iStack_1dc = iStack_1dc + 1;
                    goto LAB_10782c358;
                  }
                  unaff_x22 = *(undefined8 **)(param_1 + 0x90);
                  plVar11 = (long *)&UNK_10f42af59;
                  func_0x00010002b838(&uStack_48);
                  puVar8 = (undefined1 *)*puVar16;
                  func_0x000107833444();
                  func_0x00010783342c();
                  uStack_188 = 0;
                  uStack_178 = 0;
                  uStack_168 = 0;
                  uStack_158 = 0;
                  puStack_1a0 = puVar8;
                  plStack_198 = plVar11;
                  uStack_190 = (ulong)uVar1;
                  uStack_180 = (ulong)uVar3;
                  uStack_170 = (ulong)uVar2;
                  uStack_160 = (ulong)uVar4;
                  func_0x0001003a91d4(&UNK_10f42af66);
                  func_0x000107832e44();
                  func_0x000107832ea8();
                }
                else {
                  unaff_x22 = *(undefined8 **)(param_1 + 0x90);
                  func_0x00010002b838(&uStack_48,&UNK_10f42af4c);
                  func_0x000107833444(*puVar16);
                  func_0x00010783342c();
                  func_0x000107833330();
                  func_0x000107833420();
                  func_0x000107832e44();
                  func_0x000107832ea8();
                }
              }
              else {
                unaff_x22 = *(undefined8 **)(param_1 + 0x90);
                func_0x00010002b838(&uStack_48,&UNK_10f42af25);
                func_0x000107833444(*puVar16);
                func_0x00010783342c();
                func_0x000107833330();
                func_0x000107833420();
                func_0x000107832e44();
                func_0x000107832ea8();
              }
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_80);
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b8);
              func_0x0001078333a8();
              uStack_1d0 = CONCAT44(uStack_1d0._4_4_,(int)uStack_1d0 + 1);
            }
LAB_10782c358:
            unaff_x21 = unaff_x21 + 4;
          }
        }
        if (iStack_1dc != 0 || (int)uStack_1d0 != 0) {
          puVar9 = *(undefined8 **)(param_1 + 0x90);
          func_0x000107832ed8(0x4d);
          func_0x000107832de8();
          func_0x0001078330e4(&uStack_48);
          func_0x000107832ecc();
          ppuVar10 = &puStack_1a0;
          func_0x000107371bc4(ppuVar10);
          puVar18 = (undefined *)0x10782c45c;
          ppppuVar17 = &stack0x00000050;
          goto code_r0x00010782c7b4;
        }
      }
    }
    func_0x000107462424(param_1 + 0x110);
    unaff_x20 = *(long *)(param_1 + 0x90);
    func_0x000107832ed8(0x46);
    func_0x000107832d10();
    func_0x000107832de8();
    func_0x0001078330e4(auStack_128);
    func_0x000107832ecc();
    func_0x000107371bc4(&puStack_1a0);
    in_ZR = param_1[0x130] == '\0';
    unaff_x30 = (undefined1 **)"complete";
    if ((bool)in_ZR) {
      unaff_x30 = (undefined1 **)&DAT_10f2dee16;
    }
    func_0x00010729d56c();
    func_0x000107833024();
    puVar8 = auStack_128;
    func_0x000104c2f714();
    func_0x000107832f30();
  }
  func_0x000107832c6c(uStack_10);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puVar9 = auStack_f0;
  func_0x000104c2f714();
  func_0x000107832f30();
  puVar18 = &SUB_10782c6c4;
  func_0x000107832e28();
code_r0x00010782c6c4:
  puVar5 = auStack_2f0;
  ppppuVar17 = &pppuStack_200;
  puStack_220 = unaff_x22;
  plStack_218 = unaff_x21;
  lStack_210 = unaff_x20;
  puStack_208 = puVar8;
  pppuStack_200 = &stack0x00000050;
  puStack_1f8 = puVar18;
  func_0x000107832d74();
  auStack_2d0[0] = 0x4f;
  uStack_2b8 = 0;
  uStack_2a0 = 0;
  uStack_298 = 0;
  func_0x000107832d10();
  uStack_2a8 = 0;
  uStack_288 = 0;
  uStack_284 = 1;
  uStack_278 = 0;
  uStack_270 = 0;
  uStack_280 = 0;
  func_0x000104c2fe00(auStack_260);
  func_0x000107832ecc();
  ppuVar10 = (undefined1 **)auStack_2d0;
  func_0x000107371bc4(ppuVar10);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_2e8,unaff_x30);
  func_0x00010726e300(ppuVar10,"reason",auStack_2e8);
  iVar12 = 1;
  puVar18 = &UNK_10782c764;
code_r0x00010782c7b4:
  *(undefined8 *****)(puVar5 + -0x10) = ppppuVar17;
  *(undefined **)(puVar5 + -8) = puVar18;
  *(int *)(puVar5 + -0x20) = iVar12;
  *(undefined4 *)(puVar5 + -0x18) = 1;
  *(undefined8 *)(puVar5 + -0x30) = *puVar9;
  *(undefined4 *)(puVar5 + -0x28) = 3;
  func_0x000107832e74(puVar9,ppuVar10,puVar5 + -0x20,puVar5 + -0x30);
  return;
}



/* Entry: 10782cbd4; end: 10782d26f;  */

undefined8 *
FUN_10782cbd4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
             long param_5,undefined8 param_6)

{
  long *plVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  undefined8 **ppuVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long extraout_x8;
  undefined8 **extraout_x8_00;
  undefined8 *puVar10;
  long extraout_x8_01;
  undefined8 *puVar11;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  undefined8 uVar12;
  long lStack_1f0;
  undefined8 uStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 auStack_188 [168];
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_30;
  undefined8 uStack_28;
  undefined8 *puStack_20;
  undefined8 uStack_10;
  
  func_0x000107833360();
  puVar6 = param_1;
  func_0x000107832d38();
  func_0x00010784a864();
  puVar6[0x25] = &PTR____cxa_pure_virtual_1109e10d0;
  func_0x00010747c890(puVar6 + 0x26,*(undefined8 *)(param_4 + 10));
  uVar8 = *(undefined8 *)(param_4 + 0xe);
  param_1[0x32] = uVar8;
  param_1[0x34] = uVar8;
  uVar8 = *(undefined8 *)(param_4 + 0xe);
  param_1[0x25] = &PTR_DAT_1109e0e60;
  param_1[0x26] = &PTR_DAT_1109e0e88;
  param_1[0x31] = &PTR_DAT_1109e0eb0;
  param_1[0x33] = &PTR_DAT_1109e0ed8;
  *param_1 = &PTR_DAT_1109e0d50;
  param_1[0x35] = &PTR_DAT_1109e0f00;
  param_1[0x36] = uVar8;
  puVar6 = param_1 + 0x37;
  func_0x000107332298(puVar6,param_6);
  *(undefined1 *)(param_1 + 0x3a) = 0;
  *(undefined1 *)(param_1 + 0x3b) = 0;
  param_1[0x3d] = 0;
  param_1[0x3c] = 0;
  param_1[0x3f] = 0;
  param_1[0x3e] = 0;
  param_1[0x41] = 0;
  param_1[0x40] = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0x3f800000;
  func_0x00010785f1f4();
  param_1[0x44] = puVar6;
  *(undefined1 *)(param_1 + 0x45) = 0;
  param_1[0x46] = *(undefined8 *)(param_5 + 0x38);
  plVar1 = param_1 + 0x47;
  param_1[0x48] = 0;
  *plVar1 = 0;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  *(undefined1 *)(param_1 + 0x4b) = 0;
  lVar9 = *(long *)(param_4 + 6);
  uVar8 = *(undefined8 *)(param_4 + 4);
  param_1[0x4d] = *(undefined8 *)(param_4 + 6);
  param_1[0x4c] = uVar8;
  if (lVar9 != 0) {
    do {
      func_0x000107832cb4();
    } while (extraout_w10 != 0);
  }
  iVar3 = (int)puVar6;
  param_1[0x4e] = *(undefined8 *)(param_4 + 0xc);
  param_1[0x4f] = *(undefined8 *)(param_4 + 10);
  param_1[0x50] = *(undefined8 *)(param_4 + 0xe);
  param_1[0x51] = *(undefined8 *)(param_5 + 0x60);
  lVar9 = *(long *)(param_5 + 0x68);
  param_1[0x52] = lVar9;
  if (lVar9 != 0) {
    do {
      func_0x000107832cb4();
      iVar3 = (int)puVar6;
    } while (extraout_w10_00 != 0);
  }
  param_1[0x56] = 0;
  param_1[0x55] = 0;
  param_1[0x58] = 0;
  param_1[0x57] = 0;
  param_1[0x54] = 0;
  param_1[0x53] = 0;
  *(undefined4 *)(param_1 + 0x59) = 0x3f800000;
  param_1[0x5b] = 0;
  param_1[0x5a] = 0;
  param_1[0x5d] = 0;
  param_1[0x5c] = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0x3f800000;
  param_1[0x60] = 0;
  param_1[0x5f] = 0;
  param_1[0x62] = 0;
  param_1[0x61] = 0;
  *(undefined4 *)(param_1 + 99) = 0x3f800000;
  param_1[100] = 0;
  param_1[0x66] = 0;
  param_1[0x65] = 0;
  *(undefined4 *)(param_1 + 0x67) = param_4[8];
  *(byte *)((long)param_1 + 0x33c) = *(byte *)(param_4 + 1) >> 4 & 1;
  param_1[0x6c] = 0;
  param_1[0x69] = 0;
  param_1[0x68] = 0;
  param_1[0x6b] = 0;
  param_1[0x6a] = 0;
  func_0x00010785f1f4();
  uVar4 = iVar3 + 0x120;
  func_0x00010724e330();
  *(bool *)(param_1 + 0x45) = ((uVar4 ^ 0xffffffff) & 0x101) == 0;
  puVar6 = param_1 + 4;
  func_0x00010784a194(auStack_188,puVar6,param_1 + 2);
  func_0x0001073af260();
  func_0x00010724b48c(&puStack_30,1);
  puVar10 = puStack_20;
  puStack_20[2] = 0;
  *puStack_20 = &PTR_DAT_110995268;
  puStack_20[1] = 0;
  func_0x0001078334a0();
  func_0x0001073ad934(puVar10 + 3,puVar6,&puStack_e0);
  func_0x000107833264();
  puStack_1b8 = puStack_20;
  puStack_20 = (undefined8 *)0x0;
  puStack_1c0 = puStack_1b8 + 3;
  ppuVar5 = &puStack_30;
  func_0x00010724b570();
  func_0x00010783348c();
  ppuVar5[1] = (undefined8 *)0x0;
  ppuVar5[2] = (undefined8 *)0x0;
  *ppuVar5 = &PTR_FUN_1109e10f8;
  ppuVar5[9] = (undefined8 *)0x0;
  ppuVar5[3] = &PTR_DAT_1109e1148;
  ppuVar5[5] = (undefined8 *)0x0;
  ppuVar5[4] = (undefined8 *)0x0;
  ppuVar5[7] = (undefined8 *)0x0;
  ppuVar5[6] = (undefined8 *)0x0;
  *(undefined8 *)((long)ppuVar5 + 0x41) = 0;
  *(undefined8 *)((long)ppuVar5 + 0x39) = 0;
  puStack_30 = (undefined8 *)0x0;
  uStack_28 = 0;
  uStack_d8 = param_1[0x48];
  puStack_e0 = (undefined8 *)*plVar1;
  param_1[0x47] = ppuVar5 + 3;
  param_1[0x48] = ppuVar5;
  func_0x0001078316dc(&puStack_e0);
  iVar3 = (int)&puStack_30;
  func_0x0001078316dc();
  func_0x00010785f1f4();
  uVar4 = iVar3 + 0x480;
  func_0x00010724e330();
  uVar2 = ((uVar4 ^ 0xffffffff) & 0x101) == 0;
  if ((bool)uVar2) {
    FUN_10784a024(&puStack_30,*(undefined8 *)(param_5 + 0x20),param_1 + 4,param_1 + 2);
  }
  else {
    func_0x00010784b550(&puStack_30,*(undefined8 *)(param_5 + 0x18),param_1 + 4,param_1 + 2);
  }
  uStack_d8 = uStack_28;
  puStack_e0 = puStack_30;
  puStack_30 = (undefined8 *)0x0;
  uStack_28 = 0;
  func_0x0001073139fc(*plVar1 + 8,&puStack_e0);
  func_0x00010724b8b8(&puStack_e0);
  func_0x00010724b8b8(&puStack_30);
  lVar9 = *plVar1;
  puVar6 = puStack_1c0;
  puVar10 = puStack_1b8;
  if (puStack_1b8 != (undefined8 *)0x0) {
    do {
      func_0x000107832d84();
      lVar9 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  uStack_d8 = *(undefined8 *)(lVar9 + 0x20);
  puStack_e0 = *(undefined8 **)(lVar9 + 0x18);
  *(undefined8 **)(lVar9 + 0x20) = puVar10;
  *(undefined8 **)(lVar9 + 0x18) = puVar6;
  func_0x00010724b54c(&puStack_e0);
  lVar9 = param_1[0x47];
  ppuVar5 = &puStack_1e0;
  uStack_1d0 = puStack_1c0[1];
  uStack_1d8 = *puStack_1c0;
  puStack_1e0 = param_1;
  if (puStack_1c0[1] != 0) {
    do {
      func_0x000107832d84();
      ppuVar5 = extraout_x8_00;
    } while (extraout_w11_00 != 0);
  }
  puVar10 = (undefined8 *)((ulong)ppuVar5 | 8);
  puVar6 = (undefined8 *)0x308;
  __Znwm();
  func_0x0001078334a0();
  uVar12 = *(undefined8 *)(lVar9 + 0x10);
  uVar8 = *(undefined8 *)(lVar9 + 8);
  if (*(long *)(lVar9 + 0x10) != 0) {
    do {
      func_0x000107832cb4();
    } while (extraout_w10_01 != 0);
  }
  puVar6[1] = uVar12;
  *puVar6 = uVar8;
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  func_0x0001077b6964(puVar6 + 2,&puStack_e0);
  uVar8 = *puVar6;
  puVar6[0x60] = puVar6 + 2;
  puStack_30 = puVar6 + 4;
  puVar11 = (undefined8 *)puVar6[2];
  puStack_20 = (undefined8 *)puVar11[1];
  uStack_28 = *puVar11;
  if (puVar11[1] != 0) {
    do {
      func_0x000107832cb4();
    } while (extraout_w10_02 != 0);
  }
  uStack_198 = uStack_1d8;
  puStack_1a0 = puStack_1e0;
  uStack_190 = uStack_1d0;
  *puVar10 = 0;
  puVar10[1] = 0;
  func_0x000107843320(*param_4);
  func_0x000107833480();
  func_0x000107833454();
  func_0x0001073ada24(*(undefined8 *)puVar6[0x60],uVar8);
  func_0x00010724b8b8(&uStack_1b0);
  func_0x000107833264();
  uStack_1c8 = 0;
  func_0x000107831688(param_1[0x47] + 0x28,puVar6);
  func_0x000107831664(&uStack_1c8);
  func_0x00010724ae28(puVar10);
  *(undefined1 *)(param_1 + 0x4b) = *(undefined1 *)(param_5 + 0x70);
  lVar9 = param_1[0x46];
  uStack_1e8 = param_1[0x48];
  lStack_1f0 = *plVar1;
  if (param_1[0x48] != 0) {
    do {
      func_0x000107832d84();
      lVar9 = extraout_x8_01;
    } while (extraout_w11_01 != 0);
  }
  func_0x000107508c60(lVar9 + 0x38,&lStack_1f0);
  func_0x000107509620(&lStack_1f0);
  func_0x00010724b54c(&puStack_1c0);
  puVar7 = auStack_188;
  func_0x000107273f24(puVar7);
  func_0x000107832c6c(uStack_10);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x00010724b54c(&puStack_1c0);
    do {
      func_0x000107273f24(auStack_188);
      func_0x000107831228(param_1 + 0x69);
      func_0x0001078312d4(param_1 + 100);
      func_0x000107518510(param_1 + 0x5f);
      func_0x000107518478(param_1 + 0x5a);
      func_0x0001075183b4(param_1 + 0x55);
      func_0x00010751838c(param_1 + 0x53);
      func_0x0001074f9d98(param_1 + 0x51);
      func_0x00010724bd50(param_1 + 0x4c);
      func_0x000107831700(param_1 + 0x49);
      func_0x0001078316dc(plVar1);
      func_0x000107831374(param_1 + 0x3f);
      func_0x000107831640(param_1 + 0x3d);
      func_0x0001072c9240(param_1 + 0x37);
      func_0x000107432200(param_1 + 0x35);
      func_0x0001074321c8(param_1 + 0x33);
      func_0x000107432190(param_1 + 0x31);
      func_0x00010747c918(param_1 + 0x26);
      func_0x00010784a90c(param_1);
      __Unwind_Resume(puVar7);
    } while( true );
  }
  return param_1;
}



/* Entry: 10782d5f0; end: 10782d67b;  */

void FUN_10782d5f0(long param_1)

{
  long extraout_x8;
  long lVar1;
  undefined8 *puVar2;
  int extraout_w11;
  long lStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  *(undefined1 *)(param_1 + 0x89) = 1;
  *(long *)(param_1 + 0x1e0) = *(long *)(param_1 + 0x1e0) + 1;
  lVar1 = *(long *)(*(long *)(param_1 + 0x238) + 0x28);
  lStack_38 = lVar1 + 0x20;
  puVar2 = *(undefined8 **)(lVar1 + 0x10);
  uStack_28 = puVar2[1];
  uStack_30 = *puVar2;
  if (puVar2[1] != 0) {
    do {
      func_0x000107832d84();
      param_1 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  func_0x00010782d67c(&lStack_38,&UNK_107845218,0,param_1 + 0x1e0);
  func_0x0001078333b0();
  return;
}



/* Entry: 10782eb60; end: 10782ebcb;  */

void FUN_10782eb60(undefined8 param_1,long param_2)

{
  long extraout_x8;
  int extraout_w10;
  long lStack_38;
  undefined8 uStack_30;
  
  lStack_38 = *(long *)(*(long *)(param_2 + 0x238) + 0x28) + 0x20;
  func_0x000107832ee8();
  uStack_30 = param_1;
  if (extraout_x8 != 0) {
    do {
      func_0x000107832cb4();
    } while (extraout_w10 != 0);
  }
  func_0x00010782ebcc(&lStack_38,&UNK_1078464b4,0);
  func_0x0001078333b0();
  return;
}



/* Entry: 10782efb4; end: 10782f32f;  */

void FUN_10782efb4(void)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  long *plVar4;
  ulong uVar5;
  undefined4 extraout_w8;
  long *plVar6;
  long lVar7;
  long *plVar8;
  int extraout_w10;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  long *unaff_x27;
  long *plVar12;
  long *in_stack_00000078;
  long *in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined4 in_stack_00000090;
  undefined4 in_stack_00000098;
  undefined4 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  long in_stack_000000c8;
  long in_stack_000000d0;
  undefined4 in_stack_000000d8;
  undefined1 in_stack_000000dc;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_00000100;
  
  func_0x000107833544();
  func_0x000107832fc8();
  func_0x000107832d38();
  in_stack_00000090 = 100;
  in_stack_000000a8 = 0;
  in_stack_000000c0 = 0;
  in_stack_000000c8 = 0;
  func_0x000107832d10();
  in_stack_000000b8 = 0;
  in_stack_000000d0 = CONCAT44(in_stack_000000d0._4_4_,extraout_w8);
  in_stack_000000d8 = 0;
  in_stack_000000dc = 1;
  in_stack_000000e8 = 0;
  in_stack_000000f0 = 0;
  in_stack_000000e0 = 0;
  func_0x000107833400(&stack0x00000090,6);
  func_0x00010726e6c0(&stack0x00000008,&stack0x00000090);
  func_0x000107262330(&stack0x00000090);
  iVar1 = (int)unaff_x20[9];
  uVar2 = iVar1 + -1 < 0;
  uVar3 = iVar1 == 1;
  if ((bool)uVar3) {
    func_0x000107832fb0(&stack0x00000008);
    func_0x00010782f3bc((char)unaff_x20[8],&stack0x00000008);
    in_stack_00000090 = 1;
    in_stack_00000098 = 0;
    in_stack_00000078 = (long *)**(undefined8 **)(unaff_x19 + 0x80);
    in_stack_00000080 = (long *)CONCAT44(in_stack_00000080._4_4_,3);
    func_0x000107832e74(*(undefined8 **)(unaff_x19 + 0x80),&stack0x00000008,&stack0x00000090,
                        &stack0x00000078);
  }
  else if (iVar1 == 0) {
    uVar9 = *(undefined8 *)(unaff_x19 + 0x80);
    func_0x000107832fd4(&stack0x00000008,9);
    in_stack_00000090 = 1;
    in_stack_00000098 = 0;
    in_stack_00000078 = (long *)**(undefined8 **)(unaff_x19 + 0x80);
    in_stack_00000080 = (long *)CONCAT44(in_stack_00000080._4_4_,3);
    func_0x000107832e74(uVar9,&stack0x00000008,&stack0x00000090,&stack0x00000078);
    func_0x000104c2fe00(&stack0x00000090,unaff_x20[1] + 0xa8);
    in_stack_000000d0 = unaff_x20[2];
    in_stack_000000c8 = unaff_x20[1];
    if (unaff_x20[2] != 0) {
      do {
        func_0x000107832cb4();
      } while (extraout_w10 != 0);
    }
    plVar8 = (long *)(unaff_x19 + 0x2a8);
    unaff_x20 = (long *)(unaff_x19 + 0x2c0);
    plVar4 = unaff_x20;
    func_0x00010726364c(unaff_x20,&stack0x00000090);
    plVar11 = *(long **)(unaff_x19 + 0x2b0);
    if (plVar11 != (long *)0x0) {
      uVar10 = (long)plVar11 - 1;
      if (((ulong)plVar11 & uVar10) == 0) {
        unaff_x27 = (long *)(uVar10 & (ulong)plVar4);
        uVar3 = true;
        uVar2 = false;
      }
      else {
        uVar2 = (long)plVar4 - (long)plVar11 < 0;
        uVar3 = plVar4 == plVar11;
        unaff_x27 = plVar4;
        if (plVar11 <= plVar4) {
          uVar5 = 0;
          if (plVar11 != (long *)0x0) {
            uVar5 = (ulong)plVar4 / (ulong)plVar11;
          }
          unaff_x27 = (long *)((long)plVar4 - uVar5 * (long)plVar11);
        }
      }
      plVar12 = *(long **)(*plVar8 + (long)unaff_x27 * 8);
      if (plVar12 != (long *)0x0) {
        do {
          while( true ) {
            plVar12 = (long *)*plVar12;
            if (plVar12 == (long *)0x0) goto LAB_10782f198;
            plVar6 = (long *)plVar12[1];
            uVar2 = (long)plVar6 - (long)plVar4 < 0;
            uVar3 = plVar6 == plVar4;
            if (!(bool)uVar3) break;
            uVar5 = (ulong)(plVar12 + 2);
            func_0x000104c32db4(uVar5,&stack0x00000090);
            if ((uVar5 & 1) != 0) goto LAB_10782f2b0;
          }
          if (((ulong)plVar11 & uVar10) == 0) {
            plVar6 = (long *)((ulong)plVar6 & uVar10);
          }
          else if (plVar11 <= plVar6) {
            uVar5 = 0;
            if (plVar11 != (long *)0x0) {
              uVar5 = (ulong)plVar6 / (ulong)plVar11;
            }
            plVar6 = (long *)((long)plVar6 - uVar5 * (long)plVar11);
          }
          uVar2 = (long)plVar6 - (long)unaff_x27 < 0;
          uVar3 = plVar6 == unaff_x27;
        } while ((bool)uVar3);
      }
    }
LAB_10782f198:
    plVar6 = (long *)0x58;
    __Znwm();
    plVar12 = (long *)(unaff_x19 + 0x2b8);
    in_stack_00000088 = 1;
    *plVar6 = 0;
    plVar6[1] = (long)plVar4;
    in_stack_00000078 = plVar6;
    in_stack_00000080 = plVar12;
    func_0x000104c2fe00(plVar6 + 2,&stack0x00000090);
    plVar6[10] = in_stack_000000d0;
    plVar6[9] = in_stack_000000c8;
    in_stack_000000c8 = 0;
    in_stack_000000d0 = 0;
    func_0x000107833248(*(undefined8 *)(unaff_x19 + 0x2c0));
    if ((plVar11 == (long *)0x0) || (func_0x0001078331cc(), (bool)uVar2)) {
      func_0x000107832c80((long)plVar11 << 1);
      func_0x000107831c34(plVar8);
      plVar11 = *(long **)(unaff_x19 + 0x2b0);
      if (((ulong)plVar11 & (long)plVar11 - 1U) == 0) {
        uVar3 = 1;
        unaff_x27 = (long *)((long)plVar11 - 1U & (ulong)plVar4);
      }
      else {
        uVar3 = plVar4 == plVar11;
        unaff_x27 = plVar4;
        if (plVar11 <= plVar4) {
          uVar10 = 0;
          if (plVar11 != (long *)0x0) {
            uVar10 = (ulong)plVar4 / (ulong)plVar11;
          }
          unaff_x27 = (long *)((long)plVar4 - uVar10 * (long)plVar11);
        }
      }
    }
    lVar7 = *plVar8;
    if (*(long *)(lVar7 + (long)unaff_x27 * 8) == 0) {
      *plVar6 = *plVar12;
      *plVar12 = (long)plVar6;
      *(long **)(lVar7 + (long)unaff_x27 * 8) = plVar12;
      if (*plVar6 != 0) {
        plVar8 = *(long **)(*plVar6 + 8);
        if (((ulong)plVar11 & (long)plVar11 - 1U) == 0) {
          plVar8 = (long *)((ulong)plVar8 & (long)plVar11 - 1U);
          uVar3 = true;
        }
        else {
          uVar3 = plVar8 == plVar11;
          if (plVar11 <= plVar8) {
            uVar10 = 0;
            if (plVar11 != (long *)0x0) {
              uVar10 = (ulong)plVar8 / (ulong)plVar11;
            }
            plVar8 = (long *)((long)plVar8 - uVar10 * (long)plVar11);
          }
        }
        *(long **)(lVar7 + (long)plVar8 * 8) = plVar6;
      }
    }
    else {
      func_0x0001078332ec();
    }
    in_stack_00000078 = (long *)0x0;
    *unaff_x20 = *unaff_x20 + 1;
    func_0x000107831d78(&stack0x00000078);
LAB_10782f2b0:
    func_0x000107518410(&stack0x00000090);
    func_0x000107833144(*(undefined8 *)(unaff_x19 + 0x90));
    func_0x000107833410();
  }
  func_0x000107262330();
  func_0x000107832c6c(in_stack_00000100);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107831d78(&stack0x00000078);
  func_0x000107518410(&stack0x00000090);
  func_0x000107262330(&stack0x00000008);
  func_0x000107832e28();
  func_0x0001078334c4();
  func_0x0001078331b4();
  func_0x00010783329c((uint)unaff_x20 & 0xf);
  func_0x000107832e90();
  func_0x000107832ec4();
  func_0x0001078332ac();
  return;
}



/* Entry: 10782f9ac; end: 10782f9b3;  */

void FUN_10782f9ac(long param_1)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  long extraout_x8;
  long lVar8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  long extraout_x8_02;
  long *plVar9;
  ulong *puVar10;
  long extraout_x9;
  int extraout_w10;
  ulong *puVar11;
  int extraout_w11;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar12;
  ulong *puVar13;
  ulong *unaff_x24;
  long in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000048;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  
  func_0x000107833544(param_1 + -0x1a8);
  func_0x000107832fc8();
  in_stack_00000030 = CONCAT44(in_stack_00000030._4_4_,100);
  in_stack_00000048 = 0;
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  func_0x000107832d10();
  func_0x000107833104();
  func_0x000107833400(&stack0x00000030,8);
  func_0x0001078333d4();
  func_0x000107262330(&stack0x00000030);
  iVar2 = *(int *)(unaff_x20 + 0x48);
  uVar4 = iVar2 + -1 < 0;
  uVar5 = iVar2 == 1;
  if ((bool)uVar5) {
    func_0x000107832fb0(&stack0x000000a0);
    func_0x00010782f3bc(*(undefined1 *)(unaff_x20 + 0x40),&stack0x000000a0);
    puVar7 = *(undefined8 **)(unaff_x19 + 0x80);
    func_0x000107832f38();
    func_0x000107832f20(*puVar7);
    func_0x000107833044();
    func_0x000107832e74();
  }
  else if (iVar2 == 0) {
    uVar12 = *(undefined8 *)(unaff_x19 + 0x80);
    func_0x000107832fd4(&stack0x000000a0,9);
    func_0x000107832f38();
    func_0x000107832f20(**(undefined8 **)(unaff_x19 + 0x80));
    func_0x000107833044();
    func_0x000107832e74(uVar12);
    lVar8 = *(long *)(unaff_x20 + 8);
    in_stack_00000018 = *(long *)(unaff_x20 + 0x10);
    in_stack_00000010 = lVar8;
    if (in_stack_00000018 != 0) {
      do {
        func_0x000107832d84();
        lVar8 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    puVar10 = (ulong *)(lVar8 + 0x28);
    func_0x00010782f9b4();
    lVar8 = in_stack_00000018;
    plVar1 = (long *)(unaff_x19 + 0x2f8);
    puVar13 = *(ulong **)(unaff_x19 + 0x300);
    puVar6 = puVar10;
    if (puVar13 != (ulong *)0x0) {
      func_0x0001078334ac();
      if ((bool)uVar5) {
        unaff_x24 = (ulong *)(extraout_x8_00 & (ulong)puVar10);
      }
      else {
        uVar4 = (long)puVar10 - (long)puVar13 < 0;
        unaff_x24 = puVar10;
        if (puVar13 <= puVar10) {
          uVar3 = 0;
          if (puVar13 != (ulong *)0x0) {
            uVar3 = (ulong)puVar10 / (ulong)puVar13;
          }
          unaff_x24 = (ulong *)((long)puVar10 - uVar3 * (long)puVar13);
        }
      }
      plVar9 = *(long **)(*plVar1 + (long)unaff_x24 * 8);
      if (plVar9 != (long *)0x0) {
        do {
          while( true ) {
            plVar9 = (long *)*plVar9;
            if (plVar9 == (long *)0x0) goto code_r0x00010782f860;
            puVar11 = (ulong *)plVar9[1];
            if (puVar11 != puVar10) break;
            uVar4 = plVar9[2] - (long)puVar10 < 0;
            if ((ulong *)plVar9[2] == puVar10) goto code_r0x00010782f948;
          }
          if (((ulong)puVar13 & extraout_x8_00) == 0) {
            puVar11 = (ulong *)((ulong)puVar11 & extraout_x8_00);
          }
          else if (puVar13 <= puVar11) {
            uVar3 = 0;
            if (puVar13 != (ulong *)0x0) {
              uVar3 = (ulong)puVar11 / (ulong)puVar13;
            }
            puVar11 = (ulong *)((long)puVar11 - uVar3 * (long)puVar13);
          }
          uVar4 = (long)puVar11 - (long)unaff_x24 < 0;
        } while (puVar11 == unaff_x24);
      }
    }
code_r0x00010782f860:
    func_0x0001078330fc();
    func_0x00010783315c();
    if (lVar8 != 0) {
      do {
        func_0x000107832cb4();
      } while (extraout_w10 != 0);
    }
    func_0x000107833248(*(undefined8 *)(unaff_x19 + 0x310));
    if ((puVar13 == (ulong *)0x0) || (func_0x0001078331cc(), (bool)uVar4)) {
      func_0x000107833390();
      uVar4 = puVar13 == (ulong *)0x3;
      func_0x000107832c80();
      FUN_107831f2c(plVar1);
      puVar13 = *(ulong **)(unaff_x19 + 0x300);
      func_0x0001078334ac();
      if ((bool)uVar4) {
        unaff_x24 = (ulong *)(extraout_x8_01 & (ulong)puVar10);
      }
      else {
        unaff_x24 = puVar10;
        if (puVar13 <= puVar10) {
          uVar3 = 0;
          if (puVar13 != (ulong *)0x0) {
            uVar3 = (ulong)puVar10 / (ulong)puVar13;
          }
          unaff_x24 = (ulong *)((long)puVar10 - uVar3 * (long)puVar13);
        }
      }
    }
    puVar10 = *(ulong **)(*plVar1 + (long)unaff_x24 * 8);
    if (puVar10 == (ulong *)0x0) {
      func_0x000107833378();
      if (extraout_x9 != 0) {
        puVar10 = *(ulong **)(extraout_x9 + 8);
        if (((ulong)puVar13 & (long)puVar13 - 1U) == 0) {
          puVar10 = (ulong *)((ulong)puVar10 & (long)puVar13 - 1U);
        }
        else if (puVar13 <= puVar10) {
          uVar3 = 0;
          if (puVar13 != (ulong *)0x0) {
            uVar3 = (ulong)puVar10 / (ulong)puVar13;
          }
          puVar10 = (ulong *)((long)puVar10 - uVar3 * (long)puVar13);
        }
        *(ulong **)(extraout_x8_02 + (long)puVar10 * 8) = puVar6;
      }
    }
    else {
      *puVar6 = *puVar10;
      *puVar10 = (ulong)puVar6;
    }
    in_stack_00000030 = 0;
    *(long *)(unaff_x19 + 0x310) = *(long *)(unaff_x19 + 0x310) + 1;
    func_0x000107832070(&stack0x00000030);
code_r0x00010782f948:
    func_0x00010742ac74(&stack0x00000010);
    func_0x000107833144(*(undefined8 *)(unaff_x19 + 0x90));
    func_0x000107833410();
  }
  func_0x000107262330(&stack0x000000a0);
  return;
}



/* Entry: 10782fd34; end: 10783001b;  */

long * FUN_10782fd34(long *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 in_ZR;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  code *extraout_x8;
  int extraout_w10;
  undefined4 uVar7;
  undefined8 uStack_2c0;
  long lStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long *aplStack_2a0 [2];
  long lStack_290;
  long lStack_288;
  undefined8 uStack_280;
  long alStack_270 [2];
  undefined1 auStack_260 [56];
  undefined1 uStack_228;
  undefined8 uStack_220;
  undefined1 auStack_218 [112];
  undefined1 uStack_1a8;
  long lStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined8 uStack_10;
  
  func_0x000107833360();
  func_0x000107832d38();
  plVar4 = param_1;
  if ((param_1[0x3d] != 0) && (lVar6 = *(long *)(param_1[0x3d] + 0x30), lVar6 != 0)) {
    plVar3 = *(long **)(lVar6 + 0x128);
    plVar4 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x20))(alStack_270);
      func_0x00010726ddb0(&lStack_1a0,*(undefined8 *)(alStack_270[0] + 0x10),0);
      if (*(char *)(param_3 + 0x18) == '\x01') {
        func_0x00010726fe1c(&lStack_290,param_3);
      }
      else {
        lStack_288 = lStack_198;
        lStack_290 = lStack_1a0;
        uStack_280 = uStack_190;
        lStack_198 = 0;
        uStack_190 = 0;
        lStack_1a0 = 0;
      }
      func_0x00010726e078(&lStack_1a0);
      lVar2 = lStack_288;
      for (lVar6 = lStack_290; in_ZR = lVar6 == lVar2, !(bool)in_ZR; lVar6 = lVar6 + 0x38) {
        plVar4 = *(long **)(*(long *)(param_1[0x3d] + 0x30) + 0x128);
        (**(code **)(*plVar4 + 0x18))(aplStack_2a0,plVar4,lVar6);
        if (aplStack_2a0[0] != (long *)0x0) {
          plVar3 = aplStack_2a0[0];
          func_0x000107833144();
          (*extraout_x8)();
          for (plVar4 = (long *)0x0; plVar4 != plVar3; plVar4 = (long *)((long)plVar4 + 1)) {
            (**(code **)(*aplStack_2a0[0] + 0x18))(&uStack_2b0,aplStack_2a0[0],plVar4);
            if (*(char *)(param_3 + 0x80) == '\x01') {
              uVar7 = NEON_ucvtf((uint)*(byte *)((long)param_1 + 0xc));
              func_0x0001077512dc(uVar7,&lStack_1a0);
              lStack_2b8 = lStack_2a8;
              uStack_2c0 = uStack_2b0;
              if (lStack_2a8 != 0) {
                do {
                  func_0x000107832cb4();
                } while (extraout_w10 != 0);
              }
              auStack_218[0] = 0;
              uStack_1a8 = 0;
              func_0x000107751444(&lStack_1a0,&uStack_2c0,auStack_218);
              auStack_260[0] = 0;
              uStack_228 = 0;
              uStack_220 = 0;
              uVar5 = param_3 + 0x20;
              func_0x00010777faa8(uVar5,&lStack_1a0,auStack_260);
              func_0x00010783322c();
              func_0x000107267e8c(auStack_218);
              func_0x000107267e44(&uStack_2c0);
              func_0x000107267da8(&lStack_1a0);
              if ((uVar5 & 1) != 0) goto LAB_10782fed0;
            }
            else {
LAB_10782fed0:
              uVar1 = uStack_2b0;
              func_0x00010729807c(auStack_218,param_1 + 4);
              func_0x00010729807c(auStack_260,lVar6);
              func_0x0001078344c8(&lStack_1a0,uVar1,param_1 + 2,auStack_218,auStack_260);
              uStack_a8 = *(undefined8 *)((long)param_1 + 0x14);
              uStack_b0 = *(undefined8 *)((long)param_1 + 0xc);
              uStack_a0 = 1;
              func_0x000107829acc(param_2,&lStack_1a0);
              func_0x000107269e60(&lStack_1a0);
              func_0x00010783322c();
              func_0x00010724b3d8(auStack_218);
            }
            func_0x000107330fdc(&uStack_2b0);
          }
        }
        func_0x000107331000(aplStack_2a0);
      }
      func_0x00010726e078(&lStack_290);
      plVar4 = alStack_270;
      func_0x000107283194(plVar4);
    }
  }
  func_0x000107832c6c(uStack_10);
  if ((bool)in_ZR) {
    return plVar4;
  }
  ___stack_chk_fail();
  func_0x00010726e078(&lStack_1a0);
  plVar4 = alStack_270;
  func_0x000107283194();
  func_0x000107832e28();
  if (((int)plVar4[0x67] == 0) && (*(int *)((long)plVar4 + 0x344) - 1U < 2)) {
    return (long *)0x1;
  }
  return (long *)(ulong)(0 < (int)plVar4[0x68]);
}



/* Entry: 107830e6c; end: 107830eeb;  */

long FUN_107830e6c(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x1e8);
  if (lVar4 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = *(long *)(*(long *)(lVar4 + 0x30) + 0x128);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      func_0x00010783346c();
      lVar4 = *(long *)(param_1 + 0x1e8);
    }
    if (*(char *)(lVar4 + 0x128) == '\x01') {
      func_0x000107832f10();
      lVar2 = 0;
      for (plVar3 = *(long **)(lVar4 + 0x90); plVar3 != *(long **)(lVar4 + 0x98);
          plVar3 = plVar3 + 1) {
        lVar2 = *plVar3 + lVar2;
      }
    }
    else {
      lVar2 = 0;
    }
    lVar2 = lVar2 + lVar1;
  }
  return lVar2;
}



/* Entry: 107830fd8; end: 107830fe3;  */

undefined ** FUN_107830fd8(void)

{
  return &PTR_DAT_1109e10b0;
}



/* Entry: 1078311c4; end: 1078311ff;  */

void FUN_1078311c4(long param_1)

{
  func_0x0001073c82a8();
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 107831400; end: 10783140b;  */

bool FUN_107831400(long param_1)

{
  long lVar1;
  
  func_0x000107832fa4();
  lVar1 = param_1;
  func_0x0001073f9894();
  return param_1 + 8 != lVar1;
}



/* Entry: 107831724; end: 107831727;  */

void FUN_107831724(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e10f8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1078318a0; end: 1078318eb;  */

void FUN_1078318a0(void)

{
  undefined8 *unaff_x19;
  undefined8 uStack_68;
  undefined1 auStack_60 [64];
  
  func_0x0001078330a4();
  func_0x000107831960();
  func_0x000107833530();
  func_0x0001078318ec();
  *unaff_x19 = uStack_68;
  func_0x000107831ac4(auStack_60);
  return;
}



/* Entry: 107831a98; end: 107831ae3;  */

undefined8 * FUN_107831a98(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e1198;
  func_0x000107831ac4(param_1 + 4);
  return param_1;
}



/* Entry: 107831c14; end: 107831c27;  */

void FUN_107831c14(void)

{
  func_0x0001078320a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107831f2c; end: 107832057;  */

/* WARNING: Possible PIC construction at 0x000107831f84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107832044: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107831f88) */
/* WARNING: Removing unreachable block (ram,0x000107831f8c) */
/* WARNING: Removing unreachable block (ram,0x000107831fa0) */
/* WARNING: Removing unreachable block (ram,0x000107831fa8) */
/* WARNING: Removing unreachable block (ram,0x000107831fb0) */
/* WARNING: Removing unreachable block (ram,0x000107831fb8) */
/* WARNING: Removing unreachable block (ram,0x000107831fc0) */
/* WARNING: Removing unreachable block (ram,0x000107831fe0) */
/* WARNING: Removing unreachable block (ram,0x000107831fcc) */
/* WARNING: Removing unreachable block (ram,0x000107831fd4) */
/* WARNING: Removing unreachable block (ram,0x000107831fe4) */
/* WARNING: Removing unreachable block (ram,0x000107831fec) */
/* WARNING: Removing unreachable block (ram,0x000107831ffc) */
/* WARNING: Removing unreachable block (ram,0x000107832004) */
/* WARNING: Removing unreachable block (ram,0x000107831ff4) */
/* WARNING: Removing unreachable block (ram,0x000107831f94) */
/* WARNING: Removing unreachable block (ram,0x000107832048) */

void FUN_107831f2c(long *param_1,long *param_2)

{
  undefined1 uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  plVar2 = param_1;
  if ((long)param_2 - 1U == 0) {
    plVar4 = (long *)0x2;
  }
  else {
    plVar4 = param_2;
    if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
      func_0x00010783343c();
      plVar4 = plVar2;
    }
  }
  plVar5 = (long *)param_1[1];
  uVar1 = plVar5 <= plVar4;
  if (!(bool)uVar1 || plVar4 == plVar5) {
    if ((bool)uVar1) {
      return;
    }
    func_0x000107832e58();
    if (((bool)uVar1) && (((ulong)plVar5 & (long)plVar5 - 1U) == 0)) {
      func_0x000107832da8();
    }
    else {
      __ZNSt3__112__next_primeEm();
    }
    func_0x00010783326c();
    if ((bool)uVar1) {
      return;
    }
    if (plVar4 == (long *)0x0) {
      param_2 = (long *)0x0;
      goto code_r0x000107832058;
    }
  }
  if ((ulong)plVar4 >> 0x3d == 0) {
    func_0x0001078333c0();
    param_2 = plVar2;
  }
  else {
    func_0x000104bd35f4();
    param_1 = plVar2;
  }
code_r0x000107832058:
  lVar3 = *param_1;
  *param_1 = (long)param_2;
  if (lVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107832160; end: 1078321ab;  */

undefined8 * FUN_107832160(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e12a8;
  func_0x00010783218c(param_1 + 4);
  return param_1;
}



/* Entry: 107832504; end: 10783252f;  */

long FUN_107832504(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x000107832530(param_1);
  }
  return param_1;
}



/* Entry: 1078326ec; end: 10783275f;  */

void FUN_1078326ec(undefined8 param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  code *extraout_x9;
  code *extraout_x9_00;
  code *pcVar2;
  long *plVar3;
  ulong extraout_x11;
  long *plVar4;
  long *plStack_38;
  long lStack_30;
  long lStack_28;
  
  func_0x000107832e7c();
  lVar1 = extraout_x8;
  pcVar2 = extraout_x9;
  if ((extraout_x11 & 1) != 0) {
    func_0x0001078334f8();
    lVar1 = extraout_x8_00;
    pcVar2 = extraout_x9_00;
  }
  plVar3 = (long *)(lVar1 + 0x28);
  lStack_30 = *plVar3;
  plVar4 = *(long **)(lVar1 + 0x20);
  plStack_38 = &lStack_30;
  lStack_28 = *(long *)(lVar1 + 0x30);
  if (lStack_28 != 0) {
    *(long **)(lStack_30 + 0x10) = plStack_38;
    *(long **)(lVar1 + 0x20) = plVar3;
    *plVar3 = 0;
    *(undefined8 *)(lVar1 + 0x30) = 0;
    plStack_38 = plVar4;
  }
  (*pcVar2)(param_1,&plStack_38);
  func_0x0001078330c8();
  return;
}



/* Entry: 1078329a8; end: 1078329bb;  */

void FUN_1078329a8(void)

{
  func_0x0001078329ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107832b40; end: 107832bff;  */

bool FUN_107832b40(long param_1,long param_2)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long lStack_30;
  long lStack_28;
  
  if (**(char **)(param_1 + 8) == '\x01') {
    lVar3 = param_2;
    func_0x00010783321c(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x1e8));
    lStack_30 = param_1;
    lStack_28 = lVar3;
    while ((bVar1 = lStack_30 != 0, lStack_30 != 0 &&
           ((plVar2 = *(long **)(lStack_28 + 0x38), plVar2 == (long *)0x0 ||
            ((**(code **)(*plVar2 + 0x30))(plVar2,param_2), ((ulong)plVar2 & 1) == 0))))) {
      func_0x00010782bcf8(&lStack_30);
    }
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 107833d38; end: 107833d7b;  */

undefined1  [16] FUN_107833d38(double param_1)

{
  short sVar1;
  long unaff_x19;
  short *unaff_x20;
  double dVar2;
  double dVar3;
  double unaff_d8;
  undefined1 auVar4 [16];
  
  func_0x0001078425f8();
  func_0x000107842688();
  dVar2 = (double)NEON_ucvtf((ulong)*(uint *)(unaff_x19 + 4));
  dVar3 = (double)NEON_ucvtf((ulong)*(uint *)(unaff_x19 + 8));
  sVar1 = *unaff_x20;
  dVar3 = ((180.0 - ((unaff_d8 * dVar3 + (double)(int)unaff_x20[1]) * 360.0) / (param_1 * unaff_d8))
          * 3.141592653589793) / 180.0;
  _exp(dVar3);
  _atan();
  auVar4._8_8_ = dVar3 * 114.59155902616465 + -90.0;
  auVar4._0_8_ = ((unaff_d8 * dVar2 + (double)(int)sVar1) * 360.0) / (param_1 * unaff_d8) + -180.0;
  return auVar4;
}



/* Entry: 10783466c; end: 10783468b;  */

void FUN_10783466c(void)

{
  func_0x00010783468c();
  return;
}



/* Entry: 107834824; end: 107834837;  */

void FUN_107834824(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1078349e4; end: 107834a07;  */

long * FUN_1078349e4(long *param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x000107834a08();
  func_0x000107834a08();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar1 != lVar2) {
    func_0x000107842ff4();
  }
  func_0x000107834ba0();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107834bc4; end: 107834c5b;  */

undefined8 FUN_107834bc4(long *param_1)

{
  undefined8 uVar1;
  int unaff_w21;
  long lStack_48;
  long lStack_40;
  
  func_0x000107842888();
  func_0x000107842f78();
  func_0x000107834c5c(&lStack_48,param_1[1] - *param_1 >> 3);
  func_0x000107834ce4();
  if ((unaff_w21 == 0) || (lStack_48 == lStack_40)) {
    uVar1 = 0;
  }
  else {
    func_0x0001078350c4(&lStack_48);
    uVar1 = 1;
  }
  func_0x000107834afc(&lStack_48);
  return uVar1;
}



/* Entry: 107835858; end: 107835887;  */

void FUN_107835858(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  for (; param_2 != param_3; param_2 = param_2 + 3) {
    *param_4 = *param_2;
    param_4[1] = param_2[1];
    param_4[2] = param_2[2];
    param_4 = param_4 + 3;
  }
  return;
}



/* Entry: 107835aa4; end: 107835b63;  */

undefined8 * FUN_107835aa4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = param_3;
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
    puVar1[2] = param_1[2];
    puVar1 = puVar1 + 3;
    param_3 = param_3 + 3;
  }
  return param_3;
}



/* Entry: 1078361ac; end: 1078361ef;  */

void FUN_1078361ac(ulong param_1,ulong param_2)

{
  if (param_1 != param_2) {
    for (; param_2 = param_2 - 0x18, param_1 < param_2; param_1 = param_1 + 0x18) {
      func_0x000107842764();
      func_0x00010783609c();
    }
  }
  return;
}



/* Entry: 107837864; end: 107837997;  */

void FUN_107837864(void)

{
  undefined *puVar1;
  char in_NG;
  char in_OV;
  long lVar2;
  ulong unaff_x20;
  undefined8 uStack_60;
  ulong uStack_58;
  undefined1 auStack_50 [8];
  ulong uStack_48;
  
  func_0x000107842bbc();
  puVar1 = PTR___ZSt7nothrow_1103469d8;
  if (in_NG == in_OV) {
    for (; unaff_x20 != 0; unaff_x20 = unaff_x20 >> 1) {
      lVar2 = unaff_x20 << 3;
      __ZnwmRKSt9nothrow_t(lVar2,puVar1);
      if (lVar2 != 0) goto LAB_1078378c4;
    }
    lVar2 = 0;
LAB_1078378c4:
    uStack_60 = 0;
    uStack_58 = unaff_x20;
    func_0x000107837b9c(auStack_50,lVar2);
    uStack_48 = unaff_x20;
    func_0x000107837bb4(&uStack_60);
  }
  func_0x000107842c0c();
  func_0x000107837a38();
  func_0x000107837bb4(auStack_50);
  return;
}



/* Entry: 107838144; end: 107838197;  */

void FUN_107838144(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long *unaff_x20;
  long *unaff_x21;
  long lVar2;
  
  func_0x000107842888();
  lVar1 = 0;
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 1) {
    lVar2 = *unaff_x21;
    *(long *)(lVar2 + 0x48) = lVar1;
    func_0x000107838198(*(undefined8 *)(lVar2 + 0x18),param_4);
    *(undefined8 *)(lVar2 + 0x40) = param_1;
    lVar1 = lVar1 + 1;
  }
  return;
}



/* Entry: 10783868c; end: 1078386cb;  */

void FUN_10783868c(long param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  puVar3 = puVar1;
  for (puVar2 = (undefined8 *)(param_2 + ((long)puVar1 - (long)param_4)); puVar2 < param_3;
      puVar2 = puVar2 + 1) {
    *puVar3 = *puVar2;
    puVar3 = puVar3 + 1;
  }
  *(undefined8 **)(param_1 + 8) = puVar3;
  if (puVar1 != param_4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memmove_11034c660)((long)puVar1 - ((long)puVar1 - (long)param_4));
    return;
  }
  return;
}



/* Entry: 107838a48; end: 107838abf;  */

void FUN_107838a48(void)

{
  func_0x000107842254();
  func_0x00010784214c();
  return;
}



/* Entry: 107839368; end: 10783942b;  */

void FUN_107839368(undefined8 param_1,undefined8 param_2,undefined8 *param_3,int *param_4,
                  int *param_5)

{
  bool bVar1;
  int extraout_w8;
  uint uVar2;
  int extraout_w8_00;
  int extraout_w8_01;
  undefined8 uVar3;
  uint extraout_w9;
  uint extraout_w9_00;
  uint extraout_w9_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 *unaff_x19;
  
  func_0x0001078425f8();
  func_0x0001078392e0();
  bVar1 = *param_5 < *param_4;
  if (param_5[1] != param_4[1]) {
    bVar1 = param_4[1] < param_5[1];
  }
  if (bVar1) {
    uVar3 = *(undefined8 *)param_4;
    *(undefined8 *)param_4 = *(undefined8 *)param_5;
    *(undefined8 *)param_5 = uVar3;
    func_0x0001078432b8();
    uVar2 = extraout_w9;
    if (extraout_w8 != extraout_w10) {
      uVar2 = (uint)(extraout_w10 < extraout_w8);
    }
    if (uVar2 == 1) {
      func_0x000107842a3c();
      uVar2 = extraout_w9_00;
      if (extraout_w8_00 != extraout_w10_00) {
        uVar2 = (uint)(extraout_w10_00 < extraout_w8_00);
      }
      if (uVar2 == 1) {
        uVar3 = *unaff_x19;
        *unaff_x19 = *param_3;
        *param_3 = uVar3;
        func_0x000107842894(*(undefined4 *)((long)unaff_x19 + 4));
        uVar2 = extraout_w9_01;
        if (extraout_w8_01 != extraout_w10_01) {
          uVar2 = (uint)(extraout_w10_01 < extraout_w8_01);
        }
        if (uVar2 == 1) {
          func_0x000107843228();
        }
      }
    }
  }
  return;
}



/* Entry: 1078398f0; end: 107839a73;  */

void FUN_1078398f0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  bool bVar1;
  long lVar2;
  long extraout_x8;
  long *plVar3;
  long *extraout_x10;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  
  if (param_3 != 0) {
    func_0x0001078422cc();
    if ((bool)in_ZR) {
      if (*(ulong *)(unaff_x21[-1] + 0x48) < *(ulong *)(*unaff_x20 + 0x48)) {
        *unaff_x19 = unaff_x21[-1];
        lVar2 = *unaff_x20;
      }
      else {
        *unaff_x19 = *unaff_x20;
        lVar2 = unaff_x21[-1];
      }
      unaff_x19[1] = lVar2;
    }
    else if (unaff_x23 == 1) {
      func_0x0001078426c8();
    }
    else if (unaff_x23 < 9) {
      bVar1 = unaff_x20 == unaff_x21;
      if (!bVar1) {
        lVar2 = 0;
        *unaff_x19 = *unaff_x20;
        while (func_0x000107842b14(lVar2), !bVar1) {
          uVar4 = *(ulong *)(*unaff_x20 + 0x48);
          uVar5 = *(ulong *)(*extraout_x10 + 0x48);
          bVar1 = uVar4 == uVar5;
          if (uVar4 < uVar5) {
            extraout_x10[1] = *extraout_x10;
            for (lVar2 = extraout_x8; plVar3 = unaff_x19, lVar2 != 0; lVar2 = lVar2 + -8) {
              uVar4 = *(ulong *)(*unaff_x20 + 0x48);
              lVar6 = ((long *)((long)unaff_x19 + lVar2))[-1];
              uVar5 = *(ulong *)(lVar6 + 0x48);
              bVar1 = uVar4 == uVar5;
              plVar3 = (long *)((long)unaff_x19 + lVar2);
              if (uVar5 <= uVar4) break;
              *(long *)((long)unaff_x19 + lVar2) = lVar6;
            }
            *plVar3 = *unaff_x20;
          }
          else {
            extraout_x10[1] = *unaff_x20;
          }
          lVar2 = extraout_x8 + 8;
        }
      }
    }
    else {
      func_0x0001078421ec();
      func_0x00010783973c();
      func_0x0001078422b4();
      func_0x00010783973c();
      plVar3 = unaff_x22;
      for (; unaff_x20 != unaff_x22; unaff_x20 = (long *)((long)unaff_x20 + lVar6)) {
        if (plVar3 == unaff_x21) {
          while (unaff_x20 != unaff_x22) {
            func_0x000107842b08();
          }
          return;
        }
        bVar1 = *(ulong *)(*unaff_x20 + 0x48) <= *(ulong *)(*plVar3 + 0x48);
        lVar2 = *plVar3;
        if (bVar1) {
          lVar2 = *unaff_x20;
        }
        lVar6 = 8;
        if (bVar1) {
          lVar6 = 0;
        }
        plVar3 = (long *)((long)plVar3 + lVar6);
        lVar6 = 0;
        if (bVar1) {
          lVar6 = 8;
        }
        *unaff_x19 = lVar2;
        unaff_x19 = unaff_x19 + 1;
      }
      for (; plVar3 != unaff_x21; plVar3 = plVar3 + 1) {
        *unaff_x19 = *plVar3;
        unaff_x19 = unaff_x19 + 1;
      }
    }
  }
  return;
}



/* Entry: 10783a798; end: 10783ab2b;  */

void FUN_10783a798(long param_1,long param_2,undefined8 *param_3,int param_4,int param_5,int param_6
                  ,undefined8 param_7,long *param_8)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  char cVar5;
  char cVar6;
  undefined1 uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  long unaff_x19;
  long unaff_x20;
  ulong uVar20;
  ulong uVar21;
  undefined1 uVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  long *plVar26;
  long lVar27;
  double dVar28;
  
  func_0x0001078425f8();
  lVar14 = *(long *)(param_1 + 0x30);
  lVar13 = *(long *)(param_2 + 0x30);
  cVar5 = *(char *)(param_1 + 0x59);
  cVar6 = *(char *)(param_2 + 0x59);
  iVar17 = param_6;
  iVar18 = param_5;
  iVar16 = param_6;
  iVar19 = param_5;
  if (cVar5 == cVar6) {
    if (cVar5 != '\0') {
      iVar18 = param_6;
    }
    if (iVar18 != 0) {
      iVar1 = *(int *)(unaff_x20 + 0x50) + (int)*(char *)(unaff_x19 + 0x58);
      if (iVar1 == 0) {
        iVar1 = -*(int *)(unaff_x20 + 0x50);
      }
      *(int *)(unaff_x20 + 0x50) = iVar1;
      iVar1 = *(int *)(unaff_x19 + 0x50) - (int)*(char *)(unaff_x20 + 0x58);
      if (iVar1 == 0) {
        *(int *)(unaff_x19 + 0x50) = -*(int *)(unaff_x19 + 0x50);
      }
      else {
        *(int *)(unaff_x19 + 0x50) = iVar1;
      }
      goto LAB_10783a8a0;
    }
    uVar3 = *(undefined4 *)(unaff_x20 + 0x50);
    *(undefined4 *)(unaff_x20 + 0x50) = *(undefined4 *)(unaff_x19 + 0x50);
    *(undefined4 *)(unaff_x19 + 0x50) = uVar3;
LAB_10783a880:
    if (cVar5 != '\0') {
      iVar16 = param_5;
    }
    if (cVar6 != '\0') {
      iVar19 = param_6;
      iVar17 = param_5;
    }
LAB_10783a8d0:
    uVar2 = *(uint *)(unaff_x20 + 0x50);
    uVar15 = -uVar2;
    if (-1 < (int)uVar2) {
      uVar15 = uVar2;
    }
  }
  else {
    iVar1 = param_5;
    if (cVar6 != '\0') {
      iVar1 = param_6;
    }
    if (iVar1 == 0) {
      uVar15 = (uint)(*(int *)(unaff_x20 + 0x54) == 0);
    }
    else {
      uVar15 = *(int *)(unaff_x20 + 0x54) + (int)*(char *)(unaff_x19 + 0x58);
    }
    *(uint *)(unaff_x20 + 0x54) = uVar15;
    if (cVar5 != '\0') {
      iVar18 = param_6;
    }
    if (iVar18 == 0) {
      *(uint *)(unaff_x19 + 0x54) = (uint)(*(int *)(unaff_x19 + 0x54) == 0);
      goto LAB_10783a880;
    }
    *(int *)(unaff_x19 + 0x54) = *(int *)(unaff_x19 + 0x54) - (int)*(char *)(unaff_x20 + 0x58);
LAB_10783a8a0:
    if (cVar5 != '\0') {
      iVar16 = param_5;
    }
    if (cVar6 != '\0') {
      iVar17 = param_5;
      iVar19 = param_6;
    }
    if (iVar18 == 3) {
      uVar15 = -*(int *)(unaff_x20 + 0x50);
    }
    else {
      if (iVar18 != 2) goto LAB_10783a8d0;
      uVar15 = *(uint *)(unaff_x20 + 0x50);
    }
  }
  uVar4 = *(uint *)(unaff_x19 + 0x50);
  uVar2 = -uVar4;
  if (-1 < (int)uVar4) {
    uVar2 = uVar4;
  }
  if (iVar19 == 3) {
    uVar2 = -uVar4;
  }
  plVar8 = (long *)(ulong)uVar2;
  if (iVar19 != 2) {
    uVar4 = uVar2;
  }
  if ((lVar14 == 0) || (lVar13 == 0)) {
    if (lVar14 != 0) {
      if (1 < uVar4) {
        return;
      }
      func_0x0001078426a0();
      *(undefined8 *)(unaff_x19 + 0x28) = *param_3;
      goto LAB_10783a990;
    }
    if (lVar13 == 0) {
      if (1 < uVar15 || 1 < uVar4) {
        return;
      }
      iVar19 = *(int *)(unaff_x20 + 0x54);
      iVar18 = -iVar19;
      if (-1 < iVar19) {
        iVar18 = iVar19;
      }
      if (iVar16 == 3) {
        iVar18 = -iVar19;
      }
      if (iVar16 != 2) {
        iVar19 = iVar18;
      }
      iVar16 = *(int *)(unaff_x19 + 0x54);
      iVar18 = -iVar16;
      if (-1 < iVar16) {
        iVar18 = iVar16;
      }
      if (iVar17 == 3) {
        iVar18 = -iVar16;
      }
      if (iVar17 != 2) {
        iVar16 = iVar18;
      }
      uVar7 = false;
      if (cVar5 == cVar6) {
        if (uVar15 != 1 || uVar4 != 1) {
          func_0x000107843298();
          return;
        }
        uVar7 = param_4 == 3;
        if (!(bool)uVar7) {
          if (param_4 == 2) {
            uVar7 = (cVar5 != '\x01' || iVar19 < 1) || iVar16 == 0;
            if (((cVar5 != '\x01' || iVar19 < 1) || iVar16 < 1) &&
               (uVar7 = (iVar19 < 1 && cVar5 == '\0') && iVar16 == 0,
               (iVar19 >= 1 || cVar5 != '\0') || 0 < iVar16)) {
              return;
            }
          }
          else if (param_4 == 0) {
            uVar7 = 0 < iVar19 && iVar16 == 1;
            if (0 >= iVar19 || iVar16 < 1) {
              return;
            }
          }
          else {
            uVar7 = iVar19 < 1 && iVar16 == 0;
            if (0 < iVar19 || 0 < iVar16) {
              return;
            }
          }
        }
      }
      func_0x000107842758();
      func_0x0001078430f4();
      func_0x0001078425f8();
      dVar28 = *(double *)(*(long *)(param_2 + 0x18) + 0x10);
      func_0x000107843108(dVar28);
      if (((bool)uVar7) || (dVar28 < *(double *)(*(long *)(unaff_x20 + 0x18) + 0x10))) {
        uVar22 = 0;
        uVar7 = 1;
        lVar13 = unaff_x20;
        lVar14 = unaff_x19;
      }
      else {
        uVar7 = 0;
        uVar22 = 1;
        lVar13 = unaff_x19;
        lVar14 = unaff_x20;
      }
      func_0x00010783ab2c(lVar13,param_8,param_3,param_7);
      *(undefined8 *)(lVar14 + 0x28) = *param_3;
      *(undefined8 *)(lVar14 + 0x30) = *(undefined8 *)(lVar13 + 0x30);
      *(undefined1 *)(unaff_x20 + 0x5a) = uVar22;
      *(undefined1 *)(unaff_x19 + 0x5a) = uVar7;
      return;
    }
    if (1 < uVar15) {
      return;
    }
    *(undefined8 *)(unaff_x20 + 0x28) = *param_3;
  }
  else {
    if ((1 < uVar15 || 1 < uVar4) || (param_4 != 3 && cVar5 != cVar6)) {
      func_0x000107842758();
      func_0x00010783adc8(param_2,param_3,param_7);
      plVar9 = plVar8;
      plVar11 = param_8;
      func_0x00010783ab2c(plVar8,param_8,param_3,param_7);
      if ((ulong *)plVar8[6] == *(ulong **)(param_2 + 0x30)) {
        plVar8[6] = 0;
        *(undefined8 *)(param_2 + 0x30) = 0;
        return;
      }
      if (*(ulong *)plVar8[6] < **(ulong **)(param_2 + 0x30)) {
        func_0x00010784274c();
      }
      else {
        func_0x00010784262c();
      }
      uVar23 = plVar9[6];
      uVar24 = plVar11[6];
      uVar10 = uVar23;
      func_0x00010783ba74(uVar23,uVar24);
      plVar8 = plVar11;
      uVar20 = uVar24;
      uVar21 = uVar23;
      plVar26 = plVar9;
      if ((uVar10 & 1) == 0) {
        func_0x000107842a84();
        func_0x00010783ba74();
        plVar8 = plVar9;
        uVar20 = uVar23;
        uVar21 = uVar24;
        plVar26 = plVar11;
        if ((uVar10 & 1) == 0) {
          lVar13 = *(long *)(uVar23 + 0x50);
          if (lVar13 == 0) {
            lVar13 = *(long *)(uVar23 + 0x48);
            func_0x00010783bb6c();
            *(long *)(uVar23 + 0x50) = lVar13;
          }
          lVar14 = *(long *)(uVar24 + 0x50);
          if (lVar14 == 0) {
            lVar14 = *(long *)(uVar24 + 0x48);
            func_0x00010783bb6c();
            *(long *)(uVar24 + 0x50) = lVar14;
            lVar13 = *(long *)(uVar23 + 0x50);
          }
          uVar10 = uVar23;
          if ((*(int *)(lVar13 + 0xc) <= *(int *)(lVar14 + 0xc)) &&
             (uVar10 = uVar24, *(int *)(lVar14 + 0xc) <= *(int *)(lVar13 + 0xc))) {
            uVar10 = uVar23;
            if (((*(int *)(lVar14 + 8) <= *(int *)(lVar13 + 8)) &&
                (((uVar10 = uVar24, *(int *)(lVar13 + 8) <= *(int *)(lVar14 + 8) &&
                  (*(long *)(lVar13 + 0x10) != lVar13)) &&
                 (uVar10 = uVar23, *(long *)(lVar14 + 0x10) != lVar14)))) &&
               (func_0x00010783bc30(), (int)lVar13 == 0)) {
              uVar10 = uVar24;
            }
          }
          if (uVar23 != uVar10) {
            plVar8 = plVar11;
            uVar20 = uVar24;
            uVar21 = uVar23;
            plVar26 = plVar9;
          }
        }
      }
      lVar25 = *(long *)(uVar20 + 0x48);
      lVar27 = *(long *)(lVar25 + 0x18);
      lVar14 = *(long *)(uVar21 + 0x48);
      lVar13 = *(long *)(lVar14 + 0x18);
      if (*(char *)((long)plVar8 + 0x5a) == '\0') {
        if (*(char *)((long)plVar26 + 0x5a) == '\0') {
          func_0x00010783ba90(lVar14);
          *(long *)(lVar14 + 0x10) = lVar25;
          *(long *)(lVar25 + 0x18) = lVar14;
          *(long *)(lVar27 + 0x10) = lVar13;
          *(long *)(lVar13 + 0x18) = lVar27;
          *(long *)(uVar20 + 0x48) = lVar13;
        }
        else {
          *(long *)(lVar13 + 0x10) = lVar25;
          *(long *)(lVar25 + 0x18) = lVar13;
          *(long *)(lVar14 + 0x18) = lVar27;
          *(long *)(lVar27 + 0x10) = lVar14;
          *(long *)(uVar20 + 0x48) = lVar14;
        }
      }
      else if (*(char *)((long)plVar26 + 0x5a) == '\x01') {
        func_0x00010783ba90(lVar14);
        *(long *)(lVar27 + 0x10) = lVar13;
        *(long *)(lVar13 + 0x18) = lVar27;
        *(long *)(lVar14 + 0x10) = lVar25;
        *(long *)(lVar25 + 0x18) = lVar14;
      }
      else {
        *(long *)(lVar27 + 0x10) = lVar14;
        *(long *)(lVar14 + 0x18) = lVar27;
        *(long *)(lVar25 + 0x18) = lVar13;
        *(long *)(lVar13 + 0x10) = lVar25;
      }
      *(undefined8 *)(uVar20 + 0x50) = 0;
      uVar10 = uVar20;
      FUN_10783bab4();
      uVar23 = uVar21;
      FUN_10783bab4();
      *(long *)(uVar21 + 0x48) = 0;
      *(undefined8 *)(uVar21 + 0x50) = 0;
      uVar24 = uVar20;
      if ((int)uVar10 != (int)uVar23) {
        uVar24 = *(ulong *)(uVar20 + 0x28);
      }
      func_0x00010783bacc(uVar24,uVar21,param_7);
      func_0x00010783bb50(uVar20);
      plVar8[6] = 0;
      plVar26[6] = 0;
      plVar9 = (long *)*param_8;
      while( true ) {
        if (plVar9 == (long *)param_8[1]) {
          return;
        }
        lVar13 = *plVar9;
        if ((lVar13 != 0) && (*(ulong *)(lVar13 + 0x30) == uVar21)) break;
        plVar9 = plVar9 + 1;
      }
      *(ulong *)(lVar13 + 0x30) = uVar20;
      *(undefined1 *)(lVar13 + 0x5a) = *(undefined1 *)((long)plVar8 + 0x5a);
      return;
    }
    func_0x0001078426a0();
  }
  func_0x0001078426a0();
LAB_10783a990:
  func_0x000107843298();
  uVar12 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x30) = *(undefined8 *)(unaff_x19 + 0x30);
  *(undefined8 *)(unaff_x19 + 0x30) = uVar12;
  return;
}



/* Entry: 10783b5b4; end: 10783b5db;  */

long FUN_10783b5b4(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
    lVar1 = (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8)) * 0x10 + -1;
  }
  return lVar1 - (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20));
}



/* Entry: 10783bab4; end: 10783bacb;  */

uint FUN_10783bab4(uint param_1)

{
  func_0x00010783be98();
  return param_1 & 1;
}



/* Entry: 10783bf28; end: 10783bfa3;  */

void FUN_10783bf28(long param_1)

{
  long lVar1;
  undefined1 in_CY;
  long *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *puVar2;
  
  func_0x000107843250();
  func_0x00010066015c();
  func_0x00010784314c();
  if ((bool)in_CY) {
    func_0x0001078429c8();
    lVar1 = *unaff_x19;
    puVar2 = (undefined8 *)unaff_x19[1];
    if (param_1 != 0) {
      func_0x00010783bff8();
    }
    *(undefined8 *)((long)puVar2 + (param_1 - lVar1)) = *unaff_x20;
    func_0x000100660238();
    func_0x00010783bfcc();
    func_0x000107842fe8();
  }
  else {
    puVar2 = unaff_x21 + 1;
    *unaff_x21 = *unaff_x20;
  }
  unaff_x19[1] = (long)puVar2;
  return;
}



/* Entry: 10783c4c4; end: 10783c53f;  */

void FUN_10783c4c4(void)

{
  ulong uVar1;
  undefined1 in_ZR;
  bool bVar2;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  long lVar3;
  undefined8 *puVar4;
  ulong *unaff_x19;
  undefined8 unaff_x20;
  
  func_0x000107843250();
  func_0x000107842588();
  puVar4 = extraout_x8;
  if ((bool)in_ZR) {
    uVar1 = *unaff_x19;
    bVar2 = unaff_x19[1] == uVar1;
    if (uVar1 < unaff_x19[1]) {
      func_0x0001078425c0();
      if (!bVar2) {
        func_0x000107842568();
      }
      func_0x000107842dfc();
      puVar4 = extraout_x8_00;
    }
    else {
      lVar3 = (long)((long)extraout_x8 - uVar1) >> 2;
      if ((long)extraout_x8 - uVar1 == 0) {
        lVar3 = 1;
      }
      func_0x00010783bff8(lVar3);
      func_0x00010784251c();
      func_0x00010783c540();
      func_0x00010784271c();
      func_0x00010783c020();
      puVar4 = (undefined8 *)unaff_x19[2];
    }
  }
  *puVar4 = unaff_x20;
  unaff_x19[2] = (ulong)(puVar4 + 1);
  return;
}



/* Entry: 10783cdd0; end: 10783ce4b;  */

uint FUN_10783cdd0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  
  func_0x00010783e7c4(&puStack_58);
  uVar2 = 0;
  for (puVar3 = puStack_58; puVar3 != puStack_50; puVar3 = puVar3 + 1) {
    uVar1 = param_1;
    func_0x00010783e8ac(param_1,*puVar3,param_2);
    uVar2 = (uint)uVar1 | uVar2;
  }
  func_0x000107842cec();
  return uVar2 & 1;
}



/* Entry: 10783dbcc; end: 10783e04b;  */

void FUN_10783dbcc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  bool bVar2;
  int iVar3;
  long *extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long lVar4;
  long unaff_x23;
  long lVar5;
  long lVar6;
  long unaff_x24;
  long lVar7;
  long *unaff_x25;
  long unaff_x26;
  long *plVar8;
  undefined8 unaff_x30;
  
  if (param_3 == 0) {
    return;
  }
  func_0x000107843308();
  func_0x0001078422cc();
  iVar3 = (int)param_1;
  if ((bool)in_ZR) {
    lVar7 = unaff_x21[-1];
    lVar4 = *unaff_x20;
    func_0x0001078428c8();
    func_0x00010783db64();
    if (iVar3 == 0) {
      *unaff_x19 = lVar4;
      lVar7 = unaff_x21[-1];
    }
    else {
      *unaff_x19 = lVar7;
      lVar7 = *unaff_x20;
    }
    unaff_x19[1] = lVar7;
  }
  else if (unaff_x23 == 1) {
    func_0x0001078426c8();
  }
  else if (unaff_x23 < 9) {
    uVar1 = unaff_x20 == unaff_x21;
    if (!(bool)uVar1) {
      lVar7 = 0;
      func_0x0001078426c8();
      while (func_0x000107842b14(), !(bool)uVar1) {
        lVar4 = *unaff_x20;
        lVar5 = *extraout_x8;
        func_0x0001078428c8();
        func_0x00010783db64();
        if ((int)param_1 == 0) {
          extraout_x8[1] = lVar4;
        }
        else {
          extraout_x8[1] = lVar5;
          for (lVar4 = lVar7; lVar5 = *unaff_x20, plVar8 = unaff_x19, lVar4 != 0; lVar4 = lVar4 + -8
              ) {
            lVar6 = ((long *)((long)unaff_x19 + lVar4))[-1];
            func_0x0001078428c8();
            func_0x00010783db64();
            plVar8 = (long *)((long)unaff_x19 + lVar4);
            if ((int)param_1 == 0) break;
            *(long *)((long)unaff_x19 + lVar4) = lVar6;
          }
          *plVar8 = lVar5;
        }
        lVar7 = lVar7 + 8;
      }
    }
  }
  else {
    func_0x0001078421ec();
    func_0x00010783d9c8();
    func_0x0001078422b4();
    func_0x00010783d9c8();
    func_0x000107843194();
    while (unaff_x20 != unaff_x22) {
      if (unaff_x25 == unaff_x21) goto LAB_10783dd14;
      func_0x00010784312c();
      func_0x00010783db64();
      bVar2 = (int)param_1 == 0;
      lVar7 = unaff_x26;
      if (bVar2) {
        lVar7 = 0;
      }
      unaff_x25 = (long *)((long)unaff_x25 + lVar7);
      lVar7 = 0;
      if (bVar2) {
        lVar7 = unaff_x26;
      }
      unaff_x20 = (long *)((long)unaff_x20 + lVar7);
      lVar7 = unaff_x23;
      if (bVar2) {
        lVar7 = unaff_x24;
      }
      *unaff_x19 = lVar7;
      unaff_x19 = unaff_x19 + 1;
    }
    while (unaff_x25 != unaff_x21) {
      func_0x000107843174();
    }
  }
LAB_10783dd1c:
  func_0x000107842d04(unaff_x30);
  return;
LAB_10783dd14:
  while (unaff_x20 != unaff_x22) {
    func_0x000107842b08();
  }
  goto LAB_10783dd1c;
}



/* Entry: 10783e3a4; end: 10783e74f;  */

void FUN_10783e3a4(undefined8 *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  long *plVar10;
  bool bVar11;
  long *plVar12;
  long *plVar13;
  int iVar14;
  long *plVar15;
  long *plVar16;
  
  lVar5 = *param_2;
  lVar6 = *param_3;
  bVar11 = true;
  iVar7 = (int)param_2[1];
  iVar8 = *(int *)((long)param_2 + 0xc);
  plVar9 = param_2;
  plVar10 = param_3;
  iVar14 = iVar7;
  iVar3 = iVar8;
LAB_10783e3c4:
  do {
    plVar15 = (long *)plVar9[3];
    if ((plVar9 != plVar10 && (int)plVar15[1] == iVar14) && *(int *)((long)plVar15 + 0xc) == iVar3)
    {
      plVar9 = plVar15;
      if (plVar15 != param_2) goto LAB_10783e3c4;
    }
    if (plVar9 == plVar10) {
LAB_10783e454:
      plVar9 = (long *)plVar9[3];
      plVar10 = (long *)plVar10[2];
      break;
    }
    plVar15 = plVar10 + 1;
    piVar2 = (int *)((long)plVar10 + 0xc);
    do {
      plVar16 = (long *)plVar10[2];
      if ((plVar9 == plVar10 || (int)plVar16[1] != (int)*plVar15) ||
          *(int *)((long)plVar16 + 0xc) != *piVar2) break;
      plVar10 = plVar16;
    } while (plVar16 != param_3);
    if ((!bVar11) && (plVar9 == param_2 || plVar10 == param_3)) break;
    if (plVar9 == plVar10) goto LAB_10783e454;
    bVar11 = false;
    plVar9 = (long *)plVar9[3];
    plVar10 = (long *)plVar10[2];
    iVar14 = (int)plVar9[1];
    iVar3 = *(int *)((long)plVar9 + 0xc);
  } while (iVar14 == (int)plVar10[1] && iVar3 == *(int *)((long)plVar10 + 0xc));
  plVar15 = (long *)plVar9[2];
  do {
    plVar16 = (long *)plVar9[2];
    if (lVar5 == lVar6) break;
    plVar12 = (long *)plVar15[2];
    plVar4 = plVar15 + 1;
    piVar2 = (int *)((long)plVar15 + 0xc);
    bVar11 = plVar15 != param_2;
    plVar16 = plVar15;
    plVar15 = plVar12;
  } while (((int)*plVar4 == (int)plVar12[1] && *piVar2 == *(int *)((long)plVar12 + 0xc)) && bVar11);
  plVar9 = (long *)plVar10[3];
  do {
    plVar15 = (long *)plVar10[3];
    if (lVar5 == lVar6) break;
    plVar12 = (long *)plVar9[3];
    plVar4 = plVar9 + 1;
    piVar2 = (int *)((long)plVar9 + 0xc);
    bVar11 = plVar9 != param_3;
    plVar15 = plVar9;
    plVar9 = plVar12;
  } while (((int)*plVar4 == (int)plVar12[1] && *piVar2 == *(int *)((long)plVar12 + 0xc)) && bVar11);
  bVar11 = true;
  plVar9 = param_2;
  plVar10 = param_3;
  iVar14 = (int)param_3[1];
  iVar3 = *(int *)((long)param_3 + 0xc);
LAB_10783e4dc:
  do {
    plVar4 = (long *)plVar10[3];
    if ((plVar10 != plVar9 && (int)plVar4[1] == iVar14) && *(int *)((long)plVar4 + 0xc) == iVar3) {
      plVar10 = plVar4;
      if (plVar4 != param_3) goto LAB_10783e4dc;
    }
    if (plVar10 == plVar9) {
LAB_10783e584:
      plVar10 = (long *)plVar10[3];
      plVar9 = (long *)plVar9[2];
      break;
    }
    do {
      plVar4 = (long *)plVar9[2];
      if ((plVar10 == plVar9 || (int)plVar4[1] != iVar7) || *(int *)((long)plVar4 + 0xc) != iVar8)
      break;
      plVar9 = plVar4;
    } while (plVar4 != param_2);
    if (bVar11) {
      if (plVar10 == plVar9) goto LAB_10783e584;
    }
    else {
      if (plVar10 == param_3 || plVar9 == param_2) break;
      if ((plVar10 == plVar9 || plVar10 == plVar15) || plVar9 == plVar16) goto LAB_10783e584;
    }
    bVar11 = false;
    plVar10 = (long *)plVar10[3];
    plVar9 = (long *)plVar9[2];
    iVar7 = (int)plVar10[1];
    iVar8 = *(int *)((long)plVar10 + 0xc);
    iVar14 = iVar7;
    iVar3 = iVar8;
  } while (iVar7 == (int)plVar9[1] && iVar8 == *(int *)((long)plVar9 + 0xc));
  plVar4 = (long *)plVar10[2];
  do {
    plVar12 = (long *)plVar10[2];
    if (lVar5 == lVar6) break;
    plVar13 = (long *)plVar4[2];
    plVar1 = plVar4 + 1;
    piVar2 = (int *)((long)plVar4 + 0xc);
    bVar11 = plVar4 != param_3;
    plVar12 = plVar4;
    plVar4 = plVar13;
  } while (((int)*plVar1 == (int)plVar13[1] && *piVar2 == *(int *)((long)plVar13 + 0xc)) && bVar11);
  plVar10 = (long *)plVar9[3];
  do {
    plVar4 = (long *)plVar9[3];
    if (lVar5 == lVar6) break;
    plVar13 = (long *)plVar10[3];
    plVar1 = plVar10 + 1;
    piVar2 = (int *)((long)plVar10 + 0xc);
    bVar11 = plVar10 != param_2;
    plVar4 = plVar10;
    plVar10 = plVar13;
  } while (((int)*plVar1 == (int)plVar13[1] && *piVar2 == *(int *)((long)plVar13 + 0xc)) && bVar11);
  *param_1 = plVar16;
  param_1[1] = plVar4;
  param_1[2] = plVar12;
  param_1[3] = plVar15;
  return;
}



/* Entry: 10783ee50; end: 10783efa3;  */

/* WARNING: Possible PIC construction at 0x00010783f220: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010783f234: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010783f224) */
/* WARNING: Removing unreachable block (ram,0x00010783f22c) */
/* WARNING: Removing unreachable block (ram,0x00010783f238) */

void FUN_10783ee50(undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  char cVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x9;
  undefined8 *extraout_x10;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long lVar12;
  undefined8 *unaff_x23;
  undefined8 *puVar13;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined *unaff_x30;
  undefined8 *in_stack_00000010;
  undefined8 *in_stack_00000070;
  undefined *in_stack_00000078;
  
  func_0x0001078430f4();
  cVar4 = SBORROW8(param_3,2);
  cVar5 = (long)(param_3 - 2) < 0;
  bVar6 = param_3 == 2;
  if (param_3 < 2) {
    return;
  }
  if (bVar6) {
    uVar9 = param_2[-1];
    func_0x00010783efdc(uVar9,param_1);
    if ((int)uVar9 == 0) {
      return;
    }
    func_0x000107842618();
    return;
  }
  puVar11 = param_1;
  func_0x000107842b4c();
  if (!bVar6 && cVar5 == cVar4) {
    func_0x000107842190();
    if (bVar6 || cVar5 != cVar4) {
      func_0x00010783f02c();
      func_0x0001078422fc();
      func_0x00010783f02c();
      puVar11 = unaff_x21 + (long)unaff_x23;
      func_0x000107842c9c();
      while( true ) {
        if (unaff_x21 == unaff_x22) {
          while (unaff_x23 != puVar11) {
            func_0x000107842b88();
          }
          return;
        }
        if (unaff_x23 == puVar11) break;
        uVar9 = *unaff_x23;
        func_0x00010783efdc(uVar9,unaff_x21);
        bVar6 = (int)uVar9 == 0;
        puVar13 = unaff_x23;
        if (bVar6) {
          puVar13 = unaff_x21;
        }
        puVar1 = (undefined8 *)0x0;
        if (bVar6) {
          puVar1 = unaff_x24;
        }
        unaff_x21 = (undefined8 *)((long)unaff_x21 + (long)puVar1);
        puVar1 = unaff_x24;
        if (bVar6) {
          puVar1 = (undefined8 *)0x0;
        }
        unaff_x23 = (undefined8 *)((long)unaff_x23 + (long)puVar1);
        func_0x000107842b70(puVar13);
      }
      while (unaff_x21 != unaff_x22) {
        func_0x000107842b20();
      }
      return;
    }
    FUN_10783ee50();
    func_0x000107842314();
    FUN_10783ee50();
    func_0x00010784220c();
    func_0x000107842f84();
    while( true ) {
      func_0x0001078427d4();
      in_stack_00000070 = unaff_x29;
      in_stack_00000078 = unaff_x30;
      func_0x0001078424cc();
      func_0x00010784292c();
      if (unaff_x23 == (undefined8 *)0x0) {
        return;
      }
      if ((long)unaff_x24 <= (long)unaff_x22 || (long)unaff_x25 <= (long)unaff_x22) break;
      while( true ) {
        if (unaff_x25 == (undefined8 *)0x0) {
          return;
        }
        puVar11 = (undefined8 *)*unaff_x21;
        func_0x000107843070();
        if (((ulong)puVar11 & 1) != 0) break;
        param_2 = param_2 + 1;
        unaff_x25 = (undefined8 *)((long)unaff_x25 + -1);
      }
      cVar4 = SBORROW8((long)unaff_x25,(long)unaff_x24);
      cVar5 = (long)unaff_x25 - (long)unaff_x24 < 0;
      uVar7 = unaff_x25 == unaff_x24;
      if ((long)unaff_x25 < (long)unaff_x24) {
        func_0x0001078424ac();
        while (unaff_x23 != (undefined8 *)0x0) {
          func_0x000107842840();
          func_0x00010783efdc();
          func_0x0001078426d4();
          unaff_x23 = unaff_x27;
          if ((bool)uVar7) {
            unaff_x23 = extraout_x9;
          }
        }
        func_0x000107842d4c();
      }
      else {
        cVar4 = SBORROW8((long)unaff_x25,1);
        cVar5 = (long)unaff_x25 + -1 < 0;
        uVar7 = unaff_x25 == (undefined8 *)0x1;
        if ((bool)uVar7) {
          func_0x00010784296c();
          return;
        }
        func_0x00010784245c();
        puVar13 = unaff_x22;
        while (unaff_x22 = puVar13, unaff_x27 != (undefined8 *)0x0) {
          func_0x00010784282c();
          func_0x00010783efdc();
          func_0x000107842818();
          puVar13 = unaff_x28;
          if ((bool)uVar7) {
            puVar13 = unaff_x22;
          }
        }
        func_0x000107842e2c();
      }
      func_0x000107842444();
      func_0x000107842874();
      unaff_x29 = &stack0x00000070;
      if (cVar5 == cVar4) {
        func_0x0001078424fc();
        unaff_x30 = &UNK_10783f238;
      }
      else {
        func_0x00010784241c();
        unaff_x30 = &UNK_10783f224;
      }
    }
    if ((long)unaff_x24 < (long)unaff_x25) {
      lVar12 = 0;
      while ((undefined8 *)((long)unaff_x21 + lVar12) != in_stack_00000010) {
        func_0x0001078429ec();
        lVar12 = extraout_x8;
        in_stack_00000010 = extraout_x10;
      }
      puVar13 = (undefined8 *)((long)unaff_x26 + lVar12);
      while( true ) {
        in_stack_00000010 = in_stack_00000010 + -1;
        if (puVar13 == unaff_x26) {
          return;
        }
        if (unaff_x21 == param_2) break;
        func_0x0001078427f0();
        func_0x00010783efdc();
        puVar1 = puVar13;
        puVar3 = unaff_x22;
        puVar2 = unaff_x21;
        if ((int)puVar11 == 0) {
          puVar1 = unaff_x24;
          puVar3 = unaff_x21;
          puVar2 = puVar13;
        }
        unaff_x21 = puVar3;
        *in_stack_00000010 = puVar2[-1];
        puVar13 = puVar1;
      }
      while (puVar13 != unaff_x26) {
        func_0x000107843278();
      }
      return;
    }
    func_0x000107842e4c();
    puVar11 = extraout_x8_00;
    while (puVar11 != unaff_x21) {
      func_0x000107842e3c();
      puVar11 = extraout_x8_01;
    }
    while( true ) {
      bVar6 = unaff_x22 == unaff_x26;
      if (bVar6) {
        return;
      }
      func_0x0001078431fc();
      if (bVar6) break;
      iVar8 = (int)*unaff_x21;
      func_0x00010783efdc();
      puVar11 = unaff_x21;
      if (iVar8 == 0) {
        puVar11 = unaff_x26;
      }
      lVar12 = 8;
      if (iVar8 == 0) {
        lVar12 = 0;
      }
      unaff_x21 = (undefined8 *)((long)unaff_x21 + lVar12);
      func_0x000107842d3c(puVar11);
    }
    func_0x000107842604();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memmove_11034c660)();
    return;
  }
  if (param_1 == param_2) {
    return;
  }
  lVar12 = 0;
  puVar11 = param_1;
  do {
    puVar13 = puVar11 + 1;
    if (puVar13 == param_2) {
      return;
    }
    uVar10 = puVar11[1];
    func_0x00010783efdc();
    if ((int)uVar10 != 0) {
      uVar9 = *puVar13;
      do {
        func_0x000107842d7c();
        puVar11 = param_1;
        if (lVar12 == 0) goto LAB_10783eef4;
        func_0x000107842dcc();
        func_0x00010783efdc();
      } while ((uVar10 & 1) != 0);
      puVar11 = (undefined8 *)((long)param_1 + lVar12 + 8);
LAB_10783eef4:
      *puVar11 = uVar9;
    }
    lVar12 = lVar12 + 8;
    puVar11 = puVar13;
  } while( true );
}



/* Entry: 10783f5d8; end: 10783f7c3;  */

void FUN_10783f5d8(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined1 in_ZR;
  char cVar4;
  char cVar5;
  undefined1 uVar6;
  long lVar7;
  long extraout_x8;
  long *plVar8;
  long *extraout_x9;
  long *plVar9;
  long *extraout_x10;
  long extraout_x11;
  long extraout_x12;
  long lVar10;
  long lVar11;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  
  if (param_3 == 0) {
    return;
  }
  func_0x0001078422cc();
  if (!(bool)in_ZR) {
    if (unaff_x23 == 1) {
      func_0x0001078426c8();
      return;
    }
    if (8 < unaff_x23) {
      func_0x0001078421ec();
      func_0x00010783f400();
      func_0x0001078422b4();
      func_0x00010783f400();
      plVar8 = unaff_x22;
      while( true ) {
        if (unaff_x20 == unaff_x22) {
          for (; plVar8 != unaff_x21; plVar8 = plVar8 + 1) {
            *unaff_x19 = *plVar8;
            unaff_x19 = unaff_x19 + 1;
          }
          return;
        }
        if (plVar8 == unaff_x21) break;
        iVar2 = *(int *)(*plVar8 + 0xc);
        iVar3 = *(int *)(*unaff_x20 + 0xc);
        if (iVar2 == iVar3) {
          bVar1 = *(int *)(*plVar8 + 8) < *(int *)(*unaff_x20 + 8);
        }
        else {
          bVar1 = iVar3 < iVar2;
        }
        plVar9 = plVar8;
        if (!bVar1) {
          plVar9 = unaff_x20;
        }
        lVar7 = 8;
        if (!bVar1) {
          lVar7 = 0;
        }
        plVar8 = (long *)((long)plVar8 + lVar7);
        lVar7 = 0;
        if (!bVar1) {
          lVar7 = 8;
        }
        unaff_x20 = (long *)((long)unaff_x20 + lVar7);
        *unaff_x19 = *plVar9;
        unaff_x19 = unaff_x19 + 1;
      }
      while (unaff_x20 != unaff_x22) {
        func_0x000107842b08();
      }
      return;
    }
    cVar4 = SBORROW8((long)unaff_x20,(long)unaff_x21);
    cVar5 = (long)unaff_x20 - (long)unaff_x21 < 0;
    if (unaff_x20 == unaff_x21) {
      return;
    }
    lVar7 = 0;
    *unaff_x19 = *unaff_x20;
    uVar6 = 0;
    do {
      func_0x000107842b14(lVar7);
      if ((bool)uVar6) {
        return;
      }
      func_0x000107842d1c();
      if ((bool)uVar6) {
        iVar2 = *(int *)(extraout_x11 + 8);
        iVar3 = *(int *)(extraout_x12 + 8);
        cVar4 = SBORROW4(iVar2,iVar3);
        cVar5 = iVar2 - iVar3 < 0;
        uVar6 = iVar2 == iVar3;
        if (iVar3 <= iVar2) goto LAB_10783f688;
LAB_10783f694:
        *extraout_x10 = extraout_x12;
        plVar8 = extraout_x9;
        for (lVar7 = extraout_x8; lVar10 = *unaff_x20, plVar9 = unaff_x19, lVar7 != 0;
            lVar7 = lVar7 + -8) {
          lVar11 = *(long *)((long)unaff_x19 + lVar7 + -8);
          iVar2 = *(int *)(lVar10 + 0xc);
          iVar3 = *(int *)(lVar11 + 0xc);
          cVar4 = SBORROW4(iVar2,iVar3);
          cVar5 = iVar2 - iVar3 < 0;
          uVar6 = iVar2 == iVar3;
          if ((bool)uVar6) {
            iVar2 = *(int *)(lVar10 + 8);
            iVar3 = *(int *)(lVar11 + 8);
            cVar4 = SBORROW4(iVar2,iVar3);
            cVar5 = iVar2 - iVar3 < 0;
            uVar6 = iVar2 == iVar3;
            if (iVar3 <= iVar2) {
              plVar9 = (long *)((long)unaff_x19 + lVar7);
              break;
            }
          }
          else {
            plVar9 = plVar8;
            if (iVar2 <= iVar3) break;
          }
          plVar8 = plVar8 + -1;
          *(long *)((long)unaff_x19 + lVar7) = lVar11;
        }
        *plVar9 = lVar10;
      }
      else {
        if (!(bool)uVar6 && cVar5 == cVar4) goto LAB_10783f694;
LAB_10783f688:
        *extraout_x10 = extraout_x11;
      }
      lVar7 = extraout_x8 + 8;
    } while( true );
  }
  lVar7 = unaff_x21[-1];
  lVar10 = *unaff_x20;
  if (*(int *)(lVar7 + 0xc) == *(int *)(lVar10 + 0xc)) {
    if (*(int *)(lVar7 + 8) < *(int *)(lVar10 + 8)) {
LAB_10783f704:
      *unaff_x19 = lVar7;
      lVar7 = *unaff_x20;
      goto LAB_10783f70c;
    }
  }
  else if (*(int *)(lVar10 + 0xc) < *(int *)(lVar7 + 0xc)) goto LAB_10783f704;
  *unaff_x19 = lVar10;
  lVar7 = unaff_x21[-1];
LAB_10783f70c:
  unaff_x19[1] = lVar7;
  return;
}



/* Entry: 10783fd3c; end: 10783ffef;  */

bool FUN_10783fd3c(double param_1,long param_2,long param_3)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  int iVar9;
  long unaff_x19;
  long lVar10;
  ulong unaff_x20;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  double dVar16;
  
  if ((((*(int *)(param_2 + 0x20) <= *(int *)(param_3 + 0x20)) &&
       (func_0x0001078425f8(), *(int *)(param_2 + 0x24) <= *(int *)(param_3 + 0x24))) &&
      (*(int *)(unaff_x19 + 0x18) <= *(int *)(unaff_x20 + 0x18))) &&
     (*(int *)(unaff_x19 + 0x1c) <= *(int *)(unaff_x20 + 0x1c))) {
    func_0x00010783e790();
    dVar16 = ABS(param_1);
    uVar8 = unaff_x20;
    func_0x00010783e790();
    param_1 = ABS(param_1);
    if (param_1 <= dVar16) {
      lVar11 = *(long *)(*(long *)(unaff_x20 + 0x48) + 0x10);
      lVar10 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x10);
      lVar12 = lVar11;
LAB_10783fe00:
      iVar2 = *(int *)(lVar12 + 8);
      iVar3 = *(int *)(lVar12 + 0xc);
      uVar7 = 1;
      lVar13 = lVar10;
      do {
        lVar14 = *(long *)(lVar13 + 0x10);
        iVar4 = *(int *)(lVar14 + 0xc);
        uVar6 = uVar7;
        if (iVar4 == iVar3) {
          if (*(int *)(lVar14 + 8) == iVar2) goto LAB_10783ff00;
          iVar15 = *(int *)(lVar13 + 0xc);
          if (iVar15 != iVar3) goto LAB_10783fe5c;
          if (iVar2 < *(int *)(lVar14 + 8) != iVar2 <= *(int *)(lVar13 + 8)) goto LAB_10783ff00;
        }
        else {
          iVar15 = *(int *)(lVar13 + 0xc);
LAB_10783fe5c:
          if (iVar3 <= iVar4 == iVar15 < iVar3) {
            iVar5 = *(int *)(lVar14 + 8);
            if (*(int *)(lVar13 + 8) < iVar2) {
              iVar9 = iVar5 - iVar2;
              if (iVar9 != 0 && iVar2 <= iVar5) {
LAB_10783fea8:
                dVar16 = -((double)(iVar15 - iVar3) * (double)iVar9) +
                         (double)(iVar4 - iVar3) * (double)(*(int *)(lVar13 + 8) - iVar2);
                param_1 = dVar16;
                func_0x000107835a34();
                if ((uVar8 & 1) != 0) goto LAB_10783ff00;
                uVar6 = (uint)(uVar7 != 1);
                if (iVar4 <= iVar15 == 0.0 < dVar16) {
                  uVar6 = uVar7;
                }
              }
            }
            else {
              iVar9 = iVar5 - iVar2;
              if (iVar9 == 0 || iVar5 < iVar2) goto LAB_10783fea8;
              uVar6 = (uint)(uVar7 != 1);
            }
          }
        }
        uVar7 = uVar6;
        lVar13 = lVar14;
        if (lVar10 == lVar14) goto LAB_10783ffcc;
      } while( true );
    }
  }
  return false;
LAB_10783ff00:
  lVar12 = *(long *)(lVar12 + 0x10);
  lVar13 = lVar11;
  if (lVar12 == lVar11) goto LAB_10783ff14;
  goto LAB_10783fe00;
LAB_10783ff14:
  do {
    iVar2 = (*(int *)(*(long *)(lVar13 + 0x10) + 8) - *(int *)(lVar13 + 8)) *
            (*(int *)(*(long *)(lVar13 + 0x18) + 0xc) - *(int *)(lVar13 + 0xc)) +
            (*(int *)(*(long *)(lVar13 + 0x10) + 0xc) - *(int *)(lVar13 + 0xc)) *
            (*(int *)(lVar13 + 8) - *(int *)(*(long *)(lVar13 + 0x18) + 8));
    if (iVar2 < 0) {
      func_0x000107842ad4();
      if (0.0 < param_1) goto LAB_10783ff60;
    }
    else if ((iVar2 != 0) && (func_0x000107842ad4(), param_1 < 0.0)) {
LAB_10783ff60:
      param_1 = (double)(*(int *)(lVar13 + 0xc) + *(int *)(*(long *)(lVar13 + 0x18) + 0xc) +
                        *(int *)(*(long *)(lVar13 + 0x10) + 0xc));
      func_0x000107842eb8();
      lVar12 = lVar11;
      func_0x000107840078();
      if ((int)lVar12 == 0) {
        func_0x000107842eb8();
        func_0x000107840078(lVar10);
        uVar7 = (uint)lVar10;
        goto LAB_10783ffcc;
      }
    }
    plVar1 = (long *)(lVar13 + 0x10);
    lVar13 = *plVar1;
  } while (*plVar1 != lVar11);
  func_0x000107842698();
  __ZNSt13runtime_errorC1EPKc();
  func_0x0001078422a0();
  func_0x000107843090();
LAB_10783ffcc:
  return uVar7 == 0;
}



/* Entry: 107840660; end: 107840673;  */

void FUN_107840660(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107840d08; end: 107840da7;  */

void FUN_107840d08(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *unaff_x19;
  ulong unaff_x20;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  func_0x00010066015c();
  puVar2 = param_1 + 1;
  puVar1 = (undefined8 *)*puVar2;
  do {
    puVar3 = puVar2;
    if (puVar1 == (undefined8 *)0x0) {
LAB_107840d64:
      func_0x000107842ca8();
      param_1[4] = unaff_x20;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = puVar2;
      *puVar3 = param_1;
      if (*(long *)*unaff_x19 != 0) {
        *unaff_x19 = *(long *)*unaff_x19;
      }
      func_0x00010002c5b0(unaff_x19[1],param_1);
      unaff_x19[2] = unaff_x19[2] + 1;
      return;
    }
    while (puVar2 = puVar1, (ulong)puVar2[4] <= unaff_x20) {
      if (unaff_x20 <= (ulong)puVar2[4]) {
        return;
      }
      puVar1 = (undefined8 *)puVar2[1];
      if ((undefined8 *)puVar2[1] == (undefined8 *)0x0) {
        puVar3 = puVar2 + 1;
        goto LAB_107840d64;
      }
    }
    puVar1 = (undefined8 *)*puVar2;
  } while( true );
}



/* Entry: 107841530; end: 1078415cb;  */

void FUN_107841530(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  if (param_1[2] != 0) {
    plVar1 = (long *)param_1[1];
    plVar2 = *(long **)(*param_1 + 8);
    lVar3 = *plVar1;
    *(long **)(lVar3 + 8) = plVar2;
    *plVar2 = lVar3;
    param_1[2] = 0;
    while (plVar1 != param_1) {
      plVar1 = (long *)plVar1[1];
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 107841abc; end: 107841adf;  */

void FUN_107841abc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 107841c6c; end: 107841c93;  */

void FUN_107841c6c(void)

{
  func_0x0001078425f8();
  func_0x000107842a90();
  func_0x000107841d1c();
  func_0x00010784214c();
  return;
}



/* Entry: 107841ec0; end: 107841f1b;  */

undefined8 FUN_107841ec0(void)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined8 uStack_48;
  
  func_0x000107842394();
  func_0x00010737ccb4();
  func_0x0001078423f4();
  func_0x00010737ca74();
  func_0x000107297530(uStack_48);
  func_0x0001078424ec();
  func_0x000100660238();
  func_0x00010737c9f4();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  func_0x000107842770();
  return uVar1;
}



/* Entry: 10784214c; end: 10784331f;  */

void FUN_10784214c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  
  unaff_x19[1] = unaff_x21;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 107845170; end: 107845217;  */

void FUN_107845170(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 200) = param_2;
  func_0x000107476efc(param_1 + 0x228,param_3);
  *(undefined8 *)(param_1 + 0x90) = param_4;
  if (*(int *)(param_1 + 0xc0) - 1U < 3) {
    func_0x0001078481c0();
  }
  else if (*(int *)(param_1 + 0xc0) == 0) {
    func_0x000107847ed8();
    func_0x000107847e4c();
  }
  return;
}



/* Entry: 1078467d4; end: 107846bb7;  */

void FUN_1078467d4(long param_1,undefined8 *param_2,undefined1 param_3)

{
  ushort uVar1;
  undefined8 **ppuVar2;
  long ***ppplVar3;
  long ***ppplVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  long alStack_e8 [2];
  long **pplStack_d8;
  long *plStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_c0;
  long lStack_b8;
  long **pplStack_b0;
  undefined8 uStack_a8;
  long **pplStack_a0;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  
  uStack_f8 = 0;
  lStack_f0 = 0;
  puVar12 = (undefined8 *)*param_2;
  plVar14 = (long *)(param_1 + 0x1a0);
  puStack_100 = &uStack_f8;
  while (puVar12 != param_2 + 1) {
    ppuVar2 = &puStack_88;
    func_0x00010786e8ec(ppuVar2,puVar12 + 4);
    plVar6 = plVar14;
    plVar7 = plVar14;
    while (plVar8 = (long *)*plVar6, plVar8 != (long *)0x0) {
      lVar5 = 8;
      if (ppuVar2 <= (undefined8 **)plVar8[4]) {
        lVar5 = 0;
      }
      plVar6 = (long *)((long)plVar8 + lVar5);
      if (ppuVar2 <= (undefined8 **)plVar8[4]) {
        plVar7 = plVar8;
      }
    }
    if ((plVar14 == plVar7) || (ppuVar2 < (undefined8 **)plVar7[4])) {
      plVar7 = plVar14;
    }
    puVar13 = (undefined8 *)puVar12[6];
    plVar6 = plVar7 + 6;
    while (puVar13 != puVar12 + 7) {
      uVar1 = *(ushort *)((long)puVar13 + 0x1a);
      puStack_88 = (undefined8 *)CONCAT62(puStack_88._2_6_,uVar1);
      plVar10 = plVar6;
      plVar8 = plVar6;
      if (plVar14 == plVar7) {
LAB_1078468d0:
        func_0x00010740516c(param_1 + 0x130,puVar12 + 4);
        func_0x00010740519c();
        func_0x00010740516c(&puStack_100,puVar12 + 4);
        func_0x00010740519c();
      }
      else {
        while (plVar11 = (long *)*plVar8, plVar11 != (long *)0x0) {
          lVar5 = 8;
          if (uVar1 <= *(ushort *)(plVar11 + 4)) {
            lVar5 = 0;
          }
          plVar8 = (long *)((long)plVar11 + lVar5);
          if (uVar1 <= *(ushort *)(plVar11 + 4)) {
            plVar10 = plVar11;
          }
        }
        if ((plVar6 == plVar10) || (uVar1 < *(ushort *)(plVar10 + 4))) goto LAB_1078468d0;
      }
      func_0x00010002c7d4();
    }
    func_0x00010002c7d4();
  }
  if (lStack_f0 != 0) {
    puVar12 = (undefined8 *)(param_1 + 0x20);
    func_0x00010724bb70(alStack_e8);
    if (alStack_e8[0] != 0) {
      uVar9 = *(undefined8 *)(param_1 + 0x18);
      plStack_d0 = (long *)0x0;
      uStack_c8 = 0;
      pplStack_d8 = &plStack_d0;
      puVar13 = puStack_100;
      while (puVar13 != &uStack_f8) {
        ppplVar3 = (long ***)&plStack_d0;
        if (&plStack_d0 == pplStack_d8) {
LAB_107846990:
          ppplVar4 = (long ***)&plStack_d0;
          pplStack_a0 = &plStack_d0;
          if ((long **)plStack_d0 != (long **)0x0) {
            pplStack_a0 = (long **)ppplVar3;
            ppplVar4 = ppplVar3 + 1;
            goto LAB_1078469b8;
          }
LAB_1078469cc:
          lVar5 = 0x48;
          __Znwm();
          uStack_a8 = 0;
          lStack_b8 = lVar5;
          pplStack_b0 = &plStack_d0;
          func_0x000107278b70(lVar5 + 0x20,puVar13 + 4);
          puVar15 = (undefined8 *)(lVar5 + 0x38);
          *puVar15 = 0;
          plVar14 = (long *)(lVar5 + 0x30);
          *plVar14 = (long)puVar15;
          *(undefined8 *)(lVar5 + 0x40) = 0;
          puVar12 = (undefined8 *)puVar13[6];
          while (puVar12 != puVar13 + 7) {
            plVar6 = plVar14;
            func_0x0001074055e0(plVar14,puVar15,&uStack_90,auStack_98,(long)puVar12 + 0x1a);
            if (*plVar6 == 0) {
              plVar7 = plVar6;
              func_0x0001078480f8();
              uStack_78 = 1;
              *(undefined2 *)((long)plVar7 + 0x1a) = *(undefined2 *)((long)puVar12 + 0x1a);
              puStack_80 = puVar15;
              func_0x0001074056e8(plVar14,uStack_90,plVar6,plVar7);
              puStack_88 = (undefined8 *)0x0;
              func_0x000107405810(&puStack_88);
            }
            func_0x00010002c7d4();
          }
          uStack_a8 = CONCAT71(uStack_a8._1_7_,1);
          func_0x000107405ab8(&pplStack_d8,pplStack_a0,ppplVar4,lStack_b8);
          lStack_b8 = 0;
          func_0x000107405c4c(&lStack_b8);
        }
        else {
          func_0x00010002c810();
          ppplVar4 = ppplVar3 + 4;
          func_0x000107405ae0(ppplVar4,puVar13 + 4);
          if ((int)ppplVar4 != 0) goto LAB_107846990;
          ppplVar4 = &pplStack_d8;
          func_0x0001074059ec(ppplVar4,&pplStack_a0,puVar13 + 4);
LAB_1078469b8:
          if (*ppplVar4 == (long **)0x0) goto LAB_1078469cc;
        }
        func_0x00010002c7d4();
        puVar12 = puVar13;
      }
      uStack_c0 = param_3;
      func_0x000107848130();
      func_0x00010784776c(&puStack_88,&pplStack_d8);
      *puVar12 = &PTR_DAT_1109e1608;
      puVar12[1] = uVar9;
      puVar12[2] = &UNK_10782ec4c;
      puVar12[3] = 0;
      func_0x00010784776c(puVar12 + 4,&puStack_88);
      func_0x000107810050(&puStack_88);
      puStack_88 = puVar12;
      func_0x000107810050(&pplStack_d8);
      func_0x0001073ae140(alStack_e8[0],&puStack_88);
      puVar12 = puStack_88;
      puStack_88 = (undefined8 *)0x0;
      if (puVar12 != (undefined8 *)0x0) {
        func_0x000107847c68();
      }
    }
    func_0x00010724bcd8(alStack_e8);
  }
  func_0x000107810050(&puStack_100);
  return;
}



/* Entry: 107846e98; end: 107846ed3;  */

void FUN_107846e98(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  
  pcVar3 = (char *)*param_1;
  lVar1 = param_1[1];
  for (lVar2 = param_1[2]; lVar2 != 0; lVar2 = lVar2 + -1) {
    if (-1 < *pcVar3) {
      func_0x0001073e081c(lVar1);
    }
    pcVar3 = pcVar3 + 1;
    lVar1 = lVar1 + 0x58;
  }
  return;
}



/* Entry: 107847048; end: 107847077;  */

void FUN_107847048(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_DAT_1109e1478;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 107847294; end: 107847357;  */

undefined8 * FUN_107847294(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  undefined8 uVar4;
  
  func_0x000107847e84();
  func_0x000107847c74();
  func_0x000107847dc4();
  func_0x000107847dec();
  func_0x000107848024();
  func_0x000107847ec4();
  func_0x0001072df7b4();
  func_0x0001072a0318();
  func_0x000107847f70();
  puVar2 = param_1;
  func_0x000107847f48();
  func_0x000107847c98();
  func_0x00010743fa44();
  func_0x000107847f80();
  func_0x000107847f30();
  func_0x000107847c84(extraout_x8);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107847f80();
  func_0x000107847f30();
  func_0x000107847d28();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar1 = param_1;
  puVar3 = puVar2;
  func_0x0001078481ac();
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  uVar4 = puVar3[3];
  puVar1[4] = puVar3[4];
  puVar1[3] = uVar4;
  puVar1[5] = puVar3[5];
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  uVar4 = puVar3[6];
  puVar1[7] = puVar3[7];
  puVar1[6] = uVar4;
  puVar1[8] = puVar3[8];
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  uVar4 = puVar3[9];
  puVar1[10] = puVar3[10];
  puVar1[9] = uVar4;
  puVar1[0xb] = puVar3[0xb];
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  func_0x0001072638b4(puVar1 + 0xc,puVar3 + 0xc);
  func_0x000107466dac(param_1 + 0x11,puVar2 + 0x11);
  func_0x000107466dac(param_1 + 0x14,puVar2 + 0x14);
  uVar4 = puVar2[0x17];
  param_1[0x18] = puVar2[0x18];
  param_1[0x17] = uVar4;
  return param_1;
}



/* Entry: 107847610; end: 107847613;  */

undefined8 * FUN_107847610(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e1588;
  func_0x0001073787dc(param_1 + 4);
  return param_1;
}



/* Entry: 1078477a8; end: 10784782b;  */

void FUN_1078477a8(long *param_1)

{
  long extraout_x8;
  code *extraout_x9;
  code *pcVar1;
  long *plVar2;
  ulong extraout_x11;
  long *plVar3;
  long *plStack_38;
  long lStack_30;
  long lStack_28;
  
  func_0x000107848198();
  pcVar1 = extraout_x9;
  if ((extraout_x11 & 1) != 0) {
    pcVar1 = *(code **)(*param_1 + ((ulong)extraout_x9 & 0xffffffff));
  }
  plVar2 = (long *)(extraout_x8 + 0x28);
  lStack_30 = *plVar2;
  plVar3 = *(long **)(extraout_x8 + 0x20);
  plStack_38 = &lStack_30;
  lStack_28 = *(long *)(extraout_x8 + 0x30);
  if (lStack_28 != 0) {
    *(long **)(lStack_30 + 0x10) = plStack_38;
    *(long **)(extraout_x8 + 0x20) = plVar2;
    *plVar2 = 0;
    *(undefined8 *)(extraout_x8 + 0x30) = 0;
    plStack_38 = plVar3;
  }
  (*pcVar1)();
  func_0x000107810050(&plStack_38);
  return;
}



/* Entry: 107847964; end: 107847967;  */

void FUN_107847964(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107847a2c; end: 107847a2f;  */

void FUN_107847a2c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e1728;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107847b40; end: 107847b47;  */

void FUN_107847b40(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x0001078474c4(*(long *)(param_1 + 0x18));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10784866c; end: 1078486b3;  */

undefined8 * FUN_10784866c(undefined8 *param_1)

{
  func_0x00010725b238(param_1 + 0x7a);
  func_0x00010750db08(param_1 + 0x78);
  func_0x0001078493c0(param_1 + 0x76);
  func_0x00010724b54c(param_1 + 0x74);
  func_0x000107849384(param_1 + 0x25);
  *param_1 = &PTR_DAT_1109e1d40;
  func_0x00010750bcd8(param_1 + 0x13);
  func_0x000104c2f714(param_1 + 4);
  return param_1;
}



/* Entry: 1078489f8; end: 107848a3f;  */

void FUN_1078489f8(undefined8 param_1)

{
  undefined1 auStack_30 [16];
  
  __ZNSt13runtime_errorC1EPKc(auStack_30,&UNK_10f42b2b5);
  func_0x0001052b2bd0(param_1,auStack_30);
  __ZNSt13runtime_errorD1Ev(auStack_30);
  return;
}



/* Entry: 107848cc4; end: 10784906f;  */

/* WARNING: Possible PIC construction at 0x000107848f30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107848f34) */
/* WARNING: Removing unreachable block (ram,0x000107848fd4) */
/* WARNING: Removing unreachable block (ram,0x000107848fe8) */
/* WARNING: Removing unreachable block (ram,0x000107848ffc) */
/* WARNING: Removing unreachable block (ram,0x00010784906c) */
/* WARNING: Removing unreachable block (ram,0x000107848fb4) */

undefined8 * FUN_107848cc4(undefined8 param_1,long param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long *unaff_x19;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_208 [24];
  long lStack_1f0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined4 uStack_1b0;
  undefined **ppuStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined4 uStack_188;
  undefined4 uStack_180;
  undefined1 uStack_17c;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [88];
  undefined8 uStack_e8;
  long lStack_e0;
  undefined1 auStack_d8 [16];
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long alStack_b0 [2];
  undefined1 auStack_a0 [64];
  
  lVar3 = param_2;
  func_0x0001078496c0();
  if ((*(char **)(lVar3 + 0x10) == (char *)0x0) || (**(char **)(lVar3 + 0x10) == '\x02')) {
    if (*(char *)(param_2 + 0x19) == '\x01') {
      lVar3 = *(long *)(param_2 + 0x40);
      *(undefined1 *)(unaff_x19 + 0x27) = *(undefined1 *)(param_2 + 0x48);
      unaff_x19[0x26] = lVar3;
      func_0x000107849710();
    }
    else {
      func_0x0001078496d4();
      func_0x000107849710();
      lVar3 = *unaff_x19;
      if (*(char *)(param_2 + 0x18) == '\x01') {
        lVar6 = 0;
        uVar5 = 0;
        uStack_e8 = 0;
        lStack_e0 = 0;
      }
      else {
        uVar5 = *(undefined8 *)(param_2 + 0x20);
        lVar6 = *(long *)(param_2 + 0x28);
        uStack_e8 = uVar5;
        lStack_e0 = lVar6;
        if (lVar6 != 0) {
          do {
            func_0x00010784969c();
          } while (extraout_w10 != 0);
        }
      }
      *(undefined1 *)(lVar3 + 0x89) = 1;
      *(long *)(lVar3 + 0x3b8) = *(long *)(lVar3 + 0x3b8) + 1;
      lStack_c8 = *(long *)(lVar3 + 0x3b0) + 0x20;
      puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0x3b0) + 0x10);
      uStack_b8 = puVar4[1];
      uStack_c0 = *puVar4;
      if (puVar4[1] != 0) {
        do {
          func_0x00010784969c();
        } while (extraout_w10_00 != 0);
      }
      func_0x00010724bb70(alStack_b0,&uStack_c0);
      lVar2 = lStack_c8;
      if (alStack_b0[0] != 0) {
        uStack_1c8 = uVar5;
        lStack_1c0 = lVar6;
        if (lVar6 != 0) {
          do {
            func_0x00010784969c();
          } while (extraout_w10_01 != 0);
        }
        uVar7 = *(undefined8 *)(lVar3 + 0x3b8);
        puVar4 = (undefined8 *)0x38;
        uStack_1b8 = uVar7;
        __Znwm();
        uStack_1c8 = 0;
        lStack_1c0 = 0;
        *puVar4 = &PTR_DAT_1109e1b18;
        puVar4[1] = lVar2;
        puVar4[2] = &UNK_107849814;
        puVar4[3] = 0;
        puVar4[4] = uVar5;
        puVar4[5] = lVar6;
        puStack_158 = (undefined8 *)0x0;
        uStack_150 = 0;
        puVar4[6] = uVar7;
        uStack_148 = uVar7;
        func_0x000104c33970(&puStack_158);
        puStack_158 = puVar4;
        func_0x000104c33970(&uStack_1c8);
        func_0x0001073ae140(alStack_b0[0],&puStack_158);
        puVar4 = puStack_158;
        puStack_158 = (undefined8 *)0x0;
        if (puVar4 != (undefined8 *)0x0) {
          func_0x000107849690();
        }
      }
      func_0x00010724bcd8(alStack_b0);
      func_0x00010724ae28(&uStack_c0);
      func_0x000104c33970(&uStack_e8);
    }
  }
  else {
    lVar3 = *unaff_x19;
    func_0x0001073070f0(&puStack_158);
    __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
              (auStack_d8,*(long *)(param_2 + 0x10) + 8);
    func_0x0001052b2bd0(&uStack_1c8);
    func_0x0001073787c0(auStack_140,&uStack_1c8);
    *(undefined1 *)(lVar3 + 0x8a) = 1;
    (**(code **)(**(long **)(lVar3 + 0x90) + 0x18))(*(long **)(lVar3 + 0x90),lVar3,&puStack_158);
    func_0x0001073787dc(&puStack_158);
    func_0x000107849760();
    __ZNSt13runtime_errorD1Ev(auStack_d8);
  }
  uStack_1c8 = CONCAT44(uStack_1c8._4_4_,0x2a);
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_190 = 0;
  ppuStack_1a8 = &PTR_DAT_110996720;
  uStack_1a0 = 0;
  uStack_188 = 0x2a;
  uStack_180 = 0;
  uStack_17c = 1;
  uStack_170 = 0;
  uStack_168 = 0;
  uStack_178 = 0;
  func_0x000104c2fe00(auStack_a0,unaff_x19 + 0x46);
  puVar4 = &uStack_1c8;
  func_0x000107371bc4(puVar4,"source",auStack_a0);
  cVar1 = *(char *)((long)unaff_x19 + 0xd4);
  lStack_1f0 = param_2;
  func_0x00010002b838(auStack_208,&DAT_10f34b835);
  func_0x0001072a0374(puVar4 + 4,auStack_208,(long)cVar1);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_208);
  *(undefined1 *)((long)puVar4 + 0x4c) = 1;
  return puVar4;
}



/* Entry: 1078492ec; end: 107849383;  */

undefined1 * FUN_1078492ec(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  undefined1 *unaff_x19;
  undefined1 auStack_60 [56];
  undefined8 uStack_28;
  
  puVar2 = auStack_60;
  func_0x0001078496c0();
  uStack_28 = extraout_x8;
  func_0x000104c2fe00(auStack_60);
  func_0x000107371bc4();
  func_0x000104c2f714();
  uVar1 = *(char *)(param_3 + 0x48) == '\x01';
  if ((bool)uVar1) {
    func_0x000107849070();
    puVar2 = unaff_x19;
  }
  func_0x0001078496ac(uStack_28);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x000107849708();
  func_0x000104c2f714(puVar2 + 0x230);
  func_0x0001072aca78(puVar2 + 0x218);
  func_0x00010724bd50(puVar2 + 0x208);
  func_0x00010724b374(puVar2 + 0x10);
  return puVar2;
}



/* Entry: 1078494b0; end: 1078494c3;  */

void FUN_1078494b0(void)

{
  func_0x0001078495a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078495f0; end: 10784961b;  */

undefined8 * FUN_1078495f0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e1b18;
  func_0x000104c33970(param_1 + 4);
  return param_1;
}



/* Entry: 1078497d4; end: 107849813;  */

undefined8 *
FUN_1078497d4(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  uVar1 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = uVar1;
  param_1[2] = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  param_1[3] = param_4;
  param_1[4] = param_5;
  func_0x000104c2fe00(param_1 + 5,param_6);
  return param_1;
}



/* Entry: 107849e24; end: 107849e37;  */

void FUN_107849e24(void)

{
  func_0x000107849e84();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10784a024; end: 10784a107;  */

undefined8 *
FUN_10784a024(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 *param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined1 in_ZR;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 extraout_x8;
  long lVar7;
  undefined8 uVar8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 auStack_a0 [7];
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar6 = param_6;
  func_0x00010784a844();
  uStack_48 = extraout_x8;
  FUN_10786ea9c(auStack_a0,puVar6);
  func_0x00010739d7bc(auStack_a0);
  func_0x000104c2fe00(auStack_a0,param_5);
  uStack_68 = *param_6;
  uStack_60 = *(undefined4 *)(param_6 + 1);
  uStack_58 = param_2;
  uStack_50 = param_3;
  func_0x00010784a5f8(&uStack_c0,auStack_a0,param_4);
  uVar4 = uStack_b8;
  uVar8 = uStack_c0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  param_1[1] = uVar4;
  *param_1 = uVar8;
  uStack_b0 = 0;
  uStack_a8 = 0;
  func_0x00010724b8b8(&uStack_b0);
  func_0x00010784a808(&uStack_c0);
  puVar5 = auStack_a0;
  func_0x000104c2f714();
  func_0x00010784a830(uStack_48);
  if ((bool)in_ZR) {
    return puVar5;
  }
  ___stack_chk_fail();
  puVar5 = auStack_a0;
  func_0x000104c2f714();
  func_0x00010784a854();
  *puVar5 = &PTR_DAT_1109e1c78;
  lVar7 = puVar6[1];
  uVar8 = *puVar6;
  puVar5[2] = puVar6[1];
  puVar5[1] = uVar8;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10784a588(puVar5 + 3);
  func_0x00010726ed14(puVar5 + 0xe);
  puVar5[0x10] = puVar5;
  return puVar5;
}



/* Entry: 10784a588; end: 10784a5f7;  */

void FUN_10784a588(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000104c2fe00();
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  uVar3 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  return;
}



/* Entry: 10784a768; end: 10784a777;  */

void FUN_10784a768(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010784a770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10784ab20; end: 10784ab23;  */

void FUN_10784ab20(void)

{
  return;
}



/* Entry: 10784aebc; end: 10784af17;  */

long * FUN_10784aebc(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_2;
  *param_2 = 0;
  lVar1 = *param_1;
  *param_1 = lVar2;
  if (lVar1 != 0) {
    func_0x00010784b210();
  }
  return param_1;
}



/* Entry: 10784b1cc; end: 10784b1e7;  */

void FUN_10784b1cc(long param_1,ulong param_2)

{
  if (param_2 >> 0x3b == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 5);
    return;
  }
  func_0x000104bd35f4();
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10784b510; end: 10784b517;  */

void FUN_10784b510(void)

{
  long unaff_x29;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (unaff_x29 + -0x28);
  return;
}



/* Entry: 10784b960; end: 10784b963;  */

undefined8 * FUN_10784b960(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e1e38;
  func_0x000107313fcc(param_1 + 0x10);
  func_0x0001074f9458(param_1 + 0xe);
  func_0x000104c2f714(param_1 + 3);
  return param_1;
}



/* Entry: 10784becc; end: 10784beeb;  */

void FUN_10784becc(void)

{
  undefined1 uStack_11;
  
  func_0x00010784beec(&uStack_11);
  return;
}



/* Entry: 10784c05c; end: 10784c05f;  */

void FUN_10784c05c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10784c230; end: 10784c257;  */

long FUN_10784c230(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  func_0x00010784c258();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10784c378; end: 10784c3f3;  */

long FUN_10784c378(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10784cc10; end: 10784cc67;  */

void FUN_10784cc10(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010784d970();
  func_0x000104c2f1f0();
  uVar2 = *(undefined8 *)(unaff_x19 + 0x50);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x19 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x40) = *(undefined8 *)(unaff_x19 + 0x40);
  *(undefined8 *)(unaff_x20 + 0x38) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x50) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x48) = uVar1;
  func_0x0001072f9968(unaff_x20 + 0x58,unaff_x19 + 0x58);
  func_0x000100639330(unaff_x20 + 0x148,unaff_x19 + 0x148);
  func_0x00010784d9d4();
  func_0x000107269df4(unaff_x20 + 0x178,unaff_x19 + 0x178);
  return;
}



/* Entry: 10784d758; end: 10784d7bf;  */

long * FUN_10784d758(void)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 extraout_x8;
  long *unaff_x19;
  ulong uVar2;
  ulong *puVar3;
  undefined1 auStack_1c8 [400];
  undefined8 uStack_38;
  
  func_0x00010784d970();
  func_0x00010784d84c();
  uStack_38 = extraout_x8;
  func_0x00010784d8c4(auStack_1c8);
  FUN_10784cc10();
  FUN_10784cc10();
  func_0x00010784d9b0();
  func_0x00010784d810(uStack_38);
  if ((bool)in_ZR) {
    return unaff_x19;
  }
  ___stack_chk_fail();
  lVar1 = *unaff_x19;
  *unaff_x19 = 0;
  if (lVar1 != 0) {
    puVar3 = (ulong *)unaff_x19[1];
    for (uVar2 = 0; uVar2 < *puVar3; uVar2 = uVar2 + 1) {
      func_0x00010784be90(lVar1);
      lVar1 = lVar1 + 400;
    }
  }
  return unaff_x19;
}



/* Entry: 10784df38; end: 10784df3b;  */

undefined8 * FUN_10784df38(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x00010784e30c();
  func_0x00010784dfdc(puVar1 + 0x6f);
  func_0x000107510994(param_1 + 0x6d);
  *param_1 = &PTR_DAT_1109e0d50;
  param_1[0x25] = &PTR_DAT_1109e0e60;
  param_1[0x26] = &PTR_DAT_1109e0e88;
  param_1[0x31] = &PTR_DAT_1109e0eb0;
  param_1[0x33] = &PTR_DAT_1109e0ed8;
  param_1[0x35] = &PTR_DAT_1109e0f00;
  *(undefined1 *)(param_1[0x47] + 0x30) = 1;
  func_0x0001073ada2c(*(undefined8 *)(param_1[0x47] + 0x18));
  func_0x00010780f2c0(param_1[0x4e],param_1 + 0x25);
  func_0x000107831228(param_1 + 0x69);
  func_0x0001078312d4(param_1 + 100);
  func_0x000107518510(param_1 + 0x5f);
  func_0x000107518478(param_1 + 0x5a);
  func_0x0001075183b4(param_1 + 0x55);
  func_0x00010751838c(param_1 + 0x53);
  func_0x0001074f9d98(param_1 + 0x51);
  func_0x00010724bd50(param_1 + 0x4c);
  func_0x000107831700(param_1 + 0x49);
  func_0x0001078316dc(param_1 + 0x47);
  func_0x000107831374(param_1 + 0x3f);
  func_0x000107831640(param_1 + 0x3d);
  func_0x0001072c9240(param_1 + 0x37);
  func_0x000107432200(param_1 + 0x35);
  func_0x0001074321c8(param_1 + 0x33);
  func_0x000107432190(param_1 + 0x31);
  func_0x00010747c918(param_1 + 0x26);
  *param_1 = &PTR_DAT_1109e1d40;
  func_0x00010750bcd8(param_1 + 0x13);
  func_0x000104c2f714(param_1 + 4);
  return param_1;
}



/* Entry: 10784e0d4; end: 10784e0ff;  */

void FUN_10784e0d4(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_2 = &PTR_DAT_1109e21a8;
  uVar5 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar5;
  lVar4 = *(long *)(param_1 + 0x18);
  param_2[3] = lVar4;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  param_2[5] = *(undefined8 *)(param_1 + 0x28);
  param_2[4] = uVar5;
  return;
}



/* Entry: 10784e3e0; end: 10784e3f3;  */

void FUN_10784e3e0(void)

{
  func_0x00010784e6ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10784e7f4; end: 10784e807;  */

void FUN_10784e7f4(void)

{
  func_0x00010784e8f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10784e900; end: 10784e927;  */

long FUN_10784e900(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10784eb48; end: 10784ed73;  */

/* WARNING: Possible PIC construction at 0x00010784eca4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010784eca8) */

void FUN_10784eb48(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,long param_8)

{
  long *plVar1;
  undefined1 in_ZR;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 extraout_x8;
  long lVar5;
  undefined8 extraout_x8_00;
  int extraout_w10;
  long *unaff_x19;
  undefined1 auStack_128 [8];
  long alStack_120 [9];
  undefined8 uStack_d8;
  long *plStack_d0;
  long lStack_a8;
  long *plStack_a0;
  undefined1 auStack_88 [16];
  long alStack_78 [4];
  undefined8 uStack_58;
  
  func_0x00010784f54c();
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  uStack_58 = extraout_x8;
  func_0x0001078489c8(param_5,0);
  func_0x000107527270(unaff_x19 + 2);
  unaff_x19[0x41] = *(long *)(param_4 + 0x10);
  lVar5 = *(long *)(param_4 + 0x18);
  unaff_x19[0x42] = lVar5;
  if (lVar5 != 0) {
    do {
      func_0x00010784f5ec();
    } while (extraout_w10 != 0);
  }
  plVar1 = unaff_x19 + 0x43;
  *(undefined1 *)(unaff_x19 + 0x45) = 0;
  unaff_x19[0x44] = 0;
  *plVar1 = 0;
  func_0x000104c2fe00(unaff_x19 + 0x46,param_6);
  unaff_x19[0x4d] = param_7;
  unaff_x19[0x4e] = param_8;
  plVar2 = (long *)unaff_x19[0x41];
  if (plVar2 == (long *)0x0) {
    func_0x00010784f4dc();
    FUN_1078489f8(alStack_78);
    func_0x0001073787c0(auStack_88,alStack_78);
    func_0x00010784f620();
    func_0x00010784f560();
    plVar2 = alStack_78;
LAB_10784eccc:
    __ZNSt13exception_ptrD1Ev();
  }
  else {
    (**(code **)(*plVar2 + 0x20))();
    if ((int)plVar2 == 0) {
      in_ZR = (char)unaff_x19[1] == '\x01';
      plVar3 = unaff_x19;
      if ((bool)in_ZR) goto code_r0x00010784ed74;
    }
    else {
      if (unaff_x19[0x41] == 0) {
        func_0x00010784f4dc();
        FUN_1078489f8(&lStack_a8);
        func_0x00010784f5ac();
        func_0x00010784f620();
        func_0x00010784f560();
        plVar2 = &lStack_a8;
        goto LAB_10784eccc;
      }
      *(undefined1 *)((long)unaff_x19 + 0x11) = 1;
      func_0x00010784f5fc(&PTR_DAT_1109e2528);
      func_0x00010784f59c();
      plVar2 = plStack_a0;
      plStack_a0 = (long *)0x0;
      lVar5 = *plVar1;
      *plVar1 = (long)plVar2;
      plVar2 = (long *)0x0;
      if (lVar5 != 0) {
        func_0x00010784f4d0();
        plVar2 = plStack_a0;
        plStack_a0 = (long *)0x0;
        if (plVar2 != (long *)0x0) {
          func_0x00010784f4d0();
        }
      }
      func_0x00010784f5e4();
    }
  }
  func_0x00010784f568(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010784f560();
  __ZNSt13exception_ptrD1Ev(&lStack_a8);
  func_0x000104c2f714(unaff_x19 + 0x46);
  func_0x0001072aca78(plVar1);
  func_0x00010724bd50(unaff_x19 + 0x41);
  func_0x00010724b374(unaff_x19 + 2);
  __Unwind_Resume();
  plVar3 = plVar2;
code_r0x00010784ed74:
  plStack_d0 = plVar1;
  func_0x00010784f54c();
  uStack_d8 = extraout_x8_00;
  if (plVar3[0x41] == 0) {
    lVar5 = *unaff_x19;
    func_0x00010784f4dc();
    FUN_1078489f8(auStack_128);
    func_0x00010784f5ac();
    func_0x00010782d3f0(lVar5,alStack_120);
    func_0x00010784f560();
    __ZNSt13exception_ptrD1Ev(auStack_128);
  }
  else {
    *(undefined1 *)((long)unaff_x19 + 0x11) = 2;
    unaff_x19[0x2e] = unaff_x19[0x44];
    *(char *)(unaff_x19 + 0x2f) = (char)unaff_x19[0x45];
    func_0x00010784f5fc(&PTR_FUN_1109e25a8);
    func_0x00010784f59c();
    lVar5 = alStack_120[0];
    alStack_120[0] = 0;
    lVar4 = unaff_x19[0x43];
    unaff_x19[0x43] = lVar5;
    if (lVar4 != 0) {
      func_0x00010784f4d0();
      lVar5 = alStack_120[0];
      alStack_120[0] = 0;
      if (lVar5 != 0) {
        func_0x00010784f4d0();
      }
    }
    func_0x00010784f5e4();
  }
  func_0x00010784f568(uStack_d8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010784f560();
    __ZNSt13exception_ptrD1Ev(auStack_128);
    func_0x00010784f62c();
    return;
  }
  return;
}



/* Entry: 10784f2b4; end: 10784f2bb;  */

void FUN_10784f2b4(void)

{
  return;
}



/* Entry: 10784fc78; end: 10784fcf3;  */

long FUN_10784fc78(long param_1)

{
  undefined1 auStack_40 [16];
  long lStack_30;
  undefined1 uStack_28;
  
  lStack_30 = param_1 + 0x1f8;
  uStack_28 = 1;
  func_0x000107279a5c();
  if ((*(byte *)(param_1 + 0x2b0) & 1) == 0) {
    func_0x000104c2ec98(auStack_40,param_1 + 0x40);
    func_0x0001072f99e4(param_1 + 0x2a0,auStack_40);
    func_0x000104c335c0(auStack_40);
    *(undefined1 *)(param_1 + 0x2b0) = 1;
  }
  func_0x000107851d6c();
  return param_1 + 0x2a0;
}



/* Entry: 1078506fc; end: 10785074f;  */

void FUN_1078506fc(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_DAT_1109a3bf8;
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar1;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = uVar1;
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  param_1[7] = uVar1;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  return;
}



/* Entry: 107850f1c; end: 107850f1f;  */

undefined8 * FUN_107850f1c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e2688;
  func_0x000107374434(param_1 + 0x28);
  func_0x000107276ba4(param_1 + 0x13);
  func_0x00010737dbe4(param_1 + 0xd);
  func_0x000104c2f714(param_1 + 6);
  func_0x000107851278(param_1 + 4);
  func_0x000104c33970(param_1 + 2);
  return param_1;
}



/* Entry: 1078511cc; end: 1078511d7;  */

void FUN_1078511cc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e26f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1078513ac; end: 1078513e3;  */

long FUN_1078513ac(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109e27f0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10785170c; end: 107851723;  */

void FUN_10785170c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107851a10; end: 107851a1b;  */

void FUN_107851a10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107851e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 107851b5c; end: 107851b9b;  */

undefined8 * FUN_107851b5c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109e29a8;
  func_0x000107851be8(param_1 + 3);
  return param_1;
}


