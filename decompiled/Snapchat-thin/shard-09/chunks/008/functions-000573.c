/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107283e5c; end: 107283ec3;  */

long FUN_107283e5c(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x000107284784();
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(lVar1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  func_0x0001072847c4(lVar1 + 0x38,param_2 + 0x38);
  return param_1;
}



/* Entry: 107283ec4; end: 107283ec7;  */

undefined8 * FUN_107283ec4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109979a0;
  func_0x000107284804(param_1 + 4);
  return param_1;
}



/* Entry: 107283ec8; end: 107283edb;  */

void FUN_107283ec8(void)

{
  FUN_107283fb4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107283edc; end: 107283fb3;  */

undefined8 * FUN_107283edc(long param_1)

{
  long *plVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined8 auStack_b0 [11];
  undefined1 auStack_58 [24];
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  puVar2 = auStack_b0;
  puVar3 = auStack_b0;
  puVar4 = auStack_b0;
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = *(code **)(param_1 + 0x10);
  plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)*(ulong *)(param_1 + 0x18) >> 1));
  if ((*(ulong *)(param_1 + 0x18) & 1) != 0) {
    pcVar5 = *(code **)(*plVar1 + ((ulong)pcVar5 & 0xffffffff));
  }
  FUN_107283e5c(auStack_b0,param_1 + 0x20);
  puStack_40 = (undefined8 *)0x0;
  func_0x000107285a34();
  *puVar2 = &PTR_FUN_1109979e0;
  FUN_107283e5c(puVar2 + 1,auStack_b0);
  puStack_40 = puVar2;
  (*pcVar5)(plVar1,auStack_58);
  func_0x000107283e00(auStack_58);
  func_0x000107284804();
  func_0x0001072854dc(uStack_38);
  if ((bool)in_ZR) {
    return puVar3;
  }
  ___stack_chk_fail();
  func_0x000107283e00(auStack_58);
  func_0x000107284804();
  func_0x00010728561c();
  *puVar4 = &PTR_FUN_1109979a0;
  func_0x000107284804(puVar4 + 4);
  return puVar4;
}



/* Entry: 107283fb4; end: 107283fdf;  */

undefined8 * FUN_107283fb4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109979a0;
  func_0x000107284804(param_1 + 4);
  return param_1;
}



/* Entry: 107283fe0; end: 107283fe3;  */

undefined8 * FUN_107283fe0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109979e0;
  func_0x000107284804(param_1 + 1);
  return param_1;
}



/* Entry: 107283fe4; end: 107283ff7;  */

void FUN_107283fe4(void)

{
  FUN_1072841f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107283ff8; end: 10728402b;  */

undefined8 FUN_107283ff8(undefined8 param_1)

{
  func_0x000107285a34();
  FUN_10728421c();
  return param_1;
}



/* Entry: 10728402c; end: 10728404f;  */

void FUN_10728402c(long param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001006392cc(param_2,param_1 + 8);
  *param_2 = &PTR_FUN_1109979e0;
  func_0x000107284784(param_2 + 1);
  FUN_107283e34(unaff_x19 + 0x28,unaff_x20 + 0x20);
  func_0x0001072847c4(param_2 + 8,unaff_x20 + 0x38);
  return;
}



/* Entry: 107284050; end: 1072841bb;  */

void FUN_107284050(long param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [32];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  lVar2 = param_1;
  func_0x000107285528(param_1,param_2,param_2);
  uStack_38 = extraout_x8;
  func_0x000107283d3c(auStack_a8,*(undefined8 *)(lVar2 + 0x20));
  FUN_107284284(auStack_b8,param_1 + 0x28);
  iVar1 = (int)param_1 + 0x28;
  FUN_1072842e4();
  if (iVar1 != 0) {
    plVar3 = (long *)(param_1 + 0x28);
    func_0x00010728433c();
    func_0x0001072847c4(auStack_90,param_1 + 0x40);
    FUN_107284384(&uStack_70,auStack_a8);
    puStack_40 = (undefined8 *)0x0;
    puVar4 = (undefined8 *)0x40;
    __Znwm();
    *puVar4 = &PTR_FUN_110997a50;
    func_0x0001072847c4(puVar4 + 1,auStack_90);
    puVar4[6] = uStack_68;
    puVar4[5] = uStack_70;
    puVar4[7] = uStack_60;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    puStack_40 = puVar4;
    (**(code **)(*plVar3 + 0x10))(plVar3,auStack_58);
    func_0x0001006393ec(auStack_58);
    func_0x000107284760(auStack_90);
  }
  func_0x000107270b00(auStack_b8);
  FUN_107283d64();
  func_0x0001072854dc(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001006393ec(auStack_58);
  func_0x000107284760(auStack_90);
  func_0x000107270b00(auStack_b8);
  FUN_107283d64(auStack_a8);
  func_0x00010728561c();
  func_0x00010728569c();
  func_0x000107285670();
  func_0x000107285554();
  return;
}



/* Entry: 1072841bc; end: 1072841e3;  */

void FUN_1072841bc(undefined8 param_1)

{
  func_0x00010728569c();
  func_0x000107285670(param_1,&PTR_DAT_110997ac0);
  func_0x000107285554();
  return;
}



/* Entry: 1072841e4; end: 1072841ef;  */

undefined ** FUN_1072841e4(void)

{
  return &PTR_DAT_110997ac0;
}



/* Entry: 1072841f0; end: 10728421b;  */

undefined8 * FUN_1072841f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109979e0;
  func_0x000107284804(param_1 + 1);
  return param_1;
}



/* Entry: 10728421c; end: 107284283;  */

void FUN_10728421c(undefined8 *param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001006392cc();
  *param_1 = &PTR_FUN_1109979e0;
  func_0x000107284784(param_1 + 1);
  FUN_107283e34(unaff_x19 + 0x28,unaff_x20 + 0x20);
  func_0x0001072847c4(param_1 + 8,unaff_x20 + 0x38);
  return;
}



/* Entry: 107284284; end: 1072842e3;  */

void FUN_107284284(undefined8 *param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  long alStack_50 [4];
  long alStack_30 [2];
  
  plVar1 = alStack_50;
  func_0x00010726fc00(alStack_30);
  if (alStack_30[0] != 0) {
    func_0x00010726fc3c();
    func_0x000107285df4();
    if (!(bool)in_ZR) {
      func_0x00010728588c();
      plVar1 = alStack_30;
      goto LAB_1072842d8;
    }
    func_0x00010726fc88();
  }
  FUN_1072508cc(alStack_30);
  *param_1 = 0;
  param_1[1] = 0;
  alStack_50[0] = 0;
  alStack_50[1] = 0;
LAB_1072842d8:
  FUN_1072508cc(plVar1);
  return;
}



/* Entry: 1072842e4; end: 1072842fb;  */

uint FUN_1072842e4(uint param_1)

{
  FUN_1072842fc();
  return param_1 ^ 1;
}



/* Entry: 1072842fc; end: 107284383;  */

bool FUN_1072842fc(void)

{
  bool bVar1;
  undefined8 uStack_30;
  
  func_0x000107285c30();
  if (uStack_30 == (long *)0x0) {
    bVar1 = true;
  }
  else {
    bVar1 = *uStack_30 == -1;
  }
  func_0x000107285c1c();
  return bVar1;
}



/* Entry: 107284384; end: 1072844bb;  */

undefined8 * FUN_107284384(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puStack_80;
  undefined1 uStack_78;
  undefined8 *puStack_70;
  undefined8 **ppuStack_68;
  undefined8 **ppuStack_60;
  undefined1 uStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar6 = *param_2;
  lVar1 = param_2[1];
  uStack_78 = 0;
  lVar2 = lVar1 - lVar6;
  puStack_80 = param_1;
  if (lVar2 != 0) {
    uVar5 = lVar2 / 0x108;
    if (0xf83e0f83e0f83e < uVar5) {
      FUN_1072844bc();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x107284498);
      (*pcVar3)();
    }
    puVar4 = param_1 + 2;
    FUN_1072844c8();
    *param_1 = puVar4;
    param_1[1] = puVar4;
    param_1[2] = puVar4 + uVar5 * 0x21;
    ppuStack_68 = &puStack_50;
    ppuStack_60 = &puStack_48;
    uStack_58 = 0;
    puStack_70 = param_1 + 2;
    puStack_50 = puVar4;
    for (; puStack_48 = puVar4, lVar6 != lVar1; lVar6 = lVar6 + 0x108) {
      FUN_10728451c(puVar4,lVar6);
      uVar8 = *(undefined8 *)(lVar6 + 0xf8);
      uVar7 = *(undefined8 *)(lVar6 + 0xf0);
      *(undefined4 *)(puVar4 + 0x20) = *(undefined4 *)(lVar6 + 0x100);
      puVar4[0x1f] = uVar8;
      puVar4[0x1e] = uVar7;
      puVar4 = puStack_48 + 0x21;
    }
    uStack_58 = 1;
    FUN_107284580(&puStack_70);
    param_1[1] = puVar4;
  }
  uStack_78 = 1;
  func_0x000107284600(&puStack_80);
  return param_1;
}



