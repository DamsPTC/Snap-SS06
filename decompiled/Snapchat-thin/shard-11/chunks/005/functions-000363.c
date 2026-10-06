/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1086a1530; end: 1086a15ab;  */

void FUN_1086a1530(void)

{
  undefined1 auStack_80 [64];
  
  func_0x0001086b0104();
  func_0x0001086b03fc();
  func_0x0001086b060c();
  func_0x0001086b05f8();
  func_0x0001086b05b8();
  func_0x0001086b065c();
  func_0x0001086b07a4(auStack_80);
  FUN_1086adbb4();
  func_0x0001086b0604();
  func_0x0001086b0520();
  return;
}



/* Entry: 1086a15ac; end: 1086a15fb;  */

void FUN_1086a15ac(void)

{
  undefined1 auStack_1f0 [448];
  
  func_0x0001086b03e8();
  FUN_108860924(auStack_1f0);
  func_0x0001086b0588();
  FUN_1086a15fc();
  func_0x000107c28948(auStack_1f0);
  return;
}



/* Entry: 1086a15fc; end: 1086a1677;  */

void FUN_1086a15fc(void)

{
  undefined1 auStack_80 [64];
  
  func_0x0001086b0104();
  func_0x0001086b03fc();
  func_0x0001086b060c();
  func_0x0001086b05f8();
  func_0x0001086b05b8();
  func_0x0001086b065c();
  func_0x0001086b07a4(auStack_80);
  FUN_1086adc48();
  func_0x0001086b0604();
  func_0x0001086b0520();
  return;
}



/* Entry: 1086a1678; end: 1086a16c7;  */

void FUN_1086a1678(void)

{
  undefined1 auStack_1f0 [448];
  
  func_0x0001086b03e8();
  FUN_108860924(auStack_1f0);
  func_0x0001086b0588();
  FUN_1086a16c8();
  func_0x000107c28948(auStack_1f0);
  return;
}



/* Entry: 1086a16c8; end: 1086a1743;  */

void FUN_1086a16c8(void)

{
  undefined1 auStack_80 [64];
  
  func_0x0001086b0104();
  func_0x0001086b03fc();
  func_0x0001086b060c();
  func_0x0001086b05f8();
  func_0x0001086b05b8();
  func_0x0001086b065c();
  func_0x0001086b07a4(auStack_80);
  FUN_1086adc48();
  func_0x0001086b0604();
  func_0x0001086b0520();
  return;
}



/* Entry: 1086a1744; end: 1086a17f7;  */

ulong FUN_1086a1744(void)

{
  undefined1 in_ZR;
  ulong uVar1;
  undefined8 extraout_x8;
  ulong *unaff_x19;
  undefined **ppuStack_50;
  
  func_0x0001086b0138();
  func_0x0001086b0a34();
  ppuStack_50 = &PTR_DAT_110a63718;
  FUN_1086a15ac();
  (*(code *)*ppuStack_50)(&ppuStack_50);
  uVar1 = *unaff_x19;
  func_0x0001086a9b00(uVar1,unaff_x19[1]);
  func_0x0001086aff54(extraout_x8);
  if ((bool)in_ZR) {
    return uVar1;
  }
  ___stack_chk_fail();
  func_0x0001086b0df0();
  func_0x0001086b025c();
  if (*(uint *)(uVar1 + 0x48) < 0x24) {
    return (ulong)*(uint *)(&UNK_10df42a08 + (ulong)*(uint *)(uVar1 + 0x48) * 4);
  }
  return 4;
}



/* Entry: 1086a17f8; end: 1086a181b;  */

undefined4 FUN_1086a17f8(long param_1)

{
  if (*(uint *)(param_1 + 0x48) < 0x24) {
    return *(undefined4 *)(&UNK_10df42a08 + (ulong)*(uint *)(param_1 + 0x48) * 4);
  }
  return 4;
}



/* Entry: 1086a181c; end: 1086a191b;  */

/* WARNING: Type propagation algorithm not settling */

bool FUN_1086a181c(long param_1,undefined8 param_2,uint param_3,uint param_4,ulong param_5)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar3 = 0;
  switch(*(undefined4 *)(param_1 + 0x48)) {
  case 4:
    goto joined_r0x0001086a186c;
  case 5:
    break;
  default:
    goto LAB_1086a1870;
  case 7:
    param_3 = param_4;
    break;
  case 10:
    bVar1 = (*(byte *)(*(long *)(param_1 + 0x40) + 0x10) >> 1 & 1) != 0;
    uVar3 = param_5;
    if (bVar1) {
      uVar3 = (ulong)*(uint *)(*(long *)(*(long *)(param_1 + 0x40) + 0x20) + 0x10);
    }
    return (int)uVar3 != 2 || !bVar1 && (param_5 & 0x100000000) == 0;
  case 0xb:
    goto LAB_1086a18e0;
  }
  param_4 = param_3 & 1;
joined_r0x0001086a186c:
  if (param_4 != 0) {
LAB_1086a1870:
    func_0x0001086b0648();
    func_0x0001086b069c();
    FUN_1086a39ac();
    func_0x000107c32500();
    if (((uVar3 & 1) == 0) &&
       ((uVar2 = *(uint *)(param_1 + 0x48), 0x21 < uVar2 ||
        (((1L << ((ulong)uVar2 & 0x3f) & 0x3e23e0000U) == 0 &&
         (((ulong)uVar2 != 8 || (*(int *)(*(long *)(param_1 + 0x40) + 0x2c) != 6)))))))) {
      return true;
    }
  }
LAB_1086a18e0:
  return false;
}



/* Entry: 1086a191c; end: 1086a1983;  */

undefined1  [16] FUN_1086a191c(long param_1,long param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  if ((*(int *)(param_2 + 0x48) == 10) &&
     (lVar3 = *(long *)(param_2 + 0x40), (*(byte *)(lVar3 + 0x10) >> 1 & 1) != 0)) {
    ppuVar1 = &PTR_PTR_11326cb58;
    if (*(undefined ***)(lVar3 + 0x18) != (undefined **)0x0) {
      ppuVar1 = *(undefined ***)(lVar3 + 0x18);
    }
    uVar4 = param_1 + 0x18;
    FUN_1086dd910(uVar4,ppuVar1,*(undefined4 *)(*(long *)(lVar3 + 0x20) + 0x10));
    uVar5 = uVar4 & 0xffffffffffffff00;
    uVar4 = uVar4 & 0xff;
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
    uVar4 = 0;
    uVar5 = 0;
  }
  auVar6._0_8_ = uVar5 | uVar4;
  auVar6._8_8_ = uVar2;
  return auVar6;
}



/* Entry: 1086a1984; end: 1086a1a53;  */

void FUN_1086a1984(void)

{
  long in_x3;
  ulong in_x5;
  code *extraout_x8;
  undefined8 *unaff_x20;
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001086b0418();
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  if ((((in_x5 & 1) != 0) && (*(int *)(in_x3 + 0x48) == 10)) &&
     ((*(byte *)(*(long *)(in_x3 + 0x40) + 0x10) >> 1 & 1) != 0)) {
    FUN_1086a1744(auStack_50);
    func_0x0001086a9b44(&uStack_38,auStack_50);
    func_0x0001086b0de8();
  }
  func_0x0001086b0f60();
  func_0x0001086b0314(*(undefined8 *)*unaff_x20);
  (*extraout_x8)();
  func_0x000104be1274(auStack_50);
  func_0x00010867b9fc(&uStack_38);
  return;
}



/* Entry: 1086a1a54; end: 1086a1ec7;  */

void FUN_1086a1a54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  long lVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined4 extraout_w8;
  long lVar6;
  long unaff_x19;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  undefined1 in_register_00005008;
  undefined1 in_register_00005009;
  undefined1 in_register_0000500a;
  undefined1 in_register_0000500b;
  undefined1 in_register_0000500c;
  undefined1 in_register_0000500d;
  undefined1 in_register_0000500e;
  undefined1 in_register_0000500f;
  long lStack_538;
  long lStack_530;
  undefined1 auStack_520 [32];
  long alStack_500 [4];
  undefined4 uStack_4e0;
  long lStack_4d8;
  long lStack_4d0;
  long alStack_4c0 [4];
  undefined4 uStack_4a0;
  byte bStack_3e8;
  long alStack_3e0 [27];
  byte bStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined4 uStack_2e0;
  undefined1 auStack_218 [24];
  undefined1 auStack_200 [440];
  byte bStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  undefined1 auStack_28 [40];
  
  func_0x0001086b0888();
  func_0x0001086b08b8();
  uStack_40 = 0;
  func_0x000107c28258();
  uStack_30 = 1;
  uStack_38 = param_1;
  func_0x0001086b0ea4(auStack_218);
  func_0x0001086b0d68();
  if ((bStack_48 & 1) == 0) {
    func_0x0001086b067c();
    *(ulong *)(unaff_x19 + 0x30) =
         CONCAT17(in_register_0000500f,
                  CONCAT16(in_register_0000500e,
                           CONCAT15(in_register_0000500d,
                                    CONCAT14(in_register_0000500c,
                                             CONCAT13(in_register_0000500b,
                                                      CONCAT12(in_register_0000500a,
                                                               CONCAT11(in_register_00005009,
                                                                        in_register_00005008)))))));
    *(ulong *)(unaff_x19 + 0x28) =
         CONCAT17(in_register_00005007,
                  CONCAT16(in_register_00005006,
                           CONCAT15(in_register_00005005,
                                    CONCAT14(in_register_00005004,
                                             CONCAT13(in_register_00005003,
                                                      CONCAT12(in_register_00005002,
                                                               CONCAT11(in_register_00005001,in_b0))
                                                     )))));
    *(ulong *)(unaff_x19 + 0x40) =
         CONCAT17(in_register_0000500f,
                  CONCAT16(in_register_0000500e,
                           CONCAT15(in_register_0000500d,
                                    CONCAT14(in_register_0000500c,
                                             CONCAT13(in_register_0000500b,
                                                      CONCAT12(in_register_0000500a,
                                                               CONCAT11(in_register_00005009,
                                                                        in_register_00005008)))))));
    *(ulong *)(unaff_x19 + 0x38) =
         CONCAT17(in_register_00005007,
                  CONCAT16(in_register_00005006,
                           CONCAT15(in_register_00005005,
                                    CONCAT14(in_register_00005004,
                                             CONCAT13(in_register_00005003,
                                                      CONCAT12(in_register_00005002,
                                                               CONCAT11(in_register_00005001,in_b0))
                                                     )))));
    *(undefined4 *)(unaff_x19 + 0x48) = extraout_w8;
    *(undefined8 *)(unaff_x19 + 0x50) = 0;
  }
  else {
    func_0x0001086b0ea4(&uStack_300);
    func_0x000107c29fa8();
    func_0x000107c28ee8(alStack_3e0,&uStack_300);
    func_0x000107c3257c(alStack_4c0);
    while ((((bStack_308 & 1) != 0 || ((bStack_3e8 & 1) != 0)) && (alStack_3e0[0] != alStack_4c0[0])
           )) {
      plVar3 = alStack_3e0;
      FUN_1086a10f8();
      if ((int)plVar3[0xe] != 7) {
        FUN_1086dd1d8(auStack_200,plVar3 + 5,param_4);
      }
      func_0x000107c28fdc(alStack_3e0);
    }
    func_0x000107c324f8(alStack_4c0);
    func_0x000107c324f8(alStack_3e0);
    func_0x000107c28fcc(&uStack_300);
    FUN_108860e60(alStack_3e0);
    func_0x0001086b0ea4(&uStack_300);
    FUN_108864d08();
    FUN_1086a1ec8(&lStack_4d8,&uStack_300);
    FUN_1086add20(&uStack_300);
    lVar8 = lStack_4d0;
    uStack_2f8 = 0;
    uStack_300 = 0;
    uStack_2e8 = 0;
    uStack_2f0 = 0;
    uStack_2e0 = 0x3f800000;
    alStack_4c0[3] = 0;
    alStack_4c0[2] = 0;
    alStack_4c0[1] = 0;
    alStack_4c0[0] = 0;
    uStack_4a0 = 0x3f800000;
    for (lVar7 = lStack_4d8; lVar7 != lVar8; lVar7 = lVar7 + 0xc0) {
      if (*(int *)(lVar7 + 0x70) != 3) {
        FUN_10867b1ac(&uStack_300,lVar7 + 0x18);
      }
      FUN_10867b1ac(alStack_4c0,lVar7 + 0x18);
    }
    alStack_500[1] = 0;
    alStack_500[0] = 0;
    alStack_500[3] = 0;
    alStack_500[2] = 0;
    uStack_4e0 = 0x3f800000;
    if (alStack_4c0[3] != 0) {
      func_0x0001086b0db4();
      func_0x0001086b0ea4(&lStack_538);
      FUN_108861b60();
      lVar7 = lStack_538;
LAB_1086a1c20:
      if (lVar7 != lStack_530) {
        plVar3 = alStack_3e0;
        func_0x000100c5494c(plVar3,lVar7 + 0x18);
        if (plVar3 == (long *)0x0) {
          func_0x000107c316c8(auStack_28,&UNK_10f4b0bcf);
          lVar8 = lStack_4d8;
          lVar6 = lStack_4d0;
          if (lStack_4d8 != lStack_4d0) {
            do {
              while( true ) {
                lVar9 = lVar6;
                if (lVar8 == lVar6) goto LAB_1086a1ca8;
                lVar2 = lVar6;
                if (*(long *)(lVar8 + 0x18) == *(long *)(lVar7 + 0x18)) break;
                lVar8 = lVar8 + 0xc0;
              }
              do {
                lVar6 = lVar2 + -0xc0;
                lVar9 = lVar8;
                if (lVar6 == lVar8) goto LAB_1086a1ca8;
                plVar3 = (long *)(lVar2 + -0xa8);
                lVar2 = lVar6;
              } while (*plVar3 == *(long *)(lVar7 + 0x18));
              FUN_1086adffc(lVar8,lVar6);
              lVar8 = lVar8 + 0xc0;
            } while( true );
          }
          goto LAB_1086a1d28;
        }
        goto LAB_1086a1d6c;
      }
      func_0x0001086b0664();
      func_0x0001086b0784();
    }
    FUN_10869aa68();
    FUN_1086af1f8();
    FUN_1086af1f8(unaff_x19 + 0x28,alStack_500);
    puVar5 = &uStack_40;
    func_0x000107c2825c();
    *(undefined8 **)(unaff_x19 + 0x50) = puVar5;
    func_0x00010867bb84(alStack_500);
    func_0x00010867bb84(alStack_4c0);
    func_0x00010867bb84(&uStack_300);
    func_0x0001086a9ba8(&lStack_4d8);
    func_0x00010867bb84(alStack_3e0);
  }
  func_0x000107c288c8(auStack_218);
  return;
LAB_1086a1ca8:
  lVar6 = lVar9;
  lVar8 = lStack_4d0;
  if (lVar9 != lStack_4d0) {
    FUN_1086ae74c(lVar9,lStack_4d0,LZCOUNT((lStack_4d0 - lVar9) / 0xc0) << 1 ^ 0x7e,1);
    lVar8 = lStack_4d0;
  }
  for (; lVar6 != lVar8; lVar6 = lVar6 + 0xc0) {
    ppuVar1 = &PTR_PTR_113284418;
    if (*(undefined ***)(lVar6 + 0x48) != (undefined **)0x0) {
      ppuVar1 = *(undefined ***)(lVar6 + 0x48);
    }
    FUN_1086e981c(ppuVar1,lVar7);
  }
  if (lVar9 != lStack_4d0) {
    FUN_1086af198(lStack_4d0,lStack_4d0,lVar9);
    FUN_1086a9c00(&lStack_4d8);
  }
LAB_1086a1d28:
  func_0x000107c316d0(auStack_28);
  puVar4 = auStack_218;
  FUN_1086a1f74(puVar4,lVar7,param_3,auStack_520);
  if (((ulong)puVar4 & 1) != 0) {
    puVar5 = &uStack_300;
    func_0x000100c5494c(puVar5,lVar7 + 0x18);
    plVar3 = alStack_3e0;
    if (puVar5 != (undefined8 *)0x0) {
      plVar3 = alStack_500;
    }
    FUN_10867b1ac(plVar3,lVar7 + 0x18);
  }
LAB_1086a1d6c:
  lVar7 = lVar7 + 0x1a8;
  goto LAB_1086a1c20;
}



/* Entry: 1086a1ec8; end: 1086a1f73;  */

void FUN_1086a1ec8(undefined8 param_1)

{
  undefined1 auStack_370 [208];
  undefined1 auStack_2a0 [208];
  undefined1 auStack_1d0 [208];
  undefined1 auStack_100 [208];
  
  FUN_1086adefc(auStack_1d0);
  FUN_1086adec4(auStack_100,auStack_1d0);
  func_0x0001086b0dd0();
  FUN_1086adec4(auStack_2a0,auStack_370);
  FUN_1086ae034(param_1,auStack_100,auStack_2a0);
  func_0x0001086b0cc4();
  func_0x0001086b072c(auStack_370);
  func_0x0001086b081c();
  func_0x0001086b072c(auStack_1d0);
  return;
}



/* Entry: 1086a1f74; end: 1086a233b;  */

uint FUN_1086a1f74(long param_1,long param_2,long param_3,ulong param_4)

