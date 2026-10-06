/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1077bab4c; end: 1077babf3;  */

undefined8 *
FUN_1077bab4c(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
             long *param_5)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *(undefined4 *)(param_1 + 2) = param_3;
  *(undefined4 *)((long)param_1 + 0x14) = param_4;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined1 *)((long)param_1 + 0x1c) = 0;
  param_1[4] = 0;
  if (*(long *)(*param_5 + 0x18) != 0) {
    uVar1 = 0x10;
    __Znwm(0x10);
    func_0x000107268400();
    uStack_38 = 0;
    func_0x0001077baad8(param_1 + 4,uVar1);
    func_0x0001077baab4(&uStack_38);
  }
  return param_1;
}



/* Entry: 1077bb054; end: 1077bb08f;  */

void FUN_1077bb054(long param_1,long param_2,int param_3,int param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar3 = *(undefined4 *)(param_1 + (long)param_3 * 4);
  *(undefined4 *)(param_1 + (long)param_3 * 4) = *(undefined4 *)(param_1 + (long)param_4 * 4);
  *(undefined4 *)(param_1 + (long)param_4 * 4) = uVar3;
  puVar1 = (undefined8 *)(param_2 + (long)param_3 * 0x10);
  puVar2 = (undefined8 *)(param_2 + (long)param_4 * 0x10);
  uVar4 = *puVar1;
  *puVar1 = *puVar2;
  *puVar2 = uVar4;
  uVar4 = puVar1[1];
  puVar1[1] = puVar2[1];
  puVar2[1] = uVar4;
  return;
}



/* Entry: 1077bb5f0; end: 1077bb61f;  */

void FUN_1077bb5f0(long param_1)

{
  long lVar1;
  long extraout_x8;
  
  func_0x0001077bb5a0(param_1 + 0x68);
  func_0x0001077bc5f4(param_1 + 0x10);
  lVar1 = param_1;
  func_0x00010726dd50();
  if ((lVar1 == 1) && (func_0x000107274ee4(), extraout_x8 != 0)) {
    func_0x000107274f70();
    func_0x000107275200();
    func_0x000107275208();
  }
  func_0x00010726dd8c(param_1);
  return;
}



/* Entry: 1077bbf6c; end: 1077bbf93;  */

void FUN_1077bbf6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000104c318bc();
  *(undefined4 *)(param_1 + 0x38) = 5;
  *(undefined8 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 1077bc5ac; end: 1077bc5f3;  */

void FUN_1077bc5ac(long *param_1,uint param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  long lVar4;
  
  lVar4 = *(long *)(*param_1 + 0x38) + (ulong)param_2 * 0x28;
  if (*(int *)(lVar4 + 0x18) == *(int *)param_1[1]) {
    puVar2 = (undefined1 *)param_1[3];
    piVar1 = *(int **)param_1[2];
    puVar3 = (undefined4 *)((undefined8 *)param_1[2])[1];
    *piVar1 = *piVar1 + 1;
    *puVar3 = *(undefined4 *)(lVar4 + 0x14);
    *puVar2 = 1;
  }
  return;
}



/* Entry: 1077bc89c; end: 1077bc89f;  */

void FUN_1077bc89c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077bd390; end: 1077bd3e3;  */

void FUN_1077bd390(void)

{
  func_0x0001077bed9c();
  func_0x0001077bd3b0();
  return;
}



/* Entry: 1077bd5a0; end: 1077bd883;  */

void FUN_1077bd5a0(long param_1)

{
  byte bVar1;
  uint uVar2;
  code *pcVar3;
  undefined1 in_ZR;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long *plVar9;
  undefined8 extraout_x8;
  undefined8 *unaff_x20;
  undefined1 *puVar10;
  ulong uVar11;
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [48];
  undefined1 auStack_a8 [24];
  undefined8 *puStack_90;
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [16];
  undefined8 uStack_58;
  
  lVar5 = param_1;
  func_0x0001077be83c();
  uStack_58 = extraout_x8;
  func_0x000107284284(auStack_e8,lVar5 + 8);
  uVar6 = param_1 + 8;
  func_0x0001072842e4();
  if ((uVar6 & 1) == 0) {
LAB_1077bd6f0:
    puVar7 = auStack_e8;
    func_0x000107270b00(puVar7);
    func_0x0001077be7ec(uStack_58);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    puVar7 = auStack_88;
    func_0x0001077bd444(puVar7,param_1 + 0x40);
    puVar10 = *(undefined1 **)(param_1 + 0x30);
    bVar1 = *(byte *)(param_1 + 0x20);
    unaff_x20 = (undefined8 *)(ulong)bVar1;
    in_ZR = bVar1 == puVar10[0xf];
    if (bVar1 <= (byte)puVar10[0xf]) {
      uVar6 = (ulong)*(uint *)(param_1 + 0x28);
      iVar4 = 1 << (ulong)(bVar1 & 0x1f);
      uVar2 = iVar4 - 1;
      uVar11 = (ulong)((*(uint *)(param_1 + 0x24) & uVar2) + iVar4 & uVar2);
      func_0x0001077bec7c((uVar6 << ((ulong)unaff_x20 & 0x3f)) + uVar11);
      if (puVar7 == (undefined1 *)0x0) {
        puVar8 = puVar10;
        func_0x0001077bd958(puVar10,unaff_x20,uVar11,uVar6);
        if (puVar8 == (undefined1 *)0x0) {
          func_0x0001077be94c();
          func_0x0001077bed74();
LAB_1077bd7dc:
          func_0x0001077be824();
          goto LAB_1077bd7e0;
        }
        puVar7 = puVar10;
        func_0x0001077bc8a0(puVar10,puVar8 + 0x48,puVar8[0x1a],*(undefined4 *)(puVar8 + 0x1c),
                            *(undefined4 *)(puVar8 + 0x20),unaff_x20,uVar11,uVar6);
        func_0x0001077bec7c();
        if (puVar7 != (undefined1 *)0x0) goto LAB_1077bd674;
        func_0x0001077bd958(puVar10,unaff_x20,uVar11,uVar6);
        if (puVar10 == (undefined1 *)0x0) {
          func_0x0001077be94c();
          func_0x0001077bed74();
          goto LAB_1077bd7dc;
        }
        iVar4 = 0x13726300;
        puVar7 = (undefined1 *)0x113726308;
        if (((bRam0000000113726300 & 1) == 0) && (___cxa_guard_acquire(), iVar4 != 0)) {
          puVar7 = (undefined1 *)0x113726308;
          func_0x0001072c8f9c(0x113726308);
          uRam0000000113726318 = 0;
          ___cxa_guard_release(0x113726300);
        }
      }
      else {
LAB_1077bd674:
        puVar7 = puVar7 + 0x80;
      }
      func_0x0001072c8ed8(auStack_68,puVar7);
      plVar9 = (long *)(param_1 + 8);
      func_0x00010728433c();
      func_0x0001077bd9ec(auStack_d8,auStack_88);
      puStack_90 = (undefined8 *)0x0;
      unaff_x20 = (undefined8 *)0x38;
      __Znwm();
      *unaff_x20 = &PTR_DAT_1109dbf18;
      func_0x0001077bd9ec(unaff_x20 + 1,auStack_d8);
      puStack_90 = unaff_x20;
      (**(code **)(*plVar9 + 0x10))(plVar9,auStack_a8);
      func_0x0001006393ec(auStack_a8);
      FUN_1077bdb88(auStack_d8);
      FUN_1077bdb88(auStack_88);
      goto LAB_1077bd6f0;
    }
  }
  func_0x0001077be94c();
  __ZNSt3__19to_stringEi(auStack_a8,unaff_x20);
  func_0x0001004c3cd0(auStack_d8,&UNK_10f42a321,auStack_a8);
  __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
            (puVar7,auStack_d8);
  func_0x0001077be824();
LAB_1077bd7e0:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1077bd7e4);
  (*pcVar3)();
}



/* Entry: 1077bda18; end: 1077bda2b;  */

void FUN_1077bda18(void)

{
  func_0x0001077bdb08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077bdb88; end: 1077bdc0b;  */

undefined8 FUN_1077bdb88(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined8 unaff_x19;
  
  func_0x0001072c8f3c(param_1 + 0x20);
  func_0x0001077bebe8();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return unaff_x19;
    }
    uVar1 = 0x28;
  }
  func_0x0001077bea30(uVar1);
  return unaff_x19;
}



/* Entry: 1077be144; end: 1077be18f;  */

void FUN_1077be144(long param_1)

{
  func_0x0001077bed9c();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1077be2b0; end: 1077be317;  */

void FUN_1077be2b0(long *param_1,long param_2)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((*(byte *)(param_2 + 0x98) & 1) == 0) {
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_28 = 0;
    func_0x00010737c564(param_2 + 0x80,&uStack_38);
    func_0x0001072977d0(&uStack_38);
  }
  *param_1 = param_2 + 0x80;
  *(undefined4 *)(param_1 + 1) = 1;
  return;
}



/* Entry: 1077be608; end: 1077be61b;  */

