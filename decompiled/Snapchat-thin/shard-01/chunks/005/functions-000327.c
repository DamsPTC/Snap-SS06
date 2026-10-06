/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1010d2efc; end: 1010d2eff;  */

void FUN_1010d2efc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5be98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d922cb0;
  func_0x000107c61520(&UNK_10d922cb0,&UNK_110382430);
  puRam0000000112d5be98 = puVar1;
  return;
}



/* Entry: 1010d2f00; end: 1010d2f3f;  */

void FUN_1010d2f00(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5be98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d922cb0;
  func_0x000107c61520(&UNK_10d922cb0,&UNK_110382430);
  puRam0000000112d5be98 = puVar1;
  return;
}



/* Entry: 1010d2f40; end: 1010d2f43;  */

void FUN_1010d2f40(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5bea0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d922c48;
  func_0x000107c61520(&UNK_10d922c48,&UNK_110382430);
  puRam0000000112d5bea0 = puVar1;
  return;
}



/* Entry: 1010d2f44; end: 1010d2f83;  */

void FUN_1010d2f44(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5bea0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d922c48;
  func_0x000107c61520(&UNK_10d922c48,&UNK_110382430);
  puRam0000000112d5bea0 = puVar1;
  return;
}



/* Entry: 1010d2f84; end: 1010d2f87;  */

void FUN_1010d2f84(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5bea8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d922c20;
  func_0x000107c61520(&UNK_10d922c20,&UNK_110382430);
  puRam0000000112d5bea8 = puVar1;
  return;
}



/* Entry: 1010d2f88; end: 1010d2fc7;  */

void FUN_1010d2f88(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5bea8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d922c20;
  func_0x000107c61520(&UNK_10d922c20,&UNK_110382430);
  puRam0000000112d5bea8 = puVar1;
  return;
}



/* Entry: 1010d2fc8; end: 1010d2fcb;  */

void FUN_1010d2fc8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5beb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d922b90;
  func_0x000107c61520(&UNK_10d922b90,&UNK_1103824c0);
  puRam0000000112d5beb0 = puVar1;
  return;
}



/* Entry: 1010d2fcc; end: 1010d300b;  */

void FUN_1010d2fcc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5beb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d922b90;
  func_0x000107c61520(&UNK_10d922b90,&UNK_1103824c0);
  puRam0000000112d5beb0 = puVar1;
  return;
}



/* Entry: 1010d300c; end: 1010d300f;  */

void FUN_1010d300c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5beb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d922b68;
  func_0x000107c61520(&UNK_10d922b68,&UNK_1103824c0);
  puRam0000000112d5beb8 = puVar1;
  return;
}



/* Entry: 1010d3010; end: 1010d308f;  */

void FUN_1010d3010(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5beb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d922b68;
  func_0x000107c61520(&UNK_10d922b68,&UNK_1103824c0);
  puRam0000000112d5beb8 = puVar1;
  return;
}



/* Entry: 1010d3090; end: 1010d31e7;  */

int FUN_1010d3090(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1010d310c;
        goto LAB_1010d30f0;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1010d30f0:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_1010d310c:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1010d31e8; end: 1010d3227;  */

void FUN_1010d31e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5bed0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d922e38;
  func_0x000107c61520(&UNK_10d922e38,&UNK_1103825d0);
  puRam0000000112d5bed0 = puVar1;
  return;
}



/* Entry: 1010d3228; end: 1010d322b;  */

void FUN_1010d3228(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5bed8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d922dd0;
  func_0x000107c61520(&UNK_10d922dd0,&UNK_1103825d0);
  puRam0000000112d5bed8 = puVar1;
  return;
}



/* Entry: 1010d322c; end: 1010d326b;  */

void FUN_1010d322c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5bed8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d922dd0;
  func_0x000107c61520(&UNK_10d922dd0,&UNK_1103825d0);
  puRam0000000112d5bed8 = puVar1;
  return;
}



/* Entry: 1010d326c; end: 1010d326f;  */

void FUN_1010d326c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5bee0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d922da8;
  func_0x000107c61520(&UNK_10d922da8,&UNK_1103825d0);
  puRam0000000112d5bee0 = puVar1;
  return;
}



/* Entry: 1010d3270; end: 1010d32af;  */

void FUN_1010d3270(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5bee0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d922da8;
  func_0x000107c61520(&UNK_10d922da8,&UNK_1103825d0);
  puRam0000000112d5bee0 = puVar1;
  return;
}



/* Entry: 1010d32b0; end: 1010d336f;  */

