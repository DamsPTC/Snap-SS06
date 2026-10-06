/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10acaeefc; end: 10acaefd3;  */

/* WARNING: Removing unreachable block (ram,0x00010acaef94) */

undefined1  [16] FUN_10acaeefc(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f6a1a72,0x11);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10acd8acc(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10acaefd4; end: 10acaf033;  */

undefined8 * FUN_10acaefd4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10acaf034; end: 10acaf1f3;  */

undefined1  [16] FUN_10acaf034(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xb;
  auVar1._0_8_ = &UNK_10f6a1a84;
  return auVar1;
}



/* Entry: 10acaf1f4; end: 10acaf2db;  */

void FUN_10acaf1f4(undefined8 param_1)

{
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f6a0902;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  puStack_70 = &UNK_10f6a0902;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10acaf2dc(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6a153a;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f6a0902;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10acd9060();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6a1542;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f6a0902;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010acd91d4(param_1,&puStack_98);
  FUN_10acd92e0(param_1);
  return;
}



/* Entry: 10acaf2dc; end: 10acaf3b3;  */

/* WARNING: Removing unreachable block (ram,0x00010acaf374) */

undefined1  [16] FUN_10acaf2dc(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f6a1a84,0xb);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10acd8f64(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10acaf3b4; end: 10acaf66b;  */

void FUN_10acaf3b4(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f6a1a90,0x18);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c6c248;
  pppuVar2 = (undefined8 ***)&UNK_10f6a0902;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c6c248;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f6a154c,FUN_10acd939c,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,"normal",FUN_10acd94bc,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f6a1555,FUN_10acd9574,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f410265,FUN_10acd9630,0);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f6a1a90,0x18);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10acaf650);
  (*pcVar6)();
}



/* Entry: 10acaf66c; end: 10acaf757;  */

void FUN_10acaf66c(undefined8 param_1)

{
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f6a0902;
  puStack_70 = (undefined *)0x0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10acaf758(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6a1564;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f6a0902;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10acd97e4();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6a156e;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f6a0902;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010acd9960(param_1,&puStack_98);
  FUN_10acd9a6c(param_1);
  return;
}



/* Entry: 10acaf758; end: 10acaf82f;  */

/* WARNING: Removing unreachable block (ram,0x00010acaf7f0) */

undefined1  [16] FUN_10acaf758(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f6a1aa9,0x1a);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10acd96e8(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10acaf830; end: 10acaf937;  */

undefined8 * FUN_10acaf830(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  *(undefined8 *)((long)param_1 + 0x44) = 0x3f80000000000000;
  *(undefined8 *)((long)param_1 + 0x5c) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110c6aa58;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  *(undefined8 *)((long)param_1 + 0x6c) = 0x3f80000000000000;
  *(undefined8 *)((long)param_1 + 100) = 0;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)((long)param_1 + 0x74) = *(undefined4 *)*param_3;
  func_0x00010aa3df94(param_1 + 0xf,param_3);
  FUN_10acaf938(param_1,param_2,param_3);
  param_1[4] = param_1[3];
  func_0x00010aa3df94(param_1 + 0xf,param_3);
  return param_1;
}



/* Entry: 10acaf938; end: 10acafb1b;  */

void FUN_10acaf938(long param_1,long param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  undefined4 uStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  undefined4 uStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  undefined8 uStack_b4;
  undefined8 uStack_ac;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined8 uStack_9c;
  undefined8 uStack_94;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  float fStack_68;
  float fStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  param_2 = param_2 + 0xd48;
  FUN_10a5aeb74(param_2,&PTR_DAT_110be7540);
  lVar1 = 2;
  lVar2 = param_2;
  do {
    lVar2 = *(long *)(lVar2 + 8);
    lVar1 = lVar1 + -1;
  } while (lVar2 != param_2);
  if (lVar1 == 0) {
    FUN_10a4a5f38(&uStack_60,*(undefined8 *)(*(long *)(param_2 + 8) + 0x28),*param_3 + 4,
                  *param_3 + 0x10);
  }
  else {
    lVar2 = *param_3;
    uStack_a0 = 0x3f800000;
    uStack_94 = 0;
    uStack_9c = 0;
    uStack_8c = 0x3f800000;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0x3f800000;
    fVar3 = *(float *)(lVar2 + 0xc) * 0.0;
    fVar4 = (float)*(undefined8 *)(lVar2 + 4);
    fVar5 = fVar4 * 0.0;
    fVar6 = (float)((ulong)*(undefined8 *)(lVar2 + 4) >> 0x20);
    fVar7 = fVar6 * 0.0;
    uVar8 = NEON_rev64(CONCAT44(fVar7,fVar5),4);
    fVar5 = fVar5 + fVar7;
    uStack_70 = CONCAT44(fVar6 + (float)((ulong)uVar8 >> 0x20) + fVar3 + 0.0,
                         fVar4 + (float)uVar8 + fVar3 + 0.0);
    fStack_68 = *(float *)(lVar2 + 0xc) + fVar5 + 0.0;
    fStack_64 = fVar5 + fVar3 + 1.0;
    fVar3 = *(float *)(lVar2 + 0x10);
    fVar4 = *(float *)(lVar2 + 0x14);
    fVar6 = *(float *)(lVar2 + 0x18);
    fVar5 = *(float *)(lVar2 + 0x1c);
    fStack_e0 = (fVar4 * fVar4 + fVar6 * fVar6) * -2.0 + 1.0;
    fStack_dc = fVar3 * fVar4 + fVar6 * fVar5;
    fStack_dc = fStack_dc + fStack_dc;
    fStack_d8 = fVar3 * fVar6 - fVar4 * fVar5;
    fStack_d8 = fStack_d8 + fStack_d8;
    fStack_d0 = fVar3 * fVar4 - fVar6 * fVar5;
    fStack_d0 = fStack_d0 + fStack_d0;
    fStack_cc = (fVar3 * fVar3 + fVar6 * fVar6) * -2.0 + 1.0;
    fStack_c8 = fVar4 * fVar6 + fVar3 * fVar5;
    fStack_c8 = fStack_c8 + fStack_c8;
    fStack_c0 = fVar3 * fVar6 + fVar4 * fVar5;
    fStack_c0 = fStack_c0 + fStack_c0;
    fStack_bc = fVar4 * fVar6 - fVar3 * fVar5;
    fStack_bc = fStack_bc + fStack_bc;
    uStack_d4 = 0;
    uStack_c4 = 0;
    fStack_b8 = (fVar3 * fVar3 + fVar4 * fVar4) * -2.0 + 1.0;
    uStack_ac = 0;
    uStack_b4 = 0;
    uStack_a4 = 0x3f800000;
    func_0x000109519fd0(&uStack_60,&uStack_a0,&fStack_e0);
  }
  *(undefined8 *)(param_1 + 0x3c) = uStack_58;
  *(undefined8 *)(param_1 + 0x34) = uStack_60;
  *(undefined8 *)(param_1 + 0x4c) = uStack_48;
  *(undefined8 *)(param_1 + 0x44) = uStack_50;
  *(undefined8 *)(param_1 + 0x5c) = uStack_38;
  *(undefined8 *)(param_1 + 0x54) = uStack_40;
  *(undefined8 *)(param_1 + 0x6c) = uStack_28;
  *(undefined8 *)(param_1 + 100) = uStack_30;
  fVar3 = *(float *)(*param_3 + 0x20);
  *(ulong *)(param_1 + 0x3c) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x3c) >> 0x20) * fVar3,
                (float)*(undefined8 *)(param_1 + 0x3c) * fVar3);
  *(ulong *)(param_1 + 0x34) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x34) >> 0x20) * fVar3,
                (float)*(undefined8 *)(param_1 + 0x34) * fVar3);
  *(ulong *)(param_1 + 0x4c) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x4c) >> 0x20) * fVar3,
                (float)*(undefined8 *)(param_1 + 0x4c) * fVar3);
  *(ulong *)(param_1 + 0x44) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x44) >> 0x20) * fVar3,
                (float)*(undefined8 *)(param_1 + 0x44) * fVar3);
  *(ulong *)(param_1 + 0x5c) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x5c) >> 0x20) * fVar3,
                (float)*(undefined8 *)(param_1 + 0x5c) * fVar3);
  *(ulong *)(param_1 + 0x54) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x54) >> 0x20) * fVar3,
                (float)*(undefined8 *)(param_1 + 0x54) * fVar3);
  return;
}



/* Entry: 10acafb1c; end: 10acafe17;  */

undefined8 * FUN_10acafb1c(undefined8 *param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  code *pcVar4;
  bool bVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  float *pfVar19;
  ulong uVar20;
  ulong uVar21;
  float fVar22;
  float fVar24;
  float fVar25;
  undefined1 auVar23 [16];
  float fVar26;
  undefined8 uVar27;
  undefined1 auVar28 [16];
  undefined8 uVar29;
  undefined8 uStack_c0;
  
  lVar18 = param_1[0xf];
  uVar8 = *(long *)(lVar18 + 0x48) - *(long *)(lVar18 + 0x40) >> 2;
  uVar17 = uVar8 / 3;
  pfVar19 = (float *)param_1[3];
  if (pfVar19 == (float *)param_1[4]) {
    lVar10 = *(long *)(lVar18 + 0x28);
  }
  else {
    lVar10 = *(long *)(lVar18 + 0x28);
    if ((*(ulong *)((float *)param_1[4] + -2) == uVar17) &&
       ((*(long *)(lVar18 + 0x30) - lVar10 >> 2) * -0x5555555555555555 - param_1[0x11] == 0)) {
      return param_1;
    }
  }
  puVar6 = (undefined8 *)0x0;
  uVar7 = 0;
  param_1[4] = pfVar19;
  param_1[0x11] = (*(long *)(lVar18 + 0x30) - lVar10 >> 2) * -0x5555555555555555;
  uVar29 = NEON_fmov(0x3f800000,4);
  do {
    uVar20 = uVar7 * 300;
    if (uVar17 <= uVar20) {
      return puVar6;
    }
    uVar1 = uVar20 + 300;
    if (uVar17 <= uVar20 + 300) {
      uVar1 = uVar17;
    }
    uVar21 = 0xff7fffffff7fffff;
    auVar23._8_8_ = 0xff7fffff7f7fffff;
    auVar23._0_8_ = 0x7f7fffff7f7fffff;
    puVar12 = puVar6;
    uVar11 = uVar20;
    do {
      lVar10 = 3;
      puVar13 = puVar12;
      do {
        if ((undefined8 *)(*(long *)(lVar18 + 0x48) - *(long *)(lVar18 + 0x40) >> 2) <= puVar13) {
LAB_10acafe0c:
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10acafe10);
          (*pcVar4)();
        }
        uVar14 = (ulong)*(uint *)(*(long *)(lVar18 + 0x40) + (long)puVar13 * 4);
        uVar16 = (*(long *)(lVar18 + 0x30) - *(long *)(lVar18 + 0x28) >> 2) * -0x5555555555555555;
        if (uVar16 < uVar14 || uVar16 - uVar14 == 0) goto LAB_10acafe0c;
        puVar15 = (undefined8 *)(*(long *)(lVar18 + 0x28) + uVar14 * 0xc);
        uVar27 = *puVar15;
        auVar28 = NEON_ext(auVar23,auVar23,8,1);
        fVar24 = (float)uVar27;
        uVar14 = *(ulong *)((long)puVar15 + 4);
        fVar22 = (float)(uVar14 >> 0x20);
        uVar21 = uVar21 ^ (uVar21 ^ uVar14) &
                          CONCAT44(-(uint)((float)(uVar21 >> 0x20) < fVar22),
                                   -(uint)((float)uVar21 < (float)uVar14));
        auVar2._8_4_ = fVar22;
        auVar2._0_8_ = uVar27;
        auVar2._12_4_ = fVar24;
        auVar3._4_4_ = -(uint)((float)((ulong)uVar27 >> 0x20) < auVar23._4_4_);
        auVar3._0_4_ = -(uint)(fVar24 < auVar23._0_4_);
        auVar3._8_4_ = -(uint)(fVar22 < auVar23._8_4_);
        auVar3._12_4_ = -(uint)(auVar28._4_4_ < fVar24);
        auVar23 = auVar23 ^ (auVar23 ^ auVar2) & auVar3;
        puVar13 = (undefined8 *)((long)puVar13 + 1);
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      uVar11 = uVar11 + 1;
      puVar12 = (undefined8 *)((long)puVar12 + 3);
    } while (uVar11 < uVar1);
    fVar22 = auVar23._0_4_ + -1.0;
    fVar24 = auVar23._4_4_ + -1.0;
    fVar25 = auVar23._8_4_ + -1.0;
    fVar26 = auVar23._12_4_ + 1.0;
    uVar27 = CONCAT44((float)(uVar21 >> 0x20) + (float)((ulong)uVar29 >> 0x20),
                      (float)uVar21 + (float)uVar29);
    if (pfVar19 < (float *)param_1[5]) {
      pfVar19[2] = fVar25;
      pfVar19[3] = fVar26;
      *pfVar19 = fVar22;
      pfVar19[1] = fVar24;
      *(undefined8 *)(pfVar19 + 4) = uVar27;
      *(ulong *)(pfVar19 + 6) = uVar20;
      *(ulong *)(pfVar19 + 8) = uVar1;
      pfVar19 = pfVar19 + 10;
    }
    else {
      lVar10 = param_1[3];
      uVar11 = ((long)pfVar19 - lVar10 >> 3) * -0x3333333333333333 + 1;
      if (0x666666666666666 < uVar11) {
LAB_10acafe14:
        FUN_10acb68cc();
        *puVar6 = &PTR_FUN_110c6aa58;
        func_0x00010a26e868(puVar6 + 0xf);
        if (puVar6[3] != 0) {
          puVar6[4] = puVar6[3];
          __ZdlPv();
        }
        *puVar6 = &PTR_DAT_110b17898;
        func_0x00010a004dac(puVar6 + 1);
        return puVar6;
      }
      uStack_c0 = CONCAT44(fVar24,fVar22);
      lVar9 = (long)param_1[5] - lVar10 >> 3;
      uVar21 = lVar9 * -0x6666666666666666;
      if (uVar21 < uVar11 || uVar21 - uVar11 == 0) {
        uVar21 = uVar11;
      }
      if (0x333333333333332 < (ulong)(lVar9 * -0x3333333333333333)) {
        uVar21 = 0x666666666666666;
      }
      if (0x666666666666666 < uVar21) {
        func_0x000109ffded8();
        goto LAB_10acafe14;
      }
      lVar9 = uVar21 * 0x28;
      __Znwm();
      puVar12 = (undefined8 *)(lVar9 + ((long)pfVar19 - lVar10));
      puVar12[1] = CONCAT44(fVar26,fVar25);
      *puVar12 = uStack_c0;
      puVar12[2] = uVar27;
      puVar12[3] = uVar20;
      puVar12[4] = uVar1;
      pfVar19 = (float *)(puVar12 + 5);
      _memcpy();
      param_1[3] = lVar9;
      param_1[4] = pfVar19;
      param_1[5] = lVar9 + uVar21 * 0x28;
      if (lVar10 != 0) {
        __ZdlPv(lVar10);
      }
    }
    param_1[4] = pfVar19;
    puVar6 = (undefined8 *)((long)puVar6 + 900);
    bVar5 = uVar7 == uVar8 / 900;
    uVar7 = uVar7 + 1;
    if (bVar5) {
      return puVar6;
    }
  } while( true );
}



/* Entry: 10acafe18; end: 10acafe6b;  */

