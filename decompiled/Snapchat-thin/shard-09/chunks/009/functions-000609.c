/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1072f70e4; end: 1072f710f;  */

void FUN_1072f70e4(undefined8 *param_1)

{
  long unaff_x19;
  undefined8 uVar1;
  
  func_0x0001072f9d98();
  *param_1 = &PTR_FUN_11099dab8;
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  param_1[2] = *(undefined8 *)(unaff_x19 + 0x10);
  param_1[1] = uVar1;
  return;
}



/* Entry: 1072f7110; end: 1072f7133;  */

void FUN_1072f7110(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_11099dab8;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 1072f7134; end: 1072f715b;  */

void FUN_1072f7134(undefined8 param_1)

{
  func_0x0001072f9c08();
  func_0x0001072f9bac(param_1,&PTR_DAT_11099db18);
  func_0x0001072f9ad4();
  return;
}



/* Entry: 1072f715c; end: 1072f7167;  */

undefined ** FUN_1072f715c(void)

{
  return &PTR_DAT_11099db18;
}



/* Entry: 1072f7168; end: 1072f71ab;  */

void FUN_1072f7168(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_1;
  FUN_1072f71ac(auStack_38,param_1[1]);
  func_0x0001072f3c4c(uVar1,auStack_38);
  func_0x00010729d51c(auStack_38);
  return;
}



/* Entry: 1072f71ac; end: 1072f71cb;  */

long * FUN_1072f71ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 in_ZR;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *extraout_x8;
  undefined8 extraout_x8_00;
  long *extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined1 auStack_150 [88];
  undefined8 uStack_f8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long alStack_90 [11];
  undefined8 uStack_38;
  
  plVar3 = *(long **)(param_1 + 0x18);
  if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001072f71bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x30))();
    return plVar3;
  }
  func_0x000104bfeb48();
  func_0x0001072f9a90();
  uStack_a0 = param_2;
  uStack_98 = param_3;
  uStack_38 = extraout_x8_00;
  FUN_1072f72fc(alStack_90,param_4);
  puVar6 = &uStack_a0;
  plVar7 = alStack_90;
  FUN_1072f7254(&uStack_a8,plVar3,puVar6,plVar7);
  *extraout_x8 = uStack_a8;
  plVar3 = alStack_90;
  func_0x0001072f7944();
  func_0x0001072f9a64(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    plVar4 = alStack_90;
    func_0x0001072f7944();
    func_0x0001072f9b0c();
    plVar5 = plVar4;
    func_0x0001072f9a90();
    uStack_f8 = extraout_x8_02;
    func_0x0001072f9c54();
    uVar1 = *puVar6;
    uVar2 = puVar6[1];
    FUN_1072f72fc(auStack_150,plVar7);
    plVar3 = plVar5;
    FUN_1072f7340(plVar5,plVar4,uVar1,uVar2,auStack_150);
    *extraout_x8_01 = (long)plVar5;
    func_0x0001072f9c30();
    func_0x0001072f9a64(uStack_f8);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x0001072f9c30();
      __ZdlPv(plVar5);
      func_0x0001072f9b20();
      func_0x0001072f9ce0();
      func_0x0001072f7904();
      func_0x0001072f9c38();
      func_0x0001072f4334(plVar3 + 3,plVar4 + 7);
      return plVar5;
    }
  }
  return plVar3;
}



/* Entry: 1072f71cc; end: 1072f7253;  */

undefined1 *
FUN_1072f71cc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 in_ZR;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined1 auStack_140 [88];
  undefined8 uStack_e8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [88];
  undefined8 uStack_28;
  
  func_0x0001072f9a90();
  uStack_90 = param_3;
  uStack_88 = param_4;
  uStack_28 = extraout_x8;
  FUN_1072f72fc(auStack_80,param_5);
  puVar6 = &uStack_90;
  puVar7 = auStack_80;
  FUN_1072f7254(&uStack_98,param_2,puVar6,puVar7);
  *param_1 = uStack_98;
  puVar3 = auStack_80;
  func_0x0001072f7944();
  func_0x0001072f9a64(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    puVar4 = auStack_80;
    func_0x0001072f7944();
    func_0x0001072f9b0c();
    puVar5 = puVar4;
    func_0x0001072f9a90();
    uStack_e8 = extraout_x8_01;
    func_0x0001072f9c54();
    uVar1 = *puVar6;
    uVar2 = puVar6[1];
    FUN_1072f72fc(auStack_140,puVar7);
    puVar3 = puVar5;
    FUN_1072f7340(puVar5,puVar4,uVar1,uVar2,auStack_140);
    *extraout_x8_00 = (long)puVar5;
    func_0x0001072f9c30();
    func_0x0001072f9a64(uStack_e8);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x0001072f9c30();
      __ZdlPv(puVar5);
      func_0x0001072f9b20();
      func_0x0001072f9ce0();
      func_0x0001072f7904();
      func_0x0001072f9c38();
      func_0x0001072f4334(puVar3 + 0x18,puVar4 + 0x38);
      return puVar5;
    }
  }
  return puVar3;
}



/* Entry: 1072f7254; end: 1072f72fb;  */

long FUN_1072f7254(long *param_1,long param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 in_ZR;
  long lVar3;
  long lVar4;
  undefined8 extraout_x8;
  undefined1 auStack_a0 [88];
  undefined8 uStack_48;
  
  lVar3 = param_2;
  func_0x0001072f9a90();
  uStack_48 = extraout_x8;
  func_0x0001072f9c54();
  uVar1 = *param_3;
  uVar2 = param_3[1];
  FUN_1072f72fc(auStack_a0,param_4);
  lVar4 = lVar3;
  FUN_1072f7340(lVar3,param_2,uVar1,uVar2,auStack_a0);
  *param_1 = lVar3;
  func_0x0001072f9c30();
  func_0x0001072f9a64(uStack_48);
  if ((bool)in_ZR) {
    return lVar4;
  }
  ___stack_chk_fail();
  func_0x0001072f9c30();
  __ZdlPv(lVar3);
  func_0x0001072f9b20();
  func_0x0001072f9ce0();
  func_0x0001072f7904();
  func_0x0001072f9c38();
  func_0x0001072f4334(lVar4 + 0x18,param_2 + 0x38);
  return lVar3;
}



/* Entry: 1072f72fc; end: 1072f733f;  */

void FUN_1072f72fc(void)

{
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001072f9ce0();
  func_0x0001072f7904();
  func_0x0001072f9c38();
  func_0x0001072f4334(unaff_x20 + 0x18,unaff_x21 + 0x38);
  return;
}



/* Entry: 1072f7340; end: 1072f7377;  */

undefined8 *
FUN_1072f7340(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  *param_1 = &PTR_FUN_11099db38;
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[3] = param_4;
  FUN_1072f72fc(param_1 + 4,param_5);
  return param_1;
}



/* Entry: 1072f7378; end: 1072f737b;  */

undefined8 * FUN_1072f7378(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099db38;
  func_0x0001072f7944(param_1 + 4);
  return param_1;
}



