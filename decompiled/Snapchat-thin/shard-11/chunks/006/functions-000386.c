/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1086fa2e4; end: 1086fae4b;  */

void FUN_1086fa2e4(ulong param_1,ulong *param_2,undefined8 param_3,long param_4,ulong *param_5)

{
  long *plVar1;
  byte bVar2;
  uint uVar3;
  undefined1 in_ZR;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  long *plVar8;
  ulong *puVar9;
  ulong *puVar10;
  int extraout_w8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong uVar11;
  ulong *puVar12;
  ulong *extraout_x8_01;
  ulong *extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  code *extraout_x8_09;
  code *extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  long extraout_x8_13;
  long extraout_x8_14;
  long extraout_x8_15;
  long extraout_x8_16;
  long extraout_x8_17;
  long extraout_x8_18;
  int extraout_w9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  uint extraout_w10_02;
  uint extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w10_08;
  int extraout_w10_09;
  int extraout_w10_10;
  int extraout_w10_11;
  int extraout_w10_12;
  int extraout_w10_13;
  int extraout_w10_14;
  int extraout_w10_15;
  int extraout_w10_16;
  int extraout_w10_17;
  int extraout_w10_18;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar13;
  long *plVar14;
  ulong *puVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  ulong *unaff_x30;
  ulong in_register_00005008;
  ulong uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  ulong uStack_800;
  ulong uStack_7f8;
  undefined8 uStack_7f0;
  ulong uStack_7e0;
  ulong uStack_7d8;
  undefined8 uStack_7d0;
  byte bStack_408;
  ulong uStack_400;
  ulong uStack_3f8;
  undefined1 uStack_3e8;
  undefined4 uStack_3e0;
  ulong *puStack_3d0;
  undefined1 uStack_338;
  byte bStack_28;
  undefined8 uStack_18;
  
  func_0x000107c32c94();
  func_0x000107c32bb4();
  puVar6 = (undefined8 *)0x4c0;
  uStack_18 = extraout_x8_00;
  __Znwm();
  *puVar6 = FUN_1087017b8;
  puVar6[1] = FUN_108701b44;
  puVar9 = puVar6 + 0x8f;
  puVar10 = puVar6 + 0x81;
  puVar15 = puVar6 + 0x89;
  puVar6[0x96] = param_5;
  puVar6[0x95] = param_2;
  func_0x000107c27f94(puVar6 + 2);
  iVar5 = (int)puVar6 + 0x10;
  func_0x000107c287c4(extraout_x8);
  if ((int)param_4 == 0) {
    func_0x000108702438();
    unaff_x30 = (ulong *)0x1;
    func_0x000107c29fe8();
    if (iVar5 != 0) {
      plVar14 = puVar6 + 0x93;
      *puVar15 = 0;
      puVar6[0x8a] = 0;
      puVar6[0x8b] = 0;
      (**(code **)(**(long **)(param_2[0x16] + 0x1a0) + 0x10))(plVar14);
      uVar17 = *(undefined8 *)(*(long *)(param_2[0x16] + 0x30) + 0x18);
      func_0x000107c278b8(puVar6 + 0x8c,&UNK_10f4b2082);
      func_0x000107c31420(puVar10,uVar17,puVar6 + 0x8c);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar6 + 0x8c);
      func_0x000108702438();
      param_1 = 0x10000000100;
      in_register_00005008 = 0;
      uStack_400 = CONCAT44(uStack_400._4_4_,0x100);
      FUN_108866da0(puVar6 + 4);
      func_0x000107c288b4(&uStack_400,puVar6 + 4);
      plVar1 = puVar6 + 0x94;
      func_0x0001087024f4(&uStack_7e0);
      while ((((bStack_28 & 1) != 0 || ((bStack_408 & 1) != 0)) && (uStack_400 != uStack_7e0))) {
        puVar7 = &uStack_400;
        func_0x000107c288b8();
        func_0x000108702438();
        FUN_108866b68();
        func_0x000108702438();
        FUN_108868114();
        uStack_818 = uStack_818 & 0xffffffff00000000;
        func_0x000107c27994(puVar9,puVar7);
        in_register_00005008 = puVar6[0x90];
        param_1 = *puVar9;
        uStack_7f0 = puVar6[0x91];
        puVar6[0x90] = 0;
        puVar6[0x91] = 0;
        *puVar9 = 0;
        uStack_800 = param_1;
        uStack_7f8 = in_register_00005008;
        FUN_1086fae4c(puVar15,&uStack_818,&uStack_800);
        func_0x000108702298();
        func_0x000107c27914(puVar9);
        if ((int)puVar7[0xd] == 1) {
          (**(code **)(*(long *)*plVar14 + 0x30))((long *)*plVar14,puVar7);
        }
        func_0x000107c28920(&uStack_400);
      }
      func_0x000108702054(&uStack_7e0);
      func_0x000108702054(&uStack_400);
      func_0x000107c288ec(puVar6 + 4);
      func_0x000108702438();
      FUN_108866be4();
      func_0x000107c31428(puVar10);
      lVar16 = puVar6[0x89];
      lVar18 = puVar6[0x8a];
      while( true ) {
        in_ZR = lVar16 == lVar18;
        if ((bool)in_ZR) break;
        plVar8 = *(long **)(param_2[0x16] + 0x150);
        (**(code **)(*plVar8 + 0x38))(plVar8,lVar16 + 8);
        (**(code **)(**(long **)(param_2[0x16] + 400) + 0x38))
                  (*(long **)(param_2[0x16] + 400),lVar16 + 8);
        lVar16 = lVar16 + 0x20;
      }
      uStack_7e0 = 0;
      uStack_7d8 = 0;
      uStack_7d0 = 0;
      uStack_800 = 0;
      uStack_7f8 = 0;
      uStack_7f0 = 0;
      uStack_818 = 0;
      uStack_810 = 0;
      uStack_808 = 0;
      uStack_400 = uStack_400 & 0xffffffffffffff00;
      uStack_338 = 0;
      func_0x000107c32be8(*(undefined8 *)(param_2[0x16] + 0x180));
      (*extraout_x8_09)();
      func_0x000107c27b38(&uStack_400);
      func_0x000107c28c5c(&uStack_818);
      func_0x000107c28c60(&uStack_800);
      func_0x000107c27b40(&uStack_7e0);
      uVar17 = *(undefined8 *)(param_2[0x16] + 0x1a0);
      lVar16 = *plVar14;
      *plVar14 = 0;
      *plVar1 = lVar16;
      func_0x0001087021e8(uVar17);
      (*extraout_x8_10)();
      puVar9 = (ulong *)*plVar1;
      *plVar1 = 0;
      if (puVar9 != (ulong *)0x0) {
        func_0x000108702048();
      }
      lVar16 = *(long *)param_2[0x16];
      func_0x00010870236c();
      if (extraout_x8_11 != 0) {
        do {
          func_0x000107c32bc8();
        } while (extraout_w10_10 != 0);
      }
      func_0x000107c28150();
      lVar18 = *(long *)(lVar16 + 0x10);
      __ZNSt3__15mutex4lockEv(lVar18 + 8);
      param_5 = *(ulong **)(lVar18 + 0x70);
      func_0x000108701f20(0x1086ffb94);
      if (extraout_x8_12 != 0) {
        do {
          func_0x000107c32bc8();
        } while (extraout_w10_11 != 0);
      }
      unaff_x30 = &uStack_400;
      puStack_3d0 = puVar9;
      func_0x000107c28154(lVar18 + 0x48);
      func_0x0001087022b4();
      __ZNSt3__15mutex6unlockEv(lVar18 + 8);
      if (param_5 == (ulong *)0x0) {
        in_register_00005008 = *(ulong *)(lVar16 + 0x18);
        param_1 = *(ulong *)(lVar16 + 0x10);
        uStack_400 = param_1;
        uStack_3f8 = in_register_00005008;
        if (*(long *)(lVar16 + 0x18) != 0) {
          do {
            func_0x000107c32bc8();
          } while (extraout_w10_12 != 0);
        }
        func_0x000107c32be8();
        func_0x000108702208();
        func_0x0001087020ac();
      }
      func_0x0001087020d8();
      func_0x000107c31424(puVar10);
      lVar16 = *plVar14;
      *plVar14 = 0;
      if (lVar16 != 0) {
        func_0x000108702048();
      }
      puVar9 = puVar15;
      func_0x000107c27b3c();
      goto LAB_1086fa9d4;
    }
    func_0x00010870236c();
    if (extraout_x8_06 != 0) {
      do {
        func_0x000107c32bc8();
      } while (extraout_w10_07 != 0);
    }
    func_0x000107c28150();
    func_0x0001087021f4();
    func_0x000108702000();
    lVar16 = *(long *)(param_4 + 0x70);
    func_0x000108701f20(0x1086ffbcc);
    if (extraout_x8_07 != 0) {
      do {
        func_0x000107c32bc8();
      } while (extraout_w10_08 != 0);
    }
    puStack_3d0 = puVar15;
    func_0x00010870205c();
    func_0x000108701ea8(uStack_3f8);
    func_0x000108701fc8();
    if (lVar16 == 0) {
      func_0x000108701f58();
      uStack_400 = param_1;
      uStack_3f8 = in_register_00005008;
      if (extraout_x8_08 != 0) {
        do {
          func_0x000107c32bc8();
        } while (extraout_w10_09 != 0);
      }
      func_0x000107c32be8();
      func_0x000108702208();
      goto LAB_1086fa6ec;
    }
  }
  else {
    if ((*(byte *)((long)param_2 + 0x81) & 1) != 0) {
      puVar7 = puVar6 + 0x92;
      uVar11 = param_5[1];
      in_register_00005008 = param_5[1];
      param_1 = *param_5;
      puVar6[5] = in_register_00005008;
      puVar6[4] = param_1;
      if (uVar11 != 0) {
        do {
          func_0x000107c32bc8();
        } while (extraout_w10 != 0);
      }
      uVar11 = param_2[0x2a];
      *puVar7 = uVar11;
      if (uVar11 != 0) {
        do {
          func_0x000107c32bd0();
        } while (extraout_w10_00 != 0);
      }
      puVar9 = param_2 + 0x2e;
      unaff_x30 = puVar7;
      func_0x000107c2883c(puVar15);
      *puVar10 = *puVar15;
      do {
        func_0x000107c32bd0();
      } while (extraout_w10_01 != 0);
      if (((uint)*(undefined8 *)(*puVar10 + 0x10) >> 1 & 1) == 0) {
        *(undefined1 *)(puVar6 + 0x97) = 0;
        param_2 = (ulong *)puVar6[0x81];
        func_0x000108701ec4();
        param_5 = (ulong *)*puVar9;
        if (param_5 == (ulong *)0x0) {
          func_0x000107c3a5c0();
          param_5 = (ulong *)*puVar9;
        }
        puVar12 = param_2 + 2;
        do {
          if (*puVar12 == 0) {
            func_0x000108701fac();
            puVar12 = extraout_x8_02;
            uVar3 = extraout_w10_03;
            uVar13 = extraout_w11_00;
          }
          else {
            func_0x000108702238();
            puVar12 = extraout_x8_01;
            uVar3 = extraout_w10_02;
            uVar13 = extraout_w11;
          }
          if ((uVar13 & 1) != 0) {
            puVar15 = (ulong *)param_2[0x12];
            bVar2 = *(byte *)((long)puVar15 + 1);
            uVar11 = (ulong)bVar2;
            bVar4 = (byte)*puVar15 <= bVar2;
            in_ZR = bVar2 == (byte)*puVar15;
            if ((bool)in_ZR) {
              func_0x000108701f9c();
              iVar5 = extraout_w8;
              if (bVar4) {
                iVar5 = extraout_w9;
              }
              puVar9 = (ulong *)(ulong)(iVar5 * 0x18 + 0x10);
              _malloc();
              uVar11 = 0;
              *(byte *)puVar9 = (byte)iVar5;
              *(byte *)((long)puVar9 + 1) = 0;
              puVar9[1] = 0;
              puVar15[1] = (ulong)puVar9;
              param_2[0x12] = (ulong)puVar9;
              puVar15 = puVar9;
            }
            puVar15[uVar11 * 3 + 2] = 0;
            puVar15[uVar11 * 3 + 3] = (ulong)puVar6;
            puVar15[uVar11 * 3 + 4] = (ulong)param_5;
            *(char *)(param_2[0x12] + 1) = *(char *)(param_2[0x12] + 1) + '\x01';
            param_2[2] = 0;
            goto LAB_1086fa9e0;
          }
        } while ((uVar3 >> 1 & 1) == 0);
      }
      func_0x000107c28834(puVar10);
      func_0x000107c27f9c(puVar10);
      func_0x000107c27f9c(puVar15);
      func_0x000107c27f9c(puVar7);
      func_0x000108702580();
      func_0x000107c295c4(&uStack_800);
      uStack_7e0 = 0;
      if (uStack_800 != 0) {
        uStack_7e0 = uStack_800 + 8;
      }
      uStack_7d8 = uStack_7f8;
      uStack_800 = 0;
      uStack_7f8 = 0;
      puVar10 = (ulong *)puVar6[0x8d];
      for (puVar9 = (ulong *)puVar6[0x8c]; in_ZR = 1, puVar9 != puVar10; puVar9 = puVar9 + 2) {
        if (*puVar9 == uStack_7e0) goto LAB_1086fa8d4;
      }
      goto LAB_1086fa900;
    }
    func_0x00010870236c();
    if (extraout_x8_03 != 0) {
      do {
        func_0x000107c32bc8();
      } while (extraout_w10_04 != 0);
    }
    func_0x000107c28150();
    func_0x0001087021f4();
    func_0x000108702000();
    lVar16 = *(long *)(param_4 + 0x70);
    func_0x000108701f20(FUN_1086ffb24);
    if (extraout_x8_04 != 0) {
      do {
        func_0x000107c32bc8();
      } while (extraout_w10_05 != 0);
    }
    puStack_3d0 = puVar15;
    func_0x00010870205c();
    func_0x000108701ea8(uStack_3f8);
    func_0x000108701fc8();
    if (lVar16 == 0) {
      func_0x000108701f58();
      uStack_400 = param_1;
      uStack_3f8 = in_register_00005008;
      if (extraout_x8_05 != 0) {
        do {
          func_0x000107c32bc8();
        } while (extraout_w10_06 != 0);
      }
      func_0x000107c32be8();
      func_0x000108702208();
LAB_1086fa6ec:
      func_0x0001087020ac();
    }
  }
  puVar9 = &uStack_7e0;
  goto LAB_1086fa9d0;
LAB_1086fa8d4:
  while( true ) {
    param_2 = puVar9 + 2;
    in_ZR = param_2 == puVar10;
    if ((bool)in_ZR) break;
    uStack_3f8 = puVar9[1];
    uStack_400 = *puVar9;
    in_register_00005008 = puVar9[3];
    param_1 = *param_2;
    *param_2 = 0;
    puVar9[3] = 0;
    puVar9[1] = in_register_00005008;
    *puVar9 = param_1;
    func_0x000107c29574(&uStack_400);
    puVar9 = param_2;
  }
  func_0x0001087024a0();
LAB_1086fa900:
  plVar14 = (long *)puVar6[0x95];
  func_0x000107c29574(&uStack_7e0);
  func_0x000108702488();
  uStack_400 = uStack_400 & 0xffffffffffffff00;
  uStack_3e8 = 0;
  func_0x0001087022c4(*(undefined8 *)(*plVar14 + 0x28));
  puVar15 = (ulong *)puVar6[0x95];
  func_0x000107c279dc(&uStack_400);
  func_0x000108702498(*(undefined8 *)(*puVar15 + 0xd8),puVar15);
  func_0x00010870214c(puVar6[0x97]);
  uStack_7e0 = param_1;
  uStack_7d8 = in_register_00005008;
  if (extraout_x8_13 != 0) {
    do {
      func_0x000107c32bc8();
    } while (extraout_w10_13 != 0);
  }
  func_0x000107c28150();
  func_0x0001087021f4();
  func_0x000108702000();
  func_0x0001087023c0();
  func_0x000108701f20();
  if (extraout_x8_14 != 0) {
    do {
      func_0x000107c32bc8();
    } while (extraout_w10_14 != 0);
  }
  puStack_3d0 = puVar15;
  func_0x00010870205c();
  func_0x000108701ea8(uStack_3f8);
  func_0x000108701fc8();
  if (param_2 == (ulong *)0x0) {
    func_0x000108701f58();
    uStack_400 = param_1;
    uStack_3f8 = in_register_00005008;
    if (extraout_x8_15 != 0) {
      do {
        func_0x000107c32bc8();
      } while (extraout_w10_15 != 0);
    }
    func_0x000107c32be8();
    func_0x000108702208();
    func_0x0001087020ac();
  }
  func_0x0001087020d8();
  puVar9 = puVar6 + 4;
LAB_1086fa9d0:
  func_0x000104be3970();
LAB_1086fa9d4:
  func_0x000107c32c0c();
  while( true ) {
    func_0x000107c32bf0();
    func_0x0001087020b4();
LAB_1086fa9e0:
    func_0x000107c32ba0(uStack_18);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    if ((int)unaff_x30 != 0) goto LAB_1086faa80;
    do {
      __Unwind_Resume(puVar9);
LAB_1086faa80:
      func_0x000104bd46a0();
    } while ((int)unaff_x30 == 0);
    func_0x00010870203c();
    func_0x0001087020d8();
    func_0x000104be3970(puVar6 + 4);
    in_ZR = (int)param_5 == 2;
    if ((bool)in_ZR) {
      puVar10 = puVar9;
      ___cxa_begin_catch();
      func_0x000108848514();
      func_0x00010870214c(*(undefined8 *)(puVar6[0x95] + 0xb0));
      uStack_7e0 = param_1;
      uStack_7d8 = in_register_00005008;
      if (extraout_x8_16 != 0) {
        do {
          func_0x000107c32bc8();
        } while (extraout_w10_16 != 0);
      }
      uStack_7d0 = CONCAT44(uStack_7d0._4_4_,(int)puVar10);
      func_0x000107c28150();
      func_0x0001087021f4();
      func_0x000108702000();
      func_0x0001087023a8();
      func_0x000108701f20();
      if (extraout_x8_17 != 0) {
        do {
          func_0x000107c32bc8();
        } while (extraout_w10_17 != 0);
      }
      param_5 = &uStack_400;
      uStack_3e0 = (undefined4)uStack_7d0;
      puStack_3d0 = puVar15;
      func_0x00010870205c();
      func_0x000108701ed4(uStack_3f8);
      func_0x000108701fc8();
      if (puVar9 == (ulong *)0x0) {
        func_0x000108701f58();
        uStack_400 = param_1;
        uStack_3f8 = in_register_00005008;
        if (extraout_x8_18 != 0) {
          do {
            func_0x000107c32bc8();
          } while (extraout_w10_18 != 0);
        }
        func_0x000107c32be8();
        func_0x000108702208();
        func_0x0001087020ac();
      }
      func_0x0001087020d8();
      func_0x000107c32c0c();
      ___cxa_end_catch();
      puVar9 = puVar10;
    }
    else {
      ___cxa_begin_catch();
      func_0x000108702024();
      ___cxa_end_catch();
    }
  }
  return;
}



/* Entry: 1086fae4c; end: 1086fae7f;  */

long FUN_1086fae4c(long param_1)

{
  undefined1 in_CY;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c32c58();
  if ((bool)in_CY) {
    FUN_1086fe9b0();
  }
  else {
    FUN_1086fe984();
    param_1 = unaff_x20 + 0x20;
  }
  *(long *)(unaff_x19 + 8) = param_1;
  return param_1 + -0x20;
}



/* Entry: 1086fae80; end: 1086fb173;  */

undefined8 *
FUN_1086fae80(undefined8 param_1,long param_2,undefined4 param_3,undefined1 *param_4,
             undefined8 *param_5)