{
  byte bVar1;
  uint uVar2;
  long *plVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  undefined1 uVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  uint uVar15;
  long extraout_x8;
  undefined **ppuVar16;
  long extraout_x8_00;
  long *extraout_x8_01;
  undefined8 *extraout_x8_02;
  long extraout_x8_03;
  uint uVar17;
  long *extraout_x10;
  undefined8 *extraout_x10_00;
  undefined8 *puVar18;
  undefined *puVar19;
  long lVar20;
  uint uVar21;
  undefined *puVar22;
  long lVar23;
  undefined1 auStack_c8 [40];
  ulong uStack_a0;
  long lStack_80;
  byte bStack_68;
  
  if ((*(byte *)(param_1 + 0x28) >> 1 & 1) == 0) {
    return 0;
  }
  ppuVar4 = &PTR_PTR_113286e08;
  if (*(undefined ***)(param_2 + 0x80) != (undefined **)0x0) {
    ppuVar4 = *(undefined ***)(param_2 + 0x80);
  }
  if (*(int *)(ppuVar4 + 10) != 0) {
    return 0;
  }
  if (*(char *)(param_2 + 0x28) != '\x01') {
    return 0;
  }
  ppuVar16 = &PTR_PTR_11327a978;
  if (*(undefined ***)(param_1 + 0xc0) != (undefined **)0x0) {
    ppuVar16 = *(undefined ***)(param_1 + 0xc0);
  }
  uVar10 = *(char *)(ppuVar16 + 3) == '\x01' && *(int *)(param_2 + 0xb8) == 4;
  if ((bool)uVar10) {
    return 0;
  }
  lVar20 = param_1;
  func_0x0001086b0908(*(undefined8 *)(param_2 + 0x68));
  uVar12 = (uint)lVar20;
  func_0x0001086b0e0c();
  puVar19 = ppuVar4[0x24];
  func_0x0001086b0768(*(undefined8 *)(param_1 + 0x88));
  if ((bool)uVar10) {
    ppuVar16 = *(undefined ***)(extraout_x8 + 0x10);
  }
  else {
    ppuVar16 = &PTR_PTR_11326be60;
  }
  uVar17 = (uint)*(byte *)((long)ppuVar16 + 0x21);
  iVar13 = *(int *)(param_2 + 0xb8);
  puVar22 = ppuVar4[0x25];
  puVar5 = ppuVar16[2];
  puVar6 = ppuVar16[3];
  lVar20 = param_1 + 0x18;
  uVar14 = param_4;
  FUN_1086a28c8(auStack_c8);
  if ((puVar19 != (undefined *)0x0) && ((long)puVar5 * 1000 <= param_3 - (long)puVar19))
  goto LAB_1086a22e0;
  iVar7 = *(int *)(param_1 + 0x38);
  uVar15 = 0;
  if (puVar22 != (undefined *)0x0) {
    uVar15 = (uint)((long)puVar6 * 1000 <= param_3 - (long)puVar22);
  }
  uVar2 = 0;
  if (0 < (long)puVar6) {
    uVar2 = uVar15;
  }
  func_0x0001086b0b54();
  if (*(int *)(extraout_x8_00 + 200) == 0) {
    bVar8 = false;
  }
  else {
    uVar14 = extraout_x8_00 + 0xc0;
    FUN_1086a2990();
    bVar8 = *(long *)(*(long *)(lVar20 + -8) + 0x28) == 0;
  }
  uVar15 = (uint)uVar14;
  bVar9 = *(char *)(param_2 + 0x138) == '\x01';
  bVar11 = bVar9 && *(long *)(param_2 + 0x130) == 1;
  if (bVar9 && 0 < *(long *)(param_2 + 0x130)) {
    func_0x0001086b0594(param_1 + 0x30);
    uVar15 = (uint)uVar14;
    plVar3 = extraout_x8_01;
    if (!bVar11) {
      plVar3 = extraout_x10;
    }
    for (lVar20 = (long)*(int *)(param_1 + 0x38) << 3; lVar20 != 0; lVar20 = lVar20 + -8) {
      lVar23 = *plVar3;
      func_0x0001086b0908(*(undefined8 *)(lVar23 + 0x18));
      func_0x0001086b0dc0();
      uVar15 = (uint)uVar14;
      if (((uVar14 & 1) == 0) && (*(ulong *)(param_2 + 0x130) <= *(ulong *)(lVar23 + 0x50)))
      goto LAB_1086a2164;
      plVar3 = plVar3 + 1;
    }
    bVar8 = true;
  }
LAB_1086a2164:
  uVar21 = 0;
  uVar10 = iVar13 == 4;
  switch(iVar13) {
  case 0:
    if ((uVar17 & uVar12) == 1) {
      func_0x0001086b0500();
      FUN_1086a29b4();
      if (bVar8 == false && ((uVar15 ^ 0xffffffff) & 1) == 0) goto LAB_1086a22e0;
    }
    uVar12 = uVar12 ^ 1;
    if (iVar7 == 1) {
      uVar12 = 1;
    }
    if (((uVar17 == 0) || (uVar12 == 0)) || ((bStack_68 & 1) == 0)) {
      if (uVar2 != 0) goto LAB_1086a22e0;
    }
    else {
      bVar1 = 0;
      if (uStack_a0 < *(ulong *)(param_2 + 0x20)) {
        bVar1 = *(byte *)(param_2 + 0x28);
      }
      if (uVar2 != 0 || (((bVar1 | bVar8) ^ 0xff) & 1) != 0) goto LAB_1086a22e0;
    }
code_r0x0001086a2318:
    uVar21 = 0;
    break;
  case 1:
    if (uVar2 == 0) {
      if ((uVar17 & uVar12) == 1) {
        func_0x0001086b0500();
        FUN_1086a29b4();
        if (bVar8 == false && ((uVar15 ^ 0xffffffff) & 1) == 0) goto LAB_1086a22e0;
      }
      uVar12 = uVar12 ^ 1;
      if (iVar7 == 1) {
        uVar12 = 1;
      }
      if ((((uVar17 != 0) && (uVar12 != 0)) && ((bStack_68 & 1) != 0)) &&
         (*(char *)(param_2 + 0x28) != '\x01' || *(ulong *)(param_2 + 0x20) <= uStack_a0)) {
        func_0x0001086b0b54();
        bVar11 = *(int *)(extraout_x8_03 + 0x38) == 0;
code_r0x0001086a22d8:
        if (!bVar11 && bVar8 == false) goto LAB_1086a22e0;
      }
      goto code_r0x0001086a2318;
    }
    goto LAB_1086a22e0;
  case 2:
    uVar14 = (ulong)uVar2;
    if (((uVar12 | uVar2 ^ 0xffffffff) & 1) == 0) {
      FUN_1086a2a3c(param_4,param_2 + 0x50);
      uVar14 = param_4;
    }
    if ((uVar14 & 1) == 0) {
      func_0x0001086b0b54();
      func_0x0001086b0594();
      puVar18 = extraout_x8_02;
      if (!(bool)uVar10) {
        puVar18 = extraout_x10_00;
      }
      lVar20 = (long)*(int *)(extraout_x8_02 + 1) << 3;
      do {
        if (lVar20 == 0) goto code_r0x0001086a2240;
        iVar13 = (int)*puVar18;
        func_0x0001086b0dc0();
        lVar20 = lVar20 + -8;
        puVar18 = puVar18 + 1;
      } while (iVar13 == 0);
      if (bVar8 != false) {
code_r0x0001086a2240:
        if ((*(char *)(param_2 + 0x28) != '\x01') || ((bStack_68 & 1) == 0))
        goto code_r0x0001086a2318;
        bVar11 = lStack_80 < *(long *)(param_2 + 0x20);
        goto code_r0x0001086a22d8;
      }
    }
LAB_1086a22e0:
    uVar21 = 1;
    break;
  case 4:
    ppuVar4 = &PTR_PTR_11327a978;
    if (*(undefined ***)(param_1 + 0xc0) != (undefined **)0x0) {
      ppuVar4 = *(undefined ***)(param_1 + 0xc0);
    }
    uVar21 = (*(byte *)(ppuVar4 + 3) ^ 1) & uVar2;
  }
  FUN_1086a9d34(auStack_c8);
  return uVar21;
}



/* Entry: 1086a233c; end: 1086a238f;  */

void FUN_1086a233c(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [24];
  
  func_0x0001086b03e8();
  FUN_108861c90(auStack_48);
  func_0x0001086b0588(param_1,param_2,auStack_48);
  FUN_1086a1530();
  func_0x0001086b0664();
  return;
}



/* Entry: 1086a2390; end: 1086a269f;  */

void FUN_1086a2390(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  uint uVar3;
  undefined1 uVar4;
  long *plVar5;
  undefined **ppuVar6;
  undefined1 *puVar7;
  undefined8 *extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong uVar8;
  code *extraout_x8_02;
  undefined **extraout_x9;
  ulong extraout_x9_00;
  undefined **extraout_x9_01;
  ulong uVar9;
  undefined8 *unaff_x21;
  undefined *puVar10;
  int iVar11;
  undefined **ppuVar12;
  ulong uVar13;
  long lVar14;
  undefined **ppuVar15;
  long alStack_578 [54];
  byte bStack_3c8;
  long lStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  byte bStack_210;
  undefined1 auStack_208 [448];
  undefined1 auStack_48 [32];
  undefined1 auStack_28 [40];
  
  func_0x0001086b0888();
  func_0x0001086b0468();
  extraout_x8[1] = 0;
  *extraout_x8 = 0;
  extraout_x8[3] = 0;
  extraout_x8[2] = 0;
  *(undefined4 *)(extraout_x8 + 4) = 0x3f800000;
  func_0x000107c29ee4(auStack_48,param_3);
  lStack_3c0 = 0;
  uStack_3b8 = 0;
  uStack_3b0 = 0;
  FUN_108860924(auStack_208,*unaff_x21,param_4,&lStack_3c0);
  func_0x000107c288bc(&lStack_3c0,auStack_208);
  func_0x0001086b0a88(alStack_578);
LAB_1086a2408:
  if ((((bStack_210 & 1) == 0) && ((bStack_3c8 & 1) == 0)) || (lStack_3c0 == alStack_578[0])) {
    func_0x0001086b0384(alStack_578);
    func_0x0001086b0384(&lStack_3c0);
    func_0x000107c28948(auStack_208);
    func_0x000107c2a2e0(auStack_48);
    return;
  }
  plVar5 = &lStack_3c0;
  func_0x000107c288c0();
  uVar4 = (undefined **)plVar5[0xd] == (undefined **)0x0;
  ppuVar6 = &PTR_PTR_11326cb58;
  if (!(bool)uVar4) {
    ppuVar6 = (undefined **)plVar5[0xd];
  }
  func_0x000107c287e8(ppuVar6,auStack_48);
  if (((int)ppuVar6 == 0) || (*(int *)((long)plVar5 + 0xbc) != 0)) {
    func_0x0001086b0548();
    ppuVar6 = ppuVar6 + 3;
    func_0x0001086b06a8();
    func_0x0001086b0548();
    ppuVar6 = ppuVar6 + 6;
    func_0x0001086b06a8();
    func_0x0001086b0548();
    ppuVar6 = ppuVar6 + 9;
    func_0x0001086b06a8();
    func_0x0001086b0548();
    ppuVar6 = ppuVar6 + 0xc;
    func_0x0001086b06a8();
    func_0x0001086b0548();
    ppuVar6 = ppuVar6 + 0xf;
    func_0x0001086b06a8();
    func_0x0001086b0548();
    ppuVar6 = ppuVar6 + 0x12;
    func_0x0001086b06a8();
    func_0x0001086b0548();
    iVar11 = *(int *)(ppuVar6 + 0x1f);
    if (iVar11 != 0) {
      ppuVar1 = ppuVar6 + 0x1e;
      func_0x000107c324c0(*ppuVar1);
      ppuVar15 = ppuVar1;
      if (!(bool)uVar4) {
        ppuVar15 = extraout_x9;
      }
      func_0x000107c29ee4(auStack_28);
      ppuVar2 = ppuVar15 + iVar11;
      for (lVar14 = (long)iVar11 << 3; ppuVar12 = ppuVar2, lVar14 != 0; lVar14 = lVar14 + -8) {
        puVar7 = auStack_28;
        FUN_1086af374(puVar7,*(undefined8 *)(*ppuVar15 + 0x18));
        ppuVar12 = ppuVar15;
        if ((int)puVar7 != 0) goto LAB_1086a2500;
        ppuVar15 = ppuVar15 + 1;
      }
      goto LAB_1086a2564;
    }
    goto LAB_1086a25e4;
  }
  FUN_10867b1ac(extraout_x8,plVar5 + 3);
  goto LAB_1086a25f4;
LAB_1086a2500:
  while (ppuVar15 = ppuVar15 + 1, ppuVar15 != ppuVar2) {
    puVar7 = auStack_28;
    FUN_1086af374(puVar7,*(undefined8 *)(*ppuVar15 + 0x18));
    if (((ulong)puVar7 & 1) == 0) {
      puVar10 = *ppuVar15;
      if (*ppuVar12 != puVar10) {
        uVar9 = *(ulong *)(*ppuVar12 + 8);
        if ((uVar9 & 1) != 0) {
          func_0x0001086b04a8();
          uVar9 = extraout_x8_00;
        }
        uVar8 = *(ulong *)(puVar10 + 8);
        if ((uVar8 & 1) != 0) {
          func_0x0001086b049c();
          uVar9 = extraout_x8_01;
          uVar8 = extraout_x9_00;
        }
        if (uVar9 == uVar8) {
          FUN_108921ecc();
        }
        else {
          FUN_108921e9c();
        }
      }
      ppuVar12 = ppuVar12 + 1;
    }
  }
  uVar4 = 1;
LAB_1086a2564:
  func_0x000107c2a2e0(auStack_28);
  func_0x000107c324c0(ppuVar6[0x1e]);
  ppuVar15 = ppuVar1;
  if (!(bool)uVar4) {
    ppuVar15 = extraout_x9_01;
  }
  if (ppuVar15 + *(int *)(ppuVar6 + 0x1f) != ppuVar12) {
    uVar13 = (ulong)((long)ppuVar12 - (long)ppuVar15) >> 3;
    iVar11 = (int)uVar13;
    uVar3 = (int)(((long)ppuVar12 - (long)ppuVar15) + 8U >> 3) - iVar11;
    ppuVar15 = ppuVar15 + iVar11;
    puVar10 = ppuVar6[0x20];
    uVar8 = (ulong)(uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU));
    uVar9 = uVar8 << 3;
    while (uVar8 != 0) {
      if ((puVar10 == (undefined *)0x0) && (*ppuVar15 != (undefined *)0x0)) {
        func_0x0001086b075c();
      }
      ppuVar15 = ppuVar15 + 1;
      uVar9 = uVar9 - 8;
      uVar8 = uVar9;
    }
    if (0 < (int)uVar3) {
      func_0x00010b4d370c(ppuVar1,uVar13,uVar3);
    }
  }
LAB_1086a25e4:
  func_0x0001086b045c(*unaff_x21);
  (*extraout_x8_02)();
LAB_1086a25f4:
  func_0x000107c28980(&lStack_3c0);
  goto LAB_1086a2408;
}



/* Entry: 1086a26a0; end: 1086a2753;  */

ulong * FUN_1086a26a0(ulong *param_1)

{
  ulong *puVar1;
  undefined1 in_ZR;
  long extraout_x8;
  ulong *extraout_x8_00;
  long extraout_x8_01;
  ulong *extraout_x10;
  long unaff_x20;
  ulong *puVar2;
  long lVar3;
  ulong *puVar4;
  
  if ((int)param_1[1] == 0) {
    return param_1;
  }
  func_0x0001086b0594();
  puVar4 = param_1;
  if (!(bool)in_ZR) {
    puVar4 = extraout_x10;
  }
  puVar1 = puVar4 + extraout_x8;
  for (lVar3 = extraout_x8 << 3; puVar2 = puVar1, lVar3 != 0; lVar3 = lVar3 + -8) {
    func_0x0001086b0d60();
    puVar2 = puVar4;
    if ((int)param_1 != 0) goto LAB_1086a2700;
    puVar4 = puVar4 + 1;
  }
LAB_1086a2728:
  func_0x000107c3243c();
  if (extraout_x8_00 == puVar2) {
    return param_1;
  }
  func_0x000107c324ec();
  func_0x000107c324c0(*param_1);
  func_0x0001086b09a4();
  FUN_1086af2c8();
  func_0x0001086b006c();
  return (ulong *)(extraout_x8_01 + ((unaff_x20 << 0x1d) >> 0x1d));
LAB_1086a2700:
  while (puVar4 = puVar4 + 1, puVar4 != puVar1) {
    func_0x0001086b0d60();
    if (((ulong)param_1 & 1) == 0) {
      param_1 = (ulong *)*puVar2;
      func_0x000107c287d0(param_1,*puVar4);
      puVar2 = puVar2 + 1;
    }
  }
  goto LAB_1086a2728;
}



/* Entry: 1086a2754; end: 1086a2763;  */

void FUN_1086a2754(long param_1)

{
  ulong uVar1;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 8;
  if (*(long *)(param_1 + 0x30) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001086b039c();
    }
    func_0x000107c28fa0();
    *(ulong *)(param_1 + 0x30) = uVar1;
  }
  return;
}



