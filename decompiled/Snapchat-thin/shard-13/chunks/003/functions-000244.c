/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a4a2a44; end: 10a4a2b1b;  */

/* WARNING: Removing unreachable block (ram,0x00010a4a2adc) */

undefined1  [16] FUN_10a4a2a44(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f65ca15,0xe);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a4bbc90(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a4a2b1c; end: 10a4a2e63;  */

void FUN_10a4a2b1c(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c8,&UNK_10f65ca24,0xc);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110be4798;
  pppuVar2 = (undefined8 ***)&UNK_10f65b2b8;
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
    ppuStack_b0 = &PTR_DAT_110be4798;
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
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f65bb42,FUN_10a4bc0b0,FUN_10a4bc168);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f65bb62,FUN_10a4bc2f8,FUN_10a4bc3b0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f65bb89,FUN_10a4bc470,FUN_10a4bc528);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f65bb9b,FUN_10a4bc5e8,FUN_10a4bc6a4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f65bbb3,FUN_10a4bc788,FUN_10a4bc840);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f65bbcd,FUN_10a4bc900,FUN_10a4bc9b8);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f65ca24,0xc);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a4a2e48);
  (*pcVar6)();
}



/* Entry: 10a4a2e64; end: 10a4a2f87;  */

void FUN_10a4a2e64(undefined8 param_1)

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
  puStack_80 = &UNK_10f65b2b8;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  puStack_70 = &UNK_10f65b2b8;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a4a2f88(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f65bbf5;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f65b2b8;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a4bcb74();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f65bc12;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x90;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a4bcce8(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f65bc2a;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a4bcdf4(param_1,&puStack_98);
  FUN_10a4bcefc(param_1);
  return;
}



/* Entry: 10a4a2f88; end: 10a4a305f;  */

/* WARNING: Removing unreachable block (ram,0x00010a4a3020) */

undefined1  [16] FUN_10a4a2f88(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f65ca31,0x19);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a4bca78(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a4a3060; end: 10a4a3187;  */

void FUN_10a4a3060(undefined8 param_1)

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
  puStack_80 = &UNK_10f65b2b8;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  puStack_70 = &UNK_10f65b2b8;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a4a3188(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f65bc46;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f65b2b8;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a4bd0b4();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f65bc50;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f65b2b8;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a4bd28c(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f65bc54;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x40000000064;
  puStack_70 = &UNK_10f65b2b8;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a4bd3ec(param_1,&puStack_98);
  FUN_10a4bd54c(param_1);
  return;
}



/* Entry: 10a4a3188; end: 10a4a325f;  */

/* WARNING: Removing unreachable block (ram,0x00010a4a3220) */

undefined1  [16] FUN_10a4a3188(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f65ca4b,10);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a4bcfb8(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a4a3260; end: 10a4a3983;  */

void FUN_10a4a3260(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c8,&UNK_10f65ca56,0x18);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110be7540;
  pppuVar2 = (undefined8 ***)&UNK_10f65b2b8;
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
    ppuStack_b0 = &PTR_DAT_110be7540;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110bd31d8;
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
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a4a3964;
    FUN_10a054dac(param_1,&UNK_10f65bc60,FUN_10a4bd608,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a4a3964;
    FUN_10a054dac(param_1,&UNK_10f65bc75,FUN_10a4bd738,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a4a3964;
    FUN_10a054dac(param_1,&UNK_10f65bc83,FUN_10a4bd808,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a4a3964;
    FUN_10a054dac(param_1,&UNK_10f65bc9d,FUN_10a4bd8f4,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a4a3964;
    FUN_10a054dac(param_1,&UNK_10f65bcbc,FUN_10a4bda18,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a4a3964;
    FUN_10a054dac(param_1,&UNK_10f65bcd8,FUN_10a4bdad4,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a4a3964;
    FUN_10a054dac(param_1,&UNK_10f65bcf1,FUN_10a4bdb90,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,2,0x17a,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a4a3964;
    FUN_10a054dac(param_1,&UNK_10f684ef0,FUN_10a4bdc60,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,2,0x17a,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a4a3964;
    FUN_10a054dac(param_1,&UNK_10f65bd0f,FUN_10a4be070,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,2,0x16b,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a4a3964;
    FUN_10a054dac(param_1,&UNK_10f65bd20,FUN_10a4be180,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a4a3964;
    FUN_10a054dac(param_1,&UNK_10f65bd38,FUN_10a4be32c,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,0x100,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a4a3964;
    FUN_10a054dac(param_1,&UNK_10f65bd54,FUN_10a4be72c,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x17a,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a4a3964;
    FUN_10a054dac(param_1,&UNK_10f65bd62,FUN_10a4be888,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f651ece,FUN_10a4be940,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f65bd78,FUN_10a4be9f8,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f65bd92,FUN_10a4beb58,FUN_10a4bec30);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f65bda8,FUN_10a4bed4c,FUN_10a4bee8c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f65bdb8,FUN_10a4bf078,FUN_10a4bf1b8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f65bdc7,FUN_10a4bf3a4,FUN_10a4bf4e4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f65bdd4,FUN_10a4bf6d0,0);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f65ca56,0x18);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a4a3964:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a4a3968);
  (*pcVar6)();
}



/* Entry: 10a4a3984; end: 10a4a3af3;  */

void FUN_10a4a3984(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f65bde2;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f65b2b8;
  uStack_78 = 0;
  puStack_70 = &UNK_10f65b2b8;
  uStack_68 = 0;
  uStack_60 = 0x110;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&puStack_a8);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_90 & 0xffffffff,uStack_90._4_4_,uStack_58,uStack_88 & 0xffffffff,
                uStack_88._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,puStack_a8);
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f65bdf5;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f65b2b8;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x110;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a4a3af4(param_1,&puStack_a8,0);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f480197;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f65b2b8;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x110;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a4a3af4();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f3cea7b;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f65b2b8;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x110;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a4a3af4();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a4a3af4; end: 10a4a3b97;  */

undefined8 * FUN_10a4a3af4(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  puVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)puVar2 & 1) == 0) {
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a4a3b98);
      (*pcVar1)();
    }
    aiStack_40[0] = 3;
    puStack_38 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,*param_2,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_1;
}



/* Entry: 10a4a3b98; end: 10a4a3d47;  */

void FUN_10a4a3b98(ulong param_1)

{
  ulong uVar1;
  char *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "NativePlaneTrackingType";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f65b2b8;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x110;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&pcStack_a8);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_90 & 0xffffffff,uStack_90._4_4_,uStack_58,uStack_88 & 0xffffffff,
                uStack_88._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,pcStack_a8);
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "None";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f65b2b8;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x110;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a4a3d48(param_1,&pcStack_a8,0);
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Horizontal";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f65b2b8;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x110;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a4a3d48();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Vertical";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f65b2b8;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x110;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a4a3d48();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Both";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f65b2b8;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x110;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a4a3d48();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a4a3d48; end: 10a4a3deb;  */

undefined8 * FUN_10a4a3d48(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  puVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)puVar2 & 1) == 0) {
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a4a3dec);
      (*pcVar1)();
    }
    aiStack_40[0] = 3;
    puStack_38 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,*param_2,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_1;
}



/* Entry: 10a4a3dec; end: 10a4a3edf;  */

void FUN_10a4a3dec(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110be0910;
  param_1[2] = &PTR_DAT_110be0a38;
  param_1[7] = &PTR_DAT_110be0a90;
  param_1[0xd] = &PTR_DAT_110be0ab0;
  param_1[0x60] = &PTR_DAT_110be0c08;
  param_1[0x16] = &PTR_DAT_110be0b20;
  param_1[0x17] = &PTR_DAT_110be0b50;
  param_1[0x3e] = &PTR_DAT_110be0b88;
  plVar1 = (long *)param_1[0x5f];
  param_1[0x5f] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (param_1[0x57] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  func_0x00010a004e5c(param_1 + 0x50);
  puStack_28 = param_1 + 0x4d;
  func_0x00010a26e0a4(&puStack_28);
  func_0x00010a4bfa4c(param_1 + 0x4b);
  func_0x00010a4bf9f4(param_1 + 0x49);
  func_0x00010a4bf99c(param_1 + 0x47);
  func_0x00010a4bf944(param_1 + 0x45);
  param_1[0x3e] = &PTR_DAT_110be4468;
  param_1[0x60] = &PTR_FUN_110be44e0;
  func_0x00010a004e5c(param_1 + 0x41);
  func_0x00010a004e04(param_1 + 0x3f);
  FUN_10a3c59d8(param_1,&PTR_PTR_110be0c48);
  return;
}



/* Entry: 10a4a3ee0; end: 10a4a3f23;  */

void FUN_10a4a3ee0(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110be0910;
  param_1[2] = &PTR_DAT_110be0a38;
  param_1[7] = &PTR_DAT_110be0a90;
  param_1[0xd] = &PTR_DAT_110be0ab0;
  param_1[0x60] = &PTR_DAT_110be0c08;
  param_1[0x16] = &PTR_DAT_110be0b20;
  param_1[0x17] = &PTR_DAT_110be0b50;
  param_1[0x3e] = &PTR_DAT_110be0b88;
  plVar1 = (long *)param_1[0x5f];
  param_1[0x5f] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (param_1[0x57] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  func_0x00010a004e5c(param_1 + 0x50);
  puStack_28 = param_1 + 0x4d;
  func_0x00010a26e0a4(&puStack_28);
  func_0x00010a4bfa4c(param_1 + 0x4b);
  func_0x00010a4bf9f4(param_1 + 0x49);
  func_0x00010a4bf99c(param_1 + 0x47);
  func_0x00010a4bf944(param_1 + 0x45);
  param_1[0x3e] = &PTR_DAT_110be4468;
  param_1[0x60] = &PTR_FUN_110be44e0;
  func_0x00010a004e5c(param_1 + 0x41);
  func_0x00010a004e04(param_1 + 0x3f);
  FUN_10a3c59d8(param_1,&PTR_PTR_110be0c48);
  return;
}



/* Entry: 10a4a3f24; end: 10a4a3fc7;  */

void FUN_10a4a3f24(void)

{
  FUN_10a4a3dec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a4a3fc8; end: 10a4a3ff7;  */

void FUN_10a4a3fc8(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10a4a3dec((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a4a3ff8; end: 10a4a4333;  */

undefined8 * FUN_10a4a3ff8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  param_1[0x60] = &PTR_FUN_110c383b8;
  *(undefined2 *)(param_1 + 99) = 0x100;
  param_1[0x62] = 0;
  param_1[0x61] = 0;
  puVar1 = param_1;
  FUN_10a3c575c(param_1,&PTR_PTR_110be0c48,param_2,param_3);
  FUN_10a0040d0(puVar1 + 0x3e,&PTR_PTR_110be0c60);
  *param_1 = &PTR_FUN_110be0910;
  param_1[2] = &PTR_DAT_110be0a38;
  param_1[7] = &PTR_DAT_110be0a90;
  param_1[0xd] = &PTR_DAT_110be0ab0;
  param_1[0x60] = &PTR_DAT_110be0c08;
  param_1[0x16] = &PTR_DAT_110be0b20;
  param_1[0x17] = &PTR_DAT_110be0b50;
  param_1[0x3e] = &PTR_DAT_110be0b88;
  param_1[0x43] = 0x100000001;
  *(undefined4 *)(param_1 + 0x44) = 0;
  puVar1 = (undefined8 *)0x48;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110be7078;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[8] = 0;
  puVar1[3] = &PTR_FUN_110be4528;
  puVar1[5] = &PTR_FUN_110be4580;
  param_1[0x45] = puVar1 + 3;
  param_1[0x46] = puVar1;
  puVar1 = (undefined8 *)0x48;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110be70c8;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[8] = 0;
  puVar1[3] = &PTR_DAT_110be4610;
  puVar1[5] = &PTR_FUN_110be4668;
  param_1[0x47] = puVar1 + 3;
  param_1[0x48] = puVar1;
  puVar1 = (undefined8 *)0x70;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110be7118;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0x3f4000003cf5c28f;
  puVar1[10] = 0x409000003e800000;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[3] = &PTR_DAT_110be46f8;
  puVar1[5] = &PTR_FUN_110be4750;
  *(undefined1 *)(puVar1 + 8) = 1;
  *(undefined4 *)((long)puVar1 + 100) = 0x40e00000;
  param_1[0x49] = puVar1 + 3;
  param_1[0x4a] = puVar1;
  puVar1 = (undefined8 *)0x78;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110be7168;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[3] = &PTR_DAT_110be41a0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xe] = 0;
  param_1[0x4b] = puVar1 + 3;
  param_1[0x4c] = puVar1;
  param_1[0x4d] = 0;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  puVar1 = (undefined8 *)0x58;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110bf7fc8;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  *(undefined8 *)((long)puVar1 + 0x4d) = 0;
  *(undefined8 *)((long)puVar1 + 0x45) = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  param_1[0x50] = puVar1 + 3;
  param_1[0x51] = puVar1;
  FUN_10a5cf1fc(param_1 + 0x50);
  *(undefined1 *)(param_1 + 0x52) = 0;
  *(undefined1 *)((long)param_1 + 0x29c) = 0;
  *(undefined2 *)(param_1 + 0x54) = 0;
  *(undefined8 *)((long)param_1 + 0x2a4) = 0;
  param_1[0x56] = 0;
  param_1[0x58] = 0;
  param_1[0x57] = 0;
  param_1[0x59] = 0x3f80000000000000;
  param_1[0x5b] = 0;
  param_1[0x5a] = 0;
  param_1[0x5d] = 0;
  param_1[0x5c] = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0;
  puVar1 = (undefined8 *)0x58;
  __Znwm();
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[10] = 0;
  *puVar1 = &PTR_DAT_110c38348;
  *(undefined4 *)(puVar1 + 3) = 0x3f800000;
  *(undefined4 *)(puVar1 + 5) = 0x3f800000;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined4 *)(puVar1 + 8) = 0;
  param_1[0x5f] = puVar1;
  return param_1;
}



/* Entry: 10a4a4334; end: 10a4a4b7f;  */

uint FUN_10a4a4334(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined *param_5,long *param_6)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  ulong *puVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  undefined1 uVar14;
  int iVar15;
  ulong uVar16;
  undefined8 *puVar17;
  int *piVar18;
  uint uVar19;
  undefined *unaff_x19;
  undefined8 uVar20;
  long *unaff_x20;
  long lVar21;
  undefined8 *puVar22;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long *unaff_x23;
  ulong uVar23;
  long unaff_x24;
  long unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  float fVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  float fVar31;
  float fVar32;
  undefined4 uVar33;
  float fVar34;
  undefined8 uVar35;
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
  
  do {
    puVar11 = param_5;
    fVar24 = (float)param_1;
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
    *(long **)((long)register0x00000008 + -0x58) = unaff_x27;
    *(long **)((long)register0x00000008 + -0x50) = unaff_x26;
    *(long *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(long *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    iVar15 = *(int *)(puVar11 + 0x218);
    if (iVar15 == 2) {
      iVar6 = (int)*(undefined8 *)(*(long *)(puVar11 + 0x170) + 0x8c0);
      FUN_10a25e3f4();
      iVar15 = 2;
      if (iVar6 == 0) {
        iVar15 = 0;
      }
    }
    *(int *)(puVar11 + 0x21c) = iVar15;
    uVar33 = (undefined4)*(undefined8 *)(*(long *)(puVar11 + 0x170) + 0x8c0);
    FUN_10a25e3f4();
    fVar32 = (float)param_4;
    fVar34 = (float)param_3;
    fVar39 = (float)param_2;
    *(undefined4 *)(puVar11 + 0x220) = uVar33;
    if (*(int *)(puVar11 + 0x21c) == 0) {
      if (param_6[0x15] == 0) {
        return 0;
      }
      func_0x00010a14d808();
      *(float *)((long)register0x00000008 + -0xc0) = fVar24;
      *(float *)((long)register0x00000008 + -0xbc) = fVar39;
      *(float *)((long)register0x00000008 + -0xb8) = fVar34;
      *(float *)((long)register0x00000008 + -0xb4) = fVar32;
      if ((int)param_6[0x33] == 0) {
        if ((bRam00000001137eb1b0 & 1) == 0) {
          iVar15 = 0x137eb1b0;
          *(float *)((long)register0x00000008 + -0x128) = fVar32;
          *(float *)((long)register0x00000008 + -0x124) = fVar39;
          *(float *)((long)register0x00000008 + -0x130) = fVar24;
          *(float *)((long)register0x00000008 + -300) = fVar34;
          ___cxa_guard_acquire();
          fVar24 = *(float *)((long)register0x00000008 + -0x130);
          fVar34 = *(float *)((long)register0x00000008 + -300);
          fVar32 = *(float *)((long)register0x00000008 + -0x128);
          fVar39 = *(float *)((long)register0x00000008 + -0x124);
          if (iVar15 != 0) {
            uRam00000001137eb1c8 = 0;
            uRam00000001137eb1c0 = 0x3f800000;
            uRam00000001137eb1d8 = 0x8000000080000000;
            uRam00000001137eb1d0 = 0x3f800000;
            fRam00000001137eb1e0 = -1.0;
            ___cxa_guard_release(0x1137eb1b0);
            fVar24 = *(float *)((long)register0x00000008 + -0x130);
            fVar34 = *(float *)((long)register0x00000008 + -300);
            fVar32 = *(float *)((long)register0x00000008 + -0x128);
            fVar39 = *(float *)((long)register0x00000008 + -0x124);
          }
        }
        fVar31 = (fVar39 * fVar39 + fVar34 * fVar34) * -2.0 + 1.0;
        fVar41 = fVar24 * fVar39 + fVar34 * fVar32;
        fVar41 = fVar41 + fVar41;
        fVar42 = fVar24 * fVar34 - fVar39 * fVar32;
        fVar42 = fVar42 + fVar42;
        fVar28 = fVar24 * fVar39 - fVar34 * fVar32;
        fVar28 = fVar28 + fVar28;
        fVar37 = (fVar24 * fVar24 + fVar34 * fVar34) * -2.0 + 1.0;
        fVar38 = fVar39 * fVar34 + fVar24 * fVar32;
        fVar38 = fVar38 + fVar38;
        fVar25 = fVar24 * fVar34 + fVar39 * fVar32;
        fVar25 = fVar25 + fVar25;
        fVar34 = fVar39 * fVar34 - fVar24 * fVar32;
        fVar34 = fVar34 + fVar34;
        fVar24 = (fVar24 * fVar24 + fVar39 * fVar39) * -2.0 + 1.0;
        fVar43 = fVar41 * uRam00000001137eb1c8._4_4_ + fVar31 * (float)uRam00000001137eb1c0 +
                 fVar42 * (float)uRam00000001137eb1d8;
        fVar44 = fVar41 * (float)uRam00000001137eb1d0 + fVar31 * uRam00000001137eb1c0._4_4_ +
                 fVar42 * uRam00000001137eb1d8._4_4_;
        fVar32 = fVar41 * uRam00000001137eb1d0._4_4_ + fVar31 * (float)uRam00000001137eb1c8 +
                 fVar42 * fRam00000001137eb1e0;
        fVar41 = fVar37 * uRam00000001137eb1c8._4_4_ + fVar28 * (float)uRam00000001137eb1c0 +
                 fVar38 * (float)uRam00000001137eb1d8;
        fVar42 = fVar37 * (float)uRam00000001137eb1d0 + fVar28 * uRam00000001137eb1c0._4_4_ +
                 fVar38 * uRam00000001137eb1d8._4_4_;
        fVar28 = fVar37 * uRam00000001137eb1d0._4_4_ + fVar28 * (float)uRam00000001137eb1c8 +
                 fVar38 * fRam00000001137eb1e0;
        fVar39 = fVar34 * uRam00000001137eb1c8._4_4_ + fVar25 * (float)uRam00000001137eb1c0 +
                 fVar24 * (float)uRam00000001137eb1d8;
        fVar45 = fVar34 * (float)uRam00000001137eb1d0 + fVar25 * uRam00000001137eb1c0._4_4_ +
                 fVar24 * uRam00000001137eb1d8._4_4_;
        fVar24 = fVar34 * uRam00000001137eb1d0._4_4_ + fVar25 * (float)uRam00000001137eb1c8 +
                 fVar24 * fRam00000001137eb1e0;
        fVar46 = uRam00000001137eb1c0._4_4_ * fVar41 + (float)uRam00000001137eb1c0 * fVar43 +
                 (float)uRam00000001137eb1c8 * fVar39;
        fVar25 = uRam00000001137eb1c0._4_4_ * fVar42 + (float)uRam00000001137eb1c0 * fVar44 +
                 (float)uRam00000001137eb1c8 * fVar45;
        fVar31 = uRam00000001137eb1c0._4_4_ * fVar28 + (float)uRam00000001137eb1c0 * fVar32 +
                 (float)uRam00000001137eb1c8 * fVar24;
        fVar37 = (float)uRam00000001137eb1d0 * fVar41 + uRam00000001137eb1c8._4_4_ * fVar43 +
                 uRam00000001137eb1d0._4_4_ * fVar39;
        fVar40 = (float)uRam00000001137eb1d0 * fVar42 + uRam00000001137eb1c8._4_4_ * fVar44 +
                 uRam00000001137eb1d0._4_4_ * fVar45;
        fVar38 = (float)uRam00000001137eb1d0 * fVar28 + uRam00000001137eb1c8._4_4_ * fVar32 +
                 uRam00000001137eb1d0._4_4_ * fVar24;
        fVar41 = fVar41 * uRam00000001137eb1d8._4_4_ + (float)uRam00000001137eb1d8 * fVar43 +
                 fRam00000001137eb1e0 * fVar39;
        fVar42 = uRam00000001137eb1d8._4_4_ * fVar42 + (float)uRam00000001137eb1d8 * fVar44 +
                 fRam00000001137eb1e0 * fVar45;
        fVar34 = uRam00000001137eb1d8._4_4_ * fVar28 + (float)uRam00000001137eb1d8 * fVar32 +
                 fRam00000001137eb1e0 * fVar24;
        fVar28 = (fVar46 - fVar40) - fVar34;
        fVar32 = (fVar40 - fVar46) - fVar34;
        fVar39 = (fVar34 - fVar46) - fVar40;
        fVar34 = fVar46 + fVar40 + fVar34;
        fVar24 = fVar28;
        if (fVar28 <= fVar34) {
          fVar24 = fVar34;
        }
        bVar3 = 2;
        if (fVar32 <= fVar24) {
          fVar32 = fVar24;
          bVar3 = fVar34 < fVar28;
        }
        bVar4 = 3;
        if (fVar39 <= fVar32) {
          fVar39 = fVar32;
          bVar4 = bVar3;
        }
        fVar34 = SQRT(fVar39 + 1.0) * 0.5;
        fVar28 = 0.25 / fVar34;
        if (bVar4 < 2) {
          if (bVar4 == 0) {
            fVar40 = fVar25 - fVar37;
            fVar32 = fVar34;
            fVar24 = (fVar38 - fVar42) * fVar28;
            fVar39 = (fVar41 - fVar31) * fVar28;
          }
          else {
            fVar32 = (fVar38 - fVar42) * fVar28;
            fVar40 = fVar41 + fVar31;
            fVar24 = fVar34;
            fVar39 = (fVar37 + fVar25) * fVar28;
          }
        }
        else {
          if (bVar4 != 2) {
            fVar32 = (fVar25 - fVar37) * fVar28;
            fVar24 = (fVar41 + fVar31) * fVar28;
            fVar39 = (fVar42 + fVar38) * fVar28;
            goto LAB_10a4a4a78;
          }
          fVar32 = (fVar41 - fVar31) * fVar28;
          fVar24 = (fVar37 + fVar25) * fVar28;
          fVar40 = fVar42 + fVar38;
          fVar39 = fVar34;
        }
        fVar34 = fVar40 * fVar28;
      }
LAB_10a4a4a78:
      fVar25 = fVar34 * fVar34 + fVar39 * fVar39 + fVar24 * fVar24 + fVar32 * fVar32;
      if (fVar25 == 0.0) {
        fVar32 = 1.0;
        fVar24 = 0.0;
        fVar39 = 0.0;
        fVar34 = 0.0;
      }
      else {
        fVar25 = 1.0 / SQRT(fVar25);
        fVar32 = fVar32 * fVar25;
        fVar24 = fVar24 * fVar25;
        fVar39 = fVar39 * fVar25;
        fVar34 = fVar34 * fVar25;
      }
      *(float *)((long)register0x00000008 + -0xc0) = fVar24;
      *(float *)((long)register0x00000008 + -0xbc) = fVar39;
      *(float *)((long)register0x00000008 + -0xb8) = fVar34;
      *(float *)((long)register0x00000008 + -0xb4) = fVar32;
      if ((*(byte *)(*(long *)(puVar11 + 0x228) + 0x28) & 1) == 0) {
        *(float *)((long)register0x00000008 + -0xc0) = -fVar24;
        *(float *)((long)register0x00000008 + -0xbc) = -fVar39;
        *(float *)((long)register0x00000008 + -0xb8) = -fVar34;
      }
      FUN_10a9ef23c(*(undefined8 *)(puVar11 + 0x2f8),
                    (undefined1 *)((long)register0x00000008 + -0xc0));
      return 1;
    }
    unaff_x24 = param_6[0x1a];
    if (unaff_x24 == 0) {
      return 0;
    }
    if (*(char *)(*(long *)(puVar11 + 0x248) + 0x2a) != '\x01') {
      lVar21 = *(long *)(puVar11 + 600);
      lVar12 = *(long *)(lVar21 + 0x18);
      *(undefined8 *)(lVar21 + 0x20) = 0;
      *(undefined8 *)(lVar21 + 0x28) = 0;
      *(undefined8 *)(lVar21 + 0x18) = 0;
      if (lVar12 != 0) {
        __ZdlPv();
      }
      lVar12 = *(long *)(lVar21 + 0x30);
      *(undefined8 *)(lVar21 + 0x38) = 0;
      *(undefined8 *)(lVar21 + 0x40) = 0;
      *(undefined8 *)(lVar21 + 0x30) = 0;
      if (lVar12 != 0) {
        __ZdlPv();
      }
      lVar12 = *(long *)(lVar21 + 0x48);
      *(undefined8 *)(lVar21 + 0x50) = 0;
      *(undefined8 *)(lVar21 + 0x58) = 0;
      *(undefined8 *)(lVar21 + 0x48) = 0;
      if (lVar12 != 0) {
        __ZdlPv();
      }
      goto LAB_10a4a4910;
    }
    unaff_x26 = (long *)param_6[0x26];
    if (unaff_x26 == (long *)0x0) goto LAB_10a4a4910;
    unaff_x25 = *(long *)(puVar11 + 600);
    if ((*(int *)(puVar11 + 0x21c) == 2) &&
       (*(int *)(*(long *)(*(long *)(puVar11 + 0x170) + 0xa20) + 0x18) < 0x88)) {
      uVar20 = *(undefined8 *)(puVar11 + 0x2c0);
      *(undefined8 *)((long)register0x00000008 + -0xb8) = *(undefined8 *)(puVar11 + 0x2c8);
      *(undefined8 *)((long)register0x00000008 + -0xc0) = uVar20;
      param_1 = *(undefined8 *)(puVar11 + 0x2cc);
      *(undefined8 *)((long)register0x00000008 + -0xac) = *(undefined8 *)(puVar11 + 0x2d4);
      *(undefined8 *)((long)register0x00000008 + -0xb4) = param_1;
    }
    else {
      param_1 = 0;
      *(undefined8 *)((long)register0x00000008 + -0xb8) = 0x3f80000000000000;
      *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
      *(undefined4 *)((long)register0x00000008 + -0xa8) = 0;
    }
    puVar22 = (undefined8 *)(unaff_x25 + 0x18);
    *(undefined8 *)(unaff_x25 + 0x20) = *puVar22;
    param_6 = (long *)((unaff_x26[1] - *unaff_x26 >> 2) * -0x5555555555555555);
    puVar17 = puVar22;
    func_0x00010983ca2c();
    lVar12 = *unaff_x26;
    lVar21 = unaff_x26[1];
    while( true ) {
      fVar24 = (float)param_1;
      fVar32 = (float)param_3;
      if (lVar12 == lVar21) break;
      func_0x00010a4af7a4((undefined1 *)((long)register0x00000008 + -0xc0),lVar12);
      param_3 = (ulong)(uint)(fVar32 + *(float *)((long)register0x00000008 + -0xa8));
      param_4 = *(undefined8 *)((long)register0x00000008 + -0xb0);
      param_1 = CONCAT44((float)((ulong)param_4 >> 0x20) + (float)param_2,(float)param_4 + fVar24);
      *(undefined8 *)((long)register0x00000008 + -0x100) = param_1;
      *(float *)((long)register0x00000008 + -0xf8) =
           fVar32 + *(float *)((long)register0x00000008 + -0xa8);
      param_6 = (long *)((long)register0x00000008 + -0x100);
      puVar17 = puVar22;
      FUN_10a123714();
      lVar12 = lVar12 + 0xc;
    }
    unaff_x21 = (undefined8 *)(unaff_x25 + 0x30);
    unaff_x22 = (undefined8 *)*unaff_x21;
    unaff_x20 = (long *)unaff_x26[3];
    unaff_x27 = (long *)unaff_x26[4];
    uVar23 = (long)unaff_x27 - (long)unaff_x20;
    uVar16 = *(ulong *)(unaff_x25 + 0x40);
    if (uVar16 - (long)unaff_x22 < uVar23) {
      unaff_x23 = (long *)((long)uVar23 >> 2);
      if (unaff_x22 != (undefined8 *)0x0) {
        *(undefined8 **)(unaff_x25 + 0x38) = unaff_x22;
        puVar17 = unaff_x22;
        __ZdlPv();
        uVar16 = 0;
        *unaff_x21 = 0;
        *(undefined8 *)(unaff_x25 + 0x38) = 0;
        *(undefined8 *)(unaff_x25 + 0x40) = 0;
      }
      if ((ulong)unaff_x23 >> 0x3e == 0) {
        param_6 = (long *)((long)uVar16 >> 1);
        if ((long *)((long)uVar16 >> 1) <= unaff_x23) {
          param_6 = unaff_x23;
        }
        if (0x7ffffffffffffffb < uVar16) {
          param_6 = (long *)0x3fffffffffffffff;
        }
        FUN_109ffe174();
        puVar17 = *(undefined8 **)(unaff_x25 + 0x38);
        for (; unaff_x20 != unaff_x27; unaff_x20 = (long *)((long)unaff_x20 + 4)) {
          *(int *)puVar17 = (int)*unaff_x20;
          puVar17 = (undefined8 *)((long)puVar17 + 4);
        }
        goto LAB_10a4a4808;
      }
      FUN_109ffe1ac();
    }
    else {
      puVar22 = *(undefined8 **)(unaff_x25 + 0x38);
      unaff_x21 = puVar17;
      if ((ulong)((long)puVar22 - (long)unaff_x22) < uVar23) {
        plVar8 = (long *)(((long)puVar22 - (long)unaff_x22) + (long)unaff_x20);
        puVar17 = puVar22;
        if (puVar22 != unaff_x22) {
          _memmove();
          puVar22 = *(undefined8 **)(unaff_x25 + 0x38);
          puVar17 = puVar22;
          param_6 = unaff_x20;
          unaff_x21 = unaff_x22;
        }
        for (; plVar8 != unaff_x27; plVar8 = (long *)((long)plVar8 + 4)) {
          *(int *)puVar22 = (int)*plVar8;
          puVar22 = (undefined8 *)((long)puVar22 + 4);
          puVar17 = (undefined8 *)((long)puVar17 + 4);
        }
      }
      else {
        if (unaff_x27 != unaff_x20) {
          unaff_x21 = unaff_x22;
          _memmove(unaff_x22,unaff_x20,uVar23);
          param_6 = unaff_x20;
        }
        puVar17 = (undefined8 *)((long)unaff_x22 + uVar23);
      }
LAB_10a4a4808:
      *(undefined8 **)(unaff_x25 + 0x38) = puVar17;
      puVar22 = (undefined8 *)(unaff_x25 + 0x48);
      unaff_x22 = (undefined8 *)*puVar22;
      unaff_x20 = (long *)unaff_x26[6];
      unaff_x26 = (long *)unaff_x26[7];
      uVar23 = (long)unaff_x26 - (long)unaff_x20;
      uVar16 = *(ulong *)(unaff_x25 + 0x58);
      if (uVar23 <= uVar16 - (long)unaff_x22) {
        puVar17 = *(undefined8 **)(unaff_x25 + 0x50);
        if ((ulong)((long)puVar17 - (long)unaff_x22) < uVar23) {
          plVar8 = (long *)(((long)puVar17 - (long)unaff_x22) + (long)unaff_x20);
          puVar22 = puVar17;
          if (puVar17 != unaff_x22) {
            _memmove(unaff_x22,unaff_x20);
            puVar17 = *(undefined8 **)(unaff_x25 + 0x50);
            puVar22 = puVar17;
          }
          for (; plVar8 != unaff_x26; plVar8 = (long *)((long)plVar8 + 4)) {
            *(int *)puVar17 = (int)*plVar8;
            puVar17 = (undefined8 *)((long)puVar17 + 4);
            puVar22 = (undefined8 *)((long)puVar22 + 4);
          }
        }
        else {
          if (unaff_x26 != unaff_x20) {
            _memmove(unaff_x22,unaff_x20,uVar23);
          }
          puVar22 = (undefined8 *)((long)unaff_x22 + uVar23);
        }
        goto LAB_10a4a490c;
      }
      unaff_x23 = (long *)((long)uVar23 >> 2);
      puVar17 = unaff_x21;
      if (unaff_x22 != (undefined8 *)0x0) {
        *(undefined8 **)(unaff_x25 + 0x50) = unaff_x22;
        puVar17 = unaff_x22;
        __ZdlPv();
        uVar16 = 0;
        *puVar22 = 0;
        *(undefined8 *)(unaff_x25 + 0x50) = 0;
        *(undefined8 *)(unaff_x25 + 0x58) = 0;
      }
      unaff_x21 = puVar22;
      if ((ulong)unaff_x23 >> 0x3e == 0) {
        plVar8 = (long *)((long)uVar16 >> 1);
        if ((long *)((long)uVar16 >> 1) <= unaff_x23) {
          plVar8 = unaff_x23;
        }
        if (0x7ffffffffffffffb < uVar16) {
          plVar8 = (long *)0x3fffffffffffffff;
        }
        FUN_10a0ca600(puVar22,plVar8);
        puVar22 = *(undefined8 **)(unaff_x25 + 0x50);
        for (; unaff_x20 != unaff_x26; unaff_x20 = (long *)((long)unaff_x20 + 4)) {
          *(int *)puVar22 = (int)*unaff_x20;
          puVar22 = (undefined8 *)((long)puVar22 + 4);
        }
LAB_10a4a490c:
        *(undefined8 **)(unaff_x25 + 0x50) = puVar22;
LAB_10a4a4910:
        if (puVar11 + 0x268 != (undefined *)(*(long *)(*(long *)(puVar11 + 0x170) + 0x8c0) + 0x88))
        {
          FUN_10a4af818();
        }
        *(undefined4 *)(puVar11 + 0x220) = *(undefined4 *)(unaff_x24 + 4);
        uVar30 = *(undefined8 *)(unaff_x24 + 0x10);
        uVar20 = *(undefined8 *)(unaff_x24 + 8);
        uVar27 = *(undefined8 *)(unaff_x24 + 0x20);
        uVar26 = *(undefined8 *)(unaff_x24 + 0x18);
        uVar29 = *(undefined8 *)(unaff_x24 + 0x28);
        uVar36 = *(undefined8 *)(unaff_x24 + 0x40);
        uVar35 = *(undefined8 *)(unaff_x24 + 0x38);
        *(undefined8 *)((long)register0x00000008 + -0xd8) = *(undefined8 *)(unaff_x24 + 0x30);
        *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar29;
        *(undefined8 *)((long)register0x00000008 + -200) = uVar36;
        *(undefined8 *)((long)register0x00000008 + -0xd0) = uVar35;
        *(undefined8 *)((long)register0x00000008 + -0xf8) = uVar30;
        *(undefined8 *)((long)register0x00000008 + -0x100) = uVar20;
        *(undefined8 *)((long)register0x00000008 + -0xe8) = uVar27;
        *(undefined8 *)((long)register0x00000008 + -0xf0) = uVar26;
        func_0x0001094f5708((undefined1 *)((long)register0x00000008 + -0xc0),
                            (undefined1 *)((long)register0x00000008 + -0x100));
        uVar33 = (undefined4)uVar35;
        FUN_10a05181c((undefined1 *)((long)register0x00000008 + -0x7c),
                      (undefined1 *)((long)register0x00000008 + -0xc0));
        *(undefined8 *)((long)register0x00000008 + -0xb8) =
             *(undefined8 *)((long)register0x00000008 + -0x74);
        *(undefined8 *)((long)register0x00000008 + -0xc0) =
             *(undefined8 *)((long)register0x00000008 + -0x7c);
        fVar24 = *(float *)((long)register0x00000008 + -100) * 100.0;
        uVar30 = *(undefined8 *)((long)register0x00000008 + -0x6c);
        uVar20 = CONCAT44((float)((ulong)uVar30 >> 0x20) * 100.0,(float)uVar30 * 100.0);
        *(undefined8 *)((long)register0x00000008 + -0xb0) = uVar20;
        *(float *)((long)register0x00000008 + -0xa8) = fVar24;
        if ((*(int *)(puVar11 + 0x21c) == 2) &&
           (*(int *)(*(long *)(*(long *)(puVar11 + 0x170) + 0xa20) + 0x18) < 0x88)) {
          func_0x00010a4af750(puVar11 + 0x2c0,(undefined1 *)((long)register0x00000008 + -0xc0));
          *(float *)((long)register0x00000008 + -0x120) = fVar24;
          fVar32 = (float)uVar20;
          *(float *)((long)register0x00000008 + -0x11c) = fVar32;
          fVar39 = (float)uVar30;
          *(float *)((long)register0x00000008 + -0x118) = fVar39;
          *(undefined4 *)((long)register0x00000008 + -0x114) = uVar33;
          func_0x00010a4af7a4(puVar11 + 0x2c0,(undefined1 *)((long)register0x00000008 + -0xb0));
          fVar34 = *(float *)(puVar11 + 0x2d8);
          *(ulong *)((long)register0x00000008 + -0x110) =
               CONCAT44((float)((ulong)*(undefined8 *)(puVar11 + 0x2d0) >> 0x20) + fVar32,
                        (float)*(undefined8 *)(puVar11 + 0x2d0) + fVar24);
          *(float *)((long)register0x00000008 + -0x108) = fVar39 + fVar34;
        }
        else {
          *(undefined8 *)((long)register0x00000008 + -0x118) =
               *(undefined8 *)((long)register0x00000008 + -0xb8);
          *(undefined8 *)((long)register0x00000008 + -0x120) =
               *(undefined8 *)((long)register0x00000008 + -0xc0);
          *(undefined8 *)((long)register0x00000008 + -0x10c) =
               *(undefined8 *)((long)register0x00000008 + -0xac);
          *(undefined8 *)((long)register0x00000008 + -0x114) =
               *(undefined8 *)((long)register0x00000008 + -0xb4);
        }
        uVar20 = *(undefined8 *)(*(long *)(puVar11 + 0x168) + 0x140);
        FUN_10a3e3894(uVar20,(undefined1 *)((long)register0x00000008 + -0x110));
        FUN_10a3e82bc(uVar20,(undefined1 *)((long)register0x00000008 + -0x120));
        return 1;
      }
    }
    FUN_10a001cf8();
    if ((uint)param_6 < 2) {
      return 1;
    }
    if ((uint)param_6 == 2) break;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x140);
    *(undefined1 **)((long)register0x00000008 + -0x140) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x138) = FUN_10a4a4b80;
    puVar13 = &UNK_10f65be31;
    unaff_x30 = FUN_10a4a4bb4;
    FUN_10a00946c();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x140);
    param_5 = puVar13 + -0x1f0;
    unaff_x19 = puVar11;
  } while( true );
  lVar12 = *(long *)(puVar17[0x2e] + 0x8c0);
  *(undefined8 **)((long)register0x00000008 + -0x160) = unaff_x22;
  *(undefined8 **)((long)register0x00000008 + -0x158) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x150) = unaff_x20;
  *(undefined **)((long)register0x00000008 + -0x148) = puVar11;
  *(undefined1 **)((long)register0x00000008 + -0x140) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x138) = FUN_10a4a4b80;
  if (*(long *)(lVar12 + 0x10) != 0) {
    if (((*(long *)(lVar12 + 0x18) != 0) &&
        (piVar18 = *(int **)(*(long *)(lVar12 + 0x18) + 0xd0), piVar18 != (int *)0x0)) &&
       (*piVar18 == 2)) {
      uVar19 = 1;
      goto LAB_10a25e588;
    }
    puVar7 = *(ulong **)(*(long *)(lVar12 + 0x10) + 0x1c8);
    (**(code **)(*puVar7 + 0x80))();
    *(undefined8 *)((long)register0x00000008 + -0x170) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x168) = 0;
    plVar8 = (long *)puVar7[1];
    if (plVar8 == (long *)0x0) {
LAB_10a25e494:
      plVar8 = *(long **)(*(long *)(lVar12 + 0x10) + 0x1c8);
      (**(code **)(*plVar8 + 0xc0))();
      plVar9 = (long *)plVar8[1];
      if (plVar9 == (long *)0x0) {
LAB_10a25e4ec:
        bVar5 = true;
      }
      else {
        __ZNSt3__119__shared_weak_count4lockEv();
        *(long **)((long)register0x00000008 + -0x188) = plVar9;
        if (plVar9 == (long *)0x0) goto LAB_10a25e4ec;
        plVar10 = (long *)*plVar8;
        *(long **)((long)register0x00000008 + -400) = plVar10;
        bVar5 = plVar10 == (long *)0x0;
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x48))();
          plVar8 = plVar10;
        }
        plVar10 = plVar9 + 1;
        do {
          lVar12 = *plVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar2) {
            *plVar10 = lVar12 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      uVar19 = (uint)plVar8;
      plVar8 = *(long **)((long)register0x00000008 + -0x168);
      if (plVar8 != (long *)0x0) goto LAB_10a25e568;
    }
    else {
      __ZNSt3__119__shared_weak_count4lockEv();
      *(long **)((long)register0x00000008 + -0x168) = plVar8;
      if (plVar8 == (long *)0x0) goto LAB_10a25e494;
      plVar9 = (long *)*puVar7;
      *(long **)((long)register0x00000008 + -0x170) = plVar9;
      if (plVar9 == (long *)0x0) goto LAB_10a25e494;
      lVar12 = *(long *)(lVar12 + 0x18);
      if (lVar12 == 0) {
        uVar14 = 0;
        *(undefined8 *)((long)register0x00000008 + -0x180) = 0;
        *(undefined1 *)((long)register0x00000008 + -0x178) = 0;
      }
      else {
        uVar14 = *(undefined1 *)(lVar12 + 0x18);
        *(undefined8 *)((long)register0x00000008 + -0x180) = *(undefined8 *)(lVar12 + 0x20);
        *(undefined1 *)((long)register0x00000008 + -0x178) = *(undefined1 *)(lVar12 + 0x28);
      }
      *(undefined1 *)((long)register0x00000008 + -0x188) = uVar14;
      *(undefined ***)((long)register0x00000008 + -400) = &PTR_DAT_110ba5598;
      (**(code **)(*plVar9 + 0x68))(plVar9,(undefined1 *)((long)register0x00000008 + -400),0);
      bVar5 = false;
      uVar19 = (uint)((ulong)plVar9 >> 9) & 1;
LAB_10a25e568:
      plVar9 = plVar8 + 1;
      do {
        lVar12 = *plVar9;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar2) {
          *plVar9 = lVar12 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    if (!bVar5) goto LAB_10a25e588;
  }
  uVar19 = 0;
LAB_10a25e588:
  return uVar19 & 1;
}



/* Entry: 10a4a4b80; end: 10a4a4bb3;  */

uint FUN_10a4a4b80(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 *param_5,long *param_6)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  ulong *puVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined *puVar12;
  undefined1 uVar13;
  int iVar14;
  ulong uVar15;
  undefined8 *puVar16;
  int *piVar17;
  uint uVar18;
  undefined8 uVar19;
  undefined *unaff_x19;
  long lVar20;
  undefined8 *puVar21;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  ulong uVar22;
  long *unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  float fVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  float fVar30;
  float fVar31;
  undefined4 uVar32;
  float fVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  
  while( true ) {
    fVar23 = (float)param_1;
    if ((uint)param_6 < 2) {
      return 1;
    }
    if ((uint)param_6 == 2) break;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar12 = &UNK_10f65be31;
    FUN_10a00946c();
    *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x28;
    *(long **)((long)register0x00000008 + -0x68) = unaff_x27;
    *(long **)((long)register0x00000008 + -0x60) = unaff_x26;
    *(long *)((long)register0x00000008 + -0x58) = unaff_x25;
    *(long *)((long)register0x00000008 + -0x50) = unaff_x24;
    *(long **)((long)register0x00000008 + -0x48) = unaff_x23;
    *(undefined8 **)((long)register0x00000008 + -0x40) = unaff_x22;
    *(undefined8 **)((long)register0x00000008 + -0x38) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x30) = unaff_x20;
    *(undefined **)((long)register0x00000008 + -0x28) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x20) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x18) = FUN_10a4a4bb4;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x20);
    iVar14 = *(int *)(puVar12 + 0x28);
    if (iVar14 == 2) {
      iVar6 = (int)*(undefined8 *)(*(long *)(puVar12 + -0x80) + 0x8c0);
      FUN_10a25e3f4();
      iVar14 = 2;
      if (iVar6 == 0) {
        iVar14 = 0;
      }
    }
    *(int *)(puVar12 + 0x2c) = iVar14;
    uVar32 = (undefined4)*(undefined8 *)(*(long *)(puVar12 + -0x80) + 0x8c0);
    FUN_10a25e3f4();
    fVar31 = (float)param_4;
    fVar33 = (float)param_3;
    fVar38 = (float)param_2;
    *(undefined4 *)(puVar12 + 0x30) = uVar32;
    if (*(int *)(puVar12 + 0x2c) == 0) {
      if (param_6[0x15] == 0) {
        return 0;
      }
      func_0x00010a14d808();
      *(float *)((long)register0x00000008 + -0xd0) = fVar23;
      *(float *)((long)register0x00000008 + -0xcc) = fVar38;
      *(float *)((long)register0x00000008 + -200) = fVar33;
      *(float *)((long)register0x00000008 + -0xc4) = fVar31;
      if ((int)param_6[0x33] == 0) {
        if ((bRam00000001137eb1b0 & 1) == 0) {
          iVar14 = 0x137eb1b0;
          *(float *)((long)register0x00000008 + -0x138) = fVar31;
          *(float *)((long)register0x00000008 + -0x134) = fVar38;
          *(float *)((long)register0x00000008 + -0x140) = fVar23;
          *(float *)((long)register0x00000008 + -0x13c) = fVar33;
          ___cxa_guard_acquire();
          fVar23 = *(float *)((long)register0x00000008 + -0x140);
          fVar33 = *(float *)((long)register0x00000008 + -0x13c);
          fVar31 = *(float *)((long)register0x00000008 + -0x138);
          fVar38 = *(float *)((long)register0x00000008 + -0x134);
          if (iVar14 != 0) {
            uRam00000001137eb1c8 = 0;
            uRam00000001137eb1c0 = 0x3f800000;
            uRam00000001137eb1d8 = 0x8000000080000000;
            uRam00000001137eb1d0 = 0x3f800000;
            fRam00000001137eb1e0 = -1.0;
            ___cxa_guard_release(0x1137eb1b0);
            fVar23 = *(float *)((long)register0x00000008 + -0x140);
            fVar33 = *(float *)((long)register0x00000008 + -0x13c);
            fVar31 = *(float *)((long)register0x00000008 + -0x138);
            fVar38 = *(float *)((long)register0x00000008 + -0x134);
          }
        }
        fVar30 = (fVar38 * fVar38 + fVar33 * fVar33) * -2.0 + 1.0;
        fVar40 = fVar23 * fVar38 + fVar33 * fVar31;
        fVar40 = fVar40 + fVar40;
        fVar41 = fVar23 * fVar33 - fVar38 * fVar31;
        fVar41 = fVar41 + fVar41;
        fVar27 = fVar23 * fVar38 - fVar33 * fVar31;
        fVar27 = fVar27 + fVar27;
        fVar36 = (fVar23 * fVar23 + fVar33 * fVar33) * -2.0 + 1.0;
        fVar37 = fVar38 * fVar33 + fVar23 * fVar31;
        fVar37 = fVar37 + fVar37;
        fVar24 = fVar23 * fVar33 + fVar38 * fVar31;
        fVar24 = fVar24 + fVar24;
        fVar33 = fVar38 * fVar33 - fVar23 * fVar31;
        fVar33 = fVar33 + fVar33;
        fVar23 = (fVar23 * fVar23 + fVar38 * fVar38) * -2.0 + 1.0;
        fVar42 = fVar40 * uRam00000001137eb1c8._4_4_ + fVar30 * (float)uRam00000001137eb1c0 +
                 fVar41 * (float)uRam00000001137eb1d8;
        fVar43 = fVar40 * (float)uRam00000001137eb1d0 + fVar30 * uRam00000001137eb1c0._4_4_ +
                 fVar41 * uRam00000001137eb1d8._4_4_;
        fVar31 = fVar40 * uRam00000001137eb1d0._4_4_ + fVar30 * (float)uRam00000001137eb1c8 +
                 fVar41 * fRam00000001137eb1e0;
        fVar40 = fVar36 * uRam00000001137eb1c8._4_4_ + fVar27 * (float)uRam00000001137eb1c0 +
                 fVar37 * (float)uRam00000001137eb1d8;
        fVar41 = fVar36 * (float)uRam00000001137eb1d0 + fVar27 * uRam00000001137eb1c0._4_4_ +
                 fVar37 * uRam00000001137eb1d8._4_4_;
        fVar27 = fVar36 * uRam00000001137eb1d0._4_4_ + fVar27 * (float)uRam00000001137eb1c8 +
                 fVar37 * fRam00000001137eb1e0;
        fVar38 = fVar33 * uRam00000001137eb1c8._4_4_ + fVar24 * (float)uRam00000001137eb1c0 +
                 fVar23 * (float)uRam00000001137eb1d8;
        fVar44 = fVar33 * (float)uRam00000001137eb1d0 + fVar24 * uRam00000001137eb1c0._4_4_ +
                 fVar23 * uRam00000001137eb1d8._4_4_;
        fVar23 = fVar33 * uRam00000001137eb1d0._4_4_ + fVar24 * (float)uRam00000001137eb1c8 +
                 fVar23 * fRam00000001137eb1e0;
        fVar45 = uRam00000001137eb1c0._4_4_ * fVar40 + (float)uRam00000001137eb1c0 * fVar42 +
                 (float)uRam00000001137eb1c8 * fVar38;
        fVar24 = uRam00000001137eb1c0._4_4_ * fVar41 + (float)uRam00000001137eb1c0 * fVar43 +
                 (float)uRam00000001137eb1c8 * fVar44;
        fVar30 = uRam00000001137eb1c0._4_4_ * fVar27 + (float)uRam00000001137eb1c0 * fVar31 +
                 (float)uRam00000001137eb1c8 * fVar23;
        fVar36 = (float)uRam00000001137eb1d0 * fVar40 + uRam00000001137eb1c8._4_4_ * fVar42 +
                 uRam00000001137eb1d0._4_4_ * fVar38;
        fVar39 = (float)uRam00000001137eb1d0 * fVar41 + uRam00000001137eb1c8._4_4_ * fVar43 +
                 uRam00000001137eb1d0._4_4_ * fVar44;
        fVar37 = (float)uRam00000001137eb1d0 * fVar27 + uRam00000001137eb1c8._4_4_ * fVar31 +
                 uRam00000001137eb1d0._4_4_ * fVar23;
        fVar40 = fVar40 * uRam00000001137eb1d8._4_4_ + (float)uRam00000001137eb1d8 * fVar42 +
                 fRam00000001137eb1e0 * fVar38;
        fVar41 = uRam00000001137eb1d8._4_4_ * fVar41 + (float)uRam00000001137eb1d8 * fVar43 +
                 fRam00000001137eb1e0 * fVar44;
        fVar33 = uRam00000001137eb1d8._4_4_ * fVar27 + (float)uRam00000001137eb1d8 * fVar31 +
                 fRam00000001137eb1e0 * fVar23;
        fVar27 = (fVar45 - fVar39) - fVar33;
        fVar31 = (fVar39 - fVar45) - fVar33;
        fVar38 = (fVar33 - fVar45) - fVar39;
        fVar33 = fVar45 + fVar39 + fVar33;
        fVar23 = fVar27;
        if (fVar27 <= fVar33) {
          fVar23 = fVar33;
        }
        bVar3 = 2;
        if (fVar31 <= fVar23) {
          fVar31 = fVar23;
          bVar3 = fVar33 < fVar27;
        }
        bVar4 = 3;
        if (fVar38 <= fVar31) {
          fVar38 = fVar31;
          bVar4 = bVar3;
        }
        fVar33 = SQRT(fVar38 + 1.0) * 0.5;
        fVar27 = 0.25 / fVar33;
        if (bVar4 < 2) {
          if (bVar4 == 0) {
            fVar39 = fVar24 - fVar36;
            fVar31 = fVar33;
            fVar23 = (fVar37 - fVar41) * fVar27;
            fVar38 = (fVar40 - fVar30) * fVar27;
          }
          else {
            fVar31 = (fVar37 - fVar41) * fVar27;
            fVar39 = fVar40 + fVar30;
            fVar23 = fVar33;
            fVar38 = (fVar36 + fVar24) * fVar27;
          }
        }
        else {
          if (bVar4 != 2) {
            fVar31 = (fVar24 - fVar36) * fVar27;
            fVar23 = (fVar40 + fVar30) * fVar27;
            fVar38 = (fVar41 + fVar37) * fVar27;
            goto LAB_10a4a4a78;
          }
          fVar31 = (fVar40 - fVar30) * fVar27;
          fVar23 = (fVar36 + fVar24) * fVar27;
          fVar39 = fVar41 + fVar37;
          fVar38 = fVar33;
        }
        fVar33 = fVar39 * fVar27;
      }
LAB_10a4a4a78:
      fVar24 = fVar33 * fVar33 + fVar38 * fVar38 + fVar23 * fVar23 + fVar31 * fVar31;
      if (fVar24 == 0.0) {
        fVar31 = 1.0;
        fVar23 = 0.0;
        fVar38 = 0.0;
        fVar33 = 0.0;
      }
      else {
        fVar24 = 1.0 / SQRT(fVar24);
        fVar31 = fVar31 * fVar24;
        fVar23 = fVar23 * fVar24;
        fVar38 = fVar38 * fVar24;
        fVar33 = fVar33 * fVar24;
      }
      *(float *)((long)register0x00000008 + -0xd0) = fVar23;
      *(float *)((long)register0x00000008 + -0xcc) = fVar38;
      *(float *)((long)register0x00000008 + -200) = fVar33;
      *(float *)((long)register0x00000008 + -0xc4) = fVar31;
      if ((*(byte *)(*(long *)(puVar12 + 0x38) + 0x28) & 1) == 0) {
        *(float *)((long)register0x00000008 + -0xd0) = -fVar23;
        *(float *)((long)register0x00000008 + -0xcc) = -fVar38;
        *(float *)((long)register0x00000008 + -200) = -fVar33;
      }
      FUN_10a9ef23c(*(undefined8 *)(puVar12 + 0x108),
                    (undefined1 *)((long)register0x00000008 + -0xd0));
      return 1;
    }
    unaff_x24 = param_6[0x1a];
    if (unaff_x24 == 0) {
      return 0;
    }
    if (*(char *)(*(long *)(puVar12 + 0x58) + 0x2a) != '\x01') {
      lVar20 = *(long *)(puVar12 + 0x68);
      lVar11 = *(long *)(lVar20 + 0x18);
      *(undefined8 *)(lVar20 + 0x20) = 0;
      *(undefined8 *)(lVar20 + 0x28) = 0;
      *(undefined8 *)(lVar20 + 0x18) = 0;
      if (lVar11 != 0) {
        __ZdlPv();
      }
      lVar11 = *(long *)(lVar20 + 0x30);
      *(undefined8 *)(lVar20 + 0x38) = 0;
      *(undefined8 *)(lVar20 + 0x40) = 0;
      *(undefined8 *)(lVar20 + 0x30) = 0;
      if (lVar11 != 0) {
        __ZdlPv();
      }
      lVar11 = *(long *)(lVar20 + 0x48);
      *(undefined8 *)(lVar20 + 0x50) = 0;
      *(undefined8 *)(lVar20 + 0x58) = 0;
      *(undefined8 *)(lVar20 + 0x48) = 0;
      if (lVar11 != 0) {
        __ZdlPv();
      }
      goto LAB_10a4a4910;
    }
    unaff_x26 = (long *)param_6[0x26];
    if (unaff_x26 == (long *)0x0) goto LAB_10a4a4910;
    unaff_x25 = *(long *)(puVar12 + 0x68);
    if ((*(int *)(puVar12 + 0x2c) == 2) &&
       (*(int *)(*(long *)(*(long *)(puVar12 + -0x80) + 0xa20) + 0x18) < 0x88)) {
      uVar19 = *(undefined8 *)(puVar12 + 0xd0);
      *(undefined8 *)((long)register0x00000008 + -200) = *(undefined8 *)(puVar12 + 0xd8);
      *(undefined8 *)((long)register0x00000008 + -0xd0) = uVar19;
      param_1 = *(undefined8 *)(puVar12 + 0xdc);
      *(undefined8 *)((long)register0x00000008 + -0xbc) = *(undefined8 *)(puVar12 + 0xe4);
      *(undefined8 *)((long)register0x00000008 + -0xc4) = param_1;
    }
    else {
      param_1 = 0;
      *(undefined8 *)((long)register0x00000008 + -200) = 0x3f80000000000000;
      *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
      *(undefined4 *)((long)register0x00000008 + -0xb8) = 0;
    }
    puVar21 = (undefined8 *)(unaff_x25 + 0x18);
    *(undefined8 *)(unaff_x25 + 0x20) = *puVar21;
    param_6 = (long *)((unaff_x26[1] - *unaff_x26 >> 2) * -0x5555555555555555);
    param_5 = puVar21;
    func_0x00010983ca2c();
    lVar11 = *unaff_x26;
    lVar20 = unaff_x26[1];
    while( true ) {
      fVar23 = (float)param_1;
      fVar31 = (float)param_3;
      if (lVar11 == lVar20) break;
      func_0x00010a4af7a4((undefined1 *)((long)register0x00000008 + -0xd0),lVar11);
      param_3 = (ulong)(uint)(fVar31 + *(float *)((long)register0x00000008 + -0xb8));
      param_4 = *(undefined8 *)((long)register0x00000008 + -0xc0);
      param_1 = CONCAT44((float)((ulong)param_4 >> 0x20) + (float)param_2,(float)param_4 + fVar23);
      *(undefined8 *)((long)register0x00000008 + -0x110) = param_1;
      *(float *)((long)register0x00000008 + -0x108) =
           fVar31 + *(float *)((long)register0x00000008 + -0xb8);
      param_6 = (long *)((long)register0x00000008 + -0x110);
      param_5 = puVar21;
      FUN_10a123714();
      lVar11 = lVar11 + 0xc;
    }
    unaff_x21 = (undefined8 *)(unaff_x25 + 0x30);
    unaff_x22 = (undefined8 *)*unaff_x21;
    unaff_x20 = (long *)unaff_x26[3];
    unaff_x27 = (long *)unaff_x26[4];
    uVar22 = (long)unaff_x27 - (long)unaff_x20;
    uVar15 = *(ulong *)(unaff_x25 + 0x40);
    if (uVar15 - (long)unaff_x22 < uVar22) {
      unaff_x23 = (long *)((long)uVar22 >> 2);
      if (unaff_x22 != (undefined8 *)0x0) {
        *(undefined8 **)(unaff_x25 + 0x38) = unaff_x22;
        param_5 = unaff_x22;
        __ZdlPv();
        uVar15 = 0;
        *unaff_x21 = 0;
        *(undefined8 *)(unaff_x25 + 0x38) = 0;
        *(undefined8 *)(unaff_x25 + 0x40) = 0;
      }
      if ((ulong)unaff_x23 >> 0x3e == 0) {
        param_6 = (long *)((long)uVar15 >> 1);
        if ((long *)((long)uVar15 >> 1) <= unaff_x23) {
          param_6 = unaff_x23;
        }
        if (0x7ffffffffffffffb < uVar15) {
          param_6 = (long *)0x3fffffffffffffff;
        }
        FUN_109ffe174();
        puVar16 = *(undefined8 **)(unaff_x25 + 0x38);
        for (; unaff_x20 != unaff_x27; unaff_x20 = (long *)((long)unaff_x20 + 4)) {
          *(int *)puVar16 = (int)*unaff_x20;
          puVar16 = (undefined8 *)((long)puVar16 + 4);
        }
        goto LAB_10a4a4808;
      }
      FUN_109ffe1ac();
    }
    else {
      puVar21 = *(undefined8 **)(unaff_x25 + 0x38);
      unaff_x21 = param_5;
      if ((ulong)((long)puVar21 - (long)unaff_x22) < uVar22) {
        plVar8 = (long *)(((long)puVar21 - (long)unaff_x22) + (long)unaff_x20);
        puVar16 = puVar21;
        if (puVar21 != unaff_x22) {
          _memmove();
          puVar21 = *(undefined8 **)(unaff_x25 + 0x38);
          puVar16 = puVar21;
          param_6 = unaff_x20;
          unaff_x21 = unaff_x22;
        }
        for (; plVar8 != unaff_x27; plVar8 = (long *)((long)plVar8 + 4)) {
          *(int *)puVar21 = (int)*plVar8;
          puVar21 = (undefined8 *)((long)puVar21 + 4);
          puVar16 = (undefined8 *)((long)puVar16 + 4);
        }
      }
      else {
        if (unaff_x27 != unaff_x20) {
          unaff_x21 = unaff_x22;
          _memmove(unaff_x22,unaff_x20,uVar22);
          param_6 = unaff_x20;
        }
        puVar16 = (undefined8 *)((long)unaff_x22 + uVar22);
      }
LAB_10a4a4808:
      *(undefined8 **)(unaff_x25 + 0x38) = puVar16;
      puVar21 = (undefined8 *)(unaff_x25 + 0x48);
      unaff_x22 = (undefined8 *)*puVar21;
      unaff_x20 = (long *)unaff_x26[6];
      unaff_x26 = (long *)unaff_x26[7];
      uVar22 = (long)unaff_x26 - (long)unaff_x20;
      uVar15 = *(ulong *)(unaff_x25 + 0x58);
      if (uVar22 <= uVar15 - (long)unaff_x22) {
        puVar21 = *(undefined8 **)(unaff_x25 + 0x50);
        if ((ulong)((long)puVar21 - (long)unaff_x22) < uVar22) {
          plVar8 = (long *)(((long)puVar21 - (long)unaff_x22) + (long)unaff_x20);
          puVar16 = puVar21;
          if (puVar21 != unaff_x22) {
            _memmove(unaff_x22,unaff_x20);
            puVar21 = *(undefined8 **)(unaff_x25 + 0x50);
            puVar16 = puVar21;
          }
          for (; plVar8 != unaff_x26; plVar8 = (long *)((long)plVar8 + 4)) {
            *(int *)puVar21 = (int)*plVar8;
            puVar21 = (undefined8 *)((long)puVar21 + 4);
            puVar16 = (undefined8 *)((long)puVar16 + 4);
          }
        }
        else {
          if (unaff_x26 != unaff_x20) {
            _memmove(unaff_x22,unaff_x20,uVar22);
          }
          puVar16 = (undefined8 *)((long)unaff_x22 + uVar22);
        }
        goto LAB_10a4a490c;
      }
      unaff_x23 = (long *)((long)uVar22 >> 2);
      param_5 = unaff_x21;
      if (unaff_x22 != (undefined8 *)0x0) {
        *(undefined8 **)(unaff_x25 + 0x50) = unaff_x22;
        param_5 = unaff_x22;
        __ZdlPv();
        uVar15 = 0;
        *puVar21 = 0;
        *(undefined8 *)(unaff_x25 + 0x50) = 0;
        *(undefined8 *)(unaff_x25 + 0x58) = 0;
      }
      unaff_x21 = puVar21;
      if ((ulong)unaff_x23 >> 0x3e == 0) {
        plVar8 = (long *)((long)uVar15 >> 1);
        if ((long *)((long)uVar15 >> 1) <= unaff_x23) {
          plVar8 = unaff_x23;
        }
        if (0x7ffffffffffffffb < uVar15) {
          plVar8 = (long *)0x3fffffffffffffff;
        }
        FUN_10a0ca600(puVar21,plVar8);
        puVar16 = *(undefined8 **)(unaff_x25 + 0x50);
        for (; unaff_x20 != unaff_x26; unaff_x20 = (long *)((long)unaff_x20 + 4)) {
          *(int *)puVar16 = (int)*unaff_x20;
          puVar16 = (undefined8 *)((long)puVar16 + 4);
        }
LAB_10a4a490c:
        *(undefined8 **)(unaff_x25 + 0x50) = puVar16;
LAB_10a4a4910:
        if (puVar12 + 0x78 != (undefined *)(*(long *)(*(long *)(puVar12 + -0x80) + 0x8c0) + 0x88)) {
          FUN_10a4af818();
        }
        *(undefined4 *)(puVar12 + 0x30) = *(undefined4 *)(unaff_x24 + 4);
        uVar29 = *(undefined8 *)(unaff_x24 + 0x10);
        uVar19 = *(undefined8 *)(unaff_x24 + 8);
        uVar26 = *(undefined8 *)(unaff_x24 + 0x20);
        uVar25 = *(undefined8 *)(unaff_x24 + 0x18);
        uVar28 = *(undefined8 *)(unaff_x24 + 0x28);
        uVar35 = *(undefined8 *)(unaff_x24 + 0x40);
        uVar34 = *(undefined8 *)(unaff_x24 + 0x38);
        *(undefined8 *)((long)register0x00000008 + -0xe8) = *(undefined8 *)(unaff_x24 + 0x30);
        *(undefined8 *)((long)register0x00000008 + -0xf0) = uVar28;
        *(undefined8 *)((long)register0x00000008 + -0xd8) = uVar35;
        *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar34;
        *(undefined8 *)((long)register0x00000008 + -0x108) = uVar29;
        *(undefined8 *)((long)register0x00000008 + -0x110) = uVar19;
        *(undefined8 *)((long)register0x00000008 + -0xf8) = uVar26;
        *(undefined8 *)((long)register0x00000008 + -0x100) = uVar25;
        func_0x0001094f5708((undefined1 *)((long)register0x00000008 + -0xd0),
                            (undefined1 *)((long)register0x00000008 + -0x110));
        uVar32 = (undefined4)uVar34;
        FUN_10a05181c((undefined1 *)((long)register0x00000008 + -0x8c),
                      (undefined1 *)((long)register0x00000008 + -0xd0));
        *(undefined8 *)((long)register0x00000008 + -200) =
             *(undefined8 *)((long)register0x00000008 + -0x84);
        *(undefined8 *)((long)register0x00000008 + -0xd0) =
             *(undefined8 *)((long)register0x00000008 + -0x8c);
        fVar23 = *(float *)((long)register0x00000008 + -0x74) * 100.0;
        uVar29 = *(undefined8 *)((long)register0x00000008 + -0x7c);
        uVar19 = CONCAT44((float)((ulong)uVar29 >> 0x20) * 100.0,(float)uVar29 * 100.0);
        *(undefined8 *)((long)register0x00000008 + -0xc0) = uVar19;
        *(float *)((long)register0x00000008 + -0xb8) = fVar23;
        if ((*(int *)(puVar12 + 0x2c) == 2) &&
           (*(int *)(*(long *)(*(long *)(puVar12 + -0x80) + 0xa20) + 0x18) < 0x88)) {
          func_0x00010a4af750(puVar12 + 0xd0,(undefined1 *)((long)register0x00000008 + -0xd0));
          *(float *)((long)register0x00000008 + -0x130) = fVar23;
          fVar31 = (float)uVar19;
          *(float *)((long)register0x00000008 + -300) = fVar31;
          fVar38 = (float)uVar29;
          *(float *)((long)register0x00000008 + -0x128) = fVar38;
          *(undefined4 *)((long)register0x00000008 + -0x124) = uVar32;
          func_0x00010a4af7a4(puVar12 + 0xd0,(undefined1 *)((long)register0x00000008 + -0xc0));
          fVar33 = *(float *)(puVar12 + 0xe8);
          *(ulong *)((long)register0x00000008 + -0x120) =
               CONCAT44((float)((ulong)*(undefined8 *)(puVar12 + 0xe0) >> 0x20) + fVar31,
                        (float)*(undefined8 *)(puVar12 + 0xe0) + fVar23);
          *(float *)((long)register0x00000008 + -0x118) = fVar38 + fVar33;
        }
        else {
          *(undefined8 *)((long)register0x00000008 + -0x128) =
               *(undefined8 *)((long)register0x00000008 + -200);
          *(undefined8 *)((long)register0x00000008 + -0x130) =
               *(undefined8 *)((long)register0x00000008 + -0xd0);
          *(undefined8 *)((long)register0x00000008 + -0x11c) =
               *(undefined8 *)((long)register0x00000008 + -0xbc);
          *(undefined8 *)((long)register0x00000008 + -0x124) =
               *(undefined8 *)((long)register0x00000008 + -0xc4);
        }
        uVar19 = *(undefined8 *)(*(long *)(puVar12 + -0x88) + 0x140);
        FUN_10a3e3894(uVar19,(undefined1 *)((long)register0x00000008 + -0x120));
        FUN_10a3e82bc(uVar19,(undefined1 *)((long)register0x00000008 + -0x130));
        return 1;
      }
    }
    unaff_x30 = FUN_10a4a4b80;
    FUN_10a001cf8();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x140);
    unaff_x19 = puVar12 + -0x1f0;
  }
  lVar11 = *(long *)(param_5[0x2e] + 0x8c0);
  *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  if (*(long *)(lVar11 + 0x10) == 0) goto LAB_10a25e584;
  if (((*(long *)(lVar11 + 0x18) != 0) &&
      (piVar17 = *(int **)(*(long *)(lVar11 + 0x18) + 0xd0), piVar17 != (int *)0x0)) &&
     (*piVar17 == 2)) {
    uVar18 = 1;
    goto LAB_10a25e588;
  }
  puVar7 = *(ulong **)(*(long *)(lVar11 + 0x10) + 0x1c8);
  (**(code **)(*puVar7 + 0x80))();
  *(undefined8 *)((long)register0x00000008 + -0x40) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x38) = 0;
  plVar8 = (long *)puVar7[1];
  if (plVar8 == (long *)0x0) {
LAB_10a25e494:
    plVar8 = *(long **)(*(long *)(lVar11 + 0x10) + 0x1c8);
    (**(code **)(*plVar8 + 0xc0))();
    plVar9 = (long *)plVar8[1];
    if (plVar9 == (long *)0x0) {
LAB_10a25e4ec:
      bVar5 = true;
    }
    else {
      __ZNSt3__119__shared_weak_count4lockEv();
      *(long **)((long)register0x00000008 + -0x58) = plVar9;
      if (plVar9 == (long *)0x0) goto LAB_10a25e4ec;
      plVar10 = (long *)*plVar8;
      *(long **)((long)register0x00000008 + -0x60) = plVar10;
      bVar5 = plVar10 == (long *)0x0;
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x48))();
        plVar8 = plVar10;
      }
      plVar10 = plVar9 + 1;
      do {
        lVar11 = *plVar10;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar2) {
          *plVar10 = lVar11 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    uVar18 = (uint)plVar8;
    plVar8 = *(long **)((long)register0x00000008 + -0x38);
    if (plVar8 != (long *)0x0) goto LAB_10a25e568;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    *(long **)((long)register0x00000008 + -0x38) = plVar8;
    if (plVar8 == (long *)0x0) goto LAB_10a25e494;
    plVar9 = (long *)*puVar7;
    *(long **)((long)register0x00000008 + -0x40) = plVar9;
    if (plVar9 == (long *)0x0) goto LAB_10a25e494;
    lVar11 = *(long *)(lVar11 + 0x18);
    if (lVar11 == 0) {
      uVar13 = 0;
      *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
      *(undefined1 *)((long)register0x00000008 + -0x48) = 0;
    }
    else {
      uVar13 = *(undefined1 *)(lVar11 + 0x18);
      *(undefined8 *)((long)register0x00000008 + -0x50) = *(undefined8 *)(lVar11 + 0x20);
      *(undefined1 *)((long)register0x00000008 + -0x48) = *(undefined1 *)(lVar11 + 0x28);
    }
    *(undefined1 *)((long)register0x00000008 + -0x58) = uVar13;
    *(undefined ***)((long)register0x00000008 + -0x60) = &PTR_DAT_110ba5598;
    (**(code **)(*plVar9 + 0x68))(plVar9,(undefined1 *)((long)register0x00000008 + -0x60),0);
    bVar5 = false;
    uVar18 = (uint)((ulong)plVar9 >> 9) & 1;
LAB_10a25e568:
    plVar9 = plVar8 + 1;
    do {
      lVar11 = *plVar9;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = lVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  if (bVar5) {
LAB_10a25e584:
    uVar18 = 0;
  }
LAB_10a25e588:
  return uVar18 & 1;
}



/* Entry: 10a4a4bb4; end: 10a4a4bbb;  */

uint FUN_10a4a4bb4(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined *param_5,long *param_6)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  ulong *puVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined *puVar12;
  undefined1 uVar13;
  int iVar14;
  ulong uVar15;
  undefined8 *puVar16;
  int *piVar17;
  uint uVar18;
  undefined8 uVar19;
  undefined *unaff_x19;
  long lVar20;
  undefined8 *puVar21;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  ulong uVar22;
  long *unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  float fVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  float fVar30;
  float fVar31;
  undefined4 uVar32;
  float fVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  
  do {
    fVar23 = (float)param_1;
    puVar12 = param_5 + -0x1f0;
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
    *(long **)((long)register0x00000008 + -0x58) = unaff_x27;
    *(long **)((long)register0x00000008 + -0x50) = unaff_x26;
    *(long *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(long *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    iVar14 = *(int *)(param_5 + 0x28);
    if (iVar14 == 2) {
      iVar6 = (int)*(undefined8 *)(*(long *)(param_5 + -0x80) + 0x8c0);
      FUN_10a25e3f4();
      iVar14 = 2;
      if (iVar6 == 0) {
        iVar14 = 0;
      }
    }
    *(int *)(param_5 + 0x2c) = iVar14;
    uVar32 = (undefined4)*(undefined8 *)(*(long *)(param_5 + -0x80) + 0x8c0);
    FUN_10a25e3f4();
    fVar31 = (float)param_4;
    fVar33 = (float)param_3;
    fVar38 = (float)param_2;
    *(undefined4 *)(param_5 + 0x30) = uVar32;
    if (*(int *)(param_5 + 0x2c) == 0) {
      if (param_6[0x15] == 0) {
        return 0;
      }
      func_0x00010a14d808();
      *(float *)((long)register0x00000008 + -0xc0) = fVar23;
      *(float *)((long)register0x00000008 + -0xbc) = fVar38;
      *(float *)((long)register0x00000008 + -0xb8) = fVar33;
      *(float *)((long)register0x00000008 + -0xb4) = fVar31;
      if ((int)param_6[0x33] == 0) {
        if ((bRam00000001137eb1b0 & 1) == 0) {
          iVar14 = 0x137eb1b0;
          *(float *)((long)register0x00000008 + -0x128) = fVar31;
          *(float *)((long)register0x00000008 + -0x124) = fVar38;
          *(float *)((long)register0x00000008 + -0x130) = fVar23;
          *(float *)((long)register0x00000008 + -300) = fVar33;
          ___cxa_guard_acquire();
          fVar23 = *(float *)((long)register0x00000008 + -0x130);
          fVar33 = *(float *)((long)register0x00000008 + -300);
          fVar31 = *(float *)((long)register0x00000008 + -0x128);
          fVar38 = *(float *)((long)register0x00000008 + -0x124);
          if (iVar14 != 0) {
            uRam00000001137eb1c8 = 0;
            uRam00000001137eb1c0 = 0x3f800000;
            uRam00000001137eb1d8 = 0x8000000080000000;
            uRam00000001137eb1d0 = 0x3f800000;
            fRam00000001137eb1e0 = -1.0;
            ___cxa_guard_release(0x1137eb1b0);
            fVar23 = *(float *)((long)register0x00000008 + -0x130);
            fVar33 = *(float *)((long)register0x00000008 + -300);
            fVar31 = *(float *)((long)register0x00000008 + -0x128);
            fVar38 = *(float *)((long)register0x00000008 + -0x124);
          }
        }
        fVar30 = (fVar38 * fVar38 + fVar33 * fVar33) * -2.0 + 1.0;
        fVar40 = fVar23 * fVar38 + fVar33 * fVar31;
        fVar40 = fVar40 + fVar40;
        fVar41 = fVar23 * fVar33 - fVar38 * fVar31;
        fVar41 = fVar41 + fVar41;
        fVar27 = fVar23 * fVar38 - fVar33 * fVar31;
        fVar27 = fVar27 + fVar27;
        fVar36 = (fVar23 * fVar23 + fVar33 * fVar33) * -2.0 + 1.0;
        fVar37 = fVar38 * fVar33 + fVar23 * fVar31;
        fVar37 = fVar37 + fVar37;
        fVar24 = fVar23 * fVar33 + fVar38 * fVar31;
        fVar24 = fVar24 + fVar24;
        fVar33 = fVar38 * fVar33 - fVar23 * fVar31;
        fVar33 = fVar33 + fVar33;
        fVar23 = (fVar23 * fVar23 + fVar38 * fVar38) * -2.0 + 1.0;
        fVar42 = fVar40 * uRam00000001137eb1c8._4_4_ + fVar30 * (float)uRam00000001137eb1c0 +
                 fVar41 * (float)uRam00000001137eb1d8;
        fVar43 = fVar40 * (float)uRam00000001137eb1d0 + fVar30 * uRam00000001137eb1c0._4_4_ +
                 fVar41 * uRam00000001137eb1d8._4_4_;
        fVar31 = fVar40 * uRam00000001137eb1d0._4_4_ + fVar30 * (float)uRam00000001137eb1c8 +
                 fVar41 * fRam00000001137eb1e0;
        fVar40 = fVar36 * uRam00000001137eb1c8._4_4_ + fVar27 * (float)uRam00000001137eb1c0 +
                 fVar37 * (float)uRam00000001137eb1d8;
        fVar41 = fVar36 * (float)uRam00000001137eb1d0 + fVar27 * uRam00000001137eb1c0._4_4_ +
                 fVar37 * uRam00000001137eb1d8._4_4_;
        fVar27 = fVar36 * uRam00000001137eb1d0._4_4_ + fVar27 * (float)uRam00000001137eb1c8 +
                 fVar37 * fRam00000001137eb1e0;
        fVar38 = fVar33 * uRam00000001137eb1c8._4_4_ + fVar24 * (float)uRam00000001137eb1c0 +
                 fVar23 * (float)uRam00000001137eb1d8;
        fVar44 = fVar33 * (float)uRam00000001137eb1d0 + fVar24 * uRam00000001137eb1c0._4_4_ +
                 fVar23 * uRam00000001137eb1d8._4_4_;
        fVar23 = fVar33 * uRam00000001137eb1d0._4_4_ + fVar24 * (float)uRam00000001137eb1c8 +
                 fVar23 * fRam00000001137eb1e0;
        fVar45 = uRam00000001137eb1c0._4_4_ * fVar40 + (float)uRam00000001137eb1c0 * fVar42 +
                 (float)uRam00000001137eb1c8 * fVar38;
        fVar24 = uRam00000001137eb1c0._4_4_ * fVar41 + (float)uRam00000001137eb1c0 * fVar43 +
                 (float)uRam00000001137eb1c8 * fVar44;
        fVar30 = uRam00000001137eb1c0._4_4_ * fVar27 + (float)uRam00000001137eb1c0 * fVar31 +
                 (float)uRam00000001137eb1c8 * fVar23;
        fVar36 = (float)uRam00000001137eb1d0 * fVar40 + uRam00000001137eb1c8._4_4_ * fVar42 +
                 uRam00000001137eb1d0._4_4_ * fVar38;
        fVar39 = (float)uRam00000001137eb1d0 * fVar41 + uRam00000001137eb1c8._4_4_ * fVar43 +
                 uRam00000001137eb1d0._4_4_ * fVar44;
        fVar37 = (float)uRam00000001137eb1d0 * fVar27 + uRam00000001137eb1c8._4_4_ * fVar31 +
                 uRam00000001137eb1d0._4_4_ * fVar23;
        fVar40 = fVar40 * uRam00000001137eb1d8._4_4_ + (float)uRam00000001137eb1d8 * fVar42 +
                 fRam00000001137eb1e0 * fVar38;
        fVar41 = uRam00000001137eb1d8._4_4_ * fVar41 + (float)uRam00000001137eb1d8 * fVar43 +
                 fRam00000001137eb1e0 * fVar44;
        fVar33 = uRam00000001137eb1d8._4_4_ * fVar27 + (float)uRam00000001137eb1d8 * fVar31 +
                 fRam00000001137eb1e0 * fVar23;
        fVar27 = (fVar45 - fVar39) - fVar33;
        fVar31 = (fVar39 - fVar45) - fVar33;
        fVar38 = (fVar33 - fVar45) - fVar39;
        fVar33 = fVar45 + fVar39 + fVar33;
        fVar23 = fVar27;
        if (fVar27 <= fVar33) {
          fVar23 = fVar33;
        }
        bVar3 = 2;
        if (fVar31 <= fVar23) {
          fVar31 = fVar23;
          bVar3 = fVar33 < fVar27;
        }
        bVar4 = 3;
        if (fVar38 <= fVar31) {
          fVar38 = fVar31;
          bVar4 = bVar3;
        }
        fVar33 = SQRT(fVar38 + 1.0) * 0.5;
        fVar27 = 0.25 / fVar33;
        if (bVar4 < 2) {
          if (bVar4 == 0) {
            fVar39 = fVar24 - fVar36;
            fVar31 = fVar33;
            fVar23 = (fVar37 - fVar41) * fVar27;
            fVar38 = (fVar40 - fVar30) * fVar27;
          }
          else {
            fVar31 = (fVar37 - fVar41) * fVar27;
            fVar39 = fVar40 + fVar30;
            fVar23 = fVar33;
            fVar38 = (fVar36 + fVar24) * fVar27;
          }
        }
        else {
          if (bVar4 != 2) {
            fVar31 = (fVar24 - fVar36) * fVar27;
            fVar23 = (fVar40 + fVar30) * fVar27;
            fVar38 = (fVar41 + fVar37) * fVar27;
            goto LAB_10a4a4a78;
          }
          fVar31 = (fVar40 - fVar30) * fVar27;
          fVar23 = (fVar36 + fVar24) * fVar27;
          fVar39 = fVar41 + fVar37;
          fVar38 = fVar33;
        }
        fVar33 = fVar39 * fVar27;
      }
LAB_10a4a4a78:
      fVar24 = fVar33 * fVar33 + fVar38 * fVar38 + fVar23 * fVar23 + fVar31 * fVar31;
      if (fVar24 == 0.0) {
        fVar31 = 1.0;
        fVar23 = 0.0;
        fVar38 = 0.0;
        fVar33 = 0.0;
      }
      else {
        fVar24 = 1.0 / SQRT(fVar24);
        fVar31 = fVar31 * fVar24;
        fVar23 = fVar23 * fVar24;
        fVar38 = fVar38 * fVar24;
        fVar33 = fVar33 * fVar24;
      }
      *(float *)((long)register0x00000008 + -0xc0) = fVar23;
      *(float *)((long)register0x00000008 + -0xbc) = fVar38;
      *(float *)((long)register0x00000008 + -0xb8) = fVar33;
      *(float *)((long)register0x00000008 + -0xb4) = fVar31;
      if ((*(byte *)(*(long *)(param_5 + 0x38) + 0x28) & 1) == 0) {
        *(float *)((long)register0x00000008 + -0xc0) = -fVar23;
        *(float *)((long)register0x00000008 + -0xbc) = -fVar38;
        *(float *)((long)register0x00000008 + -0xb8) = -fVar33;
      }
      FUN_10a9ef23c(*(undefined8 *)(param_5 + 0x108),
                    (undefined1 *)((long)register0x00000008 + -0xc0));
      return 1;
    }
    unaff_x24 = param_6[0x1a];
    if (unaff_x24 == 0) {
      return 0;
    }
    if (*(char *)(*(long *)(param_5 + 0x58) + 0x2a) != '\x01') {
      lVar20 = *(long *)(param_5 + 0x68);
      lVar11 = *(long *)(lVar20 + 0x18);
      *(undefined8 *)(lVar20 + 0x20) = 0;
      *(undefined8 *)(lVar20 + 0x28) = 0;
      *(undefined8 *)(lVar20 + 0x18) = 0;
      if (lVar11 != 0) {
        __ZdlPv();
      }
      lVar11 = *(long *)(lVar20 + 0x30);
      *(undefined8 *)(lVar20 + 0x38) = 0;
      *(undefined8 *)(lVar20 + 0x40) = 0;
      *(undefined8 *)(lVar20 + 0x30) = 0;
      if (lVar11 != 0) {
        __ZdlPv();
      }
      lVar11 = *(long *)(lVar20 + 0x48);
      *(undefined8 *)(lVar20 + 0x50) = 0;
      *(undefined8 *)(lVar20 + 0x58) = 0;
      *(undefined8 *)(lVar20 + 0x48) = 0;
      if (lVar11 != 0) {
        __ZdlPv();
      }
      goto LAB_10a4a4910;
    }
    unaff_x26 = (long *)param_6[0x26];
    if (unaff_x26 == (long *)0x0) goto LAB_10a4a4910;
    unaff_x25 = *(long *)(param_5 + 0x68);
    if ((*(int *)(param_5 + 0x2c) == 2) &&
       (*(int *)(*(long *)(*(long *)(param_5 + -0x80) + 0xa20) + 0x18) < 0x88)) {
      uVar19 = *(undefined8 *)(param_5 + 0xd0);
      *(undefined8 *)((long)register0x00000008 + -0xb8) = *(undefined8 *)(param_5 + 0xd8);
      *(undefined8 *)((long)register0x00000008 + -0xc0) = uVar19;
      param_1 = *(undefined8 *)(param_5 + 0xdc);
      *(undefined8 *)((long)register0x00000008 + -0xac) = *(undefined8 *)(param_5 + 0xe4);
      *(undefined8 *)((long)register0x00000008 + -0xb4) = param_1;
    }
    else {
      param_1 = 0;
      *(undefined8 *)((long)register0x00000008 + -0xb8) = 0x3f80000000000000;
      *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
      *(undefined4 *)((long)register0x00000008 + -0xa8) = 0;
    }
    puVar21 = (undefined8 *)(unaff_x25 + 0x18);
    *(undefined8 *)(unaff_x25 + 0x20) = *puVar21;
    param_6 = (long *)((unaff_x26[1] - *unaff_x26 >> 2) * -0x5555555555555555);
    puVar16 = puVar21;
    func_0x00010983ca2c();
    lVar11 = *unaff_x26;
    lVar20 = unaff_x26[1];
    while( true ) {
      fVar23 = (float)param_1;
      fVar31 = (float)param_3;
      if (lVar11 == lVar20) break;
      func_0x00010a4af7a4((undefined1 *)((long)register0x00000008 + -0xc0),lVar11);
      param_3 = (ulong)(uint)(fVar31 + *(float *)((long)register0x00000008 + -0xa8));
      param_4 = *(undefined8 *)((long)register0x00000008 + -0xb0);
      param_1 = CONCAT44((float)((ulong)param_4 >> 0x20) + (float)param_2,(float)param_4 + fVar23);
      *(undefined8 *)((long)register0x00000008 + -0x100) = param_1;
      *(float *)((long)register0x00000008 + -0xf8) =
           fVar31 + *(float *)((long)register0x00000008 + -0xa8);
      param_6 = (long *)((long)register0x00000008 + -0x100);
      puVar16 = puVar21;
      FUN_10a123714();
      lVar11 = lVar11 + 0xc;
    }
    unaff_x21 = (undefined8 *)(unaff_x25 + 0x30);
    unaff_x22 = (undefined8 *)*unaff_x21;
    unaff_x20 = (long *)unaff_x26[3];
    unaff_x27 = (long *)unaff_x26[4];
    uVar22 = (long)unaff_x27 - (long)unaff_x20;
    uVar15 = *(ulong *)(unaff_x25 + 0x40);
    if (uVar15 - (long)unaff_x22 < uVar22) {
      unaff_x23 = (long *)((long)uVar22 >> 2);
      if (unaff_x22 != (undefined8 *)0x0) {
        *(undefined8 **)(unaff_x25 + 0x38) = unaff_x22;
        puVar16 = unaff_x22;
        __ZdlPv();
        uVar15 = 0;
        *unaff_x21 = 0;
        *(undefined8 *)(unaff_x25 + 0x38) = 0;
        *(undefined8 *)(unaff_x25 + 0x40) = 0;
      }
      if ((ulong)unaff_x23 >> 0x3e == 0) {
        param_6 = (long *)((long)uVar15 >> 1);
        if ((long *)((long)uVar15 >> 1) <= unaff_x23) {
          param_6 = unaff_x23;
        }
        if (0x7ffffffffffffffb < uVar15) {
          param_6 = (long *)0x3fffffffffffffff;
        }
        FUN_109ffe174();
        puVar16 = *(undefined8 **)(unaff_x25 + 0x38);
        for (; unaff_x20 != unaff_x27; unaff_x20 = (long *)((long)unaff_x20 + 4)) {
          *(int *)puVar16 = (int)*unaff_x20;
          puVar16 = (undefined8 *)((long)puVar16 + 4);
        }
        goto LAB_10a4a4808;
      }
      FUN_109ffe1ac();
    }
    else {
      puVar21 = *(undefined8 **)(unaff_x25 + 0x38);
      unaff_x21 = puVar16;
      if ((ulong)((long)puVar21 - (long)unaff_x22) < uVar22) {
        plVar8 = (long *)(((long)puVar21 - (long)unaff_x22) + (long)unaff_x20);
        puVar16 = puVar21;
        if (puVar21 != unaff_x22) {
          _memmove();
          puVar21 = *(undefined8 **)(unaff_x25 + 0x38);
          puVar16 = puVar21;
          param_6 = unaff_x20;
          unaff_x21 = unaff_x22;
        }
        for (; plVar8 != unaff_x27; plVar8 = (long *)((long)plVar8 + 4)) {
          *(int *)puVar21 = (int)*plVar8;
          puVar21 = (undefined8 *)((long)puVar21 + 4);
          puVar16 = (undefined8 *)((long)puVar16 + 4);
        }
      }
      else {
        if (unaff_x27 != unaff_x20) {
          unaff_x21 = unaff_x22;
          _memmove(unaff_x22,unaff_x20,uVar22);
          param_6 = unaff_x20;
        }
        puVar16 = (undefined8 *)((long)unaff_x22 + uVar22);
      }
LAB_10a4a4808:
      *(undefined8 **)(unaff_x25 + 0x38) = puVar16;
      puVar21 = (undefined8 *)(unaff_x25 + 0x48);
      unaff_x22 = (undefined8 *)*puVar21;
      unaff_x20 = (long *)unaff_x26[6];
      unaff_x26 = (long *)unaff_x26[7];
      uVar22 = (long)unaff_x26 - (long)unaff_x20;
      uVar15 = *(ulong *)(unaff_x25 + 0x58);
      if (uVar22 <= uVar15 - (long)unaff_x22) {
        puVar16 = *(undefined8 **)(unaff_x25 + 0x50);
        if ((ulong)((long)puVar16 - (long)unaff_x22) < uVar22) {
          plVar8 = (long *)(((long)puVar16 - (long)unaff_x22) + (long)unaff_x20);
          puVar21 = puVar16;
          if (puVar16 != unaff_x22) {
            _memmove(unaff_x22,unaff_x20);
            puVar16 = *(undefined8 **)(unaff_x25 + 0x50);
            puVar21 = puVar16;
          }
          for (; plVar8 != unaff_x26; plVar8 = (long *)((long)plVar8 + 4)) {
            *(int *)puVar16 = (int)*plVar8;
            puVar16 = (undefined8 *)((long)puVar16 + 4);
            puVar21 = (undefined8 *)((long)puVar21 + 4);
          }
        }
        else {
          if (unaff_x26 != unaff_x20) {
            _memmove(unaff_x22,unaff_x20,uVar22);
          }
          puVar21 = (undefined8 *)((long)unaff_x22 + uVar22);
        }
        goto LAB_10a4a490c;
      }
      unaff_x23 = (long *)((long)uVar22 >> 2);
      puVar16 = unaff_x21;
      if (unaff_x22 != (undefined8 *)0x0) {
        *(undefined8 **)(unaff_x25 + 0x50) = unaff_x22;
        puVar16 = unaff_x22;
        __ZdlPv();
        uVar15 = 0;
        *puVar21 = 0;
        *(undefined8 *)(unaff_x25 + 0x50) = 0;
        *(undefined8 *)(unaff_x25 + 0x58) = 0;
      }
      unaff_x21 = puVar21;
      if ((ulong)unaff_x23 >> 0x3e == 0) {
        plVar8 = (long *)((long)uVar15 >> 1);
        if ((long *)((long)uVar15 >> 1) <= unaff_x23) {
          plVar8 = unaff_x23;
        }
        if (0x7ffffffffffffffb < uVar15) {
          plVar8 = (long *)0x3fffffffffffffff;
        }
        FUN_10a0ca600(puVar21,plVar8);
        puVar21 = *(undefined8 **)(unaff_x25 + 0x50);
        for (; unaff_x20 != unaff_x26; unaff_x20 = (long *)((long)unaff_x20 + 4)) {
          *(int *)puVar21 = (int)*unaff_x20;
          puVar21 = (undefined8 *)((long)puVar21 + 4);
        }
LAB_10a4a490c:
        *(undefined8 **)(unaff_x25 + 0x50) = puVar21;
LAB_10a4a4910:
        if (param_5 + 0x78 != (undefined *)(*(long *)(*(long *)(param_5 + -0x80) + 0x8c0) + 0x88)) {
          FUN_10a4af818();
        }
        *(undefined4 *)(param_5 + 0x30) = *(undefined4 *)(unaff_x24 + 4);
        uVar29 = *(undefined8 *)(unaff_x24 + 0x10);
        uVar19 = *(undefined8 *)(unaff_x24 + 8);
        uVar26 = *(undefined8 *)(unaff_x24 + 0x20);
        uVar25 = *(undefined8 *)(unaff_x24 + 0x18);
        uVar28 = *(undefined8 *)(unaff_x24 + 0x28);
        uVar35 = *(undefined8 *)(unaff_x24 + 0x40);
        uVar34 = *(undefined8 *)(unaff_x24 + 0x38);
        *(undefined8 *)((long)register0x00000008 + -0xd8) = *(undefined8 *)(unaff_x24 + 0x30);
        *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar28;
        *(undefined8 *)((long)register0x00000008 + -200) = uVar35;
        *(undefined8 *)((long)register0x00000008 + -0xd0) = uVar34;
        *(undefined8 *)((long)register0x00000008 + -0xf8) = uVar29;
        *(undefined8 *)((long)register0x00000008 + -0x100) = uVar19;
        *(undefined8 *)((long)register0x00000008 + -0xe8) = uVar26;
        *(undefined8 *)((long)register0x00000008 + -0xf0) = uVar25;
        func_0x0001094f5708((undefined1 *)((long)register0x00000008 + -0xc0),
                            (undefined1 *)((long)register0x00000008 + -0x100));
        uVar32 = (undefined4)uVar34;
        FUN_10a05181c((undefined1 *)((long)register0x00000008 + -0x7c),
                      (undefined1 *)((long)register0x00000008 + -0xc0));
        *(undefined8 *)((long)register0x00000008 + -0xb8) =
             *(undefined8 *)((long)register0x00000008 + -0x74);
        *(undefined8 *)((long)register0x00000008 + -0xc0) =
             *(undefined8 *)((long)register0x00000008 + -0x7c);
        fVar23 = *(float *)((long)register0x00000008 + -100) * 100.0;
        uVar29 = *(undefined8 *)((long)register0x00000008 + -0x6c);
        uVar19 = CONCAT44((float)((ulong)uVar29 >> 0x20) * 100.0,(float)uVar29 * 100.0);
        *(undefined8 *)((long)register0x00000008 + -0xb0) = uVar19;
        *(float *)((long)register0x00000008 + -0xa8) = fVar23;
        if ((*(int *)(param_5 + 0x2c) == 2) &&
           (*(int *)(*(long *)(*(long *)(param_5 + -0x80) + 0xa20) + 0x18) < 0x88)) {
          func_0x00010a4af750(param_5 + 0xd0,(undefined1 *)((long)register0x00000008 + -0xc0));
          *(float *)((long)register0x00000008 + -0x120) = fVar23;
          fVar31 = (float)uVar19;
          *(float *)((long)register0x00000008 + -0x11c) = fVar31;
          fVar38 = (float)uVar29;
          *(float *)((long)register0x00000008 + -0x118) = fVar38;
          *(undefined4 *)((long)register0x00000008 + -0x114) = uVar32;
          func_0x00010a4af7a4(param_5 + 0xd0,(undefined1 *)((long)register0x00000008 + -0xb0));
          fVar33 = *(float *)(param_5 + 0xe8);
          *(ulong *)((long)register0x00000008 + -0x110) =
               CONCAT44((float)((ulong)*(undefined8 *)(param_5 + 0xe0) >> 0x20) + fVar31,
                        (float)*(undefined8 *)(param_5 + 0xe0) + fVar23);
          *(float *)((long)register0x00000008 + -0x108) = fVar38 + fVar33;
        }
        else {
          *(undefined8 *)((long)register0x00000008 + -0x118) =
               *(undefined8 *)((long)register0x00000008 + -0xb8);
          *(undefined8 *)((long)register0x00000008 + -0x120) =
               *(undefined8 *)((long)register0x00000008 + -0xc0);
          *(undefined8 *)((long)register0x00000008 + -0x10c) =
               *(undefined8 *)((long)register0x00000008 + -0xac);
          *(undefined8 *)((long)register0x00000008 + -0x114) =
               *(undefined8 *)((long)register0x00000008 + -0xb4);
        }
        uVar19 = *(undefined8 *)(*(long *)(param_5 + -0x88) + 0x140);
        FUN_10a3e3894(uVar19,(undefined1 *)((long)register0x00000008 + -0x110));
        FUN_10a3e82bc(uVar19,(undefined1 *)((long)register0x00000008 + -0x120));
        return 1;
      }
    }
    FUN_10a001cf8();
    if ((uint)param_6 < 2) {
      return 1;
    }
    if ((uint)param_6 == 2) break;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x140);
    *(undefined1 **)((long)register0x00000008 + -0x140) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x138) = FUN_10a4a4b80;
    param_5 = &UNK_10f65be31;
    unaff_x30 = FUN_10a4a4bb4;
    FUN_10a00946c();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x140);
    unaff_x19 = puVar12;
  } while( true );
  lVar11 = *(long *)(puVar16[0x2e] + 0x8c0);
  *(undefined8 **)((long)register0x00000008 + -0x160) = unaff_x22;
  *(undefined8 **)((long)register0x00000008 + -0x158) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x150) = unaff_x20;
  *(undefined **)((long)register0x00000008 + -0x148) = puVar12;
  *(undefined1 **)((long)register0x00000008 + -0x140) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x138) = FUN_10a4a4b80;
  if (*(long *)(lVar11 + 0x10) != 0) {
    if (((*(long *)(lVar11 + 0x18) != 0) &&
        (piVar17 = *(int **)(*(long *)(lVar11 + 0x18) + 0xd0), piVar17 != (int *)0x0)) &&
       (*piVar17 == 2)) {
      uVar18 = 1;
      goto LAB_10a25e588;
    }
    puVar7 = *(ulong **)(*(long *)(lVar11 + 0x10) + 0x1c8);
    (**(code **)(*puVar7 + 0x80))();
    *(undefined8 *)((long)register0x00000008 + -0x170) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x168) = 0;
    plVar8 = (long *)puVar7[1];
    if (plVar8 == (long *)0x0) {
LAB_10a25e494:
      plVar8 = *(long **)(*(long *)(lVar11 + 0x10) + 0x1c8);
      (**(code **)(*plVar8 + 0xc0))();
      plVar9 = (long *)plVar8[1];
      if (plVar9 == (long *)0x0) {
LAB_10a25e4ec:
        bVar5 = true;
      }
      else {
        __ZNSt3__119__shared_weak_count4lockEv();
        *(long **)((long)register0x00000008 + -0x188) = plVar9;
        if (plVar9 == (long *)0x0) goto LAB_10a25e4ec;
        plVar10 = (long *)*plVar8;
        *(long **)((long)register0x00000008 + -400) = plVar10;
        bVar5 = plVar10 == (long *)0x0;
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x48))();
          plVar8 = plVar10;
        }
        plVar10 = plVar9 + 1;
        do {
          lVar11 = *plVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar2) {
            *plVar10 = lVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      uVar18 = (uint)plVar8;
      plVar8 = *(long **)((long)register0x00000008 + -0x168);
      if (plVar8 != (long *)0x0) goto LAB_10a25e568;
    }
    else {
      __ZNSt3__119__shared_weak_count4lockEv();
      *(long **)((long)register0x00000008 + -0x168) = plVar8;
      if (plVar8 == (long *)0x0) goto LAB_10a25e494;
      plVar9 = (long *)*puVar7;
      *(long **)((long)register0x00000008 + -0x170) = plVar9;
      if (plVar9 == (long *)0x0) goto LAB_10a25e494;
      lVar11 = *(long *)(lVar11 + 0x18);
      if (lVar11 == 0) {
        uVar13 = 0;
        *(undefined8 *)((long)register0x00000008 + -0x180) = 0;
        *(undefined1 *)((long)register0x00000008 + -0x178) = 0;
      }
      else {
        uVar13 = *(undefined1 *)(lVar11 + 0x18);
        *(undefined8 *)((long)register0x00000008 + -0x180) = *(undefined8 *)(lVar11 + 0x20);
        *(undefined1 *)((long)register0x00000008 + -0x178) = *(undefined1 *)(lVar11 + 0x28);
      }
      *(undefined1 *)((long)register0x00000008 + -0x188) = uVar13;
      *(undefined ***)((long)register0x00000008 + -400) = &PTR_DAT_110ba5598;
      (**(code **)(*plVar9 + 0x68))(plVar9,(undefined1 *)((long)register0x00000008 + -400),0);
      bVar5 = false;
      uVar18 = (uint)((ulong)plVar9 >> 9) & 1;
LAB_10a25e568:
      plVar9 = plVar8 + 1;
      do {
        lVar11 = *plVar9;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar2) {
          *plVar9 = lVar11 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    if (!bVar5) goto LAB_10a25e588;
  }
  uVar18 = 0;
LAB_10a25e588:
  return uVar18 & 1;
}



