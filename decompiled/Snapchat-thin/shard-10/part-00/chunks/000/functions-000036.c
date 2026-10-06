/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107391120; end: 10739113b;  */

void FUN_107391120(void)

{
  func_0x000107392450();
  return;
}



/* Entry: 10739113c; end: 1073911a7;  */

void FUN_10739113c(void)

{
  long extraout_x8;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107392400();
  if (extraout_x8 != 0) {
    do {
      func_0x000107392388();
    } while (extraout_w10 != 0);
  }
  func_0x0001073926dc();
  _memcpy();
  func_0x000107282f0c(unaff_x19 + 0xa0,unaff_x20 + 0xa0);
  func_0x000104c2fe00(unaff_x19 + 0x148,unaff_x20 + 0x148);
  func_0x000104c2fe00(unaff_x19 + 0x180,unaff_x20 + 0x180);
  *(undefined1 *)(unaff_x19 + 0x1b8) = *(undefined1 *)(unaff_x20 + 0x1b8);
  return;
}



/* Entry: 1073911a8; end: 10739120f;  */

undefined8 * FUN_1073911a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a8520;
  FUN_10738f5b0(param_1 + 5);
  func_0x0001072bc968(param_1 + 2);
  return param_1;
}



/* Entry: 107391210; end: 107391223;  */

void FUN_107391210(void)

{
  func_0x0001073911e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107391224; end: 10739125b;  */

undefined8 FUN_107391224(void)

{
  undefined8 uVar1;
  
  uVar1 = 0xb0;
  __Znwm(0xb0);
  FUN_107391350();
  return uVar1;
}



/* Entry: 10739125c; end: 10739127f;  */

void FUN_10739125c(long param_1,undefined8 param_2)

{
  func_0x000107392488(param_2,param_1 + 8);
  func_0x00010739236c(&PTR_SUB_1109a8560);
  func_0x000107392574();
  FUN_107390e9c();
  return;
}



/* Entry: 107391280; end: 10739131b;  */

void FUN_107391280(int param_1)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x000107392460();
  func_0x0001073924ac();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(unaff_x19 + 0x20);
    func_0x00010724ef84(auStack_38,unaff_x19 + 0x40);
    func_0x00010724ef84(auStack_50,unaff_x19 + 0x78);
    func_0x00010727b59c(uVar1,unaff_x19 + 0x30,auStack_38,auStack_50);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_50);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
  }
  func_0x0001073924f8();
  return;
}



/* Entry: 10739131c; end: 107391343;  */

void FUN_10739131c(undefined8 param_1)

{
  func_0x0001073924c0();
  func_0x000107392440(param_1,&PTR_DAT_1109a85c0);
  func_0x000107392398();
  return;
}



/* Entry: 107391344; end: 10739134f;  */

undefined ** FUN_107391344(void)

{
  return &PTR_DAT_1109a85c0;
}



/* Entry: 107391350; end: 10739138b;  */

void FUN_107391350(void)

{
  func_0x000107392488();
  func_0x00010739236c(&PTR_SUB_1109a8560);
  func_0x000107392574();
  FUN_107390e9c();
  return;
}



/* Entry: 10739138c; end: 1073913b7;  */

undefined8 * FUN_10739138c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a85e0;
  FUN_107390d24(param_1 + 1);
  return param_1;
}



/* Entry: 1073913b8; end: 1073913cb;  */

void FUN_1073913b8(void)

{
  FUN_10739138c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073913cc; end: 1073913ff;  */

undefined8 FUN_1073913cc(undefined8 param_1)

{
  func_0x0001073925d0();
  FUN_107391580();
  return param_1;
}



/* Entry: 107391400; end: 107391423;  */

void FUN_107391400(long param_1,undefined8 param_2)

{
  func_0x000107392488(param_2,param_1 + 8);
  func_0x00010739236c(&PTR_FUN_1109a85e0);
  func_0x000107392574();
  FUN_107390f7c();
  return;
}



/* Entry: 107391424; end: 1073914d7;  */

void FUN_107391424(int param_1)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined1 auStack_48 [32];
  undefined8 uStack_28;
  
  func_0x0001073923ec();
  uStack_28 = extraout_x8;
  func_0x0001073923e0();
  func_0x0001073924ac();
  if (param_1 != 0) {
    func_0x0001073926fc();
    if ((bool)in_ZR) {
      func_0x0001073925f8();
    }
    func_0x000107392554();
    func_0x0001073926e8(auStack_48);
    func_0x000107392598();
    func_0x00010739252c();
    func_0x0001073925c8();
  }
  func_0x000107392470();
  func_0x0001073923a8(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107392514();
  func_0x0001073925c8();
  func_0x000107392470();
  func_0x000107392448();
  func_0x0001073924c0();
  func_0x000107392440();
  func_0x000107392398();
  return;
}



/* Entry: 1073914d8; end: 1073914ff;  */

void FUN_1073914d8(undefined8 param_1)

{
  func_0x0001073924c0();
  func_0x000107392440(param_1,&PTR_DAT_1109a86c0);
  func_0x000107392398();
  return;
}



/* Entry: 107391500; end: 10739150b;  */

undefined ** FUN_107391500(void)

{
  return &PTR_DAT_1109a86c0;
}



/* Entry: 10739150c; end: 10739157f;  */

void FUN_10739150c(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107392488();
  _memcpy();
  lVar1 = *(long *)(unaff_x20 + 0x80);
  if (lVar1 == 0) {
    *(undefined8 *)(unaff_x19 + 0x80) = 0;
  }
  else if (lVar1 == unaff_x20 + 0x68) {
    *(long *)(unaff_x19 + 0x80) = unaff_x19 + 0x68;
    (**(code **)(**(long **)(unaff_x20 + 0x80) + 0x18))();
  }
  else {
    *(long *)(unaff_x19 + 0x80) = lVar1;
    *(undefined8 *)(unaff_x20 + 0x80) = 0;
  }
  func_0x000105302f48(unaff_x19 + 0x88,unaff_x20 + 0x88);
  return;
}



/* Entry: 107391580; end: 1073915bb;  */

void FUN_107391580(void)

{
  func_0x000107392488();
  func_0x00010739236c(&PTR_FUN_1109a85e0);
  func_0x000107392574();
  FUN_107390f7c();
  return;
}



/* Entry: 1073915bc; end: 1073915c3;  */

void FUN_1073915bc(void)

{
  return;
}



/* Entry: 1073915c4; end: 1073915e3;  */

void FUN_1073915c4(undefined8 *param_1)

{
  func_0x0001073926b0();
  *param_1 = &PTR_FUN_1109a8650;
  return;
}



/* Entry: 1073915e4; end: 107391603;  */

void FUN_1073915e4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_1109a8650;
  return;
}