{
  long *plVar1;
  undefined1 uVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  code *extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  code *extraout_x8_07;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  undefined8 uVar9;
  long unaff_x21;
  long unaff_x22;
  undefined8 in_register_00005008;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined1 uStack_cc;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined1 uStack_9c;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined1 uStack_6c;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  lVar7 = param_2;
  func_0x000107c32bb4();
  uVar5 = *(int *)(lVar7 + 0x7c) == 1;
  uStack_48 = extraout_x8;
  if ((bool)uVar5) {
    if ((param_4[1] & 1) != 0) {
      uVar2 = *param_4;
      func_0x000107c295c4(&uStack_e0,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28)
                         );
      uStack_c8 = *param_5;
      lStack_c0 = param_5[1];
      if (lStack_c0 != 0) {
        plVar1 = (long *)(lStack_c0 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      uVar9 = *(undefined8 *)(param_2 + 0x180);
      uStack_a8 = uStack_d8;
      uStack_b0 = uStack_e0;
      uStack_e0 = 0;
      uStack_d8 = 0;
      uStack_d0 = param_3;
      uStack_cc = uVar2;
      uStack_a0 = param_3;
      uStack_9c = uVar2;
      uStack_98 = uStack_c8;
      lStack_90 = lStack_c0;
      if (lStack_c0 != 0) {
        do {
          func_0x000107c32bc8();
        } while (extraout_w10 != 0);
      }
      func_0x000107c288a8(&uStack_88,param_2 + 0x170);
      uStack_78 = uStack_a8;
      uStack_80 = uStack_b0;
      uStack_b0 = 0;
      uStack_a8 = 0;
      uStack_70 = uStack_a0;
      uStack_6c = uStack_9c;
      lStack_60 = lStack_90;
      uStack_68 = uStack_98;
      if (lStack_90 != 0) {
        do {
          func_0x000107c32bc8();
        } while (extraout_w10_00 != 0);
      }
      uStack_58 = uStack_88;
      uStack_88 = 0;
      FUN_1086ffcd4(&uStack_b8,&uStack_80,uVar9);
      FUN_1086ffcac(&uStack_80);
      FUN_1086ffcac(&uStack_b0);
      FUN_1086fb174(&uStack_e0);
      puVar8 = &uStack_b8;
      func_0x000107c27f9c();
      goto LAB_1086fb0ec;
    }
    func_0x00010870216c();
    uStack_b0 = param_1;
    uStack_a8 = in_register_00005008;
    if (extraout_x8_04 != 0) {
      do {
        func_0x000107c32bc8();
      } while (extraout_w10_04 != 0);
    }
    func_0x000107c28150();
    __ZNSt3__15mutex4lockEv(*(long *)(unaff_x21 + 0x10) + 8);
    func_0x000108702390(0x1086ffc74);
    if (extraout_x8_05 != 0) {
      do {
        func_0x000107c32bc8();
      } while (extraout_w10_05 != 0);
    }
    lStack_50 = lVar7;
    func_0x00010870246c();
    func_0x000108701e9c(uStack_78);
    func_0x000108702478();
    if (unaff_x22 == 0) {
      func_0x000108701f58();
      uStack_80 = param_1;
      uStack_78 = in_register_00005008;
      if (extraout_x8_06 != 0) {
        do {
          func_0x000107c32bc8();
        } while (extraout_w10_06 != 0);
      }
      func_0x000107c32be8();
      (*extraout_x8_07)();
      goto LAB_1086fb0dc;
    }
  }
  else {
    func_0x00010870216c();
    uStack_b0 = param_1;
    uStack_a8 = in_register_00005008;
    if (extraout_x8_00 != 0) {
      do {
        func_0x000107c32bc8();
      } while (extraout_w10_01 != 0);
    }
    func_0x000107c28150();
    __ZNSt3__15mutex4lockEv(*(long *)(unaff_x21 + 0x10) + 8);
    func_0x000108702390(0x1086ffc3c);
    if (extraout_x8_01 != 0) {
      do {
        func_0x000107c32bc8();
      } while (extraout_w10_02 != 0);
    }
    lStack_50 = lVar7;
    func_0x00010870246c();
    func_0x000108701e9c(uStack_78);
    func_0x000108702478();
    if (unaff_x22 == 0) {
      func_0x000108701f58();
      uStack_80 = param_1;
      uStack_78 = in_register_00005008;
      if (extraout_x8_02 != 0) {
        do {
          func_0x000107c32bc8();
        } while (extraout_w10_03 != 0);
      }
      func_0x000107c32be8();
      (*extraout_x8_03)();
LAB_1086fb0dc:
      func_0x000107c27e74(&uStack_80);
    }
  }
  puVar8 = &uStack_b0;
  func_0x000104be3970();
LAB_1086fb0ec:
  func_0x000107c32ba0(uStack_48);
  if (!(bool)uVar5) {
    ___stack_chk_fail();
    func_0x000107c27e74(&uStack_80);
    func_0x000104be3970(&uStack_b0);
    func_0x000108701fd0();
    func_0x000107c32c54();
    func_0x000104be3970();
    puVar6 = puVar8;
    func_0x00010054e7b4();
    if (puVar6 != (undefined8 *)0x0) {
      func_0x0001000df548();
    }
    return puVar8;
  }
  return puVar8;
}



/* Entry: 1086fb174; end: 1086fb197;  */

long FUN_1086fb174(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000107c32c54();
  func_0x000104be3970();
  lVar1 = unaff_x19;
  func_0x00010054e7b4();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 1086fb198; end: 1086fb26f;  */

void FUN_1086fb198(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  code *extraout_x9;
  undefined8 uStack_a0;
  char cStack_98;
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [32];
  
  func_0x000107c279d4(auStack_70,param_3);
  if ((int)param_5 != 0) {
    func_0x00010086d0a8(*(undefined8 *)(param_1 + 0x160));
    (*extraout_x9)(&uStack_a0);
    func_0x000107c28d24(auStack_70,auStack_90);
    param_2 = uStack_a0;
    if (cStack_98 == '\0') {
      param_2 = 0x7ffffffffffffffe;
    }
    func_0x000107c279dc(auStack_90);
  }
  FUN_1086fb270(param_1,param_2,auStack_70,param_4,param_6,param_5);
  func_0x000108702314();
  return;
}



/* Entry: 1086fb270; end: 1086fb777;  */

void FUN_1086fb270(code *param_1,undefined **param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5,int param_6)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  code **ppcVar4;
  code **ppcVar5;
  undefined8 *puVar6;
  undefined8 extraout_x8;
  code *pcVar7;
  long extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  undefined8 *extraout_x8_03;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  undefined8 uVar8;
  long unaff_x21;
  int iVar9;
  long lVar10;
  code **ppcVar11;
  code **ppcVar12;
  undefined **ppuVar13;
  undefined8 uStack_190;
  undefined8 auStack_188 [10];
  code **ppcStack_138;
  code **ppcStack_130;
  code **ppcStack_128;
  code **ppcStack_120;
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined **ppuStack_d8;
  undefined8 *puStack_c8;
  code *pcStack_c0;
  undefined **ppuStack_b8;
  code *pcStack_b0;
  undefined **ppuStack_a8;
  int iStack_a0;
  undefined1 auStack_98 [8];
  code *pcStack_90;
  undefined1 uStack_78;
  undefined8 uStack_70;
  
  pcVar7 = param_1;
  func_0x000107c32bb4();
  uStack_70 = extraout_x8;
  if (pcVar7[0xb8] == (code)0x1) {
    pcVar7 = (code *)*param_5;
    uVar3 = 1;
    if (pcVar7 != (code *)0x0) {
      ppuStack_d8 = (undefined **)param_5[1];
      pcStack_e0 = pcVar7;
      if (ppuStack_d8 != (undefined **)0x0) {
        do {
          func_0x000107c32bc8();
        } while (extraout_w10 != 0);
      }
      func_0x000107c28150();
      func_0x000108702594();
      func_0x00010870234c();
      lVar10 = *(long *)(unaff_x21 + 0x70);
      pcStack_c0 = FUN_1087002dc;
      ppuStack_b8 = &PTR_DAT_110a679d8;
      ppuStack_a8 = ppuStack_d8;
      pcStack_b0 = pcStack_e0;
      pcVar7 = pcStack_e0;
      ppuVar13 = ppuStack_d8;
      if (ppuStack_d8 != (undefined **)0x0) {
        do {
          func_0x000107c32bc8();
        } while (extraout_w10_00 != 0);
      }
      pcStack_90 = param_1;
      func_0x000108702538(unaff_x21 + 0x48);
      func_0x000108701e9c(ppuStack_b8);
      func_0x0001087020d0();
      if (lVar10 == 0) {
        func_0x000108701f10();
        pcStack_c0 = pcVar7;
        ppuStack_b8 = ppuVar13;
        if (extraout_x8_00 != 0) {
          do {
            func_0x000107c32bc8();
          } while (extraout_w10_01 != 0);
        }
        func_0x000107c32be8();
        func_0x000108702540();
        func_0x0001087021b4();
      }
      func_0x0001086ff014();
    }
    goto LAB_1086fb62c;
  }
  pcStack_c0 = (code *)CONCAT44(pcStack_c0._4_4_,1);
  func_0x000107c29518(&uStack_e8,*(long *)(param_1 + 0xb0) + 0xc0,&pcStack_c0);
  uVar8 = uStack_e8;
  func_0x000107c278b8(&pcStack_c0,&DAT_10f3811b7);
  func_0x000107c32ca0((long)*(int *)(param_1 + 0x7c));
  func_0x000107c278b8(&pcStack_e0);
  func_0x000107c28b34(uVar8,&pcStack_c0,&pcStack_e0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pcStack_e0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pcStack_c0);
  uVar8 = uStack_e8;
  uVar3 = param_6 == 0;
  iStack_a0 = 0xc;
  if (!(bool)uVar3) {
    iStack_a0 = 1;
  }
  FUN_1086815e4();
  pcStack_b0 = (code *)0x0;
  ppuStack_a8 = (undefined **)0x0;
  func_0x000107c32c40();
  pcStack_c0 = (code *)(extraout_x8_01 + 0x10);
  ppuStack_b8 = (undefined **)0x0;
  func_0x000107c278b8(auStack_100,&UNK_10f4b209c);
  ppcVar4 = &pcStack_c0;
  func_0x000107c2881c(ppcVar4,auStack_100,param_4);
  func_0x000107c278b8(auStack_118,&DAT_10f4b2075);
  func_0x000107c32be8(*(undefined8 *)(*(long *)(param_1 + 0xb0) + 0xb0));
  (*extraout_x8_02)();
  func_0x000107c32c70();
  func_0x000107c28824(ppcVar4,auStack_118);
  func_0x000107c32bf8(*(undefined4 *)(param_1 + 0x7c));
  func_0x000107c29054();
  func_0x000107c28b10(uVar8,ppcVar4);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_118);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_100);
  ppcVar5 = &pcStack_c0;
  func_0x000107c2882c();
  ppcVar4 = *(code ***)(param_1 + 0x20);
  pcVar7 = *(code **)(param_1 + 0x28);
  ppcStack_138 = ppcVar4;
  ppcStack_130 = (code **)pcVar7;
  if (pcVar7 != (code *)0x0) {
    do {
      func_0x000107c32bc8();
    } while (extraout_w10_02 != 0);
  }
  func_0x000107c32c64();
  ppcVar12 = ppcVar5 + 1;
  *ppcVar12 = (code *)0x0;
  ppcVar5[2] = (code *)0x0;
  *ppcVar5 = (code *)&PTR_DAT_110a67a00;
  ppcStack_138 = (code **)0x0;
  ppcStack_130 = (code **)0x0;
  ppcVar11 = ppcVar5 + 3;
  *ppcVar11 = (code *)&PTR_FUN_110a67a50;
  ppcVar5[4] = (code *)ppcVar4;
  pcStack_e0 = (code *)0x0;
  ppuStack_d8 = (undefined **)0x0;
  ppcVar5[5] = pcVar7;
  pcStack_c0 = (code *)0x0;
  ppuStack_b8 = (undefined **)0x0;
  lVar10 = param_5[1];
  pcVar7 = (code *)*param_5;
  ppcVar5[7] = (code *)param_5[1];
  ppcVar5[6] = pcVar7;
  if (lVar10 != 0) {
    do {
      func_0x000107c32bc8();
    } while (extraout_w10_03 != 0);
  }
  *(char *)(ppcVar5 + 8) = (char)param_6;
  ppcVar5[9] = (code *)0x0;
  ppcVar5[10] = (code *)0x0;
  func_0x000107c2814c(&pcStack_e0);
  func_0x000107c2958c(&pcStack_c0);
  ppcStack_128 = ppcVar11;
  ppcStack_120 = ppcVar5;
  func_0x000107c2958c(&ppcStack_138);
  if ((long)param_2 < 0) {
LAB_1086fb608:
    (**(code **)(*ppcVar11 + 8))(ppcVar11,4);
  }
  else {
    iVar9 = (int)param_4;
    uVar3 = iVar9 == 0;
    if (iVar9 < 1) goto LAB_1086fb608;
    func_0x000107c295c4(&pcStack_e0,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28))
    ;
    ppuStack_b8 = ppuStack_d8;
    pcStack_c0 = pcStack_e0;
    if (ppuStack_d8 != (undefined **)0x0) {
      do {
        func_0x000107c32bc8();
      } while (extraout_w10_04 != 0);
    }
    pcStack_b0 = param_1;
    ppuStack_a8 = param_2;
    iStack_a0 = iVar9;
    func_0x000107c279d4(auStack_98,param_3);
    uStack_78 = (char)param_6;
    func_0x000107c295a8(&pcStack_e0);
    uVar8 = *(undefined8 *)(param_1 + 0xc0);
    puVar6 = auStack_188;
    FUN_1086fba8c(puVar6,&pcStack_c0);
    puStack_c8 = (undefined8 *)0x0;
    func_0x000107c32c64();
    *puVar6 = &PTR_SUB_110a67a98;
    FUN_1086fba8c(puVar6 + 1,auStack_188);
    uStack_190 = uStack_e8;
    uStack_e8 = 0;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppcVar12,0x10);
      if (bVar2) {
        *ppcVar12 = *ppcVar12 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    ppcStack_138 = ppcVar11;
    ppcStack_130 = ppcVar5;
    puStack_c8 = puVar6;
    FUN_1087077c8(uVar8,&pcStack_e0,&uStack_190,&ppcStack_138);
    func_0x0001086ff014(&ppcStack_138);
    func_0x000107c32c98();
    func_0x000108700d14(&pcStack_e0);
    FUN_1086fbae8(auStack_188);
    FUN_1086fbae8(&pcStack_c0);
  }
  FUN_108700458(&ppcStack_128);
  func_0x000107c29578();
LAB_1086fb62c:
  func_0x000107c32ba0(uStack_70);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    func_0x0001087021b4();
    ppcVar4 = &pcStack_e0;
    func_0x0001086ff014();
    func_0x000108701fd0();
    pcVar7 = ppcVar4[0x1d];
    extraout_x8_03[1] = ppcVar4[0x1e];
    *extraout_x8_03 = pcVar7;
    func_0x000107c279d4(extraout_x8_03 + 2,ppcVar4 + 0x1f);
    pcVar7 = ppcVar4[0x23];
    extraout_x8_03[7] = ppcVar4[0x24];
    extraout_x8_03[6] = pcVar7;
    func_0x000107c279d4(extraout_x8_03 + 8,ppcVar4 + 0x25);
    *(undefined4 *)(extraout_x8_03 + 0xc) = *(undefined4 *)(ppcVar4 + 0x29);
    return;
  }
  return;
}



/* Entry: 1086fb778; end: 1086fb7d7;  */

void FUN_1086fb778(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0xe8);
  param_1[1] = *(undefined8 *)(param_2 + 0xf0);
  *param_1 = uVar1;
  func_0x000107c279d4(param_1 + 2,param_2 + 0xf8);
  uVar1 = *(undefined8 *)(param_2 + 0x118);
  param_1[7] = *(undefined8 *)(param_2 + 0x120);
  param_1[6] = uVar1;
  func_0x000107c279d4(param_1 + 8,param_2 + 0x128);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x148);
  return;
}



/* Entry: 1086fb7d8; end: 1086fb847;  */

void FUN_1086fb7d8(long param_1,undefined8 param_2)

{
  undefined1 auStack_70 [24];
  undefined1 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  
  if ((*(byte *)(param_1 + 0xb8) & 1) == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_30 = 0x3f800000;
    auStack_70[0] = 0;
    uStack_58 = 0;
    func_0x000107c29514(param_1,param_2,&uStack_50,auStack_70);
    func_0x000107c279dc(auStack_70);
    func_0x000107c2861c(&uStack_50);
  }
  return;
}



/* Entry: 1086fb848; end: 1086fba4b;  */

undefined8 **** FUN_1086fb848(undefined8 ****param_1,undefined8 ****param_2,undefined8 param_3)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  char cVar3;
  undefined1 in_ZR;
  undefined8 ****ppppuVar4;
  undefined4 uVar5;
  ulong extraout_x8;
  code *extraout_x8_00;
  code *extraout_x9;
  int extraout_w10;
  undefined8 ****unaff_x20;
  undefined1 auStack_110 [24];
  undefined1 uStack_f8;
  undefined8 ***pppuStack_f0;
  undefined8 ***pppuStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  ulong auStack_c8 [3];
  undefined1 uStack_b0;
  undefined8 **ppuStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 ***pppuStack_98;
  undefined8 ***pppuStack_90;
  undefined8 ***pppuStack_88;
  undefined8 **ppuStack_80;
  undefined8 ***apppuStack_78 [4];
  undefined8 uStack_58;
  
  func_0x000107c32bb4();
  func_0x0001087023fc();
  ppppuVar4 = param_2;
  if (((extraout_x8 & 1) == 0) && (param_1[0x16][0x30] != (undefined8 **)0x0)) {
    in_ZR = (int)param_2 == 0;
    if ((int)param_2 < 1) {
      unaff_x20 = &pppuStack_88;
      FUN_1086fba4c(&pppuStack_88,1);
      func_0x000107c28d24(&ppuStack_80,param_3);
      func_0x00010870215c(param_1[0x16]);
      ppppuVar4 = &pppuStack_88;
      (*extraout_x8_00)();
      param_1 = (undefined8 ****)&ppuStack_80;
      func_0x000107c279dc();
    }
    else {
      pppuVar1 = param_1[4];
      pppuVar2 = param_1[5];
      ppppuVar4 = param_1;
      ppuStack_a8 = pppuVar1;
      ppuStack_a0 = pppuVar2;
      if (pppuVar2 != (undefined8 ***)0x0) {
        do {
          func_0x000107c32bc8();
        } while (extraout_w10 != 0);
      }
      ppuStack_80 = (undefined8 ***)0x1;
      func_0x000107c32cd8();
      ppppuVar4[1] = (undefined8 ***)0x0;
      ppppuVar4[2] = (undefined8 ***)0x0;
      *ppppuVar4 = (undefined8 ***)&PTR_FUN_110a67950;
      ppppuVar4[3] = (undefined8 ***)&PTR_FUN_110a679a0;
      ppuStack_a8 = (undefined8 **)0x0;
      ppuStack_a0 = (undefined8 **)0x0;
      ppppuVar4[4] = pppuVar1;
      ppppuVar4[5] = pppuVar2;
      auStack_c8[0] = 0;
      auStack_c8[1] = 0;
      apppuStack_78[0] = ppppuVar4;
      func_0x000107c279d4(ppppuVar4 + 6,param_3);
      func_0x000107c2958c(auStack_c8);
      apppuStack_78[0] = (undefined8 ***)0x0;
      FUN_1086fffdc(&pppuStack_88);
      pppuStack_98 = ppppuVar4 + 3;
      pppuStack_90 = ppppuVar4;
      func_0x000107c2958c(&ppuStack_a8);
      auStack_c8[0] = auStack_c8[0] & 0xffffffffffffff00;
      uStack_b0 = 0;
      func_0x00010086d0a8(param_1[0x2c]);
      (*extraout_x9)(&pppuStack_88);
      cVar3 = (char)ppuStack_80;
      func_0x000107c28d24(auStack_c8,apppuStack_78);
      in_ZR = cVar3 == '\0';
      if ((bool)in_ZR) {
        pppuStack_88 = (undefined8 ****)0x7ffffffffffffffe;
      }
      FUN_1086fb270(param_1,pppuStack_88,auStack_c8,param_2,&pppuStack_98,1);
      func_0x000107c279dc(apppuStack_78);
      func_0x000107c32c80();
      param_1 = &pppuStack_98;
      func_0x0001086ff014();
      ppppuVar4 = (undefined8 ****)pppuStack_88;
      unaff_x20 = param_2;
    }
  }
  uVar5 = SUB84(ppppuVar4,0);
  func_0x000107c32ba0(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    ppppuVar4 = param_1;
    func_0x000108701fd0();
    pcStack_d8 = FUN_1086fba4c;
    auStack_110[0] = 0;
    uStack_f8 = 0;
    *(undefined4 *)ppppuVar4 = uVar5;
    pppuStack_f0 = unaff_x20;
    pppuStack_e8 = param_1;
    puStack_e0 = &stack0xfffffffffffffff0;
    func_0x000107c27afc(ppppuVar4 + 1,auStack_110);
    ppppuVar4[5] = (undefined8 ***)0x0;
    func_0x000107c279dc(auStack_110);
    return ppppuVar4;
  }
  return param_1;
}



/* Entry: 1086fba4c; end: 1086fba8b;  */

undefined4 * FUN_1086fba4c(undefined4 *param_1,undefined4 param_2)