/* Entry: 1086a2764; end: 1086a281b;  */

void FUN_1086a2764(long param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  undefined **ppuVar1;
  int iVar2;
  ulong uVar4;
  long unaff_x21;
  long lVar3;
  
  func_0x0001086b0178();
  lVar3 = param_1;
  func_0x0001086b035c(*(undefined8 *)(param_2 + 0x68));
  iVar2 = (int)lVar3;
  func_0x0001086b0e0c();
  if (((param_5 & 1) == 0) && (iVar2 != 0)) {
    return;
  }
  ppuVar1 = &PTR_PTR_113280c30;
  if (*(undefined ***)(unaff_x21 + 0x78) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(unaff_x21 + 0x78);
  }
  if (*(int *)(ppuVar1 + 7) == 0) {
    lVar3 = param_1;
    func_0x000107c28db0();
    if ((int)lVar3 == 0) {
      return;
    }
    ppuVar1 = &PTR_PTR_113280c30;
    if (*(undefined ***)(unaff_x21 + 0x78) != (undefined **)0x0) {
      ppuVar1 = *(undefined ***)(unaff_x21 + 0x78);
    }
    if (*(int *)(ppuVar1 + 0x15) != 0x15 && *(int *)(ppuVar1 + 0x15) != 0) {
      return;
    }
  }
  uVar4 = param_1 + 0x18;
  FUN_1086a281c(uVar4,unaff_x21 + 0x50);
  if ((uVar4 & 1) == 0) {
    func_0x0001086b07c8();
    FUN_1086a1f74();
  }
  return;
}



/* Entry: 1086a281c; end: 1086a28c7;  */

ulong FUN_1086a281c(undefined8 param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  long extraout_x8;
  int unaff_w19;
  long unaff_x21;
  long lVar4;
  
  func_0x0001086b04cc();
  uVar3 = (ulong)*(uint *)(param_2 + 0x68);
  if ((*(byte *)(param_2 + 0x10) >> 2 & 1) == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(int *)(*(long *)(unaff_x21 + 0x28) + 0xa8) == 0;
  }
  func_0x000108842b30(uVar3,bVar1);
  if ((int)uVar3 == 0) {
    func_0x0001086b066c(*(undefined8 *)(unaff_x21 + 0x30));
    func_0x0001086b0594();
    lVar4 = (long)*(int *)(extraout_x8 + 8) << 3;
    do {
      uVar3 = (ulong)(lVar4 != 0);
      if (lVar4 == 0) {
        return 0;
      }
      iVar2 = unaff_w19;
      func_0x000107c287e8();
      lVar4 = lVar4 + -8;
    } while (iVar2 == 0);
  }
  else {
    func_0x0001086b0314();
    FUN_1086af390();
  }
  return uVar3;
}



/* Entry: 1086a28c8; end: 1086a298f;  */

void FUN_1086a28c8(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined1 in_ZR;
  ulong uVar3;
  undefined1 *puVar4;
  undefined1 *extraout_x8;
  ulong extraout_x8_00;
  undefined8 *extraout_x9;
  undefined8 *extraout_x9_00;
  long unaff_x20;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  func_0x0001086b03e8();
  puVar5 = (undefined8 *)(param_2 + 0x18);
  func_0x000107c324c0(*puVar5);
  puVar1 = puVar5;
  if (!(bool)in_ZR) {
    puVar1 = extraout_x9;
  }
  iVar2 = *(int *)(param_2 + 0x20);
  while (puVar6 = puVar1 + iVar2, ((long)iVar2 & 0x1fffffffffffffffU) != 0) {
    func_0x0001086b033c();
    uVar3 = 0;
    if (!(bool)in_ZR) {
      uVar3 = extraout_x8_00;
    }
    func_0x000107c287e8();
    puVar6 = puVar1;
    if ((uVar3 & 1) != 0) break;
    func_0x0001086b0f0c();
  }
  func_0x000107c324c0(*(undefined8 *)(unaff_x20 + 0x18));
  if (!(bool)in_ZR) {
    puVar5 = extraout_x9_00;
  }
  if (puVar6 != puVar5 + *(int *)(unaff_x20 + 0x20)) {
    puVar4 = extraout_x8;
    FUN_1086aaad0(extraout_x8,*puVar6);
    puVar4[0x60] = 1;
    return;
  }
  *extraout_x8 = 0;
  extraout_x8[0x60] = 0;
  return;
}



/* Entry: 1086a2990; end: 1086a29b3;  */

void FUN_1086a2990(undefined8 *param_1)

{
  func_0x000107c324c0(*param_1);
  return;
}



/* Entry: 1086a29b4; end: 1086a2a3b;  */

bool FUN_1086a29b4(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 in_ZR;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  long *extraout_x9;
  long lVar5;
  ulong unaff_x23;
  long lVar6;
  
  plVar3 = (long *)(param_2 + 0x30);
  func_0x000107c324c0(*plVar3);
  plVar1 = plVar3;
  if (!(bool)in_ZR) {
    plVar1 = extraout_x9;
  }
  lVar5 = plVar3[1];
  func_0x0001086b0998();
  for (lVar5 = (long)(int)lVar5 << 3; lVar5 != 0; lVar5 = lVar5 + -8) {
    lVar6 = *plVar1;
    uVar4 = *(ulong *)(lVar6 + 0x18);
    uVar2 = unaff_x23;
    if (uVar4 != 0) {
      uVar2 = uVar4;
    }
    func_0x000107c287e8(uVar2,param_3);
    if (((uVar2 & 1) == 0) &&
       (*(char *)(param_1 + 0x28) != '\x01' ||
        *(ulong *)(param_1 + 0x20) <= *(ulong *)(lVar6 + 0x28))) break;
    plVar1 = plVar1 + 1;
  }
  return lVar5 != 0;
}



/* Entry: 1086a2a3c; end: 1086a2a67;  */

void FUN_1086a2a3c(void)

{
  long unaff_x19;
  
  func_0x000107c32468();
  func_0x000107c32494(*(undefined8 *)(unaff_x19 + 0x18));
  FUN_1086a30cc();
  func_0x000107c3243c();
  func_0x000107c325a0();
  return;
}



/* Entry: 1086a2a68; end: 1086a2b33;  */

uint FUN_1086a2a68(ulong param_1,long param_2)

{
  long lVar1;
  undefined1 in_ZR;
  bool bVar2;
  uint uVar3;
  long extraout_x8;
  long extraout_x8_00;
  undefined **ppuVar4;
  long extraout_x8_01;
  long extraout_x9;
  long extraout_x9_00;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001086b0418();
  func_0x0001086b066c(*(undefined8 *)(param_2 + 0x80));
  lVar1 = extraout_x9;
  if (!(bool)in_ZR) {
    lVar1 = extraout_x8;
  }
  func_0x0001086b0768(*(undefined8 *)(param_1 + 0x88));
  if ((bool)in_ZR) {
    ppuVar4 = *(undefined ***)(extraout_x8_00 + 0x10);
  }
  else {
    ppuVar4 = &PTR_PTR_11326be60;
  }
  if (*(char *)((long)ppuVar4 + 0x21) == '\x01' && *(int *)(unaff_x20 + 0xb8) == 1) {
    func_0x0001086b035c(*(undefined8 *)(unaff_x20 + 0x68));
    func_0x0001086b0e0c();
    if (((param_1 & 1) == 0) && (*(int *)(lVar1 + 0x38) != 1)) {
      bVar2 = *(char *)(unaff_x20 + 0x114) == '\x01';
      if (bVar2) {
        if (*(uint *)(unaff_x20 + 0x110) < 4) {
          uVar3 = 4 >> (ulong)(*(uint *)(unaff_x20 + 0x110) & 0x1f);
          goto LAB_1086a2ad8;
        }
      }
      else {
        func_0x000107c32588(*(undefined8 *)(unaff_x20 + 0x78));
        lVar1 = extraout_x9_00;
        if (!bVar2) {
          lVar1 = extraout_x8_01;
        }
        if ((*(int *)(lVar1 + 0xa8) != 4) && (*(long *)(unaff_x20 + 0x18) <= unaff_x19)) {
          uVar3 = 1;
          goto LAB_1086a2ad8;
        }
      }
    }
  }
  uVar3 = 0;
LAB_1086a2ad8:
  return uVar3 & 1;
}



/* Entry: 1086a2b34; end: 1086a2c3f;  */

void FUN_1086a2b34(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 in_ZR;
  long extraout_x8;
  undefined8 uVar4;
  long extraout_x9;
  
  func_0x0001086b066c(*(undefined8 *)(param_4 + 0x30));
  lVar1 = extraout_x9;
  if (!(bool)in_ZR) {
    lVar1 = extraout_x8;
  }
  uVar2 = *(undefined8 *)(lVar1 + 0x120);
  uVar3 = *(undefined8 *)(lVar1 + 0x128);
  func_0x000107c27994(param_1);
  uVar4 = *(undefined8 *)(param_4 + 0x60);
  *(undefined8 *)(param_1 + 0x18) = param_2;
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  *(undefined1 *)(param_1 + 0x28) = 1;
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_4 + 0x70);
  *(undefined1 *)(param_1 + 0x38) = 1;
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  func_0x000107c287dc(param_1 + 0x50,param_4);
  func_0x000107c278b8(param_1 + 200,&DAT_10f4bdfd4);
  *(undefined8 *)(param_1 + 0xe0) = uVar2;
  *(undefined8 *)(param_1 + 0xe8) = uVar3;
  *(undefined1 *)(param_1 + 0xf0) = 0;
  *(undefined1 *)(param_1 + 0x108) = 0;
  *(undefined1 *)(param_1 + 0x110) = 0;
  *(undefined1 *)(param_1 + 0x114) = 0;
  *(undefined1 *)(param_1 + 0x118) = 0;
  *(undefined1 *)(param_1 + 0x120) = 0;
  *(undefined1 *)(param_1 + 0x128) = 0;
  *(undefined1 *)(param_1 + 300) = 0;
  *(undefined1 *)(param_1 + 0x130) = 0;
  *(undefined1 *)(param_1 + 0x138) = 0;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(undefined1 *)(param_1 + 0x144) = 0;
  *(undefined1 *)(param_1 + 0x148) = 0;
  *(undefined1 *)(param_1 + 0x150) = 0;
  *(undefined1 *)(param_1 + 0x168) = 0;
  *(undefined1 *)(param_1 + 0x170) = 0;
  *(undefined1 *)(param_1 + 0x174) = 0;
  *(undefined1 *)(param_1 + 0x178) = 0;
  *(undefined1 *)(param_1 + 0x17c) = 0;
  *(undefined1 *)(param_1 + 0x180) = 0;
  *(undefined1 *)(param_1 + 0x188) = 0;
  *(undefined1 *)(param_1 + 0x1a0) = 0;
  FUN_10886e2e0(param_1);
  return;
}



/* Entry: 1086a2c40; end: 1086a2e07;  */

void FUN_1086a2c40(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined1 in_ZR;
  int iVar2;
  ulong uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x9;
  long *plVar5;
  undefined1 auStack_190 [40];
  undefined1 auStack_168 [40];
  undefined1 auStack_140 [40];
  undefined1 auStack_118 [200];
  undefined **ppuStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000107c32588(*(undefined8 *)(param_1 + 0x28));
  lVar1 = extraout_x9;
  if (!(bool)in_ZR) {
    lVar1 = extraout_x8;
  }
  if (*(int *)(lVar1 + 0xa8) == 0x17) {
    FUN_108653db8();
    ppuStack_50 = &PTR_DAT_110a825f8;
    uStack_48 = 0;
    uStack_38 = 0;
    func_0x0001086b0eb0(*(undefined8 *)(param_1 + 0x60));
    uVar3 = 0;
    func_0x000107c30344();
    if ((uVar3 & 1) != 0) {
      if (uStack_38._4_4_ == 0x10) {
        func_0x0001086b0eb0(*(undefined8 *)(lStack_40 + 0x10));
        func_0x000107c30344(param_1);
      }
      else {
        FUN_1086a2e08(auStack_118);
        func_0x0001086b0eb0(*(undefined8 *)(param_1 + 0x60));
        iVar2 = (int)auStack_118;
        func_0x000107c30344();
        plVar5 = (long *)*param_2;
        if (iVar2 == 0) {
          if (plVar5 != (long *)0x0) {
            func_0x0001086b08ac();
            func_0x0001086b0bb0();
            puVar4 = auStack_168;
            FUN_1086a2e10(puVar4,0x220100);
            func_0x000107c2884c(auStack_190,puVar4);
            (**(code **)(*plVar5 + 0x50))(plVar5,auStack_190);
            func_0x0001086b0824();
            func_0x0001086b0d50();
          }
        }
        else {
          if (plVar5 != (long *)0x0) {
            func_0x0001086b08ac();
            func_0x0001086b0bb0();
            puVar4 = auStack_168;
            FUN_1086a2e10(puVar4,0x2200ff);
            func_0x000107c2884c(auStack_140,puVar4);
            (**(code **)(*plVar5 + 0x50))(plVar5,auStack_140);
            func_0x0001086b0cf0();
            func_0x0001086b0d50();
          }
          func_0x00010890d3ac(param_1,auStack_118);
        }
        func_0x000107c2a500(auStack_118);
      }
    }
    FUN_1088bf4ec(&ppuStack_50);
  }
  return;
}



/* Entry: 1086a2e08; end: 1086a2e0f;  */

undefined8 * FUN_1086a2e08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a92270;
  param_1[1] = 0;
  func_0x000100685158();
  return param_1;
}



/* Entry: 1086a2e10; end: 1086a2e5b;  */

undefined8 FUN_1086a2e10(undefined8 param_1,undefined8 param_2)

{
  func_0x0001086b0538(param_1,PTR_DAT_113268cc8);
  func_0x0001086b0474((uint)param_2 & 0x1ff);
  func_0x0001086b07dc();
  func_0x000107c32448();
  return param_2;
}



/* Entry: 1086a2e5c; end: 1086a30ab;  */

void FUN_1086a2e5c(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *extraout_x8;
  long extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 *extraout_x9;
  undefined8 *extraout_x9_00;
  long unaff_x20;
  long unaff_x21;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
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
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined1 auStack_70 [32];
  
  uVar3 = *(char *)(param_2 + 0x101) == '\x01';
  if ((bool)uVar3) {
    func_0x000107c31338();
    func_0x000107c278b8(&uStack_d8,&UNK_10f4b0a1c);
    uVar4 = 3;
    func_0x00010bd3f128(&uStack_f0);
    func_0x000107c316c4();
    uStack_c0 = CONCAT44(uStack_c0._4_4_,0xe);
    uStack_b8 = 0;
    uStack_a8 = uStack_d0;
    uStack_b0 = uStack_d8;
    uStack_a0 = uStack_c8;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_90 = uStack_e8;
    uStack_98 = uStack_f0;
    func_0x0001086b0f60(uStack_e0);
    uStack_78 = 0;
    uStack_80 = uVar4;
    func_0x00010bcc46f8(param_2,&uStack_c0);
    func_0x00010786e114(&uStack_c0);
    func_0x0001086b0354();
    func_0x0001086b03f4();
    func_0x0001086b067c();
  }
  else {
    func_0x000107c32538();
    puVar7 = (undefined8 *)(param_3 + 0x18);
    func_0x000107c324c0(*puVar7);
    for (lVar8 = (long)*(int *)(param_3 + 0x20) << 3; lVar8 != 0; lVar8 = lVar8 + -8) {
      FUN_1086a9d54(unaff_x20 + 0x18);
      func_0x0001088f65f0();
    }
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_a0 = CONCAT44(uStack_a0._4_4_,0x3f800000);
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 4) = 0x3f800000;
    func_0x0001086af4f8(&uStack_c0,(long)*(int *)(unaff_x21 + 0x20));
    func_0x0001086af4f8(param_1,(long)*(int *)(unaff_x21 + 0x20));
    func_0x000107c324c0(*(undefined8 *)(unaff_x21 + 0x18));
    puVar6 = puVar7;
    if (!(bool)uVar3) {
      puVar6 = extraout_x9;
    }
    iVar2 = *(int *)(unaff_x21 + 0x20);
    func_0x0001086b0998();
    for (lVar8 = (long)iVar2 << 3; lVar8 != 0; lVar8 = lVar8 + -8) {
      func_0x000107c324e8(*puVar6);
      puVar1 = puVar7;
      if (!(bool)uVar3) {
        puVar1 = extraout_x8;
      }
      FUN_10865ecd8(auStack_70,puVar1);
      FUN_1086a9d60(&uStack_c0,auStack_70);
      func_0x000107c2a2e0(auStack_70);
      puVar6 = puVar6 + 1;
    }
    puVar6 = (undefined8 *)(unaff_x20 + 0x30);
    func_0x000107c324c0(*puVar6);
    if (!(bool)uVar3) {
      puVar6 = extraout_x9_00;
    }
    while( true ) {
      func_0x0001086b0274();
      uVar3 = puVar6 == (undefined8 *)(extraout_x8_00 + (long)*(int *)(unaff_x20 + 0x38) * 8);
      if ((bool)uVar3) break;
      func_0x000107c324e8(*puVar6);
      puVar1 = puVar7;
      if (!(bool)uVar3) {
        puVar1 = extraout_x8_01;
      }
      puVar5 = &uStack_c0;
      FUN_1086af50c(puVar5,puVar1);
      if (puVar5 == (undefined8 *)0x0) {
        puVar6 = puVar6 + 1;
      }
      else {
        func_0x000107c324e8(*puVar6);
        puVar1 = puVar7;
        if (!(bool)uVar3) {
          puVar1 = extraout_x8_02;
        }
        puVar6 = param_1;
        FUN_1086a30ac(param_1,puVar1);
        func_0x0001086b08dc();
        FUN_1086a30c4();
      }
    }
    FUN_1086af46c(&uStack_c0);
  }
  return;
}



