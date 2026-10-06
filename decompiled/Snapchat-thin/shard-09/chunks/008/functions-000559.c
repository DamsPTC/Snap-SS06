/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10725ffdc; end: 10726000f;  */

long FUN_10725ffdc(long param_1)

{
  if (*(char *)(param_1 + 0x38) == '\x01') {
    FUN_107262f3c();
  }
  else {
    FUN_107262f68();
  }
  return param_1;
}



/* Entry: 107260010; end: 107260067;  */

uint FUN_107260010(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x0001000e107c();
    return (uint)param_1 ^ 1;
  }
  return 1;
}



/* Entry: 107260068; end: 10726009b;  */

long FUN_107260068(long param_1)

{
  if (*(char *)(param_1 + 0x50) == '\x01') {
    func_0x000107263328();
  }
  else {
    FUN_107263368();
  }
  return param_1;
}



/* Entry: 10726009c; end: 107260463;  */

void FUN_10726009c(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long unaff_x19;
  long unaff_x20;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 unaff_x30;
  undefined1 auStack_138 [40];
  undefined1 auStack_110 [40];
  undefined4 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  long lStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  long lStack_80;
  
  func_0x00010014ae40();
  *(int *)(param_1 + 0x388) = *(int *)(param_1 + 0x388) + 1;
  FUN_1072716d4(auStack_138);
  FUN_107270b5c(auStack_110);
  plVar7 = (long *)(unaff_x19 + 0x358);
  puVar15 = *(undefined8 **)(unaff_x19 + 0x360);
  puVar14 = *(undefined8 **)(unaff_x19 + 0x368);
  uVar3 = (long)puVar14 - (long)puVar15;
  uStack_e8 = *(undefined4 *)(unaff_x19 + 0x388);
  lVar1 = 0;
  if (uVar3 != 0) {
    lVar1 = ((long)puVar14 - (long)puVar15 >> 3) * 0x2e + -1;
  }
  uVar8 = *(ulong *)(unaff_x19 + 0x378);
  if (lVar1 != *(long *)(unaff_x19 + 0x380) + uVar8) goto LAB_1072602f8;
  if (uVar8 < 0x2e) {
    lVar1 = unaff_x19 + 0x370;
    puVar12 = *(undefined8 **)(unaff_x19 + 0x370);
    puVar13 = *(undefined8 **)(unaff_x19 + 0x358);
    if ((ulong)((long)puVar12 - (long)puVar13) <= uVar3) {
      puVar9 = (undefined8 *)((long)puVar12 - (long)puVar13 >> 2);
      if (puVar12 == puVar13) {
        puVar9 = (undefined8 *)0x1;
      }
      lStack_a8 = lVar1;
      FUN_10727200c();
      puVar12 = (undefined8 *)((long)puVar9 + uVar3);
      puVar13 = puVar9 + unaff_x20;
      uVar6 = 0xfd0;
      lVar11 = unaff_x20;
      puStack_c8 = puVar9;
      puStack_c0 = puVar12;
      puStack_b8 = puVar12;
      puStack_b0 = puVar13;
      __Znwm();
      lStack_d8 = unaff_x19 + 0x380;
      uStack_d0 = 0x2e;
      puVar10 = puVar12;
      if (uVar3 == unaff_x20 * 8) {
        if (puVar14 == puVar15) {
          puVar14 = (undefined8 *)0x1;
          uStack_e0 = uVar6;
          lStack_80 = lVar1;
          FUN_10727200c();
          puStack_88 = puVar14 + lVar11;
          puStack_a0 = puVar14;
          puStack_98 = puVar14;
          puStack_90 = puVar14;
          FUN_107271fe4(&puStack_a0,puVar12,puVar12);
          puVar2 = puStack_88;
          puVar10 = puStack_90;
          puVar15 = puStack_98;
          puVar14 = puStack_a0;
          puStack_c8 = puStack_a0;
          puStack_c0 = puStack_98;
          puStack_b0 = puStack_88;
          puStack_a0 = puVar9;
          puStack_98 = puVar12;
          puStack_90 = puVar12;
          puStack_88 = puVar13;
          func_0x0001072755d4();
          puVar9 = puVar14;
          puVar12 = puVar15;
          puVar13 = puVar2;
        }
        else {
          puVar12 = puVar12 + (((long)puVar12 - (long)puVar9 >> 3) + 1) / -2;
          puVar10 = puVar12;
          puStack_c0 = puVar12;
        }
      }
      puVar14 = puVar10 + 1;
      *puVar10 = uVar6;
      uStack_e0 = 0;
      puVar15 = *(undefined8 **)(unaff_x19 + 0x368);
      puStack_b8 = puVar14;
      while (puVar10 = *(undefined8 **)(unaff_x19 + 0x360), puVar15 != puVar10) {
        puVar10 = puVar12;
        if (puVar12 == puVar9) {
          if (puVar14 < puVar13) {
            lVar11 = (long)puVar14 - (long)puVar9;
            puVar2 = puVar14 + (((long)puVar13 - (long)puVar14 >> 3) + 1) / 2;
            puVar10 = (undefined8 *)((long)puVar2 - ((long)puVar14 - (long)puVar9));
            puVar14 = puVar2;
            if (lVar11 != 0) {
              _memmove(puVar10,puVar12,lVar11);
            }
          }
          else {
            lVar11 = (long)puVar13 - (long)puVar9 >> 2;
            if ((long)puVar13 - (long)puVar9 == 0) {
              lVar11 = 1;
            }
            lStack_80 = lVar1;
            FUN_10727200c(lVar11);
            func_0x000107275164(lVar11 << 1);
            FUN_107271fe4(&puStack_a0,puVar9,puVar14);
            puVar5 = puStack_88;
            puVar4 = puStack_90;
            puVar10 = puStack_98;
            puVar2 = puStack_a0;
            puStack_a0 = puVar9;
            puStack_98 = puVar12;
            puStack_90 = puVar14;
            puStack_88 = puVar13;
            func_0x0001072755d4();
            puVar9 = puVar2;
            puVar14 = puVar4;
            puVar13 = puVar5;
          }
        }
        puVar15 = puVar15 + -1;
        puVar12 = puVar10 + -1;
        *puVar12 = *puVar15;
      }
      puStack_c8 = *(undefined8 **)(unaff_x19 + 0x358);
      *(undefined8 **)(unaff_x19 + 0x358) = puVar9;
      *(undefined8 **)(unaff_x19 + 0x360) = puVar12;
      puStack_b0 = *(undefined8 **)(unaff_x19 + 0x370);
      puStack_b8 = *(undefined8 **)(unaff_x19 + 0x368);
      *(undefined8 **)(unaff_x19 + 0x368) = puVar14;
      *(undefined8 **)(unaff_x19 + 0x370) = puVar13;
      puStack_c0 = puVar10;
      func_0x00010727203c(&uStack_e0);
      func_0x000107272064(&puStack_c8);
      goto LAB_1072602f8;
    }
    uVar6 = 0xfd0;
    __Znwm();
    if (puVar12 != puVar14) {
      *puVar14 = uVar6;
      *(undefined8 **)(unaff_x19 + 0x368) = puVar14 + 1;
      goto LAB_1072602f8;
    }
    if (puVar15 == puVar13) {
      lVar11 = (long)puVar12 - (long)puVar15 >> 2;
      if (puVar14 == puVar15) {
        lVar11 = 1;
      }
      lStack_80 = lVar1;
      FUN_10727200c(lVar11);
      func_0x000107275164(lVar11 << 1);
      FUN_107271fe4(&puStack_a0,*(undefined8 *)(unaff_x19 + 0x360),
                    *(undefined8 *)(unaff_x19 + 0x368));
      puVar15 = *(undefined8 **)(unaff_x19 + 0x360);
      puVar14 = (undefined8 *)*plVar7;
      puVar13 = *(undefined8 **)(unaff_x19 + 0x370);
      puVar12 = *(undefined8 **)(unaff_x19 + 0x368);
      *(undefined8 **)(unaff_x19 + 0x360) = puStack_98;
      *plVar7 = (long)puStack_a0;
      *(undefined8 **)(unaff_x19 + 0x370) = puStack_88;
      *(undefined8 **)(unaff_x19 + 0x368) = puStack_90;
      puStack_a0 = puVar14;
      puStack_98 = puVar15;
      puStack_90 = puVar12;
      puStack_88 = puVar13;
      func_0x0001072755d4();
      puVar15 = *(undefined8 **)(unaff_x19 + 0x360);
    }
    puVar15[-1] = uVar6;
  }
  else {
    *(ulong *)(unaff_x19 + 0x378) = uVar8 - 0x2e;
    puVar15 = puVar15 + 1;
  }
  *(undefined8 **)(unaff_x19 + 0x360) = puVar15;
  func_0x000107274c6c();
  FUN_107271efc();
LAB_1072602f8:
  FUN_10726f25c();
  FUN_1072716d4();
  FUN_107270b5c(plVar7 + 5,auStack_110);
  *(undefined4 *)(plVar7 + 10) = uStack_e8;
  *(long *)(unaff_x19 + 0x380) = *(long *)(unaff_x19 + 0x380) + 1;
  func_0x000107264c34(auStack_138);
  func_0x0001072753c4(*(undefined4 *)(unaff_x19 + 0x388),unaff_x30);
  return;
}



/* Entry: 107260464; end: 10726047b;  */

void FUN_107260464(long param_1,long param_2)

{
  undefined1 uVar1;
  long extraout_x8;
  undefined8 *extraout_x9;
  long extraout_x10;
  undefined8 extraout_x10_00;
  ulong extraout_x11;
  ulong uVar2;
  ulong extraout_x12;
  ulong extraout_x13;
  
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  uVar1 = *(char *)(param_2 + 0x28) == '\x01';
  if ((bool)uVar1) {
    func_0x000107274368();
    func_0x000107270bc8();
    func_0x00010727550c();
    func_0x000107270b94();
    return;
  }
  func_0x0001072744e8();
  if (extraout_x10 != 0) {
    func_0x0001072754dc();
    if ((bool)uVar1) {
      uVar2 = extraout_x13 & extraout_x11;
    }
    else {
      uVar2 = extraout_x11;
      if (extraout_x12 <= extraout_x11) {
        uVar2 = 0;
        if (extraout_x12 != 0) {
          uVar2 = extraout_x11 / extraout_x12;
        }
        uVar2 = extraout_x11 - uVar2 * extraout_x12;
      }
    }
    *(undefined8 *)(extraout_x8 + uVar2 * 8) = extraout_x10_00;
    *extraout_x9 = 0;
    extraout_x9[1] = 0;
  }
  return;
}



/* Entry: 10726047c; end: 107260493;  */

void FUN_10726047c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined1 uVar1;
  long extraout_x8;
  undefined8 *extraout_x9;
  long extraout_x10;
  undefined8 extraout_x10_00;
  ulong extraout_x11;
  ulong uVar2;
  ulong extraout_x12;
  ulong extraout_x13;
  
  uVar1 = *(char *)(param_2 + 0x28) == '\x01';
  if ((bool)uVar1) {
    func_0x000107274368();
    func_0x000107270bc8();
    func_0x00010727550c();
    func_0x000107270b94();
    return;
  }
  func_0x0001072744e8(param_1,param_3);
  if (extraout_x10 != 0) {
    func_0x0001072754dc();
    if ((bool)uVar1) {
      uVar2 = extraout_x13 & extraout_x11;
    }
    else {
      uVar2 = extraout_x11;
      if (extraout_x12 <= extraout_x11) {
        uVar2 = 0;
        if (extraout_x12 != 0) {
          uVar2 = extraout_x11 / extraout_x12;
        }
        uVar2 = extraout_x11 - uVar2 * extraout_x12;
      }
    }
    *(undefined8 *)(extraout_x8 + uVar2 * 8) = extraout_x10_00;
    *extraout_x9 = 0;
    extraout_x9[1] = 0;
  }
  return;
}



/* Entry: 107260494; end: 1072604ab;  */

void FUN_107260494(void)

{
  FUN_107270f7c();
  return;
}



/* Entry: 1072604ac; end: 1072604bf;  */

void FUN_1072604ac(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long alStack_40 [2];
  
  puVar1 = (undefined8 *)(param_1 + 0x18);
  FUN_10724bb70(alStack_40);
  if (alStack_40[0] != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x000107275294();
    *puVar1 = &PTR_FUN_110996128;
    puVar1[1] = uVar2;
    puVar1[2] = FUN_107260560;
    puVar1[3] = 0;
    func_0x000107275764();
    if (puVar1 != (undefined8 *)0x0) {
      func_0x000107274528();
    }
  }
  func_0x00010724bcd8(alStack_40);
  return;
}



/* Entry: 1072604c0; end: 10726055f;  */