/* Entry: 107391604; end: 10739162b;  */

void FUN_107391604(undefined8 param_1)

{
  func_0x0001073924c0();
  func_0x000107392440(param_1,&PTR_DAT_1109a86b0);
  func_0x000107392398();
  return;
}



/* Entry: 10739162c; end: 107391637;  */

undefined ** FUN_10739162c(void)

{
  return &PTR_DAT_1109a86b0;
}



/* Entry: 107391638; end: 107391663;  */

undefined8 * FUN_107391638(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a86e0;
  func_0x000107390d60(param_1 + 1);
  return param_1;
}



/* Entry: 107391664; end: 107391677;  */

void FUN_107391664(void)

{
  FUN_107391638();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107391678; end: 1073916a7;  */

undefined8 FUN_107391678(undefined8 param_1)

{
  func_0x0001073924d8();
  FUN_107391864();
  return param_1;
}



/* Entry: 1073916a8; end: 1073916cb;  */

void FUN_1073916a8(long param_1,undefined8 param_2)

{
  func_0x000107392488(param_2,param_1 + 8);
  func_0x00010739236c(&PTR_FUN_1109a86e0);
  func_0x000107392574();
  FUN_107390fbc();
  return;
}



/* Entry: 1073916cc; end: 10739174f;  */

void FUN_1073916cc(int param_1)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long unaff_x19;
  undefined8 uVar1;
  undefined1 auStack_168 [136];
  undefined1 auStack_e0 [168];
  undefined8 uStack_38;
  
  func_0x0001073923ec();
  uStack_38 = extraout_x8;
  func_0x0001073923e0();
  func_0x0001073924ac();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(unaff_x19 + 0x20);
    func_0x000107392478();
    func_0x000107392694();
    FUN_10740e24c(uVar1,auStack_168,auStack_e0);
    func_0x0001073925a8();
  }
  func_0x000107392470();
  func_0x0001073923a8(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001073925a8();
  func_0x000107392470();
  func_0x000107392448();
  func_0x0001073924c0();
  func_0x000107392440();
  func_0x000107392398();
  return;
}



/* Entry: 107391750; end: 107391777;  */

void FUN_107391750(undefined8 param_1)

{
  func_0x0001073924c0();
  func_0x000107392440(param_1,&PTR_DAT_1109a8740);
  func_0x000107392398();
  return;
}



/* Entry: 107391778; end: 107391783;  */

undefined ** FUN_107391778(void)

{
  return &PTR_DAT_1109a8740;
}



/* Entry: 107391784; end: 107391863;  */

undefined8 * FUN_107391784(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000104c318bc(param_1 + 1,param_2 + 8);
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  param_1[8] = uVar1;
  func_0x00010733a9ec(param_1 + 10,param_2 + 0x50);
  uVar2 = *(undefined8 *)(param_2 + 0x70);
  uVar1 = *(undefined8 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0x78);
  param_1[0xe] = uVar2;
  param_1[0xd] = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x7c);
  *(undefined4 *)((long)param_1 + 0x84) = *(undefined4 *)(param_2 + 0x84);
  *(undefined8 *)((long)param_1 + 0x7c) = uVar1;
  param_1[0x11] = *(undefined8 *)(param_2 + 0x88);
  param_1[0x12] = *(undefined8 *)(param_2 + 0x90);
  param_1[0x13] = *(undefined8 *)(param_2 + 0x98);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined8 *)((long)param_1 + 0xa4) = *(undefined8 *)(param_2 + 0xa4);
  uVar2 = *(undefined8 *)(param_2 + 0xb4);
  uVar1 = *(undefined8 *)(param_2 + 0xac);
  *(undefined8 *)((long)param_1 + 0xbc) = *(undefined8 *)(param_2 + 0xbc);
  *(undefined8 *)((long)param_1 + 0xb4) = uVar2;
  *(undefined8 *)((long)param_1 + 0xac) = uVar1;
  *(undefined8 *)((long)param_1 + 0xc4) = *(undefined8 *)(param_2 + 0xc4);
  *(undefined8 *)((long)param_1 + 0xcc) = *(undefined8 *)(param_2 + 0xcc);
  func_0x000104c318bc(param_1 + 0x1b,param_2 + 0xd8);
  func_0x000104c318bc(param_1 + 0x22,param_2 + 0x110);
  *(undefined1 *)(param_1 + 0x29) = *(undefined1 *)(param_2 + 0x148);
  *param_1 = &PTR_DAT_1109a1d20;
  return param_1;
}



