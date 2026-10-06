/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104bdfebc; end: 104bdfef3;  */

undefined8 * FUN_104bdfebc(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_1107e6890;
  lVar1 = param_1[2];
  param_1[2] = 0;
  if (lVar1 != 0) {
    func_0x000104be0004();
  }
  return param_1;
}



/* Entry: 104bdfef4; end: 104bdff07;  */

void FUN_104bdfef4(void)

{
  FUN_104bdfebc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bdff08; end: 104bdff5f;  */

void FUN_104bdff08(long param_1,long param_2)

{
  int extraout_w10;
  
  if (*(long *)(param_2 + 8) != 0) {
    do {
      func_0x000104bdffa8();
    } while (extraout_w10 != 0);
  }
  FUN_104bdf8a4(param_1 + 8);
  func_0x000100604a94();
  return;
}



/* Entry: 104bdff60; end: 104bdff63;  */

void FUN_104bdff60(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e68d0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104bdff64; end: 104bdff77;  */

void FUN_104bdff64(void)

{
  func_0x000104bdff88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bdff78; end: 104be000f;  */

void FUN_104bdff78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104bdff80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 104be0010; end: 104be0097;  */

void FUN_104be0010(void)

{
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [32];
  
  func_0x000104be617c();
  func_0x000104be6374();
  func_0x000104be5fb0(&PTR_FUN_1107e6a18);
  if (extraout_x8 != 0) {
    do {
      func_0x000104be5e40();
    } while (extraout_w10 != 0);
  }
  func_0x000104be5e14(&PTR_FUN_1107e6a68);
  FUN_104be16e8();
  func_0x000104be6524();
  func_0x000104be6140(*(undefined8 *)(extraout_x8_00 + 0x28));
  func_0x000100568bc8(auStack_50);
  FUN_104be0098(auStack_60);
  return;
}



/* Entry: 104be0098; end: 104be00bb;  */

void FUN_104be0098(long param_1)

{
  func_0x00010054ffe4();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 104be00bc; end: 104be0103;  */

void FUN_104be00bc(void)

{
  long extraout_x8;
  undefined1 auStack_30 [16];
  
  func_0x000104be63c8();
  func_0x000104be6620();
  func_0x000104be6140(*(undefined8 *)(extraout_x8 + 0x30));
  func_0x00010054fff0(auStack_30);
  func_0x000104be647c();
  return;
}



/* Entry: 104be0104; end: 104be0183;  */

void FUN_104be0104(undefined8 *param_1)

{
  undefined8 *puVar1;
  int extraout_w10;
  long unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000104be63e8();
  puVar1 = param_1;
  func_0x000104be617c();
  func_0x000104be6374();
  *puVar1 = &PTR_FUN_1107e6ae8;
  if (unaff_x21 != 0) {
    do {
      func_0x000104be5e40();
    } while (extraout_w10 != 0);
  }
  *(undefined8 *)(unaff_x20 + 0x18) = &PTR_FUN_1107e6b38;
  *(undefined8 *)(unaff_x20 + 0x20) = unaff_x22;
  *(long *)(unaff_x20 + 0x28) = unaff_x21;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_104be17c4(&uStack_50);
  *param_1 = (undefined8 *)(unaff_x20 + 0x18);
  param_1[1] = unaff_x20;
  return;
}



/* Entry: 104be0184; end: 104be01a7;  */

void FUN_104be0184(long param_1)

{
  func_0x00010054ffe4();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 104be01a8; end: 104be01ef;  */

void FUN_104be01a8(void)

{
  long extraout_x8;
  undefined1 auStack_30 [16];
  
  func_0x000104be63c8();
  func_0x000104be6620();
  func_0x000104be6140(*(undefined8 *)(extraout_x8 + 0x38));
  func_0x00010054fff0(auStack_30);
  func_0x000104be647c();
  return;
}



/* Entry: 104be01f0; end: 104be0277;  */

void FUN_104be01f0(void)

{
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [32];
  
  func_0x000104be617c();
  func_0x000104be6374();
  func_0x000104be5fb0(&PTR_FUN_1107e6b90);
  if (extraout_x8 != 0) {
    do {
      func_0x000104be5e40();
    } while (extraout_w10 != 0);
  }
  func_0x000104be5e14(&PTR_FUN_1107e6be0);
  FUN_104be189c();
  func_0x000104be6524();
  func_0x000104be6140(*(undefined8 *)(extraout_x8_00 + 0x40));
  func_0x000100565a6c(auStack_50);
  FUN_104be0278(auStack_60);
  return;
}



/* Entry: 104be0278; end: 104be029b;  */

void FUN_104be0278(long param_1)

{
  func_0x00010054ffe4();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 104be029c; end: 104be0323;  */

void FUN_104be029c(void)

{
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [32];
  
  func_0x000104be617c();
  func_0x000104be6374();
  func_0x000104be5fb0(&PTR_FUN_1107e6c40);
  if (extraout_x8 != 0) {
    do {
      func_0x000104be5e40();
    } while (extraout_w10 != 0);
  }
  func_0x000104be5e14(&PTR_FUN_1107e6c90);
  FUN_104be1970();
  func_0x000104be6524();
  func_0x000104be6140(*(undefined8 *)(extraout_x8_00 + 0x50));
  func_0x000100566324(auStack_50);
  FUN_104be0324(auStack_60);
  return;
}



/* Entry: 104be0324; end: 104be0347;  */

void FUN_104be0324(long param_1)

{
  func_0x00010054ffe4();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 104be0348; end: 104be0357;  */

void FUN_104be0348(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104be0354. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x48))();
  return;
}



/* Entry: 104be0358; end: 104be0513;  */

void FUN_104be0358(void)

{
  long extraout_x8;
  int extraout_w10;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  
  func_0x000104be6014();
  func_0x000104be6374();
  func_0x000104be6364(&PTR_FUN_1107e6ce8);
  if (extraout_x8 != 0) {
    do {
      func_0x000104be5e40();
    } while (extraout_w10 != 0);
  }
  func_0x000104be5f20(&PTR_FUN_1107e6d38);
  *unaff_x19 = unaff_x21;
  unaff_x19[1] = unaff_x20;
  return;
}



/* Entry: 104be0514; end: 104be05c7;  */

void FUN_104be0514(long *param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if (*(long **)(param_2 + 8) == (long *)0x0) {
    uVar2 = 0x10;
    ___cxa_allocate_exception(0x10);
    __ZNSt13runtime_errorC1EPKc();
    func_0x000104be660c();
    ___cxa_throw(uVar2);
  }
  else {
    (**(code **)(**(long **)(param_2 + 8) + 0xd8))(param_1);
    if (*param_1 != 0) {
      return;
    }
  }
  uVar2 = 0x10;
  ___cxa_allocate_exception(0x10);
  __ZNSt13runtime_errorC1EPKc();
  func_0x000104be660c();
  ___cxa_throw(uVar2);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104be059c);
  (*pcVar1)();
}



/* Entry: 104be05c8; end: 104be05cb;  */

undefined8 FUN_104be05c8(undefined8 param_1)

{
  func_0x000104be62b8(&PTR_FUN_1107e6970);
  return param_1;
}



/* Entry: 104be05cc; end: 104be05df;  */

void FUN_104be05cc(void)

{
  FUN_104be05e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104be05e0; end: 104be0607;  */

undefined8 FUN_104be05e0(undefined8 param_1)

{
  func_0x000104be62b8(&PTR_FUN_1107e6970);
  return param_1;
}



/* Entry: 104be0608; end: 104be0613;  */

void FUN_104be0608(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e6a18;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104be0614; end: 104be0627;  */

void FUN_104be0614(void)

{
  FUN_104be0608();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104be0628; end: 104be062f;  */

void FUN_104be0628(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104be5e58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 104be0630; end: 104be065b;  */

undefined8 * FUN_104be0630(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e6a68;
  FUN_104be16e8(param_1 + 1);
  return param_1;
}



/* Entry: 104be065c; end: 104be066f;  */

void FUN_104be065c(void)

{
  FUN_104be0630();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104be0670; end: 104be0737;  */

void FUN_104be0670(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined1 auStack_460 [1064];
  undefined1 uStack_38;
  
  plVar1 = *(long **)(param_1 + 8);
  FUN_104be07d0(auStack_460);
  uStack_38 = 1;
  uStack_478 = 0;
  uStack_470 = 0;
  uStack_468 = 0;
  uStack_490 = 0;
  uStack_488 = 0;
  uStack_480 = 0;
  (**(code **)(*plVar1 + 0x10))(plVar1,auStack_460,param_2,&uStack_478,&uStack_490);
  FUN_104be1274(&uStack_490);
  func_0x00010066c3e8(&uStack_478);
  FUN_104be16c8(auStack_460);
  return;
}



/* Entry: 104be0738; end: 104be076f;  */

void FUN_104be0738(long param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(**(long **)(param_1 + 8) + 0x10))(*(long **)(param_1 + 8),param_3,param_2);
  return;
}



/* Entry: 104be0770; end: 104be0773;  */

void FUN_104be0770(void)

{
  return;
}



/* Entry: 104be0774; end: 104be079f;  */

void FUN_104be0774(long param_1,long param_2)

{
  code *extraout_x8;
  
  func_0x000104be6160(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_2 + 4));
  (*extraout_x8)();
  return;
}



/* Entry: 104be07a0; end: 104be07c7;  */

void FUN_104be07a0(long param_1)

{
  code *extraout_x8;
  
  func_0x000104be6428(*(undefined8 *)(param_1 + 8));
  (*extraout_x8)();
  return;
}



/* Entry: 104be07c8; end: 104be07cf;  */

void FUN_104be07c8(void)

{
  return;
}



/* Entry: 104be07d0; end: 104be099f;  */

void FUN_104be07d0(long param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  func_0x0001002921c4();
  func_0x00010054f8dc();
  func_0x00010028af84(param_1 + 0x18,unaff_x20 + 0x18);
  FUN_104be09a0(unaff_x19 + 0x38,unaff_x20 + 0x38);
  _memcpy(unaff_x19 + 0x50,unaff_x20 + 0x50,0x50);
  func_0x0001005fad5c(unaff_x19 + 0xa0,unaff_x20 + 0xa0);
  func_0x0001005fad5c(unaff_x19 + 0xb8,unaff_x20 + 0xb8);
  uVar1 = *(undefined8 *)(unaff_x20 + 0xd0);
  *(undefined4 *)(unaff_x19 + 0xd8) = *(undefined4 *)(unaff_x20 + 0xd8);
  *(undefined8 *)(unaff_x19 + 0xd0) = uVar1;
  func_0x0001005fad5c(unaff_x19 + 0xe0,unaff_x20 + 0xe0);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x100);
  uVar1 = *(undefined8 *)(unaff_x20 + 0xf8);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x110);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x108);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x120);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x118);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x121);
  *(undefined8 *)(unaff_x19 + 0x129) = *(undefined8 *)(unaff_x20 + 0x129);
  *(undefined8 *)(unaff_x19 + 0x121) = uVar7;
  *(undefined8 *)(unaff_x19 + 0x110) = uVar4;
  *(undefined8 *)(unaff_x19 + 0x108) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x120) = uVar6;
  *(undefined8 *)(unaff_x19 + 0x118) = uVar5;
  *(undefined8 *)(unaff_x19 + 0x100) = uVar2;
  *(undefined8 *)(unaff_x19 + 0xf8) = uVar1;
  FUN_104be0bd0(unaff_x19 + 0x138,unaff_x20 + 0x138);
  *(undefined4 *)(unaff_x19 + 0x200) = *(undefined4 *)(unaff_x20 + 0x200);
  func_0x000104be0e38(unaff_x19 + 0x208,unaff_x20 + 0x208);
  _memcpy(unaff_x19 + 0x220,unaff_x20 + 0x220,0x80);
  func_0x000100606fd8(unaff_x19 + 0x2a0,unaff_x20 + 0x2a0);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x2c8);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x2c0);
  *(undefined1 *)(unaff_x19 + 0x2d0) = *(undefined1 *)(unaff_x20 + 0x2d0);
  *(undefined8 *)(unaff_x19 + 0x2c8) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x2c0) = uVar1;
  FUN_104be107c(unaff_x19 + 0x2d8,unaff_x20 + 0x2d8);
  func_0x00010066f670(unaff_x19 + 0x2f8,unaff_x20 + 0x2f8);
  func_0x00010066f6b4(unaff_x19 + 0x3d8,unaff_x20 + 0x3d8);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x400);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x3f8);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x410);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x408);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x411);
  *(undefined8 *)(unaff_x19 + 0x419) = *(undefined8 *)(unaff_x20 + 0x419);
  *(undefined8 *)(unaff_x19 + 0x411) = uVar5;
  *(undefined8 *)(unaff_x19 + 0x400) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x3f8) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x410) = uVar4;
  *(undefined8 *)(unaff_x19 + 0x408) = uVar3;
  return;
}