/* Entry: 1086a30ac; end: 1086a30c3;  */

void FUN_1086a30ac(void)

{
  FUN_1086af5dc();
  return;
}



/* Entry: 1086a30c4; end: 1086a30cb;  */

long FUN_1086a30c4(undefined8 *param_1,long param_2)

{
  long extraout_x8;
  long unaff_x20;
  
  func_0x000107c324c0(*param_1,param_1,param_2,param_2 + 8);
  func_0x0001086b09a4();
  FUN_1086af804();
  func_0x0001086b006c();
  return extraout_x8 + ((unaff_x20 << 0x1d) >> 0x1d);
}



/* Entry: 1086a30cc; end: 1086a30e7;  */

void FUN_1086a30cc(void)

{
  FUN_1086aa1a4();
  return;
}



/* Entry: 1086a30e8; end: 1086a313f;  */

void FUN_1086a30e8(void)

{
  long unaff_x19;
  
  func_0x000107c32468();
  func_0x000107c32494(*(undefined8 *)(unaff_x19 + 0x60));
  func_0x000107c28f0c();
  func_0x000107c3243c();
  func_0x000107c325a0();
  return;
}



/* Entry: 1086a3140; end: 1086a317b;  */

bool FUN_1086a3140(long param_1,long param_2)

{
  if ((((*(byte *)(param_1 + 0x10) & 1) != 0) && ((*(byte *)(param_2 + 0x10) >> 3 & 1) != 0)) &&
     ((*(byte *)(*(long *)(param_2 + 0x30) + 0x10) >> 2 & 1) != 0)) {
    return *(uint *)(*(long *)(*(long *)(param_2 + 0x30) + 0x118) + 0x24) <
           *(uint *)(*(long *)(param_1 + 0x18) + 0x24);
  }
  return false;
}



/* Entry: 1086a317c; end: 1086a32c7;  */

bool FUN_1086a317c(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  undefined8 *puVar5;
  long *extraout_x9;
  long *extraout_x9_00;
  undefined8 *extraout_x10;
  undefined8 *extraout_x10_00;
  long *unaff_x19;
  long *unaff_x20;
  long lVar6;
  undefined8 *puStack_80;
  long lStack_78;
  undefined1 auStack_70 [48];
  
  uVar2 = *(int *)(param_1 + 1) == *(int *)(param_2 + 1);
  if (!(bool)uVar2) {
    return false;
  }
  func_0x000107c324b0();
  func_0x0001086b0594();
  if (!(bool)uVar2) {
    param_1 = extraout_x10;
  }
  func_0x0001086b0594();
  if (!(bool)uVar2) {
    param_2 = extraout_x10_00;
  }
  lVar6 = extraout_x8 << 3;
  while( true ) {
    if (lVar6 == 0) {
      return true;
    }
    uVar3 = *param_1;
    func_0x000107c287e8(uVar3,*param_2);
    if ((int)uVar3 == 0) break;
    lVar6 = lVar6 + -8;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  func_0x0001086b0f24();
  func_0x000107c324c0(*unaff_x20);
  plVar1 = unaff_x20;
  if (!(bool)uVar2) {
    plVar1 = extraout_x9;
  }
  for (lVar6 = (long)(int)unaff_x20[1] << 3; lVar6 != 0; lVar6 = lVar6 + -8) {
    puVar5 = (undefined8 *)(*(ulong *)(*plVar1 + 0x10) & 0xfffffffffffffffc);
    lStack_78 = (long)*(char *)((long)puVar5 + 0x17);
    puStack_80 = puVar5;
    if (lStack_78 < 0) {
      puStack_80 = (undefined8 *)*puVar5;
      lStack_78 = puVar5[1];
    }
    FUN_1086a32c8(auStack_70,&puStack_80);
    plVar1 = plVar1 + 1;
  }
  func_0x000107c324c0(*unaff_x19);
  plVar1 = unaff_x19;
  if (!(bool)uVar2) {
    plVar1 = extraout_x9_00;
  }
  lVar6 = (long)(int)unaff_x19[1] * 8;
  do {
    if (lVar6 == 0) break;
    puVar5 = (undefined8 *)(*(ulong *)(*plVar1 + 0x10) & 0xfffffffffffffffc);
    lStack_78 = (long)*(char *)((long)puVar5 + 0x17);
    puStack_80 = puVar5;
    if (lStack_78 < 0) {
      puStack_80 = (undefined8 *)*puVar5;
      lStack_78 = puVar5[1];
    }
    puVar4 = auStack_70;
    FUN_1086afb60(puVar4,&puStack_80);
    func_0x0001086b0f78();
  } while (puVar4 != (undefined1 *)0x0);
  FUN_1086af8b0(auStack_70);
  return lVar6 == 0;
}



/* Entry: 1086a32c8; end: 1086a32df;  */

void FUN_1086a32c8(void)

{
  FUN_1086af938();
  return;
}



/* Entry: 1086a32e0; end: 1086a3927;  */

void FUN_1086a32e0(long *param_1,undefined8 *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  bool bVar1;
  undefined ***pppuVar2;
  undefined1 *puVar3;
  undefined1 *extraout_x8;
  long extraout_x8_00;
  long extraout_x9;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined1 auStack_5a0 [24];
  undefined1 auStack_588 [24];
  undefined1 auStack_570 [40];
  undefined1 auStack_548 [24];
  undefined1 auStack_530 [24];
  undefined1 auStack_518 [24];
  undefined1 auStack_500 [40];
  undefined1 auStack_4d8 [24];
  undefined1 auStack_4c0 [24];
  undefined1 auStack_4a8 [24];
  undefined1 auStack_490 [40];
  undefined1 auStack_468 [24];
  undefined1 auStack_450 [24];
  undefined1 auStack_438 [24];
  undefined1 auStack_420 [40];
  undefined1 auStack_3f8 [24];
  undefined1 auStack_3e0 [24];
  undefined1 auStack_3c8 [24];
  undefined1 auStack_3b0 [40];
  undefined **ppuStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined4 uStack_368;
  undefined1 uStack_1e0;
  undefined1 auStack_1d8 [24];
  undefined1 auStack_1c0 [8];
  long lStack_1b8;
  byte bStack_1b0;
  long lStack_158;
  byte bStack_30;
  long lStack_18;
  long lStack_10;
  
  func_0x0001086b0888();
  lVar4 = *(long *)(param_4 + 0x70);
  lVar6 = *param_1;
  func_0x0001086b035c(*(undefined8 *)(param_4 + 0x18));
  func_0x000107c29ee0(&ppuStack_388);
  FUN_108862854(auStack_1d8,lVar6,param_3,lVar4,&ppuStack_388);
  FUN_10867b070(&lStack_18,auStack_1d8);
  func_0x000107c28948(auStack_1d8);
  func_0x000107c27914(&ppuStack_388);
  auStack_1d8[0] = 0;
  bStack_30 = 0;
  if ((lVar4 == 0) && (*(char *)(*param_1 + 0x10) != '\x01')) {
    for (lVar4 = lStack_18; lVar4 != lStack_10; lVar4 = lVar4 + 0x1a8) {
      if (*(char *)(lVar4 + 0x28) == '\x01' && *(long *)(lVar4 + 0x20) == *(long *)(param_4 + 0x60))
      {
        FUN_1086a3928(auStack_1d8);
        break;
      }
    }
  }
  else {
    bVar1 = lStack_18 == lStack_10;
    if (bVar1) {
      ppuStack_388 = (undefined **)((ulong)ppuStack_388 & 0xffffffffffffff00);
    }
    else {
      func_0x000107c28a9c(&ppuStack_388);
    }
    uStack_1e0 = !bVar1;
    func_0x000107c2894c(auStack_1d8,&ppuStack_388);
    func_0x0001086b0e2c();
  }
  if ((bStack_30 & 1) == 0) {
    ppuStack_388 = (undefined **)((ulong)ppuStack_388 & 0xffffffffffffff00);
    uStack_1e0 = 0;
    *extraout_x8 = 0;
    FUN_10867be0c(extraout_x8 + 8,&ppuStack_388);
    func_0x0001086b0e2c();
  }
  else {
    if (1 < (ulong)((lStack_10 - lStack_18) / 0x1a8)) {
      plVar5 = (long *)*param_2;
      uStack_378 = 0;
      uStack_370 = 0;
      uStack_380 = 0;
      ppuStack_388 = &PTR_FUN_110a609a8;
      uStack_368 = 0xd5;
      func_0x0001086b0c1c();
      func_0x000107c278b8(auStack_3c8);
      func_0x0001086b07e4(auStack_3e0);
      pppuVar2 = &ppuStack_388;
      func_0x000107c28820(pppuVar2,auStack_3c8,auStack_3e0);
      func_0x000107c278b8(auStack_3f8,&UNK_10f4b0a6b);
      func_0x0001086b0c10();
      func_0x000107c28818(pppuVar2,auStack_3f8);
      func_0x000107c2884c(auStack_3b0,pppuVar2);
      (**(code **)(*plVar5 + 0x50))(plVar5,auStack_3b0);
      func_0x000107c2882c(auStack_3b0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_3f8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_3e0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_3c8);
      func_0x0001086b06f8();
    }
    FUN_10867b354(param_6,auStack_1c0);
    if (param_6 == 0) {
      if ((bStack_1b0 & 1) == 0) {
        func_0x0001086affe4();
        func_0x0001086b0c1c();
        func_0x000107c278b8(auStack_4a8);
        func_0x0001086b07e4(auStack_4c0);
        func_0x000107c28820(&ppuStack_388,auStack_4a8,auStack_4c0);
        func_0x0001086b0a70();
        func_0x0001086b0700();
        puVar3 = auStack_4d8;
        func_0x000107c278b8(puVar3);
        func_0x0001086b0c10();
        func_0x0001086b0980();
        func_0x000107c2884c(auStack_490,puVar3);
        func_0x0001086b0fbc();
        func_0x0001086b0878();
        func_0x000107c2882c(auStack_490);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_4d8);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_4c0);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_4a8);
        func_0x0001086b06f8();
        *extraout_x8 = 0;
        func_0x0001086b02cc();
      }
      else {
        bVar1 = *(long *)(param_4 + 0x60) == lStack_1b8;
        if (*(long *)(param_4 + 0x60) < lStack_1b8) {
          func_0x0001086affe4();
          func_0x0001086b0c1c();
          func_0x000107c278b8(auStack_518);
          func_0x0001086b07e4(auStack_530);
          func_0x000107c28820(&ppuStack_388,auStack_518,auStack_530);
          func_0x0001086b0a70();
          func_0x0001086b0700();
          puVar3 = auStack_548;
          func_0x000107c278b8(puVar3);
          func_0x0001086b0c10();
          func_0x0001086b0980();
          func_0x000107c2884c(auStack_500,puVar3);
          func_0x0001086b0fbc();
          func_0x0001086b0878();
          func_0x000107c2882c(auStack_500);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_548);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_530);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_518);
          func_0x0001086b06f8();
          *extraout_x8 = 0;
          func_0x0001086b02cc();
        }
        else {
          if (bVar1) {
            func_0x0001086b066c(*(undefined8 *)(param_4 + 0x30));
            lVar4 = extraout_x9;
            if (!bVar1) {
              lVar4 = extraout_x8_00;
            }
            lVar6 = extraout_x9;
            if (lStack_158 != 0) {
              lVar6 = lStack_158;
            }
            if (*(ulong *)(lVar6 + 0x130) < *(ulong *)(lVar4 + 0x130)) {
              *extraout_x8 = 0;
              func_0x0001086b02cc();
              goto LAB_1086a3548;
            }
          }
          func_0x0001086affe4();
          func_0x0001086b0c1c();
          func_0x000107c278b8(auStack_588);
          func_0x0001086b07e4(auStack_5a0);
          pppuVar2 = &ppuStack_388;
          func_0x000107c28820(pppuVar2,auStack_588,auStack_5a0);
          func_0x0001086b0a70();
          func_0x0001086b0700();
          func_0x0001086b0538();
          func_0x0001086b0c10();
          func_0x0001086b0980();
          func_0x000107c2884c(auStack_570,pppuVar2);
          func_0x0001086b0fbc();
          func_0x0001086b0878();
          func_0x0001086b0cf0();
          func_0x0001086b034c();
          func_0x0001086b0528();
          func_0x0001086b0cbc();
          func_0x0001086b06f8();
          *extraout_x8 = 1;
          func_0x0001086b02cc();
        }
      }
    }
    else {
      func_0x0001086affe4();
      func_0x0001086b0c1c();
      func_0x000107c278b8(auStack_438);
      func_0x0001086b07e4(auStack_450);
      func_0x000107c28820(&ppuStack_388,auStack_438,auStack_450);
      func_0x0001086b0a70();
      func_0x0001086b0700();
      puVar3 = auStack_468;
      func_0x000107c278b8(puVar3);
      func_0x0001086b0c10();
      func_0x0001086b0980();
      func_0x000107c2884c(auStack_420,puVar3);
      func_0x0001086b0fbc();
      func_0x0001086b0878();
      func_0x000107c2882c(auStack_420);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_468);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_450);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_438);
      func_0x0001086b06f8();
      *extraout_x8 = 0;
      func_0x0001086b02cc();
    }
  }
LAB_1086a3548:
  func_0x000107c288dc(auStack_1d8);
  func_0x00010867b9fc(&lStack_18);
  return;
}



/* Entry: 1086a3928; end: 1086a395b;  */

long FUN_1086a3928(long param_1)

{
  if (*(char *)(param_1 + 0x1a8) == '\x01') {
    FUN_1086aa1e4();
  }
  else {
    FUN_10867be58();
  }
  return param_1;
}



/* Entry: 1086a395c; end: 1086a39ab;  */

undefined8 FUN_1086a395c(undefined8 param_1,undefined8 param_2)

{
  func_0x0001086b0538(param_1,PTR_DAT_113268e98);
  func_0x0001086b0474((uint)param_2 & 0x207);
  func_0x0001086b07dc();
  func_0x000107c32448();
  return param_2;
}



/* Entry: 1086a39ac; end: 1086a39cf;  */

long FUN_1086a39ac(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lStack_40;
  long lStack_38;
  
  if ((*(int *)(param_1 + 0x48) == 6) &&
     ((*(byte *)(*(long *)(param_1 + 0x40) + 0x10) >> 1 & 1) != 0)) {
    lVar4 = *(long *)(*(long *)(param_1 + 0x40) + 0x20);
    plVar2 = &lStack_40;
    plVar3 = &lStack_40;
    lStack_40 = param_2;
    lStack_38 = lVar4;
    func_0x0001006933dc();
    lVar1 = lVar4;
    func_0x0001006933dc();
    lVar5 = param_2;
    func_0x000100693428(&lStack_40);
    func_0x000100693428(&lStack_40);
    func_0x000100693448(lVar4,lVar1 + param_2,plVar2,(undefined1 *)((long)plVar3 + lVar5));
    return lVar4;
  }
  return 0;
}



/* Entry: 1086a39d0; end: 1086a3b07;  */

undefined8 FUN_1086a39d0(long param_1,long param_2,undefined8 param_3,long *param_4)

{
  undefined1 in_ZR;
  undefined **ppuVar1;
  undefined8 *extraout_x8;
  undefined **extraout_x8_00;
  long extraout_x8_01;
  undefined8 *extraout_x10;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [64];
  
  func_0x0001086b0594();
  puVar3 = extraout_x8;
  if (!(bool)in_ZR) {
    puVar3 = extraout_x10;
  }
  lVar4 = (long)*(int *)(extraout_x8 + 1) << 3;
  do {
    if (lVar4 == 0) {
      if (param_2 <= *(long *)(param_1 + 0x158)) {
        return 0;
      }
      uVar2 = *(undefined8 *)(*param_4 + 0x18);
      func_0x0001086b0538();
      func_0x000107c31420(auStack_a0,uVar2,auStack_b8);
      func_0x0001086b034c();
      func_0x0001086b0c04();
      (**(code **)(extraout_x8_01 + 0xd0))();
      FUN_108868114(*param_4,param_1);
      func_0x000107c31428(auStack_a0);
      func_0x000107c31424(auStack_a0);
      return 1;
    }
    func_0x000107c324e8(*puVar3);
    ppuVar1 = &PTR_PTR_11326cb58;
    if (!(bool)in_ZR) {
      ppuVar1 = extraout_x8_00;
    }
    func_0x0001086b0db4();
    func_0x000107c287e8(ppuVar1,auStack_a0);
    func_0x0001086b0784();
    lVar4 = lVar4 + -8;
    puVar3 = puVar3 + 1;
  } while (((ulong)ppuVar1 & 1) == 0);
  return 0;
}



/* Entry: 1086a3b08; end: 1086a3c2f;  */

void FUN_1086a3b08(undefined8 param_1,undefined8 param_2,long *param_3,long param_4)