/* Entry: 107391864; end: 10739189f;  */

void FUN_107391864(void)

{
  func_0x000107392488();
  func_0x00010739236c(&PTR_FUN_1109a86e0);
  func_0x000107392574();
  FUN_107390fbc();
  return;
}



/* Entry: 1073918a0; end: 1073918cb;  */

undefined8 * FUN_1073918a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a8760;
  func_0x000107390d7c(param_1 + 1);
  return param_1;
}



/* Entry: 1073918cc; end: 1073918df;  */

void FUN_1073918cc(void)

{
  FUN_1073918a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073918e0; end: 107391907;  */

long FUN_1073918e0(void)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)0xb8;
  __Znwm();
  func_0x000107392488();
  *puVar1 = &PTR_FUN_1109a8760;
  FUN_10738f77c(puVar1 + 1);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x19 + 0x28) = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x19 + 0x20) = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000107392388();
    } while (extraout_w10 != 0);
  }
  func_0x000107392494(unaff_x19 + 0x30,unaff_x20 + 0x28);
  return unaff_x19;
}



/* Entry: 107391908; end: 10739192b;  */

void FUN_107391908(long param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x000107392488(param_2,param_1 + 8);
  *param_2 = &PTR_FUN_1109a8760;
  FUN_10738f77c(param_2 + 1);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x19 + 0x28) = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x19 + 0x20) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107392388();
    } while (extraout_w10 != 0);
  }
  func_0x000107392494(unaff_x19 + 0x30,unaff_x20 + 0x28);
  return;
}



/* Entry: 10739192c; end: 1073919b3;  */

void FUN_10739192c(int param_1)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long unaff_x19;
  undefined1 auStack_48 [32];
  undefined8 uStack_28;
  
  func_0x0001073923ec();
  uStack_28 = extraout_x8;
  func_0x0001073923e0();
  func_0x0001073924ac();
  if (param_1 != 0) {
    func_0x0001073926e8(auStack_48,*(undefined8 *)(unaff_x19 + 0x20));
    func_0x000107392598();
    func_0x00010739252c();
    func_0x0001073925c8();
  }
  func_0x000107392470();
  func_0x0001073923a8(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107392514();
  func_0x0001073925c8();
  func_0x000107392470();
  func_0x000107392448();
  func_0x0001073924c0();
  func_0x000107392440();
  func_0x000107392398();
  return;
}



/* Entry: 1073919b4; end: 1073919db;  */

void FUN_1073919b4(undefined8 param_1)

{
  func_0x0001073924c0();
  func_0x000107392440(param_1,&PTR_DAT_1109a8840);
  func_0x000107392398();
  return;
}



/* Entry: 1073919dc; end: 1073919e7;  */

undefined ** FUN_1073919dc(void)

{
  return &PTR_DAT_1109a8840;
}



/* Entry: 1073919e8; end: 107391a3b;  */

void FUN_1073919e8(undefined8 *param_1)

{
  long lVar1;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x000107392488();
  *param_1 = &PTR_FUN_1109a8760;
  FUN_10738f77c(param_1 + 1);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x19 + 0x28) = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x19 + 0x20) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107392388();
    } while (extraout_w10 != 0);
  }
  func_0x000107392494(unaff_x19 + 0x30,unaff_x20 + 0x28);
  return;
}



/* Entry: 107391a3c; end: 107391a43;  */

void FUN_107391a3c(void)

{
  return;
}



/* Entry: 107391a44; end: 107391a63;  */

void FUN_107391a44(undefined8 *param_1)

{
  func_0x0001073926b0();
  *param_1 = &PTR_FUN_1109a87d0;
  return;
}



/* Entry: 107391a64; end: 107391a83;  */

void FUN_107391a64(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_1109a87d0;
  return;
}



/* Entry: 107391a84; end: 107391aab;  */

void FUN_107391a84(undefined8 param_1)

{
  func_0x0001073924c0();
  func_0x000107392440(param_1,&PTR_DAT_1109a8830);
  func_0x000107392398();
  return;
}



/* Entry: 107391aac; end: 107391ab7;  */

undefined ** FUN_107391aac(void)

{
  return &PTR_DAT_1109a8830;
}



/* Entry: 107391ab8; end: 107391ae3;  */

undefined8 * FUN_107391ab8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a8860;
  func_0x000107390d9c(param_1 + 1);
  return param_1;
}



/* Entry: 107391ae4; end: 107391af7;  */

void FUN_107391ae4(void)