/* Entry: 1072844bc; end: 1072844c7;  */

void FUN_1072844bc(void)

{
  func_0x0001072858a4();
  FUN_1072844ec();
  return;
}



/* Entry: 1072844c8; end: 1072844eb;  */

void FUN_1072844c8(void)

{
  FUN_1072844ec();
  return;
}



/* Entry: 1072844ec; end: 10728451b;  */

void FUN_1072844ec(long param_1,ulong param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  if (param_2 < 0xf83e0f83e0f83f) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x108);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001006392cc();
  FUN_10726933c();
  func_0x000104c2fe00(param_1 + 0x70,unaff_x20 + 0x70);
  func_0x000104c2fe00(unaff_x19 + 0xa8,unaff_x20 + 0xa8);
  FUN_107268400(unaff_x19 + 0xe0,unaff_x20 + 0xe0);
  return;
}



/* Entry: 10728451c; end: 10728457f;  */

void FUN_10728451c(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001006392cc();
  FUN_10726933c();
  func_0x000104c2fe00(param_1 + 0x70,unaff_x20 + 0x70);
  func_0x000104c2fe00(unaff_x19 + 0xa8,unaff_x20 + 0xa8);
  FUN_107268400(unaff_x19 + 0xe0,unaff_x20 + 0xe0);
  return;
}



/* Entry: 107284580; end: 1072845af;  */

long FUN_107284580(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_1072845b0(param_1);
  }
  return param_1;
}



/* Entry: 1072845b0; end: 1072845cf;  */

void FUN_1072845b0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x108;
    func_0x000107269e60();
  }
  return;
}



/* Entry: 1072845d0; end: 10728462b;  */

void FUN_1072845d0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x108;
    func_0x000107269e60();
  }
  return;
}



/* Entry: 10728462c; end: 10728462f;  */

undefined8 * FUN_10728462c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110997a50;
  FUN_107284760(param_1 + 1);
  return param_1;
}



/* Entry: 107284630; end: 107284643;  */

void FUN_107284630(void)