{
  undefined1 auStack_40 [24];
  undefined1 uStack_28;
  
  auStack_40[0] = 0;
  uStack_28 = 0;
  *param_1 = param_2;
  func_0x000107c27afc(param_1 + 2,auStack_40);
  *(undefined8 *)(param_1 + 10) = 0;
  func_0x000107c279dc(auStack_40);
  return param_1;
}



/* Entry: 1086fba8c; end: 1086fbae7;  */

void FUN_1086fba8c(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c32c30();
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  func_0x000107c279d4(param_1 + 5,param_2 + 5);
  *(undefined1 *)(unaff_x19 + 0x48) = *(undefined1 *)(unaff_x20 + 0x48);
  return;
}



/* Entry: 1086fbae8; end: 1086fbb33;  */

undefined8 FUN_1086fbae8(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000107c279dc(param_1 + 0x28);
  func_0x00010054e7b4();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return unaff_x19;
}



/* Entry: 1086fbb34; end: 1086fbc5b;  */

void FUN_1086fbb34(undefined8 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  long *plVar2;
  code *extraout_x8;
  long extraout_x8_00;
  long *plVar3;
  long lVar4;
  undefined1 auStack_d0 [24];
  long alStack_b8 [4];
  undefined4 uStack_98;
  undefined1 auStack_90 [40];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [44];
  undefined4 uStack_34;
  
  lVar4 = param_1[1];
  uStack_34 = param_2;
  FUN_1086fba4c(auStack_68,2);
  func_0x000107c28d24(auStack_60,*param_1);
  func_0x00010870215c(*(undefined8 *)(lVar4 + 0xb0));
  (*extraout_x8)();
  if (*(char *)(param_1[2] + 0x10) == '\x01') {
    plVar3 = *(long **)(*(long *)(lVar4 + 0xb0) + 0xc0);
    func_0x000107c32c40();
    alStack_b8[2] = 0;
    alStack_b8[3] = 0;
    alStack_b8[0] = extraout_x8_00 + 0x10;
    alStack_b8[1] = 0;
    uStack_98 = 0x34;
    func_0x000107c278b8(auStack_d0,&UNK_10f4afcbc);
    puVar1 = &uStack_34;
    FUN_108843ae8(puVar1);
    plVar2 = alStack_b8;
    func_0x000107c28824(plVar2,auStack_d0,puVar1);
    func_0x000107c2884c(auStack_90,plVar2);
    (**(code **)(*plVar3 + 0x50))(plVar3,auStack_90);
    func_0x000107c32c7c();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d0);
    func_0x000108702304();
  }
  func_0x0001087021bc();
  return;
}



/* Entry: 1086fbc5c; end: 1086fbebb;  */

undefined8 * FUN_1086fbc5c(undefined8 param_1,long param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 in_ZR;
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  long unaff_x22;
  long unaff_x23;
  long lVar4;
  undefined **in_register_00005008;
  undefined1 *puStack_108;
  long lStack_100;
  undefined1 *puStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined8 auStack_e0 [2];
  undefined4 uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_b0 [32];
  undefined8 uStack_90;
  undefined **ppuStack_88;
  undefined8 uStack_80;
  undefined4 uStack_70;
  
  puVar3 = auStack_e0;
  lVar4 = param_2;
  func_0x000107c32bb4();
  uVar2 = *(undefined8 *)(*(long *)(lVar4 + 0xb0) + 0x60);
  FUN_1087052fc(auStack_b0,uVar2,param_3,*(undefined4 *)(param_2 + 0x7c));
  func_0x0001087023d8();
  func_0x000108702250();
  func_0x0001087020bc();
  uStack_c8 = param_1;
  if (extraout_x8_00 != 0) {
    do {
      func_0x000107c32bc8();
    } while (extraout_w10 != 0);
  }
  func_0x000107c28150();
  func_0x0001087021c4();
  func_0x000108702074();
  lVar4 = *(long *)(unaff_x23 + 0x70);
  uStack_90 = 0x108700de8;
  ppuStack_88 = &PTR_FUN_110a67b80;
  func_0x000107c32c38();
  func_0x000108702180();
  if (extraout_x8_01 != 0) {
    do {
      func_0x000107c32bc8();
    } while (extraout_w10_00 != 0);
  }
  uStack_80 = uVar2;
  func_0x0001087022d4(unaff_x23 + 0x48);
  func_0x000108701ea8(ppuStack_88);
  func_0x000108701ff8();
  if (lVar4 == 0) {
    func_0x000108701f68();
    uStack_90 = param_1;
    ppuStack_88 = in_register_00005008;
    if (extraout_x8_02 != 0) {
      do {
        func_0x000107c32bc8();
      } while (extraout_w10_01 != 0);
    }
    func_0x000107c32be8();
    func_0x0001087022dc();
    func_0x0001087020c8();
  }
  FUN_1086fbebc(auStack_e0);
  func_0x000108702324();
  while( true ) {
    func_0x000107c32ba0(extraout_x8);
    if ((bool)in_ZR) {
      return puVar3;
    }
    ___stack_chk_fail();
    func_0x000108701fbc();
    func_0x0001087020c8();
    puVar3 = auStack_e0;
    FUN_1086fbebc();
    func_0x000108702324();
    in_ZR = (int)unaff_x22 == 1;
    if (!(bool)in_ZR) break;
    func_0x000108702094();
    func_0x000108848514();
    func_0x000108701ee0();
    uVar1 = SUB84(puVar3,0);
    auStack_e0[0] = param_1;
    if (extraout_x8_03 != 0) {
      do {
        func_0x000107c32bc8();
        uVar1 = SUB84(puVar3,0);
      } while (extraout_w10_02 != 0);
    }
    uStack_d0 = uVar1;
    func_0x000107c28150();
    func_0x0001087021d0();
    func_0x000108702000();
    lVar4 = *(long *)(unaff_x22 + 0x70);
    uStack_90 = 0x108700e10;
    ppuStack_88 = &PTR_DAT_110a67b98;
    func_0x0001087020e8();
    uStack_80 = param_1;
    if (extraout_x8_04 != 0) {
      do {
        func_0x000107c32bc8();
      } while (extraout_w10_03 != 0);
    }
    uStack_70 = uStack_d0;
    func_0x0001087022d4(unaff_x22 + 0x48);
    func_0x000108701e9c(ppuStack_88);
    func_0x000108701fc8();
    if (lVar4 == 0) {
      func_0x000108701f10();
      uStack_90 = param_1;
      ppuStack_88 = in_register_00005008;
      if (extraout_x8_05 != 0) {
        do {
          func_0x000107c32bc8();
        } while (extraout_w10_04 != 0);
      }
      func_0x000107c32be8();
      func_0x0001087022dc();
      func_0x0001087020c8();
    }
    puVar3 = auStack_e0;
    func_0x000108625dec(auStack_e0);
    ___cxa_end_catch();
  }
  func_0x00010870209c();
  func_0x0001087020a4();
  pcStack_e8 = FUN_1086fbebc;
  lStack_100 = param_2;
  puStack_f8 = param_4;
  puStack_f0 = &stack0xfffffffffffffff0;
  func_0x000107c32c54();
  func_0x000108625dec();
  puStack_108 = param_4;
  func_0x0001006334d4(&puStack_108);
  return (undefined8 *)param_4;
}



/* Entry: 1086fbebc; end: 1086fbedb;  */

void FUN_1086fbebc(void)

{
  func_0x000107c32c54();
  func_0x000108625dec();
  func_0x0001006334d4(&stack0xffffffffffffffd8);
  return;
}



/* Entry: 1086fbedc; end: 1086fc43b;  */

void FUN_1086fbedc(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  undefined1 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  ulong uVar7;
  long unaff_x20;
  long *unaff_x21;
  long lVar8;
  undefined **ppuVar9;
  long lVar10;
  long lVar11;
  undefined **ppuVar12;
  long lStack_b60;
  long lStack_b58;
  undefined8 uStack_b48;
  undefined8 uStack_b40;
  undefined8 uStack_b38;
  undefined8 uStack_b30;
  undefined8 uStack_b28;
  undefined8 uStack_b20;
  undefined8 uStack_b18;
  undefined4 uStack_b10;
  long lStack_b00;
  undefined **ppuStack_af8;
  undefined **ppuStack_af0;
  long alStack_ae8 [111];
  undefined8 uStack_770;
  undefined8 uStack_768;
  long lStack_760;
  undefined8 uStack_750;
  undefined8 uStack_748;
  long lStack_740;
  long lStack_720;
  undefined **ppuStack_718;
  long *plStack_710;
  long lStack_6f0;
  long lStack_390;
  undefined **ppuStack_388;
  undefined **ppuStack_380;
  long lStack_378;
  undefined **ppuStack_370;
  undefined8 uStack_18;
  
  func_0x000107c32c94();
  func_0x000108702010();
  func_0x000107c32bb4();
  lStack_b00 = 0;
  ppuStack_af8 = (undefined **)0x0;
  ppuStack_af0 = (undefined **)0x0;
  uStack_18 = extraout_x8;
  if (param_2[1] - *param_2 != 0) {
    func_0x000108702574(param_2[1] - *param_2);
    if ((long *)0x47dc11f7047dc1 < param_2) goto LAB_1086fc25c;
    FUN_1086feb5c(&lStack_720);
    FUN_1086fead8(&lStack_b00,&lStack_720);
    func_0x0001086fec28(&lStack_720);
    func_0x000108702574(unaff_x21[1] - *unaff_x21);
  }
  uStack_b28 = 0;
  uStack_b30 = 0;
  uStack_b18 = 0;
  uStack_b20 = 0;
  uStack_b10 = 0x3f800000;
  uStack_b48 = 0;
  uStack_b40 = 0;
  uStack_b38 = 0;
  func_0x000107c27ab0(&uStack_b48);
  lVar10 = unaff_x21[1];
  for (lVar8 = *unaff_x21; lVar8 != lVar10; lVar8 = lVar8 + 0x18) {
    func_0x0001087024c4(&lStack_720);
    FUN_1086fc43c(&uStack_b30,&lStack_720,lVar8);
    func_0x000107c28840(&uStack_b48,&lStack_720);
    func_0x000107c27914(&lStack_720);
  }
  plVar5 = *(long **)(*(long *)(unaff_x20 + 0xb0) + 0x60);
  FUN_1087052fc(&lStack_b60,plVar5,&uStack_b48,*(undefined4 *)(unaff_x20 + 0x7c));
  for (lVar8 = lStack_b60; uVar4 = lVar8 == lStack_b58, !(bool)uVar4; lVar8 = lVar8 + 0x378) {
    func_0x000107c28c10(alStack_ae8,lVar8);
    puVar6 = &uStack_b30;
    FUN_1086fd13c(puVar6,alStack_ae8);
    func_0x000107c27994(&uStack_750,puVar6);
    uStack_768 = uStack_748;
    uStack_770 = uStack_750;
    lStack_760 = lStack_740;
    lStack_740 = 0;
    uStack_748 = 0;
    uStack_750 = 0;
    func_0x000107c27af4(&lStack_390,alStack_ae8);
    FUN_10864640c(&lStack_720,&uStack_770,&lStack_390);
    func_0x000107c27b1c(&lStack_390);
    func_0x000107c27914(&uStack_770);
    func_0x000107c27914(&uStack_750);
    if (ppuStack_af8 < ppuStack_af0) {
      func_0x0001086febbc(ppuStack_af8,&lStack_720);
      ppuVar9 = ppuStack_af8 + 0x72;
    }
    else {
      lVar10 = ((long)ppuStack_af8 - lStack_b00) / 0x390;
      uVar1 = lVar10 + 1;
      if (0x47dc11f7047dc1 < uVar1) {
        FUN_1086feacc();
        goto LAB_1086fc260;
      }
      uVar2 = ((long)ppuStack_af0 - lStack_b00) / 0x390;
      uVar7 = uVar2 * 2;
      if (uVar7 < uVar1 || uVar7 - uVar1 == 0) {
        uVar7 = uVar1;
      }
      if (0x23ee08fb823edf < uVar2) {
        uVar7 = 0x47dc11f7047dc1;
      }
      FUN_1086feb5c(&uStack_750,uVar7,lVar10,&ppuStack_af0);
      func_0x0001086febbc(lStack_740,&lStack_720);
      lStack_740 = lStack_740 + 0x390;
      FUN_1086fead8(&lStack_b00,&uStack_750);
      ppuVar9 = ppuStack_af8;
      func_0x0001086fec28(&uStack_750);
    }
    ppuStack_af8 = ppuVar9;
    func_0x0001086fec04(&lStack_720);
    plVar5 = alStack_ae8;
    func_0x000107c27b1c();
  }
  func_0x0001087023d8();
  ppuVar9 = ppuStack_af8;
  lVar10 = lStack_b00;
  ppuStack_388 = ppuStack_af8;
  lStack_390 = lStack_b00;
  ppuStack_380 = ppuStack_af0;
  lStack_b00 = 0;
  ppuStack_af8 = (undefined **)0x0;
  ppuStack_af0 = (undefined **)0x0;
  func_0x0001087020bc();
  lStack_378 = lVar10;
  ppuStack_370 = ppuVar9;
  if (extraout_x8_00 != 0) {
    do {
      func_0x000107c32bc8();
    } while (extraout_w10 != 0);
  }
  func_0x000107c28150();
  func_0x0001087021c4();
  func_0x000108702074();
  lVar10 = lRam0047dc11f7047e31;
  lStack_720 = 0x108700e4c;
  ppuStack_718 = &PTR_FUN_110a67bb0;
  func_0x000107c32c38();
  plVar5[1] = (long)ppuStack_388;
  *plVar5 = lStack_390;
  ppuVar9 = ppuStack_370;
  plVar5[2] = (long)ppuStack_380;
  ppuVar12 = ppuStack_370;
  lVar11 = lStack_378;
  ppuStack_380 = (undefined **)0x0;
  ppuStack_388 = (undefined **)0x0;
  lStack_390 = 0;
  plVar5[4] = (long)ppuStack_370;
  plVar5[3] = lVar11;
  if (ppuVar9 != (undefined **)0x0) {
    do {
      func_0x000107c32bc8();
    } while (extraout_w10_00 != 0);
  }
  plStack_710 = plVar5;
  lStack_6f0 = lVar8;
  func_0x000107c28154(0x47dc11f7047e09,&lStack_720);
  func_0x000108701ed4(ppuStack_718);
  func_0x000108701ff8();
  if (lVar10 == 0) {
    func_0x000108701f68();
    lStack_720 = lVar11;
    ppuStack_718 = ppuVar12;
    if (extraout_x8_01 != 0) {
      do {
        func_0x000107c32bc8();
      } while (extraout_w10_01 != 0);
    }
    func_0x000107c32be8();
    (*extraout_x8_02)();
    func_0x000107c27e74(&lStack_720);
  }
  FUN_1086fc448(&lStack_390);
  func_0x000107c27b40(&lStack_b60);
  func_0x000107c27a04(&uStack_b48);
  func_0x000107c28d40(&uStack_b30);
  func_0x0001086fec6c(&lStack_b00);
  func_0x000107c32ba0(uStack_18);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
LAB_1086fc25c:
  FUN_1086feacc();
LAB_1086fc260:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1086fc264);
  (*pcVar3)();
}



/* Entry: 1086fc43c; end: 1086fc447;  */

undefined1  [16] FUN_1086fc43c(long *param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  uint uVar9;
  ulong uVar10;
  ulong unaff_x26;
  ulong uVar11;
  undefined1 auVar12 [16];
  long *aplStack_78 [3];
  
  uVar7 = param_2;
  FUN_108848654();
  uVar10 = param_1[1];
  if (uVar10 != 0) {
    uVar11 = uVar10 - 1;
    uVar9 = (uint)uVar10;
    if ((uVar10 & uVar11) == 0) {
      unaff_x26 = uVar9 - 1 & uVar7;
    }
    else {
      unaff_x26 = uVar7;
      if (uVar10 <= uVar7) {
        uVar1 = 0;
        if (uVar9 != 0) {
          uVar1 = (uint)uVar7 / uVar9;
        }
        unaff_x26 = (ulong)((uint)uVar7 - uVar1 * uVar9);
      }
    }
    plVar8 = *(long **)(*param_1 + unaff_x26 * 8);
    if (plVar8 != (long *)0x0) {
      do {
        while( true ) {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_10868d9f8;
          uVar4 = plVar8[1];
          if (uVar4 != uVar7) break;
          plVar6 = plVar8 + 2;
          func_0x000107c28078(plVar6,param_2);
          if (((ulong)plVar6 & 1) != 0) {
            uVar3 = 0;
            goto LAB_10868db2c;
          }
        }
        if ((uVar10 & uVar11) == 0) {
          uVar4 = uVar4 & uVar11;
        }
        else if (uVar10 <= uVar4) {
          uVar2 = 0;
          if (uVar10 != 0) {
            uVar2 = uVar4 / uVar10;
          }
          uVar4 = uVar4 - uVar2 * uVar10;
        }
      } while (uVar4 == unaff_x26);
    }
  }
LAB_10868d9f8:
  func_0x00010868e7b0(aplStack_78);
  FUN_10868db5c();
  if ((uVar10 == 0) || (*(float *)(param_1 + 4) * (float)uVar10 < (float)(param_1[3] + 1))) {
    uVar11 = 1;
    if (2 < uVar10) {
      uVar11 = (ulong)((uVar10 & uVar10 - 1) != 0);
    }
    uVar11 = uVar11 | uVar10 << 1;
    uVar10 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar11 <= uVar10) {
      uVar11 = uVar10;
    }
    FUN_10868dbfc(param_1,uVar11);
    uVar10 = param_1[1];
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x26 = (int)uVar10 - 1 & uVar7;
    }
    else {
      unaff_x26 = uVar7;
      if (uVar10 <= uVar7) {
        uVar11 = 0;
        if (uVar10 != 0) {
          uVar11 = uVar7 / uVar10;
        }
        unaff_x26 = uVar7 - uVar11 * uVar10;
      }
    }
  }
  plVar8 = aplStack_78[0];
  lVar5 = *param_1;
  plVar6 = *(long **)(lVar5 + unaff_x26 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *aplStack_78[0] = *plVar6;
    *plVar6 = (long)aplStack_78[0];
    *(long **)(lVar5 + unaff_x26 * 8) = plVar6;
    if (*aplStack_78[0] != 0) {
      uVar7 = *(ulong *)(*aplStack_78[0] + 8);
      if ((uVar10 & uVar10 - 1) == 0) {
        uVar7 = uVar7 & uVar10 - 1;
      }
      else if (uVar10 <= uVar7) {
        uVar11 = 0;
        if (uVar10 != 0) {
          uVar11 = uVar7 / uVar10;
        }
        uVar7 = uVar7 - uVar11 * uVar10;
      }
      *(long **)(lVar5 + uVar7 * 8) = aplStack_78[0];
    }
  }
  else {
    *aplStack_78[0] = *plVar6;
    *plVar6 = (long)aplStack_78[0];
  }
  aplStack_78[0] = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  FUN_10868ddf0(aplStack_78);
  uVar3 = 1;
LAB_10868db2c:
  auVar12._8_8_ = uVar3;
  auVar12._0_8_ = plVar8;
  return auVar12;
}



/* Entry: 1086fc448; end: 1086fc46b;  */

void FUN_1086fc448(void)

{
  long lVar1;
  long *unaff_x19;
  long lVar2;
  
  func_0x000107c32c54();
  func_0x000108625e34();
  lVar2 = *unaff_x19;
  if (lVar2 != 0) {
    lVar1 = unaff_x19[1];
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x390;
      func_0x0001086fec04();
    }
    func_0x000108702524();
  }
  return;
}



/* Entry: 1086fc46c; end: 1086fc4a3;  */

void FUN_1086fc46c(undefined8 param_1,undefined8 param_2)

{
  FUN_1086fc4a4(param_1,1,0,0,0,0,0,0,param_2);
  return;
}



/* Entry: 1086fc4a4; end: 1086fc8cb;  */

void FUN_1086fc4a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,ulong param_8)

