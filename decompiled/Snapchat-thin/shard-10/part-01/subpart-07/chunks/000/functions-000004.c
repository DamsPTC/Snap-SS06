/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10777bed4; end: 10777bf47;  */

/* WARNING: Type propagation algorithm not settling */

undefined1 * FUN_10777bed4(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 extraout_w8;
  undefined1 uVar5;
  undefined1 extraout_w8_00;
  undefined1 extraout_w8_01;
  undefined1 extraout_w8_02;
  undefined1 extraout_w8_03;
  undefined1 extraout_w8_04;
  undefined1 uVar6;
  int extraout_w8_05;
  long lVar7;
  int extraout_w10;
  long unaff_x19;
  undefined1 *puVar8;
  uint uVar9;
  undefined1 *unaff_x21;
  undefined8 unaff_x22;
  undefined8 *******pppppppuVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined1 auStack_480 [784];
  undefined1 auStack_170 [128];
  undefined8 *******pppppppuStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [15];
  undefined1 uStack_b1;
  undefined1 auStack_b0 [104];
  undefined4 uStack_48;
  
  puVar1 = auStack_c0;
  pppppppuVar10 = (undefined8 *******)&stack0xfffffffffffffff0;
  func_0x00010777d1f4();
  uStack_48 = 0;
  puVar4 = auStack_b0;
  func_0x00010777d950();
  func_0x00010777d5e0();
  uVar9 = (uint)unaff_x21;
  uVar2 = uVar9 == 0xff;
  uVar6 = SUB81(unaff_x21,0);
  if (uVar9 < 0x100) {
    func_0x00010777d748();
    uVar5 = extraout_w8;
  }
  else {
    uStack_b1 = uVar6;
    func_0x00010777d540();
    func_0x00010777d2c0();
    func_0x000107404cc4();
    uVar5 = 1;
  }
  *(undefined1 *)(unaff_x19 + 0x10) = uVar5;
  func_0x00010777d1dc();
  if ((bool)uVar2) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar11 = &UNK_10777bf48;
  puVar8 = param_1;
  func_0x00010777d638();
  if (*(int *)(puVar8 + 0x68) == 1) {
    puVar3 = param_2 + 8;
    param_2 = puVar8 + 8;
    puVar1 = auStack_480 + 0x300;
    puStack_c8 = &UNK_10777bf48;
    pppppppuStack_d0 = pppppppuVar10;
    func_0x00010777d1f4();
    puVar4 = auStack_170;
    func_0x00010777dae0();
    func_0x00010777d950();
    func_0x00010777d5e0();
    uVar2 = uVar9 == 0xff;
    if (uVar9 < 0x100) {
      func_0x00010777d748();
      uVar5 = extraout_w8_00;
    }
    else {
      auStack_480[0x30f] = uVar6;
      func_0x00010777d540();
      func_0x00010777d2c0();
      func_0x000107404cc4();
      uVar5 = 1;
    }
    param_1[0x10] = uVar5;
    func_0x00010777d1dc();
    if ((bool)uVar2) {
      return puVar3;
    }
    ___stack_chk_fail();
    puVar11 = &UNK_10777c0b4;
    puVar8 = puVar3;
    func_0x00010777d638();
    param_1 = puVar3;
    pppppppuVar10 = &pppppppuStack_d0;
  }
  if (*(int *)(puVar8 + 0x68) == 2) {
    puVar3 = param_2 + 8;
    param_2 = puVar8 + 8;
    *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar1 + -0x28) = unaff_x21;
    *(undefined1 **)(puVar1 + -0x20) = puVar4;
    *(undefined1 **)(puVar1 + -0x18) = param_1;
    *(undefined8 ********)(puVar1 + -0x10) = pppppppuVar10;
    *(undefined **)(puVar1 + -8) = puVar11;
    pppppppuVar10 = (undefined8 *******)(puVar1 + -0x10);
    func_0x00010777d1f4();
    puVar4 = puVar1 + -0xb0;
    func_0x00010777dacc();
    func_0x00010777d950();
    func_0x00010777d5e0();
    uVar2 = uVar9 == 0xff;
    if (uVar9 < 0x100) {
      func_0x00010777d748();
      uVar5 = extraout_w8_01;
    }
    else {
      puVar1[-0xb1] = uVar6;
      func_0x00010777d540();
      func_0x00010777d2c0();
      func_0x000107404cc4();
      uVar5 = 1;
    }
    param_1[0x10] = uVar5;
    func_0x00010777d1dc();
    if ((bool)uVar2) {
      return puVar3;
    }
    ___stack_chk_fail();
    puVar11 = &UNK_10777c14c;
    puVar8 = puVar3;
    func_0x00010777d638();
    puVar1 = puVar1 + -0xc0;
    param_1 = puVar3;
  }
  if (*(int *)(puVar8 + 0x68) == 3) {
    puVar3 = param_2 + 8;
    param_2 = puVar8 + 8;
    *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar1 + -0x28) = unaff_x21;
    *(undefined1 **)(puVar1 + -0x20) = puVar4;
    *(undefined1 **)(puVar1 + -0x18) = param_1;
    *(undefined8 ********)(puVar1 + -0x10) = pppppppuVar10;
    *(undefined **)(puVar1 + -8) = puVar11;
    pppppppuVar10 = (undefined8 *******)(puVar1 + -0x10);
    func_0x00010777d1f4(puVar3);
    puVar4 = puVar1 + -0xb0;
    puVar3 = puVar1 + -0xb0;
    func_0x0001072ddd58();
    func_0x00010777d950();
    func_0x00010777d5e0();
    uVar2 = uVar9 == 0xff;
    if (uVar9 < 0x100) {
      func_0x00010777d748();
      uVar5 = extraout_w8_02;
    }
    else {
      puVar1[-0xb1] = uVar6;
      func_0x00010777d540();
      func_0x00010777d2c0();
      func_0x000107404cc4();
      uVar5 = 1;
    }
    param_1[0x10] = uVar5;
    func_0x00010777d1dc();
    if ((bool)uVar2) {
      return puVar3;
    }
    ___stack_chk_fail();
    puVar11 = &UNK_10777c1e8;
    puVar8 = puVar3;
    func_0x00010777d638();
    puVar1 = puVar1 + -0xc0;
    param_1 = puVar3;
  }
  uVar2 = 0;
  if (*(int *)(puVar8 + 0x68) == 4) {
    param_2 = param_2 + 8;
    *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar1 + -0x28) = unaff_x21;
    *(undefined1 **)(puVar1 + -0x20) = puVar4;
    *(undefined1 **)(puVar1 + -0x18) = param_1;
    *(undefined8 ********)(puVar1 + -0x10) = pppppppuVar10;
    *(undefined **)(puVar1 + -8) = puVar11;
    pppppppuVar10 = (undefined8 *******)(puVar1 + -0x10);
    func_0x00010777d1f4(param_2,puVar8 + 8);
    puVar4 = puVar1 + -0xb0;
    func_0x00010777da1c();
    func_0x00010777d950();
    func_0x00010777d5e0();
    uVar2 = uVar9 == 0xff;
    if (uVar9 < 0x100) {
      func_0x00010777d748();
      uVar5 = extraout_w8_03;
    }
    else {
      puVar1[-0xb1] = uVar6;
      func_0x00010777d540();
      func_0x00010777d2c0();
      func_0x000107404cc4();
      uVar5 = 1;
    }
    param_1[0x10] = uVar5;
    func_0x00010777d1dc();
    if ((bool)uVar2) {
      return param_2;
    }
    ___stack_chk_fail();
    puVar11 = &UNK_10777c280;
    puVar8 = param_2;
    func_0x00010777d638();
    puVar1 = puVar1 + -0xc0;
    param_1 = param_2;
  }
  *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
  *(undefined1 **)(puVar1 + -0x28) = unaff_x21;
  *(undefined1 **)(puVar1 + -0x20) = puVar4;
  *(undefined1 **)(puVar1 + -0x18) = param_1;
  *(undefined8 ********)(puVar1 + -0x10) = pppppppuVar10;
  *(undefined **)(puVar1 + -8) = puVar11;
  puVar4 = puVar8;
  func_0x00010777d1f4();
  func_0x00010777da78();
  if ((bool)uVar2) {
    lVar7 = *(long *)(puVar8 + 0x10);
    uVar12 = *(undefined8 *)(puVar8 + 8);
    *(undefined8 *)(puVar1 + -0xa0) = *(undefined8 *)(puVar8 + 0x10);
    *(undefined8 *)(puVar1 + -0xa8) = uVar12;
    if (lVar7 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    puVar8 = puVar1 + -0xb0;
    *(undefined4 *)(puVar1 + -0x48) = 5;
    func_0x00010777d950();
    func_0x00010777d5e0();
    uVar2 = uVar9 == 0xff;
    if (uVar9 < 0x100) goto code_r0x00010777c3d0;
    puVar1[-0xc0] = uVar6;
    func_0x00010777d400();
    func_0x00010777bfb4();
code_r0x00010777c3f8:
    func_0x00010777d2c0();
    func_0x000107404cc4();
    uVar6 = 1;
  }
  else {
    if (extraout_w8_05 == 6) {
      unaff_x21 = puVar1 + -0xb0;
      func_0x00010777da44();
      func_0x000107348eb0();
      func_0x00010777d950();
      uVar9 = (uint)puVar4 & 0xffff;
      puVar8 = (undefined1 *)(ulong)uVar9;
      func_0x00010777d640();
      uVar2 = uVar9 == 0xff;
      if (0xff < uVar9) {
        puVar1[-0xc0] = (char)uVar9;
        func_0x00010777d400();
        func_0x00010777bfb4();
        goto code_r0x00010777c3f8;
      }
    }
    else if (extraout_w8_05 == 7) {
      unaff_x21 = puVar1 + -0xb0;
      func_0x00010777da44();
      func_0x000107348ecc();
      func_0x00010777d950();
      uVar9 = (uint)puVar4 & 0xffff;
      puVar8 = (undefined1 *)(ulong)uVar9;
      func_0x00010777d640();
      uVar2 = uVar9 == 0xff;
      if (0xff < uVar9) {
        puVar1[-0xc0] = (char)uVar9;
        func_0x00010777d400();
        func_0x00010777bfb4();
        goto code_r0x00010777c3f8;
      }
    }
    else {
      if (extraout_w8_05 == 8) {
        func_0x00010777dce0();
        func_0x00010777d398(*(undefined8 *)(puVar8 + 8));
        func_0x000107535980(puVar1 + -0xb0);
        unaff_x21 = (undefined1 *)(*(undefined8 **)(puVar8 + 8))[1];
        for (puVar8 = (undefined1 *)**(undefined8 **)(puVar8 + 8); uVar2 = puVar8 == unaff_x21,
            !(bool)uVar2; puVar8 = puVar8 + 0x70) {
          puVar4 = puVar8;
          func_0x00010777bf6c();
          uVar9 = (uint)puVar4 & 0xffff;
          *(short *)(puVar1 + -0xc0) = (short)puVar4;
          uVar2 = uVar9 == 0x100;
          if (uVar9 < 0x100) {
            func_0x00010777d724();
            goto code_r0x00010777c41c;
          }
          func_0x00010777d700();
          func_0x000107535a48();
        }
        func_0x00010777dac0();
        func_0x000107535ae0();
        func_0x00010777d338();
        func_0x000107404cc4();
code_r0x00010777c41c:
        puVar4 = puVar1 + -0xb0;
        func_0x0001073e7720();
        goto code_r0x00010777c408;
      }
      unaff_x21 = puVar1 + -0xb0;
      func_0x00010777da44();
      func_0x0001074fd134();
      func_0x00010777d950();
      uVar9 = (uint)puVar4 & 0xffff;
      puVar8 = (undefined1 *)(ulong)uVar9;
      func_0x00010777d640();
      uVar2 = uVar9 == 0xff;
      if (0xff < uVar9) {
        puVar1[-0xc0] = (char)uVar9;
        func_0x00010777d400();
        func_0x00010777bfb4();
        goto code_r0x00010777c3f8;
      }
    }
code_r0x00010777c3d0:
    func_0x00010777d748();
    uVar6 = extraout_w8_04;
  }
  param_1[0x10] = uVar6;
code_r0x00010777c408:
  func_0x00010777d1dc();
  if ((bool)uVar2) {
    return puVar4;
  }
  ___stack_chk_fail();
  puVar3 = unaff_x21 + 8;
  func_0x00010726af18();
  func_0x00010777d638();
  if ((((*(int *)(puVar3 + 0x68) != 0) && (*(int *)(puVar3 + 0x68) != 1)) &&
      (*(int *)(puVar3 + 0x68) != 2)) && (*(int *)(puVar3 + 0x68) == 3)) {
    puVar11 = &UNK_10777c468;
    func_0x00010777de8c();
    *(undefined1 **)(puVar1 + -0xe0) = puVar8;
    *(undefined1 **)(puVar1 + -0xd8) = puVar4;
    *(undefined1 **)(puVar1 + -0xd0) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -200) = puVar11;
    func_0x00010777d264();
    func_0x00010777d1c4();
    func_0x0001077f2dd0();
    func_0x00010777d374();
    return (undefined1 *)(ulong)((uint)puVar4 & 0xffff);
  }
  return (undefined1 *)0x0;
}