{
  undefined8 *unaff_x19;
  long *unaff_x20;
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [64];
  long lStack_48;
  long lStack_40;
  
  func_0x000107c324b0();
  param_3 = (long *)*param_3;
  (**(code **)(*param_3 + 0x18))();
  FUN_1088601a4(auStack_88,*unaff_x20,param_3 + param_4 * -450000000);
  func_0x000100852e2c(&lStack_48,auStack_88);
  func_0x000107c2900c(auStack_88);
  if (lStack_40 != lStack_48) {
    uVar1 = *(undefined8 *)(*unaff_x20 + 0x18);
    func_0x000107c278b8(auStack_a0,&UNK_10f4b0a99);
    func_0x000107c31420(auStack_88,uVar1,auStack_a0);
    func_0x0001086b0354();
    for (lVar2 = lStack_48; lVar2 != lStack_40; lVar2 = lVar2 + 0x18) {
      (**(code **)(*(long *)*unaff_x19 + 0xd0))((long *)*unaff_x19,lVar2,auStack_88);
      FUN_108868114(*unaff_x20,lVar2);
    }
    func_0x000107c31428(auStack_88);
    func_0x000107c31424(auStack_88);
  }
  func_0x000107c27a04(&lStack_48);
  return;
}



/* Entry: 1086a3c30; end: 1086a3cff;  */

ulong FUN_1086a3c30(long param_1)

{
  long *plVar1;
  undefined1 in_ZR;
  long *plVar2;
  long *extraout_x9;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  uVar3 = 0;
  plVar2 = (long *)(param_1 + 0x18);
  func_0x000107c324c0(*plVar2);
  plVar1 = plVar2;
  if (!(bool)in_ZR) {
    plVar1 = extraout_x9;
  }
  lVar4 = plVar2[1];
  func_0x0001086b0998();
  for (lVar4 = (long)(int)lVar4 << 3; lVar4 != 0; lVar4 = lVar4 + -8) {
    lVar5 = *plVar1;
    func_0x0001086b02a4();
    if ((((ulong)plVar2 & 1) == 0) && (uVar3 <= *(ulong *)(lVar5 + 0x28))) {
      uVar3 = *(ulong *)(lVar5 + 0x28);
    }
    plVar1 = plVar1 + 1;
  }
  return uVar3;
}



/* Entry: 1086a3d00; end: 1086a3dd7;  */

undefined1  [16] FUN_1086a3d00(ulong param_1)

{
  long *plVar1;
  int iVar2;
  undefined1 in_ZR;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *extraout_x9;
  long *extraout_x9_00;
  uint *unaff_x19;
  long unaff_x20;
  long *plVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  
  func_0x000107c324b0();
  plVar7 = (long *)(param_1 + 0x18);
  uVar3 = param_1;
  func_0x000107c324c0(*plVar7);
  plVar1 = plVar7;
  if (!(bool)in_ZR) {
    plVar1 = extraout_x9;
  }
  iVar2 = *(int *)(param_1 + 0x20);
  while (plVar6 = plVar1 + iVar2, ((long)iVar2 & 0x1fffffffffffffffU) != 0) {
    func_0x0001086b033c();
    func_0x0001086b0d60();
    plVar6 = plVar1;
    if ((uVar3 & 1) != 0) break;
    func_0x0001086b0f0c();
  }
  func_0x000107c324c0(*(undefined8 *)(unaff_x20 + 0x18));
  if (!(bool)in_ZR) {
    plVar7 = extraout_x9_00;
  }
  if (plVar6 == plVar7 + *(int *)(unaff_x20 + 0x20)) {
    uVar4 = 0;
    uVar5 = 0;
  }
  else if (*unaff_x19 < 4) {
    uVar4 = *(undefined8 *)(*plVar6 + *(long *)(&UNK_10df42a98 + (ulong)*unaff_x19 * 8));
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
    uVar4 = 0;
  }
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = uVar4;
  return auVar8;
}



/* Entry: 1086a3dd8; end: 1086a3e63;  */

undefined1  [16] FUN_1086a3dd8(undefined8 *param_1,ulong param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_208 [24];
  undefined1 auStack_1f0 [440];
  char cStack_38;
  
  FUN_1086a1148(auStack_208,*param_1,param_2,2);
  if (cStack_38 == '\x01') {
    puVar1 = auStack_1f0;
    func_0x0001086b07a4(puVar1);
    FUN_1086a3d00();
    uVar2 = (ulong)puVar1 & 0xffffffffffffff00;
    uVar3 = (ulong)puVar1 & 0xff;
    param_2 = param_2 & 0xff;
  }
  else {
    uVar2 = 0;
    param_2 = 0;
    uVar3 = 0;
  }
  func_0x000107c288c8(auStack_208);
  auVar4._0_8_ = uVar3 | uVar2;
  auVar4._8_8_ = param_2;
  return auVar4;
}



/* Entry: 1086a3e64; end: 1086a3f6b;  */

void FUN_1086a3e64(undefined8 *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 in_ZR;
  bool bVar2;
  undefined8 uVar3;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 *extraout_x9;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 unaff_x23;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_70 [32];
  
  if (*(int *)(param_2 + 0xf0) == 0) {
    puVar4 = (undefined8 *)(param_2 + 0x18);
    func_0x000107c324c0(*puVar4);
    if (!(bool)in_ZR) {
      puVar4 = extraout_x9;
    }
    iVar1 = *(int *)(param_2 + 0x20);
    func_0x000107c29ee4(auStack_70,param_3);
    func_0x0001086b0998();
    while (puVar5 = puVar4 + iVar1, ((long)iVar1 & 0x1fffffffffffffffU) != 0) {
      func_0x0001086b033c();
      uVar3 = unaff_x23;
      if (!(bool)in_ZR) {
        uVar3 = extraout_x8;
      }
      func_0x000107c287e8(uVar3,auStack_70);
      puVar5 = puVar4;
      if ((int)uVar3 == 0) break;
      func_0x0001086b0f0c();
    }
    func_0x0001086b0784();
    func_0x0001086b0274(*(undefined8 *)(param_2 + 0x18));
    bVar2 = puVar5 == (undefined8 *)(extraout_x8_00 + (long)*(int *)(param_2 + 0x20) * 8);
    if (!bVar2) {
      func_0x000107c324e8(*puVar5);
      if (!bVar2) {
        unaff_x23 = extraout_x8_01;
      }
      func_0x000107c29ee0(&uStack_90,unaff_x23);
      param_1[1] = uStack_88;
      *param_1 = uStack_90;
      param_1[2] = uStack_80;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_90 = 0;
      *(undefined1 *)(param_1 + 3) = 1;
      func_0x000107c27914(&uStack_90);
      return;
    }
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1086a3f6c; end: 1086a3fb3;  */

undefined8 FUN_1086a3f6c(long *param_1)

{
  long lVar1;
  undefined8 unaff_x19;
  long *unaff_x20;
  
  func_0x0001086b08b8();
  lVar1 = param_1[1] - *param_1;
  if (lVar1 == 0x30) {
    func_0x000107c28078();
    lVar1 = *unaff_x20;
  }
  func_0x00010054f8c8(lVar1);
  func_0x000100292164();
  return unaff_x19;
}



/* Entry: 1086a3fb4; end: 1086a4173;  */

void FUN_1086a3fb4(long *param_1,long param_2,undefined **param_3,uint param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  undefined1 uVar6;
  undefined **extraout_x8;
  long extraout_x8_00;
  long *extraout_x9;
  long *unaff_x19;
  long unaff_x20;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined1 auStack_80 [32];
  
  if ((*param_1 != param_1[1]) &&
     (uVar5 = (param_1[1] - *param_1) / 0x1a8, uVar6 = uVar5 == param_4, param_4 < uVar5)) {
    func_0x000107c324fc();
    plVar7 = (long *)(param_2 + 0x30);
    func_0x000107c324c0(*plVar7);
    if (!(bool)uVar6) {
      plVar7 = extraout_x9;
    }
    iVar4 = *(int *)(param_2 + 0x38);
    plVar1 = plVar7 + iVar4;
    func_0x000107c29ee4(auStack_80);
    for (lVar10 = (long)iVar4 << 3; plVar9 = plVar1, lVar10 != 0; lVar10 = lVar10 + -8) {
      func_0x000107c324e8(*plVar7);
      param_3 = &PTR_PTR_11326cb58;
      if (!(bool)uVar6) {
        param_3 = extraout_x8;
      }
      func_0x0001086b0a1c();
      plVar9 = plVar7;
      if (((ulong)param_3 & 1) != 0) break;
      plVar7 = plVar7 + 1;
    }
    func_0x000107c32500();
    func_0x0001086b0274(*(undefined8 *)(unaff_x20 + 0x30));
    if (plVar9 != (long *)(extraout_x8_00 + (long)*(int *)(unaff_x20 + 0x38) * 8)) {
      lVar8 = *unaff_x19;
      for (lVar10 = 0;
          (lVar2 = lVar8 + lVar10, lVar2 != unaff_x19[1] && (*(char *)(lVar2 + 0x28) == '\x01'));
          lVar10 = lVar10 + 0x1a8) {
        lVar3 = lVar8 + lVar10;
        func_0x0001086b0908(*(undefined8 *)(lVar3 + 0x68));
        func_0x0001086b033c();
        func_0x000107c287e8();
        if ((((ulong)param_3 & 1) == 0) &&
           (*(char *)(lVar2 + 0x28) == '\x01' &&
            *(ulong *)(*plVar9 + 0x28) < *(ulong *)(lVar3 + 0x20))) break;
        param_3 = &PTR_PTR_11326cb58;
        if (*(undefined ***)(lVar3 + 0x68) != (undefined **)0x0) {
          param_3 = *(undefined ***)(lVar3 + 0x68);
        }
        func_0x000107c324e8();
        func_0x000107c287e8();
        if ((int)param_3 != 0) {
          func_0x0001086b033c();
          func_0x0001086b0ac4();
          FUN_1086a29b4();
          if ((int)param_3 == 0) break;
        }
      }
      func_0x0001086b0500();
      FUN_1086a4174();
    }
  }
  return;
}



/* Entry: 1086a4174; end: 1086a41a7;  */

long FUN_1086a4174(undefined8 param_1,long param_2,long param_3)

{
  if (param_2 != param_3) {
    func_0x0001086b0624();
    FUN_1086aa448();
    FUN_10867ba70();
  }
  return param_2;
}



/* Entry: 1086a41a8; end: 1086a42f7;  */

void FUN_1086a41a8(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x19;
  undefined1 auStack_240 [8];
  long lStack_238;
  char cStack_230;
  undefined1 auStack_228 [24];
  undefined1 auStack_210 [240];
  int iStack_120;
  char cStack_58;
  
  if (*(uint *)(param_2 + 0x48) < 0x21 &&
      (1L << ((ulong)*(uint *)(param_2 + 0x48) & 0x3f) & 0x100100800U) != 0) {
    puVar2 = param_3;
    func_0x000107c324b0();
    FUN_1086a1148(auStack_228,*puVar2);
    FUN_1086dd1d8(auStack_210);
    if (cStack_58 == '\x01' && iStack_120 == 0) {
      FUN_1086a42f8(param_3,param_5,auStack_228);
    }
    iVar1 = *(int *)(unaff_x19 + 0x48);
    if (iVar1 == 0x20) {
      func_0x0001086b0c04();
      func_0x0001086b0cf8(*(undefined8 *)(extraout_x8_01 + 0x160));
    }
    else if (iVar1 == 0x14) {
      func_0x0001086b0c04();
      func_0x0001086b0cf8(*(undefined8 *)(extraout_x8_00 + 0x160));
      func_0x0001086aa530();
      *(undefined8 *)(unaff_x19 + 0x20) = 0;
    }
    else if (iVar1 == 0xb) {
      func_0x0001086b0c04();
      (**(code **)(extraout_x8 + 0x158))(auStack_240);
      if (cStack_230 == '\x01') {
        FUN_1086aa4a8();
        *(long *)(unaff_x19 + 0x20) = lStack_238 / 1000;
      }
    }
    func_0x000107c288c8(auStack_228);
  }
  return;
}



/* Entry: 1086a42f8; end: 1086a44bb;  */

void FUN_1086a42f8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [64];
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  func_0x000107c32464();
  FUN_108861274(auStack_e8,*param_1,param_3);
  FUN_1086a4a7c(&puStack_a8,auStack_e8);
  func_0x000107c29020(auStack_e8);
  uVar1 = *(undefined8 *)(*unaff_x21 + 0x18);
  func_0x0001086b0880();
  func_0x000107c31420(auStack_e8,uVar1,auStack_100);
  func_0x0001086b0528();
  FUN_108868220(*unaff_x21);
  *(undefined1 *)(unaff_x19 + 0x188) = 1;
  if (*(char *)(unaff_x19 + 0x180) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x180) = 0;
  }
  *(undefined8 *)(unaff_x19 + 0x158) = 0;
  FUN_10885ff98(*unaff_x21);
  func_0x000107c31428(auStack_e8);
  if (puStack_a8 != puStack_a0) {
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x000104be7444(&uStack_118,(long)puStack_a0 - (long)puStack_a8 >> 3);
    for (puVar2 = puStack_a8; puVar2 != puStack_a0; puVar2 = puVar2 + 1) {
      uVar1 = *puVar2;
      func_0x000107c27994(&uStack_70);
      uStack_80 = uStack_60;
      uStack_88 = uStack_68;
      uStack_90 = uStack_70;
      uStack_68 = 0;
      uStack_60 = 0;
      uStack_70 = 0;
      uStack_78 = uVar1;
      func_0x000107c27914();
      func_0x000104be7704(&uStack_118,&uStack_90);
      func_0x0001086b0640();
    }
    (**(code **)(*(long *)*unaff_x20 + 0x30))();
    func_0x000104be1274(&uStack_118);
  }
  func_0x000107c31424(auStack_e8);
  func_0x000107c27ae4(&puStack_a8);
  return;
}



/* Entry: 1086a44bc; end: 1086a4513;  */

void FUN_1086a44bc(undefined8 param_1,long param_2,undefined8 *param_3)

{
  undefined1 auStack_3f8 [984];
  
  if (*(int *)(param_2 + 0x48) == 0x10) {
    (**(code **)(*(long *)*param_3 + 0x30))(auStack_3f8,(long *)*param_3,param_1,param_2,0);
    func_0x000107c288cc(auStack_3f8);
  }
  return;
}



/* Entry: 1086a4514; end: 1086a4567;  */

void FUN_1086a4514(void)