void FUN_1072604c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long alStack_40 [2];
  
  puVar1 = param_1 + 1;
  FUN_10724bb70(alStack_40);
  if (alStack_40[0] != 0) {
    uVar2 = *param_1;
    func_0x000107275294();
    *puVar1 = &PTR_FUN_110996128;
    puVar1[1] = uVar2;
    puVar1[2] = param_2;
    puVar1[3] = param_3;
    func_0x000107275764();
    if (puVar1 != (undefined8 *)0x0) {
      func_0x000107274528();
    }
  }
  func_0x00010724bcd8(alStack_40);
  return;
}



/* Entry: 107260560; end: 10726184f;  */

/* WARNING: Possible PIC construction at 0x000107260634: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107261874: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107260638) */
/* WARNING: Removing unreachable block (ram,0x0001072615f8) */
/* WARNING: Removing unreachable block (ram,0x00010726063c) */
/* WARNING: Removing unreachable block (ram,0x000107260644) */
/* WARNING: Removing unreachable block (ram,0x000107260654) */
/* WARNING: Removing unreachable block (ram,0x00010726067c) */
/* WARNING: Removing unreachable block (ram,0x0001072606d0) */
/* WARNING: Removing unreachable block (ram,0x000107260814) */
/* WARNING: Removing unreachable block (ram,0x000107260820) */
/* WARNING: Removing unreachable block (ram,0x000107260834) */
/* WARNING: Removing unreachable block (ram,0x00010726099c) */
/* WARNING: Removing unreachable block (ram,0x0001072609a4) */
/* WARNING: Removing unreachable block (ram,0x0001072609bc) */
/* WARNING: Removing unreachable block (ram,0x0001072609e0) */
/* WARNING: Removing unreachable block (ram,0x0001072609c8) */
/* WARNING: Removing unreachable block (ram,0x0001072609d4) */
/* WARNING: Removing unreachable block (ram,0x0001072609e4) */
/* WARNING: Removing unreachable block (ram,0x0001072609f0) */
/* WARNING: Removing unreachable block (ram,0x0001072609f8) */
/* WARNING: Removing unreachable block (ram,0x000107260a18) */
/* WARNING: Removing unreachable block (ram,0x000107260a30) */
/* WARNING: Removing unreachable block (ram,0x000107260a20) */
/* WARNING: Removing unreachable block (ram,0x000107260a28) */
/* WARNING: Removing unreachable block (ram,0x000107260a34) */
/* WARNING: Removing unreachable block (ram,0x000107260a3c) */
/* WARNING: Removing unreachable block (ram,0x000107260a88) */
/* WARNING: Removing unreachable block (ram,0x000107260a90) */
/* WARNING: Removing unreachable block (ram,0x000107260aa8) */
/* WARNING: Removing unreachable block (ram,0x000107260ab0) */
/* WARNING: Removing unreachable block (ram,0x000107260ac4) */
/* WARNING: Removing unreachable block (ram,0x000107260acc) */
/* WARNING: Removing unreachable block (ram,0x000107260abc) */
/* WARNING: Removing unreachable block (ram,0x000107260ad8) */
/* WARNING: Removing unreachable block (ram,0x000107260bb0) */
/* WARNING: Removing unreachable block (ram,0x000107260bb4) */
/* WARNING: Removing unreachable block (ram,0x000107260bd0) */
/* WARNING: Removing unreachable block (ram,0x000107260bf4) */
/* WARNING: Removing unreachable block (ram,0x000107260bdc) */
/* WARNING: Removing unreachable block (ram,0x000107260bf8) */
/* WARNING: Removing unreachable block (ram,0x000107260bfc) */
/* WARNING: Removing unreachable block (ram,0x000107260c24) */
/* WARNING: Removing unreachable block (ram,0x000107260c08) */
/* WARNING: Removing unreachable block (ram,0x000107260c0c) */
/* WARNING: Removing unreachable block (ram,0x000107260ae4) */
/* WARNING: Removing unreachable block (ram,0x000107261614) */
/* WARNING: Removing unreachable block (ram,0x0001072617a0) */
/* WARNING: Removing unreachable block (ram,0x000107260aec) */
/* WARNING: Removing unreachable block (ram,0x000107260b0c) */
/* WARNING: Removing unreachable block (ram,0x000107260b1c) */
/* WARNING: Removing unreachable block (ram,0x000107260b28) */
/* WARNING: Removing unreachable block (ram,0x000107260b34) */
/* WARNING: Removing unreachable block (ram,0x000107260b3c) */
/* WARNING: Removing unreachable block (ram,0x000107260b48) */
/* WARNING: Removing unreachable block (ram,0x000107260b50) */
/* WARNING: Removing unreachable block (ram,0x000107260ba8) */
/* WARNING: Removing unreachable block (ram,0x000107260c28) */
/* WARNING: Removing unreachable block (ram,0x000107260c44) */
/* WARNING: Removing unreachable block (ram,0x000107260c34) */
/* WARNING: Removing unreachable block (ram,0x000107260c4c) */
/* WARNING: Removing unreachable block (ram,0x000107260c3c) */
/* WARNING: Removing unreachable block (ram,0x000107260c54) */
/* WARNING: Removing unreachable block (ram,0x000107260c70) */
/* WARNING: Removing unreachable block (ram,0x000107260c8c) */
/* WARNING: Removing unreachable block (ram,0x000107260ca4) */
/* WARNING: Removing unreachable block (ram,0x000107260c94) */
/* WARNING: Removing unreachable block (ram,0x000107260c9c) */
/* WARNING: Removing unreachable block (ram,0x000107260ca8) */
/* WARNING: Removing unreachable block (ram,0x000107260c60) */
/* WARNING: Removing unreachable block (ram,0x000107260cac) */
/* WARNING: Removing unreachable block (ram,0x000107260b58) */
/* WARNING: Removing unreachable block (ram,0x000107260b78) */
/* WARNING: Removing unreachable block (ram,0x000107260b64) */
/* WARNING: Removing unreachable block (ram,0x000107260b6c) */
/* WARNING: Removing unreachable block (ram,0x000107260b7c) */
/* WARNING: Removing unreachable block (ram,0x000107260b84) */
/* WARNING: Removing unreachable block (ram,0x000107260b9c) */
/* WARNING: Removing unreachable block (ram,0x000107260ba0) */
/* WARNING: Removing unreachable block (ram,0x000107260b8c) */
/* WARNING: Removing unreachable block (ram,0x000107260b14) */
/* WARNING: Removing unreachable block (ram,0x000107260a04) */
/* WARNING: Removing unreachable block (ram,0x000107260a14) */
/* WARNING: Removing unreachable block (ram,0x000107260be4) */
/* WARNING: Removing unreachable block (ram,0x000107260cc4) */
/* WARNING: Removing unreachable block (ram,0x000107260ccc) */
/* WARNING: Removing unreachable block (ram,0x000107260d34) */
/* WARNING: Removing unreachable block (ram,0x000107260d6c) */
/* WARNING: Removing unreachable block (ram,0x000107260d40) */
/* WARNING: Removing unreachable block (ram,0x000107260d44) */
/* WARNING: Removing unreachable block (ram,0x000107260d78) */
/* WARNING: Removing unreachable block (ram,0x000107260d4c) */
/* WARNING: Removing unreachable block (ram,0x000107260d80) */
/* WARNING: Removing unreachable block (ram,0x000107260d84) */
/* WARNING: Removing unreachable block (ram,0x000107260da0) */
/* WARNING: Removing unreachable block (ram,0x000107260dd0) */
/* WARNING: Removing unreachable block (ram,0x000107261110) */
/* WARNING: Removing unreachable block (ram,0x00010726113c) */
/* WARNING: Removing unreachable block (ram,0x00010726129c) */
/* WARNING: Removing unreachable block (ram,0x0001072612a0) */
/* WARNING: Removing unreachable block (ram,0x0001072612ec) */
/* WARNING: Removing unreachable block (ram,0x0001072612fc) */
/* WARNING: Removing unreachable block (ram,0x000107261310) */
/* WARNING: Removing unreachable block (ram,0x00010726131c) */
/* WARNING: Removing unreachable block (ram,0x000107261328) */
/* WARNING: Removing unreachable block (ram,0x00010726133c) */
/* WARNING: Removing unreachable block (ram,0x000107261340) */
/* WARNING: Removing unreachable block (ram,0x000107261364) */
/* WARNING: Removing unreachable block (ram,0x000107261368) */
/* WARNING: Removing unreachable block (ram,0x00010726136c) */
/* WARNING: Removing unreachable block (ram,0x000107261398) */
/* WARNING: Removing unreachable block (ram,0x000107261378) */
/* WARNING: Removing unreachable block (ram,0x0001072613a0) */
/* WARNING: Removing unreachable block (ram,0x0001072613a8) */
/* WARNING: Removing unreachable block (ram,0x0001072613f0) */
/* WARNING: Removing unreachable block (ram,0x000107261400) */
/* WARNING: Removing unreachable block (ram,0x000107261408) */
/* WARNING: Removing unreachable block (ram,0x000107261414) */
/* WARNING: Removing unreachable block (ram,0x000107261424) */
/* WARNING: Removing unreachable block (ram,0x000107261430) */
/* WARNING: Removing unreachable block (ram,0x0001072613c4) */
/* WARNING: Removing unreachable block (ram,0x00010726143c) */
/* WARNING: Removing unreachable block (ram,0x000107261444) */
/* WARNING: Removing unreachable block (ram,0x00010726144c) */
/* WARNING: Removing unreachable block (ram,0x000107261458) */
/* WARNING: Removing unreachable block (ram,0x000107261484) */
/* WARNING: Removing unreachable block (ram,0x0001072614f4) */
/* WARNING: Removing unreachable block (ram,0x00010726148c) */
/* WARNING: Removing unreachable block (ram,0x0001072614f8) */
/* WARNING: Removing unreachable block (ram,0x00010726150c) */
/* WARNING: Removing unreachable block (ram,0x000107261528) */
/* WARNING: Removing unreachable block (ram,0x00010726152c) */
/* WARNING: Removing unreachable block (ram,0x000107261560) */
/* WARNING: Removing unreachable block (ram,0x0001072615bc) */
/* WARNING: Removing unreachable block (ram,0x0001072615e0) */
/* WARNING: Removing unreachable block (ram,0x000107261534) */
/* WARNING: Removing unreachable block (ram,0x000107261550) */
/* WARNING: Removing unreachable block (ram,0x000107261514) */
/* WARNING: Removing unreachable block (ram,0x0001072612a8) */
/* WARNING: Removing unreachable block (ram,0x0001072612c0) */
/* WARNING: Removing unreachable block (ram,0x0001072612c4) */
/* WARNING: Removing unreachable block (ram,0x000107261144) */
/* WARNING: Removing unreachable block (ram,0x00010726119c) */
/* WARNING: Removing unreachable block (ram,0x0001072611a0) */
/* WARNING: Removing unreachable block (ram,0x000107261160) */
/* WARNING: Removing unreachable block (ram,0x000107261170) */
/* WARNING: Removing unreachable block (ram,0x0001072611ec) */
/* WARNING: Removing unreachable block (ram,0x0001072611f4) */
/* WARNING: Removing unreachable block (ram,0x000107261204) */
/* WARNING: Removing unreachable block (ram,0x000107261214) */
/* WARNING: Removing unreachable block (ram,0x000107261224) */
/* WARNING: Removing unreachable block (ram,0x000107261180) */
/* WARNING: Removing unreachable block (ram,0x0001072611c0) */
/* WARNING: Removing unreachable block (ram,0x0001072611c8) */
/* WARNING: Removing unreachable block (ram,0x0001072611e0) */
/* WARNING: Removing unreachable block (ram,0x0001072611e4) */
/* WARNING: Removing unreachable block (ram,0x0001072611e8) */
/* WARNING: Removing unreachable block (ram,0x000107261188) */
/* WARNING: Removing unreachable block (ram,0x000107261228) */
/* WARNING: Removing unreachable block (ram,0x000107261230) */
/* WARNING: Removing unreachable block (ram,0x000107261240) */
/* WARNING: Removing unreachable block (ram,0x000107261250) */
/* WARNING: Removing unreachable block (ram,0x00010726118c) */
/* WARNING: Removing unreachable block (ram,0x000107261190) */
/* WARNING: Removing unreachable block (ram,0x000107261258) */
/* WARNING: Removing unreachable block (ram,0x000107261260) */
/* WARNING: Removing unreachable block (ram,0x000107261270) */
/* WARNING: Removing unreachable block (ram,0x000107261274) */
/* WARNING: Removing unreachable block (ram,0x000107261290) */
/* WARNING: Removing unreachable block (ram,0x000107260dd8) */
/* WARNING: Removing unreachable block (ram,0x000107260e14) */
/* WARNING: Removing unreachable block (ram,0x000107260e38) */
/* WARNING: Removing unreachable block (ram,0x000107260e20) */
/* WARNING: Removing unreachable block (ram,0x000107260e2c) */
/* WARNING: Removing unreachable block (ram,0x000107260e3c) */
/* WARNING: Removing unreachable block (ram,0x000107260e48) */
/* WARNING: Removing unreachable block (ram,0x000107260e50) */
/* WARNING: Removing unreachable block (ram,0x000107260e70) */
/* WARNING: Removing unreachable block (ram,0x000107260e88) */
/* WARNING: Removing unreachable block (ram,0x000107260e78) */
/* WARNING: Removing unreachable block (ram,0x000107260e80) */
/* WARNING: Removing unreachable block (ram,0x000107260e8c) */
/* WARNING: Removing unreachable block (ram,0x000107260e94) */
/* WARNING: Removing unreachable block (ram,0x000107260edc) */
/* WARNING: Removing unreachable block (ram,0x000107260ee4) */
/* WARNING: Removing unreachable block (ram,0x000107260efc) */
/* WARNING: Removing unreachable block (ram,0x000107260f04) */
/* WARNING: Removing unreachable block (ram,0x000107260f18) */
/* WARNING: Removing unreachable block (ram,0x000107260f20) */
/* WARNING: Removing unreachable block (ram,0x000107260f10) */
/* WARNING: Removing unreachable block (ram,0x000107260f2c) */
/* WARNING: Removing unreachable block (ram,0x000107260ffc) */
/* WARNING: Removing unreachable block (ram,0x000107261000) */
/* WARNING: Removing unreachable block (ram,0x00010726101c) */
/* WARNING: Removing unreachable block (ram,0x000107261030) */
/* WARNING: Removing unreachable block (ram,0x000107261028) */
/* WARNING: Removing unreachable block (ram,0x000107261034) */
/* WARNING: Removing unreachable block (ram,0x000107261038) */
/* WARNING: Removing unreachable block (ram,0x000107261060) */
/* WARNING: Removing unreachable block (ram,0x000107261044) */
/* WARNING: Removing unreachable block (ram,0x000107261048) */
/* WARNING: Removing unreachable block (ram,0x000107260f38) */
/* WARNING: Removing unreachable block (ram,0x000107260f58) */
/* WARNING: Removing unreachable block (ram,0x000107260f68) */
/* WARNING: Removing unreachable block (ram,0x000107260f70) */
/* WARNING: Removing unreachable block (ram,0x000107260f7c) */
/* WARNING: Removing unreachable block (ram,0x000107260f84) */
/* WARNING: Removing unreachable block (ram,0x000107260f90) */
/* WARNING: Removing unreachable block (ram,0x000107260f9c) */
/* WARNING: Removing unreachable block (ram,0x000107260ff4) */
/* WARNING: Removing unreachable block (ram,0x000107261064) */
/* WARNING: Removing unreachable block (ram,0x00010726107c) */
/* WARNING: Removing unreachable block (ram,0x00010726106c) */
/* WARNING: Removing unreachable block (ram,0x000107261084) */
/* WARNING: Removing unreachable block (ram,0x000107261074) */
/* WARNING: Removing unreachable block (ram,0x00010726108c) */
/* WARNING: Removing unreachable block (ram,0x0001072610a8) */
/* WARNING: Removing unreachable block (ram,0x0001072610c4) */
/* WARNING: Removing unreachable block (ram,0x0001072610dc) */
/* WARNING: Removing unreachable block (ram,0x0001072610cc) */
/* WARNING: Removing unreachable block (ram,0x0001072610d4) */
/* WARNING: Removing unreachable block (ram,0x0001072610e0) */
/* WARNING: Removing unreachable block (ram,0x000107261098) */
/* WARNING: Removing unreachable block (ram,0x0001072610e4) */
/* WARNING: Removing unreachable block (ram,0x000107260fa4) */
/* WARNING: Removing unreachable block (ram,0x000107260fc4) */
/* WARNING: Removing unreachable block (ram,0x000107260fb0) */
/* WARNING: Removing unreachable block (ram,0x000107260fb8) */
/* WARNING: Removing unreachable block (ram,0x000107260fc8) */
/* WARNING: Removing unreachable block (ram,0x000107260fd0) */
/* WARNING: Removing unreachable block (ram,0x000107260fe8) */
/* WARNING: Removing unreachable block (ram,0x000107260fec) */
/* WARNING: Removing unreachable block (ram,0x000107260fd8) */
/* WARNING: Removing unreachable block (ram,0x000107260f60) */
/* WARNING: Removing unreachable block (ram,0x000107260e5c) */
/* WARNING: Removing unreachable block (ram,0x000107260e6c) */
/* WARNING: Removing unreachable block (ram,0x0001072610fc) */
/* WARNING: Removing unreachable block (ram,0x000107260d64) */
/* WARNING: Removing unreachable block (ram,0x00010726083c) */
/* WARNING: Removing unreachable block (ram,0x000107260850) */
/* WARNING: Removing unreachable block (ram,0x000107260894) */
/* WARNING: Removing unreachable block (ram,0x0001072608b4) */
/* WARNING: Removing unreachable block (ram,0x0001072608e0) */
/* WARNING: Removing unreachable block (ram,0x000107260930) */
/* WARNING: Removing unreachable block (ram,0x0001072608f4) */
/* WARNING: Removing unreachable block (ram,0x000107260938) */
/* WARNING: Removing unreachable block (ram,0x00010726092c) */
/* WARNING: Removing unreachable block (ram,0x000107260944) */
/* WARNING: Removing unreachable block (ram,0x000107260948) */
/* WARNING: Removing unreachable block (ram,0x00010726094c) */
/* WARNING: Removing unreachable block (ram,0x000107260958) */
/* WARNING: Removing unreachable block (ram,0x0001072608bc) */
/* WARNING: Removing unreachable block (ram,0x0001072608c8) */
/* WARNING: Removing unreachable block (ram,0x0001072606d8) */
/* WARNING: Removing unreachable block (ram,0x0001072606e8) */
/* WARNING: Removing unreachable block (ram,0x000107260710) */
/* WARNING: Removing unreachable block (ram,0x0001072606fc) */
/* WARNING: Removing unreachable block (ram,0x000107260704) */
/* WARNING: Removing unreachable block (ram,0x000107260714) */
/* WARNING: Removing unreachable block (ram,0x000107260720) */
/* WARNING: Removing unreachable block (ram,0x000107260730) */
/* WARNING: Removing unreachable block (ram,0x000107260738) */
/* WARNING: Removing unreachable block (ram,0x000107260758) */
/* WARNING: Removing unreachable block (ram,0x000107260744) */
/* WARNING: Removing unreachable block (ram,0x00010726074c) */
/* WARNING: Removing unreachable block (ram,0x00010726075c) */
/* WARNING: Removing unreachable block (ram,0x000107260764) */
/* WARNING: Removing unreachable block (ram,0x000107260768) */
/* WARNING: Removing unreachable block (ram,0x00010726078c) */
/* WARNING: Removing unreachable block (ram,0x000107260774) */
/* WARNING: Removing unreachable block (ram,0x000107260780) */
/* WARNING: Removing unreachable block (ram,0x000107260790) */
/* WARNING: Removing unreachable block (ram,0x000107260798) */
/* WARNING: Removing unreachable block (ram,0x0001072607a0) */
/* WARNING: Removing unreachable block (ram,0x0001072607a4) */
/* WARNING: Removing unreachable block (ram,0x0001072607a8) */
/* WARNING: Removing unreachable block (ram,0x0001072607c4) */
/* WARNING: Removing unreachable block (ram,0x0001072607b0) */
/* WARNING: Removing unreachable block (ram,0x0001072607b8) */
/* WARNING: Removing unreachable block (ram,0x0001072607c8) */
/* WARNING: Removing unreachable block (ram,0x0001072607d0) */
/* WARNING: Removing unreachable block (ram,0x0001072607d8) */
/* WARNING: Removing unreachable block (ram,0x00010726065c) */
/* WARNING: Removing unreachable block (ram,0x000107261878) */
/* WARNING: Removing unreachable block (ram,0x000107261888) */
/* WARNING: Removing unreachable block (ram,0x000107261924) */
/* WARNING: Removing unreachable block (ram,0x00010726193c) */
/* WARNING: Removing unreachable block (ram,0x000107261950) */
/* WARNING: Removing unreachable block (ram,0x000107261970) */
/* WARNING: Removing unreachable block (ram,0x000107261930) */
/* WARNING: Removing unreachable block (ram,0x000107274338) */