/* Entry: 1072f737c; end: 1072f738f;  */

void FUN_1072f737c(void)

{
  FUN_1072f7394();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072f7390; end: 1072f7393;  */

undefined1 * FUN_1072f7390(long param_1)

{
  long *plVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long extraout_x8;
  undefined8 extraout_x9;
  code *pcVar4;
  undefined1 auStack_a0 [88];
  undefined1 auStack_48 [32];
  undefined8 uStack_28;
  
  func_0x0001072f9da4();
  pcVar4 = *(code **)(param_1 + 0x10);
  plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)*(ulong *)(param_1 + 0x18) >> 1));
  if ((*(ulong *)(param_1 + 0x18) & 1) != 0) {
    pcVar4 = *(code **)(*plVar1 + ((ulong)pcVar4 & 0xffffffff));
  }
  uStack_28 = extraout_x9;
  FUN_1072f72fc(auStack_a0,extraout_x8 + 0x20);
  FUN_1072f7460(auStack_48,auStack_a0);
  (*pcVar4)(plVar1,auStack_48);
  puVar2 = auStack_48;
  func_0x000107283e00();
  func_0x0001072f9c30();
  func_0x0001072f9a64(uStack_28);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar3 = auStack_48;
  func_0x000107283e00();
  func_0x0001072f9c30();
  func_0x0001072f9b0c();
  func_0x0001072f9ce0();
  *(undefined8 *)(puVar3 + 0x18) = 0;
  func_0x0001072f9c28();
  FUN_1072f74a0();
  *(undefined1 **)(puVar2 + 0x18) = puVar3;
  return puVar2;
}



/* Entry: 1072f7394; end: 1072f73bf;  */

undefined8 * FUN_1072f7394(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099db38;
  func_0x0001072f7944(param_1 + 4);
  return param_1;
}



/* Entry: 1072f73c0; end: 1072f745f;  */

undefined1 * FUN_1072f73c0(long param_1)

{
  long *plVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long extraout_x8;
  undefined8 extraout_x9;
  code *pcVar4;
  undefined1 auStack_a0 [88];
  undefined1 auStack_48 [32];
  undefined8 uStack_28;
  
  func_0x0001072f9da4();
  pcVar4 = *(code **)(param_1 + 0x10);
  plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)*(ulong *)(param_1 + 0x18) >> 1));
  if ((*(ulong *)(param_1 + 0x18) & 1) != 0) {
    pcVar4 = *(code **)(*plVar1 + ((ulong)pcVar4 & 0xffffffff));
  }
  uStack_28 = extraout_x9;
  FUN_1072f72fc(auStack_a0,extraout_x8 + 0x20);
  FUN_1072f7460(auStack_48,auStack_a0);
  (*pcVar4)(plVar1,auStack_48);
  puVar2 = auStack_48;
  func_0x000107283e00();
  func_0x0001072f9c30();
  func_0x0001072f9a64(uStack_28);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar3 = auStack_48;
  func_0x000107283e00();
  func_0x0001072f9c30();
  func_0x0001072f9b0c();
  func_0x0001072f9ce0();
  *(undefined8 *)(puVar3 + 0x18) = 0;
  func_0x0001072f9c28();
  FUN_1072f74a0();
  *(undefined1 **)(puVar2 + 0x18) = puVar3;
  return puVar2;
}



/* Entry: 1072f7460; end: 1072f749f;  */

void FUN_1072f7460(long param_1)

{
  long unaff_x19;
  
  func_0x0001072f9ce0();
  *(undefined8 *)(param_1 + 0x18) = 0;
  func_0x0001072f9c28();
  FUN_1072f74a0();
  *(long *)(unaff_x19 + 0x18) = param_1;
  return;
}



/* Entry: 1072f74a0; end: 1072f74bf;  */

void FUN_1072f74a0(void)

{
  func_0x0001072f9bf4();
  FUN_1072f72fc();
  return;
}



/* Entry: 1072f74c0; end: 1072f74c3;  */

void FUN_1072f74c0(void)

{
  func_0x0001072f9bf4();
  func_0x0001072f7944();
  return;
}



/* Entry: 1072f74c4; end: 1072f74d7;  */

void FUN_1072f74c4(void)