/* Entry: 10a4a4bbc; end: 10a4a4d87;  */

void FUN_10a4a4bbc(float param_1,float param_2,float param_3,long *param_4,long *param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  float *pfVar5;
  float *pfVar6;
  long lVar7;
  
  if (*(char *)((long)param_4 + 0xc) == '\x01') {
    lVar7 = param_4[1];
    param_5[5] = *param_4;
    *(int *)(param_5 + 6) = (int)lVar7;
    if ((*(byte *)((long)param_5 + 0x34) & 1) == 0) {
      *(undefined1 *)((long)param_5 + 0x34) = 1;
    }
  }
  if (*(char *)((long)param_4 + 0x11) == '\x01') {
    *(undefined1 *)((long)param_5 + 0x24) = 1;
    lVar7 = *(long *)((long)param_4 + 0x14);
    if ((*(byte *)(param_5 + 4) & 1) == 0) {
      *(undefined1 *)(param_5 + 4) = 1;
    }
    param_5[3] = lVar7;
    *(undefined1 *)((long)param_4 + 0x11) = 0;
  }
  plVar4 = (long *)param_4[5];
  if ((plVar4 == (long *)0x0) || (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 == (long *)0x0))
  {
    param_5[1] = *param_5;
    *(char *)((long)param_5 + 0x25) = (char)param_4[2];
    return;
  }
  if (param_4[4] == 0) {
    pfVar5 = (float *)*param_5;
  }
  else {
    FUN_10a2cd058(*(undefined8 *)(param_4[4] + 0x140));
    param_1 = param_1 * 0.01;
    param_2 = param_2 * 0.01;
    param_3 = param_3 * 0.01;
    pfVar5 = (float *)*param_5;
    if ((float *)param_5[2] == pfVar5) {
      if ((float *)param_5[2] != (float *)0x0) {
        param_5[1] = (long)pfVar5;
        __ZdlPv();
        *param_5 = 0;
        param_5[1] = 0;
        param_5[2] = 0;
      }
      pfVar6 = (float *)0xc;
      __Znwm();
      pfVar5 = pfVar6 + 3;
      param_5[2] = (long)pfVar5;
      *pfVar6 = param_1;
      pfVar6[1] = param_2;
      pfVar6[2] = param_3;
      *param_5 = (long)pfVar6;
    }
    else {
      pfVar6 = (float *)param_5[1];
      if (pfVar6 == pfVar5) {
        *pfVar6 = param_1;
        pfVar6[1] = param_2;
        pfVar6[2] = param_3;
        pfVar5 = pfVar6 + 3;
      }
      else {
        *pfVar5 = param_1;
        pfVar5[1] = param_2;
        pfVar5[2] = param_3;
        pfVar5 = pfVar5 + 3;
      }
    }
  }
  param_5[1] = (long)pfVar5;
  *(char *)((long)param_5 + 0x25) = (char)param_4[2];
  plVar1 = plVar4 + 1;
  do {
    lVar7 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar7 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar7 != 0) {
    return;
  }
  (**(code **)(*plVar4 + 0x10))(plVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar4);
  return;
}