/* Entry: 104be09a0; end: 104be09cb;  */

void FUN_104be09a0(void)

{
  func_0x00010054f8c8();
  FUN_104be09cc();
  return;
}



/* Entry: 104be09cc; end: 104be0a1f;  */

void FUN_104be09cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  func_0x000100292158();
  if (param_4 != 0) {
    func_0x000100658020();
    FUN_104be0a20();
    func_0x000100658070(param_1);
    FUN_104be0a54();
  }
  func_0x000100292240();
  func_0x000104be0b60();
  return;
}



/* Entry: 104be0a20; end: 104be0a53;  */

void FUN_104be0a20(long param_1,ulong param_2)

{
  long *unaff_x19;
  
  if (param_2 >> 0x3b == 0) {
    func_0x00010002b94c();
    func_0x0001006b5b64();
    *unaff_x19 = param_1;
    unaff_x19[1] = param_1;
    unaff_x19[2] = param_1 + param_2 * 0x20;
  }
  else {
    FUN_104be0a80();
    func_0x000100658080();
    param_1 = param_1 + 0x10;
    func_0x000104be0a8c();
    unaff_x19[1] = param_1;
  }
  return;
}



/* Entry: 104be0a54; end: 104be0a7f;  */

void FUN_104be0a54(long param_1)