undefined8 * FUN_10acafe18(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6aa58;
  func_0x00010a26e868(param_1 + 0xf);
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    __ZdlPv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10acafe6c; end: 10acafe6f;  */

undefined8 * FUN_10acafe6c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6aa58;
  func_0x00010a26e868(param_1 + 0xf);
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    __ZdlPv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10acafe70; end: 10acafe83;  */

void FUN_10acafe70(void)

{
  FUN_10acafe18();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10acafe84; end: 10acb011f;  */

undefined1  [16] FUN_10acafe84(float param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar23;
  undefined8 uVar22;
  float fVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined1 auVar27 [16];
  
  FUN_10acafb1c();
  puVar12 = *(undefined8 **)(param_2 + 0x18);
  if (puVar12 != *(undefined8 **)(param_2 + 0x20)) {
    lVar13 = *(long *)(param_2 + 0x78);
    uVar19 = NEON_fmov(0xc0400000,4);
    do {
      fVar24 = (float)*(undefined8 *)((long)puVar12 + 0xc);
      fVar23 = (float)((ulong)*(undefined8 *)((long)puVar12 + 0xc) >> 0x20);
      fVar20 = ((float)*puVar12 + fVar24) * 0.5;
      fVar21 = ((float)((ulong)*puVar12 >> 0x20) + fVar23) * 0.5;
      fVar17 = (float)*param_3;
      fVar18 = (float)((ulong)*param_3 >> 0x20);
      if (((ABS(fVar17 - fVar20) <= param_1 + (fVar24 - fVar20)) &&
          (ABS(fVar18 - fVar21) <= param_1 + (fVar23 - fVar21))) &&
         (fVar20 = (*(float *)(puVar12 + 1) + *(float *)((long)puVar12 + 0x14)) * 0.5,
         ABS(*(float *)(param_3 + 1) - fVar20) <=
         param_1 + (*(float *)((long)puVar12 + 0x14) - fVar20))) {
        uVar16 = *(uint *)(puVar12 + 3);
        uVar14 = (ulong)uVar16;
        if (uVar14 < (ulong)puVar12[4]) {
          lVar1 = *(long *)(lVar13 + 0x40);
          uVar15 = *(long *)(lVar13 + 0x48) - lVar1 >> 2;
          uVar4 = uVar16 * 3;
LAB_10acaff58:
          uVar16 = uVar16 + 1;
          if (uVar4 < uVar15) {
            if ((uVar15 <= uVar4 + 1) || (uVar15 <= uVar4 + 2)) goto LAB_10acb011c;
            uVar5 = (ulong)*(uint *)(lVar1 + (ulong)uVar4 * 4);
            lVar2 = *(long *)(lVar13 + 0x28);
            uVar9 = (*(long *)(lVar13 + 0x30) - lVar2 >> 2) * -0x5555555555555555;
            if ((uVar9 < uVar5 || uVar9 - uVar5 == 0) ||
               ((uVar6 = (ulong)*(uint *)(lVar1 + (ulong)(uVar4 + 1) * 4),
                uVar9 < uVar6 || uVar9 - uVar6 == 0 ||
                (uVar7 = (ulong)*(uint *)(lVar1 + (ulong)(uVar4 + 2) * 4),
                uVar9 < uVar7 || uVar9 - uVar7 == 0)))) goto LAB_10acb011c;
            puVar10 = (undefined8 *)(lVar2 + uVar5 * 0xc);
            puVar11 = (undefined8 *)(lVar2 + uVar6 * 0xc);
            puVar8 = (undefined8 *)(lVar2 + uVar7 * 0xc);
            fVar20 = *(float *)(param_3 + 1) +
                     (*(float *)(puVar10 + 1) + *(float *)(puVar11 + 1) + *(float *)(puVar8 + 1)) /
                     -3.0;
            uVar22 = *puVar10;
            uVar25 = *puVar11;
            uVar26 = *puVar8;
            fVar21 = fVar17 + ((float)uVar22 + (float)uVar25 + (float)uVar26) / (float)uVar19;
            fVar24 = fVar18 + ((float)((ulong)uVar22 >> 0x20) + (float)((ulong)uVar25 >> 0x20) +
                              (float)((ulong)uVar26 >> 0x20)) / (float)((ulong)uVar19 >> 0x20);
            if (param_1 <= SQRT(fVar21 * fVar21 + fVar24 * fVar24 + fVar20 * fVar20)) {
              uVar14 = (ulong)uVar16;
              uVar4 = uVar4 + 3;
              if ((ulong)puVar12[4] <= (ulong)uVar16) goto LAB_10acb0024;
              goto LAB_10acaff58;
            }
            if (uVar14 < (ulong)(*(long *)(lVar13 + 0x90) - *(long *)(lVar13 + 0x88))) {
              lVar1 = *(long *)(lVar13 + 0x58);
              uVar15 = (*(long *)(lVar13 + 0x60) - lVar1 >> 2) * -0x5555555555555555;
              if (((uVar15 < uVar5 || uVar15 - uVar5 == 0) ||
                  (uVar15 < uVar6 || uVar15 - uVar6 == 0)) ||
                 (uVar15 < uVar7 || uVar15 - uVar7 == 0)) goto LAB_10acb011c;
              puVar8 = (undefined8 *)(lVar1 + uVar5 * 0xc);
              puVar10 = (undefined8 *)(lVar1 + uVar6 * 0xc);
              puVar12 = (undefined8 *)(lVar1 + uVar7 * 0xc);
              fVar17 = (*(float *)(puVar8 + 1) + *(float *)(puVar10 + 1) + *(float *)(puVar12 + 1))
                       / 3.0;
              uVar19 = *puVar8;
              uVar22 = *puVar10;
              uVar25 = *puVar12;
              uVar26 = NEON_fmov(0x40400000,4);
              fVar18 = ((float)uVar19 + (float)uVar22 + (float)uVar25) / (float)uVar26;
              fVar20 = ((float)((ulong)uVar19 >> 0x20) + (float)((ulong)uVar22 >> 0x20) +
                       (float)((ulong)uVar25 >> 0x20)) / (float)((ulong)uVar26 >> 0x20);
              fVar21 = 1.0 / SQRT(fVar18 * fVar18 + fVar20 * fVar20 + fVar17 * fVar17);
              uVar14 = (ulong)*(byte *)(*(long *)(lVar13 + 0x88) + uVar14) << 8 |
                       (ulong)(uint)(fVar21 * fVar18) << 0x20 | 1;
              uVar19 = CONCAT44(fVar17 * fVar21,fVar21 * fVar20);
              goto LAB_10acb010c;
            }
          }
LAB_10acb011c:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10acb0120);
          (*pcVar3)();
        }
      }
LAB_10acb0024:
      puVar12 = puVar12 + 5;
    } while (puVar12 != *(undefined8 **)(param_2 + 0x20));
  }
  uVar14 = 0;
  uVar19 = 0;
LAB_10acb010c:
  auVar27._8_8_ = uVar19;
  auVar27._0_8_ = uVar14;
  return auVar27;
}



/* Entry: 10acb0120; end: 10acb06e3;  */

void FUN_10acb0120(undefined1 *param_1,long param_2,float *param_3,float *param_4,ulong param_5)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  float *pfVar18;
  ulong uVar19;
  float *pfVar20;
  float *pfVar21;
  ulong uVar22;
  ulong uVar23;
  undefined8 *puVar24;
  undefined1 uVar25;
  ulong uVar26;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  float fVar30;
  undefined8 uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined8 uVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined8 uVar51;
  float fVar52;
  float fVar53;
  undefined8 uVar54;
  float fVar55;
  undefined8 uStack_f8;
  float fStack_f0;
  undefined8 uStack_ec;
  undefined8 uStack_e4;
  float fStack_dc;
  float fStack_d8;
  undefined8 uStack_d4;
  undefined8 uStack_cc;
  float fStack_c4;
  undefined1 auStack_c0 [32];
  
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  param_1[0x24] = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0x7f7fffff;
  FUN_10a0f07b4(auStack_c0,param_3,param_4);
  lVar11 = *(long *)(param_2 + 0x78);
  fVar40 = (float)*(undefined8 *)(lVar11 + 0xac);
  fVar41 = (float)((ulong)*(undefined8 *)(lVar11 + 0xac) >> 0x20);
  fStack_d8 = ((float)*(undefined8 *)(lVar11 + 0xa0) + fVar40) * 0.5;
  fVar32 = ((float)((ulong)*(undefined8 *)(lVar11 + 0xa0) >> 0x20) + fVar41) * 0.5;
  fVar27 = (*(float *)(lVar11 + 0xa8) + *(float *)(lVar11 + 0xb4)) * 0.5;
  uStack_cc = CONCAT44(fVar41 - fVar32,fVar40 - fStack_d8);
  fStack_c4 = *(float *)(lVar11 + 0xb4) - fVar27;
  uStack_d4 = CONCAT44(fVar27,fVar32);
  fVar32 = fStack_c4;
  FUN_10a005840(&fStack_d8,auStack_c0);
  if (fVar27 <= fVar32) {
    FUN_10acafb1c(param_2);
    puVar24 = *(undefined8 **)(param_2 + 0x18);
    puVar3 = *(undefined8 **)(param_2 + 0x20);
    if (puVar24 != puVar3) {
      uVar26 = 0;
      uVar25 = 0;
      lVar11 = *(long *)(param_2 + 0x78);
      uVar14 = (ulong)(*(long *)(lVar11 + 0x48) - *(long *)(lVar11 + 0x40) >> 2) / 3;
      uVar12 = *(long *)(lVar11 + 0x90) - *(long *)(lVar11 + 0x88);
      uVar4 = param_1[0x24];
      fVar40 = *param_4;
      uVar51 = *(undefined8 *)(param_4 + 1);
      uVar54 = *(undefined8 *)(param_3 + 1);
      fVar52 = (float)((ulong)uVar51 >> 0x20);
      fVar55 = (float)((ulong)uVar54 >> 0x20);
      fVar41 = *param_3;
      uStack_f8 = 0;
      fVar27 = 0.0;
      fVar32 = 3.4028235e+38;
      do {
        fVar30 = (float)*(undefined8 *)((long)puVar24 + 0xc);
        fVar34 = (float)((ulong)*(undefined8 *)((long)puVar24 + 0xc) >> 0x20);
        fStack_f0 = ((float)*puVar24 + fVar30) * 0.5;
        fVar33 = ((float)((ulong)*puVar24 >> 0x20) + fVar34) * 0.5;
        fVar28 = (*(float *)(puVar24 + 1) + *(float *)((long)puVar24 + 0x14)) * 0.5;
        uStack_e4 = CONCAT44(fVar34 - fVar33,fVar30 - fStack_f0);
        fStack_dc = *(float *)((long)puVar24 + 0x14) - fVar28;
        uStack_ec = CONCAT44(fVar28,fVar33);
        fVar33 = fStack_dc;
        FUN_10a005840(&fStack_f0,auStack_c0);
        if (fVar28 <= fVar33) {
          uVar13 = (ulong)*(uint *)(puVar24 + 3);
          uVar16 = puVar24[4];
          if (uVar13 < uVar16) {
            fVar28 = *(float *)(param_1 + 0x10);
            fVar30 = *(float *)(param_1 + 0x14);
            lVar1 = *(long *)(lVar11 + 0x40);
            uVar15 = *(long *)(lVar11 + 0x48) - lVar1 >> 2;
            fVar33 = *(float *)(param_1 + 0x18);
            uVar17 = *(uint *)(puVar24 + 3) * 3;
            do {
              if (uVar15 <= uVar17) {
LAB_10acb0690:
                param_1[0x24] = uVar4;
                *(float *)(param_1 + 0x10) = fVar28;
                *(float *)(param_1 + 0x14) = fVar30;
                *(undefined8 *)(param_1 + 8) = uStack_f8;
                *(int *)(param_1 + 0x20) = (int)uVar26;
                *param_1 = uVar25;
                *(float *)(param_1 + 0x18) = fVar33;
                *(float *)(param_1 + 0x1c) = fVar32;
                *(float *)(param_1 + 4) = fVar27;
LAB_10acb06b4:
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x10acb06b8);
                (*pcVar5)();
              }
              if ((uVar15 <= uVar17 + 1) || (uVar15 <= uVar17 + 2)) goto LAB_10acb0690;
              uVar19 = (ulong)*(uint *)(lVar1 + (ulong)uVar17 * 4);
              lVar2 = *(long *)(lVar11 + 0x28);
              uVar9 = (*(long *)(lVar11 + 0x30) - lVar2 >> 2) * -0x5555555555555555;
              if ((uVar9 < uVar19 || uVar9 - uVar19 == 0) ||
                 ((uVar23 = (ulong)*(uint *)(lVar1 + (ulong)(uVar17 + 1) * 4),
                  uVar9 < uVar23 || uVar9 - uVar23 == 0 ||
                  (uVar22 = (ulong)*(uint *)(lVar1 + (ulong)(uVar17 + 2) * 4),
                  uVar9 < uVar22 || uVar9 - uVar22 == 0)))) goto LAB_10acb0690;
              pfVar18 = (float *)(lVar2 + uVar19 * 0xc);
              pfVar20 = (float *)(lVar2 + uVar23 * 0xc);
              pfVar21 = (float *)(lVar2 + uVar22 * 0xc);
              fVar44 = *pfVar18;
              fVar45 = pfVar18[1];
              fVar35 = *pfVar20 - fVar44;
              fVar37 = pfVar20[1] - fVar45;
              fVar46 = pfVar18[2];
              fVar38 = pfVar20[2] - fVar46;
              fVar42 = *pfVar21 - fVar44;
              fVar39 = pfVar21[1] - fVar45;
              fVar43 = pfVar21[2] - fVar46;
              fVar50 = (float)uVar51;
              fVar47 = -(fVar39 * fVar52) + fVar43 * fVar50;
              fVar48 = -(fVar43 * fVar40) + fVar42 * fVar52;
              fVar49 = -(fVar42 * fVar50) + fVar39 * fVar40;
              fVar34 = fVar38 * fVar49 + fVar35 * fVar47 + fVar37 * fVar48;
              iVar10 = (int)uVar13;
              if (1.1920929e-07 <= ABS(fVar34)) {
                fVar34 = 1.0 / fVar34;
                fVar44 = fVar41 - fVar44;
                fVar53 = (float)uVar54;
                fVar45 = fVar53 - fVar45;
                fVar46 = fVar55 - fVar46;
                fVar47 = fVar34 * (fVar47 * fVar44 + fVar48 * fVar45 + fVar49 * fVar46);
                bVar6 = false;
                bVar7 = false;
                bVar8 = false;
                if (0.0 <= fVar47) {
                  bVar6 = false;
                  bVar7 = false;
                  bVar8 = true;
                  if (!NAN(fVar47)) {
                    bVar6 = fVar47 < 1.0;
                    bVar7 = fVar47 == 1.0;
                    bVar8 = false;
                  }
                }
                if (bVar7 || bVar6 != bVar8) {
                  fVar48 = -(fVar37 * fVar46) + fVar38 * fVar45;
                  fVar46 = -(fVar38 * fVar44) + fVar35 * fVar46;
                  fVar44 = -(fVar35 * fVar45) + fVar37 * fVar44;
                  fVar45 = fVar34 * (fVar52 * fVar44 + fVar50 * fVar46 + fVar40 * fVar48);
                  fVar47 = fVar47 + fVar45;
                  bVar6 = false;
                  bVar7 = false;
                  bVar8 = false;
                  if (0.0 <= fVar45) {
                    bVar6 = false;
                    bVar7 = false;
                    bVar8 = true;
                    if (!NAN(fVar47)) {
                      bVar6 = fVar47 < 1.0;
                      bVar7 = fVar47 == 1.0;
                      bVar8 = false;
                    }
                  }
                  if ((bVar7 || bVar6 != bVar8) &&
                     (fVar34 = fVar34 * (fVar43 * fVar44 + fVar39 * fVar46 + fVar42 * fVar48),
                     0.0 < fVar34)) {
                    if ((param_5 & 1) == 0) {
                      param_1[0x24] = uVar4;
                      *(float *)(param_1 + 0x10) = fVar28;
                      *(float *)(param_1 + 0x14) = fVar30;
                      *param_1 = 1;
                      fVar27 = fVar40 * fVar34 + fVar41;
                      uStack_f8 = CONCAT44(fVar52 * fVar34 + fVar55,fVar50 * fVar34 + fVar53);
                      *(float *)(param_1 + 0x18) = fVar33;
                      *(float *)(param_1 + 0x1c) = fVar34;
                      *(float *)(param_1 + 4) = fVar27;
                      *(undefined8 *)(param_1 + 8) = uStack_f8;
                      *(int *)(param_1 + 0x20) = iVar10;
                      fVar28 = *pfVar20;
                      fVar33 = *pfVar18;
                      fVar32 = *pfVar21;
                      uVar36 = *(undefined8 *)(pfVar20 + 1);
                      uVar29 = *(undefined8 *)(pfVar18 + 1);
                      uVar31 = *(undefined8 *)(pfVar21 + 1);
                      if (uVar14 == uVar12) {
                        if ((ulong)(*(long *)(lVar11 + 0x90) - *(long *)(lVar11 + 0x88)) <= uVar13)
                        goto LAB_10acb06b4;
                        uVar4 = *(undefined1 *)(*(long *)(lVar11 + 0x88) + uVar13);
                        param_1[0x24] = uVar4;
                      }
                      fVar42 = (float)((ulong)uVar36 >> 0x20);
                      fVar37 = (float)((ulong)uVar29 >> 0x20);
                      fVar30 = (float)uVar29;
                      fVar39 = (float)uVar36 - fVar30;
                      fVar38 = (float)((ulong)uVar31 >> 0x20);
                      fVar30 = (float)uVar31 - fVar30;
                      fVar35 = -(fVar32 - fVar33) * fVar39 + fVar30 * (fVar28 - fVar33);
                      fVar30 = (fVar42 - fVar37) * -fVar30 + (fVar38 - fVar37) * fVar39;
                      fVar32 = (fVar28 - fVar33) * -(fVar38 - fVar37) +
                               (fVar32 - fVar33) * (fVar42 - fVar37);
                      fVar33 = 1.0 / SQRT(fVar35 * fVar35 + fVar30 * fVar30 + fVar32 * fVar32);
                      *(ulong *)(param_1 + 0x10) = CONCAT44(fVar32 * fVar33,fVar30 * fVar33);
                      *(float *)(param_1 + 0x18) = fVar35 * fVar33;
                      uVar25 = 1;
                      uVar26 = uVar13;
                      fVar32 = fVar34;
                      goto LAB_10acb055c;
                    }
                    if (fVar32 <= fVar34) {
                      uVar25 = 1;
                    }
                    else {
                      fVar27 = fVar40 * fVar34 + fVar41;
                      uStack_f8 = CONCAT44(fVar52 * fVar34 + fVar55,fVar50 * fVar34 + fVar53);
                      if (uVar14 == uVar12) {
                        if ((ulong)(*(long *)(lVar11 + 0x90) - *(long *)(lVar11 + 0x88)) <= uVar13)
                        {
                          param_1[0x24] = uVar4;
                          *(float *)(param_1 + 0x10) = fVar28;
                          *(float *)(param_1 + 0x14) = fVar30;
                          *(undefined8 *)(param_1 + 8) = uStack_f8;
                          *(int *)(param_1 + 0x20) = iVar10;
                          *param_1 = 1;
                          *(float *)(param_1 + 0x18) = fVar33;
                          *(float *)(param_1 + 0x1c) = fVar34;
                          *(float *)(param_1 + 4) = fVar27;
                    /* WARNING: Does not return */
                          pcVar5 = (code *)SoftwareBreakpoint(1,0x10acb06e4);
                          (*pcVar5)();
                        }
                        uVar4 = *(undefined1 *)(*(long *)(lVar11 + 0x88) + uVar13);
                      }
                      fVar28 = fVar38 * -fVar39 + fVar43 * fVar37;
                      fVar30 = fVar35 * -fVar43 + fVar42 * fVar38;
                      fVar33 = fVar37 * -fVar42 + fVar39 * fVar35;
                      fVar32 = 1.0 / SQRT(fVar33 * fVar33 + fVar28 * fVar28 + fVar30 * fVar30);
                      fVar28 = fVar28 * fVar32;
                      fVar30 = fVar30 * fVar32;
                      fVar33 = fVar33 * fVar32;
                      uVar16 = puVar24[4];
                      uVar25 = 1;
                      uVar26 = uVar13;
                      fVar32 = fVar34;
                    }
                  }
                }
              }
              uVar13 = (ulong)(iVar10 + 1);
              uVar17 = uVar17 + 3;
            } while (uVar13 < uVar16);
            *(float *)(param_1 + 0x14) = fVar30;
            *(float *)(param_1 + 0x18) = fVar33;
            param_1[0x24] = uVar4;
            *(float *)(param_1 + 0x10) = fVar28;
            *(undefined8 *)(param_1 + 8) = uStack_f8;
            *(int *)(param_1 + 0x20) = (int)uVar26;
          }
          *param_1 = uVar25;
          *(float *)(param_1 + 0x1c) = fVar32;
          *(float *)(param_1 + 4) = fVar27;
        }
LAB_10acb055c:
        puVar24 = puVar24 + 5;
      } while (puVar24 != puVar3);
    }
  }
  return;
}



/* Entry: 10acb06e4; end: 10acb076b;  */

undefined8 * FUN_10acb06e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6aab0;
  func_0x00010a26e988(param_1 + 7);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10acb076c; end: 10acb0abf;  */

void FUN_10acb076c(float param_1,long param_2,undefined8 *param_3,long *param_4,float *param_5,
                  int *param_6)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  float *pfVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  
  lVar14 = *(long *)(param_2 + 0x78);
  fVar22 = (float)*(undefined8 *)(lVar14 + 0xac);
  fVar32 = (float)((ulong)*(undefined8 *)(lVar14 + 0xac) >> 0x20);
  fVar21 = ((float)*(undefined8 *)(lVar14 + 0xa0) + fVar22) * 0.5;
  fVar23 = ((float)((ulong)*(undefined8 *)(lVar14 + 0xa0) >> 0x20) + fVar32) * 0.5;
  fVar30 = (float)*param_3;
  fVar31 = (float)((ulong)*param_3 >> 0x20);
  if (((ABS(fVar30 - fVar21) <= param_1 + (fVar22 - fVar21)) &&
      (ABS(fVar31 - fVar23) <= param_1 + (fVar32 - fVar23))) &&
     (fVar32 = *(float *)(param_3 + 1),
     fVar22 = (*(float *)(lVar14 + 0xa8) + *(float *)(lVar14 + 0xb4)) * 0.5,
     ABS(fVar32 - fVar22) <= param_1 + (*(float *)(lVar14 + 0xb4) - fVar22))) {
    FUN_10acafb1c();
    puVar15 = *(undefined8 **)(param_2 + 0x18);
    puVar3 = *(undefined8 **)(param_2 + 0x20);
    if (puVar15 != puVar3) {
      lVar14 = *(long *)(param_2 + 0x78);
      uVar24 = NEON_fmov(0x40400000,4);
      do {
        fVar23 = (float)*(undefined8 *)((long)puVar15 + 0xc);
        fVar28 = (float)((ulong)*(undefined8 *)((long)puVar15 + 0xc) >> 0x20);
        fVar22 = ((float)*puVar15 + fVar23) * 0.5;
        fVar21 = ((float)((ulong)*puVar15 >> 0x20) + fVar28) * 0.5;
        if (((ABS(fVar30 - fVar22) <= param_1 + (fVar23 - fVar22)) &&
            (ABS(fVar31 - fVar21) <= param_1 + (fVar28 - fVar21))) &&
           (fVar22 = (*(float *)(puVar15 + 1) + *(float *)((long)puVar15 + 0x14)) * 0.5,
           ABS(fVar32 - fVar22) <= param_1 + (*(float *)((long)puVar15 + 0x14) - fVar22))) {
          uVar16 = *(uint *)(puVar15 + 3);
          uVar5 = (ulong)uVar16;
          uVar19 = puVar15[4];
          if (uVar5 < uVar19) {
            uVar17 = uVar16 * 3;
            do {
              uVar16 = uVar16 + 1;
              lVar1 = *(long *)(lVar14 + 0x40);
              uVar7 = *(long *)(lVar14 + 0x48) - lVar1 >> 2;
              if (uVar7 <= uVar17) {
LAB_10acb0abc:
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10acb0ac0);
                (*pcVar4)();
              }
              uVar6 = (ulong)(uVar17 + 1);
              if ((uVar7 <= uVar6) || (uVar18 = (ulong)(uVar17 + 2), uVar7 <= uVar18))
              goto LAB_10acb0abc;
              uVar7 = (ulong)*(uint *)(lVar1 + (ulong)uVar17 * 4);
              lVar2 = *(long *)(lVar14 + 0x28);
              uVar9 = (*(long *)(lVar14 + 0x30) - lVar2 >> 2) * -0x5555555555555555;
              if ((uVar9 < uVar7 || uVar9 - uVar7 == 0) ||
                 ((uVar11 = (ulong)*(uint *)(lVar1 + uVar6 * 4),
                  uVar9 < uVar11 || uVar9 - uVar11 == 0 ||
                  (uVar13 = (ulong)*(uint *)(lVar1 + uVar18 * 4),
                  uVar9 < uVar13 || uVar9 - uVar13 == 0)))) goto LAB_10acb0abc;
              puVar10 = (undefined8 *)(lVar2 + uVar7 * 0xc);
              puVar12 = (undefined8 *)(lVar2 + uVar11 * 0xc);
              puVar8 = (undefined8 *)(lVar2 + uVar13 * 0xc);
              uVar25 = *puVar10;
              uVar26 = *puVar12;
              uVar27 = *puVar8;
              if ((ABS(((float)uVar25 + (float)uVar26 + (float)uVar27) / (float)uVar24 - fVar30) <=
                   param_1) &&
                 ((ABS(((float)((ulong)uVar25 >> 0x20) + (float)((ulong)uVar26 >> 0x20) +
                       (float)((ulong)uVar27 >> 0x20)) / (float)((ulong)uVar24 >> 0x20) - fVar31) <=
                   param_1 &&
                  (ABS((*(float *)(puVar10 + 1) + *(float *)(puVar12 + 1) + *(float *)(puVar8 + 1))
                       / 3.0 - fVar32) <= param_1)))) {
                if ((ulong)(*(long *)(lVar14 + 0x90) - *(long *)(lVar14 + 0x88)) <= uVar5)
                goto LAB_10acb0abc;
                uVar5 = (ulong)*(byte *)(*(long *)(lVar14 + 0x88) + uVar5);
                lVar2 = *param_4;
                if ((ulong)(param_4[1] - lVar2 >> 2) <= uVar5) goto LAB_10acb0abc;
                *(float *)(lVar2 + uVar5 * 4) = *(float *)(lVar2 + uVar5 * 4) + 1.0;
                uVar5 = (*(long *)(lVar14 + 0x60) - *(long *)(lVar14 + 0x58) >> 2) *
                        -0x5555555555555555;
                if (uVar5 < uVar7 || uVar5 - uVar7 == 0) goto LAB_10acb0abc;
                pfVar20 = (float *)(*(long *)(lVar14 + 0x58) + uVar7 * 0xc);
                fVar22 = *pfVar20;
                fVar21 = *param_5;
                fVar28 = param_5[1];
                *param_5 = fVar22 + fVar21;
                fVar23 = pfVar20[1];
                param_5[1] = fVar23 + fVar28;
                fVar29 = pfVar20[2];
                fVar33 = param_5[2];
                param_5[2] = fVar29 + fVar33;
                uVar19 = (ulong)*(uint *)(lVar1 + uVar6 * 4);
                uVar5 = (*(long *)(lVar14 + 0x60) - *(long *)(lVar14 + 0x58) >> 2) *
                        -0x5555555555555555;
                if (uVar5 < uVar19 || uVar5 - uVar19 == 0) goto LAB_10acb0abc;
                pfVar20 = (float *)(*(long *)(lVar14 + 0x58) + uVar19 * 0xc);
                fVar22 = fVar22 + fVar21 + *pfVar20;
                *param_5 = fVar22;
                fVar21 = fVar23 + fVar28 + pfVar20[1];
                param_5[1] = fVar21;
                fVar23 = fVar29 + fVar33 + pfVar20[2];
                param_5[2] = fVar23;
                uVar5 = (ulong)*(uint *)(lVar1 + uVar18 * 4);
                uVar19 = (*(long *)(lVar14 + 0x60) - *(long *)(lVar14 + 0x58) >> 2) *
                         -0x5555555555555555;
                if (uVar19 < uVar5 || uVar19 - uVar5 == 0) goto LAB_10acb0abc;
                pfVar20 = (float *)(*(long *)(lVar14 + 0x58) + uVar5 * 0xc);
                *param_5 = fVar22 + *pfVar20;
                param_5[1] = fVar21 + pfVar20[1];
                param_5[2] = fVar23 + pfVar20[2];
                *param_6 = *param_6 + 3;
                uVar19 = puVar15[4];
              }
              uVar5 = (ulong)uVar16;
              uVar17 = uVar17 + 3;
            } while (uVar16 < uVar19);
          }
        }
        puVar15 = puVar15 + 5;
      } while (puVar15 != puVar3);
    }
  }
  return;
}