{
  uint uVar1;
  ulong uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  code *extraout_x8_05;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  long lVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  long *in_stack_00000060;
  undefined4 uStack_be4;
  long lStack_be0;
  undefined **ppuStack_bd8;
  undefined4 uStack_bd0;
  byte bStack_808;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  long lStack_7e0;
  undefined **ppuStack_7d8;
  long lStack_7d0;
  undefined **ppuStack_7c8;
  undefined **ppuStack_7c0;
  long lStack_7b0;
  byte bStack_408;
  undefined **ppuStack_400;
  undefined **ppuStack_3f8;
  long *plStack_3f0;
  long *plStack_3d0;
  undefined1 auStack_3b8 [40];
  long lStack_390;
  undefined8 uStack_18;
  
  func_0x000107c32c94();
  lVar5 = param_1;
  func_0x000107c32bb4();
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb0) + 0x20);
  uStack_18 = extraout_x8;
  func_0x000107c32be8(lVar5);
  (*extraout_x8_00)();
  uStack_7f8 = 0;
  uStack_7f0 = 0;
  uStack_7e8 = 0;
  uVar3 = (param_8 & 1) == 0;
  if ((bool)uVar3) {
    param_7 = 0;
  }
  FUN_108867634(&ppuStack_400,*(undefined8 *)(*(long *)(param_1 + 0xb0) + 0x30),param_2,param_3,
                param_4,param_5,param_6,lVar5 - param_7);
  func_0x000107c288b4(&lStack_7e0,&ppuStack_400);
  func_0x0001087024f4(&lStack_be0);
  while ((((bStack_408 & 1) != 0 || ((bStack_808 & 1) != 0)) &&
         (uVar3 = lStack_7e0 == lStack_be0, !(bool)uVar3))) {
    plVar6 = &lStack_7e0;
    func_0x000107c288b8(plVar6);
    FUN_1086d6ea8(&uStack_7f8,plVar6);
    func_0x000107c28920(&lStack_7e0);
  }
  func_0x000108702054(&lStack_be0);
  func_0x000108702054(&lStack_7e0);
  func_0x000107c288ec(&ppuStack_400);
  uStack_be4 = 0;
  plVar6 = *(long **)(*(long *)(param_1 + 0xb0) + 0x50);
  uVar2 = (ulong)ppuStack_400 >> 0x28;
  uVar1 = (uint)ppuStack_400;
  ppuStack_400._0_5_ = (uint5)(uVar1 & 0xffffff00);
  ppuStack_400 = (undefined **)CONCAT35((int3)uVar2,(uint5)ppuStack_400);
  (**(code **)(*plVar6 + 0xc0))(&lStack_be0,plVar6,&uStack_7f8,&uStack_be4,&ppuStack_400);
  lVar5 = **(long **)(param_1 + 0xb0);
  plVar6 = &lStack_7e0;
  func_0x000107c28c08(plVar6,&lStack_be0);
  ppuStack_7c0 = (undefined **)in_stack_00000060[1];
  ppuStack_7c8 = (undefined **)*in_stack_00000060;
  if (in_stack_00000060[1] != 0) {
    do {
      func_0x000107c32bc8();
    } while (extraout_w10 != 0);
  }
  func_0x000107c28150();
  lVar5 = *(long *)(lVar5 + 0x10);
  plVar7 = plVar6;
  func_0x000108702074();
  lVar9 = *(long *)(lVar5 + 0x70);
  ppuStack_400 = (undefined **)0x108700eb0;
  ppuStack_3f8 = &PTR_FUN_110a67be0;
  func_0x000107c32c38();
  plVar7[1] = (long)ppuStack_7d8;
  *plVar7 = lStack_7e0;
  plVar7[2] = lStack_7d0;
  ppuVar10 = ppuStack_7c0;
  ppuVar11 = ppuStack_7c8;
  ppuStack_7d8 = (undefined **)0x0;
  lStack_7d0 = 0;
  lStack_7e0 = 0;
  plVar7[4] = (long)ppuStack_7c0;
  plVar7[3] = (long)ppuStack_7c8;
  if (ppuVar10 != (undefined **)0x0) {
    do {
      func_0x000107c32bc8();
    } while (extraout_w10_00 != 0);
  }
  plStack_3f0 = plVar7;
  plStack_3d0 = plVar6;
  func_0x000107c28154(lVar5 + 0x48,&ppuStack_400);
  func_0x000108701ea8(ppuStack_3f8);
  func_0x000108701ff8();
  if (lVar9 == 0) {
    func_0x000108701f68();
    ppuStack_400 = ppuVar11;
    ppuStack_3f8 = ppuVar10;
    if (extraout_x8_01 != 0) {
      do {
        func_0x000107c32bc8();
      } while (extraout_w10_01 != 0);
    }
    func_0x000107c32be8();
    (*extraout_x8_02)();
    func_0x000107c27e74(&ppuStack_400);
  }
  FUN_1086fc908(&lStack_7e0);
  func_0x000107c27b40(&lStack_be0);
  func_0x000107c29108(&uStack_7f8);
  while( true ) {
    func_0x000107c32ba0(uStack_18);
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    func_0x000108702010();
    func_0x000107c27e74(&ppuStack_400);
    FUN_1086fc908(&lStack_7e0);
    func_0x000107c27b40(&lStack_be0);
    puVar8 = &uStack_7f8;
    func_0x000107c29108();
    uVar3 = (int)&ppuStack_400 == 1;
    if (!(bool)uVar3) break;
    func_0x00010870202c();
    func_0x000108848514();
    uVar4 = SUB84(puVar8,0);
    plVar6 = (long *)**(long **)(param_1 + 0xb0);
    ppuVar11 = (undefined **)in_stack_00000060[1];
    lVar5 = *in_stack_00000060;
    lStack_be0 = lVar5;
    ppuStack_bd8 = ppuVar11;
    if (in_stack_00000060[1] != 0) {
      do {
        func_0x000107c32bc8();
        uVar4 = SUB84(puVar8,0);
      } while (extraout_w10_02 != 0);
    }
    uStack_bd0 = uVar4;
    func_0x000107c28150();
    func_0x000108702594();
    func_0x00010870234c();
    lVar9 = lStack_390;
    lStack_7e0 = 0x108700ed8;
    ppuStack_7d8 = &PTR_DAT_110a67bf8;
    func_0x00010870222c();
    lStack_7d0 = lVar5;
    ppuStack_7c8 = ppuVar11;
    if (extraout_x8_03 != 0) {
      do {
        func_0x000107c32bc8();
      } while (extraout_w10_03 != 0);
    }
    ppuStack_7c0 = (undefined **)CONCAT44(ppuStack_7c0._4_4_,uStack_bd0);
    lStack_7b0 = param_1;
    func_0x000107c28154(auStack_3b8);
    func_0x000108701e9c(ppuStack_7d8);
    func_0x0001087020d0();
    if (lVar9 == 0) {
      func_0x000108701f10();
      lStack_7e0 = lVar5;
      ppuStack_7d8 = ppuVar11;
      if (extraout_x8_04 != 0) {
        do {
          func_0x000107c32bc8();
        } while (extraout_w10_04 != 0);
      }
      func_0x000107c32be8();
      (*extraout_x8_05)();
      func_0x000107c27e74(&lStack_7e0);
    }
    func_0x000108625dec(&lStack_be0);
    ___cxa_end_catch();
  }
  func_0x00010870201c();
  func_0x000104bd46a0(plVar6);
  FUN_1086fc4a4();
  return;
}



/* Entry: 1086fc8cc; end: 1086fc907;  */

void FUN_1086fc8cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  FUN_1086fc4a4(param_1,0,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



/* Entry: 1086fc908; end: 1086fc927;  */

void FUN_1086fc908(void)

{
  func_0x000107c32c54();
  func_0x000108625dec();
  func_0x0001006334d4(&stack0xffffffffffffffd8);
  return;
}



/* Entry: 1086fc928; end: 1086fcb87;  */

void FUN_1086fc928(long param_1,long param_2,undefined8 param_3,long *param_4)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  code *extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  code *extraout_x8_07;
  undefined8 extraout_x8_08;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  ulong uVar8;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long lVar9;
  long unaff_x23;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined **in_register_00005008;
  long lStack_288;
  long lStack_280;
  undefined8 uStack_278;
  long lStack_270;
  undefined8 uStack_268;
  long lStack_260;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_220;
  long lStack_218;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined4 uStack_1d0;
  long lStack_1c0;
  ulong uStack_1b8;
  ulong auStack_1b0 [2];
  long lStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  long lStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined **ppuStack_168;
  long *plStack_160;
  undefined8 *puStack_140;
  undefined8 uStack_138;
  undefined1 uStack_130;
  undefined8 uStack_128;
  long lStack_90;
  undefined **ppuStack_88;
  long lStack_80;
  undefined4 uStack_70;
  
  func_0x000107c32c24();
  func_0x000107c32bb4();
  uVar5 = *(undefined8 *)(*(long *)(param_2 + 0xb0) + 0x60);
  FUN_108705bd0(uVar5,*(undefined4 *)(unaff_x20 + 0x7c));
  func_0x0001087023d8();
  func_0x0001087020bc();
  uVar4 = (undefined4)uVar5;
  if (extraout_x8_00 != 0) {
    do {
      func_0x000107c32bc8();
      uVar4 = (undefined4)uVar5;
    } while (extraout_w10 != 0);
  }
  func_0x000107c28150();
  func_0x0001087021c4();
  func_0x000108702074();
  lVar10 = *(long *)(unaff_x23 + 0x70);
  lStack_90 = 0x108700f14;
  ppuStack_88 = &PTR_DAT_110a67c10;
  func_0x0001087020e8();
  lStack_80 = param_1;
  if (extraout_x8_01 != 0) {
    do {
      func_0x000107c32bc8();
    } while (extraout_w10_00 != 0);
  }
  lVar9 = unaff_x23 + 0x48;
  plVar7 = &lStack_90;
  uStack_70 = uVar4;
  func_0x000107c28154();
  func_0x000108701ea8(ppuStack_88);
  func_0x000108701ff8();
  if (lVar10 == 0) {
    func_0x000108701f68();
    lStack_90 = param_1;
    ppuStack_88 = in_register_00005008;
    if (extraout_x8_02 != 0) {
      do {
        func_0x000107c32bc8();
      } while (extraout_w10_01 != 0);
    }
    func_0x000107c32be8();
    plVar7 = &lStack_90;
    (*extraout_x8_03)();
    func_0x000108702290();
  }
  func_0x000108702288();
  while( true ) {
    func_0x000107c32ba0(extraout_x8);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x000108701fbc();
    func_0x000108702290();
    func_0x000108702288();
    in_ZR = (int)unaff_x22 == 1;
    if (!(bool)in_ZR) break;
    func_0x000108702094();
    func_0x000108848514();
    func_0x000108701ee0();
    uVar4 = (undefined4)lVar9;
    if (extraout_x8_04 != 0) {
      do {
        func_0x000107c32bc8();
        uVar4 = (undefined4)lVar9;
      } while (extraout_w10_02 != 0);
    }
    func_0x000107c28150();
    func_0x0001087021d0();
    func_0x000108702000();
    unaff_x21 = *(long **)(unaff_x22 + 0x70);
    lStack_90 = 0x108700f64;
    ppuStack_88 = &PTR_DAT_110a67c28;
    func_0x0001087020e8();
    lStack_80 = param_1;
    if (extraout_x8_05 != 0) {
      do {
        func_0x000107c32bc8();
      } while (extraout_w10_03 != 0);
    }
    lVar9 = unaff_x22 + 0x48;
    plVar7 = &lStack_90;
    uStack_70 = uVar4;
    func_0x000107c28154();
    func_0x000108701e9c(ppuStack_88);
    func_0x000108701fc8();
    if (unaff_x21 == (long *)0x0) {
      func_0x000108701f10();
      lStack_90 = param_1;
      ppuStack_88 = in_register_00005008;
      if (extraout_x8_06 != 0) {
        do {
          func_0x000107c32bc8();
        } while (extraout_w10_04 != 0);
      }
      func_0x000107c32be8();
      plVar7 = &lStack_90;
      (*extraout_x8_07)();
      func_0x000108702290();
    }
    func_0x000108702288();
    ___cxa_end_catch();
  }
  func_0x00010870209c();
  func_0x0001087020a4();
  func_0x000108702010();
  func_0x000107c32bb4();
  lStack_1c0 = 0;
  uStack_1b8 = 0;
  auStack_1b0[0] = 0;
  uStack_128 = extraout_x8_08;
  if (plVar7[1] - *plVar7 != 0) {
    func_0x000108702574(plVar7[1] - *plVar7);
    if ((long *)0x38e38e38e38e38e < plVar7) goto LAB_1086fcf64;
    FUN_1086fed3c(&uStack_170);
    FUN_1086fecb8(&lStack_1c0,&uStack_170);
    func_0x0001086fedc8(&uStack_170);
    func_0x000108702574(unaff_x21[1] - *unaff_x21);
  }
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1d0 = 0x3f800000;
  uStack_208 = 0;
  uStack_200 = 0;
  uStack_1f8 = 0;
  func_0x000107c27ab0(&uStack_208);
  lVar9 = unaff_x21[1];
  for (lVar10 = *unaff_x21; lVar10 != lVar9; lVar10 = lVar10 + 0x18) {
    func_0x0001087024c4(&uStack_170);
    FUN_1086fc43c(&uStack_1f0,&uStack_170,lVar10);
    func_0x000107c28840(&uStack_208,&uStack_170);
    func_0x000107c27914(&uStack_170);
  }
  puVar6 = *(undefined8 **)(*(long *)(unaff_x20 + 0xb0) + 0x30);
  FUN_10886783c(&lStack_220,puVar6,&uStack_208);
  for (lVar10 = lStack_220; uVar3 = lVar10 == lStack_218, !(bool)uVar3; lVar10 = lVar10 + 0x30) {
    puVar6 = &uStack_1f0;
    FUN_1086fd13c(puVar6,lVar10);
    func_0x000107c27994(&lStack_270,puVar6);
    func_0x000107c27994(&lStack_288,lVar10);
    uStack_190 = lStack_260;
    uStack_198 = uStack_268;
    lStack_1a0 = lStack_270;
    uStack_178 = uStack_278;
    lStack_180 = lStack_280;
    lStack_188 = lStack_288;
    uStack_268 = 0;
    lStack_260 = 0;
    uStack_278 = 0;
    lStack_270 = 0;
    lStack_288 = 0;
    lStack_280 = 0;
    uStack_248 = 0;
    uStack_240 = 0;
    uStack_250 = 0;
    uStack_230 = 0;
    uStack_228 = 0;
    uStack_238 = 0;
    FUN_1086464fc(&uStack_170,&lStack_1a0,*(undefined8 *)(lVar10 + 0x18),0,0);
    FUN_108646578(&lStack_1a0);
    FUN_108646578(&uStack_250);
    func_0x000107c27914(&lStack_288);
    func_0x000108702298();
    uStack_138 = *(undefined8 *)(lVar10 + 0x20);
    uStack_130 = *(undefined1 *)(lVar10 + 0x28);
    if (uStack_1b8 < auStack_1b0[0]) {
      func_0x0001086fed9c(uStack_1b8,&uStack_170);
      uVar12 = uStack_1b8 + 0x48;
    }
    else {
      lVar9 = (long)(uStack_1b8 - lStack_1c0) / 0x48;
      uVar12 = lVar9 + 1;
      if (0x38e38e38e38e38e < uVar12) {
        FUN_1086fecac();
        goto LAB_1086fcf68;
      }
      uVar1 = (long)(auStack_1b0[0] - lStack_1c0) / 0x48;
      uVar8 = uVar1 * 2;
      if (uVar8 < uVar12 || uVar8 - uVar12 == 0) {
        uVar8 = uVar12;
      }
      if (0x1c71c71c71c71c6 < uVar1) {
        uVar8 = 0x38e38e38e38e38e;
      }
      FUN_1086fed3c(&lStack_1a0,uVar8,lVar9,auStack_1b0);
      func_0x0001086fed9c(uStack_190,&uStack_170);
      uStack_190 = uStack_190 + 0x48;
      FUN_1086fecb8(&lStack_1c0,&lStack_1a0);
      uVar12 = uStack_1b8;
      func_0x0001086fedc8(&lStack_1a0);
    }
    puVar6 = &uStack_170;
    uStack_1b8 = uVar12;
    FUN_108646578();
  }
  lVar10 = **(long **)(unaff_x20 + 0xb0);
  uStack_198 = uStack_1b8;
  lStack_1a0 = lStack_1c0;
  uStack_190 = auStack_1b0[0];
  lStack_1c0 = 0;
  uStack_1b8 = 0;
  auStack_1b0[0] = 0;
  lStack_180 = param_4[1];
  lStack_188 = *param_4;
  if (param_4[1] != 0) {
    do {
      func_0x000107c32bc8();
    } while (extraout_w10_05 != 0);
  }
  func_0x000107c28150();
  lVar11 = *(long *)(lVar10 + 0x10);
  plVar7 = (long *)(lVar11 + 8);
  __ZNSt3__15mutex4lockEv();
  lVar9 = *(long *)(lVar11 + 0x70);
  uStack_170 = 0x108700fa0;
  ppuStack_168 = &PTR_FUN_110a67c40;
  func_0x000107c32c38();
  plVar7[1] = uStack_198;
  *plVar7 = lStack_1a0;
  plVar7[2] = uStack_190;
  uStack_198 = 0;
  uStack_190 = 0;
  lStack_1a0 = 0;
  plVar7[4] = lStack_180;
  plVar7[3] = lStack_188;
  if (lStack_180 != 0) {
    do {
      func_0x000107c32bc8();
    } while (extraout_w10_06 != 0);
  }
  plStack_160 = plVar7;
  puStack_140 = puVar6;
  func_0x000108702538(lVar11 + 0x48);
  func_0x000108701ea8(ppuStack_168);
  __ZNSt3__15mutex6unlockEv(lVar11 + 8);
  if (lVar9 == 0) {
    ppuStack_168 = *(undefined ***)(lVar10 + 0x18);
    uStack_170 = *(undefined8 *)(lVar10 + 0x10);
    if (*(long *)(lVar10 + 0x18) != 0) {
      do {
        func_0x000107c32bc8();
      } while (extraout_w10_07 != 0);
    }
    func_0x000107c32be8();
    func_0x000108702540();
    func_0x0001087021b4();
  }
  FUN_1086fd164(&lStack_1a0);
  func_0x0001086fee0c(&lStack_220);
  func_0x000107c27a04(&uStack_208);
  func_0x000107c28d40(&uStack_1f0);
  func_0x0001086feeac(&lStack_1c0);
  func_0x000107c32ba0(uStack_128);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
LAB_1086fcf64:
  FUN_1086fecac();
LAB_1086fcf68:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1086fcf6c);
  (*pcVar2)();
}



/* Entry: 1086fcb88; end: 1086fd13b;  */