{
  FUN_107391ab8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107391af8; end: 107391b27;  */

undefined8 FUN_107391af8(undefined8 param_1)

{
  func_0x0001073924d8();
  FUN_107391bd4();
  return param_1;
}



/* Entry: 107391b28; end: 107391b4b;  */

void FUN_107391b28(long param_1,undefined8 param_2)

{
  func_0x000107392488(param_2,param_1 + 8);
  func_0x00010739236c(&PTR_FUN_1109a8860);
  func_0x000107392574();
  FUN_1073910c4();
  return;
}



/* Entry: 107391b4c; end: 107391b9f;  */

void FUN_107391b4c(long param_1)

{
  int iVar1;
  undefined8 uVar3;
  undefined1 auStack_a8 [136];
  long lVar2;
  
  lVar2 = param_1;
  func_0x0001073923e0();
  iVar1 = (int)lVar2;
  func_0x0001073924ac();
  if (iVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107392478();
    FUN_10740e218(uVar3,auStack_a8);
  }
  func_0x000107392470();
  return;
}



/* Entry: 107391ba0; end: 107391bc7;  */

void FUN_107391ba0(undefined8 param_1)

{
  func_0x0001073924c0();
  func_0x000107392440(param_1,&PTR_DAT_1109a88c0);
  func_0x000107392398();
  return;
}



/* Entry: 107391bc8; end: 107391bd3;  */

undefined ** FUN_107391bc8(void)

{
  return &PTR_DAT_1109a88c0;
}



/* Entry: 107391bd4; end: 107391c0f;  */

void FUN_107391bd4(void)

{
  func_0x000107392488();
  func_0x00010739236c(&PTR_FUN_1109a8860);
  func_0x000107392574();
  FUN_1073910c4();
  return;
}



/* Entry: 107391c10; end: 107391c3b;  */

undefined8 * FUN_107391c10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a88e0;
  func_0x000107390db8(param_1 + 1);
  return param_1;
}



/* Entry: 107391c3c; end: 107391c4f;  */

void FUN_107391c3c(void)

{
  FUN_107391c10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107391c50; end: 107391c83;  */

undefined8 FUN_107391c50(undefined8 param_1)

{
  func_0x0001073925d0();
  FUN_107391dd0();
  return param_1;
}



/* Entry: 107391c84; end: 107391ca7;  */

void FUN_107391c84(long param_1,undefined8 param_2)

{
  func_0x000107392488(param_2,param_1 + 8);
  func_0x00010739236c(&PTR_FUN_1109a88e0);
  func_0x000107392574();
  FUN_1073910e0();
  return;
}



/* Entry: 107391ca8; end: 107391d9b;  */

void FUN_107391ca8(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long unaff_x19;
  undefined7 uStack_148;
  undefined1 uStack_141;
  undefined7 uStack_140;
  undefined1 auStack_138 [8];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_118;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 uStack_f8;
  undefined8 uStack_f7;
  undefined8 uStack_ef;
  undefined1 uStack_e0;
  undefined4 uStack_50;
  undefined **appuStack_48 [3];
  undefined ***pppuStack_30;
  undefined8 uStack_28;
  
  func_0x0001073923ec();
  uStack_28 = extraout_x8;
  func_0x0001073923e0();
  func_0x0001073924ac();
  if (param_4 != 0) {
    func_0x0001073926fc();
    if ((bool)in_ZR) {
      func_0x0001073925f8();
    }
    func_0x000107392554();
    uStack_100 = *(undefined8 *)(extraout_x8_00 + 0x28);
    uStack_108 = *(undefined8 *)(extraout_x8_00 + 0x20);
    uStack_141 = (undefined1)*(undefined8 *)(unaff_x19 + 0xd8);
    uStack_140 = (undefined7)((ulong)*(undefined8 *)(unaff_x19 + 0xd8) >> 8);
    uStack_f8 = 0;
    uStack_ef = CONCAT17(*(undefined1 *)(unaff_x19 + 0xe0),uStack_140);
    uStack_f7 = CONCAT17(uStack_141,uStack_148);
    uStack_e0 = 1;
    uStack_50 = 1;
    pppuStack_30 = appuStack_48;
    appuStack_48[0] = &PTR_FUN_1109a8950;
    uStack_130 = param_1;
    uStack_128 = param_2;
    uStack_118 = param_3;
    func_0x00010727ac8c();
    func_0x00010739252c();
    func_0x000107283610(auStack_138);
  }
  func_0x000107392470();
  func_0x0001073923a8(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107392514();
  func_0x000107283610(auStack_138);
  func_0x000107392470();
  func_0x000107392448();
  func_0x0001073924c0();
  func_0x000107392440();
  func_0x000107392398();
  return;
}



/* Entry: 107391d9c; end: 107391dc3;  */

void FUN_107391d9c(undefined8 param_1)

{
  func_0x0001073924c0();
  func_0x000107392440(param_1,&PTR_DAT_1109a89c0);
  func_0x000107392398();
  return;
}



/* Entry: 107391dc4; end: 107391dcf;  */

undefined ** FUN_107391dc4(void)

{
  return &PTR_DAT_1109a89c0;
}



/* Entry: 107391dd0; end: 107391e0b;  */

void FUN_107391dd0(void)

{
  func_0x000107392488();
  func_0x00010739236c(&PTR_FUN_1109a88e0);
  func_0x000107392574();
  FUN_1073910e0();
  return;
}



/* Entry: 107391e0c; end: 107391e13;  */

void FUN_107391e0c(void)

{
  return;
}



/* Entry: 107391e14; end: 107391e33;  */

void FUN_107391e14(undefined8 *param_1)

{
  func_0x0001073926b0();
  *param_1 = &PTR_FUN_1109a8950;
  return;
}



/* Entry: 107391e34; end: 107391e53;  */

void FUN_107391e34(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_1109a8950;
  return;
}



/* Entry: 107391e54; end: 107391e7b;  */

void FUN_107391e54(undefined8 param_1)

{
  func_0x0001073924c0();
  func_0x000107392440(param_1,&PTR_DAT_1109a89b0);
  func_0x000107392398();
  return;
}



/* Entry: 107391e7c; end: 107391e87;  */

undefined ** FUN_107391e7c(void)

{
  return &PTR_DAT_1109a89b0;
}



/* Entry: 107391e88; end: 107391eb3;  */

undefined8 * FUN_107391e88(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a89e0;
  func_0x000107390df4(param_1 + 1);
  return param_1;
}



/* Entry: 107391eb4; end: 107391ec7;  */

void FUN_107391eb4(void)

{
  FUN_107391e88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107391ec8; end: 107391ef7;  */

undefined8 FUN_107391ec8(undefined8 param_1)

{
  func_0x0001073924d8();
  FUN_107391fd4();
  return param_1;
}



/* Entry: 107391ef8; end: 107391f1b;  */

void FUN_107391ef8(long param_1,undefined8 param_2)

{
  func_0x000107392488(param_2,param_1 + 8);
  func_0x00010739236c(&PTR_FUN_1109a89e0);
  func_0x000107392574();
  FUN_107391120();
  return;
}



/* Entry: 107391f1c; end: 107391f9f;  */

void FUN_107391f1c(int param_1)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long unaff_x19;
  undefined8 uVar1;
  undefined1 auStack_168 [136];
  undefined1 auStack_e0 [168];
  undefined8 uStack_38;
  
  func_0x0001073923ec();
  uStack_38 = extraout_x8;
  func_0x0001073923e0();
  func_0x0001073924ac();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(unaff_x19 + 0x20);
    func_0x000107392478();
    func_0x000107392694();
    func_0x00010740e28c(uVar1,auStack_168,auStack_e0);
    func_0x0001073925a8();
  }
  func_0x000107392470();
  func_0x0001073923a8(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001073925a8();
  func_0x000107392470();
  func_0x000107392448();
  func_0x0001073924c0();
  func_0x000107392440();
  func_0x000107392398();
  return;
}



/* Entry: 107391fa0; end: 107391fc7;  */

void FUN_107391fa0(undefined8 param_1)

{
  func_0x0001073924c0();
  func_0x000107392440(param_1,&PTR_DAT_1109a8a40);
  func_0x000107392398();
  return;
}



/* Entry: 107391fc8; end: 107391fd3;  */

undefined ** FUN_107391fc8(void)

{
  return &PTR_DAT_1109a8a40;
}



/* Entry: 107391fd4; end: 10739200f;  */

void FUN_107391fd4(void)

{
  func_0x000107392488();
  func_0x00010739236c(&PTR_FUN_1109a89e0);
  func_0x000107392574();
  FUN_107391120();
  return;
}



/* Entry: 107392010; end: 10739203b;  */

undefined8 * FUN_107392010(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a8a60;
  func_0x000107390e10(param_1 + 1);
  return param_1;
}



/* Entry: 10739203c; end: 10739204f;  */

void FUN_10739203c(void)

{
  FUN_107392010();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107392050; end: 107392077;  */

long FUN_107392050(void)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)0x88;
  __Znwm();
  func_0x000107392488();
  *puVar1 = &PTR_FUN_1109a8a60;
  FUN_10738f77c(puVar1 + 1);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x19 + 0x28) = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x19 + 0x20) = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000107392388();
    } while (extraout_w10 != 0);
  }
  _memcpy(unaff_x19 + 0x30,unaff_x20 + 0x28,0x58);
  return unaff_x19;
}