/* Entry: 10777c170; end: 10777c1e7;  */

/* WARNING: Type propagation algorithm not settling */

undefined1 * FUN_10777c170(undefined8 param_1,long param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 extraout_w8;
  undefined1 uVar6;
  undefined1 extraout_w8_00;
  undefined1 extraout_w8_01;
  undefined1 uVar7;
  int extraout_w8_02;
  long lVar8;
  int extraout_w10;
  long unaff_x19;
  undefined1 *puVar9;
  uint uVar10;
  undefined1 *unaff_x21;
  undefined8 unaff_x22;
  undefined8 *******pppppppuVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined1 auStack_240 [207];
  undefined1 uStack_171;
  undefined1 auStack_170 [128];
  undefined8 *******pppppppuStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [15];
  undefined1 uStack_b1;
  undefined1 auStack_b0 [128];
  
  puVar1 = auStack_c0;
  pppppppuVar11 = (undefined8 *******)&stack0xfffffffffffffff0;
  func_0x00010777d1f4();
  puVar5 = auStack_b0;
  puVar3 = auStack_b0;
  func_0x0001072ddd58();
  func_0x00010777d950();
  func_0x00010777d5e0();
  uVar10 = (uint)unaff_x21;
  uVar2 = uVar10 == 0xff;
  uVar7 = SUB81(unaff_x21,0);
  if (uVar10 < 0x100) {
    func_0x00010777d748();
    uVar6 = extraout_w8;
  }
  else {
    uStack_b1 = uVar7;
    func_0x00010777d540();
    func_0x00010777d2c0();
    func_0x000107404cc4();
    uVar6 = 1;
  }
  *(undefined1 *)(unaff_x19 + 0x10) = uVar6;
  func_0x00010777d1dc();
  if ((bool)uVar2) {
    return puVar3;
  }
  ___stack_chk_fail();
  puVar12 = &UNK_10777c1e8;
  puVar9 = puVar3;
  func_0x00010777d638();
  uVar2 = 0;
  if (*(int *)(puVar9 + 0x68) == 4) {
    puVar4 = (undefined1 *)(param_2 + 8);
    puVar1 = auStack_240 + 0xc0;
    puStack_c8 = &UNK_10777c1e8;
    pppppppuStack_d0 = pppppppuVar11;
    func_0x00010777d1f4(puVar4,puVar9 + 8);
    puVar5 = auStack_170;
    func_0x00010777da1c();
    func_0x00010777d950();
    func_0x00010777d5e0();
    uVar2 = uVar10 == 0xff;
    if (uVar10 < 0x100) {
      func_0x00010777d748();
      uVar6 = extraout_w8_00;
    }
    else {
      uStack_171 = uVar7;
      func_0x00010777d540();
      func_0x00010777d2c0();
      func_0x000107404cc4();
      uVar6 = 1;
    }
    puVar3[0x10] = uVar6;
    func_0x00010777d1dc();
    if ((bool)uVar2) {
      return puVar4;
    }
    ___stack_chk_fail();
    puVar12 = &UNK_10777c280;
    puVar9 = puVar4;
    func_0x00010777d638();
    puVar3 = puVar4;
    pppppppuVar11 = &pppppppuStack_d0;
  }
  *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
  *(undefined1 **)(puVar1 + -0x28) = unaff_x21;
  *(undefined1 **)(puVar1 + -0x20) = puVar5;
  *(undefined1 **)(puVar1 + -0x18) = puVar3;
  *(undefined8 ********)(puVar1 + -0x10) = pppppppuVar11;
  *(undefined **)(puVar1 + -8) = puVar12;
  puVar5 = puVar9;
  func_0x00010777d1f4();
  func_0x00010777da78();
  if ((bool)uVar2) {
    lVar8 = *(long *)(puVar9 + 0x10);
    uVar13 = *(undefined8 *)(puVar9 + 8);
    *(undefined8 *)(puVar1 + -0xa0) = *(undefined8 *)(puVar9 + 0x10);
    *(undefined8 *)(puVar1 + -0xa8) = uVar13;
    if (lVar8 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    puVar9 = puVar1 + -0xb0;
    *(undefined4 *)(puVar1 + -0x48) = 5;
    func_0x00010777d950();
    func_0x00010777d5e0();
    uVar2 = uVar10 == 0xff;
    if (uVar10 < 0x100) goto code_r0x00010777c3d0;
    puVar1[-0xc0] = uVar7;
    func_0x00010777d400();
    func_0x00010777bfb4();
code_r0x00010777c3f8:
    func_0x00010777d2c0();
    func_0x000107404cc4();
    uVar7 = 1;
  }
  else {
    if (extraout_w8_02 == 6) {
      unaff_x21 = puVar1 + -0xb0;
      func_0x00010777da44();
      func_0x000107348eb0();
      func_0x00010777d950();
      uVar10 = (uint)puVar5 & 0xffff;
      puVar9 = (undefined1 *)(ulong)uVar10;
      func_0x00010777d640();
      uVar2 = uVar10 == 0xff;
      if (0xff < uVar10) {
        puVar1[-0xc0] = (char)uVar10;
        func_0x00010777d400();
        func_0x00010777bfb4();
        goto code_r0x00010777c3f8;
      }
    }
    else if (extraout_w8_02 == 7) {
      unaff_x21 = puVar1 + -0xb0;
      func_0x00010777da44();
      func_0x000107348ecc();
      func_0x00010777d950();
      uVar10 = (uint)puVar5 & 0xffff;
      puVar9 = (undefined1 *)(ulong)uVar10;
      func_0x00010777d640();
      uVar2 = uVar10 == 0xff;
      if (0xff < uVar10) {
        puVar1[-0xc0] = (char)uVar10;
        func_0x00010777d400();
        func_0x00010777bfb4();
        goto code_r0x00010777c3f8;
      }
    }
    else {
      if (extraout_w8_02 == 8) {
        func_0x00010777dce0();
        func_0x00010777d398(*(undefined8 *)(puVar9 + 8));
        func_0x000107535980(puVar1 + -0xb0);
        unaff_x21 = (undefined1 *)(*(undefined8 **)(puVar9 + 8))[1];
        for (puVar9 = (undefined1 *)**(undefined8 **)(puVar9 + 8); uVar2 = puVar9 == unaff_x21,
            !(bool)uVar2; puVar9 = puVar9 + 0x70) {
          puVar3 = puVar9;
          func_0x00010777bf6c();
          uVar10 = (uint)puVar3 & 0xffff;
          *(short *)(puVar1 + -0xc0) = (short)puVar3;
          uVar2 = uVar10 == 0x100;
          if (uVar10 < 0x100) {
            func_0x00010777d724();
            goto code_r0x00010777c41c;
          }
          func_0x00010777d700();
          func_0x000107535a48();
        }
        func_0x00010777dac0();
        func_0x000107535ae0();
        func_0x00010777d338();
        func_0x000107404cc4();
code_r0x00010777c41c:
        puVar5 = puVar1 + -0xb0;
        func_0x0001073e7720();
        goto code_r0x00010777c408;
      }
      unaff_x21 = puVar1 + -0xb0;
      func_0x00010777da44();
      func_0x0001074fd134();
      func_0x00010777d950();
      uVar10 = (uint)puVar5 & 0xffff;
      puVar9 = (undefined1 *)(ulong)uVar10;
      func_0x00010777d640();
      uVar2 = uVar10 == 0xff;
      if (0xff < uVar10) {
        puVar1[-0xc0] = (char)uVar10;
        func_0x00010777d400();
        func_0x00010777bfb4();
        goto code_r0x00010777c3f8;
      }
    }
code_r0x00010777c3d0:
    func_0x00010777d748();
    uVar7 = extraout_w8_01;
  }
  puVar3[0x10] = uVar7;
code_r0x00010777c408:
  func_0x00010777d1dc();
  if ((bool)uVar2) {
    return puVar5;
  }
  ___stack_chk_fail();
  puVar3 = unaff_x21 + 8;
  func_0x00010726af18();
  func_0x00010777d638();
  if ((((*(int *)(puVar3 + 0x68) != 0) && (*(int *)(puVar3 + 0x68) != 1)) &&
      (*(int *)(puVar3 + 0x68) != 2)) && (*(int *)(puVar3 + 0x68) == 3)) {
    puVar12 = &UNK_10777c468;
    func_0x00010777de8c();
    *(undefined1 **)(puVar1 + -0xe0) = puVar9;
    *(undefined1 **)(puVar1 + -0xd8) = puVar5;
    *(undefined1 **)(puVar1 + -0xd0) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -200) = puVar12;
    func_0x00010777d264();
    func_0x00010777d1c4();
    func_0x0001077f2dd0();
    func_0x00010777d374();
    return (undefined1 *)(ulong)((uint)puVar5 & 0xffff);
  }
  return (undefined1 *)0x0;
}



/* Entry: 10777c5dc; end: 10777c693;  */

ulong FUN_10777c5dc(ulong param_1)

{
  func_0x00010777c5f4();
  return param_1 & 0xffffffffff;
}



/* Entry: 10777c8c4; end: 10777c91b;  */

undefined2 FUN_10777c8c4(long param_1)

{
  undefined2 unaff_w19;
  
  if ((((*(int *)(param_1 + 0x68) != 0) && (*(int *)(param_1 + 0x68) != 1)) &&
      (*(int *)(param_1 + 0x68) != 2)) && (*(int *)(param_1 + 0x68) == 3)) {
    func_0x00010777de8c();
    func_0x00010777d264();
    func_0x00010777d1c4();
    func_0x0001077f3244();
    func_0x00010777d374();
    return unaff_w19;
  }
  return 0;
}



/* Entry: 10777cae4; end: 10777cb3b;  */