undefined1 FUN_1010d32b0(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 1010d3370; end: 1010d343f;  */

void FUN_1010d3370(undefined8 param_1,code *param_2,code *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  (*param_2)();
  func_0x000107c613fc();
  (*param_3)();
  *param_4 = uVar1;
  return;
}



/* Entry: 1010d3440; end: 1010d47e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010d3440(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long extraout_x8;
  undefined1 *puVar11;
  long lVar12;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long unaff_x20;
  code *pcVar13;
  long lVar14;
  long lVar15;
  code *pcVar16;
  long lVar17;
  undefined8 auStack_b0 [2];
  undefined1 auStack_a0 [8];
  
  lVar1 = unaff_x20;
  uVar8 = param_2;
  func_0x000107c614f0();
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar15 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  puVar11 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = (long)puVar11 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar12 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar17 = lVar14 - extraout_x12_01;
  func_0x000107c602fc(0x13);
  func_0x000107c6142c(0xe000000000000000);
  uVar3 = param_1;
  func_0x000107c417f0(param_1);
  func_0x000107c61180();
  uVar5 = uVar3;
  func_0x000107c5faec();
  func_0x000107c61170(uVar3);
  func_0x000107c5fb78(uVar5,uVar8);
  func_0x000107c6142c(uVar8);
  lVar9 = -0x2fffffffffffffef;
  func_0x0001007d6c6c(1,0xd000000000000011,0x800000010ef25550,lVar1,&PTR_DAT_110382730);
  func_0x000107c6142c(0x800000010ef25550);
  uVar3 = param_1;
  func_0x000107c5d7e0();
  func_0x000107c61180();
  func_0x000107c5edb4(lVar17);
  func_0x000107c61170();
  func_0x000107c5edc8();
  pcVar16 = *(code **)(lVar15 + 8);
  lVar15 = lVar2;
  (*pcVar16)(lVar17);
  if (lRam0000000112d5be20 != -1) {
    lVar15 = 0x1010d0bf8;
    func_0x000107c61568(0x112d5be20);
  }
  if (lVar9 != 0) {
    if ((uVar3 == uRam00000001137ff1c8) && (lVar9 == lRam00000001137ff1d0)) {
      func_0x000107c6142c(lVar9);
    }
    else {
      lVar15 = lVar9;
      func_0x000107c605b8();
      func_0x000107c6142c(lVar9);
      if ((uVar3 & 1) == 0) goto LAB_1010d3ab0;
    }
    uVar3 = param_1;
    func_0x000107c4ce5c();
    func_0x000107c61180();
    uVar5 = uVar3;
    func_0x000107c5faec();
    lVar9 = lVar15;
    func_0x000107c61170(uVar3);
    if ((uVar5 == 0x544547) && (lVar15 == -0x1d00000000000000)) {
LAB_1010d3690:
      func_0x000107c6142c(lVar15);
    }
    else {
      lVar9 = lVar15;
      func_0x000107c605b8(uVar5,lVar15,0x544547,0xe300000000000000,0);
      func_0x000107c6142c(lVar15);
      if ((uVar5 & 1) == 0) {
        uVar3 = param_1;
        func_0x000107c4ce5c();
        func_0x000107c61180();
        uVar5 = uVar3;
        lVar15 = lVar9;
        func_0x000107c5faec();
        lVar9 = lVar15;
        func_0x000107c61170(uVar3);
        if ((uVar5 == 0x54534f50) && (lVar15 == -0x1c00000000000000)) goto LAB_1010d3690;
        lVar9 = lVar15;
        func_0x000107c605b8(uVar5,lVar15,0x54534f50,0xe400000000000000,0);
        func_0x000107c6142c(lVar15);
        if ((uVar5 & 1) == 0) goto LAB_1010d3ab0;
      }
    }
    FUN_1010d0c24();
    uVar3 = param_1;
    func_0x000107c5d7e0();
    func_0x000107c61180();
    func_0x000107c5edb4(lVar14);
    func_0x000107c61170();
    func_0x000107c5edc4();
    (*pcVar16)(lVar14,lVar2);
    lVar10 = lVar9;
    func_0x0001000f66f0(uVar3,lVar9,lVar15);
    func_0x000107c6142c(lVar9);
    func_0x000107c6142c(lVar15);
    if ((uVar3 & 1) != 0) {
      func_0x000107c602fc(0x13);
      func_0x000107c6142c(0xe000000000000000);
      uVar3 = param_1;
      func_0x000107c417f0(param_1);
      func_0x000107c61180();
      uVar5 = uVar3;
      func_0x000107c5faec();
      func_0x000107c61170(uVar3);
      func_0x000107c5fb78(uVar5,lVar10);
      func_0x000107c6142c(lVar10);
      lVar15 = -0x2fffffffffffffef;
      func_0x0001007d6c6c(1,0xd000000000000011,0x800000010ef25590,lVar1,&PTR_DAT_110382730);
      func_0x000107c6142c(0x800000010ef25590);
      uVar3 = param_1;
      func_0x000107c5d7e0();
      func_0x000107c61180();
      func_0x000107c5edb4(lVar12);
      func_0x000107c61170();
      func_0x000107c5edc4();
      lVar9 = lVar2;
      (*pcVar16)(lVar12);
      uVar5 = param_1;
      func_0x000107c4ce5c();
      func_0x000107c61180();
      uVar4 = uVar5;
      func_0x000107c5faec();
      func_0x000107c61170(uVar5);
      uVar5 = 0x756e65567465672f;
      if (((uVar3 == 0x756e65567465672f) && (lVar15 == -0x15ffffffffff8c9b)) ||
         (func_0x000107c605b8(0x756e65567465672f,0xea00000000007365,uVar3,lVar15,0),
         (uVar5 & 1) != 0)) {
        if ((uVar4 != 0x544547) || (lVar9 != -0x1d00000000000000)) {
          uVar5 = 0x544547;
          func_0x000107c605b8(0x544547,0xe300000000000000,uVar4,lVar9,0);
          if ((uVar5 & 1) == 0) goto LAB_1010d393c;
        }
        func_0x0001010d4148(param_1,param_2,param_3);
        goto LAB_1010d38d8;
      }
LAB_1010d393c:
      uVar5 = 0x567463656c65732f;
      if (((uVar3 == 0x567463656c65732f) && (lVar15 == -0x13ffffff9a8a919b)) ||
         (func_0x000107c605b8(0x567463656c65732f,0xec00000065756e65,uVar3,lVar15,0),
         (uVar5 & 1) != 0)) {
        if ((uVar4 == 0x544547) && (lVar9 == -0x1d00000000000000)) {
LAB_1010d39b8:
          lVar2 = unaff_x20 + _DAT_112d5bee8;
          uVar8 = *(undefined8 *)(lVar2 + 0x18);
          lVar12 = *(long *)(lVar2 + 0x20);
          func_0x0001000a8868(lVar2,uVar8);
          puVar7 = &UNK_1103826f0;
          func_0x000107c613fc(&UNK_1103826f0,0x18,7);
          func_0x000107c61614(puVar7 + 0x10,unaff_x20);
          puVar6 = &UNK_110382718;
          func_0x000107c613fc(&UNK_110382718,0x38,7);
          *(undefined **)(puVar6 + 0x10) = puVar7;
          *(ulong *)(puVar6 + 0x18) = param_1;
          *(undefined8 *)(puVar6 + 0x20) = param_2;
          *(undefined8 *)(puVar6 + 0x28) = param_3;
          *(long *)(puVar6 + 0x30) = lVar1;
          pcVar16 = *(code **)(lVar12 + 8);
          func_0x000107c6157c(puVar7);
          func_0x000107c61174(param_1);
          func_0x000107c6157c(param_3);
          (*pcVar16)(FUN_1010d83a4,puVar6,uVar8,lVar12);
          func_0x000107c6142c(lVar9);
          func_0x000107c6142c(lVar15);
          func_0x000107c61574(puVar7);
          func_0x000107c61574(puVar6);
          return;
        }
        uVar5 = 0x544547;
        func_0x000107c605b8(0x544547,0xe300000000000000,uVar4,lVar9,0);
        if ((uVar5 & 1) != 0) goto LAB_1010d39b8;
      }
      uVar5 = 0;
      if (((uVar3 == 0xd000000000000018) && (lVar15 == -0x7ffffffef10dab10)) ||
         (func_0x000107c605b8(0xd000000000000018,0x800000010ef254f0,uVar3,lVar15,0),
         (uVar5 & 1) != 0)) {
        if ((uVar4 != 0x544547) || (lVar9 != -0x1d00000000000000)) {
          uVar5 = 0x544547;
          func_0x000107c605b8(0x544547,0xe300000000000000,uVar4,lVar9,0);
          if ((uVar5 & 1) == 0) goto LAB_1010d3d10;
        }
        lVar2 = unaff_x20 + _DAT_112d5bee8;
        uVar8 = *(undefined8 *)(lVar2 + 0x18);
        lVar12 = *(long *)(lVar2 + 0x20);
        func_0x0001000a8868(lVar2,uVar8);
        puVar7 = &UNK_1103826c8;
        func_0x000107c613fc(&UNK_1103826c8,0x30,7);
        *(ulong *)(puVar7 + 0x10) = param_1;
        *(undefined8 *)(puVar7 + 0x18) = param_2;
        *(undefined8 *)(puVar7 + 0x20) = param_3;
        *(long *)(puVar7 + 0x28) = lVar1;
        pcVar13 = *(code **)(lVar12 + 0x18);
        func_0x000107c61174(param_1);
        func_0x000107c6157c(param_3);
        pcVar16 = FUN_1010d8948;
        goto LAB_1010d3ce4;
      }
LAB_1010d3d10:
      if ((uVar3 == 0xd000000000000011) && (lVar15 == -0x7ffffffef10dab30)) {
LAB_1010d3d5c:
        if ((uVar4 != 0x54534f50) || (lVar9 != -0x1c00000000000000)) {
          uVar5 = 0;
          func_0x000107c605b8(0x54534f50,0xe400000000000000,uVar4,lVar9,0);
          if ((uVar5 & 1) == 0) goto LAB_1010d3da4;
        }
        func_0x0001010d4314(param_1,param_2,param_3);
LAB_1010d38d8:
        func_0x000107c6142c(lVar9);
        func_0x000107c6142c(lVar15);
        return;
      }
      uVar5 = 0xd000000000000011;
      func_0x000107c605b8(0xd000000000000011,0x800000010ef254d0,uVar3,lVar15,0);
      if ((uVar5 & 1) != 0) goto LAB_1010d3d5c;
LAB_1010d3da4:
      uVar5 = 0;
      if (((uVar3 == 0xd00000000000001a) && (lVar15 == -0x7ffffffef10dab50)) ||
         (func_0x000107c605b8(0xd00000000000001a,0x800000010ef254b0,uVar3,lVar15,0),
         (uVar5 & 1) != 0)) {
        if ((uVar4 != 0x54534f50) || (lVar9 != -0x1c00000000000000)) {
          uVar3 = 0;
          func_0x000107c605b8(0x54534f50,0xe400000000000000,uVar4,lVar9,0);
          if ((uVar3 & 1) == 0) goto LAB_1010d3e80;
        }
        lVar2 = unaff_x20 + _DAT_112d5bee8;
        uVar8 = *(undefined8 *)(lVar2 + 0x18);
        lVar12 = *(long *)(lVar2 + 0x20);
        func_0x0001000a8868(lVar2,uVar8);
        puVar7 = &UNK_1103826a0;
        func_0x000107c613fc(&UNK_1103826a0,0x30,7);
        *(ulong *)(puVar7 + 0x10) = param_1;
        *(undefined8 *)(puVar7 + 0x18) = param_2;
        *(undefined8 *)(puVar7 + 0x20) = param_3;
        *(long *)(puVar7 + 0x28) = lVar1;
        pcVar13 = *(code **)(lVar12 + 0x20);
        func_0x000107c61174(param_1);
        func_0x000107c6157c(param_3);
        pcVar16 = FUN_1010d835c;
LAB_1010d3ce4:
        (*pcVar13)(pcVar16,puVar7,uVar8,lVar12);
        func_0x000107c6142c(lVar9);
        func_0x000107c6142c(lVar15);
        func_0x000107c61574(puVar7);
        return;
      }
LAB_1010d3e80:
      func_0x000107c6142c(lVar9);
      func_0x000107c6142c(lVar15);
      uVar3 = param_1;
      func_0x000107c5d7e0(param_1);
      func_0x000107c61180();
      func_0x000107c5edb4(lVar14);
      func_0x000107c61170(uVar3);
      func_0x000107c602fc(0x13);
      func_0x000107c6142c(0xe000000000000000);
      func_0x000107c5d7e0(param_1);
      goto LAB_1010d3b24;
    }
  }
LAB_1010d3ab0:
  uVar3 = param_1;
  func_0x000107c5d7e0(param_1);
  func_0x000107c61180();
  func_0x000107c5edb4(lVar14);
  func_0x000107c61170(uVar3);
  func_0x000107c602fc(0x13);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c5d7e0(param_1);
LAB_1010d3b24:
  func_0x000107c61180();
  func_0x000107c5edb4(puVar11);
  func_0x000107c61170(param_1);
  func_0x000100f15b10();
  func_0x000107c6057c(lVar2,param_1);
  func_0x000107c5fb78();
  func_0x000107c6142c(param_1);
  (*pcVar16)(puVar11,lVar2);
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
  *(undefined8 *)(lVar17 + -8) = param_3;
  *(undefined8 *)(lVar17 + -0x10) = param_2;
  func_0x0001010d3f24(3,lVar14,400,0xd000000000000011,0x800000010ef25570,puVar7,0,0xf000000000000000
                     );
  func_0x000107c6142c(0x800000010ef25570);
  func_0x000107c6142c(puVar7);
  (*pcVar16)(lVar14,lVar2);
  return;
}



/* Entry: 1010d47e4; end: 1010d4873; -[_TtC20LensVenuesURIHandler20LensVenuesURIHandler handleWithRequest:completion:] */

void FUN_1010d47e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x000107c60bc4();
  puVar1 = &UNK_110382760;
  func_0x000107c613fc(&UNK_110382760,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1010d3440(param_3,0x1010d84bc,puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1010d4874; end: 1010d4877; -[_TtC20LensVenuesURIHandler20LensVenuesURIHandler reset] */

void FUN_1010d4874(void)

{
  return;
}



/* Entry: 1010d4878; end: 1010d4a4f;  */

undefined1  [16] FUN_1010d4878(ulong param_1,long param_2,byte param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined1 auVar6 [16];
  
  if (param_3 < 2) {
    if (param_3 == 0) {
      func_0x000107c602fc(0x23);
      func_0x000107c6142c(0xe000000000000000);
      uVar3 = 0x800000010ef25670;
      uVar4 = 0xd000000000000021;
    }
    else {
      func_0x000107c602fc(0x1a);
      func_0x000107c6142c(0xe000000000000000);
      uVar3 = 0x800000010ef25650;
      uVar4 = 0xd000000000000018;
    }
  }
  else {
    if (param_3 != 2) {
      uVar3 = param_2 + (ulong)(param_1 >= 2);
      if ((long)-uVar3 < 0 == SCARRY8(~uVar3,(ulong)(param_1 < 2))) {
        pcVar5 = "No LocationProvider";
        uVar4 = 0xd000000000000017;
        if (param_1 == 0 && param_2 == 0) {
          uVar4 = 0xd000000000000014;
          pcVar5 = "No CheckInOptionFetcher";
        }
        uVar3 = (ulong)pcVar5 | 0x8000000000000000;
      }
      else {
        uVar1 = 0xef6465746e656d65;
        uVar2 = 0x6c706d4920746f4e;
        if (param_1 != 3 || param_2 != 0) {
          uVar1 = 0x800000010ef256a0;
          uVar2 = 0xd00000000000001e;
        }
        uVar4 = 0xd000000000000013;
        uVar3 = 0x800000010ef256c0;
        if (param_1 != 2 || param_2 != 0) {
          uVar4 = uVar2;
          uVar3 = uVar1;
        }
      }
      goto LAB_1010d4974;
    }
    func_0x000107c602fc(0x26);
    func_0x000107c6142c(0xe000000000000000);
    uVar3 = 0x800000010ef25620;
    uVar4 = 0xd000000000000024;
  }
  func_0x000107c5fb78(param_1,param_2);
LAB_1010d4974:
  auVar6._8_8_ = uVar3;
  auVar6._0_8_ = uVar4;
  return auVar6;
}



/* Entry: 1010d4a50; end: 1010d4f23;  */

void FUN_1010d4a50(long param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined8 param_9)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ulong uVar8;
  long extraout_x8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 auStack_1e0 [2];
  long lStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  ulong uStack_150;
  undefined1 uStack_148;
  undefined7 uStack_147;
  undefined1 uStack_140;
  undefined8 uStack_13f;
  long lStack_128;
  undefined8 uStack_120;
  undefined1 auStack_118 [24];
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  ulong uStack_70;
  
  lVar3 = 0;
  lStack_1a8 = param_8;
  func_0x000107c5ede0();
  lStack_1a0 = *(long *)(lVar3 + -8);
  lStack_198 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_1a0 + 0x40));
  lVar3 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar11 = (long)&lStack_1d0 + lVar3;
  if (((uint)param_3 & 0xff00) == 0x100) {
    func_0x000107c5d7e0(param_5);
    func_0x000107c61180();
    func_0x000107c5edb4(lVar11);
    func_0x000107c61170(param_5);
    FUN_1010d4878(param_1,param_2,param_3);
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
    *(undefined8 *)((long)auStack_1e0 + lVar3) = param_6;
    *(undefined8 *)((long)auStack_1e0 + lVar3 + 8) = param_7;
    func_0x0001010d3f24(3,lVar11,500,param_1,param_2,puVar7,0,0xf000000000000000);
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(puVar7);
    goto LAB_1010d4ef4;
  }
  uStack_1c0 = param_7;
  uStack_1b8 = param_6;
  uStack_1b0 = param_5;
  func_0x000107c61428(param_1 + 0x20,auStack_118,0,0);
  lVar10 = *(long *)(param_1 + 0x20);
  lVar4 = *param_4;
  uVar1 = param_4[1];
  lVar12 = *(long *)(lVar10 + 0x10);
  lStack_1c8 = param_1;
  func_0x000107c61434(uVar1);
  if (lVar12 == 0) {
LAB_1010d4c3c:
    lStack_1d0 = param_4[2];
    lVar10 = param_4[3];
    lStack_190 = 0;
    lStack_188 = 0xe000000000000000;
    func_0x000107c61434(lVar10);
    func_0x000107c602fc(0x45);
    func_0x000107c5fb78(0x69772065756e6556,0xee00206469206874);
    func_0x000107c5fb78(lVar4,uVar1);
    func_0x000107c5fb78(0xd000000000000035,0x800000010ef25800);
    lVar12 = lStack_188;
    func_0x0001007d6c6c(1,lStack_190,lStack_188,param_9,&PTR_DAT_110382730);
    func_0x000107c6142c(lVar12);
    lStack_100 = lStack_1d0;
    lStack_f0 = 0;
    lStack_e8 = -0x2000000000000000;
    lStack_e0 = 0;
    lStack_d8 = 0;
    lStack_d0 = -0x2000000000000000;
    lStack_f8 = lVar10;
    lStack_c8 = lVar4;
    uStack_c0 = uVar1;
  }
  else {
    func_0x000107c61434(lVar10);
    lVar12 = lVar4;
    uVar8 = uVar1;
    func_0x000100029284();
    if ((uVar8 & 1) == 0) {
      func_0x000107c6142c(lVar10);
      goto LAB_1010d4c3c;
    }
    plVar9 = (long *)(*(long *)(lVar10 + 0x38) + lVar12 * 0x48);
    lStack_188 = plVar9[1];
    lStack_190 = *plVar9;
    lStack_168 = plVar9[5];
    lStack_170 = plVar9[4];
    lStack_158 = plVar9[7];
    lStack_160 = plVar9[6];
    uStack_150 = plVar9[8];
    lStack_178 = plVar9[3];
    lStack_180 = plVar9[2];
    FUN_1010c7524(&lStack_190,&lStack_b0);
    func_0x000107c6142c(uVar1);
    func_0x000107c6142c(lVar10);
    lStack_d8 = lStack_168;
    lStack_e0 = lStack_170;
    lStack_c8 = lStack_158;
    lStack_d0 = lStack_160;
    uStack_c0 = uStack_150;
    lStack_f8 = lStack_188;
    lStack_100 = lStack_190;
    lStack_e8 = lStack_178;
    lStack_f0 = lStack_180;
  }
  lStack_88 = lStack_d8;
  lStack_90 = lStack_e0;
  lStack_78 = lStack_c8;
  lStack_80 = lStack_d0;
  uStack_70 = uStack_c0;
  lStack_a8 = lStack_f8;
  lStack_b0 = lStack_100;
  lStack_98 = lStack_e8;
  lStack_a0 = lStack_f0;
  lStack_190 = 0;
  lStack_188 = 0xe000000000000000;
  func_0x000107c602fc(0x22);
  lStack_128 = lStack_190;
  uStack_120 = lStack_188;
  func_0x000107c5fb78(0xd000000000000020,0x800000010ef25840);
  lStack_168 = param_4[5];
  lStack_170 = param_4[4];
  lStack_158 = param_4[7];
  lStack_160 = param_4[6];
  uStack_150 = param_4[8];
  uStack_148 = (undefined1)param_4[9];
  uStack_13f = *(undefined8 *)((long)param_4 + 0x51);
  uStack_147 = (undefined7)*(undefined8 *)((long)param_4 + 0x49);
  uStack_140 = (undefined1)((ulong)*(undefined8 *)((long)param_4 + 0x49) >> 0x38);
  lStack_188 = param_4[1];
  lStack_190 = *param_4;
  lStack_178 = param_4[3];
  lStack_180 = param_4[2];
  func_0x000107c603d0(&lStack_190,&lStack_128,&UNK_110382300,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  uVar2 = uStack_120;
  func_0x0001007d6c6c(1,lStack_128,uStack_120,param_9,&PTR_DAT_110382730);
  func_0x000107c6142c(uVar2);
  lVar4 = lStack_1a8;
  plVar9 = &lStack_190;
  func_0x000107c61428(lStack_1a8 + 0x10,plVar9,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  uVar2 = uStack_1c0;
  uVar5 = uStack_1b0;
  if (lVar4 != 0) {
    func_0x000107c4b1dc(uStack_1b0);
    func_0x000107c61180();
    uVar6 = uVar5;
    func_0x000107c5faec();
    func_0x000107c61170(uVar5);
    uVar5 = uStack_1b0;
    FUN_1010d4f24(&lStack_b0,lStack_1c8,param_4,uVar6,plVar9);
    func_0x000107c61170(lVar4);
    func_0x000107c6142c(plVar9);
  }
  func_0x000107c5d7e0(uVar5);
  func_0x000107c61180();
  func_0x000107c5edb4(lVar11);
  func_0x000107c61170(uVar5);
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
  *(undefined8 *)((long)auStack_1e0 + lVar3 + 8) = uVar2;
  *(undefined8 *)((long)auStack_1e0 + lVar3) = uStack_1b8;
  func_0x0001010d3f24(1,lVar11,200,0xd000000000000015,0x800000010ef25870,puVar7,0,0xf000000000000000
                     );
  func_0x000107c6142c(puVar7);
  FUN_1010d8438(&lStack_100,0x112d5c030,&UNK_10d922f80);
LAB_1010d4ef4:
  (**(code **)(lStack_1a0 + 8))(lVar11,lStack_198);
  return;
}



/* Entry: 1010d4f24; end: 1010d534b;  */

/* WARNING: Possible PIC construction at 0x0001010d5078: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010d5088: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010d5098: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010d50ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010d50fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010d52e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010d52f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010d5304: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010d5314: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010d5308) */
/* WARNING: Removing unreachable block (ram,0x0001010d52f8) */
/* WARNING: Removing unreachable block (ram,0x0001010d52e8) */
/* WARNING: Removing unreachable block (ram,0x0001010d5100) */
/* WARNING: Removing unreachable block (ram,0x0001010d50f0) */
/* WARNING: Removing unreachable block (ram,0x0001010d509c) */
/* WARNING: Removing unreachable block (ram,0x0001010d508c) */
/* WARNING: Removing unreachable block (ram,0x0001010d507c) */
/* WARNING: Removing unreachable block (ram,0x0001010d5318) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010d4f24(undefined8 *param_1,undefined8 param_2,long param_3,undefined *param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 auStack_b8 [3];
  undefined8 uStack_a0;
  long lStack_98;
  
  uVar7 = 0x3fe0000000000000;
  if (*(char *)(param_3 + 0x28) != '\x01') {
    uVar7 = *(undefined8 *)(param_3 + 0x20);
  }
  uVar9 = *(undefined8 *)(param_3 + 0x30);
  uVar6 = 0x3ff0000000000000;
  if (*(char *)(param_3 + 0x40) != '\x01') {
    uVar6 = *(undefined8 *)(param_3 + 0x38);
  }
  uVar10 = *(undefined8 *)(param_3 + 0x48);
  uVar8 = 0;
  if (*(char *)(param_3 + 0x58) != '\x01') {
    uVar8 = *(undefined8 *)(param_3 + 0x50);
  }
  puVar2 = PTR_PTR_1126a6358;
  func_0x000107c610f8();
  func_0x000107c47ad0(uVar7,uVar9,uVar6,uVar10,uVar8);
  puVar3 = puVar2;
  func_0x0001010d33b8();
  if (((ulong)puVar3 & 1) == 0) {
    func_0x000107c4d75c(puVar2);
    uVar9 = uVar7;
    func_0x000107c4d760(puVar2);
    uVar8 = uVar9;
    func_0x000107c4d768(puVar2);
    uVar10 = uVar8;
    func_0x000107c4d764(puVar2);
    uVar6 = uVar10;
    func_0x0001000d224c(auStack_b8);
    puVar5 = auStack_b8;
    func_0x0001000a8868(puVar5,uStack_a0);
    FUN_1010d6728();
    func_0x000107c508f8(puVar2);
    (**(code **)(lStack_98 + 8))
              (uVar7,uVar9,uVar8,uVar10,uVar6,param_4,param_5,param_1,puVar5,uStack_a0,lStack_98);
    func_0x000107c6142c(puVar5);
    func_0x0001000834e4(auStack_b8);
    func_0x0001000d224c(auStack_b8);
    func_0x000107c5fadc(param_4,param_5);
    func_0x000107c5fadc(param_1[7],param_1[8]);
    uVar6 = *param_1;
    func_0x000107c5fadc(uVar6,param_1[1]);
    FUN_1010d6728();
    func_0x000107c5fc48();
    func_0x000107c6142c(uVar6);
    puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x000107c61168(PTR__OBJC_CLASS___NSValue_1126afdf8);
    func_0x000107c5dc50(uVar7,uVar9);
    func_0x000107c61180();
    func_0x000107c5dc58(uVar8,uVar10,puVar3);
    func_0x000107c61180();
    func_0x000107c508f8(puVar2);
    func_0x000107c610f8();
    func_0x000107c466c0(uVar8);
    func_0x000107c5d6b4(auStack_b8[0]);
    func_0x000107c615e8(auStack_b8[0]);
  }
  else {
    uVar7 = param_1[7];
    uVar8 = param_1[8];
    uVar6 = *param_1;
    uVar10 = param_1[1];
    uVar9 = param_1[2];
    uVar1 = param_1[3];
    FUN_1010d6728();
    puVar4 = PTR_PTR_1126a6350;
    func_0x000107c610f8(PTR_PTR_1126a6350);
    func_0x000107c61174(puVar2);
    func_0x000107c5fadc(uVar7,uVar8);
    func_0x000107c5fadc(uVar6,uVar10);
    func_0x000107c5fadc(uVar9,uVar1);
    func_0x000107c5fc48(puVar3,PTR___sSSN_11034da80);
    func_0x000107c6142c(puVar3);
    func_0x000107c48584(puVar4);
    param_4 = puVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1010d534c; end: 1010d5507;  */

void FUN_1010d534c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  undefined8 auStack_70 [2];
  
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffa0 + lVar1;
  if (((uint)param_3 & 0xff00) == 0x100) {
    func_0x000107c5d7e0();
    func_0x000107c61180();
    func_0x000107c5edb4(puVar4);
    func_0x000107c61170(param_4);
    FUN_1010d4878(param_1,param_2,param_3);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
    *(undefined8 *)((long)auStack_70 + lVar1) = param_5;
    *(undefined8 *)((long)auStack_70 + lVar1 + 8) = param_6;
    func_0x0001010d3f24(3,puVar4,0x193,param_1,param_2,puVar3,0,0xf000000000000000);
    func_0x000107c6142c(param_2);
  }
  else {
    func_0x000107c5d7e0(param_4);
    func_0x000107c61180();
    func_0x000107c5edb4(puVar4);
    func_0x000107c61170(param_4);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
    *(undefined8 *)((long)auStack_70 + lVar1) = param_5;
    *(undefined8 *)((long)auStack_70 + lVar1 + 8) = param_6;
    func_0x0001010d3f24(1,puVar4,200,0xd00000000000001b,0x800000010ef257c0,puVar3,0,
                        0xf000000000000000);
  }
  func_0x000107c6142c(puVar3);
  (**(code **)(lVar5 + 8))(puVar4,lVar2);
  return;
}



/* Entry: 1010d5508; end: 1010d5a7f;  */

/* WARNING: Removing unreachable block (ram,0x0001010d56c4) */

void FUN_1010d5508(undefined *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  long extraout_x8;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 auStack_100 [2];
  undefined8 auStack_f0 [2];
  long lStack_e0;
  long lStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  uStack_c8 = param_6;
  uStack_c0 = param_5;
  func_0x000107c614f0();
  uVar6 = 0;
  func_0x000107c5ede0();
  lVar13 = *(long *)(uVar6 - 8);
  uVar7 = uVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar5 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar12 = *(long *)(param_3 + 0x10);
  lVar15 = (long)auStack_f0 + lVar5;
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar12 != 0) {
    puStack_88 = PTR___swiftEmptyArrayStorage_11034f1c8;
    auStack_f0[0] = param_4;
    lStack_e0 = (long)auStack_f0 + lVar5;
    lStack_d8 = lVar13;
    uStack_d0 = uVar6;
    func_0x0001010d6e30(0,lVar12,0);
    puVar11 = (undefined8 *)(param_3 + 0x30);
    puVar9 = puStack_88;
    do {
      uStack_98 = puVar11[-2];
      uVar2 = puVar11[-1];
      uStack_a0 = *puVar11;
      uVar3 = puVar11[1];
      uStack_a8 = puVar11[2];
      uStack_b0 = puVar11[3];
      uVar6 = puVar11[4];
      uStack_b8 = puVar11[5];
      uVar14 = puVar11[6];
      uVar1 = *(ulong *)(puVar9 + 0x10);
      uVar4 = *(ulong *)(puVar9 + 0x18);
      puStack_88 = puVar9;
      func_0x000107c61434(uVar14);
      func_0x000107c61434(uVar2);
      func_0x000107c61434(uVar3);
      uVar7 = uVar6;
      func_0x000107c61434(uVar6);
      if (uVar4 >> 1 <= uVar1) {
        uVar7 = (ulong)(1 < uVar4);
        func_0x0001010d6e30(uVar7,uVar1 + 1,1);
        puVar9 = puStack_88;
      }
      puVar11 = puVar11 + 9;
      *(ulong *)(puVar9 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puVar9 + uVar1 * 0x48 + 0x20) = uStack_b8;
      *(undefined8 *)(puVar9 + uVar1 * 0x48 + 0x28) = uVar14;
      *(undefined8 *)(puVar9 + uVar1 * 0x48 + 0x30) = uStack_98;
      *(undefined8 *)(puVar9 + uVar1 * 0x48 + 0x38) = uVar2;
      *(undefined8 *)(puVar9 + uVar1 * 0x48 + 0x40) = uStack_a0;
      *(undefined8 *)(puVar9 + uVar1 * 0x48 + 0x48) = uVar3;
      *(undefined8 *)(puVar9 + uVar1 * 0x48 + 0x50) = uStack_a8;
      *(undefined8 *)(puVar9 + uVar1 * 0x48 + 0x58) = uStack_b0;
      *(ulong *)(puVar9 + uVar1 * 0x48 + 0x60) = uVar6;
      lVar12 = lVar12 + -1;
      param_4 = auStack_f0[0];
      uVar6 = uStack_d0;
      lVar13 = lStack_d8;
      lVar15 = lStack_e0;
    } while (lVar12 != 0);
  }
  if (lRam0000000112d5c048 != -1) {
    uVar7 = 0x112d5c048;
    func_0x000107c61568(0x112d5c048,0x1010d3338);
  }
  puStack_88 = param_1;
  uStack_80 = param_2;
  puStack_78 = puVar9;
  FUN_1010d885c();
  puVar10 = &UNK_110382398;
  ppuVar8 = &puStack_88;
  func_0x000107c5eb4c(ppuVar8,&UNK_110382398,uVar7);
  func_0x000107c6142c(puVar9);
  func_0x000107c5d7e0(param_4);
  func_0x000107c61180();
  func_0x000107c5edb4(lVar15);
  func_0x000107c61170(param_4);
  func_0x00010006c00c(ppuVar8,puVar10);
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
  *(undefined8 *)((long)auStack_100 + lVar5 + 8) = uStack_c8;
  *(undefined8 *)((long)auStack_100 + lVar5) = uStack_c0;
  func_0x0001010d3f24(1,lVar15,200,0xd000000000000011,0x800000010ef25740,puVar9,ppuVar8,puVar10);
  func_0x000107c6142c(puVar9);
  func_0x00010006c090(ppuVar8,puVar10);
  func_0x00010006c090(ppuVar8,puVar10);
  (**(code **)(lVar13 + 8))(lVar15,uVar6);
  return;
}