/* Entry: 107392078; end: 10739209b;  */

void FUN_107392078(long param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x000107392488(param_2,param_1 + 8);
  *param_2 = &PTR_FUN_1109a8a60;
  FUN_10738f77c(param_2 + 1);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x19 + 0x28) = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x19 + 0x20) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107392388();
    } while (extraout_w10 != 0);
  }
  _memcpy(unaff_x19 + 0x30,unaff_x20 + 0x28,0x58);
  return;
}



/* Entry: 10739209c; end: 1073920f7;  */

void FUN_10739209c(int param_1)

{
  code *pcVar1;
  long unaff_x19;
  
  func_0x000107392460();
  func_0x0001073924ac();
  if (param_1 != 0) {
    if ((*(byte *)(unaff_x19 + 0x78) & 1) == 0) {
      func_0x000104bdc2c8();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1073920ec);
      (*pcVar1)();
    }
    func_0x00010727d0e4(*(undefined8 *)(unaff_x19 + 0x20),unaff_x19 + 0x30,unaff_x19 + 0x80);
  }
  func_0x0001073924f8();
  return;
}



/* Entry: 1073920f8; end: 10739211f;  */

void FUN_1073920f8(undefined8 param_1)

{
  func_0x0001073924c0();
  func_0x000107392440(param_1,&PTR_DAT_1109a8ac0);
  func_0x000107392398();
  return;
}



/* Entry: 107392120; end: 10739212b;  */

undefined ** FUN_107392120(void)

{
  return &PTR_DAT_1109a8ac0;
}



/* Entry: 10739212c; end: 1073921af;  */

void FUN_10739212c(undefined8 *param_1)

{
  long lVar1;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x000107392488();
  *param_1 = &PTR_FUN_1109a8a60;
  FUN_10738f77c(param_1 + 1);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x19 + 0x28) = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x19 + 0x20) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107392388();
    } while (extraout_w10 != 0);
  }
  _memcpy(unaff_x19 + 0x30,unaff_x20 + 0x28,0x58);
  return;
}



/* Entry: 1073921b0; end: 1073921c3;  */

void FUN_1073921b0(void)

