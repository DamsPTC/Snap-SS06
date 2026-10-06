/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10870f90c; end: 1087104b7;  */

void FUN_10870f90c(undefined1 *param_1,long param_2,undefined8 param_3,ulong param_4,long param_5,
                  uint param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  byte bVar2;
  ulong uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  undefined ***pppuVar12;
  char *pcVar13;
  undefined1 *puVar14;
  uint uVar15;
  uint extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  uint extraout_w8_02;
  uint extraout_w8_03;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  code *extraout_x8_03;
  long extraout_x8_04;
  code *extraout_x8_05;
  ulong extraout_x8_06;
  ulong extraout_x8_07;
  ulong uVar16;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w10;
  undefined8 uVar17;
  long *plVar18;
  uint uVar19;
  uint uVar20;
  char *pcVar21;
  uint uVar22;
  char in_stack_00000060;
  undefined1 auStack_bf8 [24];
  undefined1 auStack_be0 [32];
  byte bStack_bc0;
  undefined8 uStack_bb8;
  long lStack_bb0;
  ulong uStack_ba8;
  uint uStack_ba0;
  char cStack_b9c;
  ushort uStack_b9b;
  byte bStack_b99;
  char cStack_b98;
  char cStack_b78;
  undefined1 auStack_b70 [88];
  char cStack_b18;
  long lStack_ad0;
  byte bStack_ac8;
  undefined8 uStack_ac0;
  int iStack_ab8;
  undefined4 uStack_ab4;
  undefined1 auStack_ab0 [88];
  undefined1 uStack_a58;
  undefined1 auStack_a50 [328];
  undefined1 auStack_908 [24];
  undefined1 auStack_8f0 [24];
  char acStack_8d8 [24];
  undefined1 auStack_8c0 [40];
  undefined1 auStack_898 [24];
  undefined1 uStack_880;
  undefined4 uStack_878;
  undefined1 auStack_6d8 [96];
  byte bStack_678;
  long lStack_660;
  char cStack_530;
  undefined1 auStack_528 [24];
  undefined1 auStack_510 [24];
  char acStack_4f8 [24];
  undefined1 auStack_4e0 [40];
  undefined4 uStack_4b8;
  undefined1 uStack_4b4;
  undefined **ppuStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined4 uStack_490;
  undefined **ppuStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  ulong uStack_468;
  uint uStack_458;
  char *pcStack_450;
  byte bStack_448;
  long lStack_3b8;
  long lStack_3b0;
  ulong uStack_380;
  char cStack_2c0;
  ulong uStack_2b8;
  byte bStack_2b0;
  byte bStack_2a0;
  long lStack_228;
  char cStack_220;
  undefined4 uStack_1a0;
  undefined1 uStack_19c;
  uint uStack_170;
  uint uStack_148;
  long lStack_120;
  char cStack_118;
  long lStack_110;
  long lStack_108;
  byte bStack_c8;
  undefined1 auStack_58 [88];
  
  func_0x000107c32ee4();
  lVar10 = param_5;
  func_0x000107c29e78(param_5);
  lVar11 = param_5;
  FUN_1087206a8();
  uVar17 = 2;
  uVar19 = param_6;
  switch((uint)lVar11) {
  case 1:
    goto code_r0x00010870f9a8;
  case 2:
    param_6 = 0xb;
    break;
  case 3:
    param_6 = 0xc;
    break;
  case 4:
    param_6 = 0xd;
    break;
  case 0xc:
    param_6 = 6;
  }
  uVar17 = 5;
  uVar19 = (uint)lVar11;
code_r0x00010870f9a8:
  func_0x00010871f7f4(*(undefined8 *)(param_5 + 0x18));
  func_0x000107c29ee0(&ppuStack_488);
  lVar11 = param_2 + 0x78;
  func_0x000107c28078(lVar11,&ppuStack_488);
  func_0x000107c27914(&ppuStack_488);
  func_0x00010871ed7c(&ppuStack_488);
  auStack_ab0[0] = 0;
  uStack_a58 = 0;
  auStack_898[0] = 0;
  uStack_880 = 0;
  func_0x00010871ea7c(auStack_ab0);
  FUN_10871bcc4(auStack_a50,param_3,&ppuStack_488,uVar17,param_7,param_8,param_4,lVar10,(char)uVar19
               );
  uVar15 = (uint)param_8;
  func_0x000107c279dc(auStack_898);
  func_0x00010871ed10();
  func_0x00010871edb8();
  func_0x00010871f43c(param_2,auStack_a50);
  uVar6 = param_6 - 6 == 7;
  switch(param_6 - 6) {
  case 0:
    func_0x00010871e1fc(&PTR_PTR_113286e08);
    func_0x00010871f514(auStack_a50,extraout_x8 + 0x48);
    break;
  default:
    goto LAB_10870fabc;
  case 5:
    func_0x00010871e1fc(&PTR_PTR_113286e08);
    func_0x00010871f514(auStack_a50,extraout_x8_01 + 0x78);
    break;
  case 6:
    func_0x00010871e1fc(&PTR_PTR_113286e08);
    func_0x00010871f514(auStack_a50,extraout_x8_00 + 0x90);
    break;
  case 7:
    func_0x00010871e1fc(&PTR_PTR_113286e08);
    FUN_10870b278(auStack_a50,extraout_x8_02 + 0xf0,&ppuStack_488);
  }
  func_0x00010871edb8();
LAB_10870fabc:
  func_0x00010871f2d0();
  uStack_478 = 0;
  uStack_470 = 0;
  uStack_480 = 0;
  ppuStack_488 = &PTR_FUN_110a609a8;
  uStack_468 = CONCAT44(uStack_468._4_4_,0x1ce);
  func_0x00010871e058();
  func_0x00010871e588((long)(char)bStack_bc0);
  func_0x00010871e174(&ppuStack_488);
  func_0x00010871e484();
  func_0x00010871e00c(auStack_58,param_2 + 0x118);
  func_0x00010871e2c0();
  func_0x00010871e2d0();
  func_0x00010871e2d8();
  func_0x000107c2882c(&ppuStack_488);
  plVar1 = (long *)(param_2 + 0xb8);
  pppuVar12 = &ppuStack_488;
  func_0x00010871e48c(pppuVar12,plVar1,auStack_bf8);
  func_0x00010871f7a4();
  if ((((!(bool)uVar6) || ((bStack_ac8 & 1) == 0)) ||
      (uVar6 = cStack_220 == '\x01' && lStack_ad0 == lStack_228,
      cStack_220 != '\x01' || lStack_228 <= lStack_ad0)) &&
     ((func_0x00010871e52c(), !(bool)uVar6 || extraout_w9 != 2 &&
      (bVar7 = cStack_2c0 == '\x01', !bVar7)))) {
    func_0x00010871f798();
    bVar8 = false;
    if (bVar7) {
      FUN_10871e8d8();
      bVar8 = *(char *)pppuVar12 != '\x01' || uStack_170 == 2;
      if (*(char *)pppuVar12 != '\x01' || uStack_170 == 2) {
        uStack_ba0 = 6;
      }
    }
    uVar9 = (uint)pppuVar12;
    func_0x00010871e628(bStack_bc0);
    if ((bVar8) && ((uStack_b9b & 1) != 0)) {
      uVar22 = 2;
      bVar7 = extraout_w8 == 0x14;
      if ((extraout_w8 < 0x15) && (func_0x00010871df48(), !bVar7)) goto LAB_10870fbcc;
    }
    else {
LAB_10870fbcc:
      uVar22 = uVar9;
      func_0x00010871e0ac(auStack_bf8);
      func_0x00010871e610(CONCAT44(uStack_ab4,iStack_ab8));
      func_0x00010871e6a0();
      uVar15 = (uint)bStack_bc0;
      uVar9 = uVar22;
    }
    bVar8 = (uVar15 & 0xff) == 5;
    bVar7 = bVar8 && cStack_b9c == '\f';
    if (((bVar8 && cStack_b9c == '\f') && (func_0x00010871e508(uStack_ba0), bVar7)) &&
       (lVar10 = lStack_108 - lStack_110, lStack_108 != lStack_110)) {
      pppuVar12 = &ppuStack_488;
      FUN_108708704(pppuVar12,uStack_ba8);
      uVar9 = (uint)pppuVar12;
      if (lStack_108 - lStack_110 != lVar10) {
        uVar22 = 0;
      }
    }
    if (((((uint)lVar11 & (uint)bStack_2b0) != 1) || (uStack_2b8 != param_4)) ||
       ((bVar7 = (uVar19 & 0xff) == 1, bVar7 && ((bStack_448 & 1) != 0)))) {
      if (uVar22 != 2) {
        FUN_1088665d4(*plVar1,&ppuStack_488);
      }
    }
    else {
      func_0x00010871f7bc();
      uVar6 = bVar7 || extraout_w8_00 == 2;
      if (((!bVar7 && extraout_w8_00 != 2) ||
          (bVar8 = (uStack_ba0 & 0xfffffffb) != 1, bVar7 = bVar8 || param_4 == uStack_ba8,
          uVar6 = bVar7, bVar8 || param_4 == uStack_ba8)) ||
         (func_0x00010871e520(cStack_b9c), uVar6 = true, bVar7)) {
        func_0x00010871f3a8();
        uVar3 = uStack_380;
        uVar20 = uStack_ba0;
        lVar10 = lStack_bb0;
        uVar17 = uStack_bb8;
        bVar2 = bStack_bc0;
        uVar19 = (uint)bStack_bc0;
        FUN_10871e8e8(&ppuStack_488,(long)(char)bStack_bc0,uStack_ba0,uStack_bb8,lStack_bb0);
        uVar15 = 0;
        if ((bool)uVar6) {
          uVar15 = uVar22;
        }
        uVar6 = 0x13 < bVar2;
        bVar7 = bVar2 == 0x14;
        if (bVar2 < 0x15) {
          func_0x00010871e164(1 << (ulong)(uVar19 & 0x1f));
          uVar5 = 0;
          if (bVar7) goto LAB_108710130;
        }
        else {
LAB_108710130:
          uVar16 = lVar10 / 1000;
          if (uStack_468 <= uVar16) {
            uVar6 = uVar20 == 0xe;
            if (uVar20 < 0xf) {
              func_0x00010871f7c8();
              func_0x00010871e2ec();
              uVar16 = extraout_x8_06;
              if (((!(bool)uVar6) && (bVar7 = uVar19 == 0x14, uVar19 < 0x15)) &&
                 (func_0x00010871e144(), uVar16 = extraout_x8_07, !bVar7)) goto LAB_10871019c;
            }
            uStack_148 = (uint)((int)uVar17 != 2);
            uStack_468 = uVar16;
            FUN_10871c970();
            uVar15 = 0;
            uStack_1a0 = (undefined4)uStack_ac0;
            uStack_19c = (undefined1)((ulong)uStack_ac0 >> 0x20);
            uVar20 = uStack_ba0;
          }
LAB_10871019c:
          uVar6 = 0xd < uVar20;
          uVar5 = uVar20 == 0xe;
          if (uVar20 < 0xf) {
            func_0x00010871e80c();
            func_0x00010871e790();
            if (!(bool)uVar5) goto LAB_10870fd40;
          }
          if ((bStack_2b0 & 1) != 0) {
            uVar6 = uStack_ba8 <= uStack_2b8;
            uVar5 = uStack_2b8 == uStack_ba8;
            if (!(bool)uVar5 && (long)uStack_ba8 <= (long)uStack_2b8) goto LAB_10870fd40;
          }
          uStack_2b8 = uStack_ba8;
          bStack_2b0 = 1;
          uVar6 = cStack_b18 != '\0';
          uVar5 = cStack_b18 == '\x01';
          if ((bool)uVar5) {
            func_0x00010883f80c(auStack_b70,&ppuStack_488);
          }
          uVar15 = 0;
        }
LAB_10870fd40:
        if (((pcStack_450 == (char *)0x0) && ((uVar3 & 0xfe) != 0)) &&
           ((*(byte *)(param_2 + 0x250) & 1) == 0)) {
          uStack_498 = 0;
          uStack_4a0 = 0;
          uStack_4a8 = 0;
          ppuStack_4b0 = &PTR_FUN_110a609a8;
          uStack_490 = 0x1cf;
          func_0x00010871e378(*(undefined8 *)(param_2 + 0x118));
          (*extraout_x8_03)();
          func_0x000107c2882c(&ppuStack_4b0);
        }
        bVar2 = bStack_448;
        pcVar13 = (char *)(long)(char)bStack_bc0;
        func_0x00010871f4d8(pcVar13,uVar9);
        uStack_4b8 = SUB84(pcVar13,0);
        uStack_4b4 = (undefined1)((ulong)pcVar13 >> 0x20);
        if (((ulong)pcVar13 >> 0x20 & 1) == 0) {
          pcVar21 = (char *)0x0;
        }
        else {
          pcVar13 = (char *)&uStack_4b8;
          func_0x00010871f344(pcVar13,uStack_ba0,auStack_be0,uStack_bb8,lStack_bb0,uStack_b9b,
                              &ppuStack_488);
          pcVar21 = pcVar13;
        }
        func_0x00010871f7b0();
        uVar4 = uVar5;
        if ((bool)uVar6 && !(bool)uVar5) {
LAB_1087101cc:
          func_0x00010871f798();
          if (((bool)uVar6 && !(bool)uVar4) || (func_0x00010871df90(), (bool)uVar4)) {
            func_0x00010871e85c();
            plVar18 = *(long **)(param_2 + 0x118);
            func_0x00010871ef60();
            uStack_878 = 400;
            func_0x00010871e550();
            func_0x000107c278b8(acStack_4f8);
            pcVar13 = "true";
            if (bVar2 == 0) {
              pcVar13 = "false";
            }
            func_0x000107c28824(auStack_898,acStack_4f8,pcVar13);
            func_0x00010871e544();
            func_0x000107c278b8(auStack_510);
            func_0x00010871e5a0();
            func_0x00010871e538();
            puVar14 = auStack_528;
            func_0x000107c278b8(puVar14);
            func_0x00010871e5a0();
            func_0x000107c2884c(auStack_4e0,puVar14);
            (**(code **)(*plVar18 + 0x50))(plVar18,auStack_4e0);
            func_0x000107c2882c(auStack_4e0);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_528);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_510);
            pcVar13 = acStack_4f8;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
            func_0x00010871f554();
          }
        }
        else {
          func_0x00010871df48();
          uVar4 = 1;
          if ((bool)uVar5) goto LAB_1087101cc;
        }
        if (((ulong)pcVar21 & 1) == 0) {
          uVar19 = (uint)bStack_bc0;
LAB_10870ff34:
          bVar7 = uVar19 == 0x14;
          if (((0x14 < uVar19) || (func_0x00010871dfc0(), bVar7)) && (uVar9 != 0)) {
            bVar7 = uStack_ba0 == 0xe;
            uVar6 = bVar7;
            if (uStack_ba0 < 0xf) {
              func_0x00010871e01c();
              uVar6 = true;
              if ((!bVar7) && (bVar7 = extraout_w8_03 == 0x14, uVar6 = bVar7, extraout_w8_03 < 0x15)
                 ) {
                func_0x00010871dfa8();
                uVar6 = true;
                if (!bVar7) goto LAB_10870ff44;
              }
            }
            func_0x00010871e800(auStack_bf8);
            func_0x00010871ec5c();
            if (((ulong)pcVar13 & 1) != 0) {
              uVar15 = 0;
              goto LAB_1087100d4;
            }
          }
LAB_10870ff44:
          if (uVar15 == 2) goto LAB_10870fc94;
          uVar6 = 0;
        }
        else {
          bVar8 = (char *)0xa < pcStack_450;
          bVar7 = pcStack_450 == (char *)0xb;
          if ((!bVar7) || (func_0x00010871f7b0(), bVar8 && !bVar7 || extraout_w8_01 == 9)) {
            bVar7 = false;
          }
          else {
            if ((bStack_2b0 == 1) && (func_0x00010871eca0(), (int)pcVar13 != 0)) {
              pcVar13 = (char *)*plVar1;
              func_0x00010871f51c();
              func_0x00010871f47c();
              func_0x00010871f54c();
              if ((cStack_530 == '\x01') &&
                 (((bStack_678 >> 2 & 1) != 0 && (*(int *)(lStack_660 + 0xa8) == 0)))) {
                plVar18 = *(long **)(param_2 + 0x118);
                func_0x00010871ef60();
                uStack_878 = 399;
                func_0x00010871e574();
                func_0x000107c278b8(acStack_8d8);
                func_0x00010871e568();
                puVar14 = auStack_898;
                func_0x000107c28824(puVar14,acStack_8d8,
                                    *(undefined8 *)(extraout_x8_04 + (ulong)uVar9 * 8));
                func_0x00010871e2e0();
                func_0x000107c278b8(auStack_8f0);
                func_0x000108841d8c(auStack_908,(long)(char)bStack_bc0);
                func_0x000107c28820(puVar14,auStack_8f0,auStack_908);
                func_0x000107c2884c(auStack_8c0,puVar14);
                func_0x00010871e274(*(undefined8 *)(*plVar18 + 0x50));
                func_0x000107c2882c(auStack_8c0);
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_908);
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_8f0);
                pcVar13 = acStack_8d8;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
                func_0x00010871f554();
                func_0x00010871f530();
                uStack_458 = (uint)pcVar13;
                pcStack_450 = (char *)0xd;
              }
              func_0x00010871f45c();
            }
            bVar7 = true;
          }
          if (((bStack_bc0 == 2) && ((bStack_2b0 & 1) != 0)) && (uStack_2b8 == uStack_ba8)) {
            pcVar13 = (char *)*plVar1;
            func_0x00010871f51c();
            func_0x00010871f47c();
            func_0x00010871f54c();
            if (cStack_530 == '\x01') {
              pcVar13 = (char *)0x0;
              func_0x00010871e370(auStack_6d8);
            }
            func_0x00010871f45c();
          }
          uVar5 = 1 < uStack_170;
          uVar6 = uStack_170 == 2;
          if (((((bool)uVar6) &&
               (pcVar13 = pcStack_450, FUN_10871fb04(pcStack_450,uStack_458), (int)pcVar13 != 0)) &&
              ((func_0x00010871e55c(bStack_bc0), !(bool)uVar5 || (bool)uVar6 &&
               (((bStack_448 & 1) != 0 && ((long)uStack_380 < 2)))))) &&
             ((uStack_458 == 2 || uStack_458 == 0x1d) || (uStack_458 & 0xfffffffb) == 1)) {
            pcStack_450 = (char *)0x1;
          }
          bVar8 = cStack_b98 == '\x01';
          if (bVar8) {
            uStack_380 = (ulong)bStack_b99;
          }
          func_0x00010871f704();
          if (bVar8) {
            func_0x00010871e18c(auStack_bf8);
          }
          else {
            func_0x00010871f7a4();
            if (bVar8) {
              bVar7 = true;
            }
            if (!bVar7) {
              func_0x00010871e368(&ppuStack_488);
            }
          }
          if (cStack_b78 == '\x01') {
            func_0x00010871e180(auStack_bf8);
          }
          else if (lStack_3b8 != lStack_3b0) {
            func_0x00010871e360(&ppuStack_488);
          }
          if ((byte)uStack_ab4 == 1 && iStack_ab8 == 1) {
            pcStack_450 = (char *)0x10;
          }
          bVar7 = cStack_118 == '\x01';
          if (((bVar7) && (lStack_120 != 0)) && (((byte)uStack_ab4 & 1) == 0)) {
            cStack_118 = '\0';
          }
          uVar15 = 0;
          func_0x00010871f7bc();
          uVar19 = extraout_w8_02;
          if (((!bVar7) || (extraout_w10 == 0)) || (uVar6 = extraout_w9_00 == 2, !(bool)uVar6))
          goto LAB_10870ff34;
          uVar15 = 0;
          lStack_120 = 1;
          cStack_118 = '\x01';
        }
LAB_1087100d4:
        FUN_1088665d4(*plVar1,&ppuStack_488);
        func_0x00010871e320(*(undefined8 *)(param_2 + 0x158));
        (*extraout_x8_05)();
        if (((in_stack_00000060 != '\0') && (uVar15 == 0)) &&
           (((func_0x00010871ef84(), (bool)uVar6 || ((bStack_c8 & 1) == 0)) &&
            ((bStack_2a0 & 1) == 0)))) {
          func_0x00010871edd8();
          func_0x00010871e500();
        }
        FUN_10871bca8(param_1,&ppuStack_488);
        goto code_r0x000100671834;
      }
    }
  }
LAB_10870fc94:
  *param_1 = 0;
  param_1[0x3d0] = 0;
code_r0x000100671834:
  func_0x000107c288d0(&ppuStack_488);
  func_0x00010871e2c8();
  func_0x00010871e734();
  func_0x00010871ed18();
  return;
}



/* Entry: 1087104b8; end: 10871057f;  */

undefined4 FUN_1087104b8(undefined8 param_1,int param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  
  uVar3 = 2;
  if ((param_2 == 0xe) && ((*(byte *)(param_3 + 0x3d0) & 1) != 0)) {
    lVar2 = *(long *)(param_3 + 0x168);
    lVar1 = *(long *)(param_3 + 0x170);
    FUN_10871bf6c(lVar2,lVar1,param_1);
    if (lVar1 == lVar2) {
      lVar2 = *(long *)(param_3 + 0x150);
      lVar1 = *(long *)(param_3 + 0x158);
      FUN_10871bf6c(lVar2,lVar1,param_1);
      uVar3 = 2;
      if (lVar1 != lVar2) {
        uVar3 = 4;
      }
    }
    else {
      uVar3 = 3;
    }
  }
  return uVar3;
}



/* Entry: 108710580; end: 1087108d3;  */

long * FUN_108710580(float param_1,float param_2,long *param_3,undefined8 param_4)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long *extraout_x8;
  long extraout_x8_00;
  long *extraout_x9;
  ulong uVar7;
  ulong extraout_x9_00;
  long *plVar8;
  long *plVar9;
  long *extraout_x10;
  long *plVar10;
  long *plVar11;
  long *extraout_x11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  uint uVar16;
  long *plVar17;
  long *unaff_x25;
  long *in_stack_00000008;
  long *in_stack_00000010;
  undefined8 in_stack_00000018;
  
  func_0x0001008652d4();
  plVar8 = param_3;
  func_0x00010871f428();
  plVar17 = (long *)param_3[1];
  if (plVar17 != (long *)0x0) {
    uVar15 = (long)plVar17 - 1;
    uVar16 = (uint)plVar17;
    if (((ulong)plVar17 & uVar15) == 0) {
      unaff_x25 = (long *)((ulong)(uVar16 - 1) & (ulong)plVar8);
    }
    else {
      unaff_x25 = plVar8;
      if (plVar17 <= plVar8) {
        uVar1 = 0;
        if (uVar16 != 0) {
          uVar1 = (uint)plVar8 / uVar16;
        }
        unaff_x25 = (long *)(ulong)((uint)plVar8 - uVar1 * uVar16);
      }
    }
    plVar13 = *(long **)(*param_3 + (long)unaff_x25 * 8);
    if (plVar13 != (long *)0x0) {
      do {
        while( true ) {
          plVar13 = (long *)*plVar13;
          if (plVar13 == (long *)0x0) goto LAB_108710638;
          plVar6 = (long *)plVar13[1];
          if (plVar6 != plVar8) break;
          plVar6 = plVar13 + 2;
          func_0x000107c28078(plVar6,param_4);
          if (((ulong)plVar6 & 1) != 0) goto LAB_10871089c;
        }
        if (((ulong)plVar17 & uVar15) == 0) {
          plVar6 = (long *)((ulong)plVar6 & uVar15);
        }
        else if (plVar17 <= plVar6) {
          uVar7 = 0;
          if (plVar17 != (long *)0x0) {
            uVar7 = (ulong)plVar6 / (ulong)plVar17;
          }
          plVar6 = (long *)((long)plVar6 - uVar7 * (long)plVar17);
        }
      } while (plVar6 == unaff_x25);
    }
  }
LAB_108710638:
  plVar6 = param_3 + 2;
  plVar13 = (long *)0x40;
  __Znwm();
  in_stack_00000018 = 0;
  plVar9 = plVar13 + 2;
  *plVar13 = 0;
  plVar13[1] = (long)plVar8;
  in_stack_00000008 = plVar13;
  in_stack_00000010 = plVar6;
  func_0x00010871c9d0(plVar9,param_4);
  func_0x00010871f808();
  func_0x00010086567c();
  if ((plVar17 != (long *)0x0) && (param_1 <= param_2 * (float)plVar17)) goto LAB_108710824;
  bVar3 = (long *)0x2 < plVar17;
  bVar4 = plVar17 == (long *)0x3;
  func_0x000100865690((long)plVar17 << 1);
  plVar14 = extraout_x8;
  if (!bVar3 || bVar4) {
    plVar14 = extraout_x9;
  }
  if ((long)plVar14 - 1U == 0) {
    plVar14 = (long *)0x2;
  }
  else if (((ulong)plVar14 & (long)plVar14 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar9 = plVar14;
  }
  plVar17 = (long *)param_3[1];
  if (plVar17 < plVar14) {
LAB_1087106cc:
    if ((ulong)plVar14 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1087108c4);
      (*pcVar2)();
    }
    lVar5 = (long)plVar14 << 3;
    __Znwm(lVar5);
    FUN_10871ca20(param_3,lVar5);
    param_3[1] = (long)plVar14;
    lVar5 = *param_3;
    for (plVar17 = (long *)0x0; plVar14 != plVar17; plVar17 = (long *)((long)plVar17 + 1)) {
      *(undefined8 *)(lVar5 + (long)plVar17 * 8) = 0;
    }
    plVar9 = (long *)*plVar6;
    plVar17 = plVar14;
    if (plVar9 != (long *)0x0) {
      plVar10 = (long *)plVar9[1];
      uVar7 = (long)plVar14 - 1;
      uVar15 = 0;
      if (plVar14 != (long *)0x0) {
        uVar15 = (ulong)plVar10 / (ulong)plVar14;
      }
      plVar11 = plVar10;
      if (plVar14 <= plVar10) {
        plVar11 = (long *)((long)plVar10 - uVar15 * (long)plVar14);
      }
      if (((ulong)plVar14 & uVar7) == 0) {
        plVar11 = (long *)((ulong)plVar10 & uVar7);
      }
      *(long **)(lVar5 + (long)plVar11 * 8) = plVar6;
      while (plVar10 = plVar9, plVar9 = (long *)*plVar10, plVar9 != (long *)0x0) {
        plVar12 = (long *)plVar9[1];
        if (((ulong)plVar14 & uVar7) == 0) {
          plVar12 = (long *)((ulong)plVar12 & uVar7);
        }
        else if (plVar14 <= plVar12) {
          uVar15 = 0;
          if (plVar14 != (long *)0x0) {
            uVar15 = (ulong)plVar12 / (ulong)plVar14;
          }
          plVar12 = (long *)((long)plVar12 - uVar15 * (long)plVar14);
        }
        if (plVar12 != plVar11) {
          if (*(long *)(lVar5 + (long)plVar12 * 8) == 0) {
            *(long **)(lVar5 + (long)plVar12 * 8) = plVar10;
            plVar11 = plVar12;
          }
          else {
            *plVar10 = *plVar9;
            func_0x00010871ef18();
            lVar5 = extraout_x8_00;
            uVar7 = extraout_x9_00;
            plVar9 = extraout_x10;
            plVar11 = extraout_x11;
          }
        }
      }
    }
  }
  else if (plVar14 < plVar17) {
    func_0x00010871ef30();
    if ((plVar17 < (long *)0x3) || (((ulong)plVar17 & (long)plVar17 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x00010871e9f4();
    }
    if (plVar14 <= plVar9) {
      plVar14 = plVar9;
    }
    if (plVar14 < plVar17) {
      if (plVar14 != (long *)0x0) goto LAB_1087106cc;
      FUN_10871ca20(param_3,0);
      param_3[1] = 0;
      plVar17 = (long *)0x0;
    }
    else {
      plVar17 = (long *)param_3[1];
    }
  }
  if (((ulong)plVar17 & (long)plVar17 - 1U) == 0) {
    unaff_x25 = (long *)((ulong)((int)plVar17 - 1) & (ulong)plVar8);
  }
  else {
    unaff_x25 = plVar8;
    if (plVar17 <= plVar8) {
      uVar15 = 0;
      if (plVar17 != (long *)0x0) {
        uVar15 = (ulong)plVar8 / (ulong)plVar17;
      }
      unaff_x25 = (long *)((long)plVar8 - uVar15 * (long)plVar17);
    }
  }
LAB_108710824:
  lVar5 = *param_3;
  plVar8 = *(long **)(lVar5 + (long)unaff_x25 * 8);
  if (plVar8 == (long *)0x0) {
    *plVar13 = *plVar6;
    *plVar6 = (long)plVar13;
    *(long **)(lVar5 + (long)unaff_x25 * 8) = plVar6;
    if (*plVar13 != 0) {
      plVar8 = *(long **)(*plVar13 + 8);
      if (((ulong)plVar17 & (long)plVar17 - 1U) == 0) {
        plVar8 = (long *)((ulong)plVar8 & (long)plVar17 - 1U);
      }
      else if (plVar17 <= plVar8) {
        uVar15 = 0;
        if (plVar17 != (long *)0x0) {
          uVar15 = (ulong)plVar8 / (ulong)plVar17;
        }
        plVar8 = (long *)((long)plVar8 - uVar15 * (long)plVar17);
      }
      *(long **)(lVar5 + (long)plVar8 * 8) = plVar13;
    }
  }
  else {
    *plVar13 = *plVar8;
    *plVar8 = (long)plVar13;
  }
  in_stack_00000008 = (long *)0x0;
  param_3[3] = param_3[3] + 1;
  FUN_10871ca38(&stack0x00000008);
LAB_10871089c:
  return plVar13 + 5;
}



/* Entry: 1087108d4; end: 1087108eb;  */

void FUN_1087108d4(void)

{
  FUN_10871cba0();
  return;
}



/* Entry: 1087108ec; end: 10871093f;  */

void FUN_1087108ec(long param_1,undefined8 param_2,long param_3)

{
  long unaff_x21;
  
  if (*(char *)(param_3 + 0x28) == '\x01') {
    func_0x000100864a88();
    param_1 = param_1 + 0x4e0;
    FUN_108710580();
    FUN_10871cc6c();
    if (param_1 == 0) {
      FUN_108710580(unaff_x21 + 0x4b8);
      FUN_10871cba0();
      return;
    }
  }
  return;
}



/* Entry: 108710940; end: 108710b1f;  */

undefined1 * FUN_108710940(undefined1 *param_1,char *param_2,long *param_3)

{
  undefined1 uVar1;
  long *plVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 extraout_x8;
  long unaff_x19;
  char *unaff_x20;
  undefined8 *puVar6;
  undefined8 uVar7;
  long alStack_688 [3];
  ulong auStack_670 [8];
  char acStack_629 [489];
  byte bStack_440;
  byte bStack_268;
  byte bStack_258;
  undefined1 auStack_250 [464];
  char cStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  long *plStack_68;
  undefined8 uStack_48;
  
  func_0x00010086515c();
  uVar1 = *param_3 == param_3[1];
  uStack_48 = extraout_x8;
  if (!(bool)uVar1) {
    func_0x000107c32eb0();
    FUN_1086a1148(auStack_250,*(undefined8 *)(param_1 + 0xb8));
    uVar1 = 0;
    if (cStack_80 == '\x01') {
      acStack_629[1] = 0;
      bStack_258 = 0;
      acStack_629[0] = '\0';
      uVar7 = *(undefined8 *)(*(long *)(unaff_x19 + 0xb8) + 0x18);
      func_0x00010871f304();
      func_0x000107c31420(auStack_670,uVar7,alStack_688);
      plVar2 = alStack_688;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      uVar7 = *(undefined8 *)(unaff_x19 + 0xb8);
      pcStack_78 = FUN_10871cca4;
      ppuStack_70 = &PTR_FUN_110a68ce8;
      func_0x00010871eb80();
      *plVar2 = (long)acStack_629;
      plVar2[1] = unaff_x19;
      plVar2[2] = (long)unaff_x20;
      plVar2[3] = (long)auStack_250;
      plVar2[4] = (long)(acStack_629 + 1);
      plStack_68 = plVar2;
      FUN_1086a1530(uVar7,auStack_250,param_3,&pcStack_78);
      func_0x00010871e0d8();
      func_0x000107c31428(auStack_670);
      func_0x000107c31424(auStack_670);
      uVar1 = acStack_629[0] == '\x01';
      if ((bool)uVar1) {
        func_0x000107c32ec8(*(undefined8 *)(unaff_x19 + 0x158));
        func_0x00010871f3f0();
      }
      pcVar5 = (char *)(unaff_x19 + 0x508);
      func_0x000100865128(auStack_670,pcVar5);
      if ((auStack_670[0] == 0) || (FUN_108710b20(), pcVar5 = unaff_x20, (auStack_670[0] & 1) == 0))
      {
        unaff_x20 = pcVar5;
        func_0x000100865280();
        if (((bStack_258 & 1) != 0) &&
           (((func_0x00010871e688(), (bool)uVar1 || ((bStack_268 & 1) == 0)) &&
            ((bStack_440 & 1) == 0)))) {
          func_0x00010871e354();
          unaff_x20 = acStack_629 + 1;
          func_0x00010871e274();
        }
      }
      else {
        func_0x000100865280();
      }
      func_0x000107c288cc(acStack_629 + 1);
      param_2 = unaff_x20;
    }
    param_1 = auStack_250;
    func_0x000107c288c8();
  }
  func_0x00010086526c(uStack_48);
  if ((bool)uVar1) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000100865280();
  func_0x000107c288cc(acStack_629 + 1);
  puVar3 = auStack_250;
  func_0x000107c288c8();
  func_0x00010871e260();
  puVar6 = (undefined8 *)(puVar3 + 0x10);
  do {
    puVar6 = (undefined8 *)*puVar6;
    if (puVar6 == (undefined8 *)0x0) break;
    puVar4 = puVar6 + 3;
    FUN_108699c84(puVar4,param_2);
  } while (puVar4 == (undefined8 *)0x0);
  return (undefined1 *)(ulong)(puVar6 != (undefined8 *)0x0);
}



/* Entry: 108710b20; end: 108710b5b;  */

bool FUN_108710b20(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)(param_1 + 0x10);
  do {
    plVar2 = (long *)*plVar2;
    if (plVar2 == (long *)0x0) break;
    lVar1 = (long)(plVar2 + 3);
    FUN_108699c84(lVar1,param_2);
  } while (lVar1 == 0);
  return plVar2 != (long *)0x0;
}



/* Entry: 108710b5c; end: 108710f5f;  */

void FUN_108710b5c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long extraout_x8;
  
  func_0x000107c32ee4();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  if (*(int *)(param_3 + 0x48) - 3U < 10) {
    func_0x000107c32eb0();
                    /* WARNING: Could not recover jumptable at 0x000108710bb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10df4a8ea)[extraout_x8] * 4 + 0x108710bbc))();
    return;
  }
  return;
}



/* Entry: 108710f60; end: 108711053;  */

void FUN_108710f60(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  char cVar2;
  byte bVar3;
  undefined1 in_ZR;
  undefined1 uVar4;
  undefined1 uVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  long *plVar11;
  undefined4 *puVar12;
  long lVar13;
  ulong uVar14;
  undefined1 *puVar15;
  undefined8 uVar16;
  int iVar17;
  code *pcVar18;
  byte bVar19;
  char extraout_w8;
  uint extraout_w8_00;
  uint uVar20;
  int extraout_w8_01;
  uint extraout_w8_02;
  code *extraout_x8;
  code *extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  ulong uVar21;
  int extraout_w9;
  ulong extraout_x10;
  long unaff_x20;
  uint uVar22;
  undefined4 *puVar23;
  int iVar24;
  undefined1 auStack_e28 [24];
  undefined1 auStack_e10 [24];
  undefined1 auStack_df8 [24];
  undefined1 auStack_de0 [40];
  undefined **ppuStack_db8;
  undefined8 uStack_db0;
  undefined8 uStack_da8;
  undefined8 uStack_da0;
  undefined4 uStack_d98;
  undefined1 auStack_bf8 [96];
  byte bStack_b98;
  long lStack_b80;
  char cStack_a50;
  undefined1 auStack_a48 [24];
  char acStack_a30 [24];
  undefined1 auStack_a18 [24];
  undefined1 auStack_a00 [40];
  undefined4 uStack_9d8;
  undefined1 uStack_9d4;
  undefined **ppuStack_9d0;
  undefined8 uStack_9c8;
  undefined8 uStack_9c0;
  undefined8 uStack_9b8;
  undefined4 uStack_9b0;
  long alStack_9a8 [4];
  ulong uStack_988;
  uint uStack_978;
  ulong uStack_970;
  byte bStack_968;
  long lStack_8d8;
  long lStack_8d0;
  ulong uStack_8a0;
  undefined1 auStack_7f8 [24];
  char cStack_7e0;
  ulong uStack_7d8;
  byte bStack_7d0;
  byte bStack_7c0;
  long lStack_748;
  char cStack_740;
  undefined4 uStack_6c0;
  undefined1 uStack_6bc;
  uint uStack_690;
  uint uStack_668;
  long lStack_640;
  char cStack_638;
  long lStack_630;
  long lStack_628;
  byte bStack_5e8;
  undefined1 auStack_578 [112];
  undefined1 *puStack_508;
  undefined8 uStack_500;
  undefined1 auStack_4f0 [32];
  undefined1 **ppuStack_4d0;
  code *pcStack_4c8;
  undefined1 uStack_470;
  undefined1 uStack_458;
  undefined8 uStack_2d8;
  undefined1 *puStack_2a0;
  code *pcStack_298;
  undefined1 *puStack_278;
  undefined8 uStack_270;
  undefined1 auStack_260 [32];
  undefined1 auStack_240 [96];
  undefined1 uStack_1e0;
  undefined1 uStack_1c8;
  undefined8 uStack_48;
  
  func_0x00010871e67c();
  func_0x00010871eedc();
  func_0x00010871f698();
  if ((bool)in_ZR) {
    param_5 = (undefined8 *)*param_5;
  }
  else {
    func_0x00010871e320();
    (*extraout_x8)();
    param_5 = (undefined8 *)0x2;
  }
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  func_0x00010871e748();
  puStack_278 = auStack_260;
  uStack_270 = 0;
  func_0x00010871ea7c(auStack_240);
  func_0x00010871ee1c(1);
  func_0x00010871e7b0();
  func_0x00010871e70c();
  func_0x00010871e5d0();
  func_0x00010871e5bc();
  func_0x00010871e5f4();
  func_0x00010871e5d8();
  func_0x00010871e0d8();
  func_0x00010086526c(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010871e0d8();
  func_0x00010871e260();
  pcStack_298 = FUN_108711054;
  puStack_2a0 = &stack0xfffffffffffffff0;
  func_0x00010871e67c();
  func_0x00010871eedc();
  func_0x00010871f698();
  if ((bool)in_ZR) {
    param_5 = (undefined8 *)*param_5;
  }
  else {
    func_0x00010871e320(*(undefined8 *)(unaff_x20 + 0xa8));
    (*extraout_x8_00)();
    param_5 = (undefined8 *)0x2;
  }
  uStack_470 = 0;
  uStack_458 = 0;
  func_0x00010871e748();
  puStack_508 = auStack_4f0;
  uStack_500 = 0;
  func_0x00010871ea7c(&ppuStack_4d0);
  func_0x00010871ee1c(0xb);
  iVar17 = 0x10;
  func_0x00010871e7b0();
  func_0x00010871e70c();
  func_0x00010871e5d0();
  func_0x00010871e5bc();
  func_0x00010871e5f4();
  func_0x00010871e5d8();
  func_0x00010871e0d8();
  func_0x00010086526c(uStack_2d8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010871e0d8();
  func_0x00010871e260();
  pcVar18 = FUN_108711148;
  func_0x000107c32ee4();
  ppuStack_4d0 = &puStack_2a0;
  pcStack_4c8 = pcVar18;
  func_0x000107c32eb0();
  alStack_9a8[2] = 0;
  func_0x00010871e2b4();
  alStack_9a8[3] = 0;
  alStack_9a8[0] = extraout_x8_01 + 0x10;
  alStack_9a8[1] = 0;
  uStack_988 = CONCAT44(uStack_988._4_4_,0x1ce);
  func_0x00010871e058();
  func_0x00010871e588((long)*(char *)(param_3 + 0x38));
  func_0x00010871e174(alStack_9a8);
  func_0x00010871e484();
  func_0x00010871e00c(auStack_578,unaff_x20 + 0x118);
  func_0x00010871e2c0();
  func_0x00010871e2d0();
  func_0x00010871e2d8();
  func_0x000107c2882c(alStack_9a8);
  puVar1 = (undefined8 *)(unaff_x20 + 0xb8);
  plVar11 = alStack_9a8;
  func_0x00010871e48c(plVar11,puVar1,param_3);
  func_0x00010871f780();
  if ((((!(bool)in_ZR) || (in_ZR = *(char *)(param_3 + 0x130) == '\x01', !(bool)in_ZR)) ||
      (in_ZR = cStack_740 == '\x01' && *(long *)(param_3 + 0x128) == lStack_748,
      cStack_740 != '\x01' || lStack_748 <= *(long *)(param_3 + 0x128))) &&
     ((func_0x00010871e52c(), !(bool)in_ZR || extraout_w9 != 2 &&
      (bVar8 = cStack_7e0 == '\x01', !bVar8)))) {
    func_0x00010871f768();
    if ((bVar8) && (FUN_10871e8d8(), (char)*plVar11 != '\x01' || uStack_690 == 2)) {
      *(undefined4 *)(param_3 + 0x58) = 6;
    }
    iVar24 = (int)plVar11;
    if ((*(byte *)(param_3 + 0x5e) & 1) == 0) {
LAB_1087112a4:
      func_0x00010871e914();
      func_0x00010871f754();
      func_0x00010871efd8();
      uVar20 = (uint)*(byte *)(param_3 + 0x38);
    }
    else {
      uVar20 = (uint)*(byte *)(param_3 + 0x38);
      if (*(char *)(param_3 + 0x5d) != '\x01') goto LAB_1087112a4;
      if ((*(byte *)(param_3 + 0x38) - 2 < 0x13) &&
         (func_0x00010871ee3c(), uVar20 = extraout_w8_00, (extraout_x10 & 1) != 0)) {
        func_0x00010871e79c();
        goto LAB_1087112a4;
      }
      iVar24 = 2;
    }
    if ((((uVar20 == 5) && (bVar8 = *(char *)(param_3 + 0x5c) == '\f', bVar8)) &&
        (func_0x00010871e508(*(undefined4 *)(param_3 + 0x58)), bVar8)) &&
       ((lVar13 = lStack_628 - lStack_630, lStack_628 != lStack_630 &&
        (FUN_108708704(alStack_9a8,*(undefined8 *)(param_3 + 0x50)),
        lStack_628 - lStack_630 != lVar13)))) {
      iVar24 = 0;
    }
    plVar11 = alStack_9a8;
    (*(code *)*param_5)(plVar11,param_5);
    iVar9 = (int)plVar11;
    if (((ulong)plVar11 & 1) == 0) {
      if (iVar24 != 2) {
        FUN_1088665d4(*puVar1,alStack_9a8);
      }
    }
    else {
      cVar2 = *(char *)(param_3 + 0x38);
      bVar8 = cVar2 == '\a' || cVar2 == '\x02';
      if (((cVar2 != '\a' && cVar2 != '\x02') ||
          (func_0x00010871e694(*(undefined4 *)(param_3 + 0x58)), !bVar8)) ||
         ((bVar6 = uStack_7d8 == *(ulong *)(param_3 + 0x50), bVar8 = bStack_7d0 == 1 && bVar6,
          bStack_7d0 == 1 && bVar6 || (func_0x00010871e520(*(undefined1 *)(param_3 + 0x5c)), bVar8))
         )) {
        func_0x00010871f4a0();
        uVar14 = uStack_8a0;
        bVar19 = *(byte *)(param_3 + 0x38);
        uVar20 = (uint)bVar19;
        uVar22 = *(uint *)(param_3 + 0x58);
        uVar16 = *(undefined8 *)(param_3 + 0x40);
        lVar13 = *(long *)(param_3 + 0x48);
        FUN_10871e8c0(alStack_9a8,(long)(char)bVar19,uVar22,uVar16,lVar13);
        uVar5 = 0x13 < bVar19;
        bVar8 = bVar19 == 0x14;
        if ((0x14 < bVar19) || (func_0x00010871e164(1 << (ulong)(uVar20 & 0x1f)), bVar8)) {
          uVar21 = lVar13 / 1000;
          if (uStack_988 <= uVar21) {
            uVar5 = uVar22 == 0xe;
            if (uVar22 < 0xf) {
              func_0x00010871f7c8();
              func_0x00010871e2ec();
              uVar21 = extraout_x8_04;
              if (((!(bool)uVar5) && (bVar8 = uVar20 == 0x14, uVar20 < 0x15)) &&
                 (func_0x00010871e144(), uVar21 = extraout_x8_05, !bVar8)) goto LAB_108711930;
            }
            uStack_668 = (uint)((int)uVar16 != 2);
            uVar16 = *(undefined8 *)(param_3 + 0x138);
            uStack_988 = uVar21;
            FUN_10871c970();
            iVar24 = 0;
            uStack_6c0 = (undefined4)uVar16;
            uStack_6bc = (undefined1)((ulong)uVar16 >> 0x20);
            uVar22 = *(uint *)(param_3 + 0x58);
          }
LAB_108711930:
          uVar5 = 0xd < uVar22;
          uVar7 = uVar22 == 0xe;
          if (uVar22 < 0xf) {
            func_0x00010871e80c();
            func_0x00010871e790();
            if (!(bool)uVar7) goto LAB_1087113c0;
          }
          if ((bStack_7d0 & 1) == 0) {
            uVar21 = *(ulong *)(param_3 + 0x50);
          }
          else {
            uVar21 = *(ulong *)(param_3 + 0x50);
            uVar5 = uVar21 <= uStack_7d8;
            uVar7 = uStack_7d8 == uVar21;
            if (!(bool)uVar7 && (long)uVar21 <= (long)uStack_7d8) goto LAB_1087113c0;
          }
          bStack_7d0 = 1;
          uVar5 = *(char *)(param_3 + 0xe0) != '\0';
          uVar7 = *(char *)(param_3 + 0xe0) == '\x01';
          uStack_7d8 = uVar21;
          if ((bool)uVar7) {
            func_0x00010883f80c(param_3 + 0x88,alStack_9a8);
          }
          iVar24 = 0;
        }
        else {
          uVar7 = 0;
        }
LAB_1087113c0:
        if (((uStack_970 == 0) && ((uVar14 & 0xfe) != 0)) &&
           ((*(byte *)(unaff_x20 + 0x250) & 1) == 0)) {
          uStack_9b8 = 0;
          uStack_9c0 = 0;
          uStack_9c8 = 0;
          ppuStack_9d0 = &PTR_FUN_110a609a8;
          uStack_9b0 = 0x1cf;
          func_0x00010871e378(*(undefined8 *)(unaff_x20 + 0x118));
          (*extraout_x8_02)();
          func_0x000107c2882c(&ppuStack_9d0);
        }
        puVar12 = (undefined4 *)(long)*(char *)(param_3 + 0x38);
        func_0x00010871f4d8(puVar12,iVar9);
        uStack_9d8 = SUB84(puVar12,0);
        uStack_9d4 = (undefined1)((ulong)puVar12 >> 0x20);
        if (((ulong)puVar12 >> 0x20 & 1) == 0) {
          puVar23 = (undefined4 *)0x0;
        }
        else {
          func_0x00010871ecb0();
          puVar12 = &uStack_9d8;
          func_0x00010871edd0();
          puVar23 = puVar12;
        }
        iVar10 = (int)puVar12;
        func_0x00010871f78c();
        uVar4 = uVar7;
        if ((bool)uVar5 && !(bool)uVar7) {
LAB_1087117b8:
          func_0x00010871f768();
          if (((bool)uVar5 && !(bool)uVar4) || (func_0x00010871df90(), (bool)uVar4)) {
            func_0x00010871e85c();
            uStack_da8 = 0;
            uStack_da0 = 0;
            ppuStack_db8 = &PTR_FUN_110a609a8;
            uStack_db0 = 0;
            uStack_d98 = 400;
            func_0x00010871e550();
            func_0x000107c278b8(auStack_a18);
            func_0x00010871ec6c();
            func_0x00010871f6c4();
            func_0x000107c28824(&ppuStack_db8,auStack_a18);
            func_0x00010871e544();
            func_0x000107c278b8(acStack_a30);
            func_0x00010871e854();
            func_0x00010871e538();
            puVar15 = auStack_a48;
            func_0x000107c278b8(puVar15);
            func_0x00010871e854();
            func_0x000107c2884c(auStack_a00,puVar15);
            func_0x00010871e938();
            func_0x00010871e5fc();
            func_0x00010871eba8();
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a48);
            iVar10 = (int)acStack_a30;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
            func_0x00010871ebb0();
            func_0x00010871e704();
          }
        }
        else {
          func_0x00010871df48();
          uVar4 = 1;
          if ((bool)uVar7) goto LAB_1087117b8;
        }
        if (((ulong)puVar23 & 1) == 0) {
          bVar19 = *(byte *)(param_3 + 0x38);
LAB_1087115a0:
          iVar10 = iVar24;
          bVar8 = bVar19 == 0x14;
          if (((0x14 < bVar19) || (func_0x00010871dfc0(), bVar8)) && (iVar9 != 0)) {
            bVar8 = *(uint *)(param_3 + 0x58) == 0xe;
            uVar5 = bVar8;
            if (*(uint *)(param_3 + 0x58) < 0xf) {
              func_0x00010871e01c();
              uVar5 = true;
              if ((!bVar8) && (bVar8 = extraout_w8_02 == 0x14, uVar5 = bVar8, extraout_w8_02 < 0x15)
                 ) {
                func_0x00010871dfa8();
                uVar5 = true;
                if (!bVar8) goto LAB_1087115b0;
              }
            }
            puVar15 = auStack_7f8;
            func_0x00010871ec5c(puVar15,param_3 + 0x18);
            if (((ulong)puVar15 & 1) != 0) {
              iVar10 = 0;
              goto LAB_108711744;
            }
          }
LAB_1087115b0:
          if (iVar10 == 2) goto LAB_108711228;
          uVar5 = 0;
        }
        else {
          bVar6 = 10 < uStack_970;
          bVar8 = uStack_970 == 0xb;
          if ((!bVar8) || (func_0x00010871f78c(), bVar6 && !bVar8 || extraout_w8_01 == 9)) {
            bVar8 = false;
          }
          else {
            if ((bStack_7d0 == 1) && (func_0x00010871eca0(), iVar10 != 0)) {
              func_0x00010871f244(*puVar1);
              func_0x00010871f230();
              func_0x00010871f228();
              if ((cStack_a50 == '\x01') &&
                 (((bStack_b98 >> 2 & 1) != 0 && (*(int *)(lStack_b80 + 0xa8) == 0)))) {
                uStack_da8 = 0;
                uStack_da0 = 0;
                ppuStack_db8 = &PTR_FUN_110a609a8;
                uStack_db0 = 0;
                uStack_d98 = 399;
                func_0x00010871e574();
                func_0x000107c278b8(auStack_df8);
                func_0x00010871e568();
                func_0x00010871f21c();
                func_0x00010871e2e0();
                func_0x000107c278b8(auStack_e10);
                lVar13 = (long)*(char *)(param_3 + 0x38);
                func_0x000108841d8c(auStack_e28,lVar13);
                func_0x00010871e994();
                func_0x000107c2884c(auStack_de0,lVar13);
                func_0x00010871ebb8();
                func_0x00010871e674();
                func_0x00010871ec18();
                uVar20 = (uint)auStack_e28;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
                func_0x00010871e8e0();
                func_0x00010871f214();
                func_0x00010871e704();
                func_0x00010871eb18();
                uStack_970 = 0xd;
                uStack_978 = uVar20;
              }
              func_0x00010871f1f8();
            }
            bVar8 = true;
          }
          if (((*(char *)(param_3 + 0x38) == '\x02') && ((bStack_7d0 & 1) != 0)) &&
             (uStack_7d8 == *(ulong *)(param_3 + 0x50))) {
            func_0x00010871f244(*puVar1);
            func_0x00010871f230();
            func_0x00010871f228();
            if (cStack_a50 == '\x01') {
              func_0x00010871e370(auStack_bf8,alStack_9a8);
            }
            func_0x00010871f1f8();
          }
          uVar7 = 1 < uStack_690;
          uVar5 = uStack_690 == 2;
          if (((((bool)uVar5) &&
               (uVar14 = uStack_970, FUN_10871fb04(uStack_970,uStack_978), (int)uVar14 != 0)) &&
              ((func_0x00010871e55c(*(undefined1 *)(param_3 + 0x38)), !(bool)uVar7 || (bool)uVar5 &&
               (((bStack_968 & 1) != 0 && ((long)uStack_8a0 < 2)))))) &&
             ((uStack_978 == 2 || uStack_978 == 0x1d) || (uStack_978 & 0xfffffffb) == 1)) {
            uStack_970 = 1;
          }
          if (*(char *)(param_3 + 0x60) == '\x01') {
            uStack_8a0 = (ulong)*(byte *)(param_3 + 0x5f);
          }
          bVar6 = *(char *)(param_3 + 0x100) == '\x01';
          if (bVar6) {
            func_0x00010871f4f8(alStack_9a8);
          }
          else {
            func_0x00010871f780();
            if (bVar6) {
              bVar8 = true;
            }
            if (!bVar8) {
              func_0x00010871e368(alStack_9a8);
            }
          }
          if (*(char *)(param_3 + 0x80) == '\x01') {
            func_0x00010871f4e0(alStack_9a8);
          }
          else if (lStack_8d8 != lStack_8d0) {
            func_0x00010871e360(alStack_9a8);
          }
          bVar3 = *(byte *)(param_3 + 0x144);
          if (bVar3 == 1 && *(int *)(param_3 + 0x140) == 1) {
            uStack_970 = 0x10;
          }
          if (((cStack_638 == '\x01') && (lStack_640 != 0)) && ((bVar3 & 1) == 0)) {
            cStack_638 = '\0';
          }
          iVar24 = 0;
          iVar10 = 0;
          bVar19 = *(byte *)(param_3 + 0x38);
          if (((bVar19 != 7) || (bVar3 == 0)) ||
             (uVar5 = *(int *)(param_3 + 0x140) == 2, !(bool)uVar5)) goto LAB_1087115a0;
          func_0x00010871f844();
          cStack_638 = extraout_w8;
        }
LAB_108711744:
        FUN_1088665d4(*puVar1,alStack_9a8);
        func_0x00010871e320(*(undefined8 *)(unaff_x20 + 0x158));
        (*extraout_x8_03)();
        if (((iVar17 != 0) && (iVar10 == 0)) &&
           (((func_0x00010871ef84(), (bool)uVar5 || ((bStack_5e8 & 1) == 0)) &&
            ((bStack_7c0 & 1) == 0)))) {
          func_0x00010871edd8();
          func_0x00010871e500();
        }
        func_0x00010871e87c();
        goto code_r0x000100671834;
      }
    }
  }
LAB_108711228:
  func_0x00010871e5e8();
code_r0x000100671834:
  func_0x000107c288d0(alStack_9a8);
  func_0x00010871e2c8();
  return;
}



/* Entry: 108711054; end: 108711147;  */

void FUN_108711054(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  char cVar2;
  byte bVar3;
  undefined1 in_ZR;
  undefined1 uVar4;
  undefined1 uVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  long *plVar11;
  undefined4 *puVar12;
  long lVar13;
  ulong uVar14;
  undefined1 *puVar15;
  undefined8 uVar16;
  int iVar17;
  code *pcVar18;
  byte bVar19;
  char extraout_w8;
  uint extraout_w8_00;
  uint uVar20;
  int extraout_w8_01;
  uint extraout_w8_02;
  code *extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  ulong uVar21;
  int extraout_w9;
  ulong extraout_x10;
  long unaff_x20;
  uint uVar22;
  undefined4 *puVar23;
  int iVar24;
  undefined1 auStack_b98 [24];
  undefined1 auStack_b80 [24];
  undefined1 auStack_b68 [24];
  undefined1 auStack_b50 [40];
  undefined **ppuStack_b28;
  undefined8 uStack_b20;
  undefined8 uStack_b18;
  undefined8 uStack_b10;
  undefined4 uStack_b08;
  undefined1 auStack_968 [96];
  byte bStack_908;
  long lStack_8f0;
  char cStack_7c0;
  undefined1 auStack_7b8 [24];
  char acStack_7a0 [24];
  undefined1 auStack_788 [24];
  undefined1 auStack_770 [40];
  undefined4 uStack_748;
  undefined1 uStack_744;
  undefined **ppuStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined4 uStack_720;
  long alStack_718 [4];
  ulong uStack_6f8;
  uint uStack_6e8;
  ulong uStack_6e0;
  byte bStack_6d8;
  long lStack_648;
  long lStack_640;
  ulong uStack_610;
  undefined1 auStack_568 [24];
  char cStack_550;
  ulong uStack_548;
  byte bStack_540;
  byte bStack_530;
  long lStack_4b8;
  char cStack_4b0;
  undefined4 uStack_430;
  undefined1 uStack_42c;
  uint uStack_400;
  uint uStack_3d8;
  long lStack_3b0;
  char cStack_3a8;
  long lStack_3a0;
  long lStack_398;
  byte bStack_358;
  undefined1 auStack_2e8 [112];
  undefined1 *puStack_278;
  undefined8 uStack_270;
  undefined1 auStack_260 [32];
  undefined1 *puStack_240;
  code *pcStack_238;
  undefined1 uStack_1e0;
  undefined1 uStack_1c8;
  undefined8 uStack_48;
  
  func_0x00010871e67c();
  func_0x00010871eedc();
  func_0x00010871f698();
  if ((bool)in_ZR) {
    param_5 = (undefined8 *)*param_5;
  }
  else {
    func_0x00010871e320(*(undefined8 *)(unaff_x20 + 0xa8));
    (*extraout_x8)();
    param_5 = (undefined8 *)0x2;
  }
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  func_0x00010871e748();
  puStack_278 = auStack_260;
  uStack_270 = 0;
  func_0x00010871ea7c(&puStack_240);
  func_0x00010871ee1c(0xb);
  iVar17 = 0x10;
  func_0x00010871e7b0();
  func_0x00010871e70c();
  func_0x00010871e5d0();
  func_0x00010871e5bc();
  func_0x00010871e5f4();
  func_0x00010871e5d8();
  func_0x00010871e0d8();
  func_0x00010086526c(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010871e0d8();
  func_0x00010871e260();
  pcVar18 = FUN_108711148;
  func_0x000107c32ee4();
  puStack_240 = &stack0xfffffffffffffff0;
  pcStack_238 = pcVar18;
  func_0x000107c32eb0();
  alStack_718[2] = 0;
  func_0x00010871e2b4();
  alStack_718[3] = 0;
  alStack_718[0] = extraout_x8_00 + 0x10;
  alStack_718[1] = 0;
  uStack_6f8 = CONCAT44(uStack_6f8._4_4_,0x1ce);
  func_0x00010871e058();
  func_0x00010871e588((long)*(char *)(param_3 + 0x38));
  func_0x00010871e174(alStack_718);
  func_0x00010871e484();
  func_0x00010871e00c(auStack_2e8,unaff_x20 + 0x118);
  func_0x00010871e2c0();
  func_0x00010871e2d0();
  func_0x00010871e2d8();
  func_0x000107c2882c(alStack_718);
  puVar1 = (undefined8 *)(unaff_x20 + 0xb8);
  plVar11 = alStack_718;
  func_0x00010871e48c(plVar11,puVar1,param_3);
  func_0x00010871f780();
  if ((((!(bool)in_ZR) || (in_ZR = *(char *)(param_3 + 0x130) == '\x01', !(bool)in_ZR)) ||
      (in_ZR = cStack_4b0 == '\x01' && *(long *)(param_3 + 0x128) == lStack_4b8,
      cStack_4b0 != '\x01' || lStack_4b8 <= *(long *)(param_3 + 0x128))) &&
     ((func_0x00010871e52c(), !(bool)in_ZR || extraout_w9 != 2 &&
      (bVar8 = cStack_550 == '\x01', !bVar8)))) {
    func_0x00010871f768();
    if ((bVar8) && (FUN_10871e8d8(), (char)*plVar11 != '\x01' || uStack_400 == 2)) {
      *(undefined4 *)(param_3 + 0x58) = 6;
    }
    iVar24 = (int)plVar11;
    if ((*(byte *)(param_3 + 0x5e) & 1) == 0) {
LAB_1087112a4:
      func_0x00010871e914();
      func_0x00010871f754();
      func_0x00010871efd8();
      uVar20 = (uint)*(byte *)(param_3 + 0x38);
    }
    else {
      uVar20 = (uint)*(byte *)(param_3 + 0x38);
      if (*(char *)(param_3 + 0x5d) != '\x01') goto LAB_1087112a4;
      if ((*(byte *)(param_3 + 0x38) - 2 < 0x13) &&
         (func_0x00010871ee3c(), uVar20 = extraout_w8_00, (extraout_x10 & 1) != 0)) {
        func_0x00010871e79c();
        goto LAB_1087112a4;
      }
      iVar24 = 2;
    }
    if ((((uVar20 == 5) && (bVar8 = *(char *)(param_3 + 0x5c) == '\f', bVar8)) &&
        (func_0x00010871e508(*(undefined4 *)(param_3 + 0x58)), bVar8)) &&
       ((lVar13 = lStack_398 - lStack_3a0, lStack_398 != lStack_3a0 &&
        (FUN_108708704(alStack_718,*(undefined8 *)(param_3 + 0x50)),
        lStack_398 - lStack_3a0 != lVar13)))) {
      iVar24 = 0;
    }
    plVar11 = alStack_718;
    (*(code *)*param_5)(plVar11,param_5);
    iVar9 = (int)plVar11;
    if (((ulong)plVar11 & 1) == 0) {
      if (iVar24 != 2) {
        FUN_1088665d4(*puVar1,alStack_718);
      }
    }
    else {
      cVar2 = *(char *)(param_3 + 0x38);
      bVar8 = cVar2 == '\a' || cVar2 == '\x02';
      if (((cVar2 != '\a' && cVar2 != '\x02') ||
          (func_0x00010871e694(*(undefined4 *)(param_3 + 0x58)), !bVar8)) ||
         ((bVar6 = uStack_548 == *(ulong *)(param_3 + 0x50), bVar8 = bStack_540 == 1 && bVar6,
          bStack_540 == 1 && bVar6 || (func_0x00010871e520(*(undefined1 *)(param_3 + 0x5c)), bVar8))
         )) {
        func_0x00010871f4a0();
        uVar14 = uStack_610;
        bVar19 = *(byte *)(param_3 + 0x38);
        uVar20 = (uint)bVar19;
        uVar22 = *(uint *)(param_3 + 0x58);
        uVar16 = *(undefined8 *)(param_3 + 0x40);
        lVar13 = *(long *)(param_3 + 0x48);
        FUN_10871e8c0(alStack_718,(long)(char)bVar19,uVar22,uVar16,lVar13);
        uVar5 = 0x13 < bVar19;
        bVar8 = bVar19 == 0x14;
        if ((0x14 < bVar19) || (func_0x00010871e164(1 << (ulong)(uVar20 & 0x1f)), bVar8)) {
          uVar21 = lVar13 / 1000;
          if (uStack_6f8 <= uVar21) {
            uVar5 = uVar22 == 0xe;
            if (uVar22 < 0xf) {
              func_0x00010871f7c8();
              func_0x00010871e2ec();
              uVar21 = extraout_x8_03;
              if (((!(bool)uVar5) && (bVar8 = uVar20 == 0x14, uVar20 < 0x15)) &&
                 (func_0x00010871e144(), uVar21 = extraout_x8_04, !bVar8)) goto LAB_108711930;
            }
            uStack_3d8 = (uint)((int)uVar16 != 2);
            uVar16 = *(undefined8 *)(param_3 + 0x138);
            uStack_6f8 = uVar21;
            FUN_10871c970();
            iVar24 = 0;
            uStack_430 = (undefined4)uVar16;
            uStack_42c = (undefined1)((ulong)uVar16 >> 0x20);
            uVar22 = *(uint *)(param_3 + 0x58);
          }
LAB_108711930:
          uVar5 = 0xd < uVar22;
          uVar7 = uVar22 == 0xe;
          if (uVar22 < 0xf) {
            func_0x00010871e80c();
            func_0x00010871e790();
            if (!(bool)uVar7) goto LAB_1087113c0;
          }
          if ((bStack_540 & 1) == 0) {
            uVar21 = *(ulong *)(param_3 + 0x50);
          }
          else {
            uVar21 = *(ulong *)(param_3 + 0x50);
            uVar5 = uVar21 <= uStack_548;
            uVar7 = uStack_548 == uVar21;
            if (!(bool)uVar7 && (long)uVar21 <= (long)uStack_548) goto LAB_1087113c0;
          }
          bStack_540 = 1;
          uVar5 = *(char *)(param_3 + 0xe0) != '\0';
          uVar7 = *(char *)(param_3 + 0xe0) == '\x01';
          uStack_548 = uVar21;
          if ((bool)uVar7) {
            func_0x00010883f80c(param_3 + 0x88,alStack_718);
          }
          iVar24 = 0;
        }
        else {
          uVar7 = 0;
        }
LAB_1087113c0:
        if (((uStack_6e0 == 0) && ((uVar14 & 0xfe) != 0)) &&
           ((*(byte *)(unaff_x20 + 0x250) & 1) == 0)) {
          uStack_728 = 0;
          uStack_730 = 0;
          uStack_738 = 0;
          ppuStack_740 = &PTR_FUN_110a609a8;
          uStack_720 = 0x1cf;
          func_0x00010871e378(*(undefined8 *)(unaff_x20 + 0x118));
          (*extraout_x8_01)();
          func_0x000107c2882c(&ppuStack_740);
        }
        puVar12 = (undefined4 *)(long)*(char *)(param_3 + 0x38);
        func_0x00010871f4d8(puVar12,iVar9);
        uStack_748 = SUB84(puVar12,0);
        uStack_744 = (undefined1)((ulong)puVar12 >> 0x20);
        if (((ulong)puVar12 >> 0x20 & 1) == 0) {
          puVar23 = (undefined4 *)0x0;
        }
        else {
          func_0x00010871ecb0();
          puVar12 = &uStack_748;
          func_0x00010871edd0();
          puVar23 = puVar12;
        }
        iVar10 = (int)puVar12;
        func_0x00010871f78c();
        uVar4 = uVar7;
        if ((bool)uVar5 && !(bool)uVar7) {
LAB_1087117b8:
          func_0x00010871f768();
          if (((bool)uVar5 && !(bool)uVar4) || (func_0x00010871df90(), (bool)uVar4)) {
            func_0x00010871e85c();
            uStack_b18 = 0;
            uStack_b10 = 0;
            ppuStack_b28 = &PTR_FUN_110a609a8;
            uStack_b20 = 0;
            uStack_b08 = 400;
            func_0x00010871e550();
            func_0x000107c278b8(auStack_788);
            func_0x00010871ec6c();
            func_0x00010871f6c4();
            func_0x000107c28824(&ppuStack_b28,auStack_788);
            func_0x00010871e544();
            func_0x000107c278b8(acStack_7a0);
            func_0x00010871e854();
            func_0x00010871e538();
            puVar15 = auStack_7b8;
            func_0x000107c278b8(puVar15);
            func_0x00010871e854();
            func_0x000107c2884c(auStack_770,puVar15);
            func_0x00010871e938();
            func_0x00010871e5fc();
            func_0x00010871eba8();
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_7b8);
            iVar10 = (int)acStack_7a0;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
            func_0x00010871ebb0();
            func_0x00010871e704();
          }
        }
        else {
          func_0x00010871df48();
          uVar4 = 1;
          if ((bool)uVar7) goto LAB_1087117b8;
        }
        if (((ulong)puVar23 & 1) == 0) {
          bVar19 = *(byte *)(param_3 + 0x38);
LAB_1087115a0:
          iVar10 = iVar24;
          bVar8 = bVar19 == 0x14;
          if (((0x14 < bVar19) || (func_0x00010871dfc0(), bVar8)) && (iVar9 != 0)) {
            bVar8 = *(uint *)(param_3 + 0x58) == 0xe;
            uVar5 = bVar8;
            if (*(uint *)(param_3 + 0x58) < 0xf) {
              func_0x00010871e01c();
              uVar5 = true;
              if ((!bVar8) && (bVar8 = extraout_w8_02 == 0x14, uVar5 = bVar8, extraout_w8_02 < 0x15)
                 ) {
                func_0x00010871dfa8();
                uVar5 = true;
                if (!bVar8) goto LAB_1087115b0;
              }
            }
            puVar15 = auStack_568;
            func_0x00010871ec5c(puVar15,param_3 + 0x18);
            if (((ulong)puVar15 & 1) != 0) {
              iVar10 = 0;
              goto LAB_108711744;
            }
          }
LAB_1087115b0:
          if (iVar10 == 2) goto LAB_108711228;
          uVar5 = 0;
        }
        else {
          bVar6 = 10 < uStack_6e0;
          bVar8 = uStack_6e0 == 0xb;
          if ((!bVar8) || (func_0x00010871f78c(), bVar6 && !bVar8 || extraout_w8_01 == 9)) {
            bVar8 = false;
          }
          else {
            if ((bStack_540 == 1) && (func_0x00010871eca0(), iVar10 != 0)) {
              func_0x00010871f244(*puVar1);
              func_0x00010871f230();
              func_0x00010871f228();
              if ((cStack_7c0 == '\x01') &&
                 (((bStack_908 >> 2 & 1) != 0 && (*(int *)(lStack_8f0 + 0xa8) == 0)))) {
                uStack_b18 = 0;
                uStack_b10 = 0;
                ppuStack_b28 = &PTR_FUN_110a609a8;
                uStack_b20 = 0;
                uStack_b08 = 399;
                func_0x00010871e574();
                func_0x000107c278b8(auStack_b68);
                func_0x00010871e568();
                func_0x00010871f21c();
                func_0x00010871e2e0();
                func_0x000107c278b8(auStack_b80);
                lVar13 = (long)*(char *)(param_3 + 0x38);
                func_0x000108841d8c(auStack_b98,lVar13);
                func_0x00010871e994();
                func_0x000107c2884c(auStack_b50,lVar13);
                func_0x00010871ebb8();
                func_0x00010871e674();
                func_0x00010871ec18();
                uVar20 = (uint)auStack_b98;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
                func_0x00010871e8e0();
                func_0x00010871f214();
                func_0x00010871e704();
                func_0x00010871eb18();
                uStack_6e0 = 0xd;
                uStack_6e8 = uVar20;
              }
              func_0x00010871f1f8();
            }
            bVar8 = true;
          }
          if (((*(char *)(param_3 + 0x38) == '\x02') && ((bStack_540 & 1) != 0)) &&
             (uStack_548 == *(ulong *)(param_3 + 0x50))) {
            func_0x00010871f244(*puVar1);
            func_0x00010871f230();
            func_0x00010871f228();
            if (cStack_7c0 == '\x01') {
              func_0x00010871e370(auStack_968,alStack_718);
            }
            func_0x00010871f1f8();
          }
          uVar7 = 1 < uStack_400;
          uVar5 = uStack_400 == 2;
          if (((((bool)uVar5) &&
               (uVar14 = uStack_6e0, FUN_10871fb04(uStack_6e0,uStack_6e8), (int)uVar14 != 0)) &&
              ((func_0x00010871e55c(*(undefined1 *)(param_3 + 0x38)), !(bool)uVar7 || (bool)uVar5 &&
               (((bStack_6d8 & 1) != 0 && ((long)uStack_610 < 2)))))) &&
             ((uStack_6e8 == 2 || uStack_6e8 == 0x1d) || (uStack_6e8 & 0xfffffffb) == 1)) {
            uStack_6e0 = 1;
          }
          if (*(char *)(param_3 + 0x60) == '\x01') {
            uStack_610 = (ulong)*(byte *)(param_3 + 0x5f);
          }
          bVar6 = *(char *)(param_3 + 0x100) == '\x01';
          if (bVar6) {
            func_0x00010871f4f8(alStack_718);
          }
          else {
            func_0x00010871f780();
            if (bVar6) {
              bVar8 = true;
            }
            if (!bVar8) {
              func_0x00010871e368(alStack_718);
            }
          }
          if (*(char *)(param_3 + 0x80) == '\x01') {
            func_0x00010871f4e0(alStack_718);
          }
          else if (lStack_648 != lStack_640) {
            func_0x00010871e360(alStack_718);
          }
          bVar3 = *(byte *)(param_3 + 0x144);
          if (bVar3 == 1 && *(int *)(param_3 + 0x140) == 1) {
            uStack_6e0 = 0x10;
          }
          if (((cStack_3a8 == '\x01') && (lStack_3b0 != 0)) && ((bVar3 & 1) == 0)) {
            cStack_3a8 = '\0';
          }
          iVar24 = 0;
          iVar10 = 0;
          bVar19 = *(byte *)(param_3 + 0x38);
          if (((bVar19 != 7) || (bVar3 == 0)) ||
             (uVar5 = *(int *)(param_3 + 0x140) == 2, !(bool)uVar5)) goto LAB_1087115a0;
          func_0x00010871f844();
          cStack_3a8 = extraout_w8;
        }
LAB_108711744:
        FUN_1088665d4(*puVar1,alStack_718);
        func_0x00010871e320(*(undefined8 *)(unaff_x20 + 0x158));
        (*extraout_x8_02)();
        if (((iVar17 != 0) && (iVar10 == 0)) &&
           (((func_0x00010871ef84(), (bool)uVar5 || ((bStack_358 & 1) == 0)) &&
            ((bStack_530 & 1) == 0)))) {
          func_0x00010871edd8();
          func_0x00010871e500();
        }
        func_0x00010871e87c();
        goto code_r0x000100671834;
      }
    }
  }
LAB_108711228:
  func_0x00010871e5e8();
code_r0x000100671834:
  func_0x000107c288d0(alStack_718);
  func_0x00010871e2c8();
  return;
}



/* Entry: 108711148; end: 108711ac3;  */

void FUN_108711148(undefined8 param_1,undefined8 param_2,long param_3,int param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  char cVar2;
  byte bVar3;
  undefined1 in_ZR;
  undefined1 uVar4;
  undefined1 uVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  long *plVar11;
  undefined4 *puVar12;
  long lVar13;
  ulong uVar14;
  undefined1 *puVar15;
  undefined8 uVar16;
  byte bVar17;
  char extraout_w8;
  uint extraout_w8_00;
  uint uVar18;
  int extraout_w8_01;
  uint extraout_w8_02;
  long extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong uVar19;
  int extraout_w9;
  ulong extraout_x10;
  long unaff_x20;
  uint uVar20;
  undefined4 *puVar21;
  int iVar22;
  undefined1 auStack_908 [24];
  undefined1 auStack_8f0 [24];
  undefined1 auStack_8d8 [24];
  undefined1 auStack_8c0 [40];
  undefined **ppuStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined4 uStack_878;
  undefined1 auStack_6d8 [96];
  byte bStack_678;
  long lStack_660;
  char cStack_530;
  undefined1 auStack_528 [24];
  char acStack_510 [24];
  undefined1 auStack_4f8 [24];
  undefined1 auStack_4e0 [40];
  undefined4 uStack_4b8;
  undefined1 uStack_4b4;
  undefined **ppuStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined4 uStack_490;
  long alStack_488 [4];
  ulong uStack_468;
  uint uStack_458;
  ulong uStack_450;
  byte bStack_448;
  long lStack_3b8;
  long lStack_3b0;
  ulong uStack_380;
  undefined1 auStack_2d8 [24];
  char cStack_2c0;
  ulong uStack_2b8;
  byte bStack_2b0;
  byte bStack_2a0;
  long lStack_228;
  char cStack_220;
  undefined4 uStack_1a0;
  undefined1 uStack_19c;
  uint uStack_170;
  uint uStack_148;
  long lStack_120;
  char cStack_118;
  long lStack_110;
  long lStack_108;
  byte bStack_c8;
  undefined1 auStack_58 [88];
  
  func_0x000107c32ee4();
  func_0x000107c32eb0();
  alStack_488[2] = 0;
  func_0x00010871e2b4();
  alStack_488[3] = 0;
  alStack_488[0] = extraout_x8 + 0x10;
  alStack_488[1] = 0;
  uStack_468 = CONCAT44(uStack_468._4_4_,0x1ce);
  func_0x00010871e058();
  func_0x00010871e588((long)*(char *)(param_3 + 0x38));
  func_0x00010871e174(alStack_488);
  func_0x00010871e484();
  func_0x00010871e00c(auStack_58,unaff_x20 + 0x118);
  func_0x00010871e2c0();
  func_0x00010871e2d0();
  func_0x00010871e2d8();
  func_0x000107c2882c(alStack_488);
  puVar1 = (undefined8 *)(unaff_x20 + 0xb8);
  plVar11 = alStack_488;
  func_0x00010871e48c(plVar11,puVar1,param_3);
  func_0x00010871f780();
  if ((((!(bool)in_ZR) || (in_ZR = *(char *)(param_3 + 0x130) == '\x01', !(bool)in_ZR)) ||
      (in_ZR = cStack_220 == '\x01' && *(long *)(param_3 + 0x128) == lStack_228,
      cStack_220 != '\x01' || lStack_228 <= *(long *)(param_3 + 0x128))) &&
     ((func_0x00010871e52c(), !(bool)in_ZR || extraout_w9 != 2 &&
      (bVar8 = cStack_2c0 == '\x01', !bVar8)))) {
    func_0x00010871f768();
    if ((bVar8) && (FUN_10871e8d8(), (char)*plVar11 != '\x01' || uStack_170 == 2)) {
      *(undefined4 *)(param_3 + 0x58) = 6;
    }
    iVar22 = (int)plVar11;
    if ((*(byte *)(param_3 + 0x5e) & 1) == 0) {
LAB_1087112a4:
      func_0x00010871e914();
      func_0x00010871f754();
      func_0x00010871efd8();
      uVar18 = (uint)*(byte *)(param_3 + 0x38);
    }
    else {
      uVar18 = (uint)*(byte *)(param_3 + 0x38);
      if (*(char *)(param_3 + 0x5d) != '\x01') goto LAB_1087112a4;
      if ((*(byte *)(param_3 + 0x38) - 2 < 0x13) &&
         (func_0x00010871ee3c(), uVar18 = extraout_w8_00, (extraout_x10 & 1) != 0)) {
        func_0x00010871e79c();
        goto LAB_1087112a4;
      }
      iVar22 = 2;
    }
    if ((((uVar18 == 5) && (bVar8 = *(char *)(param_3 + 0x5c) == '\f', bVar8)) &&
        (func_0x00010871e508(*(undefined4 *)(param_3 + 0x58)), bVar8)) &&
       ((lVar13 = lStack_108 - lStack_110, lStack_108 != lStack_110 &&
        (FUN_108708704(alStack_488,*(undefined8 *)(param_3 + 0x50)),
        lStack_108 - lStack_110 != lVar13)))) {
      iVar22 = 0;
    }
    plVar11 = alStack_488;
    (*(code *)*param_5)(plVar11,param_5);
    iVar9 = (int)plVar11;
    if (((ulong)plVar11 & 1) == 0) {
      if (iVar22 != 2) {
        FUN_1088665d4(*puVar1,alStack_488);
      }
    }
    else {
      cVar2 = *(char *)(param_3 + 0x38);
      bVar8 = cVar2 == '\a' || cVar2 == '\x02';
      if (((cVar2 != '\a' && cVar2 != '\x02') ||
          (func_0x00010871e694(*(undefined4 *)(param_3 + 0x58)), !bVar8)) ||
         ((bVar6 = uStack_2b8 == *(ulong *)(param_3 + 0x50), bVar8 = bStack_2b0 == 1 && bVar6,
          bStack_2b0 == 1 && bVar6 || (func_0x00010871e520(*(undefined1 *)(param_3 + 0x5c)), bVar8))
         )) {
        func_0x00010871f4a0();
        uVar14 = uStack_380;
        bVar17 = *(byte *)(param_3 + 0x38);
        uVar18 = (uint)bVar17;
        uVar20 = *(uint *)(param_3 + 0x58);
        uVar16 = *(undefined8 *)(param_3 + 0x40);
        lVar13 = *(long *)(param_3 + 0x48);
        FUN_10871e8c0(alStack_488,(long)(char)bVar17,uVar20,uVar16,lVar13);
        uVar5 = 0x13 < bVar17;
        bVar8 = bVar17 == 0x14;
        if ((0x14 < bVar17) || (func_0x00010871e164(1 << (ulong)(uVar18 & 0x1f)), bVar8)) {
          uVar19 = lVar13 / 1000;
          if (uStack_468 <= uVar19) {
            uVar5 = uVar20 == 0xe;
            if (uVar20 < 0xf) {
              func_0x00010871f7c8();
              func_0x00010871e2ec();
              uVar19 = extraout_x8_02;
              if (((!(bool)uVar5) && (bVar8 = uVar18 == 0x14, uVar18 < 0x15)) &&
                 (func_0x00010871e144(), uVar19 = extraout_x8_03, !bVar8)) goto LAB_108711930;
            }
            uStack_148 = (uint)((int)uVar16 != 2);
            uVar16 = *(undefined8 *)(param_3 + 0x138);
            uStack_468 = uVar19;
            FUN_10871c970();
            iVar22 = 0;
            uStack_1a0 = (undefined4)uVar16;
            uStack_19c = (undefined1)((ulong)uVar16 >> 0x20);
            uVar20 = *(uint *)(param_3 + 0x58);
          }
LAB_108711930:
          uVar5 = 0xd < uVar20;
          uVar7 = uVar20 == 0xe;
          if (uVar20 < 0xf) {
            func_0x00010871e80c();
            func_0x00010871e790();
            if (!(bool)uVar7) goto LAB_1087113c0;
          }
          if ((bStack_2b0 & 1) == 0) {
            uVar19 = *(ulong *)(param_3 + 0x50);
          }
          else {
            uVar19 = *(ulong *)(param_3 + 0x50);
            uVar5 = uVar19 <= uStack_2b8;
            uVar7 = uStack_2b8 == uVar19;
            if (!(bool)uVar7 && (long)uVar19 <= (long)uStack_2b8) goto LAB_1087113c0;
          }
          bStack_2b0 = 1;
          uVar5 = *(char *)(param_3 + 0xe0) != '\0';
          uVar7 = *(char *)(param_3 + 0xe0) == '\x01';
          uStack_2b8 = uVar19;
          if ((bool)uVar7) {
            func_0x00010883f80c(param_3 + 0x88,alStack_488);
          }
          iVar22 = 0;
        }
        else {
          uVar7 = 0;
        }
LAB_1087113c0:
        if (((uStack_450 == 0) && ((uVar14 & 0xfe) != 0)) &&
           ((*(byte *)(unaff_x20 + 0x250) & 1) == 0)) {
          uStack_498 = 0;
          uStack_4a0 = 0;
          uStack_4a8 = 0;
          ppuStack_4b0 = &PTR_FUN_110a609a8;
          uStack_490 = 0x1cf;
          func_0x00010871e378(*(undefined8 *)(unaff_x20 + 0x118));
          (*extraout_x8_00)();
          func_0x000107c2882c(&ppuStack_4b0);
        }
        puVar12 = (undefined4 *)(long)*(char *)(param_3 + 0x38);
        func_0x00010871f4d8(puVar12,iVar9);
        uStack_4b8 = SUB84(puVar12,0);
        uStack_4b4 = (undefined1)((ulong)puVar12 >> 0x20);
        if (((ulong)puVar12 >> 0x20 & 1) == 0) {
          puVar21 = (undefined4 *)0x0;
        }
        else {
          func_0x00010871ecb0();
          puVar12 = &uStack_4b8;
          func_0x00010871edd0();
          puVar21 = puVar12;
        }
        iVar10 = (int)puVar12;
        func_0x00010871f78c();
        uVar4 = uVar7;
        if ((bool)uVar5 && !(bool)uVar7) {
LAB_1087117b8:
          func_0x00010871f768();
          if (((bool)uVar5 && !(bool)uVar4) || (func_0x00010871df90(), (bool)uVar4)) {
            func_0x00010871e85c();
            uStack_888 = 0;
            uStack_880 = 0;
            ppuStack_898 = &PTR_FUN_110a609a8;
            uStack_890 = 0;
            uStack_878 = 400;
            func_0x00010871e550();
            func_0x000107c278b8(auStack_4f8);
            func_0x00010871ec6c();
            func_0x00010871f6c4();
            func_0x000107c28824(&ppuStack_898,auStack_4f8);
            func_0x00010871e544();
            func_0x000107c278b8(acStack_510);
            func_0x00010871e854();
            func_0x00010871e538();
            puVar15 = auStack_528;
            func_0x000107c278b8(puVar15);
            func_0x00010871e854();
            func_0x000107c2884c(auStack_4e0,puVar15);
            func_0x00010871e938();
            func_0x00010871e5fc();
            func_0x00010871eba8();
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_528);
            iVar10 = (int)acStack_510;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
            func_0x00010871ebb0();
            func_0x00010871e704();
          }
        }
        else {
          func_0x00010871df48();
          uVar4 = 1;
          if ((bool)uVar7) goto LAB_1087117b8;
        }
        if (((ulong)puVar21 & 1) == 0) {
          bVar17 = *(byte *)(param_3 + 0x38);
LAB_1087115a0:
          iVar10 = iVar22;
          bVar8 = bVar17 == 0x14;
          if (((0x14 < bVar17) || (func_0x00010871dfc0(), bVar8)) && (iVar9 != 0)) {
            bVar8 = *(uint *)(param_3 + 0x58) == 0xe;
            uVar5 = bVar8;
            if (*(uint *)(param_3 + 0x58) < 0xf) {
              func_0x00010871e01c();
              uVar5 = true;
              if ((!bVar8) && (bVar8 = extraout_w8_02 == 0x14, uVar5 = bVar8, extraout_w8_02 < 0x15)
                 ) {
                func_0x00010871dfa8();
                uVar5 = true;
                if (!bVar8) goto LAB_1087115b0;
              }
            }
            puVar15 = auStack_2d8;
            func_0x00010871ec5c(puVar15,param_3 + 0x18);
            if (((ulong)puVar15 & 1) != 0) {
              iVar10 = 0;
              goto LAB_108711744;
            }
          }
LAB_1087115b0:
          if (iVar10 == 2) goto LAB_108711228;
          uVar5 = 0;
        }
        else {
          bVar6 = 10 < uStack_450;
          bVar8 = uStack_450 == 0xb;
          if ((!bVar8) || (func_0x00010871f78c(), bVar6 && !bVar8 || extraout_w8_01 == 9)) {
            bVar8 = false;
          }
          else {
            if ((bStack_2b0 == 1) && (func_0x00010871eca0(), iVar10 != 0)) {
              func_0x00010871f244(*puVar1);
              func_0x00010871f230();
              func_0x00010871f228();
              if ((cStack_530 == '\x01') &&
                 (((bStack_678 >> 2 & 1) != 0 && (*(int *)(lStack_660 + 0xa8) == 0)))) {
                uStack_888 = 0;
                uStack_880 = 0;
                ppuStack_898 = &PTR_FUN_110a609a8;
                uStack_890 = 0;
                uStack_878 = 399;
                func_0x00010871e574();
                func_0x000107c278b8(auStack_8d8);
                func_0x00010871e568();
                func_0x00010871f21c();
                func_0x00010871e2e0();
                func_0x000107c278b8(auStack_8f0);
                lVar13 = (long)*(char *)(param_3 + 0x38);
                func_0x000108841d8c(auStack_908,lVar13);
                func_0x00010871e994();
                func_0x000107c2884c(auStack_8c0,lVar13);
                func_0x00010871ebb8();
                func_0x00010871e674();
                func_0x00010871ec18();
                uVar18 = (uint)auStack_908;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
                func_0x00010871e8e0();
                func_0x00010871f214();
                func_0x00010871e704();
                func_0x00010871eb18();
                uStack_450 = 0xd;
                uStack_458 = uVar18;
              }
              func_0x00010871f1f8();
            }
            bVar8 = true;
          }
          if (((*(char *)(param_3 + 0x38) == '\x02') && ((bStack_2b0 & 1) != 0)) &&
             (uStack_2b8 == *(ulong *)(param_3 + 0x50))) {
            func_0x00010871f244(*puVar1);
            func_0x00010871f230();
            func_0x00010871f228();
            if (cStack_530 == '\x01') {
              func_0x00010871e370(auStack_6d8,alStack_488);
            }
            func_0x00010871f1f8();
          }
          uVar7 = 1 < uStack_170;
          uVar5 = uStack_170 == 2;
          if (((((bool)uVar5) &&
               (uVar14 = uStack_450, FUN_10871fb04(uStack_450,uStack_458), (int)uVar14 != 0)) &&
              ((func_0x00010871e55c(*(undefined1 *)(param_3 + 0x38)), !(bool)uVar7 || (bool)uVar5 &&
               (((bStack_448 & 1) != 0 && ((long)uStack_380 < 2)))))) &&
             ((uStack_458 == 2 || uStack_458 == 0x1d) || (uStack_458 & 0xfffffffb) == 1)) {
            uStack_450 = 1;
          }
          if (*(char *)(param_3 + 0x60) == '\x01') {
            uStack_380 = (ulong)*(byte *)(param_3 + 0x5f);
          }
          bVar6 = *(char *)(param_3 + 0x100) == '\x01';
          if (bVar6) {
            func_0x00010871f4f8(alStack_488);
          }
          else {
            func_0x00010871f780();
            if (bVar6) {
              bVar8 = true;
            }
            if (!bVar8) {
              func_0x00010871e368(alStack_488);
            }
          }
          if (*(char *)(param_3 + 0x80) == '\x01') {
            func_0x00010871f4e0(alStack_488);
          }
          else if (lStack_3b8 != lStack_3b0) {
            func_0x00010871e360(alStack_488);
          }
          bVar3 = *(byte *)(param_3 + 0x144);
          if (bVar3 == 1 && *(int *)(param_3 + 0x140) == 1) {
            uStack_450 = 0x10;
          }
          if (((cStack_118 == '\x01') && (lStack_120 != 0)) && ((bVar3 & 1) == 0)) {
            cStack_118 = '\0';
          }
          iVar22 = 0;
          iVar10 = 0;
          bVar17 = *(byte *)(param_3 + 0x38);
          if (((bVar17 != 7) || (bVar3 == 0)) ||
             (uVar5 = *(int *)(param_3 + 0x140) == 2, !(bool)uVar5)) goto LAB_1087115a0;
          func_0x00010871f844();
          cStack_118 = extraout_w8;
        }
LAB_108711744:
        FUN_1088665d4(*puVar1,alStack_488);
        func_0x00010871e320(*(undefined8 *)(unaff_x20 + 0x158));
        (*extraout_x8_01)();
        if (((param_4 != 0) && (iVar10 == 0)) &&
           (((func_0x00010871ef84(), (bool)uVar5 || ((bStack_c8 & 1) == 0)) &&
            ((bStack_2a0 & 1) == 0)))) {
          func_0x00010871edd8();
          func_0x00010871e500();
        }
        func_0x00010871e87c();
        goto code_r0x000100671834;
      }
    }
  }
LAB_108711228:
  func_0x00010871e5e8();
code_r0x000100671834:
  func_0x000107c288d0(alStack_488);
  func_0x00010871e2c8();
  return;
}



/* Entry: 108711ac4; end: 108712613;  */

void FUN_108711ac4(long *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long *plVar1;
  uint uVar2;
  char *pcVar3;
  byte bVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  long *plVar12;
  undefined1 *puVar13;
  long lVar14;
  uint uVar15;
  char extraout_w8;
  uint extraout_w8_00;
  code *extraout_x8;
  code *extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  ulong uVar16;
  int extraout_w9;
  long *plVar17;
  int unaff_w26;
  int iVar18;
  char *pcVar19;
  undefined1 auStack_bf8 [24];
  undefined1 auStack_be0 [32];
  byte bStack_bc0;
  undefined8 uStack_bb8;
  char *pcStack_bb0;
  long lStack_ba8;
  uint uStack_ba0;
  char cStack_b9c;
  ushort uStack_b9b;
  byte bStack_b99;
  char cStack_b98;
  char cStack_b78;
  undefined1 auStack_b70 [120];
  char cStack_af8;
  long lStack_ad0;
  byte bStack_ac8;
  undefined8 uStack_ac0;
  int iStack_ab8;
  undefined4 uStack_ab4;
  undefined1 auStack_ab0 [88];
  undefined1 uStack_a58;
  undefined1 auStack_a50 [296];
  undefined8 uStack_928;
  undefined1 uStack_920;
  undefined1 auStack_908 [24];
  undefined1 auStack_8f0 [24];
  long alStack_8d8 [3];
  undefined1 auStack_8c0 [40];
  undefined1 auStack_898 [24];
  undefined1 uStack_880;
  undefined4 uStack_878;
  undefined1 auStack_6d8 [96];
  byte bStack_678;
  long lStack_660;
  char cStack_530;
  undefined1 auStack_528 [24];
  undefined1 auStack_510 [24];
  undefined1 auStack_4f8 [24];
  undefined1 auStack_4e0 [40];
  undefined4 uStack_4b8;
  undefined1 uStack_4b4;
  undefined **ppuStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined4 uStack_490;
  undefined **ppuStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  ulong uStack_470;
  ulong uStack_468;
  uint uStack_458;
  long *plStack_450;
  byte bStack_448;
  long lStack_3b8;
  long lStack_3b0;
  undefined1 auStack_3a0 [32];
  ulong uStack_380;
  char cStack_2c0;
  long lStack_2b8;
  byte bStack_2b0;
  byte bStack_2a0;
  long lStack_228;
  char cStack_220;
  undefined4 uStack_1a0;
  undefined1 uStack_19c;
  uint uStack_170;
  uint uStack_148;
  long lStack_120;
  char cStack_118;
  long lStack_110;
  long lStack_108;
  byte bStack_c8;
  char cStack_b8;
  undefined1 auStack_58 [88];
  
  func_0x000107c32ee4();
  uVar11 = (uint)param_1[0x15];
  ppuStack_488 = (undefined **)((ulong)ppuStack_488 & 0xffffffffffffff00);
  uStack_470 = uStack_470 & 0xffffffffffffff00;
  func_0x00010871e320();
  (*extraout_x8)();
  auStack_ab0[0] = 0;
  uStack_a58 = 0;
  auStack_898[0] = 0;
  uStack_880 = 0;
  func_0x00010871ea7c(auStack_ab0);
  func_0x00010871e7b0(auStack_a50,param_2,&ppuStack_488,0xf,2);
  func_0x000107c279dc(auStack_898);
  func_0x00010871eb00();
  func_0x000107c279dc(&ppuStack_488);
  uStack_920 = 1;
  uStack_928 = param_3;
  FUN_10871bdd4(auStack_bf8,auStack_a50);
  uStack_478 = 0;
  uStack_470 = 0;
  uStack_480 = 0;
  ppuStack_488 = &PTR_FUN_110a609a8;
  uStack_468 = CONCAT44(uStack_468._4_4_,0x1ce);
  func_0x00010871e058();
  func_0x00010871e588((long)(char)bStack_bc0);
  func_0x00010871e174(&ppuStack_488);
  func_0x00010871e484();
  func_0x00010871e00c(auStack_58,param_1 + 0x23);
  func_0x00010871e2c0();
  func_0x00010871e2d0();
  func_0x00010871e2d8();
  func_0x000107c2882c(&ppuStack_488);
  plVar1 = param_1 + 0x17;
  func_0x00010871e9b4(&ppuStack_488,plVar1,auStack_bf8);
  bVar9 = bStack_bc0 == 0xf;
  if ((((!bVar9) || ((bStack_ac8 & 1) == 0)) ||
      (bVar9 = cStack_220 == '\x01' && lStack_ad0 == lStack_228,
      cStack_220 != '\x01' || lStack_228 <= lStack_ad0)) &&
     (func_0x00010871e52c(), !bVar9 || extraout_w9 != 2)) {
    if (cStack_b8 == '\x01') {
      func_0x00010871e4a4();
      uStack_878 = 0x173;
      func_0x000107c2884c(auStack_6d8,auStack_898);
      func_0x00010871f850();
      func_0x00010871e500();
      func_0x000107c2882c(auStack_6d8);
      func_0x00010871e5e8();
      func_0x00010871eba0();
      goto code_r0x000100671834;
    }
    if (cStack_2c0 == '\x01') goto LAB_108711d94;
    uVar7 = 0x1d < uStack_ba0;
    bVar9 = false;
    if (uStack_ba0 == 0x1e) {
      plVar12 = param_1 + 0x68;
      func_0x000107c289e8();
      bVar10 = (char)*plVar12 != '\x01';
      uVar7 = !bVar10 && 1 < uStack_170;
      bVar9 = bVar10 || uStack_170 == 2;
      if (bVar10 || uStack_170 == 2) {
        uStack_ba0 = 6;
      }
    }
    plVar12 = param_1 + 0xf;
    func_0x00010871e628(bStack_bc0);
    if (((!bVar9) || ((uStack_b9b & 1) == 0)) ||
       ((func_0x00010871f6e4(), !(bool)uVar7 || bVar9 && (func_0x00010871df48(), !bVar9)))) {
      func_0x00010871e0ac(auStack_bf8);
      func_0x00010871e610(CONCAT44(uStack_ab4,iStack_ab8));
      plVar17 = plVar1;
      FUN_1087087c8(plVar1,plVar12,&ppuStack_488);
      unaff_w26 = (int)plVar17;
      uVar11 = (uint)bStack_bc0;
    }
    bVar10 = (uVar11 & 0xff) == 5;
    bVar9 = bVar10 && cStack_b9c == '\f';
    if (((bVar10 && cStack_b9c == '\f') && (func_0x00010871e508(uStack_ba0), bVar9)) &&
       ((lVar14 = lStack_108 - lStack_110, lStack_108 != lStack_110 &&
        (FUN_108708704(&ppuStack_488,lStack_ba8), lStack_108 - lStack_110 != lVar14)))) {
      unaff_w26 = 0;
    }
    plVar17 = plStack_450;
    FUN_10871fb04(plStack_450,uStack_458);
    if ((int)plVar17 != 0) {
      puVar13 = auStack_3a0;
      func_0x000107c28f58(puVar13,plVar12);
      uVar11 = (uint)puVar13;
      if (uVar11 == 0) {
        bVar9 = bStack_bc0 == 7 || bStack_bc0 == 2;
        if ((((bStack_bc0 == 7 || bStack_bc0 == 2) && (func_0x00010871e694(uStack_ba0), bVar9)) &&
            (bVar9 = bStack_2b0 == 1 && lStack_2b8 == lStack_ba8,
            bStack_2b0 != 1 || lStack_2b8 != lStack_ba8)) &&
           (func_0x00010871e520(cStack_b9c), !bVar9)) goto LAB_108711d94;
        func_0x00010871f488();
        uVar6 = uStack_380;
        uVar15 = uStack_ba0;
        pcVar19 = pcStack_bb0;
        uVar5 = uStack_bb8;
        bVar4 = bStack_bc0;
        plVar17 = (long *)(long)(char)bStack_bc0;
        uVar2 = (uint)bStack_bc0;
        FUN_10871e8c0(&ppuStack_488,plVar17,uStack_ba0,uStack_bb8,pcStack_bb0);
        bVar9 = bVar4 == 0x14;
        if ((0x14 < bVar4) || (func_0x00010871e164(1 << (ulong)(uVar2 & 0x1f)), bVar9)) {
          uVar16 = (long)pcVar19 / 1000;
          if (uVar16 < uStack_468) {
            func_0x00010871f648();
            plVar12 = plVar17;
          }
          else {
            bVar9 = uVar15 == 0xe;
            pcVar19 = (char *)(ulong)uVar11;
            if (((0xe < uVar15) || (func_0x00010871e2ec(), uVar16 = extraout_x8_04, bVar9)) ||
               ((bVar9 = uVar2 == 0x14, 0x14 < uVar2 ||
                (func_0x00010871e144(), uVar16 = extraout_x8_05, bVar9)))) {
              uStack_148 = (uint)((int)uVar5 != 2);
              uStack_468 = uVar16;
              func_0x00010871c970();
              unaff_w26 = 0;
              uStack_1a0 = (undefined4)uStack_ac0;
              uStack_19c = (undefined1)((ulong)uStack_ac0 >> 0x20);
              uVar15 = uStack_ba0;
            }
          }
          bVar10 = uVar15 == 0xe;
          bVar9 = bVar10;
          if (uVar15 < 0xf) {
            func_0x00010871e790(1 << (ulong)(uVar15 & 0x1f));
            bVar9 = true;
            if (!bVar10) goto LAB_108711e60;
          }
          if (((bStack_2b0 & 1) == 0) ||
             (bVar9 = lStack_2b8 == lStack_ba8, lStack_2b8 <= lStack_ba8)) {
            lStack_2b8 = lStack_ba8;
            bStack_2b0 = 1;
            func_0x00010871f704();
            if (bVar9) {
              func_0x00010883f80c(auStack_b70,&ppuStack_488);
            }
            unaff_w26 = 0;
          }
        }
        else {
          func_0x00010871f648();
          plVar12 = plVar17;
        }
LAB_108711e60:
        if (((plStack_450 == (long *)0x0) && ((uVar6 & 0xfe) != 0)) &&
           ((*(byte *)(param_1 + 0x4a) & 1) == 0)) {
          uStack_498 = 0;
          uStack_4a0 = 0;
          uStack_4a8 = 0;
          ppuStack_4b0 = &PTR_FUN_110a609a8;
          uStack_490 = 0x1cf;
          func_0x00010871e378(param_1[0x23]);
          (*extraout_x8_00)();
          func_0x000107c2882c(&ppuStack_4b0);
        }
        bVar4 = bStack_448;
        plVar17 = (long *)(long)(char)bStack_bc0;
        FUN_1087200ec(plVar17,pcVar19);
        uStack_4b8 = SUB84(plVar17,0);
        uStack_4b4 = (undefined1)((ulong)plVar17 >> 0x20);
        if (((ulong)plVar17 >> 0x20 & 1) == 0) {
          plVar12 = (long *)0x0;
        }
        else {
          plVar17 = (long *)&uStack_4b8;
          FUN_108720360(plVar17,uStack_ba0,auStack_be0,uStack_bb8,pcStack_bb0,uStack_b9b,
                        &ppuStack_488,plVar12,param_1 + 0x12,param_1 + 0x15,plVar1,param_1 + 0x31);
          plVar12 = plVar17;
        }
        bVar9 = bStack_bc0 == 0x14;
        if (((0x14 < bStack_bc0) || (func_0x00010871df48(), bVar9)) &&
           ((bVar9 = uStack_ba0 == 0x1e, 0x1e < uStack_ba0 || (func_0x00010871df90(), bVar9)))) {
          func_0x000107c289e8();
          lVar14 = param_1[0x23];
          func_0x00010871e4a4();
          uStack_878 = 400;
          func_0x00010871e550();
          func_0x000107c278b8(auStack_4f8);
          func_0x00010871ec6c();
          pcVar3 = "true";
          if (bVar4 == 0) {
            pcVar3 = pcVar19;
          }
          func_0x000107c28824(auStack_898,auStack_4f8,pcVar3);
          func_0x00010871e544();
          func_0x000107c278b8(auStack_510);
          func_0x00010871e854();
          func_0x00010871e538();
          puVar13 = auStack_528;
          func_0x000107c278b8(puVar13);
          func_0x00010871e854();
          func_0x000107c2884c(auStack_4e0,puVar13);
          func_0x00010871e378(lVar14);
          (*extraout_x8_03)();
          func_0x000107c2882c(auStack_4e0);
          func_0x00010871eb20();
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_510);
          plVar17 = (long *)0x0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
          func_0x00010871eba0();
          func_0x00010871f648();
        }
        if (((ulong)plVar12 & 1) == 0) {
LAB_10871205c:
          iVar18 = unaff_w26;
          bVar9 = bStack_bc0 == 0x14;
          if ((((0x14 < bStack_bc0) || (func_0x00010871dfc0(), bVar9)) && ((int)pcVar19 != 0)) &&
             (((bVar9 = uStack_ba0 == 0xe, 0xe < uStack_ba0 || (func_0x00010871e01c(), bVar9)) ||
              ((bVar9 = extraout_w8_00 == 0x14, 0x14 < extraout_w8_00 ||
               (func_0x00010871dfa8(), bVar9)))))) {
            func_0x00010871e800(auStack_bf8);
            FUN_1086a470c();
            if (((ulong)plVar17 & 1) != 0) {
              iVar18 = 0;
              goto LAB_108712204;
            }
          }
          if (iVar18 == 2) goto LAB_108711d94;
        }
        else {
          if ((plStack_450 == (long *)0xb) && (bStack_bc0 < 0x15 && bStack_bc0 != 9)) {
            if (bStack_2b0 == 1) {
              plVar17 = param_1 + 0x31;
              func_0x00010871c9a0();
              if ((int)plVar17 != 0) {
                plVar17 = (long *)*plVar1;
                func_0x00010871f1b8();
                func_0x00010871f130();
                func_0x00010871f1b0();
                if (((cStack_530 == '\x01') && ((bStack_678 >> 2 & 1) != 0)) &&
                   (*(int *)(lStack_660 + 0xa8) == 0)) {
                  func_0x00010871e4a4();
                  uStack_878 = 399;
                  func_0x00010871e574();
                  func_0x000107c278b8(alStack_8d8);
                  func_0x00010871e568();
                  func_0x000107c28824(auStack_898,alStack_8d8,
                                      *(undefined8 *)
                                       (extraout_x8_01 + ((ulong)pcVar19 & 0xffffffff) * 8));
                  func_0x00010871e2e0();
                  func_0x000107c278b8(auStack_8f0);
                  lVar14 = (long)(char)bStack_bc0;
                  func_0x000108841d8c(auStack_908,lVar14);
                  func_0x00010871e994();
                  func_0x000107c2884c(auStack_8c0,lVar14);
                  func_0x00010871f850();
                  func_0x00010871e500();
                  func_0x000107c2882c(auStack_8c0);
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_908);
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_8f0);
                  plVar17 = alStack_8d8;
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
                  func_0x00010871eba0();
                  func_0x00010871ec08();
                  uStack_458 = (uint)plVar17;
                  plStack_450 = (long *)0xd;
                  func_0x00010871f648();
                }
                func_0x00010871f194();
              }
            }
            bVar9 = true;
          }
          else {
            bVar9 = false;
          }
          if (((bStack_bc0 == 2) && ((bStack_2b0 & 1) != 0)) && (lStack_2b8 == lStack_ba8)) {
            plVar17 = (long *)*plVar1;
            func_0x00010871f1b8();
            func_0x00010871f130();
            func_0x00010871f1b0();
            if (cStack_530 == '\x01') {
              plVar17 = (long *)0x0;
              func_0x00010871e370(auStack_6d8);
            }
            func_0x00010871f194();
          }
          uVar8 = 1 < uStack_170;
          uVar7 = uStack_170 == 2;
          if ((((bool)uVar7) &&
              (plVar17 = plStack_450, FUN_10871fb04(plStack_450,uStack_458), (int)plVar17 != 0)) &&
             ((func_0x00010871e55c(bStack_bc0), !(bool)uVar8 || (bool)uVar7 &&
              ((((bStack_448 & 1) != 0 && ((long)uStack_380 < 2)) &&
               ((uStack_458 == 2 || uStack_458 == 0x1d) || (uStack_458 & 0xfffffffb) == 1)))))) {
            plStack_450 = (long *)0x1;
          }
          if (cStack_b98 == '\x01') {
            uStack_380 = (ulong)bStack_b99;
          }
          if (cStack_af8 == '\x01') {
            func_0x00010871e18c(auStack_bf8);
          }
          else {
            if (bStack_bc0 == 0xf) {
              bVar9 = true;
            }
            if (!bVar9) {
              func_0x00010871e368(&ppuStack_488);
            }
          }
          if (cStack_b78 == '\x01') {
            func_0x00010871e180(auStack_bf8);
          }
          else if (lStack_3b8 != lStack_3b0) {
            func_0x00010871e360(&ppuStack_488);
          }
          if ((byte)uStack_ab4 == 1 && iStack_ab8 == 1) {
            plStack_450 = (long *)0x10;
          }
          if (((cStack_118 == '\x01') && (lStack_120 != 0)) && (((byte)uStack_ab4 & 1) == 0)) {
            cStack_118 = '\0';
          }
          unaff_w26 = 0;
          iVar18 = 0;
          if (((bStack_bc0 != 7) || ((byte)uStack_ab4 == 0)) || (iStack_ab8 != 2))
          goto LAB_10871205c;
          func_0x00010871f844();
          cStack_118 = extraout_w8;
        }
LAB_108712204:
        func_0x00010871e77c(*plVar1);
        func_0x00010871e320(param_1[0x2b]);
        (*extraout_x8_02)();
        if (((param_4 != 0) && (iVar18 == 0)) &&
           (((*(char *)((long)param_1 + 0x252) == '\x01' || ((bStack_c8 & 1) == 0)) &&
            ((bStack_2a0 & 1) == 0)))) {
          func_0x00010871e674(*(undefined8 *)(*param_1 + 400));
        }
        func_0x00010871e87c();
        goto code_r0x000100671834;
      }
    }
    if (unaff_w26 != 2) {
      func_0x00010871e77c(*plVar1);
    }
  }
LAB_108711d94:
  func_0x00010871e5e8();
code_r0x000100671834:
  func_0x00010871eca8();
  func_0x00010871e2c8();
  FUN_10871be98(auStack_bf8);
  FUN_10871be98(auStack_a50);
  return;
}



/* Entry: 108712614; end: 10871326b;  */

void FUN_108712614(long *param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  char *pcVar2;
  long lVar3;
  byte bVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  bool bVar9;
  bool bVar10;
  undefined ***pppuVar11;
  undefined1 *puVar12;
  long *plVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  char extraout_w8;
  uint extraout_w8_00;
  code *extraout_x8;
  code *extraout_x8_00;
  undefined **extraout_x8_01;
  long extraout_x8_02;
  code *extraout_x8_03;
  undefined **extraout_x8_04;
  code *extraout_x8_05;
  ulong extraout_x8_06;
  ulong extraout_x8_07;
  ulong uVar17;
  int extraout_w9;
  long *plVar18;
  long *plVar19;
  int unaff_w26;
  int iVar20;
  undefined1 auStack_fe0 [24];
  undefined1 auStack_fc8 [32];
  byte bStack_fa8;
  undefined8 uStack_fa0;
  long lStack_f98;
  long lStack_f90;
  uint uStack_f88;
  char cStack_f84;
  ushort uStack_f83;
  byte bStack_f81;
  char cStack_f80;
  char cStack_f60;
  undefined1 auStack_f58 [88];
  char cStack_f00;
  char cStack_ee0;
  long lStack_eb8;
  byte bStack_eb0;
  undefined8 uStack_ea8;
  int iStack_ea0;
  undefined4 uStack_e9c;
  undefined1 auStack_e98 [88];
  undefined1 uStack_e40;
  undefined1 auStack_e38 [328];
  undefined **ppuStack_cf0;
  undefined8 uStack_ce8;
  undefined8 uStack_ce0;
  ulong uStack_cd8;
  ulong uStack_cd0;
  uint uStack_cc0;
  long *plStack_cb8;
  byte bStack_cb0;
  long lStack_c20;
  long lStack_c18;
  undefined1 auStack_c08 [32];
  ulong uStack_be8;
  long lStack_be0;
  char cStack_bd8;
  char cStack_b28;
  long lStack_b20;
  byte bStack_b18;
  byte bStack_b08;
  long lStack_a90;
  char cStack_a88;
  undefined4 uStack_a08;
  undefined1 uStack_a04;
  uint uStack_9d8;
  uint uStack_9b0;
  long lStack_988;
  char cStack_980;
  long lStack_978;
  long lStack_970;
  byte bStack_930;
  char cStack_920;
  undefined1 auStack_908 [272];
  long lStack_7f8;
  char cStack_7f0;
  byte bStack_5b4;
  char cStack_538;
  undefined1 auStack_530 [24];
  undefined1 auStack_518 [24];
  long alStack_500 [3];
  undefined1 auStack_4e8 [40];
  undefined **ppuStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  ulong uStack_4a8;
  undefined4 uStack_4a0;
  undefined1 auStack_300 [96];
  byte bStack_2a0;
  long lStack_288;
  char cStack_158;
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [40];
  undefined4 uStack_e0;
  undefined1 uStack_dc;
  undefined1 auStack_d8 [8];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined1 auStack_58 [88];
  
  func_0x000107c32ee4();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plVar18 = param_1 + 0x17;
  FUN_1088660e8(&ppuStack_cf0,*plVar18);
  FUN_10869148c(auStack_908,&ppuStack_cf0);
  func_0x000107c288ec(&ppuStack_cf0);
  if ((cStack_538 != '\x01') || ((bStack_5b4 & 1) == 0)) {
    func_0x00010871e5e8();
    goto code_r0x000100671834;
  }
  lVar14 = lStack_7f8;
  if (cStack_7f0 == '\0') {
    lVar14 = 0;
  }
  uVar16 = (uint)param_1[0x15];
  ppuStack_cf0 = (undefined **)((ulong)ppuStack_cf0 & 0xffffffffffffff00);
  uStack_cd8 = uStack_cd8 & 0xffffffffffffff00;
  func_0x00010871e320();
  (*extraout_x8)();
  auStack_e98[0] = 0;
  uStack_e40 = 0;
  ppuStack_4c0 = (undefined **)((ulong)ppuStack_4c0 & 0xffffffffffffff00);
  uStack_4a8 = uStack_4a8 & 0xffffffffffffff00;
  func_0x00010871ea7c(auStack_e98);
  FUN_10871bcc4(auStack_e38,param_2,&ppuStack_cf0,0x11,2);
  func_0x000107c279dc(&ppuStack_4c0);
  FUN_1086d0498(auStack_e98);
  func_0x000107c279dc(&ppuStack_cf0);
  FUN_10871bdd4(auStack_fe0,auStack_e38);
  uStack_ce0 = 0;
  uStack_cd8 = 0;
  uStack_ce8 = 0;
  ppuStack_cf0 = &PTR_FUN_110a609a8;
  uStack_cd0 = CONCAT44(uStack_cd0._4_4_,0x1ce);
  func_0x00010871e058();
  func_0x00010871e588((long)(char)bStack_fa8);
  func_0x00010871e174(&ppuStack_cf0);
  func_0x00010871e484();
  func_0x00010871e00c(auStack_58,param_1 + 0x23);
  func_0x00010871e2c0();
  func_0x00010871e2d0();
  func_0x00010871e2d8();
  func_0x000107c2882c(&ppuStack_cf0);
  pppuVar11 = &ppuStack_cf0;
  func_0x00010871e9b4(pppuVar11,plVar18,auStack_fe0);
  bVar9 = bStack_fa8 == 0xf;
  if ((((bVar9) && ((bStack_eb0 & 1) != 0)) &&
      (bVar9 = cStack_a88 == '\x01' && lStack_eb8 == lStack_a90,
      cStack_a88 == '\x01' && lStack_eb8 < lStack_a90)) ||
     (func_0x00010871e52c(), bVar9 && extraout_w9 == 2)) {
LAB_108712c3c:
    func_0x00010871e5e8();
  }
  else {
    if (cStack_920 != '\x01') {
      if (cStack_b28 == '\x01') goto LAB_108712c3c;
      uVar7 = 0x1d < uStack_f88;
      bVar9 = false;
      if (uStack_f88 == 0x1e) {
        pppuVar11 = (undefined ***)(param_1 + 0x68);
        func_0x000107c289e8();
        bVar10 = *(char *)pppuVar11 != '\x01';
        uVar7 = !bVar10 && 1 < uStack_9d8;
        bVar9 = bVar10 || uStack_9d8 == 2;
        if (bVar10 || uStack_9d8 == 2) {
          uStack_f88 = 6;
        }
      }
      iVar20 = (int)pppuVar11;
      func_0x00010871e628(bStack_fa8);
      if (((!bVar9) || ((uStack_f83 & 1) == 0)) ||
         ((func_0x00010871f6e4(), !(bool)uVar7 || bVar9 && (func_0x00010871df48(), !bVar9)))) {
        unaff_w26 = iVar20;
        func_0x00010871e0ac(auStack_fe0);
        func_0x00010871e610(CONCAT44(uStack_e9c,iStack_ea0));
        func_0x000107c32f4c();
        FUN_1087087c8();
        uVar16 = (uint)bStack_fa8;
      }
      bVar10 = (uVar16 & 0xff) == 5;
      bVar9 = bVar10 && cStack_f84 == '\f';
      if (((bVar10 && cStack_f84 == '\f') && (func_0x00010871e508(uStack_f88), bVar9)) &&
         ((lVar3 = lStack_970 - lStack_978, lStack_970 != lStack_978 &&
          (FUN_108708704(&ppuStack_cf0,lStack_f90), lStack_970 - lStack_978 != lVar3)))) {
        unaff_w26 = 0;
      }
      if (cStack_bd8 != '\x01' || lStack_be0 <= lVar14) {
        puVar12 = auStack_c08;
        func_0x000107c28f58(puVar12,param_1 + 0xf);
        if (((int)puVar12 == 0) || (func_0x000107c2a620(param_2,param_1 + 0x12), (int)param_2 == 0))
        {
          uVar16 = 0;
          bVar9 = bStack_fa8 == 7 || bStack_fa8 == 2;
          if ((bStack_fa8 == 7 || bStack_fa8 == 2) &&
             (((func_0x00010871e694(uStack_f88), bVar9 &&
               (bVar9 = bStack_b18 == 1 && lStack_b20 == lStack_f90,
               bStack_b18 != 1 || lStack_b20 != lStack_f90)) &&
              (func_0x00010871e520(cStack_f84), !bVar9)))) goto LAB_108712c3c;
          func_0x00010871f488();
          uVar6 = uStack_be8;
          uVar15 = uStack_f88;
          lVar14 = lStack_f98;
          uVar5 = uStack_fa0;
          bVar4 = bStack_fa8;
          uVar1 = (uint)bStack_fa8;
          FUN_10871e8c0(&ppuStack_cf0,(long)(char)bStack_fa8,uStack_f88,uStack_fa0,lStack_f98);
          bVar9 = bVar4 == 0x14;
          if ((0x14 < bVar4) || (func_0x00010871e164(1 << (ulong)(uVar1 & 0x1f)), bVar9)) {
            uVar17 = lVar14 / 1000;
            if ((uStack_cd0 <= uVar17) &&
               (((bVar9 = uVar15 == 0xe, 0xe < uVar15 ||
                 (func_0x00010871e2ec(), uVar17 = extraout_x8_06, bVar9)) ||
                ((bVar9 = uVar1 == 0x14, 0x14 < uVar1 ||
                 (func_0x00010871e144(), uVar17 = extraout_x8_07, bVar9)))))) {
              uStack_9b0 = (uint)((int)uVar5 != 2);
              uStack_cd0 = uVar17;
              func_0x00010871c970();
              unaff_w26 = 0;
              uStack_a08 = (undefined4)uStack_ea8;
              uStack_a04 = (undefined1)((ulong)uStack_ea8 >> 0x20);
              uVar15 = uStack_f88;
            }
            bVar9 = uVar15 == 0xe;
            if (((0xe < uVar15) || (func_0x00010871e790(1 << (ulong)(uVar15 & 0x1f)), bVar9)) &&
               (((bStack_b18 & 1) == 0 || (lStack_b20 <= lStack_f90)))) {
              lStack_b20 = lStack_f90;
              bStack_b18 = 1;
              if (cStack_f00 == '\x01') {
                func_0x00010883f80c(auStack_f58,&ppuStack_cf0);
              }
              unaff_w26 = 0;
            }
          }
          if (((plStack_cb8 == (long *)0x0) && ((uVar6 & 0xfe) != 0)) &&
             ((*(byte *)(param_1 + 0x4a) & 1) == 0)) {
            uStack_c0 = 0;
            uStack_c8 = 0;
            func_0x00010871e048(param_1[0x23]);
            uStack_d0 = 0;
            uStack_b8 = 0x1cf;
            func_0x00010871e378();
            (*extraout_x8_00)();
            func_0x000107c2882c(auStack_d8);
          }
          bVar4 = bStack_cb0;
          plVar13 = (long *)(long)(char)bStack_fa8;
          FUN_1087200ec(plVar13,uVar16);
          uStack_e0 = SUB84(plVar13,0);
          uStack_dc = (undefined1)((ulong)plVar13 >> 0x20);
          if (((ulong)plVar13 >> 0x20 & 1) == 0) {
            plVar19 = (long *)0x0;
          }
          else {
            plVar13 = (long *)&uStack_e0;
            FUN_108720360(plVar13,uStack_f88,auStack_fc8,uStack_fa0,lStack_f98,uStack_f83,
                          &ppuStack_cf0,param_1 + 0xf,param_1 + 0x12,param_1 + 0x15,plVar18,
                          param_1 + 0x31);
            plVar19 = plVar13;
          }
          bVar9 = bStack_fa8 == 0x14;
          if (((0x14 < bStack_fa8) || (func_0x00010871df48(), bVar9)) &&
             ((bVar9 = uStack_f88 == 0x1e, 0x1e < uStack_f88 || (func_0x00010871df90(), bVar9)))) {
            func_0x000107c289e8();
            lVar14 = param_1[0x23];
            uStack_4b0 = 0;
            uStack_4a8 = 0;
            func_0x00010871e048();
            uStack_4b8 = 0;
            uStack_4a0 = 400;
            ppuStack_4c0 = extraout_x8_04;
            func_0x00010871e550();
            func_0x000107c278b8(auStack_120);
            pcVar2 = "true";
            if (bVar4 == 0) {
              pcVar2 = "false";
            }
            func_0x000107c28824(&ppuStack_4c0,auStack_120,pcVar2);
            func_0x00010871e544();
            func_0x000107c278b8(auStack_138);
            func_0x00010871e66c();
            func_0x00010871e538();
            puVar12 = auStack_150;
            func_0x000107c278b8(puVar12);
            func_0x00010871e66c();
            func_0x000107c2884c(auStack_108,puVar12);
            func_0x00010871eeb8();
            (*extraout_x8_05)(lVar14,auStack_108);
            func_0x000107c2882c(auStack_108);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_150);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_138);
            plVar13 = (long *)0x0;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
            func_0x00010871ead0();
          }
          if (((ulong)plVar19 & 1) == 0) {
LAB_108712c24:
            iVar20 = unaff_w26;
            bVar9 = bStack_fa8 == 0x14;
            if ((((0x14 < bStack_fa8) || (func_0x00010871dfc0(), bVar9)) && (uVar16 != 0)) &&
               (((bVar9 = uStack_f88 == 0xe, 0xe < uStack_f88 || (func_0x00010871e01c(), bVar9)) ||
                ((bVar9 = extraout_w8_00 == 0x14, 0x14 < extraout_w8_00 ||
                 (func_0x00010871dfa8(), bVar9)))))) {
              func_0x00010871e800(auStack_fe0);
              FUN_1086a470c();
              if (((ulong)plVar13 & 1) != 0) {
                iVar20 = 0;
                goto LAB_108712e00;
              }
            }
            if (iVar20 == 2) goto LAB_108712c3c;
          }
          else {
            if ((plStack_cb8 == (long *)0xb) && (bStack_fa8 < 0x15 && bStack_fa8 != 9)) {
              if (bStack_b18 == 1) {
                plVar13 = param_1 + 0x31;
                func_0x00010871c9a0();
                if ((int)plVar13 != 0) {
                  plVar13 = (long *)*plVar18;
                  func_0x00010871f0f0();
                  func_0x00010871f5ac();
                  func_0x00010871f0dc();
                  if (((cStack_158 == '\x01') && ((bStack_2a0 >> 2 & 1) != 0)) &&
                     (*(int *)(lStack_288 + 0xa8) == 0)) {
                    uStack_4b0 = 0;
                    uStack_4a8 = 0;
                    func_0x00010871e048();
                    uStack_4b8 = 0;
                    uStack_4a0 = 399;
                    ppuStack_4c0 = extraout_x8_01;
                    func_0x00010871e574();
                    func_0x000107c278b8(alStack_500);
                    func_0x00010871e568();
                    func_0x000107c28824(&ppuStack_4c0,alStack_500,
                                        *(undefined8 *)(extraout_x8_02 + (ulong)uVar16 * 8));
                    func_0x00010871e2e0();
                    func_0x000107c278b8(auStack_518);
                    lVar14 = (long)(char)bStack_fa8;
                    func_0x000108841d8c(auStack_530,lVar14);
                    func_0x00010871e994();
                    func_0x000107c2884c(auStack_4e8,lVar14);
                    func_0x00010871ebb8();
                    func_0x00010871e674();
                    func_0x000107c2882c(auStack_4e8);
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                              (auStack_530);
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                              (auStack_518);
                    plVar13 = alStack_500;
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
                    func_0x00010871ead0();
                    func_0x00010871ec08();
                    uStack_cc0 = (uint)plVar13;
                    plStack_cb8 = (long *)0xd;
                  }
                  func_0x00010871f0d4();
                }
              }
              bVar9 = true;
            }
            else {
              bVar9 = false;
            }
            if (((bStack_fa8 == 2) && ((bStack_b18 & 1) != 0)) && (lStack_b20 == lStack_f90)) {
              plVar13 = (long *)*plVar18;
              func_0x00010871f0f0();
              func_0x00010871f5ac();
              func_0x00010871f0dc();
              if (cStack_158 == '\x01') {
                plVar13 = (long *)0x0;
                func_0x00010871e370(auStack_300);
              }
              func_0x00010871f0d4();
            }
            uVar8 = 1 < uStack_9d8;
            uVar7 = uStack_9d8 == 2;
            if ((((bool)uVar7) &&
                (plVar13 = plStack_cb8, FUN_10871fb04(plStack_cb8,uStack_cc0), (int)plVar13 != 0))
               && ((func_0x00010871e55c(bStack_fa8), !(bool)uVar8 || (bool)uVar7 &&
                   ((((bStack_cb0 & 1) != 0 && ((long)uStack_be8 < 2)) &&
                    ((uStack_cc0 == 2 || uStack_cc0 == 0x1d) || (uStack_cc0 & 0xfffffffb) == 1))))))
            {
              plStack_cb8 = (long *)0x1;
            }
            if (cStack_f80 == '\x01') {
              uStack_be8 = (ulong)bStack_f81;
            }
            if (cStack_ee0 == '\x01') {
              func_0x00010871e18c(auStack_fe0);
            }
            else {
              if (bStack_fa8 == 0xf) {
                bVar9 = true;
              }
              if (!bVar9) {
                func_0x00010871e368(&ppuStack_cf0);
              }
            }
            if (cStack_f60 == '\x01') {
              func_0x00010871e180(auStack_fe0);
            }
            else if (lStack_c20 != lStack_c18) {
              func_0x00010871e360(&ppuStack_cf0);
            }
            if ((byte)uStack_e9c == 1 && iStack_ea0 == 1) {
              plStack_cb8 = (long *)0x10;
            }
            if (((cStack_980 == '\x01') && (lStack_988 != 0)) && (((byte)uStack_e9c & 1) == 0)) {
              cStack_980 = '\0';
            }
            unaff_w26 = 0;
            iVar20 = 0;
            if (((bStack_fa8 != 7) || ((byte)uStack_e9c == 0)) || (iStack_ea0 != 2))
            goto LAB_108712c24;
            func_0x00010871f844();
            cStack_980 = extraout_w8;
          }
LAB_108712e00:
          FUN_1088665d4(*plVar18,&ppuStack_cf0);
          func_0x00010871e320(param_1[0x2b]);
          (*extraout_x8_03)();
          if (((param_3 != 0) && (iVar20 == 0)) &&
             (((*(char *)((long)param_1 + 0x252) == '\x01' || ((bStack_930 & 1) == 0)) &&
              ((bStack_b08 & 1) == 0)))) {
            (**(code **)(*param_1 + 400))(param_1,&ppuStack_cf0);
          }
          func_0x00010871e87c();
          goto LAB_108712c40;
        }
      }
      if (unaff_w26 != 2) {
        FUN_1088665d4(*plVar18,&ppuStack_cf0);
      }
      goto LAB_108712c3c;
    }
    uStack_4b0 = 0;
    uStack_4a8 = 0;
    uStack_4b8 = 0;
    ppuStack_4c0 = &PTR_FUN_110a609a8;
    uStack_4a0 = 0x173;
    func_0x000107c2884c(auStack_300,&ppuStack_4c0);
    func_0x00010871f850();
    func_0x00010871e500();
    func_0x000107c2882c(auStack_300);
    func_0x00010871e5e8();
    func_0x00010871ead0();
  }
LAB_108712c40:
  func_0x000107c288d0(&ppuStack_cf0);
  func_0x00010871e2c8();
  FUN_10871be98(auStack_fe0);
  FUN_10871be98(auStack_e38);
code_r0x000100671834:
  func_0x000107c288cc(auStack_908);
  return;
}



/* Entry: 10871326c; end: 10871336f;  */

void FUN_10871326c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  int iVar1;
  undefined1 auStack_bc0 [984];
  undefined1 auStack_7e8 [16];
  undefined1 uStack_7d8;
  char cStack_418;
  undefined1 auStack_410 [976];
  undefined1 *puVar2;
  
  auStack_7e8[0] = 0;
  uStack_7d8 = 0;
  puVar2 = auStack_410;
  FUN_108713370(puVar2,param_1 + 0xb8,param_2,param_3,auStack_7e8,0,
                *(int *)(param_3 + 0xf0) == 0 && *(int *)(param_3 + 0x20) == 2);
  iVar1 = (int)puVar2;
  if ((*(char *)(param_4 + 0x1a8) == '\x01') && (func_0x00010871ec08(), iVar1 == 0x11)) {
    FUN_10871bca8(auStack_bc0,auStack_410);
    func_0x00010871ec30(auStack_7e8,param_1,param_2,param_3,param_4);
    func_0x00010871e98c();
    if (cStack_418 == '\x01') {
      func_0x000107c288f4(auStack_410,auStack_7e8);
    }
    func_0x00010871f350();
  }
  func_0x00010871e354();
  func_0x00010871e274();
  func_0x000107c288d0(auStack_410);
  return;
}



/* Entry: 108713370; end: 1087133cf;  */

void FUN_108713370(void)

{
  undefined8 in_x3;
  undefined8 *unaff_x20;
  
  func_0x000107c32eb0(in_x3);
  FUN_10871bf94();
  FUN_1088665d4(*unaff_x20);
  return;
}



/* Entry: 1087133d0; end: 10871342b;  */

void FUN_1087133d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_408 [16];
  undefined1 uStack_3f8;
  undefined1 auStack_3f0 [976];
  
  auStack_408[0] = 0;
  uStack_3f8 = 0;
  func_0x00010871e454(auStack_3f0,param_1 + 0xb8,param_2,param_3,auStack_408);
  func_0x00010871e354();
  func_0x00010871e274();
  func_0x00010871f2dc();
  return;
}



/* Entry: 10871342c; end: 1087134f3;  */

void FUN_10871342c(long param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_800 [1000];
  undefined1 auStack_418 [976];
  byte bStack_48;
  
  if (*(int *)(param_3 + 0xf0) != 0) {
    func_0x00010871e724();
    FUN_1088660e8(auStack_800,*(undefined8 *)(param_1 + 0xb8));
    func_0x00010871e88c();
    func_0x00010871e83c();
    if ((bStack_48 & 1) == 0) {
      FUN_1088460dc(auStack_800);
      func_0x00010871f23c(auStack_418);
      func_0x00010871e598();
    }
    func_0x00010871e354();
    func_0x00010871e274();
    func_0x00010871e884();
  }
  return;
}



/* Entry: 1087134f4; end: 1087139cf;  */

void FUN_1087134f4(undefined8 param_1,ulong param_2,long *param_3,ulong param_4,long param_5,
                  long *param_6)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_cb0 [88];
  char cStack_c58;
  undefined1 auStack_8c8 [24];
  long lStack_8b0;
  long lStack_8a0;
  undefined4 uStack_898;
  undefined8 uStack_890;
  undefined1 uStack_888;
  undefined1 auStack_880 [32];
  undefined4 uStack_860;
  undefined1 auStack_830 [24];
  undefined1 uStack_818;
  undefined1 auStack_7e0 [24];
  byte bStack_7c8;
  long lStack_7b8;
  char cStack_7b0;
  long lStack_7a8;
  char cStack_7a0;
  long lStack_6d8;
  char cStack_6d0;
  undefined8 uStack_618;
  undefined1 uStack_610;
  byte bStack_608;
  int iStack_5b0;
  byte bStack_4f8;
  undefined1 auStack_4f0 [24];
  long lStack_4d8;
  long lStack_4c8;
  undefined4 uStack_4c0;
  undefined8 uStack_4b8;
  undefined1 uStack_4b0;
  undefined1 auStack_4a8 [32];
  undefined4 uStack_488;
  undefined1 auStack_458 [24];
  undefined1 uStack_440;
  undefined1 auStack_408 [24];
  char cStack_3f0;
  long lStack_3e0;
  char cStack_3d8;
  long lStack_3d0;
  char cStack_3c8;
  undefined8 uStack_240;
  undefined1 uStack_238;
  byte bStack_230;
  int iStack_1d8;
  byte bStack_148;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  undefined2 uStack_ce;
  undefined1 uStack_cc;
  ulong uStack_c8;
  undefined1 uStack_c0;
  ulong uStack_b8;
  undefined1 uStack_b0;
  undefined4 auStack_a8 [2];
  undefined8 uStack_a0;
  byte bStack_98;
  uint uStack_90;
  ulong uStack_88;
  char cStack_80;
  undefined1 auStack_78 [64];
  undefined1 uStack_38;
  byte bStack_30;
  undefined1 auStack_28 [32];
  byte bStack_8;
  
  func_0x000107c32ee4();
  uVar4 = param_2;
  lVar3 = param_5;
  func_0x00010871e5c4(*(undefined8 *)(param_5 + 0x38));
  lVar7 = *(long *)(extraout_x8 + 0x20);
  FUN_108845808(auStack_4f0,uVar4,lVar3);
  if (iStack_1d8 == 2) {
    lVar3 = lStack_3e0;
    if (cStack_3d8 == '\0') {
      lVar3 = 0;
    }
    lVar2 = lStack_3d0;
    if (cStack_3c8 == '\0') {
      lVar2 = 0;
    }
    uStack_4b0 = lVar3 <= lVar2;
  }
  else if ((bStack_148 & 1) == 0) {
    uStack_4b0 = 1;
  }
  if ((param_4 & 1) == 0) {
    func_0x00010871f394();
    goto code_r0x000100671834;
  }
  FUN_1088660e8(auStack_cb0,*param_3,param_2);
  func_0x00010871e88c();
  func_0x00010871e83c();
  if ((bStack_4f8 & 1) == 0) {
    func_0x00010871f394();
  }
  else {
    if (lStack_8a0 == 0) {
      lStack_8a0 = lStack_4c8;
    }
    func_0x000107c27c5c(auStack_880,auStack_4a8);
    uStack_860 = uStack_488;
    FUN_1088ee3d0(auStack_830,auStack_458);
    uStack_818 = uStack_440;
    uStack_618 = uStack_240;
    uStack_610 = uStack_238;
    bStack_608 = bStack_230;
    iStack_5b0 = iStack_1d8;
    func_0x00010871f774();
    func_0x000107c28d24(extraout_x9 + 0x390,extraout_x8_00 + 0x390);
    if ((bStack_7c8 & 1) == 0) {
      func_0x000107c28d24(auStack_7e0,auStack_408);
    }
    if ((bStack_608 & 1) == 0) {
      func_0x00010871f774();
      func_0x000107c295bc(extraout_x9_00 + 0xb8,extraout_x8_01 + 0xb8);
    }
    if (iStack_5b0 == 2) {
      bVar1 = lStack_8b0 < lStack_4d8;
      if (lStack_8b0 < lStack_4d8) {
        lStack_7b8 = lStack_3e0;
        cStack_7b0 = cStack_3d8;
      }
      lVar3 = lStack_7a8;
      if (cStack_7a0 == '\0') {
        lVar3 = 0;
      }
      lVar2 = lStack_3d0;
      if (cStack_3c8 == '\0') {
        lVar2 = 0;
      }
      if (lVar3 < lVar2) {
        cStack_7a0 = cStack_3c8;
        lStack_7a8 = lStack_3d0;
        if (cStack_3c8 == '\0') {
          lStack_3d0 = 0;
        }
        bVar1 = true;
        lVar3 = lStack_3d0;
      }
      if (lStack_8a0 <= lStack_4c8) {
        lStack_8a0 = lStack_4c8;
      }
      uStack_898 = uStack_4c0;
      uStack_890 = uStack_4b8;
      if (cStack_6d0 == '\0') {
        lStack_6d8 = 0;
      }
      if (lVar3 <= lStack_6d8) {
        lVar3 = lStack_6d8;
      }
      lVar2 = lStack_7b8;
      if (cStack_7b0 == '\0') {
        lVar2 = 0;
      }
      uStack_888 = lVar2 <= lVar3;
      if (bVar1) {
        if (cStack_3f0 == '\x01') {
          func_0x00010871f774();
          func_0x000107c28d24(extraout_x9_01 + 0xe8,extraout_x8_02 + 0xe8);
        }
        func_0x00010871f774();
        func_0x000107c295bc(extraout_x9_02 + 0xd0,extraout_x8_03 + 0xd0);
      }
    }
    lStack_8b0 = lStack_4d8;
    if ((*(byte *)(param_5 + 0x10) >> 4 & 1) != 0) {
      lVar3 = *param_3;
      FUN_10886a8fc(lVar3,param_2,2);
      if (((param_2 & 1) != 0) && (lVar3 == lVar7)) {
        func_0x000107c29650();
        lVar3 = 0x11372c578;
        if (*param_6 != 0) {
          lVar3 = *param_6;
        }
        uVar5 = *(uint *)(param_5 + 0x10);
        if (((uVar5 & 1) == 0) || ((*(byte *)(*(long *)(param_5 + 0x38) + 0x10) & 1) == 0)) {
          auStack_28[0] = 0;
          bStack_8 = 0;
          if ((uVar5 >> 4 & 1) != 0) goto LAB_10871381c;
LAB_1087137e0:
          auStack_78[0] = 0;
          bStack_30 = 0;
          if ((uVar5 & 1) == 0) goto LAB_108713830;
LAB_1087137ec:
          uVar6 = *(undefined8 *)(*(long *)(param_5 + 0x38) + 0x20);
        }
        else {
          func_0x0001086aaa9c(auStack_28,*(undefined8 *)(*(long *)(param_5 + 0x38) + 0x18));
          uVar5 = *(uint *)(param_5 + 0x10);
          if ((uVar5 >> 4 & 1) == 0) goto LAB_1087137e0;
LAB_10871381c:
          FUN_1086ab8b8(auStack_78,*(undefined8 *)(param_5 + 0x58));
          uVar5 = *(uint *)(param_5 + 0x10);
          if ((uVar5 & 1) != 0) goto LAB_1087137ec;
LAB_108713830:
          uVar6 = 0;
        }
        if (((((uVar5 & 1) == 0) || ((bStack_8 & 1) == 0)) || ((bStack_30 & 1) == 0)) ||
           ((FUN_10883e734(auStack_a8,auStack_78,lVar3), (bStack_98 & 1) == 0 && (cStack_80 == '\0')
            ))) {
          auStack_cb0[0] = 0;
          cStack_c58 = '\0';
        }
        else {
          func_0x000107c29ee0(&uStack_120,auStack_28);
          uStack_f8 = uStack_118;
          uStack_100 = uStack_120;
          uStack_f0 = uStack_110;
          uStack_110 = 0;
          uStack_118 = 0;
          uStack_120 = 0;
          if (bStack_98 == 0) {
            auStack_a8[0] = 0;
            uStack_a0 = 0;
          }
          uStack_d0 = 1;
          uStack_ce = 0;
          uStack_cc = uStack_38;
          if (cStack_80 == '\0') {
            uStack_c0 = false;
            uStack_c8 = uStack_c8 & 0xffffffffffffff00;
            uStack_b8 = uStack_b8 & 0xffffffffffffff00;
          }
          else {
            uStack_c8 = (ulong)uStack_90;
            uStack_c0 = uStack_c8 != 0;
            uStack_b8 = uStack_88;
          }
          uStack_b0 = cStack_80 != '\0' && uStack_88 != 0;
          uStack_e8 = auStack_a8[0];
          uStack_e0 = uStack_a0;
          uStack_d8 = uVar6;
          FUN_1086d736c(auStack_cb0,&uStack_100);
          func_0x000107c27914(&uStack_100);
          func_0x000107c27914(&uStack_120);
        }
        FUN_1086d73b8(auStack_78);
        func_0x0001086d73d8(auStack_28);
        if (cStack_c58 == '\x01') {
          func_0x00010883f80c(auStack_cb0,auStack_8c8);
        }
        FUN_1086d0498(auStack_cb0);
      }
    }
    func_0x00010871f504();
  }
  func_0x00010871e884();
code_r0x000100671834:
  func_0x000107c288d0(auStack_4f0);
  return;
}



/* Entry: 1087139d0; end: 108713a93;  */

void FUN_1087139d0(long param_1)

{
  long *plVar1;
  long *unaff_x19;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  func_0x000107c32eb0();
  uVar3 = *(ulong *)(param_1 + 8);
  if (uVar3 < *(ulong *)(param_1 + 0x10)) {
    func_0x00010871f820();
    func_0x000107c291e0();
    lVar2 = uVar3 + 0x3d0;
    unaff_x19[1] = lVar2;
  }
  else {
    plVar1 = unaff_x19;
    func_0x000107c291bc();
    func_0x000107c291c8(auStack_58,plVar1,(unaff_x19[1] - *unaff_x19) / 0x3d0,
                        (ulong *)(param_1 + 0x10));
    func_0x000107c291e0(lStack_48);
    lStack_48 = lStack_48 + 0x3d0;
    func_0x000107c32ee8();
    func_0x000107c291c0();
    lVar2 = unaff_x19[1];
    func_0x00010871ec88();
  }
  unaff_x19[1] = lVar2;
  return;
}



/* Entry: 108713a94; end: 108713aa3;  */

void FUN_108713a94(long param_1)

{
  ulong uVar1;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x1000;
  if (*(long *)(param_1 + 200) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    func_0x00010871c054();
    *(ulong *)(param_1 + 200) = uVar1;
  }
  return;
}



/* Entry: 108713aa4; end: 108713ad3;  */

byte FUN_108713aa4(long param_1)

{
  byte *pbVar1;
  byte bVar2;
  
  if (*(char *)(param_1 + 0x50) == '\x01') {
    pbVar1 = (byte *)(param_1 + 0x20);
    func_0x000107c289e8();
    bVar2 = *pbVar1;
  }
  else {
    bVar2 = 0;
  }
  return bVar2 & 1;
}



/* Entry: 108713ad4; end: 108713c33;  */

void FUN_108713ad4(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined1 uVar2;
  long unaff_x19;
  long lVar3;
  long *aplStack_838 [123];
  undefined1 auStack_460 [456];
  byte bStack_298;
  byte bStack_278;
  byte bStack_a0;
  undefined1 auStack_90 [48];
  byte bStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  func_0x000107c32eb0();
  lStack_58 = 0;
  lStack_50 = 0;
  uStack_48 = 0;
  lVar1 = param_2[1];
  for (lVar3 = *param_2; uVar2 = lVar3 == lVar1, !(bool)uVar2; lVar3 = lVar3 + 0x18) {
    FUN_10885edd8(aplStack_838,*(undefined8 *)(unaff_x19 + 0xb8),lVar3);
    FUN_108663a10(auStack_90,aplStack_838);
    FUN_108656820(aplStack_838);
    if ((bStack_60 & 1) != 0) {
      func_0x00010871e9b4(aplStack_838,unaff_x19 + 0xb8,lVar3);
      func_0x000107c28918(auStack_460,aplStack_838);
      func_0x000107c288d0(aplStack_838);
      if (((bStack_298 & 1) == 0) &&
         (((func_0x00010871e688(), (bool)uVar2 || ((bStack_a0 & 1) == 0)) && ((bStack_278 & 1) == 0)
          ))) {
        FUN_1086d6ea8(&lStack_58,auStack_460);
      }
      func_0x000107c288d0(auStack_460);
    }
    FUN_1086569a0(auStack_90);
  }
  if (lStack_58 != lStack_50) {
    func_0x00010871f2a8(aplStack_838);
    if (aplStack_838[0] != (long *)0x0) {
      func_0x00010871f3f0(*(undefined8 *)(*aplStack_838[0] + 0xa8));
    }
    func_0x000107c291a8(aplStack_838);
    FUN_108708ea0();
  }
  func_0x000107c29108(&lStack_58);
  return;
}



/* Entry: 108713c34; end: 108713d6b;  */

void FUN_108713c34(undefined8 param_1,undefined8 *param_2,undefined8 param_3,int param_4)

{
  long unaff_x19;
  undefined8 *unaff_x21;
  undefined1 auStack_9d0 [464];
  undefined1 auStack_800 [16];
  undefined1 uStack_7f0;
  undefined1 auStack_418 [976];
  char cStack_48;
  
  func_0x00010871e724();
  func_0x00010871f3a0(auStack_800,*param_2);
  FUN_10869148c(auStack_418,auStack_800);
  func_0x000107c288ec(auStack_800);
  if (cStack_48 == '\x01') {
    func_0x00010871f504();
    *(undefined1 *)(unaff_x19 + 0x3d0) = 0;
  }
  else {
    func_0x000107c28ee4(auStack_9d0,*unaff_x21);
    if (param_4 == 0) {
      auStack_800[0] = 0;
      uStack_7f0 = 0;
      func_0x0001008655c8();
      FUN_10871bf94();
      *(undefined1 *)(unaff_x19 + 0x3d0) = 1;
    }
    else {
      func_0x000100865634(auStack_800);
      func_0x00010871e454();
      func_0x00010871f504();
      *(undefined1 *)(unaff_x19 + 0x3d0) = 1;
      func_0x000107c288d0(auStack_800);
    }
    func_0x000107c287e4(auStack_9d0);
  }
  func_0x000107c288cc(auStack_418);
  return;
}



/* Entry: 108713d6c; end: 108713d97;  */

void FUN_108713d6c(long param_1)

{
  long unaff_x19;
  
  func_0x000100865118();
  if (param_1 != 0) {
    func_0x000100869dc8();
    *(long *)(unaff_x19 + 8) = param_1;
    if (param_1 != 0) {
      func_0x00010871f85c();
    }
  }
  return;
}



/* Entry: 108713d98; end: 108713daf;  */

void FUN_108713d98(long param_1)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  func_0x0001008672bc(*(undefined8 *)(param_1 + 0xb8));
  if ((bool)in_ZR) {
    func_0x000107c34178();
    func_0x000107c3437c();
    if (!(bool)in_ZR) {
      func_0x000107c31338();
      func_0x00010887b508();
      func_0x00010887b644();
      func_0x00010887b760();
      func_0x000107c316c4();
      func_0x00010887b460();
      func_0x00010887b794();
      func_0x00010887be30();
      func_0x000107c34368();
      func_0x000107c34364();
    }
  }
  func_0x00010887b8f0(*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 108713db0; end: 108713f07;  */

void FUN_108713db0(undefined8 param_1,long param_2,mach_header *param_3)

{
  long lVar1;
  uint uVar2;
  undefined1 uVar3;
  mach_header *pmVar4;
  mach_header *pmVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  code *extraout_x8_01;
  mach_header *unaff_x20;
  long lVar8;
  long *unaff_x21;
  undefined4 *unaff_x22;
  long lStack_1130;
  long lStack_1128;
  undefined8 uStack_1120;
  long lStack_1118;
  long lStack_1110;
  undefined8 uStack_1108;
  undefined4 *puStack_1100;
  long *plStack_10f8;
  mach_header *pmStack_10f0;
  undefined1 *puStack_10e8;
  undefined1 **ppuStack_10e0;
  code *pcStack_10d8;
  undefined1 auStack_10d0 [16];
  undefined8 uStack_10c0;
  undefined8 uStack_10b0;
  undefined8 uStack_10a8;
  undefined8 uStack_10a0;
  undefined1 auStack_1098 [24];
  undefined1 auStack_1080 [976];
  byte bStack_cb0;
  undefined1 auStack_ca8 [40];
  uint uStack_c80;
  char cStack_c7c;
  char cStack_c78;
  mach_header amStack_c70 [31];
  undefined8 uStack_888;
  undefined4 *puStack_880;
  long *plStack_878;
  mach_header *pmStack_870;
  mach_header *pmStack_868;
  undefined1 *puStack_860;
  code *pcStack_858;
  undefined1 auStack_850 [16];
  undefined8 uStack_840;
  undefined1 auStack_820 [24];
  mach_header amStack_808 [14];
  byte bStack_640;
  int iStack_4f0;
  char cStack_438;
  undefined4 auStack_430 [250];
  undefined8 uStack_48;
  
  func_0x00010086504c();
  func_0x00010086515c();
  uStack_48 = extraout_x8;
  FUN_1088660e8(auStack_430,*(undefined8 *)(param_2 + 0xb8));
  FUN_10869148c(amStack_808,auStack_430);
  func_0x000107c288ec(auStack_430);
  uVar3 = cStack_438 == '\x01';
  if (((bool)uVar3) && ((bStack_640 & 1) == 0)) {
    uVar2 = iStack_4f0 - 1;
    unaff_x20 = (mach_header *)((long)&MACH_HEADER.magic + (ulong)uVar2 + 1);
    uVar3 = uVar2 == 3;
    if (2 < uVar2) {
      unaff_x20 = &MACH_HEADER;
    }
    FUN_108867f24(unaff_x21[0x17]);
    unaff_x21 = (long *)unaff_x21[0x19];
    func_0x000107c27994(auStack_850);
    unaff_x22 = auStack_430;
    func_0x00010871e4c4(uStack_840);
    auStack_430[0] = 2;
    auStack_430._8_8_ = param_1;
    func_0x00010871f6b8();
    func_0x00010871ec98(auStack_820,auStack_430);
    param_3 = unaff_x20;
    (**(code **)(*unaff_x21 + 0x20))(unaff_x21,unaff_x20,auStack_820);
    func_0x00010871ebcc();
    func_0x00010871eb38();
    func_0x00010871e654();
    func_0x00010871e4f8();
  }
  pmVar4 = amStack_808;
  func_0x000107c288cc();
  func_0x00010086526c(uStack_48);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010871ebcc();
  func_0x00010871eb38();
  func_0x00010871e654();
  func_0x00010871e4f8();
  pmVar5 = amStack_808;
  func_0x000107c288cc();
  func_0x00010871e260();
  pcStack_858 = FUN_108713f08;
  puStack_880 = unaff_x22;
  plStack_878 = unaff_x21;
  pmStack_870 = unaff_x20;
  pmStack_868 = pmVar4;
  puStack_860 = &stack0xfffffffffffffff0;
  func_0x000100864a88();
  func_0x00010086515c();
  puVar6 = *(undefined1 **)&pmVar5[8].cpusubtype;
  uStack_888 = extraout_x8_00;
  func_0x000107c296e4(amStack_c70);
  if ((amStack_c70[0]._24_8_ & 1) == 0) {
    param_3 = unaff_x20;
    FUN_10885edd8(amStack_c70,unaff_x21[0x17]);
    FUN_108663a10(auStack_ca8,amStack_c70);
    FUN_108656820(amStack_c70);
    uVar3 = cStack_c78 == '\x01';
    if ((!(bool)uVar3) ||
       (uVar3 = cStack_c7c == '\x01' && uStack_c80 == 1, cStack_c7c == '\x01' && uStack_c80 < 2)) {
      func_0x00010871f3f8(amStack_c70,unaff_x21[0x17]);
      FUN_10869148c(auStack_1080,amStack_c70);
      func_0x000107c288ec(amStack_c70);
      if ((bStack_cb0 & 1) == 0) {
        unaff_x21 = (long *)unaff_x21[0x19];
        func_0x00010871e65c(auStack_10d0);
        unaff_x20 = amStack_c70;
        func_0x00010871e4c4(uStack_10c0);
        amStack_c70[0].magic = 1;
        uStack_10a8 = 0;
        uStack_10a0 = 0;
        uStack_10b0 = 0;
        amStack_c70[0]._8_8_ = param_1;
        func_0x00010871ec98(auStack_1098,amStack_c70);
        (**(code **)(*unaff_x21 + 0x20))(unaff_x21,pmVar4,auStack_1098);
        func_0x000107c27b3c(auStack_1098);
        func_0x00010871ec10();
        func_0x00010871e5e0();
        func_0x00010871e4f8();
        param_3 = pmVar4;
      }
      func_0x000107c288cc(auStack_1080);
    }
    puVar6 = auStack_ca8;
    FUN_1086569a0();
  }
  func_0x00010086526c(uStack_888);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107c27b3c(auStack_1098);
  func_0x00010871ec10();
  func_0x00010871e5e0();
  func_0x00010871e4f8();
  func_0x000107c288cc(auStack_1080);
  puVar7 = auStack_ca8;
  FUN_1086569a0();
  func_0x00010871e260();
  pcStack_10d8 = FUN_1087140ac;
  if (*(long *)param_3 != *(long *)&param_3->cpusubtype) {
    lStack_1118 = 0;
    lStack_1110 = 0;
    uStack_1108 = 0;
    lStack_1130 = 0;
    lStack_1128 = 0;
    uStack_1120 = 0;
    puStack_1100 = unaff_x22;
    plStack_10f8 = unaff_x21;
    pmStack_10f0 = unaff_x20;
    puStack_10e8 = puVar6;
    ppuStack_10e0 = &puStack_860;
    func_0x000104bf1cec(&lStack_1118,*(long *)&param_3->cpusubtype - *(long *)param_3 >> 5);
    func_0x000104bf1cec(&lStack_1130,*(long *)&param_3->cpusubtype - *(long *)param_3 >> 5);
    lVar8._0_4_ = param_3->magic;
    lVar8._4_4_ = param_3->cputype;
    lVar1._0_4_ = param_3->cpusubtype;
    lVar1._4_4_ = param_3->filetype;
    for (; lVar8 != lVar1; lVar8 = lVar8 + 0x20) {
      if (*(int *)(lVar8 + 0x18) == 1) {
        func_0x00010871f3b4(&lStack_1130);
      }
      else if (*(int *)(lVar8 + 0x18) == 0) {
        func_0x00010871f3b4(&lStack_1118);
      }
    }
    if (lStack_1118 != lStack_1110) {
      func_0x00010871f71c(*(undefined8 *)(puVar7 + 200));
      func_0x00010871f1d8();
    }
    if (lStack_1130 != lStack_1128) {
      func_0x00010871f71c(*(undefined8 *)(puVar7 + 200));
      (*extraout_x8_01)();
    }
    func_0x000107c27b3c(&lStack_1130);
    func_0x000107c27b3c(&lStack_1118);
  }
  return;
}



/* Entry: 108713f08; end: 1087140ab;  */

void FUN_108713f08(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  long *unaff_x19;
  long *unaff_x20;
  long lVar3;
  long unaff_x21;
  long *plVar4;
  long lStack_8e0;
  long lStack_8d8;
  undefined8 uStack_8d0;
  long lStack_8c8;
  long lStack_8c0;
  undefined8 uStack_8b8;
  undefined1 auStack_880 [16];
  undefined8 uStack_870;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined1 auStack_848 [24];
  undefined1 auStack_830 [976];
  byte bStack_460;
  undefined1 auStack_458 [40];
  uint uStack_430;
  char cStack_42c;
  char cStack_428;
  undefined4 auStack_420 [2];
  undefined8 uStack_418;
  ulong uStack_408;
  undefined8 uStack_38;
  
  func_0x000100864a88();
  func_0x00010086515c();
  uStack_38 = extraout_x8;
  func_0x000107c296e4(auStack_420);
  if ((uStack_408 & 1) == 0) {
    FUN_10885edd8(auStack_420,*(undefined8 *)(unaff_x21 + 0xb8));
    FUN_108663a10(auStack_458,auStack_420);
    FUN_108656820(auStack_420);
    in_ZR = cStack_428 == '\x01';
    if ((!(bool)in_ZR) ||
       (in_ZR = cStack_42c == '\x01' && uStack_430 == 1, cStack_42c == '\x01' && uStack_430 < 2)) {
      func_0x00010871f3f8(auStack_420,*(undefined8 *)(unaff_x21 + 0xb8));
      FUN_10869148c(auStack_830,auStack_420);
      func_0x000107c288ec(auStack_420);
      if ((bStack_460 & 1) == 0) {
        plVar4 = *(long **)(unaff_x21 + 200);
        func_0x00010871e65c(auStack_880);
        func_0x00010871e4c4(uStack_870);
        auStack_420[0] = 1;
        uStack_858 = 0;
        uStack_850 = 0;
        uStack_860 = 0;
        uStack_418 = param_1;
        func_0x00010871ec98(auStack_848,auStack_420);
        (**(code **)(*plVar4 + 0x20))(plVar4);
        func_0x000107c27b3c(auStack_848);
        func_0x00010871ec10();
        func_0x00010871e5e0();
        func_0x00010871e4f8();
        unaff_x20 = unaff_x19;
      }
      func_0x000107c288cc(auStack_830);
    }
    FUN_1086569a0();
    param_3 = unaff_x20;
  }
  func_0x00010086526c(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107c27b3c(auStack_848);
  func_0x00010871ec10();
  func_0x00010871e5e0();
  func_0x00010871e4f8();
  func_0x000107c288cc(auStack_830);
  puVar2 = auStack_458;
  FUN_1086569a0();
  func_0x00010871e260();
  if (*param_3 != param_3[1]) {
    lStack_8c8 = 0;
    lStack_8c0 = 0;
    uStack_8b8 = 0;
    lStack_8e0 = 0;
    lStack_8d8 = 0;
    uStack_8d0 = 0;
    func_0x000104bf1cec(&lStack_8c8,param_3[1] - *param_3 >> 5);
    func_0x000104bf1cec(&lStack_8e0,param_3[1] - *param_3 >> 5);
    lVar1 = param_3[1];
    for (lVar3 = *param_3; lVar3 != lVar1; lVar3 = lVar3 + 0x20) {
      if (*(int *)(lVar3 + 0x18) == 1) {
        func_0x00010871f3b4(&lStack_8e0);
      }
      else if (*(int *)(lVar3 + 0x18) == 0) {
        func_0x00010871f3b4(&lStack_8c8);
      }
    }
    if (lStack_8c8 != lStack_8c0) {
      func_0x00010871f71c(*(undefined8 *)(puVar2 + 200));
      func_0x00010871f1d8();
    }
    if (lStack_8e0 != lStack_8d8) {
      func_0x00010871f71c(*(undefined8 *)(puVar2 + 200));
      (*extraout_x8_00)();
    }
    func_0x000107c27b3c(&lStack_8e0);
    func_0x000107c27b3c(&lStack_8c8);
  }
  return;
}



/* Entry: 1087140ac; end: 1087141b7;  */

void FUN_1087140ac(long param_1,long *param_2)

{
  long lVar1;
  code *extraout_x8;
  long lVar2;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  if (*param_2 != param_2[1]) {
    lStack_48 = 0;
    lStack_40 = 0;
    uStack_38 = 0;
    lStack_60 = 0;
    lStack_58 = 0;
    uStack_50 = 0;
    func_0x000104bf1cec(&lStack_48,param_2[1] - *param_2 >> 5);
    func_0x000104bf1cec(&lStack_60,param_2[1] - *param_2 >> 5);
    lVar1 = param_2[1];
    for (lVar2 = *param_2; lVar2 != lVar1; lVar2 = lVar2 + 0x20) {
      if (*(int *)(lVar2 + 0x18) == 1) {
        func_0x00010871f3b4(&lStack_60);
      }
      else if (*(int *)(lVar2 + 0x18) == 0) {
        func_0x00010871f3b4(&lStack_48);
      }
    }
    if (lStack_48 != lStack_40) {
      func_0x00010871f71c(*(undefined8 *)(param_1 + 200));
      func_0x00010871f1d8();
    }
    if (lStack_60 != lStack_58) {
      func_0x00010871f71c(*(undefined8 *)(param_1 + 200));
      (*extraout_x8)();
    }
    func_0x000107c27b3c(&lStack_60);
    func_0x000107c27b3c(&lStack_48);
  }
  return;
}



/* Entry: 1087141b8; end: 108714297;  */

void FUN_1087141b8(long *param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_68 [16];
  long lStack_58;
  
  uVar3 = param_1[1];
  if (uVar3 < (ulong)param_1[2]) {
    func_0x00010871f150(uVar3);
    lVar2 = uVar3 + 0x20;
    param_1[1] = lVar2;
  }
  else {
    plVar1 = param_1;
    func_0x000104bf20b4(param_1,((long)(uVar3 - *param_1) >> 5) + 1);
    func_0x000104bf1d8c(auStack_68,plVar1,param_1[1] - *param_1 >> 5,param_1 + 2);
    func_0x00010871f150(lStack_58);
    lStack_58 = lStack_58 + 0x20;
    func_0x000107c32ee8();
    func_0x000104bf1d54();
    lVar2 = param_1[1];
    func_0x000104bf1f64(auStack_68);
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 108714298; end: 1087144b3;  */

undefined8 **
FUN_108714298(long param_1,undefined8 **param_2,undefined8 **param_3,undefined8 param_4,long param_5
             )

{
  undefined **ppuVar1;
  char cVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  bool bVar4;
  bool bVar5;
  undefined8 **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long lVar11;
  ulong uVar12;
  undefined8 **ppuVar13;
  uint uVar14;
  uint uVar15;
  undefined8 **ppuVar16;
  undefined8 **ppuVar17;
  undefined8 ***pppuVar18;
  undefined8 ***pppuVar19;
  code *pcVar20;
  int iVar21;
  int extraout_w8;
  int extraout_w8_00;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  code *extraout_x9;
  code *extraout_x9_00;
  long unaff_x19;
  int iVar22;
  undefined8 *puVar23;
  ulong *puVar24;
  long *plVar25;
  long lVar26;
  ulong uVar27;
  undefined **ppuStack_1a20;
  undefined8 uStack_1a18;
  undefined8 uStack_1a10;
  undefined8 uStack_1a08;
  undefined4 uStack_1a00;
  ulong auStack_19f8 [2];
  undefined1 uStack_19e8;
  undefined8 **appuStack_19e0 [5];
  undefined1 uStack_19b8;
  byte bStack_19b0;
  undefined1 auStack_19a8 [192];
  code *pcStack_18e8;
  char cStack_18e0;
  long lStack_18d8;
  char cStack_18d0;
  byte bStack_1888;
  byte bStack_1850;
  undefined1 auStack_1810 [304];
  int iStack_16e0;
  undefined8 uStack_1648;
  byte bStack_1628;
  undefined1 auStack_1620 [976];
  undefined1 uStack_1250;
  undefined8 *apuStack_1248 [4];
  undefined8 uStack_1228;
  undefined8 uStack_1078;
  byte bStack_1070;
  byte bStack_1060;
  byte bStack_ef4;
  byte bStack_e88;
  byte bStack_e78;
  undefined8 *puStack_e70;
  undefined8 uStack_e68;
  undefined8 uStack_e60;
  undefined4 uStack_e58;
  undefined **ppuStack_e50;
  undefined8 *puStack_e48;
  undefined1 uStack_e40;
  undefined2 uStack_e3e;
  undefined1 uStack_e3c;
  ulong uStack_e38;
  undefined1 uStack_e30;
  ulong uStack_e28;
  undefined1 uStack_e20;
  undefined1 uStack_aa0;
  undefined8 *apuStack_a88 [9];
  undefined1 auStack_a40 [112];
  long lStack_9d0;
  long lStack_9c8;
  byte bStack_8c0;
  byte abStack_8a0 [64];
  int iStack_860;
  int iStack_85c;
  undefined1 uStack_858;
  undefined4 uStack_854;
  undefined8 **ppuStack_7d8;
  bool bStack_7d0;
  char cStack_7c8;
  int iStack_798;
  undefined **ppuStack_790;
  byte bStack_788;
  undefined **ppuStack_780;
  byte bStack_778;
  undefined4 uStack_740;
  byte bStack_73c;
  undefined1 auStack_6f8 [24];
  char cStack_6e0;
  byte bStack_6c8;
  char cStack_6b8;
  undefined1 auStack_6b0 [40];
  undefined1 auStack_688 [80];
  undefined1 auStack_638 [24];
  undefined8 **ppuStack_620;
  undefined8 **ppuStack_618;
  undefined8 **ppuStack_610;
  undefined1 uStack_5c8;
  undefined8 *puStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  char acStack_430 [32];
  char cStack_410;
  code *pcStack_408;
  undefined **ppuStack_400;
  ulong uStack_3f8;
  uint uStack_3f0;
  ulong uStack_3e8;
  char cStack_3e0;
  undefined8 uStack_3d8;
  undefined8 *puStack_3c0;
  long *plStack_3b8;
  long *plStack_3b0;
  undefined1 uStack_3a8;
  undefined1 **ppuStack_370;
  code *pcStack_368;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d0;
  long lStack_2c8;
  undefined8 uStack_2c0;
  undefined8 **ppuStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 *puStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 *puStack_270;
  undefined1 uStack_268;
  long lStack_260;
  long lStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 **ppuStack_230;
  undefined8 **ppuStack_228;
  undefined8 ***pppuStack_220;
  long lStack_218;
  undefined1 *puStack_210;
  code *pcStack_208;
  undefined8 *puStack_200;
  undefined8 ***pppuStack_1f8;
  undefined8 ***pppuStack_1f0;
  undefined1 uStack_1e8;
  undefined8 ***pppuStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 **ppuStack_118;
  ulong uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 ***pppuStack_f8;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 ***pppuStack_80;
  undefined8 **ppuStack_78;
  undefined1 auStack_70 [40];
  undefined8 uStack_48;
  
  ppuVar16 = param_2;
  ppuVar13 = param_3;
  func_0x00010871e07c();
  pppuVar19 = (undefined8 ***)(param_5 / 1000);
  ppuVar6 = (undefined8 **)(param_1 + 0x490);
  pppuVar18 = pppuVar19;
  uStack_48 = extraout_x8;
  FUN_1087025a0();
  if ((int)ppuVar6 != 0) {
    func_0x000107c279ac(&puStack_d0,param_2);
    uStack_90 = uStack_c0;
    uStack_98 = uStack_c8;
    puStack_a0 = puStack_d0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    puStack_d0 = (undefined8 *)0x0;
    in_ZR = (uint)param_3 == 5;
    if ((uint)param_3 < 6) {
      uStack_88 = *(undefined4 *)(&UNK_10df4aab0 + ((ulong)param_3 & 0xffffffff) * 4);
    }
    else {
      uStack_88 = 3;
    }
    uStack_b0 = 0;
    uStack_a8 = 0;
    puStack_b8 = (undefined8 *)0x0;
    pppuStack_80 = pppuVar19;
    func_0x000107c27a04(&puStack_b8);
    func_0x000107c27a04(&puStack_d0);
    unaff_x19 = *(long *)(unaff_x19 + 200);
    puStack_e8 = (undefined8 *)0x0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    FUN_108686ae8(auStack_70,&puStack_a0);
    puStack_100 = (undefined8 *)0x0;
    pppuStack_f8 = (undefined8 ***)0x0;
    uStack_f0 = 0;
    ppuStack_118 = &puStack_100;
    uStack_110 = uStack_110 & 0xffffffffffffff00;
    func_0x0001086869dc(&puStack_100,1);
    puStack_200 = &uStack_f0;
    pppuStack_130 = pppuStack_f8;
    ppuStack_78 = pppuStack_f8;
    pppuStack_1f8 = &ppuStack_78;
    pppuStack_1f0 = &pppuStack_130;
    uStack_1e8 = 0;
    FUN_108686ae8(pppuStack_f8,auStack_70);
    pppuVar19 = pppuStack_130 + 5;
    param_3 = (undefined8 **)0x1;
    uStack_1e8 = 1;
    pppuStack_130 = pppuVar19;
    FUN_108686b0c(&puStack_200);
    uStack_110 = CONCAT71(uStack_110._1_7_,1);
    pppuStack_f8 = pppuVar19;
    func_0x000107c28c34(&ppuStack_118);
    ppuStack_118 = (undefined8 **)0x0;
    uStack_110 = 0;
    uStack_108 = 0;
    pppuStack_130 = (undefined8 ***)0x0;
    uStack_128 = 0;
    uStack_120 = 0;
    func_0x00010871f5dc();
    ppuVar16 = &puStack_e8;
    ppuVar13 = &puStack_100;
    pppuVar18 = &ppuStack_118;
    func_0x00010871f15c();
    func_0x000107c27b38(&puStack_200);
    func_0x000107c28c5c(&pppuStack_130);
    func_0x000107c27b3c(&ppuStack_118);
    func_0x000107c28c60(&puStack_100);
    func_0x000107c27a04(auStack_70);
    func_0x000107c27b40(&puStack_e8);
    ppuVar6 = &puStack_a0;
    func_0x000107c27a04(ppuVar6);
  }
  func_0x00010086526c(uStack_48);
  if ((bool)in_ZR) {
    return ppuVar6;
  }
  ___stack_chk_fail();
  func_0x00010871e308();
  func_0x000107c27b38();
  func_0x000107c28c5c(&pppuStack_130);
  func_0x000107c27b3c(&ppuStack_118);
  func_0x000107c28c60(&puStack_100);
  func_0x000107c27a04(auStack_70);
  func_0x000107c27b40(&puStack_e8);
  ppuVar6 = &puStack_a0;
  func_0x000107c27a04();
  func_0x00010871e260();
  pcStack_208 = FUN_1087144b4;
  ppuVar17 = ppuVar16;
  ppuStack_230 = param_2;
  ppuStack_228 = param_3;
  pppuStack_220 = pppuVar19;
  lStack_218 = unaff_x19;
  puStack_210 = &stack0xfffffffffffffff0;
  func_0x00010871e07c();
  ppuVar6 = ppuVar6 + 0x92;
  uStack_238 = extraout_x8_00;
  FUN_108702644();
  if ((int)ppuVar6 != 0) {
    unaff_x19 = *(long *)(unaff_x19 + 200);
    puStack_288 = (undefined8 *)0x0;
    uStack_280 = 0;
    uStack_278 = 0;
    puStack_2a0 = (undefined8 *)0x0;
    uStack_298 = 0;
    uStack_290 = 0;
    ppuStack_2b8 = (undefined8 **)0x0;
    uStack_2b0 = 0;
    uStack_2a8 = 0;
    func_0x000107c279ac(&uStack_2f0,ppuVar16);
    uStack_248 = uStack_2e8;
    uStack_250 = uStack_2f0;
    uStack_240 = uStack_2e0;
    uStack_2e8 = 0;
    uStack_2e0 = 0;
    uStack_2f0 = 0;
    lStack_2c8 = 0;
    uStack_2c0 = 0;
    uStack_2d0 = 0;
    puStack_270 = &uStack_2d0;
    uStack_268 = 0;
    func_0x000108686bb8(&uStack_2d0,1);
    puStack_3c0 = &uStack_2c0;
    lStack_260 = lStack_2c8;
    lStack_258 = lStack_2c8;
    plStack_3b8 = &lStack_260;
    plStack_3b0 = &lStack_258;
    uStack_3a8 = 0;
    func_0x000107c279ac(lStack_2c8,&uStack_250);
    lVar26 = lStack_258 + 0x18;
    uStack_3a8 = 1;
    lStack_258 = lVar26;
    FUN_108686cbc(&puStack_3c0);
    uStack_268 = 1;
    lStack_2c8 = lVar26;
    func_0x000107c28c48(&puStack_270);
    func_0x00010871f5dc();
    ppuVar17 = &puStack_288;
    ppuVar13 = &puStack_2a0;
    pppuVar18 = &ppuStack_2b8;
    func_0x00010871f15c();
    func_0x000107c27b38(&puStack_3c0);
    func_0x000107c28c5c(&uStack_2d0);
    func_0x000107c27a04(&uStack_250);
    func_0x000107c27a04(&uStack_2f0);
    func_0x000107c27b3c(&ppuStack_2b8);
    func_0x000107c28c60(&puStack_2a0);
    ppuVar6 = &puStack_288;
    func_0x000107c27b40(ppuVar6);
  }
  func_0x00010086526c(uStack_238);
  if ((bool)in_ZR) {
    return ppuVar6;
  }
  ___stack_chk_fail();
  func_0x00010871e308();
  func_0x000107c27b38();
  func_0x000107c28c5c(&uStack_2d0);
  func_0x000107c27a04(&uStack_250);
  func_0x000107c27a04(&uStack_2f0);
  func_0x000107c27b3c(&ppuStack_2b8);
  func_0x000107c28c60(&puStack_2a0);
  ppuVar6 = &puStack_288;
  func_0x000107c27b40();
  func_0x00010871e260();
  pcVar20 = FUN_108714670;
  func_0x000107c32ee4();
  ppuStack_370 = &puStack_210;
  pcStack_368 = pcVar20;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pppuVar19 = pppuVar18;
  func_0x00010871e07c();
  uStack_3d8 = extraout_x8_01;
  cVar2 = *(char *)((long)pppuVar19 + 0x1a);
  plVar25 = ppuVar6[0x23];
  func_0x00010871ee7c();
  ppuStack_e50 = (undefined **)CONCAT44(ppuStack_e50._4_4_,0x1cd);
  func_0x000107c278b8(auStack_638,&UNK_10f4b23b9);
  ppuVar6 = &puStack_e70;
  func_0x000107c28818(ppuVar6,auStack_638,cVar2);
  lVar26 = unaff_x19 + 0x4b8;
  FUN_10871d1c8(lVar26,ppuVar17);
  if (lVar26 == 0) {
    iVar22 = 0;
  }
  else {
    lVar26 = unaff_x19 + 0x4b8;
    func_0x00010871ed44();
    iVar22 = (int)*(undefined8 *)(lVar26 + 0x10);
  }
  lVar26 = unaff_x19 + 0x4e0;
  FUN_10871d1c8(lVar26,ppuVar17);
  if (lVar26 == 0) {
    iVar21 = 0;
  }
  else {
    lVar26 = unaff_x19 + 0x4e0;
    func_0x00010871ed44();
    iVar21 = (int)*(undefined8 *)(lVar26 + 0x10);
  }
  (**(code **)(*plVar25 + 0x78))(plVar25,ppuVar6,(long)(iVar21 + iVar22));
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_638);
  func_0x00010871f3dc();
  func_0x00010871ee7c();
  ppuStack_e50 = (undefined **)CONCAT44(ppuStack_e50._4_4_,0x1cc);
  func_0x00010871eaf8(&puStack_e70,0x6d);
  func_0x00010871e5a8();
  func_0x000107c2884c();
  ppuVar6 = (undefined8 **)(unaff_x19 + 0x118);
  func_0x00010871e090(auStack_688,ppuVar6,auStack_6b0);
  func_0x00010871e5a8();
  func_0x000107c2882c();
  func_0x00010871f3dc();
  if (cVar2 != '\0') {
    ppuVar6 = ppuVar17;
    FUN_108866aec(*(undefined8 *)(unaff_x19 + 0xb8));
  }
  puVar24 = (ulong *)(unaff_x19 + 0xb8);
  func_0x00010871f3e4(*puVar24);
  FUN_10869148c(apuStack_a88,&puStack_e70);
  func_0x000107c288ec(&puStack_e70);
  apuStack_1248[0]._0_1_ = 0;
  bStack_e78 = 0;
  auStack_1620[0] = 0;
  uStack_1250 = 0;
  uVar3 = cStack_6b8 == '\x01';
  if ((bool)uVar3) {
    if ((bStack_8c0 & 1) != 0) goto LAB_1087152ec;
    if (((*(byte *)((long)pppuVar18 + 0x19) & 1) == 0) &&
       ((lStack_9c8 - lStack_9d0) / 0x18 == (long)*(int *)(ppuVar13 + 4))) {
      bVar5 = false;
    }
    else {
      FUN_108845eac(&puStack_e70,ppuVar13);
      ppuVar6 = &puStack_e70;
      func_0x000107c28904(&lStack_9d0);
      func_0x000107c27a04(&puStack_e70);
      bVar5 = true;
    }
    uVar14 = (uint)ppuVar6;
    if (cStack_7c8 != *(char *)((long)ppuVar13 + 0x101)) {
      cStack_7c8 = *(char *)((long)ppuVar13 + 0x101);
      bVar5 = true;
    }
    if (*(char *)(pppuVar18 + 3) == '\x01') {
      func_0x00010871f420(ppuVar13[0xc],auStack_a40);
      bVar5 = true;
    }
    if (*(char *)((long)pppuVar18 + 0x1b) == '\x01') {
      func_0x00010871f674(ppuVar13[0x10]);
      uVar15 = *(int *)(extraout_x8_02 + 0x70) - 1;
      if (uVar15 < 3) {
        uStack_854 = *(undefined4 *)(&UNK_10df4aac8 + (ulong)uVar15 * 4);
      }
      else {
        uStack_854 = 1;
      }
      bVar5 = true;
    }
    bVar4 = *(char *)((long)pppuVar18 + 0x1d) == '\x01';
    if (bVar4) {
      uStack_858 = *(undefined1 *)((long)pppuVar18 + 0x1c);
      bVar5 = true;
    }
    if ((((ulong)pppuVar18[3] & 1) != 0) || ((*(byte *)((long)pppuVar18 + 0x19) & 1) != 0)) {
      func_0x00010871e688();
      if (bVar4) {
        if ((abStack_8a0[0] & 1) != 0) {
LAB_1087149e0:
          abStack_8a0[0] = 0;
LAB_1087149e4:
          lVar26 = 0x1e0;
          if (extraout_w8 == 0) {
            lVar26 = 0x3b8;
          }
          *(undefined8 *)((long)apuStack_a88 + lVar26) = 0;
          lVar26 = 0x1e8;
          if (extraout_w8 == 0) {
            lVar26 = 0x3c0;
          }
          *(undefined1 *)((long)apuStack_a88 + lVar26) = 0;
          bVar5 = true;
        }
      }
      else if (((bStack_6c8 & 1) != 0) || (abStack_8a0[0] != 0)) {
        if (abStack_8a0[0] != 0) goto LAB_1087149e0;
        goto LAB_1087149e4;
      }
    }
    if (*(char *)(pppuVar18 + 0x24) == '\x01') {
      ppuStack_7d8 = pppuVar18[0x23];
      bStack_7d0 = pppuVar18[0x23] != (undefined8 **)0x0;
      bVar5 = true;
    }
    if ((bStack_73c & 1) == 0) {
      uVar12 = (ulong)*(uint *)((long)ppuVar13 + 0x104);
      func_0x000107c29e30();
      if (uVar12 >> 0x20 != 0) {
        uStack_740 = (int)uVar12;
        bStack_73c = (byte)(uVar12 >> 0x20);
        bVar5 = true;
      }
    }
    ppuVar1 = &PTR_PTR_11327ab60;
    if ((undefined **)ppuVar13[0x10] != (undefined **)0x0) {
      ppuVar1 = (undefined **)ppuVar13[0x10];
    }
    ppuVar7 = ppuVar1;
    func_0x000108846074();
    ppuVar8 = ppuVar1;
    func_0x0001088460ac();
    ppuVar9 = ppuVar1;
    func_0x00010884602c();
    ppuVar10 = ppuVar1;
    uVar15 = uVar14;
    func_0x000108846050();
    func_0x00010871e6ac(*(undefined4 *)(ppuVar1 + 10));
    if ((iStack_860 == (int)ppuVar7 && iStack_85c == extraout_w8_00) && iStack_798 == (int)ppuVar8)
    {
      if (((uint)bStack_788 != (uVar14 & 0xff)) || (bStack_788 == 0)) {
        if ((uint)bStack_788 == (uVar14 & 0xff)) goto LAB_1087151c4;
        goto LAB_108714adc;
      }
      if (ppuStack_790 != ppuVar9) goto LAB_108714adc;
LAB_1087151c4:
      if (((uint)bStack_778 == (uVar15 & 0xff)) && (bStack_778 != 0)) {
        if (ppuStack_780 != ppuVar10) goto LAB_108714adc;
      }
      else if ((uint)bStack_778 != (uVar15 & 0xff)) goto LAB_108714adc;
    }
    else {
LAB_108714adc:
      bStack_788 = (byte)uVar14;
      bVar5 = true;
      bStack_778 = (byte)uVar15;
      iStack_860 = (int)ppuVar7;
      iStack_798 = (int)ppuVar8;
      ppuStack_790 = ppuVar9;
      ppuStack_780 = ppuVar10;
    }
    if ((cStack_6e0 == '\x01') && ((*(byte *)((long)ppuVar13 + 0x11) >> 3 & 1) == 0)) {
      func_0x000107c2890c(auStack_6f8);
LAB_108714b30:
      FUN_1088665d4(*puVar24,apuStack_a88);
      func_0x00010871f3d0();
      func_0x00010871e7d8();
      func_0x000107c288f0();
      func_0x00010871e42c();
    }
    else if (bVar5) goto LAB_108714b30;
    func_0x00010871f3d0();
    func_0x00010871f0e4();
    func_0x00010871e42c();
  }
  else {
    func_0x000107c29f60(auStack_19f8,*puVar24,ppuVar17,0);
    if ((bStack_1888 & 1) == 0) {
      if (pppuVar18[4] == (undefined8 **)0x0) {
        ppuStack_618 = pppuVar18[1];
        ppuStack_620 = *pppuVar18;
        ppuStack_610 = pppuVar18[2];
        func_0x00010871e454(&puStack_e70,puVar24,ppuVar17,appuStack_19e0,&ppuStack_620);
      }
      else {
        FUN_1087134f4(&puStack_e70,ppuVar17,puVar24,0,pppuVar18[4],unaff_x19 + 0x188);
        FUN_1088665d4(*puVar24,&puStack_e70);
      }
      func_0x00010871e7d8();
      func_0x000107c28924();
      func_0x000107c288d0(&puStack_e70);
      FUN_10871bca8(&puStack_e70,apuStack_1248);
      func_0x00010871f0e4();
      func_0x00010871e42c();
    }
    func_0x000107c287e4(auStack_19f8);
  }
  lVar26 = unaff_x19 + 0x4b8;
  func_0x00010871ed44();
  lVar11 = unaff_x19 + 0x4e0;
  func_0x00010871ed44();
  puStack_e70 = (undefined8 *)((ulong)puStack_e70 & 0xffffffffffffff00);
  uStack_aa0 = 0;
  if (*(long *)(lVar26 + 0x10) == 0 && *(long *)(lVar11 + 0x10) == 0) {
    auStack_19f8[0] = auStack_19f8[0] & 0xffffffffffffff00;
    bStack_1628 = 0;
  }
  else {
    uVar12 = *puVar24;
    func_0x000107c28ee4(&ppuStack_620,uVar12,ppuVar17);
    if (*(long *)(lVar26 + 0x10) != 0) {
      uVar27 = *puVar24;
      pcStack_408 = (code *)0x10871c888;
      ppuStack_400 = &PTR_FUN_110a68ca8;
      func_0x00010871eb80();
      func_0x00010871f5f0();
      *(long *)(uVar12 + 0x10) = unaff_x19;
      *(undefined8 ***)(uVar12 + 0x18) = ppuVar17;
      *(undefined8 ****)(uVar12 + 0x20) = &ppuStack_620;
      uStack_3f8 = uVar12;
      FUN_1086a233c(uVar27,&ppuStack_620,lVar26,&pcStack_408);
      func_0x00010871e384();
    }
    if (*(long *)(lVar11 + 0x10) != 0) {
      acStack_430[0] = '\0';
      uVar27 = *puVar24;
      pcStack_408 = FUN_10871c8f0;
      ppuStack_400 = &PTR_FUN_110a68cc0;
      uVar12 = 0x30;
      __Znwm();
      func_0x00010871f5f0();
      *(char **)(uVar12 + 0x10) = acStack_430;
      *(long *)(uVar12 + 0x18) = unaff_x19;
      *(undefined8 ***)(uVar12 + 0x20) = ppuVar17;
      *(undefined8 ****)(uVar12 + 0x28) = &ppuStack_620;
      uStack_3f8 = uVar12;
      FUN_1086a233c(uVar27,&ppuStack_620,lVar11,&pcStack_408);
      func_0x00010871e384();
      if (acStack_430[0] == '\x01') {
        func_0x000107c32ec8(*(undefined8 *)(unaff_x19 + 0x158));
        (*extraout_x8_03)();
      }
    }
    FUN_1086d6d80(auStack_19f8,&puStack_e70);
    func_0x00010871ee70();
    func_0x000107c287e4();
  }
  func_0x00010871e42c();
  FUN_108715530(apuStack_1248,auStack_19f8);
  func_0x00010871f2c8();
  FUN_10871ce24(unaff_x19 + 0x4b8,ppuVar17);
  FUN_10871ce24(unaff_x19 + 0x4e0,ppuVar17);
  FUN_1086a3c30(ppuVar13,unaff_x19 + 0x78);
  bVar5 = pppuVar18[5] != (undefined8 **)0x0;
  lVar26 = (long)pppuVar18[5] * 1000;
  uVar12 = 2;
  if (!bVar5) {
    uVar12 = 0;
  }
  auStack_19f8[0] = uVar12;
  auStack_19f8[1] = lVar26;
  uStack_19e8 = bVar5;
  func_0x00010871ea14(&puStack_e70);
  FUN_108710f60();
  func_0x00010871e7d8();
  FUN_108715530();
  func_0x00010871e42c();
  if (*(char *)(pppuVar18 + 0x20) == '\x01') {
    func_0x00010871ea14(&puStack_e70);
    func_0x00010871ed6c();
    func_0x00010871e7d8();
    FUN_108715530();
    func_0x00010871e42c();
  }
  if (*(char *)(pppuVar18 + 0x1e) == '\x01') {
    bVar4 = ((ulong)pppuVar18[0x1d] & 1) == 0;
    if (bVar4) {
      auStack_19f8[0] = auStack_19f8[0] & 0xffffffffffffff00;
    }
    else {
      auStack_19f8[1] = (long)pppuVar18[0x1c] * 1000;
      auStack_19f8[0] = CONCAT44(auStack_19f8[0]._4_4_,1);
    }
    uStack_19e8 = !bVar4;
    func_0x00010871edac(&puStack_e70);
    (*extraout_x9)();
    func_0x00010871e7d8();
    FUN_108715530();
    func_0x00010871e42c();
  }
  if (*(char *)(pppuVar18 + 0x22) == '\x01') {
    func_0x00010871edac(&puStack_e70);
    (*extraout_x9_00)();
    func_0x00010871e7d8();
    FUN_108715530();
    func_0x00010871e42c();
  }
  func_0x0001086a3c98(ppuVar13,unaff_x19 + 0x78);
  auStack_19f8[0] = uVar12;
  auStack_19f8[1] = lVar26;
  uStack_19e8 = bVar5;
  func_0x00010871ea14(&puStack_e70);
  FUN_108711054();
  func_0x00010871e7d8();
  FUN_108715530();
  func_0x00010871e42c();
  plVar25 = (long *)(unaff_x19 + 0x188);
  func_0x000107c29650();
  lVar26 = 0x11372c6a8;
  if (*plVar25 != 0) {
    lVar26 = *plVar25;
  }
  if ((*(uint *)(ppuVar13 + 2) & 1) == 0) {
    acStack_430[0] = '\0';
    cStack_410 = '\0';
    if ((*(uint *)(ppuVar13 + 2) >> 4 & 1) != 0) goto LAB_108714fe0;
LAB_108714e50:
    auStack_19f8[0] = auStack_19f8[0] & 0xffffffffffffff00;
    bStack_19b0 = 0;
LAB_108714e58:
    ppuStack_620 = (undefined8 **)((ulong)ppuStack_620 & 0xffffffffffffff00);
    uStack_5c8 = 0;
  }
  else {
    func_0x0001086aaa9c(acStack_430,ppuVar13[0xd]);
    if ((*(uint *)(ppuVar13 + 2) >> 4 & 1) == 0) goto LAB_108714e50;
LAB_108714fe0:
    FUN_1086ab8b8(auStack_19f8,ppuVar13[0x11]);
    if ((cStack_410 != '\x01') || ((bStack_19b0 & 1) == 0)) goto LAB_108714e58;
    puVar23 = ppuVar13[0x1c];
    FUN_10883e734(&pcStack_408,auStack_19f8,lVar26);
    cVar2 = (char)uStack_3f8;
    if (((uStack_3f8 & 1) == 0) && (cStack_3e0 == '\0')) goto LAB_108714e58;
    func_0x000107c29ee0(&puStack_450,acStack_430);
    uStack_e68 = uStack_448;
    puStack_e70 = puStack_450;
    uStack_e60 = uStack_440;
    uStack_448 = 0;
    uStack_440 = 0;
    puStack_450 = (undefined8 *)0x0;
    ppuStack_e50 = ppuStack_400;
    uStack_e58 = pcStack_408._0_4_;
    if (cVar2 == '\0') {
      uStack_e58 = 0;
      ppuStack_e50 = (undefined **)0x0;
    }
    uStack_e40 = 0;
    uStack_e3e = 3;
    uStack_e3c = uStack_19b8;
    if (cStack_3e0 == '\0') {
      uStack_e30 = false;
      uStack_e38 = uStack_e38 & 0xffffffffffffff00;
      uStack_e28 = uStack_e28 & 0xffffffffffffff00;
    }
    else {
      uStack_e38 = (ulong)uStack_3f0;
      uStack_e30 = uStack_e38 != 0;
      uStack_e28 = uStack_3e8;
    }
    uStack_e20 = cStack_3e0 != '\0' && uStack_3e8 != 0;
    puStack_e48 = puVar23;
    func_0x00010871ee70();
    FUN_1086d736c();
    func_0x000107c27914(&puStack_e70);
    func_0x000107c27914(&puStack_450);
  }
  FUN_1086d73b8(auStack_19f8);
  func_0x0001086d73d8(acStack_430);
  func_0x00010871ea14(&puStack_e70);
  FUN_108715544();
  func_0x00010871e7d8();
  FUN_108715530();
  func_0x00010871e42c();
  if ((bStack_e78 == 1) && ((bStack_1070 & 1) != 0)) {
    FUN_108862de8(&puStack_e70,*puVar24,apuStack_1248,uStack_1078);
    func_0x000107c28998(auStack_19f8,&puStack_e70);
    func_0x000107c28948(&puStack_e70);
    if ((bStack_1850 & 1) != 0) {
      func_0x000107c28974(&puStack_e70,auStack_19a8);
      FUN_10870e4f0(unaff_x19,apuStack_1248,&puStack_e70);
      func_0x000107c2a5a4(&puStack_e70);
    }
    func_0x000107c288dc(auStack_19f8);
  }
  uVar3 = *(char *)(unaff_x19 + 0x191) == '\x01';
  if (((bool)uVar3) && ((bStack_e78 & 1) != 0)) {
    ppuVar6 = apuStack_1248;
    func_0x000107c28db4(ppuVar6,puVar24);
    if (((int)ppuVar6 == 0) || ((bStack_ef4 & 1) != 0)) goto LAB_108714f94;
    func_0x000107c291e0(auStack_19f8,apuStack_1248);
    uVar3 = *(char *)(unaff_x19 + 0x252) == '\0';
    lVar26 = 0x1e0;
    if ((bool)uVar3) {
      lVar26 = 0x3b8;
    }
    *(undefined8 *)((long)auStack_19f8 + lVar26) = uStack_1228;
    lVar26 = 0x1e8;
    if ((bool)uVar3) {
      lVar26 = 0x3c0;
    }
    *(undefined1 *)((long)auStack_19f8 + lVar26) = 1;
    FUN_1088665d4(*(undefined8 *)(unaff_x19 + 0xb8),auStack_19f8);
    FUN_108691520(&puStack_e70,auStack_19f8);
    func_0x000107c288d0(auStack_19f8);
  }
  else {
LAB_108714f94:
    puStack_e70 = (undefined8 *)((ulong)puStack_e70 & 0xffffffffffffff00);
    uStack_aa0 = 0;
  }
  func_0x00010871e7d8();
  FUN_108715530();
  func_0x00010871e42c();
  if ((*(byte *)(unaff_x19 + 0x370) & 1) == 0) {
    if (bStack_e78 == 1) {
      FUN_1086d7004(auStack_19f8,apuStack_1248);
    }
    else {
      func_0x00010871f3e4(*puVar24);
      FUN_10869148c(auStack_19f8,&puStack_e70);
      func_0x000107c288ec(&puStack_e70);
    }
    uVar3 = bStack_1628 == 1 && iStack_16e0 == 2;
    if (((bStack_1628 == 1 && iStack_16e0 == 2) && (uVar3 = 0, cStack_18e0 == '\x01')) &&
       (uVar3 = pppuVar18[0x25] == appuStack_19e0[0],
       (long)appuStack_19e0[0] <= (long)pppuVar18[0x25])) {
      FUN_1088636fc(&puStack_e70,*puVar24,ppuVar17);
      FUN_1087155f0(&pcStack_408,&puStack_e70);
      FUN_10871d008(&puStack_e70);
      uVar3 = 0;
      if ((char)uStack_3f8 == '\x01') {
        pcVar20 = pcStack_408;
        if (((ulong)ppuStack_400 & 1) == 0) {
          pcVar20 = (code *)0x0;
        }
        uVar3 = pcStack_18e8 == pcVar20;
        if ((long)pcVar20 < (long)pcStack_18e8) {
          pcStack_18e8 = pcStack_408;
          cStack_18e0 = (char)ppuStack_400;
          if (cStack_18d0 == '\0') {
            lStack_18d8 = 0;
          }
          uStack_19b8 = (long)pcVar20 <= lStack_18d8;
          if ((long)pcVar20 <= lStack_18d8) {
            uStack_1648 = 0;
          }
          FUN_1088665d4(*puVar24,auStack_19f8);
          uVar3 = bStack_e78 == bStack_1628;
          if ((bool)uVar3) {
            if (bStack_e78 != 0) {
              func_0x00010871c23c(apuStack_1248,auStack_19f8);
            }
          }
          else if (bStack_e78 == 0) {
            FUN_1086d7048(apuStack_1248,auStack_19f8);
          }
          else {
            func_0x000107c288f8(apuStack_1248);
          }
          uStack_1a10 = 0;
          uStack_1a08 = 0;
          ppuStack_1a20 = &PTR_FUN_110a609a8;
          uStack_1a18 = 0;
          uStack_1a00 = 0x2c8;
          func_0x00010871e378(*(undefined8 *)(unaff_x19 + 0x118));
          (*extraout_x8_04)();
          func_0x000107c2882c(&ppuStack_1a20);
        }
      }
    }
    func_0x00010871f2c8();
  }
  ppuVar6 = (undefined8 **)(unaff_x19 + 0x508);
  func_0x000100865128(&puStack_e70,ppuVar6);
  if ((puStack_e70 == (undefined8 *)0x0) ||
     (puVar23 = puStack_e70, FUN_108710b20(puStack_e70,ppuVar17), ppuVar6 = ppuVar17,
     ((ulong)puVar23 & 1) == 0)) {
    ppuVar17 = ppuVar6;
    func_0x000100865288(&puStack_e70);
    FUN_10868ee40();
    if (((((ulong)ppuVar13 & 1) == 0) && ((bStack_e78 & 1) != 0)) &&
       (((func_0x00010871e688(), (bool)uVar3 || ((bStack_e88 & 1) == 0)) && ((bStack_1060 & 1) == 0)
        ))) {
      func_0x00010871e354();
      ppuVar17 = apuStack_1248;
      func_0x00010871e274();
    }
  }
  else {
    func_0x000100865288(&puStack_e70);
  }
  func_0x00010871ee70();
  FUN_1086d0498();
  ppuVar6 = ppuVar17;
LAB_1087152ec:
  func_0x000107c288cc(auStack_1620);
  func_0x000107c288cc(apuStack_1248);
  ppuVar13 = apuStack_a88;
  func_0x000107c288cc();
  func_0x00010871f0b0();
  func_0x00010086526c(uStack_3d8);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    func_0x000107c2882c(&ppuStack_1a20);
    func_0x00010871f2c8();
    func_0x00010871ee70();
    FUN_1086d0498();
    func_0x000107c288cc(auStack_1620);
    func_0x000107c288cc(apuStack_1248);
    func_0x000107c288cc(apuStack_a88);
    func_0x00010871f0b0();
    func_0x00010871e260();
    func_0x00010871f304();
    func_0x00010871f838((uint)ppuVar6 & 0x6f);
    func_0x00010871f450();
    func_0x00010871e2a8();
    return ppuVar6;
  }
  return ppuVar13;
}



/* Entry: 1087144b4; end: 10871466f;  */

ulong * FUN_1087144b4(long param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  undefined **ppuVar1;
  char cVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  bool bVar4;
  bool bVar5;
  ulong *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined1 *puVar12;
  ulong *puVar13;
  uint uVar14;
  uint uVar15;
  code *pcVar16;
  int iVar17;
  int extraout_w8;
  int extraout_w8_00;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x9;
  code *extraout_x9_00;
  long unaff_x19;
  int iVar18;
  ulong uVar19;
  ulong *puVar20;
  long *plVar21;
  long lVar22;
  ulong uVar23;
  undefined **ppuStack_1820;
  undefined8 uStack_1818;
  undefined8 uStack_1810;
  undefined8 uStack_1808;
  undefined4 uStack_1800;
  ulong auStack_17f8 [2];
  undefined1 uStack_17e8;
  ulong auStack_17e0 [5];
  undefined1 uStack_17b8;
  byte bStack_17b0;
  undefined1 auStack_17a8 [192];
  code *pcStack_16e8;
  char cStack_16e0;
  long lStack_16d8;
  char cStack_16d0;
  byte bStack_1688;
  byte bStack_1650;
  undefined1 auStack_1610 [304];
  int iStack_14e0;
  undefined8 uStack_1448;
  byte bStack_1428;
  undefined1 auStack_1420 [976];
  undefined1 uStack_1050;
  undefined1 auStack_1048 [32];
  undefined8 uStack_1028;
  undefined8 uStack_e78;
  byte bStack_e70;
  byte bStack_e60;
  byte bStack_cf4;
  byte bStack_c88;
  byte bStack_c78;
  ulong uStack_c70;
  undefined8 uStack_c68;
  undefined8 uStack_c60;
  undefined4 uStack_c58;
  undefined **ppuStack_c50;
  ulong uStack_c48;
  undefined1 uStack_c40;
  undefined2 uStack_c3e;
  undefined1 uStack_c3c;
  ulong uStack_c38;
  undefined1 uStack_c30;
  ulong uStack_c28;
  undefined1 uStack_c20;
  undefined1 uStack_8a0;
  ulong auStack_888 [9];
  undefined1 auStack_840 [112];
  long lStack_7d0;
  long lStack_7c8;
  byte bStack_6c0;
  byte abStack_6a0 [64];
  int iStack_660;
  int iStack_65c;
  undefined1 uStack_658;
  undefined4 uStack_654;
  ulong uStack_5d8;
  undefined1 uStack_5d0;
  char cStack_5c8;
  int iStack_598;
  undefined **ppuStack_590;
  byte bStack_588;
  undefined **ppuStack_580;
  byte bStack_578;
  undefined4 uStack_540;
  byte bStack_53c;
  undefined1 auStack_4f8 [24];
  char cStack_4e0;
  byte bStack_4c8;
  char cStack_4b8;
  undefined1 auStack_4b0 [40];
  undefined1 auStack_488 [80];
  undefined1 auStack_438 [24];
  ulong uStack_420;
  ulong uStack_418;
  ulong uStack_410;
  undefined1 uStack_3c8;
  ulong uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  char acStack_230 [32];
  char cStack_210;
  code *pcStack_208;
  undefined **ppuStack_200;
  ulong uStack_1f8;
  uint uStack_1f0;
  ulong uStack_1e8;
  char cStack_1e0;
  undefined8 uStack_1d8;
  undefined8 *puStack_1c0;
  long *plStack_1b8;
  long *plStack_1b0;
  undefined1 uStack_1a8;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  ulong auStack_b8 [9];
  undefined8 *puStack_70;
  undefined1 uStack_68;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar13 = param_2;
  func_0x00010871e07c();
  puVar6 = (ulong *)(param_1 + 0x490);
  uStack_38 = extraout_x8;
  FUN_108702644();
  if ((int)puVar6 != 0) {
    unaff_x19 = *(long *)(unaff_x19 + 200);
    auStack_b8[6] = 0;
    auStack_b8[7] = 0;
    auStack_b8[8] = 0;
    auStack_b8[3] = 0;
    auStack_b8[4] = 0;
    auStack_b8[5] = 0;
    auStack_b8[0] = 0;
    auStack_b8[1] = 0;
    auStack_b8[2] = 0;
    func_0x000107c279ac(&uStack_f0,param_2);
    uStack_48 = uStack_e8;
    uStack_50 = uStack_f0;
    uStack_40 = uStack_e0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_f0 = 0;
    lStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d0 = 0;
    puStack_70 = &uStack_d0;
    uStack_68 = 0;
    func_0x000108686bb8(&uStack_d0,1);
    puStack_1c0 = &uStack_c0;
    lStack_60 = lStack_c8;
    lStack_58 = lStack_c8;
    plStack_1b8 = &lStack_60;
    plStack_1b0 = &lStack_58;
    uStack_1a8 = 0;
    func_0x000107c279ac(lStack_c8,&uStack_50);
    lVar22 = lStack_58 + 0x18;
    uStack_1a8 = 1;
    lStack_58 = lVar22;
    FUN_108686cbc(&puStack_1c0);
    uStack_68 = 1;
    lStack_c8 = lVar22;
    func_0x000107c28c48(&puStack_70);
    func_0x00010871f5dc();
    puVar13 = auStack_b8 + 6;
    param_3 = auStack_b8 + 3;
    param_4 = auStack_b8;
    func_0x00010871f15c();
    func_0x000107c27b38(&puStack_1c0);
    func_0x000107c28c5c(&uStack_d0);
    func_0x000107c27a04(&uStack_50);
    func_0x000107c27a04(&uStack_f0);
    func_0x000107c27b3c(auStack_b8);
    func_0x000107c28c60(auStack_b8 + 3);
    puVar6 = auStack_b8 + 6;
    func_0x000107c27b40(puVar6);
  }
  func_0x00010086526c(uStack_38);
  if ((bool)in_ZR) {
    return puVar6;
  }
  ___stack_chk_fail();
  func_0x00010871e308();
  func_0x000107c27b38();
  func_0x000107c28c5c(&uStack_d0);
  func_0x000107c27a04(&uStack_50);
  func_0x000107c27a04(&uStack_f0);
  func_0x000107c27b3c(auStack_b8);
  func_0x000107c28c60(auStack_b8 + 3);
  puVar20 = auStack_b8 + 6;
  func_0x000107c27b40();
  func_0x00010871e260();
  pcVar16 = FUN_108714670;
  func_0x000107c32ee4();
  puStack_170 = &stack0xfffffffffffffff0;
  pcStack_168 = pcVar16;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar6 = param_4;
  func_0x00010871e07c();
  cVar2 = *(char *)((long)puVar6 + 0x1a);
  plVar21 = (long *)puVar20[0x23];
  uStack_1d8 = extraout_x8_00;
  func_0x00010871ee7c();
  ppuStack_c50 = (undefined **)CONCAT44(ppuStack_c50._4_4_,0x1cd);
  func_0x000107c278b8(auStack_438,&UNK_10f4b23b9);
  puVar6 = &uStack_c70;
  func_0x000107c28818(puVar6,auStack_438,cVar2);
  lVar22 = unaff_x19 + 0x4b8;
  FUN_10871d1c8(lVar22,puVar13);
  if (lVar22 == 0) {
    iVar18 = 0;
  }
  else {
    lVar22 = unaff_x19 + 0x4b8;
    func_0x00010871ed44();
    iVar18 = (int)*(undefined8 *)(lVar22 + 0x10);
  }
  lVar22 = unaff_x19 + 0x4e0;
  FUN_10871d1c8(lVar22,puVar13);
  if (lVar22 == 0) {
    iVar17 = 0;
  }
  else {
    lVar22 = unaff_x19 + 0x4e0;
    func_0x00010871ed44();
    iVar17 = (int)*(undefined8 *)(lVar22 + 0x10);
  }
  (**(code **)(*plVar21 + 0x78))(plVar21,puVar6,(long)(iVar17 + iVar18));
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_438);
  func_0x00010871f3dc();
  func_0x00010871ee7c();
  ppuStack_c50 = (undefined **)CONCAT44(ppuStack_c50._4_4_,0x1cc);
  func_0x00010871eaf8(&uStack_c70,0x6d);
  func_0x00010871e5a8();
  func_0x000107c2884c();
  puVar6 = (ulong *)(unaff_x19 + 0x118);
  func_0x00010871e090(auStack_488,puVar6,auStack_4b0);
  func_0x00010871e5a8();
  func_0x000107c2882c();
  func_0x00010871f3dc();
  if (cVar2 != '\0') {
    puVar6 = puVar13;
    FUN_108866aec(*(undefined8 *)(unaff_x19 + 0xb8));
  }
  puVar20 = (ulong *)(unaff_x19 + 0xb8);
  func_0x00010871f3e4(*puVar20);
  FUN_10869148c(auStack_888,&uStack_c70);
  func_0x000107c288ec(&uStack_c70);
  auStack_1048[0] = 0;
  bStack_c78 = 0;
  auStack_1420[0] = 0;
  uStack_1050 = 0;
  uVar3 = cStack_4b8 == '\x01';
  if ((bool)uVar3) {
    if ((bStack_6c0 & 1) != 0) goto LAB_1087152ec;
    if (((*(byte *)((long)param_4 + 0x19) & 1) == 0) &&
       ((lStack_7c8 - lStack_7d0) / 0x18 == (long)(int)param_3[4])) {
      bVar5 = false;
    }
    else {
      FUN_108845eac(&uStack_c70,param_3);
      puVar6 = &uStack_c70;
      func_0x000107c28904(&lStack_7d0);
      func_0x000107c27a04(&uStack_c70);
      bVar5 = true;
    }
    uVar14 = (uint)puVar6;
    if (cStack_5c8 != *(char *)((long)param_3 + 0x101)) {
      bVar5 = true;
      cStack_5c8 = *(char *)((long)param_3 + 0x101);
    }
    if ((char)param_4[3] == '\x01') {
      func_0x00010871f420(param_3[0xc],auStack_840);
      bVar5 = true;
    }
    if (*(char *)((long)param_4 + 0x1b) == '\x01') {
      func_0x00010871f674(param_3[0x10]);
      uVar15 = *(int *)(extraout_x8_01 + 0x70) - 1;
      if (uVar15 < 3) {
        uStack_654 = *(undefined4 *)(&UNK_10df4aac8 + (ulong)uVar15 * 4);
      }
      else {
        uStack_654 = 1;
      }
      bVar5 = true;
    }
    bVar4 = *(char *)((long)param_4 + 0x1d) == '\x01';
    if (bVar4) {
      uStack_658 = *(undefined1 *)((long)param_4 + 0x1c);
      bVar5 = true;
    }
    if (((param_4[3] & 1) != 0) || ((*(byte *)((long)param_4 + 0x19) & 1) != 0)) {
      func_0x00010871e688();
      if (bVar4) {
        if ((abStack_6a0[0] & 1) != 0) {
LAB_1087149e0:
          abStack_6a0[0] = 0;
LAB_1087149e4:
          lVar22 = 0x1e0;
          if (extraout_w8 == 0) {
            lVar22 = 0x3b8;
          }
          *(undefined8 *)((long)auStack_888 + lVar22) = 0;
          lVar22 = 0x1e8;
          if (extraout_w8 == 0) {
            lVar22 = 0x3c0;
          }
          *(undefined1 *)((long)auStack_888 + lVar22) = 0;
          bVar5 = true;
        }
      }
      else if (((bStack_4c8 & 1) != 0) || (abStack_6a0[0] != 0)) {
        if (abStack_6a0[0] != 0) goto LAB_1087149e0;
        goto LAB_1087149e4;
      }
    }
    if ((char)param_4[0x24] == '\x01') {
      uStack_5d8 = param_4[0x23];
      uStack_5d0 = uStack_5d8 != 0;
      bVar5 = true;
    }
    if ((bStack_53c & 1) == 0) {
      uVar19 = (ulong)*(uint *)((long)param_3 + 0x104);
      func_0x000107c29e30();
      if (uVar19 >> 0x20 != 0) {
        uStack_540 = (undefined4)uVar19;
        bStack_53c = (byte)(uVar19 >> 0x20);
        bVar5 = true;
      }
    }
    ppuVar1 = &PTR_PTR_11327ab60;
    if ((undefined **)param_3[0x10] != (undefined **)0x0) {
      ppuVar1 = (undefined **)param_3[0x10];
    }
    ppuVar7 = ppuVar1;
    func_0x000108846074();
    ppuVar8 = ppuVar1;
    func_0x0001088460ac();
    ppuVar9 = ppuVar1;
    func_0x00010884602c();
    ppuVar10 = ppuVar1;
    uVar15 = uVar14;
    func_0x000108846050();
    func_0x00010871e6ac(*(undefined4 *)(ppuVar1 + 10));
    if ((iStack_660 == (int)ppuVar7 && iStack_65c == extraout_w8_00) && iStack_598 == (int)ppuVar8)
    {
      if (((uint)bStack_588 != (uVar14 & 0xff)) || (bStack_588 == 0)) {
        if ((uint)bStack_588 == (uVar14 & 0xff)) goto LAB_1087151c4;
        goto LAB_108714adc;
      }
      if (ppuStack_590 != ppuVar9) goto LAB_108714adc;
LAB_1087151c4:
      if (((uint)bStack_578 == (uVar15 & 0xff)) && (bStack_578 != 0)) {
        if (ppuStack_580 != ppuVar10) goto LAB_108714adc;
      }
      else if ((uint)bStack_578 != (uVar15 & 0xff)) goto LAB_108714adc;
    }
    else {
LAB_108714adc:
      bStack_588 = (byte)uVar14;
      bVar5 = true;
      bStack_578 = (byte)uVar15;
      iStack_660 = (int)ppuVar7;
      iStack_598 = (int)ppuVar8;
      ppuStack_590 = ppuVar9;
      ppuStack_580 = ppuVar10;
    }
    if ((cStack_4e0 == '\x01') && ((*(byte *)((long)param_3 + 0x11) >> 3 & 1) == 0)) {
      func_0x000107c2890c(auStack_4f8);
LAB_108714b30:
      FUN_1088665d4(*puVar20,auStack_888);
      func_0x00010871f3d0();
      func_0x00010871e7d8();
      func_0x000107c288f0();
      func_0x00010871e42c();
    }
    else if (bVar5) goto LAB_108714b30;
    func_0x00010871f3d0();
    func_0x00010871f0e4();
    func_0x00010871e42c();
  }
  else {
    func_0x000107c29f60(auStack_17f8,*puVar20,puVar13,0);
    if ((bStack_1688 & 1) == 0) {
      if (param_4[4] == 0) {
        uStack_418 = param_4[1];
        uStack_420 = *param_4;
        uStack_410 = param_4[2];
        func_0x00010871e454(&uStack_c70,puVar20,puVar13,auStack_17e0,&uStack_420);
      }
      else {
        FUN_1087134f4(&uStack_c70,puVar13,puVar20,0,param_4[4],unaff_x19 + 0x188);
        FUN_1088665d4(*puVar20,&uStack_c70);
      }
      func_0x00010871e7d8();
      func_0x000107c28924();
      func_0x000107c288d0(&uStack_c70);
      FUN_10871bca8(&uStack_c70,auStack_1048);
      func_0x00010871f0e4();
      func_0x00010871e42c();
    }
    func_0x000107c287e4(auStack_17f8);
  }
  lVar22 = unaff_x19 + 0x4b8;
  func_0x00010871ed44();
  lVar11 = unaff_x19 + 0x4e0;
  func_0x00010871ed44();
  uStack_c70 = uStack_c70 & 0xffffffffffffff00;
  uStack_8a0 = 0;
  if (*(long *)(lVar22 + 0x10) == 0 && *(long *)(lVar11 + 0x10) == 0) {
    auStack_17f8[0] = auStack_17f8[0] & 0xffffffffffffff00;
    bStack_1428 = 0;
  }
  else {
    uVar19 = *puVar20;
    func_0x000107c28ee4(&uStack_420,uVar19,puVar13);
    if (*(long *)(lVar22 + 0x10) != 0) {
      uVar23 = *puVar20;
      pcStack_208 = (code *)0x10871c888;
      ppuStack_200 = &PTR_FUN_110a68ca8;
      func_0x00010871eb80();
      func_0x00010871f5f0();
      *(long *)(uVar19 + 0x10) = unaff_x19;
      *(ulong **)(uVar19 + 0x18) = puVar13;
      *(ulong **)(uVar19 + 0x20) = &uStack_420;
      uStack_1f8 = uVar19;
      FUN_1086a233c(uVar23,&uStack_420,lVar22,&pcStack_208);
      func_0x00010871e384();
    }
    if (*(long *)(lVar11 + 0x10) != 0) {
      acStack_230[0] = '\0';
      uVar23 = *puVar20;
      pcStack_208 = FUN_10871c8f0;
      ppuStack_200 = &PTR_FUN_110a68cc0;
      uVar19 = 0x30;
      __Znwm();
      func_0x00010871f5f0();
      *(char **)(uVar19 + 0x10) = acStack_230;
      *(long *)(uVar19 + 0x18) = unaff_x19;
      *(ulong **)(uVar19 + 0x20) = puVar13;
      *(ulong **)(uVar19 + 0x28) = &uStack_420;
      uStack_1f8 = uVar19;
      FUN_1086a233c(uVar23,&uStack_420,lVar11,&pcStack_208);
      func_0x00010871e384();
      if (acStack_230[0] == '\x01') {
        func_0x000107c32ec8(*(undefined8 *)(unaff_x19 + 0x158));
        (*extraout_x8_02)();
      }
    }
    FUN_1086d6d80(auStack_17f8,&uStack_c70);
    func_0x00010871ee70();
    func_0x000107c287e4();
  }
  func_0x00010871e42c();
  FUN_108715530(auStack_1048,auStack_17f8);
  func_0x00010871f2c8();
  FUN_10871ce24(unaff_x19 + 0x4b8,puVar13);
  FUN_10871ce24(unaff_x19 + 0x4e0,puVar13);
  FUN_1086a3c30(param_3,unaff_x19 + 0x78);
  bVar5 = param_4[5] != 0;
  lVar22 = param_4[5] * 1000;
  uVar19 = 2;
  if (!bVar5) {
    uVar19 = 0;
  }
  auStack_17f8[0] = uVar19;
  auStack_17f8[1] = lVar22;
  uStack_17e8 = bVar5;
  func_0x00010871ea14(&uStack_c70);
  FUN_108710f60();
  func_0x00010871e7d8();
  FUN_108715530();
  func_0x00010871e42c();
  if ((char)param_4[0x20] == '\x01') {
    func_0x00010871ea14(&uStack_c70);
    func_0x00010871ed6c();
    func_0x00010871e7d8();
    FUN_108715530();
    func_0x00010871e42c();
  }
  if ((char)param_4[0x1e] == '\x01') {
    bVar4 = (param_4[0x1d] & 1) == 0;
    if (bVar4) {
      auStack_17f8[0] = auStack_17f8[0] & 0xffffffffffffff00;
    }
    else {
      auStack_17f8[1] = param_4[0x1c] * 1000;
      auStack_17f8[0] = CONCAT44(auStack_17f8[0]._4_4_,1);
    }
    uStack_17e8 = !bVar4;
    func_0x00010871edac(&uStack_c70);
    (*extraout_x9)();
    func_0x00010871e7d8();
    FUN_108715530();
    func_0x00010871e42c();
  }
  if ((char)param_4[0x22] == '\x01') {
    func_0x00010871edac(&uStack_c70);
    (*extraout_x9_00)();
    func_0x00010871e7d8();
    FUN_108715530();
    func_0x00010871e42c();
  }
  func_0x0001086a3c98(param_3,unaff_x19 + 0x78);
  auStack_17f8[0] = uVar19;
  auStack_17f8[1] = lVar22;
  uStack_17e8 = bVar5;
  func_0x00010871ea14(&uStack_c70);
  FUN_108711054();
  func_0x00010871e7d8();
  FUN_108715530();
  func_0x00010871e42c();
  plVar21 = (long *)(unaff_x19 + 0x188);
  func_0x000107c29650();
  lVar22 = 0x11372c6a8;
  if (*plVar21 != 0) {
    lVar22 = *plVar21;
  }
  if (((uint)param_3[2] & 1) == 0) {
    acStack_230[0] = '\0';
    cStack_210 = '\0';
    if (((uint)param_3[2] >> 4 & 1) != 0) goto LAB_108714fe0;
LAB_108714e50:
    auStack_17f8[0] = auStack_17f8[0] & 0xffffffffffffff00;
    bStack_17b0 = 0;
LAB_108714e58:
    uStack_420 = uStack_420 & 0xffffffffffffff00;
    uStack_3c8 = 0;
  }
  else {
    func_0x0001086aaa9c(acStack_230,param_3[0xd]);
    if (((uint)param_3[2] >> 4 & 1) == 0) goto LAB_108714e50;
LAB_108714fe0:
    FUN_1086ab8b8(auStack_17f8,param_3[0x11]);
    if ((cStack_210 != '\x01') || ((bStack_17b0 & 1) == 0)) goto LAB_108714e58;
    uVar19 = param_3[0x1c];
    FUN_10883e734(&pcStack_208,auStack_17f8,lVar22);
    cVar2 = (char)uStack_1f8;
    if (((uStack_1f8 & 1) == 0) && (cStack_1e0 == '\0')) goto LAB_108714e58;
    func_0x000107c29ee0(&uStack_250,acStack_230);
    uStack_c68 = uStack_248;
    uStack_c70 = uStack_250;
    uStack_c60 = uStack_240;
    uStack_248 = 0;
    uStack_240 = 0;
    uStack_250 = 0;
    ppuStack_c50 = ppuStack_200;
    uStack_c58 = pcStack_208._0_4_;
    if (cVar2 == '\0') {
      uStack_c58 = 0;
      ppuStack_c50 = (undefined **)0x0;
    }
    uStack_c40 = 0;
    uStack_c3e = 3;
    uStack_c3c = uStack_17b8;
    if (cStack_1e0 == '\0') {
      uStack_c30 = false;
      uStack_c38 = uStack_c38 & 0xffffffffffffff00;
      uStack_c28 = uStack_c28 & 0xffffffffffffff00;
    }
    else {
      uStack_c38 = (ulong)uStack_1f0;
      uStack_c30 = uStack_c38 != 0;
      uStack_c28 = uStack_1e8;
    }
    uStack_c20 = cStack_1e0 != '\0' && uStack_1e8 != 0;
    uStack_c48 = uVar19;
    func_0x00010871ee70();
    FUN_1086d736c();
    func_0x000107c27914(&uStack_c70);
    func_0x000107c27914(&uStack_250);
  }
  FUN_1086d73b8(auStack_17f8);
  func_0x0001086d73d8(acStack_230);
  func_0x00010871ea14(&uStack_c70);
  FUN_108715544();
  func_0x00010871e7d8();
  FUN_108715530();
  func_0x00010871e42c();
  if ((bStack_c78 == 1) && ((bStack_e70 & 1) != 0)) {
    FUN_108862de8(&uStack_c70,*puVar20,auStack_1048,uStack_e78);
    func_0x000107c28998(auStack_17f8,&uStack_c70);
    func_0x000107c28948(&uStack_c70);
    if ((bStack_1650 & 1) != 0) {
      func_0x000107c28974(&uStack_c70,auStack_17a8);
      FUN_10870e4f0(unaff_x19,auStack_1048,&uStack_c70);
      func_0x000107c2a5a4(&uStack_c70);
    }
    func_0x000107c288dc(auStack_17f8);
  }
  uVar3 = *(char *)(unaff_x19 + 0x191) == '\x01';
  if (((bool)uVar3) && ((bStack_c78 & 1) != 0)) {
    puVar12 = auStack_1048;
    func_0x000107c28db4(puVar12,puVar20);
    if (((int)puVar12 == 0) || ((bStack_cf4 & 1) != 0)) goto LAB_108714f94;
    func_0x000107c291e0(auStack_17f8,auStack_1048);
    uVar3 = *(char *)(unaff_x19 + 0x252) == '\0';
    lVar22 = 0x1e0;
    if ((bool)uVar3) {
      lVar22 = 0x3b8;
    }
    *(undefined8 *)((long)auStack_17f8 + lVar22) = uStack_1028;
    lVar22 = 0x1e8;
    if ((bool)uVar3) {
      lVar22 = 0x3c0;
    }
    *(undefined1 *)((long)auStack_17f8 + lVar22) = 1;
    FUN_1088665d4(*(undefined8 *)(unaff_x19 + 0xb8),auStack_17f8);
    FUN_108691520(&uStack_c70,auStack_17f8);
    func_0x000107c288d0(auStack_17f8);
  }
  else {
LAB_108714f94:
    uStack_c70 = uStack_c70 & 0xffffffffffffff00;
    uStack_8a0 = 0;
  }
  func_0x00010871e7d8();
  FUN_108715530();
  func_0x00010871e42c();
  if ((*(byte *)(unaff_x19 + 0x370) & 1) == 0) {
    if (bStack_c78 == 1) {
      FUN_1086d7004(auStack_17f8,auStack_1048);
    }
    else {
      func_0x00010871f3e4(*puVar20);
      FUN_10869148c(auStack_17f8,&uStack_c70);
      func_0x000107c288ec(&uStack_c70);
    }
    uVar3 = bStack_1428 == 1 && iStack_14e0 == 2;
    if (((bStack_1428 == 1 && iStack_14e0 == 2) && (uVar3 = 0, cStack_16e0 == '\x01')) &&
       (uVar3 = param_4[0x25] == auStack_17e0[0], (long)auStack_17e0[0] <= (long)param_4[0x25])) {
      FUN_1088636fc(&uStack_c70,*puVar20,puVar13);
      FUN_1087155f0(&pcStack_208,&uStack_c70);
      FUN_10871d008(&uStack_c70);
      uVar3 = 0;
      if ((char)uStack_1f8 == '\x01') {
        pcVar16 = pcStack_208;
        if (((ulong)ppuStack_200 & 1) == 0) {
          pcVar16 = (code *)0x0;
        }
        uVar3 = pcStack_16e8 == pcVar16;
        if ((long)pcVar16 < (long)pcStack_16e8) {
          pcStack_16e8 = pcStack_208;
          cStack_16e0 = (char)ppuStack_200;
          if (cStack_16d0 == '\0') {
            lStack_16d8 = 0;
          }
          uStack_17b8 = (long)pcVar16 <= lStack_16d8;
          if ((long)pcVar16 <= lStack_16d8) {
            uStack_1448 = 0;
          }
          FUN_1088665d4(*puVar20,auStack_17f8);
          uVar3 = bStack_c78 == bStack_1428;
          if ((bool)uVar3) {
            if (bStack_c78 != 0) {
              func_0x00010871c23c(auStack_1048,auStack_17f8);
            }
          }
          else if (bStack_c78 == 0) {
            FUN_1086d7048(auStack_1048,auStack_17f8);
          }
          else {
            func_0x000107c288f8(auStack_1048);
          }
          uStack_1810 = 0;
          uStack_1808 = 0;
          ppuStack_1820 = &PTR_FUN_110a609a8;
          uStack_1818 = 0;
          uStack_1800 = 0x2c8;
          func_0x00010871e378(*(undefined8 *)(unaff_x19 + 0x118));
          (*extraout_x8_03)();
          func_0x000107c2882c(&ppuStack_1820);
        }
      }
    }
    func_0x00010871f2c8();
  }
  puVar6 = (ulong *)(unaff_x19 + 0x508);
  func_0x000100865128(&uStack_c70,puVar6);
  if ((uStack_c70 == 0) ||
     (uVar19 = uStack_c70, FUN_108710b20(uStack_c70,puVar13), puVar6 = puVar13, (uVar19 & 1) == 0))
  {
    puVar13 = puVar6;
    func_0x000100865288(&uStack_c70);
    FUN_10868ee40();
    if (((((ulong)param_3 & 1) == 0) && ((bStack_c78 & 1) != 0)) &&
       (((func_0x00010871e688(), (bool)uVar3 || ((bStack_c88 & 1) == 0)) && ((bStack_e60 & 1) == 0))
       )) {
      func_0x00010871e354();
      puVar13 = (ulong *)auStack_1048;
      func_0x00010871e274();
    }
  }
  else {
    func_0x000100865288(&uStack_c70);
  }
  func_0x00010871ee70();
  FUN_1086d0498();
  puVar6 = puVar13;
LAB_1087152ec:
  func_0x000107c288cc(auStack_1420);
  func_0x000107c288cc(auStack_1048);
  puVar13 = auStack_888;
  func_0x000107c288cc();
  func_0x00010871f0b0();
  func_0x00010086526c(uStack_1d8);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    func_0x000107c2882c(&ppuStack_1820);
    func_0x00010871f2c8();
    func_0x00010871ee70();
    FUN_1086d0498();
    func_0x000107c288cc(auStack_1420);
    func_0x000107c288cc(auStack_1048);
    func_0x000107c288cc(auStack_888);
    func_0x00010871f0b0();
    func_0x00010871e260();
    func_0x00010871f304();
    func_0x00010871f838((uint)puVar6 & 0x6f);
    func_0x00010871f450();
    func_0x00010871e2a8();
    return puVar6;
  }
  return puVar13;
}



/* Entry: 108714670; end: 1087154df;  */

ulong * FUN_108714670(long param_1,ulong *param_2,ulong param_3,ulong *param_4)

{
  undefined **ppuVar1;
  code *pcVar2;
  char cVar3;
  undefined1 uVar4;
  bool bVar5;
  bool bVar6;
  ulong *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  long lVar12;
  ulong uVar13;
  undefined1 *puVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int extraout_w8;
  int extraout_w8_00;
  undefined8 extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x9;
  code *extraout_x9_00;
  long unaff_x19;
  int iVar18;
  undefined8 uVar19;
  ulong *puVar20;
  long *plVar21;
  long lVar22;
  ulong uVar23;
  undefined **ppuStack_1660;
  undefined8 uStack_1658;
  undefined8 uStack_1650;
  undefined8 uStack_1648;
  undefined4 uStack_1640;
  ulong auStack_1638 [2];
  undefined1 uStack_1628;
  ulong auStack_1620 [5];
  undefined1 uStack_15f8;
  byte bStack_15f0;
  undefined1 auStack_15e8 [192];
  code *pcStack_1528;
  char cStack_1520;
  long lStack_1518;
  char cStack_1510;
  byte bStack_14c8;
  byte bStack_1490;
  undefined1 auStack_1450 [304];
  int iStack_1320;
  undefined8 uStack_1288;
  byte bStack_1268;
  undefined1 auStack_1260 [976];
  undefined1 uStack_e90;
  undefined1 auStack_e88 [32];
  undefined8 uStack_e68;
  undefined8 uStack_cb8;
  byte bStack_cb0;
  byte bStack_ca0;
  byte bStack_b34;
  byte bStack_ac8;
  byte bStack_ab8;
  ulong uStack_ab0;
  undefined8 uStack_aa8;
  undefined8 uStack_aa0;
  undefined4 uStack_a98;
  undefined **ppuStack_a90;
  undefined8 uStack_a88;
  undefined1 uStack_a80;
  undefined2 uStack_a7e;
  undefined1 uStack_a7c;
  ulong uStack_a78;
  undefined1 uStack_a70;
  ulong uStack_a68;
  undefined1 uStack_a60;
  undefined1 uStack_6e0;
  ulong auStack_6c8 [9];
  undefined1 auStack_680 [112];
  long lStack_610;
  long lStack_608;
  byte bStack_500;
  byte abStack_4e0 [64];
  int iStack_4a0;
  int iStack_49c;
  undefined1 uStack_498;
  undefined4 uStack_494;
  ulong uStack_418;
  undefined1 uStack_410;
  char cStack_408;
  int iStack_3d8;
  undefined **ppuStack_3d0;
  byte bStack_3c8;
  undefined **ppuStack_3c0;
  byte bStack_3b8;
  undefined4 uStack_380;
  byte bStack_37c;
  undefined1 auStack_338 [24];
  char cStack_320;
  byte bStack_308;
  char cStack_2f8;
  undefined1 auStack_2f0 [40];
  undefined1 auStack_2c8 [80];
  undefined1 auStack_278 [24];
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  undefined1 uStack_208;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  char acStack_70 [32];
  char cStack_50;
  code *pcStack_48;
  undefined **ppuStack_40;
  ulong uStack_38;
  uint uStack_30;
  ulong uStack_28;
  char cStack_20;
  undefined8 uStack_18;
  
  func_0x000107c32ee4();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar7 = param_4;
  func_0x00010871e07c();
  cVar3 = *(char *)((long)puVar7 + 0x1a);
  plVar21 = *(long **)(param_1 + 0x118);
  uStack_18 = extraout_x8;
  func_0x00010871ee7c();
  ppuStack_a90 = (undefined **)CONCAT44(ppuStack_a90._4_4_,0x1cd);
  func_0x000107c278b8(auStack_278,&UNK_10f4b23b9);
  puVar7 = &uStack_ab0;
  func_0x000107c28818(puVar7,auStack_278,cVar3);
  lVar22 = unaff_x19 + 0x4b8;
  FUN_10871d1c8(lVar22,param_2);
  if (lVar22 == 0) {
    iVar18 = 0;
  }
  else {
    lVar22 = unaff_x19 + 0x4b8;
    func_0x00010871ed44();
    iVar18 = (int)*(undefined8 *)(lVar22 + 0x10);
  }
  lVar22 = unaff_x19 + 0x4e0;
  FUN_10871d1c8(lVar22,param_2);
  if (lVar22 == 0) {
    iVar17 = 0;
  }
  else {
    lVar22 = unaff_x19 + 0x4e0;
    func_0x00010871ed44();
    iVar17 = (int)*(undefined8 *)(lVar22 + 0x10);
  }
  (**(code **)(*plVar21 + 0x78))(plVar21,puVar7,(long)(iVar17 + iVar18));
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_278);
  func_0x00010871f3dc();
  func_0x00010871ee7c();
  ppuStack_a90 = (undefined **)CONCAT44(ppuStack_a90._4_4_,0x1cc);
  func_0x00010871eaf8(&uStack_ab0,0x6d);
  func_0x00010871e5a8();
  func_0x000107c2884c();
  puVar7 = (ulong *)(unaff_x19 + 0x118);
  func_0x00010871e090(auStack_2c8,puVar7,auStack_2f0);
  func_0x00010871e5a8();
  func_0x000107c2882c();
  func_0x00010871f3dc();
  if (cVar3 != '\0') {
    puVar7 = param_2;
    FUN_108866aec(*(undefined8 *)(unaff_x19 + 0xb8));
  }
  puVar20 = (ulong *)(unaff_x19 + 0xb8);
  func_0x00010871f3e4(*puVar20);
  FUN_10869148c(auStack_6c8,&uStack_ab0);
  func_0x000107c288ec(&uStack_ab0);
  auStack_e88[0] = 0;
  bStack_ab8 = 0;
  auStack_1260[0] = 0;
  uStack_e90 = 0;
  uVar4 = cStack_2f8 == '\x01';
  if ((bool)uVar4) {
    if ((bStack_500 & 1) != 0) goto LAB_1087152ec;
    if (((*(byte *)((long)param_4 + 0x19) & 1) == 0) &&
       ((lStack_608 - lStack_610) / 0x18 == (long)*(int *)(param_3 + 0x20))) {
      bVar6 = false;
    }
    else {
      FUN_108845eac(&uStack_ab0,param_3);
      puVar7 = &uStack_ab0;
      func_0x000107c28904(&lStack_610);
      func_0x000107c27a04(&uStack_ab0);
      bVar6 = true;
    }
    uVar15 = (uint)puVar7;
    if (cStack_408 != *(char *)(param_3 + 0x101)) {
      bVar6 = true;
      cStack_408 = *(char *)(param_3 + 0x101);
    }
    if ((char)param_4[3] == '\x01') {
      func_0x00010871f420(*(undefined8 *)(param_3 + 0x60),auStack_680);
      bVar6 = true;
    }
    if (*(char *)((long)param_4 + 0x1b) == '\x01') {
      func_0x00010871f674(*(undefined8 *)(param_3 + 0x80));
      uVar16 = *(int *)(extraout_x8_00 + 0x70) - 1;
      if (uVar16 < 3) {
        uStack_494 = *(undefined4 *)(&UNK_10df4aac8 + (ulong)uVar16 * 4);
      }
      else {
        uStack_494 = 1;
      }
      bVar6 = true;
    }
    bVar5 = *(char *)((long)param_4 + 0x1d) == '\x01';
    if (bVar5) {
      uStack_498 = *(undefined1 *)((long)param_4 + 0x1c);
      bVar6 = true;
    }
    if (((param_4[3] & 1) != 0) || ((*(byte *)((long)param_4 + 0x19) & 1) != 0)) {
      func_0x00010871e688();
      if (bVar5) {
        if ((abStack_4e0[0] & 1) != 0) {
LAB_1087149e0:
          abStack_4e0[0] = 0;
LAB_1087149e4:
          lVar22 = 0x1e0;
          if (extraout_w8 == 0) {
            lVar22 = 0x3b8;
          }
          *(undefined8 *)((long)auStack_6c8 + lVar22) = 0;
          lVar22 = 0x1e8;
          if (extraout_w8 == 0) {
            lVar22 = 0x3c0;
          }
          *(undefined1 *)((long)auStack_6c8 + lVar22) = 0;
          bVar6 = true;
        }
      }
      else if (((bStack_308 & 1) != 0) || (abStack_4e0[0] != 0)) {
        if (abStack_4e0[0] != 0) goto LAB_1087149e0;
        goto LAB_1087149e4;
      }
    }
    if ((char)param_4[0x24] == '\x01') {
      uStack_418 = param_4[0x23];
      uStack_410 = uStack_418 != 0;
      bVar6 = true;
    }
    if ((bStack_37c & 1) == 0) {
      uVar13 = (ulong)*(uint *)(param_3 + 0x104);
      func_0x000107c29e30();
      if (uVar13 >> 0x20 != 0) {
        uStack_380 = (undefined4)uVar13;
        bStack_37c = (byte)(uVar13 >> 0x20);
        bVar6 = true;
      }
    }
    ppuVar1 = &PTR_PTR_11327ab60;
    if (*(undefined ***)(param_3 + 0x80) != (undefined **)0x0) {
      ppuVar1 = *(undefined ***)(param_3 + 0x80);
    }
    ppuVar8 = ppuVar1;
    func_0x000108846074();
    ppuVar9 = ppuVar1;
    func_0x0001088460ac();
    ppuVar10 = ppuVar1;
    func_0x00010884602c();
    ppuVar11 = ppuVar1;
    uVar16 = uVar15;
    func_0x000108846050();
    func_0x00010871e6ac(*(undefined4 *)(ppuVar1 + 10));
    if ((iStack_4a0 == (int)ppuVar8 && iStack_49c == extraout_w8_00) && iStack_3d8 == (int)ppuVar9)
    {
      if (((uint)bStack_3c8 != (uVar15 & 0xff)) || (bStack_3c8 == 0)) {
        if ((uint)bStack_3c8 == (uVar15 & 0xff)) goto LAB_1087151c4;
        goto LAB_108714adc;
      }
      if (ppuStack_3d0 != ppuVar10) goto LAB_108714adc;
LAB_1087151c4:
      if (((uint)bStack_3b8 == (uVar16 & 0xff)) && (bStack_3b8 != 0)) {
        if (ppuStack_3c0 != ppuVar11) goto LAB_108714adc;
      }
      else if ((uint)bStack_3b8 != (uVar16 & 0xff)) goto LAB_108714adc;
    }
    else {
LAB_108714adc:
      bStack_3c8 = (byte)uVar15;
      bVar6 = true;
      bStack_3b8 = (byte)uVar16;
      iStack_4a0 = (int)ppuVar8;
      iStack_3d8 = (int)ppuVar9;
      ppuStack_3d0 = ppuVar10;
      ppuStack_3c0 = ppuVar11;
    }
    if ((cStack_320 == '\x01') && ((*(byte *)(param_3 + 0x11) >> 3 & 1) == 0)) {
      func_0x000107c2890c(auStack_338);
LAB_108714b30:
      FUN_1088665d4(*puVar20,auStack_6c8);
      func_0x00010871f3d0();
      func_0x00010871e7d8();
      func_0x000107c288f0();
      func_0x00010871e42c();
    }
    else if (bVar6) goto LAB_108714b30;
    func_0x00010871f3d0();
    func_0x00010871f0e4();
    func_0x00010871e42c();
  }
  else {
    func_0x000107c29f60(auStack_1638,*puVar20,param_2,0);
    if ((bStack_14c8 & 1) == 0) {
      if (param_4[4] == 0) {
        uStack_258 = param_4[1];
        uStack_260 = *param_4;
        uStack_250 = param_4[2];
        func_0x00010871e454(&uStack_ab0,puVar20,param_2,auStack_1620,&uStack_260);
      }
      else {
        FUN_1087134f4(&uStack_ab0,param_2,puVar20,0,param_4[4],unaff_x19 + 0x188);
        FUN_1088665d4(*puVar20,&uStack_ab0);
      }
      func_0x00010871e7d8();
      func_0x000107c28924();
      func_0x000107c288d0(&uStack_ab0);
      FUN_10871bca8(&uStack_ab0,auStack_e88);
      func_0x00010871f0e4();
      func_0x00010871e42c();
    }
    func_0x000107c287e4(auStack_1638);
  }
  lVar22 = unaff_x19 + 0x4b8;
  func_0x00010871ed44();
  lVar12 = unaff_x19 + 0x4e0;
  func_0x00010871ed44();
  uStack_ab0 = uStack_ab0 & 0xffffffffffffff00;
  uStack_6e0 = 0;
  if (*(long *)(lVar22 + 0x10) == 0 && *(long *)(lVar12 + 0x10) == 0) {
    auStack_1638[0] = auStack_1638[0] & 0xffffffffffffff00;
    bStack_1268 = 0;
  }
  else {
    uVar13 = *puVar20;
    func_0x000107c28ee4(&uStack_260,uVar13,param_2);
    if (*(long *)(lVar22 + 0x10) != 0) {
      uVar23 = *puVar20;
      pcStack_48 = (code *)0x10871c888;
      ppuStack_40 = &PTR_FUN_110a68ca8;
      func_0x00010871eb80();
      func_0x00010871f5f0();
      *(long *)(uVar13 + 0x10) = unaff_x19;
      *(ulong **)(uVar13 + 0x18) = param_2;
      *(ulong **)(uVar13 + 0x20) = &uStack_260;
      uStack_38 = uVar13;
      FUN_1086a233c(uVar23,&uStack_260,lVar22,&pcStack_48);
      func_0x00010871e384();
    }
    if (*(long *)(lVar12 + 0x10) != 0) {
      acStack_70[0] = '\0';
      uVar23 = *puVar20;
      pcStack_48 = FUN_10871c8f0;
      ppuStack_40 = &PTR_FUN_110a68cc0;
      uVar13 = 0x30;
      __Znwm();
      func_0x00010871f5f0();
      *(char **)(uVar13 + 0x10) = acStack_70;
      *(long *)(uVar13 + 0x18) = unaff_x19;
      *(ulong **)(uVar13 + 0x20) = param_2;
      *(ulong **)(uVar13 + 0x28) = &uStack_260;
      uStack_38 = uVar13;
      FUN_1086a233c(uVar23,&uStack_260,lVar12,&pcStack_48);
      func_0x00010871e384();
      if (acStack_70[0] == '\x01') {
        func_0x000107c32ec8(*(undefined8 *)(unaff_x19 + 0x158));
        (*extraout_x8_01)();
      }
    }
    FUN_1086d6d80(auStack_1638,&uStack_ab0);
    func_0x00010871ee70();
    func_0x000107c287e4();
  }
  func_0x00010871e42c();
  FUN_108715530(auStack_e88,auStack_1638);
  func_0x00010871f2c8();
  FUN_10871ce24(unaff_x19 + 0x4b8,param_2);
  FUN_10871ce24(unaff_x19 + 0x4e0,param_2);
  FUN_1086a3c30(param_3,unaff_x19 + 0x78);
  bVar6 = param_4[5] != 0;
  lVar22 = param_4[5] * 1000;
  uVar13 = 2;
  if (!bVar6) {
    uVar13 = 0;
  }
  auStack_1638[0] = uVar13;
  auStack_1638[1] = lVar22;
  uStack_1628 = bVar6;
  func_0x00010871ea14(&uStack_ab0);
  FUN_108710f60();
  func_0x00010871e7d8();
  FUN_108715530();
  func_0x00010871e42c();
  if ((char)param_4[0x20] == '\x01') {
    func_0x00010871ea14(&uStack_ab0);
    func_0x00010871ed6c();
    func_0x00010871e7d8();
    FUN_108715530();
    func_0x00010871e42c();
  }
  if ((char)param_4[0x1e] == '\x01') {
    bVar5 = (param_4[0x1d] & 1) == 0;
    if (bVar5) {
      auStack_1638[0] = auStack_1638[0] & 0xffffffffffffff00;
    }
    else {
      auStack_1638[1] = param_4[0x1c] * 1000;
      auStack_1638[0] = CONCAT44(auStack_1638[0]._4_4_,1);
    }
    uStack_1628 = !bVar5;
    func_0x00010871edac(&uStack_ab0);
    (*extraout_x9)();
    func_0x00010871e7d8();
    FUN_108715530();
    func_0x00010871e42c();
  }
  if ((char)param_4[0x22] == '\x01') {
    func_0x00010871edac(&uStack_ab0);
    (*extraout_x9_00)();
    func_0x00010871e7d8();
    FUN_108715530();
    func_0x00010871e42c();
  }
  func_0x0001086a3c98(param_3,unaff_x19 + 0x78);
  auStack_1638[0] = uVar13;
  auStack_1638[1] = lVar22;
  uStack_1628 = bVar6;
  func_0x00010871ea14(&uStack_ab0);
  FUN_108711054();
  func_0x00010871e7d8();
  FUN_108715530();
  func_0x00010871e42c();
  plVar21 = (long *)(unaff_x19 + 0x188);
  func_0x000107c29650();
  lVar22 = 0x11372c6a8;
  if (*plVar21 != 0) {
    lVar22 = *plVar21;
  }
  if ((*(uint *)(param_3 + 0x10) & 1) == 0) {
    acStack_70[0] = '\0';
    cStack_50 = '\0';
    if ((*(uint *)(param_3 + 0x10) >> 4 & 1) != 0) goto LAB_108714fe0;
LAB_108714e50:
    auStack_1638[0] = auStack_1638[0] & 0xffffffffffffff00;
    bStack_15f0 = 0;
LAB_108714e58:
    uStack_260 = uStack_260 & 0xffffffffffffff00;
    uStack_208 = 0;
  }
  else {
    func_0x0001086aaa9c(acStack_70,*(undefined8 *)(param_3 + 0x68));
    if ((*(uint *)(param_3 + 0x10) >> 4 & 1) == 0) goto LAB_108714e50;
LAB_108714fe0:
    FUN_1086ab8b8(auStack_1638,*(undefined8 *)(param_3 + 0x88));
    if ((cStack_50 != '\x01') || ((bStack_15f0 & 1) == 0)) goto LAB_108714e58;
    uVar19 = *(undefined8 *)(param_3 + 0xe0);
    FUN_10883e734(&pcStack_48,auStack_1638,lVar22);
    cVar3 = (char)uStack_38;
    if (((uStack_38 & 1) == 0) && (cStack_20 == '\0')) goto LAB_108714e58;
    func_0x000107c29ee0(&uStack_90,acStack_70);
    uStack_aa8 = uStack_88;
    uStack_ab0 = uStack_90;
    uStack_aa0 = uStack_80;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_90 = 0;
    ppuStack_a90 = ppuStack_40;
    uStack_a98 = pcStack_48._0_4_;
    if (cVar3 == '\0') {
      uStack_a98 = 0;
      ppuStack_a90 = (undefined **)0x0;
    }
    uStack_a80 = 0;
    uStack_a7e = 3;
    uStack_a7c = uStack_15f8;
    if (cStack_20 == '\0') {
      uStack_a70 = false;
      uStack_a78 = uStack_a78 & 0xffffffffffffff00;
      uStack_a68 = uStack_a68 & 0xffffffffffffff00;
    }
    else {
      uStack_a78 = (ulong)uStack_30;
      uStack_a70 = uStack_a78 != 0;
      uStack_a68 = uStack_28;
    }
    uStack_a60 = cStack_20 != '\0' && uStack_28 != 0;
    uStack_a88 = uVar19;
    func_0x00010871ee70();
    FUN_1086d736c();
    func_0x000107c27914(&uStack_ab0);
    func_0x000107c27914(&uStack_90);
  }
  FUN_1086d73b8(auStack_1638);
  func_0x0001086d73d8(acStack_70);
  func_0x00010871ea14(&uStack_ab0);
  FUN_108715544();
  func_0x00010871e7d8();
  FUN_108715530();
  func_0x00010871e42c();
  if ((bStack_ab8 == 1) && ((bStack_cb0 & 1) != 0)) {
    FUN_108862de8(&uStack_ab0,*puVar20,auStack_e88,uStack_cb8);
    func_0x000107c28998(auStack_1638,&uStack_ab0);
    func_0x000107c28948(&uStack_ab0);
    if ((bStack_1490 & 1) != 0) {
      func_0x000107c28974(&uStack_ab0,auStack_15e8);
      FUN_10870e4f0();
      func_0x000107c2a5a4(&uStack_ab0);
    }
    func_0x000107c288dc(auStack_1638);
  }
  uVar4 = *(char *)(unaff_x19 + 0x191) == '\x01';
  if (((bool)uVar4) && ((bStack_ab8 & 1) != 0)) {
    puVar14 = auStack_e88;
    func_0x000107c28db4(puVar14,puVar20);
    if (((int)puVar14 == 0) || ((bStack_b34 & 1) != 0)) goto LAB_108714f94;
    func_0x000107c291e0(auStack_1638,auStack_e88);
    uVar4 = *(char *)(unaff_x19 + 0x252) == '\0';
    lVar22 = 0x1e0;
    if ((bool)uVar4) {
      lVar22 = 0x3b8;
    }
    *(undefined8 *)((long)auStack_1638 + lVar22) = uStack_e68;
    lVar22 = 0x1e8;
    if ((bool)uVar4) {
      lVar22 = 0x3c0;
    }
    *(undefined1 *)((long)auStack_1638 + lVar22) = 1;
    FUN_1088665d4(*(undefined8 *)(unaff_x19 + 0xb8),auStack_1638);
    FUN_108691520(&uStack_ab0,auStack_1638);
    func_0x000107c288d0(auStack_1638);
  }
  else {
LAB_108714f94:
    uStack_ab0 = uStack_ab0 & 0xffffffffffffff00;
    uStack_6e0 = 0;
  }
  func_0x00010871e7d8();
  FUN_108715530();
  func_0x00010871e42c();
  if ((*(byte *)(unaff_x19 + 0x370) & 1) == 0) {
    if (bStack_ab8 == 1) {
      FUN_1086d7004(auStack_1638,auStack_e88);
    }
    else {
      func_0x00010871f3e4(*puVar20);
      FUN_10869148c(auStack_1638,&uStack_ab0);
      func_0x000107c288ec(&uStack_ab0);
    }
    uVar4 = bStack_1268 == 1 && iStack_1320 == 2;
    if (((bStack_1268 == 1 && iStack_1320 == 2) && (uVar4 = 0, cStack_1520 == '\x01')) &&
       (uVar4 = param_4[0x25] == auStack_1620[0], (long)auStack_1620[0] <= (long)param_4[0x25])) {
      FUN_1088636fc(&uStack_ab0,*puVar20,param_2);
      FUN_1087155f0(&pcStack_48,&uStack_ab0);
      FUN_10871d008(&uStack_ab0);
      uVar4 = 0;
      if ((char)uStack_38 == '\x01') {
        pcVar2 = pcStack_48;
        if (((ulong)ppuStack_40 & 1) == 0) {
          pcVar2 = (code *)0x0;
        }
        uVar4 = pcStack_1528 == pcVar2;
        if ((long)pcVar2 < (long)pcStack_1528) {
          pcStack_1528 = pcStack_48;
          cStack_1520 = (char)ppuStack_40;
          if (cStack_1510 == '\0') {
            lStack_1518 = 0;
          }
          uStack_15f8 = (long)pcVar2 <= lStack_1518;
          if ((long)pcVar2 <= lStack_1518) {
            uStack_1288 = 0;
          }
          FUN_1088665d4(*puVar20,auStack_1638);
          uVar4 = bStack_ab8 == bStack_1268;
          if ((bool)uVar4) {
            if (bStack_ab8 != 0) {
              func_0x00010871c23c(auStack_e88,auStack_1638);
            }
          }
          else if (bStack_ab8 == 0) {
            FUN_1086d7048(auStack_e88,auStack_1638);
          }
          else {
            func_0x000107c288f8(auStack_e88);
          }
          uStack_1650 = 0;
          uStack_1648 = 0;
          ppuStack_1660 = &PTR_FUN_110a609a8;
          uStack_1658 = 0;
          uStack_1640 = 0x2c8;
          func_0x00010871e378(*(undefined8 *)(unaff_x19 + 0x118));
          (*extraout_x8_02)();
          func_0x000107c2882c(&ppuStack_1660);
        }
      }
    }
    func_0x00010871f2c8();
  }
  puVar7 = (ulong *)(unaff_x19 + 0x508);
  func_0x000100865128(&uStack_ab0,puVar7);
  if ((uStack_ab0 == 0) ||
     (uVar13 = uStack_ab0, FUN_108710b20(uStack_ab0,param_2), puVar7 = param_2, (uVar13 & 1) == 0))
  {
    param_2 = puVar7;
    func_0x000100865288(&uStack_ab0);
    FUN_10868ee40();
    if ((((param_3 & 1) == 0) && ((bStack_ab8 & 1) != 0)) &&
       (((func_0x00010871e688(), (bool)uVar4 || ((bStack_ac8 & 1) == 0)) && ((bStack_ca0 & 1) == 0))
       )) {
      func_0x00010871e354();
      param_2 = (ulong *)auStack_e88;
      func_0x00010871e274();
    }
  }
  else {
    func_0x000100865288(&uStack_ab0);
  }
  func_0x00010871ee70();
  FUN_1086d0498();
  puVar7 = param_2;
LAB_1087152ec:
  func_0x000107c288cc(auStack_1260);
  func_0x000107c288cc(auStack_e88);
  puVar20 = auStack_6c8;
  func_0x000107c288cc();
  func_0x00010871f0b0();
  func_0x00010086526c(uStack_18);
  if (!(bool)uVar4) {
    ___stack_chk_fail();
    func_0x000107c2882c(&ppuStack_1660);
    func_0x00010871f2c8();
    func_0x00010871ee70();
    FUN_1086d0498();
    func_0x000107c288cc(auStack_1260);
    func_0x000107c288cc(auStack_e88);
    func_0x000107c288cc(auStack_6c8);
    func_0x00010871f0b0();
    func_0x00010871e260();
    func_0x00010871f304();
    func_0x00010871f838((uint)puVar7 & 0x6f);
    func_0x00010871f450();
    func_0x00010871e2a8();
    return puVar7;
  }
  return puVar20;
}



/* Entry: 1087154e0; end: 10871552f;  */

undefined8 FUN_1087154e0(undefined8 param_1,undefined8 param_2)

{
  func_0x00010871f304(param_1,PTR_DAT_113268c18);
  func_0x00010871f838((uint)param_2 & 0x6f);
  func_0x00010871f450();
  func_0x00010871e2a8();
  return param_2;
}



/* Entry: 108715530; end: 108715543;  */

undefined8 FUN_108715530(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 0x3d0) == '\x01') {
    func_0x00010065cb54();
    return param_1;
  }
  return param_1;
}



/* Entry: 108715544; end: 1087155ef;  */

void FUN_108715544(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  undefined1 auStack_7f0 [1000];
  undefined1 auStack_408 [456];
  byte bStack_240;
  char cStack_38;
  
  if ((*(byte *)(param_4 + 0x58) & 1) == 0) {
    func_0x00010871e5e8();
  }
  else {
    func_0x00010871f3a0(auStack_7f0,*(undefined8 *)(param_2 + 0xb8));
    func_0x00010871e88c();
    func_0x00010871e83c();
    if (((cStack_38 == '\x01') && ((bStack_240 & 1) == 0)) &&
       (func_0x00010883f80c(param_4,auStack_408), (param_4 & 1) != 0)) {
      FUN_1088665d4(*(undefined8 *)(param_2 + 0xb8),auStack_408);
      func_0x00010871e87c();
    }
    else {
      func_0x00010871e5e8();
    }
    func_0x00010871e884();
  }
  return;
}



/* Entry: 1087155f0; end: 10871564b;  */

void FUN_1087155f0(undefined8 *param_1)

{
  bool bVar1;
  long *plVar2;
  undefined8 uVar3;
  long alStack_40 [3];
  char cStack_28;
  
  plVar2 = alStack_40;
  FUN_10871d02c(alStack_40);
  bVar1 = cStack_28 == '\x01' && alStack_40[0] != 0;
  if (bVar1) {
    FUN_10871d044();
    uVar3 = *plVar2;
    param_1[1] = plVar2[1];
    *param_1 = uVar3;
  }
  else {
    *(undefined1 *)param_1 = 0;
  }
  *(bool *)(param_1 + 2) = bVar1;
  return;
}



/* Entry: 10871564c; end: 1087156b7;  */

uint FUN_10871564c(long param_1,uint param_2)

{
  uint uVar1;
  long alStack_30 [2];
  
  uVar1 = (uint)alStack_30;
  func_0x000100865128(alStack_30,param_1 + 0x508);
  if (alStack_30[0] != 0) {
    param_2 = uVar1;
    func_0x0001008655c8();
    FUN_108710b20();
  }
  func_0x000100865288(alStack_30);
  return alStack_30[0] != 0 & param_2;
}



/* Entry: 1087156b8; end: 1087158cf;  */

void FUN_1087156b8(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long extraout_x8;
  code *extraout_x8_00;
  long unaff_x19;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_9f0 [32];
  undefined1 auStack_9d0 [328];
  undefined1 auStack_888 [984];
  undefined1 auStack_4b0 [24];
  undefined1 auStack_498 [64];
  ulong auStack_458 [4];
  undefined4 uStack_438;
  byte bStack_88;
  undefined1 auStack_58 [88];
  
  func_0x000107c32ee4();
  func_0x000107c32eb0();
  func_0x00010871e2b4();
  auStack_458[2] = 0;
  auStack_458[3] = 0;
  auStack_458[0] = extraout_x8 + 0x10;
  auStack_458[1] = 0;
  uStack_438 = 0x1cc;
  func_0x00010871eaf8(auStack_458,0x6e);
  func_0x00010871e484();
  func_0x00010871e00c(auStack_58,unaff_x19 + 0x118);
  func_0x00010871e2c0();
  func_0x000107c2882c(auStack_458);
  auStack_458[0] = auStack_458[0] & 0xffffffffffffff00;
  bStack_88 = 0;
  func_0x00010871e320(*(undefined8 *)(unaff_x19 + 0xa8));
  (*extraout_x8_00)();
  uVar2 = *(undefined8 *)(*(long *)(unaff_x19 + 0xb8) + 0x18);
  func_0x000107c278b8(auStack_4b0,&UNK_10f4b23f0);
  func_0x000107c31420(auStack_498,uVar2,auStack_4b0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_4b0);
  lVar1 = param_3[1];
  for (lVar3 = *param_3; lVar3 != lVar1; lVar3 = lVar3 + 0x10) {
    func_0x00010871e664(auStack_9f0);
    func_0x00010871e748();
    func_0x00010871ebe4(auStack_9d0);
    FUN_10870d474(auStack_888);
    FUN_108715530(auStack_458,auStack_888);
    func_0x000107c288cc(auStack_888);
    func_0x00010871e5d0();
    func_0x00010871e5bc();
    func_0x00010871e5f4();
    func_0x00010871e5d8();
  }
  if ((bStack_88 & 1) != 0) {
    func_0x00010871e354();
    func_0x00010871e274();
  }
  func_0x000107c31428(auStack_498);
  func_0x000107c31424(auStack_498);
  func_0x000107c288cc(auStack_458);
  func_0x00010871e2c8();
  return;
}



/* Entry: 1087158d0; end: 1087158d7;  */

void FUN_1087158d0(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long extraout_x8;
  code *extraout_x8_00;
  long unaff_x19;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_9f0 [32];
  undefined1 auStack_9d0 [328];
  undefined1 auStack_888 [984];
  undefined1 auStack_4b0 [24];
  undefined1 auStack_498 [64];
  ulong auStack_458 [4];
  undefined4 uStack_438;
  byte bStack_88;
  undefined1 auStack_58 [88];
  
  func_0x000107c32ee4(param_1 + -8);
  func_0x000107c32eb0();
  func_0x00010871e2b4();
  auStack_458[2] = 0;
  auStack_458[3] = 0;
  auStack_458[0] = extraout_x8 + 0x10;
  auStack_458[1] = 0;
  uStack_438 = 0x1cc;
  func_0x00010871eaf8(auStack_458,0x6e);
  func_0x00010871e484();
  func_0x00010871e00c(auStack_58,unaff_x19 + 0x118);
  func_0x00010871e2c0();
  func_0x000107c2882c(auStack_458);
  auStack_458[0] = auStack_458[0] & 0xffffffffffffff00;
  bStack_88 = 0;
  func_0x00010871e320(*(undefined8 *)(unaff_x19 + 0xa8));
  (*extraout_x8_00)();
  uVar2 = *(undefined8 *)(*(long *)(unaff_x19 + 0xb8) + 0x18);
  func_0x000107c278b8(auStack_4b0,&UNK_10f4b23f0);
  func_0x000107c31420(auStack_498,uVar2,auStack_4b0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_4b0);
  lVar1 = param_3[1];
  for (lVar3 = *param_3; lVar3 != lVar1; lVar3 = lVar3 + 0x10) {
    func_0x00010871e664(auStack_9f0);
    func_0x00010871e748();
    func_0x00010871ebe4(auStack_9d0);
    FUN_10870d474(auStack_888);
    FUN_108715530(auStack_458,auStack_888);
    func_0x000107c288cc(auStack_888);
    func_0x00010871e5d0();
    func_0x00010871e5bc();
    func_0x00010871e5f4();
    func_0x00010871e5d8();
  }
  if ((bStack_88 & 1) != 0) {
    func_0x00010871e354();
    func_0x00010871e274();
  }
  func_0x000107c31428(auStack_498);
  func_0x000107c31424(auStack_498);
  func_0x000107c288cc(auStack_458);
  func_0x00010871e2c8();
  return;
}



/* Entry: 1087158d8; end: 10871599b;  */

void FUN_1087158d8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_d0 [40];
  undefined1 auStack_a8 [40];
  undefined1 auStack_80 [80];
  
  puVar1 = auStack_d0;
  if (*(long *)(param_3 + 0x18) != 0) {
    func_0x00010871e348();
    func_0x00010871e2b4();
    func_0x00010871eef4();
    func_0x00010871eaf8(auStack_d0,0x6b);
    func_0x000107c2884c(auStack_a8,puVar1);
    func_0x00010871e090(auStack_80,unaff_x20 + 0x118,auStack_a8);
    func_0x00010871ecf8();
    func_0x00010871ed64();
    func_0x00010871ea14(auStack_d0,*(undefined8 *)(unaff_x20 + 0xb8));
    FUN_108861b60();
    FUN_10871599c();
    func_0x00010867b9fc(auStack_d0);
    func_0x00010871ec64();
  }
  return;
}



/* Entry: 10871599c; end: 1087171bb;  */

void FUN_10871599c(long *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  undefined **ppuVar3;
  long lVar4;
  byte bVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong *puVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  undefined1 *puVar18;
  ulong *puVar19;
  uint extraout_w8;
  uint extraout_w8_00;
  code *extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  code *extraout_x8_05;
  code *extraout_x8_06;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  int extraout_w9_02;
  ulong extraout_x10;
  ulong extraout_x10_00;
  long lVar20;
  uint uVar21;
  undefined4 *puVar22;
  int iVar23;
  long lVar24;
  ulong uStack_15b8;
  ulong auStack_15a0 [4];
  undefined4 uStack_1580;
  uint uStack_1570;
  long lStack_1568;
  byte bStack_1560;
  long lStack_14d0;
  long lStack_14c8;
  ulong uStack_1498;
  undefined1 auStack_13f0 [24];
  char cStack_13d8;
  long lStack_13d0;
  byte bStack_13c8;
  undefined1 auStack_1368 [40];
  long lStack_1340;
  char cStack_1338;
  uint uStack_1288;
  long lStack_1238;
  undefined1 uStack_1230;
  long lStack_1228;
  long lStack_1220;
  undefined1 auStack_11b8 [88];
  undefined1 uStack_1160;
  undefined1 auStack_1158 [24];
  undefined1 auStack_1140 [32];
  byte bStack_1120;
  undefined8 uStack_1118;
  undefined8 uStack_1110;
  long lStack_1108;
  uint uStack_1100;
  char cStack_10fc;
  ushort uStack_10fb;
  byte bStack_10f9;
  char cStack_10f8;
  undefined1 auStack_10f0 [24];
  char cStack_10d8;
  char cStack_1078;
  undefined1 auStack_1070 [24];
  char cStack_1058;
  undefined8 uStack_1040;
  long lStack_1030;
  byte bStack_1028;
  undefined8 uStack_1020;
  int iStack_1018;
  undefined4 uStack_1014;
  undefined1 auStack_1010 [456];
  byte bStack_e48;
  byte bStack_e28;
  byte bStack_c50;
  char cStack_c40;
  ulong auStack_c38 [122];
  byte bStack_868;
  ulong auStack_860 [4];
  undefined1 auStack_840 [24];
  undefined1 auStack_828 [32];
  byte bStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  long lStack_7f0;
  uint uStack_7e8;
  char cStack_7e4;
  ushort uStack_7e3;
  byte bStack_7e1;
  char cStack_7e0;
  undefined1 auStack_7d8 [24];
  char cStack_7c0;
  char cStack_760;
  char cStack_740;
  undefined8 uStack_728;
  long lStack_718;
  byte bStack_710;
  undefined8 uStack_708;
  int iStack_700;
  undefined4 uStack_6fc;
  ulong auStack_6f8 [4];
  undefined4 uStack_6d8;
  undefined1 uStack_6a0;
  undefined1 auStack_698 [328];
  undefined1 auStack_550 [32];
  undefined1 auStack_530 [24];
  undefined4 uStack_518;
  undefined1 uStack_514;
  undefined1 auStack_500 [24];
  undefined1 auStack_4e8 [72];
  undefined4 uStack_4a0;
  byte bStack_2a0;
  long lStack_288;
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined1 uStack_f0;
  undefined4 uStack_e0;
  undefined1 uStack_dc;
  ulong auStack_d8 [4];
  undefined4 uStack_b8;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [64];
  undefined1 auStack_58 [88];
  
  func_0x000107c32ee4();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000107c29ee4(auStack_860,param_1 + 0xf);
  puVar12 = (ulong *)param_1[0x15];
  func_0x00010871e320();
  (*extraout_x8)();
  bVar10 = false;
  auStack_c38[0]._0_1_ = 0;
  plVar1 = param_1 + 0x17;
  bStack_868 = 0;
  lVar20 = *param_3;
  lVar4 = param_3[1];
  plVar2 = param_1 + 0x31;
  puVar13 = puVar12;
  func_0x00010871e048();
  do {
    if (lVar20 == lVar4) {
      if (bVar10) {
        func_0x00010871e73c();
        FUN_1088660e8(auStack_15a0);
        FUN_10869148c(auStack_1010,auStack_15a0);
        func_0x000107c288ec(auStack_15a0);
        bVar10 = cStack_c40 == '\x01';
        if ((((bVar10) && ((bStack_e48 & 1) == 0)) &&
            ((func_0x00010871e688(), bVar10 || ((bStack_c50 & 1) == 0)))) && ((bStack_e28 & 1) == 0)
           ) {
          func_0x000107c288f0(auStack_c38,auStack_1010);
        }
        func_0x00010871f380();
      }
      if (bStack_868 == 1) {
        func_0x00010871e354();
        func_0x00010871e274();
      }
      func_0x000107c288cc(auStack_c38);
      func_0x000107c2a2e0(auStack_860);
      return;
    }
    func_0x00010871ec90();
    ppuVar3 = &PTR_PTR_11326cb58;
    if (*(undefined ***)(lVar20 + 0x68) != (undefined **)0x0) {
      ppuVar3 = *(undefined ***)(lVar20 + 0x68);
    }
    puVar14 = auStack_860;
    func_0x000107c287e8(puVar14,ppuVar3);
    if ((*(byte *)(lVar20 + 0x28) & 1) != 0) {
      if (((uint)puVar13 & 0xfffffffb) == 1) {
        if ((int)puVar14 == 0) {
          lVar24 = param_1[0x1b];
          FUN_10883a000(lVar24,param_2,*(undefined8 *)(lVar20 + 0x18));
          plVar15 = param_1 + 0xf;
          func_0x000107c28f08(plVar15,lVar20 + 0x50);
          FUN_10870b048(auStack_d8,lVar20 + 0x50);
          auStack_11b8[0] = 0;
          uStack_1160 = 0;
          auStack_108[0] = 0;
          uStack_15b8 = uStack_15b8 & 0xffffffffffff0000 | 0x101;
          uStack_f0 = 0;
          puVar14 = puVar12;
          FUN_10870b0c4(auStack_1158,param_2,auStack_d8,7,2,puVar12,*(undefined8 *)(lVar20 + 0x20),
                        puVar13,4,uStack_15b8,auStack_11b8,auStack_108,0);
          uVar11 = (uint)puVar14;
          func_0x00010871df60(auStack_15a0);
          uStack_1580 = 0x1ce;
          auStack_15a0[0] = extraout_x8_01;
          func_0x00010871eab8();
          func_0x00010871e1e0();
          func_0x000108841d8c(auStack_550,(long)(char)bStack_1120);
          puVar14 = auStack_15a0;
          func_0x000107c28820(puVar14,auStack_4e8,auStack_550);
          func_0x000107c2884c(auStack_840,puVar14);
          func_0x00010871e090(auStack_698,param_1 + 0x23,auStack_840);
          func_0x000107c2882c(auStack_840);
          func_0x00010871f008();
          func_0x00010871eab8();
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
          func_0x00010871eb98();
          puVar14 = auStack_15a0;
          func_0x00010871e48c(puVar14,plVar1,auStack_1158);
          bVar8 = bStack_1120 == 0xf;
          if ((((bVar8) && ((bStack_1028 & 1) != 0)) &&
              (bVar8 = cStack_1338 == '\x01' && lStack_1030 == lStack_1340,
              cStack_1338 == '\x01' && lStack_1030 < lStack_1340)) ||
             ((func_0x00010871e52c(), bVar8 && extraout_w9_00 == 2 || (cStack_13d8 == '\x01')))) {
LAB_108715dc4:
            func_0x00010871f73c();
          }
          else {
            uVar6 = 0x1d < uStack_1100;
            uVar7 = false;
            if (uStack_1100 == 0x1e) {
              func_0x00010871e968();
              bVar8 = (char)*puVar14 != '\x01';
              uVar6 = !bVar8 && 1 < uStack_1288;
              uVar7 = bVar8 || uStack_1288 == 2;
              if (bVar8 || uStack_1288 == 2) {
                uStack_1100 = 6;
              }
            }
            func_0x00010871e628(bStack_1120);
            if (((bool)uVar7) && ((uStack_10fb & 1) != 0)) {
              func_0x00010871f6e4();
              if (!(bool)uVar6 || (bool)uVar7) {
                func_0x00010871e640();
                func_0x00010871e09c();
                if (!(bool)uVar7) goto LAB_108715eb4;
              }
            }
            else {
LAB_108715eb4:
              func_0x00010871e494(CONCAT44(uStack_1014,iStack_1018),uStack_1040);
              func_0x00010871f574(auStack_1140);
              uVar11 = (uint)bStack_1120;
              puVar13 = puVar14;
            }
            iVar23 = (int)puVar13;
            bVar9 = (uVar11 & 0xff) == 5;
            bVar8 = bVar9 && cStack_10fc == '\f';
            uVar7 = bVar8;
            if (bVar9 && cStack_10fc == '\f') {
              func_0x00010871e508(uStack_1100);
              uVar7 = 0;
              if ((bVar8) && (uVar7 = lStack_1220 == lStack_1228, !(bool)uVar7)) {
                FUN_108708704(auStack_15a0,lStack_1108);
                func_0x00010871eec4();
              }
            }
            if (((int)lVar24 != 0) && ((bStack_868 & 1) == 0)) {
              FUN_1086d7048(auStack_c38,auStack_15a0);
            }
            if (((int)plVar15 != 0) &&
               ((func_0x00010871e694(uStack_1570), !(bool)uVar7 || ((bStack_1560 & 1) != 0)))) {
              if (iVar23 != 2) {
                func_0x00010871e73c();
                func_0x00010871ecd4();
              }
              goto LAB_108715dc4;
            }
            bVar8 = bStack_1120 == 7 || bStack_1120 == 2;
            if ((((bStack_1120 == 7 || bStack_1120 == 2) &&
                 (func_0x00010871e694(uStack_1100), bVar8)) &&
                (bVar8 = bStack_13c8 == 1 && lStack_13d0 == lStack_1108,
                bStack_13c8 != 1 || lStack_13d0 != lStack_1108)) &&
               (func_0x00010871e520(cStack_10fc), !bVar8)) goto LAB_108715dc4;
            plVar15 = plVar1;
            FUN_108720660(plVar1,auStack_1158);
            uVar21 = uStack_1100;
            bVar5 = bStack_1120;
            uVar17 = uStack_1498;
            uVar11 = (uint)bStack_1120;
            FUN_10871e8c0(auStack_15a0,(long)(char)bStack_1120,uStack_1100,uStack_1118,uStack_1110);
            uVar7 = 0x13 < bVar5;
            bVar8 = bVar5 == 0x14;
            if ((0x14 < bVar5) || (func_0x00010871e164(1 << (ulong)(uVar11 & 0x1f)), bVar8)) {
              func_0x00010871f7e0();
              if (((bool)uVar7) &&
                 (((bVar8 = uVar21 == 0xe, 0xe < uVar21 || (func_0x00010871e2ec(), bVar8)) ||
                  ((bVar8 = uVar11 == 0x14, 0x14 < uVar11 || (func_0x00010871e144(), bVar8)))))) {
                func_0x00010871f660();
                func_0x00010871c970(uStack_1020);
                iVar23 = 0;
                func_0x00010871edfc();
                uVar21 = uStack_1100;
              }
              bVar8 = uVar21 == 0xe;
              if (((0xe < uVar21) || (func_0x00010871e790(1 << (ulong)(uVar21 & 0x1f)), bVar8)) &&
                 (((bStack_13c8 & 1) == 0 || (lStack_13d0 <= lStack_1108)))) {
                lStack_13d0 = lStack_1108;
                bStack_13c8 = 1;
                if (cStack_1078 == '\x01') {
                  func_0x00010871f444(auStack_1158);
                }
                iVar23 = 0;
              }
            }
            if (((lStack_1568 == 0) && ((uVar17 & 0xfe) != 0)) &&
               ((*(byte *)(param_1 + 0x4a) & 1) == 0)) {
              func_0x00010871f6d8(auStack_6f8,param_1[0x23]);
              func_0x00010871e048();
              uStack_6d8 = 0x1cf;
              auStack_6f8[0] = extraout_x8_02;
              func_0x00010871e378();
              (*extraout_x8_03)();
              func_0x00010871f4d0();
            }
            uVar17 = (ulong)(char)bStack_1120;
            func_0x00010871f2f0();
            uStack_518 = (undefined4)uVar17;
            uStack_514 = (undefined1)(uVar17 >> 0x20);
            if ((uVar17 >> 0x20 & 1) == 0) {
              puVar22 = (undefined4 *)0x0;
            }
            else {
              puVar22 = &uStack_518;
              FUN_108720360(puVar22,uStack_1100,auStack_1140,uStack_1118,uStack_1110,uStack_10fb,
                            auStack_15a0,param_1 + 0xf,param_1 + 0x12,param_1 + 0x15,plVar1,plVar2);
            }
            uVar7 = bStack_1120 == 0x14;
            if (bStack_1120 < 0x15) {
              func_0x00010871e640();
              func_0x00010871e09c();
              if ((bool)uVar7) goto LAB_108716810;
            }
            else {
LAB_108716810:
              uVar7 = uStack_1100 == 0x1e;
              if (uStack_1100 < 0x1f) {
                func_0x00010871e640();
                func_0x00010871e0f8();
                if (!(bool)uVar7) goto LAB_1087161d8;
              }
              func_0x00010871e960();
              func_0x00010871e8fc();
              func_0x00010871df60();
              uStack_4a0 = 400;
              func_0x00010871e550(auStack_98);
              func_0x000107c278b8();
              func_0x00010871e334();
              func_0x000107c28824();
              func_0x00010871e544(auStack_b0);
              func_0x000107c278b8();
              func_0x00010871ed84();
              puVar18 = auStack_120;
              func_0x00010871e538(puVar18);
              func_0x000107c278b8();
              func_0x00010871ed84();
              func_0x000107c2884c(auStack_58,puVar18);
              func_0x00010871e938();
              func_0x00010871e5fc();
              func_0x000107c2882c(auStack_58);
              func_0x00010871e3ac();
              func_0x00010871e2d0();
              func_0x00010871e2d8();
              func_0x00010871e1d4();
            }
LAB_1087161d8:
            if (((ulong)puVar22 & 1) == 0) {
LAB_108716314:
              bVar8 = bStack_1120 == 0x14;
              if (((0x14 < bStack_1120) || (func_0x00010871e154(), bVar8)) && ((int)plVar15 != 0)) {
                bVar8 = uStack_1100 == 0xe;
                if (((uStack_1100 < 0xf) && (func_0x00010871e2ec(), !bVar8)) &&
                   (uVar7 = extraout_w8 == 0x14, extraout_w8 < 0x15)) {
                  func_0x00010871e640();
                  func_0x00010871e134();
                  if (!(bool)uVar7) goto LAB_10871632c;
                }
                puVar18 = auStack_13f0;
                FUN_1086a470c(puVar18,auStack_1140,param_1 + 0xf);
                uVar11 = (uint)puVar18;
                if (iVar23 != 2) {
                  uVar11 = 1;
                }
                if ((uVar11 & 1) == 0) goto LAB_108716334;
                goto LAB_1087167cc;
              }
LAB_10871632c:
              if (iVar23 != 2) goto LAB_1087167cc;
LAB_108716334:
              func_0x00010871f73c();
            }
            else {
              if (lStack_1568 == 0xb) {
                if (bStack_1120 < 0x15 && bStack_1120 != 9) {
                  uVar7 = bStack_13c8 == 1;
                  if ((bool)uVar7) {
                    plVar16 = plVar2;
                    func_0x00010871c9a0();
                    if ((int)plVar16 != 0) {
                      func_0x00010871e73c();
                      func_0x00010871e1ac();
                      func_0x00010871e198();
                      func_0x00010871e1c8();
                      func_0x00010871f68c();
                      if ((((bool)uVar7) && ((bStack_2a0 >> 2 & 1) != 0)) &&
                         (*(int *)(lStack_288 + 0xa8) == 0)) {
                        func_0x00010871e8fc();
                        func_0x00010871df60();
                        uStack_4a0 = 399;
                        func_0x00010871e574(auStack_138);
                        func_0x000107c278b8();
                        func_0x00010871e568();
                        func_0x00010871e334();
                        func_0x000107c28824();
                        func_0x00010871e1e0(auStack_150);
                        uVar11 = (uint)(char)bStack_1120;
                        func_0x000108841d8c(auStack_500);
                        func_0x00010871f4ac();
                        func_0x00010871e484();
                        func_0x00010871ebb8();
                        func_0x00010871e674();
                        func_0x00010871e2c0();
                        func_0x00010871e3c4();
                        func_0x00010871e3b8();
                        func_0x00010871e3d0();
                        func_0x00010871e1d4();
                        func_0x00010871e908();
                        func_0x00010871f294();
                        lStack_1568 = 0xd;
                        uStack_1570 = uVar11;
                      }
                      func_0x00010871e1bc();
                    }
                    bVar8 = true;
                  }
                  else {
                    bVar8 = true;
                  }
                }
                else {
                  bVar8 = false;
                }
              }
              else {
                bVar8 = false;
              }
              if (((bStack_1120 == 2) && ((bStack_13c8 & 1) != 0)) &&
                 (uVar7 = lStack_13d0 == lStack_1108, (bool)uVar7)) {
                func_0x00010871e73c();
                func_0x00010871e1ac();
                func_0x00010871e198();
                func_0x00010871e1c8();
                func_0x00010871f68c();
                if ((bool)uVar7) {
                  func_0x00010871e908(auStack_15a0);
                  func_0x00010871e370();
                }
                func_0x00010871e1bc();
              }
              uVar6 = 1 < uStack_1288;
              uVar7 = uStack_1288 == 2;
              if ((((((bool)uVar7) &&
                    (lVar24 = lStack_1568, FUN_10871fb04(lStack_1568,uStack_1570), (int)lVar24 != 0)
                    ) && (func_0x00010871e55c(bStack_1120), !(bool)uVar6 || (bool)uVar7)) &&
                  (((bStack_1560 & 1) != 0 && ((long)uStack_1498 < 2)))) &&
                 ((uStack_1570 == 2 || uStack_1570 == 0x1d) || (uStack_1570 & 0xfffffffb) == 1)) {
                lStack_1568 = 1;
              }
              if (cStack_10f8 == '\x01') {
                uStack_1498 = (ulong)bStack_10f9;
              }
              if (cStack_1058 == '\x01') {
                func_0x000107c28d24(auStack_1368,auStack_1070);
              }
              else {
                if (bStack_1120 == 0xf) {
                  bVar8 = true;
                }
                if (!bVar8) {
                  func_0x00010871e368(auStack_15a0);
                }
              }
              if (cStack_10d8 == '\x01') {
                func_0x000107c295bc(&lStack_14d0,auStack_10f0);
              }
              else if (lStack_14d0 != lStack_14c8) {
                func_0x00010871e360(auStack_15a0);
              }
              bVar8 = (char)uStack_1014 == '\x01' && iStack_1018 == 1;
              if ((char)uStack_1014 == '\x01' && iStack_1018 == 1) {
                lStack_1568 = 0x10;
              }
              func_0x00010871f710();
              if (((bVar8) && (lStack_1238 != 0)) && ((extraout_x10 & 1) == 0)) {
                uStack_1230 = 0;
              }
              iVar23 = 0;
              if (((bStack_1120 != 7) || ((int)extraout_x10 == 0)) || (extraout_w9_01 != 2))
              goto LAB_108716314;
              lStack_1238 = 1;
              uStack_1230 = 1;
LAB_1087167cc:
              func_0x00010871e73c();
              func_0x00010871ecd4();
              func_0x00010871e320(param_1[0x2b]);
              (*extraout_x8_05)();
              func_0x00010871f388();
            }
          }
          func_0x00010871eb90();
          func_0x000107c28b40(auStack_698);
          FUN_108715530(auStack_c38,auStack_1010);
          func_0x00010871f380();
          FUN_10871be98(auStack_1158);
          func_0x00010871ee64();
          func_0x000107c279dc();
          FUN_1086d0498(auStack_11b8);
          puVar14 = auStack_d8;
          func_0x000107c279dc();
        }
        else {
          puVar14 = (ulong *)(lVar20 + 0x50);
          FUN_1086a52d4(puVar14,param_1 + 0xf);
          if (((ulong)puVar14 & 1) != 0) goto LAB_108715e10;
          lVar24 = *(long *)(lVar20 + 0x20);
          func_0x00010871ec90();
          FUN_10870b048(auStack_550,lVar20 + 0x50);
          auStack_6f8[0] = auStack_6f8[0] & 0xffffffffffffff00;
          uStack_6a0 = 0;
          auStack_15a0[0] = auStack_15a0[0] & 0xffffffffffffff00;
          auStack_15a0[3] = auStack_15a0[3] & 0xffffffffffffff00;
          puVar19 = puVar12;
          FUN_10871bcc4(auStack_698,param_2,auStack_550,6,2,puVar12,lVar24,puVar14,1,0x101,
                        auStack_6f8,auStack_15a0,0);
          uVar11 = (uint)puVar19;
          func_0x000107c279dc(auStack_15a0);
          FUN_1086d0498(auStack_6f8);
          FUN_10871bdd4(auStack_840,auStack_698);
          auStack_15a0[1] = 0;
          auStack_15a0[2] = 0;
          auStack_15a0[3] = 0;
          uStack_1580 = 0x1ce;
          auStack_15a0[0] = extraout_x8_00;
          func_0x00010871e1e0(auStack_98);
          func_0x00010871e588((long)(char)bStack_808);
          func_0x00010871e174(auStack_15a0);
          func_0x00010871e484();
          func_0x00010871e00c(auStack_58,param_1 + 0x23);
          func_0x00010871e2c0();
          func_0x00010871e2d0();
          func_0x00010871e2d8();
          func_0x00010871eb98();
          puVar14 = auStack_15a0;
          func_0x00010871e48c(puVar14,plVar1,auStack_840);
          bVar8 = bStack_808 == 0xf;
          if ((((bVar8) && ((bStack_710 & 1) != 0)) &&
              (bVar8 = cStack_1338 == '\x01' && lStack_718 == lStack_1340,
              cStack_1338 == '\x01' && lStack_718 < lStack_1340)) ||
             ((func_0x00010871e52c(), bVar8 && extraout_w9 == 2 || (cStack_13d8 == '\x01')))) {
LAB_108715be8:
            func_0x00010871f73c();
          }
          else {
            uVar6 = 0x1d < uStack_7e8;
            uVar7 = false;
            if (uStack_7e8 == 0x1e) {
              func_0x00010871e968();
              bVar8 = (char)*puVar14 != '\x01';
              uVar6 = !bVar8 && 1 < uStack_1288;
              uVar7 = bVar8 || uStack_1288 == 2;
              if (bVar8 || uStack_1288 == 2) {
                uStack_7e8 = 6;
              }
            }
            func_0x00010871e628(bStack_808);
            if (((bool)uVar7) && ((uStack_7e3 & 1) != 0)) {
              func_0x00010871f6e4();
              if (!(bool)uVar6 || (bool)uVar7) {
                func_0x00010871e640();
                func_0x00010871e09c();
                if (!(bool)uVar7) goto LAB_1087160dc;
              }
            }
            else {
LAB_1087160dc:
              func_0x00010871e494(CONCAT44(uStack_6fc,iStack_700),uStack_728);
              func_0x00010871f574(auStack_828);
              uVar11 = (uint)bStack_808;
              puVar13 = puVar14;
            }
            iVar23 = (int)puVar13;
            bVar9 = (uVar11 & 0xff) == 5;
            bVar8 = bVar9 && cStack_7e4 == '\f';
            if (((bVar9 && cStack_7e4 == '\f') && (func_0x00010871e508(uStack_7e8), bVar8)) &&
               (lStack_1220 != lStack_1228)) {
              FUN_108708704(auStack_15a0,lStack_7f0);
              func_0x00010871eec4();
            }
            if (bStack_13c8 != 1 || lStack_13d0 != lVar24) {
              if (iVar23 != 2) {
                func_0x00010871e73c();
                func_0x00010871ecd4();
              }
              goto LAB_108715be8;
            }
            if (((bStack_808 == 7 || bStack_808 == 2) &&
                (bVar9 = (uStack_7e8 & 0xfffffffb) != 1, bVar8 = bVar9 || lVar24 == lStack_7f0,
                !bVar9 && lVar24 != lStack_7f0)) && (func_0x00010871e520(cStack_7e4), !bVar8))
            goto LAB_108715be8;
            plVar15 = plVar1;
            FUN_108720660(plVar1,auStack_840);
            uVar21 = uStack_7e8;
            bVar5 = bStack_808;
            uVar17 = uStack_1498;
            uVar11 = (uint)bStack_808;
            FUN_10871e8c0(auStack_15a0,(long)(char)bStack_808,uStack_7e8,uStack_800,uStack_7f8);
            uVar7 = 0x13 < bVar5;
            bVar8 = bVar5 == 0x14;
            if ((0x14 < bVar5) || (func_0x00010871e164(1 << (ulong)(uVar11 & 0x1f)), bVar8)) {
              func_0x00010871f7e0();
              if (((bool)uVar7) &&
                 ((((bVar8 = uVar21 == 0xe, 0xe < uVar21 || (func_0x00010871e2ec(), bVar8)) ||
                   (bVar8 = uVar11 == 0x14, 0x14 < uVar11)) || (func_0x00010871e144(), bVar8)))) {
                func_0x00010871f660();
                func_0x00010871c970(uStack_708);
                iVar23 = 0;
                func_0x00010871edfc();
                uVar21 = uStack_7e8;
              }
              bVar8 = uVar21 == 0xe;
              if (((0xe < uVar21) || (func_0x00010871e790(1 << (ulong)(uVar21 & 0x1f)), bVar8)) &&
                 (((bStack_13c8 & 1) == 0 || (lStack_13d0 <= lStack_7f0)))) {
                lStack_13d0 = lStack_7f0;
                bStack_13c8 = 1;
                if (cStack_760 == '\x01') {
                  func_0x00010871f444(auStack_840);
                }
                iVar23 = 0;
              }
            }
            if (((lStack_1568 == 0) && ((uVar17 & 0xfe) != 0)) &&
               ((*(byte *)(param_1 + 0x4a) & 1) == 0)) {
              func_0x00010871f6d8(auStack_d8,param_1[0x23]);
              func_0x00010871e048();
              uStack_b8 = 0x1cf;
              func_0x00010871e378();
              (*extraout_x8_04)();
              func_0x000107c2882c(auStack_d8);
            }
            uVar17 = (ulong)(char)bStack_808;
            func_0x00010871f2f0();
            uStack_e0 = (undefined4)uVar17;
            uStack_dc = (undefined1)(uVar17 >> 0x20);
            if ((uVar17 >> 0x20 & 1) == 0) {
              puVar22 = (undefined4 *)0x0;
            }
            else {
              puVar22 = &uStack_e0;
              func_0x00010871edd0(param_1 + 0x12,puVar22,uStack_7e8,auStack_828,uStack_800,
                                  uStack_7f8,uStack_7e3,auStack_15a0,param_1 + 0xf);
            }
            uVar7 = bStack_808 == 0x14;
            if (bStack_808 < 0x15) {
              func_0x00010871e640();
              func_0x00010871e09c();
              if ((bool)uVar7) goto LAB_108716bbc;
            }
            else {
LAB_108716bbc:
              uVar7 = uStack_7e8 == 0x1e;
              if (uStack_7e8 < 0x1f) {
                func_0x00010871e640();
                func_0x00010871e0f8();
                if (!(bool)uVar7) goto LAB_1087164cc;
              }
              func_0x00010871e960();
              func_0x00010871e8fc();
              func_0x00010871df60();
              uStack_4a0 = 400;
              func_0x00010871e550(auStack_120);
              func_0x000107c278b8();
              func_0x00010871e334();
              func_0x000107c28824();
              func_0x00010871e544(auStack_138);
              func_0x000107c278b8();
              func_0x00010871ed84();
              func_0x00010871e538(auStack_150);
              func_0x000107c278b8();
              func_0x00010871ed84();
              func_0x00010871ee64();
              func_0x000107c2884c();
              func_0x00010871e938();
              func_0x00010871e5fc();
              func_0x00010871ee64();
              func_0x000107c2882c();
              func_0x00010871e3b8();
              func_0x00010871e3d0();
              func_0x00010871e3ac();
              func_0x00010871e1d4();
            }
LAB_1087164cc:
            if (((ulong)puVar22 & 1) == 0) {
LAB_108716614:
              bVar8 = bStack_808 == 0x14;
              if (((0x14 < bStack_808) || (func_0x00010871e154(), bVar8)) && ((int)plVar15 != 0)) {
                bVar8 = uStack_7e8 == 0xe;
                if (((uStack_7e8 < 0xf) && (func_0x00010871e2ec(), !bVar8)) &&
                   (uVar7 = extraout_w8_00 == 0x14, extraout_w8_00 < 0x15)) {
                  func_0x00010871e640();
                  func_0x00010871e134();
                  if (!(bool)uVar7) goto LAB_10871662c;
                }
                puVar18 = auStack_13f0;
                FUN_1086a470c(puVar18,auStack_828,param_1 + 0xf);
                uVar11 = (uint)puVar18;
                if (iVar23 != 2) {
                  uVar11 = 1;
                }
                if ((uVar11 & 1) == 0) goto LAB_108716634;
                goto LAB_108716af8;
              }
LAB_10871662c:
              if (iVar23 != 2) goto LAB_108716af8;
LAB_108716634:
              func_0x00010871f73c();
            }
            else {
              if (lStack_1568 == 0xb) {
                if (bStack_808 < 0x15 && bStack_808 != 9) {
                  uVar7 = bStack_13c8 == 1;
                  if ((bool)uVar7) {
                    plVar16 = plVar2;
                    func_0x00010871c9a0();
                    if ((int)plVar16 != 0) {
                      func_0x00010871e73c();
                      func_0x00010871e1ac();
                      func_0x00010871e198();
                      func_0x00010871e1c8();
                      func_0x00010871f68c();
                      if ((((bool)uVar7) && ((bStack_2a0 >> 2 & 1) != 0)) &&
                         (*(int *)(lStack_288 + 0xa8) == 0)) {
                        func_0x00010871e8fc();
                        func_0x00010871df60();
                        uStack_4a0 = 399;
                        func_0x00010871e574(auStack_500);
                        func_0x000107c278b8();
                        func_0x00010871e568();
                        func_0x00010871e334();
                        func_0x000107c28824();
                        func_0x00010871e1e0(&uStack_518);
                        uVar11 = (uint)(char)bStack_808;
                        func_0x000108841d8c(auStack_530);
                        func_0x00010871f4ac();
                        func_0x00010871eab8();
                        func_0x000107c2884c();
                        func_0x00010871ebb8();
                        func_0x00010871e674();
                        func_0x00010871eab8();
                        func_0x000107c2882c();
                        func_0x00010871f068();
                        func_0x00010871f05c();
                        func_0x00010871e3c4();
                        func_0x00010871e1d4();
                        func_0x00010871e908();
                        func_0x00010871f294();
                        lStack_1568 = 0xd;
                        uStack_1570 = uVar11;
                      }
                      func_0x00010871e1bc();
                    }
                    bVar8 = true;
                  }
                  else {
                    bVar8 = true;
                  }
                }
                else {
                  bVar8 = false;
                }
              }
              else {
                bVar8 = false;
              }
              if (((bStack_808 == 2) && ((bStack_13c8 & 1) != 0)) &&
                 (uVar7 = lStack_13d0 == lStack_7f0, (bool)uVar7)) {
                func_0x00010871e73c();
                func_0x00010871e1ac();
                func_0x00010871e198();
                func_0x00010871e1c8();
                func_0x00010871f68c();
                if ((bool)uVar7) {
                  func_0x00010871e908(auStack_15a0);
                  func_0x00010871e370();
                }
                func_0x00010871e1bc();
              }
              uVar6 = 1 < uStack_1288;
              uVar7 = uStack_1288 == 2;
              if ((((bool)uVar7) &&
                  (lVar24 = lStack_1568, FUN_10871fb04(lStack_1568,uStack_1570), (int)lVar24 != 0))
                 && ((func_0x00010871e55c(bStack_808), !(bool)uVar6 || (bool)uVar7 &&
                     ((((bStack_1560 & 1) != 0 && ((long)uStack_1498 < 2)) &&
                      ((uStack_1570 == 2 || uStack_1570 == 0x1d) || (uStack_1570 & 0xfffffffb) == 1)
                      ))))) {
                lStack_1568 = 1;
              }
              if (cStack_7e0 == '\x01') {
                uStack_1498 = (ulong)bStack_7e1;
              }
              if (cStack_740 == '\x01') {
                func_0x00010871f4ec(auStack_15a0);
              }
              else {
                if (bStack_808 == 0xf) {
                  bVar8 = true;
                }
                if (!bVar8) {
                  func_0x00010871e368(auStack_15a0);
                }
              }
              if (cStack_7c0 == '\x01') {
                func_0x000107c295bc(&lStack_14d0,auStack_7d8);
              }
              else if (lStack_14d0 != lStack_14c8) {
                func_0x00010871e360(auStack_15a0);
              }
              bVar8 = (char)uStack_6fc == '\x01' && iStack_700 == 1;
              if ((char)uStack_6fc == '\x01' && iStack_700 == 1) {
                lStack_1568 = 0x10;
              }
              func_0x00010871f710();
              if (((bVar8) && (lStack_1238 != 0)) && ((extraout_x10_00 & 1) == 0)) {
                uStack_1230 = 0;
              }
              iVar23 = 0;
              if (((bStack_808 != 7) || ((int)extraout_x10_00 == 0)) || (extraout_w9_02 != 2))
              goto LAB_108716614;
              lStack_1238 = 1;
              uStack_1230 = 1;
LAB_108716af8:
              func_0x00010871e73c();
              func_0x00010871ecd4();
              func_0x00010871e320(param_1[0x2b]);
              (*extraout_x8_06)();
              func_0x00010871f388();
            }
          }
          func_0x00010871eb90();
          func_0x00010871e2c8();
          FUN_10871be98(auStack_840);
          FUN_10871be98(auStack_698);
          func_0x000107c279dc(auStack_550);
          puVar14 = auStack_c38;
          FUN_108715530(puVar14,auStack_1010);
          func_0x00010871f380();
        }
      }
      else {
        func_0x00010871ed6c(auStack_15a0,param_1,param_2,*(undefined8 *)(lVar20 + 0xb0),0);
        FUN_108715530(auStack_c38,auStack_15a0);
        puVar14 = auStack_15a0;
        func_0x000107c288cc();
        bVar10 = true;
      }
LAB_108715e10:
      if ((*(char *)(lVar20 + 0x138) == '\x01') && (*(long *)(lVar20 + 0x130) != 0)) {
        (**(code **)(*param_1 + 0x28))(auStack_15a0,param_1,param_2,*(long *)(lVar20 + 0x130),0);
        FUN_108715530(auStack_c38,auStack_15a0);
        puVar14 = auStack_15a0;
        func_0x000107c288cc();
      }
    }
    lVar20 = lVar20 + 0x1a8;
    puVar13 = puVar14;
  } while( true );
}



/* Entry: 1087171bc; end: 108717257;  */

void FUN_1087171bc(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined1 *puVar1;
  long unaff_x21;
  undefined1 auStack_d0 [40];
  undefined1 auStack_a8 [40];
  undefined1 auStack_80 [80];
  
  puVar1 = auStack_d0;
  if (*param_3 != param_3[1]) {
    func_0x000100864a88();
    func_0x00010871e2b4();
    func_0x00010871eef4();
    func_0x00010871eaf8(auStack_d0,0x6c);
    func_0x000107c2884c(auStack_a8,puVar1);
    func_0x00010871e090(auStack_80,unaff_x21 + 0x118,auStack_a8);
    func_0x00010871ecf8();
    func_0x00010871ed64();
    FUN_10871599c();
    func_0x00010871ec64();
  }
  return;
}



/* Entry: 108717258; end: 1087175ff;  */

void FUN_108717258(undefined1 *param_1,ulong param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  undefined8 *****pppppuVar6;
  long lVar7;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  undefined4 uVar8;
  int extraout_w9;
  int extraout_w9_00;
  long unaff_x19;
  long unaff_x20;
  undefined1 *puVar9;
  undefined8 ****ppppuStack_860;
  undefined8 ****ppppuStack_858;
  undefined8 ****ppppuStack_850;
  long lStack_848;
  long lStack_840;
  undefined8 auStack_830 [4];
  undefined8 uStack_810;
  undefined8 uStack_650;
  byte abStack_648 [368];
  ulong uStack_4d8;
  char cStack_4d0;
  byte bStack_470;
  undefined1 uStack_460;
  undefined1 *puStack_458;
  undefined1 uStack_450;
  undefined8 ****ppppuStack_448;
  undefined8 ****ppppuStack_440;
  undefined8 ****ppppuStack_438;
  undefined1 uStack_430;
  undefined8 ****ppppuStack_428;
  undefined8 ****ppppuStack_420;
  undefined1 auStack_418 [976];
  undefined8 uStack_48;
  
  func_0x00010086515c();
  uVar2 = *(char *)(param_2 + 0x5c) == '\x01';
  uStack_48 = extraout_x8;
  if (!(bool)uVar2) goto LAB_108717560;
  func_0x000107c32eb0();
  auStack_830[0]._0_1_ = 0;
  uStack_460 = 0;
  if (*(char *)(param_2 + 0x18) == '\x01') {
    func_0x00010871e108(auStack_418);
    param_2 = 0;
    func_0x000107c28924(auStack_830);
    param_1 = auStack_418;
    func_0x000107c288d0();
    if ((cStack_4d0 != '\x01') ||
       (uVar2 = *(ulong *)(unaff_x20 + 0x60) == uStack_4d8,
       uStack_4d8 < *(ulong *)(unaff_x20 + 0x60))) goto LAB_1087172d4;
  }
  else {
LAB_1087172d4:
    uVar3 = *(char *)(unaff_x19 + 0x251) == '\x01';
    if ((bool)uVar3) {
      param_1 = *(undefined1 **)(unaff_x19 + 0x168);
      func_0x000107c32ec8();
      (*extraout_x8_00)();
      puVar9 = param_1;
    }
    else {
      param_2 = 0;
      puVar9 = (undefined1 *)0x1;
    }
    uVar4 = (uint)param_1;
    if (*(long *)(unaff_x19 + 0x478) != 0) {
      FUN_108717600(auStack_418);
      uVar2 = 0;
      if (*(int *)(unaff_x20 + 0x154) == 1) {
        uVar2 = *(undefined1 *)(unaff_x20 + 0x160);
      }
      if (((ulong)puVar9 & 1) == 0) {
        uVar8 = (undefined4)((ulong)puVar9 >> 0x20);
        if ((param_2 & 1) == 0) {
          uVar8 = 8;
        }
        uVar1 = *(undefined4 *)(unaff_x20 + 0x58);
        uVar3 = *(char *)(unaff_x20 + 0x5c) == '\0';
        if ((bool)uVar3) {
          uVar1 = 0;
        }
        FUN_1086981a4(*(undefined8 *)(unaff_x19 + 0x478),auStack_418,uVar8,uVar2,uVar1);
      }
      else {
        uVar8 = *(undefined4 *)(unaff_x20 + 0x58);
        uVar3 = *(char *)(unaff_x20 + 0x5c) == '\0';
        if ((bool)uVar3) {
          uVar8 = 0;
        }
        FUN_108698260(*(undefined8 *)(unaff_x19 + 0x478),auStack_418,uVar2,uVar8);
      }
      uVar4 = (uint)auStack_418;
      FUN_10868cd4c();
    }
    func_0x00010871eda4();
    if (((uVar4 | (uint)puVar9 ^ 1) & 1) == 0) {
      FUN_10868cc2c(auStack_418);
      ppppuStack_860 = (undefined8 ****)0x0;
      ppppuStack_858 = (undefined8 ****)0x0;
      ppppuStack_850 = (undefined8 ****)0x0;
      uStack_450 = 0;
      lVar7 = 1;
      pppppuVar6 = &ppppuStack_850;
      puStack_458 = (undefined1 *)&ppppuStack_860;
      func_0x00010868d4d0();
      ppppuStack_850 = pppppuVar6 + lVar7 * 0x4c;
      ppppuStack_440 = &ppppuStack_428;
      ppppuStack_438 = &ppppuStack_420;
      uStack_430 = 0;
      ppppuStack_860 = pppppuVar6;
      ppppuStack_858 = pppppuVar6;
      ppppuStack_448 = &ppppuStack_850;
      ppppuStack_428 = pppppuVar6;
      ppppuStack_420 = pppppuVar6;
      FUN_10868cc2c();
      pppppuVar6 = (undefined8 *****)(ppppuStack_420 + 0x4c);
      uStack_430 = 1;
      ppppuStack_420 = pppppuVar6;
      FUN_10868d5d4(&ppppuStack_448);
      uStack_450 = 1;
      ppppuStack_858 = pppppuVar6;
      func_0x00010868d6bc(&puStack_458);
      FUN_1087176dc(&lStack_848);
      func_0x00010868c8fc(&ppppuStack_860);
      func_0x000107c28d00(auStack_418);
      uVar2 = lStack_848 == lStack_840;
      if (!(bool)uVar2) {
        func_0x00010871f654();
        if ((bool)uVar2) {
          iVar5 = (int)auStack_830;
          func_0x00010871c23c();
        }
        else {
          iVar5 = (int)auStack_830;
          func_0x000107c291e0();
          uStack_460 = 1;
        }
        func_0x00010871e9a4();
        if (iVar5 != 0) {
          func_0x00010871edec();
          uVar2 = (bool)uVar2 && extraout_w9_00 == 1;
          if ((bool)uVar2) {
            func_0x00010871e354();
            func_0x00010871e274();
            goto LAB_108717508;
          }
        }
        func_0x00010871f250();
        goto LAB_108717530;
      }
LAB_108717508:
      func_0x00010871f250();
    }
    else {
      func_0x00010871f654();
      uVar2 = uVar3;
      if (((bool)uVar3) && (*(int *)(unaff_x20 + 0x98) == 0)) {
        func_0x00010871e9a4();
        if (uVar4 == 0) {
LAB_1087173b4:
          uVar2 = *(char *)(unaff_x19 + 0x252) == '\0';
          lVar7 = 0x1e0;
          if ((bool)uVar2) {
            lVar7 = 0x3b8;
          }
          *(undefined8 *)((long)auStack_830 + lVar7) = uStack_810;
          lVar7 = 0x1e8;
          if ((bool)uVar2) {
            lVar7 = 0x3c0;
          }
          *(undefined1 *)((long)auStack_830 + lVar7) = 1;
        }
        else {
          func_0x00010871edec();
          uVar2 = (bool)uVar3 && extraout_w9 == 1;
          if (!(bool)uVar3 || extraout_w9 != 1) goto LAB_1087173b4;
          if ((abStack_648[0] & 1) == 0) {
            abStack_648[0] = 1;
          }
          uStack_650 = uStack_810;
        }
        func_0x00010871f19c(*(undefined8 *)(unaff_x19 + 0xb8));
      }
LAB_108717530:
      func_0x00010871f654();
      if (((bool)uVar2) &&
         (((func_0x00010871e688(), (bool)uVar2 || ((bStack_470 & 1) == 0)) &&
          ((abStack_648[0] & 1) == 0)))) {
        func_0x00010871e354();
        func_0x00010871e274();
      }
    }
  }
  func_0x00010871ebc4();
LAB_108717560:
  func_0x00010086526c(uStack_48);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  FUN_10868cd4c(auStack_418);
  do {
    func_0x00010871ebc4();
    func_0x00010871e260();
    func_0x00010871f250();
  } while( true );
}



/* Entry: 108717600; end: 1087176b3;  */

void FUN_108717600(undefined8 *param_1,long param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [24];
  byte bStack_28;
  
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(bool *)(param_1 + 7) = *(int *)(param_2 + 0x98) == 1;
  if (*(char *)(param_2 + 0xd8) == '\x01') {
    func_0x000107c32eb0();
    FUN_108843a84(auStack_40,param_2 + 0xc0);
    if ((bStack_28 & 1) != 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
      FUN_108843a84(auStack_60,unaff_x20 + 0x38);
      func_0x000107c27c54(unaff_x19 + 0x18,auStack_60);
      func_0x000107c279a4(auStack_60);
    }
    func_0x000107c279a4(auStack_40);
  }
  return;
}



/* Entry: 1087176b4; end: 1087176db;  */

byte FUN_1087176b4(long param_1)

{
  byte bVar1;
  
  if ((*(byte *)(param_1 + 0x488) & *(byte *)(param_1 + 0x1e0) & 1) == 0) {
    bVar1 = (*(byte *)(param_1 + 0x1e0) ^ 1) & *(byte *)(param_1 + 0x488);
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x489) ^ 1;
  }
  return bVar1 & 1;
}



/* Entry: 1087176dc; end: 108719437;  */

void FUN_1087176dc(undefined8 *param_1,long param_2,undefined8 param_3,int param_4,
                  undefined4 param_5,undefined4 param_6)

{
  ulong uVar1;
  undefined **ppuVar2;
  undefined4 uVar3;
  char cVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  long **pplVar13;
  long *plVar14;
  long *plVar15;
  char *pcVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  undefined1 *puVar20;
  byte extraout_w8;
  byte bVar21;
  uint extraout_w8_00;
  uint uVar22;
  int extraout_w8_01;
  int extraout_w8_02;
  uint extraout_w8_03;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  long lVar23;
  code *extraout_x8_01;
  long *extraout_x8_02;
  long *extraout_x8_03;
  long *extraout_x8_04;
  undefined *puVar24;
  code *extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  code *extraout_x8_09;
  long extraout_x8_10;
  long *extraout_x8_11;
  code *extraout_x8_12;
  long extraout_x8_13;
  ulong extraout_x8_14;
  code *extraout_x8_15;
  long *extraout_x8_16;
  long *extraout_x8_17;
  ulong extraout_x8_18;
  code *extraout_x8_19;
  code *extraout_x8_20;
  int extraout_w9;
  ulong uVar25;
  long extraout_x9;
  ulong extraout_x10;
  long *unaff_x19;
  ulong uVar26;
  undefined8 uVar27;
  long *plVar28;
  int iVar29;
  long unaff_x21;
  undefined8 *puVar30;
  ulong uVar31;
  long lVar32;
  undefined4 *puVar33;
  uint uVar34;
  ulong unaff_x26;
  long *plVar35;
  long *plVar36;
  long lVar37;
  ulong uVar38;
  int iStack_1904;
  undefined1 auStack_1868 [24];
  undefined1 auStack_1850 [24];
  undefined1 auStack_1838 [24];
  undefined1 auStack_1820 [24];
  undefined1 auStack_1808 [24];
  undefined1 auStack_17f0 [40];
  undefined1 auStack_17c8 [272];
  undefined8 uStack_16b8;
  undefined1 uStack_16b0;
  undefined8 uStack_16a8;
  undefined1 uStack_16a0;
  undefined1 auStack_1698 [160];
  undefined8 uStack_15f8;
  undefined1 uStack_15f0;
  undefined8 uStack_1418;
  char cStack_13f8;
  long *plStack_13f0;
  long *plStack_13e8;
  ulong uStack_13e0;
  byte bStack_13d8;
  ulong auStack_13c8 [3];
  undefined1 auStack_13b0 [608];
  byte bStack_1150;
  long lStack_1148;
  long lStack_1140;
  undefined8 uStack_1138;
  long lStack_1130;
  long lStack_1128;
  undefined1 auStack_1118 [24];
  undefined1 auStack_1100 [24];
  undefined1 auStack_10e8 [40];
  undefined1 auStack_10c0 [80];
  undefined1 auStack_1070 [24];
  undefined1 auStack_1058 [40];
  undefined8 uStack_1030;
  undefined8 uStack_1028;
  undefined8 uStack_1020;
  undefined1 auStack_1018 [24];
  undefined1 auStack_1000 [32];
  byte bStack_fe0;
  undefined8 uStack_fd8;
  long lStack_fd0;
  long lStack_fc8;
  uint uStack_fc0;
  char cStack_fbc;
  ushort uStack_fbb;
  byte bStack_fb9;
  char cStack_fb8;
  undefined1 auStack_fb0 [24];
  char cStack_f98;
  undefined1 auStack_f90 [88];
  char cStack_f38;
  undefined1 auStack_f30 [24];
  char cStack_f18;
  undefined8 uStack_f00;
  undefined8 uStack_ef8;
  long lStack_ef0;
  byte bStack_ee8;
  undefined8 uStack_ee0;
  int iStack_ed8;
  uint uStack_ed4;
  undefined1 auStack_ed0 [88];
  undefined1 uStack_e78;
  undefined1 auStack_e70 [104];
  undefined1 auStack_e08 [224];
  undefined1 auStack_d28 [32];
  undefined1 auStack_d08 [24];
  undefined1 auStack_cf0 [24];
  undefined1 auStack_cd8 [24];
  undefined1 auStack_cc0 [40];
  undefined1 auStack_c98 [96];
  byte bStack_c38;
  long lStack_c20;
  char cStack_af0;
  undefined1 auStack_ae8 [24];
  undefined1 auStack_ad0 [24];
  undefined1 auStack_ab8 [24];
  undefined1 auStack_aa0 [40];
  undefined4 uStack_a78;
  undefined1 uStack_a74;
  undefined1 auStack_a70 [32];
  undefined4 uStack_a50;
  undefined1 auStack_a48 [24];
  undefined1 auStack_a30 [24];
  undefined1 auStack_a18 [40];
  undefined1 auStack_9f0 [80];
  long *plStack_9a0;
  long *plStack_998;
  ulong uStack_990;
  long *plStack_988;
  long *plStack_980;
  ulong uStack_978;
  uint uStack_970;
  long lStack_968;
  byte bStack_960;
  undefined1 auStack_930 [56];
  long lStack_8f8;
  undefined1 uStack_8f0;
  long lStack_8d0;
  long lStack_8c8;
  ulong uStack_898;
  undefined1 auStack_7f0 [24];
  char cStack_7d8;
  long lStack_7d0;
  undefined1 uStack_7c8;
  long lStack_740;
  char cStack_738;
  uint uStack_688;
  uint uStack_660;
  long lStack_638;
  char cStack_630;
  long lStack_628;
  long lStack_620;
  char cStack_5d0;
  long alStack_5b0 [4];
  long lStack_590;
  undefined8 uStack_4a0;
  undefined1 uStack_498;
  undefined8 uStack_490;
  undefined1 uStack_488;
  undefined1 auStack_480 [160];
  undefined8 uStack_3e0;
  undefined1 uStack_3d8;
  long lStack_3d0;
  char cStack_3c8;
  uint uStack_260;
  undefined1 uStack_25c;
  undefined8 uStack_258;
  undefined1 uStack_250;
  undefined8 uStack_200;
  char cStack_1f0;
  byte bStack_1e0;
  undefined1 auStack_1d8 [32];
  undefined4 uStack_1b8;
  undefined8 uStack_18;
  
  func_0x000107c32ee4();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x00010871ed20();
  func_0x00010086515c();
  uStack_18 = extraout_x8;
  if (*(char *)(param_2 + 0x251) == '\x01') {
    uVar11 = *(ulong *)(unaff_x21 + 0x168);
    func_0x000107c32ec8();
    (*extraout_x8_00)();
  }
  else {
    uVar11 = 1;
  }
  lVar32 = *unaff_x19;
  lVar37 = unaff_x19[1];
  lVar23 = *(long *)(unaff_x21 + 0x478);
  if ((lVar32 == lVar37) || ((uVar11 & 1) == 0)) {
    uVar8 = lVar32 == lVar37 || lVar23 == 0;
    if ((lVar32 != lVar37 && lVar23 != 0) && (uVar11 & 1) == 0) {
      FUN_108719b68();
      FUN_108717600(&plStack_9a0,lVar32);
      uVar8 = *(char *)(lVar32 + 0x5c) == '\0';
      func_0x00010871f63c();
      FUN_1086981a4();
      func_0x00010871e5b4();
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    goto LAB_108718f34;
  }
  uVar8 = 0;
  if (lVar23 != 0) {
    FUN_108719b68();
    uVar27 = *(undefined8 *)(unaff_x21 + 0x478);
    FUN_108717600(&plStack_9a0,lVar32);
    uVar7 = 0;
    if (*(int *)(lVar32 + 0x154) == 1) {
      uVar7 = *(undefined1 *)(lVar32 + 0x160);
    }
    uVar3 = *(undefined4 *)(lVar32 + 0x58);
    uVar8 = *(char *)(lVar32 + 0x5c) == '\0';
    if ((bool)uVar8) {
      uVar3 = 0;
    }
    FUN_108698260(uVar27,&plStack_9a0,uVar7,uVar3);
    func_0x00010871e5b4();
  }
  plVar28 = (long *)(unaff_x21 + 0x68);
  if ((*plVar28 == 0) || (plVar36 = plVar28, func_0x000107c29648(), (int)plVar36 == 0)) {
    uVar9 = 0;
  }
  else {
    func_0x000107c296a0(plVar28,0x8b,0x100000000);
    uVar9 = (uint)plVar28;
  }
  iVar10 = *(int *)(unaff_x19[1] + -0x208);
  uStack_1028 = 0;
  uStack_1030 = 0;
  uStack_1020 = 0;
  if (((*(byte *)(unaff_x21 + 0x251) & 1) == 0) && (*(long *)(unaff_x21 + 0x1a0) != 0)) {
    FUN_10886d40c(&plStack_9a0,*(undefined8 *)(unaff_x21 + 0xb8));
    plVar28 = plStack_998;
    cVar4 = (char)plStack_980;
    if ((char)plStack_980 == '\0') {
      uVar31 = 0;
      uVar11 = 0;
    }
    else {
      uVar11 = uStack_990 & 0xff;
      plStack_980 = (long *)((ulong)plStack_980 & 0xffffffffffffff00);
      unaff_x26 = (ulong)plStack_988 & 0xff;
      uVar31 = (uStack_990 >> 8 & 0xffffffff) << 8 | uStack_990 & 0xffffff0000000000;
    }
    plStack_998 = (long *)0x0;
    FUN_10871deb0(&plStack_9a0);
    if ((cVar4 == '\0') || (plVar28 == (long *)0x0)) goto LAB_1087179a0;
    if ((unaff_x26 & 1) == 0) {
      bVar6 = false;
    }
    else {
      lVar32 = *(long *)(unaff_x21 + 0x1a0);
      uVar12 = *(ulong *)(unaff_x21 + 0xa8);
      func_0x000107c32ec8();
      (*extraout_x8_01)();
      uVar11 = lVar32 + (uVar11 | uVar31);
      bVar6 = uVar12 <= uVar11;
      uVar8 = uVar11 == uVar12;
    }
    uStack_990 = 0;
    plStack_988 = (long *)0x0;
    func_0x00010871e048();
    plStack_998 = (long *)0x0;
    plStack_980 = (long *)CONCAT44(plStack_980._4_4_,0x270);
    plStack_9a0 = extraout_x8_02;
    func_0x000107c278b8(auStack_1070,"skipped");
    pplVar13 = &plStack_9a0;
    func_0x000107c28818(pplVar13,auStack_1070,bVar6);
    func_0x000107c2884c(auStack_1058,pplVar13);
    func_0x00010871ebb8();
    func_0x00010871e674();
    func_0x000107c2882c(auStack_1058);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1070);
    func_0x00010871e580();
    if (bVar6 == false) goto LAB_1087179a0;
  }
  else {
LAB_1087179a0:
    uStack_990 = 0;
    plStack_988 = (long *)0x0;
    func_0x00010871e048();
    plStack_998 = (long *)0x0;
    plStack_980 = (long *)CONCAT44(plStack_980._4_4_,0x268);
    plStack_9a0 = extraout_x8_03;
    func_0x000107c278b8(auStack_1100,&UNK_10f4b0628);
    lVar32 = unaff_x21;
    FUN_1087176b4(unaff_x21);
    pplVar13 = &plStack_9a0;
    func_0x000107c28818(pplVar13,auStack_1100,lVar32);
    func_0x000107c278b8(auStack_1118,&UNK_10f4b2410);
    func_0x000107c28818(pplVar13,auStack_1118,param_5);
    func_0x000107c2884c(auStack_10e8,pplVar13);
    func_0x00010871e090(auStack_10c0,unaff_x21 + 0x118,auStack_10e8);
    func_0x000107c2882c(auStack_10e8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1118);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1100);
    func_0x00010871e580();
    puVar30 = (undefined8 *)(unaff_x21 + 0xb8);
    FUN_108867028(&plStack_9a0,*puVar30,0x7fffffffffffffff,iVar10 + uVar9,0);
    iVar10 = (int)&plStack_9a0;
    FUN_1086c6c08(&lStack_1130);
    func_0x00010871e6f0();
    func_0x00010871e61c();
    FUN_108866e6c();
    lStack_1140 = 0;
    lStack_1148 = 0;
    uStack_1138 = 0;
    auStack_13b0[0] = 0;
    bStack_1150 = 0;
    func_0x00010871e75c(unaff_x19[1]);
    FUN_108719bbc(&uStack_1030);
    func_0x00010871e75c(unaff_x19[1]);
    func_0x000107c27ab0(&lStack_1148);
    uVar31 = 0;
    uVar11 = 0;
    auStack_13c8[1] = 0;
    auStack_13c8[0] = 0;
    auStack_13c8[2] = 0;
    lVar37 = *unaff_x19;
    lVar23 = unaff_x19[1];
    plVar28 = (long *)(unaff_x21 + 0xa8);
    lVar32 = unaff_x21 + 0x188;
    func_0x00010871e048();
    for (; lVar37 != lVar23; lVar37 = lVar37 + 0x260) {
      plStack_13f0 = (long *)((ulong)plStack_13f0 & 0xffffffffffffff00);
      bStack_13d8 = 0;
      lVar18 = lVar37;
      FUN_10868f768();
      if (((int)lVar18 == 0) || (*(char *)(lVar37 + 0x1f0) != '\x01')) {
LAB_10871831c:
        uVar25 = (ulong)*(uint *)(lVar37 + 0x58);
        uVar12 = ((ulong)uVar9 - 1) + uVar25;
        if (*(int *)(lVar37 + 0x98) == 1) {
          if (uVar12 < (ulong)((lStack_1128 - lStack_1130) / 0x3d0)) {
            func_0x000107c291e0(&plStack_9a0,lStack_1130 + uVar12 * 0x3d0);
            func_0x00010871efcc();
            func_0x00010871e944();
            uVar26 = 0x1d1;
          }
          else {
            if (lStack_1130 == lStack_1128) {
              func_0x00010871f814();
              uVar26 = extraout_x8_13 - 2;
              goto LAB_108718574;
            }
            func_0x000107c291e0(&plStack_9a0,lStack_1128 + -0x3d0);
            func_0x00010871efcc();
            func_0x00010871e944();
            func_0x00010871f814();
            uVar26 = extraout_x8_07 - 1;
          }
          func_0x00010871e61c();
          FUN_10886c22c();
        }
        else {
          uVar26 = 0x1d1;
          if (*(int *)(lVar37 + 0x98) == 0) {
            if (uVar12 < (ulong)((lStack_1128 - lStack_1130) / 0x3d0)) {
              lVar18 = *(long *)(lStack_1130 + uVar12 * 0x3d0 + 0x20) + 1;
              uVar26 = 0x1d1;
            }
            else if (lStack_1130 == lStack_1128) {
              lVar18 = *(long *)(lVar37 + 0x60);
              func_0x00010871f814();
              uVar26 = extraout_x8_08 - 2;
            }
            else {
              lVar18 = *(long *)(lStack_1128 + -0x3b0) - uVar25;
              func_0x00010871f814();
              uVar26 = extraout_x8_06 - 1;
            }
            func_0x00010871e61c();
            func_0x00010871f110();
            func_0x00010871eaa8();
            func_0x00010871e6f0();
            uStack_25c = *(undefined1 *)(lVar37 + 0x5c);
            uStack_260 = *(uint *)(lVar37 + 0x58);
            uStack_250 = *(undefined1 *)(lVar37 + 0x68);
            uStack_258 = *(undefined8 *)(lVar37 + 0x60);
            lStack_590 = lVar18;
            if ((*(char *)(lVar37 + 0x160) == '\x01' && *(int *)(lVar37 + 0x154) == 1) &&
               (lVar19 = lVar32, FUN_108708e70(), (int)lVar19 != 0)) {
              cStack_3c8 = '\x01';
              lStack_3d0 = lVar18;
            }
            else if (cStack_3c8 == '\x01') {
              cStack_3c8 = '\0';
            }
            if (cStack_1f0 == '\x01') {
              cStack_1f0 = '\0';
            }
            func_0x00010871e61c();
            FUN_1088665d4();
            FUN_1087139d0(&uStack_1030,alStack_5b0);
            lVar18 = lVar37;
            FUN_1086902dc();
            if ((int)lVar18 != 0) {
              func_0x00010871e478();
              func_0x000107c27994();
              func_0x00010871e590(&plStack_9a0,auStack_1d8);
              lVar18 = *plVar28;
              func_0x000107c32ec8(lVar18);
              (*extraout_x8_09)();
              FUN_108708c2c(*(undefined8 *)(unaff_x21 + 0xb8),*(undefined1 *)(unaff_x21 + 0x252),
                            &plStack_9a0,lVar18);
              func_0x000107c27a04(&plStack_9a0);
              func_0x00010871e478();
              func_0x000107c27914();
              func_0x00010871e478();
              func_0x000107c27994();
              func_0x00010871e590(&plStack_9a0,auStack_1d8);
              FUN_108719d30(&plStack_9a0,5,unaff_x21 + 200);
              func_0x000107c27a04(&plStack_9a0);
              func_0x00010871e478();
              func_0x000107c27914();
            }
            func_0x00010871e3a0();
          }
        }
LAB_108718574:
        plVar36 = *(long **)(unaff_x21 + 0x118);
        func_0x00010871df60(&plStack_9a0);
        plStack_980._0_4_ = 0x267;
        func_0x00010871e5a8();
        func_0x000107c278b8();
        func_0x00010871f838(uVar26 & 0xffff);
        pplVar13 = &plStack_9a0;
        func_0x000107c28824(pplVar13,alStack_5b0,*(undefined8 *)(extraout_x9 + extraout_x8_10 * 8));
        func_0x00010871e5a8();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
        func_0x000107c278b8(auStack_1808,&UNK_10f4b0628);
        lVar18 = unaff_x21;
        FUN_1087176b4(unaff_x21);
        func_0x000107c28818(pplVar13,auStack_1808,lVar18);
        func_0x000107c278b8(auStack_1820,&UNK_10f4b2410);
        func_0x000107c28818(pplVar13,auStack_1820,param_5);
        FUN_1086901fc();
        puVar20 = auStack_1838;
        func_0x00010871e290(puVar20);
        func_0x00010871e4e8((long)*(int *)(lVar37 + 0x120));
        func_0x00010871e5a0();
        func_0x000107c2884c(auStack_17f0,puVar20);
        func_0x00010871f4bc(*(undefined8 *)(*plVar36 + 0x50));
        func_0x000107c2882c(auStack_17f0);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1838);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1820);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1808);
        func_0x00010871e580();
        plVar36 = *(long **)(unaff_x21 + 0x118);
        plStack_998 = (long *)0x0;
        uStack_990 = 0;
        plStack_988 = (long *)0x0;
        func_0x00010871e048();
        plStack_980 = (long *)CONCAT44(plStack_980._4_4_,0x275);
        uVar3 = 0x4d01ca;
        if (*(int *)(lVar37 + 0x98) != 1) {
          uVar3 = 0x4d01cb;
        }
        plStack_9a0 = extraout_x8_11;
        FUN_1086901fc(&plStack_9a0,uVar3);
        func_0x00010871e290(auStack_1850);
        func_0x00010871e4e8((long)*(int *)(lVar37 + 0x120));
        func_0x00010871e5a0();
        puVar20 = auStack_1868;
        func_0x00010871e7f4(puVar20);
        func_0x00010871e5a0();
        lVar18 = *plVar28;
        func_0x000107c32ec8();
        (*extraout_x8_12)();
        alStack_5b0[0] = (lVar18 - *(long *)(lVar37 + 0x128)) * 1000000;
        (**(code **)(*plVar36 + 0x18))(plVar36,puVar20,alStack_5b0);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1868);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1850);
        func_0x00010871e580();
        if (*(char *)(lVar37 + 0xd8) == '\x01') {
          FUN_108713d6c(&plStack_9a0,unaff_x21 + 0x148);
          if (plStack_9a0 != (long *)0x0) {
            (**(code **)(*plStack_9a0 + 0xb0))(plStack_9a0,lVar37);
          }
          func_0x000107c291a8(&plStack_9a0);
        }
        if ((bStack_13d8 == 1) && (*(char *)(lVar37 + 0x18) == '\x01')) {
          func_0x000107c27994(&plStack_9a0,lVar37);
          plStack_980 = plStack_13e8;
          plStack_988 = plStack_13f0;
          uStack_978 = uStack_13e0;
          uStack_13e0 = 0;
          plStack_13e8 = (long *)0x0;
          plStack_13f0 = (long *)0x0;
          if (uVar11 < uVar31) {
            FUN_10871c590(uVar11,&plStack_9a0);
            uVar1 = uVar11;
          }
          else {
            lVar18 = uVar11 - auStack_13c8[0];
            uVar12 = lVar18 / 0x30 + 1;
            if (0x555555555555555 < uVar12) {
              func_0x00010871e4dc();
              FUN_10871c5a0();
              goto LAB_108719220;
            }
            uVar25 = (long)(uVar31 - auStack_13c8[0]) / 0x30;
            uVar31 = uVar25 * 2;
            if (uVar31 < uVar12 || uVar31 - uVar12 == 0) {
              uVar31 = uVar12;
            }
            if (0x2aaaaaaaaaaaaa9 < uVar25) {
              uVar31 = 0x555555555555555;
            }
            if (uVar31 == 0) {
              lVar19 = 0;
            }
            else {
              if (0x555555555555555 < uVar31) goto LAB_108718f60;
              lVar19 = uVar31 * 0x30;
              __Znwm();
            }
            uVar1 = lVar19 + lVar18;
            FUN_10871c590(uVar1,&plStack_9a0);
            uVar26 = auStack_13c8[0];
            uVar38 = uVar1 + ((long)(uVar11 - auStack_13c8[0]) / -0x30) * 0x30;
            uVar25 = uVar38;
            for (uVar12 = auStack_13c8[0]; uVar12 != uVar11; uVar12 = uVar12 + 0x30) {
              FUN_10871c590(uVar25,uVar12);
              uVar25 = uVar25 + 0x30;
            }
            for (; uVar26 != uVar11; uVar26 = uVar26 + 0x30) {
              FUN_108719c4c(uVar26);
            }
            uVar31 = lVar19 + uVar31 * 0x30;
            bVar6 = auStack_13c8[0] != 0;
            auStack_13c8[0] = uVar38;
            if (bVar6) {
              __ZdlPv();
            }
          }
          uVar11 = uVar1 + 0x30;
          FUN_108719c4c(&plStack_9a0);
        }
        func_0x000107c28840(&lStack_1148,lVar37 + 0x38);
        if ((bStack_1150 != 1) ||
           (lVar18 = lVar37, FUN_108719c70(lVar37,auStack_13b0), (int)lVar18 != 0)) {
          func_0x00010868c744(auStack_13b0,lVar37);
        }
      }
      else {
        FUN_1086903f8(&plStack_9a0,lVar37,puVar30,unaff_x21 + 0x438,unaff_x21 + 0x118);
        if (bStack_13d8 == (byte)plStack_988) {
          if (bStack_13d8 != 0) {
            func_0x0001086a9b44(&plStack_13f0,&plStack_9a0);
          }
        }
        else if (bStack_13d8 == 0) {
          plStack_13e8 = plStack_998;
          plStack_13f0 = plStack_9a0;
          uStack_13e0 = uStack_990;
          uStack_990 = 0;
          plStack_998 = (long *)0x0;
          plStack_9a0 = (long *)0x0;
          bStack_13d8 = 1;
        }
        else {
          func_0x00010867b9fc(&plStack_13f0);
          bStack_13d8 = 0;
        }
        FUN_10871c570(&plStack_9a0);
        plVar36 = plStack_13e8;
        if ((bStack_13d8 & 1) != 0) {
          if ((plStack_13f0 == plStack_13e8) || (*(char *)(lVar37 + 0x18) != '\x01'))
          goto LAB_10871831c;
          if ((*(byte *)(plStack_13e8 + -0x29) >> 3 & 1) == 0) {
            auStack_17c8[0] = 0;
            cStack_13f8 = '\0';
          }
          else {
            plVar35 = plStack_13e8 + -0x2b;
            plVar14 = plVar35;
            func_0x000107c29e78(plVar35);
            FUN_10870b048(auStack_d28,plVar35);
            plVar15 = plVar36 + -0x35;
            ppuVar2 = &PTR_PTR_113286e08;
            if ((undefined **)plVar36[-0x25] != (undefined **)0x0) {
              ppuVar2 = (undefined **)plVar36[-0x25];
            }
            puVar24 = ppuVar2[0x24];
            FUN_1087208d0(plVar15,plVar14,0,1,0,0,0);
            auStack_ed0[0] = 0;
            uStack_e78 = 0;
            plStack_9a0 = (long *)((ulong)plStack_9a0 & 0xffffffffffffff00);
            plStack_988 = (long *)((ulong)plStack_988 & 0xffffffffffffff00);
            func_0x00010871ebe4(auStack_e70,lVar37,auStack_d28,0,1,(long)puVar24 * 1000,
                                plVar36[-0x1f]);
            func_0x000107c279dc(&plStack_9a0);
            FUN_1086d0498(auStack_ed0);
            FUN_108720700(&plStack_9a0,plVar35,plVar14,plVar15);
            FUN_10866a140(auStack_e08,&plStack_9a0);
            func_0x000104bee748(&plStack_9a0);
            func_0x00010871e61c();
            func_0x00010871f110();
            func_0x00010871eaa8();
            func_0x00010871e6f0();
            FUN_10871bdd4(auStack_1018,auStack_e70);
            plStack_998 = (long *)0x0;
            uStack_990 = 0;
            plStack_988 = (long *)0x0;
            plStack_980 = (long *)CONCAT44(plStack_980._4_4_,0x1ce);
            plStack_9a0 = extraout_x8_04;
            func_0x00010871e1e0(auStack_a30);
            func_0x000108841d8c(auStack_a48,(long)(char)bStack_fe0);
            pplVar13 = &plStack_9a0;
            func_0x000107c28820(pplVar13,auStack_a30,auStack_a48);
            func_0x000107c2884c(auStack_a18,pplVar13);
            func_0x00010871e090(auStack_9f0,unaff_x21 + 0x118,auStack_a18);
            func_0x000107c2882c(auStack_a18);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a48);
            func_0x00010871ed94();
            func_0x00010871e580();
            func_0x00010871e9b4(&plStack_9a0,puVar30,auStack_1018);
            bVar6 = bStack_fe0 == 0xf;
            if ((((bVar6) && ((bStack_ee8 & 1) != 0)) &&
                (bVar6 = cStack_738 == '\x01' && lStack_ef0 == lStack_740,
                cStack_738 == '\x01' && lStack_ef0 < lStack_740)) ||
               (func_0x00010871e52c(), bVar6 && extraout_w9 == 2)) goto LAB_108718264;
            if (cStack_5d0 == '\x01') {
              func_0x00010871df60(auStack_1d8);
              uStack_1b8 = 0x173;
              plVar36 = *(long **)(unaff_x21 + 0x118);
              func_0x000107c2884c(auStack_c98,auStack_1d8);
              func_0x00010871e274(*(undefined8 *)(*plVar36 + 0x50));
              func_0x000107c2882c(auStack_c98);
              auStack_17c8[0] = 0;
              cStack_13f8 = '\0';
              func_0x00010871e394();
            }
            else {
              if (cStack_7d8 == '\x01') goto LAB_108718264;
              if (uStack_fc0 == 0x1e) {
                pcVar16 = (char *)(unaff_x21 + 0x340);
                func_0x000107c289e8();
                if (*pcVar16 != '\x01' || uStack_688 == 2) {
                  uStack_fc0 = 6;
                }
              }
              bVar21 = bStack_fe0;
              if ((uStack_fbb & 0x100) == 0) {
LAB_108717ec8:
                puVar17 = puVar30;
                FUN_1087087c8(puVar30,unaff_x21 + 0x78,&plStack_9a0,lStack_fc8,uStack_fc0,
                              (int)(char)bVar21,uStack_fd8,lStack_fd0,auStack_1000,auStack_f30,
                              uStack_f00,uStack_ef8,CONCAT44(uStack_ed4,iStack_ed8));
                iVar29 = (int)puVar17;
                uVar22 = (uint)bStack_fe0;
              }
              else {
                uVar22 = (uint)bStack_fe0;
                if ((char)uStack_fbb != '\x01') goto LAB_108717ec8;
                if ((bStack_fe0 - 2 < 0x13) &&
                   (func_0x00010871ee3c(), uVar22 = extraout_w8_00, (extraout_x10 & 1) != 0)) {
                  func_0x00010871e79c();
                  bVar21 = extraout_w8;
                  goto LAB_108717ec8;
                }
                iVar29 = 2;
              }
              if (uVar22 == 5) {
                bVar6 = cStack_fbc == '\f';
                uVar8 = 0;
                if (bVar6) {
                  func_0x00010871e508(uStack_fc0);
                  uVar8 = 0;
                  if (bVar6) {
                    lVar18 = lStack_620 - lStack_628;
                    uVar8 = lStack_620 == lStack_628;
                    if (lStack_620 != lStack_628) {
                      FUN_108708704(&plStack_9a0,lStack_fc8);
                      if (lStack_620 - lStack_628 != lVar18) {
                        iVar29 = 0;
                      }
                      uVar22 = (uint)bStack_fe0;
                      goto LAB_108717f68;
                    }
                  }
                }
              }
              else {
LAB_108717f68:
                bVar6 = uVar22 == 7 || uVar22 == 2;
                uVar8 = bVar6;
                if (uVar22 == 7 || uVar22 == 2) {
                  func_0x00010871e694(uStack_fc0);
                  uVar8 = 0;
                  if (bVar6) {
                    func_0x00010871f61c();
                    uVar8 = extraout_w8_01 == 1 && lStack_7d0 == lStack_fc8;
                    if ((extraout_w8_01 != 1 || lStack_7d0 != lStack_fc8) &&
                       (func_0x00010871e520(cStack_fbc), !(bool)uVar8)) goto LAB_108718264;
                  }
                }
              }
              puVar17 = puVar30;
              FUN_108720660(puVar30,auStack_1018);
              uVar12 = uStack_898;
              uVar34 = uStack_fc0;
              lVar18 = lStack_fd0;
              uVar27 = uStack_fd8;
              bVar21 = bStack_fe0;
              uVar22 = (uint)bStack_fe0;
              FUN_10871e8e8(&plStack_9a0,(long)(char)bStack_fe0,uStack_fc0,uStack_fd8,lStack_fd0);
              iStack_1904 = 0;
              if ((bool)uVar8) {
                iStack_1904 = iVar29;
              }
              bVar6 = bVar21 == 0x14;
              if ((0x14 < bVar21) || (func_0x00010871e164(1 << (ulong)(uVar22 & 0x1f)), bVar6)) {
                plVar36 = (long *)(lVar18 / 1000);
                if ((plStack_980 <= plVar36) &&
                   ((((bVar6 = uVar34 == 0xe, 0xe < uVar34 ||
                      (func_0x00010871e2ec(), plVar36 = extraout_x8_16, bVar6)) ||
                     (bVar6 = uVar22 == 0x14, 0x14 < uVar22)) ||
                    (func_0x00010871e144(), plVar36 = extraout_x8_17, bVar6)))) {
                  uStack_660 = (uint)((int)uVar27 != 2);
                  plStack_980 = plVar36;
                  func_0x00010871c970(uStack_ee0);
                  iStack_1904 = 0;
                  func_0x00010871edfc();
                  uVar34 = uStack_fc0;
                }
                bVar6 = uVar34 == 0xe;
                if (((0xe < uVar34) || (func_0x00010871e790(1 << (ulong)(uVar34 & 0x1f)), bVar6)) &&
                   ((func_0x00010871f61c(), (extraout_x8_18 & 1) == 0 || (lStack_7d0 <= lStack_fc8))
                   )) {
                  lStack_7d0 = lStack_fc8;
                  uStack_7c8 = 1;
                  if (cStack_f38 == '\x01') {
                    func_0x00010883f80c(auStack_f90,&plStack_9a0);
                  }
                  iStack_1904 = 0;
                }
              }
              uVar22 = (uint)uVar12;
              if (((lStack_968 == 0) && ((uVar12 & 0xfe) != 0)) &&
                 ((*(byte *)(unaff_x21 + 0x250) & 1) == 0)) {
                func_0x00010871f6d8(auStack_a70,*(undefined8 *)(unaff_x21 + 0x118));
                func_0x00010871e048();
                uStack_a50 = 0x1cf;
                func_0x00010871e378();
                (*extraout_x8_05)();
                func_0x000107c2882c(auStack_a70);
                uVar22 = 1;
                uVar34 = uStack_fc0;
              }
              uVar12 = (ulong)(char)bStack_fe0;
              FUN_1087200ec(uVar12,(int)puVar17,uVar34,cStack_fbc,uVar22 & 0xff);
              uStack_a78 = (undefined4)uVar12;
              uStack_a74 = (undefined1)(uVar12 >> 0x20);
              if ((uVar12 >> 0x20 & 1) == 0) {
                puVar33 = (undefined4 *)0x0;
              }
              else {
                puVar33 = &uStack_a78;
                FUN_108720360(puVar33,uStack_fc0,auStack_1000,uStack_fd8,lStack_fd0,uStack_fbb,
                              &plStack_9a0,unaff_x21 + 0x78,unaff_x21 + 0x90,plVar28,puVar30,lVar32)
                ;
              }
              uVar8 = bStack_fe0 == 0x14;
              if (bStack_fe0 < 0x15) {
                func_0x00010871e640();
                func_0x00010871e09c();
                if ((bool)uVar8) goto LAB_108718bcc;
              }
              else {
LAB_108718bcc:
                uVar8 = uStack_fc0 == 0x1e;
                if (uStack_fc0 < 0x1f) {
                  func_0x00010871e640();
                  func_0x00010871e0f8();
                  if (!(bool)uVar8) goto LAB_1087180f8;
                }
                func_0x000107c289e8();
                plVar36 = *(long **)(unaff_x21 + 0x118);
                func_0x00010871df60(auStack_1d8);
                uStack_1b8 = 400;
                func_0x00010871e550(auStack_ab8);
                func_0x000107c278b8();
                func_0x00010871e478();
                func_0x000107c28824();
                func_0x00010871e544(auStack_ad0);
                func_0x000107c278b8();
                func_0x00010871e5a0();
                puVar20 = auStack_ae8;
                func_0x00010871e538(puVar20);
                func_0x000107c278b8();
                func_0x00010871e5a0();
                func_0x000107c2884c(auStack_aa0,puVar20);
                func_0x00010871f490(*(undefined8 *)(*plVar36 + 0x50));
                func_0x000107c2882c(auStack_aa0);
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_ae8);
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_ad0);
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_ab8);
                func_0x00010871e394();
              }
LAB_1087180f8:
              if (((ulong)puVar33 & 1) == 0) {
                uVar22 = (uint)(iStack_1904 == 2);
LAB_108718248:
                bVar6 = bStack_fe0 == 0x14;
                if (((bStack_fe0 < 0x15) && (func_0x00010871e154(), !bVar6)) || ((int)puVar17 == 0))
                {
LAB_108718260:
                  if (uVar22 == 0) goto LAB_108718af4;
                }
                else {
                  bVar6 = uStack_fc0 == 0xe;
                  if (((uStack_fc0 < 0xf) && (func_0x00010871e2ec(), !bVar6)) &&
                     (uVar8 = extraout_w8_03 == 0x14, extraout_w8_03 < 0x15)) {
                    func_0x00010871e640();
                    func_0x00010871e134();
                    if (!(bool)uVar8) goto LAB_108718260;
                  }
                  puVar20 = auStack_7f0;
                  FUN_1086a470c(puVar20,auStack_1000,unaff_x21 + 0x78);
                  if ((((uint)puVar20 | uVar22 ^ 0xffffffff) & 1) != 0) goto LAB_108718af4;
                }
LAB_108718264:
                auStack_17c8[0] = 0;
                cStack_13f8 = '\0';
              }
              else {
                if ((lStack_968 == 0xb) && (bStack_fe0 < 0x15 && bStack_fe0 != 9)) {
                  func_0x00010871f61c();
                  if ((extraout_w8_02 == 1) &&
                     (lVar18 = lVar32, func_0x00010871c9a0(), (int)lVar18 != 0)) {
                    func_0x00010871e61c();
                    func_0x00010871ea88();
                    func_0x00010871e478(auStack_c98);
                    func_0x000107c28998();
                    func_0x00010871e478();
                    func_0x000107c28948();
                    if ((cStack_af0 == '\x01') &&
                       (((bStack_c38 >> 2 & 1) != 0 && (*(int *)(lStack_c20 + 0xa8) == 0)))) {
                      plVar36 = *(long **)(unaff_x21 + 0x118);
                      func_0x00010871df60(auStack_1d8);
                      uStack_1b8 = 399;
                      puVar20 = auStack_cd8;
                      func_0x00010871e574(puVar20);
                      func_0x000107c278b8();
                      func_0x00010871e568();
                      func_0x00010871e478();
                      func_0x000107c28824();
                      func_0x00010871e1e0(auStack_cf0);
                      func_0x000108841d8c(auStack_d08,(long)(char)bStack_fe0);
                      func_0x000107c28820(puVar20,auStack_cf0,auStack_d08);
                      func_0x000107c2884c(auStack_cc0,puVar20);
                      func_0x00010871f490(*(undefined8 *)(*plVar36 + 0x50));
                      func_0x000107c2882c(auStack_cc0);
                      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                                (auStack_d08);
                      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                                (auStack_cf0);
                      uVar22 = (uint)auStack_cd8;
                      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
                      func_0x00010871e394();
                      func_0x00010871f294(auStack_c98);
                      lStack_968 = 0xd;
                      uStack_970 = uVar22;
                    }
                    func_0x00010871f588();
                  }
                  bVar6 = true;
                }
                else {
                  bVar6 = false;
                }
                if (((bStack_fe0 == 2) && (func_0x00010871f61c(), (extraout_x8_14 & 1) != 0)) &&
                   (lStack_7d0 == lStack_fc8)) {
                  func_0x00010871e61c();
                  func_0x00010871ea88();
                  func_0x00010871e478(auStack_c98);
                  func_0x000107c28998();
                  func_0x00010871e478();
                  func_0x000107c28948();
                  if (cStack_af0 == '\x01') {
                    func_0x00010871e370(auStack_c98,&plStack_9a0);
                  }
                  func_0x00010871f588();
                }
                uVar7 = 1 < uStack_688;
                uVar8 = uStack_688 == 2;
                if (((((bool)uVar8) &&
                     (lVar18 = lStack_968, FUN_10871fb04(lStack_968,uStack_970), (int)lVar18 != 0))
                    && ((func_0x00010871e55c(bStack_fe0), !(bool)uVar7 || (bool)uVar8 &&
                        (((bStack_960 & 1) != 0 && ((long)uStack_898 < 2)))))) &&
                   ((uStack_970 == 2 || uStack_970 == 0x1d) || (uStack_970 & 0xfffffffb) == 1)) {
                  lStack_968 = 1;
                }
                if (cStack_fb8 == '\x01') {
                  uStack_898 = (ulong)bStack_fb9;
                }
                if (cStack_f18 == '\x01') {
                  func_0x00010871f4ec(&plStack_9a0);
                }
                else {
                  if (bStack_fe0 == 0xf) {
                    bVar6 = true;
                  }
                  if (!bVar6) {
                    func_0x00010871e368(&plStack_9a0);
                  }
                }
                if (cStack_f98 == '\x01') {
                  func_0x000107c295bc(&lStack_8d0,auStack_fb0);
                }
                else if (lStack_8d0 != lStack_8c8) {
                  func_0x00010871e360(&plStack_9a0);
                }
                if ((char)uStack_ed4 == '\x01' && iStack_ed8 == 1) {
                  lStack_968 = 0x10;
                }
                if (((cStack_630 == '\x01') && (lStack_638 != 0)) && ((uStack_ed4 & 1) == 0)) {
                  cStack_630 = '\0';
                }
                uVar22 = 0;
                if (((bStack_fe0 != 7) || ((char)uStack_ed4 == '\0')) || (iStack_ed8 != 2))
                goto LAB_108718248;
                lStack_638 = 1;
                cStack_630 = '\x01';
LAB_108718af4:
                func_0x00010871e61c();
                FUN_1088665d4();
                func_0x00010871e320(*(undefined8 *)(unaff_x21 + 0x158));
                (*extraout_x8_15)();
                FUN_10871bca8(auStack_17c8,&plStack_9a0);
              }
            }
            func_0x00010871e944();
            func_0x000107c28b40(auStack_9f0);
            FUN_10871be98(auStack_1018);
            if ((cStack_13f8 == '\x01') && ((bStack_1e0 & 1) != 0)) {
              uStack_16b8 = uStack_4a0;
              uStack_16b0 = uStack_498;
              func_0x000107c28d24(auStack_1698,auStack_480);
              uStack_16a8 = uStack_490;
              uStack_16a0 = uStack_488;
              uStack_1418 = uStack_200;
              uStack_15f8 = uStack_3e0;
              uStack_15f0 = uStack_3d8;
              func_0x00010871e61c();
              FUN_1088665d4();
            }
            func_0x00010871e3a0();
            FUN_10871be98(auStack_e70);
            func_0x000107c279dc(auStack_d28);
          }
          func_0x000107c288cc(auStack_17c8);
          goto LAB_10871831c;
        }
      }
      FUN_10871c570(&plStack_13f0);
    }
    func_0x00010871e4dc();
    uVar8 = lStack_1148 == lStack_1140;
    if (!(bool)uVar8) {
      if ((*(long *)(unaff_x21 + 0x478) != 0) && ((bStack_1150 & 1) != 0)) {
        func_0x00010871e6e4();
        func_0x00010871e224();
        func_0x00010871f63c();
        func_0x000108698274();
        func_0x00010871e5b4();
      }
      uVar27 = *puVar30;
      lVar32 = *plVar28;
      func_0x000107c32ec8(lVar32);
      (*extraout_x8_19)();
      FUN_10886cf70(uVar27,lVar32,&lStack_1148,param_6,(long)iVar10,1);
      if ((*(long *)(unaff_x21 + 0x478) != 0) && ((bStack_1150 & 1) != 0)) {
        func_0x00010871e6e4();
        func_0x00010871e224();
        func_0x00010871f63c();
        FUN_108698288();
        func_0x00010871e5b4();
      }
      func_0x000107c28dc4(&plStack_9a0,puVar30);
      lVar32 = *plVar28;
      func_0x000107c32ec8();
      (*extraout_x8_20)();
      uStack_8f0 = 1;
      lStack_8f8 = lVar32;
      func_0x00010871e61c();
      FUN_10886d1b4();
      func_0x000107c28d20(auStack_930);
    }
    if ((param_4 != 0) &&
       (FUN_108708ea0(unaff_x21,&uStack_1030), uVar31 = auStack_13c8[0],
       *(long *)(unaff_x21 + 0x458) != 0)) {
      for (; uVar8 = uVar31 == uVar11, !(bool)uVar8; uVar31 = uVar31 + 0x30) {
        func_0x00010871e61c();
        func_0x00010871ed00(&plStack_9a0);
        if ((char)lStack_7d0 == '\x01') {
          alStack_5b0[1] = 0;
          alStack_5b0[0] = 0;
          alStack_5b0[2] = 0;
          (**(code **)**(undefined8 **)(unaff_x21 + 0x458))
                    (*(undefined8 **)(unaff_x21 + 0x458),uVar31,&plStack_9a0,1,uVar31 + 0x18,
                     alStack_5b0);
          func_0x00010871e5a8();
          func_0x000104be1274();
        }
        func_0x000107c288c8(&plStack_9a0);
      }
    }
    FUN_108719cf0(auStack_13c8);
    func_0x000107c28d30(auStack_13b0);
    func_0x00010871e7d0();
    func_0x000107c29108(&lStack_1130);
    func_0x000107c28b40(auStack_10c0);
    param_1[1] = uStack_1028;
    *param_1 = uStack_1030;
    param_1[2] = uStack_1020;
    param_1 = &uStack_1030;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x000107c29108(&uStack_1030);
LAB_108718f34:
  func_0x00010086526c(uStack_18);
  if ((bool)uVar8) {
    return;
  }
  ___stack_chk_fail();
LAB_108718f60:
  func_0x00010871e4dc();
  func_0x000104bd35f4();
LAB_108719220:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x108719224);
  (*pcVar5)();
}



/* Entry: 108719438; end: 108719663;  */

void FUN_108719438(long *param_1,undefined8 param_2,long param_3,undefined8 param_4,ulong param_5)

{
  long lVar1;
  undefined1 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  long *plVar6;
  undefined8 uStack_890;
  undefined1 uStack_888;
  long *plStack_880;
  long *plStack_878;
  undefined1 *puStack_870;
  code *pcStack_868;
  undefined1 auStack_860 [16];
  undefined8 uStack_850;
  undefined1 auStack_830 [24];
  undefined1 auStack_818 [976];
  long alStack_448 [4];
  long lStack_428;
  long lStack_268;
  byte bStack_260;
  char cStack_190;
  int iStack_108;
  long lStack_78;
  long lStack_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined8 uStack_58;
  
  func_0x00010086515c();
  uStack_58 = extraout_x8;
  func_0x00010871e340(alStack_448,param_3 + 0xb8);
  uVar2 = iStack_108 == 0;
  lVar1 = 1;
  if ((bool)uVar2) {
    lVar1 = 2;
  }
  if ((bStack_260 & 1) == 0) {
    bStack_260 = 1;
  }
  lStack_268 = lStack_428;
  if (*(int *)(param_5 + 0xf0) == 0) {
    _uStack_68 = CONCAT71(uStack_67,1);
    lStack_78 = lVar1;
    lStack_70 = lStack_428 * 1000;
    FUN_108713370(auStack_818,param_3 + 0xb8,param_4,param_5,&lStack_78,1,0);
    func_0x000107c288d0(auStack_818);
  }
  else {
    uVar2 = cStack_190 == '\x01';
    if ((bool)uVar2) {
      cStack_190 = '\0';
    }
    FUN_1088665d4(*(undefined8 *)(param_3 + 0xb8),alStack_448);
  }
  uVar3 = param_5;
  FUN_10868ee40();
  if ((int)uVar3 != 0) {
    if ((*(byte *)(param_3 + 0x251) & 1) == 0) {
      uVar4 = *(undefined8 *)(param_3 + 0xa8);
      func_0x000107c32ec8(uVar4);
      (*extraout_x8_01)();
      func_0x00010868f78c(param_4,uVar4,4,param_3 + 0xb8);
    }
    else {
      FUN_108719664(&lStack_78,param_3 + 0x178);
      if (lStack_78 != 0) {
        func_0x00010871f71c();
        (*extraout_x8_00)();
      }
      FUN_108695f64(&lStack_78);
    }
  }
  plVar6 = *(long **)(param_3 + 200);
  func_0x000107c29e74();
  func_0x00010871e65c(auStack_860);
  func_0x00010871e4c4(uStack_850);
  lStack_78 = CONCAT44(lStack_78._4_4_,2);
  lStack_70 = param_2;
  func_0x00010871f6b8();
  func_0x00010871ec98(auStack_830,&lStack_78);
  puVar5 = (undefined8 *)(param_5 & 0xffffffff | 0x100000000);
  (**(code **)(*plVar6 + 0x20))(plVar6,puVar5,auStack_830);
  func_0x00010871ebcc();
  func_0x00010871ec10();
  func_0x00010871e654();
  func_0x00010871e4f8();
  *param_1 = lVar1;
  param_1[1] = lStack_428 * 1000;
  *(undefined1 *)(param_1 + 2) = 1;
  plVar6 = alStack_448;
  func_0x000107c288d0();
  func_0x00010086526c(uStack_58);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  FUN_108695f64(&lStack_78);
  func_0x000107c288d0(alStack_448);
  func_0x00010871e260();
  pcStack_868 = FUN_108719664;
  plStack_880 = &lStack_78;
  plStack_878 = plVar6;
  puStack_870 = &stack0xfffffffffffffff0;
  func_0x00010871e348();
  uStack_890 = *puVar5;
  uStack_888 = 1;
  __ZNSt3__15mutex4lockEv();
  FUN_10871d190(&lStack_78,*plVar6 + 0x40);
  func_0x000107c2798c(&uStack_890);
  return;
}



/* Entry: 108719664; end: 1087196ab;  */

void FUN_108719664(undefined8 param_1,undefined8 *param_2)

{
  long *unaff_x19;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  func_0x00010871e348();
  uStack_30 = *param_2;
  uStack_28 = 1;
  __ZNSt3__15mutex4lockEv();
  FUN_10871d190(*unaff_x19 + 0x40);
  func_0x000107c2798c(&uStack_30);
  return;
}



/* Entry: 1087196ac; end: 108719753;  */

void FUN_1087196ac(void)

{
  long unaff_x19;
  undefined1 auStack_7d0 [976];
  undefined1 auStack_400 [976];
  
  func_0x00010871e724();
  FUN_1087091b4(auStack_400,unaff_x19 + 0xb8);
  func_0x00010871e454(auStack_7d0,unaff_x19 + 0xb8);
  func_0x000107c288f4(auStack_400,auStack_7d0);
  func_0x00010871f2dc();
  func_0x00010871e354();
  func_0x00010871e274();
  func_0x000107c288d0(auStack_400);
  return;
}



/* Entry: 108719754; end: 10871983f;  */

void FUN_108719754(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_470 [976];
  char cStack_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [64];
  
  if (*(char *)(param_3 + 0x58) == '\x01') {
    func_0x00010871e724();
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x18);
    func_0x000107c278b8(auStack_98,&UNK_10f4b23fd);
    func_0x000107c31420(auStack_80,uVar1,auStack_98);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_98);
    func_0x00010871ea14(auStack_470);
    FUN_108715544();
    if (cStack_a0 == '\x01') {
      func_0x00010871e354();
      func_0x00010871e274();
      func_0x000107c31428(auStack_80);
    }
    func_0x00010871e98c();
    func_0x000107c31424(auStack_80);
  }
  return;
}



/* Entry: 108719840; end: 108719b07;  */

void FUN_108719840(undefined8 param_1,undefined8 param_2,long *param_3,int param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  code *extraout_x8_00;
  long unaff_x21;
  long lVar5;
  undefined1 auStack_cb8 [320];
  undefined4 uStack_b78;
  undefined1 uStack_b74;
  undefined1 auStack_b08 [80];
  undefined1 auStack_ab8 [16];
  uint uStack_aa8;
  undefined8 uStack_a90;
  char cStack_960;
  undefined1 auStack_958 [976];
  undefined1 auStack_588 [24];
  undefined1 uStack_570;
  undefined1 auStack_440 [984];
  undefined1 auStack_68 [88];
  undefined1 uStack_10;
  
  func_0x000107c32ee4();
  func_0x00010871e67c();
  func_0x00010871e340(auStack_958,unaff_x21 + 0xb8);
  lVar1 = param_3[1];
  for (lVar5 = *param_3; lVar5 != lVar1; lVar5 = lVar5 + 8) {
    auStack_b08[0] = 0;
    cStack_960 = '\0';
    if (param_4 == 0) {
      FUN_108862cf0(auStack_440,*(undefined8 *)(unaff_x21 + 0xb8));
      func_0x00010871f1c4();
    }
    else {
      FUN_108862de8(auStack_440,*(undefined8 *)(unaff_x21 + 0xb8));
      func_0x00010871f1c4();
    }
    func_0x000107c2894c(auStack_b08,auStack_cb8);
    func_0x000107c288dc(auStack_cb8);
    func_0x000107c28948(auStack_440);
    if (((cStack_960 == '\x01') &&
        (func_0x00010871f674(uStack_a90), (*(byte *)(extraout_x8 + 0x10) >> 6 & 1) != 0)) &&
       (*(int *)(*(long *)(extraout_x8 + 0x98) + 0x1c) == 2)) {
      uVar2 = unaff_x21 + 0x78;
      func_0x000107c28f08(uVar2,auStack_ab8);
      if ((uVar2 & 1) == 0) {
        lVar3 = *(long *)(unaff_x21 + 0xa8);
        func_0x000107c32ec8();
        (*extraout_x8_00)();
        puVar4 = auStack_ab8;
        FUN_1086a73d4();
        if ((((long)puVar4 - lVar3 < 1) && ((uStack_aa8 >> 2 & 1) != 0)) &&
           (((uStack_aa8 >> 3 & 1) != 0 && (func_0x00010871e64c(), ((ulong)puVar4 & 1) == 0)))) {
          FUN_10870b048(auStack_440,auStack_ab8);
          func_0x000107c29e78();
          func_0x000107c29e78(auStack_ab8);
          auStack_68[0] = 0;
          uStack_10 = 0;
          auStack_588[0] = 0;
          uStack_570 = 0;
          FUN_10871bcc4(auStack_cb8);
          func_0x000107c279dc(auStack_588);
          FUN_1086d0498(auStack_68);
          func_0x000107c279dc(auStack_440);
          uStack_b78 = 1;
          uStack_b74 = 1;
          FUN_10871bdd4(auStack_588,auStack_cb8);
          FUN_10870d474(auStack_440);
          func_0x000107c288cc(auStack_440);
          FUN_10871be98(auStack_588);
          FUN_10871be98(auStack_cb8);
        }
      }
    }
    func_0x000107c288dc(auStack_b08);
  }
  func_0x000107c288d0(auStack_958);
  return;
}



/* Entry: 108719b08; end: 108719b67;  */

undefined8 FUN_108719b08(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000107c2916c(param_1 + 0xa0);
  func_0x000107c2a5a4(param_1 + 0x28);
  func_0x000107c27914(param_1 + 0x10);
  func_0x000100555fb4();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return unaff_x19;
}



/* Entry: 108719b68; end: 108719bbb;  */

long FUN_108719b68(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  lVar3 = param_1;
  if (param_1 != param_2) {
    while (param_1 = lVar1, lVar3 = lVar3 + 0x260, lVar3 != param_2) {
      lVar2 = lVar3;
      FUN_108719c70(lVar3,param_1);
      lVar1 = lVar3;
      if ((int)lVar2 == 0) {
        lVar1 = param_1;
      }
    }
  }
  return param_1;
}



/* Entry: 108719bbc; end: 108719c4b;  */

long * FUN_108719bbc(long *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long *plStack_78;
  long alStack_48 [5];
  
  lVar2 = *param_1;
  if ((ulong)((param_1[2] - lVar2) / 0x3d0) < param_2) {
    if (0x4325c53ef368eb < param_2) {
      FUN_1086d6f74();
      func_0x00010871e314();
      func_0x000107c291dc();
      func_0x00010871e260();
      func_0x00010867b9fc(param_1 + 3);
      plStack_78 = param_1;
      func_0x000100100fd4(&plStack_78);
      return param_1;
    }
    plVar1 = param_1 + 1;
    param_1 = alStack_48;
    func_0x000107c291c8(param_1,param_2,(*plVar1 - lVar2) / 0x3d0);
    func_0x000107c32ee8();
    func_0x000107c291c0();
    func_0x00010871ec88();
  }
  return param_1;
}



/* Entry: 108719c4c; end: 108719c6f;  */

long FUN_108719c4c(long param_1)

{
  long lStack_28;
  
  func_0x00010867b9fc(param_1 + 0x18);
  lStack_28 = param_1;
  func_0x000100100fd4(&lStack_28);
  return param_1;
}



/* Entry: 108719c70; end: 108719cef;  */

byte FUN_108719c70(long param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  
  if (*(int *)(param_1 + 0x98) != *(int *)(param_2 + 0x98)) {
    return *(int *)(param_1 + 0x98) == 0;
  }
  bVar3 = *(byte *)(param_1 + 0x5c);
  bVar1 = 0;
  if (*(uint *)(param_1 + 0x58) != *(uint *)(param_2 + 0x58)) {
    bVar1 = bVar3;
  }
  if (bVar3 != *(byte *)(param_2 + 0x5c) || bVar1 != 0) {
    bVar1 = *(byte *)(param_2 + 0x5c) ^ 1;
    if (*(uint *)(param_1 + 0x58) < *(uint *)(param_2 + 0x58)) {
      bVar1 = 1;
    }
    bVar2 = 0;
    if (bVar3 != 0) {
      bVar2 = bVar1;
    }
    return bVar2;
  }
  param_1 = param_1 + 0x38;
  FUN_108664d0c(param_1,param_2 + 0x38);
  return (char)param_1 < '\0';
}



/* Entry: 108719cf0; end: 108719d2f;  */

long * FUN_108719cf0(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar1 = param_1[1];
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x30;
      FUN_108719c4c();
    }
    func_0x00010871f2e4();
  }
  return param_1;
}



/* Entry: 108719d30; end: 108719e23;  */

void FUN_108719d30(long *param_1,undefined4 param_2,undefined8 *param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined1 auStack_a8 [24];
  undefined4 auStack_90 [2];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar2 = param_1;
  func_0x00010871f6ac();
  func_0x000104bf1cec(auStack_a8,(plVar2[1] - *plVar2) / 0x18);
  lVar1 = param_1[1];
  for (lVar3 = *param_1; lVar3 != lVar1; lVar3 = lVar3 + 0x18) {
    func_0x00010871ed3c(&uStack_70);
    uStack_78 = uStack_60;
    uStack_80 = uStack_68;
    uStack_88 = uStack_70;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_70 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_58 = 0;
    auStack_90[0] = param_2;
    func_0x000107c27914(&uStack_58);
    func_0x000107c27914(&uStack_70);
    func_0x000104bf1fd0(auStack_a8,auStack_90);
    func_0x00010871eb38();
  }
  func_0x00010871f71c(*param_3);
  func_0x00010871f1d8();
  func_0x000107c27b3c(auStack_a8);
  return;
}



/* Entry: 108719e24; end: 108719e4f;  */

void FUN_108719e24(ulong param_1)

{
  char *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined **ppuVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  long lVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  undefined1 *puVar14;
  code *extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  ulong extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  code *extraout_x8_07;
  code *extraout_x8_08;
  code *extraout_x8_09;
  code *extraout_x8_10;
  ulong uVar15;
  long unaff_x19;
  undefined8 uVar16;
  undefined ***pppuVar17;
  ulong uVar18;
  undefined ***pppuVar19;
  undefined ***pppuVar20;
  ulong uVar21;
  undefined8 uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  long *plVar26;
  long *plVar27;
  ulong uStack_1350;
  undefined1 auStack_1340 [24];
  undefined1 auStack_1328 [24];
  undefined1 auStack_1310 [24];
  undefined1 auStack_12f8 [984];
  undefined **ppuStack_f20;
  undefined **ppuStack_f18;
  undefined8 uStack_f10;
  undefined8 uStack_f08;
  undefined8 uStack_f00;
  undefined8 uStack_ef8;
  undefined1 auStack_ef0 [408];
  char cStack_d58;
  long lStack_b38;
  long lStack_b30;
  undefined8 uStack_b28;
  undefined1 auStack_760 [24];
  undefined1 auStack_748 [440];
  char cStack_590;
  undefined1 auStack_588 [424];
  char cStack_3e0;
  int iStack_3d8;
  char cStack_3d4;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  ulong uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  long lStack_190;
  undefined8 uStack_188;
  long lStack_180;
  long lStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long lStack_160;
  undefined8 uStack_158;
  long lStack_150;
  long lStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long lStack_130;
  undefined8 uStack_128;
  long lStack_120;
  long lStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined ***pppuStack_f0;
  undefined ***pppuStack_e8;
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [64];
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [48];
  
  func_0x00010871f598();
  if ((param_1 & 1) != 0) {
    return;
  }
  func_0x000107c32ee4();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  if (*(char *)(unaff_x19 + 0x191) != '\x01') {
    return;
  }
  uStack_70 = 0;
  uStack_68 = 0;
  ppuStack_80 = &PTR_FUN_110a609a8;
  uStack_78 = 0;
  uStack_60 = 0x26a;
  func_0x00010871e00c(auStack_58,unaff_x19 + 0x118);
  func_0x00010871e2c0();
  plVar26 = (long *)(unaff_x19 + 0xb8);
  uVar16 = *(undefined8 *)(*plVar26 + 0x18);
  func_0x000107c278b8(auStack_d8,&UNK_10f4b242c);
  func_0x000107c31420(auStack_c0,uVar16,auStack_d8);
  func_0x00010871f0a4();
  uVar16 = *(undefined8 *)(unaff_x19 + 0xa8);
  func_0x000107c32ec8(uVar16);
  (*extraout_x8)();
  FUN_10886caf0(&ppuStack_f20,*plVar26);
  FUN_10868aee0(&pppuStack_f0,&ppuStack_f20);
  pppuVar8 = &ppuStack_f20;
  func_0x000107c28d4c();
  pppuVar19 = pppuStack_e8;
  pppuVar9 = pppuStack_f0;
  for (pppuVar17 = pppuStack_f0; pppuVar17 != pppuVar19; pppuVar17 = pppuVar17 + 0x4c) {
    func_0x00010871f820();
    func_0x00010871c5ac();
    pppuVar20 = pppuVar17;
    if ((int)pppuVar8 != 0) goto LAB_108719f54;
  }
LAB_108719fac:
  if (pppuVar9 != pppuVar19) {
    lStack_100 = 0;
    lStack_108 = 0;
    uStack_f8 = 0;
    lStack_118 = 0;
    lStack_120 = 0;
    uStack_110 = 0;
    lStack_130 = 0;
    lStack_138 = 0;
    uStack_128 = 0;
    lStack_148 = 0;
    lStack_150 = 0;
    uStack_140 = 0;
    lStack_160 = 0;
    lStack_168 = 0;
    uStack_158 = 0;
    func_0x00010871eac4();
    func_0x000107c27ab0();
    func_0x00010871e75c(pppuStack_e8);
    func_0x000107c27ab0(&lStack_150);
    func_0x00010871e75c(pppuStack_e8);
    func_0x000107c27ab0(&lStack_168);
    pppuVar17 = pppuStack_e8;
    uVar18 = 0;
    lStack_178 = 0;
    lStack_180 = 0;
    uStack_170 = 0;
    lStack_190 = 0;
    lStack_198 = 0;
    uStack_188 = 0;
    uStack_1350 = 0;
    lStack_1a8 = 0;
    lStack_1b0 = 0;
    uStack_1a0 = 0;
    lStack_1c0 = 0;
    lStack_1c8 = 0;
    uStack_1b8 = 0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1d0 = 0;
    for (pppuVar8 = pppuStack_f0; pppuVar8 != pppuVar17; pppuVar8 = pppuVar8 + 0x4c) {
      if (((ulong)pppuVar8[0x1f] & 1) == 0) {
        if (*(char *)(pppuVar8 + 3) == '\x01') {
          if (*(int *)(pppuVar8 + 0x13) == 1) {
            if (*(char *)(pppuVar8 + 0x2c) == '\x01' && *(int *)((long)pppuVar8 + 0x154) == 1) {
              if (((ulong)pppuVar8[0x1d] & 1) == 0) goto LAB_10871a3d8;
              plVar27 = &lStack_1b0;
            }
            else {
              plVar27 = &lStack_150;
            }
            func_0x00010871eb70(plVar27);
          }
          else if (*(int *)(pppuVar8 + 0x13) == 0) {
            pppuVar9 = pppuVar8;
            FUN_10868f768();
            if ((int)pppuVar9 == 0) {
              if (*(char *)(pppuVar8 + 0x2c) == '\x01' && *(int *)((long)pppuVar8 + 0x154) == 1) {
                if (*(char *)(pppuVar8 + 0x1d) == '\x01') goto LAB_10871a158;
              }
              else {
                func_0x00010871eac4();
LAB_10871a158:
                func_0x00010871eb70();
              }
              if (*(char *)(pppuVar8 + 0x17) == '\x01') {
                func_0x000107c28840(&lStack_138,pppuVar8 + 0x14);
              }
            }
            else {
              FUN_10868f7a0(&iStack_3d8,pppuVar8,plVar26,unaff_x19 + 0x118);
              if (iStack_3d8 == 0) {
                plVar27 = &lStack_198;
                if (cStack_3d4 == '\0') {
                  plVar27 = &lStack_180;
                }
                func_0x00010871eb70(plVar27);
                FUN_108860880(&ppuStack_f20,*plVar26,pppuVar8);
                func_0x000107c28998(auStack_588,&ppuStack_f20);
                func_0x000107c28948(&ppuStack_f20);
                if (cStack_3e0 == '\x01') {
                  func_0x00010871ed00(auStack_760,*plVar26,pppuVar8);
                  if (cStack_590 == '\x01') {
                    FUN_1088660e8(&ppuStack_f20,*plVar26,pppuVar8);
                    FUN_10869148c(&lStack_b38,&ppuStack_f20);
                    func_0x000107c288ec(&ppuStack_f20);
                    FUN_1087091e8(auStack_12f8,unaff_x19,pppuVar8,auStack_748,auStack_588,0,
                                  &lStack_b38);
                    func_0x000107c288cc(auStack_12f8);
                    func_0x000107c288cc(&lStack_b38);
                  }
                  func_0x000107c288c8(auStack_760);
                }
                func_0x000107c27994(&ppuStack_f20,pppuVar8);
                uStack_f00 = uStack_3c8;
                uStack_f08 = uStack_3d0;
                uStack_ef8 = uStack_3c0;
                func_0x00010871f6d8(&iStack_3d8);
                func_0x000107c28de4(auStack_ef0,extraout_x8_00 + 0x20);
                if (uVar18 < uStack_1350) {
                  FUN_10871c5d0(uVar18,&ppuStack_f20);
                  uVar18 = uVar18 + 0x208;
                }
                else {
                  lVar11 = uVar18 - uStack_1e0;
                  uVar23 = lVar11 / 0x208 + 1;
                  if (0x7e07e07e07e07e < uVar23) {
                    func_0x00010871e0e8();
                    FUN_10871c5e8();
LAB_10871aba0:
                    /* WARNING: Does not return */
                    pcVar5 = (code *)SoftwareBreakpoint(1,0x10871aba4);
                    (*pcVar5)();
                  }
                  uVar25 = (long)(uStack_1350 - uStack_1e0) / 0x208;
                  uVar15 = uVar25 * 2;
                  if (uVar15 < uVar23 || uVar15 - uVar23 == 0) {
                    uVar15 = uVar23;
                  }
                  if (0x3f03f03f03f03e < uVar25) {
                    uVar15 = 0x7e07e07e07e07e;
                  }
                  if (uVar15 == 0) {
                    lVar10 = 0;
                  }
                  else {
                    if (0x7e07e07e07e07e < uVar15) {
                      func_0x00010871e0e8();
                      func_0x000104bd35f4();
                      goto LAB_10871aba0;
                    }
                    lVar10 = uVar15 * 0x208;
                    __Znwm();
                  }
                  lVar11 = lVar10 + lVar11;
                  FUN_10871c5d0(lVar11,&ppuStack_f20);
                  uVar21 = uStack_1e0;
                  uVar24 = lVar11 + ((long)(uVar18 - uStack_1e0) / -0x208) * 0x208;
                  uVar25 = uVar24;
                  for (uVar23 = uStack_1e0; uVar23 != uVar18; uVar23 = uVar23 + 0x208) {
                    FUN_10871c5d0(uVar25,uVar23);
                    uVar25 = uVar25 + 0x208;
                  }
                  for (; uVar21 != uVar18; uVar21 = uVar21 + 0x208) {
                    FUN_10871b19c(uVar21);
                  }
                  uVar18 = lVar11 + 0x208;
                  uStack_1350 = lVar10 + uVar15 * 0x208;
                  bVar6 = uStack_1e0 != 0;
                  uStack_1e0 = uVar24;
                  if (bVar6) {
                    __ZdlPv();
                  }
                }
                FUN_10871b19c(&ppuStack_f20);
                func_0x000107c288dc(auStack_588);
              }
              else {
                func_0x00010871eac4();
                func_0x00010871eb70();
              }
              FUN_108690c3c(&iStack_3d8);
            }
          }
LAB_10871a3d8:
          if (*(char *)(pppuVar8 + 0x1b) == '\x01') {
            func_0x00010871f2a8(&ppuStack_f20);
            if (ppuStack_f20 != (undefined **)0x0) {
              (**(code **)(*ppuStack_f20 + 0xb8))(ppuStack_f20,pppuVar8);
            }
            func_0x000107c291a8(&ppuStack_f20);
          }
        }
        func_0x000107c28840(&lStack_168,pppuVar8 + 7);
        lVar11 = *(long *)(unaff_x19 + 0x468);
        if (lVar11 != 0) {
          func_0x000107c32ec8();
          iVar7 = (int)lVar11;
          (*extraout_x8_01)();
          if (iVar7 != 0) {
            FUN_108696a78(&ppuStack_f20,pppuVar8,uVar16);
            if (cStack_d58 == '\x01') {
              FUN_10868fb28(&lStack_1c8,&ppuStack_f20);
            }
            FUN_108691188(&ppuStack_f20);
          }
        }
        if (*(char *)(pppuVar8 + 0x11) == '\x01') {
          ppuVar12 = *(undefined ***)(unaff_x19 + 0xa8);
          func_0x000107c32ec8();
          (*extraout_x8_02)();
          if (pppuVar8[0x10] <= ppuVar12) {
            plVar27 = *(long **)(unaff_x19 + 0x118);
            ppuStack_f18 = (undefined **)0x0;
            uStack_f10 = 0;
            uStack_f08 = 0;
            ppuStack_f20 = &PTR_FUN_110a609a8;
            uStack_f00 = CONCAT44(uStack_f00._4_4_,0x277);
            uVar3 = 0x4d01ca;
            if (*(int *)(pppuVar8 + 0x13) != 1) {
              uVar3 = 0x4d01cb;
            }
            FUN_1086901fc(&ppuStack_f20,uVar3);
            puVar14 = auStack_1310;
            func_0x00010871f11c(puVar14);
            func_0x00010871e66c();
            lStack_b38 = ((long)ppuVar12 - (long)pppuVar8[0x10]) * 1000000;
            (**(code **)(*plVar27 + 0x18))(plVar27,puVar14,&lStack_b38);
            func_0x00010871e8e0();
            func_0x00010871e4bc();
          }
        }
        if (((ulong)pppuVar8[0x1f] & 1) == 0) {
          uVar2 = *(uint *)(pppuVar8 + 0x43);
          if (*(char *)((long)pppuVar8 + 0x21c) == '\0') {
            uVar2 = 0;
          }
          if ((7 < uVar2) || (func_0x00010871e80c(), (extraout_x8_03 & 0xf2) == 0)) {
            if (((ulong)pppuVar8[0x1d] & 1) == 0) {
              func_0x00010871df60(&lStack_b38);
              lStack_b38 = extraout_x8_05;
              func_0x00010871e6d0(0x278);
              func_0x00010871f168();
              func_0x00010871e27c();
              func_0x00010871e4e8((long)*(int *)(pppuVar8 + 0x24));
              func_0x00010871e6c4();
              func_0x00010871f11c(auStack_760);
              func_0x00010871e84c();
              func_0x00010871f20c();
              func_0x00010871eeb8();
              func_0x00010871e6f8();
            }
            else if (((ulong)pppuVar8[0x2e] & 1) == 0) {
              func_0x00010871df60(&lStack_b38);
              lStack_b38 = extraout_x8_06;
              func_0x00010871e6d0(0x279);
              func_0x00010871f168();
              func_0x00010871e27c();
              func_0x00010871e4e8((long)*(int *)(pppuVar8 + 0x24));
              func_0x00010871e6c4();
              func_0x00010871e7f4(auStack_760);
              func_0x00010871eae8();
              func_0x00010871f20c();
              func_0x00010871eeb8();
              func_0x00010871e6f8();
            }
            else {
              func_0x00010871df60(&lStack_b38);
              lStack_b38 = extraout_x8_04;
              func_0x00010871e6d0(0x27a);
              func_0x00010871f168();
              func_0x00010871e27c();
              func_0x00010871e4e8((long)*(int *)(pppuVar8 + 0x24));
              func_0x00010871e6c4();
              func_0x00010871e7f4(auStack_760);
              func_0x00010871eae8();
              func_0x00010871f20c();
              func_0x00010871eeb8();
              func_0x00010871e6f8();
            }
            func_0x00010871e4bc();
            func_0x00010871eb78();
            func_0x00010871eb10();
            func_0x000107c2882c(&lStack_b38);
          }
        }
      }
    }
    func_0x00010871e0e8();
    FUN_10868ed84(&pppuStack_f0,&lStack_108,&lStack_198);
    if (lStack_120 != lStack_118) {
      uVar22 = *(undefined8 *)(unaff_x19 + 0xb8);
      uVar13 = *(undefined8 *)(unaff_x19 + 0xa8);
      func_0x000107c32ec8(uVar13);
      (*extraout_x8_07)();
      FUN_10886c4d8(uVar22,&lStack_120,uVar13);
      if (*(long *)(unaff_x19 + 0x448) != 0) {
        func_0x00010871e378();
        (*extraout_x8_08)();
      }
      func_0x00010871dfd8();
      func_0x00010871e1ec();
      func_0x00010871e6bc();
      func_0x00010871e0c0(lStack_118);
      func_0x00010871e844();
      func_0x00010871e4bc();
    }
    if (lStack_108 != lStack_100) {
      uVar13 = *(undefined8 *)(unaff_x19 + 0xa8);
      func_0x000107c32ec8(uVar13);
      (*extraout_x8_09)();
      FUN_108708c2c(*(undefined8 *)(unaff_x19 + 0xb8),*(undefined1 *)(unaff_x19 + 0x252),&lStack_108
                    ,uVar13);
      func_0x00010871eac4();
      FUN_108719d30();
      func_0x00010871dfd8();
      func_0x00010871e1ec();
      func_0x00010871e6bc();
      func_0x00010871e0c0(lStack_100);
      func_0x00010871e844();
      func_0x00010871e4bc();
    }
    bVar6 = lStack_138 == lStack_130;
    if (!bVar6) {
      func_0x00010871e688(*(undefined8 *)(unaff_x19 + 0xb8));
      if (bVar6) {
        FUN_10886c5cc();
      }
      else {
        FUN_10886c6cc();
      }
      FUN_108867224(&ppuStack_f20,*plVar26,&lStack_138);
      ppuVar4 = ppuStack_f18;
      lStack_b30 = 0;
      lStack_b38 = 0;
      uStack_b28 = 0;
      for (ppuVar12 = ppuStack_f20; ppuVar12 != ppuVar4; ppuVar12 = ppuVar12 + 0x7a) {
        if (((ulong)ppuVar12[0x3d] & 1) == 0) {
          func_0x000107c28840(&lStack_b38,ppuVar12);
        }
      }
      if (lStack_b38 != lStack_b30) {
        func_0x00010871ed9c();
      }
      func_0x000107c27a04(&lStack_b38);
      func_0x000107c29108(&ppuStack_f20);
    }
    if (lStack_150 != lStack_148) {
      FUN_10886c748(*plVar26,&lStack_150);
      func_0x00010871ed9c();
      func_0x00010871dfd8();
      func_0x00010871ec20();
      func_0x00010871e6bc();
      func_0x00010871e0c0(lStack_148);
      func_0x00010871e844();
      func_0x00010871e4bc();
    }
    if (lStack_1b0 != lStack_1a8) {
      FUN_10886c748(*plVar26,&lStack_1b0);
      if (*(long *)(unaff_x19 + 0x448) != 0) {
        func_0x00010871e378();
        (*extraout_x8_10)();
      }
      func_0x00010871dfd8();
      func_0x00010871ec20();
      func_0x00010871e6bc();
      func_0x00010871e0c0(lStack_1a8);
      func_0x00010871e844();
      func_0x00010871e4bc();
    }
    if (lStack_180 != lStack_178) {
      func_0x00010871ed9c();
      func_0x00010871dfd8();
      func_0x00010871e1ec();
      func_0x00010871e6bc();
      func_0x00010871e0c0(lStack_178);
      func_0x00010871e844();
      func_0x00010871e4bc();
    }
    if (lStack_198 != lStack_190) {
      func_0x00010871f0fc(&lStack_198);
      func_0x00010871dfd8();
      func_0x00010871e1ec();
      func_0x00010871e6bc();
      func_0x00010871e0c0(lStack_190);
      func_0x00010871e844();
      func_0x00010871e4bc();
    }
    uVar23 = uStack_1e0;
    if (*(long *)(unaff_x19 + 0x458) != 0) {
      for (; uVar23 != uVar18; uVar23 = uVar23 + 0x208) {
        if (*(char *)(uVar23 + 0x200) == '\x01') {
          ppuStack_f18 = (undefined **)0x0;
          ppuStack_f20 = (undefined **)0x0;
          uStack_f10 = 0;
          (**(code **)**(undefined8 **)(unaff_x19 + 0x458))
                    (*(undefined8 **)(unaff_x19 + 0x458),uVar23,uVar23 + 0x30,1,&ppuStack_f20,
                     uVar23 + 0x18);
          func_0x00010867b9fc(&ppuStack_f20);
        }
      }
    }
    if (lStack_168 != lStack_160) {
      FUN_10886d0c0(*plVar26,uVar16,&lStack_168);
    }
    if (*(char *)(unaff_x19 + 0x251) == '\x01') {
      FUN_108719664(&ppuStack_f20,unaff_x19 + 0x178);
      if (ppuStack_f20 != (undefined **)0x0) {
        (**(code **)(*ppuStack_f20 + 0x30))(auStack_1340);
        func_0x000107c27a04(auStack_1328);
        func_0x000107c27a04(auStack_1340);
      }
      FUN_108695f64(&ppuStack_f20);
    }
    func_0x000107c31428(auStack_c0);
    lVar11 = lStack_1c0;
    lVar10 = lStack_1c8;
    if (*(long *)(unaff_x19 + 0x468) != 0) {
      for (; lVar10 != lVar11; lVar10 = lVar10 + 0x1c8) {
        func_0x00010871f3f0(*(undefined8 *)(**(long **)(unaff_x19 + 0x468) + 0x28));
      }
    }
    func_0x00010871f038();
    func_0x00010871f074();
    func_0x00010871f080();
    func_0x00010871f0c8();
    func_0x00010871f050();
    func_0x00010871f020();
    func_0x00010871f08c();
    func_0x00010871efe4();
    func_0x00010871f014();
    func_0x00010871eac4();
    func_0x000107c27a04();
  }
  func_0x000107c278b8(auStack_760,&UNK_10f4b05eb);
  pcVar1 = "true";
  if (pppuStack_f0 != pppuStack_e8) {
    pcVar1 = "false";
  }
  func_0x000107c278b8(&ppuStack_f20,pcVar1);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&lStack_b38,auStack_760);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (&iStack_3d8,&ppuStack_f20);
  puVar14 = auStack_50;
  func_0x000107c28820(puVar14,&lStack_b38,&iStack_3d8);
  func_0x000107c28af0(auStack_50,puVar14);
  func_0x00010871eb10();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_b38);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_f20);
  func_0x00010871eb78();
  func_0x00010871f0bc();
  func_0x00010871f044();
  func_0x00010871e2c8();
  return;
LAB_108719f54:
  while (pppuVar20 = pppuVar20 + 0x4c, pppuVar20 != pppuVar19) {
    func_0x000107c32f4c();
    func_0x00010871c5ac();
    if (((ulong)pppuVar8 & 1) == 0) {
      pppuVar8 = pppuVar17;
      FUN_10868cef0(pppuVar17,pppuVar20);
      pppuVar17 = pppuVar17 + 0x4c;
    }
  }
  pppuVar19 = pppuStack_e8;
  pppuVar9 = pppuStack_f0;
  if (pppuVar17 != pppuStack_e8) {
    FUN_10868c96c(&pppuStack_f0,pppuVar17);
    pppuVar19 = pppuStack_e8;
    pppuVar9 = pppuStack_f0;
  }
  goto LAB_108719fac;
}



/* Entry: 108719e50; end: 10871ae1b;  */

void FUN_108719e50(long param_1)

{
  char *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined **ppuVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  long lVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  undefined1 *puVar14;
  code *extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  ulong extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  code *extraout_x8_07;
  code *extraout_x8_08;
  code *extraout_x8_09;
  code *extraout_x8_10;
  ulong uVar15;
  undefined8 uVar16;
  undefined ***pppuVar17;
  ulong uVar18;
  undefined ***pppuVar19;
  undefined ***pppuVar20;
  ulong uVar21;
  undefined8 uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  long *plVar26;
  long *plVar27;
  ulong uStack_1350;
  undefined1 auStack_1340 [24];
  undefined1 auStack_1328 [24];
  undefined1 auStack_1310 [24];
  undefined1 auStack_12f8 [984];
  undefined **ppuStack_f20;
  undefined **ppuStack_f18;
  undefined8 uStack_f10;
  undefined8 uStack_f08;
  undefined8 uStack_f00;
  undefined8 uStack_ef8;
  undefined1 auStack_ef0 [408];
  char cStack_d58;
  long lStack_b38;
  long lStack_b30;
  undefined8 uStack_b28;
  undefined1 auStack_760 [24];
  undefined1 auStack_748 [440];
  char cStack_590;
  undefined1 auStack_588 [424];
  char cStack_3e0;
  int iStack_3d8;
  char cStack_3d4;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  ulong uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  long lStack_190;
  undefined8 uStack_188;
  long lStack_180;
  long lStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long lStack_160;
  undefined8 uStack_158;
  long lStack_150;
  long lStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long lStack_130;
  undefined8 uStack_128;
  long lStack_120;
  long lStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined ***pppuStack_f0;
  undefined ***pppuStack_e8;
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [64];
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [80];
  
  func_0x000107c32ee4();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  if (*(char *)(param_1 + 0x191) != '\x01') {
    return;
  }
  uStack_70 = 0;
  uStack_68 = 0;
  ppuStack_80 = &PTR_FUN_110a609a8;
  uStack_78 = 0;
  uStack_60 = 0x26a;
  func_0x00010871e00c(auStack_58,param_1 + 0x118);
  func_0x00010871e2c0();
  plVar26 = (long *)(param_1 + 0xb8);
  uVar16 = *(undefined8 *)(*plVar26 + 0x18);
  func_0x000107c278b8(auStack_d8,&UNK_10f4b242c);
  func_0x000107c31420(auStack_c0,uVar16,auStack_d8);
  func_0x00010871f0a4();
  uVar16 = *(undefined8 *)(param_1 + 0xa8);
  func_0x000107c32ec8(uVar16);
  (*extraout_x8)();
  FUN_10886caf0(&ppuStack_f20,*plVar26);
  FUN_10868aee0(&pppuStack_f0,&ppuStack_f20);
  pppuVar8 = &ppuStack_f20;
  func_0x000107c28d4c();
  pppuVar19 = pppuStack_e8;
  pppuVar9 = pppuStack_f0;
  for (pppuVar17 = pppuStack_f0; pppuVar17 != pppuVar19; pppuVar17 = pppuVar17 + 0x4c) {
    func_0x00010871f820();
    func_0x00010871c5ac();
    pppuVar20 = pppuVar17;
    if ((int)pppuVar8 != 0) goto LAB_108719f54;
  }
LAB_108719fac:
  if (pppuVar9 != pppuVar19) {
    lStack_100 = 0;
    lStack_108 = 0;
    uStack_f8 = 0;
    lStack_118 = 0;
    lStack_120 = 0;
    uStack_110 = 0;
    lStack_130 = 0;
    lStack_138 = 0;
    uStack_128 = 0;
    lStack_148 = 0;
    lStack_150 = 0;
    uStack_140 = 0;
    lStack_160 = 0;
    lStack_168 = 0;
    uStack_158 = 0;
    func_0x00010871eac4();
    func_0x000107c27ab0();
    func_0x00010871e75c(pppuStack_e8);
    func_0x000107c27ab0(&lStack_150);
    func_0x00010871e75c(pppuStack_e8);
    func_0x000107c27ab0(&lStack_168);
    pppuVar17 = pppuStack_e8;
    uVar18 = 0;
    lStack_178 = 0;
    lStack_180 = 0;
    uStack_170 = 0;
    lStack_190 = 0;
    lStack_198 = 0;
    uStack_188 = 0;
    uStack_1350 = 0;
    lStack_1a8 = 0;
    lStack_1b0 = 0;
    uStack_1a0 = 0;
    lStack_1c0 = 0;
    lStack_1c8 = 0;
    uStack_1b8 = 0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1d0 = 0;
    for (pppuVar8 = pppuStack_f0; pppuVar8 != pppuVar17; pppuVar8 = pppuVar8 + 0x4c) {
      if (((ulong)pppuVar8[0x1f] & 1) == 0) {
        if (*(char *)(pppuVar8 + 3) == '\x01') {
          if (*(int *)(pppuVar8 + 0x13) == 1) {
            if (*(char *)(pppuVar8 + 0x2c) == '\x01' && *(int *)((long)pppuVar8 + 0x154) == 1) {
              if (((ulong)pppuVar8[0x1d] & 1) == 0) goto LAB_10871a3d8;
              plVar27 = &lStack_1b0;
            }
            else {
              plVar27 = &lStack_150;
            }
            func_0x00010871eb70(plVar27);
          }
          else if (*(int *)(pppuVar8 + 0x13) == 0) {
            pppuVar9 = pppuVar8;
            FUN_10868f768();
            if ((int)pppuVar9 == 0) {
              if (*(char *)(pppuVar8 + 0x2c) == '\x01' && *(int *)((long)pppuVar8 + 0x154) == 1) {
                if (*(char *)(pppuVar8 + 0x1d) == '\x01') goto LAB_10871a158;
              }
              else {
                func_0x00010871eac4();
LAB_10871a158:
                func_0x00010871eb70();
              }
              if (*(char *)(pppuVar8 + 0x17) == '\x01') {
                func_0x000107c28840(&lStack_138,pppuVar8 + 0x14);
              }
            }
            else {
              FUN_10868f7a0(&iStack_3d8,pppuVar8,plVar26,param_1 + 0x118);
              if (iStack_3d8 == 0) {
                plVar27 = &lStack_198;
                if (cStack_3d4 == '\0') {
                  plVar27 = &lStack_180;
                }
                func_0x00010871eb70(plVar27);
                FUN_108860880(&ppuStack_f20,*plVar26,pppuVar8);
                func_0x000107c28998(auStack_588,&ppuStack_f20);
                func_0x000107c28948(&ppuStack_f20);
                if (cStack_3e0 == '\x01') {
                  func_0x00010871ed00(auStack_760,*plVar26,pppuVar8);
                  if (cStack_590 == '\x01') {
                    FUN_1088660e8(&ppuStack_f20,*plVar26,pppuVar8);
                    FUN_10869148c(&lStack_b38,&ppuStack_f20);
                    func_0x000107c288ec(&ppuStack_f20);
                    FUN_1087091e8(auStack_12f8,param_1,pppuVar8,auStack_748,auStack_588,0,
                                  &lStack_b38);
                    func_0x000107c288cc(auStack_12f8);
                    func_0x000107c288cc(&lStack_b38);
                  }
                  func_0x000107c288c8(auStack_760);
                }
                func_0x000107c27994(&ppuStack_f20,pppuVar8);
                uStack_f00 = uStack_3c8;
                uStack_f08 = uStack_3d0;
                uStack_ef8 = uStack_3c0;
                func_0x00010871f6d8(&iStack_3d8);
                func_0x000107c28de4(auStack_ef0,extraout_x8_00 + 0x20);
                if (uVar18 < uStack_1350) {
                  FUN_10871c5d0(uVar18,&ppuStack_f20);
                  uVar18 = uVar18 + 0x208;
                }
                else {
                  lVar11 = uVar18 - uStack_1e0;
                  uVar23 = lVar11 / 0x208 + 1;
                  if (0x7e07e07e07e07e < uVar23) {
                    func_0x00010871e0e8();
                    FUN_10871c5e8();
LAB_10871aba0:
                    /* WARNING: Does not return */
                    pcVar5 = (code *)SoftwareBreakpoint(1,0x10871aba4);
                    (*pcVar5)();
                  }
                  uVar25 = (long)(uStack_1350 - uStack_1e0) / 0x208;
                  uVar15 = uVar25 * 2;
                  if (uVar15 < uVar23 || uVar15 - uVar23 == 0) {
                    uVar15 = uVar23;
                  }
                  if (0x3f03f03f03f03e < uVar25) {
                    uVar15 = 0x7e07e07e07e07e;
                  }
                  if (uVar15 == 0) {
                    lVar10 = 0;
                  }
                  else {
                    if (0x7e07e07e07e07e < uVar15) {
                      func_0x00010871e0e8();
                      func_0x000104bd35f4();
                      goto LAB_10871aba0;
                    }
                    lVar10 = uVar15 * 0x208;
                    __Znwm();
                  }
                  lVar11 = lVar10 + lVar11;
                  FUN_10871c5d0(lVar11,&ppuStack_f20);
                  uVar21 = uStack_1e0;
                  uVar24 = lVar11 + ((long)(uVar18 - uStack_1e0) / -0x208) * 0x208;
                  uVar25 = uVar24;
                  for (uVar23 = uStack_1e0; uVar23 != uVar18; uVar23 = uVar23 + 0x208) {
                    FUN_10871c5d0(uVar25,uVar23);
                    uVar25 = uVar25 + 0x208;
                  }
                  for (; uVar21 != uVar18; uVar21 = uVar21 + 0x208) {
                    FUN_10871b19c(uVar21);
                  }
                  uVar18 = lVar11 + 0x208;
                  uStack_1350 = lVar10 + uVar15 * 0x208;
                  bVar6 = uStack_1e0 != 0;
                  uStack_1e0 = uVar24;
                  if (bVar6) {
                    __ZdlPv();
                  }
                }
                FUN_10871b19c(&ppuStack_f20);
                func_0x000107c288dc(auStack_588);
              }
              else {
                func_0x00010871eac4();
                func_0x00010871eb70();
              }
              FUN_108690c3c(&iStack_3d8);
            }
          }
LAB_10871a3d8:
          if (*(char *)(pppuVar8 + 0x1b) == '\x01') {
            func_0x00010871f2a8(&ppuStack_f20);
            if (ppuStack_f20 != (undefined **)0x0) {
              (**(code **)(*ppuStack_f20 + 0xb8))(ppuStack_f20,pppuVar8);
            }
            func_0x000107c291a8(&ppuStack_f20);
          }
        }
        func_0x000107c28840(&lStack_168,pppuVar8 + 7);
        lVar11 = *(long *)(param_1 + 0x468);
        if (lVar11 != 0) {
          func_0x000107c32ec8();
          iVar7 = (int)lVar11;
          (*extraout_x8_01)();
          if (iVar7 != 0) {
            FUN_108696a78(&ppuStack_f20,pppuVar8,uVar16);
            if (cStack_d58 == '\x01') {
              FUN_10868fb28(&lStack_1c8,&ppuStack_f20);
            }
            FUN_108691188(&ppuStack_f20);
          }
        }
        if (*(char *)(pppuVar8 + 0x11) == '\x01') {
          ppuVar12 = *(undefined ***)(param_1 + 0xa8);
          func_0x000107c32ec8();
          (*extraout_x8_02)();
          if (pppuVar8[0x10] <= ppuVar12) {
            plVar27 = *(long **)(param_1 + 0x118);
            ppuStack_f18 = (undefined **)0x0;
            uStack_f10 = 0;
            uStack_f08 = 0;
            ppuStack_f20 = &PTR_FUN_110a609a8;
            uStack_f00 = CONCAT44(uStack_f00._4_4_,0x277);
            uVar3 = 0x4d01ca;
            if (*(int *)(pppuVar8 + 0x13) != 1) {
              uVar3 = 0x4d01cb;
            }
            FUN_1086901fc(&ppuStack_f20,uVar3);
            puVar14 = auStack_1310;
            func_0x00010871f11c(puVar14);
            func_0x00010871e66c();
            lStack_b38 = ((long)ppuVar12 - (long)pppuVar8[0x10]) * 1000000;
            (**(code **)(*plVar27 + 0x18))(plVar27,puVar14,&lStack_b38);
            func_0x00010871e8e0();
            func_0x00010871e4bc();
          }
        }
        if (((ulong)pppuVar8[0x1f] & 1) == 0) {
          uVar2 = *(uint *)(pppuVar8 + 0x43);
          if (*(char *)((long)pppuVar8 + 0x21c) == '\0') {
            uVar2 = 0;
          }
          if ((7 < uVar2) || (func_0x00010871e80c(), (extraout_x8_03 & 0xf2) == 0)) {
            if (((ulong)pppuVar8[0x1d] & 1) == 0) {
              func_0x00010871df60(&lStack_b38);
              lStack_b38 = extraout_x8_05;
              func_0x00010871e6d0(0x278);
              func_0x00010871f168();
              func_0x00010871e27c();
              func_0x00010871e4e8((long)*(int *)(pppuVar8 + 0x24));
              func_0x00010871e6c4();
              func_0x00010871f11c(auStack_760);
              func_0x00010871e84c();
              func_0x00010871f20c();
              func_0x00010871eeb8();
              func_0x00010871e6f8();
            }
            else if (((ulong)pppuVar8[0x2e] & 1) == 0) {
              func_0x00010871df60(&lStack_b38);
              lStack_b38 = extraout_x8_06;
              func_0x00010871e6d0(0x279);
              func_0x00010871f168();
              func_0x00010871e27c();
              func_0x00010871e4e8((long)*(int *)(pppuVar8 + 0x24));
              func_0x00010871e6c4();
              func_0x00010871e7f4(auStack_760);
              func_0x00010871eae8();
              func_0x00010871f20c();
              func_0x00010871eeb8();
              func_0x00010871e6f8();
            }
            else {
              func_0x00010871df60(&lStack_b38);
              lStack_b38 = extraout_x8_04;
              func_0x00010871e6d0(0x27a);
              func_0x00010871f168();
              func_0x00010871e27c();
              func_0x00010871e4e8((long)*(int *)(pppuVar8 + 0x24));
              func_0x00010871e6c4();
              func_0x00010871e7f4(auStack_760);
              func_0x00010871eae8();
              func_0x00010871f20c();
              func_0x00010871eeb8();
              func_0x00010871e6f8();
            }
            func_0x00010871e4bc();
            func_0x00010871eb78();
            func_0x00010871eb10();
            func_0x000107c2882c(&lStack_b38);
          }
        }
      }
    }
    func_0x00010871e0e8();
    FUN_10868ed84(&pppuStack_f0,&lStack_108,&lStack_198);
    if (lStack_120 != lStack_118) {
      uVar22 = *(undefined8 *)(param_1 + 0xb8);
      uVar13 = *(undefined8 *)(param_1 + 0xa8);
      func_0x000107c32ec8(uVar13);
      (*extraout_x8_07)();
      FUN_10886c4d8(uVar22,&lStack_120,uVar13);
      if (*(long *)(param_1 + 0x448) != 0) {
        func_0x00010871e378();
        (*extraout_x8_08)();
      }
      func_0x00010871dfd8();
      func_0x00010871e1ec();
      func_0x00010871e6bc();
      func_0x00010871e0c0(lStack_118);
      func_0x00010871e844();
      func_0x00010871e4bc();
    }
    if (lStack_108 != lStack_100) {
      uVar13 = *(undefined8 *)(param_1 + 0xa8);
      func_0x000107c32ec8(uVar13);
      (*extraout_x8_09)();
      FUN_108708c2c(*(undefined8 *)(param_1 + 0xb8),*(undefined1 *)(param_1 + 0x252),&lStack_108,
                    uVar13);
      func_0x00010871eac4();
      FUN_108719d30();
      func_0x00010871dfd8();
      func_0x00010871e1ec();
      func_0x00010871e6bc();
      func_0x00010871e0c0(lStack_100);
      func_0x00010871e844();
      func_0x00010871e4bc();
    }
    bVar6 = lStack_138 == lStack_130;
    if (!bVar6) {
      func_0x00010871e688(*(undefined8 *)(param_1 + 0xb8));
      if (bVar6) {
        FUN_10886c5cc();
      }
      else {
        FUN_10886c6cc();
      }
      FUN_108867224(&ppuStack_f20,*plVar26,&lStack_138);
      ppuVar4 = ppuStack_f18;
      lStack_b30 = 0;
      lStack_b38 = 0;
      uStack_b28 = 0;
      for (ppuVar12 = ppuStack_f20; ppuVar12 != ppuVar4; ppuVar12 = ppuVar12 + 0x7a) {
        if (((ulong)ppuVar12[0x3d] & 1) == 0) {
          func_0x000107c28840(&lStack_b38,ppuVar12);
        }
      }
      if (lStack_b38 != lStack_b30) {
        func_0x00010871ed9c();
      }
      func_0x000107c27a04(&lStack_b38);
      func_0x000107c29108(&ppuStack_f20);
    }
    if (lStack_150 != lStack_148) {
      FUN_10886c748(*plVar26,&lStack_150);
      func_0x00010871ed9c();
      func_0x00010871dfd8();
      func_0x00010871ec20();
      func_0x00010871e6bc();
      func_0x00010871e0c0(lStack_148);
      func_0x00010871e844();
      func_0x00010871e4bc();
    }
    if (lStack_1b0 != lStack_1a8) {
      FUN_10886c748(*plVar26,&lStack_1b0);
      if (*(long *)(param_1 + 0x448) != 0) {
        func_0x00010871e378();
        (*extraout_x8_10)();
      }
      func_0x00010871dfd8();
      func_0x00010871ec20();
      func_0x00010871e6bc();
      func_0x00010871e0c0(lStack_1a8);
      func_0x00010871e844();
      func_0x00010871e4bc();
    }
    if (lStack_180 != lStack_178) {
      func_0x00010871ed9c();
      func_0x00010871dfd8();
      func_0x00010871e1ec();
      func_0x00010871e6bc();
      func_0x00010871e0c0(lStack_178);
      func_0x00010871e844();
      func_0x00010871e4bc();
    }
    if (lStack_198 != lStack_190) {
      func_0x00010871f0fc(&lStack_198);
      func_0x00010871dfd8();
      func_0x00010871e1ec();
      func_0x00010871e6bc();
      func_0x00010871e0c0(lStack_190);
      func_0x00010871e844();
      func_0x00010871e4bc();
    }
    uVar23 = uStack_1e0;
    if (*(long *)(param_1 + 0x458) != 0) {
      for (; uVar23 != uVar18; uVar23 = uVar23 + 0x208) {
        if (*(char *)(uVar23 + 0x200) == '\x01') {
          ppuStack_f18 = (undefined **)0x0;
          ppuStack_f20 = (undefined **)0x0;
          uStack_f10 = 0;
          (**(code **)**(undefined8 **)(param_1 + 0x458))
                    (*(undefined8 **)(param_1 + 0x458),uVar23,uVar23 + 0x30,1,&ppuStack_f20,
                     uVar23 + 0x18);
          func_0x00010867b9fc(&ppuStack_f20);
        }
      }
    }
    if (lStack_168 != lStack_160) {
      FUN_10886d0c0(*plVar26,uVar16,&lStack_168);
    }
    if (*(char *)(param_1 + 0x251) == '\x01') {
      FUN_108719664(&ppuStack_f20,param_1 + 0x178);
      if (ppuStack_f20 != (undefined **)0x0) {
        (**(code **)(*ppuStack_f20 + 0x30))(auStack_1340);
        func_0x000107c27a04(auStack_1328);
        func_0x000107c27a04(auStack_1340);
      }
      FUN_108695f64(&ppuStack_f20);
    }
    func_0x000107c31428(auStack_c0);
    lVar11 = lStack_1c0;
    lVar10 = lStack_1c8;
    if (*(long *)(param_1 + 0x468) != 0) {
      for (; lVar10 != lVar11; lVar10 = lVar10 + 0x1c8) {
        func_0x00010871f3f0(*(undefined8 *)(**(long **)(param_1 + 0x468) + 0x28));
      }
    }
    func_0x00010871f038();
    func_0x00010871f074();
    func_0x00010871f080();
    func_0x00010871f0c8();
    func_0x00010871f050();
    func_0x00010871f020();
    func_0x00010871f08c();
    func_0x00010871efe4();
    func_0x00010871f014();
    func_0x00010871eac4();
    func_0x000107c27a04();
  }
  func_0x000107c278b8(auStack_760,&UNK_10f4b05eb);
  pcVar1 = "true";
  if (pppuStack_f0 != pppuStack_e8) {
    pcVar1 = "false";
  }
  func_0x000107c278b8(&ppuStack_f20,pcVar1);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&lStack_b38,auStack_760);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (&iStack_3d8,&ppuStack_f20);
  puVar14 = auStack_50;
  func_0x000107c28820(puVar14,&lStack_b38,&iStack_3d8);
  func_0x000107c28af0(auStack_50,puVar14);
  func_0x00010871eb10();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_b38);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_f20);
  func_0x00010871eb78();
  func_0x00010871f0bc();
  func_0x00010871f044();
  func_0x00010871e2c8();
  return;
LAB_108719f54:
  while (pppuVar20 = pppuVar20 + 0x4c, pppuVar20 != pppuVar19) {
    func_0x000107c32f4c();
    func_0x00010871c5ac();
    if (((ulong)pppuVar8 & 1) == 0) {
      pppuVar8 = pppuVar17;
      FUN_10868cef0(pppuVar17,pppuVar20);
      pppuVar17 = pppuVar17 + 0x4c;
    }
  }
  pppuVar19 = pppuStack_e8;
  pppuVar9 = pppuStack_f0;
  if (pppuVar17 != pppuStack_e8) {
    FUN_10868c96c(&pppuStack_f0,pppuVar17);
    pppuVar19 = pppuStack_e8;
    pppuVar9 = pppuStack_f0;
  }
  goto LAB_108719fac;
}



/* Entry: 10871ae1c; end: 10871ae23;  */

void FUN_10871ae1c(long param_1)

{
  char *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined **ppuVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  long lVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  undefined1 *puVar14;
  ulong uVar15;
  code *extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  ulong extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  code *extraout_x8_07;
  code *extraout_x8_08;
  code *extraout_x8_09;
  code *extraout_x8_10;
  ulong uVar16;
  long unaff_x19;
  undefined8 uVar17;
  undefined ***pppuVar18;
  undefined ***pppuVar19;
  undefined ***pppuVar20;
  ulong uVar21;
  undefined8 uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  long *plVar26;
  long *plVar27;
  ulong uStack_1350;
  undefined1 auStack_1340 [24];
  undefined1 auStack_1328 [24];
  undefined1 auStack_1310 [24];
  undefined1 auStack_12f8 [984];
  undefined **ppuStack_f20;
  undefined **ppuStack_f18;
  undefined8 uStack_f10;
  undefined8 uStack_f08;
  undefined8 uStack_f00;
  undefined8 uStack_ef8;
  undefined1 auStack_ef0 [408];
  char cStack_d58;
  long lStack_b38;
  long lStack_b30;
  undefined8 uStack_b28;
  undefined1 auStack_760 [24];
  undefined1 auStack_748 [440];
  char cStack_590;
  undefined1 auStack_588 [424];
  char cStack_3e0;
  int iStack_3d8;
  char cStack_3d4;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  ulong uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  long lStack_190;
  undefined8 uStack_188;
  long lStack_180;
  long lStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long lStack_160;
  undefined8 uStack_158;
  long lStack_150;
  long lStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long lStack_130;
  undefined8 uStack_128;
  long lStack_120;
  long lStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined ***pppuStack_f0;
  undefined ***pppuStack_e8;
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [64];
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [48];
  
  uVar15 = param_1 - 0x28;
  func_0x00010871f598();
  if ((uVar15 & 1) != 0) {
    return;
  }
  func_0x000107c32ee4();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  if (*(char *)(unaff_x19 + 0x191) != '\x01') {
    return;
  }
  uStack_70 = 0;
  uStack_68 = 0;
  ppuStack_80 = &PTR_FUN_110a609a8;
  uStack_78 = 0;
  uStack_60 = 0x26a;
  func_0x00010871e00c(auStack_58,unaff_x19 + 0x118);
  func_0x00010871e2c0();
  plVar26 = (long *)(unaff_x19 + 0xb8);
  uVar17 = *(undefined8 *)(*plVar26 + 0x18);
  func_0x000107c278b8(auStack_d8,&UNK_10f4b242c);
  func_0x000107c31420(auStack_c0,uVar17,auStack_d8);
  func_0x00010871f0a4();
  uVar17 = *(undefined8 *)(unaff_x19 + 0xa8);
  func_0x000107c32ec8(uVar17);
  (*extraout_x8)();
  FUN_10886caf0(&ppuStack_f20,*plVar26);
  FUN_10868aee0(&pppuStack_f0,&ppuStack_f20);
  pppuVar8 = &ppuStack_f20;
  func_0x000107c28d4c();
  pppuVar19 = pppuStack_e8;
  pppuVar9 = pppuStack_f0;
  for (pppuVar18 = pppuStack_f0; pppuVar18 != pppuVar19; pppuVar18 = pppuVar18 + 0x4c) {
    func_0x00010871f820();
    func_0x00010871c5ac();
    pppuVar20 = pppuVar18;
    if ((int)pppuVar8 != 0) goto LAB_108719f54;
  }
LAB_108719fac:
  if (pppuVar9 != pppuVar19) {
    lStack_100 = 0;
    lStack_108 = 0;
    uStack_f8 = 0;
    lStack_118 = 0;
    lStack_120 = 0;
    uStack_110 = 0;
    lStack_130 = 0;
    lStack_138 = 0;
    uStack_128 = 0;
    lStack_148 = 0;
    lStack_150 = 0;
    uStack_140 = 0;
    lStack_160 = 0;
    lStack_168 = 0;
    uStack_158 = 0;
    func_0x00010871eac4();
    func_0x000107c27ab0();
    func_0x00010871e75c(pppuStack_e8);
    func_0x000107c27ab0(&lStack_150);
    func_0x00010871e75c(pppuStack_e8);
    func_0x000107c27ab0(&lStack_168);
    pppuVar18 = pppuStack_e8;
    uVar15 = 0;
    lStack_178 = 0;
    lStack_180 = 0;
    uStack_170 = 0;
    lStack_190 = 0;
    lStack_198 = 0;
    uStack_188 = 0;
    uStack_1350 = 0;
    lStack_1a8 = 0;
    lStack_1b0 = 0;
    uStack_1a0 = 0;
    lStack_1c0 = 0;
    lStack_1c8 = 0;
    uStack_1b8 = 0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1d0 = 0;
    for (pppuVar8 = pppuStack_f0; pppuVar8 != pppuVar18; pppuVar8 = pppuVar8 + 0x4c) {
      if (((ulong)pppuVar8[0x1f] & 1) == 0) {
        if (*(char *)(pppuVar8 + 3) == '\x01') {
          if (*(int *)(pppuVar8 + 0x13) == 1) {
            if (*(char *)(pppuVar8 + 0x2c) == '\x01' && *(int *)((long)pppuVar8 + 0x154) == 1) {
              if (((ulong)pppuVar8[0x1d] & 1) == 0) goto LAB_10871a3d8;
              plVar27 = &lStack_1b0;
            }
            else {
              plVar27 = &lStack_150;
            }
            func_0x00010871eb70(plVar27);
          }
          else if (*(int *)(pppuVar8 + 0x13) == 0) {
            pppuVar9 = pppuVar8;
            FUN_10868f768();
            if ((int)pppuVar9 == 0) {
              if (*(char *)(pppuVar8 + 0x2c) == '\x01' && *(int *)((long)pppuVar8 + 0x154) == 1) {
                if (*(char *)(pppuVar8 + 0x1d) == '\x01') goto LAB_10871a158;
              }
              else {
                func_0x00010871eac4();
LAB_10871a158:
                func_0x00010871eb70();
              }
              if (*(char *)(pppuVar8 + 0x17) == '\x01') {
                func_0x000107c28840(&lStack_138,pppuVar8 + 0x14);
              }
            }
            else {
              FUN_10868f7a0(&iStack_3d8,pppuVar8,plVar26,unaff_x19 + 0x118);
              if (iStack_3d8 == 0) {
                plVar27 = &lStack_198;
                if (cStack_3d4 == '\0') {
                  plVar27 = &lStack_180;
                }
                func_0x00010871eb70(plVar27);
                FUN_108860880(&ppuStack_f20,*plVar26,pppuVar8);
                func_0x000107c28998(auStack_588,&ppuStack_f20);
                func_0x000107c28948(&ppuStack_f20);
                if (cStack_3e0 == '\x01') {
                  func_0x00010871ed00(auStack_760,*plVar26,pppuVar8);
                  if (cStack_590 == '\x01') {
                    FUN_1088660e8(&ppuStack_f20,*plVar26,pppuVar8);
                    FUN_10869148c(&lStack_b38,&ppuStack_f20);
                    func_0x000107c288ec(&ppuStack_f20);
                    FUN_1087091e8(auStack_12f8,unaff_x19,pppuVar8,auStack_748,auStack_588,0,
                                  &lStack_b38);
                    func_0x000107c288cc(auStack_12f8);
                    func_0x000107c288cc(&lStack_b38);
                  }
                  func_0x000107c288c8(auStack_760);
                }
                func_0x000107c27994(&ppuStack_f20,pppuVar8);
                uStack_f00 = uStack_3c8;
                uStack_f08 = uStack_3d0;
                uStack_ef8 = uStack_3c0;
                func_0x00010871f6d8(&iStack_3d8);
                func_0x000107c28de4(auStack_ef0,extraout_x8_00 + 0x20);
                if (uVar15 < uStack_1350) {
                  FUN_10871c5d0(uVar15,&ppuStack_f20);
                  uVar15 = uVar15 + 0x208;
                }
                else {
                  lVar11 = uVar15 - uStack_1e0;
                  uVar23 = lVar11 / 0x208 + 1;
                  if (0x7e07e07e07e07e < uVar23) {
                    func_0x00010871e0e8();
                    FUN_10871c5e8();
LAB_10871aba0:
                    /* WARNING: Does not return */
                    pcVar5 = (code *)SoftwareBreakpoint(1,0x10871aba4);
                    (*pcVar5)();
                  }
                  uVar25 = (long)(uStack_1350 - uStack_1e0) / 0x208;
                  uVar16 = uVar25 * 2;
                  if (uVar16 < uVar23 || uVar16 - uVar23 == 0) {
                    uVar16 = uVar23;
                  }
                  if (0x3f03f03f03f03e < uVar25) {
                    uVar16 = 0x7e07e07e07e07e;
                  }
                  if (uVar16 == 0) {
                    lVar10 = 0;
                  }
                  else {
                    if (0x7e07e07e07e07e < uVar16) {
                      func_0x00010871e0e8();
                      func_0x000104bd35f4();
                      goto LAB_10871aba0;
                    }
                    lVar10 = uVar16 * 0x208;
                    __Znwm();
                  }
                  lVar11 = lVar10 + lVar11;
                  FUN_10871c5d0(lVar11,&ppuStack_f20);
                  uVar21 = uStack_1e0;
                  uVar24 = lVar11 + ((long)(uVar15 - uStack_1e0) / -0x208) * 0x208;
                  uVar25 = uVar24;
                  for (uVar23 = uStack_1e0; uVar23 != uVar15; uVar23 = uVar23 + 0x208) {
                    FUN_10871c5d0(uVar25,uVar23);
                    uVar25 = uVar25 + 0x208;
                  }
                  for (; uVar21 != uVar15; uVar21 = uVar21 + 0x208) {
                    FUN_10871b19c(uVar21);
                  }
                  uVar15 = lVar11 + 0x208;
                  uStack_1350 = lVar10 + uVar16 * 0x208;
                  bVar6 = uStack_1e0 != 0;
                  uStack_1e0 = uVar24;
                  if (bVar6) {
                    __ZdlPv();
                  }
                }
                FUN_10871b19c(&ppuStack_f20);
                func_0x000107c288dc(auStack_588);
              }
              else {
                func_0x00010871eac4();
                func_0x00010871eb70();
              }
              FUN_108690c3c(&iStack_3d8);
            }
          }
LAB_10871a3d8:
          if (*(char *)(pppuVar8 + 0x1b) == '\x01') {
            func_0x00010871f2a8(&ppuStack_f20);
            if (ppuStack_f20 != (undefined **)0x0) {
              (**(code **)(*ppuStack_f20 + 0xb8))(ppuStack_f20,pppuVar8);
            }
            func_0x000107c291a8(&ppuStack_f20);
          }
        }
        func_0x000107c28840(&lStack_168,pppuVar8 + 7);
        lVar11 = *(long *)(unaff_x19 + 0x468);
        if (lVar11 != 0) {
          func_0x000107c32ec8();
          iVar7 = (int)lVar11;
          (*extraout_x8_01)();
          if (iVar7 != 0) {
            FUN_108696a78(&ppuStack_f20,pppuVar8,uVar17);
            if (cStack_d58 == '\x01') {
              FUN_10868fb28(&lStack_1c8,&ppuStack_f20);
            }
            FUN_108691188(&ppuStack_f20);
          }
        }
        if (*(char *)(pppuVar8 + 0x11) == '\x01') {
          ppuVar12 = *(undefined ***)(unaff_x19 + 0xa8);
          func_0x000107c32ec8();
          (*extraout_x8_02)();
          if (pppuVar8[0x10] <= ppuVar12) {
            plVar27 = *(long **)(unaff_x19 + 0x118);
            ppuStack_f18 = (undefined **)0x0;
            uStack_f10 = 0;
            uStack_f08 = 0;
            ppuStack_f20 = &PTR_FUN_110a609a8;
            uStack_f00 = CONCAT44(uStack_f00._4_4_,0x277);
            uVar3 = 0x4d01ca;
            if (*(int *)(pppuVar8 + 0x13) != 1) {
              uVar3 = 0x4d01cb;
            }
            FUN_1086901fc(&ppuStack_f20,uVar3);
            puVar14 = auStack_1310;
            func_0x00010871f11c(puVar14);
            func_0x00010871e66c();
            lStack_b38 = ((long)ppuVar12 - (long)pppuVar8[0x10]) * 1000000;
            (**(code **)(*plVar27 + 0x18))(plVar27,puVar14,&lStack_b38);
            func_0x00010871e8e0();
            func_0x00010871e4bc();
          }
        }
        if (((ulong)pppuVar8[0x1f] & 1) == 0) {
          uVar2 = *(uint *)(pppuVar8 + 0x43);
          if (*(char *)((long)pppuVar8 + 0x21c) == '\0') {
            uVar2 = 0;
          }
          if ((7 < uVar2) || (func_0x00010871e80c(), (extraout_x8_03 & 0xf2) == 0)) {
            if (((ulong)pppuVar8[0x1d] & 1) == 0) {
              func_0x00010871df60(&lStack_b38);
              lStack_b38 = extraout_x8_05;
              func_0x00010871e6d0(0x278);
              func_0x00010871f168();
              func_0x00010871e27c();
              func_0x00010871e4e8((long)*(int *)(pppuVar8 + 0x24));
              func_0x00010871e6c4();
              func_0x00010871f11c(auStack_760);
              func_0x00010871e84c();
              func_0x00010871f20c();
              func_0x00010871eeb8();
              func_0x00010871e6f8();
            }
            else if (((ulong)pppuVar8[0x2e] & 1) == 0) {
              func_0x00010871df60(&lStack_b38);
              lStack_b38 = extraout_x8_06;
              func_0x00010871e6d0(0x279);
              func_0x00010871f168();
              func_0x00010871e27c();
              func_0x00010871e4e8((long)*(int *)(pppuVar8 + 0x24));
              func_0x00010871e6c4();
              func_0x00010871e7f4(auStack_760);
              func_0x00010871eae8();
              func_0x00010871f20c();
              func_0x00010871eeb8();
              func_0x00010871e6f8();
            }
            else {
              func_0x00010871df60(&lStack_b38);
              lStack_b38 = extraout_x8_04;
              func_0x00010871e6d0(0x27a);
              func_0x00010871f168();
              func_0x00010871e27c();
              func_0x00010871e4e8((long)*(int *)(pppuVar8 + 0x24));
              func_0x00010871e6c4();
              func_0x00010871e7f4(auStack_760);
              func_0x00010871eae8();
              func_0x00010871f20c();
              func_0x00010871eeb8();
              func_0x00010871e6f8();
            }
            func_0x00010871e4bc();
            func_0x00010871eb78();
            func_0x00010871eb10();
            func_0x000107c2882c(&lStack_b38);
          }
        }
      }
    }
    func_0x00010871e0e8();
    FUN_10868ed84(&pppuStack_f0,&lStack_108,&lStack_198);
    if (lStack_120 != lStack_118) {
      uVar22 = *(undefined8 *)(unaff_x19 + 0xb8);
      uVar13 = *(undefined8 *)(unaff_x19 + 0xa8);
      func_0x000107c32ec8(uVar13);
      (*extraout_x8_07)();
      FUN_10886c4d8(uVar22,&lStack_120,uVar13);
      if (*(long *)(unaff_x19 + 0x448) != 0) {
        func_0x00010871e378();
        (*extraout_x8_08)();
      }
      func_0x00010871dfd8();
      func_0x00010871e1ec();
      func_0x00010871e6bc();
      func_0x00010871e0c0(lStack_118);
      func_0x00010871e844();
      func_0x00010871e4bc();
    }
    if (lStack_108 != lStack_100) {
      uVar13 = *(undefined8 *)(unaff_x19 + 0xa8);
      func_0x000107c32ec8(uVar13);
      (*extraout_x8_09)();
      FUN_108708c2c(*(undefined8 *)(unaff_x19 + 0xb8),*(undefined1 *)(unaff_x19 + 0x252),&lStack_108
                    ,uVar13);
      func_0x00010871eac4();
      FUN_108719d30();
      func_0x00010871dfd8();
      func_0x00010871e1ec();
      func_0x00010871e6bc();
      func_0x00010871e0c0(lStack_100);
      func_0x00010871e844();
      func_0x00010871e4bc();
    }
    bVar6 = lStack_138 == lStack_130;
    if (!bVar6) {
      func_0x00010871e688(*(undefined8 *)(unaff_x19 + 0xb8));
      if (bVar6) {
        FUN_10886c5cc();
      }
      else {
        FUN_10886c6cc();
      }
      FUN_108867224(&ppuStack_f20,*plVar26,&lStack_138);
      ppuVar4 = ppuStack_f18;
      lStack_b30 = 0;
      lStack_b38 = 0;
      uStack_b28 = 0;
      for (ppuVar12 = ppuStack_f20; ppuVar12 != ppuVar4; ppuVar12 = ppuVar12 + 0x7a) {
        if (((ulong)ppuVar12[0x3d] & 1) == 0) {
          func_0x000107c28840(&lStack_b38,ppuVar12);
        }
      }
      if (lStack_b38 != lStack_b30) {
        func_0x00010871ed9c();
      }
      func_0x000107c27a04(&lStack_b38);
      func_0x000107c29108(&ppuStack_f20);
    }
    if (lStack_150 != lStack_148) {
      FUN_10886c748(*plVar26,&lStack_150);
      func_0x00010871ed9c();
      func_0x00010871dfd8();
      func_0x00010871ec20();
      func_0x00010871e6bc();
      func_0x00010871e0c0(lStack_148);
      func_0x00010871e844();
      func_0x00010871e4bc();
    }
    if (lStack_1b0 != lStack_1a8) {
      FUN_10886c748(*plVar26,&lStack_1b0);
      if (*(long *)(unaff_x19 + 0x448) != 0) {
        func_0x00010871e378();
        (*extraout_x8_10)();
      }
      func_0x00010871dfd8();
      func_0x00010871ec20();
      func_0x00010871e6bc();
      func_0x00010871e0c0(lStack_1a8);
      func_0x00010871e844();
      func_0x00010871e4bc();
    }
    if (lStack_180 != lStack_178) {
      func_0x00010871ed9c();
      func_0x00010871dfd8();
      func_0x00010871e1ec();
      func_0x00010871e6bc();
      func_0x00010871e0c0(lStack_178);
      func_0x00010871e844();
      func_0x00010871e4bc();
    }
    if (lStack_198 != lStack_190) {
      func_0x00010871f0fc(&lStack_198);
      func_0x00010871dfd8();
      func_0x00010871e1ec();
      func_0x00010871e6bc();
      func_0x00010871e0c0(lStack_190);
      func_0x00010871e844();
      func_0x00010871e4bc();
    }
    uVar23 = uStack_1e0;
    if (*(long *)(unaff_x19 + 0x458) != 0) {
      for (; uVar23 != uVar15; uVar23 = uVar23 + 0x208) {
        if (*(char *)(uVar23 + 0x200) == '\x01') {
          ppuStack_f18 = (undefined **)0x0;
          ppuStack_f20 = (undefined **)0x0;
          uStack_f10 = 0;
          (**(code **)**(undefined8 **)(unaff_x19 + 0x458))
                    (*(undefined8 **)(unaff_x19 + 0x458),uVar23,uVar23 + 0x30,1,&ppuStack_f20,
                     uVar23 + 0x18);
          func_0x00010867b9fc(&ppuStack_f20);
        }
      }
    }
    if (lStack_168 != lStack_160) {
      FUN_10886d0c0(*plVar26,uVar17,&lStack_168);
    }
    if (*(char *)(unaff_x19 + 0x251) == '\x01') {
      FUN_108719664(&ppuStack_f20,unaff_x19 + 0x178);
      if (ppuStack_f20 != (undefined **)0x0) {
        (**(code **)(*ppuStack_f20 + 0x30))(auStack_1340);
        func_0x000107c27a04(auStack_1328);
        func_0x000107c27a04(auStack_1340);
      }
      FUN_108695f64(&ppuStack_f20);
    }
    func_0x000107c31428(auStack_c0);
    lVar11 = lStack_1c0;
    lVar10 = lStack_1c8;
    if (*(long *)(unaff_x19 + 0x468) != 0) {
      for (; lVar10 != lVar11; lVar10 = lVar10 + 0x1c8) {
        func_0x00010871f3f0(*(undefined8 *)(**(long **)(unaff_x19 + 0x468) + 0x28));
      }
    }
    func_0x00010871f038();
    func_0x00010871f074();
    func_0x00010871f080();
    func_0x00010871f0c8();
    func_0x00010871f050();
    func_0x00010871f020();
    func_0x00010871f08c();
    func_0x00010871efe4();
    func_0x00010871f014();
    func_0x00010871eac4();
    func_0x000107c27a04();
  }
  func_0x000107c278b8(auStack_760,&UNK_10f4b05eb);
  pcVar1 = "true";
  if (pppuStack_f0 != pppuStack_e8) {
    pcVar1 = "false";
  }
  func_0x000107c278b8(&ppuStack_f20,pcVar1);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&lStack_b38,auStack_760);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (&iStack_3d8,&ppuStack_f20);
  puVar14 = auStack_50;
  func_0x000107c28820(puVar14,&lStack_b38,&iStack_3d8);
  func_0x000107c28af0(auStack_50,puVar14);
  func_0x00010871eb10();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_b38);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_f20);
  func_0x00010871eb78();
  func_0x00010871f0bc();
  func_0x00010871f044();
  func_0x00010871e2c8();
  return;
LAB_108719f54:
  while (pppuVar20 = pppuVar20 + 0x4c, pppuVar20 != pppuVar19) {
    func_0x000107c32f4c();
    func_0x00010871c5ac();
    if (((ulong)pppuVar8 & 1) == 0) {
      pppuVar8 = pppuVar18;
      FUN_10868cef0(pppuVar18,pppuVar20);
      pppuVar18 = pppuVar18 + 0x4c;
    }
  }
  pppuVar19 = pppuStack_e8;
  pppuVar9 = pppuStack_f0;
  if (pppuVar18 != pppuStack_e8) {
    FUN_10868c96c(&pppuStack_f0,pppuVar18);
    pppuVar19 = pppuStack_e8;
    pppuVar9 = pppuStack_f0;
  }
  goto LAB_108719fac;
}



/* Entry: 10871ae24; end: 10871aee7;  */

void FUN_10871ae24(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  code *extraout_x8;
  ulong uVar3;
  undefined1 auStack_2d0 [632];
  ulong uStack_58;
  ulong uStack_50;
  
  uVar1 = 0;
  FUN_10886be1c(auStack_2d0,*(undefined8 *)(param_1 + 0xb8));
  FUN_10868aee0(&uStack_58,auStack_2d0);
  func_0x000107c28d4c();
  for (uVar3 = uStack_58; uVar3 != uStack_50; uVar3 = uVar3 + 0x260) {
    if (*(char *)(uVar3 + 0x18) == '\x01') {
      uVar2 = *(undefined8 *)(param_1 + 0xa8);
      func_0x000107c32ec8(uVar2);
      (*extraout_x8)();
      uVar1 = uVar3;
      func_0x00010868f78c(uVar3,uVar2,3,(undefined8 *)(param_1 + 0xb8));
    }
  }
  func_0x00010871eda4();
  if ((uVar1 & 1) == 0) {
    func_0x00010871e99c();
    func_0x00010871f82c();
    FUN_10871aee8();
  }
  func_0x00010871ec54();
  return;
}



/* Entry: 10871aee8; end: 10871b193;  */

void FUN_10871aee8(long param_1,int param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined ***pppuVar3;
  long *plVar4;
  undefined1 auStack_5e8 [24];
  undefined1 auStack_5d0 [24];
  undefined1 auStack_5b8 [40];
  undefined1 auStack_590 [24];
  undefined1 auStack_578 [24];
  undefined1 auStack_560 [40];
  undefined **ppuStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined4 uStack_518;
  long *aplStack_2c0 [76];
  char cStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  lStack_58 = 0;
  lStack_50 = 0;
  uStack_48 = 0;
  if (*(char *)(param_1 + 0x251) == '\x01') {
    FUN_108719664(aplStack_2c0,param_1 + 0x178);
    if (aplStack_2c0[0] != (long *)0x0) {
      (**(code **)(*aplStack_2c0[0] + 0x18))(&ppuStack_538);
      func_0x00010871f2b0();
      func_0x00010868c8fc(&ppuStack_538);
    }
    FUN_108695f64(aplStack_2c0);
  }
  else {
    FUN_10886cb70(&ppuStack_538,*(undefined8 *)(param_1 + 0xb8));
    func_0x00010871f2b0();
    func_0x00010868c8fc(&ppuStack_538);
  }
  if (lStack_58 != lStack_50) {
    FUN_10886be1c(&ppuStack_538,*(undefined8 *)(param_1 + 0xb8));
    func_0x000107c28db8(aplStack_2c0,&ppuStack_538);
    func_0x000107c28d30(aplStack_2c0);
    func_0x000107c28d4c(&ppuStack_538);
    if (cStack_60 == '\x01') {
      plVar4 = *(long **)(param_1 + 0x118);
      uStack_528 = 0;
      uStack_520 = 0;
      ppuStack_538 = &PTR_FUN_110a609a8;
      uStack_530 = 0;
      uStack_518 = 0x271;
      puVar1 = auStack_578;
      func_0x000107c278b8(puVar1,&UNK_10f4b08d1);
      func_0x00010871f21c();
      puVar2 = auStack_590;
      func_0x000107c278b8(puVar2,&UNK_10f4b0628);
      func_0x00010871eda4();
      func_0x000107c28818(puVar1,auStack_590,puVar2);
      func_0x000107c2884c(auStack_560,puVar1);
      func_0x00010871ed74(*(undefined8 *)(*plVar4 + 0x50));
      func_0x00010871ec18();
      func_0x00010871e8e0();
      func_0x00010871f214();
      func_0x00010871e704();
      plVar4 = *(long **)(param_1 + 0x118);
      uStack_528 = 0;
      uStack_520 = 0;
      ppuStack_538 = &PTR_FUN_110a609a8;
      uStack_530 = 0;
      uStack_518 = 0x270;
      func_0x000107c278b8(auStack_5d0,"skipped");
      pppuVar3 = &ppuStack_538;
      func_0x000107c28818(pppuVar3,auStack_5d0,1);
      func_0x000107c2884c(auStack_5b8,pppuVar3);
      func_0x00010871e274(*(undefined8 *)(*plVar4 + 0x50));
      func_0x000107c2882c(auStack_5b8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_5d0);
      func_0x00010871e704();
    }
    else {
      if (param_2 != 0) {
        func_0x00010871e99c();
      }
      FUN_1087176dc(auStack_5e8,param_1,&lStack_58,1,1,param_3);
      func_0x000107c29108(auStack_5e8);
    }
  }
  func_0x00010871ec54();
  return;
}



/* Entry: 10871b194; end: 10871b19b;  */

void FUN_10871b194(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  code *extraout_x8;
  ulong uVar3;
  undefined1 auStack_2d0 [632];
  ulong uStack_58;
  ulong uStack_50;
  
  uVar1 = 0;
  FUN_10886be1c(auStack_2d0,*(undefined8 *)(param_1 + 0x90));
  FUN_10868aee0(&uStack_58,auStack_2d0);
  func_0x000107c28d4c();
  for (uVar3 = uStack_58; uVar3 != uStack_50; uVar3 = uVar3 + 0x260) {
    if (*(char *)(uVar3 + 0x18) == '\x01') {
      uVar2 = *(undefined8 *)(param_1 + 0x80);
      func_0x000107c32ec8(uVar2);
      (*extraout_x8)();
      uVar1 = uVar3;
      func_0x00010868f78c(uVar3,uVar2,3,(undefined8 *)(param_1 + 0x90));
    }
  }
  func_0x00010871eda4();
  if ((uVar1 & 1) == 0) {
    func_0x00010871e99c();
    func_0x00010871f82c();
    FUN_10871aee8();
  }
  func_0x00010871ec54();
  return;
}



/* Entry: 10871b19c; end: 10871b1c7;  */

long FUN_10871b19c(long param_1)

{
  long lStack_28;
  
  func_0x000107c288c8(param_1 + 0x30);
  func_0x000104be1274(param_1 + 0x18);
  lStack_28 = param_1;
  func_0x000100100fd4(&lStack_28);
  return param_1;
}



/* Entry: 10871b1c8; end: 10871b217;  */

undefined8 FUN_10871b1c8(undefined8 param_1,undefined8 param_2)

{
  func_0x00010871f304(param_1,PTR_DAT_113268e28);
  func_0x00010871f838((uint)param_2 & 0x1cf);
  func_0x00010871f450();
  func_0x00010871e2a8();
  return param_2;
}



/* Entry: 10871b218; end: 10871b257;  */

long * FUN_10871b218(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar1 = param_1[1];
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x208;
      FUN_10871b19c();
    }
    func_0x00010871f2e4();
  }
  return param_1;
}



/* Entry: 10871b258; end: 10871b543;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10871b258(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined1 uVar3;
  bool bVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  undefined4 extraout_var;
  long extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  int extraout_w9;
  long extraout_x9;
  long *unaff_x19;
  long *plVar9;
  long lVar10;
  long *plVar11;
  ulong unaff_x22;
  undefined1 auStack_10a8 [1000];
  undefined1 auStack_cc0 [976];
  byte bStack_8f0;
  long lStack_8e8;
  long lStack_8e0;
  ulong uStack_8d0;
  long *plStack_8c8;
  long *plStack_8c0;
  long *plStack_8b8;
  undefined1 *puStack_8b0;
  code *pcStack_8a8;
  undefined1 auStack_8a0 [16];
  undefined8 uStack_890;
  undefined1 auStack_870 [32];
  long lStack_850;
  byte bStack_830;
  long lStack_690;
  byte bStack_688;
  int iStack_530;
  undefined8 auStack_498 [3];
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined1 auStack_448 [24];
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined4 uStack_410;
  undefined8 uStack_48;
  
  func_0x00010871e07c();
  puVar5 = (undefined8 *)(param_1 + 0x290);
  uStack_48 = extraout_x8;
  FUN_108679cf0();
  plVar11 = (long *)*puVar5;
  plVar9 = unaff_x19 + 0x5a;
  FUN_108679cf0();
  plVar9 = (long *)*plVar9;
  uVar3 = (long)plVar11 < 1 && plVar9 == (long *)0x1;
  if (0 < (long)plVar11 || 0 < (long)plVar9) {
    func_0x000107c27d7c(&uStack_480,&UNK_10df4a8f4,&DAT_10df4a904);
    uStack_458 = uStack_478;
    uStack_460 = uStack_480;
    uStack_450 = uStack_470;
    uStack_470 = 0;
    uStack_478 = 0;
    uStack_480 = 0;
    func_0x000107c27914(&uStack_480);
    func_0x000107c29ef0(auStack_498,unaff_x19 + 0xf,&uStack_460);
    param_2 = auStack_498;
    FUN_1088660e8(&uStack_430,unaff_x19[0x17]);
    FUN_10869148c(auStack_870,&uStack_430);
    func_0x000107c288ec(&uStack_430);
    func_0x00010871f654();
    if (((bool)uVar3) && ((bStack_688 & 1) == 0)) {
      plVar6 = (long *)unaff_x19[0x15];
      if (iStack_530 == 1) {
        func_0x000107c287d8();
      }
      else {
        func_0x000107c32ec8();
        (*extraout_x8_00)();
      }
      unaff_x22 = (ulong)bStack_830;
      uVar3 = plVar11 == (long *)0x1;
      if (((((0 < (long)plVar11) && (bStack_830 != 0)) &&
           (uVar3 = plVar6 == plVar11, plVar2 = plVar11, plVar11 <= plVar6)) ||
          (((bStack_830 & 1) == 0 &&
           (uVar3 = 0 < (long)plVar9 && plVar6 == plVar9, plVar2 = plVar9,
           0 < (long)plVar9 && plVar9 <= plVar6)))) &&
         (uVar3 = lStack_850 == (long)plVar6 - (long)plVar2,
         lStack_850 <= (long)plVar6 - (long)plVar2)) {
        plVar9 = (long *)unaff_x19[0x23];
        uStack_420 = 0;
        uStack_418 = 0;
        func_0x00010871e048();
        uStack_428 = 0;
        uStack_410 = 0x2ac;
        uStack_430._4_4_ = extraout_var;
        func_0x000107c278b8(auStack_448,PTR_s_viewed_113268f58);
        uVar3 = bStack_830 == 0;
        uVar1 = 0x12b0;
        if ((bool)uVar3) {
          uVar1 = 0x12b8;
        }
        func_0x00010871f838(uVar1);
        func_0x000107c28824(&uStack_430,auStack_448,*(undefined8 *)(extraout_x9 + extraout_x8_01));
        func_0x00010871ebb0();
        unaff_x22 = 1;
        func_0x00010871ef78(*(undefined8 *)(*plVar9 + 0x58));
        (*extraout_x8_02)();
        func_0x00010871eba8();
        lStack_690 = lStack_850;
        bStack_688 = 1;
        func_0x00010871f19c(unaff_x19[0x17]);
        unaff_x19 = (long *)unaff_x19[0x19];
        func_0x000107c27994(auStack_8a0,auStack_498);
        plVar11 = &uStack_430;
        func_0x00010871e4c4(uStack_890);
        uStack_430 = CONCAT44(uStack_430._4_4_,2);
        func_0x00010871f6b8();
        param_2 = &uStack_430;
        func_0x00010871ec98(auStack_448);
        func_0x00010871f1d8(*(undefined8 *)(*unaff_x19 + 0x20),unaff_x19);
        func_0x000107c27b3c(auStack_448);
        func_0x00010871f148();
        func_0x00010871e654();
        func_0x00010871e4f8();
      }
    }
    func_0x00010871ebc4();
    func_0x000107c27914(auStack_498);
    func_0x000107c27914(&uStack_460);
  }
  while( true ) {
    func_0x00010086526c(uStack_48);
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    func_0x000107c32eb0();
    func_0x000107c27b3c(auStack_448);
    func_0x00010871f148();
    func_0x00010871e654();
    func_0x00010871e4f8();
    func_0x00010871ebc4();
    func_0x000107c27914(auStack_498);
    puVar5 = &uStack_460;
    func_0x000107c27914();
    iVar8 = (int)param_2;
    uVar3 = (int)plVar9 == 1;
    if (!(bool)uVar3) break;
    func_0x00010871f50c();
    ___cxa_end_catch();
  }
  func_0x00010871e260();
  pcStack_8a8 = FUN_10871b544;
  if ((iVar8 == 0) && ((*(byte *)((long)puVar5 + 0x191) & 1) != 0)) {
    puVar7 = puVar5;
    uStack_8d0 = unaff_x22;
    plStack_8c8 = plVar11;
    plStack_8c0 = plVar9;
    plStack_8b8 = unaff_x19;
    puStack_8b0 = &stack0xfffffffffffffff0;
    if (*(char *)(puVar5 + 0x91) == '\x01') {
      puVar7 = (undefined8 *)puVar5[0x23];
      func_0x00010871ecdc();
      func_0x00010871f33c();
      func_0x00010871f1a4();
    }
    iVar8 = (int)puVar7;
    *(undefined1 *)(puVar5 + 0x91) = 1;
    func_0x0001008655c8();
    FUN_10871b704();
    func_0x00010871e9a4();
    if ((iVar8 != 0) && (puVar5[0x89] != 0)) {
      FUN_10886be1c(auStack_10a8,puVar5[0x17]);
      FUN_10868aee0(&lStack_8e8,auStack_10a8);
      func_0x000107c28d4c(auStack_10a8);
      for (lVar10 = lStack_8e8; lVar10 != lStack_8e0; lVar10 = lVar10 + 0x260) {
        bVar4 = *(char *)(lVar10 + 0x18) == '\x01';
        if ((bVar4) && (func_0x00010871edec(), bVar4 && extraout_w9 == 1)) {
          puVar7 = puVar5 + 8;
          FUN_108699578(puVar7,lVar10);
          if (((ulong)puVar7 & 1) == 0) {
            func_0x00010871f3f8(auStack_10a8,puVar5[0x17]);
            FUN_10869148c(auStack_cc0,auStack_10a8);
            func_0x000107c288ec(auStack_10a8);
            if ((bStack_8f0 & 1) != 0) {
              FUN_1086995ac(puVar5 + 8,lVar10);
              func_0x00010871eccc(auStack_10a8,puVar5,auStack_cc0);
              func_0x00010871ecdc(puVar5[0x89]);
              (*extraout_x8_03)();
              func_0x000107c32f04();
            }
            func_0x000107c288cc(auStack_cc0);
          }
        }
      }
      func_0x00010868c8fc(&lStack_8e8);
    }
  }
  return;
}



/* Entry: 10871b544; end: 10871b6f7;  */

void FUN_10871b544(long param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  code *extraout_x8;
  int extraout_w9;
  undefined1 auStack_808 [1000];
  undefined1 auStack_420 [976];
  byte bStack_50;
  long lStack_48;
  long lStack_40;
  
  if ((param_2 == 0) && ((*(byte *)(param_1 + 0x191) & 1) != 0)) {
    lVar3 = param_1;
    if (*(char *)(param_1 + 0x488) == '\x01') {
      lVar3 = *(long *)(param_1 + 0x118);
      func_0x00010871ecdc();
      func_0x00010871f33c();
      func_0x00010871f1a4();
    }
    iVar2 = (int)lVar3;
    *(undefined1 *)(param_1 + 0x488) = 1;
    func_0x0001008655c8();
    FUN_10871b704();
    func_0x00010871e9a4();
    if ((iVar2 != 0) && (*(long *)(param_1 + 0x448) != 0)) {
      FUN_10886be1c(auStack_808,*(undefined8 *)(param_1 + 0xb8));
      FUN_10868aee0(&lStack_48,auStack_808);
      func_0x000107c28d4c(auStack_808);
      for (lVar3 = lStack_48; lVar3 != lStack_40; lVar3 = lVar3 + 0x260) {
        bVar1 = *(char *)(lVar3 + 0x18) == '\x01';
        if ((bVar1) && (func_0x00010871edec(), bVar1 && extraout_w9 == 1)) {
          uVar4 = param_1 + 0x40;
          FUN_108699578(uVar4,lVar3);
          if ((uVar4 & 1) == 0) {
            func_0x00010871f3f8(auStack_808,*(undefined8 *)(param_1 + 0xb8));
            FUN_10869148c(auStack_420,auStack_808);
            func_0x000107c288ec(auStack_808);
            if ((bStack_50 & 1) != 0) {
              FUN_1086995ac(param_1 + 0x40,lVar3);
              func_0x00010871eccc(auStack_808,param_1,auStack_420);
              func_0x00010871ecdc(*(undefined8 *)(param_1 + 0x448));
              (*extraout_x8)();
              func_0x000107c32f04();
            }
            func_0x000107c288cc(auStack_420);
          }
        }
      }
      func_0x00010868c8fc(&lStack_48);
    }
  }
  return;
}



/* Entry: 10871b6f8; end: 10871b703;  */

void FUN_10871b6f8(long *param_1,undefined4 param_2)

{
  char *pcVar1;
  byte bVar2;
  long *plVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 uVar7;
  uint uVar8;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  undefined4 uStack_2a8;
  undefined4 uStack_29c;
  int iStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined8 uStack_288;
  long *plStack_280;
  undefined1 auStack_278 [24];
  undefined1 uStack_260;
  undefined1 auStack_258 [24];
  undefined1 uStack_240;
  undefined8 uStack_238;
  undefined1 uStack_230;
  undefined8 uStack_228;
  undefined1 uStack_220;
  undefined8 uStack_218;
  undefined1 uStack_210;
  undefined8 uStack_208;
  undefined1 uStack_200;
  uint uStack_1f8;
  undefined1 uStack_1f4;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  byte bStack_1d0;
  int iStack_1cc;
  uint uStack_1c8;
  int iStack_1c4;
  undefined4 uStack_1c0;
  undefined8 uStack_1b8;
  undefined1 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 uStack_1a0;
  undefined8 uStack_198;
  undefined1 uStack_190;
  undefined8 uStack_188;
  undefined1 uStack_180;
  uint uStack_178;
  char cStack_174;
  uint uStack_170;
  char cStack_16c;
  ulong uStack_168;
  long lStack_160;
  long lStack_158;
  undefined1 uStack_150;
  ushort uStack_148;
  byte bStack_146;
  char acStack_140 [64];
  char acStack_100 [160];
  
  if (param_1 == (long *)0x0) {
    return;
  }
  if ((char)param_1[0x35] != '\x01') {
    return;
  }
  lStack_1e8 = param_1[5];
  lStack_1f0 = param_1[4];
  lStack_1e0 = param_1[6];
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  _memcpy(&uStack_1d8,param_1 + 7,0x6d);
  uStack_168 = uStack_168 & 0xffffffffffffff00;
  uStack_150 = (char)param_1[0x18] == '\x01';
  if ((bool)uStack_150) {
    lStack_160 = param_1[0x16];
    uStack_168 = param_1[0x15];
    lStack_158 = param_1[0x17];
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x15] = 0;
  }
  uStack_148 = *(ushort *)(param_1 + 0x19);
  bStack_146 = *(byte *)((long)param_1 + 0xca);
  FUN_1086983dc(acStack_140,param_1 + 0x1a);
  pcVar5 = acStack_100 + 8;
  FUN_1086983dc(pcVar5,param_1 + 0x23);
  FUN_1086983dc(acStack_100 + 0x50,param_1 + 0x2c);
  FUN_108697d7c(param_1 + 4);
  bVar2 = bStack_146;
  if (((bStack_1d0 & 1) == 0) || (*param_1 == 0)) goto LAB_108697cb8;
  if ((bStack_146 & 1) == 0) {
    if ((uStack_148 & 0x100) == 0) {
      if (uStack_1c8 == 5) {
        uVar4 = 0;
        uStack_178 = 10;
      }
      else if (uStack_1c8 == 0) {
        uVar4 = 8;
LAB_108697b4c:
        if (cStack_174 == '\0') {
          uStack_178 = uVar4;
        }
        uVar4 = uStack_178 & 0xffffff00;
      }
      else if ((uStack_1c8 & 0xfffffffe) == 2) {
LAB_108697b70:
        uVar4 = 0;
        uStack_178 = 3;
      }
      else if ((uStack_148 & 1) == 0) {
        if (iStack_1c4 == 5) {
          uVar4 = 5;
          uStack_178 = uStack_170;
          cStack_174 = cStack_16c;
          goto LAB_108697b4c;
        }
        if (iStack_1c4 - 1U < 3) goto LAB_108697b70;
        if (iStack_1c4 == 0) {
          uVar4 = 0;
          uStack_178 = 2;
        }
        else if (iStack_1cc == 3) {
          uVar4 = 0;
          uStack_178 = 1;
        }
        else if (iStack_1cc == 2) {
          uStack_178 = 0;
          uVar4 = 0;
        }
        else {
          uVar4 = 0;
          uStack_178 = 0xb;
        }
      }
      else {
        uVar4 = 0;
        uStack_178 = 7;
      }
      uVar8 = uStack_178 & 0xff;
      uStack_29c = 2;
      if ((uVar4 | uVar8) == 0xb) {
        uStack_29c = 3;
      }
      uVar7 = 1;
      pcVar6 = pcVar5;
    }
    else {
      uVar7 = 0;
      uVar8 = 0;
      uVar4 = 0;
      uStack_29c = 0;
      pcVar5 = acStack_140;
      pcVar6 = acStack_140;
    }
  }
  else {
    uVar7 = 0;
    uVar8 = 0;
    uVar4 = 0;
    uStack_29c = 1;
    pcVar6 = acStack_100 + 0x50;
  }
  lStack_2b0 = lStack_1e0;
  uStack_2a8 = 0xe;
  iStack_298 = iStack_1c4;
  lStack_2b8 = lStack_1e8;
  lStack_2c0 = lStack_1f0;
  lStack_1f0 = 0;
  lStack_1e8 = 0;
  lStack_1e0 = 0;
  uStack_290 = uStack_1c0;
  uStack_288 = uStack_1d8;
  plVar3 = (long *)param_1[2];
  uStack_294 = param_2;
  (**(code **)(*plVar3 + 0x10))();
  auStack_278[0] = 0;
  uStack_260 = 0;
  auStack_258[0] = 0;
  uStack_240 = 0;
  uStack_238 = uStack_1b8;
  uStack_230 = uStack_1b0;
  uStack_228 = uStack_1a8;
  uStack_220 = uStack_1a0;
  uStack_210 = uStack_190;
  uStack_218 = uStack_198;
  uStack_200 = uStack_180;
  uStack_208 = uStack_188;
  uStack_1f8 = uVar4 | uVar8;
  pcVar1 = acStack_100 + 0x90;
  if (bVar2 == 0) {
    pcVar1 = pcVar5 + 0x40;
  }
  plStack_280 = plVar3;
  uStack_1f4 = uVar7;
  if (*pcVar1 == '\x01') {
    func_0x000107c27b98(auStack_258,pcVar6);
    pcVar6 = acStack_100 + 0x68;
    if (bVar2 == 0) {
      pcVar6 = pcVar5 + 0x18;
    }
    func_0x000107c27c5c(auStack_278,pcVar6);
  }
  (**(code **)(*(long *)*param_1 + 0x30))((long *)*param_1,&lStack_2c0);
  FUN_108698490(&lStack_2c0);
LAB_108697cb8:
  func_0x0001086984c0(&lStack_1f0);
  return;
}



/* Entry: 10871b704; end: 10871b88f;  */

void FUN_10871b704(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  bool bVar2;
  undefined4 uVar3;
  long lVar4;
  uint auStack_310 [2];
  undefined1 uStack_308;
  undefined1 uStack_300;
  undefined1 uStack_2f8;
  undefined1 uStack_2f0;
  undefined1 uStack_2e8;
  undefined1 uStack_2e0;
  undefined1 auStack_2d8 [56];
  byte bStack_2a0;
  long lStack_60;
  long lStack_58;
  undefined1 auStack_48 [24];
  
  lVar4 = *(long *)(param_1 + 0x478);
  if ((lVar4 != 0) && ((*(byte *)(lVar4 + 0x1a8) & 1) == 0)) {
    func_0x000104bff97c(auStack_48,param_2,"");
    FUN_108697968(lVar4,auStack_48);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
    if ((*(byte *)(*(long *)(param_1 + 0x478) + 0x1a8) & 1) != 0) {
      FUN_10886be1c(auStack_2d8,*(undefined8 *)(param_1 + 0xb8));
      FUN_10868aee0(&lStack_60,auStack_2d8);
      func_0x000107c28d4c(auStack_2d8);
      if (lStack_60 != lStack_58) {
        lVar4 = lStack_60;
        FUN_108719b68();
        FUN_108717600(auStack_2d8,lVar4);
        auStack_310[0] = (uint)bStack_2a0;
        uStack_308 = 0;
        uStack_300 = 0;
        uStack_2f8 = 0;
        uStack_2f0 = 0;
        uStack_2e8 = 0;
        uStack_2e0 = 0;
        FUN_108697da0(*(undefined8 *)(param_1 + 0x478),auStack_310);
        func_0x000108697f48(*(undefined8 *)(param_1 + 0x478),auStack_2d8);
        uVar1 = 0;
        if (*(int *)(lVar4 + 0x154) == 1) {
          uVar1 = *(undefined1 *)(lVar4 + 0x160);
        }
        bVar2 = *(char *)(lVar4 + 0x5c) != '\x01';
        if (bVar2) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)(lVar4 + 0x58);
        }
        FUN_108698288(*(undefined8 *)(param_1 + 0x478),auStack_2d8,uVar1,uVar3,!bVar2);
        FUN_10868cd4c(auStack_2d8);
      }
      func_0x00010868c8fc(&lStack_60);
    }
  }
  return;
}



/* Entry: 10871b890; end: 10871b897;  */

void FUN_10871b890(long param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  code *extraout_x8;
  int extraout_w9;
  undefined1 auStack_808 [1000];
  undefined1 auStack_420 [976];
  byte bStack_50;
  long lStack_48;
  long lStack_40;
  
  if ((param_2 == 0) && ((*(byte *)(param_1 + 0x181) & 1) != 0)) {
    lVar3 = param_1 + -0x10;
    if (*(char *)(param_1 + 0x478) == '\x01') {
      lVar3 = *(long *)(param_1 + 0x108);
      func_0x00010871ecdc();
      func_0x00010871f33c();
      func_0x00010871f1a4();
    }
    iVar2 = (int)lVar3;
    *(undefined1 *)(param_1 + 0x478) = 1;
    func_0x0001008655c8();
    FUN_10871b704();
    func_0x00010871e9a4();
    if ((iVar2 != 0) && (*(long *)(param_1 + 0x438) != 0)) {
      FUN_10886be1c(auStack_808,*(undefined8 *)(param_1 + 0xa8));
      FUN_10868aee0(&lStack_48,auStack_808);
      func_0x000107c28d4c(auStack_808);
      for (lVar3 = lStack_48; lVar3 != lStack_40; lVar3 = lVar3 + 0x260) {
        bVar1 = *(char *)(lVar3 + 0x18) == '\x01';
        if ((bVar1) && (func_0x00010871edec(), bVar1 && extraout_w9 == 1)) {
          uVar4 = param_1 + 0x30;
          FUN_108699578(uVar4,lVar3);
          if ((uVar4 & 1) == 0) {
            func_0x00010871f3f8(auStack_808,*(undefined8 *)(param_1 + 0xa8));
            FUN_10869148c(auStack_420,auStack_808);
            func_0x000107c288ec(auStack_808);
            if ((bStack_50 & 1) != 0) {
              FUN_1086995ac(param_1 + 0x30,lVar3);
              func_0x00010871eccc(auStack_808,param_1 + -0x10,auStack_420);
              func_0x00010871ecdc(*(undefined8 *)(param_1 + 0x438));
              (*extraout_x8)();
              func_0x000107c32f04();
            }
            func_0x000107c288cc(auStack_420);
          }
        }
      }
      func_0x00010868c8fc(&lStack_48);
    }
  }
  return;
}



/* Entry: 10871b898; end: 10871b8eb;  */

void FUN_10871b898(long param_1,int param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined ***pppuVar3;
  int iVar4;
  long *plVar5;
  undefined1 auStack_5e8 [24];
  undefined1 auStack_5d0 [24];
  undefined1 auStack_5b8 [40];
  undefined1 auStack_590 [24];
  undefined1 auStack_578 [24];
  undefined1 auStack_560 [40];
  undefined **ppuStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined4 uStack_518;
  long *aplStack_2c0 [76];
  char cStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  if (param_2 != 0) {
    return;
  }
  iVar4 = 0;
  if ((*(byte *)(param_1 + 0x488) & 1) == 0) {
    func_0x00010871ecdc(*(undefined8 *)(param_1 + 0x118));
    iVar4 = 0x274;
    func_0x00010871f33c();
  }
  func_0x00010871f1a4();
  *(undefined1 *)(param_1 + 0x488) = 0;
  func_0x00010871e99c();
  FUN_10871b258();
  func_0x00010871f82c();
  lStack_58 = 0;
  lStack_50 = 0;
  uStack_48 = 0;
  if (*(char *)(param_1 + 0x251) == '\x01') {
    FUN_108719664(aplStack_2c0,param_1 + 0x178);
    if (aplStack_2c0[0] != (long *)0x0) {
      (**(code **)(*aplStack_2c0[0] + 0x18))(&ppuStack_538);
      func_0x00010871f2b0();
      func_0x00010868c8fc(&ppuStack_538);
    }
    FUN_108695f64(aplStack_2c0);
  }
  else {
    FUN_10886cb70(&ppuStack_538,*(undefined8 *)(param_1 + 0xb8));
    func_0x00010871f2b0();
    func_0x00010868c8fc(&ppuStack_538);
  }
  if (lStack_58 != lStack_50) {
    FUN_10886be1c(&ppuStack_538,*(undefined8 *)(param_1 + 0xb8));
    func_0x000107c28db8(aplStack_2c0,&ppuStack_538);
    func_0x000107c28d30(aplStack_2c0);
    func_0x000107c28d4c(&ppuStack_538);
    if (cStack_60 == '\x01') {
      plVar5 = *(long **)(param_1 + 0x118);
      uStack_528 = 0;
      uStack_520 = 0;
      ppuStack_538 = &PTR_FUN_110a609a8;
      uStack_530 = 0;
      uStack_518 = 0x271;
      puVar1 = auStack_578;
      func_0x000107c278b8(puVar1,&UNK_10f4b08d1);
      func_0x00010871f21c();
      puVar2 = auStack_590;
      func_0x000107c278b8(puVar2,&UNK_10f4b0628);
      func_0x00010871eda4();
      func_0x000107c28818(puVar1,auStack_590,puVar2);
      func_0x000107c2884c(auStack_560,puVar1);
      func_0x00010871ed74(*(undefined8 *)(*plVar5 + 0x50));
      func_0x00010871ec18();
      func_0x00010871e8e0();
      func_0x00010871f214();
      func_0x00010871e704();
      plVar5 = *(long **)(param_1 + 0x118);
      uStack_528 = 0;
      uStack_520 = 0;
      ppuStack_538 = &PTR_FUN_110a609a8;
      uStack_530 = 0;
      uStack_518 = 0x270;
      func_0x000107c278b8(auStack_5d0,"skipped");
      pppuVar3 = &ppuStack_538;
      func_0x000107c28818(pppuVar3,auStack_5d0,1);
      func_0x000107c2884c(auStack_5b8,pppuVar3);
      func_0x00010871e274(*(undefined8 *)(*plVar5 + 0x50));
      func_0x000107c2882c(auStack_5b8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_5d0);
      func_0x00010871e704();
    }
    else {
      if (iVar4 != 0) {
        func_0x00010871e99c();
      }
      FUN_1087176dc(auStack_5e8,param_1,&lStack_58,1,1,3);
      func_0x000107c29108(auStack_5e8);
    }
  }
  func_0x00010871ec54();
  return;
}



/* Entry: 10871b8ec; end: 10871b8f3;  */

void FUN_10871b8ec(long param_1,int param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined ***pppuVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  undefined1 auStack_5e8 [24];
  undefined1 auStack_5d0 [24];
  undefined1 auStack_5b8 [40];
  undefined1 auStack_590 [24];
  undefined1 auStack_578 [24];
  undefined1 auStack_560 [40];
  undefined **ppuStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined4 uStack_518;
  long *aplStack_2c0 [76];
  char cStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  lVar4 = param_1 + -0x10;
  if (param_2 != 0) {
    return;
  }
  iVar5 = 0;
  if ((*(byte *)(param_1 + 0x478) & 1) == 0) {
    func_0x00010871ecdc(*(undefined8 *)(param_1 + 0x108));
    iVar5 = 0x274;
    func_0x00010871f33c();
  }
  func_0x00010871f1a4();
  *(undefined1 *)(param_1 + 0x478) = 0;
  func_0x00010871e99c();
  FUN_10871b258();
  func_0x00010871f82c();
  lStack_58 = 0;
  lStack_50 = 0;
  uStack_48 = 0;
  if (*(char *)(lVar4 + 0x251) == '\x01') {
    FUN_108719664(aplStack_2c0,lVar4 + 0x178);
    if (aplStack_2c0[0] != (long *)0x0) {
      (**(code **)(*aplStack_2c0[0] + 0x18))(&ppuStack_538);
      func_0x00010871f2b0();
      func_0x00010868c8fc(&ppuStack_538);
    }
    FUN_108695f64(aplStack_2c0);
  }
  else {
    FUN_10886cb70(&ppuStack_538,*(undefined8 *)(lVar4 + 0xb8));
    func_0x00010871f2b0();
    func_0x00010868c8fc(&ppuStack_538);
  }
  if (lStack_58 != lStack_50) {
    FUN_10886be1c(&ppuStack_538,*(undefined8 *)(lVar4 + 0xb8));
    func_0x000107c28db8(aplStack_2c0,&ppuStack_538);
    func_0x000107c28d30(aplStack_2c0);
    func_0x000107c28d4c(&ppuStack_538);
    if (cStack_60 == '\x01') {
      plVar6 = *(long **)(lVar4 + 0x118);
      uStack_528 = 0;
      uStack_520 = 0;
      ppuStack_538 = &PTR_FUN_110a609a8;
      uStack_530 = 0;
      uStack_518 = 0x271;
      puVar1 = auStack_578;
      func_0x000107c278b8(puVar1,&UNK_10f4b08d1);
      func_0x00010871f21c();
      puVar2 = auStack_590;
      func_0x000107c278b8(puVar2,&UNK_10f4b0628);
      func_0x00010871eda4();
      func_0x000107c28818(puVar1,auStack_590,puVar2);
      func_0x000107c2884c(auStack_560,puVar1);
      func_0x00010871ed74(*(undefined8 *)(*plVar6 + 0x50));
      func_0x00010871ec18();
      func_0x00010871e8e0();
      func_0x00010871f214();
      func_0x00010871e704();
      plVar6 = *(long **)(lVar4 + 0x118);
      uStack_528 = 0;
      uStack_520 = 0;
      ppuStack_538 = &PTR_FUN_110a609a8;
      uStack_530 = 0;
      uStack_518 = 0x270;
      func_0x000107c278b8(auStack_5d0,"skipped");
      pppuVar3 = &ppuStack_538;
      func_0x000107c28818(pppuVar3,auStack_5d0,1);
      func_0x000107c2884c(auStack_5b8,pppuVar3);
      func_0x00010871e274(*(undefined8 *)(*plVar6 + 0x50));
      func_0x000107c2882c(auStack_5b8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_5d0);
      func_0x00010871e704();
    }
    else {
      if (iVar5 != 0) {
        func_0x00010871e99c();
      }
      FUN_1087176dc(auStack_5e8,lVar4,&lStack_58,1,1,3);
      func_0x000107c29108(auStack_5e8);
    }
  }
  func_0x00010871ec54();
  return;
}



/* Entry: 10871b8f4; end: 10871b933;  */

void FUN_10871b8f4(long param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined ***pppuVar3;
  int iVar4;
  long *plVar5;
  undefined1 auStack_5e8 [24];
  undefined1 auStack_5d0 [24];
  undefined1 auStack_5b8 [40];
  undefined1 auStack_590 [24];
  undefined1 auStack_578 [24];
  undefined1 auStack_560 [40];
  undefined **ppuStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined4 uStack_518;
  long *aplStack_2c0 [76];
  char cStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  *(undefined1 *)(param_1 + 0x489) = 1;
  iVar4 = 1;
  FUN_10871b6f8(*(undefined8 *)(param_1 + 0x478));
  func_0x00010871e99c();
  FUN_10871b258();
  func_0x00010871f82c();
  lStack_58 = 0;
  lStack_50 = 0;
  uStack_48 = 0;
  if (*(char *)(param_1 + 0x251) == '\x01') {
    FUN_108719664(aplStack_2c0,param_1 + 0x178);
    if (aplStack_2c0[0] != (long *)0x0) {
      (**(code **)(*aplStack_2c0[0] + 0x18))(&ppuStack_538);
      func_0x00010871f2b0();
      func_0x00010868c8fc(&ppuStack_538);
    }
    FUN_108695f64(aplStack_2c0);
  }
  else {
    FUN_10886cb70(&ppuStack_538,*(undefined8 *)(param_1 + 0xb8));
    func_0x00010871f2b0();
    func_0x00010868c8fc(&ppuStack_538);
  }
  if (lStack_58 != lStack_50) {
    FUN_10886be1c(&ppuStack_538,*(undefined8 *)(param_1 + 0xb8));
    func_0x000107c28db8(aplStack_2c0,&ppuStack_538);
    func_0x000107c28d30(aplStack_2c0);
    func_0x000107c28d4c(&ppuStack_538);
    if (cStack_60 == '\x01') {
      plVar5 = *(long **)(param_1 + 0x118);
      uStack_528 = 0;
      uStack_520 = 0;
      ppuStack_538 = &PTR_FUN_110a609a8;
      uStack_530 = 0;
      uStack_518 = 0x271;
      puVar1 = auStack_578;
      func_0x000107c278b8(puVar1,&UNK_10f4b08d1);
      func_0x00010871f21c();
      puVar2 = auStack_590;
      func_0x000107c278b8(puVar2,&UNK_10f4b0628);
      func_0x00010871eda4();
      func_0x000107c28818(puVar1,auStack_590,puVar2);
      func_0x000107c2884c(auStack_560,puVar1);
      func_0x00010871ed74(*(undefined8 *)(*plVar5 + 0x50));
      func_0x00010871ec18();
      func_0x00010871e8e0();
      func_0x00010871f214();
      func_0x00010871e704();
      plVar5 = *(long **)(param_1 + 0x118);
      uStack_528 = 0;
      uStack_520 = 0;
      ppuStack_538 = &PTR_FUN_110a609a8;
      uStack_530 = 0;
      uStack_518 = 0x270;
      func_0x000107c278b8(auStack_5d0,"skipped");
      pppuVar3 = &ppuStack_538;
      func_0x000107c28818(pppuVar3,auStack_5d0,1);
      func_0x000107c2884c(auStack_5b8,pppuVar3);
      func_0x00010871e274(*(undefined8 *)(*plVar5 + 0x50));
      func_0x000107c2882c(auStack_5b8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_5d0);
      func_0x00010871e704();
    }
    else {
      if (iVar4 != 0) {
        func_0x00010871e99c();
      }
      FUN_1087176dc(auStack_5e8,param_1,&lStack_58,1,1,4);
      func_0x000107c29108(auStack_5e8);
    }
  }
  func_0x00010871ec54();
  return;
}



/* Entry: 10871b934; end: 10871b93b;  */

void FUN_10871b934(long param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined ***pppuVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  undefined1 auStack_5e8 [24];
  undefined1 auStack_5d0 [24];
  undefined1 auStack_5b8 [40];
  undefined1 auStack_590 [24];
  undefined1 auStack_578 [24];
  undefined1 auStack_560 [40];
  undefined **ppuStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined4 uStack_518;
  long *aplStack_2c0 [76];
  char cStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  lVar4 = param_1 + -0x10;
  *(undefined1 *)(param_1 + 0x479) = 1;
  iVar5 = 1;
  FUN_10871b6f8(*(undefined8 *)(param_1 + 0x468));
  func_0x00010871e99c();
  FUN_10871b258();
  func_0x00010871f82c();
  lStack_58 = 0;
  lStack_50 = 0;
  uStack_48 = 0;
  if (*(char *)(lVar4 + 0x251) == '\x01') {
    FUN_108719664(aplStack_2c0,lVar4 + 0x178);
    if (aplStack_2c0[0] != (long *)0x0) {
      (**(code **)(*aplStack_2c0[0] + 0x18))(&ppuStack_538);
      func_0x00010871f2b0();
      func_0x00010868c8fc(&ppuStack_538);
    }
    FUN_108695f64(aplStack_2c0);
  }
  else {
    FUN_10886cb70(&ppuStack_538,*(undefined8 *)(lVar4 + 0xb8));
    func_0x00010871f2b0();
    func_0x00010868c8fc(&ppuStack_538);
  }
  if (lStack_58 != lStack_50) {
    FUN_10886be1c(&ppuStack_538,*(undefined8 *)(lVar4 + 0xb8));
    func_0x000107c28db8(aplStack_2c0,&ppuStack_538);
    func_0x000107c28d30(aplStack_2c0);
    func_0x000107c28d4c(&ppuStack_538);
    if (cStack_60 == '\x01') {
      plVar6 = *(long **)(lVar4 + 0x118);
      uStack_528 = 0;
      uStack_520 = 0;
      ppuStack_538 = &PTR_FUN_110a609a8;
      uStack_530 = 0;
      uStack_518 = 0x271;
      puVar1 = auStack_578;
      func_0x000107c278b8(puVar1,&UNK_10f4b08d1);
      func_0x00010871f21c();
      puVar2 = auStack_590;
      func_0x000107c278b8(puVar2,&UNK_10f4b0628);
      func_0x00010871eda4();
      func_0x000107c28818(puVar1,auStack_590,puVar2);
      func_0x000107c2884c(auStack_560,puVar1);
      func_0x00010871ed74(*(undefined8 *)(*plVar6 + 0x50));
      func_0x00010871ec18();
      func_0x00010871e8e0();
      func_0x00010871f214();
      func_0x00010871e704();
      plVar6 = *(long **)(lVar4 + 0x118);
      uStack_528 = 0;
      uStack_520 = 0;
      ppuStack_538 = &PTR_FUN_110a609a8;
      uStack_530 = 0;
      uStack_518 = 0x270;
      func_0x000107c278b8(auStack_5d0,"skipped");
      pppuVar3 = &ppuStack_538;
      func_0x000107c28818(pppuVar3,auStack_5d0,1);
      func_0x000107c2884c(auStack_5b8,pppuVar3);
      func_0x00010871e274(*(undefined8 *)(*plVar6 + 0x50));
      func_0x000107c2882c(auStack_5b8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_5d0);
      func_0x00010871e704();
    }
    else {
      if (iVar5 != 0) {
        func_0x00010871e99c();
      }
      FUN_1087176dc(auStack_5e8,lVar4,&lStack_58,1,1,4);
      func_0x000107c29108(auStack_5e8);
    }
  }
  func_0x00010871ec54();
  return;
}



/* Entry: 10871b93c; end: 10871bab3;  */

void FUN_10871b93c(long param_1,undefined8 param_2,undefined8 param_3,ulong *param_4)

{
  undefined1 uVar1;
  long *plVar2;
  code *extraout_x8;
  long unaff_x19;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined1 uStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_88;
  long lStack_80;
  long lStack_70;
  long lStack_68;
  long lStack_58;
  long lStack_50;
  
  if ((*(byte *)(param_1 + 0x251) & 1) == 0) {
    func_0x00010871f598();
    uVar1 = *(undefined1 *)(unaff_x19 + 0x252);
    uStack_b0 = uStack_b0 & 0xffffffffffffff00;
    uStack_a8 = (char)param_4[1] == '\x01';
    if ((bool)uStack_a8) {
      uStack_b0 = *param_4;
    }
    func_0x00010871f2a8(&uStack_d0);
    uStack_b8 = uStack_c8;
    uStack_c0 = uStack_d0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    FUN_10868ee74(&lStack_a0,param_3,param_1,uVar1,param_2,&uStack_b0,unaff_x19 + 0xb8,
                  unaff_x19 + 0x118,&uStack_c0,unaff_x19 + 0xa8,unaff_x19 + 0x468);
    func_0x000107c29574(&uStack_c0);
    plVar2 = (long *)0x0;
    func_0x000107c291a8();
    if ((lStack_70 != lStack_68) && (plVar2 = *(long **)(unaff_x19 + 0x448), plVar2 != (long *)0x0))
    {
      func_0x00010871e378();
      (*extraout_x8)();
    }
    if (lStack_a0 != lStack_98) {
      plVar2 = &lStack_a0;
      FUN_108719d30(plVar2,6,unaff_x19 + 200);
    }
    if (lStack_58 != lStack_50) {
      plVar2 = (long *)0x0;
      func_0x00010871f0fc();
    }
    if (lStack_88 != lStack_80) {
      func_0x00010871ed9c();
    }
    func_0x00010871eda4();
    if (((ulong)plVar2 & 1) == 0) {
      FUN_10871aee8();
    }
    FUN_10871c5f4(&lStack_a0);
  }
  return;
}



/* Entry: 10871bab4; end: 10871baeb;  */

void FUN_10871bab4(ulong param_1,int param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined ***pppuVar3;
  long unaff_x19;
  long *plVar4;
  undefined1 auStack_5e8 [24];
  undefined1 auStack_5d0 [24];
  undefined1 auStack_5b8 [40];
  undefined1 auStack_590 [24];
  undefined1 auStack_578 [24];
  undefined1 auStack_560 [40];
  undefined **ppuStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined4 uStack_518;
  long *aplStack_2c0 [76];
  char cStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  func_0x00010871f598();
  if ((param_1 & 1) == 0) {
    func_0x00010871e99c();
    if ((*(byte *)(unaff_x19 + 0x251) & 1) == 0) {
      func_0x00010871f82c();
      lStack_58 = 0;
      lStack_50 = 0;
      uStack_48 = 0;
      if (*(char *)(param_1 + 0x251) == '\x01') {
        FUN_108719664(aplStack_2c0,param_1 + 0x178);
        if (aplStack_2c0[0] != (long *)0x0) {
          (**(code **)(*aplStack_2c0[0] + 0x18))(&ppuStack_538);
          func_0x00010871f2b0();
          func_0x00010868c8fc(&ppuStack_538);
        }
        FUN_108695f64(aplStack_2c0);
      }
      else {
        FUN_10886cb70(&ppuStack_538,*(undefined8 *)(param_1 + 0xb8));
        func_0x00010871f2b0();
        func_0x00010868c8fc(&ppuStack_538);
      }
      if (lStack_58 != lStack_50) {
        FUN_10886be1c(&ppuStack_538,*(undefined8 *)(param_1 + 0xb8));
        func_0x000107c28db8(aplStack_2c0,&ppuStack_538);
        func_0x000107c28d30(aplStack_2c0);
        func_0x000107c28d4c(&ppuStack_538);
        if (cStack_60 == '\x01') {
          plVar4 = *(long **)(param_1 + 0x118);
          uStack_528 = 0;
          uStack_520 = 0;
          ppuStack_538 = &PTR_FUN_110a609a8;
          uStack_530 = 0;
          uStack_518 = 0x271;
          puVar1 = auStack_578;
          func_0x000107c278b8(puVar1,&UNK_10f4b08d1);
          func_0x00010871f21c();
          puVar2 = auStack_590;
          func_0x000107c278b8(puVar2,&UNK_10f4b0628);
          func_0x00010871eda4();
          func_0x000107c28818(puVar1,auStack_590,puVar2);
          func_0x000107c2884c(auStack_560,puVar1);
          func_0x00010871ed74(*(undefined8 *)(*plVar4 + 0x50));
          func_0x00010871ec18();
          func_0x00010871e8e0();
          func_0x00010871f214();
          func_0x00010871e704();
          plVar4 = *(long **)(param_1 + 0x118);
          uStack_528 = 0;
          uStack_520 = 0;
          ppuStack_538 = &PTR_FUN_110a609a8;
          uStack_530 = 0;
          uStack_518 = 0x270;
          func_0x000107c278b8(auStack_5d0,"skipped");
          pppuVar3 = &ppuStack_538;
          func_0x000107c28818(pppuVar3,auStack_5d0,1);
          func_0x000107c2884c(auStack_5b8,pppuVar3);
          func_0x00010871e274(*(undefined8 *)(*plVar4 + 0x50));
          func_0x000107c2882c(auStack_5b8);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_5d0);
          func_0x00010871e704();
        }
        else {
          if (param_2 != 0) {
            func_0x00010871e99c();
          }
          FUN_1087176dc(auStack_5e8,param_1,&lStack_58,1,1,0);
          func_0x000107c29108(auStack_5e8);
        }
      }
      func_0x00010871ec54();
      return;
    }
  }
  return;
}



/* Entry: 10871baec; end: 10871bb03;  */

void FUN_10871baec(long param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined ***pppuVar3;
  long *plVar4;
  undefined1 auStack_5e8 [24];
  undefined1 auStack_5d0 [24];
  undefined1 auStack_5b8 [40];
  undefined1 auStack_590 [24];
  undefined1 auStack_578 [24];
  undefined1 auStack_560 [40];
  undefined **ppuStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined4 uStack_518;
  long *aplStack_2c0 [76];
  char cStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  lStack_58 = 0;
  lStack_50 = 0;
  uStack_48 = 0;
  if (*(char *)(param_1 + 0x251) == '\x01') {
    FUN_108719664(aplStack_2c0,param_1 + 0x178);
    if (aplStack_2c0[0] != (long *)0x0) {
      (**(code **)(*aplStack_2c0[0] + 0x18))(&ppuStack_538);
      func_0x00010871f2b0();
      func_0x00010868c8fc(&ppuStack_538);
    }
    FUN_108695f64(aplStack_2c0);
  }
  else {
    FUN_10886cb70(&ppuStack_538,*(undefined8 *)(param_1 + 0xb8));
    func_0x00010871f2b0();
    func_0x00010868c8fc(&ppuStack_538);
  }
  if (lStack_58 != lStack_50) {
    FUN_10886be1c(&ppuStack_538,*(undefined8 *)(param_1 + 0xb8));
    func_0x000107c28db8(aplStack_2c0,&ppuStack_538);
    func_0x000107c28d30(aplStack_2c0);
    func_0x000107c28d4c(&ppuStack_538);
    if (cStack_60 == '\x01') {
      plVar4 = *(long **)(param_1 + 0x118);
      uStack_528 = 0;
      uStack_520 = 0;
      ppuStack_538 = &PTR_FUN_110a609a8;
      uStack_530 = 0;
      uStack_518 = 0x271;
      puVar1 = auStack_578;
      func_0x000107c278b8(puVar1,&UNK_10f4b08d1);
      func_0x00010871f21c();
      puVar2 = auStack_590;
      func_0x000107c278b8(puVar2,&UNK_10f4b0628);
      func_0x00010871eda4();
      func_0x000107c28818(puVar1,auStack_590,puVar2);
      func_0x000107c2884c(auStack_560,puVar1);
      func_0x00010871ed74(*(undefined8 *)(*plVar4 + 0x50));
      func_0x00010871ec18();
      func_0x00010871e8e0();
      func_0x00010871f214();
      func_0x00010871e704();
      plVar4 = *(long **)(param_1 + 0x118);
      uStack_528 = 0;
      uStack_520 = 0;
      ppuStack_538 = &PTR_FUN_110a609a8;
      uStack_530 = 0;
      uStack_518 = 0x270;
      func_0x000107c278b8(auStack_5d0,"skipped");
      pppuVar3 = &ppuStack_538;
      func_0x000107c28818(pppuVar3,auStack_5d0,1);
      func_0x000107c2884c(auStack_5b8,pppuVar3);
      func_0x00010871e274(*(undefined8 *)(*plVar4 + 0x50));
      func_0x000107c2882c(auStack_5b8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_5d0);
      func_0x00010871e704();
    }
    else {
      func_0x00010871e99c();
      FUN_1087176dc(auStack_5e8,param_1,&lStack_58,1,1,1);
      func_0x000107c29108(auStack_5e8);
    }
  }
  func_0x00010871ec54();
  return;
}



/* Entry: 10871bb04; end: 10871bb17;  */

void FUN_10871bb04(void)

{
  FUN_10871c67c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10871bb18; end: 10871bb6f;  */

void FUN_10871bb18(void)

{
  return;
}



/* Entry: 10871bb70; end: 10871bba3;  */

undefined8 * FUN_10871bb70(undefined8 *param_1,long param_2,long param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10871bba4(param_1,param_2,param_2 + param_3 * 0x378,param_3);
  return param_1;
}



/* Entry: 10871bba4; end: 10871bbff;  */

void FUN_10871bba4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    func_0x00010871ef48();
    func_0x000107c28c0c();
    func_0x000100865634();
    FUN_10871bc00();
  }
  uStack_38 = 1;
  func_0x000107c28c14(&uStack_40);
  return;
}



/* Entry: 10871bc00; end: 10871bc33;  */

void FUN_10871bc00(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  FUN_10871bc34();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10871bc34; end: 10871bc47;  */

void FUN_10871bc34(void)

{
  FUN_10871bc48();
  return;
}



/* Entry: 10871bc48; end: 10871bca7;  */

long FUN_10871bc48(void)

{
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined1 auStack_60 [40];
  long lStack_38;
  
  func_0x00010871e898();
  for (; unaff_x21 != unaff_x19; unaff_x21 = unaff_x21 + 0x378) {
    func_0x00010871ef78();
    func_0x000107c28c10();
    unaff_x20 = lStack_38 + 0x378;
    lStack_38 = unaff_x20;
  }
  func_0x00010871f808();
  func_0x000107c27b0c(auStack_60);
  return unaff_x20;
}



/* Entry: 10871bca8; end: 10871bcc3;  */

void FUN_10871bca8(long param_1)

{
  func_0x000107c291e0();
  *(undefined1 *)(param_1 + 0x3d0) = 1;
  return;
}



/* Entry: 10871bcc4; end: 10871bdd3;  */

long FUN_10871bcc4(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                  undefined1 param_9,undefined4 param_10,undefined2 param_11,undefined4 param_12,
                  long param_13,undefined8 param_14,undefined8 param_15)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107c27994();
  func_0x000107c279d4(lVar1 + 0x18,param_3);
  *(undefined1 *)(param_1 + 0x68) = 0;
  *(undefined1 *)(param_1 + 0x38) = param_4;
  *(undefined8 *)(param_1 + 0x40) = param_5;
  *(undefined8 *)(param_1 + 0x48) = param_6;
  *(undefined8 *)(param_1 + 0x50) = param_7;
  *(undefined4 *)(param_1 + 0x58) = param_8;
  *(undefined1 *)(param_1 + 0x5c) = param_9;
  *(undefined2 *)(param_1 + 0x5d) = param_11;
  *(undefined2 *)(param_1 + 0x5f) = 0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined1 *)(param_1 + 0x88) = 0;
  *(undefined1 *)(param_1 + 0xe0) = 0;
  if (*(char *)(param_13 + 0x58) == '\x01') {
    FUN_1086d7388((undefined1 *)(param_1 + 0x88));
    *(undefined1 *)(param_1 + 0xe0) = 1;
  }
  func_0x000107c279d4(param_1 + 0xe8,param_14);
  *(undefined1 *)(param_1 + 0x108) = 0;
  *(undefined1 *)(param_1 + 0x110) = 0;
  *(undefined1 *)(param_1 + 0x118) = 0;
  *(undefined1 *)(param_1 + 0x120) = 0;
  *(undefined1 *)(param_1 + 0x128) = 0;
  *(undefined1 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = param_15;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(undefined1 *)(param_1 + 0x144) = 0;
  return param_1;
}



/* Entry: 10871bdd4; end: 10871be97;  */

void FUN_10871bdd4(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  func_0x000107c32eb0();
  func_0x000107c27994();
  func_0x000107c279d4(param_1 + 0x18,unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x51);
  *(undefined8 *)(unaff_x19 + 0x59) = *(undefined8 *)(unaff_x20 + 0x59);
  *(undefined8 *)(unaff_x19 + 0x51) = uVar5;
  *(undefined8 *)(unaff_x19 + 0x50) = uVar4;
  *(undefined8 *)(unaff_x19 + 0x48) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x40) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x38) = uVar1;
  FUN_1086852f0(unaff_x19 + 0x68,unaff_x20 + 0x68);
  FUN_10871bed0(unaff_x19 + 0x88,unaff_x20 + 0x88);
  func_0x000107c279d4(unaff_x19 + 0xe8,unaff_x20 + 0xe8);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x110);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x108);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x120);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x118);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x130);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x128);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x135);
  *(undefined8 *)(unaff_x19 + 0x13d) = *(undefined8 *)(unaff_x20 + 0x13d);
  *(undefined8 *)(unaff_x19 + 0x135) = uVar7;
  *(undefined8 *)(unaff_x19 + 0x120) = uVar4;
  *(undefined8 *)(unaff_x19 + 0x118) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x130) = uVar6;
  *(undefined8 *)(unaff_x19 + 0x128) = uVar5;
  *(undefined8 *)(unaff_x19 + 0x110) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x108) = uVar1;
  return;
}



/* Entry: 10871be98; end: 10871becf;  */

long FUN_10871be98(long param_1)

{
  long lStack_28;
  
  func_0x000107c279dc(param_1 + 0xe8);
  FUN_1086d0498(param_1 + 0x88);
  func_0x000104bee748(param_1 + 0x68);
  func_0x00010871f498();
  lStack_28 = param_1;
  func_0x000100100fd4(&lStack_28);
  return param_1;
}



/* Entry: 10871bed0; end: 10871bf13;  */

undefined1 * FUN_10871bed0(undefined1 *param_1,long param_2)

{
  *param_1 = 0;
  param_1[0x58] = 0;
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_10871bf14(param_1);
  }
  return param_1;
}



/* Entry: 10871bf14; end: 10871bf2f;  */

void FUN_10871bf14(long param_1)

{
  FUN_10871bf30();
  *(undefined1 *)(param_1 + 0x58) = 1;
  return;
}



/* Entry: 10871bf30; end: 10871bf6b;  */

void FUN_10871bf30(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  func_0x000107c27994();
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar4 = *(undefined8 *)(param_2 + 0x30);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  uVar6 = *(undefined8 *)(param_2 + 0x40);
  uVar5 = *(undefined8 *)(param_2 + 0x38);
  uVar7 = *(undefined8 *)(param_2 + 0x41);
  *(undefined8 *)(param_1 + 0x49) = *(undefined8 *)(param_2 + 0x49);
  *(undefined8 *)(param_1 + 0x41) = uVar7;
  *(undefined8 *)(param_1 + 0x40) = uVar6;
  *(undefined8 *)(param_1 + 0x38) = uVar5;
  *(undefined8 *)(param_1 + 0x30) = uVar4;
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  return;
}



/* Entry: 10871bf6c; end: 10871bf93;  */

long * FUN_10871bf6c(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  
  for (; (plVar1 = param_2, param_1 != param_2 && (plVar1 = param_1, *param_1 != param_3));
      param_1 = param_1 + 1) {
  }
  return plVar1;
}



/* Entry: 10871bf94; end: 10871c01b;  */

void FUN_10871bf94(long param_1,undefined8 param_2,long param_3,undefined8 *param_4,int param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  if (*(char *)(param_4 + 2) == '\x01') {
    uVar1 = *param_4;
    lVar2 = param_4[1];
    lVar3 = lVar2 / 1000;
  }
  else {
    lVar3 = *(long *)(param_3 + 0xe8);
    if (lVar3 == 0) {
      lVar2 = 0;
      uVar1 = 2;
    }
    else {
      lVar2 = lVar3 * 1000;
      uVar1 = 1;
    }
  }
  FUN_1088460dc(param_1,param_2,0,uVar1,lVar2);
  if (param_5 != 0) {
    if ((*(byte *)(param_1 + 0x1e8) & 1) == 0) {
      *(undefined1 *)(param_1 + 0x1e8) = 1;
    }
    *(long *)(param_1 + 0x1e0) = lVar3;
  }
  return;
}



/* Entry: 10871c01c; end: 10871c0e7;  */

void FUN_10871c01c(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 200) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    func_0x00010871c054();
    *(ulong *)(param_1 + 200) = uVar1;
  }
  return;
}



/* Entry: 10871c0e8; end: 10871c143;  */

void FUN_10871c0e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    func_0x00010871ef48();
    func_0x0001086868fc();
    func_0x000100865634();
    FUN_10871c144();
  }
  uStack_38 = 1;
  func_0x000107c28c24(&uStack_40);
  return;
}



/* Entry: 10871c144; end: 10871c177;  */

void FUN_10871c144(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  FUN_10871c178();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10871c178; end: 10871c18b;  */

void FUN_10871c178(void)

{
  FUN_10871c18c();
  return;
}



/* Entry: 10871c18c; end: 10871c1eb;  */

long FUN_10871c18c(void)

{
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined1 auStack_60 [40];
  long lStack_38;
  
  func_0x00010871e898();
  for (; unaff_x21 != unaff_x19; unaff_x21 = unaff_x21 + 0x20) {
    func_0x00010871ef78();
    FUN_1086869b4();
    unaff_x20 = lStack_38 + 0x20;
    lStack_38 = unaff_x20;
  }
  func_0x00010871f808();
  func_0x000104bf1ee0(auStack_60);
  return unaff_x20;
}