undefined2 FUN_10777cae4(long param_1)

{
  undefined2 unaff_w19;
  
  if ((((*(int *)(param_1 + 0x68) != 0) && (*(int *)(param_1 + 0x68) != 1)) &&
      (*(int *)(param_1 + 0x68) != 2)) && (*(int *)(param_1 + 0x68) == 3)) {
    func_0x00010777de8c();
    func_0x00010777d264();
    func_0x00010777d1c4();
    func_0x0001077f338c();
    func_0x00010777d374();
    return unaff_w19;
  }
  return 0;
}



/* Entry: 10777cd04; end: 10777cd5b;  */

undefined2 FUN_10777cd04(long param_1)

{
  undefined2 unaff_w19;
  
  if ((((*(int *)(param_1 + 0x68) != 0) && (*(int *)(param_1 + 0x68) != 1)) &&
      (*(int *)(param_1 + 0x68) != 2)) && (*(int *)(param_1 + 0x68) == 3)) {
    func_0x00010777de8c();
    func_0x00010777d264();
    func_0x00010777d1c4();
    func_0x0001077f2f68();
    func_0x00010777d374();
    return unaff_w19;
  }
  return 0;
}



/* Entry: 10777cf24; end: 10777cf83;  */

void FUN_10777cf24(long *param_1,long param_2,ulong *param_3)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  undefined1 uVar5;
  undefined1 extraout_w8;
  int extraout_w8_00;
  long lVar6;
  long *plVar7;
  long alStack_60 [4];
  
  if ((((*(int *)(param_2 + 0x68) == 0) || (*(int *)(param_2 + 0x68) == 1)) ||
      (*(int *)(param_2 + 0x68) == 2)) ||
     ((*(int *)(param_2 + 0x68) == 3 || (bVar2 = *(int *)(param_2 + 0x68) == 4, bVar2)))) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 4) = 0;
    return;
  }
  plVar7 = alStack_60;
  func_0x00010777da78();
  if (((!bVar2) && (extraout_w8_00 != 6)) && ((extraout_w8_00 != 7 && (extraout_w8_00 == 8)))) {
    lVar6 = **(long **)(param_2 + 8);
    lVar1 = (*(long **)(param_2 + 8))[1];
    if (lVar1 - lVar6 == 0x1c0) {
      do {
        if (lVar6 == lVar1) {
          param_1[1] = alStack_60[1];
          *param_1 = alStack_60[0];
          param_1[3] = alStack_60[3];
          param_1[2] = alStack_60[2];
          uVar5 = 1;
code_r0x00010777d034:
          *(undefined1 *)(param_1 + 4) = uVar5;
          return;
        }
        uVar4 = *param_3;
        lVar3 = lVar6;
        func_0x000107775240();
        if ((uVar4 & 1) == 0) {
          func_0x00010777d748();
          uVar5 = extraout_w8;
          goto code_r0x00010777d034;
        }
        *plVar7 = lVar3;
        lVar6 = lVar6 + 0x70;
        plVar7 = plVar7 + 1;
      } while( true );
    }
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}



/* Entry: 10777decc; end: 10777decf;  */

undefined8 * FUN_10777decc(undefined8 *param_1)

{
  func_0x000104c3365c(param_1 + 0x18);
  func_0x000107327aec(param_1 + 9);
  *param_1 = &PTR_DAT_1109d4888;
  func_0x0001001148fc(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10777e938; end: 10777e98b;  */

int * FUN_10777e938(long param_1,long param_2)

{
  int *piVar1;
  long lVar2;
  
  if (*(int *)(param_2 + 8) == 0x17) {
    lVar2 = param_1 + 0x48;
    func_0x00010774b3f4(lVar2,param_2 + 0x48);
    if ((int)lVar2 != 0) {
      piVar1 = (int *)(param_1 + 0xc0);
      if (*(int *)(param_2 + 0xc0) == *piVar1) {
        func_0x00010774edfc();
        func_0x00010774e544();
        return piVar1;
      }
      return (int *)0x0;
    }
  }
  return (int *)0x0;
}



/* Entry: 10777f398; end: 10777f3a3;  */

long * FUN_10777f398(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  ulong unaff_x20;
  
  func_0x00010777fa70();
  func_0x00010777fa9c();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    if (0xaaaaaaaaaaaaaaa < unaff_x20) {
      func_0x000104bd35f4();
      lVar1 = param_1[1];
      while (lVar1 != param_1[2]) {
        param_1[2] = param_1[2] + -0x18;
        func_0x0001073c6654();
      }
      if (*param_1 != 0) {
        __ZdlPv();
      }
      return param_1;
    }
    lVar1 = unaff_x20 * 0x18;
    __Znwm();
  }
  lVar2 = lVar1 + param_3 * 0x18;
  *unaff_x19 = lVar1;
  unaff_x19[1] = lVar2;
  unaff_x19[2] = lVar2;
  unaff_x19[3] = lVar1 + unaff_x20 * 0x18;
  return unaff_x19;
}



/* Entry: 10777f638; end: 10777f6ff;  */

long * FUN_10777f638(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -0x18;
    func_0x0001073c66e0();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10777faa8; end: 10777fb67;  */

/* WARNING: Possible PIC construction at 0x00010777fb18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010777fb54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010777fb58) */
/* WARNING: Removing unreachable block (ram,0x00010777fb60) */

undefined1 * FUN_10777faa8(undefined8 *param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [112];
  uint uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)(param_1 + 2) == '\x01') {
    func_0x000107753050(auStack_a8,*param_1);
    if (uStack_30 == 1) {
      func_0x00010727f7dc();
      func_0x000107280530();
    }
  }
  else {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
      return (undefined1 *)0x1;
    }
    ___stack_chk_fail();
  }
  puVar1 = auStack_a0;
  if (uStack_30 != 0xffffffff) {
    func_0x000107285594((&PTR_DAT_110996f18)[uStack_30]);
  }
  return puVar1;
}



/* Entry: 10777fe78; end: 10777fec3;  */

undefined8 * FUN_10777fe78(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110996440;
  param_1[1] = 0;
  func_0x00010777fec4(param_1 + 3);
  return param_1;
}



/* Entry: 107780540; end: 1077805c3;  */

byte * FUN_107780540(byte *param_1)

{
  byte *pbVar1;
  undefined1 in_ZR;
  byte *pbVar2;
  byte *pbVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  byte *unaff_x19;
  undefined8 unaff_x20;
  
  func_0x000107781398();
  if (*(int *)(param_1 + 0x30) == 0) {
    pbVar2 = (byte *)0x0;
  }
  else {
    in_ZR = *(int *)(param_1 + 0x30) == 1;
    if ((bool)in_ZR) {
      param_1 = (byte *)(ulong)*param_1;
    }
    else {
      func_0x000107280464();
      func_0x0001077813f8();
    }
    pbVar2 = (byte *)(ulong)((uint)param_1 | 0x100);
    unaff_x19 = param_1;
  }
  func_0x000107781384(extraout_x8);
  if ((bool)in_ZR) {
    return pbVar2;
  }
  ___stack_chk_fail();
  func_0x0001077813b0();
  func_0x0001077813bc();
  pbVar3 = *(byte **)(pbVar2 + 0x150);
  (**(code **)(*(long *)pbVar3 + 0x18))();
  pbVar1 = pbVar2 + 0x18;
  if (pbVar2[0x50] == 0) {
    pbVar1 = pbVar3;
  }
  func_0x0001000d03a8(extraout_x8_00,pbVar1);
  func_0x000104c2feb0();
  unaff_x19[0x30] = 0xff;
  unaff_x19[0x31] = 0xff;
  unaff_x19[0x32] = 0xff;
  unaff_x19[0x33] = 0xff;
  unaff_x19[0x34] = 0xff;
  unaff_x19[0x35] = 0xff;
  unaff_x19[0x36] = 0xff;
  unaff_x19[0x37] = 0xff;
  func_0x000104c2fe38();
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  return unaff_x19;
}



/* Entry: 107780cbc; end: 107780cf7;  */

undefined1 * FUN_107780cbc(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  func_0x000107780cf8();
  return param_1;
}



/* Entry: 107780e58; end: 107780efb;  */

long FUN_107780e58(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001072f5e08();
  func_0x0001072f5e08(lVar1 + 0x48,param_2 + 0x48);
  return param_1;
}



/* Entry: 10778104c; end: 107781097;  */

long FUN_10778104c(long param_1,long param_2,uint param_3)

{
  long lVar1;
  
  lVar1 = param_2;
  func_0x000107781098();
  if (((param_3 & 1) == 0) && (lVar1 = param_1, *(char *)(param_2 + 0x30) == '\x01')) {
    lVar1 = *(long *)(param_2 + 0x28);
  }
  return lVar1;
}



/* Entry: 107781210; end: 107781253;  */

long * FUN_107781210(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[3];
  if (plVar1 == param_1) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return param_1;
    }
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
  return param_1;
}



/* Entry: 10778133c; end: 107781363;  */

undefined ** FUN_10778133c(void)

{
  return &PTR_DAT_1109d6e00;
}



/* Entry: 107781b10; end: 107781b1b;  */

void FUN_107781b10(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_2);
  return;
}



/* Entry: 107781d40; end: 107781dc7;  */

ulong FUN_107781d40(ulong param_1,long param_2,code *UNRECOVERED_JUMPTABLE)

{
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    return (ulong)(*(char *)(param_2 + 0x10) == '\0');
  }
  if (*(char *)(param_2 + 0x10) != '\0') {
    func_0x0001077832e0();
    func_0x00010778395c();
    func_0x0001077839a4();
                    /* WARNING: Could not recover jumptable at 0x000107781d74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return param_1;
  }
  return 0;
}



/* Entry: 10778258c; end: 1077825c7;  */

void FUN_10778258c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0001072684ec();
  func_0x000107783584(param_1,&stack0xffffffffffffffe8,param_3);
  return;
}



/* Entry: 107783268; end: 10778328b;  */

undefined8 FUN_107783268(undefined8 param_1)

{
  func_0x00010778328c(param_1,0);
  return param_1;
}



/* Entry: 1077833e4; end: 107783427;  */

void FUN_1077833e4(long param_1)

{
  if (*(uint *)(param_1 + 0x18) != 0xffffffff) {
    func_0x000107783840((&PTR_DAT_1109d6f10)[*(uint *)(param_1 + 0x18)]);
  }
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  return;
}



/* Entry: 10778350c; end: 107783533;  */

long FUN_10778350c(long param_1)

{
  func_0x000107783534();
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10778369c; end: 1077836cf;  */

long FUN_10778369c(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000104c318bc(param_1,*param_2);
  func_0x000104c32a18(lVar1 + 0x38,*param_3);
  return param_1;
}



/* Entry: 107783c30; end: 107783c43;  */

void FUN_107783c30(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x107783c34);
  (*pcVar1)();
}



/* Entry: 107784030; end: 107784083;  */

long FUN_107784030(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = param_1 + 0x168;
  func_0x0001077859c4(lVar2);
  uVar1 = lVar2 + 0x9e3779b97f4a7c15;
  param_1 = param_1 + 0x1a0;
  func_0x0001077859c4(param_1);
  return (param_1 + uVar1 * 0x1000 + (uVar1 >> 4) + 0x9e3779b97f4a7c15 ^ uVar1) + 0x9e3779b97f4a7c15
  ;
}



/* Entry: 107784b98; end: 107784bef;  */

void FUN_107784b98(long param_1)