/* Entry: 1010d5a80; end: 1010d6583;  */

/* WARNING: Removing unreachable block (ram,0x0001010d5cc8) */

void FUN_1010d5a80(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 ****ppppuVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 *****pppppuVar6;
  undefined8 *****pppppuVar7;
  long extraout_x8;
  long lVar8;
  undefined8 *****pppppuVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined8 auStack_e0 [2];
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  undefined8 ****ppppuStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar4 = 0;
  uStack_c8 = param_8;
  func_0x000107c5ede0();
  lVar8 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar11 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar10 = auStack_d0 + lVar11;
  if (((uint)param_3 & 0xff00) == 0x100) {
    func_0x000107c5d7e0(param_5);
    func_0x000107c61180();
    func_0x000107c5edb4(puVar10);
    func_0x000107c61170(param_5);
    FUN_1010d4878(param_1,param_2,param_3);
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
    *(undefined8 *)((long)auStack_e0 + lVar11) = param_6;
    *(undefined8 *)((long)auStack_e0 + lVar11 + 8) = param_7;
    func_0x0001010d3f24(3,puVar10,500,param_1,param_2,puVar5,0,0xf000000000000000);
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(puVar5);
    (**(code **)(lVar8 + 8))(puVar10,lVar4);
  }
  else {
    uStack_c8 = param_6;
    func_0x000107c61428(param_4 + 0x10,auStack_78,0,0);
    param_4 = param_4 + 0x10;
    func_0x000107c61618();
    if (param_4 != 0) {
      func_0x000107c61428(param_1 + 0x20,auStack_90,0,0);
      lVar11 = *(long *)(param_1 + 0x20);
      pppppuVar9 = *(undefined8 ******)(lVar11 + 0x10);
      func_0x000107c61434(lVar11);
      pppppuVar6 = (undefined8 *****)PTR___swiftEmptyArrayStorage_11034f1c8;
      if (pppppuVar9 != (undefined8 *****)0x0) {
        func_0x000107c61434(lVar11);
        pppppuVar6 = pppppuVar9;
        func_0x0001010cefb0(pppppuVar9,0);
        pppppuVar7 = &ppppuStack_b8;
        func_0x0001010d80dc(pppppuVar7,pppppuVar6 + 4,pppppuVar9,lVar11);
        FUN_1010d84b4(ppppuStack_b8,uStack_b0,uStack_a8,uStack_a0,uStack_98);
        if (pppppuVar7 != pppppuVar9) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1010d5c4c);
          (*pcVar3)();
        }
      }
      ppppuStack_b8 = pppppuVar6;
      FUN_1010d6f70(&ppppuStack_b8);
      uVar1 = uStack_c8;
      func_0x000107c6142c(lVar11);
      ppppuVar2 = ppppuStack_b8;
      FUN_1010d5508(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),ppppuStack_b8,
                    param_5,uVar1,param_7);
      func_0x000107c61170(param_4);
      func_0x000107c61574(ppppuVar2);
    }
  }
  return;
}



/* Entry: 1010d6584; end: 1010d65e3; -[_TtC20LensVenuesURIHandler20LensVenuesURIHandler init] */

void FUN_1010d6584(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensVenuesURIHandler.LensVenuesURIHandler",0x29,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1010d65b0);
  (*pcVar1)();
}



/* Entry: 1010d65e4; end: 1010d665b; -[_TtC20LensVenuesURIHandler20LensVenuesURIHandler .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001010d6610: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010d6614) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010d65e4(long param_1)

{
  func_0x0001000834e4(param_1 + _DAT_112d5bee8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d5bef8));
  return;
}



/* Entry: 1010d665c; end: 1010d66cf;  */

void FUN_1010d665c(void)

{
  long in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x0001010d666c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x4 + 0x10))();
  return;
}



/* Entry: 1010d66d0; end: 1010d6727;  */

uint FUN_1010d66d0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_70 = param_1[8];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
  uStack_28 = param_2[7];
  uStack_30 = param_2[6];
  uStack_20 = param_2[8];
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  FUN_1010d8290(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 1010d6728; end: 1010d68b7;  */

/* WARNING: Removing unreachable block (ram,0x0001010d68ac) */

undefined8 *** FUN_1010d6728(void)

{
  undefined8 ***pppuVar1;
  undefined8 **ppuVar2;
  undefined8 ***pppuVar3;
  undefined8 **ppuVar4;
  undefined *puVar5;
  undefined8 ***pppuVar6;
  code *pcVar7;
  undefined8 ****ppppuVar8;
  undefined8 ****ppppuVar9;
  long lVar10;
  long unaff_x20;
  undefined8 ****ppppuVar11;
  undefined8 ***pppuVar12;
  undefined8 ***pppuVar13;
  undefined8 ***pppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(unaff_x20 + 0x20,auStack_78,0,0);
  lVar10 = *(long *)(unaff_x20 + 0x20);
  ppppuVar11 = *(undefined8 *****)(lVar10 + 0x10);
  func_0x000107c61434(lVar10);
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  ppppuVar8 = (undefined8 ****)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (ppppuVar11 != (undefined8 ****)0x0) {
    func_0x000107c61434(lVar10);
    ppppuVar8 = ppppuVar11;
    func_0x0001010cefb0(ppppuVar11,0);
    ppppuVar9 = &pppuStack_a0;
    func_0x0001010d80dc(ppppuVar9,ppppuVar8 + 4,ppppuVar11,lVar10);
    FUN_1010d84b4(pppuStack_a0,uStack_98,uStack_90,uStack_88,uStack_80);
    if (ppppuVar9 != ppppuVar11) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1010d67c4);
      (*pcVar7)();
    }
  }
  pppuStack_a0 = ppppuVar8;
  FUN_1010d6f70(&pppuStack_a0);
  func_0x000107c6142c(lVar10);
  pppuVar6 = pppuStack_a0;
  pppuVar13 = (undefined8 ***)pppuStack_a0[2];
  if (pppuVar13 == (undefined8 ***)0x0) {
    func_0x000107c61574(pppuStack_a0);
    pppuVar12 = (undefined8 ***)PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    pppuStack_a0 = (undefined8 ***)puVar5;
    func_0x000100403514(0,pppuVar13,0);
    ppppuVar8 = (undefined8 ****)(pppuVar6 + 0xc);
    pppuVar12 = pppuStack_a0;
    do {
      pppuVar1 = ppppuVar8[-1];
      pppuVar3 = *ppppuVar8;
      ppuVar2 = pppuVar12[2];
      ppuVar4 = pppuVar12[3];
      pppuStack_a0 = pppuVar12;
      func_0x000107c61434(pppuVar3);
      if ((undefined8 **)((ulong)ppuVar4 >> 1) <= ppuVar2) {
        func_0x000100403514((undefined8 **)0x1 < ppuVar4,(undefined8 **)((long)ppuVar2 + 1U),1);
        pppuVar12 = pppuStack_a0;
      }
      ppppuVar8 = ppppuVar8 + 9;
      pppuVar12[2] = (undefined8 **)((long)ppuVar2 + 1U);
      pppuVar12[(long)ppuVar2 * 2 + 4] = pppuVar1;
      pppuVar12[(long)ppuVar2 * 2 + 5] = pppuVar3;
      pppuVar13 = (undefined8 ***)((long)pppuVar13 + -1);
    } while (pppuVar13 != (undefined8 ***)0x0);
    func_0x000107c61574(pppuVar6);
  }
  return pppuVar12;
}



/* Entry: 1010d68b8; end: 1010d6b7f;  */