{
  FUN_1072f756c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072f74d8; end: 1072f750b;  */

undefined8 FUN_1072f74d8(undefined8 param_1)

{
  func_0x0001072f9c28();
  func_0x0001072f758c();
  return param_1;
}



/* Entry: 1072f750c; end: 1072f7537;  */

void FUN_1072f750c(long param_1,undefined8 param_2)

{
  func_0x0001072f9bf4(param_2,param_1 + 8);
  FUN_1072f75ac();
  return;
}



/* Entry: 1072f7538; end: 1072f755f;  */

void FUN_1072f7538(undefined8 param_1)

{
  func_0x0001072f9c08();
  func_0x0001072f9bac(param_1,&PTR_DAT_11099dc58);
  func_0x0001072f9ad4();
  return;
}



/* Entry: 1072f7560; end: 1072f756b;  */

undefined ** FUN_1072f7560(void)

{
  return &PTR_DAT_11099dc58;
}



/* Entry: 1072f756c; end: 1072f75ab;  */

void FUN_1072f756c(void)

{
  func_0x0001072f9bf4();
  func_0x0001072f7944();
  return;
}



/* Entry: 1072f75ac; end: 1072f75f7;  */

void FUN_1072f75ac(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072f9b94();
  func_0x0001072f7904();
  FUN_107283e34(param_1 + 0x20,unaff_x20 + 0x20);
  func_0x0001072f4334(unaff_x19 + 0x38,unaff_x20 + 0x38);
  return;
}



/* Entry: 1072f75f8; end: 1072f770b;  */

undefined1 * FUN_1072f75f8(long param_1)

{
  undefined1 in_ZR;
  int iVar1;
  long *plVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 extraout_x8;
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [32];
  undefined8 uStack_38;
  
  func_0x0001072f9a90();
  uStack_38 = extraout_x8;
  FUN_1072f71ac(auStack_a8);
  FUN_107284284(auStack_b8,param_1 + 0x20);
  iVar1 = (int)param_1 + 0x20;
  FUN_1072842e4();
  if (iVar1 != 0) {
    plVar2 = (long *)(param_1 + 0x20);
    func_0x00010728433c();
    func_0x0001072f4334(auStack_90,param_1 + 0x38);
    FUN_1072f40f4(auStack_70,auStack_a8);
    FUN_1072f770c(auStack_58,auStack_90);
    (**(code **)(*plVar2 + 0x10))(plVar2,auStack_58);
    func_0x0001072f9cb0();
    FUN_1072f78dc(auStack_90);
  }
  func_0x0001072f9ca8();
  puVar3 = auStack_a8;
  func_0x00010729d51c();
  func_0x0001072f9a64(uStack_38);
  if ((bool)in_ZR) {
    return puVar3;
  }
  ___stack_chk_fail();
  func_0x0001072f9cb0();
  FUN_1072f78dc(auStack_90);
  func_0x0001072f9ca8();
  puVar4 = auStack_a8;
  func_0x00010729d51c();
  func_0x0001072f9b0c();
  func_0x0001072f9ce0();
  *(undefined8 *)(puVar4 + 0x18) = 0;
  uVar5 = 0x40;
  __Znwm();
  FUN_1072f7750();
  *(undefined8 *)(puVar3 + 0x18) = uVar5;
  return puVar3;
}



/* Entry: 1072f770c; end: 1072f774f;  */

void FUN_1072f770c(long param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x0001072f9ce0();
  *(undefined8 *)(param_1 + 0x18) = 0;
  uVar1 = 0x40;
  __Znwm();
  FUN_1072f7750();
  *(undefined8 *)(unaff_x19 + 0x18) = uVar1;
  return;
}



/* Entry: 1072f7750; end: 1072f776f;  */

void FUN_1072f7750(void)

{
  func_0x0001072f9be0();
  FUN_1072f7820();
  return;
}



/* Entry: 1072f7770; end: 1072f7773;  */

void FUN_1072f7770(void)

{
  func_0x0001072f9be0();
  FUN_1072f78dc();
  return;
}



/* Entry: 1072f7774; end: 1072f7787;  */

void FUN_1072f7774(void)

{
  func_0x0001072f785c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072f7788; end: 1072f77bf;  */

undefined8 FUN_1072f7788(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x40;
  __Znwm(0x40);
  func_0x0001072f787c();
  return uVar1;
}



/* Entry: 1072f77c0; end: 1072f77eb;  */

void FUN_1072f77c0(long param_1,undefined8 param_2)

{
  func_0x0001072f9be0(param_2,param_1 + 8);
  FUN_1072f789c();
  return;
}



/* Entry: 1072f77ec; end: 1072f7813;  */

void FUN_1072f77ec(undefined8 param_1)

{
  func_0x0001072f9c08();
  func_0x0001072f9bac(param_1,&PTR_DAT_11099dc48);
  func_0x0001072f9ad4();
  return;
}



/* Entry: 1072f7814; end: 1072f781f;  */

undefined ** FUN_1072f7814(void)

{
  return &PTR_DAT_11099dc48;
}



/* Entry: 1072f7820; end: 1072f789b;  */

void FUN_1072f7820(long param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x0001072f4334();
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  return;
}



/* Entry: 1072f789c; end: 1072f78d3;  */

void FUN_1072f789c(long param_1)

{
  long unaff_x20;
  
  func_0x0001072f9b94();
  func_0x0001072f4334();
  FUN_1072f40f4(param_1 + 0x20,unaff_x20 + 0x20);
  return;
}



/* Entry: 1072f78d4; end: 1072f78db;  */

long * FUN_1072f78d4(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  plVar2 = (long *)(param_1 + 0x20);
  plVar1 = *(long **)(param_1 + 0x18);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001072f3c5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))();
    return plVar1;
  }
  func_0x000104bfeb48();
  lVar4 = plVar2[1];
  lVar3 = *plVar2;
  lVar5 = plVar2[2];
  lVar7 = plVar2[5];
  lVar6 = plVar2[4];
  plVar1[3] = plVar2[3];
  plVar1[2] = lVar5;
  plVar1[5] = lVar7;
  plVar1[4] = lVar6;
  plVar1[1] = lVar4;
  *plVar1 = lVar3;
  FUN_1072994b4(plVar1 + 6,plVar2 + 6);
  lVar3 = plVar2[0x22];
  plVar1[0x23] = plVar2[0x23];
  plVar1[0x22] = lVar3;
  plVar2[0x22] = 0;
  plVar2[0x23] = 0;
  plVar1[0x24] = plVar2[0x24];
  FUN_1072f3cc4(plVar1 + 0x25,plVar2 + 0x25);
  return plVar1;
}



/* Entry: 1072f78dc; end: 1072f796f;  */