{
  long unaff_x19;
  
  func_0x000100658080();
  param_1 = param_1 + 0x10;
  func_0x000104be0a8c();
  *(long *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 104be0a80; end: 104be0a9f;  */

void FUN_104be0a80(void)

{
  func_0x000104be61f0();
  FUN_104be0aa0();
  return;
}



/* Entry: 104be0aa0; end: 104be0aff;  */

long FUN_104be0aa0(void)

{
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uStack_38;
  
  func_0x0001006580b8();
  for (; unaff_x21 != unaff_x19; unaff_x21 = unaff_x21 + 0x20) {
    FUN_104be0b00(unaff_x20,unaff_x21);
    unaff_x20 = uStack_38 + 0x20;
    uStack_38 = unaff_x20;
  }
  func_0x000100658160();
  func_0x0001006b5cb8();
  return unaff_x20;
}



/* Entry: 104be0b00; end: 104be0b23;  */

void FUN_104be0b00(long param_1,long param_2)

{
  func_0x00010054f8dc();
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  return;
}



/* Entry: 104be0b24; end: 104be0b33;  */

void FUN_104be0b24(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  func_0x000104be6598();
  while (param_3 != param_5) {
    func_0x0001006d4274();
  }
  return;
}



/* Entry: 104be0b34; end: 104be0b87;  */

void FUN_104be0b34(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    func_0x0001006d4274();
  }
  return;
}



/* Entry: 104be0b88; end: 104be0b93;  */

void FUN_104be0b88(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  func_0x000104be61f0();
  func_0x000104be6598();
  while (param_3 != param_5) {
    func_0x00010065ae00();
  }
  return;
}



/* Entry: 104be0b94; end: 104be0ba3;  */

void FUN_104be0b94(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  func_0x000104be6598();
  while (param_3 != param_5) {
    func_0x00010065ae00();
  }
  return;
}



/* Entry: 104be0ba4; end: 104be0bcf;  */

void FUN_104be0ba4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    func_0x00010065ae00();
  }
  return;
}