{
  undefined1 in_ZR;
  undefined1 auStack_68 [72];
  
  func_0x000107786380();
  if (((*(byte *)(param_1 + 8) & 1) == 0) && ((*(byte *)(param_1 + 0x18) & 1) == 0)) {
    func_0x000107786670();
  }
  else {
    func_0x000107784fbc(auStack_68);
    func_0x000107786470();
    func_0x00010778647c(3);
  }
  func_0x000107786334();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x000107785298();
  return;
}



/* Entry: 107784e0c; end: 107784e47;  */

void FUN_107784e0c(undefined8 param_1,float *param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined1 uVar3;
  float *pfVar4;
  undefined8 *extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *puVar5;
  undefined8 *extraout_x8_02;
  undefined8 *extraout_x8_03;
  undefined8 *puVar6;
  undefined4 *extraout_x8_04;
  undefined8 unaff_x20;
  undefined8 ******ppppppuVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_d0 [8];
  float afStack_c8 [2];
  double dStack_c0;
  undefined8 uStack_88;
  undefined8 *****pppppuStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [80];
  undefined1 *puVar2;
  
  puVar2 = auStack_70;
  ppppppuVar7 = (undefined8 ******)&stack0xfffffffffffffff0;
  func_0x000107786360();
  func_0x00010778657c();
  func_0x000107786470();
  func_0x00010778643c();
  func_0x000107786334();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    puVar9 = &UNK_107784e48;
    __Unwind_Resume();
    puVar6 = extraout_x8;
    if (param_2[0xc] == 0.0) {
code_r0x0001077863ac:
      puVar6[8] = 0;
      puVar6[5] = 0;
      puVar6[4] = 0;
      puVar6[7] = 0;
      puVar6[6] = 0;
      puVar6[1] = 0;
      *puVar6 = 0;
      puVar6[3] = 0;
      puVar6[2] = 0;
      *(undefined4 *)puVar6 = 7;
      return;
    }
    uVar3 = param_2[0xc] == 1.4013e-45;
    puVar5 = extraout_x8;
    if ((bool)uVar3) {
      puVar2 = auStack_d0;
      puStack_78 = &UNK_107784e48;
      param_3 = extraout_x8;
      pppppuStack_80 = ppppppuVar7;
      func_0x000107786418();
      dStack_c0 = (double)*param_2;
      afStack_c8[0] = 4.2039e-45;
      param_2 = afStack_c8;
      uStack_88 = extraout_x8_00;
      func_0x000104c32a18();
      *(undefined1 *)(param_3 + 8) = 1;
      func_0x000107786500();
      func_0x00010778634c(uStack_88);
      if ((bool)uVar3) {
        return;
      }
      puVar9 = &UNK_107784ed0;
      ___stack_chk_fail();
      puVar5 = extraout_x8_01;
      ppppppuVar7 = &pppppuStack_80;
    }
    puVar1 = puVar2 + -0x70;
    *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar2 + -0x18) = param_1;
    *(undefined8 *******)(puVar2 + -0x10) = ppppppuVar7;
    *(undefined **)(puVar2 + -8) = puVar9;
    puVar8 = puVar2 + -0x10;
    func_0x000107786360();
    func_0x00010778657c();
    func_0x000107786470();
    func_0x00010778643c();
    func_0x000107786334();
    if (!(bool)uVar3) {
      ___stack_chk_fail();
      puVar9 = &UNK_107784f0c;
      __Unwind_Resume();
      puVar6 = extraout_x8_02;
      if (*(int *)(param_3 + 0x13) == 0) goto code_r0x0001077863ac;
      pfVar4 = (float *)(param_3 + 1);
      uVar3 = *(int *)(param_3 + 0x13) == 1;
      if ((bool)uVar3) {
        puVar1 = puVar2 + -0xe0;
        *(undefined8 *)(puVar2 + -0x90) = unaff_x20;
        *(undefined8 **)(puVar2 + -0x88) = puVar5;
        *(undefined1 **)(puVar2 + -0x80) = puVar8;
        *(undefined **)(puVar2 + -0x78) = &UNK_107784f0c;
        puVar8 = puVar2 + -0x80;
        func_0x000107786380();
        func_0x00010775f12c(puVar2 + -0xd8);
        func_0x000107786470();
        func_0x00010778647c(1);
        func_0x000107786334();
        if ((bool)uVar3) {
          return;
        }
        ___stack_chk_fail();
        puVar9 = &UNK_107784f80;
        __Unwind_Resume();
        param_2 = pfVar4;
        puVar6 = extraout_x8_03;
      }
      *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
      *(undefined8 **)(puVar1 + -0x18) = puVar5;
      *(undefined1 **)(puVar1 + -0x10) = puVar8;
      *(undefined **)(puVar1 + -8) = puVar9;
      func_0x000107786360();
      func_0x00010778657c();
      func_0x000107786470();
      func_0x00010778643c();
      func_0x000107786334();
      if (!(bool)uVar3) {
        ___stack_chk_fail();
        __Unwind_Resume();
        *(undefined8 *)(puVar1 + -0x90) = unaff_x20;
        *(undefined8 **)(puVar1 + -0x88) = puVar6;
        *(undefined1 **)(puVar1 + -0x80) = puVar1 + -0x10;
        *(undefined **)(puVar1 + -0x78) = &SUB_107784fbc;
        func_0x000107269c1c(puVar1 + -0xa0);
        if (*(char *)(param_2 + 2) == '\x01') {
          func_0x0001077867e0(*(undefined8 *)param_2);
          FUN_107785078(puVar1 + -0xc0);
        }
        if (*(char *)(param_2 + 6) == '\x01') {
          func_0x0001077867e0(*(undefined8 *)(param_2 + 4));
          func_0x0001077850a0(puVar1 + -0xc0,puVar1 + -0xa0,"delay",puVar1 + -0xa8);
        }
        uVar11 = *(undefined8 *)(puVar1 + -0x98);
        uVar10 = *(undefined8 *)(puVar1 + -0xa0);
        *(undefined8 *)(puVar1 + -0xa0) = 0;
        *(undefined8 *)(puVar1 + -0x98) = 0;
        *extraout_x8_04 = 1;
        *(undefined8 *)(extraout_x8_04 + 4) = uVar11;
        *(undefined8 *)(extraout_x8_04 + 2) = uVar10;
        *(undefined8 *)(puVar1 + -0xd0) = 0;
        *(undefined8 *)(puVar1 + -200) = 0;
        func_0x000104c335c0(puVar1 + -0xd0);
        func_0x000104c335c0(puVar1 + -0xa0);
        return;
      }
    }
  }
  return;
}



/* Entry: 107785078; end: 1077850c7;  */

void FUN_107785078(void)

{
  func_0x0001077865d8();
  func_0x0001077867a4();
  func_0x0001077850e8(&stack0xffffffffffffffe8);
  return;
}



/* Entry: 1077851b0; end: 1077851cf;  */

void FUN_1077851b0(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001077851d0(&uStack_18);
  return;
}



/* Entry: 1077852c8; end: 10778531b;  */

long FUN_1077852c8(long param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  undefined1 in_ZR;
  long lVar3;
  undefined4 *puVar4;
  undefined8 extraout_x8;
  long lVar5;
  ulong uVar6;
  undefined4 auStack_58 [2];
  undefined1 uStack_50;
  undefined8 uStack_18;
  
  func_0x000107786418();
  uStack_50 = *param_3;
  auStack_58[0] = 6;
  puVar4 = auStack_58;
  uStack_18 = extraout_x8;
  func_0x000104c32a18();
  *(undefined1 *)(param_1 + 0x40) = 1;
  func_0x000107786500();
  func_0x00010778634c(uStack_18);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107786360();
  func_0x00010778657c();
  func_0x000107786470();
  func_0x00010778643c();
  func_0x000107786334();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    __Unwind_Resume();
    uVar1 = ((long)puVar4 - param_1) / 0x18;
    while (lVar2 = param_1, uVar1 != 0) {
      uVar6 = uVar1 >> 1;
      lVar5 = lVar2 + uVar6 * 0x18;
      lVar3 = lVar5;
      func_0x0001077853d8(lVar5,param_4);
      uVar1 = uVar1 + (uVar1 >> 1 ^ 0xffffffffffffffff);
      param_1 = lVar5 + 0x18;
      if ((int)lVar3 == 0) {
        uVar1 = uVar6;
        param_1 = lVar2;
      }
    }
    return lVar2;
  }
  return param_1;
}



/* Entry: 10778553c; end: 10778556b;  */

undefined8 * FUN_10778553c(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x41041041041042) {
    puVar1 = (undefined8 *)(param_2 * 0x3f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109d7158;
  func_0x0001077855d4(param_1 + 3);
  return param_1;
}



/* Entry: 107785684; end: 10778577f;  */

void FUN_107785684(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 extraout_x8;
  long lVar4;
  undefined8 uVar5;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  lVar4 = param_2;
  func_0x0001077866dc();
  *unaff_x20 = extraout_x8;
  func_0x000104c2fe00(param_1 + 8,lVar4 + 8);
  func_0x000104c2fe00(unaff_x19 + 0x40,param_2 + 0x40);
  func_0x000104c2fe00(unaff_x20 + 0xf,param_2 + 0x78);
  lVar4 = *(long *)(param_2 + 0xb8);
  uVar5 = *(undefined8 *)(param_2 + 0xb0);
  *(undefined8 *)(unaff_x19 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(unaff_x19 + 0xb0) = uVar5;
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
  func_0x000107299490(unaff_x19 + 0xc0,param_2 + 0xc0);
  func_0x000107299598(unaff_x19 + 0xd0,param_2 + 0xd0);
  uVar5 = *(undefined8 *)(param_2 + 0x130);
  *(undefined1 *)(unaff_x19 + 0x138) = *(undefined1 *)(param_2 + 0x138);
  *(undefined8 *)(unaff_x19 + 0x130) = uVar5;
  func_0x0001077832f8(unaff_x19 + 0x140,param_2 + 0x140);
  *(undefined1 *)(unaff_x19 + 0x160) = *(undefined1 *)(param_2 + 0x160);
  return;
}



/* Entry: 107785974; end: 1077859c3;  */

long FUN_107785974(long param_1)

{
  undefined1 in_ZR;
  long *plStack_90;
  long lStack_88;
  undefined1 *puStack_80;
  undefined *puStack_78;
  
  func_0x000107786360();
  func_0x00010778657c();
  func_0x000107786538();
  func_0x0001077778dc();
  func_0x000107786500();
  func_0x000107786334();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107786500();
  func_0x000107786550();
  puStack_78 = &SUB_1077859c4;
  lStack_88 = 0;
  if (*(int *)(param_1 + 0x30) == 0) {
    lStack_88 = 0;
  }
  else {
    plStack_90 = &lStack_88;
    puStack_80 = &stack0xfffffffffffffff0;
    func_0x000107785a04(&plStack_90,param_1);
  }
  return lStack_88;
}



/* Entry: 107785bb8; end: 107785bfb;  */

undefined8 * FUN_107785bb8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x000107786768();
  func_0x0001073db32c(&uStack_40);
  return param_1;
}



/* Entry: 107785d18; end: 107785d4b;  */

void FUN_107785d18(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x40) == 1) {
    uVar1 = *param_3;
    param_2[1] = param_3[1];
    *param_2 = uVar1;
    return;
  }
  func_0x000107786568();
  func_0x000107785d4c();
  return;
}



/* Entry: 107785e48; end: 107785e67;  */

undefined8 FUN_107785e48(void)

{
  return 1;
}



/* Entry: 107785f64; end: 107785f93;  */