void FUN_1077be608(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077be6cc; end: 1077be6fb;  */

long FUN_1077be6cc(int param_1)

{
  long lVar1;
  long unaff_x19;
  
  func_0x0001077beab8();
  func_0x0001077bea20();
  lVar1 = unaff_x19 + 0x18;
  if (param_1 == 0) {
    lVar1 = 0;
  }
  return lVar1;
}



/* Entry: 1077bef80; end: 1077bef93;  */

void FUN_1077bef80(void)

{
  func_0x0001077bef44();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077bf2d0; end: 1077bf363;  */

undefined1 * FUN_1077bf2d0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  undefined1 auStack_50 [16];
  long lStack_40;
  undefined8 uStack_38;
  
  puVar2 = auStack_50;
  puVar3 = auStack_50;
  func_0x0001077bf790();
  uStack_38 = extraout_x8;
  func_0x0001077bf7c8(auStack_50);
  func_0x0001077bf3bc(lStack_40,param_3,param_4);
  lVar1 = lStack_40;
  lStack_40 = 0;
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  func_0x0001077bf464();
  func_0x0001077bf76c(uStack_38);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x0001077bf464();
  func_0x0001077bf7d0();
  *(undefined8 *)(puVar3 + 8) = param_3;
  puVar2 = puVar3;
  func_0x0001077bf38c();
  *(undefined1 **)(puVar3 + 0x10) = puVar2;
  return puVar3;
}



/* Entry: 1077bf454; end: 1077bf473;  */

void FUN_1077bf454(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109dc2c8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1077bf7f4; end: 1077bf827;  */

void FUN_1077bf7f4(long param_1,undefined8 param_2)

{
  func_0x0001077b5880(param_1,4,param_2,1);
  func_0x0001077bf8e4();
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  return;
}



/* Entry: 1077bfa74; end: 1077bfa77;  */

undefined8 * FUN_1077bfa74(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109dc3d8;
  func_0x0001077b68e0(param_1 + 0x18);
  func_0x0001072aca78(param_1 + 0x17);
  func_0x000107563b08(param_1 + 8);
  *param_1 = &PTR_DAT_1109db730;
  func_0x000107783268(param_1 + 5);
  func_0x0001074f7454(param_1 + 1);
  return param_1;
}



/* Entry: 1077bfe60; end: 1077bfe8b;  */

void FUN_1077bfe60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uStack_11;
  
  func_0x0001077bfe8c(&uStack_11,param_1,param_2,param_3);
  return;
}



/* Entry: 1077c0014; end: 1077c0053;  */

undefined8 * FUN_1077c0014(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x0001074fffc4(&uStack_30);
  return param_1;
}



/* Entry: 1077c01ac; end: 1077c01d7;  */

undefined8 * FUN_1077c01ac(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1109dc490;
  param_2[1] = uVar1;
  func_0x000104c2fe00(param_2 + 2,param_1 + 0x10);
  return param_2;
}



/* Entry: 1077c06ec; end: 1077c0747;  */

void FUN_1077c06ec(void)

{
  code *pcVar1;
  
  ___cxa_allocate_exception(0x10);
  func_0x0001077c0748();
  ___cxa_throw();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1077c0728);
  (*pcVar1)();
}



/* Entry: 1077c0940; end: 1077c096f;  */

undefined8 FUN_1077c0940(undefined8 *param_1)

{
  undefined8 extraout_x8;
  undefined8 unaff_x19;
  
  *param_1 = &PTR_DAT_1109dc538;
  func_0x00010750fcb8(param_1 + 0x10);
  func_0x0001077b732c();
  *param_1 = extraout_x8;
  func_0x0001072c9240(param_1 + 0xd);
  func_0x000104c2f714(param_1 + 2);
  return unaff_x19;
}



/* Entry: 1077c0c30; end: 1077c0c4b;  */

void FUN_1077c0c30(long param_1)

{
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



/* Entry: 1077c0e8c; end: 1077c0eb3;  */

void FUN_1077c0e8c(void)

{
  func_0x0001077c1428();
  func_0x0001077c0ed8();
  return;
}



/* Entry: 1077c0fc0; end: 1077c0fc3;  */

void FUN_1077c0fc0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109dc620;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1077c10f0; end: 1077c1127;  */

undefined8 * FUN_1077c10f0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1109dc620;
  func_0x0001077c1128(param_1 + 3);
  return param_1;
}



/* Entry: 1077c1354; end: 1077c1463;  */

void FUN_1077c1354(void)

{
  return;
}



/* Entry: 1077c1a44; end: 1077c1aa3;  */

void FUN_1077c1a44(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x18] = 0;
  return;
}



/* Entry: 1077c1ddc; end: 1077c1e0b;  */

void FUN_1077c1ddc(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x492492492492493) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x38);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_DAT_1109dc6d0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1077c1fa0; end: 1077c2007;  */

void FUN_1077c1fa0(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x0001077c287c();
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[2] = param_2[2];
  func_0x0001077c1f34(param_1 + 3,param_2 + 3);
  func_0x0001077c2038(unaff_x19 + 0x60,unaff_x20 + 0x60);
  return;
}



/* Entry: 1077c22f8; end: 1077c236b;  */

void FUN_1077c22f8(undefined8 *param_1)

{
  long unaff_x19;
  long unaff_x21;
  
  func_0x0001077c2904();
  *param_1 = &PTR_DAT_1109dc720;
  func_0x000107283e34(param_1 + 1);
  func_0x0001077c1f34(param_1 + 4,unaff_x21 + 0x18);
  func_0x0001077c2038(unaff_x19 + 0x68,unaff_x21 + 0x60);
  return;
}



/* Entry: 1077c2520; end: 1077c2557;  */

long FUN_1077c2520(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109dc7f0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1077c2740; end: 1077c277b;  */

void FUN_1077c2740(undefined8 *param_1)

{
  char *pcVar1;
  char *extraout_x8;
  
  pcVar1 = (char *)*param_1;
  while (*pcVar1 < -1) {
    func_0x0001077c28c4();
    pcVar1 = extraout_x8;
  }
  if (*pcVar1 != -1) {
    return;
  }
  *param_1 = 0;
  return;
}



/* Entry: 1077c2cac; end: 1077c2cfb;  */

undefined8 * FUN_1077c2cac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x0001074f7454(&uStack_30);
  func_0x0001074fffa0(&uStack_40);
  return param_1;
}



/* Entry: 1077c2f2c; end: 1077c2f53;  */

undefined8 * FUN_1077c2f2c(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0xf0f0f0f0f0f0f1) {
    puVar1 = (undefined8 *)(param_2 * 0x110);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109dc878;
  func_0x0001077c3484(param_1 + 3);
  return param_1;
}



/* Entry: 1077c3088; end: 1077c30b3;  */

undefined8 * FUN_1077c3088(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1109dc8c8;
  param_2[1] = uVar1;
  func_0x000104c2fe00(param_2 + 2,param_1 + 0x10);
  return param_2;
}



/* Entry: 1077c34f4; end: 1077c3517;  */

void FUN_1077c34f4(undefined1 *param_1,long param_2)

{
  if ((*(byte *)(param_2 + 0xf0) & 1) != 0) {
    func_0x000107c60c94(param_1,param_2 + 0xa0);
    param_1[0x18] = 1;
    return;
  }
  *param_1 = 0;
  param_1[0x18] = 0;
  return;
}



/* Entry: 1077c3774; end: 1077c3803;  */

void FUN_1077c3774(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  long lStack_30;
  byte bStack_28;
  
  func_0x0001077c5d4c(&uStack_38,*(undefined8 *)(param_2 + 8));
  lVar5 = lStack_30;
  uVar4 = uStack_38;
  if ((bStack_28 & 1) == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 2) = 0;
  }
  else {
    uStack_38 = 0;
    lStack_30 = 0;
    uStack_48 = uVar4;
    lStack_40 = lVar5;
    uStack_58 = 0;
    uStack_50 = 0;
    *param_1 = uVar4;
    param_1[1] = lVar5;
    if (lVar5 != 0) {
      plVar1 = (long *)(lVar5 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *(undefined1 *)(param_1 + 2) = 1;
    func_0x00010725af58(&uStack_48);
    func_0x00010725af58(&uStack_58);
  }
  func_0x0001077c3914(&uStack_38);
  return;
}



/* Entry: 1077c3934; end: 1077c3983;  */

long * FUN_1077c3934(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    func_0x0001077c3a10();
  }
  return param_1;
}



/* Entry: 1077c3f40; end: 1077c3f43;  */

void FUN_1077c3f40(void)

{
  return;
}



/* Entry: 1077c4974; end: 1077c4977;  */