{
  func_0x000107392184();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073921c4; end: 1073921fb;  */

undefined8 FUN_1073921c4(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x1e0;
  __Znwm(0x1e0);
  FUN_107392330();
  return uVar1;
}



/* Entry: 1073921fc; end: 10739221f;  */

void FUN_1073921fc(long param_1,undefined8 param_2)

{
  func_0x000107392488(param_2,param_1 + 8);
  func_0x00010739236c(&PTR_SUB_1109a8ae0);
  func_0x000107392574();
  FUN_10739113c();
  return;
}



/* Entry: 107392220; end: 1073922fb;  */

void FUN_107392220(int param_1)

{
  undefined1 *puVar1;
  long unaff_x19;
  undefined8 uVar2;
  undefined1 auStack_180 [136];
  undefined1 auStack_f8 [136];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107392460();
  func_0x0001073924ac();
  if (param_1 != 0) {
    uVar2 = *(undefined8 *)(unaff_x19 + 0x20);
    func_0x00010724ef84(auStack_58,unaff_x19 + 0x168);
    func_0x00010724ef84(auStack_70,unaff_x19 + 0x1a0);
    _bzero(auStack_180,0x88);
    puVar1 = (undefined1 *)(unaff_x19 + 0x30);
    if (*(char *)(unaff_x19 + 0xb8) == '\0') {
      puVar1 = auStack_180;
    }
    func_0x000107392494(auStack_f8,puVar1);
    func_0x00010727b650(uVar2,auStack_58,auStack_70,unaff_x19 + 0x1d8,auStack_f8,unaff_x19 + 0xc0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_70);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  }
  func_0x0001073924f8();
  return;
}



/* Entry: 1073922fc; end: 107392323;  */

void FUN_1073922fc(undefined8 param_1)

{
  func_0x0001073924c0();
  func_0x000107392440(param_1,&PTR_DAT_1109a8b40);
  func_0x000107392398();
  return;
}



/* Entry: 107392324; end: 10739232f;  */

undefined ** FUN_107392324(void)

{
  return &PTR_DAT_1109a8b40;
}



/* Entry: 107392330; end: 10739236b;  */

void FUN_107392330(void)

{
  func_0x000107392488();
  func_0x00010739236c(&PTR_SUB_1109a8ae0);
  func_0x000107392574();
  FUN_10739113c();
  return;
}



/* Entry: 10739236c; end: 10739270f;  */

void FUN_10739236c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_2 = param_1;
  lVar4 = param_3[1];
  uVar5 = *param_3;
  param_2[2] = param_3[1];
  param_2[1] = uVar5;
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
  param_2[3] = param_3[2];
  return;
}



/* Entry: 107392710; end: 10739278f;  */

void FUN_107392710(long param_1,undefined8 *param_2)

{
  undefined8 extraout_x8;
  long lVar1;
  undefined8 *puVar2;
  int extraout_w10;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  
  func_0x000107393130();
  *unaff_x20 = extraout_x8;
  uVar3 = *param_2;
  *(undefined8 *)(param_1 + 0x10) = param_2[1];
  *(undefined8 *)(param_1 + 8) = uVar3;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1073af260();
  func_0x00010725b034(unaff_x20 + 3);
  *(long *)(unaff_x19 + 0x28) = unaff_x19;
  puVar2 = *(undefined8 **)(unaff_x19 + 0x18);
  lVar1 = puVar2[1];
  uVar3 = *puVar2;
  *(undefined8 *)(unaff_x19 + 0x38) = puVar2[1];
  *(undefined8 *)(unaff_x19 + 0x30) = uVar3;
  if (lVar1 != 0) {
    do {
      func_0x0001073930dc();
    } while (extraout_w10 != 0);
  }
  *(undefined8 **)(unaff_x19 + 0x40) = unaff_x20 + 3;
  *(undefined8 *)(unaff_x19 + 0x48) = 0;
  return;
}



/* Entry: 107392790; end: 107392d83;  */