{
  FUN_1072846e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107284644; end: 10728467b;  */

undefined8 FUN_107284644(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x40;
  __Znwm(0x40);
  FUN_107284710();
  return uVar1;
}



/* Entry: 10728467c; end: 1072846af;  */

void FUN_10728467c(long param_1,undefined8 *param_2)

{
  long unaff_x20;
  
  func_0x0001006392cc(param_2,param_1 + 8);
  *param_2 = &PTR_FUN_110997a50;
  func_0x0001072847c4(param_2 + 1);
  FUN_107284384(param_2 + 5,unaff_x20 + 0x20);
  return;
}



/* Entry: 1072846b0; end: 1072846d7;  */

void FUN_1072846b0(undefined8 param_1)

{
  func_0x00010728569c();
  func_0x000107285670(param_1,&PTR_DAT_110997ab0);
  func_0x000107285554();
  return;
}



/* Entry: 1072846d8; end: 1072846e3;  */

undefined ** FUN_1072846d8(void)

{
  return &PTR_DAT_110997ab0;
}



/* Entry: 1072846e4; end: 10728470f;  */

undefined8 * FUN_1072846e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110997a50;
  FUN_107284760(param_1 + 1);
  return param_1;
}



/* Entry: 107284710; end: 10728475f;  */

void FUN_107284710(undefined8 *param_1)

{
  long unaff_x20;
  
  func_0x0001006392cc();
  *param_1 = &PTR_FUN_110997a50;
  func_0x0001072847c4(param_1 + 1);
  FUN_107284384(param_1 + 5,unaff_x20 + 0x20);
  return;
}



/* Entry: 107284760; end: 10728485f;  */

long FUN_107284760(void)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  
  func_0x000107285ba8();
  FUN_107283d64();
  lVar1 = unaff_x19;
  func_0x000107285680();
  if ((bool)in_ZR) {
    uVar2 = 0x20;
  }
  else {
    if (lVar1 == 0) {
      return unaff_x19;
    }
    uVar2 = 0x28;
  }
  func_0x0001072855c0(uVar2);
  return unaff_x19;
}



/* Entry: 107284860; end: 107284873;  */

void FUN_107284860(void)

{
  func_0x000107284834();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107284874; end: 1072848ab;  */

undefined8 FUN_107284874(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x38;
  __Znwm(0x38);
  FUN_107284a54();
  return uVar1;
}



/* Entry: 1072848ac; end: 1072848cf;  */

void FUN_1072848ac(long param_1,undefined8 *param_2)

{
  long unaff_x20;
  
  func_0x0001006392cc(param_2,param_1 + 8);
  *param_2 = &PTR_SUB_110997ae0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_2 + 1);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_2 + 4,unaff_x20 + 0x18);
  return;
}



/* Entry: 1072848d0; end: 107284a1f;  */

void FUN_1072848d0(long param_1,long *param_2)

{
  undefined1 uVar1;
  undefined8 extraout_x8;
  undefined8 *unaff_x19;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 uStack_1e8;
  undefined1 auStack_1d8 [96];
  undefined1 uStack_178;
  undefined1 auStack_170 [56];
  undefined1 auStack_138 [136];
  undefined1 auStack_b0 [56];
  undefined1 auStack_78 [56];
  char cStack_40;
  undefined8 uStack_38;
  
  func_0x000107285500();
  uStack_38 = extraout_x8;
  func_0x0001075030f4(auStack_b0,param_2,param_1 + 8);
  uVar1 = cStack_40 == '\x01';
  if ((bool)uVar1) {
    func_0x000104c2fe00(auStack_170,auStack_78);
    FUN_107284aa4(&uStack_220,auStack_170,1);
    uStack_1f8 = uStack_218;
    uStack_200 = uStack_220;
    uStack_1f0 = uStack_210;
    uStack_218 = 0;
    uStack_210 = 0;
    uStack_220 = 0;
    uStack_1e8 = 1;
    auStack_1d8[0] = 0;
    uStack_178 = 0;
    FUN_107284c14(auStack_138,&uStack_200,auStack_1d8);
    (**(code **)(*param_2 + 0x70))(param_2,auStack_b0,auStack_138);
    FUN_107284d48(auStack_138);
    FUN_107284d6c(auStack_1d8);
    FUN_10726ff1c(&uStack_200);
    FUN_10726e078(&uStack_220);
    func_0x000104c2f714(auStack_170);
  }
  else {
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
    unaff_x19[2] = 0;
  }
  func_0x000107284dd4();
  func_0x0001072854dc(uStack_38);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  FUN_107284d48(auStack_138);
  FUN_107284d6c(auStack_1d8);
  FUN_10726ff1c(&uStack_200);
  FUN_10726e078(&uStack_220);
  func_0x000104c2f714(auStack_170);
  func_0x000107284dd4(auStack_b0);
  func_0x00010728561c();
  func_0x00010728569c();
  func_0x000107285670();
  func_0x000107285554();
  return;
}



/* Entry: 107284a20; end: 107284a47;  */

void FUN_107284a20(undefined8 param_1)

{
  func_0x00010728569c();
  func_0x000107285670(param_1,&PTR_DAT_110997b50);
  func_0x000107285554();
  return;
}



/* Entry: 107284a48; end: 107284a53;  */

undefined ** FUN_107284a48(void)

{
  return &PTR_DAT_110997b50;
}



/* Entry: 107284a54; end: 107284aa3;  */

void FUN_107284a54(undefined8 *param_1)

{
  long unaff_x20;
  
  func_0x0001006392cc();
  *param_1 = &PTR_SUB_110997ae0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 1);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_1 + 4,unaff_x20 + 0x18);
  return;
}



/* Entry: 107284aa4; end: 107284ad7;  */

undefined8 * FUN_107284aa4(undefined8 *param_1,long param_2,long param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_107284ad8(param_1,param_2,param_2 + param_3 * 0x38,param_3);
  return param_1;
}



/* Entry: 107284ad8; end: 107284b47;  */

void FUN_107284ad8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    FUN_10726de5c(param_1,param_4);
    FUN_107284b48(param_1,param_2,param_3,param_4);
  }
  uStack_38 = 1;
  func_0x00010726dfe0(&uStack_40);
  return;
}



/* Entry: 107284b48; end: 107284b7b;  */

