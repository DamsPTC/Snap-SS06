/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ac69e78; end: 10ac69efb;  */

void FUN_10ac69e78(long param_1,long *param_2)

{
  (**(code **)(*param_2 + 0x248))(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350)
            (param_1 + 0x78,param_2);
  return;
}



/* Entry: 10ac69efc; end: 10ac69eff;  */

void FUN_10ac69efc(void)

{
  return;
}



/* Entry: 10ac69f00; end: 10ac69f27;  */

void FUN_10ac69f00(void)

{
  FUN_10a00946c(&UNK_10f69f871);
  FUN_10a00946c(&UNK_10f69f871);
  return;
}



/* Entry: 10ac69f28; end: 10ac69fc3;  */

void FUN_10ac69f28(void)

{
  return;
}



/* Entry: 10ac69fc4; end: 10ac6a017;  */

void FUN_10ac69fc4(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined8 uStack_1c;
  
  uStack_58 = 0;
  uStack_50 = 0xffffffff00000002;
  uStack_48 = 0xffffffff;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_20 = 0;
  uStack_1c = 0x13c00000124;
  FUN_10ac6a018(param_1,&uStack_58);
  FUN_10ac80af4();
  return;
}



/* Entry: 10ac6a018; end: 10ac6a0ef;  */

/* WARNING: Removing unreachable block (ram,0x00010ac6a0b0) */

undefined1  [16] FUN_10ac6a018(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f69f898,0x1c);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10ac809f8(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10ac6a0f0; end: 10ac6a1d7;  */

undefined8 * FUN_10ac6a0f0(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  param_1[0x51] = &PTR_FUN_110c383b8;
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  *(undefined2 *)(param_1 + 0x54) = 0x100;
  puVar1 = param_1;
  FUN_10a1da04c(param_1,&PTR_PTR_110c61580,param_2);
  *puVar1 = &PTR_DAT_110c61338;
  puVar1[2] = &PTR_FUN_110c61468;
  puVar1[5] = &PTR_DAT_110c61498;
  puVar1[0x51] = &PTR_DAT_110c61540;
  puVar1[0x15] = &PTR_FUN_110c614f0;
  func_0x000107c2b054(auStack_38,&UNK_10f69ee75);
  if (param_2 != 0) {
    FUN_10a76c080(*(undefined8 *)(param_2 + 0x8d8),auStack_38);
  }
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return param_1;
}



/* Entry: 10ac6a1d8; end: 10ac6a1e3;  */

long FUN_10ac6a1d8(long param_1)

{
  return param_1 + 0x228;
}



/* Entry: 10ac6a1e4; end: 10ac6a227;  */

void FUN_10ac6a1e4(undefined8 param_1,long *param_2)

{
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_20 = &UNK_10f69f898;
  uStack_18 = 0x1c;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110c66928,&puStack_20);
  return;
}



/* Entry: 10ac6a228; end: 10ac6a3a3;  */

void FUN_10ac6a228(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_88;
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
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f69ee9e;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&puStack_88);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_70 & 0xffffffff,uStack_70._4_4_,uStack_38,uStack_68 & 0xffffffff,
                uStack_68._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,puStack_88);
  }
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f69eeae;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10ac6a3a4(param_1,&puStack_88,1);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f69eeb8;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10ac6a3a4();
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f69eec6;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10ac6a3a4();
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f69eed0;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10ac6a3a4();
  FUN_10a003ff4();
  return;
}



/* Entry: 10ac6a3a4; end: 10ac6a447;  */

undefined8 * FUN_10ac6a3a4(undefined8 *param_1,undefined8 *param_2,int param_3)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10ac6a448);
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



/* Entry: 10ac6a448; end: 10ac6a46f;  */

undefined1  [16] FUN_10ac6a448(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x23;
  auVar1._0_8_ = &UNK_10f69f8b5;
  return auVar1;
}



/* Entry: 10ac6a470; end: 10ac6abc3;  */

void FUN_10ac6a470(ulong param_1)

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
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f69f8b5,0x23);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c67e58;
  pppuVar2 = (undefined8 ***)&UNK_10f69e32c;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xbffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xb);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c67e58;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110bb3788;
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
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac6aba4;
    FUN_10a054dac(param_1,&UNK_10f672d6d,FUN_10ac80bb0,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac6aba4;
    FUN_10a054dac(param_1,&UNK_10f672d7d,FUN_10ac80ccc,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac6aba4;
    FUN_10a054dac(param_1,&UNK_10f69eee7,FUN_10ac80d8c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac6aba4;
    FUN_10a054dac(param_1,&UNK_10f69ef00,FUN_10ac80f24,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f69ef16,FUN_10ac80fdc,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f69ef2a,FUN_10ac810fc,FUN_10ac811b4);
  }
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&UNK_10f69ef3e;
  puStack_78 = &UNK_10f69e32c;
  uStack_70 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0xa0;
  uStack_50._0_4_ = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  uVar7 = param_1;
  FUN_10ac812fc(param_1,&ppuStack_a0);
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = (undefined8 **)&UNK_10f69ef4b;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  FUN_10ac812fc();
  FUN_10a0051e8();
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f69ef5f,FUN_10ac81408,FUN_10ac814c0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f69ef68,FUN_10ac81578,FUN_10ac81630);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f69ef79,FUN_10ac8174c,FUN_10ac8185c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,"contentType",FUN_10ac81914,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f69ef87,FUN_10ac819e8,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f69ef94,FUN_10ac81b28,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f69efa3,FUN_10ac81c20,FUN_10ac81cdc);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f69efb9,FUN_10ac81db4,FUN_10ac81e70);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f69efcf,FUN_10ac81f3c,FUN_10ac81ff8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f69efe9,FUN_10ac820d0,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f69eff2,FUN_10ac821a0,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f651ec4,FUN_10ac822b4,FUN_10ac823ec);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f69effc,FUN_10ac824b4,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f69f006,FUN_10ac825f4,FUN_10ac82704);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    puStack_78 = *(undefined **)(lVar3 + -0x40);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f69f8b5,0x23);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10ac6aba4:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10ac6aba8);
  (*pcVar6)();
}



/* Entry: 10ac6abc4; end: 10ac6ad13;  */

void FUN_10ac6abc4(ulong param_1)

{
  ulong uVar1;
  char *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "MediaContentType";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&pcStack_98);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_80 & 0xffffffff,uStack_80._4_4_,uStack_4c._4_4_,
                uStack_78 & 0xffffffff,uStack_78._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,pcStack_98);
  }
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "None";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10ac6ad14(param_1,&pcStack_98,0);
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "Image";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10ac6ad14();
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "Video";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10ac6ad14();
  FUN_10a003ff4();
  return;
}



/* Entry: 10ac6ad14; end: 10ac6adb7;  */

undefined8 * FUN_10ac6ad14(undefined8 *param_1,undefined8 *param_2,int param_3)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10ac6adb8);
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



/* Entry: 10ac6adb8; end: 10ac6b02f;  */

long * FUN_10ac6adb8(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 uStack_49;
  long *plStack_48;
  
  plVar1 = param_1;
  FUN_10a1da04c(param_1,param_2 + 1);
  plVar1[0x51] = (long)&PTR_FUN_110c19358;
  plVar1[0x52] = (long)&PTR_FUN_110c5f1c8;
  FUN_10aad6f70(plVar1 + 0x53);
  param_1[0x9b] = 0;
  param_1[0x98] = 0;
  param_1[0x97] = 0;
  param_1[0x9a] = 0;
  param_1[0x99] = 0;
  FUN_10a03c0d0(param_1 + 0x9c);
  lVar2 = *param_2;
  *param_1 = lVar2;
  param_1[2] = (long)&PTR_FUN_110c61720;
  param_1[5] = (long)&PTR_DAT_110c61750;
  *(long *)((long)param_1 + *(long *)(lVar2 + -0x18)) = param_2[5];
  param_1[0xa1] = 0;
  param_1[0xa0] = 0x3f800000;
  param_1[0x15] = (long)&PTR_DAT_110c617a8;
  param_1[0x51] = (long)&PTR_DAT_110c617c8;
  param_1[0x52] = (long)&PTR_DAT_110c61810;
  param_1[0x9c] = (long)&PTR_DAT_110c61838;
  param_1[0xa3] = 0;
  param_1[0xa2] = 0x3f800000;
  *(undefined4 *)(param_1 + 0xa4) = 0x3f800000;
  *(undefined4 *)((long)param_1 + 0x5bc) = 0;
  *(undefined8 *)((long)param_1 + 0x52c) = 0;
  *(undefined8 *)((long)param_1 + 0x524) = 0;
  *(undefined8 *)((long)param_1 + 0x53c) = 0;
  *(undefined8 *)((long)param_1 + 0x534) = 0;
  *(undefined8 *)((long)param_1 + 0x54c) = 0;
  *(undefined8 *)((long)param_1 + 0x544) = 0;
  *(undefined8 *)((long)param_1 + 0x55c) = 0;
  *(undefined8 *)((long)param_1 + 0x554) = 0;
  *(undefined8 *)((long)param_1 + 0x56c) = 0;
  *(undefined8 *)((long)param_1 + 0x564) = 0;
  *(undefined8 *)((long)param_1 + 0x57a) = 0;
  *(undefined8 *)((long)param_1 + 0x572) = 0;
  *(undefined1 *)(param_1 + 0xb7) = 0;
  param_1[0xb4] = 0;
  param_1[0xb3] = 0;
  param_1[0xb6] = 0;
  param_1[0xb5] = 0;
  param_1[0xb2] = 0;
  param_1[0xb1] = 0;
  param_1[0xb8] = 0x3f2000003f200000;
  param_1[0xbb] = 0;
  param_1[0xba] = 0;
  param_1[0xb9] = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x5e4) = 0;
  param_1[0xbe] = 0;
  param_1[0xbd] = 0;
  param_1[0xc0] = 0;
  param_1[0xbf] = 0;
  param_1[0xc2] = 0;
  param_1[0xc1] = 0;
  FUN_10a05a5d4(param_1 + 0xc3,&uStack_49);
  *(undefined1 *)((long)param_1 + 0x62c) = 0;
  *(undefined4 *)(param_1 + 0xc5) = 5;
  *(undefined1 *)(param_1 + 0xb7) = 1;
  FUN_10a5ae998(param_1[0x9d],&PTR_DAT_110b9f988,param_3,param_1 + 0x9c);
  plStack_48 = param_1 + 0x51;
  FUN_10a7c9810(*(long *)(param_1[0x12] + 3000) + 0x78,&plStack_48,&plStack_48);
  *(bool *)((long)param_1 + 0x62c) = 0x13d < *(int *)(*(long *)(param_3 + 0xa20) + 0x18);
  return param_1;
}



/* Entry: 10ac6b030; end: 10ac6b2cb;  */

undefined8 * FUN_10ac6b030(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined1 uStack_49;
  undefined8 *puStack_48;
  
  param_1[0xc6] = &PTR_FUN_110c383b8;
  *(undefined2 *)(param_1 + 0xc9) = 0x100;
  param_1[200] = 0;
  param_1[199] = 0;
  puVar1 = param_1;
  FUN_10a1da04c(param_1,&PTR_PTR_110c618d0,param_2);
  puVar1[0x51] = &PTR_FUN_110c19358;
  puVar1[0x52] = &PTR_FUN_110c5f1c8;
  FUN_10aad6f70(puVar1 + 0x53);
  param_1[0x9b] = 0;
  param_1[0x98] = 0;
  param_1[0x97] = 0;
  param_1[0x9a] = 0;
  param_1[0x99] = 0;
  FUN_10a03c0d0(param_1 + 0x9c);
  param_1[0xa1] = 0;
  param_1[0xa0] = 0x3f800000;
  *param_1 = &PTR_FUN_110c615c0;
  param_1[2] = &PTR_FUN_110c61720;
  param_1[5] = &PTR_DAT_110c61750;
  param_1[0xc6] = &PTR_DAT_110c61890;
  param_1[0x15] = &PTR_DAT_110c617a8;
  param_1[0x51] = &PTR_DAT_110c617c8;
  param_1[0x52] = &PTR_DAT_110c61810;
  param_1[0x9c] = &PTR_DAT_110c61838;
  param_1[0xa3] = 0;
  param_1[0xa2] = 0x3f800000;
  *(undefined4 *)(param_1 + 0xa4) = 0x3f800000;
  *(undefined4 *)((long)param_1 + 0x5bc) = 0;
  *(undefined8 *)((long)param_1 + 0x52c) = 0;
  *(undefined8 *)((long)param_1 + 0x524) = 0;
  *(undefined8 *)((long)param_1 + 0x53c) = 0;
  *(undefined8 *)((long)param_1 + 0x534) = 0;
  *(undefined8 *)((long)param_1 + 0x54c) = 0;
  *(undefined8 *)((long)param_1 + 0x544) = 0;
  *(undefined8 *)((long)param_1 + 0x55c) = 0;
  *(undefined8 *)((long)param_1 + 0x554) = 0;
  *(undefined8 *)((long)param_1 + 0x56c) = 0;
  *(undefined8 *)((long)param_1 + 0x564) = 0;
  *(undefined8 *)((long)param_1 + 0x57a) = 0;
  *(undefined8 *)((long)param_1 + 0x572) = 0;
  *(undefined1 *)(param_1 + 0xb7) = 0;
  param_1[0xb4] = 0;
  param_1[0xb3] = 0;
  param_1[0xb6] = 0;
  param_1[0xb5] = 0;
  param_1[0xb2] = 0;
  param_1[0xb1] = 0;
  param_1[0xb8] = 0x3f2000003f200000;
  param_1[0xbb] = 0;
  param_1[0xba] = 0;
  param_1[0xb9] = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x5e4) = 0;
  param_1[0xbe] = 0;
  param_1[0xbd] = 0;
  param_1[0xc0] = 0;
  param_1[0xbf] = 0;
  param_1[0xc2] = 0;
  param_1[0xc1] = 0;
  FUN_10a05a5d4(param_1 + 0xc3,&uStack_49);
  *(undefined1 *)((long)param_1 + 0x62c) = 0;
  *(undefined4 *)(param_1 + 0xc5) = 5;
  *(undefined1 *)(param_1 + 0xb7) = 1;
  FUN_10a5ae998(param_1[0x9d],&PTR_DAT_110b9f988,param_2,param_1 + 0x9c);
  puStack_48 = param_1 + 0x51;
  FUN_10a7c9810(*(long *)(param_1[0x12] + 3000) + 0x78,&puStack_48,&puStack_48);
  *(bool *)((long)param_1 + 0x62c) = 0x13d < *(int *)(*(long *)(param_2 + 0xa20) + 0x18);
  return param_1;
}



/* Entry: 10ac6b2cc; end: 10ac6b52f;  */

void FUN_10ac6b2cc(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  uint uStack_74;
  undefined *puStack_70;
  undefined8 uStack_68;
  long lStack_60;
  ulong uStack_58;
  long lStack_50;
  long lStack_48;
  undefined4 uStack_40;
  
  uStack_58 = 0;
  lStack_60 = 0;
  lStack_48 = 0;
  lStack_50 = 0;
  uStack_40 = 0x3f800000;
  func_0x00010a756d0c(&lStack_60,4);
  uVar1 = *(uint *)(param_2 + 0x628);
  if ((uVar1 >> 3 & 1) == 0) {
    if ((uVar1 >> 1 & 1) == 0) {
      if ((uVar1 & 1) != 0) {
        puStack_70 = &DAT_10f69f8d9;
        uStack_68 = 0x14;
        uStack_74 = uStack_74 & 0xffffff00;
        FUN_10a756f18(&lStack_60,&puStack_70,&uStack_74);
        puStack_70 = &DAT_10f674ac6;
        uStack_68 = 0xc;
        uStack_74 = CONCAT31(uStack_74._1_3_,1);
        FUN_10a756f18(&lStack_60,&puStack_70,&uStack_74);
      }
    }
    else {
      puStack_70 = &DAT_10f69f8d9;
      uStack_68 = 0x14;
      uStack_74._0_1_ = 1;
      FUN_10a756f18(&lStack_60,&puStack_70,&uStack_74);
      puStack_70 = &DAT_10f674ac6;
      uStack_68 = 0xc;
      uStack_74 = CONCAT31(uStack_74._1_3_,1);
      FUN_10a756f18(&lStack_60,&puStack_70,&uStack_74);
    }
  }
  else {
    puStack_70 = &DAT_10f69f8d9;
    uStack_68 = 0x14;
    uStack_74._0_1_ = 1;
    FUN_10a756f18(&lStack_60,&puStack_70,&uStack_74);
    puStack_70 = &DAT_10f69f8ee;
    uStack_68 = 0x1a;
    uStack_74._0_1_ = 1;
    FUN_10a756f18(&lStack_60,&puStack_70,&uStack_74);
    puStack_70 = &DAT_10f674ac6;
    uStack_68 = 0xc;
    uStack_74 = CONCAT31(uStack_74._1_3_,1);
    FUN_10a756f18(&lStack_60,&puStack_70,&uStack_74);
  }
  if ((*(byte *)(param_2 + 0x628) >> 2 & 1) != 0) {
    puStack_70 = &DAT_10f674ad3;
    uStack_68 = 0xc;
    uStack_74 = CONCAT31(uStack_74._1_3_,1);
    FUN_10a756f18(&lStack_60,&puStack_70,&uStack_74);
  }
  puStack_70 = &DAT_10f674ae0;
  uStack_68 = 0x17;
  uStack_74 = 1;
  FUN_10a7573c0(&lStack_60,&puStack_70,&uStack_74);
  uVar4 = uStack_58;
  lVar3 = lStack_60;
  lStack_60 = 0;
  uStack_58 = 0;
  *param_1 = lVar3;
  param_1[1] = uVar4;
  param_1[2] = lStack_50;
  param_1[3] = lStack_48;
  *(undefined4 *)(param_1 + 4) = uStack_40;
  if (lStack_48 != 0) {
    uVar5 = *(ulong *)(lStack_50 + 8);
    if ((uVar4 & uVar4 - 1) == 0) {
      uVar5 = uVar5 & uVar4 - 1;
    }
    else if (uVar4 <= uVar5) {
      uVar2 = 0;
      if (uVar4 != 0) {
        uVar2 = uVar5 / uVar4;
      }
      uVar5 = uVar5 - uVar2 * uVar4;
    }
    *(long **)(lVar3 + uVar5 * 8) = param_1 + 2;
    lStack_50 = 0;
    lStack_48 = 0;
  }
  FUN_10a7575a8(&lStack_60);
  return;
}



/* Entry: 10ac6b530; end: 10ac6b673;  */

void FUN_10ac6b530(float *param_1,long param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  
  if ((*(char *)(param_2 + 0x5b8) == '\x01') && (*(long **)(param_2 + 0x608) != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00010ac6b574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_2 + 0x608) + 0x90))(param_1);
    return;
  }
  if (*(long **)(param_2 + 0x98) == (long *)0x0) {
    fStack_30 = *(float *)(param_2 + 0x224);
    fStack_48 = (float)*(undefined8 *)(param_2 + 0x20c);
    fStack_44 = (float)((ulong)*(undefined8 *)(param_2 + 0x20c) >> 0x20);
    fStack_50 = (float)*(undefined8 *)(param_2 + 0x204);
    fStack_4c = (float)((ulong)*(undefined8 *)(param_2 + 0x204) >> 0x20);
    fStack_38 = (float)*(undefined8 *)(param_2 + 0x21c);
    fStack_34 = (float)((ulong)*(undefined8 *)(param_2 + 0x21c) >> 0x20);
    fStack_40 = (float)*(undefined8 *)(param_2 + 0x214);
    fStack_3c = (float)((ulong)*(undefined8 *)(param_2 + 0x214) >> 0x20);
  }
  else {
    (**(code **)(**(long **)(param_2 + 0x98) + 0x90))(&fStack_50);
  }
  fVar3 = *(float *)(param_2 + 0x518);
  fVar5 = *(float *)(param_2 + 0x51c);
  fVar4 = *(float *)(param_2 + 0x520);
  auVar12._4_4_ = fStack_4c;
  auVar12._0_4_ = fStack_50;
  auVar12._8_4_ = fStack_48;
  auVar12._12_4_ = fStack_44;
  auVar2._4_4_ = fStack_3c;
  auVar2._0_4_ = fStack_40;
  auVar2._8_4_ = fStack_38;
  auVar2._12_4_ = fStack_34;
  auVar14._4_4_ = fStack_3c;
  auVar14._0_4_ = fStack_40;
  auVar14._8_4_ = fStack_38;
  auVar14._12_4_ = fStack_34;
  uVar10 = *(undefined8 *)(param_2 + 0x508);
  fVar11 = *(float *)(param_2 + 0x50c);
  uVar1 = *(ulong *)(param_2 + 0x510);
  auVar12 = NEON_ext(auVar12,auVar14,0xc,1);
  uVar8 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x500) >> 0x20);
  auVar13._4_4_ = uVar8;
  auVar13._0_4_ = uVar8;
  auVar13._8_4_ = uVar8;
  auVar13._12_4_ = uVar8;
  fVar15 = *(float *)(param_2 + 0x514);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar1;
  auVar14 = NEON_ext(auVar13,auVar6,4,1);
  fVar7 = (float)*(undefined8 *)(param_2 + 0x500);
  auVar6 = NEON_rev64(auVar2,4);
  fVar9 = (float)uVar10;
  param_1[2] = auVar12._8_4_ * auVar14._8_4_ + fVar7 * fStack_48 + fVar9 * fStack_30;
  param_1[3] = fStack_44 * auVar14._12_4_ + (float)((ulong)uVar10 >> 0x20) * fStack_50 +
               (float)(uVar1 >> 0x20) * auVar6._12_4_;
  *param_1 = auVar12._0_4_ * auVar14._0_4_ + fVar7 * fStack_50 + fVar9 * fStack_38;
  param_1[1] = auVar12._4_4_ * auVar14._4_4_ + fVar7 * fStack_4c + fVar9 * auVar6._8_4_;
  param_1[4] = fStack_40 * (float)uVar1 + fVar11 * fStack_4c + fVar15 * fStack_34;
  param_1[5] = fStack_3c * (float)uVar1 + fVar11 * fStack_48 + fVar15 * fStack_30;
  param_1[6] = fStack_44 * fVar5 + fVar3 * fStack_50 + fVar4 * fStack_38;
  param_1[7] = fVar5 * fStack_40 + fVar3 * fStack_4c + fVar4 * fStack_34;
  param_1[8] = fStack_3c * fVar5 + fVar3 * fStack_48 + fVar4 * fStack_30;
  return;
}



/* Entry: 10ac6b674; end: 10ac6b6db;  */