long FUN_107392790(long param_1,long param_2,undefined8 **param_3,long *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 **ppuVar10;
  undefined8 *puVar11;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x20;
  undefined8 **unaff_x21;
  long unaff_x22;
  undefined8 uVar12;
  undefined8 uStack_440;
  long lStack_438;
  int iStack_430;
  byte bStack_428;
  undefined8 *puStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  byte bStack_408;
  undefined1 auStack_3f8 [16];
  undefined1 auStack_3e8 [56];
  byte bStack_3b0;
  long alStack_3a8 [7];
  undefined4 auStack_370 [2];
  double dStack_368;
  double dStack_360;
  long alStack_350 [30];
  undefined8 uStack_260;
  long lStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  char cStack_120;
  char cStack_118;
  undefined8 uStack_58;
  
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = (int)param_2 - 0xf;
  uVar6 = uVar7 == 0xfffffffe;
  if (0xfffffffd < uVar7) {
    unaff_x22 = *param_4;
    puVar9 = &uStack_260;
    func_0x000104c2fe00(puVar9,unaff_x22 + 0x40);
    uVar7 = (uint)puVar9;
    func_0x0001073930cc();
    unaff_x20 = param_2;
    unaff_x21 = param_3;
    if ((uVar7 & *(byte *)(param_3 + 2)) != 1) goto LAB_10739285c;
    if ((bRam00000001136ca2e0 & 1) == 0) goto LAB_107392c14;
    goto LAB_107392810;
  }
  param_1 = 0;
  do {
    func_0x00010739311c(uStack_58);
    if ((bool)uVar6) {
      return param_1;
    }
    ___stack_chk_fail();
    param_2 = unaff_x20;
    param_3 = unaff_x21;
LAB_107392c14:
    iVar8 = 0x136ca2e0;
    ___cxa_guard_acquire();
    if (iVar8 != 0) {
      func_0x000100060964(0x1136ca2e8,&UNK_10f40acdb);
      ___cxa_guard_release(0x1136ca2e0);
    }
LAB_107392810:
    ppuVar10 = param_3;
    func_0x000107392e34();
    (**(code **)(**ppuVar10 + 0x18))(&puStack_158,*ppuVar10,0x1136ca2e8);
    if (cStack_118 == '\x01') {
      ppuVar10 = &puStack_158;
      FUN_107392e4c(ppuVar10);
      func_0x000107262f3c(&uStack_260,ppuVar10);
    }
    uVar7 = (uint)&puStack_158;
    func_0x000107267ed0();
    unaff_x20 = param_2;
    unaff_x21 = param_3;
LAB_10739285c:
    func_0x0001073930cc();
    if (uVar7 == 0) {
      func_0x00010729d1b0(auStack_3e8,&uStack_260);
    }
    else {
      auStack_3e8[0] = 0;
      bStack_3b0 = 0;
    }
    func_0x0001073930c4();
    uVar6 = bStack_3b0 == 1;
    if ((bool)uVar6) {
      puVar9 = &uStack_260;
      func_0x000104c2fe00(puVar9,unaff_x22 + 8);
      uVar7 = (uint)puVar9;
      func_0x0001073930cc();
      if ((uVar7 & *(byte *)(unaff_x21 + 2)) == 1) {
        func_0x000107392e34();
        func_0x000107263b58(&puStack_158,(*unaff_x21)[6] + 0x128);
        if (cStack_120 == '\x01') {
          func_0x000104c2fe00(alStack_350,&puStack_158);
          func_0x000104c2f1f0(&uStack_260,alStack_350);
          func_0x000104c2f714(alStack_350);
        }
        uVar7 = (uint)&puStack_158;
        func_0x00010724b3d8();
      }
      func_0x0001073930cc();
      unaff_x21 = &puStack_158;
      if (uVar7 == 0) {
        func_0x00010724ef84(&puStack_158,&uStack_260);
        uStack_418 = uStack_150;
        puStack_420 = puStack_158;
        uStack_410 = uStack_148;
        uStack_148 = 0;
        puStack_158 = (undefined8 *)0x0;
        uStack_150 = 0;
        bStack_408 = 1;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_158);
      }
      else {
        puStack_420 = (undefined8 *)((ulong)puStack_420 & 0xffffffffffffff00);
        bStack_408 = 0;
      }
      func_0x0001073930c4();
      uVar6 = bStack_408 == 1;
      if ((bool)uVar6) {
        if ((bStack_3b0 & 1) == 0) {
          func_0x000104bdc2c8();
LAB_107392c5c:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x107392c60);
          (*pcVar5)();
        }
        (**(code **)(**(long **)(param_1 + 8) + 0x78))
                  (&uStack_440,*(long **)(param_1 + 8),auStack_3e8);
        if ((bStack_428 & 1) == 0) {
          param_1 = 0;
        }
        else {
          uVar6 = (int)unaff_x20 == 0xd;
          if ((bool)uVar6) {
            if (iStack_430 == 0) {
              if ((bStack_408 & 1) == 0) {
                func_0x000104bdc2c8();
                goto LAB_107392c5c;
              }
              func_0x00010724bb70(alStack_350,param_1 + 0x30);
              unaff_x20 = alStack_350[0];
              if (alStack_350[0] != 0) {
                unaff_x22 = *(long *)(param_1 + 0x28);
                lStack_258 = lStack_438;
                uStack_260 = uStack_440;
                if (lStack_438 != 0) {
                  do {
                    func_0x0001073930dc();
                  } while (extraout_w10 != 0);
                }
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                          (&uStack_250,&puStack_420);
                puVar11 = (undefined8 *)0x48;
                __Znwm();
                uVar4 = uStack_240;
                uVar3 = uStack_248;
                uVar2 = uStack_250;
                lVar1 = lStack_258;
                uVar12 = uStack_260;
                uStack_260 = 0;
                lStack_258 = 0;
                uStack_250 = 0;
                uStack_248 = 0;
                uStack_240 = 0;
                *puVar11 = &PTR_FUN_1109a8ba0;
                puVar11[1] = unaff_x22;
                puVar11[2] = FUN_107392d98;
                puVar11[3] = 0;
                puStack_158 = (undefined8 *)0x0;
                uStack_150 = 0;
                puVar11[5] = lVar1;
                puVar11[4] = uVar12;
                puVar11[7] = uVar3;
                puVar11[6] = uVar2;
                puVar11[8] = uVar4;
                uStack_140 = 0;
                uStack_148 = 0;
                uStack_138 = 0;
                func_0x000107392f88(&puStack_158);
                puVar9 = &uStack_260;
                puStack_158 = puVar11;
                func_0x000107392f88();
                func_0x0001073930f8();
                func_0x000107393110();
                if (puVar9 != (undefined8 *)0x0) {
                  func_0x000107393098();
                }
              }
              func_0x00010724bcd8(alStack_350);
            }
          }
          else if (iStack_430 == 0) {
            uVar12 = *(undefined8 *)(unaff_x22 + 0x78);
            func_0x000107268400(auStack_3f8,unaff_x22 + 0x80);
            dStack_368 = (double)(float)uVar12;
            dStack_360 = (double)(float)((ulong)uVar12 >> 0x20);
            auStack_370[0] = 6;
            if ((bStack_408 & 1) == 0) {
              func_0x000104bdc2c8();
              goto LAB_107392c5c;
            }
            func_0x000107262e9c(alStack_3a8,&puStack_420);
            func_0x0001072d8a90(&uStack_260,alStack_3a8);
            func_0x0001072d8ab4(&puStack_158,auStack_370,auStack_3f8,&uStack_260);
            func_0x0001072692d4(alStack_350,&puStack_158);
            func_0x000107269394(&puStack_158);
            func_0x000104c319e0(&uStack_260);
            func_0x000104c2f714(alStack_3a8);
            func_0x000104c3365c(auStack_370);
            func_0x00010724bb70(alStack_3a8,param_1 + 0x30);
            unaff_x20 = alStack_3a8[0];
            if (alStack_3a8[0] != 0) {
              unaff_x21 = *(undefined8 ***)(param_1 + 0x28);
              lStack_258 = lStack_438;
              uStack_260 = uStack_440;
              if (lStack_438 != 0) {
                do {
                  func_0x0001073930dc();
                } while (extraout_w10_00 != 0);
              }
              func_0x00010728451c(&uStack_250,alStack_350);
              puVar11 = (undefined8 *)0x120;
              __Znwm();
              func_0x000107392fb0(&puStack_158,&uStack_260);
              *puVar11 = &PTR_FUN_1109a8be0;
              puVar11[1] = unaff_x21;
              puVar11[2] = FUN_107392d84;
              puVar11[3] = 0;
              func_0x000107392fb0(puVar11 + 4,&puStack_158);
              func_0x000107393070(&puStack_158);
              puVar9 = &uStack_260;
              puStack_158 = puVar11;
              func_0x000107393070();
              func_0x0001073930f8();
              func_0x000107393110();
              if (puVar9 != (undefined8 *)0x0) {
                func_0x000107393098();
              }
            }
            func_0x00010724bcd8(alStack_3a8);
            func_0x000107269e60(alStack_350);
            func_0x000104c335c0(auStack_3f8);
          }
          param_1 = 1;
        }
        func_0x0001072b9760(&uStack_440);
      }
      else {
        param_1 = 0;
      }
      func_0x0001001148fc(&puStack_420);
    }
    else {
      param_1 = 0;
    }
    func_0x00010724b3d8(auStack_3e8);
  } while( true );
}