/* Entry: 104be0bd0; end: 104be0bff;  */

void FUN_104be0bd0(long param_1)

{
  func_0x00010066dd44();
  *(undefined1 *)(param_1 + 0xc0) = 0;
  FUN_104be0c00();
  return;
}



/* Entry: 104be0c00; end: 104be0c13;  */

void FUN_104be0c00(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0xc0) == '\x01') {
    FUN_104be0c30();
    *(undefined1 *)(param_1 + 0xc0) = 1;
    return;
  }
  return;
}



/* Entry: 104be0c14; end: 104be0c2f;  */

void FUN_104be0c14(long param_1)

{
  FUN_104be0c30();
  *(undefined1 *)(param_1 + 0xc0) = 1;
  return;
}



/* Entry: 104be0c30; end: 104be0ccb;  */

void FUN_104be0c30(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001002921c4();
  FUN_104be0ccc();
  FUN_104be0d24(param_1 + 0x20,unaff_x20 + 0x20);
  func_0x00010028af84(unaff_x19 + 0x40,unaff_x20 + 0x40);
  FUN_104be0d7c(unaff_x19 + 0x60,unaff_x20 + 0x60);
  *(undefined8 *)(unaff_x19 + 0x98) = *(undefined8 *)(unaff_x20 + 0x98);
  func_0x00010054f8dc(unaff_x19 + 0xa0,unaff_x20 + 0xa0);
  *(undefined8 *)(unaff_x19 + 0xb8) = *(undefined8 *)(unaff_x20 + 0xb8);
  return;
}