/* Entry: 10acb0ac0; end: 10acb0b77;  */

undefined8 * FUN_10acb0ac0(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long *plVar2;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110c6ab08;
  plVar2 = param_1 + 3;
  param_1[4] = 0;
  *plVar2 = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  if (plVar2 != param_2) {
    func_0x00010a14ddc8(plVar2,*param_2,param_2[1],param_2[1] - *param_2 >> 2);
  }
  uVar1 = *param_3;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_3 + 1);
  param_1[6] = uVar1;
  return param_1;
}



/* Entry: 10acb0b78; end: 10acb0bc7;  */

undefined8 * FUN_10acb0b78(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6ab08;
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    __ZdlPv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10acb0bc8; end: 10acb0bcb;  */

undefined8 * FUN_10acb0bc8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6ab08;
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    __ZdlPv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10acb0bcc; end: 10acb0bdf;  */

void FUN_10acb0bcc(void)

{
  FUN_10acb0b78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10acb0be0; end: 10acb0c63;  */

undefined1  [16] FUN_10acb0be0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xd;
  auVar1._0_8_ = &UNK_10f6a1ac4;
  return auVar1;
}



/* Entry: 10acb0c64; end: 10acb13b7;  */

void FUN_10acb0c64(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f6a1ac4,0xd);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c6c308;
  pppuVar2 = (undefined8 ***)&UNK_10f6a0902;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x4200000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_54 = 0x111;
  uStack_50 = 0x13c;
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,0x42,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c6c308;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10acb1398;
    FUN_10a054dac(param_1,&UNK_10f64beb2,FUN_10acd9b28,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,0x40,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10acb1398;
    FUN_10a054dac(param_1,&UNK_10f668790,FUN_10acd9c50,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,0x40,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10acb1398;
    FUN_10a054dac(param_1,&UNK_10f6a1578,FUN_10acd9d6c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10acb1398;
    FUN_10a054dac(param_1,&UNK_10f6a1592,FUN_10acd9f14,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10acb1398;
    FUN_10a054dac(param_1,&UNK_10f6a15a5,FUN_10acd9fcc,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10acb1398;
    FUN_10a054dac(param_1,&UNK_10f6a15b7,FUN_10acda084,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10acb1398;
    FUN_10a054dac(param_1,&UNK_10f6a15c4,FUN_10acda1b4,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10acb1398;
    FUN_10a054dac(param_1,&UNK_10f6a15cd,FUN_10acda2d0,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f6a15e0,FUN_10acda3e4,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f6a15f0,FUN_10acda4c0,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f6a1602,FUN_10acda59c,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f6a1613,FUN_10acda668,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f6a1624,FUN_10acda734,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f6a1638,FUN_10acda814,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f6a1653,FUN_10acda8dc,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f6a1663,FUN_10acda9a4,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f6a166c,FUN_10acdaa88,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f6a167f,FUN_10acdab74,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f6a1690,FUN_10acdac5c,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f64c0c3,FUN_10acdad74,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,"id",FUN_10acdae78,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,0x40,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,"label",FUN_10acdaf34,0);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uVar10 = *(ulong *)(lVar3 + -0x18);
    uStack_58 = (undefined4)*(undefined8 *)(lVar3 + -0x20);
    uStack_54 = (undefined4)((ulong)*(undefined8 *)(lVar3 + -0x20) >> 0x20);
    uStack_50 = (undefined4)uVar10;
    uStack_4c = (undefined4)(uVar10 >> 0x20);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uVar10 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f6a1ac4,0xd);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10acb1398:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10acb139c);
  (*pcVar6)();
}



/* Entry: 10acb13b8; end: 10acb1463;  */

undefined8 * FUN_10acb13b8(undefined8 *param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110c6ab60;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 7) = param_2;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 8,*param_3,param_3[1]);
  }
  else {
    uVar2 = param_3[1];
    uVar1 = *param_3;
    param_1[10] = param_3[2];
    param_1[9] = uVar2;
    param_1[8] = uVar1;
  }
  return param_1;
}



/* Entry: 10acb1464; end: 10acb161f;  */

undefined8 * FUN_10acb1464(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  *param_1 = &PTR_FUN_110c6ab60;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (param_1 + 8,param_2 + 0x40);
  lVar6 = *(long *)(param_2 + 0x18);
  if (lVar6 != 0) {
    puVar4 = (undefined8 *)0x248;
    __Znwm();
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar5 = puVar4 + 3;
    *puVar4 = &PTR_FUN_110bef410;
    FUN_10a5009e0(puVar5,lVar6);
    plVar7 = (long *)param_1[4];
    param_1[3] = puVar5;
    param_1[4] = puVar4;
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
  }
  lVar6 = *(long *)(param_2 + 0x28);
  if (lVar6 != 0) {
    puVar4 = (undefined8 *)0xc8;
    __Znwm();
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar5 = puVar4 + 3;
    *puVar4 = &PTR_FUN_110ba7a98;
    FUN_10a13d968(puVar5,lVar6);
    plVar7 = (long *)param_1[6];
    param_1[5] = puVar5;
    param_1[6] = puVar4;
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
  }
  return param_1;
}



/* Entry: 10acb1620; end: 10acb167f;  */

undefined8 * FUN_10acb1620(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6ab60;
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    __ZdlPv(param_1[8]);
  }
  func_0x00010a13e5bc(param_1 + 5);
  FUN_10a2f2568(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10acb1680; end: 10acb1683;  */

undefined8 * FUN_10acb1680(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6ab60;
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    __ZdlPv(param_1[8]);
  }
  func_0x00010a13e5bc(param_1 + 5);
  FUN_10a2f2568(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10acb1684; end: 10acb1697;  */

void FUN_10acb1684(void)

{
  FUN_10acb1620();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10acb1698; end: 10acb1817;  */

long FUN_10acb1698(long param_1)

{
  int iVar1;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    if ((bRam0000000113835d08 & 1) == 0) {
      iVar1 = 0x13835d08;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        uRam0000000113835ce8 = 0;
        uRam0000000113835ce0 = 0;
        uRam0000000113835cf8 = 0;
        uRam0000000113835cf0 = 0;
        uRam0000000113835d00 = 0x3f800000;
        ___cxa_guard_release(0x113835d08);
      }
    }
    return 0x113835ce0;
  }
  return *(long *)(param_1 + 0x18) + 0x140;
}



/* Entry: 10acb1818; end: 10acb18cf;  */

undefined4 FUN_10acb1818(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined4 uVar3;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar3 = 0;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x18) + 0x1e0;
    FUN_10acd3c04();
    if (lVar2 == 0) {
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (auStack_50,&UNK_10f6a169b,param_2);
      FUN_10a012db0(auStack_38,auStack_50,&UNK_10f64676f);
      FUN_10a0029c0(auStack_38);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10acb189c);
      (*pcVar1)();
    }
    uVar3 = *(undefined4 *)(lVar2 + 0x28);
  }
  return uVar3;
}



/* Entry: 10acb18d0; end: 10acb1a2f;  */

undefined4 FUN_10acb18d0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar6 = *(long *)(param_1 + 0x18);
  if (lVar6 == 0) {
    return 0;
  }
  uVar3 = lVar6 + 0x168;
  func_0x000107c2b05c();
  uVar7 = *(ulong *)(lVar6 + 0x170);
  if (uVar7 != 0) {
    uVar8 = uVar7 - 1;
    if ((uVar7 & uVar8) == 0) {
      uVar9 = uVar8 & uVar3;
    }
    else {
      uVar9 = uVar3;
      if (uVar7 <= uVar3) {
        uVar9 = 0;
        if (uVar7 != 0) {
          uVar9 = uVar3 / uVar7;
        }
        uVar9 = uVar3 - uVar9 * uVar7;
      }
    }
    plVar4 = *(long **)(*(long *)(lVar6 + 0x168) + uVar9 * 8);
    if (plVar4 != (long *)0x0) {
      for (plVar4 = (long *)*plVar4; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        uVar5 = plVar4[1];
        if (uVar5 == uVar3) {
          uVar5 = lVar6 + 0x168;
          func_0x000107c2b068(uVar5,plVar4 + 2,param_2);
          if ((uVar5 & 1) != 0) {
            return *(undefined4 *)(plVar4 + 5);
          }
        }
        else {
          if ((uVar7 & uVar8) == 0) {
            uVar5 = uVar5 & uVar8;
          }
          else if (uVar7 <= uVar5) {
            uVar1 = 0;
            if (uVar7 != 0) {
              uVar1 = uVar5 / uVar7;
            }
            uVar5 = uVar5 - uVar1 * uVar7;
          }
          if (uVar5 != uVar9) break;
        }
      }
    }
  }
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (auStack_80,&UNK_10f6a16bb,param_2);
  FUN_10a012db0(auStack_68,auStack_80,&UNK_10f64676f);
  FUN_10a0029c0(auStack_68);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10acb19dc);
  (*pcVar2)();
}



/* Entry: 10acb1a30; end: 10acb1afb;  */

void FUN_10acb1a30(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar2 = *(long *)(param_1 + 0x18) + 400;
    FUN_10acd3c04();
    if (lVar2 == 0) {
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (auStack_50,&UNK_10f6a16d5,param_2);
      FUN_10a012db0(auStack_38,auStack_50,&UNK_10f64676f);
      FUN_10a0029c0(auStack_38);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10acb1ac8);
      (*pcVar1)();
    }
  }
  return;
}



/* Entry: 10acb1afc; end: 10acb1bb3;  */

undefined4 FUN_10acb1afc(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined4 uVar3;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar3 = 0;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x18) + 0x1b8;
    FUN_10acd3c04();
    if (lVar2 == 0) {
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (auStack_50,&UNK_10f6a16fe,param_2);
      FUN_10a012db0(auStack_38,auStack_50,&UNK_10f64676f);
      FUN_10a0029c0(auStack_38);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10acb1b80);
      (*pcVar1)();
    }
    uVar3 = *(undefined4 *)(lVar2 + 0x28);
  }
  return uVar3;
}



/* Entry: 10acb1bb4; end: 10acb1c4f;  */

undefined4 FUN_10acb1bb4(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10acb1698();
    FUN_10a2f8dc8();
    if (param_1 == 0) {
      if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
        plVar1 = (long *)*param_2;
        if (-1 < *(char *)((long)param_2 + 0x17)) {
          plVar1 = param_2;
        }
        func_0x00010ae06f08(1,8,&UNK_10f6a171b,&UNK_10f6a1757,0x91,&UNK_10f6a17a9,in_x6,in_x7,plVar1
                           );
      }
    }
    else {
      uVar2 = *(undefined4 *)(param_1 + 0x34);
    }
  }
  return uVar2;
}



/* Entry: 10acb1c50; end: 10acb1cbf;  */

/* WARNING: Removing unreachable block (ram,0x00010acb2420) */