undefined1 * FUN_107260560(undefined1 *param_1)

{
  undefined8 ***pppuVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x9;
  long extraout_x10;
  long lVar3;
  undefined8 ***pppuVar4;
  undefined8 uVar5;
  undefined8 in_stack_00000050;
  undefined8 **ppuStack_1060;
  undefined8 uStack_1058;
  undefined8 *puStack_aa0;
  code *pcStack_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  undefined1 *puStack_a78;
  undefined1 *puStack_a70;
  undefined1 *puStack_a68;
  undefined1 *puStack_a60;
  undefined1 *puStack_a58;
  undefined1 *puStack_a50;
  undefined1 *puStack_a48;
  undefined1 *puStack_a40;
  undefined1 *puStack_a38;
  undefined1 *puStack_a30;
  undefined1 *puStack_a28;
  undefined1 *puStack_a20;
  undefined1 auStack_a18 [16];
  undefined1 auStack_a08 [24];
  undefined1 auStack_9f0 [16];
  undefined1 auStack_9e0 [24];
  undefined4 uStack_9c8;
  undefined1 auStack_9b0 [16];
  undefined1 auStack_9a0 [32];
  undefined1 auStack_980 [16];
  undefined1 auStack_970 [80];
  undefined1 auStack_920 [720];
  undefined1 auStack_650 [1616];
  
  func_0x0001072754a0();
  pppuVar4 = (undefined8 ***)&stack0x00000050;
  pppuVar1 = (undefined8 ***)&uStack_a90;
  puVar2 = param_1;
  func_0x000107274388();
  puStack_a78 = puVar2 + 0x378;
  puStack_a58 = auStack_9e0;
  puStack_a30 = puVar2 + 0x230;
  puStack_a20 = puVar2 + 0x238;
  puStack_a60 = auStack_a08;
  puStack_a68 = auStack_9a0;
  puStack_a50 = puVar2 + 0x68;
  puStack_a38 = auStack_920;
  puStack_a28 = puVar2 + 0x290;
  puStack_a40 = puVar2 + 0x2a0;
  puStack_a48 = puVar2 + 0x2a8;
  puStack_a70 = auStack_970;
  uStack_a88 = 0xffffffffffffffff;
  uStack_a90 = 1;
  if (*(long *)(param_1 + 0x380) == 0) {
    func_0x00010727416c(extraout_x8);
    if ((bool)in_ZR) {
      return puVar2;
    }
    ___stack_chk_fail();
    FUN_10726eb88(auStack_650);
    FUN_10726eb88(auStack_980);
    func_0x00010727558c();
    puVar2 = auStack_9b0;
    FUN_10726eb88();
    func_0x0001072755cc();
    func_0x00010727477c();
    pcStack_a98 = FUN_107261850;
    puStack_aa0 = pppuVar4;
    func_0x000107274388();
    param_1 = puVar2 + 0x148;
    if ((puVar2[0x180] & 1) != 0) {
      return param_1;
    }
    pppuVar1 = &ppuStack_1060;
    pppuVar4 = &ppuStack_1060;
    uStack_1058 = 0x107261878;
    uVar5 = 0x10726198c;
    ppuStack_1060 = &puStack_aa0;
    func_0x000104bdc2c8();
  }
  else {
    func_0x000107275088();
    lVar3 = extraout_x8_00 + extraout_x9 * extraout_x10;
    FUN_1072716d4(auStack_a18,lVar3);
    FUN_107270b5c(auStack_9f0,lVar3 + 0x28);
    uStack_9c8 = *(undefined4 *)(lVar3 + 0x50);
    param_1 = param_1 + 0x390;
    uVar5 = 0x107260638;
  }
  *(undefined8 ****)((long)pppuVar1 + -0x10) = pppuVar4;
  *(undefined8 *)((long)pppuVar1 + -8) = uVar5;
  FUN_1072720a4();
  return (undefined1 *)(ulong)(param_1 != (undefined1 *)0x0);
}



/* Entry: 107261850; end: 107261973;  */

undefined1 * FUN_107261850(undefined1 *param_1)