long * FUN_1072f78dc(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  func_0x00010729d51c(param_1 + 4);
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



/* Entry: 1072f7970; end: 1072f7a13;  */

void FUN_1072f7970(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  bool bVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long unaff_x19;
  long unaff_x21;
  undefined1 auStack_c8 [24];
  undefined8 *puStack_b0;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [7];
  undefined8 uStack_38;
  
  func_0x0001072f9ce0();
  func_0x0001072f9a90();
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  uStack_78 = 0;
  puStack_80 = param_1;
  uStack_38 = extraout_x8;
  for (; bVar1 = unaff_x21 == param_3, !bVar1; unaff_x21 = unaff_x21 + 0x38) {
    func_0x000104c2fe00(auStack_70,unaff_x21);
    FUN_1072f7ab8(&puStack_80,auStack_70);
    param_1 = auStack_70;
    func_0x000104c2f714();
  }
  func_0x0001072f9a64(uStack_38);
  if (bVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x000104c2f714(auStack_70);
  FUN_1072981bc();
  func_0x0001072f9b20();
  if ((*(byte *)(unaff_x19 + 0xd8) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  puStack_b0 = param_1;
  FUN_1072f7da8(auStack_c8);
  FUN_1072f7dd4(extraout_x8_00,auStack_c8,param_4);
  FUN_10726b07c(auStack_c8);
  return;
}



/* Entry: 1072f7a14; end: 1072f7a2b;  */

void FUN_1072f7a14(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 extraout_x8;
  undefined1 auStack_48 [24];
  
  if ((*(byte *)(param_1 + 0xd8) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  FUN_1072f7da8(auStack_48);
  FUN_1072f7dd4(extraout_x8,auStack_48,param_4);
  FUN_10726b07c(auStack_48);
  return;
}



/* Entry: 1072f7a2c; end: 1072f7a77;  */

void FUN_1072f7a2c(undefined8 param_1)

{
  undefined8 in_x3;
  undefined1 auStack_38 [24];
  
  FUN_1072f7da8(auStack_38);
  FUN_1072f7dd4(param_1,auStack_38,in_x3);
  FUN_10726b07c(auStack_38);
  return;
}



/* Entry: 1072f7a78; end: 1072f7ab7;  */

double FUN_1072f7a78(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    return *(double *)(param_2 + 8) + 0.0;
  }
  return 0.0;
}



/* Entry: 1072f7ab8; end: 1072f7ae7;  */

undefined8 * FUN_1072f7ab8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1072f7ae8();
  param_1[1] = puVar1;
  param_1[1] = *puVar1;
  return param_1;
}



/* Entry: 1072f7ae8; end: 1072f7b33;  */

void FUN_1072f7ae8(void)

{
  func_0x0001072f7b00();
  return;
}



/* Entry: 1072f7b34; end: 1072f7d53;  */

undefined1  [16] FUN_1072f7b34(long *param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong unaff_x25;
  ulong uVar9;
  undefined1 auVar10 [16];
  long *aplStack_68 [3];
  
  uVar6 = param_2;
  func_0x000104c2fe38();
  uVar8 = param_1[1];
  if (uVar8 != 0) {
    uVar9 = uVar8 - 1;
    if ((uVar8 & uVar9) == 0) {
      unaff_x25 = uVar9 & uVar6;
    }
    else {
      unaff_x25 = uVar6;
      if (uVar8 <= uVar6) {
        uVar3 = 0;
        if (uVar8 != 0) {
          uVar3 = uVar6 / uVar8;
        }
        unaff_x25 = uVar6 - uVar3 * uVar8;
      }
    }
    plVar7 = *(long **)(*param_1 + unaff_x25 * 8);
    if (plVar7 != (long *)0x0) {
      do {
        while( true ) {
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_1072f7bf8;
          uVar3 = plVar7[1];
          if (uVar3 != uVar6) break;
          plVar5 = plVar7 + 2;
          func_0x000104c32db4(plVar5,param_2);
          if (((ulong)plVar5 & 1) != 0) {
            uVar2 = 0;
            goto LAB_1072f7d28;
          }
        }
        if ((uVar8 & uVar9) == 0) {
          uVar3 = uVar3 & uVar9;
        }
        else if (uVar8 <= uVar3) {
          uVar1 = 0;
          if (uVar8 != 0) {
            uVar1 = uVar3 / uVar8;
          }
          uVar3 = uVar3 - uVar1 * uVar8;
        }
      } while (uVar3 == unaff_x25);
    }
  }
LAB_1072f7bf8:
  FUN_1072f7d54(aplStack_68,param_1,uVar6,param_3);
  if ((uVar8 == 0) || (*(float *)(param_1 + 4) * (float)uVar8 < (float)(param_1[3] + 1))) {
    uVar9 = 1;
    if (2 < uVar8) {
      uVar9 = (ulong)((uVar8 & uVar8 - 1) != 0);
    }
    uVar9 = uVar9 | uVar8 << 1;
    uVar8 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar9 <= uVar8) {
      uVar9 = uVar8;
    }
    FUN_107298658(param_1,uVar9);
    uVar8 = param_1[1];
    if ((uVar8 & uVar8 - 1) == 0) {
      unaff_x25 = uVar8 - 1 & uVar6;
    }
    else {
      unaff_x25 = uVar6;
      if (uVar8 <= uVar6) {
        uVar9 = 0;
        if (uVar8 != 0) {
          uVar9 = uVar6 / uVar8;
        }
        unaff_x25 = uVar6 - uVar9 * uVar8;
      }
    }
  }
  plVar7 = aplStack_68[0];
  lVar4 = *param_1;
  plVar5 = *(long **)(lVar4 + unaff_x25 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = param_1 + 2;
    *aplStack_68[0] = *plVar5;
    *plVar5 = (long)aplStack_68[0];
    *(long **)(lVar4 + unaff_x25 * 8) = plVar5;
    if (*aplStack_68[0] != 0) {
      uVar6 = *(ulong *)(*aplStack_68[0] + 8);
      if ((uVar8 & uVar8 - 1) == 0) {
        uVar6 = uVar6 & uVar8 - 1;
      }
      else if (uVar8 <= uVar6) {
        uVar9 = 0;
        if (uVar8 != 0) {
          uVar9 = uVar6 / uVar8;
        }
        uVar6 = uVar6 - uVar9 * uVar8;
      }
      *(long **)(lVar4 + uVar6 * 8) = aplStack_68[0];
    }
  }
  else {
    *aplStack_68[0] = *plVar5;
    *plVar5 = (long)aplStack_68[0];
  }
  aplStack_68[0] = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  FUN_107270ee8(aplStack_68);
  uVar2 = 1;
LAB_1072f7d28:
  auVar10._8_8_ = uVar2;
  auVar10._0_8_ = plVar7;
  return auVar10;
}



/* Entry: 1072f7d54; end: 1072f7da7;  */

void FUN_1072f7d54(undefined8 *param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)0x48;
  __Znwm();
  *param_1 = puVar2;
  param_1[1] = param_2 + 0x10;
  param_1[2] = 1;
  puVar1 = puVar2 + 2;
  *puVar2 = 0;
  puVar2[1] = param_3;
  func_0x000104c318ec();
  puVar1[6] = 0xffffffffffffffff;
  puVar1[6] = *(undefined8 *)(param_4 + 0x30);
  return;
}



/* Entry: 1072f7da8; end: 1072f7dd3;  */

void FUN_1072f7da8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uStack_29;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined1 uStack_11;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  FUN_1072f7df8(param_1,&uStack_11,&uStack_28,&uStack_29);
  return;
}



/* Entry: 1072f7dd4; end: 1072f7df7;  */

void FUN_1072f7dd4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_2 + 2) == '\x01') {
    uVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar1;
    *param_2 = 0;
    param_2[1] = 0;
    return;
  }
  func_0x00010727a6f4(param_1);
  FUN_107278b90();
  return;
}



/* Entry: 1072f7df8; end: 1072f7e1b;  */

void FUN_1072f7df8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_3[1];
  uStack_20 = *param_3;
  FUN_1072f7e1c(param_1,&uStack_20);
  return;
}



/* Entry: 1072f7e1c; end: 1072f7e5b;  */

long * FUN_1072f7e1c(long *param_1,long *param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  long *plVar2;
  undefined8 extraout_x8;
  undefined8 uVar3;
  long alStack_a8 [15];
  int iStack_30;
  undefined8 uStack_28;
  
  if ((int)param_2[8] == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 2) = 0;
    return param_2;
  }
  if ((int)param_2[8] != 1) {
    func_0x0001072f9a90(param_2,*param_3,param_3[1]);
    param_2 = (long *)*param_2;
    uStack_28 = extraout_x8;
    func_0x000107753050(alStack_a8);
    uVar1 = iStack_30 == 1;
    if ((bool)uVar1) {
      param_2 = alStack_a8;
      FUN_10727f7dc();
      func_0x0001077755e0(param_1);
    }
    else {
      *(undefined1 *)param_1 = 0;
      *(undefined1 *)(param_1 + 2) = 0;
    }
    func_0x0001072f9b3c();
    func_0x0001072f9a64(uStack_28);
    if (!(bool)uVar1) {
      ___stack_chk_fail();
      plVar2 = param_2;
      func_0x0001072f9b3c();
      func_0x0001072f9b0c();
      func_0x0001072f9cc0();
      if ((bool)uVar1) {
        uVar3 = 0x20;
      }
      else {
        if (plVar2 == (long *)0x0) {
          return param_2;
        }
        uVar3 = 0x28;
      }
      func_0x0001072f9bc8(uVar3);
      return param_2;
    }
    return param_2;
  }
  FUN_107278b70(param_1,param_2);
  *(undefined1 *)(param_1 + 2) = 1;
  return param_1;
}



/* Entry: 1072f7e5c; end: 1072f7e77;  */

void FUN_1072f7e5c(long param_1)

{
  FUN_107278b70();
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}



/* Entry: 1072f7e78; end: 1072f7e87;  */

