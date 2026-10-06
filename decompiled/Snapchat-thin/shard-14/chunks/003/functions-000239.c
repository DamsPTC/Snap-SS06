/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b142084; end: 10b1420bb;  */

void FUN_10b142084(void)

{
  func_0x00010b14ed14();
  func_0x00010b14f444();
  FUN_10b1420bc();
  func_0x00010b14efe4();
  func_0x00010b14f988();
  return;
}



/* Entry: 10b1420bc; end: 10b1420d7;  */

void FUN_10b1420bc(void)

{
  func_0x00010b14ff50();
  FUN_10b1420d8();
  return;
}



/* Entry: 10b1420d8; end: 10b14215f;  */

void FUN_10b1420d8(void)

{
  long unaff_x19;
  
  func_0x00010b14ede4();
  func_0x00010b14ee9c();
  FUN_10b142160();
  func_0x00010b14f55c();
  FUN_10b142188();
  func_0x00010b14fe10();
  func_0x00010b14f4fc();
  func_0x00010b14fa04();
  func_0x00010b14f1d8();
  FUN_10b1421ac();
  func_0x00010b14f064();
  if (unaff_x19 == 0) {
    func_0x00010b14f8a4();
  }
  else {
    func_0x00010b14f20c();
    func_0x00010b14ec30();
    func_0x00010b14e920();
  }
  func_0x00010b14f4c4();
  return;
}



/* Entry: 10b142160; end: 10b142187;  */

void FUN_10b142160(void)

{
  func_0x00010b14ec8c();
  func_0x00010b14f4e4();
  func_0x00010b14e948();
  func_0x00010b14eff4();
  return;
}



/* Entry: 10b142188; end: 10b1421ab;  */

void FUN_10b142188(void)

{
  func_0x00010b14e8d0();
  FUN_10b141ff4();
  return;
}



/* Entry: 10b1421ac; end: 10b1421bb;  */

void FUN_10b1421ac(undefined8 *param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13exception_ptraSERKS__1103461a0)(*param_2 + 0x88,*param_1);
  return;
}



/* Entry: 10b1421bc; end: 10b1421f7;  */

void FUN_10b1421bc(undefined8 *param_1,long param_2)

{
  undefined8 *extraout_x8;
  undefined8 extraout_x9;
  undefined8 uVar1;
  undefined8 extraout_x10;
  undefined8 uVar2;
  int extraout_w13;
  int extraout_w13_00;
  
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = 0;
  if (*(long *)(param_2 + 0x20) != 0) {
    do {
      func_0x00010b14ee2c();
    } while (extraout_w13 != 0);
    do {
      func_0x00010b14ee2c();
      param_1 = extraout_x8;
      uVar1 = extraout_x9;
      uVar2 = extraout_x10;
    } while (extraout_w13_00 != 0);
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  func_0x00010b14f4fc();
  return;
}



/* Entry: 10b1421f8; end: 10b14224b;  */

void FUN_10b1421f8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107c316ec();
  *(long *)(param_1 + 0x20) = lVar1;
  func_0x00010b15054c();
  func_0x00010b150118();
  FUN_10b214970();
  return;
}



/* Entry: 10b14224c; end: 10b142293;  */