void FUN_107284b48(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  FUN_107284b7c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 107284b7c; end: 107284b8f;  */

void FUN_107284b7c(void)

{
  FUN_107284b90();
  return;
}



/* Entry: 107284b90; end: 107284c13;  */

long FUN_107284b90(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_60 = param_1;
  lStack_40 = param_4;
  for (; lStack_38 = param_4, param_2 != param_3; param_2 = param_2 + 0x38) {
    func_0x000104c2fe00(param_4,param_2);
    param_4 = lStack_38 + 0x38;
  }
  uStack_48 = 1;
  FUN_10726df70(&uStack_60);
  return param_4;
}



/* Entry: 107284c14; end: 107284c43;  */

long FUN_107284c14(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_107270780();
  FUN_107284c44(lVar1 + 0x20,param_3);
  return param_1;
}



/* Entry: 107284c44; end: 107284c6b;  */

void FUN_107284c44(long param_1)

{
  func_0x000107285760();
  *(undefined1 *)(param_1 + 0x60) = 0;
  FUN_107284c6c();
  return;
}



/* Entry: 107284c6c; end: 107284c7f;  */

void FUN_107284c6c(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_107284c9c();
    *(undefined1 *)(param_1 + 0x60) = 1;
    return;
  }
  return;
}



/* Entry: 107284c80; end: 107284c9b;  */

void FUN_107284c80(long param_1)

{
  FUN_107284c9c();
  *(undefined1 *)(param_1 + 0x60) = 1;
  return;
}



/* Entry: 107284c9c; end: 107284cc7;  */

void FUN_107284c9c(long param_1)

{
  long unaff_x19;
  
  func_0x0001072856b0();
  FUN_107284cc8();
  FUN_107284cf0(param_1 + 0x18,unaff_x19 + 0x18);
  return;
}



/* Entry: 107284cc8; end: 107284cef;  */

void FUN_107284cc8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  if (*(char *)(param_2 + 2) == '\x01') {
    uVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar1;
    *param_2 = 0;
    param_2[1] = 0;
    *(undefined1 *)(param_1 + 2) = 1;
  }
  return;
}



/* Entry: 107284cf0; end: 107284d17;  */

void FUN_107284cf0(long param_1)

{
  func_0x000107285760();
  *(undefined1 *)(param_1 + 0x40) = 0;
  FUN_107284d18();
  return;
}



/* Entry: 107284d18; end: 107284d2b;  */

void FUN_107284d18(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    func_0x000104c32a18();
    *(undefined1 *)(param_1 + 0x40) = 1;
    return;
  }
  return;
}



/* Entry: 107284d2c; end: 107284d47;  */

void FUN_107284d2c(long param_1)