void FUN_1010d68b8(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lStack_160;
  undefined8 uStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  ulong uStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  ulong uStack_110;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  ulong uStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  ulong uStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  ulong uStack_70;
  
  lStack_88 = param_2[5];
  uStack_90 = param_2[4];
  lVar10 = param_2[7];
  lStack_80 = param_2[6];
  uVar9 = param_2[8];
  lStack_a8 = param_2[1];
  lStack_b0 = *param_2;
  lStack_98 = param_2[3];
  lStack_a0 = param_2[2];
  lVar7 = *param_1;
  lVar8 = *(long *)(lVar7 + 0x10);
  lStack_78 = lVar10;
  uStack_70 = uVar9;
  func_0x000107c61434(uVar9);
  if (lVar8 != 0) {
    func_0x000107c61434(lVar7);
    lVar8 = lVar10;
    uVar5 = uVar9;
    func_0x000100029284();
    if ((uVar5 & 1) != 0) {
      plVar6 = (long *)(*(long *)(lVar7 + 0x38) + lVar8 * 0x48);
      lStack_f8 = plVar6[1];
      lStack_100 = *plVar6;
      lStack_d8 = plVar6[5];
      uStack_e0 = plVar6[4];
      lStack_c8 = plVar6[7];
      lStack_d0 = plVar6[6];
      lStack_c0 = plVar6[8];
      lStack_e8 = plVar6[3];
      lStack_f0 = plVar6[2];
      FUN_1010c7524(&lStack_100,&lStack_150);
      func_0x000107c6142c(lVar7);
      lStack_150 = 0;
      lStack_148 = 0xe000000000000000;
      func_0x000107c602fc(0x25);
      lStack_160 = lStack_150;
      uStack_158 = lStack_148;
      func_0x000107c5fb78(0xd000000000000019,0x800000010ef25600);
      lVar8 = lStack_c0;
      lVar7 = lStack_c8;
      func_0x000107c61434(lStack_c0);
      func_0x000107c5fb78(lVar7,lVar8);
      func_0x000107c6142c(lVar8);
      func_0x000107c5fb78(0x2820,0xe200000000000000);
      puVar2 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08;
      puVar1 = PTR___ss26DefaultStringInterpolationVN_11034ec00;
      lStack_128 = lStack_88;
      uStack_130 = uStack_90;
      lStack_118 = lStack_78;
      lStack_120 = lStack_80;
      uStack_110 = uStack_70;
      lStack_148 = lStack_a8;
      lStack_150 = lStack_b0;
      lStack_138 = lStack_98;
      lStack_140 = lStack_a0;
      func_0x000107c603d0(&lStack_150,&lStack_160,&UNK_1106c79f8,
                          PTR___ss26DefaultStringInterpolationVN_11034ec00,
                          PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      func_0x000107c5fb78(0x282029,0xe300000000000000);
      lStack_128 = lStack_d8;
      uStack_130 = uStack_e0;
      lStack_118 = lStack_c8;
      lStack_120 = lStack_d0;
      uStack_110 = lStack_c0;
      lStack_148 = lStack_f8;
      lStack_150 = lStack_100;
      lStack_138 = lStack_e8;
      lStack_140 = lStack_f0;
      func_0x000107c603d0(&lStack_150,&lStack_160,&UNK_1106c79f8,puVar1,puVar2);
      uVar4 = 0x29;
      func_0x000107c5fb78(0x29,0xe100000000000000);
      uVar3 = uStack_158;
      lVar7 = lStack_160;
      func_0x0001010d83f8();
      func_0x0001007d6c8c(3,lVar7,uVar3,0,uVar4,&PTR_DAT_110382730);
      func_0x000107c6142c(uVar3);
      func_0x0001010c7560(&lStack_100);
      if (uStack_e0 <= uStack_90) {
        func_0x000107c6142c(uVar9);
        return;
      }
      FUN_1010c7524(&lStack_b0,&lStack_150);
      lVar7 = *param_1;
      func_0x000107c61558(lVar7);
      lStack_150 = *param_1;
      FUN_1010d7a2c(&lStack_b0,lVar10,uVar9,lVar7);
      func_0x000107c6142c(uVar9);
      goto LAB_1010d6b4c;
    }
    func_0x000107c6142c(lVar7);
  }
  FUN_1010c7524(&lStack_b0,&lStack_100);
  lVar7 = *param_1;
  func_0x000107c61558(lVar7);
  lStack_100 = *param_1;
  FUN_1010d7a2c(&lStack_b0,lVar10,uVar9,lVar7);
  func_0x000107c6142c(uVar9);
  lStack_150 = lStack_100;
LAB_1010d6b4c:
  *param_1 = lStack_150;
  return;
}



/* Entry: 1010d6b80; end: 1010d6e0b;  */

void FUN_1010d6b80(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long unaff_x20;
  long lVar7;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 auStack_190 [2];
  undefined8 uStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  ulong uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [24];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  lVar1 = param_1[7];
  uVar2 = param_1[8];
  func_0x000107c61428(unaff_x20 + 0x20,auStack_e8,0,0);
  lVar7 = *(long *)(unaff_x20 + 0x20);
  if (*(long *)(lVar7 + 0x10) == 0) {
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    func_0x000107c61438(uVar2,2);
  }
  else {
    func_0x000107c61438(uVar2,2);
    func_0x000107c61434(lVar7);
    lVar3 = lVar1;
    uVar5 = uVar2;
    func_0x000100029284();
    if ((uVar5 & 1) == 0) {
      func_0x000107c6142c(lVar7);
      uStack_60 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
    }
    else {
      puVar6 = (undefined8 *)(*(long *)(lVar7 + 0x38) + lVar3 * 0x48);
      lStack_178 = puVar6[1];
      uStack_180 = *puVar6;
      uStack_158 = puVar6[5];
      lStack_160 = puVar6[4];
      lStack_148 = puVar6[7];
      uStack_150 = puVar6[6];
      uStack_140 = puVar6[8];
      uStack_168 = puVar6[3];
      uStack_170 = puVar6[2];
      uStack_78 = puVar6[5];
      uStack_80 = puVar6[4];
      uStack_68 = puVar6[7];
      uStack_70 = puVar6[6];
      uStack_60 = puVar6[8];
      uStack_88 = puVar6[3];
      uStack_90 = puVar6[2];
      lStack_98 = puVar6[1];
      uStack_a0 = *puVar6;
      FUN_1010c7524(&uStack_180,&uStack_1e0);
      func_0x000107c6142c(lVar7);
    }
  }
  lStack_178 = lStack_98;
  uStack_180 = uStack_a0;
  uStack_168 = uStack_88;
  uStack_170 = uStack_90;
  uStack_158 = uStack_78;
  lStack_160 = uStack_80;
  lStack_148 = uStack_68;
  uStack_150 = uStack_70;
  uStack_130 = 0;
  uStack_138 = 0;
  uStack_120 = 0;
  uStack_128 = 0;
  uStack_110 = 0;
  uStack_118 = 0;
  uStack_100 = 0;
  uStack_108 = 0;
  uStack_140 = uStack_60;
  uStack_f8 = 0;
  if (lStack_98 == 0) {
    FUN_1010d8438(&uStack_180,0x112d5c030,&UNK_10d922f80);
    lStack_160 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x10) + 1;
    uStack_a8 = param_1[1];
    uStack_b0 = *param_1;
    uStack_b8 = param_1[3];
    uStack_c0 = param_1[2];
    uStack_c8 = param_1[6];
    uStack_d0 = param_1[5];
    uStack_1d8 = param_1[1];
    uStack_1e0 = *param_1;
    uStack_1c8 = param_1[3];
    uStack_1d0 = param_1[2];
    uStack_150 = param_1[6];
    uStack_158 = param_1[5];
    uStack_180 = uStack_1e0;
    lStack_178 = uStack_1d8;
    uStack_170 = uStack_1d0;
    uStack_168 = uStack_1c8;
    lStack_148 = lVar1;
    uStack_140 = uVar2;
    func_0x000107c61428(unaff_x20 + 0x20,&uStack_1e0,0x21,0);
    func_0x000100402194(&uStack_b0,auStack_190);
    func_0x000100402194(&uStack_c0,auStack_190);
    func_0x000100402194(&uStack_d0,auStack_190);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
    func_0x000107c61558(uVar4);
    auStack_190[0] = *(undefined8 *)(unaff_x20 + 0x20);
    *(undefined8 *)(unaff_x20 + 0x20) = 0x8000000000000000;
    FUN_1010d7a2c(&uStack_180,lVar1,uVar2,uVar4);
    func_0x000107c6142c(uVar2);
    *(undefined8 *)(unaff_x20 + 0x20) = auStack_190[0];
    func_0x000107c614a8(&uStack_1e0);
  }
  else {
    FUN_1010d8814(&uStack_a0,&uStack_1e0,0x112d5c030,&UNK_10d922f80);
    func_0x000107c61430(uVar2,2);
    FUN_1010d8438(&uStack_a0,0x112d5c030,&UNK_10d922f80);
    FUN_1010d8438(&uStack_180,0x112d5c028,&UNK_10d922f78);
  }
  return;
}



/* Entry: 1010d6e0c; end: 1010d6e4b;  */

void FUN_1010d6e0c(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1010d6e4c; end: 1010d6f6f;  */

undefined * FUN_1010d6e4c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1010d6f70);
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
    puVar3 = (undefined *)0x112d5c060;
    func_0x0001000285a8(0x112d5c060,&UNK_10d922fa0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x48) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar4,puVar1,uVar6,&UNK_1103821e0);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x48 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6 * 0x48);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 1010d6f70; end: 1010d706b;  */

void FUN_1010d6f70(ulong *param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  long lStack_50;
  ulong uStack_48;
  
  uVar3 = *param_1;
  uVar1 = uVar3;
  func_0x000107c61558();
  if ((uVar1 & 1) == 0) {
    FUN_1010d827c();
  }
  uVar4 = *(ulong *)(uVar3 + 0x10);
  lStack_50 = uVar3 + 0x20;
  uVar1 = uVar4;
  uStack_48 = uVar4;
  func_0x000107c60574();
  if ((long)uVar1 < (long)uVar4) {
    puVar5 = (undefined *)(uVar4 >> 1);
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (1 < uVar4) {
      puVar2 = puVar5;
      func_0x000107c60380(puVar5,&UNK_1106c79f8);
      *(undefined **)(puVar2 + 0x10) = puVar5;
    }
    puStack_68 = puVar2 + 0x20;
    puStack_60 = puVar5;
    FUN_1010d706c(&puStack_68,auStack_58,&lStack_50,uVar1);
    *(undefined8 *)(puVar2 + 0x10) = 0;
    func_0x000107c61574(puVar2);
  }
  else if (uVar4 != 0) {
    FUN_1010d7490(0,uVar4,1,&lStack_50);
  }
  *param_1 = uVar3;
  return;
}



/* Entry: 1010d706c; end: 1010d748f;  */

void FUN_1010d706c(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  long *plVar1;
  ulong *puVar2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  ulong uVar21;
  long unaff_x21;
  long lVar22;
  ulong *puVar23;
  ulong uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar10 = param_3[1];
  if (0 < lVar10) {
    lVar9 = 0;
    do {
      puVar7 = puStack_58;
      lVar22 = lVar9 + 1;
      if (lVar22 < lVar10) {
        lVar8 = *param_3;
        uVar15 = *(ulong *)(lVar8 + lVar22 * 0x48 + 0x20);
        lVar22 = lVar8 + lVar9 * 0x48;
        uVar18 = *(ulong *)(lVar22 + 0x20);
        lVar16 = lVar9 + 2;
        puVar23 = (ulong *)(lVar22 + 0xb0);
        uVar24 = uVar15;
        do {
          lVar17 = lVar16;
          lVar22 = lVar10;
          if (lVar10 == lVar17) break;
          uVar21 = *puVar23;
          bVar4 = uVar24 <= uVar21;
          lVar16 = lVar17 + 1;
          puVar23 = puVar23 + 9;
          uVar24 = uVar21;
          lVar22 = lVar17;
        } while (uVar15 < uVar18 != bVar4);
        if (uVar15 < uVar18) {
          if (lVar22 < lVar9) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1010d7464);
            (*pcVar3)();
          }
          if (lVar9 < lVar22) {
            puVar14 = (undefined8 *)(lVar8 + lVar9 * 0x48);
            lVar16 = lVar22;
            lVar10 = lVar9;
            puVar12 = (undefined8 *)(lVar8 + lVar22 * 0x48);
            do {
              puVar11 = puVar12 + -9;
              lVar16 = lVar16 + -1;
              if (lVar10 != lVar16) {
                if (lVar8 == 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1010d7484);
                  (*pcVar3)();
                }
                uVar28 = puVar14[5];
                uVar25 = puVar14[4];
                uVar34 = puVar14[7];
                uVar31 = puVar14[6];
                uVar20 = puVar14[8];
                uVar35 = puVar14[1];
                uVar32 = *puVar14;
                uVar29 = puVar14[3];
                uVar26 = puVar14[2];
                uVar19 = puVar12[-1];
                uVar36 = puVar12[-4];
                uVar33 = puVar12[-5];
                uVar30 = puVar12[-2];
                uVar27 = puVar12[-3];
                uVar39 = *puVar11;
                uVar38 = puVar12[-6];
                uVar37 = puVar12[-7];
                puVar14[1] = puVar12[-8];
                *puVar14 = uVar39;
                puVar14[3] = uVar38;
                puVar14[2] = uVar37;
                puVar14[5] = uVar36;
                puVar14[4] = uVar33;
                puVar14[7] = uVar30;
                puVar14[6] = uVar27;
                puVar14[8] = uVar19;
                puVar12[-1] = uVar20;
                puVar12[-4] = uVar28;
                puVar12[-5] = uVar25;
                puVar12[-2] = uVar34;
                puVar12[-3] = uVar31;
                puVar12[-8] = uVar35;
                *puVar11 = uVar32;
                puVar12[-6] = uVar29;
                puVar12[-7] = uVar26;
              }
              lVar10 = lVar10 + 1;
              puVar14 = puVar14 + 9;
              puVar12 = puVar11;
            } while (lVar10 < lVar16);
            lVar10 = param_3[1];
          }
        }
      }
      lVar16 = lVar22;
      if (lVar22 < lVar10) {
        if (SBORROW8(lVar22,lVar9)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1010d7460);
          (*pcVar3)();
        }
        if (lVar22 - lVar9 < param_4) {
          if (SCARRY8(lVar9,param_4)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1010d7468);
            (*pcVar3)();
          }
          lVar8 = lVar9 + param_4;
          if (lVar10 <= lVar9 + param_4) {
            lVar8 = lVar10;
          }
          if (lVar8 < lVar9) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1010d746c);
            (*pcVar3)();
          }
          if (lVar22 != lVar8) {
            lVar13 = *param_3;
            puVar14 = (undefined8 *)(lVar13 + lVar22 * 0x48);
            lVar10 = lVar9 - lVar22;
            lVar17 = lVar10;
            puVar12 = puVar14;
LAB_1010d723c:
            do {
              if ((ulong)puVar14[4] < (ulong)puVar14[-5]) {
                if (lVar13 == 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1010d7470);
                  (*pcVar3)();
                }
                puVar11 = puVar14 + -9;
                uVar26 = puVar14[5];
                uVar19 = puVar14[4];
                uVar30 = puVar14[7];
                uVar28 = puVar14[6];
                uVar20 = puVar14[8];
                uVar31 = puVar14[1];
                uVar29 = *puVar14;
                uVar27 = puVar14[3];
                uVar25 = puVar14[2];
                puVar14[5] = puVar14[-4];
                puVar14[4] = puVar14[-5];
                puVar14[7] = puVar14[-2];
                puVar14[6] = puVar14[-3];
                puVar14[8] = puVar14[-1];
                puVar14[1] = puVar14[-8];
                *puVar14 = *puVar11;
                puVar14[3] = puVar14[-6];
                puVar14[2] = puVar14[-7];
                puVar14[-1] = uVar20;
                puVar14[-4] = uVar26;
                puVar14[-5] = uVar19;
                puVar14[-2] = uVar30;
                puVar14[-3] = uVar28;
                puVar14[-8] = uVar31;
                *puVar11 = uVar29;
                puVar14[-6] = uVar27;
                puVar14[-7] = uVar25;
                bVar4 = lVar10 != -1;
                lVar10 = lVar10 + 1;
                puVar14 = puVar11;
                if (bVar4) goto LAB_1010d723c;
              }
              lVar22 = lVar22 + 1;
              puVar14 = puVar12 + 9;
              lVar10 = lVar17 + -1;
              lVar16 = lVar8;
              lVar17 = lVar10;
              puVar12 = puVar14;
            } while (lVar22 != lVar8);
          }
        }
      }
      if (lVar16 < lVar9) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1010d7450);
        (*pcVar3)();
      }
      puVar5 = puStack_58;
      func_0x000107c61558();
      puVar6 = puVar7;
      if (((ulong)puVar5 & 1) == 0) {
        puVar6 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
      }
      uVar24 = *(ulong *)(puVar6 + 0x10);
      puVar7 = puVar6;
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar24) {
        puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
        func_0x0001000a91e0(puVar7,uVar24 + 1,1,puVar6);
      }
      *(ulong *)(puVar7 + 0x10) = uVar24 + 1;
      *(long *)(puVar7 + uVar24 * 0x10 + 0x20) = lVar9;
      *(long *)(puVar7 + uVar24 * 0x10 + 0x28) = lVar16;
      puStack_58 = puVar7;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1010d7488);
        (*pcVar3)();
      }
      FUN_1010d7548(&puStack_58,*param_1,param_3);
      puVar7 = puStack_58;
      if (unaff_x21 != 0) goto LAB_1010d7420;
      lVar10 = param_3[1];
      lVar9 = lVar16;
    } while (lVar16 < lVar10);
  }
  puVar7 = puStack_58;
  lVar10 = *param_1;
  if (lVar10 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1010d7490);
    (*pcVar3)();
  }
  puVar5 = puStack_58;
  func_0x000107c61558();
  if (((ulong)puVar5 & 1) == 0) {
    FUN_100e06d54();
  }
  puVar23 = (ulong *)(puVar7 + 0x10);
  uVar24 = *puVar23;
  while (1 < uVar24) {
    lVar9 = *param_3;
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1010d748c);
      (*pcVar3)();
    }
    plVar1 = (long *)(puVar7 + uVar24 * 0x10);
    lVar22 = *plVar1;
    puVar2 = puVar23 + uVar24 * 2;
    uVar15 = puVar2[1];
    FUN_1010d77bc(lVar9 + lVar22 * 0x48,lVar9 + *puVar2 * 0x48,lVar9 + uVar15 * 0x48,lVar10);
    if (unaff_x21 != 0) break;
    if ((long)uVar15 < lVar22) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1010d7454);
      (*pcVar3)();
    }
    if (*puVar23 <= uVar24 - 2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1010d7458);
      (*pcVar3)();
    }
    *plVar1 = lVar22;
    plVar1[1] = uVar15;
    uVar15 = *puVar23;
    lVar9 = uVar15 - uVar24;
    if (uVar15 < uVar24) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1010d745c);
      (*pcVar3)();
    }
    uVar24 = uVar15 - 1;
    func_0x000107c610b8(puVar2,puVar2 + 2,lVar9 * 0x10);
    *puVar23 = uVar24;
  }