void FUN_10acb1c50(long param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long *extraout_x8;
  long extraout_x8_00;
  undefined8 *extraout_x8_01;
  long *plVar11;
  ulong *puVar12;
  ulong uVar13;
  long *plVar14;
  ulong *puVar15;
  long *plVar16;
  long lVar17;
  undefined8 uVar18;
  ulong *puVar19;
  long unaff_x22;
  ulong *puVar20;
  code **unaff_x23;
  long lVar21;
  ulong *puVar22;
  undefined4 uVar23;
  double dVar24;
  long *plStack_238;
  long lStack_230;
  float fStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  ulong uStack_200;
  ulong *puStack_1f8;
  long *plStack_1f0;
  long lStack_1e8;
  float fStack_1e0;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  ulong uStack_1b0;
  long lStack_1a8;
  ulong uStack_1a0;
  ulong uStack_190;
  long lStack_188;
  ulong uStack_180;
  long lStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_68;
  
  if ((*(long *)(param_1 + 0x18) == 0) ||
     (lVar10 = *(long *)(*(long *)(param_1 + 0x18) + 200), lVar10 == 0)) {
    FUN_10a00946c(&UNK_10f6a17d4);
  }
  else {
    uVar9 = (ulong)((float)*(int *)(lVar10 + 0x10) * (float)*(int *)(lVar10 + 0x14));
    if (uVar9 <= (ulong)((undefined8 *)*param_2)[1]) {
      if (uVar9 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memmove_11034c660)(*(undefined8 *)*param_2,*(undefined8 *)(lVar10 + 0x28));
      return;
    }
  }
  puVar5 = &UNK_10f6a17fb;
  FUN_10a00946c();
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(long *)(puVar5 + 0x18) == 0) ||
     (lVar10 = *(long *)(*(long *)(puVar5 + 0x18) + 0x120), lVar10 == 0)) {
    *extraout_x8 = 0;
    extraout_x8[1] = 0;
  }
  else {
    lVar17 = *(long *)(lVar10 + 0x40);
    if (lVar17 == 0) {
      lVar17 = *(long *)(lVar10 + 0x18) * (long)*(int *)(lVar10 + 0x14);
    }
    uVar18 = *(undefined8 *)(lVar10 + 0x28);
    ppuVar6 = &PTR___tlv_bootstrap_11340df48;
    (*(code *)PTR___tlv_bootstrap_11340df48)();
    unaff_x22 = *(long *)(*ppuVar6 + 0x870);
    lStack_90 = *(long *)(extraout_x8_00 + 0x128);
    if (lStack_90 != 0) {
      plVar16 = (long *)(lStack_90 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar3) {
          *plVar16 = *plVar16 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lVar21 = *(long *)(unaff_x22 + 0x68);
    lStack_e8 = lVar10;
    lStack_e0 = lStack_90;
    __ZNSt3__115recursive_mutex4lockEv(unaff_x22 + 0x70);
    lVar21 = *(long *)(lVar21 + 0xb8);
    if ((*(byte *)(lVar21 + 0x1e0) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10acb1e30);
      (*pcVar4)();
    }
    lStack_e8 = 0;
    lStack_e0 = 0;
    unaff_x23 = &pcStack_a8;
    pcStack_a8 = FUN_10acb68e0;
    ppuStack_a0 = &PTR_DAT_110c6b570;
    uStack_d8 = 0;
    uStack_d0 = 0;
    lStack_98 = lVar10;
    FUN_10a12c348(&uStack_c8,*(undefined8 *)(lVar21 + 0x50),uVar18,lVar17,&pcStack_a8);
    puVar7 = (undefined8 *)0x38;
    __Znwm();
    puVar7[4] = uStack_c0;
    puVar7[3] = uStack_c8;
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = &PTR_DAT_110ba7910;
    puVar7[6] = uStack_b0;
    puVar7[5] = uStack_b8;
    uStack_b8 = 0;
    uStack_b0 = 0;
    *extraout_x8 = (long)(puVar7 + 3);
    extraout_x8[1] = (long)puVar7;
    (*(code *)*ppuStack_a0)(&ppuStack_a0);
    puVar5 = (undefined *)(unaff_x22 + 0x70);
    __ZNSt3__115recursive_mutex6unlockEv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a12c460(&uStack_b8);
  (*(code *)*ppuStack_a0)(unaff_x23 + 1);
  FUN_10a0d92c8(&uStack_d8);
  __ZNSt3__115recursive_mutex6unlockEv(unaff_x22 + 0x70);
  FUN_10a0d92c8(&lStack_e8);
  __Unwind_Resume();
  *extraout_x8_01 = 0;
  extraout_x8_01[1] = 0;
  plVar16 = *(long **)(puVar5 + 0x28);
  if (plVar16 == (long *)0x0) {
    plVar8 = (long *)0x0;
  }
  else {
    ppuVar6 = &PTR___tlv_bootstrap_11340df48;
    (*(code *)PTR___tlv_bootstrap_11340df48)();
    dVar24 = 0.0;
    if ((*ppuVar6 != (undefined *)0x0) && (lVar10 = *(long *)(*ppuVar6 + 0x850), lVar10 != 0)) {
      dVar24 = *(double *)(lVar10 + 0x18);
    }
    plVar8 = (long *)0xb8;
    __Znwm();
    plVar8[1] = 0;
    plVar8[2] = 0;
    plVar8[3] = (long)&PTR_FUN_110c6a5e0;
    *plVar8 = (long)&PTR_FUN_110c6c180;
    plVar8[4] = 0;
    plVar8[5] = 0;
    *(undefined4 *)(plVar8 + 6) = 0;
    func_0x000107c2b054(plVar8 + 7,&UNK_10f6a0902);
    *(undefined4 *)(plVar8 + 10) = 0x3f800000;
    func_0x000107c2b054(plVar8 + 0xb,&UNK_10f6a0902);
    puVar19 = &uStack_1b0;
    plVar11 = plVar8 + 0xe;
    *plVar11 = 0;
    plVar8[0x10] = 0;
    plVar8[0x11] = -0x4010000000000000;
    puVar20 = (ulong *)(plVar8 + 0x12);
    plVar8[0x13] = 0;
    *puVar20 = 0;
    plVar8[0xf] = 0;
    plVar8[0x15] = 0;
    plVar8[0x14] = 0;
    *(undefined4 *)(plVar8 + 0x16) = 0x3f800000;
    *(int *)(plVar8 + 10) = (int)plVar16[1];
    if (*(char *)((long)plVar16 + 0x27) < '\0') {
      func_0x000107c3192c(&uStack_190,plVar16[2],plVar16[3]);
    }
    else {
      lStack_188 = plVar16[3];
      uStack_190 = plVar16[2];
      uStack_180 = plVar16[4];
    }
    if (*(char *)((long)plVar8 + 0x6f) < '\0') {
      __ZdlPv(plVar8[0xb]);
    }
    plVar8[0xd] = uStack_180;
    plVar8[0xc] = lStack_188;
    plVar8[0xb] = uStack_190;
    uStack_180 = uStack_180 & 0xffffffffffffff;
    uStack_190 = uStack_190 & 0xffffffffffffff00;
    *(int *)(plVar8 + 6) = (int)plVar16[9];
    if (*(char *)((long)plVar16 + 0x67) < '\0') {
      func_0x000107c3192c(&uStack_1b0,plVar16[10],plVar16[0xb]);
    }
    else {
      lStack_1a8 = plVar16[0xb];
      uStack_1b0 = plVar16[10];
      uStack_1a0 = plVar16[0xc];
    }
    if (*(char *)((long)plVar8 + 0x4f) < '\0') {
      __ZdlPv(plVar8[7]);
    }
    plVar8[8] = lStack_1a8;
    plVar8[7] = uStack_1b0;
    plVar8[9] = uStack_1a0;
    uStack_1a0 = uStack_1a0 & 0xffffffffffffff;
    uStack_1b0 = uStack_1b0 & 0xffffffffffffff00;
    plVar8[0x11] = (long)((double)*plVar16 * 0.001 - dVar24);
    FUN_10aca2330(&lStack_1d0,plVar16 + 0xe);
    if (*plVar11 != 0) {
      FUN_10acb6198(plVar11);
      __ZdlPv(*plVar11);
      *plVar11 = 0;
      plVar8[0xf] = 0;
      plVar8[0x10] = 0;
    }
    plVar8[0xf] = lStack_1c8;
    plVar8[0xe] = lStack_1d0;
    plVar8[0x10] = lStack_1c0;
    lStack_1c8 = 0;
    lStack_1c0 = 0;
    lStack_1d0 = 0;
    func_0x00010acb637c(&lStack_1d0);
    puStack_1f8 = (ulong *)0x0;
    uStack_200 = 0;
    lStack_1e8 = 0;
    plStack_1f0 = (long *)0x0;
    fStack_1e0 = 1.0;
    FUN_10acd4108(&uStack_200,(long)(float)(ulong)plVar16[0x14]);
    plVar16 = (long *)plVar16[0x13];
    if (plVar16 != (long *)0x0) {
      do {
        FUN_10aca2330(&lStack_220,plVar16 + 5);
        puVar15 = &uStack_200;
        func_0x000107c2b05c(puVar15,plVar16 + 2);
        puVar22 = puStack_1f8;
        if (puStack_1f8 != (ulong *)0x0) {
          uVar9 = (long)puStack_1f8 - 1;
          if (((ulong)puStack_1f8 & uVar9) == 0) {
            puVar19 = (ulong *)(uVar9 & (ulong)puVar15);
          }
          else {
            puVar19 = puVar15;
            if (puStack_1f8 <= puVar15) {
              uVar13 = 0;
              if (puStack_1f8 != (ulong *)0x0) {
                uVar13 = (ulong)puVar15 / (ulong)puStack_1f8;
              }
              puVar19 = (ulong *)((long)puVar15 - uVar13 * (long)puStack_1f8);
            }
          }
          plVar11 = *(long **)(uStack_200 + (long)puVar19 * 8);
          if (plVar11 != (long *)0x0) {
            for (plVar11 = (long *)*plVar11; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
              puVar12 = (ulong *)plVar11[1];
              if (puVar12 == puVar15) {
                puVar12 = &uStack_200;
                func_0x000107c2b068(puVar12,plVar11 + 2,plVar16 + 2);
                if (((ulong)puVar12 & 1) != 0) goto LAB_10acb22ec;
              }
              else {
                if (((ulong)puVar22 & uVar9) == 0) {
                  puVar12 = (ulong *)((ulong)puVar12 & uVar9);
                }
                else if (puVar22 <= puVar12) {
                  uVar13 = 0;
                  if (puVar22 != (ulong *)0x0) {
                    uVar13 = (ulong)puVar12 / (ulong)puVar22;
                  }
                  puVar12 = (ulong *)((long)puVar12 - uVar13 * (long)puVar22);
                }
                if (puVar12 != puVar19) break;
              }
            }
          }
        }
        plVar11 = (long *)0x40;
        __Znwm();
        plStack_238 = (long *)0x0;
        *plVar11 = 0;
        plVar11[1] = (long)puVar15;
        if (*(char *)((long)plVar16 + 0x27) < '\0') {
          func_0x000107c3192c(plVar11 + 2,plVar16[2],plVar16[3]);
        }
        else {
          lVar17 = plVar16[3];
          lVar10 = plVar16[2];
          plVar11[4] = plVar16[4];
          plVar11[3] = lVar17;
          plVar11[2] = lVar10;
        }
        plVar11[6] = lStack_218;
        plVar11[5] = lStack_220;
        plVar11[7] = lStack_210;
        lStack_218 = 0;
        lStack_210 = 0;
        lStack_220 = 0;
        plStack_238 = (long *)CONCAT71(plStack_238._1_7_,1);
        if ((puVar22 == (ulong *)0x0) || (fStack_1e0 * (float)puVar22 < (float)(lStack_1e8 + 1))) {
          uVar9 = 1;
          if ((ulong *)0x2 < puVar22) {
            uVar9 = (ulong)(((ulong)puVar22 & (long)puVar22 - 1U) != 0);
          }
          uVar9 = uVar9 | (long)puVar22 << 1;
          uVar13 = (ulong)((float)(lStack_1e8 + 1) / fStack_1e0);
          if (uVar9 <= uVar13) {
            uVar9 = uVar13;
          }
          FUN_10acd4108(&uStack_200,uVar9);
          puVar22 = puStack_1f8;
          if (((ulong)puStack_1f8 & (long)puStack_1f8 - 1U) == 0) {
            puVar19 = (ulong *)((long)puStack_1f8 - 1U & (ulong)puVar15);
          }
          else {
            puVar19 = puVar15;
            if (puStack_1f8 <= puVar15) {
              uVar9 = 0;
              if (puStack_1f8 != (ulong *)0x0) {
                uVar9 = (ulong)puVar15 / (ulong)puStack_1f8;
              }
              puVar19 = (ulong *)((long)puVar15 - uVar9 * (long)puStack_1f8);
            }
          }
        }
        plVar14 = *(long **)(uStack_200 + (long)puVar19 * 8);
        if (plVar14 == (long *)0x0) {
          *plVar11 = (long)plStack_1f0;
          *(long ***)(uStack_200 + (long)puVar19 * 8) = &plStack_1f0;
          plStack_1f0 = plVar11;
          if (*plVar11 != 0) {
            puVar15 = *(ulong **)(*plVar11 + 8);
            if (((ulong)puVar22 & (long)puVar22 - 1U) == 0) {
              puVar15 = (ulong *)((ulong)puVar15 & (long)puVar22 - 1U);
            }
            else if (puVar22 <= puVar15) {
              uVar9 = 0;
              if (puVar22 != (ulong *)0x0) {
                uVar9 = (ulong)puVar15 / (ulong)puVar22;
              }
              puVar15 = (ulong *)((long)puVar15 - uVar9 * (long)puVar22);
            }
            *(long **)(uStack_200 + (long)puVar15 * 8) = plVar11;
          }
        }
        else {
          *plVar11 = *plVar14;
          *plVar14 = (long)plVar11;
        }
        lStack_1e8 = lStack_1e8 + 1;
LAB_10acb22ec:
        func_0x00010acb637c(&lStack_220);
        plVar16 = (long *)*plVar16;
      } while (plVar16 != (long *)0x0);
    }
    puVar19 = puStack_1f8;
    uVar9 = uStack_200;
    uStack_200 = 0;
    puStack_1f8 = (ulong *)0x0;
    plStack_238 = plStack_1f0;
    lStack_230 = lStack_1e8;
    fStack_228 = fStack_1e0;
    if (lStack_1e8 != 0) {
      puVar15 = (ulong *)plStack_1f0[1];
      if (((ulong)puVar19 & (long)puVar19 - 1U) == 0) {
        puVar15 = (ulong *)((ulong)puVar15 & (long)puVar19 - 1U);
      }
      else if (puVar19 <= puVar15) {
        uVar13 = 0;
        if (puVar19 != (ulong *)0x0) {
          uVar13 = (ulong)puVar15 / (ulong)puVar19;
        }
        puVar15 = (ulong *)((long)puVar15 - uVar13 * (long)puVar19);
      }
      *(long ***)(uVar9 + (long)puVar15 * 8) = &plStack_238;
      plStack_1f0 = (long *)0x0;
      lStack_1e8 = 0;
    }
    if (plVar8[0x15] != 0) {
      func_0x00010acd4058(plVar8[0x14]);
      plVar8[0x14] = 0;
      lVar10 = plVar8[0x13];
      if (lVar10 != 0) {
        lVar17 = 0;
        do {
          *(undefined8 *)(*puVar20 + lVar17 * 8) = 0;
          lVar17 = lVar17 + 1;
        } while (lVar10 != lVar17);
      }
      plVar8[0x15] = 0;
    }
    uVar13 = *puVar20;
    *puVar20 = uVar9;
    if (uVar13 != 0) {
      __ZdlPv();
    }
    plVar8[0x14] = (long)plStack_238;
    plVar8[0x13] = (long)puVar19;
    plVar8[0x15] = lStack_230;
    *(float *)(plVar8 + 0x16) = fStack_228;
    if (lStack_230 != 0) {
      puVar15 = (ulong *)plStack_238[1];
      if (((ulong)puVar19 & (long)puVar19 - 1U) == 0) {
        puVar15 = (ulong *)((ulong)puVar15 & (long)puVar19 - 1U);
      }
      else if (puVar19 <= puVar15) {
        uVar9 = 0;
        if (puVar19 != (ulong *)0x0) {
          uVar9 = (ulong)puVar15 / (ulong)puVar19;
        }
        puVar15 = (ulong *)((long)puVar15 - uVar9 * (long)puVar19);
      }
      *(long **)(*puVar20 + (long)puVar15 * 8) = plVar8 + 0x14;
      plStack_238 = (long *)0x0;
      lStack_230 = 0;
    }
    func_0x00010acd4058(plStack_238);
    func_0x00010acd4058(plStack_1f0);
    uVar9 = uStack_200;
    uStack_200 = 0;
    if (uVar9 != 0) {
      __ZdlPv();
    }
    *extraout_x8_01 = plVar8 + 3;
    extraout_x8_01[1] = plVar8;
  }
  lVar10 = *(long *)(puVar5 + 0x18);
  if ((lVar10 != 0) &&
     (___dynamic_cast(lVar10,&PTR_DAT_110bef5a8,&PTR_DAT_110bef5e0,0), lVar10 != 0)) {
    puVar7 = (undefined8 *)0x40;
    __Znwm();
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = &PTR_DAT_110c6c1d0;
    uVar23 = *(undefined4 *)(lVar10 + 0x230);
    uVar1 = *(undefined1 *)(lVar10 + 0x234);
    puVar7[5] = 0;
    puVar7[6] = 0;
    puVar7[3] = &PTR_FUN_110c6ae98;
    puVar7[4] = &PTR_FUN_110c6aee8;
    *(undefined4 *)(puVar7 + 7) = uVar23;
    *(undefined1 *)((long)puVar7 + 0x3c) = uVar1;
    *extraout_x8_01 = puVar7 + 4;
    extraout_x8_01[1] = puVar7;
    if (plVar8 != (long *)0x0) {
      plVar16 = plVar8 + 1;
      do {
        lVar10 = *plVar16;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar3) {
          *plVar16 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
  }
  return;
}



/* Entry: 10acb1cc0; end: 10acb1e83;  */

/* WARNING: Removing unreachable block (ram,0x00010acb2420) */

void FUN_10acb1cc0(long *param_1,long param_2)

{
  undefined1 uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined **ppuVar5;
  undefined8 *puVar6;
  long *plVar7;
  long extraout_x8;
  undefined8 *extraout_x8_00;
  long *plVar8;
  ulong *puVar9;
  ulong uVar10;
  long *plVar11;
  ulong *puVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  ulong *puVar16;
  long unaff_x22;
  ulong *puVar17;
  code **unaff_x23;
  long lVar18;
  long lVar19;
  ulong uVar20;
  ulong *puVar21;
  undefined4 uVar22;
  double dVar23;
  long *plStack_228;
  long lStack_220;
  float fStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  ulong uStack_1f0;
  ulong *puStack_1e8;
  long *plStack_1e0;
  long lStack_1d8;
  float fStack_1d0;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  ulong uStack_1a0;
  long lStack_198;
  ulong uStack_190;
  ulong uStack_180;
  long lStack_178;
  ulong uStack_170;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined **ppuStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(long *)(param_2 + 0x18) == 0) ||
     (lVar19 = *(long *)(*(long *)(param_2 + 0x18) + 0x120), lVar19 == 0)) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lVar14 = *(long *)(lVar19 + 0x40);
    if (lVar14 == 0) {
      lVar14 = *(long *)(lVar19 + 0x18) * (long)*(int *)(lVar19 + 0x14);
    }
    uVar15 = *(undefined8 *)(lVar19 + 0x28);
    ppuVar5 = &PTR___tlv_bootstrap_11340df48;
    (*(code *)PTR___tlv_bootstrap_11340df48)();
    unaff_x22 = *(long *)(*ppuVar5 + 0x870);
    lStack_80 = *(long *)(extraout_x8 + 0x128);
    if (lStack_80 != 0) {
      plVar13 = (long *)(lStack_80 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar3) {
          *plVar13 = *plVar13 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lVar18 = *(long *)(unaff_x22 + 0x68);
    lStack_d8 = lVar19;
    lStack_d0 = lStack_80;
    __ZNSt3__115recursive_mutex4lockEv(unaff_x22 + 0x70);
    lVar18 = *(long *)(lVar18 + 0xb8);
    if ((*(byte *)(lVar18 + 0x1e0) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10acb1e30);
      (*pcVar4)();
    }
    lStack_d8 = 0;
    lStack_d0 = 0;
    unaff_x23 = &pcStack_98;
    pcStack_98 = FUN_10acb68e0;
    ppuStack_90 = &PTR_DAT_110c6b570;
    uStack_c8 = 0;
    uStack_c0 = 0;
    lStack_88 = lVar19;
    FUN_10a12c348(&uStack_b8,*(undefined8 *)(lVar18 + 0x50),uVar15,lVar14,&pcStack_98);
    puVar6 = (undefined8 *)0x38;
    __Znwm();
    puVar6[4] = uStack_b0;
    puVar6[3] = uStack_b8;
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = &PTR_DAT_110ba7910;
    puVar6[6] = uStack_a0;
    puVar6[5] = uStack_a8;
    uStack_a8 = 0;
    uStack_a0 = 0;
    *param_1 = (long)(puVar6 + 3);
    param_1[1] = (long)puVar6;
    (*(code *)*ppuStack_90)(&ppuStack_90);
    param_2 = unaff_x22 + 0x70;
    __ZNSt3__115recursive_mutex6unlockEv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a12c460(&uStack_a8);
  (*(code *)*ppuStack_90)(unaff_x23 + 1);
  FUN_10a0d92c8(&uStack_c8);
  __ZNSt3__115recursive_mutex6unlockEv(unaff_x22 + 0x70);
  FUN_10a0d92c8(&lStack_d8);
  __Unwind_Resume();
  *extraout_x8_00 = 0;
  extraout_x8_00[1] = 0;
  plVar13 = *(long **)(param_2 + 0x28);
  if (plVar13 == (long *)0x0) {
    plVar7 = (long *)0x0;
  }
  else {
    ppuVar5 = &PTR___tlv_bootstrap_11340df48;
    (*(code *)PTR___tlv_bootstrap_11340df48)();
    dVar23 = 0.0;
    if ((*ppuVar5 != (undefined *)0x0) && (lVar19 = *(long *)(*ppuVar5 + 0x850), lVar19 != 0)) {
      dVar23 = *(double *)(lVar19 + 0x18);
    }
    plVar7 = (long *)0xb8;
    __Znwm();
    plVar7[1] = 0;
    plVar7[2] = 0;
    plVar7[3] = (long)&PTR_FUN_110c6a5e0;
    *plVar7 = (long)&PTR_FUN_110c6c180;
    plVar7[4] = 0;
    plVar7[5] = 0;
    *(undefined4 *)(plVar7 + 6) = 0;
    func_0x000107c2b054(plVar7 + 7,&UNK_10f6a0902);
    *(undefined4 *)(plVar7 + 10) = 0x3f800000;
    func_0x000107c2b054(plVar7 + 0xb,&UNK_10f6a0902);
    puVar16 = &uStack_1a0;
    plVar8 = plVar7 + 0xe;
    *plVar8 = 0;
    plVar7[0x10] = 0;
    plVar7[0x11] = -0x4010000000000000;
    puVar17 = (ulong *)(plVar7 + 0x12);
    plVar7[0x13] = 0;
    *puVar17 = 0;
    plVar7[0xf] = 0;
    plVar7[0x15] = 0;
    plVar7[0x14] = 0;
    *(undefined4 *)(plVar7 + 0x16) = 0x3f800000;
    *(int *)(plVar7 + 10) = (int)plVar13[1];
    if (*(char *)((long)plVar13 + 0x27) < '\0') {
      func_0x000107c3192c(&uStack_180,plVar13[2],plVar13[3]);
    }
    else {
      lStack_178 = plVar13[3];
      uStack_180 = plVar13[2];
      uStack_170 = plVar13[4];
    }
    if (*(char *)((long)plVar7 + 0x6f) < '\0') {
      __ZdlPv(plVar7[0xb]);
    }
    plVar7[0xd] = uStack_170;
    plVar7[0xc] = lStack_178;
    plVar7[0xb] = uStack_180;
    uStack_170 = uStack_170 & 0xffffffffffffff;
    uStack_180 = uStack_180 & 0xffffffffffffff00;
    *(int *)(plVar7 + 6) = (int)plVar13[9];
    if (*(char *)((long)plVar13 + 0x67) < '\0') {
      func_0x000107c3192c(&uStack_1a0,plVar13[10],plVar13[0xb]);
    }
    else {
      lStack_198 = plVar13[0xb];
      uStack_1a0 = plVar13[10];
      uStack_190 = plVar13[0xc];
    }
    if (*(char *)((long)plVar7 + 0x4f) < '\0') {
      __ZdlPv(plVar7[7]);
    }
    plVar7[8] = lStack_198;
    plVar7[7] = uStack_1a0;
    plVar7[9] = uStack_190;
    uStack_190 = uStack_190 & 0xffffffffffffff;
    uStack_1a0 = uStack_1a0 & 0xffffffffffffff00;
    plVar7[0x11] = (long)((double)*plVar13 * 0.001 - dVar23);
    FUN_10aca2330(&lStack_1c0,plVar13 + 0xe);
    if (*plVar8 != 0) {
      FUN_10acb6198(plVar8);
      __ZdlPv(*plVar8);
      *plVar8 = 0;
      plVar7[0xf] = 0;
      plVar7[0x10] = 0;
    }
    plVar7[0xf] = lStack_1b8;
    plVar7[0xe] = lStack_1c0;
    plVar7[0x10] = lStack_1b0;
    lStack_1b8 = 0;
    lStack_1b0 = 0;
    lStack_1c0 = 0;
    func_0x00010acb637c(&lStack_1c0);
    puStack_1e8 = (ulong *)0x0;
    uStack_1f0 = 0;
    lStack_1d8 = 0;
    plStack_1e0 = (long *)0x0;
    fStack_1d0 = 1.0;
    FUN_10acd4108(&uStack_1f0,(long)(float)(ulong)plVar13[0x14]);
    plVar13 = (long *)plVar13[0x13];
    if (plVar13 != (long *)0x0) {
      do {
        FUN_10aca2330(&lStack_210,plVar13 + 5);
        puVar12 = &uStack_1f0;
        func_0x000107c2b05c(puVar12,plVar13 + 2);
        puVar21 = puStack_1e8;
        if (puStack_1e8 != (ulong *)0x0) {
          uVar20 = (long)puStack_1e8 - 1;
          if (((ulong)puStack_1e8 & uVar20) == 0) {
            puVar16 = (ulong *)(uVar20 & (ulong)puVar12);
          }
          else {
            puVar16 = puVar12;
            if (puStack_1e8 <= puVar12) {
              uVar10 = 0;
              if (puStack_1e8 != (ulong *)0x0) {
                uVar10 = (ulong)puVar12 / (ulong)puStack_1e8;
              }
              puVar16 = (ulong *)((long)puVar12 - uVar10 * (long)puStack_1e8);
            }
          }
          plVar8 = *(long **)(uStack_1f0 + (long)puVar16 * 8);
          if (plVar8 != (long *)0x0) {
            for (plVar8 = (long *)*plVar8; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
              puVar9 = (ulong *)plVar8[1];
              if (puVar9 == puVar12) {
                puVar9 = &uStack_1f0;
                func_0x000107c2b068(puVar9,plVar8 + 2,plVar13 + 2);
                if (((ulong)puVar9 & 1) != 0) goto LAB_10acb22ec;
              }
              else {
                if (((ulong)puVar21 & uVar20) == 0) {
                  puVar9 = (ulong *)((ulong)puVar9 & uVar20);
                }
                else if (puVar21 <= puVar9) {
                  uVar10 = 0;
                  if (puVar21 != (ulong *)0x0) {
                    uVar10 = (ulong)puVar9 / (ulong)puVar21;
                  }
                  puVar9 = (ulong *)((long)puVar9 - uVar10 * (long)puVar21);
                }
                if (puVar9 != puVar16) break;
              }
            }
          }
        }
        plVar8 = (long *)0x40;
        __Znwm();
        plStack_228 = (long *)0x0;
        *plVar8 = 0;
        plVar8[1] = (long)puVar12;
        if (*(char *)((long)plVar13 + 0x27) < '\0') {
          func_0x000107c3192c(plVar8 + 2,plVar13[2],plVar13[3]);
        }
        else {
          lVar14 = plVar13[3];
          lVar19 = plVar13[2];
          plVar8[4] = plVar13[4];
          plVar8[3] = lVar14;
          plVar8[2] = lVar19;
        }
        plVar8[6] = lStack_208;
        plVar8[5] = lStack_210;
        plVar8[7] = lStack_200;
        lStack_208 = 0;
        lStack_200 = 0;
        lStack_210 = 0;
        plStack_228 = (long *)CONCAT71(plStack_228._1_7_,1);
        if ((puVar21 == (ulong *)0x0) || (fStack_1d0 * (float)puVar21 < (float)(lStack_1d8 + 1))) {
          uVar20 = 1;
          if ((ulong *)0x2 < puVar21) {
            uVar20 = (ulong)(((ulong)puVar21 & (long)puVar21 - 1U) != 0);
          }
          uVar20 = uVar20 | (long)puVar21 << 1;
          uVar10 = (ulong)((float)(lStack_1d8 + 1) / fStack_1d0);
          if (uVar20 <= uVar10) {
            uVar20 = uVar10;
          }
          FUN_10acd4108(&uStack_1f0,uVar20);
          puVar21 = puStack_1e8;
          if (((ulong)puStack_1e8 & (long)puStack_1e8 - 1U) == 0) {
            puVar16 = (ulong *)((long)puStack_1e8 - 1U & (ulong)puVar12);
          }
          else {
            puVar16 = puVar12;
            if (puStack_1e8 <= puVar12) {
              uVar20 = 0;
              if (puStack_1e8 != (ulong *)0x0) {
                uVar20 = (ulong)puVar12 / (ulong)puStack_1e8;
              }
              puVar16 = (ulong *)((long)puVar12 - uVar20 * (long)puStack_1e8);
            }
          }
        }
        plVar11 = *(long **)(uStack_1f0 + (long)puVar16 * 8);
        if (plVar11 == (long *)0x0) {
          *plVar8 = (long)plStack_1e0;
          *(long ***)(uStack_1f0 + (long)puVar16 * 8) = &plStack_1e0;
          plStack_1e0 = plVar8;
          if (*plVar8 != 0) {
            puVar12 = *(ulong **)(*plVar8 + 8);
            if (((ulong)puVar21 & (long)puVar21 - 1U) == 0) {
              puVar12 = (ulong *)((ulong)puVar12 & (long)puVar21 - 1U);
            }
            else if (puVar21 <= puVar12) {
              uVar20 = 0;
              if (puVar21 != (ulong *)0x0) {
                uVar20 = (ulong)puVar12 / (ulong)puVar21;
              }
              puVar12 = (ulong *)((long)puVar12 - uVar20 * (long)puVar21);
            }
            *(long **)(uStack_1f0 + (long)puVar12 * 8) = plVar8;
          }
        }
        else {
          *plVar8 = *plVar11;
          *plVar11 = (long)plVar8;
        }
        lStack_1d8 = lStack_1d8 + 1;
LAB_10acb22ec:
        func_0x00010acb637c(&lStack_210);
        plVar13 = (long *)*plVar13;
      } while (plVar13 != (long *)0x0);
    }
    puVar16 = puStack_1e8;
    uVar20 = uStack_1f0;
    uStack_1f0 = 0;
    puStack_1e8 = (ulong *)0x0;
    plStack_228 = plStack_1e0;
    lStack_220 = lStack_1d8;
    fStack_218 = fStack_1d0;
    if (lStack_1d8 != 0) {
      puVar12 = (ulong *)plStack_1e0[1];
      if (((ulong)puVar16 & (long)puVar16 - 1U) == 0) {
        puVar12 = (ulong *)((ulong)puVar12 & (long)puVar16 - 1U);
      }
      else if (puVar16 <= puVar12) {
        uVar10 = 0;
        if (puVar16 != (ulong *)0x0) {
          uVar10 = (ulong)puVar12 / (ulong)puVar16;
        }
        puVar12 = (ulong *)((long)puVar12 - uVar10 * (long)puVar16);
      }
      *(long ***)(uVar20 + (long)puVar12 * 8) = &plStack_228;
      plStack_1e0 = (long *)0x0;
      lStack_1d8 = 0;
    }
    if (plVar7[0x15] != 0) {
      func_0x00010acd4058(plVar7[0x14]);
      plVar7[0x14] = 0;
      lVar19 = plVar7[0x13];
      if (lVar19 != 0) {
        lVar14 = 0;
        do {
          *(undefined8 *)(*puVar17 + lVar14 * 8) = 0;
          lVar14 = lVar14 + 1;
        } while (lVar19 != lVar14);
      }
      plVar7[0x15] = 0;
    }
    uVar10 = *puVar17;
    *puVar17 = uVar20;
    if (uVar10 != 0) {
      __ZdlPv();
    }
    plVar7[0x14] = (long)plStack_228;
    plVar7[0x13] = (long)puVar16;
    plVar7[0x15] = lStack_220;
    *(float *)(plVar7 + 0x16) = fStack_218;
    if (lStack_220 != 0) {
      puVar12 = (ulong *)plStack_228[1];
      if (((ulong)puVar16 & (long)puVar16 - 1U) == 0) {
        puVar12 = (ulong *)((ulong)puVar12 & (long)puVar16 - 1U);
      }
      else if (puVar16 <= puVar12) {
        uVar20 = 0;
        if (puVar16 != (ulong *)0x0) {
          uVar20 = (ulong)puVar12 / (ulong)puVar16;
        }
        puVar12 = (ulong *)((long)puVar12 - uVar20 * (long)puVar16);
      }
      *(long **)(*puVar17 + (long)puVar12 * 8) = plVar7 + 0x14;
      plStack_228 = (long *)0x0;
      lStack_220 = 0;
    }
    func_0x00010acd4058(plStack_228);
    func_0x00010acd4058(plStack_1e0);
    uVar20 = uStack_1f0;
    uStack_1f0 = 0;
    if (uVar20 != 0) {
      __ZdlPv();
    }
    *extraout_x8_00 = plVar7 + 3;
    extraout_x8_00[1] = plVar7;
  }
  lVar19 = *(long *)(param_2 + 0x18);
  if ((lVar19 != 0) &&
     (___dynamic_cast(lVar19,&PTR_DAT_110bef5a8,&PTR_DAT_110bef5e0,0), lVar19 != 0)) {
    puVar6 = (undefined8 *)0x40;
    __Znwm();
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = &PTR_DAT_110c6c1d0;
    uVar22 = *(undefined4 *)(lVar19 + 0x230);
    uVar1 = *(undefined1 *)(lVar19 + 0x234);
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[3] = &PTR_FUN_110c6ae98;
    puVar6[4] = &PTR_FUN_110c6aee8;
    *(undefined4 *)(puVar6 + 7) = uVar22;
    *(undefined1 *)((long)puVar6 + 0x3c) = uVar1;
    *extraout_x8_00 = puVar6 + 4;
    extraout_x8_00[1] = puVar6;
    if (plVar7 != (long *)0x0) {
      plVar13 = plVar7 + 1;
      do {
        lVar19 = *plVar13;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar3) {
          *plVar13 = lVar19 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar19 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
  }
  return;
}



/* Entry: 10acb1e84; end: 10acb25cb;  */

/* WARNING: Removing unreachable block (ram,0x00010acb2420) */

void FUN_10acb1e84(undefined8 *param_1,long param_2)

{
  undefined1 uVar1;
  char cVar2;
  bool bVar3;
  undefined **ppuVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  ulong *puVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  ulong *puVar13;
  long *plVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong uVar17;
  ulong *puVar18;
  undefined4 uVar19;
  double dVar20;
  long *plStack_148;
  long lStack_140;
  float fStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  ulong uStack_110;
  ulong *puStack_108;
  long *plStack_100;
  long lStack_f8;
  float fStack_f0;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  ulong uStack_c0;
  long lStack_b8;
  ulong uStack_b0;
  ulong uStack_a0;
  long lStack_98;
  ulong uStack_90;
  
  *param_1 = 0;
  param_1[1] = 0;
  plVar14 = *(long **)(param_2 + 0x28);
  if (plVar14 == (long *)0x0) {
    plVar5 = (long *)0x0;
  }
  else {
    ppuVar4 = &PTR___tlv_bootstrap_11340df48;
    (*(code *)PTR___tlv_bootstrap_11340df48)();
    dVar20 = 0.0;
    if ((*ppuVar4 != (undefined *)0x0) && (lVar7 = *(long *)(*ppuVar4 + 0x850), lVar7 != 0)) {
      dVar20 = *(double *)(lVar7 + 0x18);
    }
    plVar5 = (long *)0xb8;
    __Znwm();
    plVar5[1] = 0;
    plVar5[2] = 0;
    plVar5[3] = (long)&PTR_FUN_110c6a5e0;
    *plVar5 = (long)&PTR_FUN_110c6c180;
    plVar5[4] = 0;
    plVar5[5] = 0;
    *(undefined4 *)(plVar5 + 6) = 0;
    func_0x000107c2b054(plVar5 + 7,&UNK_10f6a0902);
    *(undefined4 *)(plVar5 + 10) = 0x3f800000;
    func_0x000107c2b054(plVar5 + 0xb,&UNK_10f6a0902);
    puVar15 = &uStack_c0;
    plVar8 = plVar5 + 0xe;
    *plVar8 = 0;
    plVar5[0x10] = 0;
    plVar5[0x11] = -0x4010000000000000;
    puVar16 = (ulong *)(plVar5 + 0x12);
    plVar5[0x13] = 0;
    *puVar16 = 0;
    plVar5[0xf] = 0;
    plVar5[0x15] = 0;
    plVar5[0x14] = 0;
    *(undefined4 *)(plVar5 + 0x16) = 0x3f800000;
    *(int *)(plVar5 + 10) = (int)plVar14[1];
    if (*(char *)((long)plVar14 + 0x27) < '\0') {
      func_0x000107c3192c(&uStack_a0,plVar14[2],plVar14[3]);
    }
    else {
      lStack_98 = plVar14[3];
      uStack_a0 = plVar14[2];
      uStack_90 = plVar14[4];
    }
    if (*(char *)((long)plVar5 + 0x6f) < '\0') {
      __ZdlPv(plVar5[0xb]);
    }
    plVar5[0xd] = uStack_90;
    plVar5[0xc] = lStack_98;
    plVar5[0xb] = uStack_a0;
    uStack_90 = uStack_90 & 0xffffffffffffff;
    uStack_a0 = uStack_a0 & 0xffffffffffffff00;
    *(int *)(plVar5 + 6) = (int)plVar14[9];
    if (*(char *)((long)plVar14 + 0x67) < '\0') {
      func_0x000107c3192c(&uStack_c0,plVar14[10],plVar14[0xb]);
    }
    else {
      lStack_b8 = plVar14[0xb];
      uStack_c0 = plVar14[10];
      uStack_b0 = plVar14[0xc];
    }
    if (*(char *)((long)plVar5 + 0x4f) < '\0') {
      __ZdlPv(plVar5[7]);
    }
    plVar5[8] = lStack_b8;
    plVar5[7] = uStack_c0;
    plVar5[9] = uStack_b0;
    uStack_b0 = uStack_b0 & 0xffffffffffffff;
    uStack_c0 = uStack_c0 & 0xffffffffffffff00;
    plVar5[0x11] = (long)((double)*plVar14 * 0.001 - dVar20);
    FUN_10aca2330(&lStack_e0,plVar14 + 0xe);
    if (*plVar8 != 0) {
      FUN_10acb6198(plVar8);
      __ZdlPv(*plVar8);
      *plVar8 = 0;
      plVar5[0xf] = 0;
      plVar5[0x10] = 0;
    }
    plVar5[0xf] = lStack_d8;
    plVar5[0xe] = lStack_e0;
    plVar5[0x10] = lStack_d0;
    lStack_d8 = 0;
    lStack_d0 = 0;
    lStack_e0 = 0;
    func_0x00010acb637c(&lStack_e0);
    puStack_108 = (ulong *)0x0;
    uStack_110 = 0;
    lStack_f8 = 0;
    plStack_100 = (long *)0x0;
    fStack_f0 = 1.0;
    FUN_10acd4108(&uStack_110,(long)(float)(ulong)plVar14[0x14]);
    plVar14 = (long *)plVar14[0x13];
    if (plVar14 != (long *)0x0) {
      do {
        FUN_10aca2330(&lStack_130,plVar14 + 5);
        puVar13 = &uStack_110;
        func_0x000107c2b05c(puVar13,plVar14 + 2);
        puVar18 = puStack_108;
        if (puStack_108 != (ulong *)0x0) {
          uVar17 = (long)puStack_108 - 1;
          if (((ulong)puStack_108 & uVar17) == 0) {
            puVar15 = (ulong *)(uVar17 & (ulong)puVar13);
          }
          else {
            puVar15 = puVar13;
            if (puStack_108 <= puVar13) {
              uVar10 = 0;
              if (puStack_108 != (ulong *)0x0) {
                uVar10 = (ulong)puVar13 / (ulong)puStack_108;
              }
              puVar15 = (ulong *)((long)puVar13 - uVar10 * (long)puStack_108);
            }
          }
          plVar8 = *(long **)(uStack_110 + (long)puVar15 * 8);
          if (plVar8 != (long *)0x0) {
            for (plVar8 = (long *)*plVar8; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
              puVar9 = (ulong *)plVar8[1];
              if (puVar9 == puVar13) {
                puVar9 = &uStack_110;
                func_0x000107c2b068(puVar9,plVar8 + 2,plVar14 + 2);
                if (((ulong)puVar9 & 1) != 0) goto LAB_10acb22ec;
              }
              else {
                if (((ulong)puVar18 & uVar17) == 0) {
                  puVar9 = (ulong *)((ulong)puVar9 & uVar17);
                }
                else if (puVar18 <= puVar9) {
                  uVar10 = 0;
                  if (puVar18 != (ulong *)0x0) {
                    uVar10 = (ulong)puVar9 / (ulong)puVar18;
                  }
                  puVar9 = (ulong *)((long)puVar9 - uVar10 * (long)puVar18);
                }
                if (puVar9 != puVar15) break;
              }
            }
          }
        }
        plVar8 = (long *)0x40;
        __Znwm();
        plStack_148 = (long *)0x0;
        *plVar8 = 0;
        plVar8[1] = (long)puVar13;
        if (*(char *)((long)plVar14 + 0x27) < '\0') {
          func_0x000107c3192c(plVar8 + 2,plVar14[2],plVar14[3]);
        }
        else {
          lVar12 = plVar14[3];
          lVar7 = plVar14[2];
          plVar8[4] = plVar14[4];
          plVar8[3] = lVar12;
          plVar8[2] = lVar7;
        }
        plVar8[6] = lStack_128;
        plVar8[5] = lStack_130;
        plVar8[7] = lStack_120;
        lStack_128 = 0;
        lStack_120 = 0;
        lStack_130 = 0;
        plStack_148 = (long *)CONCAT71(plStack_148._1_7_,1);
        if ((puVar18 == (ulong *)0x0) || (fStack_f0 * (float)puVar18 < (float)(lStack_f8 + 1))) {
          uVar17 = 1;
          if ((ulong *)0x2 < puVar18) {
            uVar17 = (ulong)(((ulong)puVar18 & (long)puVar18 - 1U) != 0);
          }
          uVar17 = uVar17 | (long)puVar18 << 1;
          uVar10 = (ulong)((float)(lStack_f8 + 1) / fStack_f0);
          if (uVar17 <= uVar10) {
            uVar17 = uVar10;
          }
          FUN_10acd4108(&uStack_110,uVar17);
          puVar18 = puStack_108;
          if (((ulong)puStack_108 & (long)puStack_108 - 1U) == 0) {
            puVar15 = (ulong *)((long)puStack_108 - 1U & (ulong)puVar13);
          }
          else {
            puVar15 = puVar13;
            if (puStack_108 <= puVar13) {
              uVar17 = 0;
              if (puStack_108 != (ulong *)0x0) {
                uVar17 = (ulong)puVar13 / (ulong)puStack_108;
              }
              puVar15 = (ulong *)((long)puVar13 - uVar17 * (long)puStack_108);
            }
          }
        }
        plVar11 = *(long **)(uStack_110 + (long)puVar15 * 8);
        if (plVar11 == (long *)0x0) {
          *plVar8 = (long)plStack_100;
          *(long ***)(uStack_110 + (long)puVar15 * 8) = &plStack_100;
          plStack_100 = plVar8;
          if (*plVar8 != 0) {
            puVar13 = *(ulong **)(*plVar8 + 8);
            if (((ulong)puVar18 & (long)puVar18 - 1U) == 0) {
              puVar13 = (ulong *)((ulong)puVar13 & (long)puVar18 - 1U);
            }
            else if (puVar18 <= puVar13) {
              uVar17 = 0;
              if (puVar18 != (ulong *)0x0) {
                uVar17 = (ulong)puVar13 / (ulong)puVar18;
              }
              puVar13 = (ulong *)((long)puVar13 - uVar17 * (long)puVar18);
            }
            *(long **)(uStack_110 + (long)puVar13 * 8) = plVar8;
          }
        }
        else {
          *plVar8 = *plVar11;
          *plVar11 = (long)plVar8;
        }
        lStack_f8 = lStack_f8 + 1;
LAB_10acb22ec:
        func_0x00010acb637c(&lStack_130);
        plVar14 = (long *)*plVar14;
      } while (plVar14 != (long *)0x0);
    }
    puVar15 = puStack_108;
    uVar17 = uStack_110;
    uStack_110 = 0;
    puStack_108 = (ulong *)0x0;
    plStack_148 = plStack_100;
    lStack_140 = lStack_f8;
    fStack_138 = fStack_f0;
    if (lStack_f8 != 0) {
      puVar13 = (ulong *)plStack_100[1];
      if (((ulong)puVar15 & (long)puVar15 - 1U) == 0) {
        puVar13 = (ulong *)((ulong)puVar13 & (long)puVar15 - 1U);
      }
      else if (puVar15 <= puVar13) {
        uVar10 = 0;
        if (puVar15 != (ulong *)0x0) {
          uVar10 = (ulong)puVar13 / (ulong)puVar15;
        }
        puVar13 = (ulong *)((long)puVar13 - uVar10 * (long)puVar15);
      }
      *(long ***)(uVar17 + (long)puVar13 * 8) = &plStack_148;
      plStack_100 = (long *)0x0;
      lStack_f8 = 0;
    }
    if (plVar5[0x15] != 0) {
      func_0x00010acd4058(plVar5[0x14]);
      plVar5[0x14] = 0;
      lVar7 = plVar5[0x13];
      if (lVar7 != 0) {
        lVar12 = 0;
        do {
          *(undefined8 *)(*puVar16 + lVar12 * 8) = 0;
          lVar12 = lVar12 + 1;
        } while (lVar7 != lVar12);
      }
      plVar5[0x15] = 0;
    }
    uVar10 = *puVar16;
    *puVar16 = uVar17;
    if (uVar10 != 0) {
      __ZdlPv();
    }
    plVar5[0x14] = (long)plStack_148;
    plVar5[0x13] = (long)puVar15;
    plVar5[0x15] = lStack_140;
    *(float *)(plVar5 + 0x16) = fStack_138;
    if (lStack_140 != 0) {
      puVar13 = (ulong *)plStack_148[1];
      if (((ulong)puVar15 & (long)puVar15 - 1U) == 0) {
        puVar13 = (ulong *)((ulong)puVar13 & (long)puVar15 - 1U);
      }
      else if (puVar15 <= puVar13) {
        uVar17 = 0;
        if (puVar15 != (ulong *)0x0) {
          uVar17 = (ulong)puVar13 / (ulong)puVar15;
        }
        puVar13 = (ulong *)((long)puVar13 - uVar17 * (long)puVar15);
      }
      *(long **)(*puVar16 + (long)puVar13 * 8) = plVar5 + 0x14;
      plStack_148 = (long *)0x0;
      lStack_140 = 0;
    }
    func_0x00010acd4058(plStack_148);
    func_0x00010acd4058(plStack_100);
    uVar17 = uStack_110;
    uStack_110 = 0;
    if (uVar17 != 0) {
      __ZdlPv();
    }
    *param_1 = plVar5 + 3;
    param_1[1] = plVar5;
  }
  lVar7 = *(long *)(param_2 + 0x18);
  if ((lVar7 != 0) && (___dynamic_cast(lVar7,&PTR_DAT_110bef5a8,&PTR_DAT_110bef5e0,0), lVar7 != 0))
  {
    puVar6 = (undefined8 *)0x40;
    __Znwm();
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = &PTR_DAT_110c6c1d0;
    uVar19 = *(undefined4 *)(lVar7 + 0x230);
    uVar1 = *(undefined1 *)(lVar7 + 0x234);
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[3] = &PTR_FUN_110c6ae98;
    puVar6[4] = &PTR_FUN_110c6aee8;
    *(undefined4 *)(puVar6 + 7) = uVar19;
    *(undefined1 *)((long)puVar6 + 0x3c) = uVar1;
    *param_1 = puVar6 + 4;
    param_1[1] = puVar6;
    if (plVar5 != (long *)0x0) {
      plVar14 = plVar5 + 1;
      do {
        lVar7 = *plVar14;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar3) {
          *plVar14 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
  }
  return;
}



/* Entry: 10acb25cc; end: 10acb26eb;  */

undefined1  [16] FUN_10acb25cc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xc;
  auVar1._0_8_ = &UNK_10f6a1ad2;
  return auVar1;
}



/* Entry: 10acb26ec; end: 10acb2a1b;  */

void FUN_10acb26ec(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f6a1ad2,0xc);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c6c2a8;
  pppuVar2 = (undefined8 ***)&UNK_10f6a0902;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c6c2a8;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f6a153a,FUN_10acdb14c,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f6a183b,FUN_10acdb26c,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f6a1542,FUN_10acdb328,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f3d0f37,FUN_10acdb3e0,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f68f0dc,FUN_10acdb498,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f410265,FUN_10acdb550,0);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f6a1ad2,0xc);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10acb2a00);
  (*pcVar6)();
}



/* Entry: 10acb2a1c; end: 10acb2b1b;  */

void FUN_10acb2a1c(undefined8 param_1)

{
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puStack_a8 = (undefined *)0x0;
  uStack_a0 = 0xffffffff00000001;
  uStack_98 = CONCAT44(uStack_98._4_4_,0xffffffff);
  puStack_90 = &UNK_10f6a0902;
  uStack_88 = 0;
  uStack_78 = 0;
  puStack_80 = (undefined *)0x0;
  uStack_70 = 0x17a;
  uStack_68 = CONCAT44(uStack_68._4_4_,0xffffffff);
  FUN_10acdb608(param_1,&puStack_a8);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f6a154c;
  uStack_88 = 0xffffffffffffffff;
  puStack_90 = (undefined *)0x100000064;
  puStack_80 = &UNK_10f6a0902;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x17a;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10acdb7dc();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f6a1847;
  uStack_88 = 0xffffffffffffffff;
  puStack_90 = (undefined *)0x100000064;
  puStack_80 = &UNK_10f6a0902;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x17a;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010acdb950(param_1,&puStack_a8);
  FUN_10acdba5c(param_1);
  return;
}



/* Entry: 10acb2b1c; end: 10acb2c1b;  */

void FUN_10acb2b1c(undefined8 param_1)

{
  undefined1 uStack_99;
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
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6a184d;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x90;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10acb2c1c(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f6a1865;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x90;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_99 = 0;
  FUN_10acb2c74(param_1,&puStack_98,&uStack_99);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f6a1870;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x90;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_99 = 1;
  FUN_10acb2c74(param_1,&puStack_98,&uStack_99);
  FUN_10a003ff4(param_1);
  return;
}



/* Entry: 10acb2c1c; end: 10acb2c73;  */

ulong FUN_10acb2c1c(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,*param_2);
  }
  return param_1;
}



/* Entry: 10acb2c74; end: 10acb2ccb;  */

ulong FUN_10acb2c74(ulong param_1,undefined8 *param_2,undefined1 *param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10acdbb18(param_1,*param_2,*param_3);
  }
  return param_1;
}



/* Entry: 10acb2ccc; end: 10acb307b;  */

undefined8 * FUN_10acb2ccc(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long *plVar12;
  long **pplVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  undefined4 uStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  undefined4 uStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  undefined8 uStack_1a4;
  undefined8 uStack_19c;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined8 uStack_18c;
  undefined8 uStack_184;
  undefined4 uStack_17c;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  float fStack_158;
  float fStack_154;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 *puStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  long *plStack_e0;
  long lStack_d8;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  long **pplStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0x3f80000000000000;
  *(undefined8 *)((long)param_1 + 0x44) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110c6abb8;
  *(undefined2 *)(param_1 + 3) = 1;
  *(undefined1 *)((long)param_1 + 0x1a) = 0;
  *(undefined8 *)((long)param_1 + 0x54) = 0x3f80000000000000;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  plVar12 = param_1 + 0xf;
  *plVar12 = 0;
  *(undefined8 *)((long)param_1 + 0x5c) = 0;
  *(undefined8 *)((long)param_1 + 0x6c) = 0;
  *(undefined8 *)((long)param_1 + 100) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)*param_3;
  uStack_90 = param_2;
  FUN_10acb307c();
  puVar7 = (undefined8 *)&uStack_e8;
  FUN_10a0d0194(&lStack_a0);
  FUN_10ab6e728();
  if (*(char *)((long)puVar7 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_80,*puVar7,puVar7[1]);
  }
  else {
    plStack_78 = (long *)puVar7[1];
    uStack_80 = *puVar7;
    lStack_70 = puVar7[2];
  }
  uStack_68 = puVar7[3];
  uStack_50 = *(undefined4 *)(puVar7 + 6);
  uStack_58 = puVar7[5];
  uStack_60 = puVar7[4];
  pplVar13 = (long **)&uStack_e8;
  FUN_10ab6f520(&uStack_e8,&uStack_80,1);
  lVar9 = lStack_a0;
  *(undefined4 *)(lStack_a0 + 0xf0) = uStack_e8;
  if ((long **)(lStack_a0 + 0xf0) != pplVar13) {
    pplVar13 = &plStack_e0;
    FUN_10a1903c4(lStack_a0 + 0xf8,plStack_e0,lStack_d8,
                  (lStack_d8 - (long)plStack_e0 >> 3) * 0x6db6db6db6db6db7);
  }
  *(undefined8 *)(lVar9 + 0x118) = uStack_c0;
  *(undefined8 *)(lVar9 + 0x110) = uStack_c8;
  *(undefined8 *)(lVar9 + 0x128) = uStack_b0;
  *(undefined8 *)(lVar9 + 0x120) = uStack_b8;
  *(undefined8 *)(lVar9 + 0x130) = uStack_a8;
  pplStack_88 = &plStack_e0;
  func_0x00010a190844(&pplStack_88);
  if (lStack_70 < 0) {
    __ZdlPv(uStack_80);
  }
  *(undefined8 *)(lStack_a0 + 0xe8) = 1;
  lVar9 = *(long *)(*param_3 + 0x38);
  lVar2 = *(long *)(*param_3 + 0x40);
  FUN_10a0cf2cc(lStack_a0 + 0x10,lVar9,lVar2,lVar2 - lVar9);
  lVar9 = *(long *)(*param_3 + 0x50);
  lVar2 = *(long *)(*param_3 + 0x58);
  FUN_10a0cf2cc(lStack_a0 + 0x28,lVar9,lVar2,lVar2 - lVar9);
  FUN_10ab4e0a4(lStack_a0);
  uStack_80 = 0;
  plVar8 = &lStack_a0;
  FUN_10a678318(&uStack_e8,&pplStack_88,&uStack_80);
  plVar6 = (long *)CONCAT44(uStack_e4,uStack_e8);
  if (*(char *)((long)plVar6 + 0xb9) != '\x01') {
    *(undefined1 *)((long)plVar6 + 0xb9) = 1;
    (**(code **)(*plVar6 + 0xa0))();
    plVar6 = (long *)CONCAT44(uStack_e4,uStack_e8);
  }
  if (*(char *)((long)plVar6 + 0xba) != '\x01') {
    *(undefined1 *)((long)plVar6 + 0xba) = 1;
    (**(code **)(*plVar6 + 0xa0))();
  }
  FUN_10a1921d0(&uStack_80,&uStack_90,&uStack_e8);
  puVar7 = &uStack_80;
  plVar5 = plVar12;
  FUN_10a192264();
  plVar6 = plStack_78;
  if (plStack_78 != (long *)0x0) {
    plVar1 = plStack_78 + 1;
    do {
      lVar9 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar5 = plVar6;
    }
  }
  if (plStack_e0 != (long *)0x0) {
    plVar6 = plStack_e0 + 1;
    do {
      lVar9 = *plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar5 = plStack_e0;
    }
  }
  if (plStack_98 != (long *)0x0) {
    plVar6 = plStack_98 + 1;
    do {
      lVar9 = *plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      plVar5 = plStack_98;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_1;
  }
  ___stack_chk_fail();
  pplStack_88 = pplVar13;
  func_0x00010a190844(&pplStack_88);
  if (lStack_70 < 0) {
    __ZdlPv(uStack_80);
  }
  FUN_10a0cfe2c(&lStack_a0);
  FUN_10a0e3194(plVar12);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(plStack_98);
  __Unwind_Resume();
  plStack_110 = plStack_98;
  pcStack_f8 = FUN_10acb307c;
  lVar9 = *(long *)(*plVar8 + 0x2c);
  *(undefined4 *)(plVar5 + 0xe) = *(undefined4 *)(*plVar8 + 0x34);
  plVar5[0xd] = lVar9;
  uVar10 = *(undefined8 *)(*plVar8 + 0x20);
  *(undefined4 *)((long)plVar5 + 100) = *(undefined4 *)(*plVar8 + 0x28);
  *(undefined8 *)((long)plVar5 + 0x5c) = uVar10;
  lVar9 = *plVar8;
  *(bool *)((long)plVar5 + 0x19) = *(char *)(lVar9 + 0x68) != '\0';
  *(undefined1 *)((long)plVar5 + 0x1a) = *(undefined1 *)(lVar9 + 0x69);
  puVar7 = puVar7 + 0x1a9;
  puStack_108 = param_1;
  puStack_100 = &stack0xfffffffffffffff0;
  FUN_10a5aeb74(puVar7,&PTR_DAT_110be7540);
  lVar9 = 2;
  puVar11 = puVar7;
  do {
    puVar11 = (undefined8 *)puVar11[1];
    lVar9 = lVar9 + -1;
  } while (puVar11 != puVar7);
  if (lVar9 == 0) {
    puVar7 = *(undefined8 **)(puVar7[1] + 0x28);
    FUN_10a4a5f38(&uStack_150,puVar7,*plVar8 + 4,*plVar8 + 0x10);
  }
  else {
    lVar9 = *plVar8;
    uStack_190 = 0x3f800000;
    uStack_184 = 0;
    uStack_18c = 0;
    uStack_17c = 0x3f800000;
    uStack_178 = 0;
    uStack_170 = 0;
    uStack_168 = 0x3f800000;
    fVar14 = *(float *)(lVar9 + 0xc) * 0.0;
    fVar15 = (float)*(undefined8 *)(lVar9 + 4);
    fVar16 = fVar15 * 0.0;
    fVar17 = (float)((ulong)*(undefined8 *)(lVar9 + 4) >> 0x20);
    fVar18 = fVar17 * 0.0;
    uVar10 = NEON_rev64(CONCAT44(fVar18,fVar16),4);
    fVar16 = fVar16 + fVar18;
    uStack_160 = CONCAT44(fVar17 + (float)((ulong)uVar10 >> 0x20) + fVar14 + 0.0,
                          fVar15 + (float)uVar10 + fVar14 + 0.0);
    fStack_158 = *(float *)(lVar9 + 0xc) + fVar16 + 0.0;
    fStack_154 = fVar16 + fVar14 + 1.0;
    fVar14 = *(float *)(lVar9 + 0x10);
    fVar15 = *(float *)(lVar9 + 0x14);
    fVar17 = *(float *)(lVar9 + 0x18);
    fVar16 = *(float *)(lVar9 + 0x1c);
    fStack_1d0 = (fVar15 * fVar15 + fVar17 * fVar17) * -2.0 + 1.0;
    fStack_1cc = fVar14 * fVar15 + fVar17 * fVar16;
    fStack_1cc = fStack_1cc + fStack_1cc;
    fStack_1c8 = fVar14 * fVar17 - fVar15 * fVar16;
    fStack_1c8 = fStack_1c8 + fStack_1c8;
    fStack_1c0 = fVar14 * fVar15 - fVar17 * fVar16;
    fStack_1c0 = fStack_1c0 + fStack_1c0;
    fStack_1bc = (fVar14 * fVar14 + fVar17 * fVar17) * -2.0 + 1.0;
    fStack_1b8 = fVar15 * fVar17 + fVar14 * fVar16;
    fStack_1b8 = fStack_1b8 + fStack_1b8;
    fStack_1b0 = fVar14 * fVar17 + fVar15 * fVar16;
    fStack_1b0 = fStack_1b0 + fStack_1b0;
    fStack_1ac = fVar15 * fVar17 - fVar14 * fVar16;
    fStack_1ac = fStack_1ac + fStack_1ac;
    uStack_1c4 = 0;
    uStack_1b4 = 0;
    fStack_1a8 = (fVar14 * fVar14 + fVar15 * fVar15) * -2.0 + 1.0;
    uStack_19c = 0;
    uStack_1a4 = 0;
    uStack_194 = 0x3f800000;
    puVar7 = (undefined8 *)&uStack_190;
    func_0x000109519fd0(&uStack_150,puVar7,&fStack_1d0);
  }
  *(undefined8 *)((long)plVar5 + 0x24) = uStack_148;
  *(undefined8 *)((long)plVar5 + 0x1c) = uStack_150;
  *(undefined8 *)((long)plVar5 + 0x34) = uStack_138;
  *(undefined8 *)((long)plVar5 + 0x2c) = uStack_140;
  *(undefined8 *)((long)plVar5 + 0x44) = uStack_128;
  *(undefined8 *)((long)plVar5 + 0x3c) = uStack_130;
  *(undefined8 *)((long)plVar5 + 0x54) = uStack_118;
  *(undefined8 *)((long)plVar5 + 0x4c) = uStack_120;
  return puVar7;
}



/* Entry: 10acb307c; end: 10acb3277;  */

void FUN_10acb307c(long param_1,long param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  undefined4 uStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  undefined4 uStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  undefined8 uStack_b4;
  undefined8 uStack_ac;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined8 uStack_9c;
  undefined8 uStack_94;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  float fStack_68;
  float fStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar3 = *(undefined8 *)(*param_3 + 0x2c);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(*param_3 + 0x34);
  *(undefined8 *)(param_1 + 0x68) = uVar3;
  uVar3 = *(undefined8 *)(*param_3 + 0x20);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(*param_3 + 0x28);
  *(undefined8 *)(param_1 + 0x5c) = uVar3;
  lVar1 = *param_3;
  *(bool *)(param_1 + 0x19) = *(char *)(lVar1 + 0x68) != '\0';
  *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(lVar1 + 0x69);
  param_2 = param_2 + 0xd48;
  FUN_10a5aeb74(param_2,&PTR_DAT_110be7540);
  lVar2 = 2;
  lVar1 = param_2;
  do {
    lVar1 = *(long *)(lVar1 + 8);
    lVar2 = lVar2 + -1;
  } while (lVar1 != param_2);
  if (lVar2 == 0) {
    FUN_10a4a5f38(&uStack_60,*(undefined8 *)(*(long *)(param_2 + 8) + 0x28),*param_3 + 4,
                  *param_3 + 0x10);
  }
  else {
    lVar1 = *param_3;
    uStack_a0 = 0x3f800000;
    uStack_94 = 0;
    uStack_9c = 0;
    uStack_8c = 0x3f800000;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0x3f800000;
    fVar4 = *(float *)(lVar1 + 0xc) * 0.0;
    fVar5 = (float)*(undefined8 *)(lVar1 + 4);
    fVar6 = fVar5 * 0.0;
    fVar7 = (float)((ulong)*(undefined8 *)(lVar1 + 4) >> 0x20);
    fVar8 = fVar7 * 0.0;
    uVar3 = NEON_rev64(CONCAT44(fVar8,fVar6),4);
    fVar6 = fVar6 + fVar8;
    uStack_70 = CONCAT44(fVar7 + (float)((ulong)uVar3 >> 0x20) + fVar4 + 0.0,
                         fVar5 + (float)uVar3 + fVar4 + 0.0);
    fStack_68 = *(float *)(lVar1 + 0xc) + fVar6 + 0.0;
    fStack_64 = fVar6 + fVar4 + 1.0;
    fVar4 = *(float *)(lVar1 + 0x10);
    fVar5 = *(float *)(lVar1 + 0x14);
    fVar7 = *(float *)(lVar1 + 0x18);
    fVar6 = *(float *)(lVar1 + 0x1c);
    fStack_e0 = (fVar5 * fVar5 + fVar7 * fVar7) * -2.0 + 1.0;
    fStack_dc = fVar4 * fVar5 + fVar7 * fVar6;
    fStack_dc = fStack_dc + fStack_dc;
    fStack_d8 = fVar4 * fVar7 - fVar5 * fVar6;
    fStack_d8 = fStack_d8 + fStack_d8;
    fStack_d0 = fVar4 * fVar5 - fVar7 * fVar6;
    fStack_d0 = fStack_d0 + fStack_d0;
    fStack_cc = (fVar4 * fVar4 + fVar7 * fVar7) * -2.0 + 1.0;
    fStack_c8 = fVar5 * fVar7 + fVar4 * fVar6;
    fStack_c8 = fStack_c8 + fStack_c8;
    fStack_c0 = fVar4 * fVar7 + fVar5 * fVar6;
    fStack_c0 = fStack_c0 + fStack_c0;
    fStack_bc = fVar5 * fVar7 - fVar4 * fVar6;
    fStack_bc = fStack_bc + fStack_bc;
    uStack_d4 = 0;
    uStack_c4 = 0;
    fStack_b8 = (fVar4 * fVar4 + fVar5 * fVar5) * -2.0 + 1.0;
    uStack_ac = 0;
    uStack_b4 = 0;
    uStack_a4 = 0x3f800000;
    func_0x000109519fd0(&uStack_60,&uStack_a0,&fStack_e0);
  }
  *(undefined8 *)(param_1 + 0x24) = uStack_58;
  *(undefined8 *)(param_1 + 0x1c) = uStack_60;
  *(undefined8 *)(param_1 + 0x34) = uStack_48;
  *(undefined8 *)(param_1 + 0x2c) = uStack_50;
  *(undefined8 *)(param_1 + 0x44) = uStack_38;
  *(undefined8 *)(param_1 + 0x3c) = uStack_40;
  *(undefined8 *)(param_1 + 0x54) = uStack_28;
  *(undefined8 *)(param_1 + 0x4c) = uStack_30;
  return;
}



/* Entry: 10acb3278; end: 10acb343f;  */

long * FUN_10acb3278(long param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar4;
  long lVar5;
  long *plVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined1 auStack_6c [4];
  undefined8 uStack_68;
  float fStack_60;
  undefined8 uStack_5c;
  float fStack_54;
  undefined8 uStack_50;
  float fStack_48;
  undefined8 uStack_44;
  float fStack_3c;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = *(long **)(*(long *)(param_1 + 0x78) + 0xe0);
  plVar1 = plVar6;
  (**(code **)(*plVar6 + 0x90))();
  lVar4 = *param_3;
  if (*(long *)(lVar4 + 0x58) == *(long *)(lVar4 + 0x50)) {
    if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
      func_0x00010ae06f08(1,2,&UNK_10f6a1879,&UNK_10f6a18b4,0x4f,&UNK_10f6a1915,in_x6,in_x7,
                          (*(long *)(lVar4 + 0x40) - *(long *)(lVar4 + 0x38) >> 2) *
                          -0x5555555555555555,0);
    }
    fStack_54 = *(float *)(param_1 + 0x70) * 0.5;
    fStack_60 = fStack_54 + *(float *)(param_1 + 100);
    fVar8 = (float)*(undefined8 *)(param_1 + 0x68) * 0.5;
    fVar7 = (float)*(undefined8 *)(param_1 + 0x5c);
    fVar9 = fVar8 + fVar7;
    fVar10 = (float)((ulong)*(undefined8 *)(param_1 + 0x68) >> 0x20) * 0.0 +
             (float)((ulong)*(undefined8 *)(param_1 + 0x5c) >> 0x20);
    uStack_68 = CONCAT44(fVar10,fVar9);
    fStack_54 = *(float *)(param_1 + 100) - fStack_54;
    uStack_5c = CONCAT44(fVar10,fVar9);
    fVar7 = fVar7 - fVar8;
    uStack_50 = CONCAT44(fVar10,fVar7);
    uStack_44 = CONCAT44(fVar10,fVar7);
    uStack_78 = 0x2000200010000;
    uStack_70 = 3;
    fStack_48 = fStack_54;
    fStack_3c = fStack_60;
    FUN_10a0cf2cc(*plVar1 + 0x10,&uStack_68,&lStack_38,0x30);
    lVar5 = *plVar1;
    puVar2 = &uStack_78;
    puVar3 = auStack_6c;
    lVar4 = 0xc;
  }
  else {
    FUN_10a0cf2cc(*plVar1 + 0x10,*(long *)(lVar4 + 0x38),*(long *)(lVar4 + 0x40),
                  *(long *)(lVar4 + 0x40) - *(long *)(lVar4 + 0x38));
    lVar5 = *plVar1;
    puVar2 = *(undefined8 **)(*param_3 + 0x50);
    puVar3 = *(undefined1 **)(*param_3 + 0x58);
    lVar4 = (long)puVar3 - (long)puVar2;
  }
  FUN_10a0cf2cc(lVar5 + 0x28,puVar2,puVar3,lVar4);
  FUN_10ab4e0a4(*plVar1);
  (**(code **)(*plVar6 + 0xa0))();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return plVar6;
  }
  ___stack_chk_fail();
  *plVar6 = (long)&PTR_FUN_110c6abb8;
  FUN_10a0e3194(plVar6 + 0xf);
  *plVar6 = (long)&PTR_DAT_110b17898;
  func_0x00010a004dac(plVar6 + 1);
  return plVar6;
}



