/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bcdde68; end: 10bcdde77;  */

void FUN_10bcdde68(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined *puStack_30;
  undefined *puStack_28;
  
  if (*param_1 != 0) {
    return;
  }
  puStack_30 = &UNK_10f6d19ac;
  puStack_28 = &UNK_10f6d196c;
  uStack_38 = 0x4a;
  uStack_34 = 2;
  func_0x00010ae77bf0(&PTR_DAT_113311b68,&uStack_34,&puStack_30,&uStack_38,&puStack_28);
  puVar2 = puStack_28;
  puVar1 = puStack_28;
  _strlen(puStack_28);
  func_0x000107c2b9b4(&puStack_30,0xd,puVar2,puVar1);
  puVar2 = (undefined *)*param_1;
  if (puStack_30 != puVar2) {
    *param_1 = (long)puStack_30;
    puStack_30 = (undefined *)0x36;
    if (((ulong)puVar2 & 1) == 0) {
      return;
    }
    func_0x000107c2b9b0();
    puVar2 = puStack_30;
  }
  if (((ulong)puVar2 & 1) != 0) {
    func_0x000107c2b9b0();
  }
  return;
}



/* Entry: 10bcdde78; end: 10bcdde9f;  */

void FUN_10bcdde78(void)

{
  func_0x000107c3a61c();
  FUN_10bcdde68();
  return;
}



/* Entry: 10bcddea0; end: 10bcddeb7;  */

void FUN_10bcddea0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined *puStack_40;
  undefined *puStack_38;
  
  if (*param_1 == 0) {
    return;
  }
  func_0x00010ae77c74();
  if (*param_1 == 0) {
    puStack_40 = &UNK_10f6d19ac;
    puStack_38 = &UNK_10f6d196c;
    uStack_48 = 0x4a;
    uStack_44 = 2;
    func_0x00010ae77bf0(&PTR_DAT_113311b68,&uStack_44,&puStack_40,&uStack_48,&puStack_38);
    puVar2 = puStack_38;
    puVar1 = puStack_38;
    _strlen(puStack_38);
    func_0x000107c2b9b4(&puStack_40,0xd,puVar2,puVar1);
    puVar2 = (undefined *)*param_1;
    if (puStack_40 != puVar2) {
      *param_1 = (long)puStack_40;
      puStack_40 = (undefined *)0x36;
      if (((ulong)puVar2 & 1) == 0) {
        return;
      }
      func_0x000107c2b9b0();
      puVar2 = puStack_40;
    }
    if (((ulong)puVar2 & 1) != 0) {
      func_0x000107c2b9b0();
    }
    return;
  }
  return;
}



/* Entry: 10bcddeb8; end: 10bcddec7;  */

void FUN_10bcddeb8(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined *puStack_30;
  undefined *puStack_28;
  
  if (*param_1 != 0) {
    return;
  }
  puStack_30 = &UNK_10f6d19ac;
  puStack_28 = &UNK_10f6d196c;
  uStack_38 = 0x4a;
  uStack_34 = 2;
  func_0x00010ae77bf0(&PTR_DAT_113311b68,&uStack_34,&puStack_30,&uStack_38,&puStack_28);
  puVar2 = puStack_28;
  puVar1 = puStack_28;
  _strlen(puStack_28);
  func_0x000107c2b9b4(&puStack_30,0xd,puVar2,puVar1);
  puVar2 = (undefined *)*param_1;
  if (puStack_30 != puVar2) {
    *param_1 = (long)puStack_30;
    puStack_30 = (undefined *)0x36;
    if (((ulong)puVar2 & 1) == 0) {
      return;
    }
    func_0x000107c2b9b0();
    puVar2 = puStack_30;
  }
  if (((ulong)puVar2 & 1) != 0) {
    func_0x000107c2b9b0();
  }
  return;
}



/* Entry: 10bcddec8; end: 10bcddeef;  */

void FUN_10bcddec8(void)

{
  func_0x000107c3a61c();
  FUN_10bcddeb8();
  return;
}



/* Entry: 10bcddef0; end: 10bcddf07;  */

ulong * FUN_10bcddef0(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  int extraout_w10;
  
  if (*param_1 != 0) {
    func_0x00010ae77c74();
    uVar1 = *param_2;
    *param_1 = uVar1;
    if ((uVar1 & 1) != 0) {
      do {
        func_0x00010bcde540();
      } while (extraout_w10 != 0);
    }
    func_0x000107c31554(param_1);
    return param_1;
  }
  return param_1;
}



/* Entry: 10bcddf08; end: 10bcddf4b;  */

ulong * FUN_10bcddf08(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  int extraout_w10;
  
  uVar1 = *param_2;
  *param_1 = uVar1;
  if ((uVar1 & 1) != 0) {
    do {
      func_0x00010bcde540();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31554(param_1);
  return param_1;
}



/* Entry: 10bcddf4c; end: 10bcddfc3;  */

long * FUN_10bcddf4c(long *param_1)

{
  undefined1 in_ZR;
  undefined8 uStack_28;
  
  if (*param_1 == 0) {
    return param_1;
  }
  func_0x00010ae77c74();
  func_0x00010bcde550();
  func_0x00010bcde674();
  func_0x00010bcde638();
  func_0x00010bcde52c(uStack_28);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  FUN_10bcddfc4();
  return (long *)(ulong)(param_1 != (long *)0x0);
}



/* Entry: 10bcddfc4; end: 10bcddffb;  */

undefined1  [16] FUN_10bcddfc4(ulong *param_1,uint *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  byte bVar6;
  ulong uVar7;
  ulong uVar8;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  undefined8 uVar9;
  byte bVar16;
  undefined1 auVar17 [16];
  
  Hint_Prefetch(*param_1,0,2,0);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (long)&PTR_LOOP_110c8acd8 + (ulong)*param_2;
  uVar3 = SUB168(auVar1 * ZEXT816(0x9ddfea08eb382d69),8) ^
          ((long)&PTR_LOOP_110c8acd8 + (ulong)*param_2) * -0x622015f714c7d297;
  lVar4 = 0;
  uVar5 = *param_1;
  uVar7 = uVar5 >> 0xc ^ uVar3 >> 7;
  bVar6 = (byte)uVar3 & 0x7f;
  while( true ) {
    uVar7 = uVar7 & param_1[2];
    uVar9 = *(undefined8 *)(uVar5 + uVar7);
    bVar10 = (byte)((ulong)uVar9 >> 8);
    bVar11 = (byte)((ulong)uVar9 >> 0x10);
    bVar12 = (byte)((ulong)uVar9 >> 0x18);
    bVar13 = (byte)((ulong)uVar9 >> 0x20);
    bVar14 = (byte)((ulong)uVar9 >> 0x28);
    bVar15 = (byte)((ulong)uVar9 >> 0x30);
    bVar16 = (byte)((ulong)uVar9 >> 0x38);
    for (uVar3 = CONCAT17(-(bVar16 == bVar6),
                          CONCAT16(-(bVar15 == bVar6),
                                   CONCAT15(-(bVar14 == bVar6),
                                            CONCAT14(-(bVar13 == bVar6),
                                                     CONCAT13(-(bVar12 == bVar6),
                                                              CONCAT12(-(bVar11 == bVar6),
                                                                       CONCAT11(-(bVar10 == bVar6),
                                                                                -((byte)uVar9 ==
                                                                                 bVar6)))))))) &
                 0x8080808080808080; uVar3 != 0; uVar3 = uVar3 - 1 & uVar3) {
      uVar8 = (uVar3 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar3 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar7 + ((ulong)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3) & param_1[2];
      if (*(uint *)(param_1[1] + uVar8 * 4) == *param_2) {
        auVar17._8_8_ = param_1[1] + uVar8 * 4;
        auVar17._0_8_ = uVar5 + uVar8;
        return auVar17;
      }
    }
    if (CONCAT17(-(bVar16 == 0x80),
                 CONCAT16(-(bVar15 == 0x80),
                          CONCAT15(-(bVar14 == 0x80),
                                   CONCAT14(-(bVar13 == 0x80),
                                            CONCAT13(-(bVar12 == 0x80),
                                                     CONCAT12(-(bVar11 == 0x80),
                                                              CONCAT11(-(bVar10 == 0x80),
                                                                       -((byte)uVar9 == 0x80))))))))
        != 0) break;
    lVar4 = lVar4 + 8;
    uVar7 = lVar4 + uVar7;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_2;
  return auVar2 << 0x40;
}



/* Entry: 10bcddffc; end: 10bcde013;  */

undefined1  [16] FUN_10bcddffc(long *param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  if (*param_1 == 0) {
    auVar1._8_8_ = param_2;
    auVar1._0_8_ = param_1;
    return auVar1;
  }
  func_0x00010ae77c74();
  auVar2._0_8_ = (undefined1 (*) [16])(param_1[0xd] & 0xfffffffffffffffc);
  auVar2._8_8_ = (long)(char)auVar2._0_8_[1][7];
  if (-1 < auVar2._8_8_) {
    return auVar2;
  }
  return *auVar2._0_8_;
}



/* Entry: 10bcde014; end: 10bcde02b;  */

undefined1  [16] FUN_10bcde014(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = (undefined1 (*) [16])(*(ulong *)(param_1 + 0x68) & 0xfffffffffffffffc);
  auVar1._8_8_ = (long)(char)auVar1._0_8_[1][7];
  if (-1 < auVar1._8_8_) {
    return auVar1;
  }
  return *auVar1._0_8_;
}



/* Entry: 10bcde02c; end: 10bcde0a3;  */

undefined1  [16] FUN_10bcde02c(undefined8 param_1,ulong param_2)

{
  undefined1 *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [20];
  undefined4 uStack_24;
  
  uStack_24 = (undefined4)param_2;
  func_0x00010bcde330();
  if ((param_2 & 1) != 0) {
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = param_1;
    return auVar3;
  }
  FUN_10bdb2a00(auStack_38,&UNK_10f830e5d,0x154);
  func_0x00010bcde6e8();
  FUN_10bcde014();
  func_0x00010bcde620();
  func_0x00010bcddf64();
  func_0x00010bcde6b8();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev(auStack_50);
  puVar1 = auStack_38;
  func_0x00010ae6c700();
  auVar2._0_8_ = (undefined1 (*) [16])
                 (*(ulong *)(*(long *)(puVar1 + 8) + 0x28) & 0xfffffffffffffffc);
  auVar2._8_8_ = (long)(char)auVar2._0_8_[1][7];
  if (-1 < auVar2._8_8_) {
    return auVar2;
  }
  return *auVar2._0_8_;
}



/* Entry: 10bcde0a4; end: 10bcde0bf;  */

undefined1  [16] FUN_10bcde0a4(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = (undefined1 (*) [16])
                 (*(ulong *)(*(long *)(param_1 + 8) + 0x28) & 0xfffffffffffffffc);
  auVar1._8_8_ = (long)(char)auVar1._0_8_[1][7];
  if (-1 < auVar1._8_8_) {
    return auVar1;
  }
  return *auVar1._0_8_;
}



/* Entry: 10bcde0c0; end: 10bcde113;  */

void FUN_10bcde0c0(long param_1)

{
  undefined8 **ppuVar1;
  undefined8 *puVar2;
  undefined8 *puStack_20;
  long lStack_18;
  
  puVar2 = (undefined8 *)(*(ulong *)(*(long *)(param_1 + 8) + 0x30) & 0xfffffffffffffffc);
  lStack_18 = (long)*(char *)((long)puVar2 + 0x17);
  puStack_20 = puVar2;
  if (lStack_18 < 0) {
    puStack_20 = (undefined8 *)*puVar2;
    lStack_18 = puVar2[1];
  }
  ppuVar1 = &puStack_20;
  func_0x000107885418(&puStack_20,0x2f,0xffffffffffffffff);
  func_0x00010bcde5fc(&puStack_20,(undefined1 *)((long)ppuVar1 + 1));
  return;
}



/* Entry: 10bcde114; end: 10bcde2a7;  */

void FUN_10bcde114(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  ulong *puVar1;
  undefined8 uVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  ulong *puVar6;
  ulong *puVar7;
  undefined8 *extraout_x8;
  undefined8 extraout_x8_00;
  ulong uVar8;
  int extraout_w10;
  ulong *extraout_x10;
  undefined8 extraout_x11;
  long lVar9;
  ulong uVar10;
  undefined *puStack_a0;
  undefined8 uStack_98;
  ulong auStack_90 [3];
  undefined1 auStack_78 [8];
  ulong uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x00010bcde6dc();
  uStack_60 = param_2;
  uStack_58 = param_3;
  FUN_10bce43f8(&uStack_70);
  auStack_90[0] = uStack_70;
  if ((uStack_70 & 1) == 0) {
    if (uStack_70 == 0) {
      func_0x00010bcde5dc();
      puVar6 = &uStack_70;
      FUN_10bcde2ec();
      uVar8 = *(ulong *)(lStack_68 + 0x20);
      cVar3 = '\0';
      cVar4 = '\0';
      puVar1 = (ulong *)(lStack_68 + 0x20);
      if ((uVar8 & 1) != 0) {
        puVar1 = (ulong *)(uVar8 + 7);
      }
      for (lVar9 = (long)*(int *)(lStack_68 + 0x28) << 3; lVar9 != 0; lVar9 = lVar9 + -8) {
        uVar10 = *puVar1;
        puVar7 = (ulong *)(*(ulong *)(uVar10 + 0x28) & 0xfffffffffffffffc);
        uVar8 = (ulong)*(byte *)((long)puVar7 + 0x17);
        if (param_4 == 0) {
          func_0x00010bcde5d0();
          func_0x000107c27944();
          iVar5 = (int)puVar6;
        }
        else {
          puVar6 = puVar7;
          if ((char)*(byte *)((long)puVar7 + 0x17) < '\0') {
            puVar6 = (ulong *)*puVar7;
            uVar8 = puVar7[1];
          }
          func_0x000107c2ba24(puVar6,uVar8);
          iVar5 = (int)puVar6;
        }
        if (iVar5 != 0) {
          *(undefined4 *)(extraout_x8 + 1) = *(undefined4 *)(uVar10 + 0x30);
          *extraout_x8 = 0;
          goto LAB_10bcde254;
        }
        puVar1 = puVar1 + 1;
      }
      puStack_a0 = &UNK_10f830e2b;
      uStack_98 = 0x18;
      func_0x00010bcde64c(auStack_90,&puStack_a0);
      func_0x00010bcde60c();
      uVar2 = extraout_x11;
      puVar6 = extraout_x10;
      if (cVar3 == cVar4) {
        uVar2 = extraout_x8_00;
        puVar6 = auStack_90;
      }
      func_0x00010ae775f4(auStack_78,puVar6,uVar2);
      FUN_10bcdddc8(extraout_x8,auStack_78);
      func_0x00010bcde65c();
      func_0x00010bcde654();
      goto LAB_10bcde254;
    }
  }
  else {
    do {
      func_0x00010bcde540();
    } while (extraout_w10 != 0);
  }
  FUN_10bcde2a8(extraout_x8,auStack_90);
  func_0x00010bcde5dc();
LAB_10bcde254:
  func_0x00010bcde630();
  return;
}



/* Entry: 10bcde2a8; end: 10bcde2eb;  */

ulong * FUN_10bcde2a8(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  int extraout_w10;
  
  uVar1 = *param_2;
  *param_1 = uVar1;
  if ((uVar1 & 1) != 0) {
    do {
      func_0x00010bcde540();
    } while (extraout_w10 != 0);
  }
  FUN_10bcdddf0(param_1);
  return param_1;
}



/* Entry: 10bcde2ec; end: 10bcde34b;  */

long * FUN_10bcde2ec(long *param_1)

{
  if (*param_1 == 0) {
    return param_1;
  }
  func_0x00010ae77c74();
  if (*(int *)(param_1[1] + 0x4c) == 3) {
    return (long *)0x0;
  }
  FUN_10bcde34c();
  return (long *)(ulong)((uint)param_1 ^ 1);
}



/* Entry: 10bcde34c; end: 10bcde38f;  */

bool FUN_10bcde34c(long param_1)

{
  long lVar1;
  
  if ((*(int *)(*(long *)(param_1 + 0x10) + 0x80) == 1) &&
     (lVar1 = *(long *)(param_1 + 8), *(int *)(lVar1 + 0x54) == 0)) {
    if (*(int *)(lVar1 + 0x48) == 0xb) {
      return *(int *)(lVar1 + 0x4c) != 3;
    }
    return false;
  }
  return true;
}



/* Entry: 10bcde390; end: 10bcde3db;  */

byte FUN_10bcde390(long param_1)

{
  undefined1 auStack_20 [15];
  byte bStack_11;
  
  if (*(int *)(*(long *)(param_1 + 8) + 0x48) == 0xb) {
    bStack_11 = 0;
    FUN_10bcde3dc(auStack_20,param_1,&bStack_11);
    func_0x00010bcde5bc();
  }
  else {
    bStack_11 = 0;
  }
  return bStack_11 & 1;
}



/* Entry: 10bcde3dc; end: 10bcde447;  */

void FUN_10bcde3dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong extraout_x8;
  int extraout_w10;
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_3;
  FUN_10bce41b0(auStack_38);
  func_0x00010bcde6d0();
  if ((extraout_x8 & 1) == 0) {
    if (extraout_x8 == 0) {
      func_0x00010bcde584();
      FUN_10bcddffc(auStack_38);
      FUN_10bcde448(param_1,&uStack_28,uStack_30);
    }
  }
  else {
    do {
      func_0x00010bcde540();
    } while (extraout_w10 != 0);
  }
  func_0x00010bcde58c();
  return;
}



/* Entry: 10bcde448; end: 10bcde47f;  */

void FUN_10bcde448(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined1 uStack_21;
  
  param_3 = param_3 + 0x50;
  FUN_10bcde480(param_3,&uStack_21);
  *(char *)*param_2 = (char)param_3;
  *param_1 = 0;
  return;
}



/* Entry: 10bcde480; end: 10bcde49f;  */

void FUN_10bcde480(ulong *param_1)

{
  ulong *puVar1;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  puVar1 = param_1;
  if ((*param_1 & 1) != 0) {
    puVar1 = (ulong *)(*param_1 + 7);
  }
  FUN_10bcde4c4(puVar1,puVar1 + (int)param_1[1],&uStack_11,&uStack_12);
  return;
}



/* Entry: 10bcde4a0; end: 10bcde4c3;  */

void FUN_10bcde4a0(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  FUN_10bcde4c4(param_1,param_2,&uStack_11,&uStack_12);
  return;
}



/* Entry: 10bcde4c4; end: 10bcde517;  */

bool FUN_10bcde4c4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  do {
    puVar2 = param_1;
    if (puVar2 == param_2) break;
    uVar1 = param_3;
    FUN_10bcde518(param_3,*puVar2);
    param_1 = puVar2 + 1;
  } while ((int)uVar1 == 0);
  return puVar2 != param_2;
}



/* Entry: 10bcde518; end: 10bcde6fb;  */

bool FUN_10bcde518(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  bool bVar2;
  undefined *puVar3;
  long unaff_x20;
  
  puVar3 = &UNK_10f82fe15;
  func_0x000100152bac(*(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc);
  func_0x000107c613d0();
  puVar1 = *(undefined **)(unaff_x20 + 8);
  if (-1 < (char)*(byte *)(unaff_x20 + 0x17)) {
    puVar1 = (undefined *)(ulong)*(byte *)(unaff_x20 + 0x17);
  }
  if (puVar3 == puVar1) {
    func_0x000107c60bf4();
    bVar2 = (int)unaff_x20 == 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



/* Entry: 10bcde6fc; end: 10bcde74b;  */

void FUN_10bcde6fc(long param_1)

{
  int iVar1;
  
  func_0x00010bce373c(param_1,&DAT_10f68f57e);
  for (iVar1 = 0; iVar1 < *(int *)(param_1 + 0x30); iVar1 = iVar1 + 1) {
    func_0x00010bce35e4();
    func_0x00010bce373c();
  }
  return;
}



/* Entry: 10bcde74c; end: 10bcde95b;  */

void FUN_10bcde74c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong *extraout_x8;
  ulong extraout_x8_00;
  ulong uVar2;
  ulong extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined1 auStack_1a0 [8];
  undefined1 auStack_148 [8];
  undefined8 auStack_140 [5];
  undefined1 auStack_118 [80];
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x00010bce3d90();
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  puStack_b8 = &UNK_10e52b660;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  puStack_98 = &UNK_10e52b660;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uVar2 = param_2[1];
  puVar1 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar2 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar1 = param_2;
  }
  uStack_78 = param_1;
  FUN_10bce42f0(&uStack_c8,&puStack_b8,puVar1,uVar2);
  *extraout_x8 = uStack_c8;
  if ((uStack_c8 & 1) == 0) {
    if (uStack_c8 == 0) {
      func_0x00010bce3498();
      func_0x000106e5f700(auStack_118);
      FUN_10bcddffc(&uStack_c8);
      FUN_10bcde95c(auStack_148,uStack_c0,auStack_118);
      func_0x00010bce37a0();
      uVar2 = extraout_x8_00;
      if ((extraout_x8_00 & 1) != 0) {
        do {
          func_0x00010bce3290();
        } while (extraout_w10 != 0);
        uVar2 = *extraout_x8;
      }
      if (uVar2 == 0) {
        func_0x00010bce3498();
        FUN_10bce0550(auStack_148);
        FUN_10bce0550(auStack_148);
        FUN_10bcde9f4(auStack_1a0,&stack0xfffffffffffffe68,auStack_140,auStack_140[0],1);
        func_0x00010bce3878();
        uVar2 = extraout_x8_01;
        if ((extraout_x8_01 & 1) != 0) {
          do {
            func_0x00010bce3290();
          } while (extraout_w10_00 != 0);
          uVar2 = *extraout_x8;
        }
        if (uVar2 == 0) {
          func_0x00010bce3498();
          FUN_10bcde6fc(&stack0xfffffffffffffe68);
          *extraout_x8 = 0;
        }
        func_0x00010bce36e8();
        FUN_10bcdf614(&stack0xfffffffffffffe68);
      }
      FUN_10bcdf948(auStack_148);
      func_0x00010b4d3fe8(auStack_118);
    }
  }
  else {
    do {
      func_0x00010bce3290();
    } while (extraout_w10_01 != 0);
  }
  func_0x000107c31550(&uStack_c8);
  FUN_10bcdd874(&puStack_b8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_70);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_58);
  return;
}



/* Entry: 10bcde95c; end: 10bcde9f3;  */

void FUN_10bcde95c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_40 = &UNK_10e52b660;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_38 = 0;
  uStack_48 = param_2;
  FUN_10bce4a0c(&lStack_50,&uStack_48,param_3,0);
  if (lStack_50 == 0) {
    func_0x00010bce36e8();
    FUN_10bcdf6ac(param_1,&uStack_48);
  }
  else {
    FUN_10bcdf654(param_1,&lStack_50);
    func_0x00010bce36e8();
  }
  FUN_10bcdf718(&puStack_40);
  return;
}



/* Entry: 10bcde9f4; end: 10bcdf5fb;  */

/* WARNING: Possible PIC construction at 0x00010bcdecc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010bcdf36c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010bcdf370) */
/* WARNING: Removing unreachable block (ram,0x00010047bec0) */

undefined1  [16]
FUN_10bcde9f4(undefined8 param_1,ulong *****param_2,ulong *****param_3,ulong *****param_4,
             ulong param_5)

{
  ulong *puVar1;
  undefined4 *puVar2;
  undefined1 uVar4;
  char cVar5;
  char cVar6;
  undefined1 uVar7;
  uint uVar8;
  ulong uVar9;
  ulong *****pppppuVar10;
  ulong ****ppppuVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  ulong *****pppppuVar14;
  undefined1 *puVar15;
  ulong *****pppppuVar16;
  int iVar17;
  uint extraout_w8;
  ulong ****extraout_x8;
  ulong ****extraout_x8_00;
  ulong ****extraout_x8_01;
  ulong ****ppppuVar18;
  ulong extraout_x8_02;
  ulong ****extraout_x8_03;
  long *extraout_x8_04;
  ulong ****extraout_x8_05;
  ulong ****extraout_x8_06;
  long extraout_x8_07;
  ulong ****extraout_x8_08;
  ulong extraout_x8_09;
  ulong extraout_x8_10;
  ulong ****extraout_x8_11;
  undefined8 extraout_x8_12;
  ulong *****extraout_x8_13;
  undefined8 extraout_x8_14;
  ulong *****extraout_x8_15;
  undefined8 extraout_x8_16;
  ulong extraout_x8_17;
  ulong extraout_x8_18;
  ulong extraout_x8_19;
  ulong extraout_x8_20;
  ulong extraout_x8_21;
  ulong extraout_x8_22;
  char *extraout_x8_23;
  ulong ****extraout_x8_24;
  undefined *extraout_x8_25;
  ulong *****pppppuVar19;
  uint extraout_w9;
  ulong extraout_x9;
  ulong *****pppppuVar20;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  ulong *****extraout_x9_03;
  undefined *puVar21;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  uint extraout_w10_06;
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
  int extraout_w10_19;
  ulong extraout_x10;
  ulong *****extraout_x10_00;
  ulong *****extraout_x10_01;
  ulong *****extraout_x10_02;
  ulong *****extraout_x10_03;
  ulong *****extraout_x10_04;
  ulong *****extraout_x10_05;
  ulong *****extraout_x10_06;
  ulong *****extraout_x11;
  ulong *****extraout_x11_00;
  char *extraout_x11_01;
  undefined *extraout_x11_02;
  ulong *****unaff_x19;
  ulong *****unaff_x20;
  uint uVar22;
  undefined8 uVar23;
  ulong *****unaff_x24;
  char *pcVar24;
  undefined4 *puVar25;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  long lVar26;
  int iVar27;
  ulong *****unaff_x28;
  undefined8 *****unaff_x29;
  code *unaff_x30;
  undefined8 uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  byte abStack_3d8 [423];
  ulong ***apppuStack_231 [2];
  byte abStack_220 [8];
  ulong ***pppuStack_218;
  undefined *puStack_210;
  ulong ***apppuStack_208 [3];
  ulong ***pppuStack_1f0;
  undefined *puStack_1e8;
  ulong ****ppppuStack_1e0;
  ulong ****ppppuStack_1b8;
  undefined8 uStack_188;
  ulong ****ppppuStack_180;
  ulong ****ppppuStack_178;
  undefined8 ****ppppuStack_160;
  code *pcStack_158;
  undefined4 auStack_150 [2];
  long lStack_148;
  uint uStack_140;
  ulong ****ppppuStack_130;
  ulong ****ppppuStack_128;
  byte bStack_119;
  ulong ***pppuStack_118;
  int aiStack_110 [4];
  ulong ***pppuStack_100;
  undefined8 uStack_f8;
  ulong ***pppuStack_f0;
  ulong ****ppppuStack_e8;
  ulong ****ppppuStack_c0;
  ulong ****ppppuStack_b8;
  long lStack_b0;
  int iStack_a8;
  undefined7 uStack_a4;
  undefined4 uStack_9d;
  int iStack_98;
  undefined8 uStack_94;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  byte bStack_69;
  byte *pbVar3;
  
  puVar2 = auStack_150;
  pbVar3 = (byte *)auStack_150;
  pppppuVar16 = param_3;
  pppppuVar20 = param_4;
  func_0x00010bce37ac();
  FUN_10bcde014();
  func_0x00010bcdd9d8();
  uVar8 = (int)pppppuVar20 - 1;
  uVar4 = 7 < uVar8;
  cVar5 = SBORROW4(uVar8,8);
  cVar6 = (int)pppppuVar20 + -9 < 0;
  uVar7 = uVar8 == 8;
  switch(uVar8) {
  case 0:
    func_0x00010bce346c();
    pppppuVar14 = pppppuVar20;
    func_0x00010bce36f0();
    pppppuVar19 = pppppuVar14;
    func_0x00010bce339c(pppppuVar20[1]);
    pppppuVar10 = pppppuVar19;
    func_0x00010bce339c(pppppuVar14[1]);
    if (pppppuVar19 == (ulong *****)0x0 && pppppuVar10 == (ulong *****)0x0) {
      func_0x00010bce3f60();
      break;
    }
    if (pppppuVar19 == (ulong *****)0x0) {
      func_0x00010bce40a4();
code_r0x00010047be50:
      func_0x00010bce3a0c();
      uVar28 = 3;
      *extraout_x8_04 = 0xc;
      if (param_2 != (ulong *****)0x0) {
        lVar26 = 0x28;
        uStack_188 = pppppuVar14;
        ppppuStack_180 = (ulong ****)param_4;
        ppppuStack_178 = (ulong ****)param_3;
        func_0x000107c60e20();
        uVar28 = 3;
        func_0x000107c2b9d0();
        *extraout_x8_04 = lVar26 + 1;
      }
      auVar29._8_8_ = uVar28;
      auVar29._0_8_ = extraout_x8_04;
      return auVar29;
    }
    if ((pppppuVar10 == (ulong *****)0x0) && ((*(byte *)((long)unaff_x20 + 0x2d) & 1) == 0)) {
      func_0x00010bce4014();
      goto code_r0x00010047be50;
    }
    func_0x00010bce3ba4();
    FUN_10bce32b0();
    param_2 = (ulong *****)(ulong)*(uint *)(pppppuVar20[1] + 10);
    func_0x00010bce38d8(&pppuStack_118,param_2);
    *unaff_x19 = (ulong ****)pppuStack_118;
    ppppuVar18 = (ulong ****)pppuStack_118;
    if (((ulong)pppuStack_118 & 1) != 0) {
      do {
        func_0x00010bce3290();
      } while (extraout_w10_03 != 0);
      ppppuVar18 = *unaff_x19;
    }
    if (ppppuVar18 == (ulong ****)0x0) {
      func_0x00010bce3498();
      func_0x00010bce360c();
      func_0x00010bce36dc();
      func_0x00010bce33e4();
      func_0x00010bcdfa04(&pppuStack_118);
      func_0x00010bce36d4();
      func_0x00010bcdfa04(&pppuStack_118);
      func_0x000107c27958(&ppppuStack_130,aiStack_110);
      pppppuVar20 = (ulong *****)ppppuStack_128;
      param_2 = (ulong *****)ppppuStack_130;
      if (-1 < (char)bStack_119) {
        pppppuVar20 = (ulong *****)(ulong)bStack_119;
        param_2 = &ppppuStack_130;
      }
      FUN_10bce42f0(&pppuStack_100,*param_4,param_2,pppppuVar20);
      *unaff_x19 = (ulong ****)pppuStack_100;
      if (((ulong)pppuStack_100 & 1) == 0) {
        if ((ulong ****)pppuStack_100 == (ulong ****)0x0) {
          func_0x00010bce3498();
          FUN_10bcddffc(&pppuStack_100);
          if (pppppuVar10 == (ulong *****)0x0) {
            iStack_a8 = 0;
            ppppuStack_b8 = (ulong ****)0x0;
          }
          else {
            param_2 = (ulong *****)(ulong)*(uint *)(pppppuVar14[1] + 10);
            func_0x00010bce38d8(&ppppuStack_c0,param_2);
            func_0x00010bce375c();
            ppppuVar18 = extraout_x8_05;
            if (((ulong)extraout_x8_05 & 1) != 0) {
              do {
                func_0x00010bce3290();
              } while (extraout_w10_04 != 0);
              ppppuVar18 = *unaff_x19;
            }
            if (ppppuVar18 != (ulong ****)0x0) {
              func_0x00010bce37b8();
              goto code_r0x00010bcdf1a8;
            }
            func_0x00010bce3498();
            func_0x00010bce38b8();
            func_0x00010bce37b8();
            iStack_a8 = (int)lStack_b0;
          }
          lStack_b0 = 0;
          uStack_a4 = 0;
          uStack_9d = 0;
          uStack_94 = 0x7ff8000000000000;
          uStack_8c = uRam0000000113375758;
          uStack_88 = uRam0000000113375758;
          uStack_80 = 0;
          uStack_78 = 0;
          param_2 = &ppppuStack_c0;
          ppppuStack_c0 = ppppuStack_b8;
          ppppuStack_b8 = (ulong ****)((long)ppppuStack_b8 + (long)iStack_a8);
          iStack_98 = iStack_a8;
          FUN_10bcde95c(&pppuStack_f0,uStack_f8,param_2);
          func_0x00010bce3d30();
          ppppuVar18 = extraout_x8_11;
          if (((ulong)extraout_x8_11 & 1) != 0) {
            do {
              func_0x00010bce3290();
            } while (extraout_w10_10 != 0);
            ppppuVar18 = *unaff_x19;
          }
          if (ppppuVar18 == (ulong ****)0x0) {
            func_0x00010bce3498();
            FUN_10bce0550(&pppuStack_f0);
            bStack_69 = 0;
            FUN_10bcde014();
            iVar27 = (int)uStack_f8;
            func_0x00010bcdd9d8();
            if (iVar27 == 0) {
              func_0x00010bce35e4();
              FUN_10bce1318();
            }
            else {
              func_0x00010bce37e0();
              func_0x00010bce360c();
              param_2 = (ulong *****)&UNK_10f830fee;
              func_0x00010bce36dc();
              func_0x00010bce33e4();
              func_0x00010bce35e4();
              func_0x00010bce3c14();
            }
            if (*unaff_x19 == (ulong ****)0x0) {
              func_0x00010bce3498();
              func_0x00010bce344c();
              if ((bStack_69 & 1) == 0) {
                func_0x00010bce360c();
              }
              param_2 = (ulong *****)&DAT_10f2da10d;
              func_0x00010bce336c();
              *unaff_x19 = (ulong ****)0x0;
            }
          }
          FUN_10bcdf948(&pppuStack_f0);
          func_0x00010b4d3fe8(&ppppuStack_c0);
        }
      }
      else {
        do {
          func_0x00010bce3290();
        } while (extraout_w10_08 != 0);
      }
code_r0x00010bcdf1a8:
      func_0x000107c31550(&pppuStack_100);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppuStack_130);
    }
    pppppuVar20 = (ulong *****)&pppuStack_118;
    goto code_r0x00010bcdf2e0;
  case 1:
    func_0x00010bce346c();
    pppppuVar10 = pppppuVar20;
    func_0x00010bce32a0();
    if (pppppuVar10 == (ulong *****)0x0) {
      func_0x00010bce35e4();
      pppppuVar16 = pppppuVar20;
      func_0x00010bce3a0c();
      pbVar3 = abStack_3d8 + 0x1b8;
      unaff_x29 = &ppppuStack_160;
      pppppuVar19 = pppppuVar16;
      ppppuStack_180 = (ulong ****)pppppuVar20;
      ppppuStack_178 = (ulong ****)param_3;
      func_0x00010bce327c();
      uStack_188 = (ulong *****)extraout_x8_12;
      func_0x00010bce3c44(pppppuVar19[1]);
      if (!(bool)uVar4 || (bool)uVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bce0608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)(byte)(&UNK_10e606534)[extraout_x9_00] * 4 + 0x10bce060c))();
        auVar32._8_8_ = param_2;
        auVar32._0_8_ = pppppuVar10;
        return auVar32;
      }
      func_0x00010bce36a8();
      ppppuStack_1b8 = (ulong ****)pppppuVar10;
      func_0x0001089ac660(&puStack_1e8,*(undefined4 *)(pppppuVar16[1] + 9));
      unaff_x20 = (ulong *****)apppuStack_208;
      func_0x000107c2ba40(apppuStack_208,&ppppuStack_1b8,&puStack_1e8);
      func_0x00010bce32f0();
      param_2 = extraout_x11;
      unaff_x19 = extraout_x10_04;
      if (cVar6 == cVar5) {
        param_2 = extraout_x8_13;
        unaff_x19 = unaff_x20;
      }
      func_0x00010bce3630();
      func_0x00010bce3694();
      func_0x00010bce3244(uStack_188);
      if ((bool)uVar7) {
        auVar33._8_8_ = param_2;
        auVar33._0_8_ = unaff_x19;
        return auVar33;
      }
      ___stack_chk_fail();
      func_0x00010bce36e8();
      pppppuVar10 = (ulong *****)&pppuStack_1f0;
      func_0x000107c31550();
      func_0x00010bce3694();
      unaff_x30 = FUN_10bce0f24;
      func_0x00010bce35bc();
    }
    else {
      func_0x00010bce35e4();
      pppppuVar19 = pppppuVar20;
      func_0x00010bce3a0c();
      pppppuVar16 = param_3;
    }
    puVar2 = (undefined4 *)(pbVar3 + -0xb0);
    *(ulong ******)(pbVar3 + -0x30) = pppppuVar20;
    *(ulong ******)(pbVar3 + -0x28) = pppppuVar16;
    *(ulong ******)(pbVar3 + -0x20) = unaff_x20;
    *(ulong ******)(pbVar3 + -0x18) = unaff_x19;
    *(undefined8 ******)(pbVar3 + -0x10) = unaff_x29;
    *(code **)(pbVar3 + -8) = unaff_x30;
    unaff_x29 = (undefined8 *****)(pbVar3 + -0x10);
    pppppuVar16 = pppppuVar19;
    func_0x00010bce327c();
    *(undefined8 *)(pbVar3 + -0x38) = extraout_x8_14;
    func_0x00010bce3c44(pppppuVar16[1]);
    if (!(bool)uVar4 || (bool)uVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bce0f68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10e606546)[extraout_x9_01] * 4 + 0x10bce0f6c))();
      auVar34._8_8_ = param_2;
      auVar34._0_8_ = pppppuVar10;
      return auVar34;
    }
    func_0x00010bce36a8();
    *(ulong ******)(pbVar3 + -0x68) = pppppuVar10;
    *(ulong ******)(pbVar3 + -0x60) = param_2;
    func_0x00010bce3ef8();
    func_0x00010bce3578();
    func_0x00010bce370c();
    param_2 = extraout_x11_00;
    if (cVar6 == cVar5) {
      param_2 = extraout_x8_15;
    }
    func_0x00010bce3630();
    func_0x00010bce3744();
    func_0x00010bce3244(*(undefined8 *)(pbVar3 + -0x38));
    if ((bool)uVar7) {
      auVar38._8_8_ = param_2;
      auVar38._0_8_ = pppppuVar10;
      return auVar38;
    }
    ___stack_chk_fail();
    pppppuVar14 = pppppuVar10;
    func_0x00010bce368c();
    unaff_x30 = FUN_10bce12c0;
    func_0x00010bce35bc();
    goto code_r0x00010bce12c0;
  case 2:
    func_0x00010bce3378();
    func_0x00010bce3a0c();
    pppppuVar14 = pppppuVar20;
    pppppuVar10 = unaff_x19;
    pppppuVar19 = param_3;
    pppppuVar20 = param_4;