{
  undefined1 in_ZR;
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined4 uStack_5a0;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined4 uStack_570;
  undefined4 uStack_564;
  undefined1 auStack_560 [592];
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined4 uStack_2f0;
  undefined1 auStack_2e8 [688];
  undefined8 uStack_38;
  undefined8 *puVar4;
  
  puVar2 = param_1;
  func_0x000107274388();
  puVar2 = puVar2 + 0x148;
  uStack_38 = extraout_x8;
  FUN_107261974(puVar2);
  puVar3 = param_1 + 0x220;
  FUN_107264dc4(puVar3,puVar2);
  puVar2 = (undefined1 *)0x0;
  if (puVar3 != (undefined1 *)0x0) {
    FUN_1072639d8(auStack_560,puVar3 + 0x48);
    uStack_308 = 0;
    uStack_310 = 0;
    uStack_2f8 = 0;
    uStack_300 = 0;
    uStack_2f0 = 0x3f800000;
    func_0x000107264788(auStack_2e8,puVar3 + 0x10,auStack_560);
    uStack_588 = 0;
    uStack_590 = 0;
    uStack_578 = 0;
    uStack_580 = 0;
    uStack_570 = 0x3f800000;
    puVar4 = &uStack_590;
    func_0x000107271898(puVar4,auStack_2e8);
    uVar1 = SUB84(puVar4,0);
    uStack_5b8 = 0;
    uStack_5c0 = 0;
    uStack_5a8 = 0;
    uStack_5b0 = 0;
    uStack_5a0 = 0x3f800000;
    func_0x00010727577c();
    FUN_10726ea70(&uStack_5c0);
    FUN_10726eafc(&uStack_590);
    FUN_107264ae8(auStack_2e8);
    func_0x000107264b0c(auStack_560);
    uStack_564 = uVar1;
    FUN_107260494(param_1 + 0x390,&uStack_564);
    FUN_107260560(param_1);
    puVar2 = param_1;
  }
  func_0x00010727416c(uStack_38);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x0001072748a4();
  FUN_10726ea70();
  FUN_10726eafc(&uStack_590);
  FUN_107264ae8(auStack_2e8);
  puVar2 = auStack_560;
  func_0x000107264b0c();
  func_0x00010727477c();
  if ((puVar2[0x38] & 1) != 0) {
    return puVar2;
  }
  func_0x000104bdc2c8();
  FUN_1072720a4();
  return (undefined1 *)(ulong)(puVar2 != (undefined1 *)0x0);
}



/* Entry: 107261974; end: 1072619a7;  */

ulong FUN_107261974(ulong param_1)

{
  if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
    return param_1;
  }
  func_0x000104bdc2c8();
  FUN_1072720a4();
  return (ulong)(param_1 != 0);
}



/* Entry: 1072619a8; end: 1072619af;  */

void FUN_1072619a8(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  
  auStack_60._0_8_ = *param_2;
  auStack_60._8_8_ = param_2[1];
  auStack_50 = FUN_107259180(auStack_60);
  auVar4 = FUN_10726b794(auStack_50,param_3);
  auStack_50._0_8_ = *(undefined8 *)*(undefined1 (*) [16])(param_2 + 2);
  auStack_50._8_8_ = param_2[3];
  auVar5 = *(undefined1 (*) [16])(param_2 + 2);
  if (180.0 < (double)param_2[3]) {
    auVar5 = FUN_107259180(auStack_50);
  }
  auStack_60 = auVar5;
  auVar6 = FUN_10726b794(auStack_60,param_3);
  auVar2._0_8_ = _ldexp(0x3ff0000000000000,param_3);
  auVar3._0_8_ = (long)(double)(long)auVar4._0_8_;
  auVar3._8_8_ = (long)(double)(long)auVar6._0_8_;
  lVar1 = (long)auVar4._8_8_;
  auVar2._8_8_ = auVar2._0_8_;
  auVar5[8] = (char)lVar1;
  auVar5._0_8_ = (long)auVar6._8_8_;
  auVar5[9] = (char)((ulong)lVar1 >> 8);
  auVar5[10] = (char)((ulong)lVar1 >> 0x10);
  auVar5[0xb] = (char)((ulong)lVar1 >> 0x18);
  auVar5[0xc] = (char)((ulong)lVar1 >> 0x20);
  auVar5[0xd] = (char)((ulong)lVar1 >> 0x28);
  auVar5[0xe] = (char)((ulong)lVar1 >> 0x30);
  auVar5[0xf] = (char)((ulong)lVar1 >> 0x38);
  auVar5 = NEON_fminnm(auVar2,auVar5,8);
  auVar5 = NEON_fmaxnm(auVar5,ZEXT216(0),8);
  auVar4._0_8_ = (long)auVar5._0_8_;
  auVar4._8_8_ = (long)auVar5._8_8_;
  auVar5 = NEON_sli(auVar3,auVar4,0x20,8);
  param_1[1] = auVar5._8_8_;
  *param_1 = auVar5._0_8_;
  *(ushort *)(param_1 + 2) = (ushort)param_3 | (ushort)(param_3 << 8);
  return;
}



/* Entry: 1072619b0; end: 107261d07;  */

void FUN_1072619b0(long *****param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 in_NG;
  long ****pppplVar5;
  long *****ppppplVar6;
  long **pplVar7;
  long *****ppppplVar8;
  long lVar9;
  undefined8 *puVar10;
  long unaff_x19;
  long ****pppplVar11;
  long *****ppppplVar12;
  long *****ppppplVar13;
  long *****unaff_x26;
  ulong uVar14;
  long alStack_b0 [2];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  long ****pppplStack_80;
  long ***ppplStack_78;
  undefined8 uStack_70;
  
  func_0x00010014ae40();
  pppplVar11 = param_1[0x13];
  if (((ulong)pppplVar11[1] & 1) == 0) {
    pppplVar5 = pppplVar11;
    (*(code *)(*pppplVar11)[2])();
    if ((int)pppplVar5 == 0) {
      (*(code *)(*pppplVar11)[4])(&pppplStack_80,pppplVar11);
      FUN_10724bb70(alStack_b0,&ppplStack_78);
      pppplVar11 = pppplStack_80;
      if (alStack_b0[0] != 0) {
        uVar2 = *param_2;
        uVar3 = param_2[1];
        *param_2 = 0;
        param_2[1] = 0;
        puVar10 = (undefined8 *)0x30;
        uStack_a0 = uVar2;
        uStack_98 = uVar3;
        __Znwm();
        uStack_a0 = 0;
        uStack_98 = 0;
        *puVar10 = &PTR_DAT_1109962c0;
        puVar10[1] = pppplVar11;
        puVar10[3] = 1;
        puVar10[2] = 0xe0;
        puVar10[4] = uVar2;
        puVar10[5] = uVar3;
        puStack_90 = (undefined8 *)0x0;
        uStack_88 = 0;
        func_0x000107272e90(&puStack_90);
        puStack_90 = puVar10;
        func_0x000107272e90(&uStack_a0);
        func_0x0001073ae140(alStack_b0[0],&puStack_90);
        puVar10 = puStack_90;
        puStack_90 = (undefined8 *)0x0;
        unaff_x26 = (long *****)pppplVar11;
        if (puVar10 != (undefined8 *)0x0) {
          func_0x000107274528();
        }
      }
      func_0x00010724bcd8(alStack_b0);
      param_1 = (long *****)&ppplStack_78;
      FUN_10724ae28();
    }
    else {
      (*(code *)(*pppplVar11)[3])();
      param_1 = (long *****)0x0;
      if (pppplVar11 != (long ****)0x0) {
        pplVar7 = (*pppplVar11)[0x1c];
        ppplStack_78 = (long ***)param_2[1];
        pppplStack_80 = (long ****)*param_2;
        *param_2 = 0;
        param_2[1] = 0;
        (*(code *)pplVar7)();
        param_1 = &pppplStack_80;
        FUN_10725af58();
      }
    }
  }
  plVar1 = (long *)(unaff_x19 + 0x2e0);
  func_0x000107275250();
  FUN_10726364c();
  ppppplVar13 = *(long ******)(unaff_x19 + 0x2e8);
  ppppplVar6 = param_1;
  if (ppppplVar13 != (long *****)0x0) {
    uVar14 = (long)ppppplVar13 - 1;
    if (((ulong)ppppplVar13 & uVar14) == 0) {
      unaff_x26 = (long *****)(uVar14 & (ulong)param_1);
      in_NG = false;
    }
    else {
      in_NG = (long)param_1 - (long)ppppplVar13 < 0;
      unaff_x26 = param_1;
      if (ppppplVar13 <= param_1) {
        uVar4 = 0;
        if (ppppplVar13 != (long *****)0x0) {
          uVar4 = (ulong)param_1 / (ulong)ppppplVar13;
        }
        unaff_x26 = (long *****)((long)param_1 - uVar4 * (long)ppppplVar13);
      }
    }
    ppppplVar12 = *(long ******)(*plVar1 + (long)unaff_x26 * 8);
    if (ppppplVar12 != (long *****)0x0) {
      do {
        while( true ) {
          ppppplVar12 = (long *****)*ppppplVar12;
          if (ppppplVar12 == (long *****)0x0) goto LAB_107261b84;
          ppppplVar8 = (long *****)ppppplVar12[1];
          in_NG = (long)ppppplVar8 - (long)param_1 < 0;
          if (ppppplVar8 != param_1) break;
          ppppplVar6 = ppppplVar12 + 2;
          func_0x000104c32db4();
          if (((ulong)ppppplVar6 & 1) != 0) goto LAB_107261c98;
        }
        if (((ulong)ppppplVar13 & uVar14) == 0) {
          ppppplVar8 = (long *****)((ulong)ppppplVar8 & uVar14);
        }
        else if (ppppplVar13 <= ppppplVar8) {
          uVar4 = 0;
          if (ppppplVar13 != (long *****)0x0) {
            uVar4 = (ulong)ppppplVar8 / (ulong)ppppplVar13;
          }
          ppppplVar8 = (long *****)((long)ppppplVar8 - uVar4 * (long)ppppplVar13);
        }
        in_NG = (long)ppppplVar8 - (long)unaff_x26 < 0;
      } while (ppppplVar8 == unaff_x26);
    }
  }
LAB_107261b84:
  pppplVar11 = (long ****)(unaff_x19 + 0x2f0);
  func_0x0001072756b0();
  uStack_70 = 1;
  pppplStack_80 = (long ****)ppppplVar6;
  ppplStack_78 = (long ***)pppplVar11;
  *ppppplVar6 = (long ****)0x0;
  ppppplVar6[1] = (long ****)param_1;
  func_0x000104c2fe00(ppppplVar6 + 2);
  *(undefined4 *)(ppppplVar6 + 0xb) = 0;
  func_0x000107274964(*(undefined8 *)(unaff_x19 + 0x2f8));
  if ((ppppplVar13 == (long *****)0x0) || (func_0x000107274958(), (bool)in_NG)) {
    func_0x00010727413c((long)ppppplVar13 << 1);
    FUN_10726e864(plVar1);
    ppppplVar13 = *(long ******)(unaff_x19 + 0x2e8);
    if (((ulong)ppppplVar13 & (long)ppppplVar13 - 1U) == 0) {
      unaff_x26 = (long *****)((long)ppppplVar13 - 1U & (ulong)param_1);
    }
    else {
      unaff_x26 = param_1;
      if (ppppplVar13 <= param_1) {
        uVar14 = 0;
        if (ppppplVar13 != (long *****)0x0) {
          uVar14 = (ulong)param_1 / (ulong)ppppplVar13;
        }
        unaff_x26 = (long *****)((long)param_1 - uVar14 * (long)ppppplVar13);
      }
    }
  }
  lVar9 = *plVar1;
  puVar10 = *(undefined8 **)(lVar9 + (long)unaff_x26 * 8);
  if (puVar10 == (undefined8 *)0x0) {
    *ppppplVar6 = (long ****)*pppplVar11;
    *pppplVar11 = (long ***)ppppplVar6;
    *(long *****)(lVar9 + (long)unaff_x26 * 8) = pppplVar11;
    if (*ppppplVar6 != (long ****)0x0) {
      ppppplVar12 = (long *****)(*ppppplVar6)[1];
      if (((ulong)ppppplVar13 & (long)ppppplVar13 - 1U) == 0) {
        ppppplVar12 = (long *****)((ulong)ppppplVar12 & (long)ppppplVar13 - 1U);
      }
      else if (ppppplVar13 <= ppppplVar12) {
        uVar14 = 0;
        if (ppppplVar13 != (long *****)0x0) {
          uVar14 = (ulong)ppppplVar12 / (ulong)ppppplVar13;
        }
        ppppplVar12 = (long *****)((long)ppppplVar12 - uVar14 * (long)ppppplVar13);
      }
      *(long ******)(lVar9 + (long)ppppplVar12 * 8) = ppppplVar6;
    }
  }
  else {
    *ppppplVar6 = (long ****)*puVar10;
    *puVar10 = ppppplVar6;
  }
  pppplStack_80 = (long ****)0x0;
  *(long *)(unaff_x19 + 0x2f8) = *(long *)(unaff_x19 + 0x2f8) + 1;
  FUN_10726e9a0(&pppplStack_80);
  ppppplVar12 = ppppplVar6;
LAB_107261c98:
  if (*(int *)(ppppplVar12 + 0xb) != 0) {
    FUN_10726e80c(ppppplVar12 + 9);
    *(undefined4 *)(ppppplVar12 + 0xb) = 0;
  }
  return;
}



/* Entry: 107261d08; end: 107261d0f;  */

void FUN_107261d08(long param_1)