void FUN_1086fcb88(undefined8 param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  ulong uVar6;
  long lVar7;
  long unaff_x20;
  long *unaff_x21;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  long lStack_168;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  long lStack_110;
  ulong uStack_108;
  ulong auStack_100 [2];
  long lStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined **ppuStack_b8;
  long *plStack_b0;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined8 uStack_78;
  
  func_0x000108702010();
  func_0x000107c32bb4();
  lStack_110 = 0;
  uStack_108 = 0;
  auStack_100[0] = 0;
  uStack_78 = extraout_x8;
  if (param_2[1] - *param_2 != 0) {
    func_0x000108702574(param_2[1] - *param_2);
    if ((long *)0x38e38e38e38e38e < param_2) goto LAB_1086fcf64;
    FUN_1086fed3c(&uStack_c0);
    FUN_1086fecb8(&lStack_110,&uStack_c0);
    func_0x0001086fedc8(&uStack_c0);
    func_0x000108702574(unaff_x21[1] - *unaff_x21);
  }
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_120 = 0x3f800000;
  uStack_158 = 0;
  uStack_150 = 0;
  uStack_148 = 0;
  func_0x000107c27ab0(&uStack_158);
  lVar8 = unaff_x21[1];
  for (lVar7 = *unaff_x21; lVar7 != lVar8; lVar7 = lVar7 + 0x18) {
    func_0x0001087024c4(&uStack_c0);
    FUN_1086fc43c(&uStack_140,&uStack_c0,lVar7);
    func_0x000107c28840(&uStack_158,&uStack_c0);
    func_0x000107c27914(&uStack_c0);
  }
  puVar4 = *(undefined8 **)(*(long *)(unaff_x20 + 0xb0) + 0x30);
  FUN_10886783c(&lStack_170,puVar4,&uStack_158);
  for (lVar7 = lStack_170; uVar3 = lVar7 == lStack_168, !(bool)uVar3; lVar7 = lVar7 + 0x30) {
    puVar4 = &uStack_140;
    FUN_1086fd13c(puVar4,lVar7);
    func_0x000107c27994(&lStack_1c0,puVar4);
    func_0x000107c27994(&lStack_1d8,lVar7);
    uStack_e0 = lStack_1b0;
    uStack_e8 = uStack_1b8;
    lStack_f0 = lStack_1c0;
    uStack_c8 = uStack_1c8;
    lStack_d0 = lStack_1d0;
    lStack_d8 = lStack_1d8;
    uStack_1b8 = 0;
    lStack_1b0 = 0;
    uStack_1c8 = 0;
    lStack_1c0 = 0;
    lStack_1d8 = 0;
    lStack_1d0 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_1a0 = 0;
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_188 = 0;
    FUN_1086464fc(&uStack_c0,&lStack_f0,*(undefined8 *)(lVar7 + 0x18),0,0);
    FUN_108646578(&lStack_f0);
    FUN_108646578(&uStack_1a0);
    func_0x000107c27914(&lStack_1d8);
    func_0x000108702298();
    uStack_88 = *(undefined8 *)(lVar7 + 0x20);
    uStack_80 = *(undefined1 *)(lVar7 + 0x28);
    if (uStack_108 < auStack_100[0]) {
      func_0x0001086fed9c(uStack_108,&uStack_c0);
      uVar10 = uStack_108 + 0x48;
    }
    else {
      lVar8 = (long)(uStack_108 - lStack_110) / 0x48;
      uVar10 = lVar8 + 1;
      if (0x38e38e38e38e38e < uVar10) {
        FUN_1086fecac();
        goto LAB_1086fcf68;
      }
      uVar1 = (long)(auStack_100[0] - lStack_110) / 0x48;
      uVar6 = uVar1 * 2;
      if (uVar6 < uVar10 || uVar6 - uVar10 == 0) {
        uVar6 = uVar10;
      }
      if (0x1c71c71c71c71c6 < uVar1) {
        uVar6 = 0x38e38e38e38e38e;
      }
      FUN_1086fed3c(&lStack_f0,uVar6,lVar8,auStack_100);
      func_0x0001086fed9c(uStack_e0,&uStack_c0);
      uStack_e0 = uStack_e0 + 0x48;
      FUN_1086fecb8(&lStack_110,&lStack_f0);
      uVar10 = uStack_108;
      func_0x0001086fedc8(&lStack_f0);
    }
    puVar4 = &uStack_c0;
    uStack_108 = uVar10;
    FUN_108646578();
  }
  lVar7 = **(long **)(unaff_x20 + 0xb0);
  uStack_e8 = uStack_108;
  lStack_f0 = lStack_110;
  uStack_e0 = auStack_100[0];
  lStack_110 = 0;
  uStack_108 = 0;
  auStack_100[0] = 0;
  lStack_d0 = param_3[1];
  lStack_d8 = *param_3;
  if (param_3[1] != 0) {
    do {
      func_0x000107c32bc8();
    } while (extraout_w10 != 0);
  }
  func_0x000107c28150();
  lVar9 = *(long *)(lVar7 + 0x10);
  plVar5 = (long *)(lVar9 + 8);
  __ZNSt3__15mutex4lockEv();
  lVar8 = *(long *)(lVar9 + 0x70);
  uStack_c0 = 0x108700fa0;
  ppuStack_b8 = &PTR_FUN_110a67c40;
  func_0x000107c32c38();
  plVar5[1] = uStack_e8;
  *plVar5 = lStack_f0;
  plVar5[2] = uStack_e0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  lStack_f0 = 0;
  plVar5[4] = lStack_d0;
  plVar5[3] = lStack_d8;
  if (lStack_d0 != 0) {
    do {
      func_0x000107c32bc8();
    } while (extraout_w10_00 != 0);
  }
  plStack_b0 = plVar5;
  puStack_90 = puVar4;
  func_0x000108702538(lVar9 + 0x48);
  func_0x000108701ea8(ppuStack_b8);
  __ZNSt3__15mutex6unlockEv(lVar9 + 8);
  if (lVar8 == 0) {
    ppuStack_b8 = *(undefined ***)(lVar7 + 0x18);
    uStack_c0 = *(undefined8 *)(lVar7 + 0x10);
    if (*(long *)(lVar7 + 0x18) != 0) {
      do {
        func_0x000107c32bc8();
      } while (extraout_w10_01 != 0);
    }
    func_0x000107c32be8();
    func_0x000108702540();
    func_0x0001087021b4();
  }
  FUN_1086fd164(&lStack_f0);
  func_0x0001086fee0c(&lStack_170);
  func_0x000107c27a04(&uStack_158);
  func_0x000107c28d40(&uStack_140);
  func_0x0001086feeac(&lStack_110);
  func_0x000107c32ba0(uStack_78);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
LAB_1086fcf64:
  FUN_1086fecac();
LAB_1086fcf68:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1086fcf6c);
  (*pcVar2)();
}



/* Entry: 1086fd13c; end: 1086fd163;  */

long * FUN_1086fd13c(long param_1)

{
  long lVar1;
  long *unaff_x19;
  long lVar2;
  
  FUN_10868d74c();
  if (param_1 != 0) {
    return (long *)(param_1 + 0x28);
  }
  func_0x000104c03f28(&UNK_10f639994);
  func_0x000107c32c54();
  func_0x000108625e10();
  lVar2 = *unaff_x19;
  if (lVar2 != 0) {
    lVar1 = unaff_x19[1];
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x48;
      FUN_108646578();
    }
    func_0x000108702524();
  }
  return unaff_x19;
}



/* Entry: 1086fd164; end: 1086fd187;  */

void FUN_1086fd164(void)

{
  long lVar1;
  long *unaff_x19;
  long lVar2;
  
  func_0x000107c32c54();
  func_0x000108625e10();
  lVar2 = *unaff_x19;
  if (lVar2 != 0) {
    lVar1 = unaff_x19[1];
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x48;
      FUN_108646578();
    }
    func_0x000108702524();
  }
  return;
}



/* Entry: 1086fd188; end: 1086fd30f;  */