code_r0x00010bce12c0:
    *(ulong ******)((long)puVar2 + -0x30) = pppppuVar20;
    *(ulong ******)((long)puVar2 + -0x28) = pppppuVar19;
    *(ulong ******)((long)puVar2 + -0x20) = unaff_x20;
    *(ulong ******)((long)puVar2 + -0x18) = pppppuVar10;
    *(undefined8 ******)((long)puVar2 + -0x10) = unaff_x29;
    *(code **)((long)puVar2 + -8) = unaff_x30;
    func_0x00010bce33a8();
    func_0x00010bce3e90();
    func_0x00010bce3654();
    puVar1 = *(ulong **)((long)puVar2 + -0x18);
    uVar28 = *(undefined8 *)((long)puVar2 + -0x30);
    uVar23 = *(undefined8 *)((long)puVar2 + -0x28);
    *(ulong ******)((long)puVar2 + -0x60) = unaff_x28;
    *(undefined8 *)((long)puVar2 + -0x58) = unaff_x27;
    *(undefined8 *)((long)puVar2 + -0x50) = unaff_x26;
    *(undefined8 *)((long)puVar2 + -0x48) = unaff_x25;
    *(ulong ******)((long)puVar2 + -0x40) = unaff_x24;
    *(ulong *)((long)puVar2 + -0x38) = param_5;
    *(undefined8 *)((long)puVar2 + -0x30) = uVar28;
    *(undefined8 *)((long)puVar2 + -0x28) = uVar23;
    *(undefined8 *)((long)puVar2 + -0x20) = *(undefined8 *)((long)puVar2 + -0x20);
    *(ulong **)((long)puVar2 + -0x18) = puVar1;
    *(undefined8 *)((long)puVar2 + -0x10) = *(undefined8 *)((long)puVar2 + -0x10);
    *(undefined8 *)((long)puVar2 + -8) = *(undefined8 *)((long)puVar2 + -8);
    func_0x00010bce3d90();
    func_0x00010bce327c();
    *(undefined8 *)((long)puVar2 + -0x70) = extraout_x8_16;
    func_0x00010bce3ba4();
    FUN_10bce32b0();
    func_0x00010bce3b6c();
    *(undefined1 *)((long)puVar2 + -0xe9) = 1;
    pppppuVar10 = pppppuVar14;
    for (pppppuVar20 = (ulong *****)0x0; uVar7 = pppppuVar20 == pppppuVar14, !(bool)uVar7;
        pppppuVar20 = (ulong *****)((long)pppppuVar20 + 1)) {
      func_0x00010bce3e88();
      *(undefined8 *)((long)puVar2 + -0x100) = 0;
      *(ulong ******)((long)puVar2 + -0xf8) = pppppuVar10 + (long)pppppuVar20 * 5;
      func_0x00010bce32e4();
      func_0x00010bce3c04();
      func_0x00010bce3c04();
      pcVar24 = *(char **)((long)puVar2 + -0xf8);
      func_0x00010bce3f00();
      pppppuVar16 = pppppuVar10 + 4;
      pppppuVar10 = (ulong *****)((long)puVar2 + -0x110);
      FUN_10bce221c((undefined1 *)((long)puVar2 + -0x110),pcVar24);
      func_0x00010bce3878();
      uVar9 = extraout_x8_17;
      if ((extraout_x8_17 & 1) != 0) {
        do {
          func_0x00010bce3290();
        } while (extraout_w10_12 != 0);
        uVar9 = *puVar1;
      }
      if (uVar9 != 0) goto LAB_10bce2184;
      func_0x00010bce3498();
      func_0x00010bce3e68();
      if ((*(byte *)((long)puVar2 + -0x108) & 1) != 0) goto LAB_10bce2174;
      puVar15 = (undefined1 *)((long)puVar2 + -0xe9);
      func_0x00010bce37e0();
      func_0x00010bce360c();
      func_0x00010bce3c04();
      puVar25 = *(undefined4 **)((long)puVar2 + -0xf8);
      func_0x00010bce3f00();
      ppppuVar18 = pppppuVar10[1];
      iVar27 = *(int *)(ppppuVar18 + 9) + -3;
      cVar5 = SBORROW4(iVar27,0xf);
      cVar6 = *(int *)(ppppuVar18 + 9) + -0x12 < 0;
      uVar7 = iVar27 == 0xf;
      switch(iVar27) {
      case 0:
      case 0xd:
      case 0xf:
        pcVar24 = (char *)(ulong)*(uint *)(ppppuVar18 + 10);
        func_0x00010bce374c();
        FUN_10bce1c08();
        func_0x00010bce3804();
        if ((extraout_x8_18 & 1) == 0) {
          if (extraout_x8_18 == 0) {
            func_0x00010bce3498();
            FUN_10bcddea0((undefined1 *)((long)puVar2 + -0xa0));
            func_0x00010bce37c8();
            goto code_r0x00010bce2070;
          }
        }
        else {
          do {
            func_0x00010bce3290();
          } while (extraout_w10_13 != 0);
        }
        break;
      case 1:
      case 3:
        pcVar24 = (char *)(ulong)*(uint *)(ppppuVar18 + 10);
        func_0x00010bce374c();
        FUN_10bce1c5c();
        func_0x00010bce3804();
        if ((extraout_x8_20 & 1) == 0) {
          if (extraout_x8_20 == 0) {
            func_0x00010bce3498();
            FUN_10bcddef0((undefined1 *)((long)puVar2 + -0xa0));
            func_0x00010bce37d0();
            goto code_r0x00010bce2070;
          }
        }
        else {
          do {
            func_0x00010bce3290();
          } while (extraout_w10_15 != 0);
        }
        break;
      case 2:
      case 0xc:
      case 0xe:
        FUN_10bce1d64(puVar25,*(undefined4 *)(ppppuVar18 + 10));
        *(undefined4 *)((long)puVar2 + -0x98) = *puVar25;
        *(undefined8 *)((long)puVar2 + -0xa0) = 0;
        func_0x00010bce32e4();
        func_0x00010bce3c0c();
        FUN_10bcdff8c(param_2,*(undefined4 *)((long)puVar2 + -0x98));
        goto code_r0x00010bce2070;
      case 4:
      case 10:
        pcVar24 = (char *)(ulong)*(uint *)(ppppuVar18 + 10);
        func_0x00010bce374c();
        FUN_10bce1cb0();
        func_0x00010bce3804();
        if ((extraout_x8_19 & 1) == 0) {
          if (extraout_x8_19 == 0) {
            func_0x00010bce3498();
            func_0x00010bcdfd30((undefined1 *)((long)puVar2 + -0xa0));
            func_0x00010bcdffb4(param_2,*(undefined4 *)((long)puVar2 + -0x98));
            goto code_r0x00010bce2070;
          }
        }
        else {
          do {
            func_0x00010bce3290();
          } while (extraout_w10_14 != 0);
        }
        break;
      case 5:
        pcVar24 = (char *)(ulong)*(uint *)(ppppuVar18 + 10);
        func_0x00010bce374c();
        FUN_10bce1d08();
        func_0x00010bce3804();
        if ((extraout_x8_21 & 1) == 0) {
          if (extraout_x8_21 == 0) {
            func_0x00010bce3498();
            func_0x00010bcdfd48((undefined1 *)((long)puVar2 + -0xa0));
            uVar7 = *(char *)((long)puVar2 + -0x98) == '\0';
            pcVar24 = "true";
            if ((bool)uVar7) {
              pcVar24 = "false";
            }
            func_0x00010bcdffdc(param_2,pcVar24);
            goto code_r0x00010bce2070;
          }
        }
        else {
          do {
            func_0x00010bce3290();
          } while (extraout_w10_16 != 0);
        }
        break;
      case 6:
        pcVar24 = (char *)(ulong)*(uint *)(ppppuVar18 + 10);
        func_0x00010bce374c();
        FUN_10bce1714();
        func_0x00010bce3804();
        if ((extraout_x8_22 & 1) == 0) {
          if (extraout_x8_22 == 0) {
            func_0x00010bce3498();
            func_0x00010bcdfa04((undefined1 *)((long)puVar2 + -0xa0));
            func_0x00010bce36d4();
            goto code_r0x00010bce2070;
          }
        }
        else {
          do {
            func_0x00010bce3290();
          } while (extraout_w10_17 != 0);
        }
        break;
      default:
        pppppuVar19 = pppppuVar10;
        func_0x00010bce3ed0();
        *(ulong ******)((long)puVar2 + -0xa0) = pppppuVar19;
        *(undefined1 **)((long)puVar2 + -0x98) = puVar15;
        func_0x0001089ac660((undefined1 *)((long)puVar2 + -0xd0),*(undefined4 *)(pppppuVar10[1] + 9)
                           );
        func_0x00010bce3be4();
        func_0x00010bce38a4();
        pcVar24 = extraout_x11_01;
        pppppuVar10 = extraout_x10_05;
        if (cVar6 == cVar5) {
          pcVar24 = extraout_x8_23;
          pppppuVar10 = (ulong *****)((long)puVar2 + -0xe8);
        }
        func_0x00010bce3630(pppppuVar10,pcVar24);
        func_0x00010bce3884();
        goto LAB_10bce2124;
      case 0xb:
        FUN_10bce1d64(puVar25,*(undefined4 *)(ppppuVar18 + 10));
        *(undefined4 *)((long)puVar2 + -0x98) = *puVar25;
        *(undefined8 *)((long)puVar2 + -0xa0) = 0;
        func_0x00010bce32e4();
        func_0x00010bce3c0c();
        FUN_10bce1940(param_2,pppppuVar10,*(undefined4 *)((long)puVar2 + -0x98),0);
code_r0x00010bce2070:
        func_0x00010bce3994();
        *puVar1 = 0;
        goto code_r0x00010bce212c;
      }
      func_0x00010bce3994();
LAB_10bce2124:
      if (*puVar1 != 0) {
LAB_10bce2184:
        func_0x00010bce36e8();
        func_0x00010bce36fc();
        goto LAB_10bce21b0;
      }
code_r0x00010bce212c:
      func_0x00010bce3498();
      func_0x00010bce3d9c(param_2);
      func_0x00010bce35f0();
      pcVar24 = " ";
      pppppuVar16 = param_2;
      func_0x00010bce373c(param_2," ");
      func_0x00010bce3f00();
      pppppuVar10 = pppppuVar16;
      func_0x00010bce3c04();
      pppppuVar16 = pppppuVar16 + 4;
      func_0x00010bce35e4();
      FUN_10bce0f24();
      if (*puVar1 != 0) goto LAB_10bce2184;
      func_0x00010bce3498();
LAB_10bce2174:
      func_0x00010bce36e8();
      func_0x00010bce36fc();
    }
    func_0x00010bce344c();
    if ((*(byte *)((long)puVar2 + -0xe9) & 1) == 0) {
      func_0x00010bce360c();
    }
    pcVar24 = "}";
    func_0x00010bce336c();
    *puVar1 = 0;
LAB_10bce21b0:
    func_0x00010bce3244(*(undefined8 *)((long)puVar2 + -0x70));
    if ((bool)uVar7) {
      auVar41._8_8_ = pcVar24;
      auVar41._0_8_ = pppppuVar10;
      return auVar41;
    }
    ___stack_chk_fail();
    func_0x00010bce3994();
    func_0x00010bce36e8();
    func_0x00010bce36fc();
    func_0x00010bce35bc();
    *(undefined8 *)((long)puVar2 + -0x140) = uVar28;
    *(undefined8 *)((long)puVar2 + -0x138) = uVar23;
    *(ulong ******)((long)puVar2 + -0x130) = param_2;
    *(ulong ******)((long)puVar2 + -0x128) = pppppuVar10;
    *(undefined1 **)((long)puVar2 + -0x120) = (undefined1 *)((long)puVar2 + -0x10);
    *(code **)((long)puVar2 + -0x118) = FUN_10bce221c;
    pppppuVar20 = pppppuVar16;
    func_0x00010bce37ac();
    FUN_10bcde0c0();
    func_0x00010bcdd9d8();
    if ((int)pppppuVar20 == 5) {
      pppppuVar20 = pppppuVar16;
      FUN_10bce41b0((undefined1 *)((long)puVar2 + -0x160),pppppuVar16);
      uVar9 = *(ulong *)((long)puVar2 + -0x160);
      *(ulong *)((long)puVar2 + -0x168) = uVar9;
      if ((uVar9 & 1) == 0) {
        if (uVar9 != 0) goto LAB_10bce22d0;
        func_0x00010bce3798();
        FUN_10bcddffc((undefined1 *)((long)puVar2 + -0x160));
        uVar23 = *(undefined8 *)((long)puVar2 + -0x158);
        FUN_10bce1db8(param_2,*(undefined4 *)(pppppuVar16[1] + 10));
        *(undefined8 *)((long)puVar2 + -0x150) = 0;
        *(ulong ******)((long)puVar2 + -0x148) = param_2;
        *(undefined8 *)((long)puVar2 + -0x168) = 0;
        func_0x00010bce3798();
        FUN_10bce1b40((undefined1 *)((long)puVar2 + -0x150));
        uVar28 = *(undefined8 *)((long)puVar2 + -0x148);
        FUN_10bce2338(uVar28,uVar23);
        cVar6 = (char)uVar28;
        *(undefined8 *)((long)puVar2 + -0x168) = 0;
        pppppuVar20 = (ulong *****)((long)puVar2 + -0x150);
        func_0x000107c31550(pppppuVar20);
      }
      else {
        do {
          func_0x00010bce3290();
        } while (extraout_w10_18 != 0);
LAB_10bce22d0:
        cVar6 = '\0';
      }
      func_0x00010bce36fc();
      pcVar24 = *(char **)((long)puVar2 + -0x168);
      if (pcVar24 != (char *)0x0) {
        FUN_10bcdff38(pppppuVar10);
        func_0x00010bce3798();
        goto LAB_10bce22ec;
      }
      func_0x00010bce3798();
      *(char *)(pppppuVar10 + 1) = cVar6;
    }
    else {
      *(char *)(pppppuVar10 + 1) = '\0';
    }
    *pppppuVar10 = (ulong ****)0x0;
    pppppuVar10 = pppppuVar20;
LAB_10bce22ec:
    auVar35._8_8_ = pcVar24;
    auVar35._0_8_ = pppppuVar10;
    return auVar35;
  case 3:
    func_0x00010bce3378();
    func_0x00010bce3a0c();
    ppppuStack_b8 = (ulong ****)param_3;
code_r0x00010bce12ec:
    ppppuStack_180 = (ulong ****)param_4;
    ppppuStack_178 = ppppuStack_b8;
    ppppuStack_160 = unaff_x29;
    pcStack_158 = unaff_x30;
    func_0x00010bce33a8();
    func_0x00010bce3e90();
    func_0x00010bce3654();
    ppppuVar18 = ppppuStack_178;
    uStack_188 = (ulong *****)param_5;
    func_0x00010bce3d90();
    func_0x00010bce327c();
    puVar12 = &DAT_10f62a9e8;
    ppppuStack_1b8 = extraout_x8_24;
    FUN_10bce32b0();
    func_0x00010bce3b6c();
    apppuStack_231[0]._0_1_ = 1;
    pppppuVar10 = pppppuVar20;
    for (pppppuVar16 = (ulong *****)0x0; uVar7 = pppppuVar16 == pppppuVar20, !(bool)uVar7;
        pppppuVar16 = (ulong *****)((long)pppppuVar16 + 1)) {
      pppppuVar10 = (ulong *****)ppppuVar18;
      FUN_10bcde0c0();
      func_0x00010bcdd9d8();
      uVar8 = (uint)pppppuVar10;
      uVar4 = 4 < uVar8;
      cVar5 = SBORROW4(uVar8,5);
      cVar6 = (int)(uVar8 - 5) < 0;
      uVar7 = uVar8 == 5;
      if ((bool)uVar7) {
        pppppuVar10 = (ulong *****)ppppuVar18;
        FUN_10bce41b0(&pppuStack_218);
        *unaff_x19 = (ulong ****)pppuStack_218;
        if (((ulong)pppuStack_218 & 1) == 0) {
          if ((ulong ****)pppuStack_218 != (ulong ****)0x0) goto LAB_10bce24a4;
          func_0x00010bce3498();
          ppppuVar11 = &pppuStack_218;
          FUN_10bcddffc();
          puVar12 = puStack_210;
          func_0x00010bce3e88();
          ppppuStack_1e0 = ppppuVar11 + (long)pppppuVar16 * 5;
          puStack_1e8 = (undefined *)0x0;
          func_0x00010bce32e4();
          func_0x00010bce3e80();
          pppppuVar14 = (ulong *****)ppppuStack_1e0;
          FUN_10bce2338(ppppuStack_1e0,puVar12);
          *unaff_x19 = (ulong ****)0x0;
          pppppuVar10 = pppppuVar14;
          func_0x00010bce37fc();
        }
        else {
          do {
            func_0x00010bce3290();
          } while (extraout_w10_19 != 0);
LAB_10bce24a4:
          pppppuVar14 = (ulong *****)0x0;
        }
        func_0x00010bce3ac0();
        if (*unaff_x19 != (ulong ****)0x0) goto LAB_10bce2850;
        func_0x00010bce3498();
        if (((ulong)pppppuVar14 & 1) == 0) goto LAB_10bce24bc;
      }
      else {
LAB_10bce24bc:
        pppppuVar14 = (ulong *****)(abStack_3d8 + 0x1a7);
        func_0x00010bce37e0();
        func_0x00010bce360c();
        func_0x00010bce3c44(ppppuVar18[1]);
        if (!(bool)uVar4 || (bool)uVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bce24e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ulong)(byte)(&UNK_10e606568)[extraout_x9_02] * 4 + 0x10bce24e4))();
          auVar36._8_8_ = pppppuVar14;
          auVar36._0_8_ = pppppuVar10;
          return auVar36;
        }
        puVar12 = &UNK_10f830e44;
        func_0x000107c284bc();
        puStack_1e8 = puVar12;
        ppppuStack_1e0 = (ulong ****)pppppuVar14;
        func_0x0001089ac660(&pppuStack_218,*(undefined4 *)(ppppuVar18[1] + 9));
        func_0x00010bce3b7c();
        func_0x00010bce3d18();
        puVar12 = extraout_x11_02;
        pppppuVar10 = extraout_x10_06;
        if (cVar6 == cVar5) {
          puVar12 = extraout_x8_25;
          pppppuVar10 = extraout_x9_03;
        }
        func_0x00010bce3630(pppppuVar10,puVar12);
        func_0x00010bce3bfc();
        if (*unaff_x19 != (ulong ****)0x0) goto LAB_10bce2850;
        func_0x00010bce3498();
      }
    }
    func_0x00010bce344c();
    if (((byte)apppuStack_231[0] & 1) == 0) {
      func_0x00010bce360c();
    }
    puVar12 = &DAT_10f62a9ea;
    func_0x00010bce336c();
    *unaff_x19 = (ulong ****)0x0;
LAB_10bce2850:
    func_0x00010bce3244(ppppuStack_1b8);
    if ((bool)uVar7) {
      auVar40._8_8_ = puVar12;
      auVar40._0_8_ = pppppuVar10;
      return auVar40;
    }
    ___stack_chk_fail();
    ppuVar13 = &puStack_1e8;
    func_0x000107c31550();
    func_0x00010bce35bc();
    func_0x00010bce3eec();
    if ((ulong)ppuVar13 >> 0x3d == 0) {
      lVar26 = (long)ppuVar13 << 3;
      __Znwm(lVar26);
      auVar37._8_8_ = ppuVar13;
      auVar37._0_8_ = lVar26;
      return auVar37;
    }
    func_0x000104bd35f4();
    puVar21 = ppuVar13[2];
    while (puVar21 != ppuVar13[1]) {
      puVar21 = puVar21 + -8;
      ppuVar13[2] = puVar21;
    }
    if (*ppuVar13 != (undefined *)0x0) {
      __ZdlPv();
    }
    auVar39._8_8_ = puVar12;
    auVar39._0_8_ = ppuVar13;
    return auVar39;
  case 4:
    func_0x00010bce346c();
    func_0x00010bce32a0();
    if (pppppuVar20 == (ulong *****)0x0) {
      func_0x00010bce36f0();
      func_0x00010bce32a0();
      if (pppppuVar20 != (ulong *****)0x0) {
        func_0x00010bce3724();
        FUN_10bce1bb0();
        func_0x00010bce375c();
        ppppuVar18 = extraout_x8_03;
        if (((ulong)extraout_x8_03 & 1) != 0) {
          do {
            func_0x00010bce3290();
          } while (extraout_w10_02 != 0);
          ppppuVar18 = *unaff_x19;
        }
        if (ppppuVar18 == (ulong ****)0x0) {
          func_0x00010bce3498();
          func_0x00010bce37c0();
          uVar7 = !NAN((double)ppppuStack_b8);
          if (NAN((double)ppppuStack_b8)) {
            puVar12 = &UNK_10f831035;
            param_2 = (ulong *****)0x61;
          }
          else {
            func_0x00010bce37c0();
            func_0x00010bce3f34(0x7ff0000000000000,ppppuStack_b8);
            if (!(bool)uVar7) {
              func_0x00010bce37c0();
              func_0x00010bce3f34(0xfff0000000000000,ppppuStack_b8);
              if (!(bool)uVar7) {
                func_0x00010bce37c0();
                func_0x00010bce37d8(ppppuStack_b8);
                goto code_r0x00010bcdf2a4;
              }
            }
            puVar12 = &UNK_10f831097;
            param_2 = (ulong *****)0x66;
          }
          func_0x00010bce3630(puVar12,param_2);
        }
code_r0x00010bcdecbc:
        pppppuVar20 = &ppppuStack_c0;
        goto code_r0x00010bcdf2e0;
      }
      param_2 = (ulong *****)0x3;
      pppppuVar20 = param_4;
      FUN_10bcde02c(param_4,3);
      func_0x00010bce32a0();
      if (pppppuVar20 != (ulong *****)0x0) {
        func_0x00010bce3724();
        FUN_10bce1714();
        func_0x00010bce375c();
        ppppuVar18 = extraout_x8_06;
        if (((ulong)extraout_x8_06 & 1) != 0) {
          do {
            func_0x00010bce3290();
          } while (extraout_w10_05 != 0);
          ppppuVar18 = *unaff_x19;
        }
        if (ppppuVar18 == (ulong ****)0x0) {
          func_0x00010bce3498();
          func_0x00010bce38b8();
          param_2 = (ulong *****)ppppuStack_b8;
          func_0x00010bce36d4();
code_r0x00010bcdf2a4:
          *unaff_x19 = (ulong ****)0x0;
        }
        goto code_r0x00010bcdecbc;
      }
      param_2 = (ulong *****)0x4;
      pppppuVar20 = param_4;
      FUN_10bcde02c(param_4,4);
      func_0x00010bce32a0();
      if (pppppuVar20 != (ulong *****)0x0) {
        func_0x00010bce3724();
        FUN_10bce1d08();
        func_0x00010bce375c();
        ppppuVar18 = extraout_x8_08;
        if (((ulong)extraout_x8_08 & 1) != 0) {
          do {
            func_0x00010bce3290();
          } while (extraout_w10_07 != 0);
          ppppuVar18 = *unaff_x19;
        }
        if (ppppuVar18 == (ulong ****)0x0) {
          func_0x00010bce3498();
          func_0x00010bcdfd48(&ppppuStack_c0);
          param_2 = (ulong *****)"true";
          if ((char)ppppuStack_b8 == '\0') {
            param_2 = (ulong *****)&DAT_10f6842c6;
          }
          func_0x00010bce3614();
          goto code_r0x00010bcdf2a4;
        }
        goto code_r0x00010bcdecbc;
      }
      param_2 = (ulong *****)0x5;
      pppppuVar20 = param_4;
      FUN_10bcde02c(param_4,5);
      pppppuVar10 = pppppuVar20;
      func_0x00010bce32a0();
      if (pppppuVar10 == (ulong *****)0x0) {
        param_2 = (ulong *****)0x6;
        FUN_10bcde02c();
        pppppuVar20 = param_4;
        func_0x00010bce32a0();
        if (pppppuVar20 == (ulong *****)0x0) {
          if ((param_5 & 1) == 0) {
            func_0x00010bce3810();
            func_0x00010bcdff0c(&ppppuStack_c0);
            pppppuVar10 = &ppppuStack_c0;
            func_0x00010ae6c700();
            func_0x00010bce3a00();
            func_0x000107c31550();
            uVar28 = 0x10bcdf5fc;
            func_0x00010bce35bc();
            if (*(char *)(pppppuVar10 + 5) != '\x01') {
              auVar31._8_8_ = param_2;
              auVar31._0_8_ = pppppuVar10;
              return auVar31;
            }
            goto SUB_10bcdf610;
          }
          goto code_r0x00010bcdeccc;
        }
        func_0x00010bce3dd4(param_4[1]);
        pppuStack_f0 = (ulong ***)0x0;
        ppppuStack_e8 = (ulong ****)pppppuVar20;
        func_0x00010bce32e4();
        FUN_10bce41b0(&ppppuStack_c0,param_4);
        func_0x00010bce375c();
        if ((extraout_x8_10 & 1) == 0) {
          if (extraout_x8_10 == 0) {
            func_0x00010bce3498();
            FUN_10bcddffc(&ppppuStack_c0);
            pppppuVar20 = (ulong *****)&pppuStack_f0;
            FUN_10bce1b40();
            func_0x00010bce35e4();
            unaff_x30 = (code *)0x10bcdf370;
            unaff_x29 = (undefined8 *****)&stack0xfffffffffffffff0;
            goto code_r0x00010bce12ec;
          }
        }
        else {
          do {
            func_0x00010bce3290();
          } while (extraout_w10_11 != 0);
        }
      }
      else {
        func_0x00010bce3dd4(pppppuVar20[1]);
        pppuStack_f0 = (ulong ***)0x0;
        ppppuStack_e8 = (ulong ****)pppppuVar10;
        func_0x00010bce32e4();
        FUN_10bce41b0(&ppppuStack_c0,pppppuVar20);
        func_0x00010bce375c();
        if ((extraout_x8_09 & 1) == 0) {
          if (extraout_x8_09 == 0) {
            func_0x00010bce3498();
            FUN_10bcddffc(&ppppuStack_c0);
            FUN_10bce1b40(&pppuStack_f0);
            func_0x00010bce35e4();
            FUN_10bce12c0();
          }
        }
        else {
          do {
            func_0x00010bce3290();
          } while (extraout_w10_09 != 0);
        }
      }
      pppppuVar20 = &ppppuStack_c0;
code_r0x00010bcdf2d8:
      func_0x000107c31550(pppppuVar20);
      goto code_r0x00010bcdf2dc;
    }
    func_0x00010bce3cc4();
    pppppuVar16 = (ulong *****)0x4;
    pppppuVar10 = unaff_x20;
    break;
  default:
    func_0x00010bce3ba4();
    FUN_10bce32b0();
    ppppuStack_c0 = (ulong ****)CONCAT71(ppppuStack_c0._1_7_,1);
    func_0x00010bce3378();
    FUN_10bce1318();
    if (*unaff_x19 != (ulong ****)0x0) goto LAB_10bcdf2e4;
    func_0x00010bce3498();
    func_0x00010bce344c();
    if (((ulong)ppppuStack_c0 & 1) == 0) {
      func_0x00010bce360c();
    }
    func_0x00010bce33f8();
    pppppuVar10 = pppppuVar20;
    break;
  case 6:
    func_0x00010bce346c();
    func_0x00010bce32a0();
    if (pppppuVar20 == (ulong *****)0x0) {
      func_0x00010bce3f54();
    }
    else {
      func_0x00010bce38c0();
      func_0x00010bce3d30();
      ppppuVar18 = extraout_x8;
      if (((ulong)extraout_x8 & 1) != 0) {
        do {
          func_0x00010bce3290();
        } while (extraout_w10 != 0);
        ppppuVar18 = *unaff_x19;
      }
      if (ppppuVar18 != (ulong ****)0x0) goto code_r0x00010bcdf2dc;
    }
    func_0x00010bce3498();
    func_0x00010bce35b4();
    func_0x00010bce3c94();
    if (cVar6 == cVar5) {
      func_0x00010bce35b4();
      func_0x00010bce3c64();
      if (cVar6 != cVar5) {
        func_0x00010bce35b4();
        func_0x00010bce3b04();
        func_0x00010bce36f0();
        uVar9 = (ulong)*(uint *)(pppppuVar20[1] + 10);
        func_0x00010bce3638();
        if (uVar9 == 0) {
          aiStack_110[0] = 0;
        }
        else {
          FUN_10bce1d64(param_3,*(undefined4 *)(pppppuVar20[1] + 10));
          aiStack_110[0] = *(int *)param_3;
        }
        pppuStack_118 = (ulong ***)0x0;
        func_0x00010bce32e4();
        func_0x00010bce35b4();
        func_0x00010bce35b4();
        func_0x00010bce35b4();
        func_0x00010bce35b4();
        func_0x00010bce3704();
        func_0x00010bce34a0();
        auStack_150[0] = (int)unaff_x28;
        if (aiStack_110[0] == 0) {
          func_0x00010bce3428();
          func_0x00010bce3b5c();
          func_0x00010bce334c();
          param_2 = extraout_x10_01;
          if (cVar6 == cVar5) {
            param_2 = unaff_x28;
          }
          func_0x00010bce3614();
        }
        else {
          func_0x00010bce3704();
          func_0x00010bce3fc4(aiStack_110[0]);
          lStack_148 = extraout_x8_07;
          uVar9 = extraout_x9;
          while( true ) {
            uVar8 = 0;
            uStack_140 = (uint)uVar9;
            if (extraout_w10_06 != 0) {
              uVar8 = uStack_140 / extraout_w10_06;
            }
            uVar9 = (ulong)uVar8;
            if (uStack_140 != uVar8 * extraout_w10_06) break;
            lStack_148 = lStack_148 + -3;
          }
          func_0x00010bce3428();
          func_0x00010bce3b8c();
          func_0x00010bce334c();
          param_2 = extraout_x10_00;
          if (cVar6 == cVar5) {
            param_2 = unaff_x28;
          }
          func_0x00010bce3614();
        }
code_r0x00010bcdf2c8:
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppuStack_c0);
        *unaff_x19 = (ulong ****)0x0;
        goto code_r0x00010bcdf2d4;
      }
      puVar12 = &UNK_10f83121f;
    }
    else {
      puVar12 = &UNK_10f8311e9;
    }
    param_2 = (ulong *****)0x35;
    func_0x00010bce3630(puVar12,0x35);
    goto code_r0x00010bcdf2dc;
  case 7:
    func_0x00010bce346c();
    func_0x00010bce32a0();
    if (pppppuVar20 == (ulong *****)0x0) {
      func_0x00010bce3f54();
    }
    else {
      func_0x00010bce38c0();
      func_0x00010bce3d30();
      ppppuVar18 = extraout_x8_00;
      if (((ulong)extraout_x8_00 & 1) != 0) {
        do {
          func_0x00010bce3290();
        } while (extraout_w10_00 != 0);
        ppppuVar18 = *unaff_x19;
      }
      if (ppppuVar18 != (ulong ****)0x0) goto code_r0x00010bcdf2dc;
    }
    func_0x00010bce3498();
    func_0x00010bce35b4();
    func_0x00010bce3c7c();
    if ((bool)uVar7 || cVar6 != cVar5) {
      func_0x00010bce35b4();
      func_0x00010bce3cac();
      if ((bool)uVar7 || cVar6 != cVar5) goto code_r0x00010bcded30;
      func_0x00010bce36f0();
      uVar9 = (ulong)*(uint *)(pppppuVar20[1] + 10);
      func_0x00010bce3638();
      if (uVar9 == 0) {
        aiStack_110[0] = 0;
      }
      else {
        pppppuVar16 = param_3;
        FUN_10bce1d64(param_3,*(undefined4 *)(pppppuVar20[1] + 10));
        aiStack_110[0] = *(int *)pppppuVar16;
      }
      pppuStack_118 = (ulong ***)0x0;
      func_0x00010bce32e4();
      func_0x00010bce3704();
      if (aiStack_110[0] < 1000000000) {
        func_0x00010bce3704();
        cVar5 = SBORROW4(aiStack_110[0],-999999999);
        cVar6 = aiStack_110[0] + 999999999 < 0;
        if (aiStack_110[0] < -999999999) goto code_r0x00010bcdeff4;
        func_0x00010bce35b4();
        if (((ulong *****)ppppuStack_e8 != (ulong *****)0x0) &&
           (func_0x00010bce3704(), aiStack_110[0] != 0)) {
          func_0x00010bce35b4();
          param_3 = (ulong *****)ppppuStack_e8;
          func_0x00010bce3704();
          iVar27 = -(aiStack_110[0] >> 0x1f);
          iVar17 = -(int)((long)param_3 >> 0x3f);
          cVar5 = SBORROW4(iVar17,iVar27);
          cVar6 = iVar17 + (aiStack_110[0] >> 0x1f) < 0;
          if (iVar17 == iVar27) goto code_r0x00010bcdf16c;
          puVar12 = &UNK_10f83129c;
          param_2 = (ulong *****)0x24;
          goto code_r0x00010bcdf000;
        }
code_r0x00010bcdf16c:
        func_0x00010bce3704();
        if (aiStack_110[0] == 0) {
          func_0x00010bce35b4();
          func_0x00010bce388c();
          func_0x00010bce334c();
          param_2 = extraout_x10_03;
          if (cVar6 == cVar5) {
            param_2 = param_3;
          }
          func_0x00010bce3614();
        }
        else {
          func_0x00010bce3704();
          func_0x00010bce3fd8(aiStack_110[0]);
          do {
            uVar8 = 0;
            uVar22 = (uint)pppppuVar20;
            if (extraout_w8 != 0) {
              uVar8 = uVar22 / extraout_w8;
            }
            pppppuVar20 = (ulong *****)(ulong)uVar8;
          } while (uVar22 == uVar8 * extraout_w8);
          func_0x00010bce35b4();
          pppppuVar20 = (ulong *****)"-";
          if (-1 < (long)ppppuStack_e8) {
            func_0x00010bce3704();
            if (-1 < aiStack_110[0]) {
              pppppuVar20 = (ulong *****)"";
            }
          }
          pppppuVar16 = pppppuVar20;
          ppppuStack_130 = (ulong ****)pppppuVar20;
          _strlen();
          ppppuStack_128 = (ulong ****)pppppuVar16;
          func_0x00010bce35b4();
          cVar5 = '\0';
          cVar6 = (long)ppppuStack_e8 < 0;
          func_0x00010bce3f40();
          func_0x00010bce3af4();
          func_0x00010bce334c();
          param_2 = extraout_x10_02;
          if (cVar6 == cVar5) {
            param_2 = pppppuVar20;
          }
          func_0x00010bce3614();
        }
        goto code_r0x00010bcdf2c8;
      }
code_r0x00010bcdeff4:
      puVar12 = &UNK_10f830f76;
      param_2 = (ulong *****)0x15;
code_r0x00010bcdf000:
      func_0x00010bce3630(puVar12,param_2);
code_r0x00010bcdf2d4:
      pppppuVar20 = (ulong *****)&pppuStack_118;
      goto code_r0x00010bcdf2d8;
    }
code_r0x00010bcded30:
    func_0x00010bce3a28();
code_r0x00010bcdf2dc:
    pppppuVar20 = (ulong *****)&pppuStack_f0;
code_r0x00010bcdf2e0:
    func_0x000107c31550(pppppuVar20);
LAB_10bcdf2e4:
    func_0x00010bce3a0c(unaff_x30);
    auVar30._8_8_ = param_2;
    auVar30._0_8_ = unaff_x30;
    return auVar30;
  case 8:
    func_0x00010bce346c();
    pppppuVar16 = pppppuVar20;
    func_0x00010bce32a0();
    func_0x00010bce3678();
    func_0x00010bce3fb0();
    for (; unaff_x24 != pppppuVar16; unaff_x24 = (ulong *****)((long)unaff_x24 + 1)) {
      func_0x00010bce37e0();
      param_2 = (ulong *****)(ulong)*(uint *)(pppppuVar20[1] + 10);
      FUN_10bce1714(&ppppuStack_c0,param_2,param_3,unaff_x24);
      func_0x00010bce375c();
      ppppuVar18 = extraout_x8_01;
      if (((ulong)extraout_x8_01 & 1) != 0) {
        do {
          func_0x00010bce3290();
        } while (extraout_w10_01 != 0);
        ppppuVar18 = *unaff_x19;
      }
      if (ppppuVar18 != (ulong ****)0x0) goto code_r0x00010bcdecbc;
      func_0x00010bce3498();
      func_0x00010bce38b8();
      uVar28 = 0;
      for (lVar26 = lStack_b0; lVar26 != 0; lVar26 = lVar26 + -1) {
        func_0x00010bce3b40(uVar28);
        if ((extraout_x10 & 1) == 0) {
          unaff_x28 = (ulong *****)(ulong)*(byte *)((long)unaff_x28 + 1);
code_r0x00010bcdebf8:
          func_0x00010bce3dc8();
          uVar28 = 0;
        }
        else {
          if ((extraout_w9 < 0x1a) ||
             (iVar27 = (int)unaff_x28, iVar27 == 0x2e || (iVar27 - 0x30U & 0xff) < 10))
          goto code_r0x00010bcdebf8;
          if (iVar27 != 0x5f) {
            if ((*(byte *)((long)unaff_x20 + 0x2d) & 1) == 0) goto code_r0x00010bcdecb8;
            if ((extraout_x8_02 & 1) != 0) {
              func_0x00010bce3e28();
            }
            goto code_r0x00010bcdebf8;
          }
          uVar28 = 1;
          if (((extraout_x8_02 & 1) != 0) && ((*(byte *)((long)unaff_x20 + 0x2d) & 1) == 0)) {
code_r0x00010bcdecb8:
            func_0x00010bce3a3c();
            goto code_r0x00010bcdecbc;
          }
        }
      }
      func_0x00010bce37b8();
    }
    func_0x00010bce3678();