/* Entry: 104be0ccc; end: 104be0cf7;  */

void FUN_104be0ccc(void)

{
  func_0x00010028af74();
  FUN_104be0cf8();
  return;
}



/* Entry: 104be0cf8; end: 104be0d0b;  */

void FUN_104be0cf8(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    func_0x00010054f8dc();
    func_0x00010028b5dc();
    return;
  }
  return;
}



/* Entry: 104be0d0c; end: 104be0d23;  */

void FUN_104be0d0c(void)

{
  func_0x00010054f8dc();
  func_0x00010028b5dc();
  return;
}



/* Entry: 104be0d24; end: 104be0d4f;  */

void FUN_104be0d24(void)

{
  func_0x00010028af74();
  FUN_104be0d50();
  return;
}



/* Entry: 104be0d50; end: 104be0d63;  */

void FUN_104be0d50(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    func_0x00010054f8dc();
    func_0x00010028b5dc();
    return;
  }
  return;
}



/* Entry: 104be0d64; end: 104be0d7b;  */

void FUN_104be0d64(void)

{
  func_0x00010054f8dc();
  func_0x00010028b5dc();
  return;
}



/* Entry: 104be0d7c; end: 104be0dab;  */

void FUN_104be0d7c(long param_1)

{
  func_0x00010066dd44();
  *(undefined1 *)(param_1 + 0x30) = 0;
  FUN_104be0dac();
  return;
}



/* Entry: 104be0dac; end: 104be0dbf;  */

void FUN_104be0dac(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_104be0ddc();
    *(undefined1 *)(param_1 + 0x30) = 1;
    return;
  }
  return;
}



/* Entry: 104be0dc0; end: 104be0ddb;  */

void FUN_104be0dc0(long param_1)

{
  FUN_104be0ddc();
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}



/* Entry: 104be0ddc; end: 104be0e13;  */

void FUN_104be0ddc(long param_1)

{
  long unaff_x20;
  
  func_0x0001002921c4();
  func_0x00010054f8dc();
  func_0x00010054f8dc(param_1 + 0x18,unaff_x20 + 0x18);
  return;
}



/* Entry: 104be0e14; end: 104be0e5b;  */

/* WARNING: Possible PIC construction at 0x000104be0e28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104be0e2c) */
/* WARNING: Removing unreachable block (ram,0x00010067223c) */

long FUN_104be0e14(long param_1)

{
  long lStack_48;
  
  lStack_48 = param_1 + 0x18;
  func_0x000100100fd4(&lStack_48);
  return param_1 + 0x18;
}



/* Entry: 104be0e5c; end: 104be0eaf;  */

void FUN_104be0e5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  func_0x000100292158();
  if (param_4 != 0) {
    func_0x000100658020();
    FUN_104be0eb0();
    func_0x000100658070(param_1);
    FUN_104be0edc();
  }
  func_0x000100292240();
  func_0x000104be1020();
  return;
}



/* Entry: 104be0eb0; end: 104be0edb;  */

void FUN_104be0eb0(long param_1)

{
  undefined1 in_CY;
  long unaff_x19;
  
  func_0x0001006566c4();
  if ((bool)in_CY) {
    FUN_104be0f08();
    func_0x000100658080();
    param_1 = param_1 + 0x10;
    func_0x000104be0f54();
    *(long *)(unaff_x19 + 8) = param_1;
  }
  else {
    func_0x00010002b94c();
    FUN_104be0f14();
    func_0x00010065805c();
  }
  return;
}



/* Entry: 104be0edc; end: 104be0f07;  */

void FUN_104be0edc(long param_1)