undefined1 * FUN_1072f7e78(undefined1 *param_1,undefined8 *param_2,long *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  undefined8 uVar4;
  undefined1 auStack_a8 [120];
  int iStack_30;
  undefined8 uStack_28;
  
  func_0x0001072f9a90(param_3,*param_2,param_2[1]);
  puVar2 = (undefined1 *)*param_3;
  uStack_28 = extraout_x8;
  func_0x000107753050(auStack_a8);
  uVar1 = iStack_30 == 1;
  if ((bool)uVar1) {
    puVar2 = auStack_a8;
    FUN_10727f7dc();
    func_0x0001077755e0(param_1);
  }
  else {
    *param_1 = 0;
    param_1[0x10] = 0;
  }
  func_0x0001072f9b3c();
  func_0x0001072f9a64(uStack_28);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    puVar3 = puVar2;
    func_0x0001072f9b3c();
    func_0x0001072f9b0c();
    func_0x0001072f9cc0();
    if ((bool)uVar1) {
      uVar4 = 0x20;
    }
    else {
      if (puVar3 == (undefined1 *)0x0) {
        return puVar2;
      }
      uVar4 = 0x28;
    }
    func_0x0001072f9bc8(uVar4);
    return puVar2;
  }
  return puVar2;
}



/* Entry: 1072f7e88; end: 1072f7f13;  */

undefined1 * FUN_1072f7e88(undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  undefined8 uVar4;
  undefined1 auStack_a8 [120];
  int iStack_30;
  undefined8 uStack_28;
  
  func_0x0001072f9a90();
  puVar2 = (undefined1 *)*param_2;
  uStack_28 = extraout_x8;
  func_0x000107753050(auStack_a8);
  uVar1 = iStack_30 == 1;
  if ((bool)uVar1) {
    puVar2 = auStack_a8;
    FUN_10727f7dc();
    func_0x0001077755e0(param_1);
  }
  else {
    *param_1 = 0;
    param_1[0x10] = 0;
  }
  func_0x0001072f9b3c();
  func_0x0001072f9a64(uStack_28);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    puVar3 = puVar2;
    func_0x0001072f9b3c();
    func_0x0001072f9b0c();
    func_0x0001072f9cc0();
    if ((bool)uVar1) {
      uVar4 = 0x20;
    }
    else {
      if (puVar3 == (undefined1 *)0x0) {
        return puVar2;
      }
      uVar4 = 0x28;
    }
    func_0x0001072f9bc8(uVar4);
    return puVar2;
  }
  return puVar2;
}



/* Entry: 1072f7f14; end: 1072f7f47;  */

void FUN_1072f7f14(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x0001072f9cc0();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  func_0x0001072f9bc8(uVar1);
  return;
}



/* Entry: 1072f7f48; end: 1072f7f77;  */

void FUN_1072f7f48(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001072f9af4();
    } while (extraout_w10 != 0);
  }
  param_1[2] = param_2[2];
  return;
}



/* Entry: 1072f7f78; end: 1072f80f7;  */

void FUN_1072f7f78(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long **pplVar3;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long *plStack_30;
  undefined8 uStack_28;
  
  pplVar3 = &plStack_50;
  func_0x00010726fc00(&plStack_30,param_2);
  if (plStack_30 != (long *)0x0) {
    func_0x00010726fc3c();
    uVar2 = uStack_28;
    plVar1 = plStack_30;
    if (*plStack_30 != -1) {
      plStack_30 = (long *)0x0;
      uStack_28 = 0;
      *param_1 = plVar1;
      param_1[1] = uVar2;
      uStack_40 = 0;
      uStack_38 = 0;
      FUN_1072508cc(&uStack_40);
      pplVar3 = &plStack_30;
      goto LAB_1072f7ff0;
    }
    func_0x00010726fc88();
  }
  FUN_1072508cc(&plStack_30);
  *param_1 = 0;
  param_1[1] = 0;
  plStack_50 = (long *)0x0;
  uStack_48 = 0;
LAB_1072f7ff0:
  FUN_1072508cc(pplVar3);
  return;
}



/* Entry: 1072f80f8; end: 1072f80ff;  */

void FUN_1072f80f8(void)

{
  return;
}



/* Entry: 1072f8100; end: 1072f812b;  */

void FUN_1072f8100(undefined8 *param_1)

{
  long unaff_x19;
  undefined8 uVar1;
  
  func_0x0001072f9d98();
  *param_1 = &PTR_FUN_11099dc88;
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  param_1[2] = *(undefined8 *)(unaff_x19 + 0x10);
  param_1[1] = uVar1;
  return;
}



/* Entry: 1072f812c; end: 1072f8147;  */

void FUN_1072f812c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_11099dc88;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 1072f8148; end: 1072f819b;  */

void FUN_1072f8148(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_70 [80];
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x0001072f81ec(auStack_70,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18),param_2);
  func_0x0001072f81d0(*(undefined8 *)(lVar1 + 0x18),auStack_70);
  FUN_1072f8214(auStack_70);
  return;
}



/* Entry: 1072f819c; end: 1072f81c3;  */

void FUN_1072f819c(undefined8 param_1)

{
  func_0x0001072f9c08();
  func_0x0001072f9bac(param_1,&PTR_DAT_11099dce8);
  func_0x0001072f9ad4();
  return;
}



/* Entry: 1072f81c4; end: 1072f81cf;  */

undefined ** FUN_1072f81c4(void)

{
  return &PTR_DAT_11099dce8;
}



/* Entry: 1072f81d0; end: 1072f8213;  */

long * FUN_1072f81d0(long *param_1,long *param_2,undefined8 param_3)

{
  long *unaff_x19;
  
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001072f81dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x30))();
    return param_1;
  }
  func_0x000104bfeb48();
  if (param_2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001072f8204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x30))(param_1,param_2,param_3);
    return param_2;
  }
  func_0x000104bfeb48();
  FUN_1072f6ffc(param_1 + 3);
  func_0x00010729e564(param_1);
  func_0x00010729d540();
  return unaff_x19;
}



/* Entry: 1072f8214; end: 1072f823b;  */

undefined8 FUN_1072f8214(long param_1)

{
  undefined8 unaff_x19;
  
  FUN_1072f6ffc(param_1 + 0x18);
  func_0x00010729e564(param_1);
  func_0x00010729d540();
  return unaff_x19;
}



/* Entry: 1072f823c; end: 1072f827f;  */

void FUN_1072f823c(void)

{
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001072f9ce0();
  func_0x0001072f804c();
  func_0x0001072f9c38();
  func_0x0001072f808c(unaff_x20 + 0x18,unaff_x21 + 0x38);
  return;
}



/* Entry: 1072f8280; end: 1072f82ab;  */

undefined8 * FUN_1072f8280(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099dd08;
  func_0x0001072f80cc(param_1 + 4);
  return param_1;
}



/* Entry: 1072f82ac; end: 1072f82bf;  */

void FUN_1072f82ac(void)