code_r0x00010bcdeccc:
    *unaff_x19 = (ulong ****)0x0;
    goto LAB_10bcdf2e4;
  }
  uVar28 = 0x10bcdeccc;
SUB_10bcdf610:
  ppppuStack_180 = (ulong ****)param_4;
  ppppuStack_178 = (ulong ****)param_3;
  ppppuStack_160 = (undefined8 ****)&stack0xfffffffffffffff0;
  pcStack_158 = (code *)uVar28;
  pppppuVar14 = pppppuVar10;
  pppppuVar20 = param_2;
  do {
    if ((((ulong)pppppuVar10[4] & 1) != 0) || (pppppuVar16 == (ulong *****)0x0)) goto LAB_10bd3cfb4;
    pppppuVar19 = (ulong *****)pppppuVar10[2];
    if (pppppuVar19 == (ulong *****)0x0) {
      pppppuVar14 = (ulong *****)*pppppuVar10;
      param_2 = pppppuVar10 + 1;
      (*(code *)(*pppppuVar14)[2])(pppppuVar14,param_2,(long)&uStack_188 + 4);
      if ((int)pppppuVar14 == 0) {
        pppppuVar10[2] = (ulong ****)0x0;
        *(char *)(pppppuVar10 + 4) = '\x01';
LAB_10bd3cfb4:
        auVar42._8_8_ = param_2;
        auVar42._0_8_ = pppppuVar14;
        return auVar42;
      }
      pppppuVar19 = (ulong *****)((ulong)uStack_188 >> 0x20);
      pppppuVar10[2] = (ulong ****)pppppuVar19;
    }
    if (pppppuVar16 <= pppppuVar19) {
      pppppuVar19 = pppppuVar16;
    }
    pppppuVar14 = (ulong *****)pppppuVar10[1];
    param_2 = pppppuVar20;
    _memcpy(pppppuVar14,pppppuVar20,pppppuVar19);
    pppppuVar10[1] = (ulong ****)((long)pppppuVar10[1] + (long)pppppuVar19);
    pppppuVar10[2] = (ulong ****)((long)pppppuVar10[2] - (long)pppppuVar19);
    pppppuVar20 = (ulong *****)((long)pppppuVar20 + (long)pppppuVar19);
    pppppuVar16 = (ulong *****)((long)pppppuVar16 - (long)pppppuVar19);
    pppppuVar10[3] = (ulong ****)((long)pppppuVar10[3] + (long)pppppuVar19);
  } while( true );
}



/* Entry: 10bcdf5fc; end: 10bcdf613;  */

void FUN_10bcdf5fc(undefined8 *param_1,long param_2,ulong param_3)

{
  long *plVar1;
  ulong uVar2;
  uint uStack_34;
  
  if (*(char *)(param_1 + 5) != '\x01') {
    return;
  }
  while( true ) {
    if ((*(byte *)(param_1 + 4) & 1) != 0) {
      return;
    }
    if (param_3 == 0) break;
    uVar2 = param_1[2];
    if (uVar2 == 0) {
      plVar1 = (long *)*param_1;
      (**(code **)(*plVar1 + 0x10))(plVar1,param_1 + 1,&uStack_34);
      if ((int)plVar1 == 0) {
        param_1[2] = 0;
        *(undefined1 *)(param_1 + 4) = 1;
        return;
      }
      uVar2 = (ulong)uStack_34;
      param_1[2] = uVar2;
    }
    if (param_3 <= uVar2) {
      uVar2 = param_3;
    }
    _memcpy(param_1[1],param_2,uVar2);
    param_1[1] = param_1[1] + uVar2;
    param_1[2] = param_1[2] - uVar2;
    param_2 = param_2 + uVar2;
    param_3 = param_3 - uVar2;
    param_1[3] = param_1[3] + uVar2;
  }
  return;
}



/* Entry: 10bcdf614; end: 10bcdf653;  */

undefined8 * FUN_10bcdf614(undefined8 *param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 7);
  if (param_1[2] != 0) {
    (**(code **)(*(long *)*param_1 + 0x18))();
  }
  return param_1;
}



/* Entry: 10bcdf654; end: 10bcdf69b;  */

ulong * FUN_10bcdf654(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  int extraout_w10;
  
  uVar1 = *param_2;
  *param_1 = uVar1;
  if ((uVar1 & 1) != 0) {
    do {
      func_0x00010bce3290();
    } while (extraout_w10 != 0);
  }
  FUN_10bcdf69c(param_1);
  return param_1;
}



/* Entry: 10bcdf69c; end: 10bcdf6ab;  */

void FUN_10bcdf69c(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined *puStack_30;
  undefined *puStack_28;
  
  if (*param_1 != 0) {
    return;
  }
  puStack_30 = &UNK_10f6d19ac;
  puStack_28 = &UNK_10f6d196c;
  uStack_38 = 0x4a;
  uStack_34 = 2;
  func_0x00010ae77bf0(&PTR_DAT_113311b68,&uStack_34,&puStack_30,&uStack_38,&puStack_28);
  puVar2 = puStack_28;
  puVar1 = puStack_28;
  _strlen(puStack_28);
  func_0x000107c2b9b4(&puStack_30,0xd,puVar2,puVar1);
  puVar2 = (undefined *)*param_1;
  if (puStack_30 != puVar2) {
    *param_1 = (long)puStack_30;
    puStack_30 = (undefined *)0x36;
    if (((ulong)puVar2 & 1) == 0) {
      return;
    }
    func_0x000107c2b9b0();
    puVar2 = puStack_30;
  }
  if (((ulong)puVar2 & 1) != 0) {
    func_0x000107c2b9b0();
  }
  return;
}



/* Entry: 10bcdf6ac; end: 10bcdf6fb;  */

undefined8 * FUN_10bcdf6ac(undefined8 *param_1)

{
  func_0x00010bcdf6d4(param_1 + 1);
  *param_1 = 0;
  return param_1;
}



/* Entry: 10bcdf6fc; end: 10bcdf717;  */

void FUN_10bcdf6fc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = param_2[1];
  uVar3 = *param_2;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  *param_2 = &UNK_10e52b660;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_1[1] = uVar4;
  *param_1 = uVar3;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  return;
}



/* Entry: 10bcdf718; end: 10bcdf753;  */

long * FUN_10bcdf718(long *param_1)

{
  if (param_1[2] != 0) {
    FUN_10bcdf754(param_1);
    __ZdlPv(*param_1 + -8);
  }
  return param_1;
}



/* Entry: 10bcdf754; end: 10bcdf79b;  */

void FUN_10bcdf754(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  
  pcVar3 = (char *)*param_1;
  lVar1 = param_1[1] + 8;
  for (lVar2 = param_1[2]; lVar2 != 0; lVar2 = lVar2 + -1) {
    if (-1 < *pcVar3) {
      FUN_10bcdf79c(lVar1);
    }
    pcVar3 = pcVar3 + 1;
    lVar1 = lVar1 + 0x38;
  }
  return;
}



/* Entry: 10bcdf79c; end: 10bcdf7eb;  */

void FUN_10bcdf79c(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x28) != 0xffffffff) {
    (*(code *)(&PTR_FUN_110d9ad78)[*(uint *)(param_1 + 0x28)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  return;
}



/* Entry: 10bcdf7ec; end: 10bcdf85f;  */

void FUN_10bcdf7ec(void)

{
  return;
}



/* Entry: 10bcdf860; end: 10bcdf883;  */

void FUN_10bcdf860(void)

{
  func_0x00010bce3c54();
  FUN_10bcdf884();
  return;
}



/* Entry: 10bcdf884; end: 10bcdf89b;  */

void FUN_10bcdf884(undefined8 *param_1)

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



/* Entry: 10bcdf89c; end: 10bcdf8ff;  */

void FUN_10bcdf89c(void)

{
  func_0x00010bce3c54();
  func_0x00010bcdf8c0();
  return;
}



/* Entry: 10bcdf900; end: 10bcdf907;  */

void FUN_10bcdf900(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010bce369c(param_1,*param_1);
  for (lVar1 = param_1[1]; lVar1 != unaff_x19; lVar1 = lVar1 + -0x28) {
    FUN_10bcdf718(lVar1 + -0x20);
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10bcdf908; end: 10bcdf947;  */

void FUN_10bcdf908(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010bce369c();
  for (lVar1 = *(long *)(param_1 + 8); lVar1 != unaff_x19; lVar1 = lVar1 + -0x28) {
    FUN_10bcdf718(lVar1 + -0x20);
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10bcdf948; end: 10bcdf977;  */

long * FUN_10bcdf948(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  func_0x000107c31550();
  if (lVar1 == 0) {
    FUN_10bcdf718(param_1 + 2);
  }
  return param_1;
}



/* Entry: 10bcdf978; end: 10bcdf9b7;  */

void FUN_10bcdf978(void)

{
  func_0x00010bce33a8();
  func_0x00010bce3678();
  FUN_10bce7aa8();
  FUN_10bd3cf10();
  return;
}



/* Entry: 10bcdf9b8; end: 10bcdf9db;  */

void FUN_10bcdf9b8(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
  param_1[1] = puVar2;
  param_1[2] = uVar1;
  *param_1 = 0;
  return;
}



/* Entry: 10bcdf9dc; end: 10bcdfa1b;  */

void FUN_10bcdf9dc(undefined8 param_1,undefined1 param_2)

{
  undefined1 uStack_11;
  
  uStack_11 = param_2;
  FUN_10bd3cf10(param_1,&uStack_11,1);
  return;
}



/* Entry: 10bcdfa1c; end: 10bcdfa3f;  */

void FUN_10bcdfa1c(undefined8 *param_1,char *param_2)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  uint uStack_34;
  
  if (*param_2 == '\x01') {
    *param_2 = '\0';
    return;
  }
  puVar4 = &DAT_10f68e8ee;
  uVar3 = 1;
  while( true ) {
    if ((*(byte *)(param_1 + 4) & 1) != 0) {
      return;
    }
    if (uVar3 == 0) break;
    uVar2 = param_1[2];
    if (uVar2 == 0) {
      plVar1 = (long *)*param_1;
      (**(code **)(*plVar1 + 0x10))(plVar1,param_1 + 1,&uStack_34);
      if ((int)plVar1 == 0) {
        param_1[2] = 0;
        *(undefined1 *)(param_1 + 4) = 1;
        return;
      }
      uVar2 = (ulong)uStack_34;
      param_1[2] = uVar2;
    }
    if (uVar3 <= uVar2) {
      uVar2 = uVar3;
    }
    _memcpy(param_1[1],puVar4,uVar2);
    param_1[1] = param_1[1] + uVar2;
    param_1[2] = param_1[2] - uVar2;
    puVar4 = puVar4 + uVar2;
    uVar3 = uVar3 - uVar2;
    param_1[3] = param_1[3] + uVar2;
  }
  return;
}



/* Entry: 10bcdfa40; end: 10bcdfaa7;  */

void FUN_10bcdfa40(undefined8 param_1,ulong param_2)

{
  undefined1 auStack_48 [24];
  
  FUN_10bce7950((double)(float)param_1);
  if ((param_2 & 1) == 0) {
    FUN_10bd3d1e0(auStack_48,param_1);
    func_0x00010bce3d48();
    func_0x00010bce3870();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  }
  return;
}



/* Entry: 10bcdfaa8; end: 10bcdfb0b;  */

void FUN_10bcdfaa8(undefined8 param_1,ulong param_2)

{
  undefined1 auStack_48 [24];
  
  FUN_10bce7950();
  if ((param_2 & 1) == 0) {
    func_0x00010bd3d0bc(auStack_48,param_1);
    func_0x00010bce3d48();
    func_0x00010bce3870();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  }
  return;
}



/* Entry: 10bcdfb0c; end: 10bcdfb5b;  */

bool FUN_10bcdfb0c(double param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  
  dVar4 = (double)param_2;
  func_0x00010bce3e1c();
  dVar3 = param_1 * 0.5;
  bVar1 = false;
  bVar2 = false;
  if (-(param_1 * 0.5) <= dVar4) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(dVar3) && !NAN(dVar4)) {
      bVar1 = dVar3 == dVar4;
      bVar2 = dVar4 <= dVar3;
    }
  }
  return (bVar2 && !bVar1) && param_2 == (long)dVar4;
}



/* Entry: 10bcdfb5c; end: 10bcdfbcf;  */

void FUN_10bcdfb5c(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  
  func_0x00010bce327c();
  func_0x00010bce3304();
  func_0x00010bce3870();
  func_0x00010bce3244(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bce33d4();
  FUN_10bcdfb5c();
  func_0x00010bce391c();
  FUN_10bd3cf10();
  return;
}



/* Entry: 10bcdfbd0; end: 10bcdfc03;  */

bool FUN_10bcdfbd0(double param_1,ulong param_2)

{
  func_0x00010bce3e1c();
  return (double)param_2 < param_1 && param_2 == (long)(double)param_2;
}



/* Entry: 10bcdfc04; end: 10bcdfd17;  */

void FUN_10bcdfc04(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  
  func_0x00010bce327c();
  func_0x00010bce3304();
  func_0x00010bce3870();
  func_0x00010bce3244(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bce33d4();
  FUN_10bcdfc04();
  func_0x00010bce391c();
  FUN_10bd3cf10();
  return;
}



/* Entry: 10bcdfd18; end: 10bcdfd5f;  */

void FUN_10bcdfd18(long *param_1)

{
  undefined1 auStack_98 [24];
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  if (*param_1 == 0) {
    return;
  }
  func_0x00010ae77c74();
  if (*param_1 != 0) {
    func_0x00010ae77c74();
    if (*param_1 != 0) {
      func_0x00010ae77c74();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_98);
      puStack_80 = &DAT_10f3b3c06;
      func_0x00010bcdfed4(param_1,&DAT_10f3b3c06);
      func_0x00010bce3db4(auStack_78);
      func_0x00010bce38a4();
      func_0x00010bce3870();
      func_0x00010bcdfed4(param_1,puStack_80);
      func_0x00010bce3884();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_98);
      return;
    }
    return;
  }
  return;
}



/* Entry: 10bcdfd60; end: 10bcdfe03;  */

void FUN_10bcdfd60(undefined8 param_1)

{
  undefined1 auStack_68 [24];
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_68);
  puStack_50 = &DAT_10f3b3c06;
  func_0x00010bcdfed4(param_1,&DAT_10f3b3c06);
  func_0x00010bce3db4(auStack_48);
  func_0x00010bce38a4();
  func_0x00010bce3870();
  func_0x00010bcdfed4(param_1,puStack_50);
  func_0x00010bce3884();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_68);
  return;
}



/* Entry: 10bcdfe04; end: 10bcdfe4f;  */

/* WARNING: Possible PIC construction at 0x00010bcdfe28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010bcdfe2c) */

void FUN_10bcdfe04(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  long *plVar1;
  undefined *puVar2;
  ulong uVar3;
  uint uStack_64;
  
  puVar2 = &DAT_10f3b3c06;
  func_0x00010bce3478(param_1,&DAT_10f3b3c06);
  func_0x00010bce39cc();
  while( true ) {
    if ((*(byte *)(param_1 + 4) & 1) != 0) {
      return;
    }
    if (param_3 == 0) break;
    uVar3 = param_1[2];
    if (uVar3 == 0) {
      plVar1 = (long *)*param_1;
      (**(code **)(*plVar1 + 0x10))(plVar1,param_1 + 1,&uStack_64);
      if ((int)plVar1 == 0) {
        param_1[2] = 0;
        *(undefined1 *)(param_1 + 4) = 1;
        return;
      }
      uVar3 = (ulong)uStack_64;
      param_1[2] = uVar3;
    }
    if (param_3 <= uVar3) {
      uVar3 = param_3;
    }
    _memcpy(param_1[1],puVar2,uVar3);
    param_1[1] = param_1[1] + uVar3;
    param_1[2] = param_1[2] - uVar3;
    puVar2 = puVar2 + uVar3;
    param_3 = param_3 - uVar3;
    param_1[3] = param_1[3] + uVar3;
  }
  return;
}



/* Entry: 10bcdfe50; end: 10bcdfeab;  */

undefined8 * FUN_10bcdfe50(undefined8 *param_1,uint *param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  ulong uStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = (undefined8 *)*param_1;
  uStack_28 = (ulong)*param_2;
  puStack_20 = &UNK_1004d50a8;
  func_0x000107c2b99c(puVar1,param_1[1],&uStack_28,1);
  func_0x00010bce3244(uStack_18);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar1 + 1);
  *puVar1 = 0;
  return puVar1;
}



/* Entry: 10bcdfeac; end: 10bcdff37;  */

undefined8 * FUN_10bcdfeac(undefined8 *param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 1);
  *param_1 = 0;
  return param_1;
}



/* Entry: 10bcdff38; end: 10bcdff7b;  */

ulong * FUN_10bcdff38(ulong *param_1,ulong param_2)

{
  int extraout_w10;
  
  *param_1 = param_2;
  if ((param_2 & 1) != 0) {
    do {
      func_0x00010bce3290();
    } while (extraout_w10 != 0);
  }
  FUN_10bcdff7c(param_1);
  return param_1;
}



/* Entry: 10bcdff7c; end: 10bcdff8b;  */

void FUN_10bcdff7c(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined *puStack_30;
  undefined *puStack_28;
  
  if (*param_1 != 0) {
    return;
  }
  puStack_30 = &UNK_10f6d19ac;
  puStack_28 = &UNK_10f6d196c;
  uStack_38 = 0x4a;
  uStack_34 = 2;
  func_0x00010ae77bf0(&PTR_DAT_113311b68,&uStack_34,&puStack_30,&uStack_38,&puStack_28);
  puVar2 = puStack_28;
  puVar1 = puStack_28;
  _strlen(puStack_28);
  func_0x000107c2b9b4(&puStack_30,0xd,puVar2,puVar1);
  puVar2 = (undefined *)*param_1;
  if (puStack_30 != puVar2) {
    *param_1 = (long)puStack_30;
    puStack_30 = (undefined *)0x36;
    if (((ulong)puVar2 & 1) == 0) {
      return;
    }
    func_0x000107c2b9b0();
    puVar2 = puStack_30;
  }
  if (((ulong)puVar2 & 1) != 0) {
    func_0x000107c2b9b0();
  }
  return;
}



/* Entry: 10bcdff8c; end: 10bce001f;  */

void FUN_10bcdff8c(void)

{
  func_0x00010bce33d4();
  func_0x00010bcdfc78();
  func_0x00010bce391c();
  FUN_10bd3cf10();
  return;
}



/* Entry: 10bce0020; end: 10bce01e7;  */

void FUN_10bce0020(long *param_1,ulong param_2)

{
  undefined1 in_ZR;
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x20;
  long *plStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  long *plStack_1d8;
  undefined8 uStack_168;
  undefined8 uStack_138;
  
  uVar4 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bce35f8();
  func_0x000107c2b99c();
  func_0x00010bce3244(uVar4);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  uVar4 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bce35f8();
  func_0x000107c2b99c();
  func_0x00010bce3244(uVar4);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bce3ce8();
  func_0x00010bce35f8();
  func_0x000107c2b99c();
  func_0x00010bce3244(uStack_138);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bce3ce8();
  func_0x00010bce35f8();
  func_0x000107c2b99c();
  func_0x00010bce3244(uStack_168);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  plVar1 = param_1 + 2;
  lVar2 = *param_1;
  if ((ulong)(*plVar1 - lVar2 >> 3) < param_2) {
    if (param_2 >> 0x3d != 0) {
      FUN_10bce025c();
      func_0x00010bce3a94();
      FUN_10bce031c();
      func_0x00010bce35bc();
      func_0x00010bce3eec();
      func_0x00010bce369c();
      lVar2 = *(long *)(param_2 + 8) - (plVar1[1] - *plVar1);
      _memcpy(lVar2);
      param_1[1] = lVar2;
      lVar2 = *unaff_x20;
      unaff_x20[1] = lVar2;
      *unaff_x20 = param_1[1];
      param_1[1] = lVar2;
      lVar2 = unaff_x20[1];
      unaff_x20[1] = param_1[2];
      param_1[2] = lVar2;
      lVar2 = unaff_x20[2];
      unaff_x20[2] = param_1[3];
      param_1[3] = lVar2;
      *param_1 = param_1[1];
      return;
    }
    lVar3 = param_1[1];
    plStack_1d8 = plVar1;
    FUN_10bce02dc();
    lStack_1f0 = (long)plVar1 + (lVar3 - lVar2);
    plStack_1e0 = plVar1 + param_2;
    plStack_1f8 = plVar1;
    lStack_1e8 = lStack_1f0;
    func_0x00010bce3e3c();
    FUN_10bce031c(&plStack_1f8);
  }
  return;
}



/* Entry: 10bce01e8; end: 10bce025b;  */

void FUN_10bce01e8(long *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  long *plStack_48;
  long lStack_40;
  long lStack_38;
  long *plStack_30;
  long *plStack_28;
  
  plVar1 = param_1 + 2;
  lVar2 = *param_1;
  if ((ulong)(*plVar1 - lVar2 >> 3) < param_2) {
    if (param_2 >> 0x3d != 0) {
      FUN_10bce025c();
      func_0x00010bce3a94();
      FUN_10bce031c();
      func_0x00010bce35bc();
      func_0x00010bce3eec();
      func_0x00010bce369c();
      lVar2 = *(long *)(param_2 + 8) - (plVar1[1] - *plVar1);
      _memcpy(lVar2);
      param_1[1] = lVar2;
      lVar2 = *unaff_x20;
      unaff_x20[1] = lVar2;
      *unaff_x20 = param_1[1];
      param_1[1] = lVar2;
      lVar2 = unaff_x20[1];
      unaff_x20[1] = param_1[2];
      param_1[2] = lVar2;
      lVar2 = unaff_x20[2];
      unaff_x20[2] = param_1[3];
      param_1[3] = lVar2;
      *param_1 = param_1[1];
      return;
    }
    lVar3 = param_1[1];
    plStack_28 = plVar1;
    FUN_10bce02dc();
    lStack_40 = (long)plVar1 + (lVar3 - lVar2);
    plStack_30 = plVar1 + param_2;
    plStack_48 = plVar1;
    lStack_38 = lStack_40;
    func_0x00010bce3e3c();
    FUN_10bce031c(&plStack_48);
  }
  return;
}



/* Entry: 10bce025c; end: 10bce0267;  */

void FUN_10bce025c(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  func_0x00010bce3eec();
  func_0x00010bce369c();
  lVar2 = *(long *)(param_2 + 8) - (param_1[1] - *param_1);
  _memcpy(lVar2);
  unaff_x19[1] = lVar2;
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



/* Entry: 10bce0268; end: 10bce02db;  */

void FUN_10bce0268(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  func_0x00010bce369c();
  lVar2 = *(long *)(param_2 + 8) - (param_1[1] - *param_1);
  _memcpy(lVar2);
  unaff_x19[1] = lVar2;
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



/* Entry: 10bce02dc; end: 10bce02ff;  */

void FUN_10bce02dc(void)

{
  FUN_10bce0300();
  return;
}



/* Entry: 10bce0300; end: 10bce031b;  */

long * FUN_10bce0300(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3d == 0) {
    plVar1 = (long *)(param_2 << 3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_10bce0348();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10bce031c; end: 10bce0347;  */

long * FUN_10bce031c(long *param_1)

{
  FUN_10bce0348();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10bce0348; end: 10bce036b;  */

void FUN_10bce0348(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 10bce036c; end: 10bce03af;  */

undefined8 * FUN_10bce036c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    puVar2 = puVar1 + 1;
    *puVar1 = *param_2;
  }
  else {
    puVar2 = param_1;
    FUN_10bce03b0();
  }
  param_1[1] = puVar2;
  return puVar2 + -1;
}



/* Entry: 10bce03b0; end: 10bce044b;  */

long FUN_10bce03b0(long param_1)

{
  long lVar1;
  long *unaff_x19;
  long lVar2;
  undefined8 *unaff_x20;
  long *plStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  long *plStack_40;
  long *plStack_38;
  
  func_0x00010bce37ac();
  FUN_10bce044c();
  lVar2 = *unaff_x19;
  lVar1 = unaff_x19[1];
  plStack_58 = unaff_x19 + 2;
  plStack_38 = plStack_58;
  if (param_1 == 0) {
    plStack_58 = (long *)0x0;
  }
  else {
    FUN_10bce02dc();
  }
  puStack_50 = (undefined8 *)((long)plStack_58 + (lVar1 - lVar2));
  plStack_40 = plStack_58 + param_1;
  puStack_48 = puStack_50 + 1;
  *puStack_50 = *unaff_x20;
  func_0x00010bce3e3c();
  lVar2 = unaff_x19[1];
  FUN_10bce031c(&plStack_58);
  return lVar2;
}



/* Entry: 10bce044c; end: 10bce048b;  */

long * FUN_10bce044c(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  uint uStack_44;
  
  if ((ulong)param_2 >> 0x3d == 0) {
    plVar2 = (long *)(param_1[2] - *param_1 >> 2);
    if (plVar2 <= param_2) {
      plVar2 = param_2;
    }
    if (0x7ffffffffffffff7 < (ulong)(param_1[2] - *param_1)) {
      plVar2 = (long *)0x1fffffffffffffff;
    }
    return plVar2;
  }
  FUN_10bce025c();
  FUN_10bcdf978();
  func_0x00010bce3d9c();
  uVar3 = 1;
  plVar2 = param_1;
  while( true ) {
    if ((*(byte *)(param_1 + 4) & 1) != 0) {
      return plVar2;
    }
    if (uVar3 == 0) break;
    uVar1 = param_1[2];
    if (uVar1 == 0) {
      plVar2 = (long *)*param_1;
      (**(code **)(*plVar2 + 0x10))(plVar2,param_1 + 1,&uStack_44);
      if ((int)plVar2 == 0) {
        param_1[2] = 0;
        *(undefined1 *)(param_1 + 4) = 1;
        return plVar2;
      }
      uVar1 = (ulong)uStack_44;
      param_1[2] = uVar1;
    }
    if (uVar3 <= uVar1) {
      uVar1 = uVar3;
    }
    plVar2 = (long *)param_1[1];
    _memcpy(plVar2,param_2,uVar1);
    param_1[1] = param_1[1] + uVar1;
    param_1[2] = param_1[2] - uVar1;
    param_2 = (long *)((long)param_2 + uVar1);
    uVar3 = uVar3 - uVar1;
    param_1[3] = param_1[3] + uVar1;
  }
  return plVar2;
}



/* Entry: 10bce048c; end: 10bce04b3;  */

void FUN_10bce048c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  uint uStack_34;
  
  FUN_10bcdf978();
  func_0x00010bce3d9c();
  uVar3 = 1;
  while( true ) {
    if ((*(byte *)(param_1 + 4) & 1) != 0) {
      return;
    }
    if (uVar3 == 0) break;
    uVar2 = param_1[2];
    if (uVar2 == 0) {
      plVar1 = (long *)*param_1;
      (**(code **)(*plVar1 + 0x10))(plVar1,param_1 + 1,&uStack_34);
      if ((int)plVar1 == 0) {
        param_1[2] = 0;
        *(undefined1 *)(param_1 + 4) = 1;
        return;
      }
      uVar2 = (ulong)uStack_34;
      param_1[2] = uVar2;
    }
    if (uVar3 <= uVar2) {
      uVar2 = uVar3;
    }
    _memcpy(param_1[1],param_2,uVar2);
    param_1[1] = param_1[1] + uVar2;
    param_1[2] = param_1[2] - uVar2;
    param_2 = param_2 + uVar2;
    uVar3 = uVar3 - uVar2;
    param_1[3] = param_1[3] + uVar2;
  }
  return;
}



/* Entry: 10bce04b4; end: 10bce0513;  */

void FUN_10bce04b4(undefined8 *param_1,char *param_2)

{
  undefined8 uVar1;
  char cVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  uint uStack_34;
  
  cVar2 = *param_2;
  lVar4 = *(long *)(param_2 + 8);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010bce3678();
  FUN_10bcdf9dc(param_1,(long)cVar2);
  FUN_10bce7aa8(param_1,lVar4,uVar1);
  func_0x00010bce3678(param_1);
  func_0x00010bce3d9c();
  uVar6 = 1;
  while( true ) {
    if ((*(byte *)(param_1 + 4) & 1) != 0) {
      return;
    }
    if (uVar6 == 0) break;
    uVar5 = param_1[2];
    if (uVar5 == 0) {
      plVar3 = (long *)*param_1;
      (**(code **)(*plVar3 + 0x10))(plVar3,param_1 + 1,&uStack_34);
      if ((int)plVar3 == 0) {
        param_1[2] = 0;
        *(undefined1 *)(param_1 + 4) = 1;
        return;
      }
      uVar5 = (ulong)uStack_34;
      param_1[2] = uVar5;
    }
    if (uVar6 <= uVar5) {
      uVar5 = uVar6;
    }
    _memcpy(param_1[1],lVar4,uVar5);
    param_1[1] = param_1[1] + uVar5;
    param_1[2] = param_1[2] - uVar5;
    lVar4 = lVar4 + uVar5;
    uVar6 = uVar6 - uVar5;
    param_1[3] = param_1[3] + uVar5;
  }
  return;
}



/* Entry: 10bce0514; end: 10bce0537;  */

void FUN_10bce0514(void)

{
  func_0x00010bce3c54();
  FUN_10bce0538();
  return;
}



/* Entry: 10bce0538; end: 10bce054f;  */

void FUN_10bce0538(undefined8 *param_1)

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



/* Entry: 10bce0550; end: 10bce05c3;  */

void FUN_10bce0550(long *param_1,long param_2,ulong *param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined1 uVar4;
  char cVar5;
  char cVar6;
  undefined1 uVar7;
  int iVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong *puVar14;
  byte *pbVar15;
  ulong *puVar16;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong *extraout_x8_01;
  undefined8 extraout_x8_02;
  ulong extraout_x8_03;
  ulong uVar17;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  ulong extraout_x8_06;
  ulong extraout_x8_07;
  ulong extraout_x8_08;
  undefined8 extraout_x8_09;
  long extraout_x9;
  long extraout_x9_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  ulong *extraout_x10;
  ulong *extraout_x11;
  undefined8 extraout_x11_00;
  ulong *puVar18;
  ulong uStack_318;
  ulong uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  ulong *puStack_2f8;
  ulong *puStack_2e8;
  ulong *puStack_2d8;
  undefined1 *****pppppuStack_2d0;
  code *pcStack_2c8;
  ulong uStack_2c0;
  byte bStack_2b8;
  undefined8 uStack_2b0;
  ulong *puStack_2a8;
  byte bStack_299;
  ulong auStack_298 [3];
  undefined1 auStack_280 [48];
  ulong *puStack_250;
  byte *pbStack_248;
  undefined8 uStack_220;
  undefined1 ****ppppuStack_1c0;
  code *pcStack_1b8;
  ulong *puStack_168;
  undefined8 uStack_138;
  undefined1 ***pppuStack_110;
  code *pcStack_108;
  undefined1 auStack_e8 [24];
  ulong uStack_d0;
  undefined1 auStack_c8 [48];
  long lStack_98;
  long *plStack_90;
  undefined8 uStack_68;
  undefined1 **ppuStack_40;
  code *pcStack_38;
  undefined1 uStack_29;
  undefined1 *puStack_28;
  undefined1 *puStack_20;
  undefined8 uStack_18;
  
  if (*param_1 == 0) {
    return;
  }
  func_0x00010ae77c74();
  uStack_18 = 0x10bce0568;
  param_2 = param_2 + 8;
  puStack_20 = &stack0xfffffffffffffff0;
  FUN_10bce1790();
  if (param_2 == 0) {
    return;
  }
  uVar3 = *(uint *)(param_1 + 6);
  uVar4 = 0xfffffffe < uVar3;
  cVar5 = SCARRY4(uVar3,1);
  cVar6 = (int)(uVar3 + 1) < 0;
  uVar7 = uVar3 == 0xffffffff;
  if (!(bool)uVar7) {
    puStack_28 = &uStack_29;
    (*(code *)(&PTR_FUN_110d9ae08)[uVar3])(&puStack_28,param_1 + 1);
    return;
  }
  func_0x00010563ab98();
  pcStack_38 = FUN_10bce05c4;
  puVar16 = param_3;
  ppuStack_40 = &puStack_20;
  func_0x00010bce327c();
  uStack_68 = extraout_x8;
  func_0x00010bce3c44(puVar16[1]);
  if (!(bool)uVar4 || (bool)uVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bce0608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10e606534)[extraout_x9] * 4 + 0x10bce060c))();
    return;
  }
  func_0x00010bce36a8();
  lStack_98 = param_2;
  plStack_90 = param_1;
  func_0x0001089ac660(auStack_c8,*(undefined4 *)(param_3[1] + 0x48));
  func_0x000107c2ba40(auStack_e8,&lStack_98,auStack_c8);
  func_0x00010bce32f0();
  func_0x00010bce3630();
  func_0x00010bce3694();
  func_0x00010bce3244(uStack_68);
  if ((bool)uVar7) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bce36e8();
  puVar9 = &uStack_d0;
  func_0x000107c31550();
  func_0x00010bce3694();
  func_0x00010bce35bc();
  pcStack_108 = FUN_10bce0f24;
  puVar12 = puVar16;
  pppuStack_110 = &ppuStack_40;
  func_0x00010bce327c();
  uStack_138 = extraout_x8_00;
  func_0x00010bce3c44(puVar12[1]);
  if (!(bool)uVar4 || (bool)uVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bce0f68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10e606546)[extraout_x9_00] * 4 + 0x10bce0f6c))();
    return;
  }
  func_0x00010bce36a8();
  puStack_168 = puVar9;
  func_0x00010bce3ef8();
  func_0x00010bce3578();
  func_0x00010bce370c();
  puVar14 = extraout_x11;
  if (cVar6 == cVar5) {
    puVar14 = extraout_x8_01;
  }
  func_0x00010bce3630();
  func_0x00010bce3744();
  func_0x00010bce3244(uStack_138);
  if ((bool)uVar7) {
    return;
  }
  ___stack_chk_fail();
  puVar10 = puVar9;
  func_0x00010bce368c();
  func_0x00010bce35bc();
  pcStack_1b8 = FUN_10bce12c0;
  ppppuStack_1c0 = &pppuStack_110;
  func_0x00010bce33a8();
  func_0x00010bce3e90();
  func_0x00010bce3654();
  func_0x00010bce3d90();
  func_0x00010bce327c();
  uStack_220 = extraout_x8_02;
  func_0x00010bce3ba4();
  FUN_10bce32b0();
  func_0x00010bce3b6c();
  bStack_299 = 1;
  puVar13 = puVar10;
  for (puVar18 = (ulong *)0x0; uVar7 = puVar18 == puVar10, !(bool)uVar7;
      puVar18 = (ulong *)((long)puVar18 + 1)) {
    func_0x00010bce3e88();
    puStack_2a8 = puVar13 + (long)puVar18 * 5;
    uStack_2b0 = 0;
    func_0x00010bce32e4();
    func_0x00010bce3c04();
    func_0x00010bce3c04();
    puVar11 = puStack_2a8;
    func_0x00010bce3f00();
    puVar12 = puVar13 + 4;
    puVar13 = &uStack_2c0;
    FUN_10bce221c(&uStack_2c0,puVar11);
    func_0x00010bce3878();
    uVar17 = extraout_x8_03;
    if ((extraout_x8_03 & 1) != 0) {
      do {
        func_0x00010bce3290();
      } while (extraout_w10 != 0);
      uVar17 = *puVar9;
    }
    if (uVar17 != 0) goto LAB_10bce2184;
    func_0x00010bce3498();
    func_0x00010bce3e68();
    if ((bStack_2b8 & 1) != 0) goto LAB_10bce2174;
    pbVar15 = &bStack_299;
    func_0x00010bce37e0();
    func_0x00010bce360c();
    func_0x00010bce3c04();
    puVar11 = puStack_2a8;
    func_0x00010bce3f00();
    uVar17 = puVar13[1];
    iVar8 = *(int *)(uVar17 + 0x48) + -3;
    cVar5 = SBORROW4(iVar8,0xf);
    cVar6 = *(int *)(uVar17 + 0x48) + -0x12 < 0;
    uVar7 = iVar8 == 0xf;
    switch(iVar8) {
    case 0:
    case 0xd:
    case 0xf:
      func_0x00010bce374c();
      FUN_10bce1c08();
      func_0x00010bce3804();
      if ((extraout_x8_04 & 1) == 0) {
        if (extraout_x8_04 == 0) {
          func_0x00010bce3498();
          FUN_10bcddea0(&puStack_250);
          func_0x00010bce37c8();
          goto code_r0x00010bce2070;
        }
      }
      else {
        do {
          func_0x00010bce3290();
        } while (extraout_w10_00 != 0);
      }
      break;
    case 1:
    case 3:
      func_0x00010bce374c();
      FUN_10bce1c5c();
      func_0x00010bce3804();
      if ((extraout_x8_06 & 1) == 0) {
        if (extraout_x8_06 == 0) {
          func_0x00010bce3498();
          FUN_10bcddef0(&puStack_250);
          func_0x00010bce37d0();
          goto code_r0x00010bce2070;
        }
      }
      else {
        do {
          func_0x00010bce3290();
        } while (extraout_w10_02 != 0);
      }
      break;
    case 2:
    case 0xc:
    case 0xe:
      FUN_10bce1d64(puVar11,*(undefined4 *)(uVar17 + 0x50));
      pbStack_248 = (byte *)CONCAT44(pbStack_248._4_4_,(int)*puVar11);
      puStack_250 = (ulong *)0x0;
      func_0x00010bce32e4();
      func_0x00010bce3c0c();
      FUN_10bcdff8c(puVar14,(ulong)pbStack_248 & 0xffffffff);
      goto code_r0x00010bce2070;
    case 4:
    case 10:
      func_0x00010bce374c();
      FUN_10bce1cb0();
      func_0x00010bce3804();
      if ((extraout_x8_05 & 1) == 0) {
        if (extraout_x8_05 == 0) {
          func_0x00010bce3498();
          func_0x00010bcdfd30(&puStack_250);
          func_0x00010bcdffb4(puVar14,(ulong)pbStack_248 & 0xffffffff);
          goto code_r0x00010bce2070;
        }
      }
      else {
        do {
          func_0x00010bce3290();
        } while (extraout_w10_01 != 0);
      }
      break;
    case 5:
      func_0x00010bce374c();
      FUN_10bce1d08();
      func_0x00010bce3804();
      if ((extraout_x8_07 & 1) == 0) {
        if (extraout_x8_07 == 0) {
          func_0x00010bce3498();
          func_0x00010bcdfd48(&puStack_250);
          uVar7 = (char)pbStack_248 == '\0';
          pcVar1 = "true";
          if ((bool)uVar7) {
            pcVar1 = "false";
          }
          func_0x00010bcdffdc(puVar14,pcVar1);
          goto code_r0x00010bce2070;
        }
      }
      else {
        do {
          func_0x00010bce3290();
        } while (extraout_w10_03 != 0);
      }
      break;
    case 6:
      func_0x00010bce374c();
      FUN_10bce1714();
      func_0x00010bce3804();
      if ((extraout_x8_08 & 1) == 0) {
        if (extraout_x8_08 == 0) {
          func_0x00010bce3498();
          func_0x00010bcdfa04(&puStack_250);
          func_0x00010bce36d4();
          goto code_r0x00010bce2070;
        }
      }
      else {
        do {
          func_0x00010bce3290();
        } while (extraout_w10_04 != 0);
      }
      break;
    default:
      puVar11 = puVar13;
      func_0x00010bce3ed0();
      puStack_250 = puVar11;
      pbStack_248 = pbVar15;
      func_0x0001089ac660(auStack_280,*(undefined4 *)(puVar13[1] + 0x48));
      func_0x00010bce3be4();
      func_0x00010bce38a4();
      uVar2 = extraout_x11_00;
      puVar13 = extraout_x10;
      if (cVar6 == cVar5) {
        uVar2 = extraout_x8_09;
        puVar13 = auStack_298;
      }
      func_0x00010bce3630(puVar13,uVar2);
      func_0x00010bce3884();
      goto LAB_10bce2124;
    case 0xb:
      FUN_10bce1d64(puVar11,*(undefined4 *)(uVar17 + 0x50));
      pbStack_248 = (byte *)CONCAT44(pbStack_248._4_4_,(int)*puVar11);
      puStack_250 = (ulong *)0x0;
      func_0x00010bce32e4();
      func_0x00010bce3c0c();
      FUN_10bce1940(puVar14,puVar13,(ulong)pbStack_248 & 0xffffffff,0);
code_r0x00010bce2070:
      func_0x00010bce3994();
      *puVar9 = 0;
      goto code_r0x00010bce212c;
    }
    func_0x00010bce3994();
LAB_10bce2124:
    if (*puVar9 != 0) {
LAB_10bce2184:
      func_0x00010bce36e8();
      func_0x00010bce36fc();
      goto LAB_10bce21b0;
    }
code_r0x00010bce212c:
    func_0x00010bce3498();
    func_0x00010bce3d9c(puVar14);
    func_0x00010bce35f0();
    puVar12 = puVar14;
    func_0x00010bce373c(puVar14," ");
    func_0x00010bce3f00();
    puVar13 = puVar12;
    func_0x00010bce3c04();
    puVar12 = puVar12 + 4;
    func_0x00010bce35e4();
    FUN_10bce0f24();
    if (*puVar9 != 0) goto LAB_10bce2184;
    func_0x00010bce3498();
LAB_10bce2174:
    func_0x00010bce36e8();
    func_0x00010bce36fc();
  }
  func_0x00010bce344c();
  if ((bStack_299 & 1) == 0) {
    func_0x00010bce360c();
  }
  func_0x00010bce336c();
  *puVar9 = 0;