long * FUN_10ac6b674(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  if (((char)param_1[0xb7] == '\x01') && (plVar4 = (long *)param_1[0xc1], plVar4 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00010ac6b694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0xb0))(plVar4);
    return plVar4;
  }
  if ((*(byte *)((long)param_1 + 0x524) & 1) == 0) {
    plVar4 = (long *)param_1[0x13];
    if (plVar4 == (long *)0x0) {
      (**(code **)(*param_1 + 0x108))(param_1);
      plVar4 = (long *)(ulong)*(uint *)(param_1 + 0x3d);
    }
    else {
      plVar6 = (long *)param_1[0x14];
      if (plVar6 != (long *)0x0) {
        plVar1 = plVar6 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      (**(code **)(*plVar4 + 0xb0))();
      if (plVar6 != (long *)0x0) {
        plVar1 = plVar6 + 1;
        do {
          lVar5 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar5 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
    }
    return plVar4;
  }
  plVar4 = (long *)param_1[0x13];
  if (plVar4 == (long *)0x0) {
    (**(code **)(*param_1 + 0x108))(param_1);
    plVar4 = (long *)(ulong)*(uint *)((long)param_1 + 0x1ec);
  }
  else {
    plVar6 = (long *)param_1[0x14];
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    (**(code **)(*plVar4 + 0xb8))();
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  return plVar4;
}



/* Entry: 10ac6b6dc; end: 10ac6ba07;  */

void FUN_10ac6b6dc(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  FUN_10ac364c4(param_1 + 0x52);
  param_1[0xba] = param_1[0xb9];
  *(undefined4 *)(param_1 + 0xbc) = 0xffffffff;
  uStack_30 = 0;
  plStack_28 = (long *)0x0;
  FUN_10ab76cb8(param_1 + 0xbf,&uStack_30);
  plVar4 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  uStack_30 = 0;
  plStack_28 = (long *)0x0;
  func_0x00010ac6b7c0(param_1 + 0xc1,&uStack_30);
  plVar4 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  (**(code **)(*param_1 + 0x98))(param_1,&UNK_10e482b24);
  return;
}



/* Entry: 10ac6ba08; end: 10ac6c10f;  */

/* WARNING: Removing unreachable block (ram,0x00010ac6c24c) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c25c) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c18c) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c198) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c1a0) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c1ac) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c1b0) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c1b4) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c1c0) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c1c4) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c1c8) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c1d4) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c284) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c2e4) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c2ec) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c2fc) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c294) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c2a0) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c2b0) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c2bc) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c2c4) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c2d8) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c1f0) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c1fc) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c214) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c52c) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c21c) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c224) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c234) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c300) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c384) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c38c) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c394) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c398) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c3a0) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c3a8) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c344) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c350) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c358) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c360) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c364) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c36c) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c374) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c3ac) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c3b4) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c3bc) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c3c0) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c3d8) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c3ec) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c3f0) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c3f8) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c400) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c404) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c41c) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c444) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c448) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c450) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c458) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c46c) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c470) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c478) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c480) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c484) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c49c) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c4a8) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c4b8) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c4bc) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c4c4) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c4cc) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c4e0) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c4e4) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c4ec) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c4f4) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c4f8) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c510) */

void FUN_10ac6ba08(float param_1,float param_2,undefined8 param_3,long param_4,long *param_5,
                  undefined8 param_6)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  long *plVar9;
  byte *pbVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  long lStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  char cStack_91;
  undefined8 uStack_90;
  char cStack_79;
  long *plStack_70;
  long *plStack_68;
  
  FUN_10ac6b6dc();
  uStack_a8 = 0;
  plStack_a0 = (long *)0x0;
  FUN_10ab76cb8(param_4 + 0x588,&uStack_a8);
  plVar11 = plStack_a0;
  if (plStack_a0 != (long *)0x0) {
    plVar8 = plStack_a0 + 1;
    do {
      lVar14 = *plVar8;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar7) {
        *plVar8 = lVar14 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  bVar4 = *(byte *)((long)param_5 + 0x17);
  uVar2 = param_5[1];
  if (-1 < (char)bVar4) {
    uVar2 = (ulong)bVar4;
  }
  if (uVar2 == 0) {
LAB_10ac6bc70:
    if (*(long *)(param_4 + 0x540) == 0) {
      return;
    }
    fVar16 = 1.0;
    if (param_2 <= 1.0) {
      fVar16 = param_2;
    }
    fVar17 = 0.0;
    if (0.0 <= param_2) {
      fVar17 = fVar16;
    }
    if (*(long *)(param_4 + 0x550) == 0) {
      lVar14 = *(long *)(param_4 + 0x560);
      fVar16 = 1.0;
      if (param_1 <= 1.0) {
        fVar16 = param_1;
      }
      fVar15 = 0.0;
      if (0.0 <= param_1) {
        fVar15 = fVar16;
      }
      *(float *)(lVar14 + 0x350) = fVar15;
      *(byte *)(lVar14 + 0x348) = *(byte *)(lVar14 + 0x348) | 4;
      func_0x00010ac8a2ec(lVar14 + 0x348);
      lVar14 = *(long *)(param_4 + 0x560);
      *(float *)(lVar14 + 0x354) = fVar17;
      *(byte *)(lVar14 + 0x348) = *(byte *)(lVar14 + 0x348) | 4;
      func_0x00010ac8a2ec(lVar14 + 0x348);
      lVar14 = *(long *)(param_4 + 0x560) + 0x348;
    }
    else {
      pbVar10 = *(byte **)(*(long *)(param_4 + 0x550) + 0x388);
      fVar16 = 1.0;
      if (param_1 <= 1.0) {
        fVar16 = param_1;
      }
      fVar15 = 0.0;
      if (0.0 <= param_1) {
        fVar15 = fVar16;
      }
      *(float *)(pbVar10 + 8) = fVar15;
      *pbVar10 = *pbVar10 | 4;
      func_0x00010ac8a2ec();
      pbVar10 = *(byte **)(*(long *)(param_4 + 0x550) + 0x388);
      *(float *)(pbVar10 + 0xc) = fVar17;
      *pbVar10 = *pbVar10 | 4;
      func_0x00010ac8a2ec();
      lVar14 = *(long *)(*(long *)(param_4 + 0x550) + 0x388);
    }
    func_0x00010ac8a42c(lVar14);
    FUN_10ac6c978(param_4,param_6);
    puVar12 = *(undefined8 **)(param_4 + 0x598);
    if (puVar12 != (undefined8 *)0x0) {
      if (*(char *)(puVar12 + 8) == '\x01') {
        (*(code *)*puVar12)();
      }
      else if (*(char *)(puVar12 + 8) == '\x02') {
        FUN_10a05e614();
      }
    }
    return;
  }
  plVar11 = (long *)(param_4 + 0x528);
  bVar5 = *(byte *)(param_4 + 0x53f);
  uVar3 = *(ulong *)(param_4 + 0x530);
  if (-1 < (char)bVar5) {
    uVar3 = (ulong)bVar5;
  }
  if (uVar2 == uVar3) {
    plVar8 = (long *)*param_5;
    if (-1 < (char)bVar4) {
      plVar8 = param_5;
    }
    plVar9 = (long *)*plVar11;
    if (-1 < (char)bVar5) {
      plVar9 = plVar11;
    }
    _memcmp(plVar8,plVar9);
    if ((int)plVar8 == 0) goto LAB_10ac6bc70;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar11,param_5);
  FUN_10a0ff18c(&uStack_a8,param_5,2);
  lVar14 = *(long *)(param_4 + 0x90);
  if (0x9f < *(int *)(*(long *)(lVar14 + 0xa20) + 0x18)) {
    plVar9 = (long *)0x410;
    __Znwm();
    plVar9[1] = 0;
    plVar9[2] = 0;
    *plVar9 = (long)&PTR_FUN_110bc8920;
    plVar11 = plVar9 + 3;
    plStack_70 = (long *)0x0;
    plStack_68 = (long *)0x0;
    FUN_10ac8b384(plVar11,lVar14,&uStack_a8,&plStack_70,1);
    plVar8 = plStack_68;
    if (plStack_68 != (long *)0x0) {
      plVar1 = plStack_68 + 1;
      do {
        lVar14 = *plVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = lVar14 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    plStack_b8 = plVar11;
    plStack_b0 = plVar9;
    FUN_10a37bcec(&plStack_b8,plVar9 + 0xb,plVar11);
    plVar11 = (long *)(param_4 + 0x550);
    func_0x00010ac6b940(plVar11,&plStack_b8);
    plVar8 = plStack_b0;
    if (plStack_b0 != (long *)0x0) {
      plVar9 = plStack_b0 + 1;
      do {
        lVar14 = *plVar9;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar7) {
          *plVar9 = lVar14 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    pbVar10 = *(byte **)(*plVar11 + 0x388);
    fVar16 = 1.0;
    if (param_1 <= 1.0) {
      fVar16 = param_1;
    }
    fVar17 = 0.0;
    if (0.0 <= param_1) {
      fVar17 = fVar16;
    }
    *(float *)(pbVar10 + 8) = fVar17;
    *pbVar10 = *pbVar10 | 4;
    func_0x00010ac8a2ec();
    pbVar10 = *(byte **)(*plVar11 + 0x388);
    fVar16 = 1.0;
    if (param_2 <= 1.0) {
      fVar16 = param_2;
    }
    fVar17 = 0.0;
    if (0.0 <= param_2) {
      fVar17 = fVar16;
    }
    *(float *)(pbVar10 + 0xc) = fVar17;
    *pbVar10 = *pbVar10 | 4;
    func_0x00010ac8a2ec();
    func_0x00010ac8a42c(param_3,*(undefined8 *)(*plVar11 + 0x388));
    FUN_10ac8c444(*plVar11,0xffffffff);
    FUN_10a945638(param_4 + 0x540,plVar11);
    goto LAB_10ac6bef8;
  }
  plVar11 = (long *)0x458;
  __Znwm();
  plVar9 = plVar11 + 1;
  *plVar9 = 0;
  plVar11[2] = 0;
  plVar8 = plVar11 + 3;
  *plVar11 = (long)&PTR_FUN_110c67150;
  FUN_10ac2196c(plVar8,lVar14,&uStack_a8);
  lVar14 = plVar11[0xc];
  plStack_70 = plVar8;
  plStack_68 = plVar11;
  if (lVar14 == 0) {
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar7) {
        *plVar9 = *plVar9 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    plVar1 = plVar11 + 2;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = *plVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    plVar11[0xb] = (long)plVar8;
    plVar11[0xc] = (long)plVar11;
LAB_10ac6bd8c:
    do {
      lVar14 = *plVar9;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar7) {
        *plVar9 = lVar14 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  else if (*(long *)(lVar14 + 8) == -1) {
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar7) {
        *plVar9 = *plVar9 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    plVar1 = plVar11 + 2;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = *plVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    plVar11[0xb] = (long)plVar8;
    plVar11[0xc] = (long)plVar11;
    __ZNSt3__119__shared_weak_count14__release_weakEv(lVar14);
    goto LAB_10ac6bd8c;
  }
  plVar11 = (long *)(param_4 + 0x560);
  func_0x00010ac6b9a4(plVar11,&plStack_70);
  plVar8 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar9 = plStack_68 + 1;
    do {
      lVar14 = *plVar9;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar7) {
        *plVar9 = lVar14 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  lVar14 = *plVar11;
  fVar16 = 1.0;
  if (param_1 <= 1.0) {
    fVar16 = param_1;
  }
  fVar17 = 0.0;
  if (0.0 <= param_1) {
    fVar17 = fVar16;
  }
  *(float *)(lVar14 + 0x350) = fVar17;
  *(byte *)(lVar14 + 0x348) = *(byte *)(lVar14 + 0x348) | 4;
  func_0x00010ac8a2ec(lVar14 + 0x348);
  lVar14 = *plVar11;
  fVar16 = 1.0;
  if (param_2 <= 1.0) {
    fVar16 = param_2;
  }
  fVar17 = 0.0;
  if (0.0 <= param_2) {
    fVar17 = fVar16;
  }
  *(float *)(lVar14 + 0x354) = fVar17;
  *(byte *)(lVar14 + 0x348) = *(byte *)(lVar14 + 0x348) | 4;
  func_0x00010ac8a2ec(lVar14 + 0x348);
  func_0x00010ac8a42c(param_3,*plVar11 + 0x348);
  lVar14 = *plVar11;
  if (*(long *)(lVar14 + 0x370) == 0) {
    FUN_10ac89edc(0,lVar14 + 0x348,*(undefined8 *)(lVar14 + 0x90),lVar14 + 0x290);
    *(undefined4 *)(lVar14 + 0x3f8) = 1;
    lVar14 = *plVar11;
  }
  lVar13 = *(long *)(param_4 + 0x568);
  if (lVar13 != 0) {
    plVar11 = (long *)(lVar13 + 8);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar7) {
        *plVar11 = *plVar11 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  *(long *)(param_4 + 0x540) = lVar14;
  plVar11 = *(long **)(param_4 + 0x548);
  *(long *)(param_4 + 0x548) = lVar13;
  if (plVar11 != (long *)0x0) {
    plVar8 = plVar11 + 1;
    do {
      lVar14 = *plVar8;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar7) {
        *plVar8 = lVar14 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
LAB_10ac6bef8:
  lVar14 = *(long *)(param_4 + 0x5a8);
  if (lVar14 != 0) {
    if (*(long *)(param_4 + 0x550) == 0) {
      lVar13 = *(long *)(param_4 + 0x560);
      plStack_c0 = *(long **)(param_4 + 0x5b0);
      if (plStack_c0 != (long *)0x0) {
        plVar11 = plStack_c0 + 1;
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar7) {
            *plVar11 = *plVar11 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      lStack_c8 = lVar14;
      FUN_10a2d8800(lVar13 + 0x400,&lStack_c8);
      plVar11 = plStack_c0;
      if (plStack_c0 != (long *)0x0) {
        plVar8 = plStack_c0 + 1;
        do {
          lVar14 = *plVar8;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar7) {
            *plVar8 = lVar14 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
        }
      }
    }
    else {
      FUN_10ac8c688(*(long *)(param_4 + 0x550),param_4 + 0x5a8);
    }
  }
  plStack_68 = *(long **)(param_4 + 0x548);
  plStack_70 = *(long **)(param_4 + 0x540);
  if (*(long *)(param_4 + 0x548) != 0) {
    plVar11 = (long *)(*(long *)(param_4 + 0x548) + 8);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar7) {
        *plVar11 = *plVar11 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  FUN_10a1e3a04(param_4,&plStack_70);
  plVar11 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar8 = plStack_68 + 1;
    do {
      lVar14 = *plVar8;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar7) {
        *plVar8 = lVar14 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  FUN_10ac6c110(param_4,0,0,param_6);
  if (cStack_79 < '\0') {
    __ZdlPv(uStack_90);
  }
  if (cStack_91 < '\0') {
    __ZdlPv(uStack_a8);
  }
  return;
}



/* Entry: 10ac6c110; end: 10ac6c557;  */

void FUN_10ac6c110(undefined8 param_1,float param_2,undefined8 param_3,long *param_4,long *param_5,
                  long param_6,long param_7)

{
  ulong uVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  float *pfVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long *plVar16;
  undefined8 unaff_x22;
  long *plVar17;
  long lVar18;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  ulong uVar19;
  long unaff_x25;
  long *unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  undefined8 unaff_d8;
  float fVar25;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  
  uVar24 = (undefined4)((ulong)param_3 >> 0x20);
  fVar23 = (float)param_3;
  while( true ) {
    fVar22 = (float)param_1;
    *(long **)((long)register0x00000008 + -0x50) = unaff_x26;
    *(long *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    if (((param_4[0xa8] != 0) || (param_4[0x13] == 0)) ||
       ((*(byte *)(param_4 + 0xc5) & 10) == 0 || param_6 == 0)) goto LAB_10ac6c13c;
    unaff_x25 = param_6 << 4;
    if (unaff_x25 != 0) {
      pfVar11 = (float *)(param_5 + 1);
      lVar18 = unaff_x25;
      do {
        if (*pfVar11 - pfVar11[-2] <= 0.0) goto LAB_10ac6c13c;
        param_2 = pfVar11[-1];
        fVar22 = pfVar11[1] - param_2;
        if (fVar22 <= 0.0) goto LAB_10ac6c13c;
        pfVar11 = pfVar11 + 4;
        lVar18 = lVar18 + -0x10;
      } while (lVar18 != 0);
    }
    unaff_x26 = param_5 + param_6 * 2;
    uVar19 = (long)unaff_x26 - (long)param_5;
    uVar12 = param_4[0xbb];
    plVar17 = (long *)param_4[0xb9];
    if (uVar19 <= uVar12 - (long)plVar17) {
      plVar16 = (long *)param_4[0xba];
      if ((ulong)((long)plVar16 - (long)plVar17) < uVar19) {
        plVar10 = (long *)(((long)plVar16 - (long)plVar17) + (long)param_5);
        plVar13 = plVar16;
        if (plVar16 != plVar17) {
          _memmove(plVar17,param_5);
          plVar16 = (long *)param_4[0xba];
          plVar13 = plVar16;
        }
        for (; plVar10 != unaff_x26; plVar10 = plVar10 + 2) {
          lVar18 = *plVar10;
          plVar16[1] = plVar10[1];
          *plVar16 = lVar18;
          plVar16 = plVar16 + 2;
          plVar13 = plVar13 + 2;
        }
      }
      else {
        if (param_5 != unaff_x26) {
          _memmove(plVar17,param_5,uVar19);
        }
        plVar13 = (long *)((long)plVar17 + uVar19);
      }
      goto LAB_10ac6c300;
    }
    plVar16 = param_4 + 0xb9;
    uVar19 = (long)uVar19 >> 4;
    plVar13 = param_4;
    plVar10 = param_5;
    lVar18 = param_6;
    if (plVar17 != (long *)0x0) {
      param_4[0xba] = (long)plVar17;
      plVar13 = plVar17;
      __ZdlPv();
      uVar12 = 0;
      *plVar16 = 0;
      param_4[0xba] = 0;
      param_4[0xbb] = 0;
      lVar18 = param_6;
    }
    if (uVar19 >> 0x3c == 0) break;
    FUN_10a191ca4();
    FUN_10a042dcc((undefined1 *)((long)register0x00000008 + -0x60));
    plVar9 = plVar13;
    __Unwind_Resume();
    param_4 = plVar9 + -0x51;
    *(undefined8 *)((long)register0x00000008 + -0xc0) = unaff_d11;
    *(undefined8 *)((long)register0x00000008 + -0xb8) = unaff_d10;
    *(undefined8 *)((long)register0x00000008 + -0xb0) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_d8;
    *(ulong *)((long)register0x00000008 + -0xa0) = uVar19;
    *(long **)((long)register0x00000008 + -0x98) = plVar16;
    *(long **)((long)register0x00000008 + -0x90) = plVar17;
    *(long **)((long)register0x00000008 + -0x88) = param_5;
    *(long *)((long)register0x00000008 + -0x80) = param_7;
    *(long **)((long)register0x00000008 + -0x78) = plVar13;
    *(undefined1 **)((long)register0x00000008 + -0x70) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x68) = FUN_10ac6c558;
    param_1 = CONCAT44(uVar24,fVar23);
    func_0x00010ac6b6dc();
    *(undefined8 *)((long)register0x00000008 + -0x108) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x100) = 0;
    FUN_10ab76cb8(plVar9 + 0x60,(undefined1 *)((long)register0x00000008 + -0x108));
    plVar17 = *(long **)((long)register0x00000008 + -0x100);
    if (plVar17 != (long *)0x0) {
      plVar16 = plVar17 + 1;
      do {
        lVar14 = *plVar16;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar5) {
          *plVar16 = lVar14 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
      }
    }
    bVar2 = *(byte *)((long)plVar10 + 0x17);
    uVar12 = plVar10[1];
    if (-1 < (char)bVar2) {
      uVar12 = (ulong)bVar2;
    }
    if (uVar12 != 0) {
      plVar17 = plVar9 + 0x54;
      bVar3 = *(byte *)((long)plVar9 + 0x2b7);
      uVar19 = plVar9[0x55];
      if (-1 < (char)bVar3) {
        uVar19 = (ulong)bVar3;
      }
      if (uVar12 == uVar19) {
        plVar16 = (long *)*plVar10;
        if (-1 < (char)bVar2) {
          plVar16 = plVar10;
        }
        plVar13 = (long *)*plVar17;
        if (-1 < (char)bVar3) {
          plVar13 = plVar17;
        }
        _memcmp(plVar16,plVar13);
        if ((int)plVar16 == 0) goto LAB_10ac6bc70;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar17,plVar10);
      FUN_10a0ff18c((undefined1 *)((long)register0x00000008 + -0x108),plVar10,2);
      lVar14 = plVar9[-0x3f];
      if (0x9f < *(int *)(*(long *)(lVar14 + 0xa20) + 0x18)) {
        puVar6 = (undefined8 *)0x410;
        __Znwm();
        puVar6[1] = 0;
        puVar6[2] = 0;
        *puVar6 = &PTR_FUN_110bc8920;
        puVar8 = puVar6 + 3;
        *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
        *(undefined8 *)((long)register0x00000008 + -200) = 0;
        FUN_10ac8b384(puVar8,lVar14,(undefined1 *)((long)register0x00000008 + -0x108),
                      (undefined1 *)((long)register0x00000008 + -0xd0),1);
        plVar17 = *(long **)((long)register0x00000008 + -200);
        if (plVar17 != (long *)0x0) {
          plVar16 = plVar17 + 1;
          do {
            lVar14 = *plVar16;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar5) {
              *plVar16 = lVar14 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar14 == 0) {
            (**(code **)(*plVar17 + 0x10))(plVar17);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
          }
        }
        *(undefined8 **)((long)register0x00000008 + -0x118) = puVar8;
        *(undefined8 **)((long)register0x00000008 + -0x110) = puVar6;
        FUN_10a37bcec((undefined1 *)((long)register0x00000008 + -0x118),puVar6 + 0xb,puVar8);
        plVar17 = plVar9 + 0x59;
        func_0x00010ac6b940(plVar17,(undefined1 *)((long)register0x00000008 + -0x118));
        plVar16 = *(long **)((long)register0x00000008 + -0x110);
        if (plVar16 != (long *)0x0) {
          plVar13 = plVar16 + 1;
          do {
            lVar14 = *plVar13;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar5) {
              *plVar13 = lVar14 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar14 == 0) {
            (**(code **)(*plVar16 + 0x10))(plVar16);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
          }
        }
        pbVar7 = *(byte **)(*plVar17 + 0x388);
        fVar23 = 1.0;
        if (fVar22 <= 1.0) {
          fVar23 = fVar22;
        }
        fVar25 = 0.0;
        if (0.0 <= fVar22) {
          fVar25 = fVar23;
        }
        *(float *)(pbVar7 + 8) = fVar25;
        *pbVar7 = *pbVar7 | 4;
        func_0x00010ac8a2ec();
        pbVar7 = *(byte **)(*plVar17 + 0x388);
        fVar23 = 1.0;
        if (param_2 <= 1.0) {
          fVar23 = param_2;
        }
        fVar22 = 0.0;
        if (0.0 <= param_2) {
          fVar22 = fVar23;
        }
        *(float *)(pbVar7 + 0xc) = fVar22;
        *pbVar7 = *pbVar7 | 4;
        func_0x00010ac8a2ec();
        func_0x00010ac8a42c(param_1,*(undefined8 *)(*plVar17 + 0x388));
        FUN_10ac8c444(*plVar17,0xffffffff);
        FUN_10a945638(plVar9 + 0x57,plVar17);
        goto LAB_10ac6bef8;
      }
      plVar17 = (long *)0x458;
      __Znwm();
      plVar13 = plVar17 + 1;
      *plVar13 = 0;
      plVar17[2] = 0;
      plVar16 = plVar17 + 3;
      *plVar17 = (long)&PTR_FUN_110c67150;
      FUN_10ac2196c(plVar16,lVar14,(undefined1 *)((long)register0x00000008 + -0x108));
      *(long **)((long)register0x00000008 + -0xd0) = plVar16;
      *(long **)((long)register0x00000008 + -200) = plVar17;
      lVar14 = plVar17[0xc];
      if (lVar14 == 0) goto LAB_10ac6bd64;
      if (*(long *)(lVar14 + 8) == -1) goto LAB_10ac6bd30;
      goto LAB_10ac6bdb8;
    }
LAB_10ac6bc70:
    if (plVar9[0x57] == 0) {
      return;
    }
    fVar23 = 1.0;
    if (param_2 <= 1.0) {
      fVar23 = param_2;
    }
    uVar24 = 0;
    bVar5 = 0.0 <= param_2;
    param_2 = 0.0;
    fVar25 = 0.0;
    if (bVar5) {
      fVar25 = fVar23;
    }
    if (plVar9[0x59] == 0) {
      lVar14 = plVar9[0x5b];
      fVar20 = 1.0;
      if (fVar22 <= 1.0) {
        fVar20 = fVar22;
      }
      fVar21 = 0.0;
      if (0.0 <= fVar22) {
        fVar21 = fVar20;
      }
      *(float *)(lVar14 + 0x350) = fVar21;
      *(byte *)(lVar14 + 0x348) = *(byte *)(lVar14 + 0x348) | 4;
      func_0x00010ac8a2ec(lVar14 + 0x348);
      lVar14 = plVar9[0x5b];
      *(float *)(lVar14 + 0x354) = fVar25;
      *(byte *)(lVar14 + 0x348) = *(byte *)(lVar14 + 0x348) | 4;
      func_0x00010ac8a2ec(lVar14 + 0x348);
      lVar14 = plVar9[0x5b] + 0x348;
    }
    else {
      pbVar7 = *(byte **)(plVar9[0x59] + 0x388);
      fVar20 = 1.0;
      if (fVar22 <= 1.0) {
        fVar20 = fVar22;
      }
      fVar21 = 0.0;
      if (0.0 <= fVar22) {
        fVar21 = fVar20;
      }
      *(float *)(pbVar7 + 8) = fVar21;
      *pbVar7 = *pbVar7 | 4;
      func_0x00010ac8a2ec();
      pbVar7 = *(byte **)(plVar9[0x59] + 0x388);
      *(float *)(pbVar7 + 0xc) = fVar25;
      *pbVar7 = *pbVar7 | 4;
      func_0x00010ac8a2ec();
      lVar14 = *(long *)(plVar9[0x59] + 0x388);
    }
    func_0x00010ac8a42c(lVar14);
    param_5 = (long *)0x0;
    param_6 = 0;
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x70);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x68);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x80);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x78);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x88);
    unaff_x24 = *(undefined8 *)((long)register0x00000008 + -0xa0);
    unaff_x23 = *(undefined8 *)((long)register0x00000008 + -0x98);
    unaff_d9 = *(undefined8 *)((long)register0x00000008 + -0xb0);
    unaff_d8 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    unaff_d11 = *(undefined8 *)((long)register0x00000008 + -0xc0);
    unaff_d10 = *(undefined8 *)((long)register0x00000008 + -0xb8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    param_7 = lVar18;
  }
  uVar1 = (long)uVar12 >> 3;
  if ((ulong)((long)uVar12 >> 3) <= uVar19) {
    uVar1 = uVar19;
  }
  if (0x7fffffffffffffef < uVar12) {
    uVar1 = 0xfffffffffffffff;
  }
  func_0x00010a191c6c(plVar16,uVar1);
  plVar13 = (long *)param_4[0xba];
  plVar17 = plVar13;
  if (param_5 != unaff_x26) {
    do {
      lVar18 = *param_5;
      plVar13 = plVar17 + 2;
      plVar17[1] = param_5[1];
      *plVar17 = lVar18;
      unaff_x25 = unaff_x25 + -0x10;
      plVar17 = plVar13;
      param_5 = param_5 + 2;
    } while (unaff_x25 != 0);
  }
LAB_10ac6c300:
  param_4[0xba] = (long)plVar13;
  lVar18 = param_4[0x12];
  plVar17 = (long *)0x5f0;
  __Znwm();
  plVar13 = plVar17 + 1;
  *plVar13 = 0;
  plVar17[2] = 0;
  plVar16 = plVar17 + 3;
  *plVar17 = (long)&PTR_DAT_110c671a0;
  FUN_10ac3b48c(plVar16,lVar18,1);
  *(long **)((long)register0x00000008 + -0x60) = plVar16;
  *(long **)((long)register0x00000008 + -0x58) = plVar17;
  lVar18 = plVar17[0xc];
  if (lVar18 == 0) {
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar5) {
        *plVar13 = *plVar13 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar10 = plVar17 + 2;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = *plVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar17[0xb] = (long)plVar16;
    plVar17[0xc] = (long)plVar17;
LAB_10ac6c3ac:
    do {
      lVar18 = *plVar13;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar5) {
        *plVar13 = lVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
    }
  }
  else if (*(long *)(lVar18 + 8) == -1) {
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar5) {
        *plVar13 = *plVar13 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar10 = plVar17 + 2;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = *plVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar17[0xb] = (long)plVar16;
    plVar17[0xc] = (long)plVar17;
    __ZNSt3__119__shared_weak_count14__release_weakEv(lVar18);
    goto LAB_10ac6c3ac;
  }
  func_0x00010ac6b7c0(param_4 + 0xc1,(undefined1 *)((long)register0x00000008 + -0x60));
  plVar17 = *(long **)((long)register0x00000008 + -0x58);
  if (plVar17 != (long *)0x0) {
    plVar16 = plVar17 + 1;
    do {
      lVar18 = *plVar16;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar5) {
        *plVar16 = lVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
    }
  }
  lVar18 = param_4[0xc1];
  *(undefined4 *)(lVar18 + 0x56c) = *(undefined4 *)((long)param_4 + 0x5bc);
  *(long *)(lVar18 + 0x504) = param_4[0xb8];
  lVar18 = param_4[0x14];
  lVar14 = param_4[0x13];
  *(long *)((long)register0x00000008 + -0x58) = param_4[0x14];
  *(long *)((long)register0x00000008 + -0x60) = lVar14;
  if (lVar18 != 0) {
    plVar17 = (long *)(lVar18 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar5) {
        *plVar17 = *plVar17 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_10ab76cb8(param_4 + 0xbf,(undefined1 *)((long)register0x00000008 + -0x60));
  plVar17 = *(long **)((long)register0x00000008 + -0x58);
  if (plVar17 != (long *)0x0) {
    plVar16 = plVar17 + 1;
    do {
      lVar18 = *plVar16;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar5) {
        *plVar16 = lVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
    }
  }
  if ((char)param_4[0xb7] == '\x01') {
    lVar18 = param_4[0xc2];
    *(long *)((long)register0x00000008 + -0x60) = param_4[0xc1];
    *(long *)((long)register0x00000008 + -0x58) = lVar18;
    if (lVar18 != 0) {
      plVar17 = (long *)(lVar18 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar5) {
          *plVar17 = *plVar17 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    FUN_10a1e3a04(param_4,(undefined1 *)((long)register0x00000008 + -0x60));
    plVar17 = *(long **)((long)register0x00000008 + -0x58);
    if (plVar17 != (long *)0x0) {
      plVar16 = plVar17 + 1;
      do {
        lVar18 = *plVar16;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar5) {
          *plVar16 = lVar18 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar18 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
      }
    }
  }
  FUN_10ac6c978(param_4,param_7);
  FUN_10ac6ca48(param_4,0);
LAB_10ac6c148:
  puVar8 = (undefined8 *)param_4[0xb3];
  if (puVar8 != (undefined8 *)0x0) {
    if (*(char *)(puVar8 + 8) == '\x01') {
      (*(code *)*puVar8)();
    }
    else if (*(char *)(puVar8 + 8) == '\x02') {
      FUN_10a05e614();
    }
  }
  return;
LAB_10ac6c13c:
  FUN_10ac6c978(param_4,param_7);
  goto LAB_10ac6c148;
LAB_10ac6bd64:
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar5) {
      *plVar13 = *plVar13 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  plVar10 = plVar17 + 2;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar5) {
      *plVar10 = *plVar10 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  plVar17[0xb] = (long)plVar16;
  plVar17[0xc] = (long)plVar17;
  goto LAB_10ac6bd8c;
LAB_10ac6bd30:
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar5) {
      *plVar13 = *plVar13 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  plVar10 = plVar17 + 2;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar5) {
      *plVar10 = *plVar10 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  plVar17[0xb] = (long)plVar16;
  plVar17[0xc] = (long)plVar17;
  __ZNSt3__119__shared_weak_count14__release_weakEv(lVar14);
LAB_10ac6bd8c:
  do {
    lVar14 = *plVar13;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar5) {
      *plVar13 = lVar14 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (lVar14 == 0) {
    (**(code **)(*plVar17 + 0x10))(plVar17);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
  }
LAB_10ac6bdb8:
  plVar17 = plVar9 + 0x5b;
  func_0x00010ac6b9a4(plVar17,(undefined1 *)((long)register0x00000008 + -0xd0));
  plVar16 = *(long **)((long)register0x00000008 + -200);
  if (plVar16 != (long *)0x0) {
    plVar13 = plVar16 + 1;
    do {
      lVar14 = *plVar13;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar5) {
        *plVar13 = lVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
    }
  }
  lVar14 = *plVar17;
  fVar23 = 1.0;
  if (fVar22 <= 1.0) {
    fVar23 = fVar22;
  }
  fVar25 = 0.0;
  if (0.0 <= fVar22) {
    fVar25 = fVar23;
  }
  *(float *)(lVar14 + 0x350) = fVar25;
  *(byte *)(lVar14 + 0x348) = *(byte *)(lVar14 + 0x348) | 4;
  func_0x00010ac8a2ec(lVar14 + 0x348);
  lVar14 = *plVar17;
  fVar23 = 1.0;
  if (param_2 <= 1.0) {
    fVar23 = param_2;
  }
  fVar22 = 0.0;
  if (0.0 <= param_2) {
    fVar22 = fVar23;
  }
  *(float *)(lVar14 + 0x354) = fVar22;
  *(byte *)(lVar14 + 0x348) = *(byte *)(lVar14 + 0x348) | 4;
  func_0x00010ac8a2ec(lVar14 + 0x348);
  func_0x00010ac8a42c(param_1,*plVar17 + 0x348);
  lVar14 = *plVar17;
  if (*(long *)(lVar14 + 0x370) == 0) {
    FUN_10ac89edc(0,lVar14 + 0x348,*(undefined8 *)(lVar14 + 0x90),lVar14 + 0x290);
    *(undefined4 *)(lVar14 + 0x3f8) = 1;
    lVar14 = *plVar17;
  }
  lVar15 = plVar9[0x5c];
  if (lVar15 != 0) {
    plVar17 = (long *)(lVar15 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar5) {
        *plVar17 = *plVar17 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar9[0x57] = lVar14;
  plVar17 = (long *)plVar9[0x58];
  plVar9[0x58] = lVar15;
  if (plVar17 != (long *)0x0) {
    plVar16 = plVar17 + 1;
    do {
      lVar14 = *plVar16;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar5) {
        *plVar16 = lVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
    }
  }
LAB_10ac6bef8:
  if (plVar9[100] != 0) {
    if (plVar9[0x59] == 0) {
      lVar14 = plVar9[0x5b];
      lVar15 = plVar9[0x65];
      *(long *)((long)register0x00000008 + -0x128) = plVar9[100];
      *(long *)((long)register0x00000008 + -0x120) = lVar15;
      if (lVar15 != 0) {
        plVar17 = (long *)(lVar15 + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar5) {
            *plVar17 = *plVar17 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      FUN_10a2d8800(lVar14 + 0x400,(undefined1 *)((long)register0x00000008 + -0x128));
      plVar17 = *(long **)((long)register0x00000008 + -0x120);
      if (plVar17 != (long *)0x0) {
        plVar16 = plVar17 + 1;
        do {
          lVar14 = *plVar16;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar5) {
            *plVar16 = lVar14 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
        }
      }
    }
    else {
      FUN_10ac8c688(plVar9[0x59],plVar9 + 100);
    }
  }
  lVar14 = plVar9[0x58];
  lVar15 = plVar9[0x57];
  *(long *)((long)register0x00000008 + -200) = plVar9[0x58];
  *(long *)((long)register0x00000008 + -0xd0) = lVar15;
  if (lVar14 != 0) {
    plVar17 = (long *)(lVar14 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar5) {
        *plVar17 = *plVar17 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_10a1e3a04(param_4,(undefined1 *)((long)register0x00000008 + -0xd0));
  plVar17 = *(long **)((long)register0x00000008 + -200);
  if (plVar17 != (long *)0x0) {
    plVar16 = plVar17 + 1;
    do {
      lVar14 = *plVar16;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar5) {
        *plVar16 = lVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
    }
  }
  FUN_10ac6c110(param_4,0,0,lVar18);
  if (*(char *)((long)register0x00000008 + -0xd9) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0xf0));
  }
  if (*(char *)((long)register0x00000008 + -0xf1) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x108));
  }
  return;
}



/* Entry: 10ac6c558; end: 10ac6c55f;  */

/* WARNING: Removing unreachable block (ram,0x00010ac6c24c) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c25c) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c18c) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c198) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c1a0) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c1ac) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c1b0) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c1b4) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c1c0) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c1c4) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c1c8) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c1d4) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c284) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c2e4) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c2ec) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c2fc) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c294) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c2a0) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c2b0) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c2bc) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c2c4) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c2d8) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c1f0) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c1fc) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c214) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c52c) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c21c) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c224) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c234) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c300) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c384) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c38c) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c394) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c398) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c3a0) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c3a8) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c344) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c350) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c358) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c360) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c364) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c36c) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c374) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c3ac) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c3b4) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c3bc) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c3c0) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c3d8) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c3ec) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c3f0) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c3f8) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c400) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c404) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c41c) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c444) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c448) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c450) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c458) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c46c) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c470) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c478) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c480) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c484) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c49c) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c4a8) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c4b8) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c4bc) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c4c4) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c4cc) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c4e0) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c4e4) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c4ec) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c4f4) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c4f8) */
/* WARNING: Removing unreachable block (ram,0x00010ac6c510) */

void FUN_10ac6c558(float param_1,float param_2,undefined8 param_3,long param_4,long *param_5,
                  undefined8 param_6)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  long *plVar9;
  byte *pbVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  long lStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  char cStack_91;
  undefined8 uStack_90;
  char cStack_79;
  long *plStack_70;
  long *plStack_68;
  
  lVar13 = param_4 + -0x288;
  FUN_10ac6b6dc();
  uStack_a8 = 0;
  plStack_a0 = (long *)0x0;
  FUN_10ab76cb8(param_4 + 0x300,&uStack_a8);
  plVar11 = plStack_a0;
  if (plStack_a0 != (long *)0x0) {
    plVar8 = plStack_a0 + 1;
    do {
      lVar15 = *plVar8;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar7) {
        *plVar8 = lVar15 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  bVar4 = *(byte *)((long)param_5 + 0x17);
  uVar2 = param_5[1];
  if (-1 < (char)bVar4) {
    uVar2 = (ulong)bVar4;
  }
  if (uVar2 == 0) {
LAB_10ac6bc70:
    if (*(long *)(param_4 + 0x2b8) == 0) {
      return;
    }
    fVar17 = 1.0;
    if (param_2 <= 1.0) {
      fVar17 = param_2;
    }
    fVar18 = 0.0;
    if (0.0 <= param_2) {
      fVar18 = fVar17;
    }
    if (*(long *)(param_4 + 0x2c8) == 0) {
      lVar15 = *(long *)(param_4 + 0x2d8);
      fVar17 = 1.0;
      if (param_1 <= 1.0) {
        fVar17 = param_1;
      }
      fVar16 = 0.0;
      if (0.0 <= param_1) {
        fVar16 = fVar17;
      }
      *(float *)(lVar15 + 0x350) = fVar16;
      *(byte *)(lVar15 + 0x348) = *(byte *)(lVar15 + 0x348) | 4;
      func_0x00010ac8a2ec(lVar15 + 0x348);
      lVar15 = *(long *)(param_4 + 0x2d8);
      *(float *)(lVar15 + 0x354) = fVar18;
      *(byte *)(lVar15 + 0x348) = *(byte *)(lVar15 + 0x348) | 4;
      func_0x00010ac8a2ec(lVar15 + 0x348);
      lVar15 = *(long *)(param_4 + 0x2d8) + 0x348;
    }
    else {
      pbVar10 = *(byte **)(*(long *)(param_4 + 0x2c8) + 0x388);
      fVar17 = 1.0;
      if (param_1 <= 1.0) {
        fVar17 = param_1;
      }
      fVar16 = 0.0;
      if (0.0 <= param_1) {
        fVar16 = fVar17;
      }
      *(float *)(pbVar10 + 8) = fVar16;
      *pbVar10 = *pbVar10 | 4;
      func_0x00010ac8a2ec();
      pbVar10 = *(byte **)(*(long *)(param_4 + 0x2c8) + 0x388);
      *(float *)(pbVar10 + 0xc) = fVar18;
      *pbVar10 = *pbVar10 | 4;
      func_0x00010ac8a2ec();
      lVar15 = *(long *)(*(long *)(param_4 + 0x2c8) + 0x388);
    }
    func_0x00010ac8a42c(lVar15);
    FUN_10ac6c978(lVar13,param_6);
    puVar12 = *(undefined8 **)(param_4 + 0x310);
    if (puVar12 != (undefined8 *)0x0) {
      if (*(char *)(puVar12 + 8) == '\x01') {
        (*(code *)*puVar12)();
      }
      else if (*(char *)(puVar12 + 8) == '\x02') {
        FUN_10a05e614();
      }
    }
    return;
  }
  plVar11 = (long *)(param_4 + 0x2a0);
  bVar5 = *(byte *)(param_4 + 0x2b7);
  uVar3 = *(ulong *)(param_4 + 0x2a8);
  if (-1 < (char)bVar5) {
    uVar3 = (ulong)bVar5;
  }
  if (uVar2 == uVar3) {
    plVar8 = (long *)*param_5;
    if (-1 < (char)bVar4) {
      plVar8 = param_5;
    }
    plVar9 = (long *)*plVar11;
    if (-1 < (char)bVar5) {
      plVar9 = plVar11;
    }
    _memcmp(plVar8,plVar9);
    if ((int)plVar8 == 0) goto LAB_10ac6bc70;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar11,param_5);
  FUN_10a0ff18c(&uStack_a8,param_5,2);
  lVar15 = *(long *)(param_4 + -0x1f8);
  if (0x9f < *(int *)(*(long *)(lVar15 + 0xa20) + 0x18)) {
    plVar9 = (long *)0x410;
    __Znwm();
    plVar9[1] = 0;
    plVar9[2] = 0;
    *plVar9 = (long)&PTR_FUN_110bc8920;
    plVar11 = plVar9 + 3;
    plStack_70 = (long *)0x0;
    plStack_68 = (long *)0x0;
    FUN_10ac8b384(plVar11,lVar15,&uStack_a8,&plStack_70,1);
    plVar8 = plStack_68;
    if (plStack_68 != (long *)0x0) {
      plVar1 = plStack_68 + 1;
      do {
        lVar15 = *plVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = lVar15 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    plStack_b8 = plVar11;
    plStack_b0 = plVar9;
    FUN_10a37bcec(&plStack_b8,plVar9 + 0xb,plVar11);
    plVar11 = (long *)(param_4 + 0x2c8);
    func_0x00010ac6b940(plVar11,&plStack_b8);
    plVar8 = plStack_b0;
    if (plStack_b0 != (long *)0x0) {
      plVar9 = plStack_b0 + 1;
      do {
        lVar15 = *plVar9;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar7) {
          *plVar9 = lVar15 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    pbVar10 = *(byte **)(*plVar11 + 0x388);
    fVar17 = 1.0;
    if (param_1 <= 1.0) {
      fVar17 = param_1;
    }
    fVar18 = 0.0;
    if (0.0 <= param_1) {
      fVar18 = fVar17;
    }
    *(float *)(pbVar10 + 8) = fVar18;
    *pbVar10 = *pbVar10 | 4;
    func_0x00010ac8a2ec();
    pbVar10 = *(byte **)(*plVar11 + 0x388);
    fVar17 = 1.0;
    if (param_2 <= 1.0) {
      fVar17 = param_2;
    }
    fVar18 = 0.0;
    if (0.0 <= param_2) {
      fVar18 = fVar17;
    }
    *(float *)(pbVar10 + 0xc) = fVar18;
    *pbVar10 = *pbVar10 | 4;
    func_0x00010ac8a2ec();
    func_0x00010ac8a42c(param_3,*(undefined8 *)(*plVar11 + 0x388));
    FUN_10ac8c444(*plVar11,0xffffffff);
    FUN_10a945638(param_4 + 0x2b8,plVar11);
    goto LAB_10ac6bef8;
  }
  plVar11 = (long *)0x458;
  __Znwm();
  plVar9 = plVar11 + 1;
  *plVar9 = 0;
  plVar11[2] = 0;
  plVar8 = plVar11 + 3;
  *plVar11 = (long)&PTR_FUN_110c67150;
  FUN_10ac2196c(plVar8,lVar15,&uStack_a8);
  lVar15 = plVar11[0xc];
  plStack_70 = plVar8;
  plStack_68 = plVar11;
  if (lVar15 == 0) {
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar7) {
        *plVar9 = *plVar9 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    plVar1 = plVar11 + 2;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = *plVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    plVar11[0xb] = (long)plVar8;
    plVar11[0xc] = (long)plVar11;
LAB_10ac6bd8c:
    do {
      lVar15 = *plVar9;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar7) {
        *plVar9 = lVar15 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  else if (*(long *)(lVar15 + 8) == -1) {
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar7) {
        *plVar9 = *plVar9 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    plVar1 = plVar11 + 2;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = *plVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    plVar11[0xb] = (long)plVar8;
    plVar11[0xc] = (long)plVar11;
    __ZNSt3__119__shared_weak_count14__release_weakEv(lVar15);
    goto LAB_10ac6bd8c;
  }
  plVar11 = (long *)(param_4 + 0x2d8);
  func_0x00010ac6b9a4(plVar11,&plStack_70);
  plVar8 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar9 = plStack_68 + 1;
    do {
      lVar15 = *plVar9;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar7) {
        *plVar9 = lVar15 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  lVar15 = *plVar11;
  fVar17 = 1.0;
  if (param_1 <= 1.0) {
    fVar17 = param_1;
  }
  fVar18 = 0.0;
  if (0.0 <= param_1) {
    fVar18 = fVar17;
  }
  *(float *)(lVar15 + 0x350) = fVar18;
  *(byte *)(lVar15 + 0x348) = *(byte *)(lVar15 + 0x348) | 4;
  func_0x00010ac8a2ec(lVar15 + 0x348);
  lVar15 = *plVar11;
  fVar17 = 1.0;
  if (param_2 <= 1.0) {
    fVar17 = param_2;
  }
  fVar18 = 0.0;
  if (0.0 <= param_2) {
    fVar18 = fVar17;
  }
  *(float *)(lVar15 + 0x354) = fVar18;
  *(byte *)(lVar15 + 0x348) = *(byte *)(lVar15 + 0x348) | 4;
  func_0x00010ac8a2ec(lVar15 + 0x348);
  func_0x00010ac8a42c(param_3,*plVar11 + 0x348);
  lVar15 = *plVar11;
  if (*(long *)(lVar15 + 0x370) == 0) {
    FUN_10ac89edc(0,lVar15 + 0x348,*(undefined8 *)(lVar15 + 0x90),lVar15 + 0x290);
    *(undefined4 *)(lVar15 + 0x3f8) = 1;
    lVar15 = *plVar11;
  }
  lVar14 = *(long *)(param_4 + 0x2e0);
  if (lVar14 != 0) {
    plVar11 = (long *)(lVar14 + 8);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar7) {
        *plVar11 = *plVar11 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  *(long *)(param_4 + 0x2b8) = lVar15;
  plVar11 = *(long **)(param_4 + 0x2c0);
  *(long *)(param_4 + 0x2c0) = lVar14;
  if (plVar11 != (long *)0x0) {
    plVar8 = plVar11 + 1;
    do {
      lVar15 = *plVar8;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar7) {
        *plVar8 = lVar15 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
LAB_10ac6bef8:
  lVar15 = *(long *)(param_4 + 800);
  if (lVar15 != 0) {
    if (*(long *)(param_4 + 0x2c8) == 0) {
      lVar14 = *(long *)(param_4 + 0x2d8);
      plStack_c0 = *(long **)(param_4 + 0x328);
      if (plStack_c0 != (long *)0x0) {
        plVar11 = plStack_c0 + 1;
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar7) {
            *plVar11 = *plVar11 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      lStack_c8 = lVar15;
      FUN_10a2d8800(lVar14 + 0x400,&lStack_c8);
      plVar11 = plStack_c0;
      if (plStack_c0 != (long *)0x0) {
        plVar8 = plStack_c0 + 1;
        do {
          lVar15 = *plVar8;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar7) {
            *plVar8 = lVar15 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
        }
      }
    }
    else {
      FUN_10ac8c688(*(long *)(param_4 + 0x2c8),param_4 + 800);
    }
  }
  plStack_68 = *(long **)(param_4 + 0x2c0);
  plStack_70 = *(long **)(param_4 + 0x2b8);
  if (*(long *)(param_4 + 0x2c0) != 0) {
    plVar11 = (long *)(*(long *)(param_4 + 0x2c0) + 8);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar7) {
        *plVar11 = *plVar11 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  FUN_10a1e3a04(lVar13,&plStack_70);
  plVar11 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar8 = plStack_68 + 1;
    do {
      lVar15 = *plVar8;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar7) {
        *plVar8 = lVar15 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  FUN_10ac6c110(lVar13,0,0,param_6);
  if (cStack_79 < '\0') {
    __ZdlPv(uStack_90);
  }
  if (cStack_91 < '\0') {
    __ZdlPv(uStack_a8);
  }
  return;
}



/* Entry: 10ac6c560; end: 10ac6c717;  */

void FUN_10ac6c560(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uStack_90;
  long *plStack_88;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 uStack_60;
  char cStack_49;
  
  FUN_10ac6b6dc();
  func_0x00010ac6b824(param_1);
  FUN_10a0ff18c(auStack_78,param_2,2);
  FUN_10ac5fb74(&uStack_90,*(undefined8 *)(param_1 + 0x90),auStack_78,3);
  plVar1 = plStack_88;
  uVar4 = uStack_90;
  uStack_90 = 0;
  plStack_88 = (long *)0x0;
  plVar6 = *(long **)(param_1 + 0x590);
  *(long **)(param_1 + 0x590) = plVar1;
  *(undefined8 *)(param_1 + 0x588) = uVar4;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  plVar1 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar6 = plStack_88 + 1;
    do {
      lVar5 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  plStack_88 = *(long **)(param_1 + 0x590);
  uStack_90 = *(undefined8 *)(param_1 + 0x588);
  if (*(long *)(param_1 + 0x590) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x590) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10a1e3a04(param_1,&uStack_90);
  plVar1 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar6 = plStack_88 + 1;
    do {
      lVar5 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  FUN_10ac6c110(param_1,param_3,param_4,param_5);
  if (cStack_49 < '\0') {
    __ZdlPv(uStack_60);
  }
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  return;
}



/* Entry: 10ac6c718; end: 10ac6c71f;  */

void FUN_10ac6c718(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uStack_90;
  long *plStack_88;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 uStack_60;
  char cStack_49;
  
  lVar5 = param_1 + -0x288;
  FUN_10ac6b6dc();
  func_0x00010ac6b824(lVar5);
  FUN_10a0ff18c(auStack_78,param_2,2);
  FUN_10ac5fb74(&uStack_90,*(undefined8 *)(param_1 + -0x1f8),auStack_78,3);
  plVar1 = plStack_88;
  uVar4 = uStack_90;
  uStack_90 = 0;
  plStack_88 = (long *)0x0;
  plVar7 = *(long **)(param_1 + 0x308);
  *(long **)(param_1 + 0x308) = plVar1;
  *(undefined8 *)(param_1 + 0x300) = uVar4;
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
  plVar1 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar7 = plStack_88 + 1;
    do {
      lVar6 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  plStack_88 = *(long **)(param_1 + 0x308);
  uStack_90 = *(undefined8 *)(param_1 + 0x300);
  if (*(long *)(param_1 + 0x308) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x308) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10a1e3a04(lVar5,&uStack_90);
  plVar1 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar7 = plStack_88 + 1;
    do {
      lVar6 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  FUN_10ac6c110(lVar5,param_3,param_4,param_5);
  if (cStack_49 < '\0') {
    __ZdlPv(uStack_60);
  }
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  return;
}



/* Entry: 10ac6c720; end: 10ac6c967;  */

void FUN_10ac6c720(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 *puStack_80;
  long *plStack_78;
  undefined8 *puStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  undefined1 uStack_51;
  
  FUN_10ac6b6dc();
  func_0x00010ac6b824(param_1);
  uStack_60 = *param_2;
  FUN_10a0a1c68(&puStack_70,&uStack_51,&uStack_60);
  plStack_78 = plStack_68;
  puStack_80 = puStack_70;
  uVar9 = *(undefined8 *)(param_1 + 0x90);
  puVar6 = (undefined8 *)0x2d0;
  __Znwm();
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_110b9fcf0;
  puVar1 = puVar6 + 3;
  FUN_10a1db410(puVar1,uVar9,&puStack_80);
  puStack_70 = puVar1;
  plStack_68 = puVar6;
  FUN_10a063ca4(&puStack_70,puVar6 + 0xb,puVar1);
  plVar3 = plStack_68;
  puVar1 = puStack_70;
  plVar2 = (long *)(param_1 + 0x588);
  puStack_70 = (undefined8 *)0x0;
  plStack_68 = (long *)0x0;
  plVar8 = *(long **)(param_1 + 0x590);
  *(long **)(param_1 + 0x590) = plVar3;
  *plVar2 = (long)puVar1;
  if (plVar8 != (long *)0x0) {
    plVar3 = plVar8 + 1;
    do {
      lVar7 = *plVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  plVar3 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar8 = plStack_68 + 1;
    do {
      lVar7 = *plVar8;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  (**(code **)(*(long *)*plVar2 + 0x98))((long *)*plVar2,&UNK_10e482b00);
  plStack_68 = *(long **)(param_1 + 0x590);
  puStack_70 = (undefined8 *)*plVar2;
  if (*(long *)(param_1 + 0x590) != 0) {
    plVar2 = (long *)(*(long *)(param_1 + 0x590) + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = *plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_10a1e3a04(param_1,&puStack_70);
  plVar2 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar3 = plStack_68 + 1;
    do {
      lVar7 = *plVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  FUN_10ac6c110(param_1,param_3,param_4,param_5);
  plVar2 = plStack_78;
  if (plStack_78 != (long *)0x0) {
    plVar3 = plStack_78 + 1;
    do {
      lVar7 = *plVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  return;
}



/* Entry: 10ac6c968; end: 10ac6c977;  */

void FUN_10ac6c968(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 *puStack_80;
  long *plStack_78;
  undefined8 *puStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  undefined1 uStack_51;
  
  lVar7 = param_1 + -0x288;
  FUN_10ac6b6dc();
  func_0x00010ac6b824(lVar7);
  uStack_60 = *param_2;
  FUN_10a0a1c68(&puStack_70,&uStack_51,&uStack_60);
  plStack_78 = plStack_68;
  puStack_80 = puStack_70;
  uVar10 = *(undefined8 *)(param_1 + -0x1f8);
  puVar6 = (undefined8 *)0x2d0;
  __Znwm();
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_110b9fcf0;
  puVar1 = puVar6 + 3;
  FUN_10a1db410(puVar1,uVar10,&puStack_80);
  puStack_70 = puVar1;
  plStack_68 = puVar6;
  FUN_10a063ca4(&puStack_70,puVar6 + 0xb,puVar1);
  plVar3 = plStack_68;
  puVar1 = puStack_70;
  plVar2 = (long *)(param_1 + 0x300);
  puStack_70 = (undefined8 *)0x0;
  plStack_68 = (long *)0x0;
  plVar9 = *(long **)(param_1 + 0x308);
  *(long **)(param_1 + 0x308) = plVar3;
  *plVar2 = (long)puVar1;
  if (plVar9 != (long *)0x0) {
    plVar3 = plVar9 + 1;
    do {
      lVar8 = *plVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  plVar3 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar9 = plStack_68 + 1;
    do {
      lVar8 = *plVar9;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  (**(code **)(*(long *)*plVar2 + 0x98))((long *)*plVar2,&UNK_10e482b00);
  plStack_68 = *(long **)(param_1 + 0x308);
  puStack_70 = (undefined8 *)*plVar2;
  if (*(long *)(param_1 + 0x308) != 0) {
    plVar2 = (long *)(*(long *)(param_1 + 0x308) + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = *plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_10a1e3a04(lVar7,&puStack_70);
  plVar2 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar3 = plStack_68 + 1;
    do {
      lVar8 = *plVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  FUN_10ac6c110(lVar7,param_3,param_4,param_5);
  plVar2 = plStack_78;
  if (plStack_78 != (long *)0x0) {
    plVar3 = plStack_78 + 1;
    do {
      lVar7 = *plVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  return;
}



/* Entry: 10ac6c978; end: 10ac6ca47;  */

void FUN_10ac6c978(long param_1,undefined8 param_2)

{
  undefined8 in_x6;
  undefined8 in_x7;
  undefined4 uStack_88;
  undefined8 uStack_84;
  undefined8 uStack_7c;
  undefined8 uStack_74;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined8 auStack_60 [2];
  undefined8 uStack_50;
  undefined8 uStack_30;
  
  if (3 < (uint)param_2) {
    if ((bRam000000011330a9e8 & 1) != 0) {
      func_0x00010ae06f08(0,1,&UNK_10f69f909,&UNK_10f69f94e,0x37,&UNK_10f69f9b7,in_x6,in_x7,param_2)
      ;
    }
    param_2 = 0;
  }
  uStack_88 = (undefined4)param_2;
  *(undefined4 *)(param_1 + 0x524) = uStack_88;
  uStack_7c = 0;
  uStack_84 = 0;
  uStack_6c = 0;
  uStack_74 = 0;
  uStack_68 = 1;
  FUN_10a19e730(auStack_60,&uStack_88,0,1);
  *(undefined8 *)(param_1 + 0x500) = auStack_60[0];
  *(undefined4 *)(param_1 + 0x508) = 0;
  *(undefined8 *)(param_1 + 0x50c) = uStack_50;
  *(undefined4 *)(param_1 + 0x514) = 0;
  *(undefined8 *)(param_1 + 0x518) = uStack_30;
  *(undefined4 *)(param_1 + 0x520) = 0x3f800000;
  FUN_10ac6cbb0(param_1);
  return;
}



/* Entry: 10ac6ca48; end: 10ac6cb4b;  */

undefined8 * FUN_10ac6ca48(undefined8 *param_1,ulong param_2)

{
  long *plVar1;
  float *pfVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  iVar7 = (int)param_2;
  puVar6 = param_1;
  if ((iVar7 < 0) || (FUN_10ac6cb4c(), (int)puVar6 <= iVar7)) {
    return puVar6;
  }
  if ((param_2 & 0xffffffff) < (ulong)((long)(param_1[0xba] - param_1[0xb9]) >> 4)) {
    pfVar2 = (float *)(param_1[0xb9] + (param_2 & 0xffffffff) * 0x10);
    if (pfVar2[2] - *pfVar2 <= 0.0) {
      return puVar6;
    }
    if (pfVar2[3] - pfVar2[1] <= 0.0) {
      return puVar6;
    }
    if (*(int *)(param_1 + 0xbc) == iVar7) {
      return puVar6;
    }
    *(int *)(param_1 + 0xbc) = iVar7;
    if (param_1[0xc1] != 0) {
      FUN_10ac3c454(param_1[0xc1],param_1 + 0xbf,param_2,pfVar2,param_1 + 0xa0);
      param_2 = (ulong)*(uint *)(param_1 + 0xbc);
    }
    lVar10 = *(long *)(param_1[0x12] + 3000);
    lVar8 = lVar10;
    func_0x00010a79d594(lVar10,param_2);
    if ((*(byte *)(lVar10 + 200) & 1) != 0) {
      FUN_10ac363d8(param_1 + 0x52,lVar8 + 8,&UNK_10e482b24);
      FUN_10ac36868(param_1 + 0x52,lVar8);
      uVar12 = *(undefined8 *)(lVar10 + 0xc0);
      uVar11 = *(undefined8 *)(lVar10 + 0xb8);
      if (*(long *)(lVar10 + 0xc0) != 0) {
        plVar9 = (long *)(*(long *)(lVar10 + 0xc0) + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = *plVar9 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      plVar9 = (long *)param_1[0x98];
      param_1[0x98] = uVar12;
      param_1[0x97] = uVar11;
      if (plVar9 != (long *)0x0) {
        plVar1 = plVar9 + 1;
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
      return param_1 + 0x97;
    }
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10ac6cb4c);
  (*pcVar5)();
}



/* Entry: 10ac6cb4c; end: 10ac6cbaf;  */

int FUN_10ac6cb4c(long param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  if (((*(long *)(param_1 + 0x540) == 0) && (*(long *)(param_1 + 0x98) != 0)) &&
     ((*(byte *)(param_1 + 0x628) & 10) != 0)) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x90) + 3000);
    iVar1 = (int)((ulong)(*(long *)(lVar2 + 0xa8) - *(long *)(lVar2 + 0xa0)) >> 3) * -0x5cc0ed73;
    iVar3 = (int)((ulong)(*(long *)(param_1 + 0x5d0) - *(long *)(param_1 + 0x5c8)) >> 4);
    if (iVar3 <= iVar1) {
      iVar1 = iVar3;
    }
    return iVar1;
  }
  return 0;
}



/* Entry: 10ac6cbb0; end: 10ac6cc77;  */

undefined *** FUN_10ac6cbb0(undefined ***param_1)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  code *pcVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined **ppuVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  undefined ***pppuVar10;
  undefined ***pppuVar11;
  undefined ***pppuVar12;
  ulong uVar13;
  int iVar14;
  undefined4 uVar15;
  undefined ***pppuVar16;
  ulong uVar17;
  uint uVar18;
  undefined ***pppuVar19;
  undefined ***unaff_x26;
  long lStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
  undefined4 uStack_130;
  undefined8 uStack_12c;
  undefined4 uStack_124;
  undefined1 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  undefined ***pppuStack_100;
  undefined ***pppuStack_f8;
  undefined ***pppuStack_f0;
  undefined ***pppuStack_e8;
  undefined ***pppuStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined ***pppuStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined1 auStack_b0 [8];
  code *pcStack_a8;
  undefined **ppuStack_a0;
  undefined ***pppuStack_98;
  undefined1 uStack_90;
  long lStack_68;
  
  pppuVar19 = (undefined ***)param_1[0x13];
  if (pppuVar19 == (undefined ***)0x0) {
    return param_1;
  }
  pppuVar8 = pppuVar19;
  (*(code *)(*pppuVar19)[0x16])();
  pppuVar9 = pppuVar19;
  (*(code *)(*pppuVar19)[0x17])();
  pppuVar10 = pppuVar19;
  (*(code *)(*pppuVar19)[0x1c])();
  pppuVar11 = pppuVar19;
  (*(code *)(*pppuVar19)[0x1d])();
  (*(code *)(*pppuVar19)[0x1a])();
  uVar13 = 0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_98 = param_1 + 0x15;
  uVar2 = *(ushort *)((long)param_1 + 0x101);
  *(ushort *)((long)param_1 + 0x101) = uVar2 & 0xff80 | uVar2 + 1 & 0x7f;
  uStack_90 = 1;
  pcStack_a8 = FUN_10a1d0710;
  ppuStack_a0 = &PTR_FUN_110bad6c8;
  pppuVar12 = pppuVar9;
  pppuVar5 = pppuVar10;
  pppuVar6 = pppuVar11;
  pppuVar16 = pppuVar19;
  if (*(int *)(param_1 + 0x3d) != (int)pppuVar8) {
    unaff_x26 = param_1 + 0x3d;
    *(int *)unaff_x26 = (int)pppuVar8;
    func_0x00010a1bd170(auStack_b0);
    func_0x00010a20efac(unaff_x26);
  }
  iVar14 = (int)pppuVar6;
  uVar15 = SUB84(pppuVar16,0);
  uVar18 = (uint)pppuVar5;
  if (*(int *)((long)param_1 + 0x1ec) != (int)pppuVar9) {
    unaff_x26 = (undefined ***)((long)param_1 + 0x1ec);
    *(int *)unaff_x26 = (int)pppuVar9;
    func_0x00010a1bd170(auStack_b0);
    func_0x00010a20f0c4(unaff_x26);
  }
  if (*(int *)(param_1 + 0x3f) != (int)pppuVar10) {
    pppuVar9 = param_1 + 0x3f;
    *(int *)pppuVar9 = (int)pppuVar10;
    func_0x00010a1bd170(auStack_b0);
    FUN_10a1fd58c(pppuVar9);
  }
  if (*(int *)((long)param_1 + 0x1fc) != (int)pppuVar11) {
    pppuVar10 = (undefined ***)((long)param_1 + 0x1fc);
    *(int *)pppuVar10 = (int)pppuVar11;
    func_0x00010a1bd170(auStack_b0);
    func_0x00010a20f1dc(pppuVar10);
  }
  *(char *)(param_1 + 0x40) = (char)pppuVar19;
  if (*(int *)(param_1 + 0x3e) != 0) {
    pppuVar19 = param_1 + 0x3e;
    *(undefined4 *)pppuVar19 = 0;
    func_0x00010a1bd170(auStack_b0);
    func_0x00010a20f328(pppuVar19);
  }
  *(undefined4 *)((long)param_1 + 500) = 0;
  *(undefined1 *)((long)param_1 + 0x201) = 1;
  if (*(char *)(param_1 + 0x3c) == '\x01') {
    func_0x00010a042d30(param_1 + 0x3a);
    *(undefined1 *)(param_1 + 0x3c) = 0;
  }
  FUN_10a044790(&pcStack_a8);
  pppuVar5 = &ppuStack_a0;
  (*(code *)*ppuStack_a0)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return pppuVar5;
  }
  ___stack_chk_fail();
  FUN_10a044790(&pcStack_a8);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  pppuVar6 = pppuVar5;
  __Unwind_Resume();
  uStack_d8 = 0;
  uStack_d0 = 0;
  pcStack_b8 = FUN_10a1da580;
  pppuStack_100 = unaff_x26;
  pppuStack_f8 = pppuVar9;
  pppuStack_f0 = pppuVar10;
  pppuStack_e8 = pppuVar11;
  pppuStack_e0 = pppuVar19;
  pppuStack_c8 = pppuVar5;
  puStack_c0 = &stack0xfffffffffffffff0;
  pppuVar6[0x58] = &PTR_FUN_110c383b8;
  *(undefined2 *)(pppuVar6 + 0x5b) = 0x100;
  pppuVar6[0x5a] = (undefined **)0x0;
  pppuVar6[0x59] = (undefined **)0x0;
  pppuVar19 = pppuVar6;
  FUN_10a1da04c();
  *pppuVar19 = &PTR_DAT_110bae008;
  pppuVar19[2] = &PTR_FUN_110bae138;
  pppuVar19[5] = &PTR_FUN_110bae168;
  pppuVar19[0x58] = &PTR_FUN_110bae210;
  pppuVar19[0x15] = &PTR_FUN_110bae1c0;
  uVar1 = 4;
  if (0x26 < uVar18 - 0x30) {
    uVar1 = uVar18;
  }
  pppuVar19[0x52] = (undefined **)0x0;
  pppuVar19[0x51] = (undefined **)0x0;
  pppuVar19[0x54] = (undefined **)0x0;
  pppuVar19[0x53] = (undefined **)0x0;
  pppuVar19[0x56] = (undefined **)0x0;
  pppuVar19[0x55] = (undefined **)0x0;
  pppuVar19[0x57] = (undefined **)0x0;
  pppuVar9 = pppuVar8;
  FUN_10a2421c8();
  ppuVar7 = pppuVar9[0x45];
  (**(code **)(*ppuVar7 + 0x68))();
  uVar18 = *(uint *)(ppuVar7 + 0x11);
  if ((0 < (int)uVar18) && (uVar18 < (uint)pppuVar12 || uVar18 < (uint)uVar13)) {
    FUN_10a0ee900(&lStack_148,&UNK_10f643e2d,0x5c);
    FUN_10a0029c0(&lStack_148);
LAB_10a1da858:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a1da85c);
    (*pcVar4)();
  }
  uVar18 = uVar1;
  if (uVar1 == 0x22) {
    uVar18 = 0x25;
  }
  uVar3 = 0x24;
  if (uVar1 != 0x21) {
    uVar3 = uVar18;
  }
  uVar18 = 1;
  FUN_109fc8e58(1,1,uVar3);
  if (uVar18 != 0) {
    uVar17 = (uVar13 & 0xffffffff) * ((ulong)pppuVar12 & 0xffffffff);
    uVar3 = 0;
    if (uVar18 != 0) {
      uVar3 = 0xffffffff / uVar18;
    }
    if (uVar3 <= uVar17 && uVar17 - uVar3 != 0) {
      FUN_10a0ee900(&lStack_148,&UNK_10f643e8a,0x8b);
      FUN_10a0029c0(&lStack_148);
      goto LAB_10a1da858;
    }
  }
  FUN_10a1da3a4(pppuVar6,pppuVar12,uVar13,0,0,uVar1,0,0);
  FUN_10a2421c8();
  ppuVar7 = pppuVar8[0x45];
  lStack_148 = (long)pppuVar12 << 0x20;
  uStack_140 = CONCAT44(1,(uint)uVar13);
  uStack_138 = (ulong)uVar1;
  uStack_12c = 0x100000001;
  uStack_124 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_130 = uVar15;
  (**(code **)(*ppuVar7 + 0x20))(ppuVar7,&lStack_148);
  FUN_10a099d88(pppuVar19 + 0x51,ppuVar7);
  if (iVar14 != 0) {
    lStack_148 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    pppuVar19 = pppuVar6;
    (*(code *)(*pppuVar6)[0x1d])();
    if ((int)pppuVar19 == 0x21) {
      pppuVar19 = (undefined ***)0x24;
    }
    else if ((int)pppuVar19 == 0x22) {
      pppuVar19 = (undefined ***)0x25;
    }
    pppuVar9 = pppuVar6;
    (*(code *)(*pppuVar6)[0x16])();
    pppuVar10 = pppuVar6;
    (*(code *)(*pppuVar6)[0x17])(pppuVar6);
    FUN_109fc8e58(pppuVar9,pppuVar10,pppuVar19);
    if (((ulong)pppuVar9 & 0xffffffff) != 0) {
      func_0x000107c27d58(&lStack_148);
    }
    pppuVar19 = pppuVar6;
    (*(code *)(*pppuVar6)[0x16])();
    pppuVar9 = pppuVar6;
    (*(code *)(*pppuVar6)[0x17])();
    uStack_108 = (ulong)pppuVar19 & 0xffffffff | (long)pppuVar9 << 0x20;
    uStack_110 = 0;
    FUN_10a1daa20(pppuVar6,&uStack_110,lStack_148);
    if (lStack_148 != 0) {
      uStack_140 = lStack_148;
      __ZdlPv();
    }
  }
  return pppuVar6;
}



/* Entry: 10ac6cc78; end: 10ac6cccf;  */

long FUN_10ac6cc78(long param_1)

{
  long lVar1;
  long lVar2;
  
  if ((*(char *)(param_1 + 0x5b8) == '\x01') && (lVar2 = *(long *)(param_1 + 0x608), lVar2 != 0)) {
    lVar1 = lVar2 + 0x2b0;
                    /* WARNING: Could not recover jumptable at 0x00010ac6cc98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar2 + 0x2b0) + 0x10))(lVar1);
    return lVar1;
  }
  return param_1 + 0x4c8;
}



/* Entry: 10ac6ccd0; end: 10ac6cdff;  */

void FUN_10ac6ccd0(undefined4 param_1,undefined4 param_2,long param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  ulong uVar6;
  long lVar7;
  long lStack_30;
  long *plStack_28;
  
  if ((*param_4 != 0) &&
     ((-1 < *(int *)(param_3 + 0x5e0) ||
      ((ulong)(long)*(int *)(param_3 + 0x5e0) <
       (ulong)(*(long *)(param_3 + 0x5d0) - *(long *)(param_3 + 0x5c8) >> 4))))) {
    FUN_10ac6b6dc(param_3);
    uVar6 = (ulong)*(int *)(param_3 + 0x5e0);
    if ((ulong)(*(long *)(param_3 + 0x5d0) - *(long *)(param_3 + 0x5c8) >> 4) <= uVar6) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10ac6cdec);
      (*pcVar5)();
    }
    FUN_10ac3c454(*param_4,param_3 + 0x5f8,uVar6,*(long *)(param_3 + 0x5c8) + uVar6 * 0x10,
                  param_3 + 0x500);
    FUN_10ac6ce00(param_3 + 0x608,param_4);
    lVar7 = *(long *)(param_3 + 0x608);
    *(undefined4 *)(param_3 + 0x5bc) = *(undefined4 *)(lVar7 + 0x56c);
    FUN_10ac3c930(lVar7);
    *(undefined4 *)(param_3 + 0x5c0) = param_1;
    *(undefined4 *)(param_3 + 0x5c4) = param_2;
    if (*(char *)(param_3 + 0x5b8) == '\x01') {
      plStack_28 = *(long **)(param_3 + 0x610);
      if (plStack_28 != (long *)0x0) {
        plVar1 = plStack_28 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      lStack_30 = lVar7;
      FUN_10a1e3a04(param_3,&lStack_30);
      plVar1 = plStack_28;
      if (plStack_28 != (long *)0x0) {
        plVar2 = plStack_28 + 1;
        do {
          lVar7 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_28 + 0x10))(plStack_28);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
        }
      }
    }
  }
  return;
}



/* Entry: 10ac6ce00; end: 10ac6ceb3;  */

undefined8 * FUN_10ac6ce00(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  if (param_2[1] != 0) {
    plVar5 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
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
  return param_1;
}



/* Entry: 10ac6ceb4; end: 10ac6cf3b;  */

void FUN_10ac6ceb4(long param_1,long param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  code **ppcVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  long *plVar8;
  long lVar9;
  code **ppcVar10;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined ***pppuStack_a0;
  code **ppcStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  code *pcStack_58;
  code *pcStack_50;
  long lStack_28;
  
  if ((((*(char *)(param_1 + 0x5e4) == '\x01') &&
       (plVar8 = *(long **)(*(long *)(*(long *)(param_1 + 0x90) + 3000) + 0x100),
       plVar8 != (long *)0x0)) && (lVar9 = *(long *)(*plVar8 + 0x208), lVar9 != 0)) &&
     (((*(char *)(lVar9 + 0x2d8) == '\x01' && (*(byte *)(lVar9 + 0x2c8) - 3 < 3)) &&
      (ppcVar10 = *(code ***)(param_1 + 0x5e8), ppcVar10 != (code **)0x0)))) {
    *(undefined1 *)(param_1 + 0x5e4) = 0;
    if (*(char *)(ppcVar10 + 8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010ac6cf30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**ppcVar10)(ppcVar10);
      return;
    }
    if (*(char *)(ppcVar10 + 8) == '\x02') {
      lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppcVar5 = ppcVar10;
      FUN_10a688b40();
      if (ppcVar5 == (code **)0x0) {
        pppuVar6 = (undefined ***)0x0;
        if (param_2 != 0) {
          pcStack_50 = ppcVar10[1];
          pcStack_58 = *ppcVar10;
          if (ppcVar10[1] != (code *)0x0) {
            pcVar1 = ppcVar10[1] + 8;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
              if (bVar3) {
                *(long *)pcVar1 = *(long *)pcVar1 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          pcStack_68 = FUN_10a05e8a0;
          ppuStack_60 = &PTR_DAT_110b9fa70;
          ppcVar5 = &pcStack_68;
          uStack_78 = 0;
          uStack_70 = 0;
          FUN_10a4634ec(param_2,&pcStack_68);
          pppuVar6 = &ppuStack_60;
          (*(code *)*ppuStack_60)();
        }
      }
      else {
        *ppcVar5 = (code *)CONCAT44((int)((ulong)*ppcVar5 >> 0x20) + 1,(int)*ppcVar5 + 1);
        pppuVar6 = (undefined ***)*ppcVar10;
        FUN_10a05e740();
        iVar4 = *(int *)((long)ppcVar5 + 4) + -1;
        *(int *)((long)ppcVar5 + 4) = iVar4;
        if (iVar4 == 0) {
          *(undefined4 *)ppcVar5 = 0;
        }
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
        return;
      }
      ___stack_chk_fail();
      (*(code *)*ppuStack_60)(ppcVar5 + 1);
      func_0x00010a004dac(&uStack_78);
      pppuVar7 = pppuVar6;
      __Unwind_Resume();
      pcStack_88 = FUN_10a05e740;
      pppuStack_a0 = pppuVar6;
      ppcStack_98 = ppcVar5;
      puStack_90 = &stack0xfffffffffffffff0;
      func_0x000109884c0c(&puStack_b0,pppuVar7 + 1,*pppuVar7);
      func_0x000109884820(&puStack_a8,&puStack_b0,*pppuVar7);
      if (puStack_b0 != (undefined8 *)0x0) {
        (**(code **)*puStack_b0)();
      }
      (**(code **)(**pppuVar7 + 0x30))(&puStack_b0);
      FUN_10a05e824(*pppuVar7,&puStack_b0,&puStack_a8);
      if (puStack_b0 != (undefined8 *)0x0) {
        (**(code **)*puStack_b0)();
      }
      if (puStack_a8 != (undefined8 *)0x0) {
        (**(code **)*puStack_a8)();
      }
      return;
    }
  }
  return;
}



/* Entry: 10ac6cf3c; end: 10ac6cfeb;  */

void FUN_10ac6cf3c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  lVar1 = *(long *)(param_1 + 0x90);
  func_0x000107c2b054(auStack_48,&UNK_10f69f0c6);
  if (lVar1 != 0) {
    FUN_10a76c080(*(undefined8 *)(lVar1 + 0x8d8),auStack_48);
  }
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  if (((*(long *)(param_1 + 0x540) == 0) && (*(long *)(param_1 + 0x98) != 0)) &&
     ((*(byte *)(param_1 + 0x628) & 10) != 0)) {
    FUN_10ac6ca48(param_1,param_2);
  }
  return;
}



/* Entry: 10ac6cfec; end: 10ac6d03f;  */

void FUN_10ac6cfec(void)

{
  return;
}



/* Entry: 10ac6d040; end: 10ac6d157;  */

void FUN_10ac6d040(long param_1,uint param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lStack_30;
  long *plStack_28;
  
  if (*(byte *)(param_1 + 0x5b8) == param_2) {
    return;
  }
  *(char *)(param_1 + 0x5b8) = (char)param_2;
  lVar4 = *(long *)(param_1 + 0x608);
  if (lVar4 == 0) {
    return;
  }
  lStack_30 = *(long *)(param_1 + 0x5f8);
  if (lStack_30 == 0) {
    return;
  }
  if (param_2 == 0) {
    plStack_28 = *(long **)(param_1 + 0x600);
    if (plStack_28 != (long *)0x0) {
      plVar1 = plStack_28 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a1e3a04(param_1,&lStack_30);
    if (plStack_28 == (long *)0x0) goto LAB_10ac6d128;
    plVar1 = plStack_28 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    plStack_28 = *(long **)(param_1 + 0x610);
    if (plStack_28 != (long *)0x0) {
      plVar1 = plStack_28 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lStack_30 = lVar4;
    FUN_10a1e3a04(param_1,&lStack_30);
    if (plStack_28 == (long *)0x0) goto LAB_10ac6d128;
    plVar1 = plStack_28 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar1 = plStack_28;
  if (lVar4 == 0) {
    (**(code **)(*plStack_28 + 0x10))(plStack_28);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
  }
LAB_10ac6d128:
  FUN_10ac6cbb0(param_1);
  return;
}



/* Entry: 10ac6d158; end: 10ac6d1f3;  */

void FUN_10ac6d158(long param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  lVar2 = *(long *)(param_1 + 0x90);
  func_0x000107c2b054(auStack_48,&UNK_10f69f11c);
  if (lVar2 != 0) {
    FUN_10a76c080(*(undefined8 *)(lVar2 + 0x8d8),auStack_48);
  }
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  uVar1 = 8;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 0x628) = *(uint *)(param_1 + 0x628) & 0xfffffff7 | uVar1;
  return;
}



/* Entry: 10ac6d1f4; end: 10ac6d263;  */

void FUN_10ac6d1f4(long param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_58 [40];
  
  if (((param_2 == 2) && (*(char *)(param_1 + 0x580) == '\x01')) &&
     ((*(byte *)(param_1 + 0x581) & 1) == 0)) {
    *(undefined1 *)(param_1 + 0x581) = 1;
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x90) + 3000);
    FUN_10ac6b2cc(auStack_58);
    FUN_10a79c004(uVar2,1,3,auStack_58);
    FUN_10a7575a8(auStack_58);
    lVar1 = *(long *)(param_1 + 0x90) + 0xd48;
    FUN_10a5aeb74(lVar1,&PTR_DAT_110c23fb8);
    for (lVar3 = *(long *)(lVar1 + 8); lVar3 != lVar1; lVar3 = *(long *)(lVar3 + 8)) {
      (**(code **)**(undefined8 **)(lVar3 + 0x28))
                (*(undefined8 **)(lVar3 + 0x28),*(undefined4 *)(param_1 + 0x628));
    }
    return;
  }
  return;
}



/* Entry: 10ac6d264; end: 10ac6d383;  */

long * FUN_10ac6d264(long param_1,undefined4 param_2,long param_3,long *param_4)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined **ppuVar5;
  uint uVar6;
  long lVar7;
  undefined **ppuVar8;
  long *plVar9;
  undefined *puVar10;
  long *plVar11;
  undefined4 uVar12;
  undefined *puStack_b8;
  long *plStack_b0;
  undefined *puStack_a8;
  long *plStack_a0;
  undefined *puStack_98;
  long *plStack_90;
  char cStack_81;
  undefined *puStack_48;
  long lStack_40;
  long *plStack_38;
  
  uVar12 = (undefined4)param_1;
  if ((*(long *)(param_3 + 0x550) != 0) &&
     (plVar9 = (long *)(*(long *)(*(long *)(param_3 + 0x550) + 0x388) + 0x38), *plVar9 != 0)) {
    return plVar9;
  }
  lVar7 = *(long *)(param_3 + 0x560);
  if ((lVar7 != 0) && (*(long *)(lVar7 + 0x380) != 0)) {
    return (long *)(lVar7 + 0x380);
  }
  lVar7 = *(long *)(param_3 + 0x98);
  if (lVar7 != 0) {
    plVar9 = (long *)0x1;
    FUN_10a088744();
    puStack_48 = (undefined *)CONCAT44(puStack_48._4_4_,(int)lVar7);
    if (plVar9 == (long *)0x0) {
      lStack_40 = 0;
      plStack_38 = (long *)0x0;
    }
    else {
      plStack_38 = (long *)plVar9[1];
      param_1 = *plVar9;
      lStack_40 = param_1;
      if (plVar9[1] != 0) {
        plVar9 = (long *)(plVar9[1] + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = *plVar9 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
    }
    uVar12 = (undefined4)param_1;
    plVar9 = (long *)(param_3 + 0x570);
    param_4 = &lStack_40;
    FUN_10a00e5c4(plVar9);
    plVar11 = plStack_38;
    if (plStack_38 != (long *)0x0) {
      plVar1 = plStack_38 + 1;
      do {
        lVar7 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
    }
    if (*plVar9 != 0) {
      return plVar9;
    }
  }
  lVar7 = *(long *)(*(long *)(*(long *)(param_3 + 0x90) + 0x100) + 0x260);
  puStack_48 = &UNK_10f653c20;
  lStack_40 = 0x21;
  if (lVar7 != 0) {
    return (long *)(lVar7 + 0x128);
  }
  ppuVar5 = &puStack_48;
  FUN_10a0edfc4();
  plVar9 = param_4;
  (**(code **)(*param_4 + 0x248))(param_4);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(ppuVar5 + 0xf,plVar9);
  plVar9 = param_4;
  (**(code **)(*param_4 + 0x200))(param_4,&PTR_DAT_110c618f8);
  if ((int)plVar9 == 0) {
    plVar9 = param_4;
    (**(code **)(*param_4 + 0x200))(param_4,&PTR_DAT_110c61958);
    if ((int)plVar9 != 0) {
      plVar9 = param_4;
      (**(code **)(*param_4 + 200))(param_4,&PTR_DAT_110c61958);
      *(int *)(ppuVar5 + 0xc5) = (int)plVar9;
    }
  }
  else {
    plVar9 = param_4;
    (**(code **)(*param_4 + 0x38))(param_4,&PTR_DAT_110c618f8,2);
    uVar2 = (uint)plVar9 & 0xff;
    if (uVar2 != 2) {
      uVar2 = 0;
    }
    if (((ulong)plVar9 & 0xff) != 0) {
      uVar2 = uVar2 + 1;
    }
    plVar11 = param_4;
    (**(code **)(*param_4 + 0x38))(param_4,&PTR_DAT_110c61918,1);
    uVar6 = 4;
    if (((uint)plVar11 & 0xff) != 1) {
      uVar6 = 0;
    }
    *(uint *)(ppuVar5 + 0xc5) = uVar2 | uVar6;
    if ((((uint)plVar9 & 0xff) == 2) &&
       (plVar9 = param_4, (**(code **)(*param_4 + 0x58))(param_4,&PTR_DAT_110c61938,0),
       (int)plVar9 != 0)) {
      puVar10 = ppuVar5[0x12];
      func_0x000107c2b054(&puStack_98,&UNK_10f69f149);
      if (puVar10 != (undefined *)0x0) {
        FUN_10a76c080(*(undefined8 *)(puVar10 + 0x8d8),&puStack_98);
      }
      if (cStack_81 < '\0') {
        __ZdlPv(puStack_98);
      }
      *(uint *)(ppuVar5 + 0xc5) = *(uint *)(ppuVar5 + 0xc5) | 8;
    }
  }
  plVar9 = param_4;
  (**(code **)(*param_4 + 0x58))(param_4,&PTR_DAT_110c61978,0);
  *(char *)(ppuVar5 + 0xb0) = (char)plVar9;
  plVar9 = param_4;
  (**(code **)(*param_4 + 0x58))(param_4,&PTR_DAT_110c61998,0);
  *(char *)(ppuVar5 + 0xb7) = (char)plVar9;
  plVar9 = param_4;
  (**(code **)(*param_4 + 0x38))(param_4,&PTR_DAT_110c619b8,0);
  *(int *)((long)ppuVar5 + 0x5bc) = (int)plVar9;
  (**(code **)(*param_4 + 0xe0))(param_4,&PTR_DAT_110c619d8,&UNK_10e509498);
  *(undefined4 *)(ppuVar5 + 0xb8) = uVar12;
  *(undefined4 *)((long)ppuVar5 + 0x5c4) = param_2;
  plVar9 = param_4;
  (**(code **)(*param_4 + 0x200))(param_4,&PTR_DAT_110c619f8);
  if ((int)plVar9 != 0) {
    (**(code **)(*param_4 + 0x210))(param_4,&PTR_DAT_110c619f8);
    (**(code **)(*param_4 + 600))(&puStack_98,param_4,0);
    if ((puStack_98 == (undefined *)0x0) ||
       (puVar10 = puStack_98, ___dynamic_cast(puStack_98,&PTR_DAT_110b9fe10,&PTR_DAT_110c5f280,0),
       puVar10 == (undefined *)0x0)) {
      ppuVar8 = &puStack_a8;
    }
    else {
      plStack_a0 = plStack_90;
      ppuVar8 = &puStack_98;
      puStack_a8 = puVar10;
    }
    *ppuVar8 = (undefined *)0x0;
    ppuVar8[1] = (undefined *)0x0;
    plVar9 = plStack_90;
    if (plStack_90 != (long *)0x0) {
      plVar11 = plStack_90 + 1;
      do {
        lVar7 = *plVar11;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar4) {
          *plVar11 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_90 + 0x10))(plStack_90);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    ppuVar8 = ppuVar5 + 0xc1;
    func_0x00010ac6b7c0(ppuVar8,&puStack_a8);
    plVar9 = plStack_a0;
    if (plStack_a0 != (long *)0x0) {
      plVar11 = plStack_a0 + 1;
      do {
        lVar7 = *plVar11;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar4) {
          *plVar11 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    (**(code **)(*param_4 + 0x220))(param_4);
    if (*ppuVar8 != (undefined *)0x0) {
      puVar10 = ppuVar5[0x12];
      func_0x000107c2b054(&puStack_98,&UNK_10f69f17c);
      if (puVar10 != (undefined *)0x0) {
        FUN_10a76c080(*(undefined8 *)(puVar10 + 0x8d8),&puStack_98);
      }
      if (cStack_81 < '\0') {
        __ZdlPv(puStack_98);
      }
      plVar9 = param_4;
      (**(code **)(*param_4 + 0x200))(param_4,&PTR_DAT_110c619b8);
      puVar10 = *ppuVar8;
      if ((int)plVar9 == 0) {
        *(undefined4 *)((long)ppuVar5 + 0x5bc) = *(undefined4 *)(puVar10 + 0x56c);
        FUN_10ac3c930();
        *(undefined4 *)(ppuVar5 + 0xb8) = uVar12;
        *(undefined4 *)((long)ppuVar5 + 0x5c4) = param_2;
      }
      else {
        *(undefined4 *)(puVar10 + 0x56c) = *(undefined4 *)((long)ppuVar5 + 0x5bc);
        *(undefined **)(puVar10 + 0x504) = ppuVar5[0xb8];
      }
    }
  }
  plVar9 = param_4;
  (**(code **)(*param_4 + 0x200))(param_4,&PTR_DAT_110c61a18);
  if ((int)plVar9 == 0) {
    return plVar9;
  }
  (**(code **)(*param_4 + 0x210))(param_4,&PTR_DAT_110c61a18);
  (**(code **)(*param_4 + 600))(&puStack_98,param_4,0);
  if ((puStack_98 == (undefined *)0x0) ||
     (puVar10 = puStack_98, ___dynamic_cast(puStack_98,&PTR_DAT_110b9fe10,&PTR_DAT_110c5f2c8,0),
     puVar10 == (undefined *)0x0)) {
    ppuVar8 = &puStack_a8;
  }
  else {
    plStack_a0 = plStack_90;
    ppuVar8 = &puStack_98;
    puStack_a8 = puVar10;
  }
  *ppuVar8 = (undefined *)0x0;
  ppuVar8[1] = (undefined *)0x0;
  plVar9 = plStack_90;
  if (plStack_90 != (long *)0x0) {
    plVar11 = plStack_90 + 1;
    do {
      lVar7 = *plVar11;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *plVar11 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  plVar9 = plStack_a0;
  if (puStack_a8 == (undefined *)0x0) {
    (**(code **)(*param_4 + 600))(&puStack_98,param_4,0);
    if ((puStack_98 == (undefined *)0x0) ||
       (___dynamic_cast(puStack_98,&PTR_DAT_110b9fe10,&PTR_DAT_110c6a2a8,0),
       puStack_98 == (undefined *)0x0)) {
      ppuVar8 = &puStack_b8;
    }
    else {
      plStack_b0 = plStack_90;
      ppuVar8 = &puStack_98;
      puStack_b8 = puStack_98;
    }
    *ppuVar8 = (undefined *)0x0;
    ppuVar8[1] = (undefined *)0x0;
    if (plStack_90 != (long *)0x0) {
      plVar9 = plStack_90 + 1;
      do {
        lVar7 = *plVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *plVar9 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_90 + 0x10))(plStack_90);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_90);
      }
    }
    plVar9 = plStack_b0;
    if (puStack_b8 != (undefined *)0x0) {
      if (plStack_b0 != (long *)0x0) {
        plVar11 = plStack_b0 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = *plVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      ppuVar5[0xaa] = puStack_b8;
      plVar11 = (long *)ppuVar5[0xab];
      ppuVar5[0xab] = (undefined *)plVar9;
      if (plVar11 != (long *)0x0) {
        plVar9 = plVar11 + 1;
        do {
          lVar7 = *plVar9;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = lVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
        }
      }
    }
    plVar11 = plStack_b0;
    if (plStack_b0 == (long *)0x0) goto LAB_10ac6d9a0;
    plVar9 = plStack_b0 + 1;
    do {
      lVar7 = *plVar9;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 != 0) goto LAB_10ac6d9a0;
    (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
  }
  else {
    if (plStack_a0 != (long *)0x0) {
      plVar11 = plStack_a0 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar4) {
          *plVar11 = *plVar11 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    ppuVar5[0xac] = puStack_a8;
    plVar11 = (long *)ppuVar5[0xad];
    ppuVar5[0xad] = (undefined *)plVar9;
    if (plVar11 == (long *)0x0) goto LAB_10ac6d9a0;
    plVar9 = plVar11 + 1;
    do {
      lVar7 = *plVar9;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 != 0) goto LAB_10ac6d9a0;
    (**(code **)(*plVar11 + 0x10))(plVar11);
  }
  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
LAB_10ac6d9a0:
  plVar9 = plStack_a0;
  if (plStack_a0 != (long *)0x0) {
    plVar11 = plStack_a0 + 1;
    do {
      lVar7 = *plVar11;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *plVar11 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  (**(code **)(*param_4 + 0x220))(param_4);
  return param_4;
}



/* Entry: 10ac6d384; end: 10ac6dab3;  */

void FUN_10ac6d384(undefined4 param_1,undefined4 param_2,long param_3,long *param_4)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  long lStack_68;
  long *plStack_60;
  long lStack_58;
  long *plStack_50;
  long lStack_48;
  long *plStack_40;
  char cStack_31;
  
  plVar8 = param_4;
  (**(code **)(*param_4 + 0x248))(param_4);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_3 + 0x78,plVar8);
  plVar8 = param_4;
  (**(code **)(*param_4 + 0x200))(param_4,&PTR_DAT_110c618f8);
  if ((int)plVar8 == 0) {
    plVar8 = param_4;
    (**(code **)(*param_4 + 0x200))(param_4,&PTR_DAT_110c61958);
    if ((int)plVar8 != 0) {
      plVar8 = param_4;
      (**(code **)(*param_4 + 200))(param_4,&PTR_DAT_110c61958);
      *(int *)(param_3 + 0x628) = (int)plVar8;
    }
  }
  else {
    plVar8 = param_4;
    (**(code **)(*param_4 + 0x38))(param_4,&PTR_DAT_110c618f8,2);
    uVar2 = (uint)plVar8 & 0xff;
    if (uVar2 != 2) {
      uVar2 = 0;
    }
    if (((ulong)plVar8 & 0xff) != 0) {
      uVar2 = uVar2 + 1;
    }
    plVar5 = param_4;
    (**(code **)(*param_4 + 0x38))(param_4,&PTR_DAT_110c61918,1);
    uVar6 = 4;
    if (((uint)plVar5 & 0xff) != 1) {
      uVar6 = 0;
    }
    *(uint *)(param_3 + 0x628) = uVar2 | uVar6;
    if ((((uint)plVar8 & 0xff) == 2) &&
       (plVar8 = param_4, (**(code **)(*param_4 + 0x58))(param_4,&PTR_DAT_110c61938,0),
       (int)plVar8 != 0)) {
      lVar7 = *(long *)(param_3 + 0x90);
      func_0x000107c2b054(&lStack_48,&UNK_10f69f149);
      if (lVar7 != 0) {
        FUN_10a76c080(*(undefined8 *)(lVar7 + 0x8d8),&lStack_48);
      }
      if (cStack_31 < '\0') {
        __ZdlPv(lStack_48);
      }
      *(uint *)(param_3 + 0x628) = *(uint *)(param_3 + 0x628) | 8;
    }
  }
  plVar8 = param_4;
  (**(code **)(*param_4 + 0x58))(param_4,&PTR_DAT_110c61978,0);
  *(char *)(param_3 + 0x580) = (char)plVar8;
  plVar8 = param_4;
  (**(code **)(*param_4 + 0x58))(param_4,&PTR_DAT_110c61998,0);
  *(char *)(param_3 + 0x5b8) = (char)plVar8;
  plVar8 = param_4;
  (**(code **)(*param_4 + 0x38))(param_4,&PTR_DAT_110c619b8,0);
  *(int *)(param_3 + 0x5bc) = (int)plVar8;
  (**(code **)(*param_4 + 0xe0))(param_4,&PTR_DAT_110c619d8,&UNK_10e509498);
  *(undefined4 *)(param_3 + 0x5c0) = param_1;
  *(undefined4 *)(param_3 + 0x5c4) = param_2;
  plVar8 = param_4;
  (**(code **)(*param_4 + 0x200))(param_4,&PTR_DAT_110c619f8);
  if ((int)plVar8 != 0) {
    (**(code **)(*param_4 + 0x210))(param_4,&PTR_DAT_110c619f8);
    (**(code **)(*param_4 + 600))(&lStack_48,param_4,0);
    if ((lStack_48 == 0) ||
       (lVar7 = lStack_48, ___dynamic_cast(lStack_48,&PTR_DAT_110b9fe10,&PTR_DAT_110c5f280,0),
       lVar7 == 0)) {
      plVar8 = &lStack_58;
    }
    else {
      plStack_50 = plStack_40;
      plVar8 = &lStack_48;
      lStack_58 = lVar7;
    }
    *plVar8 = 0;
    plVar8[1] = 0;
    plVar8 = plStack_40;
    if (plStack_40 != (long *)0x0) {
      plVar5 = plStack_40 + 1;
      do {
        lVar7 = *plVar5;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar4) {
          *plVar5 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_40 + 0x10))(plStack_40);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    plVar8 = (long *)(param_3 + 0x608);
    func_0x00010ac6b7c0(plVar8,&lStack_58);
    plVar5 = plStack_50;
    if (plStack_50 != (long *)0x0) {
      plVar1 = plStack_50 + 1;
      do {
        lVar7 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_50 + 0x10))(plStack_50);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    (**(code **)(*param_4 + 0x220))(param_4);
    if (*plVar8 != 0) {
      lVar7 = *(long *)(param_3 + 0x90);
      func_0x000107c2b054(&lStack_48,&UNK_10f69f17c);
      if (lVar7 != 0) {
        FUN_10a76c080(*(undefined8 *)(lVar7 + 0x8d8),&lStack_48);
      }
      if (cStack_31 < '\0') {
        __ZdlPv(lStack_48);
      }
      plVar5 = param_4;
      (**(code **)(*param_4 + 0x200))(param_4,&PTR_DAT_110c619b8);
      lVar7 = *plVar8;
      if ((int)plVar5 == 0) {
        *(undefined4 *)(param_3 + 0x5bc) = *(undefined4 *)(lVar7 + 0x56c);
        FUN_10ac3c930();
        *(undefined4 *)(param_3 + 0x5c0) = param_1;
        *(undefined4 *)(param_3 + 0x5c4) = param_2;
      }
      else {
        *(undefined4 *)(lVar7 + 0x56c) = *(undefined4 *)(param_3 + 0x5bc);
        *(undefined8 *)(lVar7 + 0x504) = *(undefined8 *)(param_3 + 0x5c0);
      }
    }
  }
  plVar8 = param_4;
  (**(code **)(*param_4 + 0x200))(param_4,&PTR_DAT_110c61a18);
  if ((int)plVar8 == 0) {
    return;
  }
  (**(code **)(*param_4 + 0x210))(param_4,&PTR_DAT_110c61a18);
  (**(code **)(*param_4 + 600))(&lStack_48,param_4,0);
  if ((lStack_48 == 0) ||
     (lVar7 = lStack_48, ___dynamic_cast(lStack_48,&PTR_DAT_110b9fe10,&PTR_DAT_110c5f2c8,0),
     lVar7 == 0)) {
    plVar8 = &lStack_58;
  }
  else {
    plStack_50 = plStack_40;
    plVar8 = &lStack_48;
    lStack_58 = lVar7;
  }
  *plVar8 = 0;
  plVar8[1] = 0;
  plVar8 = plStack_40;
  if (plStack_40 != (long *)0x0) {
    plVar5 = plStack_40 + 1;
    do {
      lVar7 = *plVar5;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  if (lStack_58 == 0) {
    (**(code **)(*param_4 + 600))(&lStack_48,param_4,0);
    if ((lStack_48 == 0) ||
       (___dynamic_cast(lStack_48,&PTR_DAT_110b9fe10,&PTR_DAT_110c6a2a8,0), lStack_48 == 0)) {
      plVar8 = &lStack_68;
    }
    else {
      plStack_60 = plStack_40;
      plVar8 = &lStack_48;
      lStack_68 = lStack_48;
    }
    *plVar8 = 0;
    plVar8[1] = 0;
    if (plStack_40 != (long *)0x0) {
      plVar8 = plStack_40 + 1;
      do {
        lVar7 = *plVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *plVar8 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_40 + 0x10))(plStack_40);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_40);
      }
    }
    if (lStack_68 != 0) {
      if (plStack_60 != (long *)0x0) {
        plVar8 = plStack_60 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *plVar8 = *plVar8 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      *(long *)(param_3 + 0x550) = lStack_68;
      plVar8 = *(long **)(param_3 + 0x558);
      *(long **)(param_3 + 0x558) = plStack_60;
      if (plVar8 != (long *)0x0) {
        plVar5 = plVar8 + 1;
        do {
          lVar7 = *plVar5;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar4) {
            *plVar5 = lVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
    }
    plVar8 = plStack_60;
    if (plStack_60 == (long *)0x0) goto LAB_10ac6d9a0;
    plVar5 = plStack_60 + 1;
    do {
      lVar7 = *plVar5;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 != 0) goto LAB_10ac6d9a0;
    (**(code **)(*plStack_60 + 0x10))(plStack_60);
  }
  else {
    if (plStack_50 != (long *)0x0) {
      plVar8 = plStack_50 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *plVar8 = *plVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    *(long *)(param_3 + 0x560) = lStack_58;
    plVar8 = *(long **)(param_3 + 0x568);
    *(long **)(param_3 + 0x568) = plStack_50;
    if (plVar8 == (long *)0x0) goto LAB_10ac6d9a0;
    plVar5 = plVar8 + 1;
    do {
      lVar7 = *plVar5;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 != 0) goto LAB_10ac6d9a0;
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
LAB_10ac6d9a0:
  plVar8 = plStack_50;
  if (plStack_50 != (long *)0x0) {
    plVar5 = plStack_50 + 1;
    do {
      lVar7 = *plVar5;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_50 + 0x10))(plStack_50);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  (**(code **)(*param_4 + 0x220))(param_4);
  return;
}



/* Entry: 10ac6dab4; end: 10ac6db13;  */

void FUN_10ac6dab4(undefined8 param_1,long *param_2)

{
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_30 = &UNK_10f69f8b5;
  uStack_28 = 0x23;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110c66928,&puStack_30);
  FUN_10ac63c9c(param_1,param_2);
  return;
}



/* Entry: 10ac6db14; end: 10ac6e4c3;  */

/* WARNING: Removing unreachable block (ram,0x00010ac6e1ec) */
/* WARNING: Removing unreachable block (ram,0x00010ac6e09c) */
/* WARNING: Removing unreachable block (ram,0x00010ac6e06c) */
/* WARNING: Removing unreachable block (ram,0x00010ac6e04c) */
/* WARNING: Removing unreachable block (ram,0x00010ac6e07c) */
/* WARNING: Removing unreachable block (ram,0x00010ac6e1dc) */
/* WARNING: Removing unreachable block (ram,0x00010ac6e1fc) */

void FUN_10ac6db14(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  char *pcVar1;
  ulong uVar2;
  undefined8 ***pppuVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 **ppuStack_368;
  ulong uStack_360;
  byte bStack_351;
  undefined8 **ppuStack_350;
  ulong uStack_348;
  byte bStack_339;
  undefined8 **ppuStack_338;
  ulong uStack_330;
  byte bStack_321;
  undefined8 **ppuStack_320;
  ulong uStack_318;
  byte bStack_309;
  undefined8 **ppuStack_308;
  ulong uStack_300;
  byte bStack_2f1;
  undefined8 **ppuStack_2f0;
  ulong uStack_2e8;
  byte bStack_2d9;
  undefined8 auStack_2d8 [2];
  char cStack_2c1;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  long lStack_2b0;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long lStack_290;
  undefined8 uStack_280;
  undefined8 uStack_278;
  long lStack_270;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long lStack_250;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long lStack_230;
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
  undefined8 **ppuStack_88;
  ulong uStack_80;
  byte bStack_71;
  undefined8 **ppuStack_70;
  ulong uStack_68;
  byte bStack_59;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  ppuStack_58 = (undefined8 ***)0x0;
  uStack_50 = 0;
  uStack_48 = 0;
  uVar7 = *(uint *)(param_6 + 0x628);
  if (uVar7 == 0) {
    puVar5 = &UNK_10f69f1ab;
    uVar6 = 10;
  }
  else {
    if ((uVar7 >> 1 & 1) == 0) {
      if ((uVar7 & 1) != 0) {
        puVar5 = &UNK_10f69f1c3;
        uVar6 = 7;
        goto LAB_10ac6db78;
      }
    }
    else {
      puVar5 = &UNK_10f69f1b6;
      uVar6 = 0xc;
LAB_10ac6db78:
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&ppuStack_58,puVar5,uVar6);
      uVar7 = *(uint *)(param_6 + 0x628);
    }
    if ((uVar7 >> 2 & 1) == 0) goto LAB_10ac6db9c;
    puVar5 = &UNK_10f69f1cb;
    uVar6 = 7;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&ppuStack_58,puVar5,uVar6);
LAB_10ac6db9c:
  uVar2 = uStack_50;
  if (-1 < (long)uStack_48) {
    uVar2 = uStack_48 >> 0x38;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
            (&ppuStack_58,uVar2 - 1,0);
  pcVar1 = "true";
  if (*(char *)(param_6 + 0x580) == '\0') {
    pcVar1 = "false";
  }
  func_0x000107c2b054(&ppuStack_70,pcVar1);
  pcVar1 = "true";
  if (*(char *)(param_6 + 0x5b8) == '\0') {
    pcVar1 = "false";
  }
  func_0x000107c2b054(&ppuStack_88,pcVar1);
  FUN_10a1ecc88(auStack_2d8,param_6);
  puVar4 = auStack_2d8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar4,&UNK_10f69f1d3,0x13);
  uStack_2b8 = puVar4[1];
  uStack_2c0 = *puVar4;
  lStack_2b0 = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  uVar2 = uStack_50;
  pppuVar3 = (undefined8 ***)ppuStack_58;
  if (-1 < (long)uStack_48) {
    uVar2 = uStack_48 >> 0x38;
    pppuVar3 = &ppuStack_58;
  }
  puVar4 = &uStack_2c0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar4,pppuVar3,uVar2);
  uStack_298 = puVar4[1];
  uStack_2a0 = *puVar4;
  lStack_290 = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  puVar4 = &uStack_2a0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar4,&UNK_10f65c225,0xd);
  uStack_278 = puVar4[1];
  uStack_280 = *puVar4;
  lStack_270 = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  __ZNSt3__19to_stringEi(&ppuStack_2f0,*(undefined4 *)(param_6 + 0x5e0));
  pppuVar3 = (undefined8 ***)ppuStack_2f0;
  if (-1 < (char)bStack_2d9) {
    uStack_2e8 = (ulong)bStack_2d9;
    pppuVar3 = &ppuStack_2f0;
  }
  puVar4 = &uStack_280;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar4,pppuVar3,uStack_2e8);
  uStack_258 = puVar4[1];
  uStack_260 = *puVar4;
  lStack_250 = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  puVar4 = &uStack_260;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar4,"/",1);
  uStack_238 = puVar4[1];
  uStack_240 = *puVar4;
  lStack_230 = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  FUN_10ac6cb4c(param_6);
  __ZNSt3__19to_stringEi(&ppuStack_308);
  pppuVar3 = (undefined8 ***)ppuStack_308;
  if (-1 < (char)bStack_2f1) {
    uStack_300 = (ulong)bStack_2f1;
    pppuVar3 = &ppuStack_308;
  }
  puVar4 = &uStack_240;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar4,pppuVar3,uStack_300);
  uStack_218 = puVar4[1];
  uStack_220 = *puVar4;
  lStack_210 = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  puVar4 = &uStack_220;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar4,&UNK_10f69f1e7,0x17);
  uStack_1f8 = puVar4[1];
  uStack_200 = *puVar4;
  lStack_1f0 = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  if (-1 < (char)bStack_59) {
    uStack_68 = (ulong)bStack_59;
    ppuStack_70 = &ppuStack_70;
  }
  puVar4 = &uStack_200;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar4,ppuStack_70,uStack_68);
  uStack_1d8 = puVar4[1];
  uStack_1e0 = *puVar4;
  lStack_1d0 = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  puVar4 = &uStack_1e0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar4,&UNK_10f69f1ff,0xc);
  uStack_1b8 = puVar4[1];
  uStack_1c0 = *puVar4;
  lStack_1b0 = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  if (-1 < (char)bStack_71) {
    uStack_80 = (ulong)bStack_71;
    ppuStack_88 = &ppuStack_88;
  }
  puVar4 = &uStack_1c0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar4,ppuStack_88,uStack_80);
  uStack_198 = puVar4[1];
  uStack_1a0 = *puVar4;
  lStack_190 = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  puVar4 = &uStack_1a0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar4,&UNK_10f69f20c,0x11);
  uStack_178 = puVar4[1];
  uStack_180 = *puVar4;
  lStack_170 = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  FUN_10ac6cfec(param_6);
  __ZNSt3__19to_stringEf(&ppuStack_320);
  pppuVar3 = (undefined8 ***)ppuStack_320;
  if (-1 < (char)bStack_309) {
    uStack_318 = (ulong)bStack_309;
    pppuVar3 = &ppuStack_320;
  }
  puVar4 = &uStack_180;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar4,pppuVar3,uStack_318);
  uStack_158 = puVar4[1];
  uStack_160 = *puVar4;
  lStack_150 = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  puVar4 = &uStack_160;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar4,&DAT_10f68e8ee,1);
  uStack_138 = puVar4[1];
  uStack_140 = *puVar4;
  lStack_130 = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  FUN_10ac6cfec(param_6);
  __ZNSt3__19to_stringEf(&ppuStack_338,param_3);
  pppuVar3 = (undefined8 ***)ppuStack_338;
  if (-1 < (char)bStack_321) {
    uStack_330 = (ulong)bStack_321;
    pppuVar3 = &ppuStack_338;
  }
  puVar4 = &uStack_140;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar4,pppuVar3,uStack_330);
  uStack_118 = puVar4[1];
  uStack_120 = *puVar4;
  lStack_110 = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  puVar4 = &uStack_120;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar4,&DAT_10f68e8ee,1);
  uStack_f8 = puVar4[1];
  uStack_100 = *puVar4;
  uStack_f0 = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  FUN_10ac6cfec(param_6);
  __ZNSt3__19to_stringEf(&ppuStack_350,param_4);
  pppuVar3 = (undefined8 ***)ppuStack_350;
  if (-1 < (char)bStack_339) {
    uStack_348 = (ulong)bStack_339;
    pppuVar3 = &ppuStack_350;
  }
  puVar4 = &uStack_100;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar4,pppuVar3,uStack_348);
  uStack_d8 = puVar4[1];
  uStack_e0 = *puVar4;
  uStack_d0 = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  puVar4 = &uStack_e0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar4,&DAT_10f68e8ee,1);
  uStack_b8 = puVar4[1];
  uStack_c0 = *puVar4;
  uStack_b0 = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  FUN_10ac6cfec(param_6);
  __ZNSt3__19to_stringEf(&ppuStack_368,param_5);
  pppuVar3 = (undefined8 ***)ppuStack_368;
  if (-1 < (char)bStack_351) {
    uStack_360 = (ulong)bStack_351;
    pppuVar3 = &ppuStack_368;
  }
  puVar4 = &uStack_c0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar4,pppuVar3,uStack_360);
  uStack_98 = puVar4[1];
  uStack_a0 = *puVar4;
  uStack_90 = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  puVar4 = &uStack_a0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar4,&DAT_10f684600,1);
  uVar6 = *puVar4;
  param_1[1] = puVar4[1];
  *param_1 = uVar6;
  param_1[2] = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  if ((char)bStack_351 < '\0') {
    __ZdlPv(ppuStack_368);
  }
  if ((char)bStack_339 < '\0') {
    __ZdlPv(ppuStack_350);
  }
  if (lStack_110 < 0) {
    __ZdlPv(uStack_120);
  }
  if ((char)bStack_321 < '\0') {
    __ZdlPv(ppuStack_338);
  }
  if (lStack_130 < 0) {
    __ZdlPv(uStack_140);
  }
  if (lStack_150 < 0) {
    __ZdlPv(uStack_160);
  }
  if ((char)bStack_309 < '\0') {
    __ZdlPv(ppuStack_320);
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
  if (lStack_1d0 < 0) {
    __ZdlPv(uStack_1e0);
  }
  if (lStack_1f0 < 0) {
    __ZdlPv(uStack_200);
  }
  if (lStack_210 < 0) {
    __ZdlPv(uStack_220);
  }
  if ((char)bStack_2f1 < '\0') {
    __ZdlPv(ppuStack_308);
  }
  if (lStack_230 < 0) {
    __ZdlPv(uStack_240);
  }
  if (lStack_250 < 0) {
    __ZdlPv(uStack_260);
  }
  if ((char)bStack_2d9 < '\0') {
    __ZdlPv(ppuStack_2f0);
  }
  if (lStack_270 < 0) {
    __ZdlPv(uStack_280);
  }
  if (lStack_290 < 0) {
    __ZdlPv(uStack_2a0);
  }
  if (lStack_2b0 < 0) {
    __ZdlPv(uStack_2c0);
  }
  if (cStack_2c1 < '\0') {
    __ZdlPv(auStack_2d8[0]);
  }
  return;
}



/* Entry: 10ac6e4c4; end: 10ac6e4cb;  */

/* WARNING: Removing unreachable block (ram,0x00010ac6e1ec) */
/* WARNING: Removing unreachable block (ram,0x00010ac6e09c) */
/* WARNING: Removing unreachable block (ram,0x00010ac6e06c) */
/* WARNING: Removing unreachable block (ram,0x00010ac6e04c) */
/* WARNING: Removing unreachable block (ram,0x00010ac6e07c) */
/* WARNING: Removing unreachable block (ram,0x00010ac6e1dc) */
/* WARNING: Removing unreachable block (ram,0x00010ac6e1fc) */

void FUN_10ac6e4c4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  char *pcVar1;
  ulong uVar2;
  undefined8 ***pppuVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined8 **ppuStack_368;
  ulong uStack_360;
  byte bStack_351;
  undefined8 **ppuStack_350;
  ulong uStack_348;
  byte bStack_339;
  undefined8 **ppuStack_338;
  ulong uStack_330;
  byte bStack_321;
  undefined8 **ppuStack_320;
  ulong uStack_318;
  byte bStack_309;
  undefined8 **ppuStack_308;
  ulong uStack_300;
  byte bStack_2f1;
  undefined8 **ppuStack_2f0;
  ulong uStack_2e8;
  byte bStack_2d9;
  undefined8 auStack_2d8 [2];
  char cStack_2c1;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  long lStack_2b0;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long lStack_290;
  undefined8 uStack_280;
  undefined8 uStack_278;
  long lStack_270;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long lStack_250;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long lStack_230;
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
  undefined8 **ppuStack_88;
  ulong uStack_80;
  byte bStack_71;
  undefined8 **ppuStack_70;
  ulong uStack_68;
  byte bStack_59;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  lVar5 = param_6 + -0x28;
  ppuStack_58 = (undefined8 ***)0x0;
  uStack_50 = 0;
  uStack_48 = 0;
  uVar8 = *(uint *)(param_6 + 0x600);
  if (uVar8 == 0) {
    puVar6 = &UNK_10f69f1ab;
    uVar7 = 10;
  }
  else {
    if ((uVar8 >> 1 & 1) == 0) {
      if ((uVar8 & 1) != 0) {
        puVar6 = &UNK_10f69f1c3;
        uVar7 = 7;
        goto LAB_10ac6db78;
      }
    }
    else {
      puVar6 = &UNK_10f69f1b6;
      uVar7 = 0xc;
LAB_10ac6db78:
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&ppuStack_58,puVar6,uVar7);
      uVar8 = *(uint *)(param_6 + 0x600);
    }
    if ((uVar8 >> 2 & 1) == 0) goto LAB_10ac6db9c;
    puVar6 = &UNK_10f69f1cb;
    uVar7 = 7;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&ppuStack_58,puVar6,uVar7);
LAB_10ac6db9c:
  uVar2 = uStack_50;
  if (-1 < (long)uStack_48) {
    uVar2 = uStack_48 >> 0x38;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
            (&ppuStack_58,uVar2 - 1,0);
  pcVar1 = "true";
  if (*(char *)(param_6 + 0x558) == '\0') {
    pcVar1 = "false";
  }
  func_0x000107c2b054(&ppuStack_70,pcVar1);
  pcVar1 = "true";
  if (*(char *)(param_6 + 0x590) == '\0') {
    pcVar1 = "false";
  }
  func_0x000107c2b054(&ppuStack_88,pcVar1);
  FUN_10a1ecc88(auStack_2d8,lVar5);
  puVar4 = auStack_2d8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar4,&UNK_10f69f1d3,0x13);
  uStack_2b8 = puVar4[1];
  uStack_2c0 = *puVar4;
  lStack_2b0 = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  uVar2 = uStack_50;
  pppuVar3 = (undefined8 ***)ppuStack_58;
  if (-1 < (long)uStack_48) {
    uVar2 = uStack_48 >> 0x38;
    pppuVar3 = &ppuStack_58;
  }
  puVar4 = &uStack_2c0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar4,pppuVar3,uVar2);
  uStack_298 = puVar4[1];
  uStack_2a0 = *puVar4;
  lStack_290 = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  puVar4 = &uStack_2a0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar4,&UNK_10f65c225,0xd);
  uStack_278 = puVar4[1];
  uStack_280 = *puVar4;
  lStack_270 = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  __ZNSt3__19to_stringEi(&ppuStack_2f0,*(undefined4 *)(param_6 + 0x5b8));
  pppuVar3 = (undefined8 ***)ppuStack_2f0;
  if (-1 < (char)bStack_2d9) {
    uStack_2e8 = (ulong)bStack_2d9;
    pppuVar3 = &ppuStack_2f0;
  }
  puVar4 = &uStack_280;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar4,pppuVar3,uStack_2e8);
  uStack_258 = puVar4[1];
  uStack_260 = *puVar4;
  lStack_250 = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  puVar4 = &uStack_260;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar4,"/",1);
  uStack_238 = puVar4[1];
  uStack_240 = *puVar4;
  lStack_230 = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  FUN_10ac6cb4c(lVar5);
  __ZNSt3__19to_stringEi(&ppuStack_308);
  pppuVar3 = (undefined8 ***)ppuStack_308;
  if (-1 < (char)bStack_2f1) {
    uStack_300 = (ulong)bStack_2f1;
    pppuVar3 = &ppuStack_308;
  }
  puVar4 = &uStack_240;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar4,pppuVar3,uStack_300);
  uStack_218 = puVar4[1];
  uStack_220 = *puVar4;
  lStack_210 = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  puVar4 = &uStack_220;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar4,&UNK_10f69f1e7,0x17);
  uStack_1f8 = puVar4[1];
  uStack_200 = *puVar4;
  lStack_1f0 = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  if (-1 < (char)bStack_59) {
    uStack_68 = (ulong)bStack_59;
    ppuStack_70 = &ppuStack_70;
  }
  puVar4 = &uStack_200;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar4,ppuStack_70,uStack_68);
  uStack_1d8 = puVar4[1];
  uStack_1e0 = *puVar4;
  lStack_1d0 = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  puVar4 = &uStack_1e0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar4,&UNK_10f69f1ff,0xc);
  uStack_1b8 = puVar4[1];
  uStack_1c0 = *puVar4;
  lStack_1b0 = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  if (-1 < (char)bStack_71) {
    uStack_80 = (ulong)bStack_71;
    ppuStack_88 = &ppuStack_88;
  }
  puVar4 = &uStack_1c0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar4,ppuStack_88,uStack_80);
  uStack_198 = puVar4[1];
  uStack_1a0 = *puVar4;
  lStack_190 = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  puVar4 = &uStack_1a0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar4,&UNK_10f69f20c,0x11);
  uStack_178 = puVar4[1];
  uStack_180 = *puVar4;
  lStack_170 = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  FUN_10ac6cfec(lVar5);
  __ZNSt3__19to_stringEf(&ppuStack_320);
  pppuVar3 = (undefined8 ***)ppuStack_320;
  if (-1 < (char)bStack_309) {
    uStack_318 = (ulong)bStack_309;
    pppuVar3 = &ppuStack_320;
  }
  puVar4 = &uStack_180;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar4,pppuVar3,uStack_318);
  uStack_158 = puVar4[1];
  uStack_160 = *puVar4;
  lStack_150 = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  puVar4 = &uStack_160;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar4,&DAT_10f68e8ee,1);
  uStack_138 = puVar4[1];
  uStack_140 = *puVar4;
  lStack_130 = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  FUN_10ac6cfec(lVar5);
  __ZNSt3__19to_stringEf(&ppuStack_338,param_3);
  pppuVar3 = (undefined8 ***)ppuStack_338;
  if (-1 < (char)bStack_321) {
    uStack_330 = (ulong)bStack_321;
    pppuVar3 = &ppuStack_338;
  }
  puVar4 = &uStack_140;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar4,pppuVar3,uStack_330);
  uStack_118 = puVar4[1];
  uStack_120 = *puVar4;
  lStack_110 = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  puVar4 = &uStack_120;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar4,&DAT_10f68e8ee,1);
  uStack_f8 = puVar4[1];
  uStack_100 = *puVar4;
  uStack_f0 = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  FUN_10ac6cfec(lVar5);
  __ZNSt3__19to_stringEf(&ppuStack_350,param_4);
  pppuVar3 = (undefined8 ***)ppuStack_350;
  if (-1 < (char)bStack_339) {
    uStack_348 = (ulong)bStack_339;
    pppuVar3 = &ppuStack_350;
  }
  puVar4 = &uStack_100;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar4,pppuVar3,uStack_348);
  uStack_d8 = puVar4[1];
  uStack_e0 = *puVar4;
  uStack_d0 = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  puVar4 = &uStack_e0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar4,&DAT_10f68e8ee,1);
  uStack_b8 = puVar4[1];
  uStack_c0 = *puVar4;
  uStack_b0 = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  FUN_10ac6cfec(lVar5);
  __ZNSt3__19to_stringEf(&ppuStack_368,param_5);
  pppuVar3 = (undefined8 ***)ppuStack_368;
  if (-1 < (char)bStack_351) {
    uStack_360 = (ulong)bStack_351;
    pppuVar3 = &ppuStack_368;
  }
  puVar4 = &uStack_c0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar4,pppuVar3,uStack_360);
  uStack_98 = puVar4[1];
  uStack_a0 = *puVar4;
  uStack_90 = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  puVar4 = &uStack_a0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar4,&DAT_10f684600,1);
  uVar7 = *puVar4;
  param_1[1] = puVar4[1];
  *param_1 = uVar7;
  param_1[2] = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  if ((char)bStack_351 < '\0') {
    __ZdlPv(ppuStack_368);
  }
  if ((char)bStack_339 < '\0') {
    __ZdlPv(ppuStack_350);
  }
  if (lStack_110 < 0) {
    __ZdlPv(uStack_120);
  }
  if ((char)bStack_321 < '\0') {
    __ZdlPv(ppuStack_338);
  }
  if (lStack_130 < 0) {
    __ZdlPv(uStack_140);
  }
  if (lStack_150 < 0) {
    __ZdlPv(uStack_160);
  }
  if ((char)bStack_309 < '\0') {
    __ZdlPv(ppuStack_320);
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
  if (lStack_1d0 < 0) {
    __ZdlPv(uStack_1e0);
  }
  if (lStack_1f0 < 0) {
    __ZdlPv(uStack_200);
  }
  if (lStack_210 < 0) {
    __ZdlPv(uStack_220);
  }
  if ((char)bStack_2f1 < '\0') {
    __ZdlPv(ppuStack_308);
  }
  if (lStack_230 < 0) {
    __ZdlPv(uStack_240);
  }
  if (lStack_250 < 0) {
    __ZdlPv(uStack_260);
  }
  if ((char)bStack_2d9 < '\0') {
    __ZdlPv(ppuStack_2f0);
  }
  if (lStack_270 < 0) {
    __ZdlPv(uStack_280);
  }
  if (lStack_290 < 0) {
    __ZdlPv(uStack_2a0);
  }
  if (lStack_2b0 < 0) {
    __ZdlPv(uStack_2c0);
  }
  if (cStack_2c1 < '\0') {
    __ZdlPv(auStack_2d8[0]);
  }
  return;
}



/* Entry: 10ac6e4cc; end: 10ac6e6a7;  */

long * FUN_10ac6e4cc(long *param_1,long *param_2)

{
  long lVar1;
  undefined **ppuVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  param_1[2] = (long)&PTR_FUN_110c61720;
  param_1[5] = (long)&PTR_DAT_110c61750;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[5];
  param_1[0x15] = (long)&PTR_DAT_110c617a8;
  param_1[0x51] = (long)&PTR_DAT_110c617c8;
  param_1[0x52] = (long)&PTR_DAT_110c61810;
  param_1[0x9c] = (long)&PTR_DAT_110c61838;
  FUN_10a7c9c00(*(long *)(param_1[0x12] + 3000) + 0x78,&stack0xffffffffffffffc8);
  func_0x00010a05a86c(param_1 + 0xc3);
  func_0x00010ac51d18(param_1 + 0xc1);
  FUN_10a05b1b0(param_1 + 0xbf);
  func_0x00010a042b54(param_1 + 0xbd);
  if (param_1[0xb9] != 0) {
    param_1[0xba] = param_1[0xb9];
    __ZdlPv();
  }
  func_0x00010a042b54(param_1 + 0xb5);
  func_0x00010a042b54(param_1 + 0xb3);
  FUN_10a05b1b0(param_1 + 0xb1);
  func_0x00010a0523dc(param_1 + 0xae);
  FUN_10ac827e8(param_1 + 0xac);
  FUN_10a37b878(param_1 + 0xaa);
  FUN_10a05b1b0(param_1 + 0xa8);
  if (*(char *)((long)param_1 + 0x53f) < '\0') {
    __ZdlPv(param_1[0xa5]);
  }
  param_1[0x9c] = (long)&PTR_FUN_110b9f9a8;
  if ((undefined8 *)param_1[0x9f] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0x9f] = 0;
  }
  func_0x00010a004e5c(param_1 + 0x9d);
  FUN_10ac3b3c8(param_1 + 0x52);
  lVar1 = param_2[1];
  *param_1 = lVar1;
  param_1[2] = (long)&PTR_FUN_110bb3968;
  param_1[5] = (long)&PTR_DAT_110bb3998;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[4];
  param_1[0x15] = (long)&PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x4d);
  func_0x00010a042c64(param_1 + 0x48);
  func_0x00010a0523dc(param_1 + 0x45);
  if ((char)param_1[0x3c] == '\x01') {
    func_0x00010a042d30(param_1 + 0x3a);
  }
  param_1[0x15] = (long)&PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + 0x15);
  lVar1 = param_2[2];
  *param_1 = lVar1;
  param_1[2] = (long)&PTR_FUN_110b9f848;
  param_1[5] = (long)&PTR_DAT_110b9f878;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[3];
  FUN_10a042dcc(param_1 + 0x13);
  *param_1 = (long)&PTR_DAT_110c60a00;
  param_1[2] = (long)&PTR_DAT_110c60a88;
  param_1[5] = (long)&PTR_DAT_110c60ab8;
  ppuVar2 = (undefined **)(param_1 + 0xb);
  puVar5 = (undefined8 *)param_1[0xc];
  for (puVar4 = (undefined8 *)*ppuVar2; puVar4 != puVar5; puVar4 = puVar4 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar4,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar2);
  plVar3 = param_1 + 10;
  if ((*plVar3 != 0) && (*(undefined ***)(*(long *)(*plVar3 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + 3);
  if ((param_1[0x12] != 0) && (lVar1 = *(long *)(param_1[0x12] + 0x828), lVar1 != 0)) {
    FUN_10a1dfb2c(lVar1,param_1);
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  appuStack_180[0] = ppuVar2;
  FUN_10ac78cf4(appuStack_180);
  lVar1 = *plVar3;
  *plVar3 = 0;
  if (lVar1 != 0) {
    FUN_10ac7d690(plVar3);
  }
  if (param_1[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[5] = (long)&PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 6);
  param_1[2] = (long)&PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + 3);
  return param_1;
}



/* Entry: 10ac6e6a8; end: 10ac6e72b;  */

undefined8 * FUN_10ac6e6a8(undefined8 *param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  *param_1 = &PTR_FUN_110c615c0;
  param_1[2] = &PTR_FUN_110c61720;
  param_1[5] = &PTR_DAT_110c61750;
  param_1[0xc6] = &PTR_DAT_110c61890;
  param_1[0x15] = &PTR_DAT_110c617a8;
  param_1[0x51] = &PTR_DAT_110c617c8;
  param_1[0x52] = &PTR_DAT_110c61810;
  param_1[0x9c] = &PTR_DAT_110c61838;
  FUN_10a7c9c00(*(long *)(param_1[0x12] + 3000) + 0x78,&stack0xffffffffffffffc8);
  func_0x00010a05a86c(param_1 + 0xc3);
  func_0x00010ac51d18(param_1 + 0xc1);
  FUN_10a05b1b0(param_1 + 0xbf);
  func_0x00010a042b54(param_1 + 0xbd);
  if (param_1[0xb9] != 0) {
    param_1[0xba] = param_1[0xb9];
    __ZdlPv();
  }
  func_0x00010a042b54(param_1 + 0xb5);
  func_0x00010a042b54(param_1 + 0xb3);
  FUN_10a05b1b0(param_1 + 0xb1);
  func_0x00010a0523dc(param_1 + 0xae);
  FUN_10ac827e8(param_1 + 0xac);
  FUN_10a37b878(param_1 + 0xaa);
  FUN_10a05b1b0(param_1 + 0xa8);
  if (*(char *)((long)param_1 + 0x53f) < '\0') {
    __ZdlPv(param_1[0xa5]);
  }
  param_1[0x9c] = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)param_1[0x9f] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0x9f] = 0;
  }
  func_0x00010a004e5c(param_1 + 0x9d);
  FUN_10ac3b3c8(param_1 + 0x52);
  *param_1 = &PTR_FUN_110c65728;
  param_1[2] = &PTR_FUN_110bb3968;
  param_1[5] = &PTR_DAT_110bb3998;
  param_1[0xc6] = &PTR_DAT_110c65888;
  param_1[0x15] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x4d);
  func_0x00010a042c64(param_1 + 0x48);
  func_0x00010a0523dc(param_1 + 0x45);
  if (*(char *)(param_1 + 0x3c) == '\x01') {
    func_0x00010a042d30(param_1 + 0x3a);
  }
  param_1[0x15] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + 0x15);
  *param_1 = &PTR_DAT_110c658d8;
  param_1[2] = &PTR_FUN_110b9f848;
  param_1[5] = &PTR_DAT_110b9f878;
  param_1[0xc6] = &PTR_DAT_110c659a8;
  FUN_10a042dcc(param_1 + 0x13);
  *param_1 = &PTR_DAT_110c60a00;
  param_1[2] = &PTR_DAT_110c60a88;
  param_1[5] = &PTR_DAT_110c60ab8;
  ppuVar2 = (undefined **)(param_1 + 0xb);
  puVar5 = (undefined8 *)param_1[0xc];
  for (puVar4 = (undefined8 *)*ppuVar2; puVar4 != puVar5; puVar4 = puVar4 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar4,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar2);
  plVar3 = param_1 + 10;
  if ((*plVar3 != 0) && (*(undefined ***)(*(long *)(*plVar3 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + 3);
  if ((param_1[0x12] != 0) && (lVar1 = *(long *)(param_1[0x12] + 0x828), lVar1 != 0)) {
    FUN_10a1dfb2c(lVar1,param_1);
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  appuStack_180[0] = ppuVar2;
  FUN_10ac78cf4(appuStack_180);
  lVar1 = *plVar3;
  *plVar3 = 0;
  if (lVar1 != 0) {
    FUN_10ac7d690(plVar3);
  }
  if (param_1[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 6);
  param_1[2] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + 3);
  return param_1;
}



/* Entry: 10ac6e72c; end: 10ac6e807;  */

void FUN_10ac6e72c(undefined8 param_1)

{
  FUN_10ac6e4cc(param_1,&PTR_PTR_110c618c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac6e808; end: 10ac6e83f;  */

void FUN_10ac6e808(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10ac6e4cc((long)param_1 + lVar1,&PTR_PTR_110c618c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10ac6e840; end: 10ac6e867;  */

undefined1  [16] FUN_10ac6e840(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x21;
  auVar1._0_8_ = &UNK_10f69fa3d;
  return auVar1;
}



/* Entry: 10ac6e868; end: 10ac6e8bb;  */

void FUN_10ac6e868(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_58 = 0;
  uStack_50 = 0xffffffff00000001;
  uStack_48 = 0xffffffff;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_20 = 0xe1;
  uStack_18 = 0xffffffff;
  FUN_10ac6e8bc(param_1,&uStack_58);
  FUN_10ac829bc();
  return;
}



/* Entry: 10ac6e8bc; end: 10ac6e993;  */

/* WARNING: Removing unreachable block (ram,0x00010ac6e954) */

undefined1  [16] FUN_10ac6e8bc(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f69fa3d,0x21);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10ac828c0(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10ac6e994; end: 10ac6ea5f;  */

long * FUN_10ac6e994(long *param_1,long *param_2,undefined8 param_3,byte param_4)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = param_1;
  FUN_10a1dbb98(param_1,param_2 + 2);
  lVar2 = param_2[1];
  *plVar1 = lVar2;
  plVar1[2] = (long)&PTR_FUN_110bae358;
  plVar1[5] = (long)&PTR_DAT_110bae388;
  *(long *)((long)plVar1 + *(long *)(lVar2 + -0x18)) = param_2[4];
  plVar1[0x15] = -1;
  plVar1[0x16] = -1;
  *(undefined2 *)((long)plVar1 + 0xb9) = 0;
  *(byte *)(plVar1 + 0x17) = param_4 ^ 1;
  lVar2 = *param_2;
  *plVar1 = lVar2;
  plVar1[2] = (long)&PTR_FUN_110c68030;
  plVar1[5] = (long)&PTR_DAT_110c68060;
  *(long *)((long)plVar1 + *(long *)(lVar2 + -0x18)) = param_2[5];
  plVar1[0x1b] = 0;
  plVar1[0x1c] = 0;
  plVar1[0x18] = 0;
  plVar1[0x19] = 0;
  *(undefined1 *)(plVar1 + 0x1a) = 0;
  FUN_10ac645fc();
  return param_1;
}



/* Entry: 10ac6ea60; end: 10ac6eb17;  */

undefined8 * FUN_10ac6ea60(undefined8 *param_1,undefined8 param_2,byte param_3)

{
  undefined8 *puVar1;
  
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1d] = &PTR_FUN_110c383b8;
  *(undefined2 *)(param_1 + 0x20) = 0x100;
  puVar1 = param_1;
  FUN_10a1dbb98(param_1,&PTR_PTR_110c68130,param_2);
  puVar1[0x15] = 0xffffffffffffffff;
  puVar1[0x16] = 0xffffffffffffffff;
  *(undefined2 *)((long)puVar1 + 0xb9) = 0;
  *(byte *)(puVar1 + 0x17) = param_3 ^ 1;
  *puVar1 = &PTR_FUN_110c67f60;
  puVar1[2] = &PTR_FUN_110c68030;
  puVar1[5] = &PTR_DAT_110c68060;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = &PTR_FUN_110c680e8;
  puVar1[0x1b] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(undefined1 *)(puVar1 + 0x1a) = 0;
  FUN_10ac645fc();
  return param_1;
}



/* Entry: 10ac6eb18; end: 10ac6ec13;  */

void FUN_10ac6eb18(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plStack_38;
  long *plStack_30;
  long *plStack_28;
  
  FUN_10ac28bec(&plStack_28,param_2,&PTR_DAT_110c66e68);
  if (plStack_28 != (long *)0x0) {
    plStack_38 = plStack_28;
    plVar4 = (long *)0x20;
    __Znwm();
    *plVar4 = (long)&PTR_FUN_110c1b548;
    plVar4[1] = 0;
    plVar4[2] = 0;
    plVar4[3] = (long)plStack_28;
    plStack_28 = (long *)0x0;
    plStack_30 = plVar4;
    FUN_10ac645fc(param_1,&plStack_38);
    plVar4 = plStack_30;
    if (plStack_30 != (long *)0x0) {
      plVar1 = plStack_30 + 1;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_30 + 0x10))(plStack_30);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    plVar4 = plStack_28;
    plStack_28 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  return;
}



/* Entry: 10ac6ec14; end: 10ac6ed67;  */

void FUN_10ac6ec14(long *param_1,long *param_2)

{
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_30 = &UNK_10f69fa3d;
  uStack_28 = 0x21;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110c66928,&puStack_30);
  (**(code **)(*param_1 + 0x90))();
  (**(code **)(*param_2 + 0x118))(param_2,&PTR_DAT_110c66e68,*param_1);
  return;
}



/* Entry: 10ac6ed68; end: 10ac6eedb;  */

void FUN_10ac6ed68(long *param_1)

{
  long *plVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long lStack_40;
  long *plStack_38;
  
  if (param_1[0x18] == 0) {
    plVar6 = param_1;
    (**(code **)(*param_1 + 0x90))();
    lStack_40 = *plVar6;
    plStack_38 = (long *)plVar6[1];
    if (plStack_38 != (long *)0x0) {
      plVar6 = plStack_38 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = *plVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if ((lStack_40 == 0) || (*(int *)(lStack_40 + 0xf0) == 0)) {
      bVar4 = false;
      *(undefined4 *)((long)param_1 + 0x74) = 0;
      plVar6 = plStack_38;
    }
    else {
      FUN_10ac645fc(param_1,&lStack_40);
      lVar5 = param_1[0x12];
      FUN_10a2421c8();
      plVar6 = *(long **)(lVar5 + 0x228);
      (**(code **)(*plVar6 + 0x30))();
      FUN_10ac6eedc(param_1 + 0x18,plVar6);
      *(byte *)(param_1 + 0x1a) = *(byte *)(param_1 + 0x1a) | 1;
      bVar4 = true;
      plVar6 = plStack_38;
    }
    plStack_38 = plVar6;
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        lVar5 = *plVar1;
        cVar3 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar2) {
          *plVar1 = lVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if (!bVar4) {
      return;
    }
  }
  if ((*(byte *)(param_1 + 0x1a) & 1) != 0) {
    (**(code **)(*(long *)param_1[0x18] + 0x98))
              ((long *)param_1[0x18],*(undefined1 *)((long)param_1 + 0xb9));
    (**(code **)(*(long *)param_1[0x18] + 0xa8))
              ((long *)param_1[0x18],*(undefined1 *)((long)param_1 + 0xba));
    (**(code **)(*(long *)param_1[0x18] + 0x80))((long *)param_1[0x18],param_1[0x1b],0xffffffff,0);
    *(byte *)(param_1 + 0x1a) = *(byte *)(param_1 + 0x1a) & 0xfe;
  }
  *(undefined4 *)((long)param_1 + 0x74) = 2;
  return;
}



/* Entry: 10ac6eedc; end: 10ac6ef4f;  */

void FUN_10ac6eedc(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_10ac82a78(&uStack_30);
  plVar5 = (long *)param_1[1];
  uVar7 = param_1[1];
  uVar6 = *param_1;
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
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
      uStack_30 = uVar6;
      uStack_28 = uVar7;
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return;
}



/* Entry: 10ac6ef50; end: 10ac6ef57;  */

void FUN_10ac6ef50(long param_1)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lStack_40;
  long *plStack_38;
  
  plVar6 = (long *)(param_1 + -0x10);
  if (*(long *)(param_1 + 0xb0) == 0) {
    plVar4 = plVar6;
    (**(code **)(*plVar6 + 0x90))();
    lStack_40 = *plVar4;
    plStack_38 = (long *)plVar4[1];
    if (plStack_38 != (long *)0x0) {
      plVar4 = plStack_38 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = *plVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if ((lStack_40 == 0) || (*(int *)(lStack_40 + 0xf0) == 0)) {
      bVar3 = false;
      *(undefined4 *)(param_1 + 100) = 0;
      plVar6 = plStack_38;
    }
    else {
      FUN_10ac645fc(plVar6,&lStack_40);
      lVar5 = *(long *)(param_1 + 0x80);
      FUN_10a2421c8();
      plVar6 = *(long **)(lVar5 + 0x228);
      (**(code **)(*plVar6 + 0x30))();
      FUN_10ac6eedc((long *)(param_1 + 0xb0),plVar6);
      *(byte *)(param_1 + 0xc0) = *(byte *)(param_1 + 0xc0) | 1;
      bVar3 = true;
      plVar6 = plStack_38;
    }
    plStack_38 = plVar6;
    if (plVar6 != (long *)0x0) {
      plVar4 = plVar6 + 1;
      do {
        lVar5 = *plVar4;
        cVar2 = '\x01';
        bVar1 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar1) {
          *plVar4 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if (!bVar3) {
      return;
    }
  }
  if ((*(byte *)(param_1 + 0xc0) & 1) != 0) {
    (**(code **)(**(long **)(param_1 + 0xb0) + 0x98))
              (*(long **)(param_1 + 0xb0),*(undefined1 *)(param_1 + 0xa9));
    (**(code **)(**(long **)(param_1 + 0xb0) + 0xa8))
              (*(long **)(param_1 + 0xb0),*(undefined1 *)(param_1 + 0xaa));
    (**(code **)(**(long **)(param_1 + 0xb0) + 0x80))
              (*(long **)(param_1 + 0xb0),*(undefined8 *)(param_1 + 200),0xffffffff,0);
    *(byte *)(param_1 + 0xc0) = *(byte *)(param_1 + 0xc0) & 0xfe;
  }
  *(undefined4 *)(param_1 + 100) = 2;
  return;
}



/* Entry: 10ac6ef58; end: 10ac6efc3;  */

undefined8 * FUN_10ac6ef58(undefined8 *param_1,long param_2)

{
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_20 = *(undefined8 *)(param_2 + 0xc0);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  FUN_10a0888e0(param_1,&uStack_20,&lStack_18,1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return param_1;
  }
  ___stack_chk_fail();
  return param_1 + 0x18;
}



/* Entry: 10ac6efc4; end: 10ac6f053;  */

long FUN_10ac6efc4(long param_1)

{
  return param_1 + 0xc0;
}



/* Entry: 10ac6f054; end: 10ac6f3c3;  */

void FUN_10ac6f054(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c8,&UNK_10f662af6,0x20);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c67490;
  pppuVar2 = (undefined8 ***)&UNK_10f69e32c;
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
  uStack_58 = 0x91;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c67490;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110c5efc0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,0x100,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac6f3a4;
    FUN_10a054dac(param_1,&UNK_10f69e3ba,FUN_10ac82b48,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,0x100,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac6f3a4;
    FUN_10a054dac(param_1,&UNK_10f69f36d,FUN_10ac82cfc,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac6f3a4;
    FUN_10a054dac(param_1,"start",FUN_10ac83350,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac6f3a4;
    FUN_10a054dac(param_1,&DAT_10f684680,FUN_10ac83404,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,4);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f69f380,FUN_10ac834b8,FUN_10ac83578);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,4);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f69f38b,FUN_10ac836cc,FUN_10ac8378c);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f662af6,0x20);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10ac6f3a4:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10ac6f3a8);
  (*pcVar6)();
}



/* Entry: 10ac6f3c4; end: 10ac6f93b;  */

undefined8 * FUN_10ac6f3c4(undefined8 *param_1,long param_2)

{
  undefined4 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  char cVar7;
  bool bVar8;
  code *pcVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  int *piVar14;
  long lVar15;
  undefined8 *puStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  long *plStack_90;
  long lStack_88;
  long *plStack_80;
  undefined2 uStack_78;
  undefined8 *puStack_70;
  long *plStack_68;
  
  param_1[0x201c] = &PTR_FUN_110c383b8;
  param_1[0x201e] = 0;
  param_1[0x201d] = 0;
  *(undefined2 *)(param_1 + 0x201f) = 0x100;
  puVar12 = param_1;
  FUN_10ac1b018(param_1,&PTR_PTR_110c61c08,param_2);
  *puVar12 = &PTR_DAT_110c61a50;
  puVar12[2] = &PTR_FUN_110c61b08;
  puVar12[5] = &PTR_DAT_110c61b38;
  param_1[0x201c] = &PTR_FUN_110c61bc0;
  puVar12[0x16] = 0;
  puVar12[0x15] = 0;
  puVar12[0x2018] = 0;
  puVar12[0x2017] = 0;
  *(undefined1 *)(param_1 + 0x2019) = 1;
  *(undefined8 *)((long)param_1 + 0x100d4) = 0;
  *(undefined8 *)((long)param_1 + 0x100cc) = 0;
  *(undefined4 *)((long)param_1 + 0x100dc) = 0;
  uStack_98 = uStack_98 & 0xffffffffffffff00;
  FUN_10ac46794(&lStack_88,&puStack_70,&UNK_10f69e32c,&uStack_98);
  func_0x00010a41cc44(param_1 + 0x2017,&lStack_88);
  if (plStack_80 != (long *)0x0) {
    plVar10 = plStack_80 + 1;
    do {
      lVar15 = *plVar10;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar8) {
        *plVar10 = lVar15 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_80 + 0x10))(plStack_80);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_80);
    }
  }
  plVar10 = *(long **)(*(long *)(param_2 + 0x100) + 0x1c8);
  (**(code **)(*plVar10 + 0xf0))();
  plVar11 = (long *)plVar10[1];
  if (plVar11 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar11 != (long *)0x0) {
      lVar15 = *plVar10;
      if (lVar15 != 0) {
        puVar12 = (undefined8 *)0x8108;
        __Znwm();
        *puVar12 = &PTR_FUN_110c6e6f0;
        *(undefined1 *)(puVar12 + 1) = 1;
        puVar12[0x1003] = 0;
        *(undefined1 *)(puVar12 + 0x1004) = 0;
        *(undefined1 *)(puVar12 + 0x1014) = 0;
        *(undefined1 *)(puVar12 + 0x101d) = 0;
        _bzero((long)puVar12 + 0x14,0x8000);
        *(undefined1 *)(puVar12 + 0x1018) = 0;
        puVar12[0x1017] = 0;
        puVar12[0x1016] = 0;
        puVar12[0x1015] = 0;
        puVar12[0x1020] = 0;
        puVar12[0x101f] = 0;
        *(undefined4 *)(puVar12 + 0x101e) = 1;
        *(undefined8 *)((long)puVar12 + 0xc) = 0xac440000ac44;
        lVar3 = *(long *)(lVar15 + 0x78);
        lVar5 = *(long *)(lVar15 + 0x80);
        if (lVar5 != 0) {
          plVar10 = (long *)(lVar5 + 0x10);
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar8) {
              *plVar10 = *plVar10 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        uStack_78 = 0x100;
        plVar10 = (long *)0x38;
        lStack_88 = lVar3;
        plStack_80 = (long *)lVar5;
        puStack_70 = puVar12;
        __Znwm();
        lStack_88 = 0;
        plStack_80 = (long *)0x0;
        *plVar10 = (long)&PTR_FUN_110c66e98;
        plVar10[1] = 0;
        plVar10[2] = 0;
        plVar10[3] = (long)puVar12;
        plVar10[4] = lVar3;
        plVar10[5] = lVar5;
        *(undefined2 *)(plVar10 + 6) = uStack_78;
        *(undefined4 *)((long)plVar10 + 0x32) = 0;
        *(undefined2 *)((long)plVar10 + 0x36) = 0;
        piVar14 = *(int **)(lVar15 + 0x78);
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar14,0x10);
          if (bVar8) {
            *piVar14 = *piVar14 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        piVar14 = (int *)(*(long *)(lVar15 + 0x78) + 4);
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar14,0x10);
          if (bVar8) {
            *piVar14 = *piVar14 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        puVar1 = (undefined4 *)(*(long *)(lVar15 + 0x78) + 8);
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar8) {
            *puVar1 = *puVar1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (plVar10 != (long *)0x0) {
          plVar6 = plVar10 + 2;
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar8) {
              *plVar6 = *plVar6 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        uVar4 = *(ulong *)(lVar15 + 0x58);
        plVar6 = *(long **)(lVar15 + 0x60);
        if (plVar6 != (long *)0x0) {
          plVar2 = plVar6 + 1;
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar8) {
              *plVar2 = *plVar2 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        uStack_a8 = 0;
        uStack_a0 = 0;
        uStack_98 = uVar4;
        plStack_90 = plVar6;
        plStack_68 = plVar10;
        __ZNSt3__15mutex4lockEv(uVar4);
        puVar12 = puStack_70;
        *(undefined4 *)((long)puStack_70 + 0xc) = *(undefined4 *)(lVar15 + 0x70);
        *(undefined4 *)(puStack_70 + 0x101e) = *(undefined4 *)(lVar15 + 0x68);
        puStack_b8 = (undefined8 *)CONCAT44(puStack_b8._4_4_,1);
        FUN_10ad195d0(puStack_70 + 0x1018,puStack_70 + 0x101e,&puStack_b8);
        puStack_b8 = puVar12;
        if (plVar10 != (long *)0x0) {
          plVar2 = plVar10 + 2;
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar8) {
              *plVar2 = *plVar2 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        plStack_b0 = plVar10;
        FUN_10a2b7e7c(lVar15,&puStack_b8,&puStack_b8);
        if (plStack_b0 != (long *)0x0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        __ZNSt3__15mutex6unlockEv(uVar4);
        puVar13 = (undefined8 *)0x38;
        __Znwm();
        puVar13[1] = 0;
        puVar13[2] = 0;
        *puVar13 = &PTR_FUN_110c66ef8;
        puVar13[3] = uVar4;
        puVar13[4] = plVar6;
        if (plVar6 != (long *)0x0) {
          plVar2 = plVar6 + 1;
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar8) {
              *plVar2 = *plVar2 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        puVar13[5] = puVar12;
        puVar13[6] = plVar10;
        if (plVar10 != (long *)0x0) {
          plVar2 = plVar10 + 1;
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar8) {
              *plVar2 = *plVar2 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        if (plVar6 != (long *)0x0) {
          plVar2 = plVar6 + 1;
          do {
            lVar15 = *plVar2;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar8) {
              *plVar2 = lVar15 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (lVar15 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          }
        }
        if (plVar10 != (long *)0x0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
        plVar10 = plStack_68;
        if (plStack_68 != (long *)0x0) {
          plVar6 = plStack_68 + 1;
          do {
            lVar15 = *plVar6;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar8) {
              *plVar6 = lVar15 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (lVar15 == 0) {
            (**(code **)(*plStack_68 + 0x10))(plStack_68);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
          }
        }
        plVar10 = (long *)param_1[0x16];
        param_1[0x15] = puVar13 + 3;
        param_1[0x16] = puVar13;
        if (plVar10 != (long *)0x0) {
          plVar6 = plVar10 + 1;
          do {
            lVar15 = *plVar6;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar8) {
              *plVar6 = lVar15 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (lVar15 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
          }
        }
        if (plVar11 != (long *)0x0) {
          plVar10 = plVar11 + 1;
          do {
            lVar15 = *plVar10;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar8) {
              *plVar10 = lVar15 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (lVar15 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
          }
        }
        *(undefined8 *)((long)param_1 + 0x100cc) = 0x3f80000000000000;
        *(undefined4 *)((long)param_1 + 0x100d4) = 0x3f800000;
        return param_1;
      }
    }
  }
  FUN_10a00946c(&UNK_10f69f392);
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10ac6f8dc);
  (*pcVar9)();
}



/* Entry: 10ac6f93c; end: 10ac6f9d7;  */

void FUN_10ac6f93c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 uStack_39;
  undefined1 auStack_38 [8];
  long *plStack_30;
  undefined1 uStack_21;
  
  if (*(long *)(param_1 + 0x100b8) == 0) {
    uStack_39 = 0;
    FUN_10ac46794(auStack_38,&uStack_21,&UNK_10f69e32c,&uStack_39);
    func_0x00010a41cc44(param_1 + 0x100b8,auStack_38);
    if (plStack_30 != (long *)0x0) {
      plVar1 = plStack_30 + 1;
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
        (**(code **)(*plStack_30 + 0x10))(plStack_30);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_30);
      }
    }
    *(undefined4 *)(param_1 + 0x74) = 2;
  }
  return;
}



/* Entry: 10ac6f9d8; end: 10ac6f9df;  */

void FUN_10ac6f9d8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 uStack_39;
  undefined1 auStack_38 [8];
  long *plStack_30;
  undefined1 uStack_21;
  
  if (*(long *)(param_1 + 0x100a8) == 0) {
    uStack_39 = 0;
    FUN_10ac46794(auStack_38,&uStack_21,&UNK_10f69e32c,&uStack_39);
    func_0x00010a41cc44(param_1 + 0x100a8,auStack_38);
    if (plStack_30 != (long *)0x0) {
      plVar1 = plStack_30 + 1;
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
        (**(code **)(*plStack_30 + 0x10))(plStack_30);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_30);
      }
    }
    *(undefined4 *)(param_1 + 100) = 2;
  }
  return;
}



/* Entry: 10ac6f9e0; end: 10ac6fa0b;  */

void FUN_10ac6f9e0(long param_1)

{
  func_0x00010a3a4b08(param_1 + 0x100b8);
  *(undefined4 *)(param_1 + 0x74) = 0;
  return;
}



/* Entry: 10ac6fa0c; end: 10ac6fa17;  */

long FUN_10ac6fa0c(long param_1)

{
  return param_1 + 0x100b8;
}



/* Entry: 10ac6fa18; end: 10ac6fa9f;  */

void FUN_10ac6fa18(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if ((int)param_2 - 1U < 0x2edff) {
    *(int *)(*(long *)(param_1 + 0x100b8) + 0x48) = (int)param_2;
    puVar2 = *(undefined8 **)(param_1 + 0xa8);
    uVar1 = *puVar2;
    __ZNSt3__15mutex4lockEv(uVar1);
    FUN_10ad1993c(puVar2[2],param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(uVar1);
    return;
  }
  return;
}



/* Entry: 10ac6faa0; end: 10ac6faaf;  */

undefined4 FUN_10ac6faa0(long param_1)

{
  return *(undefined4 *)(*(long *)(param_1 + 0x100b8) + 0x48);
}



/* Entry: 10ac6fab0; end: 10ac6fb43;  */

float FUN_10ac6fab0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  float fVar5;
  
  puVar2 = *(undefined8 **)(param_1 + 0xa8);
  uVar1 = *puVar2;
  __ZNSt3__15mutex4lockEv(uVar1);
  lVar3 = puVar2[2];
  uVar4 = *(ulong *)(lVar3 + 0x8018);
  fVar5 = 0.0;
  if (uVar4 <= (ulong)((undefined8 *)*param_2)[1]) {
    _memcpy(*(undefined8 *)*param_2,lVar3 + 0x14,uVar4 << 2);
    *(undefined8 *)(lVar3 + 0x8018) = 0;
    fVar5 = (float)uVar4;
  }
  __ZNSt3__15mutex6unlockEv(uVar1);
  *(float *)(param_1 + 0x100cc) = fVar5;
  return fVar5;
}



/* Entry: 10ac6fb44; end: 10ac6fc33;  */

void FUN_10ac6fb44(long param_1,long *param_2)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  float fVar13;
  int iStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  long *plStack_78;
  long lStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  
  puVar8 = *(undefined8 **)(param_1 + 0xa8);
  uVar10 = *puVar8;
  __ZNSt3__15mutex4lockEv(uVar10);
  lVar12 = puVar8[2];
  uVar11 = *(ulong *)(lVar12 + 0x8018);
  if (*(ulong *)(*param_2 + 8) < uVar11) {
    __ZNSt3__15mutex6unlockEv(uVar10);
  }
  else {
    lVar1 = param_1 + 0xb8;
    plVar5 = (long *)(lVar12 + 0x14);
    _memcpy(lVar1,plVar5,uVar11 << 2);
    *(undefined8 *)(lVar12 + 0x8018) = 0;
    __ZNSt3__15mutex6unlockEv(uVar10);
    if (0x4000 < uVar11) {
      plVar4 = (long *)&UNK_10f69f3c6;
      FUN_10a00946c();
      pcStack_58 = FUN_10ac6fc34;
      plVar6 = plVar5;
      uStack_80 = uVar10;
      plStack_78 = param_2;
      lStack_70 = lVar1;
      lStack_68 = param_1;
      puStack_60 = &stack0xfffffffffffffff0;
      (**(code **)(*plVar5 + 0x248))(plVar5);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar4 + 0xf,plVar6);
      lVar12 = 0;
      if (plVar4[0x2017] != 0) {
        lVar12 = plVar4[0x2017] + 0x20;
      }
      (**(code **)(*plVar5 + 0x1e0))(plVar5,lVar12);
      (**(code **)(*plVar4 + 0x98))(plVar4,*(undefined4 *)(plVar4[0x2017] + 0x48));
      (**(code **)(*plVar5 + 0x58))(plVar5,&PTR_DAT_110c61c28,0);
      *(char *)(plVar4 + 0x2019) = (char)plVar5;
      if ((int)plVar5 == 0) {
        *(undefined1 *)(plVar4 + 0x2019) = 0;
        puVar8 = (undefined8 *)plVar4[0x15];
        uVar10 = *puVar8;
        __ZNSt3__15mutex4lockEv(uVar10);
        FUN_10ad19890(puVar8[2]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(uVar10);
        return;
      }
      *(undefined1 *)(plVar4 + 0x2019) = 1;
      iVar9 = (int)plVar4[0x201b];
      if (iVar9 == 0) {
        if ((plVar4[0x12] != 0) && (lVar12 = *(long *)(plVar4[0x12] + 0x100), lVar12 != 0)) {
          plVar5 = *(long **)(lVar12 + 0x1c8);
          (**(code **)(*plVar5 + 0xf0))();
          plVar6 = (long *)plVar5[1];
          if ((plVar6 != (long *)0x0) &&
             (__ZNSt3__119__shared_weak_count4lockEv(), plVar6 != (long *)0x0)) {
            if ((*plVar5 == 0) || (*(int *)(*(long *)(*plVar5 + 0x78) + 8) == 0)) {
              iVar9 = 1;
            }
            else {
              iVar9 = 2;
            }
            plVar5 = plVar6 + 1;
            do {
              lVar12 = *plVar5;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
              if (bVar3) {
                *plVar5 = lVar12 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar12 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
            }
            goto LAB_10ac6fd78;
          }
        }
        iVar9 = 1;
      }
LAB_10ac6fd78:
      uStack_84 = *(undefined4 *)((long)plVar4 + 0x100dc);
      puVar8 = (undefined8 *)plVar4[0x15];
      uVar10 = *puVar8;
      iStack_88 = iVar9;
      __ZNSt3__15mutex4lockEv(uVar10);
      FUN_10ad197d0(puVar8[2],&iStack_88);
      __ZNSt3__15mutex6unlockEv(uVar10);
      return;
    }
    if (uVar11 != 0) {
      uVar7 = 0;
      lVar12 = *(long *)*param_2;
      do {
        *(short *)(lVar12 + uVar7 * 2) = (short)(int)(*(float *)(lVar1 + uVar7 * 4) * 32767.0);
        uVar7 = uVar7 + 1;
      } while (uVar11 != uVar7);
      fVar13 = (float)uVar11;
      goto LAB_10ac6fc04;
    }
  }
  fVar13 = 0.0;
LAB_10ac6fc04:
  *(float *)(param_1 + 0x100cc) = fVar13;
  return;
}



/* Entry: 10ac6fc34; end: 10ac6fcef;  */

void FUN_10ac6fc34(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int iVar8;
  int iStack_38;
  undefined4 uStack_34;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x248))(param_2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 0xf,plVar3);
  lVar5 = 0;
  if (param_1[0x2017] != 0) {
    lVar5 = param_1[0x2017] + 0x20;
  }
  (**(code **)(*param_2 + 0x1e0))(param_2,lVar5);
  (**(code **)(*param_1 + 0x98))(param_1,*(undefined4 *)(param_1[0x2017] + 0x48));
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110c61c28,0);
  *(char *)(param_1 + 0x2019) = (char)param_2;
  if ((int)param_2 == 0) {
    *(undefined1 *)(param_1 + 0x2019) = 0;
    puVar7 = (undefined8 *)param_1[0x15];
    uVar6 = *puVar7;
    __ZNSt3__15mutex4lockEv(uVar6);
    FUN_10ad19890(puVar7[2]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(uVar6);
    return;
  }
  *(undefined1 *)(param_1 + 0x2019) = 1;
  iVar8 = (int)param_1[0x201b];
  if (iVar8 == 0) {
    if ((param_1[0x12] != 0) && (lVar5 = *(long *)(param_1[0x12] + 0x100), lVar5 != 0)) {
      plVar3 = *(long **)(lVar5 + 0x1c8);
      (**(code **)(*plVar3 + 0xf0))();
      plVar4 = (long *)plVar3[1];
      if ((plVar4 != (long *)0x0) &&
         (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 != (long *)0x0)) {
        if ((*plVar3 == 0) || (*(int *)(*(long *)(*plVar3 + 0x78) + 8) == 0)) {
          iVar8 = 1;
        }
        else {
          iVar8 = 2;
        }
        plVar3 = plVar4 + 1;
        do {
          lVar5 = *plVar3;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar2) {
            *plVar3 = lVar5 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar5 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
        goto LAB_10ac6fd78;
      }
    }
    iVar8 = 1;
  }
LAB_10ac6fd78:
  uStack_34 = *(undefined4 *)((long)param_1 + 0x100dc);
  puVar7 = (undefined8 *)param_1[0x15];
  uVar6 = *puVar7;
  iStack_38 = iVar8;
  __ZNSt3__15mutex4lockEv(uVar6);
  FUN_10ad197d0(puVar7[2],&iStack_38);
  __ZNSt3__15mutex6unlockEv(uVar6);
  return;
}



/* Entry: 10ac6fcf0; end: 10ac6fe07;  */

void FUN_10ac6fcf0(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int iVar8;
  int iStack_38;
  undefined4 uStack_34;
  
  *(undefined1 *)(param_1 + 0x100c8) = 1;
  iVar8 = *(int *)(param_1 + 0x100d8);
  if (iVar8 == 0) {
    if ((*(long *)(param_1 + 0x90) != 0) &&
       (lVar5 = *(long *)(*(long *)(param_1 + 0x90) + 0x100), lVar5 != 0)) {
      plVar3 = *(long **)(lVar5 + 0x1c8);
      (**(code **)(*plVar3 + 0xf0))();
      plVar4 = (long *)plVar3[1];
      if ((plVar4 != (long *)0x0) &&
         (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 != (long *)0x0)) {
        if ((*plVar3 == 0) || (*(int *)(*(long *)(*plVar3 + 0x78) + 8) == 0)) {
          iVar8 = 1;
        }
        else {
          iVar8 = 2;
        }
        plVar3 = plVar4 + 1;
        do {
          lVar5 = *plVar3;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar2) {
            *plVar3 = lVar5 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar5 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
        goto LAB_10ac6fd78;
      }
    }
    iVar8 = 1;
  }
LAB_10ac6fd78:
  uStack_34 = *(undefined4 *)(param_1 + 0x100dc);
  puVar7 = *(undefined8 **)(param_1 + 0xa8);
  uVar6 = *puVar7;
  iStack_38 = iVar8;
  __ZNSt3__15mutex4lockEv(uVar6);
  FUN_10ad197d0(puVar7[2],&iStack_38);
  __ZNSt3__15mutex6unlockEv(uVar6);
  return;
}



/* Entry: 10ac6fe08; end: 10ac6fe5b;  */

void FUN_10ac6fe08(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  *(undefined1 *)(param_1 + 0x100c8) = 0;
  puVar2 = *(undefined8 **)(param_1 + 0xa8);
  uVar1 = *puVar2;
  __ZNSt3__15mutex4lockEv(uVar1);
  FUN_10ad19890(puVar2[2]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(uVar1);
  return;
}



/* Entry: 10ac6fe5c; end: 10ac6fef3;  */

void FUN_10ac6fe5c(long param_1,long *param_2)

{
  long lVar1;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_30 = &UNK_10f662af6;
  uStack_28 = 0x20;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110c66928,&puStack_30);
  lVar1 = 0;
  if (*(long *)(param_1 + 0x100b8) != 0) {
    lVar1 = *(long *)(param_1 + 0x100b8) + 0x20;
  }
  (**(code **)(*param_2 + 0x120))(param_2,lVar1,0);
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110c61c28,0);
  return;
}



/* Entry: 10ac6fef4; end: 10ac6ff87;  */

undefined8 FUN_10ac6fef4(void)

{
  return 0x4000;
}



/* Entry: 10ac6ff88; end: 10ac70057;  */

undefined8 * FUN_10ac6ff88(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  param_1[0x53] = &PTR_FUN_110c383b8;
  param_1[0x55] = 0;
  param_1[0x54] = 0;
  *(undefined2 *)(param_1 + 0x56) = 0x100;
  puVar1 = param_1;
  FUN_10a1da04c(param_1,&PTR_PTR_110c61ea8,param_2);
  *puVar1 = &PTR_FUN_110c61c60;
  puVar1[2] = &PTR_FUN_110c61d90;
  puVar1[5] = &PTR_FUN_110c61dc0;
  puVar1[0x53] = &PTR_FUN_110c61e68;
  puVar1[0x15] = &PTR_FUN_110c61e18;
  puVar1[0x52] = 0;
  puVar1[0x51] = 0;
  FUN_10a1da3a4();
  return param_1;
}



/* Entry: 10ac70058; end: 10ac7015b;  */

void FUN_10ac70058(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  lVar5 = *(long *)(param_1 + 0x288);
  if (lVar5 == 0) {
    puVar4 = *(undefined8 **)(param_1 + 0x90);
    FUN_10a3dedfc();
    plStack_28 = (long *)puVar4[1];
    uStack_30 = *puVar4;
    if (puVar4[1] != 0) {
      plVar1 = (long *)(puVar4[1] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a1e3a04(param_1,&uStack_30);
    if (plStack_28 == (long *)0x0) {
      return;
    }
    plVar1 = plStack_28 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    uStack_30 = *(undefined8 *)(lVar5 + 0x268);
    plStack_28 = *(long **)(lVar5 + 0x270);
    if (plStack_28 != (long *)0x0) {
      plVar1 = plStack_28 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a1e3a04(param_1,&uStack_30);
    if (plStack_28 == (long *)0x0) {
      return;
    }
    plVar1 = plStack_28 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar1 = plStack_28;
  if (lVar5 == 0) {
    (**(code **)(*plStack_28 + 0x10))(plStack_28);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
  }
  return;
}



/* Entry: 10ac7015c; end: 10ac70163;  */

void FUN_10ac7015c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  lVar5 = *(long *)(param_1 + 0x278);
  if (lVar5 == 0) {
    puVar4 = *(undefined8 **)(param_1 + 0x80);
    FUN_10a3dedfc();
    plStack_28 = (long *)puVar4[1];
    uStack_30 = *puVar4;
    if (puVar4[1] != 0) {
      plVar1 = (long *)(puVar4[1] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a1e3a04(param_1 + -0x10,&uStack_30);
    if (plStack_28 == (long *)0x0) {
      return;
    }
    plVar1 = plStack_28 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    uStack_30 = *(undefined8 *)(lVar5 + 0x268);
    plStack_28 = *(long **)(lVar5 + 0x270);
    if (plStack_28 != (long *)0x0) {
      plVar1 = plStack_28 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a1e3a04(param_1 + -0x10,&uStack_30);
    if (plStack_28 == (long *)0x0) {
      return;
    }
    plVar1 = plStack_28 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar1 = plStack_28;
  if (lVar5 == 0) {
    (**(code **)(*plStack_28 + 0x10))(plStack_28);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
  }
  return;
}



/* Entry: 10ac70164; end: 10ac70197;  */

void FUN_10ac70164(long param_1)

{
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
  
  if (*(long **)(param_1 + 0x98) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x98) + 0x50))();
  }
  if (*(long *)(param_1 + 600) != 0) {
    FUN_10a20f5c0(param_1 + 0x240);
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    FUN_10a1c054c(param_1 + 0xa8,&uStack_70);
  }
  return;
}



/* Entry: 10ac70198; end: 10ac7026f;  */

void FUN_10ac70198(long param_1,long *param_2)

{
  long *plVar1;
  undefined ***pppuVar2;
  undefined ***pppuVar3;
  undefined **ppuVar4;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined ***pppuStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  code *pcStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x248))(param_2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 0x78,plVar1);
  pcStack_78 = FUN_10ac838dc;
  ppuStack_70 = &PTR_DAT_110c67258;
  ppuVar4 = &PTR_DAT_110c66f38;
  lStack_68 = param_1;
  FUN_10a02d928(param_2,&PTR_DAT_110c66f38,&pcStack_78,0);
  pppuVar2 = &ppuStack_70;
  (*(code *)*ppuStack_70)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(&ppuStack_70);
  pppuVar3 = pppuVar2;
  __Unwind_Resume(pppuVar2);
  pcStack_88 = FUN_10ac70270;
  puStack_b0 = &UNK_10f663199;
  uStack_a8 = 0x1e;
  lStack_a0 = param_1;
  pppuStack_98 = pppuVar2;
  puStack_90 = &stack0xfffffffffffffff0;
  (**(code **)(*ppuVar4 + 0x30))(ppuVar4,&PTR_DAT_110c66928,&puStack_b0);
  FUN_10a02e188(ppuVar4,&PTR_DAT_110c66f38,pppuVar3 + 0x51,&UNK_10f633e9d,0xd);
  return;
}



/* Entry: 10ac70270; end: 10ac702e3;  */

void FUN_10ac70270(long param_1,long *param_2)

{
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_30 = &UNK_10f663199;
  uStack_28 = 0x1e;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110c66928,&puStack_30);
  FUN_10a02e188(param_2,&PTR_DAT_110c66f38,param_1 + 0x288,&UNK_10f633e9d,0xd);
  return;
}



/* Entry: 10ac702e4; end: 10ac702eb;  */

long FUN_10ac702e4(long param_1)

{
  return param_1 + 0x228;
}



/* Entry: 10ac702ec; end: 10ac70353;  */

long * FUN_10ac702ec(long param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  
  if (*(long *)(param_1 + 0x288) != 0) {
    uVar3 = 0;
    if (*(long *)(param_1 + 0x98) != 0) {
      uVar3 = 2;
    }
    return (long *)(ulong)uVar3;
  }
  plVar1 = *(long **)(param_1 + 0x90);
  FUN_10a3dedfc();
  plVar1 = (long *)*plVar1;
  while( true ) {
    if (plVar1 == (long *)0x0) {
      return (long *)0x2;
    }
    plVar2 = plVar1;
    (**(code **)(*plVar1 + 0x80))();
    if ((int)plVar2 != 2) break;
    plVar1 = (long *)plVar1[0x13];
  }
  return plVar2;
}



/* Entry: 10ac70354; end: 10ac7037b;  */

undefined1  [16] FUN_10ac70354(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x25;
  auVar1._0_8_ = &UNK_10f69fa67;
  return auVar1;
}



/* Entry: 10ac7037c; end: 10ac703c7;  */

void FUN_10ac7037c(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_58 = 0;
  uStack_50 = 0xffffffff00000001;
  uStack_48 = 0xffffffff;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_20 = 0;
  uStack_18 = 0xffffffff;
  FUN_10ac703c8(param_1,&uStack_58);
  FUN_10ac83a08();
  return;
}



/* Entry: 10ac703c8; end: 10ac7049f;  */

/* WARNING: Removing unreachable block (ram,0x00010ac70460) */

undefined1  [16] FUN_10ac703c8(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f69fa67,0x25);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10ac8390c(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10ac704a0; end: 10ac7050b;  */

undefined8 * FUN_10ac704a0(undefined8 *param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  *param_1 = &PTR_DAT_110c61ee0;
  param_1[2] = &PTR_DAT_110c61fb8;
  param_1[5] = &PTR_DAT_110c61fe8;
  if (*(char *)((long)param_1 + 0xe7) < '\0') {
    __ZdlPv(param_1[0x1a]);
  }
  if (param_1[0x17] != 0) {
    param_1[0x18] = param_1[0x17];
    __ZdlPv();
  }
  if (param_1[0x14] != 0) {
    param_1[0x15] = param_1[0x14];
    __ZdlPv();
  }
  *param_1 = &PTR_DAT_110c60a00;
  param_1[2] = &PTR_DAT_110c60a88;
  param_1[5] = &PTR_DAT_110c60ab8;
  ppuVar2 = (undefined **)(param_1 + 0xb);
  puVar5 = (undefined8 *)param_1[0xc];
  for (puVar4 = (undefined8 *)*ppuVar2; puVar4 != puVar5; puVar4 = puVar4 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar4,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar2);
  plVar3 = param_1 + 10;
  if ((*plVar3 != 0) && (*(undefined ***)(*(long *)(*plVar3 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + 3);
  if ((param_1[0x12] != 0) && (lVar1 = *(long *)(param_1[0x12] + 0x828), lVar1 != 0)) {
    FUN_10a1dfb2c(lVar1,param_1);
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  appuStack_180[0] = ppuVar2;
  FUN_10ac78cf4(appuStack_180);
  lVar1 = *plVar3;
  *plVar3 = 0;
  if (lVar1 != 0) {
    FUN_10ac7d690(plVar3);
  }
  if (param_1[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 6);
  param_1[2] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + 3);
  return param_1;
}



/* Entry: 10ac7050c; end: 10ac70607;  */

undefined8 * FUN_10ac7050c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = param_1;
  FUN_10ac63120();
  *puVar2 = &PTR_DAT_110c61ee0;
  puVar2[2] = &PTR_DAT_110c61fb8;
  puVar2[5] = &PTR_DAT_110c61fe8;
  puVar3 = puVar2 + 0x17;
  puVar2[0x18] = 0;
  *puVar3 = 0;
  puVar1 = puVar2 + 0x14;
  puVar2[0x14] = 0;
  puVar2[0x13] = 0;
  puVar2[0x16] = 0;
  puVar2[0x15] = 0;
  puVar2[0x1a] = 0;
  puVar2[0x19] = 0;
  puVar2[0x1c] = 0;
  puVar2[0x1b] = 0;
  *(undefined4 *)(puVar2 + 0x1d) = 0x3f800000;
  func_0x0001095be5f4();
  if (puVar1 != puVar2 + 1) {
    func_0x00010a0e2360(puVar1,puVar2[1],puVar2[2],(long)(puVar2[2] - puVar2[1]) >> 3);
  }
  if (puVar3 != puVar2 + 4) {
    func_0x00010a0e2360(puVar3,puVar2[4],puVar2[5],(long)(puVar2[5] - puVar2[4]) >> 3);
  }
  return param_1;
}



/* Entry: 10ac70608; end: 10ac70623;  */

undefined4 FUN_10ac70608(long param_1)

{
  return *(undefined4 *)(param_1 + 0x9c);
}



/* Entry: 10ac70624; end: 10ac70687;  */

/* WARNING: Possible PIC construction at 0x00010ac70654: Changing call to branch */

void FUN_10ac70624(long param_1,long *param_2,long *param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long *plVar14;
  undefined8 unaff_x23;
  long *plVar15;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  plVar4 = (long *)(param_1 + 0xa0);
  if (plVar4 == param_2) {
    plVar4 = (long *)(param_1 + 0xb8);
    if (plVar4 == param_3) {
      return;
    }
    lVar11 = *param_3;
    puVar5 = (undefined8 *)param_3[1];
    lVar12 = (long)puVar5 - lVar11;
  }
  else {
    lVar11 = *param_2;
    puVar5 = (undefined8 *)param_2[1];
    lVar12 = (long)puVar5 - lVar11;
    unaff_x30 = 0x10ac70658;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x19 = param_3;
    unaff_x20 = param_1;
    unaff_x29 = puVar1;
  }
  puVar8 = (undefined2 *)(lVar12 >> 3);
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  uVar9 = plVar4[2];
  plVar14 = (long *)*plVar4;
  if ((undefined2 *)((long)(uVar9 - (long)plVar14) >> 3) < puVar8) {
    plVar15 = plVar4;
    puVar6 = puVar5;
    puVar7 = puVar8;
    if (plVar14 != (long *)0x0) {
      plVar4[1] = (long)plVar14;
      __ZdlPv();
      uVar9 = 0;
      *plVar4 = 0;
      plVar4[1] = 0;
      plVar4[2] = 0;
      plVar15 = plVar14;
    }
    if ((ulong)puVar8 >> 0x3d != 0) {
      FUN_10a0ced44();
      *(undefined2 **)((long)register0x00000008 + -0x70) = puVar8;
      *(undefined8 **)((long)register0x00000008 + -0x68) = puVar5;
      *(long *)((long)register0x00000008 + -0x60) = lVar11;
      *(long **)((long)register0x00000008 + -0x58) = plVar4;
      *(undefined1 **)((long)register0x00000008 + -0x50) =
           (undefined1 *)((long)register0x00000008 + -0x10);
      *(code **)((long)register0x00000008 + -0x48) = FUN_10a0e2488;
      plVar4 = plVar15;
      FUN_10a0da208();
      if (*plVar4 == 0) {
        puVar5 = (undefined8 *)0x90;
        __Znwm();
        uVar10 = *puVar6;
        puVar5[5] = puVar6[1];
        puVar5[4] = uVar10;
        puVar5[6] = puVar6[2];
        puVar6[1] = 0;
        puVar6[2] = 0;
        *puVar6 = 0;
        *(undefined2 *)(puVar5 + 7) = *puVar7;
        uVar10 = *(undefined8 *)(puVar7 + 4);
        puVar5[9] = *(undefined8 *)(puVar7 + 8);
        puVar5[8] = uVar10;
        puVar5[10] = *(undefined8 *)(puVar7 + 0xc);
        *(undefined8 *)(puVar7 + 4) = 0;
        *(undefined8 *)(puVar7 + 8) = 0;
        uVar10 = *(undefined8 *)(puVar7 + 0x10);
        puVar5[0xc] = *(undefined8 *)(puVar7 + 0x14);
        puVar5[0xb] = uVar10;
        *(undefined8 *)(puVar7 + 0xc) = 0;
        *(undefined8 *)(puVar7 + 0x10) = 0;
        uVar10 = *(undefined8 *)(puVar7 + 0x18);
        uVar2 = *(undefined8 *)(puVar7 + 0x1c);
        *(undefined8 *)(puVar7 + 0x14) = 0;
        *(undefined8 *)(puVar7 + 0x18) = 0;
        plVar14 = (long *)(puVar7 + 0x20);
        lVar11 = *plVar14;
        puVar5[0xd] = uVar10;
        puVar5[0xe] = uVar2;
        plVar13 = puVar5 + 0xf;
        *plVar13 = lVar11;
        lVar12 = *(long *)(puVar7 + 0x24);
        puVar5[0x10] = lVar12;
        if (lVar12 == 0) {
          puVar5[0xe] = plVar13;
        }
        else {
          *(long **)(lVar11 + 0x10) = plVar13;
          *(long **)(puVar7 + 0x1c) = plVar14;
          *plVar14 = 0;
          *(undefined8 *)(puVar7 + 0x24) = 0;
        }
        puVar5[0x11] = *(undefined8 *)(puVar7 + 0x28);
        uVar10 = *(undefined8 *)((long)register0x00000008 + -0x78);
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = uVar10;
        *plVar4 = (long)puVar5;
        if (*(long *)*plVar15 != 0) {
          *plVar15 = *(long *)*plVar15;
          puVar5 = (undefined8 *)*plVar4;
        }
        func_0x000107c2b058(plVar15[1],puVar5);
        plVar15[2] = plVar15[2] + 1;
      }
      return;
    }
    puVar7 = (undefined2 *)((long)uVar9 >> 2);
    if ((undefined2 *)((long)uVar9 >> 2) <= puVar8) {
      puVar7 = puVar8;
    }
    if (0x7ffffffffffffff7 < uVar9) {
      puVar7 = (undefined2 *)0x1fffffffffffffff;
    }
    FUN_10a0cf094(plVar4,puVar7);
    lVar12 = plVar4[1];
    lVar3 = (long)puVar5 - lVar11;
    if (lVar3 != 0) {
      _memmove(lVar12,lVar11,lVar3);
    }
    lVar12 = lVar12 + lVar3;
  }
  else {
    plVar15 = (long *)plVar4[1];
    if ((undefined2 *)((long)plVar15 - (long)plVar14 >> 3) < puVar8) {
      lVar3 = lVar11 + ((long)plVar15 - (long)plVar14);
      if (plVar15 != plVar14) {
        _memmove(plVar14,lVar11);
        plVar15 = (long *)plVar4[1];
      }
      lVar12 = (long)puVar5 - lVar3;
      if (lVar12 != 0) {
        _memmove(plVar15,lVar3,lVar12);
      }
      lVar12 = (long)plVar15 + lVar12;
    }
    else {
      lVar12 = (long)puVar5 - lVar11;
      if (lVar12 != 0) {
        _memmove(plVar14,lVar11,lVar12);
      }
      lVar12 = (long)plVar14 + lVar12;
    }
  }
  plVar4[1] = lVar12;
  return;
}



/* Entry: 10ac70688; end: 10ac706a7;  */

undefined1  [16] FUN_10ac70688(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x28;
  auVar1._0_8_ = &UNK_10f66275f;
  return auVar1;
}



/* Entry: 10ac706a8; end: 10ac7070f;  */

bool FUN_10ac706a8(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x28) {
    iVar2 = 0xf66275f;
    _memcmp(&UNK_10f66275f,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0xf) &&
     (*param_2 == 0x5065727574786554 && *(long *)((long)param_2 + 7) == 0x72656469766f7250)) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 8) {
      return false;
    }
    bVar1 = *param_2 == 0x72656469766f7250;
  }
  return bVar1;
}



/* Entry: 10ac70710; end: 10ac70717;  */

bool FUN_10ac70710(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x28) {
    iVar2 = 0xf66275f;
    _memcmp(&UNK_10f66275f,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0xf) &&
     (*param_2 == 0x5065727574786554 && *(long *)((long)param_2 + 7) == 0x72656469766f7250)) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 8) {
      return false;
    }
    bVar1 = *param_2 == 0x72656469766f7250;
  }
  return bVar1;
}



/* Entry: 10ac70718; end: 10ac70ce7;  */

void FUN_10ac70718(undefined8 *param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 *puStack_98;
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
  
  func_0x000109887da8(appuStack_c8,&UNK_10f66275f,0x28);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  param_1[0x36] = &PTR_DAT_110c661f0;
  pppuVar2 = (undefined8 ***)&UNK_10f69e32c;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x37,pppuVar2);
  puStack_98 = (undefined8 *)0x0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x2d,&ppuStack_a0);
  puVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c661f0;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110bb3788;
    puStack_98 = (undefined8 *)0x0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  puVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0xf) & 1) == 0) goto LAB_10ac70cc8;
    FUN_10a054dac(param_1,&UNK_10f69f40f,FUN_10ac83ac4,2,param_1[8]);
  }
  puVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0xf) & 1) == 0) goto LAB_10ac70cc8;
    FUN_10a054dac(param_1,&UNK_10f69f418,FUN_10ac83c48,2,param_1[8]);
  }
  puVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0xf) & 1) == 0) goto LAB_10ac70cc8;
    FUN_10a054dac(param_1,&UNK_10f69f423,FUN_10ac83de0,1,param_1[8]);
  }
  puVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0xf) & 1) == 0) goto LAB_10ac70cc8;
    FUN_10a054dac(param_1,&UNK_10f69f43f,FUN_10ac83f44,3,param_1[8]);
  }
  puVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0xf) & 1) == 0) goto LAB_10ac70cc8;
    FUN_10a054dac(param_1,&UNK_10f69f44e,FUN_10ac84214,2,param_1[8]);
  }
  puVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0xf) & 1) == 0) goto LAB_10ac70cc8;
    FUN_10a054dac(param_1,&UNK_10f69f45f,FUN_10ac84310,3,param_1[8]);
  }
  puVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0xf) & 1) == 0) goto LAB_10ac70cc8;
    FUN_10a054dac(param_1,&UNK_10f69f46b,FUN_10ac84444,2,param_1[8]);
  }
  puVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0xf) & 1) == 0) goto LAB_10ac70cc8;
    FUN_10a054dac(param_1,&DAT_10f309588,FUN_10ac84560,2,param_1[8]);
  }
  puVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0xf) & 1) == 0) goto LAB_10ac70cc8;
    FUN_10a054dac(param_1,&UNK_10f69f478,FUN_10ac84618,3,param_1[8]);
  }
  puVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f68e07d,FUN_10ac84b88,FUN_10ac84c48);
  }
  puVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f69f49b,FUN_10ac84d10,FUN_10ac84dd0);
  }
  puVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if (((ulong)puVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f69f4aa,FUN_10ac84ebc,FUN_10ac84f70);
  }
  param_1[0x36] = PTR___ZTIDn_1103469e8;
  lVar3 = param_1[0x2e];
  if (param_1[0x2d] != lVar3) {
    puStack_98 = *(undefined8 **)(lVar3 + -0x60);
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
    param_1[0x2e] = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    puVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if (((ulong)puVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x37,&UNK_10f66275f,0x28);
      FUN_10a05431c(param_1);
    }
    puStack_98 = (undefined8 *)0x0;
    uStack_90 = 0;
    ppuStack_a0 = (undefined8 **)&UNK_10f6553fc;
    uStack_80 = 0xffffffffffffffff;
    uStack_88 = 0x100000019;
    uStack_70 = 0;
    uStack_78 = 0;
    uStack_60 = 0;
    uStack_68 = 0;
    uStack_58 = 0;
    uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
    uStack_48 = 0;
    uStack_40 = 0;
    func_0x00010a004eb4(param_1,&ppuStack_a0);
    puVar7 = param_1;
    FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
    if (((ulong)puVar7 & 1) == 0) {
      if (param_1[2] == param_1[3]) goto LAB_10ac70cc8;
      ppuStack_a0 = (undefined8 **)CONCAT44(ppuStack_a0._4_4_,3);
      puStack_98 = (undefined8 *)0x4060000000000000;
      FUN_10a005308(param_1[3] + -8,*param_1,&UNK_10f69f584,&ppuStack_a0);
      if ((3 < (int)ppuStack_a0) && (puStack_98 != (undefined8 *)0x0)) {
        (**(code **)*puStack_98)();
      }
    }
    func_0x00010a004064(param_1);
    return;
  }