{
  func_0x000104c32a18();
  *(undefined1 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 107284d48; end: 107284d6b;  */

void FUN_107284d48(void)

{
  long unaff_x19;
  
  func_0x000107285ba8();
  FUN_107284d6c();
  if (*(char *)(unaff_x19 + 0x18) == '\x01') {
    FUN_10726e078();
  }
  return;
}



/* Entry: 107284d6c; end: 107284d8b;  */

void FUN_107284d6c(long param_1)

{
  if (*(char *)(param_1 + 0x60) == '\x01') {
    FUN_107284d8c();
  }
  return;
}



/* Entry: 107284d8c; end: 107284db3;  */

void FUN_107284d8c(long param_1)

{
  FUN_107267ed0(param_1 + 0x18);
  if (*(char *)(param_1 + 0x10) == '\x01') {
    func_0x000107266acc();
  }
  return;
}



/* Entry: 107284db4; end: 107284df3;  */

void FUN_107284db4(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    func_0x000107266acc();
  }
  return;
}



/* Entry: 107284df4; end: 107284e73;  */

void FUN_107284df4(void)

{
  func_0x000107285d00();
  func_0x000107285a54();
  return;
}



/* Entry: 107284e74; end: 107284e87;  */

void FUN_107284e74(void)

{
  func_0x000107284e48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107284e88; end: 107284ebf;  */

undefined8 FUN_107284e88(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x58;
  __Znwm(0x58);
  FUN_1072850dc();
  return uVar1;
}



/* Entry: 107284ec0; end: 107284ee3;  */

void FUN_107284ec0(long param_1,undefined8 *param_2)

{
  long unaff_x20;
  
  func_0x0001006392cc(param_2,param_1 + 8);
  *param_2 = &PTR_SUB_110997b70;
  FUN_107281910(param_2 + 1);
  FUN_107282fc8(param_2 + 4,unaff_x20 + 0x18);
  return;
}



/* Entry: 107284ee4; end: 1072850a7;  */

void FUN_107284ee4(long param_1,undefined8 *param_2)

{
  int *piVar1;
  code *pcVar2;
  undefined1 in_ZR;
  int iVar3;
  undefined8 *puVar4;
  int *piVar5;
  undefined8 extraout_x8;
  long lVar6;
  long lVar7;
  int *piVar8;
  undefined1 auStack_130 [16];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 uStack_110;
  char cStack_e8;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_58;
  
  func_0x000107285528();
  uStack_58 = extraout_x8;
  func_0x000107281ab4(auStack_130,param_1 + 8);
  iVar3 = (int)param_1 + 8;
  func_0x000107281b18();
  if (iVar3 != 0) {
    lVar7 = *(long *)(param_1 + 0x50);
    lVar6 = *(long *)(lVar7 + 8);
    piVar1 = (int *)param_2[1];
    for (piVar8 = (int *)*param_2; piVar5 = piVar1, piVar8 != piVar1; piVar8 = piVar8 + 0x42) {
      FUN_10726236c(&uStack_120,piVar8 + 0xc);
      FUN_107262e9c(&uStack_90,param_1 + 0x20);
      if (cStack_e8 == '\x01') {
        puVar4 = &uStack_120;
        func_0x000104c32db4(puVar4,&uStack_90);
        func_0x000104c2f714(&uStack_90);
        func_0x000107285c80();
        piVar5 = piVar8;
        if (((ulong)puVar4 & 1) != 0) break;
      }
      else {
        func_0x000104c2f714();
        func_0x000107285c80();
      }
    }
    in_ZR = piVar5 == (int *)param_2[1];
    if ((bool)in_ZR) {
      FUN_107283a74(lVar7 + 0x38);
    }
    else if ((lVar6 != 0) && ((*(byte *)(lVar7 + 0x1d8) & 1) != 0)) {
      func_0x00010727ac5c(lVar7 + 0x38);
      in_ZR = 0;
      if (*(int *)(lVar7 + 0x128) == 2) {
        func_0x00010727ac5c(lVar7 + 0x38);
        if (*(int *)(lVar7 + 0x128) != 2) goto LAB_107285074;
        func_0x000107285c58(&uStack_120,lVar7 + 0x80);
        in_ZR = *piVar5 == 6;
        if ((bool)in_ZR) {
          func_0x000104c2d3c0();
          func_0x000107285748(*(undefined8 *)(piVar5 + 2),*(undefined8 *)piVar5,&uStack_90);
          *(undefined8 *)(lVar7 + 0x118) = uStack_88;
          *(undefined8 *)(lVar7 + 0x110) = uStack_90;
          if ((*(byte *)(lVar7 + 0x120) & 1) == 0) {
            *(undefined1 *)(lVar7 + 0x120) = 1;
          }
          uStack_118 = *(undefined8 *)(lVar7 + 0x118);
          uStack_120 = *(undefined8 *)(lVar7 + 0x110);
          uStack_110 = *(undefined1 *)(lVar7 + 0x120);
          func_0x00010740e28c(lVar6,&uStack_120,lVar7 + 0x130);
        }
      }
    }
  }
  func_0x000107285a08();
  func_0x0001072854dc(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_107285074:
  func_0x00010563ab98();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10728507c);
  (*pcVar2)();
}



/* Entry: 1072850a8; end: 1072850cf;  */

void FUN_1072850a8(undefined8 param_1)

{
  func_0x00010728569c();
  func_0x000107285670(param_1,&PTR_DAT_110997be0);
  func_0x000107285554();
  return;
}



/* Entry: 1072850d0; end: 1072850db;  */

undefined ** FUN_1072850d0(void)

{
  return &PTR_DAT_110997be0;
}



/* Entry: 1072850dc; end: 10728512b;  */

void FUN_1072850dc(undefined8 *param_1)

{
  long unaff_x20;
  
  func_0x0001006392cc();
  *param_1 = &PTR_SUB_110997b70;
  FUN_107281910(param_1 + 1);
  FUN_107282fc8(param_1 + 4,unaff_x20 + 0x18);
  return;
}



/* Entry: 10728512c; end: 10728515f;  */

void FUN_10728512c(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x000107285680();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  func_0x0001072855c0(uVar1);
  return;
}



/* Entry: 107285160; end: 1072851a7;  */

void FUN_107285160(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0001006392cc();
  func_0x000105302f48();
  FUN_10724cbe8(param_1 + 0x20,unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  *(undefined8 *)(unaff_x19 + 0x50) = *(undefined8 *)(unaff_x20 + 0x50);
  *(undefined8 *)(unaff_x19 + 0x48) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x40) = uVar1;
  return;
}



/* Entry: 1072851a8; end: 1072851d3;  */

undefined8 * FUN_1072851a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110997c00;
  FUN_10727c148(param_1 + 1);
  return param_1;
}



/* Entry: 1072851d4; end: 1072851e7;  */

void FUN_1072851d4(void)

{
  FUN_1072851a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072851e8; end: 10728521b;  */

undefined8 FUN_1072851e8(undefined8 param_1)

{
  func_0x000107285a34();
  FUN_1072852e4();
  return param_1;
}



/* Entry: 10728521c; end: 10728523f;  */

void FUN_10728521c(long param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0001006392cc(param_2,param_1 + 8);
  *param_2 = &PTR_FUN_110997c00;
  FUN_10724cbe8(param_2 + 1);
  FUN_10724cbe8(param_2 + 5,unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  *(undefined8 *)(unaff_x19 + 0x58) = *(undefined8 *)(unaff_x20 + 0x50);
  *(undefined8 *)(unaff_x19 + 0x50) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x48) = uVar1;
  return;
}



/* Entry: 107285240; end: 1072852af;  */

void FUN_107285240(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  
  func_0x000104c003e8(param_1 + 0x28);
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x000104c003e8(param_1 + 8);
  }
  if ((*(byte *)(*(long *)**(undefined8 **)(param_1 + 0x58) + 0xb7) & 1) == 0) {
    puVar1 = (undefined8 *)(*(undefined8 **)(param_1 + 0x48))[1];
    for (puVar3 = (undefined8 *)**(undefined8 **)(param_1 + 0x48); puVar3 != puVar1;
        puVar3 = puVar3 + 2) {
      func_0x0001072856d8(*puVar3);
    }
  }
  lVar2 = *(long *)(param_1 + 0x50);
  if (*(char *)(lVar2 + 0x1a0) == '\x01') {
    FUN_107283000();
    *(undefined1 *)(lVar2 + 0x1a0) = 0;
  }
  return;
}



/* Entry: 1072852b0; end: 1072852d7;  */

void FUN_1072852b0(undefined8 param_1)

{
  func_0x00010728569c();
  func_0x000107285670(param_1,&PTR_DAT_110997c60);
  func_0x000107285554();
  return;
}



/* Entry: 1072852d8; end: 1072852e3;  */

undefined ** FUN_1072852d8(void)

{
  return &PTR_DAT_110997c60;
}



/* Entry: 1072852e4; end: 107285343;  */

void FUN_1072852e4(undefined8 *param_1)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0001006392cc();
  *param_1 = &PTR_FUN_110997c00;
  FUN_10724cbe8(param_1 + 1);
  FUN_10724cbe8(param_1 + 5,unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  *(undefined8 *)(unaff_x19 + 0x58) = *(undefined8 *)(unaff_x20 + 0x50);
  *(undefined8 *)(unaff_x19 + 0x50) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x48) = uVar1;
  return;
}