/* Entry: 107392d84; end: 107392d97;  */

void FUN_107392d84(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000107392d94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x10))((long *)*param_2,param_3);
  return;
}



/* Entry: 107392d98; end: 107392e1b;  */

undefined1 * FUN_107392d98(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  long *plVar3;
  undefined8 *unaff_x20;
  undefined1 auStack_60 [56];
  undefined8 uStack_28;
  
  puVar1 = auStack_60;
  puVar2 = auStack_60;
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = (long *)*param_2;
  func_0x000107262e9c(auStack_60,param_3);
  (**(code **)(*plVar3 + 0x28))(plVar3,auStack_60);
  func_0x000104c2f714();
  func_0x00010739311c(uStack_28);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x000104c2f714(auStack_60);
  func_0x0001073930a4();
  func_0x000107393130();
  *unaff_x20 = extraout_x8;
  func_0x00010725b238(puVar2 + 0x40);
  func_0x00010724ae28(puVar1 + 0x30);
  func_0x00010724b54c(puVar1 + 0x18);
  func_0x0001072aa27c(unaff_x20 + 1);
  return puVar1;
}



/* Entry: 107392e1c; end: 107392e1f;  */

void FUN_107392e1c(long param_1)

{
  undefined8 extraout_x8;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x000107393130();
  *unaff_x20 = extraout_x8;
  func_0x00010725b238(param_1 + 0x40);
  func_0x00010724ae28(unaff_x19 + 0x30);
  func_0x00010724b54c(unaff_x19 + 0x18);
  func_0x0001072aa27c(unaff_x20 + 1);
  return;
}



/* Entry: 107392e20; end: 107392e4b;  */

void FUN_107392e20(void)

{
  FUN_107392eb4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107392e4c; end: 107392e6f;  */

void FUN_107392e4c(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_107392e70(param_1,&uStack_11);
  return;
}



/* Entry: 107392e70; end: 107392eb3;  */

int * FUN_107392e70(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  if (*param_1 == 7) {
    return (int *)0x0;
  }
  iVar3 = *param_1;
  param_1 = param_1 + 2;
  if (iVar3 != 2) {
    param_1 = (int *)0x0;
  }
  piVar1 = (int *)0x0;
  if (1 < iVar3 - 3U) {
    piVar1 = param_1;
  }
  piVar2 = (int *)0x0;
  if (1 < iVar3 - 5U) {
    piVar2 = piVar1;
  }
  return piVar2;
}



/* Entry: 107392eb4; end: 107392ef3;  */

void FUN_107392eb4(long param_1)

{
  undefined8 extraout_x8;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x000107393130();
  *unaff_x20 = extraout_x8;
  func_0x00010725b238(param_1 + 0x40);
  func_0x00010724ae28(unaff_x19 + 0x30);
  func_0x00010724b54c(unaff_x19 + 0x18);
  func_0x0001072aa27c(unaff_x20 + 1);
  return;
}