void FUN_1077c4974(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 1077c59e8; end: 1077c5a37;  */

void FUN_1077c59e8(long *param_1,long param_2)

{
  long extraout_x8;
  
  func_0x0001077c5a38(param_2 + 0xe0);
  if (*param_1 != 0) {
    *(undefined ***)(*param_1 + 0x28) = &PTR_PTR_1131ada18;
    func_0x0001077ca0b8();
    func_0x0001077ca218(*(undefined8 *)(extraout_x8 + 0x48));
  }
  return;
}



/* Entry: 1077c5ddc; end: 1077c5e13;  */

void FUN_1077c5ddc(undefined8 param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  
  func_0x0001077c9de8();
  func_0x0001077ca29c();
  func_0x0001077ca0b8();
  func_0x0001077ca268(*(undefined8 *)(extraout_x8 + 0x10));
  func_0x0001077ca0b8();
                    /* WARNING: Could not recover jumptable at 0x0001077ca0b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(extraout_x8_00 + 0x48))(param_1,&UNK_10de9dfa0);
  return;
}



/* Entry: 1077c6028; end: 1077c602f;  */

void FUN_1077c6028(long param_1)

{
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  
  func_0x0001077c9de8(param_1 + -8);
  func_0x0001077ca29c();
  func_0x0001077ca0b8();
  func_0x0001077ca268(*(undefined8 *)(extraout_x8 + 0x28));
  if (((*(byte *)(unaff_x19 + 4) & 1) == 0) && (*(long *)(unaff_x20 + 0x30) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001077ca0b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*unaff_x19 + 0x10))();
    return;
  }
  return;
}



/* Entry: 1077c63e0; end: 1077c6447;  */

void FUN_1077c63e0(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077c65bc; end: 1077c65cf;  */

void FUN_1077c65bc(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    func_0x0001077c6550();
    *(undefined1 *)(param_1 + 0x30) = 1;
    return;
  }
  return;
}



/* Entry: 1077c7148; end: 1077c7197;  */

void FUN_1077c7148(long param_1)

{
  undefined8 *unaff_x19;
  
  func_0x0001077ca0c4();
  *unaff_x19 = 0;
  if (param_1 != 0) {
    func_0x000107520c98();
    __ZdlPv();
  }
  return;
}



/* Entry: 1077c7238; end: 1077c724f;  */

void FUN_1077c7238(long param_1)

{
  if (*(char *)(param_1 + 0xf0) == '\x01') {
    func_0x000107266968();
  }
  return;
}



/* Entry: 1077c7534; end: 1077c7587;  */

void FUN_1077c7534(undefined8 *param_1)

{
  long unaff_x20;
  
  func_0x0001077c9e24();
  *param_1 = &PTR_DAT_1109dcc80;
  func_0x0001077c64dc(param_1 + 1);
  func_0x0001077c6448(param_1 + 4,unaff_x20 + 0x18);
  return;
}



/* Entry: 1077c82bc; end: 1077c830f;  */

undefined8 * FUN_1077c82bc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109dcd00;
  func_0x0001077c49a0(param_1 + 1);
  return param_1;
}



/* Entry: 1077c8440; end: 1077c8453;  */

void FUN_1077c8440(void)

{
  func_0x0001077c8418();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077c85fc; end: 1077c870f;  */

void FUN_1077c85fc(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long lVar3;
  int extraout_w10;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uVar4;
  undefined1 auStack_a0 [8];
  undefined1 uStack_98;
  undefined1 auStack_90 [40];
  undefined8 *puStack_68;
  undefined1 auStack_60 [16];
  long lStack_50;
  undefined8 uStack_48;
  
  func_0x0001077c9d20();
  uStack_48 = extraout_x8;
  func_0x0001074f9834(auStack_60,1);
  lVar1 = lStack_50;
  *(undefined8 *)(lStack_50 + 0x10) = 0;
  func_0x0001077c9ec0(&UNK_1109b70d0);
  if (!(bool)in_ZR) {
    if ((ulong)(extraout_x8_00 >> 4) >> 0x3c != 0) goto LAB_1077c86e8;
    func_0x000107512ba8(lVar1 + 0x28);
    func_0x0001077c9f28();
    for (; in_ZR = unaff_x23 == unaff_x24, !(bool)in_ZR; unaff_x23 = unaff_x23 + 2) {
      lVar3 = unaff_x23[1];
      uVar4 = *unaff_x23;
      param_3[1] = unaff_x23[1];
      *param_3 = uVar4;
      if (lVar3 != 0) {
        do {
          func_0x0001077c9f5c();
        } while (extraout_w10 != 0);
      }
      param_3 = param_3 + 2;
      puStack_68 = param_3;
    }
    func_0x0001077ca34c();
    func_0x000107512c64(auStack_90);
    *(undefined8 **)(lVar1 + 0x20) = param_3;
  }
  uStack_98 = 1;
  func_0x0001077c8710(auStack_a0);
  lVar1 = lStack_50;
  lStack_50 = 0;
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  func_0x0001074f9938(auStack_60);
  func_0x0001077c9cec(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_1077c86e8:
  func_0x000107512b64();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1077c86f0);
  (*pcVar2)();
}



/* Entry: 1077c88c8; end: 1077c88f3;  */

undefined8 * FUN_1077c88c8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109dce90;
  func_0x0001077c49fc(param_1 + 1);
  return param_1;
}



/* Entry: 1077c8b60; end: 1077c8b6b;  */

undefined ** FUN_1077c8b60(void)

{
  return &PTR_DAT_1109dcf90;
}



/* Entry: 1077c8c94; end: 1077c8ce7;  */

undefined8 * FUN_1077c8c94(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109dcfb0;
  func_0x0001077c4a2c(param_1 + 1);
  return param_1;
}



/* Entry: 1077c8e50; end: 1077c8e63;  */

void FUN_1077c8e50(void)