LAB_1010d7420:
  func_0x000107c6142c(puVar7);
  return;
}



/* Entry: 1010d7490; end: 1010d7547;  */

void FUN_1010d7490(long param_1,long param_2,long param_3,long *param_4)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  if (param_3 != param_2) {
    lVar3 = *param_4;
    puVar4 = (undefined8 *)(lVar3 + param_3 * 0x48);
    param_1 = param_1 - param_3;
    lVar6 = param_1;
    puVar5 = puVar4;
LAB_1010d74d4:
    do {
      if ((ulong)puVar4[4] < (ulong)puVar4[-5]) {
        if (lVar3 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1010d7548);
          (*pcVar1)();
        }
        puVar7 = puVar4 + -9;
        uVar11 = puVar4[5];
        uVar9 = puVar4[4];
        uVar15 = puVar4[7];
        uVar13 = puVar4[6];
        uVar8 = puVar4[8];
        uVar16 = puVar4[1];
        uVar14 = *puVar4;
        uVar12 = puVar4[3];
        uVar10 = puVar4[2];
        puVar4[5] = puVar4[-4];
        puVar4[4] = puVar4[-5];
        puVar4[7] = puVar4[-2];
        puVar4[6] = puVar4[-3];
        puVar4[8] = puVar4[-1];
        puVar4[1] = puVar4[-8];
        *puVar4 = *puVar7;
        puVar4[3] = puVar4[-6];
        puVar4[2] = puVar4[-7];
        puVar4[-1] = uVar8;
        puVar4[-4] = uVar11;
        puVar4[-5] = uVar9;
        puVar4[-2] = uVar15;
        puVar4[-3] = uVar13;
        puVar4[-8] = uVar16;
        *puVar7 = uVar14;
        puVar4[-6] = uVar12;
        puVar4[-7] = uVar10;
        bVar2 = param_1 != -1;
        param_1 = param_1 + 1;
        puVar4 = puVar7;
        if (bVar2) goto LAB_1010d74d4;
      }
      param_3 = param_3 + 1;
      puVar4 = puVar5 + 9;
      param_1 = lVar6 + -1;
      lVar6 = param_1;
      puVar5 = puVar4;
    } while (param_3 != param_2);
  }
  return;
}



/* Entry: 1010d7548; end: 1010d77bb;  */

undefined8 FUN_1010d7548(ulong *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long unaff_x21;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  
  uVar11 = *param_1;
  if (1 < *(ulong *)(uVar11 + 0x10)) {
    uVar10 = uVar11;
    func_0x000107c61558();
    if ((uVar10 & 1) == 0) {
      FUN_100e06d54();
    }
    *param_1 = uVar11;
    lVar1 = uVar11 + 0x20;
    uVar10 = *(ulong *)(uVar11 + 0x10);
    do {
      uVar13 = uVar10 - 1;
      if (uVar10 < 4) {
        if (uVar10 == 3) {
          bVar7 = SBORROW8(*(long *)(uVar11 + 0x28),*(long *)(uVar11 + 0x20));
          lVar8 = *(long *)(uVar11 + 0x28) - *(long *)(uVar11 + 0x20);
          goto LAB_1010d7620;
        }
        if (uVar10 < 2) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1010d779c);
          (*pcVar6)();
        }
        plVar2 = (long *)(uVar11 + uVar10 * 0x10);
        lVar8 = *plVar2;
        lVar9 = plVar2[1];
        bVar7 = SBORROW8(lVar9,lVar8);
        lVar9 = lVar9 - lVar8;
LAB_1010d7680:
        if (bVar7) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1010d778c);
          (*pcVar6)();
        }
        plVar2 = (long *)(lVar1 + uVar13 * 0x10);
        lVar8 = *plVar2;
        lVar12 = plVar2[1];
        if (SBORROW8(lVar12,lVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1010d7794);
          (*pcVar6)();
        }
        uVar14 = uVar13;
        if (lVar12 - lVar8 < lVar9) break;
      }
      else {
        lVar9 = lVar1 + uVar10 * 0x10;
        if (SBORROW8(*(long *)(lVar9 + -0x38),*(long *)(lVar9 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1010d7774);
          (*pcVar6)();
        }
        lVar8 = *(long *)(lVar9 + -0x28) - *(long *)(lVar9 + -0x30);
        if (SBORROW8(*(long *)(lVar9 + -0x28),*(long *)(lVar9 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1010d7778);
          (*pcVar6)();
        }
        plVar2 = (long *)(uVar11 + uVar10 * 0x10);
        lVar12 = *plVar2;
        lVar4 = plVar2[1];
        lVar5 = lVar4 - lVar12;
        if (SBORROW8(lVar4,lVar12)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1010d7780);
          (*pcVar6)();
        }
        if (SCARRY8(lVar8,lVar5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1010d7788);
          (*pcVar6)();
        }
        bVar7 = false;
        if (lVar8 + lVar5 < *(long *)(lVar9 + -0x38) - *(long *)(lVar9 + -0x40)) {
LAB_1010d7620:
          if (bVar7) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1010d777c);
            (*pcVar6)();
          }
          plVar2 = (long *)(uVar11 + uVar10 * 0x10);
          lVar12 = *plVar2;
          lVar4 = plVar2[1];
          lVar9 = lVar4 - lVar12;
          if (SBORROW8(lVar4,lVar12)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1010d7784);
            (*pcVar6)();
          }
          plVar2 = (long *)(lVar1 + uVar13 * 0x10);
          lVar12 = *plVar2;
          lVar4 = plVar2[1];
          lVar5 = lVar4 - lVar12;
          if (SBORROW8(lVar4,lVar12)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1010d7790);
            (*pcVar6)();
          }
          if (SCARRY8(lVar9,lVar5)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1010d7798);
            (*pcVar6)();
          }
          bVar7 = false;
          if (lVar9 + lVar5 < lVar8) goto LAB_1010d7680;
          uVar14 = uVar10 - 2;
          if (lVar5 <= lVar8) {
            uVar14 = uVar13;
          }
        }
        else {
          plVar2 = (long *)(lVar1 + uVar13 * 0x10);
          lVar9 = *plVar2;
          lVar12 = plVar2[1];
          if (SBORROW8(lVar12,lVar9)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1010d77a0);
            (*pcVar6)();
          }
          uVar14 = uVar10 - 2;
          if (lVar12 - lVar9 <= lVar8) {
            uVar14 = uVar13;
          }
        }
      }
      uVar13 = uVar14 - 1;
      if (uVar10 <= uVar13) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1010d7764);
        (*pcVar6)();
      }
      lVar8 = *param_3;
      if (lVar8 == 0) {
        *param_1 = uVar11;
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1010d77bc);
        (*pcVar6)();
      }
      plVar2 = (long *)(lVar1 + uVar13 * 0x10);
      lVar12 = *plVar2;
      plVar3 = (long *)(lVar1 + uVar14 * 0x10);
      lVar9 = plVar3[1];
      FUN_1010d77bc(lVar8 + lVar12 * 0x48,lVar8 + *plVar3 * 0x48,lVar8 + lVar9 * 0x48,param_2);
      if (unaff_x21 != 0) break;
      if (lVar9 < lVar12) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1010d7768);
        (*pcVar6)();
      }
      if (*(ulong *)(uVar11 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1010d776c);
        (*pcVar6)();
      }
      *plVar2 = lVar12;
      plVar2[1] = lVar9;
      uVar13 = *(ulong *)(uVar11 + 0x10);
      if (uVar13 <= uVar14) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1010d7770);
        (*pcVar6)();
      }
      uVar10 = uVar13 - 1;
      func_0x000107c610b8(plVar3,plVar3 + 2,(uVar10 - uVar14) * 0x10);
      *(ulong *)(uVar11 + 0x10) = uVar10;
    } while (2 < uVar13);
    *param_1 = uVar11;
  }
  return 1;
}



/* Entry: 1010d77bc; end: 1010d7a2b;  */

undefined8
FUN_1010d77bc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  lVar1 = ((long)param_2 - (long)param_1) / 0x48;
  lVar2 = ((long)param_3 - (long)param_2) / 0x48;
  if (lVar1 < lVar2) {
    if (((param_4 < param_1) || (param_1 + lVar1 * 9 <= param_4)) || (param_4 != param_1)) {
      func_0x000107c610b8(param_4,param_1,lVar1 * 0x48);
    }
    puVar3 = param_4 + lVar1 * 9;
    puVar5 = param_1;
    if (0x47 < (long)param_2 - (long)param_1) {
      do {
        if (param_3 <= param_2) break;
        if ((ulong)param_2[4] < (ulong)param_4[4]) {
          puVar4 = param_4;
          puVar6 = param_2;
          param_2 = param_2 + 9;
        }
        else {
          puVar4 = param_4 + 9;
          puVar6 = param_4;
        }
        param_4 = puVar4;
        if (puVar5 != puVar6) {
          uVar8 = puVar6[1];
          uVar7 = *puVar6;
          uVar10 = puVar6[3];
          uVar9 = puVar6[2];
          uVar12 = puVar6[5];
          uVar11 = puVar6[4];
          uVar14 = puVar6[7];
          uVar13 = puVar6[6];
          puVar5[8] = puVar6[8];
          puVar5[5] = uVar12;
          puVar5[4] = uVar11;
          puVar5[7] = uVar14;
          puVar5[6] = uVar13;
          puVar5[1] = uVar8;
          *puVar5 = uVar7;
          puVar5[3] = uVar10;
          puVar5[2] = uVar9;
        }
        puVar5 = puVar5 + 9;
      } while (param_4 < puVar3);
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar2 * 9 <= param_4)) || (param_4 != param_2)) {
      func_0x000107c610b8(param_4,param_2,lVar2 * 0x48);
    }
    puVar3 = param_4 + lVar2 * 9;
    puVar5 = param_2;
    if ((param_1 < param_2) && (0x47 < (long)param_3 - (long)param_2)) {
      do {
        while (puVar6 = param_3 + -9, (ulong)puVar3[-5] < (ulong)param_2[-5]) {
          puVar5 = param_2 + -9;
          if (param_3 != param_2) {
            uVar8 = param_2[-8];
            uVar7 = *puVar5;
            uVar10 = param_2[-6];
            uVar9 = param_2[-7];
            uVar12 = param_2[-4];
            uVar11 = param_2[-5];
            uVar14 = param_2[-2];
            uVar13 = param_2[-3];
            param_3[-1] = param_2[-1];
            param_3[-4] = uVar12;
            param_3[-5] = uVar11;
            param_3[-2] = uVar14;
            param_3[-3] = uVar13;
            param_3[-8] = uVar8;
            *puVar6 = uVar7;
            param_3[-6] = uVar10;
            param_3[-7] = uVar9;
          }
          if ((puVar5 <= param_1) || (param_3 = puVar6, param_2 = puVar5, puVar3 <= param_4))
          goto LAB_1010d79cc;
        }
        puVar4 = puVar3 + -9;
        if (param_3 != puVar3) {
          uVar8 = puVar3[-8];
          uVar7 = *puVar4;
          uVar10 = puVar3[-6];
          uVar9 = puVar3[-7];
          uVar12 = puVar3[-4];
          uVar11 = puVar3[-5];
          uVar14 = puVar3[-2];
          uVar13 = puVar3[-3];
          param_3[-1] = puVar3[-1];
          param_3[-4] = uVar12;
          param_3[-5] = uVar11;
          param_3[-2] = uVar14;
          param_3[-3] = uVar13;
          param_3[-8] = uVar8;
          *puVar6 = uVar7;
          param_3[-6] = uVar10;
          param_3[-7] = uVar9;
        }
        puVar3 = puVar4;
        puVar5 = param_2;
        param_3 = puVar6;
      } while (param_4 < puVar4);
    }
  }