undefined1 * FUN_1086fd188(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined1 in_ZR;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 extraout_x8;
  int extraout_w10;
  long unaff_x20;
  long lVar6;
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_38;
  
  func_0x000107c32c24();
  func_0x000107c32bb4();
  uStack_38 = extraout_x8;
  func_0x000107c295c4(auStack_a8,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  func_0x000107c279ac(auStack_90);
  uStack_70 = param_3[1];
  uStack_78 = *param_3;
  if (param_3[1] != 0) {
    do {
      func_0x000107c32bc8();
    } while (extraout_w10 != 0);
  }
  lVar6 = *(long *)(unaff_x20 + 0xb0);
  func_0x000100869234(&pcStack_68,1);
  uVar1 = *(undefined4 *)(unaff_x20 + 0x7c);
  puStack_58[2] = 0;
  *puStack_58 = &PTR_DAT_110a67e40;
  puStack_58[1] = 0;
  func_0x0001008692bc(puStack_58 + 3,lVar6 + 0xe0,lVar6 + 0x40,lVar6 + 0x30,lVar6 + 0xc0,0x1200a3,
                      uVar1);
  puVar2 = puStack_58;
  puStack_58 = (undefined8 *)0x0;
  func_0x00010086935c(auStack_b8,puVar2 + 3);
  func_0x000100869470(&pcStack_68);
  pcStack_68 = FUN_10870102c;
  ppuStack_60 = &PTR_FUN_110a67ca0;
  uVar3 = 0x40;
  __Znwm();
  FUN_1087013a4();
  puStack_58 = (undefined8 *)uVar3;
  func_0x000107c32cec();
  FUN_1086f4bb4();
  func_0x0001087022e4();
  func_0x000100869440(auStack_b8);
  puVar4 = auStack_a8;
  FUN_1086fd310();
  func_0x000107c32ba0(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001087022e4();
    func_0x000100869440(auStack_b8);
    puVar5 = auStack_a8;
    FUN_1086fd310();
    func_0x000108701fd0();
    func_0x000108625d80(puVar5 + 0x30);
    func_0x000107c27a04(puVar5 + 0x18);
    func_0x00010054e7b4();
    if (puVar5 != (undefined1 *)0x0) {
      func_0x0001000df548();
    }
    return puVar4;
  }
  return puVar4;
}



/* Entry: 1086fd310; end: 1086fd33f;  */

undefined8 FUN_1086fd310(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000108625d80(param_1 + 0x30);
  func_0x000107c27a04(param_1 + 0x18);
  func_0x00010054e7b4();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 1086fd340; end: 1086fd627;  */

void FUN_1086fd340(code *param_1,long param_2,code **param_3,code **param_4)

{
  undefined1 in_ZR;
  undefined4 uVar1;
  code **ppcVar2;
  long *plVar3;
  ulong extraout_x8;
  code *extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  code *extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  code *extraout_x8_07;
  ulong extraout_x8_08;
  code *pcVar4;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  long extraout_x8_13;
  long extraout_x8_14;
  long extraout_x8_15;
  long extraout_x8_16;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w10_08;
  int extraout_w10_09;
  int extraout_w10_10;
  int extraout_w10_11;
  int extraout_w10_12;
  int extraout_w10_13;
  code **unaff_x19;
  long unaff_x20;
  code **unaff_x21;
  long lVar5;
  code **ppcVar6;
  long unaff_x22;
  code **unaff_x23;
  undefined **in_register_00005008;
  code *pcStack_8f0;
  undefined **ppuStack_8e8;
  undefined4 uStack_8e0;
  code *pcStack_8c0;
  undefined **ppuStack_8b8;
  code *pcStack_8b0;
  undefined4 uStack_8a0;
  code **ppcStack_890;
  undefined8 uStack_888;
  code *apcStack_820 [2];
  undefined4 uStack_810;
  int iStack_7b8;
  byte bStack_658;
  char cStack_450;
  code *pcStack_440;
  undefined **ppuStack_438;
  code *pcStack_430;
  undefined4 uStack_420;
  undefined8 uStack_58;
  
  func_0x000107c32bb4();
  func_0x0001087023fc();
  if ((extraout_x8 & 1) == 0) {
    func_0x000108702010();
    FUN_1088660e8(&pcStack_440,*(undefined8 *)(*(long *)(param_2 + 0xb0) + 0x30));
    FUN_10869148c(apcStack_820,&pcStack_440);
    func_0x000107c288ec(&pcStack_440);
    in_ZR = cStack_450 == '\x01';
    if ((((bool)in_ZR) && ((bStack_658 & 1) == 0)) && (in_ZR = iStack_7b8 == 1, (bool)in_ZR)) {
      func_0x000107c32be8(*(undefined8 *)(*(long *)(unaff_x20 + 0xb0) + 0xd0));
      (*extraout_x8_00)();
      param_3 = unaff_x21;
    }
    else if (*param_4 != (code *)0x0) {
      unaff_x22 = **(long **)(unaff_x20 + 0xb0);
      if (param_4[1] != (code *)0x0) {
        do {
          func_0x000107c32bc8();
        } while (extraout_w10 != 0);
      }
      func_0x000107c28150();
      func_0x0001087021c4();
      func_0x000108702074();
      pcVar4 = unaff_x23[0xe];
      pcStack_440 = FUN_10870141c;
      ppuStack_438 = &PTR_DAT_110a67cc0;
      func_0x0001087020e8();
      pcStack_430 = param_1;
      if (extraout_x8_01 != 0) {
        do {
          func_0x000107c32bc8();
        } while (extraout_w10_00 != 0);
      }
      param_3 = &pcStack_440;
      func_0x000107c28154(unaff_x23 + 9);
      func_0x000108701ea8(ppuStack_438);
      func_0x000108701ff8();
      if (pcVar4 == (code *)0x0) {
        func_0x000108701f68();
        pcStack_440 = param_1;
        ppuStack_438 = in_register_00005008;
        if (extraout_x8_02 != 0) {
          do {
            func_0x000107c32bc8();
          } while (extraout_w10_01 != 0);
        }
        func_0x000107c32be8();
        param_3 = &pcStack_440;
        (*extraout_x8_03)();
        func_0x0001087022ac();
      }
      func_0x00010870207c();
    }
    func_0x000107c288cc(apcStack_820);
    unaff_x19 = param_4;
  }
  while( true ) {
    func_0x000107c32ba0(uStack_58);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x000108701fbc();
    func_0x0001087022ac();
    func_0x00010870207c();
    ppcVar2 = apcStack_820;
    func_0x000107c288cc();
    in_ZR = (int)unaff_x22 == 1;
    if (!(bool)in_ZR) break;
    func_0x000108702094();
    func_0x000108848514();
    func_0x000108701ee0();
    uVar1 = SUB84(ppcVar2,0);
    apcStack_820[0] = param_1;
    if (extraout_x8_04 != 0) {
      do {
        func_0x000107c32bc8();
        uVar1 = SUB84(ppcVar2,0);
      } while (extraout_w10_02 != 0);
    }
    uStack_810 = uVar1;
    func_0x000107c28150();
    func_0x0001087021d0();
    func_0x000108702000();
    lVar5 = *(long *)(unaff_x22 + 0x70);
    pcStack_440 = (code *)0x108701464;
    ppuStack_438 = &PTR_DAT_110a67cd8;
    func_0x00010870222c();
    pcStack_430 = param_1;
    if (extraout_x8_05 != 0) {
      do {
        func_0x000107c32bc8();
      } while (extraout_w10_03 != 0);
    }
    unaff_x23 = &pcStack_440;
    uStack_420 = uStack_810;
    param_3 = &pcStack_440;
    func_0x000107c28154(unaff_x22 + 0x48);
    func_0x000108701e9c(ppuStack_438);
    func_0x000108701fc8();
    if (lVar5 == 0) {
      func_0x000108701f10();
      pcStack_440 = param_1;
      ppuStack_438 = in_register_00005008;
      if (extraout_x8_06 != 0) {
        do {
          func_0x000107c32bc8();
        } while (extraout_w10_04 != 0);
      }
      func_0x000107c32be8();
      param_3 = &pcStack_440;
      (*extraout_x8_07)();
      func_0x0001087022ac();
    }
    func_0x00010870208c();
    ___cxa_end_catch();
  }
  func_0x00010870209c();
  func_0x0001087020a4();
  func_0x000107c32bb4();
  func_0x0001087023fc();
  if (((extraout_x8_08 & 1) == 0) && (pcVar4 = *param_3, unaff_x19 = param_3, pcVar4 != (code *)0x0)
     ) {
    if (*(long *)(ppcVar2[0x16] + 0x90) == 0) {
      ppuStack_8e8 = (undefined **)param_3[1];
      pcStack_8f0 = pcVar4;
      if (ppuStack_8e8 != (undefined **)0x0) {
        do {
          func_0x000107c32bc8();
        } while (extraout_w10_08 != 0);
      }
      func_0x000107c28150();
      func_0x0001087021d0();
      func_0x000108702000();
      lVar5 = *(long *)(unaff_x22 + 0x70);
      pcStack_8c0 = (code *)0x10870149c;
      ppuStack_8b8 = &PTR_DAT_110a67cf0;
      func_0x00010870222c();
      pcStack_8b0 = param_1;
      if (extraout_x8_12 != 0) {
        do {
          func_0x000107c32bc8();
        } while (extraout_w10_09 != 0);
      }
      ppcStack_890 = param_3;
      func_0x000108702140();
      func_0x000108701e9c(ppuStack_8b8);
      func_0x000108701fc8();
      if (lVar5 == 0) {
        func_0x000108701f10();
        pcStack_8c0 = param_1;
        ppuStack_8b8 = in_register_00005008;
        if (extraout_x8_13 != 0) {
          do {
            func_0x000107c32bc8();
          } while (extraout_w10_10 != 0);
        }
        func_0x000107c32be8();
        func_0x000108702200();
        func_0x000108702084();
      }
      func_0x00010870208c();
    }
    else {
      plVar3 = *(long **)(ppcVar2[0x16] + 0x150);
      (**(code **)(*plVar3 + 0x60))(plVar3,*(undefined4 *)((long)ppcVar2 + 0x7c));
      FUN_10883938c(&pcStack_8f0,*(undefined8 *)(ppcVar2[0x16] + 0x90));
      ppcVar6 = *(code ***)(ppcVar2[0x16] + 0x50);
      FUN_1086b7ebc(&pcStack_8c0,&pcStack_8f0);
      func_0x000107c32cb4(*(undefined8 *)(*ppcVar6 + 200));
      func_0x000107c27a04(&pcStack_8c0);
      func_0x0001087023d8();
      func_0x0001087020bc();
      if (extraout_x8_09 != 0) {
        do {
          func_0x000107c32bc8();
        } while (extraout_w10_05 != 0);
      }
      func_0x000107c28150();
      func_0x0001087021c4();
      func_0x000108702074();
      pcVar4 = unaff_x23[0xe];
      pcStack_8c0 = (code *)0x1087014d4;
      ppuStack_8b8 = &PTR_DAT_110a67d08;
      func_0x0001087020e8();
      pcStack_8b0 = param_1;
      if (extraout_x8_10 != 0) {
        do {
          func_0x000107c32bc8();
        } while (extraout_w10_06 != 0);
      }
      ppcStack_890 = ppcVar6;
      func_0x000108702508();
      func_0x000108701ea8(ppuStack_8b8);
      func_0x000108701ff8();
      if (pcVar4 == (code *)0x0) {
        func_0x000108701f68();
        pcStack_8c0 = param_1;
        ppuStack_8b8 = in_register_00005008;
        if (extraout_x8_11 != 0) {
          do {
            func_0x000107c32bc8();
          } while (extraout_w10_07 != 0);
        }
        func_0x000107c32be8();
        func_0x000108702200();
        func_0x000108702084();
      }
      func_0x00010870207c();
      (**(code **)(**(long **)(ppcVar2[0x16] + 0x130) + 0x28))
                (*(long **)(ppcVar2[0x16] + 0x130),&pcStack_8f0,1);
      FUN_1086d2c8c(&pcStack_8f0);
    }
  }
  while (func_0x000107c32ba0(uStack_888), !(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000108701fec();
    func_0x00010870208c();
    do {
      func_0x00010870209c();
      func_0x000108701fbc();
      func_0x00010870207c();
      ppcVar2 = &pcStack_8f0;
      FUN_1086d2c8c();
      in_ZR = (int)unaff_x22 == 1;
    } while (!(bool)in_ZR);
    func_0x000108702094();
    func_0x000108848514();
    func_0x000108701ee0();
    uVar1 = SUB84(ppcVar2,0);
    pcStack_8f0 = param_1;
    ppuStack_8e8 = in_register_00005008;
    if (extraout_x8_14 != 0) {
      do {
        func_0x000107c32bc8();
        uVar1 = SUB84(ppcVar2,0);
      } while (extraout_w10_11 != 0);
    }
    uStack_8e0 = uVar1;
    func_0x000107c28150();
    func_0x0001087021d0();
    func_0x000108702000();
    lVar5 = *(long *)(unaff_x22 + 0x70);
    pcStack_8c0 = (code *)0x10870150c;
    ppuStack_8b8 = &PTR_DAT_110a67d20;
    func_0x00010870222c();
    pcStack_8b0 = param_1;
    if (extraout_x8_15 != 0) {
      do {
        func_0x000107c32bc8();
      } while (extraout_w10_12 != 0);
    }
    uStack_8a0 = uStack_8e0;
    ppcStack_890 = unaff_x19;
    func_0x000108702140();
    func_0x000108701e9c(ppuStack_8b8);
    func_0x000108701fc8();
    if (lVar5 == 0) {
      func_0x000108701f10();
      pcStack_8c0 = param_1;
      ppuStack_8b8 = in_register_00005008;
      if (extraout_x8_16 != 0) {
        do {
          func_0x000107c32bc8();
        } while (extraout_w10_13 != 0);
      }
      func_0x000107c32be8();
      func_0x000108702200();
      func_0x000108702084();
    }
    func_0x00010870208c();
    ___cxa_end_catch();
  }
  return;
}



/* Entry: 1086fd628; end: 1086fd9bf;  */

void FUN_1086fd628(long param_1,long param_2,long *param_3)

{
  undefined1 in_ZR;
  undefined4 uVar1;
  long *plVar2;
  ulong extraout_x8;
  long lVar3;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  long *unaff_x19;
  long unaff_x22;
  long unaff_x23;
  undefined **in_register_00005008;
  long lStack_c0;
  undefined **ppuStack_b8;
  undefined4 uStack_b0;
  long lStack_90;
  undefined **ppuStack_88;
  long lStack_80;
  undefined4 uStack_70;
  long *plStack_60;
  undefined8 uStack_58;
  
  func_0x000107c32bb4();
  func_0x0001087023fc();
  if (((extraout_x8 & 1) == 0) && (lVar3 = *param_3, unaff_x19 = param_3, lVar3 != 0)) {
    if (*(long *)(*(long *)(param_2 + 0xb0) + 0x90) == 0) {
      ppuStack_b8 = (undefined **)param_3[1];
      lStack_c0 = lVar3;
      if (ppuStack_b8 != (undefined **)0x0) {
        do {
          func_0x000107c32bc8();
        } while (extraout_w10_02 != 0);
      }
      func_0x000107c28150();
      func_0x0001087021d0();
      func_0x000108702000();
      lVar3 = *(long *)(unaff_x22 + 0x70);
      lStack_90 = 0x10870149c;
      ppuStack_88 = &PTR_DAT_110a67cf0;
      func_0x00010870222c();
      lStack_80 = param_1;
      if (extraout_x8_03 != 0) {
        do {
          func_0x000107c32bc8();
        } while (extraout_w10_03 != 0);
      }
      plStack_60 = param_3;
      func_0x000108702140();
      func_0x000108701e9c(ppuStack_88);
      func_0x000108701fc8();
      if (lVar3 == 0) {
        func_0x000108701f10();
        lStack_90 = param_1;
        ppuStack_88 = in_register_00005008;
        if (extraout_x8_04 != 0) {
          do {
            func_0x000107c32bc8();
          } while (extraout_w10_04 != 0);
        }
        func_0x000107c32be8();
        func_0x000108702200();
        func_0x000108702084();
      }
      func_0x00010870208c();
    }
    else {
      plVar2 = *(long **)(*(long *)(param_2 + 0xb0) + 0x150);
      (**(code **)(*plVar2 + 0x60))(plVar2,*(undefined4 *)(param_2 + 0x7c));
      FUN_10883938c(&lStack_c0,*(undefined8 *)(*(long *)(param_2 + 0xb0) + 0x90));
      plVar2 = *(long **)(*(long *)(param_2 + 0xb0) + 0x50);
      FUN_1086b7ebc(&lStack_90,&lStack_c0);
      func_0x000107c32cb4(*(undefined8 *)(*plVar2 + 200));
      func_0x000107c27a04(&lStack_90);
      func_0x0001087023d8();
      func_0x0001087020bc();
      if (extraout_x8_00 != 0) {
        do {
          func_0x000107c32bc8();
        } while (extraout_w10 != 0);
      }
      func_0x000107c28150();
      func_0x0001087021c4();
      func_0x000108702074();
      lVar3 = *(long *)(unaff_x23 + 0x70);
      lStack_90 = 0x1087014d4;
      ppuStack_88 = &PTR_DAT_110a67d08;
      func_0x0001087020e8();
      lStack_80 = param_1;
      if (extraout_x8_01 != 0) {
        do {
          func_0x000107c32bc8();
        } while (extraout_w10_00 != 0);
      }
      plStack_60 = plVar2;
      func_0x000108702508();
      func_0x000108701ea8(ppuStack_88);
      func_0x000108701ff8();
      if (lVar3 == 0) {
        func_0x000108701f68();
        lStack_90 = param_1;
        ppuStack_88 = in_register_00005008;
        if (extraout_x8_02 != 0) {
          do {
            func_0x000107c32bc8();
          } while (extraout_w10_01 != 0);
        }
        func_0x000107c32be8();
        func_0x000108702200();
        func_0x000108702084();
      }
      func_0x00010870207c();
      plVar2 = *(long **)(*(long *)(param_2 + 0xb0) + 0x130);
      (**(code **)(*plVar2 + 0x28))(plVar2,&lStack_c0,1);
      FUN_1086d2c8c(&lStack_c0);
    }
  }
  while (func_0x000107c32ba0(uStack_58), !(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000108701fec();
    func_0x00010870208c();
    do {
      func_0x00010870209c();
      func_0x000108701fbc();
      func_0x00010870207c();
      plVar2 = &lStack_c0;
      FUN_1086d2c8c();
      in_ZR = (int)unaff_x22 == 1;
    } while (!(bool)in_ZR);
    func_0x000108702094();
    func_0x000108848514();
    func_0x000108701ee0();
    uVar1 = SUB84(plVar2,0);
    lStack_c0 = param_1;
    ppuStack_b8 = in_register_00005008;
    if (extraout_x8_05 != 0) {
      do {
        func_0x000107c32bc8();
        uVar1 = SUB84(plVar2,0);
      } while (extraout_w10_05 != 0);
    }
    uStack_b0 = uVar1;
    func_0x000107c28150();
    func_0x0001087021d0();
    func_0x000108702000();
    lVar3 = *(long *)(unaff_x22 + 0x70);
    lStack_90 = 0x10870150c;
    ppuStack_88 = &PTR_DAT_110a67d20;
    func_0x00010870222c();
    lStack_80 = param_1;
    if (extraout_x8_06 != 0) {
      do {
        func_0x000107c32bc8();
      } while (extraout_w10_06 != 0);
    }
    uStack_70 = uStack_b0;
    plStack_60 = unaff_x19;
    func_0x000108702140();
    func_0x000108701e9c(ppuStack_88);
    func_0x000108701fc8();
    if (lVar3 == 0) {
      func_0x000108701f10();
      lStack_90 = param_1;
      ppuStack_88 = in_register_00005008;
      if (extraout_x8_07 != 0) {
        do {
          func_0x000107c32bc8();
        } while (extraout_w10_07 != 0);
      }
      func_0x000107c32be8();
      func_0x000108702200();
      func_0x000108702084();
    }
    func_0x00010870208c();
    ___cxa_end_catch();
  }
  return;
}



/* Entry: 1086fd9c0; end: 1086fde6b;  */

void FUN_1086fd9c0(ulong param_1,undefined1 *param_2,undefined8 param_3,ulong param_4)

{
  undefined1 in_ZR;
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong extraout_x8;
  code *extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  code *extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  code *extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  code *extraout_x8_13;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w10_08;
  int extraout_w10_09;
  long *unaff_x19;
  ulong unaff_x22;
  long unaff_x23;
  long lVar4;
  undefined **in_register_00005008;
  long lStack_158;
  long lStack_150;
  ulong uStack_120;
  undefined **ppuStack_118;
  undefined4 uStack_110;
  undefined **ppuStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined1 auStack_e0 [80];
  ulong uStack_90;
  undefined **ppuStack_88;
  ulong uStack_80;
  undefined **ppuStack_78;
  undefined4 uStack_70;
  undefined8 uStack_58;
  
  func_0x000107c32bb4();
  func_0x0001087023fc();
  if ((extraout_x8 & 1) != 0) goto LAB_1086fdca0;
  func_0x000107c32c30();
  uStack_f8 = 0;
  uStack_f0 = 0;
  ppuStack_108 = &PTR_FUN_110a609a8;
  uStack_100 = 0;
  uStack_e8 = 0x68;
  func_0x000107c28b3c(auStack_e0,*(long *)(param_2 + 0xb0) + 0xc0,&ppuStack_108,0,0);
  func_0x000108702304();
  in_ZR = (char)unaff_x19[0x10] == '\x01';
  if ((bool)in_ZR) {
    uStack_90 = uStack_90 & 0xffffffffffffff00;
    ppuStack_78 = (undefined **)((ulong)ppuStack_78 & 0xffffffffffffff00);
    (**(code **)(*unaff_x19 + 0x28))();
    func_0x000107c279dc(&uStack_90);
    func_0x000108702498(*(undefined8 *)(*unaff_x19 + 0xd8));
    func_0x000108702408();
    (*extraout_x8_00)();
    FUN_1086fde6c();
    func_0x000108702420();
    if (extraout_x8_01 != 0) {
      do {
        func_0x000107c32bc8();
      } while (extraout_w10 != 0);
    }
    func_0x000107c28150();
    func_0x0001087021c4();
    func_0x000108702074();
    lVar4 = *(long *)(unaff_x23 + 0x70);
    uStack_90 = 0x108701544;
    ppuStack_88 = &PTR_DAT_110a67d38;
    func_0x0001087020e8();
    uStack_80 = param_1;
    ppuStack_78 = in_register_00005008;
    if (extraout_x8_02 != 0) {
      do {
        func_0x000107c32bc8();
      } while (extraout_w10_00 != 0);
    }
    func_0x00010870233c(unaff_x23 + 0x48);
    func_0x000108701ea8(ppuStack_88);
    func_0x000108701ff8();
    if (lVar4 != 0) goto LAB_1086fdbcc;
    func_0x000108701f68();
    uStack_90 = param_1;
    ppuStack_88 = in_register_00005008;
    if (extraout_x8_03 != 0) {
      do {
        func_0x000107c32bc8();
      } while (extraout_w10_01 != 0);
    }
    func_0x000107c32be8();
    func_0x000108702344();
  }
  else {
    func_0x000108702408();
    (*extraout_x8_04)();
    if ((param_4 & 1) == 0) {
      FUN_1086fde6c();
    }
    func_0x000108702420();
    if (extraout_x8_05 != 0) {
      do {
        func_0x000107c32bc8();
      } while (extraout_w10_02 != 0);
    }
    func_0x000107c28150();
    func_0x0001087021c4();
    func_0x000108702074();
    lVar4 = *(long *)(unaff_x23 + 0x70);
    uStack_90 = 0x10870157c;
    ppuStack_88 = &PTR_DAT_110a67d50;
    func_0x0001087020e8();
    uStack_80 = param_1;
    ppuStack_78 = in_register_00005008;
    if (extraout_x8_06 != 0) {
      do {
        func_0x000107c32bc8();
      } while (extraout_w10_03 != 0);
    }
    func_0x00010870233c(unaff_x23 + 0x48);
    func_0x000108701ea8(ppuStack_88);
    func_0x000108701ff8();
    if (lVar4 != 0) goto LAB_1086fdbcc;
    func_0x000108701f68();
    uStack_90 = param_1;
    ppuStack_88 = in_register_00005008;
    if (extraout_x8_07 != 0) {
      do {
        func_0x000107c32bc8();
      } while (extraout_w10_04 != 0);
    }
    func_0x000107c32be8();
    func_0x000108702344();
  }
  func_0x000108702118();
LAB_1086fdbcc:
  func_0x00010870207c();
  while( true ) {
    iVar1 = (int)unaff_x19 + 0x30;
    func_0x000107c29538();
    if (iVar1 != 0) {
      lVar4 = unaff_x19[0x16];
      ppuStack_118 = *(undefined ***)(lVar4 + 0x108);
      uStack_120 = *(ulong *)(lVar4 + 0x100);
      if (*(long *)(lVar4 + 0x108) != 0) {
        do {
          func_0x000107c32bc8();
        } while (extraout_w10_05 != 0);
      }
      func_0x000107c28150();
      func_0x0001087021f4();
      func_0x000108702000();
      in_register_00005008 = ppuStack_118;
      param_1 = uStack_120;
      lVar4 = *(long *)(param_4 + 0x70);
      uStack_90 = 0x1087015ec;
      ppuStack_88 = &PTR_DAT_110a67d80;
      ppuStack_78 = ppuStack_118;
      uStack_80 = uStack_120;
      uStack_120 = 0;
      ppuStack_118 = (undefined **)0x0;
      func_0x00010870233c(param_4 + 0x48);
      func_0x000108701ed4(ppuStack_88);
      func_0x000108701fc8();
      if (lVar4 == 0) {
        func_0x000108701f58();
        uStack_90 = param_1;
        ppuStack_88 = in_register_00005008;
        if (extraout_x8_08 != 0) {
          do {
            func_0x000107c32bc8();
          } while (extraout_w10_06 != 0);
        }
        func_0x000107c32be8();
        func_0x000108702344();
        func_0x000108702118();
      }
      func_0x000107c2956c(&uStack_120);
    }
    uVar3 = *(undefined8 *)(unaff_x19[0x16] + 0x110);
    func_0x0001087021e8(uVar3);
    (*extraout_x8_09)();
    FUN_10868168c(0x1e4,uVar3);
    param_2 = auStack_e0;
    func_0x000107c28b40();
    unaff_x22 = param_4;
LAB_1086fdca0:
    param_4 = unaff_x22;
    func_0x000107c32ba0(uStack_58);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    func_0x000108701fbc();
    func_0x000108702118();
    func_0x00010870207c();
    in_ZR = (int)param_4 == 1;
    if (!(bool)in_ZR) {
      func_0x000107c28b40(auStack_e0);
      func_0x00010870209c();
      func_0x0001087020f4();
      FUN_1086fdf58();
      if (lStack_158 != lStack_150) {
        func_0x000107c32be8(*(undefined8 *)(unaff_x19[0x16] + 0xa0));
        (*extraout_x8_13)();
      }
      func_0x000107c27a04(&lStack_158);
      return;
    }
    func_0x000108702094();
    func_0x000108848514();
    func_0x00010870216c();
    uVar2 = SUB84(param_2,0);
    uStack_120 = param_1;
    ppuStack_118 = in_register_00005008;
    if (extraout_x8_10 != 0) {
      do {
        func_0x000107c32bc8();
        uVar2 = SUB84(param_2,0);
      } while (extraout_w10_07 != 0);
    }
    uStack_110 = uVar2;
    func_0x000107c28150();
    func_0x0001087021f4();
    func_0x000108702000();
    lVar4 = *(long *)(param_4 + 0x70);
    uStack_90 = 0x1087015b4;
    ppuStack_88 = &PTR_DAT_110a67d68;
    func_0x0001087020e8();
    uStack_80 = param_1;
    ppuStack_78 = in_register_00005008;
    if (extraout_x8_11 != 0) {
      do {
        func_0x000107c32bc8();
      } while (extraout_w10_08 != 0);
    }
    uStack_70 = uStack_110;
    func_0x00010870233c(param_4 + 0x48);
    func_0x000108701ed4(ppuStack_88);
    func_0x000108701fc8();
    if (lVar4 == 0) {
      func_0x000108701f58();
      uStack_90 = param_1;
      ppuStack_88 = in_register_00005008;
      if (extraout_x8_12 != 0) {
        do {
          func_0x000107c32bc8();
        } while (extraout_w10_09 != 0);
      }
      func_0x000107c32be8();
      func_0x000108702344();
      func_0x000108702118();
    }
    func_0x00010870207c();
    ___cxa_end_catch();
  }
  return;
}



/* Entry: 1086fde6c; end: 1086fdec7;  */

void FUN_1086fde6c(void)

{
  code *extraout_x8;
  long unaff_x19;
  long lStack_38;
  long lStack_30;
  
  func_0x0001087020f4();
  FUN_1086fdf58();
  if (lStack_38 != lStack_30) {
    func_0x000107c32be8(*(undefined8 *)(*(long *)(unaff_x19 + 0xb0) + 0xa0));
    (*extraout_x8)();
  }
  func_0x000107c27a04(&lStack_38);
  return;
}



/* Entry: 1086fdec8; end: 1086fdf37;  */

void FUN_1086fdec8(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  code *extraout_x8;
  undefined1 auStack_40 [24];
  undefined1 uStack_28;
  
  plVar1 = *(long **)(*(long *)(param_1 + 0xb0) + 0x150);
  auStack_40[0] = 0;
  uStack_28 = 0;
  (**(code **)(*plVar1 + 0x58))(plVar1,*(undefined4 *)(param_1 + 0x7c),auStack_40);
  func_0x000107c279a4(auStack_40);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0xb0) + 0x110);
  func_0x0001087021e8(uVar2);
  (*extraout_x8)();
  FUN_10868168c(0x1e4,uVar2);
  return;
}



/* Entry: 1086fdf38; end: 1086fdf57;  */

void FUN_1086fdf38(void)

{
  FUN_1086fde6c();
  return;
}



/* Entry: 1086fdf58; end: 1086fe05f;  */

void FUN_1086fdf58(undefined8 *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  long alStack_bd8 [123];
  byte bStack_800;
  long alStack_7f8 [123];
  byte bStack_420;
  undefined1 auStack_418 [1000];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 0x7c);
  if (2 < iVar1 - 1U) {
    iVar1 = 0;
  }
  FUN_108867e48(auStack_418,*(undefined8 *)(*(long *)(param_2 + 0xb0) + 0x30),param_2 + 0x40,iVar1,
                param_3);
  func_0x000107c288b4(alStack_7f8,auStack_418);
  func_0x0001087024f4(alStack_bd8);
  while ((((bStack_420 & 1) != 0 || ((bStack_800 & 1) != 0)) && (alStack_7f8[0] != alStack_bd8[0])))
  {
    plVar2 = alStack_7f8;
    func_0x000107c288b8(plVar2);
    func_0x000107c28840(param_1,plVar2);
    func_0x000107c28920(alStack_7f8);
  }
  func_0x000108702054(alStack_bd8);
  func_0x000108702054(alStack_7f8);
  func_0x000107c288ec(auStack_418);
  return;
}



/* Entry: 1086fe060; end: 1086fe2c7;  */

/* WARNING: Possible PIC construction at 0x0001086fe150: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001086fe1b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001086fe1b8) */
/* WARNING: Removing unreachable block (ram,0x0001086fe2c0) */
/* WARNING: Removing unreachable block (ram,0x0001086fe1c0) */
/* WARNING: Removing unreachable block (ram,0x0001086fe1d4) */
/* WARNING: Removing unreachable block (ram,0x0001086fe1d8) */
/* WARNING: Removing unreachable block (ram,0x0001086fe1e0) */
/* WARNING: Removing unreachable block (ram,0x0001086fe214) */
/* WARNING: Removing unreachable block (ram,0x0001086fe218) */
/* WARNING: Removing unreachable block (ram,0x0001086fe220) */
/* WARNING: Removing unreachable block (ram,0x0001086fe244) */
/* WARNING: Removing unreachable block (ram,0x0001086fe250) */
/* WARNING: Removing unreachable block (ram,0x0001086fe254) */
/* WARNING: Removing unreachable block (ram,0x0001086fe25c) */
/* WARNING: Removing unreachable block (ram,0x0001086fe268) */

void FUN_1086fe060(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  ulong extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long unaff_x23;
  long lVar2;
  undefined **in_register_00005008;
  undefined1 auStack_d0 [24];
  undefined8 uStack_b8;
  undefined1 auStack_a8 [24];
  undefined8 uStack_90;
  undefined **ppuStack_88;
  undefined1 *puStack_80;
  undefined8 uStack_58;
  
  puVar1 = auStack_d0;
  func_0x000107c32bb4();
  func_0x0001087023fc();
  if ((extraout_x8 & 1) == 0) {
    func_0x000107c32c24();
    FUN_1086fdf58(auStack_a8);
    func_0x0001087023d8();
    func_0x000107c279ac(auStack_d0,auStack_a8);
    func_0x0001087020bc();
    uStack_b8 = param_1;
    if (extraout_x8_00 != 0) {
      do {
        func_0x000107c32bc8();
      } while (extraout_w10 != 0);
    }
    func_0x000107c28150();
    func_0x0001087021c4();
    func_0x000108702074();
    lVar2 = *(long *)(unaff_x23 + 0x70);
    uStack_90 = 0x108701618;
    ppuStack_88 = &PTR_FUN_110a67d98;
    func_0x000107c32c38();
    func_0x000108702180();
    if (extraout_x8_01 != 0) {
      do {
        func_0x000107c32bc8();
      } while (extraout_w10_00 != 0);
    }
    puStack_80 = puVar1;
    func_0x000108702508();
    func_0x000108701ea8(ppuStack_88);
    func_0x000108701ff8();
    if (lVar2 == 0) {
      func_0x000108701f68();
      uStack_90 = param_1;
      ppuStack_88 = in_register_00005008;
      if (extraout_x8_02 != 0) {
        do {
          func_0x000107c32bc8();
        } while (extraout_w10_01 != 0);
      }
      func_0x000107c32be8();
      func_0x000108702200();
      func_0x000108702084();
    }
    FUN_1086fe2c8(auStack_d0);
  }
  else {
    func_0x000107c32ba0(uStack_58);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x000108701fbc();
    func_0x000108702084();
    FUN_1086fe2c8(auStack_d0);
  }
  func_0x000100292090(auStack_a8);
  func_0x0001005fb5c8();
  return;
}



/* Entry: 1086fe2c8; end: 1086fe2eb;  */

undefined8 FUN_1086fe2c8(void)

{
  undefined8 unaff_x19;
  
  func_0x000107c32c54();
  func_0x000108625da4();
  func_0x000100292090();
  func_0x0001005fb5c8();
  return unaff_x19;
}



/* Entry: 1086fe2ec; end: 1086fe4d3;  */

void FUN_1086fe2ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  code *extraout_x8_03;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
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
  undefined **ppuStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined **ppuStack_a8;
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
  undefined8 uStack_48;
  
  func_0x000107c32bb4();
  plVar2 = *(long **)(*(long *)(param_1 + 0xb0) + 0xf0);
  uStack_48 = extraout_x8;
  func_0x000107c279ac(&uStack_d0);
  uStack_a0 = uStack_c0;
  ppuVar5 = ppuStack_c8;
  uVar4 = uStack_d0;
  ppuStack_a8 = ppuStack_c8;
  uStack_b0 = uStack_d0;
  ppuStack_c8 = (undefined **)0x0;
  uStack_c0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_118 = 0;
  uStack_110 = 0;
  uStack_108 = 0;
  (**(code **)(*plVar2 + 0x30))(plVar2,&uStack_b0);
  func_0x000104bee768(&uStack_b0);
  func_0x000104bee7a0(&uStack_118);
  func_0x000104bee7dc(&uStack_100);
  func_0x000104bee864(&uStack_e8);
  func_0x000107c27a04(&uStack_d0);
  func_0x000108701ee0();
  if (extraout_x8_00 != 0) {
    do {
      func_0x000107c32bc8();
    } while (extraout_w10 != 0);
  }
  func_0x000107c28150();
  func_0x000108702594();
  func_0x00010870234c();
  lVar3 = plVar2[0xe];
  uStack_b0 = 0x10870167c;
  ppuStack_a8 = &PTR_DAT_110a67dc8;
  func_0x0001087020e8();
  if (extraout_x8_01 != 0) {
    do {
      func_0x000107c32bc8();
    } while (extraout_w10_00 != 0);
  }
  uStack_80 = param_3;
  func_0x000107c28154(plVar2 + 9,&uStack_b0);
  func_0x000108701e9c(ppuStack_a8);
  func_0x0001087020d0();
  if (lVar3 == 0) {
    func_0x000108701f10();
    uStack_b0 = uVar4;
    ppuStack_a8 = ppuVar5;
    if (extraout_x8_02 != 0) {
      do {
        func_0x000107c32bc8();
      } while (extraout_w10_01 != 0);
    }
    func_0x000107c32be8();
    (*extraout_x8_03)();
    func_0x000107c27e74(&uStack_b0);
  }
  func_0x00010870207c();
  func_0x000107c32ba0(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    puVar1 = &uStack_b0;
    func_0x000107c27e74();
    func_0x00010870207c();
    func_0x000108701fd0();
                    /* WARNING: Could not recover jumptable at 0x0001086fe4e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(puVar1[0x16] + 0xf0) + 0x50))();
    return;
  }
  return;
}



/* Entry: 1086fe4d4; end: 1086fe4e7;  */

void FUN_1086fe4d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001086fe4e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*(long *)(param_1 + 0xb0) + 0xf0) + 0x50))();
  return;
}