LAB_10bce21b0:
  func_0x00010bce3244(uStack_220);
  if ((bool)uVar7) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bce3994();
  func_0x00010bce36e8();
  func_0x00010bce36fc();
  func_0x00010bce35bc();
  pcStack_2c8 = FUN_10bce221c;
  puVar9 = puVar12;
  puStack_2e8 = puVar16;
  puStack_2d8 = puVar13;
  pppppuStack_2d0 = &ppppuStack_1c0;
  func_0x00010bce37ac();
  iVar8 = (int)puVar9;
  FUN_10bcde0c0();
  func_0x00010bcdd9d8();
  if (iVar8 != 5) {
    *(undefined1 *)(puVar13 + 1) = 0;
    goto LAB_10bce22e8;
  }
  FUN_10bce41b0(&uStack_310,puVar12);
  uStack_318 = uStack_310;
  if ((uStack_310 & 1) == 0) {
    if (uStack_310 != 0) goto LAB_10bce22d0;
    func_0x00010bce3798();
    FUN_10bcddffc(&uStack_310);
    FUN_10bce1db8(puVar14,*(undefined4 *)(puVar12[1] + 0x50));
    uStack_300 = 0;
    puStack_2f8 = puVar14;
    func_0x00010bce3798();
    FUN_10bce1b40(&uStack_300);
    FUN_10bce2338(puStack_2f8,uStack_308);
    uVar7 = SUB81(puStack_2f8,0);
    uStack_318 = 0;
    func_0x000107c31550(&uStack_300);
  }
  else {
    do {
      func_0x00010bce3290();
    } while (extraout_w10_05 != 0);
LAB_10bce22d0:
    uVar7 = 0;
  }
  func_0x00010bce36fc();
  if (uStack_318 != 0) {
    FUN_10bcdff38(puVar13);
    func_0x00010bce3798();
    return;
  }
  func_0x00010bce3798();
  *(undefined1 *)(puVar13 + 1) = uVar7;
LAB_10bce22e8:
  *puVar13 = 0;
  return;
}



/* Entry: 10bce05c4; end: 10bce0f23;  */

void FUN_10bce05c4(undefined8 param_1,undefined8 param_2,ulong *param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  byte *pbVar13;
  ulong *puVar14;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong *extraout_x8_01;
  undefined8 extraout_x8_02;
  ulong extraout_x8_03;
  ulong uVar15;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  ulong extraout_x8_06;
  ulong extraout_x8_07;
  ulong extraout_x8_08;
  undefined8 extraout_x8_09;
  long extraout_x9;
  long extraout_x9_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  ulong *extraout_x10;
  ulong *extraout_x11;
  undefined8 extraout_x11_00;
  ulong *puVar16;
  ulong uStack_2e8;
  ulong uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  ulong *puStack_2c8;
  ulong *puStack_2b8;
  ulong *puStack_2a8;
  undefined1 ***pppuStack_2a0;
  code *pcStack_298;
  ulong uStack_290;
  byte bStack_288;
  undefined8 uStack_280;
  ulong *puStack_278;
  byte bStack_269;
  ulong auStack_268 [3];
  undefined1 auStack_250 [48];
  ulong *puStack_220;
  byte *pbStack_218;
  undefined8 uStack_1f0;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  ulong *puStack_138;
  undefined8 uStack_108;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined1 auStack_b8 [24];
  ulong uStack_a0;
  undefined1 auStack_98 [48];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_38;
  
  puVar14 = param_3;
  func_0x00010bce327c();
  uStack_38 = extraout_x8;
  func_0x00010bce3c44(puVar14[1]);
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010bce0608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10e606534)[extraout_x9] * 4 + 0x10bce060c))();
    return;
  }
  func_0x00010bce36a8();
  uStack_68 = param_1;
  uStack_60 = param_2;
  func_0x0001089ac660(auStack_98,*(undefined4 *)(param_3[1] + 0x48));
  func_0x000107c2ba40(auStack_b8,&uStack_68,auStack_98);
  func_0x00010bce32f0();
  func_0x00010bce3630();
  func_0x00010bce3694();
  func_0x00010bce3244(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bce36e8();
  puVar7 = &uStack_a0;
  func_0x000107c31550();
  func_0x00010bce3694();
  func_0x00010bce35bc();
  pcStack_d8 = FUN_10bce0f24;
  puVar10 = puVar14;
  puStack_e0 = &stack0xfffffffffffffff0;
  func_0x00010bce327c();
  uStack_108 = extraout_x8_00;
  func_0x00010bce3c44(puVar10[1]);
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010bce0f68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10e606546)[extraout_x9_00] * 4 + 0x10bce0f6c))();
    return;
  }
  func_0x00010bce36a8();
  puStack_138 = puVar7;
  func_0x00010bce3ef8();
  func_0x00010bce3578();
  func_0x00010bce370c();
  puVar12 = extraout_x11;
  if (in_NG == in_OV) {
    puVar12 = extraout_x8_01;
  }
  func_0x00010bce3630();
  func_0x00010bce3744();
  func_0x00010bce3244(uStack_108);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puVar8 = puVar7;
  func_0x00010bce368c();
  func_0x00010bce35bc();
  pcStack_188 = FUN_10bce12c0;
  ppuStack_190 = &puStack_e0;
  func_0x00010bce33a8();
  func_0x00010bce3e90();
  func_0x00010bce3654();
  func_0x00010bce3d90();
  func_0x00010bce327c();
  uStack_1f0 = extraout_x8_02;
  func_0x00010bce3ba4();
  FUN_10bce32b0();
  func_0x00010bce3b6c();
  bStack_269 = 1;
  puVar11 = puVar8;
  for (puVar16 = (ulong *)0x0; uVar5 = puVar16 == puVar8, !(bool)uVar5;
      puVar16 = (ulong *)((long)puVar16 + 1)) {
    func_0x00010bce3e88();
    puStack_278 = puVar11 + (long)puVar16 * 5;
    uStack_280 = 0;
    func_0x00010bce32e4();
    func_0x00010bce3c04();
    func_0x00010bce3c04();
    puVar9 = puStack_278;
    func_0x00010bce3f00();
    puVar10 = puVar11 + 4;
    puVar11 = &uStack_290;
    FUN_10bce221c(&uStack_290,puVar9);
    func_0x00010bce3878();
    uVar15 = extraout_x8_03;
    if ((extraout_x8_03 & 1) != 0) {
      do {
        func_0x00010bce3290();
      } while (extraout_w10 != 0);
      uVar15 = *puVar7;
    }
    if (uVar15 != 0) goto LAB_10bce2184;
    func_0x00010bce3498();
    func_0x00010bce3e68();
    if ((bStack_288 & 1) != 0) goto LAB_10bce2174;
    pbVar13 = &bStack_269;
    func_0x00010bce37e0();
    func_0x00010bce360c();
    func_0x00010bce3c04();
    puVar9 = puStack_278;
    func_0x00010bce3f00();
    uVar15 = puVar11[1];
    iVar6 = *(int *)(uVar15 + 0x48) + -3;
    cVar3 = SBORROW4(iVar6,0xf);
    cVar4 = *(int *)(uVar15 + 0x48) + -0x12 < 0;
    uVar5 = iVar6 == 0xf;
    switch(iVar6) {
    case 0:
    case 0xd:
    case 0xf:
      func_0x00010bce374c();
      FUN_10bce1c08();
      func_0x00010bce3804();
      if ((extraout_x8_04 & 1) == 0) {
        if (extraout_x8_04 == 0) {
          func_0x00010bce3498();
          FUN_10bcddea0(&puStack_220);
          func_0x00010bce37c8();
          goto code_r0x00010bce2070;
        }
      }
      else {
        do {
          func_0x00010bce3290();
        } while (extraout_w10_00 != 0);
      }
      break;
    case 1:
    case 3:
      func_0x00010bce374c();
      FUN_10bce1c5c();
      func_0x00010bce3804();
      if ((extraout_x8_06 & 1) == 0) {
        if (extraout_x8_06 == 0) {
          func_0x00010bce3498();
          FUN_10bcddef0(&puStack_220);
          func_0x00010bce37d0();
          goto code_r0x00010bce2070;
        }
      }
      else {
        do {
          func_0x00010bce3290();
        } while (extraout_w10_02 != 0);
      }
      break;
    case 2:
    case 0xc:
    case 0xe:
      FUN_10bce1d64(puVar9,*(undefined4 *)(uVar15 + 0x50));
      pbStack_218 = (byte *)CONCAT44(pbStack_218._4_4_,(int)*puVar9);
      puStack_220 = (ulong *)0x0;
      func_0x00010bce32e4();
      func_0x00010bce3c0c();
      FUN_10bcdff8c(puVar12,(ulong)pbStack_218 & 0xffffffff);
      goto code_r0x00010bce2070;
    case 4:
    case 10:
      func_0x00010bce374c();
      FUN_10bce1cb0();
      func_0x00010bce3804();
      if ((extraout_x8_05 & 1) == 0) {
        if (extraout_x8_05 == 0) {
          func_0x00010bce3498();
          func_0x00010bcdfd30(&puStack_220);
          func_0x00010bcdffb4(puVar12,(ulong)pbStack_218 & 0xffffffff);
          goto code_r0x00010bce2070;
        }
      }
      else {
        do {
          func_0x00010bce3290();
        } while (extraout_w10_01 != 0);
      }
      break;
    case 5:
      func_0x00010bce374c();
      FUN_10bce1d08();
      func_0x00010bce3804();
      if ((extraout_x8_07 & 1) == 0) {
        if (extraout_x8_07 == 0) {
          func_0x00010bce3498();
          func_0x00010bcdfd48(&puStack_220);
          uVar5 = (char)pbStack_218 == '\0';
          pcVar1 = "true";
          if ((bool)uVar5) {
            pcVar1 = "false";
          }
          func_0x00010bcdffdc(puVar12,pcVar1);
          goto code_r0x00010bce2070;
        }
      }
      else {
        do {
          func_0x00010bce3290();
        } while (extraout_w10_03 != 0);
      }
      break;
    case 6:
      func_0x00010bce374c();
      FUN_10bce1714();
      func_0x00010bce3804();
      if ((extraout_x8_08 & 1) == 0) {
        if (extraout_x8_08 == 0) {
          func_0x00010bce3498();
          func_0x00010bcdfa04(&puStack_220);
          func_0x00010bce36d4();
          goto code_r0x00010bce2070;
        }
      }
      else {
        do {
          func_0x00010bce3290();
        } while (extraout_w10_04 != 0);
      }
      break;
    default:
      puVar9 = puVar11;
      func_0x00010bce3ed0();
      puStack_220 = puVar9;
      pbStack_218 = pbVar13;
      func_0x0001089ac660(auStack_250,*(undefined4 *)(puVar11[1] + 0x48));
      func_0x00010bce3be4();
      func_0x00010bce38a4();
      uVar2 = extraout_x11_00;
      puVar11 = extraout_x10;
      if (cVar4 == cVar3) {
        uVar2 = extraout_x8_09;
        puVar11 = auStack_268;
      }
      func_0x00010bce3630(puVar11,uVar2);
      func_0x00010bce3884();
      goto LAB_10bce2124;
    case 0xb:
      FUN_10bce1d64(puVar9,*(undefined4 *)(uVar15 + 0x50));
      pbStack_218 = (byte *)CONCAT44(pbStack_218._4_4_,(int)*puVar9);
      puStack_220 = (ulong *)0x0;
      func_0x00010bce32e4();
      func_0x00010bce3c0c();
      FUN_10bce1940(puVar12,puVar11,(ulong)pbStack_218 & 0xffffffff,0);
code_r0x00010bce2070:
      func_0x00010bce3994();
      *puVar7 = 0;
      goto code_r0x00010bce212c;
    }
    func_0x00010bce3994();
LAB_10bce2124:
    if (*puVar7 != 0) {
LAB_10bce2184:
      func_0x00010bce36e8();
      func_0x00010bce36fc();
      goto LAB_10bce21b0;
    }
code_r0x00010bce212c:
    func_0x00010bce3498();
    func_0x00010bce3d9c(puVar12);
    func_0x00010bce35f0();
    puVar10 = puVar12;
    func_0x00010bce373c(puVar12," ");
    func_0x00010bce3f00();
    puVar11 = puVar10;
    func_0x00010bce3c04();
    puVar10 = puVar10 + 4;
    func_0x00010bce35e4();
    FUN_10bce0f24();
    if (*puVar7 != 0) goto LAB_10bce2184;
    func_0x00010bce3498();
LAB_10bce2174:
    func_0x00010bce36e8();
    func_0x00010bce36fc();
  }
  func_0x00010bce344c();
  if ((bStack_269 & 1) == 0) {
    func_0x00010bce360c();
  }
  func_0x00010bce336c();
  *puVar7 = 0;
LAB_10bce21b0:
  func_0x00010bce3244(uStack_1f0);
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bce3994();
  func_0x00010bce36e8();
  func_0x00010bce36fc();
  func_0x00010bce35bc();
  pcStack_298 = FUN_10bce221c;
  puVar7 = puVar10;
  puStack_2b8 = puVar14;
  puStack_2a8 = puVar11;
  pppuStack_2a0 = &ppuStack_190;
  func_0x00010bce37ac();
  iVar6 = (int)puVar7;
  FUN_10bcde0c0();
  func_0x00010bcdd9d8();
  if (iVar6 != 5) {
    *(undefined1 *)(puVar11 + 1) = 0;
    goto LAB_10bce22e8;
  }
  FUN_10bce41b0(&uStack_2e0,puVar10);
  uStack_2e8 = uStack_2e0;
  if ((uStack_2e0 & 1) == 0) {
    if (uStack_2e0 != 0) goto LAB_10bce22d0;
    func_0x00010bce3798();
    FUN_10bcddffc(&uStack_2e0);
    FUN_10bce1db8(puVar12,*(undefined4 *)(puVar10[1] + 0x50));
    uStack_2d0 = 0;
    puStack_2c8 = puVar12;
    func_0x00010bce3798();
    FUN_10bce1b40(&uStack_2d0);
    FUN_10bce2338(puStack_2c8,uStack_2d8);
    uVar5 = SUB81(puStack_2c8,0);
    uStack_2e8 = 0;
    func_0x000107c31550(&uStack_2d0);
  }
  else {
    do {
      func_0x00010bce3290();
    } while (extraout_w10_05 != 0);
LAB_10bce22d0:
    uVar5 = 0;
  }
  func_0x00010bce36fc();
  if (uStack_2e8 != 0) {
    FUN_10bcdff38(puVar11);
    func_0x00010bce3798();
    return;
  }
  func_0x00010bce3798();
  *(undefined1 *)(puVar11 + 1) = uVar5;
LAB_10bce22e8:
  *puVar11 = 0;
  return;
}



/* Entry: 10bce0f24; end: 10bce12bf;  */

void FUN_10bce0f24(ulong *param_1,undefined8 param_2,ulong *param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  byte *pbVar12;
  undefined8 extraout_x8;
  ulong *extraout_x8_00;
  undefined8 extraout_x8_01;
  ulong extraout_x8_02;
  ulong uVar13;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  ulong extraout_x8_06;
  ulong extraout_x8_07;
  undefined8 extraout_x8_08;
  long extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  ulong *extraout_x10;
  ulong *extraout_x11;
  undefined8 extraout_x11_00;
  ulong *puVar14;
  ulong uStack_218;
  ulong uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  ulong *puStack_1f8;
  ulong *puStack_1e8;
  ulong *puStack_1d8;
  undefined1 **ppuStack_1d0;
  code *pcStack_1c8;
  ulong uStack_1c0;
  byte bStack_1b8;
  undefined8 uStack_1b0;
  ulong *puStack_1a8;
  byte bStack_199;
  ulong auStack_198 [3];
  undefined1 auStack_180 [48];
  ulong *puStack_150;
  byte *pbStack_148;
  undefined8 uStack_120;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  ulong *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_38;
  
  puVar9 = param_3;
  func_0x00010bce327c();
  uStack_38 = extraout_x8;
  func_0x00010bce3c44(puVar9[1]);
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010bce0f68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10e606546)[extraout_x9] * 4 + 0x10bce0f6c))();
    return;
  }
  func_0x00010bce36a8();
  puStack_68 = param_1;
  uStack_60 = param_2;
  func_0x00010bce3ef8();
  func_0x00010bce3578();
  func_0x00010bce370c();
  puVar11 = extraout_x11;
  if (in_NG == in_OV) {
    puVar11 = extraout_x8_00;
  }
  func_0x00010bce3630();
  func_0x00010bce3744();
  func_0x00010bce3244(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puVar7 = param_1;
  func_0x00010bce368c();
  func_0x00010bce35bc();
  pcStack_b8 = FUN_10bce12c0;
  puStack_c0 = &stack0xfffffffffffffff0;
  func_0x00010bce33a8();
  func_0x00010bce3e90();
  func_0x00010bce3654();
  func_0x00010bce3d90();
  func_0x00010bce327c();
  uStack_120 = extraout_x8_01;
  func_0x00010bce3ba4();
  FUN_10bce32b0();
  func_0x00010bce3b6c();
  bStack_199 = 1;
  puVar10 = puVar7;
  for (puVar14 = (ulong *)0x0; uVar5 = puVar14 == puVar7, !(bool)uVar5;
      puVar14 = (ulong *)((long)puVar14 + 1)) {
    func_0x00010bce3e88();
    puStack_1a8 = puVar10 + (long)puVar14 * 5;
    uStack_1b0 = 0;
    func_0x00010bce32e4();
    func_0x00010bce3c04();
    func_0x00010bce3c04();
    puVar8 = puStack_1a8;
    func_0x00010bce3f00();
    puVar9 = puVar10 + 4;
    puVar10 = &uStack_1c0;
    FUN_10bce221c(&uStack_1c0,puVar8);
    func_0x00010bce3878();
    uVar13 = extraout_x8_02;
    if ((extraout_x8_02 & 1) != 0) {
      do {
        func_0x00010bce3290();
      } while (extraout_w10 != 0);
      uVar13 = *param_1;
    }
    if (uVar13 != 0) goto LAB_10bce2184;
    func_0x00010bce3498();
    func_0x00010bce3e68();
    if ((bStack_1b8 & 1) != 0) goto LAB_10bce2174;
    pbVar12 = &bStack_199;
    func_0x00010bce37e0();
    func_0x00010bce360c();
    func_0x00010bce3c04();
    puVar8 = puStack_1a8;
    func_0x00010bce3f00();
    uVar13 = puVar10[1];
    iVar6 = *(int *)(uVar13 + 0x48) + -3;
    cVar3 = SBORROW4(iVar6,0xf);
    cVar4 = *(int *)(uVar13 + 0x48) + -0x12 < 0;
    uVar5 = iVar6 == 0xf;
    switch(iVar6) {
    case 0:
    case 0xd:
    case 0xf:
      func_0x00010bce374c();
      FUN_10bce1c08();
      func_0x00010bce3804();
      if ((extraout_x8_03 & 1) == 0) {
        if (extraout_x8_03 == 0) {
          func_0x00010bce3498();
          FUN_10bcddea0(&puStack_150);
          func_0x00010bce37c8();
          goto code_r0x00010bce2070;
        }
      }
      else {
        do {
          func_0x00010bce3290();
        } while (extraout_w10_00 != 0);
      }
      break;
    case 1:
    case 3:
      func_0x00010bce374c();
      FUN_10bce1c5c();
      func_0x00010bce3804();
      if ((extraout_x8_05 & 1) == 0) {
        if (extraout_x8_05 == 0) {
          func_0x00010bce3498();
          FUN_10bcddef0(&puStack_150);
          func_0x00010bce37d0();
          goto code_r0x00010bce2070;
        }
      }
      else {
        do {
          func_0x00010bce3290();
        } while (extraout_w10_02 != 0);
      }
      break;
    case 2:
    case 0xc:
    case 0xe:
      FUN_10bce1d64(puVar8,*(undefined4 *)(uVar13 + 0x50));
      pbStack_148 = (byte *)CONCAT44(pbStack_148._4_4_,(int)*puVar8);
      puStack_150 = (ulong *)0x0;
      func_0x00010bce32e4();
      func_0x00010bce3c0c();
      FUN_10bcdff8c(puVar11,(ulong)pbStack_148 & 0xffffffff);
      goto code_r0x00010bce2070;
    case 4:
    case 10:
      func_0x00010bce374c();
      FUN_10bce1cb0();
      func_0x00010bce3804();
      if ((extraout_x8_04 & 1) == 0) {
        if (extraout_x8_04 == 0) {
          func_0x00010bce3498();
          func_0x00010bcdfd30(&puStack_150);
          func_0x00010bcdffb4(puVar11,(ulong)pbStack_148 & 0xffffffff);
          goto code_r0x00010bce2070;
        }
      }
      else {
        do {
          func_0x00010bce3290();
        } while (extraout_w10_01 != 0);
      }
      break;
    case 5:
      func_0x00010bce374c();
      FUN_10bce1d08();
      func_0x00010bce3804();
      if ((extraout_x8_06 & 1) == 0) {
        if (extraout_x8_06 == 0) {
          func_0x00010bce3498();
          func_0x00010bcdfd48(&puStack_150);
          uVar5 = (char)pbStack_148 == '\0';
          pcVar1 = "true";
          if ((bool)uVar5) {
            pcVar1 = "false";
          }
          func_0x00010bcdffdc(puVar11,pcVar1);
          goto code_r0x00010bce2070;
        }
      }
      else {
        do {
          func_0x00010bce3290();
        } while (extraout_w10_03 != 0);
      }
      break;
    case 6:
      func_0x00010bce374c();
      FUN_10bce1714();
      func_0x00010bce3804();
      if ((extraout_x8_07 & 1) == 0) {
        if (extraout_x8_07 == 0) {
          func_0x00010bce3498();
          func_0x00010bcdfa04(&puStack_150);
          func_0x00010bce36d4();
          goto code_r0x00010bce2070;
        }
      }
      else {
        do {
          func_0x00010bce3290();
        } while (extraout_w10_04 != 0);
      }
      break;
    default:
      puVar8 = puVar10;
      func_0x00010bce3ed0();
      puStack_150 = puVar8;
      pbStack_148 = pbVar12;
      func_0x0001089ac660(auStack_180,*(undefined4 *)(puVar10[1] + 0x48));
      func_0x00010bce3be4();
      func_0x00010bce38a4();
      uVar2 = extraout_x11_00;
      puVar10 = extraout_x10;
      if (cVar4 == cVar3) {
        uVar2 = extraout_x8_08;
        puVar10 = auStack_198;
      }
      func_0x00010bce3630(puVar10,uVar2);
      func_0x00010bce3884();
      goto LAB_10bce2124;
    case 0xb:
      FUN_10bce1d64(puVar8,*(undefined4 *)(uVar13 + 0x50));
      pbStack_148 = (byte *)CONCAT44(pbStack_148._4_4_,(int)*puVar8);
      puStack_150 = (ulong *)0x0;
      func_0x00010bce32e4();
      func_0x00010bce3c0c();
      FUN_10bce1940(puVar11,puVar10,(ulong)pbStack_148 & 0xffffffff,0);
code_r0x00010bce2070:
      func_0x00010bce3994();
      *param_1 = 0;
      goto code_r0x00010bce212c;
    }
    func_0x00010bce3994();
LAB_10bce2124:
    if (*param_1 != 0) {
LAB_10bce2184:
      func_0x00010bce36e8();
      func_0x00010bce36fc();
      goto LAB_10bce21b0;
    }
code_r0x00010bce212c:
    func_0x00010bce3498();
    func_0x00010bce3d9c(puVar11);
    func_0x00010bce35f0();
    puVar9 = puVar11;
    func_0x00010bce373c(puVar11," ");
    func_0x00010bce3f00();
    puVar10 = puVar9;
    func_0x00010bce3c04();
    puVar9 = puVar9 + 4;
    func_0x00010bce35e4();
    FUN_10bce0f24();
    if (*param_1 != 0) goto LAB_10bce2184;
    func_0x00010bce3498();
LAB_10bce2174:
    func_0x00010bce36e8();
    func_0x00010bce36fc();
  }
  func_0x00010bce344c();
  if ((bStack_199 & 1) == 0) {
    func_0x00010bce360c();
  }
  func_0x00010bce336c();
  *param_1 = 0;
LAB_10bce21b0:
  func_0x00010bce3244(uStack_120);
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bce3994();
  func_0x00010bce36e8();
  func_0x00010bce36fc();
  func_0x00010bce35bc();
  pcStack_1c8 = FUN_10bce221c;
  puVar14 = puVar9;
  puStack_1e8 = param_3;
  puStack_1d8 = puVar10;
  ppuStack_1d0 = &puStack_c0;
  func_0x00010bce37ac();
  iVar6 = (int)puVar14;
  FUN_10bcde0c0();
  func_0x00010bcdd9d8();
  if (iVar6 != 5) {
    *(undefined1 *)(puVar10 + 1) = 0;
    goto LAB_10bce22e8;
  }
  FUN_10bce41b0(&uStack_210,puVar9);
  uStack_218 = uStack_210;
  if ((uStack_210 & 1) == 0) {
    if (uStack_210 != 0) goto LAB_10bce22d0;
    func_0x00010bce3798();
    FUN_10bcddffc(&uStack_210);
    FUN_10bce1db8(puVar11,*(undefined4 *)(puVar9[1] + 0x50));
    uStack_200 = 0;
    puStack_1f8 = puVar11;
    func_0x00010bce3798();
    FUN_10bce1b40(&uStack_200);
    FUN_10bce2338(puStack_1f8,uStack_208);
    uVar5 = SUB81(puStack_1f8,0);
    uStack_218 = 0;
    func_0x000107c31550(&uStack_200);
  }
  else {
    do {
      func_0x00010bce3290();
    } while (extraout_w10_05 != 0);
LAB_10bce22d0:
    uVar5 = 0;
  }
  func_0x00010bce36fc();
  if (uStack_218 != 0) {
    FUN_10bcdff38(puVar10);
    func_0x00010bce3798();
    return;
  }
  func_0x00010bce3798();
  *(undefined1 *)(puVar10 + 1) = uVar5;
LAB_10bce22e8:
  *puVar10 = 0;
  return;
}



/* Entry: 10bce12c0; end: 10bce1317;  */

void FUN_10bce12c0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  ulong uVar10;
  long lVar11;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  undefined8 extraout_x8_06;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  undefined8 *extraout_x10;
  undefined8 extraout_x11;
  ulong *unaff_x19;
  undefined8 *puVar12;
  ulong uStack_168;
  ulong uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 *puStack_148;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  byte bStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  byte bStack_e9;
  undefined8 auStack_e8 [3];
  undefined1 auStack_d0 [48];
  undefined8 *puStack_a0;
  byte *pbStack_98;
  undefined8 uStack_70;
  
  func_0x00010bce33a8();
  func_0x00010bce3e90();
  func_0x00010bce3654();
  func_0x00010bce3d90();
  func_0x00010bce327c();
  uStack_70 = extraout_x8;
  func_0x00010bce3ba4();
  FUN_10bce32b0();
  func_0x00010bce3b6c();
  bStack_e9 = 1;
  puVar8 = param_1;
  for (puVar12 = (undefined8 *)0x0; uVar5 = puVar12 == param_1, !(bool)uVar5;
      puVar12 = (undefined8 *)((long)puVar12 + 1)) {
    func_0x00010bce3e88();
    puStack_f8 = puVar8 + (long)puVar12 * 5;
    uStack_100 = 0;
    func_0x00010bce32e4();
    func_0x00010bce3c04();
    func_0x00010bce3c04();
    puVar7 = puStack_f8;
    func_0x00010bce3f00();
    param_3 = puVar8 + 4;
    puVar8 = &uStack_110;
    FUN_10bce221c(&uStack_110,puVar7);
    func_0x00010bce3878();
    uVar10 = extraout_x8_00;
    if ((extraout_x8_00 & 1) != 0) {
      do {
        func_0x00010bce3290();
      } while (extraout_w10 != 0);
      uVar10 = *unaff_x19;
    }
    if (uVar10 != 0) goto LAB_10bce2184;
    func_0x00010bce3498();
    func_0x00010bce3e68();
    if ((bStack_108 & 1) != 0) goto LAB_10bce2174;
    pbVar9 = &bStack_e9;
    func_0x00010bce37e0();
    func_0x00010bce360c();
    func_0x00010bce3c04();
    puVar7 = puStack_f8;
    func_0x00010bce3f00();
    lVar11 = puVar8[1];
    iVar6 = *(int *)(lVar11 + 0x48) + -3;
    cVar3 = SBORROW4(iVar6,0xf);
    cVar4 = *(int *)(lVar11 + 0x48) + -0x12 < 0;
    uVar5 = iVar6 == 0xf;
    switch(iVar6) {
    case 0:
    case 0xd:
    case 0xf:
      func_0x00010bce374c();
      FUN_10bce1c08();
      func_0x00010bce3804();
      if ((extraout_x8_01 & 1) == 0) {
        if (extraout_x8_01 == 0) {
          func_0x00010bce3498();
          FUN_10bcddea0(&puStack_a0);
          func_0x00010bce37c8();
          goto code_r0x00010bce2070;
        }
      }
      else {
        do {
          func_0x00010bce3290();
        } while (extraout_w10_00 != 0);
      }
      break;
    case 1:
    case 3:
      func_0x00010bce374c();
      FUN_10bce1c5c();
      func_0x00010bce3804();
      if ((extraout_x8_03 & 1) == 0) {
        if (extraout_x8_03 == 0) {
          func_0x00010bce3498();
          FUN_10bcddef0(&puStack_a0);
          func_0x00010bce37d0();
          goto code_r0x00010bce2070;
        }
      }
      else {
        do {
          func_0x00010bce3290();
        } while (extraout_w10_02 != 0);
      }
      break;
    case 2:
    case 0xc:
    case 0xe:
      FUN_10bce1d64(puVar7,*(undefined4 *)(lVar11 + 0x50));
      pbStack_98 = (byte *)CONCAT44(pbStack_98._4_4_,*(undefined4 *)puVar7);
      puStack_a0 = (undefined8 *)0x0;
      func_0x00010bce32e4();
      func_0x00010bce3c0c();
      FUN_10bcdff8c(param_2,(ulong)pbStack_98 & 0xffffffff);
      goto code_r0x00010bce2070;
    case 4:
    case 10:
      func_0x00010bce374c();
      FUN_10bce1cb0();
      func_0x00010bce3804();
      if ((extraout_x8_02 & 1) == 0) {
        if (extraout_x8_02 == 0) {
          func_0x00010bce3498();
          func_0x00010bcdfd30(&puStack_a0);
          func_0x00010bcdffb4(param_2,(ulong)pbStack_98 & 0xffffffff);
          goto code_r0x00010bce2070;
        }
      }
      else {
        do {
          func_0x00010bce3290();
        } while (extraout_w10_01 != 0);
      }
      break;
    case 5:
      func_0x00010bce374c();
      FUN_10bce1d08();
      func_0x00010bce3804();
      if ((extraout_x8_04 & 1) == 0) {
        if (extraout_x8_04 == 0) {
          func_0x00010bce3498();
          func_0x00010bcdfd48(&puStack_a0);
          uVar5 = (char)pbStack_98 == '\0';
          pcVar1 = "true";
          if ((bool)uVar5) {
            pcVar1 = "false";
          }
          func_0x00010bcdffdc(param_2,pcVar1);
          goto code_r0x00010bce2070;
        }
      }
      else {
        do {
          func_0x00010bce3290();
        } while (extraout_w10_03 != 0);
      }
      break;
    case 6:
      func_0x00010bce374c();
      FUN_10bce1714();
      func_0x00010bce3804();
      if ((extraout_x8_05 & 1) == 0) {
        if (extraout_x8_05 == 0) {
          func_0x00010bce3498();
          func_0x00010bcdfa04(&puStack_a0);
          func_0x00010bce36d4();
          goto code_r0x00010bce2070;
        }
      }
      else {
        do {
          func_0x00010bce3290();
        } while (extraout_w10_04 != 0);
      }
      break;
    default:
      puVar7 = puVar8;
      func_0x00010bce3ed0();
      puStack_a0 = puVar7;
      pbStack_98 = pbVar9;
      func_0x0001089ac660(auStack_d0,*(undefined4 *)(puVar8[1] + 0x48));
      func_0x00010bce3be4();
      func_0x00010bce38a4();
      uVar2 = extraout_x11;
      puVar8 = extraout_x10;
      if (cVar4 == cVar3) {
        uVar2 = extraout_x8_06;
        puVar8 = auStack_e8;
      }
      func_0x00010bce3630(puVar8,uVar2);
      func_0x00010bce3884();
      goto LAB_10bce2124;
    case 0xb:
      FUN_10bce1d64(puVar7,*(undefined4 *)(lVar11 + 0x50));
      pbStack_98 = (byte *)CONCAT44(pbStack_98._4_4_,*(undefined4 *)puVar7);
      puStack_a0 = (undefined8 *)0x0;
      func_0x00010bce32e4();
      func_0x00010bce3c0c();
      FUN_10bce1940(param_2,puVar8,(ulong)pbStack_98 & 0xffffffff,0);
code_r0x00010bce2070:
      func_0x00010bce3994();
      *unaff_x19 = 0;
      goto code_r0x00010bce212c;
    }
    func_0x00010bce3994();
LAB_10bce2124:
    if (*unaff_x19 != 0) {
LAB_10bce2184:
      func_0x00010bce36e8();
      func_0x00010bce36fc();
      goto LAB_10bce21b0;
    }
code_r0x00010bce212c:
    func_0x00010bce3498();
    func_0x00010bce3d9c(param_2);
    func_0x00010bce35f0();
    param_3 = param_2;
    func_0x00010bce373c(param_2," ");
    func_0x00010bce3f00();
    puVar8 = param_3;
    func_0x00010bce3c04();
    param_3 = param_3 + 4;
    func_0x00010bce35e4();
    FUN_10bce0f24();
    if (*unaff_x19 != 0) goto LAB_10bce2184;
    func_0x00010bce3498();
LAB_10bce2174:
    func_0x00010bce36e8();
    func_0x00010bce36fc();
  }
  func_0x00010bce344c();
  if ((bStack_e9 & 1) == 0) {
    func_0x00010bce360c();
  }
  func_0x00010bce336c();
  *unaff_x19 = 0;