{
  long *plVar1;
  undefined1 in_ZR;
  long *plVar2;
  long extraout_x8;
  long lVar3;
  ulong extraout_x9;
  ulong uVar4;
  ulong extraout_x10;
  long *plVar5;
  ulong extraout_x13;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plStack_38;
  long *plStack_30;
  undefined4 uStack_27;
  undefined3 uStack_23;
  
  plVar2 = (long *)(param_1 + 0x2e0);
  FUN_10726e5fc();
  if (plVar2 == (long *)0x0) {
    return;
  }
  func_0x0001072758c8();
  if ((bool)in_ZR) {
    uVar4 = extraout_x13 & extraout_x9;
  }
  else {
    uVar4 = extraout_x9;
    if (extraout_x10 <= extraout_x9) {
      uVar4 = 0;
      if (extraout_x10 != 0) {
        uVar4 = extraout_x9 / extraout_x10;
      }
      uVar4 = extraout_x9 - uVar4 * extraout_x10;
    }
  }
  lVar6 = *(long *)(param_1 + 0x2e0);
  plVar1 = *(long **)(lVar6 + uVar4 * 8);
  do {
    plVar5 = plVar1;
    plVar1 = (long *)*plVar5;
  } while ((long *)*plVar5 != plVar2);
  plStack_30 = (long *)(param_1 + 0x2f0);
  lVar3 = extraout_x8;
  if (plVar5 == plStack_30) {
LAB_107272f40:
    if (extraout_x8 == 0) {
LAB_107272f74:
      *(undefined8 *)(lVar6 + uVar4 * 8) = 0;
      lVar3 = *plVar2;
      goto LAB_107272f7c;
    }
    uVar7 = *(ulong *)(extraout_x8 + 8);
    if ((extraout_x10 & extraout_x13) == 0) {
      uVar8 = uVar7 & extraout_x13;
    }
    else {
      uVar8 = uVar7;
      if (extraout_x10 <= uVar7) {
        uVar8 = 0;
        if (extraout_x10 != 0) {
          uVar8 = uVar7 / extraout_x10;
        }
        uVar8 = uVar7 - uVar8 * extraout_x10;
      }
    }
    if (uVar8 != uVar4) goto LAB_107272f74;
  }
  else {
    uVar7 = plVar5[1];
    if ((extraout_x10 & extraout_x13) == 0) {
      uVar7 = uVar7 & extraout_x13;
    }
    else if (extraout_x10 <= uVar7) {
      uVar8 = 0;
      if (extraout_x10 != 0) {
        uVar8 = uVar7 / extraout_x10;
      }
      uVar7 = uVar7 - uVar8 * extraout_x10;
    }
    if (uVar7 != uVar4) goto LAB_107272f40;
LAB_107272f7c:
    if (lVar3 == 0) goto LAB_107272fb4;
    uVar7 = *(ulong *)(lVar3 + 8);
  }
  if ((extraout_x10 & extraout_x13) == 0) {
    uVar7 = uVar7 & extraout_x13;
  }
  else if (extraout_x10 <= uVar7) {
    uVar8 = 0;
    if (extraout_x10 != 0) {
      uVar8 = uVar7 / extraout_x10;
    }
    uVar7 = uVar7 - uVar8 * extraout_x10;
  }
  if (uVar7 != uVar4) {
    *(long **)(lVar6 + uVar7 * 8) = plVar5;
    lVar3 = *plVar2;
  }
LAB_107272fb4:
  *plVar5 = lVar3;
  *plVar2 = 0;
  *(long *)(param_1 + 0x2f8) = *(long *)(param_1 + 0x2f8) + -1;
  plStack_38 = plVar2;
  func_0x000107274b68();
  uStack_27 = 0;
  uStack_23 = 0;
  FUN_10726e9a0(&plStack_38);
  return;
}



/* Entry: 107261d10; end: 107261d5b;  */

long FUN_107261d10(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000107274b8c();
  func_0x000107261d34();
  lVar1 = unaff_x19;
  func_0x00010725c0a0();
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 107261d5c; end: 107261dab;  */

void FUN_107261d5c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar3 = param_2[1];
  uVar2 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x000107274880();
    } while (extraout_w10 != 0);
  }
  uVar1 = param_2[2];
  uStack_30 = 0;
  uStack_28 = 0;
  param_1[1] = uVar3;
  *param_1 = uVar2;
  uStack_20 = 0;
  uStack_18 = 0;
  param_1[2] = uVar1;
  func_0x00010725b1d4(&uStack_20);
  func_0x00010725b1d4(&uStack_30);
  return;
}



/* Entry: 107261dac; end: 107261ddb;  */

void FUN_107261dac(void)

{
  long extraout_x8;
  
  func_0x000107274f8c();
  if (extraout_x8 != 0) {
    FUN_107261ddc();
    func_0x000107274f80();
  }
  return;
}



/* Entry: 107261ddc; end: 107261e1b;  */

void FUN_107261ddc(undefined8 *param_1)

{
  long lVar1;
  char *pcVar2;
  
  pcVar2 = (char *)*param_1;
  for (lVar1 = param_1[2]; lVar1 != 0; lVar1 = lVar1 + -1) {
    if (-1 < *pcVar2) {
      func_0x000107274878();
    }
    pcVar2 = pcVar2 + 1;
  }
  return;
}



/* Entry: 107261e1c; end: 107261e6b;  */

void FUN_107261e1c(void)

{
  func_0x0001072745e4();
  func_0x000107261e40();
  return;
}



/* Entry: 107261e6c; end: 107261e73;  */