{
  undefined8 *in_x3;
  undefined8 *in_x4;
  undefined8 *unaff_x20;
  
  func_0x0001086b0468();
  func_0x0001086b02f0(*in_x3);
  FUN_1088600d8(*unaff_x20);
                    /* WARNING: Could not recover jumptable at 0x0001086a4564. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*in_x4 + 0xd8))();
  return;
}



/* Entry: 1086a4568; end: 1086a4623;  */

void FUN_1086a4568(undefined8 *param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  uint uVar3;
  undefined1 in_ZR;
  long lVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined **ppuVar7;
  code *extraout_x8_01;
  undefined8 *unaff_x19;
  ulong uVar8;
  undefined1 auStack_298 [448];
  ulong uStack_d8;
  ulong uStack_d0;
  undefined1 auStack_80 [24];
  code *pcStack_68;
  undefined **ppuStack_60;
  
  puVar6 = auStack_80;
  func_0x0001086b0138();
  FUN_1086a4624(auStack_80);
  func_0x0001086b0a34();
  pcStack_68 = FUN_1086afca4;
  ppuStack_60 = &PTR_FUN_110a63730;
  FUN_1086a1530(*param_1,param_2,auStack_80,&pcStack_68);
  func_0x0001086b040c(ppuStack_60);
  func_0x0001086b0de8();
  func_0x0001086aff54(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001086b040c(ppuStack_60);
  func_0x000107c27a08();
  func_0x0001086b0de8();
  func_0x0001086b025c();
  uVar3 = *(uint *)(puVar6 + 0x10);
  ppuVar7 = *(undefined ***)(puVar6 + 0x28);
  extraout_x8_00[1] = 0;
  extraout_x8_00[2] = 0;
  *extraout_x8_00 = 0;
  if ((uVar3 >> 2 & 1) != 0) {
    ppuVar1 = &PTR_PTR_113288868;
    if (ppuVar7 != (undefined **)0x0) {
      ppuVar1 = ppuVar7;
    }
    puVar2 = ppuVar1[2];
    FUN_1088631dc(auStack_298,*unaff_x19);
    FUN_10867b070(&uStack_d8,auStack_298);
    func_0x0001086b09c0();
    for (uVar8 = uStack_d8; uVar8 != uStack_d0; uVar8 = uVar8 + 0x1a8) {
      lVar4 = uVar8 + 0x50;
      FUN_1086a2754();
      *(undefined **)(lVar4 + 0x128) = puVar2;
      *(undefined **)(uVar8 + 0xe8) = puVar2;
      func_0x0001086b045c(*unaff_x19);
      (*extraout_x8_01)();
      uVar5 = uVar8;
      func_0x000107c28e64();
      if ((uVar5 & 1) == 0) {
        func_0x0001086b0500();
        func_0x0001086aa5b8();
      }
    }
    func_0x00010867b9fc(&uStack_d8);
  }
  return;
}



/* Entry: 1086a4624; end: 1086a470b;  */

void FUN_1086a4624(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined **ppuVar6;
  code *extraout_x8;
  ulong uVar7;
  undefined1 auStack_218 [448];
  ulong uStack_58;
  ulong uStack_50;
  
  uVar3 = *(uint *)(param_4 + 0x10);
  ppuVar6 = *(undefined ***)(param_4 + 0x28);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  if ((uVar3 >> 2 & 1) != 0) {
    ppuVar1 = &PTR_PTR_113288868;
    if (ppuVar6 != (undefined **)0x0) {
      ppuVar1 = ppuVar6;
    }
    puVar2 = ppuVar1[2];
    FUN_1088631dc(auStack_218,*param_2,param_3,ppuVar1[3]);
    FUN_10867b070(&uStack_58,auStack_218);
    func_0x0001086b09c0();
    for (uVar7 = uStack_58; uVar7 != uStack_50; uVar7 = uVar7 + 0x1a8) {
      lVar4 = uVar7 + 0x50;
      FUN_1086a2754();
      *(undefined **)(lVar4 + 0x128) = puVar2;
      *(undefined **)(uVar7 + 0xe8) = puVar2;
      func_0x0001086b045c(*param_2);
      (*extraout_x8)();
      uVar5 = uVar7;
      func_0x000107c28e64();
      if ((uVar5 & 1) == 0) {
        func_0x0001086b0500();
        func_0x0001086aa5b8();
      }
    }
    func_0x00010867b9fc(&uStack_58);
  }
  return;
}



/* Entry: 1086a470c; end: 1086a47ab;  */

undefined8 FUN_1086a470c(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  
  func_0x000107c324fc();
  func_0x000107c28078(param_2,param_3);
  if ((param_2 & 1) == 0) {
    lVar2 = *unaff_x19;
    FUN_1086a47ac(lVar2,unaff_x19[1]);
    lVar1 = *unaff_x19;
    if (lVar1 != lVar2 || lVar1 == unaff_x19[1]) {
      if (unaff_x19[1] == lVar2) {
        FUN_1086a47c8();
        if (3 < (ulong)((unaff_x19[1] - *unaff_x19) / 0x18)) {
          FUN_1086a48c0();
        }
      }
      else {
        FUN_1086aa6c4(lVar1,lVar2,lVar2 + 0x18);
      }
      return 1;
    }
  }
  return 0;
}



/* Entry: 1086a47ac; end: 1086a47c7;  */

void FUN_1086a47ac(void)

{
  FUN_1086aa688();
  return;
}



/* Entry: 1086a47c8; end: 1086a48bf;  */

void FUN_1086a47c8(long param_1)

{
  long *plVar1;
  ulong unaff_x19;
  long *unaff_x21;
  undefined1 auStack_68 [40];
  
  func_0x000107c3254c();
  if (*(ulong *)(param_1 + 8) < *(ulong *)(param_1 + 0x10)) {
    if (unaff_x19 == *(ulong *)(param_1 + 8)) {
      func_0x0001086b0588();
      func_0x000107c28844();
    }
    else {
      func_0x0001086b08d0();
      FUN_1086aa798();
      func_0x000107c27cfc();
    }
  }
  else {
    plVar1 = unaff_x21;
    func_0x000107c27ac8();
    func_0x000107c27ab8(auStack_68,plVar1,(long)(unaff_x19 - *unaff_x21) / 0x18,
                        (ulong *)(param_1 + 0x10));
    FUN_1086aa7f4(auStack_68);
    FUN_1086aa8cc();
    func_0x0001086b02fc();
    func_0x000107c27ac0();
  }
  return;
}



/* Entry: 1086a48c0; end: 1086a48f3;  */

long FUN_1086a48c0(undefined8 param_1,long param_2,long param_3)

{
  if (param_2 != param_3) {
    func_0x0001086b0624();
    FUN_10867cbd8();
    func_0x000107c279c0();
  }
  return param_2;
}



/* Entry: 1086a48f4; end: 1086a498f;  */

long FUN_1086a48f4(long param_1,uint param_2)

{
  long lVar1;
  long unaff_x20;
  long unaff_x21;
  undefined1 auStack_48 [24];
  
  if (*(int *)(param_1 + 0x108) == 1) {
    func_0x0001086b04cc();
    func_0x000107c29e78();
    if ((0xe < param_2) || ((1 << (ulong)(param_2 & 0x1f) & 0x4041U) == 0)) {
      func_0x0001086b035c(*(undefined8 *)(unaff_x21 + 0x18));
      func_0x000107c29ee0(auStack_48);
      lVar1 = unaff_x20 + 400;
      FUN_1086a470c(lVar1,auStack_48);
      func_0x0001086b0518();
      return lVar1;
    }
  }
  return 0;
}



/* Entry: 1086a4990; end: 1086a49a7;  */

undefined8 FUN_1086a4990(long param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  
  if (*(int *)(param_1 + 0x108) != 1) {
    return 0;
  }
  func_0x000107c324fc(param_1 + 400);
  func_0x000107c28078(param_2,param_3);
  if ((param_2 & 1) == 0) {
    lVar2 = *unaff_x19;
    FUN_1086a47ac(lVar2,unaff_x19[1]);
    lVar1 = *unaff_x19;
    if (lVar1 != lVar2 || lVar1 == unaff_x19[1]) {
      if (unaff_x19[1] == lVar2) {
        FUN_1086a47c8();
        if (3 < (ulong)((unaff_x19[1] - *unaff_x19) / 0x18)) {
          FUN_1086a48c0();
        }
      }
      else {
        FUN_1086aa6c4(lVar1,lVar2,lVar2 + 0x18);
      }
      return 1;
    }
  }
  return 0;
}



/* Entry: 1086a49a8; end: 1086a4a3b;  */

undefined8 FUN_1086a49a8(long param_1,long param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((*(byte *)(param_2 + 0x10) >> 5 & 1) == 0) {
    return 0;
  }
  lVar3 = *(long *)(param_2 + 0x40);
  ppuVar1 = &PTR_PTR_11326c970;
  if (*(undefined ***)(param_1 + 0xa0) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_1 + 0xa0);
  }
  if ((((*(undefined **)(lVar3 + 0x28) == ppuVar1[5]) &&
       (*(int *)(lVar3 + 0x30) == *(int *)(ppuVar1 + 6))) &&
      (*(undefined **)(lVar3 + 0x38) == ppuVar1[7])) &&
     (*(int *)(lVar3 + 0x34) == *(int *)((long)ppuVar1 + 0x34))) {
    uVar2 = 0;
  }
  else {
    FUN_1086a4a3c(param_1 + 0x18);
    FUN_1088bf0ac();
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 1086a4a3c; end: 1086a4a4b;  */

void FUN_1086a4a3c(long param_1)

{
  ulong uVar1;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x10;
  if (*(long *)(param_1 + 0x88) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001086b039c();
    }
    func_0x000107c28fa8();
    *(ulong *)(param_1 + 0x88) = uVar1;
  }
  return;
}



/* Entry: 1086a4a4c; end: 1086a4a7b;  */

uint FUN_1086a4a4c(uint param_1)

{
  uint uVar1;
  
  func_0x000107c324b0();
  FUN_1086a48f4();
  uVar1 = param_1;
  func_0x0001086b0314();
  FUN_1086a49a8();
  return param_1 | uVar1;
}



/* Entry: 1086a4a7c; end: 1086a4b8f;  */

void FUN_1086a4a7c(undefined8 param_1)

{
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c29024(&uStack_50);
  uStack_28 = uStack_40;
  uStack_30 = uStack_48;
  uStack_38 = uStack_50;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_68 = 0;
  FUN_1086afd2c(param_1,&uStack_38,&uStack_68);
  return;
}



/* Entry: 1086a4b90; end: 1086a4c6b;  */

undefined4 FUN_1086a4b90(uint *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined4 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar4 = (param_2[1] - *param_2) / 0x18;
  uVar5 = (param_2[4] - param_2[3]) / 0x58;
  uVar6 = (param_2[7] - param_2[6]) / 0x18;
  lVar1 = uVar5 + uVar4 + uVar6;
  uVar2 = lVar1 + (param_2[10] - param_2[9] >> 2);
  if (uVar4 == uVar2) {
    if (uVar4 == param_1[1]) {
      return 0x9003b;
    }
    uVar3 = 0x9003c;
    if (uVar4 != *param_1) {
      if (uVar4 == param_1[2]) {
        return 0x90041;
      }
      if (uVar4 != param_1[2] + *param_1) {
        uVar3 = 0x9003f;
      }
      return uVar3;
    }
  }
  else {
    if (uVar5 == uVar2) {
      return 0x9003d;
    }
    if (uVar6 == uVar2) {
      return 0x9003e;
    }
    if (lVar1 == 0) {
      return 0x90042;
    }
    uVar3 = 0x9003f;
    if (param_2[4] != param_2[3]) {
      uVar3 = 0x90040;
    }
  }
  return uVar3;
}



/* Entry: 1086a4c6c; end: 1086a4cbf;  */

void FUN_1086a4c6c(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = 0;
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x1d0) {
    func_0x00010879d7e8(lVar2 + 0x18,&uStack_40);
  }
  FUN_1086a4b90(&uStack_40,param_2);
  return;
}



/* Entry: 1086a4cc0; end: 1086a505b;  */

void FUN_1086a4cc0(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  long *param_5,int param_6,long param_7)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  long extraout_x8;
  long lVar5;
  ulong in_stack_00000060;
  undefined8 in_stack_00000070;
  undefined1 in_stack_00000078;
  char in_stack_00000080;
  long in_stack_00000088;
  undefined1 auStack_228 [32];
  undefined **ppuStack_208;
  long lStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined8 uStack_1b4;
  undefined1 auStack_1a8 [8];
  ulong uStack_1a0;
  uint uStack_198;
  undefined1 auStack_190 [136];
  long lStack_108;
  uint uStack_b8;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined4 uStack_10;
  
  func_0x0001086b0888();
  ppuStack_90 = &PTR_DAT_110a8d418;
  uStack_88 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_18 = 0;
  uStack_20 = 0;
  uStack_10 = 0;
  func_0x000107c28dcc(auStack_1a8);
  lVar2 = param_5[1];
  for (lVar5 = *param_5; lVar5 != lVar2; lVar5 = lVar5 + 0x18) {
    ppuStack_208 = &PTR_FUN_110a8d288;
    lStack_200 = 0;
    uStack_1f0 = 0;
    uStack_1f8 = 0;
    uStack_1e0 = 0;
    uStack_1e8 = 0;
    uStack_1d0 = 0;
    uStack_1d8 = 0;
    uStack_1c0 = 0;
    uStack_1c8 = 0;
    uStack_1b4 = 0;
    uStack_1bc = 0;
    uStack_1b8 = 0;
    func_0x000107c29ee4(auStack_228,lVar5);
    FUN_1086a505c(&ppuStack_208);
    func_0x000107c287d0();
    func_0x000107c2a2e0(auStack_228);
    FUN_1086a9d54(auStack_190);
    func_0x0001088f65f0();
    func_0x000107c2a3ec(&ppuStack_208);
  }
  func_0x000107c29ee4(&ppuStack_208,param_4);
  func_0x0001086a506c(auStack_1a8);
  func_0x000107c287d0();
  func_0x0001086b0d30();
  FUN_1086aab40(auStack_1a8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
  uStack_b8 = (uint)(param_6 == 1);
  func_0x0001086a507c(auStack_1a8);
  FUN_1088f6b10();
  if ((param_6 == 0) && (in_stack_00000080 != '\0')) {
    FUN_1088413ec(&ppuStack_208);
    func_0x0001086a508c(auStack_1a8);
    FUN_1086a509c();
    func_0x000107c2a2b4(&ppuStack_208);
  }
  if (*(char *)(in_stack_00000088 + 0x18) == '\x01') {
    func_0x000107c29ee4(&ppuStack_208,in_stack_00000088);
    uStack_198 = uStack_198 | 0x80;
    if (lStack_108 == 0) {
      if ((uStack_1a0 & 1) != 0) {
        func_0x0001086b039c();
      }
      func_0x000107c287e0();
    }
    func_0x000107c287d0();
    func_0x0001086b0d30();
    uVar3 = (uint)*(byte *)(in_stack_00000088 + 0x18);
  }
  else {
    uVar3 = 0;
  }
  if (param_6 != 1) {
    uVar3 = 0;
  }
  uVar1 = 2;
  if (param_6 != 0) {
    uVar1 = uVar3;
  }
  func_0x0001086b0870(extraout_x8);
  func_0x000107c28dc8(extraout_x8 + 0x18,auStack_1a8);
  func_0x000107c278b8(extraout_x8 + 0x130,&DAT_10f4bdfe8);
  *(long *)(extraout_x8 + 0x148) = param_7;
  *(undefined1 *)(extraout_x8 + 0x150) = 1;
  *(undefined1 *)(extraout_x8 + 0x170) = 0;
  *(undefined1 *)(extraout_x8 + 0x178) = 0;
  *(undefined1 *)(extraout_x8 + 0x180) = 0;
  *(undefined8 *)(extraout_x8 + 0x158) = 0;
  *(undefined8 *)(extraout_x8 + 0x160) = 0;
  *(undefined1 *)(extraout_x8 + 0x168) = 0;
  *(undefined1 *)(extraout_x8 + 0x188) = 1;
  uVar4 = 7;
  if ((in_stack_00000060 & 0x100000000) != 0) {
    uVar4 = (undefined4)in_stack_00000060;
  }
  *(undefined4 *)(extraout_x8 + 0x18c) = uVar4;
  *(undefined8 *)(extraout_x8 + 0x198) = 0;
  *(undefined8 *)(extraout_x8 + 400) = 0;
  *(undefined8 *)(extraout_x8 + 0x1a8) = 0;
  *(undefined8 *)(extraout_x8 + 0x1a0) = 0;
  *(undefined8 *)(extraout_x8 + 0x1b0) = 0;
  *(undefined8 *)(extraout_x8 + 0x1b8) = in_stack_00000070;
  *(undefined1 *)(extraout_x8 + 0x1c0) = in_stack_00000078;
  *(uint *)(extraout_x8 + 0x1c8) = uVar1;
  *(undefined1 *)(extraout_x8 + 0x1cc) = 1;
  func_0x0001086b0870(&ppuStack_208);
  uStack_1f0 = in_stack_00000070;
  uStack_1e8 = CONCAT71(uStack_1e8._1_7_,in_stack_00000078);
  uStack_1e0._0_5_ = CONCAT14(1,uVar1);
  FUN_10885fef4(param_2,&ppuStack_208);
  func_0x000107c27914(&ppuStack_208);
  func_0x0001086b08d0();
  FUN_10885ff98();
  lStack_200 = param_7 * 1000;
  ppuStack_208 = (undefined **)0x2;
  uStack_1f8 = CONCAT71(uStack_1f8._1_7_,1);
  (**(code **)(*param_3 + 0xa8))(param_3,param_4,auStack_1a8,&ppuStack_208);
  func_0x000107c2a3a8(auStack_1a8);
  func_0x000107c2a3f8(&ppuStack_90);
  return;
}



/* Entry: 1086a505c; end: 1086a509b;  */

void FUN_1086a505c(long param_1)

{
  ulong uVar1;
  long unaff_x19;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  func_0x0001086b0c4c();
  if (param_1 == 0) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001086b039c();
    }
    func_0x000107c287e0();
    *(ulong *)(unaff_x19 + 0x18) = uVar1;
  }
  return;
}



/* Entry: 1086a509c; end: 1086a50f3;  */

void FUN_1086a509c(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar2;
  ulong extraout_x9;
  long unaff_x19;
  
  func_0x0001086b03a8();
  if (!(bool)in_ZR) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001086b04a8();
      uVar1 = extraout_x8;
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      func_0x0001086b049c();
      uVar1 = extraout_x8_00;
      uVar2 = extraout_x9;
    }
    if (uVar1 == uVar2) {
      FUN_1088bc510();
    }
    else {
      FUN_1088bc4d8();
    }
  }
  return;
}



/* Entry: 1086a50f4; end: 1086a515b;  */

void FUN_1086a50f4(void)

{
  undefined1 auStack_40 [24];
  undefined1 uStack_28;
  
  auStack_40[0] = 0;
  uStack_28 = 0;
  FUN_1086a4cc0();
  func_0x000107c279dc(auStack_40);
  return;
}



/* Entry: 1086a515c; end: 1086a52c7;  */

undefined1 * FUN_1086a515c(void)

{
  undefined1 uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 uVar4;
  long in_x6;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [32];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 uStack_70;
  undefined8 uStack_68;
  
  uVar4 = in_x5;
  func_0x0001086b0178();
  func_0x0001086b0188();
  uStack_68 = extraout_x8_00;
  func_0x000107c27994(auStack_88,uVar4);
  func_0x0001086b0aa8(auStack_a0,auStack_88);
  func_0x0001086b0ab0();
  uVar1 = *(char *)(in_x6 + 0x18) == '\x01';
  if (((bool)uVar1) && (lVar2 = in_x6, func_0x000107c2a620(in_x6,in_x5), (int)lVar2 != 0)) {
    func_0x000107c28840(auStack_a0,in_x6);
  }
  func_0x000107c279d4(auStack_c0,in_x4);
  func_0x000107c278b8(auStack_d8,&UNK_10f4b0ad4);
  auStack_88[0] = 0;
  uStack_70 = 0;
  FUN_1086a4cc0(extraout_x8);
  func_0x000107c279dc(auStack_88);
  FUN_1086b0cbc();
  puVar3 = auStack_c0;
  func_0x000107c279dc(puVar3);
  func_0x0001086b0638();
  func_0x0001086aff54(uStack_68);
  if ((bool)uVar1) {
    return puVar3;
  }
  ___stack_chk_fail();
  func_0x000107c279dc(auStack_88);
  FUN_1086b0cbc();
  puVar3 = auStack_c0;
  func_0x000107c279dc();
  func_0x0001086b0638();
  func_0x0001086b0254();
  return (undefined1 *)(ulong)(*(int *)(puVar3 + 0xf0) == 1);
}