/* Entry: 10acb3440; end: 10acb34c7;  */

undefined8 * FUN_10acb3440(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6abb8;
  FUN_10a0e3194(param_1 + 0xf);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10acb34c8; end: 10acb35fb;  */

/* WARNING: Removing unreachable block (ram,0x00010acb3598) */

void FUN_10acb34c8(undefined8 param_1,long param_2)

{
  undefined8 **ppuStack_38;
  ulong uStack_30;
  byte bStack_21;
  
  func_0x00010989f98c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_1,": ",2);
  if ((*(byte *)(param_2 + 0x18) & 1) == 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,&DAT_10f6a193c,7);
  }
  else {
    FUN_10a0ee900(&ppuStack_38,&UNK_10f6a1961,0x2f);
    if (-1 < (char)bStack_21) {
      uStack_30 = (ulong)bStack_21;
      ppuStack_38 = &ppuStack_38;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,ppuStack_38,uStack_30);
  }
  return;
}



/* Entry: 10acb35fc; end: 10acb3683;  */

undefined8 * FUN_10acb35fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6ac70;
  FUN_10a26e930(param_1 + 5);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10acb3684; end: 10acb36ff;  */

undefined1  [16] FUN_10acb3684(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xc;
  auVar1._0_8_ = &UNK_10f6a1af9;
  return auVar1;
}