LAB_10ac70cc8:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10ac70ccc);
  (*pcVar6)();
}



/* Entry: 10ac70ce8; end: 10ac70de3;  */

void FUN_10ac70ce8(undefined8 param_1)

{
  undefined4 uStack_9c;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f69f4bb;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10ac70de4(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f69f4ca;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_9c = 0;
  FUN_10ac70e3c(param_1,&puStack_98,&uStack_9c);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f69f4cf;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff00000124;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_9c = 1;
  FUN_10ac70e3c(param_1,&puStack_98,&uStack_9c);
  FUN_10a003ff4(param_1);
  return;
}



/* Entry: 10ac70de4; end: 10ac70e3b;  */

ulong FUN_10ac70de4(ulong param_1,undefined8 *param_2)

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



/* Entry: 10ac70e3c; end: 10ac70e93;  */

ulong FUN_10ac70e3c(ulong param_1,undefined8 *param_2,undefined4 *param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    func_0x00010ac8504c(param_1,*param_2,*param_3);
  }
  return param_1;
}



/* Entry: 10ac70e94; end: 10ac71157;  */

/* WARNING: Possible PIC construction at 0x00010ac71048: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ac7104c) */
/* WARNING: Removing unreachable block (ram,0x00010ac71090) */
/* WARNING: Removing unreachable block (ram,0x00010ac710ac) */
/* WARNING: Removing unreachable block (ram,0x00010ac710c8) */
/* WARNING: Removing unreachable block (ram,0x00010ac71108) */
/* WARNING: Removing unreachable block (ram,0x00010ac71110) */
/* WARNING: Removing unreachable block (ram,0x00010ac71124) */
/* WARNING: Removing unreachable block (ram,0x00010ac71130) */
/* WARNING: Removing unreachable block (ram,0x00010ac71144) */
/* WARNING: Removing unreachable block (ram,0x00010ac71150) */
/* WARNING: Removing unreachable block (ram,0x00010ac711ac) */
/* WARNING: Removing unreachable block (ram,0x00010ac71170) */
/* WARNING: Removing unreachable block (ram,0x00010ac7118c) */
/* WARNING: Removing unreachable block (ram,0x00010ac7119c) */
/* WARNING: Removing unreachable block (ram,0x00010ac71074) */