LAB_10bce21b0:
  func_0x00010bce3244(uStack_70);
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bce3994();
  func_0x00010bce36e8();
  func_0x00010bce36fc();
  func_0x00010bce35bc();
  pcStack_118 = FUN_10bce221c;
  puVar12 = param_3;
  puStack_130 = param_2;
  puStack_128 = puVar8;
  puStack_120 = &stack0xfffffffffffffff0;
  func_0x00010bce37ac();
  iVar6 = (int)puVar12;
  FUN_10bcde0c0();
  func_0x00010bcdd9d8();
  if (iVar6 != 5) {
    *(undefined1 *)(puVar8 + 1) = 0;
    goto LAB_10bce22e8;
  }
  FUN_10bce41b0(&uStack_160,param_3);
  uStack_168 = uStack_160;
  if ((uStack_160 & 1) == 0) {
    if (uStack_160 != 0) goto LAB_10bce22d0;
    func_0x00010bce3798();
    FUN_10bcddffc(&uStack_160);
    FUN_10bce1db8(param_2,*(undefined4 *)(param_3[1] + 0x50));
    uStack_150 = 0;
    puStack_148 = param_2;
    func_0x00010bce3798();
    FUN_10bce1b40(&uStack_150);
    puVar12 = puStack_148;
    FUN_10bce2338(puStack_148,uStack_158);
    uVar5 = SUB81(puVar12,0);
    uStack_168 = 0;
    func_0x000107c31550(&uStack_150);
  }
  else {
    do {
      func_0x00010bce3290();
    } while (extraout_w10_05 != 0);
LAB_10bce22d0:
    uVar5 = 0;
  }
  func_0x00010bce36fc();
  if (uStack_168 != 0) {
    FUN_10bcdff38(puVar8);
    func_0x00010bce3798();
    return;
  }
  func_0x00010bce3798();
  *(undefined1 *)(puVar8 + 1) = uVar5;
LAB_10bce22e8:
  *puVar8 = 0;
  return;
}



/* Entry: 10bce1318; end: 10bce1713;  */

void FUN_10bce1318(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  byte bVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  byte *pbVar8;
  byte **ppbVar9;
  undefined8 uVar10;
  byte *pbVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  int extraout_w10;
  ulong uVar15;
  long *unaff_x20;
  long unaff_x22;
  long unaff_x23;
  long *plVar16;
  long *plVar17;
  long lVar18;
  byte *pbVar19;
  long lVar20;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  byte *pbStack_98;
  undefined8 uStack_90;
  byte bStack_88;
  undefined7 uStack_87;
  byte **ppbStack_80;
  byte *pbStack_78;
  long **pplStack_68;
  
  func_0x00010bce3f74();
  plStack_b0 = (long *)0x0;
  plStack_a8 = (long *)0x0;
  plStack_a0 = (long *)0x0;
  iVar2 = *(int *)(param_4 + 0x28);
  plVar16 = (long *)(long)iVar2;
  if (iVar2 != 0) {
    if (iVar2 < 0) {
      FUN_10bce28cc();
LAB_10bce16e4:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10bce16e8);
      (*pcVar3)();
    }
    plVar5 = plVar16;
    pplStack_68 = &plStack_a0;
    FUN_10bce28d8();
    plVar17 = (long *)((long)plVar5 - ((long)plStack_a8 - (long)plStack_b0));
    _memcpy(plVar17);
    plVar13 = plStack_b0;
    plStack_b0 = plVar17;
    plStack_a8 = plVar5;
    plStack_a0 = plVar5 + param_2;
    func_0x00010bce3ae4(plVar13);
  }
  lVar20 = 0;
  for (; plVar16 != (long *)0x0; plVar16 = (long *)((long)plVar16 + -1)) {
    lVar6 = unaff_x23;
    FUN_10bce47ec();
    lVar6 = lVar6 + lVar20;
    uVar7 = (ulong)*(uint *)(*(long *)(lVar6 + 8) + 0x50);
    func_0x00010bce3638();
    if (*(char *)(unaff_x22 + 0x29) == '\x01') {
      if (*(int *)(*(long *)(lVar6 + 8) + 0x4c) != 3) {
        lVar14 = lVar6;
        func_0x00010bcde304();
        uVar4 = (uint)lVar14;
        if (uVar7 != 0) {
          uVar4 = 1;
        }
        if ((uVar4 & 1) == 0) goto LAB_10bce14a0;
      }
LAB_10bce13f8:
      if (plStack_a8 < plStack_a0) {
        *plStack_a8 = lVar6;
        plStack_a8 = plStack_a8 + 1;
      }
      else {
        lVar18 = (long)plStack_a8 - (long)plStack_b0;
        lVar14 = lVar18 >> 3;
        uVar7 = lVar14 + 1;
        if (uVar7 >> 0x3d != 0) {
          FUN_10bce28cc();
          goto LAB_10bce16e4;
        }
        uVar15 = (long)plStack_a0 - (long)plStack_b0 >> 2;
        if (uVar15 <= uVar7) {
          uVar15 = uVar7;
        }
        if (0x7ffffffffffffff7 < (ulong)((long)plStack_a0 - (long)plStack_b0)) {
          uVar15 = 0x1fffffffffffffff;
        }
        if (uVar15 == 0) {
          plVar13 = (long *)0x0;
          lVar12 = lVar18;
          pplStack_68 = &plStack_a0;
        }
        else {
          plVar13 = plStack_b0;
          pplStack_68 = &plStack_a0;
          FUN_10bce28d8();
          lVar14 = (long)plStack_a8 - (long)plStack_b0 >> 3;
          lVar12 = (long)plStack_a8 - (long)plStack_b0;
        }
        plVar5 = (long *)(uVar15 + lVar18);
        *plVar5 = lVar6;
        _memcpy(plVar5 + -lVar14,plStack_b0,lVar12);
        plVar17 = plStack_b0;
        plStack_b0 = plVar5 + -lVar14;
        plStack_a8 = plVar5 + 1;
        plStack_a0 = (long *)(uVar15 + (long)plVar13 * 8);
        func_0x00010bce3ae4(plVar17);
        plStack_a8 = plVar5 + 1;
      }
    }
    else if (uVar7 != 0) goto LAB_10bce13f8;
LAB_10bce14a0:
    lVar20 = lVar20 + 0x20;
  }
  plVar13 = plStack_b0;
  plVar16 = plStack_a8;
  if (plStack_b0 != plStack_a8) {
    func_0x00010bce39dc();
    FUN_10bce294c();
    plVar13 = plStack_b0;
    plVar16 = plStack_a8;
  }
  for (; plVar13 != plVar16; plVar13 = plVar13 + 1) {
    pbVar19 = (byte *)*plVar13;
    if (*(int *)(*(long *)(pbVar19 + 8) + 0x4c) == 3) {
LAB_10bce14f8:
      uVar10 = param_5;
      FUN_10bcdfa1c();
      FUN_10bcde6fc();
      if (*(char *)(unaff_x22 + 0x2b) == '\x01') {
        FUN_10bcde0a4(pbVar19);
        func_0x00010bce39b4();
      }
      else {
        pbVar8 = pbVar19;
        FUN_10bcde0a4();
        pbVar11 = (byte *)(*(ulong *)(*(long *)(pbVar19 + 8) + 0x38) & 0xfffffffffffffffc);
        lVar20 = (long)(char)pbVar11[0x17];
        if (lVar20 < 0) {
          lVar20 = *(long *)(pbVar11 + 8);
          pbVar11 = *(byte **)pbVar11;
        }
        pbStack_98 = pbVar8;
        uStack_90 = uVar10;
        if (((*(char *)(unaff_x22 + 0x2d) == '\x01') && (*pbVar8 - 0x41 < 0x1a)) &&
           (0x19 < *pbVar11 - 0x41)) {
          bVar1 = (&UNK_10e52cc36)[(uint)*pbVar8];
          ppbVar9 = &pbStack_98;
          func_0x00010bce3ea4(ppbVar9,pbVar11,lVar20);
          bStack_88 = bVar1;
          ppbStack_80 = ppbVar9;
          pbStack_78 = pbVar11;
          FUN_10bce04b4();
        }
        else {
          FUN_10bce048c();
        }
      }
      func_0x00010bce373c();
      pbVar8 = pbVar19;
      FUN_10bcde390();
      if ((int)pbVar8 != 0) {
        func_0x00010bce361c();
        FUN_10bce1e0c();
        goto LAB_10bce1698;
      }
      if (*(int *)(*(long *)(pbVar19 + 8) + 0x4c) == 3) {
        func_0x00010bce361c();
        FUN_10bce23b4();
        goto LAB_10bce1698;
      }
      uVar7 = (ulong)*(uint *)(*(long *)(pbVar19 + 8) + 0x50);
      func_0x00010bce3638();
      if (uVar7 != 0) {
        func_0x00010bce38fc();
        FUN_10bce0f24();
        goto LAB_10bce1698;
      }
      if (*(int *)(*(long *)(pbVar19 + 8) + 0x48) != 10) {
        func_0x00010bce38fc();
        FUN_10bce05c4();
        goto LAB_10bce1698;
      }
      func_0x00010bcdf610();
      *unaff_x20 = 0;
    }
    else {
      FUN_10bce221c(&bStack_88);
      lVar20 = CONCAT71(uStack_87,bStack_88);
      *unaff_x20 = lVar20;
      if ((bStack_88 & 1) != 0) {
        do {
          func_0x00010bce3290();
        } while (extraout_w10 != 0);
        lVar20 = *unaff_x20;
      }
      if (lVar20 == 0) {
        func_0x00010bce3b9c();
        func_0x00010bcdfd48(&bStack_88);
        if ((char)ppbStack_80 != '\x01') {
          func_0x00010bce3b30();
          goto LAB_10bce14f8;
        }
        *unaff_x20 = 0;
      }
      func_0x00010bce3b30();
LAB_10bce1698:
      if (*unaff_x20 != 0) goto LAB_10bce16b0;
    }
    func_0x00010bce3b9c();
  }
  *unaff_x20 = 0;
LAB_10bce16b0:
  FUN_10bce31d0(&plStack_b0);
  return;
}



/* Entry: 10bce1714; end: 10bce178f;  */

undefined1  [16] FUN_10bce1714(undefined8 *param_1,ulong param_2,long param_3,long param_4)

{
  undefined1 auVar1 [16];
  ulong *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  ulong uVar6;
  long lVar7;
  byte bVar8;
  ulong uVar9;
  ulong uVar10;
  byte bVar11;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  undefined8 uVar12;
  byte bVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  puVar2 = (ulong *)(param_3 + 8);
  FUN_10bce1790();
  puVar3 = (undefined8 *)(param_2 + 8);
  if (*(int *)(param_2 + 0x30) != 7) {
    if (*(int *)(param_2 + 0x30) != 0x10) {
      FUN_10bce31fc();
      FUN_10bce32d4();
      func_0x00010bce3768();
      func_0x00010bce33b8();
      func_0x00010bce3780();
      lVar7 = 0;
      uVar6 = *puVar2;
      Hint_Prefetch(uVar6,0,2,0);
      uVar4 = (long)&PTR_LOOP_110c8acd8 + (param_2 & 0xffffffff);
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar4;
      uVar9 = SUB168(auVar1 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar4 * -0x622015f714c7d297;
      uVar4 = uVar6 >> 0xc ^ uVar9 >> 7;
      bVar8 = (byte)uVar9 & 0x7f;
      while( true ) {
        uVar4 = uVar4 & puVar2[2];
        uVar12 = *(undefined8 *)(uVar6 + uVar4);
        bVar11 = (byte)((ulong)uVar12 >> 8);
        bVar13 = (byte)((ulong)uVar12 >> 0x10);
        bVar14 = (byte)((ulong)uVar12 >> 0x18);
        bVar15 = (byte)((ulong)uVar12 >> 0x20);
        bVar16 = (byte)((ulong)uVar12 >> 0x28);
        bVar17 = (byte)((ulong)uVar12 >> 0x30);
        bVar18 = (byte)((ulong)uVar12 >> 0x38);
        for (uVar9 = CONCAT17(-(bVar18 == bVar8),
                              CONCAT16(-(bVar17 == bVar8),
                                       CONCAT15(-(bVar16 == bVar8),
                                                CONCAT14(-(bVar15 == bVar8),
                                                         CONCAT13(-(bVar14 == bVar8),
                                                                  CONCAT12(-(bVar13 == bVar8),
                                                                           CONCAT11(-(bVar11 ==
                                                                                     bVar8),-((byte)
                                                  uVar12 == bVar8)))))))) & 0x8080808080808080;
            uVar9 != 0; uVar9 = uVar9 - 1 & uVar9) {
          uVar10 = (uVar9 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar9 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
          uVar10 = uVar4 + ((ulong)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) >> 3) & puVar2[2];
          piVar5 = (int *)(puVar2[1] + uVar10 * 0x38);
          if (*piVar5 == (int)param_2) {
            lVar7 = uVar6 + uVar10;
            goto LAB_10bce1844;
          }
        }
        bVar11 = NEON_umaxv(CONCAT17(-(bVar18 == 0x80),
                                     CONCAT16(-(bVar17 == 0x80),
                                              CONCAT15(-(bVar16 == 0x80),
                                                       CONCAT14(-(bVar15 == 0x80),
                                                                CONCAT13(-(bVar14 == 0x80),
                                                                         CONCAT12(-(bVar13 == 0x80),
                                                                                  CONCAT11(-(bVar11 
                                                  == 0x80),-((byte)uVar12 == 0x80)))))))),1);
        piVar5 = (int *)(ulong)bVar11;
        if ((bVar11 & 1) != 0) break;
        lVar7 = lVar7 + 8;
        uVar4 = lVar7 + uVar4;
      }
      lVar7 = 0;
LAB_10bce1844:
      auVar20._8_8_ = piVar5;
      auVar20._0_8_ = lVar7;
      return auVar20;
    }
    puVar3 = (undefined8 *)*puVar3;
  }
  auVar19._8_8_ = puVar3 + param_4 * 3;
  uVar4 = auVar19._8_8_[1];
  puVar3 = (undefined8 *)*auVar19._8_8_;
  if (-1 < (char)*(byte *)((long)auVar19._8_8_ + 0x17)) {
    uVar4 = (ulong)*(byte *)((long)auVar19._8_8_ + 0x17);
    puVar3 = auVar19._8_8_;
  }
  param_1[1] = puVar3;
  param_1[2] = uVar4;
  *param_1 = 0;
  auVar19._0_8_ = param_1;
  return auVar19;
}



/* Entry: 10bce1790; end: 10bce1853;  */

undefined1  [16] FUN_10bce1790(ulong *param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  uint *puVar3;
  ulong uVar4;
  long lVar5;
  byte bVar6;
  ulong uVar7;
  ulong uVar8;
  byte bVar9;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  undefined8 uVar10;
  byte bVar16;
  undefined1 auVar17 [16];
  
  lVar5 = 0;
  uVar4 = *param_1;
  Hint_Prefetch(uVar4,0,2,0);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (long)&PTR_LOOP_110c8acd8 + (ulong)param_2;
  uVar7 = SUB168(auVar1 * ZEXT816(0x9ddfea08eb382d69),8) ^
          ((long)&PTR_LOOP_110c8acd8 + (ulong)param_2) * -0x622015f714c7d297;
  uVar2 = uVar4 >> 0xc ^ uVar7 >> 7;
  bVar6 = (byte)uVar7 & 0x7f;
  while( true ) {
    uVar2 = uVar2 & param_1[2];
    uVar10 = *(undefined8 *)(uVar4 + uVar2);
    bVar9 = (byte)((ulong)uVar10 >> 8);
    bVar11 = (byte)((ulong)uVar10 >> 0x10);
    bVar12 = (byte)((ulong)uVar10 >> 0x18);
    bVar13 = (byte)((ulong)uVar10 >> 0x20);
    bVar14 = (byte)((ulong)uVar10 >> 0x28);
    bVar15 = (byte)((ulong)uVar10 >> 0x30);
    bVar16 = (byte)((ulong)uVar10 >> 0x38);
    for (uVar7 = CONCAT17(-(bVar16 == bVar6),
                          CONCAT16(-(bVar15 == bVar6),
                                   CONCAT15(-(bVar14 == bVar6),
                                            CONCAT14(-(bVar13 == bVar6),
                                                     CONCAT13(-(bVar12 == bVar6),
                                                              CONCAT12(-(bVar11 == bVar6),
                                                                       CONCAT11(-(bVar9 == bVar6),
                                                                                -((byte)uVar10 ==
                                                                                 bVar6)))))))) &
                 0x8080808080808080; uVar7 != 0; uVar7 = uVar7 - 1 & uVar7) {
      uVar8 = (uVar7 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar2 + ((ulong)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3) & param_1[2];
      puVar3 = (uint *)(param_1[1] + uVar8 * 0x38);
      if (*puVar3 == param_2) {
        lVar5 = uVar4 + uVar8;
        goto LAB_10bce1844;
      }
    }
    bVar9 = NEON_umaxv(CONCAT17(-(bVar16 == 0x80),
                                CONCAT16(-(bVar15 == 0x80),
                                         CONCAT15(-(bVar14 == 0x80),
                                                  CONCAT14(-(bVar13 == 0x80),
                                                           CONCAT13(-(bVar12 == 0x80),
                                                                    CONCAT12(-(bVar11 == 0x80),
                                                                             CONCAT11(-(bVar9 == 
                                                  0x80),-((byte)uVar10 == 0x80)))))))),1);
    puVar3 = (uint *)(ulong)bVar9;
    if ((bVar9 & 1) != 0) break;
    lVar5 = lVar5 + 8;
    uVar2 = lVar5 + uVar2;
  }
  lVar5 = 0;
LAB_10bce1844:
  auVar17._8_8_ = puVar3;
  auVar17._0_8_ = lVar5;
  return auVar17;
}



/* Entry: 10bce1854; end: 10bce1877;  */

void FUN_10bce1854(void)

{
  func_0x00010bce3478();
  func_0x00010bce39cc();
  func_0x00010ae6bd08();
  return;
}



/* Entry: 10bce1878; end: 10bce18e7;  */

undefined8 FUN_10bce1878(void)

{
  return 1;
}



/* Entry: 10bce18e8; end: 10bce193f;  */

void FUN_10bce18e8(undefined8 *param_1,ulong param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  puVar2 = (undefined8 *)(param_2 & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar2 + 0x17);
  puVar3 = puVar2;
  if (lVar4 < 0) {
    puVar3 = (undefined8 *)*puVar2;
    lVar4 = puVar2[1];
  }
  FUN_10bce1b38(puVar3,lVar4,param_3);
  uVar1 = param_3[1];
  puVar3 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar3 = param_3;
  }
  param_1[1] = puVar3;
  param_1[2] = uVar1;
  *param_1 = 0;
  return;
}



/* Entry: 10bce1940; end: 10bce1afb;  */

void FUN_10bce1940(int param_1,long param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  char cVar4;
  char cVar5;
  long *plVar6;
  ulong *puVar7;
  undefined8 extraout_x8;
  ulong uVar8;
  long lVar9;
  int extraout_w10;
  undefined8 extraout_x10;
  undefined8 extraout_x11;
  undefined8 *unaff_x19;
  int unaff_w20;
  ulong uVar10;
  int unaff_w21;
  undefined8 unaff_x22;
  undefined1 auStack_b0 [24];
  long alStack_98 [6];
  ulong auStack_68 [3];
  undefined1 auStack_50 [8];
  ulong uStack_48;
  long lStack_40;
  uint uStack_34;
  
  func_0x00010bce3d00();
  FUN_10bcde0c0();
  func_0x00010bcdd9d8();
  if (param_1 == 6) {
    func_0x00010bce3cc4();
    uVar10 = 4;
    while( true ) {
      if ((*(byte *)(unaff_x19 + 4) & 1) != 0) {
        return;
      }
      if (uVar10 == 0) break;
      uVar8 = unaff_x19[2];
      if (uVar8 == 0) {
        plVar6 = (long *)*unaff_x19;
        (**(code **)(*plVar6 + 0x10))(plVar6,unaff_x19 + 1,&uStack_34);
        if ((int)plVar6 == 0) {
          unaff_x19[2] = 0;
          *(undefined1 *)(unaff_x19 + 4) = 1;
          return;
        }
        uVar8 = (ulong)uStack_34;
        unaff_x19[2] = uVar8;
      }
      if (uVar10 <= uVar8) {
        uVar8 = uVar10;
      }
      _memcpy(unaff_x19[1],param_2,uVar8);
      unaff_x19[1] = unaff_x19[1] + uVar8;
      unaff_x19[2] = unaff_x19[2] - uVar8;
      param_2 = param_2 + uVar8;
      uVar10 = uVar10 - uVar8;
      unaff_x19[3] = unaff_x19[3] + uVar8;
    }
    return;
  }
  if ((*(byte *)((long)unaff_x19 + 0x2a) & 1) != 0) goto LAB_10bce1a6c;
  FUN_10bce43f8(&uStack_48);
  auStack_68[0] = uStack_48;
  if ((uStack_48 & 1) == 0) {
    if (uStack_48 != 0) goto LAB_10bce1a10;
    func_0x00010bce368c();
    FUN_10bcde2ec(&uStack_48);
    uVar10 = *(ulong *)(lStack_40 + 0x20);
    cVar4 = false;
    cVar5 = false;
    puVar7 = (ulong *)(lStack_40 + 0x20);
    if ((uVar10 & 1) != 0) {
      puVar7 = (ulong *)(uVar10 + 7);
    }
    lVar9 = (long)*(int *)(lStack_40 + 0x28) << 3;
    do {
      if (lVar9 == 0) {
        func_0x00010bce3f9c();
        func_0x00010bce3a50();
        func_0x00010bce3970();
        uVar1 = extraout_x11;
        uVar3 = extraout_x10;
        if (cVar4 == cVar5) {
          uVar1 = extraout_x8;
          uVar3 = unaff_x22;
        }
        func_0x00010ae775f4(auStack_50,uVar3,uVar1);
        func_0x000107c3a614(alStack_98,auStack_50);
        func_0x000107c31550(auStack_50);
        func_0x00010bce3bf4();
        goto LAB_10bce1a58;
      }
      uVar10 = *puVar7;
      iVar2 = *(int *)(uVar10 + 0x30);
      lVar9 = lVar9 + -8;
      cVar5 = SBORROW4(iVar2,unaff_w20);
      cVar4 = iVar2 - unaff_w20 < 0;
      puVar7 = puVar7 + 1;
    } while (iVar2 != unaff_w20);
    FUN_10bcdfeac(alStack_98,*(ulong *)(uVar10 + 0x28) & 0xfffffffffffffffc);
  }
  else {
    do {
      func_0x00010bce3290();
    } while (extraout_w10 != 0);
LAB_10bce1a10:
    FUN_10bcddf08(alStack_98,auStack_68);
    func_0x00010bce368c();
  }
LAB_10bce1a58:
  func_0x000107c31550(&uStack_48);
  if (alStack_98[0] == 0) {
    func_0x00010bce3dbc();
    func_0x00010bce3db4(auStack_b0);
    func_0x00010bce3df4();
    func_0x00010bce3744();
    func_0x00010bce399c();
    return;
  }
  func_0x00010bce399c();
LAB_10bce1a6c:
  if (unaff_w21 == 0) {
    FUN_10bcdfe04();
  }
  else {
    func_0x00010bcdfc78();
  }
  return;
}



/* Entry: 10bce1afc; end: 10bce1b37;  */

undefined8 * FUN_10bce1afc(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *param_2 = 0x36;
  FUN_10bcdff7c();
  return param_1;
}



/* Entry: 10bce1b38; end: 10bce1b3f;  */

/* WARNING: Removing unreachable block (ram,0x00010ae8950c) */
/* WARNING: Removing unreachable block (ram,0x00010ae89588) */
/* WARNING: Removing unreachable block (ram,0x00010ae89604) */
/* WARNING: Removing unreachable block (ram,0x00010ae89750) */
/* WARNING: Removing unreachable block (ram,0x00010ae89774) */
/* WARNING: Removing unreachable block (ram,0x00010ae89644) */
/* WARNING: Removing unreachable block (ram,0x00010ae89398) */
/* WARNING: Removing unreachable block (ram,0x00010ae89184) */
/* WARNING: Removing unreachable block (ram,0x00010ae8918c) */
/* WARNING: Removing unreachable block (ram,0x00010ae8929c) */
/* WARNING: Removing unreachable block (ram,0x00010ae896cc) */
/* WARNING: Removing unreachable block (ram,0x00010ae89728) */
/* WARNING: Removing unreachable block (ram,0x00010ae89730) */
/* WARNING: Removing unreachable block (ram,0x00010ae89738) */
/* WARNING: Removing unreachable block (ram,0x00010ae89418) */
/* WARNING: Removing unreachable block (ram,0x00010ae89664) */
/* WARNING: Removing unreachable block (ram,0x00010ae89524) */
/* WARNING: Removing unreachable block (ram,0x00010ae895a0) */
/* WARNING: Removing unreachable block (ram,0x00010ae89468) */
/* WARNING: Removing unreachable block (ram,0x00010ae8948c) */
/* WARNING: Removing unreachable block (ram,0x00010ae89494) */
/* WARNING: Removing unreachable block (ram,0x00010ae894b0) */
/* WARNING: Removing unreachable block (ram,0x00010ae894b8) */
/* WARNING: Removing unreachable block (ram,0x00010ae894c0) */
/* WARNING: Removing unreachable block (ram,0x00010ae8969c) */
/* WARNING: Removing unreachable block (ram,0x00010ae89364) */
/* WARNING: Removing unreachable block (ram,0x00010ae893c0) */
/* WARNING: Removing unreachable block (ram,0x00010ae893e4) */
/* WARNING: Removing unreachable block (ram,0x00010ae893ec) */
/* WARNING: Removing unreachable block (ram,0x00010ae89408) */
/* WARNING: Removing unreachable block (ram,0x00010ae894c4) */
/* WARNING: Removing unreachable block (ram,0x00010ae89348) */
/* WARNING: Removing unreachable block (ram,0x00010ae89354) */

void FUN_10bce1b38(byte *param_1,ulong param_2,byte *param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulong uVar9;
  byte *extraout_x8;
  ulong uVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbStack_e8;
  undefined8 uStack_b0;
  char cStack_99;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pbVar8 = param_3;
  uVar4 = param_2;
  func_0x000107c34fec();
  uVar11 = (uint)(char)param_3[0x17];
  pbVar15 = param_3;
  if ((char)param_3[0x17] < '\0') {
    pbVar15 = *(byte **)param_3;
  }
  pbVar1 = param_1 + param_2;
  pbVar7 = param_1;
  pbVar14 = pbVar15;
  if ((0 < (long)param_2) && (pbVar13 = pbVar15, pbVar16 = param_1, pbVar15 == param_1)) {
    while (pbVar7 = pbVar16, pbVar14 = pbVar13, *pbVar16 != 0x5c) {
      pbVar7 = pbVar16 + 1;
      pbVar14 = pbVar13 + 1;
      if ((pbVar16 != pbVar13) || (pbVar13 = pbVar14, pbVar16 = pbVar7, pbVar1 <= pbVar7)) break;
    }
  }
  if (pbVar7 < pbVar1) {
    pbStack_e8 = (byte *)0x0;
    pbVar16 = pbVar1 + -1;
    pbVar13 = pbVar14;
code_r0x00010ae88fec:
    uVar4 = 7;
    uVar11 = (uint)*pbVar7;
    if (*pbVar7 == 0x5c) {
      pbVar12 = pbVar7 + 1;
      if (pbVar16 < pbVar12) {
        pbStack_e8 = (byte *)0x0;
        goto code_r0x00010ae894cc;
      }
      bVar2 = *pbVar12;
      uVar11 = (uint)bVar2;
      if (bVar2 < 0x58) {
        if (bVar2 < 0x30) {
          if (bVar2 == 0x22) {
            *pbVar13 = 0x22;
          }
          else {
            if (uVar11 != 0x27) goto code_r0x00010ae894c8;
            *pbVar13 = 0x27;
          }
        }
        else {
          uVar11 = uVar11 - 0x30;
          if (uVar11 < 8) {
            uVar3 = uVar11;
            if (pbVar12 < pbVar16) {
              pbVar12 = pbVar7 + 2;
              uVar3 = ((uint)*pbVar12 + uVar11 * 8) - 0x30;
              if ((*pbVar12 & 0xf8) != 0x30) {
                pbVar12 = pbVar7 + 1;
                uVar3 = uVar11;
              }
            }
            if (pbVar12 < pbVar16) {
              pbVar7 = pbVar12 + 1;
              if ((*pbVar7 & 0xf8) == 0x30) {
                uVar11 = ((uint)*pbVar7 + uVar3 * 8) - 0x30;
                if (uVar11 < 0x100) goto code_r0x00010ae8907c;
                goto code_r0x00010ae894c8;
              }
            }
            pbVar14 = pbVar13 + 1;
            *pbVar13 = (byte)uVar3;
            goto code_r0x00010ae892f8;
          }
          if (bVar2 != 0x3f) {
            if ((bVar2 == 0x55) && (pbVar12 = pbVar7 + 9, pbVar12 < pbVar1)) {
              uVar4 = 0;
              lVar5 = 2;
              do {
                bVar2 = pbVar7[lVar5];
                if ((-1 < (char)(&UNK_10e52ca36)[bVar2]) || (uVar3 = (uint)uVar4, 0x10fff < uVar3))
                goto code_r0x00010ae894c8;
                uVar11 = bVar2 + 9;
                if (bVar2 < 0x3a) {
                  uVar11 = (uint)bVar2;
                }
                uVar4 = (ulong)(uVar11 & 0xf | uVar3 << 4);
                lVar5 = lVar5 + 1;
              } while ((int)lVar5 != 10);
              uVar3 = uVar3 & 0x1ff80;
code_r0x00010ae892a4:
              if (uVar3 != 0xd80) {
                pbVar14 = pbVar13;
                func_0x00010ae87714();
                pbVar14 = pbVar13 + (long)pbVar14;
                goto code_r0x00010ae892f8;
              }
            }
            goto code_r0x00010ae894c8;
          }
          *pbVar13 = 0x3f;
        }
      }
      else if (bVar2 < 0x6e) {
        if (bVar2 < 0x61) {
          if (bVar2 != 0x58) {
            if (bVar2 == 0x5c) {
              *pbVar13 = 0x5c;
              goto code_r0x00010ae892f4;
            }
            goto code_r0x00010ae894c8;
          }
code_r0x00010ae891a8:
          if ((pbVar16 <= pbVar12) || (-1 < (char)(&UNK_10e52ca36)[pbVar7[2]]))
          goto code_r0x00010ae894cc;
          uVar11 = 0;
          pbVar8 = param_1 + ((param_2 - 2) - (long)pbVar7);
          pbVar14 = pbVar12;
          do {
            bVar2 = pbVar14[1];
            pbVar12 = pbVar14;
            if (-1 < (char)(&UNK_10e52ca36)[bVar2]) break;
            uVar3 = bVar2 + 9;
            if (bVar2 < 0x3a) {
              uVar3 = (uint)bVar2;
            }
            uVar11 = uVar3 & 0xf | uVar11 << 4;
            pbVar8 = pbVar8 + -1;
            pbVar14 = pbVar14 + 1;
            pbVar12 = pbVar7 + (long)param_1 + ~(ulong)pbVar7 + param_2;
          } while (pbVar8 != (byte *)0x0);
          if (uVar11 < 0x100) {
            pbVar14 = pbVar13 + 1;
            *pbVar13 = (byte)uVar11;
            goto code_r0x00010ae892f8;
          }
          goto code_r0x00010ae894c8;
        }
        if (bVar2 == 0x61) {
          *pbVar13 = 7;
        }
        else if (bVar2 == 0x62) {
          *pbVar13 = 8;
        }
        else {
          if (bVar2 != 0x66) goto code_r0x00010ae894c8;
          *pbVar13 = 0xc;
        }
      }
      else {
        if (0x74 < bVar2) {
          if (bVar2 == 0x75) {
            pbVar12 = pbVar7 + 5;
            if (pbVar12 < pbVar1) {
              lVar5 = 0;
              uVar4 = 0;
              do {
                bVar2 = pbVar7[lVar5 + 2];
                if (-1 < (char)(&UNK_10e52ca36)[bVar2]) goto code_r0x00010ae894c8;
                uVar11 = bVar2 + 9;
                if (bVar2 < 0x3a) {
                  uVar11 = (uint)bVar2;
                }
                uVar3 = (uint)uVar4;
                uVar4 = (ulong)(uVar11 & 0xf | uVar3 << 4);
                lVar5 = lVar5 + 1;
              } while ((int)lVar5 != 4);
              uVar3 = uVar3 & 0xfffff80;
              goto code_r0x00010ae892a4;
            }
          }
          else {
            if (bVar2 == 0x76) {
              *pbVar13 = 0xb;
              goto code_r0x00010ae892f4;
            }
            if (bVar2 == 0x78) goto code_r0x00010ae891a8;
          }
code_r0x00010ae894c8:
          pbStack_e8 = (byte *)0x0;
          goto code_r0x00010ae894cc;
        }
        if (bVar2 == 0x6e) {
          *pbVar13 = 10;
        }
        else if (bVar2 == 0x72) {
          *pbVar13 = 0xd;
        }
        else {
          if (uVar11 != 0x74) goto code_r0x00010ae894c8;
          *pbVar13 = 9;
        }
      }
code_r0x00010ae892f4:
      pbVar14 = pbVar13 + 1;
    }
    else {
code_r0x00010ae8907c:
      pbVar14 = pbVar13 + 1;
      *pbVar13 = (byte)uVar11;
      pbVar12 = pbVar7;
    }
code_r0x00010ae892f8:
    uVar4 = 7;
    pbVar8 = (byte *)0x5c;
    pbVar7 = pbVar12 + 1;
    pbVar13 = pbVar14;
    if (pbVar1 <= pbVar7) goto code_r0x00010ae89304;
    goto code_r0x00010ae88fec;
  }
code_r0x00010ae89308:
  uVar9 = (long)pbVar14 - (long)pbVar15;
  if ((uVar11 >> 7 & 1) == 0) {
    if ((byte)uVar11 < uVar9) goto code_r0x00010ae8977c;
    param_3[0x17] = (byte)uVar9;
  }
  else {
    if (*(ulong *)(param_3 + 8) < uVar9) goto code_r0x00010ae8977c;
    *(ulong *)(param_3 + 8) = uVar9;
    param_3 = *(byte **)param_3;
  }
  param_3[uVar9] = 0;
  pbStack_e8 = (byte *)0x1;
code_r0x00010ae894cc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  pbVar8 = pbStack_e8;
code_r0x00010ae8977c:
  func_0x000109276104();
  if (cStack_99 < '\0') {
    __ZdlPv(uStack_b0);
  }
  __Unwind_Resume();
  extraout_x8[0] = 0;
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  extraout_x8[3] = 0;
  extraout_x8[4] = 0;
  extraout_x8[5] = 0;
  extraout_x8[6] = 0;
  extraout_x8[7] = 0;
  extraout_x8[8] = 0;
  extraout_x8[9] = 0;
  extraout_x8[10] = 0;
  extraout_x8[0xb] = 0;
  extraout_x8[0xc] = 0;
  extraout_x8[0xd] = 0;
  extraout_x8[0xe] = 0;
  extraout_x8[0xf] = 0;
  extraout_x8[0x10] = 0;
  extraout_x8[0x11] = 0;
  extraout_x8[0x12] = 0;
  extraout_x8[0x13] = 0;
  extraout_x8[0x14] = 0;
  extraout_x8[0x15] = 0;
  extraout_x8[0x16] = 0;
  extraout_x8[0x17] = 0;
  uVar9 = 0;
  if (uVar4 != 0) {
    uVar9 = 0;
    uVar10 = uVar4;
    pbVar15 = pbVar8;
    do {
      uVar9 = uVar9 + (byte)(&UNK_10e52f6e8)[*pbVar15];
      uVar10 = uVar10 - 1;
      pbVar15 = pbVar15 + 1;
    } while (uVar10 != 0);
  }
  if (uVar9 == uVar4) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (extraout_x8,pbVar8,uVar4);
  }
  else {
    func_0x000107c34fec(extraout_x8);
    if (uVar4 != 0) {
      pbVar15 = *(byte **)extraout_x8;
      if (-1 < (char)extraout_x8[0x17]) {
        pbVar15 = extraout_x8;
      }
      do {
        bVar2 = *pbVar8;
        if ((&UNK_10e52f6e8)[bVar2] == '\x02') {
          pbVar14 = pbVar15;
          if (bVar2 < 0x22) {
            if (bVar2 == 9) {
              pbVar15[0] = 0x5c;
              pbVar15[1] = 0x74;
              pbVar14 = pbVar15 + 2;
            }
            else if (bVar2 == 10) {
              pbVar15[0] = 0x5c;
              pbVar15[1] = 0x6e;
              pbVar14 = pbVar15 + 2;
            }
            else if (bVar2 == 0xd) {
              pbVar15[0] = 0x5c;
              pbVar15[1] = 0x72;
              pbVar14 = pbVar15 + 2;
            }
          }
          else if (bVar2 == 0x22) {
            pbVar14 = pbVar15 + 2;
            pbVar15[0] = 0x5c;
            pbVar15[1] = 0x22;
          }
          else if (bVar2 == 0x27) {
            pbVar14 = pbVar15 + 2;
            pbVar15[0] = 0x5c;
            pbVar15[1] = 0x27;
          }
          else if (bVar2 == 0x5c) {
            pbVar14 = pbVar15 + 2;
            pbVar15[0] = 0x5c;
            pbVar15[1] = 0x5c;
          }
        }
        else if ((&UNK_10e52f6e8)[bVar2] == '\x01') {
          *pbVar15 = bVar2;
          pbVar14 = pbVar15 + 1;
        }
        else {
          *pbVar15 = 0x5c;
          pbVar15[1] = bVar2 >> 6 | 0x30;
          pbVar15[2] = bVar2 >> 3 & 7 | 0x30;
          pbVar15[3] = bVar2 & 7 | 0x30;
          pbVar14 = pbVar15 + 4;
        }
        pbVar8 = pbVar8 + 1;
        uVar4 = uVar4 - 1;
        pbVar15 = pbVar14;
      } while (uVar4 != 0);
    }
  }
  return;
code_r0x00010ae89304:
  uVar11 = (uint)param_3[0x17];
  goto code_r0x00010ae89308;
}



/* Entry: 10bce1b40; end: 10bce1b57;  */