/* Entry: 10a4a4d88; end: 10a4a4f73;  */

void FUN_10a4a4d88(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined2 uVar5;
  bool bVar6;
  bool bVar7;
  undefined1 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  char cStack_40;
  int iStack_3c;
  undefined1 uStack_38;
  undefined1 uStack_2c;
  
  iVar1 = *(int *)(param_1 + 0x21c);
  if (iVar1 == 0) {
    if ((*(byte *)(param_2 + 0x199) & 1) == 0) {
      uVar8 = 0;
      *(undefined1 *)(param_2 + 0x199) = 1;
    }
    else {
      uVar8 = *(undefined1 *)(param_2 + 0x198);
    }
    *(undefined1 *)(param_2 + 0x198) = uVar8;
  }
  else {
    cStack_40 = 0;
    uStack_2c = 0;
    lStack_58 = 0;
    uStack_50 = 0;
    lStack_60 = 0;
    uStack_48 = uStack_48 & 0xffffffffffffff00;
    uVar8 = 0;
    uStack_38 = 0;
    if (iVar1 == 2) {
      uVar8 = 1;
    }
    else if ((iVar1 == 1) && (*(char *)(*(long *)(param_1 + 0x238) + 0x28) == '\x01')) {
      uVar8 = 2;
    }
    iStack_3c = (uint)CONCAT11(uVar8,*(undefined1 *)(*(long *)(param_1 + 0x248) + 0x54)) << 0x10;
    FUN_10a4a4bbc(param_1 + 0x290,&lStack_60);
    FUN_10a051998(param_2 + 0x138,&lStack_60);
    if (lStack_60 != 0) {
      lStack_58 = lStack_60;
      __ZdlPv();
    }
    lVar9 = *(long *)(param_1 + 0x248);
    if (*(char *)(lVar9 + 0x2a) == '\x01') {
      *(undefined1 *)(param_2 + 0x4e3) = 1;
    }
    if (*(int *)(param_1 + 0x21c) == 2) {
      uVar2 = *(uint *)(lVar9 + 0x2c);
      if (uVar2 != 0) {
        bVar6 = (uVar2 & 0xfffffffd) == 1;
        bVar7 = (uVar2 & 0xfffffffe) == 2;
        bVar4 = *(byte *)(lVar9 + 0x30);
        if ((*(byte *)(param_2 + 0x4e1) & 1) == 0) {
          *(bool *)(param_2 + 0x4de) = bVar6;
          *(bool *)(param_2 + 0x4df) = bVar7;
          *(byte *)(param_2 + 0x4e0) = bVar4;
          *(undefined1 *)(param_2 + 0x4e1) = 1;
        }
        else {
          *(byte *)(param_2 + 0x4de) = *(byte *)(param_2 + 0x4de) | bVar6;
          *(byte *)(param_2 + 0x4df) = *(byte *)(param_2 + 0x4df) | bVar7;
          *(byte *)(param_2 + 0x4e0) = *(byte *)(param_2 + 0x4e0) | bVar4;
        }
      }
      lVar9 = *(long *)(param_1 + 0x248);
    }
    cStack_40 = *(char *)(lVar9 + 0x31);
    if (cStack_40 == '\x01') {
      lStack_58 = *(undefined8 *)(lVar9 + 0x3c);
      lStack_60 = *(long *)(lVar9 + 0x34);
      uStack_48 = *(undefined8 *)(lVar9 + 0x4c);
      uStack_50 = *(undefined8 *)(lVar9 + 0x44);
      if ((*(byte *)(param_2 + 0x4d8) & 1) == 0) {
        uVar12 = *(undefined8 *)(lVar9 + 0x3c);
        uVar11 = *(undefined8 *)(lVar9 + 0x34);
        uVar10 = *(undefined8 *)(lVar9 + 0x44);
        uVar3 = *(undefined4 *)(lVar9 + 0x4c);
        uVar5 = *(undefined2 *)(lVar9 + 0x50);
        *(undefined1 *)(param_2 + 0x4d6) = *(undefined1 *)(lVar9 + 0x52);
        *(undefined2 *)(param_2 + 0x4d4) = uVar5;
        *(undefined4 *)(param_2 + 0x4d0) = uVar3;
        *(undefined8 *)(param_2 + 0x4c8) = uVar10;
        *(undefined8 *)(param_2 + 0x4c0) = uVar12;
        *(undefined8 *)(param_2 + 0x4b8) = uVar11;
        *(undefined1 *)(param_2 + 0x4d8) = 1;
      }
      else {
        func_0x00010a4bfba4((undefined8 *)(param_2 + 0x4b8),&lStack_60);
      }
    }
  }
  return;
}



/* Entry: 10a4a4f74; end: 10a4a4f7b;  */

void FUN_10a4a4f74(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined2 uVar5;
  bool bVar6;
  bool bVar7;
  undefined1 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  char cStack_40;
  int iStack_3c;
  undefined1 uStack_38;
  undefined1 uStack_2c;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if (iVar1 == 0) {
    if ((*(byte *)(param_2 + 0x199) & 1) == 0) {
      uVar8 = 0;
      *(undefined1 *)(param_2 + 0x199) = 1;
    }
    else {
      uVar8 = *(undefined1 *)(param_2 + 0x198);
    }
    *(undefined1 *)(param_2 + 0x198) = uVar8;
  }
  else {
    cStack_40 = 0;
    uStack_2c = 0;
    lStack_58 = 0;
    uStack_50 = 0;
    lStack_60 = 0;
    uStack_48 = uStack_48 & 0xffffffffffffff00;
    uVar8 = 0;
    uStack_38 = 0;
    if (iVar1 == 2) {
      uVar8 = 1;
    }
    else if ((iVar1 == 1) && (*(char *)(*(long *)(param_1 + 0x48) + 0x28) == '\x01')) {
      uVar8 = 2;
    }
    iStack_3c = (uint)CONCAT11(uVar8,*(undefined1 *)(*(long *)(param_1 + 0x58) + 0x54)) << 0x10;
    FUN_10a4a4bbc(param_1 + 0xa0,&lStack_60);
    FUN_10a051998(param_2 + 0x138,&lStack_60);
    if (lStack_60 != 0) {
      lStack_58 = lStack_60;
      __ZdlPv();
    }
    lVar9 = *(long *)(param_1 + 0x58);
    if (*(char *)(lVar9 + 0x2a) == '\x01') {
      *(undefined1 *)(param_2 + 0x4e3) = 1;
    }
    if (*(int *)(param_1 + 0x2c) == 2) {
      uVar2 = *(uint *)(lVar9 + 0x2c);
      if (uVar2 != 0) {
        bVar6 = (uVar2 & 0xfffffffd) == 1;
        bVar7 = (uVar2 & 0xfffffffe) == 2;
        bVar4 = *(byte *)(lVar9 + 0x30);
        if ((*(byte *)(param_2 + 0x4e1) & 1) == 0) {
          *(bool *)(param_2 + 0x4de) = bVar6;
          *(bool *)(param_2 + 0x4df) = bVar7;
          *(byte *)(param_2 + 0x4e0) = bVar4;
          *(undefined1 *)(param_2 + 0x4e1) = 1;
        }
        else {
          *(byte *)(param_2 + 0x4de) = *(byte *)(param_2 + 0x4de) | bVar6;
          *(byte *)(param_2 + 0x4df) = *(byte *)(param_2 + 0x4df) | bVar7;
          *(byte *)(param_2 + 0x4e0) = *(byte *)(param_2 + 0x4e0) | bVar4;
        }
      }
      lVar9 = *(long *)(param_1 + 0x58);
    }
    cStack_40 = *(char *)(lVar9 + 0x31);
    if (cStack_40 == '\x01') {
      lStack_58 = *(undefined8 *)(lVar9 + 0x3c);
      lStack_60 = *(long *)(lVar9 + 0x34);
      uStack_48 = *(undefined8 *)(lVar9 + 0x4c);
      uStack_50 = *(undefined8 *)(lVar9 + 0x44);
      if ((*(byte *)(param_2 + 0x4d8) & 1) == 0) {
        uVar12 = *(undefined8 *)(lVar9 + 0x3c);
        uVar11 = *(undefined8 *)(lVar9 + 0x34);
        uVar10 = *(undefined8 *)(lVar9 + 0x44);
        uVar3 = *(undefined4 *)(lVar9 + 0x4c);
        uVar5 = *(undefined2 *)(lVar9 + 0x50);
        *(undefined1 *)(param_2 + 0x4d6) = *(undefined1 *)(lVar9 + 0x52);
        *(undefined2 *)(param_2 + 0x4d4) = uVar5;
        *(undefined4 *)(param_2 + 0x4d0) = uVar3;
        *(undefined8 *)(param_2 + 0x4c8) = uVar10;
        *(undefined8 *)(param_2 + 0x4c0) = uVar12;
        *(undefined8 *)(param_2 + 0x4b8) = uVar11;
        *(undefined1 *)(param_2 + 0x4d8) = 1;
      }
      else {
        func_0x00010a4bfba4((undefined8 *)(param_2 + 0x4b8),&lStack_60);
      }
    }
  }
  return;
}



/* Entry: 10a4a4f7c; end: 10a4a5107;  */

void FUN_10a4a4f7c(long param_1,long *param_2)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  
  func_0x00010a3c7a18();
  (**(code **)(*param_2 + 0x1e0))(param_2,*(undefined8 *)(param_1 + 0x228));
  (**(code **)(*param_2 + 0x1e0))(param_2,*(undefined8 *)(param_1 + 0x238));
  (**(code **)(*param_2 + 0x1e0))(param_2,*(undefined8 *)(param_1 + 0x248));
  (**(code **)(*param_2 + 0x1e0))(param_2,*(undefined8 *)(param_1 + 0x2f8));
  (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110be0c88,1);
  uVar3 = (uint)param_2;
  if (uVar3 < 3) {
    *(uint *)(param_1 + 0x218) = uVar3;
    if (uVar3 == 2) {
      iVar1 = (int)*(undefined8 *)(*(long *)(param_1 + 0x170) + 0x8c0);
      FUN_10a25e3f4();
      uVar3 = 2;
      if (iVar1 == 0) {
        uVar3 = 0;
      }
      param_2 = (long *)(ulong)uVar3;
    }
    *(int *)(param_1 + 0x21c) = (int)param_2;
    return;
  }
  puVar2 = &UNK_10f65be16;
  FUN_10a00946c();
  func_0x00010a3c7928();
  (**(code **)(*param_2 + 0x120))(param_2,*(undefined8 *)(puVar2 + 0x228),0);
  (**(code **)(*param_2 + 0x120))(param_2,*(undefined8 *)(puVar2 + 0x238),0);
  (**(code **)(*param_2 + 0x120))(param_2,*(undefined8 *)(puVar2 + 0x248),0);
  (**(code **)(*param_2 + 0x120))(param_2,*(undefined8 *)(puVar2 + 0x2f8),0);
                    /* WARNING: Could not recover jumptable at 0x00010a4a5104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110be0c88,*(undefined4 *)(puVar2 + 0x218));
  return;
}



/* Entry: 10a4a5108; end: 10a4a53a3;  */