LAB_1010d79cc:
  lVar1 = ((long)puVar3 - (long)param_4) / 0x48;
  if ((puVar5 != param_4) || (param_4 + lVar1 * 9 <= puVar5)) {
    func_0x000107c610b8(puVar5,param_4,lVar1 * 0x48);
  }
  return 1;
}



/* Entry: 1010d7a2c; end: 1010d7d63;  */

ulong FUN_1010d7a2c(undefined8 *param_1,ulong param_2,ulong param_3,uint param_4)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *unaff_x20;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar9 = *unaff_x20;
  uVar4 = param_2;
  uVar3 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar9 + 0x10);
  uVar7 = (ulong)~(uint)uVar3 & 1;
  lVar6 = lVar5 + uVar7;
  if (SCARRY8(lVar5,uVar7)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1010d7b04);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    FUN_1010d7d64(lVar6,param_4 & 1);
    uVar4 = param_2;
    uVar7 = param_3;
    func_0x000100029284();
    if (((uint)uVar3 & 1) != ((uint)uVar7 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1010d7acc);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x0001010d7ba0();
    lVar6 = *unaff_x20;
    goto joined_r0x0001010d7b18;
  }
  lVar6 = *unaff_x20;
joined_r0x0001010d7b18:
  if ((uVar3 & 1) != 0) {
    uVar4 = *(long *)(lVar6 + 0x38) + uVar4 * 0x48;
    (*(code *)&DAT_103a90f10)(uVar4,param_1);
    return uVar4;
  }
  lVar5 = lVar6 + (uVar4 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar4 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar4 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar8 = (undefined8 *)(*(long *)(lVar6 + 0x38) + uVar4 * 0x48);
  uVar10 = *param_1;
  puVar8[1] = param_1[1];
  *puVar8 = uVar10;
  uVar11 = param_1[3];
  uVar10 = param_1[2];
  uVar13 = param_1[5];
  uVar12 = param_1[4];
  uVar15 = param_1[7];
  uVar14 = param_1[6];
  puVar8[8] = param_1[8];
  puVar8[5] = uVar13;
  puVar8[4] = uVar12;
  puVar8[7] = uVar15;
  puVar8[6] = uVar14;
  puVar8[3] = uVar11;
  puVar8[2] = uVar10;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1010d7ba0);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return param_3;
}



/* Entry: 1010d7d64; end: 1010d827b;  */

void FUN_1010d7d64(long param_1,ulong param_2)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *unaff_x20;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong *puVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f8 [72];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar13 = *unaff_x20;
  lVar1 = *(long *)(lVar13 + 0x18);
  if (*(long *)(lVar13 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar4 = 0x112d5c038;
  func_0x0001000285a8(0x112d5c038,&UNK_10d922f88);
  lVar5 = lVar13;
  func_0x000107c60490(lVar13,lVar1,param_2,uVar4);
  if (*(long *)(lVar13 + 0x10) == 0) {
LAB_1010d80a8:
    func_0x000107c61574(lVar13);
LAB_1010d80b0:
    *unaff_x20 = lVar5;
    return;
  }
  puVar16 = (ulong *)(lVar13 + 0x40);
  uVar10 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar5 + 0x40;
  lVar7 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar18 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1010d80d8);
          (*pcVar3)();
        }
        if ((long)(uVar10 + 0x3f >> 6) <= lVar18) {
          if ((param_2 & 1) == 0) {
            func_0x000107c61574(lVar13);
            goto LAB_1010d80b0;
          }
          uVar15 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
          if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
            *puVar16 = -1L << (uVar15 & 0x3f);
          }
          else {
            func_0x000107c60ee4(puVar16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(lVar13 + 0x10) = 0;
          goto LAB_1010d80a8;
        }
        uVar15 = puVar16[lVar18];
        lVar7 = lVar7 + 1;
      } while (uVar15 == 0);
      uVar6 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar6 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar18 = lVar7;
    }
    uVar6 = LZCOUNT(uVar6) | lVar18 << 6;
    if ((param_2 & 1) == 0) {
      puVar8 = (undefined8 *)(*(long *)(lVar13 + 0x30) + uVar6 * 0x10);
      uVar4 = *puVar8;
      uVar17 = puVar8[1];
      puVar8 = (undefined8 *)(*(long *)(lVar13 + 0x38) + uVar6 * 0x48);
      uVar14 = puVar8[8];
      uStack_130 = puVar8[3];
      uStack_118 = puVar8[2];
      uStack_108 = puVar8[5];
      uStack_120 = puVar8[4];
      uStack_100 = puVar8[7];
      uStack_110 = puVar8[6];
      uStack_138 = puVar8[1];
      uStack_128 = *puVar8;
      uStack_b0 = uStack_128;
      uStack_a8 = uStack_138;
      uStack_a0 = uStack_118;
      uStack_98 = uStack_130;
      uStack_90 = uStack_120;
      uStack_88 = uStack_108;
      uStack_80 = uStack_110;
      uStack_78 = uStack_100;
      uStack_70 = uVar14;
      func_0x000107c61434(uVar17);
      FUN_1010c7524(&uStack_b0,auStack_f8);
    }
    else {
      puVar8 = (undefined8 *)(*(long *)(lVar13 + 0x30) + uVar6 * 0x10);
      uVar4 = *puVar8;
      uVar17 = puVar8[1];
      puVar8 = (undefined8 *)(*(long *)(lVar13 + 0x38) + uVar6 * 0x48);
      uStack_128 = *puVar8;
      uStack_138 = puVar8[1];
      uStack_118 = puVar8[2];
      uStack_130 = puVar8[3];
      uStack_120 = puVar8[4];
      uStack_108 = puVar8[5];
      uStack_110 = puVar8[6];
      uStack_100 = puVar8[7];
      uVar14 = puVar8[8];
    }
    func_0x000107c6068c(&uStack_b0,*(undefined8 *)(lVar5 + 0x28));
    puVar8 = &uStack_b0;
    func_0x000107c5fb58(puVar8,uVar4,uVar17);
    func_0x000107c606a8();
    uVar12 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
    uVar11 = (ulong)puVar8 & (uVar12 ^ 0xffffffffffffffff);
    uVar9 = uVar11 >> 6;
    uVar6 = -1L << (uVar11 & 0x3f) & (*(ulong *)(lVar1 + uVar9 * 8) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar2 = false;
      uVar6 = 0x3f - uVar12 >> 6;
      do {
        uVar11 = uVar9 + 1;
        if ((uVar11 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1010d80dc);
          (*pcVar3)();
        }
        uVar9 = 0;
        if (uVar11 != uVar6) {
          uVar9 = uVar11;
        }
        bVar2 = (bool)(uVar11 == uVar6 | bVar2);
        uVar11 = *(ulong *)(lVar1 + uVar9 * 8);
      } while (uVar11 == 0xffffffffffffffff);
      uVar11 = ~uVar11;
      uVar6 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar9 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar11 & 0x7fffffffffffffc0;
    }
    uVar9 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar9) = 1L << (uVar6 & 0x3f) | *(ulong *)(lVar1 + uVar9);
    puVar8 = (undefined8 *)(*(long *)(lVar5 + 0x30) + uVar6 * 0x10);
    *puVar8 = uVar4;
    puVar8[1] = uVar17;
    puVar8 = (undefined8 *)(*(long *)(lVar5 + 0x38) + uVar6 * 0x48);
    *puVar8 = uStack_128;
    puVar8[1] = uStack_138;
    puVar8[2] = uStack_118;
    puVar8[3] = uStack_130;
    puVar8[4] = uStack_120;
    puVar8[5] = uStack_108;
    puVar8[6] = uStack_110;
    puVar8[7] = uStack_100;
    puVar8[8] = uVar14;
    *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
    lVar7 = lVar18;
  } while( true );
}



/* Entry: 1010d827c; end: 1010d828f;  */

/* WARNING: Removing unreachable block (ram,0x0001010c76f0) */
/* WARNING: Removing unreachable block (ram,0x0001010c7700) */
/* WARNING: Removing unreachable block (ram,0x0001010c77f4) */
/* WARNING: Removing unreachable block (ram,0x0001010c770c) */
/* WARNING: Removing unreachable block (ram,0x0001010c7714) */
/* WARNING: Removing unreachable block (ram,0x0001010c77a0) */
/* WARNING: Removing unreachable block (ram,0x0001010c77ac) */
/* WARNING: Removing unreachable block (ram,0x0001010c77b0) */
/* WARNING: Removing unreachable block (ram,0x0001010c77b4) */
/* WARNING: Removing unreachable block (ram,0x0001010c77c0) */

undefined * FUN_1010d827c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x10) <= lVar4) {
    lVar1 = lVar4;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar1 != 0) {
    puVar2 = (undefined *)0x112d5b610;
    func_0x0001000285a8(0x112d5b610,&UNK_10d9225b0);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    *(long *)(puVar2 + 0x10) = lVar4;
    *(long *)(puVar2 + 0x18) = ((long)(puVar3 + -0x20) / 0x48) * 2;
  }
  func_0x000107c6140c(puVar2 + 0x20,param_1 + 0x20,lVar4,&UNK_1106c79f8);
  func_0x000107c61574(param_1);
  return puVar2;
}



/* Entry: 1010d8290; end: 1010d835b;  */

/* WARNING: Possible PIC construction at 0x0001010d82c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010d8304: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010d82c4) */
/* WARNING: Removing unreachable block (ram,0x0001010d8308) */

ulong FUN_1010d8290(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1[7];
  if (uVar1 == param_2[7] && param_1[8] == param_2[8]) {
    uVar1 = *param_1;
    if ((uVar1 != *param_2 || param_1[1] != param_2[1]) && (func_0x000107c605b8(), (uVar1 & 1) == 0)
       ) {
      return 0;
    }
    uVar1 = param_1[2];
    if ((uVar1 == param_2[2]) && (param_1[3] == param_2[3])) {
      if (param_1[4] != param_2[4]) {
        return 0;
      }
      uVar1 = param_1[5];
      if ((uVar1 == param_2[5]) && (param_1[6] == param_2[6])) {
        return 1;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
  )();
  return uVar1;
}



/* Entry: 1010d835c; end: 1010d83a3;  */

void FUN_1010d835c(void)

{
  FUN_1010d534c();
  return;
}



/* Entry: 1010d83a4; end: 1010d83b7;  */

void FUN_1010d83a4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  long extraout_x8;
  long unaff_x20;
  long lVar11;
  long lVar12;
  undefined8 auStack_e0 [2];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [24];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_97;
  undefined8 uStack_8f;
  undefined8 uStack_87;
  undefined8 uStack_7f;
  undefined8 uStack_77;
  undefined7 uStack_6f;
  undefined1 uStack_68;
  undefined7 uStack_67;
  
  lVar9 = *(long *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_c8 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_d0 = *(undefined8 *)(unaff_x20 + 0x30);
  lVar5 = 0;
  func_0x000107c5ede0();
  lVar11 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  uVar4 = uStack_c8;
  lVar3 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar12 = (long)&uStack_d0 + lVar3;
  uVar7 = *param_1;
  uVar10 = param_1[1];
  uVar2 = *(undefined1 *)(param_1 + 2);
  if (*(char *)(param_1 + 9) == '\x01') {
    func_0x000107c5d7e0(uVar6);
    func_0x000107c61180();
    func_0x000107c5edb4(lVar12);
    func_0x000107c61170(uVar6);
    FUN_1010d4878(uVar7,uVar10,uVar2);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
    uVar6 = uStack_c8;
    *(undefined8 *)((long)auStack_e0 + lVar3) = uVar1;
    *(undefined8 *)((long)auStack_e0 + lVar3 + 8) = uVar6;
    func_0x0001010d3f24(3,lVar12,500,uVar7,uVar10,puVar8,0,0xf000000000000000);
    func_0x000107c6142c(uVar10);
    func_0x000107c6142c(puVar8);
    (**(code **)(lVar11 + 8))(lVar12,lVar5);
  }
  else {
    uStack_8f = *(undefined8 *)((long)param_1 + 0x19);
    uStack_97 = *(undefined8 *)((long)param_1 + 0x11);
    uStack_7f = *(undefined8 *)((long)param_1 + 0x29);
    uStack_87 = *(undefined8 *)((long)param_1 + 0x21);
    uStack_77 = *(undefined8 *)((long)param_1 + 0x31);
    uStack_6f = (undefined7)*(undefined8 *)((long)param_1 + 0x39);
    uStack_68 = (undefined1)param_1[8];
    uStack_67 = (undefined7)((ulong)param_1[8] >> 8);
    uStack_a8 = uVar7;
    uStack_a0 = uVar10;
    uStack_98 = uVar2;
    func_0x000107c61428(lVar9 + 0x10,auStack_c0,0,0);
    lVar9 = lVar9 + 0x10;
    func_0x000107c61618();
    if (lVar9 != 0) {
      func_0x0001010d5cd4(&uStack_a8,uVar6,uVar1,uVar4);
      func_0x000107c61170(lVar9);
    }
  }
  return;
}



/* Entry: 1010d83b8; end: 1010d8437;  */

void FUN_1010d83b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5bef0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d922f24;
  func_0x000107c61520(&UNK_10d922f24,&UNK_1106c79f8);
  puRam0000000112d5bef0 = puVar1;
  return;
}



/* Entry: 1010d8438; end: 1010d84b3;  */

undefined8 FUN_1010d8438(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1010d84b4; end: 1010d84cb;  */

void FUN_1010d84b4(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 1010d84cc; end: 1010d84ff;  */

void FUN_1010d84cc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1010d8500; end: 1010d851b;  */

/* WARNING: Removing unreachable block (ram,0x0001010d5cc8) */

void FUN_1010d8500(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 ****ppppuVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 *****pppppuVar9;
  undefined8 *****pppppuVar10;
  long extraout_x8;
  long lVar11;
  long unaff_x20;
  undefined8 *****pppppuVar12;
  undefined1 *puVar13;
  long lVar14;
  undefined8 auStack_e0 [2];
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  undefined8 ****ppppuStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar8 = *(long *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_c8 = *(undefined8 *)(unaff_x20 + 0x30);
  lVar5 = 0;
  func_0x000107c5ede0();
  lVar11 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar14 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar13 = auStack_d0 + lVar14;
  if (((uint)param_3 & 0xff00) == 0x100) {
    func_0x000107c5d7e0(uVar6);
    func_0x000107c61180();
    func_0x000107c5edb4(puVar13);
    func_0x000107c61170(uVar6);
    FUN_1010d4878(param_1,param_2,param_3);
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
    *(undefined8 *)((long)auStack_e0 + lVar14) = uVar1;
    *(undefined8 *)((long)auStack_e0 + lVar14 + 8) = uVar2;
    func_0x0001010d3f24(3,puVar13,500,param_1,param_2,puVar7,0,0xf000000000000000);
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(puVar7);
    (**(code **)(lVar11 + 8))(puVar13,lVar5);
  }
  else {
    uStack_c8 = uVar1;
    func_0x000107c61428(lVar8 + 0x10,auStack_78,0,0);
    lVar8 = lVar8 + 0x10;
    func_0x000107c61618();
    if (lVar8 != 0) {
      func_0x000107c61428(param_1 + 0x20,auStack_90,0,0);
      lVar14 = *(long *)(param_1 + 0x20);
      pppppuVar12 = *(undefined8 ******)(lVar14 + 0x10);
      func_0x000107c61434(lVar14);
      pppppuVar9 = (undefined8 *****)PTR___swiftEmptyArrayStorage_11034f1c8;
      if (pppppuVar12 != (undefined8 *****)0x0) {
        func_0x000107c61434(lVar14);
        pppppuVar9 = pppppuVar12;
        func_0x0001010cefb0(pppppuVar12,0);
        pppppuVar10 = &ppppuStack_b8;
        func_0x0001010d80dc(pppppuVar10,pppppuVar9 + 4,pppppuVar12,lVar14);
        FUN_1010d84b4(ppppuStack_b8,uStack_b0,uStack_a8,uStack_a0,uStack_98);
        if (pppppuVar10 != pppppuVar12) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1010d5c4c);
          (*pcVar4)();
        }
      }
      ppppuStack_b8 = pppppuVar9;
      FUN_1010d6f70(&ppppuStack_b8);
      uVar1 = uStack_c8;
      func_0x000107c6142c(lVar14);
      ppppuVar3 = ppppuStack_b8;
      FUN_1010d5508(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),ppppuStack_b8,
                    uVar6,uVar1,uVar2);
      func_0x000107c61170(lVar8);
      func_0x000107c61574(ppppuVar3);
    }
  }
  return;
}



/* Entry: 1010d851c; end: 1010d86d7;  */

undefined * FUN_1010d851c(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auStack_128 [88];
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  
  puVar7 = *(undefined **)(param_1 + 0x10);
  if (puVar7 == (undefined *)0x0) {
    return PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  func_0x0001000285a8(0x112d5c038,&UNK_10d922f88);
  puVar2 = puVar7;
  func_0x000107c60498();
  func_0x000107c6157c();
  uStack_a8 = *(ulong *)(param_1 + 0x48);
  uStack_b0 = *(ulong *)(param_1 + 0x40);
  uStack_98 = *(ulong *)(param_1 + 0x58);
  uStack_a0 = *(ulong *)(param_1 + 0x50);
  uStack_88 = *(ulong *)(param_1 + 0x68);
  uStack_90 = *(ulong *)(param_1 + 0x60);
  uStack_80 = *(ulong *)(param_1 + 0x70);
  uVar9 = *(ulong *)(param_1 + 0x28);
  uVar8 = *(ulong *)(param_1 + 0x20);
  uStack_b8 = *(ulong *)(param_1 + 0x38);
  uStack_c0 = *(ulong *)(param_1 + 0x30);
  uStack_d0 = uVar8;
  uStack_c8 = uVar9;
  FUN_1010d8814(&uStack_d0,auStack_128,0x112d5c040,&UNK_10d922f98);
  uVar3 = uVar8;
  uVar5 = uVar9;
  func_0x000100029284();
  if ((uVar5 & 1) == 0) {
    puVar4 = (ulong *)(param_1 + 0x78);
    do {
      uVar5 = uVar3 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar2 + uVar5 + 0x40) = *(ulong *)(puVar2 + uVar5 + 0x40) | 1L << (uVar3 & 0x3f);
      puVar6 = (ulong *)(*(long *)(puVar2 + 0x30) + uVar3 * 0x10);
      *puVar6 = uVar8;
      puVar6[1] = uVar9;
      puVar6 = (ulong *)(*(long *)(puVar2 + 0x38) + uVar3 * 0x48);
      puVar6[1] = uStack_b8;
      *puVar6 = uStack_c0;
      puVar6[8] = uStack_80;
      puVar6[5] = uStack_98;
      puVar6[4] = uStack_a0;
      puVar6[7] = uStack_88;
      puVar6[6] = uStack_90;
      puVar6[3] = uStack_a8;
      puVar6[2] = uStack_b0;
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1010d86d8);
        (*pcVar1)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
      puVar7 = puVar7 + -1;
      if (puVar7 == (undefined *)0x0) {
        func_0x000107c61574(puVar2);
        return puVar2;
      }
      uStack_a8 = puVar4[5];
      uStack_b0 = puVar4[4];
      uStack_98 = puVar4[7];
      uStack_a0 = puVar4[6];
      uStack_88 = puVar4[9];
      uStack_90 = puVar4[8];
      uStack_80 = puVar4[10];
      uVar9 = puVar4[1];
      uVar8 = *puVar4;
      uStack_b8 = puVar4[3];
      uStack_c0 = puVar4[2];
      uStack_d0 = uVar8;
      uStack_c8 = uVar9;
      FUN_1010d8814(&uStack_d0,auStack_128,0x112d5c040,&UNK_10d922f98);
      uVar3 = uVar8;
      uVar5 = uVar9;
      func_0x000100029284();
      puVar4 = puVar4 + 0xb;
    } while ((uVar5 & 1) == 0);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1010d869c);
  (*pcVar1)();
}