{
  func_0x0001077c8e28();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077c9038; end: 1077c9133;  */

void FUN_1077c9038(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    func_0x0001077c9134(param_1);
    param_1[1] = 0;
  }
  else {
    plVar3 = param_1 + 1;
    func_0x0001077c914c(plVar3);
    func_0x0001077c9134(param_1,plVar3);
    param_1[1] = param_2;
    lVar1 = *param_1;
    for (uVar2 = 0; param_2 != uVar2; uVar2 = uVar2 + 1) {
      *(undefined8 *)(lVar1 + uVar2 * 8) = 0;
    }
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      uVar6 = plVar3[1];
      uVar5 = param_2 - 1;
      uVar2 = 0;
      if (param_2 != 0) {
        uVar2 = uVar6 / param_2;
      }
      uVar7 = uVar6;
      if (param_2 <= uVar6) {
        uVar7 = uVar6 - uVar2 * param_2;
      }
      if ((param_2 & uVar5) == 0) {
        uVar7 = uVar6 & uVar5;
      }
      *(long **)(lVar1 + uVar7 * 8) = param_1 + 2;
      while (plVar4 = plVar3, plVar3 = (long *)*plVar4, plVar3 != (long *)0x0) {
        uVar2 = plVar3[1];
        if ((param_2 & uVar5) == 0) {
          uVar2 = uVar2 & uVar5;
        }
        else if (param_2 <= uVar2) {
          uVar6 = 0;
          if (param_2 != 0) {
            uVar6 = uVar2 / param_2;
          }
          uVar2 = uVar2 - uVar6 * param_2;
        }
        if (uVar2 != uVar7) {
          if (*(long *)(lVar1 + uVar2 * 8) == 0) {
            *(long **)(lVar1 + uVar2 * 8) = plVar4;
            uVar7 = uVar2;
          }
          else {
            *plVar4 = *plVar3;
            *plVar3 = **(undefined8 **)(lVar1 + uVar2 * 8);
            **(long **)(lVar1 + uVar2 * 8) = (long)plVar3;
            plVar3 = plVar4;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1077c9344; end: 1077c937b;  */

void FUN_1077c9344(void)

{
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001077c9e9c();
  while (unaff_x21 != unaff_x20) {
    func_0x0001077c9ffc();
    func_0x00010750b8bc();
    func_0x0001077ca110();
  }
  return;
}



/* Entry: 1077c94b0; end: 1077c9527;  */

long *** FUN_1077c94b0(long ***param_1,undefined8 *param_2)

{
  long ***ppplVar1;
  long ***ppplVar2;
  long **pplVar3;
  long **pplVar4;
  long **pplStack_48;
  long lStack_40;
  long lStack_38;
  long **pplStack_30;
  long **pplStack_28;
  
  ppplVar1 = param_1 + 2;
  pplVar3 = *param_1;
  if ((undefined8 *)((long)*ppplVar1 - (long)pplVar3 >> 3) < param_2) {
    if ((ulong)param_2 >> 0x3d != 0) {
      func_0x0001072d2a2c();
      func_0x0001077c9f78();
      func_0x0001072d2a80();
      func_0x0001077c9da4();
      func_0x0001077ca398();
      if (ppplVar1 < param_1[2]) {
        ppplVar2 = ppplVar1 + 1;
        *ppplVar1 = (long **)*param_2;
      }
      else {
        ppplVar2 = param_1;
        func_0x0001077c9568();
      }
      param_1[1] = (long **)ppplVar2;
      return ppplVar2 + -1;
    }
    pplVar4 = param_1[1];
    pplStack_28 = (long **)ppplVar1;
    func_0x0001072d2a40();
    lStack_40 = (long)ppplVar1 + ((long)pplVar4 - (long)pplVar3);
    pplStack_30 = (long **)(ppplVar1 + (long)param_2);
    pplStack_48 = (long **)ppplVar1;
    lStack_38 = lStack_40;
    func_0x0001077ca074();
    func_0x0001072d29b4();
    ppplVar1 = &pplStack_48;
    func_0x0001072d2a80(ppplVar1);
  }
  return ppplVar1;
}



/* Entry: 1077c975c; end: 1077c979b;  */

void FUN_1077c975c(void)

{
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001077ca364();
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 8) {
    func_0x0001077c9ffc();
    func_0x00010752f6ec();
  }
  func_0x0001077ca14c();
  return;
}



/* Entry: 1077c998c; end: 1077c99cb;  */

undefined8 * FUN_1077c998c(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109b7130;
  param_1[1] = 0;
  func_0x000107471f3c(param_1 + 3);
  return param_1;
}



/* Entry: 1077c9c84; end: 1077c9cd7;  */

void FUN_1077c9c84(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x0001077c9e24();
  *param_1 = &PTR_DAT_1109dd160;
  uVar1 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 3,param_2 + 2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (unaff_x19 + 0x30,unaff_x20 + 0x28);
  return;
}



/* Entry: 1077ca49c; end: 1077ca987;  */

uint * FUN_1077ca49c(uint *param_1,undefined8 *param_2)

{
  ulong uVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  undefined1 uVar8;
  int iVar9;
  long lVar10;
  uint *puVar11;
  uint *puVar12;
  undefined8 **ppuVar13;
  undefined1 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined *puVar17;
  undefined8 extraout_x8;
  ulong uVar18;
  long extraout_x8_00;
  long unaff_x20;
  undefined1 *unaff_x21;
  undefined8 *puVar19;
  undefined8 *unaff_x22;
  long lVar20;
  ulong uVar21;
  uint *unaff_x24;
  uint *puVar22;
  ulong *unaff_x25;
  ulong *puVar23;
  long lVar24;
  undefined8 *unaff_x27;
  byte bVar25;
  uint6 uVar26;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  undefined8 uVar27;
  byte bVar33;
  undefined8 **ppuStack_300;
  undefined8 *puStack_2f8;
  undefined8 *puStack_2f0;
  undefined1 *puStack_2e8;
  long lStack_2e0;
  uint *puStack_2d8;
  undefined1 *puStack_2d0;
  undefined *puStack_2c8;
  long lStack_2b8;
  undefined8 *puStack_2b0;
  uint *puStack_2a8;
  ulong *puStack_2a0;
  undefined8 *puStack_298;
  ulong *puStack_290;
  undefined8 auStack_288 [21];
  undefined1 uStack_1e0;
  undefined1 auStack_1d8 [56];
  ulong uStack_1a0;
  long lStack_198;
  ulong uStack_190;
  undefined8 auStack_180 [8];
  int iStack_140;
  uint *puStack_138;
  undefined8 auStack_130 [7];
  undefined8 uStack_f8;
  char cStack_f0;
  long lStack_e8;
  uint *puStack_e0;
  byte bStack_d8;
  undefined8 auStack_d0 [8];
  undefined8 uStack_90;
  uint uVar6;
  uint uVar7;
  
  func_0x0001077ee6bc();
  uVar8 = false;
  puVar15 = param_2;
  uStack_90 = extraout_x8;
  if (*(short *)((long)param_1 + 0x16) == 3) {
    lVar24 = *(long *)(param_1 + 2);
    unaff_x20 = lVar24 + (ulong)*param_1 * 0x30;
    puStack_2a0 = &uStack_1a0;
    func_0x0001077f0f38();
    lStack_2b8 = unaff_x20;
    puStack_2b0 = puVar15;
    while( true ) {
      unaff_x22 = auStack_130;
      unaff_x21 = auStack_1d8;
      uVar8 = true;
      if (lVar24 == unaff_x20) break;
      lVar20 = lVar24;
      if ((*(ushort *)(lVar24 + 0x16) >> 0xc & 1) == 0) {
        lVar20 = *(long *)(lVar24 + 8);
      }
      lVar10 = lVar20;
      _strlen(lVar20);
      func_0x000107552bcc(auStack_1d8);
      func_0x000104c302a4(auStack_130,lVar20,lVar10);
      puVar22 = (uint *)(lVar24 + 0x18);
      puVar15 = auStack_130;
      func_0x000104c2f1f0(auStack_1d8);
      func_0x000104c2f714(auStack_130);
      uVar8 = *(short *)(lVar24 + 0x2e) == 3;
      unaff_x24 = puVar22;
      if ((bool)uVar8) {
        puVar11 = puVar22;
        puVar15 = unaff_x27;
        func_0x000107327090();
        if (((ulong)puVar11 & 1) != 0) {
          puVar11 = puVar22;
          func_0x000107327234(puVar22,unaff_x27);
          puVar15 = (undefined8 *)&UNK_10f42a4d5;
          puVar12 = puVar22;
          puStack_2a8 = puVar11;
          func_0x000107327090();
          unaff_x24 = puStack_2a8;
          if ((int)puVar12 != 0) {
            puVar15 = (undefined8 *)&UNK_10f42a4d5;
            func_0x000107327234();
            uVar8 = *(short *)((long)puVar22 + 0x16) == 3;
            if (!(bool)uVar8) goto LAB_1077ca868;
            puVar15 = (undefined8 *)(ulong)*puVar22;
            func_0x000107552c00(puStack_2a0);
            puVar19 = *(undefined8 **)(puVar22 + 2);
            unaff_x27 = puVar19 + (ulong)*puVar22 * 6;
            for (; unaff_x24 = puStack_2a8, param_2 = puStack_2b0, unaff_x20 = lStack_2b8,
                uVar8 = puVar19 == unaff_x27, !(bool)uVar8; puVar19 = puVar19 + 6) {
              puVar16 = puVar19;
              if ((*(ushort *)((long)puVar19 + 0x16) >> 0xc & 1) == 0) {
                puVar16 = (undefined8 *)puVar19[1];
              }
              puVar15 = auStack_d0;
              func_0x000100060964(puVar15,puVar16);
              if ((*(ushort *)((long)puVar19 + 0x2e) >> 0xc & 1) == 0) {
                puVar22 = (uint *)puVar19[4];
              }
              else {
                puVar22 = (uint *)(puVar19 + 3);
              }
              func_0x0001077f0538();
              func_0x0001077741ec(&lStack_e8,puVar22);
              if ((bStack_d8 & 1) == 0) {
                func_0x0001077f14f0();
                func_0x0001077f1584();
                param_2 = puStack_2b0;
                unaff_x20 = lStack_2b8;
                func_0x0001077f0f38();
                goto LAB_1077ca868;
              }
              func_0x000104c2fe00(auStack_130,auStack_d0);
              func_0x0001072c9ff4(&uStack_f8,&lStack_e8);
              Hint_Prefetch(uStack_1a0,0,2,0);
              puVar15 = auStack_d0;
              func_0x000104c2fe38(uStack_1a0);
              uVar4 = uStack_190;
              uVar3 = uStack_1a0;
              lVar20 = 0;
              uVar18 = uStack_1a0 >> 0xc ^ (ulong)puVar15 >> 7;
              bVar2 = (byte)puVar15;
              uVar26 = CONCAT15(bVar2,CONCAT14(bVar2,CONCAT13(bVar2,CONCAT12(bVar2,CONCAT11(bVar2,
                                                  bVar2))))) & 0x7f7f7f7f7f7f;
              while( true ) {
                uVar18 = uVar18 & uVar4;
                uVar27 = *(undefined8 *)(uVar3 + uVar18);
                cVar28 = (char)((ulong)uVar27 >> 8);
                cVar29 = (char)((ulong)uVar27 >> 0x10);
                cVar30 = (char)((ulong)uVar27 >> 0x18);
                cVar31 = (char)((ulong)uVar27 >> 0x20);
                cVar32 = (char)((ulong)uVar27 >> 0x28);
                bVar25 = (byte)((ulong)uVar27 >> 0x30);
                bVar33 = (byte)((ulong)uVar27 >> 0x38);
                unaff_x25 = puStack_2a0;
                for (uVar21 = CONCAT17(-(bVar33 == (bVar2 & 0x7f)),
                                       CONCAT16(-(bVar25 == (bVar2 & 0x7f)),
                                                CONCAT15(-(cVar32 == (char)(uVar26 >> 0x28)),
                                                         CONCAT14(-(cVar31 == (char)(uVar26 >> 0x20)
                                                                   ),CONCAT13(-(cVar30 ==
                                                                               (char)(uVar26 >> 0x18
                                                                                     )),
                                                                              CONCAT12(-(cVar29 ==
                                                                                        (char)(
                                                  uVar26 >> 0x10)),
                                                  CONCAT11(-(cVar28 == (char)(uVar26 >> 8)),
                                                           -((char)uVar27 == (char)uVar26)))))))) &
                              0x8080808080808080; puStack_2a0 = unaff_x25, uVar21 != 0;
                    uVar21 = uVar21 - 1 & uVar21) {
                  uVar1 = (uVar21 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                          (uVar21 >> 7 & 0xff00ff00ff00ff) << 8;
                  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
                  puStack_298 = auStack_d0;
                  puVar23 = (ulong *)(uVar18 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3)
                                     & uVar4);
                  ppuVar13 = &puStack_298;
                  puStack_290 = unaff_x25;
                  func_0x00010776a3d4(ppuVar13,lStack_198 + (long)puVar23 * 0x80);
                  unaff_x25 = puVar23;
                  if (((ulong)ppuVar13 & 1) != 0) goto LAB_1077ca72c;
                  unaff_x25 = puStack_2a0;
                }
                bVar25 = NEON_umaxv(CONCAT17(-(bVar33 == 0x80),
                                             CONCAT16(-(bVar25 == 0x80),
                                                      CONCAT15(-(cVar32 == -0x80),
                                                               CONCAT14(-(cVar31 == -0x80),
                                                                        CONCAT13(-(cVar30 == -0x80),
                                                                                 CONCAT12(-(cVar29 
                                                  == -0x80),
                                                  CONCAT11(-(cVar28 == -0x80),
                                                           -((char)uVar27 == -0x80)))))))),1);
                if ((bVar25 & 1) != 0) break;
                lVar20 = lVar20 + 8;
                uVar18 = lVar20 + uVar18;
              }
              func_0x0001077d5a70(unaff_x25,puVar15);
              lVar20 = lStack_198 + (long)unaff_x25 * 0x80;
              lVar10 = lVar20;
              func_0x000104c2fe00(lVar20,auStack_d0);
              *(undefined8 *)(lVar20 + 0x78) = 0;
              *(undefined8 *)(lVar20 + 0x70) = 0;
              *(undefined8 *)(lVar20 + 0x68) = 0;
              *(undefined8 *)(lVar20 + 0x60) = 0;
              *(undefined8 *)(lVar20 + 0x58) = 0;
              *(undefined8 *)(lVar20 + 0x50) = 0;
              *(undefined8 *)(lVar20 + 0x48) = 0;
              *(undefined8 *)(lVar10 + 0x40) = 0;
              *(undefined8 *)(lVar10 + 0x38) = 0;
              func_0x000104c2f64c();
              *(undefined4 *)(lVar20 + 0x78) = 6;
LAB_1077ca72c:
              lVar20 = lStack_198 + (long)unaff_x25 * 0x80;
              func_0x000104c2f1f0(lVar20 + 0x38,auStack_130);
              puVar15 = &uStack_f8;
              func_0x00010756bb84(lVar20 + 0x70);
              func_0x000107551b58(auStack_130);
              func_0x0001077f14f0();
              func_0x0001077f1584();
            }
            func_0x0001077f0f38();
          }
          goto LAB_1077ca780;
        }
LAB_1077ca868:
        auStack_288[0]._0_1_ = 0;
        uStack_1e0 = 0;
        unaff_x24 = puVar22;
      }
      else {
LAB_1077ca780:
        puStack_138 = unaff_x24;
        func_0x0001077efb9c();
        iVar9 = (int)&lStack_e8;
        lStack_e8 = extraout_x8_00;
        puStack_e0 = unaff_x24;
        func_0x000107766098();
        if (iVar9 == 0) {
          (**(code **)(lStack_e8 + 0x70))(auStack_130,unaff_x25 + 1);
          uVar8 = cStack_f0 == '\x01';
          if ((bool)uVar8) {
            uVar8 = iStack_140 == 1;
            if ((bool)uVar8) {
              puVar15 = auStack_130;
              func_0x0001072d80fc(auStack_180);
            }
            else {
              func_0x000107268350(auStack_d0,auStack_130);
              puVar15 = auStack_d0;
              func_0x000107552ba0(auStack_180);
              func_0x000104c3323c(auStack_d0);
            }
            func_0x0001077f14d8();
            func_0x0001077f159c();
          }
          else {
            func_0x0001077f159c();
            auStack_288[0]._0_1_ = 0;
            uStack_1e0 = 0;
          }
        }
        else {
          if (iStack_140 == 0) {
            func_0x0001077f19fc();
            puVar15 = auStack_180;
            func_0x000107552fa4(auStack_130);
          }
          else {
            func_0x0001077f19fc();
            puVar15 = auStack_130;
            func_0x000107552b24(auStack_180);
          }
          func_0x000107551a8c(auStack_130);
          func_0x0001077f14d8();
        }
        func_0x0001072f5f6c(&lStack_e8);
      }
      func_0x000107551a04(auStack_1d8);
      func_0x0001077f19cc();
      if ((bool)uVar8) {
        puVar15 = auStack_288;
        func_0x000107551228(*param_2);
      }
      param_1 = (uint *)auStack_288;
      func_0x0001077d5da4();
      lVar24 = lVar24 + 0x30;
    }
  }
  func_0x0001077ee344(uStack_90);
  if ((bool)uVar8) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000104c2f714(unaff_x24);
  func_0x000107551b58(auStack_130);
  func_0x0001077f14f0();
  func_0x0001077f1584();
  puVar14 = auStack_1d8;
  func_0x000107551a04(puVar14);
  func_0x0001077ef068();
  puVar17 = &UNK_1077ca988;
  func_0x0001077f0954();
  if ((bool)uVar8) {
    uVar7 = (uint)&ppuStack_300;
    uVar6 = (uint)&ppuStack_300;
    uVar5 = (uint)&ppuStack_300;
    ppuStack_300 = &puStack_2f8;
    puStack_2f8 = puVar15;
    puStack_2f0 = unaff_x22;
    puStack_2e8 = unaff_x21;
    lStack_2e0 = unaff_x20;
    puStack_2d8 = param_1;
    puStack_2d0 = &stack0xfffffffffffffff0;
    puStack_2c8 = puVar17;
    func_0x0001077caa1c(&ppuStack_300,&UNK_10f42a46e,puVar14 + 0x1d8);
    func_0x0001077caa1c(&ppuStack_300,&UNK_10f42a477,puVar14 + 0x1f8);
    func_0x0001077caa1c(&ppuStack_300,&UNK_10f42a480,puVar14 + 0x218);
    return (uint *)(ulong)(uVar7 | uVar6 | uVar5);
  }
  return (uint *)0x0;
}



/* Entry: 1077cad3c; end: 1077cadaf;  */

void FUN_1077cad3c(void)

{
  undefined8 extraout_x9;
  long unaff_x19;
  undefined1 auStack_c8 [136];
  byte bStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001077efd7c();
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x0001077cadb0(auStack_c8,extraout_x9,&uStack_38);
  if ((bStack_40 & 1) != 0) {
    func_0x0001077cadf0(unaff_x19 + 0xb0,auStack_c8);
  }
  func_0x0001077d5df0(auStack_c8);
  func_0x0001077f02ec();
  return;
}



/* Entry: 1077cb014; end: 1077cb053;  */

void FUN_1077cb014(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_38 [16];
  undefined8 uStack_28;
  
  func_0x0001077ee468();
  func_0x0001077da5d8(auStack_38);
  func_0x0001077ef55c();
  func_0x0001077ee344(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001077eecd4();
  func_0x0001077ef068();
  func_0x0001077ef34c();
  func_0x0001074f5ed4();
  *(undefined8 *)(unaff_x20 + 0x10) = *(undefined8 *)(unaff_x19 + 0x10);
  return;
}



/* Entry: 1077d53c8; end: 1077d543f;  */

void FUN_1077d53c8(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x9;
  long unaff_x19;
  undefined1 auStack_70 [48];
  byte bStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001077f0954();
  if ((bool)in_ZR) {
    func_0x0001077efd7c();
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_28 = 0;
    func_0x0001077d5440(auStack_70,extraout_x9,&uStack_38);
    if ((bStack_40 & 1) != 0) {
      func_0x00010793f5a4(unaff_x19 + 400,auStack_70);
    }
    func_0x0001077da3dc(auStack_70);
    func_0x0001077f02ec();
  }
  return;
}



/* Entry: 1077d5d44; end: 1077d5d7b;  */

long FUN_1077d5d44(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109dd270);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1077d5f00; end: 1077d5f1b;  */

void FUN_1077d5f00(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = lRam0000000113726328;
  lRam0000000113726328 = param_1;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1077d7748; end: 1077d77af;  */

long FUN_1077d7748(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  int extraout_w9;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 ****ppppuVar3;
  undefined *puVar4;
  undefined1 auStack_140 [144];
  undefined8 ***pppuStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [80];
  
  puVar2 = auStack_80;
  puVar1 = auStack_80;
  func_0x0001077f0ca0();
  if ((!(bool)in_ZR) && (extraout_w9 != 0)) {
    func_0x0001077f1054();
    func_0x0001077ef5bc();
    func_0x00010727f6f4();
    func_0x0001077f11f0();
    param_3 = puVar2;
  }
  func_0x0001077ee28c();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001077ef244();
  func_0x00010724b3d8();
  func_0x0001077ef068();
  puStack_88 = &UNK_1077d77b0;
  pppuStack_90 = (undefined8 ***)&stack0xfffffffffffffff0;
  func_0x0001077ee32c();
  if (*(int *)(param_3 + 0x70) == 0) {
    func_0x0001077ee28c();
    if ((bool)in_ZR) {
      func_0x0001077f106c();
      ppppuVar3 = (undefined8 ****)pppuStack_90;
      puVar4 = puStack_88;
      goto code_r0x0001000df598;
    }
  }
  else {
    func_0x0001077f1840();
    if ((bool)in_ZR) {
      func_0x0001077ee28c();
      if ((bool)in_ZR) {
        func_0x0001077f0fe8();
        puVar1 = auStack_80;
        ppppuVar3 = (undefined8 ****)pppuStack_90;
        puVar4 = puStack_88;
        goto code_r0x0001000df598;
      }
    }
    else {
      func_0x0001077ee890();
      func_0x0001077ee9c4();
      func_0x0001077efaf8();
      func_0x0001077efa48();
      func_0x0001077ee28c();
      if ((bool)in_ZR) {
        return param_1;
      }
    }
  }
  ___stack_chk_fail();
  func_0x0001077ef21c();
  func_0x000104c2f714();
  func_0x0001077efa48();
  func_0x0001077ef068();
  puVar1 = auStack_140;
  ppppuVar3 = &pppuStack_90;
  puVar4 = &UNK_1077d7830;
code_r0x0001000df598:
  *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
  *(long *)(puVar1 + -0x18) = unaff_x19;
  *(undefined8 *****)(puVar1 + -0x10) = ppppuVar3;
  *(undefined **)(puVar1 + -8) = puVar4;
  func_0x0001000d03a8();
  func_0x000104c2feb0();
  *(undefined8 *)(unaff_x19 + 0x30) = 0xffffffffffffffff;
  func_0x000104c2fe38();
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  return unaff_x19;
}



/* Entry: 1077d79d4; end: 1077d7a3b;  */

void FUN_1077d79d4(long param_1,long param_2)

{
  uint uVar1;
  undefined4 extraout_w8;
  long unaff_x19;
  
  func_0x0001077ef148();
  *(undefined4 *)(param_1 + 0x30) = extraout_w8;
  func_0x00010755fea8();
  uVar1 = *(uint *)(param_2 + 0x30);
  if (uVar1 != 0xffffffff) {
    func_0x0001077eeda0((&PTR_DAT_1109dd3d0)[uVar1]);
    *(uint *)(unaff_x19 + 0x30) = uVar1;
  }
  return;
}



/* Entry: 1077d7eac; end: 1077d7f4b;  */

ulong FUN_1077d7eac(ulong *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined1 in_ZR;
  ulong *puVar1;
  ulong uVar2;
  uint unaff_w21;
  uint unaff_w22;
  int unaff_w23;
  
  puVar1 = param_1;
  func_0x0001077ee434();
  uVar2 = *puVar1;
  func_0x0001077ef734(uVar2);
  func_0x0001077efcac();
  if ((bool)in_ZR) {
    func_0x0001077ef72c();
    func_0x00010755ced0();
    func_0x0001077f1648();
  }
  else {
    unaff_w22 = 0;
    unaff_w21 = 0;
    unaff_w23 = 1;
  }
  func_0x0001077ee79c();
  if (unaff_w23 == 0) {
    param_4 = (ulong)(unaff_w21 | unaff_w22);
  }
  else {
    in_ZR = *(char *)((long)param_1 + 0x2c) == '\x01';
    if ((bool)in_ZR) {
      param_4 = (ulong)(uint)param_1[5];
    }
  }
  func_0x0001077ee314();
  if ((bool)in_ZR) {
    return param_4;
  }
  ___stack_chk_fail();
  func_0x0001077ee510();
  func_0x0001077ef068();
  func_0x0001077ee32c();
  func_0x0001077ef048();
  func_0x0001077ee8ac();
  func_0x0001077f05dc();
  func_0x0001077ef7b8();
  func_0x0001077efdf0();
  func_0x0001077efe10();
  func_0x0001077ee28c();
  if ((bool)in_ZR) {
    return uVar2;
  }
  ___stack_chk_fail();
  func_0x0001077ef8a8();
  func_0x0001077efe10();
  func_0x0001077ef068();
  func_0x0001077f1970();
  func_0x00010755ccf0();
  return uVar2;
}



/* Entry: 1077d8364; end: 1077d8367;  */

void FUN_1077d8364(undefined8 param_1)

{
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x0001000d03a8(param_1,0x1138369c0);
  func_0x000104c2feb0();
  *(undefined8 *)(unaff_x19 + 0x30) = 0xffffffffffffffff;
  func_0x000104c2fe38();
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  return;
}



/* Entry: 1077d8864; end: 1077d8a63;  */

undefined1 * FUN_1077d8864(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 in_ZR;
  long lVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined1 auStack_198 [64];
  undefined4 auStack_158 [16];
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_d8 [56];
  undefined1 uStack_a0;
  undefined8 uStack_98;
  undefined8 auStack_90 [8];
  char cStack_50;
  
  puVar6 = &uStack_1b0;
  lVar3 = param_1;
  func_0x0001077ee3e4();
  uStack_118 = 0;
  uStack_110 = 0;
  uStack_108 = 0;
  if ((*(int *)(lVar3 + 0x50) == 0) || (in_ZR = *(int *)(lVar3 + 0x50) == 1, (bool)in_ZR)) {
    func_0x0001077efd30(&uStack_1b0);
  }
  else {
    func_0x0001077eeff4();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_d8,&uStack_118)
    ;
    func_0x0001077ef238(&uStack_1b0);
    func_0x00010727f9d8();
    func_0x0001077ef40c();
    func_0x0001077ef544();
  }
  func_0x0001077f0760();
  auStack_158[0] = 7;
  if (*(int *)(param_1 + 200) == 0) {
    puVar4 = auStack_158;
  }
  else {
    puVar4 = (undefined4 *)(param_1 + 0x58);
    in_ZR = *(int *)(param_1 + 200) == 1;
    if (!(bool)in_ZR) {
      auStack_d8[0] = 0;
      uStack_a0 = 0;
      uStack_98 = 0;
      func_0x000107268350(&uStack_118,auStack_158);
      func_0x0001077ef238(auStack_90);
      func_0x000107386204();
      puVar1 = (undefined8 *)(param_1 + 0x80);
      if (*(char *)(param_1 + 0xc0) == '\0') {
        puVar1 = &uStack_118;
      }
      in_ZR = cStack_50 == '\0';
      puVar2 = auStack_90;
      if ((bool)in_ZR) {
        puVar2 = puVar1;
      }
      func_0x000107268350(auStack_198,puVar2);
      func_0x000107267ed0(auStack_90);
      func_0x000104c3323c(&uStack_118);
      func_0x00010724b3d8(auStack_d8);
      goto LAB_1077d8984;
    }
  }
  func_0x000107268350(auStack_198,puVar4);
LAB_1077d8984:
  puVar4 = auStack_158;
  func_0x000104c3323c();
  func_0x0001077f0c20();
  *(undefined8 *)(puVar4 + 4) = uStack_1a8;
  *(undefined8 *)(puVar4 + 2) = uStack_1b0;
  *(undefined8 *)(puVar4 + 6) = uStack_1a0;
  uStack_1a8 = 0;
  uStack_1a0 = 0;
  uStack_1b0 = 0;
  func_0x000104c32a18(puVar4 + 8,auStack_198);
  func_0x0001077f07dc(&PTR_DAT_1109dd7c8);
  puVar5 = auStack_198;
  func_0x000104c3323c(puVar5);
  func_0x0001077ef56c();
  func_0x0001077ee314();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001077efc7c();
    func_0x000107267ed0();
    func_0x000104c3323c(&uStack_118);
    func_0x00010724b3d8(auStack_d8);
    func_0x000104c3323c(auStack_158);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_1b0);
    func_0x0001077ef068();
    func_0x0001073834c0((undefined1 *)((long)puVar6 + 0x50));
    func_0x0001077f1460();
    return (undefined1 *)puVar6;
  }
  return puVar5;
}



/* Entry: 1077d8fb8; end: 1077d9083;  */

long FUN_1077d8fb8(long param_1)

{
  func_0x0001073391b0(param_1 + 0x230);
  func_0x00010732442c(param_1 + 0x1c0);
  func_0x00010732442c(param_1 + 0x148);
  func_0x00010732442c(param_1 + 0xd0);
  func_0x00010732442c(param_1 + 0x58);
  func_0x0001077f1460();
  return param_1;
}



/* Entry: 1077d945c; end: 1077d9463;  */

void FUN_1077d945c(undefined8 param_1)

{
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x0001000d03a8(param_1,0x1138369c0);
  func_0x000104c2feb0();
  *(undefined8 *)(unaff_x19 + 0x30) = 0xffffffffffffffff;
  func_0x000104c2fe38();
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  return;
}



/* Entry: 1077d97f0; end: 1077d98cb;  */

/* WARNING: Possible PIC construction at 0x0001077d9868: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077d986c) */

void FUN_1077d97f0(long *param_1,undefined *param_2)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined1 extraout_w8;
  undefined8 *extraout_x8;
  undefined8 *unaff_x19;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 ***pppuVar6;
  undefined *puVar7;
  undefined1 auStack_20a [138];
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined4 uStack_108;
  undefined1 uStack_f9;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [16];
  char cStack_d0;
  undefined *puStack_c0;
  undefined8 **ppuStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 uStack_98;
  undefined4 uStack_68;
  undefined1 uStack_59;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  char cStack_30;
  
  puVar1 = (undefined8 *)auStack_a0;
  func_0x0001077ee3e4();
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  plVar3 = param_1 + 1;
  puVar5 = &DAT_10f42a581;
  (**(code **)(*param_1 + 0x38))(auStack_40);
  uVar2 = cStack_30 == '\x01';
  if ((bool)uVar2) {
    func_0x0001077d9a38(param_2,&uStack_59);
    uStack_98 = 1;
    uStack_68 = 1;
    puVar7 = (undefined *)0x1077d986c;
    puVar4 = unaff_x19;
    puVar5 = param_2;
    pppuVar6 = (undefined8 ***)&stack0xfffffffffffffff0;
  }
  else {
    *(undefined1 *)unaff_x19 = 1;
    *(undefined4 *)(unaff_x19 + 6) = 1;
    func_0x0001077f0b84();
    func_0x0001077ef670();
    func_0x0001077ee2e4();
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001077ef21c();
    func_0x0001075610b8();
    func_0x0001077f0b84();
    func_0x0001077ef670();
    func_0x0001077ef068();
    puVar1 = &uStack_180;
    puVar4 = &uStack_180;
    puStack_a8 = &UNK_1077d98cc;
    pppuVar6 = &ppuStack_b0;
    puStack_c0 = param_2;
    ppuStack_b0 = (undefined8 **)&stack0xfffffffffffffff0;
    func_0x0001077ee3e4();
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    (**(code **)(*plVar3 + 0x38))(auStack_e0,plVar3 + 1,"text");
    uVar2 = cStack_d0 == '\x01';
    if ((bool)uVar2) {
      puVar7 = puVar5;
      func_0x0001077d9c48(puVar5,&uStack_f9);
      uStack_150 = 0;
      uStack_148 = 0;
      uStack_140 = 0;
      uStack_160 = 0;
      uStack_158 = 0;
      uStack_168 = 0;
      uStack_108 = 1;
      func_0x0001077d9bd0(auStack_e0,puVar7,&uStack_150,"text");
      func_0x00010727e9d0(&uStack_150);
      puVar4 = &uStack_168;
    }
    else {
      func_0x0001077efcb8();
      uStack_178 = 0;
      uStack_170 = 0;
      uStack_180 = 0;
      *(undefined4 *)(unaff_x19 + 9) = 1;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x0001077f0b84();
    func_0x0001077f1358();
    func_0x0001077ee2e4();
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010727e9d0(&uStack_150);
    func_0x0001077ef370();
    func_0x0001077f0b84();
    func_0x0001077f1358();
    puVar7 = &SUB_1077d99cc;
    func_0x0001077ef068();
    unaff_x19 = extraout_x8;
  }
  *(undefined8 *)((long)puVar1 + -0x30) = unaff_x22;
  *(undefined8 *)((long)puVar1 + -0x28) = unaff_x21;
  *(undefined **)((long)puVar1 + -0x20) = puVar5;
  *(undefined8 **)((long)puVar1 + -0x18) = puVar4;
  *(undefined8 ****)((long)puVar1 + -0x10) = pppuVar6;
  *(undefined **)((long)puVar1 + -8) = puVar7;
  func_0x0001077ef9d8();
  *(undefined1 *)((long)puVar1 + -0x89) = extraout_w8;
  *(undefined1 *)((long)puVar1 + -0x8a) = 0;
  func_0x0001077ef9c0();
  func_0x0001077d9a98();
  func_0x0001077f0e88();
  func_0x0001077d9ad0(unaff_x19);
  func_0x0001077d9b7c((undefined1 *)((long)puVar1 + -0x88));
  func_0x0001077efc64();
  return;
}



/* Entry: 1077d9b58; end: 1077d9ba3;  */

void FUN_1077d9b58(long param_1,long param_2)

{
  func_0x00010727d6bc();
  *(undefined2 *)(param_1 + 0x28) = *(undefined2 *)(param_2 + 0x28);
  return;
}



/* Entry: 1077d9d38; end: 1077d9d3f;  */

void FUN_1077d9d38(void)

{
  return;
}



/* Entry: 1077da048; end: 1077da093;  */

long FUN_1077da048(long param_1,undefined8 param_2)

{
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  func_0x0001077da094(param_1,param_2,&UNK_10dd5b8f9,&uStack_18,&uStack_19);
  return param_1 + 0x48;
}



/* Entry: 1077da3b8; end: 1077da3fb;  */

void FUN_1077da3b8(long param_1)

{
  if (*(char *)(param_1 + 0xd8) == '\x01') {
    func_0x000107266968();
    *(undefined1 *)(param_1 + 0xd8) = 0;
  }
  return;
}



/* Entry: 1077dcbc4; end: 1077dcbdb;  */

void FUN_1077dcbc4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077dd5e8; end: 1077dd5f7;  */

undefined8 FUN_1077dd5e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x130);
}



/* Entry: 1077dda80; end: 1077dda9f;  */

undefined8 FUN_1077dda80(void)

{
  undefined8 uStack_18;
  
  func_0x0001077efa78();
  func_0x0001077de230();
  return uStack_18;
}



/* Entry: 1077ddc48; end: 1077ddc7b;  */

undefined8 * FUN_1077ddc48(undefined8 *param_1,long param_2,long param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x0001077ddc7c(param_1,param_2,param_2 + param_3 * 0x88,param_3);
  return param_1;
}



/* Entry: 1077ddde4; end: 1077dde0f;  */

void FUN_1077ddde4(void)

{
  uint extraout_w8;
  
  func_0x0001077f0c60();
  if ((extraout_w8 & 1) == 0) {
    func_0x0001077dde10();
  }
  return;
}



/* Entry: 1077ddf94; end: 1077ddfd3;  */

void FUN_1077ddf94(undefined8 param_1,ulong param_2)

{
  if (param_2 < 0xaaaaaaaaaaaaaab) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x18);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001077ddfd4();
  return;
}