void FUN_107261e6c(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072747d8(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0xa8;
    func_0x000107261ea8();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 107261e74; end: 107261ecb;  */

void FUN_107261e74(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072747d8();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0xa8;
    func_0x000107261ea8();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 107261ecc; end: 107261f0f;  */

void FUN_107261ecc(long param_1)

{
  if (*(uint *)(param_1 + 0x58) != 0xffffffff) {
    func_0x0001072745a8((&PTR_FUN_110995db8)[*(uint *)(param_1 + 0x58)]);
  }
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  return;
}



/* Entry: 107261f10; end: 107261f2b;  */

void FUN_107261f10(void)

{
  return;
}



/* Entry: 107261f2c; end: 107261f5b;  */

/* WARNING: Possible PIC construction at 0x000107261f40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107261f44) */

void FUN_107261f2c(long param_1)

{
  if (*(char *)(param_1 + 0x90) == '\x01') {
    func_0x000107c60ca0();
  }
  return;
}



/* Entry: 107261f5c; end: 107261f7b;  */

void FUN_107261f5c(long param_1)

{
  if (*(char *)(param_1 + 0x50) == '\x01') {
    FUN_107261f7c();
  }
  return;
}



/* Entry: 107261f7c; end: 107261fa7;  */

void FUN_107261f7c(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x30);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 107261fa8; end: 107261fc3;  */

void FUN_107261fa8(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_107261fc4(param_1,param_2,&uStack_11);
  return;
}



/* Entry: 107261fc4; end: 10726207b;  */

void FUN_107261fc4(undefined8 param_1,long param_2)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_2;
  func_0x000100168718();
  FUN_10726207c();
  if (*(long *)(param_2 + 0x18) != 0) {
    func_0x0001001685d4();
    FUN_1072620a4();
    FUN_1072621e0();
    lStack_40 = param_2;
    while (lStack_38 = lVar1, lStack_40 != 0) {
      func_0x000104c2fe38(lVar1);
      func_0x000107274f4c();
      func_0x00010ae6c8b4();
      func_0x0001072742a4((uint)lVar1 & 0x7f);
      func_0x0001072620f8();
      FUN_107262260(&lStack_40);
      lVar1 = lStack_38;
    }
    func_0x000107275428();
  }
  return;
}



/* Entry: 10726207c; end: 1072620a3;  */

void FUN_10726207c(undefined8 param_1,long param_2)

{
  func_0x000107275560();
  if (param_2 != 0) {
    func_0x000107275410();
    FUN_10726210c();
  }
  return;
}



/* Entry: 1072620a4; end: 10726210b;  */

void FUN_1072620a4(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  
  if (param_2 <= (ulong)(*(long *)(*param_1 + -8) + param_1[3])) {
    return;
  }
  if (param_2 == 7) {
    lVar1 = 8;
  }
  else {
    lVar1 = (long)(param_2 - 1) / 7 + param_2;
  }
  uVar2 = 0xffffffffffffffff >> (LZCOUNT(lVar1) & 0x3fU);
  if (lVar1 == 0) {
    uVar2 = 1;
  }
  func_0x000107274f98(param_1,uVar2);
  FUN_10726210c();
  for (lVar1 = 0; unaff_x23 != lVar1; lVar1 = lVar1 + 1) {
    if (-1 < *(char *)(unaff_x22 + lVar1)) {
      func_0x00010727575c();
      func_0x0001072749d4();
      func_0x0001072742a4(unaff_w21 & 0x7f);
      func_0x000107275324();
      FUN_1072621bc();
    }
  }
  if (unaff_x23 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
  return;
}



/* Entry: 10726210c; end: 107262143;  */

void FUN_10726210c(undefined8 param_1)

{
  func_0x000107274f8c();
  func_0x000107274e50();
  func_0x000107274e24();
  func_0x0001000631d0(param_1,0x38);
  return;
}



/* Entry: 107262144; end: 1072621bb;  */

void FUN_107262144(void)

{
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long lVar1;
  
  func_0x000107274f98();
  FUN_10726210c();
  for (lVar1 = 0; unaff_x23 != lVar1; lVar1 = lVar1 + 1) {
    if (-1 < *(char *)(unaff_x22 + lVar1)) {
      func_0x00010727575c();
      func_0x0001072749d4();
      func_0x0001072742a4(unaff_w21 & 0x7f);
      func_0x000107275324();
      FUN_1072621bc();
    }
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 1072621bc; end: 1072621df;  */

void FUN_1072621bc(void)

{
  long unaff_x19;
  undefined1 uStack_21;
  
  func_0x000107275334();
  func_0x000104c318bc();
  if (*(uint *)(unaff_x19 + 0x28) != 0xffffffff) {
    (*(code *)(&PTR_DAT_1107eb090)[*(uint *)(unaff_x19 + 0x28)])(&uStack_21);
  }
  *(undefined4 *)(unaff_x19 + 0x28) = 0xffffffff;
  return;
}



/* Entry: 1072621e0; end: 107262207;  */

undefined1  [16] FUN_1072621e0(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_1[1];
  uStack_20 = *param_1;
  FUN_107262208(&uStack_20);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 107262208; end: 10726225f;  */

void FUN_107262208(long *param_1)

{
  char *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  pcVar1 = (char *)*param_1;
  while (*pcVar1 < -1) {
    uVar3 = *(undefined8 *)pcVar1;
    uVar2 = CONCAT17(-(-2 < (char)((ulong)uVar3 >> 0x38)),
                     CONCAT16(-(-2 < (char)((ulong)uVar3 >> 0x30)),
                              CONCAT15(-(-2 < (char)((ulong)uVar3 >> 0x28)),
                                       CONCAT14(-(-2 < (char)((ulong)uVar3 >> 0x20)),
                                                CONCAT13(-(-2 < (char)((ulong)uVar3 >> 0x18)),
                                                         CONCAT12(-(-2 < (char)((ulong)uVar3 >> 0x10
                                                                               )),
                                                                  CONCAT11(-(-2 < (char)((ulong)
                                                  uVar3 >> 8)),-(-2 < (char)uVar3))))))));
    uVar2 = (uVar2 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar2 & 0x5555555555555555) << 1;
    uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
    uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    uVar2 = LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20);
    pcVar1 = pcVar1 + (uVar2 >> 3);
    *param_1 = (long)pcVar1;
    param_1[1] = param_1[1] + (uVar2 >> 3) * 0x38;
  }
  if (*pcVar1 != -1) {
    return;
  }
  *param_1 = 0;
  return;
}



/* Entry: 107262260; end: 107262293;  */

long * FUN_107262260(long *param_1)

{
  param_1[1] = param_1[1] + 0x38;
  *param_1 = *param_1 + 1;
  FUN_107262208();
  return param_1;
}



/* Entry: 107262294; end: 107262297;  */

void FUN_107262294(void)

{
  func_0x000107275548();
  func_0x0001000e30f4();
  return;
}



/* Entry: 107262298; end: 1072622ab;  */

void FUN_107262298(void)

{
  FUN_1072622cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072622ac; end: 1072622cb;  */

undefined4 FUN_1072622ac(long param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



/* Entry: 1072622cc; end: 1072622eb;  */

void FUN_1072622cc(void)

{
  func_0x000107275548();
  func_0x0001000e30f4();
  return;
}



/* Entry: 1072622ec; end: 107262327;  */

void FUN_1072622ec(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x19;
  
  func_0x0001072753a4();
  if (!(bool)in_ZR) {
    func_0x0001072745a8((&PTR_FUN_110995dd8)[extraout_x8]);
  }
  *(undefined4 *)(unaff_x19 + 0x18) = 0xffffffff;
  return;
}



/* Entry: 107262328; end: 10726232f;  */

void FUN_107262328(void)

{
  return;
}



/* Entry: 107262330; end: 107262363;  */

long FUN_107262330(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x50);
  FUN_1072622cc(param_1 + 0x20);
  FUN_1072622ec(param_1);
  return param_1;
}



/* Entry: 107262364; end: 10726236b;  */

bool FUN_107262364(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  FUN_1072623d4(lVar1);
  return lVar1 != 0;
}



/* Entry: 10726236c; end: 107262397;  */

void FUN_10726236c(undefined1 *param_1,int *param_2)

{
  undefined1 uStack_11;
  
  if (*param_2 == 4) {
    *param_1 = 0;
    param_1[0x38] = 0;
    return;
  }
  FUN_10726247c(param_2,&uStack_11);
  return;
}



/* Entry: 107262398; end: 1072623b7;  */

void FUN_107262398(long param_1,long param_2)

{
  long unaff_x19;
  undefined8 unaff_x20;
  
  if (*(char *)(param_2 + 0x38) == '\x01') {
    func_0x000104c318ec();
    *(undefined8 *)(param_1 + 0x30) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  }
  else {
    func_0x0001000d03a8();
    func_0x000104c2feb0();
    *(undefined8 *)(unaff_x19 + 0x30) = 0xffffffffffffffff;
    func_0x000104c2fe38();
    *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  }
  return;
}



/* Entry: 1072623b8; end: 1072623d3;  */

bool FUN_1072623b8(long param_1)

{
  FUN_1072623d4();
  return param_1 != 0;
}



/* Entry: 1072623d4; end: 10726247b;  */

long FUN_1072623d4(long *param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar1;
  ulong unaff_x20;
  ulong uVar2;
  ulong unaff_x23;
  ulong unaff_x24;
  
  uVar2 = param_1[1];
  if ((uVar2 != 0) && (param_1[3] != 0)) {
    func_0x000104c2fe38();
    func_0x0001072746e8();
    if ((bool)in_ZR) {
      unaff_x24 = unaff_x20 & unaff_x23;
    }
    else {
      func_0x000107274fe8();
      if ((bool)in_CY) {
        func_0x000107274fdc();
      }
    }
    func_0x000107274ff4();
    if (param_1 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        param_1 = (long *)*param_1;
        if (param_1 == (long *)0x0) {
          return 0;
        }
        func_0x0001072753f8();
        if (!(bool)in_ZR) break;
        func_0x00010727463c();
        if ((int)param_2 != 0) {
          return (long)param_1;
        }
      }
      if ((uVar2 & unaff_x23) == 0) {
        uVar1 = extraout_x8 & unaff_x23;
      }
      else {
        uVar1 = extraout_x8;
        if (uVar2 <= extraout_x8) {
          func_0x000107274f40();
          uVar1 = extraout_x8_00;
        }
      }
      in_ZR = 1;
    } while (uVar1 == unaff_x24);
  }
  return 0;
}



/* Entry: 10726247c; end: 10726248f;  */

int * FUN_10726247c(undefined1 *param_1,int *param_2,int *param_3)

{
  undefined1 uVar1;
  int *piVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  int *extraout_x9;
  int *extraout_x9_00;
  long extraout_x9_01;
  undefined8 unaff_x19;
  undefined1 auStack_98 [24];
  int aiStack_60 [14];
  undefined8 uStack_28;
  
  if (*param_2 == 4) {
    *param_1 = 0;
    param_1[0x38] = 0;
    return param_2;
  }
  func_0x000107274260();
  uVar1 = *param_2 == 3;
  if ((bool)uVar1) {
    uStack_28 = extraout_x8;
    func_0x0001072758a8();
    param_3 = extraout_x9;
    FUN_107262508();
    func_0x0001072749a0();
    func_0x000107275054();
    func_0x00010727416c(uStack_28);
    if ((bool)uVar1) {
      return param_2;
    }
  }
  else {
    func_0x00010727416c(extraout_x8);
    if ((bool)uVar1) {
      func_0x000107274260();
      uVar1 = *param_2 == 2;
      if ((bool)uVar1) {
        uStack_28 = extraout_x8_00;
        func_0x0001072758a8();
        param_3 = extraout_x9_00;
        FUN_1072627c8();
        func_0x0001072749a0();
        func_0x000107275054();
        func_0x00010727416c(uStack_28);
        if ((bool)uVar1) {
          return param_2;
        }
      }
      else {
        func_0x00010727416c(extraout_x8_00);
        if ((bool)uVar1) {
          func_0x000107274260(unaff_x19);
          uVar1 = *param_2 == 1;
          if ((bool)uVar1) {
            uStack_28 = extraout_x8_01;
            func_0x0001072758a8(*(undefined8 *)(param_2 + 2));
            FUN_107262870();
            func_0x0001072749a0();
            func_0x000107275054();
            func_0x00010727416c(uStack_28);
            if ((bool)uVar1) {
              return param_2;
            }
          }
          else {
            func_0x00010727416c(extraout_x8_01);
            if ((bool)uVar1) {
              piVar2 = aiStack_60;
              func_0x000107274260(unaff_x19);
              uStack_28 = extraout_x8_02;
              func_0x000104c2fe00(aiStack_60,extraout_x9_01 + 8);
              func_0x0001072749a0();
              func_0x000107275054();
              func_0x00010727416c(uStack_28);
              if ((bool)uVar1) {
                return piVar2;
              }
              ___stack_chk_fail();
              piVar2 = (int *)&stack0xffffffffffffff88;
              FUN_10726290c(piVar2);
              return piVar2;
            }
          }
          ___stack_chk_fail();
          __Unwind_Resume();
          piVar2 = (int *)0x0;
          func_0x000107879028(auStack_98,0);
          func_0x000107274c54();
          FUN_1072625b4();
          func_0x000107274984();
          return piVar2;
        }
      }
      ___stack_chk_fail();
      __Unwind_Resume();
      FUN_1072625e4(param_2,param_3);
      func_0x000107275820();
      return param_2;
    }
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x000107878fec(auStack_98,param_3);
  func_0x000107274c54();
  FUN_1072625b4();
  func_0x000107274984();
  return param_3;
}



/* Entry: 107262490; end: 107262507;  */

int * FUN_107262490(int *param_1,int *param_2)

{
  undefined1 uVar1;
  int *piVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  int *extraout_x9;
  int *extraout_x9_00;
  long extraout_x9_01;
  undefined8 unaff_x19;
  undefined1 auStack_98 [24];
  int aiStack_60 [14];
  undefined8 uStack_28;
  
  func_0x000107274260();
  uVar1 = *param_1 == 3;
  if ((bool)uVar1) {
    uStack_28 = extraout_x8;
    func_0x0001072758a8();
    param_2 = extraout_x9;
    FUN_107262508();
    func_0x0001072749a0();
    func_0x000107275054();
    func_0x00010727416c(uStack_28);
    if ((bool)uVar1) {
      return param_1;
    }
  }
  else {
    func_0x00010727416c(extraout_x8);
    if ((bool)uVar1) {
      func_0x000107274260();
      uVar1 = *param_1 == 2;
      if ((bool)uVar1) {
        uStack_28 = extraout_x8_00;
        func_0x0001072758a8();
        param_2 = extraout_x9_00;
        FUN_1072627c8();
        func_0x0001072749a0();
        func_0x000107275054();
        func_0x00010727416c(uStack_28);
        if ((bool)uVar1) {
          return param_1;
        }
      }
      else {
        func_0x00010727416c(extraout_x8_00);
        if ((bool)uVar1) {
          func_0x000107274260(unaff_x19);
          uVar1 = *param_1 == 1;
          if ((bool)uVar1) {
            uStack_28 = extraout_x8_01;
            func_0x0001072758a8(*(undefined8 *)(param_1 + 2));
            FUN_107262870();
            func_0x0001072749a0();
            func_0x000107275054();
            func_0x00010727416c(uStack_28);
            if ((bool)uVar1) {
              return param_1;
            }
          }
          else {
            func_0x00010727416c(extraout_x8_01);
            if ((bool)uVar1) {
              piVar2 = aiStack_60;
              func_0x000107274260(unaff_x19);
              uStack_28 = extraout_x8_02;
              func_0x000104c2fe00(aiStack_60,extraout_x9_01 + 8);
              func_0x0001072749a0();
              func_0x000107275054();
              func_0x00010727416c(uStack_28);
              if ((bool)uVar1) {
                return piVar2;
              }
              ___stack_chk_fail();
              piVar2 = (int *)&stack0xffffffffffffff88;
              FUN_10726290c(piVar2);
              return piVar2;
            }
          }
          ___stack_chk_fail();
          __Unwind_Resume();
          piVar2 = (int *)0x0;
          func_0x000107879028(auStack_98,0);
          func_0x000107274c54();
          FUN_1072625b4();
          func_0x000107274984();
          return piVar2;
        }
      }
      ___stack_chk_fail();
      __Unwind_Resume();
      FUN_1072625e4(param_1,param_2);
      func_0x000107275820();
      return param_1;
    }
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x000107878fec(auStack_98,param_2);
  func_0x000107274c54();
  FUN_1072625b4();
  func_0x000107274984();
  return param_2;
}



/* Entry: 107262508; end: 10726253b;  */

void FUN_107262508(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107878fec(auStack_38,param_2);
  func_0x000107274c54();
  FUN_1072625b4();
  func_0x000107274984();
  return;
}



/* Entry: 10726253c; end: 1072625b3;  */

int * FUN_10726253c(int *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  int *piVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x9;
  long extraout_x9_00;
  undefined8 unaff_x19;
  undefined1 auStack_98 [24];
  int aiStack_60 [14];
  undefined8 uStack_28;
  
  func_0x000107274260();
  uVar1 = *param_1 == 2;
  if ((bool)uVar1) {
    uStack_28 = extraout_x8;
    func_0x0001072758a8();
    param_2 = extraout_x9;
    FUN_1072627c8();
    func_0x0001072749a0();
    func_0x000107275054();
    func_0x00010727416c(uStack_28);
    if ((bool)uVar1) {
      return param_1;
    }
  }
  else {
    func_0x00010727416c(extraout_x8);
    if ((bool)uVar1) {
      func_0x000107274260();
      uVar1 = *param_1 == 1;
      if ((bool)uVar1) {
        uStack_28 = extraout_x8_00;
        func_0x0001072758a8(*(undefined8 *)(param_1 + 2));
        FUN_107262870();
        func_0x0001072749a0();
        func_0x000107275054();
        func_0x00010727416c(uStack_28);
        if (!(bool)uVar1) {
LAB_107262868:
          ___stack_chk_fail();
          __Unwind_Resume();
          piVar2 = (int *)0x0;
          func_0x000107879028(auStack_98,0);
          func_0x000107274c54();
          FUN_1072625b4();
          func_0x000107274984();
          return piVar2;
        }
      }
      else {
        func_0x00010727416c(extraout_x8_00);
        if (!(bool)uVar1) goto LAB_107262868;
        param_1 = aiStack_60;
        func_0x000107274260(unaff_x19);
        uStack_28 = extraout_x8_01;
        func_0x000104c2fe00(aiStack_60,extraout_x9_00 + 8);
        func_0x0001072749a0();
        func_0x000107275054();
        func_0x00010727416c(uStack_28);
        if (!(bool)uVar1) {
          ___stack_chk_fail();
          piVar2 = (int *)&stack0xffffffffffffff88;
          FUN_10726290c(piVar2);
          return piVar2;
        }
      }
      return param_1;
    }
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  FUN_1072625e4(param_1,param_2);
  func_0x000107275820();
  return param_1;
}



/* Entry: 1072625b4; end: 1072625e3;  */

undefined8 FUN_1072625b4(undefined8 param_1,undefined8 param_2)

{
  FUN_1072625e4(param_1,param_2);
  func_0x000107275820();
  return param_1;
}



/* Entry: 1072625e4; end: 1072626b3;  */

void FUN_1072625e4(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (cRam00000001138369b8 == '\x01') {
    uVar1 = param_2[1];
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    }
    if ((0x16 < uVar1) || ((bRam00000001138369b9 & 1) == 0)) {
      if ((uVar1 < 0x26) && ((bRam00000001138369ba & 1) != 0)) {
        FUN_1072626b4(param_1);
        *(undefined4 *)(param_1 + 5) = 1;
        return;
      }
      func_0x0001072758a8();
      FUN_107262718();
      param_1[1] = uStack_28;
      *param_1 = uStack_30;
      uStack_30 = 0;
      uStack_28 = 0;
      *(undefined4 *)(param_1 + 5) = 3;
      func_0x000104c33970(&uStack_30);
      return;
    }
  }
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_1[2] = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  return;
}



/* Entry: 1072626b4; end: 107262717;  */

undefined2 * FUN_1072626b4(undefined2 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  byte bVar4;
  
  *param_1 = 0;
  bVar4 = *(byte *)((long)param_2 + 0x17);
  puVar3 = (undefined8 *)*param_2;
  uVar1 = param_2[1];
  if (-1 < (char)bVar4) {
    uVar1 = (ulong)bVar4;
  }
  uVar2 = uVar1;
  if (0x24 < uVar1) {
    uVar2 = 0x25;
  }
  *param_1 = (short)uVar2;
  if (uVar1 != 0) {
    if (-1 < (char)bVar4) {
      puVar3 = param_2;
    }
    func_0x0001072755bc(param_1 + 1,puVar3);
  }
  *(undefined1 *)((long)(param_1 + 1) + uVar2) = 0;
  return param_1;
}



/* Entry: 107262718; end: 107262733;  */

void FUN_107262718(void)

{
  func_0x00010727527c();
  FUN_107262734();
  return;
}



/* Entry: 107262734; end: 1072627ab;  */

void FUN_107262734(long param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puStack_30;
  
  func_0x000107274260();
  func_0x000107275000();
  func_0x000104c307ec();
  puStack_30[2] = 0;
  *puStack_30 = &PTR_DAT_1107eb210;
  puStack_30[1] = 0;
  uVar1 = param_2[2];
  uVar2 = *param_2;
  puStack_30[4] = param_2[1];
  puStack_30[3] = uVar2;
  puStack_30[5] = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  func_0x00010727428c();
  func_0x000104c308b0();
  func_0x00010727416c(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x000104c318bc();
  *(undefined1 *)(param_1 + 0x38) = 1;
  return;
}



/* Entry: 1072627ac; end: 1072627c7;  */

void FUN_1072627ac(long param_1)

{
  func_0x000104c318bc();
  *(undefined1 *)(param_1 + 0x38) = 1;
  return;
}



/* Entry: 1072627c8; end: 1072627fb;  */

void FUN_1072627c8(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107878fb0(auStack_38,param_2);
  func_0x000107274c54();
  FUN_1072625b4();
  func_0x000107274984();
  return;
}



/* Entry: 1072627fc; end: 10726286f;  */

void FUN_1072627fc(int *param_1)

{
  undefined1 uVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x9;
  undefined1 auStack_98 [24];
  undefined1 auStack_60 [56];
  undefined8 uStack_28;
  
  func_0x000107274260();
  uVar1 = *param_1 == 1;
  if ((bool)uVar1) {
    uStack_28 = extraout_x8;
    func_0x0001072758a8(*(undefined8 *)(param_1 + 2));
    FUN_107262870();
    func_0x0001072749a0();
    func_0x000107275054();
    func_0x00010727416c(uStack_28);
    if (!(bool)uVar1) {
LAB_107262868:
      ___stack_chk_fail();
      __Unwind_Resume();
      func_0x000107879028(auStack_98,0);
      func_0x000107274c54();
      FUN_1072625b4();
      func_0x000107274984();
      return;
    }
  }
  else {
    func_0x00010727416c(extraout_x8);
    if (!(bool)uVar1) goto LAB_107262868;
    func_0x000107274260();
    uStack_28 = extraout_x8_00;
    func_0x000104c2fe00(auStack_60,extraout_x9 + 8);
    func_0x0001072749a0();
    func_0x000107275054();
    func_0x00010727416c(uStack_28);
    if (!(bool)uVar1) {
      ___stack_chk_fail();
      FUN_10726290c(&stack0xffffffffffffff88);
      return;
    }
  }
  return;
}



/* Entry: 107262870; end: 1072628eb;  */

void FUN_107262870(void)

{
  undefined1 auStack_38 [24];
  
  func_0x000107879028(auStack_38,0);
  func_0x000107274c54();
  FUN_1072625b4();
  func_0x000107274984();
  return;
}



/* Entry: 1072628ec; end: 10726290b;  */

void FUN_1072628ec(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  FUN_10726290c(&uStack_18);
  return;
}



/* Entry: 10726290c; end: 107262913;  */

void FUN_10726290c(long *param_1,long *param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = *param_2;
  uVar3 = param_3;
  FUN_10726297c();
  if ((uVar3 & 1) != 0) {
    func_0x0001072620f8(*param_2,lVar2,param_3);
  }
  lVar1 = ((long *)*param_2)[1];
  *param_1 = *(long *)*param_2 + lVar2;
  param_1[1] = lVar1 + lVar2 * 0x38;
  *(char *)(param_1 + 2) = (char)uVar3;
  return;
}



/* Entry: 107262914; end: 10726297b;  */

void FUN_107262914(long *param_1,long *param_2,ulong param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_2;
  FUN_10726297c();
  if ((param_3 & 1) != 0) {
    func_0x0001072620f8(*param_2,lVar2,param_4);
  }
  lVar1 = ((long *)*param_2)[1];
  *param_1 = *(long *)*param_2 + lVar2;
  param_1[1] = lVar1 + lVar2 * 0x38;
  *(char *)(param_1 + 2) = (char)param_3;
  return;
}



/* Entry: 10726297c; end: 107262a37;  */

undefined1  [16] FUN_10726297c(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong extraout_x8;
  long unaff_x19;
  ulong unaff_x25;
  long unaff_x27;
  ulong unaff_x28;
  undefined1 auVar3 [16];
  
  func_0x0001072746bc();
  func_0x000107274648();
  do {
    func_0x000107274aac();
    for (; unaff_x28 != 0; unaff_x28 = unaff_x28 - 1 & unaff_x28) {
      uVar1 = (unaff_x28 & 0xaaaaaaaaaaaaaaaa) >> 1 | (unaff_x28 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      param_1 = unaff_x27 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & unaff_x25;
      uVar1 = *(long *)(unaff_x19 + 8) + param_1 * 0x38;
      func_0x000104c32db4();
      if ((uVar1 & 1) != 0) {
        uVar2 = 0;
        goto LAB_1072629fc;
      }
      param_1 = uVar1;
    }
    func_0x0001072752f4();
  } while ((extraout_x8 & 1) == 0);
  func_0x000107274b34();
  FUN_107262a38();
  uVar2 = 1;
LAB_1072629fc:
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 107262a38; end: 107262a87;  */

void FUN_107262a38(long param_1)

{
  long lVar1;
  long *unaff_x19;
  
  func_0x0001072747cc();
  func_0x000100061de0();
  lVar1 = *unaff_x19;
  if ((*(long *)(lVar1 + -8) == 0) && (*(char *)(lVar1 + param_1) != -2)) {
    FUN_107262a88();
    func_0x0001001685d4();
    func_0x000100061de0();
    lVar1 = *unaff_x19;
  }
  func_0x00010727443c(lVar1);
  return;
}



/* Entry: 107262a88; end: 107262ab7;  */

undefined * FUN_107262a88(undefined *param_1)

{
  undefined1 uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 extraout_x8;
  undefined *puVar4;
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long lVar5;
  
  uVar3 = *(ulong *)(param_1 + 0x10);
  if ((8 < uVar3) &&
     (uVar1 = uVar3 * 0x19 + *(long *)(param_1 + 0x18) * -0x20 == 0,
     (ulong)(*(long *)(param_1 + 0x18) * 0x20) <= uVar3 * 0x19)) {
    func_0x000107274388();
    puVar2 = &UNK_1109966a0;
    func_0x00010ae6c914();
    func_0x00010727416c(extraout_x8);
    if ((bool)uVar1) {
      return param_1;
    }
    ___stack_chk_fail();
    puVar4 = *(undefined **)(puVar2 + 0x30);
    if (puVar4 == (undefined *)0xffffffffffffffff) {
      puVar4 = puVar2;
      func_0x000104c2fcd4();
      func_0x000104c2fcf0(puVar2);
      func_0x0001001030f4(puVar4,puVar4 + (long)puVar2);
      func_0x000104c343b0();
      func_0x000104c2ffc0();
    }
    return puVar4;
  }
  func_0x000107274f98(param_1,uVar3 << 1 | 1);
  FUN_10726210c();
  for (lVar5 = 0; unaff_x23 != lVar5; lVar5 = lVar5 + 1) {
    if (-1 < *(char *)(unaff_x22 + lVar5)) {
      func_0x00010727575c();
      func_0x0001072749d4();
      func_0x0001072742a4(unaff_w21 & 0x7f);
      func_0x000107275324();
      FUN_1072621bc();
    }
  }
  if (unaff_x23 != 0) {
    puVar2 = (undefined *)(unaff_x22 + -8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar2);
    return puVar2;
  }
  return param_1;
}



/* Entry: 107262ab8; end: 107262af3;  */

undefined * FUN_107262ab8(undefined *param_1)

{
  undefined1 in_ZR;
  undefined *puVar1;
  undefined8 extraout_x8;
  undefined *puVar2;
  
  func_0x000107274388();
  puVar1 = &UNK_1109966a0;
  func_0x00010ae6c914();
  func_0x00010727416c(extraout_x8);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar2 = *(undefined **)(puVar1 + 0x30);
  if (puVar2 == (undefined *)0xffffffffffffffff) {
    puVar2 = puVar1;
    func_0x000104c2fcd4();
    func_0x000104c2fcf0(puVar1);
    func_0x0001001030f4(puVar2,puVar2 + (long)puVar1);
    func_0x000104c343b0();
    func_0x000104c2ffc0();
  }
  return puVar2;
}



/* Entry: 107262af4; end: 107262afb;  */

long FUN_107262af4(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x30);
  if (lVar1 == -1) {
    lVar1 = param_2;
    func_0x000104c2fcd4();
    func_0x000104c2fcf0(param_2);
    func_0x0001001030f4(lVar1,lVar1 + param_2);
    func_0x000104c343b0();
    func_0x000104c2ffc0();
  }
  return lVar1;
}



/* Entry: 107262afc; end: 107262b1b;  */

void FUN_107262afc(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    FUN_10726ea70();
  }
  return;
}



/* Entry: 107262b1c; end: 107262c67;  */

void FUN_107262b1c(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *unaff_x19;
  long unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  
  func_0x000107274970();
  if (param_1 < (ulong)unaff_x19[2]) {
    FUN_107262c68();
    lVar9 = param_1 + 0xa8;
  }
  else {
    lVar9 = param_1 - *unaff_x19;
    uVar1 = lVar9 / 0xa8 + 1;
    if (0x186186186186186 < uVar1) {
      FUN_107262e90();
LAB_107262c64:
      func_0x000104bd35f4();
      func_0x0001072747d8();
      func_0x000104c318bc();
      func_0x000107275648();
      lVar9 = unaff_x19[0x13];
      *(long *)(unaff_x20 + 0xa0) = unaff_x19[0x14];
      *(long *)(unaff_x20 + 0x98) = lVar9;
      return;
    }
    uVar3 = (unaff_x19[2] - *unaff_x19) / 0xa8;
    uVar7 = uVar3 * 2;
    if (uVar7 < uVar1 || uVar7 - uVar1 == 0) {
      uVar7 = uVar1;
    }
    if (0xc30c30c30c30c2 < uVar3) {
      uVar7 = 0x186186186186186;
    }
    if (uVar7 == 0) {
      lVar4 = 0;
    }
    else {
      if (0x186186186186186 < uVar7) goto LAB_107262c64;
      lVar4 = uVar7 * 0xa8;
      __Znwm();
    }
    lVar9 = lVar4 + lVar9;
    func_0x000107274b74();
    FUN_107262c68();
    lVar8 = *unaff_x19;
    lVar2 = unaff_x19[1];
    lVar10 = lVar9 + ((lVar2 - lVar8) / -0xa8) * 0xa8;
    lVar5 = lVar10;
    for (lVar6 = lVar8; lVar6 != lVar2; lVar6 = lVar6 + 0xa8) {
      FUN_107262c68(lVar5,lVar6);
      lVar5 = lVar5 + 0xa8;
    }
    for (; lVar8 != lVar2; lVar8 = lVar8 + 0xa8) {
      func_0x000107261ea8(lVar8);
    }
    lVar9 = lVar9 + 0xa8;
    lVar6 = *unaff_x19;
    *unaff_x19 = lVar10;
    unaff_x19[1] = lVar9;
    unaff_x19[2] = lVar4 + uVar7 * 0xa8;
    if (lVar6 != 0) {
      __ZdlPv();
    }
  }
  unaff_x19[1] = lVar9;
  return;
}



/* Entry: 107262c68; end: 107262c93;  */

void FUN_107262c68(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x0001072747d8();
  func_0x000104c318bc();
  func_0x000107275648();
  uVar1 = *(undefined8 *)(unaff_x19 + 0x98);
  *(undefined8 *)(unaff_x20 + 0xa0) = *(undefined8 *)(unaff_x19 + 0xa0);
  *(undefined8 *)(unaff_x20 + 0x98) = uVar1;
  return;
}



/* Entry: 107262c94; end: 107262ce3;  */

void FUN_107262c94(void)

{
  uint uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072747cc();
  func_0x000107275140();
  uVar1 = *(uint *)(unaff_x20 + 0x58);
  if (uVar1 != 0xffffffff) {
    func_0x000107274690((&PTR_FUN_110995de8)[uVar1]);
    *(uint *)(unaff_x19 + 0x58) = uVar1;
  }
  return;
}



/* Entry: 107262ce4; end: 107262d2f;  */

void FUN_107262ce4(undefined8 *param_1,undefined4 *param_2)

{
  *(undefined4 *)*param_1 = *param_2;
  return;
}



/* Entry: 107262d30; end: 107262d87;  */

void FUN_107262d30(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar2;
  ulong extraout_x9;
  long unaff_x19;
  
  func_0x000107274d58();
  if (!(bool)in_ZR) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010727511c();
      uVar1 = extraout_x8;
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      func_0x000107275110();
      uVar1 = extraout_x8_00;
      uVar2 = extraout_x9;
    }
    if (uVar1 == uVar2) {
      func_0x0001079376a0();
    }
    else {
      func_0x000107937670();
    }
  }
  return;
}



/* Entry: 107262d88; end: 107262daf;  */

void FUN_107262d88(undefined8 *param_1,long param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar2;
  ulong extraout_x9;
  long unaff_x19;
  
  *param_1 = &PTR_DAT_1109ec2e0;
  param_1[1] = 0;
  param_1[2] = &DAT_11383d918;
  param_1[3] = &DAT_11383d918;
  param_1[4] = &DAT_11383d918;
  param_1[5] = &DAT_11383d918;
  param_1[6] = 0;
  param_1[7] = 0;
  func_0x000107274d58();
  if (!(bool)in_ZR) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010727511c();
      uVar1 = extraout_x8;
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      func_0x000107275110();
      uVar1 = extraout_x8_00;
      uVar2 = extraout_x9;
    }
    if (uVar1 == uVar2) {
      func_0x000107938020();
    }
    else {
      func_0x000107937ff0();
    }
  }
  return;
}



/* Entry: 107262db0; end: 107262e07;  */

void FUN_107262db0(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar2;
  ulong extraout_x9;
  long unaff_x19;
  
  func_0x000107274d58();
  if (!(bool)in_ZR) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010727511c();
      uVar1 = extraout_x8;
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      func_0x000107275110();
      uVar1 = extraout_x8_00;
      uVar2 = extraout_x9;
    }
    if (uVar1 == uVar2) {
      func_0x000107938020();
    }
    else {
      func_0x000107937ff0();
    }
  }
  return;
}



/* Entry: 107262e08; end: 107262e37;  */

void FUN_107262e08(undefined8 *param_1,long param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar2;
  ulong extraout_x9;
  long unaff_x19;
  
  *param_1 = &PTR_DAT_1109ec650;
  param_1[1] = 0;
  param_1[2] = &DAT_11383d918;
  param_1[3] = &DAT_11383d918;
  param_1[4] = &DAT_11383d918;
  param_1[5] = &DAT_11383d918;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[6] = &DAT_11383d918;
  *(undefined4 *)(param_1 + 9) = 0;
  func_0x000107274d58();
  if (!(bool)in_ZR) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010727511c();
      uVar1 = extraout_x8;
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      func_0x000107275110();
      uVar1 = extraout_x8_00;
      uVar2 = extraout_x9;
    }
    if (uVar1 == uVar2) {
      func_0x0001079393d8();
    }
    else {
      func_0x0001079393a8();
    }
  }
  return;
}