void FUN_10ac70e94(undefined8 param_1,float param_2,float param_3,float param_4,undefined8 *param_5,
                  long param_6)

{
  float *pfVar1;
  char cVar2;
  bool bVar3;
  float fVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  int iVar15;
  undefined4 *puVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  float *pfVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined4 uStack_134;
  long lStack_130;
  long lStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  long *plStack_110;
  long *plStack_108;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  *param_5 = &PTR_FUN_110c620c0;
  param_5[1] = param_6;
  param_5[2] = 0;
  puVar6 = param_5;
  FUN_109d1a80c();
  uStack_80 = *puVar6;
  puStack_78 = &UNK_1053a6a3c;
  ppuStack_70 = &PTR_DAT_110ae9180;
  FUN_109d228cc(param_5 + 3,&UNK_10f69f4d5,0xb,1,&uStack_80);
  func_0x0001092ba41c(&uStack_80);
  *(undefined4 *)(param_5 + 0x1b) = 0x42ff0000;
  param_5[0x1a] = 0;
  uVar21 = 0;
  uVar22 = 0;
  uVar23 = 0;
  uVar24 = 0;
  *(undefined8 *)((long)param_5 + 0xf4) = 0;
  *(undefined8 *)((long)param_5 + 0xec) = 0;
  *(undefined8 *)((long)param_5 + 0x104) = 0;
  *(undefined8 *)((long)param_5 + 0xfc) = 0;
  *(undefined8 *)((long)param_5 + 0xe4) = 0;
  *(undefined8 *)((long)param_5 + 0xdc) = 0;
  param_5[0x22] = 0;
  param_5[0x21] = 0;
  param_5[0x23] = param_5 + 0x1c;
  param_5[0x24] = param_5 + 0x25;
  param_5[0x26] = 0;
  param_5[0x25] = 0;
  param_5[0x28] = 0;
  param_5[0x27] = 0;
  param_5[0x2a] = 0;
  param_5[0x29] = 0;
  *(undefined1 *)(param_5 + 0x2b) = 0;
  *(undefined4 *)(param_5 + 0x2c) = 0x42ff0000;
  *(undefined8 *)((long)param_5 + 0x16c) = 0;
  *(undefined8 *)((long)param_5 + 0x164) = 0;
  *(undefined8 *)((long)param_5 + 0x17c) = 0;
  *(undefined8 *)((long)param_5 + 0x174) = 0;
  *(undefined8 *)((long)param_5 + 0x18c) = 0;
  *(undefined8 *)((long)param_5 + 0x184) = 0;
  param_5[0x33] = 0;
  param_5[0x32] = 0;
  param_5[0x34] = param_5 + 0x2d;
  param_5[0x35] = param_5 + 0x36;
  param_5[0x39] = 0;
  param_5[0x38] = 0;
  param_5[0x37] = 0;
  param_5[0x36] = 0;
  param_5[0x3a] = 0x32aaaba7;
  param_5[0x3c] = 0;
  param_5[0x3b] = 0;
  param_5[0x3e] = 0;
  param_5[0x3d] = 0;
  param_5[0x40] = 0;
  param_5[0x3f] = 0;
  param_5[0x41] = 0;
  param_5[0x42] = 0x32aaaba7;
  param_5[0x44] = 0;
  param_5[0x43] = 0;
  param_5[0x46] = 0;
  param_5[0x45] = 0;
  param_5[0x48] = 0;
  param_5[0x47] = 0;
  param_5[0x4a] = 0;
  param_5[0x49] = 0;
  param_5[0x4c] = 0;
  param_5[0x4b] = 0;
  param_5[0x4e] = 0;
  param_5[0x4d] = 0;
  *(undefined8 *)((long)param_5 + 0x27c) = 0;
  *(undefined8 *)((long)param_5 + 0x274) = 0;
  plVar7 = (long *)0x60;
  __Znwm();
  func_0x0001094a95c4();
  plVar8 = (long *)param_5[0x1a];
  param_5[0x1a] = plVar7;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
    plVar7 = (long *)param_5[0x1a];
  }
  func_0x00010ad031c0();
  (**(code **)(*plVar7 + 0x20))(plVar7,plVar8);
  FUN_10ac71158(param_5,*(undefined4 *)(param_5 + 0x27));
  if ((*(byte *)(param_6 + 0x1a8) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10ac71090);
    (*pcVar5)();
  }
  uVar9 = 0xe8;
  __Znwm();
  uStack_80 = 0;
  puStack_78 = (undefined *)0x0;
  FUN_10aab1ef4();
  plVar7 = (long *)param_5[2];
  param_5[2] = uVar9;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 8))();
  }
  if (*(uint *)((long)param_5 + 0x13c) < 0x80) {
    *(uint *)((long)param_5 + 0x13c) = *(uint *)((long)param_5 + 0x13c);
    __ZNSt3__15mutex4lockEv(param_5 + 0x3a);
    *(undefined4 *)(param_5[2] + 0x14) = *(undefined4 *)((long)param_5 + 0x13c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_5 + 0x3a);
    return;
  }
  plVar7 = (long *)&UNK_10f652c32;
  FUN_10a00946c();
  lVar19 = *plVar7;
  if (((uint)*(undefined8 *)(*(long *)(lVar19 + 0x50) + 0x10) >> 1 & 1) != 0) {
    return;
  }
  __ZNSt3__15mutex4lockEv(lVar19 + 0x1d0);
  if (*(long *)(lVar19 + 0xe8) != 0) {
    uVar11 = (ulong)*(uint *)(lVar19 + 0xdc);
    if ((int)*(uint *)(lVar19 + 0xdc) < 3) {
      lVar12 = (long)*(int *)(lVar19 + 0xe4) * (long)*(int *)(lVar19 + 0xe0);
    }
    else {
      lVar12 = 1;
      piVar14 = *(int **)(lVar19 + 0x118);
      do {
        lVar12 = lVar12 * *piVar14;
        uVar11 = uVar11 - 1;
        piVar14 = piVar14 + 1;
      } while (uVar11 != 0);
    }
    if (lVar12 != 0) {
      if ((char)plVar7[1] == '\x01') {
        FUN_10aab71cc(*(undefined8 *)(*(long *)(lVar19 + 0x10) + 8));
      }
      FUN_10aab233c(&plStack_118,*(undefined8 *)(lVar19 + 0x10),lVar19 + 0xd8);
      if (plStack_118 == (long *)0x0) {
        __ZNSt3__15mutex6unlockEv(lVar19 + 0x1d0);
        return;
      }
      uVar11 = (plStack_118[6] - plStack_118[5] >> 5) * -0xf0f0f0f0f0f0f0f;
      iVar15 = (int)uVar11;
      lStack_130 = 0;
      lStack_128 = 0;
      uStack_120 = 0;
      plStack_110 = &lStack_130;
      plStack_108 = (long *)((ulong)plStack_108 & 0xffffffffffffff00);
      if ((uVar11 & 0xffffffff) != 0) {
        FUN_10a0010cc(&lStack_130,(long)iVar15);
        lVar12 = lStack_128;
        lVar18 = (((long)iVar15 * 0x18 - 0x18U) / 0x18) * 0x18 + 0x18;
        _bzero(lStack_128,lVar18);
        lStack_128 = lVar12 + lVar18;
      }
      func_0x00010983d048(lVar19 + 0x140,(long)iVar15);
      if (0 < iVar15) {
        uVar17 = 0;
        do {
          uVar13 = (plStack_118[6] - plStack_118[5] >> 5) * -0xf0f0f0f0f0f0f0f;
          if (uVar13 < uVar17 || uVar13 - uVar17 == 0) goto LAB_10ac71580;
          FUN_10a14c660(plStack_118[5] + uVar17 * 0x220 + 8);
          if ((ulong)(*(long *)(lVar19 + 0x148) - *(long *)(lVar19 + 0x140) >> 4) <= uVar17)
          goto LAB_10ac71580;
          param_4 = param_4 - param_2;
          param_3 = param_3 - (float)CONCAT13(uVar24,CONCAT12(uVar23,CONCAT11(uVar22,uVar21)));
          puVar10 = (undefined4 *)(*(long *)(lVar19 + 0x140) + uVar17 * 0x10);
          *puVar10 = CONCAT13(uVar24,CONCAT12(uVar23,CONCAT11(uVar22,uVar21)));
          puVar10[1] = param_2;
          puVar10[2] = param_3;
          puVar10[3] = param_4;
          uVar13 = (plStack_118[6] - plStack_118[5] >> 5) * -0xf0f0f0f0f0f0f0f;
          if ((uVar13 < uVar17 || uVar13 - uVar17 == 0) ||
             (uVar13 = (lStack_128 - lStack_130 >> 3) * -0x5555555555555555,
             uVar13 < uVar17 || uVar13 - uVar17 == 0)) goto LAB_10ac71580;
          lVar12 = plStack_118[5] + uVar17 * 0x220;
          func_0x0001092c8954(lStack_130 + uVar17 * 0x18,
                              *(long *)(lVar12 + 0x20) - *(long *)(lVar12 + 0x18) >> 3);
          pfVar1 = *(float **)(lVar12 + 0x20);
          for (pfVar20 = *(float **)(lVar12 + 0x18); pfVar20 != pfVar1; pfVar20 = pfVar20 + 2) {
            uVar13 = (lStack_128 - lStack_130 >> 3) * -0x5555555555555555;
            if (uVar13 < uVar17 || uVar13 - uVar17 == 0) goto LAB_10ac71580;
            puVar16 = (undefined4 *)(lStack_130 + uVar17 * 0x18);
            plStack_110 = (long *)CONCAT44(plStack_110._4_4_,(int)(long)(float)(int)*pfVar20);
            fVar4 = (float)(int)pfVar20[1];
            uVar21 = SUB41(fVar4,0);
            uVar22 = (undefined1)((uint)fVar4 >> 8);
            uVar23 = (undefined1)((uint)fVar4 >> 0x10);
            uVar24 = (undefined1)((uint)fVar4 >> 0x18);
            uStack_134 = (undefined4)(long)fVar4;
            puVar10 = *(undefined4 **)(puVar16 + 2);
            if (puVar10 < *(undefined4 **)(puVar16 + 4)) {
              *puVar10 = (int)(long)(float)(int)*pfVar20;
              puVar10[1] = uStack_134;
              puVar10 = puVar10 + 2;
            }
            else {
              puVar10 = puVar16;
              func_0x0001094c5dd8(puVar16,&plStack_110,&uStack_134);
            }
            *(undefined4 **)(puVar16 + 2) = puVar10;
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 != (uVar11 & 0x7fffffff));
      }
      func_0x0001094a9694(*(undefined8 *)(*(long *)(lVar19 + 0xd0) + 0x50),lVar19 + 0xd8,&lStack_130
                         );
      __ZNSt3__15mutex6unlockEv(lVar19 + 0x1d0);
      plVar8 = (long *)plVar7[3];
      if ((plVar8 != (long *)0x0) &&
         (__ZNSt3__119__shared_weak_count4lockEv(), plStack_108 = plVar8, plVar8 != (long *)0x0)) {
        plStack_110 = (long *)plVar7[2];
        if (plStack_110 != (long *)0x0) {
          if ((char)plStack_110[8] == '\x01') {
            (*(code *)*plStack_110)();
          }
          else if ((char)plStack_110[8] == '\x02') {
            FUN_10a05e614();
          }
        }
        plVar7 = plVar8 + 1;
        do {
          lVar19 = *plVar7;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = lVar19 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar19 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      plStack_110 = &lStack_130;
      func_0x00010a001298(&plStack_110);
      plVar7 = plStack_118;
      plStack_118 = (long *)0x0;
      if (plVar7 == (long *)0x0) {
        return;
      }
      (**(code **)(*plVar7 + 8))();
      return;
    }
  }
  FUN_10a00946c(&UNK_10f63b8ac);
LAB_10ac71580:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10ac71584);
  (*pcVar5)();
}