void FUN_10a4a5108(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  char cVar9;
  bool bVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long lStack_50;
  long *plStack_48;
  
  if (param_4 == 0) {
    lVar13 = param_2;
    uVar12 = param_3;
    func_0x00010a0fda30();
  }
  else {
    plStack_48 = *(long **)(param_2 + 0x48);
    lStack_50 = *(long *)(param_2 + 0x40);
    param_4 = param_4 + 0x88;
    func_0x00010a35bf90(param_4,&lStack_50);
    puVar4 = (undefined8 *)((ulong)&lStack_50 | 8);
    plVar11 = &lStack_50;
    if (param_4 != 0) {
      puVar4 = (undefined8 *)(param_4 + 0x28);
      plVar11 = (long *)(param_4 + 0x20);
    }
    uVar12 = *puVar4;
    lVar13 = *plVar11;
  }
  lVar14 = *(long *)(param_2 + 0x170);
  FUN_10a3dd220(lVar14);
  FUN_10a4bfc24(lVar14,lVar13,uVar12);
  plVar11 = (long *)0x28;
  __Znwm();
  plVar15 = plVar11 + 1;
  *plVar15 = 0;
  *plVar11 = (long)&PTR_FUN_110be71b8;
  plVar11[2] = 0;
  plVar11[3] = lVar14;
  plVar11[4] = (long)FUN_10a3df8cc;
  if (lVar14 != 0) {
    if (*(long *)(lVar14 + 0x30) == 0) {
      do {
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar10) {
          *plVar15 = *plVar15 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      plVar1 = plVar11 + 2;
      do {
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar10) {
          *plVar1 = *plVar1 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      *(long *)(lVar14 + 0x28) = lVar14;
      *(long **)(lVar14 + 0x30) = plVar11;
    }
    else {
      if (*(long *)(*(long *)(lVar14 + 0x30) + 8) != -1) goto LAB_10a4a526c;
      do {
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar10) {
          *plVar15 = *plVar15 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      plVar1 = plVar11 + 2;
      do {
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar10) {
          *plVar1 = *plVar1 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      *(long *)(lVar14 + 0x28) = lVar14;
      *(long **)(lVar14 + 0x30) = plVar11;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    do {
      lVar13 = *plVar15;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar10) {
        *plVar15 = lVar13 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
LAB_10a4a526c:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (lVar14 + 0x150,param_2 + 0x150);
  uVar2 = (*(ushort *)(param_2 + 0x180) >> 1 & 1) << 1;
  uVar3 = *(ushort *)(lVar14 + 0x180) & 0xfffc;
  *(ushort *)(lVar14 + 0x180) = uVar3 | *(ushort *)(lVar14 + 0x180) & 1 | uVar2;
  *(ushort *)(lVar14 + 0x180) = uVar3 | uVar2 | *(ushort *)(param_2 + 0x180) & 1;
  if (plVar11 != (long *)0x0) {
    plVar15 = plVar11 + 1;
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar10) {
        *plVar15 = *plVar15 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
  }
  lStack_50 = lVar14;
  plStack_48 = plVar11;
  FUN_10a3c7ce8(param_3,&lStack_50);
  plVar15 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar13 = *plVar1;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
        *plVar1 = lVar13 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
    }
  }
  uVar7 = *(undefined1 *)(*(long *)(param_2 + 0x228) + 0x28);
  uVar8 = *(undefined1 *)(*(long *)(param_2 + 0x238) + 0x28);
  uVar5 = *(undefined4 *)(*(long *)(param_2 + 0x2f8) + 0x40);
  uVar6 = *(undefined4 *)(param_2 + 0x218);
  param_1[1] = (long)plVar11;
  *param_1 = lVar14;
  *(undefined1 *)(*(long *)(lVar14 + 0x228) + 0x28) = uVar7;
  *(undefined1 *)(*(long *)(lVar14 + 0x238) + 0x28) = uVar8;
  *(undefined4 *)(*(long *)(lVar14 + 0x2f8) + 0x40) = uVar5;
  *(undefined4 *)(lVar14 + 0x218) = uVar6;
  return;
}



/* Entry: 10a4a53a4; end: 10a4a546b;  */

void FUN_10a4a53a4(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  if ((ABS(*(float *)((long)param_2 + 4)) < 1.1920929e-07) && ((bRam000000011330a9e8 & 1) != 0)) {
    func_0x00010ae06f08(0,1,&UNK_10f65be4a,&UNK_10f65be84,0x13b,&UNK_10f65bedc);
  }
  uVar1 = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0x290) = *param_2;
  *(undefined4 *)(param_1 + 0x298) = uVar1;
  if ((*(byte *)(param_1 + 0x29c) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x29c) = 1;
  }
  return;
}



/* Entry: 10a4a546c; end: 10a4a548b;  */

void FUN_10a4a546c(long param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010a4a5488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110be0ca8,*(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 10a4a548c; end: 10a4a54cb;  */

void FUN_10a4a548c(long param_1,long *param_2)

{
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110be0cc8,0);
  *(char *)(param_1 + 0x28) = (char)param_2;
  return;
}



/* Entry: 10a4a54cc; end: 10a4a54eb;  */

void FUN_10a4a54cc(long param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010a4a54e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110be0cc8,*(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 10a4a54ec; end: 10a4a552b;  */

void FUN_10a4a54ec(long param_1,long *param_2)

{
  (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110be0ce8,1);
  *(int *)(param_1 + 0x2c) = (int)param_2;
  return;
}



/* Entry: 10a4a552c; end: 10a4a554b;  */

void FUN_10a4a552c(long param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010a4a5548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110be0ce8,*(undefined4 *)(param_1 + 0x2c));
  return;
}



/* Entry: 10a4a554c; end: 10a4a55df;  */

void FUN_10a4a554c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  FUN_10a5ae998(*(undefined8 *)(param_1 + 0x280),&PTR_DAT_110be7540,*(undefined8 *)(param_1 + 0x170)
                ,param_1);
  lVar5 = *(long *)(param_1 + 0x170);
  plVar1 = (long *)(param_1 + 0x1f0 + *(long *)(*(long *)(param_1 + 0x1f0) + -0x18));
  if ((*(byte *)(plVar1 + 3) & 1) == 0) {
    *(undefined1 *)(plVar1 + 3) = 1;
    plVar1[2] = lVar5;
    if (lVar5 != 0) {
      plVar1[1] = *(long *)(*(long *)(lVar5 + 0x850) + 0x2c);
    }
    (**(code **)(*plVar1 + 0x18))();
  }
  lVar4 = *(long *)(param_1 + 0x208);
  if (*(long *)(lVar4 + 0x20) == 0) {
    *(long *)(lVar4 + 0x30) = lVar5;
    lVar6 = *(long *)(lVar4 + 0x18);
    if (*(long *)(lVar4 + 0x18) != 0) {
      plVar1 = (long *)(*(long *)(lVar4 + 0x18) + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a3cf744(lVar5,&stack0xffffffffffffffd0,&PTR_DAT_110b99f08,param_1 + 0x1f0);
    if (lVar6 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if ((int)lVar5 != 0) {
      *(int *)(lVar4 + 0x38) = (int)lVar5;
      *(undefined1 *)(lVar4 + 0x3c) = 1;
    }
  }
  else if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    FUN_10ae06f30(1,8,&UNK_10f665c8c,&UNK_10f665cc3,0x71,&UNK_10f665d1c,&stack0x00000000);
    return;
  }
  return;
}



/* Entry: 10a4a55e0; end: 10a4a5607;  */

void FUN_10a4a55e0(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  FUN_10a5ae930(*(undefined8 *)(param_1 + 0x280));
  plVar3 = *(long **)(param_1 + 0x208);
  if (*(char *)((long)plVar3 + 0x3c) == '\x01') {
    FUN_10a3cf620(plVar3[6],(int)plVar3[7],plVar3);
    *(undefined4 *)(plVar3 + 7) = 0;
  }
  else {
    if (*(char *)((long)plVar3 + 0x3c) != '\x02') {
      return;
    }
    lVar1 = *plVar3;
    plVar2 = (long *)plVar3[1];
    *(long **)(lVar1 + 8) = plVar2;
    *plVar2 = lVar1;
    *plVar3 = 0;
    plVar3[1] = 0;
    plVar3[4] = 0;
    plVar3[5] = 0;
  }
  *(undefined1 *)((long)plVar3 + 0x3c) = 0;
  return;
}



/* Entry: 10a4a5608; end: 10a4a56ff;  */

void FUN_10a4a5608(long param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  undefined8 uVar7;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x168) + 0x140);
  func_0x00010a0d8ae0(lVar1);
  fVar3 = (-(*(float *)(lVar1 + 0x60) * *(float *)(lVar1 + 0x58)) +
          *(float *)(lVar1 + 0x5c) * *(float *)(lVar1 + 0x54)) * -2.0;
  fVar4 = -1.0;
  if (-1.0 <= fVar3) {
    fVar4 = fVar3;
  }
  fVar3 = 1.0;
  if (fVar4 <= 1.0) {
    fVar3 = fVar4;
  }
  _asinf();
  fVar4 = 0.5;
  fVar3 = fVar3 * 0.5;
  ___sincosf_stret();
  fVar6 = fVar3 * 0.0;
  lVar1 = *(long *)(param_1 + 0x168);
  uVar5 = *(undefined4 *)(*(long *)(lVar1 + 0x140) + 0x9c);
  uVar7 = *(undefined8 *)(*(long *)(lVar1 + 0x140) + 0x94);
  *(float *)(param_1 + 0x2c0) = fVar4 * 0.0 - fVar6;
  *(float *)(param_1 + 0x2c4) = fVar3 + fVar4 * 0.0 * 0.0;
  *(float *)(param_1 + 0x2c8) = fVar4 * 0.0 - fVar6;
  *(float *)(param_1 + 0x2cc) = fVar4 + fVar6 * 0.0;
  *(undefined8 *)(param_1 + 0x2d0) = uVar7;
  *(undefined4 *)(param_1 + 0x2d8) = uVar5;
  lVar2 = *(long *)(param_1 + 0x2f8);
  *(long *)(lVar2 + 0x48) = lVar1;
  lVar1 = *(long *)(lVar1 + 0x140);
  func_0x00010a0d8ae0(lVar1);
  uVar7 = *(undefined8 *)(lVar1 + 0x54);
  *(undefined8 *)(lVar2 + 0x14) = *(undefined8 *)(lVar1 + 0x5c);
  *(undefined8 *)(lVar2 + 0xc) = uVar7;
  *(uint *)(*(long *)(param_1 + 0x248) + 0x2c) =
       (uint)(*(int *)(*(long *)(*(long *)(param_1 + 0x170) + 0xa20) + 0x18) < 0xee);
  return;
}



/* Entry: 10a4a5700; end: 10a4a573b;  */

void FUN_10a4a5700(long param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  undefined8 uVar7;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x100) + 0x140);
  func_0x00010a0d8ae0(lVar1);
  fVar3 = (-(*(float *)(lVar1 + 0x60) * *(float *)(lVar1 + 0x58)) +
          *(float *)(lVar1 + 0x5c) * *(float *)(lVar1 + 0x54)) * -2.0;
  fVar4 = -1.0;
  if (-1.0 <= fVar3) {
    fVar4 = fVar3;
  }
  fVar3 = 1.0;
  if (fVar4 <= 1.0) {
    fVar3 = fVar4;
  }
  _asinf();
  fVar4 = 0.5;
  fVar3 = fVar3 * 0.5;
  ___sincosf_stret();
  fVar6 = fVar3 * 0.0;
  lVar1 = *(long *)(param_1 + 0x100);
  uVar5 = *(undefined4 *)(*(long *)(lVar1 + 0x140) + 0x9c);
  uVar7 = *(undefined8 *)(*(long *)(lVar1 + 0x140) + 0x94);
  *(float *)(param_1 + 600) = fVar4 * 0.0 - fVar6;
  *(float *)(param_1 + 0x25c) = fVar3 + fVar4 * 0.0 * 0.0;
  *(float *)(param_1 + 0x260) = fVar4 * 0.0 - fVar6;
  *(float *)(param_1 + 0x264) = fVar4 + fVar6 * 0.0;
  *(undefined8 *)(param_1 + 0x268) = uVar7;
  *(undefined4 *)(param_1 + 0x270) = uVar5;
  lVar2 = *(long *)(param_1 + 0x290);
  *(long *)(lVar2 + 0x48) = lVar1;
  lVar1 = *(long *)(lVar1 + 0x140);
  func_0x00010a0d8ae0(lVar1);
  uVar7 = *(undefined8 *)(lVar1 + 0x54);
  *(undefined8 *)(lVar2 + 0x14) = *(undefined8 *)(lVar1 + 0x5c);
  *(undefined8 *)(lVar2 + 0xc) = uVar7;
  *(uint *)(*(long *)(param_1 + 0x1e0) + 0x2c) =
       (uint)(*(int *)(*(long *)(*(long *)(param_1 + 0x108) + 0xa20) + 0x18) < 0xee);
  return;
}



/* Entry: 10a4a573c; end: 10a4a590b;  */

long *** FUN_10a4a573c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long ***ppplVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long *plVar9;
  undefined8 auStack_a8 [2];
  char cStack_91;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  long **pplStack_70;
  long **pplStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  char cStack_41;
  
  ppplVar5 = &pplStack_70;
  lVar8 = *(long *)(param_2 + 0x170);
  func_0x000107c2b054(&plStack_58,&UNK_10f65bff3);
  if (lVar8 != 0) {
    FUN_10a76c080(*(undefined8 *)(lVar8 + 0x8d8),&plStack_58);
  }
  if (cStack_41 < '\0') {
    __ZdlPv(plStack_58);
  }
  lVar8 = *(long *)(param_2 + 0x248);
  plVar9 = *(long **)(param_2 + 0x250);
  if (plVar9 == (long *)0x0) {
    iVar2 = *(int *)(lVar8 + 0x2c);
  }
  else {
    plVar1 = plVar9 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    iVar2 = *(int *)(lVar8 + 0x2c);
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  if (iVar2 != 3) {
    puVar6 = &UNK_10f65c019;
    FUN_10a00946c();
    if (cStack_41 < '\0') {
      __ZdlPv(plStack_58);
    }
    puVar7 = puVar6;
    __Unwind_Resume();
    pcStack_78 = FUN_10a4a590c;
    lVar8 = *(long *)(puVar7 + 0x170);
    uStack_90 = param_1;
    puStack_88 = puVar6;
    puStack_80 = &stack0xfffffffffffffff0;
    func_0x000107c2b054(auStack_a8,&UNK_10f65c08f);
    if (lVar8 != 0) {
      FUN_10a76c080(*(undefined8 *)(lVar8 + 0x8d8),auStack_a8);
    }
    if (cStack_91 < '\0') {
      __ZdlPv(auStack_a8[0]);
    }
    return (long ***)(puVar7 + 0x268);
  }
  FUN_10a96c3b8(&plStack_58,*(long *)(*(long *)(param_2 + 0x170) + 0x8c0) + 0x88,param_3,param_4);
  pplStack_70 = (long **)0x0;
  pplStack_68 = (long **)0x0;
  uStack_60 = 0;
  func_0x00010983ca2c(&pplStack_70,(long)plStack_50 - (long)plStack_58 >> 4);
  for (; plStack_58 != plStack_50; plStack_58 = plStack_58 + 2) {
    FUN_10a0efe48(&pplStack_70,*plStack_58 + 0x18);
  }
  FUN_10a96c7ec(param_1,0x41200000,0x43c80000,*(long *)(*(long *)(param_2 + 0x170) + 0x8c0) + 0xf0,
                param_3,&pplStack_70);
  if (pplStack_70 != (long **)0x0) {
    pplStack_68 = pplStack_70;
    __ZdlPv();
  }
  pplStack_70 = &plStack_58;
  FUN_10a4afac4(&pplStack_70);
  return ppplVar5;
}



/* Entry: 10a4a590c; end: 10a4a5983;  */

long FUN_10a4a590c(long param_1)

{
  long lVar1;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  lVar1 = *(long *)(param_1 + 0x170);
  func_0x000107c2b054(auStack_38,&UNK_10f65c08f);
  if (lVar1 != 0) {
    FUN_10a76c080(*(undefined8 *)(lVar1 + 0x8d8),auStack_38);
  }
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return param_1 + 0x268;
}



/* Entry: 10a4a5984; end: 10a4a5a5f;  */

void FUN_10a4a5984(undefined8 param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long unaff_x21;
  long lVar3;
  undefined8 uStack_68;
  float fStack_60;
  undefined8 uStack_5c;
  float fStack_54;
  undefined8 uStack_50;
  float fStack_48;
  
  lVar2 = *(long *)(param_2 + 0x168);
  for (lVar3 = *(long *)(lVar2 + 0x158); lVar3 != lVar2 + 0x150; lVar3 = *(long *)(lVar3 + 8)) {
    unaff_x21 = param_2;
    if (*(long *)(lVar3 + 0x10) != 0) {
      plVar1 = (long *)(*(long *)(lVar3 + 0x10) + 0xb0);
      (**(code **)(*plVar1 + 0x18))(plVar1,0x49f6491c8e4b2468);
      if (plVar1 != (long *)0x0) goto LAB_10a4a5a00;
    }
  }
  FUN_10a00946c(&UNK_10f65c0b0);
LAB_10a4a5a00:
  lVar3 = *(long *)(*(long *)(unaff_x21 + 0x170) + 0x8c0);
  FUN_10a96bdd8(&uStack_68);
  fStack_48 = fStack_60 + fStack_54;
  uStack_50 = CONCAT44((float)((ulong)uStack_68 >> 0x20) + (float)((ulong)uStack_5c >> 0x20),
                       (float)uStack_68 + (float)uStack_5c);
  FUN_10a96be74(param_1,lVar3 + 0xf0,&uStack_68,&uStack_50);
  return;
}



/* Entry: 10a4a5a60; end: 10a4a5e1b;  */

void FUN_10a4a5a60(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  long *plVar5;
  byte bVar6;
  code *pcVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined4 uStack_168;
  undefined8 uStack_164;
  undefined8 uStack_15c;
  undefined4 uStack_154;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined1 auStack_130 [56];
  undefined4 uStack_f8;
  undefined8 uStack_f0;
  float fStack_e8;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined1 auStack_b0 [8];
  long *plStack_a8;
  
  FUN_10a4a5e1c(auStack_b0);
  if (plStack_a8 != (long *)0x0) {
    plVar5 = plStack_a8 + 1;
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
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a8);
    }
  }
  uStack_f0 = NEON_fmov(0x3f800000,4);
  fStack_e8 = 1.0;
  FUN_10a45f7b0(auStack_b0,param_3,param_4,&uStack_f0);
  if ((*(int *)(param_2 + 0x21c) == 2) &&
     (*(int *)(*(long *)(*(long *)(param_2 + 0x170) + 0xa20) + 0x18) < 0x88)) {
    uStack_150 = *(undefined8 *)(param_2 + 0x2c0);
    uStack_148 = (undefined4)*(undefined8 *)(param_2 + 0x2c8);
    uStack_13c = (undefined4)*(undefined8 *)(param_2 + 0x2d4);
    uStack_138 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x2d4) >> 0x20);
    uStack_144 = (undefined4)*(undefined8 *)(param_2 + 0x2cc);
    uStack_140 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x2cc) >> 0x20);
  }
  else {
    uStack_148 = 0;
    uStack_144 = 0x3f800000;
    uStack_150 = 0;
    uStack_140 = 0;
    uStack_13c = 0;
    uStack_138 = 0;
  }
  FUN_10a4a5ec8(&uStack_190,&uStack_150);
  FUN_10a3ebe84(auStack_130,&uStack_190);
  uStack_f8 = (undefined4)uStack_178;
  func_0x000109519fd0(&uStack_f0,auStack_b0,auStack_130);
  uStack_190 = 0x3c23d70a;
  uStack_184 = 0;
  uStack_180 = 0;
  uStack_18c = 0;
  uStack_188 = 0;
  uStack_17c = 0x3c23d70a;
  uStack_178 = 0;
  uStack_170 = 0;
  uStack_168 = 0x3c23d70a;
  uStack_15c = 0;
  uStack_164 = 0;
  uStack_154 = 0x3f800000;
  func_0x000109519fd0(auStack_130,&uStack_190,&uStack_f0);
  uStack_150 = 0;
  uStack_148 = 0;
  uStack_144 = 0;
  FUN_10a25e7d4(&uStack_190,*(undefined8 *)(*(long *)(param_2 + 0x170) + 0x8c0),auStack_130,
                &uStack_150);
  plVar5 = (long *)CONCAT44(uStack_144,uStack_148);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar9 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  if (*(int *)CONCAT44(uStack_18c,uStack_190) != 0) {
    uVar10 = *(undefined8 *)(param_2 + 0x170);
    fVar16 = ((float)uStack_f0 - fStack_dc) - fStack_c8;
    fVar18 = (fStack_dc - (float)uStack_f0) - fStack_c8;
    fVar20 = (fStack_c8 - (float)uStack_f0) - fStack_dc;
    fStack_c8 = (float)uStack_f0 + fStack_dc + fStack_c8;
    fVar11 = fVar16;
    if (fVar16 <= fStack_c8) {
      fVar11 = fStack_c8;
    }
    bVar4 = 2;
    if (fVar18 <= fVar11) {
      fVar18 = fVar11;
      bVar4 = fStack_c8 < fVar16;
    }
    bVar6 = 3;
    if (fVar20 <= fVar18) {
      fVar20 = fVar18;
      bVar6 = bVar4;
    }
    fVar12 = SQRT(fVar20 + 1.0) * 0.5;
    fVar14 = 0.25 / fVar12;
    fVar15 = (fStack_d0 - fStack_e8) * fVar14;
    fVar17 = (uStack_f0._4_4_ + fStack_e0) * fVar14;
    fVar19 = (fStack_d8 + fStack_cc) * fVar14;
    fVar16 = (uStack_f0._4_4_ - fStack_e0) * fVar14;
    fVar13 = (fStack_e8 + fStack_d0) * fVar14;
    fVar21 = fVar15;
    fVar11 = fVar19;
    fVar18 = fVar12;
    fVar20 = fVar17;
    if (bVar6 != 2) {
      fVar21 = fVar16;
      fVar11 = fVar12;
      fVar18 = fVar19;
      fVar20 = fVar13;
    }
    fVar14 = (fStack_d8 - fStack_cc) * fVar14;
    fVar19 = fVar12;
    if (bVar6 != 0) {
      fVar19 = fVar14;
      fVar16 = fVar13;
      fVar15 = fVar17;
      fVar14 = fVar12;
    }
    if (bVar6 < 2) {
      fVar21 = fVar19;
      fVar11 = fVar16;
      fVar18 = fVar15;
      fVar20 = fVar14;
    }
    puVar8 = (undefined8 *)0x68;
    __Znwm();
    puVar8[1] = 0;
    puVar8[2] = 0;
    *puVar8 = &PTR_FUN_110be7258;
    puVar8[4] = 0;
    puVar8[5] = 0;
    puVar8[3] = &PTR_FUN_110c6acc8;
    *(undefined1 *)(puVar8 + 7) = 1;
    *(undefined8 *)((long)puVar8 + 0x3c) = 0;
    *(undefined8 *)((long)puVar8 + 0x4c) = 0;
    *(undefined8 *)((long)puVar8 + 0x44) = 0;
    *(undefined4 *)((long)puVar8 + 0x54) = 0x3f800000;
    puVar8[0xc] = 0;
    puVar8[0xb] = 0;
    puVar8[6] = uVar10;
    func_0x00010acb399c(puVar8 + 0xb,&uStack_190);
    *(undefined8 *)((long)puVar8 + 0x3c) = uStack_c0;
    *(undefined4 *)((long)puVar8 + 0x44) = uStack_b8;
    *(float *)(puVar8 + 9) = fVar20;
    *(float *)((long)puVar8 + 0x4c) = fVar18;
    *(float *)(puVar8 + 10) = fVar11;
    *(float *)((long)puVar8 + 0x54) = fVar21;
    *param_1 = puVar8 + 3;
    param_1[1] = puVar8;
    plVar5 = (long *)CONCAT44(uStack_184,uStack_188);
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        lVar9 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    return;
  }
  FUN_10a00946c(&UNK_10f65c106);
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a4a5df4);
  (*pcVar7)();
}



/* Entry: 10a4a5e1c; end: 10a4a5ec7;  */

void FUN_10a4a5e1c(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = (undefined4)*(undefined8 *)(*(long *)(param_2 + 0x170) + 0x8c0);
  FUN_10a25ec18();
  puVar2 = (undefined8 *)0x20;
  __Znwm();
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_110be4130;
  *(byte *)(puVar2 + 3) = (byte)uVar1 & 1;
  *(byte *)((long)puVar2 + 0x19) = (byte)((uint)uVar1 >> 0x10) & 1;
  *param_1 = puVar2;
  puVar3 = (undefined8 *)0x20;
  __Znwm();
  *puVar3 = &PTR_DAT_110be72a8;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = puVar2;
  param_1[1] = puVar3;
  return;
}



/* Entry: 10a4a5ec8; end: 10a4a5f37;  */

void FUN_10a4a5ec8(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_30;
  float fStack_28;
  
  fVar2 = *(float *)(param_2 + 1);
  uVar1 = *(undefined4 *)((long)param_2 + 0xc);
  uVar4 = CONCAT44(-(float)((ulong)*param_2 >> 0x20),-(float)*param_2);
  *param_1 = uVar4;
  *(float *)(param_1 + 1) = -fVar2;
  *(undefined4 *)((long)param_1 + 0xc) = uVar1;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  fVar2 = -*(float *)(param_2 + 3);
  uVar3 = CONCAT44(-(float)((ulong)param_2[2] >> 0x20),-(float)param_2[2]);
  uStack_30 = uVar3;
  fStack_28 = fVar2;
  func_0x00010a4af7a4(param_1,&uStack_30);
  *(float *)(param_1 + 2) = fVar2;
  *(int *)((long)param_1 + 0x14) = (int)uVar3;
  *(int *)(param_1 + 3) = (int)uVar4;
  return;
}



/* Entry: 10a4a5f38; end: 10a4a601b;  */

void FUN_10a4a5f38(long param_1,undefined8 param_2,float param_3,float param_4,undefined4 param_5,
                  long param_6,undefined8 *param_7,undefined8 *param_8)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  float fStack_58;
  
  uStack_68 = param_8[1];
  uVar2 = *param_8;
  uStack_60 = *param_7;
  fStack_58 = *(float *)(param_7 + 1);
  uStack_70 = uVar2;
  if ((*(int *)(param_6 + 0x21c) == 2) &&
     (*(int *)(*(long *)(*(long *)(param_6 + 0x170) + 0xa20) + 0x18) < 0x88)) {
    FUN_10a4af750(param_6 + 0x2c0,&uStack_70);
    fVar3 = param_3;
    fVar4 = param_4;
    fVar1 = fVar5;
    func_0x00010a4af7a4(param_6 + 0x2c0,&uStack_60);
    fStack_58 = fVar4 + *(float *)(param_6 + 0x2d8);
    fVar5 = (float)uVar2;
    uStack_70 = CONCAT44(param_3,fVar5);
    uStack_68 = CONCAT44(param_5,param_4);
    uStack_60 = CONCAT44((float)((ulong)*(undefined8 *)(param_6 + 0x2d0) >> 0x20) + fVar3,
                         (float)*(undefined8 *)(param_6 + 0x2d0) + fVar1);
  }
  FUN_10a3ebe84(param_1,&uStack_70);
  *(undefined8 *)(param_1 + 0x30) = uStack_60;
  *(float *)(param_1 + 0x38) = fStack_58;
  return;
}



/* Entry: 10a4a601c; end: 10a4a60cb;  */

void FUN_10a4a601c(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  lVar4 = *(long *)(param_1 + 0x170);
  func_0x000107c2b054(auStack_48,&UNK_10f65c12c);
  if (lVar4 != 0) {
    FUN_10a76c080(*(undefined8 *)(lVar4 + 0x8d8),auStack_48);
  }
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  uVar6 = param_2[1];
  uVar5 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar4 = *(long *)(param_1 + 0x2b8);
  *(undefined8 *)(param_1 + 0x2b8) = uVar6;
  *(undefined8 *)(param_1 + 0x2b0) = uVar5;
  if (lVar4 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 10a4a60cc; end: 10a4a616f;  */

void FUN_10a4a60cc(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  lVar4 = *(long *)(param_2 + 0x170);
  func_0x000107c2b054(auStack_48,&UNK_10f65c155);
  if (lVar4 != 0) {
    FUN_10a76c080(*(undefined8 *)(lVar4 + 0x8d8),auStack_48);
  }
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  lVar4 = *(long *)(param_2 + 0x2b8);
  uVar5 = *(undefined8 *)(param_2 + 0x2b0);
  param_1[1] = *(undefined8 *)(param_2 + 0x2b8);
  *param_1 = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* Entry: 10a4a6170; end: 10a4a657b;  */

void FUN_10a4a6170(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c8,&UNK_10f65ca6f,0x22);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110be47d0;
  pppuVar2 = (undefined8 ***)&UNK_10f65b2b8;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0x8ffffffff;
  uStack_88 = 0x4000000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0x17a;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,0x40,0xffffffff,0xffffffff,8);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110be47d0;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110bd31d8;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,0x40,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f65c17e,FUN_10a4bfe8c,FUN_10a4bff44);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,0x40,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f65c188,FUN_10a4c00d4,FUN_10a4c018c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,0x40,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f65c194,FUN_10a4c024c,FUN_10a4c0304);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,0x40,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f65c19f,FUN_10a4c03c4,FUN_10a4c047c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,0x40,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f65c1b0,FUN_10a4c0548,FUN_10a4c0620);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,0x40,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110b9a108,FUN_10a07c674);
    FUN_10a0605c4(param_1,&UNK_10f65c1bc,FUN_10a4c0704,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,0x40,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110b9a108,FUN_10a07c674);
    FUN_10a0605c4(param_1,&UNK_10f65c1d2,FUN_10a4c07bc,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,0x40,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110b9a108,FUN_10a07c674);
    FUN_10a0605c4(param_1,&UNK_10f65c1e8,FUN_10a4c0874,0);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f65ca6f,0x22);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a4a6560);
  (*pcVar6)();
}



/* Entry: 10a4a657c; end: 10a4a664b;  */

void FUN_10a4a657c(long param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  if ((*(char *)(param_1 + 499) == '\x01') && (*(long *)(*(long *)(param_1 + 0x168) + 0x188) != 0))
  {
    fVar2 = *(float *)(param_1 + 500);
    fVar3 = *(float *)(param_1 + 0x1f8);
    fVar5 = *(float *)(param_1 + 0x1fc);
    fVar4 = fVar2 * fVar2 + fVar3 * fVar3 + fVar5 * fVar5;
    if (1e-12 <= fVar4) {
      fVar4 = 1.0 / SQRT(fVar4);
      fVar2 = fVar2 * fVar4;
      fVar3 = fVar3 * fVar4;
      fVar5 = fVar5 * fVar4;
    }
    else {
      fVar3 = 0.0;
      fVar5 = 1.0;
      fVar2 = 0.0;
    }
    lVar1 = *(long *)(*(long *)(param_1 + 0x168) + 0x140);
    fVar4 = fVar2 * *(float *)(lVar1 + 0x94) + fVar3 * *(float *)(lVar1 + 0x98) +
            fVar5 * *(float *)(lVar1 + 0x9c);
    fStack_1c = *(float *)(lVar1 + 0x94) - fVar2 * fVar4;
    fStack_18 = *(float *)(lVar1 + 0x98) - fVar3 * fVar4;
    fStack_14 = *(float *)(lVar1 + 0x9c) - fVar5 * fVar4;
    FUN_10a3e3894(lVar1,&fStack_1c);
  }
  return;
}



/* Entry: 10a4a664c; end: 10a4a671b;  */

undefined1  [16] FUN_10a4a664c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x18;
  auVar1._0_8_ = &UNK_10f65ca92;
  return auVar1;
}



/* Entry: 10a4a671c; end: 10a4a6a1f;  */

void FUN_10a4a671c(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c8,&UNK_10f65ca92,0x18);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110be5240;
  pppuVar2 = (undefined8 ***)&UNK_10f65b2b8;
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
    ppuStack_b0 = &PTR_DAT_110be5240;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110bc3458;
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
    FUN_10a052828(param_1,&DAT_10f65c1ff,FUN_10a4c092c,FUN_10a4c09ec);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f644824,FUN_10a4c0b98,FUN_10a4c0c54);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,0x42,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f65c209,FUN_10a4c0d58,FUN_10a4c0e18);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f65c219,FUN_10a4c0ef4,FUN_10a4c0fd4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f651ece,FUN_10a4c10e0,0);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f65ca92,0x18);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a4a6a04);
  (*pcVar6)();
}



/* Entry: 10a4a6a20; end: 10a4a6c6f;  */

void FUN_10a4a6a20(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  long *plStack_48;
  
  uVar7 = *(undefined8 *)(param_1 + 0x170);
  plVar5 = (long *)0x2c0;
  __Znwm();
  plVar8 = plVar5 + 1;
  *plVar8 = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_110be7308;
  plVar1 = plVar5 + 3;
  FUN_10ac23f18(plVar1,uVar7);
  if (plVar5[0xc] == 0) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar2 = plVar5 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = *plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar5[0xb] = (long)plVar1;
    plVar5[0xc] = (long)plVar5;
LAB_10a4a6ae0:
    do {
      lVar6 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  else if (*(long *)(plVar5[0xc] + 8) == -1) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar2 = plVar5 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = *plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar5[0xb] = (long)plVar1;
    plVar5[0xc] = (long)plVar5;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    goto LAB_10a4a6ae0;
  }
  *(long **)(param_1 + 0x528) = plVar1;
  plVar8 = *(long **)(param_1 + 0x530);
  *(long **)(param_1 + 0x530) = plVar5;
  if (plVar8 == (long *)0x0) {
    uStack_58 = *(undefined8 *)(param_1 + 0x170);
    plStack_68 = plVar1;
  }
  else {
    plVar1 = plVar8 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
    plStack_68 = *(long **)(param_1 + 0x528);
    uStack_58 = *(undefined8 *)(param_1 + 0x170);
    if (plStack_68 == (long *)0x0) {
      plStack_68 = (long *)0x0;
      plStack_60 = (long *)0x0;
      goto LAB_10a4a6b94;
    }
    plVar5 = *(long **)(param_1 + 0x530);
    plStack_60 = plVar5;
    if (plVar5 == (long *)0x0) goto LAB_10a4a6b94;
  }
  plVar1 = plVar5 + 1;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = *plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    plStack_60 = plVar5;
  } while (cVar3 != '\0');
LAB_10a4a6b94:
  FUN_10a38f240(auStack_50,&uStack_58,&plStack_68);
  FUN_10a426824(param_1,auStack_50);
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
  plVar1 = plStack_60;
  if (plStack_60 != (long *)0x0) {
    plVar5 = plStack_60 + 1;
    do {
      lVar6 = *plVar5;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_60 + 0x10))(plStack_60);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a4a6c70; end: 10a4a6df7;  */

undefined8 * FUN_10a4a6c70(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  param_1[0xa7] = &PTR_FUN_110c383b8;
  param_1[0xa9] = 0;
  param_1[0xa8] = 0;
  *(undefined2 *)(param_1 + 0xaa) = 0x100;
  puVar1 = param_1;
  FUN_10a4213cc(param_1,&PTR_PTR_110be1180,param_2,param_3,5);
  *puVar1 = &PTR_DAT_110be4800;
  puVar1[2] = &PTR_DAT_110bbddd0;
  puVar1[7] = &PTR_FUN_110bbde28;
  puVar1[0xd] = &PTR_FUN_110bbde48;
  puVar1[0xa7] = &PTR_FUN_110be4a60;
  puVar1[0x16] = &PTR_FUN_110bbdeb8;
  puVar1[0x17] = &PTR_DAT_110bbdee8;
  FUN_10a0040d0(puVar1 + 0x9e,&PTR_PTR_110be11c0);
  *param_1 = &PTR_DAT_110be0d20;
  param_1[2] = &PTR_FUN_110be0f68;
  param_1[7] = &PTR_DAT_110be0fc0;
  param_1[0xd] = &PTR_DAT_110be0fe0;
  param_1[0xa7] = &PTR_FUN_110be1138;
  param_1[0x16] = &PTR_DAT_110be1050;
  param_1[0x17] = &PTR_DAT_110be1080;
  param_1[0x9e] = &PTR_DAT_110be10b8;
  puVar1 = (undefined8 *)0x58;
  __Znwm();
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = &PTR_DAT_110bf7fc8;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  *(undefined8 *)((long)puVar1 + 0x4d) = 0;
  *(undefined8 *)((long)puVar1 + 0x45) = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  param_1[0xa3] = puVar1 + 3;
  param_1[0xa4] = puVar1;
  FUN_10a5cf1fc(param_1 + 0xa3);
  param_1[0xa6] = 0;
  param_1[0xa5] = 0;
  FUN_10a4a6a20(param_1);
  return param_1;
}



/* Entry: 10a4a6df8; end: 10a4a6e8f;  */