{
  FUN_1072f8280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072f82c0; end: 1072f8387;  */

undefined8 * FUN_1072f82c0(long param_1)

{
  long *plVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long extraout_x8;
  undefined8 extraout_x9;
  code *pcVar5;
  undefined8 auStack_b0 [11];
  undefined1 auStack_58 [24];
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  puVar2 = auStack_b0;
  puVar3 = auStack_b0;
  puVar4 = auStack_b0;
  func_0x0001072f9da4();
  pcVar5 = *(code **)(param_1 + 0x10);
  plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)*(ulong *)(param_1 + 0x18) >> 1));
  if ((*(ulong *)(param_1 + 0x18) & 1) != 0) {
    pcVar5 = *(code **)(*plVar1 + ((ulong)pcVar5 & 0xffffffff));
  }
  uStack_38 = extraout_x9;
  FUN_1072f823c(auStack_b0,extraout_x8 + 0x20);
  puStack_40 = (undefined8 *)0x0;
  func_0x0001072f9c28();
  *puVar2 = &PTR_FUN_11099dd48;
  FUN_1072f823c(puVar2 + 1,auStack_b0);
  puStack_40 = puVar2;
  (*pcVar5)(plVar1,auStack_58);
  func_0x0001072f9cb8();
  func_0x0001072f80cc();
  func_0x0001072f9a64(uStack_38);
  if ((bool)in_ZR) {
    return puVar3;
  }
  ___stack_chk_fail();
  func_0x0001072f9cb8();
  func_0x0001072f80cc();
  func_0x0001072f9b0c();
  *puVar4 = &PTR_FUN_11099dd48;
  func_0x0001072f80cc(puVar4 + 1);
  return puVar4;
}



/* Entry: 1072f8388; end: 1072f83b3;  */

undefined8 * FUN_1072f8388(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099dd48;
  func_0x0001072f80cc(param_1 + 1);
  return param_1;
}



/* Entry: 1072f83b4; end: 1072f83c7;  */

void FUN_1072f83b4(void)

{
  FUN_1072f8388();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072f83c8; end: 1072f83fb;  */

undefined8 FUN_1072f83c8(undefined8 param_1)

{
  func_0x0001072f9c28();
  FUN_1072f85cc();
  return param_1;
}



/* Entry: 1072f83fc; end: 1072f841f;  */

void FUN_1072f83fc(long param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072f9b94(param_2,param_1 + 8);
  *param_2 = &PTR_FUN_11099dd48;
  func_0x0001072f804c(param_2 + 1);
  FUN_107283e34(unaff_x19 + 0x28,unaff_x20 + 0x20);
  func_0x0001072f808c(param_2 + 8,unaff_x20 + 0x38);
  return;
}



/* Entry: 1072f8420; end: 1072f8597;  */

void FUN_1072f8420(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 in_ZR;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 extraout_x8;
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [80];
  undefined1 auStack_c8 [32];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  lVar4 = param_1;
  func_0x0001072f9a90(param_1,param_2,param_2);
  uStack_38 = extraout_x8;
  func_0x0001072f81ec(auStack_118,*(undefined8 *)(lVar4 + 0x20));
  FUN_107284284(auStack_128,param_1 + 0x28);
  iVar3 = (int)param_1 + 0x28;
  FUN_1072842e4();
  if (iVar3 != 0) {
    plVar5 = (long *)(param_1 + 0x28);
    func_0x00010728433c();
    func_0x0001072f808c(auStack_c8,param_1 + 0x40);
    puVar6 = &uStack_a8;
    FUN_1072f8634(puVar6,auStack_118);
    puStack_40 = (undefined8 *)0x0;
    func_0x0001072f9c54();
    *puVar6 = &PTR_SUB_11099ddb8;
    func_0x0001072f808c(puVar6 + 1,auStack_c8);
    puVar6[7] = uStack_98;
    puVar6[6] = uStack_a0;
    puVar6[5] = uStack_a8;
    uVar2 = uStack_88;
    uVar1 = uStack_90;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_a8 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    puVar6[9] = uVar2;
    puVar6[8] = uVar1;
    puVar6[0xb] = uStack_78;
    puVar6[10] = uStack_80;
    puVar6[0xd] = uStack_68;
    puVar6[0xc] = uStack_70;
    puVar6[0xe] = uStack_60;
    puStack_40 = puVar6;
    (**(code **)(*plVar5 + 0x10))(plVar5,auStack_58);
    func_0x0001072f9cb0();
    func_0x0001072f8684(auStack_c8);
  }
  func_0x0001072f9ca8();
  FUN_1072f8214();
  func_0x0001072f9a64(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072f9cb0();
  func_0x0001072f8684(auStack_c8);
  func_0x0001072f9ca8();
  FUN_1072f8214(auStack_118);
  func_0x0001072f9b0c();
  func_0x0001072f9c08();
  func_0x0001072f9bac();
  func_0x0001072f9ad4();
  return;
}



/* Entry: 1072f8598; end: 1072f85bf;  */

void FUN_1072f8598(undefined8 param_1)

{
  func_0x0001072f9c08();
  func_0x0001072f9bac(param_1,&PTR_DAT_11099de28);
  func_0x0001072f9ad4();
  return;
}



/* Entry: 1072f85c0; end: 1072f85cb;  */

undefined ** FUN_1072f85c0(void)

{
  return &PTR_DAT_11099de28;
}



/* Entry: 1072f85cc; end: 1072f8633;  */

void FUN_1072f85cc(undefined8 *param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072f9b94();
  *param_1 = &PTR_FUN_11099dd48;
  func_0x0001072f804c(param_1 + 1);
  FUN_107283e34(unaff_x19 + 0x28,unaff_x20 + 0x20);
  func_0x0001072f808c(param_1 + 8,unaff_x20 + 0x38);
  return;
}



/* Entry: 1072f8634; end: 1072f86d7;  */

void FUN_1072f8634(long param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_1072f40f4();
  lVar1 = *(long *)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001072f9af4();
    } while (extraout_w10 != 0);
  }
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  uVar5 = *(undefined8 *)(param_2 + 0x40);
  uVar4 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = uVar5;
  *(undefined8 *)(param_1 + 0x38) = uVar4;
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  return;
}



/* Entry: 1072f86d8; end: 1072f86eb;  */

void FUN_1072f86d8(void)

{
  func_0x0001072f86ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072f86ec; end: 1072f871f;  */

undefined8 FUN_1072f86ec(undefined8 param_1)

{
  func_0x0001072f9c54();
  FUN_1072f8788();
  return param_1;
}



/* Entry: 1072f8720; end: 1072f8753;  */

void FUN_1072f8720(long param_1,undefined8 *param_2)

{
  long unaff_x20;
  
  func_0x0001072f9b94(param_2,param_1 + 8);
  *param_2 = &PTR_SUB_11099ddb8;
  func_0x0001072f808c(param_2 + 1);
  FUN_1072f8634(param_2 + 5,unaff_x20 + 0x20);
  return;
}



/* Entry: 1072f8754; end: 1072f877b;  */

void FUN_1072f8754(undefined8 param_1)

{
  func_0x0001072f9c08();
  func_0x0001072f9bac(param_1,&PTR_DAT_11099de18);
  func_0x0001072f9ad4();
  return;
}



/* Entry: 1072f877c; end: 1072f8787;  */

undefined ** FUN_1072f877c(void)

{
  return &PTR_DAT_11099de18;
}



/* Entry: 1072f8788; end: 1072f87db;  */

void FUN_1072f8788(undefined8 *param_1)

{
  long unaff_x20;
  
  func_0x0001072f9b94();
  *param_1 = &PTR_SUB_11099ddb8;
  func_0x0001072f808c(param_1 + 1);
  FUN_1072f8634(param_1 + 5,unaff_x20 + 0x20);
  return;
}



/* Entry: 1072f87dc; end: 1072f8807;  */

undefined8 * FUN_1072f87dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099de48;
  func_0x0001072f5dc4(param_1 + 1);
  return param_1;
}