/* Entry: 1086fe4e8; end: 1086fe52f;  */

void FUN_1086fe4e8(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c278b8(auStack_38,&UNK_10f4b211b);
  func_0x000107c29ed8(param_1,auStack_38);
  func_0x000108702138();
  return;
}



/* Entry: 1086fe530; end: 1086fe8ab;  */

void FUN_1086fe530(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  undefined1 in_ZR;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  code *extraout_x8_06;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w11;
  long unaff_x20;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined **ppuVar9;
  ulong uStack_3f0;
  undefined **ppuStack_3e8;
  undefined4 uStack_3e0;
  undefined8 uStack_3d0;
  long lStack_3c8;
  ulong uStack_3c0;
  byte bStack_3b8;
  uint7 uStack_3b7;
  undefined1 auStack_380 [344];
  byte bStack_228;
  ulong uStack_220;
  undefined **ppuStack_218;
  ulong uStack_210;
  undefined **ppuStack_208;
  undefined4 uStack_200;
  undefined8 *puStack_1f0;
  ulong uStack_1e0;
  undefined **ppuStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  ulong uStack_1c0;
  undefined **ppuStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 uStack_8;
  
  func_0x000107c32c94();
  func_0x000108702010();
  func_0x000107c32bb4();
  uStack_8 = extraout_x8;
  FUN_10886364c(&uStack_1e0,*(undefined8 *)(*(long *)(param_1 + 0xb0) + 0x30));
  func_0x000107c28998(&uStack_3d0,&uStack_1e0);
  func_0x000107c28948(&uStack_1e0);
  if ((bStack_228 & 1) != 0) {
    uVar5 = unaff_x20 + 0x40;
    func_0x0001086a3114(uVar5,auStack_380);
    if ((uVar5 & 1) == 0) {
      func_0x000107c28ee4(&uStack_1e0,*(undefined8 *)(*(long *)(unaff_x20 + 0xb0) + 0x30));
      lVar6 = *(long *)(unaff_x20 + 0xb0);
      uVar1 = *(undefined1 *)(unaff_x20 + 0x78);
      uVar3 = *(undefined8 *)(lVar6 + 0x20);
      func_0x000107c287d8();
      puVar4 = &uStack_3d0;
      func_0x000107c29e10(puVar4,&uStack_1e0,unaff_x20 + 0x40,unaff_x20 + 0x58,lVar6 + 0x90,
                          lVar6 + 0x160,lVar6 + 0x170,uVar1,uVar3,*(undefined1 *)(unaff_x20 + 0xa8))
      ;
      uVar5 = (ulong)uStack_3b7 << 8;
      func_0x000107c287e4(&uStack_1e0);
      in_ZR = (int)puVar4 == 0;
      if ((bool)in_ZR) {
        uVar5 = 0;
      }
      uVar7 = (ulong)bStack_3b8;
      if ((bool)in_ZR) {
        uVar7 = 0;
      }
      goto LAB_1086fe624;
    }
  }
  uVar5 = 0;
  puVar4 = (undefined8 *)0x0;
  uVar7 = 0;
LAB_1086fe624:
  func_0x000107c288dc(&uStack_3d0);
  uStack_3c0 = uVar7 | uVar5;
  lVar6 = **(long **)(unaff_x20 + 0xb0);
  lStack_3c8 = param_3[1];
  uStack_3d0 = *param_3;
  if (param_3[1] != 0) {
    do {
      func_0x000107c32c28();
      uStack_3c0 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  bStack_3b8 = (byte)puVar4;
  func_0x000107c28150();
  func_0x0001087021c4();
  func_0x000108702074();
  lVar8 = *(long *)(uVar7 + 0x70);
  uStack_1e0 = 0x1087016b4;
  ppuStack_1d8 = &PTR_DAT_110a67de0;
  lStack_1c8 = lStack_3c8;
  uStack_1d0 = uStack_3d0;
  if (lStack_3c8 != 0) {
    do {
      func_0x000107c32bc8();
    } while (extraout_w10 != 0);
  }
  ppuVar9 = (undefined **)CONCAT71(uStack_3b7,bStack_3b8);
  uStack_1c0 = uStack_3c0;
  uVar5 = uStack_3c0;
  ppuStack_1b8 = ppuVar9;
  puStack_1b0 = puVar4;
  func_0x000107c28154(uVar7 + 0x48,&uStack_1e0);
  func_0x00010870235c();
  func_0x000108701ff8();
  if (lVar8 == 0) {
    func_0x000108701f68();
    uStack_1e0 = uVar5;
    ppuStack_1d8 = ppuVar9;
    if (extraout_x8_01 != 0) {
      do {
        func_0x000107c32bc8();
      } while (extraout_w10_00 != 0);
    }
    func_0x000107c32be8();
    (*extraout_x8_02)();
    func_0x000107c27e74(&uStack_1e0);
  }
  func_0x000108625dc8(&uStack_3d0);
  while( true ) {
    func_0x000107c32ba0(uStack_8);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x000108701fbc();
    puVar4 = &uStack_3d0;
    func_0x000107c288dc();
    in_ZR = (int)lVar6 == 1;
    if (!(bool)in_ZR) break;
    func_0x000108702094();
    func_0x000108848514();
    func_0x000108701ee0();
    uVar2 = SUB84(puVar4,0);
    uStack_3f0 = uVar5;
    ppuStack_3e8 = ppuVar9;
    if (extraout_x8_03 != 0) {
      do {
        func_0x000107c32bc8();
        uVar2 = SUB84(puVar4,0);
      } while (extraout_w10_01 != 0);
    }
    uStack_3e0 = uVar2;
    func_0x000107c28150();
    func_0x0001087021d0();
    func_0x000108702000();
    lVar8 = *(long *)(lVar6 + 0x70);
    uStack_220 = 0x10870170c;
    ppuStack_218 = &PTR_DAT_110a67df8;
    func_0x00010870222c();
    uStack_210 = uVar5;
    ppuStack_208 = ppuVar9;
    if (extraout_x8_04 != 0) {
      do {
        func_0x000107c32bc8();
      } while (extraout_w10_02 != 0);
    }
    uStack_200 = uStack_3e0;
    puStack_1f0 = param_3;
    func_0x000107c28154(lVar6 + 0x48,&uStack_220);
    func_0x000108701e9c(ppuStack_218);
    func_0x000108701fc8();
    if (lVar8 == 0) {
      func_0x000108701f10();
      uStack_220 = uVar5;
      ppuStack_218 = ppuVar9;
      if (extraout_x8_05 != 0) {
        do {
          func_0x000107c32bc8();
        } while (extraout_w10_03 != 0);
      }
      func_0x000107c32be8();
      (*extraout_x8_06)();
      func_0x000107c27e74(&uStack_220);
    }
    func_0x000108625dc8(&uStack_3f0);
    ___cxa_end_catch();
  }
  func_0x00010870209c();
  func_0x0001087020a4();
                    /* WARNING: Could not recover jumptable at 0x0001086fe8bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(puVar4[0x16] + 0x120) + 0x2f0))();
  return;
}



/* Entry: 1086fe8ac; end: 1086fe8cf;  */

void FUN_1086fe8ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001086fe8bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*(long *)(param_1 + 0xb0) + 0x120) + 0x2f0))();
  return;
}



/* Entry: 1086fe8d0; end: 1086fe8db;  */

void FUN_1086fe8d0(void)

{
  long unaff_x19;
  
  func_0x0001087021a8();
  func_0x000108702550();
  func_0x000107c279dc(unaff_x19 + 0x10);
  return;
}



/* Entry: 1086fe8dc; end: 1086fe983;  */

void FUN_1086fe8dc(void)

{
  long unaff_x19;
  
  func_0x000108702550();
  func_0x000107c279dc(unaff_x19 + 0x10);
  return;
}



/* Entry: 1086fe984; end: 1086fe9af;  */

void FUN_1086fe984(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108702450();
  FUN_1086fea34();
  *(long *)(unaff_x19 + 8) = unaff_x20 + 0x20;
  return;
}



/* Entry: 1086fe9b0; end: 1086fea33;  */

undefined8 FUN_1086fe9b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_48;
  
  func_0x000107c32cf4();
  func_0x000104bf20b4();
  func_0x000107c32c5c();
  func_0x000107c32ce4();
  func_0x000104bf1d8c();
  FUN_1086fea34(uStack_48,param_2,param_3);
  func_0x000107c32c6c();
  func_0x000104bf1d54();
  func_0x000107c32cf0();
  func_0x000104bf1f64();
  return param_1;
}



/* Entry: 1086fea34; end: 1086fea83;  */

undefined4 * FUN_1086fea34(undefined4 *param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = *param_2;
  uVar2 = param_3[2];
  uVar4 = param_3[1];
  uVar3 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  *param_1 = uVar1;
  *(undefined8 *)(param_1 + 4) = uVar4;
  *(undefined8 *)(param_1 + 2) = uVar3;
  *(undefined8 *)(param_1 + 6) = uVar2;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_38 = 0;
  func_0x000107c27914(&uStack_38);
  return param_1;
}



/* Entry: 1086fea84; end: 1086feacb;  */

long FUN_1086fea84(long param_1,long param_2,long param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x18) {
    func_0x0001087024e8();
    param_3 = param_3 + 0x18;
  }
  return param_3;
}



/* Entry: 1086feacc; end: 1086fead7;  */

void FUN_1086feacc(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  
  func_0x0001087021a8();
  func_0x000107c32c24();
  lVar4 = *param_1;
  lVar1 = param_1[1];
  lVar5 = *(long *)(param_2 + 8) + ((lVar1 - lVar4) / -0x390) * 0x390;
  lVar2 = lVar5;
  for (lVar3 = lVar4; lVar3 != lVar1; lVar3 = lVar3 + 0x390) {
    FUN_1086febbc(lVar2,lVar3);
    lVar2 = lVar2 + 0x390;
  }
  for (; lVar4 != lVar1; lVar4 = lVar4 + 0x390) {
    func_0x0001086fec04(lVar4);
  }
  *(long *)(unaff_x19 + 8) = lVar5;
  lVar3 = *unaff_x20;
  *unaff_x20 = lVar5;
  unaff_x20[1] = lVar3;
  func_0x000107c32bbc();
  return;
}



/* Entry: 1086fead8; end: 1086feb5b;  */

void FUN_1086fead8(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  
  func_0x000107c32c24();
  lVar4 = *param_1;
  lVar1 = param_1[1];
  lVar5 = *(long *)(param_2 + 8) + ((lVar1 - lVar4) / -0x390) * 0x390;
  lVar2 = lVar5;
  for (lVar3 = lVar4; lVar3 != lVar1; lVar3 = lVar3 + 0x390) {
    FUN_1086febbc(lVar2,lVar3);
    lVar2 = lVar2 + 0x390;
  }
  for (; lVar4 != lVar1; lVar4 = lVar4 + 0x390) {
    func_0x0001086fec04(lVar4);
  }
  *(long *)(unaff_x19 + 8) = lVar5;
  lVar3 = *unaff_x20;
  *unaff_x20 = lVar5;
  unaff_x20[1] = lVar3;
  func_0x000107c32bbc();
  return;
}



/* Entry: 1086feb5c; end: 1086febbb;  */

undefined8 *
FUN_1086feb5c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  ulong unaff_x20;
  undefined8 uVar2;
  
  func_0x000107c32c30();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    if (0x47dc11f7047dc1 < unaff_x20) {
      func_0x000104bd35f4();
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      uVar2 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar2;
      param_1[2] = param_2[2];
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      func_0x000107c27af4(param_1 + 3,param_2 + 3);
      return param_1;
    }
    puVar1 = (undefined8 *)(unaff_x20 * 0x390);
    __Znwm(puVar1);
  }
  func_0x0001087023e4(0x390);
  return puVar1;
}



/* Entry: 1086febbc; end: 1086fecab;  */

undefined8 * FUN_1086febbc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  func_0x000107c27af4(param_1 + 3,param_2 + 3);
  return param_1;
}



/* Entry: 1086fecac; end: 1086fecb7;  */

void FUN_1086fecac(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  
  func_0x0001087021a8();
  func_0x000107c32c24();
  lVar4 = *param_1;
  lVar1 = param_1[1];
  lVar5 = *(long *)(param_2 + 8) + ((lVar1 - lVar4) / -0x48) * 0x48;
  lVar2 = lVar5;
  for (lVar3 = lVar4; lVar3 != lVar1; lVar3 = lVar3 + 0x48) {
    FUN_1086fed9c(lVar2,lVar3);
    lVar2 = lVar2 + 0x48;
  }
  for (; lVar4 != lVar1; lVar4 = lVar4 + 0x48) {
    FUN_108646578(lVar4);
  }
  *(long *)(unaff_x19 + 8) = lVar5;
  lVar3 = *unaff_x20;
  *unaff_x20 = lVar5;
  unaff_x20[1] = lVar3;
  func_0x000107c32bbc();
  return;
}



/* Entry: 1086fecb8; end: 1086fed3b;  */

void FUN_1086fecb8(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  
  func_0x000107c32c24();
  lVar4 = *param_1;
  lVar1 = param_1[1];
  lVar5 = *(long *)(param_2 + 8) + ((lVar1 - lVar4) / -0x48) * 0x48;
  lVar2 = lVar5;
  for (lVar3 = lVar4; lVar3 != lVar1; lVar3 = lVar3 + 0x48) {
    FUN_1086fed9c(lVar2,lVar3);
    lVar2 = lVar2 + 0x48;
  }
  for (; lVar4 != lVar1; lVar4 = lVar4 + 0x48) {
    FUN_108646578(lVar4);
  }
  *(long *)(unaff_x19 + 8) = lVar5;
  lVar3 = *unaff_x20;
  *unaff_x20 = lVar5;
  unaff_x20[1] = lVar3;
  func_0x000107c32bbc();
  return;
}



/* Entry: 1086fed3c; end: 1086fed9b;  */

void FUN_1086fed3c(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  ulong unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c32c30();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 != 0) {
    if (0x38e38e38e38e38e < unaff_x20) {
      func_0x000104bd35f4();
      FUN_108646534();
      uVar2 = *(undefined8 *)(param_2 + 0x38);
      uVar1 = *(undefined8 *)(param_2 + 0x30);
      *(undefined1 *)(param_1 + 0x40) = *(undefined1 *)(param_2 + 0x40);
      *(undefined8 *)(param_1 + 0x38) = uVar2;
      *(undefined8 *)(param_1 + 0x30) = uVar1;
      return;
    }
    __Znwm(unaff_x20 * 0x48);
  }
  func_0x0001087023e4(0x48);
  return;
}



/* Entry: 1086fed9c; end: 1086fee6f;  */

void FUN_1086fed9c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_108646534();
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  *(undefined1 *)(param_1 + 0x40) = *(undefined1 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  return;
}



/* Entry: 1086fee70; end: 1086fee77;  */

