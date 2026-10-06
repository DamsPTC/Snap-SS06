/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107376ad0; end: 107376ae3;  */

void FUN_107376ad0(void)

{
  FUN_107376c2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107376ae4; end: 107376b07;  */

void FUN_107376ae4(void)

{
  func_0x00010737903c();
  func_0x000107379004();
  FUN_107379410(&PTR_FUN_1109a69c0);
  return;
}



/* Entry: 107376b08; end: 107376b27;  */

void FUN_107376b08(long param_1,undefined8 param_2)

{
  func_0x000107379004(param_2,param_1 + 8);
  FUN_107379410(&PTR_FUN_1109a69c0);
  return;
}



/* Entry: 107376b28; end: 107376bf7;  */

void FUN_107376b28(void)

{
  undefined1 in_ZR;
  int iVar1;
  undefined8 extraout_x8;
  undefined8 *unaff_x19;
  long unaff_x20;
  long lVar2;
  undefined1 auStack_88 [21];
  undefined1 uStack_73;
  undefined1 uStack_72;
  undefined1 uStack_71;
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107379004();
  func_0x000107378e90();
  iVar1 = (int)auStack_88;
  uStack_28 = extraout_x8;
  func_0x000107379454();
  func_0x000107379554();
  if (iVar1 != 0) {
    lVar2 = *(long *)(unaff_x20 + 0x20);
    uStack_38 = *unaff_x19;
    uStack_30 = *(undefined4 *)(unaff_x19 + 1);
    FUN_10731e460(auStack_70,1,&uStack_71,&uStack_72,&uStack_73);
    FUN_10735d488(auStack_50,auStack_70,&uStack_38);
    FUN_1073768a0(*(undefined8 *)(lVar2 + 0x168),auStack_70,0,0);
    func_0x00010731e248(auStack_70);
  }
  func_0x000107270b00();
  func_0x000107378dfc(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010731e248(auStack_70);
  func_0x000107270b00(auStack_88);
  func_0x000107378f88();
  func_0x000107378ff0();
  func_0x000107378fe0();
  func_0x000107378e80();
  return;
}



/* Entry: 107376bf8; end: 107376c1f;  */

void FUN_107376bf8(undefined8 param_1)

{
  func_0x000107378ff0();
  func_0x000107378fe0(param_1,&PTR_DAT_1109a6a30);
  func_0x000107378e80();
  return;
}



/* Entry: 107376c20; end: 107376c2b;  */

undefined ** FUN_107376c20(void)

{
  return &PTR_DAT_1109a6a30;
}



/* Entry: 107376c2c; end: 107376c77;  */

undefined8 FUN_107376c2c(undefined8 param_1)

{
  func_0x000107379398(&PTR_FUN_1109a69c0);
  return param_1;
}



/* Entry: 107376c78; end: 107376d5f;  */

undefined1 * FUN_107376c78(long *param_1,int param_2)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  undefined1 auStack_68 [32];
  undefined1 auStack_48 [24];
  long *plStack_30;
  undefined8 uStack_28;
  
  plVar1 = param_1;
  func_0x000107378e90();
  uStack_28 = extraout_x8;
  if (param_2 == 0) {
    func_0x000107379774();
    plStack_30 = (long *)0x0;
    func_0x00010737903c();
    func_0x000107379614();
    func_0x00010724cbe8();
    plStack_30 = plVar1;
    func_0x000107379818(*(undefined8 *)(*param_1 + 0x28));
  }
  else {
    func_0x000107379774();
    plStack_30 = (long *)0x0;
    func_0x00010737903c();
    func_0x000107379624();
    func_0x00010724cbe8();
    plStack_30 = plVar1;
    func_0x000107379818(*(undefined8 *)(*param_1 + 0x28));
  }
  func_0x0001006393ec(auStack_48);
  puVar2 = auStack_68;
  func_0x0001006393ec();
  func_0x000107378dfc(uStack_28);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x0001006393ec(auStack_48);
  puVar2 = auStack_68;
  func_0x0001006393ec(puVar2);
  func_0x000107378f88();
  func_0x000107379614();
  func_0x0001006393ec();
  return puVar2;
}



/* Entry: 107376d60; end: 107376d63;  */

undefined8 FUN_107376d60(undefined8 param_1)

{
  func_0x000107379614();
  func_0x0001006393ec();
  return param_1;
}



/* Entry: 107376d64; end: 107376d77;  */

void FUN_107376d64(void)

{
  FUN_107376e0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107376d78; end: 107376dab;  */

undefined8 FUN_107376d78(undefined8 param_1)

{
  func_0x00010737903c();
  func_0x000107376e30();
  return param_1;
}



/* Entry: 107376dac; end: 107376dd7;  */

undefined8 FUN_107376dac(long param_1,undefined8 param_2)

{
  func_0x000107379614(param_2,param_1 + 8);
  func_0x00010724cbe8();
  return param_2;
}



/* Entry: 107376dd8; end: 107376dff;  */

void FUN_107376dd8(undefined8 param_1)

{
  func_0x000107378ff0();
  func_0x000107378fe0(param_1,&PTR_DAT_1109a6ab0);
  func_0x000107378e80();
  return;
}



/* Entry: 107376e00; end: 107376e0b;  */

undefined ** FUN_107376e00(void)

{
  return &PTR_DAT_1109a6ab0;
}



/* Entry: 107376e0c; end: 107376e53;  */

undefined8 FUN_107376e0c(undefined8 param_1)

{
  func_0x000107379614();
  func_0x0001006393ec();
  return param_1;
}



/* Entry: 107376e54; end: 107376e57;  */

undefined8 FUN_107376e54(undefined8 param_1)

{
  func_0x000107379624();
  func_0x0001006393ec();
  return param_1;
}



/* Entry: 107376e58; end: 107376e6b;  */

void FUN_107376e58(void)

{
  FUN_107376f00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107376e6c; end: 107376e9f;  */

undefined8 FUN_107376e6c(undefined8 param_1)

{
  func_0x00010737903c();
  func_0x000107376f24();
  return param_1;
}



/* Entry: 107376ea0; end: 107376ecb;  */

undefined8 FUN_107376ea0(long param_1,undefined8 param_2)

{
  func_0x000107379624(param_2,param_1 + 8);
  func_0x00010724cbe8();
  return param_2;
}



/* Entry: 107376ecc; end: 107376ef3;  */

void FUN_107376ecc(undefined8 param_1)

{
  func_0x000107378ff0();
  func_0x000107378fe0(param_1,&PTR_DAT_1109a6b30);
  func_0x000107378e80();
  return;
}



/* Entry: 107376ef4; end: 107376eff;  */

undefined ** FUN_107376ef4(void)

{
  return &PTR_DAT_1109a6b30;
}



/* Entry: 107376f00; end: 107376f47;  */

undefined8 FUN_107376f00(undefined8 param_1)

{
  func_0x000107379624();
  func_0x0001006393ec();
  return param_1;
}



/* Entry: 107376f48; end: 107376f4b;  */

undefined8 FUN_107376f48(undefined8 param_1)

{
  func_0x000107379398(&PTR_FUN_1109a6b50);
  return param_1;
}



/* Entry: 107376f4c; end: 107376f5f;  */

void FUN_107376f4c(void)

{
  FUN_107377018();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107376f60; end: 107376f83;  */

void FUN_107376f60(void)

{
  func_0x00010737903c();
  func_0x000107379004();
  FUN_107379410(&PTR_FUN_1109a6b50);
  return;
}



/* Entry: 107376f84; end: 107376fa3;  */

void FUN_107376f84(long param_1,undefined8 param_2)

{
  func_0x000107379004(param_2,param_1 + 8);
  FUN_107379410(&PTR_FUN_1109a6b50);
  return;
}



/* Entry: 107376fa4; end: 107376fe3;  */

void FUN_107376fa4(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x000107378fc0();
  iVar1 = (int)lVar2;
  func_0x00010737934c();
  if (iVar1 != 0) {
    func_0x000104c003e8(*(long *)(param_1 + 0x20) + 0x178);
  }
  func_0x000107378fe8();
  return;
}



/* Entry: 107376fe4; end: 10737700b;  */

void FUN_107376fe4(undefined8 param_1)

{
  func_0x000107378ff0();
  func_0x000107378fe0(param_1,&PTR_DAT_1109a6bb0);
  func_0x000107378e80();
  return;
}



/* Entry: 10737700c; end: 107377017;  */

undefined ** FUN_10737700c(void)

{
  return &PTR_DAT_1109a6bb0;
}



/* Entry: 107377018; end: 107377063;  */

undefined8 FUN_107377018(undefined8 param_1)

{
  func_0x000107379398(&PTR_FUN_1109a6b50);
  return param_1;
}



/* Entry: 107377064; end: 10737707f;  */

void FUN_107377064(long param_1)

{
  FUN_107377080();
  *(undefined1 *)(param_1 + 0x70) = 1;
  return;
}



/* Entry: 107377080; end: 1073771c3;  */

void FUN_107377080(long param_1)

{
  long unaff_x19;
  
  func_0x000107379004();
  func_0x000104c318bc();
  func_0x000104c318bc(param_1 + 0x38,unaff_x19 + 0x38);
  return;
}



/* Entry: 1073771c4; end: 10737722f;  */

void FUN_1073771c4(void)

{
  long unaff_x22;
  long unaff_x23;
  long lVar1;
  
  func_0x0001073793a0();
  for (lVar1 = 0; unaff_x23 != lVar1; lVar1 = lVar1 + 1) {
    if (-1 < *(char *)(unaff_x22 + lVar1)) {
      func_0x0001073797b4();
      func_0x0001073795ac();
      func_0x0001073790cc();
      FUN_107377230();
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



/* Entry: 107377230; end: 107377253;  */

void FUN_107377230(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x000104c318bc();
  func_0x0001073791b0();
  lVar2 = *(long *)(param_1 + 0x38);
  if (lVar2 != 0) {
    lVar1 = *(long *)(param_1 + 0x40);
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x20;
      func_0x0001072b978c(lVar1);
    }
    *(long *)(param_1 + 0x40) = lVar2;
    __ZdlPv(*(undefined8 *)(param_1 + 0x38));
  }
  if (*(uint *)(param_1 + 0x28) != 0xffffffff) {
    (*(code *)(&PTR_DAT_1107eb090)[*(uint *)(param_1 + 0x28)])(&stack0xffffffffffffffdf,param_1);
  }
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  return;
}



/* Entry: 107377254; end: 1073772ab;  */

void FUN_107377254(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x38);
  if (lVar2 != 0) {
    lVar1 = *(long *)(param_1 + 0x40);
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x20;
      func_0x0001072b978c(lVar1);
    }
    *(long *)(param_1 + 0x40) = lVar2;
    __ZdlPv(*(undefined8 *)(param_1 + 0x38));
  }
  if (*(uint *)(param_1 + 0x28) != 0xffffffff) {
    (*(code *)(&PTR_DAT_1107eb090)[*(uint *)(param_1 + 0x28)])(&stack0xffffffffffffffdf,param_1);
  }
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  return;
}



/* Entry: 1073772ac; end: 1073772bf;  */

long FUN_1073772ac(undefined8 param_1,long param_2)

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



/* Entry: 1073772c0; end: 1073772e3;  */

void FUN_1073772c0(long param_1,long param_2)

{
  FUN_1073255f0();
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  return;
}



/* Entry: 1073772e4; end: 1073772ef;  */

void FUN_1073772e4(void)

{
  func_0x00010737918c();
  func_0x0001073790ac();
  func_0x000107379198();
  return;
}



/* Entry: 1073772f0; end: 107377317;  */

void FUN_1073772f0(void)

{
  func_0x0001073790ac();
  func_0x000107379198();
  return;
}



/* Entry: 107377318; end: 10737731b;  */

undefined8 * FUN_107377318(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a6c00;
  func_0x0001073776dc(param_1 + 1);
  return param_1;
}



/* Entry: 10737731c; end: 10737732f;  */

void FUN_10737731c(void)

{
  FUN_1073774e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107377330; end: 107377353;  */

undefined8 FUN_107377330(void)

{
  undefined8 unaff_x20;
  
  FUN_107379430();
  func_0x000107379004();
  func_0x000107378ea0(&PTR_FUN_1109a6c00);
  FUN_1073772f0();
  return unaff_x20;
}



/* Entry: 107377354; end: 107377377;  */

void FUN_107377354(long param_1,undefined8 param_2)

{
  func_0x000107379004(param_2,param_1 + 8);
  func_0x000107378ea0(&PTR_FUN_1109a6c00);
  FUN_1073772f0();
  return;
}



/* Entry: 107377378; end: 1073774af;  */

void FUN_107377378(void)

{
  undefined1 in_ZR;
  int iVar1;
  undefined8 uVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [24];
  long lStack_58;
  undefined1 auStack_48 [24];
  undefined1 *puStack_30;
  undefined8 uStack_28;
  undefined1 *puVar2;
  
  iVar1 = (int)auStack_80;
  func_0x000107379004();
  func_0x000107378e90();
  uStack_28 = extraout_x8;
  func_0x000107379454();
  func_0x000107379554();
  if (iVar1 != 0) {
    lVar4 = *(long *)(unaff_x20 + 0x20);
    if (*(int *)(unaff_x19 + 0x38) == 0) {
      in_ZR = 0;
      if (*(char *)(lVar4 + 0x170) == '\x01') {
        puVar2 = auStack_48;
        FUN_1073765ec(puVar2,unaff_x19 + 8,*(undefined1 *)(unaff_x19 + 1),
                      *(undefined2 *)(lVar4 + 0xe8));
        iVar1 = (int)puVar2;
        FUN_107371e9c();
        if (iVar1 == 0) {
          uVar3 = *(undefined8 *)(unaff_x19 + 0x28);
        }
        else {
          uVar3 = *(undefined8 *)(lVar4 + 0x1a0);
          FUN_107372414(uVar3,*(undefined8 *)(lVar4 + 0x1a8));
        }
        in_ZR = *(char *)(unaff_x19 + 0x30) == '\0';
        if ((bool)in_ZR) {
          uVar3 = 0;
        }
        FUN_1073768a0(*(undefined8 *)(lVar4 + 0x168),auStack_48,uVar3);
        func_0x00010731e248();
      }
    }
    else {
      puVar2 = auStack_70;
      FUN_10736f7ec(puVar2,lVar4 + 0x278);
      puStack_30 = (undefined1 *)0x0;
      lStack_58 = lVar4;
      func_0x00010737903c();
      func_0x0001073796a0(&PTR_FUN_1109a6c80);
      *(undefined8 *)(puVar2 + 0x18) = extraout_x8_00;
      *(long *)(puVar2 + 0x20) = lVar4;
      puStack_30 = puVar2;
      FUN_107376c78(*(undefined8 *)(lVar4 + 0x128),*(undefined4 *)(lVar4 + 0x130),auStack_48);
      func_0x0001006393ec();
      func_0x0001073793b4();
    }
  }
  func_0x000107378fe8();
  func_0x000107378dfc(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107378fe8();
  func_0x000107378f88();
  func_0x000107378ff0();
  func_0x000107378fe0();
  func_0x000107378e80();
  return;
}



/* Entry: 1073774b0; end: 1073774d7;  */

void FUN_1073774b0(undefined8 param_1)

{
  func_0x000107378ff0();
  func_0x000107378fe0(param_1,&PTR_DAT_1109a6cf0);
  func_0x000107378e80();
  return;
}



/* Entry: 1073774d8; end: 1073774e3;  */

undefined ** FUN_1073774d8(void)

{
  return &PTR_DAT_1109a6cf0;
}



/* Entry: 1073774e4; end: 10737750f;  */

undefined8 * FUN_1073774e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a6c00;
  func_0x0001073776dc(param_1 + 1);
  return param_1;
}



/* Entry: 107377510; end: 107377547;  */

void FUN_107377510(void)

{
  func_0x000107379004();
  func_0x000107378ea0(&PTR_FUN_1109a6c00);
  FUN_1073772f0();
  return;
}



/* Entry: 107377548; end: 10737754b;  */

undefined8 FUN_107377548(undefined8 param_1)

{
  func_0x000107379398(&PTR_FUN_1109a6c80);
  return param_1;
}



/* Entry: 10737754c; end: 10737755f;  */

void FUN_10737754c(void)

{
  FUN_107377618();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107377560; end: 107377583;  */

void FUN_107377560(void)

{
  func_0x00010737903c();
  func_0x000107379004();
  FUN_107379410(&PTR_FUN_1109a6c80);
  return;
}



/* Entry: 107377584; end: 1073775a3;  */

void FUN_107377584(long param_1,undefined8 param_2)

{
  func_0x000107379004(param_2,param_1 + 8);
  FUN_107379410(&PTR_FUN_1109a6c80);
  return;
}



/* Entry: 1073775a4; end: 1073775e3;  */

void FUN_1073775a4(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x000107378fc0();
  iVar1 = (int)lVar2;
  func_0x00010737934c();
  if (iVar1 != 0) {
    func_0x000104c003e8(*(long *)(param_1 + 0x20) + 0x178);
  }
  func_0x000107378fe8();
  return;
}



/* Entry: 1073775e4; end: 10737760b;  */

void FUN_1073775e4(undefined8 param_1)

{
  func_0x000107378ff0();
  func_0x000107378fe0(param_1,&PTR_DAT_1109a6ce0);
  func_0x000107378e80();
  return;
}



/* Entry: 10737760c; end: 107377617;  */

undefined ** FUN_10737760c(void)

{
  return &PTR_DAT_1109a6ce0;
}



/* Entry: 107377618; end: 107377663;  */

undefined8 FUN_107377618(undefined8 param_1)

{
  func_0x000107379398(&PTR_FUN_1109a6c80);
  return param_1;
}



/* Entry: 107377664; end: 107377683;  */

void FUN_107377664(long param_1)

{
  if (*(char *)(param_1 + 0x70) == '\x01') {
    FUN_107377684();
  }
  return;
}



/* Entry: 107377684; end: 1073777e3;  */

void FUN_107377684(void)

{
  func_0x000107379568();
  func_0x000104c2f714();
  func_0x000107379084();
  return;
}



/* Entry: 1073777e4; end: 1073777fb;  */

void FUN_1073777e4(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1073777fc; end: 10737781b;  */

void FUN_1073777fc(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    FUN_107375ca0();
  }
  return;
}



/* Entry: 10737781c; end: 10737785b;  */

void FUN_10737781c(long param_1,long param_2)

{
  long unaff_x19;
  
  func_0x00010737967c();
  if (param_1 == 0) {
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
  }
  else if (param_1 == param_2) {
    func_0x000107378e28();
  }
  else {
    func_0x000107378fb4();
    *(long *)(unaff_x19 + 0x18) = param_1;
  }
  return;
}



/* Entry: 10737785c; end: 10737785f;  */

undefined8 * FUN_10737785c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a6d10;
  FUN_107375274(param_1 + 1);
  return param_1;
}



/* Entry: 107377860; end: 107377873;  */

void FUN_107377860(void)

{
  FUN_10737795c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107377874; end: 1073778a7;  */

undefined8 FUN_107377874(undefined8 param_1)

{
  func_0x000107379534();
  FUN_107377988();
  return param_1;
}



/* Entry: 1073778a8; end: 1073778cb;  */

void FUN_1073778a8(long param_1,undefined8 param_2)

{
  func_0x000107379010(param_2,param_1 + 8);
  func_0x000107378ea0(&PTR_FUN_1109a6d10);
  func_0x000107379670();
  FUN_10737781c();
  return;
}



/* Entry: 1073778cc; end: 107377927;  */

void FUN_1073778cc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined1 auStack_40 [16];
  
  FUN_10736fd14(auStack_40,param_1 + 8);
  iVar1 = (int)param_1 + 8;
  func_0x00010736fd78();
  if (iVar1 != 0) {
    FUN_1073768a0(*(undefined8 *)(param_1 + 0x38),param_2,*param_3,param_3[1]);
  }
  func_0x000107378fe8();
  return;
}



/* Entry: 107377928; end: 10737794f;  */

void FUN_107377928(undefined8 param_1)

{
  func_0x000107378ff0();
  func_0x000107378fe0(param_1,&PTR_DAT_1109a6d80);
  func_0x000107378e80();
  return;
}



/* Entry: 107377950; end: 10737795b;  */

undefined ** FUN_107377950(void)

{
  return &PTR_DAT_1109a6d80;
}



/* Entry: 10737795c; end: 107377987;  */

undefined8 * FUN_10737795c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a6d10;
  FUN_107375274(param_1 + 1);
  return param_1;
}



/* Entry: 107377988; end: 1073779c3;  */

void FUN_107377988(void)

{
  func_0x000107379010();
  func_0x000107378ea0(&PTR_FUN_1109a6d10);
  func_0x000107379670();
  FUN_10737781c();
  return;
}



/* Entry: 1073779c4; end: 1073779c7;  */

undefined8 * FUN_1073779c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a6da0;
  func_0x000107375294(param_1 + 1);
  return param_1;
}



/* Entry: 1073779c8; end: 1073779db;  */

void FUN_1073779c8(void)

{
  FUN_107377aa4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073779dc; end: 107377a0f;  */

undefined8 FUN_1073779dc(undefined8 param_1)

{
  func_0x000107379534();
  FUN_107377ad0();
  return param_1;
}



/* Entry: 107377a10; end: 107377a33;  */

void FUN_107377a10(long param_1,undefined8 param_2)

{
  func_0x000107379010(param_2,param_1 + 8);
  func_0x000107378ea0(&PTR_FUN_1109a6da0);
  func_0x000107379670();
  func_0x00010724cbe8();
  return;
}



/* Entry: 107377a34; end: 107377a6f;  */

void FUN_107377a34(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x000107378fc0();
  iVar1 = (int)lVar2;
  func_0x00010737934c();
  if (iVar1 != 0) {
    func_0x000104c003e8(param_1 + 0x20);
  }
  func_0x000107378fe8();
  return;
}



/* Entry: 107377a70; end: 107377a97;  */

void FUN_107377a70(undefined8 param_1)

{
  func_0x000107378ff0();
  func_0x000107378fe0(param_1,&PTR_DAT_1109a6e00);
  func_0x000107378e80();
  return;
}



/* Entry: 107377a98; end: 107377aa3;  */

undefined ** FUN_107377a98(void)

{
  return &PTR_DAT_1109a6e00;
}



/* Entry: 107377aa4; end: 107377acf;  */

undefined8 * FUN_107377aa4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a6da0;
  func_0x000107375294(param_1 + 1);
  return param_1;
}



/* Entry: 107377ad0; end: 107377b0b;  */

void FUN_107377ad0(void)

{
  func_0x000107379010();
  func_0x000107378ea0(&PTR_FUN_1109a6da0);
  func_0x000107379670();
  func_0x00010724cbe8();
  return;
}



/* Entry: 107377b0c; end: 107377b13;  */

void FUN_107377b0c(void)

{
  return;
}



/* Entry: 107377b14; end: 107377b3f;  */

void FUN_107377b14(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_1;
  func_0x0001073792f0();
  uVar2 = param_1[1];
  *puVar1 = &PTR_FUN_1109a6e20;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 107377b40; end: 107377b7b;  */

void FUN_107377b40(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_1109a6e20;
  param_2[1] = uVar1;
  return;
}



/* Entry: 107377b7c; end: 107377ba3;  */

void FUN_107377b7c(undefined8 param_1)

{
  func_0x000107378ff0();
  func_0x000107378fe0(param_1,&PTR_DAT_1109a6e80);
  func_0x000107378e80();
  return;
}



/* Entry: 107377ba4; end: 107377bb7;  */

undefined ** FUN_107377ba4(void)

{
  return &PTR_DAT_1109a6e80;
}



/* Entry: 107377bb8; end: 107377bd7;  */

void FUN_107377bb8(undefined8 *param_1)

{
  func_0x0001073792f0();
  *param_1 = &PTR_DAT_1109a6ea0;
  return;
}



/* Entry: 107377bd8; end: 107377bff;  */

void FUN_107377bd8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_1109a6ea0;
  return;
}



/* Entry: 107377c00; end: 107377c27;  */

void FUN_107377c00(undefined8 param_1)

{
  func_0x000107378ff0();
  func_0x000107378fe0(param_1,&PTR_DAT_1109a6f00);
  func_0x000107378e80();
  return;
}



/* Entry: 107377c28; end: 107377c3b;  */

undefined ** FUN_107377c28(void)

{
  return &PTR_DAT_1109a6f00;
}



/* Entry: 107377c3c; end: 107377c5b;  */

void FUN_107377c3c(undefined8 *param_1)

{
  func_0x0001073792f0();
  *param_1 = &PTR_DAT_1109a6f20;
  return;
}



/* Entry: 107377c5c; end: 107377c83;  */

void FUN_107377c5c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_1109a6f20;
  return;
}



/* Entry: 107377c84; end: 107377cab;  */

void FUN_107377c84(undefined8 param_1)

{
  func_0x000107378ff0();
  func_0x000107378fe0(param_1,&PTR_DAT_1109a6f80);
  func_0x000107378e80();
  return;
}



/* Entry: 107377cac; end: 107377cbb;  */

undefined ** FUN_107377cac(void)

{
  return &PTR_DAT_1109a6f80;
}



/* Entry: 107377cbc; end: 107377ccf;  */

void FUN_107377cbc(void)

{
  FUN_107377e00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107377cd0; end: 107377dff;  */

undefined8 FUN_107377cd0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 unaff_x19;
  long lVar4;
  undefined8 *puVar5;
  long lStack_40;
  long lStack_38;
  
  lVar4 = *(long *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (lVar4 != 0) {
    lVar2 = *(long *)(lVar4 + 0x1a0);
    lVar3 = *(long *)(lVar4 + 0x1a8);
    func_0x000107371ec8();
    lStack_40 = lVar2;
    lStack_38 = lVar3;
    while (lStack_40 != 0) {
      puVar1 = *(undefined8 **)(lStack_38 + 0x40);
      for (puVar5 = *(undefined8 **)(lStack_38 + 0x38); puVar5 != puVar1; puVar5 = puVar5 + 4) {
        if (*(int *)(puVar5 + 2) == 0) {
          (**(code **)(*(long *)*puVar5 + 0xa8))((long *)*puVar5,*(undefined4 *)(puVar5 + 3));
          FUN_1073554b4(*puVar5);
        }
        else {
          (**(code **)(*(long *)*puVar5 + 0x38))((long *)*puVar5,*(undefined4 *)(puVar5 + 3));
        }
      }
      FUN_1073723e0(&lStack_40);
    }
    func_0x000107377740(lVar4 + 0x278);
    func_0x000107377770(lVar4 + 0x250);
    func_0x0001072c91e8(lVar4 + 0x238);
    func_0x0001072c920c(lVar4 + 0x218);
    func_0x0001072c9240(lVar4 + 0x200);
    func_0x00010725b6e0(lVar4 + 0x1f0);
    func_0x0001072c90dc(lVar4 + 0x1c0);
    FUN_107375dcc(lVar4 + 0x1a0);
    func_0x00010730b1b0(lVar4 + 0x178);
    FUN_1073777fc(lVar4 + 0x150);
    func_0x0001072c9368(lVar4 + 0x128);
    func_0x000104c2f714(lVar4 + 0xf0);
    func_0x0001072c9110(lVar4 + 0xc0);
    func_0x0001072c940c(lVar4 + 0x38);
    func_0x000104c2f714(lVar4);
    func_0x000107379224();
  }
  param_1 = param_1 + 0x18;
  func_0x00010725c0a0();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 107377e00; end: 107377e0f;  */

void FUN_107377e00(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107377e10; end: 107377e5f;  */

void FUN_107377e10(long param_1)

{
  func_0x00010737928c();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 107377e60; end: 107377e73;  */

void FUN_107377e60(void)

{
  func_0x000107377e34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107377e74; end: 107377ea7;  */

void FUN_107377e74(void)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x000107379280();
  func_0x0001073792d4(&PTR_SUB_1109a6ff0);
  if (extraout_x8 != 0) {
    do {
      func_0x000107378f58();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 107377ea8; end: 107377f07;  */

void FUN_107377ea8(long param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 unaff_x30;
  undefined8 uVar2;
  
  *param_2 = &PTR_SUB_1109a6ff0;
  lVar1 = *(long *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107378f58(unaff_x30);
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 107377f08; end: 107377f2f;  */

void FUN_107377f08(undefined8 param_1)

{
  func_0x000107378ff0();
  func_0x000107378fe0(param_1,&PTR_DAT_1109a7050);
  func_0x000107378e80();
  return;
}