/* Entry: 1077de15c; end: 1077de16b;  */

void FUN_1077de15c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  func_0x0001077efce8();
  while (param_3 != param_5) {
    param_3 = param_3 + -0x18;
    func_0x00010747305c();
  }
  return;
}



/* Entry: 1077de3fc; end: 1077de47b;  */

void FUN_1077de3fc(long param_1,long param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar2 = *(long *)(param_1 + 8);
  uVar1 = param_2 + (lVar2 - param_4);
  lVar3 = lVar2;
  for (uVar4 = uVar1; uVar4 < param_3; uVar4 = uVar4 + 0x88) {
    func_0x0001077de69c(lVar3 + 8,uVar4 + 8);
    lVar3 = lVar3 + 0x88;
  }
  *(long *)(param_1 + 8) = lVar3;
  func_0x0001077eeaec(param_2,uVar1,lVar2);
  func_0x0001077de74c();
  return;
}



/* Entry: 1077de708; end: 1077de72b;  */

void FUN_1077de708(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  func_0x000104c318ec();
  *(undefined8 *)(lVar1 + 0x30) = 0xffffffffffffffff;
  *(undefined8 *)(lVar1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  return;
}



/* Entry: 1077de878; end: 1077de89f;  */

void FUN_1077de878(void)

{
  long unaff_x20;
  
  func_0x0001077ef34c();
  func_0x0001074730f4();
  func_0x0001077ef474();
  func_0x000104c318bc();
  *(undefined4 *)(unaff_x20 + 0x78) = 0;
  return;
}



/* Entry: 1077de980; end: 1077de98b;  */

void FUN_1077de980(undefined8 *param_1)

{
  long unaff_x20;
  
  func_0x0001077ef34c(*param_1,param_1[1]);
  func_0x0001074730f4();
  func_0x0001077ef474();
  func_0x000104c318bc();
  *(undefined4 *)(unaff_x20 + 0x78) = 2;
  return;
}



/* Entry: 1077deb1c; end: 1077deb23;  */

void FUN_1077deb1c(long param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x20;
  
  func_0x0001077ef34c(param_1,*(undefined8 *)(param_1 + 8));
  while (func_0x0001077f0fac(), !(bool)in_ZR) {
    *(long *)(unaff_x20 + 0x10) = extraout_x8 + -0x88;
    func_0x0001074730f4(extraout_x8 + -0x80);
  }
  return;
}



/* Entry: 1077dee94; end: 1077deef7;  */

ulong FUN_1077dee94(ulong param_1,undefined1 *param_2)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_1d0 [416];
  
  puVar2 = auStack_1d0;
  func_0x0001077ee32c();
  if ((*(int *)(param_2 + 0x98) == 0) || (in_ZR = *(int *)(param_2 + 0x98) == 1, (bool)in_ZR)) {
    func_0x0001077eea20(1);
  }
  else {
    func_0x0001077ee6d8();
    param_1 = unaff_x20 + 8;
    func_0x0001077ef0c4();
    func_0x0001077ef1a8();
    param_2 = puVar2;
  }
  func_0x0001077ee28c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    __Unwind_Resume();
    func_0x0001077ee32c();
    if ((*(int *)(param_2 + 0x30) == 0) || (in_ZR = *(int *)(param_2 + 0x30) == 1, (bool)in_ZR)) {
      func_0x0001077eea20(1);
    }
    else {
      func_0x0001077ee6d8();
      func_0x0001077ee4ec();
      func_0x0001077ef1a8();
    }
    func_0x0001077ee28c();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      __Unwind_Resume();
      func_0x0001077ee32c();
      if ((*(int *)(param_2 + 0x38) == 0) || (in_ZR = *(int *)(param_2 + 0x38) == 1, (bool)in_ZR)) {
        func_0x0001077eea20(1);
      }
      else {
        func_0x0001077ee6d8();
        func_0x0001077ee4ec();
        func_0x0001077ef1a8();
      }
      func_0x0001077ee28c();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        __Unwind_Resume();
        func_0x0001077ee32c();
        if ((*(int *)(param_2 + 0x40) == 0) || (in_ZR = *(int *)(param_2 + 0x40) == 1, (bool)in_ZR))
        {
          func_0x0001077eea20(1);
        }
        else {
          func_0x0001077ee6d8();
          func_0x0001077ee4ec();
          func_0x0001077ef1a8();
        }
        func_0x0001077ee28c();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          __Unwind_Resume();
          if (*(int *)(param_1 + 0x98) == 0) {
            return 1;
          }
          uVar1 = *(byte *)(param_1 + 0x18) >> 1 & 1;
          if (*(int *)(param_1 + 0x98) == 1) {
            uVar1 = 1;
          }
          return (ulong)uVar1;
        }
      }
    }
  }
  return param_1;
}