void FUN_10bce1b40(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  undefined8 *extraout_x8;
  undefined8 *puVar9;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 uVar10;
  undefined8 *extraout_x8_02;
  undefined8 *extraout_x8_03;
  undefined8 *extraout_x8_04;
  undefined8 extraout_x8_05;
  ulong extraout_x8_06;
  ulong uVar11;
  long lVar12;
  ulong extraout_x8_07;
  ulong extraout_x8_08;
  ulong extraout_x8_09;
  ulong extraout_x8_10;
  ulong extraout_x8_11;
  undefined8 extraout_x8_12;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  int extraout_w9_02;
  int extraout_w9_03;
  int extraout_w9_04;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  undefined8 *extraout_x10;
  undefined8 extraout_x11;
  ulong *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 *puVar13;
  ulong uStack_358;
  ulong uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 *puStack_338;
  undefined8 uStack_300;
  byte bStack_2f8;
  undefined8 uStack_2f0;
  undefined8 *puStack_2e8;
  byte bStack_2d9;
  undefined8 auStack_2d8 [3];
  undefined1 auStack_2c0 [48];
  undefined8 *puStack_290;
  byte *pbStack_288;
  undefined8 uStack_260;
  
  if (*param_1 == 0) {
    return;
  }
  func_0x00010ae77c74();
  FUN_10bce3324();
  puVar9 = extraout_x8;
  if (extraout_w9 == 5) {
LAB_10bce1b84:
    *(undefined4 *)(unaff_x20 + 1) = *(undefined4 *)((long)puVar9 + unaff_x21 * 4);
    *unaff_x20 = 0;
    return;
  }
  if (extraout_w9 == 0xe) {
    puVar9 = (undefined8 *)*extraout_x8;
    goto LAB_10bce1b84;
  }
  FUN_10bce31fc();
  FUN_10bce32d4();
  func_0x00010bce3768();
  func_0x00010bce33b8();
  func_0x00010bce3780();
  FUN_10bce3324();
  puVar9 = extraout_x8_00;
  if (extraout_w9_00 == 6) {
LAB_10bce1bdc:
    unaff_x20[1] = puVar9[unaff_x21];
    *unaff_x20 = 0;
    return;
  }
  if (extraout_w9_00 == 0xf) {
    puVar9 = (undefined8 *)*extraout_x8_00;
    goto LAB_10bce1bdc;
  }
  FUN_10bce31fc();
  FUN_10bce32d4();
  func_0x00010bce3768();
  func_0x00010bce33b8();
  func_0x00010bce3780();
  FUN_10bce3324();
  puVar9 = extraout_x8_01;
  if (extraout_w9_01 == 3) {
LAB_10bce1c34:
    uVar10 = puVar9[unaff_x21];
    *unaff_x20 = 0;
    unaff_x20[1] = uVar10;
    return;
  }
  if (extraout_w9_01 == 0xc) {
    puVar9 = (undefined8 *)*extraout_x8_01;
    goto LAB_10bce1c34;
  }
  FUN_10bce31fc();
  FUN_10bce32d4();
  func_0x00010bce3768();
  func_0x00010bce33b8();
  func_0x00010bce3780();
  FUN_10bce3324();
  puVar9 = extraout_x8_02;
  if (extraout_w9_02 == 4) {
LAB_10bce1c88:
    uVar10 = puVar9[unaff_x21];
    *unaff_x20 = 0;
    unaff_x20[1] = uVar10;
    return;
  }
  if (extraout_w9_02 == 0xd) {
    puVar9 = (undefined8 *)*extraout_x8_02;
    goto LAB_10bce1c88;
  }
  FUN_10bce31fc();
  FUN_10bce32d4();
  func_0x00010bce3768();
  func_0x00010bce33b8();
  func_0x00010bce3780();
  FUN_10bce3324();
  puVar9 = extraout_x8_03;
  if (extraout_w9_03 == 2) {
LAB_10bce1cdc:
    *(undefined4 *)(unaff_x20 + 1) = *(undefined4 *)((long)puVar9 + unaff_x21 * 4);
    *unaff_x20 = 0;
    return;
  }
  if (extraout_w9_03 == 0xb) {
    puVar9 = (undefined8 *)*extraout_x8_03;
    goto LAB_10bce1cdc;
  }
  FUN_10bce31fc();
  FUN_10bce32d4();
  func_0x00010bce3768();
  func_0x00010bce33b8();
  func_0x00010bce3780();
  FUN_10bce3324();
  puVar9 = extraout_x8_04;
  if (extraout_w9_04 == 0) {
LAB_10bce1d30:
    *(bool *)(unaff_x20 + 1) = *(char *)((long)puVar9 + unaff_x21) == '\0';
    *unaff_x20 = 0;
    return;
  }
  if (extraout_w9_04 == 9) {
    puVar9 = (undefined8 *)*extraout_x8_04;
    goto LAB_10bce1d30;
  }
  FUN_10bce31fc();
  FUN_10bce32d4();
  func_0x00010bce3768();
  func_0x00010bce33b8();
  func_0x00010bce3780();
  func_0x00010bce3da8();
  if (param_1 == (long *)0x0) {
    return;
  }
  puVar9 = param_2 + 1;
  if (*(int *)(param_2 + 6) == 1) {
    return;
  }
  if (*(int *)(param_2 + 6) == 10) {
    return;
  }
  FUN_10bce31fc();
  FUN_10bce32d4();
  func_0x00010bce3768();
  func_0x00010bce33b8();
  func_0x00010bce3780();
  func_0x00010bce3da8();
  if (puVar9 == (undefined8 *)0x0) {
    return;
  }
  puVar9 = param_2 + 1;
  if (*(int *)(param_2 + 6) == 8) {
    return;
  }
  if (*(int *)(param_2 + 6) == 0x11) {
    return;
  }
  FUN_10bce31fc();
  FUN_10bce32d4();
  func_0x00010bce3768();
  func_0x00010bce33b8();
  func_0x00010bce3780();
  func_0x00010bce3d90();
  func_0x00010bce327c();
  uStack_260 = extraout_x8_05;
  func_0x00010bce3ba4();
  FUN_10bce32b0();
  func_0x00010bce3b6c();
  bStack_2d9 = 1;
  puVar7 = puVar9;
  for (puVar13 = (undefined8 *)0x0; uVar4 = puVar13 == puVar9, !(bool)uVar4;
      puVar13 = (undefined8 *)((long)puVar13 + 1)) {
    func_0x00010bce3e88();
    puStack_2e8 = puVar7 + (long)puVar13 * 5;
    uStack_2f0 = 0;
    func_0x00010bce32e4();
    func_0x00010bce3c04();
    func_0x00010bce3c04();
    puVar6 = puStack_2e8;
    func_0x00010bce3f00();
    param_3 = puVar7 + 4;
    puVar7 = &uStack_300;
    FUN_10bce221c(&uStack_300,puVar6);
    func_0x00010bce3878();
    uVar11 = extraout_x8_06;
    if ((extraout_x8_06 & 1) != 0) {
      do {
        func_0x00010bce3290();
      } while (extraout_w10 != 0);
      uVar11 = *unaff_x19;
    }
    if (uVar11 != 0) goto LAB_10bce2184;
    func_0x00010bce3498();
    func_0x00010bce3e68();
    if ((bStack_2f8 & 1) != 0) goto LAB_10bce2174;
    pbVar8 = &bStack_2d9;
    func_0x00010bce37e0();
    func_0x00010bce360c();
    func_0x00010bce3c04();
    puVar6 = puStack_2e8;
    func_0x00010bce3f00();
    lVar12 = puVar7[1];
    iVar5 = *(int *)(lVar12 + 0x48) + -3;
    cVar2 = SBORROW4(iVar5,0xf);
    cVar3 = *(int *)(lVar12 + 0x48) + -0x12 < 0;
    uVar4 = iVar5 == 0xf;
    switch(iVar5) {
    case 0:
    case 0xd:
    case 0xf:
      func_0x00010bce374c();
      FUN_10bce1c08();
      func_0x00010bce3804();
      if ((extraout_x8_07 & 1) == 0) {
        if (extraout_x8_07 == 0) {
          func_0x00010bce3498();
          FUN_10bcddea0(&puStack_290);
          func_0x00010bce37c8();
          goto code_r0x00010bce2070;
        }
      }
      else {
        do {
          func_0x00010bce3290();
        } while (extraout_w10_00 != 0);
      }
      break;
    case 1:
    case 3:
      func_0x00010bce374c();
      FUN_10bce1c5c();
      func_0x00010bce3804();
      if ((extraout_x8_09 & 1) == 0) {
        if (extraout_x8_09 == 0) {
          func_0x00010bce3498();
          FUN_10bcddef0(&puStack_290);
          func_0x00010bce37d0();
          goto code_r0x00010bce2070;
        }
      }
      else {
        do {
          func_0x00010bce3290();
        } while (extraout_w10_02 != 0);
      }
      break;
    case 2:
    case 0xc:
    case 0xe:
      FUN_10bce1d64(puVar6,*(undefined4 *)(lVar12 + 0x50));
      pbStack_288 = (byte *)CONCAT44(pbStack_288._4_4_,*(undefined4 *)puVar6);
      puStack_290 = (undefined8 *)0x0;
      func_0x00010bce32e4();
      func_0x00010bce3c0c();
      FUN_10bcdff8c(param_2,(ulong)pbStack_288 & 0xffffffff);
      goto code_r0x00010bce2070;
    case 4:
    case 10:
      func_0x00010bce374c();
      FUN_10bce1cb0();
      func_0x00010bce3804();
      if ((extraout_x8_08 & 1) == 0) {
        if (extraout_x8_08 == 0) {
          func_0x00010bce3498();
          func_0x00010bcdfd30(&puStack_290);
          func_0x00010bcdffb4(param_2,(ulong)pbStack_288 & 0xffffffff);
          goto code_r0x00010bce2070;
        }
      }
      else {
        do {
          func_0x00010bce3290();
        } while (extraout_w10_01 != 0);
      }
      break;
    case 5:
      func_0x00010bce374c();
      FUN_10bce1d08();
      func_0x00010bce3804();
      if ((extraout_x8_10 & 1) == 0) {
        if (extraout_x8_10 == 0) {
          func_0x00010bce3498();
          func_0x00010bcdfd48(&puStack_290);
          uVar4 = (char)pbStack_288 == '\0';
          pcVar1 = "true";
          if ((bool)uVar4) {
            pcVar1 = "false";
          }
          func_0x00010bcdffdc(param_2,pcVar1);
          goto code_r0x00010bce2070;
        }
      }
      else {
        do {
          func_0x00010bce3290();
        } while (extraout_w10_03 != 0);
      }
      break;
    case 6:
      func_0x00010bce374c();
      FUN_10bce1714();
      func_0x00010bce3804();
      if ((extraout_x8_11 & 1) == 0) {
        if (extraout_x8_11 == 0) {
          func_0x00010bce3498();
          func_0x00010bcdfa04(&puStack_290);
          func_0x00010bce36d4();
          goto code_r0x00010bce2070;
        }
      }
      else {
        do {
          func_0x00010bce3290();
        } while (extraout_w10_04 != 0);
      }
      break;
    default:
      puVar6 = puVar7;
      func_0x00010bce3ed0();
      puStack_290 = puVar6;
      pbStack_288 = pbVar8;
      func_0x0001089ac660(auStack_2c0,*(undefined4 *)(puVar7[1] + 0x48));
      func_0x00010bce3be4();
      func_0x00010bce38a4();
      uVar10 = extraout_x11;
      puVar7 = extraout_x10;
      if (cVar3 == cVar2) {
        uVar10 = extraout_x8_12;
        puVar7 = auStack_2d8;
      }
      func_0x00010bce3630(puVar7,uVar10);
      func_0x00010bce3884();
      goto LAB_10bce2124;
    case 0xb:
      FUN_10bce1d64(puVar6,*(undefined4 *)(lVar12 + 0x50));
      pbStack_288 = (byte *)CONCAT44(pbStack_288._4_4_,*(undefined4 *)puVar6);
      puStack_290 = (undefined8 *)0x0;
      func_0x00010bce32e4();
      func_0x00010bce3c0c();
      FUN_10bce1940(param_2,puVar7,(ulong)pbStack_288 & 0xffffffff,0);
code_r0x00010bce2070:
      func_0x00010bce3994();
      *unaff_x19 = 0;
      goto code_r0x00010bce212c;
    }
    func_0x00010bce3994();
LAB_10bce2124:
    if (*unaff_x19 != 0) {
LAB_10bce2184:
      func_0x00010bce36e8();
      func_0x00010bce36fc();
      goto LAB_10bce21b0;
    }
code_r0x00010bce212c:
    func_0x00010bce3498();
    func_0x00010bce3d9c(param_2);
    func_0x00010bce35f0();
    param_3 = param_2;
    func_0x00010bce373c(param_2," ");
    func_0x00010bce3f00();
    puVar7 = param_3;
    func_0x00010bce3c04();
    param_3 = param_3 + 4;
    func_0x00010bce35e4();
    FUN_10bce0f24();
    if (*unaff_x19 != 0) goto LAB_10bce2184;
    func_0x00010bce3498();
LAB_10bce2174:
    func_0x00010bce36e8();
    func_0x00010bce36fc();
  }
  func_0x00010bce344c();
  if ((bStack_2d9 & 1) == 0) {
    func_0x00010bce360c();
  }
  func_0x00010bce336c();
  *unaff_x19 = 0;
LAB_10bce21b0:
  func_0x00010bce3244(uStack_260);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bce3994();
  func_0x00010bce36e8();
  func_0x00010bce36fc();
  func_0x00010bce35bc();
  puVar9 = param_3;
  func_0x00010bce37ac();
  iVar5 = (int)puVar9;
  FUN_10bcde0c0();
  func_0x00010bcdd9d8();
  if (iVar5 != 5) {
    *(undefined1 *)(puVar7 + 1) = 0;
    goto LAB_10bce22e8;
  }
  FUN_10bce41b0(&uStack_350,param_3);
  uStack_358 = uStack_350;
  if ((uStack_350 & 1) == 0) {
    if (uStack_350 != 0) goto LAB_10bce22d0;
    func_0x00010bce3798();
    FUN_10bcddffc(&uStack_350);
    FUN_10bce1db8(param_2,*(undefined4 *)(param_3[1] + 0x50));
    uStack_340 = 0;
    puStack_338 = param_2;
    func_0x00010bce3798();
    FUN_10bce1b40(&uStack_340);
    puVar9 = puStack_338;
    FUN_10bce2338(puStack_338,uStack_348);
    uVar4 = SUB81(puVar9,0);
    uStack_358 = 0;
    func_0x000107c31550(&uStack_340);
  }
  else {
    do {
      func_0x00010bce3290();
    } while (extraout_w10_05 != 0);
LAB_10bce22d0:
    uVar4 = 0;
  }
  func_0x00010bce36fc();
  if (uStack_358 != 0) {
    FUN_10bcdff38(puVar7);
    func_0x00010bce3798();
    return;
  }
  func_0x00010bce3798();
  *(undefined1 *)(puVar7 + 1) = uVar4;
LAB_10bce22e8:
  *puVar7 = 0;
  return;
}



/* Entry: 10bce1b58; end: 10bce1baf;  */

void FUN_10bce1b58(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  undefined8 *extraout_x8;
  undefined8 *puVar9;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 uVar10;
  undefined8 *extraout_x8_02;
  undefined8 *extraout_x8_03;
  undefined8 *extraout_x8_04;
  undefined8 extraout_x8_05;
  ulong extraout_x8_06;
  ulong uVar11;
  long lVar12;
  ulong extraout_x8_07;
  ulong extraout_x8_08;
  ulong extraout_x8_09;
  ulong extraout_x8_10;
  ulong extraout_x8_11;
  undefined8 extraout_x8_12;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  int extraout_w9_02;
  int extraout_w9_03;
  int extraout_w9_04;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  undefined8 *extraout_x10;
  undefined8 extraout_x11;
  ulong *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 *puVar13;
  ulong uStack_348;
  ulong uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 *puStack_328;
  undefined8 uStack_2f0;
  byte bStack_2e8;
  undefined8 uStack_2e0;
  undefined8 *puStack_2d8;
  byte bStack_2c9;
  undefined8 auStack_2c8 [3];
  undefined1 auStack_2b0 [48];
  undefined8 *puStack_280;
  byte *pbStack_278;
  undefined8 uStack_250;
  
  FUN_10bce3324();
  puVar9 = extraout_x8;
  if (extraout_w9 == 5) {
LAB_10bce1b84:
    *(undefined4 *)(unaff_x20 + 1) = *(undefined4 *)((long)puVar9 + unaff_x21 * 4);
    *unaff_x20 = 0;
    return;
  }
  if (extraout_w9 == 0xe) {
    puVar9 = (undefined8 *)*extraout_x8;
    goto LAB_10bce1b84;
  }
  FUN_10bce31fc();
  FUN_10bce32d4();
  func_0x00010bce3768();
  func_0x00010bce33b8();
  func_0x00010bce3780();
  FUN_10bce3324();
  puVar9 = extraout_x8_00;
  if (extraout_w9_00 == 6) {
LAB_10bce1bdc:
    unaff_x20[1] = puVar9[unaff_x21];
    *unaff_x20 = 0;
    return;
  }
  if (extraout_w9_00 == 0xf) {
    puVar9 = (undefined8 *)*extraout_x8_00;
    goto LAB_10bce1bdc;
  }
  FUN_10bce31fc();
  FUN_10bce32d4();
  func_0x00010bce3768();
  func_0x00010bce33b8();
  func_0x00010bce3780();
  FUN_10bce3324();
  puVar9 = extraout_x8_01;
  if (extraout_w9_01 == 3) {
LAB_10bce1c34:
    uVar10 = puVar9[unaff_x21];
    *unaff_x20 = 0;
    unaff_x20[1] = uVar10;
    return;
  }
  if (extraout_w9_01 == 0xc) {
    puVar9 = (undefined8 *)*extraout_x8_01;
    goto LAB_10bce1c34;
  }
  FUN_10bce31fc();
  FUN_10bce32d4();
  func_0x00010bce3768();
  func_0x00010bce33b8();
  func_0x00010bce3780();
  FUN_10bce3324();
  puVar9 = extraout_x8_02;
  if (extraout_w9_02 == 4) {
LAB_10bce1c88:
    uVar10 = puVar9[unaff_x21];
    *unaff_x20 = 0;
    unaff_x20[1] = uVar10;
    return;
  }
  if (extraout_w9_02 == 0xd) {
    puVar9 = (undefined8 *)*extraout_x8_02;
    goto LAB_10bce1c88;
  }
  FUN_10bce31fc();
  FUN_10bce32d4();
  func_0x00010bce3768();
  func_0x00010bce33b8();
  func_0x00010bce3780();
  FUN_10bce3324();
  puVar9 = extraout_x8_03;
  if (extraout_w9_03 == 2) {
LAB_10bce1cdc:
    *(undefined4 *)(unaff_x20 + 1) = *(undefined4 *)((long)puVar9 + unaff_x21 * 4);
    *unaff_x20 = 0;
    return;
  }
  if (extraout_w9_03 == 0xb) {
    puVar9 = (undefined8 *)*extraout_x8_03;
    goto LAB_10bce1cdc;
  }
  FUN_10bce31fc();
  FUN_10bce32d4();
  func_0x00010bce3768();
  func_0x00010bce33b8();
  func_0x00010bce3780();
  FUN_10bce3324();
  puVar9 = extraout_x8_04;
  if (extraout_w9_04 == 0) {
LAB_10bce1d30:
    *(bool *)(unaff_x20 + 1) = *(char *)((long)puVar9 + unaff_x21) == '\0';
    *unaff_x20 = 0;
    return;
  }
  if (extraout_w9_04 == 9) {
    puVar9 = (undefined8 *)*extraout_x8_04;
    goto LAB_10bce1d30;
  }
  FUN_10bce31fc();
  FUN_10bce32d4();
  func_0x00010bce3768();
  func_0x00010bce33b8();
  func_0x00010bce3780();
  func_0x00010bce3da8();
  if (param_1 == 0) {
    return;
  }
  puVar9 = param_2 + 1;
  if (*(int *)(param_2 + 6) == 1) {
    return;
  }
  if (*(int *)(param_2 + 6) == 10) {
    return;
  }
  FUN_10bce31fc();
  FUN_10bce32d4();
  func_0x00010bce3768();
  func_0x00010bce33b8();
  func_0x00010bce3780();
  func_0x00010bce3da8();
  if (puVar9 == (undefined8 *)0x0) {
    return;
  }
  puVar9 = param_2 + 1;
  if (*(int *)(param_2 + 6) == 8) {
    return;
  }
  if (*(int *)(param_2 + 6) == 0x11) {
    return;
  }
  FUN_10bce31fc();
  FUN_10bce32d4();
  func_0x00010bce3768();
  func_0x00010bce33b8();
  func_0x00010bce3780();
  func_0x00010bce3d90();
  func_0x00010bce327c();
  uStack_250 = extraout_x8_05;
  func_0x00010bce3ba4();
  FUN_10bce32b0();
  func_0x00010bce3b6c();
  bStack_2c9 = 1;
  puVar7 = puVar9;
  for (puVar13 = (undefined8 *)0x0; uVar4 = puVar13 == puVar9, !(bool)uVar4;
      puVar13 = (undefined8 *)((long)puVar13 + 1)) {
    func_0x00010bce3e88();
    puStack_2d8 = puVar7 + (long)puVar13 * 5;
    uStack_2e0 = 0;
    func_0x00010bce32e4();
    func_0x00010bce3c04();
    func_0x00010bce3c04();
    puVar6 = puStack_2d8;
    func_0x00010bce3f00();
    param_3 = puVar7 + 4;
    puVar7 = &uStack_2f0;
    FUN_10bce221c(&uStack_2f0,puVar6);
    func_0x00010bce3878();
    uVar11 = extraout_x8_06;
    if ((extraout_x8_06 & 1) != 0) {
      do {
        func_0x00010bce3290();
      } while (extraout_w10 != 0);
      uVar11 = *unaff_x19;
    }
    if (uVar11 != 0) goto LAB_10bce2184;
    func_0x00010bce3498();
    func_0x00010bce3e68();
    if ((bStack_2e8 & 1) != 0) goto LAB_10bce2174;
    pbVar8 = &bStack_2c9;
    func_0x00010bce37e0();
    func_0x00010bce360c();
    func_0x00010bce3c04();
    puVar6 = puStack_2d8;
    func_0x00010bce3f00();
    lVar12 = puVar7[1];
    iVar5 = *(int *)(lVar12 + 0x48) + -3;
    cVar2 = SBORROW4(iVar5,0xf);
    cVar3 = *(int *)(lVar12 + 0x48) + -0x12 < 0;
    uVar4 = iVar5 == 0xf;
    switch(iVar5) {
    case 0:
    case 0xd:
    case 0xf:
      func_0x00010bce374c();
      FUN_10bce1c08();
      func_0x00010bce3804();
      if ((extraout_x8_07 & 1) == 0) {
        if (extraout_x8_07 == 0) {
          func_0x00010bce3498();
          FUN_10bcddea0(&puStack_280);
          func_0x00010bce37c8();
          goto code_r0x00010bce2070;
        }
      }
      else {
        do {
          func_0x00010bce3290();
        } while (extraout_w10_00 != 0);
      }
      break;
    case 1:
    case 3:
      func_0x00010bce374c();
      FUN_10bce1c5c();
      func_0x00010bce3804();
      if ((extraout_x8_09 & 1) == 0) {
        if (extraout_x8_09 == 0) {
          func_0x00010bce3498();
          FUN_10bcddef0(&puStack_280);
          func_0x00010bce37d0();
          goto code_r0x00010bce2070;
        }
      }
      else {
        do {
          func_0x00010bce3290();
        } while (extraout_w10_02 != 0);
      }
      break;
    case 2:
    case 0xc:
    case 0xe:
      FUN_10bce1d64(puVar6,*(undefined4 *)(lVar12 + 0x50));
      pbStack_278 = (byte *)CONCAT44(pbStack_278._4_4_,*(undefined4 *)puVar6);
      puStack_280 = (undefined8 *)0x0;
      func_0x00010bce32e4();
      func_0x00010bce3c0c();
      FUN_10bcdff8c(param_2,(ulong)pbStack_278 & 0xffffffff);
      goto code_r0x00010bce2070;
    case 4:
    case 10:
      func_0x00010bce374c();
      FUN_10bce1cb0();
      func_0x00010bce3804();
      if ((extraout_x8_08 & 1) == 0) {
        if (extraout_x8_08 == 0) {
          func_0x00010bce3498();
          func_0x00010bcdfd30(&puStack_280);
          func_0x00010bcdffb4(param_2,(ulong)pbStack_278 & 0xffffffff);
          goto code_r0x00010bce2070;
        }
      }
      else {
        do {
          func_0x00010bce3290();
        } while (extraout_w10_01 != 0);
      }
      break;
    case 5:
      func_0x00010bce374c();
      FUN_10bce1d08();
      func_0x00010bce3804();
      if ((extraout_x8_10 & 1) == 0) {
        if (extraout_x8_10 == 0) {
          func_0x00010bce3498();
          func_0x00010bcdfd48(&puStack_280);
          uVar4 = (char)pbStack_278 == '\0';
          pcVar1 = "true";
          if ((bool)uVar4) {
            pcVar1 = "false";
          }
          func_0x00010bcdffdc(param_2,pcVar1);
          goto code_r0x00010bce2070;
        }
      }
      else {
        do {
          func_0x00010bce3290();
        } while (extraout_w10_03 != 0);
      }
      break;
    case 6:
      func_0x00010bce374c();
      FUN_10bce1714();
      func_0x00010bce3804();
      if ((extraout_x8_11 & 1) == 0) {
        if (extraout_x8_11 == 0) {
          func_0x00010bce3498();
          func_0x00010bcdfa04(&puStack_280);
          func_0x00010bce36d4();
          goto code_r0x00010bce2070;
        }
      }
      else {
        do {
          func_0x00010bce3290();
        } while (extraout_w10_04 != 0);
      }
      break;
    default:
      puVar6 = puVar7;
      func_0x00010bce3ed0();
      puStack_280 = puVar6;
      pbStack_278 = pbVar8;
      func_0x0001089ac660(auStack_2b0,*(undefined4 *)(puVar7[1] + 0x48));
      func_0x00010bce3be4();
      func_0x00010bce38a4();
      uVar10 = extraout_x11;
      puVar7 = extraout_x10;
      if (cVar3 == cVar2) {
        uVar10 = extraout_x8_12;
        puVar7 = auStack_2c8;
      }
      func_0x00010bce3630(puVar7,uVar10);
      func_0x00010bce3884();
      goto LAB_10bce2124;
    case 0xb:
      FUN_10bce1d64(puVar6,*(undefined4 *)(lVar12 + 0x50));
      pbStack_278 = (byte *)CONCAT44(pbStack_278._4_4_,*(undefined4 *)puVar6);
      puStack_280 = (undefined8 *)0x0;
      func_0x00010bce32e4();
      func_0x00010bce3c0c();
      FUN_10bce1940(param_2,puVar7,(ulong)pbStack_278 & 0xffffffff,0);
code_r0x00010bce2070:
      func_0x00010bce3994();
      *unaff_x19 = 0;
      goto code_r0x00010bce212c;
    }
    func_0x00010bce3994();
LAB_10bce2124:
    if (*unaff_x19 != 0) {
LAB_10bce2184:
      func_0x00010bce36e8();
      func_0x00010bce36fc();
      goto LAB_10bce21b0;
    }
code_r0x00010bce212c:
    func_0x00010bce3498();
    func_0x00010bce3d9c(param_2);
    func_0x00010bce35f0();
    param_3 = param_2;
    func_0x00010bce373c(param_2," ");
    func_0x00010bce3f00();
    puVar7 = param_3;
    func_0x00010bce3c04();
    param_3 = param_3 + 4;
    func_0x00010bce35e4();
    FUN_10bce0f24();
    if (*unaff_x19 != 0) goto LAB_10bce2184;
    func_0x00010bce3498();
LAB_10bce2174:
    func_0x00010bce36e8();
    func_0x00010bce36fc();
  }
  func_0x00010bce344c();
  if ((bStack_2c9 & 1) == 0) {
    func_0x00010bce360c();
  }
  func_0x00010bce336c();
  *unaff_x19 = 0;
LAB_10bce21b0:
  func_0x00010bce3244(uStack_250);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bce3994();
  func_0x00010bce36e8();
  func_0x00010bce36fc();
  func_0x00010bce35bc();
  puVar9 = param_3;
  func_0x00010bce37ac();
  iVar5 = (int)puVar9;
  FUN_10bcde0c0();
  func_0x00010bcdd9d8();
  if (iVar5 != 5) {
    *(undefined1 *)(puVar7 + 1) = 0;
    goto LAB_10bce22e8;
  }
  FUN_10bce41b0(&uStack_340,param_3);
  uStack_348 = uStack_340;
  if ((uStack_340 & 1) == 0) {
    if (uStack_340 != 0) goto LAB_10bce22d0;
    func_0x00010bce3798();
    FUN_10bcddffc(&uStack_340);
    FUN_10bce1db8(param_2,*(undefined4 *)(param_3[1] + 0x50));
    uStack_330 = 0;
    puStack_328 = param_2;
    func_0x00010bce3798();
    FUN_10bce1b40(&uStack_330);
    puVar9 = puStack_328;
    FUN_10bce2338(puStack_328,uStack_338);
    uVar4 = SUB81(puVar9,0);
    uStack_348 = 0;
    func_0x000107c31550(&uStack_330);
  }
  else {
    do {
      func_0x00010bce3290();
    } while (extraout_w10_05 != 0);
LAB_10bce22d0:
    uVar4 = 0;
  }
  func_0x00010bce36fc();
  if (uStack_348 != 0) {
    FUN_10bcdff38(puVar7);
    func_0x00010bce3798();
    return;
  }
  func_0x00010bce3798();
  *(undefined1 *)(puVar7 + 1) = uVar4;
LAB_10bce22e8:
  *puVar7 = 0;
  return;
}



/* Entry: 10bce1bb0; end: 10bce1c07;  */

void FUN_10bce1bb0(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  undefined8 *extraout_x8;
  undefined8 *puVar9;
  undefined8 *extraout_x8_00;
  undefined8 uVar10;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 *extraout_x8_03;
  undefined8 extraout_x8_04;
  ulong extraout_x8_05;
  ulong uVar11;
  long lVar12;
  ulong extraout_x8_06;
  ulong extraout_x8_07;
  ulong extraout_x8_08;
  ulong extraout_x8_09;
  ulong extraout_x8_10;
  undefined8 extraout_x8_11;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  int extraout_w9_02;
  int extraout_w9_03;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  undefined8 *extraout_x10;
  undefined8 extraout_x11;
  ulong *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 *puVar13;
  ulong uStack_308;
  ulong uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 *puStack_2e8;
  undefined8 uStack_2b0;
  byte bStack_2a8;
  undefined8 uStack_2a0;
  undefined8 *puStack_298;
  byte bStack_289;
  undefined8 auStack_288 [3];
  undefined1 auStack_270 [48];
  undefined8 *puStack_240;
  byte *pbStack_238;
  undefined8 uStack_210;
  
  FUN_10bce3324();
  puVar9 = extraout_x8;
  if (extraout_w9 == 6) {
LAB_10bce1bdc:
    unaff_x20[1] = puVar9[unaff_x21];
    *unaff_x20 = 0;
    return;
  }
  if (extraout_w9 == 0xf) {
    puVar9 = (undefined8 *)*extraout_x8;
    goto LAB_10bce1bdc;
  }
  FUN_10bce31fc();
  FUN_10bce32d4();
  func_0x00010bce3768();
  func_0x00010bce33b8();
  func_0x00010bce3780();
  FUN_10bce3324();
  puVar9 = extraout_x8_00;
  if (extraout_w9_00 == 3) {
LAB_10bce1c34:
    uVar10 = puVar9[unaff_x21];
    *unaff_x20 = 0;
    unaff_x20[1] = uVar10;
    return;
  }
  if (extraout_w9_00 == 0xc) {
    puVar9 = (undefined8 *)*extraout_x8_00;
    goto LAB_10bce1c34;
  }
  FUN_10bce31fc();
  FUN_10bce32d4();
  func_0x00010bce3768();
  func_0x00010bce33b8();
  func_0x00010bce3780();
  FUN_10bce3324();
  puVar9 = extraout_x8_01;
  if (extraout_w9_01 == 4) {
LAB_10bce1c88:
    uVar10 = puVar9[unaff_x21];
    *unaff_x20 = 0;
    unaff_x20[1] = uVar10;
    return;
  }
  if (extraout_w9_01 == 0xd) {
    puVar9 = (undefined8 *)*extraout_x8_01;
    goto LAB_10bce1c88;
  }
  FUN_10bce31fc();
  FUN_10bce32d4();
  func_0x00010bce3768();
  func_0x00010bce33b8();
  func_0x00010bce3780();
  FUN_10bce3324();
  puVar9 = extraout_x8_02;
  if (extraout_w9_02 == 2) {
LAB_10bce1cdc:
    *(undefined4 *)(unaff_x20 + 1) = *(undefined4 *)((long)puVar9 + unaff_x21 * 4);
    *unaff_x20 = 0;
    return;
  }
  if (extraout_w9_02 == 0xb) {
    puVar9 = (undefined8 *)*extraout_x8_02;
    goto LAB_10bce1cdc;
  }
  FUN_10bce31fc();
  FUN_10bce32d4();
  func_0x00010bce3768();
  func_0x00010bce33b8();
  func_0x00010bce3780();
  FUN_10bce3324();
  puVar9 = extraout_x8_03;
  if (extraout_w9_03 == 0) {
LAB_10bce1d30:
    *(bool *)(unaff_x20 + 1) = *(char *)((long)puVar9 + unaff_x21) == '\0';
    *unaff_x20 = 0;
    return;
  }
  if (extraout_w9_03 == 9) {
    puVar9 = (undefined8 *)*extraout_x8_03;
    goto LAB_10bce1d30;
  }
  FUN_10bce31fc();
  FUN_10bce32d4();
  func_0x00010bce3768();
  func_0x00010bce33b8();
  func_0x00010bce3780();
  func_0x00010bce3da8();
  if (param_1 == 0) {
    return;
  }
  puVar9 = param_2 + 1;
  if (*(int *)(param_2 + 6) == 1) {
    return;
  }
  if (*(int *)(param_2 + 6) == 10) {
    return;
  }
  FUN_10bce31fc();
  FUN_10bce32d4();
  func_0x00010bce3768();
  func_0x00010bce33b8();
  func_0x00010bce3780();
  func_0x00010bce3da8();
  if (puVar9 == (undefined8 *)0x0) {
    return;
  }
  puVar9 = param_2 + 1;
  if (*(int *)(param_2 + 6) == 8) {
    return;
  }
  if (*(int *)(param_2 + 6) == 0x11) {
    return;
  }
  FUN_10bce31fc();
  FUN_10bce32d4();
  func_0x00010bce3768();
  func_0x00010bce33b8();
  func_0x00010bce3780();
  func_0x00010bce3d90();
  func_0x00010bce327c();
  uStack_210 = extraout_x8_04;
  func_0x00010bce3ba4();
  FUN_10bce32b0();
  func_0x00010bce3b6c();
  bStack_289 = 1;
  puVar7 = puVar9;
  for (puVar13 = (undefined8 *)0x0; uVar4 = puVar13 == puVar9, !(bool)uVar4;
      puVar13 = (undefined8 *)((long)puVar13 + 1)) {
    func_0x00010bce3e88();
    puStack_298 = puVar7 + (long)puVar13 * 5;
    uStack_2a0 = 0;
    func_0x00010bce32e4();
    func_0x00010bce3c04();
    func_0x00010bce3c04();
    puVar6 = puStack_298;
    func_0x00010bce3f00();
    param_3 = puVar7 + 4;
    puVar7 = &uStack_2b0;
    FUN_10bce221c(&uStack_2b0,puVar6);
    func_0x00010bce3878();
    uVar11 = extraout_x8_05;
    if ((extraout_x8_05 & 1) != 0) {
      do {
        func_0x00010bce3290();
      } while (extraout_w10 != 0);
      uVar11 = *unaff_x19;
    }
    if (uVar11 != 0) goto LAB_10bce2184;
    func_0x00010bce3498();
    func_0x00010bce3e68();
    if ((bStack_2a8 & 1) != 0) goto LAB_10bce2174;
    pbVar8 = &bStack_289;
    func_0x00010bce37e0();
    func_0x00010bce360c();
    func_0x00010bce3c04();
    puVar6 = puStack_298;
    func_0x00010bce3f00();
    lVar12 = puVar7[1];
    iVar5 = *(int *)(lVar12 + 0x48) + -3;
    cVar2 = SBORROW4(iVar5,0xf);
    cVar3 = *(int *)(lVar12 + 0x48) + -0x12 < 0;
    uVar4 = iVar5 == 0xf;
    switch(iVar5) {
    case 0:
    case 0xd:
    case 0xf:
      func_0x00010bce374c();
      FUN_10bce1c08();
      func_0x00010bce3804();
      if ((extraout_x8_06 & 1) == 0) {
        if (extraout_x8_06 == 0) {
          func_0x00010bce3498();
          FUN_10bcddea0(&puStack_240);
          func_0x00010bce37c8();
          goto code_r0x00010bce2070;
        }
      }
      else {
        do {
          func_0x00010bce3290();
        } while (extraout_w10_00 != 0);
      }
      break;
    case 1:
    case 3:
      func_0x00010bce374c();
      FUN_10bce1c5c();
      func_0x00010bce3804();
      if ((extraout_x8_08 & 1) == 0) {
        if (extraout_x8_08 == 0) {
          func_0x00010bce3498();
          FUN_10bcddef0(&puStack_240);
          func_0x00010bce37d0();
          goto code_r0x00010bce2070;
        }
      }
      else {
        do {
          func_0x00010bce3290();
        } while (extraout_w10_02 != 0);
      }
      break;
    case 2:
    case 0xc:
    case 0xe:
      FUN_10bce1d64(puVar6,*(undefined4 *)(lVar12 + 0x50));
      pbStack_238 = (byte *)CONCAT44(pbStack_238._4_4_,*(undefined4 *)puVar6);
      puStack_240 = (undefined8 *)0x0;
      func_0x00010bce32e4();
      func_0x00010bce3c0c();
      FUN_10bcdff8c(param_2,(ulong)pbStack_238 & 0xffffffff);
      goto code_r0x00010bce2070;
    case 4:
    case 10:
      func_0x00010bce374c();
      FUN_10bce1cb0();
      func_0x00010bce3804();
      if ((extraout_x8_07 & 1) == 0) {
        if (extraout_x8_07 == 0) {
          func_0x00010bce3498();
          func_0x00010bcdfd30(&puStack_240);
          func_0x00010bcdffb4(param_2,(ulong)pbStack_238 & 0xffffffff);
          goto code_r0x00010bce2070;
        }
      }
      else {
        do {
          func_0x00010bce3290();
        } while (extraout_w10_01 != 0);
      }
      break;
    case 5:
      func_0x00010bce374c();
      FUN_10bce1d08();
      func_0x00010bce3804();
      if ((extraout_x8_09 & 1) == 0) {
        if (extraout_x8_09 == 0) {
          func_0x00010bce3498();
          func_0x00010bcdfd48(&puStack_240);
          uVar4 = (char)pbStack_238 == '\0';
          pcVar1 = "true";
          if ((bool)uVar4) {
            pcVar1 = "false";
          }
          func_0x00010bcdffdc(param_2,pcVar1);
          goto code_r0x00010bce2070;
        }
      }
      else {
        do {
          func_0x00010bce3290();
        } while (extraout_w10_03 != 0);
      }
      break;
    case 6:
      func_0x00010bce374c();
      FUN_10bce1714();
      func_0x00010bce3804();
      if ((extraout_x8_10 & 1) == 0) {
        if (extraout_x8_10 == 0) {
          func_0x00010bce3498();
          func_0x00010bcdfa04(&puStack_240);
          func_0x00010bce36d4();
          goto code_r0x00010bce2070;
        }
      }
      else {
        do {
          func_0x00010bce3290();
        } while (extraout_w10_04 != 0);
      }
      break;
    default:
      puVar6 = puVar7;
      func_0x00010bce3ed0();
      puStack_240 = puVar6;
      pbStack_238 = pbVar8;
      func_0x0001089ac660(auStack_270,*(undefined4 *)(puVar7[1] + 0x48));
      func_0x00010bce3be4();
      func_0x00010bce38a4();
      uVar10 = extraout_x11;
      puVar7 = extraout_x10;
      if (cVar3 == cVar2) {
        uVar10 = extraout_x8_11;
        puVar7 = auStack_288;
      }
      func_0x00010bce3630(puVar7,uVar10);
      func_0x00010bce3884();
      goto LAB_10bce2124;
    case 0xb:
      FUN_10bce1d64(puVar6,*(undefined4 *)(lVar12 + 0x50));
      pbStack_238 = (byte *)CONCAT44(pbStack_238._4_4_,*(undefined4 *)puVar6);
      puStack_240 = (undefined8 *)0x0;
      func_0x00010bce32e4();
      func_0x00010bce3c0c();
      FUN_10bce1940(param_2,puVar7,(ulong)pbStack_238 & 0xffffffff,0);
code_r0x00010bce2070:
      func_0x00010bce3994();
      *unaff_x19 = 0;
      goto code_r0x00010bce212c;
    }
    func_0x00010bce3994();
LAB_10bce2124:
    if (*unaff_x19 != 0) {
LAB_10bce2184:
      func_0x00010bce36e8();
      func_0x00010bce36fc();
      goto LAB_10bce21b0;
    }
code_r0x00010bce212c:
    func_0x00010bce3498();
    func_0x00010bce3d9c(param_2);
    func_0x00010bce35f0();
    param_3 = param_2;
    func_0x00010bce373c(param_2," ");
    func_0x00010bce3f00();
    puVar7 = param_3;
    func_0x00010bce3c04();
    param_3 = param_3 + 4;
    func_0x00010bce35e4();
    FUN_10bce0f24();
    if (*unaff_x19 != 0) goto LAB_10bce2184;
    func_0x00010bce3498();
LAB_10bce2174:
    func_0x00010bce36e8();
    func_0x00010bce36fc();
  }
  func_0x00010bce344c();
  if ((bStack_289 & 1) == 0) {
    func_0x00010bce360c();
  }
  func_0x00010bce336c();
  *unaff_x19 = 0;
LAB_10bce21b0:
  func_0x00010bce3244(uStack_210);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bce3994();
  func_0x00010bce36e8();
  func_0x00010bce36fc();
  func_0x00010bce35bc();
  puVar9 = param_3;
  func_0x00010bce37ac();
  iVar5 = (int)puVar9;
  FUN_10bcde0c0();
  func_0x00010bcdd9d8();
  if (iVar5 != 5) {
    *(undefined1 *)(puVar7 + 1) = 0;
    goto LAB_10bce22e8;
  }
  FUN_10bce41b0(&uStack_300,param_3);
  uStack_308 = uStack_300;
  if ((uStack_300 & 1) == 0) {
    if (uStack_300 != 0) goto LAB_10bce22d0;
    func_0x00010bce3798();
    FUN_10bcddffc(&uStack_300);
    FUN_10bce1db8(param_2,*(undefined4 *)(param_3[1] + 0x50));
    uStack_2f0 = 0;
    puStack_2e8 = param_2;
    func_0x00010bce3798();
    FUN_10bce1b40(&uStack_2f0);
    puVar9 = puStack_2e8;
    FUN_10bce2338(puStack_2e8,uStack_2f8);
    uVar4 = SUB81(puVar9,0);
    uStack_308 = 0;
    func_0x000107c31550(&uStack_2f0);
  }
  else {
    do {
      func_0x00010bce3290();
    } while (extraout_w10_05 != 0);
LAB_10bce22d0:
    uVar4 = 0;
  }
  func_0x00010bce36fc();
  if (uStack_308 != 0) {
    FUN_10bcdff38(puVar7);
    func_0x00010bce3798();
    return;
  }
  func_0x00010bce3798();
  *(undefined1 *)(puVar7 + 1) = uVar4;
LAB_10bce22e8:
  *puVar7 = 0;
  return;
}