void FUN_107785f64(void)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x000107786544();
  func_0x0001072ca524();
  *unaff_x20 = *unaff_x19;
  *(undefined4 *)(unaff_x20 + 7) = 1;
  return;
}



/* Entry: 1077860a0; end: 1077860ff;  */

void FUN_1077860a0(long param_1,long param_2)

{
  uint uVar1;
  undefined1 uStack_19;
  undefined1 *puStack_18;
  
  uVar1 = *(uint *)(param_1 + 0x98);
  if (uVar1 != 0xffffffff && *(uint *)(param_2 + 0x98) == uVar1) {
    puStack_18 = &uStack_19;
    (*(code *)(&PTR_DAT_1109d7258)[uVar1])(&puStack_18,param_1 + 8,param_2 + 8);
  }
  return;
}



/* Entry: 107786204; end: 107786267;  */

void FUN_107786204(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x20;
  long alStack_88 [13];
  
  func_0x0001077863c8();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x000107278acc(alStack_88,uVar3);
  func_0x000107786538();
  func_0x00010748324c();
  plVar1 = alStack_88;
  func_0x00010726b164();
  func_0x000107786334();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  plVar2 = alStack_88;
  func_0x00010726b164();
  func_0x000107786550();
  if (*(int *)(*plVar2 + 0x90) == 2) {
    func_0x000107786544(uVar3,param_3);
    func_0x0001072f6188();
    func_0x000107295ba8(unaff_x20 + 0x28,plVar1 + 5);
    return;
  }
  func_0x000107786568();
  func_0x0001077862d0();
  return;
}



/* Entry: 107786840; end: 1077868c3;  */

long FUN_107786840(undefined8 *param_1)

{
  undefined8 extraout_x8;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  *param_1 = &PTR_DAT_1109d72b0;
  func_0x000107784aec(param_1 + 0x3b);
  func_0x000107785810(param_1 + 0x2d);
  func_0x0001077866dc(param_1);
  *unaff_x20 = extraout_x8;
  func_0x000107284db4(param_1 + 0x28);
  func_0x000107284d8c(unaff_x19 + 0xd0);
  func_0x000107283194(unaff_x19 + 0xc0);
  func_0x0001072c9b9c(unaff_x19 + 0xb0);
  func_0x000104c2f714(unaff_x19 + 0x78);
  func_0x000104c2f714(unaff_x19 + 0x40);
  func_0x000104c2f714(unaff_x20 + 1);
  return unaff_x19;
}



/* Entry: 1077869f4; end: 107786a33;  */

long FUN_1077869f4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001073df1c8();
  func_0x0001073df1c8(lVar1 + 0x60);
  return param_1;
}



/* Entry: 107786c7c; end: 107786ca3;  */

long FUN_107786c7c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 107786e14; end: 107786e23;  */

void FUN_107786e14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107786e1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 107786ff4; end: 107787007;  */

void FUN_107786ff4(void)

{
  func_0x000107787034();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107787134; end: 107787137;  */

void FUN_107787134(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107787dd0; end: 107787ea3;  */

long FUN_107787dd0(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = param_1 + 0x168;
  func_0x0001077859c4(lVar2);
  uVar1 = lVar2 + 0x9e3779b97f4a7c15;
  func_0x00010778bd00(param_1 + 0x1a0);
  func_0x00010778c650();
  func_0x0001077859c4(param_1 + 0x218);
  func_0x00010778c650();
  func_0x0001077859c4(param_1 + 0x250);
  func_0x00010778c650();
  func_0x0001077859c4(param_1 + 0x288);
  func_0x00010778c650();
  func_0x0001077859c4(param_1 + 0x2c0);
  func_0x00010778c650();
  func_0x0001077859c4(param_1 + 0x2f8);
  func_0x00010778c650();
  func_0x00010778bd00(param_1 + 0x330);
  func_0x00010778c650();
  func_0x00010778bd00(param_1 + 0x3a8);
  func_0x00010778c650();
  func_0x00010778bd00(param_1 + 0x420);
  func_0x00010778c650();
  func_0x00010778bd00(param_1 + 0x498);
  func_0x00010778c650();
  param_1 = param_1 + 0x510;
  func_0x0001077859c4(param_1);
  return (param_1 + uVar1 * 0x1000 + (uVar1 >> 4) + 0x9e3779b97f4a7c15 ^ uVar1) + 0x9e3779b97f4a7c15
  ;
}



/* Entry: 10778b008; end: 10778b103;  */

void FUN_10778b008(long param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  long lVar2;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 auStack_78 [18];
  
  func_0x00010778c688();
  if (*(int *)(param_2 + 10) == 0) {
    func_0x00010778c7c4();
  }
  else {
    in_ZR = *(int *)(param_2 + 10) == 1;
    if ((bool)in_ZR) {
      uStack_90 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
      func_0x00010778ca0c(&uStack_90);
      lVar2 = 0x20;
      do {
        func_0x000107784d2c(auStack_78,param_2);
        func_0x00010778ca48();
        func_0x00010778c8e8();
        param_2 = param_2 + 1;
        lVar2 = lVar2 + -8;
      } while (lVar2 != 0);
      func_0x00010778ca28();
      auStack_78[0] = 0;
      func_0x00010778c8d4();
      func_0x00010778c9a8();
      func_0x00010778c840();
      uVar1 = 1;
    }
    else {
      (**(code **)(*(long *)*param_2 + 0x28))(auStack_78);
      func_0x00010778c840();
      uVar1 = 2;
    }
    *(undefined1 *)(param_1 + 0x40) = uVar1;
    func_0x00010778c8e8();
  }
  func_0x00010778c564();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010778c858();
    func_0x00010778b36c();
    return;
  }
  return;
}



/* Entry: 10778b284; end: 10778b327;  */

/* WARNING: Possible PIC construction at 0x00010778b3bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010778b3c0) */
/* WARNING: Removing unreachable block (ram,0x00010778b3e0) */
/* WARNING: Removing unreachable block (ram,0x00010778b3d8) */

undefined8 * FUN_10778b284(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *extraout_x8;
  undefined8 extraout_x8_00;
  undefined4 *unaff_x19;
  long lVar5;
  undefined8 ****ppppuVar6;
  undefined *puVar7;
  undefined8 auStack_1e0 [7];
  undefined8 uStack_1a8;
  long lStack_1a0;
  undefined8 *puStack_198;
  undefined8 ***pppuStack_190;
  undefined *puStack_188;
  undefined1 auStack_178 [72];
  long lStack_130;
  undefined8 *puStack_128;
  undefined8 ***pppuStack_120;
  undefined *puStack_118;
  undefined1 auStack_110 [72];
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 *puStack_b8;
  undefined8 **ppuStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  double dStack_70;
  
  func_0x00010778c620();
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  puVar3 = &uStack_90;
  func_0x00010778ca0c();
  for (lVar5 = 0; uVar2 = lVar5 == 0x10, !(bool)uVar2; lVar5 = lVar5 + 4) {
    dStack_70 = (double)*(float *)(param_1 + lVar5);
    uStack_78 = 3;
    func_0x00010778ca48();
    func_0x00010778c8e8();
  }
  func_0x00010778ca28();
  *unaff_x19 = 0;
  *(undefined8 *)(unaff_x19 + 4) = uStack_98;
  *(undefined8 *)(unaff_x19 + 2) = uStack_a0;
  func_0x00010778c8d4();
  func_0x00010778c9a8();
  func_0x00010778c564();
  if ((bool)uVar2) {
    return puVar3;
  }
  ___stack_chk_fail();
  puVar4 = puVar3;
  func_0x00010778c9a8();
  func_0x00010778c858();
  puVar1 = (undefined8 *)auStack_110;
  puStack_a8 = &UNK_10778b328;
  ppppuVar6 = (undefined8 ****)&ppuStack_b0;
  lStack_c0 = param_1;
  puStack_b8 = puVar3;
  ppuStack_b0 = (undefined8 **)&stack0xfffffffffffffff0;
  func_0x00010778c620();
  func_0x00010778c7e0();
  func_0x00010778c980();
  func_0x00010778c758();
  func_0x00010778c738(2);
  func_0x00010778c57c(uStack_c8);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    puVar7 = &UNK_10778b36c;
    __Unwind_Resume();
    if (*(int *)(puVar4 + 0xe) == 0) {
      extraout_x8[8] = 0;
      extraout_x8[5] = 0;
      extraout_x8[4] = 0;
      extraout_x8[7] = 0;
      extraout_x8[6] = 0;
      extraout_x8[1] = 0;
      *extraout_x8 = 0;
      extraout_x8[3] = 0;
      extraout_x8[2] = 0;
      *(undefined4 *)extraout_x8 = 7;
      return puVar4;
    }
    uVar2 = *(int *)(puVar4 + 0xe) == 1;
    if ((bool)uVar2) {
      puStack_118 = &UNK_10778b36c;
      lStack_130 = param_1;
      puStack_128 = puVar3;
      pppuStack_120 = ppppuVar6;
      func_0x00010778c620(puVar4 + 1);
      puVar1 = auStack_1e0;
      param_2 = auStack_1e0;
      puStack_188 = &UNK_10778b3c0;
      ppppuVar6 = &pppuStack_190;
      lStack_1a0 = param_1;
      puStack_198 = puVar3;
      pppuStack_190 = &pppuStack_120;
      func_0x00010778c620(auStack_178);
      uStack_1a8 = extraout_x8_00;
      func_0x000104c2fe00(auStack_1e0);
      func_0x000104c33004(puVar3,auStack_1e0);
      func_0x000104c2f714();
      func_0x00010778c57c(uStack_1a8);
      if ((bool)uVar2) {
        return param_2;
      }
      puVar7 = &UNK_10778b440;
      ___stack_chk_fail();
    }
    *(long *)((long)puVar1 + -0x20) = param_1;
    *(undefined8 **)((long)puVar1 + -0x18) = puVar3;
    *(undefined8 *****)((long)puVar1 + -0x10) = ppppuVar6;
    *(undefined **)((long)puVar1 + -8) = puVar7;
    func_0x00010778c620();
    func_0x00010778c7e0();
    func_0x00010778c980();
    func_0x00010778c758();
    func_0x00010778c738(2);
    func_0x00010778c57c(*(undefined8 *)((long)puVar1 + -0x28));
    puVar4 = param_2;
    if (!(bool)uVar2) {
      ___stack_chk_fail();
      __Unwind_Resume();
      *(long *)((long)puVar1 + -0x90) = param_1;
      *(undefined8 **)((long)puVar1 + -0x88) = puVar3;
      *(undefined1 **)((long)puVar1 + -0x80) = (undefined1 *)((long)puVar1 + -0x10);
      *(undefined **)((long)puVar1 + -0x78) = &UNK_10778b484;
      if (*(char *)(param_2 + 7) == '\x01') {
        func_0x00010748aaa4(param_2);
      }
      return param_2;
    }
  }
  return puVar4;
}



/* Entry: 10778b538; end: 10778b5af;  */

long FUN_10778b538(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  undefined8 extraout_x8;
  long *unaff_x19;
  long lStack_40;
  
  func_0x00010778c620();
  func_0x00010778ca34();
  lVar1 = lStack_40;
  func_0x00010778b608(lStack_40,param_2,param_3);
  *unaff_x19 = lStack_40 + 0x18;
  unaff_x19[1] = lStack_40;
  func_0x00010778c9a0();
  func_0x00010778c57c(extraout_x8);
  if ((bool)in_ZR) {
    return lVar1;
  }
  ___stack_chk_fail();
  func_0x00010778c9a0();
  func_0x00010778c858();
  *(undefined8 *)(lVar1 + 8) = param_2;
  lVar2 = lVar1;
  func_0x00010778b5d8();
  *(long *)(lVar1 + 0x10) = lVar2;
  return lVar1;
}