void FUN_10b14224c(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x00010b142270();
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



/* Entry: 10b142294; end: 10b1422e7;  */

void FUN_10b142294(long param_1)

{
  func_0x00010b14f1cc();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b1422e8; end: 10b1422ff;  */

void FUN_10b1422e8(long param_1)

{
  __ZNSt13exception_ptrC1ERKS_();
  *(undefined1 *)(param_1 + 0x10) = 0;
  return;
}



/* Entry: 10b142300; end: 10b142397;  */

void FUN_10b142300(void)

{
  long unaff_x19;
  
  func_0x00010b14ede4();
  func_0x00010b14ee9c();
  FUN_10b142160();
  func_0x00010b14f55c();
  FUN_10b142188();
  func_0x00010b14fe10();
  func_0x00010b14f4fc();
  func_0x00010b14fa04();
  func_0x00010b14f1d8();
  FUN_10b142398();
  func_0x00010b14f064();
  if (unaff_x19 == 0) {
    func_0x00010b14f8a4();
  }
  else {
    func_0x00010b14f20c();
    func_0x00010b14ec30();
    func_0x00010b14e920();
  }
  func_0x00010b14f4c4();
  return;
}



/* Entry: 10b142398; end: 10b1423a7;  */

undefined8 FUN_10b142398(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x00010b150148(uVar1,*param_1);
  if ((bool)in_ZR) {
    func_0x00010b1423dc(uVar1);
  }
  else {
    func_0x00010b150088();
  }
  return uVar1;
}



/* Entry: 10b1423a8; end: 10b142423;  */

undefined8 FUN_10b1423a8(undefined8 param_1)

{
  undefined1 in_ZR;
  
  func_0x00010b150148();
  if ((bool)in_ZR) {
    func_0x00010b1423dc(param_1);
  }
  else {
    func_0x00010b150088();
  }
  return param_1;
}



/* Entry: 10b142424; end: 10b142443;  */

void FUN_10b142424(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x00010b142270();
  }
  return;
}



/* Entry: 10b142444; end: 10b1424ab;  */

void FUN_10b142444(undefined8 param_1)

{
  long extraout_x8;
  int extraout_w10;
  long unaff_x19;
  undefined1 auStack_40 [32];
  
  func_0x00010b14f3d0();
  FUN_10b1424ac(param_1);
  func_0x00010b15054c(*(undefined8 *)(unaff_x19 + 8));
  if (extraout_x8 != 0) {
    do {
      func_0x00010b14ea0c();
    } while (extraout_w10 != 0);
  }
  func_0x00010b14f18c();
  FUN_10b1424c8();
  func_0x00010b14fdf0();
  func_0x00010b142b88(auStack_40);
  return;
}



/* Entry: 10b1424ac; end: 10b1424c7;  */

void FUN_10b1424ac(void)

{
  undefined1 uStack_11;
  
  FUN_10b142620(&uStack_11);
  return;
}



/* Entry: 10b1424c8; end: 10b14261f;  */

void FUN_10b1424c8(void)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x9;
  int extraout_w10;
  undefined8 *unaff_x20;
  undefined1 auStack_b8 [40];
  long lStack_90;
  undefined1 auStack_80 [56];
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  int aiStack_30 [4];
  
  func_0x00010b14f1e4();
  func_0x00010b150674();
  func_0x0001052a42fc();
  func_0x00010b1504e4();
  func_0x0001052a4324();
  func_0x0001052a4560(auStack_80);
  func_0x0001052a4560(auStack_40);
  func_0x00010b14fa0c();
  func_0x00010b14fefc(uStack_48);
  func_0x00010b150624();
  *unaff_x20 = 0;
  unaff_x20[1] = 0;
  func_0x00010b14efa0();
  func_0x00010b14f400(extraout_x8 + 0x80);
  __ZNSt3__15mutex4lockEv();
  func_0x0001052a4348();
  if (aiStack_30[0] == 0) {
    func_0x00010b150778();
    FUN_10b142860();
    func_0x00010b14f694();
    lVar1 = *(long *)(extraout_x8_00 + 200);
    *(undefined8 *)(extraout_x8_00 + 200) = extraout_x9;
    if (lVar1 != 0) {
      func_0x00010b14e9f4();
      func_0x00010b150744();
      if (lVar1 != 0) {
        func_0x00010b14e9f4();
      }
    }
  }
  else {
    func_0x00010b150738();
    func_0x0001052a4324();
  }
  func_0x00010b14f4bc();
  if (lStack_90 != 0) {
    func_0x00010b150644();
    if (extraout_x8_01 != 0) {
      do {
        func_0x00010b14ea0c();
      } while (extraout_w10 != 0);
    }
    func_0x00010b150650();
    FUN_10b1427ac();
    func_0x0001052a4560(auStack_b8);
  }
  func_0x00010b14f1f8();
  func_0x0001052a4560();
  puVar2 = auStack_80;
  FUN_10b142b68();
  func_0x00010b14f498();
  func_0x00010b14f5f4();
  if (puVar2 != (undefined1 *)0x0) {
    func_0x00010b14e9f4();
  }
  func_0x0001052a4560(aiStack_30);
  return;
}



/* Entry: 10b142620; end: 10b142677;  */

void FUN_10b142620(void)

{
  undefined1 in_ZR;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010b14ea9c();
  func_0x00010b14fb78();
  FUN_10b142678();
  FUN_10b1426c4(uStack_30);
  func_0x00010b14ea84();
  FUN_10b14279c();
  func_0x00010b14e980(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b14f0dc();
  FUN_10b14279c();
  func_0x00010b14efcc();
  func_0x00010b14fb6c();
  FUN_10b142698();
  func_0x00010b14fb14();
  return;
}



/* Entry: 10b142678; end: 10b142697;  */

void FUN_10b142678(void)

{
  func_0x00010b14fb6c();
  FUN_10b142698();
  func_0x00010b14fb14();
  return;
}



/* Entry: 10b142698; end: 10b1426c3;  */

void FUN_10b142698(undefined8 param_1,ulong param_2)

{
  if (param_2 < 0x147ae147ae147af) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 200);
    return;
  }
  func_0x000104bd35f4();
  func_0x00010b150720();
  func_0x00010b150618(&UNK_110cbe310);
  FUN_10b14271c();
  return;
}



/* Entry: 10b1426c4; end: 10b1426f7;  */

void FUN_10b1426c4(void)

{
  func_0x00010b150720();
  func_0x00010b150618(&UNK_110cbe310);
  FUN_10b14271c();
  return;
}