{
  long unaff_x19;
  
  func_0x000100658080();
  param_1 = param_1 + 0x10;
  func_0x000104be0f54();
  *(long *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 104be0f08; end: 104be0f13;  */

void FUN_104be0f08(void)

{
  func_0x000104be61f0();
  FUN_104be0f34();
  return;
}



/* Entry: 104be0f14; end: 104be0f33;  */

void FUN_104be0f14(void)

{
  FUN_104be0f34();
  return;
}



/* Entry: 104be0f34; end: 104be0f67;  */

void FUN_104be0f34(undefined8 param_1,long param_2)

{
  undefined1 in_CY;
  
  func_0x0001006566c4();
  if (!(bool)in_CY) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x18);
    return;
  }
  FUN_104bd35f4();
  FUN_104be0f68();
  return;
}



/* Entry: 104be0f68; end: 104be0fb3;  */

void FUN_104be0f68(void)

{
  long unaff_x19;
  long unaff_x21;
  
  func_0x0001006580b8();
  while (unaff_x21 != unaff_x19) {
    func_0x000100658140();
    func_0x00010065814c();
  }
  func_0x000100658160();
  FUN_104be0fb4();
  return;
}



/* Entry: 104be0fb4; end: 104be0fe3;  */

long FUN_104be0fb4(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_104be0fe4(param_1);
  }
  return param_1;
}



/* Entry: 104be0fe4; end: 104be0ff3;  */

void FUN_104be0fe4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  func_0x000104be6598();
  while (param_3 != param_5) {
    func_0x00010065ae00();
  }
  return;
}



/* Entry: 104be0ff4; end: 104be1047;  */

void FUN_104be0ff4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    func_0x00010065ae00();
  }
  return;
}



/* Entry: 104be1048; end: 104be104f;  */

void FUN_104be1048(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x00010065adc4(param_1,*param_1);
  while (param_1 != unaff_x19) {
    func_0x00010065ae00();
  }
  *(undefined8 **)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 104be1050; end: 104be107b;  */

void FUN_104be1050(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010065adc4();
  while (param_1 != unaff_x19) {
    func_0x00010065ae00();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 104be107c; end: 104be10a7;  */

void FUN_104be107c(void)

{
  func_0x00010028af74();
  FUN_104be10a8();
  return;
}



/* Entry: 104be10a8; end: 104be10bb;  */

void FUN_104be10a8(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    FUN_104be10d4();
    func_0x00010028b5dc();
    return;
  }
  return;
}



/* Entry: 104be10bc; end: 104be10d3;  */

void FUN_104be10bc(void)

{
  FUN_104be10d4();
  func_0x00010028b5dc();
  return;
}



/* Entry: 104be10d4; end: 104be10ff;  */

void FUN_104be10d4(void)

{
  func_0x00010054f8c8();
  FUN_104be1100();
  return;
}



/* Entry: 104be1100; end: 104be115f;  */

void FUN_104be1100(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  
  func_0x000100292158();
  if (param_4 != 0) {
    func_0x0001002921c4();
    FUN_104be1160(param_1,param_4);
    lVar1 = *(long *)(unaff_x19 + 8);
    if (param_3 - unaff_x20 != 0) {
      func_0x0001002921d0();
    }
    *(long *)(unaff_x19 + 8) = lVar1 + (param_3 - unaff_x20);
  }
  func_0x000100292240();
  FUN_104be11a0();
  return;
}



/* Entry: 104be1160; end: 104be1193;  */

void FUN_104be1160(long param_1,ulong param_2)

{
  ulong extraout_x8;
  long *unaff_x19;
  
  if (param_2 >> 0x3e == 0) {
    func_0x00010002b94c();
    func_0x0001006b64dc();
    *unaff_x19 = param_1;
    unaff_x19[1] = param_1;
    unaff_x19[2] = param_1 + param_2 * 4;
    return;
  }
  FUN_104be1194();
  func_0x000104be61f0();
  func_0x00010002b9f0();
  if ((extraout_x8 & 1) == 0) {
    func_0x0001006b6dd8();
  }
  return;
}



/* Entry: 104be1194; end: 104be119f;  */

void FUN_104be1194(void)

{
  uint extraout_w8;
  
  func_0x000104be61f0();
  func_0x00010002b9f0();
  if ((extraout_w8 & 1) == 0) {
    func_0x0001006b6dd8();
  }
  return;
}



/* Entry: 104be11a0; end: 104be11c7;  */

void FUN_104be11a0(void)

{
  uint extraout_w8;
  
  func_0x00010002b9f0();
  if ((extraout_w8 & 1) == 0) {
    func_0x0001006b6dd8();
  }
  return;
}



/* Entry: 104be11c8; end: 104be11e3;  */

void FUN_104be11c8(long param_1)

{
  FUN_104be11e4();
  *(undefined1 *)(param_1 + 0x50) = 1;
  return;
}



/* Entry: 104be11e4; end: 104be1233;  */

void FUN_104be11e4(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0001002921c4();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(unaff_x20 + 0x18);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_1 + 0x20,unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined1 *)(unaff_x19 + 0x48) = *(undefined1 *)(unaff_x20 + 0x48);
  *(undefined8 *)(unaff_x19 + 0x40) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x38) = uVar1;
  return;
}