void FUN_10a4a6df8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  FUN_10a421994();
  FUN_10a5ae998(*(undefined8 *)(param_1 + 0x518),&PTR_DAT_110be5240,*(undefined8 *)(param_1 + 0x170)
                ,param_1);
  lVar5 = *(long *)(param_1 + 0x170);
  plVar1 = (long *)(param_1 + 0x4f0 + *(long *)(*(long *)(param_1 + 0x4f0) + -0x18));
  if ((*(byte *)(plVar1 + 3) & 1) == 0) {
    *(undefined1 *)(plVar1 + 3) = 1;
    plVar1[2] = lVar5;
    if (lVar5 != 0) {
      plVar1[1] = *(long *)(*(long *)(lVar5 + 0x850) + 0x2c);
    }
    (**(code **)(*plVar1 + 0x18))();
  }
  lVar4 = *(long *)(param_1 + 0x508);
  if (*(long *)(lVar4 + 0x20) == 0) {
    *(long *)(lVar4 + 0x30) = lVar5;
    lVar6 = *(long *)(lVar4 + 0x18);
    if (*(long *)(lVar4 + 0x18) != 0) {
      plVar1 = (long *)(*(long *)(lVar4 + 0x18) + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a3cf744(lVar5,&stack0xffffffffffffffd0,&PTR_DAT_110b99f08,param_1 + 0x4f0);
    if (lVar6 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if ((int)lVar5 != 0) {
      *(int *)(lVar4 + 0x38) = (int)lVar5;
      *(undefined1 *)(lVar4 + 0x3c) = 1;
    }
  }
  else if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    FUN_10ae06f30(1,8,&UNK_10f665c8c,&UNK_10f665cc3,0x71,&UNK_10f665d1c,&stack0x00000000);
    return;
  }
  return;
}



/* Entry: 10a4a6e90; end: 10a4a6ebb;  */

void FUN_10a4a6e90(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  FUN_10a42238c();
  FUN_10a5ae930(*(undefined8 *)(param_1 + 0x518));
  plVar3 = *(long **)(param_1 + 0x508);
  if (*(char *)((long)plVar3 + 0x3c) == '\x01') {
    FUN_10a3cf620(plVar3[6],(int)plVar3[7],plVar3);
    *(undefined4 *)(plVar3 + 7) = 0;
  }
  else {
    if (*(char *)((long)plVar3 + 0x3c) != '\x02') {
      return;
    }
    lVar1 = *plVar3;
    plVar2 = (long *)plVar3[1];
    *(long **)(lVar1 + 8) = plVar2;
    *plVar2 = lVar1;
    *plVar3 = 0;
    plVar3[1] = 0;
    plVar3[4] = 0;
    plVar3[5] = 0;
  }
  *(undefined1 *)((long)plVar3 + 0x3c) = 0;
  return;
}



/* Entry: 10a4a6ebc; end: 10a4a6edb;  */

void FUN_10a4a6ebc(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  *(undefined1 *)(param_1 + 0x43) = 3;
  if (((0xb0 < *(int *)(*(long *)(param_1[0x2e] + 0xa20) + 0x18)) &&
      (*(char *)((long)param_1 + 0x20c) == '\x01')) &&
     (lVar2 = *(long *)(param_1[0x2d] + 0x188), lVar2 != 0)) {
    for (lVar3 = *(long *)(lVar2 + 0x158); lVar3 != lVar2 + 0x150; lVar3 = *(long *)(lVar3 + 8)) {
      if (*(long *)(lVar3 + 0x10) != 0) {
        plVar1 = (long *)(*(long *)(lVar3 + 0x10) + 0xb0);
        (**(code **)(*plVar1 + 0x18))(plVar1,0xbd1555114443a935);
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x128))();
          (**(code **)(*param_1 + 0x130))(param_1,plVar1);
          break;
        }
      }
    }
  }
  if ((*(ushort *)(param_1 + 0x30) & 0x17) != 0) {
    return;
  }
  if ((param_1[0x2d] != 0) && ((*(ushort *)(param_1[0x2d] + 0x118) >> 9 & 1) != 0)) {
    if (((*(uint *)(param_1 + 0x3d) ^ 0xffffffff) & 2) != 0 ||
        (*(uint *)((long)param_1 + 0x1ec) & 2) != 2) {
      *(uint *)(param_1 + 0x3d) = *(uint *)(param_1 + 0x3d) | 2;
      *(uint *)((long)param_1 + 0x1ec) = *(uint *)((long)param_1 + 0x1ec) | 2;
                    /* WARNING: Could not recover jumptable at 0x00010a3c7418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xd0))(param_1,param_1[0x2e] + 0x4f8);
      return;
    }
  }
  return;
}



/* Entry: 10a4a6edc; end: 10a4a6f63;  */

void FUN_10a4a6edc(long param_1,long *param_2)

{
  long lVar1;
  
  FUN_10a2d5304();
  lVar1 = *(long *)(param_1 + 0x528);
  if (lVar1 == 0) {
    FUN_10a4a6a20(param_1);
    lVar1 = *(long *)(param_1 + 0x528);
  }
                    /* WARNING: Could not recover jumptable at 0x00010a4a6f24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x1f0))(param_2,&PTR_DAT_110be11e8,lVar1);
  return;
}



/* Entry: 10a4a6f64; end: 10a4a6f7b;  */

int * FUN_10a4a6f64(long param_1,long param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined1 *puVar4;
  int aiStack_e0 [14];
  undefined4 uStack_a8;
  undefined4 uStack_a0;
  undefined1 uStack_9c;
  undefined1 uStack_98;
  undefined4 uStack_94;
  undefined1 uStack_90;
  undefined1 uStack_8c;
  undefined1 auStack_88 [88];
  char cStack_30;
  long lStack_28;
  
  piVar2 = aiStack_e0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  aiStack_e0[0] = 0;
  uStack_a8 = 0;
  uStack_a0 = 4;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_94 = 0xffffffff;
  uStack_90 = 0;
  uStack_8c = 0;
  puVar4 = (undefined1 *)(*(long *)(param_1 + 0x528) + 0xe8);
  FUN_10ab17db4(auStack_88,aiStack_e0,puVar4,(long)*(short *)(*(long *)(param_1 + 0x528) + 0x102));
  if (cStack_30 == '\x01') {
    puVar4 = auStack_88;
    FUN_10a4c3ba4(param_2 + 0x58);
    if (cStack_30 == '\x01') {
      FUN_10a22d0f8(auStack_88);
    }
  }
  FUN_10a22d0f8();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return piVar2;
  }
  ___stack_chk_fail();
  if (cStack_30 == '\x01') {
    FUN_10a22d0f8(auStack_88);
  }
  FUN_10a22d0f8(aiStack_e0);
  __Unwind_Resume();
  piVar3 = piVar2 + 0x3a;
  func_0x00010ab17e00(piVar3,(long)*(short *)((long)piVar2 + 0x102));
  if (puVar4 != (undefined1 *)0x0) {
    piVar2 = *(int **)(puVar4 + 0x28);
    piVar1 = *(int **)(puVar4 + 0x30);
    if (piVar2 == piVar1) {
LAB_10ac24420:
      if ((piVar2 != piVar1) &&
         ((piVar2 != (int *)0x0 &&
          (0 < (piVar2[0x66] + piVar2[0x67]) - (piVar2[100] + piVar2[0x65]))))) {
        return piVar2 + 2;
      }
    }
    else {
      do {
        if ((*piVar2 == (int)piVar3) && (piVar2[1] == (int)((ulong)piVar3 >> 0x20)))
        goto LAB_10ac24420;
        piVar2 = piVar2 + 0x88;
      } while (piVar2 != piVar1);
    }
  }
  return (int *)0x0;
}



/* Entry: 10a4a6f7c; end: 10a4a6ff7;  */

bool FUN_10a4a6f7c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x528);
  FUN_10ac243c8(lVar1,*(undefined8 *)(param_2 + 0x68));
  lVar2 = param_1 + 0x4f0;
  (**(code **)(*(long *)(param_1 + 0x4f0) + 0x30))();
  FUN_10ab6e450();
  if (lVar2 != 0) {
    FUN_10ac24468(*(undefined8 *)(param_1 + 0x528),lVar1);
  }
  if (0x13e < *(int *)(*(long *)(*(long *)(param_1 + 0x170) + 0xa20) + 0x18)) {
    FUN_10a3e4548(*(undefined8 *)(param_1 + 0x168),lVar1 != 0);
  }
  return lVar1 != 0;
}



/* Entry: 10a4a6ff8; end: 10a4a6fff;  */

bool FUN_10a4a6ff8(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = param_1[7];
  FUN_10ac243c8(lVar1,*(undefined8 *)(param_2 + 0x68));
  plVar2 = param_1;
  (**(code **)(*param_1 + 0x30))();
  FUN_10ab6e450();
  if (plVar2 != (long *)0x0) {
    FUN_10ac24468(param_1[7],lVar1);
  }
  if (0x13e < *(int *)(*(long *)(param_1[-0x70] + 0xa20) + 0x18)) {
    FUN_10a3e4548(param_1[-0x71],lVar1 != 0);
  }
  return lVar1 != 0;
}



/* Entry: 10a4a7000; end: 10a4a7073;  */

byte FUN_10a4a7000(long param_1)

{
  byte bVar1;
  long lVar2;
  
  lVar2 = param_1 + 0x4f0;
  (**(code **)(*(long *)(param_1 + 0x4f0) + 0x30))();
  FUN_10ab6e450();
  if (lVar2 == 0) {
    lVar2 = *(long *)(param_1 + 0x528);
    FUN_10ac243c8(lVar2,*(undefined8 *)
                         (*(long *)(*(long *)(*(long *)(param_1 + 0x170) + 0x8c0) + 0x18) + 0x68));
    FUN_10ac24468(*(undefined8 *)(param_1 + 0x528),lVar2);
    bVar1 = lVar2 != 0;
  }
  else {
    bVar1 = *(byte *)(*(long *)(param_1 + 0x4f8) + 0x48);
  }
  return bVar1 & 1;
}



/* Entry: 10a4a7074; end: 10a4a72ff;  */

/* WARNING: Removing unreachable block (ram,0x00010a4a7238) */

void FUN_10a4a7074(undefined8 *param_1,long param_2)

{
  char *pcVar1;
  ulong uVar2;
  undefined8 ***pppuVar3;
  undefined1 **ppuVar4;
  undefined8 ***pppuVar5;
  undefined8 **ppuVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined1 *puStack_e0;
  ulong uStack_d8;
  byte bStack_c9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 **ppuStack_70;
  ulong uStack_68;
  byte bStack_59;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  
  pcVar1 = "false";
  if ((*(byte *)(*(long *)(param_2 + 0x528) + 0x100) & 4) != 0) {
    pcVar1 = "true";
  }
  func_0x000107c2b054(&ppuStack_58,pcVar1);
  FUN_10a3c829c(&ppuStack_70,param_2);
  uVar2 = uStack_68;
  if (-1 < (char)bStack_59) {
    uVar2 = (ulong)bStack_59;
  }
  FUN_10a003c90(appuStack_c8,uVar2 + 0xd,&puStack_e0);
  pppuVar5 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar5 = appuStack_c8;
  }
  if (uVar2 != 0) {
    pppuVar3 = (undefined8 ***)ppuStack_70;
    if (-1 < (char)bStack_59) {
      pppuVar3 = &ppuStack_70;
    }
    _memmove(pppuVar5,pppuVar3,uVar2);
  }
  puVar7 = (undefined8 *)((long)pppuVar5 + uVar2);
  *puVar7 = 0x6e4965636166202c;
  *(undefined8 *)((long)puVar7 + 5) = 0x203a7865646e4965;
  *(undefined1 *)((long)puVar7 + 0xd) = 0;
  __ZNSt3__19to_stringEi(&puStack_e0,(long)*(short *)(*(long *)(param_2 + 0x528) + 0x102));
  ppuVar4 = (undefined1 **)puStack_e0;
  if (-1 < (char)bStack_c9) {
    uStack_d8 = (ulong)bStack_c9;
    ppuVar4 = &puStack_e0;
  }
  pppuVar5 = appuStack_c8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppuVar5,ppuVar4,uStack_d8);
  puStack_a8 = pppuVar5[1];
  puStack_b0 = *pppuVar5;
  puStack_a0 = pppuVar5[2];
  pppuVar5[1] = (undefined8 **)0x0;
  pppuVar5[2] = (undefined8 **)0x0;
  *pppuVar5 = (undefined8 **)0x0;
  ppuVar6 = &puStack_b0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppuVar6,&UNK_10f65c233,0x13);
  uStack_88 = ppuVar6[1];
  uStack_90 = *ppuVar6;
  lStack_80 = (long)ppuVar6[2];
  ppuVar6[1] = (undefined8 *)0x0;
  ppuVar6[2] = (undefined8 *)0x0;
  *ppuVar6 = (undefined8 *)0x0;
  if (-1 < (char)bStack_41) {
    uStack_50 = (ulong)bStack_41;
    ppuStack_58 = &ppuStack_58;
  }
  puVar7 = &uStack_90;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,ppuStack_58,uStack_50);
  uVar8 = *puVar7;
  param_1[1] = puVar7[1];
  *param_1 = uVar8;
  param_1[2] = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  if (lStack_80 < 0) {
    __ZdlPv(uStack_90);
  }
  if ((long)puStack_a0 < 0) {
    __ZdlPv(puStack_b0);
  }
  if ((char)bStack_c9 < '\0') {
    __ZdlPv(puStack_e0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  if ((char)bStack_59 < '\0') {
    __ZdlPv(ppuStack_70);
  }
  return;
}



/* Entry: 10a4a7300; end: 10a4a7307;  */

/* WARNING: Removing unreachable block (ram,0x00010a4a7238) */

void FUN_10a4a7300(undefined8 *param_1,long param_2)

{
  char *pcVar1;
  ulong uVar2;
  undefined8 ***pppuVar3;
  undefined1 **ppuVar4;
  undefined8 ***pppuVar5;
  undefined8 **ppuVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined1 *puStack_e0;
  ulong uStack_d8;
  byte bStack_c9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 **ppuStack_70;
  ulong uStack_68;
  byte bStack_59;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  
  pcVar1 = "false";
  if ((*(byte *)(*(long *)(param_2 + 0x518) + 0x100) & 4) != 0) {
    pcVar1 = "true";
  }
  func_0x000107c2b054(&ppuStack_58,pcVar1);
  FUN_10a3c829c(&ppuStack_70,param_2 + -0x10);
  uVar2 = uStack_68;
  if (-1 < (char)bStack_59) {
    uVar2 = (ulong)bStack_59;
  }
  FUN_10a003c90(appuStack_c8,uVar2 + 0xd,&puStack_e0);
  pppuVar5 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar5 = appuStack_c8;
  }
  if (uVar2 != 0) {
    pppuVar3 = (undefined8 ***)ppuStack_70;
    if (-1 < (char)bStack_59) {
      pppuVar3 = &ppuStack_70;
    }
    _memmove(pppuVar5,pppuVar3,uVar2);
  }
  puVar7 = (undefined8 *)((long)pppuVar5 + uVar2);
  *puVar7 = 0x6e4965636166202c;
  *(undefined8 *)((long)puVar7 + 5) = 0x203a7865646e4965;
  *(undefined1 *)((long)puVar7 + 0xd) = 0;
  __ZNSt3__19to_stringEi(&puStack_e0,(long)*(short *)(*(long *)(param_2 + 0x518) + 0x102));
  ppuVar4 = (undefined1 **)puStack_e0;
  if (-1 < (char)bStack_c9) {
    uStack_d8 = (ulong)bStack_c9;
    ppuVar4 = &puStack_e0;
  }
  pppuVar5 = appuStack_c8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppuVar5,ppuVar4,uStack_d8);
  puStack_a8 = pppuVar5[1];
  puStack_b0 = *pppuVar5;
  puStack_a0 = pppuVar5[2];
  pppuVar5[1] = (undefined8 **)0x0;
  pppuVar5[2] = (undefined8 **)0x0;
  *pppuVar5 = (undefined8 **)0x0;
  ppuVar6 = &puStack_b0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppuVar6,&UNK_10f65c233,0x13);
  uStack_88 = ppuVar6[1];
  uStack_90 = *ppuVar6;
  lStack_80 = (long)ppuVar6[2];
  ppuVar6[1] = (undefined8 *)0x0;
  ppuVar6[2] = (undefined8 *)0x0;
  *ppuVar6 = (undefined8 *)0x0;
  if (-1 < (char)bStack_41) {
    uStack_50 = (ulong)bStack_41;
    ppuStack_58 = &ppuStack_58;
  }
  puVar7 = &uStack_90;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,ppuStack_58,uStack_50);
  uVar8 = *puVar7;
  param_1[1] = puVar7[1];
  *param_1 = uVar8;
  param_1[2] = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  if (lStack_80 < 0) {
    __ZdlPv(uStack_90);
  }
  if ((long)puStack_a0 < 0) {
    __ZdlPv(puStack_b0);
  }
  if ((char)bStack_c9 < '\0') {
    __ZdlPv(puStack_e0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  if ((char)bStack_59 < '\0') {
    __ZdlPv(ppuStack_70);
  }
  return;
}



/* Entry: 10a4a7308; end: 10a4a7617;  */

void FUN_10a4a7308(long *param_1,long *param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  undefined8 *puVar5;
  byte bVar6;
  char cVar7;
  bool bVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  long lStack_60;
  long *plStack_58;
  
  if (param_4 == 0) {
    plVar14 = param_2;
    uVar13 = param_3;
    func_0x00010a0fda30();
  }
  else {
    plStack_58 = (long *)param_2[9];
    lStack_60 = param_2[8];
    lVar15 = param_4 + 0x88;
    func_0x00010a35bf90(lVar15,&lStack_60);
    puVar5 = (undefined8 *)((ulong)&lStack_60 | 8);
    plVar14 = &lStack_60;
    if (lVar15 != 0) {
      puVar5 = (undefined8 *)(lVar15 + 0x28);
      plVar14 = (long *)(lVar15 + 0x20);
    }
    uVar13 = *puVar5;
    plVar14 = (long *)*plVar14;
  }
  lVar15 = param_2[0x2e];
  FUN_10a3dd220(lVar15);
  FUN_10a4c1230(lVar15,plVar14,uVar13);
  plVar14 = (long *)0x28;
  __Znwm();
  plVar9 = plVar14 + 1;
  *plVar9 = 0;
  *plVar14 = (long)&PTR_FUN_110be7358;
  plVar14[2] = 0;
  plVar14[3] = lVar15;
  plVar14[4] = (long)FUN_10a3df8cc;
  if (lVar15 != 0) {
    if (*(long *)(lVar15 + 0x30) == 0) {
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar8) {
          *plVar9 = *plVar9 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      plVar1 = plVar14 + 2;
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = *plVar1 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      *(long *)(lVar15 + 0x28) = lVar15;
      *(long **)(lVar15 + 0x30) = plVar14;
    }
    else {
      if (*(long *)(*(long *)(lVar15 + 0x30) + 8) != -1) goto LAB_10a4a7474;
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar8) {
          *plVar9 = *plVar9 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      plVar1 = plVar14 + 2;
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = *plVar1 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      *(long *)(lVar15 + 0x28) = lVar15;
      *(long **)(lVar15 + 0x30) = plVar14;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    do {
      lVar10 = *plVar9;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar8) {
        *plVar9 = lVar10 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
    }
  }
LAB_10a4a7474:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (lVar15 + 0x150,param_2 + 0x2a);
  uVar2 = (*(ushort *)(param_2 + 0x30) >> 1 & 1) << 1;
  uVar3 = *(ushort *)(lVar15 + 0x180) & 0xfffc;
  *(ushort *)(lVar15 + 0x180) = uVar3 | *(ushort *)(lVar15 + 0x180) & 1 | uVar2;
  *(ushort *)(lVar15 + 0x180) = uVar3 | uVar2 | *(ushort *)(param_2 + 0x30) & 1;
  if (plVar14 != (long *)0x0) {
    plVar9 = plVar14 + 1;
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar8) {
        *plVar9 = *plVar9 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  lStack_60 = lVar15;
  plStack_58 = plVar14;
  FUN_10a3c7ce8(param_3,&lStack_60);
  plVar9 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      lVar10 = *plVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar10 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  plVar9 = param_2;
  (**(code **)(*param_2 + 0x128))();
  *(undefined1 *)(lVar15 + 0x20c) = 0;
  *(int *)(lVar15 + 0x210) = (int)plVar9;
  FUN_10a2d597c(param_2,lVar15,param_4);
  FUN_10a4a6a20(lVar15);
  lVar10 = *(long *)(lVar15 + 0x528);
  lVar11 = param_2[0xa5];
  *(undefined2 *)(lVar10 + 0x102) = *(undefined2 *)(lVar11 + 0x102);
  bVar6 = *(byte *)(lVar11 + 0x100);
  uVar12 = 2;
  uVar4 = (uint)((bVar6 & 1) == 0);
  if ((((uint)bVar6 ^ (bVar6 & 2) >> 1) & 1) == 0) {
    uVar4 = uVar12;
  }
  if (1 < uVar4 - 1) {
    uVar12 = 0;
  }
  bVar6 = (*(byte *)(lVar10 + 0x100) & 0xfc | (byte)uVar4 & 1 | (byte)uVar12) ^ 1;
  *(byte *)(lVar10 + 0x100) = bVar6;
  *(byte *)(lVar10 + 0x100) = bVar6 & 0xfb | *(byte *)(lVar11 + 0x100) & 4;
  *param_1 = lVar15;
  param_1[1] = (long)plVar14;
  return;
}



/* Entry: 10a4a7618; end: 10a4a76cf;  */

undefined1  [16] FUN_10a4a7618(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xd;
  auVar1._0_8_ = &UNK_10f65caab;
  return auVar1;
}



/* Entry: 10a4a76d0; end: 10a4a77af;  */

void FUN_10a4a76d0(undefined8 param_1)

{
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
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000002;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a4a77b0(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f65c1ff;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f65b2b8;
  uStack_38 = 0;
  FUN_10a4c1450();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f65c247;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f65b2b8;
  uStack_38 = 0;
  func_0x00010a4c170c(param_1,&puStack_98);
  FUN_10a4c191c(param_1);
  return;
}



/* Entry: 10a4a77b0; end: 10a4a7887;  */

/* WARNING: Removing unreachable block (ram,0x00010a4a7848) */

undefined1  [16] FUN_10a4a77b0(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f65caab,0xd);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a4c1354(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a4a7888; end: 10a4a79c3;  */

void FUN_10a4a7888(undefined8 param_1)

{
  undefined4 uStack_8c;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined8 uStack_3c;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f65c250;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x200000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_3c = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x00010a4a796c(param_1,&puStack_88);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f65c259;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_3c = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_8c = 0;
  FUN_10a4a79c4(param_1,&puStack_88,&uStack_8c);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f65c25e;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_3c = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_8c = 1;
  FUN_10a4a79c4(param_1,&puStack_88,&uStack_8c);
  FUN_10a003ff4(param_1);
  return;
}



/* Entry: 10a4a79c4; end: 10a4a7a1b;  */

ulong FUN_10a4a79c4(ulong param_1,undefined8 *param_2,undefined4 *param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a4c19d8(param_1,*param_2,*param_3);
  }
  return param_1;
}



/* Entry: 10a4a7a1c; end: 10a4a7b6f;  */

void FUN_10a4a7a1c(void)

{
  if ((bRam000000011330a9e8 >> 1 & 1) == 0) {
    return;
  }
  FUN_10ae06f30(1,2,&UNK_10f65c264,&UNK_10f65c29c,0x19,&UNK_10f65c2d3,&stack0x00000000);
  return;
}



/* Entry: 10a4a7b70; end: 10a4a810b;  */

void FUN_10a4a7b70(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c8,&UNK_10f65cab9,0x19);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110be5e68;
  pppuVar2 = (undefined8 ***)&UNK_10f65b2b8;
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
    ppuStack_b0 = &PTR_DAT_110be5e68;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110bc3458;
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
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a4a80ec;
    FUN_10a054dac(param_1,&UNK_10f65c328,FUN_10a4c1a4c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a4a80ec;
    FUN_10a054dac(param_1,&UNK_10f65c342,FUN_10a4c1c40,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a4a80ec;
    FUN_10a054dac(param_1,&UNK_10f65c350,FUN_10a4c1dcc,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f65c1ff,FUN_10a4c1ec8,FUN_10a4c1f84);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f644824,FUN_10a4c205c,FUN_10a4c2114);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f651ece,FUN_10a4c2214,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f65c35e,FUN_10a4c1c40,FUN_10a4c1dcc);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f65c369,FUN_10a4c22cc,FUN_10a4c238c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f65c37b,FUN_10a4c278c,FUN_10a4c285c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f3d0f37,FUN_10a4c2924,FUN_10a4c29f4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f65c387,FUN_10a4c2abc,FUN_10a4c2b7c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f65c399,FUN_10a4c2c70,FUN_10a4c2d30);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f65c3ab,FUN_10a4c2e3c,FUN_10a4c2efc);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f6528fb,FUN_10a4c2fc4,FUN_10a4c3084);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f652901,FUN_10a4c3154,FUN_10a4c3214);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f65cab9,0x19);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a4a80ec:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a4a80f0);
  (*pcVar6)();
}



/* Entry: 10a4a810c; end: 10a4a83a3;  */

void FUN_10a4a810c(undefined8 param_1)

{
  undefined8 auStack_b0 [2];
  char cStack_99;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f654e85;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f65b2b8;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  puStack_60 = &UNK_10f65b2b8;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a004eb4(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f65c3bd;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f65b2b8;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x000107c2b054(auStack_b0,&DAT_10f65c3c5);
  FUN_10a296430(param_1,&puStack_98,auStack_b0);
  if (cStack_99 < '\0') {
    __ZdlPv(auStack_b0[0]);
  }
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f65c3cd;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f65b2b8;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x000107c2b054(auStack_b0,&DAT_10f65c3d6);
  FUN_10a296430(param_1,&puStack_98,auStack_b0);
  if (cStack_99 < '\0') {
    __ZdlPv(auStack_b0[0]);
  }
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f65c3df;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f65b2b8;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x000107c2b054(auStack_b0,&DAT_10f2f4ad1);
  FUN_10a296430(param_1,&puStack_98,auStack_b0);
  if (cStack_99 < '\0') {
    __ZdlPv(auStack_b0[0]);
  }
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f65c3e5;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f65b2b8;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x000107c2b054(auStack_b0,&DAT_10f2f4ae0);
  FUN_10a296430(param_1,&puStack_98,auStack_b0);
  if (cStack_99 < '\0') {
    __ZdlPv(auStack_b0[0]);
  }
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f3cea81;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f65b2b8;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x000107c2b054(auStack_b0,&DAT_10f5750e7);
  FUN_10a296430(param_1,&puStack_98,auStack_b0);
  if (cStack_99 < '\0') {
    __ZdlPv(auStack_b0[0]);
  }
  func_0x00010a004064(param_1);
  return;
}



/* Entry: 10a4a83a4; end: 10a4a84c7;  */

undefined8 * FUN_10a4a83a4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  param_1[0xaa] = &PTR_FUN_110c383b8;
  *(undefined2 *)(param_1 + 0xad) = 0x100;
  param_1[0xac] = 0;
  param_1[0xab] = 0;
  puVar1 = param_1;
  FUN_10a4213cc(param_1,&PTR_PTR_110be1978,param_2,param_3,6);
  *puVar1 = &PTR_DAT_110be5428;
  puVar1[2] = &PTR_DAT_110bbddd0;
  puVar1[7] = &PTR_FUN_110bbde28;
  puVar1[0xd] = &PTR_FUN_110bbde48;
  puVar1[0xaa] = &PTR_FUN_110be5688;
  puVar1[0x16] = &PTR_FUN_110bbdeb8;
  puVar1[0x17] = &PTR_DAT_110bbdee8;
  FUN_10a0040d0(puVar1 + 0x9e,&PTR_PTR_110be19b8);
  *param_1 = &PTR_DAT_110be1510;
  param_1[2] = &PTR_FUN_110be1760;
  param_1[7] = &PTR_DAT_110be17b8;
  param_1[0xd] = &PTR_DAT_110be17d8;
  param_1[0xaa] = &PTR_FUN_110be1930;
  param_1[0x16] = &PTR_DAT_110be1848;
  param_1[0x17] = &PTR_DAT_110be1878;
  param_1[0x9e] = &PTR_DAT_110be18b0;
  param_1[0xa3] = 0x200000000;
  *(undefined4 *)(param_1 + 0xa6) = 0;
  *(undefined1 *)(param_1 + 0xa9) = 0;
  param_1[0xa8] = 0;
  param_1[0xa7] = 0;
  *(undefined1 *)(param_1 + 0x61) = 0;
  return param_1;
}



/* Entry: 10a4a84c8; end: 10a4a8567;  */

void FUN_10a4a84c8(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long *plVar3;
  long lVar4;
  
  if (param_2 != 4) {
    plVar3 = (long *)&UNK_110be6a60;
    lVar2 = 0x78;
    do {
      if ((int)plVar3[-2] == param_2) goto LAB_10a4a851c;
      plVar3 = plVar3 + 3;
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != 0);
    do {
      FUN_10a00946c(&UNK_10f63b8ac);
      lVar2 = extraout_x8;
LAB_10a4a851c:
    } while (lVar2 == 0);
    FUN_10a4a8568(param_1);
    lVar4 = *(long *)(param_1 + 0x538);
    lVar2 = plVar3[-1];
    lVar1 = *plVar3;
    func_0x000107c31950(lVar4 + 0x110,lVar1);
    FUN_10a131660(lVar4 + 0x110,lVar2,lVar1 + lVar2,lVar1);
  }
  *(int *)(param_1 + 0x51c) = param_2;
  return;
}



/* Entry: 10a4a8568; end: 10a4a8827;  */

void FUN_10a4a8568(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uStack_80;
  long *plStack_78;
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  
  if (*(long *)(param_1 + 0x538) != 0) {
    return;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x170);
  plVar5 = (long *)0x210;
  __Znwm();
  plVar8 = plVar5 + 1;
  *plVar8 = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_110be7418;
  plVar1 = plVar5 + 3;
  FUN_10ac34278(plVar1,uVar7);
  if (plVar5[0xc] == 0) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar2 = plVar5 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = *plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar5[0xb] = (long)plVar1;
    plVar5[0xc] = (long)plVar5;
LAB_10a4a8648:
    do {
      lVar6 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  else if (*(long *)(plVar5[0xc] + 8) == -1) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar2 = plVar5 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = *plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar5[0xb] = (long)plVar1;
    plVar5[0xc] = (long)plVar5;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    goto LAB_10a4a8648;
  }
  *(long **)(param_1 + 0x538) = plVar1;
  plVar8 = *(long **)(param_1 + 0x540);
  *(long **)(param_1 + 0x540) = plVar5;
  if (plVar8 == (long *)0x0) {
    uStack_58 = *(undefined8 *)(param_1 + 0x170);
    plStack_68 = plVar1;
  }
  else {
    plVar1 = plVar8 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
    plStack_68 = *(long **)(param_1 + 0x538);
    uStack_58 = *(undefined8 *)(param_1 + 0x170);
    if (plStack_68 == (long *)0x0) {
      plStack_68 = (long *)0x0;
      plStack_60 = (long *)0x0;
      goto LAB_10a4a86fc;
    }
    plVar5 = *(long **)(param_1 + 0x540);
    plStack_60 = plVar5;
    if (plVar5 == (long *)0x0) goto LAB_10a4a86fc;
  }
  plVar1 = plVar5 + 1;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = *plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    plStack_60 = plVar5;
  } while (cVar3 != '\0');
LAB_10a4a86fc:
  FUN_10a38f240(&uStack_50,&uStack_58,&plStack_68);
  plVar1 = plStack_60;
  if (plStack_60 != (long *)0x0) {
    plVar5 = plStack_60 + 1;
    do {
      lVar6 = *plVar5;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_60 + 0x10))(plStack_60);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  plStack_78 = plStack_48;
  uStack_80 = uStack_50;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10a426824(param_1,&uStack_80);
  plVar1 = plStack_78;
  if (plStack_78 != (long *)0x0) {
    plVar5 = plStack_78 + 1;
    do {
      lVar6 = *plVar5;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
  return;
}



/* Entry: 10a4a8828; end: 10a4a88c3;  */

void FUN_10a4a8828(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long extraout_x8;
  long *plVar6;
  ulong *puVar7;
  long lVar8;
  long lVar9;
  
  uVar1 = param_2[1];
  puVar4 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar4 = param_2;
  }
  puVar7 = (ulong *)&UNK_110be6ae8;
  lVar9 = 0x90;
  do {
    if (*puVar7 == uVar1) {
      uVar5 = puVar7[-1];
      _memcmp(uVar5,puVar4,uVar1);
      if ((int)uVar5 == 0) {
        if (lVar9 == 0) {
          return;
        }
        iVar3 = (int)puVar7[-2];
        if (iVar3 != 4) {
          plVar6 = (long *)&UNK_110be6a60;
          lVar9 = 0x78;
          do {
            if ((int)plVar6[-2] == iVar3) goto LAB_10a4a851c;
            plVar6 = plVar6 + 3;
            lVar9 = lVar9 + -0x18;
          } while (lVar9 != 0);
          do {
            FUN_10a00946c(&UNK_10f63b8ac);
            lVar9 = extraout_x8;
LAB_10a4a851c:
          } while (lVar9 == 0);
          FUN_10a4a8568(param_1);
          lVar8 = *(long *)(param_1 + 0x538);
          lVar9 = plVar6[-1];
          lVar2 = *plVar6;
          func_0x000107c31950(lVar8 + 0x110,lVar2);
          FUN_10a131660(lVar8 + 0x110,lVar9,lVar2 + lVar9,lVar2);
        }
        *(int *)(param_1 + 0x51c) = iVar3;
        return;
      }
    }
    puVar7 = puVar7 + 3;
    lVar9 = lVar9 + -0x18;
  } while (lVar9 != 0);
  return;
}



/* Entry: 10a4a88c4; end: 10a4a8a17;  */

undefined *** FUN_10a4a88c4(undefined ***param_1,undefined ***param_2,undefined ***param_3)

{
  undefined ***pppuVar1;
  char cVar2;
  bool bVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  ulong *puVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined **ppuVar11;
  undefined **ppuStack_140;
  undefined ***pppuStack_138;
  undefined ***pppuStack_130;
  undefined ***pppuStack_128;
  undefined1 ***pppuStack_120;
  code *pcStack_118;
  undefined *puStack_108;
  undefined ***pppuStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  code *pcStack_e8;
  undefined **ppuStack_e0;
  undefined *puStack_d8;
  undefined ***pppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_a8;
  undefined1 **ppuStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  
  puVar6 = (ulong *)&UNK_110be6ae8;
  lVar7 = 0x90;
  do {
    if ((int)puVar6[-2] == *(int *)((long)param_2 + 0x51c)) {
      if (lVar7 != 0) {
        ppuVar8 = (undefined **)*puVar6;
        if ((undefined **)0x7ffffffffffffff7 < ppuVar8) {
          func_0x000109ffde50();
          uStack_38 = 0x10a4a898c;
          puStack_40 = &stack0xfffffffffffffff0;
          if (2 < (ulong)((long)param_3[1] - (long)*param_3)) {
            FUN_10a4a8568();
            ppuVar8 = param_2[0xa7];
            ppuStack_68 = param_3[1];
            ppuStack_70 = *param_3;
            ppuVar11 = param_3[2];
            *param_3 = (undefined **)0x0;
            param_3[1] = (undefined **)0x0;
            param_3[2] = (undefined **)0x0;
            pppuVar4 = (undefined ***)ppuVar8[0x22];
            if (pppuVar4 != (undefined ***)0x0) {
              ppuVar8[0x23] = (undefined *)pppuVar4;
              __ZdlPv();
            }
            ppuVar8[0x23] = (undefined *)ppuStack_68;
            ppuVar8[0x22] = (undefined *)ppuStack_70;
            ppuVar8[0x24] = (undefined *)ppuVar11;
            *(undefined4 *)((long)param_2 + 0x51c) = 4;
            return pppuVar4;
          }
          puVar9 = &UNK_10f65c3ea;
          FUN_10a00946c();
          pcStack_78 = FUN_10a4a8a18;
          ppuStack_80 = &puStack_40;
          FUN_10a2d5304();
          FUN_10a4a8568(puVar9);
          (*(code *)(*param_3)[0x3e])(param_3,&PTR_DAT_110be19e0,*(undefined8 *)(puVar9 + 0x538));
          pppuVar4 = param_3;
          (*(code *)(*param_3)[7])(param_3,&PTR_DAT_110be1a00,0);
          *(int *)(puVar9 + 0x518) = (int)pppuVar4;
          pppuVar4 = param_3;
          (*(code *)(*param_3)[7])(param_3,&PTR_DAT_110be1a20,2);
          FUN_10a4a84c8(puVar9,pppuVar4);
          ppuVar8 = &PTR_DAT_110bb3700;
          puStack_108 = puVar9 + 0x520;
          lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
          FUN_109ffe064(&pppuStack_100,&DAT_10f644824,0xd);
          pcStack_e8 = FUN_10a4c3464;
          ppuStack_e0 = &PTR_FUN_110be74d8;
          puStack_d8 = puStack_108;
          uStack_c8 = uStack_f8;
          pppuStack_d0 = pppuStack_100;
          uStack_c0 = lStack_f0;
          pppuStack_100 = (undefined ***)0x0;
          uStack_f8 = 0;
          lStack_f0 = 0;
          pppuVar5 = param_3;
          FUN_10a1f46a0(param_3,&PTR_DAT_110bb3700,&pcStack_e8,0);
          pppuVar4 = &ppuStack_e0;
          (*(code *)*ppuStack_e0)();
          if (lStack_f0 < 0) {
            pppuVar4 = pppuStack_100;
            __ZdlPv();
          }
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_a8) {
            ___stack_chk_fail();
            (*(code *)*ppuStack_e0)(&ppuStack_e0);
            if (lStack_f0 < 0) {
              __ZdlPv(pppuStack_100);
            }
            pppuVar5 = pppuVar4;
            __Unwind_Resume();
            pcStack_118 = FUN_10a4c3464;
            ppuStack_140 = *pppuVar5;
            pppuStack_138 = (undefined ***)pppuVar5[1];
            *pppuVar5 = (undefined **)0x0;
            pppuVar5[1] = (undefined **)0x0;
            pppuStack_130 = param_3;
            pppuStack_128 = pppuVar4;
            pppuStack_120 = &ppuStack_80;
            if (ppuStack_140 != (undefined **)0x0) {
              puVar9 = ppuVar8[2];
              if (*(int *)(puVar9 + 0x10) != 0) {
                FUN_10a3a75a8(puVar9);
                *(undefined4 *)(puVar9 + 0x10) = 0;
                puVar9 = ppuVar8[2];
              }
              FUN_10a4c3578(puVar9,&ppuStack_140);
              FUN_10a4c3630(ppuVar8[2],&ppuStack_140);
              pppuVar5 = (undefined ***)ppuVar8[2];
              FUN_10a4c36e8(pppuVar5,&ppuStack_140);
              if ((*(int *)(ppuVar8[2] + 0x10) == 0) && ((bRam000000011330a9e8 >> 1 & 1) != 0)) {
                ppuVar11 = ppuVar8 + 3;
                if (*(char *)((long)ppuVar8 + 0x2f) < '\0') {
                  ppuVar11 = (undefined **)*ppuVar11;
                }
                pppuVar5 = (undefined ***)0x1;
                func_0x00010ae06f08(1,2,&UNK_10f645a9c,&UNK_10f65cca5,0x30,&UNK_10f645c14,in_x6,
                                    in_x7,ppuVar11);
              }
            }
            pppuVar4 = pppuStack_138;
            if (pppuStack_138 != (undefined ***)0x0) {
              pppuVar1 = pppuStack_138 + 1;
              do {
                ppuVar8 = *pppuVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
                if (bVar3) {
                  *pppuVar1 = (undefined **)((long)ppuVar8 + -1);
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (ppuVar8 == (undefined **)0x0) {
                (*(code *)(*pppuStack_138)[2])(pppuStack_138);
                __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar4);
                pppuVar5 = pppuVar4;
              }
            }
            return pppuVar5;
          }
          return pppuVar5;
        }
        uVar10 = puVar6[-1];
        if (ppuVar8 < (undefined **)0x17) {
          *(char *)((long)param_1 + 0x17) = (char)ppuVar8;
          pppuVar5 = param_1;
          if (ppuVar8 == (undefined **)0x0) goto LAB_10a4a8974;
        }
        else {
          pppuVar4 = (undefined ***)0x19;
          if (((ulong)ppuVar8 | 7) != 0x17) {
            pppuVar4 = (undefined ***)(((ulong)ppuVar8 | 7) + 1);
          }
          pppuVar5 = pppuVar4;
          __Znwm();
          param_1[1] = ppuVar8;
          param_1[2] = (undefined **)((ulong)pppuVar4 | 0x8000000000000000);
          *param_1 = (undefined **)pppuVar5;
        }
        param_2 = pppuVar5;
        _memmove(pppuVar5,uVar10,ppuVar8);
        param_1 = pppuVar5;
        goto LAB_10a4a8974;
      }
      break;
    }
    puVar6 = puVar6 + 3;
    lVar7 = lVar7 + -0x18;
  } while (lVar7 != 0);
  ppuVar8 = (undefined **)0x0;
  *(undefined1 *)((long)param_1 + 0x17) = 0;
LAB_10a4a8974:
  *(undefined1 *)((long)param_1 + (long)ppuVar8) = 0;
  return param_2;
}



/* Entry: 10a4a8a18; end: 10a4a8b3f;  */

undefined *** FUN_10a4a8a18(long param_1,undefined ***param_2)