/* Entry: 107262e38; end: 107262e8f;  */

void FUN_107262e38(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar2;
  ulong extraout_x9;
  long unaff_x19;
  
  func_0x000107274d58();
  if (!(bool)in_ZR) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010727511c();
      uVar1 = extraout_x8;
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      func_0x000107275110();
      uVar1 = extraout_x8_00;
      uVar2 = extraout_x9;
    }
    if (uVar1 == uVar2) {
      func_0x0001079393d8();
    }
    else {
      func_0x0001079393a8();
    }
  }
  return;
}



/* Entry: 107262e90; end: 107262e9b;  */

undefined8 FUN_107262e90(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  func_0x00010727455c();
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
  func_0x0001000609a4(param_1,puVar2,uVar1);
  func_0x000107275820();
  return param_1;
}



/* Entry: 107262e9c; end: 107262edb;  */

undefined8 FUN_107262e9c(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
  func_0x0001000609a4(param_1,puVar2,uVar1);
  func_0x000107275820();
  return param_1;
}



/* Entry: 107262edc; end: 107262ee7;  */

void FUN_107262edc(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  ulong extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  func_0x000107946698(param_1,0,param_2);
  func_0x000107946d88(&PTR_DAT_1109ed690);
  if ((extraout_x8 & 1) != 0) {
    func_0x000107946680();
  }
  func_0x000107946b2c();
  *(undefined8 *)(unaff_x19 + 0x10) = param_1;
  lVar2 = unaff_x21 + 0x18;
  func_0x000107946ba4();
  *(long *)(unaff_x19 + 0x18) = lVar2;
  *(undefined4 *)(unaff_x19 + 0x50) = 0;
  iVar1 = *(int *)(unaff_x21 + 0x54);
  *(int *)(unaff_x19 + 0x54) = iVar1;
  uVar6 = *(undefined8 *)(unaff_x21 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x21 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x21 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x21 + 0x30);
  *(undefined1 *)(unaff_x19 + 0x40) = *(undefined1 *)(unaff_x21 + 0x40);
  *(undefined8 *)(unaff_x19 + 0x28) = uVar6;
  *(undefined8 *)(unaff_x19 + 0x20) = uVar5;
  *(undefined8 *)(unaff_x19 + 0x38) = uVar4;
  *(undefined8 *)(unaff_x19 + 0x30) = uVar3;
  if (iVar1 == 3) {
    func_0x0001079451cc();
  }
  else {
    if (iVar1 != 2) {
      return;
    }
    func_0x000107945114();
  }
  *(undefined8 *)(unaff_x19 + 0x48) = unaff_x20;
  return;
}



