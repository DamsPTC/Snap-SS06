/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1074b7c70; end: 1074b895b;  */

void FUN_1074b7c70(undefined8 *param_1,ulong param_2,undefined4 param_3,int param_4,
                  undefined4 param_5,long param_6,undefined8 *param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long lVar1;
  undefined4 *puVar2;
  byte bVar3;
  float fVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  code *extraout_x8;
  code *extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  code *extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  code *extraout_x8_06;
  code *extraout_x8_07;
  code *extraout_x8_08;
  code *extraout_x8_09;
  code *extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  long extraout_x8_13;
  long extraout_x8_14;
  code *extraout_x8_15;
  long lVar10;
  long extraout_x8_16;
  long extraout_x8_17;
  code *extraout_x8_18;
  long extraout_x8_19;
  long extraout_x8_20;
  int extraout_w9;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  undefined4 *puVar18;
  long *plVar19;
  uint uVar20;
  ulong uVar21;
  ulong uVar22;
  undefined1 auStack_1a8 [24];
  undefined1 auStack_190 [24];
  ulong uStack_178;
  int iStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  int iStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined2 auStack_11c [2];
  undefined4 uStack_118;
  undefined8 uStack_114;
  undefined8 uStack_10c;
  undefined4 uStack_104;
  undefined2 uStack_100;
  undefined1 auStack_b8 [24];
  long lStack_a0;
  long lStack_98;
  float fStack_90;
  undefined4 uStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  undefined1 uStack_80;
  undefined1 uStack_7f;
  undefined2 uStack_7e;
  uint uStack_7c;
  
  if ((*(char *)(param_7 + 0xc) != '\x04') ||
     ((puVar9 = *(undefined8 **)(param_6 + 0x28), puVar9 == (undefined8 *)0x0 &&
      (*(long *)(param_6 + 800) == 0)))) goto LAB_1074b87d8;
  if ((*(char *)((long)param_7 + 0xad) != '\x01') || (-1 < *(char *)(param_7 + 0x16))) {
    bVar3 = *(byte *)(param_7[5] + 0xa94);
    uVar21 = (ulong)bVar3;
    if (*(long *)(param_6 + 800) != 0) {
      plVar13 = *(long **)(*(long *)(param_6 + 800) + 8);
      plVar15 = plVar13;
      (**(code **)(*plVar13 + 0x48))();
      if (((int)plVar15 == 0) || ((*(byte *)((long)plVar13 + 0x1c) & 1) != 0)) {
        lVar11 = *(long *)(*(long *)(param_6 + 800) + 8);
        uVar14 = param_7[0x12];
        uStack_138 = 0x1e;
        iStack_130 = 0;
        uStack_12c = 0;
        uStack_128 = (uint)bVar3;
        func_0x0001074b9798();
        FUN_1074d6810(auStack_11c,param_7);
        uStack_100 = 0xf01;
        lVar10 = lVar11 + uVar21 * 0x10 + 0x178;
        FUN_1073ca29c(&uStack_178,uVar14,lVar10,&uStack_138);
        uVar6 = (undefined4)lVar10;
        if (uStack_178 == 0) {
LAB_1074b8114:
          *param_1 = 0;
          param_1[1] = 0;
          param_1[2] = 0;
          func_0x0001074b98d8();
          return;
        }
        func_0x0001074b9904();
        (*extraout_x8)();
        if ((int)uVar14 != 2) goto LAB_1074b8114;
        plVar15 = (long *)param_7[3];
        func_0x0001074b973c();
        fStack_90 = (float)uVar14;
        uStack_8c = (undefined4)((ulong)uVar14 >> 0x20);
        uVar22 = 7;
        uStack_134 = 7;
        iStack_130 = 0;
        iStack_88 = uVar6;
        func_0x0001074b98f4();
        uStack_128._0_3_ = CONCAT12(1,(undefined2)uStack_128);
        func_0x0001074b9870(*(undefined8 *)(*plVar15 + 0x80));
        uVar6 = 0x10100;
        if (bVar3 != 0) {
          uVar6 = 0x10101;
        }
        uStack_138._0_3_ = CONCAT12(1,(undefined2)uStack_138);
        func_0x0001074b9924(uVar6,param_7[3]);
        func_0x0001074b99d4();
        func_0x0001074b9a1c();
        (*extraout_x8_00)();
        func_0x0001074b9820();
        (**(code **)(extraout_x8_01 + 0x58))();
        func_0x0001074b9820();
        func_0x0001074b974c(*(undefined8 *)(extraout_x8_02 + 0x60));
        func_0x0001074b99bc(param_7[3]);
        func_0x0001074b9840();
        (*extraout_x8_03)();
        func_0x0001074b8ad4(param_7[3],lVar11 + 0x80);
        lVar12 = *(long *)(*(long *)(param_6 + 800) + 0x20);
        for (lVar10 = *(long *)(*(long *)(param_6 + 800) + 0x18); uVar5 = lVar10 == lVar12,
            !(bool)uVar5; lVar10 = lVar10 + 0x90) {
          uVar14 = param_7[3];
          func_0x000107482794(&uStack_138,lVar10 + 0x10);
          func_0x0001074b99fc();
          func_0x0001074b974c(uVar14);
          if (uVar21 != 0) {
            plVar15 = (long *)param_7[3];
            func_0x000107415f50(param_7[5],lVar10,0x2000);
            uStack_138 = (undefined4)uVar22;
            uStack_134 = param_3;
            iStack_130 = param_4;
            uStack_12c = param_5;
            func_0x0001074b9990(*(undefined8 *)(*plVar15 + 0xb8),plVar15);
            lVar16 = param_7[5];
            FUN_107416bf8(lVar16);
            func_0x000107482794(&uStack_138,lVar16 + 0xaa0);
            func_0x0001074b99fc();
            func_0x0001074b9814();
            func_0x0001074b97e4();
            if ((bool)uVar5) {
              uVar22 = (ulong)*(uint *)(extraout_x8_04 + 0xa90);
            }
            func_0x0001074b9820();
            func_0x0001074b9970(*(undefined8 *)(extraout_x8_05 + 0xa0));
          }
          lVar1 = *(long *)(lVar11 + 0xf8);
          for (lVar16 = *(long *)(lVar11 + 0xf0); lVar16 != lVar1; lVar16 = lVar16 + 0x28) {
            func_0x0001074b982c();
            (*extraout_x8_06)();
            func_0x0001074b9968(auStack_b8);
            func_0x0001074b9898();
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b8);
            uStack_138 = CONCAT31(uStack_138._1_3_,4);
            uStack_134 = 0;
            func_0x0001074b97ac(param_7[3]);
            func_0x0001074b9890();
          }
        }
        func_0x0001074b98d8();
        goto LAB_1074b85e0;
      }
      puVar9 = *(undefined8 **)(param_6 + 0x28);
    }
    if (puVar9 != (undefined8 *)0x0) {
      plVar15 = (long *)*puVar9;
      plVar13 = (long *)puVar9[1];
      uVar20 = (uint)bVar3;
      uVar6 = 0x10100;
      if (uVar20 != 0) {
        uVar6 = 0x10101;
      }
      for (; plVar15 != plVar13; plVar15 = plVar15 + 1) {
        (**(code **)(**(long **)(*plVar15 + 0x220) + 0x28))
                  (&fStack_90,*(long **)(*plVar15 + 0x220),*(undefined8 *)(param_6 + 0x18));
        fVar4 = fStack_90;
        lVar10 = CONCAT44(uStack_8c,fStack_90);
        if ((lVar10 != 0) &&
           (((*(long *)(lVar10 + 0x28) != 0 || ((*(byte *)(lVar10 + 0x98) & 1) != 0)) ||
            (*(char *)(lVar10 + 0x78) == '\x01')))) {
          uVar22 = param_7[0x12];
          uStack_138 = 0x1e;
          iStack_130 = 0;
          uStack_12c = 0;
          uStack_128 = uVar20;
          func_0x0001074b9798();
          auStack_11c[0] = 0x501;
          uStack_10c = 0;
          uStack_114 = 0;
          uStack_118 = 1;
          uStack_104 = 0x1010101;
          uStack_100 = 0xf01;
          iVar7 = (int)fVar4 + (uint)bVar3 * 0x10 + 0x178;
          FUN_1073ca29c(&lStack_a0);
          if (lStack_a0 == 0) {
LAB_1074b85c4:
            *param_1 = 0;
            param_1[1] = 0;
            param_1[2] = 0;
            func_0x0001074b993c();
            func_0x0001074b9934();
            return;
          }
          func_0x0001074b9904();
          (*extraout_x8_09)();
          if ((int)uVar22 != 2) goto LAB_1074b85c4;
          plVar17 = (long *)param_7[3];
          func_0x0001074b973c();
          uStack_134 = 7;
          iStack_130 = 0;
          uStack_178 = uVar22;
          iStack_170 = iVar7;
          func_0x0001074b98f4();
          uStack_128._0_3_ = CONCAT12(1,(undefined2)uStack_128);
          (**(code **)(*plVar17 + 0x80))(plVar17,&uStack_178,&uStack_138);
          uStack_138._0_3_ = CONCAT12((char)((uint)uVar6 >> 0x10),(undefined2)uStack_138);
          func_0x0001074b9924(uVar6,param_7[3]);
          func_0x0001074b99d4();
          (**(code **)(*(long *)param_7[3] + 0x40))((long *)param_7[3],lStack_a0);
          func_0x0001074b99bc(param_7[3]);
          func_0x0001074b9840();
          (*extraout_x8_10)();
          func_0x0001074b8ad4(param_7[3],lVar10 + 0x80);
          if (*(char *)(lVar10 + 0x98) == '\x01') {
            if ((*(char *)(lVar10 + 0x150) == '\x01') &&
               (uVar5 = *(char *)(lVar10 + 0x170) == '\x01', (bool)uVar5)) {
              func_0x0001074b9820();
              (**(code **)(extraout_x8_11 + 0x58))();
              func_0x0001074b9820();
              func_0x0001074b974c(*(undefined8 *)(extraout_x8_12 + 0x60));
              uVar22 = param_7[5];
              if ((((*(byte *)(uVar22 + 0x5c) & 1) == 0) && ((*(byte *)(uVar22 + 0x5d) & 1) == 0))
                 && ((*(byte *)(uVar22 + 0x5e) & 1) == 0)) {
                uVar22 = (ulong)*(byte *)(uVar22 + 0x5f);
              }
              func_0x0001074b9780(uVar22);
              plVar17 = (long *)param_7[3];
              func_0x0001074b9944();
              func_0x0001074b974c(*(undefined8 *)(*plVar17 + 0xd0),plVar17);
              if (uVar21 != 0) {
                plVar17 = (long *)param_7[3];
                func_0x0001074b98a0();
                uStack_178 = CONCAT44(param_3,(int)param_2);
                iStack_170 = param_4;
                uStack_16c = param_5;
                func_0x0001074b9990(*(undefined8 *)(*plVar17 + 0xb8),plVar17);
                lVar11 = param_7[5];
                FUN_107416bf8(lVar11);
                func_0x000107482794(&uStack_178,lVar11 + 0xaa0);
                func_0x0001074b99fc();
                func_0x0001074b9814();
                func_0x0001074b97e4();
                if ((bool)uVar5) {
                  param_2 = (ulong)*(uint *)(extraout_x8_13 + 0xa90);
                }
                func_0x0001074b9820();
                func_0x0001074b9970(*(undefined8 *)(extraout_x8_14 + 0xa0));
              }
              lVar11 = *(long *)(lVar10 + 0xf8);
              for (lVar10 = *(long *)(lVar10 + 0xf0); lVar10 != lVar11; lVar10 = lVar10 + 0x28) {
                func_0x0001074b982c();
                (*extraout_x8_15)();
                func_0x0001074b9968(auStack_190);
                func_0x0001074b9898();
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_190);
                uStack_178 = CONCAT71(uStack_178._1_7_,4);
                uStack_178 = uStack_178 & 0xffffffff;
                func_0x0001074b97ac(param_7[3]);
                func_0x0001074b9890();
              }
            }
            else {
              if (uVar21 == 0) {
LAB_1074b83f8:
                plVar17 = (long *)(lVar10 + 0xf0);
                uVar5 = *plVar17 == *(long *)(lVar10 + 0xf8);
                if ((bool)uVar5) {
                  func_0x0001074b995c();
                  func_0x0001074b99dc();
                  func_0x0001074b98ec();
                }
                lVar11 = 0x38;
                lVar10 = 0x1d0;
              }
              else {
                iVar7 = (int)param_7[5];
                FUN_1074178c4();
                if (iVar7 != 0) goto LAB_1074b83f8;
                plVar17 = (long *)(lVar10 + 0x108);
                uVar5 = *(long *)(lVar10 + 0x108) == *(long *)(lVar10 + 0x110);
                if ((bool)uVar5) {
                  func_0x0001074b9950();
                  func_0x0001074b99dc();
                  func_0x0001074b98ec();
                }
                lVar11 = 0x70;
                lVar10 = 0x228;
              }
              plVar19 = (long *)param_7[3];
              lVar10 = param_7[9] + lVar10;
              func_0x00010745d41c(lVar10);
              (**(code **)(*plVar19 + 0x58))(plVar19,lVar10);
              plVar19 = (long *)param_7[3];
              func_0x00010745d404(param_7[9] + lVar11);
              func_0x0001074b974c(*(undefined8 *)(*plVar19 + 0x60),plVar19);
              uVar22 = param_7[5];
              if ((((*(byte *)(uVar22 + 0x5c) & 1) == 0) && ((*(byte *)(uVar22 + 0x5d) & 1) == 0))
                 && ((*(byte *)(uVar22 + 0x5e) & 1) == 0)) {
                uVar22 = (ulong)*(byte *)(uVar22 + 0x5f);
              }
              func_0x0001074b9780(uVar22);
              plVar19 = (long *)param_7[3];
              func_0x0001074b9944();
              func_0x0001074b974c(*(undefined8 *)(*plVar19 + 0xd0),plVar19);
              if (uVar20 != 0) {
                plVar19 = (long *)param_7[3];
                func_0x0001074b98a0();
                uStack_178 = CONCAT44(param_3,(int)param_2);
                iStack_170 = param_4;
                uStack_16c = param_5;
                func_0x0001074b9990(*(undefined8 *)(*plVar19 + 0xb8),plVar19);
                lVar10 = param_7[5];
                FUN_107416bf8(lVar10);
                func_0x000107482794(&uStack_178,lVar10 + 0xaa0);
                func_0x0001074b99fc();
                func_0x0001074b9814();
                func_0x0001074b97e4();
                if ((bool)uVar5) {
                  param_2 = (ulong)*(uint *)(extraout_x8_16 + 0xa90);
                }
                func_0x0001074b9820();
                func_0x0001074b9970(*(undefined8 *)(extraout_x8_17 + 0xa0));
              }
              lVar11 = plVar17[1];
              for (lVar10 = *plVar17; lVar10 != lVar11; lVar10 = lVar10 + 0x28) {
                func_0x0001074b982c();
                (*extraout_x8_18)();
                func_0x0001074b9968(auStack_1a8);
                func_0x0001074b9898();
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1a8);
                uStack_178 = CONCAT71(uStack_178._1_7_,4);
                uStack_178 = uStack_178 & 0xffffffff;
                func_0x0001074b97ac(param_7[3]);
                func_0x0001074b9890();
              }
            }
          }
          func_0x0001074b993c();
        }
        func_0x0001074b9934();
      }
    }
LAB_1074b85e0:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return;
  }
  if (*(long *)(param_6 + 800) != 0) goto LAB_1074b87d8;
  lVar10 = *(long *)(param_6 + 8);
  bVar3 = *(byte *)(param_7[5] + 0xa94);
  uVar5 = 0;
  if (*(char *)(lVar10 + 0x34) == '\0') {
    uVar5 = 3;
  }
  uVar14 = param_7[0x12];
  uStack_138 = 0x1f;
  iStack_130 = 0;
  uStack_12c = 0;
  uStack_128 = (uint)bVar3;
  func_0x0001074b9798();
  auStack_11c[0] = 0x501;
  uStack_10c = 0;
  uStack_114 = 0;
  uStack_118 = 1;
  uStack_104 = 0x1010101;
  uStack_100 = 0xf01;
  iVar7 = extraout_w9 + 0x328;
  FUN_1073ca29c(&uStack_178);
  if (uStack_178 != 0) {
    func_0x0001074b9904();
    (*extraout_x8_07)();
    if ((int)uVar14 == 2) {
      plVar15 = (long *)param_7[3];
      func_0x0001074b973c();
      fStack_90 = (float)uVar14;
      uStack_8c = (undefined4)((ulong)uVar14 >> 0x20);
      uStack_134 = 7;
      iStack_130 = 0;
      iStack_88 = iVar7;
      func_0x0001074b98f4();
      uStack_128._0_3_ = CONCAT12(1,(undefined2)uStack_128);
      func_0x0001074b9870(*(undefined8 *)(*plVar15 + 0x80));
      uVar6 = 0x10100;
      if (bVar3 != 0) {
        uVar6 = 0x10101;
      }
      uStack_138._0_3_ = CONCAT12(1,(undefined2)uStack_138);
      func_0x0001074b9924(uVar6,param_7[3]);
      func_0x0001074b99d4();
      func_0x0001074b9a1c();
      (*extraout_x8_08)();
      if (bVar3 == 0) {
LAB_1074b8050:
        puVar9 = (undefined8 *)(param_6 + 0x348);
        if (*(long *)(param_6 + 0x348) == *(long *)(param_6 + 0x350)) {
          func_0x0001074b995c();
          func_0x0001074b99c8();
          func_0x0001074b98ec();
        }
        lVar11 = 0x1d0;
        lVar12 = 0x38;
      }
      else {
        iVar7 = (int)param_7[5];
        FUN_1074178c4();
        if (iVar7 != 0) goto LAB_1074b8050;
        puVar9 = (undefined8 *)(param_6 + 0x360);
        if (*(long *)(param_6 + 0x360) == *(long *)(param_6 + 0x368)) {
          func_0x0001074b9950();
          func_0x0001074b99c8();
          func_0x0001074b98ec();
        }
        lVar11 = 0x228;
        lVar12 = 0x70;
      }
      plVar15 = (long *)param_7[3];
      lVar11 = param_7[9] + lVar11;
      func_0x00010745d41c(lVar11);
      (**(code **)(*plVar15 + 0x58))(plVar15,lVar11);
      plVar15 = (long *)param_7[3];
      func_0x00010745d404(param_7[9] + lVar12);
      func_0x0001074b974c(*(undefined8 *)(*plVar15 + 0x60),plVar15);
      fStack_90 = *(float *)(lVar10 + 0x30);
      uStack_8c = 0;
      iStack_88 = 0;
      uStack_84 = 0;
      puVar8 = *(undefined8 **)(param_6 + 0x388);
      if (puVar8 == (undefined8 *)0x0) {
        (**(code **)(*(long *)*param_7 + 0xa8))(&uStack_80,(long *)*param_7,0x10);
        lStack_98 = CONCAT44(uStack_7c,CONCAT22(uStack_7e,CONCAT11(uStack_7f,uStack_80)));
        lStack_a0 = 0x10;
        func_0x000107308d88(&uStack_138,&lStack_a0);
        func_0x000107308dac((undefined8 *)(param_6 + 0x388),&uStack_138);
        func_0x00010730b284(&uStack_138);
        lVar10 = lStack_98;
        lStack_98 = 0;
        if (lVar10 != 0) {
          func_0x0001074b99a0();
        }
        puVar8 = *(undefined8 **)(param_6 + 0x388);
LAB_1074b8648:
        (**(code **)(*(long *)puVar8[1] + 0x20))((long *)puVar8[1],&fStack_90,*puVar8);
        *(ulong *)(param_6 + 0x380) = CONCAT44(uStack_84,iStack_88);
        *(ulong *)(param_6 + 0x378) = CONCAT44(uStack_8c,fStack_90);
      }
      else if (((*(float *)(param_6 + 0x378) != fStack_90) || (*(float *)(param_6 + 0x37c) != 0.0))
              || ((*(float *)(param_6 + 0x380) != 0.0 || (*(float *)(param_6 + 900) != 0.0))))
      goto LAB_1074b8648;
      func_0x0001074b9820();
      func_0x0001074b974c(*(undefined8 *)(extraout_x8_19 + 0x90));
      if (bVar3 != 0) {
        (**(code **)(*(long *)param_7[3] + 0x90))
                  ((long *)param_7[3],2,*(undefined8 *)(param_7[0x13] + 0x240));
      }
      plVar13 = (long *)(*(undefined8 **)(param_6 + 0x28))[1];
      for (plVar15 = (long *)**(undefined8 **)(param_6 + 0x28); plVar15 != plVar13;
          plVar15 = plVar15 + 1) {
        lVar10 = *plVar15;
        plVar17 = *(long **)(lVar10 + 0x220);
        (**(code **)(*plVar17 + 0x28))(&lStack_a0,plVar17,*(undefined8 *)(param_6 + 0x18));
        if ((lStack_a0 != 0) && ((*(byte *)(lStack_a0 + 0x98) & 1) != 0)) {
          uStack_7e = 0;
          uStack_7c = uStack_7c & 0xffffff00;
          uStack_80 = uVar5;
          uStack_7f = uVar5;
          (**(code **)(*(long *)param_7[3] + 0x78))((long *)param_7[3],lStack_a0 + 0x80,&uStack_80);
          func_0x0001074b9820();
          func_0x0001074b974c(*(undefined8 *)(extraout_x8_20 + 0x70));
          plVar17 = (long *)param_7[3];
          puVar8 = param_7;
          FUN_1074d70d4(param_7,lVar10,0x2000);
          (**(code **)(*plVar17 + 0x90))(plVar17,1,puVar8);
          puVar2 = (undefined4 *)puVar9[1];
          for (puVar18 = (undefined4 *)*puVar9; puVar18 != puVar2; puVar18 = puVar18 + 10) {
            (**(code **)(*(long *)param_7[3] + 0x68))((long *)param_7[3],*puVar18);
            func_0x00010002b838(&uStack_138,&UNK_10f415b81);
            func_0x0001074b9898();
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_138);
            uStack_80 = 4;
            uStack_7c = 0;
            func_0x0001074b9890(*(undefined8 *)(*(long *)param_7[3] + 0x138),(long *)param_7[3],
                                &uStack_80,puVar18[6],param_9,puVar18[2]);
          }
        }
        func_0x0001073e091c(&lStack_a0);
      }
    }
  }
  func_0x0001074b98d8();
LAB_1074b87d8:
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 1074b895c; end: 1074b8b17;  */

void FUN_1074b895c(long *param_1,long param_2)

{
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  code *extraout_x8_05;
  long *unaff_x19;
  undefined4 *unaff_x20;
  float fVar1;
  
  func_0x0001074b98e0();
  (**(code **)(*param_1 + 0xa0))(*(undefined4 *)(param_2 + 0x14));
  func_0x0001074b97c0();
  (*extraout_x8)();
  func_0x0001074b97d4(unaff_x20[1]);
  (*extraout_x8_00)();
  func_0x0001074b97d4(*unaff_x20);
  (*extraout_x8_01)();
  fVar1 = (float)unaff_x20[7];
  if (fVar1 <= 0.0) {
    fVar1 = -fVar1;
  }
  else {
    fVar1 = 1.0 - 1.0 / (1.001 - fVar1);
  }
  func_0x0001074b97d4(fVar1);
  (*extraout_x8_02)();
  fVar1 = (float)unaff_x20[2];
  if (fVar1 <= 0.0) {
    fVar1 = fVar1 + 1.0;
  }
  else {
    fVar1 = 1.0 / (1.0 - fVar1);
  }
  func_0x0001074b97d4(fVar1);
  (*extraout_x8_03)();
  ___sincosf_stret();
  NEON_fmov(0x40400000,4);
  (**(code **)(*unaff_x19 + 0xb0))();
  func_0x0001074b97c0();
  (*extraout_x8_04)();
  func_0x0001074b97c0();
  (*extraout_x8_05)();
  (**(code **)(*unaff_x19 + 0xa8))();
  return;
}



/* Entry: 1074b8b18; end: 1074b8be7;  */

void FUN_1074b8b18(long param_1)

{
  long *plVar1;
  long *unaff_x19;
  long unaff_x20;
  long *plVar2;
  undefined1 auStack_68 [24];
  long alStack_50 [2];
  
  func_0x0001074b9864();
  plVar1 = (long *)(*(undefined8 **)(param_1 + 0x28))[1];
  for (plVar2 = (long *)**(undefined8 **)(param_1 + 0x28); plVar2 != plVar1; plVar2 = plVar2 + 1) {
    (**(code **)(**(long **)(*plVar2 + 0x220) + 0x28))
              (alStack_50,*(long **)(*plVar2 + 0x220),*(undefined8 *)(unaff_x20 + 0x18));
    if (alStack_50[0] != 0) {
      func_0x00010724ef84(auStack_68,*(long *)(unaff_x20 + 0x18) + 8);
      (**(code **)(*unaff_x19 + 0x38))();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_68);
    }
    func_0x0001073e091c(alStack_50);
  }
  return;
}



/* Entry: 1074b8be8; end: 1074b8bef;  */

void FUN_1074b8be8(long param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 1074b8bf0; end: 1074b8c1b;  */

void FUN_1074b8bf0(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x000107308dac(param_1 + 0x388,&uStack_20);
  func_0x00010730b284(&uStack_20);
  return;
}



/* Entry: 1074b8c1c; end: 1074b8c2b;  */

undefined8 FUN_1074b8c1c(void)

{
  return 0;
}



/* Entry: 1074b8c2c; end: 1074b8cd3;  */

long FUN_1074b8c2c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1074b8cd4; end: 1074b8d1f;  */

void FUN_1074b8cd4(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x30) != 0xffffffff) {
    (*(code *)(&PTR_FUN_1109b4bd8)[*(uint *)(param_1 + 0x30)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  return;
}



/* Entry: 1074b8d20; end: 1074b8d2f;  */

void FUN_1074b8d20(void)

{
  return;
}



/* Entry: 1074b8d30; end: 1074b8d4f;  */

void FUN_1074b8d30(long param_1)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    FUN_1074b8d50();
  }
  return;
}



/* Entry: 1074b8d50; end: 1074b8d73;  */

undefined8 FUN_1074b8d50(undefined8 param_1)

{
  FUN_1074b8d74(param_1,0);
  return param_1;
}



/* Entry: 1074b8d74; end: 1074b8d8b;  */

void FUN_1074b8d74(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x0001074b8cac(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1074b8d8c; end: 1074b8da7;  */

void FUN_1074b8d8c(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x0001074b8cac(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1074b8da8; end: 1074b8e0b;  */

undefined8 * FUN_1074b8da8(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = *(char *)(param_1 + 1);
  if (cVar1 == *(char *)(param_2 + 1)) {
    if (cVar1 != '\0') {
      uVar2 = *param_1;
      *param_1 = *param_2;
      *param_2 = uVar2;
    }
  }
  else if (cVar1 == '\0') {
    FUN_1074b8e0c(param_1);
  }
  else {
    FUN_1074b8d50(param_1);
    *(undefined1 *)(param_1 + 1) = 0;
  }
  return param_1;
}



/* Entry: 1074b8e0c; end: 1074b8e37;  */

void FUN_1074b8e0c(long param_1,undefined8 *param_2)

{
  FUN_1074b8e38(param_1,*param_2);
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}



/* Entry: 1074b8e38; end: 1074b8e63;  */

void FUN_1074b8e38(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  func_0x0001074b9864();
  uVar1 = 0x58;
  __Znwm();
  FUN_1074b8e64();
  *unaff_x20 = uVar1;
  return;
}



/* Entry: 1074b8e64; end: 1074b8eb7;  */

void FUN_1074b8e64(undefined1 *param_1,long param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x0001074b98e0();
  *param_1 = 0;
  param_1[8] = 0;
  if (*(char *)(param_2 + 8) == '\x01') {
    FUN_1074b8e0c();
  }
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x19 + 0x10) = uVar1;
  FUN_1074b8eb8(unaff_x19 + 0x20,unaff_x20 + 0x20);
  return;
}



/* Entry: 1074b8eb8; end: 1074b8edb;  */

void FUN_1074b8eb8(void)

{
  func_0x0001074b9a08();
  FUN_1074b8edc();
  return;
}



/* Entry: 1074b8edc; end: 1074b8f1f;  */

void FUN_1074b8edc(void)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074b98e0();
  FUN_1074b8cd4();
  iVar1 = *(int *)(unaff_x20 + 0x30);
  if (iVar1 != -1) {
    func_0x0001074b9880(&PTR_FUN_1109b4bf0);
    *(int *)(unaff_x19 + 0x30) = iVar1;
  }
  return;
}



/* Entry: 1074b8f20; end: 1074b8f33;  */

void FUN_1074b8f20(void)

{
  return;
}



/* Entry: 1074b8f34; end: 1074b8f57;  */

void FUN_1074b8f34(long param_1,long param_2)

{
  func_0x00010727da70();
  *(undefined2 *)(param_1 + 0x28) = *(undefined2 *)(param_2 + 0x28);
  return;
}



/* Entry: 1074b8f58; end: 1074b8f7b;  */

undefined8 FUN_1074b8f58(undefined8 param_1)

{
  FUN_1074b8f7c();
  return param_1;
}



/* Entry: 1074b8f7c; end: 1074b8fd7;  */

void FUN_1074b8f7c(long param_1,long param_2)

{
  uint uVar1;
  undefined1 uStack_21;
  
  uVar1 = *(uint *)(param_2 + 0x30);
  if (*(int *)(param_1 + 0x30) != -1 || uVar1 != 0xffffffff) {
    if (uVar1 == 0xffffffff) {
      if (*(uint *)(param_1 + 0x30) != 0xffffffff) {
        (*(code *)(&PTR_FUN_1109b4bd8)[*(uint *)(param_1 + 0x30)])(&uStack_21,param_1,param_2);
      }
      *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
      return;
    }
    (*(code *)(&PTR_FUN_1109b4c08)[uVar1])(&stack0xffffffffffffffe8);
  }
  return;
}



/* Entry: 1074b8fd8; end: 1074b8feb;  */

void FUN_1074b8fd8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_20;
  undefined8 uStack_18;
  
  lStack_20 = *param_1;
  if (*(int *)(lStack_20 + 0x30) != 0) {
    uStack_18 = param_3;
    FUN_1074b9018(&lStack_20);
  }
  return;
}



/* Entry: 1074b8fec; end: 1074b9017;  */

void FUN_1074b8fec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_20;
  undefined8 uStack_18;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    lStack_20 = param_1;
    uStack_18 = param_3;
    FUN_1074b9018(&lStack_20);
  }
  return;
}



/* Entry: 1074b9018; end: 1074b903b;  */

void FUN_1074b9018(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  FUN_1074b8cd4(lVar1);
  *(undefined4 *)(lVar1 + 0x30) = 0;
  return;
}



/* Entry: 1074b903c; end: 1074b9043;  */

void FUN_1074b903c(long *param_1,undefined1 *param_2,undefined1 *param_3)

{
  long lStack_20;
  undefined1 *puStack_18;
  
  lStack_20 = *param_1;
  if (*(int *)(lStack_20 + 0x30) == 1) {
    *param_2 = *param_3;
    return;
  }
  puStack_18 = param_3;
  FUN_1074b907c(&lStack_20);
  return;
}



/* Entry: 1074b9044; end: 1074b907b;  */

void FUN_1074b9044(long param_1,undefined1 *param_2,undefined1 *param_3)

{
  long lStack_20;
  undefined1 *puStack_18;
  
  if (*(int *)(param_1 + 0x30) == 1) {
    *param_2 = *param_3;
    return;
  }
  lStack_20 = param_1;
  puStack_18 = param_3;
  FUN_1074b907c(&lStack_20);
  return;
}



/* Entry: 1074b907c; end: 1074b9087;  */

void FUN_1074b907c(undefined8 *param_1)

{
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  
  func_0x0001074b9864(*param_1,param_1[1]);
  FUN_1074b8cd4();
  *unaff_x20 = *unaff_x19;
  *(undefined4 *)(unaff_x20 + 0x30) = 1;
  return;
}



/* Entry: 1074b9088; end: 1074b90b7;  */

void FUN_1074b9088(void)

{
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  
  func_0x0001074b9864();
  FUN_1074b8cd4();
  *unaff_x20 = *unaff_x19;
  *(undefined4 *)(unaff_x20 + 0x30) = 1;
  return;
}



/* Entry: 1074b90b8; end: 1074b90bf;  */

void FUN_1074b90b8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  long unaff_x20;
  
  if (*(int *)(*param_1 + 0x30) == 2) {
    func_0x0001074b9864(param_2,param_3);
    func_0x00010727e15c();
    *(undefined2 *)(unaff_x20 + 0x28) = *(undefined2 *)(unaff_x19 + 0x28);
    return;
  }
  FUN_1074b9120(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 1074b90c0; end: 1074b90f7;  */

void FUN_1074b90c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  long unaff_x20;
  
  if (*(int *)(param_1 + 0x30) == 2) {
    func_0x0001074b9864(param_2,param_3);
    func_0x00010727e15c();
    *(undefined2 *)(unaff_x20 + 0x28) = *(undefined2 *)(unaff_x19 + 0x28);
    return;
  }
  FUN_1074b9120(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 1074b90f8; end: 1074b911f;  */

void FUN_1074b90f8(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074b9864();
  func_0x00010727e15c();
  *(undefined2 *)(unaff_x20 + 0x28) = *(undefined2 *)(unaff_x19 + 0x28);
  return;
}



/* Entry: 1074b9120; end: 1074b912b;  */

void FUN_1074b9120(undefined8 *param_1)

{
  long unaff_x20;
  
  func_0x0001074b9864(*param_1,param_1[1]);
  FUN_1074b8cd4();
  FUN_1074b8f34();
  *(undefined4 *)(unaff_x20 + 0x30) = 2;
  return;
}



/* Entry: 1074b912c; end: 1074b915b;  */

void FUN_1074b912c(void)

{
  long unaff_x20;
  
  func_0x0001074b9864();
  FUN_1074b8cd4();
  FUN_1074b8f34();
  *(undefined4 *)(unaff_x20 + 0x30) = 2;
  return;
}



/* Entry: 1074b915c; end: 1074b917b;  */

void FUN_1074b915c(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_1074b917c(&uStack_11,param_1);
  return;
}



/* Entry: 1074b917c; end: 1074b9203;  */

undefined1 * FUN_1074b917c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  undefined1 auStack_40 [16];
  long lStack_30;
  undefined8 uStack_28;
  
  puVar2 = auStack_40;
  puVar3 = auStack_40;
  func_0x0001074b9914();
  uStack_28 = extraout_x8;
  FUN_1074b9204(auStack_40,1);
  FUN_1074b925c(lStack_30);
  lVar1 = lStack_30;
  lStack_30 = 0;
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  func_0x0001074b9308();
  func_0x0001074b976c(uStack_28);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x0001074b9308();
  func_0x0001074b9764();
  *(undefined8 *)(puVar3 + 8) = param_3;
  puVar2 = puVar3;
  FUN_1074b922c();
  *(undefined1 **)(puVar3 + 0x10) = puVar2;
  return puVar3;
}



/* Entry: 1074b9204; end: 1074b922b;  */

long FUN_1074b9204(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_1074b922c();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1074b922c; end: 1074b925b;  */

undefined8 * FUN_1074b922c(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x2e8ba2e8ba2e8bb) {
    puVar1 = (undefined8 *)(param_2 * 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1109b4c30;
  FUN_1074b92c0(param_1 + 3);
  return param_1;
}



/* Entry: 1074b925c; end: 1074b929b;  */

undefined8 * FUN_1074b925c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1109b4c30;
  FUN_1074b92c0(param_1 + 3);
  return param_1;
}



/* Entry: 1074b929c; end: 1074b929f;  */

void FUN_1074b929c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109b4c30;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1074b92a0; end: 1074b92b3;  */

void FUN_1074b92a0(void)

{
  FUN_1074b92f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1074b92b4; end: 1074b92bf;  */

undefined8 * FUN_1074b92b4(long param_1)

{
  *(undefined8 *)(param_1 + 0x18) = &PTR_DAT_1109ab0d0;
  func_0x0001073ad4c4(param_1 + 0x20);
  return (undefined8 *)(param_1 + 0x18);
}



/* Entry: 1074b92c0; end: 1074b92f7;  */

undefined8 FUN_1074b92c0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  func_0x00010779d268(param_1,&uStack_30);
  func_0x0001074b99ac();
  return param_1;
}



/* Entry: 1074b92f8; end: 1074b9317;  */

void FUN_1074b92f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109b4c30;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1074b9318; end: 1074b9377;  */

undefined8 * FUN_1074b9318(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x0001074b9350(&uStack_30);
  return param_1;
}



/* Entry: 1074b9378; end: 1074b93a7;  */

void FUN_1074b9378(void)

{
  func_0x0001074b9a08();
  FUN_1074b93a8();
  return;
}



/* Entry: 1074b93a8; end: 1074b93eb;  */

void FUN_1074b93a8(void)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074b98e0();
  FUN_1074b8cd4();
  iVar1 = *(int *)(unaff_x20 + 0x30);
  if (iVar1 != -1) {
    func_0x0001074b9880(&PTR_FUN_1109b4c70);
    *(int *)(unaff_x19 + 0x30) = iVar1;
  }
  return;
}



/* Entry: 1074b93ec; end: 1074b93ff;  */

void FUN_1074b93ec(void)

{
  return;
}



/* Entry: 1074b9400; end: 1074b9423;  */

void FUN_1074b9400(long param_1,long param_2)

{
  func_0x00010727d6bc();
  *(undefined2 *)(param_1 + 0x28) = *(undefined2 *)(param_2 + 0x28);
  return;
}



/* Entry: 1074b9424; end: 1074b94cf;  */

long FUN_1074b9424(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107432f04();
  func_0x000107432f04(lVar1 + 0x58,param_3);
  func_0x000107432f04(param_1 + 0xb0,param_4);
  func_0x000107432f04(param_1 + 0x108,param_5);
  func_0x000107432f04(param_1 + 0x160,param_6);
  func_0x000107432f04(param_1 + 0x1b8,param_7);
  FUN_1074b8e64(param_1 + 0x210,param_8);
  func_0x000107432f04(param_1 + 0x268,param_9);
  return param_1;
}



/* Entry: 1074b94d0; end: 1074b95fb;  */

long * FUN_1074b94d0(ulong *param_1,ulong param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uStack_60;
  undefined1 uStack_58;
  
  plVar3 = (long *)param_1;
  while( true ) {
    if (*(uint *)(plVar3 + 10) == 0xffffffff) {
      func_0x00010563ab98();
      return (long *)(ulong)*(byte *)(*param_1 + 8);
    }
    param_1 = &uStack_60;
    uStack_60 = param_2;
    (*(code *)(&PTR_FUN_1109b4c88)[*(uint *)(plVar3 + 10)])(&uStack_60,plVar3 + 4);
    if ((char)plVar3[1] != '\x01') break;
    lVar1 = plVar3[3];
    if ((lVar1 <= param_3) ||
       ((((int)plVar3[10] != 0 && ((int)plVar3[10] != 1)) && ((*(byte *)(plVar3 + 6) >> 1 & 1) == 0)
        ))) {
      uStack_60 = uStack_60 & 0xffffffffffffff00;
      uStack_58 = 0;
      FUN_1074b8da8(plVar3,&uStack_60);
      FUN_1074b8d30(&uStack_60);
      return (long *)param_1;
    }
    lVar2 = plVar3[2];
    if (lVar2 <= param_3) {
      plVar3 = (long *)*plVar3;
      FUN_1074b94d0(plVar3,param_2,param_3);
      FUN_1073b426c((double)((((float)(param_3 - lVar2) / 1e+09) * 1e+09) / (float)(lVar1 - lVar2)),
                    0x3f50624dd2f1a9fc,&UNK_10de73dc8);
      return plVar3;
    }
    plVar3 = (long *)*plVar3;
  }
  return (long *)param_1;
}



/* Entry: 1074b95fc; end: 1074b960f;  */

undefined1 FUN_1074b95fc(long *param_1)

{
  return *(undefined1 *)(*param_1 + 8);
}



/* Entry: 1074b9610; end: 1074b9733;  */

undefined1 * FUN_1074b9610(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  long lVar4;
  uint uVar5;
  long *plVar6;
  undefined1 auStack_290 [56];
  undefined1 uStack_258;
  undefined8 uStack_250;
  undefined1 auStack_248 [232];
  undefined8 uStack_160;
  undefined1 auStack_b8 [120];
  int iStack_40;
  undefined8 uStack_38;
  
  func_0x0001074b9914();
  plVar6 = (long *)*param_1;
  uStack_38 = extraout_x8;
  func_0x0001077512dc(*(undefined4 *)*plVar6,auStack_248);
  lVar4 = *plVar6;
  uStack_160 = *(undefined8 *)(lVar4 + 8);
  auStack_290[0] = 0;
  uStack_258 = 0;
  uStack_250 = *(undefined8 *)(lVar4 + 0x40);
  func_0x000107753050(auStack_b8,*param_2,auStack_248,auStack_290);
  uVar2 = iStack_40 == 1;
  if ((bool)uVar2) {
    puVar3 = auStack_b8;
    func_0x00010727f7dc();
    func_0x000107775b34();
    uVar5 = (uint)puVar3;
    uVar2 = ((ulong)puVar3 & 0x100) == 0;
    bVar1 = (bool)uVar2;
  }
  else {
    uVar5 = 0;
    bVar1 = true;
  }
  func_0x0001074b9984();
  if (bVar1) {
    uVar2 = *(char *)((long)param_2 + 0x29) == '\x01';
    if ((bool)uVar2) {
      uVar5 = (uint)*(byte *)(param_2 + 5);
    }
    else {
      uVar5 = 0;
    }
  }
  func_0x00010724b3d8(auStack_290);
  func_0x000107267da8(auStack_248);
  func_0x0001074b976c(uStack_38);
  if ((bool)uVar2) {
    return (undefined1 *)(ulong)(uVar5 & 1);
  }
  ___stack_chk_fail();
  func_0x0001074b9984();
  func_0x00010724b3d8(auStack_290);
  puVar3 = auStack_248;
  func_0x000107267da8(puVar3);
  func_0x0001074b9764();
  return puVar3;
}



/* Entry: 1074b9734; end: 1074b9a2f;  */

void FUN_1074b9734(void)

{
  return;
}



/* Entry: 1074b9a30; end: 1074b9cd3;  */

undefined8 * FUN_1074b9a30(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 *puStack_780;
  undefined8 *puStack_778;
  long *plStack_770;
  undefined8 *puStack_768;
  undefined1 *puStack_760;
  code *pcStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  ulong auStack_728 [218];
  undefined8 uStack_58;
  
  func_0x0001074c8688();
  uStack_58 = extraout_x8;
  FUN_1074b9cd4(&uStack_750);
  uStack_738 = uStack_748;
  uStack_740 = uStack_750;
  uStack_750 = 0;
  uStack_748 = 0;
  auStack_728[0] = 0;
  auStack_728[1] = 0;
  FUN_1074c58b4(auStack_728);
  func_0x0001074e3a1c(param_1,&uStack_740);
  FUN_1073ad37c(&uStack_740);
  FUN_1074c2744(&uStack_750);
  *param_1 = &PTR_FUN_1109b4cb0;
  plVar6 = param_1 + 0xc;
  param_1[0xd] = 0;
  *plVar6 = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0x3f800000;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  uVar9 = *param_3;
  param_1[0x14] = param_3[1];
  param_1[0x13] = uVar9;
  puVar2 = param_1 + 0x15;
  func_0x0001073db558(puVar2,param_3 + 3);
  func_0x00010785f1f4();
  puVar7 = param_1 + 0x1e;
  param_1[0x1f] = 0;
  *puVar7 = 0;
  param_1[0x19] = puVar2;
  puVar4 = param_1 + 0x1b;
  *(undefined1 *)(param_1 + 0x27) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0x3f800000;
  param_1[0x49] = 0;
  param_1[0x44] = 0;
  param_1[0x43] = 0;
  param_1[0x46] = 0;
  param_1[0x45] = 0;
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  *(undefined1 *)(param_1 + 0x41) = 0;
  param_1[0x40] = 0;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0x3f800000;
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  param_1[0x51] = 0;
  param_1[0x50] = 0;
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  param_1[0x54] = 0;
  *(undefined4 *)(param_1 + 0x55) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x56) = 0;
  *(undefined1 *)(param_1 + 0x57) = 0;
  param_1[0x5a] = 0;
  param_1[0x59] = 0;
  param_1[0x5c] = 0;
  param_1[0x5b] = 0;
  param_1[0x5e] = 0;
  param_1[0x5d] = 0;
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 0x60) = 0x3f800000;
  param_1[99] = 0;
  param_1[0x62] = 0;
  param_1[0x65] = 0;
  param_1[100] = 0;
  param_1[0x67] = 0;
  param_1[0x66] = 0;
  param_1[0x69] = 0;
  param_1[0x68] = 0;
  param_1[0x6a] = 0;
  *(undefined4 *)(param_1 + 0x6b) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x6c) = 0;
  *(undefined1 *)(param_1 + 0x6d) = 0;
  *(undefined1 *)(param_1 + 0x74) = 0;
  *(undefined1 *)(param_1 + 0x75) = 0;
  *(undefined1 *)(param_1 + 0x7b) = 0;
  param_1[0x7d] = 0;
  param_1[0x7c] = 0;
  param_1[0x7f] = 0;
  param_1[0x7e] = 0;
  *(undefined1 *)(param_1 + 0x71) = 0;
  param_1[0x6f] = 0;
  param_1[0x6e] = 0;
  param_1[0x70] = 0;
  *(undefined4 *)(param_1 + 0x80) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x81) = 0;
  *(undefined1 *)(param_1 + 0x82) = 0;
  *(undefined1 *)(param_1 + 0x83) = 0;
  *(undefined1 *)(param_1 + 0x84) = 0;
  param_1[0x86] = 0;
  param_1[0x85] = 0;
  *(undefined1 *)(param_1 + 0x87) = 1;
  auStack_728[0] = auStack_728[0] & 0xffffffffffffff00;
  puVar3 = puVar2 + 0x174;
  func_0x00010724e2c8(puVar3,auStack_728);
  *(byte *)(param_1 + 0x87) = (byte)puVar3 ^ 1;
  lVar8 = *(long *)(param_1[3] + 0xfd0);
  for (lVar5 = *(long *)(param_1[3] + 0xfc8); bVar1 = lVar5 == lVar8, !bVar1; lVar5 = lVar5 + 0xe98)
  {
    FUN_1074b9d44(auStack_728,lVar5 + 0x730);
    FUN_1074c27f4(puVar4,auStack_728);
    puVar3 = auStack_728;
    func_0x0001074c2b58();
  }
  func_0x0001074c8620(uStack_58);
  if (bVar1) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001074c2c08(param_1 + 0x7c);
  func_0x00010730b13c(param_1 + 0x75);
  func_0x00010730b10c(param_1 + 0x71);
  FUN_1074c2d1c(param_1 + 0x6e);
  func_0x0001074c2dfc(param_1 + 0x58);
  func_0x0001074c2dfc(param_1 + 0x42);
  func_0x0001074c2e40(param_1 + 0x21);
  FUN_10748ab6c(puVar7);
  func_0x0001074c2e68(puVar4);
  func_0x0001073db5b8(param_1 + 0x15);
  func_0x0001074c2768(plVar6);
  func_0x0001073ad268(param_1);
  __Unwind_Resume(puVar3);
  puVar2 = &uStack_790;
  pcStack_758 = FUN_1074b9cd4;
  puStack_780 = puVar7;
  puStack_778 = puVar4;
  plStack_770 = plVar6;
  puStack_768 = param_1;
  puStack_760 = &stack0xfffffffffffffff0;
  func_0x0001074c8868();
  puVar4 = (undefined8 *)0x50;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_1109b4fd8;
  uStack_788 = param_1[1];
  uStack_790 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  func_0x0001077a4034(puVar4 + 3,&uStack_790);
  FUN_1073e6bdc(&uStack_790);
  *plVar6 = (long)(puVar4 + 3);
  param_1[0xd] = puVar4;
  uStack_790 = 0;
  uStack_788 = 0;
  FUN_1074c2744(&uStack_790);
  return puVar2;
}



/* Entry: 1074b9cd4; end: 1074b9d43;  */

void FUN_1074b9cd4(void)

{
  undefined8 *puVar1;
  undefined8 *unaff_x19;
  long *unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x0001074c8868();
  puVar1 = (undefined8 *)0x50;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_1109b4fd8;
  uStack_38 = unaff_x19[1];
  uStack_40 = *unaff_x19;
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  func_0x0001077a4034(puVar1 + 3,&uStack_40);
  FUN_1073e6bdc(&uStack_40);
  *unaff_x20 = (long)(puVar1 + 3);
  unaff_x20[1] = (long)puVar1;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_1074c2744(&uStack_40);
  return;
}



/* Entry: 1074b9d44; end: 1074ba337;  */

void FUN_1074b9d44(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long unaff_x20;
  undefined1 auStack_b78 [56];
  undefined1 auStack_b40 [88];
  undefined1 auStack_ae8 [56];
  undefined1 auStack_ab0 [88];
  undefined1 auStack_a58 [56];
  undefined1 auStack_a20 [88];
  undefined1 auStack_9c8 [56];
  undefined1 auStack_990 [88];
  undefined1 auStack_938 [56];
  undefined1 auStack_900 [88];
  undefined1 auStack_8a8 [56];
  undefined1 auStack_870 [88];
  undefined1 auStack_818 [56];
  undefined1 auStack_7e0 [88];
  undefined1 auStack_788 [56];
  undefined1 auStack_750 [88];
  undefined1 auStack_6f8 [56];
  undefined1 auStack_6c0 [88];
  undefined1 auStack_668 [56];
  undefined1 auStack_630 [88];
  undefined1 auStack_5d8 [56];
  undefined1 auStack_5a0 [88];
  undefined1 auStack_548 [64];
  undefined1 auStack_508 [96];
  undefined1 auStack_4a8 [64];
  undefined1 auStack_468 [96];
  undefined1 auStack_408 [64];
  undefined1 auStack_3c8 [96];
  undefined1 auStack_368 [64];
  undefined1 auStack_328 [96];
  undefined1 auStack_2c8 [72];
  undefined1 auStack_280 [104];
  undefined1 auStack_218 [64];
  undefined1 auStack_1d8 [96];
  undefined1 auStack_178 [64];
  undefined1 auStack_138 [96];
  undefined1 auStack_d8 [64];
  undefined1 auStack_98 [96];
  undefined8 uStack_38;
  
  func_0x0001074c8848();
  func_0x0001074c8688();
  uStack_38 = extraout_x8;
  func_0x00010727d614(auStack_5d8);
  func_0x00010743b0a8(auStack_5a0,auStack_5d8);
  func_0x00010727d614(auStack_668,unaff_x20 + 0x60);
  func_0x00010743b0a8(auStack_630,auStack_668);
  FUN_1073398d4(auStack_d8,unaff_x20 + 0xc0);
  func_0x000107483538(auStack_98,auStack_d8);
  FUN_1073398d4(auStack_178,unaff_x20 + 0x128);
  func_0x000107483538(auStack_138,auStack_178);
  func_0x00010727d614(auStack_6f8,unaff_x20 + 400);
  func_0x00010743b0a8(auStack_6c0,auStack_6f8);
  FUN_1073398d4(auStack_218,unaff_x20 + 0x1f0);
  func_0x000107483538(auStack_1d8,auStack_218);
  FUN_107438188(auStack_2c8,unaff_x20 + 600);
  func_0x00010743b05c(auStack_280,auStack_2c8);
  func_0x00010727d614(auStack_788,unaff_x20 + 0x2c8);
  func_0x00010743b0a8(auStack_750,auStack_788);
  FUN_1073398d4(auStack_368,unaff_x20 + 0x328);
  func_0x000107483538(auStack_328,auStack_368);
  func_0x00010727d614(auStack_818,unaff_x20 + 0x390);
  func_0x00010743b0a8(auStack_7e0,auStack_818);
  func_0x00010727d614(auStack_8a8,unaff_x20 + 0x3f0);
  func_0x00010743b0a8(auStack_870,auStack_8a8);
  FUN_1073398d4(auStack_408,unaff_x20 + 0x450);
  func_0x000107483538(auStack_3c8,auStack_408);
  func_0x00010727d614(auStack_938,unaff_x20 + 0x4b8);
  func_0x00010743b0a8(auStack_900,auStack_938);
  FUN_1073398d4(auStack_4a8,unaff_x20 + 0x518);
  func_0x000107483538(auStack_468,auStack_4a8);
  func_0x00010727d614(auStack_9c8,unaff_x20 + 0x580);
  func_0x00010743b0a8(auStack_990,auStack_9c8);
  func_0x00010727d614(auStack_a58,unaff_x20 + 0x5e0);
  func_0x00010743b0a8(auStack_a20,auStack_a58);
  FUN_1073398d4(auStack_548,unaff_x20 + 0x640);
  func_0x000107483538(auStack_508,auStack_548);
  func_0x00010727d614(auStack_ae8,unaff_x20 + 0x6a8);
  func_0x00010743b0a8(auStack_ab0,auStack_ae8);
  func_0x00010727d614(auStack_b78,unaff_x20 + 0x708);
  func_0x00010743b0a8(auStack_b40,auStack_b78);
  FUN_1074c66b0();
  func_0x000107410c2c(auStack_b40);
  func_0x000107266a30(auStack_b78);
  func_0x000107410c2c(auStack_ab0);
  func_0x000107266a30(auStack_ae8);
  FUN_107482af4(auStack_508);
  func_0x0001072ca524(auStack_548);
  func_0x000107410c2c(auStack_a20);
  func_0x000107266a30(auStack_a58);
  func_0x000107410c2c(auStack_990);
  func_0x000107266a30(auStack_9c8);
  FUN_107482af4(auStack_468);
  func_0x0001072ca524(auStack_4a8);
  func_0x000107410c2c(auStack_900);
  func_0x000107266a30(auStack_938);
  FUN_107482af4(auStack_3c8);
  func_0x0001072ca524(auStack_408);
  func_0x000107410c2c(auStack_870);
  func_0x000107266a30(auStack_8a8);
  func_0x000107410c2c(auStack_7e0);
  func_0x000107266a30(auStack_818);
  FUN_107482af4(auStack_328);
  func_0x0001072ca524(auStack_368);
  func_0x000107410c2c(auStack_750);
  func_0x000107266a30(auStack_788);
  FUN_1074335c8(auStack_280);
  FUN_107432d98(auStack_2c8);
  FUN_107482af4(auStack_1d8);
  func_0x0001072ca524(auStack_218);
  func_0x000107410c2c(auStack_6c0);
  func_0x000107266a30(auStack_6f8);
  FUN_107482af4(auStack_138);
  func_0x0001072ca524(auStack_178);
  FUN_107482af4(auStack_98);
  func_0x0001072ca524(auStack_d8);
  func_0x000107410c2c(auStack_630);
  func_0x000107266a30(auStack_668);
  func_0x0001074c8c58();
  func_0x000107266a30(auStack_5d8);
  func_0x0001074c8620(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107266a30(auStack_b78);
  func_0x000107410c2c(auStack_ab0);
  func_0x000107266a30(auStack_ae8);
  FUN_107482af4(auStack_508);
  func_0x0001072ca524(auStack_548);
  do {
    func_0x000107410c2c(auStack_a20);
    func_0x000107266a30(auStack_a58);
    func_0x000107410c2c(auStack_990);
    func_0x000107266a30(auStack_9c8);
    FUN_107482af4(auStack_468);
    func_0x0001072ca524(auStack_4a8);
    func_0x000107410c2c(auStack_900);
    func_0x000107266a30(auStack_938);
    FUN_107482af4(auStack_3c8);
    func_0x0001072ca524(auStack_408);
    func_0x000107410c2c(auStack_870);
    func_0x000107266a30(auStack_8a8);
    func_0x000107410c2c(auStack_7e0);
    func_0x000107266a30(auStack_818);
    FUN_107482af4(auStack_328);
    func_0x0001072ca524(auStack_368);
    func_0x000107410c2c(auStack_750);
    func_0x000107266a30(auStack_788);
    FUN_1074335c8(auStack_280);
    FUN_107432d98(auStack_2c8);
    FUN_107482af4(auStack_1d8);
    func_0x0001072ca524(auStack_218);
    func_0x000107410c2c(auStack_6c0);
    func_0x000107266a30(auStack_6f8);
    FUN_107482af4(auStack_138);
    func_0x0001072ca524(auStack_178);
    FUN_107482af4(auStack_98);
    func_0x0001072ca524(auStack_d8);
    func_0x000107410c2c(auStack_630);
    func_0x000107266a30(auStack_668);
    func_0x0001074c8c58();
    func_0x000107266a30(auStack_5d8);
    func_0x0001074c8820();
  } while( true );
}



/* Entry: 1074ba338; end: 1074ba3af;  */

undefined8 * FUN_1074ba338(undefined8 *param_1)

{
  func_0x0001074c2c08(param_1 + 0x7c);
  func_0x00010730b13c(param_1 + 0x75);
  func_0x00010730b10c(param_1 + 0x71);
  FUN_1074c2d1c(param_1 + 0x6e);
  func_0x0001074c2dfc(param_1 + 0x58);
  func_0x0001074c2dfc(param_1 + 0x42);
  func_0x0001074c2e40(param_1 + 0x21);
  FUN_10748ab6c(param_1 + 0x1e);
  func_0x0001074c2e68(param_1 + 0x1b);
  func_0x0001073db5b8(param_1 + 0x15);
  func_0x0001074c2768(param_1 + 0xc);
  *param_1 = &PTR_DAT_1109b5ab0;
  FUN_1073ad3c4(param_1 + 8);
  func_0x0001073ad4a0(param_1 + 5);
  func_0x0001073ad4c4(param_1 + 3);
  FUN_1073ad37c(param_1 + 1);
  return param_1;
}



/* Entry: 1074ba3b0; end: 1074ba3b3;  */

undefined8 * FUN_1074ba3b0(undefined8 *param_1)

{
  func_0x0001074c2c08(param_1 + 0x7c);
  func_0x00010730b13c(param_1 + 0x75);
  func_0x00010730b10c(param_1 + 0x71);
  FUN_1074c2d1c(param_1 + 0x6e);
  func_0x0001074c2dfc(param_1 + 0x58);
  func_0x0001074c2dfc(param_1 + 0x42);
  func_0x0001074c2e40(param_1 + 0x21);
  FUN_10748ab6c(param_1 + 0x1e);
  func_0x0001074c2e68(param_1 + 0x1b);
  func_0x0001073db5b8(param_1 + 0x15);
  func_0x0001074c2768(param_1 + 0xc);
  *param_1 = &PTR_DAT_1109b5ab0;
  FUN_1073ad3c4(param_1 + 8);
  func_0x0001073ad4a0(param_1 + 5);
  func_0x0001073ad4c4(param_1 + 3);
  FUN_1073ad37c(param_1 + 1);
  return param_1;
}



/* Entry: 1074ba3b4; end: 1074ba3c7;  */

void FUN_1074ba3b4(void)

{
  FUN_1074ba338();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1074ba3c8; end: 1074ba3db;  */

long FUN_1074ba3c8(long param_1)

{
  return *(long *)(param_1 + 0x220) - *(long *)(param_1 + 0x218) >> 8;
}



/* Entry: 1074ba3dc; end: 1074ba443;  */

void FUN_1074ba3dc(long param_1)

{
  undefined1 auStack_d0 [64];
  undefined4 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  FUN_107486f3c(param_1 + 0xf0);
  _bzero(auStack_d0,0xb0);
  uStack_90 = 0x3f800000;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0x3f800000;
  FUN_1074ba444(param_1 + 0x210,auStack_d0);
  func_0x0001074c2dfc(auStack_d0);
  return;
}



/* Entry: 1074ba444; end: 1074ba5ff;  */

void FUN_1074ba444(undefined2 *param_1,undefined2 *param_2)

{
  long lVar1;
  undefined1 uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x19;
  long unaff_x20;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  func_0x0001074c8848();
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  if (param_1 != param_2) {
    lVar4 = *(long *)(unaff_x20 + 8);
    lVar1 = *(long *)(unaff_x20 + 0x10);
    uVar6 = lVar1 - lVar4;
    lVar5 = *(long *)(unaff_x19 + 8);
    if ((ulong)(*(long *)(unaff_x19 + 0x18) - lVar5) < uVar6) {
      lVar8 = (long)uVar6 >> 8;
      if (lVar5 != 0) {
        FUN_1074c3508(unaff_x19 + 8);
        __ZdlPv(*(undefined8 *)(unaff_x19 + 8));
        *(undefined8 *)(unaff_x19 + 8) = 0;
        *(undefined8 *)(unaff_x19 + 0x10) = 0;
        *(undefined8 *)(unaff_x19 + 0x18) = 0;
      }
      uVar6 = unaff_x19 + 8;
      FUN_1074c6f98();
      if (uVar6 >> 0x38 != 0) {
        FUN_1074c7074();
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1074ba5e4);
        (*pcVar3)();
      }
      FUN_1074c7080();
      *(ulong *)(unaff_x19 + 8) = uVar6;
      *(ulong *)(unaff_x19 + 0x10) = uVar6;
      *(ulong *)(unaff_x19 + 0x18) = uVar6 + lVar8 * 0x100;
      lVar5 = lVar4;
    }
    else {
      uVar7 = *(long *)(unaff_x19 + 0x10) - lVar5;
      if (uVar6 <= uVar7) {
        FUN_1074c775c(lVar4,lVar1);
        FUN_1074c3510(unaff_x19 + 8,lVar4);
        goto LAB_1074ba57c;
      }
      lVar5 = lVar4 + uVar7;
      FUN_1074c775c(lVar4,lVar5);
      uVar6 = *(ulong *)(unaff_x19 + 0x10);
    }
    for (; lVar5 != lVar1; lVar5 = lVar5 + 0x100) {
      func_0x0001074c6f10(uVar6,lVar5);
      uVar6 = uVar6 + 0x100;
    }
    func_0x0001074c8c9c();
    func_0x0001074c901c();
    *(ulong *)(unaff_x19 + 0x10) = uVar6;
  }
LAB_1074ba57c:
  func_0x00010749eb0c(unaff_x19 + 0x20,unaff_x20 + 0x20);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x48);
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  lVar4 = *(long *)(unaff_x19 + 0x50);
  *(undefined8 *)(unaff_x19 + 0x50) = uVar10;
  *(undefined8 *)(unaff_x19 + 0x48) = uVar9;
  if (lVar4 != 0) {
    func_0x0001074c86c4();
  }
  *(undefined8 *)(unaff_x19 + 0x60) = *(undefined8 *)(unaff_x19 + 0x58);
  *(undefined8 *)(unaff_x19 + 0x70) = 0;
  uVar2 = *(undefined1 *)(unaff_x20 + 0xa8);
  *(undefined8 *)(unaff_x19 + 0xa0) = *(undefined8 *)(unaff_x20 + 0xa0);
  *(undefined1 *)(unaff_x19 + 0xa8) = uVar2;
  return;
}



/* Entry: 1074ba600; end: 1074bc80f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1074ba600(long param_1,undefined8 param_2,long param_3)

{
  ulong *puVar1;
  int iVar2;
  float ****ppppfVar3;
  int iVar4;
  char cVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined1 auVar8 [4];
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined8 *puVar15;
  undefined4 *puVar16;
  double *pdVar17;
  float *****pppppfVar18;
  float *****pppppfVar19;
  float ******ppppppfVar20;
  int extraout_w8;
  undefined4 *extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  float *****pppppfVar21;
  float *******extraout_x8_02;
  float *****pppppfVar22;
  double extraout_x8_03;
  ulong extraout_x8_04;
  undefined8 extraout_x8_05;
  ulong extraout_x8_06;
  code *extraout_x8_07;
  undefined8 extraout_x8_08;
  float *****extraout_x8_09;
  ulong uVar23;
  undefined8 extraout_x9;
  float ***pppfVar24;
  float *****extraout_x9_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  float ******ppppppfVar25;
  long *extraout_x11;
  ulong uVar26;
  long *extraout_x12;
  long *extraout_x12_00;
  float ******ppppppfVar27;
  float *******extraout_x14;
  float *******extraout_x14_00;
  long lVar28;
  long lVar29;
  long *plVar30;
  float ****ppppfVar31;
  long *plVar32;
  long lVar33;
  float ****ppppfVar34;
  float *****pppppfVar35;
  float *******pppppppfVar36;
  float ******ppppppfVar37;
  float ******unaff_x25;
  float ******unaff_x26;
  float ****ppppfVar38;
  uint uVar39;
  float *******unaff_x27;
  float *****pppppfVar40;
  float ******unaff_x28;
  float ****ppppfVar41;
  undefined4 uVar42;
  float fVar43;
  float fVar44;
  undefined4 uVar45;
  double dVar46;
  ulong uVar47;
  double dVar48;
  undefined8 uVar49;
  undefined1 auVar50 [16];
  undefined4 uVar51;
  float fVar52;
  float *******pppppppfVar53;
  float *******pppppppfVar54;
  float fVar55;
  undefined8 in_d3;
  undefined4 uVar56;
  float fVar57;
  double unaff_d8;
  ulong unaff_d9;
  float fVar58;
  float fVar59;
  double dVar60;
  undefined8 in_stack_00000090;
  float ****ppppfStack_980;
  float ******ppppppfStack_978;
  float *****pppppfStack_970;
  long lStack_968;
  ulong uStack_960;
  undefined8 uStack_958;
  float *****pppppfStack_950;
  float *****pppppfStack_948;
  float *****pppppfStack_940;
  undefined8 uStack_938;
  float *****pppppfStack_930;
  float *****pppppfStack_928;
  float *****pppppfStack_920;
  float *****pppppfStack_918;
  float *****pppppfStack_910;
  undefined8 uStack_908;
  ulong uStack_900;
  double dStack_8f8;
  float ******ppppppfStack_8f0;
  float *******pppppppfStack_8e8;
  float ******ppppppfStack_8e0;
  float ******ppppppfStack_8d8;
  long lStack_8d0;
  ulong uStack_8c8;
  float *******pppppppfStack_8c0;
  undefined8 *puStack_8b8;
  float *****pppppfStack_8b0;
  float *****pppppfStack_8a8;
  undefined8 *puStack_8a0;
  code *pcStack_898;
  undefined1 *puStack_890;
  undefined4 *puStack_888;
  double dStack_880;
  double dStack_878;
  long *plStack_870;
  long lStack_868;
  float *******pppppppfStack_860;
  uint uStack_854;
  float *******pppppppfStack_850;
  float *******pppppppfStack_848;
  float fStack_83c;
  long lStack_838;
  uint uStack_830;
  uint uStack_82c;
  float *******pppppppfStack_828;
  double dStack_820;
  double dStack_818;
  double dStack_810;
  double dStack_808;
  uint uStack_7f4;
  float *******pppppppfStack_7f0;
  ulong *puStack_7e8;
  float *******pppppppfStack_7e0;
  float *******pppppppfStack_7d8;
  float ******ppppppfStack_7d0;
  long lStack_7c8;
  long *plStack_7c0;
  long *plStack_7b8;
  undefined1 auStack_7b0 [32];
  uint uStack_790;
  int iStack_78c;
  int iStack_788;
  undefined4 uStack_784;
  undefined4 uStack_780;
  float *******pppppppfStack_778;
  float *******pppppppfStack_770;
  float ******ppppppfStack_768;
  float *****pppppfStack_760;
  long lStack_758;
  undefined8 *puStack_750;
  undefined1 auStack_744 [4];
  long *plStack_740;
  float *******pppppppfStack_738;
  float *******pppppppfStack_730;
  undefined8 uStack_728;
  undefined4 uStack_720;
  double dStack_710;
  float *******pppppppfStack_708;
  float *******pppppppfStack_700;
  double dStack_6f8;
  undefined4 uStack_6f0;
  long lStack_6e0;
  long lStack_6d8;
  long lStack_6c8;
  long lStack_6c0;
  undefined8 uStack_6b8;
  float ******ppppppfStack_6b0;
  ulong uStack_6a8;
  ulong uStack_6a0;
  float ****appppfStack_698 [3];
  undefined **ppuStack_680;
  undefined8 uStack_678;
  float *******pppppppfStack_670;
  float *******pppppppfStack_668;
  float *******pppppppfStack_660;
  float *******pppppppfStack_650;
  float *******pppppppfStack_648;
  float *******apppppppfStack_640 [2];
  float *******pppppppfStack_630;
  float *******pppppppfStack_628;
  float *******apppppppfStack_620 [2];
  double dStack_610;
  ulong uStack_608;
  undefined1 auStack_600 [56];
  undefined1 auStack_5c8 [56];
  undefined1 auStack_590 [288];
  float *******pppppppfStack_470;
  float *******pppppppfStack_468;
  float *******pppppppfStack_460;
  float *******pppppppfStack_458;
  ulong *puStack_450;
  long lStack_438;
  float *******pppppppfStack_400;
  float *******pppppppfStack_3f8;
  float *******pppppppfStack_3f0;
  float *****pppppfStack_3e8;
  uint uStack_3e0;
  long lStack_3c8;
  undefined1 uStack_3c0;
  float *******apppppppfStack_380 [2];
  float *******pppppppfStack_370;
  float *******pppppppfStack_368;
  float *******pppppppfStack_360;
  float *******pppppppfStack_358;
  float *******pppppppfStack_350;
  float *******pppppppfStack_348;
  undefined1 auStack_340 [8];
  long lStack_338;
  long lStack_330;
  undefined8 uStack_328;
  float ******ppppppfStack_320;
  undefined4 uStack_318;
  undefined1 uStack_314;
  undefined4 uStack_310;
  undefined1 uStack_30c;
  undefined4 uStack_308;
  undefined1 uStack_304;
  float afStack_300 [2];
  long lStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  undefined1 auStack_2c8 [40];
  float ******ppppppfStack_2a0;
  float ****ppppfStack_298;
  long lStack_290;
  undefined8 uStack_288;
  undefined ***pppuStack_280;
  undefined1 uStack_278;
  undefined1 uStack_268;
  float ******ppppppfStack_1f0;
  float *******pppppppfStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  float fStack_1d0;
  float fStack_1cc;
  undefined1 uStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  undefined8 uStack_1b4;
  int iStack_1ac;
  undefined1 uStack_1a8;
  long lStack_d0;
  char cStack_c0;
  undefined8 uStack_60;
  ulong uStack_58;
  long lStack_50;
  long lStack_48;
  ulong uStack_40;
  byte bStack_28;
  undefined8 uStack_18;
  
  uVar56 = (undefined4)((ulong)in_d3 >> 0x20);
  uVar45 = (undefined4)in_d3;
  func_0x0001074c9218();
  lVar28 = param_1;
  puStack_888 = extraout_x8;
  lStack_868 = param_3;
  func_0x0001074c8688();
  uStack_678 = *(undefined8 *)(lVar28 + 0xa0);
  ppuStack_680 = &PTR_DAT_1109b27e0;
  uStack_18 = extraout_x8_00;
  FUN_10745f750(appppfStack_698,*(undefined8 *)(lVar28 + 0xd0));
  FUN_107486f3c(param_1 + 0xf0);
  ppppppfStack_6b0 = (float ******)0x0;
  uStack_6a8 = 0;
  uStack_6a0 = 0;
  lStack_6c8 = 0;
  lStack_6c0 = 0;
  uStack_6b8 = 0;
  lVar28 = param_1 + 0xa8;
  func_0x0001074c9014(*(undefined8 *)(param_1 + 0x18));
  plVar30 = *(long **)(param_1 + 0x108);
  plStack_870 = *(long **)(param_1 + 0x110);
  puStack_7e8 = &uStack_6a0;
  auVar50 = NEON_fmov(0x3fe0000000000000,8);
  dStack_878 = auVar50._8_8_;
  dStack_880 = auVar50._0_8_;
  uStack_854 = 0x3d4ccccd;
  auVar50 = NEON_fmov(0x3ff0000000000000,8);
  dStack_818 = auVar50._8_8_;
  dStack_820 = auVar50._0_8_;
  lStack_838 = lVar28;
  lStack_7c8 = param_1;
  while (plVar30 != plStack_870) {
    lStack_6e0 = plVar30[2];
    lStack_6d8 = plVar30[3];
    if (plVar30[3] != 0) {
      do {
        func_0x0001074c8654();
        plVar30 = extraout_x11;
      } while (extraout_w10 != 0);
    }
    uVar23 = *(ulong *)(param_1 + 0x120);
    unaff_d8 = (double)(ulong)*(uint *)(param_1 + 0x128);
    unaff_d9 = (ulong)*(uint *)(param_1 + 300);
    uStack_7f4 = (uint)*(byte *)(param_1 + 0x130);
    fVar59 = *(float *)(param_1 + 0x174);
    lVar28 = *plVar30;
    lVar29 = plVar30[1];
    uStack_790 = (uint)lVar28;
    iStack_78c = (int)((ulong)lVar28 >> 0x20);
    iStack_788 = (int)lVar29;
    uStack_784 = (undefined4)((ulong)lVar29 >> 0x20);
    if (lVar29 != 0) {
      plVar32 = (long *)(lVar29 + 8);
      do {
        cVar5 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar32,0x10);
        if (bVar10) {
          *plVar32 = *plVar32 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar32 = (long *)0x0;
    pppppppfVar36 = (float *******)0x0;
    pppppppfVar53 = (float *******)(ulong)(uint)(float)(uVar23 & 0xffffffff);
    pppppppfStack_860 = (float *******)(double)fVar59;
    auVar50._0_8_ = uVar23 & 0xffffffff;
    auVar50._8_4_ = (int)(uVar23 >> 0x20);
    auVar50._12_4_ = 0;
    auVar50 = NEON_ucvtf(auVar50,8);
    dStack_810 = auVar50._0_8_ * dStack_880;
    dStack_808 = auVar50._8_8_ * dStack_878;
    unaff_x27 = (float *******)((*(long *)(lVar28 + 0x30) - *(long *)(lVar28 + 0x28)) / 0xa0);
    fStack_83c = 2.0 / (float)(uVar23 & 0xffffffff);
    pppppppfStack_828 = unaff_x27;
    ppppppfStack_7d0 = (float ******)plVar30;
    for (; pppppppfVar36 != unaff_x27; pppppppfVar36 = (float *******)((long)pppppppfVar36 + 1)) {
      uVar23 = CONCAT44(iStack_78c,uStack_790);
      FUN_1074bf230(uVar23,pppppppfVar36,*(undefined8 *)(param_1 + 0x98));
      if ((uVar23 & 1) == 0) {
        lVar29 = *(long *)(CONCAT44(iStack_78c,uStack_790) + 0x28);
        lVar28 = *(long *)(CONCAT44(iStack_78c,uStack_790) + 0x40);
        func_0x0001078696e8(&ppppppfStack_768);
        plVar30 = (long *)(lVar29 + (long)pppppppfVar36 * 0xa0);
        (**(code **)(*plVar30 + 0x30))(plVar30);
        func_0x00010726236c(&uStack_60);
        if (bStack_28 == 1) {
          func_0x00010729807c(&ppppppfStack_1f0,*(long *)(param_1 + 0x18) + 0x78);
          if ((bStack_28 & 1) == 0) {
            func_0x000104bdc2c8();
            goto LAB_1074bc494;
          }
          func_0x000104c2fe00(apppppppfStack_380,&uStack_60);
          FUN_10750a094(lStack_838,&ppppppfStack_768,&ppppppfStack_1f0,apppppppfStack_380);
          func_0x000104c2f714(apppppppfStack_380);
          func_0x0001074c8ca8();
        }
        func_0x0001077512dc(unaff_d8,apppppppfStack_380);
        uVar51 = SUB84(pppppppfVar53,0);
        dStack_710 = (double)plVar30[6];
        pppppppfStack_708 = (float *******)plVar30[7];
        if (plVar30[7] != 0) {
          do {
            func_0x0001074c8654();
            uVar51 = SUB84(pppppppfVar53,0);
          } while (extraout_w10_00 != 0);
        }
        func_0x0001074c8b7c(*(undefined8 *)(param_1 + 0x18),&pppppppfStack_470);
        func_0x0001074c8ab0(*(undefined8 *)(param_1 + 0x18));
        func_0x0001074c90dc();
        func_0x0001073c4f74();
        func_0x000107751444(apppppppfStack_380,&dStack_710,&pppppppfStack_400);
        ppppppfStack_2a0 = (float ******)&ppppppfStack_768;
        ppppfStack_298 = (float ****)appppfStack_698;
        lStack_290 = *(long *)(param_1 + 0x98) + 0x70;
        pppuStack_280 = &ppuStack_680;
        func_0x000107751334(&ppppppfStack_1f0,apppppppfStack_380);
        func_0x000107267e8c(&pppppppfStack_400);
        func_0x000107267eac(&pppppppfStack_470);
        func_0x000107267e44(&dStack_710);
        func_0x000107267da8(apppppppfStack_380);
        func_0x0001074c8aa0(*(undefined8 *)(*(long *)(param_1 + 8) + 8));
        pppppppfStack_400 = (float *******)0x0;
        uVar42 = FUN_1073f62c0(extraout_x8_01 + 0xa50,&ppppppfStack_1f0,apppppppfStack_380,
                               &pppppppfStack_400);
        unaff_x25 = (float ******)(lVar28 + (long)pppppppfVar36 * 0x100);
        *(undefined4 *)(unaff_x25 + 0x15) = uVar42;
        *(undefined4 *)((long)unaff_x25 + 0xac) = uVar51;
        plStack_7c0 = plVar32;
        plStack_7b8 = plVar30;
        func_0x0001074c8ac8();
        *(float *)((long)unaff_x25 + 0xac) = -*(float *)((long)unaff_x25 + 0xac);
        lVar29 = ((long)unaff_x25[10] - (long)unaff_x25[9]) / 0x1a8;
        lVar28 = 0;
        if ((*(byte *)((long)unaff_x25 + 0xf9) & 1) == 0) {
          for (; lVar29 != lVar28; lVar28 = lVar28 + 1) {
            func_0x0001074c87d0();
          }
        }
        else {
          lVar33 = 0x10;
          for (; lVar29 != lVar28; lVar28 = lVar28 + 1) {
            if ((*(byte *)((long)*unaff_x25 + lVar33) & 1) == 0) {
              func_0x0001074c87d0();
            }
            lVar33 = lVar33 + 0x18;
          }
          lVar33 = 0x10;
          for (lVar28 = 0; lVar29 != lVar28; lVar28 = lVar28 + 1) {
            if (*(char *)((long)*unaff_x25 + lVar33) == '\x01') {
              func_0x0001074c87d0();
            }
            lVar33 = lVar33 + 0x18;
          }
        }
        pppppppfStack_708 = (float *******)0x0;
        dStack_710 = 0.0;
        dStack_6f8 = 0.0;
        pppppppfStack_700 = (float *******)0x0;
        plVar30 = plStack_7b8;
        FUN_1074bd21c(plStack_7b8,CONCAT44(iStack_78c,uStack_790) + 0x164,unaff_x25 + 0x15);
        iVar2 = (int)plVar30 >> 0x10;
        if (fVar59 == 0.0) {
          apppppppfStack_380[0] = (float *******)(double)(int)(short)plVar30;
          apppppppfStack_380[1] = (float *******)(double)iVar2;
          func_0x0001074c8f68(&dStack_710,apppppppfStack_380);
          pppppppfStack_7d8 = (float *******)((ulong)pppppppfStack_7d8 & 0xffffffff00000000);
        }
        else {
          iVar4 = 1 << (ulong)(*(byte *)((long)ppppppfStack_7d0 + 0x2c) & 0x1f);
          fVar44 = (float)iVar4;
          pppppppfVar53 = (float *******)((1.0 / (double)iVar4) * 0.0001220703125);
          pppppppfVar54 = (float *******)NEON_ucvtf(ppppppfStack_7d0[6],4);
          apppppppfStack_380[0] = (float *******)(double)(SUB84(pppppppfVar54,0) / fVar44);
          apppppppfStack_380[1] =
               (float *******)(double)((float)((ulong)pppppppfVar54 >> 0x20) / fVar44);
          ppppppfVar37 = (float ******)(double)(int)(short)plVar30;
          dVar48 = (double)iVar2;
          pppppppfStack_400 = (float *******)ppppppfVar37;
          pppppppfStack_3f8 = (float *******)dVar48;
          pppppppfStack_370 = pppppppfVar53;
          pppppppfStack_368 = pppppppfVar53;
          pppppppfStack_630 = (float *******)FUN_1074183c4(&pppppppfStack_400,apppppppfStack_380);
          pppppppfStack_400 = (float *******)(double)(float)*(undefined8 *)(param_1 + 0x1f8);
          pppppppfStack_3f8 =
               (float *******)(double)(float)((ulong)*(undefined8 *)(param_1 + 0x1f8) >> 0x20);
          pppppppfStack_3f0 = (float *******)(double)*(float *)(param_1 + 0x200);
          pppppppfStack_628 = pppppppfVar53;
          apppppppfStack_620[0] = pppppppfVar54;
          dVar46 = (double)FUN_1074186d8(&pppppppfStack_630,&pppppppfStack_400);
          pppppppfStack_7d8 =
               (float *******)
               CONCAT44(pppppppfStack_7d8._4_4_,
                        (uint)(dVar46 + (double)*(float *)(param_1 + 0x204) < 0.0));
          pppppppfStack_3f8 = pppppppfStack_628;
          pppppppfStack_400 = pppppppfStack_630;
          pppppppfStack_3f0 = apppppppfStack_620[0];
          pppppfStack_3e8 = (float *****)0x3ff0000000000000;
          pppppppfVar53 = pppppppfStack_630;
          func_0x000107877358(&dStack_710,&pppppppfStack_400,param_1 + 0x178);
          if (fVar59 != 1.0) {
            pppppppfStack_470 = (float *******)ppppppfVar37;
            pppppppfStack_468 = (float *******)dVar48;
            func_0x0001074c90dc();
            func_0x0001074c8f68();
            plStack_740 = (long *)FUN_1074b3ab8(&dStack_710,&pppppppfStack_400);
            uStack_728 = CONCAT44(uVar56,uVar45);
            pppppppfStack_650 = pppppppfStack_860;
            pppppppfStack_738 = pppppppfVar53;
            pppppppfStack_730 = pppppppfVar54;
            pppppppfStack_470 = (float *******)func_0x00010740c758(&plStack_740,&pppppppfStack_650);
            pppppppfStack_458 = (float *******)CONCAT44(uVar56,uVar45);
            pppppppfStack_468 = pppppppfVar53;
            pppppppfStack_460 = pppppppfVar54;
            func_0x0001074c90dc();
            dStack_710 = (double)func_0x00010740c72c();
            dStack_6f8 = (double)CONCAT44(uVar56,uVar45);
            pppppppfStack_708 = pppppppfVar53;
            pppppppfStack_700 = pppppppfVar54;
          }
        }
        dVar46 = dStack_6f8;
        pppppppfVar53 = pppppppfStack_708;
        plVar30 = (long *)0x0;
        cVar5 = *(char *)((long)unaff_x25 + 0xf9);
        plStack_740 = (long *)0x0;
        pppppppfStack_738 = (float *******)0x0;
        pppppppfStack_730 = (float *******)0x0;
        pppppppfStack_628 = (float *******)0x0;
        pppppppfStack_630 = (float *******)0x0;
        apppppppfStack_620[0] = (float *******)0x0;
        unaff_x26 = (float ******)(((long)unaff_x25[10] - (long)unaff_x25[9]) / 0x1a8);
        if (cVar5 == '\x01') {
          if (unaff_x25[10] != unaff_x25[9]) {
            if ((ulong)unaff_x26 >> 0x3b != 0) {
              FUN_1074c4c84();
LAB_1074bc494:
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x1074bc498);
              (*pcVar9)();
            }
            plVar30 = (long *)((long)unaff_x26 * 0x20);
            __Znwm();
            pppppppfStack_730 = (float *******)(plVar30 + (long)unaff_x26 * 4);
            for (lVar28 = 0; plStack_740 = plVar30, (long)unaff_x26 * 0x20 - lVar28 != 0;
                lVar28 = lVar28 + 0x20) {
              puVar15 = (undefined8 *)((long)plVar30 + lVar28);
              puVar15[1] = 0;
              *puVar15 = 0;
              puVar15[3] = 0;
              puVar15[2] = 0;
            }
          }
          plVar30 = plStack_740;
          pppppppfStack_738 = pppppppfStack_730;
          func_0x000104bec9f0(&pppppppfStack_630,unaff_x26,0);
        }
        lVar28 = 0;
        pppppppfVar53 = (float *******)((double)pppppppfVar53 / dVar46);
        lVar29 = 0x10;
        pppppppfStack_7f0 = pppppppfVar36;
        pppppppfStack_7e0 = (float *******)plVar30;
        for (ppppppfVar37 = (float ******)0x0; unaff_x26 != ppppppfVar37;
            ppppppfVar37 = (float ******)((long)ppppppfVar37 + 1)) {
          if ((*(byte *)((long)*unaff_x25 + lVar29) & 1) == 0) {
            lVar33 = (long)unaff_x25[9] + lVar28;
            puVar15 = *(undefined8 **)(lStack_7c8 + 0x98);
            func_0x00010747b8f8(puVar15,lVar33 + 8);
            if (puVar15 != (undefined8 *)0x0) {
              puVar16 = (undefined4 *)*puVar15;
              func_0x00010778196c();
              func_0x0001074c88f0(lVar33,0,*puVar16,puVar16[1]);
              FUN_1074bf2b8();
              if (cVar5 != '\0') {
                puVar16 = (undefined4 *)*puVar15;
                func_0x00010778196c();
                func_0x0001074c88f0(apppppppfStack_380,lVar33,0,*puVar16,puVar16[1]);
                FUN_1074bf40c();
                plVar30[1] = (long)apppppppfStack_380[1];
                *plVar30 = (long)apppppppfStack_380[0];
                plVar30[3] = (long)pppppppfStack_368;
                plVar30[2] = (long)pppppppfStack_370;
                uVar23 = (ulong)ppppppfVar37 >> 3 & 0x1ffffffffffffff8;
                *(ulong *)((long)pppppppfStack_630 + uVar23) =
                     *(ulong *)((long)pppppppfStack_630 + uVar23) |
                     1L << ((ulong)ppppppfVar37 & 0x3f);
                pppppppfVar53 = pppppppfStack_370;
              }
            }
          }
          plVar30 = plVar30 + 4;
          lVar28 = lVar28 + 0x1a8;
          lVar29 = lVar29 + 0x18;
        }
        if (cVar5 != '\0') {
          lVar29 = 0;
          lVar28 = 0;
          for (ppppppfVar37 = unaff_x26; ppppppfVar37 != (float ******)0x0;
              ppppppfVar37 = (float ******)((long)ppppppfVar37 - 1)) {
            pppppfVar40 = *unaff_x25;
            puVar1 = (ulong *)((long)pppppfVar40 + lVar29);
            if (((char)puVar1[2] == '\x01') &&
               (uVar23 = *puVar1,
               ((ulong)pppppppfStack_630[uVar23 >> 6] >> (uVar23 & 0x3f) & 1) != 0)) {
              pppppfVar21 = unaff_x25[9];
              puVar15 = *(undefined8 **)(lStack_7c8 + 0x98);
              func_0x00010747b8f8(puVar15,(long)pppppfVar21 + lVar28 + 8);
              if (puVar15 != (undefined8 *)0x0) {
                plVar30 = (long *)((long)pppppfVar40 + lVar29);
                lVar33 = *plVar30;
                FUN_1074bf51c(pppppppfStack_7e0 + lVar33 * 4,(char)plVar30[1]);
                pppppfVar40 = unaff_x25[9];
                puVar16 = (undefined4 *)*puVar15;
                func_0x00010778196c();
                func_0x0001074c88f0((long)pppppfVar21 + lVar28,pppppfVar40 + lVar33 * 0x35,*puVar16,
                                    puVar16[1]);
                FUN_1074bf2b8();
              }
            }
            lVar28 = lVar28 + 0x1a8;
            lVar29 = lVar29 + 0x18;
          }
        }
        param_1 = lStack_7c8;
        lVar28 = *(long *)(lStack_7c8 + 0x18);
        if (*(int *)(lVar28 + 0x340) == 0) {
          uVar23 = 0;
        }
        else if (*(int *)(lVar28 + 0x340) == 1) {
          uVar23 = (ulong)*(uint *)(lVar28 + 0x310);
        }
        else {
          func_0x0001074c8aa0();
          uVar23 = func_0x0001074c8884();
          func_0x0001074c8ac8();
          lVar28 = *(long *)(param_1 + 0x18);
        }
        if (*(int *)(lVar28 + 0x378) == 0) {
          pppppppfVar36 = (float *******)(ulong)uStack_854;
        }
        else if (*(int *)(lVar28 + 0x378) == 1) {
          pppppppfVar36 = (float *******)(ulong)*(uint *)(lVar28 + 0x348);
        }
        else {
          func_0x0001074c8aa0();
          pppppppfVar36 = (float *******)func_0x0001074c8884();
          func_0x0001074c8ac8();
          lVar28 = *(long *)(param_1 + 0x18);
        }
        if (*(int *)(lVar28 + 0x308) == 0) {
          uVar47 = 0;
        }
        else if (*(int *)(lVar28 + 0x308) == 1) {
          uVar47 = (ulong)*(uint *)(lVar28 + 0x2d8);
        }
        else {
          func_0x0001074c8aa0();
          uVar47 = func_0x0001074c8884();
          func_0x0001074c8ac8();
        }
        pppppppfStack_648 = (float *******)0x0;
        pppppppfStack_650 = (float *******)0x0;
        apppppppfStack_640[0] = (float *******)0x0;
        unaff_x25[0x10] = unaff_x25[0xf];
        for (ppppppfVar37 = (float ******)0x0; plVar30 = plStack_7b8, ppppppfVar37 != unaff_x26;
            ppppppfVar37 = (float ******)((long)ppppppfVar37 + 1)) {
          pppppfVar40 = unaff_x25[9];
          if ((((*(char *)((long)pppppfVar40 + ((long)ppppppfVar37 * 0x6a + 0x15) * 4) == '\x01') &&
               (*(char *)(pppppfVar40 + (long)ppppppfVar37 * 0x35 + 0xd) == '\x01')) &&
              (*(char *)((long)pppppfVar40 + ((long)ppppppfVar37 * 0x6a + 0x1f) * 4) == '\x01')) &&
             (*(float *)((long)pppppfVar40 + ((long)ppppppfVar37 * 0x6a + 0x47) * 4) != 0.0)) {
            if ((uStack_7f4 != 0) && (((ulong)(*unaff_x25)[(long)ppppppfVar37 * 3 + 2] & 1) == 0)) {
              pppppppfStack_7e0 = (float *******)CONCAT44(pppppppfStack_7e0._4_4_,(int)uVar47);
              uStack_830 = (uint)uVar23;
              uStack_82c = (uint)pppppppfVar36;
              FUN_1074bd284(pppppfVar40 + (long)ppppppfVar37 * 0x35 + 0xb);
              fVar52 = *(float *)(pppppfVar40 + (long)ppppppfVar37 * 0x35 + 0xc);
              fVar43 = *(float *)((long)pppppfVar40 + ((long)ppppppfVar37 * 0x6a + 0x19) * 4);
              fVar55 = *(float *)(pppppfVar40 + (long)ppppppfVar37 * 0x35 + 0xb);
              fVar57 = *(float *)((long)pppppfVar40 + ((long)ppppppfVar37 * 0x6a + 0x17) * 4);
              fVar44 = fVar55;
              if (fVar52 <= fVar55) {
                fVar44 = fVar52;
              }
              fVar58 = -fVar43;
              if (fVar43 <= fVar57) {
                fVar58 = -fVar57;
              }
              if (fVar55 <= fVar52) {
                fVar55 = fVar52;
              }
              fVar52 = -fVar43;
              if (fVar57 <= fVar43) {
                fVar52 = -fVar57;
              }
              if (pppppppfStack_648 < apppppppfStack_640[0]) {
                *(float *)pppppppfStack_648 = fVar44;
                *(float *)((long)pppppppfStack_648 + 4) = fVar58;
                *(float *)(pppppppfStack_648 + 1) = fVar55;
                *(float *)((long)pppppppfStack_648 + 0xc) = fVar52;
                pppppppfStack_648 = pppppppfStack_648 + 2;
              }
              else {
                pppppppfVar36 = (float *******)&pppppppfStack_650;
                FUN_1074c5038(pppppppfVar36,
                              ((long)pppppppfStack_648 - (long)pppppppfStack_650 >> 4) + 1);
                FUN_1074c5060(apppppppfStack_380,pppppppfVar36,
                              (long)pppppppfStack_648 - (long)pppppppfStack_650 >> 4,
                              apppppppfStack_640);
                *(float *)pppppppfStack_370 = fVar44;
                *(float *)((long)pppppppfStack_370 + 4) = fVar58;
                *(float *)(pppppppfStack_370 + 1) = fVar55;
                *(float *)((long)pppppppfStack_370 + 0xc) = fVar52;
                pppppppfStack_370 = pppppppfStack_370 + 2;
                pppppppfVar53 =
                     (float *******)
                     ((long)apppppppfStack_380[1] -
                     ((long)pppppppfStack_648 - (long)pppppppfStack_650));
                _memcpy(pppppppfVar53);
                pppppppfVar36 = apppppppfStack_640[0];
                pppppppfStack_848 = pppppppfStack_368;
                pppppppfStack_850 = pppppppfStack_370;
                apppppppfStack_640[0] = pppppppfStack_368;
                pppppppfStack_648 = pppppppfStack_370;
                pppppppfStack_370 = pppppppfStack_650;
                pppppppfStack_368 = pppppppfVar36;
                apppppppfStack_380[1] = pppppppfStack_650;
                apppppppfStack_380[0] = pppppppfStack_650;
                pppppppfStack_650 = pppppppfVar53;
                func_0x0001074c5090(apppppppfStack_380);
                pppppppfStack_648 = pppppppfStack_850;
              }
              uVar23 = (ulong)uStack_830;
              pppppppfVar36 = (float *******)(ulong)uStack_82c;
              uVar47 = (ulong)pppppppfStack_7e0 & 0xffffffff;
            }
            cVar5 = *(char *)((long)unaff_x25[0x19] + (long)ppppppfVar37);
            FUN_1073c66a4(pppppfVar40[(long)ppppppfVar37 * 0x35 + 0x31]);
            ppppfVar41 = pppppfVar40[(long)ppppppfVar37 * 0x35 + 0x31];
            func_0x0001074c9024();
            auVar50 = *(undefined1 (*) [16])
                       ((long)pppppfVar40 + ((long)ppppppfVar37 * 0x6a + 0x11) * 4);
            uVar45 = SUB84(dStack_810,0);
            uVar56 = (undefined4)((ulong)dStack_810 >> 0x20);
            apppppppfStack_380[0] =
                 (float *******)(long)(dStack_810 * ((double)auVar50._0_4_ + dStack_820));
            apppppppfStack_380[1] =
                 (float *******)(long)(dStack_808 * ((double)auVar50._12_4_ + dStack_818));
            pppppppfVar53 = (float *******)(long)(dStack_810 * ((double)auVar50._8_4_ + dStack_820))
            ;
            pppppppfStack_368 =
                 (float *******)(long)(dStack_808 * ((double)auVar50._4_4_ + dStack_818));
            pppppppfStack_370 = pppppppfVar53;
            pppppppfStack_360 = apppppppfStack_380[0];
            pppppppfStack_358 = pppppppfStack_368;
            pppppppfStack_350 = pppppppfVar53;
            pppppppfStack_348 = apppppppfStack_380[1];
            func_0x0001074c9190();
            pppppppfStack_468 = (float *******)((ulong)pppppppfStack_468 & 0xffffffffffffff00);
            pppppppfStack_470 = extraout_x8_02;
            FUN_1074b35e0(&pppppppfStack_400,4);
            for (lVar28 = 0; lVar28 != 0x40; lVar28 = lVar28 + 0x10) {
              ppppppfVar20 = *(float *******)((long)apppppppfStack_380 + lVar28);
              pppppppfStack_3f8[1] = *(float *******)((long)apppppppfStack_380 + lVar28 + 8);
              *pppppppfStack_3f8 = ppppppfVar20;
              pppppppfStack_3f8 = pppppppfStack_3f8 + 2;
            }
            pppppppfStack_468 = (float *******)CONCAT71(pppppppfStack_468._1_7_,1);
            func_0x0001074b3614(&pppppppfStack_470);
            FUN_1074c7284(ppppfVar41,&pppppppfStack_400);
            func_0x0001073c66e0(&pppppppfStack_400);
            func_0x0001074c9024();
            fVar44 = -*(float *)(pppppfVar40 + (long)ppppppfVar37 * 0x35 + 9);
            if (cVar5 != '\x02') {
              fVar55 = *(float *)(pppppfVar40 + (long)ppppppfVar37 * 0x35 + 10);
              pppppppfVar53 = (float *******)(ulong)(uint)fVar55;
              if (cVar5 == '\x01') {
                pppppppfVar53 = (float *******)0x3f000000;
                fVar44 = (fVar44 - fVar55) * 0.5;
              }
              else {
                fVar44 = -fVar55;
              }
            }
            apppppppfStack_380[0] = (float *******)CONCAT44(apppppppfStack_380[0]._4_4_,fVar44);
            func_0x0001074c8f90();
          }
          else {
            apppppppfStack_380[0] = (float *******)CONCAT44(apppppppfStack_380[0]._4_4_,0x7f7fffff);
            func_0x0001074c8f90();
          }
        }
        pppppppfStack_400 = (float *******)((ulong)pppppppfStack_400 & 0xffffffffffffff00);
        uStack_3c0 = 0;
        if (pppppppfStack_650 != pppppppfStack_648) {
          uStack_608 = plStack_7b8[7];
          dStack_610 = (double)plStack_7b8[6];
          dVar46 = dStack_710;
          pppppppfVar53 = pppppppfStack_708;
          dVar48 = dStack_6f8;
          if (plStack_7b8[7] != 0) {
            do {
              dVar48 = (double)func_0x0001074c8654();
            } while (extraout_w10_01 != 0);
          }
          pppppppfStack_470 =
               (float *******)
               CONCAT44((float)((double)pppppppfVar53 / dVar48),(float)(dVar46 / dVar48));
          FUN_1074d4f2c(uVar23,pppppppfVar36,uVar47,apppppppfStack_380,&dStack_610,
                        &pppppppfStack_470,&pppppppfStack_650);
          func_0x000107267e44(&dStack_610);
          lVar28 = lStack_6c0 - lStack_6c8;
          func_0x000104c2fe00(&pppppppfStack_470,&uStack_328);
          lStack_438 = lVar28 / 0x98;
          func_0x0001074c90dc(uStack_3c0);
          if (extraout_w8 == 1) {
            func_0x000104c2f1f0();
            lStack_3c8 = lStack_438;
            pppppppfVar53 = pppppppfVar36;
          }
          else {
            FUN_1074c50e0();
            pppppppfVar53 = pppppppfVar36;
          }
          func_0x000104c2f714(&pppppppfStack_470);
          FUN_1074c683c(&lStack_6c8,apppppppfStack_380);
          func_0x00010748be00(apppppppfStack_380);
        }
        lVar28 = *(long *)(CONCAT44(iStack_78c,uStack_790) + 0x58);
        apppppppfStack_380[0] = (float *******)0x0;
        FUN_1074c736c(apppppppfStack_380,plVar30 + 0xb);
        puVar15 = (undefined8 *)(lVar28 + (long)pppppppfStack_7f0 * 0x10);
        pppppppfStack_7e0 = apppppppfStack_380[0];
        for (unaff_x28 = (float ******)0x0; unaff_x28 != unaff_x26;
            unaff_x28 = (float ******)((long)unaff_x28 + 1)) {
          pppppfVar40 = unaff_x25[0x1c];
          FUN_1074bf5bc(pppppfVar40,unaff_x25[9] + (long)unaff_x28 * 0x35,unaff_x28,
                        *(undefined8 *)(param_1 + 0x98));
          plVar30 = plStack_7b8;
          if (((ulong)pppppfVar40 & 1) != 0) {
            lVar33 = plStack_7b8[8];
            pppppppfStack_668 = (float *******)0x0;
            pppppppfStack_670 = (float *******)0x0;
            pppppppfStack_660 = (float *******)0x0;
            FUN_1073bf8d4(&pppppppfStack_670,
                          (((long *)plStack_7b8[0xb])[1] - *(long *)plStack_7b8[0xb]) / 0x38);
            lVar29 = ((long *)plVar30[0xb])[1];
            for (lVar28 = *(long *)plVar30[0xb]; lVar28 != lVar29; lVar28 = lVar28 + 0x38) {
              func_0x00010724ef84(apppppppfStack_380,lVar28);
              pppppppfStack_470 = (float *******)0x0;
              FUN_1074b019c(&pppppppfStack_470,apppppppfStack_380);
              FUN_1074b019c(&pppppppfStack_470,lVar33 + (long)unaff_x28 * 0x88);
              pppppppfStack_778 = pppppppfStack_470;
              func_0x0001057f9264(&pppppppfStack_670,&pppppppfStack_778);
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                        (apppppppfStack_380);
            }
            if (pppppppfStack_670 == pppppppfStack_668) {
              uVar23 = 0;
              auStack_340[0] = 0;
            }
            else {
              uVar23 = ((long)pppppppfStack_668 - (long)pppppppfStack_670 >> 3) + 0x9e3779b97f4a7c15
              ;
              for (pppppppfVar36 = pppppppfStack_670; pppppppfVar36 != pppppppfStack_668;
                  pppppppfVar36 = pppppppfVar36 + 1) {
                uVar23 = uVar23 * 0x1000 + -0x61c8864680b583eb + (uVar23 >> 4) +
                         (long)*pppppppfVar36 ^ uVar23;
              }
              plStack_7c0 = (long *)(uVar23 + 0x9e3779b97f4a7c15 >> 8);
              uVar23 = uVar23 + 0x9e3779b97f4a7c15 & 0xff;
              auStack_340[0] = 1;
            }
            lStack_2f8 = CONCAT44(iStack_78c,uStack_790);
            lStack_2f0 = CONCAT44(uStack_784,iStack_788);
            apppppppfStack_380[0] =
                 (float *******)
                 CONCAT44(apppppppfStack_380[0]._4_4_,*(undefined4 *)(lStack_2f8 + 0x18));
            apppppppfStack_380[1] = (float *******)ppppppfStack_7d0[4];
            pppppppfStack_370 =
                 (float *******)CONCAT71(pppppppfStack_370._1_7_,(char)ppppppfStack_7d0[0x18]);
            pppppppfStack_368 = pppppppfStack_7e0;
            pppppppfStack_360 = pppppppfStack_670;
            pppppppfStack_358 = pppppppfStack_668;
            pppppppfStack_350 = pppppppfStack_660;
            pppppppfStack_660 = (float *******)0x0;
            pppppppfStack_668 = (float *******)0x0;
            pppppppfStack_670 = (float *******)0x0;
            pppppppfStack_348 = (float *******)(uVar23 | (long)plStack_7c0 << 8);
            lStack_338 = (long)ppppppfStack_7d0[5];
            lStack_330 = (long)ppppppfStack_7d0[6];
            pppppppfVar36 = (float *******)apppppppfStack_380;
            uStack_328 = *puVar15;
            uStack_314 = *(undefined1 *)((long)puVar15 + 0xc);
            uStack_318 = *(undefined4 *)(puVar15 + 1);
            lVar28 = plStack_7b8[8] + (long)unaff_x28 * 0x88;
            uStack_30c = *(undefined1 *)(lVar28 + 0x6c);
            uStack_310 = *(undefined4 *)(lVar28 + 0x68);
            lVar28 = plStack_7b8[8] + (long)unaff_x28 * 0x88;
            uStack_304 = *(undefined1 *)(lVar28 + 0x74);
            uStack_308 = *(undefined4 *)(lVar28 + 0x70);
            afStack_300[0] = *(float *)((long)unaff_x25[0xf] + (long)unaff_x28 * 4);
            ppppppfVar37 = ppppppfStack_7d0;
            ppppppfStack_320 = unaff_x28;
            if (lStack_2f0 != 0) {
              do {
                func_0x0001074c8654();
                ppppppfVar37 = (float ******)extraout_x12;
                pppppppfVar36 = extraout_x14;
              } while (extraout_w10_02 != 0);
            }
            lStack_2e0 = lStack_6d8;
            lStack_2e8 = lStack_6e0;
            if (lStack_6d8 != 0) {
              do {
                func_0x0001074c8654();
                ppppppfVar37 = (float ******)extraout_x12_00;
                pppppppfVar36 = extraout_x14_00;
              } while (extraout_w10_03 != 0);
            }
            lStack_2d8 = (long)ppppppfVar37[7];
            func_0x0001074c5120(pppppppfVar36 + 0x16,&pppppppfStack_400);
            uStack_288 = CONCAT71(uStack_288._1_7_,(char)pppppppfStack_7d8);
            if (uStack_6a8 < uStack_6a0) {
              func_0x0001074c70b0(uStack_6a8,apppppppfStack_380);
              uVar23 = uStack_6a8 + 0x100;
            }
            else {
              pppppppfVar36 = &ppppppfStack_6b0;
              lVar28 = ((long)(uStack_6a8 - (long)ppppppfStack_6b0) >> 8) + 1;
              FUN_1074c6f98();
              uVar23 = uStack_6a8;
              ppppppfVar37 = ppppppfStack_6b0;
              puStack_450 = puStack_7e8;
              if (pppppppfVar36 == (float *******)0x0) {
                lVar28 = 0;
              }
              else {
                func_0x0001074c7080();
              }
              pppppppfVar54 = (float *******)((long)pppppppfVar36 + (uVar23 - (long)ppppppfVar37));
              pppppppfStack_458 = pppppppfVar36 + lVar28 * 0x20;
              pppppppfStack_470 = pppppppfVar36;
              pppppppfStack_468 = pppppppfVar54;
              func_0x0001074c70b0(pppppppfVar54,apppppppfStack_380);
              pppppppfStack_460 = pppppppfVar54 + 0x20;
              FUN_1074c6fd8(&ppppppfStack_6b0,&pppppppfStack_470);
              uVar23 = uStack_6a8;
              func_0x0001074c7188(&pppppppfStack_470);
            }
            uStack_6a8 = uVar23;
            func_0x0001074c51b0(apppppppfStack_380);
            func_0x0001057f951c(&pppppppfStack_670);
          }
        }
        func_0x0001074c5184(&pppppppfStack_400);
        func_0x00010748be30(&pppppppfStack_650);
        func_0x000104be7d74(&pppppppfStack_630);
        func_0x0001074c51ec(&plStack_740);
        func_0x000107267da8(&ppppppfStack_1f0);
        func_0x00010724b3d8(&uStack_60);
        func_0x00010726b264(&ppppppfStack_768);
        plVar32 = plStack_7c0;
        pppppppfVar36 = pppppppfStack_7f0;
        unaff_x27 = pppppppfStack_828;
      }
    }
    FUN_1073f9ec0(&uStack_790);
    func_0x0001073ad47c(&lStack_6e0);
    plVar30 = (long *)(ppppppfStack_7d0 + 0x19);
  }
  puStack_890 = *(undefined1 **)(param_1 + 0x98);
  FUN_1074c208c(&ppppppfStack_1f0,&ppppppfStack_6b0,*(undefined8 *)(param_1 + 0x138),
                *(undefined8 *)(param_1 + 0x140),param_1 + 0x148,0,*(undefined1 *)(param_1 + 0x170),
                *(undefined1 *)(param_1 + 0x171));
  FUN_1074ba444(param_1 + 0x210,&ppppppfStack_1f0);
  func_0x0001074c2dfc(&ppppppfStack_1f0);
  func_0x0001074c8c30();
  pppppppfStack_458 = (float *******)0x0;
  pppppppfStack_460 = (float *******)0x0;
  pppppppfStack_468 = (float *******)0x0;
  pppppppfStack_470 = (float *******)0x0;
  puStack_450 = (ulong *)CONCAT44(puStack_450._4_4_,0x3f800000);
  pppppppfStack_628 = (float *******)0x0;
  pppppppfStack_630 = (float *******)0x0;
  apppppppfStack_620[0] = (float *******)0x0;
  pppppppfStack_648 = (float *******)0x0;
  pppppppfStack_650 = (float *******)0x0;
  apppppppfStack_640[0] = (float *******)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  lStack_48 = 0;
  lStack_50 = 0;
  uStack_40 = 0x3f800000;
  plVar30 = *(long **)(param_1 + 0x268);
  plVar32 = *(long **)(param_1 + 0x270);
  if ((plVar30 == plVar32) || (*(long *)(param_1 + 0x280) < 0)) {
    func_0x0001074c8c30();
    plVar30 = *(long **)(param_1 + 0x268);
    plVar32 = *(long **)(param_1 + 0x270);
  }
  if (plVar30 == plVar32) {
    fVar59 = 0.0;
  }
  else {
    lVar28 = *(long *)(*(long *)(*plVar30 + 0x88) + 0x40) + *(long *)(*plVar30 + 0x58) * 0x100;
    fVar59 = (float)(ulong)(((*(long *)(lVar28 + 0x50) - *(long *)(lVar28 + 0x48)) / 0x1a8) *
                           ((long)plVar32 - (long)plVar30 >> 3));
  }
  uVar23 = uStack_40 & 0xffffffff;
  FUN_1074c2f30(&uStack_60,(long)(fVar59 / (float)uStack_40));
  pppppppfStack_708 = (float *******)0x0;
  dStack_710 = 0.0;
  dStack_6f8 = 0.0;
  pppppppfStack_700 = (float *******)0x0;
  uStack_6f0 = 0x3f800000;
  pppppppfStack_738 = (float *******)0x0;
  plStack_740 = (long *)0x0;
  uStack_728 = 0;
  pppppppfStack_730 = (float *******)0x0;
  uStack_720 = 0x3f800000;
  plVar32 = *(long **)(param_1 + 0x270);
  for (plVar30 = *(long **)(param_1 + 0x268); pppppppfVar36 = pppppppfStack_730, plVar30 != plVar32;
      plVar30 = plVar30 + 1) {
    if (*(char *)(*plVar30 + 0xf0) == '\x01') {
      pdVar17 = &dStack_710;
      func_0x0001072ee150(pdVar17,*plVar30 + 0xb0);
      if (((ulong)pdVar17 & 1) == 0) {
        func_0x0001072e89a4(&dStack_710,*plVar30 + 0xb0);
        func_0x0001072a1b80(&plStack_740,*plVar30 + 0xe8);
      }
    }
  }
  for (; pppppppfVar36 != (float *******)0x0; pppppppfVar36 = (float *******)*pppppppfVar36) {
    if (pppppppfVar36[2] < (ulong)((lStack_6c0 - lStack_6c8) / 0x98)) {
      FUN_1074c683c(param_1 + 0xf0,lStack_6c8 + (long)pppppppfVar36[2] * 0x98);
    }
  }
  plVar30 = *(long **)(param_1 + 0x268);
  plStack_7c0 = *(long **)(param_1 + 0x270);
  pppppppfStack_7d8 = (float *******)apppppppfStack_620;
  ppppppfStack_7d0 = (float ******)&PTR_DAT_110998a58;
  while( true ) {
    uVar12 = (long)plVar30 - (long)plStack_7c0 < 0;
    uVar14 = plVar30 == plStack_7c0;
    if ((bool)uVar14) break;
    pppppfVar21 = (float *****)*plVar30;
    unaff_x28 = (float ******)pppppfVar21[0x11];
    auStack_744 = *(undefined1 (*) [4])(unaff_x28 + 3);
    func_0x000107260494(&pppppppfStack_470,auStack_744);
    pppppfVar40 = unaff_x28[8];
    ppppfVar41 = pppppfVar21[0xb];
    ppppfVar31 = pppppfVar21[0xc];
    unaff_x25 = (float ******)(unaff_x28[5] + (long)ppppfVar41 * 0x14);
    pppppppfVar36 = (float *******)pppppfVar40[(long)ppppfVar41 * 0x20 + 9];
    puStack_750 = &uStack_60;
    lStack_758 = lStack_7c8;
    ppppppfStack_768 = unaff_x25;
    pppppfStack_760 = pppppfVar21;
    if (*(char *)(lStack_7c8 + 0x438) == '\x01') {
      FUN_1074bccbc(&ppppppfStack_768);
    }
    lVar28 = *(long *)(lStack_7c8 + 0x18);
    func_0x000107296b84(apppppppfStack_380,1);
    pppppppfVar53 = pppppppfStack_370;
    pppppfVar22 = unaff_x25[7];
    pppppppfStack_670 = (float *******)unaff_x25[6];
    pppppppfStack_668 = (float *******)unaff_x25[7];
    pppppppfStack_370[1] = (float ******)0x0;
    pppppppfStack_370[2] = (float ******)0x0;
    *pppppppfStack_370 = ppppppfStack_7d0;
    if (pppppfVar22 != (float *****)0x0) {
      do {
        func_0x0001074c8654();
      } while (extraout_w10_04 != 0);
    }
    func_0x00010729d1b0(&ppppppfStack_1f0,unaff_x28 + 0x25);
    pppppppfStack_400 = (float *******)((ulong)pppppppfStack_400 & 0xffffffffffffff00);
    pppppppfStack_3f0 = (float *******)((ulong)pppppppfStack_3f0 & 0xffffffffffffff00);
    FUN_107374ae4(pppppppfVar53 + 3,&pppppppfStack_670,lVar28 + 0x40,unaff_x28 + 0x1e,
                  &ppppppfStack_1f0,&pppppppfStack_400);
    plStack_7b8 = plVar30;
    func_0x0001074c8ca8();
    func_0x000107267e44(&pppppppfStack_670);
    pppppppfStack_770 = pppppppfStack_370;
    pppppppfStack_370 = (float *******)0x0;
    pppppppfStack_778 = pppppppfStack_770 + 3;
    func_0x000107297fb8(apppppppfStack_380);
    ppppppfVar37 = unaff_x25;
    FUN_1074bd21c(unaff_x25,(long)pppppfVar21 + 0x4c,pppppfVar40 + (long)ppppfVar41 * 0x20 + 0x15);
    ppppfVar34 = pppppfVar21[0xb];
    func_0x000104c2fe00(auStack_5c8,unaff_x28 + 0x1e);
    func_0x000104c2fe00(auStack_600,unaff_x28 + 0x25);
    FUN_1074070d4(auStack_590,ppppfVar34,auStack_5c8,auStack_600,0,unaff_x25 + 0xe,unaff_x25 + 0x10,
                  &pppppppfStack_778);
    uVar23 = (ulong)(uint)(float)((int)ppppppfVar37 >> 0x10);
    func_0x0001077f4740(&ppppppfStack_1f0,auStack_590);
    func_0x0001072a6b0c(auStack_590);
    func_0x000104c2f714(auStack_600);
    func_0x000104c2f714(auStack_5c8);
    if (*(char *)(pppppppfVar36 + (long)ppppfVar31 * 0x35 + 0x21) == '\x01') {
      *(undefined1 *)(pppppppfVar36 + (long)ppppfVar31 * 0x35 + 0x20) = 0;
    }
    uVar14 = *(undefined1 *)((long)pppppppfVar36 + (long)ppppfVar31 * 0x1a8 + 0x171);
    pppppppfStack_660 = (float *******)((ulong)pppppppfStack_660 & 0xffffffffffffff00);
    func_0x0001074c9024();
    if (((ulong)pppppfVar21[0x1f] & 1) == 0) {
      unaff_x26 = *(float *******)(lStack_868 + 0x10);
      uVar23 = (ulong)*(uint *)(pppppppfVar36 + (long)ppppfVar31 * 0x35 + 9);
      func_0x0001077f5f5c(*(undefined4 *)((long)pppppppfVar36 + (long)ppppfVar31 * 0x1a8 + 0x44),
                          uVar23,*(undefined4 *)
                                  ((long)pppppppfVar36 + (long)ppppfVar31 * 0x1a8 + 0x4c),
                          *(undefined4 *)(pppppppfVar36 + (long)ppppfVar31 * 0x35 + 10),unaff_x26,
                          &ppppppfStack_1f0,uVar14,unaff_x25 + 0x12,&pppppppfStack_670);
      uVar47 = (ulong)unaff_x26 >> 0x20;
      unaff_x27 = pppppppfVar36;
      if ((int)unaff_x26 != 0) goto LAB_1074bb8c0;
LAB_1074bb98c:
      pppppppfVar36 = pppppppfStack_628;
      if (pppppppfStack_628 < apppppppfStack_620[0]) {
        func_0x0001074c6f10(pppppppfStack_628,pppppfVar21);
        pppppppfVar36 = pppppppfVar36 + 0x20;
      }
      else {
        pppppppfVar36 = (float *******)&pppppppfStack_630;
        lVar28 = ((long)pppppppfStack_628 - (long)pppppppfStack_630 >> 8) + 1;
        FUN_1074c6f98();
        pppppppfVar54 = pppppppfStack_628;
        pppppppfVar53 = pppppppfStack_630;
        pppppppfStack_360 = pppppppfStack_7d8;
        if (pppppppfVar36 == (float *******)0x0) {
          lVar28 = 0;
        }
        else {
          func_0x0001074c7080();
        }
        pppppppfVar53 =
             (float *******)((long)pppppppfVar36 + ((long)pppppppfVar54 - (long)pppppppfVar53));
        pppppppfStack_368 = pppppppfVar36 + lVar28 * 0x20;
        apppppppfStack_380[0] = pppppppfVar36;
        apppppppfStack_380[1] = pppppppfVar53;
        pppppppfStack_370 = pppppppfVar53;
        func_0x0001074c6f10(pppppppfVar53,pppppfVar21);
        pppppppfStack_370 = pppppppfVar53 + 0x20;
        FUN_1074c6fd8(&pppppppfStack_630,apppppppfStack_380);
        pppppppfVar36 = pppppppfStack_628;
        func_0x0001074c7188(apppppppfStack_380);
      }
      pppppppfStack_628 = pppppppfVar36;
      if ((uVar47 & 1) == 0) {
        pppppfVar22 = unaff_x25[0xb];
        if (*pppppfVar22 == pppppfVar22[1]) {
          apppppppfStack_380[0] = (float *******)((ulong)apppppppfStack_380[0] & 0xffffffffffffff00)
          ;
          pppppppfStack_368 = (float *******)((ulong)pppppppfStack_368 & 0xffffffffffffff00);
        }
        else {
          func_0x000107278b70(&pppppppfStack_400,unaff_x25 + 0xb);
          pppppppfStack_3f0 = (float *******)((ulong)pppppppfStack_3f0 & 0xffffffffffffff00);
          apppppppfStack_380[1] = pppppppfStack_3f8;
          apppppppfStack_380[0] = pppppppfStack_400;
          pppppppfStack_400 = (float *******)0x0;
          pppppppfStack_3f8 = (float *******)0x0;
          pppppppfStack_370 = (float *******)((ulong)pppppppfStack_370 & 0xffffffffffffff00);
          pppppppfStack_368 = (float *******)CONCAT71(pppppppfStack_368._1_7_,1);
          func_0x00010726b09c(&pppppppfStack_400);
        }
        unaff_x25 = (float ******)
                    (ulong)*(byte *)((long)pppppfVar40[(long)ppppfVar41 * 0x20 + 9] +
                                    (long)pppppfVar21[0xc] * 0x1a8 + 0x172);
        if ((cStack_c0 == '\x01') && (lStack_d0 != 0)) {
          pppppppfVar36 = (float *******)&pppppppfStack_400;
          FUN_1073c26c0();
          uVar47 = ((long)pppppppfVar36 + 0x9e3779b97f4a7c15U) / 0xffffffff;
          unaff_x26 = (float ******)
                      ((long)pppppppfVar36 + 0x9e3779b97f4a7c15U + (uVar47 - (uVar47 << 0x20)));
          if (unaff_x26 == (float ******)0x0) goto LAB_1074bbad0;
        }
        else {
LAB_1074bbad0:
          unaff_x26 = (float ******)pppppfVar21[0xb];
        }
        unaff_x27 = *(float ********)(lStack_868 + 0x10);
        iStack_788 = (int)pppppppfStack_668;
        uStack_784 = (undefined4)((ulong)pppppppfStack_668 >> 0x20);
        uStack_790 = (uint)pppppppfStack_670;
        iStack_78c = (int)((ulong)pppppppfStack_670 >> 0x20);
        uStack_780 = CONCAT31(uStack_780._1_3_,pppppppfStack_660._0_1_);
        func_0x0001074c9190();
        uStack_608 = uStack_608 & 0xffffffffffffff00;
        dStack_610 = extraout_x8_03;
        func_0x0001074c30d4(&pppppppfStack_400,1);
        *(undefined4 *)(pppppppfStack_3f8 + 2) = uStack_780;
        pppppppfStack_3f8[1] = (float ******)CONCAT44(uStack_784,iStack_788);
        *pppppppfStack_3f8 = (float ******)CONCAT44(iStack_78c,uStack_790);
        uStack_608 = CONCAT71(uStack_608._1_7_,1);
        pppppppfStack_3f8 = (float *******)((long)pppppppfStack_3f8 + 0x14);
        FUN_1074c316c(&dStack_610);
        auVar8 = auStack_744;
        ppppfVar31 = pppppfVar21[0xc];
        ppppfVar41 = pppppfVar40[(long)ppppfVar41 * 0x20 + 6];
        func_0x0001072ab948(auStack_7b0,apppppppfStack_380);
        puStack_890 = auStack_7b0;
        func_0x0001077f6274(unaff_x27,&ppppppfStack_1f0,&pppppppfStack_400,unaff_x25,unaff_x26,
                            auVar8,0,ppppfVar41 + (long)ppppfVar31 * 3);
        func_0x0001072a6b60(auStack_7b0);
        FUN_1074c31ac(&pppppppfStack_400);
        func_0x0001072a6b60(apppppppfStack_380);
      }
      if ((*(byte *)(lStack_7c8 + 0x438) & 1) == 0) {
        FUN_1074bccbc(&ppppppfStack_768);
      }
      pppppppfStack_370 = (float *******)(pppppfVar21 + 9);
      pppppppfStack_400 = (float *******)auStack_744;
      apppppppfStack_380[1] = (float *******)(pppppfVar21 + 0x13);
      apppppppfStack_380[0] = pppppppfStack_400;
      FUN_1074a113c(*(undefined8 *)(lStack_868 + 0x18),&UNK_10dd5b8f9,&pppppppfStack_400,
                    apppppppfStack_380);
    }
    else {
      uVar47 = 0;
      unaff_x26 = (float ******)0x6;
LAB_1074bb8c0:
      ppppppfVar37 = unaff_x25;
      (*(code *)(*unaff_x25)[6])(unaff_x25);
      func_0x000107269bac(apppppppfStack_380,ppppppfVar37);
      (*(code *)(*unaff_x25)[6])(unaff_x25);
      func_0x00010726236c(&pppppppfStack_400);
      unaff_x27 = (float *******)apppppppfStack_380;
      func_0x000107262398(auStack_340,&pppppppfStack_400,0x1138369c0);
      lVar28 = lStack_7c8;
      uStack_308 = CONCAT22(uStack_308._2_2_,
                            *(undefined2 *)
                             ((long)pppppfVar40[(long)ppppfVar41 * 0x20 + 3] +
                             (long)pppppfVar21[0xc] * 2));
      func_0x0001074c8b7c(*(undefined8 *)(lStack_7c8 + 0x18),afStack_300);
      func_0x000104c2fe00(auStack_2c8,*(long *)(lVar28 + 0x18) + 0x78);
      lStack_290 = CONCAT44(lStack_290._4_4_,(int)unaff_x26);
      uStack_288 = 0;
      pppuStack_280 = (undefined ***)0x0;
      func_0x000107269c1c(&uStack_288);
      uStack_278 = 0;
      uStack_268 = 0;
      FUN_1074c6b18(&pppppppfStack_650,apppppppfStack_380);
      func_0x0001074ae9a8(apppppppfStack_380);
      func_0x00010724b3d8(&pppppppfStack_400);
      if (*(char *)(pppppppfVar36 + (long)ppppfVar31 * 0x35 + 0x21) == '\x01') {
        *(undefined1 *)(pppppppfVar36 + (long)ppppfVar31 * 0x35 + 0x20) = 1;
      }
      if ((int)unaff_x26 == 6) goto LAB_1074bb98c;
    }
    FUN_1073e7974(&ppppppfStack_1f0);
    func_0x0001072792b8(&pppppppfStack_778);
    plVar30 = plStack_7b8 + 1;
    param_1 = lStack_7c8;
  }
  pppppfStack_3e8 = (float *****)0x0;
  pppppppfStack_3f0 = (float *******)0x0;
  pppppppfStack_3f8 = (float *******)0x0;
  pppppppfStack_400 = (float *******)0x0;
  uStack_3e0 = *(uint *)(param_1 + 0x250);
  FUN_10749f64c(&pppppppfStack_400,*(undefined8 *)(param_1 + 0x238));
  plVar30 = (long *)(param_1 + 0x240);
  pppppppfVar36 = (float *******)&pppppppfStack_3f0;
LAB_1074bbc28:
  plVar30 = (long *)*plVar30;
  if (plVar30 != (long *)0x0) {
    ppppppfVar37 = &pppppfStack_3e8;
    FUN_10749fa40(ppppppfVar37,plVar30 + 2);
    pppppppfVar53 = pppppppfStack_3f8;
    ppppppfVar20 = ppppppfVar37;
    if (pppppppfStack_3f8 == (float *******)0x0) {
      unaff_x26 = (float ******)plVar30[2];
    }
    else {
      func_0x0001074c8d84();
      if ((bool)uVar14) {
        unaff_x25 = (float ******)(extraout_x8_04 & (ulong)ppppppfVar37);
        uVar14 = true;
      }
      else {
        uVar12 = (long)ppppppfVar37 - (long)pppppppfVar53 < 0;
        uVar14 = (float *******)ppppppfVar37 == pppppppfVar53;
        unaff_x25 = ppppppfVar37;
        if (pppppppfVar53 <= ppppppfVar37) {
          uVar47 = 0;
          if (pppppppfVar53 != (float *******)0x0) {
            uVar47 = (ulong)ppppppfVar37 / (ulong)pppppppfVar53;
          }
          unaff_x25 = (float ******)((long)ppppppfVar37 - uVar47 * (long)pppppppfVar53);
        }
      }
      pppppfVar40 = (float *****)pppppppfStack_400[(long)unaff_x25];
      unaff_x26 = (float ******)plVar30[2];
      if (pppppfVar40 != (float *****)0x0) {
        do {
          while( true ) {
            pppppfVar40 = (float *****)*pppppfVar40;
            if (pppppfVar40 == (float *****)0x0) goto LAB_1074bbcd0;
            ppppppfVar25 = (float ******)pppppfVar40[1];
            if (ppppppfVar25 != ppppppfVar37) break;
            uVar12 = (long)pppppfVar40[2] - (long)unaff_x26 < 0;
            uVar14 = (float ******)pppppfVar40[2] == unaff_x26;
            param_1 = lStack_7c8;
            if ((bool)uVar14) goto LAB_1074bbc28;
          }
          if (((ulong)pppppppfVar53 & extraout_x8_04) == 0) {
            ppppppfVar25 = (float ******)((ulong)ppppppfVar25 & extraout_x8_04);
          }
          else if (pppppppfVar53 <= ppppppfVar25) {
            uVar47 = 0;
            if (pppppppfVar53 != (float *******)0x0) {
              uVar47 = (ulong)ppppppfVar25 / (ulong)pppppppfVar53;
            }
            ppppppfVar25 = (float ******)((long)ppppppfVar25 - uVar47 * (long)pppppppfVar53);
          }
          uVar12 = (long)ppppppfVar25 - (long)unaff_x25 < 0;
          uVar14 = ppppppfVar25 == unaff_x25;
        } while ((bool)uVar14);
      }
    }
LAB_1074bbcd0:
    unaff_x27 = (float *******)plVar30[3];
    func_0x0001074c8cb0();
    uStack_1e0 = 1;
    ppppppfStack_1f0 = ppppppfVar20;
    pppppppfStack_1e8 = pppppppfVar36;
    *ppppppfVar20 = (float *****)0x0;
    ppppppfVar20[1] = (float *****)ppppppfVar37;
    ppppppfVar20[2] = (float *****)unaff_x26;
    ppppppfVar20[3] = (float *****)unaff_x27;
    if (unaff_x27 != (float *******)0x0) {
      do {
        func_0x0001074c8654();
      } while (extraout_w10_05 != 0);
    }
    uVar49 = func_0x0001074c8b54(pppppfStack_3e8);
    uVar23 = (ulong)uStack_3e0;
    if (pppppppfVar53 == (float *******)0x0) {
LAB_1074bbd18:
      bVar10 = (float ******)0x2 < pppppppfVar53;
      uVar13 = (long)pppppppfVar53 + -3 < 0;
      uVar14 = pppppppfVar53 == (float *******)0x3;
      func_0x0001074c8674((long)pppppppfVar53 << 1);
      uVar49 = extraout_x8_05;
      if (!bVar10 || (bool)uVar14) {
        uVar49 = extraout_x9;
      }
      FUN_10749f64c(&pppppppfStack_400,uVar49);
      pppppppfVar53 = pppppppfStack_3f8;
      func_0x0001074c8d84();
      if ((bool)uVar14) {
        uVar14 = 1;
        unaff_x25 = (float ******)(extraout_x8_06 & (ulong)ppppppfVar37);
      }
      else {
        uVar13 = (long)ppppppfVar37 - (long)pppppppfVar53 < 0;
        uVar14 = (float *******)ppppppfVar37 == pppppppfVar53;
        unaff_x25 = ppppppfVar37;
        if (pppppppfVar53 <= ppppppfVar37) {
          uVar47 = 0;
          if (pppppppfVar53 != (float *******)0x0) {
            uVar47 = (ulong)ppppppfVar37 / (ulong)pppppppfVar53;
          }
          unaff_x25 = (float ******)((long)ppppppfVar37 - uVar47 * (long)pppppppfVar53);
        }
      }
    }
    else {
      func_0x0001074c8b48(uVar49,uVar23,(float)pppppppfVar53);
      uVar13 = 0;
      if ((bool)uVar12) goto LAB_1074bbd18;
    }
    pppppfVar40 = (float *****)pppppppfStack_400[(long)unaff_x25];
    if (pppppfVar40 == (float *****)0x0) {
      *ppppppfStack_1f0 = (float *****)pppppppfStack_3f0;
      pppppppfStack_3f0 = (float *******)ppppppfStack_1f0;
      pppppppfStack_400[(long)unaff_x25] = (float ******)pppppppfVar36;
      if (*ppppppfStack_1f0 != (float *****)0x0) {
        ppppppfVar37 = (float ******)(*ppppppfStack_1f0)[1];
        if (((ulong)pppppppfVar53 & (long)pppppppfVar53 - 1U) == 0) {
          ppppppfVar37 = (float ******)((ulong)ppppppfVar37 & (long)pppppppfVar53 - 1U);
          uVar14 = true;
          uVar13 = false;
        }
        else {
          uVar13 = (long)ppppppfVar37 - (long)pppppppfVar53 < 0;
          uVar14 = (float *******)ppppppfVar37 == pppppppfVar53;
          if (pppppppfVar53 <= ppppppfVar37) {
            uVar47 = 0;
            if (pppppppfVar53 != (float *******)0x0) {
              uVar47 = (ulong)ppppppfVar37 / (ulong)pppppppfVar53;
            }
            ppppppfVar37 = (float ******)((long)ppppppfVar37 - uVar47 * (long)pppppppfVar53);
          }
        }
        pppppppfStack_400[(long)ppppppfVar37] = ppppppfStack_1f0;
      }
    }
    else {
      *ppppppfStack_1f0 = (float *****)*pppppfVar40;
      *pppppfVar40 = (float ****)ppppppfStack_1f0;
    }
    ppppppfStack_1f0 = (float ******)0x0;
    pppppfStack_3e8 = (float *****)((long)pppppfStack_3e8 + 1);
    FUN_10749fad0(&ppppppfStack_1f0);
    uVar12 = uVar13;
    param_1 = lStack_7c8;
    goto LAB_1074bbc28;
  }
  puStack_890 = *(undefined1 **)(param_1 + 600);
  FUN_1074c208c(&ppppppfStack_1f0,&pppppppfStack_630,*(undefined8 *)(param_1 + 0x2b0),
                *(undefined1 *)(param_1 + 0x2b8),&pppppppfStack_400,1,
                *(undefined1 *)(param_1 + 0x211),*(undefined1 *)(param_1 + 0x212));
  FUN_1074ba444(param_1 + 0x2c0,&ppppppfStack_1f0);
  func_0x0001074c2dfc(&ppppppfStack_1f0);
  FUN_1074bc810(param_1 + 0x2c0,&UNK_10de73e10);
  pppppppfVar53 = (float *******)(param_1 + 0x3e0);
  if (*(long *)(param_1 + 0x3f8) != 0) {
    func_0x0001074c2c30(pppppppfVar53,*(undefined8 *)(param_1 + 0x3f0));
    *(undefined8 *)(param_1 + 0x3f0) = 0;
    lVar29 = *(long *)(param_1 + 1000);
    for (lVar28 = 0; uVar14 = lVar29 == lVar28, !(bool)uVar14; lVar28 = lVar28 + 1) {
      (*pppppppfVar53)[lVar28] = (float *****)0x0;
    }
    *(undefined8 *)(param_1 + 0x3f8) = 0;
  }
  uVar49 = uStack_60;
  uStack_60 = 0;
  pppppppfVar54 = pppppppfVar53;
  FUN_1074c3078(pppppppfVar53,uVar49);
  uVar47 = uStack_58;
  *(ulong *)(param_1 + 1000) = uStack_58;
  uStack_58 = 0;
  *(long *)(param_1 + 0x3f8) = lStack_48;
  *(float *)(param_1 + 0x400) = (float)uStack_40;
  *(long *)(param_1 + 0x3f0) = lStack_50;
  if (lStack_48 != 0) {
    uVar26 = *(ulong *)(lStack_50 + 8);
    if ((uVar47 & uVar47 - 1) == 0) {
      uVar26 = uVar26 & uVar47 - 1;
      uVar14 = true;
    }
    else {
      uVar14 = uVar26 == uVar47;
      if (uVar47 <= uVar26) {
        uVar6 = 0;
        if (uVar47 != 0) {
          uVar6 = uVar26 / uVar47;
        }
        uVar26 = uVar26 - uVar6 * uVar47;
      }
    }
    (*pppppppfVar53)[uVar26] = (float *****)(param_1 + 0x3f0);
    lStack_50 = 0;
    lStack_48 = 0;
  }
  pppppfVar40 = (float *****)0x0;
  if (*(int *)(*(long *)(param_1 + 0x18) + 0x958) == 0) {
    uVar47 = 0;
  }
  else {
    __ZNSt3__16chrono12steady_clock3nowEv();
    uVar47 = 0;
    pppppppfStack_368 = (float *******)0x0;
    pppppppfStack_370 = (float *******)0x0;
    apppppppfStack_380[1] = (float *******)0x0;
    apppppppfStack_380[0] = (float *******)0x0;
    pppppppfStack_360 = (float *******)CONCAT44(pppppppfStack_360._4_4_,0x3f800000);
    unaff_x26 = (float ******)&ppppppfStack_1f0;
    unaff_d9 = 0;
    ppppppfVar37 = *(float *******)(param_1 + 800);
    pppppppfStack_358 = pppppppfVar54;
    pppppppfStack_350 = pppppppfVar54;
    for (unaff_x25 = *(float *******)(param_1 + 0x318); param_1 = lStack_7c8,
        uVar14 = unaff_x25 == ppppppfVar37, !(bool)uVar14; unaff_x25 = unaff_x25 + 1) {
      pppppfVar40 = *unaff_x25;
      ppppppfVar20 = (float ******)pppppfVar40[3];
      if ((apppppppfStack_380[1] != (float *******)0x0) && (pppppppfStack_368 != (float *******)0x0)
         ) {
        uVar26 = (long)apppppppfStack_380[1] - 1;
        if (((ulong)apppppppfStack_380[1] & uVar26) == 0) {
          ppppppfVar25 = (float ******)(uVar26 & (ulong)ppppppfVar20);
        }
        else {
          ppppppfVar25 = ppppppfVar20;
          if (apppppppfStack_380[1] <= ppppppfVar20) {
            uVar6 = 0;
            if (apppppppfStack_380[1] != (float *******)0x0) {
              uVar6 = (ulong)ppppppfVar20 / (ulong)apppppppfStack_380[1];
            }
            ppppppfVar25 = (float ******)((long)ppppppfVar20 - uVar6 * (long)apppppppfStack_380[1]);
          }
        }
        pppppfVar21 = (float *****)apppppppfStack_380[0][(long)ppppppfVar25];
        if (pppppfVar21 != (float *****)0x0) {
          do {
            while( true ) {
              pppppfVar21 = (float *****)*pppppfVar21;
              if (pppppfVar21 == (float *****)0x0) goto LAB_1074bbfd8;
              ppppppfVar27 = (float ******)pppppfVar21[1];
              if (ppppppfVar20 != ppppppfVar27) break;
              if ((float ******)pppppfVar21[2] == ppppppfVar20) goto LAB_1074bc150;
            }
            if (((ulong)apppppppfStack_380[1] & uVar26) == 0) {
              ppppppfVar27 = (float ******)((ulong)ppppppfVar27 & uVar26);
            }
            else if (apppppppfStack_380[1] <= ppppppfVar27) {
              uVar6 = 0;
              if (apppppppfStack_380[1] != (float *******)0x0) {
                uVar6 = (ulong)ppppppfVar27 / (ulong)apppppppfStack_380[1];
              }
              ppppppfVar27 = (float ******)
                             ((long)ppppppfVar27 - uVar6 * (long)apppppppfStack_380[1]);
            }
          } while (ppppppfVar27 == ppppppfVar25);
        }
      }
LAB_1074bbfd8:
      lVar28 = lStack_7c8 + 0x60;
      FUN_1074c5318();
      unaff_x28 = (float ******)pppppfVar40[0x11];
      ppppfVar41 = pppppfVar40[0xb];
      pppppfVar22 = unaff_x28[5];
      pppppfVar21 = pppppfVar40 + 9;
      FUN_1073b724c();
      pppppppfVar36 = (float *******)(pppppfVar22 + (long)ppppfVar41 * 0x14);
      unaff_x27 = (float *******)((ulong)pppppfVar21 >> 0x20);
      uVar39 = (uint)((ulong)pppppfVar21 >> 0x20);
      iStack_78c = (int)ppppppfVar20;
      iStack_788 = (int)((ulong)ppppppfVar20 >> 0x20);
      uStack_790 = uVar39;
      FUN_1074bd21c(pppppppfVar36,(long)pppppfVar40 + 0x4c,
                    unaff_x28[8] + (long)pppppfVar40[0xb] * 0x20 + 0x15);
      ppppppfStack_768 = (float ******)((double)((ulong)ppppppfVar20 & 0xffffffff) * 512.0);
      pppppfVar21 = (float *****)((double)((ulong)ppppppfVar20 >> 0x20) * 512.0);
      ppppppfVar20 = (float ******)&ppppppfStack_768;
      pppppfStack_760 = pppppfVar21;
      pppppppfStack_670 =
           (float *******)func_0x000107282130((double)(1 << (ulong)(uVar39 & 0x1f)),ppppppfVar20,0);
      pppppppfStack_668 = (float *******)pppppfVar21;
      func_0x0001074c909c(pppppfVar40[0xb]);
      (*extraout_x8_07)();
      unaff_d8 = (double)FUN_1073bbb84(&uStack_790,ppppppfVar20);
      pppppppfVar53 = (float *******)&pppppppfStack_670;
      dVar46 = (double)func_0x00010726c7c0();
      fVar44 = (float)((double)(int)(short)pppppppfVar36 / unaff_d8 + (double)pppppfVar21);
      uVar23 = (ulong)(uint)fVar44;
      fVar59 = (float)(dVar46 - (double)((int)pppppppfVar36 >> 0x10) / unaff_d8);
      if ((lVar28 == 0) ||
         (((*(float *)(lVar28 + 0x28) == 0.0 && (*(float *)(lVar28 + 0x2c) == 0.0)) ||
          (fVar55 = *(float *)(lVar28 + 0x44), fVar55 == 0.0)))) {
        pppppppfStack_1e8 = (float *******)pppppfVar40[1];
        uStack_1b4 = CONCAT44(iStack_78c,uStack_790);
        uStack_1e0 = 0;
        uStack_1d8 = 0;
        fStack_1d0 = (float)((uint)fStack_1d0 & 0xffffff00);
        ppppppfStack_1f0 = (float ******)pppppfVar40[3];
        uStack_1c8 = 0;
        fStack_1b8 = 0.0;
        fStack_1bc = 0.0;
        iStack_1ac = iStack_788;
        uStack_1a8 = 0;
        fStack_1c4 = fVar44;
        fStack_1c0 = fVar59;
        func_0x0001074c8abc();
      }
      else if (*(float ********)(lVar28 + 0x18) == (float *******)pppppfVar40[1]) {
        ppppppfStack_1f0 = (float ******)pppppfVar40[3];
        pppppppfVar53 = (float *******)&pppppppfStack_1e8;
        _memcpy(pppppppfVar53,(undefined8 *)(lVar28 + 0x18),0x48);
        func_0x0001074c8abc();
      }
      else {
        uStack_1b4 = CONCAT44(iStack_78c,uStack_790);
        if ((*(int *)(lVar28 + 0x50) == iStack_78c) && (*(int *)(lVar28 + 0x54) == iStack_788)) {
          bVar10 = (uint)*(byte *)(lVar28 + 0x4c) != (uStack_790 & 0xff);
        }
        else {
          bVar10 = true;
        }
        uStack_1c8 = 0;
        fStack_1cc = *(float *)(lVar28 + 0x20);
        fVar43 = *(float *)(lVar28 + 0x3c) + fStack_1cc;
        fVar52 = *(float *)(lVar28 + 0x40) - *(float *)(lVar28 + 0x24);
        fStack_1b8 = *(float *)(lVar28 + 0x48);
        fStack_1d0 = 0.0;
        if ((!bVar10) && (fStack_1b8 != 0.0)) {
          fStack_1d0 = ((*(float *)(lVar28 + 0x28) + fVar44) - fVar43) / fStack_1b8;
          uStack_1c8 = 1;
          fStack_1cc = ((*(float *)(lVar28 + 0x2c) + fVar59) - fVar52) / fStack_1b8;
        }
        uStack_1d8 = *(undefined8 *)(lVar28 + 0x28);
        ppppppfStack_1f0 = (float ******)pppppfVar40[3];
        dVar46 = 0.0;
        if (!bVar10) {
          dVar46 = (double)(fVar59 - fVar52);
        }
        dVar48 = 0.0;
        if (!bVar10) {
          dVar48 = (double)(fVar43 - fVar44);
        }
        dVar60 = (double)NEON_fminnm((double)fVar55 / SQRT(dVar48 * dVar48 + dVar46 * dVar46),
                                     0x3ff0000000000000);
        uStack_1e0 = CONCAT44((float)(dVar46 * dVar60),(float)(dVar60 * dVar48));
        iStack_1ac = iStack_788;
        uStack_1a8 = 0;
        pppppppfStack_1e8 = (float *******)pppppfVar40[1];
        fStack_1c4 = fVar44;
        fStack_1c0 = fVar59;
        fStack_1bc = fVar55;
        func_0x0001074c8abc();
      }
      if ((int)uVar47 == 0) {
        if (((ulong)pppppppfVar53[0xb] & 1) == 0) {
          uVar47 = 1;
          if ((*(float *)(pppppppfVar53 + 5) == 0.0) &&
             (*(float *)((long)pppppppfVar53 + 0x2c) == 0.0)) {
            if (*(char *)(pppppppfVar53 + 7) != '\x01') goto LAB_1074bc14c;
            if (*(float *)(pppppppfVar53 + 6) == 0.0) {
              uVar47 = (ulong)(*(float *)((long)pppppppfVar53 + 0x34) != 0.0);
            }
          }
        }
        else {
LAB_1074bc14c:
          uVar47 = 0;
        }
      }
      else {
        uVar47 = 1;
      }
LAB_1074bc150:
    }
    if (*(long *)(lStack_7c8 + 0x78) != 0) {
      func_0x0001074c2790(lStack_7c8 + 0x60,*(undefined8 *)(lStack_7c8 + 0x70));
      *(undefined8 *)(param_1 + 0x70) = 0;
      lVar29 = *(long *)(param_1 + 0x68);
      for (lVar28 = 0; uVar14 = lVar29 == lVar28, !(bool)uVar14; lVar28 = lVar28 + 1) {
        *(undefined8 *)(*(long *)(param_1 + 0x60) + lVar28 * 8) = 0;
      }
      *(undefined8 *)(param_1 + 0x78) = 0;
    }
    pppppppfVar53 = apppppppfStack_380[0];
    apppppppfStack_380[0] = (float *******)0x0;
    FUN_1074c5840(param_1 + 0x60,pppppppfVar53);
    pppppppfVar53 = apppppppfStack_380[1];
    *(undefined8 *)(param_1 + 0x70) = pppppppfStack_370;
    *(float ********)(param_1 + 0x68) = apppppppfStack_380[1];
    apppppppfStack_380[1] = (float *******)0x0;
    *(float ********)(param_1 + 0x78) = pppppppfStack_368;
    *(undefined4 *)(param_1 + 0x80) = pppppppfStack_360._0_4_;
    if (pppppppfStack_368 != (float *******)0x0) {
      ppppppfVar37 = pppppppfStack_370[1];
      if (((ulong)pppppppfVar53 & (long)pppppppfVar53 - 1U) == 0) {
        ppppppfVar37 = (float ******)((ulong)ppppppfVar37 & (long)pppppppfVar53 - 1U);
        uVar14 = true;
      }
      else {
        uVar14 = (float *******)ppppppfVar37 == pppppppfVar53;
        if (pppppppfVar53 <= ppppppfVar37) {
          uVar26 = 0;
          if (pppppppfVar53 != (float *******)0x0) {
            uVar26 = (ulong)ppppppfVar37 / (ulong)pppppppfVar53;
          }
          ppppppfVar37 = (float ******)((long)ppppppfVar37 - uVar26 * (long)pppppppfVar53);
        }
      }
      *(undefined8 **)(*(long *)(param_1 + 0x60) + (long)ppppppfVar37 * 8) =
           (undefined8 *)(param_1 + 0x70);
      pppppppfStack_370 = (float *******)0x0;
      pppppppfStack_368 = (float *******)0x0;
    }
    *(float ********)(param_1 + 0x90) = pppppppfStack_350;
    *(float ********)(param_1 + 0x88) = pppppppfStack_358;
    func_0x0001074c2768(apppppppfStack_380);
  }
  *puStack_888 = (int)pppppppfStack_458;
  puVar15 = (undefined8 *)(puStack_888 + 2);
  *(float ********)(puStack_888 + 4) = pppppppfStack_648;
  *puVar15 = pppppppfStack_650;
  *(float ********)(puStack_888 + 6) = apppppppfStack_640[0];
  pppppppfStack_650 = (float *******)0x0;
  pppppppfStack_648 = (float *******)0x0;
  apppppppfStack_640[0] = (float *******)0x0;
  *(undefined1 *)(puStack_888 + 8) = *(undefined1 *)(param_1 + 0x208);
  pppppfVar21 = (float *****)(param_1 + 0xf0);
  func_0x0001074c31d0(puStack_888 + 10);
  *(char *)(puStack_888 + 0x10) = (char)uVar47;
  *(undefined8 *)(puStack_888 + 0x14) = 0;
  *(undefined8 *)(puStack_888 + 0x12) = 0;
  *(undefined8 *)(puStack_888 + 0x18) = 0;
  *(undefined8 *)(puStack_888 + 0x16) = 0;
  *(undefined8 *)(puStack_888 + 0x1c) = 0;
  *(undefined8 *)(puStack_888 + 0x1a) = 0;
  *(undefined8 *)(puStack_888 + 0x20) = 0;
  *(undefined8 *)(puStack_888 + 0x1e) = 0;
  puStack_888[0x22] = 0x3f800000;
  puStack_888[0x24] = 0;
  FUN_10749ecc0(&pppppppfStack_400);
  func_0x0001072a8888(&plStack_740);
  func_0x00010726ea70(&dStack_710);
  func_0x0001074c2c08(&uStack_60);
  FUN_1074ae918(&pppppppfStack_650);
  func_0x0001074c34b4(&pppppppfStack_630);
  func_0x00010726f2e4(&pppppppfStack_470);
  FUN_10748ab6c(&lStack_6c8);
  func_0x0001074c34b4(&ppppppfStack_6b0);
  pppppfVar22 = appppfStack_698;
  func_0x00010726b264();
  func_0x0001074c8620(uStack_18);
  if ((bool)uVar14) {
    return;
  }
  ___stack_chk_fail();
  FUN_1074ae918(puVar15);
  FUN_10749ecc0(&pppppppfStack_400);
  func_0x0001072a8888(&plStack_740);
  func_0x00010726ea70(&dStack_710);
  func_0x0001074c2c08(&uStack_60);
  FUN_1074ae918(&pppppppfStack_650);
  func_0x0001074c34b4(&pppppppfStack_630);
  func_0x00010726f2e4(&pppppppfStack_470);
  FUN_10748ab6c(&lStack_6c8);
  func_0x0001074c34b4(&ppppppfStack_6b0);
  func_0x00010726b264(appppfStack_698);
  func_0x0001074c8820();
  pcStack_898 = FUN_1074bc810;
  uStack_900 = unaff_d9;
  dStack_8f8 = unaff_d8;
  ppppppfStack_8f0 = unaff_x28;
  pppppppfStack_8e8 = unaff_x27;
  ppppppfStack_8e0 = unaff_x26;
  ppppppfStack_8d8 = unaff_x25;
  lStack_8d0 = param_1;
  uStack_8c8 = uVar47;
  pppppppfStack_8c0 = pppppppfVar36;
  puStack_8b8 = puVar15;
  pppppfStack_8b0 = pppppfVar40;
  pppppfStack_8a8 = pppppfVar22;
  puStack_8a0 = &stack0x00000090;
  func_0x0001074c8868();
  func_0x0001074c8688();
  ppppppfStack_978 = (float ******)0x0;
  ppppfStack_980 = (float ****)0x0;
  lStack_968 = 0;
  pppppfStack_970 = (float *****)0x0;
  uStack_960 = 0x3f800000;
  uStack_908 = extraout_x8_08;
  if (*(char *)(pppppfVar21 + 4) == '\x01') {
    pppppfVar21 = (float *****)
                  (long)(float)(ulong)((long)pppppfVar40[2] - (long)pppppfVar40[1] >> 8);
    FUN_1074c6414(&ppppfStack_980);
    pppppfVar18 = (float *****)pppppfVar22[3];
    pppppfStack_918 = pppppfVar18;
    if (pppppfVar18 != (float *****)0x0) {
      if (pppppfVar18 == pppppfVar22) {
        pppppfStack_918 = (float *****)&pppppfStack_930;
        pppppfVar21 = (float *****)&pppppfStack_930;
        (*(code *)(*pppppfVar18)[3])();
      }
      else {
        (*(code *)(*pppppfVar18)[2])();
        pppppfStack_918 = pppppfVar18;
      }
    }
    pppppfVar35 = (float *****)pppppfVar40[2];
    for (pppppfVar18 = (float *****)pppppfVar40[1];
        uVar14 = (long)pppppfVar18 - (long)pppppfVar35 < 0, pppppfVar18 != pppppfVar35;
        pppppfVar18 = pppppfVar18 + 0x20) {
      if (pppppfStack_918 == (float *****)0x0) {
        func_0x000104bfeb48();
        goto LAB_1074bcc68;
      }
      pppppfVar19 = pppppfStack_918;
      pppppfVar21 = pppppfVar18;
      uVar45 = (*(code *)(*pppppfStack_918)[6])();
      ppppppfVar37 = ppppppfStack_978;
      ppppppfVar20 = (float ******)pppppfVar18[3];
      if (ppppppfStack_978 != (float ******)0x0) {
        uVar47 = (long)ppppppfStack_978 - 1;
        if (((ulong)ppppppfStack_978 & uVar47) == 0) {
          unaff_x28 = (float ******)(uVar47 & (ulong)ppppppfVar20);
          uVar14 = false;
        }
        else {
          uVar14 = (long)ppppppfVar20 - (long)ppppppfStack_978 < 0;
          unaff_x28 = ppppppfVar20;
          if (ppppppfStack_978 <= ppppppfVar20) {
            uVar26 = 0;
            if (ppppppfStack_978 != (float ******)0x0) {
              uVar26 = (ulong)ppppppfVar20 / (ulong)ppppppfStack_978;
            }
            unaff_x28 = (float ******)((long)ppppppfVar20 - uVar26 * (long)ppppppfStack_978);
          }
        }
        pppfVar24 = ppppfStack_980[(long)unaff_x28];
        if (pppfVar24 != (float ***)0x0) {
          do {
            while( true ) {
              pppfVar24 = (float ***)*pppfVar24;
              if (pppfVar24 == (float ***)0x0) goto LAB_1074bc97c;
              ppppppfVar25 = (float ******)pppfVar24[1];
              if (ppppppfVar25 != ppppppfVar20) break;
              uVar14 = (long)pppfVar24[2] - (long)ppppppfVar20 < 0;
              if ((float ******)pppfVar24[2] == ppppppfVar20) goto LAB_1074bca84;
            }
            if (((ulong)ppppppfStack_978 & uVar47) == 0) {
              ppppppfVar25 = (float ******)((ulong)ppppppfVar25 & uVar47);
            }
            else if (ppppppfStack_978 <= ppppppfVar25) {
              uVar26 = 0;
              if (ppppppfStack_978 != (float ******)0x0) {
                uVar26 = (ulong)ppppppfVar25 / (ulong)ppppppfStack_978;
              }
              ppppppfVar25 = (float ******)((long)ppppppfVar25 - uVar26 * (long)ppppppfStack_978);
            }
            uVar14 = (long)ppppppfVar25 - (long)unaff_x28 < 0;
          } while (ppppppfVar25 == unaff_x28);
        }
      }
LAB_1074bc97c:
      func_0x0001074c8cb0();
      uStack_938 = 1;
      *pppppfVar19 = (float ****)0x0;
      pppppfVar19[1] = (float ****)ppppppfVar20;
      pppppfVar19[2] = (float ****)ppppppfVar20;
      *(undefined4 *)(pppppfVar19 + 3) = uVar45;
      *(int *)((long)pppppfVar19 + 0x1c) = (int)uVar23;
      pppppfStack_948 = pppppfVar19;
      pppppfStack_940 = (float *****)&pppppfStack_970;
      uVar49 = func_0x0001074c8b54(lStack_968);
      uVar23 = uStack_960 & 0xffffffff;
      if ((ppppppfVar37 == (float ******)0x0) ||
         (func_0x0001074c8b48(uVar49,uVar23,(float)ppppppfVar37), (bool)uVar14)) {
        bVar11 = (float ******)0x2 < ppppppfVar37;
        bVar10 = ppppppfVar37 == (float ******)0x3;
        func_0x0001074c8674((long)ppppppfVar37 << 1);
        pppppfVar21 = extraout_x8_09;
        if (!bVar11 || bVar10) {
          pppppfVar21 = extraout_x9_00;
        }
        FUN_1074c6414(&ppppfStack_980);
        ppppppfVar37 = ppppppfStack_978;
        if (((ulong)ppppppfStack_978 & (long)ppppppfStack_978 - 1U) == 0) {
          unaff_x28 = (float ******)((long)ppppppfStack_978 - 1U & (ulong)ppppppfVar20);
        }
        else {
          unaff_x28 = ppppppfVar20;
          if (ppppppfStack_978 <= ppppppfVar20) {
            uVar47 = 0;
            if (ppppppfStack_978 != (float ******)0x0) {
              uVar47 = (ulong)ppppppfVar20 / (ulong)ppppppfStack_978;
            }
            unaff_x28 = (float ******)((long)ppppppfVar20 - uVar47 * (long)ppppppfStack_978);
          }
        }
      }
      pppfVar24 = ppppfStack_980[(long)unaff_x28];
      if (pppfVar24 == (float ***)0x0) {
        *pppppfVar19 = (float ****)pppppfStack_970;
        ppppfStack_980[(long)unaff_x28] = (float ***)&pppppfStack_970;
        pppppfStack_970 = pppppfVar19;
        if (*pppppfVar19 != (float ****)0x0) {
          ppppppfVar20 = (float ******)(*pppppfVar19)[1];
          if (((ulong)ppppppfVar37 & (long)ppppppfVar37 - 1U) == 0) {
            ppppppfVar20 = (float ******)((ulong)ppppppfVar20 & (long)ppppppfVar37 - 1U);
          }
          else if (ppppppfVar37 <= ppppppfVar20) {
            uVar47 = 0;
            if (ppppppfVar37 != (float ******)0x0) {
              uVar47 = (ulong)ppppppfVar20 / (ulong)ppppppfVar37;
            }
            ppppppfVar20 = (float ******)((long)ppppppfVar20 - uVar47 * (long)ppppppfVar37);
          }
          ppppfStack_980[(long)ppppppfVar20] = (float ***)pppppfVar19;
        }
      }
      else {
        *pppppfVar19 = (float ****)*pppfVar24;
        *pppfVar24 = (float **)pppppfVar19;
      }
      pppppfStack_948 = (float *****)0x0;
      lStack_968 = lStack_968 + 1;
      FUN_1074c6574(&pppppfStack_948);
LAB_1074bca84:
    }
    FUN_1074c74d0(&pppppfStack_930);
  }
  pppppfVar35 = pppppfVar40 + 0xb;
  pppppfVar40[0xe] = pppppfVar22[5];
  pppppfVar40[0xc] = *pppppfVar35;
  ppppfVar41 = pppppfVar40[1];
  ppppfVar31 = pppppfVar40[2];
  pppppfVar18 = (float *****)((long)ppppfVar31 - (long)ppppfVar41 >> 8);
  pppppfVar19 = pppppfVar40 + 0xd;
  ppppfVar34 = ppppfVar41;
  if ((float *****)((long)*pppppfVar19 - (long)*pppppfVar35 >> 3) < pppppfVar18) {
    if ((ulong)pppppfVar18 >> 0x3d != 0) goto LAB_1074bcc64;
    pppppfStack_910 = pppppfVar19;
    FUN_1074c63e4();
    pppppfStack_918 = pppppfVar18 + (long)pppppfVar21;
    pppppfStack_928 = pppppfVar18;
    pppppfStack_920 = pppppfVar18;
    func_0x0001074c8de4();
    FUN_1074c65bc(&pppppfStack_930);
    ppppfVar41 = pppppfVar40[1];
    ppppfVar31 = pppppfVar40[2];
    ppppfVar34 = ppppfVar41;
  }
  for (; puVar7 = PTR___ZSt7nothrow_1103469d8, ppppfVar34 != ppppfVar31;
      ppppfVar34 = ppppfVar34 + 0x20) {
    ppppfVar3 = pppppfVar40[0xc];
    if (ppppfVar3 < pppppfVar40[0xd]) {
      ppppfVar38 = ppppfVar3 + 1;
      *ppppfVar3 = (float ***)ppppfVar41;
    }
    else {
      lVar28 = ((long)ppppfVar3 - (long)*pppppfVar35 >> 3) + 1;
      pppppfVar21 = pppppfVar35;
      FUN_1074c63b0();
      ppppfVar3 = pppppfVar40[0xb];
      ppppfVar38 = pppppfVar40[0xc];
      if (pppppfVar21 == (float *****)0x0) {
        lVar28 = 0;
        pppppfStack_910 = pppppfVar19;
      }
      else {
        pppppfStack_910 = pppppfVar19;
        FUN_1074c63e4();
      }
      pppppfStack_928 = (float *****)((long)pppppfVar21 + ((long)ppppfVar38 - (long)ppppfVar3));
      pppppfStack_918 = pppppfVar21 + lVar28;
      pppppfStack_920 = pppppfStack_928 + 1;
      *pppppfStack_928 = ppppfVar41;
      func_0x0001074c8de4();
      ppppfVar38 = pppppfVar40[0xc];
      FUN_1074c65bc(&pppppfStack_930);
    }
    pppppfVar40[0xc] = ppppfVar38;
    ppppfVar41 = ppppfVar41 + 0x20;
  }
  ppppfVar41 = pppppfVar40[0xb];
  ppppfVar31 = pppppfVar40[0xc];
  pppppfVar18 = (float *****)((long)ppppfVar31 - (long)ppppfVar41 >> 3);
  pppppfStack_948 = (float *****)0x0;
  pppppfStack_940 = (float *****)0x0;
  uVar14 = pppppfVar18 == (float *****)0x81;
  pppppfVar21 = pppppfVar18;
  pppppfStack_928 = pppppfVar22;
  pppppfStack_930 = pppppfVar40;
  pppppfStack_920 = &ppppfStack_980;
  if ((long)pppppfVar18 < 0x81) {
    pppppfVar21 = (float *****)0x0;
    pppppfStack_920 = &ppppfStack_980;
  }
  else {
    for (; pppppfVar21 != (float *****)0x0; pppppfVar21 = (float *****)((ulong)pppppfVar21 >> 1)) {
      lVar28 = (long)pppppfVar21 << 3;
      __ZnwmRKSt9nothrow_t(lVar28,puVar7);
      if (lVar28 != 0) goto LAB_1074bcbe4;
    }
    lVar28 = 0;
LAB_1074bcbe4:
    uStack_958 = 0;
    pppppfStack_950 = pppppfVar21;
    FUN_1074c7b4c(&pppppfStack_948,lVar28);
    pppppfStack_940 = pppppfVar21;
    FUN_1074c7b64(&uStack_958);
  }
  FUN_1074c7968(ppppfVar41,ppppfVar31,&pppppfStack_930,pppppfVar18,pppppfStack_948,pppppfVar21);
  FUN_1074c7b64(&pppppfStack_948);
  func_0x0001074c65fc(&ppppfStack_980);
  func_0x0001074c8620(uStack_908);
  if ((bool)uVar14) {
    return;
  }
  ___stack_chk_fail();
LAB_1074bcc64:
  func_0x0001074c63d8();
LAB_1074bcc68:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x1074bcc6c);
  (*pcVar9)();
}



/* Entry: 1074bc810; end: 1074bccbb;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x0001074bc9ac */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1074bc810(undefined8 param_1,undefined4 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  undefined4 uVar3;
  float fVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  undefined8 extraout_x8;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  long *unaff_x19;
  long **pplVar16;
  long unaff_x20;
  long **pplVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  ulong unaff_x28;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined4 uVar28;
  long lStack_f0;
  ulong uStack_e8;
  long *plStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long **pplStack_c0;
  long *plStack_b8;
  long **pplStack_b0;
  undefined8 uStack_a8;
  long *plStack_88;
  
  uVar28 = (undefined4)((ulong)param_1 >> 0x20);
  func_0x0001074c8868();
  func_0x0001074c8688();
  uStack_e8 = 0;
  lStack_f0 = 0;
  lStack_d8 = 0;
  plStack_e0 = (long *)0x0;
  uStack_d0 = 0x3f800000;
  if (*(char *)(param_4 + 0x20) == '\x01') {
    fVar4 = (float)(ulong)(*(long *)(unaff_x20 + 0x10) - *(long *)(unaff_x20 + 8) >> 8);
    uVar21 = SUB41(fVar4,0);
    uVar22 = (undefined1)((uint)fVar4 >> 8);
    uVar24 = (undefined1)((uint)fVar4 >> 0x10);
    uVar26 = (undefined1)((uint)fVar4 >> 0x18);
    FUN_1074c6414(&lStack_f0);
    plStack_88 = (long *)unaff_x19[3];
    if (plStack_88 != (long *)0x0) {
      if (plStack_88 == unaff_x19) {
        (**(code **)(*plStack_88 + 0x18))();
        plStack_88 = (long *)&stack0xffffffffffffff60;
      }
      else {
        (**(code **)(*plStack_88 + 0x10))();
      }
    }
    lVar19 = *(long *)(unaff_x20 + 0x10);
    for (lVar18 = *(long *)(unaff_x20 + 8); uVar7 = lVar18 - lVar19 < 0, lVar18 != lVar19;
        lVar18 = lVar18 + 0x100) {
      if (plStack_88 == (long *)0x0) {
        func_0x000104bfeb48();
        goto LAB_1074bcc68;
      }
      plVar10 = plStack_88;
      (**(code **)(*plStack_88 + 0x30))();
      uVar9 = uStack_e8;
      uVar3 = CONCAT13(uVar26,CONCAT12(uVar24,CONCAT11(uVar22,uVar21)));
      uVar20 = *(ulong *)(lVar18 + 0x18);
      if (uStack_e8 != 0) {
        uVar12 = uStack_e8 - 1;
        if ((uStack_e8 & uVar12) == 0) {
          unaff_x28 = uVar12 & uVar20;
          uVar7 = false;
        }
        else {
          uVar7 = (long)(uVar20 - uStack_e8) < 0;
          unaff_x28 = uVar20;
          if (uStack_e8 <= uVar20) {
            uVar15 = 0;
            if (uStack_e8 != 0) {
              uVar15 = uVar20 / uStack_e8;
            }
            unaff_x28 = uVar20 - uVar15 * uStack_e8;
          }
        }
        plVar14 = *(long **)(lStack_f0 + unaff_x28 * 8);
        if (plVar14 != (long *)0x0) {
          do {
            while( true ) {
              plVar14 = (long *)*plVar14;
              if (plVar14 == (long *)0x0) goto LAB_1074bc97c;
              uVar15 = plVar14[1];
              if (uVar15 != uVar20) break;
              uVar7 = (long)(plVar14[2] - uVar20) < 0;
              if (plVar14[2] == uVar20) goto LAB_1074bca84;
            }
            if ((uStack_e8 & uVar12) == 0) {
              uVar15 = uVar15 & uVar12;
            }
            else if (uStack_e8 <= uVar15) {
              uVar2 = 0;
              if (uStack_e8 != 0) {
                uVar2 = uVar15 / uStack_e8;
              }
              uVar15 = uVar15 - uVar2 * uStack_e8;
            }
            uVar7 = (long)(uVar15 - unaff_x28) < 0;
          } while (uVar15 == unaff_x28);
        }
      }
LAB_1074bc97c:
      func_0x0001074c8cb0();
      uStack_a8 = 1;
      *plVar10 = 0;
      plVar10[1] = uVar20;
      plVar10[2] = uVar20;
      *(undefined4 *)(plVar10 + 3) = uVar3;
      *(undefined4 *)((long)plVar10 + 0x1c) = param_2;
      plStack_b8 = plVar10;
      pplStack_b0 = &plStack_e0;
      func_0x0001074c8b54(lStack_d8);
      param_2 = (undefined4)uStack_d0;
      if ((uVar9 == 0) ||
         (func_0x0001074c8b48(CONCAT44(uVar28,CONCAT13(uVar27,CONCAT12(uVar25,CONCAT11(uVar23,uVar8)
                                                                      ))),(undefined4)uStack_d0,
                              (float)uVar9), uVar27 = uVar26, uVar25 = uVar24, uVar23 = uVar22,
         uVar8 = uVar21, uVar21 = uVar8, uVar22 = uVar23, uVar24 = uVar25, uVar26 = uVar27,
         (bool)uVar7)) {
        func_0x0001074c8674(uVar9 << 1);
        FUN_1074c6414(&lStack_f0);
        uVar9 = uStack_e8;
        if ((uStack_e8 & uStack_e8 - 1) == 0) {
          unaff_x28 = uStack_e8 - 1 & uVar20;
        }
        else {
          unaff_x28 = uVar20;
          if (uStack_e8 <= uVar20) {
            uVar12 = 0;
            if (uStack_e8 != 0) {
              uVar12 = uVar20 / uStack_e8;
            }
            unaff_x28 = uVar20 - uVar12 * uStack_e8;
          }
        }
      }
      plVar14 = *(long **)(lStack_f0 + unaff_x28 * 8);
      if (plVar14 == (long *)0x0) {
        *plVar10 = (long)plStack_e0;
        *(long ***)(lStack_f0 + unaff_x28 * 8) = &plStack_e0;
        plStack_e0 = plVar10;
        if (*plVar10 != 0) {
          uVar20 = *(ulong *)(*plVar10 + 8);
          if ((uVar9 & uVar9 - 1) == 0) {
            uVar20 = uVar20 & uVar9 - 1;
          }
          else if (uVar9 <= uVar20) {
            uVar12 = 0;
            if (uVar9 != 0) {
              uVar12 = uVar20 / uVar9;
            }
            uVar20 = uVar20 - uVar12 * uVar9;
          }
          *(long **)(lStack_f0 + uVar20 * 8) = plVar10;
        }
      }
      else {
        *plVar10 = *plVar14;
        *plVar14 = (long)plVar10;
      }
      plStack_b8 = (long *)0x0;
      lStack_d8 = lStack_d8 + 1;
      FUN_1074c6574(&plStack_b8);
LAB_1074bca84:
    }
    FUN_1074c74d0(&stack0xffffffffffffff60);
  }
  lVar13 = *(long *)(unaff_x20 + 0x58);
  *(long *)(unaff_x20 + 0x70) = unaff_x19[5];
  *(long *)(unaff_x20 + 0x60) = lVar13;
  lVar18 = *(long *)(unaff_x20 + 8);
  lVar19 = *(long *)(unaff_x20 + 0x10);
  uVar9 = lVar19 - lVar18 >> 8;
  lVar11 = lVar18;
  if ((ulong)(*(long *)(unaff_x20 + 0x68) - lVar13 >> 3) < uVar9) {
    if (uVar9 >> 0x3d != 0) goto LAB_1074bcc64;
    FUN_1074c63e4();
    func_0x0001074c8de4();
    FUN_1074c65bc(&stack0xffffffffffffff60);
    lVar18 = *(long *)(unaff_x20 + 8);
    lVar19 = *(long *)(unaff_x20 + 0x10);
    lVar11 = lVar18;
  }
  for (; puVar5 = PTR___ZSt7nothrow_1103469d8, lVar11 != lVar19; lVar11 = lVar11 + 0x100) {
    plVar10 = *(long **)(unaff_x20 + 0x60);
    if (plVar10 < *(long **)(unaff_x20 + 0x68)) {
      plVar14 = plVar10 + 1;
      *plVar10 = lVar18;
    }
    else {
      plVar10 = (long *)(unaff_x20 + 0x58);
      FUN_1074c63b0();
      lVar13 = *(long *)(unaff_x20 + 0x58);
      lVar1 = *(long *)(unaff_x20 + 0x60);
      if (plVar10 != (long *)0x0) {
        FUN_1074c63e4();
      }
      *(long *)((long)plVar10 + (lVar1 - lVar13)) = lVar18;
      func_0x0001074c8de4();
      plVar14 = *(long **)(unaff_x20 + 0x60);
      FUN_1074c65bc(&stack0xffffffffffffff60);
    }
    *(long **)(unaff_x20 + 0x60) = plVar14;
    lVar18 = lVar18 + 0x100;
  }
  lVar18 = *(long *)(unaff_x20 + 0x58);
  lVar19 = *(long *)(unaff_x20 + 0x60);
  pplVar16 = (long **)(lVar19 - lVar18 >> 3);
  plStack_b8 = (long *)0x0;
  pplStack_b0 = (long **)0x0;
  uVar8 = pplVar16 == (long **)0x81;
  pplVar17 = pplVar16;
  if ((long)pplVar16 < 0x81) {
    pplVar17 = (long **)0x0;
  }
  else {
    for (; pplVar17 != (long **)0x0; pplVar17 = (long **)((ulong)pplVar17 >> 1)) {
      lVar11 = (long)pplVar17 << 3;
      __ZnwmRKSt9nothrow_t(lVar11,puVar5);
      if (lVar11 != 0) goto LAB_1074bcbe4;
    }
    lVar11 = 0;
LAB_1074bcbe4:
    uStack_c8 = 0;
    pplStack_c0 = pplVar17;
    FUN_1074c7b4c(&plStack_b8,lVar11);
    pplStack_b0 = pplVar17;
    FUN_1074c7b64(&uStack_c8);
  }
  FUN_1074c7968(lVar18,lVar19,&stack0xffffffffffffff60,pplVar16,plStack_b8,pplVar17);
  FUN_1074c7b64(&plStack_b8);
  func_0x0001074c65fc(&lStack_f0);
  func_0x0001074c8620(extraout_x8);
  if ((bool)uVar8) {
    return;
  }
  ___stack_chk_fail();
LAB_1074bcc64:
  func_0x0001074c63d8();
LAB_1074bcc68:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1074bcc6c);
  (*pcVar6)();
}



/* Entry: 1074bccbc; end: 1074bd21b;  */

void FUN_1074bccbc(long *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  ulong uVar3;
  undefined1 in_NG;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 extraout_x8;
  long *plVar10;
  undefined8 extraout_x8_00;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  int extraout_w10;
  int extraout_w10_00;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long *plStack_90;
  long lStack_88;
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  plVar17 = (long *)param_1[2];
  lVar18 = *(long *)(*param_1 + 0x40) + *(long *)(param_1[1] + 0x60) * 0x88;
  func_0x00010747b888(plVar17[0x13],lVar18 + 0x20);
  uVar8 = param_1[3];
  FUN_1074c690c(uVar8,lVar18 + 0x20);
  if ((uVar8 & 1) == 0) {
    plVar20 = (long *)plVar17[0x7d];
    if ((plVar20 != (long *)0x0) && (plVar17[0x7f] != 0)) {
      plVar16 = plVar17 + 0x7f;
      func_0x0001074c8f9c();
      plVar21 = (long *)((long)plVar20 + -1);
      if (((ulong)plVar20 & (ulong)plVar21) == 0) {
        plVar22 = (long *)((ulong)plVar16 & (ulong)plVar21);
        in_NG = false;
      }
      else {
        in_NG = (long)plVar16 - (long)plVar20 < 0;
        plVar22 = plVar16;
        if (plVar20 <= plVar16) {
          uVar8 = 0;
          if (plVar20 != (long *)0x0) {
            uVar8 = (ulong)plVar16 / (ulong)plVar20;
          }
          plVar22 = (long *)((long)plVar16 - uVar8 * (long)plVar20);
        }
      }
      plVar15 = *(long **)(plVar17[0x7c] + (long)plVar22 * 8);
      if (plVar15 != (long *)0x0) {
        do {
          while( true ) {
            plVar15 = (long *)*plVar15;
            if (plVar15 == (long *)0x0) goto LAB_1074bcdb4;
            plVar9 = (long *)plVar15[1];
            in_NG = (long)plVar9 - (long)plVar16 < 0;
            if (plVar9 != plVar16) break;
            iVar7 = (int)plVar15 + 0x10;
            func_0x0001074c8fa4();
            if (iVar7 != 0) {
              plVar16 = (long *)param_1[3];
              plVar20 = plVar16 + 3;
              func_0x0001074c8f9c();
              plVar22 = (long *)plVar16[1];
              if (plVar22 == (long *)0x0) goto LAB_1074bd06c;
              uVar8 = (long)plVar22 - 1;
              if (((ulong)plVar22 & uVar8) == 0) {
                plVar21 = (long *)(uVar8 & (ulong)plVar20);
              }
              else {
                plVar21 = plVar20;
                if (plVar22 <= plVar20) {
                  uVar11 = 0;
                  if (plVar22 != (long *)0x0) {
                    uVar11 = (ulong)plVar20 / (ulong)plVar22;
                  }
                  plVar21 = (long *)((long)plVar20 - uVar11 * (long)plVar22);
                }
              }
              plVar9 = *(long **)(*plVar16 + (long)plVar21 * 8);
              if (plVar9 != (long *)0x0) goto LAB_1074bd020;
              goto LAB_1074bd06c;
            }
          }
          if (((ulong)plVar20 & (ulong)plVar21) == 0) {
            plVar9 = (long *)((ulong)plVar9 & (ulong)plVar21);
          }
          else if (plVar20 <= plVar9) {
            uVar8 = 0;
            if (plVar20 != (long *)0x0) {
              uVar8 = (ulong)plVar9 / (ulong)plVar20;
            }
            plVar9 = (long *)((long)plVar9 - uVar8 * (long)plVar20);
          }
          in_NG = (long)plVar9 - (long)plVar22 < 0;
        } while (plVar9 == plVar22);
      }
    }
LAB_1074bcdb4:
    plVar20 = (long *)plVar17[0x13];
    func_0x00010747b8f8(plVar20,lVar18 + 0x20);
    if (plVar20 != (long *)0x0) {
      plVar16 = (long *)param_1[3];
      lStack_88 = plVar20[1];
      plStack_90 = (long *)*plVar20;
      if (plVar20[1] != 0) {
        do {
          func_0x0001074c8654();
        } while (extraout_w10 != 0);
      }
      plVar20 = plVar16 + 3;
      func_0x0001074c8f9c();
      plVar21 = (long *)plVar16[1];
      if (plVar21 != (long *)0x0) {
        uVar8 = (long)plVar21 - 1;
        if (((ulong)plVar21 & uVar8) == 0) {
          plVar17 = (long *)(uVar8 & (ulong)plVar20);
          in_NG = false;
        }
        else {
          in_NG = (long)plVar20 - (long)plVar21 < 0;
          plVar17 = plVar20;
          if (plVar21 <= plVar20) {
            uVar11 = 0;
            if (plVar21 != (long *)0x0) {
              uVar11 = (ulong)plVar20 / (ulong)plVar21;
            }
            plVar17 = (long *)((long)plVar20 - uVar11 * (long)plVar21);
          }
        }
        plVar22 = *(long **)(*plVar16 + (long)plVar17 * 8);
        if (plVar22 != (long *)0x0) {
          do {
            while( true ) {
              plVar22 = (long *)*plVar22;
              if (plVar22 == (long *)0x0) goto LAB_1074bce7c;
              plVar15 = (long *)plVar22[1];
              in_NG = (long)plVar15 - (long)plVar20 < 0;
              if (plVar15 != plVar20) break;
              uVar11 = (ulong)(plVar22 + 2);
              func_0x0001074c8fa4();
              if ((uVar11 & 1) != 0) goto LAB_1074bcfe4;
            }
            if (((ulong)plVar21 & uVar8) == 0) {
              plVar15 = (long *)((ulong)plVar15 & uVar8);
            }
            else if (plVar21 <= plVar15) {
              uVar11 = 0;
              if (plVar21 != (long *)0x0) {
                uVar11 = (ulong)plVar15 / (ulong)plVar21;
              }
              plVar15 = (long *)((long)plVar15 - uVar11 * (long)plVar21);
            }
            in_NG = (long)plVar15 - (long)plVar17 < 0;
          } while (plVar15 == plVar17);
        }
      }
LAB_1074bce7c:
      plVar15 = (long *)0x68;
      __Znwm();
      plVar22 = plVar16 + 2;
      uStack_68 = 1;
      *plVar15 = 0;
      plVar15[1] = (long)plVar20;
      plStack_78 = plVar15;
      plStack_70 = plVar22;
      func_0x000104c2fe00(plVar15 + 2,lVar18 + 0x20);
      plVar15[10] = lStack_88;
      plVar15[9] = (long)plStack_90;
      if (lStack_88 != 0) {
        do {
          func_0x0001074c8654();
        } while (extraout_w10_00 != 0);
      }
      *(undefined4 *)(plVar15 + 0xc) = 0;
      func_0x0001074c8a10();
      if ((plVar21 == (long *)0x0) || (func_0x0001074c8b48(), (bool)in_NG)) {
        bVar4 = (long *)0x2 < plVar21;
        bVar6 = plVar21 == (long *)0x3;
        func_0x0001074c8674((long)plVar21 << 1);
        uVar1 = extraout_x8;
        if (!bVar4 || bVar6) {
          uVar1 = extraout_x9;
        }
        FUN_1074c2f30(plVar16,uVar1);
        plVar21 = (long *)plVar16[1];
        if (((ulong)plVar21 & (long)plVar21 - 1U) == 0) {
          plVar17 = (long *)((long)plVar21 - 1U & (ulong)plVar20);
        }
        else {
          plVar17 = plVar20;
          if (plVar21 <= plVar20) {
            uVar8 = 0;
            if (plVar21 != (long *)0x0) {
              uVar8 = (ulong)plVar20 / (ulong)plVar21;
            }
            plVar17 = (long *)((long)plVar20 - uVar8 * (long)plVar21);
          }
        }
      }
      lVar18 = *plVar16;
      plVar20 = *(long **)(lVar18 + (long)plVar17 * 8);
      if (plVar20 == (long *)0x0) {
        *plVar15 = *plVar22;
        *plVar22 = (long)plVar15;
        *(long **)(lVar18 + (long)plVar17 * 8) = plVar22;
        if (*plVar15 != 0) {
          plVar17 = *(long **)(*plVar15 + 8);
          if (((ulong)plVar21 & (long)plVar21 - 1U) == 0) {
            plVar17 = (long *)((ulong)plVar17 & (long)plVar21 - 1U);
          }
          else if (plVar21 <= plVar17) {
            uVar8 = 0;
            if (plVar21 != (long *)0x0) {
              uVar8 = (ulong)plVar17 / (ulong)plVar21;
            }
            plVar17 = (long *)((long)plVar17 - uVar8 * (long)plVar21);
          }
          *(long **)(lVar18 + (long)plVar17 * 8) = plVar15;
        }
      }
      else {
        *plVar15 = *plVar20;
        *plVar20 = (long)plVar15;
      }
      plStack_78 = (long *)0x0;
      plVar16[3] = plVar16[3] + 1;
      func_0x0001074c8c40();
LAB_1074bcfe4:
      func_0x00010725af58(&plStack_90);
    }
  }
  return;
  while( true ) {
    if (((ulong)plVar22 & uVar8) == 0) {
      plVar10 = (long *)((ulong)plVar10 & uVar8);
    }
    else if (plVar22 <= plVar10) {
      uVar11 = 0;
      if (plVar22 != (long *)0x0) {
        uVar11 = (ulong)plVar10 / (ulong)plVar22;
      }
      plVar10 = (long *)((long)plVar10 - uVar11 * (long)plVar22);
    }
    if (plVar10 != plVar21) break;
LAB_1074bd020:
    plVar9 = (long *)*plVar9;
    if (plVar9 == (long *)0x0) break;
    plVar10 = (long *)plVar9[1];
    if (plVar10 == plVar20) {
      uVar11 = (ulong)(plVar9 + 2);
      func_0x0001074c8fa4();
      if ((uVar11 & 1) != 0) goto LAB_1074bd1c4;
      goto LAB_1074bd020;
    }
  }
LAB_1074bd06c:
  plVar9 = plVar16 + 2;
  plVar10 = (long *)0x68;
  __Znwm();
  uStack_68 = 1;
  *plVar10 = 0;
  plVar10[1] = (long)plVar20;
  plStack_78 = plVar10;
  plStack_70 = plVar9;
  func_0x000104c2fe00(plVar10 + 2,lVar18 + 0x20);
  plVar19 = plVar10 + 9;
  *(undefined1 *)plVar19 = 0;
  *(undefined4 *)(plVar10 + 0xc) = 0xffffffff;
  FUN_1074c2c90(plVar19);
  uVar2 = *(uint *)(plVar15 + 0xc);
  uVar5 = (int)(uVar2 + 1) < 0;
  if (uVar2 != 0xffffffff) {
    plStack_90 = plVar19;
    (*(code *)(&PTR_FUN_1109b4dd8)[uVar2])(&plStack_90,plVar15 + 9);
    *(uint *)(plVar10 + 0xc) = uVar2;
  }
  func_0x0001074c8b54(plVar16[3]);
  if ((plVar22 == (long *)0x0) || (func_0x0001074c8b48(), (bool)uVar5)) {
    bVar4 = (long *)0x2 < plVar22;
    bVar6 = plVar22 == (long *)0x3;
    func_0x0001074c8674((long)plVar22 << 1);
    uVar1 = extraout_x8_00;
    if (!bVar4 || bVar6) {
      uVar1 = extraout_x9_00;
    }
    FUN_1074c2f30(plVar16,uVar1);
    plVar22 = (long *)plVar16[1];
    if (((ulong)plVar22 & (long)plVar22 - 1U) == 0) {
      plVar21 = (long *)((long)plVar22 - 1U & (ulong)plVar20);
    }
    else {
      plVar21 = plVar20;
      if (plVar22 <= plVar20) {
        uVar8 = 0;
        if (plVar22 != (long *)0x0) {
          uVar8 = (ulong)plVar20 / (ulong)plVar22;
        }
        plVar21 = (long *)((long)plVar20 - uVar8 * (long)plVar22);
      }
    }
  }
  lVar18 = *plVar16;
  plVar20 = *(long **)(lVar18 + (long)plVar21 * 8);
  if (plVar20 == (long *)0x0) {
    *plVar10 = *plVar9;
    *plVar9 = (long)plVar10;
    *(long **)(lVar18 + (long)plVar21 * 8) = plVar9;
    if (*plVar10 != 0) {
      plVar20 = *(long **)(*plVar10 + 8);
      if (((ulong)plVar22 & (long)plVar22 - 1U) == 0) {
        plVar20 = (long *)((ulong)plVar20 & (long)plVar22 - 1U);
      }
      else if (plVar22 <= plVar20) {
        uVar8 = 0;
        if (plVar22 != (long *)0x0) {
          uVar8 = (ulong)plVar20 / (ulong)plVar22;
        }
        plVar20 = (long *)((long)plVar20 - uVar8 * (long)plVar22);
      }
      *(long **)(lVar18 + (long)plVar20 * 8) = plVar10;
    }
  }
  else {
    *plVar10 = *plVar20;
    *plVar20 = (long)plVar10;
  }
  plStack_78 = (long *)0x0;
  plVar16[3] = plVar16[3] + 1;
  func_0x0001074c8c40();
LAB_1074bd1c4:
  uVar11 = plVar17[0x7d];
  lVar18 = *plVar15;
  uVar8 = plVar15[1];
  uVar12 = uVar11 - 1;
  if ((uVar11 & uVar12) == 0) {
    uVar8 = uVar12 & uVar8;
  }
  else if (uVar11 <= uVar8) {
    uVar14 = 0;
    if (uVar11 != 0) {
      uVar14 = uVar8 / uVar11;
    }
    uVar8 = uVar8 - uVar14 * uVar11;
  }
  lVar13 = plVar17[0x7c];
  plVar20 = *(long **)(lVar13 + uVar8 * 8);
  do {
    plVar16 = plVar20;
    plVar20 = (long *)*plVar16;
  } while ((long *)*plVar16 != plVar15);
  if (plVar16 == plVar17 + 0x7e) {
LAB_1074c6a70:
    if (lVar18 == 0) {
LAB_1074c6aa0:
      *(undefined8 *)(lVar13 + uVar8 * 8) = 0;
      lVar18 = *plVar15;
      goto LAB_1074c6aa8;
    }
    uVar14 = *(ulong *)(lVar18 + 8);
    if ((uVar11 & uVar12) == 0) {
      uVar14 = uVar14 & uVar12;
    }
    else if (uVar11 <= uVar14) {
      uVar3 = 0;
      if (uVar11 != 0) {
        uVar3 = uVar14 / uVar11;
      }
      uVar14 = uVar14 - uVar3 * uVar11;
    }
    if (uVar14 != uVar8) goto LAB_1074c6aa0;
  }
  else {
    uVar14 = plVar16[1];
    if ((uVar11 & uVar12) == 0) {
      uVar14 = uVar14 & uVar12;
    }
    else if (uVar11 <= uVar14) {
      uVar3 = 0;
      if (uVar11 != 0) {
        uVar3 = uVar14 / uVar11;
      }
      uVar14 = uVar14 - uVar3 * uVar11;
    }
    if (uVar14 != uVar8) goto LAB_1074c6a70;
LAB_1074c6aa8:
    if (lVar18 == 0) goto LAB_1074c6ae0;
  }
  uVar14 = *(ulong *)(lVar18 + 8);
  if ((uVar11 & uVar12) == 0) {
    uVar14 = uVar14 & uVar12;
  }
  else if (uVar11 <= uVar14) {
    uVar12 = 0;
    if (uVar11 != 0) {
      uVar12 = uVar14 / uVar11;
    }
    uVar14 = uVar14 - uVar12 * uVar11;
  }
  if (uVar14 != uVar8) {
    *(long **)(lVar13 + uVar14 * 8) = plVar16;
    lVar18 = *plVar15;
  }
LAB_1074c6ae0:
  *plVar16 = lVar18;
  *plVar15 = 0;
  plVar17[0x7f] = plVar17[0x7f] + -1;
  func_0x0001074c8c9c();
  FUN_1074c3090(&stack0xffffffffffffffd8);
  return;
}



/* Entry: 1074bd21c; end: 1074bd283;  */

uint FUN_1074bd21c(double param_1,uint param_2)

{
  float *unaff_x19;
  long *unaff_x21;
  
  func_0x0001074c8a48();
  FUN_1073bbb44();
  (**(code **)(*unaff_x21 + 0x48))();
  FUN_1073bbb84();
  return (int)(param_1 * (double)*unaff_x19) + param_2 & 0xffff |
         ((int)(param_1 * (double)unaff_x19[1]) + (param_2 >> 0x10)) * 0x10000;
}



/* Entry: 1074bd284; end: 1074bd29b;  */

undefined1 * FUN_1074bd284(undefined8 param_1,double param_2,undefined1 *param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  byte bVar4;
  undefined1 uVar5;
  undefined1 *puVar6;
  undefined ***pppuVar7;
  undefined ****ppppuVar8;
  ulong uVar9;
  undefined8 **ppuVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined1 *extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  undefined8 extraout_x8_04;
  uint extraout_w9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w11;
  long lVar13;
  long lVar14;
  undefined1 *puVar15;
  undefined8 uVar16;
  long *plVar17;
  byte bVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  long *plVar22;
  long lVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  double dVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  double dVar32;
  float fVar33;
  undefined8 *puStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined1 auStack_558 [40];
  long lStack_530;
  long lStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined ***pppuStack_500;
  undefined8 *puStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined4 uStack_4e0;
  char cStack_4c8;
  ulong uStack_4b8;
  undefined1 uStack_4b0;
  undefined8 uStack_448;
  long lStack_440;
  undefined1 auStack_3d0 [224];
  undefined8 *puStack_2f0;
  undefined8 uStack_2e8;
  undefined **ppuStack_240;
  undefined1 *puStack_238;
  long lStack_230;
  undefined ***pppuStack_228;
  undefined1 uStack_220;
  undefined ***pppuStack_218;
  undefined8 uStack_b0;
  
  if ((param_3[0x10] & 1) != 0) {
    return param_3;
  }
  func_0x000104bdc2c8();
  puVar15 = param_3;
  func_0x0001074c8688();
  puVar6 = puVar15 + 0xa8;
  uStack_b0 = extraout_x8_00;
  func_0x0001074c9014(*(long *)(puVar15 + 0x18),puVar6);
  FUN_10750a4d8(auStack_558);
  uVar16 = *(undefined8 *)(param_4 + 0x30);
  uStack_520 = *(undefined8 *)(param_3 + 0x98);
  lVar13 = *(long *)(puVar15 + 0x18);
  FUN_1074c25ac(&ppuStack_240,param_3 + 0x2c0,param_3 + 0x28);
  if (pppuStack_228 != (undefined ***)0x0) {
    FUN_10750a49c(auStack_3d0,puVar6);
    func_0x00010786a340(&uStack_448);
    lVar14 = *(long *)(param_4 + 0x40) + 0x20;
    puVar12 = (undefined8 *)(lVar13 + 0x40);
    FUN_10749b190();
    if (lVar14 == 0) {
      puVar12 = puVar12 + 7;
      func_0x00010749b1c8(&uStack_448);
    }
    pppuVar7 = &ppuStack_240;
    FUN_10749b110();
    pppuStack_500 = pppuVar7;
    puStack_4f8 = puVar12;
    while (pppuStack_500 != (undefined ***)0x0) {
      plVar19 = (long *)*puStack_4f8;
      (**(code **)(*plVar19 + 0x48))(plVar19,&uStack_520);
      uStack_4b8 = 0;
      uStack_4b0 = 1;
      (**(code **)(*plVar19 + 0x50))
                (plVar19,&uStack_448,auStack_3d0,*(long *)(param_4 + 0x40) + 8,uVar16,&uStack_4b8);
      FUN_10749e2c4(&pppuStack_500);
    }
    FUN_10745f898(&uStack_448);
    FUN_1073e0338(auStack_3d0);
  }
  pppuVar7 = &ppuStack_240;
  FUN_10749e34c();
  __ZNSt3__16chrono12steady_clock3nowEv();
  puStack_4f8 = (undefined8 *)0x0;
  pppuStack_500 = (undefined ***)0x0;
  uStack_4e8 = 0;
  uStack_4f0 = 0;
  uStack_4e0 = 0x3f800000;
  func_0x0001072abda8(&pppuStack_500,*(long *)(param_3 + 0x2d0) - *(long *)(param_3 + 0x2c8) >> 8);
  bVar4 = 0;
  bVar3 = false;
  plVar22 = *(long **)(param_3 + 800);
  for (plVar19 = *(long **)(param_3 + 0x318); plVar19 != plVar22; plVar19 = plVar19 + 1) {
    lVar13 = *plVar19;
    ppppuVar8 = &pppuStack_500;
    FUN_107388eb4(ppppuVar8,lVar13 + 0x18);
    if (((ulong)ppppuVar8 & 1) == 0) {
      func_0x0001072a1b80(&pppuStack_500,lVar13 + 0x18);
      puVar6 = param_3 + 0x60;
      FUN_1074c5318(puVar6,*(undefined8 *)(lVar13 + 0x18));
      if ((puVar6 != (undefined1 *)0x0) && ((puVar6[0x58] & 1) == 0)) {
        lVar14 = *(long *)(lVar13 + 0x58);
        lVar13 = *(long *)(*(long *)(lVar13 + 0x88) + 0x28);
        func_0x000107751284(auStack_3d0);
        lVar13 = lVar13 + lVar14 * 0xa0;
        uStack_518 = *(undefined8 *)(lVar13 + 0x38);
        uVar27 = *(undefined8 *)(lVar13 + 0x30);
        uStack_520 = uVar27;
        if (*(long *)(lVar13 + 0x38) != 0) {
          do {
            func_0x0001074c8654();
          } while (extraout_w10 != 0);
        }
        func_0x0001074c8b7c(*(undefined8 *)(param_3 + 0x18),&uStack_4b8);
        func_0x0001074c8ab0(*(undefined8 *)(param_3 + 0x18));
        func_0x0001074c8e30();
        func_0x000107751444(auStack_3d0,&uStack_520,&uStack_448);
        uStack_2e8 = uVar16;
        func_0x0001074c8a3c();
        func_0x0001074c8be8();
        func_0x0001074c8be0();
        func_0x000107267e44(&uStack_520);
        func_0x0001074c8f14();
        fVar30 = (float)uVar27;
        lVar13 = *(long *)(param_3 + 0x88);
        lVar14 = *(long *)(param_3 + 0x90);
        uStack_448 = *(undefined8 *)(param_3 + 0x18);
        lStack_440 = *(long *)(param_3 + 0x20);
        if (lStack_440 != 0) {
          do {
            func_0x0001074c88e0();
            fVar30 = (float)uVar27;
          } while (extraout_w11 != 0);
        }
        func_0x0001074c8ce8();
        uStack_4b8 = uStack_4b8 & 0xffffffff00000000;
        func_0x0001074c8bd0(extraout_x8_01 + 0x8c0);
        func_0x0001074c8c0c();
        fVar24 = (float)((double)(((long)pppuVar7 - lVar14) / 1000) / 1000000.0);
        func_0x0001074c8ce8(uStack_448);
        uVar1 = 0;
        if (fVar24 <= fVar30) {
          uVar1 = extraout_w9;
        }
        uStack_4b8 = 0;
        FUN_1073f62c0(extraout_x8_02 + 0x920,&ppuStack_240,auStack_3d0,&uStack_4b8);
        fVar29 = SUB84(param_2,0);
        fVar25 = fVar24;
        func_0x0001074c8c0c();
        func_0x0001074c8ce8(uStack_448);
        uStack_4b8 = uStack_4b8 & 0xffffffff00000000;
        func_0x0001074c8bd0(extraout_x8_03 + 0x860);
        func_0x0001074c8c0c();
        if (fVar29 != 0.0 || fVar24 != 0.0) {
          *(float *)(puVar6 + 0x44) = fVar25;
          *(float *)(puVar6 + 0x48) = fVar30;
          fVar30 = fVar24;
          fVar26 = fVar29;
          if ((uVar1 & (byte)puVar6[0x38]) == 1) {
            fVar30 = *(float *)(puVar6 + 0x30);
            fVar26 = *(float *)(puVar6 + 0x34);
          }
          fVar33 = (float)((double)(((long)pppuVar7 - lVar13) / 1000) / 1000000.0);
          *(float *)(puVar6 + 0x28) = fVar24;
          *(float *)(puVar6 + 0x2c) = fVar29;
          fVar31 = *(float *)(puVar6 + 0x20) + fVar33 * fVar30;
          fVar30 = *(float *)(puVar6 + 0x24) - fVar33 * fVar26;
          *(float *)(puVar6 + 0x20) = fVar31;
          *(float *)(puVar6 + 0x24) = fVar30;
          dVar32 = (double)fVar31;
          dVar28 = (double)fVar30;
          param_2 = (double)fVar25;
          if (SQRT(dVar32 * dVar32 + dVar28 * dVar28) <= param_2) {
            bVar18 = 1;
          }
          else {
            bVar18 = 0;
            puVar6[0x58] = 1;
          }
        }
        else {
          bVar18 = 0;
        }
        func_0x0001073ad4c4(&uStack_448);
        bVar4 = bVar18 | bVar4;
        bVar3 = (bool)(bVar3 | (fVar29 != 0.0 || fVar24 != 0.0));
        func_0x0001074c8e5c();
      }
    }
  }
  *(undefined ****)(param_3 + 0x88) = pppuVar7;
  if (bVar3) {
    ppuStack_240 = &PTR_DAT_1109b4ec8;
    pppuStack_228 = &ppuStack_240;
    uStack_220 = 1;
    puStack_238 = param_3;
    lStack_230 = param_4;
    pppuStack_218 = pppuVar7;
    FUN_1074bc810(param_3 + 0x2c0,&ppuStack_240);
    FUN_1074c54d8(&ppuStack_240);
  }
  func_0x0001072a8888(&pppuStack_500);
  puStack_570 = &uStack_568;
  uStack_568 = 0;
  uStack_560 = 0;
  plVar19 = *(long **)(param_3 + 0x318);
  plVar22 = *(long **)(param_3 + 800);
  do {
    uVar5 = plVar19 == plVar22;
    if ((bool)uVar5) {
      func_0x0001077512dc(**(undefined4 **)(param_4 + 0x38),auStack_3d0);
      uStack_2e8 = *(undefined8 *)(param_4 + 0x30);
      func_0x0001074c8a3c();
      func_0x0001074c8f14();
      uVar16 = *(undefined8 *)(param_3 + 0x18);
      FUN_1074bda4c(uVar16,&ppuStack_240);
      *extraout_x8 = (char)uVar16;
      func_0x0001074c31d0(extraout_x8 + 8,param_3 + 0xf0);
      extraout_x8[0x20] = bVar4;
      *(undefined8 *)(extraout_x8 + 0x30) = 0;
      *(undefined8 *)(extraout_x8 + 0x28) = 0;
      *(undefined8 *)(extraout_x8 + 0x40) = 0;
      *(undefined8 *)(extraout_x8 + 0x38) = 0;
      *(undefined8 *)(extraout_x8 + 0x50) = 0;
      *(undefined8 *)(extraout_x8 + 0x48) = 0;
      *(undefined8 *)(extraout_x8 + 0x60) = 0;
      *(undefined8 *)(extraout_x8 + 0x58) = 0;
      *(undefined4 *)(extraout_x8 + 0x68) = 0x3f800000;
      *(undefined4 *)(extraout_x8 + 0x70) = 0;
      func_0x0001074c8e5c();
      func_0x0001074c71cc(&puStack_570);
      puVar6 = auStack_558;
      func_0x00010726e4c8(puVar6);
      func_0x0001074c8620(uStack_b0);
      if ((bool)uVar5) {
        return puVar6;
      }
      ___stack_chk_fail();
      func_0x0001074c91b0();
      FUN_1074c54d8();
      func_0x0001072a8888(&pppuStack_500);
      puVar6 = auStack_558;
      func_0x00010726e4c8();
      func_0x0001074c8820();
      func_0x0001074c8688();
      if (*(int *)(puVar6 + 0x250) == 0) {
        puVar15 = (undefined1 *)0x0;
      }
      else {
        uVar5 = *(int *)(puVar6 + 0x250) == 1;
        if ((bool)uVar5) {
          puVar15 = (undefined1 *)(ulong)(byte)puVar6[0x220];
        }
        else {
          func_0x0001074c8910();
          puVar15 = puVar6 + 0x220;
          func_0x000107280464(puVar15);
          puVar6 = puVar15;
          func_0x0001074c8928();
        }
      }
      func_0x0001074c8620(extraout_x8_04);
      if ((bool)uVar5) {
        return (undefined1 *)(ulong)((uint)puVar15 & 1);
      }
      ___stack_chk_fail();
      func_0x0001074c8834();
      func_0x0001074c8820();
      return puVar6;
    }
    lVar13 = *plVar19;
    uVar9 = *(ulong *)(lVar13 + 0x88);
    FUN_1074bf230(uVar9,*(undefined8 *)(lVar13 + 0x58),*(undefined8 *)(param_3 + 0x98));
    if ((uVar9 & 1) == 0) {
      lVar20 = *(long *)(lVar13 + 0x58);
      lVar23 = *(long *)(*(long *)(lVar13 + 0x88) + 0x28);
      lVar21 = *(long *)(*(long *)(lVar13 + 0x88) + 0x40);
      lVar14 = *(long *)(lVar13 + 0x20);
      lVar2 = *(long *)(lVar13 + 0x28);
      if (lVar14 != lVar2) {
        ppuVar10 = &puStack_570;
        FUN_1074c3544(ppuVar10,lVar14,lVar2);
        if (((ulong)ppuVar10 & 1) != 0) goto LAB_1074bd854;
        for (; lVar14 != lVar2; lVar14 = lVar14 + 8) {
          FUN_1074c39e8(&puStack_570,lVar14);
        }
      }
      plVar17 = (long *)(lVar23 + lVar20 * 0xa0);
      plVar11 = plVar17;
      (**(code **)(*plVar17 + 0x30))(plVar17);
      func_0x00010726236c(&pppuStack_500);
      if (cStack_4c8 == '\x01') {
        puVar6 = auStack_558;
        func_0x000107869b38(&ppuStack_240,puVar6,&pppuStack_500);
        func_0x00010786967c();
        FUN_1073dcf84(&uStack_520,&ppuStack_240,puVar6);
        FUN_1073de9d8(&ppuStack_240);
      }
      else {
        func_0x00010786967c();
        func_0x000107277f0c(&uStack_520,plVar11);
      }
      func_0x0001077512dc(**(undefined4 **)(param_4 + 0x38),auStack_3d0);
      lStack_528 = plVar17[7];
      lStack_530 = plVar17[6];
      if (plVar17[7] != 0) {
        do {
          func_0x0001074c8654();
        } while (extraout_w10_00 != 0);
      }
      func_0x0001074c8b7c(*(undefined8 *)(param_3 + 0x18),&uStack_4b8);
      func_0x0001074c8ab0(*(undefined8 *)(param_3 + 0x18));
      func_0x0001074c8e30();
      func_0x000107751444(auStack_3d0,&lStack_530,&uStack_448);
      uStack_2e8 = *(undefined8 *)(param_4 + 0x30);
      puStack_2f0 = &uStack_520;
      func_0x0001074c8a3c();
      func_0x0001074c8be8();
      func_0x0001074c8be0();
      func_0x000107267e44(&lStack_530);
      func_0x0001074c8f14();
      FUN_1074c35b4(*(undefined4 *)(param_4 + 0x48),&ppuStack_240,*(undefined8 *)(param_3 + 0xd8),
                    *(undefined8 *)(param_3 + 0xe0),param_3 + 8,*(undefined8 *)(lVar13 + 0x60),
                    lVar21 + lVar20 * 0x100);
      func_0x0001074c8e5c();
      func_0x00010726b264(&uStack_520);
      func_0x00010724b3d8(&pppuStack_500);
    }
LAB_1074bd854:
    plVar19 = plVar19 + 1;
  } while( true );
}



/* Entry: 1074bd29c; end: 1074bda4b;  */

undefined1 *
FUN_1074bd29c(undefined1 *param_1,undefined8 param_2,double param_3,long param_4,long param_5)

{
  uint uVar1;
  bool bVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined ***pppuVar5;
  undefined ****ppppuVar6;
  ulong uVar7;
  undefined8 **ppuVar8;
  long *plVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined8 extraout_x8_03;
  uint extraout_w9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 *puVar15;
  undefined8 uVar16;
  long *plVar17;
  byte bVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  long *plVar22;
  long lVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  double dVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  double dVar32;
  float fVar33;
  undefined8 *puStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined1 auStack_548 [40];
  long lStack_520;
  long lStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined ***pppuStack_4f0;
  undefined8 *puStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined4 uStack_4d0;
  char cStack_4b8;
  ulong uStack_4a8;
  undefined1 uStack_4a0;
  undefined8 uStack_438;
  long lStack_430;
  undefined1 auStack_3c0 [224];
  undefined8 *puStack_2e0;
  undefined8 uStack_2d8;
  undefined **ppuStack_230;
  long lStack_228;
  long lStack_220;
  undefined ***pppuStack_218;
  undefined1 uStack_210;
  undefined ***pppuStack_208;
  undefined8 uStack_a0;
  
  lVar12 = param_4;
  func_0x0001074c8688();
  lVar13 = lVar12 + 0xa8;
  uStack_a0 = extraout_x8;
  func_0x0001074c9014(*(long *)(lVar12 + 0x18),lVar13);
  FUN_10750a4d8(auStack_548);
  uVar16 = *(undefined8 *)(param_5 + 0x30);
  uStack_510 = *(undefined8 *)(param_4 + 0x98);
  lVar12 = *(long *)(lVar12 + 0x18);
  FUN_1074c25ac(&ppuStack_230,param_4 + 0x2c0,param_4 + 0x28);
  if (pppuStack_218 != (undefined ***)0x0) {
    FUN_10750a49c(auStack_3c0,lVar13);
    func_0x00010786a340(&uStack_438);
    lVar13 = *(long *)(param_5 + 0x40) + 0x20;
    puVar11 = (undefined8 *)(lVar12 + 0x40);
    FUN_10749b190();
    if (lVar13 == 0) {
      puVar11 = puVar11 + 7;
      func_0x00010749b1c8(&uStack_438);
    }
    pppuVar5 = &ppuStack_230;
    FUN_10749b110();
    pppuStack_4f0 = pppuVar5;
    puStack_4e8 = puVar11;
    while (pppuStack_4f0 != (undefined ***)0x0) {
      plVar19 = (long *)*puStack_4e8;
      (**(code **)(*plVar19 + 0x48))(plVar19,&uStack_510);
      uStack_4a8 = 0;
      uStack_4a0 = 1;
      (**(code **)(*plVar19 + 0x50))
                (plVar19,&uStack_438,auStack_3c0,*(long *)(param_5 + 0x40) + 8,uVar16,&uStack_4a8);
      FUN_10749e2c4(&pppuStack_4f0);
    }
    FUN_10745f898(&uStack_438);
    FUN_1073e0338(auStack_3c0);
  }
  pppuVar5 = &ppuStack_230;
  FUN_10749e34c();
  __ZNSt3__16chrono12steady_clock3nowEv();
  puStack_4e8 = (undefined8 *)0x0;
  pppuStack_4f0 = (undefined ***)0x0;
  uStack_4d8 = 0;
  uStack_4e0 = 0;
  uStack_4d0 = 0x3f800000;
  func_0x0001072abda8(&pppuStack_4f0,*(long *)(param_4 + 0x2d0) - *(long *)(param_4 + 0x2c8) >> 8);
  bVar3 = 0;
  bVar2 = false;
  plVar22 = *(long **)(param_4 + 800);
  for (plVar19 = *(long **)(param_4 + 0x318); plVar19 != plVar22; plVar19 = plVar19 + 1) {
    lVar13 = *plVar19;
    ppppuVar6 = &pppuStack_4f0;
    FUN_107388eb4(ppppuVar6,lVar13 + 0x18);
    if (((ulong)ppppuVar6 & 1) == 0) {
      func_0x0001072a1b80(&pppuStack_4f0,lVar13 + 0x18);
      lVar12 = param_4 + 0x60;
      FUN_1074c5318(lVar12,*(undefined8 *)(lVar13 + 0x18));
      if ((lVar12 != 0) && ((*(byte *)(lVar12 + 0x58) & 1) == 0)) {
        lVar14 = *(long *)(lVar13 + 0x58);
        lVar13 = *(long *)(*(long *)(lVar13 + 0x88) + 0x28);
        func_0x000107751284(auStack_3c0);
        lVar13 = lVar13 + lVar14 * 0xa0;
        uStack_508 = *(undefined8 *)(lVar13 + 0x38);
        uVar27 = *(undefined8 *)(lVar13 + 0x30);
        uStack_510 = uVar27;
        if (*(long *)(lVar13 + 0x38) != 0) {
          do {
            func_0x0001074c8654();
          } while (extraout_w10 != 0);
        }
        func_0x0001074c8b7c(*(undefined8 *)(param_4 + 0x18),&uStack_4a8);
        func_0x0001074c8ab0(*(undefined8 *)(param_4 + 0x18));
        func_0x0001074c8e30();
        func_0x000107751444(auStack_3c0,&uStack_510,&uStack_438);
        uStack_2d8 = uVar16;
        func_0x0001074c8a3c();
        func_0x0001074c8be8();
        func_0x0001074c8be0();
        func_0x000107267e44(&uStack_510);
        func_0x0001074c8f14();
        fVar30 = (float)uVar27;
        lVar13 = *(long *)(param_4 + 0x88);
        lVar14 = *(long *)(param_4 + 0x90);
        uStack_438 = *(undefined8 *)(param_4 + 0x18);
        lStack_430 = *(long *)(param_4 + 0x20);
        if (lStack_430 != 0) {
          do {
            func_0x0001074c88e0();
            fVar30 = (float)uVar27;
          } while (extraout_w11 != 0);
        }
        func_0x0001074c8ce8();
        uStack_4a8 = uStack_4a8 & 0xffffffff00000000;
        func_0x0001074c8bd0(extraout_x8_00 + 0x8c0);
        func_0x0001074c8c0c();
        fVar24 = (float)((double)(((long)pppuVar5 - lVar14) / 1000) / 1000000.0);
        func_0x0001074c8ce8(uStack_438);
        uVar1 = 0;
        if (fVar24 <= fVar30) {
          uVar1 = extraout_w9;
        }
        uStack_4a8 = 0;
        FUN_1073f62c0(extraout_x8_01 + 0x920,&ppuStack_230,auStack_3c0,&uStack_4a8);
        fVar29 = SUB84(param_3,0);
        fVar25 = fVar24;
        func_0x0001074c8c0c();
        func_0x0001074c8ce8(uStack_438);
        uStack_4a8 = uStack_4a8 & 0xffffffff00000000;
        func_0x0001074c8bd0(extraout_x8_02 + 0x860);
        func_0x0001074c8c0c();
        if (fVar29 != 0.0 || fVar24 != 0.0) {
          *(float *)(lVar12 + 0x44) = fVar25;
          *(float *)(lVar12 + 0x48) = fVar30;
          fVar30 = fVar24;
          fVar26 = fVar29;
          if ((uVar1 & *(byte *)(lVar12 + 0x38)) == 1) {
            fVar30 = *(float *)(lVar12 + 0x30);
            fVar26 = *(float *)(lVar12 + 0x34);
          }
          fVar33 = (float)((double)(((long)pppuVar5 - lVar13) / 1000) / 1000000.0);
          *(float *)(lVar12 + 0x28) = fVar24;
          *(float *)(lVar12 + 0x2c) = fVar29;
          fVar31 = *(float *)(lVar12 + 0x20) + fVar33 * fVar30;
          fVar30 = *(float *)(lVar12 + 0x24) - fVar33 * fVar26;
          *(float *)(lVar12 + 0x20) = fVar31;
          *(float *)(lVar12 + 0x24) = fVar30;
          dVar32 = (double)fVar31;
          dVar28 = (double)fVar30;
          param_3 = (double)fVar25;
          if (SQRT(dVar32 * dVar32 + dVar28 * dVar28) <= param_3) {
            bVar18 = 1;
          }
          else {
            bVar18 = 0;
            *(undefined1 *)(lVar12 + 0x58) = 1;
          }
        }
        else {
          bVar18 = 0;
        }
        func_0x0001073ad4c4(&uStack_438);
        bVar3 = bVar18 | bVar3;
        bVar2 = (bool)(bVar2 | (fVar29 != 0.0 || fVar24 != 0.0));
        func_0x0001074c8e5c();
      }
    }
  }
  *(undefined ****)(param_4 + 0x88) = pppuVar5;
  if (bVar2) {
    ppuStack_230 = &PTR_DAT_1109b4ec8;
    pppuStack_218 = &ppuStack_230;
    uStack_210 = 1;
    lStack_228 = param_4;
    lStack_220 = param_5;
    pppuStack_208 = pppuVar5;
    FUN_1074bc810(param_4 + 0x2c0,&ppuStack_230);
    FUN_1074c54d8(&ppuStack_230);
  }
  func_0x0001072a8888(&pppuStack_4f0);
  puStack_560 = &uStack_558;
  uStack_558 = 0;
  uStack_550 = 0;
  plVar19 = *(long **)(param_4 + 0x318);
  plVar22 = *(long **)(param_4 + 800);
  do {
    uVar4 = plVar19 == plVar22;
    if ((bool)uVar4) {
      func_0x0001077512dc(**(undefined4 **)(param_5 + 0x38),auStack_3c0);
      uStack_2d8 = *(undefined8 *)(param_5 + 0x30);
      func_0x0001074c8a3c();
      func_0x0001074c8f14();
      uVar16 = *(undefined8 *)(param_4 + 0x18);
      FUN_1074bda4c(uVar16,&ppuStack_230);
      *param_1 = (char)uVar16;
      func_0x0001074c31d0(param_1 + 8,param_4 + 0xf0);
      param_1[0x20] = bVar3;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined8 *)(param_1 + 0x50) = 0;
      *(undefined8 *)(param_1 + 0x48) = 0;
      *(undefined8 *)(param_1 + 0x60) = 0;
      *(undefined8 *)(param_1 + 0x58) = 0;
      *(undefined4 *)(param_1 + 0x68) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x70) = 0;
      func_0x0001074c8e5c();
      func_0x0001074c71cc(&puStack_560);
      puVar10 = auStack_548;
      func_0x00010726e4c8(puVar10);
      func_0x0001074c8620(uStack_a0);
      if ((bool)uVar4) {
        return puVar10;
      }
      ___stack_chk_fail();
      func_0x0001074c91b0();
      FUN_1074c54d8();
      func_0x0001072a8888(&pppuStack_4f0);
      puVar10 = auStack_548;
      func_0x00010726e4c8();
      func_0x0001074c8820();
      func_0x0001074c8688();
      if (*(int *)(puVar10 + 0x250) == 0) {
        puVar15 = (undefined1 *)0x0;
      }
      else {
        uVar4 = *(int *)(puVar10 + 0x250) == 1;
        if ((bool)uVar4) {
          puVar15 = (undefined1 *)(ulong)(byte)puVar10[0x220];
        }
        else {
          func_0x0001074c8910();
          puVar15 = puVar10 + 0x220;
          func_0x000107280464(puVar15);
          puVar10 = puVar15;
          func_0x0001074c8928();
        }
      }
      func_0x0001074c8620(extraout_x8_03);
      if ((bool)uVar4) {
        return (undefined1 *)(ulong)((uint)puVar15 & 1);
      }
      ___stack_chk_fail();
      func_0x0001074c8834();
      func_0x0001074c8820();
      return puVar10;
    }
    lVar13 = *plVar19;
    uVar7 = *(ulong *)(lVar13 + 0x88);
    FUN_1074bf230(uVar7,*(undefined8 *)(lVar13 + 0x58),*(undefined8 *)(param_4 + 0x98));
    if ((uVar7 & 1) == 0) {
      lVar20 = *(long *)(lVar13 + 0x58);
      lVar23 = *(long *)(*(long *)(lVar13 + 0x88) + 0x28);
      lVar21 = *(long *)(*(long *)(lVar13 + 0x88) + 0x40);
      lVar12 = *(long *)(lVar13 + 0x20);
      lVar14 = *(long *)(lVar13 + 0x28);
      if (lVar12 != lVar14) {
        ppuVar8 = &puStack_560;
        FUN_1074c3544(ppuVar8,lVar12,lVar14);
        if (((ulong)ppuVar8 & 1) != 0) goto LAB_1074bd854;
        for (; lVar12 != lVar14; lVar12 = lVar12 + 8) {
          FUN_1074c39e8(&puStack_560,lVar12);
        }
      }
      plVar17 = (long *)(lVar23 + lVar20 * 0xa0);
      plVar9 = plVar17;
      (**(code **)(*plVar17 + 0x30))(plVar17);
      func_0x00010726236c(&pppuStack_4f0);
      if (cStack_4b8 == '\x01') {
        puVar10 = auStack_548;
        func_0x000107869b38(&ppuStack_230,puVar10,&pppuStack_4f0);
        func_0x00010786967c();
        FUN_1073dcf84(&uStack_510,&ppuStack_230,puVar10);
        FUN_1073de9d8(&ppuStack_230);
      }
      else {
        func_0x00010786967c();
        func_0x000107277f0c(&uStack_510,plVar9);
      }
      func_0x0001077512dc(**(undefined4 **)(param_5 + 0x38),auStack_3c0);
      lStack_518 = plVar17[7];
      lStack_520 = plVar17[6];
      if (plVar17[7] != 0) {
        do {
          func_0x0001074c8654();
        } while (extraout_w10_00 != 0);
      }
      func_0x0001074c8b7c(*(undefined8 *)(param_4 + 0x18),&uStack_4a8);
      func_0x0001074c8ab0(*(undefined8 *)(param_4 + 0x18));
      func_0x0001074c8e30();
      func_0x000107751444(auStack_3c0,&lStack_520,&uStack_438);
      uStack_2d8 = *(undefined8 *)(param_5 + 0x30);
      puStack_2e0 = &uStack_510;
      func_0x0001074c8a3c();
      func_0x0001074c8be8();
      func_0x0001074c8be0();
      func_0x000107267e44(&lStack_520);
      func_0x0001074c8f14();
      FUN_1074c35b4(*(undefined4 *)(param_5 + 0x48),&ppuStack_230,*(undefined8 *)(param_4 + 0xd8),
                    *(undefined8 *)(param_4 + 0xe0),param_4 + 8,*(undefined8 *)(lVar13 + 0x60),
                    lVar21 + lVar20 * 0x100);
      func_0x0001074c8e5c();
      func_0x00010726b264(&uStack_510);
      func_0x00010724b3d8(&pppuStack_4f0);
    }
LAB_1074bd854:
    plVar19 = plVar19 + 1;
  } while( true );
}



/* Entry: 1074bda4c; end: 1074bdacb;  */

ulong FUN_1074bda4c(ulong param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  ulong uVar1;
  undefined1 auStack_70 [72];
  undefined8 uStack_28;
  
  func_0x0001074c8688();
  uStack_28 = extraout_x8;
  if (*(int *)(param_1 + 0x250) == 0) {
    uVar1 = 0;
  }
  else {
    in_ZR = *(int *)(param_1 + 0x250) == 1;
    if ((bool)in_ZR) {
      uVar1 = (ulong)*(byte *)(param_1 + 0x220);
    }
    else {
      func_0x0001074c8910();
      uVar1 = param_1 + 0x220;
      func_0x000107280464(uVar1,param_2,auStack_70,0);
      param_1 = uVar1;
      func_0x0001074c8928();
    }
  }
  func_0x0001074c8620(uStack_28);
  if ((bool)in_ZR) {
    return (ulong)((uint)uVar1 & 1);
  }
  ___stack_chk_fail();
  func_0x0001074c8834();
  func_0x0001074c8820();
  return param_1;
}



/* Entry: 1074bdacc; end: 1074bdacf;  */

void FUN_1074bdacc(void)

{
  return;
}



/* Entry: 1074bdad0; end: 1074bdffb;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x0001074bdc14 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1074bdad0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong extraout_x8_02;
  code *extraout_x9;
  long *plVar8;
  long *extraout_x9_00;
  long *plVar9;
  long *extraout_x9_01;
  ulong uVar10;
  ulong extraout_x9_02;
  long *plVar11;
  long *plVar12;
  long *extraout_x10;
  long *plVar13;
  long *extraout_x11;
  long *plVar14;
  long *plVar15;
  long *unaff_x21;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long lVar19;
  long lStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  ulong uStack_c8;
  float fStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  long *aplStack_88 [2];
  undefined8 uStack_78;
  long **pplStack_70;
  undefined8 uStack_68;
  
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_90 = 0x3f800000;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  plStack_d8 = (long *)0x0;
  lStack_e0 = 0;
  uStack_c8 = 0;
  plStack_d0 = (long *)0x0;
  fStack_c0 = 1.0;
  plVar16 = (long *)**(long **)(param_3 + 0x28);
  plVar18 = (long *)(*(long **)(param_3 + 0x28))[1];
  do {
    uVar4 = (long)plVar16 - (long)plVar18 < 0;
    if (plVar16 == plVar18) {
      plVar16 = *(long **)(param_3 + 0x268);
      plVar18 = *(long **)(param_3 + 0x270);
      do {
        plVar17 = plStack_d8;
        uVar4 = plVar16 == plVar18;
        if ((bool)uVar4) {
          func_0x0001074c7228(&lStack_e0);
          func_0x0001072a8888(&uStack_b0);
          return;
        }
        if ((plStack_d8 != (long *)0x0) && (uStack_c8 != 0)) {
          lVar19 = *plVar16;
          plVar15 = *(long **)(lVar19 + 0x88);
          plVar9 = plVar15;
          FUN_1074c7268();
          func_0x0001074c8d84();
          if ((bool)uVar4) {
            plVar8 = (long *)((ulong)plVar9 & extraout_x8_02);
          }
          else {
            plVar8 = plVar9;
            if (plVar17 <= plVar9) {
              uVar7 = 0;
              if (plVar17 != (long *)0x0) {
                uVar7 = (ulong)plVar9 / (ulong)plVar17;
              }
              plVar8 = (long *)((long)plVar9 - uVar7 * (long)plVar17);
            }
          }
          plVar11 = *(long **)(lStack_e0 + (long)plVar8 * 8);
          if (plVar11 != (long *)0x0) {
            do {
              while( true ) {
                plVar11 = (long *)*plVar11;
                if (plVar11 == (long *)0x0) goto LAB_1074bdf70;
                plVar13 = (long *)plVar11[1];
                if (plVar13 != plVar9) break;
                if ((long *)plVar11[2] == plVar15) {
                  uVar1 = *(uint *)(*(long *)(lVar19 + 0x88) + 0x18);
                  puVar6 = &uStack_78;
                  func_0x00010784b274(puVar6,plVar11[3]);
                  uVar7 = (long)puVar6 + 0x9e3779b97f4a7c15;
                  aplStack_88[0] =
                       (long *)((ulong)uVar1 + 0x9e3779b97f4a7c15 + uVar7 * 0x1000 + (uVar7 >> 4) ^
                               uVar7);
                  puVar6 = &uStack_b0;
                  FUN_107388eb4(puVar6,aplStack_88);
                  if (((ulong)puVar6 & 1) == 0) {
                    uStack_78 = plVar11[3];
                    pplStack_70 = *(long ***)(lVar19 + 0x88);
                    FUN_1074c3d90(param_1,&uStack_78);
                  }
                  goto LAB_1074bdf70;
                }
              }
              if (((ulong)plVar17 & extraout_x8_02) == 0) {
                plVar13 = (long *)((ulong)plVar13 & extraout_x8_02);
              }
              else if (plVar17 <= plVar13) {
                uVar7 = 0;
                if (plVar17 != (long *)0x0) {
                  uVar7 = (ulong)plVar13 / (ulong)plVar17;
                }
                plVar13 = (long *)((long)plVar13 - uVar7 * (long)plVar17);
              }
            } while (plVar13 == plVar8);
          }
        }
LAB_1074bdf70:
        plVar16 = plVar16 + 1;
      } while( true );
    }
    lVar19 = *plVar16;
    func_0x0001074c9040(*(undefined8 *)(lVar19 + 0x220),*(undefined8 *)(param_3 + 0x18));
    (*extraout_x9)(aplStack_88);
    plVar17 = aplStack_88[0];
    if (aplStack_88[0] != (long *)0x0) {
      plVar15 = aplStack_88[0];
      FUN_1074c7268();
      plVar9 = plStack_d8;
      if (plStack_d8 != (long *)0x0) {
        uVar7 = (long)plStack_d8 - 1;
        if (((ulong)plStack_d8 & uVar7) == 0) {
          unaff_x21 = (long *)(uVar7 & (ulong)plVar15);
          uVar4 = false;
        }
        else {
          uVar4 = (long)plVar15 - (long)plStack_d8 < 0;
          unaff_x21 = plVar15;
          if (plStack_d8 <= plVar15) {
            uVar10 = 0;
            if (plStack_d8 != (long *)0x0) {
              uVar10 = (ulong)plVar15 / (ulong)plStack_d8;
            }
            unaff_x21 = (long *)((long)plVar15 - uVar10 * (long)plStack_d8);
          }
        }
        plVar8 = *(long **)(lStack_e0 + (long)unaff_x21 * 8);
        if (plVar8 != (long *)0x0) {
          do {
            while( true ) {
              plVar8 = (long *)*plVar8;
              if (plVar8 == (long *)0x0) goto LAB_1074bdbe4;
              plVar11 = (long *)plVar8[1];
              if (plVar11 != plVar15) break;
              uVar4 = plVar8[2] - (long)plVar17 < 0;
              if ((long *)plVar8[2] == plVar17) goto LAB_1074bde48;
            }
            if (((ulong)plStack_d8 & uVar7) == 0) {
              plVar11 = (long *)((ulong)plVar11 & uVar7);
            }
            else if (plStack_d8 <= plVar11) {
              uVar10 = 0;
              if (plStack_d8 != (long *)0x0) {
                uVar10 = (ulong)plVar11 / (ulong)plStack_d8;
              }
              plVar11 = (long *)((long)plVar11 - uVar10 * (long)plStack_d8);
            }
            uVar4 = (long)plVar11 - (long)unaff_x21 < 0;
          } while (plVar11 == unaff_x21);
        }
      }
LAB_1074bdbe4:
      plVar8 = plVar15;
      func_0x0001074c8cb0();
      uStack_68 = 1;
      *plVar8 = 0;
      plVar8[1] = (long)plVar15;
      plVar8[2] = (long)plVar17;
      plVar8[3] = lVar19;
      pplStack_70 = &plStack_d0;
      func_0x0001074c8b54(uStack_c8);
      if ((plVar9 == (long *)0x0) ||
         (func_0x0001074c8b48(param_2,fStack_c0,(float)plVar9), (bool)uVar4)) {
        bVar3 = (long *)0x2 < plVar9;
        bVar5 = plVar9 == (long *)0x3;
        func_0x0001074c8674((long)plVar9 << 1);
        plVar17 = extraout_x8;
        if (!bVar3 || bVar5) {
          plVar17 = extraout_x9_00;
        }
        plVar11 = plVar9;
        if ((long)plVar17 - 1U == 0) {
          plVar17 = (long *)0x2;
        }
        else if (((ulong)plVar17 & (long)plVar17 - 1U) != 0) {
          __ZNSt3__112__next_primeEm();
          plVar11 = plStack_d8;
        }
        if (plVar11 < plVar17) {
LAB_1074bdc70:
          if ((ulong)plVar17 >> 0x3d != 0) {
            func_0x000104bd35f4();
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1074bdfb0);
            (*pcVar2)();
          }
          lVar19 = (long)plVar17 << 3;
          __Znwm(lVar19);
          func_0x0001074c76c4(&lStack_e0,lVar19);
          plVar9 = (long *)0x0;
          lVar19 = lStack_e0;
          plStack_d8 = plVar17;
          while (plVar17 != plVar9) {
            func_0x0001074c8d60();
            lVar19 = extraout_x8_00;
            plVar9 = extraout_x9_01;
          }
          plVar9 = plVar17;
          if (plStack_d0 != (long *)0x0) {
            plVar11 = (long *)plStack_d0[1];
            uVar10 = (long)plVar17 - 1;
            uVar7 = 0;
            if (plVar17 != (long *)0x0) {
              uVar7 = (ulong)plVar11 / (ulong)plVar17;
            }
            plVar13 = plVar11;
            if (plVar17 <= plVar11) {
              plVar13 = (long *)((long)plVar11 - uVar7 * (long)plVar17);
            }
            if (((ulong)plVar17 & uVar10) == 0) {
              plVar13 = (long *)((ulong)plVar11 & uVar10);
            }
            *(long ***)(lVar19 + (long)plVar13 * 8) = &plStack_d0;
            plVar11 = plStack_d0;
            while (plVar12 = plVar11, plVar11 = (long *)*plVar12, plVar11 != (long *)0x0) {
              plVar14 = (long *)plVar11[1];
              if (((ulong)plVar17 & uVar10) == 0) {
                plVar14 = (long *)((ulong)plVar14 & uVar10);
              }
              else if (plVar17 <= plVar14) {
                uVar7 = 0;
                if (plVar17 != (long *)0x0) {
                  uVar7 = (ulong)plVar14 / (ulong)plVar17;
                }
                plVar14 = (long *)((long)plVar14 - uVar7 * (long)plVar17);
              }
              if (plVar14 != plVar13) {
                if (*(long *)(lVar19 + (long)plVar14 * 8) == 0) {
                  *(long **)(lVar19 + (long)plVar14 * 8) = plVar12;
                  plVar13 = plVar14;
                }
                else {
                  *plVar12 = *plVar11;
                  func_0x0001074c8710();
                  lVar19 = extraout_x8_01;
                  uVar10 = extraout_x9_02;
                  plVar11 = extraout_x10;
                  plVar13 = extraout_x11;
                }
              }
            }
          }
        }
        else {
          plVar9 = plVar11;
          if (plVar17 < plVar11) {
            plVar9 = (long *)(long)((float)uStack_c8 / fStack_c0);
            if ((plVar11 < (long *)0x3) || (((ulong)plVar11 & (long)plVar11 - 1U) != 0)) {
              __ZNSt3__112__next_primeEm();
            }
            else {
              func_0x0001074c86e4();
            }
            if (plVar17 <= plVar9) {
              plVar17 = plVar9;
            }
            plVar9 = plStack_d8;
            if (plVar17 < plVar11) {
              if (plVar17 != (long *)0x0) goto LAB_1074bdc70;
              func_0x0001074c76c4(&lStack_e0,0);
              plStack_d8 = (long *)0x0;
              plVar9 = (long *)0x0;
            }
          }
        }
        if (((ulong)plVar9 & (long)plVar9 - 1U) == 0) {
          unaff_x21 = (long *)((long)plVar9 - 1U & (ulong)plVar15);
        }
        else {
          unaff_x21 = plVar15;
          if (plVar9 <= plVar15) {
            uVar7 = 0;
            if (plVar9 != (long *)0x0) {
              uVar7 = (ulong)plVar15 / (ulong)plVar9;
            }
            unaff_x21 = (long *)((long)plVar15 - uVar7 * (long)plVar9);
          }
        }
      }
      plVar17 = *(long **)(lStack_e0 + (long)unaff_x21 * 8);
      if (plVar17 == (long *)0x0) {
        *plVar8 = (long)plStack_d0;
        *(long ***)(lStack_e0 + (long)unaff_x21 * 8) = &plStack_d0;
        plStack_d0 = plVar8;
        if (*plVar8 != 0) {
          plVar17 = *(long **)(*plVar8 + 8);
          if (((ulong)plVar9 & (long)plVar9 - 1U) == 0) {
            plVar17 = (long *)((ulong)plVar17 & (long)plVar9 - 1U);
          }
          else if (plVar9 <= plVar17) {
            uVar7 = 0;
            if (plVar9 != (long *)0x0) {
              uVar7 = (ulong)plVar17 / (ulong)plVar9;
            }
            plVar17 = (long *)((long)plVar17 - uVar7 * (long)plVar9);
          }
          *(long **)(lStack_e0 + (long)plVar17 * 8) = plVar8;
        }
      }
      else {
        *plVar8 = *plVar17;
        *plVar17 = (long)plVar8;
      }
      uStack_78 = 0;
      uStack_c8 = uStack_c8 + 1;
      FUN_1074c76dc(&uStack_78);
    }
LAB_1074bde48:
    func_0x0001073e091c(aplStack_88);
    plVar16 = plVar16 + 1;
  } while( true );
}



/* Entry: 1074bdffc; end: 1074be823;  */

void FUN_1074bdffc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined1 *puVar8;
  long lVar9;
  code *pcVar10;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  undefined8 extraout_x8_02;
  ulong extraout_x8_03;
  ulong uVar11;
  long unaff_x19;
  long *unaff_x20;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long unaff_x28;
  ulong uVar19;
  undefined1 auVar20 [16];
  undefined8 in_stack_00000050;
  long lStack_2ca0;
  undefined8 uStack_2c98;
  long lStack_2c88;
  undefined4 uStack_2c80;
  long lStack_2c50;
  undefined8 uStack_2c48;
  undefined1 auStack_2c18 [56];
  undefined1 auStack_2be0 [56];
  undefined1 auStack_2ba8 [56];
  undefined1 auStack_2b70 [56];
  undefined1 auStack_2b38 [56];
  undefined1 auStack_2b00 [56];
  undefined1 auStack_2ac8 [56];
  undefined1 auStack_2a90 [56];
  undefined1 auStack_2a58 [56];
  long lStack_2a20;
  undefined4 uStack_2a18;
  undefined8 uStack_2a10;
  undefined8 uStack_2a08;
  undefined1 auStack_29d8 [56];
  undefined1 auStack_29a0 [64];
  undefined1 auStack_2960 [64];
  undefined1 auStack_2920 [56];
  undefined1 auStack_28e8 [64];
  undefined1 auStack_28a8 [72];
  undefined1 auStack_2860 [56];
  undefined1 auStack_2828 [64];
  undefined1 auStack_27e8 [56];
  undefined1 auStack_27b0 [56];
  undefined1 auStack_2778 [64];
  undefined1 auStack_2738 [56];
  undefined1 auStack_2700 [64];
  undefined1 auStack_26c0 [56];
  undefined1 auStack_2688 [56];
  undefined1 auStack_2650 [64];
  undefined1 auStack_2610 [56];
  undefined1 auStack_25d8 [64];
  long lStack_2598;
  ulong uStack_2590;
  long lStack_2558;
  ulong uStack_2550;
  long lStack_2518;
  ulong uStack_2510;
  long lStack_24d8;
  ulong uStack_24d0;
  undefined8 uStack_24c8;
  long lStack_2498;
  ulong uStack_2490;
  undefined1 auStack_2450 [64];
  undefined1 auStack_2410 [64];
  undefined1 auStack_23d0 [64];
  undefined8 uStack_2390;
  undefined1 *puStack_2380;
  undefined1 *puStack_2378;
  undefined1 *puStack_2370;
  undefined1 *puStack_2368;
  undefined1 *puStack_2360;
  undefined1 *puStack_2358;
  undefined1 *puStack_2350;
  undefined1 *puStack_2348;
  undefined1 *puStack_2340;
  undefined1 *puStack_2338;
  undefined8 *puStack_2330;
  code *pcStack_2328;
  ulong uStack_2320;
  undefined1 auStack_2318 [88];
  undefined1 auStack_22c0 [88];
  undefined1 auStack_2268 [88];
  undefined1 auStack_2210 [88];
  undefined1 auStack_21b8 [88];
  undefined1 auStack_2160 [88];
  undefined1 auStack_2108 [88];
  undefined1 auStack_20b0 [88];
  undefined1 auStack_2058 [88];
  undefined1 auStack_2000 [88];
  undefined1 auStack_1fa8 [88];
  undefined1 auStack_1f50 [88];
  undefined1 auStack_1ef8 [88];
  undefined1 auStack_1ea0 [88];
  undefined1 auStack_1e48 [88];
  undefined1 auStack_1df0 [88];
  undefined1 auStack_1d98 [88];
  undefined1 auStack_1d40 [88];
  undefined1 auStack_1ce8 [88];
  undefined1 auStack_1c90 [88];
  undefined1 auStack_1c38 [88];
  undefined1 auStack_1be0 [88];
  undefined1 auStack_1b88 [88];
  undefined1 auStack_1b30 [88];
  undefined1 auStack_1ad8 [96];
  undefined1 auStack_1a78 [96];
  undefined1 auStack_1a18 [88];
  undefined1 auStack_19c0 [96];
  undefined1 auStack_1960 [104];
  undefined1 auStack_18f8 [88];
  undefined1 auStack_18a0 [96];
  undefined1 auStack_1840 [88];
  undefined1 auStack_17e8 [88];
  undefined1 auStack_1790 [96];
  undefined1 auStack_1730 [88];
  undefined1 auStack_16d8 [96];
  undefined1 auStack_1678 [88];
  undefined1 auStack_1620 [88];
  undefined1 auStack_15c8 [96];
  undefined1 auStack_1568 [88];
  undefined1 auStack_1510 [88];
  undefined1 auStack_14b8 [1840];
  undefined1 auStack_d88 [96];
  undefined1 auStack_d28 [96];
  undefined1 auStack_cc8 [104];
  undefined1 auStack_c60 [104];
  undefined1 auStack_bf8 [96];
  undefined1 auStack_b98 [104];
  undefined1 auStack_b30 [112];
  undefined1 auStack_ac0 [96];
  undefined1 auStack_a60 [104];
  undefined1 auStack_9f8 [96];
  undefined1 auStack_998 [96];
  undefined1 auStack_938 [104];
  undefined1 auStack_8d0 [96];
  undefined1 auStack_870 [104];
  undefined1 auStack_808 [96];
  undefined1 auStack_7a8 [96];
  undefined1 auStack_748 [104];
  undefined1 auStack_6e0 [96];
  undefined1 auStack_680 [96];
  undefined1 auStack_620 [96];
  undefined1 auStack_5c0 [96];
  undefined1 auStack_560 [96];
  undefined1 auStack_500 [96];
  undefined1 auStack_4a0 [96];
  undefined1 auStack_440 [96];
  undefined1 auStack_3e0 [96];
  undefined1 auStack_380 [96];
  undefined1 auStack_320 [104];
  undefined1 auStack_2b8 [104];
  undefined1 auStack_250 [96];
  undefined1 auStack_1f0 [96];
  undefined1 auStack_190 [96];
  undefined1 auStack_130 [96];
  undefined1 auStack_d0 [96];
  undefined1 auStack_70 [96];
  undefined8 uStack_10;
  
  func_0x0001074c9240();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x0001074c8848();
  lVar13 = 0;
  uVar17 = 0;
  func_0x0001074c8688();
  uStack_2320 = (*(long *)(*(long *)(param_1 + 0x18) + 0xfd0) -
                *(long *)(*(long *)(param_1 + 0x18) + 0xfc8)) / 0xe98 & 0xffff;
  lVar12 = uStack_2320 * 0x6d0;
  uStack_10 = extraout_x8;
  for (lVar16 = 0; uVar7 = lVar12 - lVar16 == 0, !(bool)uVar7; lVar16 = lVar16 + 0x6d0) {
    FUN_1074c3f94(auStack_14b8,*(long *)(*(long *)(unaff_x19 + 0x18) + 0xfc8) + lVar13);
    func_0x0001074c8a58();
    uVar19 = extraout_x8_00;
    if (extraout_x8_00 <= uVar17) {
      FUN_1074b9d44(auStack_1b88,auStack_d88);
      FUN_1074c27f4(unaff_x19 + 0xd8,auStack_1b88);
      func_0x0001074c8f28();
      func_0x0001074c8a58();
      uVar19 = extraout_x8_01;
    }
    if (uVar17 < uVar19) {
      func_0x000107432f04(auStack_1c38,unaff_x28 + lVar16);
      func_0x0001074c88b0(auStack_1be0,auStack_d88);
      func_0x000107432f04(auStack_1ce8,unaff_x28 + lVar16 + 0x58);
      func_0x0001074c88b0(auStack_1c90,auStack_d28);
      func_0x000107482cec(auStack_d0,unaff_x28 + lVar16 + 0xb0);
      func_0x0001074c89f4(auStack_70,auStack_cc8);
      func_0x000107482cec(auStack_190,unaff_x28 + lVar16 + 0x110);
      func_0x0001074c89f4(auStack_130,auStack_c60);
      func_0x000107432f04(auStack_1d98,unaff_x28 + lVar16 + 0x170);
      func_0x0001074c88b0(auStack_1d40,auStack_bf8);
      func_0x000107482cec(auStack_250,unaff_x28 + lVar16 + 0x1c8);
      func_0x0001074c89f4(auStack_1f0,auStack_b98);
      func_0x000107432c64(auStack_320,unaff_x28 + lVar16 + 0x228);
      FUN_107437f20(auStack_2b8,auStack_b30);
      func_0x000107432f04(auStack_1e48,unaff_x28 + lVar16 + 0x290);
      func_0x0001074c88b0(auStack_1df0,auStack_ac0);
      func_0x000107482cec(auStack_3e0,unaff_x28 + lVar16 + 0x2e8);
      func_0x0001074c89f4(auStack_380,auStack_a60);
      func_0x000107432f04(auStack_1ef8,unaff_x28 + lVar16 + 0x348);
      func_0x0001074c88b0(auStack_1ea0,auStack_9f8);
      func_0x000107432f04(auStack_1fa8,unaff_x28 + lVar16 + 0x3a0);
      func_0x0001074c88b0(auStack_1f50,auStack_998);
      func_0x000107482cec(auStack_4a0,unaff_x28 + lVar16 + 0x3f8);
      func_0x0001074c89f4(auStack_440,auStack_938);
      func_0x000107432f04(auStack_2058,unaff_x28 + lVar16 + 0x458);
      func_0x0001074c88b0(auStack_2000,auStack_8d0);
      func_0x000107482cec(auStack_560,unaff_x28 + lVar16 + 0x4b0);
      func_0x0001074c89f4(auStack_500,auStack_870);
      func_0x000107432f04(auStack_2108,unaff_x28 + lVar16 + 0x510);
      func_0x0001074c88b0(auStack_20b0,auStack_808);
      func_0x000107432f04(auStack_21b8,unaff_x28 + lVar16 + 0x568);
      func_0x0001074c88b0(auStack_2160,auStack_7a8);
      func_0x000107482cec(auStack_620,unaff_x28 + lVar16 + 0x5c0);
      func_0x0001074c89f4(auStack_5c0,auStack_748);
      func_0x000107432f04(auStack_2268,unaff_x28 + lVar16 + 0x620);
      func_0x0001074c88b0(auStack_2210,auStack_6e0);
      func_0x000107432f04(auStack_2318,unaff_x28 + lVar16 + 0x678);
      func_0x0001074c88b0(auStack_22c0,auStack_680);
      pcStack_2328 = (code *)auStack_22c0;
      puStack_2330 = (undefined8 *)auStack_2210;
      puStack_2338 = auStack_5c0;
      puStack_2340 = auStack_2160;
      puStack_2348 = auStack_20b0;
      puStack_2350 = auStack_500;
      puStack_2360 = auStack_440;
      puStack_2368 = auStack_1f50;
      puStack_2370 = auStack_1ea0;
      puStack_2378 = auStack_380;
      puStack_2380 = auStack_1df0;
      puStack_2358 = auStack_2000;
      FUN_1074c66b0(auStack_1b88,auStack_1be0,auStack_1c90,auStack_70,auStack_130,auStack_1d40,
                    auStack_1f0,auStack_2b8);
      func_0x000107410c2c(auStack_22c0);
      func_0x000107410c2c(auStack_2318);
      func_0x000107410c2c(auStack_2210);
      func_0x000107410c2c(auStack_2268);
      func_0x0001074c8e88();
      func_0x0001074c8e7c();
      func_0x000107410c2c(auStack_2160);
      func_0x000107410c2c(auStack_21b8);
      func_0x000107410c2c(auStack_20b0);
      func_0x000107410c2c(auStack_2108);
      func_0x0001074c8e70();
      func_0x0001074c8e94();
      func_0x000107410c2c(auStack_2000);
      func_0x000107410c2c(auStack_2058);
      func_0x0001074c8e64();
      func_0x0001074c8eac();
      func_0x000107410c2c(auStack_1f50);
      func_0x000107410c2c(auStack_1fa8);
      func_0x000107410c2c(auStack_1ea0);
      func_0x000107410c2c(auStack_1ef8);
      FUN_107482af4(auStack_380);
      func_0x0001074c8ea0();
      func_0x000107410c2c(auStack_1df0);
      func_0x000107410c2c(auStack_1e48);
      func_0x0001074c8ef0();
      func_0x0001074c8ec0();
      func_0x0001074c8ecc();
      func_0x0001074c8f08();
      func_0x0001074c8c58();
      func_0x000107410c2c(auStack_1d98);
      func_0x0001074c8ee4();
      func_0x0001074c8ed8();
      FUN_107482af4(auStack_70);
      func_0x0001074c8efc();
      func_0x000107410c2c(auStack_1c90);
      func_0x000107410c2c(auStack_1ce8);
      func_0x000107410c2c(auStack_1be0);
      func_0x000107410c2c(auStack_1c38);
      unaff_x28 = *(long *)(unaff_x19 + 0xd8);
      func_0x0001074334a8(unaff_x28 + lVar16,auStack_1b88);
      func_0x0001074334a8(unaff_x28 + lVar16 + 0x58,auStack_1b30);
      FUN_107482b94(unaff_x28 + lVar16 + 0xb0,auStack_1ad8);
      FUN_107482b94(unaff_x28 + lVar16 + 0x110,auStack_1a78);
      func_0x0001074334a8(unaff_x28 + lVar16 + 0x170,auStack_1a18);
      FUN_107482b94(unaff_x28 + lVar16 + 0x1c8,auStack_19c0);
      func_0x00010743344c(unaff_x28 + lVar16 + 0x228,auStack_1960);
      func_0x0001074334a8(unaff_x28 + lVar16 + 0x290,auStack_18f8);
      FUN_107482b94(unaff_x28 + lVar16 + 0x2e8,auStack_18a0);
      func_0x0001074334a8(unaff_x28 + lVar16 + 0x348,auStack_1840);
      func_0x0001074334a8(unaff_x28 + lVar16 + 0x3a0,auStack_17e8);
      FUN_107482b94(unaff_x28 + lVar16 + 0x3f8,auStack_1790);
      func_0x0001074334a8(unaff_x28 + lVar16 + 0x458,auStack_1730);
      FUN_107482b94(unaff_x28 + lVar16 + 0x4b0,auStack_16d8);
      func_0x0001074334a8(unaff_x28 + lVar16 + 0x510,auStack_1678);
      func_0x0001074334a8(unaff_x28 + lVar16 + 0x568,auStack_1620);
      FUN_107482b94(unaff_x28 + lVar16 + 0x5c0,auStack_15c8);
      func_0x0001074334a8(unaff_x28 + lVar16 + 0x620,auStack_1568);
      func_0x0001074334a8(unaff_x28 + lVar16 + 0x678,auStack_1510);
      func_0x0001074c8f28();
    }
    func_0x0001074c49a8(auStack_14b8);
    uVar17 = uVar17 + 1;
    lVar13 = lVar13 + 0xe98;
  }
  auStack_14b8[0] = 0;
  uVar17 = *(long *)(unaff_x19 + 200) + 0xa90;
  func_0x00010724e2c8(uVar17,auStack_14b8);
  if ((uVar17 & 1) != 0) {
    uVar19 = (*(long *)(unaff_x19 + 0xe0) - *(long *)(unaff_x19 + 0xd8)) / 0x6d0;
    uVar7 = uVar19 == uStack_2320;
    if (uStack_2320 < uVar19) {
      uVar17 = unaff_x19 + 0xd8;
      FUN_1074c2ec4(uVar17,*(long *)(unaff_x19 + 0xd8) + (uStack_2320 & 0xffffffff) * 0x6d0);
    }
  }
  func_0x0001074c8620(uStack_10);
  if ((bool)uVar7) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107410c2c(auStack_1ef8);
  FUN_107482af4(auStack_380);
  func_0x0001074c8ea0();
  func_0x000107410c2c(auStack_1df0);
  func_0x000107410c2c(auStack_1e48);
  func_0x0001074c8ef0();
  func_0x0001074c8ec0();
  func_0x0001074c8ecc();
  func_0x0001074c8f08();
  func_0x0001074c8c58();
  func_0x000107410c2c(auStack_1d98);
  func_0x0001074c8ee4();
  func_0x0001074c8ed8();
  FUN_107482af4(auStack_70);
  func_0x0001074c8efc();
  func_0x000107410c2c(auStack_1c90);
  func_0x000107410c2c(auStack_1ce8);
  func_0x000107410c2c(auStack_1be0);
  func_0x000107410c2c(auStack_1c38);
  puVar8 = auStack_14b8;
  func_0x0001074c49a8(puVar8);
  func_0x0001074c8820();
  pcVar10 = FUN_1074be824;
  func_0x0001074c9240();
  puStack_2330 = &stack0x00000050;
  pcStack_2328 = pcVar10;
  func_0x0001074c8848();
  func_0x0001074c8688();
  uStack_2390 = extraout_x8_02;
  FUN_1073e6b8c(&uStack_2a10,puVar8 + 0x18);
  FUN_1074b9cd4(&lStack_2ca0,&uStack_2a10);
  FUN_1073e6bdc(&uStack_2a10);
  lVar12 = lStack_2ca0;
  lVar16 = *(long *)(lStack_2ca0 + 0x20);
  lVar13 = *(long *)(lStack_2ca0 + 0x28);
  lVar14 = lVar13 - lVar16;
  uVar15 = lVar14 / 0x470;
  uVar4 = (*(long *)(uVar17 + 0xe0) - *(long *)(uVar17 + 0xd8)) / 0x6d0;
  uVar19 = uVar4 - uVar15;
  if (uVar19 == 0) {
LAB_1074be8a0:
    lVar16 = 0;
    uVar15 = 0;
    lVar13 = 0x438;
    auVar20 = NEON_fmov(0x3f800000,4);
    while( true ) {
      func_0x0001074c8a58();
      uVar6 = uStack_2c98;
      lVar12 = lStack_2ca0;
      uVar7 = uVar15 == extraout_x8_03;
      if (extraout_x8_03 <= uVar15) break;
      lVar12 = *unaff_x20;
      uStack_2490 = uStack_2490 & 0xffffffff00000000;
      lStack_2498 = lVar12;
      FUN_107438e4c(auStack_2a58,uVar19 + lVar16,&lStack_2498,*(undefined8 *)(lVar12 + 0x10));
      uStack_2490 = uStack_2490 & 0xffffffff00000000;
      lStack_2498 = lVar12;
      FUN_107438e4c(auStack_2a90,uVar19 + lVar16 + 0x58,&lStack_2498,*(undefined8 *)(lVar12 + 0x10))
      ;
      func_0x0001074c8cf8();
      func_0x0001074c9004(auStack_23d0,uVar19 + lVar16 + 0xb0);
      func_0x0001074c8cf8();
      func_0x0001074c9004(auStack_2410,uVar19 + lVar16 + 0x110);
      uStack_2490 = CONCAT44(uStack_2490._4_4_,0x3f800000);
      lStack_2498 = lVar12;
      FUN_107438e4c(auStack_2ac8,uVar19 + lVar16 + 0x170,&lStack_2498,*(undefined8 *)(lVar12 + 0x10)
                   );
      func_0x0001074c8cf8();
      func_0x0001074c9004(auStack_2450,uVar19 + lVar16 + 0x1c8);
      lStack_24d8 = lVar12;
      uStack_24d0 = auVar20._0_8_;
      uStack_24c8 = auVar20._8_8_;
      FUN_1074384fc(&lStack_2498,uVar19 + lVar16 + 0x228,&lStack_24d8,*(undefined8 *)(lVar12 + 0x10)
                   );
      uStack_24d0 = uStack_24d0 & 0xffffffff00000000;
      lStack_24d8 = lVar12;
      FUN_107438e4c(auStack_2b00,uVar19 + lVar16 + 0x290,&lStack_24d8,*(undefined8 *)(lVar12 + 0x10)
                   );
      uStack_2510 = 0;
      lStack_2518 = lVar12;
      FUN_10748e03c(&lStack_24d8,uVar19 + lVar16 + 0x2e8,&lStack_2518,*(undefined8 *)(lVar12 + 0x10)
                   );
      uStack_2510 = uStack_2510 & 0xffffffff00000000;
      lStack_2518 = lVar12;
      FUN_107438e4c(auStack_2b38,uVar19 + lVar16 + 0x348,&lStack_2518,*(undefined8 *)(lVar12 + 0x10)
                   );
      uStack_2510 = CONCAT44(uStack_2510._4_4_,0x3f800000);
      lStack_2518 = lVar12;
      FUN_107438e4c(auStack_2b70,uVar19 + lVar16 + 0x3a0,&lStack_2518,*(undefined8 *)(lVar12 + 0x10)
                   );
      uStack_2550 = 0;
      lStack_2558 = lVar12;
      FUN_10748e03c(&lStack_2518,uVar19 + lVar16 + 0x3f8,&lStack_2558,*(undefined8 *)(lVar12 + 0x10)
                   );
      uStack_2550 = uStack_2550 & 0xffffffff00000000;
      lStack_2558 = lVar12;
      FUN_107438e4c(auStack_2ba8,uVar19 + lVar16 + 0x458,&lStack_2558,*(undefined8 *)(lVar12 + 0x10)
                   );
      uStack_2590 = 0;
      lStack_2598 = lVar12;
      FUN_10748e03c(&lStack_2558,uVar19 + lVar16 + 0x4b0,&lStack_2598,*(undefined8 *)(lVar12 + 0x10)
                   );
      uStack_2590 = uStack_2590 & 0xffffffff00000000;
      lStack_2598 = lVar12;
      FUN_107438e4c(auStack_2be0,uVar19 + lVar16 + 0x510,&lStack_2598,*(undefined8 *)(lVar12 + 0x10)
                   );
      uStack_2590 = CONCAT44(uStack_2590._4_4_,0x3f800000);
      lStack_2598 = lVar12;
      FUN_107438e4c(auStack_2c18,uVar19 + lVar16 + 0x568,&lStack_2598,*(undefined8 *)(lVar12 + 0x10)
                   );
      uStack_2c48 = 0;
      lStack_2c50 = lVar12;
      FUN_10748e03c(&lStack_2598,uVar19 + lVar16 + 0x5c0,&lStack_2c50,*(undefined8 *)(lVar12 + 0x10)
                   );
      uStack_2c80 = 0;
      lStack_2c88 = lVar12;
      FUN_107438e4c(&lStack_2c50,uVar19 + lVar16 + 0x620,&lStack_2c88,*(undefined8 *)(lVar12 + 0x10)
                   );
      uStack_2a18 = 0;
      lStack_2a20 = lVar12;
      FUN_107438e4c(&lStack_2c88,uVar19 + lVar16 + 0x678,&lStack_2a20,*(undefined8 *)(lVar12 + 0x10)
                   );
      FUN_1073dd9b0(&uStack_2a10,auStack_2a58);
      FUN_1073dd9b0(auStack_29d8,auStack_2a90);
      FUN_1073f5d44(auStack_29a0,auStack_23d0);
      FUN_1073f5d44(auStack_2960,auStack_2410);
      FUN_1073dd9b0(auStack_2920,auStack_2ac8);
      FUN_1073f5d44(auStack_28e8,auStack_2450);
      FUN_107433134(auStack_28a8,&lStack_2498);
      FUN_1073dd9b0(auStack_2860,auStack_2b00);
      FUN_1073f5d44(auStack_2828,&lStack_24d8);
      FUN_1073dd9b0(auStack_27e8,auStack_2b38);
      FUN_1073dd9b0(auStack_27b0,auStack_2b70);
      FUN_1073f5d44(auStack_2778,&lStack_2518);
      FUN_1073dd9b0(auStack_2738,auStack_2ba8);
      FUN_1073f5d44(auStack_2700,&lStack_2558);
      FUN_1073dd9b0(auStack_26c0,auStack_2be0);
      FUN_1073dd9b0(auStack_2688,auStack_2c18);
      FUN_1073f5d44(auStack_2650,&lStack_2598);
      FUN_1073dd9b0(auStack_2610,&lStack_2c50);
      FUN_1073dd9b0(auStack_25d8,&lStack_2c88);
      FUN_1073dd4c4(&lStack_2c88);
      FUN_1073dd4c4(&lStack_2c50);
      FUN_1073deccc(&lStack_2598);
      FUN_1073dd4c4(auStack_2c18);
      FUN_1073dd4c4(auStack_2be0);
      FUN_1073deccc(&lStack_2558);
      FUN_1073dd4c4(auStack_2ba8);
      FUN_1073deccc(&lStack_2518);
      FUN_1073dd4c4(auStack_2b70);
      FUN_1073dd4c4(auStack_2b38);
      FUN_1073deccc(&lStack_24d8);
      FUN_1073dd4c4(auStack_2b00);
      FUN_1073debc4(&lStack_2498);
      FUN_1073deccc(auStack_2450);
      FUN_1073dd4c4(auStack_2ac8);
      FUN_1073deccc(auStack_2410);
      FUN_1073deccc(auStack_23d0);
      FUN_1073dd4c4(auStack_2a90);
      FUN_1073dd4c4(auStack_2a58);
      lVar12 = *(long *)(lStack_2ca0 + 0x20) + lVar13;
      FUN_1073ddf7c(lVar12 + -0x438,&uStack_2a10);
      FUN_1073ddf7c(lVar12 + -0x400,auStack_29d8);
      FUN_1074c4ac8(lVar12 + -0x3c8,auStack_29a0);
      FUN_1074c4ac8(lVar12 + -0x388,auStack_2960);
      FUN_1073ddf7c(lVar12 + -0x348,auStack_2920);
      FUN_1074c4ac8(lVar12 + -0x310,auStack_28e8);
      FUN_107433ce0(lVar12 + -0x2d0,auStack_28a8);
      FUN_1073ddf7c(lVar12 + -0x288,auStack_2860);
      FUN_1074c4ac8(lVar12 + -0x250,auStack_2828);
      FUN_1073ddf7c(lVar12 + -0x210,auStack_27e8);
      FUN_1073ddf7c(lVar12 + -0x1d8,auStack_27b0);
      FUN_1074c4ac8(lVar12 + -0x1a0,auStack_2778);
      FUN_1073ddf7c(lVar12 + -0x160,auStack_2738);
      FUN_1074c4ac8(lVar12 + -0x128,auStack_2700);
      FUN_1073ddf7c(lVar12 + -0xe8,auStack_26c0);
      FUN_1073ddf7c(lVar12 + -0xb0,auStack_2688);
      FUN_1074c4ac8(lVar12 + -0x78,auStack_2650);
      FUN_1073ddf7c(lVar12 + -0x38,auStack_2610);
      FUN_1073ddf7c(lVar12,auStack_25d8);
      func_0x0001074c4bd0(&uStack_2a10);
      uVar15 = uVar15 + 1;
      lVar16 = lVar16 + 0x6d0;
      lVar13 = lVar13 + 0x470;
    }
    *(undefined1 *)(uVar17 + 0x38) = 0x14;
    *(undefined1 *)(lStack_2ca0 + 0x18) = 0x14;
    lStack_2ca0 = 0;
    uStack_2c98 = 0;
    uStack_2490 = 0;
    lStack_2498 = 0;
    uStack_2a08 = *(undefined8 *)(uVar17 + 0x10);
    uStack_2a10 = *(undefined8 *)(uVar17 + 8);
    *(undefined8 *)(uVar17 + 0x10) = uVar6;
    *(long *)(uVar17 + 8) = lVar12;
    FUN_1073ad37c(&uStack_2a10);
    FUN_1074c58b4(&lStack_2498);
    FUN_1074c2744(&lStack_2ca0);
    func_0x0001074c8620(uStack_2390);
    if ((bool)uVar7) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    if (uVar4 < uVar15 || uVar19 == 0) {
      if (uVar4 < uVar15) {
        FUN_1074c4a94((long *)(lStack_2ca0 + 0x20),lVar16 + uVar4 * 0x470);
      }
      goto LAB_1074be8a0;
    }
    if (uVar19 <= (ulong)((*(long *)(lStack_2ca0 + 0x30) - lVar13) / 0x470)) {
      lVar14 = lVar13 + uVar19 * 0x470;
      for (lVar16 = uVar4 * 0x470 + uVar15 * -0x470; lVar16 != 0; lVar16 = lVar16 + -0x470) {
        _bzero(lVar13,0x470);
        lVar13 = lVar13 + 0x470;
      }
      *(long *)(lVar12 + 0x28) = lVar14;
      goto LAB_1074be8a0;
    }
    if (uVar4 < 0x39b0ad12073616) {
      uVar5 = (*(long *)(lStack_2ca0 + 0x30) - lVar16) / 0x470;
      uVar11 = uVar5 * 2;
      if (uVar11 < uVar4 || uVar11 - uVar4 == 0) {
        uVar11 = uVar4;
      }
      if (0x1cd85689039b09 < uVar5) {
        uVar11 = 0x39b0ad12073615;
      }
      if (0x39b0ad12073615 < uVar11) {
        func_0x000104bd35f4();
        goto LAB_1074bf028;
      }
      lVar9 = uVar11 * 0x470;
      __Znwm();
      lVar2 = lVar9 + lVar14;
      lVar3 = uVar19 * 0x470;
      lVar1 = lVar2;
      for (lVar18 = uVar4 * 0x470 + uVar15 * -0x470; lVar18 != 0; lVar18 = lVar18 + -0x470) {
        _bzero(lVar1,0x470);
        lVar1 = lVar1 + 0x470;
      }
      lVar14 = lVar2 + (lVar14 / -0x470) * 0x470;
      for (uVar19 = 0; lVar1 = lVar16 + uVar19, lVar1 != lVar13; uVar19 = uVar19 + 0x470) {
        lVar18 = lVar14 + uVar19;
        FUN_1073dd9b0(lVar18,lVar1);
        FUN_1073dd9b0(lVar18 + 0x38,lVar1 + 0x38);
        FUN_1073f5d44(lVar18 + 0x70,lVar1 + 0x70);
        FUN_1073f5d44(lVar18 + 0xb0,lVar1 + 0xb0);
        FUN_1073dd9b0(lVar18 + 0xf0,lVar1 + 0xf0);
        FUN_1073f5d44(lVar18 + 0x128,lVar1 + 0x128);
        FUN_107433134(lVar18 + 0x168,lVar1 + 0x168);
        FUN_1073dd9b0(lVar18 + 0x1b0,lVar1 + 0x1b0);
        FUN_1073f5d44(lVar18 + 0x1e8,lVar1 + 0x1e8);
        FUN_1073dd9b0(lVar18 + 0x228,lVar1 + 0x228);
        FUN_1073dd9b0(lVar18 + 0x260,lVar1 + 0x260);
        FUN_1073f5d44(lVar18 + 0x298,lVar1 + 0x298);
        FUN_1073dd9b0(lVar18 + 0x2d8,lVar1 + 0x2d8);
        FUN_1073f5d44(lVar18 + 0x310,lVar1 + 0x310);
        FUN_1073dd9b0(lVar18 + 0x350,lVar1 + 0x350);
        FUN_1073dd9b0(lVar18 + 0x388,lVar1 + 0x388);
        FUN_1073f5d44(lVar18 + 0x3c0,lVar1 + 0x3c0);
        FUN_1073dd9b0(lVar18 + 0x400,lVar1 + 0x400);
        FUN_1073dd9b0(lVar18 + 0x438,lVar1 + 0x438);
      }
      for (; lVar16 != lVar13; lVar16 = lVar16 + 0x470) {
        func_0x0001074c4bd0(lVar16);
      }
      lVar16 = *(long *)(lVar12 + 0x20);
      *(long *)(lVar12 + 0x20) = lVar14;
      *(long *)(lVar12 + 0x28) = lVar2 + lVar3;
      *(ulong *)(lVar12 + 0x30) = lVar9 + uVar11 * 0x470;
      if (lVar16 != 0) {
        __ZdlPv();
      }
      goto LAB_1074be8a0;
    }
  }
  FUN_1074c4a88();
LAB_1074bf028:
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x1074bf02c);
  (*pcVar10)();
}



/* Entry: 1074be824; end: 1074bf16f;  */

void FUN_1074be824(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined1 uVar8;
  long lVar9;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  ulong uVar10;
  long unaff_x19;
  long *unaff_x20;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  undefined1 auVar18 [16];
  long lStack_920;
  undefined8 uStack_918;
  long lStack_908;
  undefined4 uStack_900;
  long lStack_8d0;
  undefined8 uStack_8c8;
  undefined1 auStack_898 [56];
  undefined1 auStack_860 [56];
  undefined1 auStack_828 [56];
  undefined1 auStack_7f0 [56];
  undefined1 auStack_7b8 [56];
  undefined1 auStack_780 [56];
  undefined1 auStack_748 [56];
  undefined1 auStack_710 [56];
  undefined1 auStack_6d8 [56];
  long lStack_6a0;
  undefined4 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined1 auStack_658 [56];
  undefined1 auStack_620 [64];
  undefined1 auStack_5e0 [64];
  undefined1 auStack_5a0 [56];
  undefined1 auStack_568 [64];
  undefined1 auStack_528 [72];
  undefined1 auStack_4e0 [56];
  undefined1 auStack_4a8 [64];
  undefined1 auStack_468 [56];
  undefined1 auStack_430 [56];
  undefined1 auStack_3f8 [64];
  undefined1 auStack_3b8 [56];
  undefined1 auStack_380 [64];
  undefined1 auStack_340 [56];
  undefined1 auStack_308 [56];
  undefined1 auStack_2d0 [64];
  undefined1 auStack_290 [56];
  undefined1 auStack_258 [64];
  long lStack_218;
  ulong uStack_210;
  long lStack_1d8;
  ulong uStack_1d0;
  long lStack_198;
  ulong uStack_190;
  long lStack_158;
  ulong uStack_150;
  undefined8 uStack_148;
  long lStack_118;
  ulong uStack_110;
  undefined1 auStack_d0 [64];
  undefined1 auStack_90 [64];
  undefined1 auStack_50 [64];
  undefined8 uStack_10;
  
  func_0x0001074c9240();
  func_0x0001074c8848();
  func_0x0001074c8688();
  uStack_10 = extraout_x8;
  FUN_1073e6b8c(&uStack_690,param_1 + 0x18);
  FUN_1074b9cd4(&lStack_920,&uStack_690);
  FUN_1073e6bdc(&uStack_690);
  lVar15 = lStack_920;
  lVar12 = *(long *)(lStack_920 + 0x20);
  lVar11 = *(long *)(lStack_920 + 0x28);
  lVar13 = lVar11 - lVar12;
  uVar14 = lVar13 / 0x470;
  uVar4 = (*(long *)(unaff_x19 + 0xe0) - *(long *)(unaff_x19 + 0xd8)) / 0x6d0;
  uVar17 = uVar4 - uVar14;
  if (uVar17 == 0) {
LAB_1074be8a0:
    lVar12 = 0;
    uVar14 = 0;
    lVar11 = 0x438;
    auVar18 = NEON_fmov(0x3f800000,4);
    while( true ) {
      func_0x0001074c8a58();
      uVar6 = uStack_918;
      lVar15 = lStack_920;
      uVar8 = uVar14 == extraout_x8_00;
      if (extraout_x8_00 <= uVar14) break;
      lVar15 = *unaff_x20;
      uStack_110 = uStack_110 & 0xffffffff00000000;
      lStack_118 = lVar15;
      FUN_107438e4c(auStack_6d8,uVar17 + lVar12,&lStack_118,*(undefined8 *)(lVar15 + 0x10));
      uStack_110 = uStack_110 & 0xffffffff00000000;
      lStack_118 = lVar15;
      FUN_107438e4c(auStack_710,uVar17 + lVar12 + 0x58,&lStack_118,*(undefined8 *)(lVar15 + 0x10));
      func_0x0001074c8cf8();
      func_0x0001074c9004(auStack_50,uVar17 + lVar12 + 0xb0);
      func_0x0001074c8cf8();
      func_0x0001074c9004(auStack_90,uVar17 + lVar12 + 0x110);
      uStack_110 = CONCAT44(uStack_110._4_4_,0x3f800000);
      lStack_118 = lVar15;
      FUN_107438e4c(auStack_748,uVar17 + lVar12 + 0x170,&lStack_118,*(undefined8 *)(lVar15 + 0x10));
      func_0x0001074c8cf8();
      func_0x0001074c9004(auStack_d0,uVar17 + lVar12 + 0x1c8);
      lStack_158 = lVar15;
      uStack_150 = auVar18._0_8_;
      uStack_148 = auVar18._8_8_;
      FUN_1074384fc(&lStack_118,uVar17 + lVar12 + 0x228,&lStack_158,*(undefined8 *)(lVar15 + 0x10));
      uStack_150 = uStack_150 & 0xffffffff00000000;
      lStack_158 = lVar15;
      FUN_107438e4c(auStack_780,uVar17 + lVar12 + 0x290,&lStack_158,*(undefined8 *)(lVar15 + 0x10));
      uStack_190 = 0;
      lStack_198 = lVar15;
      FUN_10748e03c(&lStack_158,uVar17 + lVar12 + 0x2e8,&lStack_198,*(undefined8 *)(lVar15 + 0x10));
      uStack_190 = uStack_190 & 0xffffffff00000000;
      lStack_198 = lVar15;
      FUN_107438e4c(auStack_7b8,uVar17 + lVar12 + 0x348,&lStack_198,*(undefined8 *)(lVar15 + 0x10));
      uStack_190 = CONCAT44(uStack_190._4_4_,0x3f800000);
      lStack_198 = lVar15;
      FUN_107438e4c(auStack_7f0,uVar17 + lVar12 + 0x3a0,&lStack_198,*(undefined8 *)(lVar15 + 0x10));
      uStack_1d0 = 0;
      lStack_1d8 = lVar15;
      FUN_10748e03c(&lStack_198,uVar17 + lVar12 + 0x3f8,&lStack_1d8,*(undefined8 *)(lVar15 + 0x10));
      uStack_1d0 = uStack_1d0 & 0xffffffff00000000;
      lStack_1d8 = lVar15;
      FUN_107438e4c(auStack_828,uVar17 + lVar12 + 0x458,&lStack_1d8,*(undefined8 *)(lVar15 + 0x10));
      uStack_210 = 0;
      lStack_218 = lVar15;
      FUN_10748e03c(&lStack_1d8,uVar17 + lVar12 + 0x4b0,&lStack_218,*(undefined8 *)(lVar15 + 0x10));
      uStack_210 = uStack_210 & 0xffffffff00000000;
      lStack_218 = lVar15;
      FUN_107438e4c(auStack_860,uVar17 + lVar12 + 0x510,&lStack_218,*(undefined8 *)(lVar15 + 0x10));
      uStack_210 = CONCAT44(uStack_210._4_4_,0x3f800000);
      lStack_218 = lVar15;
      FUN_107438e4c(auStack_898,uVar17 + lVar12 + 0x568,&lStack_218,*(undefined8 *)(lVar15 + 0x10));
      uStack_8c8 = 0;
      lStack_8d0 = lVar15;
      FUN_10748e03c(&lStack_218,uVar17 + lVar12 + 0x5c0,&lStack_8d0,*(undefined8 *)(lVar15 + 0x10));
      uStack_900 = 0;
      lStack_908 = lVar15;
      FUN_107438e4c(&lStack_8d0,uVar17 + lVar12 + 0x620,&lStack_908,*(undefined8 *)(lVar15 + 0x10));
      uStack_698 = 0;
      lStack_6a0 = lVar15;
      FUN_107438e4c(&lStack_908,uVar17 + lVar12 + 0x678,&lStack_6a0,*(undefined8 *)(lVar15 + 0x10));
      FUN_1073dd9b0(&uStack_690,auStack_6d8);
      FUN_1073dd9b0(auStack_658,auStack_710);
      FUN_1073f5d44(auStack_620,auStack_50);
      FUN_1073f5d44(auStack_5e0,auStack_90);
      FUN_1073dd9b0(auStack_5a0,auStack_748);
      FUN_1073f5d44(auStack_568,auStack_d0);
      FUN_107433134(auStack_528,&lStack_118);
      FUN_1073dd9b0(auStack_4e0,auStack_780);
      FUN_1073f5d44(auStack_4a8,&lStack_158);
      FUN_1073dd9b0(auStack_468,auStack_7b8);
      FUN_1073dd9b0(auStack_430,auStack_7f0);
      FUN_1073f5d44(auStack_3f8,&lStack_198);
      FUN_1073dd9b0(auStack_3b8,auStack_828);
      FUN_1073f5d44(auStack_380,&lStack_1d8);
      FUN_1073dd9b0(auStack_340,auStack_860);
      FUN_1073dd9b0(auStack_308,auStack_898);
      FUN_1073f5d44(auStack_2d0,&lStack_218);
      FUN_1073dd9b0(auStack_290,&lStack_8d0);
      FUN_1073dd9b0(auStack_258,&lStack_908);
      FUN_1073dd4c4(&lStack_908);
      FUN_1073dd4c4(&lStack_8d0);
      FUN_1073deccc(&lStack_218);
      FUN_1073dd4c4(auStack_898);
      FUN_1073dd4c4(auStack_860);
      FUN_1073deccc(&lStack_1d8);
      FUN_1073dd4c4(auStack_828);
      FUN_1073deccc(&lStack_198);
      FUN_1073dd4c4(auStack_7f0);
      FUN_1073dd4c4(auStack_7b8);
      FUN_1073deccc(&lStack_158);
      FUN_1073dd4c4(auStack_780);
      FUN_1073debc4(&lStack_118);
      FUN_1073deccc(auStack_d0);
      FUN_1073dd4c4(auStack_748);
      FUN_1073deccc(auStack_90);
      FUN_1073deccc(auStack_50);
      FUN_1073dd4c4(auStack_710);
      FUN_1073dd4c4(auStack_6d8);
      lVar15 = *(long *)(lStack_920 + 0x20) + lVar11;
      FUN_1073ddf7c(lVar15 + -0x438,&uStack_690);
      FUN_1073ddf7c(lVar15 + -0x400,auStack_658);
      FUN_1074c4ac8(lVar15 + -0x3c8,auStack_620);
      FUN_1074c4ac8(lVar15 + -0x388,auStack_5e0);
      FUN_1073ddf7c(lVar15 + -0x348,auStack_5a0);
      FUN_1074c4ac8(lVar15 + -0x310,auStack_568);
      FUN_107433ce0(lVar15 + -0x2d0,auStack_528);
      FUN_1073ddf7c(lVar15 + -0x288,auStack_4e0);
      FUN_1074c4ac8(lVar15 + -0x250,auStack_4a8);
      FUN_1073ddf7c(lVar15 + -0x210,auStack_468);
      FUN_1073ddf7c(lVar15 + -0x1d8,auStack_430);
      FUN_1074c4ac8(lVar15 + -0x1a0,auStack_3f8);
      FUN_1073ddf7c(lVar15 + -0x160,auStack_3b8);
      FUN_1074c4ac8(lVar15 + -0x128,auStack_380);
      FUN_1073ddf7c(lVar15 + -0xe8,auStack_340);
      FUN_1073ddf7c(lVar15 + -0xb0,auStack_308);
      FUN_1074c4ac8(lVar15 + -0x78,auStack_2d0);
      FUN_1073ddf7c(lVar15 + -0x38,auStack_290);
      FUN_1073ddf7c(lVar15,auStack_258);
      func_0x0001074c4bd0(&uStack_690);
      uVar14 = uVar14 + 1;
      lVar12 = lVar12 + 0x6d0;
      lVar11 = lVar11 + 0x470;
    }
    *(undefined1 *)(unaff_x19 + 0x38) = 0x14;
    *(undefined1 *)(lStack_920 + 0x18) = 0x14;
    lStack_920 = 0;
    uStack_918 = 0;
    uStack_110 = 0;
    lStack_118 = 0;
    uStack_688 = *(undefined8 *)(unaff_x19 + 0x10);
    uStack_690 = *(undefined8 *)(unaff_x19 + 8);
    *(undefined8 *)(unaff_x19 + 0x10) = uVar6;
    *(long *)(unaff_x19 + 8) = lVar15;
    FUN_1073ad37c(&uStack_690);
    FUN_1074c58b4(&lStack_118);
    FUN_1074c2744(&lStack_920);
    func_0x0001074c8620(uStack_10);
    if ((bool)uVar8) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    if (uVar4 < uVar14 || uVar17 == 0) {
      if (uVar4 < uVar14) {
        FUN_1074c4a94((long *)(lStack_920 + 0x20),lVar12 + uVar4 * 0x470);
      }
      goto LAB_1074be8a0;
    }
    if (uVar17 <= (ulong)((*(long *)(lStack_920 + 0x30) - lVar11) / 0x470)) {
      lVar13 = lVar11 + uVar17 * 0x470;
      for (lVar12 = uVar4 * 0x470 + uVar14 * -0x470; lVar12 != 0; lVar12 = lVar12 + -0x470) {
        _bzero(lVar11,0x470);
        lVar11 = lVar11 + 0x470;
      }
      *(long *)(lVar15 + 0x28) = lVar13;
      goto LAB_1074be8a0;
    }
    if (uVar4 < 0x39b0ad12073616) {
      uVar5 = (*(long *)(lStack_920 + 0x30) - lVar12) / 0x470;
      uVar10 = uVar5 * 2;
      if (uVar10 < uVar4 || uVar10 - uVar4 == 0) {
        uVar10 = uVar4;
      }
      if (0x1cd85689039b09 < uVar5) {
        uVar10 = 0x39b0ad12073615;
      }
      if (0x39b0ad12073615 < uVar10) {
        func_0x000104bd35f4();
        goto LAB_1074bf028;
      }
      lVar9 = uVar10 * 0x470;
      __Znwm();
      lVar2 = lVar9 + lVar13;
      lVar3 = uVar17 * 0x470;
      lVar1 = lVar2;
      for (lVar16 = uVar4 * 0x470 + uVar14 * -0x470; lVar16 != 0; lVar16 = lVar16 + -0x470) {
        _bzero(lVar1,0x470);
        lVar1 = lVar1 + 0x470;
      }
      lVar13 = lVar2 + (lVar13 / -0x470) * 0x470;
      for (uVar17 = 0; lVar1 = lVar12 + uVar17, lVar1 != lVar11; uVar17 = uVar17 + 0x470) {
        lVar16 = lVar13 + uVar17;
        FUN_1073dd9b0(lVar16,lVar1);
        FUN_1073dd9b0(lVar16 + 0x38,lVar1 + 0x38);
        FUN_1073f5d44(lVar16 + 0x70,lVar1 + 0x70);
        FUN_1073f5d44(lVar16 + 0xb0,lVar1 + 0xb0);
        FUN_1073dd9b0(lVar16 + 0xf0,lVar1 + 0xf0);
        FUN_1073f5d44(lVar16 + 0x128,lVar1 + 0x128);
        FUN_107433134(lVar16 + 0x168,lVar1 + 0x168);
        FUN_1073dd9b0(lVar16 + 0x1b0,lVar1 + 0x1b0);
        FUN_1073f5d44(lVar16 + 0x1e8,lVar1 + 0x1e8);
        FUN_1073dd9b0(lVar16 + 0x228,lVar1 + 0x228);
        FUN_1073dd9b0(lVar16 + 0x260,lVar1 + 0x260);
        FUN_1073f5d44(lVar16 + 0x298,lVar1 + 0x298);
        FUN_1073dd9b0(lVar16 + 0x2d8,lVar1 + 0x2d8);
        FUN_1073f5d44(lVar16 + 0x310,lVar1 + 0x310);
        FUN_1073dd9b0(lVar16 + 0x350,lVar1 + 0x350);
        FUN_1073dd9b0(lVar16 + 0x388,lVar1 + 0x388);
        FUN_1073f5d44(lVar16 + 0x3c0,lVar1 + 0x3c0);
        FUN_1073dd9b0(lVar16 + 0x400,lVar1 + 0x400);
        FUN_1073dd9b0(lVar16 + 0x438,lVar1 + 0x438);
      }
      for (; lVar12 != lVar11; lVar12 = lVar12 + 0x470) {
        func_0x0001074c4bd0(lVar12);
      }
      lVar12 = *(long *)(lVar15 + 0x20);
      *(long *)(lVar15 + 0x20) = lVar13;
      *(long *)(lVar15 + 0x28) = lVar2 + lVar3;
      *(ulong *)(lVar15 + 0x30) = lVar9 + uVar10 * 0x470;
      if (lVar12 != 0) {
        __ZdlPv();
      }
      goto LAB_1074be8a0;
    }
  }
  FUN_1074c4a88();
LAB_1074bf028:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x1074bf02c);
  (*pcVar7)();
}



/* Entry: 1074bf170; end: 1074bf22f;  */

bool FUN_1074bf170(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0xd8);
  do {
    lVar2 = lVar1;
    if ((lVar2 == *(long *)(param_1 + 0xe0)) ||
       ((((((*(char *)(lVar2 + 0x60) != '\0' || *(char *)(lVar2 + 8) != '\0') ||
           (*(char *)(lVar2 + 0xb8) != '\0' || *(char *)(lVar2 + 0x118) != '\0')) ||
          ((*(char *)(lVar2 + 0x178) != '\0' || *(char *)(lVar2 + 0x1d0) != '\0') ||
          *(char *)(lVar2 + 0x230) != '\0')) ||
         (((*(char *)(lVar2 + 0x298) != '\0' || *(char *)(lVar2 + 0x2f0) != '\0') ||
          *(char *)(lVar2 + 0x350) != '\0') || *(char *)(lVar2 + 0x3a8) != '\0')) ||
        ((((*(char *)(lVar2 + 0x400) != '\0' || *(char *)(lVar2 + 0x460) != '\0') ||
          *(char *)(lVar2 + 0x4b8) != '\0') || *(char *)(lVar2 + 0x518) != '\0') ||
        *(char *)(lVar2 + 0x570) != '\0')) ||
        (*(char *)(lVar2 + 0x5c8) != '\0' || *(char *)(lVar2 + 0x628) != '\0'))) break;
    lVar1 = lVar2 + 0x6d0;
  } while ((*(byte *)(lVar2 + 0x680) & 1) == 0);
  return lVar2 != *(long *)(param_1 + 0xe0);
}



/* Entry: 1074bf230; end: 1074bf2b7;  */

undefined1 FUN_1074bf230(long param_1,long param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  if (*(char *)(*(long *)(param_1 + 0x40) + param_2 * 0x100 + 0xf8) == '\x01') {
    lVar4 = *(long *)(param_1 + 0x28) + param_2 * 0xa0;
    lVar1 = *(long *)(lVar4 + 0x48);
    for (lVar4 = *(long *)(lVar4 + 0x40); lVar4 != lVar1; lVar4 = lVar4 + 0x88) {
      if (*(char *)(lVar4 + 0x7a) == '\x01') {
        plVar2 = param_3;
        func_0x00010747b8f8(param_3,lVar4 + 0x20);
        if (plVar2 == (long *)0x0) {
          return 1;
        }
        lVar3 = *plVar2;
        func_0x00010778196c();
        if ((*(byte *)(lVar3 + 0x10) & 1) != 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}



/* Entry: 1074bf2b8; end: 1074bf40b;  */

void FUN_1074bf2b8(float param_1,float param_2,float param_3,float param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_90 [32];
  
  fVar2 = *(float *)(param_5 + 0x158);
  fVar1 = *(float *)(param_5 + 0x15c);
  FUN_1074c4c90(auStack_90,*(undefined1 *)(param_5 + 0x40));
  param_1 = param_1 + param_3 * fVar2;
  param_2 = param_2 + param_4 * param_3 * fVar1;
  func_0x0001074c4d28(param_7,param_8,*(undefined8 *)(param_5 + 0x130),
                      *(undefined8 *)(param_5 + 0x138));
  uVar3 = *(undefined4 *)(param_5 + 0x124);
  uVar4 = *(undefined4 *)(param_5 + 0x140);
  func_0x0001074c8744();
  *(float *)(param_5 + 0x44) = param_2;
  *(float *)(param_5 + 0x48) = param_1;
  *(undefined4 *)(param_5 + 0x4c) = uVar3;
  *(undefined4 *)(param_5 + 0x50) = uVar4;
  if ((*(byte *)(param_5 + 0x54) & 1) == 0) {
    *(undefined1 *)(param_5 + 0x54) = 1;
  }
  uVar3 = *(undefined4 *)(param_5 + 0x128);
  uVar4 = *(undefined4 *)(param_5 + 0x148);
  func_0x0001074c8744();
  *(float *)(param_5 + 0x58) = param_2;
  *(float *)(param_5 + 0x5c) = param_1;
  *(undefined4 *)(param_5 + 0x60) = uVar3;
  *(undefined4 *)(param_5 + 100) = uVar4;
  if ((*(byte *)(param_5 + 0x68) & 1) == 0) {
    *(undefined1 *)(param_5 + 0x68) = 1;
  }
  uVar3 = *(undefined4 *)(param_5 + 300);
  uVar4 = *(undefined4 *)(param_5 + 0x150);
  func_0x0001074c8744();
  *(float *)(param_5 + 0x6c) = param_2;
  *(float *)(param_5 + 0x70) = param_1;
  *(undefined4 *)(param_5 + 0x74) = uVar3;
  *(undefined4 *)(param_5 + 0x78) = uVar4;
  if ((*(byte *)(param_5 + 0x7c) & 1) == 0) {
    *(undefined1 *)(param_5 + 0x7c) = 1;
  }
  return;
}



/* Entry: 1074bf40c; end: 1074bf51b;  */

void FUN_1074bf40c(float param_1,float param_2,float param_3,undefined8 param_4,float param_5,
                  float param_6,undefined8 param_7,long param_8,long param_9,ulong param_10,
                  ulong param_11)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fStack_a8;
  float fStack_a4;
  undefined1 auStack_a0 [32];
  
  fVar2 = *(float *)(param_8 + 0x158);
  fVar3 = *(float *)(param_8 + 0x15c);
  FUN_1074c4c90(auStack_a0,*(undefined1 *)(param_8 + 0x40));
  param_1 = param_1 + param_3 * fVar2;
  param_2 = param_2 + (float)param_4 * param_3 * fVar3;
  fStack_a8 = param_1;
  fStack_a4 = param_2;
  func_0x0001074c4d28(param_10,param_11,*(undefined8 *)(param_8 + 0x130),
                      *(undefined8 *)(param_8 + 0x138));
  lVar1 = param_8;
  if (param_9 != 0) {
    lVar1 = param_9;
  }
  FUN_1074c4e48(param_3 * ((float)(param_10 & 0xffffffff) / param_5) *
                          *(float *)(param_8 + 0x120) * param_2,
                param_3 * ((float)(param_11 & 0xffffffff) / param_5) *
                          *(float *)(param_8 + 0x120) * param_1,param_4,
                param_6 + *(float *)(param_8 + 0x160),param_7,&fStack_a8,auStack_a0,
                *(undefined1 *)(param_8 + 0x164),lVar1 + 0x168);
  return;
}



/* Entry: 1074bf51c; end: 1074bf5bb;  */

void FUN_1074bf51c(undefined8 param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0:
    NEON_fmov(0x3e800000,4);
    break;
  case 1:
    break;
  case 2:
    break;
  case 3:
    break;
  case 4:
    break;
  case 5:
    break;
  case 6:
    break;
  case 7:
    break;
  case 8:
  }
  return;
}



/* Entry: 1074bf5bc; end: 1074bf653;  */

undefined8 FUN_1074bf5bc(long param_1,long param_2,long param_3,long *param_4)

{
  long lVar1;
  undefined8 uVar2;
  float *pfVar3;
  
  if ((*(byte *)(param_1 + param_3) & 1) != 0) {
    return 0;
  }
  func_0x00010747b8f8(param_4,param_2 + 8);
  if (param_4 == (long *)0x0) {
    return 0;
  }
  lVar1 = *param_4;
  func_0x00010778196c();
  if ((*(byte *)(lVar1 + 0x10) & 1) == 0) {
    if (*(char *)(param_2 + 0x13c) == '\x01') {
      pfVar3 = (float *)(param_2 + 0x138);
      func_0x00010726a954();
      if (*pfVar3 <= 0.0) goto LAB_1074bf5fc;
    }
    if (*(char *)(param_2 + 0x134) == '\x01') {
      pfVar3 = (float *)(param_2 + 0x130);
      func_0x00010726a954();
      if (*pfVar3 <= 0.0) goto LAB_1074bf5fc;
    }
    uVar2 = 1;
  }
  else {
LAB_1074bf5fc:
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 1074bf654; end: 1074bff47;  */

undefined8 ** FUN_1074bf654(undefined8 **param_1,undefined8 *param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  bool bVar10;
  undefined1 uVar11;
  long *plVar12;
  undefined8 **ppuVar13;
  undefined8 ***pppuVar14;
  undefined8 **ppuVar15;
  undefined8 **ppuVar16;
  ulong uVar17;
  undefined8 extraout_x8;
  undefined8 *puVar18;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  undefined8 **extraout_x8_05;
  undefined8 extraout_x8_06;
  int iVar19;
  code *extraout_x9;
  code *extraout_x9_00;
  ulong extraout_x9_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w11;
  long extraout_x11;
  undefined8 uVar20;
  undefined8 **ppuVar21;
  ulong *puVar22;
  undefined8 ***pppuVar23;
  long lVar24;
  int iVar25;
  long lVar26;
  undefined8 ***pppuVar27;
  undefined8 ***unaff_x23;
  ulong uVar28;
  undefined8 **unaff_x24;
  ulong uVar29;
  undefined8 *puVar30;
  ulong *puVar31;
  long lVar32;
  undefined8 in_stack_00000050;
  undefined4 auStack_538 [6];
  undefined4 uStack_520;
  undefined1 uStack_4ec;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 *apuStack_4c8 [7];
  undefined1 auStack_490 [56];
  undefined8 uStack_458;
  undefined8 **ppuStack_450;
  undefined8 ***pppuStack_448;
  undefined8 ***pppuStack_440;
  undefined8 ***pppuStack_438;
  undefined8 **ppuStack_430;
  undefined8 **ppuStack_428;
  undefined8 *puStack_420;
  code *pcStack_418;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  ulong *puStack_3f8;
  undefined8 *puStack_3f0;
  undefined8 *puStack_3e8;
  undefined8 **ppuStack_3e0;
  long lStack_3d8;
  undefined8 *puStack_3d0;
  undefined8 *puStack_3c8;
  undefined8 **ppuStack_3c0;
  undefined8 **ppuStack_3b8;
  undefined8 **ppuStack_3b0;
  undefined8 **ppuStack_3a8;
  undefined8 **ppuStack_3a0;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined4 uStack_370;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 *puStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 **ppuStack_330;
  undefined8 **ppuStack_328;
  undefined8 **ppuStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 *puStack_308;
  undefined8 *puStack_300;
  undefined8 **ppuStack_2f8;
  undefined8 auStack_2f0 [5];
  undefined1 uStack_2c8;
  undefined1 uStack_2c7;
  undefined4 uStack_2c4;
  undefined1 auStack_2c0 [80];
  undefined1 uStack_270;
  undefined8 uStack_248;
  undefined8 *puStack_240;
  undefined8 *puStack_238;
  undefined8 *apuStack_1a0 [50];
  undefined8 uStack_10;
  
  func_0x0001074c9240();
  ppuVar16 = param_1;
  puVar18 = param_2;
  func_0x0001074c8688();
  ppuVar16[0x1a] = (undefined8 *)puVar18[5];
  uStack_10 = extraout_x8;
  (**(code **)(*(long *)*puVar18 + 0x68))(apuStack_1a0);
  FUN_107486e5c(param_1 + 5,apuStack_1a0);
  func_0x0001073ad4a0(apuStack_1a0);
  FUN_1074e3b28(param_1);
  uStack_340 = 0;
  uStack_338 = 0;
  puStack_348 = &uStack_340;
  uStack_350 = 0;
  uStack_360 = 0;
  uStack_358 = 0;
  uStack_388 = 0;
  uStack_390 = 0;
  uStack_378 = 0;
  uStack_380 = 0;
  uStack_370 = 0x3f800000;
  uVar20 = param_2[6];
  func_0x0001074c9014(param_1[3],param_1 + 0x15);
  uVar2 = *(undefined4 *)(param_2[3] + 0x4c);
  uVar3 = *(undefined4 *)(param_2[3] + 0x50);
  func_0x0001077512dc(*(undefined4 *)param_2[7],&ppuStack_330);
  uStack_248 = uVar20;
  func_0x000107751334(apuStack_1a0,&ppuStack_330);
  func_0x000107267da8(&ppuStack_330);
  uStack_404 = SUB84(param_1[3],0);
  ppuVar16 = (undefined8 **)0x0;
  FUN_1074bda4c();
  *(char *)(param_1 + 0x41) = (char)uStack_404;
  puVar18 = param_1[3];
  if (*(int *)(puVar18 + 0x76) == 0) {
    unaff_x23 = (undefined8 ***)0x0;
  }
  else if (*(int *)(puVar18 + 0x76) == 1) {
    unaff_x23 = (undefined8 ***)(ulong)*(byte *)(puVar18 + 0x70);
  }
  else {
    ppuStack_330 = (undefined8 **)((ulong)ppuStack_330 & 0xffffffffffffff00);
    ppuStack_2f8 = (undefined8 **)((ulong)ppuStack_2f8 & 0xffffffffffffff00);
    auStack_2f0[0] = 0;
    ppuVar16 = apuStack_1a0;
    FUN_1073f694c(puVar18 + 0x70,ppuVar16,&ppuStack_330,0);
    func_0x0001074c8fec();
    puVar18 = param_1[3];
  }
  uStack_408 = SUB84(unaff_x23,0);
  uStack_400 = uVar3;
  uStack_3fc = uVar2;
  if (*(int *)(puVar18 + 0x43) == 0) {
    unaff_x23 = (undefined8 ***)0x1;
  }
  else if (*(int *)(puVar18 + 0x43) == 1) {
    unaff_x23 = (undefined8 ***)(ulong)*(byte *)(puVar18 + 0x3d);
  }
  else {
    ppuStack_330 = (undefined8 **)((ulong)ppuStack_330 & 0xffffffffffffff00);
    ppuStack_2f8 = (undefined8 **)((ulong)ppuStack_2f8 & 0xffffffffffffff00);
    auStack_2f0[0] = 0;
    ppuVar16 = apuStack_1a0;
    func_0x000107280464(puVar18 + 0x3d,ppuVar16,&ppuStack_330,0);
    func_0x0001074c8fec();
  }
  bVar10 = false;
  ppuVar21 = param_1 + 0x7e;
  while (ppuVar21 = (undefined8 **)*ppuVar21, ppuVar21 != (undefined8 **)0x0) {
    if (*(int *)(ppuVar21 + 0xc) == 1) {
      lVar26 = param_2[8] + 0x40;
      ppuVar16 = ppuVar21 + 2;
      FUN_1074c7410();
      if (lVar26 != 0) {
        puVar18 = param_1[0x13];
        ppuVar16 = ppuVar21 + 2;
        func_0x00010747b8f8();
        if (puVar18 != (undefined8 *)0x0) {
          ppuStack_328 = (undefined8 **)puVar18[1];
          ppuStack_330 = (undefined8 **)*puVar18;
          if (puVar18[1] != 0) {
            do {
              func_0x0001074c8654();
            } while (extraout_w10 != 0);
          }
          if (*(int *)(ppuVar21 + 0xc) == 0) {
            ppuVar16 = (undefined8 **)0x0;
            func_0x0001074708c0(ppuVar21 + 9);
          }
          else {
            FUN_1074c2c90(ppuVar21 + 9);
            ppuVar21[10] = ppuStack_328;
            ppuVar21[9] = ppuStack_330;
            if (ppuStack_328 != (undefined8 **)0x0) {
              do {
                func_0x0001074c8654();
              } while (extraout_w10_00 != 0);
            }
            *(undefined4 *)(ppuVar21 + 0xc) = 0;
          }
          func_0x00010725af58(&ppuStack_330);
          bVar10 = true;
        }
      }
    }
  }
  if (bVar10) {
    param_1[0x86] = (undefined8 *)((long)param_1[0x86] + 1);
  }
  plVar12 = (long *)*param_1[5];
  plVar6 = (long *)param_1[5][1];
  puVar18 = param_1[0x6c];
  if (((ulong)param_1[0x6d] & 1) == 0) {
    puVar18 = (undefined8 *)0x0;
  }
  puVar30 = param_1[0x56];
  if (param_1[0x56] <= puVar18) {
    puVar30 = puVar18;
  }
  if (((ulong)param_1[0x57] & 1) == 0) {
    puVar30 = puVar18;
  }
  for (; plVar12 != plVar6; plVar12 = plVar12 + 1) {
    lVar26 = *plVar12;
    func_0x0001074c8bb4(*(undefined8 *)(lVar26 + 0x220));
    (*extraout_x8_00)();
    if (((ulong)ppuVar16 & 1) != 0) {
      puVar18 = *(undefined8 **)(lVar26 + 0x220);
      func_0x0001074c8bb4();
      (*extraout_x8_01)();
      if (((ulong)ppuVar16 & 1) == 0) goto LAB_1074bfe24;
      if (puVar30 <= puVar18) {
        puVar30 = puVar18;
      }
    }
  }
  pppuVar27 = (undefined8 ***)param_1[5][1];
  uVar29 = 0xa0;
  for (pppuVar23 = (undefined8 ***)*param_1[5]; pppuVar23 != pppuVar27; pppuVar23 = pppuVar23 + 1) {
    ppuVar21 = *pppuVar23;
    func_0x0001074c8bb4(ppuVar21[0x44]);
    (*extraout_x8_02)();
    if (((ulong)ppuVar16 & 1) != 0) {
      plVar12 = ppuVar21[0x44];
      (**(code **)(*plVar12 + 0x60))();
      if ((int)plVar12 != 0) {
        puVar18 = ppuVar21[0x44];
        func_0x0001074c8bb4();
        (*extraout_x8_03)();
        if (((ulong)ppuVar16 & 1) == 0) goto LAB_1074bfe24;
        uVar11 = puVar18 == puVar30;
        if (puVar18 < puVar30) {
LAB_1074bf9d0:
          uVar29 = 0;
          FUN_1074bff48(param_1);
          FUN_1074c010c(param_1);
          goto LAB_1074bfdd4;
        }
      }
      ppuVar16 = (undefined8 **)param_1[3];
      func_0x0001074c9040(ppuVar21[0x44]);
      (*extraout_x9)(&ppuStack_3b0);
      ppuStack_328 = ppuStack_3a8;
      ppuStack_330 = ppuStack_3b0;
      ppuStack_3b0 = (undefined8 **)0x0;
      ppuStack_3a8 = (undefined8 **)0x0;
      func_0x0001073e091c(&ppuStack_3b0);
      if (((ulong)unaff_x23 & 1) == 0 && ppuStack_330 != (undefined8 **)0x0) {
        ppuVar21 = (undefined8 **)(((long)ppuStack_330[6] - (long)ppuStack_330[5]) / 0xa0);
        for (unaff_x24 = (undefined8 **)0x0; ppuVar21 != unaff_x24;
            unaff_x24 = (undefined8 **)((long)unaff_x24 + 1)) {
          ppuVar13 = ppuStack_330;
          ppuVar16 = unaff_x24;
          FUN_1074bf230(ppuStack_330,unaff_x24,param_1[0x13]);
          if (((int)ppuVar13 != 0) && (uVar11 = param_1[0x5a] == param_1[0x59], !(bool)uVar11)) {
            func_0x0001074c8ce0();
            goto LAB_1074bf9d0;
          }
        }
      }
      func_0x0001074c8ce0();
    }
  }
  func_0x0001074c9158();
  ppuStack_3b0 = (undefined8 **)0x0;
  ppuStack_3a8 = (undefined8 **)0x0;
  ppuStack_3a0 = (undefined8 **)0x0;
  puVar22 = (ulong *)*param_1[5];
  puVar31 = (ulong *)param_1[5][1];
  puStack_3f8 = puVar31;
  puStack_3f0 = puVar30;
  puStack_3e8 = param_2;
  do {
    if (puVar22 == puVar31) {
      ppuStack_328 = ppuStack_3a8;
      ppuStack_330 = ppuStack_3b0;
      ppuStack_320 = ppuStack_3a0;
      ppuStack_3b0 = (undefined8 **)0x0;
      ppuStack_3a8 = (undefined8 **)0x0;
      ppuStack_3a0 = (undefined8 **)0x0;
      pppuVar27 = &ppuStack_330;
      uStack_318 = (undefined8 *)CONCAT44(uStack_400,uStack_3fc);
      uStack_310 = (undefined8 *)CONCAT44(*(undefined4 *)(param_2 + 9),*(undefined4 *)param_2[7]);
      puStack_308 = (undefined8 *)CONCAT71(puStack_308._1_7_,(char)uStack_404);
      ppuStack_2f8 = (undefined8 **)CONCAT71(ppuStack_2f8._1_7_,1);
      puStack_300 = puVar30;
      FUN_10749ea60(auStack_2f0,&uStack_390);
      uStack_2c8 = (undefined1)uStack_408;
      pppuVar23 = (undefined8 ***)param_2[3];
      pppuVar14 = pppuVar23;
      FUN_1074178c4();
      uStack_2c7 = SUB81(pppuVar14,0);
      uStack_2c4 = 0;
      uVar11 = *(char *)((long)pppuVar23 + 0xa94) == '\x01';
      if ((bool)uVar11) {
        uStack_2c4 = *(undefined4 *)(pppuVar23 + 0x152);
      }
      func_0x0001074c8fcc();
      unaff_x23 = &ppuStack_330;
      _memcpy(auStack_2c0,pppuVar23 + 0x154,0x80);
      lVar26 = param_2[3];
      FUN_107416bf8(lVar26);
      puStack_238 = *(undefined8 **)(lVar26 + 0xe38);
      puStack_240 = *(undefined8 **)(lVar26 + 0xe30);
      ppuVar21 = param_1 + 0x21;
      if (param_1[0x21] != (undefined8 *)0x0) {
        FUN_1074c52dc(ppuVar21);
        __ZdlPv(*ppuVar21);
        *ppuVar21 = (undefined8 *)0x0;
        param_1[0x22] = (undefined8 *)0x0;
        param_1[0x23] = (undefined8 *)0x0;
      }
      param_1[0x22] = ppuStack_328;
      *ppuVar21 = ppuStack_330;
      param_1[0x23] = ppuStack_320;
      ppuStack_328 = (undefined8 **)0x0;
      ppuStack_320 = (undefined8 **)0x0;
      ppuStack_330 = (undefined8 **)0x0;
      param_1[0x25] = uStack_310;
      param_1[0x24] = uStack_318;
      param_1[0x27] = puStack_300;
      param_1[0x26] = puStack_308;
      *(undefined1 *)(param_1 + 0x28) = ppuStack_2f8._0_1_;
      func_0x00010749eb0c(param_1 + 0x29,auStack_2f0);
      _memcpy(param_1 + 0x2e,&uStack_2c8,0x88);
      param_1[0x40] = puStack_238;
      param_1[0x3f] = puStack_240;
      func_0x0001074c2e40(&ppuStack_330);
      uVar29 = 1;
      FUN_1074bff48(param_1);
      FUN_1074c010c(param_1);
      func_0x0001074c5288(&ppuStack_3b0);
LAB_1074bfdd4:
      func_0x000107267da8(apuStack_1a0);
      FUN_10749ecc0(&uStack_390);
      func_0x0001074c34b4(&uStack_360);
      ppuVar16 = &puStack_348;
      func_0x0001001c1d38();
      func_0x0001074c8620(uStack_10);
      if ((bool)uVar11) {
        return param_1;
      }
      ___stack_chk_fail();
      func_0x00010724b3d8(&ppuStack_330);
      func_0x000107267da8(apuStack_1a0);
      FUN_10749ecc0(&uStack_390);
      func_0x0001074c34b4(&uStack_360);
      ppuVar13 = &puStack_348;
      func_0x0001001c1d38();
      func_0x0001074c8820();
      pcStack_418 = FUN_1074bff48;
      ppuVar15 = ppuVar13;
      ppuStack_450 = unaff_x24;
      pppuStack_448 = unaff_x23;
      pppuStack_440 = pppuVar27;
      pppuStack_438 = pppuVar23;
      ppuStack_430 = ppuVar21;
      ppuStack_428 = ppuVar16;
      puStack_420 = &stack0x00000050;
      func_0x0001074c8688();
      uStack_458 = extraout_x8_06;
      if ((uVar29 & 1) == 0) {
        iVar19 = *(int *)(ppuVar13 + 0x85) + 1;
        *(int *)(ppuVar13 + 0x85) = iVar19;
        iVar25 = *(int *)((long)ppuVar13 + 0x42c);
      }
      else {
        iVar25 = *(int *)((long)ppuVar13 + 0x42c) + 1;
        *(int *)((long)ppuVar13 + 0x42c) = iVar25;
        iVar19 = *(int *)(ppuVar13 + 0x85);
      }
      uVar11 = iVar25 + iVar19 == 300;
      if (299 < (uint)(iVar25 + iVar19)) {
        func_0x0001077f3c4c();
        func_0x0001077f3790();
        auStack_538[0] = 0xfa;
        uStack_520 = 0;
        func_0x0001074c8d48();
        uStack_4ec = 1;
        uStack_4e0 = 0;
        uStack_4d8 = 0;
        uStack_4e8 = 0;
        func_0x0001074c8eb8(ppuVar13[3],auStack_490);
        FUN_107371bc4(auStack_538,&DAT_10f408ba3,auStack_490);
        func_0x00010729d56c();
        func_0x0001074c9088();
        func_0x0001074c9060();
        FUN_10743fa9c();
        func_0x000104c2f714(auStack_490);
        func_0x0001074c900c();
        auStack_538[0] = 0xfb;
        uStack_520 = 0;
        func_0x0001074c8d48();
        uStack_4ec = 1;
        uStack_4e0 = 0;
        uStack_4d8 = 0;
        uStack_4e8 = 0;
        func_0x0001074c8eb8(ppuVar13[3],apuStack_4c8);
        FUN_107371bc4(auStack_538,&DAT_10f408ba3,apuStack_4c8);
        func_0x0001074c9088();
        func_0x0001074c9060();
        FUN_10743fa44();
        ppuVar15 = apuStack_4c8;
        func_0x000104c2f714();
        func_0x0001074c900c();
        ppuVar13[0x85] = (undefined8 *)0x0;
      }
      func_0x0001074c8620(uStack_458);
      if ((bool)uVar11) {
        return ppuVar15;
      }
      ___stack_chk_fail();
      ppuVar16 = apuStack_4c8;
      func_0x000104c2f714();
      func_0x0001074c900c();
      func_0x0001074c8820();
      iVar25 = 0;
      puVar31 = ppuVar16[0x22];
      for (puVar22 = ppuVar16[0x21]; puVar22 != puVar31; puVar22 = puVar22 + 0x19) {
        lVar4 = *(long *)(*puVar22 + 0x28);
        lVar7 = *(long *)(*puVar22 + 0x30);
        for (lVar26 = 0; lVar26 != (lVar7 - lVar4) / 0xa0; lVar26 = lVar26 + 1) {
          uVar29 = *puVar22;
          FUN_1074bf230(uVar29,lVar26,ppuVar16[0x13]);
          if ((uVar29 & 1) == 0) {
            lVar32 = 0;
            lVar1 = *(long *)(*puVar22 + 0x40) + lVar26 * 0x100;
            lVar5 = *(long *)(lVar1 + 0x48);
            lVar8 = *(long *)(lVar1 + 0x50);
            for (lVar24 = 0; (lVar8 - lVar5) / 0x1a8 != lVar24; lVar24 = lVar24 + 1) {
              uVar20 = *(undefined8 *)(lVar1 + 0xe0);
              FUN_1074bf5bc(uVar20,*(long *)(lVar1 + 0x48) + lVar32,lVar24,ppuVar16[0x13]);
              iVar25 = iVar25 + (int)uVar20;
              lVar32 = lVar32 + 0x1a8;
            }
          }
        }
      }
      if (iVar25 == 0) {
        ppuVar16 = (undefined8 **)(ulong)(ppuVar16[0x5a] != ppuVar16[0x59]);
      }
      else {
        ppuVar16 = (undefined8 **)0x1;
      }
      return ppuVar16;
    }
    uVar28 = *puVar22;
    func_0x0001074c9040(*(undefined8 *)(uVar28 + 0x220),param_1[3]);
    (*extraout_x9_00)(&ppuStack_330);
    ppuStack_3b8 = ppuStack_328;
    ppuStack_3c0 = ppuStack_330;
    ppuStack_330 = (undefined8 **)0x0;
    ppuStack_328 = (undefined8 **)0x0;
    func_0x0001073e091c(&ppuStack_330);
    if (ppuStack_3c0 != (undefined8 **)0x0) {
      uVar17 = uVar28;
      (**(code **)(*(long *)*param_2 + 0x78))();
      func_0x00010782f9e0(&puStack_3d0);
      ppuStack_328 = ppuStack_3b8;
      ppuStack_330 = ppuStack_3c0;
      if (ppuStack_3b8 != (undefined8 **)0x0) {
        do {
          func_0x0001074c8654();
        } while (extraout_w10_01 != 0);
      }
      uStack_318 = puStack_3c8;
      ppuStack_320 = (undefined8 **)puStack_3d0;
      if (puStack_3c8 != (undefined8 *)0x0) {
        do {
          func_0x0001074c8654();
        } while (extraout_w10_02 != 0);
      }
      puVar18 = *(undefined8 **)(uVar28 + 0x220);
      func_0x0001074c8bb4();
      (*extraout_x8_04)();
      if ((uVar17 & 1) == 0) {
        puVar18 = (undefined8 *)0x0;
      }
      puStack_300 = *(undefined8 **)(*(long *)(uVar28 + 0x218) + 0x14);
      puStack_308 = *(undefined8 **)(*(long *)(uVar28 + 0x218) + 0xc);
      ppuVar16 = *(undefined8 ***)(uVar28 + 0x220);
      lStack_3d8 = *(long *)(uVar28 + 0x228);
      ppuVar21 = ppuVar16;
      ppuStack_3e0 = ppuVar16;
      uStack_310 = puVar18;
      if (lStack_3d8 != 0) {
        do {
          func_0x0001074c88e0();
        } while (extraout_w11 != 0);
        ppuVar21 = *(undefined8 ***)(uVar28 + 0x220);
        ppuVar16 = extraout_x8_05;
      }
      ppuStack_2f8 = ppuVar16;
      _memcpy(auStack_2f0,uVar28 + 0x10,0x80);
      ppuVar16 = ppuVar21;
      (*(code *)(*ppuVar21)[0xc])();
      uStack_270 = SUB81(ppuVar16,0);
      func_0x0001074c8cc8();
      ppuVar16 = ppuStack_3a8;
      unaff_x24 = ppuStack_3b0;
      if (ppuStack_3a8 < ppuStack_3a0) {
        ppuStack_3a8[1] = ppuStack_328;
        *ppuStack_3a8 = ppuStack_330;
        ppuStack_330 = (undefined8 **)0x0;
        ppuStack_328 = (undefined8 **)0x0;
        ppuStack_3a8[3] = uStack_318;
        ppuStack_3a8[2] = ppuStack_320;
        ppuStack_320 = (undefined8 **)0x0;
        uStack_318 = (undefined8 *)0x0;
        func_0x0001074c8f88(ppuStack_3a8 + 4,&uStack_310);
        ppuVar16 = ppuVar16 + 0x19;
        unaff_x24 = ppuVar21;
      }
      else {
        lVar26 = (long)ppuStack_3a8 - (long)ppuStack_3b0;
        uVar17 = lVar26 / 200 + 1;
        bVar10 = uVar29 <= uVar17;
        if (uVar29 < uVar17) {
          FUN_1074c5254();
          goto LAB_1074bfe38;
        }
        func_0x0001074c8b24(((long)ppuStack_3a0 - (long)ppuStack_3b0) / 200);
        uVar17 = extraout_x9_01;
        if (bVar10) {
          uVar17 = uVar29;
        }
        if (uVar17 == 0) {
          uVar29 = 0;
        }
        else {
          if (uVar29 < uVar17) {
            func_0x000104bd35f4();
            goto LAB_1074bfe38;
          }
          uVar29 = uVar17 * extraout_x11;
          __Znwm();
        }
        ppuVar13 = ppuStack_328;
        ppuVar21 = ppuStack_330;
        puVar18 = (undefined8 *)(uVar29 + lVar26);
        ppuStack_330 = (undefined8 **)0x0;
        ppuStack_328 = (undefined8 **)0x0;
        puVar18[1] = ppuVar13;
        *puVar18 = ppuVar21;
        puVar18[3] = uStack_318;
        puVar18[2] = ppuStack_320;
        ppuStack_320 = (undefined8 **)0x0;
        uStack_318 = (undefined8 *)0x0;
        func_0x0001074c8f88(puVar18 + 4,&uStack_310);
        ppuVar15 = (undefined8 **)(puVar18 + (lVar26 / -200) * 0x19);
        ppuVar13 = ppuVar15;
        for (ppuVar21 = unaff_x24; ppuVar21 != ppuVar16; ppuVar21 = ppuVar21 + 0x19) {
          func_0x0001074c5214(ppuVar13,ppuVar21);
          ppuVar13 = ppuVar13 + 0x19;
        }
        for (; unaff_x24 != ppuVar16; unaff_x24 = unaff_x24 + 0x19) {
          FUN_1074c5260(unaff_x24);
        }
        ppuVar16 = (undefined8 **)(puVar18 + 0x19);
        ppuStack_3a0 = (undefined8 **)(uVar29 + uVar17 * 200);
        bVar10 = ppuStack_3b0 != (undefined8 **)0x0;
        ppuStack_3b0 = ppuVar15;
        ppuStack_3a8 = ppuVar16;
        if (bVar10) {
          __ZdlPv();
        }
        param_2 = puStack_3e8;
        puVar30 = puStack_3f0;
        func_0x0001074c9158();
        puVar31 = puStack_3f8;
      }
      lStack_3d8 = *(long *)(uVar28 + 0x228);
      ppuStack_3e0 = *(undefined8 ***)(uVar28 + 0x220);
      ppuStack_3a8 = ppuVar16;
      if (*(long *)(uVar28 + 0x228) != 0) {
        do {
          func_0x0001074c8654();
        } while (extraout_w10_03 != 0);
      }
      FUN_10749b678(&uStack_390,&ppuStack_3e0);
      func_0x0001074c8cc8();
      FUN_1074c5260(&ppuStack_330);
      func_0x0001073ad47c(&puStack_3d0);
    }
    FUN_1073f9ec0(&ppuStack_3c0);
    puVar22 = puVar22 + 1;
  } while( true );
LAB_1074bfe24:
  func_0x000104bdc2c8();
LAB_1074bfe38:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x1074bfe3c);
  (*pcVar9)();
}



/* Entry: 1074bff48; end: 1074c010b;  */

undefined1 * FUN_1074bff48(undefined1 *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong *puVar4;
  long lVar5;
  long lVar6;
  undefined1 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined8 extraout_x8;
  int iVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  ulong *puVar15;
  long lVar16;
  undefined4 auStack_128 [6];
  undefined4 uStack_110;
  undefined1 uStack_dc;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_b8 [56];
  undefined1 auStack_80 [56];
  undefined8 uStack_48;
  
  puVar10 = param_1;
  func_0x0001074c8688();
  if ((param_2 & 1) == 0) {
    iVar11 = *(int *)(param_1 + 0x428) + 1;
    *(int *)(param_1 + 0x428) = iVar11;
    iVar14 = *(int *)(param_1 + 0x42c);
  }
  else {
    iVar14 = *(int *)(param_1 + 0x42c) + 1;
    *(int *)(param_1 + 0x42c) = iVar14;
    iVar11 = *(int *)(param_1 + 0x428);
  }
  uVar7 = iVar14 + iVar11 == 300;
  uStack_48 = extraout_x8;
  if (299 < (uint)(iVar14 + iVar11)) {
    func_0x0001077f3c4c();
    func_0x0001077f3790();
    auStack_128[0] = 0xfa;
    uStack_110 = 0;
    func_0x0001074c8d48();
    uStack_dc = 1;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_d8 = 0;
    func_0x0001074c8eb8(*(undefined8 *)(param_1 + 0x18),auStack_80);
    FUN_107371bc4(auStack_128,&DAT_10f408ba3,auStack_80);
    func_0x00010729d56c();
    func_0x0001074c9088();
    func_0x0001074c9060();
    FUN_10743fa9c();
    func_0x000104c2f714(auStack_80);
    func_0x0001074c900c();
    auStack_128[0] = 0xfb;
    uStack_110 = 0;
    func_0x0001074c8d48();
    uStack_dc = 1;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_d8 = 0;
    func_0x0001074c8eb8(*(undefined8 *)(param_1 + 0x18),auStack_b8);
    FUN_107371bc4(auStack_128,&DAT_10f408ba3,auStack_b8);
    func_0x0001074c9088();
    func_0x0001074c9060();
    FUN_10743fa44();
    puVar10 = auStack_b8;
    func_0x000104c2f714();
    func_0x0001074c900c();
    *(undefined8 *)(param_1 + 0x428) = 0;
  }
  func_0x0001074c8620(uStack_48);
  if (!(bool)uVar7) {
    ___stack_chk_fail();
    puVar10 = auStack_b8;
    func_0x000104c2f714();
    func_0x0001074c900c();
    func_0x0001074c8820();
    iVar14 = 0;
    puVar4 = *(ulong **)(puVar10 + 0x110);
    for (puVar15 = *(ulong **)(puVar10 + 0x108); puVar15 != puVar4; puVar15 = puVar15 + 0x19) {
      lVar2 = *(long *)(*puVar15 + 0x28);
      lVar5 = *(long *)(*puVar15 + 0x30);
      for (lVar12 = 0; lVar12 != (lVar5 - lVar2) / 0xa0; lVar12 = lVar12 + 1) {
        uVar8 = *puVar15;
        FUN_1074bf230(uVar8,lVar12,*(undefined8 *)(puVar10 + 0x98));
        if ((uVar8 & 1) == 0) {
          lVar16 = 0;
          lVar1 = *(long *)(*puVar15 + 0x40) + lVar12 * 0x100;
          lVar3 = *(long *)(lVar1 + 0x48);
          lVar6 = *(long *)(lVar1 + 0x50);
          for (lVar13 = 0; (lVar6 - lVar3) / 0x1a8 != lVar13; lVar13 = lVar13 + 1) {
            uVar9 = *(undefined8 *)(lVar1 + 0xe0);
            FUN_1074bf5bc(uVar9,*(long *)(lVar1 + 0x48) + lVar16,lVar13,
                          *(undefined8 *)(puVar10 + 0x98));
            iVar14 = iVar14 + (int)uVar9;
            lVar16 = lVar16 + 0x1a8;
          }
        }
      }
    }
    if (iVar14 == 0) {
      puVar10 = (undefined1 *)(ulong)(*(long *)(puVar10 + 0x2d0) != *(long *)(puVar10 + 0x2c8));
    }
    else {
      puVar10 = (undefined1 *)0x1;
    }
    return puVar10;
  }
  return puVar10;
}



/* Entry: 1074c010c; end: 1074c021b;  */

bool FUN_1074c010c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong *puVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  ulong *puVar13;
  long lVar14;
  
  iVar12 = 0;
  puVar4 = *(ulong **)(param_1 + 0x110);
  for (puVar13 = *(ulong **)(param_1 + 0x108); puVar13 != puVar4; puVar13 = puVar13 + 0x19) {
    lVar2 = *(long *)(*puVar13 + 0x28);
    lVar5 = *(long *)(*puVar13 + 0x30);
    for (lVar10 = 0; lVar10 != (lVar5 - lVar2) / 0xa0; lVar10 = lVar10 + 1) {
      uVar8 = *puVar13;
      FUN_1074bf230(uVar8,lVar10,*(undefined8 *)(param_1 + 0x98));
      if ((uVar8 & 1) == 0) {
        lVar14 = 0;
        lVar1 = *(long *)(*puVar13 + 0x40) + lVar10 * 0x100;
        lVar3 = *(long *)(lVar1 + 0x48);
        lVar6 = *(long *)(lVar1 + 0x50);
        for (lVar11 = 0; (lVar6 - lVar3) / 0x1a8 != lVar11; lVar11 = lVar11 + 1) {
          uVar9 = *(undefined8 *)(lVar1 + 0xe0);
          FUN_1074bf5bc(uVar9,*(long *)(lVar1 + 0x48) + lVar14,lVar11,
                        *(undefined8 *)(param_1 + 0x98));
          iVar12 = iVar12 + (int)uVar9;
          lVar14 = lVar14 + 0x1a8;
        }
      }
    }
  }
  if (iVar12 == 0) {
    bVar7 = *(long *)(param_1 + 0x2d0) != *(long *)(param_1 + 0x2c8);
  }
  else {
    bVar7 = true;
  }
  return bVar7;
}



/* Entry: 1074c021c; end: 1074c0517;  */

void FUN_1074c021c(void)

{
  long lVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  long unaff_x19;
  long *plVar4;
  bool bVar5;
  long *plVar6;
  undefined4 uStack_88;
  undefined1 uStack_84;
  undefined1 uStack_83;
  undefined2 uStack_82;
  undefined5 uStack_80;
  undefined3 uStack_7b;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_60;
  undefined4 *puStack_58;
  undefined8 *puStack_50;
  long lStack_48;
  
  func_0x0001074c8848();
  puVar3 = (undefined8 *)(unaff_x19 + 0x2c0);
  FUN_1074c25ac(&uStack_88,puVar3,unaff_x19 + 0x28);
  puVar2 = &uStack_88;
  FUN_10749b110();
  puStack_58 = puVar2;
  puStack_50 = puVar3;
  while (puStack_58 != (undefined4 *)0x0) {
    (**(code **)(*(long *)*puStack_50 + 0x40))();
    FUN_10749e2c4(&puStack_58);
  }
  FUN_10749e34c(&uStack_88);
  if ((*(byte *)(unaff_x19 + 0x3a0) & 1) == 0) {
    uStack_88 = 0x1099ed40;
    uStack_84 = 1;
    uStack_83 = 0;
    uStack_82 = 0;
    uStack_80 = 0;
    uStack_7b = 0;
    lStack_78 = 0;
    uStack_70 = 0;
    func_0x00010730b9d0(&uStack_80,6);
    puStack_58._0_6_ = 0x200010000;
    func_0x0001074c8c48();
    puStack_58 = (undefined4 *)CONCAT26(puStack_58._6_2_,0x300010002);
    func_0x0001074c8c48();
    FUN_1073da574(&puStack_58);
    func_0x000107309778(unaff_x19 + 0x388,&puStack_58);
    lVar1 = lStack_48;
    lStack_48 = 0;
    if (lVar1 != 0) {
      func_0x0001074c86c4();
    }
    func_0x00010730b05c(&uStack_80);
  }
  if ((*(byte *)(unaff_x19 + 0x3d8) & 1) == 0) {
    puStack_58 = (undefined4 *)0x0;
    puStack_50 = (undefined8 *)0x0;
    lStack_48 = 0;
    uStack_84 = 0;
    uStack_83 = 0;
    uStack_88 = 0;
    func_0x0001074c8894();
    uStack_84 = 0;
    uStack_83 = 0;
    uStack_88 = 0x10001;
    func_0x0001074c8894();
    uStack_84 = 1;
    uStack_83 = 0;
    uStack_88 = 2;
    func_0x0001074c8894();
    uStack_84 = 1;
    uStack_83 = 0;
    uStack_88 = 0x10003;
    func_0x0001074c8894();
    FUN_1074c0518(&uStack_88);
    func_0x000107309708(unaff_x19 + 0x3a8,&uStack_88);
    lVar1 = lStack_60;
    lStack_60 = 0;
    if (lVar1 != 0) {
      func_0x0001074c86c4();
    }
    func_0x0001074c587c(&puStack_58);
  }
  bVar5 = false;
  plVar4 = (long *)(unaff_x19 + 0x3f0);
LAB_1074c03c0:
  do {
    plVar4 = (long *)*plVar4;
    while( true ) {
      if (plVar4 == (long *)0x0) {
        if (bVar5) {
          *(long *)(unaff_x19 + 0x430) = *(long *)(unaff_x19 + 0x430) + 1;
        }
        return;
      }
      if (*(int *)(plVar4 + 0xc) != 0) goto LAB_1074c03c0;
      if (plVar4[9] != 0) break;
      plVar6 = (long *)*plVar4;
      FUN_1074c69e8(unaff_x19 + 0x3e0,plVar4);
      plVar4 = plVar6;
    }
    func_0x00010778196c();
    puStack_58 = (undefined4 *)CONCAT35(puStack_58._5_3_,0x303);
    FUN_107432024(&uStack_88);
    if (*(int *)(plVar4 + 0xc) == 1) {
      FUN_1073c8358(plVar4 + 9,&uStack_88);
      lVar1 = lStack_78;
      lStack_78 = 0;
      if (lVar1 != 0) {
        func_0x0001074c86c4();
      }
    }
    else {
      FUN_1074c2c90(plVar4 + 9);
      plVar4[9] = CONCAT26(uStack_82,CONCAT15(uStack_83,CONCAT14(uStack_84,uStack_88)));
      *(ulong *)((long)plVar4 + 0x4d) = CONCAT53(uStack_80,CONCAT21(uStack_82,uStack_83));
      plVar4[0xb] = lStack_78;
      *(undefined4 *)(plVar4 + 0xc) = 1;
    }
    bVar5 = true;
  } while( true );
}



/* Entry: 1074c0518; end: 1074c05bb;  */

void FUN_1074c0518(long *param_1,long *param_2,long *param_3,undefined8 param_4)

{
  long lVar1;
  long lStack_48;
  
  FUN_1073da3e8(param_2,0xac,1);
  FUN_1073da3e8(param_2,0xad,param_3[1] - *param_3);
  lVar1 = param_3[1] - *param_3;
  (**(code **)(*param_2 + 0x40))(&lStack_48,param_2,*param_3,lVar1,param_4);
  *param_1 = lVar1 >> 3;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 8;
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[5] = lStack_48;
  return;
}



/* Entry: 1074c05bc; end: 1074c1ac3;  */

void FUN_1074c05bc(long param_1,undefined4 *param_2)

{
  undefined4 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  undefined8 **ppuVar11;
  undefined4 **ppuVar12;
  long lVar13;
  float *pfVar14;
  undefined8 uVar15;
  ulong uVar16;
  uint uVar17;
  undefined8 *extraout_x8;
  undefined8 extraout_x8_00;
  long lVar18;
  undefined8 *puVar19;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined4 *puVar20;
  long extraout_x8_03;
  long extraout_x8_04;
  code *extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  code *extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  long extraout_x8_13;
  long extraout_x8_14;
  ulong extraout_x9;
  ulong extraout_x9_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  long extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x11;
  byte bVar21;
  long *plVar22;
  long lVar23;
  undefined4 *puVar24;
  undefined4 *puVar25;
  undefined8 uVar26;
  long lVar27;
  ulong uVar28;
  long lVar29;
  long lVar30;
  undefined4 *puVar31;
  long *plVar32;
  byte bVar33;
  long lVar34;
  long lVar35;
  undefined8 *puVar36;
  byte bVar37;
  undefined8 *puVar38;
  long *plVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined4 uVar54;
  float fVar55;
  undefined4 uVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  double dStack_5a0;
  double dStack_598;
  undefined4 *puStack_590;
  undefined4 *puStack_588;
  undefined4 *puStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined4 uStack_540;
  undefined8 *puStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  long *aplStack_500 [2];
  undefined4 **appuStack_4f0 [3];
  undefined8 *puStack_4d8;
  undefined4 uStack_4cc;
  ulong uStack_4c8;
  undefined4 *puStack_4c0;
  undefined4 *puStack_4b8;
  undefined4 *puStack_4b0;
  undefined4 *puStack_4a8;
  undefined4 **ppuStack_4a0;
  undefined4 **ppuStack_490;
  undefined4 **ppuStack_488;
  undefined4 **ppuStack_480;
  undefined1 uStack_478;
  undefined4 *puStack_470;
  undefined4 *puStack_468;
  undefined **ppuStack_460;
  long lStack_458;
  undefined4 *puStack_450;
  undefined ***pppuStack_448;
  undefined1 uStack_440;
  undefined8 uStack_438;
  undefined1 uStack_430;
  undefined1 uStack_42f;
  undefined2 uStack_42e;
  undefined4 uStack_42c;
  undefined4 uStack_428;
  undefined4 uStack_424;
  undefined8 uStack_420;
  undefined1 uStack_3c0;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined4 *puStack_330;
  undefined4 *puStack_328;
  double dStack_320;
  double dStack_318;
  double dStack_310;
  undefined8 uStack_308;
  long lStack_300;
  undefined1 auStack_2f8 [16];
  undefined1 auStack_2e8 [8];
  undefined2 uStack_2e0;
  undefined1 auStack_2d8 [16];
  undefined1 auStack_2c8 [16];
  undefined8 uStack_2b8;
  long lStack_2b0;
  undefined8 uStack_2a8;
  undefined4 uStack_2a0;
  float fStack_29c;
  float fStack_298;
  float fStack_294;
  float fStack_290;
  undefined1 auStack_288 [16];
  byte bStack_278;
  undefined1 auStack_270 [24];
  undefined8 uStack_258;
  undefined1 auStack_230 [16];
  double dStack_220;
  double dStack_218;
  double dStack_210;
  double dStack_208;
  undefined1 uStack_200;
  undefined4 **ppuStack_1f8;
  undefined4 **ppuStack_1f0;
  undefined1 uStack_1e8;
  float fStack_1b0;
  float fStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined2 uStack_198;
  undefined1 uStack_196;
  undefined2 uStack_194;
  undefined4 uStack_190;
  undefined8 uStack_18c;
  undefined8 uStack_184;
  undefined4 uStack_17c;
  undefined2 uStack_178;
  undefined8 uStack_18;
  
  func_0x0001074c9218();
  lVar18 = param_1;
  func_0x0001074c8688();
  uStack_18 = extraout_x8_00;
  FUN_1074c1ac4(&fStack_1b0,*(undefined8 *)(lVar18 + 8),*(undefined8 *)(lVar18 + 0x10));
  FUN_1074c58b4(&fStack_1b0);
  lVar18 = *(long *)(param_2 + 10);
  uVar54 = *(undefined4 *)(lVar18 + 0x4c);
  uVar56 = *(undefined4 *)(lVar18 + 0x50);
  puStack_530 = &uStack_528;
  uStack_528 = 0;
  uStack_520 = 0;
  uStack_558 = 0;
  uStack_560 = 0;
  uStack_548 = 0;
  uStack_550 = 0;
  uStack_540 = 0x3f800000;
  uStack_578 = 0;
  uStack_570 = 0;
  uStack_568 = 0;
  puStack_590 = (undefined4 *)0x0;
  puStack_588 = (undefined4 *)0x0;
  puStack_580 = (undefined4 *)0x0;
  if (*(char *)(param_2 + 0x18) == '\x10') {
    uVar17 = param_2[0x1a];
    fStack_1b0 = (float)CONCAT31(fStack_1b0._1_3_,1);
    lVar18 = *(long *)(param_1 + 200) + 0x770;
    func_0x00010724e2c8(lVar18,&fStack_1b0);
    uVar9 = false;
    if (((uint)lVar18 & (uVar17 & 0x10) >> 4) == 1) {
      plVar32 = *(long **)(param_1 + 0x270);
      for (plVar22 = *(long **)(param_1 + 0x268); uVar9 = plVar22 == plVar32, !(bool)uVar9;
          plVar22 = plVar22 + 1) {
        lVar18 = *plVar22;
        if (((*(char *)(*(long *)(lVar18 + 0x88) + 0x170) == '\x01') &&
            (lVar34 = *(long *)(*(long *)(lVar18 + 0x88) + 0x40) + *(long *)(lVar18 + 0x58) * 0x100,
            lVar18 = *(long *)(lVar34 + 0x48) +
                     *(long *)(*(long *)(lVar34 + 0x60) + *(long *)(lVar18 + 0x60) * 0x10) * 0x1a8,
            *(char *)(lVar18 + 0x108) == '\x01')) && (*(char *)(param_1 + 0x3d8) == '\x01')) {
          lVar34 = *(long *)(param_1 + 200);
          func_0x00010002b838(&uStack_340,"");
          FUN_10732836c(&fStack_1b0,lVar34 + 0x790,&uStack_340);
          func_0x0001074c8cb8();
          fVar55 = *(float *)(lVar18 + 0x11c);
          pfVar14 = &fStack_1b0;
          func_0x000100152bb8(pfVar14,&DAT_10f2ff52c);
          if ((int)pfVar14 == 0) {
            pfVar14 = &fStack_1b0;
            func_0x000100152bb8(pfVar14,&DAT_10f311774);
            if ((int)pfVar14 == 0) {
              dStack_5a0 = *(double *)(lVar18 + 0x44);
              dStack_598 = *(double *)(lVar18 + 0x4c);
              bVar33 = *(byte *)(lVar18 + 0x54);
            }
            else {
              if (fVar55 == 0.0) goto LAB_1074c0758;
              dStack_5a0 = *(double *)(lVar18 + 0x6c);
              dStack_598 = *(double *)(lVar18 + 0x74);
              bVar33 = *(byte *)(lVar18 + 0x7c);
            }
          }
          else if (fVar55 == 0.0) {
LAB_1074c0758:
            bVar33 = 0;
            dStack_598 = 0.0;
            dStack_5a0 = 0.0;
          }
          else {
            dStack_5a0 = *(double *)(lVar18 + 0x58);
            dStack_598 = *(double *)(lVar18 + 0x60);
            bVar33 = *(byte *)(lVar18 + 0x68);
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&fStack_1b0);
          if ((bVar33 & 1) != 0) {
            fStack_1b0 = SUB84(dStack_5a0,0);
            fStack_1ac = -(float)((ulong)dStack_598 >> 0x20);
            uStack_340 = (undefined4 *)
                         CONCAT44(-(float)((ulong)dStack_5a0 >> 0x20),SUB84(dStack_598,0));
            FUN_1074d80a8(param_2,&fStack_1b0,&uStack_340,(*(byte *)(lVar18 + 0x100) ^ 0xff) & 1);
          }
        }
      }
    }
    *extraout_x8 = 0;
    extraout_x8[1] = 0;
    extraout_x8[2] = 0;
    goto LAB_1074c1800;
  }
  bVar33 = *(byte *)(lVar18 + 0xa94);
  ppuStack_460 = &PTR_FUN_1109b4f58;
  pppuStack_448 = &ppuStack_460;
  uStack_440 = 1;
  uStack_438 = *(undefined8 *)(param_1 + 0x88);
  puVar38 = *(undefined8 **)(param_1 + 0x318);
  puVar19 = *(undefined8 **)(param_1 + 800);
  lStack_458 = param_1;
  puStack_450 = param_2;
  if (((puVar38 == puVar19) || (*(char *)(param_1 + 0x3a0) != '\x01')) ||
     (uVar9 = *(char *)(param_1 + 0x3d8) == '\x01', !(bool)uVar9)) {
LAB_1074c099c:
    fVar55 = (float)NEON_ucvtf(uVar54);
    fVar46 = (float)NEON_ucvtf(uVar56);
    auVar49 = NEON_fmov(0x3fe0000000000000,8);
    auVar44 = NEON_fmov(0x3ff0000000000000,8);
    for (; uVar9 = puVar38 == puVar19, !(bool)uVar9; puVar38 = puVar38 + 1) {
      puVar20 = (undefined4 *)*puVar38;
      lVar29 = *(long *)(puVar20 + 0x22);
      lVar27 = *(long *)(puVar20 + 0x16);
      lVar23 = *(long *)(lVar29 + 0x28);
      lVar35 = *(long *)(lVar29 + 0x40);
      lVar18 = *(long *)(puVar20 + 8);
      lVar30 = *(long *)(puVar20 + 10);
      lVar13 = lVar27;
      lVar34 = lVar35;
      if (lVar18 == lVar30) {
LAB_1074c0a88:
        lVar34 = lVar34 + lVar13 * 0x100;
        fVar59 = *(float *)(lVar34 + 0xa8);
        fVar57 = *(float *)(lVar34 + 0xac);
        lVar18 = param_1 + 0x60;
        FUN_1074c5318(lVar18,*(undefined8 *)(puVar20 + 6));
        if (lVar18 == 0) {
          fVar60 = 0.0;
          fVar61 = 0.0;
        }
        else {
          fVar60 = *(float *)(lVar18 + 0x20);
          fVar61 = *(float *)(lVar18 + 0x24);
        }
        plVar32 = (long *)(lVar23 + lVar27 * 0xa0);
        FUN_1074c5cb4();
        func_0x0001074c90fc();
        uStack_4c8 = lVar29 + extraout_x10;
        uStack_4c8 = *(long *)(puVar20 + 0x16) + extraout_x10 + uStack_4c8 * 0x1000 +
                     (uStack_4c8 >> 4) ^ uStack_4c8;
        fStack_1b0 = fVar59 + fVar60;
        fVar47 = fVar57 + fVar61;
        uVar54 = 0;
        plVar22 = plVar32;
        fStack_1ac = fVar47;
        FUN_1074bd21c(plVar32,puVar20 + 0x13,&fStack_1b0);
        uStack_4cc = SUB84(plVar22,0);
        puVar36 = &uStack_560;
        FUN_107388eb4(puVar36,&uStack_4c8);
        if (((ulong)puVar36 & 1) == 0) {
          uStack_428 = 0;
          uStack_424 = 0;
          uStack_430 = 0;
          uStack_42f = 0;
          uStack_42e = 0;
          uStack_42c = 0;
          uStack_420 = 0;
          puStack_4b0 = &uStack_4cc;
          uStack_338 = &uStack_430;
          puStack_4c0 = param_2;
          puStack_4b8 = puVar20;
          uStack_340 = puVar20;
          puStack_330 = puStack_4b0;
          puStack_328 = param_2;
          if (bVar33 == 0) {
            ppuVar12 = &puStack_4c0;
            dVar42 = (double)FUN_1074c5a00();
LAB_1074c0bdc:
            fVar58 = (float)dVar42;
            fVar47 = (float)(double)CONCAT44(uVar54,fVar47);
          }
          else {
            if (*(char *)(*(long *)(param_2 + 10) + 0xa94) == '\x01') {
              fVar47 = 1.0;
              uVar54 = 0;
              if (*(float *)(*(long *)(param_2 + 10) + 0xa90) == 1.0) {
                ppuVar12 = (undefined4 **)&uStack_340;
                dVar42 = (double)func_0x0001074c5aa4();
                goto LAB_1074c0bdc;
              }
            }
            dVar40 = (double)FUN_1074c5a00(&puStack_4c0);
            dVar42 = (double)CONCAT44(uVar54,fVar47);
            ppuVar12 = (undefined4 **)&uStack_340;
            dVar41 = (double)func_0x0001074c5aa4();
            fVar48 = 0.0;
            if (*(char *)(*(long *)(param_2 + 10) + 0xa94) == '\x01') {
              fVar48 = *(float *)(*(long *)(param_2 + 10) + 0xa90);
            }
            fVar58 = ((float)dVar41 - (float)dVar40) * fVar48 + (float)dVar40;
            fVar47 = ((float)(double)CONCAT44(uVar54,fVar47) - (float)dVar42) * fVar48 +
                     (float)dVar42;
          }
          plVar22 = (long *)(lVar35 + lVar27 * 0x100);
          lVar34 = (plVar22[10] - plVar22[9]) / 0x1a8;
          for (lVar18 = 0; uVar9 = lVar18 == lVar34, !(bool)uVar9; lVar18 = lVar18 + 1) {
            if ((*(byte *)(*plVar22 + lVar18 * 0x18 + 0x10) & 1) == 0) {
              lVar30 = plVar22[9] + lVar18 * 0x1a8;
              uVar28 = lVar30 + 8;
              func_0x0001074c8e54();
              if ((uVar28 & 1) != 0) {
                fVar48 = 0.0;
                if ((bVar33 != 0) && (uVar9 = *(char *)(lVar30 + 0x170) == '\x01', (bool)uVar9)) {
                  dVar42 = (double)func_0x0001074c8fc0();
                  fVar48 = (float)dVar42;
                }
                puVar24 = (undefined4 *)((long)ppuVar12 + 4);
                ppuVar1 = ppuVar12 + 1;
                ppuVar12 = (undefined4 **)&fStack_1b0;
                FUN_1074bf40c(fVar58,fVar47,2.0 / fVar55,fVar55 / fVar46,param_2[0x1e],fVar48,
                              ppuVar12,lVar30,0,*puVar24,*(undefined4 *)ppuVar1);
                func_0x0001074c8c14();
                FUN_107417d68();
                if ((int)ppuVar12 != 0) {
                  ppuVar12 = *(undefined4 ***)(param_2 + 10);
                  dVar42 = (double)func_0x000107418560(ppuVar12,&uStack_430);
                  uVar9 = dVar42 == 0.0;
                  *(bool *)(lVar30 + 0xa0) = dVar42 < 0.0;
                }
                func_0x0001074c916c();
                if (((bool)uVar9) && ((*(byte *)(param_2 + 0x2c) >> 5 & 1) != 0)) {
                  if (*(long *)(lVar30 + 0x198) == 0) {
                    func_0x0001074c8e14();
                    ppuStack_490 = (undefined4 **)0x50;
                    ppuStack_488 = appuStack_4f0[0];
                    func_0x0001074c8ff8();
                    func_0x0001074c8f1c();
                    func_0x00010730b284(&fStack_1b0);
                    ppuVar12 = ppuStack_488;
                    ppuStack_488 = (undefined4 **)0x0;
                    if (ppuVar12 != (undefined4 **)0x0) {
                      func_0x0001074c86c4();
                    }
                  }
                  func_0x0001074c8940();
                  lVar30 = extraout_x8_03;
                  while (lVar30 != 0x40) {
                    func_0x0001074c8b00();
                    lVar30 = extraout_x8_04;
                  }
                  func_0x0001074c90bc();
                  (*extraout_x8_05)();
                }
              }
            }
          }
          for (lVar18 = 0; lVar18 != lVar34; lVar18 = lVar18 + 1) {
            plVar39 = (long *)(*plVar22 + lVar18 * 0x18);
            uVar9 = (char)plVar39[2] == '\x01';
            if ((bool)uVar9) {
              lVar30 = plVar22[9] + *plVar39 * 0x1a8;
              uVar28 = lVar30 + 8;
              FUN_1074c26ec(param_1);
              if ((uVar28 & 1) != 0) {
                lVar29 = plVar22[9] + lVar18 * 0x1a8;
                uVar28 = lVar29 + 8;
                lVar13 = param_1;
                FUN_1074c26ec();
                if ((uVar28 & 1) != 0) {
                  if ((bVar33 != 0) && (uVar9 = *(char *)(lVar29 + 0x170) == '\x01', (bool)uVar9)) {
                    func_0x0001074c8fc0();
                  }
                  FUN_1074bf51c(lVar30 + 0x80,(char)plVar39[1]);
                  pfVar14 = &fStack_1b0;
                  FUN_1074bf40c(pfVar14,lVar29,lVar30,*(undefined4 *)(lVar13 + 4),
                                *(undefined4 *)(lVar13 + 8));
                  iVar10 = (int)pfVar14;
                  func_0x0001074c8c14();
                  FUN_107417d68();
                  if (iVar10 != 0) {
                    dVar42 = (double)func_0x000107418560(*(undefined8 *)(param_2 + 10),&uStack_430);
                    uVar9 = dVar42 == 0.0;
                    *(bool *)(lVar29 + 0xa0) = dVar42 < 0.0;
                  }
                  func_0x0001074c916c();
                  if (((bool)uVar9) && ((*(byte *)(param_2 + 0x2c) >> 5 & 1) != 0)) {
                    if (*(long *)(lVar29 + 0x198) == 0) {
                      func_0x0001074c8e14();
                      ppuStack_490 = (undefined4 **)0x50;
                      ppuStack_488 = appuStack_4f0[0];
                      func_0x0001074c8ff8();
                      func_0x0001074c8f1c();
                      func_0x00010730b284(&fStack_1b0);
                      ppuVar12 = ppuStack_488;
                      ppuStack_488 = (undefined4 **)0x0;
                      if (ppuVar12 != (undefined4 **)0x0) {
                        func_0x0001074c86c4();
                      }
                    }
                    func_0x0001074c8940();
                    lVar30 = extraout_x8_06;
                    while (lVar30 != 0x40) {
                      func_0x0001074c8b00();
                      lVar30 = extraout_x8_07;
                    }
                    func_0x0001074c90bc();
                    (*extraout_x8_08)();
                  }
                }
              }
            }
          }
          func_0x0001072a1b80(&uStack_560,&uStack_4c8);
        }
        lVar18 = *(long *)(*(long *)(puVar20 + 0x22) + 0x40) + *(long *)(puVar20 + 0x16) * 0x100;
        uVar28 = (ulong)*(ushort *)(*(long *)(lVar18 + 0x60) + *(long *)(puVar20 + 0x18) * 0x10);
        plVar22 = (long *)(*(long *)(lVar18 + 0x30) + uVar28 * 0x18);
        if (*(char *)((long)plVar22 + 0x17) < '\0') {
          plVar22 = (long *)*plVar22;
        }
        lVar30 = *(long *)(lVar18 + 0x48);
        puVar36 = *(undefined8 **)(param_2 + 4);
        lVar34 = (long)plVar22;
        _strlen(plVar22);
        puStack_4d8 = puVar36;
        (**(code **)*puVar36)(puVar36,plVar22,lVar34);
        uVar16 = plVar32[8] + 0x20;
        func_0x0001074c8e54();
        if (((uVar16 & 1) != 0) && (*(char *)(param_1 + 0x3d8) == '\x01')) {
          func_0x00010002b838(appuStack_4f0,&UNK_10f41022f);
          FUN_1074d6874(param_2,appuStack_4f0,2);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(appuStack_4f0);
          uVar26 = *(undefined8 *)(param_2 + 0x28);
          func_0x0001074c8dd8();
          func_0x0001077512dc(&uStack_340);
          puStack_4c0 = (undefined4 *)plVar32[6];
          puStack_4b8 = (undefined4 *)plVar32[7];
          if (plVar32[7] != 0) {
            do {
              func_0x0001074c8654();
            } while (extraout_w10 != 0);
          }
          lVar30 = lVar30 + uVar28 * 0x1a8;
          uStack_430 = 0;
          uStack_3c0 = 0;
          func_0x000107751444(&uStack_340,&puStack_4c0,&uStack_430);
          func_0x0001077514d8(&uStack_340,*(undefined8 *)(lVar30 + 0x178));
          uStack_258 = uVar26;
          func_0x000107751334(&fStack_1b0,&uStack_340);
          func_0x000107267e8c(&uStack_430);
          func_0x000107267e44(&puStack_4c0);
          func_0x000107267da8(&uStack_340);
          uVar26 = func_0x00010741657c(*(undefined8 *)(param_2 + 10),0);
          uVar54 = func_0x0001074c8dd8();
          uVar26 = func_0x000107246334(uVar26,uVar54,0,0x4039800000000000);
          lVar34 = 0;
          puVar36 = (undefined8 *)(lVar30 + 0x80);
          auVar45._0_8_ = *(ulong *)(*(long *)(param_2 + 10) + 0x4c) & 0xffffffff;
          auVar45._8_8_ = *(ulong *)(*(long *)(param_2 + 10) + 0x4c) >> 0x20;
          auVar45 = NEON_ucvtf(auVar45,8);
          dStack_598 = 1.79769313486232e+308;
          dStack_5a0 = 1.79769313486232e+308;
          auVar53._8_8_ = 0x10000000000000;
          auVar53._0_8_ = 0x10000000000000;
          while( true ) {
            if (lVar34 == 0x20) break;
            dVar42 = auVar45._0_8_ * auVar49._0_8_ *
                     ((double)(float)*(undefined8 *)((long)puVar36 + lVar34) + auVar44._0_8_);
            dVar40 = auVar45._8_8_ * auVar49._8_8_ *
                     (auVar44._8_8_ -
                     (double)(float)((ulong)*(undefined8 *)((long)puVar36 + lVar34) >> 0x20));
            uVar54 = (undefined4)((ulong)dVar40 >> 0x20);
            auVar52._8_8_ = dStack_598;
            auVar52._0_8_ = dStack_5a0;
            auVar50._0_8_ = -(ulong)(dVar42 < dStack_5a0);
            auVar50._8_8_ = -(ulong)(dVar40 < dStack_598);
            auVar2._8_4_ = SUB84(dVar40,0);
            auVar2._0_8_ = dVar42;
            auVar2._12_4_ = uVar54;
            auVar52 = auVar52 ^ (auVar52 ^ auVar2) & auVar50;
            dStack_598 = auVar52._8_8_;
            dStack_5a0 = auVar52._0_8_;
            auVar51._0_8_ = -(ulong)(auVar53._0_8_ < dVar42);
            auVar51._8_8_ = -(ulong)(auVar53._8_8_ < dVar40);
            auVar3._8_4_ = SUB84(dVar40,0);
            auVar3._0_8_ = dVar42;
            auVar3._12_4_ = uVar54;
            auVar53 = auVar53 ^ (auVar53 ^ auVar3) & auVar51;
            lVar34 = lVar34 + 8;
          }
          uVar9 = *(char *)(param_1 + 0x3a0) == '\x01';
          if ((bool)uVar9) {
            if ((bVar33 & 1) == 0) {
              uStack_430 = 7;
              uStack_42e = 0;
LAB_1074c10fc:
              uVar17 = 0;
              uStack_340 = (undefined4 *)CONCAT44(7,(undefined4)uStack_340);
            }
            else {
              uStack_430 = 3;
              uVar9 = *(char *)(lVar30 + 0xa0) == '\x01';
              if (!(bool)uVar9) goto LAB_1074c10fc;
              uStack_340 = (undefined4 *)0x2000000ff;
              uVar17 = 0xff;
            }
            uStack_428 = 0x3f800000;
            uStack_42c = 0;
            uStack_42f = 0;
            uStack_338 = (undefined1 *)((ulong)uVar17 << 0x20);
            puStack_330 = (undefined4 *)CONCAT53(puStack_330._3_5_,0x10101);
            (**(code **)(**(long **)(param_2 + 6) + 0x80))
                      (*(long **)(param_2 + 6),&uStack_430,&uStack_340);
            func_0x0001074c916c();
            if ((!(bool)uVar9) || ((*(byte *)(param_2 + 0x2c) >> 5 & 1) == 0)) {
              uVar15 = *(undefined8 *)(lVar30 + 0x110);
              uStack_428 = (undefined4)*(undefined8 *)(lVar30 + 0x118);
              uStack_424 = (undefined4)((ulong)*(undefined8 *)(lVar30 + 0x118) >> 0x20);
              uStack_430 = (undefined1)uVar15;
              uStack_42f = (undefined1)((ulong)uVar15 >> 8);
              uStack_42e = (undefined2)((ulong)uVar15 >> 0x10);
              uStack_42c = (undefined4)((ulong)uVar15 >> 0x20);
              func_0x0001074c8b90();
              func_0x0001074c8f54(*(undefined8 *)(extraout_x8_09 + 0xb8));
              lVar34 = 0;
              dStack_318 = 0.0;
              dStack_320 = 0.0;
              uStack_308 = 0;
              dStack_310 = 0.0;
              uStack_338 = (undefined1 *)0x0;
              uStack_340 = (undefined4 *)0x0;
              puStack_328 = (undefined4 *)0x0;
              puStack_330 = (undefined4 *)0x0;
              uVar54 = 0x3f800000;
              if (*(char *)(puVar20 + 0x3e) == '\0') {
                uVar54 = 0;
              }
              for (; lVar34 != 0x40; lVar34 = lVar34 + 0x10) {
                *(undefined8 *)((long)&uStack_340 + lVar34) = *puVar36;
                *(undefined4 *)((long)&uStack_338 + lVar34) = uVar54;
                *(undefined4 *)((long)&uStack_338 + lVar34 + 4) = 0x3f800000;
                puVar36 = puVar36 + 1;
              }
              func_0x0001074c8b90();
              (**(code **)(extraout_x8_10 + 0xf8))();
              func_0x0001074c8b90();
              func_0x0001074c8f48(*(undefined8 *)(extraout_x8_11 + 0x70));
LAB_1074c11d4:
              puVar31 = *(undefined4 **)(lVar30 + 0xb0);
              for (puVar24 = *(undefined4 **)(lVar30 + 0xa8); puVar24 != puVar31;
                  puVar24 = puVar24 + 10) {
                (**(code **)(**(long **)(param_2 + 6) + 0x68))(*(long **)(param_2 + 6),*puVar24);
                uStack_340 = (undefined4 *)CONCAT71(uStack_340._1_7_,4);
                uStack_340 = (undefined4 *)((ulong)uStack_340 & 0xffffffff);
                (**(code **)(**(long **)(param_2 + 6) + 0x138))
                          (*(long **)(param_2 + 6),&uStack_340,puVar24[6],1,puVar24[2]);
              }
              func_0x0001074c9074();
              lVar34 = extraout_x8_12 + (extraout_x9 & 0xffffffff) * (extraout_x10_00 & 0xffffffff);
              bVar37 = (char)lVar34 + 0x20;
              func_0x0001074c8e54();
              plVar22 = *(long **)(param_1 + 0x98);
              func_0x00010747b8f8(plVar22,lVar34 + 0x20);
              if (plVar22 == (long *)0x0) {
                bVar21 = 0;
              }
              else {
                lVar34 = *plVar22;
                func_0x00010778196c();
                bVar21 = *(byte *)(lVar34 + 0x10) ^ 1;
              }
              uVar15 = *(undefined8 *)(lVar18 + 0xe0);
              FUN_1074bf5bc(uVar15,lVar30,uVar28,*(undefined8 *)(param_1 + 0x98));
              if ((int)uVar15 == 0) {
                bVar37 = 0;
              }
              else {
                bVar37 = 0.0 < *(float *)(lVar30 + 0x120) & bVar21 & bVar37;
              }
              func_0x00010728451c(&uStack_430,*(undefined8 *)(lVar30 + 0x178));
              uStack_340 = (undefined4 *)CONCAT44(-fVar61,fVar60);
              FUN_1073c24a8(&ppuStack_490,uVar26,&uStack_430,&uStack_340,
                            *(undefined8 *)(param_2 + 10));
              func_0x000107269e60(&uStack_430);
              plVar22 = plVar32;
              (**(code **)(*plVar32 + 0x30))();
              func_0x000107269bac(&uStack_340,plVar22);
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                        (&lStack_300,plVar32[8] + uVar28 * 0x88);
              func_0x0001074c8b7c(*(undefined8 *)(param_1 + 0x18),auStack_2e8);
              func_0x000104c2fe00(&lStack_2b0,*(long *)(param_1 + 0x18) + 0x78);
              bStack_278 = bVar37;
              func_0x00010729807c(auStack_270,plVar32[8] + uVar28 * 0x88 + 0x20);
              puStack_4b8 = (undefined4 *)0x0;
              puStack_4c0 = (undefined4 *)0x0;
              puStack_4a8 = (undefined4 *)0x0;
              puStack_4b0 = (undefined4 *)0x0;
              ppuStack_4a0 = (undefined4 **)CONCAT44(ppuStack_4a0._4_4_,0x3f800000);
              FUN_10737efb4(&puStack_4c0,
                            *(long *)(plVar32[0xe] + 0x18) + *(long *)(plVar32[0x10] + 0x18));
              plVar22 = (long *)(plVar32[0x10] + 0x10);
              while (plVar22 = (long *)*plVar22, plVar22 != (long *)0x0) {
                func_0x0001074c8f5c();
              }
              plVar22 = (long *)(plVar32[0xe] + 0x10);
              while (plVar22 = (long *)*plVar22, plVar22 != (long *)0x0) {
                func_0x0001074c8f5c();
              }
              FUN_10737efc8(auStack_230,&puStack_4c0);
              func_0x0001072981bc(&puStack_4c0);
              dStack_218 = dStack_598;
              dStack_220 = dStack_5a0;
              uStack_200 = 1;
              ppuStack_1f0 = ppuStack_488;
              ppuStack_1f8 = ppuStack_490;
              uStack_1e8 = ppuStack_480._0_1_;
              dStack_210 = auVar53._0_8_;
              dStack_208 = auVar53._8_8_;
              func_0x00010748c200(&uStack_578,&uStack_340);
              func_0x0001072bc64c(&uStack_340);
              goto LAB_1074c1408;
            }
            if (*(long *)(lVar30 + 0x198) != 0) {
              func_0x0001074c8b90();
              func_0x0001074c8f54(*(undefined8 *)(extraout_x8_13 + 0x90));
              func_0x0001074c8b90();
              func_0x0001074c8f48(*(undefined8 *)(extraout_x8_14 + 0x70));
              goto LAB_1074c11d4;
            }
          }
          else {
LAB_1074c1408:
            func_0x000107473514(aplStack_500);
            func_0x0001074c9074(*(undefined8 *)(param_1 + 0xa0));
            FUN_107469fbc(&uStack_340);
            FUN_107476154(aplStack_500,&uStack_340);
            FUN_1073c5f18(&uStack_340);
            uStack_518 = 0;
            uStack_510 = 0;
            uStack_508 = 0;
            lVar13 = aplStack_500[0][1];
            for (lVar34 = *aplStack_500[0]; lVar34 != lVar13; lVar34 = lVar34 + 0x38) {
              dVar40 = *(double *)(lVar34 + 0x30);
              dVar42 = *(double *)(lVar34 + 0x28);
              dVar41 = *(double *)(lVar34 + 0x18);
              dVar4 = *(double *)(lVar34 + 0x20);
              fVar47 = *(float *)(lVar30 + 0x120);
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                        (&uStack_340,lVar34);
              dVar43 = (double)fVar47;
              puStack_328 = (undefined4 *)(dStack_5a0 + dVar41 * dVar43);
              dStack_320 = dStack_598 + dVar4 * dVar43;
              dStack_318 = dStack_5a0 + dVar42 * dVar43;
              dStack_310 = dStack_598 + dVar40 * dVar43;
              FUN_1074c5cd0(&uStack_518,&uStack_340);
              func_0x0001074c8cb8();
            }
            func_0x0001074c8eb8(*(undefined8 *)(param_1 + 0x18),&uStack_340);
            uStack_308 = *(undefined8 *)(lVar30 + 0x178);
            lStack_300 = *(long *)(lVar30 + 0x180);
            if (lStack_300 != 0) {
              do {
                func_0x0001074c8654();
              } while (extraout_w10_00 != 0);
            }
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                      (auStack_2f8,*(long *)(lVar18 + 0x30) + uVar28 * 0x18);
            uStack_2e0 = *(undefined2 *)(*(long *)(lVar18 + 0x18) + uVar28 * 2);
            FUN_1074e3ab4(auStack_2d8,param_1,&fStack_1b0);
            func_0x0001074e3ac0(auStack_2c8,param_1);
            uStack_2b8 = *(undefined8 *)(lVar30 + 0x188);
            lStack_2b0 = *(long *)(lVar30 + 400);
            if (lStack_2b0 != 0) {
              do {
                func_0x0001074c8654();
              } while (extraout_w10_01 != 0);
            }
            uStack_2a8 = *(undefined8 *)(puVar20 + 0x13);
            uStack_2a0 = puVar20[0x15];
            fStack_290 = -fVar57;
            fStack_29c = fVar60;
            fStack_298 = fVar61;
            fStack_294 = fVar59;
            FUN_1074c61ec(auStack_288,&uStack_518);
            puVar20 = puStack_588;
            if (puStack_588 < puStack_580) {
              FUN_1074c6098(puStack_588,&uStack_340);
              puVar20 = puVar20 + 0x32;
            }
            else {
              lVar18 = (long)puStack_588 - (long)puStack_590;
              uVar28 = lVar18 / 200 + 1;
              bVar8 = 0x147ae147ae147ad < uVar28;
              if (0x147ae147ae147ae < uVar28) {
                FUN_1074c615c();
                goto LAB_1074c1848;
              }
              func_0x0001074c8b24(((long)puStack_580 - (long)puStack_590) / 200);
              uVar28 = extraout_x9_00;
              if (bVar8) {
                uVar28 = extraout_x11;
              }
              ppuStack_4a0 = &puStack_580;
              if (uVar28 == 0) {
                puVar20 = (undefined4 *)0x0;
              }
              else {
                if (extraout_x11 < uVar28) goto LAB_1074c1844;
                puVar20 = (undefined4 *)(uVar28 * 200);
                __Znwm();
              }
              lVar18 = (long)puVar20 + lVar18;
              puStack_4a8 = puVar20 + uVar28 * 0x32;
              puStack_4c0 = puVar20;
              puStack_4b8 = (undefined4 *)lVar18;
              puStack_4b0 = (undefined4 *)lVar18;
              FUN_1074c6098(lVar18,&uStack_340);
              puVar6 = puStack_588;
              puVar31 = puStack_590;
              puStack_4b0 = (undefined4 *)(lVar18 + 200);
              puVar25 = (undefined4 *)
                        (lVar18 + (((long)puStack_588 - (long)puStack_590) / -200) * 200);
              ppuStack_488 = &puStack_470;
              ppuStack_480 = &puStack_468;
              uStack_478 = 0;
              puVar24 = puVar25;
              ppuStack_490 = &puStack_580;
              puStack_470 = puVar25;
              for (puVar20 = puStack_590; puStack_468 = puVar24, puVar20 != puVar6;
                  puVar20 = puVar20 + 0x32) {
                func_0x000104c2fe00(puVar24,puVar20);
                lVar18 = *(long *)(puVar20 + 0x10);
                uVar26 = *(undefined8 *)(puVar20 + 0xe);
                *(undefined8 *)(puVar24 + 0x10) = *(undefined8 *)(puVar20 + 0x10);
                *(undefined8 *)(puVar24 + 0xe) = uVar26;
                if (lVar18 != 0) {
                  do {
                    func_0x0001074c8654();
                  } while (extraout_w10_02 != 0);
                }
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                          (puVar24 + 0x12,puVar20 + 0x12);
                *(undefined2 *)(puVar24 + 0x18) = *(undefined2 *)(puVar20 + 0x18);
                func_0x000107299490(puVar24 + 0x1a,puVar20 + 0x1a);
                func_0x000107299490(puVar24 + 0x1e,puVar20 + 0x1e);
                lVar18 = *(long *)(puVar20 + 0x24);
                uVar26 = *(undefined8 *)(puVar20 + 0x22);
                *(undefined8 *)(puVar24 + 0x24) = *(undefined8 *)(puVar20 + 0x24);
                *(undefined8 *)(puVar24 + 0x22) = uVar26;
                if (lVar18 != 0) {
                  do {
                    func_0x0001074c8654();
                  } while (extraout_w10_03 != 0);
                }
                uVar15 = *(undefined8 *)(puVar20 + 0x26);
                uVar5 = *(undefined8 *)(puVar20 + 0x28);
                uVar26 = *(undefined8 *)(puVar20 + 0x29);
                *(undefined8 *)(puVar24 + 0x2b) = *(undefined8 *)(puVar20 + 0x2b);
                *(undefined8 *)(puVar24 + 0x29) = uVar26;
                *(undefined8 *)(puVar24 + 0x28) = uVar5;
                *(undefined8 *)(puVar24 + 0x26) = uVar15;
                FUN_1073c67e4(puVar24 + 0x2e,puVar20 + 0x2e);
                puVar24 = puStack_468 + 0x32;
              }
              uStack_478 = 1;
              for (; puVar31 != puVar6; puVar31 = puVar31 + 0x32) {
                func_0x0001074c2dac(puVar31);
              }
              FUN_1074c6168(&ppuStack_490);
              puVar20 = puStack_4b0;
              puVar24 = puStack_580;
              puStack_580 = puStack_4a8;
              puStack_588 = puStack_4b0;
              puStack_4b0 = puStack_590;
              puStack_4a8 = puVar24;
              puStack_4c0 = puStack_590;
              puStack_4b8 = puStack_590;
              puStack_590 = puVar25;
              func_0x0001074c61a8(&puStack_4c0);
            }
            puStack_588 = puVar20;
            func_0x0001074c2dac(&uStack_340);
            FUN_1074736dc(&uStack_518);
            FUN_1073c5f18(aplStack_500);
          }
          func_0x000107267da8(&fStack_1b0);
        }
        FUN_1074996e0(&puStack_4d8);
      }
      else {
        ppuVar11 = &puStack_530;
        FUN_1074c3544(ppuVar11,lVar18,lVar30);
        if (((ulong)ppuVar11 & 1) == 0) {
          for (; lVar18 != lVar30; lVar18 = lVar18 + 8) {
            FUN_1074c39e8(&puStack_530,lVar18);
          }
          lVar29 = *(long *)(puVar20 + 0x22);
          lVar13 = *(long *)(puVar20 + 0x16);
          lVar34 = *(long *)(lVar29 + 0x40);
          goto LAB_1074c0a88;
        }
      }
    }
    if (*(long *)(param_1 + 0x370) != 0) {
      puVar38 = (undefined8 *)(param_1 + 0x370);
      FUN_1074c2d70(puVar38);
      __ZdlPv(*puVar38);
      *puVar38 = 0;
      *(undefined8 *)(param_1 + 0x378) = 0;
      *(undefined8 *)(param_1 + 0x380) = 0;
    }
    *(undefined4 **)(param_1 + 0x378) = puStack_588;
    *(undefined4 **)(param_1 + 0x370) = puStack_590;
    *(undefined4 **)(param_1 + 0x380) = puStack_580;
    puStack_588 = (undefined4 *)0x0;
    puStack_580 = (undefined4 *)0x0;
    puStack_590 = (undefined4 *)0x0;
    FUN_10748be74(extraout_x8,&uStack_578);
  }
  else {
    func_0x0001074c916c();
    if (((bool)uVar9) && ((*(byte *)(param_2 + 0x2c) >> 5 & 1) != 0)) {
      fStack_1b0 = 6.02558e-44;
      lVar18 = 0x418;
    }
    else {
      fStack_1b0 = 5.88545e-44;
      lVar18 = 0x408;
    }
    uStack_1a8 = 0;
    uStack_1a4 = 0;
    uStack_1a0 = 0;
    uStack_19c = param_2[0x1e];
    uStack_198 = 0;
    uStack_196 = 0;
    uStack_194 = 0x501;
    uStack_184 = 0;
    uStack_18c = 0;
    uStack_190 = 1;
    uStack_17c = 0x1010101;
    uStack_178 = 0xf01;
    FUN_1073ca29c(&uStack_340,*(undefined8 *)(param_2 + 0x24),param_1 + lVar18,&fStack_1b0);
    puVar20 = uStack_340;
    if (uStack_340 == (undefined4 *)0x0) {
      *extraout_x8 = 0;
      extraout_x8[1] = 0;
      extraout_x8[2] = 0;
    }
    else {
      if (bVar33 == 0) {
        uStack_430 = 7;
        uStack_42e = 0;
      }
      else {
        uStack_430 = 3;
      }
      uStack_42c = 0;
      uStack_42f = 0;
      uStack_428 = 0x3f800000;
      fStack_1ac = 9.80909e-45;
      uStack_1a8 = 0;
      uStack_1a4 = 0;
      uStack_1a0 = CONCAT13(uStack_1a0._3_1_,0x10101);
      (**(code **)(**(long **)(param_2 + 6) + 0x80))
                (*(long **)(param_2 + 6),&uStack_430,&fStack_1b0);
      fStack_1b0 = (float)CONCAT13(fStack_1b0._3_1_,0x10000);
      fStack_1b0 = (float)CONCAT22(fStack_1b0._2_2_,0x100);
      (**(code **)(**(long **)(param_2 + 6) + 0x88))(*(long **)(param_2 + 6),&fStack_1b0);
      (**(code **)(**(long **)(param_2 + 6) + 0x40))(*(long **)(param_2 + 6),uStack_340);
      func_0x0001074c8b90();
      (**(code **)(extraout_x8_01 + 0x58))();
      func_0x0001074c8b90();
      func_0x0001074c8f54(*(undefined8 *)(extraout_x8_02 + 0x60));
    }
    func_0x00010730b734(&uStack_340);
    if (puVar20 != (undefined4 *)0x0) goto LAB_1074c099c;
  }
  FUN_1074c54d8(&ppuStack_460);
LAB_1074c1800:
  FUN_1074c2d1c(&puStack_590);
  func_0x0001072bc5c4(&uStack_578);
  func_0x0001072a8888(&uStack_560);
  func_0x0001074c71cc(&puStack_530);
  func_0x0001074c8620(uStack_18);
  if ((bool)uVar9) {
    return;
  }
  ___stack_chk_fail();
LAB_1074c1844:
  func_0x000104bd35f4();
LAB_1074c1848:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x1074c184c);
  (*pcVar7)();
}



/* Entry: 1074c1ac4; end: 1074c1afb;  */

void FUN_1074c1ac4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_3 != 0) {
    do {
      func_0x0001074c8654();
    } while (extraout_w10 != 0);
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  uStack_20 = 0;
  uStack_18 = 0;
  FUN_1074c58b4(&uStack_20);
  return;
}



/* Entry: 1074c1afc; end: 1074c1bc7;  */

void FUN_1074c1afc(long param_1)

{
  long *plVar1;
  code *extraout_x9;
  long *unaff_x19;
  long unaff_x20;
  long *plVar2;
  long lStack_70;
  undefined8 uStack_68;
  long lStack_50;
  undefined8 uStack_48;
  
  func_0x0001074c8868();
  plVar1 = (long *)(*(undefined8 **)(param_1 + 0x28))[1];
  for (plVar2 = (long *)**(undefined8 **)(param_1 + 0x28); plVar2 != plVar1; plVar2 = plVar2 + 1) {
    func_0x0001074c9040(*(undefined8 *)(*plVar2 + 0x220),*(undefined8 *)(unaff_x20 + 0x18));
    (*extraout_x9)(&lStack_70);
    uStack_48 = uStack_68;
    lStack_50 = lStack_70;
    lStack_70 = 0;
    uStack_68 = 0;
    func_0x0001073e091c(&lStack_70);
    if (lStack_50 != 0) {
      func_0x00010724ef84(&lStack_70,*(long *)(unaff_x20 + 0x18) + 8);
      (**(code **)(*unaff_x19 + 0x48))();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_70);
    }
    FUN_1073f9ec0(&lStack_50);
  }
  return;
}



/* Entry: 1074c1bc8; end: 1074c1caf;  */

void FUN_1074c1bc8(long param_1,undefined8 param_2)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  int extraout_w11;
  int extraout_w11_00;
  long lVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar2 = *(long *)(param_1 + 0x370);
  lVar1 = *(long *)(param_1 + 0x378);
  while (lVar1 != lVar2) {
    uStack_38 = *(undefined8 *)(lVar1 + -0x88);
    uStack_40 = *(undefined8 *)(lVar1 + -0x90);
    if (*(long *)(lVar1 + -0x88) != 0) {
      do {
        func_0x0001074c88e0();
        lVar1 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    uStack_58 = *(undefined8 *)(lVar1 + -0x38);
    uStack_60 = *(undefined8 *)(lVar1 + -0x40);
    if (*(long *)(lVar1 + -0x38) != 0) {
      do {
        func_0x0001074c88e0();
        lVar1 = extraout_x8_00;
      } while (extraout_w11_00 != 0);
    }
    uStack_50 = 1;
    FUN_1073c2584(param_2,lVar1 + -200,&uStack_40,lVar1 + -0x80,lVar1 + -0x60,lVar1 + -0x50,
                  &uStack_60,lVar1 + -0x30,lVar1 + -0x24,lVar1 + -0x1c,lVar1 + -0x10);
    FUN_1073c5e40(&uStack_60);
    FUN_1073c672c(&uStack_40);
    lVar1 = lVar1 + -200;
  }
  return;
}



/* Entry: 1074c1cb0; end: 1074c208b;  */

void FUN_1074c1cb0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined8 extraout_x8;
  long lVar3;
  long lVar4;
  bool bVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  long alStack_550 [2];
  undefined1 auStack_540 [64];
  char cStack_500;
  undefined1 auStack_4f8 [56];
  undefined1 auStack_4c0 [56];
  undefined1 auStack_488 [64];
  undefined1 auStack_448 [64];
  undefined1 auStack_408 [56];
  undefined1 auStack_3d0 [64];
  undefined1 auStack_390 [72];
  undefined1 auStack_348 [56];
  undefined1 auStack_310 [64];
  undefined1 auStack_2d0 [56];
  undefined1 auStack_298 [56];
  undefined1 auStack_260 [64];
  undefined1 auStack_220 [56];
  undefined1 auStack_1e8 [64];
  undefined1 auStack_1a8 [56];
  undefined1 auStack_170 [56];
  undefined1 auStack_138 [64];
  undefined1 auStack_f8 [56];
  undefined1 auStack_c0 [56];
  undefined8 uStack_88;
  
  bVar5 = false;
  lVar4 = param_6;
  func_0x0001074c8688();
  uStack_568 = 0;
  uStack_560 = 0;
  uStack_558 = 0;
  lVar6 = *(long *)(lVar4 + 0x378);
  uStack_88 = extraout_x8;
  for (lVar4 = *(long *)(lVar4 + 0x370); uVar2 = lVar4 == lVar6, !(bool)uVar2; lVar4 = lVar4 + 200)
  {
    func_0x000107751674(auStack_540,param_7);
    uVar8 = param_2;
    uVar9 = param_5;
    if (cStack_500 == '\x01') {
      lVar3 = *(long *)(lVar4 + 0x38) + 0x30;
      func_0x00010735c498(lVar3,auStack_540);
      uVar8 = param_2;
      uVar9 = param_5;
      if ((int)lVar3 != 0) {
        FUN_1074c1ac4(alStack_550,*(undefined8 *)(param_6 + 8),*(undefined8 *)(param_6 + 0x10));
        if ((ulong)((*(long *)(alStack_550[0] + 0x28) - *(long *)(alStack_550[0] + 0x20)) / 0x470)
            <= (ulong)*(ushort *)(lVar4 + 0x60)) {
          FUN_1074c6330();
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1074c1f1c);
          (*pcVar1)();
        }
        lVar3 = *(long *)(alStack_550[0] + 0x20) + (ulong)*(ushort *)(lVar4 + 0x60) * 0x470;
        FUN_1073ded34(auStack_4f8,lVar3);
        FUN_1073ded34(auStack_4c0,lVar3 + 0x38);
        FUN_1073dec58(auStack_488,lVar3 + 0x70);
        FUN_1073dec58(auStack_448,lVar3 + 0xb0);
        FUN_1073ded34(auStack_408,lVar3 + 0xf0);
        FUN_1073dec58(auStack_3d0,lVar3 + 0x128);
        FUN_1073deb50(auStack_390,lVar3 + 0x168);
        FUN_1073ded34(auStack_348,lVar3 + 0x1b0);
        FUN_1073dec58(auStack_310,lVar3 + 0x1e8);
        FUN_1073ded34(auStack_2d0,lVar3 + 0x228);
        FUN_1073ded34(auStack_298,lVar3 + 0x260);
        FUN_1073dec58(auStack_260,lVar3 + 0x298);
        FUN_1073ded34(auStack_220,lVar3 + 0x2d8);
        FUN_1073dec58(auStack_1e8,lVar3 + 0x310);
        FUN_1073ded34(auStack_1a8,lVar3 + 0x350);
        FUN_1073ded34(auStack_170,lVar3 + 0x388);
        FUN_1073dec58(auStack_138,lVar3 + 0x3c0);
        FUN_1073ded34(auStack_f8,lVar3 + 0x400);
        FUN_1073ded34(auStack_c0,lVar3 + 0x438);
        FUN_1074c58b4(alStack_550);
        FUN_1074c3ba8(auStack_390,param_7);
        uVar9 = param_5;
        FUN_1074c3c4c(auStack_298,param_7);
        uVar7 = param_2;
        FUN_1074c3cac(auStack_170,param_7);
        uVar8 = uVar7;
        func_0x0001074c4bd0(auStack_4f8);
        if (((0.0 < (float)param_5) && (0.0 < (float)param_2)) && (0.0 < (float)uVar7)) {
          func_0x000100206870(&uStack_568,lVar4 + 0x48);
          bVar5 = true;
        }
      }
    }
    func_0x00010737c444(auStack_540);
    param_2 = uVar8;
    param_5 = uVar9;
  }
  if (bVar5) {
    func_0x0001074c8a04();
    FUN_10748f12c();
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  func_0x0001000e30f4(&uStack_568);
  func_0x0001074c8620(uStack_88);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    do {
      FUN_1073deccc(auStack_488);
      FUN_1073dd4c4(auStack_4c0);
      FUN_1073dd4c4(auStack_4f8);
      FUN_1074c58b4(alStack_550);
      func_0x00010737c444(auStack_540);
      func_0x0001000e30f4(&uStack_568);
      func_0x0001074c8820();
      FUN_1073dd4c4(auStack_408);
      FUN_1073deccc(auStack_448);
    } while( true );
  }
  return;
}



/* Entry: 1074c208c; end: 1074c25ab;  */

char * FUN_1074c208c(char *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,char param_6,char param_7,char param_8,long *param_9)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long **pplVar9;
  ulong uVar10;
  long *extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long *plVar11;
  long *extraout_x9;
  long *extraout_x9_00;
  ulong uVar12;
  ulong extraout_x9_01;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *extraout_x10;
  long *extraout_x11;
  long *plVar16;
  long *plVar17;
  char *pcVar18;
  long *plVar19;
  undefined8 uVar20;
  long *plStack_c0;
  long **pplStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_90;
  long *plStack_88;
  long *plStack_80;
  ulong uStack_78;
  float fStack_70;
  
  *param_1 = param_6;
  param_1[1] = param_7;
  param_1[2] = param_8;
  pcVar18 = param_1 + 8;
  pcVar18[0] = '\0';
  pcVar18[1] = '\0';
  pcVar18[2] = '\0';
  pcVar18[3] = '\0';
  pcVar18[4] = '\0';
  pcVar18[5] = '\0';
  pcVar18[6] = '\0';
  pcVar18[7] = '\0';
  param_1[0x10] = '\0';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  param_1[0x14] = '\0';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  param_1[0x18] = '\0';
  param_1[0x19] = '\0';
  param_1[0x1a] = '\0';
  param_1[0x1b] = '\0';
  param_1[0x1c] = '\0';
  param_1[0x1d] = '\0';
  param_1[0x1e] = '\0';
  param_1[0x1f] = '\0';
  uVar20 = *param_2;
  *(undefined8 *)(param_1 + 0x10) = param_2[1];
  *(undefined8 *)pcVar18 = uVar20;
  *(undefined8 *)(param_1 + 0x18) = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  FUN_10749ea60(param_1 + 0x20,param_5);
  *(long **)(param_1 + 0x48) = param_9;
  plVar19 = (long *)(param_1 + 0x50);
  param_1[0x58] = '\0';
  param_1[0x59] = '\0';
  param_1[0x5a] = '\0';
  param_1[0x5b] = '\0';
  param_1[0x5c] = '\0';
  param_1[0x5d] = '\0';
  param_1[0x5e] = '\0';
  param_1[0x5f] = '\0';
  *plVar19 = 0;
  param_1[0x68] = '\0';
  param_1[0x69] = '\0';
  param_1[0x6a] = '\0';
  param_1[0x6b] = '\0';
  param_1[0x6c] = '\0';
  param_1[0x6d] = '\0';
  param_1[0x6e] = '\0';
  param_1[0x6f] = '\0';
  param_1[0x60] = '\0';
  param_1[0x61] = '\0';
  param_1[0x62] = '\0';
  param_1[99] = '\0';
  param_1[100] = '\0';
  param_1[0x65] = '\0';
  param_1[0x66] = '\0';
  param_1[0x67] = '\0';
  param_1[0x78] = '\0';
  param_1[0x79] = '\0';
  param_1[0x7a] = '\0';
  param_1[0x7b] = '\0';
  param_1[0x7c] = '\0';
  param_1[0x7d] = '\0';
  param_1[0x7e] = '\0';
  param_1[0x7f] = '\0';
  param_1[0x70] = '\0';
  param_1[0x71] = '\0';
  param_1[0x72] = '\0';
  param_1[0x73] = '\0';
  param_1[0x74] = '\0';
  param_1[0x75] = '\0';
  param_1[0x76] = '\0';
  param_1[0x77] = '\0';
  param_1[0x88] = '\0';
  param_1[0x89] = '\0';
  param_1[0x8a] = '\0';
  param_1[0x8b] = '\0';
  param_1[0x8c] = '\0';
  param_1[0x8d] = '\0';
  param_1[0x8e] = '\0';
  param_1[0x8f] = '\0';
  param_1[0x80] = '\0';
  param_1[0x81] = '\0';
  param_1[0x82] = '\0';
  param_1[0x83] = '\0';
  param_1[0x84] = '\0';
  param_1[0x85] = '\0';
  param_1[0x86] = '\0';
  param_1[0x87] = '\0';
  param_1[0x90] = '\0';
  param_1[0x91] = '\0';
  param_1[0x92] = '\0';
  param_1[0x93] = '\0';
  param_1[0x94] = '\0';
  param_1[0x95] = '\0';
  param_1[0x96] = '\0';
  param_1[0x97] = '\0';
  param_1[0x98] = '\0';
  param_1[0x99] = '\0';
  param_1[0x9a] = -0x80;
  param_1[0x9b] = '?';
  *(undefined8 *)(param_1 + 0xa0) = param_3;
  *(undefined8 *)(param_1 + 0xa8) = param_4;
  if (*param_1 == '\x01') {
    puVar6 = (undefined8 *)0x58;
    __Znwm();
    FUN_10747c890();
    *puVar6 = &PTR_FUN_1109b5028;
    lVar7 = *plVar19;
    *plVar19 = (long)puVar6;
    if (lVar7 != 0) {
      func_0x0001074c86c4();
    }
    plStack_88 = (long *)0x0;
    lStack_90 = 0;
    uStack_78 = 0;
    plStack_80 = (long *)0x0;
    fStack_70 = 1.0;
    lVar1 = *(long *)(param_1 + 0x10);
    for (lVar7 = *(long *)(param_1 + 8); uVar4 = lVar7 - lVar1 < 0, lVar7 != lVar1;
        lVar7 = lVar7 + 0x100) {
      plVar17 = *(long **)(lVar7 + 0x88);
      plVar13 = plVar17;
      FUN_1074c5cb4();
      plVar19 = plStack_88;
      if (plStack_88 != (long *)0x0) {
        uVar10 = (long)plStack_88 - 1;
        if (((ulong)plStack_88 & uVar10) == 0) {
          param_9 = (long *)(uVar10 & (ulong)plVar13);
          uVar4 = false;
        }
        else {
          uVar4 = (long)plVar13 - (long)plStack_88 < 0;
          param_9 = plVar13;
          if (plStack_88 <= plVar13) {
            uVar12 = 0;
            if (plStack_88 != (long *)0x0) {
              uVar12 = (ulong)plVar13 / (ulong)plStack_88;
            }
            param_9 = (long *)((long)plVar13 - uVar12 * (long)plStack_88);
          }
        }
        plVar11 = *(long **)(lStack_90 + (long)param_9 * 8);
        if (plVar11 != (long *)0x0) {
          do {
            while( true ) {
              plVar11 = (long *)*plVar11;
              if (plVar11 == (long *)0x0) goto LAB_1074c2220;
              plVar14 = (long *)plVar11[1];
              if (plVar14 != plVar13) break;
              uVar4 = plVar11[2] - (long)plVar17 < 0;
              if ((long *)plVar11[2] == plVar17) goto LAB_1074c2490;
            }
            if (((ulong)plStack_88 & uVar10) == 0) {
              plVar14 = (long *)((ulong)plVar14 & uVar10);
            }
            else if (plStack_88 <= plVar14) {
              uVar12 = 0;
              if (plStack_88 != (long *)0x0) {
                uVar12 = (ulong)plVar14 / (ulong)plStack_88;
              }
              plVar14 = (long *)((long)plVar14 - uVar12 * (long)plStack_88);
            }
            uVar4 = (long)plVar14 - (long)param_9 < 0;
          } while (plVar14 == param_9);
        }
      }
LAB_1074c2220:
      plVar11 = plVar13;
      func_0x0001074c8e20();
      uStack_b0 = 1;
      *plVar11 = 0;
      plVar11[1] = (long)plVar13;
      plVar11[2] = (long)plVar17;
      plStack_c0 = plVar11;
      pplStack_b8 = &plStack_80;
      func_0x0001074c8b54(uStack_78);
      if ((plVar19 == (long *)0x0) || (func_0x0001074c8b48(), (bool)uVar4)) {
        bVar3 = (long *)0x2 < plVar19;
        bVar5 = plVar19 == (long *)0x3;
        func_0x0001074c8674((long)plVar19 << 1);
        plVar17 = extraout_x8;
        if (!bVar3 || bVar5) {
          plVar17 = extraout_x9;
        }
        plVar14 = plVar19;
        if ((long)plVar17 - 1U == 0) {
          plVar17 = (long *)0x2;
        }
        else if (((ulong)plVar17 & (long)plVar17 - 1U) != 0) {
          __ZNSt3__112__next_primeEm();
          plVar14 = plStack_88;
        }
        plVar19 = plVar17;
        if (plVar14 < plVar17) {
LAB_1074c22a4:
          if ((ulong)plVar19 >> 0x3d != 0) {
            func_0x000104bd35f4();
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1074c252c);
            (*pcVar2)();
          }
          lVar8 = (long)plVar19 << 3;
          __Znwm(lVar8);
          FUN_1074c633c(&lStack_90,lVar8);
          plVar17 = (long *)0x0;
          lVar8 = lStack_90;
          plStack_88 = plVar19;
          while (plVar19 != plVar17) {
            func_0x0001074c8d60();
            lVar8 = extraout_x8_00;
            plVar17 = extraout_x9_00;
          }
          if (plStack_80 != (long *)0x0) {
            plVar17 = (long *)plStack_80[1];
            uVar12 = (long)plVar19 - 1;
            uVar10 = 0;
            if (plVar19 != (long *)0x0) {
              uVar10 = (ulong)plVar17 / (ulong)plVar19;
            }
            plVar14 = plVar17;
            if (plVar19 <= plVar17) {
              plVar14 = (long *)((long)plVar17 - uVar10 * (long)plVar19);
            }
            if (((ulong)plVar19 & uVar12) == 0) {
              plVar14 = (long *)((ulong)plVar17 & uVar12);
            }
            *(long ***)(lVar8 + (long)plVar14 * 8) = &plStack_80;
            plVar17 = plStack_80;
            while (plVar15 = plVar17, plVar17 = (long *)*plVar15, plVar17 != (long *)0x0) {
              plVar16 = (long *)plVar17[1];
              if (((ulong)plVar19 & uVar12) == 0) {
                plVar16 = (long *)((ulong)plVar16 & uVar12);
              }
              else if (plVar19 <= plVar16) {
                uVar10 = 0;
                if (plVar19 != (long *)0x0) {
                  uVar10 = (ulong)plVar16 / (ulong)plVar19;
                }
                plVar16 = (long *)((long)plVar16 - uVar10 * (long)plVar19);
              }
              if (plVar16 != plVar14) {
                if (*(long *)(lVar8 + (long)plVar16 * 8) == 0) {
                  *(long **)(lVar8 + (long)plVar16 * 8) = plVar15;
                  plVar14 = plVar16;
                }
                else {
                  *plVar15 = *plVar17;
                  func_0x0001074c8710();
                  lVar8 = extraout_x8_01;
                  uVar12 = extraout_x9_01;
                  plVar17 = extraout_x10;
                  plVar14 = extraout_x11;
                }
              }
            }
          }
        }
        else {
          plVar19 = plVar14;
          if (plVar17 < plVar14) {
            plVar19 = (long *)(long)((float)uStack_78 / fStack_70);
            if ((plVar14 < (long *)0x3) || (((ulong)plVar14 & (long)plVar14 - 1U) != 0)) {
              __ZNSt3__112__next_primeEm();
            }
            else if ((long *)0x1 < plVar19) {
              plVar19 = (long *)(1L << (-LZCOUNT((long)plVar19 + -1) & 0x3fU));
            }
            if (plVar17 <= plVar19) {
              plVar17 = plVar19;
            }
            plVar19 = plStack_88;
            if (plVar17 < plVar14) {
              plVar19 = plVar17;
              if (plVar17 != (long *)0x0) goto LAB_1074c22a4;
              FUN_1074c633c(&lStack_90,0);
              plStack_88 = (long *)0x0;
              plVar19 = (long *)0x0;
            }
          }
        }
        if (((ulong)plVar19 & (long)plVar19 - 1U) == 0) {
          param_9 = (long *)((long)plVar19 - 1U & (ulong)plVar13);
        }
        else {
          param_9 = plVar13;
          if (plVar19 <= plVar13) {
            uVar10 = 0;
            if (plVar19 != (long *)0x0) {
              uVar10 = (ulong)plVar13 / (ulong)plVar19;
            }
            param_9 = (long *)((long)plVar13 - uVar10 * (long)plVar19);
          }
        }
      }
      plVar13 = *(long **)(lStack_90 + (long)param_9 * 8);
      if (plVar13 == (long *)0x0) {
        *plVar11 = (long)plStack_80;
        *(long ***)(lStack_90 + (long)param_9 * 8) = &plStack_80;
        plStack_80 = plVar11;
        if (*plVar11 != 0) {
          plVar13 = *(long **)(*plVar11 + 8);
          if (((ulong)plVar19 & (long)plVar19 - 1U) == 0) {
            plVar13 = (long *)((ulong)plVar13 & (long)plVar19 - 1U);
          }
          else if (plVar19 <= plVar13) {
            uVar10 = 0;
            if (plVar19 != (long *)0x0) {
              uVar10 = (ulong)plVar13 / (ulong)plVar19;
            }
            plVar13 = (long *)((long)plVar13 - uVar10 * (long)plVar19);
          }
          *(long **)(lStack_90 + (long)plVar13 * 8) = plVar11;
        }
      }
      else {
        *plVar11 = *plVar13;
        *plVar13 = (long)plVar11;
      }
      plStack_c0 = (long *)0x0;
      uStack_78 = uStack_78 + 1;
      FUN_1074c6354(&plStack_c0);
LAB_1074c2490:
    }
    pplStack_b8 = (long **)0x0;
    plStack_c0 = (long *)0x0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_a0 = 0x3f800000;
    for (plVar19 = plStack_80; plVar19 != (long *)0x0; plVar19 = (long *)*plVar19) {
      plVar13 = (long *)(plVar19[2] + 0x80);
      while (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0) {
        pplVar9 = &plStack_c0;
        FUN_10747d3b8(pplVar9,plVar13 + 2);
        *(undefined1 *)pplVar9 = 0;
      }
    }
    FUN_10747b938(*(undefined8 *)(param_1 + 0x48),&plStack_c0,*(undefined8 *)(param_1 + 0x50));
    func_0x0001074701f4(&plStack_c0);
    FUN_1074c771c(&lStack_90);
  }
  return param_1;
}



/* Entry: 1074c25ac; end: 1074c26eb;  */

void FUN_1074c25ac(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 extraout_x8;
  int extraout_w11;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar5;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 auStack_58 [3];
  
  puVar3 = param_3;
  func_0x0001074c8848();
  puStack_90 = &UNK_10e52b660;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  FUN_10749b13c(&puStack_90,((long *)*puVar3)[1] - *(long *)*puVar3 >> 3);
  plVar1 = (long *)((undefined8 *)*param_3)[1];
  for (plVar5 = *(long **)*param_3; plVar5 != plVar1; plVar5 = plVar5 + 1) {
    uVar4 = *(undefined8 *)(*plVar5 + 0x220);
    lStack_68 = *(long *)(*plVar5 + 0x228);
    uStack_70 = uVar4;
    if (lStack_68 != 0) {
      do {
        func_0x0001074c88e0();
        uVar4 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    uStack_60 = uVar4;
    FUN_10749e37c(auStack_58,&puStack_90,&uStack_60);
    func_0x00010749f518(&uStack_70);
  }
  *unaff_x19 = &UNK_10e52b660;
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  unaff_x19[3] = 0;
  FUN_10749b13c();
  plVar5 = (long *)(unaff_x20 + 0x30);
  while (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0) {
    auStack_58[0] = plVar5[2];
    uVar2 = 0;
    FUN_10749e6e4(&puStack_90,auStack_58);
    if ((uVar2 & 1) == 0) {
      uStack_70 = plVar5[2];
      FUN_10749e37c(auStack_58);
    }
  }
  FUN_10749e34c(&puStack_90);
  return;
}



/* Entry: 1074c26ec; end: 1074c273b;  */

void FUN_1074c26ec(int param_1)

{
  long lVar1;
  long unaff_x20;
  
  func_0x0001074c8868();
  param_1 = param_1 + 0x3e0;
  FUN_1074c690c();
  if (param_1 != 0) {
    lVar1 = unaff_x20 + 0x3e0;
    FUN_1074c85b8();
    if (*(int *)(lVar1 + 0x18) == 1) {
      FUN_1074c663c();
    }
  }
  return;
}



/* Entry: 1074c273c; end: 1074c2743;  */

undefined8 FUN_1074c273c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x430);
}



/* Entry: 1074c2744; end: 1074c27db;  */

void FUN_1074c2744(long param_1)

{
  func_0x0001074c8da8();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1074c27dc; end: 1074c27f3;  */

void FUN_1074c27dc(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1074c27f4; end: 1074c2893;  */

void FUN_1074c27f4(long param_1)

{
  ulong uVar1;
  long unaff_x19;
  long lVar2;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  func_0x0001074c8848();
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_1074c2894();
    lVar2 = uVar1 + 0x6d0;
  }
  else {
    FUN_1074c298c();
    func_0x0001074c8810();
    FUN_1074c2aa4(auStack_58);
    FUN_1074c2894();
    lStack_48 = lStack_48 + 0x6d0;
    func_0x0001074c8a04();
    FUN_1074c29e4();
    lVar2 = *(long *)(unaff_x19 + 8);
    FUN_1074c2b14(auStack_58);
  }
  *(long *)(unaff_x19 + 8) = lVar2;
  return;
}



/* Entry: 1074c2894; end: 1074c298b;  */

void FUN_1074c2894(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074c8848();
  func_0x000107432f04();
  func_0x000107432f04(param_1 + 0x58,unaff_x20 + 0x58);
  func_0x000107482cec(unaff_x19 + 0xb0,unaff_x20 + 0xb0);
  func_0x000107482cec(unaff_x19 + 0x110,unaff_x20 + 0x110);
  func_0x000107432f04(unaff_x19 + 0x170,unaff_x20 + 0x170);
  func_0x000107482cec(unaff_x19 + 0x1c8,unaff_x20 + 0x1c8);
  func_0x000107432c64(unaff_x19 + 0x228,unaff_x20 + 0x228);
  func_0x000107432f04(unaff_x19 + 0x290,unaff_x20 + 0x290);
  func_0x000107482cec(unaff_x19 + 0x2e8,unaff_x20 + 0x2e8);
  func_0x000107432f04(unaff_x19 + 0x348,unaff_x20 + 0x348);
  func_0x000107432f04(unaff_x19 + 0x3a0,unaff_x20 + 0x3a0);
  func_0x000107482cec(unaff_x19 + 0x3f8,unaff_x20 + 0x3f8);
  func_0x000107432f04(unaff_x19 + 0x458,unaff_x20 + 0x458);
  func_0x000107482cec(unaff_x19 + 0x4b0,unaff_x20 + 0x4b0);
  func_0x000107432f04(unaff_x19 + 0x510,unaff_x20 + 0x510);
  func_0x000107432f04(unaff_x19 + 0x568,unaff_x20 + 0x568);
  func_0x000107482cec(unaff_x19 + 0x5c0,unaff_x20 + 0x5c0);
  func_0x000107432f04(unaff_x19 + 0x620,unaff_x20 + 0x620);
  func_0x000107432f04(unaff_x19 + 0x678,unaff_x20 + 0x678);
  return;
}



/* Entry: 1074c298c; end: 1074c29e3;  */

ulong FUN_1074c298c(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long extraout_x8;
  ulong uVar3;
  undefined8 *unaff_x19;
  ulong *unaff_x20;
  ulong uVar4;
  ulong uVar5;
  
  if (param_2 < 0x2593f69b025940) {
    uVar2 = (long)(param_1[2] - *param_1) / 0x6d0;
    uVar3 = uVar2 * 2;
    if (uVar3 < param_2 || uVar3 - param_2 == 0) {
      uVar3 = param_2;
    }
    if (0x12c9fb4d812c9e < uVar2) {
      uVar3 = 0x2593f69b02593f;
    }
    return uVar3;
  }
  FUN_1074c2a98();
  func_0x0001074c87c0();
  uVar4 = *param_1;
  uVar1 = param_1[1];
  uVar5 = extraout_x8 + ((long)(uVar1 - uVar4) / -0x6d0) * 0x6d0;
  uVar2 = uVar5;
  for (uVar3 = uVar4; uVar3 != uVar1; uVar3 = uVar3 + 0x6d0) {
    FUN_1074c2894(uVar2,uVar3);
    uVar2 = uVar2 + 0x6d0;
  }
  for (; uVar4 != uVar1; uVar4 = uVar4 + 0x6d0) {
    uVar2 = uVar4;
    func_0x0001074c2b58(uVar4);
  }
  unaff_x19[1] = uVar5;
  uVar3 = *unaff_x20;
  *unaff_x20 = uVar5;
  unaff_x20[1] = uVar3;
  unaff_x19[1] = uVar3;
  uVar3 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar3;
  uVar3 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar3;
  *unaff_x19 = unaff_x19[1];
  return uVar2;
}


