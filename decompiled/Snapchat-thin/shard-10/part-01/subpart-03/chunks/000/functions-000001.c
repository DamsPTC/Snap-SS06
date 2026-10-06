/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10769bf94; end: 10769c157;  */

/* WARNING: Possible PIC construction at 0x00010769c558: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010769cf64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010769c5ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010769c670: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010769c5f0) */
/* WARNING: Removing unreachable block (ram,0x00010769c5f8) */
/* WARNING: Removing unreachable block (ram,0x00010769cf68) */
/* WARNING: Removing unreachable block (ram,0x00010769cf70) */
/* WARNING: Removing unreachable block (ram,0x00010769c55c) */
/* WARNING: Removing unreachable block (ram,0x00010769c564) */
/* WARNING: Removing unreachable block (ram,0x00010769c674) */
/* WARNING: Removing unreachable block (ram,0x00010769c67c) */
/* WARNING: Removing unreachable block (ram,0x00010769c5bc) */
/* WARNING: Removing unreachable block (ram,0x00010769c5dc) */
/* WARNING: Removing unreachable block (ram,0x00010769c5e4) */
/* WARNING: Removing unreachable block (ram,0x00010769c608) */
/* WARNING: Removing unreachable block (ram,0x00010769c6b4) */
/* WARNING: Removing unreachable block (ram,0x00010769c618) */

void FUN_10769bf94(double param_1,double param_2)

{
  uint uVar1;
  double **ppdVar2;
  double **ppdVar3;
  char in_NG;
  undefined1 in_ZR;
  undefined1 uVar4;
  char in_OV;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  uint extraout_w8;
  uint extraout_w8_00;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 extraout_x8_04;
  int iVar9;
  undefined *unaff_x20;
  double *pdVar10;
  double *pdVar11;
  ulong unaff_x23;
  double *unaff_x24;
  undefined1 *unaff_x27;
  ulong unaff_x28;
  undefined8 **ppuVar12;
  undefined *puVar13;
  double dVar14;
  undefined8 **in_stack_00000120;
  undefined *in_stack_00000128;
  int in_stack_00000148;
  undefined8 in_stack_000001c0;
  double *apdStack_410 [43];
  undefined auStack_2b8 [112];
  undefined1 auStack_248 [168];
  byte bStack_1a0;
  undefined auStack_160 [112];
  byte bStack_f0;
  undefined8 *puStack_b0;
  undefined *puStack_a8;
  double adStack_30 [2];
  undefined8 *puStack_10;
  undefined *puStack_8;
  
  func_0x00010771fbd0();
  func_0x000107707564();
  if ((bRam00000001136d3118 & 1) == 0) {
    iVar9 = 0x136d3118;
    ___cxa_guard_acquire();
    if (iVar9 != 0) {
      func_0x000107708f70(0x113709f20);
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d3120 & 1) == 0) {
    iVar9 = 0x136d3120;
    ___cxa_guard_acquire();
    if (iVar9 != 0) {
      func_0x000107711c50(0x113709f58);
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d3128 & 1) == 0) {
    iVar9 = 0x136d3128;
    ___cxa_guard_acquire();
    if (iVar9 != 0) {
      func_0x000107708fd0(0x113709f90);
      ___cxa_guard_release();
    }
  }
  func_0x0001077091ec();
  in_stack_00000148 = 0;
  func_0x00010770a524();
  func_0x00010770c040();
  func_0x000107714830();
  if (in_stack_00000148 == 0) {
    func_0x000107709348();
    func_0x000107714850();
  }
  func_0x00010770c1c4();
  func_0x00010771a96c();
  if ((bool)in_ZR) {
    func_0x000107718dfc();
    func_0x000107714a5c();
    uVar8 = 0x5b0;
    if ((bool)in_ZR) {
      uVar8 = 0x5e8;
    }
    func_0x0001077113e0(uVar8);
    func_0x00010770eabc();
    func_0x00010770d688();
    func_0x000107714830();
  }
  else {
    func_0x00010770b7b0();
    func_0x00010770cf5c();
    func_0x000107714fdc();
  }
  func_0x000107714850();
  func_0x000107714890();
  func_0x000107715a9c();
  func_0x000107707bc4();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  ___cxa_guard_abort(0x1136d3128);
  func_0x0001077149ec();
  puStack_8 = &DAT_10769c158;
  puStack_10 = &stack0x000001c0;
  func_0x000107708a5c();
  if ((bRam00000001136d3130 & 1) == 0) {
    iVar9 = 0x136d3130;
    ___cxa_guard_acquire();
    if (iVar9 != 0) {
      func_0x000107714998(0x113709fc8,&UNK_10f422a29);
      ___cxa_guard_release(0x1136d3130);
    }
  }
  func_0x00010770d848();
  func_0x00010770c2b4();
  func_0x000107714890();
  func_0x000107707bf0();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  ___cxa_guard_abort(0x1136d3130);
  func_0x0001077149ec();
  puVar5 = &DAT_10769c1f0;
  func_0x00010771fbd0();
  in_stack_00000120 = &puStack_10;
  in_stack_00000128 = puVar5;
  func_0x000107707564();
  if ((bRam00000001136d3138 & 1) == 0) {
    puVar5 = (undefined *)0x1136d3138;
    ___cxa_guard_acquire();
    if ((int)puVar5 != 0) {
      func_0x000107708f70(0x11370a000);
      puVar5 = (undefined *)0x1136d3138;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d3140 & 1) == 0) {
    puVar5 = (undefined *)0x1136d3140;
    ___cxa_guard_acquire();
    if ((int)puVar5 != 0) {
      func_0x000107714998(0x11370a038,&UNK_10f422a3c);
      puVar5 = (undefined *)0x1136d3140;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d3148 & 1) == 0) {
    puVar5 = (undefined *)0x1136d3148;
    ___cxa_guard_acquire();
    if ((int)puVar5 != 0) {
      func_0x000107714998(0x11370a070,&UNK_10f422a29);
      puVar5 = (undefined *)0x1136d3148;
      ___cxa_guard_release();
    }
  }
  func_0x0001077091ec();
  pdVar11 = adStack_30;
  func_0x00010770a524();
  func_0x00010770c040();
  func_0x000107714830();
  func_0x000107709348();
  func_0x000107714850();
  pdVar10 = adStack_30;
  func_0x00010770c1c4();
  func_0x00010771a96c();
  if ((bool)in_ZR) {
    func_0x000107718dfc();
    func_0x0001077125e4();
    uVar8 = 0x690;
    if ((bool)in_ZR) {
      uVar8 = extraout_x8;
    }
    func_0x0001077113e0(uVar8);
    func_0x00010770eabc();
    func_0x00010770d688();
    func_0x000107714830();
  }
  else {
    func_0x00010770b7b0();
    func_0x00010770cf5c();
    func_0x000107714fdc();
  }
  func_0x000107714850();
  func_0x000107714890();
  func_0x000107715a9c();
  func_0x000107707bc4();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  ___cxa_guard_abort(0x1136d3148);
  func_0x0001077149ec();
  puStack_a8 = &DAT_10769c3c0;
  ppuVar12 = &puStack_b0;
  ppdVar2 = apdStack_410;
  ppdVar3 = apdStack_410;
  puStack_b0 = &stack0x00000120;
  func_0x000107707564();
  if ((bRam00000001136d3150 & 1) == 0) {
    iVar9 = 0x136d3150;
    ___cxa_guard_acquire();
    if (iVar9 != 0) {
      func_0x000107714a18(0x11370a0a8,&UNK_10f40b483);
      ___cxa_guard_release(0x1136d3150);
    }
  }
  if ((bRam00000001136d3158 & 1) == 0) {
    iVar9 = 0x136d3158;
    ___cxa_guard_acquire();
    if (iVar9 != 0) {
      func_0x000107714a08(0x11370a0e0,&DAT_10f40b3d9);
      ___cxa_guard_release(0x1136d3158);
    }
  }
  if ((bRam00000001136d3160 & 1) == 0) {
    iVar9 = 0x136d3160;
    ___cxa_guard_acquire();
    if (iVar9 != 0) {
      func_0x000107708bb0(0x11370a118);
      ___cxa_guard_release(0x1136d3160);
    }
  }
  if ((bRam00000001136d3168 & 1) == 0) {
    iVar9 = 0x136d3168;
    ___cxa_guard_acquire();
    if (iVar9 != 0) {
      func_0x000107714b90(0x11370a150,&DAT_10f40b3e5);
      ___cxa_guard_release(0x1136d3168);
    }
  }
  if ((bRam00000001136d3170 & 1) == 0) {
    iVar9 = 0x136d3170;
    ___cxa_guard_acquire();
    if (iVar9 != 0) {
      func_0x0001077149b4(0x11370a188,&DAT_10f40b3ec);
      ___cxa_guard_release(0x1136d3170);
    }
  }
  if ((bRam00000001136d3178 & 1) == 0) {
    iVar9 = 0x136d3178;
    ___cxa_guard_acquire();
    if (iVar9 != 0) {
      func_0x000107714a38(0x11370a1c0,&UNK_10f422a4f);
      ___cxa_guard_release(0x1136d3178);
    }
  }
  if ((bRam00000001136d3180 & 1) == 0) {
    iVar9 = 0x136d3180;
    ___cxa_guard_acquire();
    if (iVar9 != 0) {
      func_0x000107714a40(0x11370a1f8,&DAT_10f40b3f1);
      ___cxa_guard_release(0x1136d3180);
    }
  }
  if ((bRam00000001136d3188 & 1) == 0) {
    iVar9 = 0x136d3188;
    ___cxa_guard_acquire();
    if (iVar9 != 0) {
      func_0x000107714a18(0x11370a230,&UNK_10f422a57);
      ___cxa_guard_release(0x1136d3188);
    }
  }
  if ((bRam00000001136d3190 & 1) == 0) {
    iVar9 = 0x136d3190;
    ___cxa_guard_acquire();
    if (iVar9 != 0) {
      func_0x000107714f84(0x11370a268,&DAT_10f40b40a);
      ___cxa_guard_release(0x1136d3190);
    }
  }
  if ((bRam00000001136d3198 & 1) == 0) {
    iVar9 = 0x136d3198;
    ___cxa_guard_acquire();
    if (iVar9 != 0) {
      func_0x000107714ac4(0x11370a2a0,&DAT_10f40b419);
      ___cxa_guard_release(0x1136d3198);
    }
  }
  if ((bRam00000001136d31a0 & 1) == 0) {
    iVar9 = 0x136d31a0;
    ___cxa_guard_acquire();
    if (iVar9 != 0) {
      func_0x000107714aa0(0x11370a2d8,&DAT_10f40b42e);
      ___cxa_guard_release(0x1136d31a0);
    }
  }
  if ((bRam00000001136d31a8 & 1) == 0) {
    iVar9 = 0x136d31a8;
    ___cxa_guard_acquire();
    if (iVar9 != 0) {
      func_0x0001077149b4(0x11370a310,&DAT_10f40b434);
      ___cxa_guard_release(0x1136d31a8);
    }
  }
  if ((bRam00000001136d31b0 & 1) == 0) {
    iVar9 = 0x136d31b0;
    ___cxa_guard_acquire();
    if (iVar9 != 0) {
      func_0x000107714a38(0x11370a348,&UNK_10f422a69);
      ___cxa_guard_release(0x1136d31b0);
    }
  }
  if ((bRam00000001136d31b8 & 1) == 0) {
    iVar9 = 0x136d31b8;
    ___cxa_guard_acquire();
    if (iVar9 != 0) {
      func_0x000107714aa0(0x11370a380,&DAT_10f40b439);
      ___cxa_guard_release(0x1136d31b8);
    }
  }
  if ((bRam00000001136d31c0 & 1) == 0) {
    iVar9 = 0x136d31c0;
    ___cxa_guard_acquire();
    if (iVar9 != 0) {
      func_0x000107714aa0(0x11370a3b8,&DAT_10f40b43f);
      ___cxa_guard_release(0x1136d31c0);
    }
  }
  if ((bRam00000001136d31c8 & 1) == 0) {
    iVar9 = 0x136d31c8;
    ___cxa_guard_acquire();
    if (iVar9 != 0) {
      func_0x000107714d24(0x11370a3f0,&DAT_10f2cb5f1);
      ___cxa_guard_release(0x1136d31c8);
    }
  }
  if ((bRam00000001136d31d0 & 1) == 0) {
    iVar9 = 0x136d31d0;
    ___cxa_guard_acquire();
    if (iVar9 != 0) {
      func_0x0001077149b4(0x11370a428,"cold");
      ___cxa_guard_release(0x1136d31d0);
    }
  }
  if ((bRam00000001136d31d8 & 1) == 0) {
    iVar9 = 0x136d31d8;
    ___cxa_guard_acquire();
    if (iVar9 != 0) {
      func_0x0001077160c8(0x11370a460,&UNK_10f422a71);
      ___cxa_guard_release(0x1136d31d8);
    }
  }
  if ((bRam00000001136d31e0 & 1) == 0) {
    iVar9 = 0x136d31e0;
    ___cxa_guard_acquire();
    if (iVar9 != 0) {
      func_0x0001077149b4(0x11370a498,&DAT_10f3b7c24);
      ___cxa_guard_release(0x1136d31e0);
    }
  }
  if ((bRam00000001136d31e8 & 1) == 0) {
    iVar9 = 0x136d31e8;
    ___cxa_guard_acquire();
    if (iVar9 != 0) {
      func_0x0001077142ac(0x11370a4d0);
      ___cxa_guard_release(0x1136d31e8);
    }
  }
  if ((bRam00000001136d31f0 & 1) == 0) {
    iVar9 = 0x136d31f0;
    ___cxa_guard_acquire();
    if (iVar9 != 0) {
      func_0x00010771429c(0x11370a508);
      ___cxa_guard_release(0x1136d31f0);
    }
  }
  if ((bRam00000001136d31f8 & 1) == 0) {
    iVar9 = 0x136d31f8;
    ___cxa_guard_acquire();
    if (iVar9 != 0) {
      func_0x000107714b38(0x11370a540,&UNK_10f4180ea);
      ___cxa_guard_release(0x1136d31f8);
    }
  }
  auStack_160[0] = 0;
  bStack_f0 = 0;
  apdStack_410[0] = pdVar10;
  func_0x000107712468();
  if ((bStack_f0 & 1) == 0) {
    func_0x000107714df0();
    puVar13 = &UNK_10769c55c;
    ppdVar3 = apdStack_410;
    puVar6 = unaff_x20;
    goto code_r0x00010769cd6c;
  }
  puVar6 = auStack_160;
  func_0x000107579140();
  if ((int)puVar6 == 0) {
    func_0x000107717d04();
    func_0x00010771490c();
    func_0x0001077148e0(auStack_248);
    puVar6 = auStack_2b8;
    func_0x00010770c178();
    unaff_x23 = 0;
    func_0x000107719228();
    func_0x00010770c8b0();
    iVar9 = (int)unaff_x20;
    if ((bStack_1a0 & 1) == 0) {
      func_0x000107716870();
      puVar13 = &UNK_10769c674;
      puVar6 = unaff_x20;
      goto code_r0x00010769cf3c;
    }
    func_0x00010771fb7c();
    func_0x00010770cf28();
    func_0x00010771c744();
    if ((bool)in_ZR) {
      func_0x0001077171ec();
      func_0x00010771e3c8();
    }
    else {
      func_0x00010770b878();
      func_0x00010770dfa4();
      func_0x000107715378();
    }
    func_0x000107714850();
    in_OV = SBORROW4(iVar9,3);
    in_NG = iVar9 + -3 < 0;
    in_ZR = iVar9 == 3;
    if ((bool)in_ZR) {
      func_0x00010771dd98();
      func_0x000107715fdc();
      func_0x000107715624();
      goto code_r0x00010769c6d8;
    }
    func_0x000107715fdc();
    func_0x000107715624();
  }
  else {
    func_0x00010771eab8();
    func_0x00010771bca8();
code_r0x00010769c6d8:
    func_0x00010771c3c4();
    func_0x0001077137cc();
    func_0x000107714890();
  }
  func_0x000107718c38();
  func_0x000107719e88();
  func_0x000107707bc4();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  ___cxa_guard_abort(0x1136d31f8);
  puVar13 = &UNK_10769cd6c;
  func_0x000107714988();
code_r0x00010769cd6c:
  do {
    ppdVar2 = (double **)((long)ppdVar3 + -0x1d0);
    *(ulong *)((long)ppdVar3 + -0x30) = unaff_x28;
    *(undefined1 **)((long)ppdVar3 + -0x28) = unaff_x27;
    *(undefined **)((long)ppdVar3 + -0x20) = puVar6;
    *(undefined **)((long)ppdVar3 + -0x18) = puVar5;
    *(undefined8 ***)((long)ppdVar3 + -0x10) = ppuVar12;
    *(undefined **)((long)ppdVar3 + -8) = puVar13;
    ppuVar12 = (undefined8 **)((long)ppdVar3 + -0x10);
    func_0x000107707ddc();
    *(undefined8 *)((long)ppdVar3 + -0x38) = extraout_x8_00;
    func_0x00010771490c();
    puVar5 = (undefined *)((long)ppdVar3 + -0xe0);
    func_0x0001077148e0();
    func_0x00010771e0e0();
    func_0x00010771e55c();
    func_0x000107714890();
    func_0x0001077182e0();
    if ((bool)in_ZR) {
      func_0x000107717024();
      func_0x00010770c29c(puVar5);
      iVar9 = *(int *)((long)ppdVar3 + -0x40);
      in_OV = SBORROW4(iVar9,3);
      in_NG = iVar9 + -3 < 0;
      in_ZR = iVar9 == 3;
      if (!(bool)in_ZR) goto code_r0x00010769ce0c;
      puVar6 = (undefined *)((long)ppdVar3 + -0xa8);
      func_0x00010732393c();
      puVar5 = puVar6;
      func_0x000104c32db4();
      if ((((ulong)puVar5 & 1) == 0) && (func_0x0001077150f4(), ((ulong)puVar5 & 1) == 0)) {
        func_0x0001077150f4();
        if ((((ulong)puVar5 & 1) == 0) && (func_0x0001077150f4(), ((ulong)puVar5 & 1) == 0)) {
          func_0x0001077150f4();
          if ((((ulong)puVar5 & 1) == 0) && (func_0x0001077150f4(), ((ulong)puVar5 & 1) == 0)) {
            func_0x0001077150f4();
            if ((((ulong)puVar5 & 1) != 0) || (func_0x0001077150f4(), ((ulong)puVar5 & 1) != 0))
            goto code_r0x00010769ce00;
            func_0x0001077150f4();
            if ((((ulong)puVar5 & 1) == 0) && (func_0x0001077150f4(), ((ulong)puVar5 & 1) == 0)) {
              func_0x0001077150f4();
              func_0x00010771eab8();
              if (((ulong)puVar5 & 1) != 0) goto code_r0x00010769ce00;
              func_0x0001077150f4();
            }
          }
          goto code_r0x00010769cdfc;
        }
      }
      else {
code_r0x00010769cdfc:
        func_0x00010771eab8();
      }
code_r0x00010769ce00:
      func_0x00010771c920();
    }
    else {
      *(undefined4 *)((long)ppdVar3 + -0x40) = 0;
code_r0x00010769ce0c:
      func_0x00010771eab8();
      func_0x00010771c920();
    }
    func_0x00010771af7c();
    func_0x000107579a48();
    func_0x00010770d688();
    func_0x000107714890();
    func_0x000107712800();
    func_0x00010770ed2c();
    func_0x000107715e10();
    func_0x000107707e80();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010770ed2c();
    func_0x000107715e10();
    puVar13 = &UNK_10769cf3c;
    func_0x0001077149ec();
code_r0x00010769cf3c:
    ppdVar3 = (double **)((long)ppdVar2 + -400);
    *(double **)((long)ppdVar2 + -0x30) = pdVar11;
    *(double **)((long)ppdVar2 + -0x28) = pdVar10;
    *(undefined **)((long)ppdVar2 + -0x20) = puVar6;
    *(undefined **)((long)ppdVar2 + -0x18) = puVar5;
    *(undefined8 ***)((long)ppdVar2 + -0x10) = ppuVar12;
    *(undefined **)((long)ppdVar2 + -8) = puVar13;
    ppuVar12 = (undefined8 **)((long)ppdVar2 + -0x10);
    func_0x000107707ddc();
    func_0x00010771fbf0();
    if ((extraout_x8_01 & 1) != 0) break;
    puVar13 = &UNK_10769cf68;
  } while( true );
  func_0x0001077153a8();
  func_0x000104c2fe00();
  func_0x00010771e184();
  func_0x000104c2fe00(&stack0x00000040,0x11370a498);
  func_0x000107717054((undefined1 *)((long)ppdVar2 + -0xe0));
  func_0x00010771c114();
  func_0x0001077148fc();
  func_0x000107714890();
  func_0x0001077150e4();
  func_0x000107715ca8();
  func_0x000107707e80();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010770c1e8();
  func_0x000107714988();
  puVar6 = &DAT_10769cff0;
  func_0x0001077184d0();
  *(undefined8 ***)((long)ppdVar2 + -0x140) = ppuVar12;
  *(undefined **)((long)ppdVar2 + -0x138) = puVar6;
  func_0x000107707444();
  *(undefined8 *)((long)ppdVar2 + -0x1a0) = extraout_x8_02;
  if ((bRam00000001136d3200 & 1) == 0) {
    iVar9 = 0x136d3200;
    ___cxa_guard_acquire();
    if (iVar9 != 0) {
      func_0x000107714a40(0x11370a578,&DAT_10f2e8c7d);
      ___cxa_guard_release(0x1136d3200);
    }
  }
  puVar7 = (undefined1 *)((long)ppdVar2 + -0x220);
  func_0x000107707bdc(puVar7);
  func_0x00010771841c();
  if ((bool)in_ZR) {
    func_0x000107717e2c();
    unaff_x24 = (double *)0x0;
    func_0x00010770c254(puVar7);
    puVar7 = (undefined1 *)((long)ppdVar2 + -0x310);
    func_0x000107579140();
    if (((ulong)puVar7 & 1) == 0) {
      func_0x0001077077b8();
      func_0x000107714898();
      if (!(bool)in_ZR) {
        func_0x000107714848();
        func_0x000107714cec();
        goto code_r0x00010769d1b4;
      }
      func_0x000107714870();
      func_0x00010770c494(puVar7);
      func_0x000107579140((undefined1 *)((long)ppdVar2 + -0x4e0));
      func_0x00010770d854();
      func_0x000107714858();
      func_0x000107714848();
      func_0x00010770eef4();
      if ((unaff_x23 & 1) != 0) goto code_r0x00010769d058;
      puVar7 = (undefined1 *)((long)ppdVar2 + -0x220);
      func_0x000107707bdc(puVar7);
      func_0x00010771841c();
      if (!(bool)in_ZR) goto code_r0x00010769d1a8;
      func_0x000107717e2c();
      unaff_x23 = 0;
      func_0x00010770c30c(puVar7);
      func_0x00010770d308((undefined1 *)((long)ppdVar2 + -0x310));
      func_0x000107718900();
      if ((bool)in_ZR) {
        puVar7 = (undefined1 *)((long)ppdVar2 + -0x310);
        func_0x0001073405dc(puVar7);
        func_0x00010770c254(puVar7);
        func_0x00010770d658();
        func_0x00010771125c();
        func_0x0001077169e8();
        func_0x000107715f10((undefined1 *)((long)ppdVar2 + -0x4e0),
                            (undefined1 *)((long)ppdVar2 + -0x3f0),
                            (undefined1 *)((long)ppdVar2 + -0x460));
        func_0x00010771f5e0();
        if ((bool)in_ZR) {
          func_0x00010771bb24();
          func_0x00010756e584();
          func_0x000107714974();
          if ((bool)in_ZR) {
            puVar7 = (undefined1 *)((long)ppdVar2 + -0x560);
            func_0x000107707d58(puVar7);
            func_0x000107719e10();
            if ((bool)in_ZR) {
              func_0x000107718d84();
              pdVar11 = (double *)((long)ppdVar2 + -0x5d0);
              func_0x00010770cc44(puVar7);
              puVar7 = (undefined1 *)((long)ppdVar2 + -0x650);
              func_0x00010770d308(puVar7);
              func_0x000107717374();
              if ((bool)in_ZR) {
                func_0x000107716514();
                func_0x00010770d6dc(puVar7);
                func_0x00010770d8d4((undefined1 *)((long)ppdVar2 + -0x730));
                func_0x00010770d94c((undefined1 *)((long)ppdVar2 + -0x7a0));
                func_0x00010770b04c();
                func_0x000107714898();
                if ((bool)in_ZR) {
                  func_0x000107716800();
                  func_0x000107714870();
                  func_0x00010756e584();
                  func_0x000107713b1c();
                  uVar1 = 0;
                  if ((bool)in_ZR) {
                    uVar1 = extraout_w8;
                  }
                  unaff_x28 = (ulong)uVar1;
                  func_0x000107714858();
                }
                else {
                  func_0x000107716800();
                  func_0x00010771c3d4();
                }
                func_0x000107714830();
                func_0x000107714850();
                func_0x00010770cc80();
              }
              else {
                unaff_x27 = (undefined1 *)((long)ppdVar2 + -0x5d0);
                func_0x00010770c1d0((undefined1 *)((long)ppdVar2 + -0x650));
                func_0x000107716d58();
              }
              func_0x00010770eb74();
              func_0x0001077148e8();
            }
            else {
              func_0x00010770c1d0((undefined1 *)((long)ppdVar2 + -0x560));
              func_0x000107716d58();
            }
            func_0x0001077100ec();
          }
          else {
            func_0x00010771c558();
          }
        }
        else {
          func_0x00010770c1d0((undefined1 *)((long)ppdVar2 + -0x4e0));
          func_0x000107716d58();
        }
        func_0x000107712e18();
        func_0x000107714888();
        func_0x000107714860();
        func_0x000107714848();
      }
      else {
        func_0x00010770c1d0((undefined1 *)((long)ppdVar2 + -0x310));
        func_0x000107716d58();
      }
      unaff_x24 = (double *)0x0;
      func_0x000107714868((undefined1 *)((long)ppdVar2 + -0x310));
      func_0x000107714838();
      func_0x00010770eef4();
      if ((unaff_x28 & 1) == 0) goto code_r0x00010769d058;
    }
    else {
      func_0x000107714848();
      func_0x00010770eef4();
code_r0x00010769d058:
      unaff_x24 = (double *)0x0;
      pdVar10 = (double *)((long)ppdVar2 + -0x220);
      func_0x00010770e1f4();
      func_0x000107714850();
    }
  }
  else {
code_r0x00010769d1a8:
    func_0x00010770d24c();
code_r0x00010769d1b4:
    func_0x00010727f7f8();
  }
  func_0x000107707e08();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  ___cxa_guard_abort(0x1136d3200);
  func_0x000107714988();
  puVar6 = &DAT_10769d3a0;
  func_0x0001077184d0();
  *(undefined1 **)((long)ppdVar2 + -0x750) = (undefined1 *)((long)ppdVar2 + -0x140);
  *(undefined **)((long)ppdVar2 + -0x748) = puVar6;
  func_0x000107707444();
  *(undefined8 *)((long)ppdVar2 + -0x7b0) = extraout_x8_03;
  if ((bRam00000001136d3208 & 1) == 0) {
    iVar9 = 0x136d3208;
    ___cxa_guard_acquire();
    if (iVar9 != 0) {
      func_0x000107714a40(0x11370a5b0,&DAT_10f2e8c7d);
      ___cxa_guard_release(0x1136d3208);
    }
  }
  puVar7 = (undefined1 *)((long)ppdVar2 + -0x830);
  func_0x000107707bdc(puVar7);
  func_0x00010771841c();
  if ((bool)in_ZR) {
    func_0x000107717e2c();
    unaff_x24 = (double *)0x0;
    func_0x00010770c254(puVar7);
    puVar7 = (undefined1 *)((long)ppdVar2 + -0x920);
    func_0x000107579140();
    if (((ulong)puVar7 & 1) == 0) {
      func_0x0001077077b8();
      func_0x000107714898();
      if (!(bool)in_ZR) {
        func_0x000107714848();
        func_0x000107714cec();
        goto code_r0x00010769d570;
      }
      func_0x000107714870();
      func_0x00010770c494(puVar7);
      puVar7 = (undefined1 *)((long)ppdVar2 + -0xaf0);
      func_0x000107579140();
      func_0x00010770d854();
      func_0x000107714858();
      func_0x000107714848();
      func_0x00010770eef4();
      if ((unaff_x23 & 1) != 0) goto code_r0x00010769d408;
      puVar7 = (undefined1 *)((long)ppdVar2 + -0x830);
      func_0x000107707bdc(puVar7);
      func_0x00010771841c();
      if (!(bool)in_ZR) goto code_r0x00010769d564;
      func_0x000107717e2c();
      func_0x00010770c30c(puVar7);
      puVar7 = (undefined1 *)((long)ppdVar2 + -0x920);
      func_0x00010770d308();
      func_0x000107718900();
      if ((bool)in_ZR) {
        puVar7 = (undefined1 *)((long)ppdVar2 + -0x920);
        func_0x0001073405dc(puVar7);
        func_0x00010770c254(puVar7);
        func_0x00010770d658();
        func_0x00010771125c();
        func_0x000107714eec();
        puVar7 = (undefined1 *)((long)ppdVar2 + -0xaf0);
        func_0x000107714ccc(puVar7,(undefined1 *)((long)ppdVar2 + -0xa00),
                            (undefined1 *)((long)ppdVar2 + -0xa70));
        func_0x00010771f5e0();
        if ((bool)in_ZR) {
          func_0x00010771bb24();
          func_0x00010756e584();
          func_0x000107714974();
          if ((bool)in_ZR) {
            puVar7 = (undefined1 *)((long)ppdVar2 + -0xb70);
            func_0x000107707d58();
            func_0x000107719e10();
            if ((bool)in_ZR) {
              func_0x000107718d84();
              pdVar11 = (double *)((long)ppdVar2 + -0xbe0);
              func_0x00010770cc44(puVar7);
              puVar7 = (undefined1 *)((long)ppdVar2 + -0xc60);
              func_0x00010770d308();
              func_0x000107717374();
              if ((bool)in_ZR) {
                func_0x000107716514();
                func_0x00010770d6dc(puVar7);
                func_0x00010770d8d4((undefined1 *)((long)ppdVar2 + -0xd40));
                func_0x00010770d94c((undefined1 *)((long)ppdVar2 + -0xdb0));
                func_0x0001077169e8();
                func_0x000107711298();
                func_0x000107714898();
                if ((bool)in_ZR) {
                  func_0x000107716800();
                  func_0x000107714870();
                  func_0x00010756e584();
                  func_0x000107713b1c();
                  uVar1 = 0;
                  if ((bool)in_ZR) {
                    uVar1 = extraout_w8_00;
                  }
                  unaff_x28 = (ulong)uVar1;
                  func_0x000107714858();
                }
                else {
                  func_0x000107716800();
                  func_0x00010771c3d4();
                }
                func_0x000107714830();
                func_0x000107714850();
                func_0x00010770cc80();
              }
              else {
                unaff_x27 = (undefined1 *)((long)ppdVar2 + -0xbe0);
                func_0x00010770c1d0((undefined1 *)((long)ppdVar2 + -0xc60));
                func_0x000107716d58();
              }
              func_0x00010770eb74();
              func_0x0001077148e8();
            }
            else {
              func_0x00010770c1d0((undefined1 *)((long)ppdVar2 + -0xb70));
              func_0x000107716d58();
            }
            func_0x0001077100ec();
          }
          else {
            func_0x00010771c558();
          }
        }
        else {
          func_0x00010770c1d0((undefined1 *)((long)ppdVar2 + -0xaf0));
          func_0x000107716d58();
        }
        func_0x000107712e18();
        func_0x000107714888();
        func_0x000107714860();
        func_0x000107714848();
      }
      else {
        func_0x00010770c1d0((undefined1 *)((long)ppdVar2 + -0x920));
        func_0x000107716d58();
      }
      unaff_x24 = (double *)0x0;
      func_0x000107714868((undefined1 *)((long)ppdVar2 + -0x920));
      func_0x000107714838();
      func_0x00010770eef4();
      if ((unaff_x28 & 1) == 0) goto code_r0x00010769d408;
    }
    else {
      func_0x000107714848();
      func_0x00010770eef4();
code_r0x00010769d408:
      unaff_x24 = (double *)0x0;
      pdVar10 = (double *)((long)ppdVar2 + -0x830);
      func_0x00010770e1f4();
      func_0x000107714850();
    }
  }
  else {
code_r0x00010769d564:
    func_0x00010770d24c();
    puVar7 = (undefined1 *)((long)ppdVar2 + -0x828);
code_r0x00010769d570:
    func_0x00010727f7f8();
  }
  func_0x000107707e08();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  uVar8 = 0x1136d3208;
  ___cxa_guard_abort(0x1136d3208);
  func_0x000107714988();
  *(ulong *)((long)ppdVar2 + -0xdf0) = unaff_x28;
  *(undefined1 **)((long)ppdVar2 + -0xde8) = unaff_x27;
  *(double **)((long)ppdVar2 + -0xde0) = pdVar11;
  *(double **)((long)ppdVar2 + -0xdd8) = pdVar10;
  *(undefined1 **)((long)ppdVar2 + -0xdd0) = puVar7;
  *(undefined **)((long)ppdVar2 + -0xdc8) = puVar5;
  *(undefined1 **)((long)ppdVar2 + -0xdc0) = (undefined1 *)((long)ppdVar2 + -0x750);
  *(code **)((long)ppdVar2 + -0xdb8) = FUN_10769d75c;
  func_0x000107707ba8();
  if ((bRam00000001136d3210 & 1) == 0) {
    uVar8 = 0x1136d3210;
    ___cxa_guard_acquire();
    if ((int)uVar8 != 0) {
      func_0x000107713844(0x11370a5e8);
      uVar8 = 0x1136d3210;
      ___cxa_guard_release(0x1136d3210);
    }
  }
  if ((bRam00000001136d3218 & 1) == 0) {
    uVar8 = 0x1136d3218;
    ___cxa_guard_acquire();
    if ((int)uVar8 != 0) {
      func_0x000107719a1c();
      func_0x000107711554();
      func_0x00010770a15c();
      func_0x00010770e828();
      func_0x000107714850();
      func_0x000107715284();
      func_0x000107711554();
      func_0x00010770a15c();
      func_0x00010770e828();
      func_0x000107714850();
      func_0x000107715284();
      func_0x000107711554();
      func_0x00010770a15c();
      func_0x00010770e828();
      func_0x000107714850();
      func_0x000107715284();
      func_0x000107711554();
      func_0x00010770a15c();
      func_0x00010770e828();
      func_0x000107714850();
      func_0x000107715284();
      func_0x000107712b20();
      func_0x00010770c94c(0x113724d00);
      func_0x000107716af8();
      uVar8 = 0x1136d3218;
      ___cxa_guard_release(0x1136d3218);
    }
  }
  *(undefined4 *)((long)ppdVar2 + -0xe00) = 0;
  func_0x00010770eaac();
  func_0x00010770c1b8();
  func_0x000107714830();
  if (*(int *)((long)ppdVar2 + -0xe00) == 0) {
    func_0x00010770c914();
    func_0x000107714890();
  }
  func_0x000107710194();
  func_0x00010771d128();
  if ((bool)in_ZR) {
    func_0x00010771ae68();
    func_0x000107714ec4();
    func_0x00010771901c();
    param_1 = (double)(long)(param_1 / param_2);
    param_2 = 0.25;
    func_0x000107719058();
    func_0x00010770e974();
    func_0x00010771ade8();
    func_0x0001077182e0();
    if ((bool)in_ZR) {
      func_0x000107717024();
      func_0x00010770cc44(uVar8);
      func_0x00010770e718();
      func_0x000107714830();
      pdVar11 = (double *)((long)ppdVar2 + -0xfd0);
    }
    else {
      func_0x00010770c1d0((undefined1 *)((long)ppdVar2 + -0xf60));
    }
    func_0x00010770ed2c();
  }
  else {
    func_0x00010770fc9c();
    func_0x00010770d148();
    func_0x000107714cac();
  }
  func_0x000107714890();
  func_0x000107714850();
  func_0x000107707bc4();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010770cc20();
  func_0x000107715284();
  func_0x000107716af8();
  ___cxa_guard_abort(0x1136d3218);
  func_0x0001077149ec();
  puVar5 = &DAT_10769d9b8;
  func_0x000107717e8c();
  *(undefined1 **)((long)ppdVar2 + -0xf60) = (undefined1 *)((long)ppdVar2 + -0xdc0);
  *(undefined **)((long)ppdVar2 + -0xf58) = puVar5;
  func_0x000107707ae4();
  *(undefined8 *)((long)ppdVar2 + -0xfe0) = extraout_x8_04;
  if ((bRam00000001136d3220 & 1) == 0) {
    iVar9 = 0x136d3220;
    ___cxa_guard_acquire();
    if (iVar9 != 0) {
      func_0x00010770bd90(0x11370a620);
      ___cxa_guard_release(0x1136d3220);
    }
  }
  if ((bRam00000001136d3228 & 1) == 0) {
    iVar9 = 0x136d3228;
    ___cxa_guard_acquire();
    if (iVar9 != 0) {
      func_0x00010770d06c(0x11370a658);
      ___cxa_guard_release(0x1136d3228);
    }
  }
  if ((bRam00000001136d3230 & 1) == 0) {
    iVar9 = 0x136d3230;
    ___cxa_guard_acquire();
    if (iVar9 != 0) {
      func_0x00010770a504(0x11370a690);
      ___cxa_guard_release(0x1136d3230);
    }
  }
  if ((bRam00000001136d3238 & 1) == 0) {
    iVar9 = 0x136d3238;
    ___cxa_guard_acquire();
    if (iVar9 != 0) {
      func_0x00010770a1d0(0x11370a6c8);
      ___cxa_guard_release(0x1136d3238);
    }
  }
  if ((bRam00000001136d3240 & 1) == 0) {
    iVar9 = 0x136d3240;
    ___cxa_guard_acquire();
    if (iVar9 != 0) {
      func_0x00010770d05c(0x11370a700);
      ___cxa_guard_release(0x1136d3240);
    }
  }
  if ((bRam00000001136d3248 & 1) == 0) {
    iVar9 = 0x136d3248;
    ___cxa_guard_acquire();
    if (iVar9 != 0) {
      func_0x00010770a514(0x11370a738);
      ___cxa_guard_release(0x1136d3248);
    }
  }
  if ((bRam00000001136d3250 & 1) == 0) {
    iVar9 = 0x136d3250;
    ___cxa_guard_acquire();
    if (iVar9 != 0) {
      func_0x00010770b67c(0x11370a770);
      ___cxa_guard_release(0x1136d3250);
    }
  }
  if ((bRam00000001136d3258 & 1) == 0) {
    iVar9 = 0x136d3258;
    ___cxa_guard_acquire();
    if (iVar9 != 0) {
      func_0x00010770be14(0x11370a7a8);
      ___cxa_guard_release(0x1136d3258);
    }
  }
  if ((bRam00000001136d3260 & 1) == 0) {
    iVar9 = 0x136d3260;
    ___cxa_guard_acquire();
    if (iVar9 != 0) {
      func_0x00010770be04(0x11370a7e0);
      ___cxa_guard_release(0x1136d3260);
    }
  }
  if ((bRam00000001136d3268 & 1) == 0) {
    iVar9 = 0x136d3268;
    ___cxa_guard_acquire();
    if (iVar9 != 0) {
      func_0x00010770bdf4(0x11370a818);
      ___cxa_guard_release(0x1136d3268);
    }
  }
  if ((bRam00000001136d3270 & 1) == 0) {
    iVar9 = 0x136d3270;
    ___cxa_guard_acquire();
    if (iVar9 != 0) {
      func_0x00010770bde4(0x11370a850);
      ___cxa_guard_release(0x1136d3270);
    }
  }
  if ((bRam00000001136d3278 & 1) == 0) {
    iVar9 = 0x136d3278;
    ___cxa_guard_acquire();
    if (iVar9 != 0) {
      func_0x00010770bdd4(0x11370a888);
      ___cxa_guard_release(0x1136d3278);
    }
  }
  func_0x0001077148ac((undefined1 *)((long)ppdVar2 + -0x1050));
  func_0x0001072ddd58((undefined1 *)((long)ppdVar2 + -0x10c0),0x11370a658);
  puVar7 = (undefined1 *)((long)ppdVar2 + -0x1050);
  func_0x00010745fc58(puVar7,(undefined1 *)((long)ppdVar2 + -0x10c0));
  if ((int)puVar7 == 0) {
    func_0x00010770f7b8();
    func_0x00010771ad54();
    func_0x00010770c8b0();
    if ((int)pdVar11 == 0) {
      *(undefined4 *)((long)ppdVar2 + -0x1300) = 0;
      func_0x00010770ecf0();
      func_0x00010770c2cc();
      func_0x000107714838();
      if (*(int *)((long)ppdVar2 + -0x1300) == 0) {
        func_0x000107716dac();
        func_0x00010770c2cc();
        func_0x000107714838();
      }
      func_0x00010770c4e8();
      func_0x000107719c0c();
      if ((bool)in_ZR) {
        func_0x0001077182b8();
        func_0x00010770d7b4();
        if ((bool)in_OV) {
          func_0x000107711fc0();
          goto code_r0x00010769dcd4;
        }
        func_0x000107716678();
        if (in_NG == in_OV) goto code_r0x00010769debc;
        func_0x000107717f48();
        if ((bool)in_NG) {
code_r0x00010769dc88:
          unaff_x24 = (double *)0x1;
        }
        else {
          func_0x000107716668();
          if ((bool)in_NG) {
            func_0x000107708f20();
            if ((bool)in_ZR) goto code_r0x00010769dc88;
            func_0x000107715190();
            if (!(bool)in_ZR) {
              func_0x0001077081e8();
              goto code_r0x00010769debc;
            }
code_r0x00010769de8c:
            func_0x00010771f90c();
          }
          else {
            func_0x000107716658();
            if ((bool)in_NG) {
              func_0x00010770865c();
              if ((bool)in_ZR) goto code_r0x00010769de8c;
              func_0x000107715190();
              if ((bool)in_ZR) goto code_r0x00010769de7c;
              func_0x000107707f98();
            }
            else {
              func_0x00010770bda0();
              if ((bool)in_ZR) {
code_r0x00010769de7c:
                func_0x00010771f900();
                goto code_r0x00010769dec0;
              }
              func_0x000107715190();
              if (!(bool)in_ZR) {
                func_0x00010770cd4c();
                func_0x000107718180();
              }
            }
code_r0x00010769debc:
            unaff_x24 = (double *)0x1;
          }
        }
      }
      else {
        func_0x00010770ca9c();
code_r0x00010769dcd4:
        func_0x00010770f488();
        func_0x0001077159c0();
        func_0x00010771c500();
      }
code_r0x00010769dec0:
      func_0x000107714838();
      goto code_r0x00010769dec8;
    }
    func_0x00010770f7b8();
    func_0x00010771afa0();
    if ((bool)in_ZR) {
      pdVar10 = (double *)((long)ppdVar2 + -0x1130);
      func_0x00010770c394();
      func_0x000107719c0c();
      if ((bool)in_ZR) {
        func_0x0001077182b8();
        func_0x00010770d7b4();
        if ((bool)in_OV) {
          func_0x000107711fc0();
          goto code_r0x00010769dce8;
        }
        func_0x000107712d18();
        if ((in_NG != in_OV) && (func_0x000107713270(), !(bool)in_NG)) {
          func_0x0001077162e4();
          if ((bool)in_NG) {
            param_2 = 1.60185815079703e-314;
            func_0x00010770996c();
            func_0x00010770b36c();
            if ((!(bool)in_ZR) && (func_0x000107713e04(), !(bool)in_ZR)) {
              func_0x00010770b398();
            }
          }
          else {
            func_0x000107708e54();
            func_0x000107709630();
            func_0x00010771a8b8();
            if ((!(bool)in_ZR) && (func_0x000107715190(), !(bool)in_ZR)) {
              func_0x00010770bae8();
            }
          }
        }
        *(undefined4 *)((long)ppdVar2 + -0x1138) = 0;
        func_0x00010770efb0();
        func_0x00010770d358();
        func_0x000107714830();
        if (*(int *)((long)ppdVar2 + -0x1138) == 0) {
          func_0x00010771cc34();
          func_0x00010770d358();
          func_0x000107714830();
        }
        pdVar11 = (double *)0x0;
        func_0x00010770c3f4();
        iVar9 = *(int *)((long)ppdVar2 + -0x11a8);
        in_OV = SBORROW4(iVar9,2);
        in_NG = iVar9 + -2 < 0;
        in_ZR = iVar9 == 2;
        if ((bool)in_ZR) {
          *(undefined4 *)((long)ppdVar2 + -0x1218) = 0;
          func_0x00010770dbb0();
          func_0x00010770e5f8();
          func_0x000107714830();
          if (*(int *)((long)ppdVar2 + -0x1218) == 0) {
            func_0x00010771310c();
            func_0x00010770e5f8();
            func_0x000107714830();
          }
          pdVar11 = (double *)0x0;
          func_0x00010770d748();
          func_0x000107719cf0();
          if ((bool)in_ZR) {
            func_0x00010771e2d8();
            func_0x000107718208();
            param_1 = *pdVar10;
            func_0x00010770bfc8();
            if ((bool)in_OV) {
              func_0x000107715230();
              func_0x000100060964((undefined1 *)((long)ppdVar2 + -0x13d8));
              pdVar11 = pdVar10;
              goto code_r0x00010769de48;
            }
            func_0x00010770ffac();
            if ((in_NG != in_OV) && (func_0x00010770ff84(), !(bool)in_NG)) {
              func_0x000107709778();
              func_0x00010770b600();
              if ((!(bool)in_ZR) && (func_0x0001077176e4(), !(bool)in_ZR)) {
                func_0x000107709f90();
              }
            }
            func_0x0001077191d8();
            func_0x000107715654();
            pdVar11 = (double *)0x1;
          }
          else {
            func_0x000107714934();
            func_0x000107715694((undefined1 *)((long)ppdVar2 + -0x13d8));
code_r0x00010769de48:
            func_0x00010770f228();
            func_0x00010771626c();
            func_0x00010771c50c();
          }
          func_0x000107714888();
          func_0x000107714860();
        }
        else {
          func_0x000107711ad0();
          func_0x000107718158();
          func_0x00010770edcc();
          func_0x000107716338();
          func_0x00010771c50c();
        }
        func_0x000107714838();
        func_0x000107714848();
      }
      else {
        func_0x00010770ca9c();
code_r0x00010769dce8:
        func_0x00010770f488();
        func_0x0001077159c0();
        func_0x00010771c50c();
      }
      func_0x00010770dd28();
    }
    else {
      func_0x0001077116d8();
      func_0x00010771625c();
      func_0x00010770eee8();
      func_0x00010771628c();
      func_0x00010771c50c();
    }
    func_0x00010770fa90();
    unaff_x24 = pdVar11;
  }
  else {
    *(undefined4 *)((long)ppdVar2 + -0x1300) = 0;
    func_0x00010770ecf0();
    func_0x00010770c1dc();
    func_0x000107714830();
    if (*(int *)((long)ppdVar2 + -0x1300) == 0) {
      func_0x000107716dac();
      func_0x00010770c1dc();
      func_0x000107714830();
    }
    func_0x00010770c230();
    func_0x000107719c0c();
    if ((bool)in_ZR) {
      func_0x00010770c394((undefined1 *)((long)ppdVar2 + -0x11a0));
      func_0x00010771d284();
      if ((bool)in_ZR) {
        func_0x00010771ac9c();
        func_0x00010770d7b4();
        if ((bool)in_OV) {
          func_0x000107715230();
          func_0x00010771e2e0();
          goto code_r0x00010769dc9c;
        }
        func_0x000107711a44();
        if ((((in_NG != in_OV) && (func_0x000107711a28(), !(bool)in_NG)) &&
            (func_0x000107711678(), !(bool)in_ZR)) && (func_0x000107715190(), !(bool)in_ZR)) {
          func_0x00010770a6f4();
        }
        func_0x0001077182b8();
        func_0x000107718614();
        unaff_x24 = (double *)0x1;
      }
      else {
        func_0x000107714934();
        func_0x00010770de9c();
code_r0x00010769dc9c:
        func_0x00010770d934();
        func_0x0001077156d8();
        func_0x00010771c500();
      }
      func_0x00010770d440();
    }
    else {
      func_0x00010770ca9c();
      func_0x00010770f488();
      func_0x0001077159c0();
      func_0x00010771c500();
    }
    func_0x000107714830();
code_r0x00010769dec8:
    func_0x00010726af18((undefined1 *)((long)ppdVar2 + -0x1360));
  }
  if (((ulong)unaff_x24 & 1) == 0) goto code_r0x00010769e1cc;
  *(undefined4 *)((long)ppdVar2 + -0x10c8) = 0;
  pdVar10 = (double *)((long)ppdVar2 + -0x1368);
  func_0x00010770c394();
  func_0x00010770c2cc();
  func_0x000107714838();
  if (*(int *)((long)ppdVar2 + -0x10c8) == 0) {
    func_0x000107716688();
    func_0x00010770c51c();
    func_0x000107714850();
  }
  func_0x00010770ce14();
  func_0x00010771d284();
  if (!(bool)in_ZR) {
    func_0x000107714934();
    func_0x0001077156c0((undefined1 *)((long)ppdVar2 + -0x1368));
    uVar4 = in_ZR;
    goto code_r0x00010769e030;
  }
  func_0x00010771ac9c();
  func_0x00010770d7b4();
  if ((bool)in_OV) goto code_r0x00010769e400;
  func_0x00010771bacc();
  if (((in_NG != in_OV) && (func_0x0001077166fc(), !(bool)in_NG)) &&
     ((func_0x00010770fa78(), !(bool)in_ZR && (func_0x000107715190(), !(bool)in_ZR)))) {
    func_0x00010770cd4c();
  }
  *(undefined4 *)((long)ppdVar2 + -0x11a8) = 0;
  func_0x00010770f7b8();
  func_0x00010770c2e4();
  func_0x000107714848();
  if (*(int *)((long)ppdVar2 + -0x11a8) == 0) {
    func_0x00010771cfc0();
    func_0x000107714f6c();
    func_0x00010769e6a0();
    func_0x000107714898();
    uVar4 = in_ZR;
    if ((bool)in_ZR) {
      func_0x000107714870();
      func_0x000107718804();
      func_0x000107714858();
      func_0x00010771191c();
      func_0x00010770c8e0();
      func_0x000107715c18();
      param_1 = 2.5;
      if (((ulong)pdVar10 & 1) != 0) {
code_r0x00010769e140:
        param_1 = param_1 * 5.0;
        *(double *)((long)ppdVar2 + -0x13d0) = param_1;
        func_0x00010771caac();
        func_0x00010770e8cc();
        func_0x000107714888();
        func_0x000107714860();
        func_0x000107714848();
        func_0x000107717188();
        goto code_r0x00010769df88;
      }
      if ((*(byte *)((long)ppdVar2 + -0x12f8) & 1) == 0) {
        func_0x000107714f6c();
        func_0x00010769e6a0();
        func_0x000107714898();
        uVar4 = false;
        if ((bool)in_ZR) {
          func_0x000107714870();
          func_0x000107718804();
          func_0x000107714858();
          goto code_r0x00010769e0c0;
        }
      }
      else {
code_r0x00010769e0c0:
        func_0x00010770d8c8();
        iVar9 = *(int *)((long)ppdVar2 + -0x1370);
        if (iVar9 == 2) {
          func_0x00010771acf0();
          param_1 = *pdVar10;
        }
        else {
          func_0x000107712164();
          func_0x0001077145dc();
          func_0x000107717bd0();
          param_1 = 0.0;
        }
        func_0x0001077148e8();
        in_ZR = iVar9 == 2;
        uVar4 = in_ZR;
        if ((bool)in_ZR) goto code_r0x00010769e140;
      }
      func_0x000107714860();
      func_0x000107714848();
    }
    func_0x000107717188();
    goto code_r0x00010769e1c0;
  }
code_r0x00010769df88:
  func_0x00010770c454();
  func_0x000107719040();
  if ((bool)in_ZR) {
    func_0x00010771cfc0();
    func_0x000107714f6c();
    func_0x00010769e8b8();
    func_0x000107714898();
    uVar4 = 0;
    if ((bool)in_ZR) {
      func_0x000107714870();
      func_0x000107718804();
      func_0x000107714858();
      func_0x00010771310c();
      func_0x00010770e690();
      pdVar10 = (double *)((long)ppdVar2 + -0x12f0);
      func_0x000107719d28();
      dVar14 = 2.5;
      if (((ulong)pdVar10 & 1) == 0) {
        if ((*(byte *)((long)ppdVar2 + -0x12f8) & 1) == 0) {
          func_0x000107714f6c();
          func_0x00010769e8b8();
          func_0x000107714898();
          uVar4 = 0;
          if ((bool)in_ZR) {
            func_0x000107714870();
            func_0x000107718804();
            func_0x000107714858();
            goto code_r0x00010769e008;
          }
        }
        else {
code_r0x00010769e008:
          func_0x00010770f7f4();
          func_0x000107719b98();
          if ((bool)in_ZR) {
            func_0x000107716360();
            dVar14 = *pdVar10;
          }
          else {
            func_0x000107708a34();
            func_0x00010770cf5c();
            func_0x000107714fdc();
            dVar14 = 0.0;
          }
          func_0x00010771492c();
          uVar4 = 0;
          if ((int)(undefined1 *)((long)ppdVar2 + -0xed8) == 2) goto code_r0x00010769e0fc;
        }
      }
      else {
code_r0x00010769e0fc:
        func_0x0001077172c0();
        func_0x00010771a6b4();
        uVar4 = dVar14 == 0.0;
        if ((bool)uVar4) {
          uVar4 = param_2 == 0.0;
          if ((bool)uVar4) {
            func_0x00010771bb34();
            dVar14 = param_2;
          }
          else {
            dVar14 = INFINITY;
            if (param_2 <= 0.0) {
              dVar14 = -INFINITY;
            }
          }
        }
        else {
          dVar14 = param_2 / dVar14;
        }
        func_0x0001077167c4();
        *(double *)((long)ppdVar2 + -0x1440) = param_1 + dVar14 * 1.5;
        func_0x00010770b6ac(2);
        func_0x000107714890();
      }
      func_0x000107714888();
      func_0x000107714860();
    }
    func_0x000107717188();
    in_ZR = uVar4;
  }
  else {
    func_0x000107714934();
    func_0x0001077156d0((undefined1 *)((long)ppdVar2 + -0x1368));
    func_0x00010770fed0();
    func_0x000107715fd4();
  }
  func_0x000107714848();
  uVar4 = in_ZR;
code_r0x00010769e1c0:
  func_0x000107714838();
  while( true ) {
    func_0x000107714850();
    func_0x000107714830();
    in_ZR = uVar4;
code_r0x00010769e1cc:
    func_0x00010770e6c4();
    func_0x0001077137d8();
    func_0x000107708a48(*(undefined8 *)((long)ppdVar2 + -0xfe0));
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
code_r0x00010769e400:
    func_0x000107715230();
    func_0x00010771e33c();
    uVar4 = in_ZR;
code_r0x00010769e030:
    func_0x00010770fed0();
    func_0x000107715fd4();
  }
  return;
}



/* Entry: 10769d75c; end: 10769d9b7;  */

void FUN_10769d75c(undefined8 param_1,double param_2,undefined8 param_3)

{
  char in_NG;
  undefined1 in_ZR;
  undefined1 uVar1;
  char in_OV;
  int iVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  double *pdVar5;
  undefined8 extraout_x8;
  undefined1 *unaff_x22;
  undefined1 *unaff_x24;
  double dVar6;
  undefined1 auStack_628 [8];
  double dStack_620;
  int iStack_5c0;
  double dStack_5b8;
  undefined1 auStack_5b0 [96];
  int iStack_550;
  byte bStack_548;
  double adStack_540 [27];
  int iStack_468;
  int iStack_3f8;
  undefined1 auStack_3f0 [104];
  int iStack_388;
  int iStack_318;
  undefined1 auStack_310 [112];
  undefined1 auStack_2a0 [112];
  undefined8 uStack_230;
  undefined1 auStack_220 [112];
  undefined1 *puStack_1b0;
  undefined *puStack_1a8;
  undefined1 auStack_128 [216];
  int iStack_50;
  
  func_0x000107707ba8();
  if ((bRam00000001136d3210 & 1) == 0) {
    param_3 = 0x1136d3210;
    ___cxa_guard_acquire();
    if ((int)param_3 != 0) {
      func_0x000107713844(0x11370a5e8);
      param_3 = 0x1136d3210;
      ___cxa_guard_release(0x1136d3210);
    }
  }
  if ((bRam00000001136d3218 & 1) == 0) {
    param_3 = 0x1136d3218;
    ___cxa_guard_acquire();
    if ((int)param_3 != 0) {
      func_0x000107719a1c();
      func_0x000107711554();
      func_0x00010770a15c();
      func_0x00010770e828();
      func_0x000107714850();
      func_0x000107715284();
      func_0x000107711554();
      func_0x00010770a15c();
      func_0x00010770e828();
      func_0x000107714850();
      func_0x000107715284();
      func_0x000107711554();
      func_0x00010770a15c();
      func_0x00010770e828();
      func_0x000107714850();
      func_0x000107715284();
      func_0x000107711554();
      func_0x00010770a15c();
      func_0x00010770e828();
      func_0x000107714850();
      func_0x000107715284();
      func_0x000107712b20();
      func_0x00010770c94c(0x113724d00);
      func_0x000107716af8();
      param_3 = 0x1136d3218;
      ___cxa_guard_release(0x1136d3218);
    }
  }
  iStack_50 = 0;
  func_0x00010770eaac();
  func_0x00010770c1b8();
  func_0x000107714830();
  if (iStack_50 == 0) {
    func_0x00010770c914();
    func_0x000107714890();
  }
  func_0x000107710194();
  func_0x00010771d128();
  if ((bool)in_ZR) {
    func_0x00010771ae68();
    func_0x000107714ec4();
    func_0x00010771901c();
    param_2 = 0.25;
    func_0x000107719058();
    func_0x00010770e974();
    func_0x00010771ade8();
    func_0x0001077182e0();
    if ((bool)in_ZR) {
      func_0x000107717024();
      func_0x00010770cc44(param_3);
      func_0x00010770e718();
      func_0x000107714830();
      unaff_x22 = auStack_220;
    }
    else {
      func_0x00010770c1d0(&puStack_1b0);
    }
    func_0x00010770ed2c();
  }
  else {
    func_0x00010770fc9c();
    func_0x00010770d148();
    func_0x000107714cac();
  }
  func_0x000107714890();
  func_0x000107714850();
  func_0x000107707bc4();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010770cc20();
  func_0x000107715284();
  func_0x000107716af8();
  ___cxa_guard_abort(0x1136d3218);
  func_0x0001077149ec();
  puVar3 = &DAT_10769d9b8;
  func_0x000107717e8c();
  puStack_1b0 = &stack0xfffffffffffffff0;
  puStack_1a8 = puVar3;
  func_0x000107707ae4();
  uStack_230 = extraout_x8;
  if ((bRam00000001136d3220 & 1) == 0) {
    iVar2 = 0x136d3220;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x00010770bd90(0x11370a620);
      ___cxa_guard_release(0x1136d3220);
    }
  }
  if ((bRam00000001136d3228 & 1) == 0) {
    iVar2 = 0x136d3228;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x00010770d06c(0x11370a658);
      ___cxa_guard_release(0x1136d3228);
    }
  }
  if ((bRam00000001136d3230 & 1) == 0) {
    iVar2 = 0x136d3230;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x00010770a504(0x11370a690);
      ___cxa_guard_release(0x1136d3230);
    }
  }
  if ((bRam00000001136d3238 & 1) == 0) {
    iVar2 = 0x136d3238;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x00010770a1d0(0x11370a6c8);
      ___cxa_guard_release(0x1136d3238);
    }
  }
  if ((bRam00000001136d3240 & 1) == 0) {
    iVar2 = 0x136d3240;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x00010770d05c(0x11370a700);
      ___cxa_guard_release(0x1136d3240);
    }
  }
  if ((bRam00000001136d3248 & 1) == 0) {
    iVar2 = 0x136d3248;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x00010770a514(0x11370a738);
      ___cxa_guard_release(0x1136d3248);
    }
  }
  if ((bRam00000001136d3250 & 1) == 0) {
    iVar2 = 0x136d3250;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x00010770b67c(0x11370a770);
      ___cxa_guard_release(0x1136d3250);
    }
  }
  if ((bRam00000001136d3258 & 1) == 0) {
    iVar2 = 0x136d3258;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x00010770be14(0x11370a7a8);
      ___cxa_guard_release(0x1136d3258);
    }
  }
  if ((bRam00000001136d3260 & 1) == 0) {
    iVar2 = 0x136d3260;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x00010770be04(0x11370a7e0);
      ___cxa_guard_release(0x1136d3260);
    }
  }
  if ((bRam00000001136d3268 & 1) == 0) {
    iVar2 = 0x136d3268;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x00010770bdf4(0x11370a818);
      ___cxa_guard_release(0x1136d3268);
    }
  }
  if ((bRam00000001136d3270 & 1) == 0) {
    iVar2 = 0x136d3270;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x00010770bde4(0x11370a850);
      ___cxa_guard_release(0x1136d3270);
    }
  }
  if ((bRam00000001136d3278 & 1) == 0) {
    iVar2 = 0x136d3278;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x00010770bdd4(0x11370a888);
      ___cxa_guard_release(0x1136d3278);
    }
  }
  func_0x0001077148ac(auStack_2a0);
  func_0x0001072ddd58(auStack_310,0x11370a658);
  puVar4 = auStack_2a0;
  func_0x00010745fc58(puVar4,auStack_310);
  if ((int)puVar4 == 0) {
    func_0x00010770f7b8();
    func_0x00010771ad54();
    func_0x00010770c8b0();
    if ((int)unaff_x22 == 0) {
      iStack_550 = 0;
      func_0x00010770ecf0();
      func_0x00010770c2cc();
      func_0x000107714838();
      if (iStack_550 == 0) {
        func_0x000107716dac();
        func_0x00010770c2cc();
        func_0x000107714838();
      }
      func_0x00010770c4e8();
      func_0x000107719c0c();
      if ((bool)in_ZR) {
        func_0x0001077182b8();
        func_0x00010770d7b4();
        if ((bool)in_OV) {
          func_0x000107711fc0();
          goto code_r0x00010769dcd4;
        }
        func_0x000107716678();
        if (in_NG == in_OV) goto code_r0x00010769debc;
        func_0x000107717f48();
        if ((bool)in_NG) {
code_r0x00010769dc88:
          unaff_x24 = (undefined1 *)0x1;
        }
        else {
          func_0x000107716668();
          if ((bool)in_NG) {
            func_0x000107708f20();
            if ((bool)in_ZR) goto code_r0x00010769dc88;
            func_0x000107715190();
            if (!(bool)in_ZR) {
              func_0x0001077081e8();
              goto code_r0x00010769debc;
            }
code_r0x00010769de8c:
            func_0x00010771f90c();
          }
          else {
            func_0x000107716658();
            if ((bool)in_NG) {
              func_0x00010770865c();
              if ((bool)in_ZR) goto code_r0x00010769de8c;
              func_0x000107715190();
              if ((bool)in_ZR) goto code_r0x00010769de7c;
              func_0x000107707f98();
            }
            else {
              func_0x00010770bda0();
              if ((bool)in_ZR) {
code_r0x00010769de7c:
                func_0x00010771f900();
                goto code_r0x00010769dec0;
              }
              func_0x000107715190();
              if (!(bool)in_ZR) {
                func_0x00010770cd4c();
                func_0x000107718180();
              }
            }
code_r0x00010769debc:
            unaff_x24 = (undefined1 *)0x1;
          }
        }
      }
      else {
        func_0x00010770ca9c();
code_r0x00010769dcd4:
        func_0x00010770f488();
        func_0x0001077159c0();
        func_0x00010771c500();
      }
code_r0x00010769dec0:
      func_0x000107714838();
      goto code_r0x00010769dec8;
    }
    func_0x00010770f7b8();
    func_0x00010771afa0();
    if ((bool)in_ZR) {
      puVar4 = (undefined1 *)0x0;
      func_0x00010770c394();
      func_0x000107719c0c();
      if ((bool)in_ZR) {
        func_0x0001077182b8();
        func_0x00010770d7b4();
        if ((bool)in_OV) {
          func_0x000107711fc0();
          goto code_r0x00010769dce8;
        }
        func_0x000107712d18();
        if ((in_NG != in_OV) && (func_0x000107713270(), !(bool)in_NG)) {
          func_0x0001077162e4();
          if ((bool)in_NG) {
            param_2 = 1.60185815079703e-314;
            func_0x00010770996c();
            func_0x00010770b36c();
            if ((!(bool)in_ZR) && (func_0x000107713e04(), !(bool)in_ZR)) {
              func_0x00010770b398();
            }
          }
          else {
            func_0x000107708e54();
            func_0x000107709630();
            func_0x00010771a8b8();
            if ((!(bool)in_ZR) && (func_0x000107715190(), !(bool)in_ZR)) {
              func_0x00010770bae8();
            }
          }
        }
        iStack_388 = 0;
        func_0x00010770efb0();
        func_0x00010770d358();
        func_0x000107714830();
        if (iStack_388 == 0) {
          func_0x00010771cc34();
          func_0x00010770d358();
          func_0x000107714830();
        }
        unaff_x22 = (undefined1 *)0x0;
        func_0x00010770c3f4();
        in_OV = SBORROW4(iStack_3f8,2);
        in_NG = iStack_3f8 + -2 < 0;
        in_ZR = iStack_3f8 == 2;
        if ((bool)in_ZR) {
          iStack_468 = 0;
          func_0x00010770dbb0();
          func_0x00010770e5f8();
          func_0x000107714830();
          if (iStack_468 == 0) {
            func_0x00010771310c();
            func_0x00010770e5f8();
            func_0x000107714830();
          }
          unaff_x22 = (undefined1 *)0x0;
          func_0x00010770d748();
          func_0x000107719cf0();
          if ((bool)in_ZR) {
            func_0x00010771e2d8();
            func_0x000107718208();
            func_0x00010770bfc8();
            if ((bool)in_OV) {
              func_0x000107715230();
              func_0x000100060964(auStack_628);
              unaff_x22 = puVar4;
              goto code_r0x00010769de48;
            }
            func_0x00010770ffac();
            if ((in_NG != in_OV) && (func_0x00010770ff84(), !(bool)in_NG)) {
              func_0x000107709778();
              func_0x00010770b600();
              if ((!(bool)in_ZR) && (func_0x0001077176e4(), !(bool)in_ZR)) {
                func_0x000107709f90();
              }
            }
            func_0x0001077191d8();
            func_0x000107715654();
            unaff_x22 = (undefined1 *)0x1;
          }
          else {
            func_0x000107714934();
            func_0x000107715694(auStack_628);
code_r0x00010769de48:
            func_0x00010770f228();
            func_0x00010771626c();
            func_0x00010771c50c();
          }
          func_0x000107714888();
          func_0x000107714860();
        }
        else {
          func_0x000107711ad0();
          func_0x000107718158();
          func_0x00010770edcc();
          func_0x000107716338();
          func_0x00010771c50c();
        }
        func_0x000107714838();
        func_0x000107714848();
      }
      else {
        func_0x00010770ca9c();
code_r0x00010769dce8:
        func_0x00010770f488();
        func_0x0001077159c0();
        func_0x00010771c50c();
      }
      func_0x00010770dd28();
    }
    else {
      func_0x0001077116d8();
      func_0x00010771625c();
      func_0x00010770eee8();
      func_0x00010771628c();
      func_0x00010771c50c();
    }
    func_0x00010770fa90();
    unaff_x24 = unaff_x22;
  }
  else {
    iStack_550 = 0;
    func_0x00010770ecf0();
    func_0x00010770c1dc();
    func_0x000107714830();
    if (iStack_550 == 0) {
      func_0x000107716dac();
      func_0x00010770c1dc();
      func_0x000107714830();
    }
    func_0x00010770c230();
    func_0x000107719c0c();
    if ((bool)in_ZR) {
      func_0x00010770c394(auStack_3f0);
      func_0x00010771d284();
      if ((bool)in_ZR) {
        func_0x00010771ac9c();
        func_0x00010770d7b4();
        if ((bool)in_OV) {
          func_0x000107715230();
          func_0x00010771e2e0();
          goto code_r0x00010769dc9c;
        }
        func_0x000107711a44();
        if ((((in_NG != in_OV) && (func_0x000107711a28(), !(bool)in_NG)) &&
            (func_0x000107711678(), !(bool)in_ZR)) && (func_0x000107715190(), !(bool)in_ZR)) {
          func_0x00010770a6f4();
        }
        func_0x0001077182b8();
        func_0x000107718614();
        unaff_x24 = (undefined1 *)0x1;
      }
      else {
        func_0x000107714934();
        func_0x00010770de9c();
code_r0x00010769dc9c:
        func_0x00010770d934();
        func_0x0001077156d8();
        func_0x00010771c500();
      }
      func_0x00010770d440();
    }
    else {
      func_0x00010770ca9c();
      func_0x00010770f488();
      func_0x0001077159c0();
      func_0x00010771c500();
    }
    func_0x000107714830();
code_r0x00010769dec8:
    func_0x00010726af18(auStack_5b0);
  }
  if (((ulong)unaff_x24 & 1) == 0) goto code_r0x00010769e1cc;
  iStack_318 = 0;
  pdVar5 = &dStack_5b8;
  func_0x00010770c394();
  func_0x00010770c2cc();
  func_0x000107714838();
  if (iStack_318 == 0) {
    func_0x000107716688();
    func_0x00010770c51c();
    func_0x000107714850();
  }
  func_0x00010770ce14();
  func_0x00010771d284();
  if (!(bool)in_ZR) {
    func_0x000107714934();
    func_0x0001077156c0(&dStack_5b8);
    uVar1 = in_ZR;
    goto code_r0x00010769e030;
  }
  func_0x00010771ac9c();
  func_0x00010770d7b4();
  if ((bool)in_OV) goto code_r0x00010769e400;
  func_0x00010771bacc();
  if (((in_NG != in_OV) && (func_0x0001077166fc(), !(bool)in_NG)) &&
     ((func_0x00010770fa78(), !(bool)in_ZR && (func_0x000107715190(), !(bool)in_ZR)))) {
    func_0x00010770cd4c();
  }
  iStack_3f8 = 0;
  func_0x00010770f7b8();
  func_0x00010770c2e4();
  func_0x000107714848();
  if (iStack_3f8 == 0) {
    func_0x00010771cfc0();
    func_0x000107714f6c();
    func_0x00010769e6a0();
    func_0x000107714898();
    uVar1 = in_ZR;
    if ((bool)in_ZR) {
      func_0x000107714870();
      func_0x000107718804();
      func_0x000107714858();
      func_0x00010771191c();
      func_0x00010770c8e0();
      func_0x000107715c18();
      dVar6 = 2.5;
      if (((ulong)pdVar5 & 1) != 0) {
code_r0x00010769e140:
        dStack_620 = dVar6 * 5.0;
        func_0x00010771caac();
        func_0x00010770e8cc();
        func_0x000107714888();
        func_0x000107714860();
        func_0x000107714848();
        func_0x000107717188();
        goto code_r0x00010769df88;
      }
      if ((bStack_548 & 1) == 0) {
        func_0x000107714f6c();
        func_0x00010769e6a0();
        func_0x000107714898();
        uVar1 = false;
        if ((bool)in_ZR) {
          func_0x000107714870();
          func_0x000107718804();
          func_0x000107714858();
          goto code_r0x00010769e0c0;
        }
      }
      else {
code_r0x00010769e0c0:
        func_0x00010770d8c8();
        if (iStack_5c0 == 2) {
          func_0x00010771acf0();
          dVar6 = *pdVar5;
        }
        else {
          func_0x000107712164();
          func_0x0001077145dc();
          func_0x000107717bd0();
          dVar6 = 0.0;
        }
        func_0x0001077148e8();
        in_ZR = iStack_5c0 == 2;
        uVar1 = in_ZR;
        if ((bool)in_ZR) goto code_r0x00010769e140;
      }
      func_0x000107714860();
      func_0x000107714848();
    }
    func_0x000107717188();
    goto code_r0x00010769e1c0;
  }
code_r0x00010769df88:
  func_0x00010770c454();
  func_0x000107719040();
  if ((bool)in_ZR) {
    func_0x00010771cfc0();
    func_0x000107714f6c();
    func_0x00010769e8b8();
    func_0x000107714898();
    uVar1 = 0;
    if ((bool)in_ZR) {
      func_0x000107714870();
      func_0x000107718804();
      func_0x000107714858();
      func_0x00010771310c();
      func_0x00010770e690();
      pdVar5 = adStack_540;
      func_0x000107719d28();
      dVar6 = 2.5;
      if (((ulong)pdVar5 & 1) == 0) {
        if ((bStack_548 & 1) == 0) {
          func_0x000107714f6c();
          func_0x00010769e8b8();
          func_0x000107714898();
          uVar1 = 0;
          if ((bool)in_ZR) {
            func_0x000107714870();
            func_0x000107718804();
            func_0x000107714858();
            goto code_r0x00010769e008;
          }
        }
        else {
code_r0x00010769e008:
          func_0x00010770f7f4();
          func_0x000107719b98();
          if ((bool)in_ZR) {
            func_0x000107716360();
            dVar6 = *pdVar5;
          }
          else {
            func_0x000107708a34();
            func_0x00010770cf5c();
            func_0x000107714fdc();
            dVar6 = 0.0;
          }
          func_0x00010771492c();
          uVar1 = 0;
          if ((int)auStack_128 == 2) goto code_r0x00010769e0fc;
        }
      }
      else {
code_r0x00010769e0fc:
        func_0x0001077172c0();
        func_0x00010771a6b4();
        uVar1 = 0;
        if ((dVar6 == 0.0) && (uVar1 = param_2 == 0.0, (bool)uVar1)) {
          func_0x00010771bb34();
        }
        func_0x0001077167c4();
        func_0x00010770b6ac(2);
        func_0x000107714890();
      }
      func_0x000107714888();
      func_0x000107714860();
    }
    func_0x000107717188();
    in_ZR = uVar1;
  }
  else {
    func_0x000107714934();
    func_0x0001077156d0(&dStack_5b8);
    func_0x00010770fed0();
    func_0x000107715fd4();
  }
  func_0x000107714848();
  uVar1 = in_ZR;
code_r0x00010769e1c0:
  func_0x000107714838();
  while( true ) {
    func_0x000107714850();
    func_0x000107714830();
    in_ZR = uVar1;
code_r0x00010769e1cc:
    func_0x00010770e6c4();
    func_0x0001077137d8();
    func_0x000107708a48(uStack_230);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
code_r0x00010769e400:
    func_0x000107715230();
    func_0x00010771e33c();
    uVar1 = in_ZR;
code_r0x00010769e030:
    func_0x00010770fed0();
    func_0x000107715fd4();
  }
  return;
}



/* Entry: 1076a028c; end: 1076a04a3;  */

void FUN_1076a028c(double param_1,undefined8 param_2,double param_3)

{
  undefined1 in_ZR;
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined *puVar5;
  double extraout_x8;
  double extraout_x8_00;
  double extraout_x8_01;
  double extraout_x8_02;
  double *unaff_x20;
  double *pdVar6;
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  double unaff_d8;
  undefined8 in_stack_00000050;
  undefined1 auStack_7a8 [112];
  undefined1 auStack_738 [104];
  int iStack_6d0;
  double adStack_6c8 [14];
  undefined1 auStack_658 [8];
  double dStack_650;
  int iStack_5f0;
  undefined1 auStack_578 [112];
  double adStack_508 [13];
  int iStack_4a0;
  int iStack_430;
  undefined1 auStack_420 [24];
  double dStack_408;
  undefined8 *puStack_3c0;
  undefined *puStack_3b8;
  int iStack_2b8;
  int iStack_1d8;
  int iStack_f8;
  int iStack_18;
  
  uVar9 = (undefined4)((ulong)param_2 >> 0x20);
  uVar8 = (undefined4)param_2;
  func_0x0001077184d0();
  func_0x000107707748();
  func_0x000107709f0c();
  func_0x000107709acc();
  func_0x000107714850();
  if (iStack_18 == 0) {
    func_0x0001077076fc();
    func_0x000107714850();
  }
  func_0x00010770ce14();
  func_0x000107716498();
  if ((bool)in_ZR) {
    iStack_f8 = 0;
    func_0x000107709efc();
    func_0x000107709eec();
    func_0x000107714838();
    if (iStack_f8 == 0) {
      func_0x0001077076e0();
      func_0x000107714838();
    }
    func_0x00010770c3f4();
    func_0x0001077164a4();
    if ((bool)in_ZR) {
      iStack_1d8 = 0;
      func_0x000107709edc();
      func_0x000107709ecc();
      func_0x000107714860();
      if (iStack_1d8 == 0) {
        func_0x0001077076c4();
        func_0x000107714860();
      }
      func_0x00010770c8e0();
      func_0x000107716374();
      if ((bool)in_ZR) {
        iStack_2b8 = 0;
        func_0x000107709ebc();
        func_0x000107709f3c();
        func_0x0001077148e8();
        if (iStack_2b8 == 0) {
          func_0x0001077076a8();
          func_0x0001077148e8();
        }
        func_0x00010770dd40();
        func_0x000107716380();
        if ((bool)in_ZR) {
          func_0x000107715d28();
          func_0x00010770ed78();
          func_0x000107715d48();
          func_0x00010770ed88();
          func_0x000107715a7c();
          func_0x00010770ed98();
          func_0x000107715a74();
          func_0x000107714ec4();
          dStack_408 = param_1;
          FUN_10759ca1c(auStack_420,4);
          func_0x00010770768c();
          func_0x00010771492c();
        }
        else {
          func_0x0001077084bc();
          func_0x00010770dc3c();
          func_0x000107714e3c();
        }
        func_0x0001077148e8();
        func_0x000107714890();
      }
      else {
        func_0x0001077084a8();
        func_0x00010770dd04();
        func_0x000107715064();
      }
      func_0x000107714860();
      func_0x000107714888();
    }
    else {
      func_0x0001077085d8();
      func_0x00010770e66c();
      func_0x00010771592c();
    }
    func_0x000107714838();
    func_0x000107714848();
  }
  else {
    func_0x0001077085c4();
    func_0x00010770e648();
    func_0x000107715880();
  }
  func_0x000107714850();
  func_0x000107714830();
  func_0x000107707e08();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010770e61c();
  func_0x00010770d664();
  func_0x000107714860();
  func_0x00010770d6ac();
  func_0x000107714838();
  func_0x00010770d07c();
  func_0x000107714850();
  func_0x00010770c898();
  func_0x0001077149ec();
  puVar5 = &DAT_1076a04a4;
  func_0x000107715308();
  puStack_3c0 = &stack0x00000050;
  puStack_3b8 = puVar5;
  func_0x000107707ae4();
  if ((bRam00000001136d32e8 & 1) == 0) {
    iVar4 = 0x136d32e8;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      func_0x000107714d08(0x11370ab98,&DAT_10f41cdea);
      ___cxa_guard_release(0x1136d32e8);
    }
  }
  if ((bRam00000001136d32f0 & 1) == 0) {
    iVar4 = 0x136d32f0;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      func_0x00010770bd90(0x11370abd0);
      ___cxa_guard_release(0x1136d32f0);
    }
  }
  if ((bRam00000001136d32f8 & 1) == 0) {
    iVar4 = 0x136d32f8;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      func_0x00010770d06c(0x11370ac08);
      ___cxa_guard_release(0x1136d32f8);
    }
  }
  if ((bRam00000001136d3300 & 1) == 0) {
    iVar4 = 0x136d3300;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      func_0x00010770a504(0x11370ac40);
      ___cxa_guard_release(0x1136d3300);
    }
  }
  if ((bRam00000001136d3308 & 1) == 0) {
    iVar4 = 0x136d3308;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      func_0x00010770a1d0(0x11370ac78);
      ___cxa_guard_release(0x1136d3308);
    }
  }
  if ((bRam00000001136d3310 & 1) == 0) {
    iVar4 = 0x136d3310;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      func_0x00010770d05c(0x11370acb0);
      ___cxa_guard_release(0x1136d3310);
    }
  }
  if ((bRam00000001136d3318 & 1) == 0) {
    iVar4 = 0x136d3318;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      func_0x00010770a514(0x11370ace8);
      ___cxa_guard_release(0x1136d3318);
    }
  }
  if ((bRam00000001136d3320 & 1) == 0) {
    iVar4 = 0x136d3320;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      func_0x00010770b67c(0x11370ad20);
      ___cxa_guard_release(0x1136d3320);
    }
  }
  iStack_430 = 0;
  func_0x00010770cf68(adStack_508);
  func_0x00010770d358();
  func_0x000107714830();
  if (iStack_430 == 0) {
    adStack_508[1] = 1.0;
    iStack_4a0 = 2;
    func_0x00010770d358();
    func_0x000107714830();
  }
  pdVar6 = adStack_508;
  func_0x00010770c3f4();
  cVar1 = SBORROW4(iStack_4a0,2);
  cVar2 = iStack_4a0 + -2 < 0;
  uVar3 = iStack_4a0 == 2;
  if (!(bool)uVar3) {
    func_0x000107714934();
    func_0x00010771e910();
    func_0x000107714880();
    func_0x000104c2f714(auStack_578);
    goto code_r0x0001076a0a30;
  }
  func_0x0001077148ac(auStack_578);
  func_0x000107719970();
  iVar4 = (int)auStack_578;
  func_0x00010771b9d0();
  if (iVar4 != 0) {
    iStack_5f0 = 0;
    func_0x000107712e60();
    func_0x00010770e5f8();
    func_0x000107714830();
    if (iStack_5f0 == 0) {
      func_0x000107716dc0();
      func_0x00010770e5f8();
      func_0x000107714830();
    }
    func_0x00010770ed5c();
    func_0x00010771a7a4();
    if ((bool)uVar3) {
      func_0x00010770c394(auStack_738);
      func_0x00010771f828();
      if ((bool)uVar3) {
        func_0x00010771c400();
        func_0x00010770d7b4();
        if ((bool)cVar1) goto code_r0x0001076a0bb8;
        func_0x000107711a44();
        if (((cVar2 != cVar1) && (func_0x000107711a28(), !(bool)cVar2)) &&
           (func_0x000107711678(), !(bool)uVar3)) {
          func_0x000107715190();
          unaff_d8 = 1.0;
          if (!(bool)uVar3) {
            func_0x00010770a6f4();
          }
        }
        func_0x000107718c84();
        func_0x0001077131b4();
        goto code_r0x0001076a07d0;
      }
      func_0x000107714934();
      func_0x000107717004(auStack_7a8);
      goto code_r0x0001076a07c4;
    }
    func_0x00010770cad8();
    func_0x00010770f458();
    func_0x0001077160fc();
    func_0x000107715988();
    goto code_r0x0001076a07d4;
  }
  func_0x0001077148ac(auStack_658);
  FUN_107579348(auStack_658);
  func_0x00010770df68();
  if ((int)pdVar6 == 0) {
    iStack_5f0 = 0;
    func_0x000107712e60();
    unaff_x20 = (double *)0x0;
    func_0x00010770c184();
    func_0x000107714850();
    if (iStack_5f0 == 0) {
      func_0x000107716dc0();
      func_0x00010770c184();
      func_0x000107714850();
    }
    func_0x00010770c1c4();
    func_0x00010771a7a4();
    if ((bool)uVar3) {
      func_0x000107718c84();
      func_0x00010770d7b4();
      if (!(bool)cVar1) {
        unaff_d8 = 500.0;
        func_0x000107716678();
        if (cVar2 != cVar1) {
          func_0x000107717f48();
          if ((bool)cVar2) {
code_r0x0001076a07b0:
            func_0x00010771c890();
            goto code_r0x0001076a09ec;
          }
          func_0x000107716668();
          if ((bool)cVar2) {
            func_0x000107708f20();
            if ((bool)uVar3) goto code_r0x0001076a07b0;
            func_0x000107715190();
            if ((bool)uVar3) {
code_r0x0001076a09b8:
              func_0x00010771c884();
              unaff_d8 = extraout_x8_01;
              goto code_r0x0001076a09ec;
            }
            func_0x0001077081e8();
          }
          else {
            func_0x000107716658();
            if ((bool)cVar2) {
              func_0x00010770865c();
              if ((bool)uVar3) goto code_r0x0001076a09b8;
              func_0x000107715190();
              if ((bool)uVar3) goto code_r0x0001076a09a8;
              func_0x000107707f98();
              param_3 = extraout_x8;
            }
            else {
              func_0x00010770bda0();
              if ((bool)uVar3) {
code_r0x0001076a09a8:
                func_0x00010771c89c();
                unaff_d8 = extraout_x8_00;
                goto code_r0x0001076a09ec;
              }
              func_0x000107715190();
              if ((bool)uVar3) goto code_r0x0001076a09e8;
              func_0x00010770cd4c();
              func_0x000107718180();
              param_3 = extraout_x8_02;
            }
          }
          unaff_d8 = param_1 + param_3 * (double)CONCAT44(uVar9,uVar8);
        }
code_r0x0001076a09e8:
        pdVar6 = (double *)0x1;
        goto code_r0x0001076a09ec;
      }
      func_0x000107713a08();
    }
    else {
      func_0x00010770cad8();
    }
    func_0x00010770f458();
    func_0x0001077160fc();
    func_0x00010771c50c();
code_r0x0001076a09ec:
    func_0x000107714850();
    func_0x000107714890();
    if (((ulong)pdVar6 & 1) == 0) goto code_r0x0001076a0a24;
    goto code_r0x0001076a09f8;
  }
  func_0x0001077148ac(auStack_658);
  cVar1 = SBORROW4(iStack_5f0,2);
  cVar2 = iStack_5f0 + -2 < 0;
  uVar3 = iStack_5f0 == 2;
  if (!(bool)uVar3) {
    func_0x000107714934();
    func_0x00010771df54();
    func_0x000107714880();
    func_0x00010771acac();
    func_0x000107715988();
    goto code_r0x0001076a0990;
  }
  pdVar6 = adStack_6c8;
  func_0x00010770c394();
  func_0x00010771a7a4();
  if ((bool)uVar3) {
    func_0x000107718c84();
    func_0x00010770d7b4();
    if ((bool)cVar1) {
      func_0x000107713a08();
      goto code_r0x0001076a0814;
    }
    func_0x000107712d18();
    if ((cVar2 != cVar1) && (func_0x000107713270(), !(bool)cVar2)) {
      func_0x0001077162e4();
      if ((bool)cVar2) {
        uVar8 = 0xc1400000;
        uVar9 = 0;
        func_0x00010770996c();
        func_0x00010770b36c();
        if ((!(bool)uVar3) && (func_0x000107713e04(), !(bool)uVar3)) {
          func_0x00010770b398();
code_r0x0001076a0864:
          unaff_d8 = param_1 + param_3 * (double)CONCAT44(uVar9,uVar8);
        }
      }
      else {
        func_0x000107708e54();
        func_0x000107709630();
        func_0x00010771a8b8();
        if (!(bool)uVar3) {
          func_0x000107715190();
          unaff_d8 = 1.0;
          if (!(bool)uVar3) {
            func_0x00010770bae8();
            goto code_r0x0001076a0864;
          }
        }
      }
    }
    iStack_6d0 = 0;
    func_0x00010770f7b8();
    func_0x00010770c51c();
    func_0x000107714850();
    if (iStack_6d0 == 0) {
      func_0x000107716688();
      func_0x00010770c51c();
      func_0x000107714850();
    }
    func_0x00010770ce14();
    func_0x00010771afa0();
    if ((bool)uVar3) {
      func_0x000107710f50();
      func_0x00010770ee54();
      func_0x000107714888();
      func_0x000107716884();
      func_0x000107711250();
      func_0x000107714890();
      unaff_x20 = (double *)0x0;
      func_0x00010770d748();
      func_0x00010771bdd8();
      if ((bool)uVar3) {
        func_0x0001077191d8();
        func_0x000107716360();
        dVar7 = *pdVar6;
        func_0x00010770bfc8();
        if ((bool)cVar1) {
          func_0x000107711fd0();
          unaff_x20 = pdVar6;
          goto code_r0x0001076a0970;
        }
        func_0x00010770ffac();
        if ((cVar2 != cVar1) && (func_0x00010770ff84(), !(bool)cVar2)) {
          func_0x000107709778();
          func_0x00010770b600();
          if ((!(bool)uVar3) && (func_0x0001077176e4(), !(bool)uVar3)) {
            func_0x000107709f90();
          }
        }
        func_0x0001072cb4bc(auStack_658);
        func_0x000107715654();
        unaff_d8 = (double)CONCAT44(uVar9,uVar8) * dVar7;
        unaff_x20 = (double *)0x1;
      }
      else {
        func_0x000107708a34();
code_r0x0001076a0970:
        func_0x00010770cf5c();
        func_0x000107714fdc();
        func_0x000107715988();
      }
      func_0x000107714888();
      func_0x000107714860();
    }
    else {
      func_0x000107714934();
      func_0x00010770f7c4();
      func_0x00010770f228();
      func_0x00010771626c();
      func_0x000107715988();
    }
    func_0x000107714850();
    func_0x000107714830();
  }
  else {
    func_0x00010770cad8();
code_r0x0001076a0814:
    func_0x00010770f458();
    func_0x0001077160fc();
    func_0x000107715988();
  }
  func_0x00010771147c();
code_r0x0001076a0990:
  func_0x000107719348();
  while( true ) {
    func_0x00010726af18();
    if (((ulong)unaff_x20 & 1) != 0) {
code_r0x0001076a09f8:
      pdVar6 = adStack_508;
      func_0x0001072cb4bc();
      dStack_650 = unaff_d8 * *pdVar6;
      unaff_x20 = (double *)0x0;
      iStack_5f0 = 2;
      func_0x0001077148fc();
      func_0x000107714890();
    }
code_r0x0001076a0a24:
    func_0x00010770fe28();
    func_0x000107714828(auStack_578);
code_r0x0001076a0a30:
    func_0x000107714838();
    func_0x000107714848();
    func_0x000107708038();
    if ((bool)uVar3) break;
    ___stack_chk_fail();
code_r0x0001076a0bb8:
    func_0x000107715230();
    func_0x00010771e33c();
code_r0x0001076a07c4:
    func_0x00010770fed0();
    func_0x000107715fd4();
    func_0x000107715988();
code_r0x0001076a07d0:
    func_0x00010770ec5c();
code_r0x0001076a07d4:
    func_0x000107714830();
  }
  return;
}



/* Entry: 1076ab99c; end: 1076ac787;  */

void FUN_1076ab99c(undefined1 *param_1)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int extraout_w8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  int iVar6;
  int unaff_w24;
  undefined1 auStack_300 [224];
  undefined1 auStack_220 [104];
  int iStack_1b8;
  undefined4 uStack_148;
  int iStack_90;
  undefined1 auStack_88 [104];
  int iStack_20;
  
  func_0x0001077184d0();
  func_0x000107707a30();
  func_0x0001077083d4();
  iStack_20 = 0;
  func_0x00010770989c();
  puVar5 = auStack_88;
  func_0x00010770c2cc();
  func_0x000107714838();
  if (iStack_20 == 0) {
    func_0x000107718644();
    func_0x00010770ddac();
    func_0x00010770c2cc();
    func_0x000107714838();
  }
  func_0x000107719a78(auStack_220);
  func_0x0001077098ac();
  func_0x00010770dd1c();
  func_0x000107714838();
  func_0x000107714b48();
  func_0x000107714830();
  func_0x000107715f60();
  if ((bool)in_ZR) {
    func_0x000107715888();
    func_0x0001077096ec();
    func_0x000107715f78();
    puVar4 = param_1;
    if (!(bool)in_ZR) goto LAB_1076aba4c;
    func_0x00010771551c();
    puVar4 = param_1;
    func_0x00010771e8a0();
    puVar5 = param_1;
    if (((ulong)puVar4 & 1) == 0) {
      func_0x000107714b98();
      if ((int)puVar4 != 0) {
        func_0x000107718644();
        goto LAB_1076abb68;
      }
      iStack_90 = 0;
      func_0x00010771fd58();
      func_0x000107708f80();
      func_0x000107708fb0();
      func_0x000107714838();
      if (iStack_90 == 0) {
        iStack_1b8 = 0;
        func_0x00010771fd4c();
        func_0x000107708fa0();
        func_0x000107708f90();
        func_0x000107714838();
        if (iStack_1b8 == 0) {
          func_0x000107718644();
          func_0x00010770ceb0();
          func_0x00010770c290();
          func_0x000107714838();
        }
        func_0x00010770c3f4();
        func_0x0001077154a0();
        if ((bool)in_ZR) {
          func_0x000107715044();
          func_0x00010771fd40();
          func_0x00010771503c();
          func_0x000107707e98();
          func_0x000107714860();
          func_0x0001077150bc();
          if ((bool)in_ZR) {
            func_0x000107714c84();
            func_0x000107707ec0();
            func_0x00010770cdcc();
            if (iStack_90 == 0) {
              func_0x000107718644();
              func_0x00010770cea4();
              func_0x00010770cce0();
              func_0x000107714888();
            }
            func_0x000107714860();
            func_0x00010770c3b8();
            func_0x000107714838();
            func_0x000107714848();
            goto LAB_1076abe1c;
          }
          goto LAB_1076abb48;
        }
        func_0x000107707e58();
        goto LAB_1076abb40;
      }
LAB_1076abe1c:
      func_0x00010770c4e8();
      func_0x0001077154c0();
      if (!(bool)in_ZR) {
        func_0x000107707e6c();
        goto LAB_1076abb20;
      }
      func_0x000107714f50();
      func_0x000107714d34();
      goto LAB_1076abb28;
    }
LAB_1076abb68:
    func_0x000107714d34();
LAB_1076abb6c:
    iVar6 = (int)puVar5;
    func_0x00010770988c();
    func_0x00010770dd70();
LAB_1076abb74:
    func_0x000107714830();
  }
  else {
    iStack_20 = 0;
    puVar4 = param_1;
LAB_1076aba4c:
    iStack_90 = 0;
    func_0x00010771fd58();
    func_0x000107708f80();
    func_0x000107708fb0();
    func_0x000107714838();
    if (iStack_90 == 0) {
      iStack_1b8 = 0;
      func_0x00010771fd4c();
      func_0x000107708fa0();
      func_0x000107708f90();
      func_0x000107714838();
      if (iStack_1b8 == 0) {
        func_0x000107718644();
        func_0x00010770ceb0();
        func_0x00010770c290();
        func_0x000107714838();
      }
      func_0x00010770c3f4();
      func_0x0001077154a0();
      if ((bool)in_ZR) {
        func_0x000107715044();
        func_0x00010771fd40();
        func_0x00010771503c();
        func_0x000107707e98();
        func_0x000107714860();
        func_0x0001077150bc();
        if ((bool)in_ZR) {
          func_0x000107714c84();
          func_0x000107707ec0();
          func_0x00010770cdcc();
          if (iStack_90 == 0) {
            func_0x000107718644();
            func_0x00010770cea4();
            func_0x00010770cce0();
            func_0x000107714888();
          }
          func_0x000107714860();
          func_0x00010770c3b8();
          func_0x000107714838();
          func_0x000107714848();
          goto LAB_1076aba68;
        }
      }
      else {
        func_0x000107707e58();
LAB_1076abb40:
        func_0x00010770dd7c();
        func_0x000107714ed0();
      }
LAB_1076abb48:
      iVar6 = (int)puVar5;
      func_0x000107714838();
      func_0x000107714848();
      goto LAB_1076abb74;
    }
LAB_1076aba68:
    func_0x00010770c4e8();
    func_0x0001077154c0();
    if ((bool)in_ZR) {
      func_0x000107714f50();
      func_0x000107714d34();
    }
    else {
      func_0x000107707e6c();
LAB_1076abb20:
      func_0x00010770dd88();
      func_0x000107714bf4();
    }
LAB_1076abb28:
    iVar6 = (int)puVar5;
    func_0x000107714838();
    func_0x000107714830();
    if (unaff_w24 == 3) goto LAB_1076abb6c;
  }
  func_0x00010770c23c();
  func_0x00010770ce8c();
  func_0x000107714e44();
  func_0x00010770f748();
  uVar2 = extraout_w8 == 1;
  if ((bool)uVar2) {
    func_0x000107714c84();
    func_0x000107708370();
    func_0x000107715e44();
    if (!(bool)uVar2) goto LAB_1076abc4c;
    func_0x0001077154e4();
    puVar5 = puVar4;
    func_0x000104c32db4();
    iVar3 = (int)puVar5;
    if (iVar3 == 0) {
      func_0x000107717034();
      if (iVar3 != 0) {
        func_0x000107714b7c();
        func_0x000107710774();
        func_0x00010770d76c();
        func_0x00010770c200();
        func_0x000107714838();
        func_0x000107710774();
        func_0x00010770d76c();
        func_0x00010770c200();
        func_0x000107714838();
        iVar6 = 0x1370c9c8;
        func_0x000107710774();
        func_0x0001072baf4c(auStack_300,0x11370ced0);
        func_0x00010770c200();
        func_0x000107714838();
        func_0x000107707abc();
        iStack_20 = 0;
        func_0x000107707b30();
        func_0x000107709f1c();
        func_0x000107714830();
        if (iStack_20 == 0) {
          func_0x000107707428();
          func_0x000107714850();
        }
        func_0x00010770c1c4();
        func_0x000107714b50();
        if (!(bool)uVar2) {
          func_0x000107707ad0();
          goto LAB_1076abcf0;
        }
        func_0x0001077149e4();
        func_0x000107714a5c();
        uVar1 = 0x5b0;
        if ((bool)uVar2) {
          uVar1 = 0x38;
        }
        func_0x000107719088(uVar1);
        func_0x00010770c364();
        func_0x000107708ba0();
        func_0x00010770c7d8();
        goto LAB_1076abcc8;
      }
      func_0x000107717034();
      iVar6 = 0x1370d058;
      if (iVar3 != 0) {
        func_0x000107714b7c();
        func_0x00010771687c(auStack_88);
        func_0x0001072baf4c(auStack_300,0x11370cfe8);
        func_0x0001077115a8();
        func_0x000107714888();
        func_0x000107715d6c();
        func_0x000107718a20();
        func_0x00010770c3a0();
        func_0x00010770c388();
        func_0x000107714848();
        iVar6 = (int)auStack_88;
        func_0x00010771280c();
        func_0x0001077197e8();
        func_0x00010770c4c4();
        func_0x000107714830();
        func_0x000107707abc();
        iStack_20 = 0;
        func_0x000107707b30();
        func_0x000107709f1c();
        func_0x000107714830();
        if (iStack_20 == 0) {
          func_0x000107707428();
          func_0x000107714850();
        }
        func_0x00010770c1c4();
        func_0x000107714b50();
        if (!(bool)uVar2) {
          func_0x000107707ad0();
          goto LAB_1076abcf0;
        }
        func_0x0001077149e4();
        func_0x000107714a5c();
        uVar1 = 0x5b0;
        if ((bool)uVar2) {
          uVar1 = 0x188;
        }
        func_0x000107719088(uVar1);
        func_0x00010770c364();
        func_0x000107708ba0();
        func_0x00010770c7d8();
        goto LAB_1076abcc8;
      }
      func_0x000107717034();
      if (iVar3 != 0) {
        func_0x000107714b7c();
        func_0x00010771520c();
        func_0x0001072ddd58();
        func_0x0001072baf4c(auStack_300,0x11370cfe8);
        iVar6 = 0x1370cd10;
        func_0x00010770c200();
        func_0x000107714838();
        func_0x000107710774();
        func_0x00010771d8e4();
        func_0x00010770c200();
        func_0x000107714838();
        func_0x000107715d60();
        func_0x000107714c2c();
        func_0x0001077197cc();
        func_0x00010770c4c4();
        func_0x000107714830();
        func_0x000107707abc();
        iStack_20 = 0;
        func_0x000107707b30();
        func_0x000107709f1c();
        func_0x000107714830();
        if (iStack_20 == 0) {
          func_0x000107707428();
          func_0x000107714850();
        }
        func_0x00010770c1c4();
        func_0x000107714b50();
        if (!(bool)uVar2) {
          func_0x000107707ad0();
          goto LAB_1076abcf0;
        }
        func_0x0001077149e4();
        func_0x000107714a5c();
        uVar1 = 0x5b0;
        if ((bool)uVar2) {
          uVar1 = 0x118;
        }
        func_0x000107719088(uVar1);
        func_0x00010770c364();
        func_0x000107708ba0();
        func_0x00010770c7d8();
        goto LAB_1076abcc8;
      }
      func_0x000104c32db4(puVar4,0x11370ca70);
      iVar3 = (int)puVar4;
      if (iVar3 != 0) {
        func_0x000107714b7c();
        func_0x00010771520c();
        func_0x00010771e384();
        func_0x0001072baf4c(auStack_300,0x11370cfe8);
        func_0x00010770c200();
        func_0x000107714838();
        func_0x00010771b480(auStack_88);
        func_0x00010770c3a0();
        func_0x00010770c200();
        func_0x000107714838();
        func_0x000107715d60();
        func_0x000107714c2c();
        func_0x0001077197cc();
        func_0x00010770c4c4();
        func_0x000107714830();
        func_0x000107707abc();
        iStack_20 = 0;
        func_0x000107707b30();
        func_0x000107709f1c();
        func_0x000107714830();
        if (iStack_20 == 0) {
          func_0x000107707428();
          func_0x000107714850();
        }
        func_0x00010770c1c4();
        func_0x000107714b50();
        if (!(bool)uVar2) {
          func_0x000107707ad0();
          goto LAB_1076abcf0;
        }
        func_0x0001077149e4();
        func_0x000107714a5c();
        uVar1 = 0x5b0;
        if ((bool)uVar2) {
          uVar1 = 0x118;
        }
        func_0x000107719088(uVar1);
        func_0x00010770c364();
        func_0x000107708ba0();
        func_0x00010770c7d8();
        goto LAB_1076abcc8;
      }
      func_0x000107717034();
      if (iVar3 != 0) {
        func_0x000107714b7c();
        func_0x000107710774();
        func_0x0001077197c0();
        func_0x00010770c200();
        func_0x000107714838();
        iVar6 = 0x1370cbf8;
        func_0x000107710774();
        func_0x0001072baf4c(auStack_300,0x11370d058);
        func_0x00010770c200();
        func_0x000107714838();
        func_0x000107715d60();
        func_0x00010771e384();
        func_0x00010771d8fc();
        func_0x00010770c4c4();
        func_0x000107714830();
        func_0x000107707abc();
        iStack_20 = 0;
        func_0x000107707b30();
        func_0x000107709f1c();
        func_0x000107714830();
        if (iStack_20 == 0) {
          func_0x000107707428();
          func_0x000107714850();
        }
        func_0x00010770c1c4();
        func_0x000107714b50();
        if (!(bool)uVar2) {
          func_0x000107707ad0();
          goto LAB_1076abcf0;
        }
        func_0x0001077149e4();
        func_0x000107712d78();
        uVar1 = 0x5b0;
        if ((bool)uVar2) {
          uVar1 = extraout_x8;
        }
        func_0x000107719088(uVar1);
        func_0x00010770c364();
        func_0x000107708ba0();
        func_0x00010770c7d8();
        goto LAB_1076abcc8;
      }
      func_0x000107717034();
      if (iVar3 != 0) {
        func_0x000107714b7c();
        func_0x00010771520c();
        func_0x0001077162f0();
        func_0x00010770c85c();
        func_0x00010770c200();
        func_0x000107714838();
        func_0x0001072ddd58(auStack_88,0x11370d218);
        func_0x00010770c3a0();
        func_0x00010770c200();
        func_0x000107714838();
        func_0x000107715d60();
        func_0x00010771e384();
        func_0x00010771d8fc();
        func_0x00010770c4c4();
        func_0x000107714830();
        func_0x000107707abc();
        iStack_20 = 0;
        func_0x000107707b30();
        func_0x000107709f1c();
        func_0x000107714830();
        if (iStack_20 == 0) {
          func_0x000107707428();
          func_0x000107714850();
        }
        func_0x00010770c1c4();
        func_0x000107714b50();
        if (!(bool)uVar2) {
          func_0x000107707ad0();
          goto LAB_1076abcf0;
        }
        func_0x0001077149e4();
        func_0x000107712d78();
        uVar1 = 0x5b0;
        if ((bool)uVar2) {
          uVar1 = extraout_x8_00;
        }
        func_0x000107719088(uVar1);
        func_0x00010770c364();
        func_0x000107708ba0();
        func_0x00010770c7d8();
        goto LAB_1076abcc8;
      }
      func_0x000107717034();
      if (iVar3 != 0) {
        func_0x000107714b7c();
        iVar6 = (int)auStack_88;
        func_0x00010771280c();
        func_0x0001077197e8();
        func_0x00010770c4c4();
        func_0x000107714830();
        func_0x000107707abc();
        iStack_20 = 0;
        func_0x000107707b30();
        func_0x000107709f1c();
        func_0x000107714830();
        if (iStack_20 == 0) {
          func_0x000107707428();
          func_0x000107714850();
        }
        func_0x00010770c1c4();
        func_0x000107714b50();
        if (!(bool)uVar2) {
          func_0x000107707ad0();
          goto LAB_1076abcf0;
        }
        func_0x0001077149e4();
        func_0x000107714a5c();
        uVar1 = 0x5b0;
        if ((bool)uVar2) {
          uVar1 = 0x188;
        }
        func_0x000107719088(uVar1);
        func_0x00010770c364();
        func_0x000107708ba0();
        func_0x00010770c7d8();
        goto LAB_1076abcc8;
      }
      func_0x000107717034();
      if (iVar3 == 0) {
        func_0x000107714b7c();
        func_0x000107715d60();
        func_0x0001072ddd58();
        func_0x00010770c85c();
        func_0x00010770c4c4();
        func_0x000107714830();
        func_0x000107707abc();
        iStack_20 = 0;
        func_0x000107707b30();
        func_0x000107709f1c();
        func_0x000107714830();
        if (iStack_20 == 0) {
          func_0x000107707428();
          func_0x000107714850();
        }
        func_0x00010770c1c4();
        func_0x000107714b50();
        if (!(bool)uVar2) {
          func_0x000107707ad0();
          goto LAB_1076abcf0;
        }
        func_0x0001077149e4();
        func_0x000107714a5c();
        uVar1 = 0x9d8;
        if ((bool)uVar2) {
          uVar1 = 0x5b0;
        }
        func_0x000107719088(uVar1);
        func_0x00010770c364();
        func_0x000107708ba0();
        func_0x00010770c7d8();
        goto LAB_1076abcc8;
      }
      func_0x000107714b7c();
      func_0x000107715d6c();
      func_0x0001072ddd58();
      func_0x0001072baf4c(auStack_300,0x11370cfe8);
      func_0x00010770c388();
      func_0x000107714848();
      func_0x0001072ddd58(auStack_88,0x11370d2f8);
      func_0x00010770c3a0();
      func_0x00010770c388();
      func_0x000107714848();
      iVar6 = (int)auStack_88;
      func_0x00010771280c();
      func_0x0001077197e8();
      func_0x00010770c4c4();
      func_0x000107714830();
      func_0x000107707abc();
      iStack_20 = 0;
      func_0x000107707b30();
      func_0x000107709f1c();
      func_0x000107714830();
      if (iStack_20 == 0) {
        func_0x000107707428();
        func_0x000107714850();
      }
      func_0x00010770c1c4();
      func_0x000107714b50();
      if ((bool)uVar2) {
        func_0x0001077149e4();
        func_0x000107714a5c();
        uVar1 = 0x5b0;
        if ((bool)uVar2) {
          uVar1 = 0x188;
        }
        func_0x000107719088(uVar1);
        func_0x00010770c364();
        func_0x000107708ba0();
        func_0x00010770c7d8();
        goto LAB_1076abcc8;
      }
      func_0x000107707ad0();
      goto LAB_1076abcf0;
    }
    func_0x000107714b7c();
    iVar6 = 0x1370ce98;
    func_0x000107710774();
    func_0x00010770d76c();
    func_0x00010770c200();
    func_0x000107714838();
    func_0x000107707abc();
    iStack_20 = 0;
    func_0x000107707b30();
    func_0x000107709f1c();
    func_0x000107714830();
    if (iStack_20 == 0) {
      func_0x000107707428();
      func_0x000107714850();
    }
    func_0x00010770c1c4();
    func_0x000107714b50();
    if (!(bool)uVar2) {
      func_0x000107707ad0();
      goto LAB_1076abcf0;
    }
    func_0x0001077149e4();
    func_0x000107714a5c();
    uVar1 = 0x5b0;
    if ((bool)uVar2) {
      uVar1 = 0x508;
    }
    func_0x000107719088(uVar1);
    func_0x00010770c364();
    func_0x000107708ba0();
    func_0x00010770c7d8();
  }
  else {
    uStack_148 = 0;
LAB_1076abc4c:
    func_0x000107714b7c();
    func_0x000107715d60();
    func_0x0001072ddd58();
    func_0x00010770c85c();
    func_0x00010770c4c4();
    func_0x000107714830();
    func_0x000107707abc();
    iStack_20 = 0;
    func_0x000107707b30();
    func_0x000107709f1c();
    func_0x000107714830();
    if (iStack_20 == 0) {
      func_0x000107707428();
      func_0x000107714850();
    }
    func_0x00010770c1c4();
    func_0x000107714b50();
    if (!(bool)uVar2) {
      func_0x000107707ad0();
LAB_1076abcf0:
      func_0x00010770d3ec();
      func_0x000107714b48();
      goto LAB_1076abcf8;
    }
    func_0x0001077149e4();
    func_0x000107714a5c();
    uVar1 = 0x9d8;
    if ((bool)uVar2) {
      uVar1 = 0x5b0;
    }
    func_0x000107719088(uVar1);
    func_0x00010770c364();
    func_0x000107708ba0();
    func_0x00010770c7d8();
  }
LAB_1076abcc8:
  func_0x00010770c200();
  func_0x000107714838();
  func_0x00010770d8f8();
  func_0x00010770779c();
  func_0x000107714838();
  func_0x000107715718();
LAB_1076abcf8:
  func_0x000107714850();
  func_0x000107714890();
  func_0x000107714bf4();
  func_0x000107715034();
  uVar2 = iVar6 == 1;
  if ((bool)uVar2) {
    func_0x00010770d7e8();
  }
  func_0x00010770cc2c();
  func_0x00010770c3b8();
  func_0x00010770cd04();
  func_0x000107708038();
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x00010770e03c();
    func_0x000107714850();
    func_0x00010770c23c();
    func_0x000107714bf4();
    func_0x000107715034();
    func_0x00010770cc2c();
    func_0x00010770c3b8();
    do {
      func_0x00010770cd04();
      func_0x0001077149ec();
    } while( true );
  }
  return;
}



/* Entry: 1076b79cc; end: 1076b82ab;  */

void FUN_1076b79cc(void)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  ulong uVar2;
  int iVar3;
  byte unaff_w20;
  uint uVar4;
  uint uVar5;
  int unaff_w23;
  ulong unaff_x30;
  undefined1 auStack_210 [104];
  int iStack_1a8;
  byte bStack_198;
  undefined1 auStack_e8 [104];
  int iStack_80;
  int iStack_10;
  
  func_0x00010771cb48();
  func_0x000107707aa0();
  if ((bRam00000001136d3f28 & 1) == 0) {
    unaff_x30 = 0x1136d3f28;
    ___cxa_guard_acquire();
    if ((int)unaff_x30 != 0) {
      func_0x000107708e10(0x1137100b0);
      unaff_x30 = 0x1136d3f28;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d3f30 & 1) == 0) {
    unaff_x30 = 0x1136d3f30;
    ___cxa_guard_acquire();
    if ((int)unaff_x30 != 0) {
      func_0x000107708bb0(0x1137100e8);
      unaff_x30 = 0x1136d3f30;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d3f38 & 1) == 0) {
    unaff_x30 = 0x1136d3f38;
    ___cxa_guard_acquire();
    if ((int)unaff_x30 != 0) {
      func_0x000107708de0(0x113710120);
      unaff_x30 = 0x1136d3f38;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d3f40 & 1) == 0) {
    unaff_x30 = 0x1136d3f40;
    ___cxa_guard_acquire();
    if ((int)unaff_x30 != 0) {
      func_0x000107708dc0(0x113710158);
      unaff_x30 = 0x1136d3f40;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d3f48 & 1) == 0) {
    unaff_x30 = 0x1136d3f48;
    ___cxa_guard_acquire();
    if ((int)unaff_x30 != 0) {
      func_0x000107708dd0(0x113710190);
      unaff_x30 = 0x1136d3f48;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d3f50 & 1) == 0) {
    unaff_x30 = 0x1136d3f50;
    ___cxa_guard_acquire();
    if ((int)unaff_x30 != 0) {
      func_0x000107708e00(0x1137101c8);
      unaff_x30 = 0x1136d3f50;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d3f58 & 1) == 0) {
    unaff_x30 = 0x1136d3f58;
    ___cxa_guard_acquire();
    if ((int)unaff_x30 != 0) {
      func_0x000107708df0(0x113710200);
      unaff_x30 = 0x1136d3f58;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d3f60 & 1) == 0) {
    unaff_x30 = 0x1136d3f60;
    ___cxa_guard_acquire();
    if ((int)unaff_x30 != 0) {
      func_0x000107708db0(0x113710238);
      unaff_x30 = 0x1136d3f60;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d3f68 & 1) == 0) {
    unaff_x30 = 0x1136d3f68;
    ___cxa_guard_acquire();
    if ((int)unaff_x30 != 0) {
      func_0x00010770d04c(0x113710270);
      unaff_x30 = 0x1136d3f68;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d3f70 & 1) == 0) {
    unaff_x30 = 0x1136d3f70;
    ___cxa_guard_acquire();
    if ((int)unaff_x30 != 0) {
      func_0x0001077095a0(0x1137102a8);
      unaff_x30 = 0x1136d3f70;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d3f78 & 1) == 0) {
    unaff_x30 = 0x1136d3f78;
    ___cxa_guard_acquire();
    if ((int)unaff_x30 != 0) {
      func_0x0001077098bc(0x1137102e0);
      unaff_x30 = 0x1136d3f78;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d3f80 & 1) == 0) {
    unaff_x30 = 0x1136d3f80;
    ___cxa_guard_acquire();
    if ((int)unaff_x30 != 0) {
      func_0x00010770b448(0x113710318);
      unaff_x30 = 0x1136d3f80;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d3f88 & 1) == 0) {
    unaff_x30 = 0x1136d3f88;
    ___cxa_guard_acquire();
    if ((int)unaff_x30 != 0) {
      func_0x000107713578(0x113710350);
      unaff_x30 = 0x1136d3f88;
      ___cxa_guard_release();
    }
  }
  func_0x000107712404();
  iStack_10 = 0;
  func_0x00010770f7dc();
  func_0x000107709030();
  func_0x000107714830();
  if (iStack_10 == 0) {
    func_0x00010771c45c();
    func_0x000107716320();
    func_0x00010770c1b8();
    func_0x000107714830();
  }
  func_0x000107715120(auStack_210);
  func_0x000107717a28();
  func_0x000107719fa0();
  func_0x000107714830();
  func_0x000107715564();
  func_0x000107714850();
  func_0x0001077188a0();
  if ((bool)in_ZR) {
    func_0x00010771c3e8();
    func_0x000107707ee8();
    func_0x000107715018();
    uVar2 = unaff_x30;
    if (!(bool)in_ZR) goto LAB_1076b7b50;
    func_0x000107714bc0();
    uVar2 = unaff_x30;
    func_0x000104c32db4();
    if ((uVar2 & 1) == 0) {
      func_0x000107714c8c();
      if ((int)uVar2 != 0) {
        func_0x00010771c45c();
        goto LAB_1076b7c94;
      }
      iStack_80 = 0;
      func_0x00010770dbb0();
      func_0x00010770c1b8();
      func_0x000107714830();
      if (iStack_80 == 0) {
        iStack_1a8 = 0;
        func_0x00010770d70c();
        unaff_w23 = (int)auStack_210;
        func_0x00010770c1dc();
        func_0x000107714830();
        if (iStack_1a8 == 0) {
          func_0x00010771c45c();
          func_0x000107711978();
          func_0x00010770c1dc();
          func_0x000107714830();
        }
        func_0x00010770c230();
        func_0x00010771a780();
        if ((bool)in_ZR) {
          func_0x000107718c7c();
          func_0x000107718d94();
          func_0x00010770e1d0();
          func_0x000107714848();
          func_0x000107714898();
          if ((bool)in_ZR) {
            func_0x000107714870();
            func_0x00010770c254(uVar2);
            func_0x00010770c430();
            if (iStack_80 == 0) {
              func_0x00010771c45c();
              func_0x000107713e80();
              func_0x00010770c424();
              func_0x000107714860();
            }
            func_0x000107714848();
            func_0x000107714858();
            func_0x000107714830();
            func_0x000107714838();
            goto LAB_1076b7dc8;
          }
          goto LAB_1076b7c6c;
        }
        func_0x00010770b88c();
        goto LAB_1076b7c64;
      }
LAB_1076b7dc8:
      func_0x00010770c260();
      func_0x00010771c430();
      if (!(bool)in_ZR) {
        func_0x00010770b940();
        goto LAB_1076b7c44;
      }
      func_0x000107716cbc();
      func_0x000107717538();
      goto LAB_1076b7c4c;
    }
LAB_1076b7c94:
    func_0x000107717538();
LAB_1076b7c98:
    uVar4 = (uint)unaff_x30;
    func_0x0001077178bc();
    func_0x000107717e84();
    func_0x0001077128fc();
    if ((uVar2 & 1) == 0) {
      uVar5 = 0;
      iVar3 = 4;
    }
    else {
      func_0x00010770f7dc();
      func_0x000107718200();
      uVar2 = 0;
      func_0x00010771878c();
      if ((uVar2 & 1) == 0) {
        func_0x00010770d70c();
        func_0x000107717e34();
        func_0x0001077100f8();
        func_0x0001077115e4();
        func_0x000107714830();
      }
      else {
        uVar4 = 1;
      }
      func_0x00010770ccbc();
      func_0x00010770ce5c();
      uVar5 = uVar4 ^ 1;
      iVar3 = 4;
      if ((uVar4 & 1) == 0) {
        iVar3 = 0;
      }
    }
    func_0x000107714ad4();
    func_0x0001077157a8();
  }
  else {
    iStack_10 = 0;
    uVar2 = unaff_x30;
LAB_1076b7b50:
    iStack_80 = 0;
    func_0x00010770dbb0();
    func_0x00010770c1b8();
    func_0x000107714830();
    if (iStack_80 == 0) {
      iStack_1a8 = 0;
      func_0x00010770d70c();
      unaff_w23 = (int)auStack_210;
      func_0x00010770c1dc();
      func_0x000107714830();
      if (iStack_1a8 == 0) {
        func_0x00010771c45c();
        func_0x000107711978();
        func_0x00010770c1dc();
        func_0x000107714830();
      }
      func_0x00010770c230();
      func_0x00010771a780();
      if ((bool)in_ZR) {
        func_0x000107718c7c();
        func_0x000107718d94();
        func_0x00010770e1d0();
        func_0x000107714848();
        func_0x000107714898();
        if ((bool)in_ZR) {
          func_0x000107714870();
          func_0x00010770c254(uVar2);
          func_0x00010770c430();
          if (iStack_80 == 0) {
            func_0x00010771c45c();
            func_0x000107713e80();
            func_0x00010770c424();
            func_0x000107714860();
          }
          func_0x000107714848();
          func_0x000107714858();
          func_0x000107714830();
          func_0x000107714838();
          goto LAB_1076b7b74;
        }
      }
      else {
        func_0x00010770b88c();
LAB_1076b7c64:
        func_0x00010770d3a4();
        func_0x0001077150e4();
      }
LAB_1076b7c6c:
      func_0x000107714830();
      func_0x000107714838();
      func_0x000107714850();
    }
    else {
LAB_1076b7b74:
      func_0x00010770c260();
      func_0x00010771c430();
      if ((bool)in_ZR) {
        func_0x000107716cbc();
        func_0x000107717538();
      }
      else {
        func_0x00010770b940();
LAB_1076b7c44:
        func_0x00010770eccc();
        func_0x000107715720();
      }
LAB_1076b7c4c:
      unaff_x30 = 0;
      func_0x000107714830();
      func_0x000107714850();
      if (unaff_w23 == 3) goto LAB_1076b7c98;
    }
    uVar5 = 0;
    iVar3 = (int)auStack_e8;
    func_0x000107719070();
  }
  func_0x00010770c324();
  func_0x000107712f24();
  func_0x000107715514();
  uVar1 = true;
  if (iVar3 == 4) {
LAB_1076b7d54:
    if ((uVar5 & 1) == 0) {
      bStack_198 = 0;
    }
    else {
      func_0x00010770ddc4();
      func_0x00010771db0c();
      func_0x00010770d5d0();
      bStack_198 = unaff_w20 ^ 1;
    }
  }
  else {
    uVar1 = iVar3 == 2;
    if (!(bool)uVar1) {
      if (iVar3 != 0) goto LAB_1076b7d90;
      goto LAB_1076b7d54;
    }
    bStack_198 = 1;
  }
  func_0x0001077123b4();
  func_0x000107714890();
LAB_1076b7d90:
  func_0x000107707b78();
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    ___cxa_guard_abort(0x1136d3f88);
    do {
      func_0x000107714988();
    } while( true );
  }
  return;
}



/* Entry: 1076bb494; end: 1076bb653;  */

void FUN_1076bb494(void)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  int iVar3;
  undefined *puVar4;
  int unaff_w24;
  
  func_0x00010771fbd0();
  func_0x000107707564();
  if ((bRam00000001136d41b8 & 1) == 0) {
    iVar3 = 0x136d41b8;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x000107708f70(0x1137112a0);
      ___cxa_guard_release(0x1136d41b8);
    }
  }
  if ((bRam00000001136d41c0 & 1) == 0) {
    iVar3 = 0x136d41c0;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x000107711de0(0x1137112d8);
      ___cxa_guard_release(0x1136d41c0);
    }
  }
  if ((bRam00000001136d41c8 & 1) == 0) {
    iVar3 = 0x136d41c8;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x000107710e3c(0x113711310);
      ___cxa_guard_release(0x1136d41c8);
    }
  }
  func_0x0001077091ec();
  func_0x00010770a524();
  func_0x00010770c040();
  func_0x000107714830();
  func_0x000107709348();
  func_0x000107714850();
  func_0x00010770c1c4();
  func_0x00010771a96c();
  if ((bool)in_ZR) {
    func_0x000107718dfc();
    func_0x000107714a5c();
    uVar1 = 0x968;
    if ((bool)in_ZR) {
      uVar1 = 0x9a0;
    }
    func_0x00010771f760(uVar1);
    func_0x0001077113e0();
    func_0x00010770eabc();
    func_0x00010770d688();
    func_0x000107714830();
  }
  else {
    func_0x00010770b7b0();
    func_0x00010770cf5c();
    func_0x000107714fdc();
  }
  func_0x000107714850();
  func_0x000107714890();
  func_0x000107715a9c();
  func_0x000107707bc4();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  ___cxa_guard_abort(0x1136d41c8);
  func_0x0001077149ec();
  puVar4 = &DAT_1076bb654;
  func_0x0001077184d0();
  func_0x000107707670();
  if ((bRam00000001136d41d0 & 1) == 0) {
    puVar4 = (undefined *)0x1136d41d0;
    ___cxa_guard_acquire();
    if ((int)puVar4 != 0) {
      func_0x000107708e10(0x113711348);
      puVar4 = (undefined *)0x1136d41d0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d41d8 & 1) == 0) {
    puVar4 = (undefined *)0x1136d41d8;
    ___cxa_guard_acquire();
    if ((int)puVar4 != 0) {
      func_0x000107708bb0(0x113711380);
      puVar4 = (undefined *)0x1136d41d8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d41e0 & 1) == 0) {
    puVar4 = (undefined *)0x1136d41e0;
    ___cxa_guard_acquire();
    if ((int)puVar4 != 0) {
      func_0x000107708de0(0x1137113b8);
      puVar4 = (undefined *)0x1136d41e0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d41e8 & 1) == 0) {
    puVar4 = (undefined *)0x1136d41e8;
    ___cxa_guard_acquire();
    if ((int)puVar4 != 0) {
      func_0x000107708dc0(0x1137113f0);
      puVar4 = (undefined *)0x1136d41e8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d41f0 & 1) == 0) {
    puVar4 = (undefined *)0x1136d41f0;
    ___cxa_guard_acquire();
    if ((int)puVar4 != 0) {
      func_0x000107708dd0(0x113711428);
      puVar4 = (undefined *)0x1136d41f0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d41f8 & 1) == 0) {
    puVar4 = (undefined *)0x1136d41f8;
    ___cxa_guard_acquire();
    if ((int)puVar4 != 0) {
      func_0x000107708e00(0x113711460);
      puVar4 = (undefined *)0x1136d41f8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4200 & 1) == 0) {
    puVar4 = (undefined *)0x1136d4200;
    ___cxa_guard_acquire();
    if ((int)puVar4 != 0) {
      func_0x000107708df0(0x113711498);
      puVar4 = (undefined *)0x1136d4200;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4208 & 1) == 0) {
    puVar4 = (undefined *)0x1136d4208;
    ___cxa_guard_acquire();
    if ((int)puVar4 != 0) {
      func_0x000107708db0(0x1137114d0);
      puVar4 = (undefined *)0x1136d4208;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4210 & 1) == 0) {
    puVar4 = (undefined *)0x1136d4210;
    ___cxa_guard_acquire();
    if ((int)puVar4 != 0) {
      func_0x000107714cdc(0x113711508,&UNK_10f42475d);
      puVar4 = (undefined *)0x1136d4210;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4218 & 1) == 0) {
    puVar4 = (undefined *)0x1136d4218;
    ___cxa_guard_acquire();
    if ((int)puVar4 != 0) {
      func_0x000107709394(0x113711540);
      puVar4 = (undefined *)0x1136d4218;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4220 & 1) == 0) {
    puVar4 = (undefined *)0x1136d4220;
    ___cxa_guard_acquire();
    if ((int)puVar4 != 0) {
      func_0x000107714d08(0x113711578,&UNK_10f424775);
      puVar4 = (undefined *)0x1136d4220;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4228 & 1) == 0) {
    puVar4 = (undefined *)0x1136d4228;
    ___cxa_guard_acquire();
    if ((int)puVar4 != 0) {
      func_0x00010770927c(0x1137115b0);
      puVar4 = (undefined *)0x1136d4228;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4230 & 1) == 0) {
    puVar4 = (undefined *)0x1136d4230;
    ___cxa_guard_acquire();
    if ((int)puVar4 != 0) {
      func_0x000107709570(0x1137115e8);
      puVar4 = (undefined *)0x1136d4230;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4238 & 1) == 0) {
    puVar4 = (undefined *)0x1136d4238;
    ___cxa_guard_acquire();
    if ((int)puVar4 != 0) {
      func_0x000107714d08(0x113711620,&UNK_10f424790);
      puVar4 = (undefined *)0x1136d4238;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4240 & 1) == 0) {
    puVar4 = (undefined *)0x1136d4240;
    ___cxa_guard_acquire();
    if ((int)puVar4 != 0) {
      func_0x000107709020(0x113711658);
      puVar4 = (undefined *)0x1136d4240;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4248 & 1) == 0) {
    puVar4 = (undefined *)0x1136d4248;
    ___cxa_guard_acquire();
    if ((int)puVar4 != 0) {
      func_0x0001077093a4(0x113711690);
      puVar4 = (undefined *)0x1136d4248;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4250 & 1) == 0) {
    puVar4 = (undefined *)0x1136d4250;
    ___cxa_guard_acquire();
    if ((int)puVar4 != 0) {
      func_0x0001077093c4(0x1137116c8);
      puVar4 = (undefined *)0x1136d4250;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4258 & 1) == 0) {
    puVar4 = (undefined *)0x1136d4258;
    ___cxa_guard_acquire();
    if ((int)puVar4 != 0) {
      func_0x000107714d08(0x113711700,&UNK_10f4247ab);
      puVar4 = (undefined *)0x1136d4258;
      ___cxa_guard_release();
    }
  }
  func_0x0001077083d4();
  func_0x00010770989c();
  func_0x00010770999c();
  func_0x000107714838();
  func_0x00010771a8d0();
  func_0x00010770ddac();
  func_0x00010770c2cc();
  func_0x000107714838();
  func_0x00010770df44();
  func_0x0001077098ac();
  func_0x00010770dd1c();
  func_0x000107714838();
  func_0x000107714b48();
  func_0x000107714830();
  func_0x000107715f60();
  iVar3 = (int)puVar4;
  if ((bool)in_ZR) {
    func_0x000107715888();
    func_0x0001077083c0();
    func_0x000107715a84();
    iVar3 = (int)puVar4;
    if (!(bool)in_ZR) goto code_r0x0001076bb824;
    func_0x0001077152cc();
    func_0x000104c32db4();
    iVar3 = (int)puVar4;
    if (((ulong)puVar4 & 1) == 0) {
      func_0x000107714b98();
      if (iVar3 != 0) {
        func_0x00010771a8d0();
        goto code_r0x0001076bb94c;
      }
      func_0x000107708f80();
      func_0x000107708fb0();
      func_0x000107714838();
      func_0x000107708fa0();
      func_0x000107708f90();
      func_0x000107714838();
      func_0x00010771a8d0();
      func_0x00010770ceb0();
      func_0x00010770c290();
      func_0x000107714838();
      func_0x00010770c3f4();
      func_0x0001077154a0();
      if ((bool)in_ZR) {
        func_0x000107715044();
        func_0x00010771503c();
        func_0x000107707e98();
        func_0x000107714860();
        func_0x0001077150bc();
        uVar2 = 0;
        if ((bool)in_ZR) {
          func_0x000107714c84();
          func_0x000107707ec0();
          func_0x00010770cdcc();
          func_0x00010771a8d0();
          func_0x00010770cea4();
          func_0x00010770cce0();
          func_0x000107714888();
          func_0x000107714860();
          func_0x00010770c3b8();
          func_0x000107714838();
          func_0x000107714848();
          func_0x00010770c4e8();
          func_0x0001077154c0();
          if (!(bool)in_ZR) {
            func_0x000107707e6c();
            goto code_r0x0001076bb904;
          }
          func_0x000107714f50();
          func_0x000107714d34();
          goto code_r0x0001076bb90c;
        }
        goto code_r0x0001076bb92c;
      }
      func_0x000107707e58();
      uVar2 = in_ZR;
      goto code_r0x0001076bb924;
    }
code_r0x0001076bb94c:
    func_0x000107714d34();
code_r0x0001076bb950:
    func_0x00010770988c();
    func_0x00010770dd70();
code_r0x0001076bb958:
    func_0x000107714830();
  }
  else {
code_r0x0001076bb824:
    func_0x000107708f80();
    func_0x000107708fb0();
    func_0x000107714838();
    func_0x000107708fa0();
    func_0x000107708f90();
    func_0x000107714838();
    func_0x00010771a8d0();
    func_0x00010770ceb0();
    func_0x00010770c290();
    func_0x000107714838();
    func_0x00010770c3f4();
    func_0x0001077154a0();
    if (!(bool)in_ZR) {
      func_0x000107707e58();
      uVar2 = in_ZR;
code_r0x0001076bb924:
      func_0x00010770dd7c();
      func_0x000107714ed0();
code_r0x0001076bb92c:
      func_0x000107714838();
      func_0x000107714848();
      in_ZR = uVar2;
      goto code_r0x0001076bb958;
    }
    func_0x000107715044();
    func_0x00010771503c();
    func_0x000107707e98();
    func_0x000107714860();
    func_0x0001077150bc();
    uVar2 = 0;
    if (!(bool)in_ZR) goto code_r0x0001076bb92c;
    func_0x000107714c84();
    func_0x000107707ec0();
    func_0x00010770cdcc();
    func_0x00010771a8d0();
    func_0x00010770cea4();
    func_0x00010770cce0();
    func_0x000107714888();
    func_0x000107714860();
    func_0x00010770c3b8();
    func_0x000107714838();
    func_0x000107714848();
    func_0x00010770c4e8();
    func_0x0001077154c0();
    if ((bool)in_ZR) {
      func_0x000107714f50();
      func_0x000107714d34();
    }
    else {
      func_0x000107707e6c();
code_r0x0001076bb904:
      func_0x00010770dd88();
      func_0x000107714bf4();
    }
code_r0x0001076bb90c:
    func_0x000107714838();
    func_0x000107714830();
    in_ZR = unaff_w24 == 3;
    if ((bool)in_ZR) goto code_r0x0001076bb950;
  }
  func_0x00010770c3d0();
  func_0x00010770ce8c();
  func_0x000107714e44();
  func_0x0001077150bc();
  if ((bool)in_ZR) {
    func_0x000107714c84();
    func_0x000107708370();
    func_0x000107715e44();
    if ((bool)in_ZR) {
      func_0x0001077154e4();
      func_0x000104c32db4();
      if (iVar3 == 0) {
        func_0x000107714b98();
        if (iVar3 == 0) {
          func_0x000107714b98();
          if (iVar3 == 0) {
            func_0x000107714b98();
            if (iVar3 == 0) {
              func_0x000107714b98();
              if (iVar3 == 0) {
                func_0x000107714b98();
                if (iVar3 == 0) {
                  func_0x000107714b98();
                  if (iVar3 == 0) {
                    func_0x00010771a8d0();
                    func_0x00010770d824();
                    func_0x000107707860();
                  }
                  else {
                    func_0x00010770d824();
                    func_0x000107707860();
                  }
                }
                else {
                  func_0x00010770d824();
                  func_0x000107707860();
                }
              }
              else {
                func_0x00010770d824();
                func_0x000107707860();
              }
            }
            else {
              func_0x00010770d824();
              func_0x000107707860();
            }
          }
          else {
            func_0x00010770d824();
            func_0x000107707860();
          }
        }
        else {
          func_0x00010770d824();
          func_0x000107707860();
        }
      }
      else {
        func_0x00010770d824();
        func_0x000107707860();
      }
      goto code_r0x0001076bb9bc;
    }
  }
  func_0x00010771a8d0();
  func_0x00010770d824();
  func_0x000107707860();
code_r0x0001076bb9bc:
  func_0x00010770a0a4();
  func_0x000107714838();
  func_0x000107714830();
  func_0x00010770d7e8();
  func_0x00010770cc2c();
  func_0x00010770c3b8();
  func_0x000107714890();
  func_0x000107707d28();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  ___cxa_guard_abort(0x1136d4258);
  do {
    func_0x0001077149ec();
    func_0x00010770cd04();
  } while( true );
}



/* Entry: 1076beea8; end: 1076c0373;  */

/* WARNING: Possible PIC construction at 0x0001076bf1fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001076bf2f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001076bf200) */
/* WARNING: Removing unreachable block (ram,0x0001076bf208) */
/* WARNING: Removing unreachable block (ram,0x0001076bf298) */
/* WARNING: Removing unreachable block (ram,0x0001076bf228) */
/* WARNING: Removing unreachable block (ram,0x0001076bf2a8) */
/* WARNING: Removing unreachable block (ram,0x0001076bf234) */
/* WARNING: Removing unreachable block (ram,0x0001076bf23c) */
/* WARNING: Removing unreachable block (ram,0x0001076bf24c) */
/* WARNING: Removing unreachable block (ram,0x0001076bf25c) */
/* WARNING: Removing unreachable block (ram,0x0001076bf27c) */
/* WARNING: Removing unreachable block (ram,0x0001076bf2b8) */
/* WARNING: Removing unreachable block (ram,0x0001076bf2bc) */
/* WARNING: Removing unreachable block (ram,0x0001076bf2c0) */
/* WARNING: Removing unreachable block (ram,0x0001076bf2cc) */
/* WARNING: Removing unreachable block (ram,0x0001076bf2e4) */
/* WARNING: Removing unreachable block (ram,0x0001076bf2ec) */
/* WARNING: Removing unreachable block (ram,0x0001076bf2f4) */
/* WARNING: Removing unreachable block (ram,0x0001076bf2fc) */
/* WARNING: Removing unreachable block (ram,0x0001076bf30c) */
/* WARNING: Removing unreachable block (ram,0x0001076bf390) */
/* WARNING: Removing unreachable block (ram,0x0001076bf31c) */
/* WARNING: Removing unreachable block (ram,0x0001076bf3a0) */
/* WARNING: Removing unreachable block (ram,0x0001076bf328) */
/* WARNING: Removing unreachable block (ram,0x0001076bf330) */
/* WARNING: Removing unreachable block (ram,0x0001076bf340) */
/* WARNING: Removing unreachable block (ram,0x0001076bf350) */
/* WARNING: Removing unreachable block (ram,0x0001076bf374) */
/* WARNING: Removing unreachable block (ram,0x0001076bf3b0) */
/* WARNING: Removing unreachable block (ram,0x0001076bf3b4) */
/* WARNING: Removing unreachable block (ram,0x0001076bf3b8) */
/* WARNING: Removing unreachable block (ram,0x0001076bf3c4) */
/* WARNING: Removing unreachable block (ram,0x0001076bf3d4) */
/* WARNING: Removing unreachable block (ram,0x0001076bf3e4) */
/* WARNING: Removing unreachable block (ram,0x0001076bf3ec) */
/* WARNING: Removing unreachable block (ram,0x0001076bf3fc) */
/* WARNING: Removing unreachable block (ram,0x0001076bf40c) */
/* WARNING: Removing unreachable block (ram,0x0001076bf414) */
/* WARNING: Removing unreachable block (ram,0x0001076bf424) */
/* WARNING: Removing unreachable block (ram,0x0001076bf434) */
/* WARNING: Removing unreachable block (ram,0x0001076bf448) */
/* WARNING: Removing unreachable block (ram,0x0001076bf454) */
/* WARNING: Removing unreachable block (ram,0x0001076bf470) */
/* WARNING: Removing unreachable block (ram,0x0001076bf45c) */
/* WARNING: Removing unreachable block (ram,0x0001076bf474) */
/* WARNING: Removing unreachable block (ram,0x0001076bf480) */
/* WARNING: Removing unreachable block (ram,0x0001076bf490) */
/* WARNING: Removing unreachable block (ram,0x0001076bf498) */
/* WARNING: Removing unreachable block (ram,0x0001076bf4b8) */
/* WARNING: Removing unreachable block (ram,0x0001076bf4cc) */
/* WARNING: Removing unreachable block (ram,0x0001076bf4dc) */
/* WARNING: Removing unreachable block (ram,0x0001076bf4ec) */
/* WARNING: Removing unreachable block (ram,0x0001076bf4f4) */
/* WARNING: Removing unreachable block (ram,0x0001076bf4fc) */
/* WARNING: Removing unreachable block (ram,0x0001076bf50c) */
/* WARNING: Removing unreachable block (ram,0x0001076bf51c) */
/* WARNING: Removing unreachable block (ram,0x0001076bf524) */
/* WARNING: Removing unreachable block (ram,0x0001076bf534) */
/* WARNING: Removing unreachable block (ram,0x0001076bf544) */
/* WARNING: Removing unreachable block (ram,0x0001076bf558) */
/* WARNING: Removing unreachable block (ram,0x0001076bf564) */
/* WARNING: Removing unreachable block (ram,0x0001076bf580) */
/* WARNING: Removing unreachable block (ram,0x0001076bf56c) */
/* WARNING: Removing unreachable block (ram,0x0001076bf584) */
/* WARNING: Removing unreachable block (ram,0x0001076bf590) */
/* WARNING: Removing unreachable block (ram,0x0001076bf5a0) */
/* WARNING: Removing unreachable block (ram,0x0001076bf5c8) */
/* WARNING: Removing unreachable block (ram,0x0001076bf5d4) */
/* WARNING: Removing unreachable block (ram,0x0001076bf5f0) */
/* WARNING: Removing unreachable block (ram,0x0001076bf5dc) */
/* WARNING: Removing unreachable block (ram,0x0001076bf5f4) */
/* WARNING: Removing unreachable block (ram,0x0001076bf5f8) */
/* WARNING: Removing unreachable block (ram,0x0001076bfef0) */
/* WARNING: Removing unreachable block (ram,0x0001076c0220) */
/* WARNING: Removing unreachable block (ram,0x0001076c0370) */
/* WARNING: Removing unreachable block (ram,0x0001076bf620) */

void FUN_1076beea8(ulong param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  ulong uVar3;
  uint extraout_w8;
  ulong unaff_x21;
  int unaff_w23;
  
  func_0x00010771cb48();
  func_0x0001077073b8();
  if ((bRam00000001136d4430 & 1) == 0) {
    param_1 = 0x1136d4430;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708e10(0x1137123b0);
      param_1 = 0x1136d4430;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4438 & 1) == 0) {
    param_1 = 0x1136d4438;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708bb0(0x1137123e8);
      param_1 = 0x1136d4438;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4440 & 1) == 0) {
    param_1 = 0x1136d4440;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708de0(0x113712420);
      param_1 = 0x1136d4440;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4448 & 1) == 0) {
    param_1 = 0x1136d4448;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708dc0(0x113712458);
      param_1 = 0x1136d4448;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4450 & 1) == 0) {
    param_1 = 0x1136d4450;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708dd0(0x113712490);
      param_1 = 0x1136d4450;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4458 & 1) == 0) {
    param_1 = 0x1136d4458;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708e00(0x1137124c8);
      param_1 = 0x1136d4458;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4460 & 1) == 0) {
    param_1 = 0x1136d4460;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708df0(0x113712500);
      param_1 = 0x1136d4460;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4468 & 1) == 0) {
    param_1 = 0x1136d4468;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708db0(0x113712538);
      param_1 = 0x1136d4468;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4470 & 1) == 0) {
    param_1 = 0x1136d4470;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077092ac(0x113712570);
      param_1 = 0x1136d4470;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4478 & 1) == 0) {
    param_1 = 0x1136d4478;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770d200(0x1137125a8);
      param_1 = 0x1136d4478;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4480 & 1) == 0) {
    param_1 = 0x1136d4480;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a9c(0x1137125e0);
      param_1 = 0x1136d4480;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4488 & 1) == 0) {
    param_1 = 0x1136d4488;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708f70(0x113712618);
      param_1 = 0x1136d4488;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4490 & 1) == 0) {
    param_1 = 0x1136d4490;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708fd0(0x113712650);
      param_1 = 0x1136d4490;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4498 & 1) == 0) {
    param_1 = 0x1136d4498;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a8c(0x113712688);
      param_1 = 0x1136d4498;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d44a0 & 1) == 0) {
    param_1 = 0x1136d44a0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a7c(0x1137126c0);
      param_1 = 0x1136d44a0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d44a8 & 1) == 0) {
    param_1 = 0x1136d44a8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a6c(0x1137126f8);
      param_1 = 0x1136d44a8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d44b0 & 1) == 0) {
    param_1 = 0x1136d44b0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a5c(0x113712730);
      param_1 = 0x1136d44b0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d44b8 & 1) == 0) {
    param_1 = 0x1136d44b8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770995c(0x113712768);
      param_1 = 0x1136d44b8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d44c0 & 1) == 0) {
    param_1 = 0x1136d44c0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770c128(0x1137127a0);
      param_1 = 0x1136d44c0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d44c8 & 1) == 0) {
    param_1 = 0x1136d44c8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709570(0x1137127d8);
      param_1 = 0x1136d44c8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d44d0 & 1) == 0) {
    param_1 = 0x1136d44d0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077094a0(0x113712810);
      param_1 = 0x1136d44d0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d44d8 & 1) == 0) {
    param_1 = 0x1136d44d8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a4c(0x113712848);
      param_1 = 0x1136d44d8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d44e0 & 1) == 0) {
    param_1 = 0x1136d44e0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770c108(0x113712880);
      param_1 = 0x1136d44e0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d44e8 & 1) == 0) {
    param_1 = 0x1136d44e8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709394(0x1137128b8);
      param_1 = 0x1136d44e8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d44f0 & 1) == 0) {
    param_1 = 0x1136d44f0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a3c(0x1137128f0);
      param_1 = 0x1136d44f0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d44f8 & 1) == 0) {
    param_1 = 0x1136d44f8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770abb8(0x113712928);
      param_1 = 0x1136d44f8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4500 & 1) == 0) {
    param_1 = 0x1136d4500;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770927c(0x113712960);
      param_1 = 0x1136d4500;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4508 & 1) == 0) {
    param_1 = 0x1136d4508;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a2c(0x113712998);
      param_1 = 0x1136d4508;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4510 & 1) == 0) {
    param_1 = 0x1136d4510;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077090d0(0x1137129d0);
      param_1 = 0x1136d4510;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4518 & 1) == 0) {
    param_1 = 0x1136d4518;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709738(0x113712a08);
      param_1 = 0x1136d4518;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4520 & 1) == 0) {
    param_1 = 0x1136d4520;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709728(0x113712a40);
      param_1 = 0x1136d4520;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4528 & 1) == 0) {
    param_1 = 0x1136d4528;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770c0f8(0x113712a78);
      param_1 = 0x1136d4528;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4530 & 1) == 0) {
    param_1 = 0x1136d4530;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770bab4(0x113712ab0);
      param_1 = 0x1136d4530;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4538 & 1) == 0) {
    param_1 = 0x1136d4538;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077093c4(0x113712ae8);
      param_1 = 0x1136d4538;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4540 & 1) == 0) {
    param_1 = 0x1136d4540;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a1c(0x113712b20);
      param_1 = 0x1136d4540;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4548 & 1) == 0) {
    param_1 = 0x1136d4548;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709020(0x113712b58);
      param_1 = 0x1136d4548;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4550 & 1) == 0) {
    param_1 = 0x1136d4550;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077093a4(0x113712b90);
      param_1 = 0x1136d4550;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4558 & 1) == 0) {
    param_1 = 0x1136d4558;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a0c(0x113712bc8);
      param_1 = 0x1136d4558;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4560 & 1) == 0) {
    param_1 = 0x1136d4560;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077099fc(0x113712c00);
      param_1 = 0x1136d4560;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4568 & 1) == 0) {
    param_1 = 0x1136d4568;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770c0c0(0x113712c38);
      param_1 = 0x1136d4568;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4570 & 1) == 0) {
    param_1 = 0x1136d4570;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077099ac(0x113712c70);
      param_1 = 0x1136d4570;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4578 & 1) == 0) {
    param_1 = 0x1136d4578;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770a990(0x113712ca8);
      param_1 = 0x1136d4578;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4580 & 1) == 0) {
    param_1 = 0x1136d4580;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708f50(0x113712ce0);
      param_1 = 0x1136d4580;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4588 & 1) == 0) {
    param_1 = 0x1136d4588;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708f00(0x113712d18);
      param_1 = 0x1136d4588;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4590 & 1) == 0) {
    param_1 = 0x1136d4590;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709eac(0x113712d50);
      param_1 = 0x1136d4590;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4598 & 1) == 0) {
    param_1 = 0x1136d4598;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709e9c(0x113712d88);
      param_1 = 0x1136d4598;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d45a0 & 1) == 0) {
    param_1 = 0x1136d45a0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077090e0(0x113712dc0);
      param_1 = 0x1136d45a0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d45a8 & 1) == 0) {
    param_1 = 0x1136d45a8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077090f0(0x113712df8);
      param_1 = 0x1136d45a8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d45b0 & 1) == 0) {
    param_1 = 0x1136d45b0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709060(0x113712e30);
      param_1 = 0x1136d45b0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d45b8 & 1) == 0) {
    param_1 = 0x1136d45b8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708ef0(0x113712e68);
      param_1 = 0x1136d45b8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d45c0 & 1) == 0) {
    param_1 = 0x1136d45c0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708ee0(0x113712ea0);
      param_1 = 0x1136d45c0;
      ___cxa_guard_release();
    }
  }
  func_0x000107707344();
  func_0x000107714af0();
  func_0x00010771cb48();
  func_0x000107707a14();
  func_0x00010770847c();
  func_0x000107708fe0();
  func_0x000107709030();
  func_0x000107714830();
  func_0x0001077185c0();
  func_0x00010770debc();
  func_0x00010770c1b8();
  func_0x000107714830();
  func_0x00010770df98();
  func_0x0001077099bc();
  func_0x00010770dec8();
  func_0x000107714830();
  func_0x00010771505c();
  func_0x000107714850();
  func_0x000107715a10();
  uVar3 = param_1;
  if ((bool)in_ZR) {
    func_0x000107715970();
    func_0x000107707ee8();
    func_0x000107715018();
    uVar3 = param_1;
    if (!(bool)in_ZR) goto code_r0x0001076c0414;
    func_0x000107714bc0();
    uVar3 = param_1;
    func_0x00010771e128();
    unaff_x21 = param_1;
    if ((uVar3 & 1) != 0) {
code_r0x0001076c0538:
      func_0x000107714da8();
code_r0x0001076c053c:
      func_0x00010770f320();
      func_0x00010771610c();
      func_0x00010770f32c();
      if ((uVar3 & 1) == 0) {
        func_0x00010770aa70();
        func_0x00010770aa80();
        func_0x000107714850();
        func_0x0001077079e0();
        func_0x000107714890();
        func_0x0001077167f8();
        func_0x00010770f728();
        uVar1 = 0;
        if ((bool)in_ZR) {
          uVar1 = extraout_w8;
        }
        unaff_x21 = (ulong)uVar1;
        func_0x000107714830();
      }
      else {
        func_0x000107715ce8();
      }
      func_0x000107714cac();
      func_0x000107714c7c();
      goto code_r0x0001076c059c;
    }
    func_0x000107714c8c();
    if ((int)uVar3 != 0) {
      func_0x0001077185c0();
      goto code_r0x0001076c0538;
    }
    func_0x00010771f610();
    func_0x000107709010();
    func_0x000107708ff0();
    func_0x000107714830();
    func_0x00010771f604();
    func_0x000107708d1c();
    func_0x0001077096bc();
    func_0x000107714830();
    func_0x0001077185c0();
    func_0x00010770cc98();
    func_0x00010770c1dc();
    func_0x000107714830();
    func_0x00010770c230();
    func_0x0001077152d4();
    if ((bool)in_ZR) {
      func_0x000107714cc4();
      func_0x00010771f5f8();
      func_0x000107714d44();
      func_0x000107708134();
      func_0x000107714848();
      func_0x000107714898();
      uVar2 = 0;
      if ((bool)in_ZR) {
        func_0x000107714870();
        func_0x000107708148();
        func_0x00010770c430();
        func_0x0001077185c0();
        func_0x00010770d6d0();
        func_0x00010770c424();
        func_0x000107714860();
        func_0x000107714848();
        func_0x000107714858();
        func_0x000107714830();
        func_0x000107714838();
        func_0x00010770c260();
        func_0x000107715f3c();
        if (!(bool)in_ZR) {
          func_0x000107707ed4();
          goto code_r0x0001076c04e8;
        }
        func_0x00010771504c();
        func_0x000107714da8();
        goto code_r0x0001076c04f0;
      }
      goto code_r0x0001076c0510;
    }
    func_0x000107707eac();
    uVar2 = in_ZR;
code_r0x0001076c0508:
    func_0x00010770d148();
    func_0x000107714cac();
code_r0x0001076c0510:
    func_0x000107714830();
    func_0x000107714838();
    func_0x000107714850();
    in_ZR = uVar2;
  }
  else {
code_r0x0001076c0414:
    func_0x00010771f610();
    func_0x000107709010();
    func_0x000107708ff0();
    func_0x000107714830();
    func_0x00010771f604();
    func_0x000107708d1c();
    func_0x0001077096bc();
    func_0x000107714830();
    func_0x0001077185c0();
    func_0x00010770cc98();
    func_0x00010770c1dc();
    func_0x000107714830();
    func_0x00010770c230();
    func_0x0001077152d4();
    if (!(bool)in_ZR) {
      func_0x000107707eac();
      uVar2 = in_ZR;
      goto code_r0x0001076c0508;
    }
    func_0x000107714cc4();
    func_0x00010771f5f8();
    func_0x000107714d44();
    func_0x000107708134();
    func_0x000107714848();
    func_0x000107714898();
    uVar2 = 0;
    if (!(bool)in_ZR) goto code_r0x0001076c0510;
    func_0x000107714870();
    func_0x000107708148();
    func_0x00010770c430();
    func_0x0001077185c0();
    func_0x00010770d6d0();
    func_0x00010770c424();
    func_0x000107714860();
    func_0x000107714848();
    func_0x000107714858();
    func_0x000107714830();
    func_0x000107714838();
    func_0x00010770c260();
    func_0x000107715f3c();
    if ((bool)in_ZR) {
      func_0x00010771504c();
      func_0x000107714da8();
    }
    else {
      func_0x000107707ed4();
code_r0x0001076c04e8:
      func_0x00010770d44c();
      func_0x000107714c7c();
    }
code_r0x0001076c04f0:
    func_0x000107714830();
    func_0x000107714850();
    in_ZR = unaff_w23 == 3;
    if ((bool)in_ZR) goto code_r0x0001076c053c;
  }
  func_0x000107715758();
code_r0x0001076c059c:
  func_0x00010770c324();
  func_0x00010770f338();
  func_0x000107714b48();
  if ((unaff_x21 & 1) == 0) {
    func_0x000107707f1c();
    func_0x000107714830();
  }
  func_0x000107707b78();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010770c284();
  func_0x000107714858();
  func_0x000107714830();
  func_0x0001077151f4();
  func_0x00010726af18();
  func_0x00010770d27c();
  func_0x00010770c324();
  func_0x00010770d640();
  func_0x000107714b48();
  do {
    func_0x000107714988();
  } while( true );
}



/* Entry: 1076c30a0; end: 1076c338f;  */

/* WARNING: Possible PIC construction at 0x0001076c36d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001076c37c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001076c36d8) */
/* WARNING: Removing unreachable block (ram,0x0001076c36e0) */
/* WARNING: Removing unreachable block (ram,0x0001076c3770) */
/* WARNING: Removing unreachable block (ram,0x0001076c3700) */
/* WARNING: Removing unreachable block (ram,0x0001076c3780) */
/* WARNING: Removing unreachable block (ram,0x0001076c370c) */
/* WARNING: Removing unreachable block (ram,0x0001076c3714) */
/* WARNING: Removing unreachable block (ram,0x0001076c3724) */
/* WARNING: Removing unreachable block (ram,0x0001076c3734) */
/* WARNING: Removing unreachable block (ram,0x0001076c3754) */
/* WARNING: Removing unreachable block (ram,0x0001076c3790) */
/* WARNING: Removing unreachable block (ram,0x0001076c3794) */
/* WARNING: Removing unreachable block (ram,0x0001076c3798) */
/* WARNING: Removing unreachable block (ram,0x0001076c37a4) */
/* WARNING: Removing unreachable block (ram,0x0001076c37bc) */
/* WARNING: Removing unreachable block (ram,0x0001076c37c4) */
/* WARNING: Removing unreachable block (ram,0x0001076c37cc) */
/* WARNING: Removing unreachable block (ram,0x0001076c37d4) */
/* WARNING: Removing unreachable block (ram,0x0001076c37e4) */
/* WARNING: Removing unreachable block (ram,0x0001076c3868) */
/* WARNING: Removing unreachable block (ram,0x0001076c37f4) */
/* WARNING: Removing unreachable block (ram,0x0001076c3878) */
/* WARNING: Removing unreachable block (ram,0x0001076c3800) */
/* WARNING: Removing unreachable block (ram,0x0001076c3808) */
/* WARNING: Removing unreachable block (ram,0x0001076c3818) */
/* WARNING: Removing unreachable block (ram,0x0001076c3828) */
/* WARNING: Removing unreachable block (ram,0x0001076c384c) */
/* WARNING: Removing unreachable block (ram,0x0001076c3888) */
/* WARNING: Removing unreachable block (ram,0x0001076c388c) */
/* WARNING: Removing unreachable block (ram,0x0001076c3890) */
/* WARNING: Removing unreachable block (ram,0x0001076c389c) */
/* WARNING: Removing unreachable block (ram,0x0001076c38ac) */
/* WARNING: Removing unreachable block (ram,0x0001076c38bc) */
/* WARNING: Removing unreachable block (ram,0x0001076c38c4) */
/* WARNING: Removing unreachable block (ram,0x0001076c38d4) */
/* WARNING: Removing unreachable block (ram,0x0001076c38e4) */
/* WARNING: Removing unreachable block (ram,0x0001076c38ec) */
/* WARNING: Removing unreachable block (ram,0x0001076c38fc) */
/* WARNING: Removing unreachable block (ram,0x0001076c390c) */
/* WARNING: Removing unreachable block (ram,0x0001076c3920) */
/* WARNING: Removing unreachable block (ram,0x0001076c392c) */
/* WARNING: Removing unreachable block (ram,0x0001076c3948) */
/* WARNING: Removing unreachable block (ram,0x0001076c3934) */
/* WARNING: Removing unreachable block (ram,0x0001076c394c) */
/* WARNING: Removing unreachable block (ram,0x0001076c3958) */
/* WARNING: Removing unreachable block (ram,0x0001076c3968) */
/* WARNING: Removing unreachable block (ram,0x0001076c3970) */
/* WARNING: Removing unreachable block (ram,0x0001076c3990) */
/* WARNING: Removing unreachable block (ram,0x0001076c39a4) */
/* WARNING: Removing unreachable block (ram,0x0001076c39b4) */
/* WARNING: Removing unreachable block (ram,0x0001076c39c4) */
/* WARNING: Removing unreachable block (ram,0x0001076c39cc) */
/* WARNING: Removing unreachable block (ram,0x0001076c39d4) */
/* WARNING: Removing unreachable block (ram,0x0001076c39e4) */
/* WARNING: Removing unreachable block (ram,0x0001076c39f4) */
/* WARNING: Removing unreachable block (ram,0x0001076c39fc) */
/* WARNING: Removing unreachable block (ram,0x0001076c3a0c) */
/* WARNING: Removing unreachable block (ram,0x0001076c3a1c) */
/* WARNING: Removing unreachable block (ram,0x0001076c3a30) */
/* WARNING: Removing unreachable block (ram,0x0001076c3a3c) */
/* WARNING: Removing unreachable block (ram,0x0001076c3a58) */
/* WARNING: Removing unreachable block (ram,0x0001076c3a44) */
/* WARNING: Removing unreachable block (ram,0x0001076c3a5c) */
/* WARNING: Removing unreachable block (ram,0x0001076c3a68) */
/* WARNING: Removing unreachable block (ram,0x0001076c3a78) */
/* WARNING: Removing unreachable block (ram,0x0001076c3aa0) */
/* WARNING: Removing unreachable block (ram,0x0001076c3aac) */
/* WARNING: Removing unreachable block (ram,0x0001076c3ac8) */
/* WARNING: Removing unreachable block (ram,0x0001076c3ab4) */
/* WARNING: Removing unreachable block (ram,0x0001076c3acc) */
/* WARNING: Removing unreachable block (ram,0x0001076c3ad0) */
/* WARNING: Removing unreachable block (ram,0x0001076c439c) */
/* WARNING: Removing unreachable block (ram,0x0001076c46bc) */
/* WARNING: Removing unreachable block (ram,0x0001076c480c) */
/* WARNING: Removing unreachable block (ram,0x0001076c3af8) */

void FUN_1076c30a0(int param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  ulong uVar5;
  uint extraout_w8;
  ulong unaff_x21;
  int iVar6;
  undefined1 auStack_178 [104];
  int iStack_110;
  byte bStack_88;
  undefined1 auStack_80 [128];
  
  func_0x00010771cb70();
  func_0x0001077073b8();
  if ((bRam00000001136d4720 & 1) == 0) {
    iVar6 = 0x136d4720;
    ___cxa_guard_acquire();
    param_1 = 0;
    if (iVar6 != 0) {
      func_0x000107708f50(0x113713840);
      param_1 = 0x136d4720;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4728 & 1) == 0) {
    iVar6 = 0x136d4728;
    ___cxa_guard_acquire();
    param_1 = 0;
    if (iVar6 != 0) {
      func_0x000107708f00(0x113713878);
      param_1 = 0x136d4728;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4730 & 1) == 0) {
    iVar6 = 0x136d4730;
    ___cxa_guard_acquire();
    param_1 = 0;
    if (iVar6 != 0) {
      func_0x00010770abb8(0x1137138b0);
      param_1 = 0x136d4730;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4738 & 1) == 0) {
    iVar6 = 0x136d4738;
    ___cxa_guard_acquire();
    param_1 = 0;
    if (iVar6 != 0) {
      func_0x000107708ef0(0x1137138e8);
      param_1 = 0x136d4738;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4740 & 1) == 0) {
    iVar6 = 0x136d4740;
    ___cxa_guard_acquire();
    param_1 = 0;
    if (iVar6 != 0) {
      func_0x000107708ee0(0x113713920);
      param_1 = 0x136d4740;
      ___cxa_guard_release();
    }
  }
  func_0x00010770b614();
  func_0x000107709f2c();
  iVar6 = (int)auStack_178;
  func_0x00010770c2e4();
  func_0x000107714848();
  if (iStack_110 == 0) {
    func_0x000107709f2c();
    func_0x00010770c2e4();
    func_0x000107714848();
  }
  func_0x000107711644();
  func_0x000107714838();
  func_0x000107714898();
  if ((bool)in_ZR) {
    func_0x000107714870();
    func_0x000107715f2c();
    func_0x000107714858();
    if ((bStack_88 & 1) == 0) {
      func_0x000107711434();
      func_0x00010770ff30();
      func_0x000107714838();
      func_0x000107714898();
      if (!(bool)in_ZR) goto LAB_1076c31f0;
      func_0x000107714870();
      func_0x0001077183c8();
      func_0x000107714858();
    }
    iVar6 = 0x137138e8;
    func_0x00010770929c();
    func_0x00010770928c(auStack_80);
    func_0x0001077193e4();
    puVar3 = auStack_178;
    func_0x000107707b44();
    do {
      func_0x000107714ea0();
      func_0x000107715184();
      param_1 = (int)puVar3;
    } while (!(bool)in_ZR);
    func_0x000107718518();
    if ((bool)in_ZR) {
      func_0x000107717204();
      func_0x000107707cfc();
      func_0x00010770c3dc();
      func_0x000107714850();
    }
    else {
      func_0x00010770b73c();
    }
    func_0x00010770fcd4();
  }
LAB_1076c31f0:
  func_0x000107716464();
  func_0x000107715540();
  func_0x000107707b78();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  uVar4 = 0x1136d4740;
  ___cxa_guard_abort();
  func_0x000107714988();
  func_0x00010771cb48();
  func_0x0001077073b8();
  if ((bRam00000001136d4748 & 1) == 0) {
    uVar4 = 0x1136d4748;
    ___cxa_guard_acquire();
    if ((int)uVar4 != 0) {
      func_0x000107708e10(0x113713958);
      uVar4 = 0x1136d4748;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4750 & 1) == 0) {
    uVar4 = 0x1136d4750;
    ___cxa_guard_acquire();
    if ((int)uVar4 != 0) {
      func_0x000107708bb0(0x113713990);
      uVar4 = 0x1136d4750;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4758 & 1) == 0) {
    uVar4 = 0x1136d4758;
    ___cxa_guard_acquire();
    if ((int)uVar4 != 0) {
      func_0x000107708de0(0x1137139c8);
      uVar4 = 0x1136d4758;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4760 & 1) == 0) {
    uVar4 = 0x1136d4760;
    ___cxa_guard_acquire();
    if ((int)uVar4 != 0) {
      func_0x000107708dc0(0x113713a00);
      uVar4 = 0x1136d4760;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4768 & 1) == 0) {
    uVar4 = 0x1136d4768;
    ___cxa_guard_acquire();
    if ((int)uVar4 != 0) {
      func_0x000107708dd0(0x113713a38);
      uVar4 = 0x1136d4768;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4770 & 1) == 0) {
    uVar4 = 0x1136d4770;
    ___cxa_guard_acquire();
    if ((int)uVar4 != 0) {
      func_0x000107708e00(0x113713a70);
      uVar4 = 0x1136d4770;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4778 & 1) == 0) {
    uVar4 = 0x1136d4778;
    ___cxa_guard_acquire();
    if ((int)uVar4 != 0) {
      func_0x000107708df0(0x113713aa8);
      uVar4 = 0x1136d4778;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4780 & 1) == 0) {
    uVar4 = 0x1136d4780;
    ___cxa_guard_acquire();
    if ((int)uVar4 != 0) {
      func_0x000107708db0(0x113713ae0);
      uVar4 = 0x1136d4780;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4788 & 1) == 0) {
    uVar4 = 0x1136d4788;
    ___cxa_guard_acquire();
    if ((int)uVar4 != 0) {
      func_0x0001077092ac(0x113713b18);
      uVar4 = 0x1136d4788;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4790 & 1) == 0) {
    uVar4 = 0x1136d4790;
    ___cxa_guard_acquire();
    if ((int)uVar4 != 0) {
      func_0x00010770d200(0x113713b50);
      uVar4 = 0x1136d4790;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4798 & 1) == 0) {
    uVar4 = 0x1136d4798;
    ___cxa_guard_acquire();
    if ((int)uVar4 != 0) {
      func_0x000107709a9c(0x113713b88);
      uVar4 = 0x1136d4798;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d47a0 & 1) == 0) {
    uVar4 = 0x1136d47a0;
    ___cxa_guard_acquire();
    if ((int)uVar4 != 0) {
      func_0x000107708f70(0x113713bc0);
      uVar4 = 0x1136d47a0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d47a8 & 1) == 0) {
    uVar4 = 0x1136d47a8;
    ___cxa_guard_acquire();
    if ((int)uVar4 != 0) {
      func_0x000107708fd0(0x113713bf8);
      uVar4 = 0x1136d47a8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d47b0 & 1) == 0) {
    uVar4 = 0x1136d47b0;
    ___cxa_guard_acquire();
    if ((int)uVar4 != 0) {
      func_0x000107709a8c(0x113713c30);
      uVar4 = 0x1136d47b0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d47b8 & 1) == 0) {
    uVar4 = 0x1136d47b8;
    ___cxa_guard_acquire();
    if ((int)uVar4 != 0) {
      func_0x000107709a7c(0x113713c68);
      uVar4 = 0x1136d47b8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d47c0 & 1) == 0) {
    uVar4 = 0x1136d47c0;
    ___cxa_guard_acquire();
    if ((int)uVar4 != 0) {
      func_0x000107709a6c(0x113713ca0);
      uVar4 = 0x1136d47c0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d47c8 & 1) == 0) {
    uVar4 = 0x1136d47c8;
    ___cxa_guard_acquire();
    if ((int)uVar4 != 0) {
      func_0x000107709a5c(0x113713cd8);
      uVar4 = 0x1136d47c8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d47d0 & 1) == 0) {
    uVar4 = 0x1136d47d0;
    ___cxa_guard_acquire();
    if ((int)uVar4 != 0) {
      func_0x00010770995c(0x113713d10);
      uVar4 = 0x1136d47d0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d47d8 & 1) == 0) {
    uVar4 = 0x1136d47d8;
    ___cxa_guard_acquire();
    if ((int)uVar4 != 0) {
      func_0x00010770c128(0x113713d48);
      uVar4 = 0x1136d47d8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d47e0 & 1) == 0) {
    uVar4 = 0x1136d47e0;
    ___cxa_guard_acquire();
    if ((int)uVar4 != 0) {
      func_0x000107709570(0x113713d80);
      uVar4 = 0x1136d47e0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d47e8 & 1) == 0) {
    uVar4 = 0x1136d47e8;
    ___cxa_guard_acquire();
    if ((int)uVar4 != 0) {
      func_0x0001077094a0(0x113713db8);
      uVar4 = 0x1136d47e8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d47f0 & 1) == 0) {
    uVar4 = 0x1136d47f0;
    ___cxa_guard_acquire();
    if ((int)uVar4 != 0) {
      func_0x000107709a4c(0x113713df0);
      uVar4 = 0x1136d47f0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d47f8 & 1) == 0) {
    uVar4 = 0x1136d47f8;
    ___cxa_guard_acquire();
    if ((int)uVar4 != 0) {
      func_0x00010770c108(0x113713e28);
      uVar4 = 0x1136d47f8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4800 & 1) == 0) {
    uVar4 = 0x1136d4800;
    ___cxa_guard_acquire();
    if ((int)uVar4 != 0) {
      func_0x000107709394(0x113713e60);
      uVar4 = 0x1136d4800;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4808 & 1) == 0) {
    uVar4 = 0x1136d4808;
    ___cxa_guard_acquire();
    if ((int)uVar4 != 0) {
      func_0x000107709a3c(0x113713e98);
      uVar4 = 0x1136d4808;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4810 & 1) == 0) {
    uVar4 = 0x1136d4810;
    ___cxa_guard_acquire();
    if ((int)uVar4 != 0) {
      func_0x00010770abb8(0x113713ed0);
      uVar4 = 0x1136d4810;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4818 & 1) == 0) {
    uVar4 = 0x1136d4818;
    ___cxa_guard_acquire();
    if ((int)uVar4 != 0) {
      func_0x00010770927c(0x113713f08);
      uVar4 = 0x1136d4818;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4820 & 1) == 0) {
    uVar4 = 0x1136d4820;
    ___cxa_guard_acquire();
    if ((int)uVar4 != 0) {
      func_0x000107709a2c(0x113713f40);
      uVar4 = 0x1136d4820;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4828 & 1) == 0) {
    uVar4 = 0x1136d4828;
    ___cxa_guard_acquire();
    if ((int)uVar4 != 0) {
      func_0x0001077090d0(0x113713f78);
      uVar4 = 0x1136d4828;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4830 & 1) == 0) {
    uVar4 = 0x1136d4830;
    ___cxa_guard_acquire();
    if ((int)uVar4 != 0) {
      func_0x000107709738(0x113713fb0);
      uVar4 = 0x1136d4830;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4838 & 1) == 0) {
    uVar4 = 0x1136d4838;
    ___cxa_guard_acquire();
    if ((int)uVar4 != 0) {
      func_0x000107709728(0x113713fe8);
      uVar4 = 0x1136d4838;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4840 & 1) == 0) {
    uVar4 = 0x1136d4840;
    ___cxa_guard_acquire();
    if ((int)uVar4 != 0) {
      func_0x00010770c0f8(0x113714020);
      uVar4 = 0x1136d4840;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4848 & 1) == 0) {
    uVar4 = 0x1136d4848;
    ___cxa_guard_acquire();
    if ((int)uVar4 != 0) {
      func_0x00010770bab4(0x113714058);
      uVar4 = 0x1136d4848;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4850 & 1) == 0) {
    uVar4 = 0x1136d4850;
    ___cxa_guard_acquire();
    if ((int)uVar4 != 0) {
      func_0x0001077093c4(0x113714090);
      uVar4 = 0x1136d4850;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4858 & 1) == 0) {
    uVar4 = 0x1136d4858;
    ___cxa_guard_acquire();
    if ((int)uVar4 != 0) {
      func_0x000107709a1c(0x1137140c8);
      uVar4 = 0x1136d4858;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4860 & 1) == 0) {
    uVar4 = 0x1136d4860;
    ___cxa_guard_acquire();
    if ((int)uVar4 != 0) {
      func_0x000107709020(0x113714100);
      uVar4 = 0x1136d4860;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4868 & 1) == 0) {
    uVar4 = 0x1136d4868;
    ___cxa_guard_acquire();
    if ((int)uVar4 != 0) {
      func_0x0001077093a4(0x113714138);
      uVar4 = 0x1136d4868;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4870 & 1) == 0) {
    uVar4 = 0x1136d4870;
    ___cxa_guard_acquire();
    if ((int)uVar4 != 0) {
      func_0x000107709a0c(0x113714170);
      uVar4 = 0x1136d4870;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4878 & 1) == 0) {
    uVar4 = 0x1136d4878;
    ___cxa_guard_acquire();
    if ((int)uVar4 != 0) {
      func_0x0001077099fc(0x1137141a8);
      uVar4 = 0x1136d4878;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4880 & 1) == 0) {
    uVar4 = 0x1136d4880;
    ___cxa_guard_acquire();
    if ((int)uVar4 != 0) {
      func_0x00010770c0c0(0x1137141e0);
      uVar4 = 0x1136d4880;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4888 & 1) == 0) {
    uVar4 = 0x1136d4888;
    ___cxa_guard_acquire();
    if ((int)uVar4 != 0) {
      func_0x0001077099ac(0x113714218);
      uVar4 = 0x1136d4888;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4890 & 1) == 0) {
    uVar4 = 0x1136d4890;
    ___cxa_guard_acquire();
    if ((int)uVar4 != 0) {
      func_0x000107708f50(0x113714250);
      uVar4 = 0x1136d4890;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4898 & 1) == 0) {
    uVar4 = 0x1136d4898;
    ___cxa_guard_acquire();
    if ((int)uVar4 != 0) {
      func_0x000107708f00(0x113714288);
      uVar4 = 0x1136d4898;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d48a0 & 1) == 0) {
    uVar4 = 0x1136d48a0;
    ___cxa_guard_acquire();
    if ((int)uVar4 != 0) {
      func_0x000107709eac(0x1137142c0);
      uVar4 = 0x1136d48a0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d48a8 & 1) == 0) {
    uVar4 = 0x1136d48a8;
    ___cxa_guard_acquire();
    if ((int)uVar4 != 0) {
      func_0x000107709e9c(0x1137142f8);
      uVar4 = 0x1136d48a8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d48b0 & 1) == 0) {
    uVar4 = 0x1136d48b0;
    ___cxa_guard_acquire();
    if ((int)uVar4 != 0) {
      func_0x0001077090e0(0x113714330);
      uVar4 = 0x1136d48b0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d48b8 & 1) == 0) {
    uVar4 = 0x1136d48b8;
    ___cxa_guard_acquire();
    if ((int)uVar4 != 0) {
      func_0x0001077090f0(0x113714368);
      uVar4 = 0x1136d48b8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d48c0 & 1) == 0) {
    uVar4 = 0x1136d48c0;
    ___cxa_guard_acquire();
    if ((int)uVar4 != 0) {
      func_0x000107709060(0x1137143a0);
      uVar4 = 0x1136d48c0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d48c8 & 1) == 0) {
    uVar4 = 0x1136d48c8;
    ___cxa_guard_acquire();
    if ((int)uVar4 != 0) {
      func_0x000107708ef0(0x1137143d8);
      uVar4 = 0x1136d48c8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d48d0 & 1) == 0) {
    uVar4 = 0x1136d48d0;
    ___cxa_guard_acquire();
    if ((int)uVar4 != 0) {
      func_0x000107708ee0(0x113714410);
      uVar4 = 0x1136d48d0;
      ___cxa_guard_release();
    }
  }
  func_0x000107707344();
  func_0x000107714af0();
  func_0x00010771cb48();
  func_0x000107707a14();
  func_0x000107708ecc();
  func_0x000107708d1c();
  func_0x000107709590();
  func_0x000107714830();
  func_0x0001077169c4();
  func_0x00010770cc98();
  func_0x00010770c1b8();
  func_0x000107714830();
  func_0x00010770fc78();
  func_0x00010770ab58();
  func_0x00010770f980();
  func_0x000107714830();
  func_0x000107714f58();
  func_0x000107714850();
  func_0x000107715f6c();
  uVar5 = uVar4;
  if ((bool)in_ZR) {
    func_0x000107715dac();
    func_0x0001077091a0();
    func_0x0001077182fc();
    uVar5 = uVar4;
    if (!(bool)in_ZR) goto code_r0x0001076c48ac;
    func_0x000107716fdc();
    uVar5 = uVar4;
    func_0x000107717974();
    unaff_x21 = uVar4;
    if ((uVar5 & 1) == 0) {
      func_0x00010771f4f4();
      func_0x000107714c8c();
      if ((int)uVar5 != 0) {
        func_0x0001077169c4();
        goto code_r0x0001076c49c8;
      }
      func_0x00010771a834();
      func_0x000107708d1c();
      func_0x000107709590();
      func_0x000107714830();
      func_0x00010771a828();
      func_0x000107709190();
      func_0x00010770967c();
      func_0x000107714830();
      func_0x0001077169c4();
      func_0x000107714ebc();
      func_0x00010770c1dc();
      func_0x000107714830();
      func_0x00010770c230();
      func_0x000107715018();
      if ((bool)in_ZR) {
        func_0x000107714bc0();
        func_0x00010771a81c();
        func_0x000107715ee4();
        func_0x000107708694();
        func_0x000107714848();
        func_0x000107714898();
        uVar2 = 0;
        if (!(bool)in_ZR) goto code_r0x0001076c49a4;
        func_0x000107714870();
        func_0x000107708600();
        func_0x00010770c430();
        func_0x0001077169c4();
        func_0x00010770e048();
        func_0x00010770c424();
        func_0x000107714860();
        func_0x000107714848();
        func_0x000107714858();
        func_0x000107714830();
        func_0x000107714838();
        func_0x00010770c260();
        func_0x000107715f90();
        if (!(bool)in_ZR) {
          func_0x0001077081c0();
          goto code_r0x0001076c497c;
        }
        func_0x000107714cc4();
        func_0x000107715434();
        goto code_r0x0001076c4984;
      }
      func_0x000107707fe0();
      uVar2 = in_ZR;
      goto code_r0x0001076c499c;
    }
    func_0x00010771d224();
code_r0x0001076c49c8:
    func_0x000107715434();
code_r0x0001076c49cc:
    func_0x00010770fdcc();
    func_0x000107716b94();
    func_0x00010770f89c();
    if ((uVar5 & 1) == 0) {
      func_0x000107709200();
      func_0x000107709190();
      func_0x0001077093d4();
      func_0x000107714830();
      func_0x0001077169c4();
      func_0x000107714ebc();
      func_0x00010770c1b8();
      func_0x000107714830();
      func_0x000107710080();
      func_0x000107710170();
      func_0x00010770fa0c();
      func_0x000107714830();
      func_0x000107714ffc();
      func_0x000107714850();
      func_0x000107717edc();
      uVar4 = uVar5;
      if ((bool)in_ZR) {
        func_0x000107716f7c();
        func_0x000107708e90();
        func_0x000107717f90();
        uVar4 = uVar5;
        if (!(bool)in_ZR) goto code_r0x0001076c4a6c;
        func_0x000107716d50();
        uVar4 = uVar5;
        func_0x000107717974();
        unaff_x21 = uVar5;
        if ((uVar4 & 1) == 0) {
          func_0x00010771f4f4();
          func_0x000107714c8c();
          if ((int)uVar4 != 0) {
            func_0x0001077169c4();
            goto code_r0x0001076c4bc8;
          }
          func_0x00010771a834();
          func_0x00010770c88c();
          func_0x0001077093d4();
          func_0x000107714830();
          func_0x00010771a828();
          func_0x0001077095e0();
          func_0x000107709580();
          func_0x000107714830();
          func_0x0001077169c4();
          func_0x00010770d818();
          func_0x00010770c1dc();
          func_0x000107714830();
          func_0x00010770c230();
          func_0x00010771648c();
          if ((bool)in_ZR) {
            func_0x000107715d20();
            func_0x00010771a81c();
            func_0x000107715788();
            func_0x000107708414();
            func_0x000107714848();
            func_0x000107714898();
            uVar2 = 0;
            if ((bool)in_ZR) {
              func_0x000107714870();
              func_0x000107708450();
              func_0x00010770c430();
              func_0x0001077169c4();
              func_0x00010770dda0();
              func_0x00010770c424();
              func_0x000107714860();
              func_0x000107714848();
              func_0x000107714858();
              func_0x000107714830();
              func_0x000107714838();
              func_0x00010770c260();
              func_0x000107715cdc();
              if (!(bool)in_ZR) {
                func_0x000107707fe0();
                goto code_r0x0001076c4b40;
              }
              func_0x000107714bc0();
              func_0x0001077154cc();
              goto code_r0x0001076c4b48;
            }
            goto code_r0x0001076c4ba4;
          }
          func_0x0001077086d0();
          uVar2 = in_ZR;
          goto code_r0x0001076c4b9c;
        }
        func_0x00010771d224();
code_r0x0001076c4bc8:
        func_0x0001077154cc();
code_r0x0001076c4bcc:
        func_0x00010770fc84();
        func_0x000107716a98();
        func_0x00010770f4c4();
        if ((uVar4 & 1) == 0) {
          func_0x000107708d8c();
          func_0x0001077095e0();
          func_0x000107709030();
          func_0x000107714830();
          func_0x0001077169c4();
          func_0x00010770d818();
          func_0x00010770c1b8();
          func_0x000107714830();
          func_0x00010770f4d0();
          func_0x00010770b9f4();
          func_0x00010771017c();
          func_0x000107714830();
          func_0x000107714dc4();
          func_0x000107714850();
          func_0x000107717230();
          if ((bool)in_ZR) {
            func_0x000107716474();
            func_0x000107707ee8();
            func_0x000107715018();
            if (!(bool)in_ZR) goto code_r0x0001076c4c6c;
            func_0x000107714bc0();
            uVar5 = uVar4;
            func_0x000107717974();
            iVar6 = (int)uVar5;
            if ((uVar5 & 1) == 0) {
              func_0x00010771f4f4();
              func_0x000107714c8c();
              if (iVar6 != 0) {
                func_0x0001077169c4();
                goto code_r0x0001076c4e68;
              }
              func_0x00010771a834();
              func_0x000107708fe0();
              func_0x00010770a11c();
              func_0x000107714830();
              func_0x00010771a828();
              func_0x000107709818();
              func_0x000107709c40();
              func_0x000107714830();
              func_0x0001077169c4();
              func_0x00010770dddc();
              func_0x00010770c1a0();
              func_0x000107714830();
              func_0x00010770ccc8();
              func_0x0001077161e8();
              unaff_x21 = uVar4;
              if ((bool)in_ZR) {
                func_0x000107715858();
                func_0x00010771a81c();
                func_0x000107714d44();
                func_0x000107707f84();
                func_0x000107714838();
                func_0x000107714898();
                uVar2 = 0;
                if ((bool)in_ZR) {
                  func_0x000107714870();
                  func_0x000107707f5c();
                  func_0x00010770cf1c();
                  func_0x0001077169c4();
                  func_0x00010770d228();
                  func_0x00010770cc14();
                  func_0x000107714848();
                  func_0x000107714838();
                  func_0x000107714858();
                  func_0x000107714830();
                  func_0x000107714890();
                  func_0x00010770c260();
                  func_0x00010771638c();
                  if (!(bool)in_ZR) {
                    func_0x00010770843c();
                    goto code_r0x0001076c4dd8;
                  }
                  func_0x000107715910();
                  func_0x000107715370();
                  goto code_r0x0001076c4de0;
                }
                goto code_r0x0001076c4e44;
              }
              func_0x000107708428();
              uVar2 = in_ZR;
              goto code_r0x0001076c4e3c;
            }
            func_0x00010771d224();
code_r0x0001076c4e68:
            func_0x000107715370();
code_r0x0001076c4e6c:
            func_0x00010771008c();
            func_0x000107716e34();
            func_0x000107710098();
            func_0x000107710da4();
            uVar1 = extraout_w8;
            if ((bool)in_ZR) {
              uVar1 = 0;
            }
            unaff_x21 = (ulong)uVar1;
            func_0x000107714dc4();
            func_0x000107714ffc();
          }
          else {
code_r0x0001076c4c6c:
            func_0x00010771a834();
            func_0x000107708fe0();
            func_0x00010770a11c();
            func_0x000107714830();
            func_0x00010771a828();
            func_0x000107709818();
            func_0x000107709c40();
            func_0x000107714830();
            func_0x0001077169c4();
            func_0x00010770dddc();
            func_0x00010770c1a0();
            func_0x000107714830();
            func_0x00010770ccc8();
            func_0x0001077161e8();
            if ((bool)in_ZR) {
              func_0x000107715858();
              func_0x00010771a81c();
              func_0x000107714d44();
              func_0x000107707f84();
              func_0x000107714838();
              func_0x000107714898();
              uVar2 = 0;
              if (!(bool)in_ZR) goto code_r0x0001076c4e44;
              func_0x000107714870();
              func_0x000107707f5c();
              func_0x00010770cf1c();
              func_0x0001077169c4();
              func_0x00010770d228();
              func_0x00010770cc14();
              func_0x000107714848();
              func_0x000107714838();
              func_0x000107714858();
              func_0x000107714830();
              func_0x000107714890();
              func_0x00010770c260();
              func_0x00010771638c();
              if ((bool)in_ZR) {
                func_0x000107715910();
                func_0x000107715370();
              }
              else {
                func_0x00010770843c();
code_r0x0001076c4dd8:
                func_0x00010770f4dc();
                func_0x000107715738();
              }
code_r0x0001076c4de0:
              func_0x000107714830();
              func_0x000107714850();
              in_ZR = param_1 == 3;
              if ((bool)in_ZR) goto code_r0x0001076c4e6c;
            }
            else {
              func_0x000107708428();
              uVar2 = in_ZR;
code_r0x0001076c4e3c:
              func_0x00010770d148();
              func_0x000107714cac();
code_r0x0001076c4e44:
              func_0x000107714830();
              func_0x000107714890();
              func_0x000107714850();
              in_ZR = uVar2;
            }
            func_0x000107715758();
          }
          func_0x00010770c324();
          func_0x00010770d83c();
          func_0x000107714ed0();
        }
        else {
          func_0x000107715ce8();
        }
        func_0x000107715710();
        func_0x000107714bf4();
      }
      else {
code_r0x0001076c4a6c:
        func_0x00010771a834();
        func_0x00010770c88c();
        func_0x0001077093d4();
        func_0x000107714830();
        func_0x00010771a828();
        func_0x0001077095e0();
        func_0x000107709580();
        func_0x000107714830();
        func_0x0001077169c4();
        func_0x00010770d818();
        func_0x00010770c1dc();
        func_0x000107714830();
        func_0x00010770c230();
        func_0x00010771648c();
        if ((bool)in_ZR) {
          func_0x000107715d20();
          func_0x00010771a81c();
          func_0x000107715788();
          func_0x000107708414();
          func_0x000107714848();
          func_0x000107714898();
          uVar2 = 0;
          if (!(bool)in_ZR) goto code_r0x0001076c4ba4;
          func_0x000107714870();
          func_0x000107708450();
          func_0x00010770c430();
          func_0x0001077169c4();
          func_0x00010770dda0();
          func_0x00010770c424();
          func_0x000107714860();
          func_0x000107714848();
          func_0x000107714858();
          func_0x000107714830();
          func_0x000107714838();
          func_0x00010770c260();
          func_0x000107715cdc();
          if ((bool)in_ZR) {
            func_0x000107714bc0();
            func_0x0001077154cc();
          }
          else {
            func_0x000107707fe0();
code_r0x0001076c4b40:
            func_0x00010770e7e0();
            func_0x000107714ffc();
          }
code_r0x0001076c4b48:
          func_0x000107714830();
          func_0x000107714850();
          in_ZR = iVar6 == 3;
          if ((bool)in_ZR) goto code_r0x0001076c4bcc;
        }
        else {
          func_0x0001077086d0();
          uVar2 = in_ZR;
code_r0x0001076c4b9c:
          func_0x00010770ef3c();
          func_0x000107714dc4();
code_r0x0001076c4ba4:
          func_0x000107714830();
          func_0x000107714838();
          func_0x000107714850();
          in_ZR = uVar2;
        }
        func_0x000107715758();
      }
      func_0x00010770d210();
      func_0x00010770df2c();
      func_0x0001077158e8();
    }
    else {
      func_0x000107715ce8();
    }
    func_0x000107715274();
    func_0x00010771513c();
    goto code_r0x0001076c4eb8;
  }
code_r0x0001076c48ac:
  func_0x00010771a834();
  func_0x000107708d1c();
  func_0x000107709590();
  func_0x000107714830();
  func_0x00010771a828();
  func_0x000107709190();
  func_0x00010770967c();
  func_0x000107714830();
  func_0x0001077169c4();
  func_0x000107714ebc();
  func_0x00010770c1dc();
  func_0x000107714830();
  func_0x00010770c230();
  func_0x000107715018();
  if ((bool)in_ZR) {
    func_0x000107714bc0();
    func_0x00010771a81c();
    func_0x000107715ee4();
    func_0x000107708694();
    func_0x000107714848();
    func_0x000107714898();
    uVar2 = 0;
    if (!(bool)in_ZR) goto code_r0x0001076c49a4;
    func_0x000107714870();
    func_0x000107708600();
    func_0x00010770c430();
    func_0x0001077169c4();
    func_0x00010770e048();
    func_0x00010770c424();
    func_0x000107714860();
    func_0x000107714848();
    func_0x000107714858();
    func_0x000107714830();
    func_0x000107714838();
    func_0x00010770c260();
    func_0x000107715f90();
    if ((bool)in_ZR) {
      func_0x000107714cc4();
      func_0x000107715434();
    }
    else {
      func_0x0001077081c0();
code_r0x0001076c497c:
      func_0x00010770e3ec();
      func_0x000107714f58();
    }
code_r0x0001076c4984:
    func_0x000107714830();
    func_0x000107714850();
    in_ZR = iVar6 == 3;
    if ((bool)in_ZR) goto code_r0x0001076c49cc;
  }
  else {
    func_0x000107707fe0();
    uVar2 = in_ZR;
code_r0x0001076c499c:
    func_0x00010770e7e0();
    func_0x000107714ffc();
code_r0x0001076c49a4:
    func_0x000107714830();
    func_0x000107714838();
    func_0x000107714850();
    in_ZR = uVar2;
  }
  func_0x000107715758();
code_r0x0001076c4eb8:
  func_0x00010770d3b0();
  func_0x000107710050();
  func_0x000107715294();
  if ((unaff_x21 & 1) == 0) {
    func_0x00010770883c();
    func_0x000107714830();
  }
  func_0x000107707b78();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010770c358();
  func_0x000107714858();
  func_0x000107714830();
  func_0x000107715380();
  func_0x00010726af18();
  func_0x00010770edc0();
  func_0x00010770c324();
  func_0x00010770d83c();
  func_0x000107714ed0();
  func_0x000107715710();
  func_0x000107714bf4();
  func_0x00010770d210();
  func_0x00010770df2c();
  func_0x0001077158e8();
  func_0x000107715274();
  func_0x00010771513c();
  func_0x00010770d3b0();
  func_0x00010770ddb8();
  func_0x000107715294();
  do {
    func_0x000107714988();
  } while( true );
}



/* Entry: 1076c8d24; end: 1076c8d5f;  */

/* WARNING: Possible PIC construction at 0x0001076c90a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001076c9198: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001076c90a8) */
/* WARNING: Removing unreachable block (ram,0x0001076c90b0) */
/* WARNING: Removing unreachable block (ram,0x0001076c9140) */
/* WARNING: Removing unreachable block (ram,0x0001076c90d0) */
/* WARNING: Removing unreachable block (ram,0x0001076c9150) */
/* WARNING: Removing unreachable block (ram,0x0001076c90dc) */
/* WARNING: Removing unreachable block (ram,0x0001076c90e4) */
/* WARNING: Removing unreachable block (ram,0x0001076c90f4) */
/* WARNING: Removing unreachable block (ram,0x0001076c9104) */
/* WARNING: Removing unreachable block (ram,0x0001076c9124) */
/* WARNING: Removing unreachable block (ram,0x0001076c9160) */
/* WARNING: Removing unreachable block (ram,0x0001076c9164) */
/* WARNING: Removing unreachable block (ram,0x0001076c9168) */
/* WARNING: Removing unreachable block (ram,0x0001076c9174) */
/* WARNING: Removing unreachable block (ram,0x0001076c918c) */
/* WARNING: Removing unreachable block (ram,0x0001076c9194) */
/* WARNING: Removing unreachable block (ram,0x0001076c919c) */
/* WARNING: Removing unreachable block (ram,0x0001076c91a4) */
/* WARNING: Removing unreachable block (ram,0x0001076c91b4) */
/* WARNING: Removing unreachable block (ram,0x0001076c9238) */
/* WARNING: Removing unreachable block (ram,0x0001076c91c4) */
/* WARNING: Removing unreachable block (ram,0x0001076c9248) */
/* WARNING: Removing unreachable block (ram,0x0001076c91d0) */
/* WARNING: Removing unreachable block (ram,0x0001076c91d8) */
/* WARNING: Removing unreachable block (ram,0x0001076c91e8) */
/* WARNING: Removing unreachable block (ram,0x0001076c91f8) */
/* WARNING: Removing unreachable block (ram,0x0001076c921c) */
/* WARNING: Removing unreachable block (ram,0x0001076c9258) */
/* WARNING: Removing unreachable block (ram,0x0001076c925c) */
/* WARNING: Removing unreachable block (ram,0x0001076c9260) */
/* WARNING: Removing unreachable block (ram,0x0001076c926c) */
/* WARNING: Removing unreachable block (ram,0x0001076c927c) */
/* WARNING: Removing unreachable block (ram,0x0001076c928c) */
/* WARNING: Removing unreachable block (ram,0x0001076c9294) */
/* WARNING: Removing unreachable block (ram,0x0001076c92a4) */
/* WARNING: Removing unreachable block (ram,0x0001076c92b4) */
/* WARNING: Removing unreachable block (ram,0x0001076c92bc) */
/* WARNING: Removing unreachable block (ram,0x0001076c92cc) */
/* WARNING: Removing unreachable block (ram,0x0001076c92dc) */
/* WARNING: Removing unreachable block (ram,0x0001076c92f0) */
/* WARNING: Removing unreachable block (ram,0x0001076c92fc) */
/* WARNING: Removing unreachable block (ram,0x0001076c9318) */
/* WARNING: Removing unreachable block (ram,0x0001076c9304) */
/* WARNING: Removing unreachable block (ram,0x0001076c931c) */
/* WARNING: Removing unreachable block (ram,0x0001076c9328) */
/* WARNING: Removing unreachable block (ram,0x0001076c9338) */
/* WARNING: Removing unreachable block (ram,0x0001076c9340) */
/* WARNING: Removing unreachable block (ram,0x0001076c9360) */
/* WARNING: Removing unreachable block (ram,0x0001076c9374) */
/* WARNING: Removing unreachable block (ram,0x0001076c9384) */
/* WARNING: Removing unreachable block (ram,0x0001076c9394) */
/* WARNING: Removing unreachable block (ram,0x0001076c939c) */
/* WARNING: Removing unreachable block (ram,0x0001076c93a4) */
/* WARNING: Removing unreachable block (ram,0x0001076c93b4) */
/* WARNING: Removing unreachable block (ram,0x0001076c93c4) */
/* WARNING: Removing unreachable block (ram,0x0001076c93cc) */
/* WARNING: Removing unreachable block (ram,0x0001076c93dc) */
/* WARNING: Removing unreachable block (ram,0x0001076c93ec) */
/* WARNING: Removing unreachable block (ram,0x0001076c9400) */
/* WARNING: Removing unreachable block (ram,0x0001076c940c) */
/* WARNING: Removing unreachable block (ram,0x0001076c9428) */
/* WARNING: Removing unreachable block (ram,0x0001076c9414) */
/* WARNING: Removing unreachable block (ram,0x0001076c942c) */
/* WARNING: Removing unreachable block (ram,0x0001076c9438) */
/* WARNING: Removing unreachable block (ram,0x0001076c9448) */
/* WARNING: Removing unreachable block (ram,0x0001076c94ac) */
/* WARNING: Removing unreachable block (ram,0x0001076c94b8) */
/* WARNING: Removing unreachable block (ram,0x0001076c94d4) */
/* WARNING: Removing unreachable block (ram,0x0001076c94c0) */
/* WARNING: Removing unreachable block (ram,0x0001076c94d8) */
/* WARNING: Removing unreachable block (ram,0x0001076c94dc) */
/* WARNING: Removing unreachable block (ram,0x0001076c9da8) */
/* WARNING: Removing unreachable block (ram,0x0001076ca0c8) */
/* WARNING: Removing unreachable block (ram,0x0001076ca218) */
/* WARNING: Removing unreachable block (ram,0x0001076c9504) */

void FUN_1076c8d24(ulong param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  uint extraout_w8;
  int unaff_w20;
  ulong unaff_x21;
  int unaff_w23;
  
  func_0x000107707ccc();
  func_0x00010770d848();
  func_0x00010770c2b4();
  func_0x000107714890();
  func_0x000107707bf0();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010771cb48();
  func_0x0001077073b8();
  if ((bRam00000001136d4a68 & 1) == 0) {
    param_1 = 0x1136d4a68;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708e10(0x113714f38);
      param_1 = 0x1136d4a68;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4a70 & 1) == 0) {
    param_1 = 0x1136d4a70;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708bb0(0x113714f70);
      param_1 = 0x1136d4a70;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4a78 & 1) == 0) {
    param_1 = 0x1136d4a78;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708de0(0x113714fa8);
      param_1 = 0x1136d4a78;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4a80 & 1) == 0) {
    param_1 = 0x1136d4a80;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708dc0(0x113714fe0);
      param_1 = 0x1136d4a80;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4a88 & 1) == 0) {
    param_1 = 0x1136d4a88;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708dd0(0x113715018);
      param_1 = 0x1136d4a88;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4a90 & 1) == 0) {
    param_1 = 0x1136d4a90;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708e00(0x113715050);
      param_1 = 0x1136d4a90;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4a98 & 1) == 0) {
    param_1 = 0x1136d4a98;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708df0(0x113715088);
      param_1 = 0x1136d4a98;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4aa0 & 1) == 0) {
    param_1 = 0x1136d4aa0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708db0(0x1137150c0);
      param_1 = 0x1136d4aa0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4aa8 & 1) == 0) {
    param_1 = 0x1136d4aa8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077092ac(0x1137150f8);
      param_1 = 0x1136d4aa8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4ab0 & 1) == 0) {
    param_1 = 0x1136d4ab0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770d200(0x113715130);
      param_1 = 0x1136d4ab0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4ab8 & 1) == 0) {
    param_1 = 0x1136d4ab8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a9c(0x113715168);
      param_1 = 0x1136d4ab8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4ac0 & 1) == 0) {
    param_1 = 0x1136d4ac0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708f70(0x1137151a0);
      param_1 = 0x1136d4ac0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4ac8 & 1) == 0) {
    param_1 = 0x1136d4ac8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708fd0(0x1137151d8);
      param_1 = 0x1136d4ac8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4ad0 & 1) == 0) {
    param_1 = 0x1136d4ad0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a8c(0x113715210);
      param_1 = 0x1136d4ad0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4ad8 & 1) == 0) {
    param_1 = 0x1136d4ad8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a7c(0x113715248);
      param_1 = 0x1136d4ad8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4ae0 & 1) == 0) {
    param_1 = 0x1136d4ae0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a6c(0x113715280);
      param_1 = 0x1136d4ae0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4ae8 & 1) == 0) {
    param_1 = 0x1136d4ae8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a5c(0x1137152b8);
      param_1 = 0x1136d4ae8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4af0 & 1) == 0) {
    param_1 = 0x1136d4af0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770995c(0x1137152f0);
      param_1 = 0x1136d4af0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4af8 & 1) == 0) {
    param_1 = 0x1136d4af8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770c128(0x113715328);
      param_1 = 0x1136d4af8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4b00 & 1) == 0) {
    param_1 = 0x1136d4b00;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709570(0x113715360);
      param_1 = 0x1136d4b00;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4b08 & 1) == 0) {
    param_1 = 0x1136d4b08;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077094a0(0x113715398);
      param_1 = 0x1136d4b08;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4b10 & 1) == 0) {
    param_1 = 0x1136d4b10;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a4c(0x1137153d0);
      param_1 = 0x1136d4b10;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4b18 & 1) == 0) {
    param_1 = 0x1136d4b18;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770c108(0x113715408);
      param_1 = 0x1136d4b18;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4b20 & 1) == 0) {
    param_1 = 0x1136d4b20;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709394(0x113715440);
      param_1 = 0x1136d4b20;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4b28 & 1) == 0) {
    param_1 = 0x1136d4b28;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a3c(0x113715478);
      param_1 = 0x1136d4b28;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4b30 & 1) == 0) {
    param_1 = 0x1136d4b30;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770abb8(0x1137154b0);
      param_1 = 0x1136d4b30;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4b38 & 1) == 0) {
    param_1 = 0x1136d4b38;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770927c(0x1137154e8);
      param_1 = 0x1136d4b38;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4b40 & 1) == 0) {
    param_1 = 0x1136d4b40;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a2c(0x113715520);
      param_1 = 0x1136d4b40;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4b48 & 1) == 0) {
    param_1 = 0x1136d4b48;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077090d0(0x113715558);
      param_1 = 0x1136d4b48;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4b50 & 1) == 0) {
    param_1 = 0x1136d4b50;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709738(0x113715590);
      param_1 = 0x1136d4b50;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4b58 & 1) == 0) {
    param_1 = 0x1136d4b58;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709728(0x1137155c8);
      param_1 = 0x1136d4b58;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4b60 & 1) == 0) {
    param_1 = 0x1136d4b60;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770c0f8(0x113715600);
      param_1 = 0x1136d4b60;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4b68 & 1) == 0) {
    param_1 = 0x1136d4b68;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770bab4(0x113715638);
      param_1 = 0x1136d4b68;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4b70 & 1) == 0) {
    param_1 = 0x1136d4b70;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077093c4(0x113715670);
      param_1 = 0x1136d4b70;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4b78 & 1) == 0) {
    param_1 = 0x1136d4b78;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a1c(0x1137156a8);
      param_1 = 0x1136d4b78;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4b80 & 1) == 0) {
    param_1 = 0x1136d4b80;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709020(0x1137156e0);
      param_1 = 0x1136d4b80;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4b88 & 1) == 0) {
    param_1 = 0x1136d4b88;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077093a4(0x113715718);
      param_1 = 0x1136d4b88;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4b90 & 1) == 0) {
    param_1 = 0x1136d4b90;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a0c(0x113715750);
      param_1 = 0x1136d4b90;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4b98 & 1) == 0) {
    param_1 = 0x1136d4b98;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077099fc(0x113715788);
      param_1 = 0x1136d4b98;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4ba0 & 1) == 0) {
    param_1 = 0x1136d4ba0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770c0c0(0x1137157c0);
      param_1 = 0x1136d4ba0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4ba8 & 1) == 0) {
    param_1 = 0x1136d4ba8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077099ac(0x1137157f8);
      param_1 = 0x1136d4ba8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4bb0 & 1) == 0) {
    param_1 = 0x1136d4bb0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708f50(0x113715830);
      param_1 = 0x1136d4bb0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4bb8 & 1) == 0) {
    param_1 = 0x1136d4bb8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708f00(0x113715868);
      param_1 = 0x1136d4bb8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4bc0 & 1) == 0) {
    param_1 = 0x1136d4bc0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709eac(0x1137158a0);
      param_1 = 0x1136d4bc0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4bc8 & 1) == 0) {
    param_1 = 0x1136d4bc8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709e9c(0x1137158d8);
      param_1 = 0x1136d4bc8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4bd0 & 1) == 0) {
    param_1 = 0x1136d4bd0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077090e0(0x113715910);
      param_1 = 0x1136d4bd0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4bd8 & 1) == 0) {
    param_1 = 0x1136d4bd8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077090f0(0x113715948);
      param_1 = 0x1136d4bd8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4be0 & 1) == 0) {
    param_1 = 0x1136d4be0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709060(0x113715980);
      param_1 = 0x1136d4be0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4be8 & 1) == 0) {
    param_1 = 0x1136d4be8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708ef0(0x1137159b8);
      param_1 = 0x1136d4be8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4bf0 & 1) == 0) {
    param_1 = 0x1136d4bf0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708ee0(0x1137159f0);
      param_1 = 0x1136d4bf0;
      ___cxa_guard_release();
    }
  }
  func_0x000107707344();
  func_0x000107714af0();
  func_0x00010771cb48();
  func_0x000107707a14();
  func_0x000107708ecc();
  func_0x00010771f350();
  func_0x000107708d1c();
  func_0x000107709590();
  func_0x000107714830();
  func_0x0001077169a0();
  func_0x00010770cc98();
  func_0x00010770c1b8();
  func_0x000107714830();
  func_0x00010770fc78();
  func_0x00010770ab58();
  func_0x00010770f980();
  func_0x000107714830();
  func_0x000107714f58();
  func_0x000107714850();
  func_0x000107715f6c();
  uVar4 = param_1;
  if ((bool)in_ZR) {
    func_0x000107715dac();
    func_0x0001077091a0();
    func_0x0001077182fc();
    uVar4 = param_1;
    if (!(bool)in_ZR) goto code_r0x0001076ca2b4;
    func_0x000107716fdc();
    uVar4 = param_1;
    func_0x0001077178f0();
    unaff_x21 = param_1;
    if ((uVar4 & 1) == 0) {
      func_0x00010771f344();
      func_0x000107714c8c();
      if ((int)uVar4 != 0) {
        func_0x0001077169a0();
        goto code_r0x0001076ca3d0;
      }
      func_0x00010771a7c8();
      func_0x000107708d1c();
      func_0x000107709590();
      func_0x000107714830();
      func_0x00010771a7bc();
      func_0x000107709190();
      func_0x00010770967c();
      func_0x000107714830();
      func_0x0001077169a0();
      func_0x000107714ebc();
      func_0x00010770c1dc();
      func_0x000107714830();
      func_0x00010770c230();
      func_0x000107715018();
      if ((bool)in_ZR) {
        func_0x000107714bc0();
        func_0x00010771a7b0();
        func_0x000107715ee4();
        func_0x000107708694();
        func_0x000107714848();
        func_0x000107714898();
        uVar2 = 0;
        if (!(bool)in_ZR) goto code_r0x0001076ca3ac;
        func_0x000107714870();
        func_0x000107708600();
        func_0x00010770c430();
        func_0x0001077169a0();
        func_0x00010770e048();
        func_0x00010770c424();
        func_0x000107714860();
        func_0x000107714848();
        func_0x000107714858();
        func_0x000107714830();
        func_0x000107714838();
        func_0x00010770c260();
        func_0x000107715f90();
        if (!(bool)in_ZR) {
          func_0x0001077081c0();
          goto code_r0x0001076ca384;
        }
        func_0x000107714cc4();
        func_0x000107715434();
        goto code_r0x0001076ca38c;
      }
      func_0x000107707fe0();
      uVar2 = in_ZR;
      goto code_r0x0001076ca3a4;
    }
    func_0x00010771d1a0();
code_r0x0001076ca3d0:
    func_0x000107715434();
code_r0x0001076ca3d4:
    func_0x00010770fdcc();
    func_0x000107716b94();
    func_0x00010770f89c();
    if ((uVar4 & 1) == 0) {
      func_0x000107709200();
      func_0x00010771f350();
      func_0x000107709190();
      func_0x0001077093d4();
      func_0x000107714830();
      func_0x0001077169a0();
      func_0x000107714ebc();
      func_0x00010770c1b8();
      func_0x000107714830();
      func_0x000107710080();
      func_0x000107710170();
      func_0x00010770fa0c();
      func_0x000107714830();
      func_0x000107714ffc();
      func_0x000107714850();
      func_0x000107717edc();
      uVar5 = uVar4;
      if ((bool)in_ZR) {
        func_0x000107716f7c();
        func_0x000107708e90();
        func_0x000107717f90();
        uVar5 = uVar4;
        if (!(bool)in_ZR) goto code_r0x0001076ca470;
        func_0x000107716d50();
        uVar5 = uVar4;
        func_0x0001077178f0();
        unaff_x21 = uVar4;
        if ((uVar5 & 1) == 0) {
          func_0x00010771f344();
          func_0x000107714c8c();
          if ((int)uVar5 != 0) {
            func_0x0001077169a0();
            goto code_r0x0001076ca5cc;
          }
          func_0x00010771a7c8();
          func_0x00010770c88c();
          func_0x0001077093d4();
          func_0x000107714830();
          func_0x00010771a7bc();
          func_0x0001077095e0();
          func_0x000107709580();
          func_0x000107714830();
          func_0x0001077169a0();
          func_0x00010770d818();
          func_0x00010770c1dc();
          func_0x000107714830();
          func_0x00010770c230();
          func_0x00010771648c();
          if ((bool)in_ZR) {
            func_0x000107715d20();
            func_0x00010771a7b0();
            func_0x000107715788();
            func_0x000107708414();
            func_0x000107714848();
            func_0x000107714898();
            uVar2 = 0;
            if ((bool)in_ZR) {
              func_0x000107714870();
              func_0x000107708450();
              func_0x00010770c430();
              func_0x0001077169a0();
              func_0x00010770dda0();
              func_0x00010770c424();
              func_0x000107714860();
              func_0x000107714848();
              func_0x000107714858();
              func_0x000107714830();
              func_0x000107714838();
              func_0x00010770c260();
              func_0x000107715cdc();
              if (!(bool)in_ZR) {
                func_0x000107707fe0();
                goto code_r0x0001076ca544;
              }
              func_0x000107714bc0();
              func_0x0001077154cc();
              goto code_r0x0001076ca54c;
            }
            goto code_r0x0001076ca5a8;
          }
          func_0x0001077086d0();
          uVar2 = in_ZR;
          goto code_r0x0001076ca5a0;
        }
        func_0x00010771d1a0();
code_r0x0001076ca5cc:
        func_0x0001077154cc();
code_r0x0001076ca5d0:
        func_0x00010770fc84();
        func_0x000107716a98();
        func_0x00010770f4c4();
        if ((uVar5 & 1) == 0) {
          func_0x000107708d8c();
          func_0x00010771f350();
          func_0x0001077095e0();
          func_0x000107709030();
          func_0x000107714830();
          func_0x0001077169a0();
          func_0x00010770d818();
          func_0x00010770c1b8();
          func_0x000107714830();
          func_0x00010770f4d0();
          func_0x00010770b9f4();
          func_0x00010771017c();
          func_0x000107714830();
          func_0x000107714dc4();
          func_0x000107714850();
          func_0x000107717230();
          if ((bool)in_ZR) {
            func_0x000107716474();
            func_0x000107707ee8();
            func_0x000107715018();
            if (!(bool)in_ZR) goto code_r0x0001076ca66c;
            func_0x000107714bc0();
            uVar4 = uVar5;
            func_0x0001077178f0();
            iVar3 = (int)uVar4;
            if ((uVar4 & 1) == 0) {
              func_0x00010771f344();
              func_0x000107714c8c();
              if (iVar3 != 0) {
                func_0x0001077169a0();
                goto code_r0x0001076ca868;
              }
              func_0x00010771a7c8();
              func_0x000107708fe0();
              func_0x00010770a11c();
              func_0x000107714830();
              func_0x00010771a7bc();
              func_0x000107709818();
              func_0x000107709c40();
              func_0x000107714830();
              func_0x0001077169a0();
              func_0x00010770dddc();
              func_0x00010770c1a0();
              func_0x000107714830();
              func_0x00010770ccc8();
              func_0x0001077161e8();
              unaff_x21 = uVar5;
              if ((bool)in_ZR) {
                func_0x000107715858();
                func_0x00010771a7b0();
                func_0x000107714d44();
                func_0x000107707f84();
                func_0x000107714838();
                func_0x000107714898();
                uVar2 = 0;
                if ((bool)in_ZR) {
                  func_0x000107714870();
                  func_0x000107707f5c();
                  func_0x00010770cf1c();
                  func_0x0001077169a0();
                  func_0x00010770d228();
                  func_0x00010770cc14();
                  func_0x000107714848();
                  func_0x000107714838();
                  func_0x000107714858();
                  func_0x000107714830();
                  func_0x000107714890();
                  func_0x00010770c260();
                  func_0x00010771638c();
                  if (!(bool)in_ZR) {
                    func_0x00010770843c();
                    goto code_r0x0001076ca7d8;
                  }
                  func_0x000107715910();
                  func_0x000107715370();
                  goto code_r0x0001076ca7e0;
                }
                goto code_r0x0001076ca844;
              }
              func_0x000107708428();
              uVar2 = in_ZR;
              goto code_r0x0001076ca83c;
            }
            func_0x00010771d1a0();
code_r0x0001076ca868:
            func_0x000107715370();
code_r0x0001076ca86c:
            func_0x00010771008c();
            func_0x000107716e34();
            func_0x000107710098();
            func_0x000107710da4();
            uVar1 = extraout_w8;
            if ((bool)in_ZR) {
              uVar1 = 0;
            }
            unaff_x21 = (ulong)uVar1;
            func_0x000107714dc4();
            func_0x000107714ffc();
          }
          else {
code_r0x0001076ca66c:
            func_0x00010771a7c8();
            func_0x000107708fe0();
            func_0x00010770a11c();
            func_0x000107714830();
            func_0x00010771a7bc();
            func_0x000107709818();
            func_0x000107709c40();
            func_0x000107714830();
            func_0x0001077169a0();
            func_0x00010770dddc();
            func_0x00010770c1a0();
            func_0x000107714830();
            func_0x00010770ccc8();
            func_0x0001077161e8();
            if ((bool)in_ZR) {
              func_0x000107715858();
              func_0x00010771a7b0();
              func_0x000107714d44();
              func_0x000107707f84();
              func_0x000107714838();
              func_0x000107714898();
              uVar2 = 0;
              if (!(bool)in_ZR) goto code_r0x0001076ca844;
              func_0x000107714870();
              func_0x000107707f5c();
              func_0x00010770cf1c();
              func_0x0001077169a0();
              func_0x00010770d228();
              func_0x00010770cc14();
              func_0x000107714848();
              func_0x000107714838();
              func_0x000107714858();
              func_0x000107714830();
              func_0x000107714890();
              func_0x00010770c260();
              func_0x00010771638c();
              if ((bool)in_ZR) {
                func_0x000107715910();
                func_0x000107715370();
              }
              else {
                func_0x00010770843c();
code_r0x0001076ca7d8:
                func_0x00010770f4dc();
                func_0x000107715738();
              }
code_r0x0001076ca7e0:
              func_0x000107714830();
              func_0x000107714850();
              in_ZR = unaff_w20 == 3;
              if ((bool)in_ZR) goto code_r0x0001076ca86c;
            }
            else {
              func_0x000107708428();
              uVar2 = in_ZR;
code_r0x0001076ca83c:
              func_0x00010770d148();
              func_0x000107714cac();
code_r0x0001076ca844:
              func_0x000107714830();
              func_0x000107714890();
              func_0x000107714850();
              in_ZR = uVar2;
            }
            func_0x000107715758();
          }
          func_0x00010770c324();
          func_0x00010770d83c();
          func_0x000107714ed0();
        }
        else {
          func_0x000107715ce8();
        }
        func_0x000107715710();
        func_0x000107714bf4();
      }
      else {
code_r0x0001076ca470:
        func_0x00010771a7c8();
        func_0x00010770c88c();
        func_0x0001077093d4();
        func_0x000107714830();
        func_0x00010771a7bc();
        func_0x0001077095e0();
        func_0x000107709580();
        func_0x000107714830();
        func_0x0001077169a0();
        func_0x00010770d818();
        func_0x00010770c1dc();
        func_0x000107714830();
        func_0x00010770c230();
        func_0x00010771648c();
        if ((bool)in_ZR) {
          func_0x000107715d20();
          func_0x00010771a7b0();
          func_0x000107715788();
          func_0x000107708414();
          func_0x000107714848();
          func_0x000107714898();
          uVar2 = 0;
          if (!(bool)in_ZR) goto code_r0x0001076ca5a8;
          func_0x000107714870();
          func_0x000107708450();
          func_0x00010770c430();
          func_0x0001077169a0();
          func_0x00010770dda0();
          func_0x00010770c424();
          func_0x000107714860();
          func_0x000107714848();
          func_0x000107714858();
          func_0x000107714830();
          func_0x000107714838();
          func_0x00010770c260();
          func_0x000107715cdc();
          if ((bool)in_ZR) {
            func_0x000107714bc0();
            func_0x0001077154cc();
          }
          else {
            func_0x000107707fe0();
code_r0x0001076ca544:
            func_0x00010770e7e0();
            func_0x000107714ffc();
          }
code_r0x0001076ca54c:
          func_0x000107714830();
          func_0x000107714850();
          in_ZR = unaff_w23 == 3;
          if ((bool)in_ZR) goto code_r0x0001076ca5d0;
        }
        else {
          func_0x0001077086d0();
          uVar2 = in_ZR;
code_r0x0001076ca5a0:
          func_0x00010770ef3c();
          func_0x000107714dc4();
code_r0x0001076ca5a8:
          func_0x000107714830();
          func_0x000107714838();
          func_0x000107714850();
          in_ZR = uVar2;
        }
        func_0x000107715758();
      }
      func_0x00010770d210();
      func_0x00010770df2c();
      func_0x0001077158e8();
    }
    else {
      func_0x000107715ce8();
    }
    func_0x000107715274();
    func_0x00010771513c();
    goto code_r0x0001076ca8b8;
  }
code_r0x0001076ca2b4:
  func_0x00010771a7c8();
  func_0x000107708d1c();
  func_0x000107709590();
  func_0x000107714830();
  func_0x00010771a7bc();
  func_0x000107709190();
  func_0x00010770967c();
  func_0x000107714830();
  func_0x0001077169a0();
  func_0x000107714ebc();
  func_0x00010770c1dc();
  func_0x000107714830();
  func_0x00010770c230();
  func_0x000107715018();
  if ((bool)in_ZR) {
    func_0x000107714bc0();
    func_0x00010771a7b0();
    func_0x000107715ee4();
    func_0x000107708694();
    func_0x000107714848();
    func_0x000107714898();
    uVar2 = 0;
    if (!(bool)in_ZR) goto code_r0x0001076ca3ac;
    func_0x000107714870();
    func_0x000107708600();
    func_0x00010770c430();
    func_0x0001077169a0();
    func_0x00010770e048();
    func_0x00010770c424();
    func_0x000107714860();
    func_0x000107714848();
    func_0x000107714858();
    func_0x000107714830();
    func_0x000107714838();
    func_0x00010770c260();
    func_0x000107715f90();
    if ((bool)in_ZR) {
      func_0x000107714cc4();
      func_0x000107715434();
    }
    else {
      func_0x0001077081c0();
code_r0x0001076ca384:
      func_0x00010770e3ec();
      func_0x000107714f58();
    }
code_r0x0001076ca38c:
    func_0x000107714830();
    func_0x000107714850();
    in_ZR = unaff_w23 == 3;
    if ((bool)in_ZR) goto code_r0x0001076ca3d4;
  }
  else {
    func_0x000107707fe0();
    uVar2 = in_ZR;
code_r0x0001076ca3a4:
    func_0x00010770e7e0();
    func_0x000107714ffc();
code_r0x0001076ca3ac:
    func_0x000107714830();
    func_0x000107714838();
    func_0x000107714850();
    in_ZR = uVar2;
  }
  func_0x000107715758();
code_r0x0001076ca8b8:
  func_0x00010770d3b0();
  func_0x000107710050();
  func_0x000107715294();
  if ((unaff_x21 & 1) == 0) {
    func_0x00010770883c();
    func_0x000107714830();
  }
  func_0x000107707b78();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010770c358();
  func_0x000107714858();
  func_0x000107714830();
  func_0x000107715380();
  func_0x00010726af18();
  func_0x00010770edc0();
  func_0x00010770c324();
  func_0x00010770d83c();
  func_0x000107714ed0();
  func_0x000107715710();
  func_0x000107714bf4();
  func_0x00010770d210();
  func_0x00010770df2c();
  func_0x0001077158e8();
  func_0x000107715274();
  func_0x00010771513c();
  func_0x00010770d3b0();
  func_0x00010770ddb8();
  func_0x000107715294();
  do {
    func_0x000107714988();
  } while( true );
}



/* Entry: 1076ce550; end: 1076ce58b;  */

/* WARNING: Possible PIC construction at 0x0001076ce8e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001076ce9d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001076ce8e4) */
/* WARNING: Removing unreachable block (ram,0x0001076ce8ec) */
/* WARNING: Removing unreachable block (ram,0x0001076ce97c) */
/* WARNING: Removing unreachable block (ram,0x0001076ce90c) */
/* WARNING: Removing unreachable block (ram,0x0001076ce98c) */
/* WARNING: Removing unreachable block (ram,0x0001076ce918) */
/* WARNING: Removing unreachable block (ram,0x0001076ce920) */
/* WARNING: Removing unreachable block (ram,0x0001076ce930) */
/* WARNING: Removing unreachable block (ram,0x0001076ce940) */
/* WARNING: Removing unreachable block (ram,0x0001076ce960) */
/* WARNING: Removing unreachable block (ram,0x0001076ce99c) */
/* WARNING: Removing unreachable block (ram,0x0001076ce9a0) */
/* WARNING: Removing unreachable block (ram,0x0001076ce9a4) */
/* WARNING: Removing unreachable block (ram,0x0001076ce9b0) */
/* WARNING: Removing unreachable block (ram,0x0001076ce9c8) */
/* WARNING: Removing unreachable block (ram,0x0001076ce9d0) */
/* WARNING: Removing unreachable block (ram,0x0001076ce9d8) */
/* WARNING: Removing unreachable block (ram,0x0001076ce9e0) */
/* WARNING: Removing unreachable block (ram,0x0001076ce9f0) */
/* WARNING: Removing unreachable block (ram,0x0001076cea74) */
/* WARNING: Removing unreachable block (ram,0x0001076cea00) */
/* WARNING: Removing unreachable block (ram,0x0001076cea84) */
/* WARNING: Removing unreachable block (ram,0x0001076cea0c) */
/* WARNING: Removing unreachable block (ram,0x0001076cea14) */
/* WARNING: Removing unreachable block (ram,0x0001076cea24) */
/* WARNING: Removing unreachable block (ram,0x0001076cea34) */
/* WARNING: Removing unreachable block (ram,0x0001076cea58) */
/* WARNING: Removing unreachable block (ram,0x0001076cea94) */
/* WARNING: Removing unreachable block (ram,0x0001076cea98) */
/* WARNING: Removing unreachable block (ram,0x0001076cea9c) */
/* WARNING: Removing unreachable block (ram,0x0001076ceaa8) */
/* WARNING: Removing unreachable block (ram,0x0001076ceab8) */
/* WARNING: Removing unreachable block (ram,0x0001076ceac8) */
/* WARNING: Removing unreachable block (ram,0x0001076cead0) */
/* WARNING: Removing unreachable block (ram,0x0001076ceae0) */
/* WARNING: Removing unreachable block (ram,0x0001076ceaf0) */
/* WARNING: Removing unreachable block (ram,0x0001076ceaf8) */
/* WARNING: Removing unreachable block (ram,0x0001076ceb08) */
/* WARNING: Removing unreachable block (ram,0x0001076ceb18) */
/* WARNING: Removing unreachable block (ram,0x0001076ceb2c) */
/* WARNING: Removing unreachable block (ram,0x0001076ceb38) */
/* WARNING: Removing unreachable block (ram,0x0001076ceb54) */
/* WARNING: Removing unreachable block (ram,0x0001076ceb40) */
/* WARNING: Removing unreachable block (ram,0x0001076ceb58) */
/* WARNING: Removing unreachable block (ram,0x0001076ceb64) */
/* WARNING: Removing unreachable block (ram,0x0001076ceb74) */
/* WARNING: Removing unreachable block (ram,0x0001076ceb7c) */
/* WARNING: Removing unreachable block (ram,0x0001076ceb9c) */
/* WARNING: Removing unreachable block (ram,0x0001076cebb0) */
/* WARNING: Removing unreachable block (ram,0x0001076cebc0) */
/* WARNING: Removing unreachable block (ram,0x0001076cebd0) */
/* WARNING: Removing unreachable block (ram,0x0001076cebd8) */
/* WARNING: Removing unreachable block (ram,0x0001076cebe0) */
/* WARNING: Removing unreachable block (ram,0x0001076cebf0) */
/* WARNING: Removing unreachable block (ram,0x0001076cec00) */
/* WARNING: Removing unreachable block (ram,0x0001076cec08) */
/* WARNING: Removing unreachable block (ram,0x0001076cec18) */
/* WARNING: Removing unreachable block (ram,0x0001076cec28) */
/* WARNING: Removing unreachable block (ram,0x0001076cec3c) */
/* WARNING: Removing unreachable block (ram,0x0001076cec48) */
/* WARNING: Removing unreachable block (ram,0x0001076cec64) */
/* WARNING: Removing unreachable block (ram,0x0001076cec50) */
/* WARNING: Removing unreachable block (ram,0x0001076cec68) */
/* WARNING: Removing unreachable block (ram,0x0001076cec74) */
/* WARNING: Removing unreachable block (ram,0x0001076cec84) */
/* WARNING: Removing unreachable block (ram,0x0001076cecac) */
/* WARNING: Removing unreachable block (ram,0x0001076cecb8) */
/* WARNING: Removing unreachable block (ram,0x0001076cecd4) */
/* WARNING: Removing unreachable block (ram,0x0001076cecc0) */
/* WARNING: Removing unreachable block (ram,0x0001076cecd8) */
/* WARNING: Removing unreachable block (ram,0x0001076cecdc) */
/* WARNING: Removing unreachable block (ram,0x0001076cf5d4) */
/* WARNING: Removing unreachable block (ram,0x0001076cf904) */
/* WARNING: Removing unreachable block (ram,0x0001076cfa54) */
/* WARNING: Removing unreachable block (ram,0x0001076ced04) */

void FUN_1076ce550(ulong param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  ulong uVar3;
  uint extraout_w8;
  ulong unaff_x21;
  int unaff_w23;
  
  func_0x000107707ccc();
  func_0x00010770d848();
  func_0x00010770c2b4();
  func_0x000107714890();
  func_0x000107707bf0();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010771cb48();
  func_0x0001077073b8();
  if ((bRam00000001136d4d88 & 1) == 0) {
    param_1 = 0x1136d4d88;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708e10(0x113716518);
      param_1 = 0x1136d4d88;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4d90 & 1) == 0) {
    param_1 = 0x1136d4d90;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708bb0(0x113716550);
      param_1 = 0x1136d4d90;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4d98 & 1) == 0) {
    param_1 = 0x1136d4d98;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708de0(0x113716588);
      param_1 = 0x1136d4d98;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4da0 & 1) == 0) {
    param_1 = 0x1136d4da0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708dc0(0x1137165c0);
      param_1 = 0x1136d4da0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4da8 & 1) == 0) {
    param_1 = 0x1136d4da8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708dd0(0x1137165f8);
      param_1 = 0x1136d4da8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4db0 & 1) == 0) {
    param_1 = 0x1136d4db0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708e00(0x113716630);
      param_1 = 0x1136d4db0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4db8 & 1) == 0) {
    param_1 = 0x1136d4db8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708df0(0x113716668);
      param_1 = 0x1136d4db8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4dc0 & 1) == 0) {
    param_1 = 0x1136d4dc0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708db0(0x1137166a0);
      param_1 = 0x1136d4dc0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4dc8 & 1) == 0) {
    param_1 = 0x1136d4dc8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077092ac(0x1137166d8);
      param_1 = 0x1136d4dc8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4dd0 & 1) == 0) {
    param_1 = 0x1136d4dd0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770d200(0x113716710);
      param_1 = 0x1136d4dd0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4dd8 & 1) == 0) {
    param_1 = 0x1136d4dd8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a9c(0x113716748);
      param_1 = 0x1136d4dd8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4de0 & 1) == 0) {
    param_1 = 0x1136d4de0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708f70(0x113716780);
      param_1 = 0x1136d4de0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4de8 & 1) == 0) {
    param_1 = 0x1136d4de8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708fd0(0x1137167b8);
      param_1 = 0x1136d4de8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4df0 & 1) == 0) {
    param_1 = 0x1136d4df0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a8c(0x1137167f0);
      param_1 = 0x1136d4df0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4df8 & 1) == 0) {
    param_1 = 0x1136d4df8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a7c(0x113716828);
      param_1 = 0x1136d4df8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4e00 & 1) == 0) {
    param_1 = 0x1136d4e00;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a6c(0x113716860);
      param_1 = 0x1136d4e00;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4e08 & 1) == 0) {
    param_1 = 0x1136d4e08;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a5c(0x113716898);
      param_1 = 0x1136d4e08;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4e10 & 1) == 0) {
    param_1 = 0x1136d4e10;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770995c(0x1137168d0);
      param_1 = 0x1136d4e10;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4e18 & 1) == 0) {
    param_1 = 0x1136d4e18;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770c128(0x113716908);
      param_1 = 0x1136d4e18;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4e20 & 1) == 0) {
    param_1 = 0x1136d4e20;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709570(0x113716940);
      param_1 = 0x1136d4e20;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4e28 & 1) == 0) {
    param_1 = 0x1136d4e28;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077094a0(0x113716978);
      param_1 = 0x1136d4e28;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4e30 & 1) == 0) {
    param_1 = 0x1136d4e30;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a4c(0x1137169b0);
      param_1 = 0x1136d4e30;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4e38 & 1) == 0) {
    param_1 = 0x1136d4e38;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770c108(0x1137169e8);
      param_1 = 0x1136d4e38;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4e40 & 1) == 0) {
    param_1 = 0x1136d4e40;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709394(0x113716a20);
      param_1 = 0x1136d4e40;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4e48 & 1) == 0) {
    param_1 = 0x1136d4e48;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a3c(0x113716a58);
      param_1 = 0x1136d4e48;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4e50 & 1) == 0) {
    param_1 = 0x1136d4e50;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770abb8(0x113716a90);
      param_1 = 0x1136d4e50;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4e58 & 1) == 0) {
    param_1 = 0x1136d4e58;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770927c(0x113716ac8);
      param_1 = 0x1136d4e58;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4e60 & 1) == 0) {
    param_1 = 0x1136d4e60;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a2c(0x113716b00);
      param_1 = 0x1136d4e60;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4e68 & 1) == 0) {
    param_1 = 0x1136d4e68;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077090d0(0x113716b38);
      param_1 = 0x1136d4e68;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4e70 & 1) == 0) {
    param_1 = 0x1136d4e70;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709738(0x113716b70);
      param_1 = 0x1136d4e70;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4e78 & 1) == 0) {
    param_1 = 0x1136d4e78;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709728(0x113716ba8);
      param_1 = 0x1136d4e78;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4e80 & 1) == 0) {
    param_1 = 0x1136d4e80;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770c0f8(0x113716be0);
      param_1 = 0x1136d4e80;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4e88 & 1) == 0) {
    param_1 = 0x1136d4e88;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770bab4(0x113716c18);
      param_1 = 0x1136d4e88;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4e90 & 1) == 0) {
    param_1 = 0x1136d4e90;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077093c4(0x113716c50);
      param_1 = 0x1136d4e90;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4e98 & 1) == 0) {
    param_1 = 0x1136d4e98;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a1c(0x113716c88);
      param_1 = 0x1136d4e98;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4ea0 & 1) == 0) {
    param_1 = 0x1136d4ea0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709020(0x113716cc0);
      param_1 = 0x1136d4ea0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4ea8 & 1) == 0) {
    param_1 = 0x1136d4ea8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077093a4(0x113716cf8);
      param_1 = 0x1136d4ea8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4eb0 & 1) == 0) {
    param_1 = 0x1136d4eb0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a0c(0x113716d30);
      param_1 = 0x1136d4eb0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4eb8 & 1) == 0) {
    param_1 = 0x1136d4eb8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077099fc(0x113716d68);
      param_1 = 0x1136d4eb8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4ec0 & 1) == 0) {
    param_1 = 0x1136d4ec0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770c0c0(0x113716da0);
      param_1 = 0x1136d4ec0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4ec8 & 1) == 0) {
    param_1 = 0x1136d4ec8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077099ac(0x113716dd8);
      param_1 = 0x1136d4ec8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4ed0 & 1) == 0) {
    param_1 = 0x1136d4ed0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770a990(0x113716e10);
      param_1 = 0x1136d4ed0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4ed8 & 1) == 0) {
    param_1 = 0x1136d4ed8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708f50(0x113716e48);
      param_1 = 0x1136d4ed8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4ee0 & 1) == 0) {
    param_1 = 0x1136d4ee0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708f00(0x113716e80);
      param_1 = 0x1136d4ee0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4ee8 & 1) == 0) {
    param_1 = 0x1136d4ee8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709eac(0x113716eb8);
      param_1 = 0x1136d4ee8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4ef0 & 1) == 0) {
    param_1 = 0x1136d4ef0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709e9c(0x113716ef0);
      param_1 = 0x1136d4ef0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4ef8 & 1) == 0) {
    param_1 = 0x1136d4ef8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077090e0(0x113716f28);
      param_1 = 0x1136d4ef8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4f00 & 1) == 0) {
    param_1 = 0x1136d4f00;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077090f0(0x113716f60);
      param_1 = 0x1136d4f00;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4f08 & 1) == 0) {
    param_1 = 0x1136d4f08;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709060(0x113716f98);
      param_1 = 0x1136d4f08;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4f10 & 1) == 0) {
    param_1 = 0x1136d4f10;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708ef0(0x113716fd0);
      param_1 = 0x1136d4f10;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d4f18 & 1) == 0) {
    param_1 = 0x1136d4f18;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708ee0(0x113717008);
      param_1 = 0x1136d4f18;
      ___cxa_guard_release();
    }
  }
  func_0x000107707344();
  func_0x000107714af0();
  func_0x00010771cb48();
  func_0x000107707a14();
  func_0x00010770847c();
  func_0x000107708fe0();
  func_0x000107709030();
  func_0x000107714830();
  func_0x000107718560();
  func_0x00010770debc();
  func_0x00010770c1b8();
  func_0x000107714830();
  func_0x00010770df98();
  func_0x0001077099bc();
  func_0x00010770dec8();
  func_0x000107714830();
  func_0x00010771505c();
  func_0x000107714850();
  func_0x000107715a10();
  uVar3 = param_1;
  if ((bool)in_ZR) {
    func_0x000107715970();
    func_0x000107707ee8();
    func_0x000107715018();
    uVar3 = param_1;
    if (!(bool)in_ZR) goto code_r0x0001076cfaf8;
    func_0x000107714bc0();
    uVar3 = param_1;
    func_0x00010771dd60();
    unaff_x21 = param_1;
    if ((uVar3 & 1) != 0) {
code_r0x0001076cfc1c:
      func_0x000107714da8();
code_r0x0001076cfc20:
      func_0x00010770f320();
      func_0x00010771610c();
      func_0x00010770f32c();
      if ((uVar3 & 1) == 0) {
        func_0x00010770aa70();
        func_0x00010770aa80();
        func_0x000107714850();
        func_0x0001077079e0();
        func_0x000107714890();
        func_0x0001077167f8();
        func_0x00010770f728();
        uVar1 = 0;
        if ((bool)in_ZR) {
          uVar1 = extraout_w8;
        }
        unaff_x21 = (ulong)uVar1;
        func_0x000107714830();
      }
      else {
        func_0x000107715ce8();
      }
      func_0x000107714cac();
      func_0x000107714c7c();
      goto code_r0x0001076cfc80;
    }
    func_0x000107714c8c();
    if ((int)uVar3 != 0) {
      func_0x000107718560();
      goto code_r0x0001076cfc1c;
    }
    func_0x00010771f1d8();
    func_0x000107709010();
    func_0x000107708ff0();
    func_0x000107714830();
    func_0x00010771f1cc();
    func_0x000107708d1c();
    func_0x0001077096bc();
    func_0x000107714830();
    func_0x000107718560();
    func_0x00010770cc98();
    func_0x00010770c1dc();
    func_0x000107714830();
    func_0x00010770c230();
    func_0x0001077152d4();
    if ((bool)in_ZR) {
      func_0x000107714cc4();
      func_0x00010771f1c0();
      func_0x000107714d44();
      func_0x000107708134();
      func_0x000107714848();
      func_0x000107714898();
      uVar2 = 0;
      if ((bool)in_ZR) {
        func_0x000107714870();
        func_0x000107708148();
        func_0x00010770c430();
        func_0x000107718560();
        func_0x00010770d6d0();
        func_0x00010770c424();
        func_0x000107714860();
        func_0x000107714848();
        func_0x000107714858();
        func_0x000107714830();
        func_0x000107714838();
        func_0x00010770c260();
        func_0x000107715f3c();
        if (!(bool)in_ZR) {
          func_0x000107707ed4();
          goto code_r0x0001076cfbcc;
        }
        func_0x00010771504c();
        func_0x000107714da8();
        goto code_r0x0001076cfbd4;
      }
      goto code_r0x0001076cfbf4;
    }
    func_0x000107707eac();
    uVar2 = in_ZR;
code_r0x0001076cfbec:
    func_0x00010770d148();
    func_0x000107714cac();
code_r0x0001076cfbf4:
    func_0x000107714830();
    func_0x000107714838();
    func_0x000107714850();
    in_ZR = uVar2;
  }
  else {
code_r0x0001076cfaf8:
    func_0x00010771f1d8();
    func_0x000107709010();
    func_0x000107708ff0();
    func_0x000107714830();
    func_0x00010771f1cc();
    func_0x000107708d1c();
    func_0x0001077096bc();
    func_0x000107714830();
    func_0x000107718560();
    func_0x00010770cc98();
    func_0x00010770c1dc();
    func_0x000107714830();
    func_0x00010770c230();
    func_0x0001077152d4();
    if (!(bool)in_ZR) {
      func_0x000107707eac();
      uVar2 = in_ZR;
      goto code_r0x0001076cfbec;
    }
    func_0x000107714cc4();
    func_0x00010771f1c0();
    func_0x000107714d44();
    func_0x000107708134();
    func_0x000107714848();
    func_0x000107714898();
    uVar2 = 0;
    if (!(bool)in_ZR) goto code_r0x0001076cfbf4;
    func_0x000107714870();
    func_0x000107708148();
    func_0x00010770c430();
    func_0x000107718560();
    func_0x00010770d6d0();
    func_0x00010770c424();
    func_0x000107714860();
    func_0x000107714848();
    func_0x000107714858();
    func_0x000107714830();
    func_0x000107714838();
    func_0x00010770c260();
    func_0x000107715f3c();
    if ((bool)in_ZR) {
      func_0x00010771504c();
      func_0x000107714da8();
    }
    else {
      func_0x000107707ed4();
code_r0x0001076cfbcc:
      func_0x00010770d44c();
      func_0x000107714c7c();
    }
code_r0x0001076cfbd4:
    func_0x000107714830();
    func_0x000107714850();
    in_ZR = unaff_w23 == 3;
    if ((bool)in_ZR) goto code_r0x0001076cfc20;
  }
  func_0x000107715758();
code_r0x0001076cfc80:
  func_0x00010770c324();
  func_0x00010770f338();
  func_0x000107714b48();
  if ((unaff_x21 & 1) == 0) {
    func_0x000107707f1c();
    func_0x000107714830();
  }
  func_0x000107707b78();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010770c284();
  func_0x000107714858();
  func_0x000107714830();
  func_0x0001077151f4();
  func_0x00010726af18();
  func_0x00010770d27c();
  func_0x00010770c324();
  func_0x00010770d640();
  func_0x000107714b48();
  do {
    func_0x000107714988();
  } while( true );
}



/* Entry: 1076d318c; end: 1076d31c7;  */

void FUN_1076d318c(void)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  int iVar6;
  byte *pbVar7;
  ulong uVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  uint uVar11;
  uint extraout_w8;
  bool bVar12;
  int unaff_w20;
  uint unaff_w21;
  int iVar13;
  ulong unaff_x24;
  ulong unaff_x25;
  undefined1 auStack_ce8 [104];
  int iStack_c80;
  undefined1 auStack_c68 [224];
  undefined1 auStack_b88 [56];
  undefined1 auStack_b50 [112];
  undefined1 auStack_ae0 [104];
  int iStack_a78;
  undefined1 auStack_a70 [104];
  int iStack_a08;
  undefined1 auStack_9f0 [168];
  undefined1 auStack_948 [104];
  int iStack_8e0;
  undefined1 auStack_8d8 [104];
  int iStack_870;
  int iStack_860;
  undefined1 auStack_820 [112];
  undefined1 auStack_7b0 [104];
  int iStack_748;
  undefined1 auStack_740 [104];
  int iStack_6d8;
  int iStack_6c8;
  undefined1 auStack_6c0 [56];
  undefined1 auStack_688 [112];
  undefined1 auStack_618 [104];
  int iStack_5b0;
  undefined1 auStack_5a8 [104];
  int iStack_540;
  int iStack_530;
  undefined1 auStack_528 [56];
  undefined1 auStack_4f0 [112];
  undefined1 auStack_480 [104];
  int iStack_418;
  undefined1 auStack_410 [56];
  ulong uStack_3d8;
  int iStack_3a8;
  int iStack_398;
  undefined1 auStack_390 [56];
  undefined1 auStack_358 [112];
  undefined1 auStack_2e8 [104];
  int iStack_280;
  byte abStack_278 [112];
  undefined1 uStack_208;
  int iStack_200;
  byte abStack_1f8 [56];
  undefined1 auStack_1c0 [56];
  undefined1 auStack_188 [104];
  int iStack_120;
  int iStack_b0;
  undefined1 *puStack_60;
  undefined *puStack_58;
  
  func_0x000107707ccc();
  func_0x00010770d848();
  func_0x00010770c2b4();
  func_0x000107714890();
  func_0x000107707bf0();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puVar10 = &DAT_1076d31c8;
  func_0x00010771cb48();
  puStack_60 = &stack0xfffffffffffffff0;
  puStack_58 = puVar10;
  func_0x0001077074e8();
  if ((bRam00000001136d50b8 & 1) == 0) {
    iVar6 = 0x136d50b8;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x0001077098bc(0x113717b68);
      ___cxa_guard_release(0x1136d50b8);
    }
  }
  if ((bRam00000001136d50c0 & 1) == 0) {
    iVar6 = 0x136d50c0;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x0001077095a0(0x113717ba0);
      ___cxa_guard_release(0x1136d50c0);
    }
  }
  if ((bRam00000001136d50c8 & 1) == 0) {
    iVar6 = 0x136d50c8;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107709658(0x113717bd8);
      ___cxa_guard_release(0x1136d50c8);
    }
  }
  if ((bRam00000001136d50d0 & 1) == 0) {
    iVar6 = 0x136d50d0;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x00010770a12c(0x113717c10);
      ___cxa_guard_release(0x1136d50d0);
    }
  }
  if ((bRam00000001136d50d8 & 1) == 0) {
    iVar6 = 0x136d50d8;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x00010770b2e8(0x113717c48);
      ___cxa_guard_release(0x1136d50d8);
    }
  }
  if ((bRam00000001136d50e0 & 1) == 0) {
    iVar6 = 0x136d50e0;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x00010770984c(0x113717c80);
      ___cxa_guard_release(0x1136d50e0);
    }
  }
  if ((bRam00000001136d50e8 & 1) == 0) {
    iVar6 = 0x136d50e8;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107709adc(0x113717cb8);
      ___cxa_guard_release(0x1136d50e8);
    }
  }
  if ((bRam00000001136d50f0 & 1) == 0) {
    iVar6 = 0x136d50f0;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107716018(0x113717cf0,&UNK_10f424377);
      ___cxa_guard_release(0x1136d50f0);
    }
  }
  if ((bRam00000001136d50f8 & 1) == 0) {
    iVar6 = 0x136d50f8;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107708e10(0x113717d28);
      ___cxa_guard_release(0x1136d50f8);
    }
  }
  if ((bRam00000001136d5100 & 1) == 0) {
    iVar6 = 0x136d5100;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107708bb0(0x113717d60);
      ___cxa_guard_release(0x1136d5100);
    }
  }
  if ((bRam00000001136d5108 & 1) == 0) {
    iVar6 = 0x136d5108;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107708de0(0x113717d98);
      ___cxa_guard_release(0x1136d5108);
    }
  }
  if ((bRam00000001136d5110 & 1) == 0) {
    iVar6 = 0x136d5110;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107708dc0(0x113717dd0);
      ___cxa_guard_release(0x1136d5110);
    }
  }
  if ((bRam00000001136d5118 & 1) == 0) {
    iVar6 = 0x136d5118;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107708dd0(0x113717e08);
      ___cxa_guard_release(0x1136d5118);
    }
  }
  if ((bRam00000001136d5120 & 1) == 0) {
    iVar6 = 0x136d5120;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107708e00(0x113717e40);
      ___cxa_guard_release(0x1136d5120);
    }
  }
  if ((bRam00000001136d5128 & 1) == 0) {
    iVar6 = 0x136d5128;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107708df0(0x113717e78);
      ___cxa_guard_release(0x1136d5128);
    }
  }
  if ((bRam00000001136d5130 & 1) == 0) {
    iVar6 = 0x136d5130;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107708db0(0x113717eb0);
      ___cxa_guard_release(0x1136d5130);
    }
  }
  if ((bRam00000001136d5138 & 1) == 0) {
    iVar6 = 0x136d5138;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x0001077092ac(0x113717ee8);
      ___cxa_guard_release(0x1136d5138);
    }
  }
  if ((bRam00000001136d5140 & 1) == 0) {
    iVar6 = 0x136d5140;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107716018(0x113717f20,&UNK_10f4220c1);
      ___cxa_guard_release(0x1136d5140);
    }
  }
  if ((bRam00000001136d5148 & 1) == 0) {
    iVar6 = 0x136d5148;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107716018(0x113717f58,&UNK_10f4241ff);
      ___cxa_guard_release(0x1136d5148);
    }
  }
  if ((bRam00000001136d5150 & 1) == 0) {
    iVar6 = 0x136d5150;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107709394(0x113717f90);
      ___cxa_guard_release(0x1136d5150);
    }
  }
  if ((bRam00000001136d5158 & 1) == 0) {
    iVar6 = 0x136d5158;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107716018(0x113717fc8,&UNK_10f42425d);
      ___cxa_guard_release(0x1136d5158);
    }
  }
  if ((bRam00000001136d5160 & 1) == 0) {
    iVar6 = 0x136d5160;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x00010770927c(0x113718000);
      ___cxa_guard_release(0x1136d5160);
    }
  }
  if ((bRam00000001136d5168 & 1) == 0) {
    iVar6 = 0x136d5168;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107709570(0x113718038);
      ___cxa_guard_release(0x1136d5168);
    }
  }
  if ((bRam00000001136d5170 & 1) == 0) {
    iVar6 = 0x136d5170;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107716018(0x113718070,&UNK_10f4242bb);
      ___cxa_guard_release(0x1136d5170);
    }
  }
  if ((bRam00000001136d5178 & 1) == 0) {
    iVar6 = 0x136d5178;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107709020(0x1137180a8);
      ___cxa_guard_release(0x1136d5178);
    }
  }
  if ((bRam00000001136d5180 & 1) == 0) {
    iVar6 = 0x136d5180;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x0001077093a4(0x1137180e0);
      ___cxa_guard_release(0x1136d5180);
    }
  }
  if ((bRam00000001136d5188 & 1) == 0) {
    iVar6 = 0x136d5188;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x0001077090d0(0x113718118);
      ___cxa_guard_release(0x1136d5188);
    }
  }
  if ((bRam00000001136d5190 & 1) == 0) {
    iVar6 = 0x136d5190;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107716018(0x113718150,&UNK_10f424319);
      ___cxa_guard_release(0x1136d5190);
    }
  }
  if ((bRam00000001136d5198 & 1) == 0) {
    iVar6 = 0x136d5198;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x0001077093c4(0x113718188);
      ___cxa_guard_release(0x1136d5198);
    }
  }
  func_0x00010771490c();
  func_0x0001077148e0(auStack_1c0);
  iVar6 = 0x13717b68;
  iVar13 = 0x13717b68;
  pbVar7 = abStack_278;
  func_0x000107714c2c();
  func_0x00010770f824(auStack_410);
  func_0x000107717b74();
  if (((ulong)pbVar7 & 1) == 0) {
code_r0x0001076d34f8:
    func_0x000107710efc();
    func_0x000107714424();
  }
  else {
    func_0x000107714454();
    func_0x00010771c8cc();
    if ((bool)in_ZR) {
      func_0x00010771a1b0();
      func_0x0001077162a8();
      uVar11 = 0;
      if ((bool)in_ZR) {
        uVar11 = 6;
      }
      unaff_x24 = (ulong)uVar11;
    }
    else {
      func_0x00010771213c();
      func_0x00010771443c();
      func_0x000107718e48();
      func_0x000107716f48();
    }
    func_0x000107710ef0();
    func_0x000107710efc();
    func_0x000107714424();
    uVar3 = (int)unaff_x24 == 6;
    if (((bool)uVar3) || ((int)unaff_x24 == 0)) {
      if ((unaff_x25 & 1) != 0) {
        func_0x000107714454();
        func_0x00010771c8cc();
        if ((bool)uVar3) {
          func_0x00010771a1b0();
          if ((*pbVar7 & 1) != 0) {
            func_0x0001077148ac(abStack_278);
            func_0x00010771c8e0();
            func_0x00010770eacc();
            if ((unaff_x24 & 1) == 0) {
              abStack_278[0] = 0;
              uStack_208 = 0;
              func_0x00010771e694();
              func_0x0001077148fc();
              func_0x000107714848();
              func_0x000107714898();
              if ((bool)uVar3) {
                func_0x000107714870();
                func_0x00010771e688();
                func_0x000107714858();
                puVar9 = auStack_410;
                func_0x000104c2fe00(puVar9,0x113717c80);
                uStack_3d8 = unaff_x24;
                func_0x00010770782c();
                func_0x00010771c8a8();
                func_0x000107714898();
                if (!(bool)uVar3) goto code_r0x0001076d3bd4;
                func_0x000107714870();
                func_0x00010770cc44(puVar9);
                uVar11 = 0;
                FUN_107579348();
                func_0x00010771d494();
                uVar1 = extraout_w8;
                if ((bool)uVar3) {
                  uVar1 = 0;
                }
                unaff_x24 = (ulong)uVar1;
                unaff_w21 = uVar11 ^ 1;
                func_0x000107714830();
                func_0x000107714858();
              }
              else {
code_r0x0001076d3bd4:
                func_0x00010771b044();
              }
              func_0x00010771c8e8();
              goto code_r0x0001076d34a8;
            }
          }
          unaff_w21 = 0;
          unaff_x24 = 4;
        }
        else {
          func_0x0001077148b4();
          func_0x00010771e730();
          func_0x000107714880();
          func_0x000104c2f714(abStack_278);
          func_0x00010771b044();
        }
code_r0x0001076d34a8:
        func_0x000107710ef0();
        goto code_r0x0001076d34ac;
      }
    }
    else {
      unaff_w21 = 1;
code_r0x0001076d34ac:
      uVar3 = (unaff_x24 & 3) == 0;
      if (!(bool)uVar3) {
code_r0x0001076d3968:
        uVar3 = (unaff_x24 & 0xfffffffd) == 0;
        if (!(bool)uVar3) goto code_r0x0001076d4ccc;
code_r0x0001076d3970:
        func_0x0001077168b0();
        goto code_r0x0001076d4cbc;
      }
      if ((unaff_w21 & 1) != 0) {
        uVar8 = 0;
        func_0x000107714c2c();
        func_0x00010770f824(auStack_410);
        func_0x000107717b74();
        if ((uVar8 & 1) == 0) goto code_r0x0001076d34f8;
        func_0x000107714454();
        func_0x00010771c8cc();
        if ((bool)uVar3) {
          func_0x00010771a1b0();
          func_0x000107718fbc();
          uVar11 = 0;
          if ((bool)uVar3) {
            uVar11 = 10;
          }
          unaff_x24 = (ulong)uVar11;
        }
        else {
          func_0x00010771213c();
          func_0x00010771443c();
          func_0x000107718e48();
          func_0x00010771a9fc();
        }
        func_0x000107710ef0();
        func_0x000107710efc();
        func_0x000107714424();
        uVar3 = (int)unaff_x24 == 10;
        if ((!(bool)uVar3) && ((int)unaff_x24 != 0)) goto code_r0x0001076d3968;
        if ((unaff_w21 & 1) != 0) {
          func_0x0001077148ac(abStack_278);
          func_0x00010771c8e0();
          func_0x00010770e684();
          if ((unaff_w21 & 1) == 0) goto code_r0x0001076d3970;
        }
      }
    }
  }
  func_0x00010771490c();
  pbVar7 = abStack_1f8;
  func_0x0001077148e0(pbVar7);
  iStack_3a8 = 0;
  func_0x00010771a738();
  func_0x000107710ec0();
  func_0x00010770c1b8();
  func_0x000107714830();
  if (iStack_3a8 == 0) {
    func_0x0001077159b4();
    func_0x00010771e700();
    func_0x00010770c1b8();
    func_0x000107714830();
  }
  func_0x00010771e6f4();
  func_0x00010771c8b0();
  func_0x00010771e724();
  func_0x000107714830();
  func_0x000107718e48();
  func_0x000107714850();
  uVar4 = iStack_200 == 1;
  if ((bool)uVar4) {
    pbVar7 = abStack_278;
    func_0x0001073405dc(pbVar7);
    func_0x00010770c29c(pbVar7);
    uVar4 = iStack_280 == 3;
    if (!(bool)uVar4) goto code_r0x0001076d359c;
    puVar9 = auStack_2e8;
    func_0x00010732393c();
    func_0x00010770ebec();
    if (((ulong)puVar9 & 1) == 0) {
      func_0x00010770e9b0();
      if ((int)puVar9 != 0) {
        func_0x0001077159b4();
        goto code_r0x0001076d36d8;
      }
      iStack_3a8 = 0;
      func_0x000107717cec();
      func_0x000107710ec0();
      func_0x00010770c1b8();
      func_0x000107714830();
      if (iStack_3a8 == 0) {
        iStack_540 = 0;
        func_0x000107717f30();
        func_0x00010770d174();
        iVar6 = (int)auStack_5a8;
        func_0x00010770c1dc();
        func_0x000107714830();
        if (iStack_540 == 0) {
          func_0x0001077159b4();
          func_0x0001077143e8();
          func_0x00010770c1dc();
          func_0x000107714830();
        }
        func_0x00010770c230();
        func_0x00010771fc44();
        if ((bool)uVar4) {
          func_0x000107718e50();
          func_0x000107717f24();
          func_0x00010771c844();
          func_0x000107712354();
          func_0x000107714848();
          func_0x000107714898();
          uVar3 = 0;
          if ((bool)uVar4) {
            func_0x000107714870();
            func_0x00010770c254(puVar9);
            func_0x00010770c430();
            if (iStack_3a8 == 0) {
              func_0x0001077159b4();
              func_0x000107716f54();
              func_0x00010770c424();
              func_0x000107714860();
            }
            func_0x000107714848();
            func_0x000107714858();
            func_0x000107714830();
            func_0x000107714838();
            goto code_r0x0001076d38d0;
          }
          goto code_r0x0001076d36b0;
        }
        func_0x00010770b864();
        uVar3 = uVar4;
        goto code_r0x0001076d36a4;
      }
code_r0x0001076d38d0:
      func_0x00010770c260();
      func_0x00010771fc50();
      if (!(bool)uVar4) {
        func_0x000107712268();
        goto code_r0x0001076d3684;
      }
      func_0x00010771c8d8();
      func_0x00010771a1a8();
      goto code_r0x0001076d368c;
    }
    func_0x000107719b38();
code_r0x0001076d36d8:
    func_0x00010771a1a8();
  }
  else {
    iStack_280 = 0;
code_r0x0001076d359c:
    iStack_3a8 = 0;
    func_0x000107717cec();
    func_0x000107710ec0();
    func_0x00010770c1b8();
    func_0x000107714830();
    iVar6 = 0x13717b68;
    if (iStack_3a8 == 0) {
      iStack_540 = 0;
      func_0x000107717f30();
      func_0x00010770d174();
      iVar6 = (int)auStack_5a8;
      func_0x00010770c1dc();
      func_0x000107714830();
      if (iStack_540 == 0) {
        func_0x0001077159b4();
        func_0x0001077143e8();
        func_0x00010770c1dc();
        func_0x000107714830();
      }
      func_0x00010770c230();
      func_0x00010771fc44();
      if ((bool)uVar4) {
        func_0x000107718e50();
        func_0x000107717f24();
        func_0x00010771c844();
        func_0x000107712354();
        func_0x000107714848();
        func_0x000107714898();
        uVar3 = 0;
        if ((bool)uVar4) {
          func_0x000107714870();
          func_0x00010770c254(pbVar7);
          func_0x00010770c430();
          if (iStack_3a8 == 0) {
            func_0x0001077159b4();
            func_0x000107716f54();
            func_0x00010770c424();
            func_0x000107714860();
          }
          func_0x000107714848();
          func_0x000107714858();
          func_0x000107714830();
          func_0x000107714838();
          goto code_r0x0001076d35bc;
        }
      }
      else {
        func_0x00010770b864();
        uVar3 = uVar4;
code_r0x0001076d36a4:
        func_0x000107714880();
        func_0x00010771a18c();
      }
code_r0x0001076d36b0:
      func_0x000107714830();
      func_0x000107714838();
      func_0x000107714850();
      goto code_r0x0001076d36bc;
    }
code_r0x0001076d35bc:
    func_0x00010770c260();
    func_0x00010771fc50();
    if ((bool)uVar4) {
      func_0x00010771c8d8();
      func_0x00010771a1a8();
    }
    else {
      func_0x000107712268();
code_r0x0001076d3684:
      func_0x00010771443c();
      func_0x000107718e48();
    }
code_r0x0001076d368c:
    func_0x000107714830();
    func_0x000107714850();
    uVar4 = iVar6 == 3;
    uVar3 = uVar4;
    if (!(bool)uVar4) {
code_r0x0001076d36bc:
      func_0x0001077143dc();
      func_0x000107714418();
      func_0x00010771a1a0();
      goto code_r0x0001076d4ccc;
    }
    iVar13 = 3;
  }
  func_0x00010771e6d0();
  puVar9 = auStack_358;
  func_0x000104c2fe00(puVar9,0x113717ee8);
  iVar6 = (int)puVar9;
  func_0x00010771e6c4();
  if (iVar6 != 0) {
    func_0x0001077168b0();
    goto code_r0x0001076d3704;
  }
  func_0x00010771490c();
  puVar9 = auStack_390;
  func_0x0001077148e0(puVar9);
  iStack_540 = 0;
  func_0x00010771a738();
  func_0x00010770d174();
  func_0x00010770c1b8();
  func_0x000107714830();
  if (iStack_540 == 0) {
    func_0x0001077159b4();
    func_0x0001077143e8();
    func_0x00010770c1b8();
    func_0x000107714830();
  }
  func_0x00010771e6b8();
  func_0x00010771c85c();
  func_0x00010771e6e8();
  func_0x000107714830();
  func_0x00010771a18c();
  func_0x000107714850();
  uVar3 = iStack_398 == 1;
  if ((bool)uVar3) {
    puVar9 = auStack_410;
    func_0x0001073405dc(puVar9);
    func_0x00010770c29c(puVar9);
    uVar3 = iStack_418 == 3;
    if (!(bool)uVar3) goto code_r0x0001076d37a8;
    puVar9 = auStack_480;
    func_0x00010732393c();
    func_0x00010770ebec();
    if (((ulong)puVar9 & 1) == 0) {
      func_0x00010770e9b0();
      if ((int)puVar9 != 0) {
        func_0x0001077159b4();
        goto code_r0x0001076d398c;
      }
      iStack_540 = 0;
      func_0x000107717cec();
      func_0x00010770d174();
      func_0x00010770c1b8();
      func_0x000107714830();
      if (iStack_540 == 0) {
        iStack_6d8 = 0;
        func_0x000107717f30();
        func_0x00010770d164();
        iVar13 = (int)auStack_740;
        func_0x00010770c1dc();
        func_0x000107714830();
        if (iStack_6d8 == 0) {
          func_0x0001077159b4();
          func_0x0001077143c4();
          func_0x00010770c1dc();
          func_0x000107714830();
        }
        func_0x00010770c230();
        func_0x00010771fc2c();
        if ((bool)uVar3) {
          func_0x000107718e40();
          func_0x000107717f24();
          func_0x00010771b1b0();
          func_0x0001077120c4();
          func_0x000107714848();
          func_0x000107714898();
          uVar4 = 0;
          if ((bool)uVar3) {
            func_0x000107714870();
            func_0x00010770c254(puVar9);
            func_0x00010770c430();
            if (iStack_540 == 0) {
              func_0x0001077159b4();
              func_0x0001077164cc();
              func_0x00010770c424();
              func_0x000107714860();
            }
            func_0x000107714848();
            func_0x000107714858();
            func_0x000107714830();
            func_0x000107714838();
            goto code_r0x0001076d3cb8;
          }
          goto code_r0x0001076d38fc;
        }
        func_0x00010770b8c8();
        uVar4 = uVar3;
        goto code_r0x0001076d38f4;
      }
code_r0x0001076d3cb8:
      func_0x00010770c260();
      func_0x00010771fc38();
      if (!(bool)uVar3) {
        func_0x00010770b864();
        goto code_r0x0001076d3890;
      }
      func_0x000107718e50();
      func_0x00010771a184();
      goto code_r0x0001076d389c;
    }
    func_0x000107719b38();
code_r0x0001076d398c:
    func_0x00010771a184();
  }
  else {
    iStack_418 = 0;
code_r0x0001076d37a8:
    iStack_540 = 0;
    func_0x000107717cec();
    func_0x00010770d174();
    func_0x00010770c1b8();
    func_0x000107714830();
    if (iStack_540 == 0) {
      iStack_6d8 = 0;
      func_0x000107717f30();
      func_0x00010770d164();
      iVar13 = (int)auStack_740;
      func_0x00010770c1dc();
      func_0x000107714830();
      if (iStack_6d8 == 0) {
        func_0x0001077159b4();
        func_0x0001077143c4();
        func_0x00010770c1dc();
        func_0x000107714830();
      }
      func_0x00010770c230();
      func_0x00010771fc2c();
      if ((bool)uVar3) {
        func_0x000107718e40();
        func_0x000107717f24();
        func_0x00010771b1b0();
        func_0x0001077120c4();
        func_0x000107714848();
        func_0x000107714898();
        uVar4 = 0;
        if ((bool)uVar3) {
          func_0x000107714870();
          func_0x00010770c254(puVar9);
          func_0x00010770c430();
          if (iStack_540 == 0) {
            func_0x0001077159b4();
            func_0x0001077164cc();
            func_0x00010770c424();
            func_0x000107714860();
          }
          func_0x000107714848();
          func_0x000107714858();
          func_0x000107714830();
          func_0x000107714838();
          goto code_r0x0001076d37c8;
        }
      }
      else {
        func_0x00010770b8c8();
        uVar4 = uVar3;
code_r0x0001076d38f4:
        func_0x000107713264();
        func_0x0001077164bc();
      }
code_r0x0001076d38fc:
      func_0x000107714830();
      func_0x000107714838();
      func_0x000107714850();
      goto code_r0x0001076d3908;
    }
code_r0x0001076d37c8:
    func_0x00010770c260();
    func_0x00010771fc38();
    if ((bool)uVar3) {
      func_0x000107718e50();
      func_0x00010771a184();
    }
    else {
      func_0x00010770b864();
code_r0x0001076d3890:
      func_0x000107714880();
      func_0x00010771a18c();
    }
code_r0x0001076d389c:
    func_0x000107714830();
    func_0x000107714850();
    uVar3 = iVar13 == 3;
    uVar4 = uVar3;
    if (!(bool)uVar3) {
code_r0x0001076d3908:
      func_0x000107713090();
      func_0x000107714460();
      func_0x000107719260();
      goto code_r0x0001076d4ca0;
    }
    iVar13 = 3;
  }
  func_0x00010771e6ac();
  func_0x000107719b38();
  iVar6 = (int)auStack_4f0;
  func_0x000104c2fe00();
  func_0x00010771e6a0();
  if (iVar6 != 0) {
    func_0x0001077168b0();
    goto code_r0x0001076d39b4;
  }
  func_0x00010771490c();
  func_0x0001077148e0(auStack_528);
  iStack_6d8 = 0;
  func_0x00010771a738();
  func_0x00010770d164();
  func_0x00010770c1b8();
  func_0x000107714830();
  if (iStack_6d8 == 0) {
    func_0x0001077159b4();
    func_0x0001077143c4();
    func_0x00010770c1b8();
    func_0x000107714830();
  }
  func_0x00010771e250();
  func_0x00010771c824();
  func_0x00010771e718();
  func_0x000107714830();
  func_0x0001077164bc();
  func_0x000107714850();
  uVar4 = iStack_530 == 1;
  if ((bool)uVar4) {
    puVar9 = auStack_5a8;
    func_0x0001073405dc(puVar9);
    func_0x00010770c29c(puVar9);
    uVar4 = iStack_5b0 == 3;
    if (!(bool)uVar4) goto code_r0x0001076d3a58;
    puVar9 = auStack_618;
    func_0x00010732393c();
    func_0x00010770ebec();
    iVar6 = (int)puVar9;
    if (((ulong)puVar9 & 1) == 0) {
      func_0x00010770e9b0();
      if (iVar6 != 0) {
        func_0x0001077159b4();
        goto code_r0x0001076d3d14;
      }
      iStack_6d8 = 0;
      func_0x000107717cec();
      func_0x00010770d164();
      func_0x00010770c1b8();
      func_0x000107714830();
      if (iStack_6d8 == 0) {
        iStack_870 = 0;
        func_0x000107717f30();
        func_0x00010770cfcc();
        iVar13 = (int)auStack_8d8;
        func_0x00010770c1dc();
        func_0x000107714830();
        if (iStack_870 == 0) {
          func_0x0001077159b4();
          func_0x000107713240();
          func_0x00010770c1dc();
          func_0x000107714830();
        }
        func_0x00010770c230();
        func_0x00010771f6c4();
        if ((bool)uVar4) {
          func_0x0001077189b0();
          func_0x000107717f24();
          func_0x00010771bc30();
          func_0x000107711ed0();
          func_0x000107714848();
          func_0x000107714898();
          uVar3 = 0;
          if ((bool)uVar4) {
            func_0x000107714870();
            func_0x00010770b274();
            func_0x00010770c430();
            if (iStack_6d8 == 0) {
              func_0x0001077159b4();
              func_0x0001077126cc();
              func_0x00010770c424();
              func_0x000107714860();
            }
            func_0x000107714848();
            func_0x000107714858();
            func_0x000107714830();
            func_0x000107714838();
            goto code_r0x0001076d3fb4;
          }
          goto code_r0x0001076d3cec;
        }
        func_0x00010770b850();
        uVar3 = uVar4;
        goto code_r0x0001076d3ce4;
      }
code_r0x0001076d3fb4:
      func_0x00010770c260();
      func_0x00010771fc20();
      if (!(bool)uVar4) {
        func_0x00010770b8c8();
        goto code_r0x0001076d3c7c;
      }
      func_0x000107718e40();
      func_0x00010771a174();
      goto code_r0x0001076d3c84;
    }
    func_0x000107719b38();
code_r0x0001076d3d14:
    func_0x00010771a174();
  }
  else {
    iStack_5b0 = 0;
code_r0x0001076d3a58:
    iStack_6d8 = 0;
    func_0x000107717cec();
    func_0x00010770d164();
    func_0x00010770c1b8();
    func_0x000107714830();
    if (iStack_6d8 == 0) {
      iStack_870 = 0;
      func_0x000107717f30();
      func_0x00010770cfcc();
      iVar13 = (int)auStack_8d8;
      func_0x00010770c1dc();
      func_0x000107714830();
      if (iStack_870 == 0) {
        func_0x0001077159b4();
        func_0x000107713240();
        func_0x00010770c1dc();
        func_0x000107714830();
      }
      func_0x00010770c230();
      func_0x00010771f6c4();
      if ((bool)uVar4) {
        func_0x0001077189b0();
        func_0x000107717f24();
        func_0x00010771bc30();
        func_0x000107711ed0();
        func_0x000107714848();
        func_0x000107714898();
        uVar3 = 0;
        if ((bool)uVar4) {
          func_0x000107714870();
          func_0x00010770b274();
          func_0x00010770c430();
          if (iStack_6d8 == 0) {
            func_0x0001077159b4();
            func_0x0001077126cc();
            func_0x00010770c424();
            func_0x000107714860();
          }
          func_0x000107714848();
          func_0x000107714858();
          func_0x000107714830();
          func_0x000107714838();
          goto code_r0x0001076d3a78;
        }
      }
      else {
        func_0x00010770b850();
        uVar3 = uVar4;
code_r0x0001076d3ce4:
        func_0x000107712df0();
        func_0x000107718754();
      }
code_r0x0001076d3cec:
      func_0x000107714830();
      func_0x000107714838();
      func_0x000107714850();
      goto code_r0x0001076d3cf8;
    }
code_r0x0001076d3a78:
    func_0x00010770c260();
    func_0x00010771fc20();
    if ((bool)uVar4) {
      func_0x000107718e40();
      func_0x00010771a174();
    }
    else {
      func_0x00010770b8c8();
code_r0x0001076d3c7c:
      func_0x000107713264();
      func_0x0001077164bc();
    }
code_r0x0001076d3c84:
    func_0x000107714830();
    func_0x000107714850();
    uVar4 = iVar13 == 3;
    uVar3 = uVar4;
    if (!(bool)uVar4) {
code_r0x0001076d3cf8:
      func_0x00010771439c();
      func_0x000107714430();
      func_0x0001077157c8();
      goto code_r0x0001076d4c84;
    }
    iVar13 = 3;
  }
  func_0x00010771de18();
  puVar9 = auStack_688;
  func_0x000104c2fe00(puVar9,0x113717f90);
  iVar6 = (int)puVar9;
  func_0x00010771de24();
  if (iVar6 != 0) {
    func_0x0001077168b0();
    goto code_r0x0001076d3d40;
  }
  func_0x00010771490c();
  puVar9 = auStack_6c0;
  func_0x0001077148e0(puVar9);
  iStack_870 = 0;
  func_0x00010771a738();
  func_0x00010770cfcc();
  func_0x00010770c1b8();
  func_0x000107714830();
  if (iStack_870 == 0) {
    func_0x0001077159b4();
    func_0x000107713240();
    func_0x00010770c1b8();
    func_0x000107714830();
  }
  func_0x00010771dcdc();
  func_0x00010771b1a0();
  func_0x00010771e70c();
  func_0x000107714830();
  func_0x000107718754();
  func_0x000107714850();
  uVar5 = iStack_6c8 == 1;
  if ((bool)uVar5) {
    puVar9 = auStack_740;
    func_0x0001073405dc(puVar9);
    func_0x00010770c29c(puVar9);
    uVar5 = iStack_748 == 3;
    if (!(bool)uVar5) goto code_r0x0001076d3de4;
    puVar9 = auStack_7b0;
    func_0x00010732393c();
    func_0x00010770ebec();
    if (((ulong)puVar9 & 1) == 0) {
      func_0x00010770e9b0();
      if ((int)puVar9 != 0) {
        func_0x0001077159b4();
        goto code_r0x0001076d4010;
      }
      iStack_870 = 0;
      func_0x000107717cec();
      func_0x00010770cfcc();
      func_0x00010770c1b8();
      func_0x000107714830();
      if (iStack_870 == 0) {
        iStack_a08 = 0;
        func_0x000107717f30();
        func_0x00010770d0a8();
        iVar13 = (int)auStack_a70;
        func_0x00010770c1dc();
        func_0x000107714830();
        if (iStack_a08 == 0) {
          func_0x0001077159b4();
          func_0x00010771395c();
          func_0x00010770c1dc();
          func_0x000107714830();
        }
        func_0x00010770c230();
        func_0x00010771f170();
        if ((bool)uVar5) {
          func_0x000107718bf0();
          func_0x000107717f24();
          func_0x00010771c620();
          func_0x0001077120d8();
          func_0x000107714848();
          func_0x000107714898();
          uVar4 = 0;
          if ((bool)uVar5) {
            func_0x000107714870();
            func_0x00010770c254(puVar9);
            func_0x00010770c430();
            if (iStack_870 == 0) {
              func_0x0001077159b4();
              func_0x000107714ebc();
              func_0x00010770c424();
              func_0x000107714860();
            }
            func_0x000107714848();
            func_0x000107714858();
            func_0x000107714830();
            func_0x000107714838();
            goto code_r0x0001076d4294;
          }
          goto code_r0x0001076d3fe8;
        }
        func_0x00010770b904();
        uVar4 = uVar5;
        goto code_r0x0001076d3fe0;
      }
code_r0x0001076d4294:
      func_0x00010770c260();
      func_0x00010771fc14();
      if (!(bool)uVar5) {
        func_0x00010770b850();
        goto code_r0x0001076d3f78;
      }
      func_0x0001077189b0();
      func_0x000107719ce0();
      goto code_r0x0001076d3f80;
    }
    func_0x000107719b38();
code_r0x0001076d4010:
    func_0x000107719ce0();
  }
  else {
    iStack_748 = 0;
code_r0x0001076d3de4:
    iStack_870 = 0;
    func_0x000107717cec();
    func_0x00010770cfcc();
    func_0x00010770c1b8();
    func_0x000107714830();
    if (iStack_870 == 0) {
      iStack_a08 = 0;
      func_0x000107717f30();
      func_0x00010770d0a8();
      iVar13 = (int)auStack_a70;
      func_0x00010770c1dc();
      func_0x000107714830();
      if (iStack_a08 == 0) {
        func_0x0001077159b4();
        func_0x00010771395c();
        func_0x00010770c1dc();
        func_0x000107714830();
      }
      func_0x00010770c230();
      func_0x00010771f170();
      if ((bool)uVar5) {
        func_0x000107718bf0();
        func_0x000107717f24();
        func_0x00010771c620();
        func_0x0001077120d8();
        func_0x000107714848();
        func_0x000107714898();
        uVar4 = 0;
        if ((bool)uVar5) {
          func_0x000107714870();
          func_0x00010770c254(puVar9);
          func_0x00010770c430();
          if (iStack_870 == 0) {
            func_0x0001077159b4();
            func_0x000107714ebc();
            func_0x00010770c424();
            func_0x000107714860();
          }
          func_0x000107714848();
          func_0x000107714858();
          func_0x000107714830();
          func_0x000107714838();
          goto code_r0x0001076d3e04;
        }
      }
      else {
        func_0x00010770b904();
        uVar4 = uVar5;
code_r0x0001076d3fe0:
        func_0x00010770d44c();
        func_0x000107714c7c();
      }
code_r0x0001076d3fe8:
      func_0x000107714830();
      func_0x000107714838();
      func_0x000107714850();
      goto code_r0x0001076d3ff4;
    }
code_r0x0001076d3e04:
    func_0x00010770c260();
    func_0x00010771fc14();
    if ((bool)uVar5) {
      func_0x0001077189b0();
      func_0x000107719ce0();
    }
    else {
      func_0x00010770b850();
code_r0x0001076d3f78:
      func_0x000107712df0();
      func_0x000107718754();
    }
code_r0x0001076d3f80:
    func_0x000107714830();
    func_0x000107714850();
    uVar5 = iVar13 == 3;
    uVar4 = uVar5;
    if (!(bool)uVar5) {
code_r0x0001076d3ff4:
      func_0x000107714384();
      func_0x0001077143f4();
      func_0x0001077178b4();
      goto code_r0x0001076d4c68;
    }
    iVar13 = 3;
  }
  func_0x00010771e67c();
  puVar9 = auStack_820;
  func_0x000104c2fe00(puVar9,0x113718000);
  iVar6 = (int)puVar9;
  func_0x00010771e670();
  if (iVar6 != 0) {
    func_0x0001077168b0();
    goto code_r0x0001076d403c;
  }
  func_0x000107712454();
  iStack_a08 = 0;
  func_0x00010771a738();
  func_0x00010770d0a8();
  func_0x00010770c1b8();
  func_0x000107714830();
  if (iStack_a08 == 0) {
    func_0x0001077159b4();
    func_0x00010771395c();
    func_0x00010770c1b8();
    func_0x000107714830();
  }
  func_0x000107717ae0();
  func_0x00010771933c();
  func_0x00010771881c();
  func_0x00010771e6dc();
  func_0x000107714830();
  func_0x000107714c7c();
  func_0x000107714850();
  uVar3 = iStack_860 == 1;
  if ((bool)uVar3) {
    puVar9 = auStack_8d8;
    func_0x0001073405dc();
    func_0x00010770c29c(puVar9);
    iVar6 = (int)puVar9;
    uVar3 = iStack_8e0 == 3;
    if (!(bool)uVar3) goto code_r0x0001076d40dc;
    puVar9 = auStack_948;
    func_0x00010732393c();
    func_0x00010770ebec();
    iVar6 = (int)puVar9;
    if (((ulong)puVar9 & 1) == 0) {
      func_0x00010770e9b0();
      if (iVar6 != 0) {
        func_0x0001077159b4();
        goto code_r0x0001076d42f0;
      }
      iStack_a08 = 0;
      func_0x000107717cec();
      func_0x00010770d0a8();
      func_0x00010770c1b8();
      func_0x000107714830();
      if (iStack_a08 == 0) {
        iStack_c80 = 0;
        func_0x000107717f30();
        func_0x000107708d1c();
        iVar13 = (int)auStack_ce8;
        func_0x00010770c1dc();
        func_0x000107714830();
        if (iStack_c80 == 0) {
          func_0x0001077159b4();
          func_0x00010770cc98();
          func_0x00010770c1dc();
          func_0x000107714830();
        }
        func_0x00010770c230();
        func_0x0001077152d4();
        if ((bool)uVar3) {
          func_0x000107714cc4();
          func_0x000107717f24();
          func_0x000107717ac0();
          func_0x000107709d68();
          func_0x000107714848();
          func_0x000107714898();
          uVar5 = 0;
          if ((bool)uVar3) {
            func_0x000107714870();
            func_0x00010770b528();
            func_0x00010770c430();
            if (iStack_a08 == 0) {
              func_0x0001077159b4();
              func_0x000107717b68();
              func_0x00010770c424();
              func_0x000107714860();
            }
            func_0x000107714848();
            func_0x000107714858();
            func_0x000107714830();
            func_0x000107714838();
            goto code_r0x0001076d457c;
          }
          goto code_r0x0001076d42c8;
        }
        func_0x0001077081c0();
        uVar5 = uVar3;
        goto code_r0x0001076d42c0;
      }
code_r0x0001076d457c:
      func_0x00010770c260();
      func_0x00010771fbfc();
      if (!(bool)uVar3) {
        func_0x00010770b904();
        goto code_r0x0001076d4258;
      }
      func_0x000107718bf0();
      func_0x000107718030();
      goto code_r0x0001076d4260;
    }
    func_0x000107719b38();
code_r0x0001076d42f0:
    func_0x000107718030();
  }
  else {
    iStack_8e0 = 0;
code_r0x0001076d40dc:
    iStack_a08 = 0;
    func_0x000107717cec();
    func_0x00010770d0a8();
    func_0x00010770c1b8();
    func_0x000107714830();
    if (iStack_a08 == 0) {
      iStack_c80 = 0;
      func_0x000107717f30();
      func_0x000107708d1c();
      iVar13 = (int)auStack_ce8;
      func_0x00010770c1dc();
      func_0x000107714830();
      if (iStack_c80 == 0) {
        func_0x0001077159b4();
        func_0x00010770cc98();
        func_0x00010770c1dc();
        func_0x000107714830();
      }
      func_0x00010770c230();
      func_0x0001077152d4();
      if ((bool)uVar3) {
        func_0x000107714cc4();
        func_0x000107717f24();
        func_0x000107717ac0();
        func_0x000107709d68();
        func_0x000107714848();
        func_0x000107714898();
        uVar5 = 0;
        if ((bool)uVar3) {
          func_0x000107714870();
          func_0x00010770b528();
          func_0x00010770c430();
          if (iStack_a08 == 0) {
            func_0x0001077159b4();
            func_0x000107717b68();
            func_0x00010770c424();
            func_0x000107714860();
          }
          func_0x000107714848();
          func_0x000107714858();
          func_0x000107714830();
          func_0x000107714838();
          goto code_r0x0001076d40fc;
        }
      }
      else {
        func_0x0001077081c0();
        uVar5 = uVar3;
code_r0x0001076d42c0:
        func_0x00010770e3ec();
        func_0x000107714f58();
      }
code_r0x0001076d42c8:
      func_0x000107714830();
      func_0x000107714838();
      func_0x000107714850();
      goto code_r0x0001076d42d4;
    }
code_r0x0001076d40fc:
    func_0x00010770c260();
    func_0x00010771fbfc();
    if ((bool)uVar3) {
      func_0x000107718bf0();
      func_0x000107718030();
    }
    else {
      func_0x00010770b904();
code_r0x0001076d4258:
      func_0x00010770d44c();
      func_0x000107714c7c();
    }
code_r0x0001076d4260:
    func_0x000107714830();
    func_0x000107714850();
    uVar3 = iVar13 == 3;
    uVar5 = uVar3;
    if (!(bool)uVar3) {
code_r0x0001076d42d4:
      func_0x000107714378();
      func_0x0001077143d0();
      func_0x000107718028();
      goto code_r0x0001076d4c4c;
    }
    iVar13 = 3;
  }
  func_0x00010771d6a0();
  func_0x00010771d9bc();
  func_0x00010771d67c();
  if (iVar6 != 0) {
    func_0x0001077168b0();
    goto code_r0x0001076d4318;
  }
  func_0x00010771490c();
  func_0x0001077148e0(auStack_9f0);
  iStack_c80 = 0;
  func_0x00010771a738();
  func_0x000107708d1c();
  func_0x00010770c1b8();
  func_0x000107714830();
  if (iStack_c80 == 0) {
    func_0x0001077159b4();
    func_0x00010770cc98();
    func_0x00010770c1b8();
    func_0x000107714830();
  }
  func_0x00010771e4b8();
  func_0x00010770ab58();
  puVar9 = auStack_a70;
  func_0x00010771650c(puVar9);
  func_0x000107714830();
  func_0x000107714f58();
  func_0x000107714850();
  func_0x000107716c5c();
  if ((bool)uVar3) {
    func_0x000107718014();
    func_0x00010770c29c(puVar9);
    uVar3 = iStack_a78 == 3;
    if (!(bool)uVar3) goto code_r0x0001076d43b8;
    puVar9 = auStack_ae0;
    func_0x00010732393c();
    func_0x00010770ebec();
    if (((ulong)puVar9 & 1) == 0) {
      func_0x00010770e9b0();
      if ((int)puVar9 != 0) {
        func_0x0001077159b4();
        goto code_r0x0001076d45dc;
      }
      iStack_c80 = 0;
      func_0x000107717cec();
      func_0x000107708d1c();
      func_0x00010770c1b8();
      func_0x000107714830();
      if (iStack_c80 == 0) {
        func_0x000107717f30();
        func_0x000107709190();
        func_0x00010770967c();
        func_0x000107714830();
        func_0x0001077159b4();
        func_0x000107714ebc();
        func_0x00010770c1dc();
        func_0x000107714830();
        func_0x00010770c230();
        func_0x000107715018();
        if ((bool)uVar3) {
          func_0x000107714bc0();
          func_0x000107717f24();
          func_0x00010771c7fc();
          func_0x00010771232c();
          func_0x000107714848();
          func_0x000107714898();
          uVar4 = 0;
          if ((bool)uVar3) {
            func_0x000107714870();
            func_0x00010770c254(puVar9);
            func_0x00010770c430();
            if (iStack_c80 == 0) {
              func_0x0001077159b4();
              func_0x000107712c98();
              func_0x00010770c424();
              func_0x000107714860();
            }
            func_0x000107714848();
            func_0x000107714858();
            func_0x000107714830();
            func_0x000107714838();
            goto code_r0x0001076d4794;
          }
          goto code_r0x0001076d45b4;
        }
        func_0x00010770b8dc();
        uVar4 = uVar3;
        goto code_r0x0001076d45a8;
      }
code_r0x0001076d4794:
      func_0x00010770c260();
      func_0x000107715f90();
      if (!(bool)uVar3) {
        func_0x0001077081c0();
        goto code_r0x0001076d4540;
      }
      func_0x000107714cc4();
      func_0x000107719138();
      goto code_r0x0001076d4548;
    }
    func_0x000107719b38();
code_r0x0001076d45dc:
    func_0x000107719138();
  }
  else {
    iStack_a78 = 0;
code_r0x0001076d43b8:
    iStack_c80 = 0;
    func_0x000107717cec();
    func_0x000107708d1c();
    func_0x00010770c1b8();
    func_0x000107714830();
    if (iStack_c80 == 0) {
      func_0x000107717f30();
      func_0x000107709190();
      func_0x00010770967c();
      func_0x000107714830();
      func_0x0001077159b4();
      func_0x000107714ebc();
      func_0x00010770c1dc();
      func_0x000107714830();
      func_0x00010770c230();
      func_0x000107715018();
      if ((bool)uVar3) {
        func_0x000107714bc0();
        func_0x000107717f24();
        func_0x00010771c7fc();
        func_0x00010771232c();
        func_0x000107714848();
        func_0x000107714898();
        uVar4 = 0;
        if ((bool)uVar3) {
          func_0x000107714870();
          func_0x00010770c254(puVar9);
          func_0x00010770c430();
          if (iStack_c80 == 0) {
            func_0x0001077159b4();
            func_0x000107712c98();
            func_0x00010770c424();
            func_0x000107714860();
          }
          func_0x000107714848();
          func_0x000107714858();
          func_0x000107714830();
          func_0x000107714838();
          goto code_r0x0001076d43d8;
        }
      }
      else {
        func_0x00010770b8dc();
        uVar4 = uVar3;
code_r0x0001076d45a8:
        func_0x000107714880();
        func_0x000107718408();
      }
code_r0x0001076d45b4:
      func_0x000107714830();
      func_0x000107714838();
      func_0x000107714850();
      uVar3 = uVar4;
      goto code_r0x0001076d45c0;
    }
code_r0x0001076d43d8:
    func_0x00010770c260();
    func_0x000107715f90();
    if ((bool)uVar3) {
      func_0x000107714cc4();
      func_0x000107719138();
    }
    else {
      func_0x0001077081c0();
code_r0x0001076d4540:
      func_0x00010770e3ec();
      func_0x000107714f58();
    }
code_r0x0001076d4548:
    func_0x000107714830();
    func_0x000107714850();
    uVar3 = iVar13 == 3;
    if (!(bool)uVar3) {
code_r0x0001076d45c0:
      func_0x00010770e678();
      func_0x00010770f7d0();
      func_0x000107715dbc();
      goto code_r0x0001076d4c30;
    }
  }
  iVar6 = (int)auStack_b88;
  func_0x00010771dbf0();
  func_0x00010771ad08();
  func_0x000107719a44();
  if (iVar6 != 0) {
    func_0x0001077168b0();
    bVar12 = true;
    goto code_r0x0001076d4c18;
  }
  func_0x000107717cec();
  func_0x0001077148ac(auStack_b50);
  func_0x000107715174();
  iVar6 = (int)auStack_b50;
  func_0x00010771c1d8();
  if (iVar6 != 0) {
    func_0x0001077168b0();
    goto code_r0x0001076d4640;
  }
  func_0x00010771490c();
  func_0x0001077148e0(auStack_c68);
  func_0x00010771a738();
  func_0x000107709190();
  func_0x0001077093d4();
  func_0x000107714830();
  func_0x0001077159b4();
  func_0x000107714ebc();
  func_0x00010770c1b8();
  func_0x000107714830();
  func_0x000107716810(auStack_188);
  func_0x00010771e500();
  puVar9 = auStack_ce8;
  func_0x0001077162bc();
  func_0x000107714830();
  func_0x000107718408();
  func_0x000107714850();
  func_0x000107717ed0();
  if ((bool)uVar3) {
    func_0x000107716c78();
    func_0x00010770c29c(puVar9);
    func_0x00010771ba34();
    if (!(bool)uVar3) goto code_r0x0001076d47b8;
    func_0x000107718148();
    func_0x00010770ebec();
    iVar6 = (int)puVar9;
    if (((ulong)puVar9 & 1) != 0) {
      func_0x000107719b38();
code_r0x0001076d498c:
      func_0x00010771a3c0();
      goto code_r0x0001076d4990;
    }
    func_0x00010770e9b0();
    if (iVar6 != 0) {
      func_0x0001077159b4();
      goto code_r0x0001076d498c;
    }
    func_0x000107717cec();
    func_0x00010770c88c();
    func_0x0001077093d4();
    func_0x000107714830();
    iStack_b0 = 0;
    func_0x000107717f30();
    func_0x000107710ea4();
    func_0x000107709580();
    func_0x000107714830();
    if (iStack_b0 == 0) {
      func_0x0001077159b4();
      func_0x00010771436c();
      func_0x00010770c1dc();
      func_0x000107714830();
    }
    func_0x00010770c230();
    func_0x00010771fbe4();
    if (!(bool)uVar3) {
      func_0x00010770e69c();
      func_0x00010771c7f4();
      uVar4 = uVar3;
      goto code_r0x0001076d495c;
    }
    func_0x00010771c804();
    func_0x000107717f24();
    func_0x000107715788();
    func_0x000107708414();
    func_0x000107714848();
    func_0x000107714898();
    uVar4 = 0;
    if ((bool)uVar3) {
      func_0x000107714870();
      func_0x000107708450();
      func_0x00010770c430();
      func_0x0001077159b4();
      func_0x00010770dda0();
      func_0x00010770c424();
      func_0x000107714860();
      func_0x000107714848();
      func_0x000107714858();
      func_0x000107714830();
      func_0x000107714838();
      func_0x00010770c260();
      func_0x000107715cdc();
      if (!(bool)uVar3) {
        func_0x00010770b8dc();
        goto code_r0x0001076d4894;
      }
      func_0x000107714bc0();
      func_0x00010771a3c0();
      goto code_r0x0001076d48a0;
    }
  }
  else {
code_r0x0001076d47b8:
    iVar6 = (int)puVar9;
    func_0x000107717cec();
    func_0x00010770c88c();
    func_0x0001077093d4();
    func_0x000107714830();
    iStack_b0 = 0;
    func_0x000107717f30();
    func_0x000107710ea4();
    func_0x000107709580();
    func_0x000107714830();
    if (iStack_b0 == 0) {
      func_0x0001077159b4();
      func_0x00010771436c();
      func_0x00010770c1dc();
      func_0x000107714830();
    }
    func_0x00010770c230();
    func_0x00010771fbe4();
    if ((bool)uVar3) {
      func_0x00010771c804();
      func_0x000107717f24();
      func_0x000107715788();
      func_0x000107708414();
      func_0x000107714848();
      func_0x000107714898();
      uVar4 = 0;
      if ((bool)uVar3) {
        func_0x000107714870();
        func_0x000107708450();
        func_0x00010770c430();
        func_0x0001077159b4();
        func_0x00010770dda0();
        func_0x00010770c424();
        func_0x000107714860();
        func_0x000107714848();
        func_0x000107714858();
        func_0x000107714830();
        func_0x000107714838();
        func_0x00010770c260();
        func_0x000107715cdc();
        if ((bool)uVar3) {
          func_0x000107714bc0();
          func_0x00010771a3c0();
        }
        else {
          func_0x00010770b8dc();
code_r0x0001076d4894:
          func_0x000107714880();
          func_0x000107718408();
        }
code_r0x0001076d48a0:
        func_0x000107714830();
        func_0x000107714850();
        uVar3 = iVar13 == 3;
        if ((bool)uVar3) {
code_r0x0001076d4990:
          func_0x00010771e4dc();
          func_0x000107716a98();
          func_0x00010770f4c4();
          if (iVar6 != 0) {
            func_0x0001077168b0();
            bVar12 = true;
            goto code_r0x0001076d4bf4;
          }
          func_0x000107708d8c();
          iStack_b0 = 0;
          func_0x00010771a738();
          func_0x000107710ea4();
          func_0x000107709030();
          func_0x000107714830();
          if (iStack_b0 == 0) {
            func_0x0001077159b4();
            func_0x00010771436c();
            func_0x00010770c1b8();
            func_0x000107714830();
          }
          func_0x00010770f4d0();
          puVar9 = auStack_188;
          func_0x000107716ad0();
          func_0x00010771e544();
          func_0x000107714830();
          func_0x000107714dc4();
          func_0x000107714850();
          func_0x000107717230();
          if ((bool)uVar3) {
            func_0x000107716474();
            func_0x000107707ee8();
            func_0x000107715018();
            if ((bool)uVar3) {
              func_0x000107714bc0();
              func_0x00010770ebec();
              iVar6 = (int)puVar9;
              if (((ulong)puVar9 & 1) == 0) {
                func_0x00010770e9b0();
                if (iVar6 == 0) {
                  iStack_120 = 0;
                  func_0x000107717cec();
                  func_0x000107708fe0();
                  func_0x00010770c1b8();
                  func_0x000107714830();
                  if (iStack_120 == 0) goto code_r0x0001076d52fc;
                  goto code_r0x0001076d4da0;
                }
                func_0x0001077159b4();
              }
              else {
                func_0x000107719b38();
              }
              func_0x000107715370();
              goto code_r0x0001076d4ba4;
            }
          }
          else {
            iStack_b0 = 0;
          }
          iStack_120 = 0;
          func_0x000107717cec();
          func_0x000107708fe0();
          func_0x00010770c1b8();
          func_0x000107714830();
          if (iStack_120 == 0) {
            func_0x000107717f30();
            func_0x000107709818();
            func_0x000107709c40();
            func_0x000107714830();
            func_0x0001077159b4();
            func_0x00010770dddc();
            func_0x00010770c1a0();
            func_0x000107714830();
            func_0x00010770ccc8();
            func_0x0001077161e8();
            if (!(bool)uVar3) {
              func_0x000107708428();
              goto code_r0x0001076d4b78;
            }
            func_0x000107715858();
            func_0x000107717f24();
            func_0x000107714d44();
            func_0x000107707f84();
            func_0x000107714838();
            func_0x000107714898();
            if (!(bool)uVar3) goto code_r0x0001076d4b80;
            func_0x000107714870();
            func_0x000107707f5c();
            func_0x00010770cf1c();
            if (iStack_120 == 0) {
              func_0x0001077159b4();
              func_0x00010770d228();
              func_0x00010770cc14();
              func_0x000107714848();
            }
            func_0x000107714838();
            func_0x000107714858();
            func_0x000107714830();
            func_0x000107714890();
          }
          func_0x00010770c260();
          func_0x00010771638c();
          if ((bool)uVar3) {
            func_0x000107715910();
            func_0x000107715370();
            goto code_r0x0001076d4b24;
          }
          func_0x00010770843c();
          goto code_r0x0001076d4b1c;
        }
        goto code_r0x0001076d4970;
      }
    }
    else {
      func_0x00010770e69c();
      func_0x00010771c7f4();
      uVar4 = uVar3;
code_r0x0001076d495c:
      func_0x00010770ef3c();
      func_0x000107714dc4();
    }
  }
  func_0x000107714830();
  func_0x000107714838();
  func_0x000107714850();
  uVar3 = uVar4;
code_r0x0001076d4970:
  func_0x00010770d3e0();
  func_0x00010770ecd8();
  func_0x00010771513c();
code_r0x0001076d4c0c:
  bVar12 = false;
  do {
    func_0x00010770d210();
    func_0x00010770df14();
code_r0x0001076d4c18:
    func_0x000107715fc4();
    func_0x000107715484();
    func_0x00010770e678();
    func_0x00010770f7d0();
    func_0x000107715dbc();
    if (bVar12) {
code_r0x0001076d4318:
      bVar12 = true;
      uVar5 = uVar3;
    }
    else {
code_r0x0001076d4c30:
      bVar12 = false;
      uVar5 = uVar3;
    }
    func_0x000107718100();
    func_0x000107715700();
    func_0x000107714378();
    func_0x0001077143d0();
    func_0x000107718028();
    if (bVar12) {
code_r0x0001076d403c:
      bVar12 = true;
      uVar4 = uVar5;
    }
    else {
code_r0x0001076d4c4c:
      bVar12 = false;
      uVar4 = uVar5;
    }
    func_0x0001077189d8();
    func_0x00010771c80c();
    func_0x000107714384();
    func_0x0001077143f4();
    func_0x0001077178b4();
    if (bVar12) {
code_r0x0001076d3d40:
      bVar12 = true;
      uVar3 = uVar4;
    }
    else {
code_r0x0001076d4c68:
      bVar12 = false;
      uVar3 = uVar4;
    }
    func_0x00010771c814();
    func_0x00010771bd7c();
    func_0x00010771439c();
    func_0x000107714430();
    func_0x0001077157c8();
    if (bVar12) {
code_r0x0001076d39b4:
      bVar12 = true;
      uVar4 = uVar3;
    }
    else {
code_r0x0001076d4c84:
      bVar12 = false;
      uVar4 = uVar3;
    }
    func_0x00010771b140();
    func_0x00010771c81c();
    func_0x000107713090();
    func_0x000107714460();
    func_0x000107719260();
    if (bVar12) {
code_r0x0001076d3704:
      unaff_w20 = 1;
      uVar3 = uVar4;
    }
    else {
code_r0x0001076d4ca0:
      unaff_w20 = 0;
      uVar3 = uVar4;
    }
    func_0x00010771c834();
    func_0x00010771c83c();
    func_0x0001077143dc();
    func_0x000107714418();
    func_0x00010771a1a0();
    if (unaff_w20 != 0) {
code_r0x0001076d4cbc:
      func_0x00010771c7e4();
      func_0x0001077148fc();
      func_0x000107714890();
    }
code_r0x0001076d4ccc:
    func_0x00010771c8f0();
    func_0x000107707b78();
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
code_r0x0001076d52fc:
    func_0x000107717f30();
    func_0x000107709818();
    func_0x000107709c40();
    func_0x000107714830();
    func_0x0001077159b4();
    func_0x00010770dddc();
    func_0x00010770c1a0();
    func_0x000107714830();
    func_0x00010770ccc8();
    func_0x0001077161e8();
    if ((bool)uVar3) {
      func_0x000107715858();
      func_0x000107717f24();
      func_0x000107714d44();
      func_0x000107707f84();
      func_0x000107714838();
      func_0x000107714898();
      if (!(bool)uVar3) goto code_r0x0001076d4b80;
      func_0x000107714870();
      func_0x000107707f5c();
      func_0x00010770cf1c();
      if (iStack_120 == 0) {
        func_0x0001077159b4();
        func_0x00010770d228();
        func_0x00010770cc14();
        func_0x000107714848();
      }
      func_0x000107714838();
      func_0x000107714858();
      func_0x000107714830();
      func_0x000107714890();
code_r0x0001076d4da0:
      func_0x00010770c260();
      func_0x00010771638c();
      if ((bool)uVar3) {
        func_0x000107715910();
        func_0x000107715370();
      }
      else {
        func_0x00010770843c();
code_r0x0001076d4b1c:
        func_0x00010770f4dc();
        func_0x000107715738();
      }
code_r0x0001076d4b24:
      func_0x000107714830();
      func_0x000107714850();
      uVar3 = unaff_w20 == 3;
      if (!(bool)uVar3) goto code_r0x0001076d4b8c;
code_r0x0001076d4ba4:
      iVar6 = (int)auStack_188;
      func_0x000107716aa0();
      func_0x000107716e34();
      func_0x00010771e664();
      uVar3 = iVar6 == 0;
      uVar2 = 0x818;
      if ((bool)uVar3) {
        uVar2 = 0x3b8;
      }
      func_0x000107714a68(uVar2);
      func_0x000107714dc4();
      func_0x000107718408();
      bVar12 = true;
    }
    else {
      func_0x000107708428();
code_r0x0001076d4b78:
      func_0x00010770d148();
      func_0x000107714cac();
code_r0x0001076d4b80:
      func_0x000107714830();
      func_0x000107714890();
      func_0x000107714850();
code_r0x0001076d4b8c:
      bVar12 = false;
    }
    func_0x00010770c324();
    func_0x00010770d83c();
    func_0x000107714ed0();
code_r0x0001076d4bf4:
    func_0x000107715710();
    func_0x000107714bf4();
    func_0x00010770d3e0();
    func_0x00010770ecd8();
    func_0x00010771513c();
    if (!bVar12) goto code_r0x0001076d4c0c;
code_r0x0001076d4640:
    bVar12 = true;
  } while( true );
}



/* Entry: 1076dda00; end: 1076ddc47;  */

void FUN_1076dda00(void)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  int iVar1;
  
  func_0x00010771a3d8();
  func_0x000107707d40();
  if ((bRam00000001136d55c8 & 1) == 0) {
    iVar1 = 0x136d55c8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010770a514(0x113719ea0);
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d55d0 & 1) == 0) {
    iVar1 = 0x136d55d0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010770b67c(0x113719ed8);
      ___cxa_guard_release();
    }
  }
  func_0x000107710134();
  func_0x00010770c51c();
  func_0x000107714850();
  func_0x0001077155d0();
  func_0x00010770c51c();
  func_0x000107714850();
  func_0x00010770ce14();
  func_0x00010771a774();
  if ((bool)in_ZR) {
    func_0x00010770ee48();
    func_0x00010770c2e4();
    func_0x000107714848();
    func_0x00010770d364();
    func_0x00010770d410();
    func_0x000107714890();
    func_0x00010770c454();
    func_0x0001077150c8();
    if (!(bool)in_ZR) {
      func_0x000107707df4();
      while( true ) {
        func_0x00010770c460();
        func_0x000107714ad4();
LAB_1076ddb60:
        func_0x000107714848();
        func_0x000107714838();
LAB_1076ddb68:
        func_0x000107714850();
        func_0x000107714830();
        func_0x000107707d28();
        if ((bool)in_ZR) break;
        ___stack_chk_fail();
LAB_1076ddbe0:
        func_0x00010770d0b8();
      }
      return;
    }
    func_0x000107718e18();
    func_0x000107714dd4();
    func_0x00010770bfc8();
    if ((bool)in_OV) goto LAB_1076ddbe0;
    func_0x000107715828(0x43c80000);
    if ((in_NG != in_OV) && (func_0x000107715828(0x43480000), !(bool)in_NG)) {
      func_0x000107709778();
      func_0x00010770b600();
      if ((!(bool)in_ZR) && (func_0x0001077176e4(), !(bool)in_ZR)) {
        func_0x00010770b5ec();
      }
    }
    func_0x000107707db4();
    func_0x000107714890();
    goto LAB_1076ddb60;
  }
  func_0x00010770b800();
  func_0x00010770dfa4();
  func_0x000107715378();
  goto LAB_1076ddb68;
}



/* Entry: 1076e63a8; end: 1076e67b3;  */

void FUN_1076e63a8(uint param_1)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  uint uVar2;
  uint extraout_w8;
  uint unaff_w21;
  int unaff_w23;
  
  func_0x00010771cb48();
  func_0x000107707a14();
  func_0x00010770847c();
  func_0x000107708fe0();
  func_0x000107709030();
  func_0x000107714830();
  func_0x000107718548();
  func_0x00010770debc();
  func_0x00010770c1b8();
  func_0x000107714830();
  func_0x00010770df98();
  func_0x0001077099bc();
  func_0x00010770dec8();
  func_0x000107714830();
  func_0x00010771505c();
  func_0x000107714850();
  func_0x000107715a10();
  uVar2 = param_1;
  if ((bool)in_ZR) {
    func_0x000107715970();
    func_0x000107707ee8();
    func_0x000107715018();
    uVar2 = param_1;
    if (!(bool)in_ZR) goto LAB_1076e6448;
    func_0x000107714bc0();
    uVar2 = param_1;
    func_0x00010771da2c();
    unaff_w21 = param_1;
    if ((uVar2 & 1) != 0) {
LAB_1076e656c:
      func_0x000107714da8();
LAB_1076e6570:
      func_0x00010770f320();
      func_0x00010771610c();
      func_0x00010770f32c();
      if ((uVar2 & 1) == 0) {
        func_0x00010770aa70();
        func_0x00010770aa80();
        func_0x000107714850();
        func_0x0001077079e0();
        func_0x000107714890();
        func_0x0001077167f8();
        func_0x00010770f728();
        unaff_w21 = 0;
        if ((bool)in_ZR) {
          unaff_w21 = extraout_w8;
        }
        func_0x000107714830();
      }
      else {
        func_0x000107715ce8();
      }
      func_0x000107714cac();
      func_0x000107714c7c();
      goto LAB_1076e65d0;
    }
    func_0x000107714c8c();
    if (uVar2 != 0) {
      func_0x000107718548();
      goto LAB_1076e656c;
    }
    func_0x00010771ef00();
    func_0x000107709010();
    func_0x000107708ff0();
    func_0x000107714830();
    func_0x00010771eef4();
    func_0x000107708d1c();
    func_0x0001077096bc();
    func_0x000107714830();
    func_0x000107718548();
    func_0x00010770cc98();
    func_0x00010770c1dc();
    func_0x000107714830();
    func_0x00010770c230();
    func_0x0001077152d4();
    if ((bool)in_ZR) {
      func_0x000107714cc4();
      func_0x00010771eee8();
      func_0x000107714d44();
      func_0x000107708134();
      func_0x000107714848();
      func_0x000107714898();
      uVar1 = 0;
      if ((bool)in_ZR) {
        func_0x000107714870();
        func_0x000107708148();
        func_0x00010770c430();
        func_0x000107718548();
        func_0x00010770d6d0();
        func_0x00010770c424();
        func_0x000107714860();
        func_0x000107714848();
        func_0x000107714858();
        func_0x000107714830();
        func_0x000107714838();
        func_0x00010770c260();
        func_0x000107715f3c();
        if (!(bool)in_ZR) {
          func_0x000107707ed4();
          goto LAB_1076e651c;
        }
        func_0x00010771504c();
        func_0x000107714da8();
        goto LAB_1076e6524;
      }
      goto LAB_1076e6544;
    }
    func_0x000107707eac();
    uVar1 = in_ZR;
LAB_1076e653c:
    func_0x00010770d148();
    func_0x000107714cac();
LAB_1076e6544:
    func_0x000107714830();
    func_0x000107714838();
    func_0x000107714850();
    in_ZR = uVar1;
  }
  else {
LAB_1076e6448:
    func_0x00010771ef00();
    func_0x000107709010();
    func_0x000107708ff0();
    func_0x000107714830();
    func_0x00010771eef4();
    func_0x000107708d1c();
    func_0x0001077096bc();
    func_0x000107714830();
    func_0x000107718548();
    func_0x00010770cc98();
    func_0x00010770c1dc();
    func_0x000107714830();
    func_0x00010770c230();
    func_0x0001077152d4();
    if (!(bool)in_ZR) {
      func_0x000107707eac();
      uVar1 = in_ZR;
      goto LAB_1076e653c;
    }
    func_0x000107714cc4();
    func_0x00010771eee8();
    func_0x000107714d44();
    func_0x000107708134();
    func_0x000107714848();
    func_0x000107714898();
    uVar1 = 0;
    if (!(bool)in_ZR) goto LAB_1076e6544;
    func_0x000107714870();
    func_0x000107708148();
    func_0x00010770c430();
    func_0x000107718548();
    func_0x00010770d6d0();
    func_0x00010770c424();
    func_0x000107714860();
    func_0x000107714848();
    func_0x000107714858();
    func_0x000107714830();
    func_0x000107714838();
    func_0x00010770c260();
    func_0x000107715f3c();
    if ((bool)in_ZR) {
      func_0x00010771504c();
      func_0x000107714da8();
    }
    else {
      func_0x000107707ed4();
LAB_1076e651c:
      func_0x00010770d44c();
      func_0x000107714c7c();
    }
LAB_1076e6524:
    func_0x000107714830();
    func_0x000107714850();
    in_ZR = unaff_w23 == 3;
    if ((bool)in_ZR) goto LAB_1076e6570;
  }
  func_0x000107715758();
LAB_1076e65d0:
  func_0x00010770c324();
  func_0x00010770f338();
  func_0x000107714b48();
  if ((unaff_w21 & 1) == 0) {
    func_0x000107707f1c();
    func_0x000107714830();
  }
  func_0x000107707b78();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010770c284();
  func_0x000107714858();
  func_0x000107714830();
  func_0x0001077151f4();
  func_0x00010726af18();
  func_0x00010770d27c();
  func_0x00010770c324();
  func_0x00010770d640();
  func_0x000107714b48();
  do {
    func_0x000107714988();
  } while( true );
}



/* Entry: 1076eb5cc; end: 1076eb98f;  */

void FUN_1076eb5cc(void)

{
  undefined8 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 auStack_278 [104];
  int iStack_210;
  int iStack_1a0;
  int iStack_130;
  int iStack_c0;
  undefined1 auStack_b8 [112];
  byte bStack_48;
  undefined1 auStack_40 [64];
  
  func_0x000107715308();
  func_0x000107707ae4();
  if ((bRam00000001136d5d78 & 1) == 0) {
    iVar3 = 0x136d5d78;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x00010770ab38(0x11371d3c8);
      ___cxa_guard_release(0x1136d5d78);
    }
  }
  if ((bRam00000001136d5d80 & 1) == 0) {
    iVar3 = 0x136d5d80;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x000107710e04(0x11371d400);
      ___cxa_guard_release(0x1136d5d80);
    }
  }
  if ((bRam00000001136d5d88 & 1) == 0) {
    iVar3 = 0x136d5d88;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x000107714a38(0x11371d438,&UNK_10f421a88);
      ___cxa_guard_release(0x1136d5d88);
    }
  }
  if ((bRam00000001136d5d90 & 1) == 0) {
    iVar3 = 0x136d5d90;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x000107714a38(0x11371d470,&UNK_10f421acc);
      ___cxa_guard_release(0x1136d5d90);
    }
  }
  func_0x00010771490c();
  func_0x0001077148e0(auStack_40);
  auStack_b8[0] = 0;
  bStack_48 = 0;
  iStack_c0 = 0;
  func_0x000107715d78();
  func_0x00010770c394();
  func_0x00010770c1dc();
  func_0x000107714830();
  if (iStack_c0 == 0) {
    func_0x00010770d364();
    func_0x00010770c1dc();
    func_0x000107714830();
  }
  func_0x00010770c230();
  uVar2 = iStack_130 == 2;
  if (!(bool)uVar2) {
    func_0x0001077110d0();
    func_0x0001077158f8();
    func_0x00010770de00();
    func_0x00010771519c();
    goto LAB_1076eb7e4;
  }
  iStack_1a0 = 0;
  func_0x00010770cf68();
  func_0x00010770c37c();
  func_0x000107714860();
  if (iStack_1a0 == 0) {
    func_0x00010770c788();
    func_0x000107711638();
    func_0x000107714850();
    if (iStack_1a0 == 0) {
      func_0x00010770d364();
      func_0x00010770f86c();
      func_0x000107714890();
    }
  }
  func_0x00010770f524();
  uVar2 = iStack_210 == 2;
  if ((bool)uVar2) {
    if ((bStack_48 & 1) == 0) {
      func_0x00010771efac();
      func_0x00010770dc2c(2);
      func_0x000107714890();
      func_0x000107714898();
      if (!(bool)uVar2) goto LAB_1076eb7dc;
      func_0x000107714870();
      func_0x000107715be0();
      func_0x000107714858();
    }
    func_0x00010771df34();
    func_0x0001072cb4bc(auStack_278);
    func_0x0001077171bc();
    func_0x000107719f14();
    func_0x00010770e84c(auStack_b8);
    func_0x000107712ecc();
    func_0x00010771577c();
    if ((bool)uVar2) {
      func_0x000107715228();
      func_0x00010756e584();
      func_0x000107714a5c();
      uVar1 = 0xb28;
      if ((bool)uVar2) {
        uVar1 = 0xb60;
      }
      func_0x000107714a68(uVar1,auStack_40);
      func_0x000107714d74();
      func_0x000107579a48();
      func_0x00010770c2b4();
      func_0x000107714890();
    }
    else {
      func_0x0001077096cc();
    }
    func_0x00010770cd34();
    func_0x000107714888();
    func_0x000107714860();
  }
  else {
    func_0x0001077110d0();
    func_0x000107715ef8();
    func_0x00010770de00();
    func_0x00010771519c();
  }
LAB_1076eb7dc:
  func_0x000107714850();
  func_0x000107714848();
LAB_1076eb7e4:
  func_0x000107714830();
  func_0x000107714838();
  func_0x0001077160e4();
  func_0x00010771c394();
  func_0x000107708038();
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  ___cxa_guard_abort(0x1136d5d90);
  do {
    func_0x000107714988();
  } while( true );
}



/* Entry: 1076f0584; end: 1076f05bf;  */

/* WARNING: Possible PIC construction at 0x0001076f0904: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001076f09f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001076f0908) */
/* WARNING: Removing unreachable block (ram,0x0001076f0910) */
/* WARNING: Removing unreachable block (ram,0x0001076f09a0) */
/* WARNING: Removing unreachable block (ram,0x0001076f0930) */
/* WARNING: Removing unreachable block (ram,0x0001076f09b0) */
/* WARNING: Removing unreachable block (ram,0x0001076f093c) */
/* WARNING: Removing unreachable block (ram,0x0001076f0944) */
/* WARNING: Removing unreachable block (ram,0x0001076f0954) */
/* WARNING: Removing unreachable block (ram,0x0001076f0964) */
/* WARNING: Removing unreachable block (ram,0x0001076f0984) */
/* WARNING: Removing unreachable block (ram,0x0001076f09c0) */
/* WARNING: Removing unreachable block (ram,0x0001076f09c4) */
/* WARNING: Removing unreachable block (ram,0x0001076f09c8) */
/* WARNING: Removing unreachable block (ram,0x0001076f09d4) */
/* WARNING: Removing unreachable block (ram,0x0001076f09ec) */
/* WARNING: Removing unreachable block (ram,0x0001076f09f4) */
/* WARNING: Removing unreachable block (ram,0x0001076f09fc) */
/* WARNING: Removing unreachable block (ram,0x0001076f0a04) */
/* WARNING: Removing unreachable block (ram,0x0001076f0a14) */
/* WARNING: Removing unreachable block (ram,0x0001076f0a98) */
/* WARNING: Removing unreachable block (ram,0x0001076f0a24) */
/* WARNING: Removing unreachable block (ram,0x0001076f0aa8) */
/* WARNING: Removing unreachable block (ram,0x0001076f0a30) */
/* WARNING: Removing unreachable block (ram,0x0001076f0a38) */
/* WARNING: Removing unreachable block (ram,0x0001076f0a48) */
/* WARNING: Removing unreachable block (ram,0x0001076f0a58) */
/* WARNING: Removing unreachable block (ram,0x0001076f0a7c) */
/* WARNING: Removing unreachable block (ram,0x0001076f0ab8) */
/* WARNING: Removing unreachable block (ram,0x0001076f0abc) */
/* WARNING: Removing unreachable block (ram,0x0001076f0ac0) */
/* WARNING: Removing unreachable block (ram,0x0001076f0acc) */
/* WARNING: Removing unreachable block (ram,0x0001076f0adc) */
/* WARNING: Removing unreachable block (ram,0x0001076f0aec) */
/* WARNING: Removing unreachable block (ram,0x0001076f0af4) */
/* WARNING: Removing unreachable block (ram,0x0001076f0b04) */
/* WARNING: Removing unreachable block (ram,0x0001076f0b14) */
/* WARNING: Removing unreachable block (ram,0x0001076f0b1c) */
/* WARNING: Removing unreachable block (ram,0x0001076f0b2c) */
/* WARNING: Removing unreachable block (ram,0x0001076f0b3c) */
/* WARNING: Removing unreachable block (ram,0x0001076f0b50) */
/* WARNING: Removing unreachable block (ram,0x0001076f0b5c) */
/* WARNING: Removing unreachable block (ram,0x0001076f0b78) */
/* WARNING: Removing unreachable block (ram,0x0001076f0b64) */
/* WARNING: Removing unreachable block (ram,0x0001076f0b7c) */
/* WARNING: Removing unreachable block (ram,0x0001076f0b88) */
/* WARNING: Removing unreachable block (ram,0x0001076f0b98) */
/* WARNING: Removing unreachable block (ram,0x0001076f0ba0) */
/* WARNING: Removing unreachable block (ram,0x0001076f0bc0) */
/* WARNING: Removing unreachable block (ram,0x0001076f0bd4) */
/* WARNING: Removing unreachable block (ram,0x0001076f0be4) */
/* WARNING: Removing unreachable block (ram,0x0001076f0bf4) */
/* WARNING: Removing unreachable block (ram,0x0001076f0bfc) */
/* WARNING: Removing unreachable block (ram,0x0001076f0c04) */
/* WARNING: Removing unreachable block (ram,0x0001076f0c14) */
/* WARNING: Removing unreachable block (ram,0x0001076f0c24) */
/* WARNING: Removing unreachable block (ram,0x0001076f0c2c) */
/* WARNING: Removing unreachable block (ram,0x0001076f0c3c) */
/* WARNING: Removing unreachable block (ram,0x0001076f0c4c) */
/* WARNING: Removing unreachable block (ram,0x0001076f0c60) */
/* WARNING: Removing unreachable block (ram,0x0001076f0c6c) */
/* WARNING: Removing unreachable block (ram,0x0001076f0c88) */
/* WARNING: Removing unreachable block (ram,0x0001076f0c74) */
/* WARNING: Removing unreachable block (ram,0x0001076f0c8c) */
/* WARNING: Removing unreachable block (ram,0x0001076f0c98) */
/* WARNING: Removing unreachable block (ram,0x0001076f0ca8) */
/* WARNING: Removing unreachable block (ram,0x0001076f0cd0) */
/* WARNING: Removing unreachable block (ram,0x0001076f0cdc) */
/* WARNING: Removing unreachable block (ram,0x0001076f0cf8) */
/* WARNING: Removing unreachable block (ram,0x0001076f0ce4) */
/* WARNING: Removing unreachable block (ram,0x0001076f0cfc) */
/* WARNING: Removing unreachable block (ram,0x0001076f0d00) */
/* WARNING: Removing unreachable block (ram,0x0001076f15cc) */
/* WARNING: Removing unreachable block (ram,0x0001076f18ec) */
/* WARNING: Removing unreachable block (ram,0x0001076f1a3c) */
/* WARNING: Removing unreachable block (ram,0x0001076f0d28) */

void FUN_1076f0584(ulong param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  uint extraout_w8;
  int unaff_w20;
  ulong unaff_x21;
  int unaff_w23;
  
  func_0x000107707ccc();
  func_0x00010770d848();
  func_0x00010770c2b4();
  func_0x000107714890();
  func_0x000107707bf0();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010771cb48();
  func_0x0001077073b8();
  if ((bRam00000001136d60c8 & 1) == 0) {
    param_1 = 0x1136d60c8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708e10(0x11371eaf8);
      param_1 = 0x1136d60c8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d60d0 & 1) == 0) {
    param_1 = 0x1136d60d0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708bb0(0x11371eb30);
      param_1 = 0x1136d60d0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d60d8 & 1) == 0) {
    param_1 = 0x1136d60d8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708de0(0x11371eb68);
      param_1 = 0x1136d60d8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d60e0 & 1) == 0) {
    param_1 = 0x1136d60e0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708dc0(0x11371eba0);
      param_1 = 0x1136d60e0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d60e8 & 1) == 0) {
    param_1 = 0x1136d60e8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708dd0(0x11371ebd8);
      param_1 = 0x1136d60e8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d60f0 & 1) == 0) {
    param_1 = 0x1136d60f0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708e00(0x11371ec10);
      param_1 = 0x1136d60f0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d60f8 & 1) == 0) {
    param_1 = 0x1136d60f8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708df0(0x11371ec48);
      param_1 = 0x1136d60f8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6100 & 1) == 0) {
    param_1 = 0x1136d6100;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708db0(0x11371ec80);
      param_1 = 0x1136d6100;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6108 & 1) == 0) {
    param_1 = 0x1136d6108;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077092ac(0x11371ecb8);
      param_1 = 0x1136d6108;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6110 & 1) == 0) {
    param_1 = 0x1136d6110;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770a1b0(0x11371ecf0);
      param_1 = 0x1136d6110;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6118 & 1) == 0) {
    param_1 = 0x1136d6118;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a9c(0x11371ed28);
      param_1 = 0x1136d6118;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6120 & 1) == 0) {
    param_1 = 0x1136d6120;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708f70(0x11371ed60);
      param_1 = 0x1136d6120;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6128 & 1) == 0) {
    param_1 = 0x1136d6128;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708fd0(0x11371ed98);
      param_1 = 0x1136d6128;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6130 & 1) == 0) {
    param_1 = 0x1136d6130;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a8c(0x11371edd0);
      param_1 = 0x1136d6130;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6138 & 1) == 0) {
    param_1 = 0x1136d6138;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a7c(0x11371ee08);
      param_1 = 0x1136d6138;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6140 & 1) == 0) {
    param_1 = 0x1136d6140;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a6c(0x11371ee40);
      param_1 = 0x1136d6140;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6148 & 1) == 0) {
    param_1 = 0x1136d6148;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a5c(0x11371ee78);
      param_1 = 0x1136d6148;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6150 & 1) == 0) {
    param_1 = 0x1136d6150;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770995c(0x11371eeb0);
      param_1 = 0x1136d6150;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6158 & 1) == 0) {
    param_1 = 0x1136d6158;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770a4ac(0x11371eee8);
      param_1 = 0x1136d6158;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6160 & 1) == 0) {
    param_1 = 0x1136d6160;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709570(0x11371ef20);
      param_1 = 0x1136d6160;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6168 & 1) == 0) {
    param_1 = 0x1136d6168;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077094a0(0x11371ef58);
      param_1 = 0x1136d6168;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6170 & 1) == 0) {
    param_1 = 0x1136d6170;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a4c(0x11371ef90);
      param_1 = 0x1136d6170;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6178 & 1) == 0) {
    param_1 = 0x1136d6178;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770a49c(0x11371efc8);
      param_1 = 0x1136d6178;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6180 & 1) == 0) {
    param_1 = 0x1136d6180;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709394(0x11371f000);
      param_1 = 0x1136d6180;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6188 & 1) == 0) {
    param_1 = 0x1136d6188;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a3c(0x11371f038);
      param_1 = 0x1136d6188;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6190 & 1) == 0) {
    param_1 = 0x1136d6190;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770986c(0x11371f070);
      param_1 = 0x1136d6190;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6198 & 1) == 0) {
    param_1 = 0x1136d6198;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770927c(0x11371f0a8);
      param_1 = 0x1136d6198;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d61a0 & 1) == 0) {
    param_1 = 0x1136d61a0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a2c(0x11371f0e0);
      param_1 = 0x1136d61a0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d61a8 & 1) == 0) {
    param_1 = 0x1136d61a8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077090d0(0x11371f118);
      param_1 = 0x1136d61a8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d61b0 & 1) == 0) {
    param_1 = 0x1136d61b0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709738(0x11371f150);
      param_1 = 0x1136d61b0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d61b8 & 1) == 0) {
    param_1 = 0x1136d61b8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709728(0x11371f188);
      param_1 = 0x1136d61b8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d61c0 & 1) == 0) {
    param_1 = 0x1136d61c0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770a1c0(0x11371f1c0);
      param_1 = 0x1136d61c0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d61c8 & 1) == 0) {
    param_1 = 0x1136d61c8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770a0dc(0x11371f1f8);
      param_1 = 0x1136d61c8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d61d0 & 1) == 0) {
    param_1 = 0x1136d61d0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077093c4(0x11371f230);
      param_1 = 0x1136d61d0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d61d8 & 1) == 0) {
    param_1 = 0x1136d61d8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a1c(0x11371f268);
      param_1 = 0x1136d61d8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d61e0 & 1) == 0) {
    param_1 = 0x1136d61e0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709020(0x11371f2a0);
      param_1 = 0x1136d61e0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d61e8 & 1) == 0) {
    param_1 = 0x1136d61e8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077093a4(0x11371f2d8);
      param_1 = 0x1136d61e8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d61f0 & 1) == 0) {
    param_1 = 0x1136d61f0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a0c(0x11371f310);
      param_1 = 0x1136d61f0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d61f8 & 1) == 0) {
    param_1 = 0x1136d61f8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077099fc(0x11371f348);
      param_1 = 0x1136d61f8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6200 & 1) == 0) {
    param_1 = 0x1136d6200;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770a57c(0x11371f380);
      param_1 = 0x1136d6200;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6208 & 1) == 0) {
    param_1 = 0x1136d6208;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077099ac(0x11371f3b8);
      param_1 = 0x1136d6208;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6210 & 1) == 0) {
    param_1 = 0x1136d6210;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708f50(0x11371f3f0);
      param_1 = 0x1136d6210;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6218 & 1) == 0) {
    param_1 = 0x1136d6218;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708f00(0x11371f428);
      param_1 = 0x1136d6218;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6220 & 1) == 0) {
    param_1 = 0x1136d6220;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709eac(0x11371f460);
      param_1 = 0x1136d6220;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6228 & 1) == 0) {
    param_1 = 0x1136d6228;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709e9c(0x11371f498);
      param_1 = 0x1136d6228;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6230 & 1) == 0) {
    param_1 = 0x1136d6230;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077090e0(0x11371f4d0);
      param_1 = 0x1136d6230;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6238 & 1) == 0) {
    param_1 = 0x1136d6238;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077090f0(0x11371f508);
      param_1 = 0x1136d6238;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6240 & 1) == 0) {
    param_1 = 0x1136d6240;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709060(0x11371f540);
      param_1 = 0x1136d6240;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6248 & 1) == 0) {
    param_1 = 0x1136d6248;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708ef0(0x11371f578);
      param_1 = 0x1136d6248;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6250 & 1) == 0) {
    param_1 = 0x1136d6250;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708ee0(0x11371f5b0);
      param_1 = 0x1136d6250;
      ___cxa_guard_release();
    }
  }
  func_0x000107707344();
  func_0x000107714af0();
  func_0x00010771cb48();
  func_0x000107707a14();
  func_0x000107708ecc();
  func_0x00010771ecc8();
  func_0x000107708d1c();
  func_0x000107709590();
  func_0x000107714830();
  func_0x000107716964();
  func_0x00010770cc98();
  func_0x00010770c1b8();
  func_0x000107714830();
  func_0x00010770fc78();
  func_0x00010770ab58();
  func_0x00010770f980();
  func_0x000107714830();
  func_0x000107714f58();
  func_0x000107714850();
  func_0x000107715f6c();
  uVar4 = param_1;
  if ((bool)in_ZR) {
    func_0x000107715dac();
    func_0x0001077091a0();
    func_0x0001077182fc();
    uVar4 = param_1;
    if (!(bool)in_ZR) goto code_r0x0001076f1ad8;
    func_0x000107716fdc();
    uVar4 = param_1;
    func_0x000107717508();
    unaff_x21 = param_1;
    if ((uVar4 & 1) == 0) {
      func_0x00010771ecb0();
      func_0x000107714c8c();
      if ((int)uVar4 != 0) {
        func_0x000107716964();
        goto code_r0x0001076f1bf4;
      }
      func_0x00010771a5f4();
      func_0x000107708d1c();
      func_0x000107709590();
      func_0x000107714830();
      func_0x00010771a5e8();
      func_0x000107709190();
      func_0x00010770967c();
      func_0x000107714830();
      func_0x000107716964();
      func_0x000107714ebc();
      func_0x00010770c1dc();
      func_0x000107714830();
      func_0x00010770c230();
      func_0x000107715018();
      if ((bool)in_ZR) {
        func_0x000107714bc0();
        func_0x00010771a5dc();
        func_0x000107715ee4();
        func_0x000107708694();
        func_0x000107714848();
        func_0x000107714898();
        uVar2 = 0;
        if (!(bool)in_ZR) goto code_r0x0001076f1bd0;
        func_0x000107714870();
        func_0x000107708600();
        func_0x00010770c430();
        func_0x000107716964();
        func_0x00010770e048();
        func_0x00010770c424();
        func_0x000107714860();
        func_0x000107714848();
        func_0x000107714858();
        func_0x000107714830();
        func_0x000107714838();
        func_0x00010770c260();
        func_0x000107715f90();
        if (!(bool)in_ZR) {
          func_0x0001077081c0();
          goto code_r0x0001076f1ba8;
        }
        func_0x000107714cc4();
        func_0x000107715434();
        goto code_r0x0001076f1bb0;
      }
      func_0x000107707fe0();
      uVar2 = in_ZR;
      goto code_r0x0001076f1bc8;
    }
    func_0x00010771cfb4();
code_r0x0001076f1bf4:
    func_0x000107715434();
code_r0x0001076f1bf8:
    func_0x00010770fdcc();
    func_0x000107716b94();
    func_0x00010770f89c();
    if ((uVar4 & 1) == 0) {
      func_0x000107709200();
      func_0x00010771ecc8();
      func_0x000107709190();
      func_0x0001077093d4();
      func_0x000107714830();
      func_0x000107716964();
      func_0x000107714ebc();
      func_0x00010770c1b8();
      func_0x000107714830();
      func_0x000107710080();
      func_0x000107710170();
      func_0x00010770fa0c();
      func_0x000107714830();
      func_0x000107714ffc();
      func_0x000107714850();
      func_0x000107717edc();
      uVar5 = uVar4;
      if ((bool)in_ZR) {
        func_0x000107716f7c();
        func_0x000107708e90();
        func_0x000107717f90();
        uVar5 = uVar4;
        if (!(bool)in_ZR) goto code_r0x0001076f1c94;
        func_0x000107716d50();
        uVar5 = uVar4;
        func_0x000107717508();
        unaff_x21 = uVar4;
        if ((uVar5 & 1) == 0) {
          func_0x00010771ecb0();
          func_0x000107714c8c();
          if ((int)uVar5 != 0) {
            func_0x000107716964();
            goto code_r0x0001076f1df0;
          }
          func_0x00010771a5f4();
          func_0x00010770c88c();
          func_0x0001077093d4();
          func_0x000107714830();
          func_0x00010771a5e8();
          func_0x0001077095e0();
          func_0x000107709580();
          func_0x000107714830();
          func_0x000107716964();
          func_0x00010770d818();
          func_0x00010770c1dc();
          func_0x000107714830();
          func_0x00010770c230();
          func_0x00010771648c();
          if ((bool)in_ZR) {
            func_0x000107715d20();
            func_0x00010771a5dc();
            func_0x000107715788();
            func_0x000107708414();
            func_0x000107714848();
            func_0x000107714898();
            uVar2 = 0;
            if ((bool)in_ZR) {
              func_0x000107714870();
              func_0x000107708450();
              func_0x00010770c430();
              func_0x000107716964();
              func_0x00010770dda0();
              func_0x00010770c424();
              func_0x000107714860();
              func_0x000107714848();
              func_0x000107714858();
              func_0x000107714830();
              func_0x000107714838();
              func_0x00010770c260();
              func_0x000107715cdc();
              if (!(bool)in_ZR) {
                func_0x000107707fe0();
                goto code_r0x0001076f1d68;
              }
              func_0x000107714bc0();
              func_0x0001077154cc();
              goto code_r0x0001076f1d70;
            }
            goto code_r0x0001076f1dcc;
          }
          func_0x0001077086d0();
          uVar2 = in_ZR;
          goto code_r0x0001076f1dc4;
        }
        func_0x00010771cfb4();
code_r0x0001076f1df0:
        func_0x0001077154cc();
code_r0x0001076f1df4:
        func_0x00010770fc84();
        func_0x000107716a98();
        func_0x00010770f4c4();
        if ((uVar5 & 1) == 0) {
          func_0x000107708d8c();
          func_0x00010771ecc8();
          func_0x0001077095e0();
          func_0x000107709030();
          func_0x000107714830();
          func_0x000107716964();
          func_0x00010770d818();
          func_0x00010770c1b8();
          func_0x000107714830();
          func_0x00010770f4d0();
          func_0x00010770b9f4();
          func_0x00010771017c();
          func_0x000107714830();
          func_0x000107714dc4();
          func_0x000107714850();
          func_0x000107717230();
          if ((bool)in_ZR) {
            func_0x000107716474();
            func_0x000107707ee8();
            func_0x000107715018();
            if (!(bool)in_ZR) goto code_r0x0001076f1e90;
            func_0x000107714bc0();
            uVar4 = uVar5;
            func_0x000107717508();
            iVar3 = (int)uVar4;
            if ((uVar4 & 1) == 0) {
              func_0x00010771ecb0();
              func_0x000107714c8c();
              if (iVar3 != 0) {
                func_0x000107716964();
                goto code_r0x0001076f208c;
              }
              func_0x00010771a5f4();
              func_0x000107708fe0();
              func_0x00010770a11c();
              func_0x000107714830();
              func_0x00010771a5e8();
              func_0x000107709818();
              func_0x000107709c40();
              func_0x000107714830();
              func_0x000107716964();
              func_0x00010770dddc();
              func_0x00010770c1a0();
              func_0x000107714830();
              func_0x00010770ccc8();
              func_0x0001077161e8();
              unaff_x21 = uVar5;
              if ((bool)in_ZR) {
                func_0x000107715858();
                func_0x00010771a5dc();
                func_0x000107714d44();
                func_0x000107707f84();
                func_0x000107714838();
                func_0x000107714898();
                uVar2 = 0;
                if ((bool)in_ZR) {
                  func_0x000107714870();
                  func_0x000107707f5c();
                  func_0x00010770cf1c();
                  func_0x000107716964();
                  func_0x00010770d228();
                  func_0x00010770cc14();
                  func_0x000107714848();
                  func_0x000107714838();
                  func_0x000107714858();
                  func_0x000107714830();
                  func_0x000107714890();
                  func_0x00010770c260();
                  func_0x00010771638c();
                  if (!(bool)in_ZR) {
                    func_0x00010770843c();
                    goto code_r0x0001076f1ffc;
                  }
                  func_0x000107715910();
                  func_0x000107715370();
                  goto code_r0x0001076f2004;
                }
                goto code_r0x0001076f2068;
              }
              func_0x000107708428();
              uVar2 = in_ZR;
              goto code_r0x0001076f2060;
            }
            func_0x00010771cfb4();
code_r0x0001076f208c:
            func_0x000107715370();
code_r0x0001076f2090:
            func_0x00010771008c();
            func_0x000107716e34();
            func_0x000107710098();
            func_0x000107710da4();
            uVar1 = extraout_w8;
            if ((bool)in_ZR) {
              uVar1 = 0;
            }
            unaff_x21 = (ulong)uVar1;
            func_0x000107714dc4();
            func_0x000107714ffc();
          }
          else {
code_r0x0001076f1e90:
            func_0x00010771a5f4();
            func_0x000107708fe0();
            func_0x00010770a11c();
            func_0x000107714830();
            func_0x00010771a5e8();
            func_0x000107709818();
            func_0x000107709c40();
            func_0x000107714830();
            func_0x000107716964();
            func_0x00010770dddc();
            func_0x00010770c1a0();
            func_0x000107714830();
            func_0x00010770ccc8();
            func_0x0001077161e8();
            if ((bool)in_ZR) {
              func_0x000107715858();
              func_0x00010771a5dc();
              func_0x000107714d44();
              func_0x000107707f84();
              func_0x000107714838();
              func_0x000107714898();
              uVar2 = 0;
              if (!(bool)in_ZR) goto code_r0x0001076f2068;
              func_0x000107714870();
              func_0x000107707f5c();
              func_0x00010770cf1c();
              func_0x000107716964();
              func_0x00010770d228();
              func_0x00010770cc14();
              func_0x000107714848();
              func_0x000107714838();
              func_0x000107714858();
              func_0x000107714830();
              func_0x000107714890();
              func_0x00010770c260();
              func_0x00010771638c();
              if ((bool)in_ZR) {
                func_0x000107715910();
                func_0x000107715370();
              }
              else {
                func_0x00010770843c();
code_r0x0001076f1ffc:
                func_0x00010770f4dc();
                func_0x000107715738();
              }
code_r0x0001076f2004:
              func_0x000107714830();
              func_0x000107714850();
              in_ZR = unaff_w20 == 3;
              if ((bool)in_ZR) goto code_r0x0001076f2090;
            }
            else {
              func_0x000107708428();
              uVar2 = in_ZR;
code_r0x0001076f2060:
              func_0x00010770d148();
              func_0x000107714cac();
code_r0x0001076f2068:
              func_0x000107714830();
              func_0x000107714890();
              func_0x000107714850();
              in_ZR = uVar2;
            }
            func_0x000107715758();
          }
          func_0x00010770c324();
          func_0x00010770d83c();
          func_0x000107714ed0();
        }
        else {
          func_0x000107715ce8();
        }
        func_0x000107715710();
        func_0x000107714bf4();
      }
      else {
code_r0x0001076f1c94:
        func_0x00010771a5f4();
        func_0x00010770c88c();
        func_0x0001077093d4();
        func_0x000107714830();
        func_0x00010771a5e8();
        func_0x0001077095e0();
        func_0x000107709580();
        func_0x000107714830();
        func_0x000107716964();
        func_0x00010770d818();
        func_0x00010770c1dc();
        func_0x000107714830();
        func_0x00010770c230();
        func_0x00010771648c();
        if ((bool)in_ZR) {
          func_0x000107715d20();
          func_0x00010771a5dc();
          func_0x000107715788();
          func_0x000107708414();
          func_0x000107714848();
          func_0x000107714898();
          uVar2 = 0;
          if (!(bool)in_ZR) goto code_r0x0001076f1dcc;
          func_0x000107714870();
          func_0x000107708450();
          func_0x00010770c430();
          func_0x000107716964();
          func_0x00010770dda0();
          func_0x00010770c424();
          func_0x000107714860();
          func_0x000107714848();
          func_0x000107714858();
          func_0x000107714830();
          func_0x000107714838();
          func_0x00010770c260();
          func_0x000107715cdc();
          if ((bool)in_ZR) {
            func_0x000107714bc0();
            func_0x0001077154cc();
          }
          else {
            func_0x000107707fe0();
code_r0x0001076f1d68:
            func_0x00010770e7e0();
            func_0x000107714ffc();
          }
code_r0x0001076f1d70:
          func_0x000107714830();
          func_0x000107714850();
          in_ZR = unaff_w23 == 3;
          if ((bool)in_ZR) goto code_r0x0001076f1df4;
        }
        else {
          func_0x0001077086d0();
          uVar2 = in_ZR;
code_r0x0001076f1dc4:
          func_0x00010770ef3c();
          func_0x000107714dc4();
code_r0x0001076f1dcc:
          func_0x000107714830();
          func_0x000107714838();
          func_0x000107714850();
          in_ZR = uVar2;
        }
        func_0x000107715758();
      }
      func_0x00010770d210();
      func_0x00010770df2c();
      func_0x0001077158e8();
    }
    else {
      func_0x000107715ce8();
    }
    func_0x000107715274();
    func_0x00010771513c();
    goto code_r0x0001076f20dc;
  }
code_r0x0001076f1ad8:
  func_0x00010771a5f4();
  func_0x000107708d1c();
  func_0x000107709590();
  func_0x000107714830();
  func_0x00010771a5e8();
  func_0x000107709190();
  func_0x00010770967c();
  func_0x000107714830();
  func_0x000107716964();
  func_0x000107714ebc();
  func_0x00010770c1dc();
  func_0x000107714830();
  func_0x00010770c230();
  func_0x000107715018();
  if ((bool)in_ZR) {
    func_0x000107714bc0();
    func_0x00010771a5dc();
    func_0x000107715ee4();
    func_0x000107708694();
    func_0x000107714848();
    func_0x000107714898();
    uVar2 = 0;
    if (!(bool)in_ZR) goto code_r0x0001076f1bd0;
    func_0x000107714870();
    func_0x000107708600();
    func_0x00010770c430();
    func_0x000107716964();
    func_0x00010770e048();
    func_0x00010770c424();
    func_0x000107714860();
    func_0x000107714848();
    func_0x000107714858();
    func_0x000107714830();
    func_0x000107714838();
    func_0x00010770c260();
    func_0x000107715f90();
    if ((bool)in_ZR) {
      func_0x000107714cc4();
      func_0x000107715434();
    }
    else {
      func_0x0001077081c0();
code_r0x0001076f1ba8:
      func_0x00010770e3ec();
      func_0x000107714f58();
    }
code_r0x0001076f1bb0:
    func_0x000107714830();
    func_0x000107714850();
    in_ZR = unaff_w23 == 3;
    if ((bool)in_ZR) goto code_r0x0001076f1bf8;
  }
  else {
    func_0x000107707fe0();
    uVar2 = in_ZR;
code_r0x0001076f1bc8:
    func_0x00010770e7e0();
    func_0x000107714ffc();
code_r0x0001076f1bd0:
    func_0x000107714830();
    func_0x000107714838();
    func_0x000107714850();
    in_ZR = uVar2;
  }
  func_0x000107715758();
code_r0x0001076f20dc:
  func_0x00010770d3b0();
  func_0x000107710050();
  func_0x000107715294();
  if ((unaff_x21 & 1) == 0) {
    func_0x00010770883c();
    func_0x000107714830();
  }
  func_0x000107707b78();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010770c358();
  func_0x000107714858();
  func_0x000107714830();
  func_0x000107715380();
  func_0x00010726af18();
  func_0x00010770edc0();
  func_0x00010770c324();
  func_0x00010770d83c();
  func_0x000107714ed0();
  func_0x000107715710();
  func_0x000107714bf4();
  func_0x00010770d210();
  func_0x00010770df2c();
  func_0x0001077158e8();
  func_0x000107715274();
  func_0x00010771513c();
  func_0x00010770d3b0();
  func_0x00010770ddb8();
  func_0x000107715294();
  do {
    func_0x000107714988();
  } while( true );
}



/* Entry: 1076f5da0; end: 1076f5ddb;  */

/* WARNING: Possible PIC construction at 0x0001076f6120: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001076f6214: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001076f6124) */
/* WARNING: Removing unreachable block (ram,0x0001076f612c) */
/* WARNING: Removing unreachable block (ram,0x0001076f61bc) */
/* WARNING: Removing unreachable block (ram,0x0001076f614c) */
/* WARNING: Removing unreachable block (ram,0x0001076f61cc) */
/* WARNING: Removing unreachable block (ram,0x0001076f6158) */
/* WARNING: Removing unreachable block (ram,0x0001076f6160) */
/* WARNING: Removing unreachable block (ram,0x0001076f6170) */
/* WARNING: Removing unreachable block (ram,0x0001076f6180) */
/* WARNING: Removing unreachable block (ram,0x0001076f61a0) */
/* WARNING: Removing unreachable block (ram,0x0001076f61dc) */
/* WARNING: Removing unreachable block (ram,0x0001076f61e0) */
/* WARNING: Removing unreachable block (ram,0x0001076f61e4) */
/* WARNING: Removing unreachable block (ram,0x0001076f61f0) */
/* WARNING: Removing unreachable block (ram,0x0001076f6208) */
/* WARNING: Removing unreachable block (ram,0x0001076f6210) */
/* WARNING: Removing unreachable block (ram,0x0001076f6218) */
/* WARNING: Removing unreachable block (ram,0x0001076f6220) */
/* WARNING: Removing unreachable block (ram,0x0001076f6230) */
/* WARNING: Removing unreachable block (ram,0x0001076f62b4) */
/* WARNING: Removing unreachable block (ram,0x0001076f6240) */
/* WARNING: Removing unreachable block (ram,0x0001076f62c4) */
/* WARNING: Removing unreachable block (ram,0x0001076f624c) */
/* WARNING: Removing unreachable block (ram,0x0001076f6254) */
/* WARNING: Removing unreachable block (ram,0x0001076f6264) */
/* WARNING: Removing unreachable block (ram,0x0001076f6274) */
/* WARNING: Removing unreachable block (ram,0x0001076f6298) */
/* WARNING: Removing unreachable block (ram,0x0001076f62d4) */
/* WARNING: Removing unreachable block (ram,0x0001076f62d8) */
/* WARNING: Removing unreachable block (ram,0x0001076f62dc) */
/* WARNING: Removing unreachable block (ram,0x0001076f62e8) */
/* WARNING: Removing unreachable block (ram,0x0001076f62f8) */
/* WARNING: Removing unreachable block (ram,0x0001076f6308) */
/* WARNING: Removing unreachable block (ram,0x0001076f6310) */
/* WARNING: Removing unreachable block (ram,0x0001076f6320) */
/* WARNING: Removing unreachable block (ram,0x0001076f6330) */
/* WARNING: Removing unreachable block (ram,0x0001076f6338) */
/* WARNING: Removing unreachable block (ram,0x0001076f6348) */
/* WARNING: Removing unreachable block (ram,0x0001076f6358) */
/* WARNING: Removing unreachable block (ram,0x0001076f636c) */
/* WARNING: Removing unreachable block (ram,0x0001076f6378) */
/* WARNING: Removing unreachable block (ram,0x0001076f6394) */
/* WARNING: Removing unreachable block (ram,0x0001076f6380) */
/* WARNING: Removing unreachable block (ram,0x0001076f6398) */
/* WARNING: Removing unreachable block (ram,0x0001076f63a4) */
/* WARNING: Removing unreachable block (ram,0x0001076f63b4) */
/* WARNING: Removing unreachable block (ram,0x0001076f63bc) */
/* WARNING: Removing unreachable block (ram,0x0001076f63dc) */
/* WARNING: Removing unreachable block (ram,0x0001076f63f0) */
/* WARNING: Removing unreachable block (ram,0x0001076f6400) */
/* WARNING: Removing unreachable block (ram,0x0001076f6410) */
/* WARNING: Removing unreachable block (ram,0x0001076f6418) */
/* WARNING: Removing unreachable block (ram,0x0001076f6420) */
/* WARNING: Removing unreachable block (ram,0x0001076f6430) */
/* WARNING: Removing unreachable block (ram,0x0001076f6440) */
/* WARNING: Removing unreachable block (ram,0x0001076f6448) */
/* WARNING: Removing unreachable block (ram,0x0001076f6458) */
/* WARNING: Removing unreachable block (ram,0x0001076f6468) */
/* WARNING: Removing unreachable block (ram,0x0001076f647c) */
/* WARNING: Removing unreachable block (ram,0x0001076f6488) */
/* WARNING: Removing unreachable block (ram,0x0001076f64a4) */
/* WARNING: Removing unreachable block (ram,0x0001076f6490) */
/* WARNING: Removing unreachable block (ram,0x0001076f64a8) */
/* WARNING: Removing unreachable block (ram,0x0001076f64b4) */
/* WARNING: Removing unreachable block (ram,0x0001076f64c4) */
/* WARNING: Removing unreachable block (ram,0x0001076f64ec) */
/* WARNING: Removing unreachable block (ram,0x0001076f64f8) */
/* WARNING: Removing unreachable block (ram,0x0001076f6514) */
/* WARNING: Removing unreachable block (ram,0x0001076f6500) */
/* WARNING: Removing unreachable block (ram,0x0001076f6518) */
/* WARNING: Removing unreachable block (ram,0x0001076f651c) */
/* WARNING: Removing unreachable block (ram,0x0001076f6de8) */
/* WARNING: Removing unreachable block (ram,0x0001076f7108) */
/* WARNING: Removing unreachable block (ram,0x0001076f7258) */
/* WARNING: Removing unreachable block (ram,0x0001076f6544) */

void FUN_1076f5da0(ulong param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  uint extraout_w8;
  int unaff_w20;
  ulong unaff_x21;
  int unaff_w23;
  
  func_0x000107707ccc();
  func_0x00010770d848();
  func_0x00010770c2b4();
  func_0x000107714890();
  func_0x000107707bf0();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010771cb48();
  func_0x0001077073b8();
  if ((bRam00000001136d63e8 & 1) == 0) {
    param_1 = 0x1136d63e8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708e10(0x1137200d8);
      param_1 = 0x1136d63e8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d63f0 & 1) == 0) {
    param_1 = 0x1136d63f0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708bb0(0x113720110);
      param_1 = 0x1136d63f0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d63f8 & 1) == 0) {
    param_1 = 0x1136d63f8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708de0(0x113720148);
      param_1 = 0x1136d63f8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6400 & 1) == 0) {
    param_1 = 0x1136d6400;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708dc0(0x113720180);
      param_1 = 0x1136d6400;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6408 & 1) == 0) {
    param_1 = 0x1136d6408;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708dd0(0x1137201b8);
      param_1 = 0x1136d6408;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6410 & 1) == 0) {
    param_1 = 0x1136d6410;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708e00(0x1137201f0);
      param_1 = 0x1136d6410;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6418 & 1) == 0) {
    param_1 = 0x1136d6418;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708df0(0x113720228);
      param_1 = 0x1136d6418;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6420 & 1) == 0) {
    param_1 = 0x1136d6420;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708db0(0x113720260);
      param_1 = 0x1136d6420;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6428 & 1) == 0) {
    param_1 = 0x1136d6428;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077092ac(0x113720298);
      param_1 = 0x1136d6428;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6430 & 1) == 0) {
    param_1 = 0x1136d6430;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770a1b0(0x1137202d0);
      param_1 = 0x1136d6430;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6438 & 1) == 0) {
    param_1 = 0x1136d6438;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a9c(0x113720308);
      param_1 = 0x1136d6438;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6440 & 1) == 0) {
    param_1 = 0x1136d6440;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708f70(0x113720340);
      param_1 = 0x1136d6440;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6448 & 1) == 0) {
    param_1 = 0x1136d6448;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708fd0(0x113720378);
      param_1 = 0x1136d6448;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6450 & 1) == 0) {
    param_1 = 0x1136d6450;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a8c(0x1137203b0);
      param_1 = 0x1136d6450;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6458 & 1) == 0) {
    param_1 = 0x1136d6458;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a7c(0x1137203e8);
      param_1 = 0x1136d6458;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6460 & 1) == 0) {
    param_1 = 0x1136d6460;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a6c(0x113720420);
      param_1 = 0x1136d6460;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6468 & 1) == 0) {
    param_1 = 0x1136d6468;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a5c(0x113720458);
      param_1 = 0x1136d6468;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6470 & 1) == 0) {
    param_1 = 0x1136d6470;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770995c(0x113720490);
      param_1 = 0x1136d6470;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6478 & 1) == 0) {
    param_1 = 0x1136d6478;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770a4ac(0x1137204c8);
      param_1 = 0x1136d6478;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6480 & 1) == 0) {
    param_1 = 0x1136d6480;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709570(0x113720500);
      param_1 = 0x1136d6480;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6488 & 1) == 0) {
    param_1 = 0x1136d6488;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077094a0(0x113720538);
      param_1 = 0x1136d6488;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6490 & 1) == 0) {
    param_1 = 0x1136d6490;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a4c(0x113720570);
      param_1 = 0x1136d6490;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6498 & 1) == 0) {
    param_1 = 0x1136d6498;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770a49c(0x1137205a8);
      param_1 = 0x1136d6498;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d64a0 & 1) == 0) {
    param_1 = 0x1136d64a0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709394(0x1137205e0);
      param_1 = 0x1136d64a0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d64a8 & 1) == 0) {
    param_1 = 0x1136d64a8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a3c(0x113720618);
      param_1 = 0x1136d64a8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d64b0 & 1) == 0) {
    param_1 = 0x1136d64b0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770986c(0x113720650);
      param_1 = 0x1136d64b0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d64b8 & 1) == 0) {
    param_1 = 0x1136d64b8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770927c(0x113720688);
      param_1 = 0x1136d64b8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d64c0 & 1) == 0) {
    param_1 = 0x1136d64c0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a2c(0x1137206c0);
      param_1 = 0x1136d64c0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d64c8 & 1) == 0) {
    param_1 = 0x1136d64c8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077090d0(0x1137206f8);
      param_1 = 0x1136d64c8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d64d0 & 1) == 0) {
    param_1 = 0x1136d64d0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709738(0x113720730);
      param_1 = 0x1136d64d0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d64d8 & 1) == 0) {
    param_1 = 0x1136d64d8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709728(0x113720768);
      param_1 = 0x1136d64d8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d64e0 & 1) == 0) {
    param_1 = 0x1136d64e0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770a1c0(0x1137207a0);
      param_1 = 0x1136d64e0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d64e8 & 1) == 0) {
    param_1 = 0x1136d64e8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770a0dc(0x1137207d8);
      param_1 = 0x1136d64e8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d64f0 & 1) == 0) {
    param_1 = 0x1136d64f0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077093c4(0x113720810);
      param_1 = 0x1136d64f0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d64f8 & 1) == 0) {
    param_1 = 0x1136d64f8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a1c(0x113720848);
      param_1 = 0x1136d64f8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6500 & 1) == 0) {
    param_1 = 0x1136d6500;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709020(0x113720880);
      param_1 = 0x1136d6500;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6508 & 1) == 0) {
    param_1 = 0x1136d6508;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077093a4(0x1137208b8);
      param_1 = 0x1136d6508;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6510 & 1) == 0) {
    param_1 = 0x1136d6510;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a0c(0x1137208f0);
      param_1 = 0x1136d6510;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6518 & 1) == 0) {
    param_1 = 0x1136d6518;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077099fc(0x113720928);
      param_1 = 0x1136d6518;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6520 & 1) == 0) {
    param_1 = 0x1136d6520;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770a57c(0x113720960);
      param_1 = 0x1136d6520;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6528 & 1) == 0) {
    param_1 = 0x1136d6528;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077099ac(0x113720998);
      param_1 = 0x1136d6528;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6530 & 1) == 0) {
    param_1 = 0x1136d6530;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708f50(0x1137209d0);
      param_1 = 0x1136d6530;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6538 & 1) == 0) {
    param_1 = 0x1136d6538;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708f00(0x113720a08);
      param_1 = 0x1136d6538;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6540 & 1) == 0) {
    param_1 = 0x1136d6540;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709eac(0x113720a40);
      param_1 = 0x1136d6540;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6548 & 1) == 0) {
    param_1 = 0x1136d6548;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709e9c(0x113720a78);
      param_1 = 0x1136d6548;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6550 & 1) == 0) {
    param_1 = 0x1136d6550;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077090e0(0x113720ab0);
      param_1 = 0x1136d6550;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6558 & 1) == 0) {
    param_1 = 0x1136d6558;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077090f0(0x113720ae8);
      param_1 = 0x1136d6558;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6560 & 1) == 0) {
    param_1 = 0x1136d6560;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709060(0x113720b20);
      param_1 = 0x1136d6560;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6568 & 1) == 0) {
    param_1 = 0x1136d6568;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708ef0(0x113720b58);
      param_1 = 0x1136d6568;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6570 & 1) == 0) {
    param_1 = 0x1136d6570;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708ee0(0x113720b90);
      param_1 = 0x1136d6570;
      ___cxa_guard_release();
    }
  }
  func_0x000107707344();
  func_0x000107714af0();
  func_0x00010771cb48();
  func_0x000107707a14();
  func_0x000107708ecc();
  func_0x00010771eb90();
  func_0x000107708d1c();
  func_0x000107709590();
  func_0x000107714830();
  func_0x000107716958();
  func_0x00010770cc98();
  func_0x00010770c1b8();
  func_0x000107714830();
  func_0x00010770fc78();
  func_0x00010770ab58();
  func_0x00010770f980();
  func_0x000107714830();
  func_0x000107714f58();
  func_0x000107714850();
  func_0x000107715f6c();
  uVar4 = param_1;
  if ((bool)in_ZR) {
    func_0x000107715dac();
    func_0x0001077091a0();
    func_0x0001077182fc();
    uVar4 = param_1;
    if (!(bool)in_ZR) goto code_r0x0001076f72f4;
    func_0x000107716fdc();
    uVar4 = param_1;
    func_0x00010771745c();
    unaff_x21 = param_1;
    if ((uVar4 & 1) == 0) {
      func_0x00010771eb84();
      func_0x000107714c8c();
      if ((int)uVar4 != 0) {
        func_0x000107716958();
        goto code_r0x0001076f7410;
      }
      func_0x00010771a57c();
      func_0x000107708d1c();
      func_0x000107709590();
      func_0x000107714830();
      func_0x00010771a570();
      func_0x000107709190();
      func_0x00010770967c();
      func_0x000107714830();
      func_0x000107716958();
      func_0x000107714ebc();
      func_0x00010770c1dc();
      func_0x000107714830();
      func_0x00010770c230();
      func_0x000107715018();
      if ((bool)in_ZR) {
        func_0x000107714bc0();
        func_0x00010771a564();
        func_0x000107715ee4();
        func_0x000107708694();
        func_0x000107714848();
        func_0x000107714898();
        uVar2 = 0;
        if (!(bool)in_ZR) goto code_r0x0001076f73ec;
        func_0x000107714870();
        func_0x000107708600();
        func_0x00010770c430();
        func_0x000107716958();
        func_0x00010770e048();
        func_0x00010770c424();
        func_0x000107714860();
        func_0x000107714848();
        func_0x000107714858();
        func_0x000107714830();
        func_0x000107714838();
        func_0x00010770c260();
        func_0x000107715f90();
        if (!(bool)in_ZR) {
          func_0x0001077081c0();
          goto code_r0x0001076f73c4;
        }
        func_0x000107714cc4();
        func_0x000107715434();
        goto code_r0x0001076f73cc;
      }
      func_0x000107707fe0();
      uVar2 = in_ZR;
      goto code_r0x0001076f73e4;
    }
    func_0x00010771cf54();
code_r0x0001076f7410:
    func_0x000107715434();
code_r0x0001076f7414:
    func_0x00010770fdcc();
    func_0x000107716b94();
    func_0x00010770f89c();
    if ((uVar4 & 1) == 0) {
      func_0x000107709200();
      func_0x00010771eb90();
      func_0x000107709190();
      func_0x0001077093d4();
      func_0x000107714830();
      func_0x000107716958();
      func_0x000107714ebc();
      func_0x00010770c1b8();
      func_0x000107714830();
      func_0x000107710080();
      func_0x000107710170();
      func_0x00010770fa0c();
      func_0x000107714830();
      func_0x000107714ffc();
      func_0x000107714850();
      func_0x000107717edc();
      uVar5 = uVar4;
      if ((bool)in_ZR) {
        func_0x000107716f7c();
        func_0x000107708e90();
        func_0x000107717f90();
        uVar5 = uVar4;
        if (!(bool)in_ZR) goto code_r0x0001076f74b0;
        func_0x000107716d50();
        uVar5 = uVar4;
        func_0x00010771745c();
        unaff_x21 = uVar4;
        if ((uVar5 & 1) == 0) {
          func_0x00010771eb84();
          func_0x000107714c8c();
          if ((int)uVar5 != 0) {
            func_0x000107716958();
            goto code_r0x0001076f760c;
          }
          func_0x00010771a57c();
          func_0x00010770c88c();
          func_0x0001077093d4();
          func_0x000107714830();
          func_0x00010771a570();
          func_0x0001077095e0();
          func_0x000107709580();
          func_0x000107714830();
          func_0x000107716958();
          func_0x00010770d818();
          func_0x00010770c1dc();
          func_0x000107714830();
          func_0x00010770c230();
          func_0x00010771648c();
          if ((bool)in_ZR) {
            func_0x000107715d20();
            func_0x00010771a564();
            func_0x000107715788();
            func_0x000107708414();
            func_0x000107714848();
            func_0x000107714898();
            uVar2 = 0;
            if ((bool)in_ZR) {
              func_0x000107714870();
              func_0x000107708450();
              func_0x00010770c430();
              func_0x000107716958();
              func_0x00010770dda0();
              func_0x00010770c424();
              func_0x000107714860();
              func_0x000107714848();
              func_0x000107714858();
              func_0x000107714830();
              func_0x000107714838();
              func_0x00010770c260();
              func_0x000107715cdc();
              if (!(bool)in_ZR) {
                func_0x000107707fe0();
                goto code_r0x0001076f7584;
              }
              func_0x000107714bc0();
              func_0x0001077154cc();
              goto code_r0x0001076f758c;
            }
            goto code_r0x0001076f75e8;
          }
          func_0x0001077086d0();
          uVar2 = in_ZR;
          goto code_r0x0001076f75e0;
        }
        func_0x00010771cf54();
code_r0x0001076f760c:
        func_0x0001077154cc();
code_r0x0001076f7610:
        func_0x00010770fc84();
        func_0x000107716a98();
        func_0x00010770f4c4();
        if ((uVar5 & 1) == 0) {
          func_0x000107708d8c();
          func_0x00010771eb90();
          func_0x0001077095e0();
          func_0x000107709030();
          func_0x000107714830();
          func_0x000107716958();
          func_0x00010770d818();
          func_0x00010770c1b8();
          func_0x000107714830();
          func_0x00010770f4d0();
          func_0x00010770b9f4();
          func_0x00010771017c();
          func_0x000107714830();
          func_0x000107714dc4();
          func_0x000107714850();
          func_0x000107717230();
          if ((bool)in_ZR) {
            func_0x000107716474();
            func_0x000107707ee8();
            func_0x000107715018();
            if (!(bool)in_ZR) goto code_r0x0001076f76ac;
            func_0x000107714bc0();
            uVar4 = uVar5;
            func_0x00010771745c();
            iVar3 = (int)uVar4;
            if ((uVar4 & 1) == 0) {
              func_0x00010771eb84();
              func_0x000107714c8c();
              if (iVar3 != 0) {
                func_0x000107716958();
                goto code_r0x0001076f78a8;
              }
              func_0x00010771a57c();
              func_0x000107708fe0();
              func_0x00010770a11c();
              func_0x000107714830();
              func_0x00010771a570();
              func_0x000107709818();
              func_0x000107709c40();
              func_0x000107714830();
              func_0x000107716958();
              func_0x00010770dddc();
              func_0x00010770c1a0();
              func_0x000107714830();
              func_0x00010770ccc8();
              func_0x0001077161e8();
              unaff_x21 = uVar5;
              if ((bool)in_ZR) {
                func_0x000107715858();
                func_0x00010771a564();
                func_0x000107714d44();
                func_0x000107707f84();
                func_0x000107714838();
                func_0x000107714898();
                uVar2 = 0;
                if ((bool)in_ZR) {
                  func_0x000107714870();
                  func_0x000107707f5c();
                  func_0x00010770cf1c();
                  func_0x000107716958();
                  func_0x00010770d228();
                  func_0x00010770cc14();
                  func_0x000107714848();
                  func_0x000107714838();
                  func_0x000107714858();
                  func_0x000107714830();
                  func_0x000107714890();
                  func_0x00010770c260();
                  func_0x00010771638c();
                  if (!(bool)in_ZR) {
                    func_0x00010770843c();
                    goto code_r0x0001076f7818;
                  }
                  func_0x000107715910();
                  func_0x000107715370();
                  goto code_r0x0001076f7820;
                }
                goto code_r0x0001076f7884;
              }
              func_0x000107708428();
              uVar2 = in_ZR;
              goto code_r0x0001076f787c;
            }
            func_0x00010771cf54();
code_r0x0001076f78a8:
            func_0x000107715370();
code_r0x0001076f78ac:
            func_0x00010771008c();
            func_0x000107716e34();
            func_0x000107710098();
            func_0x000107710da4();
            uVar1 = extraout_w8;
            if ((bool)in_ZR) {
              uVar1 = 0;
            }
            unaff_x21 = (ulong)uVar1;
            func_0x000107714dc4();
            func_0x000107714ffc();
          }
          else {
code_r0x0001076f76ac:
            func_0x00010771a57c();
            func_0x000107708fe0();
            func_0x00010770a11c();
            func_0x000107714830();
            func_0x00010771a570();
            func_0x000107709818();
            func_0x000107709c40();
            func_0x000107714830();
            func_0x000107716958();
            func_0x00010770dddc();
            func_0x00010770c1a0();
            func_0x000107714830();
            func_0x00010770ccc8();
            func_0x0001077161e8();
            if ((bool)in_ZR) {
              func_0x000107715858();
              func_0x00010771a564();
              func_0x000107714d44();
              func_0x000107707f84();
              func_0x000107714838();
              func_0x000107714898();
              uVar2 = 0;
              if (!(bool)in_ZR) goto code_r0x0001076f7884;
              func_0x000107714870();
              func_0x000107707f5c();
              func_0x00010770cf1c();
              func_0x000107716958();
              func_0x00010770d228();
              func_0x00010770cc14();
              func_0x000107714848();
              func_0x000107714838();
              func_0x000107714858();
              func_0x000107714830();
              func_0x000107714890();
              func_0x00010770c260();
              func_0x00010771638c();
              if ((bool)in_ZR) {
                func_0x000107715910();
                func_0x000107715370();
              }
              else {
                func_0x00010770843c();
code_r0x0001076f7818:
                func_0x00010770f4dc();
                func_0x000107715738();
              }
code_r0x0001076f7820:
              func_0x000107714830();
              func_0x000107714850();
              in_ZR = unaff_w20 == 3;
              if ((bool)in_ZR) goto code_r0x0001076f78ac;
            }
            else {
              func_0x000107708428();
              uVar2 = in_ZR;
code_r0x0001076f787c:
              func_0x00010770d148();
              func_0x000107714cac();
code_r0x0001076f7884:
              func_0x000107714830();
              func_0x000107714890();
              func_0x000107714850();
              in_ZR = uVar2;
            }
            func_0x000107715758();
          }
          func_0x00010770c324();
          func_0x00010770d83c();
          func_0x000107714ed0();
        }
        else {
          func_0x000107715ce8();
        }
        func_0x000107715710();
        func_0x000107714bf4();
      }
      else {
code_r0x0001076f74b0:
        func_0x00010771a57c();
        func_0x00010770c88c();
        func_0x0001077093d4();
        func_0x000107714830();
        func_0x00010771a570();
        func_0x0001077095e0();
        func_0x000107709580();
        func_0x000107714830();
        func_0x000107716958();
        func_0x00010770d818();
        func_0x00010770c1dc();
        func_0x000107714830();
        func_0x00010770c230();
        func_0x00010771648c();
        if ((bool)in_ZR) {
          func_0x000107715d20();
          func_0x00010771a564();
          func_0x000107715788();
          func_0x000107708414();
          func_0x000107714848();
          func_0x000107714898();
          uVar2 = 0;
          if (!(bool)in_ZR) goto code_r0x0001076f75e8;
          func_0x000107714870();
          func_0x000107708450();
          func_0x00010770c430();
          func_0x000107716958();
          func_0x00010770dda0();
          func_0x00010770c424();
          func_0x000107714860();
          func_0x000107714848();
          func_0x000107714858();
          func_0x000107714830();
          func_0x000107714838();
          func_0x00010770c260();
          func_0x000107715cdc();
          if ((bool)in_ZR) {
            func_0x000107714bc0();
            func_0x0001077154cc();
          }
          else {
            func_0x000107707fe0();
code_r0x0001076f7584:
            func_0x00010770e7e0();
            func_0x000107714ffc();
          }
code_r0x0001076f758c:
          func_0x000107714830();
          func_0x000107714850();
          in_ZR = unaff_w23 == 3;
          if ((bool)in_ZR) goto code_r0x0001076f7610;
        }
        else {
          func_0x0001077086d0();
          uVar2 = in_ZR;
code_r0x0001076f75e0:
          func_0x00010770ef3c();
          func_0x000107714dc4();
code_r0x0001076f75e8:
          func_0x000107714830();
          func_0x000107714838();
          func_0x000107714850();
          in_ZR = uVar2;
        }
        func_0x000107715758();
      }
      func_0x00010770d210();
      func_0x00010770df2c();
      func_0x0001077158e8();
    }
    else {
      func_0x000107715ce8();
    }
    func_0x000107715274();
    func_0x00010771513c();
    goto code_r0x0001076f78f8;
  }
code_r0x0001076f72f4:
  func_0x00010771a57c();
  func_0x000107708d1c();
  func_0x000107709590();
  func_0x000107714830();
  func_0x00010771a570();
  func_0x000107709190();
  func_0x00010770967c();
  func_0x000107714830();
  func_0x000107716958();
  func_0x000107714ebc();
  func_0x00010770c1dc();
  func_0x000107714830();
  func_0x00010770c230();
  func_0x000107715018();
  if ((bool)in_ZR) {
    func_0x000107714bc0();
    func_0x00010771a564();
    func_0x000107715ee4();
    func_0x000107708694();
    func_0x000107714848();
    func_0x000107714898();
    uVar2 = 0;
    if (!(bool)in_ZR) goto code_r0x0001076f73ec;
    func_0x000107714870();
    func_0x000107708600();
    func_0x00010770c430();
    func_0x000107716958();
    func_0x00010770e048();
    func_0x00010770c424();
    func_0x000107714860();
    func_0x000107714848();
    func_0x000107714858();
    func_0x000107714830();
    func_0x000107714838();
    func_0x00010770c260();
    func_0x000107715f90();
    if ((bool)in_ZR) {
      func_0x000107714cc4();
      func_0x000107715434();
    }
    else {
      func_0x0001077081c0();
code_r0x0001076f73c4:
      func_0x00010770e3ec();
      func_0x000107714f58();
    }
code_r0x0001076f73cc:
    func_0x000107714830();
    func_0x000107714850();
    in_ZR = unaff_w23 == 3;
    if ((bool)in_ZR) goto code_r0x0001076f7414;
  }
  else {
    func_0x000107707fe0();
    uVar2 = in_ZR;
code_r0x0001076f73e4:
    func_0x00010770e7e0();
    func_0x000107714ffc();
code_r0x0001076f73ec:
    func_0x000107714830();
    func_0x000107714838();
    func_0x000107714850();
    in_ZR = uVar2;
  }
  func_0x000107715758();
code_r0x0001076f78f8:
  func_0x00010770d3b0();
  func_0x000107710050();
  func_0x000107715294();
  if ((unaff_x21 & 1) == 0) {
    func_0x00010770883c();
    func_0x000107714830();
  }
  func_0x000107707b78();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010770c358();
  func_0x000107714858();
  func_0x000107714830();
  func_0x000107715380();
  func_0x00010726af18();
  func_0x00010770edc0();
  func_0x00010770c324();
  func_0x00010770d83c();
  func_0x000107714ed0();
  func_0x000107715710();
  func_0x000107714bf4();
  func_0x00010770d210();
  func_0x00010770df2c();
  func_0x0001077158e8();
  func_0x000107715274();
  func_0x00010771513c();
  func_0x00010770d3b0();
  func_0x00010770ddb8();
  func_0x000107715294();
  do {
    func_0x000107714988();
  } while( true );
}



/* Entry: 1076fb5d4; end: 1076fb60f;  */

/* WARNING: Possible PIC construction at 0x0001076fb964: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001076fba58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001076fb968) */
/* WARNING: Removing unreachable block (ram,0x0001076fb970) */
/* WARNING: Removing unreachable block (ram,0x0001076fba00) */
/* WARNING: Removing unreachable block (ram,0x0001076fb990) */
/* WARNING: Removing unreachable block (ram,0x0001076fba10) */
/* WARNING: Removing unreachable block (ram,0x0001076fb99c) */
/* WARNING: Removing unreachable block (ram,0x0001076fb9a4) */
/* WARNING: Removing unreachable block (ram,0x0001076fb9b4) */
/* WARNING: Removing unreachable block (ram,0x0001076fb9c4) */
/* WARNING: Removing unreachable block (ram,0x0001076fb9e4) */
/* WARNING: Removing unreachable block (ram,0x0001076fba20) */
/* WARNING: Removing unreachable block (ram,0x0001076fba24) */
/* WARNING: Removing unreachable block (ram,0x0001076fba28) */
/* WARNING: Removing unreachable block (ram,0x0001076fba34) */
/* WARNING: Removing unreachable block (ram,0x0001076fba4c) */
/* WARNING: Removing unreachable block (ram,0x0001076fba54) */
/* WARNING: Removing unreachable block (ram,0x0001076fba5c) */
/* WARNING: Removing unreachable block (ram,0x0001076fba64) */
/* WARNING: Removing unreachable block (ram,0x0001076fba74) */
/* WARNING: Removing unreachable block (ram,0x0001076fbaf8) */
/* WARNING: Removing unreachable block (ram,0x0001076fba84) */
/* WARNING: Removing unreachable block (ram,0x0001076fbb08) */
/* WARNING: Removing unreachable block (ram,0x0001076fba90) */
/* WARNING: Removing unreachable block (ram,0x0001076fba98) */
/* WARNING: Removing unreachable block (ram,0x0001076fbaa8) */
/* WARNING: Removing unreachable block (ram,0x0001076fbab8) */
/* WARNING: Removing unreachable block (ram,0x0001076fbadc) */
/* WARNING: Removing unreachable block (ram,0x0001076fbb18) */
/* WARNING: Removing unreachable block (ram,0x0001076fbb1c) */
/* WARNING: Removing unreachable block (ram,0x0001076fbb20) */
/* WARNING: Removing unreachable block (ram,0x0001076fbb2c) */
/* WARNING: Removing unreachable block (ram,0x0001076fbb3c) */
/* WARNING: Removing unreachable block (ram,0x0001076fbb4c) */
/* WARNING: Removing unreachable block (ram,0x0001076fbb54) */
/* WARNING: Removing unreachable block (ram,0x0001076fbb64) */
/* WARNING: Removing unreachable block (ram,0x0001076fbb74) */
/* WARNING: Removing unreachable block (ram,0x0001076fbb7c) */
/* WARNING: Removing unreachable block (ram,0x0001076fbb8c) */
/* WARNING: Removing unreachable block (ram,0x0001076fbb9c) */
/* WARNING: Removing unreachable block (ram,0x0001076fbbb0) */
/* WARNING: Removing unreachable block (ram,0x0001076fbbbc) */
/* WARNING: Removing unreachable block (ram,0x0001076fbbd8) */
/* WARNING: Removing unreachable block (ram,0x0001076fbbc4) */
/* WARNING: Removing unreachable block (ram,0x0001076fbbdc) */
/* WARNING: Removing unreachable block (ram,0x0001076fbbe8) */
/* WARNING: Removing unreachable block (ram,0x0001076fbbf8) */
/* WARNING: Removing unreachable block (ram,0x0001076fbc00) */
/* WARNING: Removing unreachable block (ram,0x0001076fbc20) */
/* WARNING: Removing unreachable block (ram,0x0001076fbc34) */
/* WARNING: Removing unreachable block (ram,0x0001076fbc44) */
/* WARNING: Removing unreachable block (ram,0x0001076fbc54) */
/* WARNING: Removing unreachable block (ram,0x0001076fbc5c) */
/* WARNING: Removing unreachable block (ram,0x0001076fbc64) */
/* WARNING: Removing unreachable block (ram,0x0001076fbc74) */
/* WARNING: Removing unreachable block (ram,0x0001076fbc84) */
/* WARNING: Removing unreachable block (ram,0x0001076fbc8c) */
/* WARNING: Removing unreachable block (ram,0x0001076fbc9c) */
/* WARNING: Removing unreachable block (ram,0x0001076fbcac) */
/* WARNING: Removing unreachable block (ram,0x0001076fbcc0) */
/* WARNING: Removing unreachable block (ram,0x0001076fbccc) */
/* WARNING: Removing unreachable block (ram,0x0001076fbce8) */
/* WARNING: Removing unreachable block (ram,0x0001076fbcd4) */
/* WARNING: Removing unreachable block (ram,0x0001076fbcec) */
/* WARNING: Removing unreachable block (ram,0x0001076fbcf8) */
/* WARNING: Removing unreachable block (ram,0x0001076fbd08) */
/* WARNING: Removing unreachable block (ram,0x0001076fbd30) */
/* WARNING: Removing unreachable block (ram,0x0001076fbd3c) */
/* WARNING: Removing unreachable block (ram,0x0001076fbd58) */
/* WARNING: Removing unreachable block (ram,0x0001076fbd44) */
/* WARNING: Removing unreachable block (ram,0x0001076fbd5c) */
/* WARNING: Removing unreachable block (ram,0x0001076fbd60) */
/* WARNING: Removing unreachable block (ram,0x0001076fc658) */
/* WARNING: Removing unreachable block (ram,0x0001076fc988) */
/* WARNING: Removing unreachable block (ram,0x0001076fcad8) */
/* WARNING: Removing unreachable block (ram,0x0001076fbd88) */

void FUN_1076fb5d4(ulong param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  ulong uVar3;
  uint extraout_w8;
  ulong unaff_x21;
  int unaff_w23;
  
  func_0x000107707ccc();
  func_0x00010770d848();
  func_0x00010770c2b4();
  func_0x000107714890();
  func_0x000107707bf0();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010771cb48();
  func_0x0001077073b8();
  if ((bRam00000001136d6708 & 1) == 0) {
    param_1 = 0x1136d6708;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708e10(0x1137216b8);
      param_1 = 0x1136d6708;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6710 & 1) == 0) {
    param_1 = 0x1136d6710;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708bb0(0x1137216f0);
      param_1 = 0x1136d6710;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6718 & 1) == 0) {
    param_1 = 0x1136d6718;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708de0(0x113721728);
      param_1 = 0x1136d6718;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6720 & 1) == 0) {
    param_1 = 0x1136d6720;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708dc0(0x113721760);
      param_1 = 0x1136d6720;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6728 & 1) == 0) {
    param_1 = 0x1136d6728;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708dd0(0x113721798);
      param_1 = 0x1136d6728;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6730 & 1) == 0) {
    param_1 = 0x1136d6730;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708e00(0x1137217d0);
      param_1 = 0x1136d6730;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6738 & 1) == 0) {
    param_1 = 0x1136d6738;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708df0(0x113721808);
      param_1 = 0x1136d6738;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6740 & 1) == 0) {
    param_1 = 0x1136d6740;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708db0(0x113721840);
      param_1 = 0x1136d6740;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6748 & 1) == 0) {
    param_1 = 0x1136d6748;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077092ac(0x113721878);
      param_1 = 0x1136d6748;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6750 & 1) == 0) {
    param_1 = 0x1136d6750;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770a1b0(0x1137218b0);
      param_1 = 0x1136d6750;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6758 & 1) == 0) {
    param_1 = 0x1136d6758;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a9c(0x1137218e8);
      param_1 = 0x1136d6758;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6760 & 1) == 0) {
    param_1 = 0x1136d6760;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708f70(0x113721920);
      param_1 = 0x1136d6760;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6768 & 1) == 0) {
    param_1 = 0x1136d6768;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708fd0(0x113721958);
      param_1 = 0x1136d6768;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6770 & 1) == 0) {
    param_1 = 0x1136d6770;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a8c(0x113721990);
      param_1 = 0x1136d6770;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6778 & 1) == 0) {
    param_1 = 0x1136d6778;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a7c(0x1137219c8);
      param_1 = 0x1136d6778;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6780 & 1) == 0) {
    param_1 = 0x1136d6780;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a6c(0x113721a00);
      param_1 = 0x1136d6780;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6788 & 1) == 0) {
    param_1 = 0x1136d6788;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a5c(0x113721a38);
      param_1 = 0x1136d6788;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6790 & 1) == 0) {
    param_1 = 0x1136d6790;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770995c(0x113721a70);
      param_1 = 0x1136d6790;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6798 & 1) == 0) {
    param_1 = 0x1136d6798;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770a4ac(0x113721aa8);
      param_1 = 0x1136d6798;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d67a0 & 1) == 0) {
    param_1 = 0x1136d67a0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709570(0x113721ae0);
      param_1 = 0x1136d67a0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d67a8 & 1) == 0) {
    param_1 = 0x1136d67a8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077094a0(0x113721b18);
      param_1 = 0x1136d67a8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d67b0 & 1) == 0) {
    param_1 = 0x1136d67b0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a4c(0x113721b50);
      param_1 = 0x1136d67b0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d67b8 & 1) == 0) {
    param_1 = 0x1136d67b8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770a49c(0x113721b88);
      param_1 = 0x1136d67b8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d67c0 & 1) == 0) {
    param_1 = 0x1136d67c0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709394(0x113721bc0);
      param_1 = 0x1136d67c0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d67c8 & 1) == 0) {
    param_1 = 0x1136d67c8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a3c(0x113721bf8);
      param_1 = 0x1136d67c8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d67d0 & 1) == 0) {
    param_1 = 0x1136d67d0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770986c(0x113721c30);
      param_1 = 0x1136d67d0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d67d8 & 1) == 0) {
    param_1 = 0x1136d67d8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770927c(0x113721c68);
      param_1 = 0x1136d67d8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d67e0 & 1) == 0) {
    param_1 = 0x1136d67e0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a2c(0x113721ca0);
      param_1 = 0x1136d67e0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d67e8 & 1) == 0) {
    param_1 = 0x1136d67e8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077090d0(0x113721cd8);
      param_1 = 0x1136d67e8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d67f0 & 1) == 0) {
    param_1 = 0x1136d67f0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709738(0x113721d10);
      param_1 = 0x1136d67f0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d67f8 & 1) == 0) {
    param_1 = 0x1136d67f8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709728(0x113721d48);
      param_1 = 0x1136d67f8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6800 & 1) == 0) {
    param_1 = 0x1136d6800;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770a1c0(0x113721d80);
      param_1 = 0x1136d6800;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6808 & 1) == 0) {
    param_1 = 0x1136d6808;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770a0dc(0x113721db8);
      param_1 = 0x1136d6808;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6810 & 1) == 0) {
    param_1 = 0x1136d6810;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077093c4(0x113721df0);
      param_1 = 0x1136d6810;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6818 & 1) == 0) {
    param_1 = 0x1136d6818;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a1c(0x113721e28);
      param_1 = 0x1136d6818;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6820 & 1) == 0) {
    param_1 = 0x1136d6820;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709020(0x113721e60);
      param_1 = 0x1136d6820;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6828 & 1) == 0) {
    param_1 = 0x1136d6828;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077093a4(0x113721e98);
      param_1 = 0x1136d6828;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6830 & 1) == 0) {
    param_1 = 0x1136d6830;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709a0c(0x113721ed0);
      param_1 = 0x1136d6830;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6838 & 1) == 0) {
    param_1 = 0x1136d6838;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077099fc(0x113721f08);
      param_1 = 0x1136d6838;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6840 & 1) == 0) {
    param_1 = 0x1136d6840;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770a57c(0x113721f40);
      param_1 = 0x1136d6840;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6848 & 1) == 0) {
    param_1 = 0x1136d6848;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077099ac(0x113721f78);
      param_1 = 0x1136d6848;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6850 & 1) == 0) {
    param_1 = 0x1136d6850;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770a990(0x113721fb0);
      param_1 = 0x1136d6850;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6858 & 1) == 0) {
    param_1 = 0x1136d6858;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708f50(0x113721fe8);
      param_1 = 0x1136d6858;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6860 & 1) == 0) {
    param_1 = 0x1136d6860;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708f00(0x113722020);
      param_1 = 0x1136d6860;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6868 & 1) == 0) {
    param_1 = 0x1136d6868;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709eac(0x113722058);
      param_1 = 0x1136d6868;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6870 & 1) == 0) {
    param_1 = 0x1136d6870;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709e9c(0x113722090);
      param_1 = 0x1136d6870;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6878 & 1) == 0) {
    param_1 = 0x1136d6878;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077090e0(0x1137220c8);
      param_1 = 0x1136d6878;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6880 & 1) == 0) {
    param_1 = 0x1136d6880;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077090f0(0x113722100);
      param_1 = 0x1136d6880;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6888 & 1) == 0) {
    param_1 = 0x1136d6888;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709060(0x113722138);
      param_1 = 0x1136d6888;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6890 & 1) == 0) {
    param_1 = 0x1136d6890;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708ef0(0x113722170);
      param_1 = 0x1136d6890;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6898 & 1) == 0) {
    param_1 = 0x1136d6898;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708ee0(0x1137221a8);
      param_1 = 0x1136d6898;
      ___cxa_guard_release();
    }
  }
  func_0x000107707344();
  func_0x000107714af0();
  func_0x00010771cb48();
  func_0x000107707a14();
  func_0x00010770847c();
  func_0x000107708fe0();
  func_0x000107709030();
  func_0x000107714830();
  func_0x000107718040();
  func_0x00010770debc();
  func_0x00010770c1b8();
  func_0x000107714830();
  func_0x00010770df98();
  func_0x0001077099bc();
  func_0x00010770dec8();
  func_0x000107714830();
  func_0x00010771505c();
  func_0x000107714850();
  func_0x000107715a10();
  uVar3 = param_1;
  if ((bool)in_ZR) {
    func_0x000107715970();
    func_0x000107707ee8();
    func_0x000107715018();
    uVar3 = param_1;
    if (!(bool)in_ZR) goto code_r0x0001076fcb7c;
    func_0x000107714bc0();
    uVar3 = param_1;
    func_0x00010771d710();
    unaff_x21 = param_1;
    if ((uVar3 & 1) != 0) {
code_r0x0001076fcca0:
      func_0x000107714da8();
code_r0x0001076fcca4:
      func_0x00010770f320();
      func_0x00010771610c();
      func_0x00010770f32c();
      if ((uVar3 & 1) == 0) {
        func_0x00010770aa70();
        func_0x00010770aa80();
        func_0x000107714850();
        func_0x0001077079e0();
        func_0x000107714890();
        func_0x0001077167f8();
        func_0x00010770f728();
        uVar1 = 0;
        if ((bool)in_ZR) {
          uVar1 = extraout_w8;
        }
        unaff_x21 = (ulong)uVar1;
        func_0x000107714830();
      }
      else {
        func_0x000107715ce8();
      }
      func_0x000107714cac();
      func_0x000107714c7c();
      goto code_r0x0001076fcd04;
    }
    func_0x000107714c8c();
    if ((int)uVar3 != 0) {
      func_0x000107718040();
      goto code_r0x0001076fcca0;
    }
    func_0x00010771eb3c();
    func_0x000107709010();
    func_0x000107708ff0();
    func_0x000107714830();
    func_0x00010771eb30();
    func_0x000107708d1c();
    func_0x0001077096bc();
    func_0x000107714830();
    func_0x000107718040();
    func_0x00010770cc98();
    func_0x00010770c1dc();
    func_0x000107714830();
    func_0x00010770c230();
    func_0x0001077152d4();
    if ((bool)in_ZR) {
      func_0x000107714cc4();
      func_0x00010771eb24();
      func_0x000107714d44();
      func_0x000107708134();
      func_0x000107714848();
      func_0x000107714898();
      uVar2 = 0;
      if ((bool)in_ZR) {
        func_0x000107714870();
        func_0x000107708148();
        func_0x00010770c430();
        func_0x000107718040();
        func_0x00010770d6d0();
        func_0x00010770c424();
        func_0x000107714860();
        func_0x000107714848();
        func_0x000107714858();
        func_0x000107714830();
        func_0x000107714838();
        func_0x00010770c260();
        func_0x000107715f3c();
        if (!(bool)in_ZR) {
          func_0x000107707ed4();
          goto code_r0x0001076fcc50;
        }
        func_0x00010771504c();
        func_0x000107714da8();
        goto code_r0x0001076fcc58;
      }
      goto code_r0x0001076fcc78;
    }
    func_0x000107707eac();
    uVar2 = in_ZR;
code_r0x0001076fcc70:
    func_0x00010770d148();
    func_0x000107714cac();
code_r0x0001076fcc78:
    func_0x000107714830();
    func_0x000107714838();
    func_0x000107714850();
    in_ZR = uVar2;
  }
  else {
code_r0x0001076fcb7c:
    func_0x00010771eb3c();
    func_0x000107709010();
    func_0x000107708ff0();
    func_0x000107714830();
    func_0x00010771eb30();
    func_0x000107708d1c();
    func_0x0001077096bc();
    func_0x000107714830();
    func_0x000107718040();
    func_0x00010770cc98();
    func_0x00010770c1dc();
    func_0x000107714830();
    func_0x00010770c230();
    func_0x0001077152d4();
    if (!(bool)in_ZR) {
      func_0x000107707eac();
      uVar2 = in_ZR;
      goto code_r0x0001076fcc70;
    }
    func_0x000107714cc4();
    func_0x00010771eb24();
    func_0x000107714d44();
    func_0x000107708134();
    func_0x000107714848();
    func_0x000107714898();
    uVar2 = 0;
    if (!(bool)in_ZR) goto code_r0x0001076fcc78;
    func_0x000107714870();
    func_0x000107708148();
    func_0x00010770c430();
    func_0x000107718040();
    func_0x00010770d6d0();
    func_0x00010770c424();
    func_0x000107714860();
    func_0x000107714848();
    func_0x000107714858();
    func_0x000107714830();
    func_0x000107714838();
    func_0x00010770c260();
    func_0x000107715f3c();
    if ((bool)in_ZR) {
      func_0x00010771504c();
      func_0x000107714da8();
    }
    else {
      func_0x000107707ed4();
code_r0x0001076fcc50:
      func_0x00010770d44c();
      func_0x000107714c7c();
    }
code_r0x0001076fcc58:
    func_0x000107714830();
    func_0x000107714850();
    in_ZR = unaff_w23 == 3;
    if ((bool)in_ZR) goto code_r0x0001076fcca4;
  }
  func_0x000107715758();
code_r0x0001076fcd04:
  func_0x00010770c324();
  func_0x00010770f338();
  func_0x000107714b48();
  if ((unaff_x21 & 1) == 0) {
    func_0x000107707f1c();
    func_0x000107714830();
  }
  func_0x000107707b78();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010770c284();
  func_0x000107714858();
  func_0x000107714830();
  func_0x0001077151f4();
  func_0x00010726af18();
  func_0x00010770d27c();
  func_0x00010770c324();
  func_0x00010770d640();
  func_0x000107714b48();
  do {
    func_0x000107714988();
  } while( true );
}



/* Entry: 1077060b0; end: 107707343;  */

void FUN_1077060b0(byte *param_1)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  byte *pbVar2;
  uint uVar3;
  ulong unaff_x22;
  int iVar4;
  undefined1 *unaff_x24;
  int unaff_w25;
  ulong unaff_x26;
  double unaff_d8;
  undefined1 auStack_490 [104];
  int iStack_428;
  byte abStack_370 [104];
  int iStack_308;
  undefined4 uStack_1a8;
  undefined1 auStack_1a0 [112];
  byte bStack_130;
  undefined1 auStack_e8 [104];
  undefined4 uStack_80;
  undefined1 *puStack_40;
  
  func_0x000107715308();
  func_0x000107707444();
  if ((bRam00000001136d6cf0 & 1) == 0) {
    param_1 = (byte *)0x1136d6cf0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708e10(0x113723fd8);
      param_1 = (byte *)0x1136d6cf0;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6cf8 & 1) == 0) {
    param_1 = (byte *)0x1136d6cf8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708bb0(0x113724010);
      param_1 = (byte *)0x1136d6cf8;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6d00 & 1) == 0) {
    param_1 = (byte *)0x1136d6d00;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708de0(0x113724048);
      param_1 = (byte *)0x1136d6d00;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6d08 & 1) == 0) {
    param_1 = (byte *)0x1136d6d08;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708dc0(0x113724080);
      param_1 = (byte *)0x1136d6d08;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6d10 & 1) == 0) {
    param_1 = (byte *)0x1136d6d10;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708dd0(0x1137240b8);
      param_1 = (byte *)0x1136d6d10;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6d18 & 1) == 0) {
    param_1 = (byte *)0x1136d6d18;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708e00(0x1137240f0);
      param_1 = (byte *)0x1136d6d18;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6d20 & 1) == 0) {
    param_1 = (byte *)0x1136d6d20;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708df0(0x113724128);
      param_1 = (byte *)0x1136d6d20;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6d28 & 1) == 0) {
    param_1 = (byte *)0x1136d6d28;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107708db0(0x113724160);
      param_1 = (byte *)0x1136d6d28;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6d30 & 1) == 0) {
    param_1 = (byte *)0x1136d6d30;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010771d464();
      func_0x00010771490c();
      func_0x0001077148e0(abStack_370);
      func_0x00010770cfec();
      func_0x0001077115cc();
      func_0x000107714838();
      func_0x000107715720();
      func_0x0001077192b8();
      func_0x000107714980(abStack_370);
      func_0x00010770cfec();
      func_0x0001077115cc();
      func_0x000107714838();
      func_0x000107715720();
      func_0x000107717320();
      func_0x000107714a40(abStack_370);
      func_0x00010770cfec();
      func_0x0001077115cc();
      unaff_x24 = (undefined1 *)0x113725160;
      func_0x000107714838();
      func_0x000107715720();
      func_0x000107719780();
      func_0x0001077126ac();
      func_0x000107718ea8();
      param_1 = (byte *)0x1136d6d30;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6d38 & 1) == 0) {
    param_1 = (byte *)0x1136d6d38;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077098bc(0x113724198);
      param_1 = (byte *)0x1136d6d38;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6d40 & 1) == 0) {
    param_1 = (byte *)0x1136d6d40;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001077095a0(0x1137241d0);
      param_1 = (byte *)0x1136d6d40;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6d48 & 1) == 0) {
    param_1 = (byte *)0x1136d6d48;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709658(0x113724208);
      param_1 = (byte *)0x1136d6d48;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6d50 & 1) == 0) {
    param_1 = (byte *)0x1136d6d50;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770a12c(0x113724240);
      param_1 = (byte *)0x1136d6d50;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6d58 & 1) == 0) {
    param_1 = (byte *)0x1136d6d58;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770b2e8(0x113724278);
      param_1 = (byte *)0x1136d6d58;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6d60 & 1) == 0) {
    param_1 = (byte *)0x1136d6d60;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770984c(0x1137242b0);
      param_1 = (byte *)0x1136d6d60;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6d68 & 1) == 0) {
    param_1 = (byte *)0x1136d6d68;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x000107709adc(0x1137242e8);
      param_1 = (byte *)0x1136d6d68;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6d70 & 1) == 0) {
    param_1 = (byte *)0x1136d6d70;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770b3d4(0x113724320);
      param_1 = (byte *)0x1136d6d70;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6d78 & 1) == 0) {
    param_1 = (byte *)0x1136d6d78;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770b62c(0x113724358);
      param_1 = (byte *)0x1136d6d78;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6d80 & 1) == 0) {
    param_1 = (byte *)0x1136d6d80;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770ab28(0x113724390);
      param_1 = (byte *)0x1136d6d80;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6d88 & 1) == 0) {
    param_1 = (byte *)0x1136d6d88;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770f558(0x1137243c8);
      param_1 = (byte *)0x1136d6d88;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6d90 & 1) == 0) {
    param_1 = (byte *)0x1136d6d90;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770f548(0x113724400);
      param_1 = (byte *)0x1136d6d90;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6d98 & 1) == 0) {
    param_1 = (byte *)0x1136d6d98;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770d9d4(0x113724438);
      param_1 = (byte *)0x1136d6d98;
      ___cxa_guard_release();
    }
  }
  if ((bRam00000001136d6da0 & 1) == 0) {
    param_1 = (byte *)0x1136d6da0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x00010770d00c(0x113724470);
      param_1 = (byte *)0x1136d6da0;
      ___cxa_guard_release();
    }
  }
  uStack_80 = 0;
  func_0x00010770fd64();
  iStack_308 = 0;
  func_0x00010770a4cc();
  func_0x00010770c2e4();
  func_0x000107714848();
  if (iStack_308 == 0) {
    func_0x00010771b148();
    func_0x00010770d228();
    func_0x00010770c2e4();
    func_0x000107714848();
  }
  func_0x000107719e04();
  func_0x000107715150();
  func_0x000107717e1c();
  func_0x00010771978c();
  func_0x000107714848();
  func_0x000107714bc8();
  func_0x000107714838();
  func_0x00010771cedc();
  if ((bool)in_ZR) {
    func_0x00010771ab30();
    func_0x00010770c29c(param_1);
    func_0x00010771ced0();
    pbVar2 = param_1;
    if (!(bool)in_ZR) goto LAB_1077062e0;
    func_0x000107716a68();
    pbVar2 = param_1;
    func_0x000104c32db4();
    if (((ulong)pbVar2 & 1) == 0) {
      func_0x000107714bfc();
      if ((int)pbVar2 != 0) {
        func_0x00010771b148();
        goto LAB_10770641c;
      }
      iStack_308 = 0;
      func_0x00010770a4cc();
      func_0x00010770c2e4();
      func_0x000107714848();
      if (iStack_308 == 0) {
        iStack_428 = 0;
        func_0x00010770a58c();
        func_0x00010770c3e8();
        func_0x000107714848();
        if (iStack_428 == 0) {
          func_0x00010771b148();
          func_0x000107714c44();
          func_0x00010770c3e8();
          func_0x000107714848();
        }
        func_0x00010770c4dc();
        func_0x000107715f78();
        if ((bool)in_ZR) {
          func_0x00010771551c();
          func_0x00010771975c();
          func_0x00010770e1bc();
          func_0x000107714888();
          func_0x000107714898();
          if ((bool)in_ZR) {
            func_0x000107714870();
            unaff_x26 = 0;
            func_0x00010770c43c(pbVar2);
            func_0x00010770d258();
            if (iStack_308 == 0) {
              func_0x00010771b148();
              func_0x0001077135f8();
              func_0x00010770d264();
              func_0x0001077148e8();
            }
            func_0x000107714888();
            func_0x000107714858();
            func_0x000107714848();
            func_0x000107714860();
            unaff_w25 = (int)auStack_490;
            goto LAB_1077064d0;
          }
          goto LAB_1077063f4;
        }
        func_0x00010770e498();
        goto LAB_1077063ec;
      }
LAB_1077064d0:
      func_0x00010770c454();
      func_0x00010771b5b0();
      if (!(bool)in_ZR) {
        func_0x00010770e54c();
        goto LAB_1077063cc;
      }
      func_0x000107718ea0();
      func_0x000107716f5c();
      goto LAB_1077063d4;
    }
LAB_10770641c:
    func_0x000107716f5c();
LAB_107706420:
    iVar4 = (int)param_1;
    func_0x000107719750();
    func_0x000107717c64();
    func_0x0001077178c8();
    func_0x000107718668();
    if ((bool)in_ZR) {
      func_0x00010771def8();
      func_0x00010756e584();
      if ((*pbVar2 & 1) == 0) {
        iVar4 = 0x13724198;
        func_0x0001077145e8();
        func_0x00010770bf88();
        func_0x0001077145f4();
        if (((ulong)pbVar2 & 1) == 0) {
LAB_10770667c:
          func_0x00010770c23c();
          func_0x00010770d5e8();
LAB_107706684:
          unaff_x24 = (undefined1 *)0x0;
        }
        else {
          func_0x000107711a6c();
          func_0x000107717f54();
          if ((bool)in_ZR) {
            func_0x000107716da4();
            func_0x000107715344();
            uVar3 = 0;
            if ((bool)in_ZR) {
              uVar3 = 0x10;
            }
            unaff_x24 = (undefined1 *)(ulong)uVar3;
          }
          else {
            func_0x00010770b7ec();
            func_0x00010770de00();
            func_0x00010771519c();
            func_0x00010771552c();
          }
          func_0x00010770ce38();
          func_0x00010770c23c();
          func_0x00010770d5e8();
          uVar1 = ((ulong)unaff_x24 & 0xf) == 0;
          if ((bool)uVar1) {
            if ((unaff_x26 & 1) != 0) {
              func_0x000107711a6c();
              func_0x000107717f54();
              if ((bool)uVar1) {
                func_0x000107716da4();
                if ((*pbVar2 & 1) != 0) {
                  func_0x00010770dfb0();
                  func_0x000107719278();
                  func_0x00010770d8b0();
                  if (((ulong)unaff_x24 & 1) == 0) {
                    func_0x000107718f74();
                    func_0x00010770f0f4();
                    func_0x00010770d21c();
                    func_0x000107714848();
                    func_0x000107714898();
                    if ((bool)uVar1) {
                      func_0x000107714870();
                      func_0x000107715150();
                      func_0x00010751da6c();
                      func_0x000107714858();
                      func_0x0001077150a4();
                      puStack_40 = unaff_x24;
                      func_0x000107707508();
                      func_0x000107714bc8();
                      func_0x000107714898();
                      if (!(bool)uVar1) goto LAB_107706af0;
                      func_0x000107714870();
                      func_0x0001077087c8();
                      func_0x0001077154dc();
                      func_0x000107717308();
                      uVar3 = 0xe;
                      if ((bool)uVar1) {
                        uVar3 = 0;
                      }
                      unaff_x24 = (undefined1 *)(ulong)uVar3;
                      func_0x000107714888();
                      func_0x000107714858();
                    }
                    else {
LAB_107706af0:
                      func_0x000107715508();
                    }
                    func_0x000107715e18();
                    goto LAB_107706630;
                  }
                }
                unaff_x22 = 0;
                unaff_x24 = (undefined1 *)0xe;
              }
              else {
                func_0x00010770ee20();
                func_0x000107716080();
                func_0x00010770cf5c();
                func_0x000107714fdc();
                func_0x000107715508();
              }
LAB_107706630:
              func_0x00010770ce38();
              goto LAB_107706634;
            }
            goto LAB_107706684;
          }
          unaff_x22 = 1;
LAB_107706634:
          uVar1 = (int)unaff_x24 == 0xe;
          if (((bool)uVar1) || ((int)unaff_x24 == 0)) {
            if ((unaff_x22 & 1) != 0) {
              func_0x0001077145e8();
              func_0x00010770bf88();
              func_0x0001077145f4();
              if (((ulong)pbVar2 & 1) == 0) goto LAB_10770667c;
              func_0x000107711a6c();
              func_0x000107717f54();
              if ((bool)uVar1) {
                func_0x000107716da4();
                func_0x0001077153ec();
                uVar3 = 0;
                if ((bool)uVar1) {
                  uVar3 = 0x14;
                }
                unaff_x24 = (undefined1 *)(ulong)uVar3;
              }
              else {
                func_0x00010770b7ec();
                func_0x00010770de00();
                func_0x00010771519c();
                func_0x000107716450();
              }
              func_0x00010770ce38();
              func_0x00010770c23c();
              func_0x00010770d5e8();
              if (((int)unaff_x24 != 0x14) && ((int)unaff_x24 != 0)) goto LAB_107706a64;
              if ((unaff_x22 & 1) != 0) {
                func_0x00010770dfb0();
                func_0x000107715ff8();
                func_0x000107579140();
                func_0x00010770c8b0();
                func_0x0001077189f0();
                unaff_x24 = (undefined1 *)0x0;
                goto LAB_10770668c;
              }
            }
            goto LAB_107706684;
          }
LAB_107706a64:
          if (((int)unaff_x24 == 0xc) || ((int)unaff_x24 == 0)) goto LAB_107706450;
        }
        iVar4 = 0;
      }
      else {
LAB_107706450:
        iVar4 = 1;
        unaff_x24 = (undefined1 *)0x0;
      }
    }
    else {
      func_0x00010770c1d0(abStack_370);
      func_0x00010771574c();
    }
LAB_10770668c:
    func_0x000107713b7c();
    func_0x000107714860();
    func_0x00010770f41c();
  }
  else {
    uStack_1a8 = 0;
    pbVar2 = param_1;
LAB_1077062e0:
    iStack_308 = 0;
    func_0x00010770a4cc();
    func_0x00010770c2e4();
    func_0x000107714848();
    if (iStack_308 == 0) {
      iStack_428 = 0;
      func_0x00010770a58c();
      func_0x00010770c3e8();
      func_0x000107714848();
      if (iStack_428 == 0) {
        func_0x00010771b148();
        func_0x000107714c44();
        func_0x00010770c3e8();
        func_0x000107714848();
      }
      func_0x00010770c4dc();
      func_0x000107715f78();
      if ((bool)in_ZR) {
        func_0x00010771551c();
        func_0x00010771975c();
        func_0x00010770e1bc();
        func_0x000107714888();
        func_0x000107714898();
        if ((bool)in_ZR) {
          func_0x000107714870();
          unaff_x26 = 0;
          func_0x00010770c43c(pbVar2);
          func_0x00010770d258();
          if (iStack_308 == 0) {
            func_0x00010771b148();
            func_0x0001077135f8();
            func_0x00010770d264();
            func_0x0001077148e8();
          }
          func_0x000107714888();
          func_0x000107714858();
          func_0x000107714848();
          func_0x000107714860();
          unaff_w25 = (int)auStack_490;
          goto LAB_107706304;
        }
      }
      else {
        func_0x00010770e498();
LAB_1077063ec:
        func_0x00010771024c();
        func_0x000107715d8c();
      }
LAB_1077063f4:
      func_0x000107714848();
      func_0x000107714860();
      func_0x000107714838();
    }
    else {
LAB_107706304:
      func_0x00010770c454();
      func_0x00010771b5b0();
      if ((bool)in_ZR) {
        func_0x000107718ea0();
        func_0x000107716f5c();
      }
      else {
        func_0x00010770e54c();
LAB_1077063cc:
        func_0x00010770dd34();
        func_0x000107714bc8();
      }
LAB_1077063d4:
      param_1 = abStack_370;
      func_0x000107714848();
      func_0x000107714838();
      unaff_x24 = auStack_490;
      if (unaff_w25 == 3) {
        in_ZR = 1;
        unaff_x24 = auStack_490;
        goto LAB_107706420;
      }
    }
    iVar4 = (int)abStack_370;
    func_0x00010771574c();
  }
  func_0x00010770eda8();
  func_0x0001077103f4();
  func_0x0001077173b8();
  uVar1 = ((ulong)unaff_x24 & 0xfffffffd) == 0;
  if (!(bool)uVar1) goto LAB_107706864;
  if (iVar4 == 0) {
    func_0x0001077127d4();
    func_0x00010770e168();
    func_0x000107715450();
    if (!(bool)uVar1) {
      func_0x000107709d18();
      goto LAB_10770684c;
    }
    func_0x00010771509c();
    if ((*pbVar2 & 1) == 0) {
      func_0x00010770c23c();
LAB_1077067e4:
      func_0x00010770e168();
      func_0x000107715450();
      if (!(bool)uVar1) {
        func_0x000107709d18();
        goto LAB_10770684c;
      }
      func_0x00010771509c();
      if ((*pbVar2 & 1) == 0) {
        func_0x00010770c23c();
        iVar4 = (int)pbVar2;
      }
      else {
        func_0x00010771e9c8();
        iVar4 = (int)pbVar2;
        func_0x00010770f8f0();
        func_0x00010770bb20();
        func_0x000107714830();
        func_0x000107714898();
        if (!(bool)uVar1) goto LAB_107706854;
        func_0x000107714870();
        func_0x00010757fc08();
        func_0x00010770cb8c();
        func_0x00010770c23c();
        uVar1 = unaff_d8 == 0.0;
        if (0.0 < unaff_d8) {
          func_0x00010771e9c8();
          func_0x000107709aac();
          goto LAB_107706950;
        }
      }
      func_0x00010770fa00();
    }
    else {
      func_0x00010771e9d4();
      func_0x00010770f8f0();
      func_0x00010770bb20();
      func_0x000107714830();
      func_0x000107714898();
      if (!(bool)uVar1) goto LAB_107706854;
      func_0x000107714870();
      func_0x00010757fc08();
      func_0x00010770cb8c();
      func_0x00010770c23c();
      uVar1 = unaff_d8 == 0.0;
      if (unaff_d8 <= 0.0) goto LAB_1077067e4;
      func_0x00010771e9d4();
      iVar4 = (int)pbVar2;
      func_0x000107709aac();
    }
LAB_107706950:
    func_0x00010770cbf0(auStack_490);
    func_0x000107714830();
    func_0x000107713d58();
    func_0x00010771527c();
    func_0x0001077132c0();
    func_0x000107711070();
    func_0x00010770892c();
    func_0x00010770c448();
    func_0x000107714848();
    func_0x000107714838();
    func_0x000107715684();
    func_0x0001077178d8();
    if (iVar4 != 0) {
      if ((bStack_130 & 1) == 0) {
        func_0x0001077103e8();
      }
      uStack_1a8 = 0;
      func_0x00010770c2cc();
      func_0x000107714838();
    }
    if (iStack_308 == 0) {
      func_0x000107712cb0();
      func_0x00010770892c();
      func_0x00010770c448();
      func_0x000107714848();
      func_0x000107714838();
      func_0x0001077178d8();
      if (iVar4 != 0) {
        if ((bStack_130 & 1) == 0) {
          func_0x0001077103e8();
        }
        func_0x00010770cd10(auStack_1a0);
      }
    }
    func_0x000107716088();
    func_0x00010770d5e8();
    func_0x00010770ccb0(auStack_e8);
  }
  else {
    func_0x0001077127d4();
    func_0x00010770e168();
    func_0x000107715450();
    if (!(bool)uVar1) {
      func_0x000107709d18();
LAB_10770684c:
      func_0x000107711410();
      func_0x000107715514();
LAB_107706854:
      func_0x00010770c23c();
      func_0x00010770d5e8();
      func_0x0001077186cc();
      func_0x00010770cd5c();
      goto LAB_107706864;
    }
    func_0x00010771509c();
    if ((*pbVar2 & 1) == 0) {
      func_0x00010770c23c();
LAB_107706784:
      func_0x00010770e168();
      func_0x000107715450();
      if (!(bool)uVar1) {
        func_0x000107709d18();
        goto LAB_10770684c;
      }
      func_0x00010771509c();
      if ((*pbVar2 & 1) == 0) {
        func_0x00010770c23c();
        iVar4 = (int)pbVar2;
      }
      else {
        func_0x00010771e9c8();
        iVar4 = (int)pbVar2;
        func_0x00010770f8f0();
        func_0x00010770bb20();
        func_0x000107714830();
        func_0x000107714898();
        if (!(bool)uVar1) goto LAB_107706854;
        func_0x000107714870();
        func_0x00010757fc08();
        func_0x00010770cb8c();
        func_0x00010770c23c();
        uVar1 = unaff_d8 == 0.0;
        if (0.0 < unaff_d8) {
          func_0x00010771e9c8();
          func_0x000107709aac();
          goto LAB_10770688c;
        }
      }
      func_0x00010770fa00();
    }
    else {
      func_0x00010771e9d4();
      func_0x00010770f8f0();
      func_0x00010770bb20();
      func_0x000107714830();
      func_0x000107714898();
      if (!(bool)uVar1) goto LAB_107706854;
      func_0x000107714870();
      func_0x00010757fc08();
      func_0x00010770cb8c();
      func_0x00010770c23c();
      uVar1 = unaff_d8 == 0.0;
      if (unaff_d8 <= 0.0) goto LAB_107706784;
      func_0x00010771e9d4();
      iVar4 = (int)pbVar2;
      func_0x000107709aac();
    }
LAB_10770688c:
    func_0x00010770cbf0(auStack_490);
    func_0x000107714830();
    func_0x000107713d58();
    func_0x00010771527c();
    func_0x0001077132c0();
    func_0x000107711070();
    func_0x00010770892c();
    func_0x00010770c448();
    func_0x000107714848();
    func_0x000107714838();
    func_0x000107715684();
    func_0x0001077178d8();
    if (iVar4 != 0) {
      if ((bStack_130 & 1) == 0) {
        func_0x0001077103e8();
      }
      uStack_1a8 = 0;
      func_0x00010770c2cc();
      func_0x000107714838();
    }
    if (iStack_308 == 0) {
      func_0x000107712cb0();
      func_0x00010770892c();
      func_0x00010770c448();
      func_0x000107714848();
      func_0x000107714838();
      func_0x0001077178d8();
      if (iVar4 != 0) {
        if ((bStack_130 & 1) == 0) {
          func_0x0001077103e8();
        }
        func_0x00010770cd10(auStack_1a0);
      }
    }
    func_0x000107716088();
    func_0x00010770d5e8();
    func_0x00010770ccb0(auStack_e8);
  }
  func_0x0001077186cc();
  func_0x000107714830();
  func_0x00010771a364();
LAB_107706864:
  func_0x0001077117dc();
  func_0x000107708038();
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010770c358();
  func_0x000107715720();
  func_0x000107718ea8();
  ___cxa_guard_abort(0x1136d6d30);
  do {
    func_0x000107714988();
    func_0x0001077117dc();
  } while( true );
}



/* Entry: 107720908; end: 107720f4f;  */

void FUN_107720908(long *param_1,uint *param_2,ulong param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ushort uVar3;
  uint uVar4;
  undefined1 uVar5;
  code *pcVar6;
  undefined1 in_ZR;
  int iVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  uint *puVar12;
  undefined *puVar13;
  long lVar14;
  uint uVar15;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  ulong uVar22;
  ulong *puVar23;
  ulong uVar24;
  long *plVar25;
  byte bVar26;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  undefined8 uVar27;
  char cVar34;
  long lStack_f0;
  long *plStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  uint *puStack_b0;
  long **pplStack_98;
  undefined8 uStack_90;
  
  func_0x0001077221a8();
  uVar3 = *(ushort *)((long)param_2 + 0x16);
  uStack_90 = extraout_x8;
  if (uVar3 == 0) {
    uVar22 = param_1[1];
    uVar17 = 0x7a;
LAB_107720978:
    uVar22 = uVar22 ^ uVar17;
  }
  else {
    if ((uVar3 >> 3 & 1) == 0) {
      if ((uVar3 >> 4 & 1) == 0) {
        if ((uVar3 >> 10 & 1) == 0) {
          if (uVar3 == 3) {
            plStack_d0 = (long *)0x0;
            plStack_c8 = (long *)0x0;
            plStack_c0 = (long *)0x0;
            plVar8 = (long *)(ulong)*param_2;
            if (*param_2 != 0) {
              puVar12 = param_2;
              pplStack_98 = &plStack_c0;
              func_0x000107721114();
              plVar21 = (long *)((long)plVar8 - ((long)plStack_c8 - (long)plStack_d0));
              _memcpy(plVar21);
              plStack_b8 = plStack_d0;
              plStack_d0 = plVar21;
              plStack_c8 = plVar8;
              plStack_c0 = plVar8 + (long)puVar12;
              func_0x00010772225c();
            }
            lVar16 = *(long *)(param_2 + 2);
            for (lVar19 = lVar16; lVar19 != lVar16 + (ulong)*param_2 * 0x30; lVar19 = lVar19 + 0x30)
            {
              if (plStack_c8 < plStack_c0) {
                plVar25 = plStack_c8 + 1;
                *plStack_c8 = lVar19;
              }
              else {
                lVar20 = (long)plStack_c8 - (long)plStack_d0;
                lVar16 = lVar20 >> 3;
                uVar22 = lVar16 + 1;
                if (uVar22 >> 0x3d != 0) goto LAB_107720f24;
                uVar17 = (long)plStack_c0 - (long)plStack_d0 >> 2;
                if (uVar17 <= uVar22) {
                  uVar17 = uVar22;
                }
                if (0x7ffffffffffffff7 < (ulong)((long)plStack_c0 - (long)plStack_d0)) {
                  uVar17 = 0x1fffffffffffffff;
                }
                if (uVar17 == 0) {
                  plVar8 = (long *)0x0;
                  lVar14 = lVar20;
                  pplStack_98 = &plStack_c0;
                }
                else {
                  plVar8 = plStack_d0;
                  pplStack_98 = &plStack_c0;
                  func_0x000107721114();
                  lVar16 = (long)plStack_c8 - (long)plStack_d0 >> 3;
                  lVar14 = (long)plStack_c8 - (long)plStack_d0;
                }
                plVar21 = (long *)(uVar17 + lVar20);
                plVar25 = plVar21 + 1;
                *plVar21 = lVar19;
                _memcpy(plVar21 + -lVar16,plStack_d0,lVar14);
                plStack_b8 = plStack_d0;
                plStack_d0 = plVar21 + -lVar16;
                plStack_c8 = plVar25;
                plStack_c0 = (long *)(uVar17 + (long)plVar8 * 8);
                func_0x00010772225c();
              }
              lVar16 = *(long *)(param_2 + 2);
              plStack_c8 = plVar25;
            }
            if (plStack_d0 != plStack_c8) {
              func_0x000107721188(plStack_d0,plStack_c8,
                                  LZCOUNT((long)plStack_c8 - (long)plStack_d0 >> 3) << 1 ^ 0x7e,1);
            }
            plVar8 = plStack_c8;
            plVar21 = plStack_d0;
            func_0x000107722384(param_1[1]);
            param_1[1] = extraout_x8_00;
            do {
              plVar25 = plVar21;
              if (plVar25 == plVar8) {
                func_0x000107722384(param_1[1]);
                param_1[1] = extraout_x8_01;
                break;
              }
              lVar19 = *plVar25;
              func_0x000107721000(lVar19);
              func_0x000107722378();
              func_0x000107722190();
              plVar9 = param_1;
              FUN_107720908(param_1,lVar19 + 0x18,1);
              plVar21 = plVar25 + 1;
            } while (((ulong)plVar9 & 1) != 0);
            func_0x000107721a84(&plStack_d0);
            in_ZR = plVar25 == plVar8;
          }
          else {
            in_ZR = 0;
            if (uVar3 == 4) {
              if ((param_3 & 1) == 0) {
                uVar15 = *param_2;
                if (1 < uVar15) {
                  lVar19 = *(long *)(param_2 + 2);
                  if ((*(ushort *)(lVar19 + 0x16) >> 10 & 1) != 0) {
                    puVar12 = param_2;
                    func_0x000107721000();
                    iVar7 = (int)lVar19;
                    func_0x0001000633dc();
                    if ((iVar7 != 0) &&
                       ((*(ushort *)(*(long *)(param_2 + 2) + 0x2e) >> 10 & 1) != 0)) {
                      plVar8 = (long *)(*(long *)(param_2 + 2) + 0x18);
                      func_0x000107721000();
                      puVar1 = (ulong *)param_1[3];
                      uVar22 = (long)puVar1 - param_1[2];
                      in_ZR = uVar22 == 0x3f0;
                      puVar23 = (ulong *)param_1[2];
                      plStack_b8 = plVar8;
                      puStack_b0 = puVar12;
                      if (uVar22 < 0x3f1) {
LAB_107720cf4:
                        in_ZR = puVar23 == puVar1;
                        if (!(bool)in_ZR) goto code_r0x000107720cfc;
                        lVar19 = *param_1;
                        func_0x0001075511c0(lVar19,plVar8,puVar12);
                        if ((lVar19 != 0) && (lVar16 = *(long *)(lVar19 + 0xa0), lVar16 != 0)) {
                          if (*(long *)(lVar19 + 0x50) == 0) {
                            in_ZR = *param_2 == 2;
                            if (*param_2 < 3) {
                              func_0x0001077222dc();
                              func_0x000107722244(param_1,lVar16);
                              param_1[3] = param_1[3] + -0x10;
                            }
                          }
                          else {
                            param_1[1] = (param_1[1] ^ 0x5bU) * 0x100000001b3;
                            puVar13 = &UNK_10f42485f;
                            func_0x000107720f50(param_1,&UNK_10f42485f,3);
                            in_ZR = *(long *)(lVar19 + 0x50) == 1 && *param_2 == 3;
                            if ((bool)in_ZR) {
                              func_0x000107552d68(lVar19 + 0x38);
                              func_0x000107264c5c(puVar13 + 0x38);
                              func_0x000107722378();
                              func_0x000107722190();
                              plVar8 = param_1;
                              func_0x000107722244(param_1,*(long *)(param_2 + 2) + 0x30);
                              if (((ulong)plVar8 & 1) != 0) goto LAB_107720ef4;
                            }
                            else if ((*param_2 & 1) == 0) {
                              uVar15 = 2;
LAB_107720d90:
                              uVar4 = uVar15 | 1;
                              in_ZR = uVar4 == *param_2;
                              if (uVar4 < *param_2) {
                                uVar22 = *(long *)(param_2 + 2) + (ulong)uVar15 * 0x18;
                                if ((*(ushort *)(uVar22 + 0x16) >> 10 & 1) != 0) {
                                  func_0x000107721000();
                                  Hint_Prefetch(*(undefined8 *)(lVar19 + 0x38),0,2,0);
                                  uVar10 = uVar22;
                                  func_0x0001001030f4(*(undefined8 *)(lVar19 + 0x38));
                                  lVar20 = *(long *)(lVar19 + 0x40);
                                  uVar2 = *(ulong *)(lVar19 + 0x48);
                                  uVar18 = *(ulong *)(lVar19 + 0x38);
                                  uVar17 = uVar18 >> 0xc ^ uVar10 >> 7;
                                  uVar5 = (undefined1)uVar10;
                                  uVar10 = CONCAT17(uVar5,CONCAT16(uVar5,CONCAT15(uVar5,CONCAT14(
                                                  uVar5,CONCAT13(uVar5,CONCAT12(uVar5,CONCAT11(uVar5
                                                  ,uVar5))))))) & 0x7f7f7f7f7f7f7f7f;
                                  lStack_f0 = 0;
                                  while( true ) {
                                    uVar17 = uVar17 & uVar2;
                                    uVar27 = *(undefined8 *)(uVar18 + uVar17);
                                    cVar28 = (char)((ulong)uVar27 >> 8);
                                    cVar29 = (char)((ulong)uVar27 >> 0x10);
                                    cVar30 = (char)((ulong)uVar27 >> 0x18);
                                    cVar31 = (char)((ulong)uVar27 >> 0x20);
                                    cVar32 = (char)((ulong)uVar27 >> 0x28);
                                    cVar33 = (char)((ulong)uVar27 >> 0x30);
                                    cVar34 = (char)((ulong)uVar27 >> 0x38);
                                    for (uVar24 = CONCAT17(-(cVar34 == (char)(uVar10 >> 0x38)),
                                                           CONCAT16(-(cVar33 ==
                                                                     (char)(uVar10 >> 0x30)),
                                                                    CONCAT15(-(cVar32 ==
                                                                              (char)(uVar10 >> 0x28)
                                                                              ),CONCAT14(-(cVar31 ==
                                                                                          (char)(
                                                  uVar10 >> 0x20)),
                                                  CONCAT13(-(cVar30 == (char)(uVar10 >> 0x18)),
                                                           CONCAT12(-(cVar29 ==
                                                                     (char)(uVar10 >> 0x10)),
                                                                    CONCAT11(-(cVar28 ==
                                                                              (char)(uVar10 >> 8)),
                                                                             -((char)uVar27 ==
                                                                              (char)uVar10)))))))) &
                                                  0x8080808080808080; uVar24 != 0;
                                        uVar24 = uVar24 - 1 & uVar24) {
                                      uVar11 = (uVar24 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                                               (uVar24 >> 7 & 0xff00ff00ff00ff) << 8;
                                      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 |
                                               (uVar11 & 0xffff0000ffff) << 0x10;
                                      uVar11 = lVar20 + (uVar17 + ((ulong)LZCOUNT(uVar11 >> 0x20 |
                                                                                  uVar11 << 0x20) >>
                                                                  3) & uVar2) * 0x80;
                                      func_0x000107278530(uVar11,uVar22,puVar13);
                                      if ((uVar11 & 1) != 0) {
                                        func_0x000107720f50(param_1,uVar22,puVar13);
                                        puVar13 = (undefined *)
                                                  (*(long *)(param_2 + 2) + (ulong)uVar4 * 0x18);
                                        plVar8 = param_1;
                                        func_0x000107722244();
                                        uVar15 = uVar15 + 2;
                                        if (((ulong)plVar8 & 1) == 0) goto LAB_1077209ac;
                                        goto LAB_107720d90;
                                      }
                                    }
                                    bVar26 = NEON_umaxv(CONCAT17(-(cVar34 == -0x80),
                                                                 CONCAT16(-(cVar33 == -0x80),
                                                                          CONCAT15(-(cVar32 == -0x80
                                                                                    ),CONCAT14(-(
                                                  cVar31 == -0x80),
                                                  CONCAT13(-(cVar30 == -0x80),
                                                           CONCAT12(-(cVar29 == -0x80),
                                                                    CONCAT11(-(cVar28 == -0x80),
                                                                             -((char)uVar27 == -0x80
                                                                              )))))))),1);
                                    if ((bVar26 & 1) != 0) break;
                                    lStack_f0 = lStack_f0 + 8;
                                    uVar17 = lStack_f0 + uVar17;
                                  }
                                }
                                goto LAB_1077209ac;
                              }
LAB_107720ef4:
                              func_0x0001077222dc();
                              plVar8 = param_1;
                              func_0x000107722244(param_1,lVar16);
                              param_1[3] = param_1[3] + -0x10;
                              if ((int)plVar8 == 0) goto LAB_1077209ac;
                              uVar22 = param_1[1];
                              uVar17 = 0x5d;
                              goto LAB_107720978;
                            }
                          }
                        }
                      }
                      goto LAB_1077209ac;
                    }
                  }
                  uVar15 = *param_2;
                }
                if ((uVar15 == 0) ||
                   (lVar19 = *(long *)(param_2 + 2), (*(ushort *)(lVar19 + 0x16) >> 10 & 1) == 0)) {
                  lVar19 = 0;
                }
                else {
                  func_0x000107721000();
                  func_0x0001000633dc();
                }
              }
              else {
                lVar19 = 1;
              }
              param_1[1] = (param_1[1] ^ 0x5bU) * 0x100000001b3;
              uVar22 = 0xffffffffffffffff;
              lVar16 = 0;
              do {
                uVar22 = uVar22 + 1;
                in_ZR = uVar22 == *param_2;
                if (*param_2 <= uVar22) {
                  func_0x000107722384(param_1[1]);
                  lVar19 = extraout_x8_02;
                  goto LAB_1077209a4;
                }
                plVar8 = param_1;
                FUN_107720908(param_1,*(long *)(param_2 + 2) + lVar16,lVar19);
                lVar16 = lVar16 + 0x18;
              } while (((ulong)plVar8 & 1) != 0);
            }
          }
        }
        else {
          func_0x000107721000(param_2);
          func_0x000107722378();
          func_0x000107722190();
        }
      }
      else {
        func_0x0001073274d0(param_2);
        _snprintf(&plStack_b8,0x12,&UNK_10f424850);
        func_0x0001077208dc(param_1,&plStack_b8,0x11);
      }
      goto LAB_1077209ac;
    }
    in_ZR = uVar3 == 10;
    uVar22 = 0x74;
    if (!(bool)in_ZR) {
      uVar22 = 0x66;
    }
    uVar22 = param_1[1] ^ uVar22;
  }
  lVar19 = uVar22 * 0x100000001b3;
LAB_1077209a4:
  param_1[1] = lVar19;
LAB_1077209ac:
  func_0x00010772216c(uStack_90);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_107720f24:
  func_0x000107721108();
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x107720f2c);
  (*pcVar6)();
code_r0x000107720cfc:
  uVar22 = *puVar23;
  func_0x0001000633dc(uVar22,puVar23[1],plVar8,puVar12);
  puVar23 = puVar23 + 2;
  if ((uVar22 & 1) != 0) goto LAB_1077209ac;
  goto LAB_107720cf4;
}



/* Entry: 107721788; end: 1077218ab;  */

uint FUN_107721788(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  func_0x000107721000();
  func_0x000107721000(param_2);
  func_0x000107722378();
  func_0x00010006725c(param_1,uVar1);
  return (uint)param_1 >> 7 & 1;
}



/* Entry: 107721bf4; end: 107721bff;  */

void FUN_107721bf4(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  func_0x000107722230();
  lVar5 = *param_1;
  lVar2 = param_1[1];
  lVar1 = *(long *)(param_2 + 8) + (lVar5 - lVar2);
  lVar3 = lVar1;
  for (lVar4 = lVar5; lVar4 != lVar2; lVar4 = lVar4 + 0x10) {
    func_0x000107327300(lVar3,lVar4);
    lVar3 = lVar3 + 0x10;
  }
  for (; lVar5 != lVar2; lVar5 = lVar5 + 0x10) {
    func_0x0001072f5f6c(lVar5);
  }
  *(long *)(param_2 + 8) = lVar1;
  lVar4 = *param_1;
  *param_1 = lVar1;
  param_1[1] = lVar4;
  func_0x0001077221b8();
  return;
}



/* Entry: 107721e90; end: 107721ed7;  */

undefined8 * FUN_107721e90(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109d0df0;
  param_1[1] = 0;
  func_0x000107721f00(param_1 + 3);
  return param_1;
}



/* Entry: 107721fc8; end: 107721fef;  */

void FUN_107721fc8(void)

{
  return;
}



/* Entry: 107722418; end: 10772246b;  */

void FUN_107722418(long *param_1,long param_2)

{
  char *pcVar1;
  char *pcStack_30;
  char *pcStack_28;
  
  pcVar1 = *(char **)(param_2 + 8);
  if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
    pcStack_30 = pcVar1;
    _strlen();
    pcStack_28 = pcVar1;
    func_0x00010772246c(param_1,&pcStack_30);
    *param_1 = param_2;
  }
  return;
}



/* Entry: 107722e24; end: 107722e7f;  */

undefined8 * FUN_107722e24(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar5 = param_2[1];
  uVar4 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  param_1[1] = uVar5;
  *param_1 = uVar4;
  func_0x0001072c9b9c(&uStack_30);
  return param_1;
}



/* Entry: 1077232ec; end: 107723367;  */

long FUN_1077232ec(long param_1)

{
  func_0x000107723314(param_1,*(undefined8 *)(param_1 + 0x10));
  func_0x000107723368(param_1,0);
  return param_1;
}



/* Entry: 107723440; end: 10772348b;  */

undefined1 * FUN_107723440(undefined8 param_1,double param_2,double param_3)

{
  undefined1 in_ZR;
  bool bVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  double dVar3;
  undefined1 auStack_90 [96];
  undefined4 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107723a50(param_1);
  uStack_30 = 0;
  uStack_28 = extraout_x8;
  func_0x0001074b0ce4();
  puVar2 = auStack_90;
  func_0x00010726af18(puVar2);
  func_0x000107723a3c(uStack_28);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  if (param_2 != param_3) {
    bVar1 = false;
    if ((NAN(param_2)) && (bVar1 = true, !NAN(param_3))) {
      bVar1 = false;
    }
    if ((!bVar1) && (1e-12 < ABS(param_2 - param_3))) {
      dVar3 = ABS(param_3);
      if (ABS(param_3) <= ABS(param_2)) {
        dVar3 = ABS(param_2);
      }
      return (undefined1 *)(ulong)(ABS(param_2 - param_3) <= dVar3 * 1e-09);
    }
  }
  return (undefined1 *)0x1;
}



/* Entry: 107723a0c; end: 107723a1f;  */

void FUN_107723a0c(void)

{
  func_0x000107723a2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107726b5c; end: 107726c3f;  */

undefined8 FUN_107726b5c(void)

{
  bool bVar1;
  undefined1 in_ZR;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x22;
  long lVar5;
  undefined1 auStack_1500 [64];
  long lStack_14c0;
  undefined1 auStack_1430 [24];
  undefined4 uStack_1418;
  long lStack_13e0;
  undefined1 auStack_1340 [64];
  long lStack_1300;
  undefined1 auStack_7a0 [64];
  undefined1 auStack_6d0 [64];
  
  func_0x000107741ca8();
  if ((bRam0000000113725520 & 1) == 0) {
    iVar2 = 0x13725520;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107742934();
      func_0x00010774292c();
      func_0x000107742048();
      func_0x000107741d3c();
      unaff_x20 = 0x113725518;
      func_0x000107741810();
      func_0x000107741a04();
      func_0x000107742984();
      func_0x000107742944();
      func_0x00010774293c();
      func_0x00010774291c();
      *unaff_x19 = &PTR_DAT_1109d2b68;
      func_0x000107741cd0(&UNK_107734aec);
      func_0x000107742924();
    }
  }
  func_0x0001077419ec();
  if ((bool)in_ZR) {
    uVar3 = 0x113725518;
  }
  else {
    ___stack_chk_fail();
    func_0x000107742144();
    func_0x00010774291c();
    func_0x00010774298c();
    func_0x000107742914();
    ___cxa_guard_abort(0x113725520);
    func_0x00010774297c();
    func_0x000107741ca8();
    if ((bRam0000000113725530 & 1) == 0) {
      iVar2 = 0x13725530;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        func_0x000107742934();
        func_0x00010774292c();
        func_0x000107742048();
        func_0x000107741d3c();
        unaff_x20 = 0x113725528;
        func_0x000107741810();
        func_0x000107741a04();
        func_0x000107742984();
        func_0x000107742944();
        func_0x00010774293c();
        func_0x00010774291c();
        *unaff_x19 = &PTR_FUN_1109d2ba8;
        func_0x000107741cd0(&UNK_107734c8c);
        func_0x000107742924();
      }
    }
    func_0x0001077419ec();
    if ((bool)in_ZR) {
      uVar3 = 0x113725528;
    }
    else {
      ___stack_chk_fail();
      func_0x000107742144();
      func_0x00010774291c();
      func_0x00010774298c();
      func_0x000107742914();
      ___cxa_guard_abort(0x113725530);
      func_0x00010774297c();
      func_0x000107741ca8();
      if ((bRam0000000113725540 & 1) == 0) {
        iVar2 = 0x13725540;
        ___cxa_guard_acquire();
        if (iVar2 != 0) {
          func_0x000107742934();
          func_0x00010774292c();
          func_0x000107742048();
          func_0x000107741d3c();
          unaff_x20 = 0x113725538;
          func_0x000107741810();
          func_0x000107741a04();
          func_0x000107742984();
          func_0x000107742944();
          func_0x00010774293c();
          func_0x00010774291c();
          *unaff_x19 = &PTR_DAT_1109d2be8;
          func_0x000107741cd0(&UNK_107734e2c);
          func_0x000107742924();
        }
      }
      func_0x0001077419ec();
      if ((bool)in_ZR) {
        uVar3 = 0x113725538;
      }
      else {
        ___stack_chk_fail();
        func_0x000107742144();
        func_0x00010774291c();
        func_0x00010774298c();
        func_0x000107742914();
        ___cxa_guard_abort(0x113725540);
        func_0x00010774297c();
        func_0x000107741ca8();
        if ((bRam0000000113725550 & 1) == 0) {
          iVar2 = 0x13725550;
          ___cxa_guard_acquire();
          if (iVar2 != 0) {
            func_0x000107742934();
            func_0x00010774292c();
            func_0x000107742048();
            func_0x000107741d3c();
            unaff_x20 = 0x113725548;
            func_0x000107741810();
            func_0x000107741a04();
            func_0x000107742984();
            func_0x000107742944();
            func_0x00010774293c();
            func_0x00010774291c();
            *unaff_x19 = &PTR_DAT_1109d2c28;
            func_0x000107741cd0(FUN_107734fcc);
            func_0x000107742924();
          }
        }
        func_0x0001077419ec();
        if ((bool)in_ZR) {
          uVar3 = 0x113725548;
        }
        else {
          ___stack_chk_fail();
          func_0x000107742144();
          func_0x00010774291c();
          func_0x00010774298c();
          func_0x000107742914();
          ___cxa_guard_abort(0x113725550);
          func_0x00010774297c();
          func_0x000107741ca8();
          if ((bRam0000000113725560 & 1) == 0) {
            iVar2 = 0x13725560;
            ___cxa_guard_acquire();
            if (iVar2 != 0) {
              func_0x000107742934();
              func_0x00010774292c();
              func_0x000107742048();
              func_0x000107741d3c();
              unaff_x20 = 0x113725558;
              func_0x000107741810();
              func_0x000107741a04();
              func_0x000107742984();
              func_0x000107742944();
              func_0x00010774293c();
              func_0x00010774291c();
              *unaff_x19 = &PTR_DAT_1109d2c68;
              func_0x000107741cd0(&UNK_10773516c);
              func_0x000107742924();
            }
          }
          func_0x0001077419ec();
          if ((bool)in_ZR) {
            uVar3 = 0x113725558;
          }
          else {
            ___stack_chk_fail();
            func_0x000107742144();
            func_0x00010774291c();
            func_0x00010774298c();
            func_0x000107742914();
            ___cxa_guard_abort(0x113725560);
            func_0x00010774297c();
            func_0x000107741ca8();
            if ((bRam0000000113725570 & 1) == 0) {
              iVar2 = 0x13725570;
              ___cxa_guard_acquire();
              if (iVar2 != 0) {
                func_0x000107742934();
                func_0x00010774292c();
                func_0x000107742048();
                func_0x000107741d3c();
                unaff_x20 = 0x113725568;
                func_0x000107741810();
                func_0x000107741a04();
                func_0x000107742984();
                func_0x000107742944();
                func_0x00010774293c();
                func_0x00010774291c();
                *unaff_x19 = &PTR_DAT_1109d2ca8;
                func_0x000107741cd0(&UNK_10773530c);
                func_0x000107742924();
              }
            }
            func_0x0001077419ec();
            if (!(bool)in_ZR) {
              ___stack_chk_fail();
              func_0x000107742144();
              func_0x00010774291c();
              func_0x00010774298c();
              func_0x000107742914();
              ___cxa_guard_abort(0x113725570);
              func_0x00010774297c();
              func_0x000107741ca8();
              if ((bRam0000000113725580 & 1) == 0) {
                puVar4 = (undefined8 *)0x113725580;
                ___cxa_guard_acquire();
                if ((int)puVar4 != 0) {
                  func_0x000107742934();
                  func_0x00010774292c();
                  unaff_x20 = 0x113725578;
                  func_0x000107741c30(1);
                  func_0x000107741a04();
                  func_0x000107742984();
                  func_0x000107742cb4();
                  func_0x00010774291c();
                  *puVar4 = &PTR_DAT_1109d2ce8;
                  func_0x000107741cd0(&UNK_1077354ac);
                  func_0x000107742924();
                  unaff_x19 = puVar4;
                }
              }
              func_0x0001077419ec();
              if ((bool)in_ZR) {
                uVar3 = 0x113725578;
              }
              else {
                ___stack_chk_fail();
                func_0x00010774219c();
                ___cxa_guard_abort(0x113725580);
                func_0x000107742904();
                func_0x000107741ca8();
                if ((bRam0000000113725590 & 1) == 0) {
                  puVar4 = (undefined8 *)0x113725590;
                  ___cxa_guard_acquire();
                  if ((int)puVar4 != 0) {
                    func_0x000107742934();
                    func_0x00010774292c();
                    unaff_x20 = 0x113725588;
                    func_0x000107741c30(1);
                    func_0x000107741a04();
                    func_0x000107742984();
                    func_0x000107742cb4();
                    func_0x00010774291c();
                    *puVar4 = &PTR_DAT_1109d2d28;
                    func_0x000107741cd0(&UNK_1077356c8);
                    func_0x000107742924();
                    unaff_x19 = puVar4;
                  }
                }
                func_0x0001077419ec();
                if (!(bool)in_ZR) {
                  ___stack_chk_fail();
                  func_0x00010774219c();
                  ___cxa_guard_abort(0x113725590);
                  func_0x000107742904();
                  func_0x000107741ca8();
                  if ((bRam00000001137255a0 & 1) == 0) {
                    iVar2 = 0x137255a0;
                    ___cxa_guard_acquire();
                    if (iVar2 != 0) {
                      func_0x000107742934();
                      func_0x00010774292c();
                      func_0x000107742334();
                      func_0x0001077753dc(auStack_6d0);
                      func_0x000107741d3c();
                      unaff_x20 = 0x113725598;
                      func_0x000107741810();
                      func_0x000107741a04();
                      func_0x000107742984();
                      func_0x000107742944();
                      func_0x00010774293c();
                      func_0x00010774291c();
                      *unaff_x19 = &PTR_DAT_1109d2d68;
                      func_0x000107741cd0(&UNK_1077358e4);
                      func_0x000107742924();
                    }
                  }
                  func_0x0001077419ec();
                  if ((bool)in_ZR) {
                    return 0x113725598;
                  }
                  ___stack_chk_fail();
                  func_0x000107742144();
                  func_0x00010774291c();
                  func_0x00010774298c();
                  func_0x000107742914();
                  ___cxa_guard_abort(0x1137255a0);
                  func_0x00010774297c();
                  func_0x000107741ca8();
                  if ((bRam00000001137255b0 & 1) == 0) {
                    iVar2 = 0x137255b0;
                    ___cxa_guard_acquire();
                    if (iVar2 != 0) {
                      func_0x000107742934();
                      func_0x00010774292c();
                      func_0x000107742334();
                      func_0x0001077753dc(auStack_7a0);
                      func_0x000107741d3c();
                      unaff_x20 = 0x1137255a8;
                      func_0x000107741810();
                      func_0x000107741a04();
                      func_0x000107742984();
                      func_0x000107742944();
                      func_0x00010774293c();
                      func_0x00010774291c();
                      *unaff_x19 = &PTR_DAT_1109d2da8;
                      func_0x000107741cd0(&UNK_107735b44);
                      func_0x000107742924();
                    }
                  }
                  func_0x0001077419ec();
                  if ((bool)in_ZR) {
                    return 0x1137255a8;
                  }
                  ___stack_chk_fail();
                  func_0x000107742144();
                  func_0x00010774291c();
                  func_0x00010774298c();
                  func_0x000107742914();
                  ___cxa_guard_abort(0x1137255b0);
                  func_0x00010774297c();
                  func_0x000107741ca8();
                  if ((bRam00000001137255c0 & 1) == 0) {
                    iVar2 = 0x137255c0;
                    ___cxa_guard_acquire();
                    if (iVar2 != 0) {
                      func_0x000107742934();
                      func_0x00010774292c();
                      func_0x000107742334();
                      func_0x000107741d3c();
                      unaff_x20 = 0x1137255b8;
                      func_0x000107741810();
                      func_0x000107741a04();
                      func_0x000107742984();
                      func_0x000107742944();
                      func_0x00010774293c();
                      func_0x00010774291c();
                      *unaff_x19 = &PTR_DAT_1109d2de8;
                      func_0x000107741cd0(&UNK_107735d78);
                      func_0x000107742924();
                    }
                  }
                  func_0x0001077419ec();
                  if ((bool)in_ZR) {
                    return 0x1137255b8;
                  }
                  ___stack_chk_fail();
                  func_0x000107742144();
                  func_0x00010774291c();
                  func_0x00010774298c();
                  func_0x000107742914();
                  ___cxa_guard_abort(0x1137255c0);
                  func_0x00010774297c();
                  func_0x000107741ca8();
                  if ((bRam00000001137255d0 & 1) == 0) {
                    iVar2 = 0x137255d0;
                    ___cxa_guard_acquire();
                    if (iVar2 != 0) {
                      func_0x000107742934();
                      func_0x00010774292c();
                      func_0x000107742048();
                      func_0x000107741d3c();
                      unaff_x20 = 0x1137255c8;
                      func_0x000107741810();
                      func_0x000107741a04();
                      func_0x000107742984();
                      func_0x000107742944();
                      func_0x00010774293c();
                      func_0x00010774291c();
                      *unaff_x19 = &PTR_DAT_1109d2e28;
                      func_0x000107741cd0(&UNK_107735f84);
                      func_0x000107742924();
                    }
                  }
                  func_0x0001077419ec();
                  if ((bool)in_ZR) {
                    return 0x1137255c8;
                  }
                  ___stack_chk_fail();
                  func_0x000107742144();
                  func_0x00010774291c();
                  func_0x00010774298c();
                  func_0x000107742914();
                  ___cxa_guard_abort(0x1137255d0);
                  func_0x00010774297c();
                  func_0x000107741ca8();
                  if ((bRam00000001137255e0 & 1) == 0) {
                    iVar2 = 0x137255e0;
                    ___cxa_guard_acquire();
                    if (iVar2 != 0) {
                      func_0x000107742934();
                      func_0x00010774292c();
                      func_0x000107741f7c();
                      func_0x000107741bb4();
                      unaff_x20 = 0x1137255d8;
                      func_0x00010774185c();
                      func_0x000107741a04();
                      func_0x000107742a90();
                      func_0x000107742944();
                      unaff_x22 = 0x10;
                      do {
                        func_0x0001077429ac();
                        func_0x000107742a1c();
                      } while (!(bool)in_ZR);
                      func_0x00010774291c();
                      *unaff_x19 = &PTR_DAT_1109d2e68;
                      func_0x000107741cd0(&UNK_10773610c);
                      func_0x000107742924();
                    }
                  }
                  func_0x0001077419ec();
                  if ((bool)in_ZR) {
                    return 0x1137255d8;
                  }
                  ___stack_chk_fail();
                  func_0x000107742e34();
                  do {
                    func_0x0001077429ac();
                    func_0x000107742a1c();
                  } while (!(bool)in_ZR);
                  func_0x00010774291c();
                  func_0x00010774298c();
                  func_0x000107742914();
                  ___cxa_guard_abort(0x1137255e0);
                  func_0x00010774297c();
                  func_0x000107741ca8();
                  if ((bRam00000001137255f0 & 1) == 0) {
                    iVar2 = 0x137255f0;
                    ___cxa_guard_acquire();
                    if (iVar2 != 0) {
                      func_0x000107742934();
                      func_0x00010774292c();
                      func_0x000107742048();
                      func_0x000107741d3c();
                      unaff_x20 = 0x1137255e8;
                      func_0x000107741810();
                      func_0x000107741a04();
                      func_0x000107742984();
                      func_0x000107742944();
                      func_0x00010774293c();
                      func_0x00010774291c();
                      *unaff_x19 = &PTR_DAT_1109d2ea8;
                      func_0x000107741cd0(&UNK_1077362d4);
                      func_0x000107742924();
                    }
                  }
                  func_0x0001077419ec();
                  if ((bool)in_ZR) {
                    return 0x1137255e8;
                  }
                  ___stack_chk_fail();
                  func_0x000107742144();
                  func_0x00010774291c();
                  func_0x00010774298c();
                  func_0x000107742914();
                  ___cxa_guard_abort(0x1137255f0);
                  func_0x00010774297c();
                  func_0x000107741ca8();
                  if ((bRam0000000113725600 & 1) == 0) {
                    iVar2 = 0x13725600;
                    ___cxa_guard_acquire();
                    if (iVar2 != 0) {
                      func_0x000107742934();
                      func_0x00010774292c();
                      func_0x000107742048();
                      func_0x000107741d3c();
                      unaff_x20 = 0x1137255f8;
                      func_0x000107741810();
                      func_0x000107741a04();
                      func_0x000107742984();
                      func_0x000107742944();
                      func_0x00010774293c();
                      func_0x00010774291c();
                      *unaff_x19 = &PTR_DAT_1109d2ee8;
                      func_0x000107741cd0(&UNK_10773645c);
                      func_0x000107742924();
                    }
                  }
                  func_0x0001077419ec();
                  if ((bool)in_ZR) {
                    return 0x1137255f8;
                  }
                  ___stack_chk_fail();
                  func_0x000107742144();
                  func_0x00010774291c();
                  func_0x00010774298c();
                  func_0x000107742914();
                  ___cxa_guard_abort(0x113725600);
                  func_0x00010774297c();
                  func_0x000107741ca8();
                  if ((bRam0000000113725610 & 1) == 0) {
                    iVar2 = 0x13725610;
                    ___cxa_guard_acquire();
                    if (iVar2 != 0) {
                      func_0x000107742934();
                      func_0x00010774292c();
                      func_0x000107742048();
                      func_0x000107741d3c();
                      unaff_x20 = 0x113725608;
                      func_0x000107741810();
                      func_0x000107741a04();
                      func_0x000107742984();
                      func_0x000107742944();
                      func_0x00010774293c();
                      func_0x00010774291c();
                      *unaff_x19 = &PTR_FUN_1109d2f28;
                      func_0x000107741cd0(&UNK_1077365e4);
                      func_0x000107742924();
                    }
                  }
                  func_0x0001077419ec();
                  if ((bool)in_ZR) {
                    return 0x113725608;
                  }
                  ___stack_chk_fail();
                  func_0x000107742144();
                  func_0x00010774291c();
                  func_0x00010774298c();
                  func_0x000107742914();
                  ___cxa_guard_abort(0x113725610);
                  func_0x00010774297c();
                  func_0x000107741ca8();
                  if ((bRam0000000113725620 & 1) == 0) {
                    iVar2 = 0x13725620;
                    ___cxa_guard_acquire();
                    if (iVar2 != 0) {
                      func_0x000107742934();
                      func_0x00010774292c();
                      func_0x0001077425c0();
                      func_0x000107741d3c();
                      unaff_x20 = 0x113725618;
                      func_0x000107741810();
                      func_0x000107741a04();
                      func_0x000107742984();
                      func_0x000107742944();
                      func_0x00010774293c();
                      func_0x00010774291c();
                      *unaff_x19 = &PTR_DAT_1109d2f68;
                      func_0x000107741cd0(&UNK_10773676c);
                      func_0x000107742924();
                    }
                  }
                  func_0x0001077419ec();
                  if ((bool)in_ZR) {
                    return 0x113725618;
                  }
                  ___stack_chk_fail();
                  func_0x000107742144();
                  func_0x00010774291c();
                  func_0x00010774298c();
                  func_0x000107742914();
                  ___cxa_guard_abort(0x113725620);
                  func_0x00010774297c();
                  func_0x000107741ca8();
                  if ((bRam0000000113725630 & 1) == 0) {
                    iVar2 = 0x13725630;
                    ___cxa_guard_acquire();
                    if (iVar2 != 0) {
                      func_0x000107742934();
                      func_0x00010774292c();
                      func_0x000107742240();
                      func_0x000107742e40();
                      func_0x000107741bb4();
                      unaff_x20 = 0x113725628;
                      func_0x00010774185c();
                      func_0x000107741a04();
                      func_0x000107742a90();
                      func_0x000107742944();
                      unaff_x22 = 0x10;
                      do {
                        func_0x0001077429ac();
                        func_0x000107742a1c();
                      } while (!(bool)in_ZR);
                      func_0x00010774291c();
                      *unaff_x19 = &PTR_DAT_1109d2fa8;
                      func_0x000107741cd0(FUN_107736914);
                      func_0x000107742924();
                    }
                  }
                  func_0x0001077419ec();
                  if ((bool)in_ZR) {
                    return 0x113725628;
                  }
                  ___stack_chk_fail();
                  func_0x000107742e34();
                  do {
                    func_0x0001077429ac();
                    func_0x000107742a1c();
                  } while (!(bool)in_ZR);
                  func_0x00010774291c();
                  func_0x00010774298c();
                  func_0x000107742914();
                  ___cxa_guard_abort(0x113725630);
                  func_0x00010774297c();
                  func_0x000107741ca8();
                  if ((bRam0000000113725640 & 1) == 0) {
                    iVar2 = 0x13725640;
                    ___cxa_guard_acquire();
                    if (iVar2 != 0) {
                      func_0x000107742934();
                      func_0x00010774292c();
                      func_0x00010774230c();
                      func_0x000107741d3c();
                      unaff_x20 = 0x113725638;
                      func_0x000107741810();
                      func_0x000107741a04();
                      func_0x000107742984();
                      func_0x000107742944();
                      func_0x00010774293c();
                      func_0x00010774291c();
                      *unaff_x19 = &PTR_DAT_1109d2fe8;
                      func_0x000107741cd0(&UNK_107736b64);
                      func_0x000107742924();
                    }
                  }
                  func_0x0001077419ec();
                  if ((bool)in_ZR) {
                    return 0x113725638;
                  }
                  ___stack_chk_fail();
                  func_0x000107742144();
                  func_0x00010774291c();
                  func_0x00010774298c();
                  func_0x000107742914();
                  ___cxa_guard_abort(0x113725640);
                  func_0x00010774297c();
                  func_0x000107741ca8();
                  if ((bRam0000000113725650 & 1) == 0) {
                    iVar2 = 0x13725650;
                    ___cxa_guard_acquire();
                    if (iVar2 != 0) {
                      func_0x000107742934();
                      func_0x00010774292c();
                      func_0x000107743174();
                      func_0x000107741d3c();
                      unaff_x20 = 0x113725648;
                      func_0x000107741810();
                      func_0x000107741a04();
                      func_0x000107742984();
                      func_0x000107742944();
                      func_0x00010774293c();
                      func_0x00010774291c();
                      *unaff_x19 = &PTR_DAT_1109d3028;
                      func_0x000107741cd0(&UNK_107736d60);
                      func_0x000107742924();
                    }
                  }
                  func_0x0001077419ec();
                  if ((bool)in_ZR) {
                    return 0x113725648;
                  }
                  ___stack_chk_fail();
                  func_0x000107742144();
                  func_0x00010774291c();
                  func_0x00010774298c();
                  func_0x000107742914();
                  ___cxa_guard_abort(0x113725650);
                  func_0x00010774297c();
                  func_0x000107741ca8();
                  if ((bRam0000000113725660 & 1) == 0) {
                    iVar2 = 0x13725660;
                    ___cxa_guard_acquire();
                    if (iVar2 != 0) {
                      func_0x000107742934();
                      func_0x00010774292c();
                      func_0x000107743174();
                      func_0x000107741d3c();
                      unaff_x20 = 0x113725658;
                      func_0x000107741810();
                      func_0x000107741a04();
                      func_0x000107742984();
                      func_0x000107742944();
                      func_0x00010774293c();
                      func_0x00010774291c();
                      *unaff_x19 = &PTR_DAT_1109d3068;
                      func_0x000107741cd0(&UNK_107736fa4);
                      func_0x000107742924();
                    }
                  }
                  func_0x0001077419ec();
                  if ((bool)in_ZR) {
                    return 0x113725658;
                  }
                  ___stack_chk_fail();
                  func_0x000107742144();
                  func_0x00010774291c();
                  func_0x00010774298c();
                  func_0x000107742914();
                  ___cxa_guard_abort(0x113725660);
                  func_0x00010774297c();
                  func_0x000107741ca8();
                  if ((bRam0000000113725670 & 1) == 0) {
                    iVar2 = 0x13725670;
                    ___cxa_guard_acquire();
                    if (iVar2 != 0) {
                      func_0x000107742934();
                      func_0x00010774292c();
                      func_0x000107742b9c();
                      func_0x000107742da0();
                      func_0x000107741bb4();
                      unaff_x20 = 0x113725668;
                      func_0x00010774185c();
                      func_0x000107741a04();
                      func_0x000107742a90();
                      func_0x000107742944();
                      unaff_x22 = 0x10;
                      do {
                        func_0x0001077429ac();
                        func_0x000107742a1c();
                      } while (!(bool)in_ZR);
                      func_0x00010774291c();
                      *unaff_x19 = &PTR_DAT_1109d30a8;
                      func_0x000107741cd0(FUN_1077371e8);
                      func_0x000107742924();
                    }
                  }
                  func_0x0001077419ec();
                  if ((bool)in_ZR) {
                    return 0x113725668;
                  }
                  ___stack_chk_fail();
                  func_0x000107742e34();
                  do {
                    func_0x0001077429ac();
                    func_0x000107742a1c();
                  } while (!(bool)in_ZR);
                  func_0x00010774291c();
                  func_0x00010774298c();
                  func_0x000107742914();
                  ___cxa_guard_abort(0x113725670);
                  func_0x00010774297c();
                  func_0x000107741ca8();
                  if ((bRam0000000113725680 & 1) == 0) {
                    iVar2 = 0x13725680;
                    ___cxa_guard_acquire();
                    if (iVar2 != 0) {
                      func_0x000107742934();
                      func_0x00010774292c();
                      func_0x00010774251c();
                      func_0x000107742da0();
                      func_0x000107741bb4();
                      unaff_x20 = 0x113725678;
                      func_0x00010774185c();
                      func_0x000107741a04();
                      func_0x000107742a90();
                      func_0x000107742944();
                      unaff_x22 = 0x10;
                      do {
                        func_0x0001077429ac();
                        func_0x000107742a1c();
                      } while (!(bool)in_ZR);
                      func_0x00010774291c();
                      *unaff_x19 = &PTR_DAT_1109d30f8;
                      func_0x000107741cd0(&UNK_107737668);
                      func_0x000107742924();
                    }
                  }
                  func_0x0001077419ec();
                  if ((bool)in_ZR) {
                    return 0x113725678;
                  }
                  ___stack_chk_fail();
                  func_0x000107742e34();
                  do {
                    func_0x0001077429ac();
                    func_0x000107742a1c();
                  } while (!(bool)in_ZR);
                  func_0x00010774291c();
                  func_0x00010774298c();
                  func_0x000107742914();
                  ___cxa_guard_abort(0x113725680);
                  func_0x00010774297c();
                  lStack_1300 = unaff_x22;
                  func_0x000107741ca8();
                  if ((bRam0000000113725690 & 1) == 0) {
                    iVar2 = 0x13725690;
                    ___cxa_guard_acquire();
                    if (iVar2 != 0) {
                      func_0x000107742934();
                      func_0x00010774292c();
                      func_0x000107742b9c();
                      func_0x000107742da0();
                      func_0x000107775500(auStack_1340);
                      func_0x000107741bb4();
                      unaff_x20 = 0x113725688;
                      func_0x00010774185c();
                      func_0x000107741a04();
                      func_0x000107742a90();
                      func_0x000107742944();
                      unaff_x22 = 0x10;
                      do {
                        func_0x0001077429ac();
                        func_0x000107742a1c();
                      } while (!(bool)in_ZR);
                      func_0x00010774291c();
                      *unaff_x19 = &PTR_DAT_1109d3138;
                      func_0x000107741cd0(&UNK_107737910);
                      func_0x000107742924();
                    }
                  }
                  func_0x0001077419ec();
                  if ((bool)in_ZR) {
                    return 0x113725688;
                  }
                  ___stack_chk_fail();
                  func_0x00010774281c();
                  do {
                    func_0x000107743108();
                    func_0x00010774330c();
                  } while (unaff_x22 != 0);
                  func_0x00010774291c();
                  func_0x00010774298c();
                  func_0x000107742914();
                  ___cxa_guard_abort(0x113725690);
                  func_0x00010774297c();
                  lStack_13e0 = unaff_x22;
                  func_0x000107741ca8();
                  lVar5 = 0;
                  if ((bRam00000001137256a0 & 1) == 0) {
                    puVar4 = (undefined8 *)0x1137256a0;
                    ___cxa_guard_acquire();
                    if ((int)puVar4 != 0) {
                      func_0x000107742934();
                      func_0x00010774292c();
                      func_0x000107775500(auStack_1430);
                      uStack_1418 = 3;
                      func_0x000107741bb4();
                      unaff_x20 = 0x113725698;
                      func_0x00010774185c();
                      func_0x000107741a04();
                      func_0x000107742a90();
                      func_0x000107742944();
                      lVar5 = 0x10;
                      do {
                        func_0x0001077429ac();
                        func_0x000107742a1c();
                      } while (!(bool)in_ZR);
                      func_0x00010774291c();
                      *puVar4 = &PTR_DAT_1109d3178;
                      func_0x000107741cd0(&UNK_107737c18);
                      func_0x000107742924();
                      unaff_x19 = puVar4;
                    }
                  }
                  func_0x0001077419ec();
                  if ((bool)in_ZR) {
                    return 0x113725698;
                  }
                  ___stack_chk_fail();
                  func_0x00010774281c();
                  do {
                    func_0x000107743108();
                    func_0x00010774330c();
                  } while (lVar5 != 0);
                  func_0x00010774291c();
                  func_0x00010774298c();
                  func_0x000107742914();
                  ___cxa_guard_abort(0x1137256a0);
                  func_0x00010774297c();
                  lStack_14c0 = lVar5;
                  func_0x000107741ca8();
                  bVar1 = false;
                  if ((bRam00000001137256b0 & 1) == 0) {
                    iVar2 = 0x137256b0;
                    ___cxa_guard_acquire();
                    if (iVar2 != 0) {
                      func_0x000107742934();
                      func_0x00010774292c();
                      func_0x000107742b9c();
                      func_0x000107742da0();
                      func_0x000107775500(auStack_1500);
                      func_0x000107741bb4();
                      unaff_x20 = 0x1137256a8;
                      func_0x00010774185c();
                      func_0x000107741a04();
                      func_0x000107742a90();
                      func_0x000107742944();
                      bVar1 = true;
                      do {
                        func_0x0001077429ac();
                        func_0x000107742a1c();
                      } while (!(bool)in_ZR);
                      func_0x00010774291c();
                      *unaff_x19 = &PTR_DAT_1109d31b8;
                      func_0x000107741cd0(&UNK_107737edc);
                      func_0x000107742924();
                    }
                  }
                  func_0x0001077419ec();
                  if ((bool)in_ZR) {
                    return 0x1137256a8;
                  }
                  ___stack_chk_fail();
                  func_0x00010774281c();
                  do {
                    func_0x000107743108();
                    func_0x00010774330c();
                  } while (bVar1);
                  func_0x00010774291c();
                  func_0x00010774298c();
                  func_0x000107742914();
                  ___cxa_guard_abort(0x1137256b0);
                  func_0x00010774297c();
                  func_0x000107741ca8();
                  if ((bRam00000001137256c0 & 1) == 0) {
                    puVar4 = (undefined8 *)0x1137256c0;
                    ___cxa_guard_acquire();
                    if ((int)puVar4 != 0) {
                      func_0x000107742934();
                      func_0x00010774292c();
                      unaff_x20 = 0x1137256b8;
                      func_0x000107741c30(6);
                      func_0x000107741a04();
                      func_0x000107742984();
                      func_0x000107742cb4();
                      func_0x00010774291c();
                      *puVar4 = &PTR_DAT_1109d31f8;
                      func_0x000107741cd0(&UNK_107738154);
                      func_0x000107742924();
                      unaff_x19 = puVar4;
                    }
                  }
                  func_0x0001077419ec();
                  if ((bool)in_ZR) {
                    return 0x1137256b8;
                  }
                  ___stack_chk_fail();
                  func_0x00010774219c();
                  ___cxa_guard_abort(0x1137256c0);
                  func_0x000107742904();
                  func_0x000107741ca8();
                  bVar1 = false;
                  if ((bRam00000001137256d0 & 1) == 0) {
                    iVar2 = 0x137256d0;
                    ___cxa_guard_acquire();
                    if (iVar2 != 0) {
                      func_0x000107742934();
                      func_0x00010774292c();
                      func_0x000107742b9c();
                      func_0x00010774396c();
                      func_0x000107775500(unaff_x20 + 0x10);
                      func_0x000107741bb4();
                      func_0x00010774185c();
                      func_0x000107741a04();
                      func_0x000107742a90();
                      func_0x000107742944();
                      bVar1 = true;
                      do {
                        func_0x0001077429ac();
                        func_0x000107742a1c();
                      } while (!(bool)in_ZR);
                      func_0x00010774291c();
                      *unaff_x19 = &PTR_FUN_1109d3238;
                      func_0x000107741cd0(FUN_107738544);
                      func_0x000107742924();
                    }
                  }
                  func_0x0001077419ec();
                  if ((bool)in_ZR) {
                    return 0x1137256c8;
                  }
                  ___stack_chk_fail();
                  func_0x00010774281c();
                  do {
                    func_0x000107743108();
                    func_0x00010774330c();
                  } while (bVar1);
                  func_0x00010774291c();
                  func_0x00010774298c();
                  func_0x000107742914();
                  do {
                    ___cxa_guard_abort(0x1137256d0);
                    func_0x00010774297c();
                  } while( true );
                }
                uVar3 = 0x113725588;
              }
              return uVar3;
            }
            uVar3 = 0x113725568;
          }
        }
      }
    }
  }
  return uVar3;
}



/* Entry: 10772724c; end: 10772733f;  */

undefined8 FUN_10772724c(void)

{
  bool bVar1;
  undefined1 in_ZR;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x22;
  long lVar5;
  undefined1 auStack_ea0 [64];
  long lStack_e60;
  undefined1 auStack_dd0 [24];
  undefined4 uStack_db8;
  long lStack_d80;
  undefined1 auStack_ce0 [64];
  long lStack_ca0;
  undefined1 auStack_140 [64];
  undefined1 auStack_70 [64];
  
  func_0x000107741ca8();
  if ((bRam00000001137255a0 & 1) == 0) {
    iVar2 = 0x137255a0;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107742934();
      func_0x00010774292c();
      func_0x000107742334();
      func_0x0001077753dc(auStack_70);
      func_0x000107741d3c();
      unaff_x20 = 0x113725598;
      func_0x000107741810();
      func_0x000107741a04();
      func_0x000107742984();
      func_0x000107742944();
      func_0x00010774293c();
      func_0x00010774291c();
      *unaff_x19 = &PTR_DAT_1109d2d68;
      func_0x000107741cd0(&UNK_1077358e4);
      func_0x000107742924();
    }
  }
  func_0x0001077419ec();
  if ((bool)in_ZR) {
    uVar3 = 0x113725598;
  }
  else {
    ___stack_chk_fail();
    func_0x000107742144();
    func_0x00010774291c();
    func_0x00010774298c();
    func_0x000107742914();
    ___cxa_guard_abort(0x1137255a0);
    func_0x00010774297c();
    func_0x000107741ca8();
    if ((bRam00000001137255b0 & 1) == 0) {
      iVar2 = 0x137255b0;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        func_0x000107742934();
        func_0x00010774292c();
        func_0x000107742334();
        func_0x0001077753dc(auStack_140);
        func_0x000107741d3c();
        unaff_x20 = 0x1137255a8;
        func_0x000107741810();
        func_0x000107741a04();
        func_0x000107742984();
        func_0x000107742944();
        func_0x00010774293c();
        func_0x00010774291c();
        *unaff_x19 = &PTR_DAT_1109d2da8;
        func_0x000107741cd0(&UNK_107735b44);
        func_0x000107742924();
      }
    }
    func_0x0001077419ec();
    if ((bool)in_ZR) {
      uVar3 = 0x1137255a8;
    }
    else {
      ___stack_chk_fail();
      func_0x000107742144();
      func_0x00010774291c();
      func_0x00010774298c();
      func_0x000107742914();
      ___cxa_guard_abort(0x1137255b0);
      func_0x00010774297c();
      func_0x000107741ca8();
      if ((bRam00000001137255c0 & 1) == 0) {
        iVar2 = 0x137255c0;
        ___cxa_guard_acquire();
        if (iVar2 != 0) {
          func_0x000107742934();
          func_0x00010774292c();
          func_0x000107742334();
          func_0x000107741d3c();
          unaff_x20 = 0x1137255b8;
          func_0x000107741810();
          func_0x000107741a04();
          func_0x000107742984();
          func_0x000107742944();
          func_0x00010774293c();
          func_0x00010774291c();
          *unaff_x19 = &PTR_DAT_1109d2de8;
          func_0x000107741cd0(&UNK_107735d78);
          func_0x000107742924();
        }
      }
      func_0x0001077419ec();
      if ((bool)in_ZR) {
        uVar3 = 0x1137255b8;
      }
      else {
        ___stack_chk_fail();
        func_0x000107742144();
        func_0x00010774291c();
        func_0x00010774298c();
        func_0x000107742914();
        ___cxa_guard_abort(0x1137255c0);
        func_0x00010774297c();
        func_0x000107741ca8();
        if ((bRam00000001137255d0 & 1) == 0) {
          iVar2 = 0x137255d0;
          ___cxa_guard_acquire();
          if (iVar2 != 0) {
            func_0x000107742934();
            func_0x00010774292c();
            func_0x000107742048();
            func_0x000107741d3c();
            unaff_x20 = 0x1137255c8;
            func_0x000107741810();
            func_0x000107741a04();
            func_0x000107742984();
            func_0x000107742944();
            func_0x00010774293c();
            func_0x00010774291c();
            *unaff_x19 = &PTR_DAT_1109d2e28;
            func_0x000107741cd0(&UNK_107735f84);
            func_0x000107742924();
          }
        }
        func_0x0001077419ec();
        if ((bool)in_ZR) {
          uVar3 = 0x1137255c8;
        }
        else {
          ___stack_chk_fail();
          func_0x000107742144();
          func_0x00010774291c();
          func_0x00010774298c();
          func_0x000107742914();
          ___cxa_guard_abort(0x1137255d0);
          func_0x00010774297c();
          func_0x000107741ca8();
          if ((bRam00000001137255e0 & 1) == 0) {
            iVar2 = 0x137255e0;
            ___cxa_guard_acquire();
            if (iVar2 != 0) {
              func_0x000107742934();
              func_0x00010774292c();
              func_0x000107741f7c();
              func_0x000107741bb4();
              unaff_x20 = 0x1137255d8;
              func_0x00010774185c();
              func_0x000107741a04();
              func_0x000107742a90();
              func_0x000107742944();
              unaff_x22 = 0x10;
              do {
                func_0x0001077429ac();
                func_0x000107742a1c();
              } while (!(bool)in_ZR);
              func_0x00010774291c();
              *unaff_x19 = &PTR_DAT_1109d2e68;
              func_0x000107741cd0(&UNK_10773610c);
              func_0x000107742924();
            }
          }
          func_0x0001077419ec();
          if ((bool)in_ZR) {
            return 0x1137255d8;
          }
          ___stack_chk_fail();
          func_0x000107742e34();
          do {
            func_0x0001077429ac();
            func_0x000107742a1c();
          } while (!(bool)in_ZR);
          func_0x00010774291c();
          func_0x00010774298c();
          func_0x000107742914();
          ___cxa_guard_abort(0x1137255e0);
          func_0x00010774297c();
          func_0x000107741ca8();
          if ((bRam00000001137255f0 & 1) == 0) {
            iVar2 = 0x137255f0;
            ___cxa_guard_acquire();
            if (iVar2 != 0) {
              func_0x000107742934();
              func_0x00010774292c();
              func_0x000107742048();
              func_0x000107741d3c();
              unaff_x20 = 0x1137255e8;
              func_0x000107741810();
              func_0x000107741a04();
              func_0x000107742984();
              func_0x000107742944();
              func_0x00010774293c();
              func_0x00010774291c();
              *unaff_x19 = &PTR_DAT_1109d2ea8;
              func_0x000107741cd0(&UNK_1077362d4);
              func_0x000107742924();
            }
          }
          func_0x0001077419ec();
          if ((bool)in_ZR) {
            uVar3 = 0x1137255e8;
          }
          else {
            ___stack_chk_fail();
            func_0x000107742144();
            func_0x00010774291c();
            func_0x00010774298c();
            func_0x000107742914();
            ___cxa_guard_abort(0x1137255f0);
            func_0x00010774297c();
            func_0x000107741ca8();
            if ((bRam0000000113725600 & 1) == 0) {
              iVar2 = 0x13725600;
              ___cxa_guard_acquire();
              if (iVar2 != 0) {
                func_0x000107742934();
                func_0x00010774292c();
                func_0x000107742048();
                func_0x000107741d3c();
                unaff_x20 = 0x1137255f8;
                func_0x000107741810();
                func_0x000107741a04();
                func_0x000107742984();
                func_0x000107742944();
                func_0x00010774293c();
                func_0x00010774291c();
                *unaff_x19 = &PTR_DAT_1109d2ee8;
                func_0x000107741cd0(&UNK_10773645c);
                func_0x000107742924();
              }
            }
            func_0x0001077419ec();
            if ((bool)in_ZR) {
              uVar3 = 0x1137255f8;
            }
            else {
              ___stack_chk_fail();
              func_0x000107742144();
              func_0x00010774291c();
              func_0x00010774298c();
              func_0x000107742914();
              ___cxa_guard_abort(0x113725600);
              func_0x00010774297c();
              func_0x000107741ca8();
              if ((bRam0000000113725610 & 1) == 0) {
                iVar2 = 0x13725610;
                ___cxa_guard_acquire();
                if (iVar2 != 0) {
                  func_0x000107742934();
                  func_0x00010774292c();
                  func_0x000107742048();
                  func_0x000107741d3c();
                  unaff_x20 = 0x113725608;
                  func_0x000107741810();
                  func_0x000107741a04();
                  func_0x000107742984();
                  func_0x000107742944();
                  func_0x00010774293c();
                  func_0x00010774291c();
                  *unaff_x19 = &PTR_FUN_1109d2f28;
                  func_0x000107741cd0(&UNK_1077365e4);
                  func_0x000107742924();
                }
              }
              func_0x0001077419ec();
              if ((bool)in_ZR) {
                uVar3 = 0x113725608;
              }
              else {
                ___stack_chk_fail();
                func_0x000107742144();
                func_0x00010774291c();
                func_0x00010774298c();
                func_0x000107742914();
                ___cxa_guard_abort(0x113725610);
                func_0x00010774297c();
                func_0x000107741ca8();
                if ((bRam0000000113725620 & 1) == 0) {
                  iVar2 = 0x13725620;
                  ___cxa_guard_acquire();
                  if (iVar2 != 0) {
                    func_0x000107742934();
                    func_0x00010774292c();
                    func_0x0001077425c0();
                    func_0x000107741d3c();
                    unaff_x20 = 0x113725618;
                    func_0x000107741810();
                    func_0x000107741a04();
                    func_0x000107742984();
                    func_0x000107742944();
                    func_0x00010774293c();
                    func_0x00010774291c();
                    *unaff_x19 = &PTR_DAT_1109d2f68;
                    func_0x000107741cd0(&UNK_10773676c);
                    func_0x000107742924();
                  }
                }
                func_0x0001077419ec();
                if ((bool)in_ZR) {
                  uVar3 = 0x113725618;
                }
                else {
                  ___stack_chk_fail();
                  func_0x000107742144();
                  func_0x00010774291c();
                  func_0x00010774298c();
                  func_0x000107742914();
                  ___cxa_guard_abort(0x113725620);
                  func_0x00010774297c();
                  func_0x000107741ca8();
                  if ((bRam0000000113725630 & 1) == 0) {
                    iVar2 = 0x13725630;
                    ___cxa_guard_acquire();
                    if (iVar2 != 0) {
                      func_0x000107742934();
                      func_0x00010774292c();
                      func_0x000107742240();
                      func_0x000107742e40();
                      func_0x000107741bb4();
                      unaff_x20 = 0x113725628;
                      func_0x00010774185c();
                      func_0x000107741a04();
                      func_0x000107742a90();
                      func_0x000107742944();
                      unaff_x22 = 0x10;
                      do {
                        func_0x0001077429ac();
                        func_0x000107742a1c();
                      } while (!(bool)in_ZR);
                      func_0x00010774291c();
                      *unaff_x19 = &PTR_DAT_1109d2fa8;
                      func_0x000107741cd0(FUN_107736914);
                      func_0x000107742924();
                    }
                  }
                  func_0x0001077419ec();
                  if ((bool)in_ZR) {
                    return 0x113725628;
                  }
                  ___stack_chk_fail();
                  func_0x000107742e34();
                  do {
                    func_0x0001077429ac();
                    func_0x000107742a1c();
                  } while (!(bool)in_ZR);
                  func_0x00010774291c();
                  func_0x00010774298c();
                  func_0x000107742914();
                  ___cxa_guard_abort(0x113725630);
                  func_0x00010774297c();
                  func_0x000107741ca8();
                  if ((bRam0000000113725640 & 1) == 0) {
                    iVar2 = 0x13725640;
                    ___cxa_guard_acquire();
                    if (iVar2 != 0) {
                      func_0x000107742934();
                      func_0x00010774292c();
                      func_0x00010774230c();
                      func_0x000107741d3c();
                      unaff_x20 = 0x113725638;
                      func_0x000107741810();
                      func_0x000107741a04();
                      func_0x000107742984();
                      func_0x000107742944();
                      func_0x00010774293c();
                      func_0x00010774291c();
                      *unaff_x19 = &PTR_DAT_1109d2fe8;
                      func_0x000107741cd0(&UNK_107736b64);
                      func_0x000107742924();
                    }
                  }
                  func_0x0001077419ec();
                  if ((bool)in_ZR) {
                    uVar3 = 0x113725638;
                  }
                  else {
                    ___stack_chk_fail();
                    func_0x000107742144();
                    func_0x00010774291c();
                    func_0x00010774298c();
                    func_0x000107742914();
                    ___cxa_guard_abort(0x113725640);
                    func_0x00010774297c();
                    func_0x000107741ca8();
                    if ((bRam0000000113725650 & 1) == 0) {
                      iVar2 = 0x13725650;
                      ___cxa_guard_acquire();
                      if (iVar2 != 0) {
                        func_0x000107742934();
                        func_0x00010774292c();
                        func_0x000107743174();
                        func_0x000107741d3c();
                        unaff_x20 = 0x113725648;
                        func_0x000107741810();
                        func_0x000107741a04();
                        func_0x000107742984();
                        func_0x000107742944();
                        func_0x00010774293c();
                        func_0x00010774291c();
                        *unaff_x19 = &PTR_DAT_1109d3028;
                        func_0x000107741cd0(&UNK_107736d60);
                        func_0x000107742924();
                      }
                    }
                    func_0x0001077419ec();
                    if ((bool)in_ZR) {
                      uVar3 = 0x113725648;
                    }
                    else {
                      ___stack_chk_fail();
                      func_0x000107742144();
                      func_0x00010774291c();
                      func_0x00010774298c();
                      func_0x000107742914();
                      ___cxa_guard_abort(0x113725650);
                      func_0x00010774297c();
                      func_0x000107741ca8();
                      if ((bRam0000000113725660 & 1) == 0) {
                        iVar2 = 0x13725660;
                        ___cxa_guard_acquire();
                        if (iVar2 != 0) {
                          func_0x000107742934();
                          func_0x00010774292c();
                          func_0x000107743174();
                          func_0x000107741d3c();
                          unaff_x20 = 0x113725658;
                          func_0x000107741810();
                          func_0x000107741a04();
                          func_0x000107742984();
                          func_0x000107742944();
                          func_0x00010774293c();
                          func_0x00010774291c();
                          *unaff_x19 = &PTR_DAT_1109d3068;
                          func_0x000107741cd0(&UNK_107736fa4);
                          func_0x000107742924();
                        }
                      }
                      func_0x0001077419ec();
                      if (!(bool)in_ZR) {
                        ___stack_chk_fail();
                        func_0x000107742144();
                        func_0x00010774291c();
                        func_0x00010774298c();
                        func_0x000107742914();
                        ___cxa_guard_abort(0x113725660);
                        func_0x00010774297c();
                        func_0x000107741ca8();
                        if ((bRam0000000113725670 & 1) == 0) {
                          iVar2 = 0x13725670;
                          ___cxa_guard_acquire();
                          if (iVar2 != 0) {
                            func_0x000107742934();
                            func_0x00010774292c();
                            func_0x000107742b9c();
                            func_0x000107742da0();
                            func_0x000107741bb4();
                            unaff_x20 = 0x113725668;
                            func_0x00010774185c();
                            func_0x000107741a04();
                            func_0x000107742a90();
                            func_0x000107742944();
                            unaff_x22 = 0x10;
                            do {
                              func_0x0001077429ac();
                              func_0x000107742a1c();
                            } while (!(bool)in_ZR);
                            func_0x00010774291c();
                            *unaff_x19 = &PTR_DAT_1109d30a8;
                            func_0x000107741cd0(FUN_1077371e8);
                            func_0x000107742924();
                          }
                        }
                        func_0x0001077419ec();
                        if ((bool)in_ZR) {
                          return 0x113725668;
                        }
                        ___stack_chk_fail();
                        func_0x000107742e34();
                        do {
                          func_0x0001077429ac();
                          func_0x000107742a1c();
                        } while (!(bool)in_ZR);
                        func_0x00010774291c();
                        func_0x00010774298c();
                        func_0x000107742914();
                        ___cxa_guard_abort(0x113725670);
                        func_0x00010774297c();
                        func_0x000107741ca8();
                        if ((bRam0000000113725680 & 1) == 0) {
                          iVar2 = 0x13725680;
                          ___cxa_guard_acquire();
                          if (iVar2 != 0) {
                            func_0x000107742934();
                            func_0x00010774292c();
                            func_0x00010774251c();
                            func_0x000107742da0();
                            func_0x000107741bb4();
                            unaff_x20 = 0x113725678;
                            func_0x00010774185c();
                            func_0x000107741a04();
                            func_0x000107742a90();
                            func_0x000107742944();
                            unaff_x22 = 0x10;
                            do {
                              func_0x0001077429ac();
                              func_0x000107742a1c();
                            } while (!(bool)in_ZR);
                            func_0x00010774291c();
                            *unaff_x19 = &PTR_DAT_1109d30f8;
                            func_0x000107741cd0(&UNK_107737668);
                            func_0x000107742924();
                          }
                        }
                        func_0x0001077419ec();
                        if ((bool)in_ZR) {
                          return 0x113725678;
                        }
                        ___stack_chk_fail();
                        func_0x000107742e34();
                        do {
                          func_0x0001077429ac();
                          func_0x000107742a1c();
                        } while (!(bool)in_ZR);
                        func_0x00010774291c();
                        func_0x00010774298c();
                        func_0x000107742914();
                        ___cxa_guard_abort(0x113725680);
                        func_0x00010774297c();
                        lStack_ca0 = unaff_x22;
                        func_0x000107741ca8();
                        if ((bRam0000000113725690 & 1) == 0) {
                          iVar2 = 0x13725690;
                          ___cxa_guard_acquire();
                          if (iVar2 != 0) {
                            func_0x000107742934();
                            func_0x00010774292c();
                            func_0x000107742b9c();
                            func_0x000107742da0();
                            func_0x000107775500(auStack_ce0);
                            func_0x000107741bb4();
                            unaff_x20 = 0x113725688;
                            func_0x00010774185c();
                            func_0x000107741a04();
                            func_0x000107742a90();
                            func_0x000107742944();
                            unaff_x22 = 0x10;
                            do {
                              func_0x0001077429ac();
                              func_0x000107742a1c();
                            } while (!(bool)in_ZR);
                            func_0x00010774291c();
                            *unaff_x19 = &PTR_DAT_1109d3138;
                            func_0x000107741cd0(&UNK_107737910);
                            func_0x000107742924();
                          }
                        }
                        func_0x0001077419ec();
                        if ((bool)in_ZR) {
                          return 0x113725688;
                        }
                        ___stack_chk_fail();
                        func_0x00010774281c();
                        do {
                          func_0x000107743108();
                          func_0x00010774330c();
                        } while (unaff_x22 != 0);
                        func_0x00010774291c();
                        func_0x00010774298c();
                        func_0x000107742914();
                        ___cxa_guard_abort(0x113725690);
                        func_0x00010774297c();
                        lStack_d80 = unaff_x22;
                        func_0x000107741ca8();
                        lVar5 = 0;
                        if ((bRam00000001137256a0 & 1) == 0) {
                          puVar4 = (undefined8 *)0x1137256a0;
                          ___cxa_guard_acquire();
                          if ((int)puVar4 != 0) {
                            func_0x000107742934();
                            func_0x00010774292c();
                            func_0x000107775500(auStack_dd0);
                            uStack_db8 = 3;
                            func_0x000107741bb4();
                            unaff_x20 = 0x113725698;
                            func_0x00010774185c();
                            func_0x000107741a04();
                            func_0x000107742a90();
                            func_0x000107742944();
                            lVar5 = 0x10;
                            do {
                              func_0x0001077429ac();
                              func_0x000107742a1c();
                            } while (!(bool)in_ZR);
                            func_0x00010774291c();
                            *puVar4 = &PTR_DAT_1109d3178;
                            func_0x000107741cd0(&UNK_107737c18);
                            func_0x000107742924();
                            unaff_x19 = puVar4;
                          }
                        }
                        func_0x0001077419ec();
                        if ((bool)in_ZR) {
                          return 0x113725698;
                        }
                        ___stack_chk_fail();
                        func_0x00010774281c();
                        do {
                          func_0x000107743108();
                          func_0x00010774330c();
                        } while (lVar5 != 0);
                        func_0x00010774291c();
                        func_0x00010774298c();
                        func_0x000107742914();
                        ___cxa_guard_abort(0x1137256a0);
                        func_0x00010774297c();
                        lStack_e60 = lVar5;
                        func_0x000107741ca8();
                        bVar1 = false;
                        if ((bRam00000001137256b0 & 1) == 0) {
                          iVar2 = 0x137256b0;
                          ___cxa_guard_acquire();
                          if (iVar2 != 0) {
                            func_0x000107742934();
                            func_0x00010774292c();
                            func_0x000107742b9c();
                            func_0x000107742da0();
                            func_0x000107775500(auStack_ea0);
                            func_0x000107741bb4();
                            unaff_x20 = 0x1137256a8;
                            func_0x00010774185c();
                            func_0x000107741a04();
                            func_0x000107742a90();
                            func_0x000107742944();
                            bVar1 = true;
                            do {
                              func_0x0001077429ac();
                              func_0x000107742a1c();
                            } while (!(bool)in_ZR);
                            func_0x00010774291c();
                            *unaff_x19 = &PTR_DAT_1109d31b8;
                            func_0x000107741cd0(&UNK_107737edc);
                            func_0x000107742924();
                          }
                        }
                        func_0x0001077419ec();
                        if ((bool)in_ZR) {
                          return 0x1137256a8;
                        }
                        ___stack_chk_fail();
                        func_0x00010774281c();
                        do {
                          func_0x000107743108();
                          func_0x00010774330c();
                        } while (bVar1);
                        func_0x00010774291c();
                        func_0x00010774298c();
                        func_0x000107742914();
                        ___cxa_guard_abort(0x1137256b0);
                        func_0x00010774297c();
                        func_0x000107741ca8();
                        if ((bRam00000001137256c0 & 1) == 0) {
                          puVar4 = (undefined8 *)0x1137256c0;
                          ___cxa_guard_acquire();
                          if ((int)puVar4 != 0) {
                            func_0x000107742934();
                            func_0x00010774292c();
                            unaff_x20 = 0x1137256b8;
                            func_0x000107741c30(6);
                            func_0x000107741a04();
                            func_0x000107742984();
                            func_0x000107742cb4();
                            func_0x00010774291c();
                            *puVar4 = &PTR_DAT_1109d31f8;
                            func_0x000107741cd0(&UNK_107738154);
                            func_0x000107742924();
                            unaff_x19 = puVar4;
                          }
                        }
                        func_0x0001077419ec();
                        if ((bool)in_ZR) {
                          return 0x1137256b8;
                        }
                        ___stack_chk_fail();
                        func_0x00010774219c();
                        ___cxa_guard_abort(0x1137256c0);
                        func_0x000107742904();
                        func_0x000107741ca8();
                        bVar1 = false;
                        if ((bRam00000001137256d0 & 1) == 0) {
                          iVar2 = 0x137256d0;
                          ___cxa_guard_acquire();
                          if (iVar2 != 0) {
                            func_0x000107742934();
                            func_0x00010774292c();
                            func_0x000107742b9c();
                            func_0x00010774396c();
                            func_0x000107775500(unaff_x20 + 0x10);
                            func_0x000107741bb4();
                            func_0x00010774185c();
                            func_0x000107741a04();
                            func_0x000107742a90();
                            func_0x000107742944();
                            bVar1 = true;
                            do {
                              func_0x0001077429ac();
                              func_0x000107742a1c();
                            } while (!(bool)in_ZR);
                            func_0x00010774291c();
                            *unaff_x19 = &PTR_FUN_1109d3238;
                            func_0x000107741cd0(FUN_107738544);
                            func_0x000107742924();
                          }
                        }
                        func_0x0001077419ec();
                        if ((bool)in_ZR) {
                          return 0x1137256c8;
                        }
                        ___stack_chk_fail();
                        func_0x00010774281c();
                        do {
                          func_0x000107743108();
                          func_0x00010774330c();
                        } while (bVar1);
                        func_0x00010774291c();
                        func_0x00010774298c();
                        func_0x000107742914();
                        do {
                          ___cxa_guard_abort(0x1137256d0);
                          func_0x00010774297c();
                        } while( true );
                      }
                      uVar3 = 0x113725658;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar3;
}



/* Entry: 1077279ac; end: 107727a93;  */

undefined8 FUN_1077279ac(void)

{
  bool bVar1;
  undefined1 in_ZR;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x22;
  long lVar5;
  undefined1 auStack_810 [64];
  long lStack_7d0;
  undefined1 auStack_740 [24];
  undefined4 uStack_728;
  long lStack_6f0;
  undefined1 auStack_650 [64];
  long lStack_610;
  
  func_0x000107741ca8();
  if ((bRam0000000113725620 & 1) == 0) {
    iVar2 = 0x13725620;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107742934();
      func_0x00010774292c();
      func_0x0001077425c0();
      func_0x000107741d3c();
      unaff_x20 = 0x113725618;
      func_0x000107741810();
      func_0x000107741a04();
      func_0x000107742984();
      func_0x000107742944();
      func_0x00010774293c();
      func_0x00010774291c();
      *unaff_x19 = &PTR_DAT_1109d2f68;
      func_0x000107741cd0(&UNK_10773676c);
      func_0x000107742924();
    }
  }
  func_0x0001077419ec();
  if ((bool)in_ZR) {
    uVar3 = 0x113725618;
  }
  else {
    ___stack_chk_fail();
    func_0x000107742144();
    func_0x00010774291c();
    func_0x00010774298c();
    func_0x000107742914();
    ___cxa_guard_abort(0x113725620);
    func_0x00010774297c();
    func_0x000107741ca8();
    if ((bRam0000000113725630 & 1) == 0) {
      iVar2 = 0x13725630;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        func_0x000107742934();
        func_0x00010774292c();
        func_0x000107742240();
        func_0x000107742e40();
        func_0x000107741bb4();
        unaff_x20 = 0x113725628;
        func_0x00010774185c();
        func_0x000107741a04();
        func_0x000107742a90();
        func_0x000107742944();
        unaff_x22 = 0x10;
        do {
          func_0x0001077429ac();
          func_0x000107742a1c();
        } while (!(bool)in_ZR);
        func_0x00010774291c();
        *unaff_x19 = &PTR_DAT_1109d2fa8;
        func_0x000107741cd0(FUN_107736914);
        func_0x000107742924();
      }
    }
    func_0x0001077419ec();
    if ((bool)in_ZR) {
      return 0x113725628;
    }
    ___stack_chk_fail();
    func_0x000107742e34();
    do {
      func_0x0001077429ac();
      func_0x000107742a1c();
    } while (!(bool)in_ZR);
    func_0x00010774291c();
    func_0x00010774298c();
    func_0x000107742914();
    ___cxa_guard_abort(0x113725630);
    func_0x00010774297c();
    func_0x000107741ca8();
    if ((bRam0000000113725640 & 1) == 0) {
      iVar2 = 0x13725640;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        func_0x000107742934();
        func_0x00010774292c();
        func_0x00010774230c();
        func_0x000107741d3c();
        unaff_x20 = 0x113725638;
        func_0x000107741810();
        func_0x000107741a04();
        func_0x000107742984();
        func_0x000107742944();
        func_0x00010774293c();
        func_0x00010774291c();
        *unaff_x19 = &PTR_DAT_1109d2fe8;
        func_0x000107741cd0(&UNK_107736b64);
        func_0x000107742924();
      }
    }
    func_0x0001077419ec();
    if ((bool)in_ZR) {
      uVar3 = 0x113725638;
    }
    else {
      ___stack_chk_fail();
      func_0x000107742144();
      func_0x00010774291c();
      func_0x00010774298c();
      func_0x000107742914();
      ___cxa_guard_abort(0x113725640);
      func_0x00010774297c();
      func_0x000107741ca8();
      if ((bRam0000000113725650 & 1) == 0) {
        iVar2 = 0x13725650;
        ___cxa_guard_acquire();
        if (iVar2 != 0) {
          func_0x000107742934();
          func_0x00010774292c();
          func_0x000107743174();
          func_0x000107741d3c();
          unaff_x20 = 0x113725648;
          func_0x000107741810();
          func_0x000107741a04();
          func_0x000107742984();
          func_0x000107742944();
          func_0x00010774293c();
          func_0x00010774291c();
          *unaff_x19 = &PTR_DAT_1109d3028;
          func_0x000107741cd0(&UNK_107736d60);
          func_0x000107742924();
        }
      }
      func_0x0001077419ec();
      if ((bool)in_ZR) {
        uVar3 = 0x113725648;
      }
      else {
        ___stack_chk_fail();
        func_0x000107742144();
        func_0x00010774291c();
        func_0x00010774298c();
        func_0x000107742914();
        ___cxa_guard_abort(0x113725650);
        func_0x00010774297c();
        func_0x000107741ca8();
        if ((bRam0000000113725660 & 1) == 0) {
          iVar2 = 0x13725660;
          ___cxa_guard_acquire();
          if (iVar2 != 0) {
            func_0x000107742934();
            func_0x00010774292c();
            func_0x000107743174();
            func_0x000107741d3c();
            unaff_x20 = 0x113725658;
            func_0x000107741810();
            func_0x000107741a04();
            func_0x000107742984();
            func_0x000107742944();
            func_0x00010774293c();
            func_0x00010774291c();
            *unaff_x19 = &PTR_DAT_1109d3068;
            func_0x000107741cd0(&UNK_107736fa4);
            func_0x000107742924();
          }
        }
        func_0x0001077419ec();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x000107742144();
          func_0x00010774291c();
          func_0x00010774298c();
          func_0x000107742914();
          ___cxa_guard_abort(0x113725660);
          func_0x00010774297c();
          func_0x000107741ca8();
          if ((bRam0000000113725670 & 1) == 0) {
            iVar2 = 0x13725670;
            ___cxa_guard_acquire();
            if (iVar2 != 0) {
              func_0x000107742934();
              func_0x00010774292c();
              func_0x000107742b9c();
              func_0x000107742da0();
              func_0x000107741bb4();
              unaff_x20 = 0x113725668;
              func_0x00010774185c();
              func_0x000107741a04();
              func_0x000107742a90();
              func_0x000107742944();
              unaff_x22 = 0x10;
              do {
                func_0x0001077429ac();
                func_0x000107742a1c();
              } while (!(bool)in_ZR);
              func_0x00010774291c();
              *unaff_x19 = &PTR_DAT_1109d30a8;
              func_0x000107741cd0(FUN_1077371e8);
              func_0x000107742924();
            }
          }
          func_0x0001077419ec();
          if ((bool)in_ZR) {
            return 0x113725668;
          }
          ___stack_chk_fail();
          func_0x000107742e34();
          do {
            func_0x0001077429ac();
            func_0x000107742a1c();
          } while (!(bool)in_ZR);
          func_0x00010774291c();
          func_0x00010774298c();
          func_0x000107742914();
          ___cxa_guard_abort(0x113725670);
          func_0x00010774297c();
          func_0x000107741ca8();
          if ((bRam0000000113725680 & 1) == 0) {
            iVar2 = 0x13725680;
            ___cxa_guard_acquire();
            if (iVar2 != 0) {
              func_0x000107742934();
              func_0x00010774292c();
              func_0x00010774251c();
              func_0x000107742da0();
              func_0x000107741bb4();
              unaff_x20 = 0x113725678;
              func_0x00010774185c();
              func_0x000107741a04();
              func_0x000107742a90();
              func_0x000107742944();
              unaff_x22 = 0x10;
              do {
                func_0x0001077429ac();
                func_0x000107742a1c();
              } while (!(bool)in_ZR);
              func_0x00010774291c();
              *unaff_x19 = &PTR_DAT_1109d30f8;
              func_0x000107741cd0(&UNK_107737668);
              func_0x000107742924();
            }
          }
          func_0x0001077419ec();
          if ((bool)in_ZR) {
            return 0x113725678;
          }
          ___stack_chk_fail();
          func_0x000107742e34();
          do {
            func_0x0001077429ac();
            func_0x000107742a1c();
          } while (!(bool)in_ZR);
          func_0x00010774291c();
          func_0x00010774298c();
          func_0x000107742914();
          ___cxa_guard_abort(0x113725680);
          func_0x00010774297c();
          lStack_610 = unaff_x22;
          func_0x000107741ca8();
          if ((bRam0000000113725690 & 1) == 0) {
            iVar2 = 0x13725690;
            ___cxa_guard_acquire();
            if (iVar2 != 0) {
              func_0x000107742934();
              func_0x00010774292c();
              func_0x000107742b9c();
              func_0x000107742da0();
              func_0x000107775500(auStack_650);
              func_0x000107741bb4();
              unaff_x20 = 0x113725688;
              func_0x00010774185c();
              func_0x000107741a04();
              func_0x000107742a90();
              func_0x000107742944();
              unaff_x22 = 0x10;
              do {
                func_0x0001077429ac();
                func_0x000107742a1c();
              } while (!(bool)in_ZR);
              func_0x00010774291c();
              *unaff_x19 = &PTR_DAT_1109d3138;
              func_0x000107741cd0(&UNK_107737910);
              func_0x000107742924();
            }
          }
          func_0x0001077419ec();
          if ((bool)in_ZR) {
            return 0x113725688;
          }
          ___stack_chk_fail();
          func_0x00010774281c();
          do {
            func_0x000107743108();
            func_0x00010774330c();
          } while (unaff_x22 != 0);
          func_0x00010774291c();
          func_0x00010774298c();
          func_0x000107742914();
          ___cxa_guard_abort(0x113725690);
          func_0x00010774297c();
          lStack_6f0 = unaff_x22;
          func_0x000107741ca8();
          lVar5 = 0;
          if ((bRam00000001137256a0 & 1) == 0) {
            puVar4 = (undefined8 *)0x1137256a0;
            ___cxa_guard_acquire();
            if ((int)puVar4 != 0) {
              func_0x000107742934();
              func_0x00010774292c();
              func_0x000107775500(auStack_740);
              uStack_728 = 3;
              func_0x000107741bb4();
              unaff_x20 = 0x113725698;
              func_0x00010774185c();
              func_0x000107741a04();
              func_0x000107742a90();
              func_0x000107742944();
              lVar5 = 0x10;
              do {
                func_0x0001077429ac();
                func_0x000107742a1c();
              } while (!(bool)in_ZR);
              func_0x00010774291c();
              *puVar4 = &PTR_DAT_1109d3178;
              func_0x000107741cd0(&UNK_107737c18);
              func_0x000107742924();
              unaff_x19 = puVar4;
            }
          }
          func_0x0001077419ec();
          if ((bool)in_ZR) {
            return 0x113725698;
          }
          ___stack_chk_fail();
          func_0x00010774281c();
          do {
            func_0x000107743108();
            func_0x00010774330c();
          } while (lVar5 != 0);
          func_0x00010774291c();
          func_0x00010774298c();
          func_0x000107742914();
          ___cxa_guard_abort(0x1137256a0);
          func_0x00010774297c();
          lStack_7d0 = lVar5;
          func_0x000107741ca8();
          bVar1 = false;
          if ((bRam00000001137256b0 & 1) == 0) {
            iVar2 = 0x137256b0;
            ___cxa_guard_acquire();
            if (iVar2 != 0) {
              func_0x000107742934();
              func_0x00010774292c();
              func_0x000107742b9c();
              func_0x000107742da0();
              func_0x000107775500(auStack_810);
              func_0x000107741bb4();
              unaff_x20 = 0x1137256a8;
              func_0x00010774185c();
              func_0x000107741a04();
              func_0x000107742a90();
              func_0x000107742944();
              bVar1 = true;
              do {
                func_0x0001077429ac();
                func_0x000107742a1c();
              } while (!(bool)in_ZR);
              func_0x00010774291c();
              *unaff_x19 = &PTR_DAT_1109d31b8;
              func_0x000107741cd0(&UNK_107737edc);
              func_0x000107742924();
            }
          }
          func_0x0001077419ec();
          if ((bool)in_ZR) {
            return 0x1137256a8;
          }
          ___stack_chk_fail();
          func_0x00010774281c();
          do {
            func_0x000107743108();
            func_0x00010774330c();
          } while (bVar1);
          func_0x00010774291c();
          func_0x00010774298c();
          func_0x000107742914();
          ___cxa_guard_abort(0x1137256b0);
          func_0x00010774297c();
          func_0x000107741ca8();
          if ((bRam00000001137256c0 & 1) == 0) {
            puVar4 = (undefined8 *)0x1137256c0;
            ___cxa_guard_acquire();
            if ((int)puVar4 != 0) {
              func_0x000107742934();
              func_0x00010774292c();
              unaff_x20 = 0x1137256b8;
              func_0x000107741c30(6);
              func_0x000107741a04();
              func_0x000107742984();
              func_0x000107742cb4();
              func_0x00010774291c();
              *puVar4 = &PTR_DAT_1109d31f8;
              func_0x000107741cd0(&UNK_107738154);
              func_0x000107742924();
              unaff_x19 = puVar4;
            }
          }
          func_0x0001077419ec();
          if ((bool)in_ZR) {
            return 0x1137256b8;
          }
          ___stack_chk_fail();
          func_0x00010774219c();
          ___cxa_guard_abort(0x1137256c0);
          func_0x000107742904();
          func_0x000107741ca8();
          bVar1 = false;
          if ((bRam00000001137256d0 & 1) == 0) {
            iVar2 = 0x137256d0;
            ___cxa_guard_acquire();
            if (iVar2 != 0) {
              func_0x000107742934();
              func_0x00010774292c();
              func_0x000107742b9c();
              func_0x00010774396c();
              func_0x000107775500(unaff_x20 + 0x10);
              func_0x000107741bb4();
              func_0x00010774185c();
              func_0x000107741a04();
              func_0x000107742a90();
              func_0x000107742944();
              bVar1 = true;
              do {
                func_0x0001077429ac();
                func_0x000107742a1c();
              } while (!(bool)in_ZR);
              func_0x00010774291c();
              *unaff_x19 = &PTR_FUN_1109d3238;
              func_0x000107741cd0(FUN_107738544);
              func_0x000107742924();
            }
          }
          func_0x0001077419ec();
          if ((bool)in_ZR) {
            return 0x1137256c8;
          }
          ___stack_chk_fail();
          func_0x00010774281c();
          do {
            func_0x000107743108();
            func_0x00010774330c();
          } while (bVar1);
          func_0x00010774291c();
          func_0x00010774298c();
          func_0x000107742914();
          do {
            ___cxa_guard_abort(0x1137256d0);
            func_0x00010774297c();
          } while( true );
        }
        uVar3 = 0x113725658;
      }
    }
  }
  return uVar3;
}



/* Entry: 107728184; end: 10772829f;  */

undefined8 FUN_107728184(void)

{
  bool bVar1;
  undefined1 in_ZR;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x22;
  undefined1 auStack_150 [64];
  long lStack_110;
  undefined1 auStack_80 [24];
  undefined4 uStack_68;
  
  func_0x000107741ca8();
  if ((bRam00000001137256a0 & 1) == 0) {
    puVar3 = (undefined8 *)0x1137256a0;
    ___cxa_guard_acquire();
    if ((int)puVar3 != 0) {
      func_0x000107742934();
      func_0x00010774292c();
      func_0x000107775500(auStack_80);
      uStack_68 = 3;
      func_0x000107741bb4();
      unaff_x20 = 0x113725698;
      func_0x00010774185c();
      func_0x000107741a04();
      func_0x000107742a90();
      func_0x000107742944();
      unaff_x22 = 0x10;
      do {
        func_0x0001077429ac();
        func_0x000107742a1c();
      } while (!(bool)in_ZR);
      func_0x00010774291c();
      *puVar3 = &PTR_DAT_1109d3178;
      func_0x000107741cd0(&UNK_107737c18);
      func_0x000107742924();
      unaff_x19 = puVar3;
    }
  }
  func_0x0001077419ec();
  if ((bool)in_ZR) {
    uVar4 = 0x113725698;
  }
  else {
    ___stack_chk_fail();
    func_0x00010774281c();
    do {
      func_0x000107743108();
      func_0x00010774330c();
    } while (unaff_x22 != 0);
    func_0x00010774291c();
    func_0x00010774298c();
    func_0x000107742914();
    ___cxa_guard_abort(0x1137256a0);
    func_0x00010774297c();
    lStack_110 = unaff_x22;
    func_0x000107741ca8();
    bVar1 = false;
    if ((bRam00000001137256b0 & 1) == 0) {
      iVar2 = 0x137256b0;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        func_0x000107742934();
        func_0x00010774292c();
        func_0x000107742b9c();
        func_0x000107742da0();
        func_0x000107775500(auStack_150);
        func_0x000107741bb4();
        unaff_x20 = 0x1137256a8;
        func_0x00010774185c();
        func_0x000107741a04();
        func_0x000107742a90();
        func_0x000107742944();
        bVar1 = true;
        do {
          func_0x0001077429ac();
          func_0x000107742a1c();
        } while (!(bool)in_ZR);
        func_0x00010774291c();
        *unaff_x19 = &PTR_DAT_1109d31b8;
        func_0x000107741cd0(&UNK_107737edc);
        func_0x000107742924();
      }
    }
    func_0x0001077419ec();
    if ((bool)in_ZR) {
      uVar4 = 0x1137256a8;
    }
    else {
      ___stack_chk_fail();
      func_0x00010774281c();
      do {
        func_0x000107743108();
        func_0x00010774330c();
      } while (bVar1);
      func_0x00010774291c();
      func_0x00010774298c();
      func_0x000107742914();
      ___cxa_guard_abort(0x1137256b0);
      func_0x00010774297c();
      func_0x000107741ca8();
      if ((bRam00000001137256c0 & 1) == 0) {
        puVar3 = (undefined8 *)0x1137256c0;
        ___cxa_guard_acquire();
        if ((int)puVar3 != 0) {
          func_0x000107742934();
          func_0x00010774292c();
          unaff_x20 = 0x1137256b8;
          func_0x000107741c30(6);
          func_0x000107741a04();
          func_0x000107742984();
          func_0x000107742cb4();
          func_0x00010774291c();
          *puVar3 = &PTR_DAT_1109d31f8;
          func_0x000107741cd0(&UNK_107738154);
          func_0x000107742924();
          unaff_x19 = puVar3;
        }
      }
      func_0x0001077419ec();
      if ((bool)in_ZR) {
        return 0x1137256b8;
      }
      ___stack_chk_fail();
      func_0x00010774219c();
      ___cxa_guard_abort(0x1137256c0);
      func_0x000107742904();
      func_0x000107741ca8();
      bVar1 = false;
      if ((bRam00000001137256d0 & 1) == 0) {
        iVar2 = 0x137256d0;
        ___cxa_guard_acquire();
        if (iVar2 != 0) {
          func_0x000107742934();
          func_0x00010774292c();
          func_0x000107742b9c();
          func_0x00010774396c();
          func_0x000107775500(unaff_x20 + 0x10);
          func_0x000107741bb4();
          func_0x00010774185c();
          func_0x000107741a04();
          func_0x000107742a90();
          func_0x000107742944();
          bVar1 = true;
          do {
            func_0x0001077429ac();
            func_0x000107742a1c();
          } while (!(bool)in_ZR);
          func_0x00010774291c();
          *unaff_x19 = &PTR_FUN_1109d3238;
          func_0x000107741cd0(FUN_107738544);
          func_0x000107742924();
        }
      }
      func_0x0001077419ec();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x00010774281c();
        do {
          func_0x000107743108();
          func_0x00010774330c();
        } while (bVar1);
        func_0x00010774291c();
        func_0x00010774298c();
        func_0x000107742914();
        do {
          ___cxa_guard_abort(0x1137256d0);
          func_0x00010774297c();
        } while( true );
      }
      uVar4 = 0x1137256c8;
    }
  }
  return uVar4;
}



/* Entry: 1077298ac; end: 107729977;  */

long * FUN_1077298ac(undefined8 param_1,code *param_2)

{
  undefined8 ****ppppuVar1;
  ulong uVar2;
  long lVar3;
  undefined1 in_ZR;
  undefined1 uVar4;
  int iVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong *puVar8;
  ulong *puVar9;
  long *plVar10;
  undefined *puVar11;
  undefined *puVar12;
  bool bVar13;
  undefined8 extraout_x8;
  undefined8 *unaff_x19;
  long lVar14;
  long unaff_x21;
  ulong uVar15;
  undefined8 unaff_x22;
  long lVar16;
  long lVar17;
  undefined *puStack_1ac0;
  undefined *puStack_1ab8;
  undefined *puStack_1ab0;
  long *plStack_1aa8;
  undefined8 ***pppuStack_1aa0;
  code *pcStack_1a98;
  long *plStack_1a90;
  undefined1 auStack_1a88 [24];
  long lStack_1a70;
  long lStack_1a68;
  undefined8 uStack_1a60;
  long lStack_1a58;
  long lStack_1a50;
  undefined8 uStack_1a48;
  undefined1 auStack_1a40 [24];
  undefined8 uStack_1a28;
  ulong uStack_1a20;
  undefined8 uStack_1a18;
  undefined8 ***pppuStack_1a10;
  ulong uStack_1a08;
  undefined8 uStack_1a00;
  char *pcStack_19f8;
  char *pcStack_19f0;
  undefined8 uStack_19c0;
  undefined8 ***pppuStack_1960;
  undefined *puStack_1958;
  undefined1 auStack_1938 [120];
  undefined8 uStack_18c0;
  undefined8 ***pppuStack_18a0;
  undefined *puStack_1898;
  undefined8 uStack_17f0;
  undefined8 ***pppuStack_17d0;
  undefined *puStack_17c8;
  undefined8 uStack_1720;
  undefined8 ***pppuStack_1700;
  undefined *puStack_16f8;
  undefined8 uStack_1660;
  undefined8 ***pppuStack_1640;
  undefined *puStack_1638;
  undefined8 uStack_15a0;
  undefined8 ***pppuStack_1580;
  undefined *puStack_1578;
  undefined8 uStack_14e0;
  undefined8 ***pppuStack_14c0;
  undefined *puStack_14b8;
  undefined4 uStack_1490;
  undefined8 uStack_1420;
  undefined8 ***pppuStack_1400;
  code *pcStack_13f8;
  undefined8 uStack_1360;
  undefined8 ***pppuStack_1340;
  undefined *puStack_1338;
  undefined8 uStack_1290;
  undefined8 ***pppuStack_1270;
  undefined *puStack_1268;
  undefined8 uStack_11c0;
  undefined8 ***pppuStack_11a0;
  undefined *puStack_1198;
  undefined8 uStack_10f0;
  undefined8 ***pppuStack_10d0;
  undefined *puStack_10c8;
  undefined8 uStack_1010;
  undefined8 ***pppuStack_ff0;
  undefined *puStack_fe8;
  undefined8 uStack_f30;
  undefined8 ***pppuStack_f10;
  undefined *puStack_f08;
  undefined8 uStack_e60;
  undefined8 ***pppuStack_e40;
  undefined *puStack_e38;
  undefined8 uStack_d90;
  undefined8 ***pppuStack_d70;
  code *pcStack_d68;
  undefined8 uStack_cb0;
  undefined8 ***pppuStack_c90;
  undefined *puStack_c88;
  undefined8 uStack_bd0;
  undefined8 ***pppuStack_bb0;
  undefined *puStack_ba8;
  undefined8 uStack_b00;
  undefined8 ***pppuStack_ae0;
  undefined *puStack_ad8;
  undefined8 uStack_a30;
  undefined8 ***pppuStack_a10;
  undefined *puStack_a08;
  undefined8 uStack_950;
  undefined8 ***pppuStack_930;
  undefined *puStack_928;
  undefined8 uStack_870;
  undefined8 ***pppuStack_850;
  undefined *puStack_848;
  undefined8 uStack_7a0;
  undefined8 ***pppuStack_780;
  undefined *puStack_778;
  undefined8 uStack_6d0;
  undefined8 ***pppuStack_6b0;
  code *pcStack_6a8;
  undefined8 uStack_5f0;
  undefined8 ***pppuStack_5d0;
  undefined *puStack_5c8;
  undefined8 uStack_510;
  undefined8 ***pppuStack_4f0;
  undefined *puStack_4e8;
  undefined8 uStack_440;
  undefined8 ***pppuStack_420;
  undefined *puStack_418;
  undefined8 uStack_370;
  undefined8 ***pppuStack_350;
  undefined *puStack_348;
  undefined4 uStack_2c8;
  undefined1 ***pppuStack_270;
  undefined *puStack_268;
  undefined1 **ppuStack_1a0;
  undefined *puStack_198;
  undefined1 *puStack_d0;
  undefined *puStack_c8;
  
  func_0x000107741ca8();
  if ((bRam0000000113725820 & 1) == 0) {
    puVar6 = (undefined8 *)0x113725820;
    ___cxa_guard_acquire();
    if ((int)puVar6 != 0) {
      func_0x000107742934();
      func_0x00010774292c();
      func_0x000107741c30(6);
      param_2 = (code *)&UNK_10773c960;
      func_0x000107741a04();
      func_0x000107742984();
      func_0x000107742cb4();
      func_0x00010774291c();
      *puVar6 = &PTR_DAT_1109d3808;
      func_0x000107741cd0(&UNK_10773c7a4);
      func_0x000107742924();
      unaff_x19 = puVar6;
    }
  }
  func_0x0001077419ec();
  if ((bool)in_ZR) {
    return (long *)0x113725818;
  }
  ___stack_chk_fail();
  func_0x00010774219c();
  ___cxa_guard_abort(0x113725820);
  func_0x000107742904();
  puStack_c8 = &DAT_107729978;
  puStack_d0 = &stack0xfffffffffffffff0;
  func_0x000107741ca8();
  if ((bRam0000000113725830 & 1) == 0) {
    iVar5 = 0x13725830;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x000107742934();
      func_0x00010774292c();
      func_0x000107742334();
      func_0x000107742da0();
      func_0x000107741d3c();
      func_0x000107741810();
      param_2 = (code *)&UNK_10773cd4c;
      func_0x000107741a04();
      func_0x000107742984();
      func_0x000107742944();
      func_0x00010774293c();
      func_0x00010774291c();
      *unaff_x19 = &PTR_DAT_1109d3848;
      func_0x000107741cd0(&UNK_10773cb58);
      func_0x000107742924();
    }
  }
  func_0x0001077419ec();
  if ((bool)in_ZR) {
    plVar7 = (long *)0x113725828;
  }
  else {
    ___stack_chk_fail();
    func_0x000107742144();
    func_0x00010774291c();
    func_0x00010774298c();
    func_0x000107742914();
    ___cxa_guard_abort(0x113725830);
    func_0x00010774297c();
    puStack_198 = &DAT_107729a60;
    ppuStack_1a0 = &puStack_d0;
    func_0x000107741ca8();
    if ((bRam0000000113725840 & 1) == 0) {
      iVar5 = 0x13725840;
      ___cxa_guard_acquire();
      if (iVar5 != 0) {
        func_0x000107742934();
        func_0x00010774292c();
        func_0x000107743174();
        func_0x000107741d3c();
        func_0x000107741810();
        param_2 = (code *)&UNK_10773d054;
        func_0x000107741a04();
        func_0x000107742984();
        func_0x000107742944();
        func_0x00010774293c();
        func_0x00010774291c();
        *unaff_x19 = &PTR_FUN_1109d3888;
        func_0x000107741cd0(&UNK_10773cf04);
        func_0x000107742924();
      }
    }
    func_0x0001077419ec();
    if ((bool)in_ZR) {
      plVar7 = (long *)0x113725838;
    }
    else {
      ___stack_chk_fail();
      func_0x000107742144();
      func_0x00010774291c();
      func_0x00010774298c();
      func_0x000107742914();
      ___cxa_guard_abort(0x113725840);
      func_0x00010774297c();
      puStack_268 = &DAT_107729b48;
      pppuStack_270 = &ppuStack_1a0;
      func_0x000107741ca8();
      if ((bRam0000000113725850 & 1) == 0) {
        iVar5 = 0x13725850;
        ___cxa_guard_acquire();
        if (iVar5 != 0) {
          func_0x000107742934();
          func_0x00010774292c();
          func_0x000107742240();
          uStack_2c8 = 6;
          func_0x000107741bb4();
          func_0x00010774185c();
          param_2 = (code *)&UNK_10773d2a0;
          func_0x000107741a04();
          func_0x000107742a90();
          func_0x000107742944();
          unaff_x22 = 0x10;
          do {
            func_0x0001077429ac();
            func_0x000107742a1c();
          } while (!(bool)in_ZR);
          func_0x00010774291c();
          *unaff_x19 = &PTR_DAT_1109d38c8;
          func_0x000107741cd0(&UNK_10773d224);
          func_0x000107742924();
        }
      }
      func_0x0001077419ec();
      if ((bool)in_ZR) {
        return (long *)0x113725848;
      }
      ___stack_chk_fail();
      func_0x000107742e34();
      do {
        func_0x0001077429ac();
        func_0x000107742a1c();
      } while (!(bool)in_ZR);
      func_0x00010774291c();
      func_0x00010774298c();
      func_0x000107742914();
      ___cxa_guard_abort(0x113725850);
      func_0x00010774297c();
      puStack_348 = &DAT_107729c54;
      uStack_370 = unaff_x22;
      pppuStack_350 = &pppuStack_270;
      func_0x000107741ca8();
      if ((bRam0000000113725860 & 1) == 0) {
        iVar5 = 0x13725860;
        ___cxa_guard_acquire();
        if (iVar5 != 0) {
          func_0x000107742934();
          func_0x00010774292c();
          func_0x0001077425c0();
          func_0x0001077438b4();
          func_0x000107741d3c();
          func_0x000107741810();
          param_2 = (code *)&UNK_10773d51c;
          func_0x000107741a04();
          func_0x000107742984();
          func_0x000107742944();
          func_0x00010774293c();
          func_0x00010774291c();
          *unaff_x19 = &PTR_DAT_1109d3908;
          func_0x000107741cd0(&UNK_10773d4ac);
          func_0x000107742924();
        }
      }
      func_0x0001077419ec();
      if ((bool)in_ZR) {
        plVar7 = (long *)0x113725858;
      }
      else {
        ___stack_chk_fail();
        func_0x000107742144();
        func_0x00010774291c();
        func_0x00010774298c();
        func_0x000107742914();
        ___cxa_guard_abort(0x113725860);
        func_0x00010774297c();
        puStack_418 = &DAT_107729d3c;
        uStack_440 = unaff_x22;
        pppuStack_420 = &pppuStack_350;
        func_0x000107741ca8();
        if ((bRam0000000113725870 & 1) == 0) {
          iVar5 = 0x13725870;
          ___cxa_guard_acquire();
          if (iVar5 != 0) {
            func_0x000107742934();
            func_0x00010774292c();
            func_0x00010774230c();
            func_0x000107741d3c();
            func_0x000107741810();
            param_2 = (code *)&UNK_10773d774;
            func_0x000107741a04();
            func_0x000107742984();
            func_0x000107742944();
            func_0x00010774293c();
            func_0x00010774291c();
            *unaff_x19 = &PTR_DAT_1109d3948;
            func_0x000107741cd0(&UNK_10773d6cc);
            func_0x000107742924();
          }
        }
        func_0x0001077419ec();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x000107742144();
          func_0x00010774291c();
          func_0x00010774298c();
          func_0x000107742914();
          ___cxa_guard_abort(0x113725870);
          func_0x00010774297c();
          puStack_4e8 = &DAT_107729e20;
          uStack_510 = unaff_x22;
          pppuStack_4f0 = &pppuStack_420;
          func_0x000107741ca8();
          if ((bRam0000000113725880 & 1) == 0) {
            iVar5 = 0x13725880;
            ___cxa_guard_acquire();
            if (iVar5 != 0) {
              func_0x000107742934();
              func_0x00010774292c();
              func_0x000107742240();
              func_0x0001077433bc();
              func_0x000107741bb4();
              func_0x00010774185c();
              param_2 = (code *)&UNK_10773d950;
              func_0x000107741a04();
              func_0x000107742a90();
              func_0x000107742944();
              unaff_x22 = 0x10;
              do {
                func_0x0001077429ac();
                func_0x000107742a1c();
              } while (!(bool)in_ZR);
              func_0x00010774291c();
              *unaff_x19 = &PTR_DAT_1109d3988;
              func_0x000107741cd0(&UNK_10773d928);
              func_0x000107742924();
            }
          }
          func_0x0001077419ec();
          if ((bool)in_ZR) {
            plVar7 = (long *)0x113725878;
          }
          else {
            ___stack_chk_fail();
            func_0x000107742e34();
            do {
              func_0x0001077429ac();
              func_0x000107742a1c();
            } while (!(bool)in_ZR);
            func_0x00010774291c();
            func_0x00010774298c();
            func_0x000107742914();
            ___cxa_guard_abort(0x113725880);
            func_0x00010774297c();
            puStack_5c8 = &DAT_107729f24;
            uStack_5f0 = unaff_x22;
            pppuStack_5d0 = &pppuStack_4f0;
            func_0x000107741ca8();
            if ((bRam0000000113725890 & 1) == 0) {
              iVar5 = 0x13725890;
              ___cxa_guard_acquire();
              if (iVar5 != 0) {
                func_0x000107742934();
                func_0x00010774292c();
                func_0x000107742240();
                func_0x000107742e40();
                func_0x000107741bb4();
                func_0x00010774185c();
                param_2 = (code *)&UNK_10773db9c;
                func_0x000107741a04();
                func_0x000107742a90();
                func_0x000107742944();
                unaff_x22 = 0x10;
                do {
                  func_0x0001077429ac();
                  func_0x000107742a1c();
                } while (!(bool)in_ZR);
                func_0x00010774291c();
                *unaff_x19 = &PTR_DAT_1109d39c8;
                func_0x000107741cd0(&UNK_10773db38);
                func_0x000107742924();
              }
            }
            func_0x0001077419ec();
            if (!(bool)in_ZR) {
              ___stack_chk_fail();
              func_0x000107742e34();
              do {
                func_0x0001077429ac();
                func_0x000107742a1c();
              } while (!(bool)in_ZR);
              func_0x00010774291c();
              func_0x00010774298c();
              func_0x000107742914();
              ___cxa_guard_abort(0x113725890);
              func_0x00010774297c();
              pcStack_6a8 = FUN_10772a028;
              uStack_6d0 = unaff_x22;
              pppuStack_6b0 = &pppuStack_5d0;
              func_0x000107741ca8();
              if ((bRam00000001137258a0 & 1) == 0) {
                iVar5 = 0x137258a0;
                ___cxa_guard_acquire();
                if (iVar5 != 0) {
                  func_0x000107742934();
                  func_0x00010774292c();
                  func_0x0001077425c0();
                  func_0x000107743bb8();
                  func_0x000107741d3c();
                  func_0x000107741810();
                  param_2 = (code *)&UNK_10773ddd8;
                  func_0x000107741a04();
                  func_0x000107742984();
                  func_0x000107742944();
                  func_0x00010774293c();
                  func_0x00010774291c();
                  *unaff_x19 = &PTR_DAT_1109d3a08;
                  func_0x000107741cd0(FUN_10773ddb0);
                  func_0x000107742924();
                }
              }
              func_0x0001077419ec();
              if ((bool)in_ZR) {
                return (long *)0x113725898;
              }
              ___stack_chk_fail();
              func_0x000107742144();
              func_0x00010774291c();
              func_0x00010774298c();
              func_0x000107742914();
              ___cxa_guard_abort(0x1137258a0);
              func_0x00010774297c();
              puStack_778 = &DAT_10772a110;
              uStack_7a0 = unaff_x22;
              pppuStack_780 = &pppuStack_6b0;
              func_0x000107741ca8();
              if ((bRam00000001137258b0 & 1) == 0) {
                iVar5 = 0x137258b0;
                ___cxa_guard_acquire();
                if (iVar5 != 0) {
                  func_0x000107742934();
                  func_0x00010774292c();
                  func_0x00010774230c();
                  func_0x000107741d3c();
                  func_0x000107741810();
                  param_2 = (code *)&UNK_10773dfd8;
                  func_0x000107741a04();
                  func_0x000107742984();
                  func_0x000107742944();
                  func_0x00010774293c();
                  func_0x00010774291c();
                  *unaff_x19 = &PTR_FUN_1109d3a48;
                  func_0x000107741cd0(&UNK_10773df70);
                  func_0x000107742924();
                }
              }
              func_0x0001077419ec();
              if ((bool)in_ZR) {
                return (long *)0x1137258a8;
              }
              ___stack_chk_fail();
              func_0x000107742144();
              func_0x00010774291c();
              func_0x00010774298c();
              func_0x000107742914();
              ___cxa_guard_abort(0x1137258b0);
              func_0x00010774297c();
              puStack_848 = &DAT_10772a1f4;
              uStack_870 = unaff_x22;
              pppuStack_850 = &pppuStack_780;
              func_0x000107741ca8();
              if ((bRam00000001137258c0 & 1) == 0) {
                iVar5 = 0x137258c0;
                ___cxa_guard_acquire();
                if (iVar5 != 0) {
                  func_0x000107742934();
                  func_0x00010774292c();
                  func_0x000107742240();
                  func_0x0001077433bc();
                  func_0x000107741bb4();
                  func_0x00010774185c();
                  param_2 = (code *)&UNK_10773e1b4;
                  func_0x000107741a04();
                  func_0x000107742a90();
                  func_0x000107742944();
                  unaff_x22 = 0x10;
                  do {
                    func_0x0001077429ac();
                    func_0x000107742a1c();
                  } while (!(bool)in_ZR);
                  func_0x00010774291c();
                  *unaff_x19 = &PTR_DAT_1109d3a88;
                  func_0x000107741cd0(&UNK_10773e18c);
                  func_0x000107742924();
                }
              }
              func_0x0001077419ec();
              if ((bool)in_ZR) {
                return (long *)0x1137258b8;
              }
              ___stack_chk_fail();
              func_0x000107742e34();
              do {
                func_0x0001077429ac();
                func_0x000107742a1c();
              } while (!(bool)in_ZR);
              func_0x00010774291c();
              func_0x00010774298c();
              func_0x000107742914();
              ___cxa_guard_abort(0x1137258c0);
              func_0x00010774297c();
              puStack_928 = &DAT_10772a2f8;
              uStack_950 = unaff_x22;
              pppuStack_930 = &pppuStack_850;
              func_0x000107741ca8();
              if ((bRam00000001137258d0 & 1) == 0) {
                iVar5 = 0x137258d0;
                ___cxa_guard_acquire();
                if (iVar5 != 0) {
                  func_0x000107742934();
                  func_0x00010774292c();
                  func_0x000107742240();
                  func_0x000107742e40();
                  func_0x000107741bb4();
                  func_0x00010774185c();
                  param_2 = (code *)&UNK_10773e400;
                  func_0x000107741a04();
                  func_0x000107742a90();
                  func_0x000107742944();
                  unaff_x22 = 0x10;
                  do {
                    func_0x0001077429ac();
                    func_0x000107742a1c();
                  } while (!(bool)in_ZR);
                  func_0x00010774291c();
                  *unaff_x19 = &PTR_DAT_1109d3ac8;
                  func_0x000107741cd0(FUN_10773e39c);
                  func_0x000107742924();
                }
              }
              func_0x0001077419ec();
              if ((bool)in_ZR) {
                return (long *)0x1137258c8;
              }
              ___stack_chk_fail();
              func_0x000107742e34();
              do {
                func_0x0001077429ac();
                func_0x000107742a1c();
              } while (!(bool)in_ZR);
              func_0x00010774291c();
              func_0x00010774298c();
              func_0x000107742914();
              ___cxa_guard_abort(0x1137258d0);
              func_0x00010774297c();
              puStack_a08 = &DAT_10772a3fc;
              uStack_a30 = unaff_x22;
              pppuStack_a10 = &pppuStack_930;
              func_0x000107741ca8();
              if ((bRam00000001137258e0 & 1) == 0) {
                iVar5 = 0x137258e0;
                ___cxa_guard_acquire();
                if (iVar5 != 0) {
                  func_0x000107742934();
                  func_0x00010774292c();
                  func_0x0001077425c0();
                  func_0x000107743bb8();
                  func_0x000107741d3c();
                  func_0x000107741810();
                  param_2 = (code *)&UNK_10773e63c;
                  func_0x000107741a04();
                  func_0x000107742984();
                  func_0x000107742944();
                  func_0x00010774293c();
                  func_0x00010774291c();
                  *unaff_x19 = &PTR_FUN_1109d3b08;
                  func_0x000107741cd0(&UNK_10773e614);
                  func_0x000107742924();
                }
              }
              func_0x0001077419ec();
              if ((bool)in_ZR) {
                return (long *)0x1137258d8;
              }
              ___stack_chk_fail();
              func_0x000107742144();
              func_0x00010774291c();
              func_0x00010774298c();
              func_0x000107742914();
              ___cxa_guard_abort(0x1137258e0);
              func_0x00010774297c();
              puStack_ad8 = &DAT_10772a4e4;
              uStack_b00 = unaff_x22;
              pppuStack_ae0 = &pppuStack_a10;
              func_0x000107741ca8();
              if ((bRam00000001137258f0 & 1) == 0) {
                iVar5 = 0x137258f0;
                ___cxa_guard_acquire();
                if (iVar5 != 0) {
                  func_0x000107742934();
                  func_0x00010774292c();
                  func_0x00010774230c();
                  func_0x000107741d3c();
                  func_0x000107741810();
                  param_2 = (code *)&UNK_10773e83c;
                  func_0x000107741a04();
                  func_0x000107742984();
                  func_0x000107742944();
                  func_0x00010774293c();
                  func_0x00010774291c();
                  *unaff_x19 = &PTR_DAT_1109d3b48;
                  func_0x000107741cd0(&UNK_10773e7d4);
                  func_0x000107742924();
                }
              }
              func_0x0001077419ec();
              if ((bool)in_ZR) {
                return (long *)0x1137258e8;
              }
              ___stack_chk_fail();
              func_0x000107742144();
              func_0x00010774291c();
              func_0x00010774298c();
              func_0x000107742914();
              ___cxa_guard_abort(0x1137258f0);
              func_0x00010774297c();
              puStack_ba8 = &DAT_10772a5c8;
              uStack_bd0 = unaff_x22;
              pppuStack_bb0 = &pppuStack_ae0;
              func_0x000107741ca8();
              if ((bRam0000000113725900 & 1) == 0) {
                iVar5 = 0x13725900;
                ___cxa_guard_acquire();
                if (iVar5 != 0) {
                  func_0x000107742934();
                  func_0x00010774292c();
                  func_0x000107742240();
                  func_0x0001077433bc();
                  func_0x000107741bb4();
                  func_0x00010774185c();
                  param_2 = (code *)&UNK_10773ea18;
                  func_0x000107741a04();
                  func_0x000107742a90();
                  func_0x000107742944();
                  unaff_x22 = 0x10;
                  do {
                    func_0x0001077429ac();
                    func_0x000107742a1c();
                  } while (!(bool)in_ZR);
                  func_0x00010774291c();
                  *unaff_x19 = &PTR_DAT_1109d3b88;
                  func_0x000107741cd0(&UNK_10773e9f0);
                  func_0x000107742924();
                }
              }
              func_0x0001077419ec();
              if ((bool)in_ZR) {
                return (long *)0x1137258f8;
              }
              ___stack_chk_fail();
              func_0x000107742e34();
              do {
                func_0x0001077429ac();
                func_0x000107742a1c();
              } while (!(bool)in_ZR);
              func_0x00010774291c();
              func_0x00010774298c();
              func_0x000107742914();
              ___cxa_guard_abort(0x113725900);
              func_0x00010774297c();
              puStack_c88 = &DAT_10772a6cc;
              uStack_cb0 = unaff_x22;
              pppuStack_c90 = &pppuStack_bb0;
              func_0x000107741ca8();
              if ((bRam0000000113725910 & 1) == 0) {
                iVar5 = 0x13725910;
                ___cxa_guard_acquire();
                if (iVar5 != 0) {
                  func_0x000107742934();
                  func_0x00010774292c();
                  func_0x000107742240();
                  func_0x000107742e40();
                  func_0x000107741bb4();
                  func_0x00010774185c();
                  param_2 = FUN_10773ec78;
                  func_0x000107741a04();
                  func_0x000107742a90();
                  func_0x000107742944();
                  unaff_x22 = 0x10;
                  do {
                    func_0x0001077429ac();
                    func_0x000107742a1c();
                  } while (!(bool)in_ZR);
                  func_0x00010774291c();
                  *unaff_x19 = &PTR_DAT_1109d3bc8;
                  func_0x000107741cd0(&UNK_10773ec00);
                  func_0x000107742924();
                }
              }
              func_0x0001077419ec();
              if ((bool)in_ZR) {
                return (long *)0x113725908;
              }
              ___stack_chk_fail();
              func_0x000107742e34();
              do {
                func_0x0001077429ac();
                func_0x000107742a1c();
              } while (!(bool)in_ZR);
              func_0x00010774291c();
              func_0x00010774298c();
              func_0x000107742914();
              ___cxa_guard_abort(0x113725910);
              func_0x00010774297c();
              pcStack_d68 = FUN_10772a7d0;
              uStack_d90 = unaff_x22;
              pppuStack_d70 = &pppuStack_c90;
              func_0x000107741ca8();
              if ((bRam0000000113725920 & 1) == 0) {
                iVar5 = 0x13725920;
                ___cxa_guard_acquire();
                if (iVar5 != 0) {
                  func_0x000107742934();
                  func_0x00010774292c();
                  func_0x0001077425c0();
                  func_0x000107743bb8();
                  func_0x000107741d3c();
                  func_0x000107741810();
                  param_2 = (code *)&UNK_10773eeb4;
                  func_0x000107741a04();
                  func_0x000107742984();
                  func_0x000107742944();
                  func_0x00010774293c();
                  func_0x00010774291c();
                  *unaff_x19 = &PTR_DAT_1109d3c08;
                  func_0x000107741cd0(&UNK_10773ee8c);
                  func_0x000107742924();
                }
              }
              func_0x0001077419ec();
              if ((bool)in_ZR) {
                return (long *)0x113725918;
              }
              ___stack_chk_fail();
              func_0x000107742144();
              func_0x00010774291c();
              func_0x00010774298c();
              func_0x000107742914();
              ___cxa_guard_abort(0x113725920);
              func_0x00010774297c();
              puStack_e38 = &DAT_10772a8b8;
              uStack_e60 = unaff_x22;
              pppuStack_e40 = &pppuStack_d70;
              func_0x000107741ca8();
              if ((bRam0000000113725930 & 1) == 0) {
                iVar5 = 0x13725930;
                ___cxa_guard_acquire();
                if (iVar5 != 0) {
                  func_0x000107742934();
                  func_0x00010774292c();
                  func_0x00010774230c();
                  func_0x000107741d3c();
                  func_0x000107741810();
                  param_2 = (code *)&UNK_10773f0b4;
                  func_0x000107741a04();
                  func_0x000107742984();
                  func_0x000107742944();
                  func_0x00010774293c();
                  func_0x00010774291c();
                  *unaff_x19 = &PTR_DAT_1109d3c48;
                  func_0x000107741cd0(&UNK_10773f04c);
                  func_0x000107742924();
                }
              }
              func_0x0001077419ec();
              if ((bool)in_ZR) {
                return (long *)0x113725928;
              }
              ___stack_chk_fail();
              func_0x000107742144();
              func_0x00010774291c();
              func_0x00010774298c();
              func_0x000107742914();
              ___cxa_guard_abort(0x113725930);
              func_0x00010774297c();
              puStack_f08 = &DAT_10772a99c;
              uStack_f30 = unaff_x22;
              pppuStack_f10 = &pppuStack_e40;
              func_0x000107741ca8();
              if ((bRam0000000113725940 & 1) == 0) {
                iVar5 = 0x13725940;
                ___cxa_guard_acquire();
                if (iVar5 != 0) {
                  func_0x000107742934();
                  func_0x00010774292c();
                  func_0x000107742240();
                  func_0x0001077433bc();
                  func_0x000107741bb4();
                  func_0x00010774185c();
                  param_2 = FUN_10773f290;
                  func_0x000107741a04();
                  func_0x000107742a90();
                  func_0x000107742944();
                  unaff_x22 = 0x10;
                  do {
                    func_0x0001077429ac();
                    func_0x000107742a1c();
                  } while (!(bool)in_ZR);
                  func_0x00010774291c();
                  *unaff_x19 = &PTR_DAT_1109d3c88;
                  func_0x000107741cd0(&UNK_10773f268);
                  func_0x000107742924();
                }
              }
              func_0x0001077419ec();
              if ((bool)in_ZR) {
                return (long *)0x113725938;
              }
              ___stack_chk_fail();
              func_0x000107742e34();
              do {
                func_0x0001077429ac();
                func_0x000107742a1c();
              } while (!(bool)in_ZR);
              func_0x00010774291c();
              func_0x00010774298c();
              func_0x000107742914();
              ___cxa_guard_abort(0x113725940);
              func_0x00010774297c();
              puStack_fe8 = &DAT_10772aaa0;
              uStack_1010 = unaff_x22;
              pppuStack_ff0 = &pppuStack_f10;
              func_0x000107741ca8();
              if ((bRam0000000113725950 & 1) == 0) {
                iVar5 = 0x13725950;
                ___cxa_guard_acquire();
                if (iVar5 != 0) {
                  func_0x000107742934();
                  func_0x00010774292c();
                  func_0x000107742240();
                  func_0x000107742e40();
                  func_0x000107741bb4();
                  func_0x00010774185c();
                  param_2 = (code *)&UNK_10773f4f0;
                  func_0x000107741a04();
                  func_0x000107742a90();
                  func_0x000107742944();
                  unaff_x22 = 0x10;
                  do {
                    func_0x0001077429ac();
                    func_0x000107742a1c();
                  } while (!(bool)in_ZR);
                  func_0x00010774291c();
                  *unaff_x19 = &PTR_DAT_1109d3cc8;
                  func_0x000107741cd0(&UNK_10773f478);
                  func_0x000107742924();
                }
              }
              func_0x0001077419ec();
              if ((bool)in_ZR) {
                return (long *)0x113725948;
              }
              ___stack_chk_fail();
              func_0x000107742e34();
              do {
                func_0x0001077429ac();
                func_0x000107742a1c();
              } while (!(bool)in_ZR);
              func_0x00010774291c();
              func_0x00010774298c();
              func_0x000107742914();
              ___cxa_guard_abort(0x113725950);
              func_0x00010774297c();
              puStack_10c8 = &DAT_10772aba4;
              uStack_10f0 = unaff_x22;
              pppuStack_10d0 = &pppuStack_ff0;
              func_0x000107741ca8();
              if ((bRam0000000113725960 & 1) == 0) {
                iVar5 = 0x13725960;
                ___cxa_guard_acquire();
                if (iVar5 != 0) {
                  func_0x000107742934();
                  func_0x00010774292c();
                  func_0x0001077425c0();
                  func_0x000107743bb8();
                  func_0x000107741d3c();
                  func_0x000107741810();
                  param_2 = (code *)&UNK_10773f72c;
                  func_0x000107741a04();
                  func_0x000107742984();
                  func_0x000107742944();
                  func_0x00010774293c();
                  func_0x00010774291c();
                  *unaff_x19 = &PTR_DAT_1109d3d08;
                  func_0x000107741cd0(&UNK_10773f704);
                  func_0x000107742924();
                }
              }
              func_0x0001077419ec();
              if ((bool)in_ZR) {
                return (long *)0x113725958;
              }
              ___stack_chk_fail();
              func_0x000107742144();
              func_0x00010774291c();
              func_0x00010774298c();
              func_0x000107742914();
              ___cxa_guard_abort(0x113725960);
              func_0x00010774297c();
              puStack_1198 = &DAT_10772ac8c;
              uStack_11c0 = unaff_x22;
              pppuStack_11a0 = &pppuStack_10d0;
              func_0x000107741ca8();
              if ((bRam0000000113725970 & 1) == 0) {
                iVar5 = 0x13725970;
                ___cxa_guard_acquire();
                if (iVar5 != 0) {
                  func_0x000107742934();
                  func_0x00010774292c();
                  func_0x00010774230c();
                  func_0x000107741d3c();
                  func_0x000107741810();
                  param_2 = (code *)&UNK_10773f92c;
                  func_0x000107741a04();
                  func_0x000107742984();
                  func_0x000107742944();
                  func_0x00010774293c();
                  func_0x00010774291c();
                  *unaff_x19 = &PTR_DAT_1109d3d48;
                  func_0x000107741cd0(&UNK_10773f8c4);
                  func_0x000107742924();
                }
              }
              func_0x0001077419ec();
              if ((bool)in_ZR) {
                return (long *)0x113725968;
              }
              ___stack_chk_fail();
              func_0x000107742144();
              func_0x00010774291c();
              func_0x00010774298c();
              func_0x000107742914();
              ___cxa_guard_abort(0x113725970);
              func_0x00010774297c();
              puStack_1268 = &DAT_10772ad70;
              uStack_1290 = unaff_x22;
              pppuStack_1270 = &pppuStack_11a0;
              func_0x000107741ca8();
              if ((bRam0000000113725980 & 1) == 0) {
                iVar5 = 0x13725980;
                ___cxa_guard_acquire();
                if (iVar5 != 0) {
                  func_0x000107742934();
                  func_0x00010774292c();
                  func_0x00010774230c();
                  func_0x000107741d3c();
                  func_0x000107741810();
                  param_2 = (code *)&UNK_10773fb34;
                  func_0x000107741a04();
                  func_0x000107742984();
                  func_0x000107742944();
                  func_0x00010774293c();
                  func_0x00010774291c();
                  *unaff_x19 = &PTR_FUN_1109d3d88;
                  func_0x000107741cd0(&UNK_10773fae0);
                  func_0x000107742924();
                }
              }
              func_0x0001077419ec();
              if ((bool)in_ZR) {
                return (long *)0x113725978;
              }
              ___stack_chk_fail();
              func_0x000107742144();
              func_0x00010774291c();
              func_0x00010774298c();
              func_0x000107742914();
              ___cxa_guard_abort(0x113725980);
              func_0x00010774297c();
              puStack_1338 = &DAT_10772ae54;
              uStack_1360 = unaff_x22;
              pppuStack_1340 = &pppuStack_1270;
              func_0x000107741ca8();
              if ((bRam0000000113725990 & 1) == 0) {
                iVar5 = 0x13725990;
                ___cxa_guard_acquire();
                if (iVar5 != 0) {
                  func_0x000107742934();
                  func_0x00010774292c();
                  func_0x0001077425c0();
                  func_0x000107741ae8();
                  param_2 = (code *)&UNK_10773fda4;
                  func_0x000107741ebc();
                  func_0x000107742984();
                  func_0x000107742944();
                  func_0x00010774291c();
                  *unaff_x19 = &PTR_DAT_1109d3dc8;
                  func_0x000107741cd0(&UNK_10773fce8);
                  func_0x000107742924();
                }
              }
              func_0x0001077419ec();
              if ((bool)in_ZR) {
                plVar7 = (long *)0x113725988;
              }
              else {
                ___stack_chk_fail();
                func_0x00010774219c();
                ___cxa_guard_abort(0x113725990);
                func_0x000107742904();
                pcStack_13f8 = FUN_10772af1c;
                uStack_1420 = unaff_x22;
                pppuStack_1400 = &pppuStack_1340;
                func_0x000107741ca8();
                if ((bRam00000001137259a0 & 1) == 0) {
                  puVar6 = (undefined8 *)0x1137259a0;
                  ___cxa_guard_acquire();
                  if ((int)puVar6 != 0) {
                    func_0x000107742934();
                    func_0x00010774292c();
                    uStack_1490 = 2;
                    func_0x000107741c80(3);
                    param_2 = (code *)&UNK_10773ff94;
                    func_0x000107741a04();
                    func_0x000107742984();
                    func_0x000107742cb4();
                    func_0x00010774291c();
                    *puVar6 = &PTR_DAT_1109d3e08;
                    func_0x000107741cd0(&UNK_10773fea8);
                    func_0x000107742924();
                    unaff_x19 = puVar6;
                  }
                }
                func_0x0001077419ec();
                if ((bool)in_ZR) {
                  plVar7 = (long *)0x113725998;
                }
                else {
                  ___stack_chk_fail();
                  func_0x00010774219c();
                  ___cxa_guard_abort(0x1137259a0);
                  func_0x000107742904();
                  puStack_14b8 = &DAT_10772aff0;
                  uStack_14e0 = unaff_x22;
                  pppuStack_14c0 = &pppuStack_1400;
                  func_0x000107741ca8();
                  if ((bRam00000001137259b0 & 1) == 0) {
                    puVar6 = (undefined8 *)0x1137259b0;
                    ___cxa_guard_acquire();
                    if ((int)puVar6 != 0) {
                      func_0x000107742934();
                      func_0x00010774292c();
                      func_0x000107743448(2);
                      func_0x000107741c80();
                      param_2 = (code *)&UNK_1077406b0;
                      func_0x000107741a04();
                      func_0x000107742984();
                      func_0x000107742cb4();
                      func_0x00010774291c();
                      *puVar6 = &PTR_DAT_1109d3e48;
                      func_0x000107741cd0(&UNK_1077405e0);
                      func_0x000107742924();
                      unaff_x19 = puVar6;
                    }
                  }
                  func_0x0001077419ec();
                  if ((bool)in_ZR) {
                    plVar7 = (long *)0x1137259a8;
                  }
                  else {
                    ___stack_chk_fail();
                    func_0x00010774219c();
                    ___cxa_guard_abort(0x1137259b0);
                    func_0x000107742904();
                    puStack_1578 = &DAT_10772b0c0;
                    uStack_15a0 = unaff_x22;
                    pppuStack_1580 = &pppuStack_14c0;
                    func_0x000107741ca8();
                    if ((bRam00000001137259c0 & 1) == 0) {
                      puVar6 = (undefined8 *)0x1137259c0;
                      ___cxa_guard_acquire();
                      if ((int)puVar6 != 0) {
                        func_0x000107742934();
                        func_0x00010774292c();
                        func_0x000107743448(2);
                        func_0x000107741c80();
                        param_2 = (code *)&UNK_107740978;
                        func_0x000107741a04();
                        func_0x000107742984();
                        func_0x000107742cb4();
                        func_0x00010774291c();
                        *puVar6 = &PTR_DAT_1109d3e88;
                        func_0x000107741cd0(&UNK_1077408b4);
                        func_0x000107742924();
                        unaff_x19 = puVar6;
                      }
                    }
                    func_0x0001077419ec();
                    if ((bool)in_ZR) {
                      plVar7 = (long *)0x1137259b8;
                    }
                    else {
                      ___stack_chk_fail();
                      func_0x00010774219c();
                      ___cxa_guard_abort(0x1137259c0);
                      func_0x000107742904();
                      puStack_1638 = &DAT_10772b190;
                      uStack_1660 = unaff_x22;
                      pppuStack_1640 = &pppuStack_1580;
                      func_0x000107741ca8();
                      if ((bRam00000001137259d0 & 1) == 0) {
                        puVar6 = (undefined8 *)0x1137259d0;
                        ___cxa_guard_acquire();
                        if ((int)puVar6 != 0) {
                          func_0x000107742934();
                          func_0x00010774292c();
                          func_0x000107741c30(6);
                          param_2 = (code *)&UNK_107740c6c;
                          func_0x000107741a04();
                          func_0x000107742984();
                          func_0x000107742cb4();
                          func_0x00010774291c();
                          *puVar6 = &PTR_DAT_1109d3ec8;
                          func_0x000107741cd0(FUN_107740b7c);
                          func_0x000107742924();
                          unaff_x19 = puVar6;
                        }
                      }
                      func_0x0001077419ec();
                      if (!(bool)in_ZR) {
                        ___stack_chk_fail();
                        func_0x00010774219c();
                        ___cxa_guard_abort(0x1137259d0);
                        func_0x000107742904();
                        puStack_16f8 = &DAT_10772b25c;
                        uStack_1720 = unaff_x22;
                        pppuStack_1700 = &pppuStack_1640;
                        func_0x000107741ca8();
                        if ((bRam00000001137259e0 & 1) == 0) {
                          iVar5 = 0x137259e0;
                          ___cxa_guard_acquire();
                          if (iVar5 != 0) {
                            func_0x000107742934();
                            func_0x00010774292c();
                            func_0x0001077425c0();
                            func_0x0001077438b4();
                            func_0x000107741d3c();
                            func_0x000107741810();
                            param_2 = FUN_107740f20;
                            func_0x000107741a04();
                            func_0x000107742984();
                            func_0x000107742944();
                            func_0x00010774293c();
                            func_0x00010774291c();
                            *unaff_x19 = &PTR_DAT_1109d3f08;
                            func_0x000107741cd0(&UNK_107740e8c);
                            func_0x000107742924();
                          }
                        }
                        func_0x0001077419ec();
                        if ((bool)in_ZR) {
                          return (long *)0x1137259d8;
                        }
                        ___stack_chk_fail();
                        func_0x000107742144();
                        func_0x00010774291c();
                        func_0x00010774298c();
                        func_0x000107742914();
                        ___cxa_guard_abort(0x1137259e0);
                        func_0x00010774297c();
                        puStack_17c8 = &DAT_10772b344;
                        uStack_17f0 = unaff_x22;
                        pppuStack_17d0 = &pppuStack_1700;
                        func_0x000107741ca8();
                        if ((bRam00000001137259f0 & 1) == 0) {
                          iVar5 = 0x137259f0;
                          ___cxa_guard_acquire();
                          if (iVar5 != 0) {
                            func_0x000107742934();
                            func_0x00010774292c();
                            func_0x0001077425c0();
                            func_0x0001077438b4();
                            func_0x000107741d3c();
                            func_0x000107741810();
                            param_2 = (code *)&UNK_107741138;
                            func_0x000107741a04();
                            func_0x000107742984();
                            func_0x000107742944();
                            func_0x00010774293c();
                            func_0x00010774291c();
                            *unaff_x19 = &PTR_DAT_1109d3f48;
                            func_0x000107741cd0(&UNK_1077410a8);
                            func_0x000107742924();
                          }
                        }
                        func_0x0001077419ec();
                        if ((bool)in_ZR) {
                          return (long *)0x1137259e8;
                        }
                        ___stack_chk_fail();
                        func_0x000107742144();
                        func_0x00010774291c();
                        func_0x00010774298c();
                        func_0x000107742914();
                        puVar8 = (ulong *)0x1137259f0;
                        ___cxa_guard_abort();
                        func_0x00010774297c();
                        puStack_1898 = &DAT_10772b42c;
                        uStack_18c0 = unaff_x22;
                        pppuStack_18a0 = &pppuStack_17d0;
                        func_0x000107741ca8();
                        if ((bRam0000000113725a00 & 1) == 0) {
                          puVar9 = (ulong *)0x113725a00;
                          ___cxa_guard_acquire();
                          puVar8 = puVar9;
                          if ((int)puVar9 != 0) {
                            func_0x000107742934();
                            func_0x00010774292c();
                            puVar8 = puVar9;
                            func_0x0001077753dc(auStack_1938);
                            func_0x000107741c80(1);
                            param_2 = (code *)&UNK_1077413dc;
                            func_0x000107741a04();
                            func_0x000107742984();
                            func_0x000107742cb4();
                            func_0x00010774291c();
                            *puVar9 = (ulong)&PTR_DAT_1109d3f88;
                            func_0x000107741cd0(&UNK_1077412c0);
                            func_0x000107742924();
                          }
                        }
                        func_0x0001077419ec();
                        if ((bool)in_ZR) {
                          return (long *)0x1137259f8;
                        }
                        ___stack_chk_fail();
                        func_0x00010774298c();
                        func_0x000107742914();
                        plVar7 = (long *)0x113725a00;
                        ___cxa_guard_abort();
                        func_0x00010774297c();
                        puStack_1958 = &UNK_10772b510;
                        pppuStack_1960 = &pppuStack_18a0;
                        func_0x0001077429f8();
                        plStack_1a90 = plVar7;
                        func_0x00010774205c();
                        lStack_1a58 = 0;
                        lStack_1a50 = 0;
                        uStack_1a48 = 0;
                        lStack_1a70 = 0;
                        lStack_1a68 = 0;
                        uStack_1a60 = 0;
                        uStack_19c0 = extraout_x8;
                        for (lVar17 = *(long *)param_2; lVar17 != *(long *)(unaff_x21 + 8);
                            lVar17 = lVar17 + 0x18) {
                          (**(code **)(lVar17 + 8))();
                          lVar14 = *plVar7;
                          if (*(int *)(lVar14 + 0x40) == 0) {
                            func_0x00010002b838(&pppuStack_1a10,&DAT_10f68e8ec);
                            lVar3 = *(long *)(lVar14 + 0x30);
                            bVar13 = true;
                            for (lVar16 = *(long *)(lVar14 + 0x28); lVar16 != lVar3;
                                lVar16 = lVar16 + 0x10) {
                              if (!bVar13) {
                                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                                          (&pppuStack_1a10,&DAT_10f68f19e);
                              }
                              func_0x00010756a788(&pcStack_19f8,lVar16);
                              FUN_10772b8e8(&pppuStack_1a10,&pcStack_19f8);
                              func_0x00010774335c();
                              bVar13 = false;
                            }
                            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                                      (&pppuStack_1a10,&DAT_10f684600);
                            plVar7 = &lStack_1a70;
                            if (*(long *)(lVar14 + 0x30) - *(long *)(lVar14 + 0x28) >> 4 !=
                                *puVar8 >> 1) {
                              plVar7 = &lStack_1a58;
                            }
                            func_0x000100206870(plVar7,&pppuStack_1a10);
                          }
                          else {
                            func_0x00010756a788(&pcStack_19f8,lVar14 + 0x28);
                            func_0x00010724ef84(auStack_1a40,&pcStack_19f8);
                            func_0x0001004c3cd0(&uStack_1a28,&DAT_10f68e8ec,auStack_1a40);
                            func_0x00010048a6c8(&pppuStack_1a10,&uStack_1a28,&DAT_10f684600);
                            func_0x000107743354();
                            func_0x0001077433f8();
                            func_0x00010774335c();
                            plVar7 = &lStack_1a70;
                            func_0x000100206870(plVar7,&pppuStack_1a10);
                          }
                          func_0x0001077435e4();
                        }
                        lVar14 = lStack_1a50;
                        lVar17 = lStack_1a58;
                        if (lStack_1a70 != lStack_1a68) {
                          lVar14 = lStack_1a68;
                          lVar17 = lStack_1a70;
                        }
                        uStack_1a08 = 0;
                        uStack_1a00 = 0;
                        pppuStack_1a10 = (undefined8 ****)0x0;
                        if (lVar17 != lVar14) {
                          func_0x000100602d9c(&pppuStack_1a10,&pppuStack_1a10,lVar17);
                          lVar17 = lVar17 + 0x18;
                        }
                        for (; lVar17 != lVar14; lVar17 = lVar17 + 0x18) {
                          ppppuVar1 = (undefined8 ****)pppuStack_1a10;
                          if (-1 < (long)uStack_1a00._7_1_) {
                            ppppuVar1 = &pppuStack_1a10;
                          }
                          uVar2 = uStack_1a08;
                          if (-1 < (long)uStack_1a00) {
                            uVar2 = (long)uStack_1a00._7_1_;
                          }
                          pcStack_19f8 = " | ";
                          pcStack_19f0 = "";
                          func_0x000106887580(&pppuStack_1a10,(long)ppppuVar1 + uVar2,&pcStack_19f8)
                          ;
                          uVar2 = uStack_1a08;
                          ppppuVar1 = (undefined8 ****)pppuStack_1a10;
                          if (-1 < (long)uStack_1a00) {
                            uVar2 = uStack_1a00 >> 0x38;
                            ppppuVar1 = &pppuStack_1a10;
                          }
                          func_0x000100602d9c(&pppuStack_1a10,(long)ppppuVar1 + uVar2,lVar17);
                        }
                        uStack_1a28 = 0;
                        uStack_1a20 = 0;
                        uStack_1a18 = 0;
                        uVar4 = (*puVar8 & 1) == 0;
                        puVar9 = puVar8 + 1;
                        if (!(bool)uVar4) {
                          puVar9 = (ulong *)puVar8[1];
                        }
                        uVar2 = *puVar8 & 0x1ffffffffffffffe;
                        uVar15 = uVar2 << 3;
                        lVar17 = uStack_1a18;
                        while (uStack_1a18 = lVar17, uVar2 != 0) {
                          uStack_1a18._7_1_ = (byte)((ulong)lVar17 >> 0x38);
                          uVar4 = uStack_1a18._7_1_ == 0;
                          uVar2 = uStack_1a20;
                          if (-1 < lVar17) {
                            uVar2 = (ulong)uStack_1a18._7_1_;
                          }
                          if (uVar2 != 0) {
                            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                                      (&uStack_1a28,&DAT_10f68f19e);
                          }
                          func_0x00010756a788(&pcStack_19f8,*puVar9 + 0x10);
                          FUN_10772b8e8(&uStack_1a28,&pcStack_19f8);
                          func_0x00010774335c();
                          uVar15 = uVar15 - 0x10;
                          puVar9 = puVar9 + 2;
                          lVar17 = uStack_1a18;
                          uVar2 = uVar15;
                        }
                        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                                  (auStack_1a88,&UNK_10f424ce9,&pppuStack_1a10);
                        func_0x00010048a6c8(auStack_1a40,auStack_1a88,&UNK_10f424d05);
                        func_0x000100610910(&pcStack_19f8,auStack_1a40,&uStack_1a28);
                        puVar11 = &UNK_10f417e7a;
                        func_0x00010048a6c8(plStack_1a90,&pcStack_19f8);
                        func_0x0001077435f4();
                        func_0x0001077433f8();
                        func_0x000107742c9c();
                        func_0x000107743354();
                        func_0x0001077435e4();
                        func_0x0001000e30f4(&lStack_1a70);
                        plVar7 = &lStack_1a58;
                        func_0x0001000e30f4();
                        func_0x000107741c94(uStack_19c0);
                        if (!(bool)uVar4) {
                          ___stack_chk_fail();
                          func_0x0001077435e4();
                          func_0x0001000e30f4(&lStack_1a70);
                          plVar10 = &lStack_1a58;
                          func_0x0001000e30f4(plVar10);
                          func_0x000107742904();
                          puStack_1ab0 = &DAT_10f68f19e;
                          pcStack_1a98 = FUN_10772b8e8;
                          puVar12 = puVar11;
                          plStack_1aa8 = plVar7;
                          pppuStack_1aa0 = &pppuStack_1960;
                          func_0x000107264c5c();
                          puStack_1ac0 = puVar11;
                          puStack_1ab8 = puVar12;
                          func_0x0001073727e0(plVar10,&puStack_1ac0);
                          return plVar10;
                        }
                        return plVar7;
                      }
                      plVar7 = (long *)0x1137259c8;
                    }
                  }
                }
              }
              return plVar7;
            }
            plVar7 = (long *)0x113725888;
          }
          return plVar7;
        }
        plVar7 = (long *)0x113725868;
      }
    }
  }
  return plVar7;
}



/* Entry: 10772a028; end: 10772a10f;  */

long * FUN_10772a028(undefined8 param_1,code *param_2)

{
  undefined8 ****ppppuVar1;
  ulong uVar2;
  long lVar3;
  undefined1 in_ZR;
  undefined1 uVar4;
  int iVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong *puVar8;
  ulong *puVar9;
  long *plVar10;
  undefined *puVar11;
  undefined *puVar12;
  bool bVar13;
  undefined8 extraout_x8;
  undefined8 *unaff_x19;
  long lVar14;
  long unaff_x21;
  ulong uVar15;
  undefined8 unaff_x22;
  long lVar16;
  long lVar17;
  undefined *puStack_1420;
  undefined *puStack_1418;
  undefined *puStack_1410;
  long *plStack_1408;
  undefined8 ***pppuStack_1400;
  code *pcStack_13f8;
  long *plStack_13f0;
  undefined1 auStack_13e8 [24];
  long lStack_13d0;
  long lStack_13c8;
  undefined8 uStack_13c0;
  long lStack_13b8;
  long lStack_13b0;
  undefined8 uStack_13a8;
  undefined1 auStack_13a0 [24];
  undefined8 uStack_1388;
  ulong uStack_1380;
  undefined8 uStack_1378;
  undefined8 ***pppuStack_1370;
  ulong uStack_1368;
  undefined8 uStack_1360;
  char *pcStack_1358;
  char *pcStack_1350;
  undefined8 uStack_1320;
  undefined8 ***pppuStack_12c0;
  undefined *puStack_12b8;
  undefined1 auStack_1298 [120];
  undefined8 uStack_1220;
  undefined8 ***pppuStack_1200;
  undefined *puStack_11f8;
  undefined8 uStack_1150;
  undefined8 ***pppuStack_1130;
  undefined *puStack_1128;
  undefined8 uStack_1080;
  undefined8 ***pppuStack_1060;
  undefined *puStack_1058;
  undefined8 uStack_fc0;
  undefined8 ***pppuStack_fa0;
  undefined *puStack_f98;
  undefined8 uStack_f00;
  undefined8 ***pppuStack_ee0;
  undefined *puStack_ed8;
  undefined8 uStack_e40;
  undefined8 ***pppuStack_e20;
  undefined *puStack_e18;
  undefined4 uStack_df0;
  undefined8 uStack_d80;
  undefined8 ***pppuStack_d60;
  code *pcStack_d58;
  undefined8 uStack_cc0;
  undefined8 ***pppuStack_ca0;
  undefined *puStack_c98;
  undefined8 uStack_bf0;
  undefined8 ***pppuStack_bd0;
  undefined *puStack_bc8;
  undefined8 uStack_b20;
  undefined8 ***pppuStack_b00;
  undefined *puStack_af8;
  undefined8 uStack_a50;
  undefined8 ***pppuStack_a30;
  undefined *puStack_a28;
  undefined8 uStack_970;
  undefined8 ***pppuStack_950;
  undefined *puStack_948;
  undefined8 uStack_890;
  undefined8 ***pppuStack_870;
  undefined *puStack_868;
  undefined8 uStack_7c0;
  undefined8 ***pppuStack_7a0;
  undefined *puStack_798;
  undefined8 uStack_6f0;
  undefined8 ***pppuStack_6d0;
  code *pcStack_6c8;
  undefined8 uStack_610;
  undefined8 ***pppuStack_5f0;
  undefined *puStack_5e8;
  undefined8 uStack_530;
  undefined8 ***pppuStack_510;
  undefined *puStack_508;
  undefined8 uStack_460;
  undefined8 ***pppuStack_440;
  undefined *puStack_438;
  undefined8 uStack_390;
  undefined8 ***pppuStack_370;
  undefined *puStack_368;
  undefined8 uStack_2b0;
  undefined1 ***pppuStack_290;
  undefined *puStack_288;
  undefined1 **ppuStack_1b0;
  undefined *puStack_1a8;
  undefined1 *puStack_e0;
  undefined *puStack_d8;
  
  func_0x000107741ca8();
  if ((bRam00000001137258a0 & 1) == 0) {
    iVar5 = 0x137258a0;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x000107742934();
      func_0x00010774292c();
      func_0x0001077425c0();
      func_0x000107743bb8();
      func_0x000107741d3c();
      func_0x000107741810();
      param_2 = (code *)&UNK_10773ddd8;
      func_0x000107741a04();
      func_0x000107742984();
      func_0x000107742944();
      func_0x00010774293c();
      func_0x00010774291c();
      *unaff_x19 = &PTR_DAT_1109d3a08;
      func_0x000107741cd0(FUN_10773ddb0);
      func_0x000107742924();
    }
  }
  func_0x0001077419ec();
  if ((bool)in_ZR) {
    plVar7 = (long *)0x113725898;
  }
  else {
    ___stack_chk_fail();
    func_0x000107742144();
    func_0x00010774291c();
    func_0x00010774298c();
    func_0x000107742914();
    ___cxa_guard_abort(0x1137258a0);
    func_0x00010774297c();
    puStack_d8 = &DAT_10772a110;
    puStack_e0 = &stack0xfffffffffffffff0;
    func_0x000107741ca8();
    if ((bRam00000001137258b0 & 1) == 0) {
      iVar5 = 0x137258b0;
      ___cxa_guard_acquire();
      if (iVar5 != 0) {
        func_0x000107742934();
        func_0x00010774292c();
        func_0x00010774230c();
        func_0x000107741d3c();
        func_0x000107741810();
        param_2 = (code *)&UNK_10773dfd8;
        func_0x000107741a04();
        func_0x000107742984();
        func_0x000107742944();
        func_0x00010774293c();
        func_0x00010774291c();
        *unaff_x19 = &PTR_FUN_1109d3a48;
        func_0x000107741cd0(&UNK_10773df70);
        func_0x000107742924();
      }
    }
    func_0x0001077419ec();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x000107742144();
      func_0x00010774291c();
      func_0x00010774298c();
      func_0x000107742914();
      ___cxa_guard_abort(0x1137258b0);
      func_0x00010774297c();
      puStack_1a8 = &DAT_10772a1f4;
      ppuStack_1b0 = &puStack_e0;
      func_0x000107741ca8();
      if ((bRam00000001137258c0 & 1) == 0) {
        iVar5 = 0x137258c0;
        ___cxa_guard_acquire();
        if (iVar5 != 0) {
          func_0x000107742934();
          func_0x00010774292c();
          func_0x000107742240();
          func_0x0001077433bc();
          func_0x000107741bb4();
          func_0x00010774185c();
          param_2 = (code *)&UNK_10773e1b4;
          func_0x000107741a04();
          func_0x000107742a90();
          func_0x000107742944();
          unaff_x22 = 0x10;
          do {
            func_0x0001077429ac();
            func_0x000107742a1c();
          } while (!(bool)in_ZR);
          func_0x00010774291c();
          *unaff_x19 = &PTR_DAT_1109d3a88;
          func_0x000107741cd0(&UNK_10773e18c);
          func_0x000107742924();
        }
      }
      func_0x0001077419ec();
      if ((bool)in_ZR) {
        plVar7 = (long *)0x1137258b8;
      }
      else {
        ___stack_chk_fail();
        func_0x000107742e34();
        do {
          func_0x0001077429ac();
          func_0x000107742a1c();
        } while (!(bool)in_ZR);
        func_0x00010774291c();
        func_0x00010774298c();
        func_0x000107742914();
        ___cxa_guard_abort(0x1137258c0);
        func_0x00010774297c();
        puStack_288 = &DAT_10772a2f8;
        uStack_2b0 = unaff_x22;
        pppuStack_290 = &ppuStack_1b0;
        func_0x000107741ca8();
        if ((bRam00000001137258d0 & 1) == 0) {
          iVar5 = 0x137258d0;
          ___cxa_guard_acquire();
          if (iVar5 != 0) {
            func_0x000107742934();
            func_0x00010774292c();
            func_0x000107742240();
            func_0x000107742e40();
            func_0x000107741bb4();
            func_0x00010774185c();
            param_2 = (code *)&UNK_10773e400;
            func_0x000107741a04();
            func_0x000107742a90();
            func_0x000107742944();
            unaff_x22 = 0x10;
            do {
              func_0x0001077429ac();
              func_0x000107742a1c();
            } while (!(bool)in_ZR);
            func_0x00010774291c();
            *unaff_x19 = &PTR_DAT_1109d3ac8;
            func_0x000107741cd0(FUN_10773e39c);
            func_0x000107742924();
          }
        }
        func_0x0001077419ec();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x000107742e34();
          do {
            func_0x0001077429ac();
            func_0x000107742a1c();
          } while (!(bool)in_ZR);
          func_0x00010774291c();
          func_0x00010774298c();
          func_0x000107742914();
          ___cxa_guard_abort(0x1137258d0);
          func_0x00010774297c();
          puStack_368 = &DAT_10772a3fc;
          uStack_390 = unaff_x22;
          pppuStack_370 = &pppuStack_290;
          func_0x000107741ca8();
          if ((bRam00000001137258e0 & 1) == 0) {
            iVar5 = 0x137258e0;
            ___cxa_guard_acquire();
            if (iVar5 != 0) {
              func_0x000107742934();
              func_0x00010774292c();
              func_0x0001077425c0();
              func_0x000107743bb8();
              func_0x000107741d3c();
              func_0x000107741810();
              param_2 = (code *)&UNK_10773e63c;
              func_0x000107741a04();
              func_0x000107742984();
              func_0x000107742944();
              func_0x00010774293c();
              func_0x00010774291c();
              *unaff_x19 = &PTR_FUN_1109d3b08;
              func_0x000107741cd0(&UNK_10773e614);
              func_0x000107742924();
            }
          }
          func_0x0001077419ec();
          if ((bool)in_ZR) {
            return (long *)0x1137258d8;
          }
          ___stack_chk_fail();
          func_0x000107742144();
          func_0x00010774291c();
          func_0x00010774298c();
          func_0x000107742914();
          ___cxa_guard_abort(0x1137258e0);
          func_0x00010774297c();
          puStack_438 = &DAT_10772a4e4;
          uStack_460 = unaff_x22;
          pppuStack_440 = &pppuStack_370;
          func_0x000107741ca8();
          if ((bRam00000001137258f0 & 1) == 0) {
            iVar5 = 0x137258f0;
            ___cxa_guard_acquire();
            if (iVar5 != 0) {
              func_0x000107742934();
              func_0x00010774292c();
              func_0x00010774230c();
              func_0x000107741d3c();
              func_0x000107741810();
              param_2 = (code *)&UNK_10773e83c;
              func_0x000107741a04();
              func_0x000107742984();
              func_0x000107742944();
              func_0x00010774293c();
              func_0x00010774291c();
              *unaff_x19 = &PTR_DAT_1109d3b48;
              func_0x000107741cd0(&UNK_10773e7d4);
              func_0x000107742924();
            }
          }
          func_0x0001077419ec();
          if ((bool)in_ZR) {
            return (long *)0x1137258e8;
          }
          ___stack_chk_fail();
          func_0x000107742144();
          func_0x00010774291c();
          func_0x00010774298c();
          func_0x000107742914();
          ___cxa_guard_abort(0x1137258f0);
          func_0x00010774297c();
          puStack_508 = &DAT_10772a5c8;
          uStack_530 = unaff_x22;
          pppuStack_510 = &pppuStack_440;
          func_0x000107741ca8();
          if ((bRam0000000113725900 & 1) == 0) {
            iVar5 = 0x13725900;
            ___cxa_guard_acquire();
            if (iVar5 != 0) {
              func_0x000107742934();
              func_0x00010774292c();
              func_0x000107742240();
              func_0x0001077433bc();
              func_0x000107741bb4();
              func_0x00010774185c();
              param_2 = (code *)&UNK_10773ea18;
              func_0x000107741a04();
              func_0x000107742a90();
              func_0x000107742944();
              unaff_x22 = 0x10;
              do {
                func_0x0001077429ac();
                func_0x000107742a1c();
              } while (!(bool)in_ZR);
              func_0x00010774291c();
              *unaff_x19 = &PTR_DAT_1109d3b88;
              func_0x000107741cd0(&UNK_10773e9f0);
              func_0x000107742924();
            }
          }
          func_0x0001077419ec();
          if ((bool)in_ZR) {
            return (long *)0x1137258f8;
          }
          ___stack_chk_fail();
          func_0x000107742e34();
          do {
            func_0x0001077429ac();
            func_0x000107742a1c();
          } while (!(bool)in_ZR);
          func_0x00010774291c();
          func_0x00010774298c();
          func_0x000107742914();
          ___cxa_guard_abort(0x113725900);
          func_0x00010774297c();
          puStack_5e8 = &DAT_10772a6cc;
          uStack_610 = unaff_x22;
          pppuStack_5f0 = &pppuStack_510;
          func_0x000107741ca8();
          if ((bRam0000000113725910 & 1) == 0) {
            iVar5 = 0x13725910;
            ___cxa_guard_acquire();
            if (iVar5 != 0) {
              func_0x000107742934();
              func_0x00010774292c();
              func_0x000107742240();
              func_0x000107742e40();
              func_0x000107741bb4();
              func_0x00010774185c();
              param_2 = FUN_10773ec78;
              func_0x000107741a04();
              func_0x000107742a90();
              func_0x000107742944();
              unaff_x22 = 0x10;
              do {
                func_0x0001077429ac();
                func_0x000107742a1c();
              } while (!(bool)in_ZR);
              func_0x00010774291c();
              *unaff_x19 = &PTR_DAT_1109d3bc8;
              func_0x000107741cd0(&UNK_10773ec00);
              func_0x000107742924();
            }
          }
          func_0x0001077419ec();
          if ((bool)in_ZR) {
            return (long *)0x113725908;
          }
          ___stack_chk_fail();
          func_0x000107742e34();
          do {
            func_0x0001077429ac();
            func_0x000107742a1c();
          } while (!(bool)in_ZR);
          func_0x00010774291c();
          func_0x00010774298c();
          func_0x000107742914();
          ___cxa_guard_abort(0x113725910);
          func_0x00010774297c();
          pcStack_6c8 = FUN_10772a7d0;
          uStack_6f0 = unaff_x22;
          pppuStack_6d0 = &pppuStack_5f0;
          func_0x000107741ca8();
          if ((bRam0000000113725920 & 1) == 0) {
            iVar5 = 0x13725920;
            ___cxa_guard_acquire();
            if (iVar5 != 0) {
              func_0x000107742934();
              func_0x00010774292c();
              func_0x0001077425c0();
              func_0x000107743bb8();
              func_0x000107741d3c();
              func_0x000107741810();
              param_2 = (code *)&UNK_10773eeb4;
              func_0x000107741a04();
              func_0x000107742984();
              func_0x000107742944();
              func_0x00010774293c();
              func_0x00010774291c();
              *unaff_x19 = &PTR_DAT_1109d3c08;
              func_0x000107741cd0(&UNK_10773ee8c);
              func_0x000107742924();
            }
          }
          func_0x0001077419ec();
          if ((bool)in_ZR) {
            return (long *)0x113725918;
          }
          ___stack_chk_fail();
          func_0x000107742144();
          func_0x00010774291c();
          func_0x00010774298c();
          func_0x000107742914();
          ___cxa_guard_abort(0x113725920);
          func_0x00010774297c();
          puStack_798 = &DAT_10772a8b8;
          uStack_7c0 = unaff_x22;
          pppuStack_7a0 = &pppuStack_6d0;
          func_0x000107741ca8();
          if ((bRam0000000113725930 & 1) == 0) {
            iVar5 = 0x13725930;
            ___cxa_guard_acquire();
            if (iVar5 != 0) {
              func_0x000107742934();
              func_0x00010774292c();
              func_0x00010774230c();
              func_0x000107741d3c();
              func_0x000107741810();
              param_2 = (code *)&UNK_10773f0b4;
              func_0x000107741a04();
              func_0x000107742984();
              func_0x000107742944();
              func_0x00010774293c();
              func_0x00010774291c();
              *unaff_x19 = &PTR_DAT_1109d3c48;
              func_0x000107741cd0(&UNK_10773f04c);
              func_0x000107742924();
            }
          }
          func_0x0001077419ec();
          if ((bool)in_ZR) {
            return (long *)0x113725928;
          }
          ___stack_chk_fail();
          func_0x000107742144();
          func_0x00010774291c();
          func_0x00010774298c();
          func_0x000107742914();
          ___cxa_guard_abort(0x113725930);
          func_0x00010774297c();
          puStack_868 = &DAT_10772a99c;
          uStack_890 = unaff_x22;
          pppuStack_870 = &pppuStack_7a0;
          func_0x000107741ca8();
          if ((bRam0000000113725940 & 1) == 0) {
            iVar5 = 0x13725940;
            ___cxa_guard_acquire();
            if (iVar5 != 0) {
              func_0x000107742934();
              func_0x00010774292c();
              func_0x000107742240();
              func_0x0001077433bc();
              func_0x000107741bb4();
              func_0x00010774185c();
              param_2 = FUN_10773f290;
              func_0x000107741a04();
              func_0x000107742a90();
              func_0x000107742944();
              unaff_x22 = 0x10;
              do {
                func_0x0001077429ac();
                func_0x000107742a1c();
              } while (!(bool)in_ZR);
              func_0x00010774291c();
              *unaff_x19 = &PTR_DAT_1109d3c88;
              func_0x000107741cd0(&UNK_10773f268);
              func_0x000107742924();
            }
          }
          func_0x0001077419ec();
          if ((bool)in_ZR) {
            return (long *)0x113725938;
          }
          ___stack_chk_fail();
          func_0x000107742e34();
          do {
            func_0x0001077429ac();
            func_0x000107742a1c();
          } while (!(bool)in_ZR);
          func_0x00010774291c();
          func_0x00010774298c();
          func_0x000107742914();
          ___cxa_guard_abort(0x113725940);
          func_0x00010774297c();
          puStack_948 = &DAT_10772aaa0;
          uStack_970 = unaff_x22;
          pppuStack_950 = &pppuStack_870;
          func_0x000107741ca8();
          if ((bRam0000000113725950 & 1) == 0) {
            iVar5 = 0x13725950;
            ___cxa_guard_acquire();
            if (iVar5 != 0) {
              func_0x000107742934();
              func_0x00010774292c();
              func_0x000107742240();
              func_0x000107742e40();
              func_0x000107741bb4();
              func_0x00010774185c();
              param_2 = (code *)&UNK_10773f4f0;
              func_0x000107741a04();
              func_0x000107742a90();
              func_0x000107742944();
              unaff_x22 = 0x10;
              do {
                func_0x0001077429ac();
                func_0x000107742a1c();
              } while (!(bool)in_ZR);
              func_0x00010774291c();
              *unaff_x19 = &PTR_DAT_1109d3cc8;
              func_0x000107741cd0(&UNK_10773f478);
              func_0x000107742924();
            }
          }
          func_0x0001077419ec();
          if ((bool)in_ZR) {
            return (long *)0x113725948;
          }
          ___stack_chk_fail();
          func_0x000107742e34();
          do {
            func_0x0001077429ac();
            func_0x000107742a1c();
          } while (!(bool)in_ZR);
          func_0x00010774291c();
          func_0x00010774298c();
          func_0x000107742914();
          ___cxa_guard_abort(0x113725950);
          func_0x00010774297c();
          puStack_a28 = &DAT_10772aba4;
          uStack_a50 = unaff_x22;
          pppuStack_a30 = &pppuStack_950;
          func_0x000107741ca8();
          if ((bRam0000000113725960 & 1) == 0) {
            iVar5 = 0x13725960;
            ___cxa_guard_acquire();
            if (iVar5 != 0) {
              func_0x000107742934();
              func_0x00010774292c();
              func_0x0001077425c0();
              func_0x000107743bb8();
              func_0x000107741d3c();
              func_0x000107741810();
              param_2 = (code *)&UNK_10773f72c;
              func_0x000107741a04();
              func_0x000107742984();
              func_0x000107742944();
              func_0x00010774293c();
              func_0x00010774291c();
              *unaff_x19 = &PTR_DAT_1109d3d08;
              func_0x000107741cd0(&UNK_10773f704);
              func_0x000107742924();
            }
          }
          func_0x0001077419ec();
          if ((bool)in_ZR) {
            return (long *)0x113725958;
          }
          ___stack_chk_fail();
          func_0x000107742144();
          func_0x00010774291c();
          func_0x00010774298c();
          func_0x000107742914();
          ___cxa_guard_abort(0x113725960);
          func_0x00010774297c();
          puStack_af8 = &DAT_10772ac8c;
          uStack_b20 = unaff_x22;
          pppuStack_b00 = &pppuStack_a30;
          func_0x000107741ca8();
          if ((bRam0000000113725970 & 1) == 0) {
            iVar5 = 0x13725970;
            ___cxa_guard_acquire();
            if (iVar5 != 0) {
              func_0x000107742934();
              func_0x00010774292c();
              func_0x00010774230c();
              func_0x000107741d3c();
              func_0x000107741810();
              param_2 = (code *)&UNK_10773f92c;
              func_0x000107741a04();
              func_0x000107742984();
              func_0x000107742944();
              func_0x00010774293c();
              func_0x00010774291c();
              *unaff_x19 = &PTR_DAT_1109d3d48;
              func_0x000107741cd0(&UNK_10773f8c4);
              func_0x000107742924();
            }
          }
          func_0x0001077419ec();
          if ((bool)in_ZR) {
            return (long *)0x113725968;
          }
          ___stack_chk_fail();
          func_0x000107742144();
          func_0x00010774291c();
          func_0x00010774298c();
          func_0x000107742914();
          ___cxa_guard_abort(0x113725970);
          func_0x00010774297c();
          puStack_bc8 = &DAT_10772ad70;
          uStack_bf0 = unaff_x22;
          pppuStack_bd0 = &pppuStack_b00;
          func_0x000107741ca8();
          if ((bRam0000000113725980 & 1) == 0) {
            iVar5 = 0x13725980;
            ___cxa_guard_acquire();
            if (iVar5 != 0) {
              func_0x000107742934();
              func_0x00010774292c();
              func_0x00010774230c();
              func_0x000107741d3c();
              func_0x000107741810();
              param_2 = (code *)&UNK_10773fb34;
              func_0x000107741a04();
              func_0x000107742984();
              func_0x000107742944();
              func_0x00010774293c();
              func_0x00010774291c();
              *unaff_x19 = &PTR_FUN_1109d3d88;
              func_0x000107741cd0(&UNK_10773fae0);
              func_0x000107742924();
            }
          }
          func_0x0001077419ec();
          if ((bool)in_ZR) {
            return (long *)0x113725978;
          }
          ___stack_chk_fail();
          func_0x000107742144();
          func_0x00010774291c();
          func_0x00010774298c();
          func_0x000107742914();
          ___cxa_guard_abort(0x113725980);
          func_0x00010774297c();
          puStack_c98 = &DAT_10772ae54;
          uStack_cc0 = unaff_x22;
          pppuStack_ca0 = &pppuStack_bd0;
          func_0x000107741ca8();
          if ((bRam0000000113725990 & 1) == 0) {
            iVar5 = 0x13725990;
            ___cxa_guard_acquire();
            if (iVar5 != 0) {
              func_0x000107742934();
              func_0x00010774292c();
              func_0x0001077425c0();
              func_0x000107741ae8();
              param_2 = (code *)&UNK_10773fda4;
              func_0x000107741ebc();
              func_0x000107742984();
              func_0x000107742944();
              func_0x00010774291c();
              *unaff_x19 = &PTR_DAT_1109d3dc8;
              func_0x000107741cd0(&UNK_10773fce8);
              func_0x000107742924();
            }
          }
          func_0x0001077419ec();
          if ((bool)in_ZR) {
            plVar7 = (long *)0x113725988;
          }
          else {
            ___stack_chk_fail();
            func_0x00010774219c();
            ___cxa_guard_abort(0x113725990);
            func_0x000107742904();
            pcStack_d58 = FUN_10772af1c;
            uStack_d80 = unaff_x22;
            pppuStack_d60 = &pppuStack_ca0;
            func_0x000107741ca8();
            if ((bRam00000001137259a0 & 1) == 0) {
              puVar6 = (undefined8 *)0x1137259a0;
              ___cxa_guard_acquire();
              if ((int)puVar6 != 0) {
                func_0x000107742934();
                func_0x00010774292c();
                uStack_df0 = 2;
                func_0x000107741c80(3);
                param_2 = (code *)&UNK_10773ff94;
                func_0x000107741a04();
                func_0x000107742984();
                func_0x000107742cb4();
                func_0x00010774291c();
                *puVar6 = &PTR_DAT_1109d3e08;
                func_0x000107741cd0(&UNK_10773fea8);
                func_0x000107742924();
                unaff_x19 = puVar6;
              }
            }
            func_0x0001077419ec();
            if ((bool)in_ZR) {
              plVar7 = (long *)0x113725998;
            }
            else {
              ___stack_chk_fail();
              func_0x00010774219c();
              ___cxa_guard_abort(0x1137259a0);
              func_0x000107742904();
              puStack_e18 = &DAT_10772aff0;
              uStack_e40 = unaff_x22;
              pppuStack_e20 = &pppuStack_d60;
              func_0x000107741ca8();
              if ((bRam00000001137259b0 & 1) == 0) {
                puVar6 = (undefined8 *)0x1137259b0;
                ___cxa_guard_acquire();
                if ((int)puVar6 != 0) {
                  func_0x000107742934();
                  func_0x00010774292c();
                  func_0x000107743448(2);
                  func_0x000107741c80();
                  param_2 = (code *)&UNK_1077406b0;
                  func_0x000107741a04();
                  func_0x000107742984();
                  func_0x000107742cb4();
                  func_0x00010774291c();
                  *puVar6 = &PTR_DAT_1109d3e48;
                  func_0x000107741cd0(&UNK_1077405e0);
                  func_0x000107742924();
                  unaff_x19 = puVar6;
                }
              }
              func_0x0001077419ec();
              if ((bool)in_ZR) {
                plVar7 = (long *)0x1137259a8;
              }
              else {
                ___stack_chk_fail();
                func_0x00010774219c();
                ___cxa_guard_abort(0x1137259b0);
                func_0x000107742904();
                puStack_ed8 = &DAT_10772b0c0;
                uStack_f00 = unaff_x22;
                pppuStack_ee0 = &pppuStack_e20;
                func_0x000107741ca8();
                if ((bRam00000001137259c0 & 1) == 0) {
                  puVar6 = (undefined8 *)0x1137259c0;
                  ___cxa_guard_acquire();
                  if ((int)puVar6 != 0) {
                    func_0x000107742934();
                    func_0x00010774292c();
                    func_0x000107743448(2);
                    func_0x000107741c80();
                    param_2 = (code *)&UNK_107740978;
                    func_0x000107741a04();
                    func_0x000107742984();
                    func_0x000107742cb4();
                    func_0x00010774291c();
                    *puVar6 = &PTR_DAT_1109d3e88;
                    func_0x000107741cd0(&UNK_1077408b4);
                    func_0x000107742924();
                    unaff_x19 = puVar6;
                  }
                }
                func_0x0001077419ec();
                if ((bool)in_ZR) {
                  plVar7 = (long *)0x1137259b8;
                }
                else {
                  ___stack_chk_fail();
                  func_0x00010774219c();
                  ___cxa_guard_abort(0x1137259c0);
                  func_0x000107742904();
                  puStack_f98 = &DAT_10772b190;
                  uStack_fc0 = unaff_x22;
                  pppuStack_fa0 = &pppuStack_ee0;
                  func_0x000107741ca8();
                  if ((bRam00000001137259d0 & 1) == 0) {
                    puVar6 = (undefined8 *)0x1137259d0;
                    ___cxa_guard_acquire();
                    if ((int)puVar6 != 0) {
                      func_0x000107742934();
                      func_0x00010774292c();
                      func_0x000107741c30(6);
                      param_2 = (code *)&UNK_107740c6c;
                      func_0x000107741a04();
                      func_0x000107742984();
                      func_0x000107742cb4();
                      func_0x00010774291c();
                      *puVar6 = &PTR_DAT_1109d3ec8;
                      func_0x000107741cd0(FUN_107740b7c);
                      func_0x000107742924();
                      unaff_x19 = puVar6;
                    }
                  }
                  func_0x0001077419ec();
                  if (!(bool)in_ZR) {
                    ___stack_chk_fail();
                    func_0x00010774219c();
                    ___cxa_guard_abort(0x1137259d0);
                    func_0x000107742904();
                    puStack_1058 = &DAT_10772b25c;
                    uStack_1080 = unaff_x22;
                    pppuStack_1060 = &pppuStack_fa0;
                    func_0x000107741ca8();
                    if ((bRam00000001137259e0 & 1) == 0) {
                      iVar5 = 0x137259e0;
                      ___cxa_guard_acquire();
                      if (iVar5 != 0) {
                        func_0x000107742934();
                        func_0x00010774292c();
                        func_0x0001077425c0();
                        func_0x0001077438b4();
                        func_0x000107741d3c();
                        func_0x000107741810();
                        param_2 = FUN_107740f20;
                        func_0x000107741a04();
                        func_0x000107742984();
                        func_0x000107742944();
                        func_0x00010774293c();
                        func_0x00010774291c();
                        *unaff_x19 = &PTR_DAT_1109d3f08;
                        func_0x000107741cd0(&UNK_107740e8c);
                        func_0x000107742924();
                      }
                    }
                    func_0x0001077419ec();
                    if ((bool)in_ZR) {
                      return (long *)0x1137259d8;
                    }
                    ___stack_chk_fail();
                    func_0x000107742144();
                    func_0x00010774291c();
                    func_0x00010774298c();
                    func_0x000107742914();
                    ___cxa_guard_abort(0x1137259e0);
                    func_0x00010774297c();
                    puStack_1128 = &DAT_10772b344;
                    uStack_1150 = unaff_x22;
                    pppuStack_1130 = &pppuStack_1060;
                    func_0x000107741ca8();
                    if ((bRam00000001137259f0 & 1) == 0) {
                      iVar5 = 0x137259f0;
                      ___cxa_guard_acquire();
                      if (iVar5 != 0) {
                        func_0x000107742934();
                        func_0x00010774292c();
                        func_0x0001077425c0();
                        func_0x0001077438b4();
                        func_0x000107741d3c();
                        func_0x000107741810();
                        param_2 = (code *)&UNK_107741138;
                        func_0x000107741a04();
                        func_0x000107742984();
                        func_0x000107742944();
                        func_0x00010774293c();
                        func_0x00010774291c();
                        *unaff_x19 = &PTR_DAT_1109d3f48;
                        func_0x000107741cd0(&UNK_1077410a8);
                        func_0x000107742924();
                      }
                    }
                    func_0x0001077419ec();
                    if ((bool)in_ZR) {
                      return (long *)0x1137259e8;
                    }
                    ___stack_chk_fail();
                    func_0x000107742144();
                    func_0x00010774291c();
                    func_0x00010774298c();
                    func_0x000107742914();
                    puVar8 = (ulong *)0x1137259f0;
                    ___cxa_guard_abort();
                    func_0x00010774297c();
                    puStack_11f8 = &DAT_10772b42c;
                    uStack_1220 = unaff_x22;
                    pppuStack_1200 = &pppuStack_1130;
                    func_0x000107741ca8();
                    if ((bRam0000000113725a00 & 1) == 0) {
                      puVar9 = (ulong *)0x113725a00;
                      ___cxa_guard_acquire();
                      puVar8 = puVar9;
                      if ((int)puVar9 != 0) {
                        func_0x000107742934();
                        func_0x00010774292c();
                        puVar8 = puVar9;
                        func_0x0001077753dc(auStack_1298);
                        func_0x000107741c80(1);
                        param_2 = (code *)&UNK_1077413dc;
                        func_0x000107741a04();
                        func_0x000107742984();
                        func_0x000107742cb4();
                        func_0x00010774291c();
                        *puVar9 = (ulong)&PTR_DAT_1109d3f88;
                        func_0x000107741cd0(&UNK_1077412c0);
                        func_0x000107742924();
                      }
                    }
                    func_0x0001077419ec();
                    if ((bool)in_ZR) {
                      return (long *)0x1137259f8;
                    }
                    ___stack_chk_fail();
                    func_0x00010774298c();
                    func_0x000107742914();
                    plVar7 = (long *)0x113725a00;
                    ___cxa_guard_abort();
                    func_0x00010774297c();
                    puStack_12b8 = &UNK_10772b510;
                    pppuStack_12c0 = &pppuStack_1200;
                    func_0x0001077429f8();
                    plStack_13f0 = plVar7;
                    func_0x00010774205c();
                    lStack_13b8 = 0;
                    lStack_13b0 = 0;
                    uStack_13a8 = 0;
                    lStack_13d0 = 0;
                    lStack_13c8 = 0;
                    uStack_13c0 = 0;
                    uStack_1320 = extraout_x8;
                    for (lVar17 = *(long *)param_2; lVar17 != *(long *)(unaff_x21 + 8);
                        lVar17 = lVar17 + 0x18) {
                      (**(code **)(lVar17 + 8))();
                      lVar14 = *plVar7;
                      if (*(int *)(lVar14 + 0x40) == 0) {
                        func_0x00010002b838(&pppuStack_1370,&DAT_10f68e8ec);
                        lVar3 = *(long *)(lVar14 + 0x30);
                        bVar13 = true;
                        for (lVar16 = *(long *)(lVar14 + 0x28); lVar16 != lVar3;
                            lVar16 = lVar16 + 0x10) {
                          if (!bVar13) {
                            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                                      (&pppuStack_1370,&DAT_10f68f19e);
                          }
                          func_0x00010756a788(&pcStack_1358,lVar16);
                          FUN_10772b8e8(&pppuStack_1370,&pcStack_1358);
                          func_0x00010774335c();
                          bVar13 = false;
                        }
                        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                                  (&pppuStack_1370,&DAT_10f684600);
                        plVar7 = &lStack_13d0;
                        if (*(long *)(lVar14 + 0x30) - *(long *)(lVar14 + 0x28) >> 4 != *puVar8 >> 1
                           ) {
                          plVar7 = &lStack_13b8;
                        }
                        func_0x000100206870(plVar7,&pppuStack_1370);
                      }
                      else {
                        func_0x00010756a788(&pcStack_1358,lVar14 + 0x28);
                        func_0x00010724ef84(auStack_13a0,&pcStack_1358);
                        func_0x0001004c3cd0(&uStack_1388,&DAT_10f68e8ec,auStack_13a0);
                        func_0x00010048a6c8(&pppuStack_1370,&uStack_1388,&DAT_10f684600);
                        func_0x000107743354();
                        func_0x0001077433f8();
                        func_0x00010774335c();
                        plVar7 = &lStack_13d0;
                        func_0x000100206870(plVar7,&pppuStack_1370);
                      }
                      func_0x0001077435e4();
                    }
                    lVar14 = lStack_13b0;
                    lVar17 = lStack_13b8;
                    if (lStack_13d0 != lStack_13c8) {
                      lVar14 = lStack_13c8;
                      lVar17 = lStack_13d0;
                    }
                    uStack_1368 = 0;
                    uStack_1360 = 0;
                    pppuStack_1370 = (undefined8 ****)0x0;
                    if (lVar17 != lVar14) {
                      func_0x000100602d9c(&pppuStack_1370,&pppuStack_1370,lVar17);
                      lVar17 = lVar17 + 0x18;
                    }
                    for (; lVar17 != lVar14; lVar17 = lVar17 + 0x18) {
                      ppppuVar1 = (undefined8 ****)pppuStack_1370;
                      if (-1 < (long)uStack_1360._7_1_) {
                        ppppuVar1 = &pppuStack_1370;
                      }
                      uVar2 = uStack_1368;
                      if (-1 < (long)uStack_1360) {
                        uVar2 = (long)uStack_1360._7_1_;
                      }
                      pcStack_1358 = " | ";
                      pcStack_1350 = "";
                      func_0x000106887580(&pppuStack_1370,(long)ppppuVar1 + uVar2,&pcStack_1358);
                      uVar2 = uStack_1368;
                      ppppuVar1 = (undefined8 ****)pppuStack_1370;
                      if (-1 < (long)uStack_1360) {
                        uVar2 = uStack_1360 >> 0x38;
                        ppppuVar1 = &pppuStack_1370;
                      }
                      func_0x000100602d9c(&pppuStack_1370,(long)ppppuVar1 + uVar2,lVar17);
                    }
                    uStack_1388 = 0;
                    uStack_1380 = 0;
                    uStack_1378 = 0;
                    uVar4 = (*puVar8 & 1) == 0;
                    puVar9 = puVar8 + 1;
                    if (!(bool)uVar4) {
                      puVar9 = (ulong *)puVar8[1];
                    }
                    uVar2 = *puVar8 & 0x1ffffffffffffffe;
                    uVar15 = uVar2 << 3;
                    lVar17 = uStack_1378;
                    while (uStack_1378 = lVar17, uVar2 != 0) {
                      uStack_1378._7_1_ = (byte)((ulong)lVar17 >> 0x38);
                      uVar4 = uStack_1378._7_1_ == 0;
                      uVar2 = uStack_1380;
                      if (-1 < lVar17) {
                        uVar2 = (ulong)uStack_1378._7_1_;
                      }
                      if (uVar2 != 0) {
                        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                                  (&uStack_1388,&DAT_10f68f19e);
                      }
                      func_0x00010756a788(&pcStack_1358,*puVar9 + 0x10);
                      FUN_10772b8e8(&uStack_1388,&pcStack_1358);
                      func_0x00010774335c();
                      uVar15 = uVar15 - 0x10;
                      puVar9 = puVar9 + 2;
                      lVar17 = uStack_1378;
                      uVar2 = uVar15;
                    }
                    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                              (auStack_13e8,&UNK_10f424ce9,&pppuStack_1370);
                    func_0x00010048a6c8(auStack_13a0,auStack_13e8,&UNK_10f424d05);
                    func_0x000100610910(&pcStack_1358,auStack_13a0,&uStack_1388);
                    puVar11 = &UNK_10f417e7a;
                    func_0x00010048a6c8(plStack_13f0,&pcStack_1358);
                    func_0x0001077435f4();
                    func_0x0001077433f8();
                    func_0x000107742c9c();
                    func_0x000107743354();
                    func_0x0001077435e4();
                    func_0x0001000e30f4(&lStack_13d0);
                    plVar7 = &lStack_13b8;
                    func_0x0001000e30f4();
                    func_0x000107741c94(uStack_1320);
                    if (!(bool)uVar4) {
                      ___stack_chk_fail();
                      func_0x0001077435e4();
                      func_0x0001000e30f4(&lStack_13d0);
                      plVar10 = &lStack_13b8;
                      func_0x0001000e30f4(plVar10);
                      func_0x000107742904();
                      puStack_1410 = &DAT_10f68f19e;
                      pcStack_13f8 = FUN_10772b8e8;
                      puVar12 = puVar11;
                      plStack_1408 = plVar7;
                      pppuStack_1400 = &pppuStack_12c0;
                      func_0x000107264c5c();
                      puStack_1420 = puVar11;
                      puStack_1418 = puVar12;
                      func_0x0001073727e0(plVar10,&puStack_1420);
                      return plVar10;
                    }
                    return plVar7;
                  }
                  plVar7 = (long *)0x1137259c8;
                }
              }
            }
          }
          return plVar7;
        }
        plVar7 = (long *)0x1137258c8;
      }
      return plVar7;
    }
    plVar7 = (long *)0x1137258a8;
  }
  return plVar7;
}



/* Entry: 10772a7d0; end: 10772a8b7;  */

long * FUN_10772a7d0(undefined8 param_1,code *param_2)

{
  undefined8 ****ppppuVar1;
  ulong uVar2;
  long lVar3;
  undefined1 in_ZR;
  undefined1 uVar4;
  int iVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong *puVar8;
  ulong *puVar9;
  long *plVar10;
  undefined *puVar11;
  undefined *puVar12;
  bool bVar13;
  undefined8 extraout_x8;
  undefined8 *unaff_x19;
  long lVar14;
  long unaff_x21;
  ulong uVar15;
  undefined8 unaff_x22;
  long lVar16;
  long lVar17;
  undefined *puStack_d60;
  undefined *puStack_d58;
  undefined *puStack_d50;
  long *plStack_d48;
  undefined8 ***pppuStack_d40;
  code *pcStack_d38;
  long *plStack_d30;
  undefined1 auStack_d28 [24];
  long lStack_d10;
  long lStack_d08;
  undefined8 uStack_d00;
  long lStack_cf8;
  long lStack_cf0;
  undefined8 uStack_ce8;
  undefined1 auStack_ce0 [24];
  undefined8 uStack_cc8;
  ulong uStack_cc0;
  undefined8 uStack_cb8;
  undefined8 ***pppuStack_cb0;
  ulong uStack_ca8;
  undefined8 uStack_ca0;
  char *pcStack_c98;
  char *pcStack_c90;
  undefined8 uStack_c60;
  undefined8 ***pppuStack_c00;
  undefined *puStack_bf8;
  undefined1 auStack_bd8 [120];
  undefined8 uStack_b60;
  undefined8 ***pppuStack_b40;
  undefined *puStack_b38;
  undefined8 uStack_a90;
  undefined8 ***pppuStack_a70;
  undefined *puStack_a68;
  undefined8 uStack_9c0;
  undefined8 ***pppuStack_9a0;
  undefined *puStack_998;
  undefined8 uStack_900;
  undefined8 ***pppuStack_8e0;
  undefined *puStack_8d8;
  undefined8 uStack_840;
  undefined8 ***pppuStack_820;
  undefined *puStack_818;
  undefined8 uStack_780;
  undefined8 ***pppuStack_760;
  undefined *puStack_758;
  undefined4 uStack_730;
  undefined8 uStack_6c0;
  undefined8 ***pppuStack_6a0;
  code *pcStack_698;
  undefined8 uStack_600;
  undefined8 ***pppuStack_5e0;
  undefined *puStack_5d8;
  undefined8 uStack_530;
  undefined8 ***pppuStack_510;
  undefined *puStack_508;
  undefined8 uStack_460;
  undefined8 ***pppuStack_440;
  undefined *puStack_438;
  undefined8 uStack_390;
  undefined8 ***pppuStack_370;
  undefined *puStack_368;
  undefined8 uStack_2b0;
  undefined1 ***pppuStack_290;
  undefined *puStack_288;
  undefined1 **ppuStack_1b0;
  undefined *puStack_1a8;
  undefined1 *puStack_e0;
  undefined *puStack_d8;
  
  func_0x000107741ca8();
  if ((bRam0000000113725920 & 1) == 0) {
    iVar5 = 0x13725920;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x000107742934();
      func_0x00010774292c();
      func_0x0001077425c0();
      func_0x000107743bb8();
      func_0x000107741d3c();
      func_0x000107741810();
      param_2 = (code *)&UNK_10773eeb4;
      func_0x000107741a04();
      func_0x000107742984();
      func_0x000107742944();
      func_0x00010774293c();
      func_0x00010774291c();
      *unaff_x19 = &PTR_DAT_1109d3c08;
      func_0x000107741cd0(&UNK_10773ee8c);
      func_0x000107742924();
    }
  }
  func_0x0001077419ec();
  if ((bool)in_ZR) {
    plVar7 = (long *)0x113725918;
  }
  else {
    ___stack_chk_fail();
    func_0x000107742144();
    func_0x00010774291c();
    func_0x00010774298c();
    func_0x000107742914();
    ___cxa_guard_abort(0x113725920);
    func_0x00010774297c();
    puStack_d8 = &DAT_10772a8b8;
    puStack_e0 = &stack0xfffffffffffffff0;
    func_0x000107741ca8();
    if ((bRam0000000113725930 & 1) == 0) {
      iVar5 = 0x13725930;
      ___cxa_guard_acquire();
      if (iVar5 != 0) {
        func_0x000107742934();
        func_0x00010774292c();
        func_0x00010774230c();
        func_0x000107741d3c();
        func_0x000107741810();
        param_2 = (code *)&UNK_10773f0b4;
        func_0x000107741a04();
        func_0x000107742984();
        func_0x000107742944();
        func_0x00010774293c();
        func_0x00010774291c();
        *unaff_x19 = &PTR_DAT_1109d3c48;
        func_0x000107741cd0(&UNK_10773f04c);
        func_0x000107742924();
      }
    }
    func_0x0001077419ec();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x000107742144();
      func_0x00010774291c();
      func_0x00010774298c();
      func_0x000107742914();
      ___cxa_guard_abort(0x113725930);
      func_0x00010774297c();
      puStack_1a8 = &DAT_10772a99c;
      ppuStack_1b0 = &puStack_e0;
      func_0x000107741ca8();
      if ((bRam0000000113725940 & 1) == 0) {
        iVar5 = 0x13725940;
        ___cxa_guard_acquire();
        if (iVar5 != 0) {
          func_0x000107742934();
          func_0x00010774292c();
          func_0x000107742240();
          func_0x0001077433bc();
          func_0x000107741bb4();
          func_0x00010774185c();
          param_2 = FUN_10773f290;
          func_0x000107741a04();
          func_0x000107742a90();
          func_0x000107742944();
          unaff_x22 = 0x10;
          do {
            func_0x0001077429ac();
            func_0x000107742a1c();
          } while (!(bool)in_ZR);
          func_0x00010774291c();
          *unaff_x19 = &PTR_DAT_1109d3c88;
          func_0x000107741cd0(&UNK_10773f268);
          func_0x000107742924();
        }
      }
      func_0x0001077419ec();
      if ((bool)in_ZR) {
        plVar7 = (long *)0x113725938;
      }
      else {
        ___stack_chk_fail();
        func_0x000107742e34();
        do {
          func_0x0001077429ac();
          func_0x000107742a1c();
        } while (!(bool)in_ZR);
        func_0x00010774291c();
        func_0x00010774298c();
        func_0x000107742914();
        ___cxa_guard_abort(0x113725940);
        func_0x00010774297c();
        puStack_288 = &DAT_10772aaa0;
        uStack_2b0 = unaff_x22;
        pppuStack_290 = &ppuStack_1b0;
        func_0x000107741ca8();
        if ((bRam0000000113725950 & 1) == 0) {
          iVar5 = 0x13725950;
          ___cxa_guard_acquire();
          if (iVar5 != 0) {
            func_0x000107742934();
            func_0x00010774292c();
            func_0x000107742240();
            func_0x000107742e40();
            func_0x000107741bb4();
            func_0x00010774185c();
            param_2 = (code *)&UNK_10773f4f0;
            func_0x000107741a04();
            func_0x000107742a90();
            func_0x000107742944();
            unaff_x22 = 0x10;
            do {
              func_0x0001077429ac();
              func_0x000107742a1c();
            } while (!(bool)in_ZR);
            func_0x00010774291c();
            *unaff_x19 = &PTR_DAT_1109d3cc8;
            func_0x000107741cd0(&UNK_10773f478);
            func_0x000107742924();
          }
        }
        func_0x0001077419ec();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x000107742e34();
          do {
            func_0x0001077429ac();
            func_0x000107742a1c();
          } while (!(bool)in_ZR);
          func_0x00010774291c();
          func_0x00010774298c();
          func_0x000107742914();
          ___cxa_guard_abort(0x113725950);
          func_0x00010774297c();
          puStack_368 = &DAT_10772aba4;
          uStack_390 = unaff_x22;
          pppuStack_370 = &pppuStack_290;
          func_0x000107741ca8();
          if ((bRam0000000113725960 & 1) == 0) {
            iVar5 = 0x13725960;
            ___cxa_guard_acquire();
            if (iVar5 != 0) {
              func_0x000107742934();
              func_0x00010774292c();
              func_0x0001077425c0();
              func_0x000107743bb8();
              func_0x000107741d3c();
              func_0x000107741810();
              param_2 = (code *)&UNK_10773f72c;
              func_0x000107741a04();
              func_0x000107742984();
              func_0x000107742944();
              func_0x00010774293c();
              func_0x00010774291c();
              *unaff_x19 = &PTR_DAT_1109d3d08;
              func_0x000107741cd0(&UNK_10773f704);
              func_0x000107742924();
            }
          }
          func_0x0001077419ec();
          if ((bool)in_ZR) {
            return (long *)0x113725958;
          }
          ___stack_chk_fail();
          func_0x000107742144();
          func_0x00010774291c();
          func_0x00010774298c();
          func_0x000107742914();
          ___cxa_guard_abort(0x113725960);
          func_0x00010774297c();
          puStack_438 = &DAT_10772ac8c;
          uStack_460 = unaff_x22;
          pppuStack_440 = &pppuStack_370;
          func_0x000107741ca8();
          if ((bRam0000000113725970 & 1) == 0) {
            iVar5 = 0x13725970;
            ___cxa_guard_acquire();
            if (iVar5 != 0) {
              func_0x000107742934();
              func_0x00010774292c();
              func_0x00010774230c();
              func_0x000107741d3c();
              func_0x000107741810();
              param_2 = (code *)&UNK_10773f92c;
              func_0x000107741a04();
              func_0x000107742984();
              func_0x000107742944();
              func_0x00010774293c();
              func_0x00010774291c();
              *unaff_x19 = &PTR_DAT_1109d3d48;
              func_0x000107741cd0(&UNK_10773f8c4);
              func_0x000107742924();
            }
          }
          func_0x0001077419ec();
          if ((bool)in_ZR) {
            return (long *)0x113725968;
          }
          ___stack_chk_fail();
          func_0x000107742144();
          func_0x00010774291c();
          func_0x00010774298c();
          func_0x000107742914();
          ___cxa_guard_abort(0x113725970);
          func_0x00010774297c();
          puStack_508 = &DAT_10772ad70;
          uStack_530 = unaff_x22;
          pppuStack_510 = &pppuStack_440;
          func_0x000107741ca8();
          if ((bRam0000000113725980 & 1) == 0) {
            iVar5 = 0x13725980;
            ___cxa_guard_acquire();
            if (iVar5 != 0) {
              func_0x000107742934();
              func_0x00010774292c();
              func_0x00010774230c();
              func_0x000107741d3c();
              func_0x000107741810();
              param_2 = (code *)&UNK_10773fb34;
              func_0x000107741a04();
              func_0x000107742984();
              func_0x000107742944();
              func_0x00010774293c();
              func_0x00010774291c();
              *unaff_x19 = &PTR_FUN_1109d3d88;
              func_0x000107741cd0(&UNK_10773fae0);
              func_0x000107742924();
            }
          }
          func_0x0001077419ec();
          if ((bool)in_ZR) {
            return (long *)0x113725978;
          }
          ___stack_chk_fail();
          func_0x000107742144();
          func_0x00010774291c();
          func_0x00010774298c();
          func_0x000107742914();
          ___cxa_guard_abort(0x113725980);
          func_0x00010774297c();
          puStack_5d8 = &DAT_10772ae54;
          uStack_600 = unaff_x22;
          pppuStack_5e0 = &pppuStack_510;
          func_0x000107741ca8();
          if ((bRam0000000113725990 & 1) == 0) {
            iVar5 = 0x13725990;
            ___cxa_guard_acquire();
            if (iVar5 != 0) {
              func_0x000107742934();
              func_0x00010774292c();
              func_0x0001077425c0();
              func_0x000107741ae8();
              param_2 = (code *)&UNK_10773fda4;
              func_0x000107741ebc();
              func_0x000107742984();
              func_0x000107742944();
              func_0x00010774291c();
              *unaff_x19 = &PTR_DAT_1109d3dc8;
              func_0x000107741cd0(&UNK_10773fce8);
              func_0x000107742924();
            }
          }
          func_0x0001077419ec();
          if ((bool)in_ZR) {
            plVar7 = (long *)0x113725988;
          }
          else {
            ___stack_chk_fail();
            func_0x00010774219c();
            ___cxa_guard_abort(0x113725990);
            func_0x000107742904();
            pcStack_698 = FUN_10772af1c;
            uStack_6c0 = unaff_x22;
            pppuStack_6a0 = &pppuStack_5e0;
            func_0x000107741ca8();
            if ((bRam00000001137259a0 & 1) == 0) {
              puVar6 = (undefined8 *)0x1137259a0;
              ___cxa_guard_acquire();
              if ((int)puVar6 != 0) {
                func_0x000107742934();
                func_0x00010774292c();
                uStack_730 = 2;
                func_0x000107741c80(3);
                param_2 = (code *)&UNK_10773ff94;
                func_0x000107741a04();
                func_0x000107742984();
                func_0x000107742cb4();
                func_0x00010774291c();
                *puVar6 = &PTR_DAT_1109d3e08;
                func_0x000107741cd0(&UNK_10773fea8);
                func_0x000107742924();
                unaff_x19 = puVar6;
              }
            }
            func_0x0001077419ec();
            if ((bool)in_ZR) {
              plVar7 = (long *)0x113725998;
            }
            else {
              ___stack_chk_fail();
              func_0x00010774219c();
              ___cxa_guard_abort(0x1137259a0);
              func_0x000107742904();
              puStack_758 = &DAT_10772aff0;
              uStack_780 = unaff_x22;
              pppuStack_760 = &pppuStack_6a0;
              func_0x000107741ca8();
              if ((bRam00000001137259b0 & 1) == 0) {
                puVar6 = (undefined8 *)0x1137259b0;
                ___cxa_guard_acquire();
                if ((int)puVar6 != 0) {
                  func_0x000107742934();
                  func_0x00010774292c();
                  func_0x000107743448(2);
                  func_0x000107741c80();
                  param_2 = (code *)&UNK_1077406b0;
                  func_0x000107741a04();
                  func_0x000107742984();
                  func_0x000107742cb4();
                  func_0x00010774291c();
                  *puVar6 = &PTR_DAT_1109d3e48;
                  func_0x000107741cd0(&UNK_1077405e0);
                  func_0x000107742924();
                  unaff_x19 = puVar6;
                }
              }
              func_0x0001077419ec();
              if ((bool)in_ZR) {
                plVar7 = (long *)0x1137259a8;
              }
              else {
                ___stack_chk_fail();
                func_0x00010774219c();
                ___cxa_guard_abort(0x1137259b0);
                func_0x000107742904();
                puStack_818 = &DAT_10772b0c0;
                uStack_840 = unaff_x22;
                pppuStack_820 = &pppuStack_760;
                func_0x000107741ca8();
                if ((bRam00000001137259c0 & 1) == 0) {
                  puVar6 = (undefined8 *)0x1137259c0;
                  ___cxa_guard_acquire();
                  if ((int)puVar6 != 0) {
                    func_0x000107742934();
                    func_0x00010774292c();
                    func_0x000107743448(2);
                    func_0x000107741c80();
                    param_2 = (code *)&UNK_107740978;
                    func_0x000107741a04();
                    func_0x000107742984();
                    func_0x000107742cb4();
                    func_0x00010774291c();
                    *puVar6 = &PTR_DAT_1109d3e88;
                    func_0x000107741cd0(&UNK_1077408b4);
                    func_0x000107742924();
                    unaff_x19 = puVar6;
                  }
                }
                func_0x0001077419ec();
                if ((bool)in_ZR) {
                  plVar7 = (long *)0x1137259b8;
                }
                else {
                  ___stack_chk_fail();
                  func_0x00010774219c();
                  ___cxa_guard_abort(0x1137259c0);
                  func_0x000107742904();
                  puStack_8d8 = &DAT_10772b190;
                  uStack_900 = unaff_x22;
                  pppuStack_8e0 = &pppuStack_820;
                  func_0x000107741ca8();
                  if ((bRam00000001137259d0 & 1) == 0) {
                    puVar6 = (undefined8 *)0x1137259d0;
                    ___cxa_guard_acquire();
                    if ((int)puVar6 != 0) {
                      func_0x000107742934();
                      func_0x00010774292c();
                      func_0x000107741c30(6);
                      param_2 = (code *)&UNK_107740c6c;
                      func_0x000107741a04();
                      func_0x000107742984();
                      func_0x000107742cb4();
                      func_0x00010774291c();
                      *puVar6 = &PTR_DAT_1109d3ec8;
                      func_0x000107741cd0(FUN_107740b7c);
                      func_0x000107742924();
                      unaff_x19 = puVar6;
                    }
                  }
                  func_0x0001077419ec();
                  if (!(bool)in_ZR) {
                    ___stack_chk_fail();
                    func_0x00010774219c();
                    ___cxa_guard_abort(0x1137259d0);
                    func_0x000107742904();
                    puStack_998 = &DAT_10772b25c;
                    uStack_9c0 = unaff_x22;
                    pppuStack_9a0 = &pppuStack_8e0;
                    func_0x000107741ca8();
                    if ((bRam00000001137259e0 & 1) == 0) {
                      iVar5 = 0x137259e0;
                      ___cxa_guard_acquire();
                      if (iVar5 != 0) {
                        func_0x000107742934();
                        func_0x00010774292c();
                        func_0x0001077425c0();
                        func_0x0001077438b4();
                        func_0x000107741d3c();
                        func_0x000107741810();
                        param_2 = FUN_107740f20;
                        func_0x000107741a04();
                        func_0x000107742984();
                        func_0x000107742944();
                        func_0x00010774293c();
                        func_0x00010774291c();
                        *unaff_x19 = &PTR_DAT_1109d3f08;
                        func_0x000107741cd0(&UNK_107740e8c);
                        func_0x000107742924();
                      }
                    }
                    func_0x0001077419ec();
                    if ((bool)in_ZR) {
                      return (long *)0x1137259d8;
                    }
                    ___stack_chk_fail();
                    func_0x000107742144();
                    func_0x00010774291c();
                    func_0x00010774298c();
                    func_0x000107742914();
                    ___cxa_guard_abort(0x1137259e0);
                    func_0x00010774297c();
                    puStack_a68 = &DAT_10772b344;
                    uStack_a90 = unaff_x22;
                    pppuStack_a70 = &pppuStack_9a0;
                    func_0x000107741ca8();
                    if ((bRam00000001137259f0 & 1) == 0) {
                      iVar5 = 0x137259f0;
                      ___cxa_guard_acquire();
                      if (iVar5 != 0) {
                        func_0x000107742934();
                        func_0x00010774292c();
                        func_0x0001077425c0();
                        func_0x0001077438b4();
                        func_0x000107741d3c();
                        func_0x000107741810();
                        param_2 = (code *)&UNK_107741138;
                        func_0x000107741a04();
                        func_0x000107742984();
                        func_0x000107742944();
                        func_0x00010774293c();
                        func_0x00010774291c();
                        *unaff_x19 = &PTR_DAT_1109d3f48;
                        func_0x000107741cd0(&UNK_1077410a8);
                        func_0x000107742924();
                      }
                    }
                    func_0x0001077419ec();
                    if ((bool)in_ZR) {
                      return (long *)0x1137259e8;
                    }
                    ___stack_chk_fail();
                    func_0x000107742144();
                    func_0x00010774291c();
                    func_0x00010774298c();
                    func_0x000107742914();
                    puVar8 = (ulong *)0x1137259f0;
                    ___cxa_guard_abort();
                    func_0x00010774297c();
                    puStack_b38 = &DAT_10772b42c;
                    uStack_b60 = unaff_x22;
                    pppuStack_b40 = &pppuStack_a70;
                    func_0x000107741ca8();
                    if ((bRam0000000113725a00 & 1) == 0) {
                      puVar9 = (ulong *)0x113725a00;
                      ___cxa_guard_acquire();
                      puVar8 = puVar9;
                      if ((int)puVar9 != 0) {
                        func_0x000107742934();
                        func_0x00010774292c();
                        puVar8 = puVar9;
                        func_0x0001077753dc(auStack_bd8);
                        func_0x000107741c80(1);
                        param_2 = (code *)&UNK_1077413dc;
                        func_0x000107741a04();
                        func_0x000107742984();
                        func_0x000107742cb4();
                        func_0x00010774291c();
                        *puVar9 = (ulong)&PTR_DAT_1109d3f88;
                        func_0x000107741cd0(&UNK_1077412c0);
                        func_0x000107742924();
                      }
                    }
                    func_0x0001077419ec();
                    if ((bool)in_ZR) {
                      return (long *)0x1137259f8;
                    }
                    ___stack_chk_fail();
                    func_0x00010774298c();
                    func_0x000107742914();
                    plVar7 = (long *)0x113725a00;
                    ___cxa_guard_abort();
                    func_0x00010774297c();
                    puStack_bf8 = &UNK_10772b510;
                    pppuStack_c00 = &pppuStack_b40;
                    func_0x0001077429f8();
                    plStack_d30 = plVar7;
                    func_0x00010774205c();
                    lStack_cf8 = 0;
                    lStack_cf0 = 0;
                    uStack_ce8 = 0;
                    lStack_d10 = 0;
                    lStack_d08 = 0;
                    uStack_d00 = 0;
                    uStack_c60 = extraout_x8;
                    for (lVar17 = *(long *)param_2; lVar17 != *(long *)(unaff_x21 + 8);
                        lVar17 = lVar17 + 0x18) {
                      (**(code **)(lVar17 + 8))();
                      lVar14 = *plVar7;
                      if (*(int *)(lVar14 + 0x40) == 0) {
                        func_0x00010002b838(&pppuStack_cb0,&DAT_10f68e8ec);
                        lVar3 = *(long *)(lVar14 + 0x30);
                        bVar13 = true;
                        for (lVar16 = *(long *)(lVar14 + 0x28); lVar16 != lVar3;
                            lVar16 = lVar16 + 0x10) {
                          if (!bVar13) {
                            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                                      (&pppuStack_cb0,&DAT_10f68f19e);
                          }
                          func_0x00010756a788(&pcStack_c98,lVar16);
                          FUN_10772b8e8(&pppuStack_cb0,&pcStack_c98);
                          func_0x00010774335c();
                          bVar13 = false;
                        }
                        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                                  (&pppuStack_cb0,&DAT_10f684600);
                        plVar7 = &lStack_d10;
                        if (*(long *)(lVar14 + 0x30) - *(long *)(lVar14 + 0x28) >> 4 != *puVar8 >> 1
                           ) {
                          plVar7 = &lStack_cf8;
                        }
                        func_0x000100206870(plVar7,&pppuStack_cb0);
                      }
                      else {
                        func_0x00010756a788(&pcStack_c98,lVar14 + 0x28);
                        func_0x00010724ef84(auStack_ce0,&pcStack_c98);
                        func_0x0001004c3cd0(&uStack_cc8,&DAT_10f68e8ec,auStack_ce0);
                        func_0x00010048a6c8(&pppuStack_cb0,&uStack_cc8,&DAT_10f684600);
                        func_0x000107743354();
                        func_0x0001077433f8();
                        func_0x00010774335c();
                        plVar7 = &lStack_d10;
                        func_0x000100206870(plVar7,&pppuStack_cb0);
                      }
                      func_0x0001077435e4();
                    }
                    lVar14 = lStack_cf0;
                    lVar17 = lStack_cf8;
                    if (lStack_d10 != lStack_d08) {
                      lVar14 = lStack_d08;
                      lVar17 = lStack_d10;
                    }
                    uStack_ca8 = 0;
                    uStack_ca0 = 0;
                    pppuStack_cb0 = (undefined8 ****)0x0;
                    if (lVar17 != lVar14) {
                      func_0x000100602d9c(&pppuStack_cb0,&pppuStack_cb0,lVar17);
                      lVar17 = lVar17 + 0x18;
                    }
                    for (; lVar17 != lVar14; lVar17 = lVar17 + 0x18) {
                      ppppuVar1 = (undefined8 ****)pppuStack_cb0;
                      if (-1 < (long)uStack_ca0._7_1_) {
                        ppppuVar1 = &pppuStack_cb0;
                      }
                      uVar2 = uStack_ca8;
                      if (-1 < (long)uStack_ca0) {
                        uVar2 = (long)uStack_ca0._7_1_;
                      }
                      pcStack_c98 = " | ";
                      pcStack_c90 = "";
                      func_0x000106887580(&pppuStack_cb0,(long)ppppuVar1 + uVar2,&pcStack_c98);
                      uVar2 = uStack_ca8;
                      ppppuVar1 = (undefined8 ****)pppuStack_cb0;
                      if (-1 < (long)uStack_ca0) {
                        uVar2 = uStack_ca0 >> 0x38;
                        ppppuVar1 = &pppuStack_cb0;
                      }
                      func_0x000100602d9c(&pppuStack_cb0,(long)ppppuVar1 + uVar2,lVar17);
                    }
                    uStack_cc8 = 0;
                    uStack_cc0 = 0;
                    uStack_cb8 = 0;
                    uVar4 = (*puVar8 & 1) == 0;
                    puVar9 = puVar8 + 1;
                    if (!(bool)uVar4) {
                      puVar9 = (ulong *)puVar8[1];
                    }
                    uVar2 = *puVar8 & 0x1ffffffffffffffe;
                    uVar15 = uVar2 << 3;
                    lVar17 = uStack_cb8;
                    while (uStack_cb8 = lVar17, uVar2 != 0) {
                      uStack_cb8._7_1_ = (byte)((ulong)lVar17 >> 0x38);
                      uVar4 = uStack_cb8._7_1_ == 0;
                      uVar2 = uStack_cc0;
                      if (-1 < lVar17) {
                        uVar2 = (ulong)uStack_cb8._7_1_;
                      }
                      if (uVar2 != 0) {
                        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                                  (&uStack_cc8,&DAT_10f68f19e);
                      }
                      func_0x00010756a788(&pcStack_c98,*puVar9 + 0x10);
                      FUN_10772b8e8(&uStack_cc8,&pcStack_c98);
                      func_0x00010774335c();
                      uVar15 = uVar15 - 0x10;
                      puVar9 = puVar9 + 2;
                      lVar17 = uStack_cb8;
                      uVar2 = uVar15;
                    }
                    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                              (auStack_d28,&UNK_10f424ce9,&pppuStack_cb0);
                    func_0x00010048a6c8(auStack_ce0,auStack_d28,&UNK_10f424d05);
                    func_0x000100610910(&pcStack_c98,auStack_ce0,&uStack_cc8);
                    puVar11 = &UNK_10f417e7a;
                    func_0x00010048a6c8(plStack_d30,&pcStack_c98);
                    func_0x0001077435f4();
                    func_0x0001077433f8();
                    func_0x000107742c9c();
                    func_0x000107743354();
                    func_0x0001077435e4();
                    func_0x0001000e30f4(&lStack_d10);
                    plVar7 = &lStack_cf8;
                    func_0x0001000e30f4();
                    func_0x000107741c94(uStack_c60);
                    if (!(bool)uVar4) {
                      ___stack_chk_fail();
                      func_0x0001077435e4();
                      func_0x0001000e30f4(&lStack_d10);
                      plVar10 = &lStack_cf8;
                      func_0x0001000e30f4(plVar10);
                      func_0x000107742904();
                      puStack_d50 = &DAT_10f68f19e;
                      pcStack_d38 = FUN_10772b8e8;
                      puVar12 = puVar11;
                      plStack_d48 = plVar7;
                      pppuStack_d40 = &pppuStack_c00;
                      func_0x000107264c5c();
                      puStack_d60 = puVar11;
                      puStack_d58 = puVar12;
                      func_0x0001073727e0(plVar10,&puStack_d60);
                      return plVar10;
                    }
                    return plVar7;
                  }
                  plVar7 = (long *)0x1137259c8;
                }
              }
            }
          }
          return plVar7;
        }
        plVar7 = (long *)0x113725948;
      }
      return plVar7;
    }
    plVar7 = (long *)0x113725928;
  }
  return plVar7;
}



/* Entry: 10772af1c; end: 10772afef;  */

long * FUN_10772af1c(undefined8 param_1,code *param_2)

{
  undefined8 ****ppppuVar1;
  ulong uVar2;
  long lVar3;
  undefined1 in_ZR;
  undefined1 uVar4;
  int iVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong *puVar8;
  ulong *puVar9;
  long *plVar10;
  undefined *puVar11;
  undefined *puVar12;
  bool bVar13;
  undefined8 extraout_x8;
  undefined8 *unaff_x19;
  long lVar14;
  long unaff_x21;
  ulong uVar15;
  long lVar16;
  long lVar17;
  undefined *puStack_6d0;
  undefined *puStack_6c8;
  undefined *puStack_6c0;
  long *plStack_6b8;
  undefined8 ***pppuStack_6b0;
  code *pcStack_6a8;
  long *plStack_6a0;
  undefined1 auStack_698 [24];
  long lStack_680;
  long lStack_678;
  undefined8 uStack_670;
  long lStack_668;
  long lStack_660;
  undefined8 uStack_658;
  undefined1 auStack_650 [24];
  undefined8 uStack_638;
  ulong uStack_630;
  undefined8 uStack_628;
  undefined8 ***pppuStack_620;
  ulong uStack_618;
  undefined8 uStack_610;
  char *pcStack_608;
  char *pcStack_600;
  undefined8 uStack_5d0;
  undefined8 ***pppuStack_570;
  undefined *puStack_568;
  undefined1 auStack_548 [120];
  undefined8 ***pppuStack_4b0;
  undefined *puStack_4a8;
  undefined8 ***pppuStack_3e0;
  undefined *puStack_3d8;
  undefined8 ***pppuStack_310;
  undefined *puStack_308;
  undefined1 ***pppuStack_250;
  undefined *puStack_248;
  undefined1 **ppuStack_190;
  undefined *puStack_188;
  undefined1 *puStack_d0;
  undefined *puStack_c8;
  undefined4 uStack_a0;
  
  func_0x000107741ca8();
  if ((bRam00000001137259a0 & 1) == 0) {
    puVar6 = (undefined8 *)0x1137259a0;
    ___cxa_guard_acquire();
    if ((int)puVar6 != 0) {
      func_0x000107742934();
      func_0x00010774292c();
      uStack_a0 = 2;
      func_0x000107741c80(3);
      param_2 = (code *)&UNK_10773ff94;
      func_0x000107741a04();
      func_0x000107742984();
      func_0x000107742cb4();
      func_0x00010774291c();
      *puVar6 = &PTR_DAT_1109d3e08;
      func_0x000107741cd0(&UNK_10773fea8);
      func_0x000107742924();
      unaff_x19 = puVar6;
    }
  }
  func_0x0001077419ec();
  if ((bool)in_ZR) {
    plVar7 = (long *)0x113725998;
  }
  else {
    ___stack_chk_fail();
    func_0x00010774219c();
    ___cxa_guard_abort(0x1137259a0);
    func_0x000107742904();
    puStack_c8 = &DAT_10772aff0;
    puStack_d0 = &stack0xfffffffffffffff0;
    func_0x000107741ca8();
    if ((bRam00000001137259b0 & 1) == 0) {
      puVar6 = (undefined8 *)0x1137259b0;
      ___cxa_guard_acquire();
      if ((int)puVar6 != 0) {
        func_0x000107742934();
        func_0x00010774292c();
        func_0x000107743448(2);
        func_0x000107741c80();
        param_2 = (code *)&UNK_1077406b0;
        func_0x000107741a04();
        func_0x000107742984();
        func_0x000107742cb4();
        func_0x00010774291c();
        *puVar6 = &PTR_DAT_1109d3e48;
        func_0x000107741cd0(&UNK_1077405e0);
        func_0x000107742924();
        unaff_x19 = puVar6;
      }
    }
    func_0x0001077419ec();
    if ((bool)in_ZR) {
      plVar7 = (long *)0x1137259a8;
    }
    else {
      ___stack_chk_fail();
      func_0x00010774219c();
      ___cxa_guard_abort(0x1137259b0);
      func_0x000107742904();
      puStack_188 = &DAT_10772b0c0;
      ppuStack_190 = &puStack_d0;
      func_0x000107741ca8();
      if ((bRam00000001137259c0 & 1) == 0) {
        puVar6 = (undefined8 *)0x1137259c0;
        ___cxa_guard_acquire();
        if ((int)puVar6 != 0) {
          func_0x000107742934();
          func_0x00010774292c();
          func_0x000107743448(2);
          func_0x000107741c80();
          param_2 = (code *)&UNK_107740978;
          func_0x000107741a04();
          func_0x000107742984();
          func_0x000107742cb4();
          func_0x00010774291c();
          *puVar6 = &PTR_DAT_1109d3e88;
          func_0x000107741cd0(&UNK_1077408b4);
          func_0x000107742924();
          unaff_x19 = puVar6;
        }
      }
      func_0x0001077419ec();
      if ((bool)in_ZR) {
        plVar7 = (long *)0x1137259b8;
      }
      else {
        ___stack_chk_fail();
        func_0x00010774219c();
        ___cxa_guard_abort(0x1137259c0);
        func_0x000107742904();
        puStack_248 = &DAT_10772b190;
        pppuStack_250 = &ppuStack_190;
        func_0x000107741ca8();
        if ((bRam00000001137259d0 & 1) == 0) {
          puVar6 = (undefined8 *)0x1137259d0;
          ___cxa_guard_acquire();
          if ((int)puVar6 != 0) {
            func_0x000107742934();
            func_0x00010774292c();
            func_0x000107741c30(6);
            param_2 = (code *)&UNK_107740c6c;
            func_0x000107741a04();
            func_0x000107742984();
            func_0x000107742cb4();
            func_0x00010774291c();
            *puVar6 = &PTR_DAT_1109d3ec8;
            func_0x000107741cd0(FUN_107740b7c);
            func_0x000107742924();
            unaff_x19 = puVar6;
          }
        }
        func_0x0001077419ec();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x00010774219c();
          ___cxa_guard_abort(0x1137259d0);
          func_0x000107742904();
          puStack_308 = &DAT_10772b25c;
          pppuStack_310 = &pppuStack_250;
          func_0x000107741ca8();
          if ((bRam00000001137259e0 & 1) == 0) {
            iVar5 = 0x137259e0;
            ___cxa_guard_acquire();
            if (iVar5 != 0) {
              func_0x000107742934();
              func_0x00010774292c();
              func_0x0001077425c0();
              func_0x0001077438b4();
              func_0x000107741d3c();
              func_0x000107741810();
              param_2 = FUN_107740f20;
              func_0x000107741a04();
              func_0x000107742984();
              func_0x000107742944();
              func_0x00010774293c();
              func_0x00010774291c();
              *unaff_x19 = &PTR_DAT_1109d3f08;
              func_0x000107741cd0(&UNK_107740e8c);
              func_0x000107742924();
            }
          }
          func_0x0001077419ec();
          if ((bool)in_ZR) {
            plVar7 = (long *)0x1137259d8;
          }
          else {
            ___stack_chk_fail();
            func_0x000107742144();
            func_0x00010774291c();
            func_0x00010774298c();
            func_0x000107742914();
            ___cxa_guard_abort(0x1137259e0);
            func_0x00010774297c();
            puStack_3d8 = &DAT_10772b344;
            pppuStack_3e0 = &pppuStack_310;
            func_0x000107741ca8();
            if ((bRam00000001137259f0 & 1) == 0) {
              iVar5 = 0x137259f0;
              ___cxa_guard_acquire();
              if (iVar5 != 0) {
                func_0x000107742934();
                func_0x00010774292c();
                func_0x0001077425c0();
                func_0x0001077438b4();
                func_0x000107741d3c();
                func_0x000107741810();
                param_2 = (code *)&UNK_107741138;
                func_0x000107741a04();
                func_0x000107742984();
                func_0x000107742944();
                func_0x00010774293c();
                func_0x00010774291c();
                *unaff_x19 = &PTR_DAT_1109d3f48;
                func_0x000107741cd0(&UNK_1077410a8);
                func_0x000107742924();
              }
            }
            func_0x0001077419ec();
            if (!(bool)in_ZR) {
              ___stack_chk_fail();
              func_0x000107742144();
              func_0x00010774291c();
              func_0x00010774298c();
              func_0x000107742914();
              puVar8 = (ulong *)0x1137259f0;
              ___cxa_guard_abort();
              func_0x00010774297c();
              puStack_4a8 = &DAT_10772b42c;
              pppuStack_4b0 = &pppuStack_3e0;
              func_0x000107741ca8();
              if ((bRam0000000113725a00 & 1) == 0) {
                puVar9 = (ulong *)0x113725a00;
                ___cxa_guard_acquire();
                puVar8 = puVar9;
                if ((int)puVar9 != 0) {
                  func_0x000107742934();
                  func_0x00010774292c();
                  puVar8 = puVar9;
                  func_0x0001077753dc(auStack_548);
                  func_0x000107741c80(1);
                  param_2 = (code *)&UNK_1077413dc;
                  func_0x000107741a04();
                  func_0x000107742984();
                  func_0x000107742cb4();
                  func_0x00010774291c();
                  *puVar9 = (ulong)&PTR_DAT_1109d3f88;
                  func_0x000107741cd0(&UNK_1077412c0);
                  func_0x000107742924();
                }
              }
              func_0x0001077419ec();
              if ((bool)in_ZR) {
                return (long *)0x1137259f8;
              }
              ___stack_chk_fail();
              func_0x00010774298c();
              func_0x000107742914();
              plVar7 = (long *)0x113725a00;
              ___cxa_guard_abort();
              func_0x00010774297c();
              puStack_568 = &UNK_10772b510;
              pppuStack_570 = &pppuStack_4b0;
              func_0x0001077429f8();
              plStack_6a0 = plVar7;
              func_0x00010774205c();
              lStack_668 = 0;
              lStack_660 = 0;
              uStack_658 = 0;
              lStack_680 = 0;
              lStack_678 = 0;
              uStack_670 = 0;
              uStack_5d0 = extraout_x8;
              for (lVar17 = *(long *)param_2; lVar17 != *(long *)(unaff_x21 + 8);
                  lVar17 = lVar17 + 0x18) {
                (**(code **)(lVar17 + 8))();
                lVar14 = *plVar7;
                if (*(int *)(lVar14 + 0x40) == 0) {
                  func_0x00010002b838(&pppuStack_620,&DAT_10f68e8ec);
                  lVar3 = *(long *)(lVar14 + 0x30);
                  bVar13 = true;
                  for (lVar16 = *(long *)(lVar14 + 0x28); lVar16 != lVar3; lVar16 = lVar16 + 0x10) {
                    if (!bVar13) {
                      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                                (&pppuStack_620,&DAT_10f68f19e);
                    }
                    func_0x00010756a788(&pcStack_608,lVar16);
                    FUN_10772b8e8(&pppuStack_620,&pcStack_608);
                    func_0x00010774335c();
                    bVar13 = false;
                  }
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                            (&pppuStack_620,&DAT_10f684600);
                  plVar7 = &lStack_680;
                  if (*(long *)(lVar14 + 0x30) - *(long *)(lVar14 + 0x28) >> 4 != *puVar8 >> 1) {
                    plVar7 = &lStack_668;
                  }
                  func_0x000100206870(plVar7,&pppuStack_620);
                }
                else {
                  func_0x00010756a788(&pcStack_608,lVar14 + 0x28);
                  func_0x00010724ef84(auStack_650,&pcStack_608);
                  func_0x0001004c3cd0(&uStack_638,&DAT_10f68e8ec,auStack_650);
                  func_0x00010048a6c8(&pppuStack_620,&uStack_638,&DAT_10f684600);
                  func_0x000107743354();
                  func_0x0001077433f8();
                  func_0x00010774335c();
                  plVar7 = &lStack_680;
                  func_0x000100206870(plVar7,&pppuStack_620);
                }
                func_0x0001077435e4();
              }
              lVar14 = lStack_660;
              lVar17 = lStack_668;
              if (lStack_680 != lStack_678) {
                lVar14 = lStack_678;
                lVar17 = lStack_680;
              }
              uStack_618 = 0;
              uStack_610 = 0;
              pppuStack_620 = (undefined8 ****)0x0;
              if (lVar17 != lVar14) {
                func_0x000100602d9c(&pppuStack_620,&pppuStack_620,lVar17);
                lVar17 = lVar17 + 0x18;
              }
              for (; lVar17 != lVar14; lVar17 = lVar17 + 0x18) {
                ppppuVar1 = (undefined8 ****)pppuStack_620;
                if (-1 < (long)uStack_610._7_1_) {
                  ppppuVar1 = &pppuStack_620;
                }
                uVar2 = uStack_618;
                if (-1 < (long)uStack_610) {
                  uVar2 = (long)uStack_610._7_1_;
                }
                pcStack_608 = " | ";
                pcStack_600 = "";
                func_0x000106887580(&pppuStack_620,(long)ppppuVar1 + uVar2,&pcStack_608);
                uVar2 = uStack_618;
                ppppuVar1 = (undefined8 ****)pppuStack_620;
                if (-1 < (long)uStack_610) {
                  uVar2 = uStack_610 >> 0x38;
                  ppppuVar1 = &pppuStack_620;
                }
                func_0x000100602d9c(&pppuStack_620,(long)ppppuVar1 + uVar2,lVar17);
              }
              uStack_638 = 0;
              uStack_630 = 0;
              uStack_628 = 0;
              uVar4 = (*puVar8 & 1) == 0;
              puVar9 = puVar8 + 1;
              if (!(bool)uVar4) {
                puVar9 = (ulong *)puVar8[1];
              }
              uVar2 = *puVar8 & 0x1ffffffffffffffe;
              uVar15 = uVar2 << 3;
              lVar17 = uStack_628;
              while (uStack_628 = lVar17, uVar2 != 0) {
                uStack_628._7_1_ = (byte)((ulong)lVar17 >> 0x38);
                uVar4 = uStack_628._7_1_ == 0;
                uVar2 = uStack_630;
                if (-1 < lVar17) {
                  uVar2 = (ulong)uStack_628._7_1_;
                }
                if (uVar2 != 0) {
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                            (&uStack_638,&DAT_10f68f19e);
                }
                func_0x00010756a788(&pcStack_608,*puVar9 + 0x10);
                FUN_10772b8e8(&uStack_638,&pcStack_608);
                func_0x00010774335c();
                uVar15 = uVar15 - 0x10;
                puVar9 = puVar9 + 2;
                lVar17 = uStack_628;
                uVar2 = uVar15;
              }
              __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                        (auStack_698,&UNK_10f424ce9,&pppuStack_620);
              func_0x00010048a6c8(auStack_650,auStack_698,&UNK_10f424d05);
              func_0x000100610910(&pcStack_608,auStack_650,&uStack_638);
              puVar11 = &UNK_10f417e7a;
              func_0x00010048a6c8(plStack_6a0,&pcStack_608);
              func_0x0001077435f4();
              func_0x0001077433f8();
              func_0x000107742c9c();
              func_0x000107743354();
              func_0x0001077435e4();
              func_0x0001000e30f4(&lStack_680);
              plVar7 = &lStack_668;
              func_0x0001000e30f4();
              func_0x000107741c94(uStack_5d0);
              if (!(bool)uVar4) {
                ___stack_chk_fail();
                func_0x0001077435e4();
                func_0x0001000e30f4(&lStack_680);
                plVar10 = &lStack_668;
                func_0x0001000e30f4(plVar10);
                func_0x000107742904();
                puStack_6c0 = &DAT_10f68f19e;
                pcStack_6a8 = FUN_10772b8e8;
                puVar12 = puVar11;
                plStack_6b8 = plVar7;
                pppuStack_6b0 = &pppuStack_570;
                func_0x000107264c5c();
                puStack_6d0 = puVar11;
                puStack_6c8 = puVar12;
                func_0x0001073727e0(plVar10,&puStack_6d0);
                return plVar10;
              }
              return plVar7;
            }
            plVar7 = (long *)0x1137259e8;
          }
          return plVar7;
        }
        plVar7 = (long *)0x1137259c8;
      }
    }
  }
  return plVar7;
}



/* Entry: 10772b8e8; end: 10772b91b;  */

void FUN_10772b8e8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_2;
  func_0x000107264c5c();
  uStack_30 = param_2;
  uStack_28 = uVar1;
  func_0x0001073727e0(param_1,&uStack_30);
  return;
}



/* Entry: 10772cf1c; end: 10772cf63;  */

void FUN_10772cf1c(long param_1)

{
  func_0x00010772cf38(*(undefined8 *)(param_1 + 0x48));
  return;
}



/* Entry: 10772d260; end: 10772d263;  */

/* WARNING: Possible PIC construction at 0x0001074d24e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001074d24e8) */
/* WARNING: Removing unreachable block (ram,0x0001074d2590) */
/* WARNING: Removing unreachable block (ram,0x0001074d25b0) */
/* WARNING: Removing unreachable block (ram,0x0001074d2548) */

undefined8 FUN_10772d260(long *param_1)

{
  undefined8 uStack_98;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined1 auStack_70 [64];
  
  func_0x0001074d3a84();
  (**(code **)(*param_1 + 0x40))(auStack_70);
  puStack_88 = &UNK_1074d24e8;
  uStack_98 = 0;
  puStack_90 = &stack0xfffffffffffffff0;
  func_0x0001073f26dc(&uStack_98,auStack_70);
  return uStack_98;
}



/* Entry: 10772d408; end: 10772d427;  */

void FUN_10772d408(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010772d410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10772d628; end: 10772d62b;  */

undefined8 * FUN_10772d628(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10772d798; end: 10772d7d7;  */

undefined8 FUN_10772d798(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  uStack_28 = param_2;
  func_0x00010772d804(&uStack_28);
  return param_2;
}



/* Entry: 10772d924; end: 10772d983;  */

void FUN_10772d924(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  
  func_0x000107741acc();
  func_0x000107743a34();
  func_0x000107743214();
  if ((bool)in_ZR) {
    func_0x000107742e98();
    func_0x0001077420e4();
  }
  else {
    func_0x00010774313c();
    func_0x0001077428fc();
  }
  func_0x000107742374();
  func_0x000107741a50();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107742118();
  func_0x000107742904();
  *(undefined8 *)(extraout_x8 + 8) = 0x3fe62e42fefa39ef;
  *(undefined4 *)(extraout_x8 + 0x40) = 1;
  return;
}



/* Entry: 10772db3c; end: 10772db87;  */

void FUN_10772db3c(ulong *param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined1 uStack_21;
  
  puVar1 = &uStack_21;
  func_0x0001077776b0();
  uVar2 = *param_1;
  *param_1 = (ulong)(puVar1 + (uVar2 >> 4) + uVar2 * 0x1000 + -0x61c8864680b583eb) ^ uVar2;
  return;
}



/* Entry: 10772de78; end: 10772dea3;  */

long FUN_10772de78(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x00010772d804(param_1);
  }
  return param_1;
}



/* Entry: 10772e1c8; end: 10772e1f7;  */

void FUN_10772e1c8(ulong param_1)

{
  undefined8 *puVar1;
  
  if (param_1 < 0x124924924924925) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_1 * 0x70);
    return;
  }
  func_0x000107742888();
  puVar1 = (undefined8 *)0x10;
  ___cxa_allocate_exception();
  *puVar1 = &PTR_DAT_1109d4098;
  puVar1[1] = param_1;
  ___cxa_throw();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)();
  return;
}



/* Entry: 10772e2b8; end: 10772e2eb;  */

void FUN_10772e2b8(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    func_0x00010726af18(param_1);
    param_1 = param_1 + 0x70;
  }
  return;
}



/* Entry: 10772e6f4; end: 10772e6f7;  */

undefined8 * FUN_10772e6f4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10772e988; end: 10772e98b;  */

undefined8 * FUN_10772e988(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10772eb3c; end: 10772ec17;  */

undefined8 *
FUN_10772eb3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long *param_5)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_128 [112];
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_78;
  uint uStack_40;
  
  func_0x0001077418ec();
  func_0x000107742168();
  puVar2 = (undefined8 *)*param_5;
  func_0x000107741dcc();
  puVar3 = (undefined1 *)(ulong)uStack_40;
  if (uStack_40 == 1) {
    func_0x0001077429cc();
    func_0x000107742a84();
    func_0x0001077420a0();
  }
  else {
    func_0x0001077429c4();
    func_0x0001077428fc();
  }
  func_0x00010774207c();
  uVar1 = uStack_40 == 1;
  if ((bool)uVar1) {
    func_0x000107438a0c(auStack_128);
    FUN_10785e024();
    puVar3 = auStack_b8;
    uStack_78 = 1;
    uStack_b0 = param_1;
    uStack_a8 = param_2;
    uStack_a0 = param_3;
    uStack_98 = param_4;
    func_0x00010772ed20(auStack_b8);
    func_0x0001077439f4();
    puVar2 = &uStack_b0;
    func_0x00010772ed80();
  }
  func_0x000107742088();
  func_0x0001077419ec();
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar2 = (undefined8 *)(puVar3 + 8);
  func_0x00010772ed80();
  func_0x000107742088();
  func_0x000107742904();
  *puVar2 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(puVar2 + 9);
  func_0x00010772d754(puVar2 + 5);
  func_0x0001072c9884(puVar2 + 2);
  return puVar2;
}



/* Entry: 10772edc4; end: 10772eed3;  */

undefined8 * FUN_10772edc4(undefined8 *param_1)

{
  undefined1 uVar1;
  long unaff_x23;
  undefined8 auStack_88 [8];
  int iStack_48;
  undefined8 uStack_8;
  
  func_0x000107742d00();
  func_0x0001077418c8();
  func_0x00010774246c();
  func_0x000107742e70();
  do {
    uVar1 = unaff_x23 == 4;
    if ((bool)uVar1) {
      func_0x0001077424c8();
      func_0x000107742e2c();
      func_0x000107743b74();
      func_0x0001077436b4();
      func_0x000107743694();
      func_0x000107742864();
      FUN_107774c38();
      uVar1 = iStack_48 == 1;
      if ((bool)uVar1) {
        param_1 = auStack_88;
        func_0x00010772f000();
        func_0x00010774375c();
      }
      else {
        param_1 = auStack_88;
        func_0x000107572644();
        func_0x0001077428fc();
      }
      func_0x000107742fe8();
      goto LAB_10772ee90;
    }
    func_0x0001077422ac();
    param_1 = (undefined8 *)*param_1;
    func_0x000107742138(auStack_88);
    func_0x000107743b94();
    if ((bool)uVar1) {
      func_0x000107742fd4();
      func_0x000107742190();
    }
    else {
      func_0x000107742fcc();
      func_0x0001077428fc();
    }
    func_0x0001077429a4();
    func_0x0001077422c4();
  } while ((bool)uVar1);
  uVar1 = 0;
LAB_10772ee90:
  func_0x00010774306c();
  func_0x000107741c94(uStack_8);
  if ((bool)uVar1) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107742a74();
  func_0x000107572660();
  func_0x00010774306c();
  func_0x000107742904();
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10772f1a4; end: 10772f1a7;  */

undefined8 * FUN_10772f1a4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10772f3dc; end: 10772f3df;  */

undefined8 * FUN_10772f3dc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10772f58c; end: 10772f5ef;  */

void FUN_10772f58c(long param_1)

{
  undefined1 in_ZR;
  int iVar1;
  ulong uVar2;
  undefined8 extraout_x8;
  undefined1 auStack_70 [80];
  
  func_0x000107741acc();
  func_0x00010774239c(auStack_70);
  func_0x000107743214();
  if ((bool)in_ZR) {
    func_0x000107742e98();
    func_0x000107741f18();
  }
  else {
    func_0x00010774313c();
    func_0x0001077428fc();
  }
  func_0x000107742374();
  func_0x000107741a50();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107742118();
  func_0x000107742904();
  uVar2 = (ulong)*(byte *)(param_1 + 0x58);
  func_0x000107741be8(*(undefined8 *)(param_1 + 0x50),extraout_x8);
  if ((uVar2 & 1) != 0) {
    func_0x00010774250c();
    while (func_0x000107741a50(), !(bool)in_ZR) {
      ___stack_chk_fail();
code_r0x00010772f658:
      iVar1 = 0x13725a10;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        func_0x000100060964(0x113725b38,&UNK_10f424ed0);
        ___cxa_guard_release(0x113725a10);
      }
code_r0x00010772f630:
      func_0x000107743a20();
      func_0x000107743330();
      func_0x0001077431c4();
    }
    return;
  }
  if ((bRam0000000113725a10 & 1) == 0) goto code_r0x00010772f658;
  goto code_r0x00010772f630;
}



/* Entry: 10772f794; end: 10772f863;  */

void FUN_10772f794(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  int iVar1;
  undefined1 uStack_99;
  undefined1 auStack_98 [120];
  
  func_0x000107741be8();
  if ((*(byte *)(param_2 + 0x48) & 1) != 0) {
    func_0x0001077765a4(auStack_98,param_2 + 8,&uStack_99);
    func_0x00010774257c();
    func_0x000107742bf8();
    while (func_0x000107741a50(), !(bool)in_ZR) {
      ___stack_chk_fail();
LAB_10772f814:
      iVar1 = 0x13725a18;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        func_0x000100060964(0x113725b70,&UNK_10f424f21);
        ___cxa_guard_release(0x113725a18);
      }
LAB_10772f7e0:
      func_0x000104c2fe00(auStack_98,0x113725b70);
      func_0x00010756c0ec();
      func_0x000107743a50();
    }
    return;
  }
  if ((bRam0000000113725a18 & 1) == 0) goto LAB_10772f814;
  goto LAB_10772f7e0;
}



/* Entry: 10772fb20; end: 10772fb23;  */

undefined8 * FUN_10772fb20(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10772fe28; end: 10772fe5b;  */

long FUN_10772fe28(long param_1)

{
  undefined1 uVar1;
  long extraout_x8;
  long unaff_x19;
  
  if (*(int *)(param_1 + 0x40) != 0) {
    func_0x00010563ab98();
    uVar1 = *(int *)(param_1 + 0x40) == 1;
    if (!(bool)uVar1) {
      func_0x00010563ab98();
      func_0x000107741be8();
      func_0x000107742f04(1);
      func_0x000107742bf8();
      func_0x000107741a50();
      if (!(bool)uVar1) {
        ___stack_chk_fail();
        func_0x000107742a64();
        if (!(bool)uVar1) {
          func_0x000107742644((&PTR_DAT_1109d21d8)[extraout_x8]);
        }
        func_0x00010774352c();
        return param_1;
      }
      return unaff_x19;
    }
  }
  return param_1 + 8;
}



/* Entry: 10773021c; end: 107730413;  */

/* WARNING: Possible PIC construction at 0x00010773055c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010773062c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107730358: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107730630) */
/* WARNING: Removing unreachable block (ram,0x000107730560) */
/* WARNING: Removing unreachable block (ram,0x00010773035c) */

undefined8 **
FUN_10773021c(undefined8 **param_1,undefined8 **param_2,undefined8 **param_3,undefined8 **param_4,
             undefined8 **param_5)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  undefined8 **ppuVar4;
  double *pdVar5;
  undefined1 **ppuVar6;
  double *pdVar7;
  undefined1 uVar8;
  undefined8 **ppuVar9;
  undefined8 **ppuVar10;
  undefined8 **ppuVar11;
  undefined8 **ppuVar12;
  undefined8 **ppuVar13;
  undefined8 **ppuVar14;
  undefined8 **ppuVar15;
  undefined8 **ppuVar16;
  ulong uVar17;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 *puVar18;
  long extraout_x8_02;
  undefined8 *extraout_x8_03;
  double *pdVar19;
  long extraout_x9;
  long extraout_x9_00;
  undefined8 **unaff_x19;
  undefined8 **unaff_x23;
  undefined1 **ppuVar20;
  undefined *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined1 *puStack_140;
  undefined *puStack_138;
  double adStack_130 [5];
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 **ppuStack_f0;
  undefined8 **ppuStack_e8;
  undefined8 *puStack_e0;
  undefined8 ***pppuStack_d8;
  undefined8 ***pppuStack_d0;
  undefined8 **ppuStack_c8;
  undefined8 **ppuStack_c0;
  undefined4 uStack_78;
  
  pdVar7 = adStack_130;
  pdVar5 = adStack_130;
  pdVar19 = adStack_130;
  ppuVar20 = (undefined1 **)&stack0xfffffffffffffff0;
  ppuVar14 = param_3;
  ppuVar16 = param_4;
  func_0x000107741cbc();
  ppuVar4 = param_2;
  ppuStack_f0 = ppuVar14;
LAB_10773025c:
  ppuVar15 = ppuVar4 + 0xe;
  if (ppuVar4 == param_3) goto LAB_1077302f4;
  if (*(int *)(param_1 + 0xd) == 8) {
    func_0x0001075725f8();
    unaff_x23 = param_1;
    if (*(int *)(ppuVar4 + 0xd) == 2) {
      ppuVar10 = ppuVar4;
      func_0x0001072cb4bc();
      uVar17 = (ulong)(uint)(int)(double)*ppuVar10;
      lVar2 = **param_1;
      uVar1 = ((*param_1)[1] - lVar2) / 0x70;
      uVar8 = uVar1 == uVar17;
      if (uVar1 <= uVar17) goto LAB_1077303a0;
      param_1 = (undefined8 **)(lVar2 + uVar17 * 0x70);
      ppuVar4 = ppuVar15;
      goto LAB_10773025c;
    }
    uVar8 = *(int *)(ppuVar4 + 0xd) == 3;
    ppuVar10 = param_1;
    if (!(bool)uVar8) goto LAB_1077303a0;
    func_0x0001077439ec();
    func_0x000107743a58();
    if ((int)ppuVar10 != 0) {
      uStack_108 = 0;
      uStack_100 = 0;
      uStack_f8 = 0;
      ppuStack_e8 = ppuVar15;
      func_0x000107743110(*param_1);
      lVar2 = 0;
      if (extraout_x9 != 0) {
        lVar2 = extraout_x8 / extraout_x9;
      }
      func_0x0001074b01dc(&uStack_108,lVar2);
      ppuVar10 = (undefined8 **)**param_1;
      pppuStack_d8 = &ppuStack_e8;
      pppuStack_d0 = &ppuStack_f0;
      ppuVar15 = &puStack_e0;
      puVar21 = (undefined *)0x10773035c;
      puStack_e0 = &uStack_108;
      ppuStack_c8 = param_4;
      ppuStack_c0 = param_5;
      goto code_r0x0001077306ac;
    }
    func_0x0001077439ec();
    func_0x000107743978();
    if (((int)ppuVar10 != 0) && (uVar8 = ppuVar15 == param_3, (bool)uVar8)) {
      func_0x000107743110(*param_1);
      uVar1 = 0;
      if (extraout_x9_00 != 0) {
        uVar1 = extraout_x8_00 / extraout_x9_00;
      }
      pppuStack_d8 = (undefined8 ***)(double)uVar1;
      param_5 = &puStack_e0;
      uStack_78 = 2;
      param_2 = &puStack_e0;
      func_0x0001077307c4();
      func_0x000107742bf8();
      goto LAB_1077303a8;
    }
  }
  else {
    uVar8 = 0;
    ppuVar10 = param_1;
    if ((*(int *)(param_1 + 0xd) == 9) && (uVar8 = *(int *)(ppuVar4 + 0xd) == 3, (bool)uVar8)) {
      func_0x0001074d2730();
      param_2 = param_1;
      func_0x0001077439ec();
      ppuVar9 = param_1;
      func_0x0001074d2700();
      ppuVar10 = (undefined8 **)0x0;
      unaff_x23 = param_1;
      if (ppuVar9 != (undefined8 **)0x0) {
        param_1 = param_2 + 7;
        ppuVar4 = ppuVar15;
        goto LAB_10773025c;
      }
    }
  }
LAB_1077303a0:
  unaff_x19[1] = (undefined8 *)0x0;
  param_1 = ppuVar10;
  goto LAB_1077303a4;
LAB_1077302f4:
  unaff_x19[1] = param_1;
  uVar8 = 1;
LAB_1077303a4:
  *(int *)(unaff_x19 + 0xf) = 0;
  unaff_x19 = param_1;
  param_1 = unaff_x23;
LAB_1077303a8:
  func_0x000107741a80();
  if ((bool)uVar8) {
    return unaff_x19;
  }
  ___stack_chk_fail();
  ppuVar9 = unaff_x19;
  func_0x0001077436f0();
  puVar21 = &UNK_107730414;
  func_0x000107742904();
  if (*(int *)(param_2 + 8) == 1) {
code_r0x0001000df598:
    *(undefined8 ***)((long)pdVar5 + -0x20) = param_5;
    *(undefined8 ***)((long)pdVar5 + -0x18) = unaff_x19;
    *(undefined1 ***)((long)pdVar5 + -0x10) = ppuVar20;
    *(undefined **)((long)pdVar5 + -8) = puVar21;
    iVar3 = *(int *)param_2;
    *(int *)ppuVar9 = iVar3;
    func_0x000104c32a48(iVar3,param_2 + 1,ppuVar9 + 1);
    return ppuVar9;
  }
  puStack_140 = (undefined1 *)ppuVar20;
  if (*(int *)(param_2 + 8) == 0) {
    if (*param_2 != (undefined8 *)0x0) {
      puStack_138 = &UNK_107730414;
      func_0x00010727473c();
      func_0x000107268370();
      return unaff_x19;
    }
    *(int *)ppuVar9 = 7;
    return ppuVar9;
  }
  puStack_138 = &UNK_107730414;
  puVar21 = &UNK_10773044c;
  func_0x00010563ab98();
  ppuVar6 = &puStack_140;
  ppuVar15 = ppuVar9;
  ppuVar12 = unaff_x19;
  ppuVar20 = &puStack_140;
  do {
    ppuVar9 = ppuVar15;
    pdVar5 = (double *)((long)ppuVar6 + -0xf0);
    unaff_x19 = (undefined8 **)((long)ppuVar6 + -0xf0);
    ppuVar10 = (undefined8 **)((long)ppuVar6 + -0xf0);
    *(undefined8 ***)((long)ppuVar6 + -0x40) = ppuVar4;
    *(undefined8 ***)((long)ppuVar6 + -0x38) = param_1;
    *(undefined8 ***)((long)ppuVar6 + -0x30) = param_3;
    *(undefined8 ***)((long)ppuVar6 + -0x28) = param_4;
    *(undefined8 ***)((long)ppuVar6 + -0x20) = param_5;
    *(undefined8 ***)((long)ppuVar6 + -0x18) = ppuVar12;
    *(undefined1 ***)((long)ppuVar6 + -0x10) = ppuVar20;
    *(undefined **)((long)ppuVar6 + -8) = puVar21;
    ppuVar20 = (undefined1 **)((long)ppuVar6 + -0x10);
    ppuVar11 = ppuVar9;
    func_0x000107741cf4();
    ppuVar15 = ppuVar14;
    ppuVar12 = ppuVar14;
    while( true ) {
      while( true ) {
        ppuVar14 = ppuVar12 + 0xe;
        param_5 = ppuVar16;
        if (ppuVar12 == ppuVar16) {
          *ppuVar9 = param_2;
          uVar8 = 1;
          unaff_x19 = ppuVar11;
          goto code_r0x0001077305a8;
        }
        if (*(int *)param_2 == 0) break;
        uVar8 = *(int *)param_2 == 1;
        ppuVar13 = ppuVar11;
        if ((!(bool)uVar8) || (uVar8 = *(int *)(ppuVar12 + 0xd) == 3, !(bool)uVar8))
        goto code_r0x0001077305a4;
        func_0x000107743910();
        ppuVar13 = param_2 + 1;
        func_0x000107297a3c();
        if (ppuVar13 == (undefined8 **)0x0) goto code_r0x0001077305a4;
        param_2 = ppuVar11 + 7;
        ppuVar11 = ppuVar13;
        ppuVar12 = ppuVar14;
      }
      func_0x0001073982a4();
      if (*(int *)(ppuVar12 + 0xd) != 2) break;
      func_0x0001072cb4bc();
      uVar17 = (ulong)(uint)(int)(double)*ppuVar12;
      lVar2 = **param_2;
      uVar1 = (*param_2)[1] - lVar2 >> 6;
      uVar8 = uVar17 == uVar1;
      ppuVar13 = ppuVar12;
      if (uVar1 <= uVar17) goto code_r0x0001077305a4;
      param_2 = (undefined8 **)(lVar2 + uVar17 * 0x40);
      ppuVar11 = ppuVar12;
      ppuVar12 = ppuVar14;
    }
    uVar8 = *(int *)(ppuVar12 + 0xd) == 3;
    ppuVar13 = param_2;
    if (!(bool)uVar8) {
code_r0x0001077305a4:
      *ppuVar9 = (undefined8 *)0x0;
      unaff_x19 = ppuVar13;
code_r0x0001077305a8:
      *(int *)(ppuVar9 + 8) = 0;
      goto code_r0x0001077305ac;
    }
    func_0x000107743910();
    func_0x000107743a58();
    if ((int)ppuVar13 == 0) {
      func_0x000107743910();
      func_0x000107743978();
      if (((int)ppuVar13 == 0) || (uVar8 = 0, ppuVar14 != ppuVar16)) goto code_r0x0001077305a4;
      func_0x000107743184(*param_2);
      *(undefined4 *)((long)ppuVar6 + -0xd8) = 3;
      *(double *)((long)ppuVar6 + -0xd0) = (double)(ulong)(extraout_x8_02 >> 6);
      param_2 = (undefined8 **)((long)ppuVar6 + -0xd8);
      puVar21 = &UNK_107730630;
      unaff_x19 = ppuVar9;
      goto code_r0x0001000df598;
    }
    *(undefined8 *)((long)ppuVar6 + -0xf0) = 0;
    *(undefined8 *)((long)ppuVar6 + -0xe8) = 0;
    *(undefined8 *)((long)ppuVar6 + -0xe0) = 0;
    func_0x000107743184(*param_2);
    func_0x0001072ac134((undefined1 *)((long)ppuVar6 + -0xf0),extraout_x8_01 >> 6);
    puVar18 = *param_2;
    param_2 = (undefined8 **)*puVar18;
    param_1 = (undefined8 **)puVar18[1];
    uVar8 = param_2 == param_1;
    if ((bool)uVar8) {
      func_0x000107327958((undefined1 *)((long)ppuVar6 + -0x90),
                          (undefined1 *)((long)ppuVar6 + -0xf0));
      puVar22 = *(undefined8 **)((long)ppuVar6 + -0x88);
      puVar18 = *(undefined8 **)((long)ppuVar6 + -0x90);
      *(undefined8 *)((long)ppuVar6 + -0x90) = 0;
      *(undefined8 *)((long)ppuVar6 + -0x88) = 0;
      *(int *)ppuVar9 = 0;
      ppuVar9[2] = puVar22;
      ppuVar9[1] = puVar18;
      *(undefined8 *)((long)ppuVar6 + -0xd8) = 0;
      *(undefined8 *)((long)ppuVar6 + -0xd0) = 0;
      func_0x000104c33108((undefined1 *)((long)ppuVar6 + -0xd8));
      func_0x000107742a28();
      func_0x000104c33108((undefined1 *)((long)ppuVar6 + -0x90));
      func_0x000107269124();
code_r0x0001077305ac:
      func_0x000107741a68();
      if ((bool)uVar8) {
        return unaff_x19;
      }
      ___stack_chk_fail();
      func_0x000107269124();
      func_0x000107742904();
      if (*(int *)(ppuVar10 + 0xf) != 0) {
        *(undefined1 ***)((long)ppuVar6 + -0x100) = ppuVar20;
        *(undefined **)((long)ppuVar6 + -0xf8) = &UNK_107730678;
        func_0x00010563ab98();
        if (*(int *)(ppuVar10 + 0xf) != 1) {
          pdVar7 = (double *)((long)ppuVar6 + -0x110);
          ppuVar20 = (undefined1 **)((long)ppuVar6 + -0x110);
          *(undefined1 **)((long)ppuVar6 + -0x110) = (undefined1 *)((long)ppuVar6 + -0x100);
          *(undefined **)((long)ppuVar6 + -0x108) = &UNK_107730690;
          puVar21 = &SUB_1077306ac;
          func_0x00010563ab98();
          pdVar19 = (double *)extraout_x8_03;
code_r0x0001077306ac:
          *(undefined8 ***)((long)pdVar7 + -0x20) = param_5;
          *(undefined8 ***)((long)pdVar7 + -0x18) = unaff_x19;
          *(undefined1 ***)((long)pdVar7 + -0x10) = ppuVar20;
          *(undefined **)((long)pdVar7 + -8) = puVar21;
          func_0x0001077306e4();
          puVar18 = *ppuVar15;
          puVar23 = ppuVar15[3];
          puVar22 = ppuVar15[2];
          pdVar19[1] = (double)ppuVar15[1];
          *pdVar19 = (double)puVar18;
          pdVar19[3] = (double)puVar23;
          pdVar19[2] = (double)puVar22;
          pdVar19[4] = (double)ppuVar15[4];
          return ppuVar10;
        }
      }
      return ppuVar10 + 1;
    }
    ppuVar15 = (undefined8 **)((long)ppuVar6 + -0xd8);
    puVar21 = &UNK_107730560;
    ppuVar6 = (undefined1 **)((long)ppuVar6 + -0xf0);
    ppuVar12 = ppuVar9;
    param_4 = ppuVar14;
    param_3 = param_2;
  } while( true );
}



/* Entry: 1077307ec; end: 10773081b;  */

long FUN_1077307ec(long param_1,long param_2)

{
  func_0x00010726cc04(param_1 + 8,param_2 + 8);
  *(undefined4 *)(param_1 + 0x70) = 1;
  return param_1;
}



/* Entry: 1077309b4; end: 1077309f7;  */

void FUN_1077309b4(long param_1)

{
  if (*(uint *)(param_1 + 0x70) != 0xffffffff) {
    func_0x000107742644((&PTR_DAT_1109d2278)[*(uint *)(param_1 + 0x70)]);
  }
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  return;
}



/* Entry: 107730af0; end: 107730afb;  */

undefined ** FUN_107730af0(void)

{
  return &PTR_DAT_1109d22f8;
}



/* Entry: 107730c00; end: 107730cf7;  */

undefined8 * FUN_107730c00(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined8 *unaff_x23;
  long unaff_x24;
  undefined1 auStack_420 [1048];
  undefined8 uStack_8;
  
  func_0x0001077438e0();
  func_0x000107743520();
  func_0x000107741b04();
  func_0x00010774222c();
  func_0x000107742764(0);
  func_0x0001077430c8();
  func_0x000107741c60();
  do {
    if (unaff_x24 == 0) {
      func_0x000107743254();
      func_0x000107743364();
      func_0x00010772ff14();
      func_0x000107743348();
      if ((bool)in_ZR) {
        func_0x000107743220();
        func_0x000107742a04();
      }
      else {
        func_0x000107742cac();
        func_0x0001077428fc();
      }
      func_0x0001077427e8();
      break;
    }
    param_1 = (undefined8 *)*unaff_x23;
    func_0x000107742380(auStack_420);
    func_0x000107743260();
    if ((bool)in_ZR) {
      func_0x0001077430d0();
      func_0x0001077430c0();
    }
    else {
      func_0x000107742cac();
      func_0x0001077428fc();
    }
    func_0x000107742ca4();
    func_0x000107742668();
  } while ((bool)in_ZR);
  func_0x000107742c5c();
  func_0x000107741c94(uStack_8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107742c5c();
    func_0x000107742904();
    *param_1 = &PTR_DAT_1109d1d80;
    func_0x000104c2f714(param_1 + 9);
    func_0x00010772d754(param_1 + 5);
    func_0x0001072c9884(param_1 + 2);
    return param_1;
  }
  return param_1;
}



/* Entry: 107730fc0; end: 107730fd3;  */

void FUN_107730fc0(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107731220; end: 10773122b;  */

/* WARNING: Possible PIC construction at 0x0001077312a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077312a4) */
/* WARNING: Removing unreachable block (ram,0x0001077312bc) */
/* WARNING: Removing unreachable block (ram,0x0001077312ac) */
/* WARNING: Removing unreachable block (ram,0x0001077312c8) */
/* WARNING: Removing unreachable block (ram,0x0001077312dc) */
/* WARNING: Removing unreachable block (ram,0x0001077312ec) */
/* WARNING: Removing unreachable block (ram,0x00010772d85c) */
/* WARNING: Removing unreachable block (ram,0x000107742aa0) */
/* WARNING: Removing unreachable block (ram,0x0001077312d4) */
/* WARNING: Removing unreachable block (ram,0x0001077422e4) */

void FUN_107731220(ulong param_1)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  
  puVar1 = (undefined1 *)register0x00000008;
  while( true ) {
    *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar1 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
    *(undefined **)(puVar1 + -8) = unaff_x30;
    func_0x000107742ea0();
    func_0x000107741ca8();
    func_0x0001077432ec();
    if ((param_1 & 1) == 0) {
      func_0x00010774238c();
    }
    else {
      unaff_x21 = puVar1 + -0xa8;
      func_0x000107743c1c();
      func_0x000107751a40();
      func_0x00010774257c();
      func_0x000107742e4c();
    }
    func_0x0001077419ec();
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    __Unwind_Resume();
    *(undefined8 *)(puVar1 + -0xd0) = unaff_x20;
    *(undefined8 *)(puVar1 + -200) = unaff_x19;
    *(undefined1 **)(puVar1 + -0xc0) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0xb8) = &UNK_107731284;
    unaff_x29 = puVar1 + -0xc0;
    func_0x000107741b64();
    param_1 = 0;
    unaff_x30 = &UNK_1077312a4;
    puVar1 = puVar1 + -0x160;
  }
  return;
}



/* Entry: 10773140c; end: 107731477;  */

undefined8 * FUN_10773140c(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 auStack_a8 [17];
  
  func_0x000107741b64(param_1,param_1);
  puVar1 = auStack_a8;
  func_0x000107731378();
  func_0x000107742d38();
  if ((bool)in_ZR) {
    func_0x000107742c08();
    func_0x000107742a04();
  }
  else {
    func_0x000107742c00();
    func_0x0001077428fc();
  }
  func_0x000107742150();
  func_0x000107741a50();
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x000107742904();
  *puVar1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(puVar1 + 9);
  func_0x00010772d754(puVar1 + 5);
  func_0x0001072c9884(puVar1 + 2);
  return puVar1;
}



/* Entry: 1077315a8; end: 1077315bb;  */

void FUN_1077315a8(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107731748; end: 107731753;  */

void FUN_107731748(ulong param_1)

{
  uint in_w8;
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x000107743424();
  if ((param_1 >> 0x20 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    *(double *)(unaff_x19 + 0x10) = (double)(in_w8 & 0xff);
    uVar1 = 2;
  }
  func_0x0001077424ac(uVar1);
  return;
}



/* Entry: 1077318d8; end: 107731943;  */

undefined8 * FUN_1077318d8(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 auStack_a8 [17];
  
  func_0x000107741b64(param_1,param_1);
  puVar1 = auStack_a8;
  func_0x000107731880();
  func_0x000107742d38();
  if ((bool)in_ZR) {
    func_0x000107742c08();
    func_0x000107742a04();
  }
  else {
    func_0x000107742c00();
    func_0x0001077428fc();
  }
  func_0x000107742150();
  func_0x000107741a50();
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x000107742904();
  *puVar1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(puVar1 + 9);
  func_0x00010772d754(puVar1 + 5);
  func_0x0001072c9884(puVar1 + 2);
  return puVar1;
}



/* Entry: 107731bb0; end: 107731be3;  */

void FUN_107731bb0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  func_0x000107731be4();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 107731f30; end: 107731f77;  */

undefined1 * FUN_107731f30(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *unaff_x19;
  undefined1 auStack_90 [112];
  
  func_0x000107741be8();
  puVar1 = auStack_90;
  func_0x0001072786d8(puVar1,param_2 + 8);
  func_0x00010774257c();
  func_0x000107742bf8();
  func_0x000107741a50();
  if ((bool)in_ZR) {
    return unaff_x19;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  do {
    func_0x00010774367c();
    func_0x000107743b50();
  } while (!(bool)in_ZR);
  return puVar1;
}



/* Entry: 1077322cc; end: 1077322d7;  */

/* WARNING: Possible PIC construction at 0x000107732458: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010773245c) */
/* WARNING: Removing unreachable block (ram,0x000107732474) */
/* WARNING: Removing unreachable block (ram,0x000107732464) */
/* WARNING: Removing unreachable block (ram,0x000107732480) */
/* WARNING: Removing unreachable block (ram,0x000107732494) */
/* WARNING: Removing unreachable block (ram,0x0001077324a4) */
/* WARNING: Removing unreachable block (ram,0x00010772d85c) */
/* WARNING: Removing unreachable block (ram,0x000107742aa0) */
/* WARNING: Removing unreachable block (ram,0x00010773248c) */
/* WARNING: Removing unreachable block (ram,0x0001077422e4) */

void FUN_1077322cc(undefined1 *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 in_ZR;
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  
  puVar2 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar2 + -0x30) = unaff_x28;
    *(undefined8 *)(puVar2 + -0x28) = unaff_x27;
    *(undefined1 **)(puVar2 + -0x20) = unaff_x20;
    *(undefined1 **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined **)(puVar2 + -8) = unaff_x30;
    func_0x000107742ea0();
    func_0x000107741ca8();
    func_0x0001077432ec();
    if (((ulong)param_1 & 1) == 0) {
      func_0x00010774238c();
      unaff_x19 = param_1;
    }
    else {
      func_0x000107751674(puVar2 + -0xf8,unaff_x20);
      if ((puVar2[-0xb8] & 1) == 0) {
        func_0x00010774238c();
      }
      else {
        iVar1 = *(int *)(puVar2 + -0xf8);
        in_ZR = iVar1 == 2;
        if ((bool)in_ZR) {
          func_0x000107743c10();
          func_0x0001077428b0();
code_r0x000107732394:
          func_0x00010774357c();
        }
        else {
          in_ZR = iVar1 == 3;
          if ((bool)in_ZR) {
            func_0x000107743c10();
            func_0x0001077428b0();
            goto code_r0x000107732394;
          }
          in_ZR = iVar1 == 4;
          if ((bool)in_ZR) {
            *(undefined4 *)(puVar2 + -0x78) = 7;
            func_0x0001077428b0();
            goto code_r0x000107732394;
          }
          in_ZR = iVar1 == 1;
          if ((bool)in_ZR) {
            *(undefined4 *)(puVar2 + -0x78) = 3;
            *(undefined8 *)(puVar2 + -0x70) = *(undefined8 *)(puVar2 + -0xf0);
            func_0x0001077428b0();
            goto code_r0x000107732394;
          }
          func_0x000104c2fe00(puVar2 + -0xb0,puVar2 + -0xf0);
          func_0x000104c33004(puVar2 + -0x78,puVar2 + -0xb0);
          func_0x0001077765a4(puVar2 + -0x168);
          func_0x00010774357c();
          func_0x000104c2f714(puVar2 + -0xb0);
        }
        unaff_x20 = puVar2 + -0x168;
        func_0x00010774257c();
        func_0x000107742bf8();
      }
      unaff_x19 = puVar2 + -0xf8;
      func_0x00010737c444();
    }
    func_0x0001077419ec();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010774357c();
    func_0x000104c2f714(puVar2 + -0xb0);
    func_0x00010737c444(puVar2 + -0xf8);
    func_0x000107742904();
    *(undefined1 **)(puVar2 + -400) = unaff_x20;
    *(undefined1 **)(puVar2 + -0x188) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x180) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x178) = &UNK_10773243c;
    unaff_x29 = puVar2 + -0x180;
    func_0x000107741b64();
    param_1 = puVar2 + -0x218;
    unaff_x30 = &UNK_10773245c;
    puVar2 = puVar2 + -0x220;
  } while( true );
}



/* Entry: 107732630; end: 10773269b;  */

undefined8 * FUN_107732630(long param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 auStack_a8 [17];
  
  func_0x000107741b64();
  puVar1 = auStack_a8;
  func_0x000107732530(puVar1,*(undefined8 *)(param_1 + 0x108));
  func_0x000107742d38();
  if ((bool)in_ZR) {
    func_0x000107742c08();
    func_0x000107742a04();
  }
  else {
    func_0x000107742c00();
    func_0x0001077428fc();
  }
  func_0x000107742150();
  func_0x000107741a50();
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x000107742904();
  *puVar1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(puVar1 + 9);
  func_0x00010772d754(puVar1 + 5);
  func_0x0001072c9884(puVar1 + 2);
  return puVar1;
}



/* Entry: 107732820; end: 107732833;  */

void FUN_107732820(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107732a18; end: 107732a3b;  */

void FUN_107732a18(long param_1,long *param_2)

{
  double *pdVar1;
  long lVar2;
  double dVar3;
  
  dVar3 = 0.0;
  pdVar1 = (double *)*param_2;
  for (lVar2 = param_2[1] << 3; lVar2 != 0; lVar2 = lVar2 + -8) {
    dVar3 = dVar3 + *pdVar1;
    pdVar1 = pdVar1 + 1;
  }
  *(double *)(param_1 + 8) = dVar3;
  *(undefined4 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 107732d04; end: 107732d2f;  */

void FUN_107732d04(long param_1)

{
  undefined1 in_ZR;
  
  func_0x000107743454();
  if ((param_1 != 0) && (func_0x000107743850(), !(bool)in_ZR)) {
    __ZdlPv();
  }
  return;
}



/* Entry: 10773305c; end: 10773305f;  */

undefined8 * FUN_10773305c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 107733358; end: 10773335f;  */

void FUN_107733358(long param_1,double param_2,double param_3)

{
  *(double *)(param_1 + 8) = param_2 - param_3;
  *(undefined4 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 1077335c4; end: 1077335d7;  */

void FUN_1077335c4(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10773385c; end: 10773393b;  */

double * FUN_10773385c(double *param_1)

{
  undefined1 uVar1;
  long unaff_x23;
  double dVar2;
  double unaff_d9;
  undefined1 auStack_88 [136];
  
  func_0x0001077431e0();
  func_0x0001077418c8();
  func_0x00010774249c();
  func_0x000107742e70();
  do {
    uVar1 = unaff_x23 == 3;
    if ((bool)uVar1) {
      func_0x0001077424c8();
      dVar2 = *param_1;
      func_0x000107742e2c();
      func_0x0001077436bc();
      func_0x000107743384();
      func_0x000107743bd8(dVar2 * unaff_d9 * *param_1);
      func_0x00010774366c();
      func_0x0001077420e4();
      func_0x0001077429bc();
      goto LAB_107733900;
    }
    func_0x0001077422ac();
    param_1 = (double *)*param_1;
    func_0x000107742138(auStack_88);
    func_0x00010774343c();
    if ((bool)uVar1) {
      func_0x000107742f9c();
      func_0x000107742190();
    }
    else {
      func_0x000107742f94();
      func_0x0001077428fc();
    }
    func_0x0001077429a4();
    func_0x0001077422c4();
  } while ((bool)uVar1);
  uVar1 = 0;
LAB_107733900:
  func_0x000107743058();
  func_0x000107741c48();
  if ((bool)uVar1) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107742254();
  func_0x000107743058();
  func_0x000107742904();
  *param_1 = (double)&PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 107733b80; end: 107733c97;  */

void FUN_107733b80(long *param_1)

{
  double *pdVar1;
  undefined1 uVar2;
  long extraout_x8;
  long lVar3;
  code *pcVar4;
  long unaff_x22;
  long unaff_x24;
  double dVar5;
  long alStack_88 [8];
  int iStack_48;
  undefined8 uStack_8;
  
  func_0x000107742d00();
  func_0x000107741834();
  func_0x00010774246c();
  func_0x000107742e64();
  do {
    uVar2 = unaff_x24 == 4;
    if ((bool)uVar2) {
      pcVar4 = *(code **)(unaff_x22 + 0x80);
      func_0x0001077424d4();
      func_0x000107742ce8();
      func_0x000107743b68();
      func_0x00010774368c();
      func_0x000107743684();
      func_0x000107742864();
      (*pcVar4)();
      uVar2 = iStack_48 == 1;
      if ((bool)uVar2) {
        param_1 = alStack_88;
        func_0x00010772d6b8();
        func_0x0001077420e4();
      }
      else {
        param_1 = alStack_88;
        func_0x00010772d6a0();
        func_0x0001077428fc();
      }
      func_0x000107742974(alStack_88);
      goto LAB_107733c50;
    }
    func_0x0001077422b8();
    param_1 = (long *)*param_1;
    func_0x0001077422a0(alStack_88);
    func_0x000107743b5c();
    if ((bool)uVar2) {
      func_0x000107742fd4();
      func_0x000107742184();
    }
    else {
      func_0x000107742fcc();
      func_0x0001077428fc();
    }
    func_0x00010774299c();
    func_0x0001077422d4();
  } while ((bool)uVar2);
  uVar2 = 0;
LAB_107733c50:
  func_0x00010774306c();
  func_0x000107741c94(uStack_8);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x000107742974(alStack_88);
    func_0x00010774306c();
    func_0x000107742904();
    dVar5 = 1.0;
    pdVar1 = (double *)*param_1;
    for (lVar3 = param_1[1] << 3; lVar3 != 0; lVar3 = lVar3 + -8) {
      dVar5 = dVar5 * *pdVar1;
      pdVar1 = pdVar1 + 1;
    }
    *(double *)(extraout_x8 + 8) = dVar5;
    *(undefined4 *)(extraout_x8 + 0x40) = 1;
    return;
  }
  return;
}



/* Entry: 107733fec; end: 107733fef;  */

undefined8 * FUN_107733fec(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 1077342b0; end: 1077342cf;  */

void FUN_1077342b0(void)

{
  _pow();
  func_0x00010774250c();
  return;
}



/* Entry: 107734538; end: 10773454b;  */

void FUN_107734538(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077347cc; end: 107734873;  */

undefined8 * FUN_1077347cc(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  int unaff_w20;
  
  func_0x0001077418ec();
  func_0x000107742168();
  param_1 = (undefined8 *)*param_1;
  func_0x000107741dcc();
  func_0x000107742de8();
  if ((bool)in_ZR) {
    func_0x0001077429cc();
    func_0x000107742a84();
    func_0x0001077420a0();
  }
  else {
    func_0x0001077429c4();
    func_0x0001077428fc();
  }
  func_0x00010774207c();
  uVar1 = unaff_w20 == 1;
  if ((bool)uVar1) {
    func_0x0001077429b4();
    _log(*param_1);
    func_0x000107741ffc();
    func_0x000107742ab0();
    func_0x0001077420e4();
    func_0x0001077429bc();
  }
  func_0x000107742088();
  func_0x0001077419ec();
  if ((bool)uVar1) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107742254();
  func_0x000107742088();
  func_0x000107742904();
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 107734a2c; end: 107734aeb;  */

void FUN_107734a2c(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  int unaff_w21;
  
  func_0x0001077438cc();
  func_0x00010774187c();
  func_0x00010774215c();
  param_1 = (undefined8 *)*param_1;
  func_0x000107741e20();
  func_0x000107742cc4();
  if ((bool)in_ZR) {
    func_0x0001077429cc();
    func_0x000107742a84();
    func_0x0001077420a0();
  }
  else {
    func_0x0001077429c4();
    func_0x0001077428fc();
  }
  func_0x00010774207c();
  uVar1 = unaff_w21 == 1;
  if ((bool)uVar1) {
    func_0x0001077429b4();
    func_0x000107742df4(*param_1);
    func_0x000107742c78();
    if ((bool)uVar1) {
      func_0x000107742ab0();
      func_0x0001077420e4();
    }
    else {
      func_0x000107742d50();
      func_0x0001077428fc();
    }
    func_0x000107742214();
  }
  func_0x000107742088();
  func_0x000107741a68();
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107741eec();
  func_0x000107742088();
  func_0x000107742904();
  _sin();
  func_0x00010774250c();
  return;
}



/* Entry: 107734d54; end: 107734d57;  */

undefined8 * FUN_107734d54(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 107734fcc; end: 107734feb;  */

void FUN_107734fcc(void)

{
  _asin();
  func_0x00010774250c();
  return;
}



/* Entry: 107735238; end: 10773524b;  */

void FUN_107735238(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077354d4; end: 1077355c3;  */

undefined8 * FUN_1077354d4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  undefined8 *extraout_x8;
  long extraout_x9;
  long lVar2;
  undefined8 *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 uVar3;
  undefined8 in_stack_000000f8;
  
  func_0x000107743aa8();
  func_0x000107741e88();
  *(undefined8 *)(unaff_x23 + 0x90) = 8;
  *(undefined8 *)(unaff_x23 + 0x88) = 0;
  func_0x000107742ed0();
  func_0x00010774347c();
  func_0x00010774241c();
  while (unaff_x24 != 0) {
    param_1 = (undefined8 *)*unaff_x22;
    func_0x0001077420ac(&stack0x00000020);
    func_0x0001077438c0();
    if ((bool)in_ZR) {
      func_0x0001077434f0();
      func_0x00010774316c();
      func_0x0001077432f4();
      func_0x000107742ae0();
    }
    else {
      func_0x000107743500();
      func_0x0001077428fc();
    }
    func_0x000107742ac0();
    unaff_x22 = unaff_x22 + 2;
    func_0x000107742ec4();
    if (!(bool)in_ZR) goto LAB_107735580;
  }
  func_0x000107743bf8();
  uVar3 = 0x7ff0000000000000;
  puVar1 = extraout_x8;
  for (lVar2 = extraout_x9; lVar2 != 0; lVar2 = lVar2 + -8) {
    uVar3 = NEON_fminnm(*puVar1,uVar3);
    puVar1 = puVar1 + 1;
  }
  func_0x000107742dc0(uVar3);
  func_0x000107743734();
  func_0x0001077420e4();
  func_0x0001077429bc();
LAB_107735580:
  func_0x0001077430e4();
  func_0x000107741c94(in_stack_000000f8);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107742254();
  func_0x0001077430e4();
  func_0x000107742904();
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 1077357f8; end: 1077358e3;  */

void FUN_1077357f8(undefined8 *param_1)

{
  float *pfVar1;
  undefined1 in_ZR;
  float *pfVar2;
  undefined4 uVar3;
  long extraout_x8;
  undefined8 *unaff_x23;
  long unaff_x25;
  undefined8 uVar4;
  
  func_0x000107743460();
  func_0x000107742eb8();
  func_0x000107741ab4();
  func_0x0001077426d0();
  func_0x0001077434f8();
  func_0x0001077421b4();
  do {
    if (unaff_x25 == 0) {
      func_0x0001077426b8();
      func_0x000107742b10();
      func_0x000107743744();
      if ((bool)in_ZR) {
        func_0x0001077435d4();
        func_0x0001077420e4();
      }
      else {
        func_0x0001077435cc();
        func_0x0001077428fc();
      }
      func_0x0001077427ac();
      break;
    }
    param_1 = (undefined8 *)*unaff_x23;
    func_0x000107742638(&stack0x00000038);
    func_0x000107743750();
    if ((bool)in_ZR) {
      func_0x0001077434b4();
      func_0x00010774316c();
      func_0x0001077432f4();
      func_0x000107742b64();
    }
    else {
      func_0x0001077434bc();
      func_0x0001077428fc();
    }
    func_0x00010774303c();
    func_0x000107742cd0();
  } while ((bool)in_ZR);
  func_0x000107743164();
  func_0x000107741a80();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001077427ac();
    func_0x000107743164();
    func_0x000107742904();
    pfVar2 = *(float **)*param_1;
    pfVar1 = (float *)((long *)*param_1)[1];
    if (pfVar2 == pfVar1) {
      uVar3 = 0;
    }
    else {
      uVar4 = 0x7ff0000000000000;
      while (pfVar2 != pfVar1) {
        uVar4 = NEON_fminnm((double)*pfVar2,uVar4);
        pfVar2 = pfVar2 + 1;
      }
      *(undefined8 *)(extraout_x8 + 0x10) = uVar4;
      uVar3 = 2;
    }
    *(undefined4 *)(extraout_x8 + 0x70) = uVar3;
    *(undefined4 *)(extraout_x8 + 0x78) = 1;
    return;
  }
  return;
}



/* Entry: 107735b90; end: 107735c73;  */

undefined8 * FUN_107735b90(long *param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *puStack_138;
  undefined8 auStack_b8 [15];
  int iStack_40;
  
  func_0x000107741910();
  func_0x000107742168();
  puVar2 = (undefined8 *)*param_1;
  func_0x0001077420ac(auStack_b8);
  if (iStack_40 == 1) {
    func_0x000107743204();
    func_0x000107743ad8();
    func_0x0001077420a0();
  }
  else {
    func_0x0001077431fc();
    func_0x0001077428fc();
  }
  func_0x00010774252c();
  uVar1 = iStack_40 == 1;
  if ((bool)uVar1) {
    func_0x00010774304c();
    puVar2 = auStack_b8;
    func_0x000107735b54(puVar2,*puStack_138,puStack_138[1]);
    func_0x000107742cbc();
    func_0x000107743bac();
    if ((bool)uVar1) {
      func_0x000107743204();
      func_0x000107742b70();
    }
    else {
      func_0x0001077431fc();
      func_0x0001077428fc();
    }
    func_0x00010774252c();
  }
  func_0x0001077427d0();
  func_0x0001077419ec();
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010774252c();
  func_0x0001077427d0();
  func_0x000107742904();
  *puVar2 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(puVar2 + 9);
  func_0x00010772d754(puVar2 + 5);
  func_0x0001072c9884(puVar2 + 2);
  return puVar2;
}



/* Entry: 107735eb4; end: 107735ec7;  */

void FUN_107735eb4(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10773611c; end: 1077361e3;  */

double * FUN_10773611c(double *param_1)

{
  undefined1 uVar1;
  long unaff_x23;
  double dVar2;
  
  func_0x000107742954();
  func_0x0001077418c8();
  func_0x000107742010();
  do {
    uVar1 = unaff_x23 == 2;
    if ((bool)uVar1) {
      func_0x0001077424c8();
      dVar2 = *param_1;
      func_0x000107742e2c();
      func_0x000107742624(*param_1 * (double)(long)(dVar2 / *param_1));
      func_0x000107742e14();
      func_0x0001077420e4();
      func_0x0001077429bc();
      goto LAB_1077361ac;
    }
    func_0x0001077422ac();
    param_1 = (double *)*param_1;
    func_0x000107742138(&stack0x000000e8);
    func_0x000107743550();
    if ((bool)uVar1) {
      func_0x000107742e24();
      func_0x000107742190();
    }
    else {
      func_0x000107742e1c();
      func_0x0001077428fc();
    }
    func_0x0001077429a4();
    func_0x0001077422c4();
  } while ((bool)uVar1);
  uVar1 = 0;
LAB_1077361ac:
  func_0x0001077429e0();
  func_0x000107741c48();
  if ((bool)uVar1) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107742254();
  func_0x0001077429e0();
  func_0x000107742904();
  *param_1 = (double)&PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10773639c; end: 10773645b;  */

void FUN_10773639c(double param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  double *pdVar2;
  long extraout_x8;
  int unaff_w21;
  
  func_0x0001077438cc();
  func_0x00010774187c();
  func_0x00010774215c();
  pdVar2 = (double *)*param_2;
  func_0x000107741e20();
  func_0x000107742cc4();
  if ((bool)in_ZR) {
    func_0x0001077429cc();
    func_0x000107742a84();
    func_0x0001077420a0();
  }
  else {
    func_0x0001077429c4();
    func_0x0001077428fc();
  }
  func_0x00010774207c();
  uVar1 = unaff_w21 == 1;
  if ((bool)uVar1) {
    func_0x0001077429b4();
    param_1 = *pdVar2;
    func_0x000107742df4();
    func_0x000107742c78();
    if ((bool)uVar1) {
      func_0x000107742ab0();
      func_0x0001077420e4();
    }
    else {
      func_0x000107742d50();
      func_0x0001077428fc();
    }
    func_0x000107742214();
  }
  func_0x000107742088();
  func_0x000107741a68();
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107741eec();
  func_0x000107742088();
  func_0x000107742904();
  *(long *)(extraout_x8 + 8) = (long)param_1;
  *(undefined4 *)(extraout_x8 + 0x40) = 1;
  return;
}



/* Entry: 107736694; end: 107736697;  */

undefined8 * FUN_107736694(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 107736914; end: 107736923;  */

void FUN_107736914(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 unaff_w19;
  long unaff_x20;
  
  func_0x000107743614(param_1,param_2,param_3);
  func_0x000107264c5c(param_3);
  func_0x000107278cfc();
  *(undefined1 *)(unaff_x20 + 8) = unaff_w19;
  *(undefined4 *)(unaff_x20 + 0x40) = 1;
  return;
}



/* Entry: 107736bac; end: 107736c77;  */

undefined8 * FUN_107736bac(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  int unaff_w20;
  
  func_0x000107741910();
  func_0x000107742168();
  param_1 = (undefined8 *)*param_1;
  func_0x000107741e48();
  func_0x000107743728();
  if ((bool)in_ZR) {
    func_0x000107742a0c();
    func_0x000107742c38();
    func_0x0001077420a0();
  }
  else {
    func_0x000107742a14();
    func_0x0001077428fc();
  }
  func_0x0001077420b8();
  uVar1 = unaff_w20 == 1;
  if ((bool)uVar1) {
    func_0x0001077421a8();
    func_0x00010774371c();
    func_0x000107736b70();
    func_0x000107742994();
    func_0x000107742db4();
    if ((bool)uVar1) {
      func_0x000107742e5c();
      func_0x000107742548();
    }
    else {
      func_0x000107742e54();
      func_0x0001077428fc();
    }
    func_0x0001077422f0();
  }
  func_0x0001077420d8();
  func_0x0001077419ec();
  if ((bool)uVar1) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107741fb4();
  func_0x0001077420d8();
  func_0x000107742904();
  *param_1 = &PTR_DAT_1109d1d80;
  func_0x000104c2f714(param_1 + 9);
  func_0x00010772d754(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 107736eb8; end: 107736ecb;  */

void FUN_107736eb8(void)

{
  func_0x00010772d85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077371e8; end: 1077371f7;  */

/* WARNING: Possible PIC construction at 0x000107737414: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107737418) */
/* WARNING: Removing unreachable block (ram,0x000107737438) */
/* WARNING: Removing unreachable block (ram,0x000107737428) */
/* WARNING: Removing unreachable block (ram,0x000107737444) */

long * FUN_1077371e8(long *param_1)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  undefined *puVar7;
  long *unaff_x19;
  undefined1 *unaff_x20;
  undefined1 *unaff_x21;
  undefined1 *unaff_x22;
  undefined1 *unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  long lVar8;
  
  puVar1 = (undefined1 *)register0x00000008;
  while( true ) {
    plVar4 = (long *)(puVar1 + -0xa0);
    plVar5 = (long *)(puVar1 + -0xa0);
    *(undefined8 *)(puVar1 + -0x40) = unaff_x24;
    *(undefined1 **)(puVar1 + -0x38) = unaff_x23;
    *(undefined1 **)(puVar1 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar1 + -0x28) = unaff_x21;
    *(undefined1 **)(puVar1 + -0x20) = unaff_x20;
    *(long **)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
    *(undefined **)(puVar1 + -8) = unaff_x30;
    func_0x000107742a34();
    func_0x000107741cf4();
    iVar6 = (int)param_1;
    func_0x000104c2d614();
    if (iVar6 == 0) {
      puVar2 = unaff_x21;
      func_0x000104c2d614();
      if ((int)puVar2 == 0) {
        *(undefined8 *)(puVar1 + -0xa0) = 0;
        *(undefined8 *)(puVar1 + -0x98) = 0;
        *(undefined8 *)(puVar1 + -0x90) = 0;
        unaff_x22 = unaff_x20;
        func_0x000104c2d634();
        func_0x0001072dd514(puVar1 + -0xa0);
        func_0x000107264c5c();
        unaff_x23 = (undefined1 *)0x0;
        puVar2 = unaff_x21;
        while( true ) {
          func_0x000107742cf0();
          func_0x0001072784dc();
          in_ZR = puVar2 == (undefined1 *)0xffffffffffffffff;
          if ((bool)in_ZR) break;
          puVar3 = unaff_x20;
          func_0x000107526df0(puVar1 + -0x80,unaff_x20,unaff_x23,(long)puVar2 - (long)unaff_x23);
          func_0x000107743a14();
          func_0x0001077432dc();
          unaff_x23 = puVar2 + 1;
          puVar2 = puVar3;
        }
        func_0x000107526df0(puVar1 + -0x80,unaff_x20,unaff_x23,0xffffffffffffffff);
        func_0x000107743a14();
        func_0x0001077432dc();
        func_0x0001073fb2d4(puVar1 + -0x80);
        lVar8 = *(long *)(puVar1 + -0x80);
        unaff_x19[2] = *(long *)(puVar1 + -0x78);
        unaff_x19[1] = lVar8;
        *(undefined8 *)(puVar1 + -0x80) = 0;
        *(undefined8 *)(puVar1 + -0x78) = 0;
        func_0x000107742a28();
        plVar4 = (long *)(puVar1 + -0x80);
        func_0x00010726b09c();
        func_0x000107743708();
        unaff_x24 = 0xffffffffffffffff;
        param_1 = plVar5;
      }
      else {
        func_0x000104c2fe00(puVar1 + -0x80,unaff_x20);
        unaff_x20 = (undefined1 *)0x1;
        param_1 = (long *)(puVar1 + -0x80);
        func_0x000107404228(puVar1 + -0xa0,param_1,1);
        lVar8 = *(long *)(puVar1 + -0xa0);
        unaff_x19[2] = *(long *)(puVar1 + -0x98);
        unaff_x19[1] = lVar8;
        *(undefined8 *)(puVar1 + -0xa0) = 0;
        *(undefined8 *)(puVar1 + -0x98) = 0;
        *(undefined4 *)(unaff_x19 + 8) = 1;
        func_0x000107742d20();
        func_0x0001077432dc();
      }
    }
    else {
      func_0x0001072d124c(puVar1 + -0x80);
      lVar8 = *(long *)(puVar1 + -0x80);
      unaff_x19[2] = *(long *)(puVar1 + -0x78);
      unaff_x19[1] = lVar8;
      *(undefined8 *)(puVar1 + -0x80) = 0;
      *(undefined8 *)(puVar1 + -0x78) = 0;
      func_0x000107742a28();
      plVar4 = (long *)(puVar1 + -0x80);
      func_0x00010726b09c();
    }
    func_0x000107741a68();
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    plVar5 = plVar4;
    func_0x0001077432dc();
    func_0x000107743708();
    func_0x000107742904();
    puVar7 = &UNK_1077373a0;
    func_0x000107743290();
    *(undefined1 **)(puVar1 + -0x50) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0x48) = puVar7;
    unaff_x29 = puVar1 + -0x50;
    func_0x0001077418c8();
    func_0x000107741f34();
    while (in_ZR = unaff_x23 == (undefined1 *)0x2, !(bool)in_ZR) {
      func_0x0001077422ac();
      plVar5 = (long *)*plVar5;
      func_0x000107741f94();
      func_0x000107742eac();
      if ((bool)in_ZR) {
        func_0x0001077429f0();
        func_0x000107742190();
      }
      else {
        func_0x0001077429e8();
        param_1 = plVar5;
        func_0x0001077428fc();
      }
      func_0x0001077429a4();
      func_0x0001077422c4();
      if (!(bool)in_ZR) {
        func_0x0001077429e0();
        func_0x000107741a80();
        if ((bool)in_ZR) {
          return plVar5;
        }
        ___stack_chk_fail();
        func_0x000107742128();
        func_0x0001077429e0();
        func_0x000107742904();
        *(undefined1 **)(puVar1 + -0x2a0) = unaff_x20;
        *(long **)(puVar1 + -0x298) = plVar4;
        *(undefined1 **)(puVar1 + -0x290) = unaff_x29;
        *(undefined **)(puVar1 + -0x288) = &DAT_10773749c;
        *plVar5 = (long)&PTR_DAT_1109d1d80;
        func_0x000104c2f714(plVar5 + 9);
        func_0x00010772d754(plVar5 + 5);
        func_0x0001072c9884(plVar5 + 2);
        return plVar5;
      }
    }
    unaff_x20 = puVar1 + -0x278;
    func_0x0001077424e0();
    func_0x000107743318();
    func_0x000107743810();
    unaff_x30 = &UNK_107737418;
    puVar1 = puVar1 + -0x280;
    unaff_x19 = plVar4;
  }
  return plVar4;
}



/* Entry: 107737624; end: 10773765b;  */

void FUN_107737624(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  
  func_0x000107742a64();
  if (!(bool)in_ZR) {
    func_0x000107742644((&PTR_DAT_1109d30d8)[extraout_x8]);
  }
  func_0x00010774352c();
  return;
}