/* Entry: 1010d86d8; end: 1010d87e3;  */

/* WARNING: Removing unreachable block (ram,0x0001010d87a4) */

void FUN_1010d86d8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  undefined1 auStack_128 [72];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_1010d851c();
  lVar3 = *(long *)(param_3 + 0x10);
  puStack_48 = puVar2;
  if (lVar3 != 0) {
    lVar4 = 0x20;
    do {
      puVar1 = (undefined8 *)(param_3 + lVar4);
      uStack_c8 = puVar1[3];
      uStack_d0 = puVar1[2];
      uStack_68 = puVar1[5];
      uStack_70 = puVar1[4];
      uStack_b8 = puVar1[5];
      uStack_c0 = puVar1[4];
      uStack_58 = puVar1[7];
      uStack_60 = puVar1[6];
      uStack_88 = puVar1[1];
      uStack_90 = *puVar1;
      uStack_78 = puVar1[3];
      uStack_80 = puVar1[2];
      uStack_d8 = puVar1[1];
      uStack_e0 = *puVar1;
      uStack_a8 = puVar1[7];
      uStack_b0 = puVar1[6];
      uStack_50 = puVar1[8];
      uStack_a0 = puVar1[8];
      FUN_1010c7524(&uStack_90,auStack_128);
      FUN_1010d68b8(&puStack_48,&uStack_e0);
      func_0x0001010c7560(&uStack_e0);
      lVar4 = lVar4 + 0x48;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  *(undefined **)(unaff_x20 + 0x20) = puStack_48;
  return;
}



/* Entry: 1010d87e4; end: 1010d8813;  */

void FUN_1010d87e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  uint uVar1;
  
  uVar1 = (uint)param_3;
  if ((param_4 == '\x01') && (param_3 = param_2, 2 < (uVar1 & 0xff))) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 1010d8814; end: 1010d885b;  */

undefined8 FUN_1010d8814(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1010d885c; end: 1010d889b;  */

void FUN_1010d885c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5c058 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d922b0c;
  func_0x000107c61520(&UNK_10d922b0c,&UNK_110382398);
  puRam0000000112d5c058 = puVar1;
  return;
}



/* Entry: 1010d889c; end: 1010d88ab;  */

/* WARNING: Removing unreachable block (ram,0x0001010d6160) */

void FUN_1010d889c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long extraout_x8;
  long unaff_x20;
  long lVar10;
  undefined1 *puVar11;
  undefined8 auStack_120 [2];
  undefined1 auStack_110 [8];
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 *puStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x68);
  uStack_d0 = *(undefined8 *)(unaff_x20 + 0x70);
  puVar7 = (undefined8 *)(unaff_x20 + 0x10);
  lVar4 = 0;
  func_0x000107c5ede0();
  lVar10 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar3 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar11 = auStack_110 + lVar3;
  if (((uint)param_3 & 0xff00) == 0x100) {
    func_0x000107c5d7e0(uVar8);
    func_0x000107c61180();
    func_0x000107c5edb4(puVar11);
    func_0x000107c61170(uVar8);
    FUN_1010d4878(param_1,param_2,param_3);
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
    *(undefined8 *)((long)auStack_120 + lVar3) = uVar2;
    *(undefined8 *)((long)auStack_120 + lVar3 + 8) = uVar1;
    func_0x0001010d3f24(3,puVar11,500,param_1,param_2,puVar5,0,0xf000000000000000);
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(puVar5);
  }
  else {
    puVar6 = puVar7;
    uStack_100 = uVar1;
    uStack_f8 = uVar8;
    puStack_f0 = puVar11;
    uStack_e8 = uVar2;
    lStack_e0 = lVar10;
    lStack_d8 = lVar4;
    FUN_1010d6b80(puVar7);
    uStack_b0 = *(undefined8 *)(unaff_x20 + 0x48);
    uStack_a8 = *(undefined8 *)(unaff_x20 + 0x50);
    uStack_a0 = *puVar7;
    uStack_98 = *(undefined8 *)(unaff_x20 + 0x18);
    uStack_90 = *(undefined8 *)(unaff_x20 + 0x20);
    uStack_88 = *(undefined8 *)(unaff_x20 + 0x28);
    uStack_80 = *(undefined8 *)(unaff_x20 + 0x30);
    uVar8 = *(undefined8 *)(unaff_x20 + 0x38);
    uStack_70 = *(undefined8 *)(unaff_x20 + 0x40);
    if (lRam0000000112d5c048 != -1) {
      puVar6 = (undefined8 *)0x112d5c048;
      func_0x000107c61568(0x112d5c048,0x1010d3338);
    }
    uStack_78 = uVar8;
    FUN_1010d2698();
    puVar5 = &UNK_1103821e0;
    puVar7 = &uStack_b0;
    uStack_108 = uVar8;
    func_0x000107c5eb4c(puVar7,&UNK_1103821e0,puVar6);
    uVar8 = uStack_f8;
    func_0x000107c5d7e0(uStack_f8);
    func_0x000107c61180();
    puVar11 = puStack_f0;
    func_0x000107c5edb4(puStack_f0);
    func_0x000107c61170(uVar8);
    func_0x00010006c00c(puVar7,puVar5);
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
    *(undefined8 *)((long)auStack_120 + lVar3 + 8) = uStack_100;
    *(undefined8 *)((long)auStack_120 + lVar3) = uStack_e8;
    func_0x0001010d3f24(1,puVar11,200,0xd00000000000001b,0x800000010ef257a0,puVar9,puVar7,puVar5);
    func_0x000107c6142c(puVar9);
    func_0x00010006c090(puVar7,puVar5);
    func_0x00010006c090(puVar7,puVar5);
    lVar4 = lStack_d8;
    lVar10 = lStack_e0;
  }
  (**(code **)(lVar10 + 8))(puVar11,lVar4);
  return;
}



/* Entry: 1010d88ac; end: 1010d8947;  */

void FUN_1010d88ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5c078 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d922ae4;
  func_0x000107c61520(&UNK_10d922ae4,&UNK_110382300);
  puRam0000000112d5c078 = puVar1;
  return;
}



/* Entry: 1010d8948; end: 1010d8953;  */

void FUN_1010d8948(void)

{
  FUN_1010d534c();
  return;
}



/* Entry: 1010d8954; end: 1010d89a7;  */

void FUN_1010d8954(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
  func_0x000107c61610(unaff_x20 + 0x18);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1010d89a8; end: 1010d8a13;  */

void FUN_1010d89a8(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c4ad1c();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      puVar3 = PTR_PTR_1126afee0;
      func_0x000107c61168(PTR_PTR_1126afee0);
      lVar1 = lVar2;
      func_0x000107c6148c(lVar2,puVar3);
      if (lVar1 == 0) {
        func_0x000107c615e8(lVar2);
      }
    }
  }
  return;
}



/* Entry: 1010d8a14; end: 1010d8a17;  */

void FUN_1010d8a14(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c4ad1c();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      puVar3 = PTR_PTR_1126afee0;
      func_0x000107c61168(PTR_PTR_1126afee0);
      lVar1 = lVar2;
      func_0x000107c6148c(lVar2,puVar3);
      if (lVar1 == 0) {
        func_0x000107c615e8(lVar2);
      }
    }
  }
  return;
}



/* Entry: 1010d8a18; end: 1010d8a63;  */

void FUN_1010d8a18(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
  func_0x000107c61610(unaff_x20 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1010d8a64; end: 1010d8af3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010d8a64(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  lVar3 = _DAT_112ff4f40;
  if (lVar1 != 0) {
    func_0x000107c61428(lVar1 + _DAT_112ff4f40,auStack_38,0,0);
    lVar3 = *(long *)(lVar1 + lVar3);
    func_0x000107c615f0(lVar3);
    func_0x000107c61170(lVar1);
    if (lVar3 != 0) {
      puVar2 = PTR_PTR_1126afee0;
      func_0x000107c61168(PTR_PTR_1126afee0);
      lVar1 = lVar3;
      func_0x000107c6148c(lVar3,puVar2);
      if (lVar1 == 0) {
        func_0x000107c615e8(lVar3);
      }
    }
  }
  return;
}



/* Entry: 1010d8af4; end: 1010d8ca7;  */

undefined8 * FUN_1010d8af4(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  
  puVar1 = unaff_x20 + 3;
  uVar4 = *unaff_x20;
  func_0x000107c61618();
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
    func_0x000107c5b200();
    func_0x000107c61180();
    func_0x000107c61170(puVar1);
    puVar1 = puVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    if (puVar1 != (undefined8 *)0x0) {
      func_0x0001000285a8(0x112d5c1d8,&UNK_10d923088);
      puVar2 = puVar1;
      func_0x000107c4c018(puVar1);
      func_0x000107c61180();
      puVar3 = puVar2;
      func_0x0001000b637c();
      func_0x000107c615e8(puVar1);
      func_0x000107c61170(puVar2);
      return puVar3;
    }
  }
  func_0x000104366fc4(0xd000000000000011,0x800000010ef258b0,uVar4,&PTR_DAT_1103828d0);
  return (undefined8 *)0x0;
}



/* Entry: 1010d8ca8; end: 1010d8ccf;  */

void FUN_1010d8ca8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x000107c5faec();
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}