/* Entry: 10bce1c08; end: 10bce1c5b;  */

void FUN_10bce1c08(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  undefined8 *extraout_x8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 extraout_x8_03;
  ulong extraout_x8_04;
  ulong uVar11;
  long lVar12;
  ulong extraout_x8_05;
  ulong extraout_x8_06;
  ulong extraout_x8_07;
  ulong extraout_x8_08;
  ulong extraout_x8_09;
  undefined8 extraout_x8_10;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  int extraout_w9_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  undefined8 *extraout_x10;
  undefined8 extraout_x11;
  ulong *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 *puVar13;
  ulong uStack_2c8;
  ulong uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 uStack_270;
  byte bStack_268;
  undefined8 uStack_260;
  undefined8 *puStack_258;
  byte bStack_249;
  undefined8 auStack_248 [3];
  undefined1 auStack_230 [48];
  undefined8 *puStack_200;
  byte *pbStack_1f8;
  undefined8 uStack_1d0;
  
  FUN_10bce3324();
  puVar9 = extraout_x8;
  if (extraout_w9 == 3) {
LAB_10bce1c34:
    uVar10 = puVar9[unaff_x21];
    *unaff_x20 = 0;
    unaff_x20[1] = uVar10;
    return;
  }
  if (extraout_w9 == 0xc) {
    puVar9 = (undefined8 *)*extraout_x8;
    goto LAB_10bce1c34;
  }
  FUN_10bce31fc();
  FUN_10bce32d4();
  func_0x00010bce3768();
  func_0x00010bce33b8();
  func_0x00010bce3780();
  FUN_10bce3324();
  puVar9 = extraout_x8_00;
  if (extraout_w9_00 == 4) {
LAB_10bce1c88:
    uVar10 = puVar9[unaff_x21];
    *unaff_x20 = 0;
    unaff_x20[1] = uVar10;
    return;
  }
  if (extraout_w9_00 == 0xd) {
    puVar9 = (undefined8 *)*extraout_x8_00;
    goto LAB_10bce1c88;
  }
  FUN_10bce31fc();
  FUN_10bce32d4();
  func_0x00010bce3768();
  func_0x00010bce33b8();
  func_0x00010bce3780();
  FUN_10bce3324();
  puVar9 = extraout_x8_01;
  if (extraout_w9_01 == 2) {
LAB_10bce1cdc:
    *(undefined4 *)(unaff_x20 + 1) = *(undefined4 *)((long)puVar9 + unaff_x21 * 4);
    *unaff_x20 = 0;
    return;
  }
  if (extraout_w9_01 == 0xb) {
    puVar9 = (undefined8 *)*extraout_x8_01;
    goto LAB_10bce1cdc;
  }
  FUN_10bce31fc();
  FUN_10bce32d4();
  func_0x00010bce3768();
  func_0x00010bce33b8();
  func_0x00010bce3780();
  FUN_10bce3324();
  puVar9 = extraout_x8_02;
  if (extraout_w9_02 == 0) {
LAB_10bce1d30:
    *(bool *)(unaff_x20 + 1) = *(char *)((long)puVar9 + unaff_x21) == '\0';
    *unaff_x20 = 0;
    return;
  }
  if (extraout_w9_02 == 9) {
    puVar9 = (undefined8 *)*extraout_x8_02;
    goto LAB_10bce1d30;
  }
  FUN_10bce31fc();
  FUN_10bce32d4();
  func_0x00010bce3768();
  func_0x00010bce33b8();
  func_0x00010bce3780();
  func_0x00010bce3da8();
  if (param_1 == 0) {
    return;
  }
  puVar9 = param_2 + 1;
  if (*(int *)(param_2 + 6) == 1) {
    return;
  }
  if (*(int *)(param_2 + 6) == 10) {
    return;
  }
  FUN_10bce31fc();
  FUN_10bce32d4();
  func_0x00010bce3768();
  func_0x00010bce33b8();
  func_0x00010bce3780();
  func_0x00010bce3da8();
  if (puVar9 == (undefined8 *)0x0) {
    return;
  }
  puVar9 = param_2 + 1;
  if (*(int *)(param_2 + 6) == 8) {
    return;
  }
  if (*(int *)(param_2 + 6) == 0x11) {
    return;
  }
  FUN_10bce31fc();
  FUN_10bce32d4();
  func_0x00010bce3768();
  func_0x00010bce33b8();
  func_0x00010bce3780();
  func_0x00010bce3d90();
  func_0x00010bce327c();
  uStack_1d0 = extraout_x8_03;
  func_0x00010bce3ba4();
  FUN_10bce32b0();
  func_0x00010bce3b6c();
  bStack_249 = 1;
  puVar7 = puVar9;
  for (puVar13 = (undefined8 *)0x0; uVar4 = puVar13 == puVar9, !(bool)uVar4;
      puVar13 = (undefined8 *)((long)puVar13 + 1)) {
    func_0x00010bce3e88();
    puStack_258 = puVar7 + (long)puVar13 * 5;
    uStack_260 = 0;
    func_0x00010bce32e4();
    func_0x00010bce3c04();
    func_0x00010bce3c04();
    puVar6 = puStack_258;
    func_0x00010bce3f00();
    param_3 = puVar7 + 4;
    puVar7 = &uStack_270;
    FUN_10bce221c(&uStack_270,puVar6);
    func_0x00010bce3878();
    uVar11 = extraout_x8_04;
    if ((extraout_x8_04 & 1) != 0) {
      do {
        func_0x00010bce3290();
      } while (extraout_w10 != 0);
      uVar11 = *unaff_x19;
    }
    if (uVar11 != 0) goto LAB_10bce2184;
    func_0x00010bce3498();
    func_0x00010bce3e68();
    if ((bStack_268 & 1) != 0) goto LAB_10bce2174;
    pbVar8 = &bStack_249;
    func_0x00010bce37e0();
    func_0x00010bce360c();
    func_0x00010bce3c04();
    puVar6 = puStack_258;
    func_0x00010bce3f00();
    lVar12 = puVar7[1];
    iVar5 = *(int *)(lVar12 + 0x48) + -3;
    cVar2 = SBORROW4(iVar5,0xf);
    cVar3 = *(int *)(lVar12 + 0x48) + -0x12 < 0;
    uVar4 = iVar5 == 0xf;
    switch(iVar5) {
    case 0:
    case 0xd:
    case 0xf:
      func_0x00010bce374c();
      FUN_10bce1c08();
      func_0x00010bce3804();
      if ((extraout_x8_05 & 1) == 0) {
        if (extraout_x8_05 == 0) {
          func_0x00010bce3498();
          FUN_10bcddea0(&puStack_200);
          func_0x00010bce37c8();
          goto code_r0x00010bce2070;
        }
      }
      else {
        do {
          func_0x00010bce3290();
        } while (extraout_w10_00 != 0);
      }
      break;
    case 1:
    case 3:
      func_0x00010bce374c();
      FUN_10bce1c5c();
      func_0x00010bce3804();
      if ((extraout_x8_07 & 1) == 0) {
        if (extraout_x8_07 == 0) {
          func_0x00010bce3498();
          FUN_10bcddef0(&puStack_200);
          func_0x00010bce37d0();
          goto code_r0x00010bce2070;
        }
      }
      else {
        do {
          func_0x00010bce3290();
        } while (extraout_w10_02 != 0);
      }
      break;
    case 2:
    case 0xc:
    case 0xe:
      FUN_10bce1d64(puVar6,*(undefined4 *)(lVar12 + 0x50));
      pbStack_1f8 = (byte *)CONCAT44(pbStack_1f8._4_4_,*(undefined4 *)puVar6);
      puStack_200 = (undefined8 *)0x0;
      func_0x00010bce32e4();
      func_0x00010bce3c0c();
      FUN_10bcdff8c(param_2,(ulong)pbStack_1f8 & 0xffffffff);
      goto code_r0x00010bce2070;
    case 4:
    case 10:
      func_0x00010bce374c();
      FUN_10bce1cb0();
      func_0x00010bce3804();
      if ((extraout_x8_06 & 1) == 0) {
        if (extraout_x8_06 == 0) {
          func_0x00010bce3498();
          func_0x00010bcdfd30(&puStack_200);
          func_0x00010bcdffb4(param_2,(ulong)pbStack_1f8 & 0xffffffff);
          goto code_r0x00010bce2070;
        }
      }
      else {
        do {
          func_0x00010bce3290();
        } while (extraout_w10_01 != 0);
      }
      break;
    case 5:
      func_0x00010bce374c();
      FUN_10bce1d08();
      func_0x00010bce3804();
      if ((extraout_x8_08 & 1) == 0) {
        if (extraout_x8_08 == 0) {
          func_0x00010bce3498();
          func_0x00010bcdfd48(&puStack_200);
          uVar4 = (char)pbStack_1f8 == '\0';
          pcVar1 = "true";
          if ((bool)uVar4) {
            pcVar1 = "false";
          }
          func_0x00010bcdffdc(param_2,pcVar1);
          goto code_r0x00010bce2070;
        }
      }
      else {
        do {
          func_0x00010bce3290();
        } while (extraout_w10_03 != 0);
      }
      break;
    case 6:
      func_0x00010bce374c();
      FUN_10bce1714();
      func_0x00010bce3804();
      if ((extraout_x8_09 & 1) == 0) {
        if (extraout_x8_09 == 0) {
          func_0x00010bce3498();
          func_0x00010bcdfa04(&puStack_200);
          func_0x00010bce36d4();
          goto code_r0x00010bce2070;
        }
      }
      else {
        do {
          func_0x00010bce3290();
        } while (extraout_w10_04 != 0);
      }
      break;
    default:
      puVar6 = puVar7;
      func_0x00010bce3ed0();
      puStack_200 = puVar6;
      pbStack_1f8 = pbVar8;
      func_0x0001089ac660(auStack_230,*(undefined4 *)(puVar7[1] + 0x48));
      func_0x00010bce3be4();
      func_0x00010bce38a4();
      uVar10 = extraout_x11;
      puVar7 = extraout_x10;
      if (cVar3 == cVar2) {
        uVar10 = extraout_x8_10;
        puVar7 = auStack_248;
      }
      func_0x00010bce3630(puVar7,uVar10);
      func_0x00010bce3884();
      goto LAB_10bce2124;
    case 0xb:
      FUN_10bce1d64(puVar6,*(undefined4 *)(lVar12 + 0x50));
      pbStack_1f8 = (byte *)CONCAT44(pbStack_1f8._4_4_,*(undefined4 *)puVar6);
      puStack_200 = (undefined8 *)0x0;
      func_0x00010bce32e4();
      func_0x00010bce3c0c();
      FUN_10bce1940(param_2,puVar7,(ulong)pbStack_1f8 & 0xffffffff,0);
code_r0x00010bce2070:
      func_0x00010bce3994();
      *unaff_x19 = 0;
      goto code_r0x00010bce212c;
    }
    func_0x00010bce3994();
LAB_10bce2124:
    if (*unaff_x19 != 0) {
LAB_10bce2184:
      func_0x00010bce36e8();
      func_0x00010bce36fc();
      goto LAB_10bce21b0;
    }
code_r0x00010bce212c:
    func_0x00010bce3498();
    func_0x00010bce3d9c(param_2);
    func_0x00010bce35f0();
    param_3 = param_2;
    func_0x00010bce373c(param_2," ");
    func_0x00010bce3f00();
    puVar7 = param_3;
    func_0x00010bce3c04();
    param_3 = param_3 + 4;
    func_0x00010bce35e4();
    FUN_10bce0f24();
    if (*unaff_x19 != 0) goto LAB_10bce2184;
    func_0x00010bce3498();
LAB_10bce2174:
    func_0x00010bce36e8();
    func_0x00010bce36fc();
  }
  func_0x00010bce344c();
  if ((bStack_249 & 1) == 0) {
    func_0x00010bce360c();
  }
  func_0x00010bce336c();
  *unaff_x19 = 0;
LAB_10bce21b0:
  func_0x00010bce3244(uStack_1d0);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bce3994();
  func_0x00010bce36e8();
  func_0x00010bce36fc();
  func_0x00010bce35bc();
  puVar9 = param_3;
  func_0x00010bce37ac();
  iVar5 = (int)puVar9;
  FUN_10bcde0c0();
  func_0x00010bcdd9d8();
  if (iVar5 != 5) {
    *(undefined1 *)(puVar7 + 1) = 0;
    goto LAB_10bce22e8;
  }
  FUN_10bce41b0(&uStack_2c0,param_3);
  uStack_2c8 = uStack_2c0;
  if ((uStack_2c0 & 1) == 0) {
    if (uStack_2c0 != 0) goto LAB_10bce22d0;
    func_0x00010bce3798();
    FUN_10bcddffc(&uStack_2c0);
    FUN_10bce1db8(param_2,*(undefined4 *)(param_3[1] + 0x50));
    uStack_2b0 = 0;
    puStack_2a8 = param_2;
    func_0x00010bce3798();
    FUN_10bce1b40(&uStack_2b0);
    puVar9 = puStack_2a8;
    FUN_10bce2338(puStack_2a8,uStack_2b8);
    uVar4 = SUB81(puVar9,0);
    uStack_2c8 = 0;
    func_0x000107c31550(&uStack_2b0);
  }
  else {
    do {
      func_0x00010bce3290();
    } while (extraout_w10_05 != 0);
LAB_10bce22d0:
    uVar4 = 0;
  }
  func_0x00010bce36fc();
  if (uStack_2c8 != 0) {
    FUN_10bcdff38(puVar7);
    func_0x00010bce3798();
    return;
  }
  func_0x00010bce3798();
  *(undefined1 *)(puVar7 + 1) = uVar4;
LAB_10bce22e8:
  *puVar7 = 0;
  return;
}



/* Entry: 10bce1c5c; end: 10bce1caf;  */

void FUN_10bce1c5c(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  undefined8 *extraout_x8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 extraout_x8_02;
  ulong extraout_x8_03;
  ulong uVar11;
  long lVar12;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  ulong extraout_x8_06;
  ulong extraout_x8_07;
  ulong extraout_x8_08;
  undefined8 extraout_x8_09;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  undefined8 *extraout_x10;
  undefined8 extraout_x11;
  ulong *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 *puVar13;
  ulong uStack_288;
  ulong uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 *puStack_268;
  undefined8 uStack_230;
  byte bStack_228;
  undefined8 uStack_220;
  undefined8 *puStack_218;
  byte bStack_209;
  undefined8 auStack_208 [3];
  undefined1 auStack_1f0 [48];
  undefined8 *puStack_1c0;
  byte *pbStack_1b8;
  undefined8 uStack_190;
  
  FUN_10bce3324();
  puVar9 = extraout_x8;
  if (extraout_w9 == 4) {
LAB_10bce1c88:
    uVar10 = puVar9[unaff_x21];
    *unaff_x20 = 0;
    unaff_x20[1] = uVar10;
    return;
  }
  if (extraout_w9 == 0xd) {
    puVar9 = (undefined8 *)*extraout_x8;
    goto LAB_10bce1c88;
  }
  FUN_10bce31fc();
  FUN_10bce32d4();
  func_0x00010bce3768();
  func_0x00010bce33b8();
  func_0x00010bce3780();
  FUN_10bce3324();
  puVar9 = extraout_x8_00;
  if (extraout_w9_00 == 2) {
LAB_10bce1cdc:
    *(undefined4 *)(unaff_x20 + 1) = *(undefined4 *)((long)puVar9 + unaff_x21 * 4);
    *unaff_x20 = 0;
    return;
  }
  if (extraout_w9_00 == 0xb) {
    puVar9 = (undefined8 *)*extraout_x8_00;
    goto LAB_10bce1cdc;
  }
  FUN_10bce31fc();
  FUN_10bce32d4();
  func_0x00010bce3768();
  func_0x00010bce33b8();
  func_0x00010bce3780();
  FUN_10bce3324();
  puVar9 = extraout_x8_01;
  if (extraout_w9_01 == 0) {
LAB_10bce1d30:
    *(bool *)(unaff_x20 + 1) = *(char *)((long)puVar9 + unaff_x21) == '\0';
    *unaff_x20 = 0;
    return;
  }
  if (extraout_w9_01 == 9) {
    puVar9 = (undefined8 *)*extraout_x8_01;
    goto LAB_10bce1d30;
  }
  FUN_10bce31fc();
  FUN_10bce32d4();
  func_0x00010bce3768();
  func_0x00010bce33b8();
  func_0x00010bce3780();
  func_0x00010bce3da8();
  if (param_1 == 0) {
    return;
  }
  puVar9 = param_2 + 1;
  if (*(int *)(param_2 + 6) == 1) {
    return;
  }
  if (*(int *)(param_2 + 6) == 10) {
    return;
  }
  FUN_10bce31fc();
  FUN_10bce32d4();
  func_0x00010bce3768();
  func_0x00010bce33b8();
  func_0x00010bce3780();
  func_0x00010bce3da8();
  if (puVar9 == (undefined8 *)0x0) {
    return;
  }
  puVar9 = param_2 + 1;
  if (*(int *)(param_2 + 6) == 8) {
    return;
  }
  if (*(int *)(param_2 + 6) == 0x11) {
    return;
  }
  FUN_10bce31fc();
  FUN_10bce32d4();
  func_0x00010bce3768();
  func_0x00010bce33b8();
  func_0x00010bce3780();
  func_0x00010bce3d90();
  func_0x00010bce327c();
  uStack_190 = extraout_x8_02;
  func_0x00010bce3ba4();
  FUN_10bce32b0();
  func_0x00010bce3b6c();
  bStack_209 = 1;
  puVar7 = puVar9;
  for (puVar13 = (undefined8 *)0x0; uVar4 = puVar13 == puVar9, !(bool)uVar4;
      puVar13 = (undefined8 *)((long)puVar13 + 1)) {
    func_0x00010bce3e88();
    puStack_218 = puVar7 + (long)puVar13 * 5;
    uStack_220 = 0;
    func_0x00010bce32e4();
    func_0x00010bce3c04();
    func_0x00010bce3c04();
    puVar6 = puStack_218;
    func_0x00010bce3f00();
    param_3 = puVar7 + 4;
    puVar7 = &uStack_230;
    FUN_10bce221c(&uStack_230,puVar6);
    func_0x00010bce3878();
    uVar11 = extraout_x8_03;
    if ((extraout_x8_03 & 1) != 0) {
      do {
        func_0x00010bce3290();
      } while (extraout_w10 != 0);
      uVar11 = *unaff_x19;
    }
    if (uVar11 != 0) goto LAB_10bce2184;
    func_0x00010bce3498();
    func_0x00010bce3e68();
    if ((bStack_228 & 1) != 0) goto LAB_10bce2174;
    pbVar8 = &bStack_209;
    func_0x00010bce37e0();
    func_0x00010bce360c();
    func_0x00010bce3c04();
    puVar6 = puStack_218;
    func_0x00010bce3f00();
    lVar12 = puVar7[1];
    iVar5 = *(int *)(lVar12 + 0x48) + -3;
    cVar2 = SBORROW4(iVar5,0xf);
    cVar3 = *(int *)(lVar12 + 0x48) + -0x12 < 0;
    uVar4 = iVar5 == 0xf;
    switch(iVar5) {
    case 0:
    case 0xd:
    case 0xf:
      func_0x00010bce374c();
      FUN_10bce1c08();
      func_0x00010bce3804();
      if ((extraout_x8_04 & 1) == 0) {
        if (extraout_x8_04 == 0) {
          func_0x00010bce3498();
          FUN_10bcddea0(&puStack_1c0);
          func_0x00010bce37c8();
          goto code_r0x00010bce2070;
        }
      }
      else {
        do {
          func_0x00010bce3290();
        } while (extraout_w10_00 != 0);
      }
      break;
    case 1:
    case 3:
      func_0x00010bce374c();
      FUN_10bce1c5c();
      func_0x00010bce3804();
      if ((extraout_x8_06 & 1) == 0) {
        if (extraout_x8_06 == 0) {
          func_0x00010bce3498();
          FUN_10bcddef0(&puStack_1c0);
          func_0x00010bce37d0();
          goto code_r0x00010bce2070;
        }
      }
      else {
        do {
          func_0x00010bce3290();
        } while (extraout_w10_02 != 0);
      }
      break;
    case 2:
    case 0xc:
    case 0xe:
      FUN_10bce1d64(puVar6,*(undefined4 *)(lVar12 + 0x50));
      pbStack_1b8 = (byte *)CONCAT44(pbStack_1b8._4_4_,*(undefined4 *)puVar6);
      puStack_1c0 = (undefined8 *)0x0;
      func_0x00010bce32e4();
      func_0x00010bce3c0c();
      FUN_10bcdff8c(param_2,(ulong)pbStack_1b8 & 0xffffffff);
      goto code_r0x00010bce2070;
    case 4:
    case 10:
      func_0x00010bce374c();
      FUN_10bce1cb0();
      func_0x00010bce3804();
      if ((extraout_x8_05 & 1) == 0) {
        if (extraout_x8_05 == 0) {
          func_0x00010bce3498();
          func_0x00010bcdfd30(&puStack_1c0);
          func_0x00010bcdffb4(param_2,(ulong)pbStack_1b8 & 0xffffffff);
          goto code_r0x00010bce2070;
        }
      }
      else {
        do {
          func_0x00010bce3290();
        } while (extraout_w10_01 != 0);
      }
      break;
    case 5:
      func_0x00010bce374c();
      FUN_10bce1d08();
      func_0x00010bce3804();
      if ((extraout_x8_07 & 1) == 0) {
        if (extraout_x8_07 == 0) {
          func_0x00010bce3498();
          func_0x00010bcdfd48(&puStack_1c0);
          uVar4 = (char)pbStack_1b8 == '\0';
          pcVar1 = "true";
          if ((bool)uVar4) {
            pcVar1 = "false";
          }
          func_0x00010bcdffdc(param_2,pcVar1);
          goto code_r0x00010bce2070;
        }
      }
      else {
        do {
          func_0x00010bce3290();
        } while (extraout_w10_03 != 0);
      }
      break;
    case 6:
      func_0x00010bce374c();
      FUN_10bce1714();
      func_0x00010bce3804();
      if ((extraout_x8_08 & 1) == 0) {
        if (extraout_x8_08 == 0) {
          func_0x00010bce3498();
          func_0x00010bcdfa04(&puStack_1c0);
          func_0x00010bce36d4();
          goto code_r0x00010bce2070;
        }
      }
      else {
        do {
          func_0x00010bce3290();
        } while (extraout_w10_04 != 0);
      }
      break;
    default:
      puVar6 = puVar7;
      func_0x00010bce3ed0();
      puStack_1c0 = puVar6;
      pbStack_1b8 = pbVar8;
      func_0x0001089ac660(auStack_1f0,*(undefined4 *)(puVar7[1] + 0x48));
      func_0x00010bce3be4();
      func_0x00010bce38a4();
      uVar10 = extraout_x11;
      puVar7 = extraout_x10;
      if (cVar3 == cVar2) {
        uVar10 = extraout_x8_09;
        puVar7 = auStack_208;
      }
      func_0x00010bce3630(puVar7,uVar10);
      func_0x00010bce3884();
      goto LAB_10bce2124;
    case 0xb:
      FUN_10bce1d64(puVar6,*(undefined4 *)(lVar12 + 0x50));
      pbStack_1b8 = (byte *)CONCAT44(pbStack_1b8._4_4_,*(undefined4 *)puVar6);
      puStack_1c0 = (undefined8 *)0x0;
      func_0x00010bce32e4();
      func_0x00010bce3c0c();
      FUN_10bce1940(param_2,puVar7,(ulong)pbStack_1b8 & 0xffffffff,0);
code_r0x00010bce2070:
      func_0x00010bce3994();
      *unaff_x19 = 0;
      goto code_r0x00010bce212c;
    }
    func_0x00010bce3994();
LAB_10bce2124:
    if (*unaff_x19 != 0) {
LAB_10bce2184:
      func_0x00010bce36e8();
      func_0x00010bce36fc();
      goto LAB_10bce21b0;
    }
code_r0x00010bce212c:
    func_0x00010bce3498();
    func_0x00010bce3d9c(param_2);
    func_0x00010bce35f0();
    param_3 = param_2;
    func_0x00010bce373c(param_2," ");
    func_0x00010bce3f00();
    puVar7 = param_3;
    func_0x00010bce3c04();
    param_3 = param_3 + 4;
    func_0x00010bce35e4();
    FUN_10bce0f24();
    if (*unaff_x19 != 0) goto LAB_10bce2184;
    func_0x00010bce3498();
LAB_10bce2174:
    func_0x00010bce36e8();
    func_0x00010bce36fc();
  }
  func_0x00010bce344c();
  if ((bStack_209 & 1) == 0) {
    func_0x00010bce360c();
  }
  func_0x00010bce336c();
  *unaff_x19 = 0;
LAB_10bce21b0:
  func_0x00010bce3244(uStack_190);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bce3994();
  func_0x00010bce36e8();
  func_0x00010bce36fc();
  func_0x00010bce35bc();
  puVar9 = param_3;
  func_0x00010bce37ac();
  iVar5 = (int)puVar9;
  FUN_10bcde0c0();
  func_0x00010bcdd9d8();
  if (iVar5 != 5) {
    *(undefined1 *)(puVar7 + 1) = 0;
    goto LAB_10bce22e8;
  }
  FUN_10bce41b0(&uStack_280,param_3);
  uStack_288 = uStack_280;
  if ((uStack_280 & 1) == 0) {
    if (uStack_280 != 0) goto LAB_10bce22d0;
    func_0x00010bce3798();
    FUN_10bcddffc(&uStack_280);
    FUN_10bce1db8(param_2,*(undefined4 *)(param_3[1] + 0x50));
    uStack_270 = 0;
    puStack_268 = param_2;
    func_0x00010bce3798();
    FUN_10bce1b40(&uStack_270);
    puVar9 = puStack_268;
    FUN_10bce2338(puStack_268,uStack_278);
    uVar4 = SUB81(puVar9,0);
    uStack_288 = 0;
    func_0x000107c31550(&uStack_270);
  }
  else {
    do {
      func_0x00010bce3290();
    } while (extraout_w10_05 != 0);
LAB_10bce22d0:
    uVar4 = 0;
  }
  func_0x00010bce36fc();
  if (uStack_288 != 0) {
    FUN_10bcdff38(puVar7);
    func_0x00010bce3798();
    return;
  }
  func_0x00010bce3798();
  *(undefined1 *)(puVar7 + 1) = uVar4;
LAB_10bce22e8:
  *puVar7 = 0;
  return;
}



/* Entry: 10bce1cb0; end: 10bce1d07;  */

void FUN_10bce1cb0(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  undefined8 *extraout_x8;
  undefined8 *puVar10;
  undefined8 *extraout_x8_00;
  undefined8 extraout_x8_01;
  ulong extraout_x8_02;
  ulong uVar11;
  long lVar12;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  ulong extraout_x8_06;
  ulong extraout_x8_07;
  undefined8 extraout_x8_08;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  undefined8 *extraout_x10;
  undefined8 extraout_x11;
  ulong *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 *puVar13;
  ulong uStack_248;
  ulong uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 *puStack_228;
  undefined8 uStack_1f0;
  byte bStack_1e8;
  undefined8 uStack_1e0;
  undefined8 *puStack_1d8;
  byte bStack_1c9;
  undefined8 auStack_1c8 [3];
  undefined1 auStack_1b0 [48];
  undefined8 *puStack_180;
  byte *pbStack_178;
  undefined8 uStack_150;
  
  FUN_10bce3324();
  puVar10 = extraout_x8;
  if (extraout_w9 == 2) {
LAB_10bce1cdc:
    *(undefined4 *)(unaff_x20 + 1) = *(undefined4 *)((long)puVar10 + unaff_x21 * 4);
    *unaff_x20 = 0;
    return;
  }
  if (extraout_w9 == 0xb) {
    puVar10 = (undefined8 *)*extraout_x8;
    goto LAB_10bce1cdc;
  }
  FUN_10bce31fc();
  FUN_10bce32d4();
  func_0x00010bce3768();
  func_0x00010bce33b8();
  func_0x00010bce3780();
  FUN_10bce3324();
  puVar10 = extraout_x8_00;
  if (extraout_w9_00 == 0) {
LAB_10bce1d30:
    *(bool *)(unaff_x20 + 1) = *(char *)((long)puVar10 + unaff_x21) == '\0';
    *unaff_x20 = 0;
    return;
  }
  if (extraout_w9_00 == 9) {
    puVar10 = (undefined8 *)*extraout_x8_00;
    goto LAB_10bce1d30;
  }
  FUN_10bce31fc();
  FUN_10bce32d4();
  func_0x00010bce3768();
  func_0x00010bce33b8();
  func_0x00010bce3780();
  func_0x00010bce3da8();
  if (param_1 == 0) {
    return;
  }
  puVar10 = param_2 + 1;
  if (*(int *)(param_2 + 6) == 1) {
    return;
  }
  if (*(int *)(param_2 + 6) == 10) {
    return;
  }
  FUN_10bce31fc();
  FUN_10bce32d4();
  func_0x00010bce3768();
  func_0x00010bce33b8();
  func_0x00010bce3780();
  func_0x00010bce3da8();
  if (puVar10 == (undefined8 *)0x0) {
    return;
  }
  puVar10 = param_2 + 1;
  if (*(int *)(param_2 + 6) == 8) {
    return;
  }
  if (*(int *)(param_2 + 6) == 0x11) {
    return;
  }
  FUN_10bce31fc();
  FUN_10bce32d4();
  func_0x00010bce3768();
  func_0x00010bce33b8();
  func_0x00010bce3780();
  func_0x00010bce3d90();
  func_0x00010bce327c();
  uStack_150 = extraout_x8_01;
  func_0x00010bce3ba4();
  FUN_10bce32b0();
  func_0x00010bce3b6c();
  bStack_1c9 = 1;
  puVar8 = puVar10;
  for (puVar13 = (undefined8 *)0x0; uVar5 = puVar13 == puVar10, !(bool)uVar5;
      puVar13 = (undefined8 *)((long)puVar13 + 1)) {
    func_0x00010bce3e88();
    puStack_1d8 = puVar8 + (long)puVar13 * 5;
    uStack_1e0 = 0;
    func_0x00010bce32e4();
    func_0x00010bce3c04();
    func_0x00010bce3c04();
    puVar7 = puStack_1d8;
    func_0x00010bce3f00();
    param_3 = puVar8 + 4;
    puVar8 = &uStack_1f0;
    FUN_10bce221c(&uStack_1f0,puVar7);
    func_0x00010bce3878();
    uVar11 = extraout_x8_02;
    if ((extraout_x8_02 & 1) != 0) {
      do {
        func_0x00010bce3290();
      } while (extraout_w10 != 0);
      uVar11 = *unaff_x19;
    }
    if (uVar11 != 0) goto LAB_10bce2184;
    func_0x00010bce3498();
    func_0x00010bce3e68();
    if ((bStack_1e8 & 1) != 0) goto LAB_10bce2174;
    pbVar9 = &bStack_1c9;
    func_0x00010bce37e0();
    func_0x00010bce360c();
    func_0x00010bce3c04();
    puVar7 = puStack_1d8;
    func_0x00010bce3f00();
    lVar12 = puVar8[1];
    iVar6 = *(int *)(lVar12 + 0x48) + -3;
    cVar3 = SBORROW4(iVar6,0xf);
    cVar4 = *(int *)(lVar12 + 0x48) + -0x12 < 0;
    uVar5 = iVar6 == 0xf;
    switch(iVar6) {
    case 0:
    case 0xd:
    case 0xf:
      func_0x00010bce374c();
      FUN_10bce1c08();
      func_0x00010bce3804();
      if ((extraout_x8_03 & 1) == 0) {
        if (extraout_x8_03 == 0) {
          func_0x00010bce3498();
          FUN_10bcddea0(&puStack_180);
          func_0x00010bce37c8();
          goto code_r0x00010bce2070;
        }
      }
      else {
        do {
          func_0x00010bce3290();
        } while (extraout_w10_00 != 0);
      }
      break;
    case 1:
    case 3:
      func_0x00010bce374c();
      FUN_10bce1c5c();
      func_0x00010bce3804();
      if ((extraout_x8_05 & 1) == 0) {
        if (extraout_x8_05 == 0) {
          func_0x00010bce3498();
          FUN_10bcddef0(&puStack_180);
          func_0x00010bce37d0();
          goto code_r0x00010bce2070;
        }
      }
      else {
        do {
          func_0x00010bce3290();
        } while (extraout_w10_02 != 0);
      }
      break;
    case 2:
    case 0xc:
    case 0xe:
      FUN_10bce1d64(puVar7,*(undefined4 *)(lVar12 + 0x50));
      pbStack_178 = (byte *)CONCAT44(pbStack_178._4_4_,*(undefined4 *)puVar7);
      puStack_180 = (undefined8 *)0x0;
      func_0x00010bce32e4();
      func_0x00010bce3c0c();
      FUN_10bcdff8c(param_2,(ulong)pbStack_178 & 0xffffffff);
      goto code_r0x00010bce2070;
    case 4:
    case 10:
      func_0x00010bce374c();
      FUN_10bce1cb0();
      func_0x00010bce3804();
      if ((extraout_x8_04 & 1) == 0) {
        if (extraout_x8_04 == 0) {
          func_0x00010bce3498();
          func_0x00010bcdfd30(&puStack_180);
          func_0x00010bcdffb4(param_2,(ulong)pbStack_178 & 0xffffffff);
          goto code_r0x00010bce2070;
        }
      }
      else {
        do {
          func_0x00010bce3290();
        } while (extraout_w10_01 != 0);
      }
      break;
    case 5:
      func_0x00010bce374c();
      FUN_10bce1d08();
      func_0x00010bce3804();
      if ((extraout_x8_06 & 1) == 0) {
        if (extraout_x8_06 == 0) {
          func_0x00010bce3498();
          func_0x00010bcdfd48(&puStack_180);
          uVar5 = (char)pbStack_178 == '\0';
          pcVar1 = "true";
          if ((bool)uVar5) {
            pcVar1 = "false";
          }
          func_0x00010bcdffdc(param_2,pcVar1);
          goto code_r0x00010bce2070;
        }
      }
      else {
        do {
          func_0x00010bce3290();
        } while (extraout_w10_03 != 0);
      }
      break;
    case 6:
      func_0x00010bce374c();
      FUN_10bce1714();
      func_0x00010bce3804();
      if ((extraout_x8_07 & 1) == 0) {
        if (extraout_x8_07 == 0) {
          func_0x00010bce3498();
          func_0x00010bcdfa04(&puStack_180);
          func_0x00010bce36d4();
          goto code_r0x00010bce2070;
        }
      }
      else {
        do {
          func_0x00010bce3290();
        } while (extraout_w10_04 != 0);
      }
      break;
    default:
      puVar7 = puVar8;
      func_0x00010bce3ed0();
      puStack_180 = puVar7;
      pbStack_178 = pbVar9;
      func_0x0001089ac660(auStack_1b0,*(undefined4 *)(puVar8[1] + 0x48));
      func_0x00010bce3be4();
      func_0x00010bce38a4();
      uVar2 = extraout_x11;
      puVar8 = extraout_x10;
      if (cVar4 == cVar3) {
        uVar2 = extraout_x8_08;
        puVar8 = auStack_1c8;
      }
      func_0x00010bce3630(puVar8,uVar2);
      func_0x00010bce3884();
      goto LAB_10bce2124;
    case 0xb:
      FUN_10bce1d64(puVar7,*(undefined4 *)(lVar12 + 0x50));
      pbStack_178 = (byte *)CONCAT44(pbStack_178._4_4_,*(undefined4 *)puVar7);
      puStack_180 = (undefined8 *)0x0;
      func_0x00010bce32e4();
      func_0x00010bce3c0c();
      FUN_10bce1940(param_2,puVar8,(ulong)pbStack_178 & 0xffffffff,0);
code_r0x00010bce2070:
      func_0x00010bce3994();
      *unaff_x19 = 0;
      goto code_r0x00010bce212c;
    }
    func_0x00010bce3994();
LAB_10bce2124:
    if (*unaff_x19 != 0) {
LAB_10bce2184:
      func_0x00010bce36e8();
      func_0x00010bce36fc();
      goto LAB_10bce21b0;
    }
code_r0x00010bce212c:
    func_0x00010bce3498();
    func_0x00010bce3d9c(param_2);
    func_0x00010bce35f0();
    param_3 = param_2;
    func_0x00010bce373c(param_2," ");
    func_0x00010bce3f00();
    puVar8 = param_3;
    func_0x00010bce3c04();
    param_3 = param_3 + 4;
    func_0x00010bce35e4();
    FUN_10bce0f24();
    if (*unaff_x19 != 0) goto LAB_10bce2184;
    func_0x00010bce3498();
LAB_10bce2174:
    func_0x00010bce36e8();
    func_0x00010bce36fc();
  }
  func_0x00010bce344c();
  if ((bStack_1c9 & 1) == 0) {
    func_0x00010bce360c();
  }
  func_0x00010bce336c();
  *unaff_x19 = 0;
LAB_10bce21b0:
  func_0x00010bce3244(uStack_150);
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bce3994();
  func_0x00010bce36e8();
  func_0x00010bce36fc();
  func_0x00010bce35bc();
  puVar10 = param_3;
  func_0x00010bce37ac();
  iVar6 = (int)puVar10;
  FUN_10bcde0c0();
  func_0x00010bcdd9d8();
  if (iVar6 != 5) {
    *(undefined1 *)(puVar8 + 1) = 0;
    goto LAB_10bce22e8;
  }
  FUN_10bce41b0(&uStack_240,param_3);
  uStack_248 = uStack_240;
  if ((uStack_240 & 1) == 0) {
    if (uStack_240 != 0) goto LAB_10bce22d0;
    func_0x00010bce3798();
    FUN_10bcddffc(&uStack_240);
    FUN_10bce1db8(param_2,*(undefined4 *)(param_3[1] + 0x50));
    uStack_230 = 0;
    puStack_228 = param_2;
    func_0x00010bce3798();
    FUN_10bce1b40(&uStack_230);
    puVar10 = puStack_228;
    FUN_10bce2338(puStack_228,uStack_238);
    uVar5 = SUB81(puVar10,0);
    uStack_248 = 0;
    func_0x000107c31550(&uStack_230);
  }
  else {
    do {
      func_0x00010bce3290();
    } while (extraout_w10_05 != 0);
LAB_10bce22d0:
    uVar5 = 0;
  }
  func_0x00010bce36fc();
  if (uStack_248 != 0) {
    FUN_10bcdff38(puVar8);
    func_0x00010bce3798();
    return;
  }
  func_0x00010bce3798();
  *(undefined1 *)(puVar8 + 1) = uVar5;
LAB_10bce22e8:
  *puVar8 = 0;
  return;
}