/* Entry: 10acb3700; end: 10acb383b;  */

void FUN_10acb3700(undefined8 param_1)

{
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000002;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f6a0902;
  puStack_70 = (undefined *)0x0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = CONCAT44(uStack_58._4_4_,0x16b);
  FUN_10acb383c(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6a1991;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x200000064;
  puStack_70 = &UNK_10f6a0902;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x12900000162;
  uStack_48 = 0x16b;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10acdbc88();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6a154c;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x200000064;
  puStack_70 = &UNK_10f6a0902;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0x16b;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10acdbe24(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6a183b;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x200000064;
  puStack_70 = &UNK_10f6a0902;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0x16b;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010acdbfc0(param_1,&puStack_98);
  FUN_10acdc0e4(param_1);
  return;
}



/* Entry: 10acb383c; end: 10acb3913;  */

/* WARNING: Removing unreachable block (ram,0x00010acb38d4) */

undefined1  [16] FUN_10acb383c(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f6a1af9,0xc);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10acdbb8c(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10acb3914; end: 10acb3a17;  */

undefined8 * FUN_10acb3914(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6acc8;
  FUN_10a4bfd88(param_1 + 8);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10acb3a18; end: 10acb3d6b;  */

void FUN_10acb3a18(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  undefined4 uStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  undefined4 uStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  undefined8 uStack_d4;
  undefined8 uStack_cc;
  undefined4 uStack_c4;
  float fStack_c0;
  undefined8 uStack_bc;
  long lStack_b4;
  float fStack_ac;
  ulong uStack_a8;
  undefined8 uStack_a0;
  float fStack_98;
  undefined4 uStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  float fStack_48;
  float fStack_44;
  
  lVar9 = *(long *)(*(long *)(*(long *)(param_2 + 0x18) + 0x8c0) + 0x18);
  if (lVar9 == 0) {
    param_1[1] = 0;
    *param_1 = 0x3f800000;
    param_1[3] = 0;
    param_1[2] = 0x3f80000000000000;
    param_1[5] = 0x3f800000;
    param_1[4] = 0;
    param_1[7] = 0x3f80000000000000;
    param_1[6] = 0;
  }
  else {
    uStack_74 = 0;
    uStack_70 = 0;
    uStack_7c = 0;
    uStack_78 = 0;
    uStack_80 = 0x3f800000;
    uStack_6c = 0x3f800000;
    uStack_68 = 0;
    uStack_60 = 0;
    fVar10 = *(float *)(param_2 + 0x30);
    fVar11 = *(float *)(param_2 + 0x2c) * 0.0;
    fVar12 = (float)*(undefined8 *)(param_2 + 0x24);
    fVar14 = fVar12 * 0.0;
    fVar13 = (float)((ulong)*(undefined8 *)(param_2 + 0x24) >> 0x20);
    fVar15 = fVar13 * 0.0;
    uVar16 = NEON_rev64(CONCAT44(fVar15,fVar14),4);
    fVar14 = fVar14 + fVar15;
    uStack_50 = CONCAT44(fVar13 + (float)((ulong)uVar16 >> 0x20) + fVar11 + 0.0,
                         fVar12 + (float)uVar16 + fVar11 + 0.0);
    fStack_48 = *(float *)(param_2 + 0x2c) + fVar14 + 0.0;
    fStack_44 = fVar14 + fVar11 + 1.0;
    uStack_58 = 0x3f800000;
    fVar12 = *(float *)(param_2 + 0x34);
    fVar11 = *(float *)(param_2 + 0x38);
    fVar17 = *(float *)(param_2 + 0x3c);
    fStack_c0 = (fVar12 * fVar12 + fVar11 * fVar11) * -2.0 + 1.0;
    fVar18 = fVar10 * fVar12 + fVar11 * fVar17;
    fVar19 = fVar10 * fVar11 - fVar12 * fVar17;
    fVar14 = fVar10 * fVar12 - fVar11 * fVar17;
    fStack_ac = (fVar10 * fVar10 + fVar11 * fVar11) * -2.0 + 1.0;
    fVar15 = fVar12 * fVar11 + fVar10 * fVar17;
    fVar13 = fVar10 * fVar11 + fVar12 * fVar17;
    fVar11 = fVar12 * fVar11 - fVar10 * fVar17;
    uStack_bc = CONCAT44(fVar19 + fVar19,fVar18 + fVar18);
    lStack_b4 = (ulong)(uint)(fVar14 + fVar14) << 0x20;
    uStack_a8 = (ulong)(uint)(fVar15 + fVar15);
    uStack_a0 = CONCAT44(fVar11 + fVar11,fVar13 + fVar13);
    fStack_98 = (fVar10 * fVar10 + fVar12 * fVar12) * -2.0 + 1.0;
    fStack_8c = 0.0;
    fStack_88 = 0.0;
    uStack_94 = 0;
    fStack_90 = 0.0;
    fStack_84 = 1.0;
    func_0x000109519fd0(param_1,&uStack_80,&fStack_c0);
    if (*(long *)(lVar9 + 0x128) != 0) {
      lVar2 = *(long *)(param_2 + 0x18) + 0xd48;
      FUN_10a5aeb74(lVar2,&PTR_DAT_110be7540);
      lVar3 = 2;
      lVar4 = lVar2;
      do {
        lVar4 = *(long *)(lVar4 + 8);
        lVar3 = lVar3 + -1;
      } while (lVar4 != lVar2);
      *(undefined1 *)(param_2 + 0x20) = 0;
      puVar6 = (undefined8 *)**(long **)(lVar9 + 0x128);
      puVar1 = (undefined8 *)(*(long **)(lVar9 + 0x128))[1];
      if (puVar6 != puVar1) {
        do {
          if (*(int **)(param_2 + 0x40) == (int *)0x0) {
            iVar8 = 0;
          }
          else {
            iVar8 = **(int **)(param_2 + 0x40);
          }
          puVar7 = puVar6 + 2;
          piVar5 = (int *)*puVar6;
          if (*piVar5 == iVar8) {
            if (lVar3 == 0) {
              FUN_10a4a5f38(&uStack_80,*(undefined8 *)(*(long *)(lVar2 + 8) + 0x28),piVar5 + 1,
                            piVar5 + 4);
            }
            else {
              fStack_c0 = 1.0;
              lStack_b4 = 0;
              uStack_bc = 0;
              fStack_ac = 1.0;
              uStack_a8 = 0;
              uStack_a0 = 0;
              fStack_98 = 1.0;
              uStack_94 = 0;
              fVar10 = (float)piVar5[3] * 0.0;
              fVar11 = (float)*(undefined8 *)(piVar5 + 1);
              fVar13 = fVar11 * 0.0;
              fVar12 = (float)((ulong)*(undefined8 *)(piVar5 + 1) >> 0x20);
              fVar14 = fVar12 * 0.0;
              uVar16 = NEON_rev64(CONCAT44(fVar14,fVar13),4);
              fVar13 = fVar13 + fVar14;
              fStack_90 = fVar11 + (float)uVar16 + fVar10 + 0.0;
              fStack_8c = fVar12 + (float)((ulong)uVar16 >> 0x20) + fVar10 + 0.0;
              fStack_88 = (float)piVar5[3] + fVar13 + 0.0;
              fStack_84 = fVar13 + fVar10 + 1.0;
              fVar10 = (float)piVar5[4];
              fVar11 = (float)piVar5[5];
              fVar12 = (float)piVar5[6];
              fVar13 = (float)piVar5[7];
              fStack_100 = (fVar11 * fVar11 + fVar12 * fVar12) * -2.0 + 1.0;
              fStack_fc = fVar10 * fVar11 + fVar12 * fVar13;
              fStack_fc = fStack_fc + fStack_fc;
              fStack_f8 = fVar10 * fVar12 - fVar11 * fVar13;
              fStack_f8 = fStack_f8 + fStack_f8;
              fStack_f0 = fVar10 * fVar11 - fVar12 * fVar13;
              fStack_f0 = fStack_f0 + fStack_f0;
              fStack_ec = (fVar10 * fVar10 + fVar12 * fVar12) * -2.0 + 1.0;
              fStack_e8 = fVar11 * fVar12 + fVar10 * fVar13;
              fStack_e8 = fStack_e8 + fStack_e8;
              fStack_e0 = fVar10 * fVar12 + fVar11 * fVar13;
              fStack_e0 = fStack_e0 + fStack_e0;
              fStack_dc = fVar11 * fVar12 - fVar10 * fVar13;
              fStack_dc = fStack_dc + fStack_dc;
              uStack_f4 = 0;
              uStack_e4 = 0;
              fStack_d8 = (fVar10 * fVar10 + fVar11 * fVar11) * -2.0 + 1.0;
              uStack_cc = 0;
              uStack_d4 = 0;
              uStack_c4 = 0x3f800000;
              func_0x000109519fd0(&uStack_80,&fStack_c0,&fStack_100);
            }
            param_1[1] = CONCAT44(uStack_74,uStack_78);
            *param_1 = CONCAT44(uStack_7c,uStack_80);
            param_1[3] = uStack_68;
            param_1[2] = CONCAT44(uStack_6c,uStack_70);
            param_1[5] = uStack_58;
            param_1[4] = uStack_60;
            param_1[7] = CONCAT44(fStack_44,fStack_48);
            param_1[6] = uStack_50;
            *(undefined1 *)(param_2 + 0x20) = 1;
            return;
          }
          puVar6 = puVar7;
        } while (puVar7 != puVar1);
      }
    }
  }
  return;
}



/* Entry: 10acb3d6c; end: 10acb3e77;  */

float FUN_10acb3d6c(void)

{
  byte bVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  
  FUN_10acb3a18(&fStack_50);
  fVar4 = (fStack_50 - fStack_3c) - fStack_28;
  fVar5 = (fStack_3c - fStack_50) - fStack_28;
  fVar6 = (fStack_28 - fStack_50) - fStack_3c;
  fStack_28 = fStack_50 + fStack_3c + fStack_28;
  fVar3 = fVar4;
  if (fVar4 <= fStack_28) {
    fVar3 = fStack_28;
  }
  bVar1 = 2;
  if (fVar5 <= fVar3) {
    fVar5 = fVar3;
    bVar1 = fStack_28 < fVar4;
  }
  bVar2 = 3;
  if (fVar6 <= fVar5) {
    fVar6 = fVar5;
    bVar2 = bVar1;
  }
  fVar5 = SQRT(fVar6 + 1.0) * 0.5;
  fVar3 = 0.25 / fVar5;
  fVar6 = fStack_4c + fStack_40;
  if (bVar2 != 2) {
    fVar6 = fStack_48 + fStack_30;
  }
  fVar4 = (fStack_38 - fStack_2c) * fVar3;
  if (bVar2 != 0) {
    fVar4 = fVar5;
  }
  fVar6 = fVar6 * fVar3;
  if (bVar2 < 2) {
    fVar6 = fVar4;
  }
  return fVar6;
}



/* Entry: 10acb3e78; end: 10acb3efb;  */

undefined1  [16] FUN_10acb3e78(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xe;
  auVar1._0_8_ = &UNK_10f6a1b06;
  return auVar1;
}



/* Entry: 10acb3efc; end: 10acb403b;  */

void FUN_10acb3efc(undefined8 param_1)

{
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puStack_a8 = (undefined *)0x0;
  uStack_a0 = 0xffffffff00000001;
  uStack_98 = CONCAT44(uStack_98._4_4_,0xffffffff);
  puStack_90 = &UNK_10f6a0902;
  uStack_88 = 0;
  uStack_78 = 0;
  puStack_80 = (undefined *)0x0;
  uStack_70 = 0x13f00000162;
  uStack_68 = CONCAT44(uStack_68._4_4_,0xffffffff);
  FUN_10acb403c(param_1,&puStack_a8);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f6a199e;
  uStack_88 = 0xffffffffffffffff;
  puStack_90 = (undefined *)0x100000064;
  puStack_80 = &UNK_10f6a0902;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_68 = 0;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10acdc29c();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f6a19a7;
  uStack_88 = 0xffffffffffffffff;
  puStack_90 = (undefined *)0x100000064;
  puStack_80 = &UNK_10f6a0902;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0;
  uStack_5c = 0x147;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010acdc42c(param_1,&puStack_a8);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f6a19b1;
  uStack_88 = 0xffffffffffffffff;
  puStack_90 = (undefined *)0x100000064;
  puStack_80 = &UNK_10f6a0902;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0;
  uStack_5c = 0x147;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10acdc554(param_1,&puStack_a8);
  FUN_10acdc67c(param_1);
  return;
}



/* Entry: 10acb403c; end: 10acb4113;  */

/* WARNING: Removing unreachable block (ram,0x00010acb40d4) */

undefined1  [16] FUN_10acb403c(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f6a1b06,0xe);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10acdc1a0(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10acb4114; end: 10acb4177;  */

void FUN_10acb4114(long param_1,uint param_2)

{
  long lVar1;
  char cStack_21;
  
  cStack_21 = (char)param_2;
  if (*(byte *)(param_1 + 0x48) != param_2) {
    FUN_10a03dff0(*(undefined8 *)(param_1 + 0x18),&cStack_21);
    lVar1 = 0x28;
    if (cStack_21 == '\0') {
      lVar1 = 0x38;
    }
    FUN_10a07e58c(*(undefined8 *)(param_1 + lVar1));
    *(char *)(param_1 + 0x48) = cStack_21;
  }
  return;
}



/* Entry: 10acb4178; end: 10acb417b;  */

undefined8 * FUN_10acb4178(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6a310;
  param_1[3] = &PTR_FUN_110c6a378;
  FUN_10a0dd8cc(param_1 + 8);
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    __ZdlPv(param_1[5]);
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10acb417c; end: 10acb418f;  */

void FUN_10acb417c(void)

{
  FUN_10acb6908();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10acb4190; end: 10acb4197;  */

undefined8 * FUN_10acb4190(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -3;
  *puVar1 = &PTR_FUN_110c6a310;
  *param_1 = &PTR_FUN_110c6a378;
  FUN_10a0dd8cc(param_1 + 5);
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    __ZdlPv(param_1[2]);
  }
  *puVar1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -2);
  return puVar1;
}



/* Entry: 10acb4198; end: 10acb41af;  */

void FUN_10acb4198(long param_1)

{
  FUN_10acb6908(param_1 + -0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10acb41b0; end: 10acb41b3;  */

undefined8 * FUN_10acb41b0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  *param_1 = &PTR_FUN_110c6c530;
  param_1[0xb] = &PTR_FUN_110c6c588;
  param_1[0xd] = &PTR_FUN_110c6c5d0;
  lVar3 = param_1[0x13];
  if (lVar3 != 0) {
    lVar1 = param_1[0x14];
    lVar2 = lVar3;
    if (lVar1 != lVar3) {
      do {
        lVar1 = lVar1 + -0x10;
        func_0x00010aa006d4();
      } while (lVar1 != lVar3);
      lVar2 = param_1[0x13];
    }
    param_1[0x14] = lVar3;
    __ZdlPv(lVar2);
  }
  if (param_1[0x11] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[0xd] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0xe);
  *param_1 = &PTR____cxa_pure_virtual_110bad548;
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10acb41b4; end: 10acb41c7;  */

void FUN_10acb41b4(void)

{
  func_0x00010acb6968();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10acb41c8; end: 10acb41cf;  */

undefined8 * FUN_10acb41c8(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = param_1 + -0xb;
  *puVar1 = &PTR_FUN_110c6c530;
  *param_1 = &PTR_FUN_110c6c588;
  param_1[2] = &PTR_FUN_110c6c5d0;
  lVar4 = param_1[8];
  if (lVar4 != 0) {
    lVar2 = param_1[9];
    lVar3 = lVar4;
    if (lVar2 != lVar4) {
      do {
        lVar2 = lVar2 + -0x10;
        func_0x00010aa006d4();
      } while (lVar2 != lVar4);
      lVar3 = param_1[8];
    }
    param_1[9] = lVar4;
    __ZdlPv(lVar3);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  *puVar1 = &PTR____cxa_pure_virtual_110bad548;
  if (param_1[-10] != 0) {
    param_1[-9] = param_1[-10];
    __ZdlPv();
  }
  return puVar1;
}



/* Entry: 10acb41d0; end: 10acb41e7;  */

void FUN_10acb41d0(long param_1)

{
  func_0x00010acb6968(param_1 + -0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10acb41e8; end: 10acb41ef;  */

undefined8 * FUN_10acb41e8(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = param_1 + -0xd;
  *puVar1 = &PTR_FUN_110c6c530;
  param_1[-2] = &PTR_FUN_110c6c588;
  *param_1 = &PTR_FUN_110c6c5d0;
  lVar4 = param_1[6];
  if (lVar4 != 0) {
    lVar2 = param_1[7];
    lVar3 = lVar4;
    if (lVar2 != lVar4) {
      do {
        lVar2 = lVar2 + -0x10;
        func_0x00010aa006d4();
      } while (lVar2 != lVar4);
      lVar3 = param_1[6];
    }
    param_1[7] = lVar4;
    __ZdlPv(lVar3);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  *puVar1 = &PTR____cxa_pure_virtual_110bad548;
  if (param_1[-0xc] != 0) {
    param_1[-0xb] = param_1[-0xc];
    __ZdlPv();
  }
  return puVar1;
}



/* Entry: 10acb41f0; end: 10acb4207;  */

void FUN_10acb41f0(long param_1)

{
  func_0x00010acb6968(param_1 + -0x68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10acb4208; end: 10acb420b;  */

undefined8 * FUN_10acb4208(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6c628;
  if (param_1[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10acb420c; end: 10acb421f;  */

void FUN_10acb420c(void)

{
  func_0x00010acb6a18();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10acb4220; end: 10acb422f;  */

ulong * FUN_10acb4220(ulong *param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  
  puVar2 = (ulong *)&UNK_10f6a19bb;
  func_0x000107c613d0();
  if ((ulong *)0x7ffffffffffffff7 < puVar2) {
    func_0x000107c2b040();
    if ((bRam00000001132ffc88 & 1) == 0) {
      puVar2 = (ulong *)0x1132ffc88;
      func_0x000107c60e48();
      if ((int)puVar2 != 0) {
        puVar4 = (undefined8 *)0x30;
        func_0x000107c60e20();
        uRam00000001132ffc38 = 0x8000000000000030;
        uRam00000001132ffc30 = 0x2c;
        puRam00000001132ffc28 = puVar4;
        puVar4[1] = 0x434948504152475f;
        *puVar4 = 0x45524f43534e454c;
        puVar4[3] = 0x525f595a414c5f54;
        puVar4[2] = 0x5845544e4f435f53;
        *(undefined8 *)((long)puVar4 + 0x24) = 0x54494e495f454352;
        *(undefined8 *)((long)puVar4 + 0x1c) = 0x554f5345525f595a;
        *(undefined1 *)((long)puVar4 + 0x2c) = 0;
        uRam00000001132ffc40 = 0;
        pcRam00000001132ffc48 = FUN_10a09e854;
        ppuRam00000001132ffc50 = &PTR_DAT_110ba0fe0;
        func_0x000107c60e34(0x10a08e670,0x1132ffc28,0x100000000);
        puVar2 = (ulong *)0x1132ffc88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR____cxa_guard_release_110346be8)(0x1132ffc88);
        return puVar2;
      }
    }
    return puVar2;
  }
  if (puVar2 < (ulong *)0x17) {
    *(char *)((long)param_1 + 0x17) = (char)puVar2;
    puVar3 = param_1;
    if (puVar2 == (ulong *)0x0) goto code_r0x0001000537e0;
  }
  else {
    puVar1 = (ulong *)0x19;
    if (((ulong)puVar2 | 7) != 0x17) {
      puVar1 = (ulong *)(((ulong)puVar2 | 7) + 1);
    }
    puVar3 = puVar1;
    func_0x000107c60e20();
    param_1[1] = (ulong)puVar2;
    param_1[2] = (ulong)puVar1 | 0x8000000000000000;
    *param_1 = (ulong)puVar3;
  }
  func_0x000107c610b8(puVar3,&UNK_10f6a19bb,puVar2);
code_r0x0001000537e0:
  *(undefined1 *)((long)puVar3 + (long)puVar2) = 0;
  return param_1;
}



/* Entry: 10acb4230; end: 10acb42b7;  */

undefined8 * FUN_10acb4230(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6c480;
  func_0x00010a042d30(param_1 + 0x11);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10acb42b8; end: 10acb42bb;  */

undefined8 * FUN_10acb42b8(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c6c2d0;
  plVar1 = (long *)param_1[6];
  param_1[6] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_28 = param_1 + 3;
  FUN_10a0426d8(&puStack_28);
  return param_1;
}



/* Entry: 10acb42bc; end: 10acb42cf;  */

void FUN_10acb42bc(void)

{
  func_0x00010a4baab4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10acb42d0; end: 10acb431f;  */

void FUN_10acb42d0(undefined4 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined4 uStack_24;
  
  uVar1 = param_3[1];
  puVar2 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar2 = param_3;
  }
  FUN_10aca1e14(param_2,puVar2,uVar1);
  uStack_24 = param_1;
  FUN_10a3680dc(param_4,&uStack_24);
  return;
}



/* Entry: 10acb4320; end: 10acb4333;  */

bool FUN_10acb4320(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  puVar3 = &UNK_10f683cc2;
  FUN_10a00946c();
  puVar6 = (undefined8 *)(puVar3 + 0x50);
  puVar9 = (undefined8 *)*puVar6;
  puVar7 = puVar6;
  puVar8 = puVar6;
  if (puVar9 != (undefined8 *)0x0) {
    do {
      uVar4 = puVar9[4];
      uVar1 = param_2[1];
      puVar2 = (undefined8 *)*param_2;
      if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
        uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
        puVar2 = param_2;
      }
      FUN_10a003d5c(uVar4,puVar9[5],puVar2,uVar1);
      if (-1 < (char)uVar4) {
        puVar7 = puVar9;
      }
      puVar9 = *(undefined8 **)((long)puVar9 + (uVar4 >> 4 & 8));
    } while (puVar9 != (undefined8 *)0x0);
    if (puVar6 != puVar7) {
      uVar5 = puVar7[4];
      uVar1 = param_2[1];
      puVar9 = (undefined8 *)*param_2;
      if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
        uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
        puVar9 = param_2;
      }
      FUN_10a003d5c(uVar5,puVar7[5],puVar9,uVar1);
      if ((char)uVar5 < '\x01') {
        puVar8 = puVar7;
      }
    }
  }
  return puVar6 != puVar8;
}



/* Entry: 10acb4334; end: 10acb43eb;  */

bool FUN_10acb4334(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  plVar5 = (long *)(param_1 + 0x50);
  plVar8 = (long *)*plVar5;
  plVar6 = plVar5;
  plVar7 = plVar5;
  if (plVar8 != (long *)0x0) {
    do {
      uVar3 = plVar8[4];
      uVar1 = param_2[1];
      puVar2 = (undefined8 *)*param_2;
      if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
        uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
        puVar2 = param_2;
      }
      FUN_10a003d5c(uVar3,plVar8[5],puVar2,uVar1);
      if (-1 < (char)uVar3) {
        plVar6 = plVar8;
      }
      plVar8 = *(long **)((long)plVar8 + (uVar3 >> 4 & 8));
    } while (plVar8 != (long *)0x0);
    if (plVar5 != plVar6) {
      lVar4 = plVar6[4];
      uVar1 = param_2[1];
      puVar2 = (undefined8 *)*param_2;
      if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
        uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
        puVar2 = param_2;
      }
      FUN_10a003d5c(lVar4,plVar6[5],puVar2,uVar1);
      if ((char)lVar4 < '\x01') {
        plVar7 = plVar6;
      }
    }
  }
  return plVar5 != plVar7;
}



/* Entry: 10acb43ec; end: 10acb4413;  */

void FUN_10acb43ec(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar1 = *(long *)(param_2 + 0x20);
  lVar2 = *(long *)(param_2 + 0x28);
  lVar4 = (lVar2 - lVar1 >> 3) * -0x5555555555555555;
  if (lVar4 != 0) {
    FUN_10a0cf150(param_1,lVar4);
    puVar3 = param_1;
    FUN_10a0cf198(param_1,lVar1,lVar2,param_1[1]);
    param_1[1] = puVar3;
  }
  return;
}



/* Entry: 10acb4414; end: 10acb45df;  */

undefined8 * FUN_10acb4414(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c6ada0;
  param_1[1] = &PTR_DAT_110c6adf0;
  FUN_10a90e710(param_1 + 9,param_1[10]);
  func_0x00010a140010(param_1 + 7);
  puStack_28 = param_1 + 4;
  FUN_10a0426d8(&puStack_28);
  param_1[1] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 2);
  return param_1;
}



/* Entry: 10acb45e0; end: 10acb46cf;  */

void FUN_10acb45e0(long param_1,long *param_2,long param_3)

{
  char cVar1;
  int aiStack_20 [2];
  undefined8 *puStack_18;
  
  cVar1 = *(char *)((long)param_2 + 0x17);
  if (cVar1 < '\0') {
    if (param_2[1] != 6) {
      if (param_2[1] != 0x11) {
        return;
      }
      param_2 = (long *)*param_2;
      if ((*param_2 != 0x72507466654c7369 || param_2[1] != 0x74696c696261626f) ||
          (char)param_2[2] != 'y') {
        return;
      }
      goto LAB_10acb4690;
    }
    param_2 = (long *)*param_2;
  }
  else if (cVar1 != '\x06') {
    if (cVar1 != '\x11') {
      return;
    }
    if ((*param_2 != 0x72507466654c7369 || param_2[1] != 0x74696c696261626f) ||
        (char)param_2[2] != 'y') {
      return;
    }
LAB_10acb4690:
    puStack_18 = (undefined8 *)(double)*(float *)(param_1 + 0x20);
    aiStack_20[0] = 3;
    func_0x0001098968d0(param_3 + 8,aiStack_20);
    if ((3 < aiStack_20[0]) && (puStack_18 != (undefined8 *)0x0)) {
      (**(code **)*puStack_18)();
    }
    return;
  }
  if ((int)*param_2 != 0x654c7369 || *(short *)((long)param_2 + 4) != 0x7466) {
    return;
  }
  aiStack_20[0] = 2;
  puStack_18 = (undefined8 *)CONCAT71(puStack_18._1_7_,*(undefined1 *)(param_1 + 0x24));
  func_0x0001098968d0(param_3 + 8,aiStack_20);
  if ((3 < aiStack_20[0]) && (puStack_18 != (undefined8 *)0x0)) {
    (**(code **)*puStack_18)();
  }
  return;
}



/* Entry: 10acb46d0; end: 10acb46e3;  */

bool FUN_10acb46d0(undefined8 param_1,long *param_2)

{
  char cVar1;
  
  FUN_10a00946c(&UNK_10f683cc2);
  cVar1 = *(char *)((long)param_2 + 0x17);
  if (cVar1 < '\0') {
    if (param_2[1] != 6) {
      if (param_2[1] == 0x11) {
        param_2 = (long *)*param_2;
        return (*param_2 == 0x72507466654c7369 && param_2[1] == 0x74696c696261626f) &&
               (char)param_2[2] == 'y';
      }
      return false;
    }
    param_2 = (long *)*param_2;
  }
  else if (cVar1 != '\x06') {
    if (cVar1 == '\x11') {
      return (*param_2 == 0x72507466654c7369 && param_2[1] == 0x74696c696261626f) &&
             (char)param_2[2] == 'y';
    }
    return false;
  }
  return (int)*param_2 == 0x654c7369 && *(short *)((long)param_2 + 4) == 0x7466;
}



/* Entry: 10acb46e4; end: 10acb47bf;  */

bool FUN_10acb46e4(undefined8 param_1,long *param_2)

{
  char cVar1;
  
  cVar1 = *(char *)((long)param_2 + 0x17);
  if (cVar1 < '\0') {
    if (param_2[1] != 6) {
      if (param_2[1] == 0x11) {
        param_2 = (long *)*param_2;
        return (*param_2 == 0x72507466654c7369 && param_2[1] == 0x74696c696261626f) &&
               (char)param_2[2] == 'y';
      }
      return false;
    }
    param_2 = (long *)*param_2;
  }
  else if (cVar1 != '\x06') {
    if (cVar1 == '\x11') {
      return (*param_2 == 0x72507466654c7369 && param_2[1] == 0x74696c696261626f) &&
             (char)param_2[2] == 'y';
    }
    return false;
  }
  return (int)*param_2 == 0x654c7369 && *(short *)((long)param_2 + 4) == 0x7466;
}



/* Entry: 10acb47c0; end: 10acb48d3;  */

undefined8 * FUN_10acb47c0(undefined8 *param_1)

{
  long lVar1;
  char *pcVar2;
  undefined1 auStack_68 [24];
  undefined8 auStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c2b054(auStack_68,&UNK_10f6a1b15);
  func_0x000107c2b054(auStack_50,&DAT_10f65d8a3);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10a102f04(param_1,auStack_68,&lStack_38,2);
  lVar1 = 0;
  do {
    if ((&cStack_39)[lVar1] < '\0') {
      param_1 = *(undefined8 **)((long)auStack_50 + lVar1);
      __ZdlPv();
    }
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != -0x30);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar1 = -0x30;
  pcVar2 = &cStack_39;
  do {
    if (*pcVar2 < '\0') {
      __ZdlPv(*(undefined8 *)(pcVar2 + -0x17));
    }
    lVar1 = lVar1 + 0x18;
    pcVar2 = pcVar2 + -0x18;
  } while (lVar1 != 0);
  __Unwind_Resume();
  param_1[1] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 2);
  return param_1;
}



/* Entry: 10acb48d4; end: 10acb493b;  */

long FUN_10acb48d4(long param_1)

{
  *(undefined ***)(param_1 + 8) = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x10);
  return param_1;
}



/* Entry: 10acb493c; end: 10acb494b;  */

undefined8 * FUN_10acb493c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  *param_1 = &PTR_DAT_110b17898;
  plVar5 = (long *)param_1[2];
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1 + 1;
}



/* Entry: 10acb494c; end: 10acb4b17;  */

void FUN_10acb494c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1 + -1);
  return;
}



/* Entry: 10acb4b18; end: 10acb4b1f;  */

void FUN_10acb4b18(long param_1)

{
  func_0x00010acb6a64(*(undefined8 *)(param_1 + 0x1c0));
  func_0x00010acd4848(*(undefined8 *)(param_1 + 0x1a8));
  func_0x00010a363354(param_1 + 0x188,*(undefined8 *)(param_1 + 400));
  func_0x00010a36330c(param_1 + 0x170,*(undefined8 *)(param_1 + 0x178));
  func_0x00010acd48c4(param_1 + 0x160);
  if (*(long *)(param_1 + 0x158) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *(undefined ***)(param_1 + 8) = &PTR_DAT_110c6bf80;
  *(undefined ***)(param_1 + 0x98) = &PTR_DAT_110c6bfb0;
  FUN_10a1c0a9c();
  *(undefined8 *)(param_1 + -0x18) = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((undefined8 *)(param_1 + -0x18));
  return;
}



/* Entry: 10acb4b20; end: 10acb4ba3;  */

undefined8 * FUN_10acb4b20(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  func_0x00010acb6a64(param_1[0x37]);
  func_0x00010acd4848(param_1[0x34]);
  func_0x00010a363354(param_1 + 0x30,param_1[0x31]);
  func_0x00010a36330c(param_1 + 0x2d,param_1[0x2e]);
  func_0x00010acd48c4(param_1 + 0x2b);
  if (param_1[0x2a] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110c6bf80;
  param_1[0x12] = &PTR_DAT_110c6bfb0;
  FUN_10a1c0a9c(param_1);
  param_1[-4] = &PTR_DAT_110b17898;
  plVar5 = (long *)param_1[-2];
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1 + -3;
}



/* Entry: 10acb4ba4; end: 10acb4bab;  */

void FUN_10acb4ba4(undefined8 *param_1)

{
  func_0x00010acb6a64(param_1[0x37]);
  func_0x00010acd4848(param_1[0x34]);
  func_0x00010a363354(param_1 + 0x30,param_1[0x31]);
  func_0x00010a36330c(param_1 + 0x2d,param_1[0x2e]);
  func_0x00010acd48c4(param_1 + 0x2b);
  if (param_1[0x2a] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110c6bf80;
  param_1[0x12] = &PTR_DAT_110c6bfb0;
  FUN_10a1c0a9c();
  param_1[-4] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1 + -4);
  return;
}



/* Entry: 10acb4bac; end: 10acb4c2f;  */

undefined8 * FUN_10acb4bac(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  func_0x00010acb6a64(param_1[0x25]);
  func_0x00010acd4848(param_1[0x22]);
  func_0x00010a363354(param_1 + 0x1e,param_1[0x1f]);
  func_0x00010a36330c(param_1 + 0x1b,param_1[0x1c]);
  func_0x00010acd48c4(param_1 + 0x19);
  if (param_1[0x18] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x12] = &PTR_DAT_110c6bf80;
  *param_1 = &PTR_DAT_110c6bfb0;
  FUN_10a1c0a9c();
  param_1[-0x16] = &PTR_DAT_110b17898;
  plVar5 = (long *)param_1[-0x14];
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1 + -0x15;
}



/* Entry: 10acb4c30; end: 10acb4c37;  */

void FUN_10acb4c30(undefined8 *param_1)

{
  func_0x00010acb6a64(param_1[0x25]);
  func_0x00010acd4848(param_1[0x22]);
  func_0x00010a363354(param_1 + 0x1e,param_1[0x1f]);
  func_0x00010a36330c(param_1 + 0x1b,param_1[0x1c]);
  func_0x00010acd48c4(param_1 + 0x19);
  if (param_1[0x18] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x12] = &PTR_DAT_110c6bf80;
  *param_1 = &PTR_DAT_110c6bfb0;
  FUN_10a1c0a9c();
  param_1[-0x16] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0x15);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1 + -0x16);
  return;
}



/* Entry: 10acb4c38; end: 10acb50bf;  */

undefined8 * FUN_10acb4c38(undefined8 *param_1)

{
  func_0x00010acb6aac(param_1[0x32]);
  func_0x00010acd48c4(param_1 + 0x2f);
  if (param_1[0x2e] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[4] = &PTR_DAT_110c6c078;
  param_1[0x16] = &PTR_DAT_110c6c0a8;
  FUN_10a1c0a9c();
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10acb50c0; end: 10acb50cf;  */

long FUN_10acb50c0(long param_1)

{
  return param_1 + 0xc0;
}



/* Entry: 10acb50d0; end: 10acb5167;  */

undefined8 * FUN_10acb50d0(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  param_1[-3] = &PTR_DAT_110c6b0b0;
  *param_1 = &PTR_FUN_110c6b150;
  param_1[1] = &PTR_FUN_110c6b190;
  param_1[3] = &PTR_FUN_110c6b1d8;
  param_1[0x15] = &PTR_DAT_110c6b208;
  func_0x00010acb6aec(param_1[0x34]);
  func_0x00010acb6b2c(param_1[0x31]);
  func_0x00010acd48c4(param_1 + 0x2e);
  if (param_1[0x2d] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[3] = &PTR_FUN_110bd9f88;
  param_1[0x15] = &PTR_DAT_110bd9fb8;
  FUN_10a1c0a9c(param_1 + 3);
  param_1[-3] = &PTR_DAT_110b17898;
  plVar5 = (long *)param_1[-1];
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1 + -2;
}



/* Entry: 10acb5168; end: 10acb5213;  */

void FUN_10acb5168(undefined8 *param_1)

{
  param_1[-3] = &PTR_DAT_110c6b0b0;
  *param_1 = &PTR_FUN_110c6b150;
  param_1[1] = &PTR_FUN_110c6b190;
  param_1[3] = &PTR_FUN_110c6b1d8;
  param_1[0x15] = &PTR_DAT_110c6b208;
  func_0x00010acb6aec(param_1[0x34]);
  func_0x00010acb6b2c(param_1[0x31]);
  func_0x00010acd48c4(param_1 + 0x2e);
  if (param_1[0x2d] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[3] = &PTR_FUN_110bd9f88;
  param_1[0x15] = &PTR_DAT_110bd9fb8;
  FUN_10a1c0a9c(param_1 + 3);
  param_1[-3] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1 + -3);
  return;
}



/* Entry: 10acb5214; end: 10acb52ab;  */

undefined8 * FUN_10acb5214(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  param_1[-4] = &PTR_DAT_110c6b0b0;
  param_1[-1] = &PTR_FUN_110c6b150;
  *param_1 = &PTR_FUN_110c6b190;
  param_1[2] = &PTR_FUN_110c6b1d8;
  param_1[0x14] = &PTR_DAT_110c6b208;
  func_0x00010acb6aec(param_1[0x33]);
  func_0x00010acb6b2c(param_1[0x30]);
  func_0x00010acd48c4(param_1 + 0x2d);
  if (param_1[0x2c] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_FUN_110bd9f88;
  param_1[0x14] = &PTR_DAT_110bd9fb8;
  FUN_10a1c0a9c(param_1 + 2);
  param_1[-4] = &PTR_DAT_110b17898;
  plVar5 = (long *)param_1[-2];
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1 + -3;
}



/* Entry: 10acb52ac; end: 10acb5357;  */

void FUN_10acb52ac(undefined8 *param_1)

{
  param_1[-4] = &PTR_DAT_110c6b0b0;
  param_1[-1] = &PTR_FUN_110c6b150;
  *param_1 = &PTR_FUN_110c6b190;
  param_1[2] = &PTR_FUN_110c6b1d8;
  param_1[0x14] = &PTR_DAT_110c6b208;
  func_0x00010acb6aec(param_1[0x33]);
  func_0x00010acb6b2c(param_1[0x30]);
  func_0x00010acd48c4(param_1 + 0x2d);
  if (param_1[0x2c] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_FUN_110bd9f88;
  param_1[0x14] = &PTR_DAT_110bd9fb8;
  FUN_10a1c0a9c(param_1 + 2);
  param_1[-4] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1 + -4);
  return;
}



/* Entry: 10acb5358; end: 10acb5367;  */

long FUN_10acb5358(long param_1)

{
  return param_1 + 0xa0;
}