/* Entry: 1072f8808; end: 1072f881b;  */

void FUN_1072f8808(void)

{
  FUN_1072f87dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072f881c; end: 1072f8853;  */

undefined8 FUN_1072f881c(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x70;
  __Znwm(0x70);
  FUN_1072f8bec();
  return uVar1;
}



/* Entry: 1072f8854; end: 1072f8877;  */

void FUN_1072f8854(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  func_0x0001072f9b94();
  *param_2 = &PTR_FUN_11099de48;
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_2[2] = puVar1[1];
  param_2[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x0001072f9af4();
    } while (extraout_w10 != 0);
  }
  *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1072f6a60(unaff_x19 + 0x20,unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x58);
  *(undefined8 *)(unaff_x19 + 0x68) = *(undefined8 *)(unaff_x20 + 0x60);
  *(undefined8 *)(unaff_x19 + 0x60) = uVar3;
  return;
}



/* Entry: 1072f8878; end: 1072f8bb7;  */

void FUN_1072f8878(long param_1,undefined8 param_2,double param_3,undefined8 param_4,double param_5,
                  long param_6,long *param_7)

{
  float *pfVar1;
  double dVar2;
  double dVar3;
  undefined1 uVar4;
  undefined8 extraout_x8;
  long lVar5;
  int extraout_w10;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  double dVar9;
  undefined4 uVar10;
  undefined4 uVar12;
  double dVar11;
  undefined4 uVar13;
  double dVar14;
  long *plStack_318;
  double dStack_310;
  double dStack_308;
  double dStack_300;
  long *plStack_2f8;
  double dStack_2f0;
  double dStack_2e8;
  double dStack_2e0;
  long *plStack_2d0;
  double dStack_2c8;
  double dStack_2c0;
  double dStack_2b8;
  char cStack_2b0;
  undefined1 uStack_298;
  undefined8 uStack_290;
  undefined4 uStack_230;
  undefined1 uStack_228;
  undefined1 auStack_220 [48];
  undefined1 auStack_1f0 [232];
  undefined8 uStack_108;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  
  uVar12 = (undefined4)((ulong)param_4 >> 0x20);
  uVar10 = (undefined4)param_4;
  lVar5 = param_6;
  func_0x0001072f9a90();
  lVar6 = *(long *)(lVar5 + 0x60);
  uStack_48 = extraout_x8;
  (**(code **)(*param_7 + 200))(param_7,*(undefined8 *)(lVar5 + 8));
  func_0x00010740e088(&plStack_2d0,*(undefined8 *)(lVar5 + 0x18));
  plVar7 = (long *)(ulong)(uint)(float)(double)plStack_2d0;
  func_0x0001077512dc(auStack_1f0);
  uStack_108 = *(undefined8 *)(lVar5 + 8);
  FUN_1072f8c64(param_7[2] + 0x4d8);
  plStack_2d0 = (long *)((ulong)plStack_2d0 & 0xffffffffffffff00);
  uStack_298 = 0;
  uStack_290 = 0;
  dVar11 = (double)CONCAT44(uVar12,uVar10);
  uStack_60 = CONCAT44((float)param_3,(float)(double)plVar7);
  uStack_58 = CONCAT44((float)param_5,(float)(double)CONCAT44(uVar12,uVar10));
  FUN_1072f8d90(&plStack_2f8,&uStack_60,4);
  FUN_1072f8c70(&plStack_318,lVar6 + 0x90,auStack_1f0,&plStack_2d0,&plStack_2f8);
  FUN_1072dbd40(&plStack_2f8);
  func_0x0001072f9d28();
  pfVar1 = (float *)*plStack_318;
  uVar4 = plStack_318[1] - (long)pfVar1 == 0x10;
  if ((bool)uVar4) {
    dVar11 = dVar11 + (double)pfVar1[2];
    dVar14 = param_5 + (double)pfVar1[3];
    FUN_10725aba0((double)plVar7 + (double)*pfVar1,param_3 + (double)pfVar1[1],&plStack_2f8);
  }
  else {
    uVar13 = (undefined4)((ulong)param_5 >> 0x20);
    uVar4 = false;
    dStack_2f0 = param_3;
    uVar10 = SUB84(param_5,0);
    uVar12 = uVar13;
    dVar14 = dVar11;
    plStack_2f8 = plVar7;
    if (*(char *)(param_6 + 0x58) == '\x01') {
      FUN_1072d945c(&plStack_2d0,param_6 + 0x20);
      uVar4 = cStack_2b0 == '\0';
      dStack_2f0 = dStack_2c8;
      uVar10 = SUB84(dStack_2b8,0);
      uVar12 = (int)((ulong)dStack_2b8 >> 0x20);
      dVar14 = dStack_2c0;
      plStack_2f8 = plStack_2d0;
      if ((bool)uVar4) {
        dStack_2f0 = param_3;
        uVar10 = SUB84(param_5,0);
        uVar12 = uVar13;
        dVar14 = dVar11;
        plStack_2f8 = plVar7;
      }
    }
    dVar11 = (double)CONCAT44(uVar12,uVar10);
    dStack_2e8 = dVar14;
    dStack_2e0 = dVar11;
  }
  FUN_1072dbd40(&plStack_318);
  dVar3 = dStack_2e0;
  dVar9 = dStack_2e8;
  dVar2 = dStack_2f0;
  plVar7 = plStack_2f8;
  FUN_1072f7a14(lVar6);
  plStack_2d0 = (long *)((ulong)plStack_2d0 & 0xffffffffffffff00);
  uStack_298 = 0;
  uStack_290 = 0;
  func_0x0001072d124c(&uStack_60);
  FUN_1072f7a2c(&plStack_318,lVar6,auStack_1f0,&plStack_2d0,&uStack_60);
  FUN_1072f7970(&plStack_2f8,*plStack_318,plStack_318[1]);
  FUN_10726b09c(&plStack_318);
  FUN_10726b09c(&uStack_60);
  func_0x0001072f9d28();
  dStack_2c8 = dVar2;
  plStack_2d0 = plVar7;
  dStack_2b8 = dVar3;
  dStack_2c0 = dVar9;
  cStack_2b0 = 1;
  FUN_1072f7a78(*(undefined8 *)(param_6 + 0x68),&plStack_2d0);
  plStack_318 = plVar7;
  dStack_310 = dVar9;
  dStack_308 = dVar11;
  dStack_300 = dVar14;
  _bzero(&plStack_2d0,0xe0);
  uStack_230 = 1;
  uStack_228 = 1;
  func_0x000107299c44(auStack_220,&plStack_2f8);
  (**(code **)(*param_7 + 0x50))(param_1,param_7,&plStack_318,&plStack_2d0);
  lVar5 = *(long *)(param_6 + 0x10);
  uVar8 = *(undefined8 *)(param_6 + 8);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_6 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = uVar8;
  if (lVar5 != 0) {
    do {
      func_0x0001072f9af4();
    } while (extraout_w10 != 0);
  }
  *(long *)(param_1 + 0x28) = param_7[2] + 0x4d8;
  *(double *)(param_1 + 0x38) = dStack_310;
  *(long **)(param_1 + 0x30) = plStack_318;
  *(double *)(param_1 + 0x48) = dStack_300;
  *(double *)(param_1 + 0x40) = dStack_308;
  FUN_1072997a8(&plStack_2d0);
  FUN_1072981bc(&plStack_2f8);
  FUN_107267da8(auStack_1f0);
  func_0x0001072f9a64(uStack_48);
  if (!(bool)uVar4) {
    ___stack_chk_fail();
    FUN_1072dbd40(&plStack_318);
    FUN_107267da8(auStack_1f0);
    do {
      func_0x0001072f9b0c();
    } while( true );
  }
  return;
}