void FUN_1086fee70(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c32c24(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x30;
    func_0x000107c27914();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1086fee78; end: 1086fef1f;  */

void FUN_1086fee78(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c32c24();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x30;
    func_0x000107c27914();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1086fef20; end: 1086fef4b;  */

void FUN_1086fef20(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108702450();
  func_0x000107c28c10();
  *(long *)(unaff_x19 + 8) = unaff_x20 + 0x378;
  return;
}



/* Entry: 1086fef4c; end: 1086fefc7;  */

void FUN_1086fef4c(void)

{
  undefined8 uStack_48;
  
  func_0x000107c32c30();
  func_0x000107c32cf4();
  func_0x000107c27b18();
  func_0x000107c32c5c();
  func_0x000107c32ce4();
  func_0x000107c27af0();
  func_0x000107c28c10(uStack_48);
  func_0x000107c32c6c();
  func_0x000107c27aec();
  func_0x000107c32cf0();
  func_0x000107c27b10();
  return;
}



/* Entry: 1086fefc8; end: 1086ff037;  */

void FUN_1086fefc8(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c32c24();
  *param_1 = *param_2;
  func_0x000107c3194c(param_1 + 2,param_2 + 2);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x20);
  *(undefined1 *)(unaff_x20 + 0x28) = *(undefined1 *)(unaff_x19 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
  func_0x000107c28908(unaff_x20 + 0x30,unaff_x19 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x50) = *(undefined8 *)(unaff_x19 + 0x50);
  return;
}



/* Entry: 1086ff038; end: 1086ff03b;  */

void FUN_1086ff038(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a676e0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1086ff03c; end: 1086ff04f;  */

void FUN_1086ff03c(void)

{
  FUN_1086ff098();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086ff050; end: 1086ff097;  */

undefined8 FUN_1086ff050(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000107c288a4(param_1 + 0xb8);
  func_0x000107c2814c(param_1 + 0xa8);
  FUN_1086ff0a8(param_1 + 0x70);
  FUN_1086ff0a8(param_1 + 0x40);
  func_0x000107c288a4(param_1 + 0x30);
  param_1 = param_1 + 0x18;
  func_0x00010054e7b4();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return unaff_x19;
}



/* Entry: 1086ff098; end: 1086ff0a7;  */

void FUN_1086ff098(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086ff0a8; end: 1086ff1d7;  */

long * FUN_1086ff0a8(long *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = (long *)(param_1[1] + ((ulong)param_1[4] / 0xaa) * 8);
  if (param_1[2] == param_1[1]) {
    lVar2 = 0;
  }
  else {
    lVar2 = *plVar5 + ((ulong)param_1[4] % 0xaa) * 0x18;
  }
  func_0x000107c2957c(param_1);
  do {
    lVar6 = lVar2 + -0xff0;
    do {
      if (lVar2 == param_2) {
        param_1[5] = 0;
        puVar3 = (undefined8 *)param_1[1];
        while( true ) {
          puVar4 = (undefined8 *)param_1[2];
          uVar1 = (long)puVar4 - (long)puVar3 >> 3;
          if (uVar1 < 3) break;
          __ZdlPv(*puVar3);
          puVar3 = (undefined8 *)(param_1[1] + 8);
          param_1[1] = (long)puVar3;
        }
        if (uVar1 == 1) {
          lVar2 = 0x55;
        }
        else {
          if (uVar1 != 2) goto LAB_1086ff194;
          lVar2 = 0xaa;
        }
        param_1[4] = lVar2;
LAB_1086ff194:
        for (; puVar3 != puVar4; puVar3 = puVar3 + 1) {
          __ZdlPv(*puVar3);
        }
        lVar2 = param_1[2];
        while (lVar2 != param_1[1]) {
          lVar2 = lVar2 + -8;
          param_1[2] = lVar2;
        }
        if (*param_1 != 0) {
          __ZdlPv();
        }
        return param_1;
      }
      func_0x000107c29580(lVar2);
      lVar2 = lVar2 + 0x18;
      lVar6 = lVar6 + 0x18;
    } while (*plVar5 != lVar6);
    plVar5 = plVar5 + 1;
    lVar2 = *plVar5;
  } while( true );
}



/* Entry: 1086ff1d8; end: 1086ff1db;  */

void FUN_1086ff1d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a67730;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1086ff1dc; end: 1086ff1ef;  */

void FUN_1086ff1dc(void)

{
  func_0x0001086ff200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086ff1f0; end: 1086ff20b;  */

void FUN_1086ff1f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001086ff1f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1086ff20c; end: 1086ff227;  */

void FUN_1086ff20c(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x000107c29598(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086ff228; end: 1086ff24b;  */

void FUN_1086ff228(long param_1)

{
  func_0x000107c32c2c();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 1086ff24c; end: 1086ff24f;  */

void FUN_1086ff24c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a67780;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1086ff250; end: 1086ff263;  */

void FUN_1086ff250(void)

{
  FUN_1086ffa1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086ff264; end: 1086ff2ef;  */

void FUN_1086ff264(void)

{
  long unaff_x20;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [32];
  undefined4 uStack_48;
  undefined1 uStack_44;
  long lStack_40;
  
  func_0x000108702218();
  if ((lStack_40 != 0) && ((*(byte *)(lStack_40 + 0xb8) & 1) == 0)) {
    FUN_1086fba4c(auStack_70,0);
    func_0x000107c28d24(auStack_68,unaff_x20 + 0x20);
    uStack_48 = *(undefined4 *)(unaff_x20 + 0x18);
    uStack_44 = 1;
    func_0x00010870215c(*(undefined8 *)(lStack_40 + 0xb0));
    func_0x0001087024b8();
    func_0x0001087021bc();
  }
  func_0x000108702210();
  return;
}



/* Entry: 1086ff2f0; end: 1086ff303;  */

void FUN_1086ff2f0(void)

{
  func_0x000100871734();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086ff304; end: 1086ff32f;  */

void FUN_1086ff304(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108702450();
  func_0x000107c27994();
  *(long *)(unaff_x19 + 8) = unaff_x20 + 0x18;
  return;
}



/* Entry: 1086ff330; end: 1086ff35f;  */

void FUN_1086ff330(void)

{
  undefined2 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c32c24();
  FUN_1086ff360();
  uVar1 = *(undefined2 *)(unaff_x19 + 0x78);
  *(undefined1 *)(unaff_x20 + 0x7a) = *(undefined1 *)(unaff_x19 + 0x7a);
  *(undefined2 *)(unaff_x20 + 0x78) = uVar1;
  return;
}



/* Entry: 1086ff360; end: 1086ff387;  */

void FUN_1086ff360(undefined1 *param_1,undefined1 *param_2)

{
  char cVar1;
  undefined1 uVar2;
  long unaff_x19;
  long unaff_x20;
  
  cVar1 = param_1[0x70];
  if (cVar1 != param_2[0x70]) {
    if (cVar1 != '\0') {
      if (param_1[0x70] == '\x01') {
        func_0x00010086cf88(param_1 + 8);
        param_1[0x70] = 0;
      }
      return;
    }
    func_0x00010086d054();
    param_1[0x70] = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x000107c32c24();
    *param_1 = *param_2;
    func_0x0001086ff3f4(param_1 + 8,param_2 + 8);
    uVar2 = *(undefined1 *)(unaff_x19 + 0x6c);
    *(undefined4 *)(unaff_x20 + 0x68) = *(undefined4 *)(unaff_x19 + 0x68);
    *(undefined1 *)(unaff_x20 + 0x6c) = uVar2;
    return;
  }
  return;
}



/* Entry: 1086ff388; end: 1086ff46f;  */

void FUN_1086ff388(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c32c24();
  *param_1 = *param_2;
  func_0x0001086ff3f4(param_1 + 8,param_2 + 8);
  uVar1 = *(undefined1 *)(unaff_x19 + 0x6c);
  *(undefined4 *)(unaff_x20 + 0x68) = *(undefined4 *)(unaff_x19 + 0x68);
  *(undefined1 *)(unaff_x20 + 0x6c) = uVar1;
  return;
}



/* Entry: 1086ff470; end: 1086ff523;  */

void FUN_1086ff470(long param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 8) != 0) {
    plVar1 = (long *)param_1;
    FUN_1086ff524();
    for (; (plVar1 != (long *)0x0 && (param_2 != param_3)); param_2 = (long *)*param_2) {
      *(undefined4 *)(plVar1 + 2) = *(undefined4 *)(param_2 + 2);
      plVar1[3] = param_2[3];
      lVar2 = *plVar1;
      FUN_1086ff554(param_1,plVar1);
      plVar1 = (long *)lVar2;
    }
    func_0x0001087024fc();
  }
  for (; param_2 != param_3; param_2 = (long *)*param_2) {
    FUN_1086ff58c(param_1,param_2 + 2);
  }
  return;
}



/* Entry: 1086ff524; end: 1086ff553;  */

long FUN_1086ff524(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1[1];
  for (lVar1 = 0; lVar2 != lVar1; lVar1 = lVar1 + 1) {
    *(undefined8 *)(*param_1 + lVar1 * 8) = 0;
  }
  lVar1 = param_1[2];
  param_1[2] = 0;
  param_1[3] = 0;
  return lVar1;
}



/* Entry: 1086ff554; end: 1086ff58b;  */

void FUN_1086ff554(undefined8 param_1,long param_2)

{
  long unaff_x19;
  
  func_0x000107c32c24();
  *(long *)(unaff_x19 + 8) = (long)*(int *)(param_2 + 0x10);
  FUN_1086ff5dc();
  func_0x000107c32cec();
  FUN_1086ff71c();
  return;
}



/* Entry: 1086ff58c; end: 1086ff5db;  */

undefined8 FUN_1086ff58c(undefined8 param_1)

{
  undefined8 auStack_38 [3];
  
  FUN_1086ff9d4(auStack_38);
  FUN_1086ff554(param_1,auStack_38[0]);
  auStack_38[0] = 0;
  func_0x00010086bce8(auStack_38);
  return param_1;
}



/* Entry: 1086ff5dc; end: 1086ff71b;  */

long * FUN_1086ff5dc(long *param_1,ulong param_2,int *param_3)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  bool bVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar5 = param_1[1];
  if ((uVar5 == 0) || (*(float *)(param_1 + 4) * (float)uVar5 < (float)(param_1[3] + 1))) {
    uVar6 = 1;
    if (2 < uVar5) {
      uVar6 = (ulong)((uVar5 & uVar5 - 1) != 0);
    }
    uVar6 = uVar6 | uVar5 << 1;
    uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar6 <= uVar5) {
      uVar6 = uVar5;
    }
    FUN_1086ff7f0(param_1,uVar6);
    uVar5 = param_1[1];
  }
  uVar6 = uVar5 - 1;
  if ((uVar5 & uVar6) == 0) {
    uVar7 = uVar6 & param_2;
  }
  else {
    uVar7 = param_2;
    if (uVar5 <= param_2) {
      uVar7 = 0;
      if (uVar5 != 0) {
        uVar7 = param_2 / uVar5;
      }
      uVar7 = param_2 - uVar7 * uVar5;
    }
  }
  plVar8 = *(long **)(*param_1 + uVar7 * 8);
  if (plVar8 == (long *)0x0) {
    plVar4 = (long *)0x0;
  }
  else {
    bVar9 = false;
    bVar1 = 0;
    do {
      plVar4 = plVar8;
      plVar8 = (long *)*plVar4;
      if (plVar8 == (long *)0x0) {
        return plVar4;
      }
      uVar10 = plVar8[1];
      if ((uVar5 & uVar6) == 0) {
        uVar11 = uVar10 & uVar6;
      }
      else {
        uVar11 = uVar10;
        if (uVar5 <= uVar10) {
          uVar11 = 0;
          if (uVar5 != 0) {
            uVar11 = uVar10 / uVar5;
          }
          uVar11 = uVar10 - uVar11 * uVar5;
        }
      }
      if (uVar11 != uVar7) {
        return plVar4;
      }
      if (uVar10 == param_2) {
        bVar2 = *(int *)(plVar8 + 2) == *param_3;
      }
      else {
        bVar2 = false;
      }
      bVar3 = bVar2 != bVar9;
      bVar2 = (bool)(bVar1 & bVar3);
      bVar9 = (bool)(bVar9 | bVar3);
      bVar1 = bVar1 | bVar3;
    } while (!bVar2);
  }
  return plVar4;
}



/* Entry: 1086ff71c; end: 1086ff7ef;  */

void FUN_1086ff71c(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  
  uVar1 = param_1[1];
  uVar2 = param_2[1];
  uVar3 = uVar1 - 1;
  if ((uVar1 & uVar3) == 0) {
    uVar2 = uVar3 & uVar2;
  }
  else if (uVar1 <= uVar2) {
    uVar4 = 0;
    if (uVar1 != 0) {
      uVar4 = uVar2 / uVar1;
    }
    uVar2 = uVar2 - uVar4 * uVar1;
  }
  if (param_3 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *param_2 = *plVar6;
    *plVar6 = (long)param_2;
    lVar5 = *param_1;
    *(long **)(lVar5 + uVar2 * 8) = plVar6;
    if (*param_2 != 0) {
      uVar2 = *(ulong *)(*param_2 + 8);
      if ((uVar1 & uVar3) == 0) {
        uVar2 = uVar2 & uVar3;
      }
      else if (uVar1 <= uVar2) {
        uVar3 = 0;
        if (uVar1 != 0) {
          uVar3 = uVar2 / uVar1;
        }
        uVar2 = uVar2 - uVar3 * uVar1;
      }
      *(long **)(lVar5 + uVar2 * 8) = param_2;
    }
  }
  else {
    *param_2 = *param_3;
    *param_3 = (long)param_2;
    if (*param_2 != 0) {
      uVar4 = *(ulong *)(*param_2 + 8);
      if ((uVar1 & uVar3) == 0) {
        uVar4 = uVar4 & uVar3;
      }
      else if (uVar1 <= uVar4) {
        uVar3 = 0;
        if (uVar1 != 0) {
          uVar3 = uVar4 / uVar1;
        }
        uVar4 = uVar4 - uVar3 * uVar1;
      }
      if (uVar4 != uVar2) {
        *(long **)(*param_1 + uVar4 * 8) = param_2;
      }
    }
  }
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 1086ff7f0; end: 1086ff8b7;  */

void FUN_1086ff7f0(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar9 = param_1[1];
  if (param_2 <= uVar9) {
    if (param_2 < uVar9) {
      uVar5 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar9 < 3) || ((uVar9 & uVar9 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar5) {
        uVar5 = 1L << (-LZCOUNT(uVar5 - 1) & 0x3fU);
      }
      if (param_2 <= uVar5) {
        param_2 = uVar5;
      }
      if (param_2 < uVar9) goto LAB_1086ff838;
    }
    return;
  }
LAB_1086ff838:
  if (param_2 == 0) {
    func_0x00010086bcb0(param_1);
    param_1[1] = 0;
  }
  else {
    plVar3 = param_1 + 1;
    func_0x00010086bb98(plVar3);
    func_0x00010086bcb0(param_1,plVar3);
    param_1[1] = param_2;
    lVar2 = *param_1;
    for (uVar9 = 0; param_2 != uVar9; uVar9 = uVar9 + 1) {
      *(undefined8 *)(lVar2 + uVar9 * 8) = 0;
    }
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      uVar9 = plVar3[1];
      uVar5 = param_2 - 1;
      if ((param_2 & uVar5) == 0) {
        uVar9 = uVar9 & uVar5;
      }
      else if (param_2 <= uVar9) {
        uVar6 = 0;
        if (param_2 != 0) {
          uVar6 = uVar9 / param_2;
        }
        uVar9 = uVar9 - uVar6 * param_2;
      }
      *(long **)(lVar2 + uVar9 * 8) = param_1 + 2;
      while (plVar4 = plVar3, plVar3 = (long *)*plVar4, plVar3 != (long *)0x0) {
        uVar6 = plVar3[1];
        if ((param_2 & uVar5) == 0) {
          uVar6 = uVar6 & uVar5;
        }
        else if (param_2 <= uVar6) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar6 / param_2;
          }
          uVar6 = uVar6 - uVar1 * param_2;
        }
        if (uVar6 != uVar9) {
          plVar8 = plVar3;
          if (*(long *)(lVar2 + uVar6 * 8) == 0) {
            *(long **)(lVar2 + uVar6 * 8) = plVar4;
            uVar9 = uVar6;
          }
          else {
            do {
              plVar7 = plVar8;
              plVar8 = (long *)*plVar7;
              if (plVar8 == (long *)0x0) break;
            } while (*(int *)(plVar3 + 2) == *(int *)(plVar8 + 2));
            *plVar4 = (long)plVar8;
            *plVar7 = **(long **)(lVar2 + uVar6 * 8);
            **(long **)(lVar2 + uVar6 * 8) = (long)plVar3;
            plVar3 = plVar4;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1086ff8b8; end: 1086ff9d3;  */

void FUN_1086ff8b8(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  
  if (param_2 == 0) {
    func_0x00010086bcb0(param_1);
    param_1[1] = 0;
  }
  else {
    plVar4 = param_1 + 1;
    func_0x00010086bb98(plVar4);
    func_0x00010086bcb0(param_1,plVar4);
    param_1[1] = param_2;
    lVar2 = *param_1;
    for (uVar3 = 0; param_2 != uVar3; uVar3 = uVar3 + 1) {
      *(undefined8 *)(lVar2 + uVar3 * 8) = 0;
    }
    plVar4 = (long *)param_1[2];
    if (plVar4 != (long *)0x0) {
      uVar3 = plVar4[1];
      uVar6 = param_2 - 1;
      if ((param_2 & uVar6) == 0) {
        uVar3 = uVar3 & uVar6;
      }
      else if (param_2 <= uVar3) {
        uVar7 = 0;
        if (param_2 != 0) {
          uVar7 = uVar3 / param_2;
        }
        uVar3 = uVar3 - uVar7 * param_2;
      }
      *(long **)(lVar2 + uVar3 * 8) = param_1 + 2;
      while (plVar5 = plVar4, plVar4 = (long *)*plVar5, plVar4 != (long *)0x0) {
        uVar7 = plVar4[1];
        if ((param_2 & uVar6) == 0) {
          uVar7 = uVar7 & uVar6;
        }
        else if (param_2 <= uVar7) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar1 * param_2;
        }
        if (uVar7 != uVar3) {
          plVar9 = plVar4;
          if (*(long *)(lVar2 + uVar7 * 8) == 0) {
            *(long **)(lVar2 + uVar7 * 8) = plVar5;
            uVar3 = uVar7;
          }
          else {
            do {
              plVar8 = plVar9;
              plVar9 = (long *)*plVar8;
              if (plVar9 == (long *)0x0) break;
            } while (*(int *)(plVar4 + 2) == *(int *)(plVar9 + 2));
            *plVar5 = (long)plVar9;
            *plVar8 = **(long **)(lVar2 + uVar7 * 8);
            **(long **)(lVar2 + uVar7 * 8) = (long)plVar4;
            plVar4 = plVar5;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1086ff9d4; end: 1086ffa1b;  */

void FUN_1086ff9d4(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2 + 0x10;
  param_1[2] = 1;
  uVar2 = *param_3;
  puVar1[3] = param_3[1];
  puVar1[2] = uVar2;
  *puVar1 = 0;
  puVar1[1] = (long)*(int *)(puVar1 + 2);
  return;
}



/* Entry: 1086ffa1c; end: 1086ffa27;  */

void FUN_1086ffa1c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a67780;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1086ffa28; end: 1086ffa5f;  */

undefined8 FUN_1086ffa28(undefined8 param_1)

{
  func_0x000107c32cd8();
  FUN_1086ffabc();
  return param_1;
}



/* Entry: 1086ffa60; end: 1086ffa77;  */

long FUN_1086ffa60(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long extraout_x8;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 in_register_00005008;
  
  param_2 = param_2 + 8;
  lVar1 = param_3;
  func_0x000107c32ca4(&PTR_DAT_110a67818);
  *(undefined8 *)(lVar1 + 0x10) = in_register_00005008;
  *(undefined8 *)(lVar1 + 8) = param_1;
  if (extraout_x8 != 0) {
    do {
      func_0x000107c32bc8();
    } while (extraout_w10 != 0);
  }
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)(param_2 + 0x18);
  *(undefined8 *)(param_3 + 0x18) = uVar2;
  func_0x000107c28614(param_3 + 0x28,param_2 + 0x20);
  return param_3;
}



/* Entry: 1086ffa78; end: 1086ffaaf;  */

long FUN_1086ffa78(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110a67888);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1086ffab0; end: 1086ffabb;  */

undefined ** FUN_1086ffab0(void)

{
  return &PTR_DAT_110a67888;
}



/* Entry: 1086ffabc; end: 1086ffb23;  */

long FUN_1086ffabc(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long extraout_x8;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 in_register_00005008;
  
  lVar1 = param_2;
  func_0x000107c32ca4(&PTR_DAT_110a67818);
  *(undefined8 *)(lVar1 + 0x10) = in_register_00005008;
  *(undefined8 *)(lVar1 + 8) = param_1;
  if (extraout_x8 != 0) {
    do {
      func_0x000107c32bc8();
    } while (extraout_w10 != 0);
  }
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_3 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = uVar2;
  func_0x000107c28614(param_2 + 0x28,param_3 + 0x20);
  return param_2;
}



/* Entry: 1086ffb24; end: 1086ffcab;  */

void FUN_1086ffb24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108701ec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
  return;
}



/* Entry: 1086ffcac; end: 1086ffcd3;  */

long FUN_1086ffcac(long param_1)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000107c288ac(param_1 + 0x28);
  func_0x000107c32c54(param_1);
  func_0x000104be3970();
  lVar1 = unaff_x19;
  func_0x00010054e7b4();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 1086ffcd4; end: 1086ffd6b;  */

void FUN_1086ffcd4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x68;
  __Znwm();
  *puVar1 = FUN_108701c58;
  puVar1[1] = FUN_108701d64;
  FUN_1086ffd6c(puVar1 + 4,param_1);
  func_0x000107c27f94(puVar1 + 2);
  func_0x000107c32bec();
  puVar1[10] = param_2;
  *(undefined1 *)(puVar1 + 0xc) = 0;
  func_0x000107c32be8(*param_2);
  func_0x000107c32cd0();
  return;
}



/* Entry: 1086ffd6c; end: 1086ffdbb;  */

void FUN_1086ffd6c(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = *(undefined4 *)(param_2 + 2);
  *(undefined1 *)((long)param_1 + 0x14) = *(undefined1 *)((long)param_2 + 0x14);
  *(undefined4 *)(param_1 + 2) = uVar1;
  lVar2 = param_2[4];
  uVar3 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000107c32bc8();
    } while (extraout_w10 != 0);
  }
  param_1[5] = param_2[5];
  param_2[5] = 0;
  return;
}



/* Entry: 1086ffdbc; end: 1086ffec7;  */

void FUN_1086ffdbc(long param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  uint extraout_w8;
  long *extraout_x8;
  long *plVar2;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  long *unaff_x20;
  
  func_0x000107c32bd4();
  func_0x000107c32c88(FUN_108701be8);
  func_0x000107c32bec();
  FUN_1086ffec8(param_1 + 0x28);
  func_0x000107c32c4c();
  do {
    func_0x000107c32bd0();
  } while (extraout_w10 != 0);
  func_0x000107c32c48();
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x30) = 0;
    func_0x000108701ec4();
    if (*unaff_x20 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x0001087022a0();
    plVar2 = extraout_x8;
    do {
      if (*plVar2 == 0) {
        func_0x000108701fac();
        plVar2 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar3 = extraout_w11_00;
      }
      else {
        func_0x000108702238();
        plVar2 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar3 = extraout_w11;
      }
      if ((uVar3 & 1) != 0) {
        func_0x000108701f38();
        if ((bool)in_ZR) {
          func_0x000108701f9c();
          func_0x000108701f00();
          func_0x000108701e68();
        }
        func_0x000108701e24();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x000107c32c8c();
  func_0x000107c32bfc();
  func_0x000107c32bf4();
  func_0x000107c32c0c();
  func_0x000107c32bf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1086ffec8; end: 1086fffdb;  */

void FUN_1086ffec8(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  undefined8 *unaff_x20;
  
  func_0x000107c32bd4();
  func_0x000107c32c88(FUN_108701b78);
  func_0x000107c32bec();
  plVar2 = (long *)*unaff_x20;
  FUN_1086fa2e4(param_1 + 0x28,plVar2,param_2,*(undefined1 *)((long)unaff_x20 + 0x14),unaff_x20 + 3)
  ;
  func_0x000107c32c4c();
  do {
    func_0x000107c32bd0();
  } while (extraout_w10 != 0);
  func_0x000107c32c48();
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x30) = 0;
    func_0x000108701ec4();
    if (*plVar2 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x0001087022a0();
    plVar2 = extraout_x8;
    do {
      if (*plVar2 == 0) {
        func_0x000108701fac();
        plVar2 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar3 = extraout_w11_00;
      }
      else {
        func_0x000108702238();
        plVar2 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar3 = extraout_w11;
      }
      if ((uVar3 & 1) != 0) {
        func_0x000108701f38();
        if ((bool)in_ZR) {
          func_0x000108701f9c();
          func_0x000108701f00();
          func_0x000108701e68();
        }
        func_0x000108701e24();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x000107c32c8c();
  func_0x000107c32bfc();
  func_0x000107c32bf4();
  func_0x000107c32c0c();
  func_0x000107c32bf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}