{
  undefined ***pppuVar1;
  char cVar2;
  bool bVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined **ppuStack_d0;
  undefined ***pppuStack_c8;
  undefined ***pppuStack_c0;
  undefined ***pppuStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  long lStack_98;
  undefined ***pppuStack_90;
  undefined8 uStack_88;
  long lStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  undefined ***pppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_38;
  
  FUN_10a2d5304();
  FUN_10a4a8568(param_1);
  (*(code *)(*param_2)[0x3e])(param_2,&PTR_DAT_110be19e0,*(undefined8 *)(param_1 + 0x538));
  pppuVar4 = param_2;
  (*(code *)(*param_2)[7])(param_2,&PTR_DAT_110be1a00,0);
  *(int *)(param_1 + 0x518) = (int)pppuVar4;
  pppuVar4 = param_2;
  (*(code *)(*param_2)[7])(param_2,&PTR_DAT_110be1a20,2);
  FUN_10a4a84c8(param_1,pppuVar4);
  ppuVar7 = &PTR_DAT_110bb3700;
  lStack_98 = param_1 + 0x520;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_109ffe064(&pppuStack_90,&DAT_10f644824,0xd);
  pcStack_78 = FUN_10a4c3464;
  ppuStack_70 = &PTR_FUN_110be74d8;
  lStack_68 = lStack_98;
  uStack_58 = uStack_88;
  pppuStack_60 = pppuStack_90;
  uStack_50 = lStack_80;
  pppuStack_90 = (undefined ***)0x0;
  uStack_88 = 0;
  lStack_80 = 0;
  pppuVar5 = param_2;
  FUN_10a1f46a0(param_2,&PTR_DAT_110bb3700,&pcStack_78,0);
  pppuVar4 = &ppuStack_70;
  (*(code *)*ppuStack_70)();
  if (lStack_80 < 0) {
    pppuVar4 = pppuStack_90;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    (*(code *)*ppuStack_70)(&ppuStack_70);
    if (lStack_80 < 0) {
      __ZdlPv(pppuStack_90);
    }
    pppuVar5 = pppuVar4;
    __Unwind_Resume();
    pcStack_a8 = FUN_10a4c3464;
    ppuStack_d0 = *pppuVar5;
    pppuStack_c8 = (undefined ***)pppuVar5[1];
    *pppuVar5 = (undefined **)0x0;
    pppuVar5[1] = (undefined **)0x0;
    pppuStack_c0 = param_2;
    pppuStack_b8 = pppuVar4;
    puStack_b0 = &stack0xfffffffffffffff0;
    if (ppuStack_d0 != (undefined **)0x0) {
      puVar8 = ppuVar7[2];
      if (*(int *)(puVar8 + 0x10) != 0) {
        FUN_10a3a75a8(puVar8);
        *(undefined4 *)(puVar8 + 0x10) = 0;
        puVar8 = ppuVar7[2];
      }
      FUN_10a4c3578(puVar8,&ppuStack_d0);
      FUN_10a4c3630(ppuVar7[2],&ppuStack_d0);
      pppuVar5 = (undefined ***)ppuVar7[2];
      FUN_10a4c36e8(pppuVar5,&ppuStack_d0);
      if ((*(int *)(ppuVar7[2] + 0x10) == 0) && ((bRam000000011330a9e8 >> 1 & 1) != 0)) {
        ppuVar6 = ppuVar7 + 3;
        if (*(char *)((long)ppuVar7 + 0x2f) < '\0') {
          ppuVar6 = (undefined **)*ppuVar6;
        }
        pppuVar5 = (undefined ***)0x1;
        func_0x00010ae06f08(1,2,&UNK_10f645a9c,&UNK_10f65cca5,0x30,&UNK_10f645c14,in_x6,in_x7,
                            ppuVar6);
      }
    }
    pppuVar4 = pppuStack_c8;
    if (pppuStack_c8 != (undefined ***)0x0) {
      pppuVar1 = pppuStack_c8 + 1;
      do {
        ppuVar7 = *pppuVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
        if (bVar3) {
          *pppuVar1 = (undefined **)((long)ppuVar7 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppuVar7 == (undefined **)0x0) {
        (*(code *)(*pppuStack_c8)[2])(pppuStack_c8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar4);
        pppuVar5 = pppuVar4;
      }
    }
    return pppuVar5;
  }
  return pppuVar5;
}



/* Entry: 10a4a8b40; end: 10a4a8bbf;  */

void FUN_10a4a8b40(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  FUN_10a421994();
  lVar5 = *(long *)(param_1 + 0x170);
  plVar1 = (long *)(param_1 + 0x4f0 + *(long *)(*(long *)(param_1 + 0x4f0) + -0x18));
  if ((*(byte *)(plVar1 + 3) & 1) == 0) {
    *(undefined1 *)(plVar1 + 3) = 1;
    plVar1[2] = lVar5;
    if (lVar5 != 0) {
      plVar1[1] = *(long *)(*(long *)(lVar5 + 0x850) + 0x2c);
    }
    (**(code **)(*plVar1 + 0x18))();
  }
  lVar4 = *(long *)(param_1 + 0x508);
  if (*(long *)(lVar4 + 0x20) == 0) {
    *(long *)(lVar4 + 0x30) = lVar5;
    lVar6 = *(long *)(lVar4 + 0x18);
    if (*(long *)(lVar4 + 0x18) != 0) {
      plVar1 = (long *)(*(long *)(lVar4 + 0x18) + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a3cf744(lVar5,&stack0xffffffffffffffd0,&PTR_DAT_110b99f08,param_1 + 0x4f0);
    if (lVar6 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if ((int)lVar5 != 0) {
      *(int *)(lVar4 + 0x38) = (int)lVar5;
      *(undefined1 *)(lVar4 + 0x3c) = 1;
    }
  }
  else if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    FUN_10ae06f30(1,8,&UNK_10f665c8c,&UNK_10f665cc3,0x71,&UNK_10f665d1c,&stack0x00000000);
    return;
  }
  return;
}



/* Entry: 10a4a8bc0; end: 10a4a8d2b;  */

void FUN_10a4a8bc0(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  FUN_10a42238c();
  plVar3 = *(long **)(param_1 + 0x508);
  if (*(char *)((long)plVar3 + 0x3c) == '\x01') {
    FUN_10a3cf620(plVar3[6],(int)plVar3[7],plVar3);
    *(undefined4 *)(plVar3 + 7) = 0;
  }
  else {
    if (*(char *)((long)plVar3 + 0x3c) != '\x02') {
      return;
    }
    lVar1 = *plVar3;
    plVar2 = (long *)plVar3[1];
    *(long **)(lVar1 + 8) = plVar2;
    *plVar2 = lVar1;
    *plVar3 = 0;
    plVar3[1] = 0;
    plVar3[4] = 0;
    plVar3[5] = 0;
  }
  *(undefined1 *)((long)plVar3 + 0x3c) = 0;
  return;
}



/* Entry: 10a4a8d2c; end: 10a4a8d33;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a4a8d2c(long param_1)

{
  ulong *puVar1;
  bool bVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  short sVar6;
  uint uVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  int *******pppppppiVar11;
  uint uVar12;
  int iVar13;
  float *pfVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  int iVar18;
  long lVar19;
  uint uVar20;
  ulong uVar21;
  int *******pppppppiVar22;
  undefined8 *puVar23;
  float *pfVar24;
  undefined8 *puVar26;
  short sVar27;
  int *******pppppppiVar28;
  long lVar29;
  int ******ppppppiVar30;
  int *******pppppppiVar31;
  undefined8 *puVar32;
  int *******pppppppiVar33;
  float fVar34;
  ulong uVar35;
  float fVar36;
  undefined4 uVar37;
  float fVar38;
  undefined8 uVar39;
  float fVar40;
  undefined4 uVar41;
  undefined8 uVar42;
  ulong uVar43;
  ulong uVar44;
  float in_s3;
  float fVar45;
  byte bVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float *pfStack_538;
  float *pfStack_530;
  undefined8 uStack_528;
  long lStack_520;
  long lStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 *puStack_500;
  undefined8 *puStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  int *******pppppppiStack_4e0;
  long lStack_4d8;
  undefined8 uStack_4d0;
  ulong uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined4 uStack_4b0;
  int *******pppppppiStack_4a8;
  int *******pppppppiStack_4a0;
  int *******pppppppiStack_498;
  int *******pppppppiStack_490;
  int *******pppppppiStack_488;
  int *******pppppppiStack_480;
  int *******pppppppiStack_470;
  int *******pppppppiStack_468;
  int *******pppppppiStack_460;
  float afStack_458 [116];
  float afStack_288 [116];
  long lStack_b8;
  float *pfVar25;
  
  lVar10 = param_1 + -0x68;
  lVar9 = param_1 + 0x488;
  (**(code **)(*(long *)(param_1 + 0x488) + 0x30))();
  FUN_10ab6e450();
  if (lVar9 == 0) {
    func_0x00010a4a8cb0(lVar10,*(undefined8 *)
                                (*(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x100) + 0x120) +
                                                    0x8c0) + 0x18) + 0x68));
    *(bool *)(param_1 + 0x4e0) = lVar10 != 0;
    if (lVar10 != 0) {
      lVar9 = *(long *)(param_1 + 0x4d0);
      lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      *(short *)(lVar9 + 0x180) = (short)*(undefined4 *)(lVar10 + 0x180);
      *(short *)(lVar9 + 0x182) = (short)*(undefined4 *)(lVar10 + 0x184);
      fVar40 = *(float *)(lVar10 + 0xb4) * *(float *)(lVar10 + 0xb4);
      *(float *)(lVar9 + 0x184) =
           SQRT(*(float *)(lVar10 + 0xac) * *(float *)(lVar10 + 0xac) +
                *(float *)(lVar10 + 0xb0) * *(float *)(lVar10 + 0xb0) + fVar40);
      fVar34 = *(float *)(lVar10 + 0xbc);
      fVar36 = *(float *)(lVar10 + 0xac);
      _atan2f();
      *(float *)(lVar9 + 0x188) = fVar34;
      func_0x0001096bb814(lVar10 + 0x110);
      fVar45 = in_s3 * in_s3 + fVar34 * fVar34 + fVar36 * fVar36 + fVar40 * fVar40;
      if (fVar45 == 0.0) {
        in_s3 = 1.0;
        fVar34 = 0.0;
        fVar36 = 0.0;
        fVar40 = 0.0;
      }
      else {
        fVar45 = 1.0 / SQRT(fVar45);
        in_s3 = in_s3 * fVar45;
        fVar34 = fVar34 * fVar45;
        fVar36 = fVar36 * fVar45;
        fVar40 = fVar40 * fVar45;
      }
      *(float *)(lVar9 + 0x18c) = fVar34;
      *(float *)(lVar9 + 400) = fVar36;
      *(float *)(lVar9 + 0x194) = fVar40;
      *(float *)(lVar9 + 0x198) = in_s3;
      uVar37 = *(undefined4 *)(lVar10 + 200);
      uVar41 = *(undefined4 *)(lVar10 + 0xd8);
      *(undefined4 *)(lVar9 + 0x19c) = *(undefined4 *)(lVar10 + 0xb8);
      *(undefined4 *)(lVar9 + 0x1a0) = uVar37;
      *(undefined4 *)(lVar9 + 0x1a4) = uVar41;
      if (lVar9 + 0x1a8 != lVar10 + 0xe0) {
        func_0x00010a14ddc8();
      }
      if (lVar9 + 0x1c0 != lVar10 + 0xf8) {
        func_0x00010a14ddc8();
      }
      func_0x0001096db124(*(undefined4 *)(lVar9 + 0x184),&uStack_4e8,lVar9 + 0x18c,lVar9 + 0x19c);
      lVar10 = *(long *)(lVar9 + 0x140);
      *(undefined8 *)(lVar10 + 0x34) = uStack_4c0;
      *(ulong *)(lVar10 + 0x2c) = uStack_4c8;
      *(undefined8 *)(lVar10 + 0x24) = uStack_4d0;
      *(long *)(lVar10 + 0x1c) = lStack_4d8;
      *(int ********)(lVar10 + 0x14) = pppppppiStack_4e0;
      *(undefined ***)(lVar10 + 0xc) = uStack_4e8;
      *(ulong *)(*(long *)(lVar9 + 0x140) + 0x119c) =
           (ulong)*(ushort *)(lVar9 + 0x180) | (ulong)*(ushort *)(lVar9 + 0x182) << 0x20;
      uVar43 = uStack_4c8;
      FUN_10a14c934(*(undefined4 *)(lVar9 + 0x188),*(undefined8 *)(lVar9 + 0x140),
                    *(long *)(lVar9 + 0x1a8),
                    *(long *)(lVar9 + 0x1b0) - *(long *)(lVar9 + 0x1a8) >> 2,
                    *(long *)(lVar9 + 0x1c0),
                    *(long *)(lVar9 + 0x1c8) - *(long *)(lVar9 + 0x1c0) >> 2);
      FUN_10a14ab48(*(undefined8 *)(lVar9 + 0x140),afStack_288,afStack_458,1);
      uVar39 = NEON_ucvtf((ulong)CONCAT24(*(undefined2 *)(lVar9 + 0x182),
                                          (uint)*(ushort *)(lVar9 + 0x180)),4);
      fVar34 = (float)((ulong)uVar39 >> 0x20);
      *(float *)(lVar9 + 0x170) = (float)uVar39 / fVar34;
      lStack_520 = 0;
      lStack_518 = 0;
      uStack_510 = 0;
      pppppppiStack_470 = (int *******)0x0;
      pppppppiStack_468 = (int *******)0x0;
      pppppppiStack_460 = (int *******)0x0;
      if (*(long *)(lVar9 + 0x128) == *(long *)(lVar9 + 0x130)) {
        pbVar5 = *(byte **)(lVar9 + 0x118);
        for (pbVar4 = *(byte **)(lVar9 + 0x110); pbVar4 != pbVar5; pbVar4 = pbVar4 + 1) {
          uVar35 = (ulong)*pbVar4;
          if (0x73 < uVar35) goto LAB_10ac3562c;
          fVar36 = afStack_458[uVar35];
          uStack_4e8 = (undefined **)CONCAT44((int)fVar36,(int)afStack_288[uVar35]);
          if (pppppppiStack_468 < pppppppiStack_460) {
            pppppppiVar11 = pppppppiStack_468 + 1;
            *(int *)pppppppiStack_468 = (int)afStack_288[uVar35];
            *(int *)((long)pppppppiStack_468 + 4) = (int)fVar36;
          }
          else {
            pppppppiVar11 = (int *******)&pppppppiStack_470;
            func_0x0001092e7794(pppppppiVar11,&uStack_4e8);
          }
          pppppppiStack_468 = pppppppiVar11;
        }
      }
      else {
        func_0x0001092c8954(&pppppppiStack_470,
                            (*(long *)(lVar9 + 0x130) - *(long *)(lVar9 + 0x128) >> 3) *
                            -0x5555555555555555);
        pfVar24 = *(float **)(lVar9 + 0x130);
        for (pfVar14 = *(float **)(lVar9 + 0x128); pfVar14 != pfVar24; pfVar14 = pfVar14 + 6) {
          uVar12 = (uint)(*pfVar14 + 0.5);
          if (((0x73 < uVar12) || (uVar17 = (uint)(pfVar14[1] + 0.5), 0x73 < uVar17)) ||
             (uVar20 = (uint)(pfVar14[2] + 0.5), 0x73 < uVar20)) goto LAB_10ac3562c;
          fVar36 = afStack_458[(int)uVar20] * pfVar14[5];
          uVar43 = (ulong)(uint)fVar36;
          iVar13 = (int)(afStack_288[uVar12] * pfVar14[3] + afStack_288[(int)uVar17] * pfVar14[4] +
                        afStack_288[(int)uVar20] * pfVar14[5]);
          iVar18 = (int)(afStack_458[uVar12] * pfVar14[3] + afStack_458[(int)uVar17] * pfVar14[4] +
                        fVar36);
          uStack_4e8 = (undefined **)CONCAT44(iVar18,iVar13);
          if (pppppppiStack_468 < pppppppiStack_460) {
            *(int *)pppppppiStack_468 = iVar13;
            *(int *)((long)pppppppiStack_468 + 4) = iVar18;
            pppppppiVar11 = pppppppiStack_468 + 1;
          }
          else {
            pppppppiVar11 = (int *******)&pppppppiStack_470;
            func_0x0001092e7794(pppppppiVar11,&uStack_4e8);
          }
          pppppppiStack_468 = pppppppiVar11;
        }
      }
      fVar36 = 2.0 / (float)uVar39;
      fVar34 = 2.0 / fVar34;
      puVar1 = (ulong *)(lVar9 + 0x174);
      uVar35 = 0;
      *puVar1 = 0;
      if (pppppppiStack_470 != pppppppiStack_468) {
        uVar39 = NEON_fmov(0xbf800000,4);
        pppppppiVar11 = pppppppiStack_470;
        do {
          pppppppiVar22 = pppppppiVar11 + 1;
          uVar42 = NEON_scvtf(*pppppppiVar11,4);
          fVar40 = fVar36 * (float)uVar42 + (float)uVar39;
          fVar45 = fVar34 * (float)((ulong)uVar42 >> 0x20) + (float)((ulong)uVar39 >> 0x20);
          uVar43 = CONCAT44(fVar45,fVar40);
          uVar35 = CONCAT44((float)(uVar35 >> 0x20) + fVar45,(float)uVar35 + fVar40);
          *puVar1 = uVar35;
          pppppppiVar11 = pppppppiVar22;
        } while (pppppppiVar22 != pppppppiStack_468);
      }
      fVar40 = (float)(ulong)((long)pppppppiStack_468 - (long)pppppppiStack_470 >> 3);
      uVar44 = CONCAT44(fVar40,fVar40);
      *puVar1 = CONCAT44((float)(uVar35 >> 0x20) / fVar40,(float)uVar35 / fVar40);
      pppppppiStack_490 = (int *******)0x0;
      pppppppiStack_488 = (int *******)0x0;
      pppppppiStack_480 = (int *******)0x0;
      uStack_4e8 = (undefined **)CONCAT44(uStack_4e8._4_4_,0x8103000c);
      pppppppiStack_4e0 = (int *******)&pppppppiStack_470;
      lStack_4d8 = 0;
      pppppppiStack_4a8 = (int *******)CONCAT44(pppppppiStack_4a8._4_4_,0x8203000c);
      pppppppiStack_4a0 = (int *******)&pppppppiStack_490;
      pppppppiStack_498 = (int *******)0x0;
      func_0x000109ae2358(&uStack_4e8,&pppppppiStack_4a8,0,1);
      if (pppppppiStack_490 == pppppppiStack_488) {
LAB_10ac3562c:
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10ac35630);
        (*pcVar8)();
      }
      if (pppppppiStack_488 < pppppppiStack_480) {
        pppppppiVar11 = pppppppiStack_488 + 1;
        *pppppppiStack_488 = *pppppppiStack_490;
      }
      else {
        pppppppiVar11 = (int *******)&pppppppiStack_490;
        func_0x0001092c78ec(pppppppiVar11,pppppppiStack_490);
      }
      pppppppiStack_4a8 = (int *******)0x0;
      pppppppiStack_4a0 = (int *******)0x0;
      pppppppiStack_498 = (int *******)0x0;
      lVar10 = (long)pppppppiVar11 - (long)pppppppiStack_490;
      pppppppiStack_488 = pppppppiVar11;
      if (lVar10 != 0) {
        uVar12 = 0;
        pppppppiVar22 = pppppppiStack_490;
        do {
          fVar40 = fVar34 * (float)*(int *)((long)pppppppiVar22 + 4);
          uVar44 = (ulong)(uint)fVar40;
          fVar45 = fVar36 * (float)*(int *)pppppppiVar22 + -1.0;
          fVar40 = fVar40 + -1.0;
          fVar49 = (1.0 / (float)(ulong)(lVar10 >> 3)) * (float)uVar12;
          uVar43 = CONCAT44(fVar34,fVar36);
          if (pppppppiStack_4a0 < pppppppiStack_498) {
            *(float *)pppppppiStack_4a0 = fVar49;
            *(float *)((long)pppppppiStack_4a0 + 4) = fVar45;
            *(float *)(pppppppiStack_4a0 + 1) = fVar40;
            pppppppiVar33 = (int *******)((long)pppppppiStack_4a0 + 0xc);
          }
          else {
            lVar15 = (long)pppppppiStack_4a0 - (long)pppppppiStack_4a8;
            uVar35 = (lVar15 >> 2) * -0x5555555555555555 + 1;
            if (0x1555555555555555 < uVar35) {
              FUN_10a107a00();
              goto LAB_10ac3562c;
            }
            lVar29 = (long)pppppppiStack_498 - (long)pppppppiStack_4a8 >> 2;
            uVar16 = lVar29 * 0x5555555555555556;
            if (uVar16 < uVar35 || uVar16 - uVar35 == 0) {
              uVar16 = uVar35;
            }
            if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar29 * -0x5555555555555555)) {
              uVar16 = 0x1555555555555555;
            }
            pppppppiVar31 = (int *******)&pppppppiStack_4a8;
            FUN_10a107a14();
            pfVar14 = (float *)((long)pppppppiVar31 + lVar15);
            pppppppiVar31 = (int *******)((long)pppppppiVar31 + uVar16 * 0xc);
            *pfVar14 = fVar49;
            pfVar14[1] = fVar45;
            pfVar14[2] = fVar40;
            pppppppiVar33 = (int *******)(pfVar14 + 3);
            pppppppiVar28 =
                 (int *******)((long)pfVar14 - ((long)pppppppiStack_4a0 - (long)pppppppiStack_4a8));
            _memcpy(pppppppiVar28);
            bVar2 = pppppppiStack_4a8 != (int *******)0x0;
            pppppppiStack_4a8 = pppppppiVar28;
            pppppppiStack_498 = pppppppiVar31;
            if (bVar2) {
              pppppppiStack_4a0 = pppppppiVar33;
              __ZdlPv();
            }
          }
          uVar12 = uVar12 + 1;
          pppppppiVar22 = pppppppiVar22 + 1;
          pppppppiStack_4a0 = pppppppiVar33;
        } while (pppppppiVar22 != pppppppiVar11);
      }
      bVar46 = *(byte *)(lVar9 + 0xe9);
      uStack_4b0 = 0;
      fVar34 = 0.0;
      uStack_4c8 = 0;
      uStack_4d0 = 0;
      uStack_4b8 = 0;
      uStack_4c0 = 0;
      lStack_4d8 = 0;
      pppppppiStack_4e0 = (int *******)0x0;
      uStack_4e8 = &PTR_FUN_110c5d998;
      func_0x00010aa8e660(&uStack_4e8,&pppppppiStack_4a8);
      puStack_500 = (undefined8 *)0x0;
      puStack_4f8 = (undefined8 *)0x0;
      uStack_4f0 = 0;
      if (*(char *)(lVar9 + 0xe9) != '\0') {
        uVar12 = 0;
        fVar36 = (float)NEON_ucvtf((uint)bVar46);
        do {
          fVar34 = (1.0 / fVar36) * (float)uVar12;
          FUN_10ac35784(&uStack_4e8);
          uVar43 = *puVar1;
          uVar35 = CONCAT44((float)uVar44 - (float)(uVar43 >> 0x20),fVar34 - (float)uVar43);
          uStack_508 = uVar35;
          func_0x00010a558044(&puStack_500,&uStack_508);
          fVar34 = (float)uVar35;
          uVar12 = uVar12 + 1;
        } while (uVar12 < *(byte *)(lVar9 + 0xe9));
      }
      FUN_10a14af44(*(undefined8 *)(lVar9 + 0x140));
      iVar13 = *(int *)(*(long *)(lVar9 + 0x140) + 0x119c);
      fVar40 = *(float *)(lVar9 + 0xec);
      fVar45 = *(float *)(lVar9 + 0x170);
      pfStack_530 = (float *)0x0;
      uStack_528 = 0;
      pfStack_538 = (float *)0x0;
      uStack_508 = 0;
      func_0x00010a558044(&pfStack_538,&uStack_508);
      uStack_508 = uStack_508 & 0xffffffff00000000;
      FUN_10a001c34(&lStack_520,&uStack_508);
      puVar23 = puStack_4f8;
      fVar36 = (float)uVar43;
      fVar49 = *(float *)(lVar9 + 0xf4);
      puVar32 = puStack_4f8;
      for (puVar26 = puStack_500; puStack_4f8 = puVar32, puVar26 != puVar23; puVar26 = puVar26 + 1)
      {
        uStack_508._4_4_ = 1.0 - *(float *)(lVar9 + 0xf0);
        uStack_508._0_4_ = (float)*puVar26 * uStack_508._4_4_;
        uStack_508._4_4_ = (float)((ulong)*puVar26 >> 0x20) * uStack_508._4_4_;
        func_0x00010a558044(&pfStack_538,&uStack_508);
        uStack_508 = (ulong)(uint)uStack_508._4_4_ << 0x20;
        FUN_10a001c34(&lStack_520,&uStack_508);
        fVar36 = (float)uVar43;
        puVar32 = puStack_4f8;
      }
      if (puStack_500 != puVar32) {
        fVar40 = fVar40 * (0.5 / (fVar34 / (float)iVar13));
        fVar45 = fVar45 * 0.5;
        uVar39 = CONCAT44(fVar45,0x3f000000);
        fVar49 = fVar49 * 2.5;
        puVar26 = puStack_500;
        do {
          fVar34 = (float)*puVar26;
          fVar36 = (float)((ulong)*puVar26 >> 0x20);
          fVar38 = fVar34 * fVar34 + fVar36 * fVar36;
          fVar47 = 0.0;
          fVar48 = 0.0;
          if ((1e-06 < fVar38) && (fVar38 = 1.0 / SQRT(fVar38), 0.0 < fVar38)) {
            fVar47 = fVar34 * fVar38;
            fVar48 = fVar36 * fVar38;
          }
          fVar38 = 1.0 - *(float *)(lVar9 + 0xf0);
          uStack_508 = CONCAT44(fVar36 * fVar38,fVar34 * fVar38);
          func_0x00010a558044(&pfStack_538,&uStack_508);
          puVar23 = puVar26 + 1;
          uStack_508._0_4_ = (0.5 / fVar40) * fVar49 * fVar47 + (float)*puVar26;
          uStack_508._4_4_ = (fVar45 / fVar40) * fVar49 * fVar48 + (float)((ulong)*puVar26 >> 0x20);
          func_0x00010a558044(&pfStack_538,&uStack_508);
          uStack_508._0_4_ = 0.0;
          FUN_10a001c34(&lStack_520,&uStack_508);
          uStack_508 = CONCAT44(uStack_508._4_4_,0x3f800000);
          FUN_10a001c34(&lStack_520,&uStack_508);
          fVar36 = (float)uVar39;
          puVar26 = puVar23;
        } while (puVar23 != puVar32);
      }
      if (puStack_500 != (undefined8 *)0x0) {
        puStack_4f8 = puStack_500;
        __ZdlPv(puStack_500);
      }
      uStack_4e8 = &PTR____cxa_pure_virtual_110c42bb8;
      if (pppppppiStack_4e0 != (int *******)0x0) {
        lStack_4d8 = (long)pppppppiStack_4e0;
        __ZdlPv();
      }
      if (pppppppiStack_4a8 != (int *******)0x0) {
        pppppppiStack_4a0 = pppppppiStack_4a8;
        __ZdlPv();
      }
      if (pppppppiStack_490 != (int *******)0x0) {
        pppppppiStack_488 = pppppppiStack_490;
        __ZdlPv();
      }
      if (pppppppiStack_470 != (int *******)0x0) {
        pppppppiStack_468 = pppppppiStack_470;
        __ZdlPv();
      }
      pfVar14 = pfStack_530;
      fVar40 = *(float *)(lVar9 + 0x100);
      fVar34 = *(float *)(lVar9 + 0x104);
      pppppppiStack_4e0 = (int *******)0x0;
      lStack_4d8 = 0;
      uStack_4e8 = (undefined **)0x0;
      if (pfStack_538 != pfStack_530) {
        fVar49 = fVar40 * 0.0;
        uVar43 = (ulong)(uint)fVar49;
        fVar45 = fVar34 * 0.0;
        fVar36 = *(float *)(lVar9 + 0x108) * 0.0;
        fVar38 = *(float *)(lVar9 + 0x10c) * 0.0;
        fVar54 = *(float *)(lVar9 + 0x108) + fVar38 + 0.0;
        fVar57 = fVar36 + *(float *)(lVar9 + 0x10c) + 0.0;
        fVar47 = fVar36 + fVar38 + 1.0;
        fVar38 = *(float *)(lVar9 + 0x174) * 0.0;
        fVar48 = *(float *)(lVar9 + 0x178) * 0.0;
        fVar58 = *(float *)(lVar9 + 0x174) + fVar48 + 0.0;
        fVar36 = fVar38 + *(float *)(lVar9 + 0x178) + 0.0;
        fVar48 = fVar38 + fVar48 + 1.0;
        fVar38 = fVar36 * 0.5 + fVar58 * 0.0;
        fVar50 = fVar36 * 0.0 + fVar58 * 0.5 + fVar48 * 0.5;
        fVar51 = fVar38 + fVar48 * 0.5;
        fVar58 = fVar57 * 0.0 + fVar54 * 0.5;
        fVar54 = fVar57 * 0.5 + fVar54 * 0.0;
        fVar55 = fVar50 * 0.0 + 0.5;
        fVar56 = fVar51 * 0.0 + 0.0;
        fVar52 = fVar50 * 0.0 + 0.0;
        fVar53 = fVar51 * 0.0 + 0.5;
        fVar59 = fVar58 + fVar47 * fVar50;
        fVar38 = fVar54 + fVar47 * (fVar38 + fVar48 * 0.5);
        fVar48 = fVar52 * fVar34;
        fVar57 = fVar53 * fVar34;
        pfVar24 = pfStack_538;
        do {
          pfVar25 = pfVar24 + 2;
          pppppppiVar11 =
               (int *******)
               CONCAT44(fVar38 + fVar53 * 0.0 + fVar56 * 0.0 +
                        (fVar57 + fVar56 * fVar45 + fVar38 * fVar45) * pfVar24[1] +
                        (fVar53 * fVar49 + fVar56 * fVar40 + (fVar54 + fVar51 * fVar47) * fVar49) *
                        *pfVar24,fVar52 * 0.0 + (fVar50 * 0.0 + 0.5) * 0.0 + fVar59 +
                                 (fVar48 + fVar55 * fVar45 + fVar59 * fVar45) * pfVar24[1] +
                                 (fVar52 * fVar49 + fVar55 * fVar40 +
                                 (fVar58 + fVar50 * fVar47) * fVar49) * *pfVar24);
          pppppppiStack_470 = pppppppiVar11;
          FUN_10a1f2004(&uStack_4e8,&pppppppiStack_470);
          fVar36 = (float)uVar43;
          fVar34 = SUB84(pppppppiVar11,0);
          pfVar24 = pfVar25;
        } while (pfVar25 != pfVar14);
      }
      FUN_10a14af44(*(undefined8 *)(lVar9 + 0x140));
      iVar13 = *(int *)(*(long *)(lVar9 + 0x140) + 0x119c);
      fVar49 = *(float *)(lVar9 + 0xec);
      func_0x0001096dc9c0(*(long *)(lVar9 + 0x140) + 0xc);
      fVar45 = -fVar36;
      fVar40 = fVar45;
      if (3.1415927 <= fVar36) {
        fVar40 = 6.2831855 - fVar36;
      }
      ___sincosf_stret();
      if (pfStack_538 != pfStack_530) {
        fVar49 = fVar49 * (0.5 / (fVar34 / (float)iVar13));
        fVar34 = fVar49 / *(float *)(lVar9 + 0x170);
        fVar38 = fVar49 * 0.0;
        fVar36 = fVar34 * 0.0;
        uVar39 = NEON_rev64(CONCAT44(fVar45,fVar40),4);
        fVar48 = (float)uVar39 + fVar40 * 0.0;
        fVar58 = (float)((ulong)uVar39 >> 0x20) + fVar45 * 0.0;
        fVar47 = fVar45 * 0.0 - fVar40;
        fVar45 = fVar45 - fVar40 * 0.0;
        uVar43 = (ulong)CONCAT14(*(byte *)(lVar9 + 0xe8),(uint)*(byte *)(lVar9 + 0xe8)) &
                 0x200000001;
        pfVar14 = pfStack_538;
        do {
          fVar40 = fVar47 * 0.0 + fVar48 * 0.0 + 0.0 +
                   (fVar47 * fVar34 + fVar48 * fVar36 + fVar36 * 0.0) * pfVar14[1] +
                   (fVar47 * fVar38 + fVar48 * fVar49 + fVar38 * 0.0) * *pfVar14;
          fVar54 = fVar45 * 0.0 + fVar58 * 0.0 + 0.0 +
                   (fVar45 * fVar34 + fVar58 * fVar36 + fVar36 * 0.0) * pfVar14[1] +
                   (fVar45 * fVar38 + fVar58 * fVar49 + fVar38 * 0.0) * *pfVar14;
          uVar35 = CONCAT44(fVar54,fVar40);
          pfVar24 = pfVar14 + 2;
          *(ulong *)pfVar14 =
               uVar35 ^ (uVar35 ^ CONCAT44(-fVar54,-fVar40)) &
                        ~CONCAT44(-(uint)((int)(uVar43 >> 0x20) == 0),-(uint)((int)uVar43 == 0));
          pfVar14 = pfVar24;
        } while (pfVar24 != pfStack_530);
      }
      pppppppiStack_470 = (int *******)0x0;
      pppppppiStack_468 = (int *******)0x0;
      pppppppiStack_460 = (int *******)0x0;
      bVar46 = *(byte *)(lVar9 + 0xe9);
      uVar12 = (uint)bVar46;
      if (uVar12 != 0) {
        uVar17 = 1;
        do {
          sVar6 = (short)uVar17;
          if ((*(byte *)(lVar9 + 0xe8) & 1) == (*(byte *)(lVar9 + 0xe8) & 2) >> 1) {
            pppppppiStack_490 = (int *******)((ulong)pppppppiStack_490._2_6_ << 0x10);
            FUN_10a14f5d0(&pppppppiStack_470,&pppppppiStack_490);
            pppppppiStack_490 = (int *******)CONCAT62(pppppppiStack_490._2_6_,sVar6);
            FUN_10a14f5d0(&pppppppiStack_470,&pppppppiStack_490);
          }
          else {
            pppppppiStack_490._0_2_ = sVar6;
            FUN_10a14f5d0(&pppppppiStack_470,&pppppppiStack_490);
            pppppppiStack_490 = (int *******)((ulong)pppppppiStack_490._2_6_ << 0x10);
            FUN_10a14f5d0(&pppppppiStack_470,&pppppppiStack_490);
          }
          sVar27 = 1;
          if (uVar17 != uVar12) {
            sVar27 = sVar6 + 1;
          }
          pppppppiStack_490 = (int *******)CONCAT62(pppppppiStack_490._2_6_,sVar27);
          FUN_10a14f5d0(&pppppppiStack_470,&pppppppiStack_490);
          uVar17 = uVar17 + 1;
        } while (uVar17 - uVar12 != 1);
        uVar20 = (uint)bVar46;
        uVar17 = uVar20 * 2;
        uVar12 = 3;
        do {
          sVar27 = (ushort)bVar46 + (short)uVar12;
          sVar6 = sVar27 + -2;
          sVar27 = sVar27 + -1;
          if ((*(byte *)(lVar9 + 0xe8) & 1) == (*(byte *)(lVar9 + 0xe8) & 2) >> 1) {
            pppppppiStack_490._0_2_ = sVar6;
            FUN_10a14f5d0(&pppppppiStack_470,&pppppppiStack_490);
            pppppppiStack_490 = (int *******)CONCAT62(pppppppiStack_490._2_6_,sVar27);
            FUN_10a14f5d0(&pppppppiStack_470,&pppppppiStack_490);
          }
          else {
            pppppppiStack_490._0_2_ = sVar27;
            FUN_10a14f5d0(&pppppppiStack_470,&pppppppiStack_490);
            pppppppiStack_490 = (int *******)CONCAT62(pppppppiStack_490._2_6_,sVar6);
            FUN_10a14f5d0(&pppppppiStack_470,&pppppppiStack_490);
          }
          uVar7 = uVar12 - 1;
          sVar6 = 0;
          if (uVar20 != 0) {
            sVar6 = (short)(uVar7 / uVar17);
          }
          sVar6 = ((short)uVar7 - sVar6 * (short)uVar17) + bVar46 + 1;
          pppppppiStack_490._0_2_ = sVar6;
          FUN_10a14f5d0(&pppppppiStack_470,&pppppppiStack_490);
          if ((*(byte *)(lVar9 + 0xe8) & 1) == (*(byte *)(lVar9 + 0xe8) & 2) >> 1) {
            pppppppiStack_490._0_2_ = sVar6;
            FUN_10a14f5d0(&pppppppiStack_470,&pppppppiStack_490);
            pppppppiStack_490 = (int *******)CONCAT62(pppppppiStack_490._2_6_,sVar27);
            FUN_10a14f5d0(&pppppppiStack_470,&pppppppiStack_490);
          }
          else {
            pppppppiStack_490._0_2_ = sVar27;
            FUN_10a14f5d0(&pppppppiStack_470,&pppppppiStack_490);
            pppppppiStack_490 = (int *******)CONCAT62(pppppppiStack_490._2_6_,sVar6);
            FUN_10a14f5d0(&pppppppiStack_470,&pppppppiStack_490);
          }
          sVar6 = 0;
          if (uVar20 != 0) {
            sVar6 = (short)(uVar12 / uVar17);
          }
          pppppppiStack_490 =
               (int *******)
               CONCAT62(pppppppiStack_490._2_6_,((short)uVar12 - sVar6 * (short)uVar17) + bVar46 + 1
                       );
          FUN_10a14f5d0(&pppppppiStack_470,&pppppppiStack_490);
          uVar12 = uVar12 + 2;
        } while (uVar7 < uVar17);
      }
      if (pfStack_538 == pfStack_530) {
        puVar26 = (undefined8 *)0x0;
        lVar19 = 0;
      }
      else {
        uVar43 = 0xff7fffffff7fffff;
        uVar35 = 0x7f7fffff7f7fffff;
        pfVar14 = pfStack_538;
        do {
          pfVar24 = pfVar14 + 2;
          uVar44 = *(ulong *)pfVar14;
          fVar34 = (float)(uVar44 >> 0x20);
          uVar35 = uVar35 ^ (uVar35 ^ uVar44) &
                            CONCAT44(-(uint)(fVar34 < (float)(uVar35 >> 0x20)),
                                     -(uint)((float)uVar44 < (float)uVar35));
          uVar43 = uVar43 ^ (uVar43 ^ uVar44) &
                            CONCAT44(-(uint)((float)(uVar43 >> 0x20) < fVar34),
                                     -(uint)((float)uVar43 < (float)uVar44));
          pfVar14 = pfVar24;
        } while (pfVar24 != pfStack_530);
        uVar44 = 0;
        puVar26 = (undefined8 *)0x0;
        puVar32 = (undefined8 *)0x0;
        uVar39 = *(undefined8 *)(lVar9 + 0xf8);
        lVar15 = (long)pfStack_530 - (long)pfStack_538;
        lVar10 = 0;
        do {
          if ((((ulong)((long)pfStack_530 - (long)pfStack_538 >> 3) <= uVar44) ||
              ((ulong)((long)pppppppiStack_4e0 - (long)uStack_4e8 >> 3) <= uVar44)) ||
             ((ulong)(lStack_518 - lStack_520 >> 2) <= uVar44)) goto LAB_10ac3562c;
          uVar42 = CONCAT44((float)((ulong)*(undefined8 *)(pfStack_538 + uVar44 * 2) >> 0x20) -
                            ((float)(uVar43 >> 0x20) - (float)(uVar35 >> 0x20)) *
                            (float)((ulong)uVar39 >> 0x20) * 0.5,
                            (float)*(undefined8 *)(pfStack_538 + uVar44 * 2) -
                            ((float)uVar43 - (float)uVar35) * (float)uVar39 * 0.5);
          ppppppiVar30 = (int ******)uStack_4e8[uVar44];
          uVar37 = *(undefined4 *)(lStack_520 + uVar44 * 4);
          if (puVar26 < puVar32) {
            *puVar26 = uVar42;
            *(undefined4 *)(puVar26 + 1) = 0;
            *(int *******)((long)puVar26 + 0xc) = ppppppiVar30;
            *(ulong *)((long)puVar26 + 0x14) = CONCAT44(0x3f000000,uVar37);
            lVar19 = lVar10;
          }
          else {
            lVar29 = (long)puVar26 - lVar10;
            uVar16 = (lVar29 >> 2) * 0x6db6db6db6db6db7 + 1;
            if (0x924924924924924 < uVar16) {
              FUN_10ac41264();
              goto LAB_10ac3562c;
            }
            lVar19 = (long)puVar32 - lVar10 >> 2;
            uVar21 = lVar19 * -0x2492492492492492;
            if (uVar21 < uVar16 || uVar21 - uVar16 == 0) {
              uVar21 = uVar16;
            }
            if (0x492492492492491 < (ulong)(lVar19 * 0x6db6db6db6db6db7)) {
              uVar21 = 0x924924924924924;
            }
            if (0x924924924924924 < uVar21) {
              func_0x000109ffded8();
              goto LAB_10ac3562c;
            }
            lVar19 = uVar21 * 0x1c;
            __Znwm();
            puVar26 = (undefined8 *)(lVar19 + lVar29);
            puVar32 = (undefined8 *)(lVar19 + uVar21 * 0x1c);
            *puVar26 = uVar42;
            *(undefined4 *)(puVar26 + 1) = 0;
            *(int *******)((long)puVar26 + 0xc) = ppppppiVar30;
            *(ulong *)((long)puVar26 + 0x14) = CONCAT44(0x3f000000,uVar37);
            lVar19 = SUB168(SEXT816(lVar29) * SEXT816(-0x4924924924924925),8);
            lVar19 = (long)puVar26 + ((lVar19 >> 3) - (lVar19 >> 0x3f)) * 0x1c;
            _memcpy(lVar19,lVar10,lVar29);
            if (lVar10 != 0) {
              __ZdlPv(lVar10);
            }
          }
          puVar26 = (undefined8 *)((long)puVar26 + 0x1c);
          uVar44 = uVar44 + 1;
          lVar10 = lVar19;
        } while (lVar15 >> 3 != uVar44);
      }
      pppppppiStack_490 = (int *******)0x0;
      pppppppiStack_488 = (int *******)0x0;
      pppppppiStack_480 = (int *******)0x0;
      func_0x000107c2b048(&pppppppiStack_490,lVar19,puVar26,(long)puVar26 - lVar19);
      lVar15 = *(long *)(lVar9 + 0x148);
      lVar10 = *(long *)(lVar15 + 0x10);
      if (lVar10 != 0) {
        *(long *)(lVar15 + 0x18) = lVar10;
        __ZdlPv();
        *(long *)(lVar15 + 0x10) = 0;
        *(undefined8 *)(lVar15 + 0x18) = 0;
        *(undefined8 *)(lVar15 + 0x20) = 0;
      }
      *(int ********)(lVar15 + 0x18) = pppppppiStack_488;
      *(int ********)(lVar15 + 0x10) = pppppppiStack_490;
      *(int ********)(lVar15 + 0x20) = pppppppiStack_480;
      pppppppiStack_488 = (int *******)0x0;
      pppppppiStack_480 = (int *******)0x0;
      pppppppiStack_490 = (int *******)0x0;
      func_0x000107c2b048(&pppppppiStack_490,pppppppiStack_470,pppppppiStack_468,
                          (long)pppppppiStack_468 - (long)pppppppiStack_470);
      lVar29 = *(long *)(lVar9 + 0x148);
      lVar15 = *(long *)(lVar29 + 0x28);
      lVar10 = lVar29;
      if (lVar15 != 0) {
        *(long *)(lVar29 + 0x30) = lVar15;
        __ZdlPv(lVar15);
        *(long *)(lVar29 + 0x28) = 0;
        *(undefined8 *)(lVar29 + 0x30) = 0;
        *(undefined8 *)(lVar29 + 0x38) = 0;
        lVar10 = *(long *)(lVar9 + 0x148);
      }
      *(int ********)(lVar29 + 0x30) = pppppppiStack_488;
      *(int ********)(lVar29 + 0x28) = pppppppiStack_490;
      *(int ********)(lVar29 + 0x38) = pppppppiStack_480;
      pppppppiVar11 = pppppppiStack_490;
      FUN_10ab4e0a4(lVar10);
      fVar34 = SUB84(pppppppiVar11,0);
      FUN_10ac645fc(lVar9,lVar9 + 0x148);
      if (lVar19 != 0) {
        __ZdlPv(lVar19);
      }
      if (pppppppiStack_470 != (int *******)0x0) {
        pppppppiStack_468 = pppppppiStack_470;
        __ZdlPv();
      }
      if ((int *******)uStack_4e8 != (int *******)0x0) {
        pppppppiStack_4e0 = (int *******)uStack_4e8;
        __ZdlPv();
      }
      if (pfStack_538 != (float *)0x0) {
        pfStack_530 = pfStack_538;
        __ZdlPv();
      }
      lVar9 = lStack_520;
      if (lStack_520 != 0) {
        lStack_518 = lStack_520;
        __ZdlPv();
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
        return;
      }
      ___stack_chk_fail();
      if (pppppppiStack_490 != (int *******)0x0) {
        pppppppiStack_488 = pppppppiStack_490;
        __ZdlPv();
      }
      if (pppppppiStack_470 != (int *******)0x0) {
        pppppppiStack_468 = pppppppiStack_470;
        __ZdlPv();
      }
      if (lStack_520 != 0) {
        lStack_518 = lStack_520;
        __ZdlPv();
      }
      __Unwind_Resume();
      lVar10 = *(long *)(lVar9 + 0x10) - (long)*(float **)(lVar9 + 8);
      uVar43 = (lVar10 >> 2) * -0x5555555555555555;
      if (lVar10 == 0) {
        uVar35 = 0;
        uVar20 = 0;
        uVar12 = 0;
        uVar17 = 0xffffffff;
      }
      else {
        uVar35 = 0;
        pfVar14 = *(float **)(lVar9 + 8);
        do {
          uVar44 = uVar35;
          if (fVar34 < *pfVar14) break;
          uVar35 = uVar35 + 1;
          pfVar14 = pfVar14 + 3;
          uVar44 = uVar43;
        } while (uVar43 - uVar35 != 0);
        uVar20 = (uint)uVar44;
        uVar17 = (int)uVar43 - 1;
        uVar12 = uVar17;
        if ((int)(uVar20 - 2) <= (int)uVar17) {
          uVar12 = uVar20 - 2;
        }
        uVar7 = 0;
        if (1 < uVar20) {
          uVar7 = uVar12;
        }
        uVar3 = uVar17;
        if ((int)(uVar20 - 1) <= (int)uVar17) {
          uVar3 = uVar20 - 1;
        }
        uVar12 = 0;
        if (uVar20 != 0) {
          uVar12 = uVar3;
        }
        uVar35 = (ulong)(int)uVar7;
      }
      uVar7 = uVar17;
      if ((int)uVar20 <= (int)uVar17) {
        uVar7 = uVar20;
      }
      if ((int)(uVar20 + 1) <= (int)uVar17) {
        uVar17 = uVar20 + 1;
      }
      if (uVar12 == uVar7) {
        if (uVar43 < (ulong)(long)(int)uVar12 || uVar43 - (long)(int)uVar12 == 0) {
LAB_10ac35914:
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10ac35918);
          (*pcVar8)();
        }
      }
      else if ((((uVar43 < (ulong)(long)(int)uVar7 || uVar43 - (long)(int)uVar7 == 0) ||
                (uVar43 < (ulong)(long)(int)uVar12 || uVar43 - (long)(int)uVar12 == 0)) ||
               (uVar43 < uVar35 || uVar43 - uVar35 == 0)) ||
              (uVar43 < (ulong)(long)(int)uVar17 || uVar43 - (long)(int)uVar17 == 0))
      goto LAB_10ac35914;
      return;
    }
  }
  return;
}



/* Entry: 10a4a8d34; end: 10a4a8e37;  */

void FUN_10a4a8d34(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined1 *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    puVar1 = (undefined1 *)((long)register0x00000008 + -0xe0);
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(undefined4 *)((long)register0x00000008 + -0xe0) = 0;
    *(undefined4 *)((long)register0x00000008 + -0xa8) = 0;
    *(undefined4 *)((long)register0x00000008 + -0xa0) = 8;
    *(undefined1 *)((long)register0x00000008 + -0x9c) = 0;
    *(undefined1 *)((long)register0x00000008 + -0x98) = 0;
    *(undefined4 *)((long)register0x00000008 + -0x94) = 0xffffffff;
    *(undefined1 *)((long)register0x00000008 + -0x90) = 0;
    *(undefined1 *)((long)register0x00000008 + -0x8c) = 0;
    if (*(long *)(param_1 + 0x538) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(param_1 + 0x518);
    }
    param_1 = param_1 + 0x520;
    FUN_10ab17db4((undefined1 *)((long)register0x00000008 + -0x88),
                  (undefined1 *)((long)register0x00000008 + -0xe0),param_1,uVar2);
    if (*(char *)((long)register0x00000008 + -0x30) == '\x01') {
      param_1 = (undefined1 *)((long)register0x00000008 + -0x88);
      FUN_10a4c3ba4(param_2 + 0x58);
      if (*(char *)((long)register0x00000008 + -0x30) == '\x01') {
        FUN_10a22d0f8((undefined1 *)((long)register0x00000008 + -0x88));
      }
    }
    param_2 = param_1;
    FUN_10a22d0f8();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x28))
    break;
    ___stack_chk_fail();
    if (*(char *)((long)register0x00000008 + -0x30) == '\x01') {
      FUN_10a22d0f8((undefined1 *)((long)register0x00000008 + -0x88));
    }
    FUN_10a22d0f8((undefined1 *)((long)register0x00000008 + -0xe0));
    unaff_x30 = FUN_10a4a8e38;
    param_1 = puVar1;
    __Unwind_Resume();
    param_1 = param_1 + -0x4f0;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xe0);
    unaff_x19 = puVar1;
  }
  return;
}