/* Entry: 1077df194; end: 1077df1ef;  */

void FUN_1077df194(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined1 uStack_39;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  uStack_50 = *param_4;
  uStack_48 = *(undefined4 *)(param_4 + 1);
  func_0x0001077df1f0(&uStack_38,&uStack_39,param_2,param_3,&uStack_50);
  *param_1 = uStack_38;
  param_1[1] = uStack_30;
  *(undefined4 *)(param_1 + 2) = uStack_28;
  return;
}



/* Entry: 1077df5d0; end: 1077df6a7;  */

bool FUN_1077df5d0(void)

{
  uint uVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  int extraout_w8;
  ulong extraout_x8;
  ulong uVar5;
  long extraout_x9;
  long lVar6;
  long extraout_x9_00;
  long extraout_x10;
  long lVar7;
  long extraout_x10_00;
  int extraout_w11;
  int iVar8;
  int extraout_w11_00;
  uint extraout_w13;
  undefined4 extraout_w13_00;
  undefined4 extraout_var;
  
  func_0x0001077ef1b8();
  func_0x0001077df888();
  func_0x0001077f1184();
  func_0x0001077f118c();
  func_0x0001077f0bd8();
  func_0x0001077ee5f4();
  uVar5 = extraout_x8;
  lVar6 = extraout_x9;
  lVar7 = extraout_x10;
  iVar8 = extraout_w11;
  while ((bVar4 = (int)uVar5 == iVar8, bVar2 = lVar6 == lVar7 && bVar4, lVar6 != lVar7 || !bVar4 &&
         (uVar3 = bVar2, func_0x0001077f03b4(), (extraout_w13 & 1) != 0))) {
    func_0x0001077f038c();
    lVar6 = extraout_x9_00 + CONCAT44(extraout_var,extraout_w13_00);
    uVar1 = 0;
    if (!(bool)uVar3) {
      uVar1 = extraout_w8 + 1;
    }
    uVar5 = (ulong)uVar1;
    lVar7 = extraout_x10_00;
    iVar8 = extraout_w11_00;
  }
  func_0x0001077eff98();
  return bVar2;
}



