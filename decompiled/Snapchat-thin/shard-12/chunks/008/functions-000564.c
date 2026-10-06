/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1099a9160; end: 1099a969b;  */

uint * FUN_1099a9160(uint *param_1,ulong param_2,uint param_3,uint *param_4,uint *param_5,
                    undefined8 param_6)

{
  undefined *puVar1;
  uint uVar2;
  char cVar3;
  ulong uVar4;
  ulong uVar5;
  bool bVar6;
  bool bVar7;
  uint *puVar8;
  uint *puVar9;
  undefined8 uVar10;
  uint *puVar11;
  uint *puVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  byte *pbVar16;
  ulong uVar17;
  long lVar18;
  uint *puVar19;
  undefined1 *puVar20;
  uint *puVar21;
  uint *puVar22;
  int iVar23;
  ulong uVar24;
  ulong uVar25;
  uint *puStack_5c8;
  ulong uStack_5c0;
  ulong uStack_5b8;
  undefined8 uStack_5b0;
  uint auStack_5a8 [126];
  byte abStack_3b0 [128];
  long lStack_330;
  uint *puStack_2c0;
  ulong uStack_2b8;
  ulong uStack_2b0;
  undefined8 uStack_2a8;
  uint auStack_2a0 [126];
  undefined4 uStack_a8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_2a8 = 0x1098e8c88;
  uStack_2b0 = 500;
  uStack_2b8 = 0;
  uVar15 = *param_4;
  uVar14 = uVar15 & 7;
  puVar11 = param_5;
  puStack_2c0 = auStack_2a0;
  if (uVar14 < 6) {
    if (uVar14 == 4) {
      if ((uVar15 >> 0xd & 1) != 0) {
        uVar14 = 0x7830;
        if ((uVar15 & 0x1000) != 0) {
          uVar14 = 0x5830;
        }
        if (param_3 != 0) {
          uVar14 = uVar14 << 8;
        }
        param_3 = (uVar14 | param_3) + 0x2000000;
      }
      uVar17 = param_2;
      uVar24 = 0;
      do {
        uVar13 = uVar24;
        uVar24 = uVar13 + 1;
        bVar6 = 0xf < uVar17;
        uVar17 = uVar17 >> 4;
      } while (bVar6);
      uVar17 = uVar24;
      if (499 < (uint)uVar13) {
        func_0x0001098e8c88(&puStack_2c0,uVar24);
        uVar17 = uStack_2b8 + uVar24;
      }
      uVar25 = uStack_2b8;
      if ((uStack_2b0 < uVar17) || (uVar25 = uVar17, puStack_2c0 == (uint *)0x0)) {
        uStack_2b8 = uVar25;
        uVar17 = uVar13;
        puVar1 = &UNK_10f416238;
        if ((uVar15 & 0x1000) != 0) {
          puVar1 = &DAT_10f3ddedc;
        }
        do {
          *(undefined *)((long)&uStack_a8 + uVar17) = puVar1[param_2 & 0xf];
          bVar6 = 0xf < param_2;
          param_2 = param_2 >> 4;
          uVar17 = uVar17 - 1;
        } while (bVar6);
        FUN_1098c2be4(&uStack_a8,(long)&uStack_a8 + uVar13 + 1,&puStack_2c0);
      }
      else {
        puVar1 = &UNK_10f416238;
        if ((uVar15 & 0x1000) != 0) {
          puVar1 = &DAT_10f3ddedc;
        }
        puVar20 = (undefined1 *)((long)puStack_2c0 + uVar24 + uStack_2b8);
        do {
          puVar20 = puVar20 + -1;
          *puVar20 = puVar1[param_2 & 0xf];
          bVar6 = 0xf < param_2;
          param_2 = param_2 >> 4;
          uStack_2b8 = uVar17;
        } while (bVar6);
      }
    }
    else if (uVar14 == 5) {
      uVar17 = param_2;
      uVar24 = 0;
      do {
        uVar13 = uVar24;
        uVar24 = uVar13 + 1;
        bVar6 = 7 < uVar17;
        uVar17 = uVar17 >> 3;
      } while (bVar6);
      if ((uVar15 >> 0xd & 1) != 0) {
        uVar14 = 0x30;
        if (param_3 != 0) {
          uVar14 = 0x3000;
        }
        uVar15 = param_3;
        if ((int)param_4[3] <= (int)uVar24) {
          uVar15 = (uVar14 | param_3) + 0x1000000;
        }
        if (param_2 != 0) {
          param_3 = uVar15;
        }
      }
      uVar17 = uVar24;
      if (499 < (uint)uVar13) {
        func_0x0001098e8c88(&puStack_2c0,uVar24);
        uVar17 = uStack_2b8 + uVar24;
      }
      uVar25 = uVar13;
      uVar5 = uStack_2b8;
      if ((uStack_2b0 < uVar17) || (uVar5 = uVar17, puStack_2c0 == (uint *)0x0)) {
        do {
          uStack_2b8 = uVar5;
          *(byte *)((long)&uStack_a8 + uVar25) = (byte)param_2 & 7 | 0x30;
          bVar6 = 7 < param_2;
          param_2 = param_2 >> 3;
          uVar25 = uVar25 - 1;
          uVar5 = uStack_2b8;
        } while (bVar6);
        FUN_1098c2be4(&uStack_a8,(long)&uStack_a8 + uVar13 + 1,&puStack_2c0);
      }
      else {
        pbVar16 = (byte *)((long)puStack_2c0 + uVar24 + uStack_2b8);
        do {
          pbVar16 = pbVar16 + -1;
          *pbVar16 = (byte)param_2 & 7 | 0x30;
          bVar6 = 7 < param_2;
          param_2 = param_2 >> 3;
          uStack_2b8 = uVar17;
        } while (bVar6);
      }
    }
    else {
LAB_1099a9298:
      uVar24 = (ulong)((uint)(byte)(&UNK_10e00b8f6)[LZCOUNT(param_2 | 1) ^ 0x3f] -
                      (uint)(param_2 <
                            *(ulong *)(&UNK_10e00b938 +
                                      (ulong)(byte)(&UNK_10e00b8f6)[LZCOUNT(param_2 | 1) ^ 0x3f] * 8
                                      )));
      FUN_1098f8490(&puStack_2c0,param_2,uVar24);
    }
LAB_1099a954c:
    puVar22 = param_5;
    func_0x0001098e7b24(param_5,uVar24);
    uVar17 = (ulong)((int)uVar24 + (param_3 >> 0x18) + (int)puVar22);
    cVar3 = (&UNK_10e00f340)[(ulong)(*param_4 >> 3) & 7];
    uVar24 = 0;
    if (uVar17 <= param_4[2]) {
      uVar24 = param_4[2] - uVar17;
    }
    if (*(ulong *)(param_1 + 4) <
        *(long *)(param_1 + 2) + uVar17 + uVar24 * ((ulong)(*param_4 >> 0xf) & 7)) {
      (**(code **)(param_1 + 6))(param_1);
    }
    uVar17 = uVar24 >> ((long)cVar3 & 0x3fU);
    if (uVar17 != 0) {
      FUN_1094471fc(param_1,uVar17,param_4);
    }
    uVar14 = param_3 & 0xffffff;
    if ((param_3 & 0xffffff) != 0) {
      do {
        lVar18 = *(long *)(param_1 + 2);
        uVar13 = lVar18 + 1;
        if (*(ulong *)(param_1 + 4) < uVar13) {
          (**(code **)(param_1 + 6))(param_1);
          lVar18 = *(long *)(param_1 + 2);
          uVar13 = lVar18 + 1;
        }
        *(ulong *)(param_1 + 2) = uVar13;
        *(char *)(*(long *)param_1 + lVar18) = (char)uVar14;
        bVar6 = 0xff < uVar14;
        uVar14 = uVar14 >> 8;
      } while (bVar6);
    }
    puVar22 = puStack_2c0;
    uVar13 = uStack_2b8;
    FUN_1098e834c(param_5);
    uVar14 = (uint)uVar13;
    if (uVar24 != uVar17) {
      param_1 = (uint *)(uVar24 - uVar17);
      FUN_1094471fc();
      puVar22 = param_4;
    }
  }
  else {
    if (uVar14 == 6) {
      if ((uVar15 >> 0xd & 1) != 0) {
        uVar14 = 0x6230;
        if ((uVar15 & 0x1000) != 0) {
          uVar14 = 0x4230;
        }
        if (param_3 != 0) {
          uVar14 = uVar14 << 8;
        }
        param_3 = (uVar14 | param_3) + 0x2000000;
      }
      uVar17 = param_2;
      uVar24 = 0;
      do {
        uVar13 = uVar24;
        uVar24 = uVar13 + 1;
        bVar6 = 1 < uVar17;
        uVar17 = uVar17 >> 1;
      } while (bVar6);
      uVar17 = uVar24;
      if (499 < (uint)uVar13) {
        func_0x0001098e8c88(&puStack_2c0,uVar24);
        uVar17 = uStack_2b8 + uVar24;
      }
      uVar25 = uVar13;
      uVar5 = uStack_2b8;
      if ((uStack_2b0 < uVar17) || (uVar5 = uVar17, puStack_2c0 == (uint *)0x0)) {
        do {
          uStack_2b8 = uVar5;
          *(byte *)((long)&uStack_a8 + uVar25) = (byte)param_2 & 1 | 0x30;
          bVar6 = 1 < param_2;
          param_2 = param_2 >> 1;
          uVar25 = uVar25 - 1;
          uVar5 = uStack_2b8;
        } while (bVar6);
        FUN_1098c2be4(&uStack_a8,(long)&uStack_a8 + uVar13 + 1,&puStack_2c0);
      }
      else {
        pbVar16 = (byte *)((long)puStack_2c0 + uVar24 + uStack_2b8);
        do {
          pbVar16 = pbVar16 + -1;
          *pbVar16 = (byte)param_2 & 1 | 0x30;
          bVar6 = 1 < param_2;
          param_2 = param_2 >> 1;
          uStack_2b8 = uVar17;
        } while (bVar6);
      }
      goto LAB_1099a954c;
    }
    if (uVar14 != 7) goto LAB_1099a9298;
    uStack_a8._0_1_ = (uVar15 & 7) == 1;
    uStack_a8._1_1_ = (undefined1)param_2;
    puVar11 = &uStack_a8;
    puVar22 = (uint *)0x1;
    uVar14 = 1;
    FUN_1098e319c(param_1);
    param_1 = param_4;
  }
  puVar8 = puStack_2c0;
  if (puStack_2c0 != auStack_2a0) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar8;
  }
  ___stack_chk_fail();
  if (puStack_2c0 != auStack_2a0) {
    _free();
  }
  __Unwind_Resume();
  lStack_330 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_5b0 = 0x1098e8c88;
  uStack_5b8 = 500;
  uStack_5c0 = 0;
  uVar2 = *puVar11;
  uVar15 = uVar2 & 7;
  puStack_5c8 = auStack_5a8;
  if (uVar15 < 6) {
    if (uVar15 == 4) {
      uVar15 = 0x7830;
      if ((uVar2 & 0x1000) != 0) {
        uVar15 = 0x5830;
      }
      if (uVar14 != 0) {
        uVar15 = uVar15 << 8;
      }
      puVar19 = param_1;
      puVar21 = puVar22;
      uVar24 = 0;
      if ((uVar2 & 0x2000) != 0) {
        uVar14 = (uVar15 | uVar14) + 0x2000000;
      }
      do {
        uVar13 = uVar24;
        bVar6 = puVar19 < (uint *)0x10;
        uVar17 = (long)puVar21 + (ulong)!bVar6;
        uVar24 = uVar13 + 1;
        puVar19 = (uint *)((ulong)puVar19 >> 4 | (long)puVar21 << 0x3c);
        puVar21 = (uint *)((ulong)puVar21 >> 4);
      } while (!CARRY8(~uVar17,(ulong)bVar6));
      uVar17 = uVar24;
      if (499 < (uint)uVar13) {
        func_0x0001098e8c88(&puStack_5c8,uVar24);
        uVar17 = uStack_5c0 + uVar24;
      }
      uVar25 = uStack_5c0;
      if ((uStack_5b8 < uVar17) || (uVar25 = uVar17, puStack_5c8 == (uint *)0x0)) {
        uStack_5c0 = uVar25;
        uVar17 = uVar13;
        puVar1 = &UNK_10f416238;
        if ((uVar2 & 0x1000) != 0) {
          puVar1 = &DAT_10f3ddedc;
        }
        do {
          abStack_3b0[uVar17] = puVar1[(ulong)param_1 & 0xf];
          uVar25 = (long)puVar22 << 0x3c;
          bVar6 = param_1 < (uint *)0x10;
          uVar5 = (long)puVar22 + (ulong)!bVar6;
          puVar22 = (uint *)((ulong)puVar22 >> 4);
          param_1 = (uint *)((ulong)param_1 >> 4 | uVar25);
          uVar17 = uVar17 - 1;
        } while (!CARRY8(~uVar5,(ulong)bVar6));
        FUN_1098c2be4(abStack_3b0,abStack_3b0 + uVar13 + 1,&puStack_5c8);
      }
      else {
        puVar1 = &UNK_10f416238;
        if ((uVar2 & 0x1000) != 0) {
          puVar1 = &DAT_10f3ddedc;
        }
        puVar20 = (undefined1 *)((long)puStack_5c8 + uVar24 + uStack_5c0);
        do {
          puVar20 = puVar20 + -1;
          *puVar20 = puVar1[(ulong)param_1 & 0xf];
          bVar7 = (uint *)0xf < param_1;
          param_1 = (uint *)((ulong)param_1 >> 4 | (long)puVar22 << 0x3c);
          uVar13 = (long)puVar22 - 1;
          bVar6 = puVar22 != (uint *)0x0;
          puVar22 = (uint *)((ulong)puVar22 >> 4);
          uStack_5c0 = uVar17;
        } while (bVar6 || CARRY8(uVar13,(ulong)bVar7));
      }
    }
    else {
      if (uVar15 != 5) goto LAB_1099a97f0;
      puVar19 = param_1;
      puVar21 = puVar22;
      uVar24 = 0;
      do {
        uVar25 = uVar24;
        uVar17 = (long)puVar21 << 0x3d;
        bVar6 = puVar19 < (uint *)0x8;
        uVar13 = (long)puVar21 + (ulong)!bVar6;
        puVar21 = (uint *)((ulong)puVar21 >> 3);
        uVar24 = uVar25 + 1;
        puVar19 = (uint *)((ulong)puVar19 >> 3 | uVar17);
      } while (!CARRY8(~uVar13,(ulong)bVar6));
      if ((uVar2 >> 0xd & 1) != 0) {
        uVar15 = 0x30;
        if (uVar14 != 0) {
          uVar15 = 0x3000;
        }
        uVar2 = uVar14;
        if ((int)puVar11[3] <= (int)uVar24) {
          uVar2 = (uVar15 | uVar14) + 0x1000000;
        }
        if (param_1 != (uint *)0x0 || puVar22 != (uint *)0x0) {
          uVar14 = uVar2;
        }
      }
      uVar17 = uVar24;
      if (499 < (uint)uVar25) {
        func_0x0001098e8c88(&puStack_5c8,uVar24);
        uVar17 = uStack_5c0 + uVar24;
      }
      uVar13 = uVar25;
      uVar5 = uStack_5c0;
      if ((uStack_5b8 < uVar17) || (uVar5 = uVar17, puStack_5c8 == (uint *)0x0)) {
        do {
          uStack_5c0 = uVar5;
          abStack_3b0[uVar13] = (byte)param_1 & 7 | 0x30;
          uVar17 = (long)puVar22 << 0x3d;
          bVar6 = param_1 < (uint *)0x8;
          uVar4 = (long)puVar22 + (ulong)!bVar6;
          puVar22 = (uint *)((ulong)puVar22 >> 3);
          param_1 = (uint *)((ulong)param_1 >> 3 | uVar17);
          uVar13 = uVar13 - 1;
          uVar5 = uStack_5c0;
        } while (!CARRY8(~uVar4,(ulong)bVar6));
        FUN_1098c2be4(abStack_3b0,abStack_3b0 + uVar25 + 1,&puStack_5c8);
      }
      else {
        pbVar16 = (byte *)((long)puStack_5c8 + uVar24 + uStack_5c0);
        do {
          pbVar16 = pbVar16 + -1;
          *pbVar16 = (byte)param_1 & 7 | 0x30;
          bVar7 = (uint *)0x7 < param_1;
          param_1 = (uint *)((ulong)param_1 >> 3 | (long)puVar22 << 0x3d);
          uVar13 = (long)puVar22 - 1;
          bVar6 = puVar22 != (uint *)0x0;
          puVar22 = (uint *)((ulong)puVar22 >> 3);
          uStack_5c0 = uVar17;
        } while (bVar6 || CARRY8(uVar13,(ulong)bVar7));
      }
    }
  }
  else if (uVar15 == 6) {
    uVar15 = 0x6230;
    if ((uVar2 & 0x1000) != 0) {
      uVar15 = 0x4230;
    }
    if (uVar14 != 0) {
      uVar15 = uVar15 << 8;
    }
    puVar19 = param_1;
    puVar21 = puVar22;
    uVar24 = 0;
    if ((uVar2 & 0x2000) != 0) {
      uVar14 = (uVar15 | uVar14) + 0x2000000;
    }
    do {
      uVar13 = uVar24;
      bVar6 = puVar19 < (uint *)0x2;
      uVar17 = (long)puVar21 + (ulong)!bVar6;
      uVar24 = uVar13 + 1;
      puVar19 = (uint *)((ulong)puVar19 >> 1 | (long)puVar21 << 0x3f);
      puVar21 = (uint *)((ulong)puVar21 >> 1);
    } while (!CARRY8(~uVar17,(ulong)bVar6));
    uVar17 = uVar24;
    if (499 < (uint)uVar13) {
      func_0x0001098e8c88(&puStack_5c8,uVar24);
      uVar17 = uStack_5c0 + uVar24;
    }
    uVar25 = uVar13;
    uVar5 = uStack_5c0;
    if ((uStack_5b8 < uVar17) || (uVar5 = uVar17, puStack_5c8 == (uint *)0x0)) {
      do {
        uStack_5c0 = uVar5;
        abStack_3b0[uVar25] = (byte)param_1 & 1 | 0x30;
        uVar17 = (long)puVar22 << 0x3f;
        bVar6 = param_1 < (uint *)0x2;
        uVar4 = (long)puVar22 + (ulong)!bVar6;
        puVar22 = (uint *)((ulong)puVar22 >> 1);
        param_1 = (uint *)((ulong)param_1 >> 1 | uVar17);
        uVar25 = uVar25 - 1;
        uVar5 = uStack_5c0;
      } while (!CARRY8(~uVar4,(ulong)bVar6));
      FUN_1098c2be4(abStack_3b0,abStack_3b0 + uVar13 + 1,&puStack_5c8);
    }
    else {
      pbVar16 = (byte *)((long)puStack_5c8 + uVar24 + uStack_5c0);
      do {
        pbVar16 = pbVar16 + -1;
        *pbVar16 = (byte)param_1 & 1 | 0x30;
        bVar7 = (uint *)0x1 < param_1;
        param_1 = (uint *)((ulong)param_1 >> 1 | (long)puVar22 << 0x3f);
        uVar13 = (long)puVar22 - 1;
        bVar6 = puVar22 != (uint *)0x0;
        puVar22 = (uint *)((ulong)puVar22 >> 1);
        uStack_5c0 = uVar17;
      } while (bVar6 || CARRY8(uVar13,(ulong)bVar7));
    }
  }
  else {
    if (uVar15 == 7) {
      abStack_3b0[0] = (uVar2 & 7) == 1;
      abStack_3b0[1] = (byte)param_1;
      FUN_1098e319c(puVar8,puVar11,1,1,abStack_3b0);
      goto LAB_1099a9c84;
    }
LAB_1099a97f0:
    if (puVar22 != (uint *)0x0 || CARRY8((long)puVar22 - 1,(ulong)((uint *)0x9 < param_1))) {
      uVar24 = 4;
      puVar19 = param_1;
      puVar21 = puVar22;
      do {
        iVar23 = (int)uVar24;
        if (CARRY8(~((long)puVar21 + (ulong)(puVar19 >= (uint *)0x64)),
                   (ulong)(puVar19 < (uint *)0x64))) {
          uVar24 = (ulong)(iVar23 - 2);
          goto LAB_1099a9b8c;
        }
        if (CARRY8(~((long)puVar21 + (ulong)(puVar19 >= (uint *)0x3e8)),
                   (ulong)(puVar19 < (uint *)0x3e8))) {
          uVar24 = (ulong)(iVar23 - 1);
          goto LAB_1099a9b8c;
        }
        if ((ulong)puVar21 >> 4 == 0 &&
            !CARRY8(((ulong)puVar21 >> 4) - 1,
                    (ulong)(0x270 < ((ulong)puVar19 >> 4 | (long)puVar21 << 0x3c))))
        goto LAB_1099a9b8c;
        puVar9 = puVar19;
        puVar12 = puVar21;
        ___udivti3(puVar19,puVar21,10000,0);
        uVar17 = (ulong)puVar21 >> 5;
        bVar6 = ((ulong)puVar19 >> 5 | (long)puVar21 << 0x3b) < 0xc35;
        uVar24 = (ulong)(iVar23 + 4);
        puVar19 = puVar9;
        puVar21 = puVar12;
      } while (!CARRY8(~(uVar17 + !bVar6),(ulong)bVar6));
      uVar24 = (ulong)(iVar23 + 1);
    }
    else {
      uVar24 = 1;
    }
LAB_1099a9b8c:
    FUN_1099a86b8(&puStack_5c8,param_1,puVar22,uVar24);
  }
  uVar10 = param_6;
  func_0x0001098e7b24(param_6,uVar24);
  uVar17 = (ulong)((int)uVar24 + (uVar14 >> 0x18) + (int)uVar10);
  cVar3 = (&UNK_10e00f340)[(ulong)(*puVar11 >> 3) & 7];
  uVar24 = 0;
  if (uVar17 <= puVar11[2]) {
    uVar24 = puVar11[2] - uVar17;
  }
  if (*(ulong *)(puVar8 + 4) <
      *(long *)(puVar8 + 2) + uVar17 + uVar24 * ((ulong)(*puVar11 >> 0xf) & 7)) {
    (**(code **)(puVar8 + 6))(puVar8);
  }
  uVar17 = uVar24 >> ((long)cVar3 & 0x3fU);
  if (uVar17 != 0) {
    FUN_1094471fc(puVar8,uVar17,puVar11);
  }
  uVar15 = uVar14 & 0xffffff;
  if ((uVar14 & 0xffffff) != 0) {
    do {
      lVar18 = *(long *)(puVar8 + 2);
      uVar13 = lVar18 + 1;
      if (*(ulong *)(puVar8 + 4) < uVar13) {
        (**(code **)(puVar8 + 6))(puVar8);
        lVar18 = *(long *)(puVar8 + 2);
        uVar13 = lVar18 + 1;
      }
      *(ulong *)(puVar8 + 2) = uVar13;
      *(char *)(*(long *)puVar8 + lVar18) = (char)uVar15;
      bVar6 = 0xff < uVar15;
      uVar15 = uVar15 >> 8;
    } while (bVar6);
  }
  FUN_1098e834c(param_6,puVar8,puStack_5c8,uStack_5c0);
  if (uVar24 != uVar17) {
    FUN_1094471fc();
  }
LAB_1099a9c84:
  puVar11 = puStack_5c8;
  if (puStack_5c8 != auStack_5a8) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_330) {
    return puVar11;
  }
  ___stack_chk_fail();
  if (puStack_5c8 != auStack_5a8) {
    _free();
  }
  __Unwind_Resume();
  if (((char)puVar11[0x32] != '\x01') ||
     (puVar22 = puVar11, _pthread_rwlock_destroy(), (int)puVar22 == 0)) {
    return puVar11;
  }
  _abort();
  func_0x000104bd46a0();
  uVar24 = uRam000000011374c0e0;
  if (-1 < (char)bRam000000011374c0ef) {
    uVar24 = (ulong)bRam000000011374c0ef;
  }
  if (uVar24 != 0) {
    return puVar22;
  }
  puVar11 = (uint *)0x11374c0d8;
  FUN_1099a9dd0(0x11374c0d8);
  uVar24 = uRam000000011374c0e0;
  if (-1 < (char)bRam000000011374c0ef) {
    uVar24 = (ulong)bRam000000011374c0ef;
  }
  if (uVar24 == 0) {
    if ((char)bRam000000011374c0ef < '\0') {
      uRam000000011374c0e0 = 9;
      puVar22 = puRam000000011374c0d8;
    }
    else {
      bRam000000011374c0ef = 9;
      puVar22 = (uint *)0x11374c0d8;
    }
    *(undefined2 *)(puVar22 + 2) = 0x29;
    *(undefined8 *)puVar22 = 0x6e776f6e6b6e7528;
  }
  return puVar11;
}



/* Entry: 1099a969c; end: 1099a9cf7;  */

char * FUN_1099a969c(long *param_1,ulong param_2,ulong param_3,uint param_4,uint *param_5,
                    undefined8 param_6)

{
  undefined *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 uVar7;
  char *pcVar8;
  ulong uVar9;
  uint uVar10;
  byte *pbVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  char *pcVar15;
  ulong uVar16;
  int iVar17;
  ulong uVar18;
  char *pcStack_308;
  ulong uStack_300;
  ulong uStack_2f8;
  undefined8 uStack_2f0;
  char acStack_2e8 [504];
  byte abStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_2f0 = 0x1098e8c88;
  uStack_2f8 = 500;
  uStack_300 = 0;
  uVar2 = *param_5;
  uVar10 = uVar2 & 7;
  pcStack_308 = acStack_2e8;
  if (uVar10 < 6) {
    if (uVar10 == 4) {
      uVar10 = 0x7830;
      if ((uVar2 & 0x1000) != 0) {
        uVar10 = 0x5830;
      }
      if (param_4 != 0) {
        uVar10 = uVar10 << 8;
      }
      uVar12 = param_2;
      uVar16 = param_3;
      uVar18 = 0;
      if ((uVar2 & 0x2000) != 0) {
        param_4 = (uVar10 | param_4) + 0x2000000;
      }
      do {
        uVar9 = uVar18;
        bVar4 = uVar12 < 0x10;
        uVar6 = uVar16 + !bVar4;
        uVar18 = uVar9 + 1;
        uVar12 = uVar12 >> 4 | uVar16 << 0x3c;
        uVar16 = uVar16 >> 4;
      } while (!CARRY8(~uVar6,(ulong)bVar4));
      uVar12 = uVar18;
      if (499 < (uint)uVar9) {
        func_0x0001098e8c88(&pcStack_308,uVar18);
        uVar12 = uStack_300 + uVar18;
      }
      uVar16 = uStack_300;
      if ((uStack_2f8 < uVar12) || (uVar16 = uVar12, pcStack_308 == (char *)0x0)) {
        uStack_300 = uVar16;
        uVar12 = uVar9;
        puVar1 = &UNK_10f416238;
        if ((uVar2 & 0x1000) != 0) {
          puVar1 = &DAT_10f3ddedc;
        }
        do {
          abStack_f0[uVar12] = puVar1[param_2 & 0xf];
          uVar16 = param_3 << 0x3c;
          bVar4 = param_2 < 0x10;
          uVar6 = param_3 + !bVar4;
          param_3 = param_3 >> 4;
          param_2 = param_2 >> 4 | uVar16;
          uVar12 = uVar12 - 1;
        } while (!CARRY8(~uVar6,(ulong)bVar4));
        FUN_1098c2be4(abStack_f0,abStack_f0 + uVar9 + 1,&pcStack_308);
      }
      else {
        puVar1 = &UNK_10f416238;
        if ((uVar2 & 0x1000) != 0) {
          puVar1 = &DAT_10f3ddedc;
        }
        pcVar15 = pcStack_308 + uVar18 + uStack_300;
        do {
          pcVar15 = pcVar15 + -1;
          *pcVar15 = puVar1[param_2 & 0xf];
          bVar5 = 0xf < param_2;
          param_2 = param_2 >> 4 | param_3 << 0x3c;
          uVar16 = param_3 - 1;
          bVar4 = param_3 != 0;
          param_3 = param_3 >> 4;
          uStack_300 = uVar12;
        } while (bVar4 || CARRY8(uVar16,(ulong)bVar5));
      }
    }
    else {
      if (uVar10 != 5) goto LAB_1099a97f0;
      uVar12 = param_2;
      uVar16 = param_3;
      uVar18 = 0;
      do {
        uVar14 = uVar18;
        uVar6 = uVar16 << 0x3d;
        bVar4 = uVar12 < 8;
        uVar9 = uVar16 + !bVar4;
        uVar16 = uVar16 >> 3;
        uVar18 = uVar14 + 1;
        uVar12 = uVar12 >> 3 | uVar6;
      } while (!CARRY8(~uVar9,(ulong)bVar4));
      if ((uVar2 >> 0xd & 1) != 0) {
        uVar10 = 0x30;
        if (param_4 != 0) {
          uVar10 = 0x3000;
        }
        uVar2 = param_4;
        if ((int)param_5[3] <= (int)uVar18) {
          uVar2 = (uVar10 | param_4) + 0x1000000;
        }
        if (param_2 != 0 || param_3 != 0) {
          param_4 = uVar2;
        }
      }
      uVar12 = uVar18;
      if (499 < (uint)uVar14) {
        func_0x0001098e8c88(&pcStack_308,uVar18);
        uVar12 = uStack_300 + uVar18;
      }
      uVar16 = uVar14;
      uVar6 = uStack_300;
      if ((uStack_2f8 < uVar12) || (uVar6 = uVar12, pcStack_308 == (char *)0x0)) {
        do {
          uStack_300 = uVar6;
          abStack_f0[uVar16] = (byte)param_2 & 7 | 0x30;
          uVar12 = param_3 << 0x3d;
          bVar4 = param_2 < 8;
          uVar9 = param_3 + !bVar4;
          param_3 = param_3 >> 3;
          param_2 = param_2 >> 3 | uVar12;
          uVar16 = uVar16 - 1;
          uVar6 = uStack_300;
        } while (!CARRY8(~uVar9,(ulong)bVar4));
        FUN_1098c2be4(abStack_f0,abStack_f0 + uVar14 + 1,&pcStack_308);
      }
      else {
        pbVar11 = (byte *)(pcStack_308 + uVar18 + uStack_300);
        do {
          pbVar11 = pbVar11 + -1;
          *pbVar11 = (byte)param_2 & 7 | 0x30;
          bVar5 = 7 < param_2;
          param_2 = param_2 >> 3 | param_3 << 0x3d;
          uVar16 = param_3 - 1;
          bVar4 = param_3 != 0;
          param_3 = param_3 >> 3;
          uStack_300 = uVar12;
        } while (bVar4 || CARRY8(uVar16,(ulong)bVar5));
      }
    }
  }
  else if (uVar10 == 6) {
    uVar10 = 0x6230;
    if ((uVar2 & 0x1000) != 0) {
      uVar10 = 0x4230;
    }
    if (param_4 != 0) {
      uVar10 = uVar10 << 8;
    }
    uVar12 = param_2;
    uVar16 = param_3;
    uVar18 = 0;
    if ((uVar2 & 0x2000) != 0) {
      param_4 = (uVar10 | param_4) + 0x2000000;
    }
    do {
      uVar9 = uVar18;
      bVar4 = uVar12 < 2;
      uVar6 = uVar16 + !bVar4;
      uVar18 = uVar9 + 1;
      uVar12 = uVar12 >> 1 | uVar16 << 0x3f;
      uVar16 = uVar16 >> 1;
    } while (!CARRY8(~uVar6,(ulong)bVar4));
    uVar12 = uVar18;
    if (499 < (uint)uVar9) {
      func_0x0001098e8c88(&pcStack_308,uVar18);
      uVar12 = uStack_300 + uVar18;
    }
    uVar16 = uVar9;
    uVar6 = uStack_300;
    if ((uStack_2f8 < uVar12) || (uVar6 = uVar12, pcStack_308 == (char *)0x0)) {
      do {
        uStack_300 = uVar6;
        abStack_f0[uVar16] = (byte)param_2 & 1 | 0x30;
        uVar12 = param_3 << 0x3f;
        bVar4 = param_2 < 2;
        uVar14 = param_3 + !bVar4;
        param_3 = param_3 >> 1;
        param_2 = param_2 >> 1 | uVar12;
        uVar16 = uVar16 - 1;
        uVar6 = uStack_300;
      } while (!CARRY8(~uVar14,(ulong)bVar4));
      FUN_1098c2be4(abStack_f0,abStack_f0 + uVar9 + 1,&pcStack_308);
    }
    else {
      pbVar11 = (byte *)(pcStack_308 + uVar18 + uStack_300);
      do {
        pbVar11 = pbVar11 + -1;
        *pbVar11 = (byte)param_2 & 1 | 0x30;
        bVar5 = 1 < param_2;
        param_2 = param_2 >> 1 | param_3 << 0x3f;
        uVar16 = param_3 - 1;
        bVar4 = param_3 != 0;
        param_3 = param_3 >> 1;
        uStack_300 = uVar12;
      } while (bVar4 || CARRY8(uVar16,(ulong)bVar5));
    }
  }
  else {
    if (uVar10 == 7) {
      abStack_f0[0] = (uVar2 & 7) == 1;
      abStack_f0[1] = (byte)param_2;
      FUN_1098e319c(param_1,param_5,1,1,abStack_f0);
      goto LAB_1099a9c84;
    }
LAB_1099a97f0:
    if (param_3 != 0 || CARRY8(param_3 - 1,(ulong)(9 < param_2))) {
      uVar18 = 4;
      uVar12 = param_2;
      uVar16 = param_3;
      do {
        iVar17 = (int)uVar18;
        if (CARRY8(~(uVar16 + (uVar12 >= 100)),(ulong)(uVar12 < 100))) {
          uVar18 = (ulong)(iVar17 - 2);
          goto LAB_1099a9b8c;
        }
        if (CARRY8(~(uVar16 + (uVar12 >= 1000)),(ulong)(uVar12 < 1000))) {
          uVar18 = (ulong)(iVar17 - 1);
          goto LAB_1099a9b8c;
        }
        if (uVar16 >> 4 == 0 &&
            !CARRY8((uVar16 >> 4) - 1,(ulong)(0x270 < (uVar12 >> 4 | uVar16 << 0x3c))))
        goto LAB_1099a9b8c;
        uVar6 = uVar12;
        uVar9 = uVar16;
        ___udivti3(uVar12,uVar16,10000,0);
        uVar14 = uVar16 >> 5;
        bVar4 = (uVar12 >> 5 | uVar16 << 0x3b) < 0xc35;
        uVar18 = (ulong)(iVar17 + 4);
        uVar12 = uVar6;
        uVar16 = uVar9;
      } while (!CARRY8(~(uVar14 + !bVar4),(ulong)bVar4));
      uVar18 = (ulong)(iVar17 + 1);
    }
    else {
      uVar18 = 1;
    }
LAB_1099a9b8c:
    FUN_1099a86b8(&pcStack_308,param_2,param_3,uVar18);
  }
  uVar7 = param_6;
  func_0x0001098e7b24(param_6,uVar18);
  uVar12 = (ulong)((int)uVar18 + (param_4 >> 0x18) + (int)uVar7);
  cVar3 = (&UNK_10e00f340)[(ulong)(*param_5 >> 3) & 7];
  uVar18 = 0;
  if (uVar12 <= param_5[2]) {
    uVar18 = param_5[2] - uVar12;
  }
  if ((ulong)param_1[2] < param_1[1] + uVar12 + uVar18 * ((ulong)(*param_5 >> 0xf) & 7)) {
    (*(code *)param_1[3])(param_1);
  }
  uVar12 = uVar18 >> ((long)cVar3 & 0x3fU);
  if (uVar12 != 0) {
    FUN_1094471fc(param_1,uVar12,param_5);
  }
  uVar10 = param_4 & 0xffffff;
  if ((param_4 & 0xffffff) != 0) {
    do {
      lVar13 = param_1[1];
      uVar16 = lVar13 + 1;
      if ((ulong)param_1[2] < uVar16) {
        (*(code *)param_1[3])(param_1);
        lVar13 = param_1[1];
        uVar16 = lVar13 + 1;
      }
      param_1[1] = uVar16;
      *(char *)(*param_1 + lVar13) = (char)uVar10;
      bVar4 = 0xff < uVar10;
      uVar10 = uVar10 >> 8;
    } while (bVar4);
  }
  FUN_1098e834c(param_6,param_1,pcStack_308,uStack_300);
  if (uVar18 != uVar12) {
    FUN_1094471fc();
  }
LAB_1099a9c84:
  pcVar15 = pcStack_308;
  if (pcStack_308 != acStack_2e8) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return pcVar15;
  }
  ___stack_chk_fail();
  if (pcStack_308 != acStack_2e8) {
    _free();
  }
  __Unwind_Resume();
  if ((pcVar15[200] != '\x01') || (pcVar8 = pcVar15, _pthread_rwlock_destroy(), (int)pcVar8 == 0)) {
    return pcVar15;
  }
  _abort();
  func_0x000104bd46a0();
  uVar18 = uRam000000011374c0e0;
  if (-1 < (char)bRam000000011374c0ef) {
    uVar18 = (ulong)bRam000000011374c0ef;
  }
  if (uVar18 != 0) {
    return pcVar8;
  }
  pcVar15 = (char *)0x11374c0d8;
  FUN_1099a9dd0(0x11374c0d8);
  uVar18 = uRam000000011374c0e0;
  if (-1 < (char)bRam000000011374c0ef) {
    uVar18 = (ulong)bRam000000011374c0ef;
  }
  if (uVar18 == 0) {
    if ((char)bRam000000011374c0ef < '\0') {
      uRam000000011374c0e0 = 9;
      pcVar8 = pcRam000000011374c0d8;
    }
    else {
      bRam000000011374c0ef = 9;
      pcVar8 = (char *)0x11374c0d8;
    }
    builtin_strncpy(pcVar8,"(unknown)",10);
  }
  return pcVar15;
}



/* Entry: 1099a9cf8; end: 1099a9d37;  */

char * FUN_1099a9cf8(char *param_1)

{
  ulong uVar1;
  char *pcVar2;
  char *pcVar3;
  
  if ((param_1[200] != '\x01') || (pcVar2 = param_1, _pthread_rwlock_destroy(), (int)pcVar2 == 0)) {
    return param_1;
  }
  _abort();
  func_0x000104bd46a0();
  uVar1 = uRam000000011374c0e0;
  if (-1 < (char)bRam000000011374c0ef) {
    uVar1 = (ulong)bRam000000011374c0ef;
  }
  if (uVar1 != 0) {
    return pcVar2;
  }
  pcVar2 = (char *)0x11374c0d8;
  FUN_1099a9dd0(0x11374c0d8);
  uVar1 = uRam000000011374c0e0;
  if (-1 < (char)bRam000000011374c0ef) {
    uVar1 = (ulong)bRam000000011374c0ef;
  }
  if (uVar1 == 0) {
    if ((char)bRam000000011374c0ef < '\0') {
      uRam000000011374c0e0 = 9;
      pcVar3 = pcRam000000011374c0d8;
    }
    else {
      bRam000000011374c0ef = 9;
      pcVar3 = (char *)0x11374c0d8;
    }
    builtin_strncpy(pcVar3,"(unknown)",10);
  }
  return pcVar2;
}



/* Entry: 1099a9d38; end: 1099a9dcf;  */

void FUN_1099a9d38(void)

{
  ulong uVar1;
  char *pcVar2;
  
  uVar1 = uRam000000011374c0e0;
  if (-1 < (char)bRam000000011374c0ef) {
    uVar1 = (ulong)bRam000000011374c0ef;
  }
  if (uVar1 != 0) {
    return;
  }
  FUN_1099a9dd0(0x11374c0d8);
  uVar1 = uRam000000011374c0e0;
  if (-1 < (char)bRam000000011374c0ef) {
    uVar1 = (ulong)bRam000000011374c0ef;
  }
  if (uVar1 == 0) {
    if ((char)bRam000000011374c0ef < '\0') {
      uRam000000011374c0e0 = 9;
      pcVar2 = pcRam000000011374c0d8;
    }
    else {
      bRam000000011374c0ef = 9;
      pcVar2 = (char *)0x11374c0d8;
    }
    builtin_strncpy(pcVar2,"(unknown)",10);
  }
  return;
}



/* Entry: 1099a9dd0; end: 1099a9e47;  */

undefined8 * FUN_1099a9dd0(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puStack_568;
  undefined1 *puStack_560;
  undefined8 *puStack_558;
  undefined1 *puStack_550;
  code *pcStack_548;
  undefined1 auStack_538 [256];
  undefined1 auStack_438 [1024];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar1 = (int)auStack_538;
  _uname();
  if (iVar1 < 0) {
    auStack_438[0] = 0;
  }
  puVar2 = param_1;
  func_0x000107c2c4dc(param_1,auStack_438);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar2;
  }
  ___stack_chk_fail();
  pcStack_548 = FUN_1099a9e48;
  *puVar2 = &PTR_FUN_110b1f0b8;
  puVar4 = puVar2 + 1;
  puStack_568 = puVar4;
  puStack_560 = auStack_538;
  puStack_558 = param_1;
  puStack_550 = &stack0xfffffffffffffff0;
  if ((*(char *)(puVar2 + 0x1a) != '\x01') ||
     (puVar3 = puVar4, _pthread_rwlock_wrlock(), (int)puVar3 == 0)) {
    if (puVar2[0x25] != 0) {
      _fclose();
      puVar2[0x25] = 0;
    }
    FUN_1099ab9f4(&puStack_568);
    if (*(char *)((long)puVar2 + 0x127) < '\0') {
      __ZdlPv(puVar2[0x22]);
    }
    if (*(char *)((long)puVar2 + 0x10f) < '\0') {
      __ZdlPv(puVar2[0x1f]);
    }
    if (*(char *)((long)puVar2 + 0xf7) < '\0') {
      __ZdlPv(puVar2[0x1c]);
    }
    if ((*(char *)(puVar2 + 0x1a) != '\x01') ||
       (_pthread_rwlock_destroy(), puVar3 = puVar4, (int)puVar4 == 0)) {
      return puVar2;
    }
  }
  _abort();
  func_0x000104bd46a0();
  func_0x000104bd46a0();
  if (puVar3[0xea7] != (long)puVar3 + 4 && puVar3[0xea7] != 0) {
    __ZdaPv();
  }
  puVar3[0xea8] = &PTR_FUN_110b1f110;
  puVar3[0xeb3] = &PTR_DAT_110b1f138;
  puVar3[0xea9] = PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10;
  __ZNSt3__16localeD1Ev(puVar3 + 0xeaa);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(puVar3 + 0xea8,&PTR_PTR_110b1f150);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(puVar3 + 0xeb3);
  return puVar3;
}



/* Entry: 1099a9e48; end: 1099a9f07;  */

undefined8 * FUN_1099a9e48(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110b1f0b8;
  puVar2 = param_1 + 1;
  puStack_28 = puVar2;
  if ((*(char *)(param_1 + 0x1a) != '\x01') ||
     (puVar1 = puVar2, _pthread_rwlock_wrlock(), (int)puVar1 == 0)) {
    if (param_1[0x25] != 0) {
      _fclose();
      param_1[0x25] = 0;
    }
    FUN_1099ab9f4(&puStack_28);
    if (*(char *)((long)param_1 + 0x127) < '\0') {
      __ZdlPv(param_1[0x22]);
    }
    if (*(char *)((long)param_1 + 0x10f) < '\0') {
      __ZdlPv(param_1[0x1f]);
    }
    if (*(char *)((long)param_1 + 0xf7) < '\0') {
      __ZdlPv(param_1[0x1c]);
    }
    if ((*(char *)(param_1 + 0x1a) != '\x01') ||
       (_pthread_rwlock_destroy(), puVar1 = puVar2, (int)puVar2 == 0)) {
      return param_1;
    }
  }
  _abort();
  func_0x000104bd46a0();
  func_0x000104bd46a0();
  if (puVar1[0xea7] != (long)puVar1 + 4 && puVar1[0xea7] != 0) {
    __ZdaPv();
  }
  puVar1[0xea8] = &PTR_FUN_110b1f110;
  puVar1[0xeb3] = &PTR_DAT_110b1f138;
  puVar1[0xea9] = PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10;
  __ZNSt3__16localeD1Ev(puVar1 + 0xeaa);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(puVar1 + 0xea8,&PTR_PTR_110b1f150);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(puVar1 + 0xeb3);
  return puVar1;
}



/* Entry: 1099a9f08; end: 1099a9f0b;  */

long FUN_1099a9f08(long param_1)

{
  if (*(long *)(param_1 + 0x7538) != param_1 + 4 && *(long *)(param_1 + 0x7538) != 0) {
    __ZdaPv();
  }
  *(undefined ***)(param_1 + 0x7540) = &PTR_FUN_110b1f110;
  *(undefined ***)(param_1 + 0x7598) = &PTR_DAT_110b1f138;
  *(undefined **)(param_1 + 0x7548) =
       PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10;
  __ZNSt3__16localeD1Ev(param_1 + 0x7550);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(param_1 + 0x7540,&PTR_PTR_110b1f150);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(param_1 + 0x7598);
  return param_1;
}



/* Entry: 1099a9f0c; end: 1099aa6cb;  */

void FUN_1099a9f0c(undefined8 *param_1,long param_2,int param_3,int param_4,undefined8 param_5,
                  undefined8 param_6)

{
  code *pcVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  int iVar11;
  double dVar12;
  undefined1 uStack_180;
  undefined7 uStack_17f;
  undefined8 uStack_178;
  long lStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  long lStack_b8;
  undefined8 uStack_78;
  undefined4 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = 0;
  if (param_4 == 3) {
    puStack_100 = (undefined *)0x11374c2e0;
    if (cRam000000011374c3a8 != '\x01') {
LAB_1099a9f88:
      if ((bRam000000011374c028 & 1) == 0) {
        bRam000000011374c028 = 1;
        uVar6 = 0x11373d320;
        uRam0000000113744999 = 1;
      }
      else {
        uVar6 = 0x1137449a0;
        uRam000000011374c019 = 0;
      }
      param_1[1] = uVar6;
      ppuVar3 = &puStack_100;
      FUN_1099ab9f4();
      goto LAB_1099aa034;
    }
    iVar11 = 0x1374c2e0;
    _pthread_rwlock_wrlock();
    if (iVar11 == 0) goto LAB_1099a9f88;
  }
  else {
    ppuVar2 = &PTR___tlv_bootstrap_11340dd20;
    (*(code *)PTR___tlv_bootstrap_11340dd20)();
    if (*(char *)ppuVar2 == '\x01') {
      *(undefined1 *)ppuVar2 = 0;
      ppuVar2 = &PTR___tlv_bootstrap_11340dd38;
      (*(code *)PTR___tlv_bootstrap_11340dd38)();
      ppuVar3 = ppuVar2;
      func_0x000107c2ae20();
    }
    else {
      ppuVar2 = (undefined **)0x7680;
      __Znwm();
      ppuVar3 = ppuVar2;
      func_0x000107c2ae20();
      *param_1 = ppuVar2;
    }
    param_1[1] = ppuVar2;
    *(undefined1 *)((long)ppuVar2 + 0x7679) = 0;
LAB_1099aa034:
    ___error();
    puVar9 = (undefined4 *)param_1[1];
    *puVar9 = *(undefined4 *)ppuVar3;
    *(char *)(puVar9 + 0x1d8c) = (char)param_4;
    puVar9[0x1d8d] = param_3;
    *(undefined8 *)(puVar9 + 0x1d8e) = param_5;
    *(undefined8 *)(puVar9 + 0x1d90) = param_6;
    *(undefined8 *)(puVar9 + 0x1d92) = 0;
    *(undefined8 *)(param_1[1] + 0x7648) = 0;
    _gettimeofday(&puStack_100,0);
    dVar12 = (double)((long)(int)uStack_f8 + (long)puStack_100 * 1000000) * 1e-06;
    lStack_148 = (long)dVar12;
    if ((bRam000000011374c026 & 1) == 0) {
      _localtime_r(&lStack_148,&uStack_180);
    }
    else {
      _gmtime_r(&lStack_148,&uStack_180);
    }
    puStack_100 = (undefined *)CONCAT71(uStack_17f,uStack_180);
    uStack_f8 = uStack_178;
    uStack_e8 = uStack_168;
    lStack_f0 = lStack_170;
    uStack_d8 = uStack_158;
    uStack_e0 = uStack_160;
    uVar6 = uStack_e0;
    uStack_d0 = uStack_150;
    lStack_c8 = lStack_148;
    iStack_c0 = (int)((dVar12 - (double)lStack_148) * 1000000.0);
    if ((bRam000000011374c026 & 1) == 0) {
      uStack_e0._0_4_ = (int)uStack_160;
      iVar11 = (int)uStack_e0;
      uStack_e0 = uVar6;
      _gmtime_r(&lStack_c8,&puStack_140);
    }
    else {
      _localtime_r(&lStack_c8,&puStack_140);
      iVar11 = (int)uStack_120;
      uStack_138 = uStack_f8;
      puStack_140 = puStack_100;
      uStack_128 = uStack_e8;
      lStack_130 = lStack_f0;
      uStack_118 = uStack_d8;
      uStack_120 = uStack_e0;
      uStack_110 = uStack_d0;
    }
    ppuVar2 = &puStack_140;
    _mktime();
    lStack_b8 = 0;
    if (iVar11 != 0) {
      lStack_b8 = 0xe10;
    }
    lStack_b8 = (lStack_c8 - (long)ppuVar2) + lStack_b8;
    param_1[7] = uStack_d8;
    param_1[6] = uStack_e0;
    param_1[9] = lStack_c8;
    param_1[8] = uStack_d0;
    param_1[0xb] = lStack_b8;
    param_1[10] = CONCAT44(uStack_bc,iStack_c0);
    param_1[3] = uStack_f8;
    param_1[2] = puStack_100;
    param_1[5] = uStack_e8;
    param_1[4] = lStack_f0;
    lVar7 = param_1[1];
    *(undefined8 *)(lVar7 + 0x7660) = 0;
    *(undefined8 *)(lVar7 + 0x7658) = 0;
    lVar8 = param_2;
    _strrchr(param_2,0x2f);
    lVar7 = param_2;
    if (lVar8 != 0) {
      lVar7 = lVar8 + 1;
    }
    lVar8 = param_1[1];
    *(long *)(lVar8 + 0x7668) = lVar7;
    *(long *)(lVar8 + 0x7670) = param_2;
    *(undefined1 *)(lVar8 + 0x7678) = 0;
    if ((param_3 != -1) && ((bRam000000011374c023 & 1) != 0)) {
      puStack_100 = PTR___ZTVNSt3__19basic_iosIcNS_11char_traitsIcEEEE_110346b40 + 0x10;
      uStack_d0 = 0;
      __ZNSt3__18ios_base4initEPv(&puStack_100,0);
      uStack_78 = 0;
      uStack_70 = 0xffffffff;
      __ZNSt3__19basic_iosIcNS_11char_traitsIcEEE7copyfmtERKS3_
                (&puStack_100,
                 param_1[1] + 0x7540 + *(long *)(*(long *)(param_1[1] + 0x7540) + -0x18));
      lVar8 = param_1[1];
      lVar7 = lVar8 + 0x7540 + *(long *)(*(long *)(lVar8 + 0x7540) + -0x18);
      if (*(int *)(lVar7 + 0x90) == -1) {
        __ZNKSt3__18ios_base6getlocEv(&puStack_140,lVar7);
        ppuVar2 = &puStack_140;
        __ZNKSt3__16locale9use_facetERNS0_2idE(ppuVar2,PTR___ZNSt3__15ctypeIcE2idE_110346770);
        (**(code **)(*ppuVar2 + 0x38))();
        __ZNSt3__16localeD1Ev(&puStack_140);
        *(int *)(lVar7 + 0x90) = (int)ppuVar2;
        lVar8 = param_1[1];
      }
      *(undefined4 *)(lVar7 + 0x90) = 0x30;
      puStack_140 = (undefined *)CONCAT71(puStack_140._1_7_,*(&PTR_DAT_110b1f060)[param_4]);
      FUN_1092b4db8(lVar8 + 0x7540,&puStack_140,1);
      if ((bRam000000011374c024 & 1) != 0) {
        lVar7 = param_1[1] + 0x7540;
        *(undefined8 *)(lVar7 + *(long *)(*(long *)(param_1[1] + 0x7540) + -0x18) + 0x18) = 4;
        __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi
                  (lVar7,*(int *)((long)param_1 + 0x24) + 0x76c);
      }
      plVar4 = (long *)(param_1[1] + 0x7540);
      *(undefined8 *)((long)plVar4 + *(long *)(*(long *)(param_1[1] + 0x7540) + -0x18) + 0x18) = 2;
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(plVar4,*(int *)(param_1 + 4) + 1);
      *(undefined8 *)((long)plVar4 + *(long *)(*plVar4 + -0x18) + 0x18) = 2;
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
      puStack_140._0_1_ = 0x20;
      FUN_1092b4db8();
      *(undefined8 *)((long)plVar4 + *(long *)(*plVar4 + -0x18) + 0x18) = 2;
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
      puStack_140._0_1_ = 0x3a;
      FUN_1092b4db8();
      *(undefined8 *)((long)plVar4 + *(long *)(*plVar4 + -0x18) + 0x18) = 2;
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
      puStack_140._0_1_ = 0x3a;
      FUN_1092b4db8();
      *(undefined8 *)((long)plVar4 + *(long *)(*plVar4 + -0x18) + 0x18) = 2;
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
      FUN_1092b4db8();
      *(undefined8 *)((long)plVar4 + *(long *)(*plVar4 + -0x18) + 0x18) = 6;
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
      puStack_140._0_1_ = 0x20;
      FUN_1092b4db8();
      uStack_180 = 0x20;
      FUN_1092bf390();
      *(undefined8 *)((long)plVar4 + *(long *)(*plVar4 + -0x18) + 0x18) = 5;
      plVar5 = plVar4;
      FUN_1099ad8f4();
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(plVar4,plVar5);
      lStack_148 = CONCAT71(lStack_148._1_7_,0x30);
      FUN_1092bf390();
      puStack_140._0_1_ = 0x20;
      FUN_1092b4db8();
      uVar10 = *(undefined8 *)(param_1[1] + 0x7668);
      uVar6 = uVar10;
      _strlen(uVar10);
      FUN_1092b4db8(plVar4,uVar10,uVar6);
      puStack_140 = (undefined *)CONCAT71(puStack_140._1_7_,0x3a);
      FUN_1092b4db8();
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
      FUN_1092b4db8();
      __ZNSt3__19basic_iosIcNS_11char_traitsIcEEE7copyfmtERKS3_
                (param_1[1] + 0x7540 + *(long *)(*(long *)(param_1[1] + 0x7540) + -0x18),
                 &puStack_100);
      __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED1Ev(&puStack_100);
      lVar8 = param_1[1];
    }
    *(long *)(lVar8 + 0x7650) = *(long *)(lVar8 + 0x7578) - *(long *)(lVar8 + 0x7570);
    ppuVar2 = ppuRam000000011374c0b0;
    if (-1 < (char)bRam000000011374c0bf) {
      ppuVar2 = (undefined **)(ulong)bRam000000011374c0bf;
    }
    if (ppuVar2 != (undefined **)0x0) {
      _snprintf(&puStack_100,0x80,&UNK_10f5196ec);
      ppuVar2 = &puStack_100;
      _strlen();
      if ((long)(char)bRam000000011374c0bf < 0) {
        if (ppuVar2 == ppuRam000000011374c0b0) {
          uVar6 = uRam000000011374c0a8;
          if (ppuVar2 == (undefined **)0xffffffffffffffff) goto LAB_1099aa62c;
          goto LAB_1099aa56c;
        }
      }
      else if (ppuVar2 == (undefined **)(long)(char)bRam000000011374c0bf) {
        uVar6 = 0x11374c0a8;
LAB_1099aa56c:
        _memcmp(uVar6,&puStack_100);
        if ((int)uVar6 == 0) {
          puStack_140 = (undefined *)0x0;
          uStack_138 = 0;
          lStack_130 = 0;
          FUN_1099ad948(FUN_1099ada40,&puStack_140);
          FUN_1092b4db8(param_1[1] + 0x7540,&UNK_10f5936ef,0xe);
          FUN_1092b4db8();
          FUN_1092b4db8();
          if (lStack_130 < 0) {
            __ZdlPv(puStack_140);
          }
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
    ___stack_chk_fail();
  }
  _abort();
LAB_1099aa62c:
  func_0x000109276104();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1099aa634);
  (*pcVar1)();
}



/* Entry: 1099aa6cc; end: 1099aa767;  */

undefined8 * FUN_1099aa6cc(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[0xb] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  FUN_1099a9f0c();
  FUN_1092b4db8(param_1[1] + 0x7540,&UNK_10f5936de,0xe);
  FUN_1092b4db8();
  FUN_1092b4db8();
  return param_1;
}



/* Entry: 1099aa768; end: 1099ab33b;  */

/* WARNING: Removing unreachable block (ram,0x0001099ab050) */
/* WARNING: Removing unreachable block (ram,0x0001099aaf44) */
/* WARNING: Removing unreachable block (ram,0x0001099aac64) */
/* WARNING: Removing unreachable block (ram,0x0001099aac74) */
/* WARNING: Removing unreachable block (ram,0x0001099aac84) */
/* WARNING: Removing unreachable block (ram,0x0001099ab028) */
/* WARNING: Removing unreachable block (ram,0x0001099ab060) */

void FUN_1099aa768(long param_1)

{
  char ***pppcVar1;
  undefined8 ***pppuVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 ***pppuVar9;
  undefined8 ***pppuVar10;
  undefined8 **ppuVar11;
  long *plVar12;
  byte bVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  uint uVar17;
  ulong uVar18;
  long extraout_x8;
  long lVar19;
  int iVar20;
  undefined8 uVar21;
  undefined *puVar22;
  long lVar23;
  undefined8 **ppuStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 **ppuStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  char **ppcStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  undefined8 auStack_1a8 [2];
  char cStack_191;
  undefined8 **ppuStack_190;
  ulong uStack_188;
  byte bStack_179;
  undefined8 auStack_178 [2];
  char cStack_161;
  undefined8 **ppuStack_160;
  ulong uStack_158;
  byte bStack_149;
  undefined8 **appuStack_148 [2];
  char cStack_131;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 **ppuStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined2 uStack_90;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (((bRam000000011374c029 & 1) == 0) && (puRam000000011382bae0 == (undefined *)0x0)) {
    uStack_90 = 10;
    uStack_c8 = 0x676e6967676f4c20;
    ppuStack_d0 = (undefined8 **)0x3a474e494e524157;
    uStack_b8 = 0x676f6f4774696e49;
    uStack_c0 = 0x2065726f66656220;
    uStack_a8 = 0x7720736920292867;
    uStack_b0 = 0x6e6967676f4c656c;
    uStack_98 = 0x525245445453206f;
    uStack_a0 = 0x74206e6574746972;
    _fwrite(&ppuStack_d0,0x41,1,*(undefined8 *)PTR____stderrp_11034bdc8);
    bRam000000011374c029 = 1;
  }
  puVar8 = (undefined8 *)PTR____stderrp_11034bdc8;
  if ((bRam000000011382bab8 & 1) == 0) {
    if (bRam000000011382baba != 0) {
      lVar19 = *(long *)(param_1 + 8);
      uVar14 = (ulong)*(char *)(lVar19 + 0x7630);
      uVar15 = *(undefined8 *)(lVar19 + 0x7538);
      uVar16 = *(undefined8 *)(lVar19 + 0x7658);
      goto LAB_1099aa84c;
    }
    lVar19 = *(long *)(param_1 + 8);
    bVar13 = *(byte *)(lVar19 + 0x7630);
    uVar14 = (ulong)(uint)(int)(char)bVar13;
    if (puRam000000011382bae0 == (undefined *)0x0) {
      uVar15 = *(undefined8 *)(lVar19 + 0x7538);
      uVar16 = *(undefined8 *)(lVar19 + 0x7658);
      goto LAB_1099aaa80;
    }
    uVar15 = *(undefined8 *)(lVar19 + 0x7538);
    uVar16 = *(undefined8 *)(lVar19 + 0x7658);
    if (-1 < (char)bVar13) {
      uVar21 = *(undefined8 *)(param_1 + 0x48);
      uVar14 = (ulong)bVar13;
      do {
        lVar23 = (long)iRam000000011374c030;
        lVar19 = *(long *)(uVar14 * 8 + 0x11382bac0);
        if (lVar19 == 0) {
          plVar12 = (long *)0x160;
          __Znwm();
          *plVar12 = (long)&PTR_FUN_110b1f0b8;
          *(undefined1 *)(plVar12 + 0x1a) = 1;
          if ((char)plVar12[0x1a] == '\x01') {
            plVar6 = plVar12 + 1;
            _pthread_rwlock_init(plVar6,0);
            if ((int)plVar6 != 0) goto LAB_1099ab0c0;
          }
          *(undefined1 *)(plVar12 + 0x1b) = 0;
          func_0x000107c31940(plVar12 + 0x1c,"");
          puVar7 = &UNK_10f5939fb;
          if (puRam000000011382bae0 != (undefined *)0x0) {
            puVar7 = puRam000000011382bae0;
          }
          func_0x000107c31940(plVar12 + 0x1f,puVar7);
          plVar12[0x23] = 0;
          plVar12[0x22] = 0;
          plVar12[0x25] = 0;
          plVar12[0x24] = 0;
          *(int *)(plVar12 + 0x26) = (int)uVar14;
          *(undefined8 *)((long)plVar12 + 0x13c) = 0x1f00000000;
          *(undefined8 *)((long)plVar12 + 0x134) = 0;
          plVar12[0x29] = 0;
          _gettimeofday(&ppuStack_d0,0);
          plVar12[0x2a] =
               (long)((double)((long)(int)uStack_c8 + (long)ppuStack_d0 * 1000000) * 1e-06);
          plVar12[0x2b] = (long)plVar12;
          *(long **)(uVar14 * 8 + 0x11382bac0) = plVar12;
        }
        else {
          plVar12 = *(long **)(lVar19 + 0x158);
        }
        (**(code **)(*plVar12 + 0x10))(plVar12,lVar23 < (long)uVar14,uVar21,uVar15,uVar16);
        bVar4 = 0 < (long)uVar14;
        uVar14 = uVar14 - 1;
      } while (bVar4);
      lVar19 = *(long *)(param_1 + 8);
      bVar13 = *(byte *)(lVar19 + 0x7630);
      uVar15 = *(undefined8 *)(lVar19 + 0x7538);
      uVar16 = *(undefined8 *)(lVar19 + 0x7658);
    }
    iVar20 = (int)(char)bVar13;
    if ((iRam00000001132e8070 <= (char)bVar13) || ((bRam000000011382bab9 & 1) != 0)) {
      FUN_1099ad5e8(*(undefined8 *)PTR____stderrp_11034bdc8,iVar20,uVar15,uVar16);
      lVar19 = *(long *)(param_1 + 8);
      iVar20 = (int)*(char *)(lVar19 + 0x7630);
      uVar15 = *(undefined8 *)(lVar19 + 0x7538);
      uVar16 = *(undefined8 *)(lVar19 + 0x7658);
    }
    if (iRam000000011374c034 <= iVar20) {
      if (cRam000000011374c05f < '\0') {
        func_0x000107c3192c(&ppcStack_1c0,pppcRam000000011374c048,uRam000000011374c050);
      }
      else {
        uStack_1b8 = uRam000000011374c050;
        ppcStack_1c0 = (char **)pppcRam000000011374c048;
        uStack_1b0 = CONCAT17(cRam000000011374c05f,uRam000000011374c058);
      }
      uVar18 = (ulong)bRam000000011374c0d7;
      uVar14 = uRam000000011374c0c8;
      if (-1 < (char)bRam000000011374c0d7) {
        uVar14 = uVar18;
      }
      if (uVar14 != 0) {
        uVar14 = uStack_1b8;
        if (-1 < (long)uStack_1b0) {
          uVar14 = uStack_1b0 >> 0x38;
        }
        if (uVar14 != 0) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (&ppcStack_1c0,&DAT_10f68e8ee,1);
          uVar18 = (ulong)bRam000000011374c0d7;
        }
        uVar14 = uRam000000011374c0c8;
        uVar21 = uRam000000011374c0c0;
        if (-1 < (char)bRam000000011374c0d7) {
          uVar14 = uVar18;
          uVar21 = 0x11374c0c0;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&ppcStack_1c0,uVar21,uVar14);
      }
      func_0x000107c31940(&uStack_110,&UNK_10f593967);
      puVar22 = (&PTR_DAT_110b1f060)[iVar20];
      puVar7 = puVar22;
      _strlen(puVar22);
      puVar8 = &uStack_110;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar8,puVar22,puVar7);
      uStack_e8 = puVar8[1];
      uStack_f0 = *puVar8;
      uStack_e0 = puVar8[2];
      puVar8[1] = 0;
      puVar8[2] = 0;
      *puVar8 = 0;
      puVar8 = &uStack_f0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar8,": ",2);
      uStack_c8 = puVar8[1];
      ppuStack_d0 = (undefined8 **)*puVar8;
      uStack_c0 = puVar8[2];
      puVar8[1] = 0;
      puVar8[2] = 0;
      *puVar8 = 0;
      puVar7 = &UNK_10f5939fb;
      if (puRam000000011382bae0 != (undefined *)0x0) {
        puVar7 = puRam000000011382bae0;
      }
      puVar22 = puVar7;
      _strlen(puVar7);
      pppuVar9 = &ppuStack_d0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppuVar9,puVar7,puVar22);
      puStack_1d8 = pppuVar9[1];
      ppuStack_1e0 = *pppuVar9;
      puStack_1d0 = pppuVar9[2];
      pppuVar9[1] = (undefined8 **)0x0;
      pppuVar9[2] = (undefined8 **)0x0;
      *pppuVar9 = (undefined8 **)0x0;
      FUN_1099a9d38();
      if (cRam000000011374c0ef < '\0') {
        func_0x000107c3192c(&ppuStack_200,pppuRam000000011374c0d8,uRam000000011374c0e0);
      }
      else {
        uStack_1f8 = uRam000000011374c0e0;
        ppuStack_200 = pppuRam000000011374c0d8;
        uStack_1f0 = CONCAT17(cRam000000011374c0ef,uRam000000011374c0e8);
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&ppuStack_200,&DAT_10f590110,2);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&ppuStack_200,uVar15,uVar16);
      puVar7 = PTR____stderrp_11034bdc8;
      pppcVar1 = (char ***)ppcStack_1c0;
      if (-1 < (long)uStack_1b0) {
        pppcVar1 = &ppcStack_1c0;
      }
      pppuVar9 = (undefined8 ***)ppuStack_1e0;
      if (-1 < (long)puStack_1d0) {
        pppuVar9 = &ppuStack_1e0;
      }
      uVar17 = (uint)uStack_1f0._7_1_;
      pppuVar2 = (undefined8 ***)ppuStack_200;
      if (-1 < uStack_1f0) {
        pppuVar2 = &ppuStack_200;
      }
      if ((pppcVar1 != (char ***)0x0) && (*(char *)pppcVar1 != '\0')) {
        _fprintf(*(undefined8 *)PTR____stderrp_11034bdc8,&UNK_10f59396e);
        if (cRam000000011374c077 < '\0') {
          func_0x000107c3192c(&ppuStack_d0,pppuRam000000011374c060,uRam000000011374c068);
        }
        else {
          uStack_c8 = uRam000000011374c068;
          ppuStack_d0 = pppuRam000000011374c060;
          uStack_c0 = CONCAT17(cRam000000011374c077,uRam000000011374c070);
        }
        uVar18 = (ulong)uStack_c0._7_1_;
        uVar14 = uStack_c8;
        if (-1 < uStack_c0) {
          uVar14 = uVar18;
        }
        if (uVar14 == 0) {
          if (uStack_c0 < 0) {
            uStack_c8 = 9;
            pppuVar10 = (undefined8 ***)ppuStack_d0;
          }
          else {
            uStack_c0 = CONCAT17(9,(undefined7)uStack_c0);
            pppuVar10 = &ppuStack_d0;
          }
          *(undefined2 *)(pppuVar10 + 1) = 0x6c;
          *pppuVar10 = (undefined8 **)0x69616d2f6e69622f;
          uVar18 = (ulong)uStack_c0._7_1_;
        }
        uVar14 = uStack_c8;
        if (-1 < (char)uStack_c0._7_1_) {
          uVar14 = uVar18;
        }
        func_0x000104c4f768(appuStack_148,uVar14 + 3,&ppuStack_160);
        pppuVar10 = (undefined8 ***)appuStack_148[0];
        if (-1 < cStack_131) {
          pppuVar10 = appuStack_148;
        }
        if (uVar14 != 0) {
          _memmove(pppuVar10,&ppuStack_d0,uVar14);
        }
        *(undefined4 *)((long)pppuVar10 + uVar14) = 0x732d20;
        func_0x000107c31940(auStack_178,pppuVar9);
        FUN_1099ad6d4(&ppuStack_160,auStack_178);
        pppuVar9 = (undefined8 ***)ppuStack_160;
        if (-1 < (char)bStack_149) {
          uStack_158 = (ulong)bStack_149;
          pppuVar9 = &ppuStack_160;
        }
        pppuVar10 = appuStack_148;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (pppuVar10,pppuVar9,uStack_158);
        puStack_128 = pppuVar10[1];
        puStack_130 = *pppuVar10;
        puStack_120 = pppuVar10[2];
        pppuVar10[1] = (undefined8 **)0x0;
        pppuVar10[2] = (undefined8 **)0x0;
        *pppuVar10 = (undefined8 **)0x0;
        ppuVar11 = &puStack_130;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (ppuVar11,&UNK_10f5936ed,1);
        uStack_108 = ppuVar11[1];
        uStack_110 = *ppuVar11;
        uStack_100 = ppuVar11[2];
        ppuVar11[1] = (undefined8 *)0x0;
        ppuVar11[2] = (undefined8 *)0x0;
        *ppuVar11 = (undefined8 *)0x0;
        func_0x000107c31940(auStack_1a8,pppcVar1);
        FUN_1099ad6d4(&ppuStack_190,auStack_1a8);
        pppuVar9 = (undefined8 ***)ppuStack_190;
        if (-1 < (char)bStack_179) {
          uStack_188 = (ulong)bStack_179;
          pppuVar9 = &ppuStack_190;
        }
        puVar8 = &uStack_110;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (puVar8,pppuVar9,uStack_188);
        uStack_e8 = puVar8[1];
        uStack_f0 = *puVar8;
        uStack_e0 = puVar8[2];
        puVar8[1] = 0;
        puVar8[2] = 0;
        *puVar8 = 0;
        if ((char)bStack_179 < '\0') {
          __ZdlPv(ppuStack_190);
        }
        if (cStack_191 < '\0') {
          __ZdlPv(auStack_1a8[0]);
        }
        if ((long)puStack_120 < 0) {
          __ZdlPv(puStack_130);
        }
        if ((char)bStack_149 < '\0') {
          __ZdlPv(ppuStack_160);
        }
        if (cStack_161 < '\0') {
          __ZdlPv(auStack_178[0]);
        }
        if (cStack_131 < '\0') {
          __ZdlPv(appuStack_148[0]);
        }
        puVar8 = &uStack_f0;
        _popen(puVar8,&DAT_10f30a8bb);
        if (puVar8 == (undefined8 *)0x0) {
          _fprintf(*(undefined8 *)puVar7,&UNK_10f5939c2);
        }
        else {
          if (pppuVar2 != (undefined8 ***)0x0) {
            pppuVar9 = pppuVar2;
            _strlen(pppuVar2);
            _fwrite(pppuVar2,1,pppuVar9,puVar8);
          }
          _pclose();
          if ((int)puVar8 == -1) {
            uVar15 = *(undefined8 *)puVar7;
            ___error();
            FUN_1099ab7cc(&uStack_110,*(undefined4 *)puVar8);
            _fprintf(uVar15,&UNK_10f5939a1);
          }
        }
        uVar17 = (uint)(byte)((ulong)uStack_1f0 >> 0x38);
      }
      if ((uVar17 >> 7 & 1) != 0) {
        __ZdlPv(ppuStack_200);
      }
      if ((long)puStack_1d0 < 0) {
        __ZdlPv(ppuStack_1e0);
      }
      if ((long)uStack_1b0 < 0) {
        __ZdlPv(ppcStack_1c0);
      }
    }
    ppuStack_d0 = (undefined8 **)0x11374c210;
    if (cRam000000011374c2d8 == '\x01') {
      iVar20 = 0x1374c210;
      _pthread_rwlock_rdlock();
      if (iVar20 != 0) goto LAB_1099ab0c0;
    }
LAB_1099aaab0:
    FUN_1099ad5a8(&ppuStack_d0);
    lVar19 = *(long *)(param_1 + 8) + 0x7000;
    if (*(char *)(*(long *)(param_1 + 8) + 0x7630) != '\x03') {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
        return;
      }
      ___stack_chk_fail();
LAB_1099ab0fc:
      ClearExclusiveLocal();
      goto LAB_1099ab100;
    }
  }
  else {
    lVar19 = *(long *)(param_1 + 8);
    uVar14 = (ulong)*(char *)(lVar19 + 0x7630);
    uVar15 = *(undefined8 *)(lVar19 + 0x7538);
    uVar16 = *(undefined8 *)(lVar19 + 0x7658);
    if (bRam000000011382baba != 0) {
LAB_1099aa84c:
      puVar8 = (undefined8 *)PTR____stdoutp_11034bdd8;
      if (iRam00000001132e8070 <= (int)uVar14) {
        puVar8 = (undefined8 *)PTR____stderrp_11034bdc8;
      }
    }
LAB_1099aaa80:
    FUN_1099ad5e8(*puVar8,uVar14,uVar15,uVar16);
    ppuStack_d0 = (undefined8 **)0x11374c210;
    if (cRam000000011374c2d8 != '\x01') goto LAB_1099aaab0;
    iVar20 = 0x1374c210;
    _pthread_rwlock_rdlock();
    if (iVar20 == 0) goto LAB_1099aaab0;
LAB_1099ab0c0:
    _abort();
    lVar19 = extraout_x8;
  }
  if (*(char *)(lVar19 + 0x679) == '\x01') {
    func_0x0001099ab6f4();
    do {
      if (lRam000000011382bb08 != 0) goto LAB_1099ab0fc;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(0x11382bb08,0x10);
      if (bVar4) {
        lRam000000011382bb08 = 0x11374c3b0;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
LAB_1099ab100:
  if (((bRam000000011382bab8 & 1) == 0) && ((bRam000000011382baba & 1) == 0)) {
    lVar19 = 0;
    do {
      if (*(long *)(lVar19 + 0x11382bac0) != 0) {
        plVar12 = *(long **)(*(long *)(lVar19 + 0x11382bac0) + 0x158);
        (**(code **)(*plVar12 + 0x10))(plVar12,1,0,"",0);
      }
      lVar19 = lVar19 + 8;
    } while (lVar19 != 0x20);
  }
  func_0x0001099ab78c();
  FUN_1099ab638(*(undefined8 *)(param_1 + 8));
  _write(2,&UNK_10f593740,0x23);
  (*(code *)PTR__abort_1132e8078)();
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1099ab194);
  (*pcVar5)();
}



/* Entry: 1099ab33c; end: 1099ab35f;  */

/* WARNING: Removing unreachable block (ram,0x0001099ab050) */
/* WARNING: Removing unreachable block (ram,0x0001099aaf44) */
/* WARNING: Removing unreachable block (ram,0x0001099aac64) */
/* WARNING: Removing unreachable block (ram,0x0001099aac74) */
/* WARNING: Removing unreachable block (ram,0x0001099aac84) */
/* WARNING: Removing unreachable block (ram,0x0001099ab028) */
/* WARNING: Removing unreachable block (ram,0x0001099ab060) */

void FUN_1099ab33c(long param_1)

{
  char ***pppcVar1;
  undefined8 ***pppuVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 ***pppuVar9;
  undefined8 ***pppuVar10;
  undefined8 **ppuVar11;
  long *plVar12;
  byte bVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  uint uVar17;
  ulong uVar18;
  long extraout_x8;
  long lVar19;
  int iVar20;
  undefined8 uVar21;
  undefined *puVar22;
  long lVar23;
  undefined8 **ppuStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 **ppuStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  char **ppcStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  undefined8 auStack_1a8 [2];
  char cStack_191;
  undefined8 **ppuStack_190;
  ulong uStack_188;
  byte bStack_179;
  undefined8 auStack_178 [2];
  char cStack_161;
  undefined8 **ppuStack_160;
  ulong uStack_158;
  byte bStack_149;
  undefined8 **appuStack_148 [2];
  char cStack_131;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 **ppuStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined2 uStack_90;
  long lStack_80;
  
  FUN_1099ab360();
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (((bRam000000011374c029 & 1) == 0) && (puRam000000011382bae0 == (undefined *)0x0)) {
    uStack_90 = 10;
    uStack_c8 = 0x676e6967676f4c20;
    ppuStack_d0 = (undefined8 **)0x3a474e494e524157;
    uStack_b8 = 0x676f6f4774696e49;
    uStack_c0 = 0x2065726f66656220;
    uStack_a8 = 0x7720736920292867;
    uStack_b0 = 0x6e6967676f4c656c;
    uStack_98 = 0x525245445453206f;
    uStack_a0 = 0x74206e6574746972;
    _fwrite(&ppuStack_d0,0x41,1,*(undefined8 *)PTR____stderrp_11034bdc8);
    bRam000000011374c029 = 1;
  }
  puVar8 = (undefined8 *)PTR____stderrp_11034bdc8;
  if ((bRam000000011382bab8 & 1) == 0) {
    if (bRam000000011382baba != 0) {
      lVar19 = *(long *)(param_1 + 8);
      uVar14 = (ulong)*(char *)(lVar19 + 0x7630);
      uVar15 = *(undefined8 *)(lVar19 + 0x7538);
      uVar16 = *(undefined8 *)(lVar19 + 0x7658);
      goto LAB_1099aa84c;
    }
    lVar19 = *(long *)(param_1 + 8);
    bVar13 = *(byte *)(lVar19 + 0x7630);
    uVar14 = (ulong)(uint)(int)(char)bVar13;
    if (puRam000000011382bae0 == (undefined *)0x0) {
      uVar15 = *(undefined8 *)(lVar19 + 0x7538);
      uVar16 = *(undefined8 *)(lVar19 + 0x7658);
      goto LAB_1099aaa80;
    }
    uVar15 = *(undefined8 *)(lVar19 + 0x7538);
    uVar16 = *(undefined8 *)(lVar19 + 0x7658);
    if (-1 < (char)bVar13) {
      uVar21 = *(undefined8 *)(param_1 + 0x48);
      uVar14 = (ulong)bVar13;
      do {
        lVar23 = (long)iRam000000011374c030;
        lVar19 = *(long *)(uVar14 * 8 + 0x11382bac0);
        if (lVar19 == 0) {
          plVar12 = (long *)0x160;
          __Znwm();
          *plVar12 = (long)&PTR_FUN_110b1f0b8;
          *(undefined1 *)(plVar12 + 0x1a) = 1;
          if ((char)plVar12[0x1a] == '\x01') {
            plVar6 = plVar12 + 1;
            _pthread_rwlock_init(plVar6,0);
            if ((int)plVar6 != 0) goto LAB_1099ab0c0;
          }
          *(undefined1 *)(plVar12 + 0x1b) = 0;
          func_0x000107c31940(plVar12 + 0x1c,"");
          puVar7 = &UNK_10f5939fb;
          if (puRam000000011382bae0 != (undefined *)0x0) {
            puVar7 = puRam000000011382bae0;
          }
          func_0x000107c31940(plVar12 + 0x1f,puVar7);
          plVar12[0x23] = 0;
          plVar12[0x22] = 0;
          plVar12[0x25] = 0;
          plVar12[0x24] = 0;
          *(int *)(plVar12 + 0x26) = (int)uVar14;
          *(undefined8 *)((long)plVar12 + 0x13c) = 0x1f00000000;
          *(undefined8 *)((long)plVar12 + 0x134) = 0;
          plVar12[0x29] = 0;
          _gettimeofday(&ppuStack_d0,0);
          plVar12[0x2a] =
               (long)((double)((long)(int)uStack_c8 + (long)ppuStack_d0 * 1000000) * 1e-06);
          plVar12[0x2b] = (long)plVar12;
          *(long **)(uVar14 * 8 + 0x11382bac0) = plVar12;
        }
        else {
          plVar12 = *(long **)(lVar19 + 0x158);
        }
        (**(code **)(*plVar12 + 0x10))(plVar12,lVar23 < (long)uVar14,uVar21,uVar15,uVar16);
        bVar4 = 0 < (long)uVar14;
        uVar14 = uVar14 - 1;
      } while (bVar4);
      lVar19 = *(long *)(param_1 + 8);
      bVar13 = *(byte *)(lVar19 + 0x7630);
      uVar15 = *(undefined8 *)(lVar19 + 0x7538);
      uVar16 = *(undefined8 *)(lVar19 + 0x7658);
    }
    iVar20 = (int)(char)bVar13;
    if ((iRam00000001132e8070 <= (char)bVar13) || ((bRam000000011382bab9 & 1) != 0)) {
      FUN_1099ad5e8(*(undefined8 *)PTR____stderrp_11034bdc8,iVar20,uVar15,uVar16);
      lVar19 = *(long *)(param_1 + 8);
      iVar20 = (int)*(char *)(lVar19 + 0x7630);
      uVar15 = *(undefined8 *)(lVar19 + 0x7538);
      uVar16 = *(undefined8 *)(lVar19 + 0x7658);
    }
    if (iRam000000011374c034 <= iVar20) {
      if (cRam000000011374c05f < '\0') {
        func_0x000107c3192c(&ppcStack_1c0,pppcRam000000011374c048,uRam000000011374c050);
      }
      else {
        uStack_1b8 = uRam000000011374c050;
        ppcStack_1c0 = (char **)pppcRam000000011374c048;
        uStack_1b0 = CONCAT17(cRam000000011374c05f,uRam000000011374c058);
      }
      uVar18 = (ulong)bRam000000011374c0d7;
      uVar14 = uRam000000011374c0c8;
      if (-1 < (char)bRam000000011374c0d7) {
        uVar14 = uVar18;
      }
      if (uVar14 != 0) {
        uVar14 = uStack_1b8;
        if (-1 < (long)uStack_1b0) {
          uVar14 = uStack_1b0 >> 0x38;
        }
        if (uVar14 != 0) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (&ppcStack_1c0,&DAT_10f68e8ee,1);
          uVar18 = (ulong)bRam000000011374c0d7;
        }
        uVar14 = uRam000000011374c0c8;
        uVar21 = uRam000000011374c0c0;
        if (-1 < (char)bRam000000011374c0d7) {
          uVar14 = uVar18;
          uVar21 = 0x11374c0c0;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&ppcStack_1c0,uVar21,uVar14);
      }
      func_0x000107c31940(&uStack_110,&UNK_10f593967);
      puVar22 = (&PTR_DAT_110b1f060)[iVar20];
      puVar7 = puVar22;
      _strlen(puVar22);
      puVar8 = &uStack_110;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar8,puVar22,puVar7);
      uStack_e8 = puVar8[1];
      uStack_f0 = *puVar8;
      uStack_e0 = puVar8[2];
      puVar8[1] = 0;
      puVar8[2] = 0;
      *puVar8 = 0;
      puVar8 = &uStack_f0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar8,": ",2);
      uStack_c8 = puVar8[1];
      ppuStack_d0 = (undefined8 **)*puVar8;
      uStack_c0 = puVar8[2];
      puVar8[1] = 0;
      puVar8[2] = 0;
      *puVar8 = 0;
      puVar7 = &UNK_10f5939fb;
      if (puRam000000011382bae0 != (undefined *)0x0) {
        puVar7 = puRam000000011382bae0;
      }
      puVar22 = puVar7;
      _strlen(puVar7);
      pppuVar9 = &ppuStack_d0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppuVar9,puVar7,puVar22);
      puStack_1d8 = pppuVar9[1];
      ppuStack_1e0 = *pppuVar9;
      puStack_1d0 = pppuVar9[2];
      pppuVar9[1] = (undefined8 **)0x0;
      pppuVar9[2] = (undefined8 **)0x0;
      *pppuVar9 = (undefined8 **)0x0;
      FUN_1099a9d38();
      if (cRam000000011374c0ef < '\0') {
        func_0x000107c3192c(&ppuStack_200,pppuRam000000011374c0d8,uRam000000011374c0e0);
      }
      else {
        uStack_1f8 = uRam000000011374c0e0;
        ppuStack_200 = pppuRam000000011374c0d8;
        uStack_1f0 = CONCAT17(cRam000000011374c0ef,uRam000000011374c0e8);
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&ppuStack_200,&DAT_10f590110,2);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&ppuStack_200,uVar15,uVar16);
      puVar7 = PTR____stderrp_11034bdc8;
      pppcVar1 = (char ***)ppcStack_1c0;
      if (-1 < (long)uStack_1b0) {
        pppcVar1 = &ppcStack_1c0;
      }
      pppuVar9 = (undefined8 ***)ppuStack_1e0;
      if (-1 < (long)puStack_1d0) {
        pppuVar9 = &ppuStack_1e0;
      }
      uVar17 = (uint)uStack_1f0._7_1_;
      pppuVar2 = (undefined8 ***)ppuStack_200;
      if (-1 < uStack_1f0) {
        pppuVar2 = &ppuStack_200;
      }
      if ((pppcVar1 != (char ***)0x0) && (*(char *)pppcVar1 != '\0')) {
        _fprintf(*(undefined8 *)PTR____stderrp_11034bdc8,&UNK_10f59396e);
        if (cRam000000011374c077 < '\0') {
          func_0x000107c3192c(&ppuStack_d0,pppuRam000000011374c060,uRam000000011374c068);
        }
        else {
          uStack_c8 = uRam000000011374c068;
          ppuStack_d0 = pppuRam000000011374c060;
          uStack_c0 = CONCAT17(cRam000000011374c077,uRam000000011374c070);
        }
        uVar18 = (ulong)uStack_c0._7_1_;
        uVar14 = uStack_c8;
        if (-1 < uStack_c0) {
          uVar14 = uVar18;
        }
        if (uVar14 == 0) {
          if (uStack_c0 < 0) {
            uStack_c8 = 9;
            pppuVar10 = (undefined8 ***)ppuStack_d0;
          }
          else {
            uStack_c0 = CONCAT17(9,(undefined7)uStack_c0);
            pppuVar10 = &ppuStack_d0;
          }
          *(undefined2 *)(pppuVar10 + 1) = 0x6c;
          *pppuVar10 = (undefined8 **)0x69616d2f6e69622f;
          uVar18 = (ulong)uStack_c0._7_1_;
        }
        uVar14 = uStack_c8;
        if (-1 < (char)uStack_c0._7_1_) {
          uVar14 = uVar18;
        }
        func_0x000104c4f768(appuStack_148,uVar14 + 3,&ppuStack_160);
        pppuVar10 = (undefined8 ***)appuStack_148[0];
        if (-1 < cStack_131) {
          pppuVar10 = appuStack_148;
        }
        if (uVar14 != 0) {
          _memmove(pppuVar10,&ppuStack_d0,uVar14);
        }
        *(undefined4 *)((long)pppuVar10 + uVar14) = 0x732d20;
        func_0x000107c31940(auStack_178,pppuVar9);
        FUN_1099ad6d4(&ppuStack_160,auStack_178);
        pppuVar9 = (undefined8 ***)ppuStack_160;
        if (-1 < (char)bStack_149) {
          uStack_158 = (ulong)bStack_149;
          pppuVar9 = &ppuStack_160;
        }
        pppuVar10 = appuStack_148;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (pppuVar10,pppuVar9,uStack_158);
        puStack_128 = pppuVar10[1];
        puStack_130 = *pppuVar10;
        puStack_120 = pppuVar10[2];
        pppuVar10[1] = (undefined8 **)0x0;
        pppuVar10[2] = (undefined8 **)0x0;
        *pppuVar10 = (undefined8 **)0x0;
        ppuVar11 = &puStack_130;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (ppuVar11,&UNK_10f5936ed,1);
        uStack_108 = ppuVar11[1];
        uStack_110 = *ppuVar11;
        uStack_100 = ppuVar11[2];
        ppuVar11[1] = (undefined8 *)0x0;
        ppuVar11[2] = (undefined8 *)0x0;
        *ppuVar11 = (undefined8 *)0x0;
        func_0x000107c31940(auStack_1a8,pppcVar1);
        FUN_1099ad6d4(&ppuStack_190,auStack_1a8);
        pppuVar9 = (undefined8 ***)ppuStack_190;
        if (-1 < (char)bStack_179) {
          uStack_188 = (ulong)bStack_179;
          pppuVar9 = &ppuStack_190;
        }
        puVar8 = &uStack_110;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (puVar8,pppuVar9,uStack_188);
        uStack_e8 = puVar8[1];
        uStack_f0 = *puVar8;
        uStack_e0 = puVar8[2];
        puVar8[1] = 0;
        puVar8[2] = 0;
        *puVar8 = 0;
        if ((char)bStack_179 < '\0') {
          __ZdlPv(ppuStack_190);
        }
        if (cStack_191 < '\0') {
          __ZdlPv(auStack_1a8[0]);
        }
        if ((long)puStack_120 < 0) {
          __ZdlPv(puStack_130);
        }
        if ((char)bStack_149 < '\0') {
          __ZdlPv(ppuStack_160);
        }
        if (cStack_161 < '\0') {
          __ZdlPv(auStack_178[0]);
        }
        if (cStack_131 < '\0') {
          __ZdlPv(appuStack_148[0]);
        }
        puVar8 = &uStack_f0;
        _popen(puVar8,&DAT_10f30a8bb);
        if (puVar8 == (undefined8 *)0x0) {
          _fprintf(*(undefined8 *)puVar7,&UNK_10f5939c2);
        }
        else {
          if (pppuVar2 != (undefined8 ***)0x0) {
            pppuVar9 = pppuVar2;
            _strlen(pppuVar2);
            _fwrite(pppuVar2,1,pppuVar9,puVar8);
          }
          _pclose();
          if ((int)puVar8 == -1) {
            uVar15 = *(undefined8 *)puVar7;
            ___error();
            FUN_1099ab7cc(&uStack_110,*(undefined4 *)puVar8);
            _fprintf(uVar15,&UNK_10f5939a1);
          }
        }
        uVar17 = (uint)(byte)((ulong)uStack_1f0 >> 0x38);
      }
      if ((uVar17 >> 7 & 1) != 0) {
        __ZdlPv(ppuStack_200);
      }
      if ((long)puStack_1d0 < 0) {
        __ZdlPv(ppuStack_1e0);
      }
      if ((long)uStack_1b0 < 0) {
        __ZdlPv(ppcStack_1c0);
      }
    }
    ppuStack_d0 = (undefined8 **)0x11374c210;
    if (cRam000000011374c2d8 == '\x01') {
      iVar20 = 0x1374c210;
      _pthread_rwlock_rdlock();
      if (iVar20 != 0) goto LAB_1099ab0c0;
    }
LAB_1099aaab0:
    FUN_1099ad5a8(&ppuStack_d0);
    lVar19 = *(long *)(param_1 + 8) + 0x7000;
    if (*(char *)(*(long *)(param_1 + 8) + 0x7630) != '\x03') {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
        return;
      }
      ___stack_chk_fail();
LAB_1099ab0fc:
      ClearExclusiveLocal();
      goto LAB_1099ab100;
    }
  }
  else {
    lVar19 = *(long *)(param_1 + 8);
    uVar14 = (ulong)*(char *)(lVar19 + 0x7630);
    uVar15 = *(undefined8 *)(lVar19 + 0x7538);
    uVar16 = *(undefined8 *)(lVar19 + 0x7658);
    if (bRam000000011382baba != 0) {
LAB_1099aa84c:
      puVar8 = (undefined8 *)PTR____stdoutp_11034bdd8;
      if (iRam00000001132e8070 <= (int)uVar14) {
        puVar8 = (undefined8 *)PTR____stderrp_11034bdc8;
      }
    }
LAB_1099aaa80:
    FUN_1099ad5e8(*puVar8,uVar14,uVar15,uVar16);
    ppuStack_d0 = (undefined8 **)0x11374c210;
    if (cRam000000011374c2d8 != '\x01') goto LAB_1099aaab0;
    iVar20 = 0x1374c210;
    _pthread_rwlock_rdlock();
    if (iVar20 == 0) goto LAB_1099aaab0;
LAB_1099ab0c0:
    _abort();
    lVar19 = extraout_x8;
  }
  if (*(char *)(lVar19 + 0x679) == '\x01') {
    func_0x0001099ab6f4();
    do {
      if (lRam000000011382bb08 != 0) goto LAB_1099ab0fc;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(0x11382bb08,0x10);
      if (bVar4) {
        lRam000000011382bb08 = 0x11374c3b0;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
LAB_1099ab100:
  if (((bRam000000011382bab8 & 1) == 0) && ((bRam000000011382baba & 1) == 0)) {
    lVar19 = 0;
    do {
      if (*(long *)(lVar19 + 0x11382bac0) != 0) {
        plVar12 = *(long **)(*(long *)(lVar19 + 0x11382bac0) + 0x158);
        (**(code **)(*plVar12 + 0x10))(plVar12,1,0,"",0);
      }
      lVar19 = lVar19 + 8;
    } while (lVar19 != 0x20);
  }
  func_0x0001099ab78c();
  FUN_1099ab638(*(undefined8 *)(param_1 + 8));
  _write(2,&UNK_10f593740,0x23);
  (*(code *)PTR__abort_1132e8078)();
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1099ab194);
  (*pcVar5)();
}



/* Entry: 1099ab360; end: 1099ab3af;  */

void FUN_1099ab360(long param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  plVar1 = *(long **)(lVar2 + 0x7648);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001099ab3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))
              (plVar1,(long)*(char *)(lVar2 + 0x7630),*(undefined8 *)(lVar2 + 0x7670),
               *(undefined8 *)(lVar2 + 0x7668),*(undefined4 *)(lVar2 + 0x7634),param_1 + 0x10,
               *(long *)(lVar2 + 0x7538) + *(ulong *)(lVar2 + 0x7650),
               *(long *)(lVar2 + 0x7658) + ~*(ulong *)(lVar2 + 0x7650));
    return;
  }
  return;
}



/* Entry: 1099ab3b0; end: 1099ab427;  */

long * FUN_1099ab3b0(long *param_1)

{
  undefined **ppuVar1;
  undefined **extraout_x8;
  
  FUN_1099ab428();
  ppuVar1 = &PTR___tlv_bootstrap_11340dd38;
  (*(code *)PTR___tlv_bootstrap_11340dd38)(param_1[1]);
  if (extraout_x8 == ppuVar1) {
    FUN_1099ad318(extraout_x8);
    ppuVar1 = &PTR___tlv_bootstrap_11340dd20;
    (*(code *)PTR___tlv_bootstrap_11340dd20)();
    *(undefined1 *)ppuVar1 = 1;
  }
  else if (*param_1 != 0) {
    FUN_1099ad318();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1099ab428; end: 1099ab637;  */

void FUN_1099ab428(long param_1)

{
  undefined1 *puVar1;
  int iVar2;
  byte bVar3;
  int *piVar4;
  undefined8 uVar5;
  long lVar6;
  code *pcVar7;
  int *piVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined1 uVar12;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  undefined8 uStack_78;
  ulong uStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  int aiStack_48 [2];
  
  lVar9 = *(long *)(param_1 + 8);
  if (((*(byte *)(lVar9 + 0x7678) & 1) == 0) && (iRam000000011374c02c <= *(char *)(lVar9 + 0x7630)))
  {
    lVar6 = *(long *)(lVar9 + 0x7578) - *(long *)(lVar9 + 0x7570);
    *(long *)(lVar9 + 0x7658) = lVar6;
    *(long *)(lVar9 + 0x7660) = lVar6 - *(long *)(lVar9 + 0x7650);
    lVar11 = *(long *)(lVar9 + 0x7538);
    puVar1 = (undefined1 *)(lVar11 + lVar6);
    bVar3 = puVar1[-1];
    if (bVar3 == 10) {
      uVar12 = 0;
    }
    else {
      uVar12 = *puVar1;
      *(long *)(lVar9 + 0x7658) = lVar6 + 1;
      *puVar1 = 10;
      lVar11 = *(long *)(*(long *)(param_1 + 8) + 0x7538);
      lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x7658);
    }
    *(undefined1 *)(lVar11 + lVar6) = 0;
    aiStack_48[0] = 0x1374c140;
    aiStack_48[1] = 1;
    if (cRam000000011374c208 == '\x01') {
      lVar9 = 0x11374c140;
      _pthread_rwlock_wrlock();
      if ((int)lVar9 != 0) goto LAB_1099ab610;
    }
    pcVar7 = *(code **)(*(long *)(param_1 + 8) + 0x7638);
    uVar10 = *(ulong *)(*(long *)(param_1 + 8) + 0x7640);
    if ((uVar10 & 1) != 0) {
      pcVar7 = *(code **)(*(long *)(param_1 + ((long)uVar10 >> 1)) + ((ulong)pcVar7 & 0xffffffff));
    }
    (*pcVar7)();
    lVar9 = (long)*(char *)(*(long *)(param_1 + 8) + 0x7630) * 8;
    *(long *)(lVar9 + 0x11374c120) = *(long *)(lVar9 + 0x11374c120) + 1;
    FUN_1099ab9f4(aiStack_48);
    lVar6 = *(long *)(param_1 + 8);
    aiStack_48[0] = 0x1374c210;
    aiStack_48[1] = 1;
    if (cRam000000011374c2d8 == '\x01') {
      lVar9 = 0x11374c210;
      _pthread_rwlock_rdlock();
      if ((int)lVar9 != 0) {
LAB_1099ab610:
        _abort();
        FUN_1099ad5a8(aiStack_48);
        lVar6 = lVar9;
        __Unwind_Resume();
        pcStack_58 = FUN_1099ab638;
        uStack_78 = 0x11374c210;
        uStack_70 = (ulong)bVar3;
        lStack_68 = lVar9;
        puStack_60 = &stack0xfffffffffffffff0;
        if (cRam000000011374c2d8 == '\x01') {
          uVar5 = 0x11374c210;
          _pthread_rwlock_rdlock();
          if ((int)uVar5 != 0) {
            _abort();
            FUN_1099ad5a8(&uStack_78);
            __Unwind_Resume(uVar5);
            uRam000000011374c3b0 = uRam0000000113744990;
            uRam000000011374c3b8 = uRam0000000113744954;
            lRam000000011374c3c0 = lRam0000000113744858 + lRam0000000113744970;
            if (cRam000000011382bb10 == '\x01') {
              pcStack_88 = FUN_1099ab6f4;
              uStack_a8 = 0x11374c3c8;
              uStack_a0 = 0x500000020;
              uStack_98 = 0;
              ppuStack_90 = &puStack_60;
              __Unwind_Backtrace(0x1099ada70,&uStack_a8);
            }
            else {
              uStack_98 = 0;
            }
            uRam000000011374c4c8 = uStack_98;
            return;
          }
        }
        pcVar7 = *(code **)(lVar6 + 0x7638);
        if (((pcVar7 == FUN_1099ab33c || pcVar7 == FUN_1099ab360) &&
             (*(ulong *)(lVar6 + 0x7640) == 0 ||
             (*(ulong *)(lVar6 + 0x7640) & 1) == 0 && pcVar7 == (code *)0x0)) &&
           (*(long **)(lVar6 + 0x7648) != (long *)0x0)) {
          (**(code **)(**(long **)(lVar6 + 0x7648) + 0x20))();
        }
        FUN_1099ad5a8(&uStack_78);
        return;
      }
    }
    pcVar7 = *(code **)(lVar6 + 0x7638);
    if (((pcVar7 == FUN_1099ab33c || pcVar7 == FUN_1099ab360) &&
        (*(ulong *)(lVar6 + 0x7640) == 0 ||
         (*(ulong *)(lVar6 + 0x7640) & 1) == 0 && pcVar7 == (code *)0x0)) &&
       (*(long **)(lVar6 + 0x7648) != (long *)0x0)) {
      (**(code **)(**(long **)(lVar6 + 0x7648) + 0x20))();
    }
    piVar4 = aiStack_48;
    FUN_1099ad5a8();
    if (bVar3 != 10) {
      *(undefined1 *)
       (*(long *)(*(long *)(param_1 + 8) + 0x7538) + *(long *)(*(long *)(param_1 + 8) + 0x7658) + -1
       ) = uVar12;
    }
    piVar8 = *(int **)(param_1 + 8);
    iVar2 = *piVar8;
    if (iVar2 != 0) {
      ___error();
      *piVar4 = iVar2;
      piVar8 = *(int **)(param_1 + 8);
    }
    *(undefined1 *)(piVar8 + 0x1d9e) = 1;
  }
  return;
}



/* Entry: 1099ab638; end: 1099ab6f3;  */

void FUN_1099ab638(long param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  undefined8 uStack_28;
  
  uStack_28 = 0x11374c210;
  if (cRam000000011374c2d8 == '\x01') {
    uVar1 = 0x11374c210;
    _pthread_rwlock_rdlock();
    if ((int)uVar1 != 0) {
      _abort();
      FUN_1099ad5a8(&uStack_28);
      __Unwind_Resume(uVar1);
      uRam000000011374c3b0 = uRam0000000113744990;
      uRam000000011374c3b8 = uRam0000000113744954;
      lRam000000011374c3c0 = lRam0000000113744858 + lRam0000000113744970;
      if (cRam000000011382bb10 == '\x01') {
        pcStack_38 = FUN_1099ab6f4;
        uStack_58 = 0x11374c3c8;
        uStack_50 = 0x500000020;
        uStack_48 = 0;
        puStack_40 = &stack0xfffffffffffffff0;
        __Unwind_Backtrace(0x1099ada70,&uStack_58);
      }
      else {
        uStack_48 = 0;
      }
      uRam000000011374c4c8 = uStack_48;
      return;
    }
  }
  pcVar2 = *(code **)(param_1 + 0x7638);
  if (((pcVar2 == FUN_1099ab33c || pcVar2 == FUN_1099ab360) &&
       (*(ulong *)(param_1 + 0x7640) == 0 ||
       (*(ulong *)(param_1 + 0x7640) & 1) == 0 && pcVar2 == (code *)0x0)) &&
     (*(long **)(param_1 + 0x7648) != (long *)0x0)) {
    (**(code **)(**(long **)(param_1 + 0x7648) + 0x20))();
  }
  FUN_1099ad5a8(&uStack_28);
  return;
}



/* Entry: 1099ab6f4; end: 1099ab7cb;  */

void FUN_1099ab6f4(void)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uRam000000011374c3b0 = uRam0000000113744990;
  uRam000000011374c3b8 = uRam0000000113744954;
  lRam000000011374c3c0 = lRam0000000113744858 + lRam0000000113744970;
  if (cRam000000011382bb10 == '\x01') {
    uStack_28 = 0x11374c3c8;
    uStack_20 = 0x500000020;
    uStack_18 = 0;
    __Unwind_Backtrace(0x1099ada70,&uStack_28);
  }
  else {
    uStack_18 = 0;
  }
  uRam000000011374c4c8 = uStack_18;
  return;
}



/* Entry: 1099ab7cc; end: 1099ab8e3;  */

int * FUN_1099ab7cc(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  char acStack_ac [99];
  undefined1 uStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  acStack_ac[0] = '\0';
  piVar2 = param_1;
  ___error();
  iVar1 = *piVar2;
  ___error();
  *piVar2 = 0;
  _strerror_r(param_2,acStack_ac,100);
  piVar2 = param_2;
  ___error();
  if (*piVar2 == 0) {
    iVar3 = (int)param_2;
    ___error();
    *piVar2 = iVar1;
    uStack_49 = 0;
    if ((iVar3 != 0) && (acStack_ac != (char *)(long)iVar3)) {
      acStack_ac[0] = '\0';
      if (iVar3 < *(int *)PTR__sys_nerr_11034cc90) goto LAB_1099ab838;
      _strncat(acStack_ac,(char *)(long)iVar3,99);
    }
    if (acStack_ac[0] != '\0') goto LAB_1099ab850;
  }
  else {
    acStack_ac[0] = '\0';
  }
LAB_1099ab838:
  _snprintf(acStack_ac,100,&UNK_10f59376f);
LAB_1099ab850:
  func_0x000107c31940(param_1,acStack_ac);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x14] = 0;
    FUN_1099a9f0c();
    FUN_1092b4db8(*(long *)(param_1 + 2) + 0x7540,&UNK_10f5936de,0xe);
    FUN_1092b4db8();
    FUN_1092b4db8();
    return param_1;
  }
  return param_1;
}



/* Entry: 1099ab8e4; end: 1099ab8e7;  */

undefined8 * FUN_1099ab8e4(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[0xb] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  FUN_1099a9f0c();
  FUN_1092b4db8(param_1[1] + 0x7540,&UNK_10f5936de,0xe);
  FUN_1092b4db8();
  FUN_1092b4db8();
  return param_1;
}



/* Entry: 1099ab8e8; end: 1099ab907;  */

void FUN_1099ab8e8(void)

{
  code *pcVar1;
  
  FUN_1099ab428();
  (*(code *)PTR__abort_1132e8078)();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1099ab904);
  (*pcVar1)();
}



/* Entry: 1099ab908; end: 1099ab983;  */

undefined8 * FUN_1099ab908(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x108;
  __Znwm();
  FUN_10926db08();
  *param_1 = uVar1;
  uVar2 = param_2;
  _strlen(param_2);
  FUN_1092b4db8(uVar1,param_2,uVar2);
  FUN_1092b4db8();
  return param_1;
}



/* Entry: 1099ab984; end: 1099ab9f3;  */

undefined8 FUN_1099ab984(long *param_1)

{
  undefined8 uVar1;
  undefined1 uStack_21;
  
  FUN_1092b4db8(*param_1,&UNK_10f59376d,1);
  uVar1 = 0x18;
  __Znwm(0x18);
  FUN_10926dc5c(uVar1,*param_1 + 8,&uStack_21);
  return uVar1;
}



/* Entry: 1099ab9f4; end: 1099aba33;  */

long * FUN_1099ab9f4(long *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)*param_1;
  if (((char)plVar1[0x19] == '\x01') && (_pthread_rwlock_unlock(), (int)plVar1 != 0)) {
    _abort();
    func_0x000104bd46a0();
    FUN_1099a9e48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return plVar1;
  }
  return param_1;
}



/* Entry: 1099aba34; end: 1099aba47;  */

void FUN_1099aba34(void)

{
  FUN_1099a9e48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1099aba48; end: 1099acd63;  */

/* WARNING: Type propagation algorithm not settling */

undefined ********
FUN_1099aba48(ulong param_1,undefined **param_2,undefined8 param_3,undefined8 *******param_4,
             undefined **param_5)

{
  int iVar1;
  bool bVar2;
  undefined *******pppppppuVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined1 uVar6;
  char cVar7;
  undefined **ppuVar8;
  byte bVar9;
  undefined ********ppppppppuVar10;
  undefined ***pppuVar11;
  undefined8 *******pppppppuVar12;
  long *plVar13;
  undefined8 ******ppppppuVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined ********ppppppppuVar18;
  undefined ********ppppppppuVar19;
  undefined ********ppppppppuVar20;
  undefined **ppuVar21;
  undefined *puVar22;
  undefined8 *****pppppuVar23;
  undefined4 uVar24;
  undefined ********ppppppppuVar25;
  undefined *puVar26;
  long lVar27;
  undefined ***unaff_x21;
  bool bVar28;
  double dVar29;
  undefined *******pppppppuStack_670;
  int iStack_668;
  undefined ********ppppppppuStack_660;
  undefined ********ppppppppuStack_658;
  undefined1 ****ppppuStack_650;
  code *pcStack_648;
  ulong uStack_640;
  undefined ********appppppppuStack_638 [2];
  undefined7 uStack_628;
  char cStack_621;
  undefined ********ppppppppuStack_620;
  undefined7 uStack_618;
  undefined1 uStack_611;
  undefined7 uStack_610;
  char cStack_609;
  undefined ********ppppppppuStack_600;
  undefined *******pppppppuStack_5f8;
  undefined *******pppppppuStack_5f0;
  undefined ********ppppppppuStack_5e0;
  undefined *******pppppppuStack_5d8;
  undefined *******pppppppuStack_5d0;
  undefined1 uStack_5b9;
  undefined7 uStack_5b8;
  undefined1 uStack_5b1;
  undefined7 uStack_5b0;
  long lStack_5a8;
  undefined8 *******pppppppuStack_5a0;
  undefined ***pppuStack_598;
  undefined **ppuStack_590;
  undefined ********ppppppppuStack_588;
  undefined1 ***pppuStack_580;
  code *pcStack_578;
  undefined ********ppppppppuStack_568;
  undefined **ppuStack_560;
  undefined ********ppppppppuStack_558;
  undefined1 **ppuStack_550;
  undefined8 uStack_548;
  undefined ********ppppppppuStack_538;
  undefined **ppuStack_530;
  undefined ********ppppppppuStack_528;
  undefined1 *puStack_520;
  code *pcStack_518;
  undefined8 *******pppppppuStack_510;
  undefined **ppuStack_500;
  undefined8 *******pppppppuStack_4f8;
  undefined8 *puStack_4f0;
  long alStack_4e8 [2];
  char cStack_4d1;
  long lStack_4d0;
  long lStack_4c8;
  long lStack_4c0;
  long lStack_4b0;
  long lStack_4a8;
  long lStack_4a0;
  undefined8 *******pppppppuStack_490;
  ulong uStack_488;
  undefined8 uStack_480;
  undefined8 *******pppppppuStack_478;
  ulong uStack_470;
  ulong uStack_468;
  undefined8 *******pppppppuStack_460;
  undefined7 uStack_458;
  undefined1 uStack_451;
  undefined7 uStack_450;
  byte bStack_449;
  undefined8 *******apppppppuStack_448 [2];
  char cStack_431;
  undefined **appuStack_430 [2];
  undefined1 auStack_420 [56];
  undefined8 uStack_3e8;
  char cStack_3d1;
  undefined *******apppppppuStack_3c0 [4];
  int aiStack_3a0 [30];
  undefined1 auStack_328 [20];
  int iStack_314;
  undefined ********ppppppppuStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  int iStack_2d8;
  undefined4 uStack_2d4;
  undefined8 uStack_2d0;
  undefined **ppuStack_2c8;
  undefined1 auStack_2c0 [56];
  undefined8 uStack_288;
  char cStack_271;
  undefined **appuStack_260 [2];
  int aiStack_250 [36];
  undefined8 *******pppppppuStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 ******ppppppuStack_190;
  undefined *puStack_188;
  undefined8 uStack_158;
  char cStack_141;
  undefined **appuStack_130 [4];
  int aiStack_110 [30];
  undefined7 uStack_98;
  undefined1 uStack_91;
  undefined7 uStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppppuVar10 = (undefined ********)(param_1 + 8);
  ppuVar21 = param_2;
  ppppppppuStack_2f0 = ppppppppuVar10;
  uStack_2e8 = param_3;
  if ((*(char *)(param_1 + 0xd0) != '\x01') || (_pthread_rwlock_wrlock(), (int)ppppppppuVar10 == 0))
  {
    if (*(char *)(param_1 + 0xd8) == '\x01') {
      if (*(char *)(param_1 + 0xf7) < '\0') {
        if (*(long *)(param_1 + 0xe8) != 0) goto LAB_1099abad0;
      }
      else if (*(char *)(param_1 + 0xf7) != '\0') goto LAB_1099abad0;
    }
    else {
LAB_1099abad0:
      uVar5 = uRam000000011374c03c;
      if (0xffe < uRam000000011374c03c - 1) {
        uVar5 = 1;
      }
      iVar1 = iRam000000011382bae8;
      if (*(uint *)(param_1 + 0x13c) >> 0x14 < uVar5) {
        _getpid();
        iVar1 = (int)ppppppppuVar10;
        if (iRam000000011382bae8 != (int)ppppppppuVar10) goto LAB_1099abb28;
        puVar17 = (undefined8 *)(param_1 + 0x128);
        puStack_4f0 = puVar17;
        if (*(long *)(param_1 + 0x128) == 0) {
          iVar1 = *(int *)(param_1 + 0x140) + 1;
          *(int *)(param_1 + 0x140) = iVar1;
          if (iVar1 != 0x20) goto LAB_1099acafc;
          goto LAB_1099abb54;
        }
LAB_1099aca24:
        unaff_x21 = (undefined ***)0x11374c000;
        if ((bRam000000011374c02a & 1) == 0) {
          ___error();
          *(undefined4 *)ppppppppuVar10 = 0;
          ppuVar21 = (undefined **)0x1;
          pppppppuVar12 = param_4;
          _fwrite(param_4,1,param_5,*puVar17);
          if ((cRam000000011374c025 == '\x01') && (___error(), *(int *)pppppppuVar12 == 0x1c)) {
            bRam000000011374c02a = 1;
          }
          else {
            *(int *)(param_1 + 0x13c) = *(int *)(param_1 + 0x13c) + (int)param_5;
            uVar5 = *(int *)(param_1 + 0x134) + (int)param_5;
            *(uint *)(param_1 + 0x134) = uVar5;
            if ((((ulong)param_2 & 1) == 0) && (uVar5 < 1000000)) {
              ppuVar21 = (undefined **)0x0;
              _gettimeofday(&uStack_2e0);
              if ((long)iStack_2d8 + (long)uStack_2e0 * 1000000 < *(long *)(param_1 + 0x148))
              goto LAB_1099acafc;
            }
            FUN_1099ad2b4(param_1);
          }
        }
        else {
          ppuVar21 = (undefined **)0x0;
          _gettimeofday(&uStack_2e0);
          if (*(long *)(param_1 + 0x148) <= (long)iStack_2d8 + (long)uStack_2e0 * 1000000) {
            bRam000000011374c02a = 0;
          }
        }
      }
      else {
LAB_1099abb28:
        iRam000000011382bae8 = iVar1;
        puStack_4f0 = (undefined8 *)(param_1 + 0x128);
        if (*(long *)(param_1 + 0x128) != 0) {
          _fclose();
        }
        *(undefined8 *)(param_1 + 0x128) = 0;
        *(undefined8 *)(param_1 + 0x13c) = 0x2000000000;
        *(undefined8 *)(param_1 + 0x134) = 0;
LAB_1099abb54:
        *(undefined4 *)(param_1 + 0x140) = 0;
        if ((bRam000000011374c026 & 1) == 0) {
          _localtime_r(&uStack_2e8,auStack_328);
        }
        else {
          _gmtime_r(&uStack_2e8,auStack_328);
        }
        unaff_x21 = appuStack_430;
        pppppppuStack_4f8 = param_4;
        FUN_10926db08(appuStack_430);
        puVar22 = appuStack_430[0][-3];
        if (*(int *)((long)aiStack_3a0 + (long)puVar22) == -1) {
          __ZNKSt3__18ios_base6getlocEv(&uStack_2e0,(undefined *)((long)unaff_x21 + (long)puVar22));
          plVar13 = &uStack_2e0;
          __ZNKSt3__16locale9use_facetERNS0_2idE(plVar13,PTR___ZNSt3__15ctypeIcE2idE_110346770);
          (**(code **)(*plVar13 + 0x38))();
          __ZNSt3__16localeD1Ev(&uStack_2e0);
        }
        *(undefined4 *)((long)aiStack_3a0 + (long)puVar22) = 0x30;
        pppuVar11 = appuStack_430;
        __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(pppuVar11,iStack_314 + 0x76c);
        *(undefined8 *)((long)pppuVar11 + (long)((*pppuVar11)[-3] + 0x18)) = 2;
        __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
        *(undefined8 *)((long)pppuVar11 + (long)((*pppuVar11)[-3] + 0x18)) = 2;
        __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
        uStack_2e0._0_1_ = 0x2d;
        FUN_1092b4db8();
        *(undefined8 *)((long)pppuVar11 + (long)((*pppuVar11)[-3] + 0x18)) = 2;
        __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
        *(undefined8 *)((long)pppuVar11 + (long)((*pppuVar11)[-3] + 0x18)) = 2;
        __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
        *(undefined8 *)((long)pppuVar11 + (long)((*pppuVar11)[-3] + 0x18)) = 2;
        __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
        uStack_2e0 = (undefined **)CONCAT71(uStack_2e0._1_7_,0x2e);
        FUN_1092b4db8();
        __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
        FUN_10926dc5c(apppppppuStack_448,appuStack_430 + 1,&uStack_2e0);
        if (*(char *)(param_1 + 0xd8) == '\x01') {
          uVar16 = param_1;
          FUN_1099ace0c(param_1,apppppppuStack_448);
          if ((uVar16 & 1) != 0) {
LAB_1099ac3d4:
            FUN_10926db08(&uStack_1a0);
            lVar27 = *(long *)(CONCAT17(uStack_1a0._7_1_,(undefined7)uStack_1a0) + -0x18);
            if (*(int *)((long)aiStack_110 + lVar27) == -1) {
              __ZNKSt3__18ios_base6getlocEv(&uStack_2e0,(long)&uStack_1a0 + lVar27);
              plVar13 = &uStack_2e0;
              __ZNKSt3__16locale9use_facetERNS0_2idE(plVar13,PTR___ZNSt3__15ctypeIcE2idE_110346770);
              (**(code **)(*plVar13 + 0x38))();
              __ZNSt3__16localeD1Ev(&uStack_2e0);
            }
            *(undefined4 *)((long)aiStack_110 + lVar27) = 0x30;
            plVar13 = &uStack_1a0;
            FUN_1092b4db8(plVar13,&UNK_10f593894,0x15);
            __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
            uStack_2e0._0_1_ = 0x2f;
            FUN_1092b4db8();
            *(undefined8 *)((long)plVar13 + *(long *)(*plVar13 + -0x18) + 0x18) = 2;
            __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
            uStack_2e0._0_1_ = 0x2f;
            FUN_1092b4db8();
            *(undefined8 *)((long)plVar13 + *(long *)(*plVar13 + -0x18) + 0x18) = 2;
            __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
            uStack_2e0._0_1_ = 0x20;
            FUN_1092b4db8();
            *(undefined8 *)((long)plVar13 + *(long *)(*plVar13 + -0x18) + 0x18) = 2;
            __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
            uStack_2e0._0_1_ = 0x3a;
            FUN_1092b4db8();
            *(undefined8 *)((long)plVar13 + *(long *)(*plVar13 + -0x18) + 0x18) = 2;
            __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
            uStack_2e0._0_1_ = 0x3a;
            FUN_1092b4db8();
            *(undefined8 *)((long)plVar13 + *(long *)(*plVar13 + -0x18) + 0x18) = 2;
            __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
            FUN_1092b4db8();
            FUN_1092b4db8();
            FUN_1099a9d38();
            uVar16 = uRam000000011374c0e0;
            uVar4 = uRam000000011374c0d8;
            if (-1 < (char)bRam000000011374c0ef) {
              uVar16 = (ulong)bRam000000011374c0ef;
              uVar4 = 0x11374c0d8;
            }
            FUN_1092b4db8(plVar13,uVar4,uVar16);
            uStack_2e0 = (undefined **)CONCAT71(uStack_2e0._1_7_,10);
            FUN_1092b4db8();
            uVar16 = uRam000000011374c0f8;
            if (-1 < (char)bRam000000011374c107) {
              uVar16 = (ulong)bRam000000011374c107;
            }
            if (uVar16 != 0) {
              FUN_1092b4db8(&uStack_1a0,&UNK_10f5938c5,0x19);
              FUN_1092b4db8();
              uStack_2e0 = (undefined **)CONCAT71(uStack_2e0._1_7_,10);
              FUN_1092b4db8();
            }
            puVar17 = &uStack_1a0;
            FUN_1092b4db8(puVar17,&UNK_10f59390d,0x1c);
            _gettimeofday(&uStack_2e0,0);
            ppppppuVar14 = (undefined8 ******)uStack_2e0;
            lVar27 = (long)iStack_2d8;
            dVar29 = *(double *)(param_1 + 0x150);
            FUN_1092a988c(&uStack_2e0);
            pppppuVar23 = (undefined8 *****)uStack_2e0[-3];
            if (*(int *)((long)aiStack_250 + (long)pppppuVar23) == -1) {
              __ZNKSt3__18ios_base6getlocEv
                        (&pppppppuStack_460,(long)&uStack_2e0 + (long)pppppuVar23);
              pppppppuVar12 = &pppppppuStack_460;
              __ZNKSt3__16locale9use_facetERNS0_2idE
                        (pppppppuVar12,PTR___ZNSt3__15ctypeIcE2idE_110346770);
              (*(code *)(*pppppppuVar12)[7])();
              __ZNSt3__16localeD1Ev(&pppppppuStack_460);
            }
            *(undefined4 *)((long)aiStack_250 + (long)pppppuVar23) = 0x30;
            plVar13 = &uStack_2d0;
            __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi
                      (plVar13,(int)((double)(lVar27 + (long)ppppppuVar14 * 1000000) * 1e-06 -
                                    dVar29) / 0xe10);
            pppppppuStack_460._0_1_ = 0x3a;
            FUN_1092b4db8();
            *(undefined8 *)((long)plVar13 + *(long *)(*plVar13 + -0x18) + 0x18) = 2;
            __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
            pppppppuStack_460 = (undefined8 *******)CONCAT71(pppppppuStack_460._1_7_,0x3a);
            FUN_1092b4db8();
            *(undefined8 *)((long)plVar13 + *(long *)(*plVar13 + -0x18) + 0x18) = 2;
            __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
            FUN_10926dc5c(&pppppppuStack_1c0,&ppuStack_2c8,&pppppppuStack_460);
            uStack_2e0 = &PTR_SUB_1108a5a38;
            uStack_2d0._0_7_ = 0x1108a5a60;
            uStack_2d0._7_1_ = 0;
            appuStack_260[0] = &PTR_DAT_1108a5a88;
            ppuStack_2c8 = &PTR_DAT_11088d7b0;
            if (cStack_271 < '\0') {
              __ZdlPv(uStack_288);
            }
            puVar22 = PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20;
            ppuStack_2c8 = (undefined **)
                           (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 +
                           0x10);
            __ZNSt3__16localeD1Ev(auStack_2c0);
            __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(&uStack_2e0,&PTR_PTR_1108a5aa0);
            __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_260);
            uVar16 = uStack_1b8;
            pppppppuVar12 = pppppppuStack_1c0;
            if (-1 < (long)uStack_1b0) {
              uVar16 = uStack_1b0 >> 0x38;
              pppppppuVar12 = &pppppppuStack_1c0;
            }
            FUN_1092b4db8(puVar17,pppppppuVar12,uVar16);
            uStack_2e0._0_1_ = 10;
            FUN_1092b4db8();
            FUN_1092b4db8();
            FUN_1092b4db8();
            FUN_1092b4db8();
            FUN_1092b4db8();
            uStack_2e0 = (undefined **)CONCAT71(uStack_2e0._1_7_,10);
            FUN_1092b4db8();
            puVar17 = puStack_4f0;
            if ((long)uStack_1b0 < 0) {
              __ZdlPv(pppppppuStack_1c0);
            }
            FUN_10926dc5c(&uStack_2e0,&uStack_198,&pppppppuStack_1c0);
            pppppppuVar12 = (undefined8 *******)uStack_2e0;
            uVar16 = CONCAT44(uStack_2d4,iStack_2d8);
            if (-1 < (char)uStack_2d0._7_1_) {
              pppppppuVar12 = (undefined8 *******)&uStack_2e0;
              uVar16 = (ulong)uStack_2d0._7_1_;
            }
            _fwrite(pppppppuVar12,1,uVar16,*puVar17);
            *(int *)(param_1 + 0x13c) = *(int *)(param_1 + 0x13c) + (int)uVar16;
            *(int *)(param_1 + 0x134) = *(int *)(param_1 + 0x134) + (int)uVar16;
            if ((char)uStack_2d0._7_1_ < '\0') {
              __ZdlPv(uStack_2e0);
            }
            appuStack_130[0] = &PTR_DAT_11088d708;
            uStack_1a0._0_7_ = 0x11088d6e0;
            uStack_1a0._7_1_ = 0;
            uStack_198._0_7_ = 0x11088d7b0;
            uStack_198._7_1_ = 0;
            if (cStack_141 < '\0') {
              __ZdlPv(uStack_158);
            }
            puVar26 = puVar22 + 0x10;
            uStack_198._0_7_ = SUB87(puVar26,0);
            uStack_198._7_1_ = (undefined1)((ulong)puVar26 >> 0x38);
            __ZNSt3__16localeD1Ev(&ppppppuStack_190);
            __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&uStack_1a0,&PTR_PTR_11088d720);
            __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_130);
            if (cStack_431 < '\0') {
              __ZdlPv(apppppppuStack_448[0]);
            }
            apppppppuStack_3c0[0] = (undefined *******)&PTR_DAT_11088d708;
            appuStack_430[0] = &PTR_SUB_11088d6e0;
            appuStack_430[1] = &PTR_DAT_11088d7b0;
            if (cStack_3d1 < '\0') {
              __ZdlPv(uStack_3e8);
            }
            appuStack_430[1] = (undefined **)(puVar22 + 0x10);
            __ZNSt3__16localeD1Ev(auStack_420);
            __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(appuStack_430,&PTR_PTR_11088d720);
            ppppppppuVar10 = apppppppuStack_3c0;
            __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev();
            param_4 = pppppppuStack_4f8;
            goto LAB_1099aca24;
          }
          _perror(&UNK_10f593806);
          pppppppuStack_510 = apppppppuStack_448[0];
          if (-1 < cStack_431) {
            pppppppuStack_510 = apppppppuStack_448;
          }
          _fprintf(*(undefined8 *)PTR____stderrp_11034bdc8,&UNK_10f593820);
        }
        else {
          puVar22 = &UNK_10f5939fb;
          if (puRam000000011382bae0 != (undefined *)0x0) {
            puVar22 = puRam000000011382bae0;
          }
          func_0x000107c31940(&pppppppuStack_460,puVar22);
          pppppppuStack_478 = (undefined8 *******)0x0;
          uStack_470 = 0;
          uStack_468 = 0;
          FUN_1099a9dd0(&pppppppuStack_478);
          if (cRam000000011382bb07 < '\0') {
            func_0x000107c3192c(&pppppppuStack_490,pppppppuRam000000011382baf0,uRam000000011382baf8)
            ;
          }
          else {
            uStack_488 = uRam000000011382baf8;
            pppppppuStack_490 = pppppppuRam000000011382baf0;
            uStack_480 = CONCAT17(cRam000000011382bb07,uRam000000011382bb00);
          }
          uVar16 = uStack_488;
          if (-1 < (long)uStack_480) {
            uVar16 = uStack_480 >> 0x38;
          }
          if (uVar16 == 0) {
            if ((long)uStack_480 < 0) {
              uStack_488 = 0xc;
              pppppppuVar12 = pppppppuStack_490;
            }
            else {
              uStack_480 = CONCAT17(0xc,(undefined7)uStack_480);
              pppppppuVar12 = &pppppppuStack_490;
            }
            *(undefined4 *)(pppppppuVar12 + 1) = 0x72657375;
            *pppppppuVar12 = (undefined8 ******)0x2d64696c61766e69;
            *(undefined1 *)((long)pppppppuVar12 + 0xc) = 0;
          }
          FUN_10969bbd0(alStack_4e8,&pppppppuStack_460,0x2e);
          uVar16 = uStack_470;
          pppppppuVar12 = pppppppuStack_478;
          if (-1 < (long)uStack_468) {
            uVar16 = uStack_468 >> 0x38;
            pppppppuVar12 = &pppppppuStack_478;
          }
          plVar13 = alStack_4e8;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (plVar13,pppppppuVar12,uVar16);
          lStack_4c8 = plVar13[1];
          lStack_4d0 = *plVar13;
          lStack_4c0 = plVar13[2];
          plVar13[1] = 0;
          plVar13[2] = 0;
          *plVar13 = 0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                    (&lStack_4d0,0x2e);
          lStack_4a8 = lStack_4c8;
          lStack_4b0 = lStack_4d0;
          lStack_4a0 = lStack_4c0;
          lStack_4c8 = 0;
          lStack_4c0 = 0;
          lStack_4d0 = 0;
          uVar16 = uStack_488;
          pppppppuVar12 = pppppppuStack_490;
          if (-1 < (long)uStack_480) {
            uVar16 = uStack_480 >> 0x38;
            pppppppuVar12 = &pppppppuStack_490;
          }
          plVar13 = &lStack_4b0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (plVar13,pppppppuVar12,uVar16);
          uStack_1b8 = plVar13[1];
          pppppppuStack_1c0 = (undefined8 *******)*plVar13;
          uStack_1b0 = plVar13[2];
          plVar13[1] = 0;
          plVar13[2] = 0;
          *plVar13 = 0;
          pppppppuVar12 = &pppppppuStack_1c0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (pppppppuVar12,&UNK_10f59384d,5);
          ppppppuStack_190 = pppppppuVar12[2];
          uStack_198._0_7_ = SUB87(pppppppuVar12[1],0);
          uStack_198._7_1_ = (undefined1)((ulong)pppppppuVar12[1] >> 0x38);
          uStack_1a0._0_7_ = SUB87(*pppppppuVar12,0);
          uStack_1a0._7_1_ = (undefined1)((ulong)*pppppppuVar12 >> 0x38);
          pppppppuVar12[1] = (undefined8 ******)0x0;
          pppppppuVar12[2] = (undefined8 ******)0x0;
          *pppppppuVar12 = (undefined8 ******)0x0;
          puVar26 = (&PTR_DAT_110b1f060)[*(int *)(param_1 + 0x130)];
          puVar22 = puVar26;
          _strlen(puVar26);
          plVar13 = &uStack_1a0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (plVar13,puVar26,puVar22);
          param_4 = &pppppppuStack_460;
          uStack_2e0 = (undefined **)*plVar13;
          uStack_2d0._0_7_ = (undefined7)plVar13[2];
          uStack_2d0._7_1_ = (byte)((ulong)plVar13[2] >> 0x38);
          iStack_2d8 = (int)plVar13[1];
          uStack_2d4 = (undefined4)((ulong)plVar13[1] >> 0x20);
          plVar13[1] = 0;
          plVar13[2] = 0;
          *plVar13 = 0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                    (&uStack_2e0,0x2e);
          bVar9 = uStack_2d0._7_1_;
          uStack_450 = (undefined7)uStack_2d0;
          pppppppuVar12 = (undefined8 *******)uStack_2e0;
          uStack_98 = (undefined7)CONCAT44(uStack_2d4,iStack_2d8);
          uStack_451 = uStack_2d4._3_1_;
          uStack_91 = uStack_2d4._3_1_;
          uStack_90 = (undefined7)uStack_2d0;
          unaff_x21 = (undefined ***)(ulong)uStack_2d0._7_1_;
          uStack_2d0._0_7_ = 0;
          uStack_2d0._7_1_ = 0;
          iStack_2d8 = 0;
          uStack_2d4 = 0;
          uStack_2e0 = (undefined **)0x0;
          if ((char)bStack_449 < '\0') {
            __ZdlPv(pppppppuStack_460);
            pppppppuStack_460 = pppppppuVar12;
            uStack_458 = uStack_98;
            uStack_451 = uStack_91;
            uStack_450 = uStack_90;
            bStack_449 = bVar9;
            if ((char)uStack_2d0._7_1_ < '\0') {
              __ZdlPv(uStack_2e0);
            }
          }
          else {
            pppppppuStack_460 = pppppppuVar12;
            uStack_458 = uStack_98;
            bStack_449 = bVar9;
          }
          if ((long)ppppppuStack_190 < 0) {
            __ZdlPv(CONCAT17(uStack_1a0._7_1_,(undefined7)uStack_1a0));
          }
          if ((long)uStack_1b0 < 0) {
            __ZdlPv(pppppppuStack_1c0);
          }
          if (lStack_4a0 < 0) {
            __ZdlPv(lStack_4b0);
          }
          if (lStack_4c0 < 0) {
            __ZdlPv(lStack_4d0);
          }
          if (cStack_4d1 < '\0') {
            __ZdlPv(alStack_4e8[0]);
          }
          if (plRam000000011374c040 == (long *)0x0) {
            plVar13 = (long *)0x18;
            __Znwm();
            *plVar13 = 0;
            plVar13[1] = 0;
            plVar13[2] = 0;
            uVar16 = uRam000000011374c080;
            if (-1 < (char)bRam000000011374c08f) {
              uVar16 = (ulong)bRam000000011374c08f;
            }
            plRam000000011374c040 = plVar13;
            if (uVar16 == 0) {
              func_0x000104c60808(plVar13);
              puVar22 = &UNK_10f59378e;
              _getenv();
              puVar26 = &UNK_10f51778a;
              _getenv();
              uStack_198._0_7_ = SUB87(puVar26,0);
              uStack_198._7_1_ = (undefined1)((ulong)puVar26 >> 0x38);
              ppppppuVar14 = (undefined8 ******)&UNK_10f5939dd;
              _getenv();
              unaff_x21 = (undefined ***)0x0;
              ppppppuStack_190 = ppppppuVar14;
              puStack_188 = &DAT_10f517777;
              param_4 = (undefined8 *******)&uStack_1a0;
              if (puVar22 == (undefined *)0x0) goto LAB_1099ac144;
              while( true ) {
                func_0x000107c31940(&pppppppuStack_1c0,puVar22);
                pppppppuVar12 = pppppppuStack_1c0;
                uVar16 = uStack_1b8;
                if (-1 < (long)uStack_1b0) {
                  pppppppuVar12 = &pppppppuStack_1c0;
                  uVar16 = uStack_1b0 >> 0x38;
                }
                if (*(char *)((long)pppppppuVar12 + (uVar16 - 1)) != '/') {
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                            (&pppppppuStack_1c0,"/",1);
                }
                func_0x000107c2ac70(plVar13,&pppppppuStack_1c0);
                _stat(puVar22,&uStack_2e0);
                if (((int)puVar22 == 0) && ((uStack_2e0._4_2_ & 0xf000) == 0x4000)) {
                  bVar28 = false;
                }
                else {
                  bVar28 = true;
                }
                if ((long)uStack_1b0 < 0) {
                  __ZdlPv(pppppppuStack_1c0);
                }
                bVar2 = false;
                if (unaff_x21 < (undefined ***)0x3) {
                  bVar2 = bVar28;
                }
                pppuVar11 = unaff_x21;
                if (!bVar2) break;
                while( true ) {
                  unaff_x21 = (undefined ***)((long)pppuVar11 + 1);
                  puVar22 = (undefined *)(&uStack_198)[(long)pppuVar11];
                  if (puVar22 != (undefined *)0x0) break;
LAB_1099ac144:
                  pppuVar11 = unaff_x21;
                  if ((undefined ***)0x2 < unaff_x21) goto LAB_1099ac160;
                }
              }
LAB_1099ac160:
              plVar13 = plRam000000011374c040;
              func_0x000107c31940(&uStack_2e0,&UNK_10f593384);
              FUN_1094d24d0(plVar13,&uStack_2e0);
              if ((char)uStack_2d0._7_1_ < '\0') {
                __ZdlPv(uStack_2e0);
              }
            }
            else {
              func_0x000107c2ac70(plVar13,0x11374c078);
            }
          }
          plVar13 = plRam000000011374c040;
          puVar17 = (undefined8 *)*plRam000000011374c040;
          ppuStack_500 = param_5;
          if (puVar17 != (undefined8 *)plRam000000011374c040[1]) {
            unaff_x21 = (undefined ***)&uStack_1a0;
            param_4 = (undefined8 *******)&uStack_2e0;
            do {
              uVar16 = puVar17[1];
              if (-1 < (char)*(byte *)((long)puVar17 + 0x17)) {
                uVar16 = (ulong)*(byte *)((long)puVar17 + 0x17);
              }
              func_0x000104c4f768(&uStack_2e0,uVar16 + 1,&pppppppuStack_1c0);
              pppppppuVar12 = (undefined8 *******)uStack_2e0;
              if (-1 < (char)uStack_2d0._7_1_) {
                pppppppuVar12 = param_4;
              }
              if (uVar16 != 0) {
                puVar15 = (undefined8 *)*puVar17;
                if (-1 < *(char *)((long)puVar17 + 0x17)) {
                  puVar15 = puVar17;
                }
                _memmove(pppppppuVar12,puVar15,uVar16);
              }
              *(undefined2 *)((long)pppppppuVar12 + uVar16) = 0x2f;
              uVar16 = CONCAT17(uStack_451,uStack_458);
              pppppppuVar12 = pppppppuStack_460;
              if (-1 < (char)bStack_449) {
                uVar16 = (ulong)bStack_449;
                pppppppuVar12 = &pppppppuStack_460;
              }
              puVar15 = &uStack_2e0;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                        (puVar15,pppppppuVar12,uVar16);
              uVar4 = *puVar15;
              uStack_1a0._0_7_ = (undefined7)puVar15[1];
              uStack_1a0._7_1_ = (undefined1)*(undefined8 *)((long)puVar15 + 0xf);
              uStack_198._0_7_ = (undefined7)((ulong)*(undefined8 *)((long)puVar15 + 0xf) >> 8);
              uVar6 = *(undefined1 *)((long)puVar15 + 0x17);
              puVar15[1] = 0;
              puVar15[2] = 0;
              *puVar15 = 0;
              if (*(char *)(param_1 + 0xf7) < '\0') {
                __ZdlPv(*(undefined8 *)(param_1 + 0xe0));
              }
              *(undefined8 *)(param_1 + 0xe0) = uVar4;
              *(ulong *)(param_1 + 0xe8) = CONCAT17(uStack_1a0._7_1_,(undefined7)uStack_1a0);
              *(ulong *)(param_1 + 0xef) = CONCAT71((undefined7)uStack_198,uStack_1a0._7_1_);
              *(undefined1 *)(param_1 + 0xf7) = uVar6;
              if ((char)uStack_2d0._7_1_ < '\0') {
                __ZdlPv(uStack_2e0);
              }
              uVar16 = param_1;
              FUN_1099ace0c(param_1,apppppppuStack_448);
              if ((uVar16 & 1) != 0) {
                if ((long)uStack_480 < 0) {
                  __ZdlPv(pppppppuStack_490);
                }
                if ((long)uStack_468 < 0) {
                  __ZdlPv(pppppppuStack_478);
                }
                param_5 = ppuStack_500;
                if ((char)bStack_449 < '\0') {
                  __ZdlPv(pppppppuStack_460);
                }
                goto LAB_1099ac3d4;
              }
              puVar17 = puVar17 + 3;
              param_5 = param_2;
            } while (puVar17 != (undefined8 *)plVar13[1]);
          }
          _perror(&UNK_10f593853);
          pppppppuStack_510 = apppppppuStack_448[0];
          if (-1 < cStack_431) {
            pppppppuStack_510 = apppppppuStack_448;
          }
          _fprintf(*(undefined8 *)PTR____stderrp_11034bdc8,&UNK_10f593871);
          if ((long)uStack_480 < 0) {
            __ZdlPv(pppppppuStack_490);
          }
          if ((long)uStack_468 < 0) {
            __ZdlPv(pppppppuStack_478);
          }
          if ((char)bStack_449 < '\0') {
            __ZdlPv(pppppppuStack_460);
          }
        }
        if (cStack_431 < '\0') {
          __ZdlPv(apppppppuStack_448[0]);
        }
        apppppppuStack_3c0[0] = (undefined *******)&PTR_DAT_11088d708;
        appuStack_430[0] = &PTR_SUB_11088d6e0;
        appuStack_430[1] = &PTR_DAT_11088d7b0;
        if (cStack_3d1 < '\0') {
          __ZdlPv(uStack_3e8);
        }
        appuStack_430[1] =
             (undefined **)
             (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
        __ZNSt3__16localeD1Ev(auStack_420);
        ppuVar21 = &PTR_PTR_11088d720;
        __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(appuStack_430);
        __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(apppppppuStack_3c0);
      }
    }
LAB_1099acafc:
    ppppppppuVar10 = (undefined ********)&ppppppppuStack_2f0;
    FUN_1099ab9f4();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
      return ppppppppuVar10;
    }
    ___stack_chk_fail();
  }
  _abort();
  if ((char)uStack_2d0._7_1_ < '\0') {
    __ZdlPv(uStack_2e0);
  }
  if ((long)uStack_480 < 0) {
    __ZdlPv(pppppppuStack_490);
  }
  if ((long)uStack_468 < 0) {
    __ZdlPv(pppppppuStack_478);
  }
  if ((char)bStack_449 < '\0') {
    __ZdlPv(pppppppuStack_460);
  }
  if (cStack_431 < '\0') {
    __ZdlPv(apppppppuStack_448[0]);
  }
  func_0x000105490284(appuStack_430);
  FUN_1099ab9f4(&ppppppppuStack_2f0);
  ppppppppuVar18 = ppppppppuVar10;
  __Unwind_Resume();
  pcStack_518 = FUN_1099acd64;
  ppppppppuVar25 = ppppppppuVar18 + 1;
  ppppppppuStack_538 = ppppppppuVar25;
  ppuStack_530 = param_5;
  ppppppppuStack_528 = ppppppppuVar10;
  puStack_520 = &stack0xfffffffffffffff0;
  if ((*(char *)(ppppppppuVar18 + 0x1a) != '\x01') ||
     (_pthread_rwlock_wrlock(), (int)ppppppppuVar25 == 0)) {
    FUN_1099ad2b4(ppppppppuVar18);
    ppppppppuVar10 = (undefined ********)&ppppppppuStack_538;
    FUN_1099ab9f4(ppppppppuVar10);
    return ppppppppuVar10;
  }
  _abort();
  uStack_548 = 0x1099acdb8;
  ppppppppuVar10 = ppppppppuVar25 + 1;
  ppppppppuStack_568 = ppppppppuVar10;
  ppuStack_560 = param_5;
  ppppppppuStack_558 = ppppppppuVar18;
  ppuStack_550 = &puStack_520;
  if ((*(char *)(ppppppppuVar25 + 0x1a) != '\x01') ||
     (_pthread_rwlock_wrlock(), (int)ppppppppuVar10 == 0)) {
    uVar5 = *(uint *)((long)ppppppppuVar25 + 0x13c);
    FUN_1099ab9f4(&ppppppppuStack_568);
    return (undefined ********)(ulong)uVar5;
  }
  _abort();
  pcStack_578 = FUN_1099ace0c;
  lStack_5a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppuStack_5a0 = param_4;
  pppuStack_598 = unaff_x21;
  ppuStack_590 = param_5;
  ppppppppuStack_588 = ppppppppuVar25;
  pppuStack_580 = &ppuStack_550;
  if (*(char *)((long)ppppppppuVar10 + 0xf7) < '\0') {
    func_0x000107c3192c(&ppppppppuStack_5e0,ppppppppuVar10[0x1c],ppppppppuVar10[0x1d]);
  }
  else {
    pppppppuStack_5d8 = ppppppppuVar10[0x1d];
    ppppppppuStack_5e0 = (undefined ********)ppppppppuVar10[0x1c];
    pppppppuStack_5d0 = ppppppppuVar10[0x1e];
  }
  if ((bRam000000011374c020 & 1) != 0) {
    puVar22 = ppuVar21[1];
    ppuVar8 = (undefined **)*ppuVar21;
    if (-1 < (char)*(byte *)((long)ppuVar21 + 0x17)) {
      puVar22 = (undefined *)(ulong)*(byte *)((long)ppuVar21 + 0x17);
      ppuVar8 = ppuVar21;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&ppppppppuStack_5e0,ppuVar8,puVar22);
  }
  pppppppuVar3 = ppppppppuVar10[0x23];
  ppppppppuVar25 = (undefined ********)ppppppppuVar10[0x22];
  if (-1 < (char)*(byte *)((long)ppppppppuVar10 + 0x127)) {
    pppppppuVar3 = (undefined *******)(ulong)*(byte *)((long)ppppppppuVar10 + 0x127);
    ppppppppuVar25 = ppppppppuVar10 + 0x22;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&ppppppppuStack_5e0,ppppppppuVar25,pppppppuVar3);
  ppppppppuVar25 = ppppppppuStack_5e0;
  if (-1 < (long)pppppppuStack_5d0) {
    ppppppppuVar25 = (undefined ********)&ppppppppuStack_5e0;
  }
  uVar24 = 0xa01;
  if ((bRam000000011374c020 & 1) == 0) {
    uVar24 = 0x201;
  }
  uStack_640 = (ulong)uRam000000011374c038;
  ppppppppuVar19 = ppppppppuVar25;
  _open(ppppppppuVar25,uVar24);
  ppppppppuVar18 = ppppppppuVar19;
  if ((int)ppppppppuVar19 != -1) {
    uStack_640 = 1;
    _fcntl(ppppppppuVar19,2);
    uRam000000011374c11c = 3;
    uRam000000011374c108 = 0;
    uRam000000011374c110 = 0;
    uStack_640 = 0x11374c108;
    ppppppppuVar20 = ppppppppuVar19;
    _fcntl(ppppppppuVar19,8);
    if ((int)ppppppppuVar20 == -1) {
      _close();
      ppppppppuVar18 = ppppppppuVar19;
    }
    else {
      _fdopen(ppppppppuVar19,&DAT_10f3dc16b);
      ppppppppuVar10[0x25] = (undefined *******)ppppppppuVar18;
      if (ppppppppuVar18 != (undefined ********)0x0) {
        if (*(char *)((long)ppppppppuVar10 + 0x10f) < '\0') {
          if (ppppppppuVar10[0x20] != (undefined *******)0x0) goto LAB_1099acf98;
        }
        else if (*(char *)((long)ppppppppuVar10 + 0x10f) != '\0') {
LAB_1099acf98:
          ppppppppuVar19 = ppppppppuVar25;
          _strrchr(ppppppppuVar25,0x2f);
          FUN_10969bbd0(&ppppppppuStack_620,ppppppppuVar10 + 0x1f,0x2e);
          puVar26 = (&PTR_DAT_110b1f060)[*(int *)(ppppppppuVar10 + 0x26)];
          puVar22 = puVar26;
          _strlen(puVar26);
          ppppppppuVar10 = (undefined ********)&ppppppppuStack_620;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (ppppppppuVar10,puVar26,puVar22);
          pppppppuStack_5f8 = ppppppppuVar10[1];
          ppppppppuStack_600 = (undefined ********)*ppppppppuVar10;
          pppppppuStack_5f0 = ppppppppuVar10[2];
          ppppppppuVar10[1] = (undefined *******)0x0;
          ppppppppuVar10[2] = (undefined *******)0x0;
          *ppppppppuVar10 = (undefined *******)0x0;
          if (cStack_609 < '\0') {
            __ZdlPv(ppppppppuStack_620);
          }
          ppppppppuStack_620 = (undefined ********)0x0;
          uStack_618 = 0;
          uStack_611 = 0;
          uStack_610 = 0;
          cStack_609 = '\0';
          if (ppppppppuVar19 != (undefined ********)0x0) {
            func_0x000104c54c8c(appppppppuStack_638,ppppppppuVar25,
                                (long)ppppppppuVar19 + (1 - (long)ppppppppuVar25));
            if (cStack_609 < '\0') {
              __ZdlPv(ppppppppuStack_620);
            }
            uStack_618 = SUB87(appppppppuStack_638[1],0);
            uStack_611 = (undefined1)((ulong)appppppppuStack_638[1] >> 0x38);
            ppppppppuStack_620 = appppppppuStack_638[0];
            uStack_610 = uStack_628;
            cStack_609 = cStack_621;
          }
          pppppppuVar3 = pppppppuStack_5f8;
          ppppppppuVar10 = ppppppppuStack_600;
          if (-1 < (long)pppppppuStack_5f0) {
            pppppppuVar3 = (undefined *******)((ulong)pppppppuStack_5f0 >> 0x38);
            ppppppppuVar10 = (undefined ********)&ppppppppuStack_600;
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (&ppppppppuStack_620,ppppppppuVar10,pppppppuVar3);
          ppppppppuVar10 = ppppppppuStack_620;
          if (-1 < cStack_609) {
            ppppppppuVar10 = (undefined ********)&ppppppppuStack_620;
          }
          _unlink(ppppppppuVar10);
          ppppppppuVar18 = ppppppppuVar25;
          if (ppppppppuVar19 != (undefined ********)0x0) {
            ppppppppuVar18 = (undefined ********)((long)ppppppppuVar19 + 1);
          }
          ppppppppuVar10 = ppppppppuStack_620;
          if (-1 < cStack_609) {
            ppppppppuVar10 = (undefined ********)&ppppppppuStack_620;
          }
          _symlink(ppppppppuVar18,ppppppppuVar10);
          uVar16 = uRam000000011374c098;
          if (-1 < (char)bRam000000011374c0a7) {
            uVar16 = (ulong)bRam000000011374c0a7;
          }
          ppppppppuVar10 = (undefined ********)0x0;
          if (uVar16 != 0) {
            func_0x000104c4f768(appppppppuStack_638,uVar16 + 1,&uStack_5b9);
            ppppppppuVar10 = appppppppuStack_638[0];
            if (-1 < cStack_621) {
              ppppppppuVar10 = (undefined ********)appppppppuStack_638;
            }
            uVar4 = uRam000000011374c090;
            if (-1 < (char)bRam000000011374c0a7) {
              uVar4 = 0x11374c090;
            }
            _memmove(ppppppppuVar10,uVar4,uVar16);
            *(undefined2 *)((long)ppppppppuVar10 + uVar16) = 0x2f;
            pppppppuVar3 = pppppppuStack_5f8;
            ppppppppuVar10 = ppppppppuStack_600;
            if (-1 < (long)pppppppuStack_5f0) {
              pppppppuVar3 = (undefined *******)((ulong)pppppppuStack_5f0 >> 0x38);
              ppppppppuVar10 = (undefined ********)&ppppppppuStack_600;
            }
            ppppppppuVar18 = (undefined ********)appppppppuStack_638;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (ppppppppuVar18,ppppppppuVar10,pppppppuVar3);
            ppppppppuVar10 = (undefined ********)*ppppppppuVar18;
            uStack_5b8 = SUB87(ppppppppuVar18[1],0);
            uStack_5b1 = (undefined1)*(undefined8 *)((long)ppppppppuVar18 + 0xf);
            uStack_5b0 = (undefined7)((ulong)*(undefined8 *)((long)ppppppppuVar18 + 0xf) >> 8);
            cVar7 = *(char *)((long)ppppppppuVar18 + 0x17);
            ppppppppuVar18[1] = (undefined *******)0x0;
            ppppppppuVar18[2] = (undefined *******)0x0;
            *ppppppppuVar18 = (undefined *******)0x0;
            if (cStack_609 < '\0') {
              __ZdlPv(ppppppppuStack_620);
            }
            uStack_618 = uStack_5b8;
            uStack_611 = uStack_5b1;
            uStack_610 = uStack_5b0;
            ppppppppuStack_620 = ppppppppuVar10;
            cStack_609 = cVar7;
            if (cStack_621 < '\0') {
              __ZdlPv(appppppppuStack_638[0]);
            }
            ppppppppuVar10 = ppppppppuStack_620;
            ppppppppuVar18 = ppppppppuStack_620;
            if (-1 < cStack_609) {
              ppppppppuVar18 = (undefined ********)&ppppppppuStack_620;
            }
            _unlink(ppppppppuVar18);
            ppppppppuVar18 = ppppppppuStack_620;
            if (-1 < cStack_609) {
              ppppppppuVar18 = (undefined ********)&ppppppppuStack_620;
            }
            _symlink(ppppppppuVar25,ppppppppuVar18);
            ppppppppuVar18 = ppppppppuVar25;
          }
          if (cStack_609 < '\0') {
            ppppppppuVar18 = ppppppppuStack_620;
            __ZdlPv();
          }
          if ((long)pppppppuStack_5f0 < 0) {
            ppppppppuVar18 = ppppppppuStack_600;
            __ZdlPv();
          }
        }
        ppppppppuVar25 = (undefined ********)0x1;
        goto LAB_1099ad1e0;
      }
      _close();
      ppppppppuVar18 = ppppppppuVar19;
      if ((bRam000000011374c020 & 1) != 0) {
        _unlink();
        ppppppppuVar18 = ppppppppuVar25;
      }
    }
  }
  ppppppppuVar25 = (undefined ********)0x0;
LAB_1099ad1e0:
  if ((long)pppppppuStack_5d0 < 0) {
    ppppppppuVar18 = ppppppppuStack_5e0;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5a8) {
    return ppppppppuVar25;
  }
  ___stack_chk_fail();
  if (cStack_621 < '\0') {
    __ZdlPv(appppppppuStack_638[0]);
  }
  if (cStack_609 < '\0') {
    __ZdlPv(ppppppppuStack_620);
  }
  if ((long)pppppppuStack_5f0 < 0) {
    __ZdlPv(ppppppppuStack_600);
  }
  if ((long)pppppppuStack_5d0 < 0) {
    __ZdlPv(ppppppppuStack_5e0);
  }
  ppppppppuVar25 = ppppppppuVar18;
  __Unwind_Resume();
  ppppppppuVar19 = &pppppppuStack_670;
  pcStack_648 = FUN_1099ad2b4;
  ppppppppuStack_660 = ppppppppuVar10;
  ppppppppuStack_658 = ppppppppuVar18;
  ppppuStack_650 = &pppuStack_580;
  if (ppppppppuVar25[0x25] != (undefined *******)0x0) {
    _fflush();
    *(undefined4 *)((long)ppppppppuVar25 + 0x134) = 0;
  }
  lVar27 = (long)iRam000000011382babc;
  _gettimeofday(&pppppppuStack_670,0);
  ppppppppuVar25[0x29] =
       (undefined *******)((long)iStack_668 + ((long)pppppppuStack_670 + lVar27) * 1000000);
  return ppppppppuVar19;
}



/* Entry: 1099acd64; end: 1099ace0b;  */

long * FUN_1099acd64(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 ***pppuVar3;
  uint uVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  undefined8 ****ppppuVar9;
  undefined8 ****ppppuVar10;
  undefined8 ****ppppuVar11;
  undefined *puVar12;
  undefined4 uVar13;
  long *plVar14;
  undefined *puVar15;
  long lVar16;
  long lStack_160;
  int iStack_158;
  undefined8 ***pppuStack_150;
  undefined8 ***pppuStack_148;
  undefined1 ***pppuStack_140;
  code *pcStack_138;
  ulong uStack_130;
  undefined8 ***apppuStack_128 [2];
  undefined7 uStack_118;
  char cStack_111;
  undefined8 ***pppuStack_110;
  undefined7 uStack_108;
  undefined1 uStack_101;
  undefined7 uStack_100;
  char cStack_f9;
  undefined8 ***pppuStack_f0;
  undefined8 **ppuStack_e8;
  undefined8 **ppuStack_e0;
  undefined8 ***pppuStack_d0;
  undefined8 **ppuStack_c8;
  undefined8 **ppuStack_c0;
  undefined1 uStack_a9;
  undefined7 uStack_a8;
  undefined1 uStack_a1;
  undefined7 uStack_a0;
  long lStack_98;
  undefined1 **ppuStack_70;
  code *pcStack_68;
  undefined8 ***pppuStack_58;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  lVar16 = param_1 + 8;
  lStack_28 = lVar16;
  if ((*(char *)(param_1 + 0xd0) != '\x01') || (_pthread_rwlock_wrlock(), (int)lVar16 == 0)) {
    FUN_1099ad2b4(param_1);
    plVar14 = &lStack_28;
    FUN_1099ab9f4(plVar14);
    return plVar14;
  }
  _abort();
  uStack_38 = 0x1099acdb8;
  ppppuVar7 = (undefined8 ****)(lVar16 + 8);
  pppuStack_58 = ppppuVar7;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((*(char *)(lVar16 + 0xd0) != '\x01') || (_pthread_rwlock_wrlock(), (int)ppppuVar7 == 0)) {
    uVar4 = *(uint *)(lVar16 + 0x13c);
    FUN_1099ab9f4(&pppuStack_58);
    return (long *)(ulong)uVar4;
  }
  _abort();
  pcStack_68 = FUN_1099ace0c;
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_70 = &puStack_40;
  if (*(char *)((long)ppppuVar7 + 0xf7) < '\0') {
    func_0x000107c3192c(&pppuStack_d0,ppppuVar7[0x1c],ppppuVar7[0x1d]);
  }
  else {
    ppuStack_c8 = ppppuVar7[0x1d];
    pppuStack_d0 = ppppuVar7[0x1c];
    ppuStack_c0 = ppppuVar7[0x1e];
  }
  if ((bRam000000011374c020 & 1) != 0) {
    uVar1 = param_2[1];
    puVar6 = (undefined8 *)*param_2;
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
      puVar6 = param_2;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&pppuStack_d0,puVar6,uVar1);
  }
  pppuVar3 = ppppuVar7[0x23];
  ppppuVar11 = (undefined8 ****)ppppuVar7[0x22];
  if (-1 < (char)*(byte *)((long)ppppuVar7 + 0x127)) {
    pppuVar3 = (undefined8 ***)(ulong)*(byte *)((long)ppppuVar7 + 0x127);
    ppppuVar11 = ppppuVar7 + 0x22;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&pppuStack_d0,ppppuVar11,pppuVar3);
  ppppuVar11 = (undefined8 ****)pppuStack_d0;
  if (-1 < (long)ppuStack_c0) {
    ppppuVar11 = &pppuStack_d0;
  }
  uVar13 = 0xa01;
  if ((bRam000000011374c020 & 1) == 0) {
    uVar13 = 0x201;
  }
  uStack_130 = (ulong)uRam000000011374c038;
  ppppuVar8 = ppppuVar11;
  _open(ppppuVar11,uVar13);
  ppppuVar10 = ppppuVar8;
  if ((int)ppppuVar8 != -1) {
    uStack_130 = 1;
    _fcntl(ppppuVar8,2);
    uRam000000011374c11c = 3;
    uRam000000011374c108 = 0;
    uRam000000011374c110 = 0;
    uStack_130 = 0x11374c108;
    ppppuVar9 = ppppuVar8;
    _fcntl(ppppuVar8,8);
    if ((int)ppppuVar9 == -1) {
      _close();
      ppppuVar10 = ppppuVar8;
    }
    else {
      _fdopen(ppppuVar8,&DAT_10f3dc16b);
      ppppuVar7[0x25] = ppppuVar10;
      if (ppppuVar10 != (undefined8 ****)0x0) {
        if (*(char *)((long)ppppuVar7 + 0x10f) < '\0') {
          if (ppppuVar7[0x20] != (undefined8 ***)0x0) goto LAB_1099acf98;
        }
        else if (*(char *)((long)ppppuVar7 + 0x10f) != '\0') {
LAB_1099acf98:
          ppppuVar8 = ppppuVar11;
          _strrchr(ppppuVar11,0x2f);
          FUN_10969bbd0(&pppuStack_110,ppppuVar7 + 0x1f,0x2e);
          puVar15 = (&PTR_DAT_110b1f060)[*(int *)(ppppuVar7 + 0x26)];
          puVar12 = puVar15;
          _strlen(puVar15);
          ppppuVar7 = &pppuStack_110;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (ppppuVar7,puVar15,puVar12);
          ppuStack_e8 = ppppuVar7[1];
          pppuStack_f0 = *ppppuVar7;
          ppuStack_e0 = ppppuVar7[2];
          ppppuVar7[1] = (undefined8 ***)0x0;
          ppppuVar7[2] = (undefined8 ***)0x0;
          *ppppuVar7 = (undefined8 ***)0x0;
          if (cStack_f9 < '\0') {
            __ZdlPv(pppuStack_110);
          }
          pppuStack_110 = (undefined8 ****)0x0;
          uStack_108 = 0;
          uStack_101 = 0;
          uStack_100 = 0;
          cStack_f9 = '\0';
          if (ppppuVar8 != (undefined8 ****)0x0) {
            func_0x000104c54c8c(apppuStack_128,ppppuVar11,(long)ppppuVar8 + (1 - (long)ppppuVar11));
            if (cStack_f9 < '\0') {
              __ZdlPv(pppuStack_110);
            }
            uStack_108 = SUB87(apppuStack_128[1],0);
            uStack_101 = (undefined1)((ulong)apppuStack_128[1] >> 0x38);
            pppuStack_110 = apppuStack_128[0];
            uStack_100 = uStack_118;
            cStack_f9 = cStack_111;
          }
          pppuVar3 = (undefined8 ***)ppuStack_e8;
          ppppuVar7 = (undefined8 ****)pppuStack_f0;
          if (-1 < (long)ppuStack_e0) {
            pppuVar3 = (undefined8 ***)((ulong)ppuStack_e0 >> 0x38);
            ppppuVar7 = &pppuStack_f0;
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (&pppuStack_110,ppppuVar7,pppuVar3);
          ppppuVar7 = (undefined8 ****)pppuStack_110;
          if (-1 < cStack_f9) {
            ppppuVar7 = &pppuStack_110;
          }
          _unlink(ppppuVar7);
          ppppuVar10 = ppppuVar11;
          if (ppppuVar8 != (undefined8 ****)0x0) {
            ppppuVar10 = (undefined8 ****)((long)ppppuVar8 + 1);
          }
          ppppuVar7 = (undefined8 ****)pppuStack_110;
          if (-1 < cStack_f9) {
            ppppuVar7 = &pppuStack_110;
          }
          _symlink(ppppuVar10,ppppuVar7);
          uVar1 = uRam000000011374c098;
          if (-1 < (char)bRam000000011374c0a7) {
            uVar1 = (ulong)bRam000000011374c0a7;
          }
          ppppuVar7 = (undefined8 ****)0x0;
          if (uVar1 != 0) {
            func_0x000104c4f768(apppuStack_128,uVar1 + 1,&uStack_a9);
            ppppuVar7 = (undefined8 ****)apppuStack_128[0];
            if (-1 < cStack_111) {
              ppppuVar7 = apppuStack_128;
            }
            uVar2 = uRam000000011374c090;
            if (-1 < (char)bRam000000011374c0a7) {
              uVar2 = 0x11374c090;
            }
            _memmove(ppppuVar7,uVar2,uVar1);
            *(undefined2 *)((long)ppppuVar7 + uVar1) = 0x2f;
            pppuVar3 = (undefined8 ***)ppuStack_e8;
            ppppuVar7 = (undefined8 ****)pppuStack_f0;
            if (-1 < (long)ppuStack_e0) {
              pppuVar3 = (undefined8 ***)((ulong)ppuStack_e0 >> 0x38);
              ppppuVar7 = &pppuStack_f0;
            }
            ppppuVar10 = apppuStack_128;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (ppppuVar10,ppppuVar7,pppuVar3);
            ppppuVar7 = (undefined8 ****)*ppppuVar10;
            uStack_a8 = SUB87(ppppuVar10[1],0);
            uStack_a1 = (undefined1)*(undefined8 *)((long)ppppuVar10 + 0xf);
            uStack_a0 = (undefined7)((ulong)*(undefined8 *)((long)ppppuVar10 + 0xf) >> 8);
            cVar5 = *(char *)((long)ppppuVar10 + 0x17);
            ppppuVar10[1] = (undefined8 ***)0x0;
            ppppuVar10[2] = (undefined8 ***)0x0;
            *ppppuVar10 = (undefined8 ***)0x0;
            if (cStack_f9 < '\0') {
              __ZdlPv(pppuStack_110);
            }
            uStack_108 = uStack_a8;
            uStack_101 = uStack_a1;
            uStack_100 = uStack_a0;
            pppuStack_110 = ppppuVar7;
            cStack_f9 = cVar5;
            if (cStack_111 < '\0') {
              __ZdlPv(apppuStack_128[0]);
            }
            ppppuVar7 = (undefined8 ****)pppuStack_110;
            ppppuVar10 = (undefined8 ****)pppuStack_110;
            if (-1 < cStack_f9) {
              ppppuVar10 = &pppuStack_110;
            }
            _unlink(ppppuVar10);
            ppppuVar10 = (undefined8 ****)pppuStack_110;
            if (-1 < cStack_f9) {
              ppppuVar10 = &pppuStack_110;
            }
            _symlink(ppppuVar11,ppppuVar10);
            ppppuVar10 = ppppuVar11;
          }
          if (cStack_f9 < '\0') {
            ppppuVar10 = (undefined8 ****)pppuStack_110;
            __ZdlPv();
          }
          if ((long)ppuStack_e0 < 0) {
            ppppuVar10 = (undefined8 ****)pppuStack_f0;
            __ZdlPv();
          }
        }
        plVar14 = (long *)0x1;
        goto LAB_1099ad1e0;
      }
      _close();
      ppppuVar10 = ppppuVar8;
      if ((bRam000000011374c020 & 1) != 0) {
        _unlink();
        ppppuVar10 = ppppuVar11;
      }
    }
  }
  plVar14 = (long *)0x0;
LAB_1099ad1e0:
  if ((long)ppuStack_c0 < 0) {
    ppppuVar10 = (undefined8 ****)pppuStack_d0;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return plVar14;
  }
  ___stack_chk_fail();
  if (cStack_111 < '\0') {
    __ZdlPv(apppuStack_128[0]);
  }
  if (cStack_f9 < '\0') {
    __ZdlPv(pppuStack_110);
  }
  if ((long)ppuStack_e0 < 0) {
    __ZdlPv(pppuStack_f0);
  }
  if ((long)ppuStack_c0 < 0) {
    __ZdlPv(pppuStack_d0);
  }
  ppppuVar11 = ppppuVar10;
  __Unwind_Resume();
  plVar14 = &lStack_160;
  pcStack_138 = FUN_1099ad2b4;
  pppuStack_150 = ppppuVar7;
  pppuStack_148 = ppppuVar10;
  pppuStack_140 = &ppuStack_70;
  if (ppppuVar11[0x25] != (undefined8 ***)0x0) {
    _fflush();
    *(undefined4 *)((long)ppppuVar11 + 0x134) = 0;
  }
  lVar16 = (long)iRam000000011382babc;
  _gettimeofday(&lStack_160,0);
  ppppuVar11[0x29] = (undefined8 ***)((long)iStack_158 + (lStack_160 + lVar16) * 1000000);
  return plVar14;
}



/* Entry: 1099ace0c; end: 1099ad2b3;  */

undefined1 * FUN_1099ace0c(undefined8 ****param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 ***pppuVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 ****ppppuVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  undefined8 ****ppppuVar9;
  undefined *puVar10;
  long *plVar11;
  undefined4 uVar12;
  undefined1 *puVar13;
  undefined *puVar14;
  long lVar15;
  long lStack_100;
  int iStack_f8;
  undefined8 ***pppuStack_f0;
  undefined8 ***pppuStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  ulong uStack_d0;
  undefined8 ***apppuStack_c8 [2];
  undefined7 uStack_b8;
  char cStack_b1;
  undefined8 ***pppuStack_b0;
  undefined7 uStack_a8;
  undefined1 uStack_a1;
  undefined7 uStack_a0;
  char cStack_99;
  undefined8 ***pppuStack_90;
  undefined8 **ppuStack_88;
  undefined8 **ppuStack_80;
  undefined8 ***pppuStack_70;
  undefined8 **ppuStack_68;
  undefined8 **ppuStack_60;
  undefined1 uStack_49;
  undefined7 uStack_48;
  undefined1 uStack_41;
  undefined7 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)((long)param_1 + 0xf7) < '\0') {
    func_0x000107c3192c(&pppuStack_70,param_1[0x1c],param_1[0x1d]);
  }
  else {
    ppuStack_68 = param_1[0x1d];
    pppuStack_70 = param_1[0x1c];
    ppuStack_60 = param_1[0x1e];
  }
  if ((bRam000000011374c020 & 1) != 0) {
    uVar1 = param_2[1];
    puVar5 = (undefined8 *)*param_2;
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
      puVar5 = param_2;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&pppuStack_70,puVar5,uVar1);
  }
  pppuVar3 = param_1[0x23];
  ppppuVar9 = (undefined8 ****)param_1[0x22];
  if (-1 < (char)*(byte *)((long)param_1 + 0x127)) {
    pppuVar3 = (undefined8 ***)(ulong)*(byte *)((long)param_1 + 0x127);
    ppppuVar9 = param_1 + 0x22;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&pppuStack_70,ppppuVar9,pppuVar3);
  ppppuVar9 = (undefined8 ****)pppuStack_70;
  if (-1 < (long)ppuStack_60) {
    ppppuVar9 = &pppuStack_70;
  }
  uVar12 = 0xa01;
  if ((bRam000000011374c020 & 1) == 0) {
    uVar12 = 0x201;
  }
  uStack_d0 = (ulong)uRam000000011374c038;
  ppppuVar6 = ppppuVar9;
  _open(ppppuVar9,uVar12);
  ppppuVar8 = ppppuVar6;
  if ((int)ppppuVar6 != -1) {
    uStack_d0 = 1;
    _fcntl(ppppuVar6,2);
    uRam000000011374c11c = 3;
    uRam000000011374c108 = 0;
    uRam000000011374c110 = 0;
    uStack_d0 = 0x11374c108;
    ppppuVar7 = ppppuVar6;
    _fcntl(ppppuVar6,8);
    if ((int)ppppuVar7 == -1) {
      _close();
      ppppuVar8 = ppppuVar6;
    }
    else {
      _fdopen(ppppuVar6,&DAT_10f3dc16b);
      param_1[0x25] = ppppuVar8;
      if (ppppuVar8 != (undefined8 ****)0x0) {
        if (*(char *)((long)param_1 + 0x10f) < '\0') {
          if (param_1[0x20] != (undefined8 ***)0x0) goto LAB_1099acf98;
        }
        else if (*(char *)((long)param_1 + 0x10f) != '\0') {
LAB_1099acf98:
          ppppuVar6 = ppppuVar9;
          _strrchr(ppppuVar9,0x2f);
          FUN_10969bbd0(&pppuStack_b0,param_1 + 0x1f,0x2e);
          puVar14 = (&PTR_DAT_110b1f060)[*(int *)(param_1 + 0x26)];
          puVar10 = puVar14;
          _strlen(puVar14);
          ppppuVar8 = &pppuStack_b0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (ppppuVar8,puVar14,puVar10);
          ppuStack_88 = ppppuVar8[1];
          pppuStack_90 = *ppppuVar8;
          ppuStack_80 = ppppuVar8[2];
          ppppuVar8[1] = (undefined8 ***)0x0;
          ppppuVar8[2] = (undefined8 ***)0x0;
          *ppppuVar8 = (undefined8 ***)0x0;
          if (cStack_99 < '\0') {
            __ZdlPv(pppuStack_b0);
          }
          pppuStack_b0 = (undefined8 ****)0x0;
          uStack_a8 = 0;
          uStack_a1 = 0;
          uStack_a0 = 0;
          cStack_99 = '\0';
          if (ppppuVar6 != (undefined8 ****)0x0) {
            func_0x000104c54c8c(apppuStack_c8,ppppuVar9,(long)ppppuVar6 + (1 - (long)ppppuVar9));
            if (cStack_99 < '\0') {
              __ZdlPv(pppuStack_b0);
            }
            uStack_a8 = SUB87(apppuStack_c8[1],0);
            uStack_a1 = (undefined1)((ulong)apppuStack_c8[1] >> 0x38);
            pppuStack_b0 = apppuStack_c8[0];
            uStack_a0 = uStack_b8;
            cStack_99 = cStack_b1;
          }
          pppuVar3 = (undefined8 ***)ppuStack_88;
          ppppuVar8 = (undefined8 ****)pppuStack_90;
          if (-1 < (long)ppuStack_80) {
            pppuVar3 = (undefined8 ***)((ulong)ppuStack_80 >> 0x38);
            ppppuVar8 = &pppuStack_90;
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (&pppuStack_b0,ppppuVar8,pppuVar3);
          ppppuVar8 = (undefined8 ****)pppuStack_b0;
          if (-1 < cStack_99) {
            ppppuVar8 = &pppuStack_b0;
          }
          _unlink(ppppuVar8);
          ppppuVar8 = ppppuVar9;
          if (ppppuVar6 != (undefined8 ****)0x0) {
            ppppuVar8 = (undefined8 ****)((long)ppppuVar6 + 1);
          }
          ppppuVar6 = (undefined8 ****)pppuStack_b0;
          if (-1 < cStack_99) {
            ppppuVar6 = &pppuStack_b0;
          }
          _symlink(ppppuVar8,ppppuVar6);
          uVar1 = uRam000000011374c098;
          if (-1 < (char)bRam000000011374c0a7) {
            uVar1 = (ulong)bRam000000011374c0a7;
          }
          param_1 = (undefined8 ****)0x0;
          if (uVar1 != 0) {
            func_0x000104c4f768(apppuStack_c8,uVar1 + 1,&uStack_49);
            ppppuVar8 = (undefined8 ****)apppuStack_c8[0];
            if (-1 < cStack_b1) {
              ppppuVar8 = apppuStack_c8;
            }
            uVar2 = uRam000000011374c090;
            if (-1 < (char)bRam000000011374c0a7) {
              uVar2 = 0x11374c090;
            }
            _memmove(ppppuVar8,uVar2,uVar1);
            *(undefined2 *)((long)ppppuVar8 + uVar1) = 0x2f;
            pppuVar3 = (undefined8 ***)ppuStack_88;
            ppppuVar8 = (undefined8 ****)pppuStack_90;
            if (-1 < (long)ppuStack_80) {
              pppuVar3 = (undefined8 ***)((ulong)ppuStack_80 >> 0x38);
              ppppuVar8 = &pppuStack_90;
            }
            ppppuVar6 = apppuStack_c8;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (ppppuVar6,ppppuVar8,pppuVar3);
            ppppuVar8 = (undefined8 ****)*ppppuVar6;
            uStack_48 = SUB87(ppppuVar6[1],0);
            uStack_41 = (undefined1)*(undefined8 *)((long)ppppuVar6 + 0xf);
            uStack_40 = (undefined7)((ulong)*(undefined8 *)((long)ppppuVar6 + 0xf) >> 8);
            cVar4 = *(char *)((long)ppppuVar6 + 0x17);
            ppppuVar6[1] = (undefined8 ***)0x0;
            ppppuVar6[2] = (undefined8 ***)0x0;
            *ppppuVar6 = (undefined8 ***)0x0;
            if (cStack_99 < '\0') {
              __ZdlPv(pppuStack_b0);
            }
            uStack_a8 = uStack_48;
            uStack_a1 = uStack_41;
            uStack_a0 = uStack_40;
            pppuStack_b0 = ppppuVar8;
            cStack_99 = cVar4;
            if (cStack_b1 < '\0') {
              __ZdlPv(apppuStack_c8[0]);
            }
            param_1 = (undefined8 ****)pppuStack_b0;
            ppppuVar8 = (undefined8 ****)pppuStack_b0;
            if (-1 < cStack_99) {
              ppppuVar8 = &pppuStack_b0;
            }
            _unlink(ppppuVar8);
            ppppuVar8 = (undefined8 ****)pppuStack_b0;
            if (-1 < cStack_99) {
              ppppuVar8 = &pppuStack_b0;
            }
            _symlink(ppppuVar9,ppppuVar8);
            ppppuVar8 = ppppuVar9;
          }
          if (cStack_99 < '\0') {
            ppppuVar8 = (undefined8 ****)pppuStack_b0;
            __ZdlPv();
          }
          if ((long)ppuStack_80 < 0) {
            ppppuVar8 = (undefined8 ****)pppuStack_90;
            __ZdlPv();
          }
        }
        puVar13 = (undefined1 *)0x1;
        goto LAB_1099ad1e0;
      }
      _close();
      ppppuVar8 = ppppuVar6;
      if ((bRam000000011374c020 & 1) != 0) {
        _unlink();
        ppppuVar8 = ppppuVar9;
      }
    }
  }
  puVar13 = (undefined1 *)0x0;
LAB_1099ad1e0:
  if ((long)ppuStack_60 < 0) {
    ppppuVar8 = (undefined8 ****)pppuStack_70;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar13;
  }
  ___stack_chk_fail();
  if (cStack_b1 < '\0') {
    __ZdlPv(apppuStack_c8[0]);
  }
  if (cStack_99 < '\0') {
    __ZdlPv(pppuStack_b0);
  }
  if ((long)ppuStack_80 < 0) {
    __ZdlPv(pppuStack_90);
  }
  if ((long)ppuStack_60 < 0) {
    __ZdlPv(pppuStack_70);
  }
  ppppuVar9 = ppppuVar8;
  __Unwind_Resume();
  plVar11 = &lStack_100;
  pcStack_d8 = FUN_1099ad2b4;
  pppuStack_f0 = param_1;
  pppuStack_e8 = ppppuVar8;
  puStack_e0 = &stack0xfffffffffffffff0;
  if (ppppuVar9[0x25] != (undefined8 ***)0x0) {
    _fflush();
    *(undefined4 *)((long)ppppuVar9 + 0x134) = 0;
  }
  lVar15 = (long)iRam000000011382babc;
  _gettimeofday(&lStack_100,0);
  ppppuVar9[0x29] = (undefined8 ***)((long)iStack_f8 + (lStack_100 + lVar15) * 1000000);
  return (undefined1 *)plVar11;
}



/* Entry: 1099ad2b4; end: 1099ad317;  */

void FUN_1099ad2b4(long param_1)

{
  long lVar1;
  long lStack_30;
  int iStack_28;
  
  if (*(long *)(param_1 + 0x128) != 0) {
    _fflush();
    *(undefined4 *)(param_1 + 0x134) = 0;
  }
  lVar1 = (long)iRam000000011382babc;
  _gettimeofday(&lStack_30,0);
  *(long *)(param_1 + 0x148) = (long)iStack_28 + (lStack_30 + lVar1) * 1000000;
  return;
}



/* Entry: 1099ad318; end: 1099ad3a7;  */

long FUN_1099ad318(long param_1)

{
  if (*(long *)(param_1 + 0x7538) != param_1 + 4 && *(long *)(param_1 + 0x7538) != 0) {
    __ZdaPv();
  }
  *(undefined ***)(param_1 + 0x7540) = &PTR_FUN_110b1f110;
  *(undefined ***)(param_1 + 0x7598) = &PTR_DAT_110b1f138;
  *(undefined **)(param_1 + 0x7548) =
       PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10;
  __ZNSt3__16localeD1Ev(param_1 + 0x7550);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(param_1 + 0x7540,&PTR_PTR_110b1f150);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(param_1 + 0x7598);
  return param_1;
}



/* Entry: 1099ad3a8; end: 1099ad59f;  */

undefined8 * FUN_1099ad3a8(undefined8 *param_1)

{
  undefined *puVar1;
  
  param_1[0xb] = &PTR_DAT_110b1f138;
  puVar1 = PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10;
  *param_1 = &PTR_FUN_110b1f110;
  param_1[1] = puVar1;
  __ZNSt3__16localeD1Ev(param_1 + 2);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(param_1,&PTR_PTR_110b1f150);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(param_1 + 0xb);
  return param_1;
}



/* Entry: 1099ad5a0; end: 1099ad5a7;  */

undefined8 FUN_1099ad5a0(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}



/* Entry: 1099ad5a8; end: 1099ad5e7;  */

long * FUN_1099ad5a8(long *param_1,int param_2,long *param_3,undefined8 param_4)

{
  byte bVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if ((*(char *)(lVar2 + 200) == '\x01') && (_pthread_rwlock_unlock(), (int)lVar2 != 0)) {
    _abort();
    func_0x000104bd46a0();
    if (cRam000000011374c027 == '\x01') {
      bVar1 = bRam000000011374c022;
      if (*(long *)PTR____stdoutp_11034bdd8 != lVar2) {
        bVar1 = bRam000000011374c021;
      }
      if (((bVar1 & 1) != 0) && (param_2 - 1U < 3)) {
        _fprintf(lVar2,&UNK_10f59395a);
        _fwrite(param_3,param_4,1,lVar2);
        param_3 = (long *)&UNK_10f593963;
        param_4 = 3;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe36c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__fwrite_11034c3a0)(param_3,param_4,1,lVar2);
    return param_3;
  }
  return param_1;
}



/* Entry: 1099ad5e8; end: 1099ad6d3;  */

void FUN_1099ad5e8(long param_1,int param_2,undefined *param_3,undefined8 param_4)

{
  byte bVar1;
  
  if (cRam000000011374c027 == '\x01') {
    bVar1 = bRam000000011374c022;
    if (*(long *)PTR____stdoutp_11034bdd8 != param_1) {
      bVar1 = bRam000000011374c021;
    }
    if (((bVar1 & 1) != 0) && (param_2 - 1U < 3)) {
      _fprintf(param_1,&UNK_10f59395a);
      _fwrite(param_3,param_4,1,param_1);
      param_3 = &UNK_10f593963;
      param_4 = 3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe36c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__fwrite_11034c3a0)(param_3,param_4,1,param_1);
  return;
}



/* Entry: 1099ad6d4; end: 1099ad8f3;  */

void FUN_1099ad6d4(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar7 = (long)*(char *)((long)param_2 + 0x17);
  if (lVar7 < 0) {
    lVar7 = param_2[1];
    if (lVar7 != 0) {
      plVar3 = (long *)*param_2;
      goto LAB_1099ad71c;
    }
  }
  else {
    plVar3 = param_2;
    if (*(char *)((long)param_2 + 0x17) != '\0') {
LAB_1099ad71c:
      lVar9 = 0;
      do {
        puVar6 = &UNK_10e00f65a;
        _memchr(&UNK_10e00f65a,(long)*(char *)((long)plVar3 + lVar9),0x47);
        if (puVar6 == (undefined *)0x0) {
          if (lVar9 != -1) goto LAB_1099ad754;
          break;
        }
        lVar9 = lVar9 + 1;
      } while (lVar7 != lVar9);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1,param_2);
      return;
    }
  }
LAB_1099ad754:
  plVar3 = param_2;
  __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4findEcm(param_2,0x27,0);
  if (plVar3 == (long *)0xffffffffffffffff) {
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      param_1[1] = 1;
      puVar4 = (undefined8 *)*param_1;
    }
    else {
      *(undefined1 *)((long)param_1 + 0x17) = 1;
      puVar4 = param_1;
    }
    *(undefined2 *)puVar4 = 0x27;
    uVar8 = param_2[1];
    plVar3 = (long *)*param_2;
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar8 = (ulong)*(byte *)((long)param_2 + 0x17);
      plVar3 = param_2;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,plVar3,uVar8);
    puVar6 = &DAT_10f638984;
  }
  else {
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      param_1[1] = 1;
      puVar4 = (undefined8 *)*param_1;
    }
    else {
      *(undefined1 *)((long)param_1 + 0x17) = 1;
      puVar4 = param_1;
    }
    *(undefined2 *)puVar4 = 0x22;
    uVar5 = (ulong)*(char *)((long)param_2 + 0x17);
    uVar8 = param_2[1];
    if (-1 < *(char *)((long)param_2 + 0x17)) {
      uVar8 = uVar5;
    }
    if (uVar8 == 0) {
      puVar6 = &DAT_10f3b3c06;
    }
    else {
      uVar8 = 0;
      puVar6 = &DAT_10f3b3c06;
      do {
        plVar3 = (long *)*param_2;
        if (-1 < (long)uVar5) {
          plVar3 = param_2;
        }
        uVar2 = *(byte *)((long)plVar3 + uVar8) - 0x22;
        if (uVar2 < 0x3f && (1L << ((ulong)uVar2 & 0x3f) & 0x4400000000000005U) != 0) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (param_1,"\\",1);
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendERKS5_mm
                  (param_1,param_2,uVar8,1);
        uVar8 = uVar8 + 1;
        uVar5 = (ulong)*(char *)((long)param_2 + 0x17);
        uVar1 = param_2[1];
        if (-1 < *(char *)((long)param_2 + 0x17)) {
          uVar1 = uVar5;
        }
      } while (uVar8 < uVar1);
    }
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_1,puVar6,1);
  return;
}



/* Entry: 1099ad8f4; end: 1099ad947;  */

void FUN_1099ad8f4(void)

{
  int iVar1;
  int aiStack_28 [2];
  
  if ((bRam000000011382baec & 1) == 0) {
    iVar1 = 0;
    _pthread_threadid_np(0,aiStack_28);
    if ((iVar1 == 0) && (aiStack_28[0] != -1)) {
      return;
    }
    bRam000000011382baec = 1;
  }
  _pthread_self();
  return;
}



/* Entry: 1099ad948; end: 1099ada3f;  */

void FUN_1099ad948(undefined1 **param_1,undefined1 **param_2)

{
  undefined1 **ppuVar1;
  undefined1 **ppuVar2;
  undefined1 **ppuVar3;
  ulong uVar4;
  undefined1 auStack_1c0 [256];
  undefined1 *puStack_c0;
  undefined8 uStack_b8;
  uint uStack_b0;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = param_1;
  ppuVar3 = param_2;
  if (cRam000000011382bb10 == '\x01') {
    puStack_c0 = auStack_1c0;
    uStack_b8 = 0x300000020;
    uStack_b0 = 0;
    ppuVar1 = (undefined1 **)0x1099ada70;
    ppuVar3 = &puStack_c0;
    __Unwind_Backtrace(0x1099ada70,ppuVar3);
    uVar4 = (ulong)uStack_b0;
    if (0 < (int)uStack_b0) {
      do {
        _snprintf(&puStack_c0,100,&UNK_10f593a0e);
        ppuVar1 = &puStack_c0;
        ppuVar3 = param_2;
        (*(code *)param_1)(ppuVar1,param_2);
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    ppuVar2 = ppuVar1;
    _strlen();
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)
              (ppuVar3,ppuVar1,ppuVar2);
    return;
  }
  return;
}



/* Entry: 1099ada40; end: 1099adacb;  */

void FUN_1099ada40(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  _strlen();
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)
            (param_2,param_1,uVar1);
  return;
}



/* Entry: 1099adacc; end: 1099adbb7;  */

void FUN_1099adacc(long param_1,ulong param_2,long param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  
  bVar2 = param_4 == 0;
  if (param_2 == 0) {
    return;
  }
  uVar4 = 0;
  while( true ) {
    if (bVar2) {
      return;
    }
    cVar1 = *(char *)(param_1 + uVar4);
    if (cVar1 != '?' && cVar1 != *(char *)(param_3 + uVar4)) break;
    bVar2 = param_4 - 1U == uVar4;
    uVar4 = uVar4 + 1;
    if (param_2 == uVar4) {
      return;
    }
  }
  if (cVar1 != '*') {
    return;
  }
  if (param_2 - 1 == uVar4) {
    return;
  }
  param_3 = param_3 + uVar4;
  param_4 = param_4 - uVar4;
  do {
    uVar3 = param_1 + uVar4 + 1;
    FUN_1099adacc(uVar3,~uVar4 + param_2,param_3,param_4);
    if ((uVar3 & 1) != 0) {
      return;
    }
    param_3 = param_3 + 1;
    bVar2 = param_4 != 1;
    param_4 = param_4 + -1;
  } while (bVar2);
  return;
}



/* Entry: 1099adbb8; end: 1099ade67;  */

undefined8 * FUN_1099adbb8(undefined8 *param_1,int *param_2,undefined8 *param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  byte bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uStack_88;
  undefined4 uStack_7c;
  undefined8 *apuStack_78 [2];
  char cStack_61;
  
  uStack_88 = 0x11374c500;
  puVar5 = param_1;
  if (cRam000000011374c5c8 == '\x01') {
    puVar5 = (undefined8 *)0x11374c500;
    _pthread_rwlock_wrlock();
    if ((int)puVar5 != 0) {
      _abort();
      FUN_1099ab9f4(&uStack_88);
      __Unwind_Resume(puVar5);
      FUN_1099a6214();
      return puVar5;
    }
  }
  bVar4 = bRam000000011374c4d0;
  if ((bRam000000011374c4d0 & 1) == 0) {
    puVar12 = (undefined8 *)0x0;
    puVar9 = (undefined8 *)0x0;
    bRam000000011374c4d0 = 0;
    puVar11 = puRam000000011374c4e8;
    if (-1 < cRam000000011374c4ff) {
      puVar11 = (undefined8 *)0x11374c4e8;
    }
    do {
      puVar6 = puVar11;
      _strchr(puVar11,0x3d);
      puVar5 = puVar6;
      puVar10 = puVar9;
      puVar7 = puVar12;
      if (puVar6 == (undefined8 *)0x0) break;
      func_0x000104c54c8c(apuStack_78,puVar11,(long)puVar6 - (long)puVar11);
      _sscanf(puVar6,&UNK_10f593a2b);
      if ((int)puVar5 == 1) {
        puVar7 = (undefined8 *)0x28;
        __Znwm();
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
        *(undefined4 *)(puVar7 + 3) = uStack_7c;
        puVar10 = puVar7;
        if (puVar9 != (undefined8 *)0x0) {
          puVar12[4] = puVar7;
          puVar10 = puVar9;
        }
      }
      _strchr(puVar6,0x2c);
      puVar5 = puVar6;
      if (cStack_61 < '\0') {
        puVar5 = apuStack_78[0];
        __ZdlPv();
      }
      puVar9 = puVar10;
      puVar11 = (undefined8 *)((long)puVar6 + 1);
      puVar12 = puVar7;
    } while (puVar6 != (undefined8 *)0x0);
    if (puVar10 != (undefined8 *)0x0) {
      puVar7[4] = puRam000000011374c4d8;
      puRam000000011374c4d8 = puVar10;
    }
    bRam000000011374c4d0 = 1;
  }
  ___error();
  uVar1 = *(undefined4 *)puVar5;
  puVar5 = param_3;
  _strrchr(param_3,0x2f);
  if (puVar5 != (undefined8 *)0x0) {
    param_3 = (undefined8 *)((long)puVar5 + 1);
  }
  puVar5 = param_3;
  _strchr(param_3,0x2e);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = param_3;
    _strlen();
    puVar9 = puVar5;
  }
  else {
    puVar9 = (undefined8 *)((long)puVar5 - (long)param_3);
  }
  puVar11 = puRam000000011374c4d8;
  if (((undefined8 *)0x3 < puVar9) && (*(int *)((long)param_3 + (long)puVar9 + -4) == 0x6c6e692d)) {
    puVar9 = (undefined8 *)((long)puVar9 + -4);
  }
  do {
    piVar3 = param_2;
    if (puVar11 == (undefined8 *)0x0) {
joined_r0x0001099addc4:
      if (((bVar4 != 0) && (*param_1 = piVar3, piVar3 == param_2)) && (param_1[1] == 0)) {
        param_1[1] = param_3;
        param_1[2] = puVar9;
        param_1[3] = puRam000000011374c4e0;
        puRam000000011374c4e0 = param_1;
      }
      ___error();
      *(undefined4 *)puVar5 = uVar1;
      iVar2 = *piVar3;
      FUN_1099ab9f4(&uStack_88);
      return (undefined8 *)(ulong)(param_4 <= iVar2);
    }
    lVar8 = (long)*(char *)((long)puVar11 + 0x17);
    puVar5 = puVar11;
    if (lVar8 < 0) {
      lVar8 = puVar11[1];
      puVar5 = (undefined8 *)*puVar11;
    }
    FUN_1099adacc(puVar5,lVar8,param_3,puVar9);
    if ((int)puVar5 != 0) {
      piVar3 = (int *)(puVar11 + 3);
      goto joined_r0x0001099addc4;
    }
    puVar11 = (undefined8 *)puVar11[4];
  } while( true );
}



/* Entry: 1099ade68; end: 1099adf43;  */

void FUN_1099ade68(void)

{
  FUN_1099a6214();
  return;
}



/* Entry: 1099adf44; end: 1099ae007;  */

float FUN_1099adf44(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *param_1;
  fVar3 = 7.905311;
  if (fVar1 <= 7.905311) {
    fVar3 = fVar1;
  }
  fVar2 = -7.905311;
  if (-7.905311 <= fVar3) {
    fVar2 = fVar3;
  }
  fVar3 = fVar2 * fVar2;
  fVar3 = (fVar2 * ((((fVar3 * (fVar3 * (fVar3 * -2.7607684e-16 + 2.000188e-13) + -8.604672e-11) +
                      5.1222973e-08) * fVar3 + 1.48572235e-05) * fVar3 + 0.00063726195) * fVar3 +
                   0.0048935246)) /
          (((fVar3 * 1.1982584e-06 + 0.00011853471) * fVar3 + 0.0022684347) * fVar3 + 0.004893525);
  if (ABS(fVar1) < 0.0004) {
    fVar3 = fVar2;
  }
  return fVar3;
}



/* Entry: 1099ae008; end: 1099ae037;  */

undefined8 * FUN_1099ae008(undefined8 *param_1)

{
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 1099ae038; end: 1099ae0bb;  */

undefined8 * FUN_1099ae038(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = &PTR_DAT_1108a5c28;
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  uVar5 = *(undefined8 *)(param_2 + 8);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  param_1[2] = uVar6;
  param_1[1] = uVar5;
  lVar4 = *(long *)(param_2 + 0x28);
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  param_1[4] = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_109407928(param_1 + 6,param_2 + 0x30);
  return param_1;
}



/* Entry: 1099ae0bc; end: 1099ae233;  */

undefined1  [16] FUN_1099ae0bc(long *param_1,long *param_2,long *param_3,ulong param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auStack_42 [2];
  
  lVar3 = *param_1;
  plVar1 = param_1;
  if ((ulong)((param_1[2] - lVar3 >> 3) * 0x2e8ba2e8ba2e8ba3) < param_4) {
    plVar5 = param_2;
    plVar2 = param_3;
    func_0x000105674e18(param_1);
    if (0x2e8ba2e8ba2e8ba < param_4) {
      FUN_109378a98();
      param_1[1] = param_4;
      __Unwind_Resume();
      plVar1 = plVar5;
      for (; plVar5 != plVar2; plVar5 = plVar5 + 0xb) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar3,plVar5);
        uVar7 = *(undefined8 *)((long)plVar5 + 0x29);
        uVar6 = *(undefined8 *)((long)plVar5 + 0x21);
        lVar8 = plVar5[3];
        *(long *)(lVar3 + 0x20) = plVar5[4];
        *(long *)(lVar3 + 0x18) = lVar8;
        *(undefined8 *)(lVar3 + 0x29) = uVar7;
        *(undefined8 *)(lVar3 + 0x21) = uVar6;
        FUN_1099ae2b0(lVar3 + 0x38,plVar5 + 7);
        lVar3 = lVar3 + 0x58;
        plVar1 = plVar2;
      }
      auVar10._8_8_ = lVar3;
      auVar10._0_8_ = plVar1;
      return auVar10;
    }
    lVar3 = param_1[2] - *param_1 >> 3;
    uVar4 = lVar3 * 0x5d1745d1745d1746;
    if (uVar4 < param_4 || uVar4 - param_4 == 0) {
      uVar4 = param_4;
    }
    if (0x1745d1745d1745c < (ulong)(lVar3 * 0x2e8ba2e8ba2e8ba3)) {
      uVar4 = 0x2e8ba2e8ba2e8ba;
    }
    FUN_109378a4c(param_1,uVar4);
    FUN_10937929c(param_1,param_2,param_3,param_1[1]);
  }
  else {
    lVar3 = param_1[1] - lVar3;
    if (param_4 <= (ulong)((lVar3 >> 3) * 0x2e8ba2e8ba2e8ba3)) {
      plVar1 = (long *)(auStack_42 + 1);
      FUN_1099ae234(plVar1,param_2,param_3);
      plVar5 = (long *)param_1[1];
      plVar2 = param_2;
      while (plVar5 != param_2) {
        plVar5 = plVar5 + -0xb;
        plVar1 = plVar5;
        func_0x000109378c9c(plVar5);
      }
      param_1[1] = (long)param_2;
      goto LAB_1099ae20c;
    }
    FUN_1099ae234(auStack_42,param_2,(undefined1 *)((long)param_2 + lVar3));
    param_2 = (long *)((long)param_2 + lVar3);
    FUN_10937929c(param_1,param_2,param_3,param_1[1]);
  }
  param_1[1] = (long)plVar1;
  plVar2 = param_2;
LAB_1099ae20c:
  auVar9._8_8_ = plVar2;
  auVar9._0_8_ = plVar1;
  return auVar9;
}



/* Entry: 1099ae234; end: 1099ae2af;  */

undefined1  [16] FUN_1099ae234(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  lVar1 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 0x58) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_4,param_2);
    uVar3 = *(undefined8 *)(param_2 + 0x29);
    uVar2 = *(undefined8 *)(param_2 + 0x21);
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_4 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_4 + 0x18) = uVar4;
    *(undefined8 *)(param_4 + 0x29) = uVar3;
    *(undefined8 *)(param_4 + 0x21) = uVar2;
    FUN_1099ae2b0(param_4 + 0x38,param_2 + 0x38);
    param_4 = param_4 + 0x58;
    lVar1 = param_3;
  }
  auVar5._8_8_ = param_4;
  auVar5._0_8_ = lVar1;
  return auVar5;
}



/* Entry: 1099ae2b0; end: 1099ae3a3;  */

void FUN_1099ae2b0(long *param_1,long *param_2)

{
  long lVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  
  cVar2 = (char)param_1[3];
  if (cVar2 == (char)param_2[3]) {
    if ((param_1 != param_2) && (cVar2 != '\0')) {
      lVar8 = *param_2;
      lVar1 = param_2[1];
      uVar5 = lVar1 - lVar8 >> 2;
      uVar6 = param_1[2];
      plVar9 = (long *)*param_1;
      if ((ulong)((long)(uVar6 - (long)plVar9) >> 2) < uVar5) {
        plVar10 = param_1;
        lVar3 = lVar8;
        lVar7 = lVar1;
        uVar4 = uVar5;
        if (plVar9 != (long *)0x0) {
          param_1[1] = (long)plVar9;
          __ZdlPv();
          uVar6 = 0;
          *param_1 = 0;
          param_1[1] = 0;
          param_1[2] = 0;
          plVar10 = plVar9;
        }
        if (uVar5 >> 0x3e != 0) {
          FUN_10923f788();
          if (uVar4 != 0) {
            FUN_10925b938();
            lVar8 = plVar10[1];
            lVar7 = lVar7 - lVar3;
            if (lVar7 != 0) {
              _memmove(lVar8,lVar3,lVar7);
            }
            plVar10[1] = lVar8 + lVar7;
          }
          return;
        }
        uVar4 = (long)uVar6 >> 1;
        if ((ulong)((long)uVar6 >> 1) <= uVar5) {
          uVar4 = uVar5;
        }
        if (0x7ffffffffffffffb < uVar6) {
          uVar4 = 0x3fffffffffffffff;
        }
        FUN_10925b938(param_1,uVar4);
        lVar7 = param_1[1];
        lVar1 = lVar1 - lVar8;
        if (lVar1 != 0) {
          _memmove(lVar7,lVar8,lVar1);
        }
        lVar7 = lVar7 + lVar1;
      }
      else {
        plVar10 = (long *)param_1[1];
        if ((ulong)((long)plVar10 - (long)plVar9 >> 2) < uVar5) {
          lVar7 = lVar8 + ((long)plVar10 - (long)plVar9);
          if (plVar10 != plVar9) {
            _memmove(plVar9,lVar8);
            plVar10 = (long *)param_1[1];
          }
          lVar1 = lVar1 - lVar7;
          if (lVar1 != 0) {
            _memmove(plVar10,lVar7,lVar1);
          }
          lVar7 = (long)plVar10 + lVar1;
        }
        else {
          lVar1 = lVar1 - lVar8;
          if (lVar1 != 0) {
            _memmove(plVar9,lVar8,lVar1);
          }
          lVar7 = (long)plVar9 + lVar1;
        }
      }
      param_1[1] = lVar7;
      return;
    }
  }
  else if (cVar2 == '\0') {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    FUN_109285684(param_1,*param_2,param_2[1],param_2[1] - *param_2 >> 2);
    *(undefined1 *)(param_1 + 3) = 1;
  }
  else {
    if (*param_1 != 0) {
      param_1[1] = *param_1;
      __ZdlPv();
    }
    *(undefined1 *)(param_1 + 3) = 0;
  }
  return;
}



/* Entry: 1099ae3a4; end: 1099ae513;  */

long * FUN_1099ae3a4(long *param_1,undefined8 *param_2,uint param_3,undefined8 param_4,long *param_5
                    )

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  int iVar7;
  int *piVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  uint uStack_38;
  undefined4 uStack_34;
  
  uStack_34 = 4;
  iVar7 = 1;
  for (piVar8 = (int *)*param_2; piVar8 != (int *)param_2[1]; piVar8 = piVar8 + 1) {
    iVar7 = *piVar8 * iVar7;
  }
  uStack_38 = param_3;
  if (0xe < param_3) {
    plVar4 = (long *)&UNK_10dfd21d7;
    plVar5 = (long *)&UNK_10f57311a;
    plVar6 = (long *)&UNK_10f573129;
    FUN_10952d0c4();
    func_0x00010928e90c(&uStack_60);
    func_0x00010928e90c(&uStack_50);
    __Unwind_Resume();
    plVar4[1] = 0;
    plVar4[2] = 0;
    *plVar4 = (long)&PTR_DAT_1108a5c28;
    plVar4[3] = *plVar6;
    lVar9 = *param_5;
    plVar4[5] = param_5[1];
    plVar4[4] = lVar9;
    *param_5 = 0;
    param_5[1] = 0;
    plVar4[6] = 0;
    plVar4[7] = 0;
    plVar4[8] = 0;
    *(undefined1 *)(plVar4 + 9) = 1;
    lVar1 = plVar5[1];
    for (lVar9 = *plVar5; lVar1 != lVar9; lVar9 = lVar9 + 4) {
      FUN_109231afc(plVar4 + 6,lVar9);
    }
    return plVar4;
  }
  uVar10 = (ulong)(uint)(*(int *)(&UNK_10e00f788 + (ulong)param_3 * 4) * iVar7);
  __Znam(uVar10);
  _bzero();
  FUN_10928e964(&uStack_50,uVar10);
  plStack_58 = plStack_48;
  uStack_60 = uStack_50;
  if (plStack_48 != (long *)0x0) {
    plVar4 = plStack_48 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_1099ae514(param_1,param_2,&uStack_38,&uStack_60);
  plVar4 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar5 = plStack_58 + 1;
    do {
      lVar9 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      param_1 = plVar4;
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar4 = plStack_48 + 1;
    do {
      lVar9 = *plVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
      param_1 = plStack_48;
    }
  }
  return param_1;
}



/* Entry: 1099ae514; end: 1099ae5d3;  */

undefined8 *
FUN_1099ae514(undefined8 *param_1,long *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1108a5c28;
  param_1[3] = *param_3;
  uVar3 = *param_4;
  param_1[5] = param_4[1];
  param_1[4] = uVar3;
  *param_4 = 0;
  param_4[1] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 1;
  lVar2 = param_2[1];
  for (lVar1 = *param_2; lVar2 != lVar1; lVar1 = lVar1 + 4) {
    FUN_109231afc(param_1 + 6,lVar1);
  }
  return param_1;
}



/* Entry: 1099ae5d4; end: 1099ae653;  */

/* WARNING: Removing unreachable block (ram,0x0001099ae60c) */

void FUN_1099ae5d4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1[3];
  if (lVar2 != 0) {
    lVar3 = param_1[4];
    lVar1 = lVar2;
    if (lVar3 != lVar2) {
      do {
        lVar3 = lVar3 + -0x20;
      } while (lVar3 != lVar2);
      lVar1 = param_1[3];
    }
    param_1[4] = lVar2;
    __ZdlPv(lVar1);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*param_1);
    return;
  }
  return;
}



/* Entry: 1099ae654; end: 1099ae6c7;  */

long * FUN_1099ae654(long *param_1)

{
  long lVar1;
  
  func_0x0001099ae68c(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1099ae6c8; end: 1099ae7ab;  */

long FUN_1099ae6c8(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar2 = param_1;
  func_0x000107c31944();
  plVar5 = (long *)param_1[1];
  if (plVar5 != (long *)0x0) {
    uVar6 = (long)plVar5 - 1;
    if (((ulong)plVar5 & uVar6) == 0) {
      plVar7 = (long *)(uVar6 & (ulong)plVar2);
    }
    else {
      plVar7 = plVar2;
      if (plVar5 <= plVar2) {
        uVar1 = 0;
        if (plVar5 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar5;
        }
        plVar7 = (long *)((long)plVar2 - uVar1 * (long)plVar5);
      }
    }
    plVar3 = *(long **)(*param_1 + (long)plVar7 * 8);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
      do {
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar3[1];
        if (plVar2 == plVar4) {
          plVar4 = param_1;
          func_0x000104c4fbc4(param_1,plVar3 + 2,param_2);
          if (((ulong)plVar4 & 1) != 0) {
            return (long)plVar3;
          }
        }
        else {
          if (((ulong)plVar5 & uVar6) == 0) {
            plVar4 = (long *)((ulong)plVar4 & uVar6);
          }
          else if (plVar5 <= plVar4) {
            uVar1 = 0;
            if (plVar5 != (long *)0x0) {
              uVar1 = (ulong)plVar4 / (ulong)plVar5;
            }
            plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar5);
          }
          if (plVar4 != plVar7) {
            return 0;
          }
        }
        plVar3 = (long *)*plVar3;
      } while( true );
    }
  }
  return 0;
}



/* Entry: 1099ae7ac; end: 1099aec3f;  */

undefined * FUN_1099ae7ac(int param_1)

{
  if (param_1 < 0x2a) {
    if (param_1 < 0x14) {
      if (param_1 < 0xc) {
        if (param_1 == 0) {
          return &UNK_10f593add;
        }
        if (param_1 == 1) {
          return &UNK_10f593aef;
        }
        if (param_1 == 10) {
          return &UNK_10f593aff;
        }
      }
      else {
        if (param_1 == 0xc) {
          return &UNK_10f593b18;
        }
        if (param_1 == 0xe) {
          return &UNK_10f593b2e;
        }
        if (param_1 == 0x10) {
          return &UNK_10f593b4a;
        }
      }
    }
    else if (param_1 < 0x20) {
      if (param_1 == 0x14) {
        return &UNK_10f593b76;
      }
      if (param_1 == 0x16) {
        return &UNK_10f593b8f;
      }
      if (param_1 == 0x1e) {
        return &UNK_10f593cff;
      }
    }
    else {
      if (param_1 == 0x20) {
        return &UNK_10f593d17;
      }
      if (param_1 == 0x22) {
        return &UNK_10f593d2b;
      }
      if (param_1 == 0x28) {
        return &UNK_10f593bb4;
      }
    }
  }
  else if (param_1 < 0x40) {
    if (param_1 < 0x30) {
      if (param_1 == 0x2a) {
        return &UNK_10f593bca;
      }
      if (param_1 == 0x2c) {
        return &UNK_10f593c80;
      }
      if (param_1 == 0x2e) {
        return &UNK_10f593cb0;
      }
    }
    else {
      if (param_1 == 0x30) {
        return &UNK_10f593cd9;
      }
      if (param_1 == 0x3c) {
        return &UNK_10f593c4b;
      }
      if (param_1 == 0x3e) {
        return &UNK_10f593be4;
      }
    }
  }
  else if (param_1 < 0x48) {
    if (param_1 == 0x40) {
      return &UNK_10f593c01;
    }
    if (param_1 == 0x42) {
      return &UNK_10f593c26;
    }
    if (param_1 == 0x46) {
      return &UNK_10f593d5a;
    }
  }
  else if (param_1 < 100) {
    if (param_1 == 0x48) {
      return &UNK_10f593d7a;
    }
    if (param_1 == 0x4a) {
      return &UNK_10f593d90;
    }
  }
  else {
    if (param_1 == 100) {
      return &UNK_10f593db5;
    }
    if (param_1 == 0x66) {
      return &UNK_10f593dce;
    }
  }
  return &UNK_10f593ac6;
}



/* Entry: 1099aec40; end: 1099aeff7;  */

ulong FUN_1099aec40(uint *param_1,ulong param_2,ulong param_3)

{
  uint *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  uint *puVar8;
  uint *puVar9;
  ulong uVar10;
  ulong uVar11;
  
  puVar1 = (uint *)((long)param_1 + param_2);
  if (((ulong)param_1 & 7) == 0) {
    puVar8 = param_1;
    if (param_2 < 0x20) {
      lVar7 = param_3 + 0x27d4eb2f165667c5;
    }
    else {
      uVar10 = param_3 + 0x60ea27eeadc0b5d6;
      uVar2 = param_3 + 0xc2b2ae3d27d4eb4f;
      uVar11 = param_3 + 0x61c8864e7a143579;
      do {
        uVar10 = uVar10 + *(long *)puVar8 * -0x3d4d51c2d82b14b1;
        uVar4 = uVar10 >> 0x21 | uVar10 * 0x80000000;
        uVar10 = uVar4 * -0x61c8864e7a143579;
        uVar2 = uVar2 + *(long *)(puVar8 + 2) * -0x3d4d51c2d82b14b1;
        uVar3 = uVar2 >> 0x21 | uVar2 * 0x80000000;
        uVar2 = uVar3 * -0x61c8864e7a143579;
        param_3 = param_3 + *(long *)(puVar8 + 4) * -0x3d4d51c2d82b14b1;
        uVar6 = param_3 >> 0x21 | param_3 * 0x80000000;
        param_3 = uVar6 * -0x61c8864e7a143579;
        uVar11 = uVar11 + *(long *)(puVar8 + 6) * -0x3d4d51c2d82b14b1;
        uVar5 = uVar11 >> 0x21 | uVar11 * 0x80000000;
        uVar11 = uVar5 * -0x61c8864e7a143579;
        puVar8 = puVar8 + 8;
      } while (puVar8 <= puVar1 + -8);
      lVar7 = (((((uVar2 >> 0x39 | uVar3 * 0x1bbcd8c2f5e54380) +
                  (uVar10 >> 0x3f | uVar4 * 0x3c6ef3630bd7950e) +
                  (param_3 >> 0x34 | uVar6 * 0x779b185ebca87000) +
                  (uVar11 >> 0x2e | uVar5 * -0x1939e850d5e40000) ^
                 (uVar4 * -0x210ca4fef0869357 >> 0x21 | uVar4 * -0x784349ab80000000) *
                 -0x61c8864e7a143579) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63 ^
                (uVar3 * -0x210ca4fef0869357 >> 0x21 | uVar3 * -0x784349ab80000000) *
                -0x61c8864e7a143579) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63 ^
               (uVar6 * -0x210ca4fef0869357 >> 0x21 | uVar6 * -0x784349ab80000000) *
               -0x61c8864e7a143579) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63 ^
              (uVar5 * -0x210ca4fef0869357 >> 0x21 | uVar5 * -0x784349ab80000000) *
              -0x61c8864e7a143579) * -0x61c8864e7a143579 + -0x7a1435883d4d519d;
    }
    uVar10 = lVar7 + param_2;
    puVar9 = puVar8 + 2;
    while (puVar9 <= puVar1) {
      uVar10 = ((ulong)(*(long *)puVar8 * -0x3d4d51c2d82b14b1) >> 0x21 |
               *(long *)puVar8 * -0x6c158a5880000000) * -0x61c8864e7a143579 ^ uVar10;
      uVar10 = (uVar10 >> 0x25 | uVar10 << 0x1b) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63;
      puVar9 = puVar8 + 4;
      puVar8 = puVar8 + 2;
    }
    if (puVar8 + 1 <= puVar1) {
      uVar10 = (ulong)*puVar8 * -0x61c8864e7a143579 ^ uVar10;
      uVar10 = (uVar10 >> 0x29 | uVar10 << 0x17) * -0x3d4d51c2d82b14b1 + 0x165667b19e3779f9;
      puVar8 = puVar8 + 1;
    }
    if (puVar8 < puVar1) {
      lVar7 = (long)param_1 + (param_2 - (long)puVar8);
      do {
        uVar10 = (ulong)(byte)*puVar8 * 0x27d4eb2f165667c5 ^ uVar10;
        uVar10 = (uVar10 >> 0x35 | uVar10 << 0xb) * -0x61c8864e7a143579;
        lVar7 = lVar7 + -1;
        puVar8 = (uint *)((long)puVar8 + 1);
      } while (lVar7 != 0);
    }
  }
  else {
    puVar8 = param_1;
    if (param_2 < 0x20) {
      lVar7 = param_3 + 0x27d4eb2f165667c5;
    }
    else {
      uVar10 = param_3 + 0x60ea27eeadc0b5d6;
      uVar2 = param_3 + 0xc2b2ae3d27d4eb4f;
      uVar11 = param_3 + 0x61c8864e7a143579;
      do {
        uVar10 = uVar10 + *(long *)puVar8 * -0x3d4d51c2d82b14b1;
        uVar4 = uVar10 >> 0x21 | uVar10 * 0x80000000;
        uVar10 = uVar4 * -0x61c8864e7a143579;
        uVar2 = uVar2 + *(long *)(puVar8 + 2) * -0x3d4d51c2d82b14b1;
        uVar3 = uVar2 >> 0x21 | uVar2 * 0x80000000;
        uVar2 = uVar3 * -0x61c8864e7a143579;
        param_3 = param_3 + *(long *)(puVar8 + 4) * -0x3d4d51c2d82b14b1;
        uVar6 = param_3 >> 0x21 | param_3 * 0x80000000;
        param_3 = uVar6 * -0x61c8864e7a143579;
        uVar11 = uVar11 + *(long *)(puVar8 + 6) * -0x3d4d51c2d82b14b1;
        uVar5 = uVar11 >> 0x21 | uVar11 * 0x80000000;
        uVar11 = uVar5 * -0x61c8864e7a143579;
        puVar8 = puVar8 + 8;
      } while (puVar8 <= puVar1 + -8);
      lVar7 = (((((uVar2 >> 0x39 | uVar3 * 0x1bbcd8c2f5e54380) +
                  (uVar10 >> 0x3f | uVar4 * 0x3c6ef3630bd7950e) +
                  (param_3 >> 0x34 | uVar6 * 0x779b185ebca87000) +
                  (uVar11 >> 0x2e | uVar5 * -0x1939e850d5e40000) ^
                 (uVar4 * -0x210ca4fef0869357 >> 0x21 | uVar4 * -0x784349ab80000000) *
                 -0x61c8864e7a143579) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63 ^
                (uVar3 * -0x210ca4fef0869357 >> 0x21 | uVar3 * -0x784349ab80000000) *
                -0x61c8864e7a143579) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63 ^
               (uVar6 * -0x210ca4fef0869357 >> 0x21 | uVar6 * -0x784349ab80000000) *
               -0x61c8864e7a143579) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63 ^
              (uVar5 * -0x210ca4fef0869357 >> 0x21 | uVar5 * -0x784349ab80000000) *
              -0x61c8864e7a143579) * -0x61c8864e7a143579 + -0x7a1435883d4d519d;
    }
    uVar10 = lVar7 + param_2;
    puVar9 = puVar8 + 2;
    while (puVar9 <= puVar1) {
      uVar10 = ((ulong)(*(long *)puVar8 * -0x3d4d51c2d82b14b1) >> 0x21 |
               *(long *)puVar8 * -0x6c158a5880000000) * -0x61c8864e7a143579 ^ uVar10;
      uVar10 = (uVar10 >> 0x25 | uVar10 << 0x1b) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63;
      puVar9 = puVar8 + 4;
      puVar8 = puVar8 + 2;
    }
    if (puVar8 + 1 <= puVar1) {
      uVar10 = (ulong)*puVar8 * -0x61c8864e7a143579 ^ uVar10;
      uVar10 = (uVar10 >> 0x29 | uVar10 << 0x17) * -0x3d4d51c2d82b14b1 + 0x165667b19e3779f9;
      puVar8 = puVar8 + 1;
    }
    if (puVar8 < puVar1) {
      lVar7 = (long)param_1 + (param_2 - (long)puVar8);
      do {
        uVar10 = (ulong)(byte)*puVar8 * 0x27d4eb2f165667c5 ^ uVar10;
        uVar10 = (uVar10 >> 0x35 | uVar10 << 0xb) * -0x61c8864e7a143579;
        lVar7 = lVar7 + -1;
        puVar8 = (uint *)((long)puVar8 + 1);
      } while (lVar7 != 0);
    }
  }
  uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3d4d51c2d82b14b1;
  uVar10 = (uVar10 ^ uVar10 >> 0x1d) * 0x165667b19e3779f9;
  return uVar10 ^ uVar10 >> 0x20;
}



/* Entry: 1099aeff8; end: 1099aefff;  */

void FUN_1099aeff8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(0x58);
  return;
}



/* Entry: 1099af000; end: 1099af017;  */

undefined8 FUN_1099af000(void)

{
  _free();
  return 0;
}



/* Entry: 1099af018; end: 1099af023;  */

undefined * FUN_1099af018(ulong param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (0xffffffffffffff88 < param_1) {
    iVar1 = -(int)param_1;
  }
  if (iVar1 < 0x2a) {
    if (iVar1 < 0x14) {
      if (iVar1 < 0xc) {
        if (iVar1 == 0) {
          return &UNK_10f593add;
        }
        if (iVar1 == 1) {
          return &UNK_10f593aef;
        }
        if (iVar1 == 10) {
          return &UNK_10f593aff;
        }
      }
      else {
        if (iVar1 == 0xc) {
          return &UNK_10f593b18;
        }
        if (iVar1 == 0xe) {
          return &UNK_10f593b2e;
        }
        if (iVar1 == 0x10) {
          return &UNK_10f593b4a;
        }
      }
    }
    else if (iVar1 < 0x20) {
      if (iVar1 == 0x14) {
        return &UNK_10f593b76;
      }
      if (iVar1 == 0x16) {
        return &UNK_10f593b8f;
      }
      if (iVar1 == 0x1e) {
        return &UNK_10f593cff;
      }
    }
    else {
      if (iVar1 == 0x20) {
        return &UNK_10f593d17;
      }
      if (iVar1 == 0x22) {
        return &UNK_10f593d2b;
      }
      if (iVar1 == 0x28) {
        return &UNK_10f593bb4;
      }
    }
  }
  else if (iVar1 < 0x40) {
    if (iVar1 < 0x30) {
      if (iVar1 == 0x2a) {
        return &UNK_10f593bca;
      }
      if (iVar1 == 0x2c) {
        return &UNK_10f593c80;
      }
      if (iVar1 == 0x2e) {
        return &UNK_10f593cb0;
      }
    }
    else {
      if (iVar1 == 0x30) {
        return &UNK_10f593cd9;
      }
      if (iVar1 == 0x3c) {
        return &UNK_10f593c4b;
      }
      if (iVar1 == 0x3e) {
        return &UNK_10f593be4;
      }
    }
  }
  else if (iVar1 < 0x48) {
    if (iVar1 == 0x40) {
      return &UNK_10f593c01;
    }
    if (iVar1 == 0x42) {
      return &UNK_10f593c26;
    }
    if (iVar1 == 0x46) {
      return &UNK_10f593d5a;
    }
  }
  else if (iVar1 < 100) {
    if (iVar1 == 0x48) {
      return &UNK_10f593d7a;
    }
    if (iVar1 == 0x4a) {
      return &UNK_10f593d90;
    }
  }
  else {
    if (iVar1 == 100) {
      return &UNK_10f593db5;
    }
    if (iVar1 == 0x66) {
      return &UNK_10f593dce;
    }
  }
  return &UNK_10f593ac6;
}



/* Entry: 1099af024; end: 1099af223;  */

undefined2 *
FUN_1099af024(undefined2 *param_1,short *param_2,ulong param_3,ulong param_4,byte *param_5,
             ulong param_6)

{
  int iVar1;
  short sVar2;
  uint uVar3;
  int *piVar4;
  bool bVar5;
  bool bVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  uint uVar9;
  short *psVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  byte *pbVar15;
  uint uVar16;
  int *piVar17;
  ulong uVar18;
  undefined2 *puVar19;
  uint uVar20;
  ulong uVar21;
  undefined2 *puVar22;
  uint uVar23;
  uint uVar24;
  long lVar25;
  ulong uVar26;
  uint uVar27;
  ulong uVar28;
  ulong uVar29;
  uint auStack_42c [257];
  long lStack_28;
  
  uVar20 = (uint)param_4;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = 1 << (ulong)(uVar20 & 0x1f);
  uVar18 = (ulong)uVar3;
  uVar9 = uVar3 >> 1;
  if (uVar20 == 0) {
    uVar9 = 1;
  }
  if (param_6 >> (param_4 & 0x3f) == 0) {
    puVar7 = (undefined2 *)0xffffffffffffffd4;
  }
  else {
    uVar16 = uVar3 - 1;
    *param_1 = (short)param_4;
    iVar11 = (int)param_3;
    param_1[1] = (short)param_3;
    auStack_42c[0] = 0;
    uVar24 = iVar11 + 1;
    uVar23 = uVar16;
    if (iVar11 != -1) {
      lVar25 = 0;
      uVar27 = 0;
      uVar13 = iVar11 + 2;
      if (uVar13 < 3) {
        uVar13 = 2;
      }
      do {
        if (param_2[lVar25] == -1) {
          uVar27 = uVar27 + 1;
          param_5[uVar23] = (byte)lVar25;
          uVar23 = uVar23 - 1;
        }
        else {
          uVar27 = uVar27 + (int)param_2[lVar25];
        }
        auStack_42c[lVar25 + 1] = uVar27;
        lVar25 = lVar25 + 1;
      } while ((ulong)uVar13 - 1 != lVar25);
    }
    uVar28 = 0;
    uVar29 = 0;
    param_3 = (ulong)(uVar3 + 1);
    auStack_42c[uVar24] = uVar3 + 1;
    if (uVar24 < 2) {
      uVar24 = 1;
    }
    uVar21 = (ulong)uVar24;
    do {
      sVar2 = param_2[uVar28];
      if (0 < sVar2) {
        param_3 = 0;
        do {
          param_5[uVar29] = (byte)uVar28;
          do {
            uVar24 = (uVar3 >> 3) + (uVar3 >> 1) + 3 + (int)uVar29 & uVar16;
            uVar29 = (ulong)uVar24;
          } while (uVar23 < uVar24);
          uVar24 = (int)param_3 + 1;
          param_3 = (ulong)uVar24;
        } while (uVar24 != (int)sVar2);
      }
      uVar28 = uVar28 + 1;
      uVar26 = uVar18;
    } while (uVar28 != uVar21);
    do {
      pbVar15 = param_5 + 1;
      uVar24 = auStack_42c[*param_5];
      auStack_42c[*param_5] = uVar24 + 1;
      param_1[(ulong)uVar24 + 2] = (short)uVar18;
      uVar18 = (ulong)((int)uVar18 + 1);
      uVar26 = uVar26 - 1;
      param_5 = pbVar15;
    } while (uVar26 != 0);
    iVar11 = 0;
    iVar12 = uVar20 * 0x10000 - uVar3;
    psVar10 = param_2;
    piVar4 = (int *)(param_1 + (ulong)uVar9 * 2);
    do {
      piVar17 = piVar4 + 2;
      param_2 = psVar10 + 1;
      sVar2 = *psVar10;
      if (sVar2 == -1 || sVar2 == 1) {
        piVar4[1] = iVar11 + -1;
        *piVar17 = iVar12;
        iVar11 = iVar11 + 1;
      }
      else if (sVar2 == 0) {
        *piVar17 = iVar12 + 0x10000;
      }
      else {
        iVar14 = (int)sVar2;
        uVar9 = uVar20 - ((uint)LZCOUNT(iVar14 + -1) ^ 0x1f);
        piVar4[1] = iVar11 - iVar14;
        *piVar17 = uVar9 * 0x10000 - (iVar14 << (ulong)(uVar9 & 0x1f));
        iVar11 = iVar11 + iVar14;
      }
      uVar21 = uVar21 - 1;
      psVar10 = param_2;
      piVar4 = piVar17;
    } while (uVar21 != 0);
    puVar7 = (undefined2 *)0x0;
  }
  uVar9 = (uint)param_5;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar7;
  }
  ___stack_chk_fail();
  if (0xc < uVar9) {
    return (undefined2 *)0xffffffffffffffd4;
  }
  if (uVar9 < 5) {
    return (undefined2 *)0xffffffffffffffff;
  }
  uVar3 = 0x200;
  if (uVar20 != 0) {
    uVar3 = (uVar9 + uVar9 * uVar20 >> 3) + 3;
  }
  bVar5 = (short *)(ulong)uVar3 <= param_2;
  uVar3 = uVar20 + 1;
  if (uVar20 == 0xffffffff) {
    return (undefined2 *)0xffffffffffffffff;
  }
  uVar18 = 0;
  uVar16 = uVar9 - 5;
  bVar6 = true;
  uVar23 = 1 << (ulong)(uVar9 & 0x1f);
  uVar20 = uVar23 + 1;
  puVar19 = (undefined2 *)((long)puVar7 + (long)param_2 + -2);
  uVar24 = 4;
  puVar8 = puVar7;
  iVar11 = uVar9 + 1;
  do {
    if (!bVar6) {
      uVar28 = uVar18;
      if ((uint)uVar18 < uVar3) {
        while (*(short *)(param_3 + uVar28 * 2) == 0) {
          uVar28 = uVar28 + 1;
          if (uVar3 == uVar28) goto LAB_1099af438;
        }
      }
      uVar9 = (uint)uVar28;
      if (uVar9 == uVar3) {
LAB_1099af438:
        uVar9 = uVar24 + 0xe;
        if (-8 < (int)uVar24) {
          uVar9 = uVar24 + 7;
        }
        if (uVar20 == 1) {
          if ((bVar5) || (puVar8 <= puVar19)) {
            *puVar8 = (short)uVar16;
            puVar8 = (undefined2 *)
                     ((long)puVar8 + (((long)((ulong)uVar9 << 0x20) >> 0x23) - (long)puVar7));
          }
          else {
LAB_1099af458:
            puVar8 = (undefined2 *)0xffffffffffffffba;
          }
        }
        else {
LAB_1099af460:
          puVar8 = (undefined2 *)0xffffffffffffffff;
        }
        return puVar8;
      }
      if ((uint)uVar18 + 0x18 <= uVar9) {
        puVar22 = puVar8;
        do {
          if ((!bVar5) && (puVar19 < puVar22)) goto LAB_1099af458;
          uVar16 = uVar16 + (0xffff << (ulong)(uVar24 & 0x1f));
          puVar8 = puVar22 + 1;
          *puVar22 = (short)uVar16;
          uVar16 = uVar16 >> 0x10;
          iVar12 = (int)uVar18;
          uVar18 = (ulong)(iVar12 + 0x18);
          puVar22 = puVar8;
        } while (iVar12 + 0x30U <= uVar9);
      }
      uVar13 = (int)uVar18 + 3;
      while (iVar12 = (int)uVar18, uVar13 <= uVar9) {
        uVar16 = (3 << (ulong)(uVar24 & 0x1f)) + uVar16;
        uVar24 = uVar24 + 2;
        uVar18 = (ulong)(iVar12 + 3);
        uVar13 = iVar12 + 6;
      }
      uVar16 = (uVar9 - iVar12 << (ulong)(uVar24 & 0x1f)) + uVar16;
      uVar18 = uVar28;
      if ((int)uVar24 < 0xf) {
        uVar24 = uVar24 + 2;
      }
      else {
        if ((!bVar5) && (puVar19 < puVar8)) goto LAB_1099af458;
        *puVar8 = (short)uVar16;
        uVar16 = uVar16 >> 0x10;
        uVar24 = uVar24 - 0xe;
        puVar8 = puVar8 + 1;
      }
    }
    sVar2 = *(short *)(param_3 + (uVar18 & 0xffffffff) * 2);
    iVar12 = ~uVar20 + uVar23 * 2;
    iVar14 = -(int)sVar2;
    if (-1 < sVar2) {
      iVar14 = (int)sVar2;
    }
    uVar20 = uVar20 - iVar14;
    iVar14 = sVar2 + 1;
    iVar1 = 0;
    if ((int)uVar23 <= iVar14) {
      iVar1 = iVar12;
    }
    iVar1 = iVar1 + iVar14;
    bVar6 = iVar1 != 1;
    if ((int)uVar20 < 1) goto LAB_1099af460;
    iVar14 = iVar11;
    if ((int)uVar20 < (int)uVar23) {
      do {
        iVar14 = iVar14 + -1;
        uVar13 = uVar23 >> 1;
        uVar9 = uVar23 >> 1;
        uVar23 = uVar13;
      } while (uVar20 < uVar9);
    }
    uVar16 = (iVar1 << (ulong)(uVar24 & 0x1f)) + uVar16;
    uVar24 = (uVar24 + iVar11) - (uint)(iVar1 < iVar12);
    puVar22 = puVar8;
    if (0x10 < (int)uVar24) {
      if ((!bVar5) && (puVar19 < puVar8)) goto LAB_1099af458;
      puVar22 = puVar8 + 1;
      *puVar8 = (short)uVar16;
      uVar16 = uVar16 >> 0x10;
      uVar24 = uVar24 - 0x10;
    }
    uVar9 = (int)uVar18 + 1;
    uVar18 = (ulong)uVar9;
    puVar8 = puVar22;
    if ((uVar3 <= uVar9) || (iVar11 = iVar14, uVar20 == 1)) goto LAB_1099af438;
  } while( true );
}



/* Entry: 1099af224; end: 1099af267;  */

long FUN_1099af224(undefined2 *param_1,ulong param_2,long param_3,int param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  short sVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  int iVar12;
  uint uVar13;
  undefined2 *puVar14;
  uint uVar15;
  undefined2 *puVar16;
  undefined2 *puVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  
  if (0xc < param_5) {
    return -0x2c;
  }
  if (param_5 < 5) {
    return -1;
  }
  uVar1 = 0x200;
  if (param_4 != 0) {
    uVar1 = (param_5 + param_5 * param_4 >> 3) + 3;
  }
  bVar4 = uVar1 <= param_2;
  uVar1 = param_4 + 1;
  if (param_4 == -1) {
    return -1;
  }
  uVar11 = 0;
  uVar13 = param_5 - 5;
  bVar5 = true;
  uVar19 = 1 << (ulong)(param_5 & 0x1f);
  uVar15 = uVar19 + 1;
  puVar14 = (undefined2 *)((long)param_1 + (param_2 - 2));
  uVar18 = 4;
  puVar16 = param_1;
  iVar20 = param_5 + 1;
  do {
    if (!bVar5) {
      uVar8 = uVar11;
      if ((uint)uVar11 < uVar1) {
        while (*(short *)(param_3 + uVar8 * 2) == 0) {
          uVar8 = uVar8 + 1;
          if (uVar1 == uVar8) goto LAB_1099af438;
        }
      }
      uVar7 = (uint)uVar8;
      if (uVar7 == uVar1) {
LAB_1099af438:
        uVar1 = uVar18 + 0xe;
        if (-8 < (int)uVar18) {
          uVar1 = uVar18 + 7;
        }
        if (uVar15 == 1) {
          if ((bVar4) || (puVar16 <= puVar14)) {
            *puVar16 = (short)uVar13;
            lVar6 = (long)puVar16 + (((long)((ulong)uVar1 << 0x20) >> 0x23) - (long)param_1);
          }
          else {
LAB_1099af458:
            lVar6 = -0x46;
          }
        }
        else {
LAB_1099af460:
          lVar6 = -1;
        }
        return lVar6;
      }
      if ((uint)uVar11 + 0x18 <= uVar7) {
        puVar17 = puVar16;
        do {
          if ((!bVar4) && (puVar14 < puVar17)) goto LAB_1099af458;
          uVar13 = uVar13 + (0xffff << (ulong)(uVar18 & 0x1f));
          puVar16 = puVar17 + 1;
          *puVar17 = (short)uVar13;
          uVar13 = uVar13 >> 0x10;
          iVar9 = (int)uVar11;
          uVar11 = (ulong)(iVar9 + 0x18);
          puVar17 = puVar16;
        } while (iVar9 + 0x30U <= uVar7);
      }
      uVar10 = (int)uVar11 + 3;
      while (iVar9 = (int)uVar11, uVar10 <= uVar7) {
        uVar13 = (3 << (ulong)(uVar18 & 0x1f)) + uVar13;
        uVar18 = uVar18 + 2;
        uVar11 = (ulong)(iVar9 + 3);
        uVar10 = iVar9 + 6;
      }
      uVar13 = (uVar7 - iVar9 << (ulong)(uVar18 & 0x1f)) + uVar13;
      uVar11 = uVar8;
      if ((int)uVar18 < 0xf) {
        uVar18 = uVar18 + 2;
      }
      else {
        if ((!bVar4) && (puVar14 < puVar16)) goto LAB_1099af458;
        *puVar16 = (short)uVar13;
        uVar13 = uVar13 >> 0x10;
        uVar18 = uVar18 - 0xe;
        puVar16 = puVar16 + 1;
      }
    }
    sVar3 = *(short *)(param_3 + (uVar11 & 0xffffffff) * 2);
    iVar9 = ~uVar15 + uVar19 * 2;
    iVar12 = -(int)sVar3;
    if (-1 < sVar3) {
      iVar12 = (int)sVar3;
    }
    uVar15 = uVar15 - iVar12;
    iVar12 = sVar3 + 1;
    iVar2 = 0;
    if ((int)uVar19 <= iVar12) {
      iVar2 = iVar9;
    }
    iVar2 = iVar2 + iVar12;
    bVar5 = iVar2 != 1;
    if ((int)uVar15 < 1) goto LAB_1099af460;
    iVar12 = iVar20;
    if ((int)uVar15 < (int)uVar19) {
      do {
        iVar12 = iVar12 + -1;
        uVar10 = uVar19 >> 1;
        uVar7 = uVar19 >> 1;
        uVar19 = uVar10;
      } while (uVar15 < uVar7);
    }
    uVar13 = (iVar2 << (ulong)(uVar18 & 0x1f)) + uVar13;
    uVar18 = (uVar18 + iVar20) - (uint)(iVar2 < iVar9);
    puVar17 = puVar16;
    if (0x10 < (int)uVar18) {
      if ((!bVar4) && (puVar14 < puVar16)) goto LAB_1099af458;
      puVar17 = puVar16 + 1;
      *puVar16 = (short)uVar13;
      uVar13 = uVar13 >> 0x10;
      uVar18 = uVar18 - 0x10;
    }
    uVar7 = (int)uVar11 + 1;
    uVar11 = (ulong)uVar7;
    puVar16 = puVar17;
    if ((uVar1 <= uVar7) || (iVar20 = iVar12, uVar15 == 1)) goto LAB_1099af438;
  } while( true );
}



/* Entry: 1099af268; end: 1099af783;  */

long FUN_1099af268(undefined2 *param_1,long param_2,long param_3,int param_4,uint param_5,
                  int param_6)

{
  uint uVar1;
  int iVar2;
  short sVar3;
  bool bVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  int iVar11;
  uint uVar12;
  undefined2 *puVar13;
  uint uVar14;
  undefined2 *puVar15;
  undefined2 *puVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  
  uVar1 = param_4 + 1;
  if (param_4 == -1) {
    return -1;
  }
  uVar10 = 0;
  uVar12 = param_5 - 5;
  bVar4 = true;
  uVar18 = 1 << (ulong)(param_5 & 0x1f);
  uVar14 = uVar18 + 1;
  puVar13 = (undefined2 *)((long)param_1 + param_2 + -2);
  uVar17 = 4;
  puVar15 = param_1;
  iVar19 = param_5 + 1;
  do {
    if (!bVar4) {
      uVar7 = uVar10;
      if ((uint)uVar10 < uVar1) {
        while (*(short *)(param_3 + uVar7 * 2) == 0) {
          uVar7 = uVar7 + 1;
          if (uVar1 == uVar7) goto LAB_1099af438;
        }
      }
      uVar6 = (uint)uVar7;
      if (uVar6 == uVar1) {
LAB_1099af438:
        uVar1 = uVar17 + 0xe;
        if (-8 < (int)uVar17) {
          uVar1 = uVar17 + 7;
        }
        if (uVar14 == 1) {
          if ((param_6 == 0) && (puVar13 < puVar15)) {
LAB_1099af458:
            lVar5 = -0x46;
          }
          else {
            *puVar15 = (short)uVar12;
            lVar5 = (long)puVar15 + (((long)((ulong)uVar1 << 0x20) >> 0x23) - (long)param_1);
          }
        }
        else {
LAB_1099af460:
          lVar5 = -1;
        }
        return lVar5;
      }
      if ((uint)uVar10 + 0x18 <= uVar6) {
        puVar16 = puVar15;
        do {
          if ((param_6 == 0) && (puVar13 < puVar16)) goto LAB_1099af458;
          uVar12 = uVar12 + (0xffff << (ulong)(uVar17 & 0x1f));
          puVar15 = puVar16 + 1;
          *puVar16 = (short)uVar12;
          uVar12 = uVar12 >> 0x10;
          iVar8 = (int)uVar10;
          uVar10 = (ulong)(iVar8 + 0x18);
          puVar16 = puVar15;
        } while (iVar8 + 0x30U <= uVar6);
      }
      uVar9 = (int)uVar10 + 3;
      while (iVar8 = (int)uVar10, uVar9 <= uVar6) {
        uVar12 = (3 << (ulong)(uVar17 & 0x1f)) + uVar12;
        uVar17 = uVar17 + 2;
        uVar10 = (ulong)(iVar8 + 3);
        uVar9 = iVar8 + 6;
      }
      uVar12 = (uVar6 - iVar8 << (ulong)(uVar17 & 0x1f)) + uVar12;
      uVar10 = uVar7;
      if ((int)uVar17 < 0xf) {
        uVar17 = uVar17 + 2;
      }
      else {
        if ((param_6 == 0) && (puVar13 < puVar15)) goto LAB_1099af458;
        *puVar15 = (short)uVar12;
        uVar12 = uVar12 >> 0x10;
        uVar17 = uVar17 - 0xe;
        puVar15 = puVar15 + 1;
      }
    }
    sVar3 = *(short *)(param_3 + (uVar10 & 0xffffffff) * 2);
    iVar8 = ~uVar14 + uVar18 * 2;
    iVar11 = -(int)sVar3;
    if (-1 < sVar3) {
      iVar11 = (int)sVar3;
    }
    uVar14 = uVar14 - iVar11;
    iVar11 = sVar3 + 1;
    iVar2 = 0;
    if ((int)uVar18 <= iVar11) {
      iVar2 = iVar8;
    }
    iVar2 = iVar2 + iVar11;
    bVar4 = iVar2 != 1;
    if ((int)uVar14 < 1) goto LAB_1099af460;
    iVar11 = iVar19;
    if ((int)uVar14 < (int)uVar18) {
      do {
        iVar11 = iVar11 + -1;
        uVar9 = uVar18 >> 1;
        uVar6 = uVar18 >> 1;
        uVar18 = uVar9;
      } while (uVar14 < uVar6);
    }
    uVar12 = (iVar2 << (ulong)(uVar17 & 0x1f)) + uVar12;
    uVar17 = (uVar17 + iVar19) - (uint)(iVar2 < iVar8);
    puVar16 = puVar15;
    if (0x10 < (int)uVar17) {
      if ((param_6 == 0) && (puVar13 < puVar15)) goto LAB_1099af458;
      puVar16 = puVar15 + 1;
      *puVar15 = (short)uVar12;
      uVar12 = uVar12 >> 0x10;
      uVar17 = uVar17 - 0x10;
    }
    uVar6 = (int)uVar10 + 1;
    uVar10 = (ulong)uVar6;
    puVar15 = puVar16;
    if ((uVar1 <= uVar6) || (iVar19 = iVar11, uVar14 == 1)) goto LAB_1099af438;
  } while( true );
}



/* Entry: 1099af784; end: 1099afb47;  */

long FUN_1099af784(ulong *param_1,ulong param_2,byte *param_3,ulong param_4,ushort *param_5,
                  int param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong *puVar5;
  ulong *puVar6;
  int iVar7;
  int iVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong *puVar15;
  byte *pbVar16;
  byte *pbVar17;
  long lVar18;
  ulong *puVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  uint uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  
  if ((2 < param_4) && (8 < param_2)) {
    puVar15 = (ulong *)((long)param_1 + (param_2 - 8));
    uVar9 = *param_5;
    lVar18 = (long)(1 << (ulong)(uVar9 - 1 & 0x1f));
    if (uVar9 == 0) {
      lVar18 = 1;
    }
    iVar7 = *(int *)(param_5 + lVar18 * 2 + (ulong)param_3[param_4 - 1] * 4 + 2 + 2);
    uVar23 = iVar7 + 0x8000;
    uVar21 = (ulong)param_5[(ulong)((uVar23 & 0xffff0000) - iVar7 >>
                                   ((ulong)(uVar23 >> 0x10) & 0x3f)) +
                            (long)*(int *)(param_5 +
                                          lVar18 * 2 + (ulong)param_3[param_4 - 1] * 4 + 2) + 2];
    if ((param_4 & 1) == 0) {
      uVar20 = 0;
      uVar23 = 0;
      pbVar16 = param_3 + (param_4 - 2);
      iVar7 = *(int *)(param_5 + lVar18 * 2 + (ulong)*pbVar16 * 4 + 2 + 2);
      uVar1 = iVar7 + 0x8000;
      uVar10 = param_5[(ulong)((uVar1 & 0xffff0000) - iVar7 >> ((ulong)(uVar1 >> 0x10) & 0x3f)) +
                       (long)*(int *)(param_5 + lVar18 * 2 + (ulong)*pbVar16 * 4 + 2) + 2];
      puVar19 = param_1;
      uVar22 = uVar21;
    }
    else {
      pbVar16 = param_3 + (param_4 - 3);
      iVar8 = *(int *)(param_5 + lVar18 * 2 + (ulong)param_3[param_4 - 2] * 4 + 2 + 2);
      uVar1 = iVar8 + 0x8000;
      uVar22 = (ulong)param_5[(ulong)((uVar1 & 0xffff0000) - iVar8 >>
                                     ((ulong)(uVar1 >> 0x10) & 0x3f)) +
                              (long)*(int *)(param_5 +
                                            lVar18 * 2 + (ulong)param_3[param_4 - 2] * 4 + 2) + 2];
      uVar20 = *(uint *)(param_5 + lVar18 * 2 + (ulong)*pbVar16 * 4 + 2 + 2) + uVar21;
      uVar1 = *(uint *)(&UNK_10e00f8a0 + (uVar20 >> 0x10) * 4);
      uVar10 = param_5[(ulong)(param_5[(ulong)((uVar23 & 0xffff0000) - iVar7 >>
                                              ((ulong)(uVar23 >> 0x10) & 0x3f)) +
                                       (long)*(int *)(param_5 +
                                                     lVar18 * 2 +
                                                     (ulong)param_3[param_4 - 1] * 4 + 2) + 2] >>
                              (uVar20 >> 0x10 & 0x3f)) +
                       (long)*(int *)(param_5 + lVar18 * 2 + (ulong)*pbVar16 * 4 + 2) + 2];
      *param_1 = uVar1 & uVar21;
      puVar5 = (ulong *)((long)param_1 + (uVar20 >> 0x13));
      puVar19 = puVar5;
      if ((param_6 == 0) && (puVar19 = puVar15, puVar5 <= puVar15)) {
        puVar19 = puVar5;
      }
      uVar23 = (uint)(uVar20 >> 0x10) & 7;
      uVar20 = (uVar1 & uVar21) >> ((uVar20 >> 0x13 & 7) << 3);
    }
    uVar21 = (ulong)uVar10;
    pbVar17 = pbVar16;
    if (((uint)param_4 >> 1 & 1) == 0) {
      pbVar17 = pbVar16 + -2;
      uVar12 = *(uint *)(param_5 + lVar18 * 2 + (ulong)pbVar16[-1] * 4 + 2 + 2) + uVar22;
      uVar13 = uVar12 >> 0x10;
      uVar14 = *(uint *)(&UNK_10e00f8a0 + uVar13 * 4) & uVar22;
      uVar1 = uVar23 + (int)(uVar12 >> 0x10);
      uVar22 = (ulong)param_5[(uVar22 >> (uVar13 & 0x3f)) +
                              (long)*(int *)(param_5 + lVar18 * 2 + (ulong)pbVar16[-1] * 4 + 2) + 2]
      ;
      uVar12 = *(uint *)(param_5 + lVar18 * 2 + (ulong)*pbVar17 * 4 + 2 + 2) + uVar21;
      uVar13 = uVar12 >> 0x10;
      uVar20 = uVar14 << uVar23 |
               (*(uint *)(&UNK_10e00f8a0 + uVar13 * 4) & uVar21) << ((ulong)uVar1 & 0x3f) | uVar20;
      uVar1 = uVar1 + (int)(uVar12 >> 0x10);
      uVar21 = (ulong)param_5[(ulong)(uVar10 >> (uVar13 & 0x3f)) +
                              (long)*(int *)(param_5 + lVar18 * 2 + (ulong)*pbVar17 * 4 + 2) + 2];
      uVar12 = (ulong)(uVar1 >> 3);
      *puVar19 = uVar20;
      puVar5 = (ulong *)((long)puVar19 + uVar12);
      puVar19 = puVar5;
      if ((param_6 == 0) && (puVar19 = puVar15, puVar5 <= puVar15)) {
        puVar19 = puVar5;
      }
      uVar23 = uVar1 & 7;
      uVar20 = uVar20 >> ((uVar12 & 7) << 3);
    }
    while (param_3 < pbVar17) {
      uVar12 = uVar22 + *(uint *)(param_5 + lVar18 * 2 + (ulong)pbVar17[-1] * 4 + 2 + 2);
      uVar13 = uVar12 >> 0x10;
      uVar1 = uVar23 + (int)(uVar12 >> 0x10);
      uVar10 = param_5[(uVar22 >> (uVar13 & 0x3f)) +
                       (long)*(int *)(param_5 + lVar18 * 2 + (ulong)pbVar17[-1] * 4 + 2) + 2];
      uVar12 = uVar21 + *(uint *)(param_5 + lVar18 * 2 + (ulong)pbVar17[-2] * 4 + 2 + 2);
      uVar14 = uVar12 >> 0x10;
      uVar2 = uVar1 + (int)(uVar12 >> 0x10);
      uVar11 = param_5[(uVar21 >> (uVar14 & 0x3f)) +
                       (long)*(int *)(param_5 + lVar18 * 2 + (ulong)pbVar17[-2] * 4 + 2) + 2];
      uVar12 = (ulong)*(uint *)(param_5 + lVar18 * 2 + (ulong)pbVar17[-3] * 4 + 2 + 2) +
               (ulong)uVar10;
      uVar24 = uVar12 >> 0x10;
      uVar3 = uVar2 + (int)(uVar12 >> 0x10);
      uVar12 = (ulong)*(uint *)(param_5 + lVar18 * 2 + (ulong)pbVar17[-4] * 4 + 2 + 2) +
               (ulong)uVar11;
      uVar25 = uVar12 >> 0x10;
      uVar4 = uVar3 + (int)(uVar12 >> 0x10);
      uVar26 = (ulong)(uVar4 >> 3);
      puVar5 = (ulong *)((long)puVar19 + uVar26);
      uVar12 = uVar22 & *(uint *)(&UNK_10e00f8a0 + uVar13 * 4);
      uVar22 = (ulong)param_5[(ulong)(uVar10 >> (uVar24 & 0x3f)) +
                              (long)*(int *)(param_5 + lVar18 * 2 + (ulong)pbVar17[-3] * 4 + 2) + 2]
      ;
      uVar20 = uVar12 << uVar23 | uVar20 |
               (uVar21 & *(uint *)(&UNK_10e00f8a0 + uVar14 * 4)) << ((ulong)uVar1 & 0x3f) |
               ((ulong)*(uint *)(&UNK_10e00f8a0 + uVar24 * 4) & (ulong)uVar10) <<
               ((ulong)uVar2 & 0x3f) |
               ((ulong)*(uint *)(&UNK_10e00f8a0 + uVar25 * 4) & (ulong)uVar11) <<
               ((ulong)uVar3 & 0x3f);
      uVar21 = (ulong)param_5[(ulong)(uVar11 >> (uVar25 & 0x3f)) +
                              (long)*(int *)(param_5 + lVar18 * 2 + (ulong)pbVar17[-4] * 4 + 2) + 2]
      ;
      puVar6 = puVar15;
      if (puVar5 <= puVar15 || param_6 != 0) {
        puVar6 = puVar5;
      }
      *puVar19 = uVar20;
      uVar23 = uVar4 & 7;
      uVar20 = uVar20 >> ((uVar26 & 7) << 3);
      pbVar17 = pbVar17 + -4;
      puVar19 = puVar6;
    }
    uVar1 = *(uint *)(&UNK_10e00f8a0 + (ulong)uVar9 * 4);
    uVar20 = (uVar22 & uVar1) << uVar23 | uVar20;
    uVar23 = uVar23 + uVar9;
    uVar22 = (ulong)(uVar23 >> 3);
    *puVar19 = uVar20;
    puVar19 = (ulong *)((long)puVar19 + uVar22);
    puVar5 = puVar15;
    if (puVar19 <= puVar15) {
      puVar5 = puVar19;
    }
    uVar23 = uVar23 & 7;
    uVar21 = uVar20 >> ((uVar22 & 7) << 3) | (uVar21 & uVar1) << uVar23;
    uVar23 = uVar23 + uVar9;
    uVar20 = (ulong)(uVar23 >> 3);
    *puVar5 = uVar21;
    puVar5 = (ulong *)((long)puVar5 + uVar20);
    puVar19 = puVar15;
    if (puVar5 <= puVar15) {
      puVar19 = puVar5;
    }
    uVar23 = uVar23 & 7;
    uVar1 = uVar23 + 1;
    *puVar19 = uVar21 >> ((uVar20 & 7) << 3) | 1L << uVar23;
    puVar19 = (ulong *)((long)puVar19 + (ulong)(uVar1 >> 3));
    puVar5 = puVar15;
    if (puVar19 <= puVar15) {
      puVar5 = puVar19;
    }
    if (puVar5 < puVar15) {
      lVar18 = (long)puVar5 - (long)param_1;
      if ((uVar1 & 7) != 0) {
        lVar18 = lVar18 + 1;
      }
      return lVar18;
    }
  }
  return 0;
}



/* Entry: 1099afb48; end: 1099afbf3;  */

uint FUN_1099afb48(uint *param_1,uint *param_2,byte *param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  uVar2 = *param_2;
  _bzero(param_1,(ulong)(uVar2 + 1) << 2);
  if (param_4 == 0) {
    uVar2 = 0;
    *param_2 = 0;
  }
  else {
    if (0 < param_4) {
      pbVar5 = param_3;
      do {
        pbVar4 = pbVar5 + 1;
        param_1[*pbVar5] = param_1[*pbVar5] + 1;
        pbVar5 = pbVar4;
      } while (pbVar4 < param_3 + param_4);
    }
    do {
      uVar1 = uVar2;
      uVar2 = uVar1 - 1;
    } while (param_1[uVar1] == 0);
    *param_2 = uVar1;
    lVar3 = (ulong)uVar1 + 1;
    uVar1 = 0;
    do {
      uVar2 = *param_1;
      if (*param_1 <= uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = lVar3 + -1;
      param_1 = param_1 + 1;
      uVar1 = uVar2;
    } while (lVar3 != 0);
  }
  return uVar2;
}



/* Entry: 1099afbf4; end: 1099afc43;  */

/* WARNING: Removing unreachable block (ram,0x0001099afe1c) */
/* WARNING: Removing unreachable block (ram,0x0001099afe24) */
/* WARNING: Removing unreachable block (ram,0x0001099afe28) */
/* WARNING: Removing unreachable block (ram,0x0001099afed4) */
/* WARNING: Removing unreachable block (ram,0x0001099afe4c) */

ulong FUN_1099afbf4(uint *param_1,uint *param_2,uint *param_3,ulong param_4,int *param_5,
                   ulong param_6)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  byte *pbVar10;
  uint uVar11;
  
  if (param_4 < 0x5dc) {
    FUN_1099afb48();
    return (ulong)param_1 & 0xffffffff;
  }
  if (((ulong)param_5 & 3) == 0) {
    if (0xfff < param_6) {
      uVar11 = *param_2;
      _bzero(param_5,0x1000);
      if (param_4 == 0) {
        _bzero(param_1,uVar11 + 1);
        uVar5 = 0;
        *param_2 = 0;
      }
      else {
        uVar2 = 0xff;
        if (uVar11 != 0) {
          uVar2 = uVar11;
        }
        puVar9 = param_3;
        puVar7 = param_3;
        if (0x13 < (long)param_4) {
          uVar11 = *param_3;
          puVar8 = param_3;
          do {
            uVar3 = puVar8[1];
            param_5[uVar11 & 0xff] = param_5[uVar11 & 0xff] + 1;
            uVar4 = uVar11 >> 8 & 0xff;
            param_5[(ulong)uVar4 + 0x100] = param_5[(ulong)uVar4 + 0x100] + 1;
            uVar4 = uVar11 >> 0x10 & 0xff;
            param_5[(ulong)uVar4 + 0x200] = param_5[(ulong)uVar4 + 0x200] + 1;
            param_5[(ulong)(uVar11 >> 0x18) + 0x300] = param_5[(ulong)(uVar11 >> 0x18) + 0x300] + 1;
            uVar11 = puVar8[2];
            param_5[(ulong)uVar3 & 0xff] = param_5[(ulong)uVar3 & 0xff] + 1;
            uVar5 = (ulong)(uVar3 >> 8) & 0xff;
            param_5[uVar5 + 0x100] = param_5[uVar5 + 0x100] + 1;
            uVar5 = (ulong)(uVar3 >> 0x10) & 0xff;
            param_5[uVar5 + 0x200] = param_5[uVar5 + 0x200] + 1;
            uVar5 = (ulong)(uVar3 >> 0x16) & 0x3fc;
            *(int *)((long)param_5 + uVar5 + 0xc00) = *(int *)((long)param_5 + uVar5 + 0xc00) + 1;
            uVar3 = puVar8[3];
            param_5[(ulong)uVar11 & 0xff] = param_5[(ulong)uVar11 & 0xff] + 1;
            uVar5 = (ulong)(uVar11 >> 8) & 0xff;
            param_5[uVar5 + 0x100] = param_5[uVar5 + 0x100] + 1;
            uVar5 = (ulong)(uVar11 >> 0x10) & 0xff;
            param_5[uVar5 + 0x200] = param_5[uVar5 + 0x200] + 1;
            uVar5 = (ulong)(uVar11 >> 0x16) & 0x3fc;
            *(int *)((long)param_5 + uVar5 + 0xc00) = *(int *)((long)param_5 + uVar5 + 0xc00) + 1;
            puVar9 = puVar8 + 4;
            uVar11 = *puVar9;
            param_5[(ulong)uVar3 & 0xff] = param_5[(ulong)uVar3 & 0xff] + 1;
            uVar5 = (ulong)(uVar3 >> 8) & 0xff;
            param_5[uVar5 + 0x100] = param_5[uVar5 + 0x100] + 1;
            uVar5 = (ulong)(uVar3 >> 0x10) & 0xff;
            param_5[uVar5 + 0x200] = param_5[uVar5 + 0x200] + 1;
            uVar5 = (ulong)(uVar3 >> 0x16) & 0x3fc;
            *(int *)((long)param_5 + uVar5 + 0xc00) = *(int *)((long)param_5 + uVar5 + 0xc00) + 1;
            puVar1 = puVar8 + 5;
            puVar7 = puVar7 + 4;
            puVar8 = puVar9;
          } while (puVar1 < (uint *)((long)((long)param_3 + param_4) - 0xfU));
        }
        if (puVar9 < (uint *)((long)param_3 + param_4)) {
          pbVar10 = (byte *)((long)param_3 + (param_4 - (long)puVar7));
          do {
            param_5[(byte)*puVar9] = param_5[(byte)*puVar9] + 1;
            pbVar10 = pbVar10 + -1;
            puVar9 = (uint *)((long)puVar9 + 1);
          } while (pbVar10 != (byte *)0x0);
        }
        uVar5 = 0;
        if (0xfe < uVar2) {
          uVar2 = 0xff;
        }
        uVar6 = (ulong)(uVar2 + 1);
        puVar7 = param_1;
        do {
          uVar11 = param_5[0x100] + *param_5 + param_5[0x200] + param_5[0x300];
          *puVar7 = uVar11;
          if (uVar11 <= (uint)uVar5) {
            uVar11 = (uint)uVar5;
          }
          uVar5 = (ulong)uVar11;
          param_5 = param_5 + 1;
          uVar6 = uVar6 - 1;
          puVar7 = puVar7 + 1;
        } while (uVar6 != 0);
        do {
          uVar11 = uVar2;
          uVar2 = uVar11 - 1;
        } while (param_1[uVar11] == 0);
        *param_2 = uVar11;
      }
      return uVar5;
    }
    return 0xffffffffffffffbe;
  }
  return 0xffffffffffffffff;
}



/* Entry: 1099afc44; end: 1099afeef;  */

ulong FUN_1099afc44(uint *param_1,uint *param_2,uint *param_3,long param_4,int param_5,int *param_6)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  byte *pbVar11;
  uint uVar12;
  
  uVar12 = *param_2;
  _bzero(param_6,0x1000);
  if (param_4 == 0) {
    _bzero(param_1,uVar12 + 1);
    uVar6 = 0;
    *param_2 = 0;
  }
  else {
    uVar3 = 0xff;
    if (uVar12 != 0) {
      uVar3 = uVar12;
    }
    puVar10 = param_3;
    puVar8 = param_3;
    if (0x13 < param_4) {
      uVar12 = *param_3;
      puVar9 = param_3;
      do {
        uVar4 = puVar9[1];
        param_6[uVar12 & 0xff] = param_6[uVar12 & 0xff] + 1;
        uVar5 = uVar12 >> 8 & 0xff;
        param_6[(ulong)uVar5 + 0x100] = param_6[(ulong)uVar5 + 0x100] + 1;
        uVar5 = uVar12 >> 0x10 & 0xff;
        param_6[(ulong)uVar5 + 0x200] = param_6[(ulong)uVar5 + 0x200] + 1;
        param_6[(ulong)(uVar12 >> 0x18) + 0x300] = param_6[(ulong)(uVar12 >> 0x18) + 0x300] + 1;
        uVar12 = puVar9[2];
        param_6[(ulong)uVar4 & 0xff] = param_6[(ulong)uVar4 & 0xff] + 1;
        uVar6 = (ulong)(uVar4 >> 8) & 0xff;
        param_6[uVar6 + 0x100] = param_6[uVar6 + 0x100] + 1;
        uVar6 = (ulong)(uVar4 >> 0x10) & 0xff;
        param_6[uVar6 + 0x200] = param_6[uVar6 + 0x200] + 1;
        uVar6 = (ulong)(uVar4 >> 0x16) & 0x3fc;
        *(int *)((long)param_6 + uVar6 + 0xc00) = *(int *)((long)param_6 + uVar6 + 0xc00) + 1;
        uVar4 = puVar9[3];
        param_6[(ulong)uVar12 & 0xff] = param_6[(ulong)uVar12 & 0xff] + 1;
        uVar6 = (ulong)(uVar12 >> 8) & 0xff;
        param_6[uVar6 + 0x100] = param_6[uVar6 + 0x100] + 1;
        uVar6 = (ulong)(uVar12 >> 0x10) & 0xff;
        param_6[uVar6 + 0x200] = param_6[uVar6 + 0x200] + 1;
        uVar6 = (ulong)(uVar12 >> 0x16) & 0x3fc;
        *(int *)((long)param_6 + uVar6 + 0xc00) = *(int *)((long)param_6 + uVar6 + 0xc00) + 1;
        puVar10 = puVar9 + 4;
        uVar12 = *puVar10;
        param_6[(ulong)uVar4 & 0xff] = param_6[(ulong)uVar4 & 0xff] + 1;
        uVar6 = (ulong)(uVar4 >> 8) & 0xff;
        param_6[uVar6 + 0x100] = param_6[uVar6 + 0x100] + 1;
        uVar6 = (ulong)(uVar4 >> 0x10) & 0xff;
        param_6[uVar6 + 0x200] = param_6[uVar6 + 0x200] + 1;
        uVar6 = (ulong)(uVar4 >> 0x16) & 0x3fc;
        *(int *)((long)param_6 + uVar6 + 0xc00) = *(int *)((long)param_6 + uVar6 + 0xc00) + 1;
        puVar1 = puVar9 + 5;
        puVar8 = puVar8 + 4;
        puVar9 = puVar10;
      } while (puVar1 < (uint *)(((long)param_3 + param_4) - 0xfU));
    }
    if (puVar10 < (uint *)((long)param_3 + param_4)) {
      pbVar11 = (byte *)((long)param_3 + (param_4 - (long)puVar8));
      do {
        param_6[(byte)*puVar10] = param_6[(byte)*puVar10] + 1;
        pbVar11 = pbVar11 + -1;
        puVar10 = (uint *)((long)puVar10 + 1);
      } while (pbVar11 != (byte *)0x0);
    }
    if ((param_5 != 0) && (uVar3 < 0xff)) {
      uVar6 = 0xff;
      do {
        iVar2 = param_6[uVar6 + 0x200] + param_6[uVar6 + 0x100] +
                param_6[uVar6 + 0x300] + param_6[uVar6];
        param_6[uVar6] = iVar2;
        if (iVar2 != 0) {
          return 0xffffffffffffffd0;
        }
        uVar12 = (int)uVar6 - 1;
        uVar6 = (ulong)uVar12;
      } while (uVar3 < uVar12);
    }
    uVar6 = 0;
    if (0xfe < uVar3) {
      uVar3 = 0xff;
    }
    uVar7 = (ulong)(uVar3 + 1);
    puVar8 = param_1;
    do {
      uVar12 = param_6[0x100] + *param_6 + param_6[0x200] + param_6[0x300];
      *puVar8 = uVar12;
      if (uVar12 <= (uint)uVar6) {
        uVar12 = (uint)uVar6;
      }
      uVar6 = (ulong)uVar12;
      param_6 = param_6 + 1;
      uVar7 = uVar7 - 1;
      puVar8 = puVar8 + 1;
    } while (uVar7 != 0);
    do {
      uVar12 = uVar3;
      uVar3 = uVar12 - 1;
    } while (param_1[uVar12] == 0);
    *param_2 = uVar12;
  }
  return uVar6;
}



/* Entry: 1099afef0; end: 1099aff3b;  */

ulong FUN_1099afef0(uint *param_1,uint *param_2,uint *param_3,ulong param_4,int *param_5,
                   ulong param_6)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  bool bVar7;
  ulong uVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  byte *pbVar12;
  uint uVar13;
  
  if (((ulong)param_5 & 3) != 0) {
    return 0xffffffffffffffff;
  }
  if (param_6 < 0x1000) {
    return 0xffffffffffffffbe;
  }
  if (*param_2 < 0xff) {
    bVar7 = true;
  }
  else {
    *param_2 = 0xff;
    if (param_4 < 0x5dc) {
      FUN_1099afb48();
      return (ulong)param_1 & 0xffffffff;
    }
    if (((ulong)param_5 & 3) != 0) {
      return 0xffffffffffffffff;
    }
    if (param_6 < 0x1000) {
      return 0xffffffffffffffbe;
    }
    bVar7 = false;
  }
  uVar13 = *param_2;
  _bzero(param_5,0x1000);
  if (param_4 == 0) {
    _bzero(param_1,uVar13 + 1);
    uVar6 = 0;
    *param_2 = 0;
  }
  else {
    uVar3 = 0xff;
    if (uVar13 != 0) {
      uVar3 = uVar13;
    }
    puVar11 = param_3;
    puVar9 = param_3;
    if (0x13 < (long)param_4) {
      uVar13 = *param_3;
      puVar10 = param_3;
      do {
        uVar4 = puVar10[1];
        param_5[uVar13 & 0xff] = param_5[uVar13 & 0xff] + 1;
        uVar5 = uVar13 >> 8 & 0xff;
        param_5[(ulong)uVar5 + 0x100] = param_5[(ulong)uVar5 + 0x100] + 1;
        uVar5 = uVar13 >> 0x10 & 0xff;
        param_5[(ulong)uVar5 + 0x200] = param_5[(ulong)uVar5 + 0x200] + 1;
        param_5[(ulong)(uVar13 >> 0x18) + 0x300] = param_5[(ulong)(uVar13 >> 0x18) + 0x300] + 1;
        uVar13 = puVar10[2];
        param_5[(ulong)uVar4 & 0xff] = param_5[(ulong)uVar4 & 0xff] + 1;
        uVar6 = (ulong)(uVar4 >> 8) & 0xff;
        param_5[uVar6 + 0x100] = param_5[uVar6 + 0x100] + 1;
        uVar6 = (ulong)(uVar4 >> 0x10) & 0xff;
        param_5[uVar6 + 0x200] = param_5[uVar6 + 0x200] + 1;
        uVar6 = (ulong)(uVar4 >> 0x16) & 0x3fc;
        *(int *)((long)param_5 + uVar6 + 0xc00) = *(int *)((long)param_5 + uVar6 + 0xc00) + 1;
        uVar4 = puVar10[3];
        param_5[(ulong)uVar13 & 0xff] = param_5[(ulong)uVar13 & 0xff] + 1;
        uVar6 = (ulong)(uVar13 >> 8) & 0xff;
        param_5[uVar6 + 0x100] = param_5[uVar6 + 0x100] + 1;
        uVar6 = (ulong)(uVar13 >> 0x10) & 0xff;
        param_5[uVar6 + 0x200] = param_5[uVar6 + 0x200] + 1;
        uVar6 = (ulong)(uVar13 >> 0x16) & 0x3fc;
        *(int *)((long)param_5 + uVar6 + 0xc00) = *(int *)((long)param_5 + uVar6 + 0xc00) + 1;
        puVar11 = puVar10 + 4;
        uVar13 = *puVar11;
        param_5[(ulong)uVar4 & 0xff] = param_5[(ulong)uVar4 & 0xff] + 1;
        uVar6 = (ulong)(uVar4 >> 8) & 0xff;
        param_5[uVar6 + 0x100] = param_5[uVar6 + 0x100] + 1;
        uVar6 = (ulong)(uVar4 >> 0x10) & 0xff;
        param_5[uVar6 + 0x200] = param_5[uVar6 + 0x200] + 1;
        uVar6 = (ulong)(uVar4 >> 0x16) & 0x3fc;
        *(int *)((long)param_5 + uVar6 + 0xc00) = *(int *)((long)param_5 + uVar6 + 0xc00) + 1;
        puVar1 = puVar10 + 5;
        puVar9 = puVar9 + 4;
        puVar10 = puVar11;
      } while (puVar1 < (uint *)((long)((long)param_3 + param_4) - 0xfU));
    }
    if (puVar11 < (uint *)((long)param_3 + param_4)) {
      pbVar12 = (byte *)((long)param_3 + (param_4 - (long)puVar9));
      do {
        param_5[(byte)*puVar11] = param_5[(byte)*puVar11] + 1;
        pbVar12 = pbVar12 + -1;
        puVar11 = (uint *)((long)puVar11 + 1);
      } while (pbVar12 != (byte *)0x0);
    }
    if ((bVar7) && (uVar3 < 0xff)) {
      uVar6 = 0xff;
      do {
        iVar2 = param_5[uVar6 + 0x200] + param_5[uVar6 + 0x100] +
                param_5[uVar6 + 0x300] + param_5[uVar6];
        param_5[uVar6] = iVar2;
        if (iVar2 != 0) {
          return 0xffffffffffffffd0;
        }
        uVar13 = (int)uVar6 - 1;
        uVar6 = (ulong)uVar13;
      } while (uVar3 < uVar13);
    }
    uVar6 = 0;
    if (0xfe < uVar3) {
      uVar3 = 0xff;
    }
    uVar8 = (ulong)(uVar3 + 1);
    puVar9 = param_1;
    do {
      uVar13 = param_5[0x100] + *param_5 + param_5[0x200] + param_5[0x300];
      *puVar9 = uVar13;
      if (uVar13 <= (uint)uVar6) {
        uVar13 = (uint)uVar6;
      }
      uVar6 = (ulong)uVar13;
      param_5 = param_5 + 1;
      uVar8 = uVar8 - 1;
      puVar9 = puVar9 + 1;
    } while (uVar8 != 0);
    do {
      uVar13 = uVar3;
      uVar3 = uVar13 - 1;
    } while (param_1[uVar13] == 0);
    *param_2 = uVar13;
  }
  return uVar6;
}



/* Entry: 1099aff3c; end: 1099b01eb;  */

ulong * FUN_1099aff3c(char *param_1,ulong *param_2,long param_3,uint param_4,int param_5)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  short sVar7;
  uint uVar8;
  undefined4 uVar9;
  bool bVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  int *piVar14;
  int *piVar15;
  uint uVar16;
  int iVar17;
  uint *puVar18;
  undefined1 *puVar19;
  int *piVar20;
  int *piVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  ulong *puVar24;
  char *pcVar25;
  ulong uVar26;
  undefined1 *puVar27;
  uint uVar28;
  short *psVar29;
  int *piVar30;
  ulong uVar31;
  ushort uVar32;
  int iVar33;
  uint uVar34;
  ushort *puVar35;
  long lVar36;
  ulong uVar37;
  byte *pbVar38;
  byte *pbVar39;
  long lVar40;
  uint uVar41;
  ulong uVar42;
  int iVar43;
  undefined8 *puVar44;
  ulong uVar45;
  uint uVar46;
  ulong *puVar47;
  ulong *puVar48;
  short asStack_640 [16];
  uint auStack_620 [6];
  ulong uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  long lStack_518;
  undefined8 uStack_4c0;
  short asStack_4b8 [16];
  ushort auStack_498 [16];
  undefined1 auStack_478 [4];
  int aiStack_474 [15];
  ulong auStack_438 [32];
  long lStack_338;
  undefined4 uStack_2f4;
  char acStack_2ee [255];
  char acStack_1ef [13];
  ulong auStack_1e2 [3];
  undefined1 auStack_1c8 [52];
  undefined1 auStack_194 [64];
  ulong auStack_154 [29];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar13 = param_2;
  if (0xff < param_4) {
    puVar24 = (ulong *)0xffffffffffffffd2;
    goto LAB_1099b01b0;
  }
  acStack_1ef[0] = '\0';
  if (1 < param_5 + 1U) {
    lVar40 = (ulong)(param_5 + 1U) - 1;
    pcVar25 = acStack_1ef;
    do {
      pcVar25 = pcVar25 + 1;
      *pcVar25 = (char)lVar40;
      lVar40 = lVar40 + -1;
    } while (lVar40 != 0);
  }
  if (param_4 == 0) {
    uVar26 = 0;
LAB_1099b0004:
    if (param_4 < 0x81) {
      puVar24 = (ulong *)(ulong)((param_4 + 1 >> 1) + 1);
      if (param_2 < puVar24) {
        puVar24 = (ulong *)0xffffffffffffffba;
      }
      else {
        *param_1 = (char)param_4 + '\x7f';
        acStack_2ee[uVar26] = '\0';
        if (param_4 != 0) {
          uVar31 = 0;
          do {
            param_1 = param_1 + 1;
            *param_1 = acStack_2ee[uVar31 + 1] + acStack_2ee[uVar31] * '\x10';
            uVar31 = uVar31 + 2;
          } while (uVar31 < uVar26);
        }
      }
    }
    else {
      puVar24 = (ulong *)0xffffffffffffffff;
    }
  }
  else {
    uVar31 = 0;
    uVar26 = (ulong)param_4;
    pbVar38 = (byte *)(param_3 + 2);
    do {
      acStack_2ee[uVar31] = acStack_1ef[*pbVar38];
      uVar31 = uVar31 + 1;
      pbVar38 = pbVar38 + 4;
    } while (uVar26 != uVar31);
    puVar12 = (ulong *)(param_1 + 1);
    uStack_2f4 = 0xc;
    if (param_4 - 1 == 0) {
      uVar26 = 1;
      goto LAB_1099b0004;
    }
    puVar19 = auStack_1c8;
    puVar13 = (ulong *)&uStack_2f4;
    FUN_1099afb48(puVar19,puVar13,acStack_2ee,uVar26);
    uVar9 = uStack_2f4;
    if (((uint)puVar19 == param_4) || ((uint)puVar19 == 1)) goto LAB_1099b0004;
    uVar28 = ((uint)LZCOUNT(param_4 - 1) ^ 0x1f) - 2;
    uVar46 = 0x20 - (int)LZCOUNT(param_4);
    uVar16 = ((uint)LZCOUNT(uStack_2f4) ^ 0x1f) + 2;
    if (uVar16 <= uVar46) {
      uVar46 = uVar16;
    }
    if (5 < uVar28) {
      uVar28 = 6;
    }
    if (uVar46 <= uVar28) {
      uVar46 = uVar28;
    }
    if (uVar46 < 6) {
      uVar46 = 5;
    }
    puVar47 = (ulong *)(ulong)uVar46;
    puVar24 = auStack_1e2;
    puVar13 = puVar47;
    func_0x0001099af480(puVar24,puVar47,auStack_1c8,uVar26,uStack_2f4);
    if (puVar24 < (ulong *)0xffffffffffffff89) {
      puVar48 = (ulong *)((long)param_2 + -1);
      puVar11 = puVar12;
      puVar13 = puVar48;
      FUN_1099af224(puVar12,puVar48,auStack_1e2,uVar9,puVar47);
      puVar24 = puVar11;
      if (puVar11 < (ulong *)0xffffffffffffff89) {
        puVar24 = auStack_154;
        puVar13 = auStack_1e2;
        FUN_1099af024(puVar24,puVar13,uVar9,puVar47,auStack_194,0x40);
        if (puVar24 < (ulong *)0xffffffffffffff89) {
          puVar13 = (ulong *)((long)puVar48 - (long)puVar11);
          puVar24 = (ulong *)((long)puVar12 + (long)puVar11);
          FUN_1099af784(puVar24,puVar13,acStack_2ee,uVar26,auStack_154,
                        (ulong *)(uVar26 + (param_4 >> 7) + 0xc) <= puVar13);
          if (puVar24 < (ulong *)0xffffffffffffff89) {
            if (puVar24 == (ulong *)0x0) goto LAB_1099b0004;
            puVar24 = (ulong *)((long)puVar24 + (long)puVar11);
            if (puVar24 < (ulong *)0xffffffffffffff89) {
              if ((puVar24 < (ulong *)0x2) || ((ulong *)(ulong)(param_4 >> 1) <= puVar24))
              goto LAB_1099b0004;
              *param_1 = (char)puVar24;
              puVar24 = (ulong *)((long)puVar24 + 1);
            }
          }
        }
      }
    }
  }
LAB_1099b01b0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar24;
  }
  ___stack_chk_fail();
  piVar20 = (int *)&uStack_4c0;
  lStack_338 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_4c0 = 0;
  puVar12 = auStack_438;
  puVar19 = auStack_478;
  puVar22 = (undefined4 *)((long)&uStack_4c0 + 4);
  piVar14 = (int *)0x100;
  func_0x000107c2ae28();
  if (puVar12 < (ulong *)0xffffffffffffff89) {
    uVar26 = (ulong)uStack_4c0._4_4_;
    if (uStack_4c0._4_4_ < 0xd) {
      uVar31 = uStack_4c0 & 0xffffffff;
      if ((int)*puVar13 + 1U < (uint)uStack_4c0) {
        puVar12 = (ulong *)0xffffffffffffffd0;
      }
      else {
        if (uStack_4c0._4_4_ != 0) {
          uVar37 = 0;
          iVar33 = 0;
          do {
            iVar17 = aiStack_474[uVar37];
            aiStack_474[uVar37] = iVar33;
            iVar33 = (iVar17 << (ulong)((uint)uVar37 & 0x1f)) + iVar33;
            uVar37 = uVar37 + 1;
          } while (uVar26 != uVar37);
        }
        if ((uint)uStack_4c0 == 0) {
          auStack_498[0] = 0;
          auStack_498[1] = 0;
          auStack_498[2] = 0;
          auStack_498[3] = 0;
          auStack_498[4] = 0;
          auStack_498[5] = 0;
          auStack_498[6] = 0;
          auStack_498[7] = 0;
          auStack_498[0xc] = 0;
          auStack_498[0xd] = 0;
          auStack_498[8] = 0;
          auStack_498[9] = 0;
          auStack_498[10] = 0;
          auStack_498[0xb] = 0;
          asStack_4b8[0] = 0;
          asStack_4b8[1] = 0;
          asStack_4b8[2] = 0;
          asStack_4b8[3] = 0;
          asStack_4b8[4] = 0;
          asStack_4b8[5] = 0;
          asStack_4b8[6] = 0;
          asStack_4b8[7] = 0;
          asStack_4b8[0xc] = 0;
          asStack_4b8[0xd] = 0;
          asStack_4b8[8] = 0;
          asStack_4b8[9] = 0;
          asStack_4b8[10] = 0;
          asStack_4b8[0xb] = 0;
        }
        else {
          pcVar25 = (char *)((long)puVar24 + 2);
          puVar47 = auStack_438;
          uVar37 = uVar31;
          do {
            *pcVar25 = ((char)(uStack_4c0 >> 0x20) + '\x01') - (char)*puVar47;
            uVar37 = uVar37 - 1;
            pcVar25 = pcVar25 + 4;
            puVar47 = (ulong *)((long)puVar47 + 1);
          } while (uVar37 != 0);
          auStack_498[0] = 0;
          auStack_498[1] = 0;
          auStack_498[2] = 0;
          auStack_498[3] = 0;
          auStack_498[4] = 0;
          auStack_498[5] = 0;
          auStack_498[6] = 0;
          auStack_498[7] = 0;
          auStack_498[0xc] = 0;
          auStack_498[0xd] = 0;
          auStack_498[8] = 0;
          auStack_498[9] = 0;
          auStack_498[10] = 0;
          auStack_498[0xb] = 0;
          asStack_4b8[0] = 0;
          asStack_4b8[1] = 0;
          asStack_4b8[2] = 0;
          asStack_4b8[3] = 0;
          asStack_4b8[4] = 0;
          asStack_4b8[5] = 0;
          asStack_4b8[6] = 0;
          asStack_4b8[7] = 0;
          asStack_4b8[0xc] = 0;
          asStack_4b8[0xd] = 0;
          asStack_4b8[8] = 0;
          asStack_4b8[9] = 0;
          asStack_4b8[10] = 0;
          asStack_4b8[0xb] = 0;
          pbVar38 = (byte *)((long)puVar24 + 2);
          uVar37 = uVar31;
          do {
            auStack_498[*pbVar38] = auStack_498[*pbVar38] + 1;
            uVar37 = uVar37 - 1;
            pbVar38 = pbVar38 + 4;
          } while (uVar37 != 0);
        }
        asStack_4b8[0xc] = 0;
        asStack_4b8[0xd] = 0;
        asStack_4b8[8] = 0;
        asStack_4b8[9] = 0;
        asStack_4b8[10] = 0;
        asStack_4b8[0xb] = 0;
        asStack_4b8[4] = 0;
        asStack_4b8[5] = 0;
        asStack_4b8[6] = 0;
        asStack_4b8[7] = 0;
        asStack_4b8[0] = 0;
        asStack_4b8[1] = 0;
        asStack_4b8[2] = 0;
        asStack_4b8[3] = 0;
        asStack_4b8[uVar26 + 1] = 0;
        if (uStack_4c0._4_4_ != 0) {
          uVar16 = 0;
          psVar29 = asStack_4b8 + uVar26;
          puVar35 = auStack_498 + uVar26;
          do {
            *psVar29 = (short)uVar16;
            uVar16 = *puVar35 + uVar16 >> 1 & 0x7fff;
            uVar28 = (int)uVar26 - 1;
            uVar26 = (ulong)uVar28;
            psVar29 = psVar29 + -1;
            puVar35 = puVar35 + -1;
          } while (uVar28 != 0);
        }
        if ((uint)uStack_4c0 != 0) {
          pbVar38 = (byte *)((long)puVar24 + 2);
          do {
            sVar7 = asStack_4b8[*pbVar38];
            asStack_4b8[*pbVar38] = sVar7 + 1;
            *(short *)(pbVar38 + -2) = sVar7;
            pbVar38 = pbVar38 + 4;
            uVar31 = uVar31 - 1;
          } while (uVar31 != 0);
        }
        *(uint *)puVar13 = (uint)uStack_4c0 - 1;
      }
    }
    else {
      puVar12 = (ulong *)0xffffffffffffffd4;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_338) {
    return puVar12;
  }
  ___stack_chk_fail();
  lStack_518 = *(long *)PTR____stack_chk_guard_11034bdc0;
  piVar15 = piVar14;
  piVar21 = piVar20;
  puVar23 = puVar22;
  if (((ulong)puVar22 & 3) == 0) {
    uVar16 = (uint)puVar19;
    if (uVar16 < 0x100) {
      puVar1 = puVar22 + 2;
      piVar15 = (int *)0x1000;
      _bzero(puVar22);
      uStack_538 = 0;
      uStack_540 = 0;
      uStack_528 = 0;
      uStack_530 = 0;
      uStack_558 = 0;
      uStack_560 = 0;
      uStack_548 = 0;
      uStack_550 = 0;
      uStack_578 = 0;
      uStack_580 = 0;
      uStack_568 = 0;
      uStack_570 = 0;
      uStack_598 = 0;
      uStack_5a0 = 0;
      uStack_588 = 0;
      uStack_590 = 0;
      uStack_5b8 = 0;
      uStack_5c0 = 0;
      uStack_5a8 = 0;
      uStack_5b0 = 0;
      uStack_5d8 = 0;
      uStack_5e0 = 0;
      uStack_5c8 = 0;
      uStack_5d0 = 0;
      uStack_5f8 = 0;
      uStack_600 = 0;
      uStack_5e8 = 0;
      uStack_5f0 = 0;
      uVar31 = (ulong)(uVar16 + 1);
      auStack_620[2] = 0;
      auStack_620[3] = 0;
      auStack_620[0] = 0;
      auStack_620[1] = 0;
      uStack_608 = 0;
      auStack_620[4] = 0;
      auStack_620[5] = 0;
      piVar30 = piVar14;
      uVar26 = uVar31;
      do {
        uVar37 = (ulong)((uint)LZCOUNT(*piVar30 + 1) ^ 0x1f);
        auStack_620[uVar37 * 2] = auStack_620[uVar37 * 2] + 1;
        uVar26 = uVar26 - 1;
        piVar30 = piVar30 + 1;
      } while (uVar26 != 0);
      lVar40 = 0xe8;
      iVar33 = (int)uStack_530;
      do {
        iVar33 = *(int *)((long)auStack_620 + lVar40) + iVar33;
        *(int *)((long)auStack_620 + lVar40) = iVar33;
        lVar40 = lVar40 + -8;
      } while (lVar40 != -8);
      lVar40 = 0;
      do {
        *(undefined4 *)((long)auStack_620 + lVar40 + 4) =
             *(undefined4 *)((long)auStack_620 + lVar40);
        lVar40 = lVar40 + 8;
      } while (lVar40 != 0x100);
      uVar26 = 0;
      do {
        uVar4 = piVar14[uVar26];
        uVar37 = (ulong)(((uint)LZCOUNT(uVar4 + 1) ^ 0x1f) + 1);
        uVar28 = auStack_620[uVar37 * 2];
        uVar46 = auStack_620[uVar37 * 2 + 1];
        uVar42 = (ulong)uVar46;
        auStack_620[uVar37 * 2 + 1] = uVar46 + 1;
        uVar37 = uVar42;
        if (uVar28 < uVar46) {
          puVar44 = (undefined8 *)(puVar22 + uVar42 * 2 + 2);
          uVar45 = uVar42;
          do {
            uVar45 = uVar45 - 1;
            uVar37 = uVar42;
            if (uVar4 <= (uint)puVar1[(uVar45 & 0xffffffff) * 2]) break;
            *puVar44 = *(undefined8 *)(puVar1 + (uVar45 & 0xffffffff) * 2);
            uVar46 = (int)uVar42 - 1;
            uVar42 = (ulong)uVar46;
            uVar37 = (ulong)uVar28;
            puVar44 = puVar44 + -1;
          } while (uVar28 < uVar46);
        }
        puVar1[uVar37 * 2] = uVar4;
        *(char *)((long)(puVar1 + uVar37 * 2) + 6) = (char)uVar26;
        uVar26 = uVar26 + 1;
      } while (uVar26 != uVar31);
      uVar26 = (ulong)(uVar16 - 1);
      do {
        uVar28 = (uint)uVar26;
        uVar16 = uVar28 - 1;
        uVar26 = (ulong)uVar16;
      } while (puVar1[(ulong)(uVar28 + 1) * 2] == 0);
      uVar46 = uVar28 + 0x100;
      uVar4 = uVar28 + 1;
      piVar14 = puVar1 + (long)(int)uVar4 * 2;
      puVar22[0x202] = piVar14[-2] + *piVar14;
      *(undefined2 *)(piVar14 + -1) = 0x100;
      *(undefined2 *)(piVar14 + 1) = 0x100;
      if (uVar16 < 0xfffffeff) {
        lVar36 = (ulong)uVar46 - 0x100;
        lVar40 = 0x810;
        do {
          *(undefined4 *)((long)puVar22 + lVar40) = 0x40000000;
          lVar40 = lVar40 + 8;
          lVar36 = lVar36 + -1;
        } while (lVar36 != 0);
        *puVar22 = 0x80000000;
        uVar37 = 0x100;
        uVar32 = 0x101;
        do {
          bVar10 = *(uint *)((long)puVar1 + (-(uVar26 >> 0x1f) & 0xfffffff800000000 | uVar26 << 3))
                   < *(uint *)((long)puVar1 + (-(uVar37 >> 0x1f) & 0xfffffff800000000 | uVar37 << 3)
                              );
          uVar41 = (uint)uVar37;
          uVar34 = uVar41;
          if (!bVar10) {
            uVar34 = uVar41 + 1;
          }
          uVar2 = (uint)uVar26;
          if (!bVar10) {
            uVar2 = uVar41;
          }
          uVar8 = (uint)uVar26 - (uint)bVar10;
          bVar10 = *(uint *)((long)puVar1 +
                            (-(ulong)(uVar8 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar8 << 3)) <
                   *(uint *)((long)puVar1 +
                            (-(ulong)(uVar34 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar34 << 3));
          uVar41 = uVar34;
          if (!bVar10) {
            uVar41 = uVar34 + 1;
          }
          uVar37 = (ulong)uVar41;
          uVar41 = uVar8;
          if (!bVar10) {
            uVar41 = uVar34;
          }
          uVar26 = (ulong)(uVar8 - bVar10);
          piVar15 = (int *)((ulong)uVar32 * 8);
          puVar1[(ulong)uVar32 * 2] = puVar1[(ulong)uVar41 * 2] + puVar1[(ulong)uVar2 * 2];
          *(ushort *)(puVar1 + (ulong)uVar41 * 2 + 1) = uVar32;
          *(ushort *)(puVar1 + (ulong)uVar2 * 2 + 1) = uVar32;
          uVar32 = uVar32 + 1;
        } while (uVar32 <= uVar46);
      }
      else {
        *puVar22 = 0x80000000;
      }
      *(undefined1 *)((long)puVar1 + (ulong)uVar46 * 8 + 7) = 0;
      if (uVar16 < 0xffffff00) {
        uVar26 = (ulong)(uVar28 + 0xff);
        pcVar25 = (char *)((long)puVar22 + uVar26 * 8 + 0xf);
        do {
          uVar26 = uVar26 - 1;
          *pcVar25 = *(char *)((long)puVar22 + (ulong)*(ushort *)(pcVar25 + -3) * 8 + 0xf) + '\x01';
          pcVar25 = pcVar25 + -8;
        } while ((uVar26 & 0xffffff00) != 0);
      }
      pbVar38 = (byte *)((long)puVar22 + 0xf);
      lVar40 = (ulong)uVar4 + 1;
      pbVar39 = pbVar38;
      do {
        *pbVar39 = pbVar38[(ulong)*(ushort *)(pbVar39 + -3) * 8] + 1;
        lVar40 = lVar40 + -1;
        pbVar39 = pbVar39 + 8;
      } while (lVar40 != 0);
      pbVar39 = (byte *)((long)puVar1 + (ulong)(uVar28 + 1) * 8 + 7);
      bVar5 = *pbVar39;
      piVar30 = (int *)(ulong)bVar5;
      uVar46 = (uint)piVar20;
      uVar16 = bVar5 - uVar46;
      piVar14 = piVar30;
      if (uVar46 <= bVar5 && uVar16 != 0) {
        iVar33 = 0;
        do {
          uVar34 = uVar28;
          iVar33 = iVar33 + (1 << (ulong)(uVar16 & 0x1f)) +
                   (-1 << (ulong)((uint)bVar5 - (int)piVar14 & 0x1f));
          *pbVar39 = (byte)piVar20;
          pbVar39 = pbVar38 + (ulong)uVar34 * 8;
          piVar14 = (int *)(ulong)*pbVar39;
          uVar28 = uVar34 - 1;
        } while (uVar46 < *pbVar39);
        uVar26 = (ulong)(uVar34 + 1);
        do {
          uVar28 = (int)uVar26 - 1;
          uVar26 = (ulong)uVar28;
        } while (uVar46 == pbVar38[uVar26 * 8]);
        iVar33 = iVar33 >> (uVar16 & 0x1f);
        uStack_5f0 = 0xf0f0f0f0f0f0f0f0;
        uStack_608 = 0xf0f0f0f0f0f0f0f0;
        auStack_620[4] = 0xf0f0f0f0;
        auStack_620[5] = 0xf0f0f0f0;
        uStack_5f8 = 0xf0f0f0f0f0f0f0f0;
        uStack_600 = 0xf0f0f0f0f0f0f0f0;
        auStack_620[2] = 0xf0f0f0f0;
        auStack_620[3] = 0xf0f0f0f0;
        auStack_620[0] = 0xf0f0f0f0;
        auStack_620[1] = 0xf0f0f0f0;
        if (-1 < (int)uVar28) {
          pbVar39 = (byte *)((long)puVar22 + (ulong)uVar28 * 8 + 0xf);
          uVar37 = uVar26;
          piVar14 = piVar20;
          do {
            bVar6 = *pbVar39;
            piVar15 = (int *)(ulong)bVar6;
            uVar16 = (uint)uVar37;
            if ((uint)bVar6 < (uint)piVar14) {
              auStack_620[uVar46 - bVar6] = uVar16;
              piVar14 = piVar15;
            }
            uVar37 = uVar37 - 1;
            pbVar39 = pbVar39 + -8;
          } while (0 < (int)uVar16);
        }
        if (0 < iVar33) {
          do {
            iVar17 = (int)LZCOUNT(iVar33);
            if (iVar17 != 0x1f) {
              uVar37 = (ulong)(0x20 - iVar17);
              puVar18 = (uint *)((long)auStack_620 + (ulong)(iVar17 * -4 + 0x80));
              do {
                uVar42 = uVar37 - 1;
                if ((*puVar18 != 0xf0f0f0f0) &&
                   ((auStack_620[uVar42 & 0xffffffff] == 0xf0f0f0f0 ||
                    ((uint)puVar1[(ulong)*puVar18 * 2] <=
                     (uint)(puVar1[(ulong)auStack_620[uVar42 & 0xffffffff] * 2] * 2))))) {
                  if (uVar37 < 0xd) goto LAB_1099b07fc;
                  goto LAB_1099b0820;
                }
                uVar37 = uVar42;
                puVar18 = puVar18 + -1;
              } while ((uVar42 & 0xfffffffe) != 0);
            }
            uVar37 = 1;
LAB_1099b07fc:
            do {
              if (auStack_620[uVar37] != 0xf0f0f0f0) break;
              uVar37 = uVar37 + 1;
            } while (uVar37 != 0xd);
LAB_1099b0820:
            uVar34 = (int)uVar37 - 1;
            uVar28 = auStack_620[uVar37 & 0xffffffff];
            piVar21 = (int *)(ulong)uVar28;
            piVar15 = (int *)(uVar37 & 0xffffffff);
            uVar16 = uVar28;
            if (auStack_620[uVar34] != 0xf0f0f0f0) {
              uVar16 = auStack_620[uVar34];
            }
            auStack_620[uVar34] = uVar16;
            pbVar38[(long)piVar21 * 8] = pbVar38[(long)piVar21 * 8] + 1;
            puVar23 = (undefined4 *)0xf0f0f0f0;
            if (uVar28 != 0) {
              uVar28 = uVar28 - 1;
              piVar21 = (int *)(ulong)uVar28;
              if (uVar46 - (int)uVar37 != (uint)pbVar38[(long)piVar21 * 8]) {
                uVar28 = 0xf0f0f0f0;
              }
              puVar23 = (undefined4 *)(ulong)uVar28;
            }
            uVar16 = -1 << (ulong)(uVar34 & 0x1f);
            puVar19 = (undefined1 *)(ulong)uVar16;
            auStack_620[(long)piVar15] = (uint)puVar23;
            bVar10 = SCARRY4(uVar16,iVar33);
            iVar33 = uVar16 + iVar33;
          } while (iVar33 != 0 && iVar33 < 0 == bVar10);
        }
        piVar14 = piVar20;
        if (iVar33 < 0) {
          uVar37 = (ulong)auStack_620[1];
          do {
            uVar16 = (uint)uVar37;
            iVar17 = uVar16 + 0xf0f0f10;
            iVar43 = iVar33;
            while( true ) {
              uVar16 = uVar16 + 1;
              uVar37 = uVar26;
              if (iVar17 == 0) break;
              pbVar38[(ulong)uVar16 * 8] = pbVar38[(ulong)uVar16 * 8] - 1;
              iVar17 = iVar17 + 1;
              bVar10 = iVar43 == -1;
              iVar43 = iVar43 + 1;
              if (bVar10) goto LAB_1099b088c;
            }
            do {
              uVar26 = uVar37;
              uVar37 = (ulong)((int)uVar26 - 1);
            } while (uVar46 == pbVar38[uVar26 * 8]);
            uVar37 = (ulong)((int)uVar26 + 1);
            pbVar38[uVar37 * 8] = pbVar38[uVar37 * 8] - 1;
            iVar33 = iVar43 + 1;
          } while (iVar43 < -1);
        }
      }
LAB_1099b088c:
      auStack_620[0] = 0;
      auStack_620[1] = 0;
      auStack_620[2] = 0;
      auStack_620[3] = 0;
      uStack_608 = uStack_608 & 0xffffffffffff0000;
      auStack_620[4] = 0;
      auStack_620[5] = 0;
      asStack_640[0] = 0;
      asStack_640[1] = 0;
      asStack_640[2] = 0;
      asStack_640[3] = 0;
      asStack_640[4] = 0;
      asStack_640[5] = 0;
      asStack_640[6] = 0;
      asStack_640[7] = 0;
      asStack_640[0xc] = 0;
      asStack_640[8] = 0;
      asStack_640[9] = 0;
      asStack_640[10] = 0;
      asStack_640[0xb] = 0;
      uVar16 = (uint)piVar14;
      if (uVar16 < 0xd) {
        lVar40 = (ulong)uVar4 + 1;
        do {
          *(short *)((long)auStack_620 + (ulong)*pbVar38 * 2) =
               *(short *)((long)auStack_620 + (ulong)*pbVar38 * 2) + 1;
          lVar40 = lVar40 + -1;
          pbVar38 = pbVar38 + 8;
        } while (lVar40 != 0);
        if (uVar16 != 0) {
          uVar28 = 0;
          piVar3 = (int *)((ulong)piVar20 & 0xffffffff);
          if ((int *)(ulong)(uint)bVar5 <= (int *)((ulong)piVar20 & 0xffffffff)) {
            piVar3 = piVar30;
          }
          lVar40 = (long)piVar3 << 1;
          do {
            *(short *)((long)asStack_640 + lVar40) = (short)uVar28;
            uVar28 = *(ushort *)((long)auStack_620 + lVar40) + uVar28 >> 1 & 0x7fff;
            lVar40 = lVar40 + -2;
          } while ((int)lVar40 != 0);
        }
        puVar27 = (undefined1 *)((long)puVar22 + 0xf);
        uVar26 = uVar31;
        do {
          *(undefined1 *)((long)puVar12 + (ulong)(byte)puVar27[-1] * 4 + 2) = *puVar27;
          puVar27 = puVar27 + 8;
          uVar26 = uVar26 - 1;
        } while (uVar26 != 0);
        pbVar38 = (byte *)((long)puVar12 + 2);
        do {
          sVar7 = asStack_640[*pbVar38];
          asStack_640[*pbVar38] = sVar7 + 1;
          *(short *)(pbVar38 + -2) = sVar7;
          pbVar38 = pbVar38 + 4;
          uVar31 = uVar31 - 1;
        } while (uVar31 != 0);
      }
      puVar13 = (ulong *)((ulong)piVar14 & 0xffffffff);
      if (0xc < uVar16) {
        puVar13 = (ulong *)0xffffffffffffffff;
      }
    }
    else {
      puVar13 = (ulong *)0xffffffffffffffd2;
    }
  }
  else {
    puVar13 = (ulong *)0xffffffffffffffff;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_518) {
    return puVar13;
  }
  ___stack_chk_fail();
  if (piVar15 < (int *)0x8) {
    return (ulong *)0x0;
  }
  if (piVar15 == (int *)0x8) {
    return (ulong *)0x0;
  }
  uVar26 = 0;
  puVar24 = (ulong *)(((long)puVar13 + (long)piVar15) - 8);
  uVar37 = (ulong)piVar21 & 0xfffffffffffffffc;
  uVar31 = (ulong)piVar21 & 3;
  if (uVar31 < 2) {
    uVar42 = 0;
    if (uVar31 != 0) goto LAB_1099b0a94;
    uVar42 = 0;
    uVar31 = 0;
    puVar47 = puVar13;
    if (uVar37 == 0) {
      uVar42 = 0;
      uVar31 = 0;
      goto LAB_1099b0b80;
    }
  }
  else {
    uVar42 = 0;
    if (uVar31 != 2) {
      uVar42 = (ulong)*(ushort *)(puVar23 + (byte)puVar19[uVar37 + 2]);
      uVar26 = (ulong)(byte)*(ushort *)((long)(puVar23 + (byte)puVar19[uVar37 + 2]) + 2);
    }
    uVar42 = (ulong)*(ushort *)(puVar23 + (byte)puVar19[uVar37 + 1]) << (uVar26 & 0x3f) | uVar42;
    uVar26 = uVar26 + (byte)*(ushort *)((long)(puVar23 + (byte)puVar19[uVar37 + 1]) + 2);
LAB_1099b0a94:
    uVar42 = (ulong)*(ushort *)(puVar23 + (byte)puVar19[uVar37]) << (uVar26 & 0x3f) | uVar42;
    uVar26 = uVar26 + (byte)*(ushort *)((long)(puVar23 + (byte)puVar19[uVar37]) + 2);
    *puVar13 = uVar42;
    puVar12 = (ulong *)((long)puVar13 + (uVar26 >> 3));
    puVar47 = puVar24;
    if (puVar12 <= puVar24) {
      puVar47 = puVar12;
    }
    uVar31 = uVar26 & 7;
    uVar42 = uVar42 >> (uVar26 & 0x38);
    if (uVar37 == 0) goto LAB_1099b0b80;
  }
  lVar40 = -((ulong)piVar21 & 0xfffffffffffffffc);
  pbVar38 = puVar19 + (uVar37 - 2);
  do {
    uVar26 = uVar31 + (byte)*(ushort *)((long)(puVar23 + pbVar38[1]) + 2);
    uVar37 = uVar26 + (byte)*(ushort *)((long)(puVar23 + *pbVar38) + 2);
    uVar45 = uVar37 + (byte)*(ushort *)((long)(puVar23 + pbVar38[-1]) + 2);
    uVar42 = (ulong)*(ushort *)(puVar23 + pbVar38[1]) << uVar31 | uVar42 |
             (ulong)*(ushort *)(puVar23 + *pbVar38) << (uVar26 & 0x3f) |
             (ulong)*(ushort *)(puVar23 + pbVar38[-1]) << (uVar37 & 0x3f) |
             (ulong)*(ushort *)(puVar23 + pbVar38[-2]) << (uVar45 & 0x3f);
    uVar45 = uVar45 + (byte)*(ushort *)((long)(puVar23 + pbVar38[-2]) + 2);
    *puVar47 = uVar42;
    puVar12 = (ulong *)((long)puVar47 + (uVar45 >> 3));
    puVar47 = puVar24;
    if (puVar12 <= puVar24) {
      puVar47 = puVar12;
    }
    uVar31 = uVar45 & 7;
    uVar42 = uVar42 >> (uVar45 & 0x38);
    pbVar38 = pbVar38 + -4;
    lVar40 = lVar40 + 4;
  } while (lVar40 != 0);
LAB_1099b0b80:
  *puVar47 = 1L << uVar31 | uVar42;
  puVar47 = (ulong *)((long)puVar47 + (uVar31 + 1 >> 3));
  puVar12 = puVar24;
  if (puVar47 <= puVar24) {
    puVar12 = puVar47;
  }
  if (puVar24 <= puVar12) {
    return (ulong *)0x0;
  }
  puVar12 = (ulong *)((long)puVar12 - (long)puVar13);
  if ((uVar31 + 1 & 7) != 0) {
    puVar12 = (ulong *)((long)puVar12 + 1);
  }
  return puVar12;
}



/* Entry: 1099b01ec; end: 1099b03bf;  */

ulong * FUN_1099b01ec(long param_1,int *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  short sVar7;
  uint uVar8;
  bool bVar9;
  ulong *puVar10;
  int *piVar11;
  int *piVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  undefined1 *puVar16;
  int *piVar17;
  int *piVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  ulong *puVar21;
  ulong *puVar22;
  ulong uVar23;
  undefined1 *puVar24;
  ulong *puVar25;
  uint uVar26;
  short *psVar27;
  char *pcVar28;
  int *piVar29;
  ulong uVar30;
  ushort uVar31;
  int iVar32;
  uint uVar33;
  ushort *puVar34;
  long lVar35;
  ulong uVar36;
  byte *pbVar37;
  byte *pbVar38;
  long lVar39;
  uint uVar40;
  ulong uVar41;
  int iVar42;
  undefined8 *puVar43;
  ulong uVar44;
  uint uVar45;
  short asStack_340 [16];
  uint auStack_320 [6];
  ulong uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_218;
  undefined8 uStack_1c0;
  short asStack_1b8 [16];
  ushort auStack_198 [16];
  undefined1 auStack_178 [4];
  int aiStack_174 [15];
  ulong auStack_138 [32];
  long lStack_38;
  
  piVar17 = (int *)&uStack_1c0;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_1c0 = 0;
  puVar10 = auStack_138;
  puVar16 = auStack_178;
  puVar19 = (undefined4 *)((long)&uStack_1c0 + 4);
  piVar11 = (int *)0x100;
  func_0x000107c2ae28();
  if (puVar10 < (ulong *)0xffffffffffffff89) {
    uVar23 = (ulong)uStack_1c0._4_4_;
    if (uStack_1c0._4_4_ < 0xd) {
      uVar30 = uStack_1c0 & 0xffffffff;
      if (*param_2 + 1U < (uint)uStack_1c0) {
        puVar10 = (ulong *)0xffffffffffffffd0;
      }
      else {
        if (uStack_1c0._4_4_ != 0) {
          uVar36 = 0;
          iVar32 = 0;
          do {
            iVar14 = aiStack_174[uVar36];
            aiStack_174[uVar36] = iVar32;
            iVar32 = (iVar14 << (ulong)((uint)uVar36 & 0x1f)) + iVar32;
            uVar36 = uVar36 + 1;
          } while (uVar23 != uVar36);
        }
        if ((uint)uStack_1c0 == 0) {
          auStack_198[0] = 0;
          auStack_198[1] = 0;
          auStack_198[2] = 0;
          auStack_198[3] = 0;
          auStack_198[4] = 0;
          auStack_198[5] = 0;
          auStack_198[6] = 0;
          auStack_198[7] = 0;
          auStack_198[0xc] = 0;
          auStack_198[0xd] = 0;
          auStack_198[8] = 0;
          auStack_198[9] = 0;
          auStack_198[10] = 0;
          auStack_198[0xb] = 0;
          asStack_1b8[0] = 0;
          asStack_1b8[1] = 0;
          asStack_1b8[2] = 0;
          asStack_1b8[3] = 0;
          asStack_1b8[4] = 0;
          asStack_1b8[5] = 0;
          asStack_1b8[6] = 0;
          asStack_1b8[7] = 0;
          asStack_1b8[0xc] = 0;
          asStack_1b8[0xd] = 0;
          asStack_1b8[8] = 0;
          asStack_1b8[9] = 0;
          asStack_1b8[10] = 0;
          asStack_1b8[0xb] = 0;
        }
        else {
          pcVar28 = (char *)(param_1 + 2);
          puVar21 = auStack_138;
          uVar36 = uVar30;
          do {
            *pcVar28 = ((char)(uStack_1c0 >> 0x20) + '\x01') - (char)*puVar21;
            uVar36 = uVar36 - 1;
            pcVar28 = pcVar28 + 4;
            puVar21 = (ulong *)((long)puVar21 + 1);
          } while (uVar36 != 0);
          auStack_198[0] = 0;
          auStack_198[1] = 0;
          auStack_198[2] = 0;
          auStack_198[3] = 0;
          auStack_198[4] = 0;
          auStack_198[5] = 0;
          auStack_198[6] = 0;
          auStack_198[7] = 0;
          auStack_198[0xc] = 0;
          auStack_198[0xd] = 0;
          auStack_198[8] = 0;
          auStack_198[9] = 0;
          auStack_198[10] = 0;
          auStack_198[0xb] = 0;
          asStack_1b8[0] = 0;
          asStack_1b8[1] = 0;
          asStack_1b8[2] = 0;
          asStack_1b8[3] = 0;
          asStack_1b8[4] = 0;
          asStack_1b8[5] = 0;
          asStack_1b8[6] = 0;
          asStack_1b8[7] = 0;
          asStack_1b8[0xc] = 0;
          asStack_1b8[0xd] = 0;
          asStack_1b8[8] = 0;
          asStack_1b8[9] = 0;
          asStack_1b8[10] = 0;
          asStack_1b8[0xb] = 0;
          pbVar37 = (byte *)(param_1 + 2);
          uVar36 = uVar30;
          do {
            auStack_198[*pbVar37] = auStack_198[*pbVar37] + 1;
            uVar36 = uVar36 - 1;
            pbVar37 = pbVar37 + 4;
          } while (uVar36 != 0);
        }
        asStack_1b8[0xc] = 0;
        asStack_1b8[0xd] = 0;
        asStack_1b8[8] = 0;
        asStack_1b8[9] = 0;
        asStack_1b8[10] = 0;
        asStack_1b8[0xb] = 0;
        asStack_1b8[4] = 0;
        asStack_1b8[5] = 0;
        asStack_1b8[6] = 0;
        asStack_1b8[7] = 0;
        asStack_1b8[0] = 0;
        asStack_1b8[1] = 0;
        asStack_1b8[2] = 0;
        asStack_1b8[3] = 0;
        asStack_1b8[uVar23 + 1] = 0;
        if (uStack_1c0._4_4_ != 0) {
          uVar13 = 0;
          psVar27 = asStack_1b8 + uVar23;
          puVar34 = auStack_198 + uVar23;
          do {
            *psVar27 = (short)uVar13;
            uVar13 = *puVar34 + uVar13 >> 1 & 0x7fff;
            uVar26 = (int)uVar23 - 1;
            uVar23 = (ulong)uVar26;
            psVar27 = psVar27 + -1;
            puVar34 = puVar34 + -1;
          } while (uVar26 != 0);
        }
        if ((uint)uStack_1c0 != 0) {
          pbVar37 = (byte *)(param_1 + 2);
          do {
            sVar7 = asStack_1b8[*pbVar37];
            asStack_1b8[*pbVar37] = sVar7 + 1;
            *(short *)(pbVar37 + -2) = sVar7;
            pbVar37 = pbVar37 + 4;
            uVar30 = uVar30 - 1;
          } while (uVar30 != 0);
        }
        *param_2 = (uint)uStack_1c0 - 1;
      }
    }
    else {
      puVar10 = (ulong *)0xffffffffffffffd4;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar10;
  }
  ___stack_chk_fail();
  lStack_218 = *(long *)PTR____stack_chk_guard_11034bdc0;
  piVar12 = piVar11;
  piVar18 = piVar17;
  puVar20 = puVar19;
  if (((ulong)puVar19 & 3) == 0) {
    uVar13 = (uint)puVar16;
    if (uVar13 < 0x100) {
      puVar1 = puVar19 + 2;
      piVar12 = (int *)0x1000;
      _bzero(puVar19);
      uStack_238 = 0;
      uStack_240 = 0;
      uStack_228 = 0;
      uStack_230 = 0;
      uStack_258 = 0;
      uStack_260 = 0;
      uStack_248 = 0;
      uStack_250 = 0;
      uStack_278 = 0;
      uStack_280 = 0;
      uStack_268 = 0;
      uStack_270 = 0;
      uStack_298 = 0;
      uStack_2a0 = 0;
      uStack_288 = 0;
      uStack_290 = 0;
      uStack_2b8 = 0;
      uStack_2c0 = 0;
      uStack_2a8 = 0;
      uStack_2b0 = 0;
      uStack_2d8 = 0;
      uStack_2e0 = 0;
      uStack_2c8 = 0;
      uStack_2d0 = 0;
      uStack_2f8 = 0;
      uStack_300 = 0;
      uStack_2e8 = 0;
      uStack_2f0 = 0;
      uVar30 = (ulong)(uVar13 + 1);
      auStack_320[2] = 0;
      auStack_320[3] = 0;
      auStack_320[0] = 0;
      auStack_320[1] = 0;
      uStack_308 = 0;
      auStack_320[4] = 0;
      auStack_320[5] = 0;
      piVar29 = piVar11;
      uVar23 = uVar30;
      do {
        uVar36 = (ulong)((uint)LZCOUNT(*piVar29 + 1) ^ 0x1f);
        auStack_320[uVar36 * 2] = auStack_320[uVar36 * 2] + 1;
        uVar23 = uVar23 - 1;
        piVar29 = piVar29 + 1;
      } while (uVar23 != 0);
      lVar39 = 0xe8;
      iVar32 = (int)uStack_230;
      do {
        iVar32 = *(int *)((long)auStack_320 + lVar39) + iVar32;
        *(int *)((long)auStack_320 + lVar39) = iVar32;
        lVar39 = lVar39 + -8;
      } while (lVar39 != -8);
      lVar39 = 0;
      do {
        *(undefined4 *)((long)auStack_320 + lVar39 + 4) =
             *(undefined4 *)((long)auStack_320 + lVar39);
        lVar39 = lVar39 + 8;
      } while (lVar39 != 0x100);
      uVar23 = 0;
      do {
        uVar4 = piVar11[uVar23];
        uVar36 = (ulong)(((uint)LZCOUNT(uVar4 + 1) ^ 0x1f) + 1);
        uVar26 = auStack_320[uVar36 * 2];
        uVar45 = auStack_320[uVar36 * 2 + 1];
        uVar41 = (ulong)uVar45;
        auStack_320[uVar36 * 2 + 1] = uVar45 + 1;
        uVar36 = uVar41;
        if (uVar26 < uVar45) {
          puVar43 = (undefined8 *)(puVar19 + uVar41 * 2 + 2);
          uVar44 = uVar41;
          do {
            uVar44 = uVar44 - 1;
            uVar36 = uVar41;
            if (uVar4 <= (uint)puVar1[(uVar44 & 0xffffffff) * 2]) break;
            *puVar43 = *(undefined8 *)(puVar1 + (uVar44 & 0xffffffff) * 2);
            uVar45 = (int)uVar41 - 1;
            uVar41 = (ulong)uVar45;
            uVar36 = (ulong)uVar26;
            puVar43 = puVar43 + -1;
          } while (uVar26 < uVar45);
        }
        puVar1[uVar36 * 2] = uVar4;
        *(char *)((long)(puVar1 + uVar36 * 2) + 6) = (char)uVar23;
        uVar23 = uVar23 + 1;
      } while (uVar23 != uVar30);
      uVar23 = (ulong)(uVar13 - 1);
      do {
        uVar26 = (uint)uVar23;
        uVar13 = uVar26 - 1;
        uVar23 = (ulong)uVar13;
      } while (puVar1[(ulong)(uVar26 + 1) * 2] == 0);
      uVar45 = uVar26 + 0x100;
      uVar4 = uVar26 + 1;
      piVar11 = puVar1 + (long)(int)uVar4 * 2;
      puVar19[0x202] = piVar11[-2] + *piVar11;
      *(undefined2 *)(piVar11 + -1) = 0x100;
      *(undefined2 *)(piVar11 + 1) = 0x100;
      if (uVar13 < 0xfffffeff) {
        lVar35 = (ulong)uVar45 - 0x100;
        lVar39 = 0x810;
        do {
          *(undefined4 *)((long)puVar19 + lVar39) = 0x40000000;
          lVar39 = lVar39 + 8;
          lVar35 = lVar35 + -1;
        } while (lVar35 != 0);
        *puVar19 = 0x80000000;
        uVar36 = 0x100;
        uVar31 = 0x101;
        do {
          bVar9 = *(uint *)((long)puVar1 + (-(uVar23 >> 0x1f) & 0xfffffff800000000 | uVar23 << 3)) <
                  *(uint *)((long)puVar1 + (-(uVar36 >> 0x1f) & 0xfffffff800000000 | uVar36 << 3));
          uVar40 = (uint)uVar36;
          uVar33 = uVar40;
          if (!bVar9) {
            uVar33 = uVar40 + 1;
          }
          uVar2 = (uint)uVar23;
          if (!bVar9) {
            uVar2 = uVar40;
          }
          uVar8 = (uint)uVar23 - (uint)bVar9;
          bVar9 = *(uint *)((long)puVar1 +
                           (-(ulong)(uVar8 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar8 << 3)) <
                  *(uint *)((long)puVar1 +
                           (-(ulong)(uVar33 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar33 << 3));
          uVar40 = uVar33;
          if (!bVar9) {
            uVar40 = uVar33 + 1;
          }
          uVar36 = (ulong)uVar40;
          uVar40 = uVar8;
          if (!bVar9) {
            uVar40 = uVar33;
          }
          uVar23 = (ulong)(uVar8 - bVar9);
          piVar12 = (int *)((ulong)uVar31 * 8);
          puVar1[(ulong)uVar31 * 2] = puVar1[(ulong)uVar40 * 2] + puVar1[(ulong)uVar2 * 2];
          *(ushort *)(puVar1 + (ulong)uVar40 * 2 + 1) = uVar31;
          *(ushort *)(puVar1 + (ulong)uVar2 * 2 + 1) = uVar31;
          uVar31 = uVar31 + 1;
        } while (uVar31 <= uVar45);
      }
      else {
        *puVar19 = 0x80000000;
      }
      *(undefined1 *)((long)puVar1 + (ulong)uVar45 * 8 + 7) = 0;
      if (uVar13 < 0xffffff00) {
        uVar23 = (ulong)(uVar26 + 0xff);
        pcVar28 = (char *)((long)puVar19 + uVar23 * 8 + 0xf);
        do {
          uVar23 = uVar23 - 1;
          *pcVar28 = *(char *)((long)puVar19 + (ulong)*(ushort *)(pcVar28 + -3) * 8 + 0xf) + '\x01';
          pcVar28 = pcVar28 + -8;
        } while ((uVar23 & 0xffffff00) != 0);
      }
      pbVar37 = (byte *)((long)puVar19 + 0xf);
      lVar39 = (ulong)uVar4 + 1;
      pbVar38 = pbVar37;
      do {
        *pbVar38 = pbVar37[(ulong)*(ushort *)(pbVar38 + -3) * 8] + 1;
        lVar39 = lVar39 + -1;
        pbVar38 = pbVar38 + 8;
      } while (lVar39 != 0);
      pbVar38 = (byte *)((long)puVar1 + (ulong)(uVar26 + 1) * 8 + 7);
      bVar5 = *pbVar38;
      piVar29 = (int *)(ulong)bVar5;
      uVar45 = (uint)piVar17;
      uVar13 = bVar5 - uVar45;
      piVar11 = piVar29;
      if (uVar45 <= bVar5 && uVar13 != 0) {
        iVar32 = 0;
        do {
          uVar33 = uVar26;
          iVar32 = iVar32 + (1 << (ulong)(uVar13 & 0x1f)) +
                   (-1 << (ulong)((uint)bVar5 - (int)piVar11 & 0x1f));
          *pbVar38 = (byte)piVar17;
          pbVar38 = pbVar37 + (ulong)uVar33 * 8;
          piVar11 = (int *)(ulong)*pbVar38;
          uVar26 = uVar33 - 1;
        } while (uVar45 < *pbVar38);
        uVar23 = (ulong)(uVar33 + 1);
        do {
          uVar26 = (int)uVar23 - 1;
          uVar23 = (ulong)uVar26;
        } while (uVar45 == pbVar37[uVar23 * 8]);
        iVar32 = iVar32 >> (uVar13 & 0x1f);
        uStack_2f0 = 0xf0f0f0f0f0f0f0f0;
        uStack_308 = 0xf0f0f0f0f0f0f0f0;
        auStack_320[4] = 0xf0f0f0f0;
        auStack_320[5] = 0xf0f0f0f0;
        uStack_2f8 = 0xf0f0f0f0f0f0f0f0;
        uStack_300 = 0xf0f0f0f0f0f0f0f0;
        auStack_320[2] = 0xf0f0f0f0;
        auStack_320[3] = 0xf0f0f0f0;
        auStack_320[0] = 0xf0f0f0f0;
        auStack_320[1] = 0xf0f0f0f0;
        if (-1 < (int)uVar26) {
          pbVar38 = (byte *)((long)puVar19 + (ulong)uVar26 * 8 + 0xf);
          uVar36 = uVar23;
          piVar11 = piVar17;
          do {
            bVar6 = *pbVar38;
            piVar12 = (int *)(ulong)bVar6;
            uVar13 = (uint)uVar36;
            if ((uint)bVar6 < (uint)piVar11) {
              auStack_320[uVar45 - bVar6] = uVar13;
              piVar11 = piVar12;
            }
            uVar36 = uVar36 - 1;
            pbVar38 = pbVar38 + -8;
          } while (0 < (int)uVar13);
        }
        if (0 < iVar32) {
          do {
            iVar14 = (int)LZCOUNT(iVar32);
            if (iVar14 != 0x1f) {
              uVar36 = (ulong)(0x20 - iVar14);
              puVar15 = (uint *)((long)auStack_320 + (ulong)(iVar14 * -4 + 0x80));
              do {
                uVar41 = uVar36 - 1;
                if ((*puVar15 != 0xf0f0f0f0) &&
                   ((auStack_320[uVar41 & 0xffffffff] == 0xf0f0f0f0 ||
                    ((uint)puVar1[(ulong)*puVar15 * 2] <=
                     (uint)(puVar1[(ulong)auStack_320[uVar41 & 0xffffffff] * 2] * 2))))) {
                  if (uVar36 < 0xd) goto LAB_1099b07fc;
                  goto LAB_1099b0820;
                }
                uVar36 = uVar41;
                puVar15 = puVar15 + -1;
              } while ((uVar41 & 0xfffffffe) != 0);
            }
            uVar36 = 1;
LAB_1099b07fc:
            do {
              if (auStack_320[uVar36] != 0xf0f0f0f0) break;
              uVar36 = uVar36 + 1;
            } while (uVar36 != 0xd);
LAB_1099b0820:
            uVar33 = (int)uVar36 - 1;
            uVar26 = auStack_320[uVar36 & 0xffffffff];
            piVar18 = (int *)(ulong)uVar26;
            piVar12 = (int *)(uVar36 & 0xffffffff);
            uVar13 = uVar26;
            if (auStack_320[uVar33] != 0xf0f0f0f0) {
              uVar13 = auStack_320[uVar33];
            }
            auStack_320[uVar33] = uVar13;
            pbVar37[(long)piVar18 * 8] = pbVar37[(long)piVar18 * 8] + 1;
            puVar20 = (undefined4 *)0xf0f0f0f0;
            if (uVar26 != 0) {
              uVar26 = uVar26 - 1;
              piVar18 = (int *)(ulong)uVar26;
              if (uVar45 - (int)uVar36 != (uint)pbVar37[(long)piVar18 * 8]) {
                uVar26 = 0xf0f0f0f0;
              }
              puVar20 = (undefined4 *)(ulong)uVar26;
            }
            uVar13 = -1 << (ulong)(uVar33 & 0x1f);
            puVar16 = (undefined1 *)(ulong)uVar13;
            auStack_320[(long)piVar12] = (uint)puVar20;
            bVar9 = SCARRY4(uVar13,iVar32);
            iVar32 = uVar13 + iVar32;
          } while (iVar32 != 0 && iVar32 < 0 == bVar9);
        }
        piVar11 = piVar17;
        if (iVar32 < 0) {
          uVar36 = (ulong)auStack_320[1];
          do {
            uVar13 = (uint)uVar36;
            iVar14 = uVar13 + 0xf0f0f10;
            iVar42 = iVar32;
            while( true ) {
              uVar13 = uVar13 + 1;
              uVar36 = uVar23;
              if (iVar14 == 0) break;
              pbVar37[(ulong)uVar13 * 8] = pbVar37[(ulong)uVar13 * 8] - 1;
              iVar14 = iVar14 + 1;
              bVar9 = iVar42 == -1;
              iVar42 = iVar42 + 1;
              if (bVar9) goto LAB_1099b088c;
            }
            do {
              uVar23 = uVar36;
              uVar36 = (ulong)((int)uVar23 - 1);
            } while (uVar45 == pbVar37[uVar23 * 8]);
            uVar36 = (ulong)((int)uVar23 + 1);
            pbVar37[uVar36 * 8] = pbVar37[uVar36 * 8] - 1;
            iVar32 = iVar42 + 1;
          } while (iVar42 < -1);
        }
      }
LAB_1099b088c:
      auStack_320[0] = 0;
      auStack_320[1] = 0;
      auStack_320[2] = 0;
      auStack_320[3] = 0;
      uStack_308 = uStack_308 & 0xffffffffffff0000;
      auStack_320[4] = 0;
      auStack_320[5] = 0;
      asStack_340[0] = 0;
      asStack_340[1] = 0;
      asStack_340[2] = 0;
      asStack_340[3] = 0;
      asStack_340[4] = 0;
      asStack_340[5] = 0;
      asStack_340[6] = 0;
      asStack_340[7] = 0;
      asStack_340[0xc] = 0;
      asStack_340[8] = 0;
      asStack_340[9] = 0;
      asStack_340[10] = 0;
      asStack_340[0xb] = 0;
      uVar13 = (uint)piVar11;
      if (uVar13 < 0xd) {
        lVar39 = (ulong)uVar4 + 1;
        do {
          *(short *)((long)auStack_320 + (ulong)*pbVar37 * 2) =
               *(short *)((long)auStack_320 + (ulong)*pbVar37 * 2) + 1;
          lVar39 = lVar39 + -1;
          pbVar37 = pbVar37 + 8;
        } while (lVar39 != 0);
        if (uVar13 != 0) {
          uVar26 = 0;
          piVar3 = (int *)((ulong)piVar17 & 0xffffffff);
          if ((int *)(ulong)(uint)bVar5 <= (int *)((ulong)piVar17 & 0xffffffff)) {
            piVar3 = piVar29;
          }
          lVar39 = (long)piVar3 << 1;
          do {
            *(short *)((long)asStack_340 + lVar39) = (short)uVar26;
            uVar26 = *(ushort *)((long)auStack_320 + lVar39) + uVar26 >> 1 & 0x7fff;
            lVar39 = lVar39 + -2;
          } while ((int)lVar39 != 0);
        }
        puVar24 = (undefined1 *)((long)puVar19 + 0xf);
        uVar23 = uVar30;
        do {
          *(undefined1 *)((long)puVar10 + (ulong)(byte)puVar24[-1] * 4 + 2) = *puVar24;
          puVar24 = puVar24 + 8;
          uVar23 = uVar23 - 1;
        } while (uVar23 != 0);
        pbVar37 = (byte *)((long)puVar10 + 2);
        do {
          sVar7 = asStack_340[*pbVar37];
          asStack_340[*pbVar37] = sVar7 + 1;
          *(short *)(pbVar37 + -2) = sVar7;
          pbVar37 = pbVar37 + 4;
          uVar30 = uVar30 - 1;
        } while (uVar30 != 0);
      }
      puVar10 = (ulong *)((ulong)piVar11 & 0xffffffff);
      if (0xc < uVar13) {
        puVar10 = (ulong *)0xffffffffffffffff;
      }
    }
    else {
      puVar10 = (ulong *)0xffffffffffffffd2;
    }
  }
  else {
    puVar10 = (ulong *)0xffffffffffffffff;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_218) {
    return puVar10;
  }
  ___stack_chk_fail();
  if (piVar12 < (int *)0x8) {
    return (ulong *)0x0;
  }
  if (piVar12 == (int *)0x8) {
    return (ulong *)0x0;
  }
  uVar23 = 0;
  puVar21 = (ulong *)(((long)puVar10 + (long)piVar12) - 8);
  uVar36 = (ulong)piVar18 & 0xfffffffffffffffc;
  uVar30 = (ulong)piVar18 & 3;
  if (uVar30 < 2) {
    uVar41 = 0;
    if (uVar30 != 0) goto LAB_1099b0a94;
    uVar41 = 0;
    uVar30 = 0;
    puVar25 = puVar10;
    if (uVar36 == 0) {
      uVar41 = 0;
      uVar30 = 0;
      goto LAB_1099b0b80;
    }
  }
  else {
    uVar41 = 0;
    if (uVar30 != 2) {
      uVar41 = (ulong)*(ushort *)(puVar20 + (byte)puVar16[uVar36 + 2]);
      uVar23 = (ulong)(byte)*(ushort *)((long)(puVar20 + (byte)puVar16[uVar36 + 2]) + 2);
    }
    uVar41 = (ulong)*(ushort *)(puVar20 + (byte)puVar16[uVar36 + 1]) << (uVar23 & 0x3f) | uVar41;
    uVar23 = uVar23 + (byte)*(ushort *)((long)(puVar20 + (byte)puVar16[uVar36 + 1]) + 2);
LAB_1099b0a94:
    uVar41 = (ulong)*(ushort *)(puVar20 + (byte)puVar16[uVar36]) << (uVar23 & 0x3f) | uVar41;
    uVar23 = uVar23 + (byte)*(ushort *)((long)(puVar20 + (byte)puVar16[uVar36]) + 2);
    *puVar10 = uVar41;
    puVar22 = (ulong *)((long)puVar10 + (uVar23 >> 3));
    puVar25 = puVar21;
    if (puVar22 <= puVar21) {
      puVar25 = puVar22;
    }
    uVar30 = uVar23 & 7;
    uVar41 = uVar41 >> (uVar23 & 0x38);
    if (uVar36 == 0) goto LAB_1099b0b80;
  }
  lVar39 = -((ulong)piVar18 & 0xfffffffffffffffc);
  pbVar37 = puVar16 + (uVar36 - 2);
  do {
    uVar23 = uVar30 + (byte)*(ushort *)((long)(puVar20 + pbVar37[1]) + 2);
    uVar36 = uVar23 + (byte)*(ushort *)((long)(puVar20 + *pbVar37) + 2);
    uVar44 = uVar36 + (byte)*(ushort *)((long)(puVar20 + pbVar37[-1]) + 2);
    uVar41 = (ulong)*(ushort *)(puVar20 + pbVar37[1]) << uVar30 | uVar41 |
             (ulong)*(ushort *)(puVar20 + *pbVar37) << (uVar23 & 0x3f) |
             (ulong)*(ushort *)(puVar20 + pbVar37[-1]) << (uVar36 & 0x3f) |
             (ulong)*(ushort *)(puVar20 + pbVar37[-2]) << (uVar44 & 0x3f);
    uVar44 = uVar44 + (byte)*(ushort *)((long)(puVar20 + pbVar37[-2]) + 2);
    *puVar25 = uVar41;
    puVar22 = (ulong *)((long)puVar25 + (uVar44 >> 3));
    puVar25 = puVar21;
    if (puVar22 <= puVar21) {
      puVar25 = puVar22;
    }
    uVar30 = uVar44 & 7;
    uVar41 = uVar41 >> (uVar44 & 0x38);
    pbVar37 = pbVar37 + -4;
    lVar39 = lVar39 + 4;
  } while (lVar39 != 0);
LAB_1099b0b80:
  *puVar25 = 1L << uVar30 | uVar41;
  puVar25 = (ulong *)((long)puVar25 + (uVar30 + 1 >> 3));
  puVar22 = puVar21;
  if (puVar25 <= puVar21) {
    puVar22 = puVar25;
  }
  if (puVar21 <= puVar22) {
    return (ulong *)0x0;
  }
  puVar22 = (ulong *)((long)puVar22 - (long)puVar10);
  if ((uVar30 + 1 & 7) != 0) {
    puVar22 = (ulong *)((long)puVar22 + 1);
  }
  return puVar22;
}



/* Entry: 1099b03c0; end: 1099b0a0f;  */

ulong * FUN_1099b03c0(long param_1,int *param_2,ulong param_3,int *param_4,undefined4 *param_5)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  short sVar7;
  uint uVar8;
  bool bVar9;
  ulong *puVar10;
  int *piVar11;
  int *piVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  int *piVar16;
  undefined4 *puVar17;
  ulong *puVar18;
  ulong *puVar19;
  int iVar20;
  undefined1 *puVar21;
  ulong *puVar22;
  uint uVar23;
  int *piVar24;
  ulong uVar25;
  ushort uVar26;
  uint uVar27;
  long lVar28;
  ulong uVar29;
  byte *pbVar30;
  byte *pbVar31;
  ulong uVar32;
  long lVar33;
  uint uVar34;
  char *pcVar35;
  ulong uVar36;
  int iVar37;
  undefined8 *puVar38;
  ulong uVar39;
  uint uVar40;
  short asStack_180 [16];
  uint auStack_160 [6];
  ulong uStack_148;
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
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  piVar12 = param_2;
  piVar16 = param_4;
  puVar17 = param_5;
  if (((ulong)param_5 & 3) == 0) {
    uVar13 = (uint)param_3;
    if (uVar13 < 0x100) {
      puVar1 = param_5 + 2;
      piVar12 = (int *)0x1000;
      _bzero(param_5);
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uVar25 = (ulong)(uVar13 + 1);
      auStack_160[2] = 0;
      auStack_160[3] = 0;
      auStack_160[0] = 0;
      auStack_160[1] = 0;
      uStack_148 = 0;
      auStack_160[4] = 0;
      auStack_160[5] = 0;
      piVar11 = param_2;
      uVar32 = uVar25;
      do {
        uVar29 = (ulong)((uint)LZCOUNT(*piVar11 + 1) ^ 0x1f);
        auStack_160[uVar29 * 2] = auStack_160[uVar29 * 2] + 1;
        uVar32 = uVar32 - 1;
        piVar11 = piVar11 + 1;
      } while (uVar32 != 0);
      lVar33 = 0xe8;
      iVar20 = (int)uStack_70;
      do {
        iVar20 = *(int *)((long)auStack_160 + lVar33) + iVar20;
        *(int *)((long)auStack_160 + lVar33) = iVar20;
        lVar33 = lVar33 + -8;
      } while (lVar33 != -8);
      lVar33 = 0;
      do {
        *(undefined4 *)((long)auStack_160 + lVar33 + 4) =
             *(undefined4 *)((long)auStack_160 + lVar33);
        lVar33 = lVar33 + 8;
      } while (lVar33 != 0x100);
      uVar32 = 0;
      do {
        uVar4 = param_2[uVar32];
        uVar29 = (ulong)(((uint)LZCOUNT(uVar4 + 1) ^ 0x1f) + 1);
        uVar23 = auStack_160[uVar29 * 2];
        uVar40 = auStack_160[uVar29 * 2 + 1];
        uVar36 = (ulong)uVar40;
        auStack_160[uVar29 * 2 + 1] = uVar40 + 1;
        uVar29 = uVar36;
        if (uVar23 < uVar40) {
          puVar38 = (undefined8 *)(param_5 + uVar36 * 2 + 2);
          uVar39 = uVar36;
          do {
            uVar39 = uVar39 - 1;
            uVar29 = uVar36;
            if (uVar4 <= (uint)puVar1[(uVar39 & 0xffffffff) * 2]) break;
            *puVar38 = *(undefined8 *)(puVar1 + (uVar39 & 0xffffffff) * 2);
            uVar40 = (int)uVar36 - 1;
            uVar36 = (ulong)uVar40;
            uVar29 = (ulong)uVar23;
            puVar38 = puVar38 + -1;
          } while (uVar23 < uVar40);
        }
        puVar1[uVar29 * 2] = uVar4;
        *(char *)((long)(puVar1 + uVar29 * 2) + 6) = (char)uVar32;
        uVar32 = uVar32 + 1;
      } while (uVar32 != uVar25);
      uVar32 = (ulong)(uVar13 - 1);
      do {
        uVar23 = (uint)uVar32;
        uVar13 = uVar23 - 1;
        uVar32 = (ulong)uVar13;
      } while (puVar1[(ulong)(uVar23 + 1) * 2] == 0);
      uVar40 = uVar23 + 0x100;
      uVar4 = uVar23 + 1;
      piVar11 = puVar1 + (long)(int)uVar4 * 2;
      param_5[0x202] = piVar11[-2] + *piVar11;
      *(undefined2 *)(piVar11 + -1) = 0x100;
      *(undefined2 *)(piVar11 + 1) = 0x100;
      if (uVar13 < 0xfffffeff) {
        lVar28 = (ulong)uVar40 - 0x100;
        lVar33 = 0x810;
        do {
          *(undefined4 *)((long)param_5 + lVar33) = 0x40000000;
          lVar33 = lVar33 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        *param_5 = 0x80000000;
        uVar29 = 0x100;
        uVar26 = 0x101;
        do {
          bVar9 = *(uint *)((long)puVar1 + (-(uVar32 >> 0x1f) & 0xfffffff800000000 | uVar32 << 3)) <
                  *(uint *)((long)puVar1 + (-(uVar29 >> 0x1f) & 0xfffffff800000000 | uVar29 << 3));
          uVar34 = (uint)uVar29;
          uVar27 = uVar34;
          if (!bVar9) {
            uVar27 = uVar34 + 1;
          }
          uVar2 = (uint)uVar32;
          if (!bVar9) {
            uVar2 = uVar34;
          }
          uVar8 = (uint)uVar32 - (uint)bVar9;
          bVar9 = *(uint *)((long)puVar1 +
                           (-(ulong)(uVar8 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar8 << 3)) <
                  *(uint *)((long)puVar1 +
                           (-(ulong)(uVar27 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar27 << 3));
          uVar34 = uVar27;
          if (!bVar9) {
            uVar34 = uVar27 + 1;
          }
          uVar29 = (ulong)uVar34;
          uVar34 = uVar8;
          if (!bVar9) {
            uVar34 = uVar27;
          }
          uVar32 = (ulong)(uVar8 - bVar9);
          piVar12 = (int *)((ulong)uVar26 * 8);
          puVar1[(ulong)uVar26 * 2] = puVar1[(ulong)uVar34 * 2] + puVar1[(ulong)uVar2 * 2];
          *(ushort *)(puVar1 + (ulong)uVar34 * 2 + 1) = uVar26;
          *(ushort *)(puVar1 + (ulong)uVar2 * 2 + 1) = uVar26;
          uVar26 = uVar26 + 1;
        } while (uVar26 <= uVar40);
      }
      else {
        *param_5 = 0x80000000;
      }
      *(undefined1 *)((long)puVar1 + (ulong)uVar40 * 8 + 7) = 0;
      if (uVar13 < 0xffffff00) {
        uVar32 = (ulong)(uVar23 + 0xff);
        pcVar35 = (char *)((long)param_5 + uVar32 * 8 + 0xf);
        do {
          uVar32 = uVar32 - 1;
          *pcVar35 = *(char *)((long)param_5 + (ulong)*(ushort *)(pcVar35 + -3) * 8 + 0xf) + '\x01';
          pcVar35 = pcVar35 + -8;
        } while ((uVar32 & 0xffffff00) != 0);
      }
      pbVar30 = (byte *)((long)param_5 + 0xf);
      lVar33 = (ulong)uVar4 + 1;
      pbVar31 = pbVar30;
      do {
        *pbVar31 = pbVar30[(ulong)*(ushort *)(pbVar31 + -3) * 8] + 1;
        lVar33 = lVar33 + -1;
        pbVar31 = pbVar31 + 8;
      } while (lVar33 != 0);
      pbVar31 = (byte *)((long)puVar1 + (ulong)(uVar23 + 1) * 8 + 7);
      bVar5 = *pbVar31;
      piVar24 = (int *)(ulong)bVar5;
      uVar40 = (uint)param_4;
      uVar13 = bVar5 - uVar40;
      piVar11 = piVar24;
      if (uVar40 <= bVar5 && uVar13 != 0) {
        iVar20 = 0;
        do {
          uVar27 = uVar23;
          iVar20 = iVar20 + (1 << (ulong)(uVar13 & 0x1f)) +
                   (-1 << (ulong)((uint)bVar5 - (int)piVar11 & 0x1f));
          *pbVar31 = (byte)param_4;
          pbVar31 = pbVar30 + (ulong)uVar27 * 8;
          piVar11 = (int *)(ulong)*pbVar31;
          uVar23 = uVar27 - 1;
        } while (uVar40 < *pbVar31);
        uVar32 = (ulong)(uVar27 + 1);
        do {
          uVar23 = (int)uVar32 - 1;
          uVar32 = (ulong)uVar23;
        } while (uVar40 == pbVar30[uVar32 * 8]);
        iVar20 = iVar20 >> (uVar13 & 0x1f);
        uStack_130 = 0xf0f0f0f0f0f0f0f0;
        uStack_148 = 0xf0f0f0f0f0f0f0f0;
        auStack_160[4] = 0xf0f0f0f0;
        auStack_160[5] = 0xf0f0f0f0;
        uStack_138 = 0xf0f0f0f0f0f0f0f0;
        uStack_140 = 0xf0f0f0f0f0f0f0f0;
        auStack_160[2] = 0xf0f0f0f0;
        auStack_160[3] = 0xf0f0f0f0;
        auStack_160[0] = 0xf0f0f0f0;
        auStack_160[1] = 0xf0f0f0f0;
        if (-1 < (int)uVar23) {
          pbVar31 = (byte *)((long)param_5 + (ulong)uVar23 * 8 + 0xf);
          uVar29 = uVar32;
          piVar11 = param_4;
          do {
            bVar6 = *pbVar31;
            piVar12 = (int *)(ulong)bVar6;
            uVar13 = (uint)uVar29;
            if ((uint)bVar6 < (uint)piVar11) {
              auStack_160[uVar40 - bVar6] = uVar13;
              piVar11 = piVar12;
            }
            uVar29 = uVar29 - 1;
            pbVar31 = pbVar31 + -8;
          } while (0 < (int)uVar13);
        }
        if (0 < iVar20) {
          do {
            iVar14 = (int)LZCOUNT(iVar20);
            if (iVar14 != 0x1f) {
              uVar29 = (ulong)(0x20 - iVar14);
              puVar15 = (uint *)((long)auStack_160 + (ulong)(iVar14 * -4 + 0x80));
              do {
                uVar36 = uVar29 - 1;
                if ((*puVar15 != 0xf0f0f0f0) &&
                   ((auStack_160[uVar36 & 0xffffffff] == 0xf0f0f0f0 ||
                    ((uint)puVar1[(ulong)*puVar15 * 2] <=
                     (uint)(puVar1[(ulong)auStack_160[uVar36 & 0xffffffff] * 2] * 2))))) {
                  if (uVar29 < 0xd) goto LAB_1099b07fc;
                  goto LAB_1099b0820;
                }
                uVar29 = uVar36;
                puVar15 = puVar15 + -1;
              } while ((uVar36 & 0xfffffffe) != 0);
            }
            uVar29 = 1;
LAB_1099b07fc:
            do {
              if (auStack_160[uVar29] != 0xf0f0f0f0) break;
              uVar29 = uVar29 + 1;
            } while (uVar29 != 0xd);
LAB_1099b0820:
            uVar27 = (int)uVar29 - 1;
            uVar23 = auStack_160[uVar29 & 0xffffffff];
            piVar16 = (int *)(ulong)uVar23;
            piVar12 = (int *)(uVar29 & 0xffffffff);
            uVar13 = uVar23;
            if (auStack_160[uVar27] != 0xf0f0f0f0) {
              uVar13 = auStack_160[uVar27];
            }
            auStack_160[uVar27] = uVar13;
            pbVar30[(long)piVar16 * 8] = pbVar30[(long)piVar16 * 8] + 1;
            puVar17 = (undefined4 *)0xf0f0f0f0;
            if (uVar23 != 0) {
              uVar23 = uVar23 - 1;
              piVar16 = (int *)(ulong)uVar23;
              if (uVar40 - (int)uVar29 != (uint)pbVar30[(long)piVar16 * 8]) {
                uVar23 = 0xf0f0f0f0;
              }
              puVar17 = (undefined4 *)(ulong)uVar23;
            }
            uVar13 = -1 << (ulong)(uVar27 & 0x1f);
            param_3 = (ulong)uVar13;
            auStack_160[(long)piVar12] = (uint)puVar17;
            bVar9 = SCARRY4(uVar13,iVar20);
            iVar20 = uVar13 + iVar20;
          } while (iVar20 != 0 && iVar20 < 0 == bVar9);
        }
        piVar11 = param_4;
        if (iVar20 < 0) {
          uVar29 = (ulong)auStack_160[1];
          do {
            uVar13 = (uint)uVar29;
            iVar14 = uVar13 + 0xf0f0f10;
            iVar37 = iVar20;
            while( true ) {
              uVar13 = uVar13 + 1;
              uVar29 = uVar32;
              if (iVar14 == 0) break;
              pbVar30[(ulong)uVar13 * 8] = pbVar30[(ulong)uVar13 * 8] - 1;
              iVar14 = iVar14 + 1;
              bVar9 = iVar37 == -1;
              iVar37 = iVar37 + 1;
              if (bVar9) goto LAB_1099b088c;
            }
            do {
              uVar32 = uVar29;
              uVar29 = (ulong)((int)uVar32 - 1);
            } while (uVar40 == pbVar30[uVar32 * 8]);
            uVar29 = (ulong)((int)uVar32 + 1);
            pbVar30[uVar29 * 8] = pbVar30[uVar29 * 8] - 1;
            iVar20 = iVar37 + 1;
          } while (iVar37 < -1);
        }
      }
LAB_1099b088c:
      auStack_160[0] = 0;
      auStack_160[1] = 0;
      auStack_160[2] = 0;
      auStack_160[3] = 0;
      uStack_148 = uStack_148 & 0xffffffffffff0000;
      auStack_160[4] = 0;
      auStack_160[5] = 0;
      asStack_180[0] = 0;
      asStack_180[1] = 0;
      asStack_180[2] = 0;
      asStack_180[3] = 0;
      asStack_180[4] = 0;
      asStack_180[5] = 0;
      asStack_180[6] = 0;
      asStack_180[7] = 0;
      asStack_180[0xc] = 0;
      asStack_180[8] = 0;
      asStack_180[9] = 0;
      asStack_180[10] = 0;
      asStack_180[0xb] = 0;
      uVar13 = (uint)piVar11;
      if (uVar13 < 0xd) {
        lVar33 = (ulong)uVar4 + 1;
        do {
          *(short *)((long)auStack_160 + (ulong)*pbVar30 * 2) =
               *(short *)((long)auStack_160 + (ulong)*pbVar30 * 2) + 1;
          lVar33 = lVar33 + -1;
          pbVar30 = pbVar30 + 8;
        } while (lVar33 != 0);
        if (uVar13 != 0) {
          uVar23 = 0;
          piVar3 = (int *)((ulong)param_4 & 0xffffffff);
          if ((int *)(ulong)(uint)bVar5 <= (int *)((ulong)param_4 & 0xffffffff)) {
            piVar3 = piVar24;
          }
          lVar33 = (long)piVar3 << 1;
          do {
            *(short *)((long)asStack_180 + lVar33) = (short)uVar23;
            uVar23 = *(ushort *)((long)auStack_160 + lVar33) + uVar23 >> 1 & 0x7fff;
            lVar33 = lVar33 + -2;
          } while ((int)lVar33 != 0);
        }
        puVar21 = (undefined1 *)((long)param_5 + 0xf);
        uVar32 = uVar25;
        do {
          *(undefined1 *)(param_1 + (ulong)(byte)puVar21[-1] * 4 + 2) = *puVar21;
          puVar21 = puVar21 + 8;
          uVar32 = uVar32 - 1;
        } while (uVar32 != 0);
        pbVar30 = (byte *)(param_1 + 2);
        do {
          sVar7 = asStack_180[*pbVar30];
          asStack_180[*pbVar30] = sVar7 + 1;
          *(short *)(pbVar30 + -2) = sVar7;
          pbVar30 = pbVar30 + 4;
          uVar25 = uVar25 - 1;
        } while (uVar25 != 0);
      }
      puVar10 = (ulong *)((ulong)piVar11 & 0xffffffff);
      if (0xc < uVar13) {
        puVar10 = (ulong *)0xffffffffffffffff;
      }
    }
    else {
      puVar10 = (ulong *)0xffffffffffffffd2;
    }
  }
  else {
    puVar10 = (ulong *)0xffffffffffffffff;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar10;
  }
  ___stack_chk_fail();
  if (piVar12 < (int *)0x8) {
    return (ulong *)0x0;
  }
  if (piVar12 == (int *)0x8) {
    return (ulong *)0x0;
  }
  uVar32 = 0;
  puVar18 = (ulong *)(((long)puVar10 + (long)piVar12) - 8);
  uVar29 = (ulong)piVar16 & 0xfffffffffffffffc;
  uVar25 = (ulong)piVar16 & 3;
  if (uVar25 < 2) {
    uVar36 = 0;
    if (uVar25 != 0) goto LAB_1099b0a94;
    uVar36 = 0;
    uVar25 = 0;
    puVar22 = puVar10;
    if (uVar29 == 0) {
      uVar36 = 0;
      uVar25 = 0;
      goto LAB_1099b0b80;
    }
  }
  else {
    uVar36 = 0;
    if (uVar25 != 2) {
      uVar36 = (ulong)*(ushort *)(puVar17 + *(byte *)(param_3 + uVar29 + 2));
      uVar32 = (ulong)(byte)*(ushort *)((long)(puVar17 + *(byte *)(param_3 + uVar29 + 2)) + 2);
    }
    uVar36 = (ulong)*(ushort *)(puVar17 + *(byte *)(param_3 + uVar29 + 1)) << (uVar32 & 0x3f) |
             uVar36;
    uVar32 = uVar32 + (byte)*(ushort *)((long)(puVar17 + *(byte *)(param_3 + uVar29 + 1)) + 2);
LAB_1099b0a94:
    uVar36 = (ulong)*(ushort *)(puVar17 + *(byte *)(param_3 + uVar29)) << (uVar32 & 0x3f) | uVar36;
    uVar32 = uVar32 + (byte)*(ushort *)((long)(puVar17 + *(byte *)(param_3 + uVar29)) + 2);
    *puVar10 = uVar36;
    puVar19 = (ulong *)((long)puVar10 + (uVar32 >> 3));
    puVar22 = puVar18;
    if (puVar19 <= puVar18) {
      puVar22 = puVar19;
    }
    uVar25 = uVar32 & 7;
    uVar36 = uVar36 >> (uVar32 & 0x38);
    if (uVar29 == 0) goto LAB_1099b0b80;
  }
  lVar33 = -((ulong)piVar16 & 0xfffffffffffffffc);
  pbVar30 = (byte *)(uVar29 + param_3 + -2);
  do {
    uVar32 = uVar25 + (byte)*(ushort *)((long)(puVar17 + pbVar30[1]) + 2);
    uVar29 = uVar32 + (byte)*(ushort *)((long)(puVar17 + *pbVar30) + 2);
    uVar39 = uVar29 + (byte)*(ushort *)((long)(puVar17 + pbVar30[-1]) + 2);
    uVar36 = (ulong)*(ushort *)(puVar17 + pbVar30[1]) << uVar25 | uVar36 |
             (ulong)*(ushort *)(puVar17 + *pbVar30) << (uVar32 & 0x3f) |
             (ulong)*(ushort *)(puVar17 + pbVar30[-1]) << (uVar29 & 0x3f) |
             (ulong)*(ushort *)(puVar17 + pbVar30[-2]) << (uVar39 & 0x3f);
    uVar39 = uVar39 + (byte)*(ushort *)((long)(puVar17 + pbVar30[-2]) + 2);
    *puVar22 = uVar36;
    puVar19 = (ulong *)((long)puVar22 + (uVar39 >> 3));
    puVar22 = puVar18;
    if (puVar19 <= puVar18) {
      puVar22 = puVar19;
    }
    uVar25 = uVar39 & 7;
    uVar36 = uVar36 >> (uVar39 & 0x38);
    pbVar30 = pbVar30 + -4;
    lVar33 = lVar33 + 4;
  } while (lVar33 != 0);
LAB_1099b0b80:
  *puVar22 = 1L << uVar25 | uVar36;
  puVar22 = (ulong *)((long)puVar22 + (uVar25 + 1 >> 3));
  puVar19 = puVar18;
  if (puVar22 <= puVar18) {
    puVar19 = puVar22;
  }
  if (puVar18 <= puVar19) {
    return (ulong *)0x0;
  }
  puVar19 = (ulong *)((long)puVar19 - (long)puVar10);
  if ((uVar25 + 1 & 7) != 0) {
    puVar19 = (ulong *)((long)puVar19 + 1);
  }
  return puVar19;
}



/* Entry: 1099b0a10; end: 1099b0bbf;  */

long FUN_1099b0a10(ulong *param_1,ulong param_2,long param_3,ulong param_4,long param_5)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  long lVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  byte *pbVar12;
  ulong uVar13;
  ulong uVar14;
  
  if (param_2 < 8) {
    return 0;
  }
  if (param_2 == 8) {
    return 0;
  }
  uVar13 = 0;
  puVar7 = (ulong *)((long)param_1 + (param_2 - 8));
  uVar11 = param_4 & 0xfffffffffffffffc;
  uVar10 = param_4 & 3;
  if (uVar10 < 2) {
    uVar14 = 0;
    if (uVar10 != 0) goto LAB_1099b0a94;
    uVar14 = 0;
    uVar10 = 0;
    puVar9 = param_1;
    if (uVar11 == 0) {
      uVar14 = 0;
      uVar10 = 0;
      goto LAB_1099b0b80;
    }
  }
  else {
    uVar14 = 0;
    if (uVar10 != 2) {
      puVar1 = (ushort *)(param_5 + (ulong)*(byte *)(param_3 + uVar11 + 2) * 4);
      uVar14 = (ulong)*puVar1;
      uVar13 = (ulong)(byte)puVar1[1];
    }
    puVar1 = (ushort *)(param_5 + (ulong)*(byte *)(param_3 + uVar11 + 1) * 4);
    uVar14 = (ulong)*puVar1 << (uVar13 & 0x3f) | uVar14;
    uVar13 = uVar13 + (byte)puVar1[1];
LAB_1099b0a94:
    puVar1 = (ushort *)(param_5 + (ulong)*(byte *)(param_3 + uVar11) * 4);
    uVar14 = (ulong)*puVar1 << (uVar13 & 0x3f) | uVar14;
    uVar13 = uVar13 + (byte)puVar1[1];
    *param_1 = uVar14;
    puVar6 = (ulong *)((long)param_1 + (uVar13 >> 3));
    puVar9 = puVar7;
    if (puVar6 <= puVar7) {
      puVar9 = puVar6;
    }
    uVar10 = uVar13 & 7;
    uVar14 = uVar14 >> (uVar13 & 0x38);
    if (uVar11 == 0) goto LAB_1099b0b80;
  }
  lVar8 = -(param_4 & 0xfffffffffffffffc);
  pbVar12 = (byte *)(uVar11 + param_3 + -2);
  do {
    puVar1 = (ushort *)(param_5 + (ulong)pbVar12[1] * 4);
    uVar13 = uVar10 + (byte)puVar1[1];
    puVar2 = (ushort *)(param_5 + (ulong)*pbVar12 * 4);
    uVar11 = uVar13 + (byte)puVar2[1];
    puVar3 = (ushort *)(param_5 + (ulong)pbVar12[-1] * 4);
    uVar4 = uVar11 + (byte)puVar3[1];
    puVar5 = (ushort *)(param_5 + (ulong)pbVar12[-2] * 4);
    uVar14 = (ulong)*puVar1 << uVar10 | uVar14 | (ulong)*puVar2 << (uVar13 & 0x3f) |
             (ulong)*puVar3 << (uVar11 & 0x3f) | (ulong)*puVar5 << (uVar4 & 0x3f);
    uVar4 = uVar4 + (byte)puVar5[1];
    *puVar9 = uVar14;
    puVar6 = (ulong *)((long)puVar9 + (uVar4 >> 3));
    puVar9 = puVar7;
    if (puVar6 <= puVar7) {
      puVar9 = puVar6;
    }
    uVar10 = uVar4 & 7;
    uVar14 = uVar14 >> (uVar4 & 0x38);
    pbVar12 = pbVar12 + -4;
    lVar8 = lVar8 + 4;
  } while (lVar8 != 0);
LAB_1099b0b80:
  *puVar9 = 1L << uVar10 | uVar14;
  puVar9 = (ulong *)((long)puVar9 + (uVar10 + 1 >> 3));
  puVar6 = puVar7;
  if (puVar9 <= puVar7) {
    puVar6 = puVar9;
  }
  if (puVar7 <= puVar6) {
    return 0;
  }
  lVar8 = (long)puVar6 - (long)param_1;
  if ((uVar10 + 1 & 7) != 0) {
    lVar8 = lVar8 + 1;
  }
  return lVar8;
}



/* Entry: 1099b0bc0; end: 1099b10bf;  */

int * FUN_1099b0bc0(int *param_1,long param_2,undefined1 *param_3,int *param_4,uint param_5,
                   uint param_6,int param_7,int *param_8,ulong param_9,int *param_10,int *param_11,
                   int param_12)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  ulong uVar10;
  int *piVar11;
  uint uVar12;
  byte *pbVar13;
  ulong uVar14;
  long lVar15;
  char *pcVar16;
  undefined1 *puVar17;
  ulong uVar18;
  uint uStack_64;
  
  if (((ulong)param_8 & 3) != 0) {
    return (int *)0xffffffffffffffff;
  }
  if (param_9 >> 0xb < 3) {
    return (int *)0xffffffffffffffbe;
  }
  if (param_2 == 0) {
    return (int *)0x0;
  }
  if (param_4 == (int *)0x0) {
    return (int *)0x0;
  }
  if ((int *)0x20000 < param_4) {
    return (int *)0xffffffffffffffb8;
  }
  if (0xc < param_6) {
    return (int *)0xffffffffffffffd4;
  }
  if (0xff < param_5) {
    return (int *)0xffffffffffffffd2;
  }
  uStack_64 = param_5;
  if (param_5 == 0) {
    uStack_64 = 0xff;
  }
  uVar2 = 0xb;
  if (param_6 != 0) {
    uVar2 = param_6;
  }
  piVar11 = param_1;
  if ((param_11 != (int *)0x0 && param_12 != 0) && (*param_11 == 2)) goto LAB_1099b0cdc;
  piVar7 = param_8;
  FUN_1099afef0(param_8,&uStack_64,param_3,param_4,param_8);
  uVar6 = uStack_64;
  if ((int *)0xffffffffffffff88 < piVar7) {
    return piVar7;
  }
  if (piVar7 == param_4) {
    *(undefined1 *)param_1 = *param_3;
    return (int *)0x1;
  }
  if (piVar7 <= (int *)(((ulong)param_4 >> 7) + 4)) {
    return (int *)0x0;
  }
  if (param_11 != (int *)0x0) {
    if ((*param_11 == 1) && (-1 < (int)uStack_64)) {
      bVar5 = false;
      lVar15 = (ulong)uStack_64 + 1;
      pcVar16 = (char *)((long)param_10 + 2);
      piVar7 = param_8;
      do {
        bVar5 = (bool)(bVar5 | (*piVar7 != 0 && *pcVar16 == '\0'));
        lVar15 = lVar15 + -1;
        pcVar16 = pcVar16 + 4;
        piVar7 = piVar7 + 1;
      } while (lVar15 != 0);
      if (bVar5) {
        *param_11 = 0;
        goto LAB_1099b0dac;
      }
    }
    if (*param_11 != 0 && (param_11 != (int *)0x0 && param_12 != 0)) goto LAB_1099b0cdc;
  }
LAB_1099b0dac:
  uVar4 = ((uint)LZCOUNT((int)param_4 + -1) ^ 0x1f) - 1;
  uVar3 = (uint)LZCOUNT((int)param_4) ^ 0x1f;
  uVar12 = ((uint)LZCOUNT(uStack_64) ^ 0x1f) + 2;
  if (uVar3 + 1 < uVar12) {
    uVar12 = uVar3 + 1;
  }
  if (uVar2 <= uVar4) {
    uVar4 = uVar2;
  }
  if (uVar12 <= uVar4) {
    uVar12 = uVar4;
  }
  if (uVar12 < 6) {
    uVar12 = 5;
  }
  if (0xb < uVar12) {
    uVar12 = 0xc;
  }
  piVar7 = param_8 + 0x100;
  piVar8 = piVar7;
  FUN_1099b03c0(piVar7,param_8,uStack_64,uVar12,param_8 + 0x200);
  if ((int *)0xffffffffffffff88 < piVar8) {
    return piVar8;
  }
  uVar18 = (ulong)(uVar6 + 1);
  _bzero(piVar7 + uVar18,uVar18 * -4 + 0x400);
  piVar9 = param_1;
  FUN_1099aff3c(param_1,param_2,piVar7,uVar6,piVar8);
  if ((int *)0xffffffffffffff88 < piVar9) {
    return piVar9;
  }
  if (param_11 == (int *)0x0) {
    if (param_4 <= piVar9 + 3) {
      return (int *)0x0;
    }
  }
  else {
    if (*param_11 == 0) {
      if (param_4 <= piVar9 + 3) {
        return (int *)0x0;
      }
    }
    else {
      if ((int)uVar6 < 0) goto LAB_1099b0cdc;
      uVar10 = 0;
      pbVar13 = (byte *)((long)param_10 + 2);
      piVar8 = param_8;
      uVar14 = uVar18;
      do {
        uVar10 = uVar10 + *piVar8 * (uint)*pbVar13;
        uVar14 = uVar14 - 1;
        pbVar13 = pbVar13 + 4;
        piVar8 = piVar8 + 1;
      } while (uVar14 != 0);
      uVar14 = 0;
      do {
        uVar14 = uVar14 + *param_8 * (uint)*(byte *)((long)param_8 + 0x402);
        uVar18 = uVar18 - 1;
        param_8 = param_8 + 1;
      } while (uVar18 != 0);
      if ((param_4 <= piVar9 + 3) ||
         ((undefined1 *)(uVar10 >> 3) <= (undefined1 *)((long)piVar9 + (uVar14 >> 3))))
      goto LAB_1099b0cdc;
    }
    *param_11 = 0;
  }
  if (param_10 != (int *)0x0) {
    _memcpy(param_10,piVar7,0x400);
  }
  piVar11 = (int *)((long)param_1 + (long)piVar9);
  param_10 = piVar7;
LAB_1099b0cdc:
  puVar17 = (undefined1 *)((long)param_1 + (param_2 - (long)piVar11));
  if (param_7 == 0) {
    piVar7 = piVar11;
    FUN_1099b0a10(piVar11,puVar17,param_3,param_4,param_10);
  }
  else {
    if (puVar17 < (undefined1 *)0x11) {
      return (int *)0x0;
    }
    if (param_4 < (int *)0xc) {
      return (int *)0x0;
    }
    uVar18 = (long)param_4 + 3U >> 2;
    piVar7 = (int *)((long)piVar11 + 6);
    piVar8 = piVar7;
    FUN_1099b0a10(piVar7,puVar17 + -6,param_3,uVar18,param_10);
    if ((int *)0xffffffffffffff88 < piVar8) {
      return piVar8;
    }
    if (piVar8 == (int *)0x0) {
      return (int *)0x0;
    }
    *(short *)piVar11 = (short)piVar8;
    piVar7 = (int *)((long)piVar7 + (long)piVar8);
    param_3 = param_3 + uVar18;
    piVar9 = piVar7;
    FUN_1099b0a10(piVar7,(long)puVar17 - ((long)piVar8 + 6),param_3,uVar18,param_10);
    if ((int *)0xffffffffffffff88 < piVar9) {
      return piVar9;
    }
    if (piVar9 == (int *)0x0) {
      return (int *)0x0;
    }
    *(short *)((long)piVar11 + 2) = (short)piVar9;
    piVar7 = (int *)((long)piVar7 + (long)piVar9);
    puVar1 = (undefined1 *)((long)piVar9 + (long)((long)piVar8 + 6));
    piVar8 = piVar7;
    FUN_1099b0a10(piVar7,(long)puVar17 - (long)puVar1,param_3 + uVar18,uVar18,param_10);
    if ((int *)0xffffffffffffff88 < piVar8) {
      return piVar8;
    }
    if (piVar8 == (int *)0x0) {
      return (int *)0x0;
    }
    *(short *)(piVar11 + 1) = (short)piVar8;
    puVar1 = (undefined1 *)((long)piVar8 + (long)puVar1);
    piVar7 = (int *)((long)piVar7 + (long)piVar8);
    FUN_1099b0a10(piVar7,(long)puVar17 - (long)puVar1,param_3 + uVar18 + uVar18,
                  uVar18 * -3 + (long)param_4,param_10);
    if ((int *)0xffffffffffffff88 < piVar7) {
      return piVar7;
    }
    if (piVar7 == (int *)0x0) {
      return (int *)0x0;
    }
    piVar7 = (int *)((long)piVar7 + (long)puVar1);
  }
  piVar11 = (int *)((undefined1 *)((long)piVar11 + (long)piVar7) + -(long)param_1);
  if ((int *)((long)param_4 + -1) <= piVar11) {
    piVar11 = (int *)0x0;
  }
  piVar8 = (int *)0x0;
  if (piVar7 != (int *)0x0) {
    piVar8 = piVar11;
  }
  if (piVar7 < (int *)0xffffffffffffff89) {
    piVar7 = piVar8;
  }
  return piVar7;
}



/* Entry: 1099b10c0; end: 1099b117b;  */

undefined8 FUN_1099b10c0(ulong param_1)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = 0;
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x208) == 0) {
      if (param_1 < *(ulong *)(param_1 + 0x138)) {
        bVar1 = true;
      }
      else {
        bVar1 = *(ulong *)(param_1 + 0x140) < param_1;
      }
      func_0x000107c34f00(param_1);
      lVar3 = *(long *)(param_1 + 0x138);
      *(undefined8 *)(param_1 + 0x140) = 0;
      *(undefined8 *)(param_1 + 0x138) = 0;
      *(undefined8 *)(param_1 + 0x150) = 0;
      *(undefined8 *)(param_1 + 0x148) = 0;
      *(undefined8 *)(param_1 + 0x160) = 0;
      *(undefined8 *)(param_1 + 0x158) = 0;
      *(undefined8 *)(param_1 + 0x170) = 0;
      *(undefined8 *)(param_1 + 0x168) = 0;
      if (lVar3 != 0) {
        if (*(code **)(param_1 + 0x1f8) == (code *)0x0) {
          _free(lVar3);
        }
        else {
          (**(code **)(param_1 + 0x1f8))(*(undefined8 *)(param_1 + 0x200));
        }
      }
      if (bVar1) {
        if (*(code **)(param_1 + 0x1f8) == (code *)0x0) {
          _free(param_1);
        }
        else {
          (**(code **)(param_1 + 0x1f8))(*(undefined8 *)(param_1 + 0x200),param_1);
        }
      }
      uVar2 = 0;
    }
    else {
      uVar2 = 0xffffffffffffffc0;
    }
  }
  return uVar2;
}



/* Entry: 1099b117c; end: 1099b155b;  */

ulong FUN_1099b117c(uint *param_1,int param_2,uint param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  if (0xa3 < param_2) {
    if (param_2 < 0x192) {
      if (0xc9 < param_2) {
        if (param_2 == 0xca) {
          param_1[10] = (uint)(param_3 == 0);
          return (ulong)(param_3 != 0);
        }
        uVar2 = 0;
        if (param_3 != 0) {
          uVar2 = 0xffffffffffffffd8;
        }
        uVar1 = 0;
        if (param_3 != 0) {
          uVar1 = 0xffffffffffffffd8;
        }
        if (param_2 != 0x191) {
          uVar1 = 0xffffffffffffffd8;
        }
        if (param_2 != 400) {
          uVar2 = uVar1;
        }
        return uVar2;
      }
      if (param_2 == 0xa4) {
        if (0x19 < (int)param_3) {
          return 0xffffffffffffffd6;
        }
        param_1[0x1c] = param_3;
        goto LAB_1099b1460;
      }
      if (param_2 == 200) {
        param_1[8] = (uint)(param_3 != 0);
        return (ulong)(param_3 != 0);
      }
      if (param_2 == 0xc9) {
        param_1[9] = (uint)(param_3 != 0);
        return (ulong)(param_3 != 0);
      }
    }
    else {
      if (1000 < param_2) {
        if (0x3ea < param_2) {
          if (param_2 == 0x3eb) {
            if ((param_3 == 0) || (0xfffe003e < param_3 - 0x20001)) {
              *(ulong *)(param_1 + 0xe) = (ulong)param_3;
              return (ulong)param_3;
            }
          }
          else {
            if (param_2 != 0x3ec) {
              return 0xffffffffffffffd8;
            }
            if (-1 < (int)param_3) {
              param_1[0x10] = param_3;
              goto LAB_1099b1460;
            }
          }
          return 0xffffffffffffffd6;
        }
        if (param_2 == 0x3e9) {
          if (3 < param_3) {
            return 0xffffffffffffffd6;
          }
          param_1[0x11] = param_3;
        }
        else {
          if (param_2 != 0x3ea) {
            return 0xffffffffffffffd8;
          }
          if (2 < param_3) {
            return 0xffffffffffffffd6;
          }
          param_1[0x12] = param_3;
        }
        goto LAB_1099b1460;
      }
      if ((param_2 == 0x192) || (param_2 == 500)) {
        uVar2 = 0;
        if (param_3 != 0) {
          uVar2 = 0xffffffffffffffd8;
        }
        return uVar2;
      }
      if (param_2 == 1000) {
        param_1[0xc] = (uint)(param_3 != 0);
        return (ulong)(param_3 != 0);
      }
    }
    return 0xffffffffffffffd8;
  }
  if (0x68 < param_2) {
    if (param_2 < 0xa0) {
      if (param_2 == 0x69) {
        if ((4 < param_3 - 3) && (param_3 != 0)) {
          return 0xffffffffffffffd6;
        }
        param_1[5] = param_3;
      }
      else if (param_2 == 0x6a) {
        if (0x20000 < param_3) {
          return 0xffffffffffffffd6;
        }
        param_1[6] = param_3;
      }
      else {
        if (param_2 != 0x6b) {
          return 0xffffffffffffffd8;
        }
        if (9 < param_3) {
          return 0xffffffffffffffd6;
        }
        param_1[7] = param_3;
      }
    }
    else if (param_2 < 0xa2) {
      if (param_2 == 0xa0) {
        param_1[0x18] = (uint)(param_3 != 0);
        return (ulong)(param_3 != 0);
      }
      if (param_2 != 0xa1) {
        return 0xffffffffffffffd8;
      }
      if ((param_3 != 0) && (param_3 - 0x1f < 0xffffffe7)) {
        return 0xffffffffffffffd6;
      }
      param_1[0x19] = param_3;
    }
    else if (param_2 == 0xa2) {
      if ((param_3 != 0) && (param_3 - 0x1001 < 0xfffff003)) {
        return 0xffffffffffffffd6;
      }
      param_1[0x1b] = param_3;
    }
    else {
      if (param_2 != 0xa3) {
        return 0xffffffffffffffd8;
      }
      if (8 < param_3) {
        return 0xffffffffffffffd6;
      }
      param_1[0x1a] = param_3;
    }
LAB_1099b1460:
    return (ulong)param_3;
  }
  if (0x65 < param_2) {
    if (param_2 == 0x66) {
      if ((param_3 != 0) && (param_3 - 0x1f < 0xffffffe7)) {
        return 0xffffffffffffffd6;
      }
      param_1[3] = param_3;
    }
    else if (param_2 == 0x67) {
      if ((param_3 != 0) && (param_3 - 0x1f < 0xffffffe7)) {
        return 0xffffffffffffffd6;
      }
      param_1[2] = param_3;
    }
    else {
      if (param_2 != 0x68) {
        return 0xffffffffffffffd8;
      }
      if (0x1e < param_3) {
        return 0xffffffffffffffd6;
      }
      param_1[4] = param_3;
    }
    goto LAB_1099b1460;
  }
  if (param_2 == 10) {
    if (1 < param_3) {
      return 0xffffffffffffffd6;
    }
    *param_1 = param_3;
    goto LAB_1099b1460;
  }
  if (param_2 != 100) {
    if (param_2 != 0x65) {
      return 0xffffffffffffffd8;
    }
    if ((param_3 != 0) && (param_3 - 0x20 < 0xffffffea)) {
      return 0xffffffffffffffd6;
    }
    param_1[1] = param_3;
    goto LAB_1099b1460;
  }
  if ((int)param_3 < -0x20000) {
    param_3 = 0xfffe0000;
  }
  else if ((int)param_3 < 0x17) {
    if (param_3 == 0) {
      param_3 = param_1[0xb];
      goto LAB_1099b148c;
    }
  }
  else {
    param_3 = 0x16;
  }
  param_1[0xb] = param_3;
LAB_1099b148c:
  return (ulong)(param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU));
}



/* Entry: 1099b155c; end: 1099b162b;  */

void FUN_1099b155c(undefined8 param_1,long param_2,ulong param_3,undefined8 param_4)

{
  undefined1 (*pauVar1) [12];
  undefined1 auVar2 [16];
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  int iVar7;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  int iStack_38;
  
  if ((param_3 == 0xffffffffffffffff) &&
     (param_3 = (ulong)*(uint *)(param_2 + 0x40), (int)*(uint *)(param_2 + 0x40) < 1)) {
    param_3 = 0xffffffffffffffff;
  }
  FUN_1099b162c(&uStack_50,*(undefined4 *)(param_2 + 0x2c),param_3,param_4);
  if (*(int *)(param_2 + 0x60) != 0) {
    uStack_50._0_4_ = 0x1b;
  }
  pauVar1 = (undefined1 (*) [12])(param_2 + 4);
  iVar7 = (int)((ulong)*(undefined8 *)(param_2 + 0xc) >> 0x20);
  auVar5._12_4_ = -(uint)(iVar7 == 0);
  auVar5._8_4_ = -(uint)((int)*(undefined8 *)(param_2 + 0xc) == 0);
  auVar5._4_4_ = -(uint)((int)((ulong)*(undefined8 *)*pauVar1 >> 0x20) == 0);
  auVar5._0_4_ = -(uint)((int)*(undefined8 *)*pauVar1 == 0);
  auVar2._12_4_ = iVar7;
  auVar2._0_12_ = *pauVar1;
  auVar4._4_4_ = uStack_50._4_4_;
  auVar4._0_4_ = (undefined4)uStack_50;
  auVar4._8_8_ = uStack_48;
  auVar6._12_4_ = iVar7;
  auVar6._0_12_ = *pauVar1;
  auVar6 = auVar6 ^ (auVar2 ^ auVar4) & auVar5;
  uVar3 = *(ulong *)(param_2 + 0x14);
  uStack_40 = uStack_40 ^
              (uStack_40 ^ uVar3) &
              ~CONCAT44(-(uint)((int)(uVar3 >> 0x20) == 0),-(uint)((int)uVar3 == 0));
  if (*(int *)(param_2 + 0x1c) != 0) {
    iStack_38 = *(int *)(param_2 + 0x1c);
  }
  uStack_48 = auVar6._8_8_;
  uStack_50 = auVar6._0_8_;
  func_0x0001099b149c(param_1,&uStack_50,param_3,param_4);
  return;
}



/* Entry: 1099b162c; end: 1099b16df;  */

void FUN_1099b162c(undefined8 param_1,int param_2,long param_3,long param_4)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  
  lVar4 = 500;
  if (param_3 != 0) {
    lVar4 = 0;
  }
  uVar1 = param_4 + param_3 + lVar4;
  if (param_4 + param_3 == 0) {
    uVar1 = 0xffffffffffffffff;
  }
  uVar6 = (ulong)(uVar1 < 0x40001);
  if (uVar1 < 0x20001) {
    uVar6 = uVar6 + 1;
  }
  if (uVar1 < 0x4001) {
    uVar6 = uVar6 + 1;
  }
  iVar3 = 3;
  if (param_2 != 0) {
    iVar3 = param_2;
  }
  iVar2 = 0;
  if (-1 < param_2) {
    iVar2 = iVar3;
  }
  iVar3 = 0x16;
  if (param_2 < 0x17) {
    iVar3 = iVar2;
  }
  puVar5 = (undefined8 *)(&UNK_10e00f940 + (long)iVar3 * 0x1c + uVar6 * 0x284);
  uStack_28 = puVar5[1];
  uStack_30 = *puVar5;
  uStack_20 = *(undefined4 *)(puVar5 + 2);
  iStack_1c = *(int *)((long)puVar5 + 0x14);
  uStack_18 = *(undefined4 *)(puVar5 + 3);
  if (param_2 < 0) {
    iStack_1c = -param_2;
  }
  func_0x0001099b149c(param_1,&uStack_30);
  return;
}



/* Entry: 1099b16e0; end: 1099b2423;  */

/* WARNING: Type propagation algorithm not settling */

ulong * FUN_1099b16e0(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4,ulong *param_5,
                     ulong *param_6,ulong *param_7)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ushort uVar5;
  ulong *puVar6;
  uint *puVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong *puVar17;
  ulong *puVar18;
  ulong *puVar19;
  ulong *puVar20;
  ulong *puVar21;
  long lVar22;
  ulong uVar23;
  int iVar24;
  ulong *puVar25;
  ulong *puVar26;
  ulong *puVar27;
  uint uVar28;
  ulong uVar29;
  char *pcVar30;
  ushort uVar31;
  uint uVar32;
  long lVar33;
  ulong *puVar34;
  char *pcVar35;
  ulong uVar36;
  byte *pbVar37;
  uint uVar38;
  ulong uVar39;
  ulong uVar40;
  ushort *puVar41;
  ulong *puVar42;
  char *pcVar43;
  char *pcVar44;
  ulong uVar45;
  uint *puVar46;
  char cVar47;
  uint uVar48;
  ulong *puVar49;
  ulong *puVar50;
  long lVar51;
  ulong uVar52;
  ulong uVar53;
  undefined1 auVar54 [16];
  ulong uStack_410;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined8 uStack_3fc;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  ulong uStack_3d0;
  ulong uStack_3c8;
  ulong uStack_3c0;
  ulong uStack_3b8;
  ulong uStack_3b0;
  ulong uStack_3a8;
  ulong uStack_3a0;
  ulong uStack_398;
  ulong uStack_390;
  ulong uStack_388;
  ulong uStack_380;
  ulong uStack_378;
  ulong uStack_370;
  ulong uStack_368;
  ulong uStack_360;
  ulong uStack_358;
  ulong uStack_350;
  ulong uStack_348;
  ulong uStack_340;
  ulong uStack_338;
  ulong uStack_330;
  ulong uStack_328;
  ulong uStack_320;
  ulong uStack_318;
  ulong uStack_310;
  ulong uStack_308;
  ulong uStack_300;
  ulong uStack_2f8;
  ulong uStack_2f0;
  ulong uStack_2e8;
  ulong uStack_2e0;
  long lStack_2d8;
  uint uStack_14c;
  ulong uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  ulong uStack_130;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = param_1;
  puVar25 = param_5;
  puVar34 = param_6;
  if ((int)*param_1 == 0) {
    puVar20 = (ulong *)0xffffffffffffffc4;
  }
  else {
    if ((int)*param_1 == 1) {
      puVar25 = (ulong *)(ulong)(uint)param_1[0x26];
      puVar21 = param_2;
      FUN_1099b3d1c(param_2,param_3,param_1 + 0x14);
      puVar15 = puVar21;
      puVar20 = puVar21;
      if ((ulong *)0xffffffffffffff88 < puVar21) goto LAB_1099b23e4;
      param_3 = (ulong *)((long)param_3 - (long)puVar21);
      param_2 = (ulong *)((long)param_2 + (long)puVar21);
      *(int *)param_1 = 2;
    }
    else {
      puVar21 = (ulong *)0x0;
    }
    puVar20 = puVar21;
    if (param_5 != (ulong *)0x0) {
      puVar1 = param_1 + 0x60;
      puVar20 = (ulong *)*puVar1;
      if (puVar20 == param_4) {
        uVar39 = param_1[0x62];
        uVar52 = (ulong)*(uint *)((long)param_1 + 0x31c);
        uVar36 = (ulong)(uint)param_1[99];
      }
      else {
        uVar39 = param_1[0x61];
        uVar36 = (long)puVar20 - uVar39;
        uVar28 = (uint)param_1[99];
        *(uint *)((long)param_1 + 0x31c) = uVar28;
        iVar24 = (int)uVar36;
        *(int *)(param_1 + 99) = iVar24;
        param_1[0x62] = uVar39;
        param_1[0x61] = (long)param_4 - uVar36;
        uVar52 = (ulong)uVar28;
        if (iVar24 - uVar28 < 8) {
          *(int *)((long)param_1 + 0x31c) = iVar24;
          uVar52 = uVar36;
        }
      }
      pbVar37 = (byte *)((long)param_4 + (long)param_5);
      *puVar1 = (ulong)pbVar37;
      if (((byte *)(uVar39 + (uVar52 & 0xffffffff)) < pbVar37) &&
         (param_4 < (ulong *)(uVar39 + (uVar36 & 0xffffffff)))) {
        uVar52 = (long)pbVar37 - uVar39;
        if ((long)(uVar36 & 0xffffffff) <= (long)((long)pbVar37 - uVar39)) {
          uVar52 = uVar36 & 0xffffffff;
        }
        *(int *)((long)param_1 + 0x31c) = (int)uVar52;
      }
      if (puVar20 != param_4) {
        *(int *)((long)param_1 + 0x324) = (int)uVar36;
      }
      if ((int)param_1[0x20] != 0) {
        if ((ulong *)param_1[0x51] == param_4) {
          uVar36 = param_1[0x53];
          uVar52 = (ulong)*(uint *)((long)param_1 + 0x2a4);
          uVar39 = (ulong)(uint)param_1[0x54];
        }
        else {
          uVar36 = param_1[0x52];
          uVar39 = (long)param_1[0x51] - uVar36;
          uVar28 = (uint)param_1[0x54];
          *(uint *)((long)param_1 + 0x2a4) = uVar28;
          iVar24 = (int)uVar39;
          *(int *)(param_1 + 0x54) = iVar24;
          param_1[0x53] = uVar36;
          param_1[0x52] = (long)param_4 - uVar39;
          uVar52 = (ulong)uVar28;
          if (iVar24 - uVar28 < 8) {
            *(int *)((long)param_1 + 0x2a4) = iVar24;
            uVar52 = uVar39;
          }
        }
        param_1[0x51] = (ulong)pbVar37;
        if (((byte *)(uVar36 + (uVar52 & 0xffffffff)) < pbVar37) &&
           (param_4 < (ulong *)(uVar36 + (uVar39 & 0xffffffff)))) {
          uVar52 = (long)pbVar37 - uVar36;
          if ((long)(uVar39 & 0xffffffff) <= (long)((long)pbVar37 - uVar36)) {
            uVar52 = uVar39 & 0xffffffff;
          }
          *(int *)((long)param_1 + 0x2a4) = (int)uVar52;
        }
      }
      puVar20 = (ulong *)param_1[0x2f];
      uVar28 = *(uint *)((long)param_1 + 0xa4);
      if (*(int *)((long)param_1 + 0xc4) != 0) {
        puVar15 = param_1 + 0x33;
        func_0x000107c2ae2c(puVar15,param_4,param_5);
      }
      puVar49 = param_2;
      puVar50 = param_5;
      do {
        uVar5 = 0;
        if (puVar50 <= puVar20) {
          uVar5 = (ushort)param_6;
        }
        if (param_3 < (ulong *)0x6) {
LAB_1099b2380:
          puVar20 = (ulong *)0xffffffffffffffba;
          goto LAB_1099b23e4;
        }
        puVar6 = puVar50;
        if (puVar20 <= puVar50) {
          puVar6 = puVar20;
        }
        puVar2 = (ulong *)((long)param_4 + (long)puVar6);
        puVar25 = puVar2;
        func_0x0001099b3e80(puVar1,param_1 + 0x27,param_1 + 0x14);
        if ((uint)((int)param_1[100] + (1 << (ulong)(uVar28 & 0x1f))) <
            (uint)((int)puVar2 - (int)param_1[0x61])) {
          *(int *)(param_1 + 100) = 0;
          param_1[0x76] = 0;
        }
        uVar32 = *(uint *)((long)param_1 + 0x31c);
        uVar38 = *(uint *)((long)param_1 + 0x324);
        if (*(uint *)((long)param_1 + 0x324) < uVar32) {
          *(uint *)((long)param_1 + 0x324) = uVar32;
          uVar38 = uVar32;
        }
        puVar16 = (ulong *)((long)puVar49 + 3);
        if (puVar6 < (ulong *)0x7) {
          puVar15 = param_1 + 0x5a;
          FUN_1099cdb6c(puVar15,puVar6,*(int *)((long)param_1 + 0xb4));
          puVar20 = (ulong *)0x0;
LAB_1099b1988:
          if (*(int *)(param_1[0x5e] + 0x11d8) == 2) {
            *(undefined4 *)(param_1[0x5e] + 0x11d8) = 1;
          }
          if ((ulong *)0xffffffffffffff88 < puVar20) goto LAB_1099b23e4;
          if (puVar20 == (ulong *)0x1) {
            uVar31 = 2;
            puVar16 = puVar6;
          }
          else {
            if (puVar20 == (ulong *)0x0) goto LAB_1099b1c20;
            uVar31 = 4;
            puVar16 = puVar20;
          }
          *(ushort *)puVar49 = uVar31 | uVar5 | (ushort)((uint)puVar16 << 3);
          *(byte *)((long)puVar49 + 2) = (byte)((uint)puVar16 >> 0xd);
          puVar20 = (ulong *)((long)puVar20 + 3);
        }
        else {
          param_1[0x4a] = param_1[0x49];
          param_1[0x48] = param_1[0x47];
          *(int *)(param_1 + 0x50) = 0;
          uVar52 = param_1[0x5e];
          param_1[0x74] = uVar52;
          *(int *)(param_1 + 0x75) = (int)param_1[0x1d];
          uVar9 = (int)param_4 - (int)param_1[0x61];
          if (uVar38 + 0x180 < uVar9) {
            uVar38 = (uVar9 - uVar38) - 0x180;
            if (0xbf < uVar38) {
              uVar38 = 0xc0;
            }
            *(uint *)((long)param_1 + 0x324) = uVar9 - uVar38;
          }
          if (uVar32 < (uint)param_1[99]) {
            lVar51 = 1;
          }
          else {
            lVar51 = 0;
            if (param_1[0x76] != 0) {
              lVar51 = 2;
            }
          }
          lVar33 = 0;
          puVar42 = (ulong *)((long)param_3 + -3);
          lVar22 = param_1[0x5f] + 0x11e4;
          do {
            *(undefined4 *)(lVar22 + lVar33) = *(undefined4 *)(uVar52 + 0x11e4 + lVar33);
            lVar33 = lVar33 + 4;
          } while (lVar33 != 0xc);
          if (param_1[0x5b] < param_1[0x5c]) {
            puVar34 = param_1 + 0x5a;
LAB_1099b1ad0:
            FUN_1099cdc14(puVar34,puVar1,param_1 + 0x47,lVar22,param_4,puVar6);
          }
          else {
            if ((int)param_1[0x20] != 0) {
              uStack_140 = 0;
              uStack_138 = 0;
              uStack_148 = param_1[0x58];
              uStack_130 = param_1[0x59];
              puVar15 = param_1 + 0x51;
              puVar25 = puVar6;
              FUN_1099cd17c(puVar15,&uStack_148);
              puVar20 = puVar15;
              if (puVar15 < (ulong *)0xffffffffffffff89) {
                puVar34 = &uStack_148;
                lVar22 = param_1[0x5f] + 0x11e4;
                goto LAB_1099b1ad0;
              }
              goto LAB_1099b23e4;
            }
            puVar34 = puVar1;
            (*(code *)(&PTR_FUN_110b1f268)[lVar51 * 10 + (long)*(int *)((long)param_1 + 0xbc)])
                      (puVar1,param_1 + 0x47,lVar22,param_4,puVar6);
          }
          puVar15 = (ulong *)param_1[0x4a];
          _memcpy(puVar15,(long)puVar2 - (long)puVar34,puVar34);
          param_1[0x4a] = param_1[0x4a] + (long)puVar34;
          puVar25 = (ulong *)0x14;
          puVar34 = (ulong *)&UNK_10e010350;
          if ((int)param_1[0x42] == 0) {
            puVar17 = (ulong *)param_1[0x5e];
            uVar52 = param_1[0x5f];
            uVar40 = param_1[0x7b];
            uVar36 = param_1[0x47];
            puVar34 = (ulong *)param_1[0x4d];
            uVar39 = param_1[0x4b];
            uVar45 = param_1[0x4c];
            uVar53 = param_1[0x48];
            param_7 = (ulong *)param_1[0x49];
            puVar15 = puVar17;
            puVar25 = puVar16;
            puVar26 = puVar42;
            FUN_1099b46a8();
            puVar20 = puVar15;
            if (puVar15 < (ulong *)0xffffffffffffff89) {
              if ((long)puVar42 - (long)puVar15 < 4) {
                puVar20 = (ulong *)0xffffffffffffffba;
                goto LAB_1099b1da8;
              }
              uVar29 = uVar53 - uVar36;
              uVar23 = (long)uVar29 >> 3;
              pbVar37 = (byte *)((long)puVar16 + (long)puVar15);
              if (uVar23 < 0x80) {
                puVar27 = (ulong *)(pbVar37 + 1);
                *pbVar37 = (byte)(uVar29 >> 3);
              }
              else if (uVar23 >> 8 < 0x7f) {
                *pbVar37 = (byte)(uVar23 >> 8) | 0x80;
                pbVar37[1] = (byte)(uVar29 >> 3);
                puVar27 = (ulong *)(pbVar37 + 2);
              }
              else {
                *pbVar37 = 0xff;
                *(short *)(pbVar37 + 1) = (short)((uint)uVar29 >> 3) + -0x7f00;
                puVar27 = (ulong *)(pbVar37 + 3);
              }
              if (uVar53 == uVar36) {
                puVar15 = (ulong *)(uVar52 + 0x404);
                param_7 = puVar27;
                _memcpy(puVar15,(ushort *)((long)puVar17 + 0x404),0xde0);
LAB_1099b2370:
                puVar20 = (ulong *)((long)puVar27 - (long)puVar16);
                if (puVar20 != (ulong *)0x0) goto LAB_1099b1da8;
                goto LAB_1099b1df8;
              }
              pcVar35 = (char *)param_1[0x4b];
              pcVar30 = (char *)param_1[0x4c];
              uVar36 = param_1[0x48] - param_1[0x47];
              if ((uVar36 & 0x7fffffff8) != 0) {
                pbVar37 = (byte *)param_1[0x4d];
                uVar36 = uVar36 >> 3 & 0xffffffff;
                puVar41 = (ushort *)(param_1[0x47] + 6);
                pcVar43 = pcVar35;
                pcVar44 = pcVar30;
                do {
                  uVar31 = puVar41[-1];
                  if (uVar31 < 0x40) {
                    cVar47 = (&UNK_10e01035c)[(uint)uVar31];
                  }
                  else {
                    cVar47 = '2' - (char)LZCOUNT((uint)uVar31);
                  }
                  uVar31 = *puVar41;
                  *pcVar43 = cVar47;
                  *pbVar37 = (byte)LZCOUNT(*(undefined4 *)(puVar41 + -3)) ^ 0x1f;
                  if (uVar31 < 0x80) {
                    cVar47 = (&UNK_10e01039c)[(uint)uVar31];
                  }
                  else {
                    cVar47 = 'C' - (char)LZCOUNT((uint)uVar31);
                  }
                  *pcVar44 = cVar47;
                  pbVar37 = pbVar37 + 1;
                  pcVar43 = pcVar43 + 1;
                  puVar41 = puVar41 + 4;
                  uVar36 = uVar36 - 1;
                  pcVar44 = pcVar44 + 1;
                } while (uVar36 != 0);
              }
              iVar24 = (int)param_1[0x50];
              if (iVar24 == 1) {
                pcVar35[*(uint *)((long)param_1 + 0x284)] = '#';
                iVar24 = (int)param_1[0x50];
              }
              if (iVar24 == 2) {
                pcVar30[*(uint *)((long)param_1 + 0x284)] = '4';
              }
              pbVar37 = (byte *)((long)puVar49 + (long)param_3);
              puVar19 = (ulong *)((long)puVar27 + 1);
              uStack_14c = 0x23;
              puVar15 = &uStack_148;
              FUN_1099afbf4(puVar15,&uStack_14c,uVar39,uVar23,uVar40,0x1800);
              uVar32 = uStack_14c;
              *(int *)(uVar52 + 0x11e0) = (int)puVar17[0x23c];
              puVar18 = (ulong *)(uVar52 + 0x11e0);
              func_0x0001099b4978(puVar18,&uStack_148,uStack_14c,puVar15,uVar23,9,
                                  (ushort *)((long)puVar17 + 0xcb4),&UNK_10e01041c);
              puVar26 = &uStack_148;
              param_7 = (ulong *)(ulong)uVar32;
              puVar15 = puVar19;
              puVar25 = puVar18;
              func_0x0001099b4c84(puVar19,(long)pbVar37 - (long)puVar19,uVar52 + 0xcb4);
              puVar20 = puVar15;
              if ((ulong *)0xffffffffffffff88 < puVar15) goto LAB_1099b1da8;
              puVar3 = (ulong *)((long)puVar19 + (long)puVar15);
              uStack_14c = 0x1f;
              puVar15 = &uStack_148;
              FUN_1099afbf4(puVar15,&uStack_14c,puVar34,uVar23,uVar40,0x1800);
              uVar32 = uStack_14c;
              *(int *)(uVar52 + 0x11d8) = (int)puVar17[0x23b];
              puVar25 = (ulong *)(uVar52 + 0x11d8);
              func_0x0001099b4978(puVar25,&uStack_148,uStack_14c,puVar15,uVar23,8,
                                  (ushort *)((long)puVar17 + 0x404),&UNK_10e010464);
              puVar26 = &uStack_148;
              iVar24 = (int)puVar25;
              param_7 = (ulong *)(ulong)uVar32;
              puVar15 = puVar3;
              func_0x0001099b4c84(puVar3,(long)pbVar37 - (long)puVar3,uVar52 + 0x404);
              puVar20 = puVar15;
              if ((ulong *)0xffffffffffffff88 < puVar15) goto LAB_1099b1da8;
              puVar4 = (ulong *)((long)puVar3 + (long)puVar15);
              if ((int)puVar18 != 2) {
                puVar19 = (ulong *)0x0;
              }
              if (iVar24 != 2) {
                puVar3 = puVar19;
              }
              uStack_14c = 0x34;
              puVar15 = &uStack_148;
              FUN_1099afbf4(puVar15,&uStack_14c,uVar45,uVar23,uVar40,0x1800);
              uVar32 = uStack_14c;
              *(int *)(uVar52 + 0x11dc) = *(int *)((long)puVar17 + 0x11dc);
              puVar19 = (ulong *)(uVar52 + 0x11dc);
              func_0x0001099b4978(puVar19,&uStack_148,uStack_14c,puVar15,uVar23,9,puVar17 + 0xe1,
                                  &UNK_10e01049e);
              puVar26 = &uStack_148;
              param_7 = (ulong *)(ulong)uVar32;
              puVar15 = puVar4;
              puVar25 = puVar19;
              func_0x0001099b4c84(puVar4,(long)pbVar37 - (long)puVar4,uVar52 + 0x708);
              puVar17 = puVar4;
              if ((int)puVar19 != 2) {
                puVar17 = puVar3;
              }
              puVar20 = puVar15;
              if ((ulong *)0xffffffffffffff88 < puVar15) goto LAB_1099b1da8;
              puVar4 = (ulong *)((long)puVar4 + (long)puVar15);
              *(char *)puVar27 =
                   (char)puVar18 * '@' + (char)(iVar24 << 4) + (char)((int)puVar19 << 2);
              puVar25 = (ulong *)(uVar52 + 0x404);
              param_7 = (ulong *)(uVar52 + 0xcb4);
              puVar15 = puVar4;
              FUN_1099b4e94(puVar4,(long)pbVar37 - (long)puVar4,uVar52 + 0x708);
              puVar26 = puVar34;
              puVar20 = puVar15;
              if ((ulong *)0xffffffffffffff88 < puVar15) goto LAB_1099b1da8;
              puVar27 = (ulong *)((long)puVar4 + (long)puVar15);
              if ((puVar17 == (ulong *)0x0) || (3 < (long)puVar27 - (long)puVar17))
              goto LAB_1099b2370;
LAB_1099b1db8:
              puVar20 = (ulong *)0x0;
              puVar26 = puVar34;
LAB_1099b1df8:
              puVar34 = puVar26;
              if (((int)param_1[0x46] == 0) && (puVar20 < (ulong *)0x19)) {
                pbVar37 = (byte *)((long)puVar6 + -1);
                puVar42 = param_4;
                do {
                  puVar42 = (ulong *)((long)puVar42 + 1);
                  if ((byte)*param_4 != *(byte *)puVar42) goto LAB_1099b1e38;
                  pbVar37 = pbVar37 + -1;
                } while (pbVar37 != (byte *)0x0);
                *(byte *)puVar16 = (byte)*param_4;
                puVar20 = (ulong *)0x1;
                goto LAB_1099b1988;
              }
            }
            else {
LAB_1099b1da8:
              puVar34 = puVar26;
              if ((puVar6 <= puVar42) && (puVar20 == (ulong *)0xffffffffffffffba))
              goto LAB_1099b1db8;
              if (puVar20 < (ulong *)0xffffffffffffff89) {
                uVar32 = *(uint *)((long)param_1 + 0xbc);
                if (uVar32 < 8) {
                  uVar32 = 7;
                }
                puVar26 = puVar34;
                if ((ulong *)((long)puVar6 + (-2 - ((ulong)puVar6 >> ((ulong)(uVar32 - 1) & 0x3f))))
                    <= puVar20) {
                  puVar20 = (ulong *)0x0;
                }
                goto LAB_1099b1df8;
              }
            }
LAB_1099b1e38:
            if ((ushort *)((long)puVar20 + -2) < (ushort *)0xffffffffffffff87) {
              auVar54 = NEON_ext(*(undefined1 (*) [16])(param_1 + 0x5e),
                                 *(undefined1 (*) [16])(param_1 + 0x5e),8,1);
              param_1[0x5f] = auVar54._8_8_;
              param_1[0x5e] = auVar54._0_8_;
            }
            goto LAB_1099b1988;
          }
          uVar52 = param_1[0x44];
          lVar51 = param_1[0x48] - param_1[0x47];
          uVar36 = lVar51 >> 3;
          if (lVar51 != 0) {
            iVar24 = 0;
            uVar39 = 0;
            uVar45 = param_1[0x43];
            uVar32 = *(uint *)((long)param_1 + 0x284);
            puVar41 = (ushort *)(param_1[0x47] + 6);
            puVar46 = (uint *)(uVar45 + uVar52 * 0x14 + 8);
            do {
              uVar9 = *(uint *)(puVar41 + -3);
              puVar15 = (ulong *)(ulong)uVar9;
              puVar46[-1] = uVar9;
              uVar8 = puVar41[-1];
              uVar48 = (uint)uVar8;
              *puVar46 = (uint)uVar8;
              uVar31 = *puVar41;
              uVar38 = uVar31 + 3;
              puVar46[1] = uVar38;
              if (uVar32 == uVar39) {
                if ((int)param_1[0x50] == 2) {
                  uVar38 = uVar31 + 0x10003;
                  puVar46[1] = uVar38;
                }
                else if ((int)param_1[0x50] == 1) {
                  uVar48 = uVar8 | 0x10000;
                  *puVar46 = uVar48;
                }
              }
              uVar11 = uVar9 - 3;
              if (uVar9 < 3 || uVar11 == 0) {
                uVar10 = (uint)uVar39 - uVar9;
                uVar11 = (uint)uVar39;
                if (uVar9 != 3) {
                  uVar11 = uVar10;
                }
                if (uVar48 == 0) {
                  uVar9 = uVar9 + 1;
                  uVar10 = uVar11 - 1;
                }
                puVar46[2] = uVar9;
                puVar7 = (uint *)(&UNK_10e010350 + (ulong)~uVar10 * 4);
                if (-1 < (int)uVar10) {
                  puVar7 = (uint *)(uVar45 + uVar52 * 0x14 + (ulong)uVar10 * 0x14 + 4);
                }
                uVar11 = *puVar7;
                puVar15 = (ulong *)(ulong)uVar11;
                puVar46[-1] = uVar11;
                if (uVar9 == 4) {
                  uVar11 = uVar11 - 1;
                  goto LAB_1099b1bf4;
                }
              }
              else {
LAB_1099b1bf4:
                puVar46[-1] = uVar11;
              }
              puVar41 = puVar41 + 4;
              puVar46[-2] = uVar48 + iVar24;
              iVar24 = uVar48 + iVar24 + uVar38;
              uVar39 = uVar39 + 1;
              puVar46 = puVar46 + 5;
            } while (uVar36 != uVar39);
          }
          param_1[0x44] = uVar36 + uVar52;
LAB_1099b1c20:
          puVar20 = (ulong *)((long)puVar6 + 3);
          if (param_3 < puVar20) goto LAB_1099b2380;
          *(ushort *)puVar49 = uVar5 | (ushort)((uint)puVar6 << 3);
          *(byte *)((long)puVar49 + 2) = (byte)((uint)puVar6 >> 0xd);
          _memcpy(puVar16,param_4,puVar6);
          puVar15 = puVar16;
          if ((ulong *)0xffffffffffffff88 < puVar20) goto LAB_1099b23e4;
        }
        puVar49 = (ulong *)((long)puVar49 + (long)puVar20);
        param_3 = (ulong *)((long)param_3 - (long)puVar20);
        *(int *)(param_1 + 0x46) = 0;
        puVar50 = (ulong *)((long)puVar50 - (long)puVar6);
        param_4 = puVar2;
        puVar20 = puVar6;
      } while (puVar50 != (ulong *)0x0);
      if (((int)param_6 != 0) && (param_2 < puVar49)) {
        *(int *)param_1 = 3;
      }
      puVar49 = (ulong *)((long)puVar49 - (long)param_2);
      puVar20 = puVar49;
      if (puVar49 < (ulong *)0xffffffffffffff89) {
        uVar52 = param_1[0x31];
        param_1[0x31] = uVar52 + (long)param_5;
        param_1[0x32] = (ulong)(param_1[0x32] + (long)puVar49 + (long)puVar21);
        puVar20 = (ulong *)0xffffffffffffffb8;
        if ((byte *)(uVar52 + (long)param_5) + 1 <= (byte *)param_1[0x30] ||
            (byte *)param_1[0x30] == (byte *)0x0) {
          puVar20 = (ulong *)((long)puVar49 + (long)puVar21);
        }
      }
    }
  }
LAB_1099b23e4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar20;
  }
  ___stack_chk_fail();
  lStack_2d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar20 = puVar15;
  if ((((puVar25 == (ulong *)0x0) || (puVar25[1] == 0)) ||
      (((ulong *)0x1ffff < param_7 &&
       (((param_7 != (ulong *)0xffffffffffffffff &&
         (puVar21 = (ulong *)(puVar25[1] * 6),
         puVar21 < param_7 || (long)puVar21 - (long)param_7 == 0)) &&
        (*(int *)((long)puVar25 + 0x133c) != 0)))))) ||
     (iVar24 = *(int *)((long)puVar34 + 0x44), iVar24 == 3)) {
    uStack_390 = puVar34[0xc];
    uStack_388 = puVar34[0xd];
    uStack_378 = puVar34[0xf];
    uStack_380 = puVar34[0xe];
    uStack_370 = puVar34[0x10];
    uStack_368 = puVar34[0x11];
    uStack_3d0 = puVar34[4];
    uStack_3c8 = puVar34[5];
    uStack_3b8 = puVar34[7];
    uStack_3c0 = puVar34[6];
    uStack_3a8 = puVar34[9];
    uStack_3b0 = puVar34[8];
    uStack_3a0 = puVar34[10];
    uStack_398 = puVar34[0xb];
    uStack_3e8 = (undefined4)puVar34[1];
    uStack_3e4 = (undefined4)(puVar34[1] >> 0x20);
    uStack_3f0 = (undefined4)*puVar34;
    uStack_3ec = (undefined4)(*puVar34 >> 0x20);
    uStack_3d8 = (undefined4)puVar34[3];
    uStack_3d4 = (undefined4)(puVar34[3] >> 0x20);
    uStack_3e0 = (undefined4)puVar34[2];
    uStack_3dc = (undefined4)(puVar34[2] >> 0x20);
    puVar34 = (ulong *)&uStack_3f0;
    FUN_1099b30c0();
    puVar21 = puVar20;
    if (puVar20 < (ulong *)0xffffffffffffff89) {
      puVar20 = (ulong *)puVar15[0x5e];
      param_7 = puVar15 + 0x27;
      puVar34 = puVar15 + 0x60;
      FUN_1099b40b4();
      puVar21 = puVar20;
      if (puVar20 < (ulong *)0xffffffffffffff89) {
        *(int *)(puVar15 + 0x26) = (int)puVar20;
        puVar21 = (ulong *)0x0;
      }
    }
  }
  else {
    if ((param_7 == (ulong *)0xffffffffffffffff) ||
       (param_7 <= *(ulong **)(&UNK_10e010508 + (ulong)(uint)puVar25[0x25] * 8))) {
      if (iVar24 != 2) goto LAB_1099b25a0;
LAB_1099b25a8:
      uStack_398 = puVar34[0xb];
      uStack_390 = puVar34[0xc];
      uStack_380 = puVar34[0xe];
      uStack_388 = puVar34[0xd];
      uStack_370 = puVar34[0x10];
      uStack_378 = puVar34[0xf];
      uStack_368 = puVar34[0x11];
      uStack_3d0 = puVar34[4];
      uStack_3c0 = puVar34[6];
      uStack_3c8 = puVar34[5];
      uStack_3b0 = puVar34[8];
      uStack_3b8 = puVar34[7];
      uStack_3a0 = puVar34[10];
      uStack_3a8 = puVar34[9];
      uStack_350 = *(ulong *)((long)puVar25 + 0x124);
      uStack_358 = *(ulong *)((long)puVar25 + 0x11c);
      uStack_360 = *(ulong *)((long)puVar25 + 0x114);
      uStack_3f0 = (undefined4)*puVar34;
      uStack_3ec = (undefined4)(*puVar34 >> 0x20);
      uStack_3d8 = (undefined4)uStack_350;
      uStack_3d4 = (undefined4)(uStack_350 >> 0x20);
      uStack_3e0 = (undefined4)uStack_358;
      uStack_3dc = (undefined4)(uStack_358 >> 0x20);
      uStack_3e8 = (undefined4)uStack_360;
      uStack_3e4 = (undefined4)(uStack_360 >> 0x20);
      puVar34 = (ulong *)&uStack_3f0;
      uStack_348 = uStack_3d0;
      uStack_340 = uStack_3c8;
      uStack_338 = uStack_3c0;
      uStack_330 = uStack_3b8;
      uStack_328 = uStack_3b0;
      uStack_320 = uStack_3a8;
      uStack_318 = uStack_3a0;
      uStack_310 = uStack_398;
      uStack_308 = uStack_390;
      uStack_300 = uStack_388;
      uStack_2f8 = uStack_380;
      uStack_2f0 = uStack_378;
      uStack_2e8 = uStack_370;
      uStack_2e0 = uStack_368;
      FUN_1099b30c0();
      puVar21 = puVar20;
      if ((ulong *)0xffffffffffffff88 < puVar20) goto LAB_1099b26ec;
      puVar15[0x2b] = puVar15[0x29];
      if ((int)puVar25[0x25] == 1) {
        lVar51 = 0;
      }
      else {
        lVar51 = 4L << ((ulong)*(uint *)((long)puVar25 + 0x114) & 0x3f);
      }
      _memcpy(puVar15[0x66],puVar25[0x11],4L << ((ulong)(uint)puVar25[0x23] & 0x3f));
      _memcpy(puVar15[0x68],puVar25[0x13],lVar51);
      lVar51 = 0;
      if ((uint)puVar15[0x65] != 0) {
        lVar51 = 4L << ((ulong)(uint)puVar15[0x65] & 0x3f);
      }
      _bzero(puVar15[0x67],lVar51);
      if (puVar15[0x2b] < puVar15[0x2a]) {
        puVar15[0x2b] = puVar15[0x2a];
      }
      uVar52 = puVar25[0xb];
      uVar39 = puVar25[0xe];
      uVar36 = puVar25[0xd];
      puVar15[0x61] = puVar25[0xc];
      puVar15[0x60] = uVar52;
      puVar15[99] = uVar39;
      puVar15[0x62] = uVar36;
      puVar15[100] = puVar25[0xf];
    }
    else {
      if (iVar24 != 1) goto LAB_1099b25a8;
LAB_1099b25a0:
      if ((int)puVar34[6] != 0) goto LAB_1099b25a8;
      uStack_310 = puVar34[0xb];
      uStack_308 = puVar34[0xc];
      uStack_2f8 = puVar34[0xe];
      uStack_300 = puVar34[0xd];
      uStack_2e8 = puVar34[0x10];
      uStack_2f0 = puVar34[0xf];
      uStack_2e0 = puVar34[0x11];
      uStack_348 = puVar34[4];
      uStack_350 = puVar34[3];
      uStack_338 = puVar34[6];
      uStack_340 = puVar34[5];
      uStack_328 = puVar34[8];
      uStack_330 = puVar34[7];
      uStack_318 = puVar34[10];
      uStack_320 = puVar34[9];
      uStack_360 = puVar34[1];
      uStack_358 = puVar34[2];
      uVar52 = *puVar34;
      uStack_410 = puVar25[0x22];
      uStack_408 = (undefined4)puVar25[0x23];
      uStack_3fc = *(undefined8 *)((long)puVar25 + 0x124);
      uStack_404 = (undefined4)*(undefined8 *)((long)puVar25 + 0x11c);
      uStack_400 = (undefined4)((ulong)*(undefined8 *)((long)puVar25 + 0x11c) >> 0x20);
      func_0x0001099b149c(&uStack_3f0,&uStack_410,param_7,0);
      uStack_3d4 = uStack_3d8;
      uVar14 = uStack_3e0;
      uVar13 = uStack_3e8;
      uVar12 = uStack_3ec;
      uStack_360 = CONCAT44(uStack_3e8,uStack_3ec);
      uStack_358 = CONCAT44(uStack_3e0,uStack_3e4);
      uStack_350 = CONCAT44(uStack_3d8,uStack_3dc);
      uStack_3f0 = (undefined4)uVar52;
      uStack_3ec = (undefined4)(uVar52 >> 0x20);
      uStack_390 = uStack_308;
      uStack_398 = uStack_310;
      uStack_380 = uStack_2f8;
      uStack_388 = uStack_300;
      uStack_370 = uStack_2e8;
      uStack_378 = uStack_2f0;
      uStack_3d0 = uStack_348;
      uStack_3d8 = uStack_3dc;
      uStack_3c0 = uStack_338;
      uStack_3c8 = uStack_340;
      uStack_3b0 = uStack_328;
      uStack_3b8 = uStack_330;
      uStack_368 = uStack_2e0;
      uStack_3a0 = uStack_318;
      uStack_3a8 = uStack_320;
      uStack_3e0 = uStack_3e4;
      uStack_3dc = uVar14;
      uStack_3e8 = uVar12;
      uStack_3e4 = uVar13;
      puVar34 = (ulong *)&uStack_3f0;
      FUN_1099b30c0();
      puVar21 = puVar20;
      if ((ulong *)0xffffffffffffff88 < puVar20) goto LAB_1099b26ec;
      uVar52 = puVar25[0xb];
      uVar36 = puVar25[0xc];
      uVar28 = (uint)(uVar52 - uVar36);
      if ((uint)puVar25[0xe] != uVar28) {
        puVar15[0x76] = (ulong)(puVar25 + 0xb);
        uVar32 = (uint)puVar15[99];
        if ((uint)puVar15[99] < uVar28) {
          puVar15[0x60] = puVar15[0x61] + (uVar52 - uVar36 & 0xffffffff);
          *(uint *)((long)puVar15 + 0x31c) = uVar28;
          *(uint *)(puVar15 + 99) = uVar28;
          uVar32 = uVar28;
        }
        *(uint *)(puVar15 + 100) = uVar32;
      }
    }
    *(int *)(puVar15 + 0x26) = (int)puVar25[0x267];
    puVar20 = (ulong *)puVar15[0x5e];
    puVar34 = puVar25 + 0x26;
    param_7 = (ulong *)0x11f0;
    _memcpy();
  }
LAB_1099b26ec:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2d8) {
    return puVar21;
  }
  ___stack_chk_fail();
  puVar15 = puVar20;
  FUN_1099b16e0();
  if ((ulong *)0xffffffffffffff88 < puVar15) {
    return puVar15;
  }
  iVar24 = (int)*puVar20;
  if (iVar24 == 0) {
    return (ulong *)0xffffffffffffffc4;
  }
  puVar34 = (ulong *)((long)puVar34 + (long)puVar15);
  uVar52 = (long)param_7 - (long)puVar15;
  puVar25 = puVar34;
  if (iVar24 == 3) {
LAB_1099b2904:
    puVar21 = puVar25;
    if (*(int *)((long)puVar20 + 0xc4) != 0) {
      iVar24 = (int)puVar20 + 0x198;
      func_0x000107c2ae30();
      if (uVar52 < 4) goto LAB_1099b2950;
      puVar21 = (ulong *)((long)puVar25 + 4);
      *(int *)puVar25 = iVar24;
    }
    *(int *)puVar20 = 0;
    puVar21 = (ulong *)((long)puVar21 - (long)puVar34);
    if (puVar21 < (ulong *)0xffffffffffffff89) {
      if ((puVar20[0x30] == 0) || (puVar20[0x30] == puVar20[0x31] + 1)) {
        puVar21 = (ulong *)((long)puVar21 + (long)puVar15);
      }
      else {
        puVar21 = (ulong *)0xffffffffffffffb8;
      }
    }
  }
  else {
    if (iVar24 == 1) {
      FUN_1099b3d1c(puVar34,uVar52,puVar20 + 0x14,0,0);
      if ((ulong *)0xffffffffffffff88 < puVar25) {
        return puVar25;
      }
      uVar52 = uVar52 - (long)puVar25;
      *(int *)puVar20 = 2;
      puVar25 = (ulong *)((long)puVar34 + (long)puVar25);
    }
    if (3 < uVar52) {
      *(int *)puVar25 = 1;
      uVar52 = uVar52 - 3;
      puVar25 = (ulong *)((long)puVar25 + 3);
      goto LAB_1099b2904;
    }
LAB_1099b2950:
    puVar21 = (ulong *)0xffffffffffffffba;
  }
  return puVar21;
}



/* Entry: 1099b2424; end: 1099b284b;  */

int * FUN_1099b2424(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  long in_x4;
  undefined8 *in_x5;
  int *in_x6;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  int *piVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uStack_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined8 uStack_19c;
  int iStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
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
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  piVar5 = param_1;
  if ((((in_x4 == 0) || (*(long *)(in_x4 + 8) == 0)) ||
      (((int *)0x1ffff < in_x6 &&
       (((in_x6 != (int *)0xffffffffffffffff &&
         (piVar9 = (int *)(*(long *)(in_x4 + 8) * 6),
         piVar9 < in_x6 || (long)piVar9 - (long)in_x6 == 0)) && (*(int *)(in_x4 + 0x133c) != 0))))))
     || (iVar4 = *(int *)((long)in_x5 + 0x44), iVar4 == 3)) {
    uStack_128 = in_x5[0xd];
    uStack_130 = in_x5[0xc];
    uStack_118 = in_x5[0xf];
    uStack_120 = in_x5[0xe];
    uStack_108 = in_x5[0x11];
    uStack_110 = in_x5[0x10];
    uStack_168 = in_x5[5];
    uStack_170 = in_x5[4];
    uStack_158 = in_x5[7];
    uStack_160 = in_x5[6];
    uStack_148 = in_x5[9];
    uStack_150 = in_x5[8];
    uStack_138 = in_x5[0xb];
    uStack_140 = in_x5[10];
    uStack_188 = (undefined4)in_x5[1];
    uStack_184 = (undefined4)((ulong)in_x5[1] >> 0x20);
    iStack_190 = (int)*in_x5;
    uStack_18c = (undefined4)((ulong)*in_x5 >> 0x20);
    uStack_178 = (undefined4)in_x5[3];
    uStack_174 = (undefined4)((ulong)in_x5[3] >> 0x20);
    uStack_180 = (undefined4)in_x5[2];
    uStack_17c = (undefined4)((ulong)in_x5[2] >> 0x20);
    piVar9 = &iStack_190;
    FUN_1099b30c0();
    piVar11 = piVar5;
    if (piVar5 < (int *)0xffffffffffffff89) {
      piVar5 = *(int **)(param_1 + 0xbc);
      in_x6 = param_1 + 0x4e;
      piVar9 = param_1 + 0xc0;
      FUN_1099b40b4();
      piVar11 = piVar5;
      if (piVar5 < (int *)0xffffffffffffff89) {
        param_1[0x4c] = (int)piVar5;
        piVar11 = (int *)0x0;
      }
    }
  }
  else {
    if ((in_x6 == (int *)0xffffffffffffffff) ||
       (in_x6 <= *(int **)(&UNK_10e010508 + (ulong)*(uint *)(in_x4 + 0x128) * 8))) {
      if (iVar4 != 2) goto LAB_1099b25a0;
LAB_1099b25a8:
      uStack_130 = in_x5[0xc];
      uStack_138 = in_x5[0xb];
      uStack_120 = in_x5[0xe];
      uStack_128 = in_x5[0xd];
      uStack_110 = in_x5[0x10];
      uStack_118 = in_x5[0xf];
      uStack_108 = in_x5[0x11];
      uStack_170 = in_x5[4];
      uStack_160 = in_x5[6];
      uStack_168 = in_x5[5];
      uStack_150 = in_x5[8];
      uStack_158 = in_x5[7];
      uStack_140 = in_x5[10];
      uStack_148 = in_x5[9];
      uStack_f0 = *(undefined8 *)(in_x4 + 0x124);
      uStack_f8 = *(undefined8 *)(in_x4 + 0x11c);
      uStack_100 = *(undefined8 *)(in_x4 + 0x114);
      iStack_190 = (int)*in_x5;
      uStack_18c = (undefined4)((ulong)*in_x5 >> 0x20);
      uStack_178 = (undefined4)uStack_f0;
      uStack_174 = (undefined4)((ulong)uStack_f0 >> 0x20);
      uStack_180 = (undefined4)uStack_f8;
      uStack_17c = (undefined4)((ulong)uStack_f8 >> 0x20);
      uStack_188 = (undefined4)uStack_100;
      uStack_184 = (undefined4)((ulong)uStack_100 >> 0x20);
      piVar9 = &iStack_190;
      uStack_e8 = uStack_170;
      uStack_e0 = uStack_168;
      uStack_d8 = uStack_160;
      uStack_d0 = uStack_158;
      uStack_c8 = uStack_150;
      uStack_c0 = uStack_148;
      uStack_b8 = uStack_140;
      uStack_b0 = uStack_138;
      uStack_a8 = uStack_130;
      uStack_a0 = uStack_128;
      uStack_98 = uStack_120;
      uStack_90 = uStack_118;
      uStack_88 = uStack_110;
      uStack_80 = uStack_108;
      FUN_1099b30c0();
      piVar11 = piVar5;
      if ((int *)0xffffffffffffff88 < piVar5) goto LAB_1099b26ec;
      *(undefined8 *)(param_1 + 0x56) = *(undefined8 *)(param_1 + 0x52);
      if (*(int *)(in_x4 + 0x128) == 1) {
        lVar12 = 0;
      }
      else {
        lVar12 = 4L << ((ulong)*(uint *)(in_x4 + 0x114) & 0x3f);
      }
      _memcpy(*(undefined8 *)(param_1 + 0xcc),*(undefined8 *)(in_x4 + 0x88),
              4L << ((ulong)*(uint *)(in_x4 + 0x118) & 0x3f));
      _memcpy(*(undefined8 *)(param_1 + 0xd0),*(undefined8 *)(in_x4 + 0x98),lVar12);
      lVar12 = 0;
      if (param_1[0xca] != 0) {
        lVar12 = 4L << ((ulong)(uint)param_1[0xca] & 0x3f);
      }
      _bzero(*(undefined8 *)(param_1 + 0xce),lVar12);
      if (*(ulong *)(param_1 + 0x56) < *(ulong *)(param_1 + 0x54)) {
        *(ulong *)(param_1 + 0x56) = *(ulong *)(param_1 + 0x54);
      }
      uVar16 = *(undefined8 *)(in_x4 + 0x58);
      uVar15 = *(undefined8 *)(in_x4 + 0x70);
      uVar14 = *(undefined8 *)(in_x4 + 0x68);
      *(undefined8 *)(param_1 + 0xc2) = *(undefined8 *)(in_x4 + 0x60);
      *(undefined8 *)(param_1 + 0xc0) = uVar16;
      *(undefined8 *)(param_1 + 0xc6) = uVar15;
      *(undefined8 *)(param_1 + 0xc4) = uVar14;
      *(undefined8 *)(param_1 + 200) = *(undefined8 *)(in_x4 + 0x78);
    }
    else {
      if (iVar4 != 1) goto LAB_1099b25a8;
LAB_1099b25a0:
      if (*(int *)(in_x5 + 6) != 0) goto LAB_1099b25a8;
      uStack_a8 = in_x5[0xc];
      uStack_b0 = in_x5[0xb];
      uStack_98 = in_x5[0xe];
      uStack_a0 = in_x5[0xd];
      uStack_88 = in_x5[0x10];
      uStack_90 = in_x5[0xf];
      uStack_80 = in_x5[0x11];
      uStack_e8 = in_x5[4];
      uStack_f0 = in_x5[3];
      uStack_d8 = in_x5[6];
      uStack_e0 = in_x5[5];
      uStack_c8 = in_x5[8];
      uStack_d0 = in_x5[7];
      uStack_b8 = in_x5[10];
      uStack_c0 = in_x5[9];
      uStack_f8 = in_x5[2];
      uStack_100 = in_x5[1];
      uVar16 = *in_x5;
      uStack_1b0 = *(undefined8 *)(in_x4 + 0x110);
      uStack_1a8 = (undefined4)*(undefined8 *)(in_x4 + 0x118);
      uStack_19c = *(undefined8 *)(in_x4 + 0x124);
      uStack_1a4 = (undefined4)*(undefined8 *)(in_x4 + 0x11c);
      uStack_1a0 = (undefined4)((ulong)*(undefined8 *)(in_x4 + 0x11c) >> 0x20);
      func_0x0001099b149c(&iStack_190,&uStack_1b0,in_x6,0);
      uStack_174 = uStack_178;
      uVar3 = uStack_180;
      uVar2 = uStack_188;
      uVar1 = uStack_18c;
      uStack_f8 = CONCAT44(uStack_180,uStack_184);
      uStack_100 = CONCAT44(uStack_188,uStack_18c);
      uStack_f0 = CONCAT44(uStack_178,uStack_17c);
      iStack_190 = (int)uVar16;
      uStack_18c = (undefined4)((ulong)uVar16 >> 0x20);
      uStack_130 = uStack_a8;
      uStack_138 = uStack_b0;
      uStack_120 = uStack_98;
      uStack_128 = uStack_a0;
      uStack_110 = uStack_88;
      uStack_118 = uStack_90;
      uStack_170 = uStack_e8;
      uStack_178 = uStack_17c;
      uStack_160 = uStack_d8;
      uStack_168 = uStack_e0;
      uStack_150 = uStack_c8;
      uStack_158 = uStack_d0;
      uStack_108 = uStack_80;
      uStack_140 = uStack_b8;
      uStack_148 = uStack_c0;
      uStack_180 = uStack_184;
      uStack_17c = uVar3;
      uStack_188 = uVar1;
      uStack_184 = uVar2;
      piVar9 = &iStack_190;
      FUN_1099b30c0();
      piVar11 = piVar5;
      if ((int *)0xffffffffffffff88 < piVar5) goto LAB_1099b26ec;
      uVar13 = *(long *)(in_x4 + 0x58) - *(long *)(in_x4 + 0x60);
      uVar8 = (uint)uVar13;
      if (*(uint *)(in_x4 + 0x70) != uVar8) {
        *(long *)(param_1 + 0xec) = in_x4 + 0x58;
        uVar10 = param_1[0xc6];
        if ((uint)param_1[0xc6] < uVar8) {
          *(ulong *)(param_1 + 0xc0) = *(long *)(param_1 + 0xc2) + (uVar13 & 0xffffffff);
          param_1[199] = uVar8;
          param_1[0xc6] = uVar8;
          uVar10 = uVar8;
        }
        param_1[200] = uVar10;
      }
    }
    param_1[0x4c] = *(int *)(in_x4 + 0x1338);
    piVar5 = *(int **)(param_1 + 0xbc);
    piVar9 = (int *)(in_x4 + 0x130);
    in_x6 = (int *)0x11f0;
    _memcpy();
  }
LAB_1099b26ec:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return piVar11;
  }
  ___stack_chk_fail();
  piVar11 = piVar5;
  FUN_1099b16e0();
  if ((int *)0xffffffffffffff88 < piVar11) {
    return piVar11;
  }
  iVar4 = *piVar5;
  if (iVar4 == 0) {
    return (int *)0xffffffffffffffc4;
  }
  piVar9 = (int *)((long)piVar9 + (long)piVar11);
  uVar13 = (long)in_x6 - (long)piVar11;
  piVar6 = piVar9;
  if (iVar4 == 3) {
LAB_1099b2904:
    piVar7 = piVar6;
    if (piVar5[0x31] != 0) {
      iVar4 = (int)piVar5 + 0x198;
      func_0x000107c2ae30();
      if (uVar13 < 4) goto LAB_1099b2950;
      piVar7 = piVar6 + 1;
      *piVar6 = iVar4;
    }
    *piVar5 = 0;
    piVar7 = (int *)((long)piVar7 - (long)piVar9);
    if (piVar7 < (int *)0xffffffffffffff89) {
      if ((*(long *)(piVar5 + 0x60) == 0) ||
         (*(long *)(piVar5 + 0x60) == *(long *)(piVar5 + 0x62) + 1)) {
        piVar7 = (int *)((long)piVar7 + (long)piVar11);
      }
      else {
        piVar7 = (int *)0xffffffffffffffb8;
      }
    }
  }
  else {
    if (iVar4 == 1) {
      FUN_1099b3d1c(piVar9,uVar13,piVar5 + 0x28,0,0);
      if ((int *)0xffffffffffffff88 < piVar6) {
        return piVar6;
      }
      uVar13 = uVar13 - (long)piVar6;
      *piVar5 = 2;
      piVar6 = (int *)((long)piVar9 + (long)piVar6);
    }
    if (3 < uVar13) {
      *piVar6 = 1;
      uVar13 = uVar13 - 3;
      piVar6 = (int *)((long)piVar6 + 3);
      goto LAB_1099b2904;
    }
LAB_1099b2950:
    piVar7 = (int *)0xffffffffffffffba;
  }
  return piVar7;
}



/* Entry: 1099b284c; end: 1099b296f;  */

void FUN_1099b284c(int *param_1,long param_2,long param_3)

{
  int iVar1;
  int *piVar2;
  ulong uVar3;
  int *piVar4;
  
  piVar2 = param_1;
  FUN_1099b16e0();
  if ((piVar2 < (int *)0xffffffffffffff89) && (iVar1 = *param_1, iVar1 != 0)) {
    piVar4 = (int *)(param_2 + (long)piVar2);
    uVar3 = param_3 - (long)piVar2;
    if (iVar1 != 3) {
      piVar2 = piVar4;
      if (iVar1 == 1) {
        FUN_1099b3d1c(piVar4,uVar3,param_1 + 0x28,0,0);
        if ((int *)0xffffffffffffff88 < piVar2) {
          return;
        }
        uVar3 = uVar3 - (long)piVar2;
        *param_1 = 2;
        piVar2 = (int *)((long)piVar4 + (long)piVar2);
      }
      if (uVar3 < 4) {
        return;
      }
      piVar4 = (int *)((long)piVar2 + 3);
      *piVar2 = 1;
      uVar3 = uVar3 - 3;
    }
    if (param_1[0x31] != 0) {
      iVar1 = (int)param_1 + 0x198;
      func_0x000107c2ae30();
      if (uVar3 < 4) {
        return;
      }
      *piVar4 = iVar1;
    }
    *param_1 = 0;
  }
  return;
}



/* Entry: 1099b2970; end: 1099b304b;  */

ulong FUN_1099b2970(ulong param_1,long *param_2,long *param_3,int param_4)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 uVar21;
  long lVar22;
  ulong uVar23;
  undefined8 uVar24;
  uint uVar25;
  long lVar26;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined4 uStack_138;
  uint uStack_134;
  uint uStack_130;
  undefined8 uStack_12c;
  undefined4 uStack_124;
  int iStack_120;
  undefined4 auStack_11c [3];
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  int iStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
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
  
  uVar7 = param_2[1];
  uVar23 = param_2[2];
  if (uVar7 < uVar23) {
    return 0xffffffffffffffff;
  }
  uVar11 = param_3[1];
  uVar10 = param_3[2];
  if (uVar11 < uVar10) {
    return 0xffffffffffffffff;
  }
  iVar12 = *(int *)(param_1 + 0x428);
  if (iVar12 != 0) goto LAB_1099b29d0;
  uStack_168 = *(undefined8 *)(param_1 + 0x78);
  uStack_170 = *(undefined8 *)(param_1 + 0x70);
  uStack_158 = *(undefined8 *)(param_1 + 0x88);
  uStack_160 = *(undefined8 *)(param_1 + 0x80);
  uStack_148 = *(undefined8 *)(param_1 + 0x98);
  uStack_150 = *(undefined8 *)(param_1 + 0x90);
  uStack_1a8 = *(undefined8 *)(param_1 + 0x38);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x30);
  uStack_198 = *(undefined8 *)(param_1 + 0x48);
  uStack_1a0 = *(undefined8 *)(param_1 + 0x40);
  uStack_188 = *(undefined8 *)(param_1 + 0x58);
  uStack_190 = *(undefined8 *)(param_1 + 0x50);
  uStack_178 = *(undefined8 *)(param_1 + 0x68);
  uStack_180 = *(undefined8 *)(param_1 + 0x60);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x18);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x10);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x28);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x20);
  uVar19 = *(undefined8 *)(param_1 + 0x460);
  uVar21 = *(undefined8 *)(param_1 + 0x468);
  uVar4 = *(undefined4 *)(param_1 + 0x470);
  lVar26 = *(long *)(param_1 + 0x440);
  FUN_1099b155c(&uStack_138,param_1 + 0x10,0,lVar26);
  lVar22 = *(long *)(param_1 + 0x438);
  if ((lVar22 == 0) || (*(long *)(param_1 + 0x450) != 0)) {
LAB_1099b2c80:
    *(undefined8 *)(param_1 + 0x460) = 0;
    *(undefined8 *)(param_1 + 0x468) = 0;
    *(undefined8 *)(param_1 + 0x470) = 0;
    if (param_4 == 2) {
      lVar22 = param_3[1];
      *(long *)(param_1 + 0x180) = lVar22 + 1;
    }
    else {
      lVar22 = *(long *)(param_1 + 0x180) + -1;
    }
    FUN_1099b155c((ulong)&uStack_1d0 | 4,param_1 + 0x10,lVar22,0);
    uVar24 = *(undefined8 *)(param_1 + 0x458);
    uStack_98 = uStack_168;
    uStack_a0 = uStack_170;
    uStack_88 = uStack_158;
    uStack_90 = uStack_160;
    uStack_78 = uStack_148;
    uStack_80 = uStack_150;
    uStack_d8 = uStack_1a8;
    uStack_e0 = uStack_1b0;
    uStack_c8 = uStack_198;
    uStack_d0 = uStack_1a0;
    uStack_b8 = uStack_188;
    uStack_c0 = uStack_190;
    uStack_a8 = uStack_178;
    uStack_b0 = uStack_180;
    uStack_f8 = (undefined4)uStack_1c8;
    uStack_f4 = (undefined4)((ulong)uStack_1c8 >> 0x20);
    uStack_100 = (undefined4)uStack_1d0;
    uStack_fc = (undefined4)((ulong)uStack_1d0 >> 0x20);
    uStack_e8 = uStack_1b8;
    uStack_f0 = (undefined4)uStack_1c0;
    uStack_ec = (undefined4)((ulong)uStack_1c0 >> 0x20);
    FUN_1099b155c((ulong)&uStack_100 | 4,&uStack_1d0,lVar22,uVar21);
    uVar7 = param_1;
    FUN_1099b2424(param_1,uVar19,uVar21,uVar4,uVar24,&uStack_100,lVar22,1);
    if (uVar7 < 0xffffffffffffff89) {
      *(undefined8 *)(param_1 + 0x3f8) = 0;
      *(undefined8 *)(param_1 + 0x3f0) = 0;
      lVar26 = *(long *)(param_1 + 0x178);
      if (lVar26 == lVar22) {
        lVar26 = lVar26 + 1;
      }
      *(long *)(param_1 + 0x400) = lVar26;
      *(undefined8 *)(param_1 + 0x420) = 0;
      *(undefined8 *)(param_1 + 0x418) = 0;
      *(undefined8 *)(param_1 + 0x428) = 1;
      uVar11 = param_3[1];
      uVar10 = param_3[2];
      uVar7 = param_2[1];
      uVar23 = param_2[2];
      iVar12 = 1;
LAB_1099b29d0:
      lVar18 = *param_3;
      lVar22 = lVar18 + uVar11;
      lVar26 = lVar18 + uVar10;
      lVar17 = *param_2;
      lVar1 = lVar17 + uVar7;
      lVar20 = lVar17 + uVar23;
LAB_1099b29f4:
      while( true ) {
        if (iVar12 == 0) {
          return 0xffffffffffffffc2;
        }
        if (iVar12 != 1) goto code_r0x0001099b2a00;
        lVar13 = lVar22;
        if (param_4 == 2) break;
        lVar14 = *(long *)(param_1 + 0x3f8);
        uVar23 = lVar22 - lVar26;
LAB_1099b2a68:
        uVar7 = *(long *)(param_1 + 0x400) - lVar14;
        if (uVar23 <= uVar7) {
          uVar7 = uVar23;
        }
        if (uVar7 != 0) {
          _memcpy(*(long *)(param_1 + 0x3e0) + lVar14,lVar26,uVar7);
          lVar14 = *(long *)(param_1 + 0x3f8);
        }
        uVar11 = lVar14 + uVar7;
        *(ulong *)(param_1 + 0x3f8) = uVar11;
        lVar26 = lVar26 + uVar7;
        if (param_4 == 1) {
          if (uVar11 != *(ulong *)(param_1 + 0x3f0)) goto LAB_1099b2ac8;
          goto LAB_1099b2df8;
        }
        if ((param_4 == 0) && (uVar11 < *(ulong *)(param_1 + 0x400))) goto LAB_1099b2df8;
LAB_1099b2ac8:
        uVar11 = uVar11 - *(long *)(param_1 + 0x3f0);
        uVar23 = lVar1 - lVar20;
        bVar6 = param_4 == 2 && lVar26 == lVar22;
        uVar7 = 0x20000 - uVar11 >> 0xb;
        if (0x20000 < uVar11 || 0x20000 - uVar11 == 0) {
          uVar7 = 0;
        }
        uVar10 = uVar23;
        lVar14 = lVar20;
        if (uVar23 < uVar11 + (uVar11 >> 8) + uVar7) {
          lVar14 = *(long *)(param_1 + 0x408);
          uVar10 = *(ulong *)(param_1 + 0x410);
        }
        uVar25 = (uint)bVar6;
        uVar7 = param_1;
        if (uVar25 == 0) {
          FUN_1099b16e0(param_1,lVar14,uVar10,
                        *(long *)(param_1 + 0x3e0) + *(long *)(param_1 + 0x3f0),uVar11,0);
        }
        else {
          FUN_1099b284c();
        }
        if (0xffffffffffffff88 < uVar7) {
          return uVar7;
        }
        *(uint *)(param_1 + 0x42c) = uVar25;
        lVar15 = *(long *)(param_1 + 0x3f8);
        uVar11 = *(long *)(param_1 + 0x178) + lVar15;
        *(ulong *)(param_1 + 0x400) = uVar11;
        if (*(ulong *)(param_1 + 1000) < uVar11) {
          lVar15 = 0;
          *(undefined8 *)(param_1 + 0x3f8) = 0;
          *(long *)(param_1 + 0x400) = *(long *)(param_1 + 0x178);
        }
        *(long *)(param_1 + 0x3f0) = lVar15;
        if (lVar14 != lVar20) {
          lVar13 = 0;
          *(ulong *)(param_1 + 0x418) = uVar7;
          *(undefined8 *)(param_1 + 0x420) = 0;
          *(undefined4 *)(param_1 + 0x428) = 2;
          goto LAB_1099b2b90;
        }
        lVar20 = lVar20 + uVar7;
        if (bVar6) goto LAB_1099b2e3c;
        iVar12 = *(int *)(param_1 + 0x428);
      }
      uVar23 = lVar22 - lVar26;
      uVar7 = 0x20000 - uVar23 >> 0xb;
      if (0x20000 < uVar23 || 0x20000 - uVar23 == 0) {
        uVar7 = 0;
      }
      lVar14 = *(long *)(param_1 + 0x3f8);
      if ((ulong)(lVar1 - lVar20) < uVar23 + (uVar23 >> 8) + uVar7 || lVar14 != 0)
      goto LAB_1099b2a68;
      uVar7 = param_1;
      FUN_1099b284c(param_1,lVar20,lVar1 - lVar20,lVar26);
      if (0xffffffffffffff88 < uVar7) {
        return uVar7;
      }
      lVar20 = lVar20 + uVar7;
      *(undefined4 *)(param_1 + 0x42c) = 1;
      goto LAB_1099b2e3c;
    }
  }
  else {
    pcVar3 = *(code **)(param_1 + 0x1f0);
    lVar1 = *(long *)(param_1 + 0x1f8);
    if ((pcVar3 == (code *)0x0) == (lVar1 == 0)) {
      uVar5 = *(undefined4 *)(param_1 + 0x448);
      plVar8 = *(long **)(param_1 + 0x200);
      lVar20 = 0x2b40;
      if (iStack_120 != 1) {
        lVar20 = (4L << ((ulong)uStack_134 & 0x3f)) + 0x2b40;
      }
      plVar2 = (long *)(lVar20 + (4L << ((ulong)uStack_130 & 0x3f)));
      if (pcVar3 == (code *)0x0) {
        plVar9 = plVar2;
        _malloc();
      }
      else {
        plVar9 = plVar8;
        (*pcVar3)(plVar8,plVar2);
      }
      if (plVar9 != (long *)0x0) {
        plVar9[3] = (long)plVar9;
        plVar9[4] = (long)plVar9 + (long)plVar2;
        plVar16 = plVar9 + 0x268;
        plVar9[5] = (long)plVar16;
        plVar9[6] = (long)plVar16;
        plVar9[7] = (long)plVar16;
        plVar9[8] = (long)plVar9 + (long)plVar2;
        plVar9[9] = 0;
        plVar9[10] = 0;
        plVar9[0x264] = (long)pcVar3;
        plVar9[0x265] = lVar1;
        plVar9[0x266] = (long)plVar8;
        *(undefined4 *)((long)plVar9 + 0x133c) = 0;
        auStack_11c[0] = uStack_138;
        uStack_110 = (undefined4)uStack_12c;
        uStack_10c = (undefined4)((ulong)uStack_12c >> 0x20);
        uStack_108 = uStack_124;
        iStack_104 = iStack_120;
        *(undefined4 *)(plVar9 + 0x22) = uStack_138;
        *(uint *)((long)plVar9 + 0x114) = uStack_134;
        *(uint *)(plVar9 + 0x23) = uStack_130;
        *(undefined8 *)((long)plVar9 + 0x11c) = uStack_12c;
        *(undefined4 *)((long)plVar9 + 0x124) = uStack_124;
        *(int *)(plVar9 + 0x25) = iStack_120;
        *plVar9 = lVar22;
        plVar9[1] = lVar26;
        if ((ulong)plVar2 >> 6 < 0xad) {
          plVar16 = (long *)0x0;
          *(undefined4 *)(plVar9 + 9) = 1;
        }
        else {
          plVar8 = plVar9 + 0x568;
          plVar9[5] = (long)plVar8;
          plVar9[6] = (long)plVar8;
          plVar9[7] = (long)plVar8;
        }
        plVar9[2] = (long)plVar16;
        plVar9[0x263] = 0x800000004;
        *(undefined4 *)(plVar9 + 0xa6) = 0;
        plVar9[0x262] = 0x100000000;
        plVar9[0x261] = 0;
        plVar8 = plVar9 + 0xb;
        FUN_1099b3970(plVar8,plVar9 + 3,auStack_11c,0,1,0);
        if (plVar8 < (long *)0xffffffffffffff89) {
          uStack_100 = 0;
          uStack_88 = 0;
          uStack_90 = 0;
          uStack_78 = 0;
          uStack_80 = 0;
          uStack_a8 = 0;
          uStack_b0 = 0;
          uStack_98 = 0;
          uStack_a0 = 0;
          uStack_c8 = 0;
          uStack_d0 = 0;
          uStack_b8 = 0;
          uStack_c0 = 0;
          uStack_d8 = 0x300000000;
          uStack_e0 = 1;
          uStack_fc = auStack_11c[0];
          uStack_e8 = CONCAT44(iStack_104,uStack_108);
          uStack_f0 = uStack_110;
          uStack_ec = uStack_10c;
          plVar8 = plVar9 + 0x26;
          FUN_1099b40b4(plVar8,plVar9 + 0xb,plVar9 + 3,&uStack_100,*plVar9,plVar9[1],uVar5,1,
                        plVar9[2]);
          if (plVar8 < (long *)0xffffffffffffff89) {
            *(int *)(plVar9 + 0x267) = (int)plVar8;
            *(long **)(param_1 + 0x450) = plVar9;
            *(long **)(param_1 + 0x458) = plVar9;
            goto LAB_1099b2c80;
          }
        }
        func_0x000107c2ae38(plVar9);
      }
    }
    *(undefined8 *)(param_1 + 0x450) = 0;
    uVar7 = 0xffffffffffffffc0;
  }
  return uVar7;
code_r0x0001099b2a00:
  if (iVar12 == 2) {
    uVar7 = *(ulong *)(param_1 + 0x418);
    lVar13 = *(long *)(param_1 + 0x420);
    uVar23 = lVar1 - lVar20;
LAB_1099b2b90:
    uVar7 = uVar7 - lVar13;
    uVar11 = uVar23;
    if (uVar7 <= uVar23) {
      uVar11 = uVar7;
    }
    if (uVar11 != 0) {
      _memcpy(lVar20,*(long *)(param_1 + 0x408) + lVar13,uVar11);
      lVar13 = *(long *)(param_1 + 0x420);
    }
    lVar20 = lVar20 + uVar11;
    *(ulong *)(param_1 + 0x420) = lVar13 + uVar11;
    if (uVar23 < uVar7) {
LAB_1099b2df8:
      iVar12 = *(int *)(param_1 + 0x42c);
      param_3[2] = lVar26 - lVar18;
      param_2[2] = lVar20 - lVar17;
      if (iVar12 == 0) {
        uVar7 = *(long *)(param_1 + 0x400) - *(long *)(param_1 + 0x3f8);
        if (uVar7 == 0) {
          uVar7 = *(ulong *)(param_1 + 0x178);
        }
        if (0xffffffffffffff88 < uVar7) {
          return uVar7;
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x418) = 0;
      *(undefined8 *)(param_1 + 0x420) = 0;
      lVar13 = lVar26;
      if (*(int *)(param_1 + 0x42c) == 0) {
        iVar12 = 1;
        *(undefined4 *)(param_1 + 0x428) = 1;
        goto LAB_1099b29f4;
      }
LAB_1099b2e3c:
      *(undefined4 *)(param_1 + 0x428) = 0;
      *(undefined8 *)(param_1 + 0x180) = 0;
      param_3[2] = lVar13 - lVar18;
      param_2[2] = lVar20 - lVar17;
    }
    return *(long *)(param_1 + 0x418) - *(long *)(param_1 + 0x420);
  }
  goto LAB_1099b29f4;
}



/* Entry: 1099b304c; end: 1099b30bf;  */

void FUN_1099b304c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_1099b2970(param_1,param_2,&uStack_38,2);
  return;
}



/* Entry: 1099b30c0; end: 1099b396f;  */

void FUN_1099b30c0(int *param_1,undefined8 *param_2,ulong param_3,undefined4 param_4,int param_5)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  ulong uVar8;
  bool bVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  int *piVar22;
  int *piVar23;
  ulong uVar24;
  uint *puVar25;
  int *piVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uStack_68;
  
  param_1[0x8c] = 1;
  piVar23 = (int *)(param_2 + 0xc);
  if (*piVar23 != 0) {
    FUN_1099cd0f8(piVar23,(long)param_2 + 4);
    uVar16 = *(int *)((long)param_2 + 0x6c) - 1;
    if (uVar16 == 0) {
      lVar11 = 1;
    }
    else {
      lVar18 = -0x30e44323485a9b9d;
      lVar11 = 1;
      uVar12 = (ulong)uVar16;
      do {
        lVar14 = lVar18;
        if ((uVar12 & 1) == 0) {
          lVar14 = 1;
        }
        lVar11 = lVar14 * lVar11;
        lVar18 = lVar18 * lVar18;
        bVar9 = 1 < uVar12;
        uVar12 = uVar12 >> 1;
      } while (bVar9);
    }
    *(long *)(param_1 + 0xae) = lVar11;
  }
  puVar25 = (uint *)((long)param_2 + 4);
  uVar16 = *puVar25;
  uVar12 = 1L << ((ulong)uVar16 & 0x3f);
  if (param_3 <= uVar12) {
    uVar12 = param_3;
  }
  if (param_3 == 0) {
    uVar12 = 1;
  }
  uVar20 = uVar12;
  if (0x1ffff < uVar12) {
    uVar20 = 0x20000;
  }
  uVar10 = 3;
  if (*(int *)((long)param_2 + 0x14) != 3) {
    uVar10 = 4;
  }
  uVar6 = 0;
  if (uVar10 != 0) {
    uVar6 = (uint)uVar20 / uVar10;
  }
  uVar24 = (ulong)uVar6;
  if (param_5 == 0) {
    lVar11 = 0;
  }
  else {
    uVar13 = 0x20000 - uVar20 >> 0xb;
    if (0x1ffff < uVar12) {
      uVar13 = 0;
    }
    lVar11 = uVar20 + (uVar20 >> 8) + uVar13 + 1;
  }
  lVar14 = 0;
  lVar18 = 0;
  if (param_5 != 0) {
    lVar18 = uVar20 + uVar12;
  }
  uVar10 = *(uint *)((long)param_2 + 0x1c);
  if (uVar10 != 1) {
    lVar14 = 4L << ((ulong)*(uint *)(param_2 + 1) & 0x3f);
  }
  lVar21 = 0x24608;
  uVar6 = *(uint *)((long)param_2 + 0xc);
  if (*(int *)((long)param_2 + 0x14) == 3) {
    if (uVar10 < 7) {
      lVar21 = 0;
    }
    lVar2 = 0;
    if (uVar16 != 0) {
      lVar2 = 4L << ((ulong)uVar16 & 0x3f);
    }
    lVar17 = 0x80000;
    if (uVar16 < 0x12) {
      lVar17 = lVar2;
    }
  }
  else {
    lVar17 = 0;
    if (uVar10 < 7) {
      lVar21 = 0;
    }
  }
  if (*(int *)(param_2 + 0xc) == 0) {
    uVar12 = 0;
  }
  else {
    uVar16 = 0;
    if (*(uint *)((long)param_2 + 0x6c) != 0) {
      uVar16 = (uint)uVar20 / *(uint *)((long)param_2 + 0x6c);
    }
    uVar12 = (ulong)uVar16;
  }
  piVar1 = param_1 + 0x4e;
  bVar9 = 0xdf000000 < (ulong)(*(long *)(param_1 + 0xc0) - *(long *)(param_1 + 0xc2));
  iVar5 = param_1[0x5b];
  param_1[0x5b] = iVar5 + 1;
  uVar10 = *(uint *)((long)param_2 + 100);
  uVar16 = *(uint *)(param_2 + 0xd);
  if (uVar10 <= *(uint *)(param_2 + 0xd)) {
    uVar16 = uVar10;
  }
  lVar2 = 0;
  if (*(int *)(param_2 + 0xc) != 0) {
    lVar2 = (1L << ((ulong)uVar10 - (ulong)uVar16 & 0x3f)) + (8L << ((ulong)uVar10 & 0x3f));
  }
  lVar3 = 0x3be0;
  if (*(long *)(param_1 + 0x82) != 0) {
    lVar3 = 0x4058;
  }
  uVar13 = uVar24 * 0xb +
           uVar20 + lVar18 + lVar11 + lVar14 + (4L << ((ulong)uVar6 & 0x3f)) + lVar21 + lVar17 +
           uVar12 * 0xc + lVar3 + lVar2 + 0x20;
  lVar14 = *(long *)(param_1 + 0x4e);
  uVar15 = *(ulong *)(param_1 + 0x50);
  if (uVar15 - lVar14 < uVar13 ||
      uVar13 * 3 <= (ulong)(*(long *)(param_1 + 0x58) - *(long *)(param_1 + 0x54)) && 0x7f < iVar5)
  {
    if (*(long *)(param_1 + 0x82) != 0) {
      return;
    }
    pcVar4 = *(code **)(param_1 + 0x7e);
    uVar27 = *(undefined8 *)(param_1 + 0x80);
    param_1[0x50] = 0;
    param_1[0x51] = 0;
    piVar1[0] = 0;
    piVar1[1] = 0;
    param_1[0x54] = 0;
    param_1[0x55] = 0;
    param_1[0x52] = 0;
    param_1[0x53] = 0;
    param_1[0x58] = 0;
    param_1[0x59] = 0;
    param_1[0x56] = 0;
    param_1[0x57] = 0;
    param_1[0x5c] = 0;
    param_1[0x5d] = 0;
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    if (lVar14 != 0) {
      if (pcVar4 == (code *)0x0) {
        _free(lVar14);
      }
      else {
        (*pcVar4)(uVar27);
      }
    }
    if (*(code **)(param_1 + 0x7c) == (code *)0x0) {
      uVar8 = uVar13;
      _malloc();
    }
    else {
      uVar8 = *(ulong *)(param_1 + 0x80);
      (**(code **)(param_1 + 0x7c))(uVar8,uVar13);
    }
    if (uVar8 == 0) {
      return;
    }
    uVar15 = uVar8 + uVar13;
    *(ulong *)(param_1 + 0x4e) = uVar8;
    *(ulong *)(param_1 + 0x50) = uVar15;
    param_1[0x5c] = 0;
    *(ulong *)(param_1 + 0x52) = uVar8;
    *(ulong *)(param_1 + 0x54) = uVar8;
    *(ulong *)(param_1 + 0x56) = uVar8;
    *(ulong *)(param_1 + 0x58) = uVar15;
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    if ((long)uVar13 < 0x11f0) {
      param_1[0x5a] = 1;
      param_1[0xbc] = 0;
      param_1[0xbd] = 0;
      return;
    }
    lVar14 = uVar8 + 0x11f0;
    *(long *)(param_1 + 0x52) = lVar14;
    *(long *)(param_1 + 0x54) = lVar14;
    *(long *)(param_1 + 0x56) = lVar14;
    *(ulong *)(param_1 + 0xbc) = uVar8;
    if (uVar13 >> 5 < 0x11f) {
      param_1[0x5a] = 1;
      param_1[0xbe] = 0;
      param_1[0xbf] = 0;
      return;
    }
    uVar19 = uVar8 + 0x23e0;
    *(ulong *)(param_1 + 0x52) = uVar19;
    *(ulong *)(param_1 + 0x56) = uVar19;
    *(long *)(param_1 + 0xbe) = lVar14;
    if (uVar13 >> 5 < 0x1df) {
      uVar8 = uVar19;
      uVar19 = 0;
    }
    else {
      uVar8 = uVar8 + 0x3be0;
      *(ulong *)(param_1 + 0x52) = uVar8;
      *(ulong *)(param_1 + 0x56) = uVar8;
    }
    *(ulong *)(param_1 + 0xf6) = uVar19;
    *(ulong *)(param_1 + 0x54) = uVar8;
    *(ulong *)(param_1 + 0x58) = uVar15;
    bVar9 = true;
    param_1[0x5a] = 0;
  }
  else {
    uVar8 = *(ulong *)(param_1 + 0x52);
    *(ulong *)(param_1 + 0x54) = uVar8;
    *(ulong *)(param_1 + 0x58) = uVar15;
    param_1[0x5a] = 0;
    if (1 < (uint)param_1[0x5c]) {
      param_1[0x5c] = 1;
    }
  }
  piVar26 = param_1 + 0x5a;
  piVar22 = param_1 + 0x5c;
  uVar27 = *param_2;
  *(undefined8 *)(param_1 + 0x2a) = param_2[1];
  *(undefined8 *)(param_1 + 0x28) = uVar27;
  uVar28 = param_2[3];
  uVar27 = param_2[2];
  uVar30 = param_2[5];
  uVar29 = param_2[4];
  uVar31 = param_2[6];
  uVar33 = param_2[9];
  uVar32 = param_2[8];
  *(undefined8 *)(param_1 + 0x36) = param_2[7];
  *(undefined8 *)(param_1 + 0x34) = uVar31;
  *(undefined8 *)(param_1 + 0x3a) = uVar33;
  *(undefined8 *)(param_1 + 0x38) = uVar32;
  *(undefined8 *)(param_1 + 0x2e) = uVar28;
  *(undefined8 *)(param_1 + 0x2c) = uVar27;
  *(undefined8 *)(param_1 + 0x32) = uVar30;
  *(undefined8 *)(param_1 + 0x30) = uVar29;
  uVar28 = param_2[0xb];
  uVar27 = param_2[10];
  uVar30 = param_2[0xd];
  uVar29 = param_2[0xc];
  uVar31 = param_2[0xe];
  uVar33 = param_2[0x11];
  uVar32 = param_2[0x10];
  *(undefined8 *)(param_1 + 0x46) = param_2[0xf];
  *(undefined8 *)(param_1 + 0x44) = uVar31;
  *(undefined8 *)(param_1 + 0x4a) = uVar33;
  *(undefined8 *)(param_1 + 0x48) = uVar32;
  *(undefined8 *)(param_1 + 0x3e) = uVar28;
  *(undefined8 *)(param_1 + 0x3c) = uVar27;
  *(undefined8 *)(param_1 + 0x42) = uVar30;
  *(undefined8 *)(param_1 + 0x40) = uVar29;
  uVar28 = *(undefined8 *)((long)param_2 + 0xc);
  uVar27 = *(undefined8 *)puVar25;
  uVar29 = param_2[2];
  *(undefined8 *)(param_1 + 0xf3) = param_2[3];
  *(undefined8 *)(param_1 + 0xf1) = uVar29;
  *(undefined8 *)(param_1 + 0xf0) = uVar28;
  *(undefined8 *)(param_1 + 0xee) = uVar27;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  *(ulong *)(param_1 + 0x60) = param_3 + 1;
  if (param_3 == 0xffffffffffffffff) {
    param_1[0x30] = 0;
  }
  *(ulong *)(param_1 + 0x5e) = uVar20;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x6a] = 0x27d4eb4f;
  param_1[0x6b] = -0x3d4d51c3;
  param_1[0x68] = -0x523f4a2a;
  param_1[0x69] = 0x60ea27ee;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0x7a143579;
  param_1[0x6f] = 0x61c8864e;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  *(undefined8 *)(param_1 + 0x7a) = uStack_68;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  *param_1 = 1;
  param_1[0x4c] = 0;
  lVar14 = *(long *)(param_1 + 0xbc);
  *(undefined8 *)(lVar14 + 0x11e8) = 0x800000004;
  *(undefined4 *)(lVar14 + 0x400) = 0;
  *(undefined8 *)(lVar14 + 0x11e0) = 0x100000000;
  *(undefined8 *)(lVar14 + 0x11d8) = 0;
  if (param_1[0x5c] == 0) {
    *(ulong *)(param_1 + 0x56) = uVar8;
    param_1[0x5c] = 1;
  }
  uVar13 = (uVar15 - uVar20) - 0x20;
  if (uVar13 < uVar8) {
    *piVar26 = 1;
    uVar13 = uVar15;
    uVar15 = 0;
  }
  else {
    if (uVar13 < *(ulong *)(param_1 + 0x56)) {
      *(ulong *)(param_1 + 0x56) = uVar13;
    }
    *(ulong *)(param_1 + 0x58) = uVar13;
    uVar15 = uVar13;
  }
  *(ulong *)(param_1 + 0x92) = uVar15;
  *(ulong *)(param_1 + 0x9e) = uVar20;
  *(long *)(param_1 + 0xfa) = lVar18;
  uVar20 = uVar13 - lVar18;
  if (uVar20 < uVar8) {
    uVar20 = 0;
    *piVar26 = 1;
  }
  else {
    if (uVar20 < *(ulong *)(param_1 + 0x56)) {
      *(ulong *)(param_1 + 0x56) = uVar20;
    }
    *(ulong *)(param_1 + 0x58) = uVar20;
    uVar13 = uVar20;
  }
  *(ulong *)(param_1 + 0xf8) = uVar20;
  *(long *)(param_1 + 0x104) = lVar11;
  uVar20 = uVar13 - lVar11;
  if (uVar20 < uVar8) {
    *piVar26 = 1;
    uVar20 = uVar13;
    uVar13 = 0;
  }
  else {
    if (uVar20 < *(ulong *)(param_1 + 0x56)) {
      *(ulong *)(param_1 + 0x56) = uVar20;
    }
    *(ulong *)(param_1 + 0x58) = uVar20;
    uVar13 = uVar20;
  }
  *(ulong *)(param_1 + 0x102) = uVar13;
  if (*piVar23 != 0) {
    uVar20 = uVar20 - (1L << ((ulong)(uint)(*(int *)((long)param_2 + 100) - *(int *)(param_2 + 0xd))
                             & 0x3f));
    if (uVar20 < *(ulong *)(param_1 + 0x56)) {
      *(ulong *)(param_1 + 0x56) = uVar20;
    }
    *(ulong *)(param_1 + 0x58) = uVar20;
    *(ulong *)(param_1 + 0xac) = uVar20;
    _bzero();
  }
  if ((*param_1 == 1) && (param_1[0x40] == 0)) {
    param_1[0xb6] = 0;
    param_1[0xb7] = 0;
    param_1[0xb4] = 0;
    param_1[0xb5] = 0;
    param_1[0xba] = 0;
    param_1[0xbb] = 0;
    param_1[0xb8] = 0;
    param_1[0xb9] = 0;
  }
  *(ulong *)(param_1 + 0x9c) = uVar24;
  uVar20 = *(ulong *)(param_1 + 0x54);
  uVar16 = param_1[0x5c];
  if (uVar16 == 0) {
    *(undefined8 *)(param_1 + 0x56) = *(undefined8 *)(param_1 + 0x52);
    uVar16 = 1;
    param_1[0x5c] = 1;
  }
  uVar13 = *(ulong *)(param_1 + 0x58) - uVar24;
  if (uVar13 < uVar20) {
    *piVar26 = 1;
    uVar13 = *(ulong *)(param_1 + 0x58);
    uVar15 = 0;
  }
  else {
    if (uVar13 < *(ulong *)(param_1 + 0x56)) {
      *(ulong *)(param_1 + 0x56) = uVar13;
    }
    *(ulong *)(param_1 + 0x58) = uVar13;
    uVar15 = uVar13;
  }
  *(ulong *)(param_1 + 0x96) = uVar15;
  uVar15 = uVar13 + -uVar24;
  if (uVar15 < uVar20) {
    *piVar26 = 1;
    uVar15 = uVar13;
    uVar13 = 0;
  }
  else {
    if (uVar15 < *(ulong *)(param_1 + 0x56)) {
      *(ulong *)(param_1 + 0x56) = uVar15;
    }
    *(ulong *)(param_1 + 0x58) = uVar15;
    uVar13 = uVar15;
  }
  *(ulong *)(param_1 + 0x98) = uVar13;
  uVar13 = uVar15 + -uVar24;
  if (uVar13 < uVar20) {
    *piVar26 = 1;
    uVar13 = uVar15;
    uVar15 = 0;
  }
  else {
    if (uVar13 < *(ulong *)(param_1 + 0x56)) {
      *(ulong *)(param_1 + 0x56) = uVar13;
    }
    *(ulong *)(param_1 + 0x58) = uVar13;
    uVar15 = uVar13;
  }
  *(ulong *)(param_1 + 0x9a) = uVar15;
  if (uVar16 < 2) {
    uVar13 = uVar13 & 0xfffffffffffffffc;
    *(ulong *)(param_1 + 0x58) = uVar13;
    if (uVar13 < *(ulong *)(param_1 + 0x56)) {
      *(ulong *)(param_1 + 0x56) = uVar13;
    }
    *piVar22 = 2;
  }
  uVar13 = uVar13 + uVar24 * -8;
  if (uVar13 < uVar20) {
    uVar13 = 0;
    *piVar26 = 1;
  }
  else {
    if (uVar13 < *(ulong *)(param_1 + 0x56)) {
      *(ulong *)(param_1 + 0x56) = uVar13;
    }
    *(ulong *)(param_1 + 0x58) = uVar13;
  }
  *(ulong *)(param_1 + 0x8e) = uVar13;
  piVar7 = param_1 + 0xc0;
  FUN_1099b3970(piVar7,piVar1,puVar25,param_4,bVar9,1);
  if ((piVar7 < (int *)0xffffffffffffff89) && (*piVar23 != 0)) {
    uVar16 = *(uint *)((long)param_2 + 100);
    if ((uint)param_1[0x5c] < 2) {
      if (param_1[0x5c] == 0) {
        uVar24 = *(ulong *)(param_1 + 0x52);
        *(ulong *)(param_1 + 0x56) = uVar24;
      }
      else {
        uVar24 = *(ulong *)(param_1 + 0x56);
      }
      uVar20 = *(ulong *)(param_1 + 0x58) & 0xfffffffffffffffc;
      *(ulong *)(param_1 + 0x58) = uVar20;
      if (uVar20 < uVar24) {
        *(ulong *)(param_1 + 0x56) = uVar20;
      }
      *piVar22 = 2;
    }
    else {
      uVar20 = *(ulong *)(param_1 + 0x58);
    }
    uVar20 = uVar20 - (8L << ((ulong)uVar16 & 0x3f));
    if (uVar20 < *(ulong *)(param_1 + 0x54)) {
      uVar20 = 0;
      *piVar26 = 1;
    }
    else {
      if (uVar20 < *(ulong *)(param_1 + 0x56)) {
        *(ulong *)(param_1 + 0x56) = uVar20;
      }
      *(ulong *)(param_1 + 0x58) = uVar20;
    }
    *(ulong *)(param_1 + 0xaa) = uVar20;
    _bzero();
    if ((uint)param_1[0x5c] < 2) {
      if (param_1[0x5c] == 0) {
        uVar24 = *(ulong *)(param_1 + 0x52);
        *(ulong *)(param_1 + 0x56) = uVar24;
      }
      else {
        uVar24 = *(ulong *)(param_1 + 0x56);
      }
      uVar20 = *(ulong *)(param_1 + 0x58) & 0xfffffffffffffffc;
      *(ulong *)(param_1 + 0x58) = uVar20;
      if (uVar20 < uVar24) {
        *(ulong *)(param_1 + 0x56) = uVar20;
      }
      *piVar22 = 2;
    }
    else {
      uVar20 = *(ulong *)(param_1 + 0x58);
    }
    uVar20 = uVar20 + uVar12 * -0xc;
    if (uVar20 < *(ulong *)(param_1 + 0x54)) {
      uVar20 = 0;
      *piVar26 = 1;
    }
    else {
      if (uVar20 < *(ulong *)(param_1 + 0x56)) {
        *(ulong *)(param_1 + 0x56) = uVar20;
      }
      *(ulong *)(param_1 + 0x58) = uVar20;
    }
    *(ulong *)(param_1 + 0xb0) = uVar20;
    *(ulong *)(param_1 + 0xb2) = uVar12;
    param_1[0xa4] = 0;
    param_1[0xa5] = 0;
    param_1[0xa2] = 0;
    param_1[0xa3] = 0;
    param_1[0xa8] = 0;
    param_1[0xa9] = 0;
    param_1[0xa6] = 0;
    param_1[0xa7] = 0;
    param_1[0xa9] = -param_1[0xa4];
    param_1[0xa8] = -param_1[0xa4];
  }
  return;
}



/* Entry: 1099b3970; end: 1099b3d1b;  */

undefined8
FUN_1099b3970(long *param_1,long param_2,uint *param_3,int param_4,int param_5,int param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  
  if (param_3[6] == 1) {
    lVar4 = 0;
  }
  else {
    lVar4 = 4L << ((ulong)param_3[1] & 0x3f);
  }
  uVar1 = param_3[2];
  if ((param_6 == 0) || (param_3[4] != 3)) {
    uVar5 = 0;
  }
  else {
    uVar2 = *param_3;
    if (0x10 < uVar2) {
      uVar2 = 0x11;
    }
    uVar5 = (ulong)uVar2;
  }
  if (param_5 == 0) {
    lVar12 = *param_1;
    lVar8 = param_1[1];
    uVar7 = *(ulong *)(param_2 + 0x10);
  }
  else {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    lVar8 = param_1[1];
    lVar12 = lVar8 + 1;
    *param_1 = lVar12;
    uVar7 = *(ulong *)(param_2 + 0x10);
    *(ulong *)(param_2 + 0x20) = uVar7;
  }
  iVar3 = (int)lVar12 - (int)lVar8;
  *(int *)(param_1 + 3) = iVar3;
  *(int *)((long)param_1 + 0x1c) = iVar3;
  *(int *)((long)param_1 + 0x24) = iVar3;
  *(int *)(param_1 + 5) = (int)uVar5;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((long)param_1 + 0x7c) = 0;
  param_1[0x16] = 0;
  *(ulong *)(param_2 + 0x18) = uVar7;
  uVar6 = uVar7 + (4L << ((ulong)uVar1 & 0x3f));
  uVar10 = *(ulong *)(param_2 + 0x28);
  uVar9 = uVar10;
  if (*(uint *)(param_2 + 0x38) < 2) {
    if (*(uint *)(param_2 + 0x38) == 0) {
      *(ulong *)(param_2 + 0x20) = uVar7;
      uVar11 = uVar7;
    }
    else {
      uVar11 = *(ulong *)(param_2 + 0x20);
    }
    uVar9 = uVar10 & 0xfffffffffffffffc;
    *(ulong *)(param_2 + 0x28) = uVar9;
    if (uVar9 < uVar11) {
      *(ulong *)(param_2 + 0x20) = uVar9;
    }
    *(undefined4 *)(param_2 + 0x38) = 2;
  }
  if (uVar10 < uVar6) {
    *(undefined4 *)(param_2 + 0x30) = 1;
    uVar10 = 0;
    uVar6 = uVar7;
  }
  else {
    *(ulong *)(param_2 + 0x18) = uVar6;
    uVar10 = uVar7;
  }
  param_1[6] = uVar10;
  uVar7 = uVar6 + lVar4;
  if (uVar9 < uVar7) {
    *(undefined4 *)(param_2 + 0x30) = 1;
    uVar7 = uVar6;
    uVar6 = 0;
  }
  else {
    *(ulong *)(param_2 + 0x18) = uVar7;
  }
  param_1[8] = uVar6;
  lVar4 = 0;
  if ((int)uVar5 != 0) {
    lVar4 = 4L << (uVar5 & 0x3f);
  }
  uVar5 = uVar7 + lVar4;
  if (uVar9 < uVar5) {
    *(undefined4 *)(param_2 + 0x30) = 1;
    param_1[7] = 0;
  }
  else {
    *(ulong *)(param_2 + 0x18) = uVar5;
    iVar3 = *(int *)(param_2 + 0x30);
    param_1[7] = uVar7;
    if (iVar3 == 0) {
      if (param_4 == 0) {
        uVar7 = *(ulong *)(param_2 + 0x20);
        if (uVar7 < uVar5) {
          _bzero(uVar7,uVar5 - uVar7);
          uVar5 = *(ulong *)(param_2 + 0x18);
          uVar7 = *(ulong *)(param_2 + 0x20);
        }
        if (uVar7 < uVar5) {
          *(ulong *)(param_2 + 0x20) = uVar5;
        }
      }
      if ((param_6 != 0) && (6 < param_3[6])) {
        if (*(uint *)(param_2 + 0x38) < 2) {
          if (*(uint *)(param_2 + 0x38) == 0) {
            uVar6 = *(ulong *)(param_2 + 0x10);
            *(ulong *)(param_2 + 0x20) = uVar6;
          }
          else {
            uVar6 = *(ulong *)(param_2 + 0x20);
          }
          uVar7 = *(ulong *)(param_2 + 0x28) & 0xfffffffffffffffc;
          *(ulong *)(param_2 + 0x28) = uVar7;
          if (uVar7 < uVar6) {
            *(ulong *)(param_2 + 0x20) = uVar7;
          }
          *(undefined4 *)(param_2 + 0x38) = 2;
        }
        else {
          uVar7 = *(ulong *)(param_2 + 0x28);
        }
        uVar6 = uVar7 - 0x400;
        if (uVar6 < uVar5) {
          *(undefined4 *)(param_2 + 0x30) = 1;
          uVar6 = uVar7;
          uVar7 = 0;
        }
        else {
          if (uVar6 < *(ulong *)(param_2 + 0x20)) {
            *(ulong *)(param_2 + 0x20) = uVar6;
          }
          *(ulong *)(param_2 + 0x28) = uVar6;
          uVar7 = uVar6;
        }
        param_1[9] = uVar7;
        uVar7 = uVar6 - 0x90;
        if (uVar7 < uVar5) {
          *(undefined4 *)(param_2 + 0x30) = 1;
          uVar7 = uVar6;
          uVar6 = 0;
        }
        else {
          if (uVar7 < *(ulong *)(param_2 + 0x20)) {
            *(ulong *)(param_2 + 0x20) = uVar7;
          }
          *(ulong *)(param_2 + 0x28) = uVar7;
          uVar6 = uVar7;
        }
        param_1[10] = uVar6;
        uVar6 = uVar7 - 0xd4;
        if (uVar6 < uVar5) {
          uVar6 = 0;
          *(undefined4 *)(param_2 + 0x30) = 1;
        }
        else {
          if (uVar6 < *(ulong *)(param_2 + 0x20)) {
            *(ulong *)(param_2 + 0x20) = uVar6;
          }
          *(ulong *)(param_2 + 0x28) = uVar6;
          uVar7 = uVar6;
        }
        param_1[0xb] = uVar6;
        uVar6 = uVar7 - 0x80;
        if (uVar6 < uVar5) {
          *(undefined4 *)(param_2 + 0x30) = 1;
          uVar6 = uVar7;
          uVar7 = 0;
        }
        else {
          if (uVar6 < *(ulong *)(param_2 + 0x20)) {
            *(ulong *)(param_2 + 0x20) = uVar6;
          }
          *(ulong *)(param_2 + 0x28) = uVar6;
          uVar7 = uVar6;
        }
        param_1[0xc] = uVar7;
        uVar7 = uVar6 - 0x8008;
        if (uVar7 < uVar5) {
          *(undefined4 *)(param_2 + 0x30) = 1;
          uVar7 = uVar6;
          uVar6 = 0;
        }
        else {
          if (uVar7 < *(ulong *)(param_2 + 0x20)) {
            *(ulong *)(param_2 + 0x20) = uVar7;
          }
          *(ulong *)(param_2 + 0x28) = uVar7;
          uVar6 = uVar7;
        }
        param_1[0xd] = uVar6;
        uVar7 = uVar7 - 0x1c01c;
        if (uVar7 < uVar5) {
          uVar7 = 0;
          *(undefined4 *)(param_2 + 0x30) = 1;
        }
        else {
          if (uVar7 < *(ulong *)(param_2 + 0x20)) {
            *(ulong *)(param_2 + 0x20) = uVar7;
          }
          *(ulong *)(param_2 + 0x28) = uVar7;
        }
        param_1[0xe] = uVar7;
      }
      lVar12 = *(long *)(param_3 + 2);
      lVar4 = *(long *)param_3;
      uVar13 = *(undefined8 *)(param_3 + 3);
      *(undefined8 *)((long)param_1 + 0xcc) = *(undefined8 *)(param_3 + 5);
      *(undefined8 *)((long)param_1 + 0xc4) = uVar13;
      param_1[0x18] = lVar12;
      param_1[0x17] = lVar4;
      if (*(int *)(param_2 + 0x30) != 0) {
        return 0xffffffffffffffc0;
      }
      return 0;
    }
  }
  return 0xffffffffffffffc0;
}



/* Entry: 1099b3d1c; end: 1099b40b3;  */

ulong FUN_1099b3d1c(undefined4 *param_1,ulong param_2,int *param_3,ulong param_4,uint param_5)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  ulong uVar6;
  ulong uVar7;
  byte bVar8;
  ulong uVar9;
  
  cVar1 = 0xff < param_5;
  if (param_5 != 0) {
    cVar1 = cVar1 + '\x01';
  }
  if ((param_5 & 0xffff0000) != 0) {
    cVar1 = cVar1 + '\x01';
  }
  if (param_3[10] != 0) {
    cVar1 = '\0';
  }
  uVar3 = param_3[1];
  uVar6 = 1L << ((ulong)uVar3 & 0x3f);
  bVar4 = param_3[8] != 0;
  cVar5 = 0x100 < param_4 >> 8;
  if (0xff < param_4) {
    cVar5 = cVar5 + '\x01';
  }
  if (0xfffffffe < param_4) {
    cVar5 = cVar5 + '\x01';
  }
  cVar2 = '\0';
  if (param_3[8] != 0) {
    cVar2 = cVar5;
  }
  cVar5 = '\x04';
  if (param_3[9] < 1) {
    cVar5 = '\0';
  }
  bVar8 = 0x20;
  if (!bVar4 || uVar6 < param_4) {
    bVar8 = 0;
  }
  if (param_2 < 0x12) {
    uVar7 = 0xffffffffffffffba;
  }
  else {
    if (*param_3 == 0) {
      *param_1 = 0xfd2fb528;
      uVar9 = 4;
    }
    else {
      uVar9 = 0;
    }
    uVar7 = uVar9 | 1;
    *(byte *)((long)param_1 + uVar9) = bVar8 | cVar5 + cVar1 | cVar2 << 6;
    if (!bVar4 || uVar6 < param_4) {
      *(char *)((long)param_1 + uVar7) = (char)uVar3 * '\b' + -0x50;
      uVar7 = uVar9 | 2;
    }
    if (cVar1 == '\x03') {
      *(uint *)((long)param_1 + uVar7) = param_5;
      uVar7 = uVar7 + 4;
    }
    else if (cVar1 == '\x02') {
      *(short *)((long)param_1 + uVar7) = (short)param_5;
      uVar7 = uVar7 + 2;
    }
    else if (cVar1 == '\x01') {
      *(char *)((long)param_1 + uVar7) = (char)param_5;
      uVar7 = uVar7 + 1;
    }
    if (cVar2 == '\x01') {
      *(short *)((long)param_1 + uVar7) = (short)param_4 + -0x100;
      uVar7 = uVar7 + 2;
    }
    else if (cVar2 == '\x02') {
      *(int *)((long)param_1 + uVar7) = (int)param_4;
      uVar7 = uVar7 + 4;
    }
    else if (cVar2 == '\x03') {
      *(ulong *)((long)param_1 + uVar7) = param_4;
      uVar7 = uVar7 + 8;
    }
    else if (bVar4 && param_4 <= uVar6) {
      *(char *)((long)param_1 + uVar7) = (char)param_4;
      uVar7 = uVar7 + 1;
    }
  }
  return uVar7;
}



/* Entry: 1099b40b4; end: 1099b4473;  */

ulong * FUN_1099b40b4(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4,ulong *param_5,
                     ulong *param_6,int param_7,ulong *param_8,ulong *param_9)

{
  ulong *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  ulong uVar16;
  ulong uVar17;
  ulong *puVar18;
  uint uStack_128;
  uint uStack_124;
  uint uStack_120;
  ulong auStack_11c [13];
  ulong auStack_b0 [8];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((param_5 == (ulong *)0x0) || (param_6 < (ulong *)0x8)) {
    puVar18 = (ulong *)0xffffffffffffffe0;
    if (param_7 != 2) {
      puVar18 = (ulong *)0x0;
    }
    goto LAB_1099b42ac;
  }
  param_1[0x23d] = 0x800000004;
  *(undefined4 *)(param_1 + 0x80) = 0;
  param_1[0x23c] = 0x100000000;
  param_1[0x23b] = 0;
  if (param_7 == 1) {
LAB_1099b4130:
    FUN_1099b4474(param_2,param_3);
    puVar18 = (ulong *)0x0;
    param_1 = param_2;
    param_2 = param_3;
    param_3 = param_4;
    param_4 = param_5;
    param_5 = param_6;
    param_6 = param_8;
  }
  else {
    if ((int)*param_5 != -0x13cf5bc9) {
      if (param_7 == 2) {
        puVar18 = (ulong *)0xffffffffffffffe0;
        goto LAB_1099b42ac;
      }
      if (param_7 == 0) goto LAB_1099b4130;
    }
    uStack_120 = 0x1f;
    if ((int)param_4[5] == 0) {
      puVar18 = (ulong *)(ulong)*(uint *)((long)param_5 + 4);
    }
    else {
      puVar18 = (ulong *)0x0;
    }
    auStack_11c[0]._0_4_ = 0xff;
    puVar7 = auStack_11c;
    puVar4 = param_1;
    puVar8 = param_5 + 1;
    puVar9 = param_6 + -1;
    puVar10 = param_5;
    puVar11 = param_6;
    FUN_1099b01ec(param_1,puVar7);
    puVar6 = puVar4;
    if (puVar4 < (ulong *)0xffffffffffffff89 && 0xfe < (uint)auStack_11c[0]) {
      puVar1 = (ulong *)((long)(param_5 + 1) + (long)puVar4);
      puVar10 = (ulong *)((long)param_6 + (-8 - (long)puVar4));
      puVar5 = auStack_b0;
      puVar7 = (ulong *)&uStack_120;
      puVar8 = auStack_11c;
      puVar9 = puVar1;
      func_0x000107c2ae24(puVar5,puVar7);
      puVar6 = puVar5;
      if ((puVar5 < (ulong *)0xffffffffffffff89) &&
         (puVar9 = (ulong *)(ulong)(uint)auStack_11c[0], (uint)auStack_11c[0] < 9)) {
        puVar6 = (ulong *)((long)param_1 + 0x404);
        puVar7 = auStack_b0;
        puVar8 = (ulong *)0x1f;
        puVar11 = (ulong *)0x1800;
        puVar10 = param_9;
        FUN_1099af024(puVar6,puVar7);
        puVar1 = (ulong *)((long)puVar1 + (long)puVar5);
        puVar9 = puVar1;
        if (puVar6 < (ulong *)0xffffffffffffff89) {
          uStack_124 = 0x34;
          puVar10 = (ulong *)((long)(param_6 + -1) - ((long)puVar4 + (long)puVar5));
          puVar4 = auStack_11c;
          puVar7 = (ulong *)&uStack_124;
          puVar8 = (ulong *)&uStack_128;
          func_0x000107c2ae24(puVar4,puVar7);
          puVar6 = puVar4;
          if (((puVar4 < (ulong *)0xffffffffffffff89) &&
              (puVar9 = (ulong *)(ulong)uStack_128, uStack_128 < 10)) &&
             (puVar8 = (ulong *)(ulong)uStack_124, 0x33 < uStack_124)) {
            lVar12 = 0;
            param_5 = (ulong *)((long)param_5 + (long)param_6);
            do {
              if (*(short *)((long)auStack_11c + lVar12) == 0) goto LAB_1099b42a0;
              lVar12 = lVar12 + 2;
            } while (lVar12 != 0x6a);
            puVar6 = param_1 + 0xe1;
            puVar7 = auStack_11c;
            puVar11 = (ulong *)0x1800;
            puVar10 = param_9;
            FUN_1099af024(puVar6,puVar7);
            if (puVar6 < (ulong *)0xffffffffffffff89) {
              puVar1 = (ulong *)((long)puVar1 + (long)puVar4);
              uStack_124 = 0x23;
              puVar10 = (ulong *)((long)param_5 - (long)puVar1);
              puVar4 = auStack_11c;
              puVar7 = (ulong *)&uStack_124;
              puVar8 = (ulong *)&uStack_128;
              puVar9 = puVar1;
              func_0x000107c2ae24(puVar4,puVar7);
              puVar6 = puVar4;
              if (((puVar4 < (ulong *)0xffffffffffffff89) &&
                  (puVar9 = (ulong *)(ulong)uStack_128, uStack_128 < 10)) &&
                 (puVar8 = (ulong *)(ulong)uStack_124, 0x22 < uStack_124)) {
                lVar12 = 0;
                do {
                  if (*(short *)((long)auStack_11c + lVar12) == 0) goto LAB_1099b42a0;
                  lVar12 = lVar12 + 2;
                } while (lVar12 != 0x48);
                puVar6 = (ulong *)((long)param_1 + 0xcb4);
                puVar7 = auStack_11c;
                puVar11 = (ulong *)0x1800;
                FUN_1099af024(puVar6,puVar7);
                puVar10 = param_9;
                if (puVar6 < (ulong *)0xffffffffffffff89) {
                  puVar2 = (undefined4 *)((long)puVar1 + (long)puVar4);
                  puVar9 = (ulong *)(puVar2 + 3);
                  puVar10 = param_9;
                  if (puVar9 <= param_5) {
                    *(undefined4 *)((long)param_1 + 0x11e4) = *puVar2;
                    *(undefined4 *)(param_1 + 0x23d) = puVar2[1];
                    *(undefined4 *)((long)param_1 + 0x11ec) = puVar2[2];
                    param_5 = (ulong *)((long)param_5 - (long)puVar9);
                    uVar3 = (uint)LZCOUNT((int)param_5 + 0x20000) ^ 0x1f;
                    if ((ulong *)0xfffdffff < param_5) {
                      uVar3 = 0x1f;
                    }
                    puVar10 = param_5;
                    if (uVar3 <= uStack_120) {
                      uVar13 = (ulong)(uVar3 + 1);
                      puVar4 = auStack_b0;
                      do {
                        if ((short)*puVar4 == 0) goto LAB_1099b42a0;
                        uVar13 = uVar13 - 1;
                        lVar12 = 0;
                        puVar4 = (ulong *)((long)puVar4 + 2);
                      } while (uVar13 != 0);
                      do {
                        uVar3 = *(uint *)((long)param_1 + lVar12 + 0x11e4);
                        if (uVar3 == 0 || param_5 < (ulong *)(ulong)uVar3) goto LAB_1099b42a0;
                        lVar12 = lVar12 + 4;
                      } while (lVar12 != 0xc);
                      *(undefined4 *)(param_1 + 0x80) = 2;
                      param_1[0x23b] = 0x200000002;
                      *(undefined4 *)(param_1 + 0x23c) = 2;
                      param_6 = (ulong *)((ulong)param_8 & 0xffffffff);
                      FUN_1099b4474(param_2,param_3);
                      param_1 = param_2;
                      param_2 = param_3;
                      param_3 = param_4;
                      param_4 = puVar9;
                      goto LAB_1099b42ac;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LAB_1099b42a0:
    param_6 = puVar11;
    param_5 = puVar10;
    puVar18 = (ulong *)0xffffffffffffffe2;
    param_1 = puVar6;
    param_2 = puVar7;
    param_3 = puVar8;
    param_4 = puVar9;
  }
LAB_1099b42ac:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar18;
  }
  ___stack_chk_fail();
  uVar13 = (long)param_4 + (long)param_5;
  if ((ulong *)*param_1 == param_4) {
    uVar14 = param_1[2];
    uVar16 = (ulong)(uint)param_1[3];
    uVar17 = (ulong)*(uint *)((long)param_1 + 0x1c);
  }
  else {
    uVar14 = param_1[1];
    uVar16 = (long)*param_1 - uVar14;
    uVar3 = (uint)param_1[3];
    iVar15 = (int)uVar16;
    *(int *)(param_1 + 3) = iVar15;
    *(uint *)((long)param_1 + 0x1c) = uVar3;
    param_1[1] = (long)param_4 - uVar16;
    param_1[2] = uVar14;
    uVar17 = (ulong)uVar3;
    if (iVar15 - uVar3 < 8) {
      *(int *)((long)param_1 + 0x1c) = iVar15;
      uVar17 = uVar16;
    }
  }
  *param_1 = uVar13;
  if (uVar14 + (uVar17 & 0xffffffff) < uVar13 && param_4 < (ulong *)(uVar14 + (uVar16 & 0xffffffff))
     ) {
    uVar17 = uVar13 - uVar14;
    if ((long)(uVar16 & 0xffffffff) <= (long)(uVar13 - uVar14)) {
      uVar17 = uVar16 & 0xffffffff;
    }
    *(int *)((long)param_1 + 0x1c) = (int)uVar17;
  }
  if ((int)param_3[6] == 0) {
    iVar15 = (int)uVar13 - (int)param_1[1];
  }
  else {
    iVar15 = 0;
  }
  *(int *)(param_1 + 4) = iVar15;
  puVar18 = param_1;
  if ((ulong *)0x8 < param_5) {
    while (8 < (long)param_5) {
      if ((ulong *)0x1ffffffe < param_5) {
        param_5 = (ulong *)0x1fffffff;
      }
      puVar7 = (ulong *)((long)param_4 + (long)param_5);
      puVar18 = param_1;
      func_0x0001099b3e80(param_1,param_2,param_3,param_4,puVar7);
      iVar15 = *(int *)((long)param_3 + 0x1c);
      if (iVar15 < 6) {
        if (iVar15 - 3U < 3) {
          puVar18 = param_1;
          FUN_1099c1b48(param_1,param_1 + 0x17,puVar7 + -1,(int)param_1[0x19]);
        }
        else if (iVar15 == 1) {
          puVar18 = param_1;
          FUN_1099bcc54(param_1,puVar7,param_6);
        }
        else if (iVar15 == 2) {
          puVar18 = param_1;
          FUN_1099b53e0(param_1,puVar7,param_6);
        }
      }
      else if (iVar15 - 6U < 4) {
        puVar18 = param_1;
        FUN_1099ce01c(param_1,puVar7 + -1,puVar7);
      }
      param_4 = puVar7;
      param_5 = (ulong *)(uVar13 - (long)puVar7);
    }
    *(int *)((long)param_1 + 0x24) = (int)uVar13 - (int)param_1[1];
  }
  return puVar18;
}



/* Entry: 1099b4474; end: 1099b461b;  */

void FUN_1099b4474(ulong *param_1,undefined8 param_2,long param_3,ulong param_4,ulong param_5,
                  undefined8 param_6)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar1 = param_4 + param_5;
  if (*param_1 == param_4) {
    uVar3 = param_1[2];
    uVar5 = (ulong)(uint)param_1[3];
    uVar6 = (ulong)*(uint *)((long)param_1 + 0x1c);
  }
  else {
    uVar3 = param_1[1];
    uVar5 = *param_1 - uVar3;
    uVar2 = (uint)param_1[3];
    iVar4 = (int)uVar5;
    *(int *)(param_1 + 3) = iVar4;
    *(uint *)((long)param_1 + 0x1c) = uVar2;
    param_1[1] = param_4 - uVar5;
    param_1[2] = uVar3;
    uVar6 = (ulong)uVar2;
    if (iVar4 - uVar2 < 8) {
      *(int *)((long)param_1 + 0x1c) = iVar4;
      uVar6 = uVar5;
    }
  }
  *param_1 = uVar1;
  if (uVar3 + (uVar6 & 0xffffffff) < uVar1 && param_4 < uVar3 + (uVar5 & 0xffffffff)) {
    uVar6 = uVar1 - uVar3;
    if ((long)(uVar5 & 0xffffffff) <= (long)(uVar1 - uVar3)) {
      uVar6 = uVar5 & 0xffffffff;
    }
    *(int *)((long)param_1 + 0x1c) = (int)uVar6;
  }
  if (*(int *)(param_3 + 0x30) == 0) {
    iVar4 = (int)uVar1 - (int)param_1[1];
  }
  else {
    iVar4 = 0;
  }
  *(int *)(param_1 + 4) = iVar4;
  if (8 < param_5) {
    while (8 < (long)param_5) {
      if (0x1ffffffe < param_5) {
        param_5 = 0x1fffffff;
      }
      uVar5 = param_4 + param_5;
      func_0x0001099b3e80(param_1,param_2,param_3,param_4,uVar5);
      iVar4 = *(int *)(param_3 + 0x1c);
      if (iVar4 < 6) {
        if (iVar4 - 3U < 3) {
          FUN_1099c1b48(param_1,param_1 + 0x17,uVar5 - 8,(int)param_1[0x19]);
        }
        else if (iVar4 == 1) {
          FUN_1099bcc54(param_1,uVar5,param_6);
        }
        else if (iVar4 == 2) {
          FUN_1099b53e0(param_1,uVar5,param_6);
        }
      }
      else if (iVar4 - 6U < 4) {
        FUN_1099ce01c(param_1,uVar5 - 8,uVar5);
      }
      param_4 = uVar5;
      param_5 = uVar1 - uVar5;
    }
    *(int *)((long)param_1 + 0x24) = (int)uVar1 - (int)param_1[1];
  }
  return;
}



/* Entry: 1099b461c; end: 1099b46a7;  */

ulong FUN_1099b461c(uint *param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  
  iVar1 = (int)param_4;
  uVar2 = 1;
  if (0x1f < param_4) {
    uVar2 = 2;
  }
  if (0xfff < param_4) {
    uVar2 = uVar2 + 1;
  }
  uVar3 = param_4 + uVar2;
  if (param_2 < uVar3) {
    uVar3 = 0xffffffffffffffba;
  }
  else {
    if (uVar2 == 3) {
      *param_1 = iVar1 << 4 | 0xc;
    }
    else if (uVar2 == 2) {
      *(ushort *)param_1 = (ushort)(iVar1 << 4) | 4;
    }
    else {
      *(char *)param_1 = (char)(iVar1 << 3);
    }
    _memcpy((long)param_1 + (ulong)uVar2,param_3,param_4);
  }
  return uVar3;
}



/* Entry: 1099b46a8; end: 1099b4e93;  */

uint * FUN_1099b46a8(long param_1,long param_2,uint param_3,int param_4,uint *param_5,uint *param_6,
                    undefined1 *param_7,ulong param_8,undefined8 param_9,undefined8 param_10)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  uint *puVar7;
  int iStack_64;
  
  uVar3 = param_3;
  if (param_3 < 8) {
    uVar3 = 7;
  }
  puVar7 = (uint *)0x3;
  if (0x3ff < param_8) {
    puVar7 = (uint *)0x4;
  }
  if ((param_8 & 0xffffffffffffc000) != 0) {
    puVar7 = (uint *)((long)puVar7 + 1);
  }
  _memcpy(param_2,param_1,0x404);
  iVar2 = (int)param_8;
  if (param_4 == 0) {
    iStack_64 = *(int *)(param_1 + 0x400);
    uVar6 = 6;
    if (iStack_64 != 2) {
      uVar6 = 0x3f;
    }
    if (uVar6 < param_8) {
      if (param_6 < puVar7 || (long)param_6 - (long)puVar7 == 0) {
        param_5 = (uint *)0xffffffffffffffba;
      }
      else {
        bVar1 = iStack_64 != 2;
        uVar6 = (long)param_5 + (long)puVar7;
        FUN_1099b0bc0(uVar6,(long)param_6 - (long)puVar7,param_7,param_8,0xff,0xb,
                      (bVar1 || puVar7 != (uint *)0x3) && 0xff < param_8,param_9,param_10,param_2,
                      &iStack_64,param_3 < 4 && param_8 < 0x401);
        uVar4 = 2;
        if (iStack_64 != 0) {
          uVar4 = 3;
        }
        if ((uVar6 < (param_8 - (param_8 >> ((ulong)(uVar3 - 1) & 0x3f))) - 2) &&
           (uVar6 - 1 < 0xffffffffffffff88)) {
          if (uVar6 == 1) {
            _memcpy(param_2,param_1,0x404);
            uVar3 = 1;
            if (0x1f < param_8) {
              uVar3 = 2;
            }
            uVar6 = (ulong)uVar3;
            if (0xfff < param_8) {
              uVar6 = uVar6 + 1;
            }
            iVar5 = (int)uVar6;
            if (iVar5 == 3) {
              *param_5 = iVar2 << 4 | 0xd;
            }
            else if (iVar5 == 2) {
              *(ushort *)param_5 = (ushort)(iVar2 << 4) | 5;
            }
            else {
              *(byte *)param_5 = (byte)(iVar2 << 3) | 1;
            }
            *(undefined1 *)((long)param_5 + uVar6) = *param_7;
            param_5 = (uint *)(ulong)(iVar5 + 1);
          }
          else {
            if (iStack_64 == 0) {
              *(undefined4 *)(param_2 + 0x400) = 1;
            }
            iVar5 = (int)uVar6;
            if (puVar7 == (uint *)0x5) {
              *param_5 = iVar5 * 0x400000 + iVar2 * 0x10 | uVar4 | 0xc;
              *(char *)(param_5 + 1) = (char)(uVar6 >> 10);
            }
            else if (puVar7 == (uint *)0x4) {
              *param_5 = iVar5 * 0x40000 + iVar2 * 0x10 | uVar4 | 8;
            }
            else {
              uVar3 = 4;
              if ((bVar1 || puVar7 != (uint *)0x3) && 0xff < param_8) {
                uVar3 = 0;
              }
              iVar2 = ((uVar4 | uVar3 | iVar2 << 4) ^ 4) + iVar5 * 0x4000;
              *(short *)param_5 = (short)iVar2;
              *(char *)((long)param_5 + 2) = (char)((uint)iVar2 >> 0x10);
            }
            param_5 = (uint *)(uVar6 + (long)puVar7);
          }
        }
        else {
          _memcpy(param_2,param_1,0x404);
          FUN_1099b461c(param_5,param_6,param_7,param_8);
        }
      }
      return param_5;
    }
  }
  uVar3 = 1;
  if (0x1f < param_8) {
    uVar3 = 2;
  }
  if (0xfff < param_8) {
    uVar3 = uVar3 + 1;
  }
  puVar7 = (uint *)(param_8 + uVar3);
  if (param_6 < puVar7) {
    puVar7 = (uint *)0xffffffffffffffba;
  }
  else {
    if (uVar3 == 3) {
      *param_5 = iVar2 << 4 | 0xc;
    }
    else if (uVar3 == 2) {
      *(ushort *)param_5 = (ushort)(iVar2 << 4) | 4;
    }
    else {
      *(char *)param_5 = (char)(iVar2 << 3);
    }
    _memcpy((long)param_5 + (ulong)uVar3,param_7,param_8);
  }
  return puVar7;
}



/* Entry: 1099b4e94; end: 1099b53df;  */

long FUN_1099b4e94(ulong *param_1,ulong param_2,ushort *param_3,long param_4,ushort *param_5,
                  long param_6,ushort *param_7,long param_8,long param_9,ulong param_10,int param_11
                  )

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  long lVar6;
  ulong *puVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong *puVar22;
  ulong uVar23;
  uint *puVar24;
  uint uVar25;
  ulong uVar26;
  uint uVar27;
  ulong *puVar28;
  
  if (param_2 < 9) {
    return -0x46;
  }
  lVar8 = param_10 - 1;
  uVar10 = (uint)*param_3;
  lVar6 = (long)(1 << (ulong)(uVar10 - 1 & 0x1f));
  if (*param_3 == 0) {
    lVar6 = 1;
  }
  iVar1 = *(int *)(param_3 + lVar6 * 2 + (ulong)*(byte *)(param_4 + lVar8) * 4 + 2 + 2);
  uVar11 = iVar1 + 0x8000;
  uVar14 = (ulong)param_3[(ulong)((uVar11 & 0xffff0000) - iVar1 >> ((ulong)(uVar11 >> 0x10) & 0x3f))
                          + (long)*(int *)(param_3 +
                                          lVar6 * 2 + (ulong)*(byte *)(param_4 + lVar8) * 4 + 2) + 2
                         ];
  bVar4 = *(byte *)(param_6 + lVar8);
  uVar21 = (ulong)bVar4;
  uVar11 = (uint)*param_5;
  lVar13 = (long)(1 << (ulong)(uVar11 - 1 & 0x1f));
  if (*param_5 == 0) {
    lVar13 = 1;
  }
  iVar1 = *(int *)(param_5 + lVar13 * 2 + uVar21 * 4 + 2 + 2);
  uVar12 = iVar1 + 0x8000;
  uVar15 = (ulong)param_5[(ulong)((uVar12 & 0xffff0000) - iVar1 >> ((ulong)(uVar12 >> 0x10) & 0x3f))
                          + (long)*(int *)(param_5 + lVar13 * 2 + uVar21 * 4 + 2) + 2];
  puVar7 = (ulong *)((long)param_1 + (param_2 - 8));
  uVar12 = (uint)*param_7;
  lVar16 = (long)(1 << (ulong)(uVar12 - 1 & 0x1f));
  if (*param_7 == 0) {
    lVar16 = 1;
  }
  iVar1 = *(int *)(param_7 + lVar16 * 2 + (ulong)*(byte *)(param_8 + lVar8) * 4 + 2 + 2);
  uVar5 = iVar1 + 0x8000;
  uVar17 = (ulong)param_7[(ulong)((uVar5 & 0xffff0000) - iVar1 >> ((ulong)(uVar5 >> 0x10) & 0x3f)) +
                          (long)*(int *)(param_7 +
                                        lVar16 * 2 + (ulong)*(byte *)(param_8 + lVar8) * 4 + 2) + 2]
  ;
  puVar24 = (uint *)(param_9 + lVar8 * 8);
  uVar5 = *(uint *)(&UNK_10e010958 + (ulong)*(byte *)(param_8 + lVar8) * 4);
  uVar9 = (ulong)(*(uint *)(&UNK_10e010abc +
                           (ulong)*(uint *)(&UNK_10e0109e8 + (ulong)*(byte *)(param_4 + lVar8) * 4)
                           * 4) & (uint)*(ushort *)((long)puVar24 + 6)) << ((ulong)uVar5 & 0x3f) |
          (ulong)(*(uint *)(&UNK_10e010abc + (ulong)uVar5 * 4) & (uint)(ushort)puVar24[1]);
  uVar5 = *(uint *)(&UNK_10e0109e8 + (ulong)*(byte *)(param_4 + lVar8) * 4) + uVar5;
  uVar23 = (ulong)uVar5;
  puVar28 = param_1;
  if (param_11 == 0) {
    uVar9 = (ulong)(*(uint *)(&UNK_10e010abc + uVar21 * 4) & *puVar24) << (uVar23 & 0x3f) | uVar9;
    uVar5 = uVar5 + bVar4;
  }
  else {
    if (bVar4 < 0x38) {
      uVar27 = 0;
      uVar25 = *puVar24;
    }
    else {
      uVar25 = *puVar24;
      uVar27 = bVar4 - 0x38;
      if (uVar27 != 0) {
        uVar9 = (ulong)(*(uint *)(&UNK_10e010abc + (ulong)uVar27 * 4) & uVar25) << (uVar23 & 0x3f) |
                uVar9;
        uVar21 = (ulong)(uVar5 + uVar27 >> 3);
        *param_1 = uVar9;
        puVar22 = (ulong *)((long)param_1 + uVar21);
        puVar28 = puVar7;
        if (puVar22 <= puVar7) {
          puVar28 = puVar22;
        }
        uVar23 = (ulong)(uVar5 + uVar27 & 7);
        uVar9 = uVar9 >> ((uVar21 & 7) << 3);
        uVar21 = 0x38;
      }
    }
    uVar9 = (ulong)(*(uint *)(&UNK_10e010abc + uVar21 * 4) & uVar25 >> (ulong)(uVar27 & 0x1f)) <<
            (uVar23 & 0x3f) | uVar9;
    uVar5 = (int)uVar23 + (int)uVar21;
  }
  *puVar28 = uVar9;
  puVar28 = (ulong *)((long)puVar28 + (ulong)(uVar5 >> 3));
  puVar22 = puVar7;
  if (puVar28 <= puVar7) {
    puVar22 = puVar28;
  }
  uVar9 = uVar9 >> (((ulong)(uVar5 >> 3) & 7) << 3);
  uVar5 = uVar5 & 7;
  uVar21 = param_10 - 2;
  if (1 < param_10) {
    puVar24 = (uint *)(param_9 + param_10 * 8 + -0x10);
    do {
      bVar4 = *(byte *)(param_6 + uVar21);
      uVar26 = (ulong)bVar4;
      uVar2 = *(uint *)(&UNK_10e010958 + (ulong)*(byte *)(param_8 + uVar21) * 4);
      uVar3 = *(uint *)(&UNK_10e0109e8 + (ulong)*(byte *)(param_4 + uVar21) * 4);
      uVar23 = uVar15 + *(uint *)(param_5 + lVar13 * 2 + uVar26 * 4 + 2 + 2);
      uVar18 = uVar23 >> 0x10;
      uVar20 = uVar15 & *(uint *)(&UNK_10e010abc + uVar18 * 4);
      uVar25 = uVar5 + (int)(uVar23 >> 0x10);
      uVar15 = (ulong)param_5[(uVar15 >> (uVar18 & 0x3f)) +
                              (long)*(int *)(param_5 + lVar13 * 2 + uVar26 * 4 + 2) + 2];
      uVar23 = uVar14 + *(uint *)(param_3 + lVar6 * 2 + (ulong)*(byte *)(param_4 + uVar21) * 4 + 2 +
                                 2);
      uVar18 = uVar23 >> 0x10;
      uVar19 = uVar14 & *(uint *)(&UNK_10e010abc + uVar18 * 4);
      uVar27 = uVar25 + (int)(uVar23 >> 0x10);
      uVar14 = (ulong)param_3[(uVar14 >> (uVar18 & 0x3f)) +
                              (long)*(int *)(param_3 +
                                            lVar6 * 2 + (ulong)*(byte *)(param_4 + uVar21) * 4 + 2)
                              + 2];
      uVar23 = uVar17 + *(uint *)(param_7 + lVar16 * 2 + (ulong)*(byte *)(param_8 + uVar21) * 4 + 2
                                 + 2);
      uVar18 = uVar23 >> 0x10;
      uVar9 = uVar20 << uVar5 | uVar9 |
              uVar19 << ((ulong)uVar25 & 0x3f) |
              (uVar17 & *(uint *)(&UNK_10e010abc + uVar18 * 4)) << ((ulong)uVar27 & 0x3f);
      uVar27 = uVar27 + (int)(uVar23 >> 0x10);
      uVar17 = (ulong)param_7[(uVar17 >> (uVar18 & 0x3f)) +
                              (long)*(int *)(param_7 +
                                            lVar16 * 2 + (ulong)*(byte *)(param_8 + uVar21) * 4 + 2)
                              + 2];
      uVar5 = uVar2 + bVar4 + uVar3;
      if (0x1e < uVar5) {
        uVar25 = uVar27 >> 3;
        *puVar22 = uVar9;
        puVar28 = (ulong *)((long)puVar22 + (ulong)uVar25);
        puVar22 = puVar7;
        if (puVar28 <= puVar7) {
          puVar22 = puVar28;
        }
        uVar27 = uVar27 & 7;
        uVar9 = uVar9 >> (((ulong)uVar25 & 7) << 3);
      }
      uVar9 = (ulong)(*(uint *)(&UNK_10e010abc + (ulong)uVar2 * 4) & (uint)(ushort)puVar24[1]) <<
              ((ulong)uVar27 & 0x3f) |
              (ulong)(*(uint *)(&UNK_10e010abc + (ulong)uVar3 * 4) &
                     (uint)*(ushort *)((long)puVar24 + 6)) << ((ulong)(uVar27 + uVar2) & 0x3f) |
              uVar9;
      uVar3 = uVar27 + uVar2 + uVar3;
      if (0x38 < uVar5) {
        uVar5 = uVar3 >> 3;
        *puVar22 = uVar9;
        puVar28 = (ulong *)((long)puVar22 + (ulong)uVar5);
        puVar22 = puVar7;
        if (puVar28 <= puVar7) {
          puVar22 = puVar28;
        }
        uVar3 = uVar3 & 7;
        uVar9 = uVar9 >> (((ulong)uVar5 & 7) << 3);
      }
      uVar23 = (ulong)uVar3;
      if (param_11 == 0) {
        uVar5 = *puVar24;
      }
      else {
        if (bVar4 < 0x38) {
          uVar25 = 0;
          uVar5 = *puVar24;
        }
        else {
          uVar5 = *puVar24;
          uVar25 = bVar4 - 0x38;
          if (uVar25 != 0) {
            uVar9 = (ulong)(*(uint *)(&UNK_10e010abc + (ulong)uVar25 * 4) & uVar5) <<
                    (uVar23 & 0x3f) | uVar9;
            uVar18 = (ulong)(uVar3 + uVar25 >> 3);
            *puVar22 = uVar9;
            puVar28 = (ulong *)((long)puVar22 + uVar18);
            puVar22 = puVar7;
            if (puVar28 <= puVar7) {
              puVar22 = puVar28;
            }
            uVar23 = (ulong)(uVar3 + uVar25 & 7);
            uVar9 = uVar9 >> ((uVar18 & 7) << 3);
            uVar26 = 0x38;
          }
        }
        uVar5 = uVar5 >> (ulong)(uVar25 & 0x1f);
      }
      uVar9 = (ulong)(*(uint *)(&UNK_10e010abc + uVar26 * 4) & uVar5) << (uVar23 & 0x3f) | uVar9;
      uVar5 = (int)uVar23 + (int)uVar26;
      uVar23 = (ulong)(uVar5 >> 3);
      puVar28 = (ulong *)((long)puVar22 + uVar23);
      *puVar22 = uVar9;
      puVar22 = puVar7;
      if (puVar28 <= puVar7) {
        puVar22 = puVar28;
      }
      uVar9 = uVar9 >> ((uVar23 & 7) << 3);
      uVar21 = uVar21 - 1;
      uVar5 = uVar5 & 7;
      puVar24 = puVar24 + -2;
    } while (uVar21 < param_10);
  }
  uVar9 = (uVar14 & *(uint *)(&UNK_10e010abc + (ulong)uVar10 * 4)) << uVar5 | uVar9;
  uVar14 = (ulong)(uVar5 + uVar10 >> 3);
  *puVar22 = uVar9;
  puVar22 = (ulong *)((long)puVar22 + uVar14);
  puVar28 = puVar7;
  if (puVar22 <= puVar7) {
    puVar28 = puVar22;
  }
  uVar10 = uVar5 + uVar10 & 7;
  uVar14 = (uVar15 & *(uint *)(&UNK_10e010abc + (ulong)uVar11 * 4)) << uVar10 |
           uVar9 >> ((uVar14 & 7) << 3);
  uVar10 = uVar10 + uVar11;
  uVar21 = (ulong)(uVar10 >> 3);
  *puVar28 = uVar14;
  puVar28 = (ulong *)((long)puVar28 + uVar21);
  puVar22 = puVar7;
  if (puVar28 <= puVar7) {
    puVar22 = puVar28;
  }
  uVar10 = uVar10 & 7;
  uVar14 = (uVar17 & *(uint *)(&UNK_10e010abc + (ulong)uVar12 * 4)) << uVar10 |
           uVar14 >> ((uVar21 & 7) << 3);
  uVar10 = uVar10 + uVar12;
  uVar21 = (ulong)(uVar10 >> 3);
  *puVar22 = uVar14;
  puVar22 = (ulong *)((long)puVar22 + uVar21);
  puVar28 = puVar7;
  if (puVar22 <= puVar7) {
    puVar28 = puVar22;
  }
  uVar10 = uVar10 & 7;
  uVar11 = uVar10 + 1;
  *puVar28 = uVar14 >> ((uVar21 & 7) << 3) | 1L << uVar10;
  puVar28 = (ulong *)((long)puVar28 + (ulong)(uVar11 >> 3));
  puVar22 = puVar7;
  if (puVar28 <= puVar7) {
    puVar22 = puVar28;
  }
  if (puVar22 < puVar7) {
    if ((uVar11 & 7) != 0) {
      puVar22 = (ulong *)((long)puVar22 + 1);
    }
    if ((long)puVar22 - (long)param_1 != 0) {
      return (long)puVar22 - (long)param_1;
    }
  }
  return -0x46;
}



/* Entry: 1099b53e0; end: 1099b5537;  */

void FUN_1099b53e0(long param_1,long param_2,int param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  
  lVar8 = *(long *)(param_1 + 8);
  uVar9 = (ulong)*(uint *)(param_1 + 0x24);
  lVar10 = lVar8 + uVar9;
  if (lVar10 + 2U <= param_2 - 8U) {
    lVar11 = *(long *)(param_1 + 0x30);
    iVar4 = *(int *)(param_1 + 200);
    iVar2 = *(int *)(param_1 + 0xbc);
    iVar3 = *(int *)(param_1 + 0xc0);
    lVar6 = *(long *)(param_1 + 0x40);
    do {
      uVar7 = 0;
      lVar1 = lVar8 + uVar9;
      do {
        if (iVar4 < 7) {
          if (iVar4 == 5) {
            lVar12 = *(long *)(lVar1 + uVar7);
            uVar14 = lVar12 * -0x30e4432345000000;
            goto LAB_1099b54dc;
          }
          if (iVar4 == 6) {
            lVar12 = *(long *)(lVar1 + uVar7);
            uVar14 = lVar12 * -0x30e4432340650000;
            goto LAB_1099b54dc;
          }
LAB_1099b54b4:
          uVar14 = (ulong)((uint)(*(int *)(lVar1 + uVar7) * -0x61c8864f) >>
                          (ulong)(0x20U - iVar2 & 0x1f));
          lVar12 = *(long *)(lVar1 + uVar7);
        }
        else {
          if (iVar4 == 7) {
            lVar12 = *(long *)(lVar1 + uVar7);
            uVar14 = lVar12 * -0x30e44323405a9d00;
          }
          else {
            if (iVar4 != 8) goto LAB_1099b54b4;
            lVar12 = *(long *)(lVar1 + uVar7);
            uVar14 = lVar12 * -0x30e44323485a9b9d;
          }
LAB_1099b54dc:
          uVar14 = uVar14 >> ((ulong)(0x40 - iVar2) & 0x3f);
        }
        uVar13 = (ulong)(lVar12 * -0x30e44323485a9b9d) >> ((ulong)(0x40 - iVar3) & 0x3f);
        if (uVar7 == 0) {
          *(int *)(lVar6 + uVar14 * 4) = (int)lVar10 - (int)lVar8;
LAB_1099b5500:
          *(int *)(lVar11 + uVar13 * 4) = (int)uVar9 + (int)uVar7;
        }
        else if (*(int *)(lVar11 + uVar13 * 4) == 0) goto LAB_1099b5500;
      } while ((param_3 != 0) && (bVar5 = uVar7 < 2, uVar7 = uVar7 + 1, bVar5));
      uVar7 = lVar10 + 5;
      lVar10 = lVar10 + 3;
      uVar9 = uVar9 + 3;
    } while (uVar7 <= param_2 - 8U);
  }
  return;
}



/* Entry: 1099b5538; end: 1099b7f0f;  */

long FUN_1099b5538(long param_1,long *param_2,uint *param_3,ulong *param_4,long param_5)

{
  bool bVar1;
  ulong *puVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong *puVar15;
  int *piVar16;
  ulong *puVar17;
  ulong *puVar18;
  uint uVar19;
  ulong uVar20;
  long lVar21;
  uint uVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  ulong *puVar26;
  ulong uVar27;
  ulong *puVar28;
  ulong uVar29;
  char *pcVar30;
  long lVar31;
  long lVar32;
  int iVar33;
  long lVar34;
  ulong uVar35;
  ulong *puVar36;
  ulong uVar37;
  ulong *puVar38;
  ulong *puVar39;
  ulong *puVar40;
  ulong *puVar41;
  ulong *puVar42;
  
  iVar6 = *(int *)(param_1 + 200);
  lVar31 = *(long *)(param_1 + 0x30);
  lVar32 = *(long *)(param_1 + 0x40);
  lVar34 = *(long *)(param_1 + 8);
  puVar2 = (ulong *)(param_5 + (long)param_4);
  iVar33 = (int)lVar34;
  iVar9 = (int)puVar2 - iVar33;
  uVar7 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
  uVar4 = iVar9 - uVar7;
  if (iVar9 - *(uint *)(param_1 + 0x18) <= uVar7) {
    uVar4 = *(uint *)(param_1 + 0x18);
  }
  pcVar3 = (char *)(lVar34 + (ulong)uVar4);
  puVar36 = puVar2 + -1;
  uVar5 = *param_3;
  uVar7 = param_3[1];
  puVar28 = param_4;
  if ((int)param_4 == (int)pcVar3) {
    puVar28 = (ulong *)((long)param_4 + 1);
  }
  uVar10 = (int)puVar28 - (int)pcVar3;
  uVar22 = 0;
  if (uVar7 <= uVar10) {
    uVar22 = uVar7;
  }
  uVar23 = (ulong)uVar22;
  uVar19 = 0;
  if (uVar5 <= uVar10) {
    uVar19 = uVar5;
  }
  uVar20 = (ulong)uVar19;
  if (iVar6 == 5) {
    if (puVar28 < puVar36) {
      uVar12 = (ulong)(0x40 - *(int *)(param_1 + 0xc0));
      uVar37 = (ulong)(0x40 - *(int *)(param_1 + 0xbc));
      puVar38 = (ulong *)((long)puVar2 - 7);
      puVar39 = (ulong *)((long)puVar2 - 3);
      puVar40 = (ulong *)((long)puVar2 - 1);
      puVar41 = puVar2 + -4;
      lVar24 = lVar34 + -1;
      do {
        uVar25 = *puVar28;
        uVar27 = uVar25 * -0x30e44323485a9b9d >> (uVar12 & 0x3f);
        uVar35 = uVar25 * -0x30e4432345000000 >> (uVar37 & 0x3f);
        iVar6 = (int)puVar28 - iVar33;
        uVar22 = *(uint *)(lVar31 + uVar27 * 4);
        uVar13 = (ulong)uVar22;
        uVar19 = *(uint *)(lVar32 + uVar35 * 4);
        uVar29 = (ulong)uVar19;
        *(int *)(lVar32 + uVar35 * 4) = iVar6;
        *(int *)(lVar31 + uVar27 * 4) = iVar6;
        puVar42 = (ulong *)((long)puVar28 + 1);
        if (((int)uVar20 == 0) ||
           (*(int *)((long)puVar42 - (uVar20 & 0xffffffff)) != *(int *)puVar42)) {
          if ((uVar4 < uVar22) && (puVar26 = (ulong *)(lVar34 + uVar13), *puVar26 == uVar25)) {
            puVar42 = puVar28 + 1;
            puVar17 = puVar26 + 1;
            puVar15 = puVar42;
            if (puVar42 < puVar38) {
              if (*puVar17 == *puVar42) {
                lVar14 = 0;
                puVar17 = (ulong *)(lVar34 + 0x10 + uVar13);
                puVar15 = puVar28 + 2;
                do {
                  if (puVar38 <= puVar15) goto LAB_1099b70d0;
                  uVar23 = *puVar17;
                  uVar25 = *puVar15;
                  lVar14 = lVar14 + 8;
                  puVar17 = puVar17 + 1;
                  puVar15 = puVar15 + 1;
                } while (uVar23 == uVar25);
                uVar25 = uVar25 ^ uVar23;
                uVar23 = (uVar25 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar25 & 0x5555555555555555) << 1;
                uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
                uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
                uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
                uVar23 = lVar14 + ((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3);
              }
              else {
                uVar23 = *puVar42 ^ *puVar17;
                uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
                uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
                uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
                uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
                uVar23 = (ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3;
              }
            }
            else {
LAB_1099b70d0:
              if (puVar15 < puVar39) {
                if ((int)*puVar17 == (int)*puVar15) {
                  puVar17 = (ulong *)((long)puVar17 + 4);
                  puVar15 = (ulong *)((long)puVar15 + 4);
                }
              }
              if (puVar15 < puVar40) {
                if ((short)*puVar17 == (short)*puVar15) {
                  puVar17 = (ulong *)((long)puVar17 + 2);
                  puVar15 = (ulong *)((long)puVar15 + 2);
                }
              }
              if ((puVar15 < puVar2) && ((char)*puVar17 == (char)*puVar15)) {
                puVar15 = (ulong *)((long)puVar15 + 1);
              }
              uVar23 = (long)puVar15 - (long)puVar42;
            }
            lVar14 = uVar23 + 8;
            uVar25 = (long)puVar28 - (long)puVar26;
            puVar42 = puVar28;
            if (param_4 < puVar28) {
              puVar28 = (ulong *)((long)puVar28 + -1);
              pcVar30 = (char *)(lVar24 + uVar13);
              do {
                if ((char)*puVar28 != *pcVar30) goto LAB_1099b726c;
                lVar14 = lVar14 + 1;
                puVar42 = (ulong *)((long)puVar28 + -1);
              } while ((param_4 < puVar28) &&
                      (bVar1 = pcVar3 < pcVar30, puVar28 = puVar42, pcVar30 = pcVar30 + -1, bVar1));
LAB_1099b7208:
              puVar42 = (ulong *)((long)puVar42 + 1);
            }
LAB_1099b7278:
            uVar23 = (long)puVar42 - (long)param_4;
            puVar28 = (ulong *)param_2[3];
            if (puVar41 < puVar42) {
              puVar26 = puVar28;
              puVar17 = param_4;
              if (param_4 <= puVar41) {
                puVar26 = (ulong *)((long)puVar28 + ((long)puVar41 - (long)param_4));
                uVar13 = *param_4;
                puVar28[1] = param_4[1];
                *puVar28 = uVar13;
                uVar13 = param_4[2];
                puVar28[3] = param_4[3];
                puVar28[2] = uVar13;
                puVar17 = puVar41;
                if (0x20 < (long)puVar41 - (long)param_4) {
                  puVar28 = puVar28 + 4;
                  puVar15 = param_4 + 6;
                  do {
                    uVar13 = puVar15[-2];
                    puVar28[1] = puVar15[-1];
                    *puVar28 = uVar13;
                    uVar13 = *puVar15;
                    puVar28[3] = puVar15[1];
                    puVar28[2] = uVar13;
                    puVar28 = puVar28 + 4;
                    puVar15 = puVar15 + 4;
                  } while (puVar28 < puVar26);
                }
              }
              if (puVar17 < puVar42) {
                do {
                  puVar28 = (ulong *)((long)puVar17 + 1);
                  *(char *)puVar26 = (char)*puVar17;
                  puVar26 = (ulong *)((long)puVar26 + 1);
                  puVar17 = puVar28;
                } while (puVar28 != puVar42);
              }
LAB_1099b734c:
              param_2[3] = param_2[3] + uVar23;
              piVar16 = (int *)param_2[1];
              if (0xffff < uVar23) {
                *(undefined4 *)(param_2 + 9) = 1;
                *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar16 - *param_2) >> 3);
              }
            }
            else {
              uVar13 = *param_4;
              puVar28[1] = param_4[1];
              *puVar28 = uVar13;
              lVar21 = param_2[3];
              if (0x10 < uVar23) {
                uVar13 = param_4[2];
                *(ulong *)(lVar21 + 0x18) = param_4[3];
                *(ulong *)(lVar21 + 0x10) = uVar13;
                uVar13 = param_4[4];
                *(ulong *)(lVar21 + 0x28) = param_4[5];
                *(ulong *)(lVar21 + 0x20) = uVar13;
                if (0x30 < (long)uVar23) {
                  puVar28 = (ulong *)(lVar21 + 0x30);
                  puVar26 = param_4 + 8;
                  do {
                    uVar13 = puVar26[-2];
                    puVar28[1] = puVar26[-1];
                    *puVar28 = uVar13;
                    uVar13 = *puVar26;
                    puVar28[3] = puVar26[1];
                    puVar28[2] = uVar13;
                    puVar28 = puVar28 + 4;
                    puVar26 = puVar26 + 4;
                  } while (puVar28 < (ulong *)(lVar21 + uVar23));
                }
                goto LAB_1099b734c;
              }
              param_2[3] = lVar21 + uVar23;
              piVar16 = (int *)param_2[1];
            }
            uVar13 = lVar14 - 3;
            *(short *)(piVar16 + 1) = (short)uVar23;
            *piVar16 = (int)uVar25 + 3;
            uVar23 = uVar20;
            if (0xffff < uVar13) goto LAB_1099b6e48;
            goto LAB_1099b6e5c;
          }
          if ((uVar4 < uVar19) && (piVar16 = (int *)(lVar34 + uVar29), *piVar16 == (int)*puVar28)) {
            uVar25 = *puVar42;
            uVar13 = uVar25 * -0x30e44323485a9b9d >> (uVar12 & 0x3f);
            uVar22 = *(uint *)(lVar31 + uVar13 * 4);
            uVar23 = (ulong)uVar22;
            *(int *)(lVar31 + uVar13 * 4) = iVar6 + 1;
            if ((uVar4 < uVar22) && (puVar26 = (ulong *)(lVar34 + uVar23), *puVar26 == uVar25)) {
              puVar17 = (ulong *)((long)puVar28 + 9);
              puVar15 = puVar26 + 1;
              puVar18 = puVar17;
              if (puVar17 < puVar38) {
                if (*puVar15 == *puVar17) {
                  lVar14 = 0;
                  puVar18 = (ulong *)((long)puVar28 + 0x11);
                  puVar15 = (ulong *)(lVar34 + 0x10 + uVar23);
                  do {
                    if (puVar38 <= puVar18) goto LAB_1099b73c8;
                    uVar13 = *puVar15;
                    uVar25 = *puVar18;
                    lVar14 = lVar14 + 8;
                    puVar18 = puVar18 + 1;
                    puVar15 = puVar15 + 1;
                  } while (uVar13 == uVar25);
                  uVar25 = uVar25 ^ uVar13;
                  uVar13 = (uVar25 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar25 & 0x5555555555555555) << 1;
                  uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
                  uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
                  uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10
                  ;
                  uVar13 = lVar14 + ((ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3);
                }
                else {
                  uVar13 = *puVar17 ^ *puVar15;
                  uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
                  uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
                  uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
                  uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10
                  ;
                  uVar13 = (ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3;
                }
              }
              else {
LAB_1099b73c8:
                if (puVar18 < puVar39) {
                  if ((int)*puVar15 == (int)*puVar18) {
                    puVar18 = (ulong *)((long)puVar18 + 4);
                    puVar15 = (ulong *)((long)puVar15 + 4);
                  }
                }
                if (puVar18 < puVar40) {
                  if ((short)*puVar15 == (short)*puVar18) {
                    puVar18 = (ulong *)((long)puVar18 + 2);
                    puVar15 = (ulong *)((long)puVar15 + 2);
                  }
                }
                if ((puVar18 < puVar2) && ((char)*puVar15 == (char)*puVar18)) {
                  puVar18 = (ulong *)((long)puVar18 + 1);
                }
                uVar13 = (long)puVar18 - (long)puVar17;
              }
              lVar14 = uVar13 + 8;
              uVar25 = (long)puVar42 - (long)puVar26;
              if (param_4 < puVar42) {
                pcVar30 = (char *)(lVar24 + uVar23);
                do {
                  if ((char)*puVar28 != *pcVar30) goto LAB_1099b726c;
                  lVar14 = lVar14 + 1;
                  puVar42 = (ulong *)((long)puVar28 + -1);
                } while ((param_4 < puVar28) &&
                        (bVar1 = pcVar3 < pcVar30, puVar28 = puVar42, pcVar30 = pcVar30 + -1, bVar1)
                        );
                goto LAB_1099b7208;
              }
            }
            else {
              puVar42 = (ulong *)((long)puVar28 + 4);
              puVar26 = (ulong *)(piVar16 + 1);
              puVar17 = puVar42;
              if (puVar42 < puVar38) {
                if (*puVar26 == *puVar42) {
                  lVar14 = 0;
                  puVar17 = (ulong *)((long)puVar28 + 0xc);
                  puVar26 = (ulong *)(lVar34 + 0xc + uVar29);
                  do {
                    if (puVar38 <= puVar17) goto LAB_1099b7140;
                    uVar13 = *puVar26;
                    uVar23 = *puVar17;
                    lVar14 = lVar14 + 8;
                    puVar17 = puVar17 + 1;
                    puVar26 = puVar26 + 1;
                  } while (uVar13 == uVar23);
                  uVar23 = uVar23 ^ uVar13;
                  uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
                  uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
                  uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
                  uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10
                  ;
                  uVar23 = lVar14 + ((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3);
                }
                else {
                  uVar23 = *puVar42 ^ *puVar26;
                  uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
                  uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
                  uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
                  uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10
                  ;
                  uVar23 = (ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3;
                }
              }
              else {
LAB_1099b7140:
                if (puVar17 < puVar39) {
                  if ((int)*puVar26 == (int)*puVar17) {
                    puVar17 = (ulong *)((long)puVar17 + 4);
                    puVar26 = (ulong *)((long)puVar26 + 4);
                  }
                }
                if (puVar17 < puVar40) {
                  if ((short)*puVar26 == (short)*puVar17) {
                    puVar17 = (ulong *)((long)puVar17 + 2);
                    puVar26 = (ulong *)((long)puVar26 + 2);
                  }
                }
                if ((puVar17 < puVar2) && ((char)*puVar26 == (char)*puVar17)) {
                  puVar17 = (ulong *)((long)puVar17 + 1);
                }
                uVar23 = (long)puVar17 - (long)puVar42;
              }
              lVar14 = uVar23 + 4;
              uVar25 = (long)puVar28 - (long)piVar16;
              puVar42 = puVar28;
              if (param_4 < puVar28) {
                puVar42 = (ulong *)((long)puVar28 + -1);
                pcVar30 = (char *)(lVar24 + uVar29);
                do {
                  if ((char)*puVar42 != *pcVar30) goto LAB_1099b7208;
                  lVar14 = lVar14 + 1;
                  puVar28 = (ulong *)((long)puVar42 + -1);
                } while ((param_4 < puVar42) &&
                        (bVar1 = pcVar3 < pcVar30, puVar42 = puVar28, pcVar30 = pcVar30 + -1, bVar1)
                        );
LAB_1099b726c:
                puVar42 = (ulong *)((long)puVar28 + 1);
              }
            }
            goto LAB_1099b7278;
          }
          puVar28 = (ulong *)((long)puVar28 + ((long)puVar28 - (long)param_4 >> 8) + 1);
        }
        else {
          puVar26 = (ulong *)((long)puVar28 + 5);
          puVar17 = (ulong *)((long)puVar26 + -(uVar20 & 0xffffffff));
          puVar15 = puVar26;
          if (puVar26 < puVar38) {
            if (*puVar17 == *puVar26) {
              lVar14 = 0;
              puVar15 = (ulong *)((long)puVar28 + 0xd);
              puVar17 = (ulong *)((long)puVar28 + 0xd + -(uVar20 & 0xffffffff));
              do {
                if (puVar38 <= puVar15) goto LAB_1099b6ca0;
                uVar13 = *puVar17;
                uVar25 = *puVar15;
                lVar14 = lVar14 + 8;
                puVar15 = puVar15 + 1;
                puVar17 = puVar17 + 1;
              } while (uVar13 == uVar25);
              uVar25 = uVar25 ^ uVar13;
              uVar13 = (uVar25 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar25 & 0x5555555555555555) << 1;
              uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
              uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
              uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
              uVar13 = lVar14 + ((ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3);
            }
            else {
              uVar13 = *puVar26 ^ *puVar17;
              uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
              uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
              uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
              uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
              uVar13 = (ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3;
            }
          }
          else {
LAB_1099b6ca0:
            if (puVar15 < puVar39) {
              if ((int)*puVar17 == (int)*puVar15) {
                puVar15 = (ulong *)((long)puVar15 + 4);
                puVar17 = (ulong *)((long)puVar17 + 4);
              }
            }
            if (puVar15 < puVar40) {
              if ((short)*puVar17 == (short)*puVar15) {
                puVar15 = (ulong *)((long)puVar15 + 2);
                puVar17 = (ulong *)((long)puVar17 + 2);
              }
            }
            if ((puVar15 < puVar2) && ((char)*puVar17 == (char)*puVar15)) {
              puVar15 = (ulong *)((long)puVar15 + 1);
            }
            uVar13 = (long)puVar15 - (long)puVar26;
          }
          uVar25 = (long)puVar42 - (long)param_4;
          puVar26 = (ulong *)param_2[3];
          if (puVar41 < puVar42) {
            puVar15 = param_4;
            puVar17 = puVar26;
            if (param_4 <= puVar41) {
              puVar17 = (ulong *)((long)puVar26 + ((long)puVar41 - (long)param_4));
              uVar27 = *param_4;
              puVar26[1] = param_4[1];
              *puVar26 = uVar27;
              uVar27 = param_4[2];
              puVar26[3] = param_4[3];
              puVar26[2] = uVar27;
              puVar15 = puVar41;
              if (0x20 < (long)puVar41 - (long)param_4) {
                puVar26 = puVar26 + 4;
                puVar18 = param_4 + 6;
                do {
                  uVar27 = puVar18[-2];
                  puVar26[1] = puVar18[-1];
                  *puVar26 = uVar27;
                  uVar27 = *puVar18;
                  puVar26[3] = puVar18[1];
                  puVar26[2] = uVar27;
                  puVar26 = puVar26 + 4;
                  puVar18 = puVar18 + 4;
                } while (puVar26 < puVar17);
              }
            }
            if (puVar15 < puVar42) {
              puVar15 = (ulong *)((long)puVar15 + -1);
              do {
                puVar15 = (ulong *)((long)puVar15 + 1);
                *(undefined1 *)puVar17 = *(undefined1 *)puVar15;
                puVar17 = (ulong *)((long)puVar17 + 1);
              } while (puVar15 != puVar28);
            }
LAB_1099b6df4:
            param_2[3] = param_2[3] + uVar25;
            piVar16 = (int *)param_2[1];
            if (0xffff < uVar25) {
              *(undefined4 *)(param_2 + 9) = 1;
              *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar16 - *param_2) >> 3);
            }
          }
          else {
            uVar27 = *param_4;
            puVar26[1] = param_4[1];
            *puVar26 = uVar27;
            lVar14 = param_2[3];
            if (0x10 < uVar25) {
              uVar27 = param_4[2];
              *(ulong *)(lVar14 + 0x18) = param_4[3];
              *(ulong *)(lVar14 + 0x10) = uVar27;
              uVar27 = param_4[4];
              *(ulong *)(lVar14 + 0x28) = param_4[5];
              *(ulong *)(lVar14 + 0x20) = uVar27;
              if (0x30 < (long)uVar25) {
                puVar28 = (ulong *)(lVar14 + 0x30);
                puVar26 = param_4 + 8;
                do {
                  uVar27 = puVar26[-2];
                  puVar28[1] = puVar26[-1];
                  *puVar28 = uVar27;
                  uVar27 = *puVar26;
                  puVar28[3] = puVar26[1];
                  puVar28[2] = uVar27;
                  puVar28 = puVar28 + 4;
                  puVar26 = puVar26 + 4;
                } while (puVar28 < (ulong *)(lVar14 + uVar25));
              }
              goto LAB_1099b6df4;
            }
            param_2[3] = lVar14 + uVar25;
            piVar16 = (int *)param_2[1];
          }
          lVar14 = uVar13 + 4;
          uVar13 = uVar13 + 1;
          *(short *)(piVar16 + 1) = (short)uVar25;
          *piVar16 = 1;
          uVar25 = uVar20;
          if (uVar13 >> 0x10 != 0) {
LAB_1099b6e48:
            *(undefined4 *)(param_2 + 9) = 2;
            *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar16 - *param_2) >> 3);
          }
LAB_1099b6e5c:
          *(short *)((long)piVar16 + 6) = (short)uVar13;
          piVar16 = piVar16 + 2;
          param_2[1] = (long)piVar16;
          param_4 = (ulong *)((long)puVar42 + lVar14);
          uVar20 = uVar25;
          puVar28 = param_4;
          if (param_4 <= puVar36) {
            uVar22 = iVar6 + 2;
            lVar14 = *(long *)(lVar34 + (ulong)uVar22);
            *(uint *)(lVar31 + ((ulong)(lVar14 * -0x30e44323485a9b9d) >> (uVar12 & 0x3f)) * 4) =
                 uVar22;
            *(int *)(lVar31 + ((ulong)(*(long *)((long)param_4 - 2U) * -0x30e44323485a9b9d) >>
                              (uVar12 & 0x3f)) * 4) = (int)(long *)((long)param_4 - 2U) - iVar33;
            *(uint *)(lVar32 + ((ulong)(lVar14 * -0x30e4432345000000) >> (uVar37 & 0x3f)) * 4) =
                 uVar22;
            *(int *)(lVar32 + ((ulong)(*(long *)((long)param_4 - 1U) * -0x30e4432345000000) >>
                              (uVar37 & 0x3f)) * 4) = (int)(long *)((long)param_4 - 1U) - iVar33;
            do {
              uVar13 = uVar25;
              uVar20 = uVar13;
              puVar28 = param_4;
              if (((int)uVar23 == 0) ||
                 ((int)*param_4 != *(int *)((long)param_4 - (uVar23 & 0xffffffff)))) break;
              puVar28 = (ulong *)((long)param_4 + 4);
              puVar42 = (ulong *)((long)puVar28 + -(uVar23 & 0xffffffff));
              puVar26 = puVar28;
              if (puVar28 < puVar38) {
                if (*puVar42 == *puVar28) {
                  lVar14 = 0;
                  puVar26 = (ulong *)((long)param_4 + 0xc);
                  puVar42 = (ulong *)((long)param_4 + 0xc + -(uVar23 & 0xffffffff));
                  do {
                    if (puVar38 <= puVar26) goto LAB_1099b6f50;
                    uVar20 = *puVar42;
                    uVar25 = *puVar26;
                    lVar14 = lVar14 + 8;
                    puVar26 = puVar26 + 1;
                    puVar42 = puVar42 + 1;
                  } while (uVar20 == uVar25);
                  uVar25 = uVar25 ^ uVar20;
                  uVar20 = (uVar25 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar25 & 0x5555555555555555) << 1;
                  uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
                  uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
                  uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10
                  ;
                  uVar20 = lVar14 + ((ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3);
                }
                else {
                  uVar20 = *puVar28 ^ *puVar42;
                  uVar20 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
                  uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
                  uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
                  uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10
                  ;
                  uVar20 = (ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3;
                }
              }
              else {
LAB_1099b6f50:
                if (puVar26 < puVar39) {
                  if ((int)*puVar42 == (int)*puVar26) {
                    puVar26 = (ulong *)((long)puVar26 + 4);
                    puVar42 = (ulong *)((long)puVar42 + 4);
                  }
                }
                if (puVar26 < puVar40) {
                  if ((short)*puVar42 == (short)*puVar26) {
                    puVar26 = (ulong *)((long)puVar26 + 2);
                    puVar42 = (ulong *)((long)puVar42 + 2);
                  }
                }
                if ((puVar26 < puVar2) && ((char)*puVar42 == (char)*puVar26)) {
                  puVar26 = (ulong *)((long)puVar26 + 1);
                }
                uVar20 = (long)puVar26 - (long)puVar28;
              }
              iVar6 = (int)param_4 - iVar33;
              uVar25 = *param_4;
              *(int *)(lVar32 + (uVar25 * -0x30e4432345000000 >> (uVar37 & 0x3f)) * 4) = iVar6;
              *(int *)(lVar31 + (uVar25 * -0x30e44323485a9b9d >> (uVar12 & 0x3f)) * 4) = iVar6;
              if (param_4 <= puVar41) {
                puVar28 = (ulong *)param_2[3];
                uVar25 = *param_4;
                puVar28[1] = param_4[1];
                *puVar28 = uVar25;
                piVar16 = (int *)param_2[1];
              }
              *(undefined2 *)(piVar16 + 1) = 0;
              *piVar16 = 1;
              if (0xffff < uVar20 + 1) {
                *(undefined4 *)(param_2 + 9) = 2;
                *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar16 - *param_2) >> 3);
              }
              *(short *)((long)piVar16 + 6) = (short)(uVar20 + 1);
              piVar16 = piVar16 + 2;
              param_4 = (ulong *)((long)param_4 + uVar20 + 4);
              param_2[1] = (long)piVar16;
              uVar25 = uVar23;
              uVar20 = uVar23;
              puVar28 = param_4;
              uVar23 = uVar13;
            } while (param_4 <= puVar36);
          }
        }
        uVar22 = (uint)uVar23;
        uVar19 = (uint)uVar20;
      } while (puVar28 < puVar36);
    }
  }
  else if (iVar6 == 6) {
    if (puVar28 < puVar36) {
      uVar12 = (ulong)(0x40 - *(int *)(param_1 + 0xc0));
      uVar37 = (ulong)(0x40 - *(int *)(param_1 + 0xbc));
      puVar38 = (ulong *)((long)puVar2 - 7);
      puVar39 = (ulong *)((long)puVar2 - 3);
      puVar40 = (ulong *)((long)puVar2 - 1);
      puVar41 = puVar2 + -4;
      lVar24 = lVar34 + -1;
      do {
        uVar25 = *puVar28;
        uVar27 = uVar25 * -0x30e44323485a9b9d >> (uVar12 & 0x3f);
        uVar35 = uVar25 * -0x30e4432340650000 >> (uVar37 & 0x3f);
        iVar6 = (int)puVar28 - iVar33;
        uVar22 = *(uint *)(lVar31 + uVar27 * 4);
        uVar13 = (ulong)uVar22;
        uVar19 = *(uint *)(lVar32 + uVar35 * 4);
        uVar29 = (ulong)uVar19;
        *(int *)(lVar32 + uVar35 * 4) = iVar6;
        *(int *)(lVar31 + uVar27 * 4) = iVar6;
        puVar42 = (ulong *)((long)puVar28 + 1);
        if (((int)uVar20 == 0) ||
           (*(int *)((long)puVar42 - (uVar20 & 0xffffffff)) != *(int *)puVar42)) {
          if ((uVar4 < uVar22) && (puVar26 = (ulong *)(lVar34 + uVar13), *puVar26 == uVar25)) {
            puVar42 = puVar28 + 1;
            puVar17 = puVar26 + 1;
            puVar15 = puVar42;
            if (puVar42 < puVar38) {
              if (*puVar17 == *puVar42) {
                lVar14 = 0;
                puVar17 = (ulong *)(lVar34 + 0x10 + uVar13);
                puVar15 = puVar28 + 2;
                do {
                  if (puVar38 <= puVar15) goto LAB_1099b6698;
                  uVar23 = *puVar17;
                  uVar25 = *puVar15;
                  lVar14 = lVar14 + 8;
                  puVar17 = puVar17 + 1;
                  puVar15 = puVar15 + 1;
                } while (uVar23 == uVar25);
                uVar25 = uVar25 ^ uVar23;
                uVar23 = (uVar25 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar25 & 0x5555555555555555) << 1;
                uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
                uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
                uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
                uVar23 = lVar14 + ((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3);
              }
              else {
                uVar23 = *puVar42 ^ *puVar17;
                uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
                uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
                uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
                uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
                uVar23 = (ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3;
              }
            }
            else {
LAB_1099b6698:
              if (puVar15 < puVar39) {
                if ((int)*puVar17 == (int)*puVar15) {
                  puVar17 = (ulong *)((long)puVar17 + 4);
                  puVar15 = (ulong *)((long)puVar15 + 4);
                }
              }
              if (puVar15 < puVar40) {
                if ((short)*puVar17 == (short)*puVar15) {
                  puVar17 = (ulong *)((long)puVar17 + 2);
                  puVar15 = (ulong *)((long)puVar15 + 2);
                }
              }
              if ((puVar15 < puVar2) && ((char)*puVar17 == (char)*puVar15)) {
                puVar15 = (ulong *)((long)puVar15 + 1);
              }
              uVar23 = (long)puVar15 - (long)puVar42;
            }
            lVar14 = uVar23 + 8;
            uVar25 = (long)puVar28 - (long)puVar26;
            puVar42 = puVar28;
            if (param_4 < puVar28) {
              puVar28 = (ulong *)((long)puVar28 + -1);
              pcVar30 = (char *)(lVar24 + uVar13);
              do {
                if ((char)*puVar28 != *pcVar30) goto LAB_1099b6834;
                lVar14 = lVar14 + 1;
                puVar42 = (ulong *)((long)puVar28 + -1);
              } while ((param_4 < puVar28) &&
                      (bVar1 = pcVar3 < pcVar30, puVar28 = puVar42, pcVar30 = pcVar30 + -1, bVar1));
LAB_1099b67d0:
              puVar42 = (ulong *)((long)puVar42 + 1);
            }
LAB_1099b6840:
            uVar23 = (long)puVar42 - (long)param_4;
            puVar28 = (ulong *)param_2[3];
            if (puVar41 < puVar42) {
              puVar26 = puVar28;
              puVar17 = param_4;
              if (param_4 <= puVar41) {
                puVar26 = (ulong *)((long)puVar28 + ((long)puVar41 - (long)param_4));
                uVar13 = *param_4;
                puVar28[1] = param_4[1];
                *puVar28 = uVar13;
                uVar13 = param_4[2];
                puVar28[3] = param_4[3];
                puVar28[2] = uVar13;
                puVar17 = puVar41;
                if (0x20 < (long)puVar41 - (long)param_4) {
                  puVar28 = puVar28 + 4;
                  puVar15 = param_4 + 6;
                  do {
                    uVar13 = puVar15[-2];
                    puVar28[1] = puVar15[-1];
                    *puVar28 = uVar13;
                    uVar13 = *puVar15;
                    puVar28[3] = puVar15[1];
                    puVar28[2] = uVar13;
                    puVar28 = puVar28 + 4;
                    puVar15 = puVar15 + 4;
                  } while (puVar28 < puVar26);
                }
              }
              if (puVar17 < puVar42) {
                do {
                  puVar28 = (ulong *)((long)puVar17 + 1);
                  *(char *)puVar26 = (char)*puVar17;
                  puVar26 = (ulong *)((long)puVar26 + 1);
                  puVar17 = puVar28;
                } while (puVar28 != puVar42);
              }
LAB_1099b6914:
              param_2[3] = param_2[3] + uVar23;
              piVar16 = (int *)param_2[1];
              if (0xffff < uVar23) {
                *(undefined4 *)(param_2 + 9) = 1;
                *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar16 - *param_2) >> 3);
              }
            }
            else {
              uVar13 = *param_4;
              puVar28[1] = param_4[1];
              *puVar28 = uVar13;
              lVar21 = param_2[3];
              if (0x10 < uVar23) {
                uVar13 = param_4[2];
                *(ulong *)(lVar21 + 0x18) = param_4[3];
                *(ulong *)(lVar21 + 0x10) = uVar13;
                uVar13 = param_4[4];
                *(ulong *)(lVar21 + 0x28) = param_4[5];
                *(ulong *)(lVar21 + 0x20) = uVar13;
                if (0x30 < (long)uVar23) {
                  puVar28 = (ulong *)(lVar21 + 0x30);
                  puVar26 = param_4 + 8;
                  do {
                    uVar13 = puVar26[-2];
                    puVar28[1] = puVar26[-1];
                    *puVar28 = uVar13;
                    uVar13 = *puVar26;
                    puVar28[3] = puVar26[1];
                    puVar28[2] = uVar13;
                    puVar28 = puVar28 + 4;
                    puVar26 = puVar26 + 4;
                  } while (puVar28 < (ulong *)(lVar21 + uVar23));
                }
                goto LAB_1099b6914;
              }
              param_2[3] = lVar21 + uVar23;
              piVar16 = (int *)param_2[1];
            }
            uVar13 = lVar14 - 3;
            *(short *)(piVar16 + 1) = (short)uVar23;
            *piVar16 = (int)uVar25 + 3;
            uVar23 = uVar20;
            if (0xffff < uVar13) goto LAB_1099b6410;
            goto LAB_1099b6424;
          }
          if ((uVar4 < uVar19) && (piVar16 = (int *)(lVar34 + uVar29), *piVar16 == (int)*puVar28)) {
            uVar25 = *puVar42;
            uVar13 = uVar25 * -0x30e44323485a9b9d >> (uVar12 & 0x3f);
            uVar22 = *(uint *)(lVar31 + uVar13 * 4);
            uVar23 = (ulong)uVar22;
            *(int *)(lVar31 + uVar13 * 4) = iVar6 + 1;
            if ((uVar4 < uVar22) && (puVar26 = (ulong *)(lVar34 + uVar23), *puVar26 == uVar25)) {
              puVar17 = (ulong *)((long)puVar28 + 9);
              puVar15 = puVar26 + 1;
              puVar18 = puVar17;
              if (puVar17 < puVar38) {
                if (*puVar15 == *puVar17) {
                  lVar14 = 0;
                  puVar18 = (ulong *)((long)puVar28 + 0x11);
                  puVar15 = (ulong *)(lVar34 + 0x10 + uVar23);
                  do {
                    if (puVar38 <= puVar18) goto LAB_1099b6990;
                    uVar13 = *puVar15;
                    uVar25 = *puVar18;
                    lVar14 = lVar14 + 8;
                    puVar18 = puVar18 + 1;
                    puVar15 = puVar15 + 1;
                  } while (uVar13 == uVar25);
                  uVar25 = uVar25 ^ uVar13;
                  uVar13 = (uVar25 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar25 & 0x5555555555555555) << 1;
                  uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
                  uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
                  uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10
                  ;
                  uVar13 = lVar14 + ((ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3);
                }
                else {
                  uVar13 = *puVar17 ^ *puVar15;
                  uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
                  uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
                  uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
                  uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10
                  ;
                  uVar13 = (ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3;
                }
              }
              else {
LAB_1099b6990:
                if (puVar18 < puVar39) {
                  if ((int)*puVar15 == (int)*puVar18) {
                    puVar18 = (ulong *)((long)puVar18 + 4);
                    puVar15 = (ulong *)((long)puVar15 + 4);
                  }
                }
                if (puVar18 < puVar40) {
                  if ((short)*puVar15 == (short)*puVar18) {
                    puVar18 = (ulong *)((long)puVar18 + 2);
                    puVar15 = (ulong *)((long)puVar15 + 2);
                  }
                }
                if ((puVar18 < puVar2) && ((char)*puVar15 == (char)*puVar18)) {
                  puVar18 = (ulong *)((long)puVar18 + 1);
                }
                uVar13 = (long)puVar18 - (long)puVar17;
              }
              lVar14 = uVar13 + 8;
              uVar25 = (long)puVar42 - (long)puVar26;
              if (param_4 < puVar42) {
                pcVar30 = (char *)(lVar24 + uVar23);
                do {
                  if ((char)*puVar28 != *pcVar30) goto LAB_1099b6834;
                  lVar14 = lVar14 + 1;
                  puVar42 = (ulong *)((long)puVar28 + -1);
                } while ((param_4 < puVar28) &&
                        (bVar1 = pcVar3 < pcVar30, puVar28 = puVar42, pcVar30 = pcVar30 + -1, bVar1)
                        );
                goto LAB_1099b67d0;
              }
            }
            else {
              puVar42 = (ulong *)((long)puVar28 + 4);
              puVar26 = (ulong *)(piVar16 + 1);
              puVar17 = puVar42;
              if (puVar42 < puVar38) {
                if (*puVar26 == *puVar42) {
                  lVar14 = 0;
                  puVar17 = (ulong *)((long)puVar28 + 0xc);
                  puVar26 = (ulong *)(lVar34 + 0xc + uVar29);
                  do {
                    if (puVar38 <= puVar17) goto LAB_1099b6708;
                    uVar13 = *puVar26;
                    uVar23 = *puVar17;
                    lVar14 = lVar14 + 8;
                    puVar17 = puVar17 + 1;
                    puVar26 = puVar26 + 1;
                  } while (uVar13 == uVar23);
                  uVar23 = uVar23 ^ uVar13;
                  uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
                  uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
                  uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
                  uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10
                  ;
                  uVar23 = lVar14 + ((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3);
                }
                else {
                  uVar23 = *puVar42 ^ *puVar26;
                  uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
                  uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
                  uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
                  uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10
                  ;
                  uVar23 = (ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3;
                }
              }
              else {
LAB_1099b6708:
                if (puVar17 < puVar39) {
                  if ((int)*puVar26 == (int)*puVar17) {
                    puVar17 = (ulong *)((long)puVar17 + 4);
                    puVar26 = (ulong *)((long)puVar26 + 4);
                  }
                }
                if (puVar17 < puVar40) {
                  if ((short)*puVar26 == (short)*puVar17) {
                    puVar17 = (ulong *)((long)puVar17 + 2);
                    puVar26 = (ulong *)((long)puVar26 + 2);
                  }
                }
                if ((puVar17 < puVar2) && ((char)*puVar26 == (char)*puVar17)) {
                  puVar17 = (ulong *)((long)puVar17 + 1);
                }
                uVar23 = (long)puVar17 - (long)puVar42;
              }
              lVar14 = uVar23 + 4;
              uVar25 = (long)puVar28 - (long)piVar16;
              puVar42 = puVar28;
              if (param_4 < puVar28) {
                puVar42 = (ulong *)((long)puVar28 + -1);
                pcVar30 = (char *)(lVar24 + uVar29);
                do {
                  if ((char)*puVar42 != *pcVar30) goto LAB_1099b67d0;
                  lVar14 = lVar14 + 1;
                  puVar28 = (ulong *)((long)puVar42 + -1);
                } while ((param_4 < puVar42) &&
                        (bVar1 = pcVar3 < pcVar30, puVar42 = puVar28, pcVar30 = pcVar30 + -1, bVar1)
                        );
LAB_1099b6834:
                puVar42 = (ulong *)((long)puVar28 + 1);
              }
            }
            goto LAB_1099b6840;
          }
          puVar28 = (ulong *)((long)puVar28 + ((long)puVar28 - (long)param_4 >> 8) + 1);
        }
        else {
          puVar26 = (ulong *)((long)puVar28 + 5);
          puVar17 = (ulong *)((long)puVar26 + -(uVar20 & 0xffffffff));
          puVar15 = puVar26;
          if (puVar26 < puVar38) {
            if (*puVar17 == *puVar26) {
              lVar14 = 0;
              puVar15 = (ulong *)((long)puVar28 + 0xd);
              puVar17 = (ulong *)((long)puVar28 + 0xd + -(uVar20 & 0xffffffff));
              do {
                if (puVar38 <= puVar15) goto LAB_1099b6268;
                uVar13 = *puVar17;
                uVar25 = *puVar15;
                lVar14 = lVar14 + 8;
                puVar15 = puVar15 + 1;
                puVar17 = puVar17 + 1;
              } while (uVar13 == uVar25);
              uVar25 = uVar25 ^ uVar13;
              uVar13 = (uVar25 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar25 & 0x5555555555555555) << 1;
              uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
              uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
              uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
              uVar13 = lVar14 + ((ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3);
            }
            else {
              uVar13 = *puVar26 ^ *puVar17;
              uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
              uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
              uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
              uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
              uVar13 = (ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3;
            }
          }
          else {
LAB_1099b6268:
            if (puVar15 < puVar39) {
              if ((int)*puVar17 == (int)*puVar15) {
                puVar15 = (ulong *)((long)puVar15 + 4);
                puVar17 = (ulong *)((long)puVar17 + 4);
              }
            }
            if (puVar15 < puVar40) {
              if ((short)*puVar17 == (short)*puVar15) {
                puVar15 = (ulong *)((long)puVar15 + 2);
                puVar17 = (ulong *)((long)puVar17 + 2);
              }
            }
            if ((puVar15 < puVar2) && ((char)*puVar17 == (char)*puVar15)) {
              puVar15 = (ulong *)((long)puVar15 + 1);
            }
            uVar13 = (long)puVar15 - (long)puVar26;
          }
          uVar25 = (long)puVar42 - (long)param_4;
          puVar26 = (ulong *)param_2[3];
          if (puVar41 < puVar42) {
            puVar15 = param_4;
            puVar17 = puVar26;
            if (param_4 <= puVar41) {
              puVar17 = (ulong *)((long)puVar26 + ((long)puVar41 - (long)param_4));
              uVar27 = *param_4;
              puVar26[1] = param_4[1];
              *puVar26 = uVar27;
              uVar27 = param_4[2];
              puVar26[3] = param_4[3];
              puVar26[2] = uVar27;
              puVar15 = puVar41;
              if (0x20 < (long)puVar41 - (long)param_4) {
                puVar26 = puVar26 + 4;
                puVar18 = param_4 + 6;
                do {
                  uVar27 = puVar18[-2];
                  puVar26[1] = puVar18[-1];
                  *puVar26 = uVar27;
                  uVar27 = *puVar18;
                  puVar26[3] = puVar18[1];
                  puVar26[2] = uVar27;
                  puVar26 = puVar26 + 4;
                  puVar18 = puVar18 + 4;
                } while (puVar26 < puVar17);
              }
            }
            if (puVar15 < puVar42) {
              puVar15 = (ulong *)((long)puVar15 + -1);
              do {
                puVar15 = (ulong *)((long)puVar15 + 1);
                *(undefined1 *)puVar17 = *(undefined1 *)puVar15;
                puVar17 = (ulong *)((long)puVar17 + 1);
              } while (puVar15 != puVar28);
            }
LAB_1099b63bc:
            param_2[3] = param_2[3] + uVar25;
            piVar16 = (int *)param_2[1];
            if (0xffff < uVar25) {
              *(undefined4 *)(param_2 + 9) = 1;
              *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar16 - *param_2) >> 3);
            }
          }
          else {
            uVar27 = *param_4;
            puVar26[1] = param_4[1];
            *puVar26 = uVar27;
            lVar14 = param_2[3];
            if (0x10 < uVar25) {
              uVar27 = param_4[2];
              *(ulong *)(lVar14 + 0x18) = param_4[3];
              *(ulong *)(lVar14 + 0x10) = uVar27;
              uVar27 = param_4[4];
              *(ulong *)(lVar14 + 0x28) = param_4[5];
              *(ulong *)(lVar14 + 0x20) = uVar27;
              if (0x30 < (long)uVar25) {
                puVar28 = (ulong *)(lVar14 + 0x30);
                puVar26 = param_4 + 8;
                do {
                  uVar27 = puVar26[-2];
                  puVar28[1] = puVar26[-1];
                  *puVar28 = uVar27;
                  uVar27 = *puVar26;
                  puVar28[3] = puVar26[1];
                  puVar28[2] = uVar27;
                  puVar28 = puVar28 + 4;
                  puVar26 = puVar26 + 4;
                } while (puVar28 < (ulong *)(lVar14 + uVar25));
              }
              goto LAB_1099b63bc;
            }
            param_2[3] = lVar14 + uVar25;
            piVar16 = (int *)param_2[1];
          }
          lVar14 = uVar13 + 4;
          uVar13 = uVar13 + 1;
          *(short *)(piVar16 + 1) = (short)uVar25;
          *piVar16 = 1;
          uVar25 = uVar20;
          if (uVar13 >> 0x10 != 0) {
LAB_1099b6410:
            *(undefined4 *)(param_2 + 9) = 2;
            *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar16 - *param_2) >> 3);
          }
LAB_1099b6424:
          *(short *)((long)piVar16 + 6) = (short)uVar13;
          piVar16 = piVar16 + 2;
          param_2[1] = (long)piVar16;
          param_4 = (ulong *)((long)puVar42 + lVar14);
          uVar20 = uVar25;
          puVar28 = param_4;
          if (param_4 <= puVar36) {
            uVar22 = iVar6 + 2;
            lVar14 = *(long *)(lVar34 + (ulong)uVar22);
            *(uint *)(lVar31 + ((ulong)(lVar14 * -0x30e44323485a9b9d) >> (uVar12 & 0x3f)) * 4) =
                 uVar22;
            *(int *)(lVar31 + ((ulong)(*(long *)((long)param_4 - 2U) * -0x30e44323485a9b9d) >>
                              (uVar12 & 0x3f)) * 4) = (int)(long *)((long)param_4 - 2U) - iVar33;
            *(uint *)(lVar32 + ((ulong)(lVar14 * -0x30e4432340650000) >> (uVar37 & 0x3f)) * 4) =
                 uVar22;
            *(int *)(lVar32 + ((ulong)(*(long *)((long)param_4 - 1U) * -0x30e4432340650000) >>
                              (uVar37 & 0x3f)) * 4) = (int)(long *)((long)param_4 - 1U) - iVar33;
            do {
              uVar13 = uVar25;
              uVar20 = uVar13;
              puVar28 = param_4;
              if (((int)uVar23 == 0) ||
                 ((int)*param_4 != *(int *)((long)param_4 - (uVar23 & 0xffffffff)))) break;
              puVar28 = (ulong *)((long)param_4 + 4);
              puVar42 = (ulong *)((long)puVar28 + -(uVar23 & 0xffffffff));
              puVar26 = puVar28;
              if (puVar28 < puVar38) {
                if (*puVar42 == *puVar28) {
                  lVar14 = 0;
                  puVar26 = (ulong *)((long)param_4 + 0xc);
                  puVar42 = (ulong *)((long)param_4 + 0xc + -(uVar23 & 0xffffffff));
                  do {
                    if (puVar38 <= puVar26) goto LAB_1099b6518;
                    uVar20 = *puVar42;
                    uVar25 = *puVar26;
                    lVar14 = lVar14 + 8;
                    puVar26 = puVar26 + 1;
                    puVar42 = puVar42 + 1;
                  } while (uVar20 == uVar25);
                  uVar25 = uVar25 ^ uVar20;
                  uVar20 = (uVar25 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar25 & 0x5555555555555555) << 1;
                  uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
                  uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
                  uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10
                  ;
                  uVar20 = lVar14 + ((ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3);
                }
                else {
                  uVar20 = *puVar28 ^ *puVar42;
                  uVar20 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
                  uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
                  uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
                  uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10
                  ;
                  uVar20 = (ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3;
                }
              }
              else {
LAB_1099b6518:
                if (puVar26 < puVar39) {
                  if ((int)*puVar42 == (int)*puVar26) {
                    puVar26 = (ulong *)((long)puVar26 + 4);
                    puVar42 = (ulong *)((long)puVar42 + 4);
                  }
                }
                if (puVar26 < puVar40) {
                  if ((short)*puVar42 == (short)*puVar26) {
                    puVar26 = (ulong *)((long)puVar26 + 2);
                    puVar42 = (ulong *)((long)puVar42 + 2);
                  }
                }
                if ((puVar26 < puVar2) && ((char)*puVar42 == (char)*puVar26)) {
                  puVar26 = (ulong *)((long)puVar26 + 1);
                }
                uVar20 = (long)puVar26 - (long)puVar28;
              }
              iVar6 = (int)param_4 - iVar33;
              uVar25 = *param_4;
              *(int *)(lVar32 + (uVar25 * -0x30e4432340650000 >> (uVar37 & 0x3f)) * 4) = iVar6;
              *(int *)(lVar31 + (uVar25 * -0x30e44323485a9b9d >> (uVar12 & 0x3f)) * 4) = iVar6;
              if (param_4 <= puVar41) {
                puVar28 = (ulong *)param_2[3];
                uVar25 = *param_4;
                puVar28[1] = param_4[1];
                *puVar28 = uVar25;
                piVar16 = (int *)param_2[1];
              }
              *(undefined2 *)(piVar16 + 1) = 0;
              *piVar16 = 1;
              if (0xffff < uVar20 + 1) {
                *(undefined4 *)(param_2 + 9) = 2;
                *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar16 - *param_2) >> 3);
              }
              *(short *)((long)piVar16 + 6) = (short)(uVar20 + 1);
              piVar16 = piVar16 + 2;
              param_4 = (ulong *)((long)param_4 + uVar20 + 4);
              param_2[1] = (long)piVar16;
              uVar25 = uVar23;
              uVar20 = uVar23;
              puVar28 = param_4;
              uVar23 = uVar13;
            } while (param_4 <= puVar36);
          }
        }
        uVar22 = (uint)uVar23;
        uVar19 = (uint)uVar20;
      } while (puVar28 < puVar36);
    }
  }
  else if (iVar6 == 7) {
    if (puVar28 < puVar36) {
      uVar12 = (ulong)(0x40 - *(int *)(param_1 + 0xc0));
      uVar37 = (ulong)(0x40 - *(int *)(param_1 + 0xbc));
      puVar38 = (ulong *)((long)puVar2 - 7);
      puVar39 = (ulong *)((long)puVar2 - 3);
      puVar40 = (ulong *)((long)puVar2 - 1);
      puVar41 = puVar2 + -4;
      lVar24 = lVar34 + -1;
      do {
        uVar25 = *puVar28;
        uVar27 = uVar25 * -0x30e44323485a9b9d >> (uVar12 & 0x3f);
        uVar35 = uVar25 * -0x30e44323405a9d00 >> (uVar37 & 0x3f);
        iVar6 = (int)puVar28 - iVar33;
        uVar22 = *(uint *)(lVar31 + uVar27 * 4);
        uVar13 = (ulong)uVar22;
        uVar19 = *(uint *)(lVar32 + uVar35 * 4);
        uVar29 = (ulong)uVar19;
        *(int *)(lVar32 + uVar35 * 4) = iVar6;
        *(int *)(lVar31 + uVar27 * 4) = iVar6;
        puVar42 = (ulong *)((long)puVar28 + 1);
        if (((int)uVar20 == 0) ||
           (*(int *)((long)puVar42 - (uVar20 & 0xffffffff)) != *(int *)puVar42)) {
          if ((uVar4 < uVar22) && (puVar26 = (ulong *)(lVar34 + uVar13), *puVar26 == uVar25)) {
            puVar42 = puVar28 + 1;
            puVar17 = puVar26 + 1;
            puVar15 = puVar42;
            if (puVar42 < puVar38) {
              if (*puVar17 == *puVar42) {
                lVar14 = 0;
                puVar17 = (ulong *)(lVar34 + 0x10 + uVar13);
                puVar15 = puVar28 + 2;
                do {
                  if (puVar38 <= puVar15) goto LAB_1099b5c60;
                  uVar23 = *puVar17;
                  uVar25 = *puVar15;
                  lVar14 = lVar14 + 8;
                  puVar17 = puVar17 + 1;
                  puVar15 = puVar15 + 1;
                } while (uVar23 == uVar25);
                uVar25 = uVar25 ^ uVar23;
                uVar23 = (uVar25 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar25 & 0x5555555555555555) << 1;
                uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
                uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
                uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
                uVar23 = lVar14 + ((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3);
              }
              else {
                uVar23 = *puVar42 ^ *puVar17;
                uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
                uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
                uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
                uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
                uVar23 = (ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3;
              }
            }
            else {
LAB_1099b5c60:
              if (puVar15 < puVar39) {
                if ((int)*puVar17 == (int)*puVar15) {
                  puVar17 = (ulong *)((long)puVar17 + 4);
                  puVar15 = (ulong *)((long)puVar15 + 4);
                }
              }
              if (puVar15 < puVar40) {
                if ((short)*puVar17 == (short)*puVar15) {
                  puVar17 = (ulong *)((long)puVar17 + 2);
                  puVar15 = (ulong *)((long)puVar15 + 2);
                }
              }
              if ((puVar15 < puVar2) && ((char)*puVar17 == (char)*puVar15)) {
                puVar15 = (ulong *)((long)puVar15 + 1);
              }
              uVar23 = (long)puVar15 - (long)puVar42;
            }
            lVar14 = uVar23 + 8;
            uVar25 = (long)puVar28 - (long)puVar26;
            puVar42 = puVar28;
            if (param_4 < puVar28) {
              puVar28 = (ulong *)((long)puVar28 + -1);
              pcVar30 = (char *)(lVar24 + uVar13);
              do {
                if ((char)*puVar28 != *pcVar30) goto LAB_1099b5dfc;
                lVar14 = lVar14 + 1;
                puVar42 = (ulong *)((long)puVar28 + -1);
              } while ((param_4 < puVar28) &&
                      (bVar1 = pcVar3 < pcVar30, puVar28 = puVar42, pcVar30 = pcVar30 + -1, bVar1));
LAB_1099b5d98:
              puVar42 = (ulong *)((long)puVar42 + 1);
            }
LAB_1099b5e08:
            uVar23 = (long)puVar42 - (long)param_4;
            puVar28 = (ulong *)param_2[3];
            if (puVar41 < puVar42) {
              puVar26 = puVar28;
              puVar17 = param_4;
              if (param_4 <= puVar41) {
                puVar26 = (ulong *)((long)puVar28 + ((long)puVar41 - (long)param_4));
                uVar13 = *param_4;
                puVar28[1] = param_4[1];
                *puVar28 = uVar13;
                uVar13 = param_4[2];
                puVar28[3] = param_4[3];
                puVar28[2] = uVar13;
                puVar17 = puVar41;
                if (0x20 < (long)puVar41 - (long)param_4) {
                  puVar28 = puVar28 + 4;
                  puVar15 = param_4 + 6;
                  do {
                    uVar13 = puVar15[-2];
                    puVar28[1] = puVar15[-1];
                    *puVar28 = uVar13;
                    uVar13 = *puVar15;
                    puVar28[3] = puVar15[1];
                    puVar28[2] = uVar13;
                    puVar28 = puVar28 + 4;
                    puVar15 = puVar15 + 4;
                  } while (puVar28 < puVar26);
                }
              }
              if (puVar17 < puVar42) {
                do {
                  puVar28 = (ulong *)((long)puVar17 + 1);
                  *(char *)puVar26 = (char)*puVar17;
                  puVar26 = (ulong *)((long)puVar26 + 1);
                  puVar17 = puVar28;
                } while (puVar28 != puVar42);
              }
LAB_1099b5edc:
              param_2[3] = param_2[3] + uVar23;
              piVar16 = (int *)param_2[1];
              if (0xffff < uVar23) {
                *(undefined4 *)(param_2 + 9) = 1;
                *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar16 - *param_2) >> 3);
              }
            }
            else {
              uVar13 = *param_4;
              puVar28[1] = param_4[1];
              *puVar28 = uVar13;
              lVar21 = param_2[3];
              if (0x10 < uVar23) {
                uVar13 = param_4[2];
                *(ulong *)(lVar21 + 0x18) = param_4[3];
                *(ulong *)(lVar21 + 0x10) = uVar13;
                uVar13 = param_4[4];
                *(ulong *)(lVar21 + 0x28) = param_4[5];
                *(ulong *)(lVar21 + 0x20) = uVar13;
                if (0x30 < (long)uVar23) {
                  puVar28 = (ulong *)(lVar21 + 0x30);
                  puVar26 = param_4 + 8;
                  do {
                    uVar13 = puVar26[-2];
                    puVar28[1] = puVar26[-1];
                    *puVar28 = uVar13;
                    uVar13 = *puVar26;
                    puVar28[3] = puVar26[1];
                    puVar28[2] = uVar13;
                    puVar28 = puVar28 + 4;
                    puVar26 = puVar26 + 4;
                  } while (puVar28 < (ulong *)(lVar21 + uVar23));
                }
                goto LAB_1099b5edc;
              }
              param_2[3] = lVar21 + uVar23;
              piVar16 = (int *)param_2[1];
            }
            uVar13 = lVar14 - 3;
            *(short *)(piVar16 + 1) = (short)uVar23;
            *piVar16 = (int)uVar25 + 3;
            uVar23 = uVar20;
            if (0xffff < uVar13) goto LAB_1099b59d8;
            goto LAB_1099b59ec;
          }
          if ((uVar4 < uVar19) && (piVar16 = (int *)(lVar34 + uVar29), *piVar16 == (int)*puVar28)) {
            uVar25 = *puVar42;
            uVar13 = uVar25 * -0x30e44323485a9b9d >> (uVar12 & 0x3f);
            uVar22 = *(uint *)(lVar31 + uVar13 * 4);
            uVar23 = (ulong)uVar22;
            *(int *)(lVar31 + uVar13 * 4) = iVar6 + 1;
            if ((uVar4 < uVar22) && (puVar26 = (ulong *)(lVar34 + uVar23), *puVar26 == uVar25)) {
              puVar17 = (ulong *)((long)puVar28 + 9);
              puVar15 = puVar26 + 1;
              puVar18 = puVar17;
              if (puVar17 < puVar38) {
                if (*puVar15 == *puVar17) {
                  lVar14 = 0;
                  puVar18 = (ulong *)((long)puVar28 + 0x11);
                  puVar15 = (ulong *)(lVar34 + 0x10 + uVar23);
                  do {
                    if (puVar38 <= puVar18) goto LAB_1099b5f58;
                    uVar13 = *puVar15;
                    uVar25 = *puVar18;
                    lVar14 = lVar14 + 8;
                    puVar18 = puVar18 + 1;
                    puVar15 = puVar15 + 1;
                  } while (uVar13 == uVar25);
                  uVar25 = uVar25 ^ uVar13;
                  uVar13 = (uVar25 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar25 & 0x5555555555555555) << 1;
                  uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
                  uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
                  uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10
                  ;
                  uVar13 = lVar14 + ((ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3);
                }
                else {
                  uVar13 = *puVar17 ^ *puVar15;
                  uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
                  uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
                  uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
                  uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10
                  ;
                  uVar13 = (ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3;
                }
              }
              else {
LAB_1099b5f58:
                if (puVar18 < puVar39) {
                  if ((int)*puVar15 == (int)*puVar18) {
                    puVar18 = (ulong *)((long)puVar18 + 4);
                    puVar15 = (ulong *)((long)puVar15 + 4);
                  }
                }
                if (puVar18 < puVar40) {
                  if ((short)*puVar15 == (short)*puVar18) {
                    puVar18 = (ulong *)((long)puVar18 + 2);
                    puVar15 = (ulong *)((long)puVar15 + 2);
                  }
                }
                if ((puVar18 < puVar2) && ((char)*puVar15 == (char)*puVar18)) {
                  puVar18 = (ulong *)((long)puVar18 + 1);
                }
                uVar13 = (long)puVar18 - (long)puVar17;
              }
              lVar14 = uVar13 + 8;
              uVar25 = (long)puVar42 - (long)puVar26;
              if (param_4 < puVar42) {
                pcVar30 = (char *)(lVar24 + uVar23);
                do {
                  if ((char)*puVar28 != *pcVar30) goto LAB_1099b5dfc;
                  lVar14 = lVar14 + 1;
                  puVar42 = (ulong *)((long)puVar28 + -1);
                } while ((param_4 < puVar28) &&
                        (bVar1 = pcVar3 < pcVar30, puVar28 = puVar42, pcVar30 = pcVar30 + -1, bVar1)
                        );
                goto LAB_1099b5d98;
              }
            }
            else {
              puVar42 = (ulong *)((long)puVar28 + 4);
              puVar26 = (ulong *)(piVar16 + 1);
              puVar17 = puVar42;
              if (puVar42 < puVar38) {
                if (*puVar26 == *puVar42) {
                  lVar14 = 0;
                  puVar17 = (ulong *)((long)puVar28 + 0xc);
                  puVar26 = (ulong *)(lVar34 + 0xc + uVar29);
                  do {
                    if (puVar38 <= puVar17) goto LAB_1099b5cd0;
                    uVar13 = *puVar26;
                    uVar23 = *puVar17;
                    lVar14 = lVar14 + 8;
                    puVar17 = puVar17 + 1;
                    puVar26 = puVar26 + 1;
                  } while (uVar13 == uVar23);
                  uVar23 = uVar23 ^ uVar13;
                  uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
                  uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
                  uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
                  uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10
                  ;
                  uVar23 = lVar14 + ((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3);
                }
                else {
                  uVar23 = *puVar42 ^ *puVar26;
                  uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
                  uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
                  uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
                  uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10
                  ;
                  uVar23 = (ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3;
                }
              }
              else {
LAB_1099b5cd0:
                if (puVar17 < puVar39) {
                  if ((int)*puVar26 == (int)*puVar17) {
                    puVar17 = (ulong *)((long)puVar17 + 4);
                    puVar26 = (ulong *)((long)puVar26 + 4);
                  }
                }
                if (puVar17 < puVar40) {
                  if ((short)*puVar26 == (short)*puVar17) {
                    puVar17 = (ulong *)((long)puVar17 + 2);
                    puVar26 = (ulong *)((long)puVar26 + 2);
                  }
                }
                if ((puVar17 < puVar2) && ((char)*puVar26 == (char)*puVar17)) {
                  puVar17 = (ulong *)((long)puVar17 + 1);
                }
                uVar23 = (long)puVar17 - (long)puVar42;
              }
              lVar14 = uVar23 + 4;
              uVar25 = (long)puVar28 - (long)piVar16;
              puVar42 = puVar28;
              if (param_4 < puVar28) {
                puVar42 = (ulong *)((long)puVar28 + -1);
                pcVar30 = (char *)(lVar24 + uVar29);
                do {
                  if ((char)*puVar42 != *pcVar30) goto LAB_1099b5d98;
                  lVar14 = lVar14 + 1;
                  puVar28 = (ulong *)((long)puVar42 + -1);
                } while ((param_4 < puVar42) &&
                        (bVar1 = pcVar3 < pcVar30, puVar42 = puVar28, pcVar30 = pcVar30 + -1, bVar1)
                        );
LAB_1099b5dfc:
                puVar42 = (ulong *)((long)puVar28 + 1);
              }
            }
            goto LAB_1099b5e08;
          }
          puVar28 = (ulong *)((long)puVar28 + ((long)puVar28 - (long)param_4 >> 8) + 1);
        }
        else {
          puVar26 = (ulong *)((long)puVar28 + 5);
          puVar17 = (ulong *)((long)puVar26 + -(uVar20 & 0xffffffff));
          puVar15 = puVar26;
          if (puVar26 < puVar38) {
            if (*puVar17 == *puVar26) {
              lVar14 = 0;
              puVar15 = (ulong *)((long)puVar28 + 0xd);
              puVar17 = (ulong *)((long)puVar28 + 0xd + -(uVar20 & 0xffffffff));
              do {
                if (puVar38 <= puVar15) goto LAB_1099b5830;
                uVar13 = *puVar17;
                uVar25 = *puVar15;
                lVar14 = lVar14 + 8;
                puVar15 = puVar15 + 1;
                puVar17 = puVar17 + 1;
              } while (uVar13 == uVar25);
              uVar25 = uVar25 ^ uVar13;
              uVar13 = (uVar25 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar25 & 0x5555555555555555) << 1;
              uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
              uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
              uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
              uVar13 = lVar14 + ((ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3);
            }
            else {
              uVar13 = *puVar26 ^ *puVar17;
              uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
              uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
              uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
              uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
              uVar13 = (ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3;
            }
          }
          else {
LAB_1099b5830:
            if (puVar15 < puVar39) {
              if ((int)*puVar17 == (int)*puVar15) {
                puVar15 = (ulong *)((long)puVar15 + 4);
                puVar17 = (ulong *)((long)puVar17 + 4);
              }
            }
            if (puVar15 < puVar40) {
              if ((short)*puVar17 == (short)*puVar15) {
                puVar15 = (ulong *)((long)puVar15 + 2);
                puVar17 = (ulong *)((long)puVar17 + 2);
              }
            }
            if ((puVar15 < puVar2) && ((char)*puVar17 == (char)*puVar15)) {
              puVar15 = (ulong *)((long)puVar15 + 1);
            }
            uVar13 = (long)puVar15 - (long)puVar26;
          }
          uVar25 = (long)puVar42 - (long)param_4;
          puVar26 = (ulong *)param_2[3];
          if (puVar41 < puVar42) {
            puVar15 = param_4;
            puVar17 = puVar26;
            if (param_4 <= puVar41) {
              puVar17 = (ulong *)((long)puVar26 + ((long)puVar41 - (long)param_4));
              uVar27 = *param_4;
              puVar26[1] = param_4[1];
              *puVar26 = uVar27;
              uVar27 = param_4[2];
              puVar26[3] = param_4[3];
              puVar26[2] = uVar27;
              puVar15 = puVar41;
              if (0x20 < (long)puVar41 - (long)param_4) {
                puVar26 = puVar26 + 4;
                puVar18 = param_4 + 6;
                do {
                  uVar27 = puVar18[-2];
                  puVar26[1] = puVar18[-1];
                  *puVar26 = uVar27;
                  uVar27 = *puVar18;
                  puVar26[3] = puVar18[1];
                  puVar26[2] = uVar27;
                  puVar26 = puVar26 + 4;
                  puVar18 = puVar18 + 4;
                } while (puVar26 < puVar17);
              }
            }
            if (puVar15 < puVar42) {
              puVar15 = (ulong *)((long)puVar15 + -1);
              do {
                puVar15 = (ulong *)((long)puVar15 + 1);
                *(undefined1 *)puVar17 = *(undefined1 *)puVar15;
                puVar17 = (ulong *)((long)puVar17 + 1);
              } while (puVar15 != puVar28);
            }
LAB_1099b5984:
            param_2[3] = param_2[3] + uVar25;
            piVar16 = (int *)param_2[1];
            if (0xffff < uVar25) {
              *(undefined4 *)(param_2 + 9) = 1;
              *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar16 - *param_2) >> 3);
            }
          }
          else {
            uVar27 = *param_4;
            puVar26[1] = param_4[1];
            *puVar26 = uVar27;
            lVar14 = param_2[3];
            if (0x10 < uVar25) {
              uVar27 = param_4[2];
              *(ulong *)(lVar14 + 0x18) = param_4[3];
              *(ulong *)(lVar14 + 0x10) = uVar27;
              uVar27 = param_4[4];
              *(ulong *)(lVar14 + 0x28) = param_4[5];
              *(ulong *)(lVar14 + 0x20) = uVar27;
              if (0x30 < (long)uVar25) {
                puVar28 = (ulong *)(lVar14 + 0x30);
                puVar26 = param_4 + 8;
                do {
                  uVar27 = puVar26[-2];
                  puVar28[1] = puVar26[-1];
                  *puVar28 = uVar27;
                  uVar27 = *puVar26;
                  puVar28[3] = puVar26[1];
                  puVar28[2] = uVar27;
                  puVar28 = puVar28 + 4;
                  puVar26 = puVar26 + 4;
                } while (puVar28 < (ulong *)(lVar14 + uVar25));
              }
              goto LAB_1099b5984;
            }
            param_2[3] = lVar14 + uVar25;
            piVar16 = (int *)param_2[1];
          }
          lVar14 = uVar13 + 4;
          uVar13 = uVar13 + 1;
          *(short *)(piVar16 + 1) = (short)uVar25;
          *piVar16 = 1;
          uVar25 = uVar20;
          if (uVar13 >> 0x10 != 0) {
LAB_1099b59d8:
            *(undefined4 *)(param_2 + 9) = 2;
            *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar16 - *param_2) >> 3);
          }
LAB_1099b59ec:
          *(short *)((long)piVar16 + 6) = (short)uVar13;
          piVar16 = piVar16 + 2;
          param_2[1] = (long)piVar16;
          param_4 = (ulong *)((long)puVar42 + lVar14);
          uVar20 = uVar25;
          puVar28 = param_4;
          if (param_4 <= puVar36) {
            uVar22 = iVar6 + 2;
            lVar14 = *(long *)(lVar34 + (ulong)uVar22);
            *(uint *)(lVar31 + ((ulong)(lVar14 * -0x30e44323485a9b9d) >> (uVar12 & 0x3f)) * 4) =
                 uVar22;
            *(int *)(lVar31 + ((ulong)(*(long *)((long)param_4 - 2U) * -0x30e44323485a9b9d) >>
                              (uVar12 & 0x3f)) * 4) = (int)(long *)((long)param_4 - 2U) - iVar33;
            *(uint *)(lVar32 + ((ulong)(lVar14 * -0x30e44323405a9d00) >> (uVar37 & 0x3f)) * 4) =
                 uVar22;
            *(int *)(lVar32 + ((ulong)(*(long *)((long)param_4 - 1U) * -0x30e44323405a9d00) >>
                              (uVar37 & 0x3f)) * 4) = (int)(long *)((long)param_4 - 1U) - iVar33;
            do {
              uVar13 = uVar25;
              uVar20 = uVar13;
              puVar28 = param_4;
              if (((int)uVar23 == 0) ||
                 ((int)*param_4 != *(int *)((long)param_4 - (uVar23 & 0xffffffff)))) break;
              puVar28 = (ulong *)((long)param_4 + 4);
              puVar42 = (ulong *)((long)puVar28 + -(uVar23 & 0xffffffff));
              puVar26 = puVar28;
              if (puVar28 < puVar38) {
                if (*puVar42 == *puVar28) {
                  lVar14 = 0;
                  puVar26 = (ulong *)((long)param_4 + 0xc);
                  puVar42 = (ulong *)((long)param_4 + 0xc + -(uVar23 & 0xffffffff));
                  do {
                    if (puVar38 <= puVar26) goto LAB_1099b5ae0;
                    uVar20 = *puVar42;
                    uVar25 = *puVar26;
                    lVar14 = lVar14 + 8;
                    puVar26 = puVar26 + 1;
                    puVar42 = puVar42 + 1;
                  } while (uVar20 == uVar25);
                  uVar25 = uVar25 ^ uVar20;
                  uVar20 = (uVar25 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar25 & 0x5555555555555555) << 1;
                  uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
                  uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
                  uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10
                  ;
                  uVar20 = lVar14 + ((ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3);
                }
                else {
                  uVar20 = *puVar28 ^ *puVar42;
                  uVar20 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
                  uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
                  uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
                  uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10
                  ;
                  uVar20 = (ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3;
                }
              }
              else {
LAB_1099b5ae0:
                if (puVar26 < puVar39) {
                  if ((int)*puVar42 == (int)*puVar26) {
                    puVar26 = (ulong *)((long)puVar26 + 4);
                    puVar42 = (ulong *)((long)puVar42 + 4);
                  }
                }
                if (puVar26 < puVar40) {
                  if ((short)*puVar42 == (short)*puVar26) {
                    puVar26 = (ulong *)((long)puVar26 + 2);
                    puVar42 = (ulong *)((long)puVar42 + 2);
                  }
                }
                if ((puVar26 < puVar2) && ((char)*puVar42 == (char)*puVar26)) {
                  puVar26 = (ulong *)((long)puVar26 + 1);
                }
                uVar20 = (long)puVar26 - (long)puVar28;
              }
              iVar6 = (int)param_4 - iVar33;
              uVar25 = *param_4;
              *(int *)(lVar32 + (uVar25 * -0x30e44323405a9d00 >> (uVar37 & 0x3f)) * 4) = iVar6;
              *(int *)(lVar31 + (uVar25 * -0x30e44323485a9b9d >> (uVar12 & 0x3f)) * 4) = iVar6;
              if (param_4 <= puVar41) {
                puVar28 = (ulong *)param_2[3];
                uVar25 = *param_4;
                puVar28[1] = param_4[1];
                *puVar28 = uVar25;
                piVar16 = (int *)param_2[1];
              }
              *(undefined2 *)(piVar16 + 1) = 0;
              *piVar16 = 1;
              if (0xffff < uVar20 + 1) {
                *(undefined4 *)(param_2 + 9) = 2;
                *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar16 - *param_2) >> 3);
              }
              *(short *)((long)piVar16 + 6) = (short)(uVar20 + 1);
              piVar16 = piVar16 + 2;
              param_4 = (ulong *)((long)param_4 + uVar20 + 4);
              param_2[1] = (long)piVar16;
              uVar25 = uVar23;
              uVar20 = uVar23;
              puVar28 = param_4;
              uVar23 = uVar13;
            } while (param_4 <= puVar36);
          }
        }
        uVar22 = (uint)uVar23;
        uVar19 = (uint)uVar20;
      } while (puVar28 < puVar36);
    }
  }
  else if (puVar28 < puVar36) {
    uVar12 = (ulong)(0x40 - *(int *)(param_1 + 0xc0));
    uVar11 = 0x20 - *(int *)(param_1 + 0xbc);
    puVar38 = (ulong *)((long)puVar2 - 7);
    puVar39 = (ulong *)((long)puVar2 - 3);
    puVar40 = (ulong *)((long)puVar2 - 1);
    puVar41 = puVar2 + -4;
    lVar24 = lVar34 + -1;
    do {
      uVar13 = *puVar28;
      uVar25 = uVar13 * -0x30e44323485a9b9d >> (uVar12 & 0x3f);
      uVar8 = (uint)((int)uVar13 * -0x61c8864f) >> (ulong)(uVar11 & 0x1f);
      iVar6 = (int)puVar28 - iVar33;
      uVar22 = *(uint *)(lVar31 + uVar25 * 4);
      uVar37 = (ulong)uVar22;
      uVar19 = *(uint *)(lVar32 + (ulong)uVar8 * 4);
      uVar27 = (ulong)uVar19;
      *(int *)(lVar32 + (ulong)uVar8 * 4) = iVar6;
      *(int *)(lVar31 + uVar25 * 4) = iVar6;
      puVar42 = (ulong *)((long)puVar28 + 1);
      if (((int)uVar20 == 0) || (*(int *)((long)puVar42 - (uVar20 & 0xffffffff)) != *(int *)puVar42)
         ) {
        if ((uVar4 < uVar22) && (puVar26 = (ulong *)(lVar34 + uVar37), *puVar26 == uVar13)) {
          puVar42 = puVar28 + 1;
          puVar17 = puVar26 + 1;
          puVar15 = puVar42;
          if (puVar42 < puVar38) {
            if (*puVar17 == *puVar42) {
              lVar14 = 0;
              puVar17 = (ulong *)(lVar34 + 0x10 + uVar37);
              puVar15 = puVar28 + 2;
              do {
                if (puVar38 <= puVar15) goto LAB_1099b7b10;
                uVar23 = *puVar17;
                uVar13 = *puVar15;
                lVar14 = lVar14 + 8;
                puVar17 = puVar17 + 1;
                puVar15 = puVar15 + 1;
              } while (uVar23 == uVar13);
              uVar13 = uVar13 ^ uVar23;
              uVar23 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
              uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
              uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
              uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
              uVar23 = lVar14 + ((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3);
            }
            else {
              uVar23 = *puVar42 ^ *puVar17;
              uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
              uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
              uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
              uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
              uVar23 = (ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3;
            }
          }
          else {
LAB_1099b7b10:
            if (puVar15 < puVar39) {
              if ((int)*puVar17 == (int)*puVar15) {
                puVar17 = (ulong *)((long)puVar17 + 4);
                puVar15 = (ulong *)((long)puVar15 + 4);
              }
            }
            if (puVar15 < puVar40) {
              if ((short)*puVar17 == (short)*puVar15) {
                puVar17 = (ulong *)((long)puVar17 + 2);
                puVar15 = (ulong *)((long)puVar15 + 2);
              }
            }
            if ((puVar15 < puVar2) && ((char)*puVar17 == (char)*puVar15)) {
              puVar15 = (ulong *)((long)puVar15 + 1);
            }
            uVar23 = (long)puVar15 - (long)puVar42;
          }
          lVar14 = uVar23 + 8;
          uVar13 = (long)puVar28 - (long)puVar26;
          puVar42 = puVar28;
          if (param_4 < puVar28) {
            puVar42 = (ulong *)((long)puVar28 + -1);
            pcVar30 = (char *)(lVar24 + uVar37);
            do {
              if ((char)*puVar42 != *pcVar30) goto LAB_1099b7d88;
              lVar14 = lVar14 + 1;
              puVar28 = (ulong *)((long)puVar42 + -1);
            } while ((param_4 < puVar42) &&
                    (bVar1 = pcVar3 < pcVar30, puVar42 = puVar28, pcVar30 = pcVar30 + -1, bVar1));
LAB_1099b7ca8:
            puVar42 = (ulong *)((long)puVar28 + 1);
          }
LAB_1099b7d8c:
          uVar23 = (long)puVar42 - (long)param_4;
          puVar28 = (ulong *)param_2[3];
          if (puVar41 < puVar42) {
            puVar17 = param_4;
            puVar26 = puVar28;
            if (param_4 <= puVar41) {
              puVar26 = (ulong *)((long)puVar28 + ((long)puVar41 - (long)param_4));
              uVar37 = *param_4;
              puVar28[1] = param_4[1];
              *puVar28 = uVar37;
              uVar37 = param_4[2];
              puVar28[3] = param_4[3];
              puVar28[2] = uVar37;
              puVar17 = puVar41;
              if (0x20 < (long)puVar41 - (long)param_4) {
                puVar28 = puVar28 + 4;
                puVar15 = param_4 + 6;
                do {
                  uVar37 = puVar15[-2];
                  puVar28[1] = puVar15[-1];
                  *puVar28 = uVar37;
                  uVar37 = *puVar15;
                  puVar28[3] = puVar15[1];
                  puVar28[2] = uVar37;
                  puVar28 = puVar28 + 4;
                  puVar15 = puVar15 + 4;
                } while (puVar28 < puVar26);
              }
            }
            if (puVar17 < puVar42) {
              do {
                puVar28 = (ulong *)((long)puVar17 + 1);
                *(char *)puVar26 = (char)*puVar17;
                puVar17 = puVar28;
                puVar26 = (ulong *)((long)puVar26 + 1);
              } while (puVar28 != puVar42);
            }
LAB_1099b7e60:
            param_2[3] = param_2[3] + uVar23;
            piVar16 = (int *)param_2[1];
            if (0xffff < uVar23) {
              *(undefined4 *)(param_2 + 9) = 1;
              *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar16 - *param_2) >> 3);
            }
          }
          else {
            uVar37 = *param_4;
            puVar28[1] = param_4[1];
            *puVar28 = uVar37;
            lVar21 = param_2[3];
            if (0x10 < uVar23) {
              uVar37 = param_4[2];
              *(ulong *)(lVar21 + 0x18) = param_4[3];
              *(ulong *)(lVar21 + 0x10) = uVar37;
              uVar37 = param_4[4];
              *(ulong *)(lVar21 + 0x28) = param_4[5];
              *(ulong *)(lVar21 + 0x20) = uVar37;
              if (0x30 < (long)uVar23) {
                puVar28 = (ulong *)(lVar21 + 0x30);
                puVar26 = param_4 + 8;
                do {
                  uVar37 = puVar26[-2];
                  puVar28[1] = puVar26[-1];
                  *puVar28 = uVar37;
                  uVar37 = *puVar26;
                  puVar28[3] = puVar26[1];
                  puVar28[2] = uVar37;
                  puVar28 = puVar28 + 4;
                  puVar26 = puVar26 + 4;
                } while (puVar28 < (ulong *)(lVar21 + uVar23));
              }
              goto LAB_1099b7e60;
            }
            param_2[3] = lVar21 + uVar23;
            piVar16 = (int *)param_2[1];
          }
          uVar37 = lVar14 - 3;
          *(short *)(piVar16 + 1) = (short)uVar23;
          *piVar16 = (int)uVar13 + 3;
          uVar23 = uVar20;
          if (0xffff < uVar37) goto LAB_1099b7880;
          goto LAB_1099b7894;
        }
        if ((uVar4 < uVar19) && (piVar16 = (int *)(lVar34 + uVar27), *piVar16 == (int)*puVar28)) {
          uVar13 = *puVar42;
          uVar23 = uVar13 * -0x30e44323485a9b9d >> (uVar12 & 0x3f);
          uVar22 = *(uint *)(lVar31 + uVar23 * 4);
          uVar37 = (ulong)uVar22;
          *(int *)(lVar31 + uVar23 * 4) = iVar6 + 1;
          if ((uVar4 < uVar22) && (puVar26 = (ulong *)(lVar34 + uVar37), *puVar26 == uVar13)) {
            puVar17 = (ulong *)((long)puVar28 + 9);
            puVar15 = puVar26 + 1;
            puVar18 = puVar17;
            if (puVar17 < puVar38) {
              if (*puVar15 == *puVar17) {
                lVar14 = 0;
                puVar18 = (ulong *)((long)puVar28 + 0x11);
                puVar15 = (ulong *)(lVar34 + 0x10 + uVar37);
                do {
                  if (puVar38 <= puVar18) goto LAB_1099b7cd8;
                  uVar23 = *puVar15;
                  uVar13 = *puVar18;
                  lVar14 = lVar14 + 8;
                  puVar18 = puVar18 + 1;
                  puVar15 = puVar15 + 1;
                } while (uVar23 == uVar13);
                uVar13 = uVar13 ^ uVar23;
                uVar23 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
                uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
                uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
                uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
                uVar23 = lVar14 + ((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3);
              }
              else {
                uVar23 = *puVar17 ^ *puVar15;
                uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
                uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
                uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
                uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
                uVar23 = (ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3;
              }
            }
            else {
LAB_1099b7cd8:
              if (puVar18 < puVar39) {
                if ((int)*puVar15 == (int)*puVar18) {
                  puVar18 = (ulong *)((long)puVar18 + 4);
                  puVar15 = (ulong *)((long)puVar15 + 4);
                }
              }
              if (puVar18 < puVar40) {
                if ((short)*puVar15 == (short)*puVar18) {
                  puVar18 = (ulong *)((long)puVar18 + 2);
                  puVar15 = (ulong *)((long)puVar15 + 2);
                }
              }
              if ((puVar18 < puVar2) && ((char)*puVar15 == (char)*puVar18)) {
                puVar18 = (ulong *)((long)puVar18 + 1);
              }
              uVar23 = (long)puVar18 - (long)puVar17;
            }
            lVar14 = uVar23 + 8;
            uVar13 = (long)puVar42 - (long)puVar26;
            if (param_4 < puVar42) {
              pcVar30 = (char *)(lVar24 + uVar37);
              do {
                if ((char)*puVar28 != *pcVar30) goto LAB_1099b7ca8;
                lVar14 = lVar14 + 1;
                puVar42 = (ulong *)((long)puVar28 + -1);
              } while ((param_4 < puVar28) &&
                      (bVar1 = pcVar3 < pcVar30, puVar28 = puVar42, pcVar30 = pcVar30 + -1, bVar1));
LAB_1099b7d88:
              puVar42 = (ulong *)((long)puVar42 + 1);
            }
          }
          else {
            puVar42 = (ulong *)((long)puVar28 + 4);
            puVar26 = (ulong *)(piVar16 + 1);
            puVar17 = puVar42;
            if (puVar42 < puVar38) {
              if (*puVar26 == *puVar42) {
                lVar14 = 0;
                puVar17 = (ulong *)((long)puVar28 + 0xc);
                puVar26 = (ulong *)(lVar34 + 0xc + uVar27);
                do {
                  if (puVar38 <= puVar17) goto LAB_1099b7b80;
                  uVar37 = *puVar26;
                  uVar23 = *puVar17;
                  lVar14 = lVar14 + 8;
                  puVar17 = puVar17 + 1;
                  puVar26 = puVar26 + 1;
                } while (uVar37 == uVar23);
                uVar23 = uVar23 ^ uVar37;
                uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
                uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
                uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
                uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
                uVar23 = lVar14 + ((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3);
              }
              else {
                uVar23 = *puVar42 ^ *puVar26;
                uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
                uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
                uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
                uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
                uVar23 = (ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3;
              }
            }
            else {
LAB_1099b7b80:
              if (puVar17 < puVar39) {
                if ((int)*puVar26 == (int)*puVar17) {
                  puVar17 = (ulong *)((long)puVar17 + 4);
                  puVar26 = (ulong *)((long)puVar26 + 4);
                }
              }
              if (puVar17 < puVar40) {
                if ((short)*puVar26 == (short)*puVar17) {
                  puVar17 = (ulong *)((long)puVar17 + 2);
                  puVar26 = (ulong *)((long)puVar26 + 2);
                }
              }
              if ((puVar17 < puVar2) && ((char)*puVar26 == (char)*puVar17)) {
                puVar17 = (ulong *)((long)puVar17 + 1);
              }
              uVar23 = (long)puVar17 - (long)puVar42;
            }
            lVar14 = uVar23 + 4;
            uVar13 = (long)puVar28 - (long)piVar16;
            puVar42 = puVar28;
            if (param_4 < puVar28) {
              puVar42 = (ulong *)((long)puVar28 + -1);
              pcVar30 = (char *)(lVar24 + uVar27);
              do {
                if ((char)*puVar42 != *pcVar30) goto LAB_1099b7d88;
                lVar14 = lVar14 + 1;
                puVar28 = (ulong *)((long)puVar42 + -1);
              } while ((param_4 < puVar42) &&
                      (bVar1 = pcVar3 < pcVar30, puVar42 = puVar28, pcVar30 = pcVar30 + -1, bVar1));
              goto LAB_1099b7ca8;
            }
          }
          goto LAB_1099b7d8c;
        }
        puVar28 = (ulong *)((long)puVar28 + ((long)puVar28 - (long)param_4 >> 8) + 1);
      }
      else {
        puVar26 = (ulong *)((long)puVar28 + 5);
        puVar17 = (ulong *)((long)puVar26 + -(uVar20 & 0xffffffff));
        puVar15 = puVar26;
        if (puVar26 < puVar38) {
          if (*puVar17 == *puVar26) {
            lVar14 = 0;
            puVar15 = (ulong *)((long)puVar28 + 0xd);
            puVar17 = (ulong *)((long)puVar28 + 0xd + -(uVar20 & 0xffffffff));
            do {
              if (puVar38 <= puVar15) goto LAB_1099b76d8;
              uVar37 = *puVar17;
              uVar13 = *puVar15;
              lVar14 = lVar14 + 8;
              puVar15 = puVar15 + 1;
              puVar17 = puVar17 + 1;
            } while (uVar37 == uVar13);
            uVar13 = uVar13 ^ uVar37;
            uVar37 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
            uVar37 = (uVar37 & 0xcccccccccccccccc) >> 2 | (uVar37 & 0x3333333333333333) << 2;
            uVar37 = (uVar37 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar37 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar37 = (uVar37 & 0xff00ff00ff00ff00) >> 8 | (uVar37 & 0xff00ff00ff00ff) << 8;
            uVar37 = (uVar37 & 0xffff0000ffff0000) >> 0x10 | (uVar37 & 0xffff0000ffff) << 0x10;
            uVar37 = lVar14 + ((ulong)LZCOUNT(uVar37 >> 0x20 | uVar37 << 0x20) >> 3);
          }
          else {
            uVar37 = *puVar26 ^ *puVar17;
            uVar37 = (uVar37 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar37 & 0x5555555555555555) << 1;
            uVar37 = (uVar37 & 0xcccccccccccccccc) >> 2 | (uVar37 & 0x3333333333333333) << 2;
            uVar37 = (uVar37 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar37 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar37 = (uVar37 & 0xff00ff00ff00ff00) >> 8 | (uVar37 & 0xff00ff00ff00ff) << 8;
            uVar37 = (uVar37 & 0xffff0000ffff0000) >> 0x10 | (uVar37 & 0xffff0000ffff) << 0x10;
            uVar37 = (ulong)LZCOUNT(uVar37 >> 0x20 | uVar37 << 0x20) >> 3;
          }
        }
        else {
LAB_1099b76d8:
          if (puVar15 < puVar39) {
            if ((int)*puVar17 == (int)*puVar15) {
              puVar15 = (ulong *)((long)puVar15 + 4);
              puVar17 = (ulong *)((long)puVar17 + 4);
            }
          }
          if (puVar15 < puVar40) {
            if ((short)*puVar17 == (short)*puVar15) {
              puVar15 = (ulong *)((long)puVar15 + 2);
              puVar17 = (ulong *)((long)puVar17 + 2);
            }
          }
          if ((puVar15 < puVar2) && ((char)*puVar17 == (char)*puVar15)) {
            puVar15 = (ulong *)((long)puVar15 + 1);
          }
          uVar37 = (long)puVar15 - (long)puVar26;
        }
        uVar13 = (long)puVar42 - (long)param_4;
        puVar26 = (ulong *)param_2[3];
        if (puVar41 < puVar42) {
          puVar15 = param_4;
          puVar17 = puVar26;
          if (param_4 <= puVar41) {
            puVar17 = (ulong *)((long)puVar26 + ((long)puVar41 - (long)param_4));
            uVar25 = *param_4;
            puVar26[1] = param_4[1];
            *puVar26 = uVar25;
            uVar25 = param_4[2];
            puVar26[3] = param_4[3];
            puVar26[2] = uVar25;
            puVar15 = puVar41;
            if (0x20 < (long)puVar41 - (long)param_4) {
              puVar26 = puVar26 + 4;
              puVar18 = param_4 + 6;
              do {
                uVar25 = puVar18[-2];
                puVar26[1] = puVar18[-1];
                *puVar26 = uVar25;
                uVar25 = *puVar18;
                puVar26[3] = puVar18[1];
                puVar26[2] = uVar25;
                puVar26 = puVar26 + 4;
                puVar18 = puVar18 + 4;
              } while (puVar26 < puVar17);
            }
          }
          if (puVar15 < puVar42) {
            puVar15 = (ulong *)((long)puVar15 + -1);
            do {
              puVar15 = (ulong *)((long)puVar15 + 1);
              *(undefined1 *)puVar17 = *(undefined1 *)puVar15;
              puVar17 = (ulong *)((long)puVar17 + 1);
            } while (puVar15 != puVar28);
          }
LAB_1099b782c:
          param_2[3] = param_2[3] + uVar13;
          piVar16 = (int *)param_2[1];
          if (0xffff < uVar13) {
            *(undefined4 *)(param_2 + 9) = 1;
            *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar16 - *param_2) >> 3);
          }
        }
        else {
          uVar25 = *param_4;
          puVar26[1] = param_4[1];
          *puVar26 = uVar25;
          lVar14 = param_2[3];
          if (0x10 < uVar13) {
            uVar25 = param_4[2];
            *(ulong *)(lVar14 + 0x18) = param_4[3];
            *(ulong *)(lVar14 + 0x10) = uVar25;
            uVar25 = param_4[4];
            *(ulong *)(lVar14 + 0x28) = param_4[5];
            *(ulong *)(lVar14 + 0x20) = uVar25;
            if (0x30 < (long)uVar13) {
              puVar28 = (ulong *)(lVar14 + 0x30);
              puVar26 = param_4 + 8;
              do {
                uVar25 = puVar26[-2];
                puVar28[1] = puVar26[-1];
                *puVar28 = uVar25;
                uVar25 = *puVar26;
                puVar28[3] = puVar26[1];
                puVar28[2] = uVar25;
                puVar28 = puVar28 + 4;
                puVar26 = puVar26 + 4;
              } while (puVar28 < (ulong *)(lVar14 + uVar13));
            }
            goto LAB_1099b782c;
          }
          param_2[3] = lVar14 + uVar13;
          piVar16 = (int *)param_2[1];
        }
        lVar14 = uVar37 + 4;
        uVar37 = uVar37 + 1;
        *(short *)(piVar16 + 1) = (short)uVar13;
        *piVar16 = 1;
        uVar13 = uVar20;
        if (uVar37 >> 0x10 != 0) {
LAB_1099b7880:
          *(undefined4 *)(param_2 + 9) = 2;
          *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar16 - *param_2) >> 3);
        }
LAB_1099b7894:
        *(short *)((long)piVar16 + 6) = (short)uVar37;
        piVar16 = piVar16 + 2;
        param_2[1] = (long)piVar16;
        param_4 = (ulong *)((long)puVar42 + lVar14);
        uVar20 = uVar13;
        puVar28 = param_4;
        if (param_4 <= puVar36) {
          uVar22 = iVar6 + 2;
          *(uint *)(lVar31 + ((ulong)(*(long *)(lVar34 + (ulong)uVar22) * -0x30e44323485a9b9d) >>
                             (uVar12 & 0x3f)) * 4) = uVar22;
          *(int *)(lVar31 + ((ulong)(*(long *)((long)param_4 - 2U) * -0x30e44323485a9b9d) >>
                            (uVar12 & 0x3f)) * 4) = (int)(long *)((long)param_4 - 2U) - iVar33;
          *(uint *)(lVar32 + (ulong)((uint)(*(int *)(lVar34 + (ulong)uVar22) * -0x61c8864f) >>
                                    (ulong)(uVar11 & 0x1f)) * 4) = uVar22;
          *(int *)(lVar32 + (ulong)((uint)(*(int *)((long)param_4 - 1U) * -0x61c8864f) >>
                                   (ulong)(uVar11 & 0x1f)) * 4) =
               (int)(int *)((long)param_4 - 1U) - iVar33;
          do {
            uVar37 = uVar13;
            uVar20 = uVar37;
            puVar28 = param_4;
            if (((int)uVar23 == 0) ||
               ((int)*param_4 != *(int *)((long)param_4 - (uVar23 & 0xffffffff)))) break;
            puVar28 = (ulong *)((long)param_4 + 4);
            puVar42 = (ulong *)((long)puVar28 + -(uVar23 & 0xffffffff));
            puVar26 = puVar28;
            if (puVar28 < puVar38) {
              if (*puVar42 == *puVar28) {
                lVar14 = 0;
                puVar26 = (ulong *)((long)param_4 + 0xc);
                puVar42 = (ulong *)((long)param_4 + 0xc + -(uVar23 & 0xffffffff));
                do {
                  if (puVar38 <= puVar26) goto LAB_1099b7990;
                  uVar13 = *puVar42;
                  uVar20 = *puVar26;
                  lVar14 = lVar14 + 8;
                  puVar26 = puVar26 + 1;
                  puVar42 = puVar42 + 1;
                } while (uVar13 == uVar20);
                uVar20 = uVar20 ^ uVar13;
                uVar20 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
                uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
                uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
                uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
                uVar20 = lVar14 + ((ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3);
              }
              else {
                uVar20 = *puVar28 ^ *puVar42;
                uVar20 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
                uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
                uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
                uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
                uVar20 = (ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3;
              }
            }
            else {
LAB_1099b7990:
              if (puVar26 < puVar39) {
                if ((int)*puVar42 == (int)*puVar26) {
                  puVar26 = (ulong *)((long)puVar26 + 4);
                  puVar42 = (ulong *)((long)puVar42 + 4);
                }
              }
              if (puVar26 < puVar40) {
                if ((short)*puVar42 == (short)*puVar26) {
                  puVar26 = (ulong *)((long)puVar26 + 2);
                  puVar42 = (ulong *)((long)puVar42 + 2);
                }
              }
              if ((puVar26 < puVar2) && ((char)*puVar42 == (char)*puVar26)) {
                puVar26 = (ulong *)((long)puVar26 + 1);
              }
              uVar20 = (long)puVar26 - (long)puVar28;
            }
            iVar6 = (int)param_4 - iVar33;
            *(int *)(lVar32 + (ulong)((uint)((int)*param_4 * -0x61c8864f) >> (ulong)(uVar11 & 0x1f))
                              * 4) = iVar6;
            *(int *)(lVar31 + (*param_4 * -0x30e44323485a9b9d >> (uVar12 & 0x3f)) * 4) = iVar6;
            if (param_4 <= puVar41) {
              puVar28 = (ulong *)param_2[3];
              uVar13 = *param_4;
              puVar28[1] = param_4[1];
              *puVar28 = uVar13;
              piVar16 = (int *)param_2[1];
            }
            *(undefined2 *)(piVar16 + 1) = 0;
            *piVar16 = 1;
            if (0xffff < uVar20 + 1) {
              *(undefined4 *)(param_2 + 9) = 2;
              *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar16 - *param_2) >> 3);
            }
            *(short *)((long)piVar16 + 6) = (short)(uVar20 + 1);
            piVar16 = piVar16 + 2;
            param_4 = (ulong *)((long)param_4 + uVar20 + 4);
            param_2[1] = (long)piVar16;
            uVar13 = uVar23;
            uVar20 = uVar23;
            puVar28 = param_4;
            uVar23 = uVar37;
          } while (param_4 <= puVar36);
        }
      }
      uVar22 = (uint)uVar23;
      uVar19 = (uint)uVar20;
    } while (puVar28 < puVar36);
  }
  if (uVar7 <= uVar10) {
    uVar7 = 0;
  }
  if (uVar5 <= uVar10) {
    uVar5 = uVar7;
  }
  uVar4 = uVar5;
  if (uVar19 != 0) {
    uVar4 = uVar19;
  }
  if (uVar22 != 0) {
    uVar5 = uVar22;
  }
  *param_3 = uVar4;
  param_3[1] = uVar5;
  return (long)puVar2 - (long)param_4;
}



/* Entry: 1099b7f10; end: 1099bca5f;  */

long FUN_1099b7f10(long param_1,long *param_2,int *param_3,ulong *param_4,long param_5)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  ulong *puVar4;
  int *piVar5;
  uint uVar6;
  ulong *puVar7;
  ulong uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulong *puVar16;
  int *piVar17;
  long lVar18;
  ulong *puVar19;
  ulong *puVar20;
  ulong uVar21;
  ulong *puVar22;
  ulong *puVar23;
  ulong *puVar24;
  ulong uVar25;
  ulong *puVar26;
  long lVar27;
  long lVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  long lVar33;
  ulong *puVar34;
  ulong uVar35;
  int *piVar36;
  ulong *puVar37;
  ulong *puVar38;
  ulong uVar39;
  ulong uVar40;
  int iVar41;
  uint uVar42;
  uint uVar43;
  int iVar44;
  ulong *puVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  long lVar49;
  
  iVar9 = *(int *)(param_1 + 200);
  lVar28 = *(long *)(param_1 + 0x30);
  lVar18 = *(long *)(param_1 + 0x40);
  lVar49 = *(long *)(param_1 + 8);
  iVar48 = (int)lVar49;
  iVar47 = ((int)param_5 + (int)param_4) - iVar48;
  uVar11 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
  uVar6 = iVar47 - uVar11;
  if (iVar47 - *(uint *)(param_1 + 0x18) <= uVar11) {
    uVar6 = *(uint *)(param_1 + 0x18);
  }
  piVar3 = (int *)(lVar49 + (ulong)uVar6);
  puVar4 = (ulong *)((long)param_4 + param_5);
  puVar19 = puVar4 + -1;
  iVar47 = *param_3;
  iVar46 = param_3[1];
  puVar20 = *(ulong **)(param_1 + 0xb0);
  uVar29 = puVar20[6];
  uVar30 = puVar20[8];
  uVar10 = (uint)puVar20[3];
  puVar7 = (ulong *)*puVar20;
  uVar8 = puVar20[1];
  piVar5 = (int *)(uVar8 + uVar10);
  uVar11 = uVar6 + ((int)uVar8 - (int)puVar7);
  puVar38 = param_4;
  if ((int)puVar7 + ((int)param_4 - (int)piVar3) == (int)piVar5) {
    puVar38 = (ulong *)((long)param_4 + 1);
  }
  if (iVar9 == 5) {
    if (puVar38 < puVar19) {
      uVar31 = (ulong)(0x40 - *(int *)(param_1 + 0xc0));
      uVar25 = (ulong)(0x40 - *(int *)(param_1 + 0xbc));
      iVar9 = *(int *)((long)puVar20 + 0xbc);
      uVar21 = (ulong)(0x40 - (int)puVar20[0x18]);
      puVar22 = (ulong *)((long)puVar4 - 7);
      puVar26 = (ulong *)((long)puVar4 - 3);
      puVar23 = (ulong *)((long)puVar4 - 1);
      puVar20 = puVar4 + -4;
LAB_1099b9970:
      uVar35 = *puVar38;
      uVar39 = uVar35 * -0x30e44323485a9b9d >> (uVar31 & 0x3f);
      uVar40 = uVar35 * -0x30e4432345000000 >> (uVar25 & 0x3f);
      iVar41 = (int)puVar38;
      iVar44 = iVar41 - iVar48;
      uVar43 = *(uint *)(lVar28 + uVar39 * 4);
      uVar32 = (ulong)uVar43;
      uVar42 = *(uint *)(lVar18 + uVar40 * 4);
      iVar2 = iVar44 + 1;
      uVar14 = iVar2 - iVar47;
      piVar36 = (int *)(uVar8 + (uVar14 - uVar11));
      if (uVar6 <= uVar14) {
        piVar36 = (int *)(lVar49 + (ulong)uVar14);
      }
      *(int *)(lVar18 + uVar40 * 4) = iVar44;
      *(int *)(lVar28 + uVar39 * 4) = iVar44;
      if ((uVar14 - uVar6 < 0xfffffffd) &&
         (puVar45 = (ulong *)((long)puVar38 + 1), *piVar36 == *(int *)puVar45)) {
        puVar24 = puVar7;
        if (uVar6 <= uVar14) {
          puVar24 = puVar4;
        }
        lVar27 = (long)puVar38 + 5;
        FUN_1099bca60(lVar27,piVar36 + 1,puVar4,puVar24,piVar3);
        uVar32 = (long)puVar45 - (long)param_4;
        puVar24 = (ulong *)param_2[3];
        if (puVar20 < puVar45) {
          puVar16 = puVar24;
          puVar34 = param_4;
          if (param_4 <= puVar20) {
            puVar16 = (ulong *)((long)puVar24 + ((long)puVar20 - (long)param_4));
            uVar35 = *param_4;
            puVar24[1] = param_4[1];
            *puVar24 = uVar35;
            uVar35 = param_4[2];
            puVar24[3] = param_4[3];
            puVar24[2] = uVar35;
            puVar34 = puVar20;
            if (0x20 < (long)puVar20 - (long)param_4) {
              puVar24 = puVar24 + 4;
              puVar37 = param_4 + 6;
              do {
                uVar35 = puVar37[-2];
                puVar24[1] = puVar37[-1];
                *puVar24 = uVar35;
                uVar35 = *puVar37;
                puVar24[3] = puVar37[1];
                puVar24[2] = uVar35;
                puVar24 = puVar24 + 4;
                puVar37 = puVar37 + 4;
              } while (puVar24 < puVar16);
            }
          }
          if (puVar34 < puVar45) {
            puVar34 = (ulong *)((long)puVar34 + -1);
            do {
              puVar34 = (ulong *)((long)puVar34 + 1);
              *(undefined1 *)puVar16 = *(undefined1 *)puVar34;
              puVar16 = (ulong *)((long)puVar16 + 1);
            } while (puVar34 != puVar38);
          }
LAB_1099b9f34:
          param_2[3] = param_2[3] + uVar32;
          piVar36 = (int *)param_2[1];
          if (0xffff < uVar32) {
            *(undefined4 *)(param_2 + 9) = 1;
            *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar36 - *param_2) >> 3);
          }
        }
        else {
          uVar35 = *param_4;
          puVar24[1] = param_4[1];
          *puVar24 = uVar35;
          lVar33 = param_2[3];
          if (0x10 < uVar32) {
            uVar35 = param_4[2];
            *(ulong *)(lVar33 + 0x18) = param_4[3];
            *(ulong *)(lVar33 + 0x10) = uVar35;
            uVar35 = param_4[4];
            *(ulong *)(lVar33 + 0x28) = param_4[5];
            *(ulong *)(lVar33 + 0x20) = uVar35;
            if (0x30 < (long)uVar32) {
              puVar38 = (ulong *)(lVar33 + 0x30);
              puVar24 = param_4 + 8;
              do {
                uVar35 = puVar24[-2];
                puVar38[1] = puVar24[-1];
                *puVar38 = uVar35;
                uVar35 = *puVar24;
                puVar38[3] = puVar24[1];
                puVar38[2] = uVar35;
                puVar38 = puVar38 + 4;
                puVar24 = puVar24 + 4;
              } while (puVar38 < (ulong *)(lVar33 + uVar32));
            }
            goto LAB_1099b9f34;
          }
          param_2[3] = lVar33 + uVar32;
          piVar36 = (int *)param_2[1];
        }
        puVar16 = (ulong *)(lVar27 + 4);
        uVar35 = lVar27 + 1;
        *(short *)(piVar36 + 1) = (short)uVar32;
        *piVar36 = 1;
        iVar41 = iVar47;
        if (uVar35 >> 0x10 != 0) goto LAB_1099ba364;
        goto LAB_1099ba37c;
      }
      puVar45 = puVar38;
      if (uVar43 <= uVar6) {
        uVar43 = *(uint *)(uVar29 + (uVar35 * -0x30e44323485a9b9d >> (uVar21 & 0x3f)) * 4);
        if ((uVar43 <= uVar10) || (puVar24 = (ulong *)(uVar8 + uVar43), *puVar24 != uVar35))
        goto LAB_1099b9b84;
        puVar16 = puVar38 + 1;
        FUN_1099bca60(puVar16,puVar24 + 1,puVar4,puVar7,piVar3);
        puVar16 = puVar16 + 1;
        iVar41 = (iVar44 - uVar11) - uVar43;
        if (param_4 < puVar38) {
          piVar36 = (int *)((uVar8 - 1) + (ulong)uVar43);
          puVar45 = (ulong *)((long)puVar38 + -1);
          do {
            if ((char)*puVar45 != (char)*piVar36) goto LAB_1099ba234;
            puVar16 = (ulong *)((long)puVar16 + 1);
            puVar38 = (ulong *)((long)puVar45 + -1);
          } while ((param_4 < puVar45) &&
                  (bVar1 = piVar5 < piVar36, piVar36 = (int *)((long)piVar36 + -1),
                  puVar45 = puVar38, bVar1));
          goto LAB_1099ba1d0;
        }
        goto LAB_1099ba238;
      }
      puVar24 = (ulong *)(lVar49 + uVar32);
      if (*puVar24 == uVar35) {
        puVar16 = puVar38 + 1;
        puVar34 = puVar24 + 1;
        puVar37 = puVar16;
        if (puVar16 < puVar22) {
          if (*puVar34 == *puVar16) {
            lVar27 = 0;
            puVar37 = puVar38 + 2;
            puVar34 = (ulong *)(lVar49 + 0x10 + uVar32);
            do {
              if (puVar22 <= puVar37) goto LAB_1099b9d10;
              uVar39 = *puVar34;
              uVar35 = *puVar37;
              lVar27 = lVar27 + 8;
              puVar37 = puVar37 + 1;
              puVar34 = puVar34 + 1;
            } while (uVar39 == uVar35);
            uVar35 = uVar35 ^ uVar39;
            uVar35 = (uVar35 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar35 & 0x5555555555555555) << 1;
            uVar35 = (uVar35 & 0xcccccccccccccccc) >> 2 | (uVar35 & 0x3333333333333333) << 2;
            uVar35 = (uVar35 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar35 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar35 = (uVar35 & 0xff00ff00ff00ff00) >> 8 | (uVar35 & 0xff00ff00ff00ff) << 8;
            uVar35 = (uVar35 & 0xffff0000ffff0000) >> 0x10 | (uVar35 & 0xffff0000ffff) << 0x10;
            uVar35 = lVar27 + ((ulong)LZCOUNT(uVar35 >> 0x20 | uVar35 << 0x20) >> 3);
          }
          else {
            uVar35 = *puVar16 ^ *puVar34;
            uVar35 = (uVar35 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar35 & 0x5555555555555555) << 1;
            uVar35 = (uVar35 & 0xcccccccccccccccc) >> 2 | (uVar35 & 0x3333333333333333) << 2;
            uVar35 = (uVar35 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar35 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar35 = (uVar35 & 0xff00ff00ff00ff00) >> 8 | (uVar35 & 0xff00ff00ff00ff) << 8;
            uVar35 = (uVar35 & 0xffff0000ffff0000) >> 0x10 | (uVar35 & 0xffff0000ffff) << 0x10;
            uVar35 = (ulong)LZCOUNT(uVar35 >> 0x20 | uVar35 << 0x20) >> 3;
          }
        }
        else {
LAB_1099b9d10:
          if (puVar37 < puVar26) {
            if ((int)*puVar34 == (int)*puVar37) {
              puVar37 = (ulong *)((long)puVar37 + 4);
              puVar34 = (ulong *)((long)puVar34 + 4);
            }
          }
          if (puVar37 < puVar23) {
            if ((short)*puVar34 == (short)*puVar37) {
              puVar37 = (ulong *)((long)puVar37 + 2);
              puVar34 = (ulong *)((long)puVar34 + 2);
            }
          }
          if ((puVar37 < puVar4) && ((char)*puVar34 == (char)*puVar37)) {
            puVar37 = (ulong *)((long)puVar37 + 1);
          }
          uVar35 = (long)puVar37 - (long)puVar16;
        }
        puVar16 = (ulong *)(uVar35 + 8);
        iVar41 = iVar41 - (int)puVar24;
        if (puVar38 <= param_4) goto LAB_1099ba238;
        piVar36 = (int *)(lVar49 + -1 + uVar32);
        puVar45 = (ulong *)((long)puVar38 + -1);
        do {
          if ((char)*puVar45 != (char)*piVar36) goto LAB_1099ba234;
          puVar16 = (ulong *)((long)puVar16 + 1);
          puVar38 = (ulong *)((long)puVar45 + -1);
        } while ((param_4 < puVar45) &&
                (bVar1 = piVar3 < piVar36, piVar36 = (int *)((long)piVar36 + -1), puVar45 = puVar38,
                bVar1));
        goto LAB_1099ba1d0;
      }
LAB_1099b9b84:
      if (uVar6 < uVar42) {
        piVar36 = (int *)(lVar49 + (ulong)uVar42);
        if (*piVar36 != (int)*puVar38) goto LAB_1099b9c98;
LAB_1099b9be0:
        puVar45 = (ulong *)((long)puVar38 + 1);
        uVar32 = *puVar45;
        uVar39 = uVar32 * -0x30e44323485a9b9d >> (uVar31 & 0x3f);
        uVar43 = *(uint *)(lVar28 + uVar39 * 4);
        uVar35 = (ulong)uVar43;
        *(int *)(lVar28 + uVar39 * 4) = iVar2;
        if (uVar6 < uVar43) {
          puVar24 = (ulong *)(lVar49 + uVar35);
          if (*puVar24 == uVar32) {
            puVar16 = (ulong *)((long)puVar38 + 9);
            puVar34 = puVar24 + 1;
            puVar37 = puVar16;
            if (puVar16 < puVar22) {
              if (*puVar34 == *puVar16) {
                lVar27 = 0;
                puVar37 = (ulong *)((long)puVar38 + 0x11);
                puVar34 = (ulong *)(lVar49 + 0x10 + uVar35);
                do {
                  if (puVar22 <= puVar37) goto LAB_1099ba0f4;
                  uVar39 = *puVar34;
                  uVar32 = *puVar37;
                  lVar27 = lVar27 + 8;
                  puVar37 = puVar37 + 1;
                  puVar34 = puVar34 + 1;
                } while (uVar39 == uVar32);
                uVar32 = uVar32 ^ uVar39;
                uVar32 = (uVar32 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar32 & 0x5555555555555555) << 1;
                uVar32 = (uVar32 & 0xcccccccccccccccc) >> 2 | (uVar32 & 0x3333333333333333) << 2;
                uVar32 = (uVar32 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar32 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar32 = (uVar32 & 0xff00ff00ff00ff00) >> 8 | (uVar32 & 0xff00ff00ff00ff) << 8;
                uVar32 = (uVar32 & 0xffff0000ffff0000) >> 0x10 | (uVar32 & 0xffff0000ffff) << 0x10;
                uVar32 = lVar27 + ((ulong)LZCOUNT(uVar32 >> 0x20 | uVar32 << 0x20) >> 3);
              }
              else {
                uVar32 = *puVar16 ^ *puVar34;
                uVar32 = (uVar32 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar32 & 0x5555555555555555) << 1;
                uVar32 = (uVar32 & 0xcccccccccccccccc) >> 2 | (uVar32 & 0x3333333333333333) << 2;
                uVar32 = (uVar32 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar32 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar32 = (uVar32 & 0xff00ff00ff00ff00) >> 8 | (uVar32 & 0xff00ff00ff00ff) << 8;
                uVar32 = (uVar32 & 0xffff0000ffff0000) >> 0x10 | (uVar32 & 0xffff0000ffff) << 0x10;
                uVar32 = (ulong)LZCOUNT(uVar32 >> 0x20 | uVar32 << 0x20) >> 3;
              }
            }
            else {
LAB_1099ba0f4:
              if (puVar37 < puVar26) {
                if ((int)*puVar34 == (int)*puVar37) {
                  puVar37 = (ulong *)((long)puVar37 + 4);
                  puVar34 = (ulong *)((long)puVar34 + 4);
                }
              }
              if (puVar37 < puVar23) {
                if ((short)*puVar34 == (short)*puVar37) {
                  puVar37 = (ulong *)((long)puVar37 + 2);
                  puVar34 = (ulong *)((long)puVar34 + 2);
                }
              }
              if ((puVar37 < puVar4) && ((char)*puVar34 == (char)*puVar37)) {
                puVar37 = (ulong *)((long)puVar37 + 1);
              }
              uVar32 = (long)puVar37 - (long)puVar16;
            }
            puVar16 = (ulong *)(uVar32 + 8);
            iVar41 = (int)puVar45 - (int)puVar24;
            if (param_4 < puVar45) {
              piVar36 = (int *)(lVar49 + -1 + uVar35);
              do {
                if ((char)*puVar38 != (char)*piVar36) goto LAB_1099ba554;
                puVar16 = (ulong *)((long)puVar16 + 1);
                puVar45 = (ulong *)((long)puVar38 + -1);
              } while ((param_4 < puVar38) &&
                      (bVar1 = piVar3 < piVar36, piVar36 = (int *)((long)piVar36 + -1),
                      puVar38 = puVar45, bVar1));
LAB_1099ba234:
              puVar45 = (ulong *)((long)puVar45 + 1);
            }
          }
          else {
LAB_1099b9e34:
            puVar16 = (ulong *)((long)puVar38 + 4);
            puVar45 = (ulong *)(piVar36 + 1);
            if (uVar42 < uVar6) {
              FUN_1099bca60(puVar16,puVar45,puVar4,puVar7,piVar3);
              puVar16 = (ulong *)((long)puVar16 + 4);
              iVar41 = iVar44 - uVar42;
              puVar45 = puVar38;
              if ((param_4 < puVar38) && (piVar5 < piVar36)) {
                puVar45 = (ulong *)((long)puVar38 + -1);
                do {
                  piVar36 = (int *)((long)piVar36 + -1);
                  if ((char)*puVar45 != *(char *)piVar36) goto LAB_1099ba234;
                  puVar16 = (ulong *)((long)puVar16 + 1);
                  puVar38 = (ulong *)((long)puVar45 + -1);
                } while ((param_4 < puVar45) && (puVar45 = puVar38, piVar5 < piVar36));
LAB_1099ba1d0:
                puVar45 = (ulong *)((long)puVar38 + 1);
              }
            }
            else {
              puVar24 = puVar16;
              if (puVar16 < puVar22) {
                if (*puVar45 == *puVar16) {
                  lVar27 = 0;
                  puVar45 = (ulong *)(piVar36 + 3);
                  puVar24 = (ulong *)((long)puVar38 + 0xc);
                  do {
                    if (puVar22 <= puVar24) goto LAB_1099ba074;
                    uVar35 = *puVar45;
                    uVar32 = *puVar24;
                    lVar27 = lVar27 + 8;
                    puVar45 = puVar45 + 1;
                    puVar24 = puVar24 + 1;
                  } while (uVar35 == uVar32);
                  uVar32 = uVar32 ^ uVar35;
                  uVar32 = (uVar32 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar32 & 0x5555555555555555) << 1;
                  uVar32 = (uVar32 & 0xcccccccccccccccc) >> 2 | (uVar32 & 0x3333333333333333) << 2;
                  uVar32 = (uVar32 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar32 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar32 = (uVar32 & 0xff00ff00ff00ff00) >> 8 | (uVar32 & 0xff00ff00ff00ff) << 8;
                  uVar32 = (uVar32 & 0xffff0000ffff0000) >> 0x10 | (uVar32 & 0xffff0000ffff) << 0x10
                  ;
                  uVar32 = lVar27 + ((ulong)LZCOUNT(uVar32 >> 0x20 | uVar32 << 0x20) >> 3);
                }
                else {
                  uVar32 = *puVar16 ^ *puVar45;
                  uVar32 = (uVar32 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar32 & 0x5555555555555555) << 1;
                  uVar32 = (uVar32 & 0xcccccccccccccccc) >> 2 | (uVar32 & 0x3333333333333333) << 2;
                  uVar32 = (uVar32 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar32 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar32 = (uVar32 & 0xff00ff00ff00ff00) >> 8 | (uVar32 & 0xff00ff00ff00ff) << 8;
                  uVar32 = (uVar32 & 0xffff0000ffff0000) >> 0x10 | (uVar32 & 0xffff0000ffff) << 0x10
                  ;
                  uVar32 = (ulong)LZCOUNT(uVar32 >> 0x20 | uVar32 << 0x20) >> 3;
                }
              }
              else {
LAB_1099ba074:
                if (puVar24 < puVar26) {
                  if ((int)*puVar45 == (int)*puVar24) {
                    puVar45 = (ulong *)((long)puVar45 + 4);
                    puVar24 = (ulong *)((long)puVar24 + 4);
                  }
                }
                if (puVar24 < puVar23) {
                  if ((short)*puVar45 == (short)*puVar24) {
                    puVar45 = (ulong *)((long)puVar45 + 2);
                    puVar24 = (ulong *)((long)puVar24 + 2);
                  }
                }
                if ((puVar24 < puVar4) && ((char)*puVar45 == (char)*puVar24)) {
                  puVar24 = (ulong *)((long)puVar24 + 1);
                }
                uVar32 = (long)puVar24 - (long)puVar16;
              }
              puVar16 = (ulong *)(uVar32 + 4);
              iVar41 = iVar41 - (int)piVar36;
              puVar45 = puVar38;
              if ((param_4 < puVar38) && (piVar3 < piVar36)) {
                puVar45 = (ulong *)((long)puVar38 + -1);
                do {
                  piVar36 = (int *)((long)piVar36 + -1);
                  if ((char)*puVar45 != *(char *)piVar36) goto LAB_1099ba234;
                  puVar16 = (ulong *)((long)puVar16 + 1);
                  puVar38 = (ulong *)((long)puVar45 + -1);
                } while ((param_4 < puVar45) && (puVar45 = puVar38, piVar3 < piVar36));
                goto LAB_1099ba1d0;
              }
            }
          }
        }
        else {
          uVar43 = *(uint *)(uVar29 + (uVar32 * -0x30e44323485a9b9d >> (uVar21 & 0x3f)) * 4);
          if ((uVar43 <= uVar10) || (puVar24 = (ulong *)(uVar8 + uVar43), *puVar24 != uVar32))
          goto LAB_1099b9e34;
          lVar27 = (long)puVar38 + 9;
          FUN_1099bca60(lVar27,puVar24 + 1,puVar4,puVar7,piVar3);
          puVar16 = (ulong *)(lVar27 + 8);
          iVar41 = (iVar2 - uVar11) - uVar43;
          if (param_4 < puVar45) {
            piVar36 = (int *)((uVar8 - 1) + (ulong)uVar43);
            do {
              if ((char)*puVar38 != (char)*piVar36) goto LAB_1099ba554;
              puVar16 = (ulong *)((long)puVar16 + 1);
              puVar45 = (ulong *)((long)puVar38 + -1);
            } while ((param_4 < puVar38) &&
                    (bVar1 = piVar5 < piVar36, piVar36 = (int *)((long)piVar36 + -1),
                    puVar38 = puVar45, bVar1));
            goto LAB_1099ba234;
          }
        }
        goto LAB_1099ba238;
      }
      uVar42 = *(uint *)(uVar30 + (uVar35 * -0x30e4432345000000 >> ((ulong)(0x40 - iVar9) & 0x3f)) *
                                  4);
      if ((uVar10 < uVar42) && (piVar36 = (int *)(uVar8 + uVar42), *piVar36 == (int)*puVar38)) {
        uVar42 = uVar42 + uVar11;
        goto LAB_1099b9be0;
      }
LAB_1099b9c98:
      puVar38 = (ulong *)((long)puVar38 + ((long)puVar38 - (long)param_4 >> 8) + 1);
      goto LAB_1099ba53c;
    }
  }
  else if (iVar9 == 6) {
    if (puVar38 < puVar19) {
      uVar31 = (ulong)(0x40 - *(int *)(param_1 + 0xc0));
      uVar25 = (ulong)(0x40 - *(int *)(param_1 + 0xbc));
      iVar9 = *(int *)((long)puVar20 + 0xbc);
      uVar21 = (ulong)(0x40 - (int)puVar20[0x18]);
      puVar22 = (ulong *)((long)puVar4 - 7);
      puVar26 = (ulong *)((long)puVar4 - 3);
      puVar23 = (ulong *)((long)puVar4 - 1);
      puVar20 = puVar4 + -4;
LAB_1099b8cf4:
      uVar35 = *puVar38;
      uVar39 = uVar35 * -0x30e44323485a9b9d >> (uVar31 & 0x3f);
      uVar40 = uVar35 * -0x30e4432340650000 >> (uVar25 & 0x3f);
      iVar41 = (int)puVar38;
      iVar44 = iVar41 - iVar48;
      uVar43 = *(uint *)(lVar28 + uVar39 * 4);
      uVar32 = (ulong)uVar43;
      uVar42 = *(uint *)(lVar18 + uVar40 * 4);
      iVar2 = iVar44 + 1;
      uVar14 = iVar2 - iVar47;
      piVar36 = (int *)(uVar8 + (uVar14 - uVar11));
      if (uVar6 <= uVar14) {
        piVar36 = (int *)(lVar49 + (ulong)uVar14);
      }
      *(int *)(lVar18 + uVar40 * 4) = iVar44;
      *(int *)(lVar28 + uVar39 * 4) = iVar44;
      if ((uVar14 - uVar6 < 0xfffffffd) &&
         (puVar45 = (ulong *)((long)puVar38 + 1), *piVar36 == *(int *)puVar45)) {
        puVar24 = puVar7;
        if (uVar6 <= uVar14) {
          puVar24 = puVar4;
        }
        lVar27 = (long)puVar38 + 5;
        FUN_1099bca60(lVar27,piVar36 + 1,puVar4,puVar24,piVar3);
        uVar32 = (long)puVar45 - (long)param_4;
        puVar24 = (ulong *)param_2[3];
        if (puVar20 < puVar45) {
          puVar16 = puVar24;
          puVar34 = param_4;
          if (param_4 <= puVar20) {
            puVar16 = (ulong *)((long)puVar24 + ((long)puVar20 - (long)param_4));
            uVar35 = *param_4;
            puVar24[1] = param_4[1];
            *puVar24 = uVar35;
            uVar35 = param_4[2];
            puVar24[3] = param_4[3];
            puVar24[2] = uVar35;
            puVar34 = puVar20;
            if (0x20 < (long)puVar20 - (long)param_4) {
              puVar24 = puVar24 + 4;
              puVar37 = param_4 + 6;
              do {
                uVar35 = puVar37[-2];
                puVar24[1] = puVar37[-1];
                *puVar24 = uVar35;
                uVar35 = *puVar37;
                puVar24[3] = puVar37[1];
                puVar24[2] = uVar35;
                puVar24 = puVar24 + 4;
                puVar37 = puVar37 + 4;
              } while (puVar24 < puVar16);
            }
          }
          if (puVar34 < puVar45) {
            puVar34 = (ulong *)((long)puVar34 + -1);
            do {
              puVar34 = (ulong *)((long)puVar34 + 1);
              *(undefined1 *)puVar16 = *(undefined1 *)puVar34;
              puVar16 = (ulong *)((long)puVar16 + 1);
            } while (puVar34 != puVar38);
          }
LAB_1099b92b8:
          param_2[3] = param_2[3] + uVar32;
          piVar36 = (int *)param_2[1];
          if (0xffff < uVar32) {
            *(undefined4 *)(param_2 + 9) = 1;
            *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar36 - *param_2) >> 3);
          }
        }
        else {
          uVar35 = *param_4;
          puVar24[1] = param_4[1];
          *puVar24 = uVar35;
          lVar33 = param_2[3];
          if (0x10 < uVar32) {
            uVar35 = param_4[2];
            *(ulong *)(lVar33 + 0x18) = param_4[3];
            *(ulong *)(lVar33 + 0x10) = uVar35;
            uVar35 = param_4[4];
            *(ulong *)(lVar33 + 0x28) = param_4[5];
            *(ulong *)(lVar33 + 0x20) = uVar35;
            if (0x30 < (long)uVar32) {
              puVar38 = (ulong *)(lVar33 + 0x30);
              puVar24 = param_4 + 8;
              do {
                uVar35 = puVar24[-2];
                puVar38[1] = puVar24[-1];
                *puVar38 = uVar35;
                uVar35 = *puVar24;
                puVar38[3] = puVar24[1];
                puVar38[2] = uVar35;
                puVar38 = puVar38 + 4;
                puVar24 = puVar24 + 4;
              } while (puVar38 < (ulong *)(lVar33 + uVar32));
            }
            goto LAB_1099b92b8;
          }
          param_2[3] = lVar33 + uVar32;
          piVar36 = (int *)param_2[1];
        }
        puVar16 = (ulong *)(lVar27 + 4);
        uVar35 = lVar27 + 1;
        *(short *)(piVar36 + 1) = (short)uVar32;
        *piVar36 = 1;
        iVar41 = iVar47;
        if (uVar35 >> 0x10 != 0) goto LAB_1099b96e8;
        goto LAB_1099b9700;
      }
      puVar45 = puVar38;
      if (uVar43 <= uVar6) {
        uVar43 = *(uint *)(uVar29 + (uVar35 * -0x30e44323485a9b9d >> (uVar21 & 0x3f)) * 4);
        if ((uVar43 <= uVar10) || (puVar24 = (ulong *)(uVar8 + uVar43), *puVar24 != uVar35))
        goto LAB_1099b8f08;
        puVar16 = puVar38 + 1;
        FUN_1099bca60(puVar16,puVar24 + 1,puVar4,puVar7,piVar3);
        puVar16 = puVar16 + 1;
        iVar41 = (iVar44 - uVar11) - uVar43;
        if (param_4 < puVar38) {
          piVar36 = (int *)((uVar8 - 1) + (ulong)uVar43);
          puVar45 = (ulong *)((long)puVar38 + -1);
          do {
            if ((char)*puVar45 != (char)*piVar36) goto LAB_1099b95b8;
            puVar16 = (ulong *)((long)puVar16 + 1);
            puVar38 = (ulong *)((long)puVar45 + -1);
          } while ((param_4 < puVar45) &&
                  (bVar1 = piVar5 < piVar36, piVar36 = (int *)((long)piVar36 + -1),
                  puVar45 = puVar38, bVar1));
          goto LAB_1099b9554;
        }
        goto LAB_1099b95bc;
      }
      puVar24 = (ulong *)(lVar49 + uVar32);
      if (*puVar24 == uVar35) {
        puVar16 = puVar38 + 1;
        puVar34 = puVar24 + 1;
        puVar37 = puVar16;
        if (puVar16 < puVar22) {
          if (*puVar34 == *puVar16) {
            lVar27 = 0;
            puVar37 = puVar38 + 2;
            puVar34 = (ulong *)(lVar49 + 0x10 + uVar32);
            do {
              if (puVar22 <= puVar37) goto LAB_1099b9094;
              uVar39 = *puVar34;
              uVar35 = *puVar37;
              lVar27 = lVar27 + 8;
              puVar37 = puVar37 + 1;
              puVar34 = puVar34 + 1;
            } while (uVar39 == uVar35);
            uVar35 = uVar35 ^ uVar39;
            uVar35 = (uVar35 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar35 & 0x5555555555555555) << 1;
            uVar35 = (uVar35 & 0xcccccccccccccccc) >> 2 | (uVar35 & 0x3333333333333333) << 2;
            uVar35 = (uVar35 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar35 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar35 = (uVar35 & 0xff00ff00ff00ff00) >> 8 | (uVar35 & 0xff00ff00ff00ff) << 8;
            uVar35 = (uVar35 & 0xffff0000ffff0000) >> 0x10 | (uVar35 & 0xffff0000ffff) << 0x10;
            uVar35 = lVar27 + ((ulong)LZCOUNT(uVar35 >> 0x20 | uVar35 << 0x20) >> 3);
          }
          else {
            uVar35 = *puVar16 ^ *puVar34;
            uVar35 = (uVar35 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar35 & 0x5555555555555555) << 1;
            uVar35 = (uVar35 & 0xcccccccccccccccc) >> 2 | (uVar35 & 0x3333333333333333) << 2;
            uVar35 = (uVar35 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar35 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar35 = (uVar35 & 0xff00ff00ff00ff00) >> 8 | (uVar35 & 0xff00ff00ff00ff) << 8;
            uVar35 = (uVar35 & 0xffff0000ffff0000) >> 0x10 | (uVar35 & 0xffff0000ffff) << 0x10;
            uVar35 = (ulong)LZCOUNT(uVar35 >> 0x20 | uVar35 << 0x20) >> 3;
          }
        }
        else {
LAB_1099b9094:
          if (puVar37 < puVar26) {
            if ((int)*puVar34 == (int)*puVar37) {
              puVar37 = (ulong *)((long)puVar37 + 4);
              puVar34 = (ulong *)((long)puVar34 + 4);
            }
          }
          if (puVar37 < puVar23) {
            if ((short)*puVar34 == (short)*puVar37) {
              puVar37 = (ulong *)((long)puVar37 + 2);
              puVar34 = (ulong *)((long)puVar34 + 2);
            }
          }
          if ((puVar37 < puVar4) && ((char)*puVar34 == (char)*puVar37)) {
            puVar37 = (ulong *)((long)puVar37 + 1);
          }
          uVar35 = (long)puVar37 - (long)puVar16;
        }
        puVar16 = (ulong *)(uVar35 + 8);
        iVar41 = iVar41 - (int)puVar24;
        if (puVar38 <= param_4) goto LAB_1099b95bc;
        piVar36 = (int *)(lVar49 + -1 + uVar32);
        puVar45 = (ulong *)((long)puVar38 + -1);
        do {
          if ((char)*puVar45 != (char)*piVar36) goto LAB_1099b95b8;
          puVar16 = (ulong *)((long)puVar16 + 1);
          puVar38 = (ulong *)((long)puVar45 + -1);
        } while ((param_4 < puVar45) &&
                (bVar1 = piVar3 < piVar36, piVar36 = (int *)((long)piVar36 + -1), puVar45 = puVar38,
                bVar1));
        goto LAB_1099b9554;
      }
LAB_1099b8f08:
      if (uVar6 < uVar42) {
        piVar36 = (int *)(lVar49 + (ulong)uVar42);
        if (*piVar36 != (int)*puVar38) goto LAB_1099b901c;
LAB_1099b8f64:
        puVar45 = (ulong *)((long)puVar38 + 1);
        uVar32 = *puVar45;
        uVar39 = uVar32 * -0x30e44323485a9b9d >> (uVar31 & 0x3f);
        uVar43 = *(uint *)(lVar28 + uVar39 * 4);
        uVar35 = (ulong)uVar43;
        *(int *)(lVar28 + uVar39 * 4) = iVar2;
        if (uVar6 < uVar43) {
          puVar24 = (ulong *)(lVar49 + uVar35);
          if (*puVar24 == uVar32) {
            puVar16 = (ulong *)((long)puVar38 + 9);
            puVar34 = puVar24 + 1;
            puVar37 = puVar16;
            if (puVar16 < puVar22) {
              if (*puVar34 == *puVar16) {
                lVar27 = 0;
                puVar37 = (ulong *)((long)puVar38 + 0x11);
                puVar34 = (ulong *)(lVar49 + 0x10 + uVar35);
                do {
                  if (puVar22 <= puVar37) goto LAB_1099b9478;
                  uVar39 = *puVar34;
                  uVar32 = *puVar37;
                  lVar27 = lVar27 + 8;
                  puVar37 = puVar37 + 1;
                  puVar34 = puVar34 + 1;
                } while (uVar39 == uVar32);
                uVar32 = uVar32 ^ uVar39;
                uVar32 = (uVar32 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar32 & 0x5555555555555555) << 1;
                uVar32 = (uVar32 & 0xcccccccccccccccc) >> 2 | (uVar32 & 0x3333333333333333) << 2;
                uVar32 = (uVar32 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar32 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar32 = (uVar32 & 0xff00ff00ff00ff00) >> 8 | (uVar32 & 0xff00ff00ff00ff) << 8;
                uVar32 = (uVar32 & 0xffff0000ffff0000) >> 0x10 | (uVar32 & 0xffff0000ffff) << 0x10;
                uVar32 = lVar27 + ((ulong)LZCOUNT(uVar32 >> 0x20 | uVar32 << 0x20) >> 3);
              }
              else {
                uVar32 = *puVar16 ^ *puVar34;
                uVar32 = (uVar32 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar32 & 0x5555555555555555) << 1;
                uVar32 = (uVar32 & 0xcccccccccccccccc) >> 2 | (uVar32 & 0x3333333333333333) << 2;
                uVar32 = (uVar32 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar32 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar32 = (uVar32 & 0xff00ff00ff00ff00) >> 8 | (uVar32 & 0xff00ff00ff00ff) << 8;
                uVar32 = (uVar32 & 0xffff0000ffff0000) >> 0x10 | (uVar32 & 0xffff0000ffff) << 0x10;
                uVar32 = (ulong)LZCOUNT(uVar32 >> 0x20 | uVar32 << 0x20) >> 3;
              }
            }
            else {
LAB_1099b9478:
              if (puVar37 < puVar26) {
                if ((int)*puVar34 == (int)*puVar37) {
                  puVar37 = (ulong *)((long)puVar37 + 4);
                  puVar34 = (ulong *)((long)puVar34 + 4);
                }
              }
              if (puVar37 < puVar23) {
                if ((short)*puVar34 == (short)*puVar37) {
                  puVar37 = (ulong *)((long)puVar37 + 2);
                  puVar34 = (ulong *)((long)puVar34 + 2);
                }
              }
              if ((puVar37 < puVar4) && ((char)*puVar34 == (char)*puVar37)) {
                puVar37 = (ulong *)((long)puVar37 + 1);
              }
              uVar32 = (long)puVar37 - (long)puVar16;
            }
            puVar16 = (ulong *)(uVar32 + 8);
            iVar41 = (int)puVar45 - (int)puVar24;
            if (param_4 < puVar45) {
              piVar36 = (int *)(lVar49 + -1 + uVar35);
              do {
                if ((char)*puVar38 != (char)*piVar36) goto LAB_1099b98d8;
                puVar16 = (ulong *)((long)puVar16 + 1);
                puVar45 = (ulong *)((long)puVar38 + -1);
              } while ((param_4 < puVar38) &&
                      (bVar1 = piVar3 < piVar36, piVar36 = (int *)((long)piVar36 + -1),
                      puVar38 = puVar45, bVar1));
LAB_1099b95b8:
              puVar45 = (ulong *)((long)puVar45 + 1);
            }
          }
          else {
LAB_1099b91b8:
            puVar16 = (ulong *)((long)puVar38 + 4);
            puVar45 = (ulong *)(piVar36 + 1);
            if (uVar42 < uVar6) {
              FUN_1099bca60(puVar16,puVar45,puVar4,puVar7,piVar3);
              puVar16 = (ulong *)((long)puVar16 + 4);
              iVar41 = iVar44 - uVar42;
              puVar45 = puVar38;
              if ((param_4 < puVar38) && (piVar5 < piVar36)) {
                puVar45 = (ulong *)((long)puVar38 + -1);
                do {
                  piVar36 = (int *)((long)piVar36 + -1);
                  if ((char)*puVar45 != *(char *)piVar36) goto LAB_1099b95b8;
                  puVar16 = (ulong *)((long)puVar16 + 1);
                  puVar38 = (ulong *)((long)puVar45 + -1);
                } while ((param_4 < puVar45) && (puVar45 = puVar38, piVar5 < piVar36));
LAB_1099b9554:
                puVar45 = (ulong *)((long)puVar38 + 1);
              }
            }
            else {
              puVar24 = puVar16;
              if (puVar16 < puVar22) {
                if (*puVar45 == *puVar16) {
                  lVar27 = 0;
                  puVar45 = (ulong *)(piVar36 + 3);
                  puVar24 = (ulong *)((long)puVar38 + 0xc);
                  do {
                    if (puVar22 <= puVar24) goto LAB_1099b93f8;
                    uVar35 = *puVar45;
                    uVar32 = *puVar24;
                    lVar27 = lVar27 + 8;
                    puVar45 = puVar45 + 1;
                    puVar24 = puVar24 + 1;
                  } while (uVar35 == uVar32);
                  uVar32 = uVar32 ^ uVar35;
                  uVar32 = (uVar32 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar32 & 0x5555555555555555) << 1;
                  uVar32 = (uVar32 & 0xcccccccccccccccc) >> 2 | (uVar32 & 0x3333333333333333) << 2;
                  uVar32 = (uVar32 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar32 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar32 = (uVar32 & 0xff00ff00ff00ff00) >> 8 | (uVar32 & 0xff00ff00ff00ff) << 8;
                  uVar32 = (uVar32 & 0xffff0000ffff0000) >> 0x10 | (uVar32 & 0xffff0000ffff) << 0x10
                  ;
                  uVar32 = lVar27 + ((ulong)LZCOUNT(uVar32 >> 0x20 | uVar32 << 0x20) >> 3);
                }
                else {
                  uVar32 = *puVar16 ^ *puVar45;
                  uVar32 = (uVar32 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar32 & 0x5555555555555555) << 1;
                  uVar32 = (uVar32 & 0xcccccccccccccccc) >> 2 | (uVar32 & 0x3333333333333333) << 2;
                  uVar32 = (uVar32 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar32 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar32 = (uVar32 & 0xff00ff00ff00ff00) >> 8 | (uVar32 & 0xff00ff00ff00ff) << 8;
                  uVar32 = (uVar32 & 0xffff0000ffff0000) >> 0x10 | (uVar32 & 0xffff0000ffff) << 0x10
                  ;
                  uVar32 = (ulong)LZCOUNT(uVar32 >> 0x20 | uVar32 << 0x20) >> 3;
                }
              }
              else {
LAB_1099b93f8:
                if (puVar24 < puVar26) {
                  if ((int)*puVar45 == (int)*puVar24) {
                    puVar45 = (ulong *)((long)puVar45 + 4);
                    puVar24 = (ulong *)((long)puVar24 + 4);
                  }
                }
                if (puVar24 < puVar23) {
                  if ((short)*puVar45 == (short)*puVar24) {
                    puVar45 = (ulong *)((long)puVar45 + 2);
                    puVar24 = (ulong *)((long)puVar24 + 2);
                  }
                }
                if ((puVar24 < puVar4) && ((char)*puVar45 == (char)*puVar24)) {
                  puVar24 = (ulong *)((long)puVar24 + 1);
                }
                uVar32 = (long)puVar24 - (long)puVar16;
              }
              puVar16 = (ulong *)(uVar32 + 4);
              iVar41 = iVar41 - (int)piVar36;
              puVar45 = puVar38;
              if ((param_4 < puVar38) && (piVar3 < piVar36)) {
                puVar45 = (ulong *)((long)puVar38 + -1);
                do {
                  piVar36 = (int *)((long)piVar36 + -1);
                  if ((char)*puVar45 != *(char *)piVar36) goto LAB_1099b95b8;
                  puVar16 = (ulong *)((long)puVar16 + 1);
                  puVar38 = (ulong *)((long)puVar45 + -1);
                } while ((param_4 < puVar45) && (puVar45 = puVar38, piVar3 < piVar36));
                goto LAB_1099b9554;
              }
            }
          }
        }
        else {
          uVar43 = *(uint *)(uVar29 + (uVar32 * -0x30e44323485a9b9d >> (uVar21 & 0x3f)) * 4);
          if ((uVar43 <= uVar10) || (puVar24 = (ulong *)(uVar8 + uVar43), *puVar24 != uVar32))
          goto LAB_1099b91b8;
          lVar27 = (long)puVar38 + 9;
          FUN_1099bca60(lVar27,puVar24 + 1,puVar4,puVar7,piVar3);
          puVar16 = (ulong *)(lVar27 + 8);
          iVar41 = (iVar2 - uVar11) - uVar43;
          if (param_4 < puVar45) {
            piVar36 = (int *)((uVar8 - 1) + (ulong)uVar43);
            do {
              if ((char)*puVar38 != (char)*piVar36) goto LAB_1099b98d8;
              puVar16 = (ulong *)((long)puVar16 + 1);
              puVar45 = (ulong *)((long)puVar38 + -1);
            } while ((param_4 < puVar38) &&
                    (bVar1 = piVar5 < piVar36, piVar36 = (int *)((long)piVar36 + -1),
                    puVar38 = puVar45, bVar1));
            goto LAB_1099b95b8;
          }
        }
        goto LAB_1099b95bc;
      }
      uVar42 = *(uint *)(uVar30 + (uVar35 * -0x30e4432340650000 >> ((ulong)(0x40 - iVar9) & 0x3f)) *
                                  4);
      if ((uVar10 < uVar42) && (piVar36 = (int *)(uVar8 + uVar42), *piVar36 == (int)*puVar38)) {
        uVar42 = uVar42 + uVar11;
        goto LAB_1099b8f64;
      }
LAB_1099b901c:
      puVar38 = (ulong *)((long)puVar38 + ((long)puVar38 - (long)param_4 >> 8) + 1);
      goto LAB_1099b98c0;
    }
  }
  else if (iVar9 == 7) {
    if (puVar38 < puVar19) {
      uVar31 = (ulong)(0x40 - *(int *)(param_1 + 0xc0));
      uVar25 = (ulong)(0x40 - *(int *)(param_1 + 0xbc));
      iVar9 = *(int *)((long)puVar20 + 0xbc);
      uVar21 = (ulong)(0x40 - (int)puVar20[0x18]);
      puVar22 = (ulong *)((long)puVar4 - 7);
      puVar26 = (ulong *)((long)puVar4 - 3);
      puVar23 = (ulong *)((long)puVar4 - 1);
      puVar20 = puVar4 + -4;
LAB_1099b806c:
      uVar35 = *puVar38;
      uVar39 = uVar35 * -0x30e44323485a9b9d >> (uVar31 & 0x3f);
      uVar40 = uVar35 * -0x30e44323405a9d00 >> (uVar25 & 0x3f);
      iVar41 = (int)puVar38;
      iVar44 = iVar41 - iVar48;
      uVar43 = *(uint *)(lVar28 + uVar39 * 4);
      uVar32 = (ulong)uVar43;
      uVar42 = *(uint *)(lVar18 + uVar40 * 4);
      iVar2 = iVar44 + 1;
      uVar14 = iVar2 - iVar47;
      piVar36 = (int *)(uVar8 + (uVar14 - uVar11));
      if (uVar6 <= uVar14) {
        piVar36 = (int *)(lVar49 + (ulong)uVar14);
      }
      *(int *)(lVar18 + uVar40 * 4) = iVar44;
      *(int *)(lVar28 + uVar39 * 4) = iVar44;
      if ((uVar14 - uVar6 < 0xfffffffd) &&
         (puVar45 = (ulong *)((long)puVar38 + 1), *piVar36 == *(int *)puVar45)) {
        puVar24 = puVar7;
        if (uVar6 <= uVar14) {
          puVar24 = puVar4;
        }
        lVar27 = (long)puVar38 + 5;
        FUN_1099bca60(lVar27,piVar36 + 1,puVar4,puVar24,piVar3);
        uVar32 = (long)puVar45 - (long)param_4;
        puVar24 = (ulong *)param_2[3];
        if (puVar20 < puVar45) {
          puVar16 = puVar24;
          puVar34 = param_4;
          if (param_4 <= puVar20) {
            puVar16 = (ulong *)((long)puVar24 + ((long)puVar20 - (long)param_4));
            uVar35 = *param_4;
            puVar24[1] = param_4[1];
            *puVar24 = uVar35;
            uVar35 = param_4[2];
            puVar24[3] = param_4[3];
            puVar24[2] = uVar35;
            puVar34 = puVar20;
            if (0x20 < (long)puVar20 - (long)param_4) {
              puVar24 = puVar24 + 4;
              puVar37 = param_4 + 6;
              do {
                uVar35 = puVar37[-2];
                puVar24[1] = puVar37[-1];
                *puVar24 = uVar35;
                uVar35 = *puVar37;
                puVar24[3] = puVar37[1];
                puVar24[2] = uVar35;
                puVar24 = puVar24 + 4;
                puVar37 = puVar37 + 4;
              } while (puVar24 < puVar16);
            }
          }
          if (puVar34 < puVar45) {
            puVar34 = (ulong *)((long)puVar34 + -1);
            do {
              puVar34 = (ulong *)((long)puVar34 + 1);
              *(undefined1 *)puVar16 = *(undefined1 *)puVar34;
              puVar16 = (ulong *)((long)puVar16 + 1);
            } while (puVar34 != puVar38);
          }
LAB_1099b8634:
          param_2[3] = param_2[3] + uVar32;
          piVar36 = (int *)param_2[1];
          if (0xffff < uVar32) {
            *(undefined4 *)(param_2 + 9) = 1;
            *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar36 - *param_2) >> 3);
          }
        }
        else {
          uVar35 = *param_4;
          puVar24[1] = param_4[1];
          *puVar24 = uVar35;
          lVar33 = param_2[3];
          if (0x10 < uVar32) {
            uVar35 = param_4[2];
            *(ulong *)(lVar33 + 0x18) = param_4[3];
            *(ulong *)(lVar33 + 0x10) = uVar35;
            uVar35 = param_4[4];
            *(ulong *)(lVar33 + 0x28) = param_4[5];
            *(ulong *)(lVar33 + 0x20) = uVar35;
            if (0x30 < (long)uVar32) {
              puVar38 = (ulong *)(lVar33 + 0x30);
              puVar24 = param_4 + 8;
              do {
                uVar35 = puVar24[-2];
                puVar38[1] = puVar24[-1];
                *puVar38 = uVar35;
                uVar35 = *puVar24;
                puVar38[3] = puVar24[1];
                puVar38[2] = uVar35;
                puVar38 = puVar38 + 4;
                puVar24 = puVar24 + 4;
              } while (puVar38 < (ulong *)(lVar33 + uVar32));
            }
            goto LAB_1099b8634;
          }
          param_2[3] = lVar33 + uVar32;
          piVar36 = (int *)param_2[1];
        }
        puVar16 = (ulong *)(lVar27 + 4);
        uVar35 = lVar27 + 1;
        *(short *)(piVar36 + 1) = (short)uVar32;
        *piVar36 = 1;
        iVar41 = iVar47;
        if (uVar35 >> 0x10 != 0) goto LAB_1099b8a64;
        goto LAB_1099b8a7c;
      }
      puVar45 = puVar38;
      if (uVar43 <= uVar6) {
        uVar43 = *(uint *)(uVar29 + (uVar35 * -0x30e44323485a9b9d >> (uVar21 & 0x3f)) * 4);
        if ((uVar43 <= uVar10) || (puVar24 = (ulong *)(uVar8 + uVar43), *puVar24 != uVar35))
        goto LAB_1099b8284;
        puVar16 = puVar38 + 1;
        FUN_1099bca60(puVar16,puVar24 + 1,puVar4,puVar7,piVar3);
        puVar16 = puVar16 + 1;
        iVar41 = (iVar44 - uVar11) - uVar43;
        if (param_4 < puVar38) {
          piVar36 = (int *)((uVar8 - 1) + (ulong)uVar43);
          puVar45 = (ulong *)((long)puVar38 + -1);
          do {
            if ((char)*puVar45 != (char)*piVar36) goto LAB_1099b8934;
            puVar16 = (ulong *)((long)puVar16 + 1);
            puVar38 = (ulong *)((long)puVar45 + -1);
          } while ((param_4 < puVar45) &&
                  (bVar1 = piVar5 < piVar36, piVar36 = (int *)((long)piVar36 + -1),
                  puVar45 = puVar38, bVar1));
          goto LAB_1099b88d0;
        }
        goto LAB_1099b8938;
      }
      puVar24 = (ulong *)(lVar49 + uVar32);
      if (*puVar24 == uVar35) {
        puVar16 = puVar38 + 1;
        puVar34 = puVar24 + 1;
        puVar37 = puVar16;
        if (puVar16 < puVar22) {
          if (*puVar34 == *puVar16) {
            lVar27 = 0;
            puVar37 = puVar38 + 2;
            puVar34 = (ulong *)(lVar49 + 0x10 + uVar32);
            do {
              if (puVar22 <= puVar37) goto LAB_1099b8410;
              uVar39 = *puVar34;
              uVar35 = *puVar37;
              lVar27 = lVar27 + 8;
              puVar37 = puVar37 + 1;
              puVar34 = puVar34 + 1;
            } while (uVar39 == uVar35);
            uVar35 = uVar35 ^ uVar39;
            uVar35 = (uVar35 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar35 & 0x5555555555555555) << 1;
            uVar35 = (uVar35 & 0xcccccccccccccccc) >> 2 | (uVar35 & 0x3333333333333333) << 2;
            uVar35 = (uVar35 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar35 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar35 = (uVar35 & 0xff00ff00ff00ff00) >> 8 | (uVar35 & 0xff00ff00ff00ff) << 8;
            uVar35 = (uVar35 & 0xffff0000ffff0000) >> 0x10 | (uVar35 & 0xffff0000ffff) << 0x10;
            uVar35 = lVar27 + ((ulong)LZCOUNT(uVar35 >> 0x20 | uVar35 << 0x20) >> 3);
          }
          else {
            uVar35 = *puVar16 ^ *puVar34;
            uVar35 = (uVar35 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar35 & 0x5555555555555555) << 1;
            uVar35 = (uVar35 & 0xcccccccccccccccc) >> 2 | (uVar35 & 0x3333333333333333) << 2;
            uVar35 = (uVar35 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar35 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar35 = (uVar35 & 0xff00ff00ff00ff00) >> 8 | (uVar35 & 0xff00ff00ff00ff) << 8;
            uVar35 = (uVar35 & 0xffff0000ffff0000) >> 0x10 | (uVar35 & 0xffff0000ffff) << 0x10;
            uVar35 = (ulong)LZCOUNT(uVar35 >> 0x20 | uVar35 << 0x20) >> 3;
          }
        }
        else {
LAB_1099b8410:
          if (puVar37 < puVar26) {
            if ((int)*puVar34 == (int)*puVar37) {
              puVar37 = (ulong *)((long)puVar37 + 4);
              puVar34 = (ulong *)((long)puVar34 + 4);
            }
          }
          if (puVar37 < puVar23) {
            if ((short)*puVar34 == (short)*puVar37) {
              puVar37 = (ulong *)((long)puVar37 + 2);
              puVar34 = (ulong *)((long)puVar34 + 2);
            }
          }
          if ((puVar37 < puVar4) && ((char)*puVar34 == (char)*puVar37)) {
            puVar37 = (ulong *)((long)puVar37 + 1);
          }
          uVar35 = (long)puVar37 - (long)puVar16;
        }
        puVar16 = (ulong *)(uVar35 + 8);
        iVar41 = iVar41 - (int)puVar24;
        if (puVar38 <= param_4) goto LAB_1099b8938;
        piVar36 = (int *)(lVar49 + -1 + uVar32);
        puVar45 = (ulong *)((long)puVar38 + -1);
        do {
          if ((char)*puVar45 != (char)*piVar36) goto LAB_1099b8934;
          puVar16 = (ulong *)((long)puVar16 + 1);
          puVar38 = (ulong *)((long)puVar45 + -1);
        } while ((param_4 < puVar45) &&
                (bVar1 = piVar3 < piVar36, piVar36 = (int *)((long)piVar36 + -1), puVar45 = puVar38,
                bVar1));
        goto LAB_1099b88d0;
      }
LAB_1099b8284:
      if (uVar6 < uVar42) {
        piVar36 = (int *)(lVar49 + (ulong)uVar42);
        if (*piVar36 != (int)*puVar38) goto LAB_1099b8398;
LAB_1099b82e0:
        puVar45 = (ulong *)((long)puVar38 + 1);
        uVar32 = *puVar45;
        uVar39 = uVar32 * -0x30e44323485a9b9d >> (uVar31 & 0x3f);
        uVar43 = *(uint *)(lVar28 + uVar39 * 4);
        uVar35 = (ulong)uVar43;
        *(int *)(lVar28 + uVar39 * 4) = iVar2;
        if (uVar6 < uVar43) {
          puVar24 = (ulong *)(lVar49 + uVar35);
          if (*puVar24 == uVar32) {
            puVar16 = (ulong *)((long)puVar38 + 9);
            puVar34 = puVar24 + 1;
            puVar37 = puVar16;
            if (puVar16 < puVar22) {
              if (*puVar34 == *puVar16) {
                lVar27 = 0;
                puVar37 = (ulong *)((long)puVar38 + 0x11);
                puVar34 = (ulong *)(lVar49 + 0x10 + uVar35);
                do {
                  if (puVar22 <= puVar37) goto LAB_1099b87f4;
                  uVar39 = *puVar34;
                  uVar32 = *puVar37;
                  lVar27 = lVar27 + 8;
                  puVar37 = puVar37 + 1;
                  puVar34 = puVar34 + 1;
                } while (uVar39 == uVar32);
                uVar32 = uVar32 ^ uVar39;
                uVar32 = (uVar32 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar32 & 0x5555555555555555) << 1;
                uVar32 = (uVar32 & 0xcccccccccccccccc) >> 2 | (uVar32 & 0x3333333333333333) << 2;
                uVar32 = (uVar32 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar32 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar32 = (uVar32 & 0xff00ff00ff00ff00) >> 8 | (uVar32 & 0xff00ff00ff00ff) << 8;
                uVar32 = (uVar32 & 0xffff0000ffff0000) >> 0x10 | (uVar32 & 0xffff0000ffff) << 0x10;
                uVar32 = lVar27 + ((ulong)LZCOUNT(uVar32 >> 0x20 | uVar32 << 0x20) >> 3);
              }
              else {
                uVar32 = *puVar16 ^ *puVar34;
                uVar32 = (uVar32 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar32 & 0x5555555555555555) << 1;
                uVar32 = (uVar32 & 0xcccccccccccccccc) >> 2 | (uVar32 & 0x3333333333333333) << 2;
                uVar32 = (uVar32 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar32 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar32 = (uVar32 & 0xff00ff00ff00ff00) >> 8 | (uVar32 & 0xff00ff00ff00ff) << 8;
                uVar32 = (uVar32 & 0xffff0000ffff0000) >> 0x10 | (uVar32 & 0xffff0000ffff) << 0x10;
                uVar32 = (ulong)LZCOUNT(uVar32 >> 0x20 | uVar32 << 0x20) >> 3;
              }
            }
            else {
LAB_1099b87f4:
              if (puVar37 < puVar26) {
                if ((int)*puVar34 == (int)*puVar37) {
                  puVar37 = (ulong *)((long)puVar37 + 4);
                  puVar34 = (ulong *)((long)puVar34 + 4);
                }
              }
              if (puVar37 < puVar23) {
                if ((short)*puVar34 == (short)*puVar37) {
                  puVar37 = (ulong *)((long)puVar37 + 2);
                  puVar34 = (ulong *)((long)puVar34 + 2);
                }
              }
              if ((puVar37 < puVar4) && ((char)*puVar34 == (char)*puVar37)) {
                puVar37 = (ulong *)((long)puVar37 + 1);
              }
              uVar32 = (long)puVar37 - (long)puVar16;
            }
            puVar16 = (ulong *)(uVar32 + 8);
            iVar41 = (int)puVar45 - (int)puVar24;
            if (param_4 < puVar45) {
              piVar36 = (int *)(lVar49 + -1 + uVar35);
              do {
                if ((char)*puVar38 != (char)*piVar36) goto LAB_1099b8c5c;
                puVar16 = (ulong *)((long)puVar16 + 1);
                puVar45 = (ulong *)((long)puVar38 + -1);
              } while ((param_4 < puVar38) &&
                      (bVar1 = piVar3 < piVar36, piVar36 = (int *)((long)piVar36 + -1),
                      puVar38 = puVar45, bVar1));
LAB_1099b8934:
              puVar45 = (ulong *)((long)puVar45 + 1);
            }
          }
          else {
LAB_1099b8534:
            puVar16 = (ulong *)((long)puVar38 + 4);
            puVar45 = (ulong *)(piVar36 + 1);
            if (uVar42 < uVar6) {
              FUN_1099bca60(puVar16,puVar45,puVar4,puVar7,piVar3);
              puVar16 = (ulong *)((long)puVar16 + 4);
              iVar41 = iVar44 - uVar42;
              puVar45 = puVar38;
              if ((param_4 < puVar38) && (piVar5 < piVar36)) {
                puVar45 = (ulong *)((long)puVar38 + -1);
                do {
                  piVar36 = (int *)((long)piVar36 + -1);
                  if ((char)*puVar45 != *(char *)piVar36) goto LAB_1099b8934;
                  puVar16 = (ulong *)((long)puVar16 + 1);
                  puVar38 = (ulong *)((long)puVar45 + -1);
                } while ((param_4 < puVar45) && (puVar45 = puVar38, piVar5 < piVar36));
LAB_1099b88d0:
                puVar45 = (ulong *)((long)puVar38 + 1);
              }
            }
            else {
              puVar24 = puVar16;
              if (puVar16 < puVar22) {
                if (*puVar45 == *puVar16) {
                  lVar27 = 0;
                  puVar45 = (ulong *)(piVar36 + 3);
                  puVar24 = (ulong *)((long)puVar38 + 0xc);
                  do {
                    if (puVar22 <= puVar24) goto LAB_1099b8774;
                    uVar35 = *puVar45;
                    uVar32 = *puVar24;
                    lVar27 = lVar27 + 8;
                    puVar45 = puVar45 + 1;
                    puVar24 = puVar24 + 1;
                  } while (uVar35 == uVar32);
                  uVar32 = uVar32 ^ uVar35;
                  uVar32 = (uVar32 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar32 & 0x5555555555555555) << 1;
                  uVar32 = (uVar32 & 0xcccccccccccccccc) >> 2 | (uVar32 & 0x3333333333333333) << 2;
                  uVar32 = (uVar32 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar32 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar32 = (uVar32 & 0xff00ff00ff00ff00) >> 8 | (uVar32 & 0xff00ff00ff00ff) << 8;
                  uVar32 = (uVar32 & 0xffff0000ffff0000) >> 0x10 | (uVar32 & 0xffff0000ffff) << 0x10
                  ;
                  uVar32 = lVar27 + ((ulong)LZCOUNT(uVar32 >> 0x20 | uVar32 << 0x20) >> 3);
                }
                else {
                  uVar32 = *puVar16 ^ *puVar45;
                  uVar32 = (uVar32 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar32 & 0x5555555555555555) << 1;
                  uVar32 = (uVar32 & 0xcccccccccccccccc) >> 2 | (uVar32 & 0x3333333333333333) << 2;
                  uVar32 = (uVar32 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar32 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar32 = (uVar32 & 0xff00ff00ff00ff00) >> 8 | (uVar32 & 0xff00ff00ff00ff) << 8;
                  uVar32 = (uVar32 & 0xffff0000ffff0000) >> 0x10 | (uVar32 & 0xffff0000ffff) << 0x10
                  ;
                  uVar32 = (ulong)LZCOUNT(uVar32 >> 0x20 | uVar32 << 0x20) >> 3;
                }
              }
              else {
LAB_1099b8774:
                if (puVar24 < puVar26) {
                  if ((int)*puVar45 == (int)*puVar24) {
                    puVar45 = (ulong *)((long)puVar45 + 4);
                    puVar24 = (ulong *)((long)puVar24 + 4);
                  }
                }
                if (puVar24 < puVar23) {
                  if ((short)*puVar45 == (short)*puVar24) {
                    puVar45 = (ulong *)((long)puVar45 + 2);
                    puVar24 = (ulong *)((long)puVar24 + 2);
                  }
                }
                if ((puVar24 < puVar4) && ((char)*puVar45 == (char)*puVar24)) {
                  puVar24 = (ulong *)((long)puVar24 + 1);
                }
                uVar32 = (long)puVar24 - (long)puVar16;
              }
              puVar16 = (ulong *)(uVar32 + 4);
              iVar41 = iVar41 - (int)piVar36;
              puVar45 = puVar38;
              if ((param_4 < puVar38) && (piVar3 < piVar36)) {
                puVar45 = (ulong *)((long)puVar38 + -1);
                do {
                  piVar36 = (int *)((long)piVar36 + -1);
                  if ((char)*puVar45 != *(char *)piVar36) goto LAB_1099b8934;
                  puVar16 = (ulong *)((long)puVar16 + 1);
                  puVar38 = (ulong *)((long)puVar45 + -1);
                } while ((param_4 < puVar45) && (puVar45 = puVar38, piVar3 < piVar36));
                goto LAB_1099b88d0;
              }
            }
          }
        }
        else {
          uVar43 = *(uint *)(uVar29 + (uVar32 * -0x30e44323485a9b9d >> (uVar21 & 0x3f)) * 4);
          if ((uVar43 <= uVar10) || (puVar24 = (ulong *)(uVar8 + uVar43), *puVar24 != uVar32))
          goto LAB_1099b8534;
          lVar27 = (long)puVar38 + 9;
          FUN_1099bca60(lVar27,puVar24 + 1,puVar4,puVar7,piVar3);
          puVar16 = (ulong *)(lVar27 + 8);
          iVar41 = (iVar2 - uVar11) - uVar43;
          if (param_4 < puVar45) {
            piVar36 = (int *)((uVar8 - 1) + (ulong)uVar43);
            do {
              if ((char)*puVar38 != (char)*piVar36) goto LAB_1099b8c5c;
              puVar16 = (ulong *)((long)puVar16 + 1);
              puVar45 = (ulong *)((long)puVar38 + -1);
            } while ((param_4 < puVar38) &&
                    (bVar1 = piVar5 < piVar36, piVar36 = (int *)((long)piVar36 + -1),
                    puVar38 = puVar45, bVar1));
            goto LAB_1099b8934;
          }
        }
        goto LAB_1099b8938;
      }
      uVar42 = *(uint *)(uVar30 + (uVar35 * -0x30e44323405a9d00 >> ((ulong)(0x40 - iVar9) & 0x3f)) *
                                  4);
      if ((uVar10 < uVar42) && (piVar36 = (int *)(uVar8 + uVar42), *piVar36 == (int)*puVar38)) {
        uVar42 = uVar42 + uVar11;
        goto LAB_1099b82e0;
      }
LAB_1099b8398:
      puVar38 = (ulong *)((long)puVar38 + ((long)puVar38 - (long)param_4 >> 8) + 1);
      goto LAB_1099b8c44;
    }
  }
  else if (puVar38 < puVar19) {
    uVar25 = (ulong)(0x40 - *(int *)(param_1 + 0xc0));
    uVar42 = 0x20 - *(int *)(param_1 + 0xbc);
    iVar9 = *(int *)((long)puVar20 + 0xbc);
    uVar21 = (ulong)(0x40 - (int)puVar20[0x18]);
    puVar22 = (ulong *)((long)puVar4 - 7);
    puVar26 = (ulong *)((long)puVar4 - 3);
    puVar23 = (ulong *)((long)puVar4 - 1);
    puVar20 = puVar4 + -4;
LAB_1099ba5f0:
    uVar32 = *puVar38;
    uVar35 = uVar32 * -0x30e44323485a9b9d >> (uVar25 & 0x3f);
    uVar13 = (int)uVar32 * -0x61c8864f;
    uVar12 = uVar13 >> (ulong)(uVar42 & 0x1f);
    iVar41 = (int)puVar38;
    iVar44 = iVar41 - iVar48;
    uVar14 = *(uint *)(lVar28 + uVar35 * 4);
    uVar31 = (ulong)uVar14;
    uVar43 = *(uint *)(lVar18 + (ulong)uVar12 * 4);
    iVar2 = iVar44 + 1;
    uVar15 = iVar2 - iVar47;
    piVar36 = (int *)(uVar8 + (uVar15 - uVar11));
    if (uVar6 <= uVar15) {
      piVar36 = (int *)(lVar49 + (ulong)uVar15);
    }
    *(int *)(lVar18 + (ulong)uVar12 * 4) = iVar44;
    *(int *)(lVar28 + uVar35 * 4) = iVar44;
    if ((uVar15 - uVar6 < 0xfffffffd) &&
       (puVar45 = (ulong *)((long)puVar38 + 1), *piVar36 == *(int *)puVar45)) {
      puVar24 = puVar7;
      if (uVar6 <= uVar15) {
        puVar24 = puVar4;
      }
      lVar27 = (long)puVar38 + 5;
      FUN_1099bca60(lVar27,piVar36 + 1,puVar4,puVar24,piVar3);
      uVar31 = (long)puVar45 - (long)param_4;
      puVar24 = (ulong *)param_2[3];
      if (puVar20 < puVar45) {
        puVar16 = puVar24;
        puVar34 = param_4;
        if (param_4 <= puVar20) {
          puVar16 = (ulong *)((long)puVar24 + ((long)puVar20 - (long)param_4));
          uVar32 = *param_4;
          puVar24[1] = param_4[1];
          *puVar24 = uVar32;
          uVar32 = param_4[2];
          puVar24[3] = param_4[3];
          puVar24[2] = uVar32;
          puVar34 = puVar20;
          if (0x20 < (long)puVar20 - (long)param_4) {
            puVar24 = puVar24 + 4;
            puVar37 = param_4 + 6;
            do {
              uVar32 = puVar37[-2];
              puVar24[1] = puVar37[-1];
              *puVar24 = uVar32;
              uVar32 = *puVar37;
              puVar24[3] = puVar37[1];
              puVar24[2] = uVar32;
              puVar24 = puVar24 + 4;
              puVar37 = puVar37 + 4;
            } while (puVar24 < puVar16);
          }
        }
        if (puVar34 < puVar45) {
          puVar34 = (ulong *)((long)puVar34 + -1);
          do {
            puVar34 = (ulong *)((long)puVar34 + 1);
            *(undefined1 *)puVar16 = *(undefined1 *)puVar34;
            puVar16 = (ulong *)((long)puVar16 + 1);
          } while (puVar34 != puVar38);
        }
LAB_1099babb0:
        param_2[3] = param_2[3] + uVar31;
        piVar36 = (int *)param_2[1];
        if (0xffff < uVar31) {
          *(undefined4 *)(param_2 + 9) = 1;
          *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar36 - *param_2) >> 3);
        }
      }
      else {
        uVar32 = *param_4;
        puVar24[1] = param_4[1];
        *puVar24 = uVar32;
        lVar33 = param_2[3];
        if (0x10 < uVar31) {
          uVar32 = param_4[2];
          *(ulong *)(lVar33 + 0x18) = param_4[3];
          *(ulong *)(lVar33 + 0x10) = uVar32;
          uVar32 = param_4[4];
          *(ulong *)(lVar33 + 0x28) = param_4[5];
          *(ulong *)(lVar33 + 0x20) = uVar32;
          if (0x30 < (long)uVar31) {
            puVar38 = (ulong *)(lVar33 + 0x30);
            puVar24 = param_4 + 8;
            do {
              uVar32 = puVar24[-2];
              puVar38[1] = puVar24[-1];
              *puVar38 = uVar32;
              uVar32 = *puVar24;
              puVar38[3] = puVar24[1];
              puVar38[2] = uVar32;
              puVar38 = puVar38 + 4;
              puVar24 = puVar24 + 4;
            } while (puVar38 < (ulong *)(lVar33 + uVar31));
          }
          goto LAB_1099babb0;
        }
        param_2[3] = lVar33 + uVar31;
        piVar36 = (int *)param_2[1];
      }
      puVar16 = (ulong *)(lVar27 + 4);
      uVar32 = lVar27 + 1;
      *(short *)(piVar36 + 1) = (short)uVar31;
      *piVar36 = 1;
      iVar41 = iVar47;
      if (uVar32 >> 0x10 != 0) goto LAB_1099bafe0;
      goto LAB_1099baff8;
    }
    puVar45 = puVar38;
    if (uVar14 <= uVar6) {
      uVar14 = *(uint *)(uVar29 + (uVar32 * -0x30e44323485a9b9d >> (uVar21 & 0x3f)) * 4);
      if ((uVar14 <= uVar10) || (puVar24 = (ulong *)(uVar8 + uVar14), *puVar24 != uVar32))
      goto LAB_1099ba808;
      puVar16 = puVar38 + 1;
      FUN_1099bca60(puVar16,puVar24 + 1,puVar4,puVar7,piVar3);
      puVar16 = puVar16 + 1;
      iVar41 = (iVar44 - uVar11) - uVar14;
      if (param_4 < puVar38) {
        piVar36 = (int *)((uVar8 - 1) + (ulong)uVar14);
        puVar45 = (ulong *)((long)puVar38 + -1);
        do {
          if ((char)*puVar45 != (char)*piVar36) goto LAB_1099baeb0;
          puVar16 = (ulong *)((long)puVar16 + 1);
          puVar38 = (ulong *)((long)puVar45 + -1);
        } while ((param_4 < puVar45) &&
                (bVar1 = piVar5 < piVar36, piVar36 = (int *)((long)piVar36 + -1), puVar45 = puVar38,
                bVar1));
        goto LAB_1099bae4c;
      }
      goto LAB_1099baeb4;
    }
    puVar24 = (ulong *)(lVar49 + uVar31);
    if (*puVar24 == uVar32) {
      puVar16 = puVar38 + 1;
      puVar34 = puVar24 + 1;
      puVar37 = puVar16;
      if (puVar16 < puVar22) {
        if (*puVar34 == *puVar16) {
          lVar27 = 0;
          puVar37 = puVar38 + 2;
          puVar34 = (ulong *)(lVar49 + 0x10 + uVar31);
          do {
            if (puVar22 <= puVar37) goto LAB_1099ba98c;
            uVar35 = *puVar34;
            uVar32 = *puVar37;
            lVar27 = lVar27 + 8;
            puVar37 = puVar37 + 1;
            puVar34 = puVar34 + 1;
          } while (uVar35 == uVar32);
          uVar32 = uVar32 ^ uVar35;
          uVar32 = (uVar32 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar32 & 0x5555555555555555) << 1;
          uVar32 = (uVar32 & 0xcccccccccccccccc) >> 2 | (uVar32 & 0x3333333333333333) << 2;
          uVar32 = (uVar32 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar32 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar32 = (uVar32 & 0xff00ff00ff00ff00) >> 8 | (uVar32 & 0xff00ff00ff00ff) << 8;
          uVar32 = (uVar32 & 0xffff0000ffff0000) >> 0x10 | (uVar32 & 0xffff0000ffff) << 0x10;
          uVar32 = lVar27 + ((ulong)LZCOUNT(uVar32 >> 0x20 | uVar32 << 0x20) >> 3);
        }
        else {
          uVar32 = *puVar16 ^ *puVar34;
          uVar32 = (uVar32 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar32 & 0x5555555555555555) << 1;
          uVar32 = (uVar32 & 0xcccccccccccccccc) >> 2 | (uVar32 & 0x3333333333333333) << 2;
          uVar32 = (uVar32 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar32 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar32 = (uVar32 & 0xff00ff00ff00ff00) >> 8 | (uVar32 & 0xff00ff00ff00ff) << 8;
          uVar32 = (uVar32 & 0xffff0000ffff0000) >> 0x10 | (uVar32 & 0xffff0000ffff) << 0x10;
          uVar32 = (ulong)LZCOUNT(uVar32 >> 0x20 | uVar32 << 0x20) >> 3;
        }
      }
      else {
LAB_1099ba98c:
        if (puVar37 < puVar26) {
          if ((int)*puVar34 == (int)*puVar37) {
            puVar37 = (ulong *)((long)puVar37 + 4);
            puVar34 = (ulong *)((long)puVar34 + 4);
          }
        }
        if (puVar37 < puVar23) {
          if ((short)*puVar34 == (short)*puVar37) {
            puVar37 = (ulong *)((long)puVar37 + 2);
            puVar34 = (ulong *)((long)puVar34 + 2);
          }
        }
        if ((puVar37 < puVar4) && ((char)*puVar34 == (char)*puVar37)) {
          puVar37 = (ulong *)((long)puVar37 + 1);
        }
        uVar32 = (long)puVar37 - (long)puVar16;
      }
      puVar16 = (ulong *)(uVar32 + 8);
      iVar41 = iVar41 - (int)puVar24;
      if (puVar38 <= param_4) goto LAB_1099baeb4;
      piVar36 = (int *)(lVar49 + -1 + uVar31);
      puVar45 = (ulong *)((long)puVar38 + -1);
      do {
        if ((char)*puVar45 != (char)*piVar36) goto LAB_1099baeb0;
        puVar16 = (ulong *)((long)puVar16 + 1);
        puVar38 = (ulong *)((long)puVar45 + -1);
      } while ((param_4 < puVar45) &&
              (bVar1 = piVar3 < piVar36, piVar36 = (int *)((long)piVar36 + -1), puVar45 = puVar38,
              bVar1));
      goto LAB_1099bae4c;
    }
LAB_1099ba808:
    if (uVar6 < uVar43) {
      piVar36 = (int *)(lVar49 + (ulong)uVar43);
      if (*piVar36 != (int)*puVar38) goto LAB_1099ba914;
LAB_1099ba85c:
      puVar45 = (ulong *)((long)puVar38 + 1);
      uVar31 = *puVar45;
      uVar35 = uVar31 * -0x30e44323485a9b9d >> (uVar25 & 0x3f);
      uVar14 = *(uint *)(lVar28 + uVar35 * 4);
      uVar32 = (ulong)uVar14;
      *(int *)(lVar28 + uVar35 * 4) = iVar2;
      if (uVar6 < uVar14) {
        puVar24 = (ulong *)(lVar49 + uVar32);
        if (*puVar24 == uVar31) {
          puVar16 = (ulong *)((long)puVar38 + 9);
          puVar34 = puVar24 + 1;
          puVar37 = puVar16;
          if (puVar16 < puVar22) {
            if (*puVar34 == *puVar16) {
              lVar27 = 0;
              puVar37 = (ulong *)((long)puVar38 + 0x11);
              puVar34 = (ulong *)(lVar49 + 0x10 + uVar32);
              do {
                if (puVar22 <= puVar37) goto LAB_1099bad70;
                uVar35 = *puVar34;
                uVar31 = *puVar37;
                lVar27 = lVar27 + 8;
                puVar37 = puVar37 + 1;
                puVar34 = puVar34 + 1;
              } while (uVar35 == uVar31);
              uVar31 = uVar31 ^ uVar35;
              uVar31 = (uVar31 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar31 & 0x5555555555555555) << 1;
              uVar31 = (uVar31 & 0xcccccccccccccccc) >> 2 | (uVar31 & 0x3333333333333333) << 2;
              uVar31 = (uVar31 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar31 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar31 = (uVar31 & 0xff00ff00ff00ff00) >> 8 | (uVar31 & 0xff00ff00ff00ff) << 8;
              uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
              uVar31 = lVar27 + ((ulong)LZCOUNT(uVar31 >> 0x20 | uVar31 << 0x20) >> 3);
            }
            else {
              uVar31 = *puVar16 ^ *puVar34;
              uVar31 = (uVar31 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar31 & 0x5555555555555555) << 1;
              uVar31 = (uVar31 & 0xcccccccccccccccc) >> 2 | (uVar31 & 0x3333333333333333) << 2;
              uVar31 = (uVar31 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar31 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar31 = (uVar31 & 0xff00ff00ff00ff00) >> 8 | (uVar31 & 0xff00ff00ff00ff) << 8;
              uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
              uVar31 = (ulong)LZCOUNT(uVar31 >> 0x20 | uVar31 << 0x20) >> 3;
            }
          }
          else {
LAB_1099bad70:
            if (puVar37 < puVar26) {
              if ((int)*puVar34 == (int)*puVar37) {
                puVar37 = (ulong *)((long)puVar37 + 4);
                puVar34 = (ulong *)((long)puVar34 + 4);
              }
            }
            if (puVar37 < puVar23) {
              if ((short)*puVar34 == (short)*puVar37) {
                puVar37 = (ulong *)((long)puVar37 + 2);
                puVar34 = (ulong *)((long)puVar34 + 2);
              }
            }
            if ((puVar37 < puVar4) && ((char)*puVar34 == (char)*puVar37)) {
              puVar37 = (ulong *)((long)puVar37 + 1);
            }
            uVar31 = (long)puVar37 - (long)puVar16;
          }
          puVar16 = (ulong *)(uVar31 + 8);
          iVar41 = (int)puVar45 - (int)puVar24;
          if (param_4 < puVar45) {
            piVar36 = (int *)(lVar49 + -1 + uVar32);
            do {
              if ((char)*puVar38 != (char)*piVar36) goto LAB_1099bb1d4;
              puVar16 = (ulong *)((long)puVar16 + 1);
              puVar45 = (ulong *)((long)puVar38 + -1);
            } while ((param_4 < puVar38) &&
                    (bVar1 = piVar3 < piVar36, piVar36 = (int *)((long)piVar36 + -1),
                    puVar38 = puVar45, bVar1));
LAB_1099baeb0:
            puVar45 = (ulong *)((long)puVar45 + 1);
          }
        }
        else {
LAB_1099baab0:
          puVar16 = (ulong *)((long)puVar38 + 4);
          puVar45 = (ulong *)(piVar36 + 1);
          if (uVar43 < uVar6) {
            FUN_1099bca60(puVar16,puVar45,puVar4,puVar7,piVar3);
            puVar16 = (ulong *)((long)puVar16 + 4);
            iVar41 = iVar44 - uVar43;
            puVar45 = puVar38;
            if ((param_4 < puVar38) && (piVar5 < piVar36)) {
              puVar45 = (ulong *)((long)puVar38 + -1);
              do {
                piVar36 = (int *)((long)piVar36 + -1);
                if ((char)*puVar45 != *(char *)piVar36) goto LAB_1099baeb0;
                puVar16 = (ulong *)((long)puVar16 + 1);
                puVar38 = (ulong *)((long)puVar45 + -1);
              } while ((param_4 < puVar45) && (puVar45 = puVar38, piVar5 < piVar36));
LAB_1099bae4c:
              puVar45 = (ulong *)((long)puVar38 + 1);
            }
          }
          else {
            puVar24 = puVar16;
            if (puVar16 < puVar22) {
              if (*puVar45 == *puVar16) {
                lVar27 = 0;
                puVar45 = (ulong *)(piVar36 + 3);
                puVar24 = (ulong *)((long)puVar38 + 0xc);
                do {
                  if (puVar22 <= puVar24) goto LAB_1099bacf0;
                  uVar32 = *puVar45;
                  uVar31 = *puVar24;
                  lVar27 = lVar27 + 8;
                  puVar45 = puVar45 + 1;
                  puVar24 = puVar24 + 1;
                } while (uVar32 == uVar31);
                uVar31 = uVar31 ^ uVar32;
                uVar31 = (uVar31 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar31 & 0x5555555555555555) << 1;
                uVar31 = (uVar31 & 0xcccccccccccccccc) >> 2 | (uVar31 & 0x3333333333333333) << 2;
                uVar31 = (uVar31 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar31 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar31 = (uVar31 & 0xff00ff00ff00ff00) >> 8 | (uVar31 & 0xff00ff00ff00ff) << 8;
                uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
                uVar31 = lVar27 + ((ulong)LZCOUNT(uVar31 >> 0x20 | uVar31 << 0x20) >> 3);
              }
              else {
                uVar31 = *puVar16 ^ *puVar45;
                uVar31 = (uVar31 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar31 & 0x5555555555555555) << 1;
                uVar31 = (uVar31 & 0xcccccccccccccccc) >> 2 | (uVar31 & 0x3333333333333333) << 2;
                uVar31 = (uVar31 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar31 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar31 = (uVar31 & 0xff00ff00ff00ff00) >> 8 | (uVar31 & 0xff00ff00ff00ff) << 8;
                uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
                uVar31 = (ulong)LZCOUNT(uVar31 >> 0x20 | uVar31 << 0x20) >> 3;
              }
            }
            else {
LAB_1099bacf0:
              if (puVar24 < puVar26) {
                if ((int)*puVar45 == (int)*puVar24) {
                  puVar45 = (ulong *)((long)puVar45 + 4);
                  puVar24 = (ulong *)((long)puVar24 + 4);
                }
              }
              if (puVar24 < puVar23) {
                if ((short)*puVar45 == (short)*puVar24) {
                  puVar45 = (ulong *)((long)puVar45 + 2);
                  puVar24 = (ulong *)((long)puVar24 + 2);
                }
              }
              if ((puVar24 < puVar4) && ((char)*puVar45 == (char)*puVar24)) {
                puVar24 = (ulong *)((long)puVar24 + 1);
              }
              uVar31 = (long)puVar24 - (long)puVar16;
            }
            puVar16 = (ulong *)(uVar31 + 4);
            iVar41 = iVar41 - (int)piVar36;
            puVar45 = puVar38;
            if ((param_4 < puVar38) && (piVar3 < piVar36)) {
              puVar45 = (ulong *)((long)puVar38 + -1);
              do {
                piVar36 = (int *)((long)piVar36 + -1);
                if ((char)*puVar45 != *(char *)piVar36) goto LAB_1099baeb0;
                puVar16 = (ulong *)((long)puVar16 + 1);
                puVar38 = (ulong *)((long)puVar45 + -1);
              } while ((param_4 < puVar45) && (puVar45 = puVar38, piVar3 < piVar36));
              goto LAB_1099bae4c;
            }
          }
        }
      }
      else {
        uVar14 = *(uint *)(uVar29 + (uVar31 * -0x30e44323485a9b9d >> (uVar21 & 0x3f)) * 4);
        if ((uVar14 <= uVar10) || (puVar24 = (ulong *)(uVar8 + uVar14), *puVar24 != uVar31))
        goto LAB_1099baab0;
        lVar27 = (long)puVar38 + 9;
        FUN_1099bca60(lVar27,puVar24 + 1,puVar4,puVar7,piVar3);
        puVar16 = (ulong *)(lVar27 + 8);
        iVar41 = (iVar2 - uVar11) - uVar14;
        if (param_4 < puVar45) {
          piVar36 = (int *)((uVar8 - 1) + (ulong)uVar14);
          do {
            if ((char)*puVar38 != (char)*piVar36) goto LAB_1099bb1d4;
            puVar16 = (ulong *)((long)puVar16 + 1);
            puVar45 = (ulong *)((long)puVar38 + -1);
          } while ((param_4 < puVar38) &&
                  (bVar1 = piVar5 < piVar36, piVar36 = (int *)((long)piVar36 + -1),
                  puVar38 = puVar45, bVar1));
          goto LAB_1099baeb0;
        }
      }
      goto LAB_1099baeb4;
    }
    uVar43 = *(uint *)(uVar30 + (ulong)(uVar13 >> (ulong)(0x20U - iVar9 & 0x1f)) * 4);
    if ((uVar10 < uVar43) && (piVar36 = (int *)(uVar8 + uVar43), *piVar36 == (int)*puVar38)) {
      uVar43 = uVar43 + uVar11;
      goto LAB_1099ba85c;
    }
LAB_1099ba914:
    puVar38 = (ulong *)((long)puVar38 + ((long)puVar38 - (long)param_4 >> 8) + 1);
    goto LAB_1099bb1bc;
  }
LAB_1099bb1f4:
  *param_3 = iVar47;
  param_3[1] = iVar46;
  return (long)puVar4 - (long)param_4;
LAB_1099ba554:
  puVar45 = (ulong *)((long)puVar38 + 1);
LAB_1099ba238:
  uVar32 = (long)puVar45 - (long)param_4;
  puVar38 = (ulong *)param_2[3];
  if (puVar20 < puVar45) {
    puVar24 = puVar38;
    puVar34 = param_4;
    if (param_4 <= puVar20) {
      puVar24 = (ulong *)((long)puVar38 + ((long)puVar20 - (long)param_4));
      uVar35 = *param_4;
      puVar38[1] = param_4[1];
      *puVar38 = uVar35;
      uVar35 = param_4[2];
      puVar38[3] = param_4[3];
      puVar38[2] = uVar35;
      puVar34 = puVar20;
      if (0x20 < (long)puVar20 - (long)param_4) {
        puVar38 = puVar38 + 4;
        puVar37 = param_4 + 6;
        do {
          uVar35 = puVar37[-2];
          puVar38[1] = puVar37[-1];
          *puVar38 = uVar35;
          uVar35 = *puVar37;
          puVar38[3] = puVar37[1];
          puVar38[2] = uVar35;
          puVar38 = puVar38 + 4;
          puVar37 = puVar37 + 4;
        } while (puVar38 < puVar24);
      }
    }
    if (puVar34 < puVar45) {
      do {
        puVar38 = (ulong *)((long)puVar34 + 1);
        *(char *)puVar24 = (char)*puVar34;
        puVar24 = (ulong *)((long)puVar24 + 1);
        puVar34 = puVar38;
      } while (puVar38 != puVar45);
    }
  }
  else {
    uVar35 = *param_4;
    puVar38[1] = param_4[1];
    *puVar38 = uVar35;
    lVar27 = param_2[3];
    if (uVar32 < 0x11) {
      param_2[3] = lVar27 + uVar32;
      piVar36 = (int *)param_2[1];
      goto LAB_1099ba344;
    }
    uVar35 = param_4[2];
    *(ulong *)(lVar27 + 0x18) = param_4[3];
    *(ulong *)(lVar27 + 0x10) = uVar35;
    uVar35 = param_4[4];
    *(ulong *)(lVar27 + 0x28) = param_4[5];
    *(ulong *)(lVar27 + 0x20) = uVar35;
    if (0x30 < (long)uVar32) {
      puVar38 = (ulong *)(lVar27 + 0x30);
      puVar24 = param_4 + 8;
      do {
        uVar35 = puVar24[-2];
        puVar38[1] = puVar24[-1];
        *puVar38 = uVar35;
        uVar35 = *puVar24;
        puVar38[3] = puVar24[1];
        puVar38[2] = uVar35;
        puVar38 = puVar38 + 4;
        puVar24 = puVar24 + 4;
      } while (puVar38 < (ulong *)(lVar27 + uVar32));
    }
  }
  param_2[3] = param_2[3] + uVar32;
  piVar36 = (int *)param_2[1];
  if (0xffff < uVar32) {
    *(undefined4 *)(param_2 + 9) = 1;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar36 - *param_2) >> 3);
  }
LAB_1099ba344:
  uVar35 = (long)puVar16 - 3;
  *(short *)(piVar36 + 1) = (short)uVar32;
  *piVar36 = iVar41 + 3;
  iVar46 = iVar47;
  iVar47 = iVar41;
  if (0xffff < uVar35) {
LAB_1099ba364:
    *(undefined4 *)(param_2 + 9) = 2;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar36 - *param_2) >> 3);
    iVar47 = iVar41;
  }
LAB_1099ba37c:
  *(short *)((long)piVar36 + 6) = (short)uVar35;
  piVar36 = piVar36 + 2;
  param_2[1] = (long)piVar36;
  puVar38 = (ulong *)((long)puVar45 + (long)puVar16);
  param_4 = puVar38;
  if (puVar38 <= puVar19) {
    uVar42 = iVar44 + 2;
    lVar27 = *(long *)(lVar49 + (ulong)uVar42);
    *(uint *)(lVar28 + ((ulong)(lVar27 * -0x30e44323485a9b9d) >> (uVar31 & 0x3f)) * 4) = uVar42;
    *(int *)(lVar28 + ((ulong)(*(long *)((long)puVar38 - 2U) * -0x30e44323485a9b9d) >>
                      (uVar31 & 0x3f)) * 4) = (int)(long *)((long)puVar38 - 2U) - iVar48;
    *(uint *)(lVar18 + ((ulong)(lVar27 * -0x30e4432345000000) >> (uVar25 & 0x3f)) * 4) = uVar42;
    *(int *)(lVar18 + ((ulong)(*(long *)((long)puVar38 - 1U) * -0x30e4432345000000) >>
                      (uVar25 & 0x3f)) * 4) = (int)(long *)((long)puVar38 - 1U) - iVar48;
    do {
      iVar44 = iVar47;
      iVar2 = (int)puVar38 - iVar48;
      uVar42 = iVar2 - iVar46;
      lVar27 = uVar8 - uVar11;
      if (uVar6 <= uVar42) {
        lVar27 = lVar49;
      }
      param_4 = puVar38;
      iVar47 = iVar44;
      if ((0xfffffffc < uVar42 - uVar6) || (*(int *)(lVar27 + (ulong)uVar42) != (int)*puVar38))
      break;
      puVar45 = puVar7;
      if (uVar6 <= uVar42) {
        puVar45 = puVar4;
      }
      piVar17 = (int *)((long)puVar38 + 4);
      FUN_1099bca60(piVar17,(int *)(lVar27 + (ulong)uVar42) + 1,puVar4,puVar45,piVar3);
      if (puVar38 <= puVar20) {
        puVar45 = (ulong *)param_2[3];
        uVar32 = *puVar38;
        puVar45[1] = puVar38[1];
        *puVar45 = uVar32;
        piVar36 = (int *)param_2[1];
      }
      *(undefined2 *)(piVar36 + 1) = 0;
      *piVar36 = 1;
      if (0xffff < (long)piVar17 + 1U) {
        *(undefined4 *)(param_2 + 9) = 2;
        *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar36 - *param_2) >> 3);
      }
      *(short *)((long)piVar36 + 6) = (short)((long)piVar17 + 1U);
      uVar32 = *puVar38;
      *(int *)(lVar18 + (uVar32 * -0x30e4432345000000 >> (uVar25 & 0x3f)) * 4) = iVar2;
      piVar36 = piVar36 + 2;
      *(int *)(lVar28 + (uVar32 * -0x30e44323485a9b9d >> (uVar31 & 0x3f)) * 4) = iVar2;
      puVar38 = (ulong *)((long)puVar38 + (long)piVar17 + 4);
      param_2[1] = (long)piVar36;
      param_4 = puVar38;
      iVar47 = iVar46;
      iVar46 = iVar44;
    } while (puVar38 <= puVar19);
  }
LAB_1099ba53c:
  if (puVar19 <= puVar38) goto LAB_1099bb1f4;
  goto LAB_1099b9970;
LAB_1099b98d8:
  puVar45 = (ulong *)((long)puVar38 + 1);
LAB_1099b95bc:
  uVar32 = (long)puVar45 - (long)param_4;
  puVar38 = (ulong *)param_2[3];
  if (puVar20 < puVar45) {
    puVar24 = puVar38;
    puVar34 = param_4;
    if (param_4 <= puVar20) {
      puVar24 = (ulong *)((long)puVar38 + ((long)puVar20 - (long)param_4));
      uVar35 = *param_4;
      puVar38[1] = param_4[1];
      *puVar38 = uVar35;
      uVar35 = param_4[2];
      puVar38[3] = param_4[3];
      puVar38[2] = uVar35;
      puVar34 = puVar20;
      if (0x20 < (long)puVar20 - (long)param_4) {
        puVar38 = puVar38 + 4;
        puVar37 = param_4 + 6;
        do {
          uVar35 = puVar37[-2];
          puVar38[1] = puVar37[-1];
          *puVar38 = uVar35;
          uVar35 = *puVar37;
          puVar38[3] = puVar37[1];
          puVar38[2] = uVar35;
          puVar38 = puVar38 + 4;
          puVar37 = puVar37 + 4;
        } while (puVar38 < puVar24);
      }
    }
    if (puVar34 < puVar45) {
      do {
        puVar38 = (ulong *)((long)puVar34 + 1);
        *(char *)puVar24 = (char)*puVar34;
        puVar24 = (ulong *)((long)puVar24 + 1);
        puVar34 = puVar38;
      } while (puVar38 != puVar45);
    }
  }
  else {
    uVar35 = *param_4;
    puVar38[1] = param_4[1];
    *puVar38 = uVar35;
    lVar27 = param_2[3];
    if (uVar32 < 0x11) {
      param_2[3] = lVar27 + uVar32;
      piVar36 = (int *)param_2[1];
      goto LAB_1099b96c8;
    }
    uVar35 = param_4[2];
    *(ulong *)(lVar27 + 0x18) = param_4[3];
    *(ulong *)(lVar27 + 0x10) = uVar35;
    uVar35 = param_4[4];
    *(ulong *)(lVar27 + 0x28) = param_4[5];
    *(ulong *)(lVar27 + 0x20) = uVar35;
    if (0x30 < (long)uVar32) {
      puVar38 = (ulong *)(lVar27 + 0x30);
      puVar24 = param_4 + 8;
      do {
        uVar35 = puVar24[-2];
        puVar38[1] = puVar24[-1];
        *puVar38 = uVar35;
        uVar35 = *puVar24;
        puVar38[3] = puVar24[1];
        puVar38[2] = uVar35;
        puVar38 = puVar38 + 4;
        puVar24 = puVar24 + 4;
      } while (puVar38 < (ulong *)(lVar27 + uVar32));
    }
  }
  param_2[3] = param_2[3] + uVar32;
  piVar36 = (int *)param_2[1];
  if (0xffff < uVar32) {
    *(undefined4 *)(param_2 + 9) = 1;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar36 - *param_2) >> 3);
  }
LAB_1099b96c8:
  uVar35 = (long)puVar16 - 3;
  *(short *)(piVar36 + 1) = (short)uVar32;
  *piVar36 = iVar41 + 3;
  iVar46 = iVar47;
  iVar47 = iVar41;
  if (0xffff < uVar35) {
LAB_1099b96e8:
    *(undefined4 *)(param_2 + 9) = 2;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar36 - *param_2) >> 3);
    iVar47 = iVar41;
  }
LAB_1099b9700:
  *(short *)((long)piVar36 + 6) = (short)uVar35;
  piVar36 = piVar36 + 2;
  param_2[1] = (long)piVar36;
  puVar38 = (ulong *)((long)puVar45 + (long)puVar16);
  param_4 = puVar38;
  if (puVar38 <= puVar19) {
    uVar42 = iVar44 + 2;
    lVar27 = *(long *)(lVar49 + (ulong)uVar42);
    *(uint *)(lVar28 + ((ulong)(lVar27 * -0x30e44323485a9b9d) >> (uVar31 & 0x3f)) * 4) = uVar42;
    *(int *)(lVar28 + ((ulong)(*(long *)((long)puVar38 - 2U) * -0x30e44323485a9b9d) >>
                      (uVar31 & 0x3f)) * 4) = (int)(long *)((long)puVar38 - 2U) - iVar48;
    *(uint *)(lVar18 + ((ulong)(lVar27 * -0x30e4432340650000) >> (uVar25 & 0x3f)) * 4) = uVar42;
    *(int *)(lVar18 + ((ulong)(*(long *)((long)puVar38 - 1U) * -0x30e4432340650000) >>
                      (uVar25 & 0x3f)) * 4) = (int)(long *)((long)puVar38 - 1U) - iVar48;
    do {
      iVar44 = iVar47;
      iVar2 = (int)puVar38 - iVar48;
      uVar42 = iVar2 - iVar46;
      lVar27 = uVar8 - uVar11;
      if (uVar6 <= uVar42) {
        lVar27 = lVar49;
      }
      param_4 = puVar38;
      iVar47 = iVar44;
      if ((0xfffffffc < uVar42 - uVar6) || (*(int *)(lVar27 + (ulong)uVar42) != (int)*puVar38))
      break;
      puVar45 = puVar7;
      if (uVar6 <= uVar42) {
        puVar45 = puVar4;
      }
      piVar17 = (int *)((long)puVar38 + 4);
      FUN_1099bca60(piVar17,(int *)(lVar27 + (ulong)uVar42) + 1,puVar4,puVar45,piVar3);
      if (puVar38 <= puVar20) {
        puVar45 = (ulong *)param_2[3];
        uVar32 = *puVar38;
        puVar45[1] = puVar38[1];
        *puVar45 = uVar32;
        piVar36 = (int *)param_2[1];
      }
      *(undefined2 *)(piVar36 + 1) = 0;
      *piVar36 = 1;
      if (0xffff < (long)piVar17 + 1U) {
        *(undefined4 *)(param_2 + 9) = 2;
        *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar36 - *param_2) >> 3);
      }
      *(short *)((long)piVar36 + 6) = (short)((long)piVar17 + 1U);
      uVar32 = *puVar38;
      *(int *)(lVar18 + (uVar32 * -0x30e4432340650000 >> (uVar25 & 0x3f)) * 4) = iVar2;
      piVar36 = piVar36 + 2;
      *(int *)(lVar28 + (uVar32 * -0x30e44323485a9b9d >> (uVar31 & 0x3f)) * 4) = iVar2;
      puVar38 = (ulong *)((long)puVar38 + (long)piVar17 + 4);
      param_2[1] = (long)piVar36;
      param_4 = puVar38;
      iVar47 = iVar46;
      iVar46 = iVar44;
    } while (puVar38 <= puVar19);
  }
LAB_1099b98c0:
  if (puVar19 <= puVar38) goto LAB_1099bb1f4;
  goto LAB_1099b8cf4;
LAB_1099bb1d4:
  puVar45 = (ulong *)((long)puVar38 + 1);
LAB_1099baeb4:
  uVar31 = (long)puVar45 - (long)param_4;
  puVar38 = (ulong *)param_2[3];
  if (puVar20 < puVar45) {
    puVar24 = puVar38;
    puVar34 = param_4;
    if (param_4 <= puVar20) {
      puVar24 = (ulong *)((long)puVar38 + ((long)puVar20 - (long)param_4));
      uVar32 = *param_4;
      puVar38[1] = param_4[1];
      *puVar38 = uVar32;
      uVar32 = param_4[2];
      puVar38[3] = param_4[3];
      puVar38[2] = uVar32;
      puVar34 = puVar20;
      if (0x20 < (long)puVar20 - (long)param_4) {
        puVar38 = puVar38 + 4;
        puVar37 = param_4 + 6;
        do {
          uVar32 = puVar37[-2];
          puVar38[1] = puVar37[-1];
          *puVar38 = uVar32;
          uVar32 = *puVar37;
          puVar38[3] = puVar37[1];
          puVar38[2] = uVar32;
          puVar38 = puVar38 + 4;
          puVar37 = puVar37 + 4;
        } while (puVar38 < puVar24);
      }
    }
    if (puVar34 < puVar45) {
      do {
        puVar38 = (ulong *)((long)puVar34 + 1);
        *(char *)puVar24 = (char)*puVar34;
        puVar24 = (ulong *)((long)puVar24 + 1);
        puVar34 = puVar38;
      } while (puVar38 != puVar45);
    }
  }
  else {
    uVar32 = *param_4;
    puVar38[1] = param_4[1];
    *puVar38 = uVar32;
    lVar27 = param_2[3];
    if (uVar31 < 0x11) {
      param_2[3] = lVar27 + uVar31;
      piVar36 = (int *)param_2[1];
      goto LAB_1099bafc0;
    }
    uVar32 = param_4[2];
    *(ulong *)(lVar27 + 0x18) = param_4[3];
    *(ulong *)(lVar27 + 0x10) = uVar32;
    uVar32 = param_4[4];
    *(ulong *)(lVar27 + 0x28) = param_4[5];
    *(ulong *)(lVar27 + 0x20) = uVar32;
    if (0x30 < (long)uVar31) {
      puVar38 = (ulong *)(lVar27 + 0x30);
      puVar24 = param_4 + 8;
      do {
        uVar32 = puVar24[-2];
        puVar38[1] = puVar24[-1];
        *puVar38 = uVar32;
        uVar32 = *puVar24;
        puVar38[3] = puVar24[1];
        puVar38[2] = uVar32;
        puVar38 = puVar38 + 4;
        puVar24 = puVar24 + 4;
      } while (puVar38 < (ulong *)(lVar27 + uVar31));
    }
  }
  param_2[3] = param_2[3] + uVar31;
  piVar36 = (int *)param_2[1];
  if (0xffff < uVar31) {
    *(undefined4 *)(param_2 + 9) = 1;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar36 - *param_2) >> 3);
  }
LAB_1099bafc0:
  uVar32 = (long)puVar16 - 3;
  *(short *)(piVar36 + 1) = (short)uVar31;
  *piVar36 = iVar41 + 3;
  iVar46 = iVar47;
  iVar47 = iVar41;
  if (0xffff < uVar32) {
LAB_1099bafe0:
    *(undefined4 *)(param_2 + 9) = 2;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar36 - *param_2) >> 3);
    iVar47 = iVar41;
  }
LAB_1099baff8:
  *(short *)((long)piVar36 + 6) = (short)uVar32;
  piVar36 = piVar36 + 2;
  param_2[1] = (long)piVar36;
  puVar38 = (ulong *)((long)puVar45 + (long)puVar16);
  param_4 = puVar38;
  if (puVar38 <= puVar19) {
    uVar43 = iVar44 + 2;
    *(uint *)(lVar28 + ((ulong)(*(long *)(lVar49 + (ulong)uVar43) * -0x30e44323485a9b9d) >>
                       (uVar25 & 0x3f)) * 4) = uVar43;
    *(int *)(lVar28 + ((ulong)(*(long *)((long)puVar38 - 2U) * -0x30e44323485a9b9d) >>
                      (uVar25 & 0x3f)) * 4) = (int)(long *)((long)puVar38 - 2U) - iVar48;
    *(uint *)(lVar18 + (ulong)((uint)(*(int *)(lVar49 + (ulong)uVar43) * -0x61c8864f) >>
                              (ulong)(uVar42 & 0x1f)) * 4) = uVar43;
    *(int *)(lVar18 + (ulong)((uint)(*(int *)((long)puVar38 - 1U) * -0x61c8864f) >>
                             (ulong)(uVar42 & 0x1f)) * 4) =
         (int)(int *)((long)puVar38 - 1U) - iVar48;
    do {
      iVar44 = iVar46;
      iVar2 = (int)puVar38 - iVar48;
      uVar43 = iVar2 - iVar44;
      lVar27 = uVar8 - uVar11;
      if (uVar6 <= uVar43) {
        lVar27 = lVar49;
      }
      param_4 = puVar38;
      iVar46 = iVar44;
      if ((0xfffffffc < uVar43 - uVar6) || (*(int *)(lVar27 + (ulong)uVar43) != (int)*puVar38))
      break;
      puVar45 = puVar7;
      if (uVar6 <= uVar43) {
        puVar45 = puVar4;
      }
      piVar17 = (int *)((long)puVar38 + 4);
      FUN_1099bca60(piVar17,(int *)(lVar27 + (ulong)uVar43) + 1,puVar4,puVar45,piVar3);
      if (puVar38 <= puVar20) {
        puVar45 = (ulong *)param_2[3];
        uVar31 = *puVar38;
        puVar45[1] = puVar38[1];
        *puVar45 = uVar31;
        piVar36 = (int *)param_2[1];
      }
      *(undefined2 *)(piVar36 + 1) = 0;
      *piVar36 = 1;
      if (0xffff < (long)piVar17 + 1U) {
        *(undefined4 *)(param_2 + 9) = 2;
        *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar36 - *param_2) >> 3);
      }
      *(short *)((long)piVar36 + 6) = (short)((long)piVar17 + 1U);
      piVar36 = piVar36 + 2;
      *(int *)(lVar18 + (ulong)((uint)((int)*puVar38 * -0x61c8864f) >> (ulong)(uVar42 & 0x1f)) * 4)
           = iVar2;
      *(int *)(lVar28 + (*puVar38 * -0x30e44323485a9b9d >> (uVar25 & 0x3f)) * 4) = iVar2;
      puVar38 = (ulong *)((long)puVar38 + (long)piVar17 + 4);
      param_2[1] = (long)piVar36;
      param_4 = puVar38;
      iVar46 = iVar47;
      iVar47 = iVar44;
    } while (puVar38 <= puVar19);
  }
LAB_1099bb1bc:
  if (puVar19 <= puVar38) goto LAB_1099bb1f4;
  goto LAB_1099ba5f0;
LAB_1099b8c5c:
  puVar45 = (ulong *)((long)puVar38 + 1);
LAB_1099b8938:
  uVar32 = (long)puVar45 - (long)param_4;
  puVar38 = (ulong *)param_2[3];
  if (puVar20 < puVar45) {
    puVar24 = puVar38;
    puVar34 = param_4;
    if (param_4 <= puVar20) {
      puVar24 = (ulong *)((long)puVar38 + ((long)puVar20 - (long)param_4));
      uVar35 = *param_4;
      puVar38[1] = param_4[1];
      *puVar38 = uVar35;
      uVar35 = param_4[2];
      puVar38[3] = param_4[3];
      puVar38[2] = uVar35;
      puVar34 = puVar20;
      if (0x20 < (long)puVar20 - (long)param_4) {
        puVar38 = puVar38 + 4;
        puVar37 = param_4 + 6;
        do {
          uVar35 = puVar37[-2];
          puVar38[1] = puVar37[-1];
          *puVar38 = uVar35;
          uVar35 = *puVar37;
          puVar38[3] = puVar37[1];
          puVar38[2] = uVar35;
          puVar38 = puVar38 + 4;
          puVar37 = puVar37 + 4;
        } while (puVar38 < puVar24);
      }
    }
    if (puVar34 < puVar45) {
      do {
        puVar38 = (ulong *)((long)puVar34 + 1);
        *(char *)puVar24 = (char)*puVar34;
        puVar24 = (ulong *)((long)puVar24 + 1);
        puVar34 = puVar38;
      } while (puVar38 != puVar45);
    }
  }
  else {
    uVar35 = *param_4;
    puVar38[1] = param_4[1];
    *puVar38 = uVar35;
    lVar27 = param_2[3];
    if (uVar32 < 0x11) {
      param_2[3] = lVar27 + uVar32;
      piVar36 = (int *)param_2[1];
      goto LAB_1099b8a44;
    }
    uVar35 = param_4[2];
    *(ulong *)(lVar27 + 0x18) = param_4[3];
    *(ulong *)(lVar27 + 0x10) = uVar35;
    uVar35 = param_4[4];
    *(ulong *)(lVar27 + 0x28) = param_4[5];
    *(ulong *)(lVar27 + 0x20) = uVar35;
    if (0x30 < (long)uVar32) {
      puVar38 = (ulong *)(lVar27 + 0x30);
      puVar24 = param_4 + 8;
      do {
        uVar35 = puVar24[-2];
        puVar38[1] = puVar24[-1];
        *puVar38 = uVar35;
        uVar35 = *puVar24;
        puVar38[3] = puVar24[1];
        puVar38[2] = uVar35;
        puVar38 = puVar38 + 4;
        puVar24 = puVar24 + 4;
      } while (puVar38 < (ulong *)(lVar27 + uVar32));
    }
  }
  param_2[3] = param_2[3] + uVar32;
  piVar36 = (int *)param_2[1];
  if (0xffff < uVar32) {
    *(undefined4 *)(param_2 + 9) = 1;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar36 - *param_2) >> 3);
  }
LAB_1099b8a44:
  uVar35 = (long)puVar16 - 3;
  *(short *)(piVar36 + 1) = (short)uVar32;
  *piVar36 = iVar41 + 3;
  iVar46 = iVar47;
  if (0xffff < uVar35) {
LAB_1099b8a64:
    *(undefined4 *)(param_2 + 9) = 2;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar36 - *param_2) >> 3);
  }
LAB_1099b8a7c:
  *(short *)((long)piVar36 + 6) = (short)uVar35;
  piVar36 = piVar36 + 2;
  param_2[1] = (long)piVar36;
  puVar38 = (ulong *)((long)puVar45 + (long)puVar16);
  param_4 = puVar38;
  iVar47 = iVar41;
  if (puVar38 <= puVar19) {
    uVar42 = iVar44 + 2;
    lVar27 = *(long *)(lVar49 + (ulong)uVar42);
    *(uint *)(lVar28 + ((ulong)(lVar27 * -0x30e44323485a9b9d) >> (uVar31 & 0x3f)) * 4) = uVar42;
    *(int *)(lVar28 + ((ulong)(*(long *)((long)puVar38 - 2U) * -0x30e44323485a9b9d) >>
                      (uVar31 & 0x3f)) * 4) = (int)(long *)((long)puVar38 - 2U) - iVar48;
    *(uint *)(lVar18 + ((ulong)(lVar27 * -0x30e44323405a9d00) >> (uVar25 & 0x3f)) * 4) = uVar42;
    *(int *)(lVar18 + ((ulong)(*(long *)((long)puVar38 - 1U) * -0x30e44323405a9d00) >>
                      (uVar25 & 0x3f)) * 4) = (int)(long *)((long)puVar38 - 1U) - iVar48;
    do {
      iVar47 = iVar41;
      iVar41 = iVar46;
      iVar2 = (int)puVar38 - iVar48;
      uVar42 = iVar2 - iVar41;
      lVar27 = uVar8 - uVar11;
      if (uVar6 <= uVar42) {
        lVar27 = lVar49;
      }
      param_4 = puVar38;
      iVar46 = iVar41;
      if ((0xfffffffc < uVar42 - uVar6) || (*(int *)(lVar27 + (ulong)uVar42) != (int)*puVar38))
      break;
      puVar45 = puVar7;
      if (uVar6 <= uVar42) {
        puVar45 = puVar4;
      }
      piVar17 = (int *)((long)puVar38 + 4);
      FUN_1099bca60(piVar17,(int *)(lVar27 + (ulong)uVar42) + 1,puVar4,puVar45,piVar3);
      if (puVar38 <= puVar20) {
        puVar45 = (ulong *)param_2[3];
        uVar32 = *puVar38;
        puVar45[1] = puVar38[1];
        *puVar45 = uVar32;
        piVar36 = (int *)param_2[1];
      }
      *(undefined2 *)(piVar36 + 1) = 0;
      *piVar36 = 1;
      if (0xffff < (long)piVar17 + 1U) {
        *(undefined4 *)(param_2 + 9) = 2;
        *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar36 - *param_2) >> 3);
      }
      *(short *)((long)piVar36 + 6) = (short)((long)piVar17 + 1U);
      uVar32 = *puVar38;
      *(int *)(lVar18 + (uVar32 * -0x30e44323405a9d00 >> (uVar25 & 0x3f)) * 4) = iVar2;
      piVar36 = piVar36 + 2;
      *(int *)(lVar28 + (uVar32 * -0x30e44323485a9b9d >> (uVar31 & 0x3f)) * 4) = iVar2;
      puVar38 = (ulong *)((long)puVar38 + (long)piVar17 + 4);
      param_2[1] = (long)piVar36;
      param_4 = puVar38;
      iVar46 = iVar47;
      iVar47 = iVar41;
    } while (puVar38 <= puVar19);
  }
LAB_1099b8c44:
  if (puVar19 <= puVar38) goto LAB_1099bb1f4;
  goto LAB_1099b806c;
}



/* Entry: 1099bca60; end: 1099bcc53;  */

ulong FUN_1099bca60(ulong *param_1,ulong *param_2,ulong *param_3,long param_4,ulong *param_5)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong *puVar5;
  long lVar6;
  
  puVar1 = (ulong *)((long)param_1 + (param_4 - (long)param_2));
  if (param_3 <= puVar1) {
    puVar1 = param_3;
  }
  puVar3 = param_1;
  puVar5 = param_2;
  if (param_1 < (ulong *)((long)puVar1 - 7U)) {
    if (*param_2 == *param_1) {
      lVar6 = 0;
      do {
        puVar5 = puVar5 + 1;
        puVar3 = puVar3 + 1;
        if ((ulong *)((long)puVar1 - 7U) <= puVar3) goto LAB_1099bcad4;
        lVar6 = lVar6 + 8;
      } while (*puVar5 == *puVar3);
      uVar4 = *puVar3 ^ *puVar5;
      uVar4 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
      uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      uVar4 = lVar6 + ((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3);
    }
    else {
      uVar4 = *param_1 ^ *param_2;
      uVar4 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
      uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      uVar4 = (ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3;
    }
  }
  else {
LAB_1099bcad4:
    if (puVar3 < (ulong *)((long)puVar1 - 3U)) {
      if ((int)*puVar5 == (int)*puVar3) {
        puVar3 = (ulong *)((long)puVar3 + 4);
        puVar5 = (ulong *)((long)puVar5 + 4);
      }
    }
    if (puVar3 < (ulong *)((long)puVar1 - 1U)) {
      if ((short)*puVar5 == (short)*puVar3) {
        puVar3 = (ulong *)((long)puVar3 + 2);
        puVar5 = (ulong *)((long)puVar5 + 2);
      }
    }
    if ((puVar3 < puVar1) && ((char)*puVar5 == (char)*puVar3)) {
      puVar3 = (ulong *)((long)puVar3 + 1);
    }
    uVar4 = (long)puVar3 - (long)param_1;
  }
  if ((long)param_2 + uVar4 != param_4) {
    return uVar4;
  }
  puVar1 = (ulong *)((long)param_1 + uVar4);
  puVar3 = puVar1;
  if (puVar1 < (ulong *)((long)param_3 + -7)) {
    if (*param_5 == *puVar1) {
      lVar6 = 0;
      puVar3 = (ulong *)(uVar4 + (long)param_1);
      do {
        puVar3 = puVar3 + 1;
        param_5 = param_5 + 1;
        if ((ulong *)((long)param_3 + -7) <= puVar3) goto LAB_1099bcbc8;
        lVar6 = lVar6 + 8;
      } while (*param_5 == *puVar3);
      uVar2 = *puVar3 ^ *param_5;
      uVar2 = (uVar2 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar2 & 0x5555555555555555) << 1;
      uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
      uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      uVar2 = lVar6 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3);
    }
    else {
      uVar2 = *puVar1 ^ *param_5;
      uVar2 = (uVar2 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar2 & 0x5555555555555555) << 1;
      uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
      uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      uVar2 = (ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3;
    }
  }
  else {
LAB_1099bcbc8:
    if (puVar3 < (ulong *)((long)param_3 + -3)) {
      if ((int)*param_5 == (int)*puVar3) {
        param_5 = (ulong *)((long)param_5 + 4);
        puVar3 = (ulong *)((long)puVar3 + 4);
      }
    }
    if (puVar3 < (ulong *)((long)param_3 + -1)) {
      if ((short)*param_5 == (short)*puVar3) {
        param_5 = (ulong *)((long)param_5 + 2);
        puVar3 = (ulong *)((long)puVar3 + 2);
      }
    }
    if ((puVar3 < param_3) && ((char)*param_5 == (char)*puVar3)) {
      puVar3 = (ulong *)((long)puVar3 + 1);
    }
    uVar2 = (long)puVar3 - (long)puVar1;
  }
  return uVar2 + uVar4;
}



/* Entry: 1099bcc54; end: 1099bcdef;  */

void FUN_1099bcc54(long param_1,long param_2,int param_3)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  bool bVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  
  lVar11 = *(long *)(param_1 + 8);
  plVar12 = (long *)(lVar11 + (ulong)*(uint *)(param_1 + 0x24));
  plVar1 = (long *)((long)plVar12 + 3);
  if (plVar1 < (long *)(param_2 + -6)) {
    lVar13 = *(long *)(param_1 + 0x30);
    iVar2 = *(int *)(param_1 + 200);
    uVar6 = (ulong)(0x40 - *(int *)(param_1 + 0xc0));
    uVar3 = 0x20 - *(int *)(param_1 + 0xc0);
    do {
      plVar7 = plVar1;
      if (iVar2 < 7) {
        if (iVar2 == 5) {
          uVar8 = *plVar12 * -0x30e4432345000000;
          goto LAB_1099bcd38;
        }
        if (iVar2 == 6) {
          uVar8 = *plVar12 * -0x30e4432340650000;
          goto LAB_1099bcd38;
        }
LAB_1099bcd14:
        uVar8 = (ulong)((uint)((int)*plVar12 * -0x61c8864f) >> (ulong)(uVar3 & 0x1f));
      }
      else {
        if (iVar2 == 7) {
          uVar8 = *plVar12 * -0x30e44323405a9d00;
        }
        else {
          if (iVar2 != 8) goto LAB_1099bcd14;
          uVar8 = *plVar12 * -0x30e44323485a9b9d;
        }
LAB_1099bcd38:
        uVar8 = uVar8 >> (uVar6 & 0x3f);
      }
      iVar4 = (int)plVar12 - (int)lVar11;
      *(int *)(lVar13 + uVar8 * 4) = iVar4;
      if (param_3 != 0) {
        lVar9 = 1;
        bVar10 = false;
        do {
          if (iVar2 < 7) {
            if (iVar2 == 5) {
              uVar8 = *(long *)((long)plVar12 + lVar9) * -0x30e4432345000000;
              goto LAB_1099bcdb8;
            }
            if (iVar2 == 6) {
              uVar8 = *(long *)((long)plVar12 + lVar9) * -0x30e4432340650000;
              goto LAB_1099bcdb8;
            }
LAB_1099bcd94:
            uVar8 = (ulong)((uint)(*(int *)((long)plVar12 + lVar9) * -0x61c8864f) >>
                           (ulong)(uVar3 & 0x1f));
          }
          else {
            if (iVar2 == 7) {
              uVar8 = *(long *)((long)plVar12 + lVar9) * -0x30e44323405a9d00;
            }
            else {
              if (iVar2 != 8) goto LAB_1099bcd94;
              uVar8 = *(long *)((long)plVar12 + lVar9) * -0x30e44323485a9b9d;
            }
LAB_1099bcdb8:
            uVar8 = uVar8 >> (uVar6 & 0x3f);
          }
          if (*(int *)(lVar13 + uVar8 * 4) == 0) {
            *(int *)(lVar13 + uVar8 * 4) = (int)lVar9 + iVar4;
          }
          lVar9 = 2;
          bVar5 = !bVar10;
          bVar10 = true;
        } while (bVar5);
      }
      plVar1 = (long *)((long)plVar7 + 3);
      plVar12 = plVar7;
    } while (plVar1 < (long *)(param_2 + -6));
  }
  return;
}



/* Entry: 1099bcdf0; end: 1099be547;  */

long FUN_1099bcdf0(long param_1,long *param_2,uint *param_3,ulong *param_4,long param_5)

{
  long lVar1;
  ulong *puVar2;
  ulong *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong uVar16;
  uint uVar17;
  int *piVar18;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong *puVar22;
  long lVar23;
  ulong uVar24;
  int *piVar25;
  long lVar26;
  int iVar27;
  int iVar28;
  long lVar29;
  ulong *puVar30;
  ulong *puVar31;
  ulong *puVar32;
  int iVar33;
  ulong uVar34;
  uint uVar35;
  uint uVar36;
  ulong uVar37;
  
  lVar26 = *(long *)(param_1 + 0x30);
  iVar33 = *(int *)(param_1 + 200);
  uVar5 = *(uint *)(param_1 + 0xcc);
  if (uVar5 < 2) {
    uVar5 = 1;
  }
  uVar20 = (ulong)(uVar5 + 1);
  lVar29 = *(long *)(param_1 + 8);
  puVar2 = (ulong *)(param_5 + (long)param_4);
  iVar28 = (int)lVar29;
  iVar27 = (int)puVar2 - iVar28;
  uVar7 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
  uVar5 = iVar27 - uVar7;
  if (iVar27 - *(uint *)(param_1 + 0x18) <= uVar7) {
    uVar5 = *(uint *)(param_1 + 0x18);
  }
  puVar3 = (ulong *)(lVar29 + (ulong)uVar5);
  puVar30 = puVar2 + -1;
  uVar4 = *param_3;
  uVar7 = param_3[1];
  puVar13 = param_4;
  if (puVar3 == param_4) {
    puVar13 = (ulong *)((long)param_4 + 1);
  }
  puVar22 = (ulong *)((long)puVar13 + 1);
  uVar10 = (int)puVar13 - (int)puVar3;
  uVar17 = 0;
  if (uVar7 <= uVar10) {
    uVar17 = uVar7;
  }
  uVar19 = 0;
  if (uVar4 <= uVar10) {
    uVar19 = uVar4;
  }
  lVar1 = lVar29 + 2;
  if (iVar33 == 5) {
    if (puVar22 < puVar30) {
      uVar11 = (ulong)(0x40 - *(int *)(param_1 + 0xc0));
      puVar31 = (ulong *)((long)puVar2 - 7);
      puVar32 = puVar2 + -4;
      do {
        uVar37 = *puVar13;
        uVar24 = uVar37 * -0x30e4432345000000 >> (uVar11 & 0x3f);
        uVar21 = *puVar22;
        uVar16 = uVar21 * -0x30e4432345000000 >> (uVar11 & 0x3f);
        uVar35 = *(uint *)(lVar26 + uVar24 * 4);
        uVar36 = *(uint *)(lVar26 + uVar16 * 4);
        uVar34 = (long)puVar13 - lVar29;
        iVar33 = (int)uVar34;
        *(int *)(lVar26 + uVar24 * 4) = iVar33;
        *(int *)(lVar26 + uVar16 * 4) = (int)puVar22 - iVar28;
        if (uVar19 == 0) {
LAB_1099bda84:
          if (((uVar5 < uVar35) &&
              (puVar12 = (ulong *)(lVar29 + (ulong)uVar35), puVar15 = puVar13,
              (int)*puVar12 == (int)uVar37)) ||
             ((uVar5 < uVar36 &&
              (puVar12 = (ulong *)(lVar29 + (ulong)uVar36), puVar15 = puVar22,
              (int)*puVar12 == (int)uVar21)))) {
            uVar35 = (int)puVar15 - (int)puVar12;
            iVar27 = uVar35 + 2;
            uVar16 = 0;
            uVar17 = uVar19;
            if (puVar3 < puVar12 && param_4 < puVar15) {
              do {
                puVar22 = (ulong *)((long)puVar15 + -1);
                puVar13 = (ulong *)((long)puVar12 + -1);
                if ((*(char *)puVar22 != *(char *)puVar13) ||
                   (uVar16 = uVar16 + 1, puVar12 = puVar13, puVar15 = puVar22, puVar22 <= param_4))
                break;
              } while (puVar3 < puVar13);
            }
            goto LAB_1099bdb3c;
          }
          lVar23 = uVar20 + ((ulong)((long)puVar13 - (long)param_4) >> 7);
          puVar22 = (ulong *)((long)puVar22 + lVar23);
          puVar13 = (ulong *)((long)puVar13 + lVar23);
        }
        else {
          piVar18 = (int *)((long)puVar13 + 2);
          piVar25 = (int *)((long)piVar18 - (ulong)uVar19);
          if (*piVar25 != *piVar18) goto LAB_1099bda84;
          iVar27 = 0;
          uVar16 = (ulong)(*(char *)((long)puVar13 + 1) == *(char *)((long)piVar25 + -1));
          puVar12 = (ulong *)((long)piVar25 - uVar16);
          puVar15 = (ulong *)((long)piVar18 - uVar16);
          uVar35 = uVar19;
LAB_1099bdb3c:
          puVar13 = (ulong *)((long)puVar15 + uVar16 + 4);
          puVar22 = (ulong *)((long)puVar12 + uVar16 + 4);
          puVar14 = puVar13;
          if (puVar13 < puVar31) {
            if (*puVar22 == *puVar13) {
              lVar23 = 0;
              puVar14 = (ulong *)((long)puVar15 + uVar16 + 0xc);
              puVar22 = (ulong *)((long)puVar12 + uVar16 + 0xc);
              do {
                if (puVar31 <= puVar14) goto LAB_1099bdbac;
                uVar24 = *puVar22;
                uVar21 = *puVar14;
                lVar23 = lVar23 + 8;
                puVar14 = puVar14 + 1;
                puVar22 = puVar22 + 1;
              } while (uVar24 == uVar21);
              uVar21 = uVar21 ^ uVar24;
              uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
              uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
              uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
              uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
              uVar21 = lVar23 + ((ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3);
            }
            else {
              uVar21 = *puVar13 ^ *puVar22;
              uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
              uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
              uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
              uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
              uVar21 = (ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3;
            }
          }
          else {
LAB_1099bdbac:
            if (puVar14 < (ulong *)((long)puVar2 - 3U)) {
              if ((int)*puVar22 == (int)*puVar14) {
                puVar14 = (ulong *)((long)puVar14 + 4);
                puVar22 = (ulong *)((long)puVar22 + 4);
              }
            }
            if (puVar14 < (ulong *)((long)puVar2 - 1U)) {
              if ((short)*puVar22 == (short)*puVar14) {
                puVar14 = (ulong *)((long)puVar14 + 2);
                puVar22 = (ulong *)((long)puVar22 + 2);
              }
            }
            if ((puVar14 < puVar2) && ((char)*puVar22 == (char)*puVar14)) {
              puVar14 = (ulong *)((long)puVar14 + 1);
            }
            uVar21 = (long)puVar14 - (long)puVar13;
          }
          uVar24 = (long)puVar15 - (long)param_4;
          puVar13 = (ulong *)param_2[3];
          if (puVar32 < puVar15) {
            puVar22 = puVar13;
            puVar12 = param_4;
            if (param_4 <= puVar32) {
              puVar22 = (ulong *)((long)puVar13 + ((long)puVar32 - (long)param_4));
              uVar37 = *param_4;
              puVar13[1] = param_4[1];
              *puVar13 = uVar37;
              uVar37 = param_4[2];
              puVar13[3] = param_4[3];
              puVar13[2] = uVar37;
              puVar12 = puVar32;
              if (0x20 < (long)puVar32 - (long)param_4) {
                puVar13 = puVar13 + 4;
                puVar14 = param_4 + 6;
                do {
                  uVar37 = puVar14[-2];
                  puVar13[1] = puVar14[-1];
                  *puVar13 = uVar37;
                  uVar37 = *puVar14;
                  puVar13[3] = puVar14[1];
                  puVar13[2] = uVar37;
                  puVar13 = puVar13 + 4;
                  puVar14 = puVar14 + 4;
                } while (puVar13 < puVar22);
              }
            }
            if (puVar12 < puVar15) {
              do {
                puVar13 = (ulong *)((long)puVar12 + 1);
                *(char *)puVar22 = (char)*puVar12;
                puVar22 = (ulong *)((long)puVar22 + 1);
                puVar12 = puVar13;
              } while (puVar13 != puVar15);
            }
LAB_1099bdcfc:
            param_2[3] = param_2[3] + uVar24;
            piVar18 = (int *)param_2[1];
            if (0xffff < uVar24) {
              *(undefined4 *)(param_2 + 9) = 1;
              *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar18 - *param_2) >> 3);
            }
          }
          else {
            uVar37 = *param_4;
            puVar13[1] = param_4[1];
            *puVar13 = uVar37;
            lVar23 = param_2[3];
            if (0x10 < uVar24) {
              uVar37 = param_4[2];
              *(ulong *)(lVar23 + 0x18) = param_4[3];
              *(ulong *)(lVar23 + 0x10) = uVar37;
              uVar37 = param_4[4];
              *(ulong *)(lVar23 + 0x28) = param_4[5];
              *(ulong *)(lVar23 + 0x20) = uVar37;
              if (0x30 < (long)uVar24) {
                puVar13 = (ulong *)(lVar23 + 0x30);
                puVar22 = param_4 + 8;
                do {
                  uVar37 = puVar22[-2];
                  puVar13[1] = puVar22[-1];
                  *puVar13 = uVar37;
                  uVar37 = *puVar22;
                  puVar13[3] = puVar22[1];
                  puVar13[2] = uVar37;
                  puVar13 = puVar13 + 4;
                  puVar22 = puVar22 + 4;
                } while (puVar13 < (ulong *)(lVar23 + uVar24));
              }
              goto LAB_1099bdcfc;
            }
            param_2[3] = lVar23 + uVar24;
            piVar18 = (int *)param_2[1];
          }
          uVar37 = uVar16 + uVar21 + 1;
          *(short *)(piVar18 + 1) = (short)uVar24;
          *piVar18 = iVar27 + 1;
          if (0xffff < uVar37) {
            *(undefined4 *)(param_2 + 9) = 2;
            *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar18 - *param_2) >> 3);
          }
          *(short *)((long)piVar18 + 6) = (short)uVar37;
          piVar18 = piVar18 + 2;
          param_2[1] = (long)piVar18;
          param_4 = (ulong *)((long)puVar15 + uVar16 + uVar21 + 4);
          puVar22 = (ulong *)((long)param_4 + 1);
          puVar13 = param_4;
          uVar19 = uVar35;
          if (param_4 <= puVar30) {
            *(int *)(lVar26 + ((ulong)(*(long *)(lVar1 + (uVar34 & 0xffffffff)) *
                                      -0x30e4432345000000) >> (uVar11 & 0x3f)) * 4) = iVar33 + 2;
            *(int *)(lVar26 + ((ulong)(*(long *)((long)param_4 - 2U) * -0x30e4432345000000) >>
                              (uVar11 & 0x3f)) * 4) = (int)(long *)((long)param_4 - 2U) - iVar28;
            if ((uVar17 != 0) &&
               (uVar36 = uVar17, (int)*param_4 == *(int *)((long)param_4 - (ulong)uVar17))) {
              do {
                uVar17 = uVar35;
                uVar35 = uVar36;
                puVar22 = param_4;
                puVar13 = (ulong *)((long)puVar22 + 4);
                puVar12 = (ulong *)((long)puVar13 + -(ulong)uVar35);
                puVar15 = puVar13;
                if (puVar13 < puVar31) {
                  if (*puVar12 == *puVar13) {
                    lVar23 = 0;
                    puVar15 = (ulong *)((long)puVar22 + 0xc);
                    puVar12 = (ulong *)((long)puVar22 + 0xc + -(ulong)uVar35);
                    do {
                      if (puVar31 <= puVar15) goto LAB_1099bde40;
                      uVar21 = *puVar12;
                      uVar16 = *puVar15;
                      lVar23 = lVar23 + 8;
                      puVar15 = puVar15 + 1;
                      puVar12 = puVar12 + 1;
                    } while (uVar21 == uVar16);
                    uVar16 = uVar16 ^ uVar21;
                    uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1
                    ;
                    uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2
                    ;
                    uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
                    uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar16 & 0xffff0000ffff) << 0x10;
                    uVar16 = lVar23 + ((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3);
                  }
                  else {
                    uVar16 = *puVar13 ^ *puVar12;
                    uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1
                    ;
                    uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2
                    ;
                    uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
                    uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar16 & 0xffff0000ffff) << 0x10;
                    uVar16 = (ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3;
                  }
                }
                else {
LAB_1099bde40:
                  if (puVar15 < (ulong *)((long)puVar2 - 3U)) {
                    if ((int)*puVar12 == (int)*puVar15) {
                      puVar15 = (ulong *)((long)puVar15 + 4);
                      puVar12 = (ulong *)((long)puVar12 + 4);
                    }
                  }
                  if (puVar15 < (ulong *)((long)puVar2 - 1U)) {
                    if ((short)*puVar12 == (short)*puVar15) {
                      puVar15 = (ulong *)((long)puVar15 + 2);
                      puVar12 = (ulong *)((long)puVar12 + 2);
                    }
                  }
                  if ((puVar15 < puVar2) && ((char)*puVar12 == (char)*puVar15)) {
                    puVar15 = (ulong *)((long)puVar15 + 1);
                  }
                  uVar16 = (long)puVar15 - (long)puVar13;
                }
                *(int *)(lVar26 + (*puVar22 * -0x30e4432345000000 >> (uVar11 & 0x3f)) * 4) =
                     (int)puVar22 - iVar28;
                if (puVar22 <= puVar32) {
                  puVar13 = (ulong *)param_2[3];
                  uVar21 = *puVar22;
                  puVar13[1] = puVar22[1];
                  *puVar13 = uVar21;
                  piVar18 = (int *)param_2[1];
                }
                *(undefined2 *)(piVar18 + 1) = 0;
                *piVar18 = 1;
                if (0xffff < uVar16 + 1) {
                  *(undefined4 *)(param_2 + 9) = 2;
                  *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar18 - *param_2) >> 3);
                }
                param_4 = (ulong *)((long)puVar22 + uVar16 + 4);
                *(short *)((long)piVar18 + 6) = (short)(uVar16 + 1);
                piVar18 = piVar18 + 2;
                param_2[1] = (long)piVar18;
              } while (((uVar17 != 0) && (param_4 <= puVar30)) &&
                      (uVar36 = uVar17, (int)*param_4 == *(int *)((long)param_4 - (ulong)uVar17)));
              puVar22 = (ulong *)((long)puVar22 + uVar16 + 5);
              puVar13 = param_4;
              uVar19 = uVar35;
            }
          }
        }
      } while (puVar22 < puVar30);
    }
  }
  else if (iVar33 == 6) {
    if (puVar22 < puVar30) {
      uVar11 = (ulong)(0x40 - *(int *)(param_1 + 0xc0));
      puVar31 = (ulong *)((long)puVar2 - 7);
      puVar32 = puVar2 + -4;
      do {
        uVar37 = *puVar13;
        uVar24 = uVar37 * -0x30e4432340650000 >> (uVar11 & 0x3f);
        uVar21 = *puVar22;
        uVar16 = uVar21 * -0x30e4432340650000 >> (uVar11 & 0x3f);
        uVar35 = *(uint *)(lVar26 + uVar24 * 4);
        uVar36 = *(uint *)(lVar26 + uVar16 * 4);
        uVar34 = (long)puVar13 - lVar29;
        iVar33 = (int)uVar34;
        *(int *)(lVar26 + uVar24 * 4) = iVar33;
        *(int *)(lVar26 + uVar16 * 4) = (int)puVar22 - iVar28;
        if (uVar19 == 0) {
LAB_1099bd4ec:
          if (((uVar5 < uVar35) &&
              (puVar12 = (ulong *)(lVar29 + (ulong)uVar35), puVar15 = puVar13,
              (int)*puVar12 == (int)uVar37)) ||
             ((uVar5 < uVar36 &&
              (puVar12 = (ulong *)(lVar29 + (ulong)uVar36), puVar15 = puVar22,
              (int)*puVar12 == (int)uVar21)))) {
            uVar35 = (int)puVar15 - (int)puVar12;
            iVar27 = uVar35 + 2;
            uVar16 = 0;
            uVar17 = uVar19;
            if (puVar3 < puVar12 && param_4 < puVar15) {
              do {
                puVar22 = (ulong *)((long)puVar15 + -1);
                puVar13 = (ulong *)((long)puVar12 + -1);
                if ((*(char *)puVar22 != *(char *)puVar13) ||
                   (uVar16 = uVar16 + 1, puVar12 = puVar13, puVar15 = puVar22, puVar22 <= param_4))
                break;
              } while (puVar3 < puVar13);
            }
            goto LAB_1099bd5a4;
          }
          lVar23 = uVar20 + ((ulong)((long)puVar13 - (long)param_4) >> 7);
          puVar22 = (ulong *)((long)puVar22 + lVar23);
          puVar13 = (ulong *)((long)puVar13 + lVar23);
        }
        else {
          piVar18 = (int *)((long)puVar13 + 2);
          piVar25 = (int *)((long)piVar18 - (ulong)uVar19);
          if (*piVar25 != *piVar18) goto LAB_1099bd4ec;
          iVar27 = 0;
          uVar16 = (ulong)(*(char *)((long)puVar13 + 1) == *(char *)((long)piVar25 + -1));
          puVar12 = (ulong *)((long)piVar25 - uVar16);
          puVar15 = (ulong *)((long)piVar18 - uVar16);
          uVar35 = uVar19;
LAB_1099bd5a4:
          puVar13 = (ulong *)((long)puVar15 + uVar16 + 4);
          puVar22 = (ulong *)((long)puVar12 + uVar16 + 4);
          puVar14 = puVar13;
          if (puVar13 < puVar31) {
            if (*puVar22 == *puVar13) {
              lVar23 = 0;
              puVar14 = (ulong *)((long)puVar15 + uVar16 + 0xc);
              puVar22 = (ulong *)((long)puVar12 + uVar16 + 0xc);
              do {
                if (puVar31 <= puVar14) goto LAB_1099bd614;
                uVar24 = *puVar22;
                uVar21 = *puVar14;
                lVar23 = lVar23 + 8;
                puVar14 = puVar14 + 1;
                puVar22 = puVar22 + 1;
              } while (uVar24 == uVar21);
              uVar21 = uVar21 ^ uVar24;
              uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
              uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
              uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
              uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
              uVar21 = lVar23 + ((ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3);
            }
            else {
              uVar21 = *puVar13 ^ *puVar22;
              uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
              uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
              uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
              uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
              uVar21 = (ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3;
            }
          }
          else {
LAB_1099bd614:
            if (puVar14 < (ulong *)((long)puVar2 - 3U)) {
              if ((int)*puVar22 == (int)*puVar14) {
                puVar14 = (ulong *)((long)puVar14 + 4);
                puVar22 = (ulong *)((long)puVar22 + 4);
              }
            }
            if (puVar14 < (ulong *)((long)puVar2 - 1U)) {
              if ((short)*puVar22 == (short)*puVar14) {
                puVar14 = (ulong *)((long)puVar14 + 2);
                puVar22 = (ulong *)((long)puVar22 + 2);
              }
            }
            if ((puVar14 < puVar2) && ((char)*puVar22 == (char)*puVar14)) {
              puVar14 = (ulong *)((long)puVar14 + 1);
            }
            uVar21 = (long)puVar14 - (long)puVar13;
          }
          uVar24 = (long)puVar15 - (long)param_4;
          puVar13 = (ulong *)param_2[3];
          if (puVar32 < puVar15) {
            puVar22 = puVar13;
            puVar12 = param_4;
            if (param_4 <= puVar32) {
              puVar22 = (ulong *)((long)puVar13 + ((long)puVar32 - (long)param_4));
              uVar37 = *param_4;
              puVar13[1] = param_4[1];
              *puVar13 = uVar37;
              uVar37 = param_4[2];
              puVar13[3] = param_4[3];
              puVar13[2] = uVar37;
              puVar12 = puVar32;
              if (0x20 < (long)puVar32 - (long)param_4) {
                puVar13 = puVar13 + 4;
                puVar14 = param_4 + 6;
                do {
                  uVar37 = puVar14[-2];
                  puVar13[1] = puVar14[-1];
                  *puVar13 = uVar37;
                  uVar37 = *puVar14;
                  puVar13[3] = puVar14[1];
                  puVar13[2] = uVar37;
                  puVar13 = puVar13 + 4;
                  puVar14 = puVar14 + 4;
                } while (puVar13 < puVar22);
              }
            }
            if (puVar12 < puVar15) {
              do {
                puVar13 = (ulong *)((long)puVar12 + 1);
                *(char *)puVar22 = (char)*puVar12;
                puVar22 = (ulong *)((long)puVar22 + 1);
                puVar12 = puVar13;
              } while (puVar13 != puVar15);
            }
LAB_1099bd764:
            param_2[3] = param_2[3] + uVar24;
            piVar18 = (int *)param_2[1];
            if (0xffff < uVar24) {
              *(undefined4 *)(param_2 + 9) = 1;
              *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar18 - *param_2) >> 3);
            }
          }
          else {
            uVar37 = *param_4;
            puVar13[1] = param_4[1];
            *puVar13 = uVar37;
            lVar23 = param_2[3];
            if (0x10 < uVar24) {
              uVar37 = param_4[2];
              *(ulong *)(lVar23 + 0x18) = param_4[3];
              *(ulong *)(lVar23 + 0x10) = uVar37;
              uVar37 = param_4[4];
              *(ulong *)(lVar23 + 0x28) = param_4[5];
              *(ulong *)(lVar23 + 0x20) = uVar37;
              if (0x30 < (long)uVar24) {
                puVar13 = (ulong *)(lVar23 + 0x30);
                puVar22 = param_4 + 8;
                do {
                  uVar37 = puVar22[-2];
                  puVar13[1] = puVar22[-1];
                  *puVar13 = uVar37;
                  uVar37 = *puVar22;
                  puVar13[3] = puVar22[1];
                  puVar13[2] = uVar37;
                  puVar13 = puVar13 + 4;
                  puVar22 = puVar22 + 4;
                } while (puVar13 < (ulong *)(lVar23 + uVar24));
              }
              goto LAB_1099bd764;
            }
            param_2[3] = lVar23 + uVar24;
            piVar18 = (int *)param_2[1];
          }
          uVar37 = uVar16 + uVar21 + 1;
          *(short *)(piVar18 + 1) = (short)uVar24;
          *piVar18 = iVar27 + 1;
          if (0xffff < uVar37) {
            *(undefined4 *)(param_2 + 9) = 2;
            *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar18 - *param_2) >> 3);
          }
          *(short *)((long)piVar18 + 6) = (short)uVar37;
          piVar18 = piVar18 + 2;
          param_2[1] = (long)piVar18;
          param_4 = (ulong *)((long)puVar15 + uVar16 + uVar21 + 4);
          puVar22 = (ulong *)((long)param_4 + 1);
          puVar13 = param_4;
          uVar19 = uVar35;
          if (param_4 <= puVar30) {
            *(int *)(lVar26 + ((ulong)(*(long *)(lVar1 + (uVar34 & 0xffffffff)) *
                                      -0x30e4432340650000) >> (uVar11 & 0x3f)) * 4) = iVar33 + 2;
            *(int *)(lVar26 + ((ulong)(*(long *)((long)param_4 - 2U) * -0x30e4432340650000) >>
                              (uVar11 & 0x3f)) * 4) = (int)(long *)((long)param_4 - 2U) - iVar28;
            if ((uVar17 != 0) &&
               (uVar36 = uVar17, (int)*param_4 == *(int *)((long)param_4 - (ulong)uVar17))) {
              do {
                uVar17 = uVar35;
                uVar35 = uVar36;
                puVar22 = param_4;
                puVar13 = (ulong *)((long)puVar22 + 4);
                puVar12 = (ulong *)((long)puVar13 + -(ulong)uVar35);
                puVar15 = puVar13;
                if (puVar13 < puVar31) {
                  if (*puVar12 == *puVar13) {
                    lVar23 = 0;
                    puVar15 = (ulong *)((long)puVar22 + 0xc);
                    puVar12 = (ulong *)((long)puVar22 + 0xc + -(ulong)uVar35);
                    do {
                      if (puVar31 <= puVar15) goto LAB_1099bd8a8;
                      uVar21 = *puVar12;
                      uVar16 = *puVar15;
                      lVar23 = lVar23 + 8;
                      puVar15 = puVar15 + 1;
                      puVar12 = puVar12 + 1;
                    } while (uVar21 == uVar16);
                    uVar16 = uVar16 ^ uVar21;
                    uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1
                    ;
                    uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2
                    ;
                    uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
                    uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar16 & 0xffff0000ffff) << 0x10;
                    uVar16 = lVar23 + ((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3);
                  }
                  else {
                    uVar16 = *puVar13 ^ *puVar12;
                    uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1
                    ;
                    uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2
                    ;
                    uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
                    uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar16 & 0xffff0000ffff) << 0x10;
                    uVar16 = (ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3;
                  }
                }
                else {
LAB_1099bd8a8:
                  if (puVar15 < (ulong *)((long)puVar2 - 3U)) {
                    if ((int)*puVar12 == (int)*puVar15) {
                      puVar15 = (ulong *)((long)puVar15 + 4);
                      puVar12 = (ulong *)((long)puVar12 + 4);
                    }
                  }
                  if (puVar15 < (ulong *)((long)puVar2 - 1U)) {
                    if ((short)*puVar12 == (short)*puVar15) {
                      puVar15 = (ulong *)((long)puVar15 + 2);
                      puVar12 = (ulong *)((long)puVar12 + 2);
                    }
                  }
                  if ((puVar15 < puVar2) && ((char)*puVar12 == (char)*puVar15)) {
                    puVar15 = (ulong *)((long)puVar15 + 1);
                  }
                  uVar16 = (long)puVar15 - (long)puVar13;
                }
                *(int *)(lVar26 + (*puVar22 * -0x30e4432340650000 >> (uVar11 & 0x3f)) * 4) =
                     (int)puVar22 - iVar28;
                if (puVar22 <= puVar32) {
                  puVar13 = (ulong *)param_2[3];
                  uVar21 = *puVar22;
                  puVar13[1] = puVar22[1];
                  *puVar13 = uVar21;
                  piVar18 = (int *)param_2[1];
                }
                *(undefined2 *)(piVar18 + 1) = 0;
                *piVar18 = 1;
                if (0xffff < uVar16 + 1) {
                  *(undefined4 *)(param_2 + 9) = 2;
                  *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar18 - *param_2) >> 3);
                }
                param_4 = (ulong *)((long)puVar22 + uVar16 + 4);
                *(short *)((long)piVar18 + 6) = (short)(uVar16 + 1);
                piVar18 = piVar18 + 2;
                param_2[1] = (long)piVar18;
              } while (((uVar17 != 0) && (param_4 <= puVar30)) &&
                      (uVar36 = uVar17, (int)*param_4 == *(int *)((long)param_4 - (ulong)uVar17)));
              puVar22 = (ulong *)((long)puVar22 + uVar16 + 5);
              puVar13 = param_4;
              uVar19 = uVar35;
            }
          }
        }
      } while (puVar22 < puVar30);
    }
  }
  else if (iVar33 == 7) {
    if (puVar22 < puVar30) {
      uVar11 = (ulong)(0x40 - *(int *)(param_1 + 0xc0));
      puVar31 = (ulong *)((long)puVar2 - 7);
      puVar32 = puVar2 + -4;
      do {
        uVar37 = *puVar13;
        uVar24 = uVar37 * -0x30e44323405a9d00 >> (uVar11 & 0x3f);
        uVar21 = *puVar22;
        uVar16 = uVar21 * -0x30e44323405a9d00 >> (uVar11 & 0x3f);
        uVar35 = *(uint *)(lVar26 + uVar24 * 4);
        uVar36 = *(uint *)(lVar26 + uVar16 * 4);
        uVar34 = (long)puVar13 - lVar29;
        iVar33 = (int)uVar34;
        *(int *)(lVar26 + uVar24 * 4) = iVar33;
        *(int *)(lVar26 + uVar16 * 4) = (int)puVar22 - iVar28;
        if (uVar19 == 0) {
LAB_1099bcf54:
          if (((uVar5 < uVar35) &&
              (puVar12 = (ulong *)(lVar29 + (ulong)uVar35), puVar15 = puVar13,
              (int)*puVar12 == (int)uVar37)) ||
             ((uVar5 < uVar36 &&
              (puVar12 = (ulong *)(lVar29 + (ulong)uVar36), puVar15 = puVar22,
              (int)*puVar12 == (int)uVar21)))) {
            uVar35 = (int)puVar15 - (int)puVar12;
            iVar27 = uVar35 + 2;
            uVar16 = 0;
            uVar17 = uVar19;
            if (puVar3 < puVar12 && param_4 < puVar15) {
              do {
                puVar22 = (ulong *)((long)puVar15 + -1);
                puVar13 = (ulong *)((long)puVar12 + -1);
                if ((*(char *)puVar22 != *(char *)puVar13) ||
                   (uVar16 = uVar16 + 1, puVar12 = puVar13, puVar15 = puVar22, puVar22 <= param_4))
                break;
              } while (puVar3 < puVar13);
            }
            goto LAB_1099bd00c;
          }
          lVar23 = uVar20 + ((ulong)((long)puVar13 - (long)param_4) >> 7);
          puVar22 = (ulong *)((long)puVar22 + lVar23);
          puVar13 = (ulong *)((long)puVar13 + lVar23);
        }
        else {
          piVar18 = (int *)((long)puVar13 + 2);
          piVar25 = (int *)((long)piVar18 - (ulong)uVar19);
          if (*piVar25 != *piVar18) goto LAB_1099bcf54;
          iVar27 = 0;
          uVar16 = (ulong)(*(char *)((long)puVar13 + 1) == *(char *)((long)piVar25 + -1));
          puVar12 = (ulong *)((long)piVar25 - uVar16);
          puVar15 = (ulong *)((long)piVar18 - uVar16);
          uVar35 = uVar19;
LAB_1099bd00c:
          uVar19 = uVar35;
          puVar13 = (ulong *)((long)puVar15 + uVar16 + 4);
          puVar22 = (ulong *)((long)puVar12 + uVar16 + 4);
          puVar14 = puVar13;
          if (puVar13 < puVar31) {
            if (*puVar22 == *puVar13) {
              lVar23 = 0;
              puVar14 = (ulong *)((long)puVar15 + uVar16 + 0xc);
              puVar22 = (ulong *)((long)puVar12 + uVar16 + 0xc);
              do {
                if (puVar31 <= puVar14) goto LAB_1099bd07c;
                uVar24 = *puVar22;
                uVar21 = *puVar14;
                lVar23 = lVar23 + 8;
                puVar14 = puVar14 + 1;
                puVar22 = puVar22 + 1;
              } while (uVar24 == uVar21);
              uVar21 = uVar21 ^ uVar24;
              uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
              uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
              uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
              uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
              uVar21 = lVar23 + ((ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3);
            }
            else {
              uVar21 = *puVar13 ^ *puVar22;
              uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
              uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
              uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
              uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
              uVar21 = (ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3;
            }
          }
          else {
LAB_1099bd07c:
            if (puVar14 < (ulong *)((long)puVar2 - 3U)) {
              if ((int)*puVar22 == (int)*puVar14) {
                puVar14 = (ulong *)((long)puVar14 + 4);
                puVar22 = (ulong *)((long)puVar22 + 4);
              }
            }
            if (puVar14 < (ulong *)((long)puVar2 - 1U)) {
              if ((short)*puVar22 == (short)*puVar14) {
                puVar14 = (ulong *)((long)puVar14 + 2);
                puVar22 = (ulong *)((long)puVar22 + 2);
              }
            }
            if ((puVar14 < puVar2) && ((char)*puVar22 == (char)*puVar14)) {
              puVar14 = (ulong *)((long)puVar14 + 1);
            }
            uVar21 = (long)puVar14 - (long)puVar13;
          }
          uVar24 = (long)puVar15 - (long)param_4;
          puVar13 = (ulong *)param_2[3];
          if (puVar32 < puVar15) {
            puVar22 = puVar13;
            puVar12 = param_4;
            if (param_4 <= puVar32) {
              puVar22 = (ulong *)((long)puVar13 + ((long)puVar32 - (long)param_4));
              uVar37 = *param_4;
              puVar13[1] = param_4[1];
              *puVar13 = uVar37;
              uVar37 = param_4[2];
              puVar13[3] = param_4[3];
              puVar13[2] = uVar37;
              puVar12 = puVar32;
              if (0x20 < (long)puVar32 - (long)param_4) {
                puVar13 = puVar13 + 4;
                puVar14 = param_4 + 6;
                do {
                  uVar37 = puVar14[-2];
                  puVar13[1] = puVar14[-1];
                  *puVar13 = uVar37;
                  uVar37 = *puVar14;
                  puVar13[3] = puVar14[1];
                  puVar13[2] = uVar37;
                  puVar13 = puVar13 + 4;
                  puVar14 = puVar14 + 4;
                } while (puVar13 < puVar22);
              }
            }
            if (puVar12 < puVar15) {
              do {
                puVar13 = (ulong *)((long)puVar12 + 1);
                *(char *)puVar22 = (char)*puVar12;
                puVar22 = (ulong *)((long)puVar22 + 1);
                puVar12 = puVar13;
              } while (puVar13 != puVar15);
            }
LAB_1099bd1cc:
            param_2[3] = param_2[3] + uVar24;
            piVar18 = (int *)param_2[1];
            if (0xffff < uVar24) {
              *(undefined4 *)(param_2 + 9) = 1;
              *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar18 - *param_2) >> 3);
            }
          }
          else {
            uVar37 = *param_4;
            puVar13[1] = param_4[1];
            *puVar13 = uVar37;
            lVar23 = param_2[3];
            if (0x10 < uVar24) {
              uVar37 = param_4[2];
              *(ulong *)(lVar23 + 0x18) = param_4[3];
              *(ulong *)(lVar23 + 0x10) = uVar37;
              uVar37 = param_4[4];
              *(ulong *)(lVar23 + 0x28) = param_4[5];
              *(ulong *)(lVar23 + 0x20) = uVar37;
              if (0x30 < (long)uVar24) {
                puVar13 = (ulong *)(lVar23 + 0x30);
                puVar22 = param_4 + 8;
                do {
                  uVar37 = puVar22[-2];
                  puVar13[1] = puVar22[-1];
                  *puVar13 = uVar37;
                  uVar37 = *puVar22;
                  puVar13[3] = puVar22[1];
                  puVar13[2] = uVar37;
                  puVar13 = puVar13 + 4;
                  puVar22 = puVar22 + 4;
                } while (puVar13 < (ulong *)(lVar23 + uVar24));
              }
              goto LAB_1099bd1cc;
            }
            param_2[3] = lVar23 + uVar24;
            piVar18 = (int *)param_2[1];
          }
          uVar37 = uVar16 + uVar21 + 1;
          *(short *)(piVar18 + 1) = (short)uVar24;
          *piVar18 = iVar27 + 1;
          if (0xffff < uVar37) {
            *(undefined4 *)(param_2 + 9) = 2;
            *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar18 - *param_2) >> 3);
          }
          *(short *)((long)piVar18 + 6) = (short)uVar37;
          piVar18 = piVar18 + 2;
          param_2[1] = (long)piVar18;
          param_4 = (ulong *)((long)puVar15 + uVar16 + uVar21 + 4);
          puVar22 = (ulong *)((long)param_4 + 1);
          puVar13 = param_4;
          if (param_4 <= puVar30) {
            *(int *)(lVar26 + ((ulong)(*(long *)(lVar1 + (uVar34 & 0xffffffff)) *
                                      -0x30e44323405a9d00) >> (uVar11 & 0x3f)) * 4) = iVar33 + 2;
            *(int *)(lVar26 + ((ulong)(*(long *)((long)param_4 - 2U) * -0x30e44323405a9d00) >>
                              (uVar11 & 0x3f)) * 4) = (int)(long *)((long)param_4 - 2U) - iVar28;
            if ((uVar17 != 0) &&
               (uVar35 = uVar17, (int)*param_4 == *(int *)((long)param_4 - (ulong)uVar17))) {
              do {
                uVar17 = uVar19;
                uVar19 = uVar35;
                puVar22 = param_4;
                puVar13 = (ulong *)((long)puVar22 + 4);
                puVar12 = (ulong *)((long)puVar13 + -(ulong)uVar19);
                puVar15 = puVar13;
                if (puVar13 < puVar31) {
                  if (*puVar12 == *puVar13) {
                    lVar23 = 0;
                    puVar15 = (ulong *)((long)puVar22 + 0xc);
                    puVar12 = (ulong *)((long)puVar22 + 0xc + -(ulong)uVar19);
                    do {
                      if (puVar31 <= puVar15) goto LAB_1099bd310;
                      uVar21 = *puVar12;
                      uVar16 = *puVar15;
                      lVar23 = lVar23 + 8;
                      puVar15 = puVar15 + 1;
                      puVar12 = puVar12 + 1;
                    } while (uVar21 == uVar16);
                    uVar16 = uVar16 ^ uVar21;
                    uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1
                    ;
                    uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2
                    ;
                    uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
                    uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar16 & 0xffff0000ffff) << 0x10;
                    uVar16 = lVar23 + ((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3);
                  }
                  else {
                    uVar16 = *puVar13 ^ *puVar12;
                    uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1
                    ;
                    uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2
                    ;
                    uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
                    uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar16 & 0xffff0000ffff) << 0x10;
                    uVar16 = (ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3;
                  }
                }
                else {
LAB_1099bd310:
                  if (puVar15 < (ulong *)((long)puVar2 - 3U)) {
                    if ((int)*puVar12 == (int)*puVar15) {
                      puVar15 = (ulong *)((long)puVar15 + 4);
                      puVar12 = (ulong *)((long)puVar12 + 4);
                    }
                  }
                  if (puVar15 < (ulong *)((long)puVar2 - 1U)) {
                    if ((short)*puVar12 == (short)*puVar15) {
                      puVar15 = (ulong *)((long)puVar15 + 2);
                      puVar12 = (ulong *)((long)puVar12 + 2);
                    }
                  }
                  if ((puVar15 < puVar2) && ((char)*puVar12 == (char)*puVar15)) {
                    puVar15 = (ulong *)((long)puVar15 + 1);
                  }
                  uVar16 = (long)puVar15 - (long)puVar13;
                }
                *(int *)(lVar26 + (*puVar22 * -0x30e44323405a9d00 >> (uVar11 & 0x3f)) * 4) =
                     (int)puVar22 - iVar28;
                if (puVar22 <= puVar32) {
                  puVar13 = (ulong *)param_2[3];
                  uVar21 = *puVar22;
                  puVar13[1] = puVar22[1];
                  *puVar13 = uVar21;
                  piVar18 = (int *)param_2[1];
                }
                *(undefined2 *)(piVar18 + 1) = 0;
                *piVar18 = 1;
                if (0xffff < uVar16 + 1) {
                  *(undefined4 *)(param_2 + 9) = 2;
                  *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar18 - *param_2) >> 3);
                }
                param_4 = (ulong *)((long)puVar22 + uVar16 + 4);
                *(short *)((long)piVar18 + 6) = (short)(uVar16 + 1);
                piVar18 = piVar18 + 2;
                param_2[1] = (long)piVar18;
              } while (((uVar17 != 0) && (param_4 <= puVar30)) &&
                      (uVar35 = uVar17, (int)*param_4 == *(int *)((long)param_4 - (ulong)uVar17)));
              puVar22 = (ulong *)((long)puVar22 + uVar16 + 5);
              puVar13 = param_4;
            }
          }
        }
      } while (puVar22 < puVar30);
    }
  }
  else if (puVar22 < puVar30) {
    uVar35 = 0x20 - *(int *)(param_1 + 0xc0);
    puVar31 = (ulong *)((long)puVar2 - 7);
    puVar32 = puVar2 + -4;
    do {
      uVar11 = *puVar13;
      uVar8 = (uint)((int)uVar11 * -0x61c8864f) >> (ulong)(uVar35 & 0x1f);
      uVar16 = *puVar22;
      uVar9 = (uint)((int)uVar16 * -0x61c8864f) >> (ulong)(uVar35 & 0x1f);
      uVar36 = *(uint *)(lVar26 + (ulong)uVar8 * 4);
      uVar6 = *(uint *)(lVar26 + (ulong)uVar9 * 4);
      uVar21 = (long)puVar13 - lVar29;
      iVar33 = (int)uVar21;
      *(int *)(lVar26 + (ulong)uVar8 * 4) = iVar33;
      *(int *)(lVar26 + (ulong)uVar9 * 4) = (int)puVar22 - iVar28;
      if (uVar19 == 0) {
LAB_1099be018:
        if (((uVar5 < uVar36) &&
            (puVar12 = (ulong *)(lVar29 + (ulong)uVar36), puVar15 = puVar13,
            (int)*puVar12 == (int)uVar11)) ||
           ((uVar5 < uVar6 &&
            (puVar12 = (ulong *)(lVar29 + (ulong)uVar6), puVar15 = puVar22,
            (int)*puVar12 == (int)uVar16)))) {
          uVar36 = (int)puVar15 - (int)puVar12;
          iVar27 = uVar36 + 2;
          uVar11 = 0;
          uVar17 = uVar19;
          if (puVar3 < puVar12 && param_4 < puVar15) {
            do {
              puVar22 = (ulong *)((long)puVar15 + -1);
              puVar13 = (ulong *)((long)puVar12 + -1);
              if ((*(char *)puVar22 != *(char *)puVar13) ||
                 (uVar11 = uVar11 + 1, puVar12 = puVar13, puVar15 = puVar22, puVar22 <= param_4))
              break;
            } while (puVar3 < puVar13);
          }
          goto LAB_1099be0d0;
        }
        lVar23 = uVar20 + ((ulong)((long)puVar13 - (long)param_4) >> 7);
        puVar22 = (ulong *)((long)puVar22 + lVar23);
        puVar13 = (ulong *)((long)puVar13 + lVar23);
      }
      else {
        piVar18 = (int *)((long)puVar13 + 2);
        piVar25 = (int *)((long)piVar18 - (ulong)uVar19);
        if (*piVar25 != *piVar18) goto LAB_1099be018;
        iVar27 = 0;
        uVar11 = (ulong)(*(char *)((long)puVar13 + 1) == *(char *)((long)piVar25 + -1));
        puVar12 = (ulong *)((long)piVar25 - uVar11);
        puVar15 = (ulong *)((long)piVar18 - uVar11);
        uVar36 = uVar19;
LAB_1099be0d0:
        puVar13 = (ulong *)((long)puVar15 + uVar11 + 4);
        puVar22 = (ulong *)((long)puVar12 + uVar11 + 4);
        puVar14 = puVar13;
        if (puVar13 < puVar31) {
          if (*puVar22 == *puVar13) {
            lVar23 = 0;
            puVar14 = (ulong *)((long)puVar15 + uVar11 + 0xc);
            puVar22 = (ulong *)((long)puVar12 + uVar11 + 0xc);
            do {
              if (puVar31 <= puVar14) goto LAB_1099be140;
              uVar24 = *puVar22;
              uVar16 = *puVar14;
              lVar23 = lVar23 + 8;
              puVar14 = puVar14 + 1;
              puVar22 = puVar22 + 1;
            } while (uVar24 == uVar16);
            uVar16 = uVar16 ^ uVar24;
            uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
            uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
            uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
            uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
            uVar16 = lVar23 + ((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3);
          }
          else {
            uVar16 = *puVar13 ^ *puVar22;
            uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
            uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
            uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
            uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
            uVar16 = (ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3;
          }
        }
        else {
LAB_1099be140:
          if (puVar14 < (ulong *)((long)puVar2 - 3U)) {
            if ((int)*puVar22 == (int)*puVar14) {
              puVar14 = (ulong *)((long)puVar14 + 4);
              puVar22 = (ulong *)((long)puVar22 + 4);
            }
          }
          if (puVar14 < (ulong *)((long)puVar2 - 1U)) {
            if ((short)*puVar22 == (short)*puVar14) {
              puVar14 = (ulong *)((long)puVar14 + 2);
              puVar22 = (ulong *)((long)puVar22 + 2);
            }
          }
          if ((puVar14 < puVar2) && ((char)*puVar22 == (char)*puVar14)) {
            puVar14 = (ulong *)((long)puVar14 + 1);
          }
          uVar16 = (long)puVar14 - (long)puVar13;
        }
        uVar24 = (long)puVar15 - (long)param_4;
        puVar13 = (ulong *)param_2[3];
        if (puVar32 < puVar15) {
          puVar22 = puVar13;
          puVar12 = param_4;
          if (param_4 <= puVar32) {
            puVar22 = (ulong *)((long)puVar13 + ((long)puVar32 - (long)param_4));
            uVar34 = *param_4;
            puVar13[1] = param_4[1];
            *puVar13 = uVar34;
            uVar34 = param_4[2];
            puVar13[3] = param_4[3];
            puVar13[2] = uVar34;
            puVar12 = puVar32;
            if (0x20 < (long)puVar32 - (long)param_4) {
              puVar13 = puVar13 + 4;
              puVar14 = param_4 + 6;
              do {
                uVar34 = puVar14[-2];
                puVar13[1] = puVar14[-1];
                *puVar13 = uVar34;
                uVar34 = *puVar14;
                puVar13[3] = puVar14[1];
                puVar13[2] = uVar34;
                puVar13 = puVar13 + 4;
                puVar14 = puVar14 + 4;
              } while (puVar13 < puVar22);
            }
          }
          if (puVar12 < puVar15) {
            do {
              puVar13 = (ulong *)((long)puVar12 + 1);
              *(char *)puVar22 = (char)*puVar12;
              puVar22 = (ulong *)((long)puVar22 + 1);
              puVar12 = puVar13;
            } while (puVar13 != puVar15);
          }
LAB_1099be290:
          param_2[3] = param_2[3] + uVar24;
          piVar18 = (int *)param_2[1];
          if (0xffff < uVar24) {
            *(undefined4 *)(param_2 + 9) = 1;
            *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar18 - *param_2) >> 3);
          }
        }
        else {
          uVar34 = *param_4;
          puVar13[1] = param_4[1];
          *puVar13 = uVar34;
          lVar23 = param_2[3];
          if (0x10 < uVar24) {
            uVar34 = param_4[2];
            *(ulong *)(lVar23 + 0x18) = param_4[3];
            *(ulong *)(lVar23 + 0x10) = uVar34;
            uVar34 = param_4[4];
            *(ulong *)(lVar23 + 0x28) = param_4[5];
            *(ulong *)(lVar23 + 0x20) = uVar34;
            if (0x30 < (long)uVar24) {
              puVar13 = (ulong *)(lVar23 + 0x30);
              puVar22 = param_4 + 8;
              do {
                uVar34 = puVar22[-2];
                puVar13[1] = puVar22[-1];
                *puVar13 = uVar34;
                uVar34 = *puVar22;
                puVar13[3] = puVar22[1];
                puVar13[2] = uVar34;
                puVar13 = puVar13 + 4;
                puVar22 = puVar22 + 4;
              } while (puVar13 < (ulong *)(lVar23 + uVar24));
            }
            goto LAB_1099be290;
          }
          param_2[3] = lVar23 + uVar24;
          piVar18 = (int *)param_2[1];
        }
        uVar34 = uVar11 + uVar16 + 1;
        *(short *)(piVar18 + 1) = (short)uVar24;
        *piVar18 = iVar27 + 1;
        if (0xffff < uVar34) {
          *(undefined4 *)(param_2 + 9) = 2;
          *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar18 - *param_2) >> 3);
        }
        *(short *)((long)piVar18 + 6) = (short)uVar34;
        piVar18 = piVar18 + 2;
        param_2[1] = (long)piVar18;
        param_4 = (ulong *)((long)puVar15 + uVar11 + uVar16 + 4);
        puVar22 = (ulong *)((long)param_4 + 1);
        puVar13 = param_4;
        uVar19 = uVar36;
        if (param_4 <= puVar30) {
          *(int *)(lVar26 + (ulong)((uint)(*(int *)(lVar1 + (uVar21 & 0xffffffff)) * -0x61c8864f) >>
                                   (ulong)(uVar35 & 0x1f)) * 4) = iVar33 + 2;
          *(int *)(lVar26 + (ulong)((uint)(*(int *)((long)param_4 - 2U) * -0x61c8864f) >>
                                   (ulong)(uVar35 & 0x1f)) * 4) =
               (int)(int *)((long)param_4 - 2U) - iVar28;
          if ((uVar17 != 0) &&
             (iVar33 = (int)*param_4, uVar6 = uVar17,
             iVar33 == *(int *)((long)param_4 - (ulong)uVar17))) {
            do {
              uVar17 = uVar36;
              uVar36 = uVar6;
              puVar22 = param_4;
              puVar13 = (ulong *)((long)puVar22 + 4);
              puVar12 = (ulong *)((long)puVar13 + -(ulong)uVar36);
              puVar15 = puVar13;
              if (puVar13 < puVar31) {
                if (*puVar12 == *puVar13) {
                  lVar23 = 0;
                  puVar15 = (ulong *)((long)puVar22 + 0xc);
                  puVar12 = (ulong *)((long)puVar22 + 0xc + -(ulong)uVar36);
                  do {
                    if (puVar31 <= puVar15) goto LAB_1099be3d4;
                    uVar16 = *puVar12;
                    uVar11 = *puVar15;
                    lVar23 = lVar23 + 8;
                    puVar15 = puVar15 + 1;
                    puVar12 = puVar12 + 1;
                  } while (uVar16 == uVar11);
                  uVar11 = uVar11 ^ uVar16;
                  uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
                  uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
                  uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
                  uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10
                  ;
                  uVar11 = lVar23 + ((ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3);
                }
                else {
                  uVar11 = *puVar13 ^ *puVar12;
                  uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
                  uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
                  uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
                  uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10
                  ;
                  uVar11 = (ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3;
                }
              }
              else {
LAB_1099be3d4:
                if (puVar15 < (ulong *)((long)puVar2 - 3U)) {
                  if ((int)*puVar12 == (int)*puVar15) {
                    puVar15 = (ulong *)((long)puVar15 + 4);
                    puVar12 = (ulong *)((long)puVar12 + 4);
                  }
                }
                if (puVar15 < (ulong *)((long)puVar2 - 1U)) {
                  if ((short)*puVar12 == (short)*puVar15) {
                    puVar15 = (ulong *)((long)puVar15 + 2);
                    puVar12 = (ulong *)((long)puVar12 + 2);
                  }
                }
                if ((puVar15 < puVar2) && ((char)*puVar12 == (char)*puVar15)) {
                  puVar15 = (ulong *)((long)puVar15 + 1);
                }
                uVar11 = (long)puVar15 - (long)puVar13;
              }
              *(int *)(lVar26 + (ulong)((uint)(iVar33 * -0x61c8864f) >> (ulong)(uVar35 & 0x1f)) * 4)
                   = (int)puVar22 - iVar28;
              if (puVar22 <= puVar32) {
                puVar13 = (ulong *)param_2[3];
                uVar16 = *puVar22;
                puVar13[1] = puVar22[1];
                *puVar13 = uVar16;
                piVar18 = (int *)param_2[1];
              }
              *(undefined2 *)(piVar18 + 1) = 0;
              *piVar18 = 1;
              if (0xffff < uVar11 + 1) {
                *(undefined4 *)(param_2 + 9) = 2;
                *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar18 - *param_2) >> 3);
              }
              param_4 = (ulong *)((long)puVar22 + uVar11 + 4);
              *(short *)((long)piVar18 + 6) = (short)(uVar11 + 1);
              piVar18 = piVar18 + 2;
              param_2[1] = (long)piVar18;
            } while (((uVar17 != 0) && (param_4 <= puVar30)) &&
                    (iVar33 = (int)*param_4, uVar6 = uVar17,
                    iVar33 == *(int *)((long)param_4 - (ulong)uVar17)));
            puVar22 = (ulong *)((long)puVar22 + uVar11 + 5);
            puVar13 = param_4;
            uVar19 = uVar36;
          }
        }
      }
    } while (puVar22 < puVar30);
  }
  if (uVar7 <= uVar10) {
    uVar7 = 0;
  }
  if (uVar4 <= uVar10) {
    uVar4 = uVar7;
  }
  uVar5 = uVar4;
  if (uVar19 != 0) {
    uVar5 = uVar19;
  }
  if (uVar17 != 0) {
    uVar4 = uVar17;
  }
  *param_3 = uVar5;
  param_3[1] = uVar4;
  return (long)puVar2 - (long)param_4;
}



/* Entry: 1099be548; end: 1099c1953;  */

long FUN_1099be548(long param_1,long *param_2,int *param_3,ulong *param_4,long param_5)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  char *pcVar5;
  ulong *puVar6;
  char *pcVar7;
  int *piVar8;
  ulong *puVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  int iVar18;
  int iVar19;
  int *piVar20;
  ulong uVar21;
  ulong *puVar22;
  ulong *puVar23;
  ulong uVar24;
  ulong *puVar25;
  ulong *puVar26;
  ulong uVar27;
  char *pcVar28;
  long lVar29;
  ulong uVar30;
  ulong uVar31;
  long lVar32;
  ulong *puVar33;
  int *piVar34;
  ulong *puVar35;
  ulong *puVar36;
  ulong uVar37;
  long lVar38;
  int iVar39;
  ulong *puVar40;
  int iVar41;
  long lVar42;
  int iVar43;
  int iVar44;
  
  iVar18 = *(int *)(param_1 + 200);
  lVar29 = *(long *)(param_1 + 0x30);
  lVar42 = *(long *)(param_1 + 8);
  uVar11 = *(uint *)(param_1 + 0x18);
  pcVar5 = (char *)(lVar42 + (ulong)uVar11);
  puVar6 = (ulong *)((long)param_4 + param_5);
  puVar22 = puVar6 + -1;
  iVar44 = *param_3;
  iVar39 = param_3[1];
  puVar23 = *(ulong **)(param_1 + 0xb0);
  uVar30 = puVar23[6];
  uVar12 = (uint)puVar23[3];
  puVar9 = (ulong *)*puVar23;
  uVar10 = puVar23[1];
  pcVar7 = (char *)(uVar10 + uVar12);
  uVar4 = uVar11 + ((int)uVar10 - (int)puVar9);
  puVar35 = param_4;
  if ((int)puVar9 + ((int)param_4 - (int)pcVar5) == (int)pcVar7) {
    puVar35 = (ulong *)((long)param_4 + 1);
  }
  lVar3 = lVar42 + 2;
  iVar41 = (int)lVar42;
  if (iVar18 == 5) {
    if (puVar35 < puVar22) {
      uVar13 = *(uint *)(param_1 + 0xcc);
      if (uVar13 < 2) {
        uVar13 = 1;
      }
      uVar27 = (ulong)(0x40 - *(int *)(param_1 + 0xc0));
      uVar17 = puVar23[0x18];
      puVar23 = puVar6 + -4;
      do {
        uVar24 = *puVar35;
        uVar37 = uVar24 * -0x30e4432345000000 >> (uVar27 & 0x3f);
        uVar14 = *(uint *)(lVar29 + uVar37 * 4);
        uVar31 = (ulong)uVar14;
        uVar21 = (long)puVar35 - lVar42;
        iVar18 = (int)uVar21;
        uVar2 = (iVar18 - iVar44) + 1;
        piVar34 = (int *)(uVar10 + (uVar2 - uVar4));
        if (uVar11 <= uVar2) {
          piVar34 = (int *)(lVar42 + (ulong)uVar2);
        }
        *(int *)(lVar29 + uVar37 * 4) = iVar18;
        if (((uVar11 - 1) - uVar2 < 3) ||
           (puVar40 = (ulong *)((long)puVar35 + 1), *piVar34 != *(int *)puVar40)) {
          puVar40 = puVar35;
          if (uVar14 <= uVar11) {
            uVar2 = *(uint *)(uVar30 + (uVar24 * -0x30e4432345000000 >>
                                       ((ulong)(0x40 - (int)uVar17) & 0x3f)) * 4);
            if ((uVar2 <= uVar12) || (piVar34 = (int *)(uVar10 + uVar2), *piVar34 != (int)*puVar35))
            goto LAB_1099bf9f0;
            piVar20 = (int *)((long)puVar35 + 4);
            FUN_1099c1954(piVar20,piVar34 + 1,puVar6,puVar9,pcVar5);
            piVar20 = piVar20 + 1;
            if (param_4 < puVar35) {
              pcVar28 = (char *)((uVar10 - 1) + (ulong)uVar2);
              do {
                puVar25 = (ulong *)((long)puVar35 + -1);
                puVar40 = puVar35;
                if ((*(char *)puVar25 != *pcVar28) ||
                   (piVar20 = (int *)((long)piVar20 + 1), puVar40 = puVar25, puVar25 <= param_4))
                break;
                bVar1 = pcVar7 < pcVar28;
                pcVar28 = pcVar28 + -1;
                puVar35 = puVar25;
              } while (bVar1);
            }
            uVar24 = (long)puVar40 - (long)param_4;
            puVar35 = (ulong *)param_2[3];
            if (puVar23 < puVar40) {
              puVar25 = puVar35;
              puVar26 = param_4;
              if (param_4 <= puVar23) {
                puVar25 = (ulong *)((long)puVar35 + ((long)puVar23 - (long)param_4));
                uVar31 = *param_4;
                puVar35[1] = param_4[1];
                *puVar35 = uVar31;
                uVar31 = param_4[2];
                puVar35[3] = param_4[3];
                puVar35[2] = uVar31;
                puVar26 = puVar23;
                if (0x20 < (long)puVar23 - (long)param_4) {
                  puVar35 = puVar35 + 4;
                  puVar33 = param_4 + 6;
                  do {
                    uVar31 = puVar33[-2];
                    puVar35[1] = puVar33[-1];
                    *puVar35 = uVar31;
                    uVar31 = *puVar33;
                    puVar35[3] = puVar33[1];
                    puVar35[2] = uVar31;
                    puVar35 = puVar35 + 4;
                    puVar33 = puVar33 + 4;
                  } while (puVar35 < puVar25);
                }
              }
              if (puVar26 < puVar40) {
                lVar38 = (long)puVar40 - (long)puVar26;
                do {
                  *(char *)puVar25 = (char)*puVar26;
                  lVar38 = lVar38 + -1;
                  puVar25 = (ulong *)((long)puVar25 + 1);
                  puVar26 = (ulong *)((long)puVar26 + 1);
                } while (lVar38 != 0);
              }
LAB_1099bffdc:
              param_2[3] = param_2[3] + uVar24;
              piVar34 = (int *)param_2[1];
              if (0xffff < uVar24) {
                *(undefined4 *)(param_2 + 9) = 1;
                *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar34 - *param_2) >> 3);
              }
            }
            else {
              uVar31 = *param_4;
              puVar35[1] = param_4[1];
              *puVar35 = uVar31;
              lVar38 = param_2[3];
              if (0x10 < uVar24) {
                uVar31 = param_4[2];
                *(ulong *)(lVar38 + 0x18) = param_4[3];
                *(ulong *)(lVar38 + 0x10) = uVar31;
                uVar31 = param_4[4];
                *(ulong *)(lVar38 + 0x28) = param_4[5];
                *(ulong *)(lVar38 + 0x20) = uVar31;
                if (0x30 < (long)uVar24) {
                  puVar35 = (ulong *)(lVar38 + 0x30);
                  puVar25 = param_4 + 8;
                  do {
                    uVar31 = puVar25[-2];
                    puVar35[1] = puVar25[-1];
                    *puVar35 = uVar31;
                    uVar31 = *puVar25;
                    puVar35[3] = puVar25[1];
                    puVar35[2] = uVar31;
                    puVar35 = puVar35 + 4;
                    puVar25 = puVar25 + 4;
                  } while (puVar35 < (ulong *)(lVar38 + uVar24));
                }
                goto LAB_1099bffdc;
              }
              param_2[3] = lVar38 + uVar24;
              piVar34 = (int *)param_2[1];
            }
            iVar43 = (iVar18 - uVar4) - uVar2;
            uVar31 = (long)piVar20 - 3;
            *(short *)(piVar34 + 1) = (short)uVar24;
            *piVar34 = iVar43 + 3;
            iVar39 = iVar44;
            if (uVar31 >> 0x10 == 0) goto LAB_1099bfbc0;
            goto LAB_1099bfba8;
          }
          piVar8 = (int *)(lVar42 + uVar31);
          if (*piVar8 == (int)*puVar35) {
            puVar25 = (ulong *)((long)puVar35 + 4);
            puVar26 = (ulong *)(piVar8 + 1);
            puVar33 = puVar25;
            if (puVar25 < (ulong *)((long)puVar6 - 7U)) {
              if (*puVar26 == *puVar25) {
                lVar38 = 0;
                puVar33 = (ulong *)((long)puVar35 + 0xc);
                puVar26 = (ulong *)(lVar42 + 0xc + uVar31);
                do {
                  if ((ulong *)((long)puVar6 - 7U) <= puVar33) goto LAB_1099bfa68;
                  uVar37 = *puVar26;
                  uVar24 = *puVar33;
                  lVar38 = lVar38 + 8;
                  puVar33 = puVar33 + 1;
                  puVar26 = puVar26 + 1;
                } while (uVar37 == uVar24);
                uVar24 = uVar24 ^ uVar37;
                uVar24 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
                uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
                uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
                uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
                uVar24 = lVar38 + ((ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3);
              }
              else {
                uVar24 = *puVar25 ^ *puVar26;
                uVar24 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
                uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
                uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
                uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
                uVar24 = (ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3;
              }
            }
            else {
LAB_1099bfa68:
              if (puVar33 < (ulong *)((long)puVar6 - 3U)) {
                if ((int)*puVar26 == (int)*puVar33) {
                  puVar33 = (ulong *)((long)puVar33 + 4);
                  puVar26 = (ulong *)((long)puVar26 + 4);
                }
              }
              if (puVar33 < (ulong *)((long)puVar6 - 1U)) {
                if ((short)*puVar26 == (short)*puVar33) {
                  puVar33 = (ulong *)((long)puVar33 + 2);
                  puVar26 = (ulong *)((long)puVar26 + 2);
                }
              }
              if ((puVar33 < puVar6) && ((char)*puVar26 == (char)*puVar33)) {
                puVar33 = (ulong *)((long)puVar33 + 1);
              }
              uVar24 = (long)puVar33 - (long)puVar25;
            }
            piVar20 = (int *)(uVar24 + 4);
            if (param_4 < puVar35) {
              pcVar28 = (char *)(lVar42 + -1 + uVar31);
              do {
                puVar25 = (ulong *)((long)puVar40 + -1);
                if ((*(char *)puVar25 != *pcVar28) ||
                   (piVar20 = (int *)((long)piVar20 + 1), puVar40 = puVar25, puVar25 <= param_4))
                break;
                bVar1 = pcVar5 < pcVar28;
                pcVar28 = pcVar28 + -1;
              } while (bVar1);
            }
            uVar24 = (long)puVar40 - (long)param_4;
            puVar25 = (ulong *)param_2[3];
            if (puVar23 < puVar40) {
              puVar26 = puVar25;
              puVar33 = param_4;
              if (param_4 <= puVar23) {
                puVar26 = (ulong *)((long)puVar25 + ((long)puVar23 - (long)param_4));
                uVar31 = *param_4;
                puVar25[1] = param_4[1];
                *puVar25 = uVar31;
                uVar31 = param_4[2];
                puVar25[3] = param_4[3];
                puVar25[2] = uVar31;
                puVar33 = puVar23;
                if (0x20 < (long)puVar23 - (long)param_4) {
                  puVar25 = puVar25 + 4;
                  puVar36 = param_4 + 6;
                  do {
                    uVar31 = puVar36[-2];
                    puVar25[1] = puVar36[-1];
                    *puVar25 = uVar31;
                    uVar31 = *puVar36;
                    puVar25[3] = puVar36[1];
                    puVar25[2] = uVar31;
                    puVar25 = puVar25 + 4;
                    puVar36 = puVar36 + 4;
                  } while (puVar25 < puVar26);
                }
              }
              if (puVar33 < puVar40) {
                lVar38 = (long)puVar40 - (long)puVar33;
                do {
                  *(char *)puVar26 = (char)*puVar33;
                  lVar38 = lVar38 + -1;
                  puVar26 = (ulong *)((long)puVar26 + 1);
                  puVar33 = (ulong *)((long)puVar33 + 1);
                } while (lVar38 != 0);
              }
LAB_1099bfe88:
              param_2[3] = param_2[3] + uVar24;
              piVar34 = (int *)param_2[1];
              if (0xffff < uVar24) {
                *(undefined4 *)(param_2 + 9) = 1;
                *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar34 - *param_2) >> 3);
              }
            }
            else {
              uVar31 = *param_4;
              puVar25[1] = param_4[1];
              *puVar25 = uVar31;
              lVar38 = param_2[3];
              if (0x10 < uVar24) {
                uVar31 = param_4[2];
                *(ulong *)(lVar38 + 0x18) = param_4[3];
                *(ulong *)(lVar38 + 0x10) = uVar31;
                uVar31 = param_4[4];
                *(ulong *)(lVar38 + 0x28) = param_4[5];
                *(ulong *)(lVar38 + 0x20) = uVar31;
                if (0x30 < (long)uVar24) {
                  puVar25 = (ulong *)(lVar38 + 0x30);
                  puVar26 = param_4 + 8;
                  do {
                    uVar31 = puVar26[-2];
                    puVar25[1] = puVar26[-1];
                    *puVar25 = uVar31;
                    uVar31 = *puVar26;
                    puVar25[3] = puVar26[1];
                    puVar25[2] = uVar31;
                    puVar25 = puVar25 + 4;
                    puVar26 = puVar26 + 4;
                  } while (puVar25 < (ulong *)(lVar38 + uVar24));
                }
                goto LAB_1099bfe88;
              }
              param_2[3] = lVar38 + uVar24;
              piVar34 = (int *)param_2[1];
            }
            iVar43 = (int)puVar35 - (int)piVar8;
            uVar31 = (long)piVar20 - 3;
            *(short *)(piVar34 + 1) = (short)uVar24;
            *piVar34 = iVar43 + 3;
            iVar39 = iVar44;
            if (0xffff < uVar31) goto LAB_1099bfba8;
            goto LAB_1099bfbc0;
          }
LAB_1099bf9f0:
          puVar35 = (ulong *)((long)puVar35 + (ulong)uVar13 + ((long)puVar35 - (long)param_4 >> 8));
        }
        else {
          puVar25 = puVar9;
          if (uVar11 <= uVar2) {
            puVar25 = puVar6;
          }
          lVar38 = (long)puVar35 + 5;
          FUN_1099c1954(lVar38,piVar34 + 1,puVar6,puVar25,pcVar5);
          uVar24 = (long)puVar40 - (long)param_4;
          puVar25 = (ulong *)param_2[3];
          if (puVar23 < puVar40) {
            puVar26 = puVar25;
            puVar33 = param_4;
            if (param_4 <= puVar23) {
              puVar26 = (ulong *)((long)puVar25 + ((long)puVar23 - (long)param_4));
              uVar31 = *param_4;
              puVar25[1] = param_4[1];
              *puVar25 = uVar31;
              uVar31 = param_4[2];
              puVar25[3] = param_4[3];
              puVar25[2] = uVar31;
              puVar33 = puVar23;
              if (0x20 < (long)puVar23 - (long)param_4) {
                puVar25 = puVar25 + 4;
                puVar36 = param_4 + 6;
                do {
                  uVar31 = puVar36[-2];
                  puVar25[1] = puVar36[-1];
                  *puVar25 = uVar31;
                  uVar31 = *puVar36;
                  puVar25[3] = puVar36[1];
                  puVar25[2] = uVar31;
                  puVar25 = puVar25 + 4;
                  puVar36 = puVar36 + 4;
                } while (puVar25 < puVar26);
              }
            }
            if (puVar33 < puVar40) {
              puVar33 = (ulong *)((long)puVar33 + -1);
              do {
                puVar33 = (ulong *)((long)puVar33 + 1);
                *(undefined1 *)puVar26 = *(undefined1 *)puVar33;
                puVar26 = (ulong *)((long)puVar26 + 1);
              } while (puVar33 != puVar35);
            }
LAB_1099bfb4c:
            param_2[3] = param_2[3] + uVar24;
            piVar34 = (int *)param_2[1];
            if (0xffff < uVar24) {
              *(undefined4 *)(param_2 + 9) = 1;
              *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar34 - *param_2) >> 3);
            }
          }
          else {
            uVar31 = *param_4;
            puVar25[1] = param_4[1];
            *puVar25 = uVar31;
            lVar32 = param_2[3];
            if (0x10 < uVar24) {
              uVar31 = param_4[2];
              *(ulong *)(lVar32 + 0x18) = param_4[3];
              *(ulong *)(lVar32 + 0x10) = uVar31;
              uVar31 = param_4[4];
              *(ulong *)(lVar32 + 0x28) = param_4[5];
              *(ulong *)(lVar32 + 0x20) = uVar31;
              if (0x30 < (long)uVar24) {
                puVar35 = (ulong *)(lVar32 + 0x30);
                puVar25 = param_4 + 8;
                do {
                  uVar31 = puVar25[-2];
                  puVar35[1] = puVar25[-1];
                  *puVar35 = uVar31;
                  uVar31 = *puVar25;
                  puVar35[3] = puVar25[1];
                  puVar35[2] = uVar31;
                  puVar35 = puVar35 + 4;
                  puVar25 = puVar25 + 4;
                } while (puVar35 < (ulong *)(lVar32 + uVar24));
              }
              goto LAB_1099bfb4c;
            }
            param_2[3] = lVar32 + uVar24;
            piVar34 = (int *)param_2[1];
          }
          piVar20 = (int *)(lVar38 + 4);
          uVar31 = lVar38 + 1;
          *(short *)(piVar34 + 1) = (short)uVar24;
          *piVar34 = 1;
          iVar43 = iVar44;
          if (uVar31 >> 0x10 != 0) {
LAB_1099bfba8:
            *(undefined4 *)(param_2 + 9) = 2;
            *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar34 - *param_2) >> 3);
          }
LAB_1099bfbc0:
          *(short *)((long)piVar34 + 6) = (short)uVar31;
          piVar34 = piVar34 + 2;
          param_2[1] = (long)piVar34;
          puVar35 = (ulong *)((long)puVar40 + (long)piVar20);
          param_4 = puVar35;
          iVar44 = iVar43;
          if (puVar35 <= puVar22) {
            *(int *)(lVar29 + ((ulong)(*(long *)(lVar3 + (uVar21 & 0xffffffff)) *
                                      -0x30e4432345000000) >> (uVar27 & 0x3f)) * 4) = iVar18 + 2;
            *(int *)(lVar29 + ((ulong)(*(long *)((long)puVar35 - 2U) * -0x30e4432345000000) >>
                              (uVar27 & 0x3f)) * 4) = (int)(long *)((long)puVar35 - 2U) - iVar41;
            do {
              iVar19 = iVar43;
              iVar43 = iVar39;
              iVar18 = (int)puVar35 - iVar41;
              uVar2 = iVar18 - iVar43;
              lVar38 = uVar10 - uVar4;
              if (uVar11 <= uVar2) {
                lVar38 = lVar42;
              }
              param_4 = puVar35;
              iVar44 = iVar19;
              iVar39 = iVar43;
              if (((uVar11 - 1) - uVar2 < 3) || (*(int *)(lVar38 + (ulong)uVar2) != (int)*puVar35))
              break;
              puVar40 = puVar9;
              if (uVar11 <= uVar2) {
                puVar40 = puVar6;
              }
              piVar20 = (int *)((long)puVar35 + 4);
              FUN_1099c1954(piVar20,(int *)(lVar38 + (ulong)uVar2) + 1,puVar6,puVar40,pcVar5);
              if (puVar35 <= puVar23) {
                puVar40 = (ulong *)param_2[3];
                uVar21 = *puVar35;
                puVar40[1] = puVar35[1];
                *puVar40 = uVar21;
                piVar34 = (int *)param_2[1];
              }
              *(undefined2 *)(piVar34 + 1) = 0;
              *piVar34 = 1;
              if (0xffff < (long)piVar20 + 1U) {
                *(undefined4 *)(param_2 + 9) = 2;
                *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar34 - *param_2) >> 3);
              }
              *(short *)((long)piVar34 + 6) = (short)((long)piVar20 + 1U);
              piVar34 = piVar34 + 2;
              *(int *)(lVar29 + (*puVar35 * -0x30e4432345000000 >> (uVar27 & 0x3f)) * 4) = iVar18;
              puVar35 = (ulong *)((long)puVar35 + (long)piVar20 + 4);
              param_2[1] = (long)piVar34;
              param_4 = puVar35;
              iVar44 = iVar43;
              iVar39 = iVar19;
            } while (puVar35 <= puVar22);
          }
        }
      } while (puVar35 < puVar22);
    }
  }
  else if (iVar18 == 6) {
    if (puVar35 < puVar22) {
      uVar13 = *(uint *)(param_1 + 0xcc);
      if (uVar13 < 2) {
        uVar13 = 1;
      }
      uVar27 = (ulong)(0x40 - *(int *)(param_1 + 0xc0));
      uVar17 = puVar23[0x18];
      puVar23 = puVar6 + -4;
      do {
        uVar24 = *puVar35;
        uVar37 = uVar24 * -0x30e4432340650000 >> (uVar27 & 0x3f);
        uVar14 = *(uint *)(lVar29 + uVar37 * 4);
        uVar31 = (ulong)uVar14;
        uVar21 = (long)puVar35 - lVar42;
        iVar18 = (int)uVar21;
        uVar2 = (iVar18 - iVar44) + 1;
        piVar34 = (int *)(uVar10 + (uVar2 - uVar4));
        if (uVar11 <= uVar2) {
          piVar34 = (int *)(lVar42 + (ulong)uVar2);
        }
        *(int *)(lVar29 + uVar37 * 4) = iVar18;
        if (((uVar11 - 1) - uVar2 < 3) ||
           (puVar40 = (ulong *)((long)puVar35 + 1), *piVar34 != *(int *)puVar40)) {
          puVar40 = puVar35;
          if (uVar14 <= uVar11) {
            uVar2 = *(uint *)(uVar30 + (uVar24 * -0x30e4432340650000 >>
                                       ((ulong)(0x40 - (int)uVar17) & 0x3f)) * 4);
            if ((uVar2 <= uVar12) || (piVar34 = (int *)(uVar10 + uVar2), *piVar34 != (int)*puVar35))
            goto LAB_1099bf134;
            piVar20 = (int *)((long)puVar35 + 4);
            FUN_1099c1954(piVar20,piVar34 + 1,puVar6,puVar9,pcVar5);
            piVar20 = piVar20 + 1;
            if (param_4 < puVar35) {
              pcVar28 = (char *)((uVar10 - 1) + (ulong)uVar2);
              do {
                puVar25 = (ulong *)((long)puVar35 + -1);
                puVar40 = puVar35;
                if ((*(char *)puVar25 != *pcVar28) ||
                   (piVar20 = (int *)((long)piVar20 + 1), puVar40 = puVar25, puVar25 <= param_4))
                break;
                bVar1 = pcVar7 < pcVar28;
                pcVar28 = pcVar28 + -1;
                puVar35 = puVar25;
              } while (bVar1);
            }
            uVar24 = (long)puVar40 - (long)param_4;
            puVar35 = (ulong *)param_2[3];
            if (puVar23 < puVar40) {
              puVar25 = puVar35;
              puVar26 = param_4;
              if (param_4 <= puVar23) {
                puVar25 = (ulong *)((long)puVar35 + ((long)puVar23 - (long)param_4));
                uVar31 = *param_4;
                puVar35[1] = param_4[1];
                *puVar35 = uVar31;
                uVar31 = param_4[2];
                puVar35[3] = param_4[3];
                puVar35[2] = uVar31;
                puVar26 = puVar23;
                if (0x20 < (long)puVar23 - (long)param_4) {
                  puVar35 = puVar35 + 4;
                  puVar33 = param_4 + 6;
                  do {
                    uVar31 = puVar33[-2];
                    puVar35[1] = puVar33[-1];
                    *puVar35 = uVar31;
                    uVar31 = *puVar33;
                    puVar35[3] = puVar33[1];
                    puVar35[2] = uVar31;
                    puVar35 = puVar35 + 4;
                    puVar33 = puVar33 + 4;
                  } while (puVar35 < puVar25);
                }
              }
              if (puVar26 < puVar40) {
                lVar38 = (long)puVar40 - (long)puVar26;
                do {
                  *(char *)puVar25 = (char)*puVar26;
                  lVar38 = lVar38 + -1;
                  puVar25 = (ulong *)((long)puVar25 + 1);
                  puVar26 = (ulong *)((long)puVar26 + 1);
                } while (lVar38 != 0);
              }
LAB_1099bf718:
              param_2[3] = param_2[3] + uVar24;
              piVar34 = (int *)param_2[1];
              if (0xffff < uVar24) {
                *(undefined4 *)(param_2 + 9) = 1;
                *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar34 - *param_2) >> 3);
              }
            }
            else {
              uVar31 = *param_4;
              puVar35[1] = param_4[1];
              *puVar35 = uVar31;
              lVar38 = param_2[3];
              if (0x10 < uVar24) {
                uVar31 = param_4[2];
                *(ulong *)(lVar38 + 0x18) = param_4[3];
                *(ulong *)(lVar38 + 0x10) = uVar31;
                uVar31 = param_4[4];
                *(ulong *)(lVar38 + 0x28) = param_4[5];
                *(ulong *)(lVar38 + 0x20) = uVar31;
                if (0x30 < (long)uVar24) {
                  puVar35 = (ulong *)(lVar38 + 0x30);
                  puVar25 = param_4 + 8;
                  do {
                    uVar31 = puVar25[-2];
                    puVar35[1] = puVar25[-1];
                    *puVar35 = uVar31;
                    uVar31 = *puVar25;
                    puVar35[3] = puVar25[1];
                    puVar35[2] = uVar31;
                    puVar35 = puVar35 + 4;
                    puVar25 = puVar25 + 4;
                  } while (puVar35 < (ulong *)(lVar38 + uVar24));
                }
                goto LAB_1099bf718;
              }
              param_2[3] = lVar38 + uVar24;
              piVar34 = (int *)param_2[1];
            }
            iVar43 = (iVar18 - uVar4) - uVar2;
            uVar31 = (long)piVar20 - 3;
            *(short *)(piVar34 + 1) = (short)uVar24;
            *piVar34 = iVar43 + 3;
            iVar39 = iVar44;
            if (uVar31 >> 0x10 == 0) goto LAB_1099bf2fc;
            goto LAB_1099bf2e4;
          }
          piVar8 = (int *)(lVar42 + uVar31);
          if (*piVar8 == (int)*puVar35) {
            puVar25 = (ulong *)((long)puVar35 + 4);
            puVar26 = (ulong *)(piVar8 + 1);
            puVar33 = puVar25;
            if (puVar25 < (ulong *)((long)puVar6 - 7U)) {
              if (*puVar26 == *puVar25) {
                lVar38 = 0;
                puVar33 = (ulong *)((long)puVar35 + 0xc);
                puVar26 = (ulong *)(lVar42 + 0xc + uVar31);
                do {
                  if ((ulong *)((long)puVar6 - 7U) <= puVar33) goto LAB_1099bf1a8;
                  uVar37 = *puVar26;
                  uVar24 = *puVar33;
                  lVar38 = lVar38 + 8;
                  puVar33 = puVar33 + 1;
                  puVar26 = puVar26 + 1;
                } while (uVar37 == uVar24);
                uVar24 = uVar24 ^ uVar37;
                uVar24 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
                uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
                uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
                uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
                uVar24 = lVar38 + ((ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3);
              }
              else {
                uVar24 = *puVar25 ^ *puVar26;
                uVar24 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
                uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
                uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
                uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
                uVar24 = (ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3;
              }
            }
            else {
LAB_1099bf1a8:
              if (puVar33 < (ulong *)((long)puVar6 - 3U)) {
                if ((int)*puVar26 == (int)*puVar33) {
                  puVar33 = (ulong *)((long)puVar33 + 4);
                  puVar26 = (ulong *)((long)puVar26 + 4);
                }
              }
              if (puVar33 < (ulong *)((long)puVar6 - 1U)) {
                if ((short)*puVar26 == (short)*puVar33) {
                  puVar33 = (ulong *)((long)puVar33 + 2);
                  puVar26 = (ulong *)((long)puVar26 + 2);
                }
              }
              if ((puVar33 < puVar6) && ((char)*puVar26 == (char)*puVar33)) {
                puVar33 = (ulong *)((long)puVar33 + 1);
              }
              uVar24 = (long)puVar33 - (long)puVar25;
            }
            piVar20 = (int *)(uVar24 + 4);
            if (param_4 < puVar35) {
              pcVar28 = (char *)(lVar42 + -1 + uVar31);
              do {
                puVar25 = (ulong *)((long)puVar40 + -1);
                if ((*(char *)puVar25 != *pcVar28) ||
                   (piVar20 = (int *)((long)piVar20 + 1), puVar40 = puVar25, puVar25 <= param_4))
                break;
                bVar1 = pcVar5 < pcVar28;
                pcVar28 = pcVar28 + -1;
              } while (bVar1);
            }
            uVar24 = (long)puVar40 - (long)param_4;
            puVar25 = (ulong *)param_2[3];
            if (puVar23 < puVar40) {
              puVar26 = puVar25;
              puVar33 = param_4;
              if (param_4 <= puVar23) {
                puVar26 = (ulong *)((long)puVar25 + ((long)puVar23 - (long)param_4));
                uVar31 = *param_4;
                puVar25[1] = param_4[1];
                *puVar25 = uVar31;
                uVar31 = param_4[2];
                puVar25[3] = param_4[3];
                puVar25[2] = uVar31;
                puVar33 = puVar23;
                if (0x20 < (long)puVar23 - (long)param_4) {
                  puVar25 = puVar25 + 4;
                  puVar36 = param_4 + 6;
                  do {
                    uVar31 = puVar36[-2];
                    puVar25[1] = puVar36[-1];
                    *puVar25 = uVar31;
                    uVar31 = *puVar36;
                    puVar25[3] = puVar36[1];
                    puVar25[2] = uVar31;
                    puVar25 = puVar25 + 4;
                    puVar36 = puVar36 + 4;
                  } while (puVar25 < puVar26);
                }
              }
              if (puVar33 < puVar40) {
                lVar38 = (long)puVar40 - (long)puVar33;
                do {
                  *(char *)puVar26 = (char)*puVar33;
                  lVar38 = lVar38 + -1;
                  puVar26 = (ulong *)((long)puVar26 + 1);
                  puVar33 = (ulong *)((long)puVar33 + 1);
                } while (lVar38 != 0);
              }
LAB_1099bf5c4:
              param_2[3] = param_2[3] + uVar24;
              piVar34 = (int *)param_2[1];
              if (0xffff < uVar24) {
                *(undefined4 *)(param_2 + 9) = 1;
                *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar34 - *param_2) >> 3);
              }
            }
            else {
              uVar31 = *param_4;
              puVar25[1] = param_4[1];
              *puVar25 = uVar31;
              lVar38 = param_2[3];
              if (0x10 < uVar24) {
                uVar31 = param_4[2];
                *(ulong *)(lVar38 + 0x18) = param_4[3];
                *(ulong *)(lVar38 + 0x10) = uVar31;
                uVar31 = param_4[4];
                *(ulong *)(lVar38 + 0x28) = param_4[5];
                *(ulong *)(lVar38 + 0x20) = uVar31;
                if (0x30 < (long)uVar24) {
                  puVar25 = (ulong *)(lVar38 + 0x30);
                  puVar26 = param_4 + 8;
                  do {
                    uVar31 = puVar26[-2];
                    puVar25[1] = puVar26[-1];
                    *puVar25 = uVar31;
                    uVar31 = *puVar26;
                    puVar25[3] = puVar26[1];
                    puVar25[2] = uVar31;
                    puVar25 = puVar25 + 4;
                    puVar26 = puVar26 + 4;
                  } while (puVar25 < (ulong *)(lVar38 + uVar24));
                }
                goto LAB_1099bf5c4;
              }
              param_2[3] = lVar38 + uVar24;
              piVar34 = (int *)param_2[1];
            }
            iVar43 = (int)puVar35 - (int)piVar8;
            uVar31 = (long)piVar20 - 3;
            *(short *)(piVar34 + 1) = (short)uVar24;
            *piVar34 = iVar43 + 3;
            iVar39 = iVar44;
            if (0xffff < uVar31) goto LAB_1099bf2e4;
            goto LAB_1099bf2fc;
          }
LAB_1099bf134:
          puVar35 = (ulong *)((long)puVar35 + (ulong)uVar13 + ((long)puVar35 - (long)param_4 >> 8));
        }
        else {
          puVar25 = puVar9;
          if (uVar11 <= uVar2) {
            puVar25 = puVar6;
          }
          lVar38 = (long)puVar35 + 5;
          FUN_1099c1954(lVar38,piVar34 + 1,puVar6,puVar25,pcVar5);
          uVar24 = (long)puVar40 - (long)param_4;
          puVar25 = (ulong *)param_2[3];
          if (puVar23 < puVar40) {
            puVar26 = puVar25;
            puVar33 = param_4;
            if (param_4 <= puVar23) {
              puVar26 = (ulong *)((long)puVar25 + ((long)puVar23 - (long)param_4));
              uVar31 = *param_4;
              puVar25[1] = param_4[1];
              *puVar25 = uVar31;
              uVar31 = param_4[2];
              puVar25[3] = param_4[3];
              puVar25[2] = uVar31;
              puVar33 = puVar23;
              if (0x20 < (long)puVar23 - (long)param_4) {
                puVar25 = puVar25 + 4;
                puVar36 = param_4 + 6;
                do {
                  uVar31 = puVar36[-2];
                  puVar25[1] = puVar36[-1];
                  *puVar25 = uVar31;
                  uVar31 = *puVar36;
                  puVar25[3] = puVar36[1];
                  puVar25[2] = uVar31;
                  puVar25 = puVar25 + 4;
                  puVar36 = puVar36 + 4;
                } while (puVar25 < puVar26);
              }
            }
            if (puVar33 < puVar40) {
              puVar33 = (ulong *)((long)puVar33 + -1);
              do {
                puVar33 = (ulong *)((long)puVar33 + 1);
                *(undefined1 *)puVar26 = *(undefined1 *)puVar33;
                puVar26 = (ulong *)((long)puVar26 + 1);
              } while (puVar33 != puVar35);
            }
LAB_1099bf288:
            param_2[3] = param_2[3] + uVar24;
            piVar34 = (int *)param_2[1];
            if (0xffff < uVar24) {
              *(undefined4 *)(param_2 + 9) = 1;
              *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar34 - *param_2) >> 3);
            }
          }
          else {
            uVar31 = *param_4;
            puVar25[1] = param_4[1];
            *puVar25 = uVar31;
            lVar32 = param_2[3];
            if (0x10 < uVar24) {
              uVar31 = param_4[2];
              *(ulong *)(lVar32 + 0x18) = param_4[3];
              *(ulong *)(lVar32 + 0x10) = uVar31;
              uVar31 = param_4[4];
              *(ulong *)(lVar32 + 0x28) = param_4[5];
              *(ulong *)(lVar32 + 0x20) = uVar31;
              if (0x30 < (long)uVar24) {
                puVar35 = (ulong *)(lVar32 + 0x30);
                puVar25 = param_4 + 8;
                do {
                  uVar31 = puVar25[-2];
                  puVar35[1] = puVar25[-1];
                  *puVar35 = uVar31;
                  uVar31 = *puVar25;
                  puVar35[3] = puVar25[1];
                  puVar35[2] = uVar31;
                  puVar35 = puVar35 + 4;
                  puVar25 = puVar25 + 4;
                } while (puVar35 < (ulong *)(lVar32 + uVar24));
              }
              goto LAB_1099bf288;
            }
            param_2[3] = lVar32 + uVar24;
            piVar34 = (int *)param_2[1];
          }
          piVar20 = (int *)(lVar38 + 4);
          uVar31 = lVar38 + 1;
          *(short *)(piVar34 + 1) = (short)uVar24;
          *piVar34 = 1;
          iVar43 = iVar44;
          if (uVar31 >> 0x10 != 0) {
LAB_1099bf2e4:
            *(undefined4 *)(param_2 + 9) = 2;
            *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar34 - *param_2) >> 3);
          }
LAB_1099bf2fc:
          *(short *)((long)piVar34 + 6) = (short)uVar31;
          piVar34 = piVar34 + 2;
          param_2[1] = (long)piVar34;
          puVar35 = (ulong *)((long)puVar40 + (long)piVar20);
          param_4 = puVar35;
          iVar44 = iVar43;
          if (puVar35 <= puVar22) {
            *(int *)(lVar29 + ((ulong)(*(long *)(lVar3 + (uVar21 & 0xffffffff)) *
                                      -0x30e4432340650000) >> (uVar27 & 0x3f)) * 4) = iVar18 + 2;
            *(int *)(lVar29 + ((ulong)(*(long *)((long)puVar35 - 2U) * -0x30e4432340650000) >>
                              (uVar27 & 0x3f)) * 4) = (int)(long *)((long)puVar35 - 2U) - iVar41;
            do {
              iVar19 = iVar43;
              iVar43 = iVar39;
              iVar18 = (int)puVar35 - iVar41;
              uVar2 = iVar18 - iVar43;
              lVar38 = uVar10 - uVar4;
              if (uVar11 <= uVar2) {
                lVar38 = lVar42;
              }
              param_4 = puVar35;
              iVar44 = iVar19;
              iVar39 = iVar43;
              if (((uVar11 - 1) - uVar2 < 3) || (*(int *)(lVar38 + (ulong)uVar2) != (int)*puVar35))
              break;
              puVar40 = puVar9;
              if (uVar11 <= uVar2) {
                puVar40 = puVar6;
              }
              piVar20 = (int *)((long)puVar35 + 4);
              FUN_1099c1954(piVar20,(int *)(lVar38 + (ulong)uVar2) + 1,puVar6,puVar40,pcVar5);
              if (puVar35 <= puVar23) {
                puVar40 = (ulong *)param_2[3];
                uVar21 = *puVar35;
                puVar40[1] = puVar35[1];
                *puVar40 = uVar21;
                piVar34 = (int *)param_2[1];
              }
              *(undefined2 *)(piVar34 + 1) = 0;
              *piVar34 = 1;
              if (0xffff < (long)piVar20 + 1U) {
                *(undefined4 *)(param_2 + 9) = 2;
                *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar34 - *param_2) >> 3);
              }
              *(short *)((long)piVar34 + 6) = (short)((long)piVar20 + 1U);
              piVar34 = piVar34 + 2;
              *(int *)(lVar29 + (*puVar35 * -0x30e4432340650000 >> (uVar27 & 0x3f)) * 4) = iVar18;
              puVar35 = (ulong *)((long)puVar35 + (long)piVar20 + 4);
              param_2[1] = (long)piVar34;
              param_4 = puVar35;
              iVar44 = iVar43;
              iVar39 = iVar19;
            } while (puVar35 <= puVar22);
          }
        }
      } while (puVar35 < puVar22);
    }
  }
  else if (iVar18 == 7) {
    if (puVar35 < puVar22) {
      uVar13 = *(uint *)(param_1 + 0xcc);
      if (uVar13 < 2) {
        uVar13 = 1;
      }
      uVar27 = (ulong)(0x40 - *(int *)(param_1 + 0xc0));
      uVar17 = puVar23[0x18];
      puVar23 = puVar6 + -4;
      do {
        uVar24 = *puVar35;
        uVar37 = uVar24 * -0x30e44323405a9d00 >> (uVar27 & 0x3f);
        uVar14 = *(uint *)(lVar29 + uVar37 * 4);
        uVar31 = (ulong)uVar14;
        uVar21 = (long)puVar35 - lVar42;
        iVar18 = (int)uVar21;
        uVar2 = (iVar18 - iVar44) + 1;
        piVar34 = (int *)(uVar10 + (uVar2 - uVar4));
        if (uVar11 <= uVar2) {
          piVar34 = (int *)(lVar42 + (ulong)uVar2);
        }
        *(int *)(lVar29 + uVar37 * 4) = iVar18;
        if (((uVar11 - 1) - uVar2 < 3) ||
           (puVar40 = (ulong *)((long)puVar35 + 1), *piVar34 != *(int *)puVar40)) {
          puVar40 = puVar35;
          if (uVar14 <= uVar11) {
            uVar2 = *(uint *)(uVar30 + (uVar24 * -0x30e44323405a9d00 >>
                                       ((ulong)(0x40 - (int)uVar17) & 0x3f)) * 4);
            if ((uVar2 <= uVar12) || (piVar34 = (int *)(uVar10 + uVar2), *piVar34 != (int)*puVar35))
            goto LAB_1099be86c;
            piVar20 = (int *)((long)puVar35 + 4);
            FUN_1099c1954(piVar20,piVar34 + 1,puVar6,puVar9,pcVar5);
            piVar20 = piVar20 + 1;
            if (param_4 < puVar35) {
              pcVar28 = (char *)((uVar10 - 1) + (ulong)uVar2);
              do {
                puVar25 = (ulong *)((long)puVar35 + -1);
                puVar40 = puVar35;
                if ((*(char *)puVar25 != *pcVar28) ||
                   (piVar20 = (int *)((long)piVar20 + 1), puVar40 = puVar25, puVar25 <= param_4))
                break;
                bVar1 = pcVar7 < pcVar28;
                pcVar28 = pcVar28 + -1;
                puVar35 = puVar25;
              } while (bVar1);
            }
            uVar24 = (long)puVar40 - (long)param_4;
            puVar35 = (ulong *)param_2[3];
            if (puVar23 < puVar40) {
              puVar25 = puVar35;
              puVar26 = param_4;
              if (param_4 <= puVar23) {
                puVar25 = (ulong *)((long)puVar35 + ((long)puVar23 - (long)param_4));
                uVar31 = *param_4;
                puVar35[1] = param_4[1];
                *puVar35 = uVar31;
                uVar31 = param_4[2];
                puVar35[3] = param_4[3];
                puVar35[2] = uVar31;
                puVar26 = puVar23;
                if (0x20 < (long)puVar23 - (long)param_4) {
                  puVar35 = puVar35 + 4;
                  puVar33 = param_4 + 6;
                  do {
                    uVar31 = puVar33[-2];
                    puVar35[1] = puVar33[-1];
                    *puVar35 = uVar31;
                    uVar31 = *puVar33;
                    puVar35[3] = puVar33[1];
                    puVar35[2] = uVar31;
                    puVar35 = puVar35 + 4;
                    puVar33 = puVar33 + 4;
                  } while (puVar35 < puVar25);
                }
              }
              if (puVar26 < puVar40) {
                lVar38 = (long)puVar40 - (long)puVar26;
                do {
                  *(char *)puVar25 = (char)*puVar26;
                  lVar38 = lVar38 + -1;
                  puVar25 = (ulong *)((long)puVar25 + 1);
                  puVar26 = (ulong *)((long)puVar26 + 1);
                } while (lVar38 != 0);
              }
LAB_1099bee60:
              param_2[3] = param_2[3] + uVar24;
              piVar34 = (int *)param_2[1];
              if (0xffff < uVar24) {
                *(undefined4 *)(param_2 + 9) = 1;
                *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar34 - *param_2) >> 3);
              }
            }
            else {
              uVar31 = *param_4;
              puVar35[1] = param_4[1];
              *puVar35 = uVar31;
              lVar38 = param_2[3];
              if (0x10 < uVar24) {
                uVar31 = param_4[2];
                *(ulong *)(lVar38 + 0x18) = param_4[3];
                *(ulong *)(lVar38 + 0x10) = uVar31;
                uVar31 = param_4[4];
                *(ulong *)(lVar38 + 0x28) = param_4[5];
                *(ulong *)(lVar38 + 0x20) = uVar31;
                if (0x30 < (long)uVar24) {
                  puVar35 = (ulong *)(lVar38 + 0x30);
                  puVar25 = param_4 + 8;
                  do {
                    uVar31 = puVar25[-2];
                    puVar35[1] = puVar25[-1];
                    *puVar35 = uVar31;
                    uVar31 = *puVar25;
                    puVar35[3] = puVar25[1];
                    puVar35[2] = uVar31;
                    puVar35 = puVar35 + 4;
                    puVar25 = puVar25 + 4;
                  } while (puVar35 < (ulong *)(lVar38 + uVar24));
                }
                goto LAB_1099bee60;
              }
              param_2[3] = lVar38 + uVar24;
              piVar34 = (int *)param_2[1];
            }
            iVar43 = (iVar18 - uVar4) - uVar2;
            uVar31 = (long)piVar20 - 3;
            *(short *)(piVar34 + 1) = (short)uVar24;
            *piVar34 = iVar43 + 3;
            iVar39 = iVar44;
            if (uVar31 >> 0x10 == 0) goto LAB_1099bea3c;
            goto LAB_1099bea24;
          }
          piVar8 = (int *)(lVar42 + uVar31);
          if (*piVar8 == (int)*puVar35) {
            puVar25 = (ulong *)((long)puVar35 + 4);
            puVar26 = (ulong *)(piVar8 + 1);
            puVar33 = puVar25;
            if (puVar25 < (ulong *)((long)puVar6 - 7U)) {
              if (*puVar26 == *puVar25) {
                lVar38 = 0;
                puVar33 = (ulong *)((long)puVar35 + 0xc);
                puVar26 = (ulong *)(lVar42 + 0xc + uVar31);
                do {
                  if ((ulong *)((long)puVar6 - 7U) <= puVar33) goto LAB_1099be8e4;
                  uVar37 = *puVar26;
                  uVar24 = *puVar33;
                  lVar38 = lVar38 + 8;
                  puVar33 = puVar33 + 1;
                  puVar26 = puVar26 + 1;
                } while (uVar37 == uVar24);
                uVar24 = uVar24 ^ uVar37;
                uVar24 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
                uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
                uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
                uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
                uVar24 = lVar38 + ((ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3);
              }
              else {
                uVar24 = *puVar25 ^ *puVar26;
                uVar24 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
                uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
                uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
                uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
                uVar24 = (ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3;
              }
            }
            else {
LAB_1099be8e4:
              if (puVar33 < (ulong *)((long)puVar6 - 3U)) {
                if ((int)*puVar26 == (int)*puVar33) {
                  puVar33 = (ulong *)((long)puVar33 + 4);
                  puVar26 = (ulong *)((long)puVar26 + 4);
                }
              }
              if (puVar33 < (ulong *)((long)puVar6 - 1U)) {
                if ((short)*puVar26 == (short)*puVar33) {
                  puVar33 = (ulong *)((long)puVar33 + 2);
                  puVar26 = (ulong *)((long)puVar26 + 2);
                }
              }
              if ((puVar33 < puVar6) && ((char)*puVar26 == (char)*puVar33)) {
                puVar33 = (ulong *)((long)puVar33 + 1);
              }
              uVar24 = (long)puVar33 - (long)puVar25;
            }
            piVar20 = (int *)(uVar24 + 4);
            if (param_4 < puVar35) {
              pcVar28 = (char *)(lVar42 + -1 + uVar31);
              do {
                puVar25 = (ulong *)((long)puVar40 + -1);
                if ((*(char *)puVar25 != *pcVar28) ||
                   (piVar20 = (int *)((long)piVar20 + 1), puVar40 = puVar25, puVar25 <= param_4))
                break;
                bVar1 = pcVar5 < pcVar28;
                pcVar28 = pcVar28 + -1;
              } while (bVar1);
            }
            uVar24 = (long)puVar40 - (long)param_4;
            puVar25 = (ulong *)param_2[3];
            if (puVar23 < puVar40) {
              puVar26 = puVar25;
              puVar33 = param_4;
              if (param_4 <= puVar23) {
                puVar26 = (ulong *)((long)puVar25 + ((long)puVar23 - (long)param_4));
                uVar31 = *param_4;
                puVar25[1] = param_4[1];
                *puVar25 = uVar31;
                uVar31 = param_4[2];
                puVar25[3] = param_4[3];
                puVar25[2] = uVar31;
                puVar33 = puVar23;
                if (0x20 < (long)puVar23 - (long)param_4) {
                  puVar25 = puVar25 + 4;
                  puVar36 = param_4 + 6;
                  do {
                    uVar31 = puVar36[-2];
                    puVar25[1] = puVar36[-1];
                    *puVar25 = uVar31;
                    uVar31 = *puVar36;
                    puVar25[3] = puVar36[1];
                    puVar25[2] = uVar31;
                    puVar25 = puVar25 + 4;
                    puVar36 = puVar36 + 4;
                  } while (puVar25 < puVar26);
                }
              }
              if (puVar33 < puVar40) {
                lVar38 = (long)puVar40 - (long)puVar33;
                do {
                  *(char *)puVar26 = (char)*puVar33;
                  lVar38 = lVar38 + -1;
                  puVar26 = (ulong *)((long)puVar26 + 1);
                  puVar33 = (ulong *)((long)puVar33 + 1);
                } while (lVar38 != 0);
              }
LAB_1099bed0c:
              param_2[3] = param_2[3] + uVar24;
              piVar34 = (int *)param_2[1];
              if (0xffff < uVar24) {
                *(undefined4 *)(param_2 + 9) = 1;
                *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar34 - *param_2) >> 3);
              }
            }
            else {
              uVar31 = *param_4;
              puVar25[1] = param_4[1];
              *puVar25 = uVar31;
              lVar38 = param_2[3];
              if (0x10 < uVar24) {
                uVar31 = param_4[2];
                *(ulong *)(lVar38 + 0x18) = param_4[3];
                *(ulong *)(lVar38 + 0x10) = uVar31;
                uVar31 = param_4[4];
                *(ulong *)(lVar38 + 0x28) = param_4[5];
                *(ulong *)(lVar38 + 0x20) = uVar31;
                if (0x30 < (long)uVar24) {
                  puVar25 = (ulong *)(lVar38 + 0x30);
                  puVar26 = param_4 + 8;
                  do {
                    uVar31 = puVar26[-2];
                    puVar25[1] = puVar26[-1];
                    *puVar25 = uVar31;
                    uVar31 = *puVar26;
                    puVar25[3] = puVar26[1];
                    puVar25[2] = uVar31;
                    puVar25 = puVar25 + 4;
                    puVar26 = puVar26 + 4;
                  } while (puVar25 < (ulong *)(lVar38 + uVar24));
                }
                goto LAB_1099bed0c;
              }
              param_2[3] = lVar38 + uVar24;
              piVar34 = (int *)param_2[1];
            }
            iVar43 = (int)puVar35 - (int)piVar8;
            uVar31 = (long)piVar20 - 3;
            *(short *)(piVar34 + 1) = (short)uVar24;
            *piVar34 = iVar43 + 3;
            iVar39 = iVar44;
            if (0xffff < uVar31) goto LAB_1099bea24;
            goto LAB_1099bea3c;
          }
LAB_1099be86c:
          puVar35 = (ulong *)((long)puVar35 + (ulong)uVar13 + ((long)puVar35 - (long)param_4 >> 8));
        }
        else {
          puVar25 = puVar9;
          if (uVar11 <= uVar2) {
            puVar25 = puVar6;
          }
          lVar38 = (long)puVar35 + 5;
          FUN_1099c1954(lVar38,piVar34 + 1,puVar6,puVar25,pcVar5);
          uVar24 = (long)puVar40 - (long)param_4;
          puVar25 = (ulong *)param_2[3];
          if (puVar23 < puVar40) {
            puVar26 = puVar25;
            puVar33 = param_4;
            if (param_4 <= puVar23) {
              puVar26 = (ulong *)((long)puVar25 + ((long)puVar23 - (long)param_4));
              uVar31 = *param_4;
              puVar25[1] = param_4[1];
              *puVar25 = uVar31;
              uVar31 = param_4[2];
              puVar25[3] = param_4[3];
              puVar25[2] = uVar31;
              puVar33 = puVar23;
              if (0x20 < (long)puVar23 - (long)param_4) {
                puVar25 = puVar25 + 4;
                puVar36 = param_4 + 6;
                do {
                  uVar31 = puVar36[-2];
                  puVar25[1] = puVar36[-1];
                  *puVar25 = uVar31;
                  uVar31 = *puVar36;
                  puVar25[3] = puVar36[1];
                  puVar25[2] = uVar31;
                  puVar25 = puVar25 + 4;
                  puVar36 = puVar36 + 4;
                } while (puVar25 < puVar26);
              }
            }
            if (puVar33 < puVar40) {
              puVar33 = (ulong *)((long)puVar33 + -1);
              do {
                puVar33 = (ulong *)((long)puVar33 + 1);
                *(undefined1 *)puVar26 = *(undefined1 *)puVar33;
                puVar26 = (ulong *)((long)puVar26 + 1);
              } while (puVar33 != puVar35);
            }
LAB_1099be9c8:
            param_2[3] = param_2[3] + uVar24;
            piVar34 = (int *)param_2[1];
            if (0xffff < uVar24) {
              *(undefined4 *)(param_2 + 9) = 1;
              *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar34 - *param_2) >> 3);
            }
          }
          else {
            uVar31 = *param_4;
            puVar25[1] = param_4[1];
            *puVar25 = uVar31;
            lVar32 = param_2[3];
            if (0x10 < uVar24) {
              uVar31 = param_4[2];
              *(ulong *)(lVar32 + 0x18) = param_4[3];
              *(ulong *)(lVar32 + 0x10) = uVar31;
              uVar31 = param_4[4];
              *(ulong *)(lVar32 + 0x28) = param_4[5];
              *(ulong *)(lVar32 + 0x20) = uVar31;
              if (0x30 < (long)uVar24) {
                puVar35 = (ulong *)(lVar32 + 0x30);
                puVar25 = param_4 + 8;
                do {
                  uVar31 = puVar25[-2];
                  puVar35[1] = puVar25[-1];
                  *puVar35 = uVar31;
                  uVar31 = *puVar25;
                  puVar35[3] = puVar25[1];
                  puVar35[2] = uVar31;
                  puVar35 = puVar35 + 4;
                  puVar25 = puVar25 + 4;
                } while (puVar35 < (ulong *)(lVar32 + uVar24));
              }
              goto LAB_1099be9c8;
            }
            param_2[3] = lVar32 + uVar24;
            piVar34 = (int *)param_2[1];
          }
          piVar20 = (int *)(lVar38 + 4);
          uVar31 = lVar38 + 1;
          *(short *)(piVar34 + 1) = (short)uVar24;
          *piVar34 = 1;
          iVar43 = iVar44;
          if (uVar31 >> 0x10 != 0) {
LAB_1099bea24:
            *(undefined4 *)(param_2 + 9) = 2;
            *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar34 - *param_2) >> 3);
          }
LAB_1099bea3c:
          *(short *)((long)piVar34 + 6) = (short)uVar31;
          piVar34 = piVar34 + 2;
          param_2[1] = (long)piVar34;
          puVar35 = (ulong *)((long)puVar40 + (long)piVar20);
          param_4 = puVar35;
          iVar44 = iVar43;
          if (puVar35 <= puVar22) {
            *(int *)(lVar29 + ((ulong)(*(long *)(lVar3 + (uVar21 & 0xffffffff)) *
                                      -0x30e44323405a9d00) >> (uVar27 & 0x3f)) * 4) = iVar18 + 2;
            *(int *)(lVar29 + ((ulong)(*(long *)((long)puVar35 - 2U) * -0x30e44323405a9d00) >>
                              (uVar27 & 0x3f)) * 4) = (int)(long *)((long)puVar35 - 2U) - iVar41;
            do {
              iVar44 = iVar43;
              iVar43 = iVar39;
              iVar18 = (int)puVar35 - iVar41;
              uVar2 = iVar18 - iVar43;
              lVar38 = uVar10 - uVar4;
              if (uVar11 <= uVar2) {
                lVar38 = lVar42;
              }
              param_4 = puVar35;
              iVar39 = iVar43;
              if (((uVar11 - 1) - uVar2 < 3) || (*(int *)(lVar38 + (ulong)uVar2) != (int)*puVar35))
              break;
              puVar40 = puVar9;
              if (uVar11 <= uVar2) {
                puVar40 = puVar6;
              }
              piVar20 = (int *)((long)puVar35 + 4);
              FUN_1099c1954(piVar20,(int *)(lVar38 + (ulong)uVar2) + 1,puVar6,puVar40,pcVar5);
              if (puVar35 <= puVar23) {
                puVar40 = (ulong *)param_2[3];
                uVar21 = *puVar35;
                puVar40[1] = puVar35[1];
                *puVar40 = uVar21;
                piVar34 = (int *)param_2[1];
              }
              *(undefined2 *)(piVar34 + 1) = 0;
              *piVar34 = 1;
              if (0xffff < (long)piVar20 + 1U) {
                *(undefined4 *)(param_2 + 9) = 2;
                *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar34 - *param_2) >> 3);
              }
              *(short *)((long)piVar34 + 6) = (short)((long)piVar20 + 1U);
              piVar34 = piVar34 + 2;
              *(int *)(lVar29 + (*puVar35 * -0x30e44323405a9d00 >> (uVar27 & 0x3f)) * 4) = iVar18;
              puVar35 = (ulong *)((long)puVar35 + (long)piVar20 + 4);
              param_2[1] = (long)piVar34;
              param_4 = puVar35;
              iVar39 = iVar44;
              iVar44 = iVar43;
            } while (puVar35 <= puVar22);
          }
        }
      } while (puVar35 < puVar22);
    }
  }
  else if (puVar35 < puVar22) {
    uVar13 = *(uint *)(param_1 + 0xcc);
    if (uVar13 < 2) {
      uVar13 = 1;
    }
    uVar2 = 0x20 - *(int *)(param_1 + 0xc0);
    uVar17 = puVar23[0x18];
    puVar23 = puVar6 + -4;
    do {
      uVar16 = (uint)((int)*puVar35 * -0x61c8864f) >> (ulong)(uVar2 & 0x1f);
      uVar15 = *(uint *)(lVar29 + (ulong)uVar16 * 4);
      uVar21 = (ulong)uVar15;
      uVar27 = (long)puVar35 - lVar42;
      iVar18 = (int)uVar27;
      uVar14 = (iVar18 - iVar44) + 1;
      piVar34 = (int *)(uVar10 + (uVar14 - uVar4));
      if (uVar11 <= uVar14) {
        piVar34 = (int *)(lVar42 + (ulong)uVar14);
      }
      *(int *)(lVar29 + (ulong)uVar16 * 4) = iVar18;
      if (((uVar11 - 1) - uVar14 < 3) ||
         (puVar40 = (ulong *)((long)puVar35 + 1), *piVar34 != *(int *)puVar40)) {
        puVar40 = puVar35;
        if (uVar15 <= uVar11) {
          uVar14 = *(uint *)(uVar30 + (ulong)((uint)((int)*puVar35 * -0x61c8864f) >>
                                             (ulong)(0x20U - (int)uVar17 & 0x1f)) * 4);
          if ((uVar14 <= uVar12) || (piVar34 = (int *)(uVar10 + uVar14), *piVar34 != (int)*puVar35))
          goto LAB_1099c02bc;
          piVar20 = (int *)((long)puVar35 + 4);
          FUN_1099c1954(piVar20,piVar34 + 1,puVar6,puVar9,pcVar5);
          piVar20 = piVar20 + 1;
          if (param_4 < puVar35) {
            pcVar28 = (char *)((uVar10 - 1) + (ulong)uVar14);
            do {
              puVar25 = (ulong *)((long)puVar35 + -1);
              puVar40 = puVar35;
              if ((*(char *)puVar25 != *pcVar28) ||
                 (piVar20 = (int *)((long)piVar20 + 1), puVar40 = puVar25, puVar25 <= param_4))
              break;
              bVar1 = pcVar7 < pcVar28;
              pcVar28 = pcVar28 + -1;
              puVar35 = puVar25;
            } while (bVar1);
          }
          uVar21 = (long)puVar40 - (long)param_4;
          puVar35 = (ulong *)param_2[3];
          if (puVar23 < puVar40) {
            puVar25 = puVar35;
            puVar26 = param_4;
            if (param_4 <= puVar23) {
              puVar25 = (ulong *)((long)puVar35 + ((long)puVar23 - (long)param_4));
              uVar24 = *param_4;
              puVar35[1] = param_4[1];
              *puVar35 = uVar24;
              uVar24 = param_4[2];
              puVar35[3] = param_4[3];
              puVar35[2] = uVar24;
              puVar26 = puVar23;
              if (0x20 < (long)puVar23 - (long)param_4) {
                puVar35 = puVar35 + 4;
                puVar33 = param_4 + 6;
                do {
                  uVar24 = puVar33[-2];
                  puVar35[1] = puVar33[-1];
                  *puVar35 = uVar24;
                  uVar24 = *puVar33;
                  puVar35[3] = puVar33[1];
                  puVar35[2] = uVar24;
                  puVar35 = puVar35 + 4;
                  puVar33 = puVar33 + 4;
                } while (puVar35 < puVar25);
              }
            }
            if (puVar26 < puVar40) {
              lVar38 = (long)puVar40 - (long)puVar26;
              do {
                *(char *)puVar25 = (char)*puVar26;
                lVar38 = lVar38 + -1;
                puVar25 = (ulong *)((long)puVar25 + 1);
                puVar26 = (ulong *)((long)puVar26 + 1);
              } while (lVar38 != 0);
            }
LAB_1099c08a0:
            param_2[3] = param_2[3] + uVar21;
            piVar34 = (int *)param_2[1];
            if (0xffff < uVar21) {
              *(undefined4 *)(param_2 + 9) = 1;
              *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar34 - *param_2) >> 3);
            }
          }
          else {
            uVar24 = *param_4;
            puVar35[1] = param_4[1];
            *puVar35 = uVar24;
            lVar38 = param_2[3];
            if (0x10 < uVar21) {
              uVar24 = param_4[2];
              *(ulong *)(lVar38 + 0x18) = param_4[3];
              *(ulong *)(lVar38 + 0x10) = uVar24;
              uVar24 = param_4[4];
              *(ulong *)(lVar38 + 0x28) = param_4[5];
              *(ulong *)(lVar38 + 0x20) = uVar24;
              if (0x30 < (long)uVar21) {
                puVar35 = (ulong *)(lVar38 + 0x30);
                puVar25 = param_4 + 8;
                do {
                  uVar24 = puVar25[-2];
                  puVar35[1] = puVar25[-1];
                  *puVar35 = uVar24;
                  uVar24 = *puVar25;
                  puVar35[3] = puVar25[1];
                  puVar35[2] = uVar24;
                  puVar35 = puVar35 + 4;
                  puVar25 = puVar25 + 4;
                } while (puVar35 < (ulong *)(lVar38 + uVar21));
              }
              goto LAB_1099c08a0;
            }
            param_2[3] = lVar38 + uVar21;
            piVar34 = (int *)param_2[1];
          }
          iVar43 = (iVar18 - uVar4) - uVar14;
          uVar24 = (long)piVar20 - 3;
          *(short *)(piVar34 + 1) = (short)uVar21;
          *piVar34 = iVar43 + 3;
          iVar39 = iVar44;
          if (uVar24 >> 0x10 == 0) goto LAB_1099c048c;
          goto LAB_1099c0474;
        }
        piVar8 = (int *)(lVar42 + uVar21);
        if (*piVar8 == (int)*puVar35) {
          puVar25 = (ulong *)((long)puVar35 + 4);
          puVar26 = (ulong *)(piVar8 + 1);
          puVar33 = puVar25;
          if (puVar25 < (ulong *)((long)puVar6 - 7U)) {
            if (*puVar26 == *puVar25) {
              lVar38 = 0;
              puVar33 = (ulong *)((long)puVar35 + 0xc);
              puVar26 = (ulong *)(lVar42 + 0xc + uVar21);
              do {
                if ((ulong *)((long)puVar6 - 7U) <= puVar33) goto LAB_1099c0334;
                uVar31 = *puVar26;
                uVar24 = *puVar33;
                lVar38 = lVar38 + 8;
                puVar33 = puVar33 + 1;
                puVar26 = puVar26 + 1;
              } while (uVar31 == uVar24);
              uVar24 = uVar24 ^ uVar31;
              uVar24 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
              uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
              uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
              uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
              uVar24 = lVar38 + ((ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3);
            }
            else {
              uVar24 = *puVar25 ^ *puVar26;
              uVar24 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
              uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
              uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
              uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
              uVar24 = (ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3;
            }
          }
          else {
LAB_1099c0334:
            if (puVar33 < (ulong *)((long)puVar6 - 3U)) {
              if ((int)*puVar26 == (int)*puVar33) {
                puVar33 = (ulong *)((long)puVar33 + 4);
                puVar26 = (ulong *)((long)puVar26 + 4);
              }
            }
            if (puVar33 < (ulong *)((long)puVar6 - 1U)) {
              if ((short)*puVar26 == (short)*puVar33) {
                puVar33 = (ulong *)((long)puVar33 + 2);
                puVar26 = (ulong *)((long)puVar26 + 2);
              }
            }
            if ((puVar33 < puVar6) && ((char)*puVar26 == (char)*puVar33)) {
              puVar33 = (ulong *)((long)puVar33 + 1);
            }
            uVar24 = (long)puVar33 - (long)puVar25;
          }
          piVar20 = (int *)(uVar24 + 4);
          if (param_4 < puVar35) {
            pcVar28 = (char *)(lVar42 + -1 + uVar21);
            do {
              puVar25 = (ulong *)((long)puVar40 + -1);
              if ((*(char *)puVar25 != *pcVar28) ||
                 (piVar20 = (int *)((long)piVar20 + 1), puVar40 = puVar25, puVar25 <= param_4))
              break;
              bVar1 = pcVar5 < pcVar28;
              pcVar28 = pcVar28 + -1;
            } while (bVar1);
          }
          uVar21 = (long)puVar40 - (long)param_4;
          puVar25 = (ulong *)param_2[3];
          if (puVar23 < puVar40) {
            puVar26 = puVar25;
            puVar33 = param_4;
            if (param_4 <= puVar23) {
              puVar26 = (ulong *)((long)puVar25 + ((long)puVar23 - (long)param_4));
              uVar24 = *param_4;
              puVar25[1] = param_4[1];
              *puVar25 = uVar24;
              uVar24 = param_4[2];
              puVar25[3] = param_4[3];
              puVar25[2] = uVar24;
              puVar33 = puVar23;
              if (0x20 < (long)puVar23 - (long)param_4) {
                puVar25 = puVar25 + 4;
                puVar36 = param_4 + 6;
                do {
                  uVar24 = puVar36[-2];
                  puVar25[1] = puVar36[-1];
                  *puVar25 = uVar24;
                  uVar24 = *puVar36;
                  puVar25[3] = puVar36[1];
                  puVar25[2] = uVar24;
                  puVar25 = puVar25 + 4;
                  puVar36 = puVar36 + 4;
                } while (puVar25 < puVar26);
              }
            }
            if (puVar33 < puVar40) {
              lVar38 = (long)puVar40 - (long)puVar33;
              do {
                *(char *)puVar26 = (char)*puVar33;
                lVar38 = lVar38 + -1;
                puVar26 = (ulong *)((long)puVar26 + 1);
                puVar33 = (ulong *)((long)puVar33 + 1);
              } while (lVar38 != 0);
            }
LAB_1099c074c:
            param_2[3] = param_2[3] + uVar21;
            piVar34 = (int *)param_2[1];
            if (0xffff < uVar21) {
              *(undefined4 *)(param_2 + 9) = 1;
              *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar34 - *param_2) >> 3);
            }
          }
          else {
            uVar24 = *param_4;
            puVar25[1] = param_4[1];
            *puVar25 = uVar24;
            lVar38 = param_2[3];
            if (0x10 < uVar21) {
              uVar24 = param_4[2];
              *(ulong *)(lVar38 + 0x18) = param_4[3];
              *(ulong *)(lVar38 + 0x10) = uVar24;
              uVar24 = param_4[4];
              *(ulong *)(lVar38 + 0x28) = param_4[5];
              *(ulong *)(lVar38 + 0x20) = uVar24;
              if (0x30 < (long)uVar21) {
                puVar25 = (ulong *)(lVar38 + 0x30);
                puVar26 = param_4 + 8;
                do {
                  uVar24 = puVar26[-2];
                  puVar25[1] = puVar26[-1];
                  *puVar25 = uVar24;
                  uVar24 = *puVar26;
                  puVar25[3] = puVar26[1];
                  puVar25[2] = uVar24;
                  puVar25 = puVar25 + 4;
                  puVar26 = puVar26 + 4;
                } while (puVar25 < (ulong *)(lVar38 + uVar21));
              }
              goto LAB_1099c074c;
            }
            param_2[3] = lVar38 + uVar21;
            piVar34 = (int *)param_2[1];
          }
          iVar43 = (int)puVar35 - (int)piVar8;
          uVar24 = (long)piVar20 - 3;
          *(short *)(piVar34 + 1) = (short)uVar21;
          *piVar34 = iVar43 + 3;
          iVar39 = iVar44;
          if (0xffff < uVar24) goto LAB_1099c0474;
          goto LAB_1099c048c;
        }
LAB_1099c02bc:
        puVar35 = (ulong *)((long)puVar35 + (ulong)uVar13 + ((long)puVar35 - (long)param_4 >> 8));
      }
      else {
        puVar25 = puVar9;
        if (uVar11 <= uVar14) {
          puVar25 = puVar6;
        }
        lVar38 = (long)puVar35 + 5;
        FUN_1099c1954(lVar38,piVar34 + 1,puVar6,puVar25,pcVar5);
        uVar21 = (long)puVar40 - (long)param_4;
        puVar25 = (ulong *)param_2[3];
        if (puVar23 < puVar40) {
          puVar26 = puVar25;
          puVar33 = param_4;
          if (param_4 <= puVar23) {
            puVar26 = (ulong *)((long)puVar25 + ((long)puVar23 - (long)param_4));
            uVar24 = *param_4;
            puVar25[1] = param_4[1];
            *puVar25 = uVar24;
            uVar24 = param_4[2];
            puVar25[3] = param_4[3];
            puVar25[2] = uVar24;
            puVar33 = puVar23;
            if (0x20 < (long)puVar23 - (long)param_4) {
              puVar25 = puVar25 + 4;
              puVar36 = param_4 + 6;
              do {
                uVar24 = puVar36[-2];
                puVar25[1] = puVar36[-1];
                *puVar25 = uVar24;
                uVar24 = *puVar36;
                puVar25[3] = puVar36[1];
                puVar25[2] = uVar24;
                puVar25 = puVar25 + 4;
                puVar36 = puVar36 + 4;
              } while (puVar25 < puVar26);
            }
          }
          if (puVar33 < puVar40) {
            puVar33 = (ulong *)((long)puVar33 + -1);
            do {
              puVar33 = (ulong *)((long)puVar33 + 1);
              *(undefined1 *)puVar26 = *(undefined1 *)puVar33;
              puVar26 = (ulong *)((long)puVar26 + 1);
            } while (puVar33 != puVar35);
          }
LAB_1099c0418:
          param_2[3] = param_2[3] + uVar21;
          piVar34 = (int *)param_2[1];
          if (0xffff < uVar21) {
            *(undefined4 *)(param_2 + 9) = 1;
            *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar34 - *param_2) >> 3);
          }
        }
        else {
          uVar24 = *param_4;
          puVar25[1] = param_4[1];
          *puVar25 = uVar24;
          lVar32 = param_2[3];
          if (0x10 < uVar21) {
            uVar24 = param_4[2];
            *(ulong *)(lVar32 + 0x18) = param_4[3];
            *(ulong *)(lVar32 + 0x10) = uVar24;
            uVar24 = param_4[4];
            *(ulong *)(lVar32 + 0x28) = param_4[5];
            *(ulong *)(lVar32 + 0x20) = uVar24;
            if (0x30 < (long)uVar21) {
              puVar35 = (ulong *)(lVar32 + 0x30);
              puVar25 = param_4 + 8;
              do {
                uVar24 = puVar25[-2];
                puVar35[1] = puVar25[-1];
                *puVar35 = uVar24;
                uVar24 = *puVar25;
                puVar35[3] = puVar25[1];
                puVar35[2] = uVar24;
                puVar35 = puVar35 + 4;
                puVar25 = puVar25 + 4;
              } while (puVar35 < (ulong *)(lVar32 + uVar21));
            }
            goto LAB_1099c0418;
          }
          param_2[3] = lVar32 + uVar21;
          piVar34 = (int *)param_2[1];
        }
        piVar20 = (int *)(lVar38 + 4);
        uVar24 = lVar38 + 1;
        *(short *)(piVar34 + 1) = (short)uVar21;
        *piVar34 = 1;
        iVar43 = iVar44;
        if (uVar24 >> 0x10 != 0) {
LAB_1099c0474:
          *(undefined4 *)(param_2 + 9) = 2;
          *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar34 - *param_2) >> 3);
        }
LAB_1099c048c:
        *(short *)((long)piVar34 + 6) = (short)uVar24;
        piVar34 = piVar34 + 2;
        param_2[1] = (long)piVar34;
        puVar35 = (ulong *)((long)puVar40 + (long)piVar20);
        param_4 = puVar35;
        iVar44 = iVar43;
        if (puVar35 <= puVar22) {
          *(int *)(lVar29 + (ulong)((uint)(*(int *)(lVar3 + (uVar27 & 0xffffffff)) * -0x61c8864f) >>
                                   (ulong)(uVar2 & 0x1f)) * 4) = iVar18 + 2;
          *(int *)(lVar29 + (ulong)((uint)(*(int *)((long)puVar35 - 2U) * -0x61c8864f) >>
                                   (ulong)(uVar2 & 0x1f)) * 4) =
               (int)(int *)((long)puVar35 - 2U) - iVar41;
          do {
            iVar44 = iVar43;
            iVar43 = iVar39;
            iVar18 = (int)puVar35 - iVar41;
            uVar14 = iVar18 - iVar43;
            lVar38 = uVar10 - uVar4;
            if (uVar11 <= uVar14) {
              lVar38 = lVar42;
            }
            param_4 = puVar35;
            iVar39 = iVar43;
            if (((uVar11 - 1) - uVar14 < 3) || (*(int *)(lVar38 + (ulong)uVar14) != (int)*puVar35))
            break;
            puVar40 = puVar9;
            if (uVar11 <= uVar14) {
              puVar40 = puVar6;
            }
            piVar20 = (int *)((long)puVar35 + 4);
            FUN_1099c1954(piVar20,(int *)(lVar38 + (ulong)uVar14) + 1,puVar6,puVar40,pcVar5);
            if (puVar35 <= puVar23) {
              puVar40 = (ulong *)param_2[3];
              uVar27 = *puVar35;
              puVar40[1] = puVar35[1];
              *puVar40 = uVar27;
              piVar34 = (int *)param_2[1];
            }
            *(undefined2 *)(piVar34 + 1) = 0;
            *piVar34 = 1;
            if (0xffff < (long)piVar20 + 1U) {
              *(undefined4 *)(param_2 + 9) = 2;
              *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar34 - *param_2) >> 3);
            }
            *(short *)((long)piVar34 + 6) = (short)((long)piVar20 + 1U);
            piVar34 = piVar34 + 2;
            *(int *)(lVar29 + (ulong)((uint)((int)*puVar35 * -0x61c8864f) >> (ulong)(uVar2 & 0x1f))
                              * 4) = iVar18;
            puVar35 = (ulong *)((long)puVar35 + (long)piVar20 + 4);
            param_2[1] = (long)piVar34;
            param_4 = puVar35;
            iVar39 = iVar44;
            iVar44 = iVar43;
          } while (puVar35 <= puVar22);
        }
      }
    } while (puVar35 < puVar22);
  }
  *param_3 = iVar44;
  param_3[1] = iVar39;
  return (long)puVar6 - (long)param_4;
}



/* Entry: 1099c1954; end: 1099c1b47;  */

ulong FUN_1099c1954(ulong *param_1,ulong *param_2,ulong *param_3,long param_4,ulong *param_5)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong *puVar5;
  long lVar6;
  
  puVar1 = (ulong *)((long)param_1 + (param_4 - (long)param_2));
  if (param_3 <= puVar1) {
    puVar1 = param_3;
  }
  puVar3 = param_1;
  puVar5 = param_2;
  if (param_1 < (ulong *)((long)puVar1 - 7U)) {
    if (*param_2 == *param_1) {
      lVar6 = 0;
      do {
        puVar5 = puVar5 + 1;
        puVar3 = puVar3 + 1;
        if ((ulong *)((long)puVar1 - 7U) <= puVar3) goto LAB_1099c19c8;
        lVar6 = lVar6 + 8;
      } while (*puVar5 == *puVar3);
      uVar4 = *puVar3 ^ *puVar5;
      uVar4 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
      uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      uVar4 = lVar6 + ((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3);
    }
    else {
      uVar4 = *param_1 ^ *param_2;
      uVar4 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
      uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      uVar4 = (ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3;
    }
  }
  else {
LAB_1099c19c8:
    if (puVar3 < (ulong *)((long)puVar1 - 3U)) {
      if ((int)*puVar5 == (int)*puVar3) {
        puVar3 = (ulong *)((long)puVar3 + 4);
        puVar5 = (ulong *)((long)puVar5 + 4);
      }
    }
    if (puVar3 < (ulong *)((long)puVar1 - 1U)) {
      if ((short)*puVar5 == (short)*puVar3) {
        puVar3 = (ulong *)((long)puVar3 + 2);
        puVar5 = (ulong *)((long)puVar5 + 2);
      }
    }
    if ((puVar3 < puVar1) && ((char)*puVar5 == (char)*puVar3)) {
      puVar3 = (ulong *)((long)puVar3 + 1);
    }
    uVar4 = (long)puVar3 - (long)param_1;
  }
  if ((long)param_2 + uVar4 != param_4) {
    return uVar4;
  }
  puVar1 = (ulong *)((long)param_1 + uVar4);
  puVar3 = puVar1;
  if (puVar1 < (ulong *)((long)param_3 + -7)) {
    if (*param_5 == *puVar1) {
      lVar6 = 0;
      puVar3 = (ulong *)(uVar4 + (long)param_1);
      do {
        puVar3 = puVar3 + 1;
        param_5 = param_5 + 1;
        if ((ulong *)((long)param_3 + -7) <= puVar3) goto LAB_1099c1abc;
        lVar6 = lVar6 + 8;
      } while (*param_5 == *puVar3);
      uVar2 = *puVar3 ^ *param_5;
      uVar2 = (uVar2 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar2 & 0x5555555555555555) << 1;
      uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
      uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      uVar2 = lVar6 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3);
    }
    else {
      uVar2 = *puVar1 ^ *param_5;
      uVar2 = (uVar2 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar2 & 0x5555555555555555) << 1;
      uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
      uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      uVar2 = (ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3;
    }
  }
  else {
LAB_1099c1abc:
    if (puVar3 < (ulong *)((long)param_3 + -3)) {
      if ((int)*param_5 == (int)*puVar3) {
        param_5 = (ulong *)((long)param_5 + 4);
        puVar3 = (ulong *)((long)puVar3 + 4);
      }
    }
    if (puVar3 < (ulong *)((long)param_3 + -1)) {
      if ((short)*param_5 == (short)*puVar3) {
        param_5 = (ulong *)((long)param_5 + 2);
        puVar3 = (ulong *)((long)puVar3 + 2);
      }
    }
    if ((puVar3 < param_3) && ((char)*param_5 == (char)*puVar3)) {
      puVar3 = (ulong *)((long)puVar3 + 1);
    }
    uVar2 = (long)puVar3 - (long)puVar1;
  }
  return uVar2 + uVar4;
}



/* Entry: 1099c1b48; end: 1099c1cf7;  */

undefined4 FUN_1099c1b48(long param_1,long param_2,long *param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  lVar3 = *(long *)(param_1 + 0x30);
  iVar1 = *(int *)(param_2 + 8);
  lVar5 = *(long *)(param_1 + 8);
  uVar6 = (ulong)*(uint *)(param_1 + 0x24);
  uVar4 = (uint)((long)param_3 - lVar5);
  if (*(uint *)(param_1 + 0x24) < uVar4) {
    uVar2 = *(uint *)(param_2 + 4);
    lVar7 = *(long *)(param_1 + 0x40);
    do {
      if (param_4 < 7) {
        if (param_4 == 5) {
          uVar8 = *(long *)(lVar5 + uVar6) * -0x30e4432345000000;
          goto LAB_1099c1c38;
        }
        if (param_4 == 6) {
          uVar8 = *(long *)(lVar5 + uVar6) * -0x30e4432340650000;
          goto LAB_1099c1c38;
        }
LAB_1099c1c14:
        uVar8 = (ulong)((uint)(*(int *)(lVar5 + uVar6) * -0x61c8864f) >>
                       (ulong)(0x20U - iVar1 & 0x1f));
      }
      else {
        if (param_4 == 7) {
          uVar8 = *(long *)(lVar5 + uVar6) * -0x30e44323405a9d00;
        }
        else {
          if (param_4 != 8) goto LAB_1099c1c14;
          uVar8 = *(long *)(lVar5 + uVar6) * -0x30e44323485a9b9d;
        }
LAB_1099c1c38:
        uVar8 = uVar8 >> ((ulong)(0x40 - iVar1) & 0x3f);
      }
      *(undefined4 *)(lVar7 + (ulong)((uint)uVar6 & ~(-1 << (ulong)(uVar2 & 0x1f))) * 4) =
           *(undefined4 *)(lVar3 + uVar8 * 4);
      *(uint *)(lVar3 + uVar8 * 4) = (uint)uVar6;
      uVar6 = uVar6 + 1;
    } while (((long)param_3 - lVar5 & 0xffffffffU) != uVar6);
  }
  *(uint *)(param_1 + 0x24) = uVar4;
  if (param_4 < 7) {
    if (param_4 == 5) {
      lVar5 = *param_3;
      uVar6 = 0xbb000000;
    }
    else {
      if (param_4 != 6) {
LAB_1099c1ca0:
        uVar6 = (ulong)((uint)((int)*param_3 * -0x61c8864f) >> (ulong)(-iVar1 & 0x1f));
        goto LAB_1099c1ce8;
      }
      lVar5 = *param_3;
      uVar6 = 0xbf9b0000;
    }
  }
  else if (param_4 == 7) {
    lVar5 = *param_3;
    uVar6 = 0xbfa56300;
  }
  else {
    if (param_4 != 8) goto LAB_1099c1ca0;
    lVar5 = *param_3;
    uVar6 = 0xb7a56463;
  }
  uVar6 = lVar5 * (uVar6 | 0xcf1bbcdc00000000) >> ((ulong)(uint)-iVar1 & 0x3f);
LAB_1099c1ce8:
  return *(undefined4 *)(lVar3 + uVar6 * 4);
}



/* Entry: 1099c1cf8; end: 1099cb85f;  */

long FUN_1099c1cf8(ulong param_1,long *param_2,uint *param_3,ulong *param_4,long param_5)

{
  ulong *puVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulong *puVar7;
  uint uVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  uint uVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  int *piVar16;
  ulong *puVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  ulong *puVar22;
  ulong *puVar23;
  ulong uVar24;
  ulong *puVar25;
  uint uVar26;
  uint uVar27;
  ulong *puVar28;
  long lStack_68;
  
  puVar1 = (ulong *)((long)param_4 + param_5);
  puVar17 = puVar1 + -1;
  uVar2 = *(long *)(param_1 + 8) + (ulong)*(uint *)(param_1 + 0x18);
  uVar3 = *param_3;
  uVar4 = param_3[1];
  puVar15 = param_4;
  if ((int)param_4 == (int)uVar2) {
    puVar15 = (ulong *)((long)param_4 + 1);
  }
  uVar5 = (int)puVar15 - (int)uVar2;
  uVar26 = 0;
  if (uVar4 <= uVar5) {
    uVar26 = uVar4;
  }
  uVar27 = 0;
  if (uVar3 <= uVar5) {
    uVar27 = uVar3;
  }
  if (puVar15 < puVar17) {
    puVar28 = (ulong *)((long)puVar1 - 7);
    puVar25 = (ulong *)((long)puVar1 - 3);
    puVar7 = (ulong *)((long)puVar1 - 1);
    puVar22 = puVar1 + -4;
    do {
      uVar24 = 0;
      puVar23 = (ulong *)((long)puVar15 + 1);
      lVar21 = -(ulong)uVar27;
      if ((uVar27 != 0) && (*(int *)((long)puVar23 - (ulong)uVar27) == *(int *)puVar23)) {
        puVar11 = (ulong *)((long)puVar15 + 5);
        puVar13 = (ulong *)((long)puVar11 + lVar21);
        puVar10 = puVar11;
        if (puVar11 < puVar28) {
          if (*puVar13 == *puVar11) {
            lVar18 = 0;
            puVar10 = (ulong *)((long)puVar15 + 0xdU);
            puVar13 = (ulong *)((long)((long)puVar15 + 0xdU) + lVar21);
            do {
              if (puVar28 <= puVar10) goto LAB_1099c1e0c;
              uVar20 = *puVar13;
              uVar24 = *puVar10;
              lVar18 = lVar18 + 8;
              puVar10 = puVar10 + 1;
              puVar13 = puVar13 + 1;
            } while (uVar20 == uVar24);
            uVar24 = uVar24 ^ uVar20;
            uVar24 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
            uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
            uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
            uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
            uVar24 = lVar18 + ((ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3);
          }
          else {
            uVar24 = *puVar11 ^ *puVar13;
            uVar24 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
            uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
            uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
            uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
            uVar24 = (ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3;
          }
        }
        else {
LAB_1099c1e0c:
          if (puVar10 < puVar25) {
            if ((int)*puVar13 == (int)*puVar10) {
              puVar10 = (ulong *)((long)puVar10 + 4);
              puVar13 = (ulong *)((long)puVar13 + 4);
            }
          }
          if (puVar10 < puVar7) {
            if ((short)*puVar13 == (short)*puVar10) {
              puVar10 = (ulong *)((long)puVar10 + 2);
              puVar13 = (ulong *)((long)puVar13 + 2);
            }
          }
          if ((puVar10 < puVar1) && ((char)*puVar13 == (char)*puVar10)) {
            puVar10 = (ulong *)((long)puVar10 + 1);
          }
          uVar24 = (long)puVar10 - (long)puVar11;
        }
        uVar24 = uVar24 + 4;
      }
      lStack_68 = 999999999;
      uVar19 = param_1;
      FUN_1099cc238(param_1,puVar15,puVar1,&lStack_68);
      uVar20 = uVar19;
      if (uVar19 <= uVar24) {
        uVar20 = uVar24;
      }
      if (uVar20 < 4) {
        puVar15 = (ulong *)((long)puVar15 + ((long)puVar15 - (long)param_4 >> 8) + 1);
      }
      else {
        puVar11 = puVar15;
        if (uVar19 <= uVar24) {
          puVar11 = puVar23;
          lStack_68 = 0;
        }
        while (lVar18 = lStack_68, puVar13 = puVar15, uVar24 = uVar20, puVar23 = puVar11,
              puVar13 < puVar17) {
          puVar11 = (ulong *)((long)puVar13 + 1);
          if (((lVar18 != 0) && (uVar27 != 0)) &&
             (*(int *)puVar11 == *(int *)((long)puVar11 + lVar21))) {
            puVar15 = (ulong *)((long)puVar13 + 5);
            puVar14 = (ulong *)((long)puVar15 + lVar21);
            puVar10 = puVar15;
            if (puVar15 < puVar28) {
              if (*puVar14 == *puVar15) {
                puVar10 = (ulong *)((long)puVar13 + 0xd);
                puVar14 = (ulong *)((long)puVar13 + 0xd + lVar21);
                do {
                  if (puVar28 <= puVar10) goto LAB_1099c1f7c;
                  uVar19 = *puVar14;
                  puVar9 = puVar10 + 1;
                  uVar20 = *puVar10;
                  puVar10 = puVar9;
                  puVar14 = puVar14 + 1;
                } while (uVar19 == uVar20);
                uVar20 = uVar20 ^ uVar19;
                uVar20 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
                uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
                uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
                uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
                puVar10 = (ulong *)((long)puVar9 +
                                   (((ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3) - 8));
                goto LAB_1099c1fe0;
              }
              uVar20 = *puVar15 ^ *puVar14;
              uVar20 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
              uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
              uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
              uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
              uVar20 = (ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3;
            }
            else {
LAB_1099c1f7c:
              if ((puVar10 < puVar25) && ((int)*puVar14 == (int)*puVar10)) {
                puVar10 = (ulong *)((long)puVar10 + 4);
                puVar14 = (ulong *)((long)puVar14 + 4);
              }
              if ((puVar10 < puVar7) && ((short)*puVar14 == (short)*puVar10)) {
                puVar10 = (ulong *)((long)puVar10 + 2);
                puVar14 = (ulong *)((long)puVar14 + 2);
              }
              if ((puVar10 < puVar1) && ((char)*puVar14 == (char)*puVar10)) {
                puVar10 = (ulong *)((long)puVar10 + 1);
              }
LAB_1099c1fe0:
              uVar20 = (long)puVar10 - (long)puVar15;
              if (0xfffffffffffffffb < uVar20) goto LAB_1099c2034;
            }
            if ((int)((int)uVar24 * 3 + ((uint)LZCOUNT((int)lVar18 + 1) ^ 0xffffffe0) + 2) <
                (int)(uVar20 + 4) * 3) {
              lVar18 = 0;
              puVar23 = puVar11;
              uVar24 = uVar20 + 4;
            }
          }
LAB_1099c2034:
          lStack_68 = 999999999;
          uVar20 = param_1;
          FUN_1099cc238(param_1,puVar11,puVar1,&lStack_68);
          if ((uVar20 < 4) ||
             (puVar15 = puVar11,
             (int)((int)uVar20 * 4 - ((uint)LZCOUNT((int)lStack_68 + 1) ^ 0x1f)) <=
             (int)(((uint)LZCOUNT((int)lVar18 + 1) ^ 0xffffffe0) + (int)uVar24 * 4 + 5))) {
            if (puVar17 <= puVar11) break;
            puVar11 = (ulong *)((long)puVar13 + 2);
            if (((lVar18 != 0) && (uVar27 != 0)) &&
               (*(int *)puVar11 == *(int *)((long)puVar11 + lVar21))) {
              puVar15 = (ulong *)((long)puVar13 + 6);
              puVar14 = (ulong *)((long)puVar15 + lVar21);
              puVar10 = puVar15;
              if (puVar15 < puVar28) {
                if (*puVar14 == *puVar15) {
                  puVar10 = (ulong *)((long)puVar13 + 0xe);
                  puVar14 = (ulong *)((long)puVar13 + 0xe + lVar21);
                  do {
                    if (puVar28 <= puVar10) goto LAB_1099c211c;
                    uVar19 = *puVar14;
                    puVar13 = puVar10 + 1;
                    uVar20 = *puVar10;
                    puVar10 = puVar13;
                    puVar14 = puVar14 + 1;
                  } while (uVar19 == uVar20);
                  uVar20 = uVar20 ^ uVar19;
                  uVar20 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
                  uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
                  uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
                  uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10
                  ;
                  puVar10 = (ulong *)((long)puVar13 +
                                     (((ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3) - 8));
                  goto LAB_1099c2180;
                }
                uVar20 = *puVar15 ^ *puVar14;
                uVar20 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
                uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
                uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
                uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
                uVar20 = (ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3;
              }
              else {
LAB_1099c211c:
                if ((puVar10 < puVar25) && ((int)*puVar14 == (int)*puVar10)) {
                  puVar10 = (ulong *)((long)puVar10 + 4);
                  puVar14 = (ulong *)((long)puVar14 + 4);
                }
                if ((puVar10 < puVar7) && ((short)*puVar14 == (short)*puVar10)) {
                  puVar10 = (ulong *)((long)puVar10 + 2);
                  puVar14 = (ulong *)((long)puVar14 + 2);
                }
                if ((puVar10 < puVar1) && ((char)*puVar14 == (char)*puVar10)) {
                  puVar10 = (ulong *)((long)puVar10 + 1);
                }
LAB_1099c2180:
                uVar20 = (long)puVar10 - (long)puVar15;
                if (0xfffffffffffffffb < uVar20) goto LAB_1099c21cc;
              }
              if ((int)(((uint)LZCOUNT((int)lVar18 + 1) ^ 0xffffffe0) + (int)uVar24 * 4 + 2) <
                  (int)(uVar20 + 4) * 4) {
                lVar18 = 0;
                puVar23 = puVar11;
                uVar24 = uVar20 + 4;
              }
            }
LAB_1099c21cc:
            lStack_68 = 999999999;
            uVar20 = param_1;
            FUN_1099cc238(param_1,puVar11,puVar1,&lStack_68);
            if ((uVar20 < 4) ||
               (puVar15 = puVar11,
               (int)((int)uVar20 * 4 - ((uint)LZCOUNT((int)lStack_68 + 1) ^ 0x1f)) <=
               (int)(((uint)LZCOUNT((int)lVar18 + 1) ^ 0xffffffe0) + (int)uVar24 * 4 + 8))) break;
          }
        }
        if (lVar18 == 0) {
          iVar6 = 1;
        }
        else {
          if ((param_4 < puVar23) && (uVar2 < (ulong)((long)puVar23 + (2 - lVar18)))) {
            puVar15 = puVar23;
            do {
              puVar11 = (ulong *)((long)puVar15 + -1);
              puVar23 = puVar15;
              if ((*(char *)puVar11 != *(char *)((long)puVar15 + (1 - lVar18))) ||
                 (uVar24 = uVar24 + 1, puVar23 = puVar11, puVar11 <= param_4)) break;
              uVar20 = (long)puVar15 + (1 - lVar18);
              puVar15 = puVar11;
            } while (uVar2 < uVar20);
          }
          iVar6 = (int)lVar18 + 1;
          uVar26 = uVar27;
          uVar27 = (int)lVar18 - 2;
        }
        uVar20 = (long)puVar23 - (long)param_4;
        puVar15 = (ulong *)param_2[3];
        if (puVar22 < puVar23) {
          puVar11 = puVar15;
          puVar13 = param_4;
          if (param_4 <= puVar22) {
            puVar11 = (ulong *)((long)puVar15 + ((long)puVar22 - (long)param_4));
            uVar19 = *param_4;
            puVar15[1] = param_4[1];
            *puVar15 = uVar19;
            uVar19 = param_4[2];
            puVar15[3] = param_4[3];
            puVar15[2] = uVar19;
            puVar13 = puVar22;
            if (0x20 < (long)puVar22 - (long)param_4) {
              puVar15 = puVar15 + 4;
              puVar10 = param_4 + 6;
              do {
                uVar19 = puVar10[-2];
                puVar15[1] = puVar10[-1];
                *puVar15 = uVar19;
                uVar19 = *puVar10;
                puVar15[3] = puVar10[1];
                puVar15[2] = uVar19;
                puVar15 = puVar15 + 4;
                puVar10 = puVar10 + 4;
              } while (puVar15 < puVar11);
            }
          }
          if (puVar13 < puVar23) {
            do {
              puVar15 = (ulong *)((long)puVar13 + 1);
              *(char *)puVar11 = (char)*puVar13;
              puVar11 = (ulong *)((long)puVar11 + 1);
              puVar13 = puVar15;
            } while (puVar15 != puVar23);
          }
LAB_1099c23c0:
          param_2[3] = param_2[3] + uVar20;
          piVar16 = (int *)param_2[1];
          if (0xffff < uVar20) {
            *(undefined4 *)(param_2 + 9) = 1;
            *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar16 - *param_2) >> 3);
          }
        }
        else {
          uVar19 = *param_4;
          puVar15[1] = param_4[1];
          *puVar15 = uVar19;
          lVar21 = param_2[3];
          if (0x10 < uVar20) {
            uVar19 = param_4[2];
            *(ulong *)(lVar21 + 0x18) = param_4[3];
            *(ulong *)(lVar21 + 0x10) = uVar19;
            uVar19 = param_4[4];
            *(ulong *)(lVar21 + 0x28) = param_4[5];
            *(ulong *)(lVar21 + 0x20) = uVar19;
            if (0x30 < (long)uVar20) {
              puVar15 = (ulong *)(lVar21 + 0x30);
              puVar11 = param_4 + 8;
              do {
                uVar19 = puVar11[-2];
                puVar15[1] = puVar11[-1];
                *puVar15 = uVar19;
                uVar19 = *puVar11;
                puVar15[3] = puVar11[1];
                puVar15[2] = uVar19;
                puVar15 = puVar15 + 4;
                puVar11 = puVar11 + 4;
              } while (puVar15 < (ulong *)(lVar21 + uVar20));
            }
            goto LAB_1099c23c0;
          }
          param_2[3] = lVar21 + uVar20;
          piVar16 = (int *)param_2[1];
        }
        *(short *)(piVar16 + 1) = (short)uVar20;
        *piVar16 = iVar6;
        if (0xffff < uVar24 - 3) {
          *(undefined4 *)(param_2 + 9) = 2;
          *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar16 - *param_2) >> 3);
        }
        *(short *)((long)piVar16 + 6) = (short)(uVar24 - 3);
        piVar16 = piVar16 + 2;
        param_2[1] = (long)piVar16;
        param_4 = (ulong *)((long)puVar23 + uVar24);
        puVar15 = param_4;
        if ((uVar26 != 0) && (param_4 <= puVar17)) {
          while (uVar12 = uVar27, uVar8 = uVar26, puVar15 = param_4, uVar27 = uVar12, uVar26 = uVar8
                , (int)*param_4 == *(int *)((long)param_4 - (ulong)uVar8)) {
            puVar15 = (ulong *)((long)param_4 + 4);
            puVar23 = (ulong *)((long)puVar15 + -(ulong)uVar8);
            puVar11 = puVar15;
            if (puVar15 < puVar28) {
              if (*puVar23 == *puVar15) {
                lVar21 = 0;
                puVar11 = (ulong *)((long)param_4 + 0xc);
                puVar23 = (ulong *)((long)param_4 + 0xc + -(ulong)uVar8);
                do {
                  if (puVar28 <= puVar11) goto LAB_1099c24cc;
                  uVar20 = *puVar23;
                  uVar24 = *puVar11;
                  lVar21 = lVar21 + 8;
                  puVar11 = puVar11 + 1;
                  puVar23 = puVar23 + 1;
                } while (uVar20 == uVar24);
                uVar24 = uVar24 ^ uVar20;
                uVar24 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
                uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
                uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
                uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
                uVar24 = lVar21 + ((ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3);
              }
              else {
                uVar24 = *puVar15 ^ *puVar23;
                uVar24 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
                uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
                uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
                uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
                uVar24 = (ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3;
              }
            }
            else {
LAB_1099c24cc:
              if (puVar11 < puVar25) {
                if ((int)*puVar23 == (int)*puVar11) {
                  puVar11 = (ulong *)((long)puVar11 + 4);
                  puVar23 = (ulong *)((long)puVar23 + 4);
                }
              }
              if (puVar11 < puVar7) {
                if ((short)*puVar23 == (short)*puVar11) {
                  puVar11 = (ulong *)((long)puVar11 + 2);
                  puVar23 = (ulong *)((long)puVar23 + 2);
                }
              }
              if ((puVar11 < puVar1) && ((char)*puVar23 == (char)*puVar11)) {
                puVar11 = (ulong *)((long)puVar11 + 1);
              }
              uVar24 = (long)puVar11 - (long)puVar15;
            }
            if (param_4 <= puVar22) {
              puVar15 = (ulong *)param_2[3];
              uVar20 = *param_4;
              puVar15[1] = param_4[1];
              *puVar15 = uVar20;
              piVar16 = (int *)param_2[1];
            }
            *(undefined2 *)(piVar16 + 1) = 0;
            *piVar16 = 1;
            if (0xffff < uVar24 + 1) {
              *(undefined4 *)(param_2 + 9) = 2;
              *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar16 - *param_2) >> 3);
            }
            *(short *)((long)piVar16 + 6) = (short)(uVar24 + 1);
            piVar16 = piVar16 + 2;
            param_2[1] = (long)piVar16;
            param_4 = (ulong *)((long)param_4 + uVar24 + 4);
            puVar15 = param_4;
            uVar27 = uVar8;
            uVar26 = uVar12;
            if ((uVar12 == 0) || (puVar17 < param_4)) break;
          }
        }
      }
    } while (puVar15 < puVar17);
  }
  if (uVar4 <= uVar5) {
    uVar4 = 0;
  }
  if (uVar3 <= uVar5) {
    uVar3 = uVar4;
  }
  uVar4 = uVar3;
  if (uVar27 != 0) {
    uVar4 = uVar27;
  }
  if (uVar26 != 0) {
    uVar3 = uVar26;
  }
  *param_3 = uVar4;
  param_3[1] = uVar3;
  return (long)puVar1 - (long)param_4;
}



/* Entry: 1099cb860; end: 1099cb93f;  */

/* WARNING: Removing unreachable block (ram,0x0001099cc83c) */
/* WARNING: Removing unreachable block (ram,0x0001099cc848) */
/* WARNING: Removing unreachable block (ram,0x0001099cc8c8) */
/* WARNING: Removing unreachable block (ram,0x0001099cc8cc) */
/* WARNING: Removing unreachable block (ram,0x0001099cc850) */
/* WARNING: Removing unreachable block (ram,0x0001099cc8c0) */
/* WARNING: Removing unreachable block (ram,0x0001099ccb3c) */
/* WARNING: Removing unreachable block (ram,0x0001099ccb48) */
/* WARNING: Removing unreachable block (ram,0x0001099ccb9c) */
/* WARNING: Removing unreachable block (ram,0x0001099cd000) */

ulong FUN_1099cb860(long param_1,long *param_2,ulong *param_3,ulong *param_4)

{
  long lVar1;
  ulong *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  uint *puVar11;
  long lVar12;
  long lVar13;
  uint *puVar14;
  uint uVar15;
  long *plVar16;
  long lVar17;
  ulong *puVar18;
  ulong uVar19;
  ulong *puVar20;
  uint *puVar21;
  ulong *puVar22;
  int iVar23;
  uint uVar24;
  long lVar25;
  ulong uVar26;
  ulong uVar27;
  long lVar28;
  ulong uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  ulong uVar37;
  ulong uVar38;
  ulong uVar39;
  long lVar40;
  uint uStack_70;
  uint auStack_6c [3];
  
  if (*(int *)(param_1 + 200) - 6U < 2) {
    if (param_2 < (long *)(*(long *)(param_1 + 8) + (ulong)*(uint *)(param_1 + 0x24))) {
      return 0;
    }
    iVar23 = 6;
  }
  else if (*(int *)(param_1 + 200) == 5) {
    if (param_2 < (long *)(*(long *)(param_1 + 8) + (ulong)*(uint *)(param_1 + 0x24))) {
      return 0;
    }
    iVar23 = 5;
  }
  else {
    if (param_2 < (long *)(*(long *)(param_1 + 8) + (ulong)*(uint *)(param_1 + 0x24))) {
      return 0;
    }
    iVar23 = 4;
  }
  func_0x0001099cc50c(param_1,param_2,iVar23);
  lVar13 = *(long *)(param_1 + 0x30);
  if (iVar23 == 5) {
    lVar17 = *param_2;
    uVar19 = 0xbb000000;
LAB_1099cc638:
    uVar19 = lVar17 * (uVar19 | 0xcf1bbcdc00000000) >>
             ((ulong)(uint)-*(int *)(param_1 + 0xc0) & 0x3f);
  }
  else {
    if (iVar23 == 6) {
      lVar17 = *param_2;
      uVar19 = 0xbf9b0000;
      goto LAB_1099cc638;
    }
    uVar19 = (ulong)((uint)((int)*param_2 * -0x61c8864f) >>
                    (ulong)(-*(int *)(param_1 + 0xc0) & 0x1f));
  }
  lVar17 = *(long *)(param_1 + 8);
  uVar9 = (int)param_2 - (int)lVar17;
  uVar5 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
  uVar3 = uVar9 - uVar5;
  if (uVar9 - *(uint *)(param_1 + 0x1c) <= uVar5 || *(int *)(param_1 + 0x20) != 0) {
    uVar3 = *(uint *)(param_1 + 0x1c);
  }
  lVar28 = *(long *)(param_1 + 0x40);
  uVar8 = ~(-1 << (ulong)(*(int *)(param_1 + 0xbc) - 1U & 0x1f));
  uVar5 = 0;
  if (uVar8 <= uVar9) {
    uVar5 = uVar9 - uVar8;
  }
  uVar33 = uVar5;
  if (uVar5 <= uVar3) {
    uVar33 = uVar3;
  }
  uVar6 = 1 << (ulong)(*(uint *)(param_1 + 0xc4) & 0x1f);
  uVar4 = *(uint *)(lVar13 + uVar19 * 4);
  if (uVar33 < uVar4) {
    uVar31 = uVar6;
    uVar15 = 0;
    do {
      uVar24 = uVar4;
      puVar14 = (uint *)(lVar28 + (ulong)((uVar24 & uVar8) << 1) * 4);
      if (puVar14[1] != 1 || uVar31 < 2) {
        if (puVar14[1] == 1) {
          puVar14[0] = 0;
          puVar14[1] = 0;
        }
        uVar24 = uVar15;
        if (uVar15 == 0) goto LAB_1099ccaa0;
        break;
      }
      puVar14[1] = uVar15;
      uVar31 = uVar31 - 1;
      uVar15 = uVar24;
      uVar4 = *puVar14;
    } while (uVar33 < *puVar14);
    lVar40 = *(long *)(param_1 + 0x10);
    do {
      uVar15 = *(uint *)(lVar28 + 4 + (ulong)((uVar24 & uVar8) << 1) * 4);
      uVar7 = -1 << (ulong)(*(int *)(param_1 + 0xbc) - 1U & 0x1f);
      uVar4 = *(uint *)(param_1 + 0x18);
      lVar1 = lVar40;
      if (uVar4 <= uVar24) {
        lVar1 = lVar17;
      }
      puVar14 = (uint *)(lVar28 + (ulong)((uVar24 & (uVar7 ^ 0xffffffff)) << 1) * 4);
      puVar11 = puVar14 + 1;
      uVar30 = *puVar14;
      puVar2 = (ulong *)(lVar40 + (ulong)uVar4);
      if (uVar4 <= uVar24) {
        puVar2 = param_3;
      }
      uVar32 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
      uVar4 = uVar24 - uVar32;
      if (uVar24 - *(uint *)(param_1 + 0x1c) <= uVar32) {
        uVar4 = *(uint *)(param_1 + 0x1c);
      }
      if ((uVar31 != 0) && (uVar4 < uVar30)) {
        uVar38 = 0;
        uVar37 = 0;
        lVar12 = lVar1 + (ulong)uVar24 + 8;
        uVar32 = uVar31;
        do {
          uVar39 = uVar38;
          if (uVar37 <= uVar38) {
            uVar39 = uVar37;
          }
          uVar29 = (ulong)uVar30;
          puVar18 = (ulong *)(lVar1 + (ulong)uVar24 + uVar39);
          puVar22 = (ulong *)(lVar17 + uVar29 + uVar39);
          puVar20 = puVar18;
          if (puVar18 < (ulong *)((long)puVar2 - 7U)) {
            if (*puVar22 == *puVar18) {
              lVar25 = 0;
              do {
                puVar22 = (ulong *)(lVar12 + uVar39 + lVar25);
                if ((ulong *)((long)puVar2 - 7U) <= puVar22) {
                  puVar22 = (ulong *)(lVar17 + lVar25 + uVar39 + uVar29 + 8);
                  puVar20 = (ulong *)(lVar12 + uVar39 + lVar25);
                  goto LAB_1099cc978;
                }
                uVar27 = *(ulong *)(lVar17 + uVar39 + uVar29 + 8 + lVar25);
                uVar26 = *puVar22;
                lVar25 = lVar25 + 8;
              } while (uVar27 == uVar26);
              uVar26 = uVar26 ^ uVar27;
              uVar26 = (uVar26 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar26 & 0x5555555555555555) << 1;
              uVar26 = (uVar26 & 0xcccccccccccccccc) >> 2 | (uVar26 & 0x3333333333333333) << 2;
              uVar26 = (uVar26 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar26 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar26 = (uVar26 & 0xff00ff00ff00ff00) >> 8 | (uVar26 & 0xff00ff00ff00ff) << 8;
              uVar26 = (uVar26 & 0xffff0000ffff0000) >> 0x10 | (uVar26 & 0xffff0000ffff) << 0x10;
              uVar26 = lVar25 + ((ulong)LZCOUNT(uVar26 >> 0x20 | uVar26 << 0x20) >> 3);
            }
            else {
              uVar26 = *puVar18 ^ *puVar22;
              uVar26 = (uVar26 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar26 & 0x5555555555555555) << 1;
              uVar26 = (uVar26 & 0xcccccccccccccccc) >> 2 | (uVar26 & 0x3333333333333333) << 2;
              uVar26 = (uVar26 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar26 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar26 = (uVar26 & 0xff00ff00ff00ff00) >> 8 | (uVar26 & 0xff00ff00ff00ff) << 8;
              uVar26 = (uVar26 & 0xffff0000ffff0000) >> 0x10 | (uVar26 & 0xffff0000ffff) << 0x10;
              uVar26 = (ulong)LZCOUNT(uVar26 >> 0x20 | uVar26 << 0x20) >> 3;
            }
          }
          else {
LAB_1099cc978:
            if (puVar20 < (ulong *)((long)puVar2 - 3U)) {
              if ((int)*puVar22 == (int)*puVar20) {
                puVar20 = (ulong *)((long)puVar20 + 4);
                puVar22 = (ulong *)((long)puVar22 + 4);
              }
            }
            if (puVar20 < (ulong *)((long)puVar2 - 1U)) {
              if ((short)*puVar22 == (short)*puVar20) {
                puVar20 = (ulong *)((long)puVar20 + 2);
                puVar22 = (ulong *)((long)puVar22 + 2);
              }
            }
            if ((puVar20 < puVar2) && ((byte)*puVar22 == (byte)*puVar20)) {
              puVar20 = (ulong *)((long)puVar20 + 1);
            }
            uVar26 = (long)puVar20 - (long)puVar18;
          }
          uVar26 = uVar26 + uVar39;
          puVar22 = (ulong *)(lVar1 + (ulong)uVar24 + uVar26);
          if (puVar22 == puVar2) break;
          puVar21 = (uint *)(lVar28 + (ulong)((uVar30 & ~uVar7) << 1) * 4);
          if (*(byte *)(lVar17 + uVar29 + uVar26) < (byte)*puVar22) {
            *puVar14 = uVar30;
            if (uVar30 <= uVar33) {
              puVar14 = auStack_6c;
              break;
            }
            puVar14 = puVar21 + 1;
            puVar21 = puVar14;
            uVar38 = uVar26;
          }
          else {
            *puVar11 = uVar30;
            puVar11 = puVar21;
            uVar37 = uVar26;
            if (uVar30 <= uVar33) {
              puVar11 = auStack_6c;
              break;
            }
          }
          uVar32 = uVar32 - 1;
          if ((uVar32 == 0) || (uVar30 = *puVar21, uVar30 <= uVar4)) break;
        } while( true );
      }
      *puVar11 = 0;
      *puVar14 = 0;
      uVar31 = uVar31 + 1;
      uVar24 = uVar15;
    } while (uVar15 != 0);
  }
LAB_1099ccaa0:
  puVar14 = (uint *)(lVar28 + (ulong)((uVar8 & uVar9) << 1) * 4);
  puVar11 = puVar14 + 1;
  iVar35 = uVar9 + 9;
  uVar33 = *(uint *)(lVar13 + uVar19 * 4);
  *(uint *)(lVar13 + uVar19 * 4) = uVar9;
  iVar36 = uVar6 - 1;
  if (uVar3 < uVar33) {
    uVar19 = 0;
    uVar37 = 0;
    uVar38 = 0;
    iVar34 = iVar35;
    do {
      uVar39 = uVar37;
      if (uVar38 <= uVar37) {
        uVar39 = uVar38;
      }
      puVar2 = (ulong *)((long)param_2 + uVar39);
      lVar13 = lVar17 + (ulong)uVar33;
      puVar22 = (ulong *)(lVar13 + uVar39);
      puVar18 = puVar2;
      if (puVar2 < (ulong *)((long)param_3 + -7)) {
        if (*puVar22 == *puVar2) {
          lVar40 = 0;
          puVar18 = (ulong *)((long)param_2 + uVar39 + 8);
          puVar22 = (ulong *)(lVar17 + 8 + uVar39 + uVar33);
          do {
            if ((ulong *)((long)param_3 + -7) <= puVar18) goto LAB_1099ccc10;
            uVar26 = *puVar22;
            uVar29 = *puVar18;
            lVar40 = lVar40 + 8;
            puVar18 = puVar18 + 1;
            puVar22 = puVar22 + 1;
          } while (uVar26 == uVar29);
          uVar29 = uVar29 ^ uVar26;
          uVar29 = (uVar29 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar29 & 0x5555555555555555) << 1;
          uVar29 = (uVar29 & 0xcccccccccccccccc) >> 2 | (uVar29 & 0x3333333333333333) << 2;
          uVar29 = (uVar29 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar29 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar29 = (uVar29 & 0xff00ff00ff00ff00) >> 8 | (uVar29 & 0xff00ff00ff00ff) << 8;
          uVar29 = (uVar29 & 0xffff0000ffff0000) >> 0x10 | (uVar29 & 0xffff0000ffff) << 0x10;
          uVar29 = lVar40 + ((ulong)LZCOUNT(uVar29 >> 0x20 | uVar29 << 0x20) >> 3);
        }
        else {
          uVar29 = *puVar2 ^ *puVar22;
          uVar29 = (uVar29 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar29 & 0x5555555555555555) << 1;
          uVar29 = (uVar29 & 0xcccccccccccccccc) >> 2 | (uVar29 & 0x3333333333333333) << 2;
          uVar29 = (uVar29 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar29 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar29 = (uVar29 & 0xff00ff00ff00ff00) >> 8 | (uVar29 & 0xff00ff00ff00ff) << 8;
          uVar29 = (uVar29 & 0xffff0000ffff0000) >> 0x10 | (uVar29 & 0xffff0000ffff) << 0x10;
          uVar29 = (ulong)LZCOUNT(uVar29 >> 0x20 | uVar29 << 0x20) >> 3;
        }
      }
      else {
LAB_1099ccc10:
        if (puVar18 < (ulong *)((long)param_3 + -3)) {
          if ((int)*puVar22 == (int)*puVar18) {
            puVar18 = (ulong *)((long)puVar18 + 4);
            puVar22 = (ulong *)((long)puVar22 + 4);
          }
        }
        if (puVar18 < (ulong *)((long)param_3 + -1)) {
          if ((short)*puVar22 == (short)*puVar18) {
            puVar18 = (ulong *)((long)puVar18 + 2);
            puVar22 = (ulong *)((long)puVar22 + 2);
          }
        }
        if ((puVar18 < param_3) && ((byte)*puVar22 == (byte)*puVar18)) {
          puVar18 = (ulong *)((long)puVar18 + 1);
        }
        uVar29 = (long)puVar18 - (long)puVar2;
      }
      uVar29 = uVar29 + uVar39;
      iVar35 = iVar34;
      if (uVar19 < uVar29) {
        iVar35 = uVar33 + (int)uVar29;
        if (uVar29 <= iVar34 - uVar33) {
          iVar35 = iVar34;
        }
        if ((int)(((uint)LZCOUNT((uVar9 + 1) - uVar33) ^ 0x1f) -
                 ((uint)LZCOUNT((int)*param_4 + 1) ^ 0x1f)) < ((int)uVar29 - (int)uVar19) * 4) {
          *param_4 = (ulong)((uVar9 + 2) - uVar33);
          uVar19 = uVar29;
        }
        if ((ulong *)((long)param_2 + uVar29) == param_3) {
          iVar36 = 0;
          goto LAB_1099ccd9c;
        }
      }
      puVar21 = (uint *)(lVar28 + (ulong)((uVar33 & uVar8) << 1) * 4);
      if (*(byte *)(lVar13 + uVar29) < *(byte *)((long)param_2 + uVar29)) {
        *puVar14 = uVar33;
        if (uVar33 <= uVar5) {
          puVar14 = &uStack_70;
          goto LAB_1099ccd9c;
        }
        puVar14 = puVar21 + 1;
        uVar37 = uVar29;
        puVar21 = puVar14;
        uVar29 = uVar38;
      }
      else {
        *puVar11 = uVar33;
        puVar11 = puVar21;
        if (uVar33 <= uVar5) {
          puVar11 = &uStack_70;
          goto LAB_1099ccd9c;
        }
      }
      bVar10 = iVar36 == 0;
      iVar36 = iVar36 + -1;
      if ((bVar10) || (uVar33 = *puVar21, uVar38 = uVar29, iVar34 = iVar35, uVar33 <= uVar3))
      goto LAB_1099ccd9c;
    } while( true );
  }
  uVar19 = 0;
LAB_1099ccd9c:
  *puVar11 = 0;
  *puVar14 = 0;
  if (iVar36 == 0) goto LAB_1099ccfcc;
  plVar16 = *(long **)(param_1 + 0xb0);
  if (iVar23 == 5) {
    lVar13 = *param_2;
    uVar37 = 0xbb000000;
LAB_1099ccde8:
    uVar37 = lVar13 * (uVar37 | 0xcf1bbcdc00000000) >> ((ulong)(uint)-(int)plVar16[0x18] & 0x3f);
  }
  else {
    if (iVar23 == 6) {
      lVar13 = *param_2;
      uVar37 = 0xbf9b0000;
      goto LAB_1099ccde8;
    }
    uVar37 = (ulong)((uint)((int)*param_2 * -0x61c8864f) >> (ulong)(-(int)plVar16[0x18] & 0x1f));
  }
  lVar13 = *plVar16;
  lVar28 = plVar16[1];
  uVar38 = lVar13 - lVar28;
  uVar5 = *(uint *)((long)plVar16 + 0x1c);
  uVar8 = ~(-1 << (ulong)(*(int *)((long)plVar16 + 0xbc) - 1U & 0x1f));
  iVar23 = (int)uVar38;
  uVar3 = iVar23 - uVar8;
  if (iVar23 - uVar5 <= uVar8) {
    uVar3 = uVar5;
  }
  uVar33 = *(uint *)(plVar16[6] + uVar37 * 4);
  if (uVar5 < uVar33) {
    uVar37 = 0;
    uVar39 = 0;
    uVar4 = *(uint *)(param_1 + 0x18);
    uVar6 = *(int *)(param_1 + 0x1c) - iVar23;
    lVar40 = plVar16[8];
    do {
      iVar36 = iVar36 + -1;
      uVar29 = uVar39;
      if (uVar37 <= uVar39) {
        uVar29 = uVar37;
      }
      lVar1 = lVar28 + (ulong)uVar33;
      lVar12 = (long)param_2 + uVar29;
      func_0x0001099cc318(lVar12,lVar1 + uVar29,param_3,lVar13,lVar17 + (ulong)uVar4);
      uVar29 = lVar12 + uVar29;
      if ((uVar38 & 0xffffffff) <= uVar29 + uVar33) {
        lVar1 = lVar17 + (ulong)uVar6 + (ulong)uVar33;
      }
      if (uVar19 < uVar29) {
        iVar23 = uVar33 + uVar6;
        if ((int)(((uint)LZCOUNT((uVar9 + 1) - iVar23) ^ 0x1f) -
                 ((uint)LZCOUNT((int)*param_4 + 1) ^ 0x1f)) < ((int)uVar29 - (int)uVar19) * 4) {
          *param_4 = (ulong)((uVar9 + 2) - iVar23);
          uVar19 = uVar29;
        }
        if ((ulong *)((long)param_2 + uVar29) == param_3) break;
      }
      puVar14 = (uint *)(lVar40 + (ulong)((uVar33 & uVar8) << 1) * 4);
      if (*(byte *)(lVar1 + uVar29) < *(byte *)((long)param_2 + uVar29)) {
        if (uVar33 <= uVar3) break;
        puVar14 = puVar14 + 1;
        uVar39 = uVar29;
      }
      else {
        uVar37 = uVar29;
        if (uVar33 <= uVar3) break;
      }
      if ((iVar36 == 0) || (uVar33 = *puVar14, uVar33 <= uVar5)) break;
    } while( true );
  }
LAB_1099ccfcc:
  *(int *)(param_1 + 0x24) = iVar35 + -8;
  return uVar19;
}



/* Entry: 1099cb940; end: 1099cc237;  */

int * FUN_1099cb940(ulong param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  int *piVar8;
  ulong uVar9;
  undefined8 *puVar10;
  uint uVar11;
  int *piVar12;
  ulong *puVar13;
  ulong *puVar14;
  long lVar15;
  uint uVar16;
  int *piVar17;
  long lVar18;
  int iVar19;
  
  iVar19 = (int)param_2;
  if (*(int *)(param_1 + 200) - 6U < 2) {
    lVar15 = *(long *)(param_1 + 0x40);
    uVar4 = 1 << (ulong)(*(uint *)(param_1 + 0xbc) & 0x1f);
    lVar18 = *(long *)(param_1 + 8);
    uVar6 = iVar19 - (int)lVar18;
    uVar5 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
    uVar3 = *(uint *)(param_1 + 0x18);
    uVar1 = uVar6 - uVar5;
    if (uVar6 - *(uint *)(param_1 + 0x1c) <= uVar5 || *(int *)(param_1 + 0x20) != 0) {
      uVar1 = *(uint *)(param_1 + 0x1c);
    }
    uVar5 = 0;
    if (uVar4 <= uVar6) {
      uVar5 = uVar6 - uVar4;
    }
    iVar19 = 1 << (ulong)(*(uint *)(param_1 + 0xc4) & 0x1f);
    uVar9 = param_1;
    FUN_1099c1b48(param_1,(uint *)(param_1 + 0xb8),param_2,6);
    if (uVar1 < (uint)uVar9) {
      piVar17 = (int *)0x3;
      do {
        puVar13 = (ulong *)(lVar18 + (uVar9 & 0xffffffff));
        uVar11 = (uint)uVar9;
        if (*(char *)((long)puVar13 + (long)piVar17) == *(char *)((long)param_2 + (long)piVar17)) {
          puVar14 = param_2;
          if (param_2 < (ulong *)((long)param_3 + -7)) {
            if (*puVar13 == *param_2) {
              lVar7 = 0;
              puVar13 = (ulong *)(lVar18 + 8 + (uVar9 & 0xffffffff));
              do {
                puVar14 = puVar14 + 1;
                if ((ulong *)((long)param_3 + -7) <= puVar14) goto LAB_1099cba88;
                uVar9 = *puVar13;
                lVar7 = lVar7 + 8;
                puVar13 = puVar13 + 1;
              } while (uVar9 == *puVar14);
              uVar9 = *puVar14 ^ uVar9;
              uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
              uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
              uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
              uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
              piVar12 = (int *)(lVar7 + ((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3));
            }
            else {
              uVar9 = *param_2 ^ *puVar13;
              uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
              uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
              uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
              uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
              piVar12 = (int *)((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3);
            }
          }
          else {
LAB_1099cba88:
            if (puVar14 < (ulong *)((long)param_3 + -3)) {
              if ((int)*puVar13 == (int)*puVar14) {
                puVar13 = (ulong *)((long)puVar13 + 4);
                puVar14 = (ulong *)((long)puVar14 + 4);
              }
            }
            if (puVar14 < (ulong *)((long)param_3 + -1)) {
              if ((short)*puVar13 == (short)*puVar14) {
                puVar13 = (ulong *)((long)puVar13 + 2);
                puVar14 = (ulong *)((long)puVar14 + 2);
              }
            }
            if ((puVar14 < param_3) && ((char)*puVar13 == (char)*puVar14)) {
              puVar14 = (ulong *)((long)puVar14 + 1);
            }
            piVar12 = (int *)((long)puVar14 - (long)param_2);
          }
          if ((piVar17 < piVar12) &&
             (*param_4 = (ulong)((uVar6 + 2) - uVar11), piVar17 = piVar12,
             (ulong *)((long)param_2 + (long)piVar12) == param_3)) goto LAB_1099cbd24;
        }
        piVar12 = piVar17;
        if ((uVar11 <= uVar5) ||
           ((iVar19 = iVar19 + -1, iVar19 == 0 ||
            (uVar11 = *(uint *)(lVar15 + (ulong)(uVar11 & uVar4 - 1) * 4), uVar9 = (ulong)uVar11,
            piVar17 = piVar12, uVar11 <= uVar1)))) goto LAB_1099cbd24;
      } while( true );
    }
    piVar12 = (int *)0x3;
LAB_1099cbd24:
    puVar10 = *(undefined8 **)(param_1 + 0xb0);
    uVar4 = 1 << (ulong)(*(uint *)((long)puVar10 + 0xbc) & 0x1f);
    uVar2 = *puVar10;
    lVar15 = puVar10[1];
    uVar5 = (int)uVar2 - (int)lVar15;
    uVar1 = 0;
    if (uVar4 <= uVar5) {
      uVar1 = uVar5 - uVar4;
    }
    if (iVar19 != 0) {
      uVar11 = *(uint *)(puVar10 + 3);
      uVar9 = *param_2;
      uVar16 = *(uint *)(puVar10[6] +
                        (uVar9 * -0x30e4432340650000 >>
                        ((ulong)(uint)-*(int *)(puVar10 + 0x18) & 0x3f)) * 4);
      if (uVar11 < uVar16) {
        lVar7 = puVar10[8];
        while( true ) {
          iVar19 = iVar19 + -1;
          piVar17 = (int *)(lVar15 + (ulong)uVar16);
          if (*piVar17 == (int)uVar9) {
            piVar8 = (int *)((long)param_2 + 4);
            FUN_1099cc318(piVar8,piVar17 + 1,param_3,uVar2,lVar18 + (ulong)uVar3);
            piVar8 = piVar8 + 1;
            if ((piVar12 < piVar8) &&
               (*param_4 = (ulong)((uVar6 + uVar5 + 2) - (uVar3 + uVar16)), piVar12 = piVar8,
               (ulong *)((long)param_2 + (long)piVar8) == param_3)) {
              return piVar8;
            }
          }
          if (uVar16 <= uVar1) {
            return piVar12;
          }
          if (iVar19 == 0) break;
          uVar16 = *(uint *)(lVar7 + (ulong)(uVar16 & uVar4 - 1) * 4);
          if (uVar16 <= uVar11) {
            return piVar12;
          }
        }
        return piVar12;
      }
    }
  }
  else if (*(int *)(param_1 + 200) == 5) {
    lVar18 = *(long *)(param_1 + 0x40);
    uVar4 = 1 << (ulong)(*(uint *)(param_1 + 0xbc) & 0x1f);
    lVar15 = *(long *)(param_1 + 8);
    uVar6 = iVar19 - (int)lVar15;
    uVar5 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
    uVar3 = *(uint *)(param_1 + 0x18);
    uVar1 = uVar6 - uVar5;
    if (uVar6 - *(uint *)(param_1 + 0x1c) <= uVar5 || *(int *)(param_1 + 0x20) != 0) {
      uVar1 = *(uint *)(param_1 + 0x1c);
    }
    uVar5 = 0;
    if (uVar4 <= uVar6) {
      uVar5 = uVar6 - uVar4;
    }
    iVar19 = 1 << (ulong)(*(uint *)(param_1 + 0xc4) & 0x1f);
    uVar9 = param_1;
    FUN_1099c1b48(param_1,(uint *)(param_1 + 0xb8),param_2,5);
    if (uVar1 < (uint)uVar9) {
      piVar17 = (int *)0x3;
      do {
        puVar13 = (ulong *)(lVar15 + (uVar9 & 0xffffffff));
        uVar11 = (uint)uVar9;
        if (*(char *)((long)puVar13 + (long)piVar17) == *(char *)((long)param_2 + (long)piVar17)) {
          puVar14 = param_2;
          if (param_2 < (ulong *)((long)param_3 + -7)) {
            if (*puVar13 == *param_2) {
              lVar7 = 0;
              puVar13 = (ulong *)(lVar15 + 8 + (uVar9 & 0xffffffff));
              do {
                puVar14 = puVar14 + 1;
                if ((ulong *)((long)param_3 + -7) <= puVar14) goto LAB_1099cbc58;
                uVar9 = *puVar13;
                lVar7 = lVar7 + 8;
                puVar13 = puVar13 + 1;
              } while (uVar9 == *puVar14);
              uVar9 = *puVar14 ^ uVar9;
              uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
              uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
              uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
              uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
              piVar12 = (int *)(lVar7 + ((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3));
            }
            else {
              uVar9 = *param_2 ^ *puVar13;
              uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
              uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
              uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
              uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
              piVar12 = (int *)((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3);
            }
          }
          else {
LAB_1099cbc58:
            if (puVar14 < (ulong *)((long)param_3 + -3)) {
              if ((int)*puVar13 == (int)*puVar14) {
                puVar13 = (ulong *)((long)puVar13 + 4);
                puVar14 = (ulong *)((long)puVar14 + 4);
              }
            }
            if (puVar14 < (ulong *)((long)param_3 + -1)) {
              if ((short)*puVar13 == (short)*puVar14) {
                puVar13 = (ulong *)((long)puVar13 + 2);
                puVar14 = (ulong *)((long)puVar14 + 2);
              }
            }
            if ((puVar14 < param_3) && ((char)*puVar13 == (char)*puVar14)) {
              puVar14 = (ulong *)((long)puVar14 + 1);
            }
            piVar12 = (int *)((long)puVar14 - (long)param_2);
          }
          if ((piVar17 < piVar12) &&
             (*param_4 = (ulong)((uVar6 + 2) - uVar11), piVar17 = piVar12,
             (ulong *)((long)param_2 + (long)piVar12) == param_3)) goto LAB_1099cbff8;
        }
        piVar12 = piVar17;
        if ((uVar11 <= uVar5) ||
           ((iVar19 = iVar19 + -1, iVar19 == 0 ||
            (uVar11 = *(uint *)(lVar18 + (ulong)(uVar11 & uVar4 - 1) * 4), uVar9 = (ulong)uVar11,
            piVar17 = piVar12, uVar11 <= uVar1)))) goto LAB_1099cbff8;
      } while( true );
    }
    piVar12 = (int *)0x3;
LAB_1099cbff8:
    puVar10 = *(undefined8 **)(param_1 + 0xb0);
    uVar4 = 1 << (ulong)(*(uint *)((long)puVar10 + 0xbc) & 0x1f);
    uVar2 = *puVar10;
    lVar18 = puVar10[1];
    uVar5 = (int)uVar2 - (int)lVar18;
    uVar1 = 0;
    if (uVar4 <= uVar5) {
      uVar1 = uVar5 - uVar4;
    }
    if (iVar19 != 0) {
      uVar11 = *(uint *)(puVar10 + 3);
      uVar9 = *param_2;
      uVar16 = *(uint *)(puVar10[6] +
                        (uVar9 * -0x30e4432345000000 >>
                        ((ulong)(uint)-*(int *)(puVar10 + 0x18) & 0x3f)) * 4);
      if (uVar11 < uVar16) {
        lVar7 = puVar10[8];
        while( true ) {
          iVar19 = iVar19 + -1;
          piVar17 = (int *)(lVar18 + (ulong)uVar16);
          if (*piVar17 == (int)uVar9) {
            piVar8 = (int *)((long)param_2 + 4);
            FUN_1099cc318(piVar8,piVar17 + 1,param_3,uVar2,lVar15 + (ulong)uVar3);
            piVar8 = piVar8 + 1;
            if ((piVar12 < piVar8) &&
               (*param_4 = (ulong)((uVar6 + uVar5 + 2) - (uVar3 + uVar16)), piVar12 = piVar8,
               (ulong *)((long)param_2 + (long)piVar8) == param_3)) {
              return piVar8;
            }
          }
          if (uVar16 <= uVar1) {
            return piVar12;
          }
          if (iVar19 == 0) break;
          uVar16 = *(uint *)(lVar7 + (ulong)(uVar16 & uVar4 - 1) * 4);
          if (uVar16 <= uVar11) {
            return piVar12;
          }
        }
        return piVar12;
      }
    }
  }
  else {
    lVar18 = *(long *)(param_1 + 0x40);
    uVar4 = 1 << (ulong)(*(uint *)(param_1 + 0xbc) & 0x1f);
    lVar15 = *(long *)(param_1 + 8);
    uVar6 = iVar19 - (int)lVar15;
    uVar5 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
    uVar3 = *(uint *)(param_1 + 0x18);
    uVar1 = uVar6 - uVar5;
    if (uVar6 - *(uint *)(param_1 + 0x1c) <= uVar5 || *(int *)(param_1 + 0x20) != 0) {
      uVar1 = *(uint *)(param_1 + 0x1c);
    }
    uVar5 = 0;
    if (uVar4 <= uVar6) {
      uVar5 = uVar6 - uVar4;
    }
    iVar19 = 1 << (ulong)(*(uint *)(param_1 + 0xc4) & 0x1f);
    uVar9 = param_1;
    FUN_1099c1b48(param_1,(uint *)(param_1 + 0xb8),param_2,4);
    if (uVar1 < (uint)uVar9) {
      piVar17 = (int *)0x3;
      do {
        puVar13 = (ulong *)(lVar15 + (uVar9 & 0xffffffff));
        uVar11 = (uint)uVar9;
        if (*(char *)((long)puVar13 + (long)piVar17) == *(char *)((long)param_2 + (long)piVar17)) {
          puVar14 = param_2;
          if (param_2 < (ulong *)((long)param_3 + -7)) {
            if (*puVar13 == *param_2) {
              lVar7 = 0;
              puVar13 = (ulong *)(lVar15 + 8 + (uVar9 & 0xffffffff));
              do {
                puVar14 = puVar14 + 1;
                if ((ulong *)((long)param_3 + -7) <= puVar14) goto LAB_1099cbf2c;
                uVar9 = *puVar13;
                lVar7 = lVar7 + 8;
                puVar13 = puVar13 + 1;
              } while (uVar9 == *puVar14);
              uVar9 = *puVar14 ^ uVar9;
              uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
              uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
              uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
              uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
              piVar12 = (int *)(lVar7 + ((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3));
            }
            else {
              uVar9 = *param_2 ^ *puVar13;
              uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
              uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
              uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
              uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
              piVar12 = (int *)((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3);
            }
          }
          else {
LAB_1099cbf2c:
            if (puVar14 < (ulong *)((long)param_3 + -3)) {
              if ((int)*puVar13 == (int)*puVar14) {
                puVar13 = (ulong *)((long)puVar13 + 4);
                puVar14 = (ulong *)((long)puVar14 + 4);
              }
            }
            if (puVar14 < (ulong *)((long)param_3 + -1)) {
              if ((short)*puVar13 == (short)*puVar14) {
                puVar13 = (ulong *)((long)puVar13 + 2);
                puVar14 = (ulong *)((long)puVar14 + 2);
              }
            }
            if ((puVar14 < param_3) && ((char)*puVar13 == (char)*puVar14)) {
              puVar14 = (ulong *)((long)puVar14 + 1);
            }
            piVar12 = (int *)((long)puVar14 - (long)param_2);
          }
          if ((piVar17 < piVar12) &&
             (*param_4 = (ulong)((uVar6 + 2) - uVar11), piVar17 = piVar12,
             (ulong *)((long)param_2 + (long)piVar12) == param_3)) goto LAB_1099cc104;
        }
        piVar12 = piVar17;
        if ((uVar11 <= uVar5) ||
           ((iVar19 = iVar19 + -1, iVar19 == 0 ||
            (uVar11 = *(uint *)(lVar18 + (ulong)(uVar11 & uVar4 - 1) * 4), uVar9 = (ulong)uVar11,
            piVar17 = piVar12, uVar11 <= uVar1)))) goto LAB_1099cc104;
      } while( true );
    }
    piVar12 = (int *)0x3;
LAB_1099cc104:
    puVar10 = *(undefined8 **)(param_1 + 0xb0);
    uVar4 = 1 << (ulong)(*(uint *)((long)puVar10 + 0xbc) & 0x1f);
    uVar2 = *puVar10;
    lVar18 = puVar10[1];
    uVar5 = (int)uVar2 - (int)lVar18;
    uVar1 = 0;
    if (uVar4 <= uVar5) {
      uVar1 = uVar5 - uVar4;
    }
    if (iVar19 != 0) {
      uVar11 = *(uint *)(puVar10 + 3);
      uVar9 = *param_2;
      uVar16 = *(uint *)(puVar10[6] +
                        (ulong)((uint)((int)uVar9 * -0x61c8864f) >>
                               (ulong)(-*(int *)(puVar10 + 0x18) & 0x1f)) * 4);
      if (uVar11 < uVar16) {
        lVar7 = puVar10[8];
        while( true ) {
          iVar19 = iVar19 + -1;
          piVar17 = (int *)(lVar18 + (ulong)uVar16);
          if (*piVar17 == (int)uVar9) {
            piVar8 = (int *)((long)param_2 + 4);
            FUN_1099cc318(piVar8,piVar17 + 1,param_3,uVar2,lVar15 + (ulong)uVar3);
            piVar8 = piVar8 + 1;
            if ((piVar12 < piVar8) &&
               (*param_4 = (ulong)((uVar6 + uVar5 + 2) - (uVar3 + uVar16)), piVar12 = piVar8,
               (ulong *)((long)param_2 + (long)piVar8) == param_3)) {
              return piVar8;
            }
          }
          if (uVar16 <= uVar1) {
            return piVar12;
          }
          if (iVar19 == 0) break;
          uVar16 = *(uint *)(lVar7 + (ulong)(uVar16 & uVar4 - 1) * 4);
          if (uVar16 <= uVar11) {
            return piVar12;
          }
        }
        return piVar12;
      }
    }
  }
  return piVar12;
}



/* Entry: 1099cc238; end: 1099cc317;  */

/* WARNING: Removing unreachable block (ram,0x0001099ccb3c) */
/* WARNING: Removing unreachable block (ram,0x0001099ccb48) */
/* WARNING: Removing unreachable block (ram,0x0001099ccb9c) */
/* WARNING: Removing unreachable block (ram,0x0001099cc83c) */
/* WARNING: Removing unreachable block (ram,0x0001099cc848) */
/* WARNING: Removing unreachable block (ram,0x0001099cc8c8) */
/* WARNING: Removing unreachable block (ram,0x0001099cc8cc) */
/* WARNING: Removing unreachable block (ram,0x0001099cc850) */
/* WARNING: Removing unreachable block (ram,0x0001099cc8c0) */
/* WARNING: Removing unreachable block (ram,0x0001099ccdac) */
/* WARNING: Removing unreachable block (ram,0x0001099ccdb0) */
/* WARNING: Removing unreachable block (ram,0x0001099ccde0) */
/* WARNING: Removing unreachable block (ram,0x0001099ccdcc) */
/* WARNING: Removing unreachable block (ram,0x0001099ccdd4) */
/* WARNING: Removing unreachable block (ram,0x0001099ccde8) */
/* WARNING: Removing unreachable block (ram,0x0001099cce00) */
/* WARNING: Removing unreachable block (ram,0x0001099cce18) */
/* WARNING: Removing unreachable block (ram,0x0001099cce48) */
/* WARNING: Removing unreachable block (ram,0x0001099cce5c) */
/* WARNING: Removing unreachable block (ram,0x0001099ccea8) */
/* WARNING: Removing unreachable block (ram,0x0001099cceac) */
/* WARNING: Removing unreachable block (ram,0x0001099cceec) */
/* WARNING: Removing unreachable block (ram,0x0001099ccf64) */
/* WARNING: Removing unreachable block (ram,0x0001099ccef8) */
/* WARNING: Removing unreachable block (ram,0x0001099ccf34) */
/* WARNING: Removing unreachable block (ram,0x0001099ccf48) */
/* WARNING: Removing unreachable block (ram,0x0001099ccf60) */
/* WARNING: Removing unreachable block (ram,0x0001099ccf6c) */
/* WARNING: Removing unreachable block (ram,0x0001099ccfa8) */
/* WARNING: Removing unreachable block (ram,0x0001099ccf8c) */
/* WARNING: Removing unreachable block (ram,0x0001099ccf98) */
/* WARNING: Removing unreachable block (ram,0x0001099ccfb4) */
/* WARNING: Removing unreachable block (ram,0x0001099ccfbc) */

ulong FUN_1099cc238(long param_1,long *param_2,ulong *param_3,ulong *param_4)

{
  long lVar1;
  ulong *puVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  long lVar13;
  uint *puVar14;
  uint uVar15;
  long lVar16;
  ulong *puVar17;
  ulong uVar18;
  ulong *puVar19;
  uint *puVar20;
  ulong *puVar21;
  uint uVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  ulong uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  int iVar32;
  int iVar33;
  ulong uVar34;
  ulong uVar35;
  long lVar36;
  uint uStack_70;
  uint auStack_6c [3];
  
  if (*(int *)(param_1 + 200) - 6U < 2) {
    if (param_2 < (long *)(*(long *)(param_1 + 8) + (ulong)*(uint *)(param_1 + 0x24))) {
      return 0;
    }
    iVar33 = 6;
  }
  else if (*(int *)(param_1 + 200) == 5) {
    if (param_2 < (long *)(*(long *)(param_1 + 8) + (ulong)*(uint *)(param_1 + 0x24))) {
      return 0;
    }
    iVar33 = 5;
  }
  else {
    if (param_2 < (long *)(*(long *)(param_1 + 8) + (ulong)*(uint *)(param_1 + 0x24))) {
      return 0;
    }
    iVar33 = 4;
  }
  func_0x0001099cc50c(param_1,param_2,iVar33);
  lVar13 = *(long *)(param_1 + 0x30);
  if (iVar33 == 5) {
    lVar16 = *param_2;
    uVar18 = 0xbb000000;
  }
  else {
    if (iVar33 != 6) {
      uVar18 = (ulong)((uint)((int)*param_2 * -0x61c8864f) >>
                      (ulong)(-*(int *)(param_1 + 0xc0) & 0x1f));
      goto LAB_1099cc66c;
    }
    lVar16 = *param_2;
    uVar18 = 0xbf9b0000;
  }
  uVar18 = lVar16 * (uVar18 | 0xcf1bbcdc00000000) >> ((ulong)(uint)-*(int *)(param_1 + 0xc0) & 0x3f)
  ;
LAB_1099cc66c:
  lVar16 = *(long *)(param_1 + 8);
  uVar10 = (int)param_2 - (int)lVar16;
  uVar7 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
  uVar3 = uVar10 - uVar7;
  if (uVar10 - *(uint *)(param_1 + 0x1c) <= uVar7 || *(int *)(param_1 + 0x20) != 0) {
    uVar3 = *(uint *)(param_1 + 0x1c);
  }
  lVar26 = *(long *)(param_1 + 0x40);
  uVar9 = ~(-1 << (ulong)(*(int *)(param_1 + 0xbc) - 1U & 0x1f));
  uVar7 = 0;
  if (uVar9 <= uVar10) {
    uVar7 = uVar10 - uVar9;
  }
  uVar31 = uVar7;
  if (uVar7 <= uVar3) {
    uVar31 = uVar3;
  }
  uVar11 = 1 << (ulong)(*(uint *)(param_1 + 0xc4) & 0x1f);
  uVar6 = *(uint *)(lVar13 + uVar18 * 4);
  if (uVar31 < uVar6) {
    uVar29 = uVar11;
    uVar15 = 0;
    do {
      uVar22 = uVar6;
      puVar14 = (uint *)(lVar26 + (ulong)((uVar22 & uVar9) << 1) * 4);
      if (puVar14[1] != 1 || uVar29 < 2) {
        if (puVar14[1] == 1) {
          puVar14[0] = 0;
          puVar14[1] = 0;
        }
        uVar22 = uVar15;
        if (uVar15 == 0) goto LAB_1099ccaa0;
        break;
      }
      puVar14[1] = uVar15;
      uVar29 = uVar29 - 1;
      uVar15 = uVar22;
      uVar6 = *puVar14;
    } while (uVar31 < *puVar14);
    lVar36 = *(long *)(param_1 + 0x10);
    do {
      uVar15 = *(uint *)(lVar26 + 4 + (ulong)((uVar22 & uVar9) << 1) * 4);
      uVar8 = -1 << (ulong)(*(int *)(param_1 + 0xbc) - 1U & 0x1f);
      uVar6 = *(uint *)(param_1 + 0x18);
      lVar4 = lVar36;
      if (uVar6 <= uVar22) {
        lVar4 = lVar16;
      }
      puVar14 = (uint *)(lVar26 + (ulong)((uVar22 & (uVar8 ^ 0xffffffff)) << 1) * 4);
      puVar12 = puVar14 + 1;
      uVar28 = *puVar14;
      puVar2 = (ulong *)(lVar36 + (ulong)uVar6);
      if (uVar6 <= uVar22) {
        puVar2 = param_3;
      }
      uVar30 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
      uVar6 = uVar22 - uVar30;
      if (uVar22 - *(uint *)(param_1 + 0x1c) <= uVar30) {
        uVar6 = *(uint *)(param_1 + 0x1c);
      }
      if ((uVar29 != 0) && (uVar6 < uVar28)) {
        uVar35 = 0;
        uVar34 = 0;
        lVar1 = lVar4 + (ulong)uVar22 + 8;
        uVar30 = uVar29;
        do {
          uVar5 = uVar35;
          if (uVar34 <= uVar35) {
            uVar5 = uVar34;
          }
          uVar27 = (ulong)uVar28;
          puVar17 = (ulong *)(lVar4 + (ulong)uVar22 + uVar5);
          puVar21 = (ulong *)(lVar16 + uVar27 + uVar5);
          puVar19 = puVar17;
          if (puVar17 < (ulong *)((long)puVar2 - 7U)) {
            if (*puVar21 == *puVar17) {
              lVar23 = 0;
              do {
                puVar21 = (ulong *)(lVar1 + uVar5 + lVar23);
                if ((ulong *)((long)puVar2 - 7U) <= puVar21) {
                  puVar21 = (ulong *)(lVar16 + lVar23 + uVar5 + uVar27 + 8);
                  puVar19 = (ulong *)(lVar1 + uVar5 + lVar23);
                  goto LAB_1099cc978;
                }
                uVar25 = *(ulong *)(lVar16 + uVar5 + uVar27 + 8 + lVar23);
                uVar24 = *puVar21;
                lVar23 = lVar23 + 8;
              } while (uVar25 == uVar24);
              uVar24 = uVar24 ^ uVar25;
              uVar24 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
              uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
              uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
              uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
              uVar24 = lVar23 + ((ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3);
            }
            else {
              uVar24 = *puVar17 ^ *puVar21;
              uVar24 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
              uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
              uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
              uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
              uVar24 = (ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3;
            }
          }
          else {
LAB_1099cc978:
            if (puVar19 < (ulong *)((long)puVar2 - 3U)) {
              if ((int)*puVar21 == (int)*puVar19) {
                puVar19 = (ulong *)((long)puVar19 + 4);
                puVar21 = (ulong *)((long)puVar21 + 4);
              }
            }
            if (puVar19 < (ulong *)((long)puVar2 - 1U)) {
              if ((short)*puVar21 == (short)*puVar19) {
                puVar19 = (ulong *)((long)puVar19 + 2);
                puVar21 = (ulong *)((long)puVar21 + 2);
              }
            }
            if ((puVar19 < puVar2) && ((byte)*puVar21 == (byte)*puVar19)) {
              puVar19 = (ulong *)((long)puVar19 + 1);
            }
            uVar24 = (long)puVar19 - (long)puVar17;
          }
          uVar24 = uVar24 + uVar5;
          puVar21 = (ulong *)(lVar4 + (ulong)uVar22 + uVar24);
          if (puVar21 == puVar2) break;
          puVar20 = (uint *)(lVar26 + (ulong)((uVar28 & ~uVar8) << 1) * 4);
          if (*(byte *)(lVar16 + uVar27 + uVar24) < (byte)*puVar21) {
            *puVar14 = uVar28;
            if (uVar28 <= uVar31) {
              puVar14 = auStack_6c;
              break;
            }
            puVar14 = puVar20 + 1;
            puVar20 = puVar14;
            uVar35 = uVar24;
          }
          else {
            *puVar12 = uVar28;
            puVar12 = puVar20;
            uVar34 = uVar24;
            if (uVar28 <= uVar31) {
              puVar12 = auStack_6c;
              break;
            }
          }
          uVar30 = uVar30 - 1;
          if ((uVar30 == 0) || (uVar28 = *puVar20, uVar28 <= uVar6)) break;
        } while( true );
      }
      *puVar12 = 0;
      *puVar14 = 0;
      uVar29 = uVar29 + 1;
      uVar22 = uVar15;
    } while (uVar15 != 0);
  }
LAB_1099ccaa0:
  puVar14 = (uint *)(lVar26 + (ulong)((uVar9 & uVar10) << 1) * 4);
  puVar12 = puVar14 + 1;
  iVar33 = uVar10 + 9;
  uVar31 = *(uint *)(lVar13 + uVar18 * 4);
  *(uint *)(lVar13 + uVar18 * 4) = uVar10;
  if (uVar3 < uVar31) {
    uVar18 = 0;
    uVar34 = 0;
    uVar35 = 0;
    iVar32 = iVar33;
    do {
      uVar11 = uVar11 - 1;
      uVar5 = uVar34;
      if (uVar35 <= uVar34) {
        uVar5 = uVar35;
      }
      puVar2 = (ulong *)((long)param_2 + uVar5);
      lVar13 = lVar16 + (ulong)uVar31;
      puVar21 = (ulong *)(lVar13 + uVar5);
      puVar17 = puVar2;
      if (puVar2 < (ulong *)((long)param_3 + -7)) {
        if (*puVar21 == *puVar2) {
          lVar36 = 0;
          puVar17 = (ulong *)((long)param_2 + uVar5 + 8);
          puVar21 = (ulong *)(lVar16 + 8 + uVar5 + uVar31);
          do {
            if ((ulong *)((long)param_3 + -7) <= puVar17) goto LAB_1099ccc10;
            uVar24 = *puVar21;
            uVar27 = *puVar17;
            lVar36 = lVar36 + 8;
            puVar17 = puVar17 + 1;
            puVar21 = puVar21 + 1;
          } while (uVar24 == uVar27);
          uVar27 = uVar27 ^ uVar24;
          uVar27 = (uVar27 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar27 & 0x5555555555555555) << 1;
          uVar27 = (uVar27 & 0xcccccccccccccccc) >> 2 | (uVar27 & 0x3333333333333333) << 2;
          uVar27 = (uVar27 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar27 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar27 = (uVar27 & 0xff00ff00ff00ff00) >> 8 | (uVar27 & 0xff00ff00ff00ff) << 8;
          uVar27 = (uVar27 & 0xffff0000ffff0000) >> 0x10 | (uVar27 & 0xffff0000ffff) << 0x10;
          uVar27 = lVar36 + ((ulong)LZCOUNT(uVar27 >> 0x20 | uVar27 << 0x20) >> 3);
        }
        else {
          uVar27 = *puVar2 ^ *puVar21;
          uVar27 = (uVar27 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar27 & 0x5555555555555555) << 1;
          uVar27 = (uVar27 & 0xcccccccccccccccc) >> 2 | (uVar27 & 0x3333333333333333) << 2;
          uVar27 = (uVar27 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar27 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar27 = (uVar27 & 0xff00ff00ff00ff00) >> 8 | (uVar27 & 0xff00ff00ff00ff) << 8;
          uVar27 = (uVar27 & 0xffff0000ffff0000) >> 0x10 | (uVar27 & 0xffff0000ffff) << 0x10;
          uVar27 = (ulong)LZCOUNT(uVar27 >> 0x20 | uVar27 << 0x20) >> 3;
        }
      }
      else {
LAB_1099ccc10:
        if (puVar17 < (ulong *)((long)param_3 + -3)) {
          if ((int)*puVar21 == (int)*puVar17) {
            puVar17 = (ulong *)((long)puVar17 + 4);
            puVar21 = (ulong *)((long)puVar21 + 4);
          }
        }
        if (puVar17 < (ulong *)((long)param_3 + -1)) {
          if ((short)*puVar21 == (short)*puVar17) {
            puVar17 = (ulong *)((long)puVar17 + 2);
            puVar21 = (ulong *)((long)puVar21 + 2);
          }
        }
        if ((puVar17 < param_3) && ((byte)*puVar21 == (byte)*puVar17)) {
          puVar17 = (ulong *)((long)puVar17 + 1);
        }
        uVar27 = (long)puVar17 - (long)puVar2;
      }
      uVar27 = uVar27 + uVar5;
      iVar33 = iVar32;
      if (uVar18 < uVar27) {
        iVar33 = uVar31 + (int)uVar27;
        if (uVar27 <= iVar32 - uVar31) {
          iVar33 = iVar32;
        }
        if ((int)(((uint)LZCOUNT((uVar10 + 1) - uVar31) ^ 0x1f) -
                 ((uint)LZCOUNT((int)*param_4 + 1) ^ 0x1f)) < ((int)uVar27 - (int)uVar18) * 4) {
          *param_4 = (ulong)((uVar10 + 2) - uVar31);
          uVar18 = uVar27;
        }
        if ((ulong *)((long)param_2 + uVar27) == param_3) goto LAB_1099ccd9c;
      }
      puVar20 = (uint *)(lVar26 + (ulong)((uVar31 & uVar9) << 1) * 4);
      if (*(byte *)(lVar13 + uVar27) < *(byte *)((long)param_2 + uVar27)) {
        *puVar14 = uVar31;
        if (uVar31 <= uVar7) {
          puVar14 = &uStack_70;
          goto LAB_1099ccd9c;
        }
        puVar14 = puVar20 + 1;
        uVar34 = uVar27;
        puVar20 = puVar14;
        uVar27 = uVar35;
      }
      else {
        *puVar12 = uVar31;
        puVar12 = puVar20;
        if (uVar31 <= uVar7) {
          puVar12 = &uStack_70;
          goto LAB_1099ccd9c;
        }
      }
      if ((uVar11 == 0) || (uVar31 = *puVar20, uVar35 = uVar27, iVar32 = iVar33, uVar31 <= uVar3))
      goto LAB_1099ccd9c;
    } while( true );
  }
  uVar18 = 0;
LAB_1099ccd9c:
  *puVar12 = 0;
  *puVar14 = 0;
  *(int *)(param_1 + 0x24) = iVar33 + -8;
  return uVar18;
}



/* Entry: 1099cc318; end: 1099cc5d7;  */

ulong FUN_1099cc318(ulong *param_1,ulong *param_2,ulong *param_3,long param_4,ulong *param_5)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong *puVar5;
  long lVar6;
  
  puVar1 = (ulong *)((long)param_1 + (param_4 - (long)param_2));
  if (param_3 <= puVar1) {
    puVar1 = param_3;
  }
  puVar3 = param_1;
  puVar5 = param_2;
  if (param_1 < (ulong *)((long)puVar1 - 7U)) {
    if (*param_2 == *param_1) {
      lVar6 = 0;
      do {
        puVar5 = puVar5 + 1;
        puVar3 = puVar3 + 1;
        if ((ulong *)((long)puVar1 - 7U) <= puVar3) goto LAB_1099cc38c;
        lVar6 = lVar6 + 8;
      } while (*puVar5 == *puVar3);
      uVar4 = *puVar3 ^ *puVar5;
      uVar4 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
      uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      uVar4 = lVar6 + ((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3);
    }
    else {
      uVar4 = *param_1 ^ *param_2;
      uVar4 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
      uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      uVar4 = (ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3;
    }
  }
  else {
LAB_1099cc38c:
    if (puVar3 < (ulong *)((long)puVar1 - 3U)) {
      if ((int)*puVar5 == (int)*puVar3) {
        puVar3 = (ulong *)((long)puVar3 + 4);
        puVar5 = (ulong *)((long)puVar5 + 4);
      }
    }
    if (puVar3 < (ulong *)((long)puVar1 - 1U)) {
      if ((short)*puVar5 == (short)*puVar3) {
        puVar3 = (ulong *)((long)puVar3 + 2);
        puVar5 = (ulong *)((long)puVar5 + 2);
      }
    }
    if ((puVar3 < puVar1) && ((char)*puVar5 == (char)*puVar3)) {
      puVar3 = (ulong *)((long)puVar3 + 1);
    }
    uVar4 = (long)puVar3 - (long)param_1;
  }
  if ((long)param_2 + uVar4 != param_4) {
    return uVar4;
  }
  puVar1 = (ulong *)((long)param_1 + uVar4);
  puVar3 = puVar1;
  if (puVar1 < (ulong *)((long)param_3 + -7)) {
    if (*param_5 == *puVar1) {
      lVar6 = 0;
      puVar3 = (ulong *)(uVar4 + (long)param_1);
      do {
        puVar3 = puVar3 + 1;
        param_5 = param_5 + 1;
        if ((ulong *)((long)param_3 + -7) <= puVar3) goto LAB_1099cc480;
        lVar6 = lVar6 + 8;
      } while (*param_5 == *puVar3);
      uVar2 = *puVar3 ^ *param_5;
      uVar2 = (uVar2 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar2 & 0x5555555555555555) << 1;
      uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
      uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      uVar2 = lVar6 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3);
    }
    else {
      uVar2 = *puVar1 ^ *param_5;
      uVar2 = (uVar2 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar2 & 0x5555555555555555) << 1;
      uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
      uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      uVar2 = (ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3;
    }
  }
  else {
LAB_1099cc480:
    if (puVar3 < (ulong *)((long)param_3 + -3)) {
      if ((int)*param_5 == (int)*puVar3) {
        param_5 = (ulong *)((long)param_5 + 4);
        puVar3 = (ulong *)((long)puVar3 + 4);
      }
    }
    if (puVar3 < (ulong *)((long)param_3 + -1)) {
      if ((short)*param_5 == (short)*puVar3) {
        param_5 = (ulong *)((long)param_5 + 2);
        puVar3 = (ulong *)((long)puVar3 + 2);
      }
    }
    if ((puVar3 < param_3) && ((char)*param_5 == (char)*puVar3)) {
      puVar3 = (ulong *)((long)puVar3 + 1);
    }
    uVar2 = (long)puVar3 - (long)puVar1;
  }
  return uVar2 + uVar4;
}



/* Entry: 1099cc5d8; end: 1099cd017;  */

byte * FUN_1099cc5d8(long param_1,long *param_2,ulong *param_3,ulong *param_4,int param_5,
                    int param_6)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  uint *puVar12;
  ulong *puVar13;
  byte *pbVar14;
  long lVar15;
  uint *puVar16;
  byte *pbVar17;
  byte *pbVar18;
  uint uVar19;
  long *plVar20;
  long lVar21;
  ulong uVar22;
  ulong *puVar23;
  ulong uVar24;
  ulong *puVar25;
  uint *puVar26;
  ulong *puVar27;
  int iVar28;
  ulong uVar29;
  uint uVar30;
  long lVar31;
  ulong uVar32;
  ulong uVar33;
  long lVar34;
  ulong uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  byte *pbVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  ulong uVar44;
  byte *pbVar45;
  ulong uVar46;
  long lVar47;
  uint uStack_70;
  uint auStack_6c [3];
  
  lVar15 = *(long *)(param_1 + 0x30);
  if (param_5 == 5) {
    lVar21 = *param_2;
    uVar24 = 0xbb000000;
LAB_1099cc638:
    uVar24 = lVar21 * (uVar24 | 0xcf1bbcdc00000000) >>
             ((ulong)(uint)-*(int *)(param_1 + 0xc0) & 0x3f);
  }
  else {
    if (param_5 == 6) {
      lVar21 = *param_2;
      uVar24 = 0xbf9b0000;
      goto LAB_1099cc638;
    }
    uVar24 = (ulong)((uint)((int)*param_2 * -0x61c8864f) >>
                    (ulong)(-*(int *)(param_1 + 0xc0) & 0x1f));
  }
  lVar21 = *(long *)(param_1 + 8);
  uVar10 = (int)param_2 - (int)lVar21;
  uVar6 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
  uVar4 = uVar10 - uVar6;
  if (uVar10 - *(uint *)(param_1 + 0x1c) <= uVar6 || *(int *)(param_1 + 0x20) != 0) {
    uVar4 = *(uint *)(param_1 + 0x1c);
  }
  lVar34 = *(long *)(param_1 + 0x40);
  uVar9 = ~(-1 << (ulong)(*(int *)(param_1 + 0xbc) - 1U & 0x1f));
  uVar6 = 0;
  if (uVar9 <= uVar10) {
    uVar6 = uVar10 - uVar9;
  }
  uVar39 = uVar6;
  if (uVar6 <= uVar4) {
    uVar39 = uVar4;
  }
  uVar7 = 1 << (ulong)(*(uint *)(param_1 + 0xc4) & 0x1f);
  uVar5 = *(uint *)(lVar15 + uVar24 * 4);
  if (uVar39 < uVar5) {
    uVar37 = uVar7;
    uVar19 = 0;
    do {
      uVar30 = uVar5;
      puVar16 = (uint *)(lVar34 + (ulong)((uVar30 & uVar9) << 1) * 4);
      if (puVar16[1] != 1 || uVar37 < 2) {
        if (puVar16[1] == 1) {
          puVar16[0] = 0;
          puVar16[1] = 0;
        }
        uVar30 = uVar19;
        if (uVar19 == 0) goto LAB_1099cca9c;
        break;
      }
      puVar16[1] = uVar19;
      uVar37 = uVar37 - 1;
      uVar19 = uVar30;
      uVar5 = *puVar16;
    } while (uVar39 < *puVar16);
    lVar47 = *(long *)(param_1 + 0x10);
    do {
      uVar19 = *(uint *)(lVar34 + 4 + (ulong)((uVar30 & uVar9) << 1) * 4);
      uVar8 = -1 << (ulong)(*(int *)(param_1 + 0xbc) - 1U & 0x1f);
      uVar5 = *(uint *)(param_1 + 0x18);
      uVar29 = (ulong)uVar5;
      lVar2 = lVar47;
      if (uVar5 <= uVar30) {
        lVar2 = lVar21;
      }
      puVar16 = (uint *)(lVar34 + (ulong)((uVar30 & (uVar8 ^ 0xffffffff)) << 1) * 4);
      puVar12 = puVar16 + 1;
      uVar36 = *puVar16;
      puVar13 = (ulong *)(lVar47 + uVar29);
      if (uVar5 <= uVar30) {
        puVar13 = param_3;
      }
      uVar38 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
      uVar3 = uVar30 - uVar38;
      if (uVar30 - *(uint *)(param_1 + 0x1c) <= uVar38) {
        uVar3 = *(uint *)(param_1 + 0x1c);
      }
      if ((uVar37 != 0) && (uVar3 < uVar36)) {
        uVar46 = 0;
        uVar44 = 0;
        lVar1 = lVar2 + (ulong)uVar30;
        lVar2 = lVar2 + (ulong)uVar30 + 8;
        uVar38 = uVar37;
        do {
          uVar22 = uVar46;
          if (uVar44 <= uVar46) {
            uVar22 = uVar44;
          }
          uVar35 = (ulong)uVar36;
          lVar11 = lVar21;
          if (param_6 == 1) {
            if ((uVar30 < uVar5) || (uVar29 <= uVar22 + uVar35)) {
              lVar11 = lVar47;
              if (uVar29 <= uVar22 + uVar35) {
                lVar11 = lVar21;
              }
              goto LAB_1099cc8d0;
            }
            lVar11 = lVar1 + uVar22;
            FUN_1099cc318(lVar11,lVar47 + uVar35 + uVar22,puVar13,(ulong *)(lVar47 + uVar29),
                          lVar21 + uVar29);
            uVar22 = lVar11 + uVar22;
            lVar11 = lVar47 + uVar35;
            if (uVar29 <= uVar22 + uVar35) {
              lVar11 = lVar21 + uVar35;
            }
          }
          else {
LAB_1099cc8d0:
            puVar23 = (ulong *)(lVar1 + uVar22);
            puVar27 = (ulong *)(lVar11 + uVar35 + uVar22);
            puVar25 = puVar23;
            if (puVar23 < (ulong *)((long)puVar13 - 7U)) {
              if (*puVar27 == *puVar23) {
                lVar31 = 0;
                do {
                  puVar27 = (ulong *)(lVar2 + uVar22 + lVar31);
                  if ((ulong *)((long)puVar13 - 7U) <= puVar27) {
                    puVar27 = (ulong *)(lVar11 + lVar31 + uVar22 + uVar35 + 8);
                    puVar25 = (ulong *)(lVar2 + uVar22 + lVar31);
                    goto LAB_1099cc978;
                  }
                  uVar32 = *(ulong *)(lVar11 + uVar22 + uVar35 + 8 + lVar31);
                  uVar33 = *puVar27;
                  lVar31 = lVar31 + 8;
                } while (uVar32 == uVar33);
                uVar33 = uVar33 ^ uVar32;
                uVar33 = (uVar33 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar33 & 0x5555555555555555) << 1;
                uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 | (uVar33 & 0x3333333333333333) << 2;
                uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
                uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
                uVar33 = lVar31 + ((ulong)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20) >> 3);
              }
              else {
                uVar33 = *puVar23 ^ *puVar27;
                uVar33 = (uVar33 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar33 & 0x5555555555555555) << 1;
                uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 | (uVar33 & 0x3333333333333333) << 2;
                uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
                uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
                uVar33 = (ulong)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20) >> 3;
              }
            }
            else {
LAB_1099cc978:
              if (puVar25 < (ulong *)((long)puVar13 - 3U)) {
                if ((int)*puVar27 == (int)*puVar25) {
                  puVar25 = (ulong *)((long)puVar25 + 4);
                  puVar27 = (ulong *)((long)puVar27 + 4);
                }
              }
              if (puVar25 < (ulong *)((long)puVar13 - 1U)) {
                if ((short)*puVar27 == (short)*puVar25) {
                  puVar25 = (ulong *)((long)puVar25 + 2);
                  puVar27 = (ulong *)((long)puVar27 + 2);
                }
              }
              if ((puVar25 < puVar13) && ((byte)*puVar27 == (byte)*puVar25)) {
                puVar25 = (ulong *)((long)puVar25 + 1);
              }
              uVar33 = (long)puVar25 - (long)puVar23;
            }
            uVar22 = uVar33 + uVar22;
            lVar11 = lVar11 + uVar35;
          }
          if ((ulong *)(lVar1 + uVar22) == puVar13) break;
          puVar26 = (uint *)(lVar34 + (ulong)((uVar36 & ~uVar8) << 1) * 4);
          if (*(byte *)(lVar11 + uVar22) < (byte)*(ulong *)(lVar1 + uVar22)) {
            *puVar16 = uVar36;
            if (uVar36 <= uVar39) {
              puVar16 = auStack_6c;
              break;
            }
            puVar16 = puVar26 + 1;
            puVar26 = puVar16;
            uVar46 = uVar22;
          }
          else {
            *puVar12 = uVar36;
            puVar12 = puVar26;
            uVar44 = uVar22;
            if (uVar36 <= uVar39) {
              puVar12 = auStack_6c;
              break;
            }
          }
          uVar38 = uVar38 - 1;
          if ((uVar38 == 0) || (uVar36 = *puVar26, uVar36 <= uVar3)) break;
        } while( true );
      }
      *puVar12 = 0;
      *puVar16 = 0;
      uVar37 = uVar37 + 1;
      uVar30 = uVar19;
    } while (uVar19 != 0);
  }
  else {
LAB_1099cca9c:
    lVar47 = *(long *)(param_1 + 0x10);
  }
  pbVar45 = (byte *)(ulong)*(uint *)(param_1 + 0x18);
  puVar16 = (uint *)(lVar34 + (ulong)((uVar9 & uVar10) << 1) * 4);
  puVar12 = puVar16 + 1;
  iVar42 = uVar10 + 9;
  uVar39 = *(uint *)(lVar15 + uVar24 * 4);
  *(uint *)(lVar15 + uVar24 * 4) = uVar10;
  iVar28 = uVar7 - 1;
  if (uVar4 < uVar39) {
    pbVar17 = (byte *)0x0;
    pbVar18 = (byte *)0x0;
    pbVar40 = (byte *)0x0;
    iVar41 = iVar42;
    do {
      pbVar14 = pbVar18;
      if (pbVar40 <= pbVar18) {
        pbVar14 = pbVar40;
      }
      uVar24 = (ulong)uVar39;
      puVar13 = (ulong *)((long)param_2 + (long)pbVar14);
      if ((param_6 == 1) && (pbVar14 + uVar39 < pbVar45)) {
        FUN_1099cc318(puVar13,pbVar14 + lVar47 + uVar24,param_3,pbVar45 + lVar47,pbVar45 + lVar21);
        pbVar14 = (byte *)((long)puVar13 + (long)pbVar14);
        lVar15 = lVar47 + uVar24;
        if (pbVar45 <= pbVar14 + uVar24) {
          lVar15 = lVar21 + uVar24;
        }
      }
      else {
        puVar27 = (ulong *)(pbVar14 + lVar21 + uVar24);
        puVar23 = puVar13;
        if (puVar13 < (ulong *)((long)param_3 + -7)) {
          if (*puVar27 == *puVar13) {
            lVar15 = 0;
            puVar23 = (ulong *)((long)(param_2 + 1) + (long)pbVar14);
            puVar27 = (ulong *)(pbVar14 + lVar21 + 8 + uVar24);
            do {
              if ((ulong *)((long)param_3 + -7) <= puVar23) goto LAB_1099ccc10;
              uVar44 = *puVar27;
              uVar29 = *puVar23;
              lVar15 = lVar15 + 8;
              puVar23 = puVar23 + 1;
              puVar27 = puVar27 + 1;
            } while (uVar44 == uVar29);
            uVar29 = uVar29 ^ uVar44;
            uVar29 = (uVar29 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar29 & 0x5555555555555555) << 1;
            uVar29 = (uVar29 & 0xcccccccccccccccc) >> 2 | (uVar29 & 0x3333333333333333) << 2;
            uVar29 = (uVar29 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar29 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar29 = (uVar29 & 0xff00ff00ff00ff00) >> 8 | (uVar29 & 0xff00ff00ff00ff) << 8;
            uVar29 = (uVar29 & 0xffff0000ffff0000) >> 0x10 | (uVar29 & 0xffff0000ffff) << 0x10;
            uVar29 = lVar15 + ((ulong)LZCOUNT(uVar29 >> 0x20 | uVar29 << 0x20) >> 3);
          }
          else {
            uVar29 = *puVar13 ^ *puVar27;
            uVar29 = (uVar29 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar29 & 0x5555555555555555) << 1;
            uVar29 = (uVar29 & 0xcccccccccccccccc) >> 2 | (uVar29 & 0x3333333333333333) << 2;
            uVar29 = (uVar29 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar29 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar29 = (uVar29 & 0xff00ff00ff00ff00) >> 8 | (uVar29 & 0xff00ff00ff00ff) << 8;
            uVar29 = (uVar29 & 0xffff0000ffff0000) >> 0x10 | (uVar29 & 0xffff0000ffff) << 0x10;
            uVar29 = (ulong)LZCOUNT(uVar29 >> 0x20 | uVar29 << 0x20) >> 3;
          }
        }
        else {
LAB_1099ccc10:
          if (puVar23 < (ulong *)((long)param_3 + -3)) {
            if ((int)*puVar27 == (int)*puVar23) {
              puVar23 = (ulong *)((long)puVar23 + 4);
              puVar27 = (ulong *)((long)puVar27 + 4);
            }
          }
          if (puVar23 < (ulong *)((long)param_3 + -1)) {
            if ((short)*puVar27 == (short)*puVar23) {
              puVar23 = (ulong *)((long)puVar23 + 2);
              puVar27 = (ulong *)((long)puVar27 + 2);
            }
          }
          if ((puVar23 < param_3) && ((byte)*puVar27 == (byte)*puVar23)) {
            puVar23 = (ulong *)((long)puVar23 + 1);
          }
          uVar29 = (long)puVar23 - (long)puVar13;
        }
        pbVar14 = pbVar14 + uVar29;
        lVar15 = lVar21 + uVar24;
      }
      iVar42 = iVar41;
      iVar43 = iVar28;
      if (pbVar17 < pbVar14) {
        iVar42 = uVar39 + (int)pbVar14;
        if (pbVar14 <= (byte *)(ulong)(iVar41 - uVar39)) {
          iVar42 = iVar41;
        }
        if ((int)(((uint)LZCOUNT((uVar10 + 1) - uVar39) ^ 0x1f) -
                 ((uint)LZCOUNT((int)*param_4 + 1) ^ 0x1f)) < ((int)pbVar14 - (int)pbVar17) * 4) {
          *param_4 = (ulong)((uVar10 + 2) - uVar39);
          pbVar17 = pbVar14;
        }
        if ((ulong *)((long)param_2 + (long)pbVar14) == param_3) {
          iVar43 = 0;
          if (param_6 != 2) {
            iVar43 = iVar28;
          }
          goto LAB_1099ccd9c;
        }
      }
      puVar26 = (uint *)(lVar34 + (ulong)((uVar39 & uVar9) << 1) * 4);
      if (pbVar14[lVar15] < *(byte *)((long)param_2 + (long)pbVar14)) {
        *puVar16 = uVar39;
        if (uVar39 <= uVar6) {
          puVar16 = &uStack_70;
          goto LAB_1099ccd9c;
        }
        puVar16 = puVar26 + 1;
        pbVar18 = pbVar14;
        puVar26 = puVar16;
        pbVar14 = pbVar40;
      }
      else {
        *puVar12 = uVar39;
        puVar12 = puVar26;
        if (uVar39 <= uVar6) {
          puVar12 = &uStack_70;
          goto LAB_1099ccd9c;
        }
      }
      iVar43 = iVar28 + -1;
      if ((iVar28 == 0) ||
         (uVar39 = *puVar26, pbVar40 = pbVar14, iVar41 = iVar42, iVar28 = iVar43, uVar39 <= uVar4))
      goto LAB_1099ccd9c;
    } while( true );
  }
  pbVar17 = (byte *)0x0;
  iVar43 = iVar28;
LAB_1099ccd9c:
  *puVar12 = 0;
  *puVar16 = 0;
  if ((param_6 != 2) || (iVar43 == 0)) goto LAB_1099ccfcc;
  plVar20 = *(long **)(param_1 + 0xb0);
  if (param_5 == 5) {
    lVar15 = *param_2;
    uVar24 = 0xbb000000;
LAB_1099ccde8:
    uVar24 = lVar15 * (uVar24 | 0xcf1bbcdc00000000) >> ((ulong)(uint)-(int)plVar20[0x18] & 0x3f);
  }
  else {
    if (param_5 == 6) {
      lVar15 = *param_2;
      uVar24 = 0xbf9b0000;
      goto LAB_1099ccde8;
    }
    uVar24 = (ulong)((uint)((int)*param_2 * -0x61c8864f) >> (ulong)(-(int)plVar20[0x18] & 0x1f));
  }
  lVar15 = *plVar20;
  lVar34 = plVar20[1];
  uVar29 = lVar15 - lVar34;
  uVar6 = *(uint *)((long)plVar20 + 0x1c);
  uVar9 = ~(-1 << (ulong)(*(int *)((long)plVar20 + 0xbc) - 1U & 0x1f));
  iVar28 = (int)uVar29;
  uVar4 = iVar28 - uVar9;
  if (iVar28 - uVar6 <= uVar9) {
    uVar4 = uVar6;
  }
  uVar39 = *(uint *)(plVar20[6] + uVar24 * 4);
  if (uVar6 < uVar39) {
    pbVar45 = (byte *)0x0;
    pbVar18 = (byte *)0x0;
    uVar5 = *(uint *)(param_1 + 0x18);
    uVar7 = *(int *)(param_1 + 0x1c) - iVar28;
    lVar47 = plVar20[8];
    do {
      iVar43 = iVar43 + -1;
      pbVar40 = pbVar18;
      if (pbVar45 <= pbVar18) {
        pbVar40 = pbVar45;
      }
      lVar2 = lVar34 + (ulong)uVar39;
      pbVar14 = (byte *)((long)param_2 + (long)pbVar40);
      FUN_1099cc318(pbVar14,pbVar40 + lVar2,param_3,lVar15,lVar21 + (ulong)uVar5);
      pbVar14 = pbVar14 + (long)pbVar40;
      if ((byte *)(uVar29 & 0xffffffff) <= pbVar14 + uVar39) {
        lVar2 = lVar21 + (ulong)uVar7 + (ulong)uVar39;
      }
      if (pbVar17 < pbVar14) {
        iVar28 = uVar39 + uVar7;
        if ((int)(((uint)LZCOUNT((uVar10 + 1) - iVar28) ^ 0x1f) -
                 ((uint)LZCOUNT((int)*param_4 + 1) ^ 0x1f)) < ((int)pbVar14 - (int)pbVar17) * 4) {
          *param_4 = (ulong)((uVar10 + 2) - iVar28);
          pbVar17 = pbVar14;
        }
        if ((ulong *)((long)param_2 + (long)pbVar14) == param_3) break;
      }
      puVar16 = (uint *)(lVar47 + (ulong)((uVar39 & uVar9) << 1) * 4);
      if (pbVar14[lVar2] < *(byte *)((long)param_2 + (long)pbVar14)) {
        if (uVar39 <= uVar4) break;
        puVar16 = puVar16 + 1;
        pbVar18 = pbVar14;
      }
      else {
        pbVar45 = pbVar14;
        if (uVar39 <= uVar4) break;
      }
      if ((iVar43 == 0) || (uVar39 = *puVar16, uVar39 <= uVar6)) break;
    } while( true );
  }
LAB_1099ccfcc:
  *(int *)(param_1 + 0x24) = iVar42 + -8;
  return pbVar17;
}