/* Entry: 104be1234; end: 104be125b;  */

void FUN_104be1234(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 104be125c; end: 104be1273;  */

void FUN_104be125c(void)

{
  func_0x00010054f8dc();
  func_0x00010028b5dc();
  return;
}



/* Entry: 104be1274; end: 104be12c3;  */

void FUN_104be1274(void)

{
  func_0x000100292090();
  func_0x000104be1298();
  return;
}



/* Entry: 104be12c4; end: 104be12cb;  */

void FUN_104be12c4(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x00010065adc4(param_1,*param_1);
  while (param_1 != unaff_x19) {
    func_0x0001006d4274();
  }
  *(undefined8 **)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 104be12cc; end: 104be131f;  */

void FUN_104be12cc(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010065adc4();
  while (param_1 != unaff_x19) {
    func_0x0001006d4274();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 104be1320; end: 104be133f;  */

void FUN_104be1320(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_104be1340();
  }
  return;
}



/* Entry: 104be1340; end: 104be138f;  */

void FUN_104be1340(void)

{
  func_0x000100292090();
  func_0x000104be1364();
  return;
}



/* Entry: 104be1390; end: 104be1397;  */

void FUN_104be1390(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x00010065adc4(param_1,*param_1);
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -5;
    FUN_104be13c8();
  }
  *(undefined8 **)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 104be1398; end: 104be13c7;  */

void FUN_104be1398(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010065adc4();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x28;
    FUN_104be13c8();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 104be13c8; end: 104be1407;  */

void FUN_104be13c8(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    func_0x0001005fb56c();
  }
  return;
}



/* Entry: 104be1408; end: 104be140f;  */

void FUN_104be1408(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x00010065adc4(param_1,*param_1);
  while (param_1 != unaff_x19) {
    func_0x0001006d4274();
  }
  *(undefined8 **)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 104be1410; end: 104be143b;  */

void FUN_104be1410(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010065adc4();
  while (param_1 != unaff_x19) {
    func_0x0001006d4274();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 104be143c; end: 104be1443;  */

void FUN_104be143c(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x00010065adc4(param_1,*param_1);
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0xc;
    func_0x000104be1474();
  }
  *(undefined8 **)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 104be1444; end: 104be14eb;  */

void FUN_104be1444(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010065adc4();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x60;
    func_0x000104be1474();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 104be14ec; end: 104be14ff;  */

void FUN_104be14ec(undefined8 *param_1)

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



/* Entry: 104be1500; end: 104be151f;  */

void FUN_104be1500(long param_1)

{
  if (*(char *)(param_1 + 0x228) == '\x01') {
    FUN_104be1520();
  }
  return;
}



/* Entry: 104be1520; end: 104be15e3;  */

/* WARNING: Possible PIC construction at 0x000104be1564: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104be1568) */
/* WARNING: Removing unreachable block (ram,0x00010067223c) */

long FUN_104be1520(long param_1)

{
  long lStack_48;
  
  func_0x00010069aadc(param_1 + 0x1c0);
  func_0x00010069b138(param_1 + 0x198);
  func_0x00010069b1d4(param_1 + 0x168);
  func_0x00010069b1f4(param_1 + 0x100);
  func_0x0001005fb56c(param_1 + 0xe8);
  func_0x0001001148fc(param_1 + 200);
  lStack_48 = param_1 + 0xa0;
  func_0x000100100fd4(&lStack_48);
  return param_1 + 0xa0;
}