/* Entry: 107285344; end: 10728534b;  */

void FUN_107285344(void)

{
  return;
}



/* Entry: 10728534c; end: 107285377;  */

void FUN_10728534c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_1;
  func_0x000107285708();
  uVar2 = param_1[1];
  *puVar1 = &PTR_FUN_110997c80;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 107285378; end: 10728539b;  */

void FUN_107285378(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110997c80;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10728539c; end: 1072853c3;  */

void FUN_10728539c(undefined8 param_1)

{
  func_0x00010728569c();
  func_0x000107285670(param_1,&PTR_DAT_110997ce0);
  func_0x000107285554();
  return;
}



/* Entry: 1072853c4; end: 1072853d7;  */

undefined ** FUN_1072853c4(void)

{
  return &PTR_DAT_110997ce0;
}



/* Entry: 1072853d8; end: 107285403;  */

void FUN_1072853d8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_1;
  func_0x000107285708();
  uVar2 = param_1[1];
  *puVar1 = &PTR_DAT_110997d00;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 107285404; end: 107285423;  */

void FUN_107285404(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_110997d00;
  param_2[1] = uVar1;
  return;
}



/* Entry: 107285424; end: 10728549b;  */

void FUN_107285424(long param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  
  if ((*(char *)(param_2 + 0x80) == '\x01') && ((*(byte *)(param_2 + 0x60) & 1) != 0)) {
    plVar2 = *(long **)(param_1 + 8);
    puVar1 = (undefined8 *)(param_2 + 0x78);
    FUN_10727ac44();
                    /* WARNING: Could not recover jumptable at 0x00010728546c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x90))(plVar2,*puVar1,1);
    return;
  }
  return;
}



/* Entry: 10728549c; end: 1072854a7;  */

undefined ** FUN_10728549c(void)

{
  return &PTR_DAT_110997d70;
}



/* Entry: 1072854a8; end: 1072854db;  */

void FUN_1072854a8(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x000107285680();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  func_0x0001072855c0(uVar1);
  return;
}



/* Entry: 1072854dc; end: 107285e33;  */

void FUN_1072854dc(void)

{
  return;
}



/* Entry: 107285e34; end: 107285e5b;  */

undefined8 FUN_107285e34(undefined8 param_1)

{
  FUN_107285e5c(param_1,0);
  return param_1;
}



/* Entry: 107285e5c; end: 107285e73;  */

void FUN_107285e5c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107285e74; end: 107286687;  */

undefined8 FUN_107285e74(void)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined1 auStack_48 [24];
  undefined *puStack_30;
  undefined8 uStack_28;
  
  if ((bRam00000001136ca1a0 & 1) == 0) {
    iVar2 = 0x136ca1a0;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      uRam00000001136ca1a8 = 0;
      uRam00000001136ca1b0 = 0;
      uRam00000001136ca1b8 = 0;
      FUN_107286688(&DAT_10f2ff9dd,0x22);
      FUN_107286688(&UNK_10f406e85,0x18);
      FUN_107286688(&UNK_10f406e9e,0x11);
      FUN_107286688(&UNK_10f406eb0,0x18);
      FUN_107286688(&UNK_10f406ec9,0x28);
      func_0x000107286b44(&UNK_10f406ef2);
      puVar1 = PTR_DAT_1131ad040;
      puVar3 = PTR_DAT_1131ad040;
      _strlen(PTR_DAT_1131ad040);
      FUN_1072866bc(puVar1,puVar3);
      FUN_1072866bc(&UNK_10f406f1b,0x1c);
      func_0x000107286b94(&UNK_10f406f38);
      func_0x000107286be0(&UNK_10f406f53);
      func_0x000107286b8c(&UNK_10f406f75);
      FUN_1072866ec(&UNK_10f406f99,0x27);
      FUN_1072866ec(&UNK_10f406fc1,0x2c);
      func_0x000107286b64(&UNK_10f406fee);
      func_0x000107286bbc(&UNK_10f40701e);
      FUN_1072866bc(&UNK_10f407050,0x15);
      func_0x000107286b5c(&UNK_10f407066);
      FUN_1072866bc(&UNK_10f407097,0x37);
      func_0x000107286b2c(&UNK_10f4070cf);
      func_0x000107286b54(&UNK_10f407102);
      func_0x000107286b4c(&UNK_10f407127);
      func_0x000107286b94(&UNK_10f40714d);
      FUN_107286720(&UNK_10f407168,0x2b);
      func_0x000107286b54(&UNK_10f40719b);
      FUN_1072866bc(&UNK_10f4071c0,0xe);
      FUN_1072866ec(&UNK_10f4071cf,0x26);
      FUN_1072866bc(&UNK_10f4071f6,0x35);
      func_0x000107286b34(&UNK_10f40722c);
      func_0x000107286be0(&UNK_10f40725a);
      func_0x000107286b84(&UNK_10f40727c);
      func_0x000107286bcc(&UNK_10f4072ab);
      FUN_107286720(&DAT_10f4072e4,0x1c);
      FUN_1072866ec(&UNK_10f407301,0x2e);
      func_0x000107286bb4(&UNK_10f407330);
      FUN_1072866ec(&UNK_10f407355,0x1d);
      FUN_1072866bc(&UNK_10f407373,0x3e);
      func_0x000107286b54(&UNK_10f407102);
      func_0x000107286b7c(&UNK_10f4073b2);
      func_0x000107286be0(&UNK_10f4073da);
      func_0x000107286b2c(&UNK_10f4073fc);
      FUN_1072866ec(&UNK_10f40742f,0x1f);
      func_0x000107286b2c(&UNK_10f40744f);
      func_0x000107286b94(&DAT_10f3c45e5);
      func_0x000107286bb4(&UNK_10f407482);
      func_0x000107286ba4(&UNK_10f4074a7);
      FUN_1072866bc(&UNK_10f4074db,0x26);
      func_0x000107286b4c(&UNK_10f407502);
      FUN_1072866ec(&UNK_10f407528,0x2b);
      func_0x000107286b7c(&UNK_10f407554);
      func_0x000107286b34(&UNK_10f40757c);
      func_0x000107286b44(&UNK_10f4075aa);
      FUN_1072866bc(&UNK_10f4075d3,0x1e);
      FUN_1072866bc(&UNK_10f4075f2,0x35);
      func_0x000107286bbc(&UNK_10f407628);
      func_0x000107286b84(&UNK_10f40765a);
      func_0x000107286b5c(&UNK_10f407689);
      func_0x000107286bcc(&UNK_10f4076ba);
      func_0x000107286b84(&UNK_10f4076f3);
      func_0x000107286b5c(&UNK_10f407722);
      func_0x000107286bb4(&UNK_10f407753);
      func_0x000107286bc4(&UNK_10f407778);
      func_0x000107286b3c(&UNK_10f4077af);
      FUN_107286a04(&DAT_10f4077db,0x1c);
      func_0x000107286bc4(&UNK_10f4077f8);
      func_0x000107286b5c(&UNK_10f40782f);
      func_0x000107286b24(&UNK_10f407860);
      func_0x000107286b64(&UNK_10f40788d);
      func_0x000107286bac(&UNK_10f4078bd);
      func_0x000107286b64(&UNK_10f4078f2);
      func_0x000107286b24(&UNK_10f407922);
      func_0x000107286b24(&UNK_10f40794f);
      func_0x000107286b8c(&UNK_10f40797c);
      func_0x000107286b5c(&UNK_10f4079a0);
      func_0x000107286b3c(&UNK_10f4079d1);
      func_0x000107286b64(&UNK_10f4079fd);
      func_0x000107286b24(&UNK_10f407a2d);
      func_0x000107286bcc(&UNK_10f407a5a);
      func_0x000107286b8c(&UNK_10f407a93);
      FUN_1072866ec(&UNK_10f407ab7,0x29);
      FUN_1072866ec(&UNK_10f407ae1,0x22);
      FUN_1072866bc(&UNK_10f407b04,0x3a);
      puStack_30 = &UNK_10f407b3f;
      uStack_28 = 0x25;
      func_0x000100060b18(auStack_48,&puStack_30);
      func_0x000107286af8();
      func_0x000107286b1c();
      func_0x000107286b3c(&UNK_10f407b65);
      func_0x000107286b34(&UNK_10f407b91);
      func_0x000107286b24(&UNK_10f407bbf);
      FUN_107286a04(&UNK_10f407bec,0x20);
      func_0x000107286b64(&UNK_10f407c0d);
      func_0x000107286b8c(&UNK_10f407c3d);
      func_0x000107286b4c(&UNK_10f407c61);
      func_0x000107286b3c(&UNK_10f407c87);
      func_0x000107286b5c(&UNK_10f407cb3);
      FUN_1072866bc(&UNK_10f407ce4,0x23);
      func_0x000107286b24(&UNK_10f407d08);
      func_0x000107286b2c(&UNK_10f407d35);
      func_0x000107286b24(&UNK_10f407d68);
      func_0x000107286bbc(&UNK_10f407d95);
      func_0x000107286b44(&UNK_10f407dc7);
      func_0x000107286b2c(&UNK_10f407df0);
      func_0x000107286b2c(&UNK_10f407e23);
      func_0x000107286b2c(&UNK_10f407e56);
      func_0x000107286b24(&UNK_10f407e89);
      func_0x000107286b44(&UNK_10f407eb6);
      func_0x000107286b24(&UNK_10f407edf);
      func_0x000107286b4c(&UNK_10f407f0c);
      func_0x000107286b7c(&DAT_10f2dda2c);
      func_0x000107286ba4(&UNK_10f407f32);
      func_0x000107286b7c(&UNK_10f407f66);
      FUN_107286720(&UNK_10f407f8e,0x22);
      func_0x000107286b54(&UNK_10f407fb1);
      func_0x000107286b3c(&UNK_10f407fd6);
      FUN_107286720(&UNK_10f408002,0x21);
      func_0x000107286b6c(&UNK_10f408024);
      FUN_1072866bc(&UNK_10f40804e,0x23);
      func_0x000107286b54(&UNK_10f408072);
      func_0x000107286b84(&UNK_10f408097);
      func_0x000107286bac(&UNK_10f4080c6);
      FUN_1072866bc(&UNK_10f4080fb,0x1e);
      func_0x000107286b34(&UNK_10f40811a);
      func_0x000107286b34(&UNK_10f408148);
      func_0x000107286b24(&UNK_10f408176);
      FUN_1072866bc(&UNK_10f4081a3,0x2a);
      FUN_1072866bc(&UNK_10f4081ce,0x37);
      func_0x000107286b6c(&UNK_10f408206);
      func_0x000107286b54(&UNK_10f408230);
      func_0x000107286bac(&UNK_10f408255);
      func_0x000107286b3c(&UNK_10f40828a);
      func_0x000107286bc4(&UNK_10f4082b6);
      func_0x000107286b6c(&UNK_10f4082ed);
      FUN_1072866ec(&UNK_10f408317,0x20);
      func_0x000107286b2c(&UNK_10f408338);
      FUN_1072866bc(&UNK_10f40836b,0x26);
      func_0x000107286b34(&UNK_10f408392);
      func_0x000107286b44(&UNK_10f4083c0);
      func_0x000107286b7c(&UNK_10f4083e9);
      func_0x000107286b4c(&UNK_10f408411);
      func_0x000107286b6c(&UNK_10f408437);
      func_0x000107286ba4(&UNK_10f408461);
      func_0x000107286b2c(&UNK_10f408495);
      func_0x000107286b6c(&UNK_10f4084c8);
      FUN_1072866bc(&UNK_10f4084f2,0x2a);
      func_0x000107286b64(&UNK_10f40851d);
      func_0x000107286b4c(&UNK_10f40854d);
      func_0x000107286b44(&UNK_10f408573);
      ___cxa_guard_release(0x1136ca1a0);
    }
  }
  return 0x1136ca1a8;
}



/* Entry: 107286688; end: 1072866bb;  */

void FUN_107286688(void)

{
  FUN_107286ae8();
  func_0x000107286af8();
  func_0x000107286b1c();
  return;
}



/* Entry: 1072866bc; end: 1072866eb;  */

void FUN_1072866bc(void)

{
  FUN_107286ae8();
  func_0x000107286af8();
  func_0x000107286b1c();
  return;
}



/* Entry: 1072866ec; end: 10728671f;  */

void FUN_1072866ec(void)

{
  FUN_107286ae8();
  func_0x000107286af8();
  func_0x000107286b1c();
  return;
}



/* Entry: 107286720; end: 107286753;  */

void FUN_107286720(void)

{
  FUN_107286ae8();
  func_0x000107286af8();
  func_0x000107286b1c();
  return;
}



/* Entry: 107286754; end: 1072868cf;  */

undefined8 * FUN_107286754(undefined8 param_1,undefined8 *param_2,undefined4 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_70;
  undefined8 **ppuStack_68;
  undefined8 **ppuStack_60;
  undefined1 uStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  if (puRam00000001136ca1b0 < puRam00000001136ca1b8) {
    func_0x000107286bd4();
    puVar6 = puRam00000001136ca1b0 + 4;
    puVar5 = puRam00000001136ca1b0;
    puVar2 = puRam00000001136ca1a8;
  }
  else {
    lVar10 = (long)puRam00000001136ca1b0 - (long)puRam00000001136ca1a8;
    uVar1 = (lVar10 >> 5) + 1;
    if (uVar1 >> 0x3b != 0) {
      puVar6 = puRam00000001136ca1b0;
      FUN_10728692c();
      uVar12 = param_2[1];
      uVar11 = *param_2;
      uVar7 = param_2[2];
      param_2[1] = 0;
      param_2[2] = 0;
      *param_2 = 0;
      uVar3 = *param_3;
      puVar6[2] = uVar7;
      puVar6[1] = uVar12;
      *puVar6 = uVar11;
      uStack_a8 = 0;
      uStack_a0 = 0;
      uStack_b0 = 0;
      *(undefined4 *)(puVar6 + 3) = uVar3;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_b0);
      return puVar6;
    }
    uVar8 = (long)puRam00000001136ca1b8 - (long)puRam00000001136ca1a8 >> 4;
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    if (0x7fffffffffffffdf < (ulong)((long)puRam00000001136ca1b8 - (long)puRam00000001136ca1a8)) {
      uVar8 = 0x7ffffffffffffff;
    }
    if (uVar8 == 0) {
      lVar9 = 0;
      uVar8 = 0;
    }
    else {
      lVar9 = 0x1136ca1b8;
      FUN_107286940();
    }
    lVar10 = lVar9 + lVar10;
    func_0x000107286bd4(lVar10);
    puVar5 = puRam00000001136ca1b0;
    puVar4 = puRam00000001136ca1a8;
    puVar2 = (undefined8 *)((long)puRam00000001136ca1a8 + (lVar10 - (long)puRam00000001136ca1b0));
    ppuStack_68 = &puStack_50;
    uStack_70 = 0x1136ca1b8;
    ppuStack_60 = &puStack_48;
    puStack_48 = puVar2;
    for (puVar6 = puRam00000001136ca1a8; puVar6 != puVar5; puVar6 = puVar6 + 4) {
      uVar11 = puVar6[1];
      uVar7 = *puVar6;
      puStack_48[2] = puVar6[2];
      puStack_48[1] = uVar11;
      *puStack_48 = uVar7;
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = 0;
      *(undefined4 *)(puStack_48 + 3) = *(undefined4 *)(puVar6 + 3);
      puStack_48 = puStack_48 + 4;
    }
    uStack_58 = 1;
    puStack_50 = puVar2;
    for (; puVar4 != puVar5; puVar4 = puVar4 + 4) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    }
    puVar6 = (undefined8 *)(lVar10 + 0x20);
    puVar4 = (undefined8 *)(lVar9 + uVar8 * 0x20);
    FUN_107286980(&uStack_70);
    puVar5 = puRam00000001136ca1a8;
    puRam00000001136ca1b8 = puVar4;
    if (puRam00000001136ca1a8 != (undefined8 *)0x0) {
      puRam00000001136ca1a8 = puVar2;
      puRam00000001136ca1b0 = puVar6;
      __ZdlPv();
      puVar2 = puRam00000001136ca1a8;
    }
  }
  puRam00000001136ca1a8 = puVar2;
  puRam00000001136ca1b0 = puVar6;
  return puVar5;
}



/* Entry: 1072868d0; end: 10728692b;  */

undefined8 * FUN_1072868d0(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uVar4 = param_2[1];
  uVar3 = *param_2;
  uVar2 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar1 = *param_3;
  param_1[2] = uVar2;
  param_1[1] = uVar4;
  *param_1 = uVar3;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  *(undefined4 *)(param_1 + 3) = uVar1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_40);
  return param_1;
}



/* Entry: 10728692c; end: 10728693f;  */

void FUN_10728692c(void)

{
  func_0x000104bd47e8(&UNK_10f407194);
  FUN_107286964();
  return;
}



/* Entry: 107286940; end: 107286963;  */

void FUN_107286940(void)

{
  FUN_107286964();
  return;
}



/* Entry: 107286964; end: 10728697f;  */

long FUN_107286964(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 >> 0x3b == 0) {
    lVar1 = param_2 << 5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_1072869b4(param_1);
  }
  return param_1;
}