/* Entry: 10b1426f8; end: 10b1426fb;  */

void FUN_10b1426f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbe320;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b1426fc; end: 10b14270f;  */

void FUN_10b1426fc(void)

{
  FUN_10b142764();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b142710; end: 10b14271b;  */

void FUN_10b142710(long param_1)

{
  func_0x000107c281bc(param_1 + 0xb0);
  func_0x000105c411a4(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutexD1Ev_110346598)(param_1 + 0x18);
  return;
}



/* Entry: 10b14271c; end: 10b14273f;  */

void FUN_10b14271c(long param_1)

{
  func_0x00010b14fdc4();
  __ZNSt3__115recursive_mutexC1Ev();
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  return;
}



/* Entry: 10b142740; end: 10b142763;  */

void FUN_10b142740(long param_1)

{
  __ZNSt3__115recursive_mutexC1Ev();
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  return;
}



/* Entry: 10b142764; end: 10b14276f;  */

void FUN_10b142764(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbe320;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b142770; end: 10b14279b;  */

void FUN_10b142770(long param_1)

{
  func_0x000107c281bc(param_1 + 0x98);
  func_0x000105c411a4(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutexD1Ev_110346598)(param_1);
  return;
}



/* Entry: 10b14279c; end: 10b1427ab;  */

void FUN_10b14279c(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b1427ac; end: 10b14285f;  */

void FUN_10b1427ac(void)

{
  long extraout_x9;
  undefined8 extraout_x9_00;
  int extraout_w11;
  int extraout_w12;
  long unaff_x19;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  func_0x00010b14f918();
  if (extraout_x9 == 0) {
    uStack_38 = 0;
  }
  else {
    do {
      func_0x00010b14ec7c();
      uStack_38 = extraout_x9_00;
    } while (extraout_w12 != 0);
    do {
      func_0x00010b14ee64();
    } while (extraout_w11 != 0);
  }
  func_0x00010b14f1d8();
  FUN_10b14291c();
  func_0x0001052a4560(auStack_40);
  func_0x0001052a4560(auStack_50);
  func_0x000107c27b68(*(undefined8 *)(unaff_x19 + 0x10));
  return;
}



/* Entry: 10b142860; end: 10b142883;  */

void FUN_10b142860(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  func_0x00010b14ef90();
  FUN_10b142884();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 10b142884; end: 10b142893;  */

void FUN_10b142884(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_DAT_110cbe370;
  uVar1 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = param_2[2];
  param_2[2] = 0;
  param_1[3] = uVar1;
  return;
}



/* Entry: 10b142894; end: 10b1428a7;  */

void FUN_10b142894(void)

{
  FUN_10b1428f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1428a8; end: 10b1428ef;  */

void FUN_10b1428a8(void)

{
  long extraout_x8;
  int extraout_w10;
  undefined1 auStack_30 [16];
  
  func_0x00010b14f864();
  if (extraout_x8 != 0) {
    do {
      func_0x00010b14ea0c();
    } while (extraout_w10 != 0);
  }
  func_0x00010b14f478();
  FUN_10b1427ac();
  func_0x0001052a4560(auStack_30);
  return;
}



/* Entry: 10b1428f0; end: 10b14291b;  */

undefined8 * FUN_10b1428f0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cbe370;
  FUN_10b142b68(param_1 + 1);
  return param_1;
}



/* Entry: 10b14291c; end: 10b14296f;  */

void FUN_10b14291c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 *puStack_30;
  
  uStack_48 = param_1;
  uStack_40 = param_2;
  FUN_10b142970(&puStack_38,&uStack_48);
  for (puVar1 = puStack_38; puVar1 != puStack_30; puVar1 = puVar1 + 1) {
    (**(code **)*puVar1)();
  }
  func_0x00010b14ff04();
  return;
}



/* Entry: 10b142970; end: 10b142a3f;  */

void FUN_10b142970(void)

{
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 uVar1;
  undefined1 auStack_78 [72];
  
  func_0x00010b14f6f8();
  func_0x0001052a460c(auStack_78,*(undefined8 *)(unaff_x21 + 8));
  func_0x00010b14fce0();
  FUN_10b142a40(extraout_x8 + 0x40,auStack_78);
  func_0x0001052a4808(auStack_78);
  func_0x00010b14fce0();
  uVar1 = *(undefined8 *)(extraout_x8_00 + 0x98);
  unaff_x20[1] = *(undefined8 *)(extraout_x8_00 + 0xa0);
  *unaff_x20 = uVar1;
  unaff_x20[2] = *(undefined8 *)(extraout_x8_00 + 0xa8);
  *(undefined8 *)(extraout_x8_00 + 0xa0) = 0;
  *(undefined8 *)(extraout_x8_00 + 0xa8) = 0;
  *(undefined8 *)(extraout_x8_00 + 0x98) = 0;
  func_0x00010b14fec0();
  return;
}



/* Entry: 10b142a40; end: 10b142b33;  */

long FUN_10b142a40(long param_1)

{
  if (*(char *)(param_1 + 0x50) == '\x01') {
    func_0x00010b142aa8();
  }
  else {
    func_0x000105c41be4();
  }
  return param_1;
}



/* Entry: 10b142b34; end: 10b142b4f;  */

void FUN_10b142b34(long param_1)

{
  FUN_10b142b50();
  *(undefined1 *)(param_1 + 0x50) = 1;
  return;
}



/* Entry: 10b142b50; end: 10b142b67;  */

void FUN_10b142b50(void)

{
  func_0x000105c41c9c();
  return;
}



/* Entry: 10b142b68; end: 10b142bd3;  */

long FUN_10b142b68(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b14ed08();
  lVar1 = unaff_x19;
  func_0x00010b14f1cc();
  if (lVar1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b142bd4; end: 10b142c3f;  */

void FUN_10b142bd4(long param_1)

{
  func_0x00010b142bf0();
  *(undefined1 *)(param_1 + 0x50) = 1;
  return;
}



/* Entry: 10b142c40; end: 10b142c7f;  */

void FUN_10b142c40(long param_1)

{
  undefined1 auStack_28 [8];
  
  func_0x00010b14f2cc();
  FUN_10b1432bc(param_1 + 0x28);
  FUN_10b143260(param_1 + 0x28,auStack_28);
  *(undefined1 *)(param_1 + 0x78) = 1;
  func_0x00010b14efe4();
  return;
}



/* Entry: 10b142c80; end: 10b142c9b;  */

void FUN_10b142c80(long param_1)

{
  FUN_10b142c9c();
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x78) = 0;
  return;
}



/* Entry: 10b142c9c; end: 10b142d3b;  */

undefined8 * FUN_10b142c9c(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  undefined8 in_register_00005008;
  
  *param_2 = &PTR_FUN_110cbe3f8;
  lVar3 = 0xe8;
  __Znwm();
  *(undefined8 *)(lVar3 + 0x10) = 0;
  func_0x00010b15013c(&PTR_FUN_110cbe418);
  *(undefined8 *)(lVar3 + 0x30) = in_register_00005008;
  *(undefined8 *)(lVar3 + 0x28) = param_1;
  *(undefined8 *)(lVar3 + 0x40) = in_register_00005008;
  *(undefined8 *)(lVar3 + 0x38) = param_1;
  *(undefined8 *)(lVar3 + 0x50) = in_register_00005008;
  *(undefined8 *)(lVar3 + 0x48) = param_1;
  *(undefined8 *)(lVar3 + 0x60) = in_register_00005008;
  *(undefined8 *)(lVar3 + 0x58) = param_1;
  *(undefined8 *)(lVar3 + 0x20) = in_register_00005008;
  *(undefined8 *)(lVar3 + 0x18) = param_1;
  func_0x00010b150514();
  *(undefined8 *)(lVar3 + 0x68) = extraout_x9;
  *(undefined8 *)(lVar3 + 0x78) = in_register_00005008;
  *(undefined8 *)(lVar3 + 0x70) = param_1;
  *(undefined8 *)(lVar3 + 0x88) = in_register_00005008;
  *(undefined8 *)(lVar3 + 0x80) = param_1;
  func_0x00010b150508();
  *(undefined8 *)(lVar3 + 0x90) = 0;
  *(undefined8 *)(lVar3 + 0x98) = extraout_x9_00;
  *(undefined8 *)(lVar3 + 0xa8) = in_register_00005008;
  *(undefined8 *)(lVar3 + 0xa0) = param_1;
  *(undefined8 *)(lVar3 + 0xb8) = in_register_00005008;
  *(undefined8 *)(lVar3 + 0xb0) = param_1;
  *(undefined8 *)(lVar3 + 200) = in_register_00005008;
  *(undefined8 *)(lVar3 + 0xc0) = param_1;
  *(undefined8 *)(lVar3 + 0xd8) = in_register_00005008;
  *(undefined8 *)(lVar3 + 0xd0) = param_1;
  *(undefined8 *)(lVar3 + 0xe0) = 0;
  param_2[1] = extraout_x8;
  param_2[2] = lVar3;
  param_2[3] = extraout_x8;
  param_2[4] = lVar3;
  plVar4 = (long *)(lVar3 + 8);
  *plVar4 = 0;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = *plVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  *param_2 = &PTR_FUN_110cbe3b0;
  return param_2;
}



/* Entry: 10b142d3c; end: 10b142d3f;  */

long FUN_10b142d3c(long param_1)

{
  long extraout_x8;
  
  func_0x00010b14f004(&PTR_FUN_110cbe3f8);
  if (extraout_x8 != 0) {
    func_0x00010b14eb24();
    func_0x00010b14fb60();
    FUN_10b142e54();
    func_0x00010b14f244();
    func_0x00010b14f4cc();
    func_0x00010b14f5d4();
  }
  func_0x0001052a4ab0(param_1 + 0x18);
  func_0x00010b1501ec();
  return param_1;
}



/* Entry: 10b142d40; end: 10b142d53;  */

void FUN_10b142d40(void)

{
  FUN_10b142df0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b142d54; end: 10b142d57;  */

long FUN_10b142d54(long param_1)

{
  long extraout_x8;
  
  func_0x00010b14f004(&PTR_FUN_110cbe3f8);
  if (extraout_x8 != 0) {
    func_0x00010b14eb24();
    func_0x00010b14fb60();
    FUN_10b142e54();
    func_0x00010b14f244();
    func_0x00010b14f4cc();
    func_0x00010b14f5d4();
  }
  func_0x0001052a4ab0(param_1 + 0x18);
  func_0x00010b1501ec();
  return param_1;
}



/* Entry: 10b142d58; end: 10b142d6b;  */

void FUN_10b142d58(void)

{
  FUN_10b142df0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b142d6c; end: 10b142d6f;  */

void FUN_10b142d6c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbe418;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b142d70; end: 10b142d83;  */

void FUN_10b142d70(void)

{
  FUN_10b142de0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b142d84; end: 10b142ddf;  */

void FUN_10b142d84(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0xe0) = 0;
  if (lVar1 != 0) {
    func_0x00010b14e9f4();
  }
  __ZNSt13exception_ptrD1Ev(param_1 + 0xd8);
  __ZNSt3__15mutexD1Ev(param_1 + 0x98);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x68);
  if (*(char *)(param_1 + 0x60) == '\x01') {
    if ((*(byte *)(param_1 + 0x58) & 1) == 0) {
      func_0x0001052a03ac();
    }
    return;
  }
  return;
}



/* Entry: 10b142de0; end: 10b142def;  */

void FUN_10b142de0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b142df0; end: 10b142e53;  */

long FUN_10b142df0(long param_1)

{
  long extraout_x8;
  
  func_0x00010b14f004(&PTR_FUN_110cbe3f8);
  if (extraout_x8 != 0) {
    func_0x00010b14eb24();
    func_0x00010b14fb60();
    FUN_10b142e54();
    func_0x00010b14f244();
    func_0x00010b14f4cc();
    func_0x00010b14f5d4();
  }
  func_0x0001052a4ab0(param_1 + 0x18);
  func_0x00010b1501ec();
  return param_1;
}



/* Entry: 10b142e54; end: 10b142edf;  */

void FUN_10b142e54(void)

{
  long unaff_x19;
  undefined8 uStack_30;
  
  func_0x00010b14ede4();
  func_0x00010b14ee9c();
  func_0x0001052a484c();
  func_0x00010b14f55c();
  func_0x0001052a4874();
  func_0x00010b14fe08();
  func_0x00010b14f274();
  func_0x00010b14fd9c();
  func_0x00010b14fcb4(uStack_30 + 0xc0);
  func_0x00010b14ec9c();
  if (unaff_x19 == 0) {
    func_0x00010b14f368();
  }
  else {
    func_0x00010b14f20c();
    func_0x00010b14ec30();
    func_0x00010b14e920();
  }
  func_0x00010b14f85c();
  return;
}



/* Entry: 10b142ee0; end: 10b142ee3;  */

void FUN_10b142ee0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbe468;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b142ee4; end: 10b142ef7;  */

void FUN_10b142ee4(void)

{
  FUN_10b142f1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b142ef8; end: 10b142f1b;  */

void FUN_10b142ef8(void)

{
  long unaff_x19;
  
  func_0x00010b1503f0();
  FUN_10b142f2c(unaff_x19 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutexD1Ev_110346598)(unaff_x19 + 0x18);
  return;
}



/* Entry: 10b142f1c; end: 10b142f2b;  */

void FUN_10b142f1c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b142f2c; end: 10b142f73;  */

void FUN_10b142f2c(long param_1)

{
  if (*(char *)(param_1 + 0x50) == '\x01') {
    func_0x00010b142f4c();
  }
  return;
}



/* Entry: 10b142f74; end: 10b143147;  */

void FUN_10b142f74(long *param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  long lVar1;
  code *extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  long lVar2;
  long unaff_x21;
  long lVar3;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_78 [72];
  
  uStack_b8 = param_2;
  lStack_b0 = param_3;
  if (param_3 != 0) {
    do {
      func_0x00010b14ea0c();
    } while (extraout_w10 != 0);
    do {
      func_0x00010b14ea0c();
    } while (extraout_w10_00 != 0);
  }
  lVar2 = *param_1;
  uStack_a8 = param_2;
  lStack_a0 = param_3;
  func_0x00010b14f0e8();
  func_0x0001052a4b5c(auStack_78,&uStack_a8);
  func_0x00010b14f82c();
  if ((bool)in_ZR) {
    if (*(char *)(unaff_x21 + 0x88) == '\x01') {
      func_0x00010b14f484();
      FUN_10b1431ec();
    }
    else {
      func_0x00010b14f7fc();
      func_0x00010b14f484();
      func_0x0001052a4c9c();
      *(undefined1 *)(unaff_x21 + 0x88) = 1;
    }
  }
  else {
    func_0x00010b14f484();
    FUN_10b1431d0();
  }
  func_0x0001052a4cf0(auStack_78);
  lVar1 = *param_1;
  lVar3 = *(long *)(lVar1 + 0x98);
  uStack_88 = *(undefined8 *)(lVar1 + 0xa8);
  uStack_90 = *(undefined8 *)(lVar1 + 0xa0);
  *(undefined8 *)(lVar1 + 0xa0) = 0;
  *(undefined8 *)(lVar1 + 0xa8) = 0;
  *(undefined8 *)(lVar1 + 0x98) = 0;
  lStack_98 = lVar3;
  func_0x00010b14f014();
  func_0x00010b14ff24();
  while (lVar3 != lVar2) {
    func_0x00010b14fd54();
    (*extraout_x8)();
  }
  func_0x00010b14f6ac();
  func_0x0001052a4ab0(&uStack_a8);
  func_0x0001052a4ab0(&uStack_b8);
  func_0x000107c27b68(param_1[2]);
  return;
}



/* Entry: 10b143148; end: 10b14314b;  */

undefined8 * FUN_10b143148(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbe4b8;
  FUN_10b143278(param_1 + 1);
  return param_1;
}



/* Entry: 10b14314c; end: 10b14315f;  */

void FUN_10b14314c(void)

{
  FUN_10b1431a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b143160; end: 10b1431a3;  */

void FUN_10b143160(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  
  func_0x00010b14eb80();
  if (param_3 != 0) {
    do {
      func_0x00010b14ea0c();
    } while (extraout_w10 != 0);
  }
  FUN_10b142f74(param_1 + 8);
  func_0x00010b14f274();
  return;
}



/* Entry: 10b1431a4; end: 10b1431cf;  */

undefined8 * FUN_10b1431a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbe4b8;
  FUN_10b143278(param_1 + 1);
  return param_1;
}



/* Entry: 10b1431d0; end: 10b1431eb;  */

void FUN_10b1431d0(long param_1)

{
  undefined1 extraout_w8;
  
  func_0x0001052a4c9c();
  func_0x00010b15079c();
  *(undefined1 *)(param_1 + 0x50) = extraout_w8;
  return;
}



/* Entry: 10b1431ec; end: 10b14325f;  */

undefined8 * FUN_10b1431ec(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_2 + 8);
  if (((*(byte *)(param_1 + 8) & 1) == 0) && (bVar1 != 0)) {
    func_0x0001052a03ac();
    *param_1 = *param_2;
    *(undefined1 *)(param_1 + 8) = 1;
  }
  else if (*(byte *)(param_1 + 8) == 0) {
    if ((bVar1 & 1) == 0) {
      func_0x000100066230();
      param_1[3] = param_2[3];
      func_0x0001002a8208(param_1 + 4,param_2 + 4);
      return param_1;
    }
  }
  else {
    if (bVar1 == 0) {
      func_0x0001052a0844(param_1,param_2);
      *(undefined1 *)(param_1 + 8) = 0;
      return param_1;
    }
    *param_1 = *param_2;
  }
  return param_1;
}



/* Entry: 10b143260; end: 10b143277;  */

void FUN_10b143260(long param_1)

{
  __ZNSt13exception_ptrC1ERKS_();
  *(undefined1 *)(param_1 + 0x48) = 0;
  return;
}



/* Entry: 10b143278; end: 10b1432bb;  */

long FUN_10b143278(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b14ed08();
  lVar1 = unaff_x19;
  func_0x00010b14f1cc();
  if (lVar1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b1432bc; end: 10b1432df;  */

void FUN_10b1432bc(long param_1)

{
  if (*(char *)(param_1 + 0x50) == '\x01') {
    func_0x00010b142f4c();
    *(undefined1 *)(param_1 + 0x50) = 0;
  }
  return;
}



/* Entry: 10b1432e0; end: 10b14331b;  */

void FUN_10b1432e0(undefined8 param_1)

{
  long extraout_x8;
  int extraout_w10;
  undefined8 *unaff_x21;
  undefined8 in_register_00005008;
  
  func_0x00010b14ef5c();
  func_0x00010b14fed4();
  func_0x00010b14f8d0();
  unaff_x21[1] = in_register_00005008;
  *unaff_x21 = param_1;
  if (extraout_x8 != 0) {
    do {
      func_0x00010b14ea0c();
    } while (extraout_w10 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)();
  return;
}



/* Entry: 10b14331c; end: 10b1433f7;  */

void FUN_10b14331c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uStack_50;
  long lStack_48;
  undefined1 auStack_40 [16];
  
  if (param_3 != 0) {
    do {
      func_0x00010b14ea0c();
    } while (extraout_w10 != 0);
    do {
      func_0x00010b14ea0c();
    } while (extraout_w10_00 != 0);
  }
  uStack_50 = param_2;
  lStack_48 = param_3;
  FUN_10b1432e0(auStack_40,&uStack_50);
  func_0x00010b1501bc();
  func_0x00010b14f574();
  func_0x00010b14f774();
  func_0x0001052a4ab0(auStack_40);
  (**(code **)*param_1)();
  func_0x00010b14f85c();
  func_0x00010b14fe08();
  func_0x000107c27b68(param_1[2]);
  return;
}



/* Entry: 10b1433f8; end: 10b1433fb;  */

undefined8 FUN_10b1433f8(undefined8 param_1)

{
  func_0x00010b14fd24(&PTR_FUN_110cbe4f8);
  return param_1;
}



/* Entry: 10b1433fc; end: 10b14340f;  */

void FUN_10b1433fc(void)

{
  FUN_10b143454();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b143410; end: 10b143453;  */

void FUN_10b143410(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  
  func_0x00010b14eb80();
  if (param_3 != 0) {
    do {
      func_0x00010b14ea0c();
    } while (extraout_w10 != 0);
  }
  FUN_10b14331c(param_1 + 8);
  func_0x00010b14f274();
  return;
}



/* Entry: 10b143454; end: 10b14347b;  */

undefined8 FUN_10b143454(undefined8 param_1)

{
  func_0x00010b14fd24(&PTR_FUN_110cbe4f8);
  return param_1;
}



/* Entry: 10b14347c; end: 10b143493;  */

void FUN_10b14347c(long param_1)

{
  func_0x0001052a0844();
  *(undefined1 *)(param_1 + 0x40) = 0;
  return;
}



/* Entry: 10b143494; end: 10b143537;  */

void FUN_10b143494(void)

{
  long unaff_x19;
  undefined8 uStack_30;
  
  func_0x00010b14ede4();
  func_0x00010b14ee9c();
  func_0x0001052a484c();
  func_0x00010b14f55c();
  func_0x0001052a4874();
  func_0x00010b14fe08();
  func_0x00010b14f274();
  func_0x00010b14fd9c();
  if (*(char *)(uStack_30 + 0x48) == '\x01') {
    FUN_10b1431ec();
  }
  else {
    func_0x0001052a4c9c();
    func_0x00010b15079c();
  }
  func_0x00010b14ec9c();
  if (unaff_x19 == 0) {
    func_0x00010b14f368();
  }
  else {
    func_0x00010b14f20c();
    func_0x00010b14ec30();
    func_0x00010b14e920();
  }
  func_0x00010b14f85c();
  return;
}



/* Entry: 10b143538; end: 10b1435a7;  */

void FUN_10b143538(void)

{
  long extraout_x8;
  long unaff_x19;
  
  func_0x00010b14fec8();
  FUN_10b142f2c();
  func_0x00010b14f004(&PTR_FUN_110cbe3f8);
  if (extraout_x8 != 0) {
    func_0x00010b14eb24();
    func_0x00010b14fb60();
    FUN_10b142e54();
    func_0x00010b14f244();
    func_0x00010b14f4cc();
    func_0x00010b14f5d4();
  }
  func_0x0001052a4ab0(unaff_x19 + 0x18);
  func_0x00010b1501ec();
  return;
}



/* Entry: 10b1435a8; end: 10b1435eb;  */

void FUN_10b1435a8(long *param_1)

{
  code *pcVar1;
  
  if ((*(byte *)(*param_1 + 0x50) & 1) == 0) {
    func_0x00010b14ed8c();
    func_0x00010b14f374();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10b1435e4);
    (*pcVar1)();
  }
  if ((*(byte *)(*param_1 + 0x50) & 1) != 0) {
    return;
  }
  func_0x00010b150270();
  func_0x00010b14ff40();
  func_0x00010b1500a0();
  func_0x00010552fc08();
  func_0x00010b14fa3c();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b143c50);
  (*pcVar1)();
}



/* Entry: 10b1435ec; end: 10b1435ef;  */

long FUN_10b1435ec(long param_1)

{
  long extraout_x8;
  
  func_0x00010b14f004(&PTR_FUN_110cbe580);
  if (extraout_x8 != 0) {
    func_0x00010b14eb24();
    func_0x00010b14fb60();
    FUN_10b143718();
    func_0x00010b14f244();
    func_0x00010b14f4cc();
    func_0x00010b14f5d4();
  }
  FUN_10b14368c(param_1 + 0x18);
  FUN_10b14368c();
  return param_1;
}



/* Entry: 10b1435f0; end: 10b143603;  */

void FUN_10b1435f0(void)

{
  FUN_10b1436b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b143604; end: 10b143607;  */

long FUN_10b143604(long param_1)

{
  long extraout_x8;
  
  func_0x00010b14f004(&PTR_FUN_110cbe580);
  if (extraout_x8 != 0) {
    func_0x00010b14eb24();
    func_0x00010b14fb60();
    FUN_10b143718();
    func_0x00010b14f244();
    func_0x00010b14f4cc();
    func_0x00010b14f5d4();
  }
  FUN_10b14368c(param_1 + 0x18);
  FUN_10b14368c();
  return param_1;
}



/* Entry: 10b143608; end: 10b14361b;  */

void FUN_10b143608(void)

{
  FUN_10b1436b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b14361c; end: 10b14361f;  */

void FUN_10b14361c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbe5a0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b143620; end: 10b143633;  */

void FUN_10b143620(void)

{
  FUN_10b14367c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b143634; end: 10b14367b;  */

long FUN_10b143634(long param_1)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b150014();
  if (param_1 != 0) {
    func_0x00010b14e9f4();
  }
  func_0x00010b150218();
  func_0x00010b150210();
  func_0x00010b150208();
  if (*(char *)(unaff_x19 + 0x28) == '\x01') {
    lVar1 = unaff_x19 + 0x18;
    func_0x00010b14f1cc();
    if (lVar1 != 0) {
      func_0x000107c278a0();
    }
    return unaff_x19;
  }
  return param_1;
}



/* Entry: 10b14367c; end: 10b14368b;  */

void FUN_10b14367c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b14368c; end: 10b1436af;  */

void FUN_10b14368c(long param_1)

{
  func_0x00010b14f1cc();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b1436b0; end: 10b143717;  */

long FUN_10b1436b0(long param_1)

{
  long extraout_x8;
  
  func_0x00010b14f004(&PTR_FUN_110cbe580);
  if (extraout_x8 != 0) {
    func_0x00010b14eb24();
    func_0x00010b14fb60();
    FUN_10b143718();
    func_0x00010b14f244();
    func_0x00010b14f4cc();
    func_0x00010b14f5d4();
  }
  FUN_10b14368c(param_1 + 0x18);
  FUN_10b14368c();
  return param_1;
}



/* Entry: 10b143718; end: 10b1437bb;  */

void FUN_10b143718(void)

{
  long extraout_x8;
  long lVar1;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  long lStack_30;
  
  func_0x00010b1504d0();
  FUN_10b1437bc(auStack_40,extraout_x8 + 8,auStack_50);
  func_0x00010b14f55c();
  FUN_10b1437e8();
  FUN_10b14368c(auStack_40);
  FUN_10b14368c(auStack_50);
  func_0x00010b14fa04();
  func_0x00010b14fcb4(lStack_30 + 0x88);
  lVar1 = *(long *)(lStack_30 + 0x90);
  *(undefined8 *)(lStack_30 + 0x90) = 0;
  func_0x00010b14f6a4();
  if (lVar1 == 0) {
    __ZNSt3__118condition_variable10notify_allEv(lStack_30 + 0x18);
  }
  else {
    func_0x00010b14f20c();
    func_0x00010b14ec30();
    func_0x00010b14e920();
  }
  func_0x00010b14f854();
  return;
}



/* Entry: 10b1437bc; end: 10b1437e7;  */

void FUN_10b1437bc(void)

{
  func_0x00010b14ef5c();
  func_0x00010b14f4e4();
  func_0x00010b14e948();
  func_0x00010b14eff4();
  return;
}



/* Entry: 10b1437e8; end: 10b14380b;  */

void FUN_10b1437e8(void)

{
  func_0x00010b14e8d0();
  FUN_10b14368c();
  return;
}



/* Entry: 10b14380c; end: 10b14380f;  */

void FUN_10b14380c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbe5f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b143810; end: 10b143823;  */

void FUN_10b143810(void)

{
  FUN_10b143848();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b143824; end: 10b143847;  */

void FUN_10b143824(void)

{
  long unaff_x19;
  
  func_0x00010b14f948();
  FUN_10b143858(unaff_x19 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutexD1Ev_110346598)(unaff_x19 + 0x18);
  return;
}



/* Entry: 10b143848; end: 10b143857;  */

void FUN_10b143848(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b143858; end: 10b14389b;  */

void FUN_10b143858(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x00010b143878();
  }
  return;
}



/* Entry: 10b14389c; end: 10b1438cb;  */

undefined8 FUN_10b14389c(long param_1)

{
  undefined8 unaff_x19;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    func_0x00010b14ea5c();
  }
  else {
    unaff_x19 = 1;
  }
  return unaff_x19;
}