/* Entry: 10778b6b8; end: 10778b6d7;  */

void FUN_10778b6b8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d7e58;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10778bc9c; end: 10778bcff;  */

undefined1 * FUN_10778bc9c(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 **ppuStack_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined1 auStack_68 [64];
  undefined8 uStack_28;
  
  func_0x00010778c688();
  func_0x00010778c7e0();
  func_0x00010778c980();
  func_0x0001077778dc(param_1,auStack_68);
  puVar1 = auStack_68;
  func_0x000104c3323c(puVar1);
  func_0x00010778c57c(uStack_28);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar1 = auStack_68;
  func_0x000104c3323c();
  func_0x00010778c858();
  puStack_78 = &SUB_10778bd00;
  puStack_88 = (undefined1 *)0x0;
  if (*(int *)(puVar1 + 0x70) == 0) {
    puStack_88 = (undefined1 *)0x0;
  }
  else {
    ppuStack_90 = &puStack_88;
    puStack_80 = &stack0xfffffffffffffff0;
    func_0x00010778bd44(&ppuStack_90,puVar1);
  }
  return puStack_88;
}



/* Entry: 10778bef0; end: 10778bf3b;  */

void FUN_10778bef0(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 != -1 && *(int *)(param_2 + 0x30) == iVar1) {
    func_0x00010778cb28(*(int *)(param_2 + 0x30) == iVar1,param_1);
    func_0x00010778c824();
  }
  return;
}



/* Entry: 10778c050; end: 10778c05b;  */

void FUN_10778c050(undefined8 *param_1)

{
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  
  func_0x00010778c87c(*param_1,param_1[1]);
  func_0x00010748aaa4();
  *unaff_x20 = *unaff_x19;
  *(undefined4 *)(unaff_x20 + 0x30) = 1;
  return;
}



/* Entry: 10778c178; end: 10778c197;  */

undefined8 FUN_10778c178(void)

{
  return 1;
}



/* Entry: 10778c3b4; end: 10778c3d3;  */

void FUN_10778c3b4(void)

{
  func_0x00010778c3d4();
  return;
}



/* Entry: 10778cf9c; end: 10778cf9f;  */

long FUN_10778cf9c(undefined8 *param_1)

{
  undefined8 extraout_x8;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  *param_1 = &PTR_FUN_1109d7fb0;
  func_0x00010778ae7c(param_1 + 0xa9);
  func_0x00010778b7c0(param_1 + 0x2d);
  func_0x0001077866dc(param_1);
  *unaff_x20 = extraout_x8;
  func_0x000107284db4(param_1 + 0x28);
  func_0x000107284d8c(unaff_x19 + 0xd0);
  func_0x000107283194(unaff_x19 + 0xc0);
  func_0x0001072c9b9c(unaff_x19 + 0xb0);
  func_0x000104c2f714(unaff_x19 + 0x78);
  func_0x000104c2f714(unaff_x19 + 0x40);
  func_0x000104c2f714(unaff_x20 + 1);
  return unaff_x19;
}



/* Entry: 10778d374; end: 10778d39b;  */

undefined8 * FUN_10778d374(undefined8 *param_1)

{
  func_0x00010748b94c(param_1 + 5);
  *param_1 = &PTR_DAT_1109ab0d0;
  func_0x0001073ad4c4(param_1 + 1);
  return param_1;
}



/* Entry: 10778d53c; end: 10778d7e3;  */

void FUN_10778d53c(long *param_1,long param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  undefined8 extraout_x8;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  func_0x00010778f7e4();
  uStack_48 = extraout_x8;
  func_0x00010778eedc(&uStack_60,1);
  puVar3 = puStack_50;
  puStack_50[1] = 0;
  puStack_50[2] = 0;
  *puStack_50 = &PTR_DAT_1109d8330;
  FUN_107785684(puStack_50 + 3,param_2);
  puVar3[3] = &PTR_DAT_1109d8440;
  func_0x00010727fe7c(puVar3 + 0x30,param_2 + 0x168);
  puVar1 = puVar3 + 0x37;
  *(undefined1 *)(puVar3 + 0x37) = 0;
  *(undefined4 *)(puVar3 + 0x3d) = 0xffffffff;
  func_0x00010755ec9c(puVar1);
  uVar2 = *(uint *)(param_2 + 0x1d0);
  uVar4 = uVar2 == 0xffffffff;
  if (!(bool)uVar4) {
    puStack_68 = puVar1;
    (*(code *)(&PTR_DAT_1109d8370)[uVar2])(&puStack_68,param_2 + 0x1a0);
    *(uint *)(puVar3 + 0x3d) = uVar2;
  }
  func_0x00010727fe7c(puVar3 + 0x3e,param_2 + 0x1d8);
  func_0x00010727d614(puVar3 + 0x45,param_2 + 0x210);
  func_0x0001073243b8(puVar3 + 0x4d,param_2 + 0x250);
  func_0x0001073243b8(puVar3 + 0x5c,param_2 + 0x2c8);
  func_0x0001073243b8(puVar3 + 0x6b,param_2 + 0x340);
  func_0x00010778b718(puVar3 + 0x79,param_2 + 0x3b0);
  func_0x0001074c4884(puVar3 + 0x85,param_2 + 0x410);
  func_0x0001074c4858(puVar3 + 0x93,param_2 + 0x480);
  func_0x0001074c4824(puVar3 + 0xa0,param_2 + 0x4e8);
  func_0x0001074c4884(puVar3 + 0xac,param_2 + 0x548);
  func_0x0001077857d8(puVar3 + 0xba,param_2 + 0x5b8);
  func_0x0001074c4858(puVar3 + 0xd3,param_2 + 0x680);
  func_0x00010778b738(puVar3 + 0xe0,param_2 + 0x6e8);
  puVar3 = puStack_50;
  puStack_50 = (undefined8 *)0x0;
  func_0x00010778eff0(&uStack_60);
  *param_1 = (long)(puVar3 + 3);
  param_1[1] = (long)puVar3;
  uStack_60 = 0;
  uStack_58 = 0;
  func_0x00010778ed0c(&uStack_60);
  func_0x00010778f714(uStack_48);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010755ec9c(puVar1);
  func_0x00010727fc1c(puVar3 + 0x30);
  do {
    func_0x000107785780(puVar3 + 3);
    __ZNSt3__119__shared_weak_countD2Ev(puVar3);
    func_0x00010778eff0(&uStack_60);
    func_0x00010778fa08();
  } while( true );
}



/* Entry: 10778ec2c; end: 10778eca7;  */

void FUN_10778ec2c(undefined8 param_1,long param_2,long *param_3)

{
  undefined **ppuVar1;
  long lStack_38;
  
  lStack_38 = *param_3;
  if (-1 < *(char *)((long)param_3 + 0x17)) {
    lStack_38 = (long)param_3;
  }
  ppuVar1 = &PTR_DAT_1109d80f8;
  func_0x00010778edbc(&PTR_DAT_1109d80f8,&lStack_38);
  if (ppuVar1 == (undefined **)&UNK_1109d8320) {
    func_0x00010778f944();
  }
  else {
    func_0x00010778dc68(param_1,*(undefined8 *)(param_2 + 8),*(undefined1 *)(ppuVar1 + 1));
  }
  return;
}



/* Entry: 10778ef78; end: 10778ef8b;  */

void FUN_10778ef78(void)

{
  func_0x00010778efe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10778f0e0; end: 10778f1a3;  */

undefined8 * FUN_10778f0e0(undefined8 *param_1)

{
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 0xb) = 1;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x19) = 1;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x26] = 0;
  *(undefined1 *)(param_1 + 0x26) = 1;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  param_1[0x32] = 0;
  param_1[0x31] = 0;
  *(undefined1 *)(param_1 + 0x32) = 1;
  param_1[0x3e] = 0;
  param_1[0x3d] = 0;
  param_1[0x40] = 0;
  param_1[0x3f] = 0;
  param_1[0x34] = 0;
  param_1[0x33] = 0;
  param_1[0x36] = 0;
  param_1[0x35] = 0;
  param_1[0x38] = 0;
  param_1[0x37] = 0;
  param_1[0x3a] = 0;
  param_1[0x39] = 0;
  param_1[0x3c] = 0;
  param_1[0x3b] = 0;
  *(undefined1 *)(param_1 + 0x40) = 1;
  _bzero(param_1 + 0x41,200);
  *(undefined1 *)(param_1 + 0x59) = 1;
  param_1[0x66] = 0;
  param_1[0x5b] = 0;
  param_1[0x5a] = 0;
  param_1[0x5d] = 0;
  param_1[0x5c] = 0;
  param_1[0x5f] = 0;
  param_1[0x5e] = 0;
  param_1[0x61] = 0;
  param_1[0x60] = 0;
  param_1[99] = 0;
  param_1[0x62] = 0;
  param_1[0x65] = 0;
  param_1[100] = 0;
  *(undefined1 *)(param_1 + 0x66) = 1;
  param_1[0x68] = 0;
  param_1[0x67] = 0;
  param_1[0x6a] = 0;
  param_1[0x69] = 0;
  param_1[0x6c] = 0;
  param_1[0x6b] = 0;
  param_1[0x6e] = 0;
  param_1[0x6d] = 0;
  param_1[0x70] = 0;
  param_1[0x6f] = 0;
  param_1[0x72] = 0;
  param_1[0x71] = 0;
  *(undefined1 *)(param_1 + 0x72) = 1;
  return param_1;
}



/* Entry: 10778f300; end: 10778f337;  */

undefined8 FUN_10778f300(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 extraout_w8;
  undefined1 *extraout_x9;
  undefined1 *extraout_x9_00;
  undefined1 *extraout_x9_01;
  long extraout_x9_02;
  undefined1 *extraout_x10;
  undefined8 extraout_x11;
  
  uVar1 = *(undefined8 *)*param_1;
  func_0x000107349544(uVar1,0);
  func_0x00010734ac10(uVar1);
  func_0x000107349658();
  func_0x00010734aa78();
  *extraout_x9 = 0x6e;
  func_0x00010734aa78();
  *extraout_x9_00 = 0x75;
  func_0x00010734aa78();
  *extraout_x9_01 = 0x6c;
  func_0x00010734ab28();
  *(undefined8 *)(extraout_x9_02 + 0x18) = extraout_x11;
  *extraout_x10 = extraout_w8;
  return 1;
}



/* Entry: 10778f524; end: 10778f57b;  */

void FUN_10778f524(long param_1,long param_2)

{
  uint uVar1;
  undefined1 uStack_19;
  undefined1 *puStack_18;
  
  uVar1 = *(uint *)(param_1 + 0x30);
  if (uVar1 != 0xffffffff && *(uint *)(param_2 + 0x30) == uVar1) {
    puStack_18 = &uStack_19;
    (*(code *)(&PTR_DAT_1109d83e8)[uVar1])(&puStack_18,param_1);
  }
  return;
}



/* Entry: 10778fc48; end: 10778fc5b;  */

void FUN_10778fc48(void)