/* Entry: 1086a52c8; end: 1086a52d3;  */

bool FUN_1086a52c8(long param_1)

{
  return *(int *)(param_1 + 0xf0) == 1;
}



/* Entry: 1086a52d4; end: 1086a5323;  */

uint FUN_1086a52d4(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 in_ZR;
  bool bVar3;
  long extraout_x8;
  undefined8 *extraout_x8_00;
  long extraout_x9;
  undefined8 *extraout_x10;
  uint unaff_w30;
  
  func_0x0001086b066c(*(undefined8 *)(param_1 + 0x30));
  lVar1 = extraout_x9;
  if (!(bool)in_ZR) {
    lVar1 = extraout_x8;
  }
  bVar3 = *(int *)(lVar1 + 0x20) == 1;
  if (bVar3) {
    func_0x0001086b0594();
    puVar2 = extraout_x8_00;
    if (!bVar3) {
      puVar2 = extraout_x10;
    }
    func_0x0001086b0d88(*puVar2);
    return unaff_w30 ^ 1;
  }
  return (uint)(1 < *(int *)(lVar1 + 0x20));
}



/* Entry: 1086a5324; end: 1086a53af;  */

void FUN_1086a5324(ulong param_1)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  FUN_1086a53b0();
  iVar2 = (int)uVar3;
  if ((uVar3 & 1) == 0) {
    func_0x0001086b0588();
    func_0x000107c28f30();
    if (iVar2 != 0) {
      if ((*(byte *)(param_1 + 0x10) >> 2 & 1) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(int *)(*(long *)(param_1 + 0x28) + 0xa8) == 0;
      }
      func_0x000108842b30(*(undefined4 *)(param_1 + 0x68),bVar1);
    }
  }
  return;
}



/* Entry: 1086a53b0; end: 1086a545f;  */

uint FUN_1086a53b0(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined1 in_ZR;
  bool bVar3;
  ulong uVar4;
  long extraout_x8;
  undefined8 *extraout_x8_00;
  long extraout_x9;
  long *extraout_x9_00;
  undefined8 *extraout_x10;
  long unaff_x20;
  long unaff_x21;
  long *plVar5;
  long lVar6;
  long lVar7;
  uint unaff_w30;
  
  func_0x0001086b04cc();
  uVar4 = (ulong)*(uint *)(param_1 + 0x68);
  if ((*(byte *)(unaff_x20 + 0x10) >> 2 & 1) == 0) {
    bVar3 = false;
  }
  else {
    in_ZR = *(int *)(*(long *)(unaff_x20 + 0x28) + 0xa8) == 0;
    bVar3 = (bool)in_ZR;
  }
  func_0x000108842b30(uVar4,bVar3);
  if ((int)uVar4 == 0) {
    func_0x0001086b0314();
    func_0x0001086b066c(*(undefined8 *)(uVar4 + 0x30));
    lVar6 = extraout_x9;
    if (!(bool)in_ZR) {
      lVar6 = extraout_x8;
    }
    bVar3 = *(int *)(lVar6 + 0x20) == 1;
    if (!bVar3) {
      return (uint)(1 < *(int *)(lVar6 + 0x20));
    }
    func_0x0001086b0594();
    puVar1 = extraout_x8_00;
    if (!bVar3) {
      puVar1 = extraout_x10;
    }
    func_0x0001086b0d88(*puVar1);
    return unaff_w30 ^ 1;
  }
  plVar5 = (long *)(unaff_x21 + 0x18);
  func_0x000107c324c0(*plVar5);
  if (!(bool)in_ZR) {
    plVar5 = extraout_x9_00;
  }
  iVar2 = *(int *)(unaff_x21 + 0x20);
  func_0x0001086b0998();
  for (lVar6 = (long)iVar2 << 3; lVar6 != 0; lVar6 = lVar6 + -8) {
    lVar7 = *plVar5;
    func_0x0001086b02a4();
    if (((uVar4 & 1) == 0) && (*(ulong *)(unaff_x20 + 0x60) <= *(ulong *)(lVar7 + 0x28))) break;
    plVar5 = plVar5 + 1;
  }
  return (uint)(lVar6 != 0);
}



/* Entry: 1086a5460; end: 1086a5593;  */

void FUN_1086a5460(undefined8 param_1,undefined8 *param_2,long *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *extraout_x8;
  long lVar3;
  undefined1 auStack_210 [344];
  long lStack_b8;
  byte bStack_a0;
  char cStack_40;
  undefined1 auStack_38 [48];
  byte bStack_8;
  
  func_0x0001086b0888();
  extraout_x8[0xe] = 0;
  extraout_x8[9] = 0;
  extraout_x8[8] = 0;
  extraout_x8[0xb] = 0;
  extraout_x8[10] = 0;
  extraout_x8[3] = 0;
  extraout_x8[2] = 0;
  extraout_x8[5] = 0;
  extraout_x8[4] = 0;
  extraout_x8[1] = 0;
  *extraout_x8 = 0;
  extraout_x8[0xd] = 0;
  extraout_x8[0xc] = 0;
  extraout_x8[7] = 0;
  extraout_x8[6] = 0;
  lVar1 = param_3[1];
  for (lVar3 = *param_3; lVar3 != lVar1; lVar3 = lVar3 + 0x18) {
    FUN_10885edd8(auStack_210,*param_2,lVar3);
    FUN_108663a10(auStack_38,auStack_210);
    FUN_108656820(auStack_210);
    func_0x0001086b0d68(auStack_210,*param_2,lVar3);
    puVar2 = extraout_x8;
    if (((((bStack_8 & 1) == 0) || (puVar2 = extraout_x8 + 3, cStack_40 != '\x01')) ||
        (puVar2 = extraout_x8 + 6, (bStack_a0 & 1) != 0)) ||
       (puVar2 = extraout_x8 + 9, lStack_b8 == 0)) {
      func_0x000107c28840(puVar2,lVar3);
    }
    else {
      FUN_1086a5594(extraout_x8 + 0xc,auStack_210);
    }
    func_0x000107c288c8(auStack_210);
    FUN_1086569a0(auStack_38);
  }
  return;
}



/* Entry: 1086a5594; end: 1086a55c7;  */

long FUN_1086a5594(long param_1)

{
  undefined1 in_CY;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001086b074c();
  if ((bool)in_CY) {
    FUN_1086aabf0();
  }
  else {
    FUN_1086aabc0();
    param_1 = unaff_x20 + 0x1d0;
  }
  *(long *)(unaff_x19 + 8) = param_1;
  return param_1 + -0x1d0;
}



/* Entry: 1086a55c8; end: 1086a5663;  */

byte FUN_1086a55c8(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined1 auStack_240 [464];
  byte bStack_70;
  undefined1 auStack_68 [48];
  byte bStack_38;
  
  func_0x000107c324b0();
  FUN_10885edd8(auStack_240,*param_1);
  FUN_108663a10(auStack_68,auStack_240);
  FUN_108656820(auStack_240);
  func_0x0001086b0d68(auStack_240,*unaff_x20);
  func_0x000107c288c8(auStack_240);
  FUN_1086569a0(auStack_68);
  return (bStack_38 & bStack_70 ^ 0xff) & 1;
}



/* Entry: 1086a5664; end: 1086a56db;  */

void FUN_1086a5664(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long extraout_x8;
  long lVar5;
  long extraout_x9;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c324b0();
  uVar1 = *(long *)(param_1 + 0x20) == 0;
  func_0x0001086aafbc(param_2);
  FUN_1086a56dc();
  func_0x0001086a56ec();
  FUN_1088b85b0();
  lVar2 = unaff_x19;
  func_0x0001086aafbc();
  *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c32514(*(undefined8 *)(unaff_x20 + 0x18));
  lVar2 = extraout_x9;
  if (!(bool)uVar1) {
    lVar2 = extraout_x8;
  }
  func_0x0001086a56fc();
  if (lVar2 == unaff_x19) {
    return;
  }
  FUN_1088bf358();
  uVar3 = *(ulong *)(lVar2 + 0x10) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar3 + 8);
  }
  if (lVar5 != 0) {
    uVar4 = *(ulong *)(unaff_x19 + 8);
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(unaff_x19 + 0x10,uVar3,uVar4);
  }
  if ((*(ulong *)(lVar2 + 8) & 1) != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1086a56dc; end: 1086a570b;  */

void FUN_1086a56dc(long param_1)

{
  ulong uVar1;
  long unaff_x19;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  func_0x0001086b0c4c();
  if (param_1 == 0) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001086b039c();
    }
    func_0x0001086ab074();
    *(ulong *)(unaff_x19 + 0x18) = uVar1;
  }
  return;
}



/* Entry: 1086a570c; end: 1086a5b87;  */

void FUN_1086a570c(undefined1 *param_1,ulong *param_2,ulong *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong *puVar1;
  undefined1 in_ZR;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined1 *puVar8;
  ulong *puVar9;
  undefined **extraout_x8;
  ulong *extraout_x8_00;
  undefined **extraout_x8_01;
  long extraout_x8_02;
  ulong *extraout_x8_03;
  ulong *extraout_x9;
  ulong *extraout_x9_00;
  ulong extraout_x9_01;
  ulong *extraout_x9_02;
  ulong *extraout_x9_03;
  ulong extraout_x9_04;
  ulong extraout_x10;
  ulong *extraout_x10_00;
  ulong extraout_x10_01;
  long lVar10;
  ulong *puVar11;
  long lVar12;
  ulong uVar13;
  ulong *puVar14;
  undefined1 auStack_118 [32];
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [32];
  ulong auStack_c0 [4];
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  ulong *puStack_60;
  ulong *puStack_58;
  
  ppuStack_a0 = &PTR_FUN_110a96270;
  uStack_98 = 0;
  lStack_88 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_90 = 1;
  lVar5 = 0;
  func_0x0001086ab144();
  *(undefined8 *)(lVar5 + 0x28) = param_6;
  lStack_88 = lVar5;
  func_0x000107c29ee4(auStack_c0,param_4);
  FUN_1086a5b88(lVar5);
  puVar9 = auStack_c0;
  func_0x000107c287d0();
  func_0x000107c2a2e0(auStack_c0);
  ppuVar6 = &PTR_PTR_11326cb58;
  if ((int)param_2[1] == 0) {
    if ((int)param_3[1] != 0) {
      func_0x0001086b0e74();
      func_0x000107c324c0(*param_3);
      puVar1 = param_3;
      if (!(bool)in_ZR) {
        puVar1 = extraout_x9_02;
      }
      FUN_10865ecd8(auStack_e0,param_5);
      do {
        puVar11 = puVar9;
        uVar3 = puVar11 == puVar1;
        puVar14 = puVar1;
        if ((bool)uVar3) break;
        func_0x000107c324e8(puVar11[-1]);
        ppuVar7 = ppuVar6;
        if (!(bool)uVar3) {
          ppuVar7 = extraout_x8_01;
        }
        func_0x000107c287e8(ppuVar7,auStack_e0);
        puVar9 = puVar11 + -1;
        puVar14 = puVar11;
      } while (((ulong)ppuVar7 & 1) != 0);
      func_0x000107c2a2e0(auStack_e0);
      func_0x000107c324c0(*param_3);
      if (!(bool)uVar3) {
        param_3 = extraout_x9_03;
      }
      if (puVar14 != param_3) {
        func_0x0001086b0dc8(puVar14[-1]);
        goto LAB_1086a5ad0;
      }
    }
LAB_1086a59e4:
    uVar3 = 0;
    *param_1 = 0;
  }
  else {
    if ((int)param_3[1] == 0) {
      func_0x0001086b0b80();
      func_0x0001086ab1b4(lVar5);
      FUN_1086a5b98();
      func_0x0001086b0948();
      func_0x000107c324c0(*param_2);
      func_0x0001086a56fc(lVar5);
      func_0x0001088bf408();
    }
    else {
      func_0x0001086b0e74();
      uVar13 = *(ulong *)(puVar9[-1] + 0x28);
      FUN_1086a2990(param_2);
      uVar3 = uVar13 == *(ulong *)(puVar9[-1] + 0x28);
      if (*(ulong *)(puVar9[-1] + 0x28) < uVar13) {
        func_0x0001086b0e74();
        func_0x000107c324e8(puVar9[-1]);
        if (!(bool)uVar3) {
          ppuVar6 = extraout_x8;
        }
        func_0x000107c287e8(ppuVar6,param_5);
        if (((ulong)ppuVar6 & 1) == 0) {
          func_0x0001086b0dc8(puVar9[-1]);
        }
        else {
          lStack_f8 = 0;
          lStack_f0 = 0;
          uStack_e8 = 0;
          func_0x000107c324c0(*param_3);
          puStack_58 = param_3;
          if (!(bool)uVar3) {
            puStack_58 = extraout_x9;
          }
          puVar9 = puStack_58 + (int)param_3[1];
          func_0x000107c324c0(*param_2);
          puStack_60 = param_2;
          if (!(bool)uVar3) {
            puStack_60 = extraout_x9_00;
          }
          puVar1 = puStack_60 + (int)param_2[1];
          plStack_70 = &lStack_f8;
          uStack_68 = 0;
          while (puVar14 = puStack_58, puStack_58 != puVar9) {
            bVar2 = puVar1 <= puStack_60;
            bVar4 = puStack_60 == puVar1;
            if (bVar4) break;
            func_0x0001086b0e7c();
            if (!bVar2 || bVar4) {
              if (extraout_x10 <= extraout_x9_01) {
                puStack_58 = puVar14 + 1;
              }
              lVar5 = -0x50;
              puVar14 = extraout_x8_00;
            }
            else {
              FUN_1086ab23c(&plStack_70);
              lVar5 = -0x48;
            }
            *(ulong **)(&stack0xfffffffffffffff0 + lVar5) = puVar14 + 1;
          }
          FUN_1086ab72c(auStack_c0,puStack_58,puVar9,plStack_70,uStack_68);
          lVar12 = lStack_f0;
          lVar5 = lStack_f8;
          puVar8 = auStack_118;
          FUN_10865ecd8(puVar8,param_5);
          do {
            lVar10 = lVar5;
            if (lVar12 == lVar5) break;
            func_0x0001086b0908(*(undefined8 *)(lVar12 + -0x18));
            func_0x000107c287e8();
            lVar10 = lVar12;
            lVar12 = lVar12 + -0x30;
          } while (((ulong)puVar8 & 1) != 0);
          func_0x000107c2a2e0(auStack_118);
          lVar5 = lStack_f8;
          if (lVar10 == lStack_f8) {
            *param_1 = 0;
            param_1[0x30] = 0;
          }
          else {
            func_0x0001086b0dc8(lVar10 + -0x30);
          }
          func_0x0001086b0d58();
          if (lVar10 == lVar5) goto LAB_1086a5ae4;
        }
      }
      else {
        uVar13 = param_2[1];
        if ((int)uVar13 <= (int)param_3[1]) goto LAB_1086a59e4;
        lStack_f8 = 0;
        lStack_f0 = 0;
        uStack_e8 = 0;
        bVar4 = (*param_2 & 1) == 0;
        if (!bVar4) {
          param_2 = (ulong *)(*param_2 + 7);
        }
        func_0x0001086b0594();
        if (!bVar4) {
          param_3 = extraout_x10_00;
        }
        plStack_70 = &lStack_f8;
        uStack_68 = 0;
        puStack_60 = param_3;
        puStack_58 = param_2;
        while (puVar9 = puStack_58, puStack_58 != param_2 + (int)uVar13) {
          bVar2 = param_3 + extraout_x8_02 <= puStack_60;
          bVar4 = puStack_60 == param_3 + extraout_x8_02;
          if (bVar4) break;
          func_0x0001086b0e7c();
          if (!bVar2 || bVar4) {
            if (extraout_x10_01 <= extraout_x9_04) {
              puStack_58 = puVar9 + 1;
            }
            lVar12 = -0x50;
            puVar9 = extraout_x8_03;
          }
          else {
            FUN_1086ab23c(&plStack_70);
            lVar12 = -0x48;
          }
          *(ulong **)(&stack0xfffffffffffffff0 + lVar12) = puVar9 + 1;
        }
        FUN_1086ab72c(auStack_c0,puStack_58,param_2 + (int)uVar13,plStack_70,uStack_68);
        if (lStack_f8 != lStack_f0) {
          func_0x0001086b0b80();
          func_0x0001086ab1b4(lVar5);
          FUN_1086a5b98();
          func_0x0001086b0948();
          func_0x0001086a56fc(lVar5);
          func_0x0001088bf408();
        }
        func_0x0001086b0d58();
      }
    }
LAB_1086a5ad0:
    FUN_10867f2dc(param_1,&ppuStack_a0);
    uVar3 = 1;
  }
  param_1[0x30] = uVar3;
LAB_1086a5ae4:
  FUN_10891b058(&ppuStack_a0);
  return;
}