/* Entry: 10a4a8e38; end: 10a4a8e3f;  */

void FUN_10a4a8e38(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined1 *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    puVar1 = (undefined1 *)((long)register0x00000008 + -0xe0);
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(undefined4 *)((long)register0x00000008 + -0xe0) = 0;
    *(undefined4 *)((long)register0x00000008 + -0xa8) = 0;
    *(undefined4 *)((long)register0x00000008 + -0xa0) = 8;
    *(undefined1 *)((long)register0x00000008 + -0x9c) = 0;
    *(undefined1 *)((long)register0x00000008 + -0x98) = 0;
    *(undefined4 *)((long)register0x00000008 + -0x94) = 0xffffffff;
    *(undefined1 *)((long)register0x00000008 + -0x90) = 0;
    *(undefined1 *)((long)register0x00000008 + -0x8c) = 0;
    if (*(long *)(param_1 + 0x48) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(param_1 + 0x28);
    }
    param_1 = param_1 + 0x30;
    FUN_10ab17db4((undefined1 *)((long)register0x00000008 + -0x88),
                  (undefined1 *)((long)register0x00000008 + -0xe0),param_1,uVar2);
    if (*(char *)((long)register0x00000008 + -0x30) == '\x01') {
      param_1 = (undefined1 *)((long)register0x00000008 + -0x88);
      FUN_10a4c3ba4(param_2 + 0x58);
      if (*(char *)((long)register0x00000008 + -0x30) == '\x01') {
        FUN_10a22d0f8((undefined1 *)((long)register0x00000008 + -0x88));
      }
    }
    param_2 = param_1;
    FUN_10a22d0f8();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x28))
    break;
    ___stack_chk_fail();
    if (*(char *)((long)register0x00000008 + -0x30) == '\x01') {
      FUN_10a22d0f8((undefined1 *)((long)register0x00000008 + -0x88));
    }
    FUN_10a22d0f8((undefined1 *)((long)register0x00000008 + -0xe0));
    unaff_x30 = FUN_10a4a8e38;
    param_1 = puVar1;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xe0);
    unaff_x19 = puVar1;
  }
  return;
}



/* Entry: 10a4a8e40; end: 10a4a8ec7;  */

bool FUN_10a4a8e40(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010a4a8cb0(param_1,*(undefined8 *)(param_2 + 0x68));
  lVar2 = param_1 + 0x4f0;
  (**(code **)(*(long *)(param_1 + 0x4f0) + 0x30))();
  FUN_10ab6e450();
  if (lVar2 != 0) {
    *(bool *)(param_1 + 0x548) = lVar1 != 0;
    if (lVar1 != 0) {
      FUN_10ac34714(*(undefined8 *)(param_1 + 0x538),lVar1);
    }
  }
  if (0x13e < *(int *)(*(long *)(*(long *)(param_1 + 0x170) + 0xa20) + 0x18)) {
    FUN_10a3e4548(*(undefined8 *)(param_1 + 0x168),lVar1 != 0);
  }
  return lVar1 != 0;
}



/* Entry: 10a4a8ec8; end: 10a4a8ecf;  */

bool FUN_10a4a8ec8(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = param_1 + -0x9e;
  func_0x00010a4a8cb0(plVar1,*(undefined8 *)(param_2 + 0x68));
  plVar2 = param_1;
  (**(code **)(*param_1 + 0x30))();
  FUN_10ab6e450();
  if (plVar2 != (long *)0x0) {
    *(bool *)(param_1 + 0xb) = plVar1 != (long *)0x0;
    if (plVar1 != (long *)0x0) {
      FUN_10ac34714(param_1[9],plVar1);
    }
  }
  if (0x13e < *(int *)(*(long *)(param_1[-0x70] + 0xa20) + 0x18)) {
    FUN_10a3e4548(param_1[-0x71],plVar1 != (long *)0x0);
  }
  return plVar1 != (long *)0x0;
}



/* Entry: 10a4a8ed0; end: 10a4a9247;  */

void FUN_10a4a8ed0(long *param_1,long *param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 *puVar4;
  long lVar5;
  char cVar6;
  bool bVar7;
  code *pcVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  float fVar16;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  
  if (param_4 == 0) {
    plVar13 = param_2;
    uVar12 = param_3;
    func_0x00010a0fda30();
  }
  else {
    plStack_58 = (long *)param_2[9];
    lStack_60 = param_2[8];
    lVar14 = param_4 + 0x88;
    func_0x00010a35bf90(lVar14,&lStack_60);
    puVar4 = (undefined8 *)((ulong)&lStack_60 | 8);
    plVar13 = &lStack_60;
    if (lVar14 != 0) {
      puVar4 = (undefined8 *)(lVar14 + 0x28);
      plVar13 = (long *)(lVar14 + 0x20);
    }
    uVar12 = *puVar4;
    plVar13 = (long *)*plVar13;
  }
  lVar14 = param_2[0x2e];
  FUN_10a3dd220(lVar14);
  FUN_10a4c3d58(lVar14,plVar13,uVar12);
  plVar13 = (long *)0x28;
  lStack_70 = lVar14;
  __Znwm();
  plVar15 = plVar13 + 1;
  *plVar15 = 0;
  *plVar13 = (long)&PTR_FUN_110be73c8;
  plVar13[2] = 0;
  plVar13[3] = lVar14;
  plVar13[4] = (long)FUN_10a3df8cc;
  plStack_68 = plVar13;
  if (lVar14 != 0) {
    if (*(long *)(lVar14 + 0x30) == 0) {
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar7) {
          *plVar15 = *plVar15 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      plVar1 = plVar13 + 2;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = *plVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      *(long *)(lVar14 + 0x28) = lVar14;
      *(long **)(lVar14 + 0x30) = plVar13;
    }
    else {
      if (*(long *)(*(long *)(lVar14 + 0x30) + 8) != -1) goto LAB_10a4a903c;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar7) {
          *plVar15 = *plVar15 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      plVar1 = plVar13 + 2;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = *plVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      *(long *)(lVar14 + 0x28) = lVar14;
      *(long **)(lVar14 + 0x30) = plVar13;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    do {
      lVar14 = *plVar15;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar7) {
        *plVar15 = lVar14 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
LAB_10a4a903c:
  lVar14 = lStack_70;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (lStack_70 + 0x150,param_2 + 0x2a);
  uVar2 = (*(ushort *)(param_2 + 0x30) >> 1 & 1) << 1;
  uVar3 = *(ushort *)(lVar14 + 0x180) & 0xfffc;
  *(ushort *)(lVar14 + 0x180) = uVar3 | *(ushort *)(lVar14 + 0x180) & 1 | uVar2;
  *(ushort *)(lVar14 + 0x180) = uVar3 | uVar2 | *(ushort *)(param_2 + 0x30) & 1;
  lStack_60 = lVar14;
  plStack_58 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar13 = plStack_68 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar7) {
        *plVar13 = *plVar13 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  FUN_10a3c7ce8(param_3,&lStack_60);
  plVar13 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar15 = plStack_58 + 1;
    do {
      lVar14 = *plVar15;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar7) {
        *plVar15 = lVar14 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  lVar14 = lStack_70;
  plVar13 = param_2;
  (**(code **)(*param_2 + 0x128))();
  *(undefined1 *)(lVar14 + 0x20c) = 0;
  *(int *)(lVar14 + 0x210) = (int)plVar13;
  FUN_10a2d597c(param_2,lVar14,param_4);
  if (*(uint *)(param_2 + 0xa3) < 0x80) {
    *(uint *)(lVar14 + 0x518) = *(uint *)(param_2 + 0xa3);
    FUN_10a4a84c8(lVar14,*(undefined4 *)((long)param_2 + 0x51c));
    lVar11 = *(long *)(lVar14 + 0x538);
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_90 = 0;
    lVar10 = *(long *)(param_2[0xa7] + 0x110);
    lVar5 = *(long *)(param_2[0xa7] + 0x118);
    FUN_10a05151c(&uStack_90,lVar10,lVar5,lVar5 - lVar10);
    if (*(long *)(lVar11 + 0x110) != 0) {
      *(long *)(lVar11 + 0x118) = *(long *)(lVar11 + 0x110);
      __ZdlPv();
      *(undefined8 *)(lVar11 + 0x110) = 0;
      *(undefined8 *)(lVar11 + 0x118) = 0;
      *(undefined8 *)(lVar11 + 0x120) = 0;
    }
    *(undefined8 *)(lVar11 + 0x118) = uStack_88;
    *(undefined8 *)(lVar11 + 0x110) = uStack_90;
    *(undefined8 *)(lVar11 + 0x120) = uStack_80;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_90 = 0;
    FUN_10a4a9248(*(undefined8 *)(lVar14 + 0x538),*(undefined1 *)(param_2[0xa7] + 0xe9));
    lVar10 = param_2[0xa7];
    fVar16 = *(float *)(lVar10 + 0xf4);
    if (0.0 <= fVar16) {
      *(float *)(*(long *)(lVar14 + 0x538) + 0xf4) = fVar16;
      FUN_10a4a92c8(*(undefined4 *)(lVar10 + 0xf0));
      *(undefined8 *)(*(long *)(lVar14 + 0x538) + 0x100) = *(undefined8 *)(param_2[0xa7] + 0x100);
      *(undefined8 *)(*(long *)(lVar14 + 0x538) + 0x108) = *(undefined8 *)(param_2[0xa7] + 0x108);
      *param_1 = lVar14;
      param_1[1] = (long)plStack_68;
      return;
    }
    puVar9 = &UNK_10f65cb0b;
  }
  else {
    puVar9 = &UNK_10f652c32;
  }
  FUN_10a00946c(puVar9);
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10a4a9224);
  (*pcVar8)();
}



/* Entry: 10a4a9248; end: 10a4a92c7;  */

void FUN_10a4a9248(long param_1,int param_2)

{
  code *pcVar1;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  func_0x000107c2b054(auStack_38,&UNK_10f65cadd);
  if (param_2 - 0xbU < 0x59) {
    if (cStack_21 < '\0') {
      __ZdlPv(auStack_38[0]);
    }
    *(char *)(param_1 + 0xe9) = (char)param_2;
    return;
  }
  FUN_10a109200(auStack_38);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a4a92ac);
  (*pcVar1)();
}



/* Entry: 10a4a92c8; end: 10a4a9307;  */

void FUN_10a4a92c8(float param_1,long param_2,long *param_3)

{
  undefined4 *puVar1;
  bool bVar2;
  long *plVar3;
  code *pcVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined *puStack_130;
  undefined1 auStack_f8 [8];
  int iStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined4 *puStack_c8;
  undefined4 *puStack_c0;
  long lStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  
  if (param_1 < 0.0) {
    FUN_10a00946c(&UNK_10f65cb4b);
  }
  else if (param_1 <= 1.0) {
    *(float *)(param_2 + 0xf0) = param_1;
    return;
  }
  puVar5 = &UNK_10f65cb8f;
  FUN_10a00946c();
  lStack_b0 = 0;
  plStack_a8 = (long *)0x0;
  plStack_a0 = (long *)0x0;
  uVar8 = param_3[1] - *param_3 >> 4;
  if (uVar8 < 3) {
    puVar5 = &UNK_10f65c451;
  }
  else {
    if (0xaaaaaaaaaaaaaaa < uVar8) {
      FUN_10a4afb8c();
      goto LAB_10a4a9644;
    }
    plVar6 = &lStack_b0;
    FUN_10a4afba0();
    lVar11 = (long)plVar6 - ((long)plStack_a8 - lStack_b0);
    _memcpy(lVar11);
    bVar2 = lStack_b0 != 0;
    lStack_b0 = lVar11;
    plStack_a8 = plVar6;
    plStack_a0 = plVar6 + uVar8 * 3;
    if (bVar2) {
      __ZdlPv();
    }
    plVar6 = (long *)*param_3;
    plVar3 = (long *)param_3[1];
    if (plVar6 != plVar3) {
      puStack_130 = &UNK_10f65c4b1;
      do {
        if (*plVar6 == 0) {
          FUN_10a00946c(&UNK_10f65c47b);
          goto LAB_10a4a9644;
        }
        FUN_10a464bc0(&puStack_e0,*plVar6,&DAT_10f638b7c);
        FUN_10a36c708(&puStack_c8,&puStack_e0);
        if ((3 < (int)puStack_d8) && (puStack_d0 != (undefined8 *)0x0)) {
          (**(code **)*puStack_d0)();
        }
        FUN_10a464bc0(auStack_f8,*plVar6,&DAT_10f415018);
        FUN_10a36c708(&puStack_e0,auStack_f8);
        if ((3 < iStack_f0) && (puStack_e8 != (undefined8 *)0x0)) {
          (**(code **)*puStack_e8)();
        }
        if ((long)puStack_c0 - (long)puStack_c8 != 0xc) {
LAB_10a4a9610:
          FUN_10a00946c(puStack_130);
          goto LAB_10a4a9644;
        }
        if ((long)puStack_d8 - (long)puStack_e0 != 0xc) {
          puStack_130 = &UNK_10f65c4dc;
          goto LAB_10a4a9610;
        }
        uVar16 = *puStack_c8;
        uVar15 = *(undefined8 *)(puStack_c8 + 1);
        uVar14 = *puStack_e0;
        if (plStack_a8 < plStack_a0) {
          uVar13 = *(undefined4 *)(puStack_e0 + 1);
          *(undefined4 *)plStack_a8 = uVar16;
          *(undefined8 *)((long)plStack_a8 + 0xc) = uVar14;
          *(undefined8 *)((long)plStack_a8 + 4) = uVar15;
          *(undefined4 *)((long)plStack_a8 + 0x14) = uVar13;
          plVar12 = plStack_a8 + 3;
        }
        else {
          lVar11 = (long)plStack_a8 - lStack_b0;
          uVar8 = (lVar11 >> 3) * -0x5555555555555555 + 1;
          if (0xaaaaaaaaaaaaaaa < uVar8) {
            FUN_10a4afb8c();
            goto LAB_10a4a9644;
          }
          uVar13 = puStack_c8[2];
          uVar17 = *(undefined8 *)((long)puStack_e0 + 4);
          lVar9 = (long)plStack_a0 - lStack_b0 >> 3;
          uVar10 = lVar9 * 0x5555555555555556;
          if (uVar10 < uVar8 || uVar10 - uVar8 == 0) {
            uVar10 = uVar8;
          }
          if (0x555555555555554 < (ulong)(lVar9 * -0x5555555555555555)) {
            uVar10 = 0xaaaaaaaaaaaaaaa;
          }
          plVar7 = &lStack_b0;
          FUN_10a4afba0();
          puVar1 = (undefined4 *)((long)plVar7 + lVar11);
          *puVar1 = uVar16;
          puVar1[1] = (int)uVar15;
          puVar1[2] = uVar13;
          puVar1[3] = (int)uVar14;
          *(undefined8 *)(puVar1 + 4) = uVar17;
          plVar12 = (long *)(puVar1 + 6);
          lVar11 = (long)puVar1 - ((long)plStack_a8 - lStack_b0);
          _memcpy(lVar11);
          bVar2 = lStack_b0 != 0;
          lStack_b0 = lVar11;
          plStack_a0 = plVar7 + uVar10 * 3;
          if (bVar2) {
            plStack_a8 = plVar12;
            __ZdlPv();
          }
        }
        plStack_a8 = plVar12;
        if (puStack_e0 != (undefined8 *)0x0) {
          puStack_d8 = puStack_e0;
          __ZdlPv();
        }
        if (puStack_c8 != (undefined4 *)0x0) {
          puStack_c0 = puStack_c8;
          __ZdlPv();
        }
        plVar6 = plVar6 + 2;
      } while (plVar6 != plVar3);
    }
    *(undefined4 *)(puVar5 + 0x51c) = 4;
    if (2 < (ulong)(((long)plStack_a8 - lStack_b0 >> 3) * -0x5555555555555555)) {
      FUN_10a4a8568(puVar5);
      FUN_10ac36380(*(undefined8 *)(puVar5 + 0x538),&lStack_b0);
      *(undefined4 *)(puVar5 + 0x51c) = 4;
      if (lStack_b0 != 0) {
        plStack_a8 = (long *)lStack_b0;
        __ZdlPv();
      }
      return;
    }
    puVar5 = &UNK_10f65c41d;
  }
  FUN_10a00946c(puVar5);
LAB_10a4a9644:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a4a9648);
  (*pcVar4)();
}



/* Entry: 10a4a9308; end: 10a4a96f3;  */

void FUN_10a4a9308(long param_1,long *param_2)

{
  undefined4 *puVar1;
  bool bVar2;
  long *plVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined *puStack_120;
  undefined1 auStack_e8 [8];
  int iStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined4 *puStack_b8;
  undefined4 *puStack_b0;
  long lStack_a0;
  long *plStack_98;
  long *plStack_90;
  
  lStack_a0 = 0;
  plStack_98 = (long *)0x0;
  plStack_90 = (long *)0x0;
  uVar8 = param_2[1] - *param_2 >> 4;
  if (uVar8 < 3) {
    puVar7 = &UNK_10f65c451;
  }
  else {
    if (0xaaaaaaaaaaaaaaa < uVar8) {
      FUN_10a4afb8c();
      goto LAB_10a4a9644;
    }
    plVar5 = &lStack_a0;
    FUN_10a4afba0();
    lVar11 = (long)plVar5 - ((long)plStack_98 - lStack_a0);
    _memcpy(lVar11);
    bVar2 = lStack_a0 != 0;
    lStack_a0 = lVar11;
    plStack_98 = plVar5;
    plStack_90 = plVar5 + uVar8 * 3;
    if (bVar2) {
      __ZdlPv();
    }
    plVar5 = (long *)*param_2;
    plVar3 = (long *)param_2[1];
    if (plVar5 != plVar3) {
      puStack_120 = &UNK_10f65c4b1;
      do {
        if (*plVar5 == 0) {
          FUN_10a00946c(&UNK_10f65c47b);
          goto LAB_10a4a9644;
        }
        FUN_10a464bc0(&puStack_d0,*plVar5,&DAT_10f638b7c);
        FUN_10a36c708(&puStack_b8,&puStack_d0);
        if ((3 < (int)puStack_c8) && (puStack_c0 != (undefined8 *)0x0)) {
          (**(code **)*puStack_c0)();
        }
        FUN_10a464bc0(auStack_e8,*plVar5,&DAT_10f415018);
        FUN_10a36c708(&puStack_d0,auStack_e8);
        if ((3 < iStack_e0) && (puStack_d8 != (undefined8 *)0x0)) {
          (**(code **)*puStack_d8)();
        }
        if ((long)puStack_b0 - (long)puStack_b8 != 0xc) {
LAB_10a4a9610:
          FUN_10a00946c(puStack_120);
          goto LAB_10a4a9644;
        }
        if ((long)puStack_c8 - (long)puStack_d0 != 0xc) {
          puStack_120 = &UNK_10f65c4dc;
          goto LAB_10a4a9610;
        }
        uVar16 = *puStack_b8;
        uVar15 = *(undefined8 *)(puStack_b8 + 1);
        uVar14 = *puStack_d0;
        if (plStack_98 < plStack_90) {
          uVar13 = *(undefined4 *)(puStack_d0 + 1);
          *(undefined4 *)plStack_98 = uVar16;
          *(undefined8 *)((long)plStack_98 + 0xc) = uVar14;
          *(undefined8 *)((long)plStack_98 + 4) = uVar15;
          *(undefined4 *)((long)plStack_98 + 0x14) = uVar13;
          plVar12 = plStack_98 + 3;
        }
        else {
          lVar11 = (long)plStack_98 - lStack_a0;
          uVar8 = (lVar11 >> 3) * -0x5555555555555555 + 1;
          if (0xaaaaaaaaaaaaaaa < uVar8) {
            FUN_10a4afb8c();
            goto LAB_10a4a9644;
          }
          uVar13 = puStack_b8[2];
          uVar17 = *(undefined8 *)((long)puStack_d0 + 4);
          lVar9 = (long)plStack_90 - lStack_a0 >> 3;
          uVar10 = lVar9 * 0x5555555555555556;
          if (uVar10 < uVar8 || uVar10 - uVar8 == 0) {
            uVar10 = uVar8;
          }
          if (0x555555555555554 < (ulong)(lVar9 * -0x5555555555555555)) {
            uVar10 = 0xaaaaaaaaaaaaaaa;
          }
          plVar6 = &lStack_a0;
          FUN_10a4afba0();
          puVar1 = (undefined4 *)((long)plVar6 + lVar11);
          *puVar1 = uVar16;
          puVar1[1] = (int)uVar15;
          puVar1[2] = uVar13;
          puVar1[3] = (int)uVar14;
          *(undefined8 *)(puVar1 + 4) = uVar17;
          plVar12 = (long *)(puVar1 + 6);
          lVar11 = (long)puVar1 - ((long)plStack_98 - lStack_a0);
          _memcpy(lVar11);
          bVar2 = lStack_a0 != 0;
          lStack_a0 = lVar11;
          plStack_90 = plVar6 + uVar10 * 3;
          if (bVar2) {
            plStack_98 = plVar12;
            __ZdlPv();
          }
        }
        plStack_98 = plVar12;
        if (puStack_d0 != (undefined8 *)0x0) {
          puStack_c8 = puStack_d0;
          __ZdlPv();
        }
        if (puStack_b8 != (undefined4 *)0x0) {
          puStack_b0 = puStack_b8;
          __ZdlPv();
        }
        plVar5 = plVar5 + 2;
      } while (plVar5 != plVar3);
    }
    *(undefined4 *)(param_1 + 0x51c) = 4;
    if (2 < (ulong)(((long)plStack_98 - lStack_a0 >> 3) * -0x5555555555555555)) {
      FUN_10a4a8568(param_1);
      FUN_10ac36380(*(undefined8 *)(param_1 + 0x538),&lStack_a0);
      *(undefined4 *)(param_1 + 0x51c) = 4;
      if (lStack_a0 != 0) {
        plStack_98 = (long *)lStack_a0;
        __ZdlPv();
      }
      return;
    }
    puVar7 = &UNK_10f65c41d;
  }
  FUN_10a00946c(puVar7);
LAB_10a4a9644:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a4a9648);
  (*pcVar4)();
}



/* Entry: 10a4a96f4; end: 10a4a9833;  */

void FUN_10a4a96f4(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fStack_80;
  float fStack_7c;
  undefined1 auStack_78 [12];
  undefined1 auStack_6c [28];
  
  if ((((char)param_1[0xa9] == '\x01') && (plVar1 = param_1, FUN_10a00ff8c(), plVar1 != (long *)0x0)
      ) && (lVar4 = *(long *)(param_1[0x2d] + 0x248), lVar4 != 0)) {
    fVar7 = (float)NEON_fminnm(ABS(*(float *)(plVar1 + 0x2b) - *(float *)(plVar1 + 0x2a)),
                               ABS(*(float *)((long)plVar1 + 0x15c) -
                                   *(float *)((long)plVar1 + 0x154)));
    fVar8 = (*(float *)(plVar1 + 0x2b) - *(float *)(plVar1 + 0x2a)) /
            (*(float *)((long)plVar1 + 0x15c) - *(float *)((long)plVar1 + 0x154));
    fVar10 = 1.0;
    fVar9 = fVar10;
    if (1e-06 < fVar7) {
      fVar9 = fVar8;
    }
    plVar2 = param_1;
    FUN_10a424150();
    lVar5 = *plVar2;
    if (lVar5 != 0) {
      plVar2 = *(long **)(lVar5 + 0x268);
      fVar7 = 0.0;
      if (plVar2 == (long *)0x0) {
        fVar10 = 0.0;
      }
      else {
        (**(code **)(*plVar2 + 0xb0))();
        plVar3 = *(long **)(lVar5 + 0x268);
        fVar10 = (float)((ulong)plVar2 & 0xffffffff);
        fVar7 = 0.0;
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0xb8))();
          fVar7 = (float)((ulong)plVar3 & 0xffffffff);
        }
      }
      fVar10 = fVar10 / fVar7;
      if (ABS(fVar10) <= 1e-06) {
        fVar10 = 1.0;
      }
    }
    uVar6 = *(undefined8 *)(param_1[0x2e] + 0xa20);
    FUN_10a394a64(lVar4);
    fStack_80 = fVar9 * fVar10;
    func_0x00010acae698(lVar4 + 0x268);
    fStack_7c = fVar8;
    FUN_10a3962dc(auStack_78,fVar9 * fVar10,uVar6,&fStack_80,lVar4 + 0x2a0,param_1 + 0x61,
                  (long)plVar1 + 0x144,plVar1 + 0x27,1);
    FUN_10a425f00(param_1,1);
    lVar4 = param_1[0x60];
    FUN_10a3e814c(lVar4,auStack_78);
    FUN_10a3e3894(lVar4,auStack_6c);
    return;
  }
  return;
}



/* Entry: 10a4a9834; end: 10a4aa03b;  */

/* WARNING: Removing unreachable block (ram,0x00010a4a9cb8) */
/* WARNING: Removing unreachable block (ram,0x00010a4a9c98) */
/* WARNING: Removing unreachable block (ram,0x00010a4a9c88) */
/* WARNING: Removing unreachable block (ram,0x00010a4a9ca8) */
/* WARNING: Removing unreachable block (ram,0x00010a4a9cd8) */

void FUN_10a4a9834(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  char *pcVar3;
  bool bVar4;
  undefined8 ***pppuVar5;
  undefined8 **ppuVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 **ppuStack_2e8;
  ulong uStack_2e0;
  byte bStack_2d1;
  undefined8 **ppuStack_2d0;
  ulong uStack_2c8;
  byte bStack_2b9;
  undefined8 **ppuStack_2b8;
  ulong uStack_2b0;
  byte bStack_2a1;
  undefined8 **ppuStack_2a0;
  ulong uStack_298;
  byte bStack_289;
  undefined8 **ppuStack_288;
  ulong uStack_280;
  byte bStack_271;
  undefined8 **ppuStack_270;
  ulong uStack_268;
  byte bStack_259;
  undefined8 **appuStack_258 [2];
  char cStack_241;
  undefined8 *puStack_240;
  undefined8 *puStack_238;
  undefined8 *puStack_230;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_210;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_1f0;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 **ppuStack_68;
  ulong uStack_60;
  byte bStack_51;
  
  FUN_10a3c829c(&ppuStack_68);
  uVar1 = uStack_60;
  if (-1 < (char)bStack_51) {
    uVar1 = (ulong)bStack_51;
  }
  FUN_10a003c90(appuStack_258,uVar1 + 0xd,&ppuStack_270);
  pppuVar2 = (undefined8 ***)appuStack_258[0];
  if (-1 < cStack_241) {
    pppuVar2 = appuStack_258;
  }
  if (uVar1 != 0) {
    pppuVar5 = (undefined8 ***)ppuStack_68;
    if (-1 < (char)bStack_51) {
      pppuVar5 = &ppuStack_68;
    }
    _memmove(pppuVar2,pppuVar5,uVar1);
  }
  puVar7 = (undefined8 *)((long)pppuVar2 + uVar1);
  *puVar7 = 0x6e4965636166202c;
  *(undefined8 *)((long)puVar7 + 5) = 0x203a7865646e4965;
  *(undefined1 *)((long)puVar7 + 0xd) = 0;
  __ZNSt3__19to_stringEi(&ppuStack_270,*(undefined4 *)(param_2 + 0x518));
  pppuVar2 = (undefined8 ***)ppuStack_270;
  if (-1 < (char)bStack_259) {
    uStack_268 = (ulong)bStack_259;
    pppuVar2 = &ppuStack_270;
  }
  pppuVar5 = appuStack_258;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppuVar5,pppuVar2,uStack_268);
  puStack_238 = pppuVar5[1];
  puStack_240 = *pppuVar5;
  puStack_230 = pppuVar5[2];
  pppuVar5[1] = (undefined8 **)0x0;
  pppuVar5[2] = (undefined8 **)0x0;
  *pppuVar5 = (undefined8 **)0x0;
  ppuVar6 = &puStack_240;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppuVar6,&UNK_10f65c507,0x14);
  uStack_218 = ppuVar6[1];
  uStack_220 = *ppuVar6;
  lStack_210 = (long)ppuVar6[2];
  ppuVar6[1] = (undefined8 *)0x0;
  ppuVar6[2] = (undefined8 *)0x0;
  *ppuVar6 = (undefined8 *)0x0;
  __ZNSt3__19to_stringEf(&ppuStack_288,*(undefined4 *)(*(long *)(param_2 + 0x538) + 0x100));
  pppuVar2 = (undefined8 ***)ppuStack_288;
  if (-1 < (char)bStack_271) {
    uStack_280 = (ulong)bStack_271;
    pppuVar2 = &ppuStack_288;
  }
  puVar7 = &uStack_220;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,pppuVar2,uStack_280);
  uStack_1f8 = puVar7[1];
  uStack_200 = *puVar7;
  lStack_1f0 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  puVar7 = &uStack_200;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,&DAT_10f68f19e,2);
  uStack_1d8 = puVar7[1];
  uStack_1e0 = *puVar7;
  lStack_1d0 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  __ZNSt3__19to_stringEf(&ppuStack_2a0,*(undefined4 *)(*(long *)(param_2 + 0x538) + 0x104));
  pppuVar2 = (undefined8 ***)ppuStack_2a0;
  if (-1 < (char)bStack_289) {
    uStack_298 = (ulong)bStack_289;
    pppuVar2 = &ppuStack_2a0;
  }
  puVar7 = &uStack_1e0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,pppuVar2,uStack_298);
  uStack_1b8 = puVar7[1];
  uStack_1c0 = *puVar7;
  lStack_1b0 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  puVar7 = &uStack_1c0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,&DAT_10f684600,1);
  uStack_198 = puVar7[1];
  uStack_1a0 = *puVar7;
  lStack_190 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  puVar7 = &uStack_1a0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,&UNK_10f65c51c,0x15);
  uStack_178 = puVar7[1];
  uStack_180 = *puVar7;
  lStack_170 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  __ZNSt3__19to_stringEf(&ppuStack_2b8,*(undefined4 *)(*(long *)(param_2 + 0x538) + 0xf0));
  pppuVar2 = (undefined8 ***)ppuStack_2b8;
  if (-1 < (char)bStack_2a1) {
    uStack_2b0 = (ulong)bStack_2a1;
    pppuVar2 = &ppuStack_2b8;
  }
  puVar7 = &uStack_180;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,pppuVar2,uStack_2b0);
  uStack_158 = puVar7[1];
  uStack_160 = *puVar7;
  lStack_150 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  puVar7 = &uStack_160;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,&UNK_10f65c532,0x15);
  uStack_138 = puVar7[1];
  uStack_140 = *puVar7;
  lStack_130 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  __ZNSt3__19to_stringEf(&ppuStack_2d0,*(undefined4 *)(*(long *)(param_2 + 0x538) + 0xf4));
  pppuVar2 = (undefined8 ***)ppuStack_2d0;
  if (-1 < (char)bStack_2b9) {
    uStack_2c8 = (ulong)bStack_2b9;
    pppuVar2 = &ppuStack_2d0;
  }
  puVar7 = &uStack_140;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,pppuVar2,uStack_2c8);
  uStack_118 = puVar7[1];
  uStack_120 = *puVar7;
  lStack_110 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  puVar7 = &uStack_120;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,&UNK_10f65c548,0x15);
  uStack_f8 = puVar7[1];
  uStack_100 = *puVar7;
  uStack_f0 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  __ZNSt3__19to_stringEj(&ppuStack_2e8,*(undefined1 *)(*(long *)(param_2 + 0x538) + 0xe9));
  pppuVar2 = (undefined8 ***)ppuStack_2e8;
  if (-1 < (char)bStack_2d1) {
    uStack_2e0 = (ulong)bStack_2d1;
    pppuVar2 = &ppuStack_2e8;
  }
  puVar7 = &uStack_100;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,pppuVar2,uStack_2e0);
  uStack_d8 = puVar7[1];
  uStack_e0 = *puVar7;
  uStack_d0 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  puVar7 = &uStack_e0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,&UNK_10f65c55e,0xb);
  uStack_b8 = puVar7[1];
  uStack_c0 = *puVar7;
  uStack_b0 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  bVar4 = (*(byte *)(*(long *)(param_2 + 0x538) + 0xe8) & 1) != 0;
  pcVar3 = "false";
  if (bVar4) {
    pcVar3 = "true";
  }
  uVar8 = 4;
  if (!bVar4) {
    uVar8 = 5;
  }
  puVar7 = &uStack_c0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar7,pcVar3,uVar8);
  uStack_98 = puVar7[1];
  uStack_a0 = *puVar7;
  uStack_90 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  puVar7 = &uStack_a0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,&UNK_10f65c56a,0xb);
  uStack_78 = puVar7[1];
  uStack_80 = *puVar7;
  uStack_70 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  bVar4 = (*(byte *)(*(long *)(param_2 + 0x538) + 0xe8) & 2) != 0;
  pcVar3 = "false";
  if (bVar4) {
    pcVar3 = "true";
  }
  uVar8 = 4;
  if (!bVar4) {
    uVar8 = 5;
  }
  puVar7 = &uStack_80;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar7,pcVar3,uVar8);
  uVar8 = *puVar7;
  param_1[1] = puVar7[1];
  *param_1 = uVar8;
  param_1[2] = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  if ((char)bStack_2d1 < '\0') {
    __ZdlPv(ppuStack_2e8);
  }
  if (lStack_110 < 0) {
    __ZdlPv(uStack_120);
  }
  if ((char)bStack_2b9 < '\0') {
    __ZdlPv(ppuStack_2d0);
  }
  if (lStack_130 < 0) {
    __ZdlPv(uStack_140);
  }
  if (lStack_150 < 0) {
    __ZdlPv(uStack_160);
  }
  if ((char)bStack_2a1 < '\0') {
    __ZdlPv(ppuStack_2b8);
  }
  if (lStack_170 < 0) {
    __ZdlPv(uStack_180);
  }
  if (lStack_190 < 0) {
    __ZdlPv(uStack_1a0);
  }
  if (lStack_1b0 < 0) {
    __ZdlPv(uStack_1c0);
  }
  if ((char)bStack_289 < '\0') {
    __ZdlPv(ppuStack_2a0);
  }
  if (lStack_1d0 < 0) {
    __ZdlPv(uStack_1e0);
  }
  if (lStack_1f0 < 0) {
    __ZdlPv(uStack_200);
  }
  if ((char)bStack_271 < '\0') {
    __ZdlPv(ppuStack_288);
  }
  if (lStack_210 < 0) {
    __ZdlPv(uStack_220);
  }
  if ((long)puStack_230 < 0) {
    __ZdlPv(puStack_240);
  }
  if ((char)bStack_259 < '\0') {
    __ZdlPv(ppuStack_270);
  }
  if (cStack_241 < '\0') {
    __ZdlPv(appuStack_258[0]);
  }
  if ((char)bStack_51 < '\0') {
    __ZdlPv(ppuStack_68);
  }
  return;
}