{
  func_0x00010778fc88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10778fe64; end: 10778fe7b;  */

void FUN_10778fe64(void)

{
  func_0x00010778fe7c();
  return;
}



/* Entry: 10779003c; end: 10779003f;  */

undefined8 * FUN_10779003c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d6e58;
  FUN_10778350c(param_1 + 6);
  FUN_107783268(param_1 + 3);
  func_0x0001073ad4c4(param_1 + 1);
  return param_1;
}



/* Entry: 1077908b8; end: 1077908e7;  */

long * FUN_1077908b8(long *param_1,long *param_2)

{
  param_1 = (long *)*param_1;
  if ((param_1 != (long *)0x0) && (*param_2 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001077908dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x18))();
    return param_1;
  }
  return (long *)(ulong)(param_1 == (long *)0x0 && *param_2 == 0);
}



/* Entry: 107791548; end: 1077915b7;  */

void FUN_107791548(undefined8 *param_1,long *param_2)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 extraout_x8;
  long unaff_x19;
  undefined1 uStack_81;
  undefined1 *puStack_80;
  undefined *puStack_78;
  long alStack_68 [8];
  undefined8 uStack_28;
  
  func_0x000107791900();
  plVar1 = (long *)*param_1;
  uStack_28 = extraout_x8;
  if (plVar1 == (long *)0x0) {
    func_0x0001077919d0();
  }
  else {
    (**(code **)(*plVar1 + 0x28))(alStack_68);
    param_2 = alStack_68;
    func_0x000104c32a18();
    *(undefined1 *)(unaff_x19 + 0x40) = 2;
    plVar1 = alStack_68;
    func_0x000104c3323c(plVar1);
  }
  func_0x0001077918dc(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  puStack_78 = &UNK_1077915b8;
  puStack_80 = &stack0xfffffffffffffff0;
  func_0x0001077915e0(&uStack_81,plVar1,param_2);
  return;
}



/* Entry: 107791708; end: 107791717;  */

void FUN_107791708(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107791710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 107791af8; end: 107791b23;  */

undefined ** FUN_107791af8(void)

{
  return &PTR_DAT_1109d84e0;
}



/* Entry: 107791cf0; end: 107791d03;  */

void FUN_107791cf0(void)

{
  func_0x000107781c1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077939c8; end: 1077939ff;  */

void FUN_1077939c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,
                  undefined1 *param_5)

{
  undefined1 uStack_11;
  
  func_0x000107555de4(&uStack_11,param_1,param_2,param_3,*param_4,*param_5);
  return;
}



/* Entry: 107793d90; end: 107793e17;  */

long FUN_107793d90(long param_1)

{
  if (*(char *)(param_1 + 0x48) == '\x01') {
    func_0x0001072dbce8(param_1);
  }
  return param_1;
}



/* Entry: 107793f78; end: 107793f87;  */

void FUN_107793f78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107793f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1077940b4; end: 1077940cb;  */

void FUN_1077940b4(void)

{
  func_0x0001077940cc();
  return;
}



/* Entry: 107794310; end: 107794317;  */

void FUN_107794310(undefined8 *param_1)

{
  ulong uVar1;
  
  uVar1 = **(ulong **)*param_1;
  **(ulong **)*param_1 = uVar1 * 0x1000 + (uVar1 >> 4) + 0x9e3779b97f4a7c15 ^ uVar1;
  return;
}



/* Entry: 107794454; end: 1077944fb;  */

void FUN_107794454(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x30) != 0) {
    func_0x000107794a84();
    *(undefined4 *)(lVar1 + 0x30) = 0;
  }
  return;
}



/* Entry: 107794700; end: 107794bcf;  */

void FUN_107794700(void)

{
  return;
}



/* Entry: 107794ef8; end: 107794efb;  */

undefined8 * FUN_107794ef8(undefined8 *param_1)

{
  func_0x0001073e4d20(param_1 + 5);
  *param_1 = &PTR_DAT_1109ab0d0;
  func_0x0001073ad4c4(param_1 + 1);
  return param_1;
}



/* Entry: 1077950fc; end: 107795133;  */

void FUN_1077950fc(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  
  uVar3 = param_2[1];
  uVar2 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
  *param_1 = &PTR_DAT_1109ab0d0;
  param_1[2] = uVar3;
  param_1[1] = uVar2;
  uStack0000000000000010 = 0;
  uStack0000000000000018 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  puVar1 = (undefined1 *)&stack0x00000010;
  func_0x0001073ad858();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 107795bc0; end: 107795e4f;  */

long FUN_107795bc0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long *plStack_78;
  long lStack_70;
  long **pplStack_68;
  
  lVar14 = -0x61c8864680b583eb;
  lVar1 = param_1 + 0x168;
  func_0x00010778f398();
  lVar2 = param_1 + 0x1a0;
  func_0x0001077859c4();
  lVar3 = param_1 + 0x1d8;
  func_0x0001077859c4();
  lVar4 = param_1 + 0x210;
  func_0x00010778f398();
  lVar5 = param_1 + 0x248;
  func_0x00010778bd00(lVar5);
  lVar6 = param_1 + 0x2c0;
  func_0x00010778bd00(lVar6);
  lVar7 = param_1 + 0x338;
  func_0x00010778f398(lVar7);
  lVar8 = param_1 + 0x370;
  func_0x00010778f398(lVar8);
  lVar9 = param_1 + 0x3a8;
  func_0x00010778f398(lVar9);
  lVar10 = param_1 + 0x3e0;
  func_0x00010778bd00(lVar10);
  lVar11 = param_1 + 0x458;
  func_0x00010778bd00(lVar11);
  lVar12 = param_1 + 0x4d0;
  func_0x000107798754(lVar12);
  lStack_70 = 0;
  if (*(int *)(param_1 + 0x548) != 0) {
    plStack_78 = &lStack_70;
    func_0x0001073f1cf4(param_1 + 0x518);
    pplStack_68 = &plStack_78;
    uVar13 = (ulong)*(uint *)(param_1 + 0x548);
    if (*(uint *)(param_1 + 0x548) == 0xffffffff) {
      uVar13 = 0xffffffffffffffff;
    }
    (*(code *)(&PTR_DAT_1109d93f0)[uVar13])(&pplStack_68,param_1 + 0x518);
    lVar14 = lStack_70 + -0x61c8864680b583eb;
  }
  uVar13 = lVar1 + 0x9e3779b97f4a7c15;
  uVar13 = lVar2 + -0x61c8864680b583eb + uVar13 * 0x1000 + (uVar13 >> 4) ^ uVar13;
  uVar13 = lVar3 + -0x61c8864680b583eb + uVar13 * 0x1000 + (uVar13 >> 4) ^ uVar13;
  uVar13 = lVar4 + -0x61c8864680b583eb + uVar13 * 0x1000 + (uVar13 >> 4) ^ uVar13;
  uVar13 = lVar5 + -0x61c8864680b583eb + uVar13 * 0x1000 + (uVar13 >> 4) ^ uVar13;
  uVar13 = lVar6 + -0x61c8864680b583eb + uVar13 * 0x1000 + (uVar13 >> 4) ^ uVar13;
  uVar13 = lVar7 + -0x61c8864680b583eb + uVar13 * 0x1000 + (uVar13 >> 4) ^ uVar13;
  uVar13 = lVar8 + -0x61c8864680b583eb + uVar13 * 0x1000 + (uVar13 >> 4) ^ uVar13;
  uVar13 = lVar9 + -0x61c8864680b583eb + uVar13 * 0x1000 + (uVar13 >> 4) ^ uVar13;
  uVar13 = lVar10 + -0x61c8864680b583eb + uVar13 * 0x1000 + (uVar13 >> 4) ^ uVar13;
  uVar13 = lVar11 + -0x61c8864680b583eb + uVar13 * 0x1000 + (uVar13 >> 4) ^ uVar13;
  uVar13 = lVar12 + -0x61c8864680b583eb + uVar13 * 0x1000 + (uVar13 >> 4) ^ uVar13;
  uVar13 = (uVar13 >> 4) + uVar13 * 0x1000 + lVar14 ^ uVar13;
  func_0x0001077859c4(param_1 + 0x550);
  func_0x0001077991bc();
  func_0x0001077859c4(param_1 + 0x588);
  func_0x0001077991bc();
  func_0x00010778bd00(param_1 + 0x5c0);
  func_0x0001077991bc();
  func_0x000107798754(param_1 + 0x638);
  func_0x0001077991bc();
  func_0x00010778f398(param_1 + 0x680);
  func_0x0001077991bc();
  func_0x00010778f398(param_1 + 0x6b8);
  func_0x0001077991bc();
  func_0x00010778f398(param_1 + 0x6f0);
  func_0x0001077991bc();
  func_0x00010779878c(param_1 + 0x728);
  func_0x0001077991bc();
  func_0x000107798754(param_1 + 0x770);
  func_0x0001077991bc();
  param_1 = param_1 + 0x7b8;
  func_0x00010778f398(param_1);
  return (param_1 + -0x61c8864680b583eb + uVar13 * 0x1000 + (uVar13 >> 4) ^ uVar13) +
         0x9e3779b97f4a7c15;
}



/* Entry: 107797c9c; end: 107797ccb;  */

/* WARNING: Possible PIC construction at 0x000107797cec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107797e4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107797cf0) */
/* WARNING: Removing unreachable block (ram,0x000107797d10) */
/* WARNING: Removing unreachable block (ram,0x000107797d08) */
/* WARNING: Removing unreachable block (ram,0x000107797e50) */
/* WARNING: Removing unreachable block (ram,0x000107797e70) */
/* WARNING: Removing unreachable block (ram,0x000107797e68) */