/* Entry: 1077df830; end: 1077df887;  */

ulong FUN_1077df830(ulong param_1,long param_2)

{
  uint uVar1;
  undefined1 in_ZR;
  
  func_0x0001077ee32c();
  if ((*(int *)(param_2 + 0x30) == 0) || (in_ZR = *(int *)(param_2 + 0x30) == 1, (bool)in_ZR)) {
    func_0x0001077eea20(1);
  }
  else {
    func_0x0001077ee6d8();
    func_0x0001077ee4ec();
    func_0x0001077ef1a8();
  }
  func_0x0001077ee28c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    __Unwind_Resume();
    if (*(int *)(param_1 + 0x70) == 0) {
      return 1;
    }
    uVar1 = *(byte *)(param_1 + 0x18) >> 1 & 1;
    if (*(int *)(param_1 + 0x70) == 1) {
      uVar1 = 1;
    }
    return (ulong)uVar1;
  }
  return param_1;
}



/* Entry: 1077e1aec; end: 1077e1cfb;  */

ulong FUN_1077e1aec(void)

{
  uint uVar1;
  undefined1 uVar2;
  ulong uVar3;
  int extraout_w8;
  ulong extraout_x8;
  long extraout_x9;
  long lVar4;
  long extraout_x9_00;
  long extraout_x10;
  long lVar5;
  long extraout_x10_00;
  int extraout_w11;
  int iVar6;
  int extraout_w11_00;
  uint extraout_w13;
  undefined4 extraout_w13_00;
  undefined4 extraout_var;
  long unaff_x19;
  ulong uVar7;
  
  func_0x0001077ee3c0();
  func_0x0001077e1f20();
  func_0x0001077df020();
  func_0x0001077df020();
  func_0x0001077df020();
  func_0x0001077df020();
  func_0x0001077df020();
  func_0x0001077df020();
  func_0x0001077df060();
  func_0x0001077df060();
  func_0x0001077df020();
  func_0x0001077df020();
  func_0x0001077df020();
  func_0x0001077df020();
  func_0x0001077df020();
  func_0x0001077df040();
  func_0x0001077df020();
  uVar3 = unaff_x19 + 0x3c8;
  func_0x0001077df060();
  func_0x0001077f0bf8();
  func_0x0001077ee5f4();
  uVar7 = extraout_x8;
  lVar4 = extraout_x9;
  lVar5 = extraout_x10;
  iVar6 = extraout_w11;
  while( true ) {
    uVar2 = lVar4 == lVar5 && (int)uVar7 == iVar6;
    uVar7 = (ulong)(byte)uVar2;
    if (((bool)uVar2) || (func_0x0001077f03b4(), (extraout_w13 & 1) == 0)) break;
    func_0x0001077f038c();
    lVar4 = extraout_x9_00 + CONCAT44(extraout_var,extraout_w13_00);
    uVar1 = 0;
    if (!(bool)uVar2) {
      uVar1 = extraout_w8 + 1;
    }
    uVar7 = (ulong)uVar1;
    lVar5 = extraout_x10_00;
    iVar6 = extraout_w11_00;
  }
  func_0x0001077eff98();
  func_0x0001077ee2e4();
  if ((bool)uVar2) {
    return uVar7;
  }
  ___stack_chk_fail();
  func_0x000107432d98(uVar3 + 0x3c0);
  func_0x000107266a30(uVar3 + 0x388);
  func_0x0001072ca524(uVar3 + 0x348);
  func_0x000107266a30(uVar3 + 0x310);
  func_0x000107266a30(uVar3 + 0x2d8);
  func_0x000107266a30(uVar3 + 0x2a0);
  func_0x000107266a30(uVar3 + 0x268);
  func_0x000107266a30(uVar3 + 0x230);
  func_0x0001077f1360();
  func_0x000107432d98(uVar3 + 0x1a0);
  func_0x000107266a30(uVar3 + 0x168);
  func_0x000107266a30(uVar3 + 0x130);
  func_0x000107266a30(uVar3 + 0xf8);
  func_0x000107266a30(uVar3 + 0xc0);
  func_0x000107266a30(uVar3 + 0x88);
  func_0x000107266a30(uVar3 + 0x50);
  func_0x00010755fb88(uVar3);
  return uVar3;
}



/* Entry: 1077e1e44; end: 1077e1e6f;  */

ulong FUN_1077e1e44(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint *param_4,
                   uint *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)((ulong)param_1 >> 0x20);
  uVar1 = (undefined4)param_1;
  if (param_4[0x10] == 1) {
    return (ulong)*param_4;
  }
  if (param_4[0x10] == 0) {
    return (ulong)*param_5;
  }
  func_0x0001077eff20();
  return CONCAT44(uVar2,uVar1);
}