/* Entry: 10a4aa03c; end: 10a4aa113;  */

/* WARNING: Removing unreachable block (ram,0x00010a4a9cb8) */
/* WARNING: Removing unreachable block (ram,0x00010a4a9c98) */
/* WARNING: Removing unreachable block (ram,0x00010a4a9c88) */
/* WARNING: Removing unreachable block (ram,0x00010a4a9ca8) */
/* WARNING: Removing unreachable block (ram,0x00010a4a9cd8) */

void FUN_10a4aa03c(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  char *pcVar3;
  bool bVar4;
  undefined8 ***pppuVar5;
  undefined8 **ppuVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 **ppuStack_2e8;
  ulong uStack_2e0;
  byte bStack_2d1;
  undefined8 **ppuStack_2d0;
  ulong uStack_2c8;
  byte bStack_2b9;
  undefined8 **ppuStack_2b8;
  ulong uStack_2b0;
  byte bStack_2a1;
  undefined8 **ppuStack_2a0;
  ulong uStack_298;
  byte bStack_289;
  undefined8 **ppuStack_288;
  ulong uStack_280;
  byte bStack_271;
  undefined8 **ppuStack_270;
  ulong uStack_268;
  byte bStack_259;
  undefined8 **appuStack_258 [2];
  char cStack_241;
  undefined8 *puStack_240;
  undefined8 *puStack_238;
  undefined8 *puStack_230;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_210;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_1f0;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 **ppuStack_68;
  ulong uStack_60;
  byte bStack_51;
  
  FUN_10a3c829c(&ppuStack_68);
  uVar1 = uStack_60;
  if (-1 < (char)bStack_51) {
    uVar1 = (ulong)bStack_51;
  }
  FUN_10a003c90(appuStack_258,uVar1 + 0xd,&ppuStack_270);
  pppuVar2 = (undefined8 ***)appuStack_258[0];
  if (-1 < cStack_241) {
    pppuVar2 = appuStack_258;
  }
  if (uVar1 != 0) {
    pppuVar5 = (undefined8 ***)ppuStack_68;
    if (-1 < (char)bStack_51) {
      pppuVar5 = &ppuStack_68;
    }
    _memmove(pppuVar2,pppuVar5,uVar1);
  }
  puVar7 = (undefined8 *)((long)pppuVar2 + uVar1);
  *puVar7 = 0x6e4965636166202c;
  *(undefined8 *)((long)puVar7 + 5) = 0x203a7865646e4965;
  *(undefined1 *)((long)puVar7 + 0xd) = 0;
  __ZNSt3__19to_stringEi(&ppuStack_270,*(undefined4 *)(param_2 + 0x508));
  pppuVar2 = (undefined8 ***)ppuStack_270;
  if (-1 < (char)bStack_259) {
    uStack_268 = (ulong)bStack_259;
    pppuVar2 = &ppuStack_270;
  }
  pppuVar5 = appuStack_258;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppuVar5,pppuVar2,uStack_268);
  puStack_238 = pppuVar5[1];
  puStack_240 = *pppuVar5;
  puStack_230 = pppuVar5[2];
  pppuVar5[1] = (undefined8 **)0x0;
  pppuVar5[2] = (undefined8 **)0x0;
  *pppuVar5 = (undefined8 **)0x0;
  ppuVar6 = &puStack_240;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppuVar6,&UNK_10f65c507,0x14);
  uStack_218 = ppuVar6[1];
  uStack_220 = *ppuVar6;
  lStack_210 = (long)ppuVar6[2];
  ppuVar6[1] = (undefined8 *)0x0;
  ppuVar6[2] = (undefined8 *)0x0;
  *ppuVar6 = (undefined8 *)0x0;
  __ZNSt3__19to_stringEf(&ppuStack_288,*(undefined4 *)(*(long *)(param_2 + 0x528) + 0x100));
  pppuVar2 = (undefined8 ***)ppuStack_288;
  if (-1 < (char)bStack_271) {
    uStack_280 = (ulong)bStack_271;
    pppuVar2 = &ppuStack_288;
  }
  puVar7 = &uStack_220;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,pppuVar2,uStack_280);
  uStack_1f8 = puVar7[1];
  uStack_200 = *puVar7;
  lStack_1f0 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  puVar7 = &uStack_200;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,&DAT_10f68f19e,2);
  uStack_1d8 = puVar7[1];
  uStack_1e0 = *puVar7;
  lStack_1d0 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  __ZNSt3__19to_stringEf(&ppuStack_2a0,*(undefined4 *)(*(long *)(param_2 + 0x528) + 0x104));
  pppuVar2 = (undefined8 ***)ppuStack_2a0;
  if (-1 < (char)bStack_289) {
    uStack_298 = (ulong)bStack_289;
    pppuVar2 = &ppuStack_2a0;
  }
  puVar7 = &uStack_1e0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,pppuVar2,uStack_298);
  uStack_1b8 = puVar7[1];
  uStack_1c0 = *puVar7;
  lStack_1b0 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  puVar7 = &uStack_1c0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,&DAT_10f684600,1);
  uStack_198 = puVar7[1];
  uStack_1a0 = *puVar7;
  lStack_190 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  puVar7 = &uStack_1a0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,&UNK_10f65c51c,0x15);
  uStack_178 = puVar7[1];
  uStack_180 = *puVar7;
  lStack_170 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  __ZNSt3__19to_stringEf(&ppuStack_2b8,*(undefined4 *)(*(long *)(param_2 + 0x528) + 0xf0));
  pppuVar2 = (undefined8 ***)ppuStack_2b8;
  if (-1 < (char)bStack_2a1) {
    uStack_2b0 = (ulong)bStack_2a1;
    pppuVar2 = &ppuStack_2b8;
  }
  puVar7 = &uStack_180;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,pppuVar2,uStack_2b0);
  uStack_158 = puVar7[1];
  uStack_160 = *puVar7;
  lStack_150 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  puVar7 = &uStack_160;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,&UNK_10f65c532,0x15);
  uStack_138 = puVar7[1];
  uStack_140 = *puVar7;
  lStack_130 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  __ZNSt3__19to_stringEf(&ppuStack_2d0,*(undefined4 *)(*(long *)(param_2 + 0x528) + 0xf4));
  pppuVar2 = (undefined8 ***)ppuStack_2d0;
  if (-1 < (char)bStack_2b9) {
    uStack_2c8 = (ulong)bStack_2b9;
    pppuVar2 = &ppuStack_2d0;
  }
  puVar7 = &uStack_140;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,pppuVar2,uStack_2c8);
  uStack_118 = puVar7[1];
  uStack_120 = *puVar7;
  lStack_110 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  puVar7 = &uStack_120;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,&UNK_10f65c548,0x15);
  uStack_f8 = puVar7[1];
  uStack_100 = *puVar7;
  uStack_f0 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  __ZNSt3__19to_stringEj(&ppuStack_2e8,*(undefined1 *)(*(long *)(param_2 + 0x528) + 0xe9));
  pppuVar2 = (undefined8 ***)ppuStack_2e8;
  if (-1 < (char)bStack_2d1) {
    uStack_2e0 = (ulong)bStack_2d1;
    pppuVar2 = &ppuStack_2e8;
  }
  puVar7 = &uStack_100;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,pppuVar2,uStack_2e0);
  uStack_d8 = puVar7[1];
  uStack_e0 = *puVar7;
  uStack_d0 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  puVar7 = &uStack_e0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,&UNK_10f65c55e,0xb);
  uStack_b8 = puVar7[1];
  uStack_c0 = *puVar7;
  uStack_b0 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  bVar4 = (*(byte *)(*(long *)(param_2 + 0x528) + 0xe8) & 1) != 0;
  pcVar3 = "false";
  if (bVar4) {
    pcVar3 = "true";
  }
  uVar8 = 4;
  if (!bVar4) {
    uVar8 = 5;
  }
  puVar7 = &uStack_c0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar7,pcVar3,uVar8);
  uStack_98 = puVar7[1];
  uStack_a0 = *puVar7;
  uStack_90 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  puVar7 = &uStack_a0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,&UNK_10f65c56a,0xb);
  uStack_78 = puVar7[1];
  uStack_80 = *puVar7;
  uStack_70 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  bVar4 = (*(byte *)(*(long *)(param_2 + 0x528) + 0xe8) & 2) != 0;
  pcVar3 = "false";
  if (bVar4) {
    pcVar3 = "true";
  }
  uVar8 = 4;
  if (!bVar4) {
    uVar8 = 5;
  }
  puVar7 = &uStack_80;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar7,pcVar3,uVar8);
  uVar8 = *puVar7;
  param_1[1] = puVar7[1];
  *param_1 = uVar8;
  param_1[2] = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  if ((char)bStack_2d1 < '\0') {
    __ZdlPv(ppuStack_2e8);
  }
  if (lStack_110 < 0) {
    __ZdlPv(uStack_120);
  }
  if ((char)bStack_2b9 < '\0') {
    __ZdlPv(ppuStack_2d0);
  }
  if (lStack_130 < 0) {
    __ZdlPv(uStack_140);
  }
  if (lStack_150 < 0) {
    __ZdlPv(uStack_160);
  }
  if ((char)bStack_2a1 < '\0') {
    __ZdlPv(ppuStack_2b8);
  }
  if (lStack_170 < 0) {
    __ZdlPv(uStack_180);
  }
  if (lStack_190 < 0) {
    __ZdlPv(uStack_1a0);
  }
  if (lStack_1b0 < 0) {
    __ZdlPv(uStack_1c0);
  }
  if ((char)bStack_289 < '\0') {
    __ZdlPv(ppuStack_2a0);
  }
  if (lStack_1d0 < 0) {
    __ZdlPv(uStack_1e0);
  }
  if (lStack_1f0 < 0) {
    __ZdlPv(uStack_200);
  }
  if ((char)bStack_271 < '\0') {
    __ZdlPv(ppuStack_288);
  }
  if (lStack_210 < 0) {
    __ZdlPv(uStack_220);
  }
  if ((long)puStack_230 < 0) {
    __ZdlPv(puStack_240);
  }
  if ((char)bStack_259 < '\0') {
    __ZdlPv(ppuStack_270);
  }
  if (cStack_241 < '\0') {
    __ZdlPv(appuStack_258[0]);
  }
  if ((char)bStack_51 < '\0') {
    __ZdlPv(ppuStack_68);
  }
  return;
}



/* Entry: 10a4aa114; end: 10a4aa617;  */

void FUN_10a4aa114(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c8,&UNK_10f65cbd0,0x18);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110be68f8;
  pppuVar2 = (undefined8 ***)&UNK_10f65b2b8;
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
    ppuStack_b0 = &PTR_DAT_110be68f8;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110bc3458;
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
    FUN_10a052828(param_1,&UNK_10f65c576,FUN_10a4c3ebc,FUN_10a4c3f80);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f65c58d,FUN_10a4c4120,FUN_10a4c41e4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f65c5a4,FUN_10a4c42b4,FUN_10a4c43d4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f65c1ff,FUN_10a4c453c,FUN_10a4c45fc);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f644824,FUN_10a4c46d8,FUN_10a4c4794);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f65c5bc,FUN_10a4c4898,FUN_10a4c4958);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f65c5ce,FUN_10a4c4a34,FUN_10a4c4b00);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f489ca0,FUN_10a4c4bf8,FUN_10a4c4cd0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f65c5d9,FUN_10a4c4ea4,FUN_10a4c4f5c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f65c5f0,FUN_10a4c5024,FUN_10a4c50e8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,0x40,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f65c5fb,FUN_10a4c51a0,FUN_10a4c5264);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f65c611,FUN_10a4c5554,FUN_10a4c5614);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f651ece,FUN_10a4c56f0,0);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f65cbd0,0x18);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a4aa5fc);
  (*pcVar6)();
}



/* Entry: 10a4aa618; end: 10a4aa77f;  */

void FUN_10a4aa618(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined1 auStack_50 [8];
  long *plStack_48;
  undefined8 uStack_40;
  long lStack_38;
  long *plStack_30;
  undefined1 uStack_21;
  
  uStack_40 = *(undefined8 *)(param_1 + 0x170);
  FUN_10a3b17b4(&lStack_38,&uStack_21,&uStack_40);
  FUN_10a38f1dc(param_1 + 0x538,&lStack_38);
  if (plStack_30 != (long *)0x0) {
    plVar1 = plStack_30 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_30 + 0x10))(plStack_30);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_30);
    }
  }
  uStack_40 = *(undefined8 *)(param_1 + 0x170);
  lStack_38 = *(long *)(param_1 + 0x538);
  if (lStack_38 == 0) {
    lStack_38 = 0;
    plStack_30 = (long *)0x0;
  }
  else {
    plStack_30 = *(long **)(param_1 + 0x540);
    if (plStack_30 != (long *)0x0) {
      plVar1 = plStack_30 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  FUN_10a38f240(auStack_50,&uStack_40,&lStack_38);
  FUN_10a426824(param_1,auStack_50);
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
  plVar1 = plStack_30;
  if (plStack_30 != (long *)0x0) {
    plVar2 = plStack_30 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_30 + 0x10))(plStack_30);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a4aa780; end: 10a4aa85b;  */

void FUN_10a4aa780(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *(undefined2 *)(puVar1 + 1) = 0;
  *puVar1 = &PTR_DAT_110c472a0;
  *(undefined4 *)((long)puVar1 + 0xc) = 0x3f800000;
  plVar2 = *(long **)(param_1 + 0x548);
  *(undefined8 **)(param_1 + 0x548) = puVar1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  puVar1 = (undefined8 *)0x68;
  __Znwm();
  *(undefined2 *)(puVar1 + 1) = 0;
  *puVar1 = &PTR_FUN_110c47180;
  func_0x000107c2b074(puVar1 + 2,&PTR_DAT_110c48118);
  puVar1[6] = 0x430000003f;
  *(undefined4 *)(puVar1 + 7) = 0x3e0a3d71;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[0xc] = 0;
  plVar2 = *(long **)(param_1 + 0x550);
  *(undefined8 **)(param_1 + 0x550) = puVar1;
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a4aa838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))();
    return;
  }
  return;
}



/* Entry: 10a4aa85c; end: 10a4aa9ef;  */

undefined8 * FUN_10a4aa85c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  param_1[0xab] = &PTR_FUN_110c383b8;
  param_1[0xad] = 0;
  param_1[0xac] = 0;
  *(undefined2 *)(param_1 + 0xae) = 0x100;
  puVar1 = param_1;
  FUN_10a4213cc(param_1,&PTR_PTR_110be1ec0,param_2,param_3,7);
  *puVar1 = &PTR_DAT_110be5eb8;
  puVar1[2] = &PTR_DAT_110bbddd0;
  puVar1[7] = &PTR_FUN_110bbde28;
  puVar1[0xd] = &PTR_FUN_110bbde48;
  puVar1[0xab] = &PTR_FUN_110be6118;
  puVar1[0x16] = &PTR_FUN_110bbdeb8;
  puVar1[0x17] = &PTR_DAT_110bbdee8;
  FUN_10a0040d0(puVar1 + 0x9e,&PTR_PTR_110be1f00);
  *param_1 = &PTR_DAT_110be1a58;
  param_1[2] = &PTR_FUN_110be1ca8;
  param_1[7] = &PTR_DAT_110be1d00;
  param_1[0xd] = &PTR_DAT_110be1d20;
  param_1[0xab] = &PTR_FUN_110be1e78;
  param_1[0x16] = &PTR_DAT_110be1d90;
  param_1[0x17] = &PTR_DAT_110be1dc0;
  param_1[0x9e] = &PTR_DAT_110be1df8;
  *(undefined1 *)(param_1 + 0xa3) = 0;
  param_1[0xa5] = 0;
  param_1[0xa4] = 0;
  param_1[0xa7] = 0;
  param_1[0xa6] = 0;
  param_1[0xa9] = 0;
  param_1[0xa8] = 0;
  param_1[0xaa] = 0;
  FUN_10a4aa618(param_1);
  FUN_10a4aa780(param_1);
  return param_1;
}



/* Entry: 10a4aa9f0; end: 10a4aaa6f;  */

void FUN_10a4aa9f0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  FUN_10a421994();
  lVar5 = *(long *)(param_1 + 0x170);
  plVar1 = (long *)(param_1 + 0x4f0 + *(long *)(*(long *)(param_1 + 0x4f0) + -0x18));
  if ((*(byte *)(plVar1 + 3) & 1) == 0) {
    *(undefined1 *)(plVar1 + 3) = 1;
    plVar1[2] = lVar5;
    if (lVar5 != 0) {
      plVar1[1] = *(long *)(*(long *)(lVar5 + 0x850) + 0x2c);
    }
    (**(code **)(*plVar1 + 0x18))();
  }
  lVar4 = *(long *)(param_1 + 0x508);
  if (*(long *)(lVar4 + 0x20) == 0) {
    *(long *)(lVar4 + 0x30) = lVar5;
    lVar6 = *(long *)(lVar4 + 0x18);
    if (*(long *)(lVar4 + 0x18) != 0) {
      plVar1 = (long *)(*(long *)(lVar4 + 0x18) + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a3cf744(lVar5,&stack0xffffffffffffffd0,&PTR_DAT_110b99f08,param_1 + 0x4f0);
    if (lVar6 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if ((int)lVar5 != 0) {
      *(int *)(lVar4 + 0x38) = (int)lVar5;
      *(undefined1 *)(lVar4 + 0x3c) = 1;
    }
  }
  else if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    FUN_10ae06f30(1,8,&UNK_10f665c8c,&UNK_10f665cc3,0x71,&UNK_10f665d1c,&stack0x00000000);
    return;
  }
  return;
}



/* Entry: 10a4aaa70; end: 10a4aaad3;  */

void FUN_10a4aaa70(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  FUN_10a42238c();
  plVar3 = *(long **)(param_1 + 0x508);
  if (*(char *)((long)plVar3 + 0x3c) == '\x01') {
    FUN_10a3cf620(plVar3[6],(int)plVar3[7],plVar3);
    *(undefined4 *)(plVar3 + 7) = 0;
  }
  else {
    if (*(char *)((long)plVar3 + 0x3c) != '\x02') {
      return;
    }
    lVar1 = *plVar3;
    plVar2 = (long *)plVar3[1];
    *(long **)(lVar1 + 8) = plVar2;
    *plVar2 = lVar1;
    *plVar3 = 0;
    plVar3[1] = 0;
    plVar3[4] = 0;
    plVar3[5] = 0;
  }
  *(undefined1 *)((long)plVar3 + 0x3c) = 0;
  return;
}



/* Entry: 10a4aaad4; end: 10a4aaadb;  */

void FUN_10a4aaad4(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined1 auStack_50 [8];
  long *plStack_48;
  undefined8 uStack_40;
  long lStack_38;
  long *plStack_30;
  undefined1 uStack_21;
  
  *(undefined1 *)(param_1 + 0x1b0) = 3;
  FUN_10a66ac20();
  if (*(long *)(param_1 + 0x4d0) == 0) {
    uStack_40 = *(undefined8 *)(param_1 + 0x108);
    FUN_10a3b17b4(&lStack_38,&uStack_21,&uStack_40);
    FUN_10a38f1dc(param_1 + 0x4d0,&lStack_38);
    if (plStack_30 != (long *)0x0) {
      plVar1 = plStack_30 + 1;
      do {
        lVar5 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_30 + 0x10))(plStack_30);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_30);
      }
    }
    uStack_40 = *(undefined8 *)(param_1 + 0x108);
    lStack_38 = *(long *)(param_1 + 0x4d0);
    if (lStack_38 == 0) {
      lStack_38 = 0;
      plStack_30 = (long *)0x0;
    }
    else {
      plStack_30 = *(long **)(param_1 + 0x4d8);
      if (plStack_30 != (long *)0x0) {
        plVar1 = plStack_30 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
    }
    FUN_10a38f240(auStack_50,&uStack_40,&lStack_38);
    FUN_10a426824(param_1 + -0x68,auStack_50);
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 1;
      do {
        lVar5 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
      }
    }
    plVar1 = plStack_30;
    if (plStack_30 != (long *)0x0) {
      plVar2 = plStack_30 + 1;
      do {
        lVar5 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_30 + 0x10))(plStack_30);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    return;
  }
  return;
}



/* Entry: 10a4aaadc; end: 10a4aacdf;  */

void FUN_10a4aaadc(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  long *plStack_58;
  
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  plVar12 = *(long **)(param_1 + 0x2a8);
  for (plVar11 = *(long **)(param_1 + 0x2a0); plVar11 != plVar12; plVar11 = plVar11 + 2) {
    lVar8 = *plVar11;
    plVar2 = (long *)plVar11[1];
    if (plVar2 != (long *)0x0) {
      plVar13 = plVar2 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar5) {
          *plVar13 = *plVar13 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (lVar8 != 0) {
      puStack_60 = (undefined8 *)(lVar8 + 0x228);
      plStack_58 = (long *)((ulong)plStack_58 & 0xffffffffffffff00);
      FUN_10ab61b40(&puStack_60);
      plVar14 = *(long **)(lVar8 + 0x230);
      for (plVar13 = *(long **)(lVar8 + 0x228); plVar13 != plVar14; plVar13 = plVar13 + 2) {
        puVar6 = (undefined8 *)*plVar13;
        plVar3 = (long *)plVar13[1];
        if (plVar3 != (long *)0x0) {
          plVar1 = plVar3 + 1;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = *plVar1 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        puStack_60 = puVar6;
        plStack_58 = plVar3;
        if ((puVar6 != (undefined8 *)0x0) &&
           (puVar7 = (undefined8 *)puVar6[0x3e], puVar7 != (undefined8 *)0x0)) {
          uVar9 = *(ulong *)(*(long *)(param_1 + 0x550) + 0x28);
          puVar10 = puVar6 + 0x3e;
          do {
            lVar8 = 8;
            if (uVar9 <= (ulong)puVar7[7]) {
              lVar8 = 0;
              puVar10 = puVar7;
            }
            puVar7 = *(undefined8 **)((long)puVar7 + lVar8);
          } while (puVar7 != (undefined8 *)0x0);
          if ((puVar10 != puVar6 + 0x3e) && ((ulong)puVar10[7] <= uVar9)) {
            FUN_10a3324b0(puVar6,*(long *)(param_1 + 0x550) + 0x10);
            FUN_10a069ac8(&uStack_78,puVar6);
          }
        }
        if (plVar3 != (long *)0x0) {
          plVar1 = plVar3 + 1;
          do {
            lVar8 = *plVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = lVar8 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
          }
        }
      }
    }
    if (plVar2 != (long *)0x0) {
      plVar13 = plVar2 + 1;
      do {
        lVar8 = *plVar13;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar5) {
          *plVar13 = lVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
  }
  if ((undefined8 *)(*(long *)(param_1 + 0x550) + 0x50) != &uStack_78) {
    FUN_10a04a8dc();
  }
  puStack_60 = &uStack_78;
  FUN_10a04a568(&puStack_60);
  return;
}



/* Entry: 10a4aace0; end: 10a4aace7;  */

void FUN_10a4aace0(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  long *plStack_58;
  
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  plVar12 = *(long **)(param_1 + 0x240);
  for (plVar11 = *(long **)(param_1 + 0x238); plVar11 != plVar12; plVar11 = plVar11 + 2) {
    lVar8 = *plVar11;
    plVar2 = (long *)plVar11[1];
    if (plVar2 != (long *)0x0) {
      plVar13 = plVar2 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar5) {
          *plVar13 = *plVar13 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (lVar8 != 0) {
      puStack_60 = (undefined8 *)(lVar8 + 0x228);
      plStack_58 = (long *)((ulong)plStack_58 & 0xffffffffffffff00);
      FUN_10ab61b40(&puStack_60);
      plVar14 = *(long **)(lVar8 + 0x230);
      for (plVar13 = *(long **)(lVar8 + 0x228); plVar13 != plVar14; plVar13 = plVar13 + 2) {
        puVar6 = (undefined8 *)*plVar13;
        plVar3 = (long *)plVar13[1];
        if (plVar3 != (long *)0x0) {
          plVar1 = plVar3 + 1;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = *plVar1 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        puStack_60 = puVar6;
        plStack_58 = plVar3;
        if ((puVar6 != (undefined8 *)0x0) &&
           (puVar7 = (undefined8 *)puVar6[0x3e], puVar7 != (undefined8 *)0x0)) {
          uVar9 = *(ulong *)(*(long *)(param_1 + 0x4e8) + 0x28);
          puVar10 = puVar6 + 0x3e;
          do {
            lVar8 = 8;
            if (uVar9 <= (ulong)puVar7[7]) {
              lVar8 = 0;
              puVar10 = puVar7;
            }
            puVar7 = *(undefined8 **)((long)puVar7 + lVar8);
          } while (puVar7 != (undefined8 *)0x0);
          if ((puVar10 != puVar6 + 0x3e) && ((ulong)puVar10[7] <= uVar9)) {
            FUN_10a3324b0(puVar6,*(long *)(param_1 + 0x4e8) + 0x10);
            FUN_10a069ac8(&uStack_78,puVar6);
          }
        }
        if (plVar3 != (long *)0x0) {
          plVar1 = plVar3 + 1;
          do {
            lVar8 = *plVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = lVar8 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
          }
        }
      }
    }
    if (plVar2 != (long *)0x0) {
      plVar13 = plVar2 + 1;
      do {
        lVar8 = *plVar13;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar5) {
          *plVar13 = lVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
  }
  if ((undefined8 *)(*(long *)(param_1 + 0x4e8) + 0x50) != &uStack_78) {
    FUN_10a04a8dc();
  }
  puStack_60 = &uStack_78;
  FUN_10a04a568(&puStack_60);
  return;
}



/* Entry: 10a4aace8; end: 10a4aae2f;  */

void FUN_10a4aace8(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  FUN_10a2d5304();
  if (*(long *)(param_1 + 0x538) == 0) {
    FUN_10a4aa618(param_1);
  }
  FUN_10a4aa780(param_1);
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110be1f28,*(undefined1 *)(param_1 + 0x518));
  *(char *)(param_1 + 0x518) = (char)plVar1;
  if ((int)plVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x170);
    func_0x000107c2b054(auStack_48,&UNK_10f65c626);
    if (lVar2 != 0) {
      FUN_10a76c080(*(undefined8 *)(lVar2 + 0x8d8),auStack_48);
    }
    if (cStack_31 < '\0') {
      __ZdlPv(auStack_48[0]);
    }
  }
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110be6b68);
  if ((int)plVar1 != 0) {
    (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110be6b68);
    (**(code **)(*param_2 + 0x1e0))(param_2,*(undefined8 *)(param_1 + 0x550));
    (**(code **)(*param_2 + 0x1e0))(param_2,*(undefined8 *)(param_1 + 0x548));
    (**(code **)(*param_2 + 0x220))(param_2);
  }
  (**(code **)(*param_2 + 0x1f0))(param_2,&PTR_DAT_110be11e8,*(undefined8 *)(param_1 + 0x538));
  return;
}



/* Entry: 10a4aae30; end: 10a4aaedf;  */

void FUN_10a4aae30(long param_1,long *param_2)

{
  FUN_10a2d5884();
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110be1f28,*(undefined1 *)(param_1 + 0x518));
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110be6b68);
  (**(code **)(*param_2 + 0x120))(param_2,*(undefined8 *)(param_1 + 0x550),0);
  (**(code **)(*param_2 + 0x120))(param_2,*(undefined8 *)(param_1 + 0x548),0);
  (**(code **)(*param_2 + 0x20))(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010a4aaedc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x118))(param_2,&PTR_DAT_110be11e8,*(undefined8 *)(param_1 + 0x538));
  return;
}



/* Entry: 10a4aaee0; end: 10a4ab1c7;  */

void FUN_10a4aaee0(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int *piVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  long lVar14;
  long lVar15;
  long unaff_x22;
  int *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  undefined8 unaff_x27;
  undefined8 *unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar16;
  
code_r0x00010a4aaee0:
  plVar8 = param_1;
  *(undefined8 **)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
  *(long *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(long **)((long)register0x00000008 + -0x48) = unaff_x25;
  *(long **)((long)register0x00000008 + -0x40) = unaff_x24;
  *(int **)((long)register0x00000008 + -0x38) = unaff_x23;
  *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
  lVar10 = *(long *)(*(long *)(*(long *)(*(long *)(plVar8[0x2d] + 0x120) + 0x8c0) + 0x18) + 0x68);
  if (lVar10 != 0) {
    unaff_x23 = *(int **)(lVar10 + 0x28);
    piVar5 = *(int **)(lVar10 + 0x30);
    if (unaff_x23 != piVar5) {
      while ((*unaff_x23 != 0 || (unaff_x23[1] != (int)*(short *)(plVar8[0xa7] + 0x10a)))) {
        unaff_x23 = unaff_x23 + 0x88;
        if (unaff_x23 == piVar5) {
          return;
        }
      }
    }
    if ((unaff_x23 != piVar5) && (unaff_x23 != (int *)0x0)) {
      unaff_x20 = plVar8 + 0xa4;
      lVar10 = plVar8[0xa5];
      lVar14 = plVar8[0xa4];
      while (lVar10 != lVar14) {
        lVar10 = lVar10 + -0x10;
        func_0x00010a190e10();
      }
      plVar8[0xa5] = lVar14;
      plVar9 = (long *)plVar8[0xaa];
      (**(code **)(*plVar9 + 0x40))();
      if (((ulong)plVar9 & 1) == 0) {
        plVar9 = (long *)plVar8[0xa9];
        (**(code **)(*plVar9 + 0x40))();
        if ((int)plVar9 != 0) goto LAB_10a4aafac;
      }
      else {
LAB_10a4aafac:
        unaff_x24 = (long *)plVar8[0x54];
        unaff_x25 = (long *)plVar8[0x55];
        if (unaff_x24 != unaff_x25) {
          unaff_x27 = 0xfffffffffffffff;
          do {
            lVar10 = *unaff_x24;
            if (lVar10 != 0) {
              unaff_x28 = *(undefined8 **)(lVar10 + 0x228);
              puVar11 = *(undefined8 **)(lVar10 + 0x230);
              unaff_x22 = (long)puVar11 - (long)unaff_x28;
              if (0 < unaff_x22 >> 4) {
                unaff_x21 = (undefined8 *)plVar8[0xa5];
                if (plVar8[0xa6] - (long)unaff_x21 < unaff_x22) {
                  unaff_x26 = (long)unaff_x21 - plVar8[0xa4];
                  uVar2 = (unaff_x22 >> 4) + (unaff_x26 >> 4);
                  if (uVar2 >> 0x3c != 0) goto LAB_10a4ab1c4;
                  uVar12 = plVar8[0xa6] - plVar8[0xa4];
                  uVar13 = (long)uVar12 >> 3;
                  if (uVar13 <= uVar2) {
                    uVar13 = uVar2;
                  }
                  if (0x7fffffffffffffef < uVar12) {
                    uVar13 = 0xfffffffffffffff;
                  }
                  *(long **)((long)register0x00000008 + -0x68) = unaff_x20;
                  if (uVar13 == 0) {
                    plVar9 = (long *)0x0;
                  }
                  else {
                    plVar9 = unaff_x20;
                    FUN_10a4afcd8();
                  }
                  puVar3 = (undefined8 *)((long)plVar9 + unaff_x26);
                  *(long **)((long)register0x00000008 + -0x70) = plVar9 + uVar13 * 2;
                  puVar4 = (undefined8 *)((long)puVar3 + unaff_x22);
                  puVar11 = puVar3;
                  do {
                    lVar10 = unaff_x28[1];
                    uVar16 = *unaff_x28;
                    puVar11[1] = unaff_x28[1];
                    *puVar11 = uVar16;
                    if (lVar10 != 0) {
                      plVar9 = (long *)(lVar10 + 8);
                      do {
                        cVar6 = '\x01';
                        bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                        if (bVar7) {
                          *plVar9 = *plVar9 + 1;
                          cVar6 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar6 != '\0');
                    }
                    puVar11 = puVar11 + 2;
                    unaff_x28 = unaff_x28 + 2;
                  } while (puVar11 != puVar4);
                  _memcpy(puVar4,unaff_x21,plVar8[0xa5] - (long)unaff_x21);
                  lVar10 = plVar8[0xa5];
                  plVar8[0xa5] = (long)unaff_x21;
                  lVar15 = (long)puVar3 - ((long)unaff_x21 - plVar8[0xa4]);
                  _memcpy(lVar15);
                  lVar14 = plVar8[0xa4];
                  plVar8[0xa4] = lVar15;
                  plVar8[0xa5] = (long)((long)puVar4 + (lVar10 - (long)unaff_x21));
                  lVar10 = plVar8[0xa6];
                  plVar8[0xa6] = *(long *)((long)register0x00000008 + -0x70);
                  *(long *)((long)register0x00000008 + -0x78) = lVar14;
                  *(long *)((long)register0x00000008 + -0x70) = lVar10;
                  *(long *)((long)register0x00000008 + -0x88) = lVar14;
                  *(long *)((long)register0x00000008 + -0x80) = lVar14;
                  plVar9 = (long *)((long)register0x00000008 + -0x88);
                  func_0x00010a4afd0c();
                }
                else {
                  for (; unaff_x28 != puVar11; unaff_x28 = unaff_x28 + 2) {
                    lVar10 = unaff_x28[1];
                    uVar16 = *unaff_x28;
                    unaff_x21[1] = unaff_x28[1];
                    *unaff_x21 = uVar16;
                    if (lVar10 != 0) {
                      plVar1 = (long *)(lVar10 + 8);
                      do {
                        cVar6 = '\x01';
                        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                        if (bVar7) {
                          *plVar1 = *plVar1 + 1;
                          cVar6 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar6 != '\0');
                    }
                    unaff_x21 = unaff_x21 + 2;
                  }
                  plVar8[0xa5] = (long)unaff_x21;
                }
              }
            }
            unaff_x24 = unaff_x24 + 2;
            if (unaff_x24 == unaff_x25) break;
          } while( true );
        }
      }
      plVar9 = (long *)plVar8[0xaa];
      (**(code **)(*plVar9 + 0x40))();
      if ((int)plVar9 != 0) {
        (**(code **)(*(long *)plVar8[0xaa] + 0x38))((long *)plVar8[0xaa],unaff_x23 + 2,unaff_x20);
      }
      plVar9 = (long *)plVar8[0xa9];
      (**(code **)(*plVar9 + 0x40))();
      if ((int)plVar9 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010a4ab1a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)plVar8[0xa9] + 0x38))((long *)plVar8[0xa9],unaff_x23 + 2,unaff_x20);
        return;
      }
    }
  }
  return;
LAB_10a4ab1c4:
  unaff_x30 = FUN_10a4ab1c8;
  FUN_10a4afcc4();
  register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x90);
  param_1 = plVar9 + -0xd;
  unaff_x19 = plVar8;
  goto code_r0x00010a4aaee0;
}