undefined8 * FUN_107797c9c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long lVar4;
  undefined1 **unaff_x29;
  undefined1 *puVar5;
  undefined *unaff_x30;
  undefined *puVar6;
  undefined1 auStack_110 [16];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  double dStack_e0;
  undefined8 uStack_a8;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined1 auStack_68 [72];
  
  if (*(int *)(param_2 + 7) == 0) {
LAB_107799374:
    param_1[8] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    *(undefined4 *)param_1 = 7;
    return param_2;
  }
  uVar2 = 0;
  puVar3 = param_2;
  if (*(int *)(param_2 + 7) == 1) {
    func_0x0001077991a8();
    puStack_78 = &UNK_107797cf0;
    unaff_x29 = &puStack_80;
    puStack_80 = &stack0xfffffffffffffff0;
    func_0x0001077991a8(auStack_68);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    unaff_x21 = 3;
    unaff_x19 = &uStack_100;
    puVar3 = (undefined8 *)0x3;
    uStack_a8 = extraout_x8;
    func_0x0001072ac134();
    for (lVar4 = 0; uVar2 = lVar4 == 0xc, !(bool)uVar2; lVar4 = lVar4 + 4) {
      dStack_e0 = (double)*(float *)((long)param_2 + lVar4);
      uStack_e8 = 3;
      func_0x000107799574();
      func_0x000107799450();
    }
    func_0x000107799530();
    func_0x0001077993b0();
    func_0x0001077994c4();
    func_0x0001077990c8(uStack_a8);
    if ((bool)uVar2) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    param_3 = unaff_x19;
    func_0x0001077994c4();
    unaff_x30 = &LAB_107797db8;
    func_0x00010779934c();
    unaff_x22 = 0xc;
    register0x00000008 = (BADSPACEBASE *)auStack_110;
    unaff_x20 = param_2;
  }
  puVar1 = (undefined1 *)((long)register0x00000008 + -0x70);
  *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 ***)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  puVar5 = (undefined1 *)((long)register0x00000008 + -0x10);
  func_0x0001077991a8();
  func_0x0001077992bc();
  func_0x000107799434();
  func_0x0001077992a8();
  func_0x000104c32a18();
  func_0x0001077992f4(2);
  func_0x0001077990b0();
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    puVar6 = &UNK_107797dfc;
    __Unwind_Resume();
    param_2 = param_3;
    param_1 = extraout_x8_00;
    if (*(int *)(param_3 + 8) == 0) goto LAB_107799374;
    uVar2 = 0;
    if (*(int *)(param_3 + 8) == 1) {
      *(undefined8 **)((long)register0x00000008 + -0x90) = unaff_x20;
      *(undefined8 **)((long)register0x00000008 + -0x88) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x80) = puVar5;
      *(undefined **)((long)register0x00000008 + -0x78) = &UNK_107797dfc;
      func_0x0001077991a8();
      *(undefined8 *)((long)register0x00000008 + -0x98) = extraout_x8_01;
      puVar1 = (undefined1 *)((long)register0x00000008 + -0x180);
      *(undefined8 *)((long)register0x00000008 + -0x110) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x108) = unaff_x21;
      *(undefined8 **)((long)register0x00000008 + -0x100) = unaff_x20;
      *(undefined8 **)((long)register0x00000008 + -0xf8) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0xf0) =
           (undefined1 *)((long)register0x00000008 + -0x80);
      *(undefined **)((long)register0x00000008 + -0xe8) = &UNK_107797e50;
      puVar5 = (undefined1 *)((long)register0x00000008 + -0xf0);
      puVar3 = param_3;
      func_0x0001077991a8((undefined1 *)((long)register0x00000008 + -0xd8));
      *(undefined8 *)((long)register0x00000008 + -0x118) = extraout_x8_02;
      *(undefined8 *)((long)register0x00000008 + -0x168) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x160) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x170) = 0;
      unaff_x19 = (undefined8 *)((long)register0x00000008 + -0x170);
      func_0x0001072ac134(unaff_x19,(((long *)*puVar3)[1] - *(long *)*puVar3) / 0x38);
      puVar3 = (undefined8 *)((undefined8 *)*param_3)[1];
      for (unaff_x20 = *(undefined8 **)*param_3; uVar2 = unaff_x20 == puVar3, !(bool)uVar2;
          unaff_x20 = unaff_x20 + 7) {
        unaff_x19 = unaff_x20;
        func_0x00010778b3e8((undefined1 *)((long)register0x00000008 + -0x158));
        func_0x000107799574();
        func_0x000107799450();
      }
      func_0x000107799530();
      func_0x0001077993b0();
      func_0x0001077994c4();
      func_0x0001077990c8(*(undefined8 *)((long)register0x00000008 + -0x118));
      if ((bool)uVar2) {
        return unaff_x19;
      }
      ___stack_chk_fail();
      puVar3 = unaff_x19;
      func_0x0001077994c4();
      puVar6 = &UNK_107797f28;
      func_0x00010779934c();
    }
    *(undefined8 **)(puVar1 + -0x20) = unaff_x20;
    *(undefined8 **)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = puVar5;
    *(undefined **)(puVar1 + -8) = puVar6;
    func_0x0001077991a8();
    func_0x0001077992bc();
    func_0x000107799434();
    func_0x0001077992a8();
    func_0x000104c32a18();
    func_0x0001077992f4(2);
    func_0x0001077990b0();
    param_3 = puVar3;
    if (!(bool)uVar2) {
      ___stack_chk_fail();
      __Unwind_Resume();
      *(undefined8 **)(puVar1 + -0x90) = unaff_x20;
      *(undefined8 **)(puVar1 + -0x88) = unaff_x19;
      *(undefined1 **)(puVar1 + -0x80) = puVar1 + -0x10;
      *(code **)(puVar1 + -0x78) = FUN_107797f6c;
      if (*(char *)(puVar3 + 7) == '\x01') {
        func_0x00010779954c();
      }
      return puVar3;
    }
  }
  return param_3;
}



/* Entry: 107797f6c; end: 107797f97;  */

long FUN_107797f6c(long param_1)

{
  if (*(char *)(param_1 + 0x38) == '\x01') {
    func_0x00010779954c();
  }
  return param_1;
}



/* Entry: 1077980f4; end: 107798103;  */

void FUN_1077980f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001077980fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 107798450; end: 10779846f;  */

void FUN_107798450(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x000107798470(&uStack_18);
  return;
}



/* Entry: 10779858c; end: 1077985bf;  */

void FUN_10779858c(void)

{
  func_0x0001077f34cc();
  func_0x0001077992a8();
  func_0x00010778f25c();
  return;
}



/* Entry: 1077986fc; end: 107798753;  */

long FUN_1077986fc(undefined8 param_1,long *param_2)

{
  undefined1 in_ZR;
  long lVar1;
  
  func_0x0001077991d0();
  lVar1 = *param_2;
  func_0x000107799464();
  func_0x000107799434();
  func_0x0001077992a8();
  func_0x0001077778dc();
  func_0x000107799354();
  func_0x0001077990b0();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107799354();
    func_0x00010779934c();
    if (*(int *)(lVar1 + 0x40) != 0) {
      func_0x0001077995a8();
      func_0x0001077987c4();
    }
    return 0;
  }
  return lVar1;
}



/* Entry: 1077988e0; end: 107798903;  */

void FUN_1077988e0(void)

{
  func_0x0001077992d0();
  func_0x000107799328();
  return;
}



/* Entry: 107798aac; end: 107798aff;  */

void FUN_107798aac(long param_1,long param_2)

{
  if (*(int *)(param_1 + 0x40) != -1 || *(int *)(param_2 + 0x40) != -1) {
    if (*(int *)(param_2 + 0x40) == -1) {
      if (*(uint *)(param_1 + 0x40) != 0xffffffff) {
        func_0x0001072ce6fc((&PTR_DAT_11099aea0)[*(uint *)(param_1 + 0x40)],param_1,param_1,param_2)
        ;
      }
      *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
      return;
    }
    func_0x000107799410();
  }
  return;
}



/* Entry: 107798bf0; end: 107798bfb;  */

void FUN_107798bf0(undefined8 *param_1)

{
  long unaff_x20;
  
  func_0x0001072f9b88(*param_1,param_1[1]);
  func_0x0001072ca648();
  func_0x0001072ca61c();
  *(undefined4 *)(unaff_x20 + 0x40) = 2;
  return;
}



/* Entry: 107798f14; end: 107798f63;  */

void FUN_107798f14(long param_1,long param_2)

{
  int iVar1;
  undefined1 uStack_19;
  undefined1 *puStack_18;
  
  iVar1 = *(int *)(param_1 + 0x38);
  if (iVar1 != -1 && *(int *)(param_2 + 0x38) == iVar1) {
    puStack_18 = &uStack_19;
    func_0x0001077993e4(*(int *)(param_2 + 0x38) == iVar1,param_1);
  }
  return;
}



/* Entry: 107799968; end: 10779996b;  */

long FUN_107799968(undefined8 *param_1)

{
  undefined8 extraout_x8;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  *param_1 = &PTR_FUN_1109d94f0;
  func_0x000107797be0(param_1 + 0xfe);
  func_0x00010779824c(param_1 + 0x2d);
  func_0x0001077866dc(param_1);
  *unaff_x20 = extraout_x8;
  func_0x000107284db4(param_1 + 0x28);
  func_0x000107284d8c(unaff_x19 + 0xd0);
  func_0x000107283194(unaff_x19 + 0xc0);
  func_0x0001072c9b9c(unaff_x19 + 0xb0);
  func_0x000104c2f714(unaff_x19 + 0x78);
  func_0x000104c2f714(unaff_x19 + 0x40);
  func_0x000104c2f714(unaff_x20 + 1);
  return unaff_x19;
}



/* Entry: 107799c0c; end: 107799c77;  */

long FUN_107799c0c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107799c3c();
  _bzero(lVar1 + 0x78,0x2c0);
  return param_1;
}



/* Entry: 10779a818; end: 10779a9df;  */

void FUN_10779a818(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 extraout_x8;
  long lVar8;
  undefined8 *puStack_a0;
  undefined1 uStack_98;
  undefined8 *puStack_90;
  undefined8 **ppuStack_88;
  undefined8 **ppuStack_80;
  undefined1 uStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined1 auStack_60 [16];
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  func_0x00010779b9e8();
  uStack_48 = extraout_x8;
  func_0x00010779b79c(auStack_60,1);
  puVar3 = puStack_50;
  puStack_50[1] = 0;
  puStack_50[2] = 0;
  *puStack_50 = &PTR_DAT_1109d9710;
  FUN_107785684(puStack_50 + 3,param_2);
  puVar3[3] = &PTR_DAT_1109d95a0;
  puStack_a0 = puVar3 + 0x30;
  puVar3[0x31] = 0;
  puVar3[0x32] = 0;
  puVar3[0x30] = 0;
  lVar8 = *(long *)(param_2 + 0x168);
  lVar1 = *(long *)(param_2 + 0x170);
  uStack_98 = 0;
  lVar2 = lVar1 - lVar8;
  uVar5 = lVar2 == 0;
  if (!(bool)uVar5) {
    uVar7 = lVar2 / 0x1b0;
    if (0x97b425ed097b42 < uVar7) goto LAB_10779a98c;
    puVar6 = puVar3 + 0x32;
    func_0x0001074e1208();
    puVar3[0x30] = puVar6;
    puVar3[0x31] = puVar6;
    puVar3[0x32] = puVar6 + uVar7 * 0x36;
    ppuStack_88 = &puStack_70;
    ppuStack_80 = &puStack_68;
    uStack_78 = 0;
    puStack_90 = puVar3 + 0x32;
    puStack_70 = puVar6;
    for (; uVar5 = lVar8 == lVar1, puStack_68 = puVar6, !(bool)uVar5; lVar8 = lVar8 + 0x1b0) {
      func_0x0001074e16a8(puVar6,lVar8);
      puVar6 = puStack_68 + 0x36;
    }
    uStack_78 = 1;
    func_0x0001074e15c0(&puStack_90);
    puVar3[0x31] = puVar6;
  }
  uStack_98 = 1;
  func_0x00010779b944(&puStack_a0);
  puVar3 = puStack_50;
  puStack_50 = (undefined8 *)0x0;
  func_0x00010779b8f4(auStack_60);
  *param_1 = (long)(puVar3 + 3);
  param_1[1] = (long)puVar3;
  puStack_90 = (undefined8 *)0x0;
  ppuStack_88 = (undefined8 **)0x0;
  func_0x00010779b684(&puStack_90);
  func_0x00010779b9a0(uStack_48);
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
LAB_10779a98c:
  func_0x0001074e1130();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10779a994);
  (*pcVar4)();
}



/* Entry: 10779b2c0; end: 10779b2d7;  */

undefined ** FUN_10779b2c0(void)

{
  return &PTR_DAT_1109d9600;
}



/* Entry: 10779b504; end: 10779b52f;  */

void FUN_10779b504(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_20;
  undefined8 uStack_18;
  
  if (*(int *)(param_1 + 0x50) != 0) {
    lStack_20 = param_1;
    uStack_18 = param_3;
    func_0x00010779b530(&lStack_20);
  }
  return;
}



/* Entry: 10779b61c; end: 10779b627;  */

void FUN_10779b61c(undefined8 *param_1)

{
  long unaff_x20;
  
  func_0x00010779bb7c(*param_1,param_1[1]);
  func_0x0001074e1554();
  *(undefined4 *)(unaff_x20 + 0x50) = 2;
  return;
}