/* Entry: 10bce1d08; end: 10bce1d63;  */

void FUN_10bce1d08(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  undefined8 *extraout_x8;
  undefined8 *puVar10;
  undefined8 extraout_x8_00;
  ulong extraout_x8_01;
  ulong uVar11;
  long lVar12;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  ulong extraout_x8_06;
  undefined8 extraout_x8_07;
  int extraout_w9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  undefined8 *extraout_x10;
  undefined8 extraout_x11;
  ulong *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 *puVar13;
  ulong uStack_208;
  ulong uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 uStack_1b0;
  byte bStack_1a8;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  byte bStack_189;
  undefined8 auStack_188 [3];
  undefined1 auStack_170 [48];
  undefined8 *puStack_140;
  byte *pbStack_138;
  undefined8 uStack_110;
  
  FUN_10bce3324();
  puVar10 = extraout_x8;
  if (extraout_w9 == 0) {
LAB_10bce1d30:
    *(bool *)(unaff_x20 + 1) = *(char *)((long)puVar10 + unaff_x21) == '\0';
    *unaff_x20 = 0;
    return;
  }
  if (extraout_w9 == 9) {
    puVar10 = (undefined8 *)*extraout_x8;
    goto LAB_10bce1d30;
  }
  FUN_10bce31fc();
  FUN_10bce32d4();
  func_0x00010bce3768();
  func_0x00010bce33b8();
  func_0x00010bce3780();
  func_0x00010bce3da8();
  if (param_1 == 0) {
    return;
  }
  puVar10 = param_2 + 1;
  if (*(int *)(param_2 + 6) == 1) {
    return;
  }
  if (*(int *)(param_2 + 6) == 10) {
    return;
  }
  FUN_10bce31fc();
  FUN_10bce32d4();
  func_0x00010bce3768();
  func_0x00010bce33b8();
  func_0x00010bce3780();
  func_0x00010bce3da8();
  if (puVar10 == (undefined8 *)0x0) {
    return;
  }
  puVar10 = param_2 + 1;
  if (*(int *)(param_2 + 6) == 8) {
    return;
  }
  if (*(int *)(param_2 + 6) == 0x11) {
    return;
  }
  FUN_10bce31fc();
  FUN_10bce32d4();
  func_0x00010bce3768();
  func_0x00010bce33b8();
  func_0x00010bce3780();
  func_0x00010bce3d90();
  func_0x00010bce327c();
  uStack_110 = extraout_x8_00;
  func_0x00010bce3ba4();
  FUN_10bce32b0();
  func_0x00010bce3b6c();
  bStack_189 = 1;
  puVar8 = puVar10;
  for (puVar13 = (undefined8 *)0x0; uVar5 = puVar13 == puVar10, !(bool)uVar5;
      puVar13 = (undefined8 *)((long)puVar13 + 1)) {
    func_0x00010bce3e88();
    puStack_198 = puVar8 + (long)puVar13 * 5;
    uStack_1a0 = 0;
    func_0x00010bce32e4();
    func_0x00010bce3c04();
    func_0x00010bce3c04();
    puVar7 = puStack_198;
    func_0x00010bce3f00();
    param_3 = puVar8 + 4;
    puVar8 = &uStack_1b0;
    FUN_10bce221c(&uStack_1b0,puVar7);
    func_0x00010bce3878();
    uVar11 = extraout_x8_01;
    if ((extraout_x8_01 & 1) != 0) {
      do {
        func_0x00010bce3290();
      } while (extraout_w10 != 0);
      uVar11 = *unaff_x19;
    }
    if (uVar11 != 0) goto LAB_10bce2184;
    func_0x00010bce3498();
    func_0x00010bce3e68();
    if ((bStack_1a8 & 1) != 0) goto LAB_10bce2174;
    pbVar9 = &bStack_189;
    func_0x00010bce37e0();
    func_0x00010bce360c();
    func_0x00010bce3c04();
    puVar7 = puStack_198;
    func_0x00010bce3f00();
    lVar12 = puVar8[1];
    iVar6 = *(int *)(lVar12 + 0x48) + -3;
    cVar3 = SBORROW4(iVar6,0xf);
    cVar4 = *(int *)(lVar12 + 0x48) + -0x12 < 0;
    uVar5 = iVar6 == 0xf;
    switch(iVar6) {
    case 0:
    case 0xd:
    case 0xf:
      func_0x00010bce374c();
      FUN_10bce1c08();
      func_0x00010bce3804();
      if ((extraout_x8_02 & 1) == 0) {
        if (extraout_x8_02 == 0) {
          func_0x00010bce3498();
          FUN_10bcddea0(&puStack_140);
          func_0x00010bce37c8();
          goto code_r0x00010bce2070;
        }
      }
      else {
        do {
          func_0x00010bce3290();
        } while (extraout_w10_00 != 0);
      }
      break;
    case 1:
    case 3:
      func_0x00010bce374c();
      FUN_10bce1c5c();
      func_0x00010bce3804();
      if ((extraout_x8_04 & 1) == 0) {
        if (extraout_x8_04 == 0) {
          func_0x00010bce3498();
          FUN_10bcddef0(&puStack_140);
          func_0x00010bce37d0();
          goto code_r0x00010bce2070;
        }
      }
      else {
        do {
          func_0x00010bce3290();
        } while (extraout_w10_02 != 0);
      }
      break;
    case 2:
    case 0xc:
    case 0xe:
      FUN_10bce1d64(puVar7,*(undefined4 *)(lVar12 + 0x50));
      pbStack_138 = (byte *)CONCAT44(pbStack_138._4_4_,*(undefined4 *)puVar7);
      puStack_140 = (undefined8 *)0x0;
      func_0x00010bce32e4();
      func_0x00010bce3c0c();
      FUN_10bcdff8c(param_2,(ulong)pbStack_138 & 0xffffffff);
      goto code_r0x00010bce2070;
    case 4:
    case 10:
      func_0x00010bce374c();
      FUN_10bce1cb0();
      func_0x00010bce3804();
      if ((extraout_x8_03 & 1) == 0) {
        if (extraout_x8_03 == 0) {
          func_0x00010bce3498();
          func_0x00010bcdfd30(&puStack_140);
          func_0x00010bcdffb4(param_2,(ulong)pbStack_138 & 0xffffffff);
          goto code_r0x00010bce2070;
        }
      }
      else {
        do {
          func_0x00010bce3290();
        } while (extraout_w10_01 != 0);
      }
      break;
    case 5:
      func_0x00010bce374c();
      FUN_10bce1d08();
      func_0x00010bce3804();
      if ((extraout_x8_05 & 1) == 0) {
        if (extraout_x8_05 == 0) {
          func_0x00010bce3498();
          func_0x00010bcdfd48(&puStack_140);
          uVar5 = (char)pbStack_138 == '\0';
          pcVar1 = "true";
          if ((bool)uVar5) {
            pcVar1 = "false";
          }
          func_0x00010bcdffdc(param_2,pcVar1);
          goto code_r0x00010bce2070;
        }
      }
      else {
        do {
          func_0x00010bce3290();
        } while (extraout_w10_03 != 0);
      }
      break;
    case 6:
      func_0x00010bce374c();
      FUN_10bce1714();
      func_0x00010bce3804();
      if ((extraout_x8_06 & 1) == 0) {
        if (extraout_x8_06 == 0) {
          func_0x00010bce3498();
          func_0x00010bcdfa04(&puStack_140);
          func_0x00010bce36d4();
          goto code_r0x00010bce2070;
        }
      }
      else {
        do {
          func_0x00010bce3290();
        } while (extraout_w10_04 != 0);
      }
      break;
    default:
      puVar7 = puVar8;
      func_0x00010bce3ed0();
      puStack_140 = puVar7;
      pbStack_138 = pbVar9;
      func_0x0001089ac660(auStack_170,*(undefined4 *)(puVar8[1] + 0x48));
      func_0x00010bce3be4();
      func_0x00010bce38a4();
      uVar2 = extraout_x11;
      puVar8 = extraout_x10;
      if (cVar4 == cVar3) {
        uVar2 = extraout_x8_07;
        puVar8 = auStack_188;
      }
      func_0x00010bce3630(puVar8,uVar2);
      func_0x00010bce3884();
      goto LAB_10bce2124;
    case 0xb:
      FUN_10bce1d64(puVar7,*(undefined4 *)(lVar12 + 0x50));
      pbStack_138 = (byte *)CONCAT44(pbStack_138._4_4_,*(undefined4 *)puVar7);
      puStack_140 = (undefined8 *)0x0;
      func_0x00010bce32e4();
      func_0x00010bce3c0c();
      FUN_10bce1940(param_2,puVar8,(ulong)pbStack_138 & 0xffffffff,0);
code_r0x00010bce2070:
      func_0x00010bce3994();
      *unaff_x19 = 0;
      goto code_r0x00010bce212c;
    }
    func_0x00010bce3994();
LAB_10bce2124:
    if (*unaff_x19 != 0) {
LAB_10bce2184:
      func_0x00010bce36e8();
      func_0x00010bce36fc();
      goto LAB_10bce21b0;
    }
code_r0x00010bce212c:
    func_0x00010bce3498();
    func_0x00010bce3d9c(param_2);
    func_0x00010bce35f0();
    param_3 = param_2;
    func_0x00010bce373c(param_2," ");
    func_0x00010bce3f00();
    puVar8 = param_3;
    func_0x00010bce3c04();
    param_3 = param_3 + 4;
    func_0x00010bce35e4();
    FUN_10bce0f24();
    if (*unaff_x19 != 0) goto LAB_10bce2184;
    func_0x00010bce3498();
LAB_10bce2174:
    func_0x00010bce36e8();
    func_0x00010bce36fc();
  }
  func_0x00010bce344c();
  if ((bStack_189 & 1) == 0) {
    func_0x00010bce360c();
  }
  func_0x00010bce336c();
  *unaff_x19 = 0;
LAB_10bce21b0:
  func_0x00010bce3244(uStack_110);
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bce3994();
  func_0x00010bce36e8();
  func_0x00010bce36fc();
  func_0x00010bce35bc();
  puVar10 = param_3;
  func_0x00010bce37ac();
  iVar6 = (int)puVar10;
  FUN_10bcde0c0();
  func_0x00010bcdd9d8();
  if (iVar6 != 5) {
    *(undefined1 *)(puVar8 + 1) = 0;
    goto LAB_10bce22e8;
  }
  FUN_10bce41b0(&uStack_200,param_3);
  uStack_208 = uStack_200;
  if ((uStack_200 & 1) == 0) {
    if (uStack_200 != 0) goto LAB_10bce22d0;
    func_0x00010bce3798();
    FUN_10bcddffc(&uStack_200);
    FUN_10bce1db8(param_2,*(undefined4 *)(param_3[1] + 0x50));
    uStack_1f0 = 0;
    puStack_1e8 = param_2;
    func_0x00010bce3798();
    FUN_10bce1b40(&uStack_1f0);
    puVar10 = puStack_1e8;
    FUN_10bce2338(puStack_1e8,uStack_1f8);
    uVar5 = SUB81(puVar10,0);
    uStack_208 = 0;
    func_0x000107c31550(&uStack_1f0);
  }
  else {
    do {
      func_0x00010bce3290();
    } while (extraout_w10_05 != 0);
LAB_10bce22d0:
    uVar5 = 0;
  }
  func_0x00010bce36fc();
  if (uStack_208 != 0) {
    FUN_10bcdff38(puVar8);
    func_0x00010bce3798();
    return;
  }
  func_0x00010bce3798();
  *(undefined1 *)(puVar8 + 1) = uVar5;
LAB_10bce22e8:
  *puVar8 = 0;
  return;
}



/* Entry: 10bce1d64; end: 10bce1db7;  */

void FUN_10bce1d64(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  ulong uVar11;
  long lVar12;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  undefined8 extraout_x8_06;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  undefined8 *extraout_x10;
  undefined8 extraout_x11;
  ulong *unaff_x19;
  undefined8 *puVar13;
  ulong uStack_1c8;
  ulong uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_170;
  byte bStack_168;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  byte bStack_149;
  undefined8 auStack_148 [3];
  undefined1 auStack_130 [48];
  undefined8 *puStack_100;
  byte *pbStack_f8;
  undefined8 uStack_d0;
  
  func_0x00010bce3da8();
  if (param_1 == 0) {
    return;
  }
  puVar7 = param_2 + 1;
  if (*(int *)(param_2 + 6) == 1) {
    return;
  }
  if (*(int *)(param_2 + 6) == 10) {
    return;
  }
  FUN_10bce31fc();
  FUN_10bce32d4();
  func_0x00010bce3768();
  func_0x00010bce33b8();
  func_0x00010bce3780();
  func_0x00010bce3da8();
  if (puVar7 == (undefined8 *)0x0) {
    return;
  }
  puVar7 = param_2 + 1;
  if (*(int *)(param_2 + 6) == 8) {
    return;
  }
  if (*(int *)(param_2 + 6) == 0x11) {
    return;
  }
  FUN_10bce31fc();
  FUN_10bce32d4();
  func_0x00010bce3768();
  func_0x00010bce33b8();
  func_0x00010bce3780();
  func_0x00010bce3d90();
  func_0x00010bce327c();
  uStack_d0 = extraout_x8;
  func_0x00010bce3ba4();
  FUN_10bce32b0();
  func_0x00010bce3b6c();
  bStack_149 = 1;
  puVar9 = puVar7;
  for (puVar13 = (undefined8 *)0x0; uVar5 = puVar13 == puVar7, !(bool)uVar5;
      puVar13 = (undefined8 *)((long)puVar13 + 1)) {
    func_0x00010bce3e88();
    puStack_158 = puVar9 + (long)puVar13 * 5;
    uStack_160 = 0;
    func_0x00010bce32e4();
    func_0x00010bce3c04();
    func_0x00010bce3c04();
    puVar8 = puStack_158;
    func_0x00010bce3f00();
    param_3 = puVar9 + 4;
    puVar9 = &uStack_170;
    FUN_10bce221c(&uStack_170,puVar8);
    func_0x00010bce3878();
    uVar11 = extraout_x8_00;
    if ((extraout_x8_00 & 1) != 0) {
      do {
        func_0x00010bce3290();
      } while (extraout_w10 != 0);
      uVar11 = *unaff_x19;
    }
    if (uVar11 != 0) goto LAB_10bce2184;
    func_0x00010bce3498();
    func_0x00010bce3e68();
    if ((bStack_168 & 1) != 0) goto LAB_10bce2174;
    pbVar10 = &bStack_149;
    func_0x00010bce37e0();
    func_0x00010bce360c();
    func_0x00010bce3c04();
    puVar8 = puStack_158;
    func_0x00010bce3f00();
    lVar12 = puVar9[1];
    iVar6 = *(int *)(lVar12 + 0x48) + -3;
    cVar3 = SBORROW4(iVar6,0xf);
    cVar4 = *(int *)(lVar12 + 0x48) + -0x12 < 0;
    uVar5 = iVar6 == 0xf;
    switch(iVar6) {
    case 0:
    case 0xd:
    case 0xf:
      func_0x00010bce374c();
      FUN_10bce1c08();
      func_0x00010bce3804();
      if ((extraout_x8_01 & 1) == 0) {
        if (extraout_x8_01 == 0) {
          func_0x00010bce3498();
          FUN_10bcddea0(&puStack_100);
          func_0x00010bce37c8();
          goto code_r0x00010bce2070;
        }
      }
      else {
        do {
          func_0x00010bce3290();
        } while (extraout_w10_00 != 0);
      }
      break;
    case 1:
    case 3:
      func_0x00010bce374c();
      FUN_10bce1c5c();
      func_0x00010bce3804();
      if ((extraout_x8_03 & 1) == 0) {
        if (extraout_x8_03 == 0) {
          func_0x00010bce3498();
          FUN_10bcddef0(&puStack_100);
          func_0x00010bce37d0();
          goto code_r0x00010bce2070;
        }
      }
      else {
        do {
          func_0x00010bce3290();
        } while (extraout_w10_02 != 0);
      }
      break;
    case 2:
    case 0xc:
    case 0xe:
      FUN_10bce1d64(puVar8,*(undefined4 *)(lVar12 + 0x50));
      pbStack_f8 = (byte *)CONCAT44(pbStack_f8._4_4_,*(undefined4 *)puVar8);
      puStack_100 = (undefined8 *)0x0;
      func_0x00010bce32e4();
      func_0x00010bce3c0c();
      FUN_10bcdff8c(param_2,(ulong)pbStack_f8 & 0xffffffff);
      goto code_r0x00010bce2070;
    case 4:
    case 10:
      func_0x00010bce374c();
      FUN_10bce1cb0();
      func_0x00010bce3804();
      if ((extraout_x8_02 & 1) == 0) {
        if (extraout_x8_02 == 0) {
          func_0x00010bce3498();
          func_0x00010bcdfd30(&puStack_100);
          func_0x00010bcdffb4(param_2,(ulong)pbStack_f8 & 0xffffffff);
          goto code_r0x00010bce2070;
        }
      }
      else {
        do {
          func_0x00010bce3290();
        } while (extraout_w10_01 != 0);
      }
      break;
    case 5:
      func_0x00010bce374c();
      FUN_10bce1d08();
      func_0x00010bce3804();
      if ((extraout_x8_04 & 1) == 0) {
        if (extraout_x8_04 == 0) {
          func_0x00010bce3498();
          func_0x00010bcdfd48(&puStack_100);
          uVar5 = (char)pbStack_f8 == '\0';
          pcVar1 = "true";
          if ((bool)uVar5) {
            pcVar1 = "false";
          }
          func_0x00010bcdffdc(param_2,pcVar1);
          goto code_r0x00010bce2070;
        }
      }
      else {
        do {
          func_0x00010bce3290();
        } while (extraout_w10_03 != 0);
      }
      break;
    case 6:
      func_0x00010bce374c();
      FUN_10bce1714();
      func_0x00010bce3804();
      if ((extraout_x8_05 & 1) == 0) {
        if (extraout_x8_05 == 0) {
          func_0x00010bce3498();
          func_0x00010bcdfa04(&puStack_100);
          func_0x00010bce36d4();
          goto code_r0x00010bce2070;
        }
      }
      else {
        do {
          func_0x00010bce3290();
        } while (extraout_w10_04 != 0);
      }
      break;
    default:
      puVar8 = puVar9;
      func_0x00010bce3ed0();
      puStack_100 = puVar8;
      pbStack_f8 = pbVar10;
      func_0x0001089ac660(auStack_130,*(undefined4 *)(puVar9[1] + 0x48));
      func_0x00010bce3be4();
      func_0x00010bce38a4();
      uVar2 = extraout_x11;
      puVar9 = extraout_x10;
      if (cVar4 == cVar3) {
        uVar2 = extraout_x8_06;
        puVar9 = auStack_148;
      }
      func_0x00010bce3630(puVar9,uVar2);
      func_0x00010bce3884();
      goto LAB_10bce2124;
    case 0xb:
      FUN_10bce1d64(puVar8,*(undefined4 *)(lVar12 + 0x50));
      pbStack_f8 = (byte *)CONCAT44(pbStack_f8._4_4_,*(undefined4 *)puVar8);
      puStack_100 = (undefined8 *)0x0;
      func_0x00010bce32e4();
      func_0x00010bce3c0c();
      FUN_10bce1940(param_2,puVar9,(ulong)pbStack_f8 & 0xffffffff,0);
code_r0x00010bce2070:
      func_0x00010bce3994();
      *unaff_x19 = 0;
      goto code_r0x00010bce212c;
    }
    func_0x00010bce3994();
LAB_10bce2124:
    if (*unaff_x19 != 0) {
LAB_10bce2184:
      func_0x00010bce36e8();
      func_0x00010bce36fc();
      goto LAB_10bce21b0;
    }
code_r0x00010bce212c:
    func_0x00010bce3498();
    func_0x00010bce3d9c(param_2);
    func_0x00010bce35f0();
    param_3 = param_2;
    func_0x00010bce373c(param_2," ");
    func_0x00010bce3f00();
    puVar9 = param_3;
    func_0x00010bce3c04();
    param_3 = param_3 + 4;
    func_0x00010bce35e4();
    FUN_10bce0f24();
    if (*unaff_x19 != 0) goto LAB_10bce2184;
    func_0x00010bce3498();
LAB_10bce2174:
    func_0x00010bce36e8();
    func_0x00010bce36fc();
  }
  func_0x00010bce344c();
  if ((bStack_149 & 1) == 0) {
    func_0x00010bce360c();
  }
  func_0x00010bce336c();
  *unaff_x19 = 0;
LAB_10bce21b0:
  func_0x00010bce3244(uStack_d0);
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bce3994();
  func_0x00010bce36e8();
  func_0x00010bce36fc();
  func_0x00010bce35bc();
  puVar7 = param_3;
  func_0x00010bce37ac();
  iVar6 = (int)puVar7;
  FUN_10bcde0c0();
  func_0x00010bcdd9d8();
  if (iVar6 != 5) {
    *(undefined1 *)(puVar9 + 1) = 0;
    goto LAB_10bce22e8;
  }
  FUN_10bce41b0(&uStack_1c0,param_3);
  uStack_1c8 = uStack_1c0;
  if ((uStack_1c0 & 1) == 0) {
    if (uStack_1c0 != 0) goto LAB_10bce22d0;
    func_0x00010bce3798();
    FUN_10bcddffc(&uStack_1c0);
    FUN_10bce1db8(param_2,*(undefined4 *)(param_3[1] + 0x50));
    uStack_1b0 = 0;
    puStack_1a8 = param_2;
    func_0x00010bce3798();
    FUN_10bce1b40(&uStack_1b0);
    puVar7 = puStack_1a8;
    FUN_10bce2338(puStack_1a8,uStack_1b8);
    uVar5 = SUB81(puVar7,0);
    uStack_1c8 = 0;
    func_0x000107c31550(&uStack_1b0);
  }
  else {
    do {
      func_0x00010bce3290();
    } while (extraout_w10_05 != 0);
LAB_10bce22d0:
    uVar5 = 0;
  }
  func_0x00010bce36fc();
  if (uStack_1c8 != 0) {
    FUN_10bcdff38(puVar9);
    func_0x00010bce3798();
    return;
  }
  func_0x00010bce3798();
  *(undefined1 *)(puVar9 + 1) = uVar5;
LAB_10bce22e8:
  *puVar9 = 0;
  return;
}



/* Entry: 10bce1db8; end: 10bce1e0b;  */

void FUN_10bce1db8(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  ulong uVar11;
  long lVar12;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  undefined8 extraout_x8_06;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  undefined8 *extraout_x10;
  undefined8 extraout_x11;
  ulong *unaff_x19;
  undefined8 *puVar13;
  ulong uStack_198;
  ulong uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_140;
  byte bStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  byte bStack_119;
  undefined8 auStack_118 [3];
  undefined1 auStack_100 [48];
  undefined8 *puStack_d0;
  byte *pbStack_c8;
  undefined8 uStack_a0;
  
  func_0x00010bce3da8();
  if (param_1 == 0) {
    return;
  }
  puVar7 = param_2 + 1;
  if (*(int *)(param_2 + 6) == 8) {
    return;
  }
  if (*(int *)(param_2 + 6) == 0x11) {
    return;
  }
  FUN_10bce31fc();
  FUN_10bce32d4();
  func_0x00010bce3768();
  func_0x00010bce33b8();
  func_0x00010bce3780();
  func_0x00010bce3d90();
  func_0x00010bce327c();
  uStack_a0 = extraout_x8;
  func_0x00010bce3ba4();
  FUN_10bce32b0();
  func_0x00010bce3b6c();
  bStack_119 = 1;
  puVar9 = puVar7;
  for (puVar13 = (undefined8 *)0x0; uVar5 = puVar13 == puVar7, !(bool)uVar5;
      puVar13 = (undefined8 *)((long)puVar13 + 1)) {
    func_0x00010bce3e88();
    puStack_128 = puVar9 + (long)puVar13 * 5;
    uStack_130 = 0;
    func_0x00010bce32e4();
    func_0x00010bce3c04();
    func_0x00010bce3c04();
    puVar8 = puStack_128;
    func_0x00010bce3f00();
    param_3 = puVar9 + 4;
    puVar9 = &uStack_140;
    FUN_10bce221c(&uStack_140,puVar8);
    func_0x00010bce3878();
    uVar11 = extraout_x8_00;
    if ((extraout_x8_00 & 1) != 0) {
      do {
        func_0x00010bce3290();
      } while (extraout_w10 != 0);
      uVar11 = *unaff_x19;
    }
    if (uVar11 != 0) goto LAB_10bce2184;
    func_0x00010bce3498();
    func_0x00010bce3e68();
    if ((bStack_138 & 1) != 0) goto LAB_10bce2174;
    pbVar10 = &bStack_119;
    func_0x00010bce37e0();
    func_0x00010bce360c();
    func_0x00010bce3c04();
    puVar8 = puStack_128;
    func_0x00010bce3f00();
    lVar12 = puVar9[1];
    iVar6 = *(int *)(lVar12 + 0x48) + -3;
    cVar3 = SBORROW4(iVar6,0xf);
    cVar4 = *(int *)(lVar12 + 0x48) + -0x12 < 0;
    uVar5 = iVar6 == 0xf;
    switch(iVar6) {
    case 0:
    case 0xd:
    case 0xf:
      func_0x00010bce374c();
      FUN_10bce1c08();
      func_0x00010bce3804();
      if ((extraout_x8_01 & 1) == 0) {
        if (extraout_x8_01 == 0) {
          func_0x00010bce3498();
          FUN_10bcddea0(&puStack_d0);
          func_0x00010bce37c8();
          goto code_r0x00010bce2070;
        }
      }
      else {
        do {
          func_0x00010bce3290();
        } while (extraout_w10_00 != 0);
      }
      break;
    case 1:
    case 3:
      func_0x00010bce374c();
      FUN_10bce1c5c();
      func_0x00010bce3804();
      if ((extraout_x8_03 & 1) == 0) {
        if (extraout_x8_03 == 0) {
          func_0x00010bce3498();
          FUN_10bcddef0(&puStack_d0);
          func_0x00010bce37d0();
          goto code_r0x00010bce2070;
        }
      }
      else {
        do {
          func_0x00010bce3290();
        } while (extraout_w10_02 != 0);
      }
      break;
    case 2:
    case 0xc:
    case 0xe:
      FUN_10bce1d64(puVar8,*(undefined4 *)(lVar12 + 0x50));
      pbStack_c8 = (byte *)CONCAT44(pbStack_c8._4_4_,*(undefined4 *)puVar8);
      puStack_d0 = (undefined8 *)0x0;
      func_0x00010bce32e4();
      func_0x00010bce3c0c();
      FUN_10bcdff8c(param_2,(ulong)pbStack_c8 & 0xffffffff);
      goto code_r0x00010bce2070;
    case 4:
    case 10:
      func_0x00010bce374c();
      FUN_10bce1cb0();
      func_0x00010bce3804();
      if ((extraout_x8_02 & 1) == 0) {
        if (extraout_x8_02 == 0) {
          func_0x00010bce3498();
          func_0x00010bcdfd30(&puStack_d0);
          func_0x00010bcdffb4(param_2,(ulong)pbStack_c8 & 0xffffffff);
          goto code_r0x00010bce2070;
        }
      }
      else {
        do {
          func_0x00010bce3290();
        } while (extraout_w10_01 != 0);
      }
      break;
    case 5:
      func_0x00010bce374c();
      FUN_10bce1d08();
      func_0x00010bce3804();
      if ((extraout_x8_04 & 1) == 0) {
        if (extraout_x8_04 == 0) {
          func_0x00010bce3498();
          func_0x00010bcdfd48(&puStack_d0);
          uVar5 = (char)pbStack_c8 == '\0';
          pcVar1 = "true";
          if ((bool)uVar5) {
            pcVar1 = "false";
          }
          func_0x00010bcdffdc(param_2,pcVar1);
          goto code_r0x00010bce2070;
        }
      }
      else {
        do {
          func_0x00010bce3290();
        } while (extraout_w10_03 != 0);
      }
      break;
    case 6:
      func_0x00010bce374c();
      FUN_10bce1714();
      func_0x00010bce3804();
      if ((extraout_x8_05 & 1) == 0) {
        if (extraout_x8_05 == 0) {
          func_0x00010bce3498();
          func_0x00010bcdfa04(&puStack_d0);
          func_0x00010bce36d4();
          goto code_r0x00010bce2070;
        }
      }
      else {
        do {
          func_0x00010bce3290();
        } while (extraout_w10_04 != 0);
      }
      break;
    default:
      puVar8 = puVar9;
      func_0x00010bce3ed0();
      puStack_d0 = puVar8;
      pbStack_c8 = pbVar10;
      func_0x0001089ac660(auStack_100,*(undefined4 *)(puVar9[1] + 0x48));
      func_0x00010bce3be4();
      func_0x00010bce38a4();
      uVar2 = extraout_x11;
      puVar9 = extraout_x10;
      if (cVar4 == cVar3) {
        uVar2 = extraout_x8_06;
        puVar9 = auStack_118;
      }
      func_0x00010bce3630(puVar9,uVar2);
      func_0x00010bce3884();
      goto LAB_10bce2124;
    case 0xb:
      FUN_10bce1d64(puVar8,*(undefined4 *)(lVar12 + 0x50));
      pbStack_c8 = (byte *)CONCAT44(pbStack_c8._4_4_,*(undefined4 *)puVar8);
      puStack_d0 = (undefined8 *)0x0;
      func_0x00010bce32e4();
      func_0x00010bce3c0c();
      FUN_10bce1940(param_2,puVar9,(ulong)pbStack_c8 & 0xffffffff,0);
code_r0x00010bce2070:
      func_0x00010bce3994();
      *unaff_x19 = 0;
      goto code_r0x00010bce212c;
    }
    func_0x00010bce3994();
LAB_10bce2124:
    if (*unaff_x19 != 0) {
LAB_10bce2184:
      func_0x00010bce36e8();
      func_0x00010bce36fc();
      goto LAB_10bce21b0;
    }
code_r0x00010bce212c:
    func_0x00010bce3498();
    func_0x00010bce3d9c(param_2);
    func_0x00010bce35f0();
    param_3 = param_2;
    func_0x00010bce373c(param_2," ");
    func_0x00010bce3f00();
    puVar9 = param_3;
    func_0x00010bce3c04();
    param_3 = param_3 + 4;
    func_0x00010bce35e4();
    FUN_10bce0f24();
    if (*unaff_x19 != 0) goto LAB_10bce2184;
    func_0x00010bce3498();
LAB_10bce2174:
    func_0x00010bce36e8();
    func_0x00010bce36fc();
  }
  func_0x00010bce344c();
  if ((bStack_119 & 1) == 0) {
    func_0x00010bce360c();
  }
  func_0x00010bce336c();
  *unaff_x19 = 0;
LAB_10bce21b0:
  func_0x00010bce3244(uStack_a0);
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bce3994();
  func_0x00010bce36e8();
  func_0x00010bce36fc();
  func_0x00010bce35bc();
  puVar7 = param_3;
  func_0x00010bce37ac();
  iVar6 = (int)puVar7;
  FUN_10bcde0c0();
  func_0x00010bcdd9d8();
  if (iVar6 != 5) {
    *(undefined1 *)(puVar9 + 1) = 0;
    goto LAB_10bce22e8;
  }
  FUN_10bce41b0(&uStack_190,param_3);
  uStack_198 = uStack_190;
  if ((uStack_190 & 1) == 0) {
    if (uStack_190 != 0) goto LAB_10bce22d0;
    func_0x00010bce3798();
    FUN_10bcddffc(&uStack_190);
    FUN_10bce1db8(param_2,*(undefined4 *)(param_3[1] + 0x50));
    uStack_180 = 0;
    puStack_178 = param_2;
    func_0x00010bce3798();
    FUN_10bce1b40(&uStack_180);
    puVar7 = puStack_178;
    FUN_10bce2338(puStack_178,uStack_188);
    uVar5 = SUB81(puVar7,0);
    uStack_198 = 0;
    func_0x000107c31550(&uStack_180);
  }
  else {
    do {
      func_0x00010bce3290();
    } while (extraout_w10_05 != 0);
LAB_10bce22d0:
    uVar5 = 0;
  }
  func_0x00010bce36fc();
  if (uStack_198 != 0) {
    FUN_10bcdff38(puVar9);
    func_0x00010bce3798();
    return;
  }
  func_0x00010bce3798();
  *(undefined1 *)(puVar9 + 1) = uVar5;
LAB_10bce22e8:
  *puVar9 = 0;
  return;
}