/* Entry: 1010d8cd0; end: 1010d8ceb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010d8cd0(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  lVar3 = _DAT_112ff4f40;
  if (lVar1 != 0) {
    func_0x000107c61428(lVar1 + _DAT_112ff4f40,auStack_38,0,0);
    lVar3 = *(long *)(lVar1 + lVar3);
    func_0x000107c615f0(lVar3);
    func_0x000107c61170(lVar1);
    if (lVar3 != 0) {
      puVar2 = PTR_PTR_1126afee0;
      func_0x000107c61168(PTR_PTR_1126afee0);
      lVar1 = lVar3;
      func_0x000107c6148c(lVar3,puVar2);
      if (lVar1 == 0) {
        func_0x000107c615e8(lVar3);
      }
    }
  }
  return;
}



/* Entry: 1010d8cec; end: 1010d8cf7; -[SCLensProcessingVenuesURIHandlerEntryPoint conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010d8cec(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5c1e8;
  func_0x000107c61428(param_1 + _DAT_112d5c1e8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010d8cf8; end: 1010d8d03; -[SCLensProcessingVenuesURIHandlerEntryPoint setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010d8cf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5c1e8;
  func_0x000107c61428(param_1 + _DAT_112d5c1e8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010d8d04; end: 1010d8d0f; -[SCLensProcessingVenuesURIHandlerEntryPoint activeUserSessionScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010d8d04(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5c1f0;
  func_0x000107c61428(param_1 + _DAT_112d5c1f0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010d8d10; end: 1010d8d1b; -[SCLensProcessingVenuesURIHandlerEntryPoint setActiveUserSessionScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010d8d10(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5c1f0;
  func_0x000107c61428(param_1 + _DAT_112d5c1f0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010d8d1c; end: 1010d8d27; -[SCLensProcessingVenuesURIHandlerEntryPoint viewfinderScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010d8d1c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5c1f8;
  func_0x000107c61428(param_1 + _DAT_112d5c1f8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010d8d28; end: 1010d8d33; -[SCLensProcessingVenuesURIHandlerEntryPoint setViewfinderScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010d8d28(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5c1f8;
  func_0x000107c61428(param_1 + _DAT_112d5c1f8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010d8d34; end: 1010d8d3f; -[SCLensProcessingVenuesURIHandlerEntryPoint lensVenuesProvidingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010d8d34(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5c200;
  func_0x000107c61428(param_1 + _DAT_112d5c200,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010d8d40; end: 1010d8d4b; -[SCLensProcessingVenuesURIHandlerEntryPoint setLensVenuesProvidingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010d8d40(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5c200;
  func_0x000107c61428(param_1 + _DAT_112d5c200,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010d8d4c; end: 1010d8d57; -[SCLensProcessingVenuesURIHandlerEntryPoint previewLazyServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010d8d4c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5c208;
  func_0x000107c61428(param_1 + _DAT_112d5c208,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010d8d58; end: 1010d8d63; -[SCLensProcessingVenuesURIHandlerEntryPoint setPreviewLazyServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010d8d58(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5c208;
  func_0x000107c61428(param_1 + _DAT_112d5c208,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010d8d64; end: 1010d8d6f; -[SCLensProcessingVenuesURIHandlerEntryPoint snapEditorLazyServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010d8d64(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5c210;
  func_0x000107c61428(param_1 + _DAT_112d5c210,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010d8d70; end: 1010d8d7b; -[SCLensProcessingVenuesURIHandlerEntryPoint setSnapEditorLazyServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010d8d70(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5c210;
  func_0x000107c61428(param_1 + _DAT_112d5c210,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010d8d7c; end: 1010d8d87; -[SCLensProcessingVenuesURIHandlerEntryPoint ucoSnapEditorAnnouncerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010d8d7c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5c218;
  func_0x000107c61428(param_1 + _DAT_112d5c218,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010d8d88; end: 1010d8d93; -[SCLensProcessingVenuesURIHandlerEntryPoint setUcoSnapEditorAnnouncerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010d8d88(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5c218;
  func_0x000107c61428(param_1 + _DAT_112d5c218,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010d8d94; end: 1010d8d9f; -[SCLensProcessingVenuesURIHandlerEntryPoint lensVenueInternalServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010d8d94(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5c220;
  func_0x000107c61428(param_1 + _DAT_112d5c220,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010d8da0; end: 1010d8dab; -[SCLensProcessingVenuesURIHandlerEntryPoint setLensVenueInternalServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010d8da0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5c220;
  func_0x000107c61428(param_1 + _DAT_112d5c220,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010d8dac; end: 1010d8db7; -[SCLensProcessingVenuesURIHandlerEntryPoint circumstanceEngineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010d8dac(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5c228;
  func_0x000107c61428(param_1 + _DAT_112d5c228,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010d8db8; end: 1010d8dfb;  */

void FUN_1010d8db8(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010d8dfc; end: 1010d8e07; -[SCLensProcessingVenuesURIHandlerEntryPoint setCircumstanceEngineServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010d8dfc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5c228;
  func_0x000107c61428(param_1 + _DAT_112d5c228,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010d8e08; end: 1010d8e5b;  */

void FUN_1010d8e08(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010d8e5c; end: 1010d94eb;  */

/* WARNING: Possible PIC construction at 0x0001010d8fa8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010d93a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010d93b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010d93fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010d940c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010d941c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010d942c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010d943c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010d9484: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010d9494: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010d9454: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010d9464: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010d9474: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010d90b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010d90c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010d90d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010d90e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010d9084: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010d9094: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010d90a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010d9054: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010d9064: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010d9024: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010d9034: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010d9004: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010d9014: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010d8ff4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010d9018) */
/* WARNING: Removing unreachable block (ram,0x0001010d9008) */
/* WARNING: Removing unreachable block (ram,0x0001010d9038) */
/* WARNING: Removing unreachable block (ram,0x0001010d9028) */
/* WARNING: Removing unreachable block (ram,0x0001010d9068) */
/* WARNING: Removing unreachable block (ram,0x0001010d9058) */
/* WARNING: Removing unreachable block (ram,0x0001010d90a8) */
/* WARNING: Removing unreachable block (ram,0x0001010d9098) */
/* WARNING: Removing unreachable block (ram,0x0001010d9088) */
/* WARNING: Removing unreachable block (ram,0x0001010d90e8) */
/* WARNING: Removing unreachable block (ram,0x0001010d90d8) */
/* WARNING: Removing unreachable block (ram,0x0001010d90c8) */
/* WARNING: Removing unreachable block (ram,0x0001010d90b8) */
/* WARNING: Removing unreachable block (ram,0x0001010d9478) */
/* WARNING: Removing unreachable block (ram,0x0001010d9468) */
/* WARNING: Removing unreachable block (ram,0x0001010d9458) */
/* WARNING: Removing unreachable block (ram,0x0001010d9498) */
/* WARNING: Removing unreachable block (ram,0x0001010d9488) */
/* WARNING: Removing unreachable block (ram,0x0001010d9440) */
/* WARNING: Removing unreachable block (ram,0x0001010d9484) */
/* WARNING: Removing unreachable block (ram,0x0001010d9430) */
/* WARNING: Removing unreachable block (ram,0x0001010d9420) */
/* WARNING: Removing unreachable block (ram,0x0001010d9410) */
/* WARNING: Removing unreachable block (ram,0x0001010d9400) */
/* WARNING: Removing unreachable block (ram,0x0001010d93bc) */
/* WARNING: Removing unreachable block (ram,0x0001010d93ac) */
/* WARNING: Removing unreachable block (ram,0x0001010d8fac) */
/* WARNING: Removing unreachable block (ram,0x0001010d8fbc) */
/* WARNING: Removing unreachable block (ram,0x0001010d910c) */
/* WARNING: Removing unreachable block (ram,0x0001010d9450) */
/* WARNING: Removing unreachable block (ram,0x0001010d8fc4) */
/* WARNING: Removing unreachable block (ram,0x0001010d912c) */
/* WARNING: Removing unreachable block (ram,0x0001010d94e8) */
/* WARNING: Removing unreachable block (ram,0x0001010d9274) */
/* WARNING: Removing unreachable block (ram,0x0001010d94d0) */
/* WARNING: Removing unreachable block (ram,0x0001010d9338) */
/* WARNING: Removing unreachable block (ram,0x0001010d8ff8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010d8e5c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  lVar4 = unaff_x20;
  func_0x000107c40080();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar1 = unaff_x20;
    func_0x000107c3d1c4();
    func_0x000107c61180();
    if (lVar1 != 0) {
      lVar2 = unaff_x20;
      func_0x000107c5df74();
      func_0x000107c61180();
      if (lVar2 == 0) {
        func_0x000107c61170(lVar4);
        lVar4 = lVar1;
      }
      else {
        lVar3 = unaff_x20;
        func_0x000107c4b538();
        func_0x000107c61180();
        if (lVar3 == 0) {
          func_0x000107c61170(lVar4);
          lVar4 = lVar1;
        }
        else {
          lVar3 = unaff_x20;
          func_0x000107c4f148();
          func_0x000107c61180();
          if (lVar3 != 0) {
            lVar3 = unaff_x20;
            func_0x000107c5b24c();
            func_0x000107c61180();
            if (lVar3 != 0) {
              lVar3 = unaff_x20;
              func_0x000107c5d16c();
              func_0x000107c61180();
              if (lVar3 == 0) {
                func_0x000107c61170(lVar4);
                lVar4 = lVar1;
              }
              else {
                lVar3 = unaff_x20;
                func_0x000107c4b530();
                func_0x000107c61180();
                if (lVar3 == 0) {
                  func_0x000107c61170(lVar4);
                  lVar4 = lVar1;
                }
                else {
                  func_0x000107c3fa0c();
                  func_0x000107c61180();
                  if (unaff_x20 != 0) {
                    lVar4 = 0;
                    FUN_1010cd5cc();
                    func_0x000107c613fc();
                    *(undefined8 *)(lVar4 + 0x10) = 0;
                    lVar4 = *(long *)(lVar2 + _DAT_113074ea0);
                    func_0x000107c40534(lVar4);
                    func_0x000107c61180();
                    func_0x000107c5faec();
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar4);
    return;
  }
  return;
}



/* Entry: 1010d94ec; end: 1010d94fb;  */

void FUN_1010d94ec(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 unaff_x20;
  
  uVar1 = 0;
  func_0x0001010ce5e0();
  func_0x000107c613fc();
  func_0x000107c6157c();
  FUN_1010cd684();
  param_1[3] = uVar1;
  param_1[4] = &PTR_DAT_110382078;
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1010d94fc; end: 1010d9523; -[SCLensProcessingVenuesURIHandlerEntryPoint begin] */

void FUN_1010d94fc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1010d8e5c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1010d9524; end: 1010d9567; -[SCLensProcessingVenuesURIHandlerEntryPoint end] */

void FUN_1010d9524(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010d9568; end: 1010d99e3;  */

void FUN_1010d9568(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == -0x2fffffffffffffee && param_3 == -0x7ffffffef10ef650) ||
     (func_0x000107c605b8(0xd000000000000012,0x800000010ef109b0,param_2,param_3,0), (uVar2 & 1) != 0
     )) {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c53720();
  }
  else {
    uVar2 = 0;
    if (((param_2 == -0x2fffffffffffffea) && (param_3 == -0x7ffffffef10ef1d0)) ||
       (func_0x000107c605b8(0xd000000000000016,0x800000010ef10e30,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c52228();
    }
    else {
      uVar2 = 0;
      if (((param_2 == 0x646e696677656976) && (param_3 == -0x109a8f909cac8d9b)) ||
         (func_0x000107c605b8(0x646e696677656976,0xef65706f63537265,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c5a5ac();
      }
      else {
        uVar2 = 0xd00000000000001b;
        if (((param_2 == -0x2fffffffffffffe5) && (param_3 == -0x7ffffffef10da730)) ||
           (func_0x000107c605b8(0xd00000000000001b,0x800000010ef258d0,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c55f04();
        }
        else {
          if ((param_2 != -0x2fffffffffffffed) || (param_3 != -0x7ffffffef10dfce0)) {
            uVar2 = 0xd000000000000013;
            func_0x000107c605b8(0xd000000000000013,0x800000010ef20320,param_2,param_3,0);
            if ((uVar2 & 1) == 0) {
              if ((param_2 != -0x2fffffffffffffea) || (param_3 != -0x7ffffffef10db850)) {
                uVar2 = 0;
                func_0x000107c605b8(0xd000000000000016,0x800000010ef247b0,param_2,param_3,0);
                if ((uVar2 & 1) == 0) {
                  uVar2 = 0;
                  if (((param_2 == -0x2fffffffffffffe2) && (param_3 == -0x7ffffffef10dacf0)) ||
                     (func_0x000107c605b8(0xd00000000000001e,0x800000010ef25310,param_2,param_3,0),
                     (uVar2 & 1) != 0)) {
                    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                    func_0x000107c605b0();
                    func_0x000107c5a134();
                  }
                  else {
                    uVar2 = 0xd000000000000019;
                    if (((param_2 == -0x2fffffffffffffe7) && (param_3 == -0x7ffffffef10da710)) ||
                       (func_0x000107c605b8(0xd000000000000019,0x800000010ef258f0,param_2,param_3,0)
                       , (uVar2 & 1) != 0)) {
                      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                      func_0x000107c605b0();
                      func_0x000107c55efc();
                    }
                    else {
                      uVar2 = 0;
                      if (((param_2 != -0x2fffffffffffffe6) || (param_3 != -0x7ffffffef10ed550)) &&
                         (func_0x000107c605b8(0xd00000000000001a,0x800000010ef12ab0,param_2,param_3,
                                              0), (uVar2 & 1) == 0)) {
                        func_0x000107c602fc(0x15);
                        func_0x000107c6142c(0xe000000000000000);
                        func_0x000107c5fb78(param_2,param_3);
                        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,
                                            0x800000010ef0fc20,
                                            "LensVenuesURIHandler/SCLensProcessingVenuesURIHandlerEntryPoint.swift"
                                            ,0x45,2,0x4d,0);
                    /* WARNING: Does not return */
                        pcVar1 = (code *)SoftwareBreakpoint(1,0x1010d99e4);
                        (*pcVar1)();
                      }
                      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                      func_0x000107c605b0();
                      func_0x000107c53414();
                    }
                  }
                  goto LAB_1010d95f8;
                }
              }
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c593b0();
              goto LAB_1010d95f8;
            }
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c577a8();
        }
      }
    }
  }
LAB_1010d95f8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1010d99e4; end: 1010d9a8f; -[SCLensProcessingVenuesURIHandlerEntryPoint setValue:forIvarName:] */

void FUN_1010d99e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_1010d9568(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_1010d9cbc(auStack_50);
  return;
}



/* Entry: 1010d9a90; end: 1010d9b8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010d9a90(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d5c1e8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d5c1f0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d5c1f8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d5c200,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d5c208,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d5c210,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d5c218,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d5c220,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d5c228,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d5c230) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1010d9b90; end: 1010d9baf; -[SCLensProcessingVenuesURIHandlerEntryPoint init] */

void FUN_1010d9b90(void)

{
  FUN_1010d9a90();
  return;
}



/* Entry: 1010d9bb0; end: 1010d9be3;  */

void FUN_1010d9bb0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1010d9be4; end: 1010d9c9b; -[SCLensProcessingVenuesURIHandlerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010d9be4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d5c1e8);
  func_0x000107c61610(param_1 + _DAT_112d5c1f0);
  func_0x000107c61610(param_1 + _DAT_112d5c1f8);
  func_0x000107c61610(param_1 + _DAT_112d5c200);
  func_0x000107c61610(param_1 + _DAT_112d5c208);
  func_0x000107c61610(param_1 + _DAT_112d5c210);
  func_0x000107c61610(param_1 + _DAT_112d5c218);
  func_0x000107c61610(param_1 + _DAT_112d5c220);
  func_0x000107c61610(param_1 + _DAT_112d5c228);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d5c230));
  return;
}



/* Entry: 1010d9c9c; end: 1010d9cbb;  */

void FUN_1010d9c9c(void)

{
  func_0x000107c61168(&PTR_PTR_1127aed68);
  return;
}



/* Entry: 1010d9cbc; end: 1010d9cdb;  */

void FUN_1010d9cbc(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001010d9cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}