/* Entry: 107262ee8; end: 107262f23;  */

void FUN_107262ee8(long *param_1)

{
  undefined8 *unaff_x20;
  
  func_0x0001072747d8();
  if (*param_1 != 0) {
    FUN_107261e6c();
    __ZdlPv(*unaff_x20);
    *unaff_x20 = 0;
    unaff_x20[1] = 0;
    unaff_x20[2] = 0;
  }
  func_0x000107274600();
  return;
}



/* Entry: 107262f24; end: 107262f3b;  */

uint FUN_107262f24(uint param_1)

{
  func_0x000104c32db4();
  return param_1 ^ 1;
}



/* Entry: 107262f3c; end: 107262f67;  */

void FUN_107262f3c(void)

{
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x0001072747d8();
  func_0x000107262f84();
  func_0x000104c2fe38();
  *(undefined8 *)(unaff_x20 + 0x30) = unaff_x19;
  return;
}



/* Entry: 107262f68; end: 107262fd7;  */

void FUN_107262f68(long param_1)

{
  func_0x000104c2fe00();
  *(undefined1 *)(param_1 + 0x38) = 1;
  return;
}



/* Entry: 107262fd8; end: 107262ff3;  */

void FUN_107262fd8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(int *)(*param_1 + 0x28) != 0) {
    func_0x000107274a44();
    FUN_10726301c();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350)
            (param_2,param_3);
  return;
}



/* Entry: 107262ff4; end: 10726301b;  */

void FUN_107262ff4(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(int *)(param_1 + 0x28) != 0) {
    func_0x000107274a44();
    FUN_10726301c();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350)
            (param_2,param_3);
  return;
}



/* Entry: 10726301c; end: 10726304b;  */

void FUN_10726301c(void)

{
  func_0x000107274f58();
  func_0x000107274c54();
  func_0x000104c2f800();
  func_0x000107274984();
  return;
}



/* Entry: 10726304c; end: 107263053;  */

void FUN_10726304c(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(int *)(*param_1 + 0x28) == 1) {
    uVar2 = param_3[1];
    uVar1 = *param_3;
    uVar4 = param_3[3];
    uVar3 = param_3[2];
    param_2[4] = param_3[4];
    param_2[1] = uVar2;
    *param_2 = uVar1;
    param_2[3] = uVar4;
    param_2[2] = uVar3;
    return;
  }
  func_0x000107274a44();
  FUN_107263090();
  return;
}



/* Entry: 107263054; end: 10726308f;  */

void FUN_107263054(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(int *)(param_1 + 0x28) == 1) {
    uVar2 = param_3[1];
    uVar1 = *param_3;
    uVar4 = param_3[3];
    uVar3 = param_3[2];
    param_2[4] = param_3[4];
    param_2[1] = uVar2;
    *param_2 = uVar1;
    param_2[3] = uVar4;
    param_2[2] = uVar3;
    return;
  }
  func_0x000107274a44();
  FUN_107263090();
  return;
}



/* Entry: 107263090; end: 10726309b;  */

void FUN_107263090(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x0001072747d8(*param_1,param_1[1]);
  func_0x000104c2f714();
  uVar2 = unaff_x19[1];
  uVar1 = *unaff_x19;
  uVar4 = unaff_x19[3];
  uVar3 = unaff_x19[2];
  unaff_x20[4] = unaff_x19[4];
  unaff_x20[1] = uVar2;
  *unaff_x20 = uVar1;
  unaff_x20[3] = uVar4;
  unaff_x20[2] = uVar3;
  *(undefined4 *)(unaff_x20 + 5) = 1;
  return;
}



/* Entry: 10726309c; end: 1072630d3;  */

void FUN_10726309c(void)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x0001072747d8();
  func_0x000104c2f714();
  uVar2 = unaff_x19[1];
  uVar1 = *unaff_x19;
  uVar4 = unaff_x19[3];
  uVar3 = unaff_x19[2];
  unaff_x20[4] = unaff_x19[4];
  unaff_x20[1] = uVar2;
  *unaff_x20 = uVar1;
  unaff_x20[3] = uVar4;
  unaff_x20[2] = uVar3;
  *(undefined4 *)(unaff_x20 + 5) = 1;
  return;
}



/* Entry: 1072630d4; end: 1072630db;  */

long FUN_1072630d4(long *param_1,long param_2,long param_3)

{
  long lVar1;
  int extraout_w10;
  
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x28) != 2) {
    func_0x000107274a44();
    FUN_107263150();
    return lVar1;
  }
  if (*(long *)(param_3 + 8) != 0) {
    do {
      func_0x000107274880();
    } while (extraout_w10 != 0);
  }
  func_0x000107275928();
  func_0x000104c2f784();
  return param_2;
}



/* Entry: 1072630dc; end: 10726310f;  */

long FUN_1072630dc(long param_1,long param_2,long param_3)

{
  int extraout_w10;
  
  if (*(int *)(param_1 + 0x28) != 2) {
    func_0x000107274a44();
    FUN_107263150();
    return param_1;
  }
  if (*(long *)(param_3 + 8) != 0) {
    do {
      func_0x000107274880();
    } while (extraout_w10 != 0);
  }
  func_0x000107275928();
  func_0x000104c2f784();
  return param_2;
}



/* Entry: 107263110; end: 10726314f;  */

undefined8 FUN_107263110(undefined8 param_1,long param_2)

{
  int extraout_w10;
  
  if (*(long *)(param_2 + 8) != 0) {
    do {
      func_0x000107274880();
    } while (extraout_w10 != 0);
  }
  func_0x000107275928();
  func_0x000104c2f784();
  return param_1;
}



/* Entry: 107263150; end: 10726315b;  */

void FUN_107263150(undefined8 *param_1)

{
  long lVar1;
  int extraout_w10;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  
  func_0x0001072747cc(*param_1,param_1[1]);
  func_0x000104c2f714();
  lVar1 = unaff_x20[1];
  uVar2 = *unaff_x20;
  unaff_x19[1] = unaff_x20[1];
  *unaff_x19 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107274880();
    } while (extraout_w10 != 0);
  }
  *(undefined4 *)(unaff_x19 + 5) = 2;
  return;
}



/* Entry: 10726315c; end: 10726319f;  */

void FUN_10726315c(void)

{
  long lVar1;
  int extraout_w10;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  
  func_0x0001072747cc();
  func_0x000104c2f714();
  lVar1 = unaff_x20[1];
  uVar2 = *unaff_x20;
  unaff_x19[1] = unaff_x20[1];
  *unaff_x19 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107274880();
    } while (extraout_w10 != 0);
  }
  *(undefined4 *)(unaff_x19 + 5) = 2;
  return;
}



/* Entry: 1072631a0; end: 1072631a7;  */

long FUN_1072631a0(long *param_1,long param_2,long param_3)

{
  long lVar1;
  int extraout_w10;
  
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x28) != 3) {
    func_0x000107274a44();
    FUN_10726321c();
    return lVar1;
  }
  if (*(long *)(param_3 + 8) != 0) {
    do {
      func_0x000107274880();
    } while (extraout_w10 != 0);
  }
  func_0x000107275928();
  func_0x000104c33970();
  return param_2;
}