/* Entry: 1086a5b88; end: 1086a5b97;  */

void FUN_1086a5b88(long param_1)

{
  ulong uVar1;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001086b039c();
    }
    func_0x000107c287e0();
    *(ulong *)(param_1 + 0x20) = uVar1;
  }
  return;
}



/* Entry: 1086a5b98; end: 1086a5c07;  */

void FUN_1086a5b98(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x19;
  
  func_0x0001086b03a8();
  if (!(bool)in_ZR) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    uVar2 = uVar1;
    if ((uVar1 & 1) != 0) {
      uVar2 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar3 = *(ulong *)(param_2 + 8);
    uVar4 = uVar3;
    if ((uVar3 & 1) != 0) {
      uVar4 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    if (uVar2 == uVar4) {
      *(ulong *)(unaff_x19 + 8) = uVar3;
      *(ulong *)(param_2 + 8) = uVar1;
    }
    else {
      FUN_1089213ec();
    }
  }
  return;
}



/* Entry: 1086a5c08; end: 1086a5ca7;  */

undefined8 FUN_1086a5c08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined8 extraout_x9;
  undefined8 uVar2;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined **ppuStack_40;
  char cStack_28;
  
  func_0x0001086b0f60();
  FUN_1086a570c(auStack_58,auStack_70,param_3,extraout_x9);
  func_0x000107c29034(auStack_70);
  if (cStack_28 == '\x01') {
    ppuVar1 = &PTR_PTR_113284480;
    if (ppuStack_40 != (undefined **)0x0) {
      ppuVar1 = ppuStack_40;
    }
    if (*(int *)(ppuVar1 + 8) == 0x10) {
      uVar2 = *(undefined8 *)(ppuVar1[7] + 0x20);
      goto LAB_1086a5c80;
    }
  }
  uVar2 = 0;
LAB_1086a5c80:
  FUN_1086ab7bc(auStack_58);
  return uVar2;
}



/* Entry: 1086a5ca8; end: 1086a5e0b;  */

/* WARNING: Possible PIC construction at 0x0001086a5e4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001086a5e50) */
/* WARNING: Removing unreachable block (ram,0x0001086a5e68) */
/* WARNING: Removing unreachable block (ram,0x0001086a5e54) */

long * FUN_1086a5ca8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  long *plVar2;
  undefined8 extraout_x8;
  long lVar3;
  undefined8 *puVar4;
  undefined1 *unaff_x19;
  undefined8 *unaff_x21;
  byte bStack_1e0;
  undefined1 auStack_1d8 [192];
  long lStack_118;
  long lStack_110;
  undefined8 auStack_100 [22];
  byte bStack_50;
  undefined8 uStack_48;
  
  func_0x0001086b03e8();
  func_0x0001086b0138();
  auStack_100[0] = param_3;
  uStack_48 = extraout_x8;
  FUN_1086afdec(auStack_1d8,auStack_100,1);
  func_0x0001086b0ac4(&lStack_118);
  FUN_108861b60();
  func_0x00010867bb84(auStack_1d8);
  uVar1 = lStack_110 - lStack_118 == 0x1a8;
  if ((bool)uVar1) {
    FUN_108864dac(auStack_1d8,*unaff_x21,lStack_118,*(undefined8 *)(lStack_118 + 0x18));
    func_0x000107c28ef4(auStack_100,auStack_1d8);
    func_0x000107c32530();
    while ((((bStack_50 & 1) != 0 || ((bStack_1e0 & 1) != 0)) &&
           (func_0x0001086b0c28(auStack_100[0]), !(bool)uVar1))) {
      FUN_1086a1330(auStack_100);
      FUN_1086a0710();
      func_0x000107c28ff0(auStack_100);
    }
    func_0x000107c32484();
    func_0x000107c324dc(auStack_100);
    func_0x000107c28fe8(auStack_1d8);
    func_0x000107c324ec();
    func_0x0001086ab7dc();
  }
  else {
    *unaff_x19 = 0;
    unaff_x19[0x1a8] = 0;
  }
  plVar2 = &lStack_118;
  func_0x00010867b9fc();
  func_0x0001086aff54(uStack_48);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    plVar2 = &lStack_118;
    func_0x00010867b9fc();
    func_0x0001086b0254();
    puVar4 = (undefined8 *)(plVar2[2] & 0xfffffffffffffffc);
    lVar3 = (long)*(char *)((long)puVar4 + 0x17);
    if (lVar3 < 0) {
      lVar3 = puVar4[1];
      puVar4 = (undefined8 *)*puVar4;
    }
    if (lVar3 != 0x10) {
      return (long *)0x0;
    }
    func_0x000107c610b0(puVar4,&UNK_10df42879,0x10);
    return (long *)(ulong)((int)puVar4 == 0);
  }
  return plVar2;
}



/* Entry: 1086a5e0c; end: 1086a5e83;  */

/* WARNING: Possible PIC construction at 0x0001086a5e4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001086a5e50) */
/* WARNING: Removing unreachable block (ram,0x0001086a5e68) */
/* WARNING: Removing unreachable block (ram,0x0001086a5e54) */

bool FUN_1086a5e0c(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  lVar1 = (long)*(char *)((long)puVar2 + 0x17);
  if (lVar1 < 0) {
    lVar1 = puVar2[1];
    puVar2 = (undefined8 *)*puVar2;
  }
  if (lVar1 != 0x10) {
    return false;
  }
  func_0x000107c610b0(puVar2,&UNK_10df42879,0x10);
  return (int)puVar2 == 0;
}



/* Entry: 1086a5e84; end: 1086a5fbb;  */

undefined1  [16] FUN_1086a5e84(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  ulong uVar2;
  ulong uVar3;
  bool bVar4;
  undefined1 in_ZR;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong unaff_x22;
  undefined1 auVar8 [16];
  undefined1 auStack_570 [432];
  byte bStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  byte bStack_208;
  undefined1 auStack_200 [448];
  
  uStack_3b8 = 0;
  uStack_3b0 = 0;
  uStack_3a8 = 0;
  FUN_108860924(auStack_200,param_1,param_2,&uStack_3b8);
  func_0x000107c288bc(&uStack_3b8,auStack_200);
  func_0x0001086b0a88(auStack_570);
  while ((((bStack_208 & 1) != 0 || ((bStack_3c0 & 1) != 0)) &&
         (func_0x0001086b0c28(uStack_3b8), !(bool)in_ZR))) {
    puVar5 = &uStack_3b8;
    func_0x000107c288c0();
    in_ZR = false;
    if (*(char *)(puVar5 + 5) == '\x01') {
      in_ZR = (undefined **)puVar5[0x10] == (undefined **)0x0;
      ppuVar1 = &PTR_PTR_113286e08;
      if (!(bool)in_ZR) {
        ppuVar1 = (undefined **)puVar5[0x10];
      }
      if ((*(byte *)(ppuVar1 + 2) >> 2 & 1) != 0) {
        in_ZR = false;
        if (ppuVar1[0x23][0x20] == '\x01') {
          bVar4 = false;
          unaff_x22 = puVar5[5];
          uVar6 = puVar5[4] & 0xffffffffffffff00;
          uVar7 = puVar5[4] & 0xff;
LAB_1086a5f38:
          func_0x0001086b0384(auStack_570);
          func_0x0001086b0384(&uStack_3b8);
          func_0x000107c28948(auStack_200);
          uVar2 = unaff_x22 & 0xffffffffffffff00;
          if (!bVar4) {
            uVar2 = unaff_x22;
          }
          uVar3 = 0;
          if (!bVar4) {
            uVar3 = uVar7;
          }
          auVar8._0_8_ = uVar3 | uVar6;
          auVar8._8_8_ = uVar2;
          return auVar8;
        }
      }
    }
    func_0x000107c28980(&uStack_3b8);
  }
  uVar6 = 0;
  uVar7 = 0;
  bVar4 = true;
  goto LAB_1086a5f38;
}



/* Entry: 1086a5fbc; end: 1086a5fef;  */

bool FUN_1086a5fbc(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  
  uVar1 = param_1;
  FUN_1086a5e0c();
  if ((uVar1 & 1) != 0) {
    return true;
  }
  puVar3 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  lVar2 = (long)*(char *)((long)puVar3 + 0x17);
  if (lVar2 < 0) {
    lVar2 = puVar3[1];
    puVar3 = (undefined8 *)*puVar3;
  }
  if (lVar2 != 0x10) {
    return false;
  }
  func_0x000107c610b0(puVar3,&UNK_10df42899,0x10);
  return (int)puVar3 == 0;
}



/* Entry: 1086a5ff0; end: 1086a600b;  */

int FUN_1086a5ff0(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + 0x340145;
  if (5 < param_1 - 1U) {
    iVar1 = 0x340145;
  }
  return iVar1;
}



/* Entry: 1086a600c; end: 1086a60bb;  */

void FUN_1086a600c(undefined8 param_1)

{
  long *plVar1;
  long extraout_x8;
  code *extraout_x8_00;
  long alStack_70 [4];
  undefined4 uStack_50;
  undefined1 auStack_48 [40];
  
  func_0x0001086b08ac(param_1,param_1);
  alStack_70[2] = 0;
  alStack_70[3] = 0;
  alStack_70[0] = extraout_x8 + 0x10;
  alStack_70[1] = 0;
  uStack_50 = 0x171;
  plVar1 = alStack_70;
  FUN_1086a60bc(plVar1);
  FUN_1086a6124();
  func_0x000107c2884c(auStack_48,plVar1);
  func_0x000107c2882c(alStack_70);
  func_0x0001086b0d94();
  func_0x0001086b0bec();
  func_0x000107c32508();
  (*extraout_x8_00)();
  func_0x0001086b0654();
  func_0x000107c2882c(auStack_48);
  return;
}



/* Entry: 1086a60bc; end: 1086a6123;  */

void FUN_1086a60bc(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  ushort unaff_w20;
  
  func_0x0001086b06e4();
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x0001086b06d0();
  }
  func_0x0001086b0538();
  if (unaff_w20 < 0x2b8) {
    func_0x0001086b0474();
  }
  func_0x000107c32508();
  func_0x000107c28824();
  func_0x000107c32448();
  return;
}



/* Entry: 1086a6124; end: 1086a618b;  */

void FUN_1086a6124(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  ushort unaff_w20;
  
  func_0x0001086b06e4();
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x0001086b06d0();
  }
  func_0x0001086b0538();
  if (unaff_w20 < 0x2b8) {
    func_0x0001086b0474();
  }
  func_0x000107c32508();
  func_0x000107c28824();
  func_0x000107c32448();
  return;
}



/* Entry: 1086a618c; end: 1086a619f;  */

void FUN_1086a618c(undefined8 param_1)

{
  long *plVar1;
  long extraout_x8;
  code *extraout_x8_00;
  long alStack_70 [4];
  undefined4 uStack_50;
  undefined1 auStack_48 [40];
  
  func_0x0001086b08ac(0x34014c,0x34014c,param_1);
  alStack_70[2] = 0;
  alStack_70[3] = 0;
  alStack_70[0] = extraout_x8 + 0x10;
  alStack_70[1] = 0;
  uStack_50 = 0x171;
  plVar1 = alStack_70;
  FUN_1086a60bc(plVar1);
  FUN_1086a6124();
  func_0x000107c2884c(auStack_48,plVar1);
  func_0x000107c2882c(alStack_70);
  func_0x0001086b0d94();
  func_0x0001086b0bec();
  func_0x000107c32508();
  (*extraout_x8_00)();
  func_0x0001086b0654();
  func_0x000107c2882c(auStack_48);
  return;
}



/* Entry: 1086a61a0; end: 1086a624f;  */

void FUN_1086a61a0(void)

{
  long *plVar1;
  long extraout_x8;
  code *extraout_x8_00;
  long alStack_70 [4];
  undefined4 uStack_50;
  undefined1 auStack_48 [40];
  
  func_0x0001086b08ac();
  alStack_70[2] = 0;
  alStack_70[3] = 0;
  alStack_70[0] = extraout_x8 + 0x10;
  alStack_70[1] = 0;
  uStack_50 = 0x172;
  plVar1 = alStack_70;
  func_0x000107c28b38(plVar1,0);
  FUN_1086a6250();
  func_0x000107c2884c(auStack_48,plVar1);
  func_0x000107c2882c(alStack_70);
  func_0x0001086b0d94();
  func_0x0001086b0bec();
  func_0x000107c32508();
  (*extraout_x8_00)();
  func_0x0001086b0654();
  func_0x000107c2882c(auStack_48);
  return;
}



/* Entry: 1086a6250; end: 1086a62b7;  */

void FUN_1086a6250(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  ushort unaff_w20;
  
  func_0x0001086b06e4();
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x0001086b06d0();
  }
  func_0x0001086b0538();
  if (unaff_w20 < 0x2b8) {
    func_0x0001086b0474();
  }
  func_0x000107c32508();
  func_0x000107c28824();
  func_0x000107c32448();
  return;
}



/* Entry: 1086a62b8; end: 1086a639f;  */

void FUN_1086a62b8(undefined4 param_1)

{
  undefined4 *puVar1;
  long extraout_x8;
  code *extraout_x8_00;
  undefined1 auStack_b8 [40];
  undefined1 auStack_90 [24];
  long alStack_78 [4];
  undefined4 uStack_58;
  undefined1 auStack_50 [44];
  undefined4 uStack_24;
  
  uStack_24 = param_1;
  func_0x0001086b08ac();
  alStack_78[2] = 0;
  alStack_78[3] = 0;
  alStack_78[0] = extraout_x8 + 0x10;
  alStack_78[1] = 0;
  uStack_58 = 0x172;
  func_0x000107c28b38(alStack_78,1);
  func_0x000107c278b8(auStack_90,&UNK_10f4b0ad5);
  puVar1 = &uStack_24;
  FUN_108843ae8(puVar1);
  func_0x0001086b07dc();
  func_0x000107c2884c(auStack_50,puVar1);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_90);
  func_0x000107c2882c(alStack_78);
  func_0x000107c2884c(auStack_b8,auStack_50);
  func_0x0001086b0bec();
  func_0x000107c32508();
  (*extraout_x8_00)();
  func_0x0001086b0654();
  func_0x000107c2882c(auStack_50);
  return;
}



/* Entry: 1086a63a0; end: 1086a63e3;  */

undefined4 FUN_1086a63a0(long param_1)

{
  undefined1 in_ZR;
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  
  uVar1 = 0;
  if (((*(byte *)(param_1 + 0x100) & 1) == 0) && (*(int *)(param_1 + 0xf0) == 0)) {
    func_0x0001086b0768(*(undefined8 *)(param_1 + 0x70));
    if ((bool)in_ZR) {
      lVar2 = *(long *)(extraout_x8 + 0x10);
      lVar3 = lVar2;
      FUN_108841330();
      uVar1 = 0;
      if (*(char *)(lVar2 + 0x22) == '\0') {
        uVar1 = (undefined4)lVar3;
      }
      return uVar1;
    }
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 1086a63e4; end: 1086a6487;  */

void FUN_1086a63e4(undefined8 param_1,ulong param_2)

{
  code *extraout_x8;
  ulong uStack_28;
  
  uStack_28 = param_2;
  func_0x0001086b08ac();
  if ((param_2 >> 0x20 & 1) == 0) {
    func_0x0001086b0d38();
  }
  else {
    func_0x0001086b0d44();
    func_0x0001086b07ec();
    FUN_108843ae8(&uStack_28);
    func_0x0001086b07dc();
    func_0x0001086b0978();
  }
  func_0x0001086b0ddc();
  func_0x0001086b0bec();
  func_0x0001086b069c();
  (*extraout_x8)();
  func_0x0001086b0824();
  func_0x0001086b0970();
  return;
}



/* Entry: 1086a6488; end: 1086a656b;  */

void FUN_1086a6488(long param_1)

{
  undefined ***pppuVar1;
  undefined **ppuVar2;
  ulong uVar3;
  undefined1 auStack_58 [24];
  undefined **ppuStack_40;
  undefined8 uStack_38;
  undefined8 uStack_28;
  
  FUN_1086a2e08(param_1);
  *(undefined8 *)(param_1 + 0xa8) = 0x100000006;
  ppuStack_40 = &PTR_DAT_110a825f8;
  uStack_38 = 0;
  uStack_28 = 0;
  pppuVar1 = &ppuStack_40;
  FUN_1086ab7f8();
  if (*(int *)((long)pppuVar1 + 0x1c) != 0x16) {
    FUN_1088c01a0(pppuVar1);
    *(undefined4 *)((long)pppuVar1 + 0x1c) = 0x16;
    ppuVar2 = pppuVar1[1];
    if (((ulong)ppuVar2 & 1) != 0) {
      func_0x0001086b039c();
    }
    func_0x0001086ab880();
    pppuVar1[2] = ppuVar2;
  }
  func_0x00010b4d1804(auStack_58,&ppuStack_40);
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  func_0x000107c3024c(param_1 + 0x60,auStack_58,uVar3);
  func_0x0001086b034c();
  FUN_1088bf4ec(&ppuStack_40);
  return;
}