/* Entry: 1072f8bb8; end: 1072f8bdf;  */

void FUN_1072f8bb8(undefined8 param_1)

{
  func_0x0001072f9c08();
  func_0x0001072f9bac(param_1,&PTR_DAT_11099deb8);
  func_0x0001072f9ad4();
  return;
}



/* Entry: 1072f8be0; end: 1072f8beb;  */

undefined ** FUN_1072f8be0(void)

{
  return &PTR_DAT_11099deb8;
}



/* Entry: 1072f8bec; end: 1072f8c63;  */

void FUN_1072f8bec(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x0001072f9b94();
  *param_1 = &PTR_FUN_11099de48;
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001072f9af4();
    } while (extraout_w10 != 0);
  }
  *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1072f6a60(unaff_x19 + 0x20,unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x58);
  *(undefined8 *)(unaff_x19 + 0x68) = *(undefined8 *)(unaff_x20 + 0x60);
  *(undefined8 *)(unaff_x19 + 0x60) = uVar2;
  return;
}



/* Entry: 1072f8c64; end: 1072f8c6f;  */

undefined8 FUN_1072f8c64(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 1072f8c70; end: 1072f8d03;  */

void FUN_1072f8c70(ulong *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uStack_40;
  ulong uStack_38;
  char cStack_30;
  
  if (*(int *)(param_2 + 0x40) == 1) {
    func_0x0001072f64f4(&uStack_40);
    cStack_30 = '\x01';
LAB_1072f8cd8:
    param_1[1] = uStack_38;
    *param_1 = uStack_40;
    uStack_40 = 0;
    uStack_38 = 0;
  }
  else {
    if (*(int *)(param_2 + 0x40) == 0) {
      uStack_40 = uStack_40 & 0xffffffffffffff00;
      cStack_30 = '\0';
    }
    else {
      FUN_1072f8d04(&uStack_40,param_2,param_3,param_4);
      if (cStack_30 == '\x01') goto LAB_1072f8cd8;
    }
    func_0x0001072f64f4(param_1,param_5);
  }
  FUN_1072dbe34(&uStack_40);
  return;
}



/* Entry: 1072f8d04; end: 1072f8d8f;  */

undefined1 * FUN_1072f8d04(undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  undefined1 auStack_a8 [120];
  int iStack_30;
  undefined8 uStack_28;
  
  func_0x0001072f9a90();
  puVar2 = (undefined1 *)*param_2;
  uStack_28 = extraout_x8;
  func_0x000107753050(auStack_a8);
  uVar1 = iStack_30 == 1;
  if ((bool)uVar1) {
    puVar2 = auStack_a8;
    FUN_10727f7dc();
    func_0x0001077754c8(param_1);
  }
  else {
    *param_1 = 0;
    param_1[0x10] = 0;
  }
  func_0x0001072f9b3c();
  func_0x0001072f9a64(uStack_28);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x0001072f9b3c();
  func_0x0001072f9b0c();
  FUN_1072f8db4(puVar2);
  return puVar2;
}



/* Entry: 1072f8d90; end: 1072f8db3;  */

undefined8 FUN_1072f8d90(undefined8 param_1)

{
  FUN_1072f8db4(param_1);
  return param_1;
}



/* Entry: 1072f8db4; end: 1072f8dff;  */

void FUN_1072f8db4(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  FUN_1072f8f08(auStack_38);
  FUN_1072f8e00(param_1,param_2,auStack_38);
  func_0x0001056d1ce4(auStack_38);
  return;
}



/* Entry: 1072f8e00; end: 1072f8e17;  */

void FUN_1072f8e00(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  int extraout_w10;
  
  if (*param_3 == param_3[1]) {
    if ((bRam00000001131ad298 & 1) == 0) {
      iVar3 = 0x131ad298;
      ___cxa_guard_acquire();
      if (iVar3 != 0) {
        FUN_1072f6e50(0x1131ad288);
        ___cxa_guard_release(0x1131ad298);
      }
    }
    lVar2 = lRam00000001131ad290;
    uVar1 = uRam00000001131ad288;
    param_1[1] = lRam00000001131ad290;
    *param_1 = uVar1;
    if (lVar2 != 0) {
      do {
        func_0x0001072f9af4();
      } while (extraout_w10 != 0);
    }
    return;
  }
  FUN_1072f8e38(&stack0xffffffffffffffef,param_3);
  return;
}



/* Entry: 1072f8e18; end: 1072f8e37;  */

void FUN_1072f8e18(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_1072f8e38(&uStack_11,param_1);
  return;
}



/* Entry: 1072f8e38; end: 1072f8eab;  */

undefined8 * FUN_1072f8e38(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  undefined8 auStack_40 [2];
  long lStack_30;
  undefined8 uStack_28;
  
  puVar2 = auStack_40;
  func_0x0001072f9a90();
  uStack_28 = extraout_x8;
  func_0x0001072f9d14();
  FUN_1072f8eac(lStack_30,param_3);
  lVar1 = lStack_30;
  lStack_30 = 0;
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  func_0x0001072f6f74();
  func_0x0001072f9a64(uStack_28);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x0001072f9bbc();
  func_0x0001072f6f74();
  func_0x0001072f9b0c();
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_11099df68;
  puVar2[1] = 0;
  FUN_1072f8ee0(puVar2 + 3);
  return puVar2;
}



/* Entry: 1072f8eac; end: 1072f8edf;  */

undefined8 * FUN_1072f8eac(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_11099df68;
  param_1[1] = 0;
  FUN_1072f8ee0(param_1 + 3);
  return param_1;
}


