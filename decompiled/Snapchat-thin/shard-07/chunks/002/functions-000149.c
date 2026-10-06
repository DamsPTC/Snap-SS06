/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1052c1660; end: 1052c16b3;  */

void FUN_1052c1660(void)

{
  int iVar1;
  
  if ((bRam0000000113819548 & 1) == 0) {
    iVar1 = 0x13819548;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(0x113819540,"_djinni_interface_NotificationCenterManager");
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x113819548);
      return;
    }
  }
  return;
}



/* Entry: 1052c16b4; end: 1052c16db;  */

void FUN_1052c16b4(void)

{
  func_0x0001052c3674();
  func_0x0001052c3a04();
  func_0x0001052c3558();
  func_0x0001052c38ec();
  return;
}



/* Entry: 1052c16dc; end: 1052c1737;  */

void FUN_1052c16dc(void)

{
  func_0x0001052c3570();
  FUN_1052c1970();
  return;
}



/* Entry: 1052c1738; end: 1052c196f;  */

/* WARNING: Type propagation algorithm not settling */

undefined1 * FUN_1052c1738(undefined1 *param_1,ulong param_2,long param_3)

{
  undefined1 in_ZR;
  ulong *puVar1;
  undefined1 *puVar2;
  long *plVar3;
  long extraout_x8;
  long lVar4;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w11;
  int iVar5;
  undefined1 auStack_a8 [8];
  ulong uStack_a0;
  long lStack_98;
  ulong uStack_90;
  long lStack_88;
  ulong *puStack_80;
  undefined1 uStack_78;
  long alStack_70 [2];
  ulong *puStack_60;
  int aiStack_50 [2];
  undefined2 uStack_48;
  
  func_0x0001052c3534();
  uStack_a0 = param_2;
  lStack_98 = param_3;
  if (param_3 != 0) {
    do {
      func_0x0001052c3548();
    } while (extraout_w10 != 0);
    do {
      func_0x0001052c3548();
    } while (extraout_w10_00 != 0);
  }
  puVar1 = &uStack_90;
  uStack_90 = param_2;
  lStack_88 = param_3;
  FUN_1052c1a1c();
  uStack_78 = (undefined1)param_2;
  puStack_80 = puVar1;
  func_0x0001052a040c(alStack_70);
  iVar5 = (int)puVar1;
  if ((param_2 & 1) == 0) {
    uStack_48 = 4;
    aiStack_50[0] = iVar5;
    func_0x0001052c3754(alStack_70[0]);
    func_0x0001052c3804();
    func_0x0001052c3bf4(alStack_70[0]);
    lVar4 = extraout_x8;
    if ((bool)in_ZR) {
      func_0x0001052c389c();
      goto LAB_1052c17dc;
    }
  }
  else {
    FUN_1052bf354(aiStack_50,&puStack_80);
LAB_1052c17dc:
    func_0x0001052c381c();
    func_0x0001052c3804();
    lVar4 = alStack_70[0];
    if (alStack_70[0] == 0) goto LAB_1052c1800;
  }
  if (*(long *)(lVar4 + 0x10) != 0) {
    do {
      func_0x0001052c3508();
    } while (extraout_w11 != 0);
  }
LAB_1052c1800:
  func_0x00010b9a8f78(alStack_70 + 1,aiStack_50);
  func_0x0001052c3914();
  FUN_1052a08c4(alStack_70);
  func_0x000104bf351c(aiStack_50,alStack_70 + 1);
  func_0x0001052c3760();
  func_0x0001052c380c();
  func_0x00010b9a8d98(alStack_70 + 1);
  do {
    func_0x0001052c3a30();
    func_0x0001052c3848();
    puVar2 = *(undefined1 **)(param_1 + 8);
    func_0x0001003b8370(puVar2);
    while( true ) {
      func_0x0001052c34dc();
      if ((bool)in_ZR) {
        return puVar2;
      }
      ___stack_chk_fail();
      func_0x0001052c37c8();
      plVar3 = alStack_70;
      FUN_1052a08c4();
      in_ZR = iVar5 == 1;
      if ((bool)in_ZR) break;
      func_0x0001052c3a30();
      func_0x0001052c3848();
      in_ZR = iVar5 == 1;
      if (!(bool)in_ZR) {
        func_0x0001052c3a78();
        func_0x0001052c3a70();
        func_0x0001052c3c30();
        if (plVar3 != (long *)0x0) {
          func_0x0001000df548();
        }
        return param_1;
      }
      func_0x0001052c3824();
      param_1 = *(undefined1 **)(param_1 + 8);
      __ZSt17current_exceptionv(auStack_a8);
      func_0x000104bf33cc(param_1,auStack_a8);
      puVar2 = auStack_a8;
      __ZNSt13exception_ptrD1Ev(puVar2);
      ___cxa_end_catch();
    }
    func_0x0001052c3824();
    func_0x0001052c362c();
    func_0x00010b99f5f8(&puStack_80,plVar3);
    alStack_70[1] = 2;
    puStack_60 = puStack_80;
    puStack_80 = (ulong *)0x0;
    func_0x0001052c3790();
    func_0x000104bda914(alStack_70 + 1);
    func_0x000104bda93c(&puStack_80);
    ___cxa_end_catch();
  } while( true );
}



/* Entry: 1052c1970; end: 1052c1993;  */

void FUN_1052c1970(long param_1)

{
  func_0x0001052c3c30();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1052c1994; end: 1052c1997;  */

undefined8 * FUN_1052c1994(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108757b0;
  FUN_1052c1b3c(param_1 + 1);
  return param_1;
}



/* Entry: 1052c1998; end: 1052c19ab;  */

void FUN_1052c1998(void)

{
  FUN_1052c19f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1052c19ac; end: 1052c19ef;  */

void FUN_1052c19ac(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  
  func_0x0001052c36c8();
  if (param_3 != 0) {
    do {
      func_0x0001052c3548();
    } while (extraout_w10 != 0);
  }
  FUN_1052c1738(param_1 + 8);
  func_0x0001052c391c();
  return;
}



/* Entry: 1052c19f0; end: 1052c1a1b;  */

undefined8 * FUN_1052c19f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108757b0;
  FUN_1052c1b3c(param_1 + 1);
  return param_1;
}



/* Entry: 1052c1a1c; end: 1052c1aeb;  */

undefined1  [16] FUN_1052c1a1c(void)

{
  unkuint9 Var1;
  code *pcVar2;
  long extraout_x8;
  long extraout_x8_00;
  long lVar3;
  long extraout_x9;
  int extraout_w11;
  undefined1 auVar4 [16];
  undefined1 auStack_40 [16];
  unkuint9 *pStack_30;
  
  func_0x0001052c3c0c();
  func_0x0001052c3c24();
  FUN_1052c16b4();
  func_0x0001052c3c00();
  FUN_1052c16dc();
  FUN_1052c1970(auStack_40);
  func_0x0001052c3a30();
  func_0x0001052c37d4();
  __ZNSt3__15mutex4lockEv();
  func_0x0001052c3bc0();
  lVar3 = extraout_x8;
  if (extraout_x9 != 0) {
    do {
      func_0x0001052c3508();
      lVar3 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  func_0x0001052c3c18(lVar3 + 0x10);
  FUN_1052c1b04();
  func_0x0001052c3848();
  if ((long)pStack_30[8] != 0) {
    func_0x0001052c3b78();
    func_0x0001052c3a60();
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1052c1abc);
    (*pcVar2)();
  }
  Var1 = *pStack_30;
  func_0x0001052c37ec();
  func_0x0001052c3a48();
  auVar4._9_7_ = 0;
  auVar4._0_9_ = Var1;
  return auVar4;
}



/* Entry: 1052c1aec; end: 1052c1b03;  */

void FUN_1052c1aec(long param_1)

{
  ulong uVar1;
  ulong unaff_x19;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    return;
  }
  __ZSt9terminatev();
  func_0x0001052c38fc();
  while (uVar1 = unaff_x19, FUN_1052c1b34(), (uVar1 & 1) == 0) {
    func_0x0001052c3748();
  }
  return;
}



/* Entry: 1052c1b04; end: 1052c1b33;  */

void FUN_1052c1b04(void)

{
  ulong uVar1;
  ulong unaff_x19;
  
  func_0x0001052c38fc();
  while (uVar1 = unaff_x19, FUN_1052c1b34(), (uVar1 & 1) == 0) {
    func_0x0001052c3748();
  }
  return;
}



/* Entry: 1052c1b34; end: 1052c1b3b;  */

undefined8 FUN_1052c1b34(long *param_1)

{
  undefined8 unaff_x19;
  
  if ((*(byte *)(*param_1 + 0xc) & 1) == 0) {
    func_0x0001052c3648(*(undefined8 *)(*param_1 + 0x80));
  }
  else {
    unaff_x19 = 1;
  }
  return unaff_x19;
}



/* Entry: 1052c1b3c; end: 1052c1b57;  */

undefined8 FUN_1052c1b3c(void)

{
  undefined8 unaff_x19;
  
  func_0x0001052c37a8();
  func_0x0001003b6ce0();
  func_0x000104bf3588();
  return unaff_x19;
}



/* Entry: 1052c1b58; end: 1052c1d5b;  */

void FUN_1052c1b58(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long extraout_x8;
  long lVar4;
  int extraout_w10;
  int extraout_w11;
  int extraout_w11_00;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  func_0x000104bf2d3c(&lStack_98);
  lStack_b8 = lStack_98;
  if ((lStack_98 != 0) && (*(long *)(lStack_98 + 0x10) != 0)) {
    do {
      func_0x0001052c3508();
      lStack_b8 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  puStack_30 = (undefined8 *)0x0;
  uStack_28 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_1052c1d5c(&uStack_40,param_2,&uStack_50);
  FUN_1052c1d84(&puStack_30,&uStack_40);
  FUN_1052c2004(&uStack_40);
  FUN_1052c2004(&uStack_50);
  func_0x0001052c3b48();
  func_0x0001052c3b80(uStack_58);
  uStack_68 = uStack_58;
  lStack_70 = lStack_b8;
  lStack_b8 = 0;
  uStack_58 = 0;
  lStack_80 = 0;
  lStack_78 = 0;
  func_0x0001052c37d4();
  __ZNSt3__15mutex4lockEv();
  puVar2 = puStack_30;
  func_0x0001052c1da8();
  if ((int)puVar2 == 0) {
    func_0x0001052c39ec();
    uVar1 = uStack_68;
    lVar4 = lStack_70;
    *puVar2 = &PTR_FUN_110875800;
    lStack_70 = 0;
    uStack_68 = 0;
    puVar2[2] = uVar1;
    puVar2[1] = lVar4;
    lVar4 = puStack_30[0x11];
    puStack_30[0x11] = puVar2;
    if (lVar4 != 0) {
      func_0x0001052c35dc();
    }
  }
  else {
    FUN_1052c1d84(&lStack_80,&puStack_30);
  }
  func_0x0001052c37ec();
  if (lStack_80 != 0) {
    lStack_90 = lStack_80;
    lStack_88 = lStack_78;
    if (lStack_78 != 0) {
      do {
        func_0x0001052c3548();
      } while (extraout_w10 != 0);
    }
    FUN_1052c1de0(&lStack_70);
    func_0x0001052c3ba4();
  }
  uStack_a8 = uStack_38;
  uStack_b0 = uStack_40;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_1052c2004(&lStack_80);
  plVar3 = &lStack_70;
  FUN_1052c21c8();
  func_0x0001052c38ac();
  func_0x0001052c3a0c();
  if (plVar3 != (long *)0x0) {
    func_0x0001052c35c0();
  }
  func_0x0001052c3814();
  func_0x0001003b6c64(&uStack_b0);
  func_0x000104bf3564(&lStack_b8);
  if ((lStack_98 != 0) && (*(long *)(lStack_98 + 0x10) != 0)) {
    do {
      func_0x0001052c3508();
    } while (extraout_w11_00 != 0);
  }
  func_0x0001052c372c();
  func_0x0001052c3b64();
  func_0x0001052c37fc();
  return;
}



/* Entry: 1052c1d5c; end: 1052c1d83;  */

void FUN_1052c1d5c(void)

{
  func_0x0001052c3674();
  func_0x0001052c3a04();
  func_0x0001052c3558();
  func_0x0001052c38ec();
  return;
}



/* Entry: 1052c1d84; end: 1052c1ddf;  */

void FUN_1052c1d84(void)

{
  func_0x0001052c3570();
  FUN_1052c2004();
  return;
}



/* Entry: 1052c1de0; end: 1052c2003;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_1052c1de0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long extraout_x8;
  long lVar2;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w11;
  int iVar3;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long alStack_70 [4];
  int aiStack_50 [2];
  undefined2 uStack_48;
  
  func_0x0001052c3534();
  uStack_98 = param_2;
  lStack_90 = param_3;
  if (param_3 != 0) {
    do {
      func_0x0001052c3548();
    } while (extraout_w10 != 0);
    do {
      func_0x0001052c3548();
    } while (extraout_w10_00 != 0);
  }
  puVar1 = &uStack_88;
  uStack_88 = param_2;
  lStack_80 = param_3;
  FUN_1052c20ac();
  func_0x0001052a040c(alStack_70);
  iVar3 = (int)puVar1;
  if (((ulong)puVar1 >> 0x20 & 1) == 0) {
    uStack_48 = 4;
    aiStack_50[0] = iVar3;
    func_0x0001052c3754(alStack_70[0]);
    func_0x0001052c3804();
    func_0x0001052c3bf4(alStack_70[0]);
    lVar2 = extraout_x8;
    if ((bool)in_ZR) {
      func_0x0001052c389c();
      goto LAB_1052c1e78;
    }
  }
  else {
    FUN_1052c55b0(aiStack_50,&uStack_78);
LAB_1052c1e78:
    func_0x0001052c381c();
    func_0x0001052c3804();
    lVar2 = alStack_70[0];
    if (alStack_70[0] == 0) goto LAB_1052c1e9c;
  }
  if (*(long *)(lVar2 + 0x10) != 0) {
    do {
      func_0x0001052c3508();
    } while (extraout_w11 != 0);
  }
LAB_1052c1e9c:
  func_0x00010b9a8f78(alStack_70 + 1,aiStack_50);
  func_0x0001052c3914();
  FUN_1052a08c4(alStack_70);
  func_0x000104bf351c(aiStack_50,alStack_70 + 1);
  func_0x0001052c3760();
  func_0x0001052c380c();
  func_0x00010b9a8d98(alStack_70 + 1);
  do {
    FUN_1052c2004(&uStack_88);
    FUN_1052c2004(&uStack_98);
    puVar1 = (undefined8 *)param_1[1];
    func_0x0001003b8370(puVar1);
    while( true ) {
      func_0x0001052c34dc();
      if ((bool)in_ZR) {
        return puVar1;
      }
      ___stack_chk_fail();
      func_0x0001052c37c8();
      FUN_1052a08c4(alStack_70);
      in_ZR = iVar3 == 1;
      if ((bool)in_ZR) break;
      FUN_1052c2004(&uStack_88);
      puVar1 = &uStack_98;
      FUN_1052c2004();
      in_ZR = iVar3 == 1;
      if (!(bool)in_ZR) {
        func_0x0001052c3a78();
        func_0x0001052c3a70();
        func_0x0001052c3c30();
        if (puVar1 != (undefined8 *)0x0) {
          func_0x0001000df548();
        }
        return param_1;
      }
      func_0x0001052c3824();
      func_0x0001052c3868();
      func_0x0001052c38d4();
      func_0x0001052c38b4();
      ___cxa_end_catch();
    }
    func_0x0001052c3824();
    func_0x0001052c362c();
    func_0x0001052c3b14();
    alStack_70[1] = 2;
    alStack_70[2] = uStack_78;
    uStack_78 = 0;
    func_0x0001052c3790();
    func_0x000104bda914(alStack_70 + 1);
    func_0x0001052c3850();
    ___cxa_end_catch();
  } while( true );
}



/* Entry: 1052c2004; end: 1052c2027;  */

void FUN_1052c2004(long param_1)

{
  func_0x0001052c3c30();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1052c2028; end: 1052c202b;  */

undefined8 * FUN_1052c2028(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110875800;
  FUN_1052c21c8(param_1 + 1);
  return param_1;
}



/* Entry: 1052c202c; end: 1052c203f;  */

void FUN_1052c202c(void)

{
  FUN_1052c2080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1052c2040; end: 1052c207f;  */

void FUN_1052c2040(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  
  func_0x0001052c36c8();
  if (param_3 != 0) {
    do {
      func_0x0001052c3548();
    } while (extraout_w10 != 0);
  }
  FUN_1052c1de0(param_1 + 8);
  func_0x0001052c370c();
  return;
}



/* Entry: 1052c2080; end: 1052c20ab;  */

undefined8 * FUN_1052c2080(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110875800;
  FUN_1052c21c8(param_1 + 1);
  return param_1;
}



/* Entry: 1052c20ac; end: 1052c2177;  */

ulong FUN_1052c20ac(void)

{
  code *pcVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  int extraout_w11;
  ulong uVar3;
  undefined1 auStack_50 [32];
  ulong *puStack_30;
  
  func_0x0001052c3c0c();
  func_0x0001052c3c24();
  FUN_1052c1d5c();
  func_0x0001052c3c00();
  FUN_1052c1d84();
  func_0x0001052c3ba4();
  FUN_1052c2004(auStack_50);
  func_0x0001052c37d4();
  __ZNSt3__15mutex4lockEv();
  func_0x0001052c3bc0();
  lVar2 = extraout_x8;
  if (extraout_x9 != 0) {
    do {
      func_0x0001052c3508();
      lVar2 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  func_0x0001052c3c18(lVar2 + 0x10);
  FUN_1052c2190();
  func_0x0001052c37f4();
  if (puStack_30[0x10] != 0) {
    func_0x0001052c3b78();
    func_0x0001052c3a60();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1052c2144);
    (*pcVar1)();
  }
  uVar3 = *puStack_30;
  func_0x0001052c37ec();
  func_0x0001052c3814();
  return uVar3 & 0xffffffffff;
}



/* Entry: 1052c2178; end: 1052c218f;  */

void FUN_1052c2178(long param_1)

{
  ulong uVar1;
  ulong unaff_x19;
  
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    return;
  }
  __ZSt9terminatev();
  func_0x0001052c38fc();
  while (uVar1 = unaff_x19, FUN_1052c21c0(), (uVar1 & 1) == 0) {
    func_0x0001052c3748();
  }
  return;
}



/* Entry: 1052c2190; end: 1052c21bf;  */

void FUN_1052c2190(void)

{
  ulong uVar1;
  ulong unaff_x19;
  
  func_0x0001052c38fc();
  while (uVar1 = unaff_x19, FUN_1052c21c0(), (uVar1 & 1) == 0) {
    func_0x0001052c3748();
  }
  return;
}



/* Entry: 1052c21c0; end: 1052c21c7;  */

undefined8 FUN_1052c21c0(long *param_1)

{
  undefined8 unaff_x19;
  
  if ((*(byte *)(*param_1 + 8) & 1) == 0) {
    func_0x0001052c3648(*(undefined8 *)(*param_1 + 0x80));
  }
  else {
    unaff_x19 = 1;
  }
  return unaff_x19;
}



/* Entry: 1052c21c8; end: 1052c21e3;  */

undefined8 FUN_1052c21c8(void)

{
  undefined8 unaff_x19;
  
  func_0x0001052c37a8();
  func_0x0001003b6ce0();
  func_0x000104bf3588();
  return unaff_x19;
}



/* Entry: 1052c21e4; end: 1052c220b;  */

void FUN_1052c21e4(void)

{
  func_0x0001052c3674();
  func_0x0001052c3a04();
  func_0x0001052c3558();
  func_0x0001052c38ec();
  return;
}



/* Entry: 1052c220c; end: 1052c2267;  */

void FUN_1052c220c(void)

{
  func_0x0001052c3570();
  FUN_1052c2468();
  return;
}



/* Entry: 1052c2268; end: 1052c2467;  */

undefined8 * FUN_1052c2268(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long extraout_x8;
  long lVar3;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w11;
  int unaff_w21;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_78;
  undefined4 auStack_70 [6];
  char cStack_58;
  undefined4 auStack_50 [2];
  undefined2 uStack_48;
  
  func_0x0001052c3534();
  uStack_a8 = param_2;
  lStack_a0 = param_3;
  if (param_3 != 0) {
    do {
      func_0x0001052c3548();
    } while (extraout_w10 != 0);
    do {
      func_0x0001052c3548();
    } while (extraout_w10_00 != 0);
  }
  uStack_98 = param_2;
  lStack_90 = param_3;
  FUN_1052c2514(auStack_70,&uStack_98);
  func_0x0001052a040c(&lStack_78);
  uVar1 = cStack_58 == '\x01';
  if ((bool)uVar1) {
    FUN_1052c25f0(auStack_50,auStack_70);
LAB_1052c230c:
    func_0x0001052c381c();
    func_0x0001052c3804();
    lVar3 = lStack_78;
    if (lStack_78 == 0) goto LAB_1052c2330;
  }
  else {
    uStack_48 = 4;
    auStack_50[0] = auStack_70[0];
    func_0x0001052c3754(lStack_78);
    func_0x0001052c3804();
    func_0x0001052c3bf4(lStack_78);
    lVar3 = extraout_x8;
    if ((bool)uVar1) {
      func_0x0001052c389c();
      goto LAB_1052c230c;
    }
  }
  if (*(long *)(lVar3 + 0x10) != 0) {
    do {
      func_0x0001052c3508();
    } while (extraout_w11 != 0);
  }
LAB_1052c2330:
  func_0x0001052c39dc();
  func_0x0001052c3914();
  func_0x0001052c3a80();
  func_0x0001052c3b50();
  func_0x0001052c3760();
  func_0x0001052c380c();
  func_0x0001052c39cc();
  FUN_1052c2774(auStack_70);
  do {
    FUN_1052c2468(&uStack_98);
    FUN_1052c2468(&uStack_a8);
    puVar2 = (undefined8 *)param_1[1];
    func_0x0001003b8370(puVar2);
    while( true ) {
      func_0x0001052c34dc();
      if ((bool)uVar1) {
        return puVar2;
      }
      ___stack_chk_fail();
      func_0x0001052c37c8();
      func_0x0001052c3a80();
      FUN_1052c2774(auStack_70);
      uVar1 = unaff_w21 == 1;
      if ((bool)uVar1) break;
      FUN_1052c2468(&uStack_98);
      puVar2 = &uStack_a8;
      FUN_1052c2468();
      uVar1 = unaff_w21 == 1;
      if (!(bool)uVar1) {
        func_0x0001052c3a78();
        func_0x0001052c3a70();
        func_0x0001052c3c30();
        if (puVar2 != (undefined8 *)0x0) {
          func_0x0001000df548();
        }
        return param_1;
      }
      func_0x0001052c3824();
      func_0x0001052c3868();
      func_0x0001052c38d4();
      func_0x0001052c38b4();
      ___cxa_end_catch();
    }
    func_0x0001052c3824();
    func_0x0001052c362c();
    func_0x0001052c3b14();
    func_0x0001052c3be0();
    func_0x0001052c3790();
    func_0x0001052c39f4();
    func_0x0001052c3850();
    ___cxa_end_catch();
  } while( true );
}



/* Entry: 1052c2468; end: 1052c248b;  */

void FUN_1052c2468(long param_1)

{
  func_0x0001052c3c30();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1052c248c; end: 1052c248f;  */

undefined8 * FUN_1052c248c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110875850;
  func_0x0001052c2868(param_1 + 1);
  return param_1;
}



/* Entry: 1052c2490; end: 1052c24a3;  */

void FUN_1052c2490(void)

{
  FUN_1052c24e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1052c24a4; end: 1052c24e7;  */

void FUN_1052c24a4(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  
  func_0x0001052c36c8();
  if (param_3 != 0) {
    do {
      func_0x0001052c3548();
    } while (extraout_w10 != 0);
  }
  FUN_1052c2268(param_1 + 8);
  func_0x0001052c3924();
  return;
}



/* Entry: 1052c24e8; end: 1052c2513;  */

undefined8 * FUN_1052c24e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110875850;
  func_0x0001052c2868(param_1 + 1);
  return param_1;
}



/* Entry: 1052c2514; end: 1052c25ef;  */

void FUN_1052c2514(undefined8 param_1)

{
  code *pcVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  int extraout_w11;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  long alStack_30 [2];
  
  func_0x0001052c3c0c();
  func_0x0001052c3c24();
  FUN_1052c21e4();
  func_0x0001052c3c00();
  FUN_1052c220c();
  FUN_1052c2468(auStack_40);
  FUN_1052c2468(auStack_50);
  func_0x0001052c3ad8();
  __ZNSt3__15mutex4lockEv();
  func_0x0001052c3bc0();
  lVar2 = extraout_x8;
  if (extraout_x9 != 0) {
    do {
      func_0x0001052c3508();
      lVar2 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  func_0x0001052c3c18(lVar2 + 0x28);
  FUN_1052c26c8();
  func_0x0001052c39b4();
  if (*(long *)(alStack_30[0] + 0x98) != 0) {
    __ZNSt13exception_ptrC1ERKS_(auStack_68,(long *)(alStack_30[0] + 0x98));
    func_0x0001052c3a60();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1052c25b8);
    (*pcVar1)();
  }
  FUN_1052c2700(param_1);
  func_0x0001052c37ec();
  FUN_1052c2468(alStack_30);
  return;
}



/* Entry: 1052c25f0; end: 1052c26af;  */

void FUN_1052c25f0(long *param_1)

{
  long *unaff_x20;
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  func_0x0001052c3afc();
  func_0x00010b9abe10(&lStack_48,(param_1[1] - *param_1) / 0x48);
  lVar1 = 0;
  lVar3 = 0x18;
  for (uVar2 = 0; uVar2 < (ulong)((unaff_x20[1] - *unaff_x20) / 0x48); uVar2 = uVar2 + 1) {
    FUN_1052bf7f8(auStack_58,*unaff_x20 + lVar1);
    func_0x00010b9a9020(lStack_48 + lVar3,auStack_58);
    func_0x00010b9a8d98(auStack_58);
    lVar3 = lVar3 + 0x10;
    lVar1 = lVar1 + 0x48;
  }
  func_0x00010b9a8f84();
  func_0x000104bddf38(&lStack_48);
  return;
}



/* Entry: 1052c26b0; end: 1052c26c7;  */

void FUN_1052c26b0(long param_1)

{
  ulong uVar1;
  ulong unaff_x19;
  
  if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
    return;
  }
  __ZSt9terminatev();
  func_0x0001052c38fc();
  while (uVar1 = unaff_x19, FUN_1052c26f8(), (uVar1 & 1) == 0) {
    func_0x0001052c3748();
  }
  return;
}



/* Entry: 1052c26c8; end: 1052c26f7;  */

void FUN_1052c26c8(void)

{
  ulong uVar1;
  ulong unaff_x19;
  
  func_0x0001052c38fc();
  while (uVar1 = unaff_x19, FUN_1052c26f8(), (uVar1 & 1) == 0) {
    func_0x0001052c3748();
  }
  return;
}



/* Entry: 1052c26f8; end: 1052c26ff;  */

undefined8 FUN_1052c26f8(long *param_1)

{
  undefined8 unaff_x19;
  
  if ((*(byte *)(*param_1 + 0x20) & 1) == 0) {
    func_0x0001052c3648(*(undefined8 *)(*param_1 + 0x98));
  }
  else {
    unaff_x19 = 1;
  }
  return unaff_x19;
}



/* Entry: 1052c2700; end: 1052c2747;  */

undefined4 * FUN_1052c2700(undefined4 *param_1,undefined4 *param_2)

{
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  if (*(char *)(param_2 + 6) == '\x01') {
    FUN_1052c2748(param_1);
  }
  else {
    *param_1 = *param_2;
    *(undefined1 *)(param_1 + 6) = 0;
  }
  return param_1;
}



/* Entry: 1052c2748; end: 1052c2773;  */

void FUN_1052c2748(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 1052c2774; end: 1052c2793;  */

void FUN_1052c2774(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_1052c2794();
  }
  return;
}



/* Entry: 1052c2794; end: 1052c27fb;  */

undefined8 FUN_1052c2794(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x0001052c27c0(&uStack_28);
  return param_1;
}



/* Entry: 1052c27fc; end: 1052c2803;  */

void FUN_1052c27fc(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x48;
    func_0x0001052c283c();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 1052c2804; end: 1052c2883;  */

void FUN_1052c2804(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x48;
    func_0x0001052c283c();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 1052c2884; end: 1052c28ab;  */

void FUN_1052c2884(void)

{
  func_0x0001052c3674();
  func_0x0001052c3a04();
  func_0x0001052c3558();
  func_0x0001052c38ec();
  return;
}



/* Entry: 1052c28ac; end: 1052c2907;  */

void FUN_1052c28ac(void)

{
  func_0x0001052c3570();
  FUN_1052c2af4();
  return;
}



/* Entry: 1052c2908; end: 1052c2af3;  */

undefined8 * FUN_1052c2908(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long extraout_x8;
  long lVar3;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w11;
  int unaff_w21;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_78;
  undefined4 auStack_70 [6];
  char cStack_58;
  undefined4 auStack_50 [2];
  undefined2 uStack_48;
  
  func_0x0001052c3534();
  uStack_a8 = param_2;
  lStack_a0 = param_3;
  if (param_3 != 0) {
    do {
      func_0x0001052c3548();
    } while (extraout_w10 != 0);
    do {
      func_0x0001052c3548();
    } while (extraout_w10_00 != 0);
  }
  uStack_98 = param_2;
  lStack_90 = param_3;
  FUN_1052c2ba0(auStack_70,&uStack_98);
  func_0x0001052a040c(&lStack_78);
  uVar1 = cStack_58 == '\x01';
  if ((bool)uVar1) {
    FUN_1052bf59c(auStack_50,auStack_70);
LAB_1052c29ac:
    func_0x0001052c381c();
    func_0x0001052c3804();
    lVar3 = lStack_78;
    if (lStack_78 == 0) goto LAB_1052c29d0;
  }
  else {
    uStack_48 = 4;
    auStack_50[0] = auStack_70[0];
    func_0x0001052c3754(lStack_78);
    func_0x0001052c3804();
    func_0x0001052c3bf4(lStack_78);
    lVar3 = extraout_x8;
    if ((bool)uVar1) {
      func_0x0001052c389c();
      goto LAB_1052c29ac;
    }
  }
  if (*(long *)(lVar3 + 0x10) != 0) {
    do {
      func_0x0001052c3508();
    } while (extraout_w11 != 0);
  }
LAB_1052c29d0:
  func_0x0001052c39dc();
  func_0x0001052c3914();
  func_0x0001052c3a80();
  func_0x0001052c3b50();
  func_0x0001052c3760();
  func_0x0001052c380c();
  func_0x0001052c39cc();
  do {
    FUN_1052c2af4(&uStack_98);
    FUN_1052c2af4(&uStack_a8);
    puVar2 = (undefined8 *)param_1[1];
    func_0x0001003b8370(puVar2);
    while( true ) {
      func_0x0001052c34dc();
      if ((bool)uVar1) {
        return puVar2;
      }
      ___stack_chk_fail();
      func_0x0001052c37c8();
      func_0x0001052c3a80();
      uVar1 = unaff_w21 == 1;
      if ((bool)uVar1) break;
      FUN_1052c2af4(&uStack_98);
      puVar2 = &uStack_a8;
      FUN_1052c2af4();
      uVar1 = unaff_w21 == 1;
      if (!(bool)uVar1) {
        func_0x0001052c3a78();
        func_0x0001052c3a70();
        func_0x0001052c3c30();
        if (puVar2 != (undefined8 *)0x0) {
          func_0x0001000df548();
        }
        return param_1;
      }
      func_0x0001052c3824();
      func_0x0001052c3868();
      func_0x0001052c38d4();
      func_0x0001052c38b4();
      ___cxa_end_catch();
    }
    func_0x0001052c3824();
    func_0x0001052c362c();
    func_0x0001052c3b14();
    func_0x0001052c3be0();
    func_0x0001052c3790();
    func_0x0001052c39f4();
    func_0x0001052c3850();
    ___cxa_end_catch();
  } while( true );
}



/* Entry: 1052c2af4; end: 1052c2b17;  */

void FUN_1052c2af4(long param_1)

{
  func_0x0001052c3c30();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1052c2b18; end: 1052c2b1b;  */

undefined8 * FUN_1052c2b18(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108758a0;
  FUN_1052c2cbc(param_1 + 1);
  return param_1;
}



/* Entry: 1052c2b1c; end: 1052c2b2f;  */

void FUN_1052c2b1c(void)

{
  FUN_1052c2b74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1052c2b30; end: 1052c2b73;  */

void FUN_1052c2b30(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  
  func_0x0001052c36c8();
  if (param_3 != 0) {
    do {
      func_0x0001052c3548();
    } while (extraout_w10 != 0);
  }
  FUN_1052c2908(param_1 + 8);
  func_0x0001052c392c();
  return;
}



/* Entry: 1052c2b74; end: 1052c2b9f;  */

undefined8 * FUN_1052c2b74(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108758a0;
  FUN_1052c2cbc(param_1 + 1);
  return param_1;
}



/* Entry: 1052c2ba0; end: 1052c2c6b;  */

void FUN_1052c2ba0(undefined8 *param_1)

{
  code *pcVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  int extraout_w11;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  
  func_0x0001052c3c0c();
  func_0x0001052c3c24();
  FUN_1052c2884();
  func_0x0001052c3c00();
  FUN_1052c28ac();
  FUN_1052c2af4(auStack_40);
  FUN_1052c2af4(auStack_50);
  func_0x0001052c3ad8();
  __ZNSt3__15mutex4lockEv();
  func_0x0001052c3bc0();
  lVar2 = extraout_x8;
  if (extraout_x9 != 0) {
    do {
      func_0x0001052c3508();
      lVar2 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  func_0x0001052c3c18(lVar2 + 0x28);
  FUN_1052c2c84();
  func_0x0001052c39c4();
  if (puStack_30[0x13] != 0) {
    func_0x0001052c3b78();
    func_0x0001052c3a60();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1052c2c38);
    (*pcVar1)();
  }
  uVar3 = *puStack_30;
  uVar5 = puStack_30[3];
  uVar4 = puStack_30[2];
  param_1[1] = puStack_30[1];
  *param_1 = uVar3;
  param_1[3] = uVar5;
  param_1[2] = uVar4;
  func_0x0001052c37ec();
  func_0x0001052c3a50();
  return;
}



/* Entry: 1052c2c6c; end: 1052c2c83;  */

void FUN_1052c2c6c(long param_1)

{
  ulong uVar1;
  ulong unaff_x19;
  
  if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
    return;
  }
  __ZSt9terminatev();
  func_0x0001052c38fc();
  while (uVar1 = unaff_x19, FUN_1052c2cb4(), (uVar1 & 1) == 0) {
    func_0x0001052c3748();
  }
  return;
}



/* Entry: 1052c2c84; end: 1052c2cb3;  */

void FUN_1052c2c84(void)

{
  ulong uVar1;
  ulong unaff_x19;
  
  func_0x0001052c38fc();
  while (uVar1 = unaff_x19, FUN_1052c2cb4(), (uVar1 & 1) == 0) {
    func_0x0001052c3748();
  }
  return;
}



/* Entry: 1052c2cb4; end: 1052c2cbb;  */

undefined8 FUN_1052c2cb4(long *param_1)

{
  undefined8 unaff_x19;
  
  if ((*(byte *)(*param_1 + 0x20) & 1) == 0) {
    func_0x0001052c3648(*(undefined8 *)(*param_1 + 0x98));
  }
  else {
    unaff_x19 = 1;
  }
  return unaff_x19;
}



/* Entry: 1052c2cbc; end: 1052c2cd7;  */

undefined8 FUN_1052c2cbc(void)

{
  undefined8 unaff_x19;
  
  func_0x0001052c37a8();
  func_0x0001003b6ce0();
  func_0x000104bf3588();
  return unaff_x19;
}



/* Entry: 1052c2cd8; end: 1052c2da3;  */

void FUN_1052c2cd8(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((bRam00000001136ba188 & 1) == 0) {
    iVar1 = 0x136ba188;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if ((bRam00000001136ba190 & 1) == 0) {
        uVar2 = 0x1136ba190;
        ___cxa_guard_acquire();
        if ((int)uVar2 != 0) {
          FUN_1052c562c();
          FUN_1052c2da4();
          func_0x00010b9913cc(0x1136ba218,uVar2);
          ___cxa_guard_release(0x1136ba190);
        }
      }
      func_0x0001052c39fc(0x1136ba208);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x1136ba188);
      return;
    }
  }
  return;
}



/* Entry: 1052c2da4; end: 1052c2df3;  */

void FUN_1052c2da4(void)

{
  int iVar1;
  
  if ((bRam00000001136ba180 & 1) == 0) {
    iVar1 = 0x136ba180;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1136ba1f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x1136ba180);
      return;
    }
  }
  return;
}



/* Entry: 1052c2df4; end: 1052c2e4f;  */

undefined8 FUN_1052c2df4(void)

{
  int iVar1;
  
  if ((bRam00000001130cc6f8 & 1) == 0) {
    iVar1 = 0x130cc6f8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_1052bf93c();
      func_0x00010b990868(0x1130cc6e8);
      ___cxa_guard_release(0x1130cc6f8);
    }
  }
  return 0x1130cc6e8;
}



/* Entry: 1052c2e50; end: 1052c2f83;  */

long FUN_1052c2e50(long param_1,long param_2,int param_3)

{
  undefined1 in_ZR;
  long lVar1;
  long extraout_x8;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  long lStack_68;
  long lStack_60;
  
  func_0x0001052c3534();
  func_0x0001052c360c();
  while( true ) {
    func_0x0001052c34dc();
    if ((bool)in_ZR) {
      return param_2;
    }
    ___stack_chk_fail();
    if (param_3 == 0) break;
    in_ZR = param_3 == 3;
    if ((bool)in_ZR) {
      ___cxa_begin_catch();
      func_0x0001052c3a90();
      func_0x0001052c36f0();
      lVar1 = param_2;
      if (extraout_x8 != 0) {
        do {
          func_0x0001052c387c();
        } while (extraout_w11 != 0);
      }
      func_0x0001052c3a68();
      func_0x0001052c382c();
      if ((lStack_60 != 0) && (*(long *)(lStack_60 + 0x10) != 0)) {
        do {
          func_0x0001052c3508();
        } while (extraout_w11_00 != 0);
      }
      func_0x0001052c3664();
      func_0x0001052c397c();
      func_0x0001052c3a38();
    }
    else {
      in_ZR = param_3 == 2;
      if (!(bool)in_ZR) goto LAB_1052c2f78;
      ___cxa_begin_catch();
      func_0x0001052c3a20();
      func_0x0001052c359c();
      lVar1 = param_2;
      func_0x0001052c373c();
      func_0x0001052c3694();
      func_0x0001052c3684();
      func_0x0001052c3aa8();
      func_0x0001052c3994();
      func_0x0001052c3858();
      func_0x0001052c3720();
      func_0x0001052c36dc();
      func_0x0001052c3784();
      func_0x0001052c382c();
      func_0x0001052c39ac();
      func_0x0001052c3a58();
      if ((lStack_68 != 0) && (*(long *)(lStack_68 + 0x10) != 0)) {
        do {
          func_0x0001052c3508();
        } while (extraout_w11_01 != 0);
      }
      func_0x0001052c35cc();
      func_0x0001052c39bc();
      func_0x0001052c3974();
      func_0x0001052c3a40();
      lStack_60 = param_2;
    }
    ___cxa_end_catch();
    param_2 = lVar1;
  }
LAB_1052c2f80:
  __Unwind_Resume();
  param_2 = param_2 + 0x10;
  func_0x00010054ffe4();
  if (param_2 != 0) {
    func_0x0001000df548();
  }
  return param_1;
LAB_1052c2f78:
  do {
    func_0x000104bd46a0();
  } while (param_3 != 0);
  goto LAB_1052c2f80;
}



/* Entry: 1052c2f84; end: 1052c2fcb;  */

void FUN_1052c2f84(long param_1)

{
  param_1 = param_1 + 0x10;
  func_0x00010054ffe4();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1052c2fcc; end: 1052c30ff;  */

long FUN_1052c2fcc(long param_1,long param_2,int param_3)

{
  undefined1 in_ZR;
  long lVar1;
  long extraout_x8;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  long lStack_68;
  long lStack_60;
  
  func_0x0001052c3534();
  func_0x0001052c360c();
  while( true ) {
    func_0x0001052c34dc();
    if ((bool)in_ZR) {
      return param_2;
    }
    ___stack_chk_fail();
    if (param_3 == 0) break;
    in_ZR = param_3 == 3;
    if ((bool)in_ZR) {
      ___cxa_begin_catch();
      func_0x0001052c3a90();
      func_0x0001052c36f0();
      lVar1 = param_2;
      if (extraout_x8 != 0) {
        do {
          func_0x0001052c387c();
        } while (extraout_w11 != 0);
      }
      func_0x0001052c3a68();
      func_0x0001052c382c();
      if ((lStack_60 != 0) && (*(long *)(lStack_60 + 0x10) != 0)) {
        do {
          func_0x0001052c3508();
        } while (extraout_w11_00 != 0);
      }
      func_0x0001052c3664();
      func_0x0001052c397c();
      func_0x0001052c3a38();
    }
    else {
      in_ZR = param_3 == 2;
      if (!(bool)in_ZR) goto LAB_1052c30f4;
      ___cxa_begin_catch();
      func_0x0001052c3a20();
      func_0x0001052c359c();
      lVar1 = param_2;
      func_0x0001052c373c();
      func_0x0001052c3694();
      func_0x0001052c3684();
      func_0x0001052c3aa8();
      func_0x0001052c3994();
      func_0x0001052c3858();
      func_0x0001052c3720();
      func_0x0001052c36dc();
      func_0x0001052c3784();
      func_0x0001052c382c();
      func_0x0001052c39ac();
      func_0x0001052c3a58();
      if ((lStack_68 != 0) && (*(long *)(lStack_68 + 0x10) != 0)) {
        do {
          func_0x0001052c3508();
        } while (extraout_w11_01 != 0);
      }
      func_0x0001052c35cc();
      func_0x0001052c39bc();
      func_0x0001052c3974();
      func_0x0001052c3a40();
      lStack_60 = param_2;
    }
    ___cxa_end_catch();
    param_2 = lVar1;
  }
LAB_1052c30fc:
  __Unwind_Resume();
  param_2 = param_2 + 0x10;
  func_0x00010054ffe4();
  if (param_2 != 0) {
    func_0x0001000df548();
  }
  return param_1;
LAB_1052c30f4:
  do {
    func_0x000104bd46a0();
  } while (param_3 != 0);
  goto LAB_1052c30fc;
}



/* Entry: 1052c3100; end: 1052c311b;  */

void FUN_1052c3100(long param_1)

{
  param_1 = param_1 + 0x10;
  func_0x00010054ffe4();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1052c311c; end: 1052c324f;  */

long FUN_1052c311c(long param_1,long param_2,int param_3)

{
  undefined1 in_ZR;
  long lVar1;
  long extraout_x8;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  long lStack_68;
  long lStack_60;
  
  func_0x0001052c3534();
  func_0x0001052c360c();
  while( true ) {
    func_0x0001052c34dc();
    if ((bool)in_ZR) {
      return param_2;
    }
    ___stack_chk_fail();
    if (param_3 == 0) break;
    in_ZR = param_3 == 3;
    if ((bool)in_ZR) {
      ___cxa_begin_catch();
      func_0x0001052c3a90();
      func_0x0001052c36f0();
      lVar1 = param_2;
      if (extraout_x8 != 0) {
        do {
          func_0x0001052c387c();
        } while (extraout_w11 != 0);
      }
      func_0x0001052c3a68();
      func_0x0001052c382c();
      if ((lStack_60 != 0) && (*(long *)(lStack_60 + 0x10) != 0)) {
        do {
          func_0x0001052c3508();
        } while (extraout_w11_00 != 0);
      }
      func_0x0001052c3664();
      func_0x0001052c397c();
      func_0x0001052c3a38();
    }
    else {
      in_ZR = param_3 == 2;
      if (!(bool)in_ZR) goto LAB_1052c3244;
      ___cxa_begin_catch();
      func_0x0001052c3a20();
      func_0x0001052c359c();
      lVar1 = param_2;
      func_0x0001052c373c();
      func_0x0001052c3694();
      func_0x0001052c3684();
      func_0x0001052c3aa8();
      func_0x0001052c3994();
      func_0x0001052c3858();
      func_0x0001052c3720();
      func_0x0001052c36dc();
      func_0x0001052c3784();
      func_0x0001052c382c();
      func_0x0001052c39ac();
      func_0x0001052c3a58();
      if ((lStack_68 != 0) && (*(long *)(lStack_68 + 0x10) != 0)) {
        do {
          func_0x0001052c3508();
        } while (extraout_w11_01 != 0);
      }
      func_0x0001052c35cc();
      func_0x0001052c39bc();
      func_0x0001052c3974();
      func_0x0001052c3a40();
      lStack_60 = param_2;
    }
    ___cxa_end_catch();
    param_2 = lVar1;
  }
LAB_1052c324c:
  __Unwind_Resume();
  param_2 = param_2 + 0x10;
  func_0x00010054ffe4();
  if (param_2 != 0) {
    func_0x0001000df548();
  }
  return param_1;
LAB_1052c3244:
  do {
    func_0x000104bd46a0();
  } while (param_3 != 0);
  goto LAB_1052c324c;
}



/* Entry: 1052c3250; end: 1052c326b;  */

void FUN_1052c3250(long param_1)

{
  param_1 = param_1 + 0x10;
  func_0x00010054ffe4();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1052c326c; end: 1052c339f;  */

long FUN_1052c326c(long param_1,long param_2,int param_3)

{
  undefined1 in_ZR;
  long lVar1;
  long extraout_x8;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  long lStack_68;
  long lStack_60;
  
  func_0x0001052c3534();
  func_0x0001052c360c();
  while( true ) {
    func_0x0001052c34dc();
    if ((bool)in_ZR) {
      return param_2;
    }
    ___stack_chk_fail();
    if (param_3 == 0) break;
    in_ZR = param_3 == 3;
    if ((bool)in_ZR) {
      ___cxa_begin_catch();
      func_0x0001052c3a90();
      func_0x0001052c36f0();
      lVar1 = param_2;
      if (extraout_x8 != 0) {
        do {
          func_0x0001052c387c();
        } while (extraout_w11 != 0);
      }
      func_0x0001052c3a68();
      func_0x0001052c382c();
      if ((lStack_60 != 0) && (*(long *)(lStack_60 + 0x10) != 0)) {
        do {
          func_0x0001052c3508();
        } while (extraout_w11_00 != 0);
      }
      func_0x0001052c3664();
      func_0x0001052c397c();
      func_0x0001052c3a38();
    }
    else {
      in_ZR = param_3 == 2;
      if (!(bool)in_ZR) goto LAB_1052c3394;
      ___cxa_begin_catch();
      func_0x0001052c3a20();
      func_0x0001052c359c();
      lVar1 = param_2;
      func_0x0001052c373c();
      func_0x0001052c3694();
      func_0x0001052c3684();
      func_0x0001052c3aa8();
      func_0x0001052c3994();
      func_0x0001052c3858();
      func_0x0001052c3720();
      func_0x0001052c36dc();
      func_0x0001052c3784();
      func_0x0001052c382c();
      func_0x0001052c39ac();
      func_0x0001052c3a58();
      if ((lStack_68 != 0) && (*(long *)(lStack_68 + 0x10) != 0)) {
        do {
          func_0x0001052c3508();
        } while (extraout_w11_01 != 0);
      }
      func_0x0001052c35cc();
      func_0x0001052c39bc();
      func_0x0001052c3974();
      func_0x0001052c3a40();
      lStack_60 = param_2;
    }
    ___cxa_end_catch();
    param_2 = lVar1;
  }
LAB_1052c339c:
  __Unwind_Resume();
  param_2 = param_2 + 0x10;
  func_0x00010054ffe4();
  if (param_2 != 0) {
    func_0x0001000df548();
  }
  return param_1;
LAB_1052c3394:
  do {
    func_0x000104bd46a0();
  } while (param_3 != 0);
  goto LAB_1052c339c;
}



/* Entry: 1052c33a0; end: 1052c33bf;  */

void FUN_1052c33a0(long param_1)

{
  param_1 = param_1 + 0x10;
  func_0x00010054ffe4();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1052c33c0; end: 1052c33d3;  */

void FUN_1052c33c0(void)

{
  FUN_1052c34a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1052c33d4; end: 1052c33e7;  */

void FUN_1052c33d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001052c33dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1052c33e8; end: 1052c33fb;  */

void FUN_1052c33e8(void)

{
  FUN_1052c340c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1052c33fc; end: 1052c340b;  */

undefined1  [16] FUN_1052c33fc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x10;
  auVar1._0_8_ = "Djinni C++ Proxy";
  return auVar1;
}



/* Entry: 1052c340c; end: 1052c34a3;  */

void FUN_1052c340c(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uStack_28;
  
  *param_1 = &PTR_DAT_1108759c0;
  __ZNSt3__15mutex4lockEv(0x11328ada8);
  puVar3 = param_1 + 5;
  uStack_28 = *puVar3;
  lVar2 = 0x11328ad40;
  func_0x000104bdbfcc(0x11328ad40,&uStack_28);
  iVar1 = *(int *)(lVar2 + 0x28) + -1;
  *(int *)(lVar2 + 0x28) = iVar1;
  if (iVar1 == 0) {
    uStack_28 = *puVar3;
    func_0x000104bdc09c(0x11328ad40,&uStack_28);
  }
  __ZNSt3__15mutex6unlockEv(0x11328ada8);
  func_0x000104be5d84(puVar3);
  func_0x00010b9ace94(param_1);
  return;
}



/* Entry: 1052c34a4; end: 1052c34b3;  */

void FUN_1052c34a4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110875970;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1052c34b4; end: 1052c34db;  */

long * FUN_1052c34b4(long *param_1)

{
  if (*param_1 != 0) {
    func_0x0001003a916c();
  }
  return param_1;
}



/* Entry: 1052c34dc; end: 1052c3c3b;  */

void FUN_1052c34dc(void)

{
  return;
}



/* Entry: 1052c3c3c; end: 1052c3f0b;  */

void FUN_1052c3c3c(ulong param_1)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  long lVar4;
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [16];
  undefined8 uStack_158;
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [16];
  undefined8 uStack_130;
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [16];
  undefined8 uStack_108;
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined8 uStack_e0;
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined8 uStack_98;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined1 auStack_78 [16];
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bVar1 = *(byte *)((param_1 & 0xffffffff) + 0x1136ba268);
  *(undefined1 *)((param_1 & 0xffffffff) + 0x1136ba268) = 1;
  if ((bVar1 & 1) != 0) goto LAB_1052c3c98;
  if ((bRam00000001136ba270 & 1) == 0) goto LAB_1052c3cc8;
  while( true ) {
    func_0x000108b80888(0x1136ba278);
LAB_1052c3c98:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) break;
    ___stack_chk_fail();
LAB_1052c3cc8:
    iVar2 = 0x136ba270;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      FUN_1052c3fa8();
      pcVar3 = "onBadgeUpdated";
      func_0x0001003a83dc(&uStack_e0,"onBadgeUpdated");
      func_0x0001003b166c(auStack_100);
      FUN_1052bf458();
      func_0x0001003adcc0(auStack_a8,pcVar3);
      func_0x0001052c41f8(auStack_f0,auStack_100,auStack_a8);
      uStack_98 = uStack_e0;
      uStack_e0 = 0;
      func_0x0001003aef98(auStack_90,auStack_f0);
      pcVar3 = "onNotificationsUpdated";
      func_0x0001003a83dc(&uStack_108,"onNotificationsUpdated");
      func_0x0001003b166c(auStack_128);
      FUN_1052c2df4();
      func_0x0001003adcc0(auStack_b8,pcVar3);
      func_0x0001052c41f8(auStack_118,auStack_128,auStack_b8);
      uStack_80 = uStack_108;
      uStack_108 = 0;
      func_0x0001003aef98(auStack_78,auStack_118);
      pcVar3 = "onNotificationsReset";
      func_0x0001003a83dc(&uStack_130,"onNotificationsReset");
      func_0x0001003b166c(auStack_150);
      FUN_1052c2df4();
      func_0x0001003adcc0(auStack_c8,pcVar3);
      func_0x0001052c41f8(auStack_140,auStack_150,auStack_c8);
      uStack_68 = uStack_130;
      uStack_130 = 0;
      func_0x0001003aef98(auStack_60,auStack_140);
      pcVar3 = "onNotificationRemoved";
      func_0x0001003a83dc(&uStack_158,"onNotificationRemoved");
      func_0x0001003b166c(auStack_178);
      func_0x000104bef5f8();
      func_0x0001003adcc0(auStack_d8,pcVar3);
      func_0x0001052c41f8(auStack_168,auStack_178,auStack_d8);
      uStack_50 = uStack_158;
      uStack_158 = 0;
      func_0x0001003aef98(auStack_48,auStack_168);
      func_0x000104bdbd44(0x1136ba278,0x113819568,1,&uStack_98,4);
      lVar4 = 0x48;
      do {
        func_0x0001003b1c5c(auStack_90 + lVar4 + -8);
        lVar4 = lVar4 + -0x18;
      } while (lVar4 != -0x18);
      func_0x0001052c41dc(auStack_168);
      func_0x0001052c41dc(auStack_d8);
      func_0x0001052c41dc(auStack_178);
      func_0x0001003a8c94(&uStack_158);
      func_0x0001052c41dc(auStack_140);
      func_0x0001052c41dc(auStack_c8);
      func_0x0001052c41dc(auStack_150);
      func_0x0001003a8c94(&uStack_130);
      func_0x0001052c41dc(auStack_118);
      func_0x0001052c41dc(auStack_b8);
      func_0x0001052c41dc(auStack_128);
      func_0x0001003a8c94(&uStack_108);
      func_0x0001052c41dc(auStack_f0);
      func_0x0001052c41dc(auStack_a8);
      func_0x0001052c41dc(auStack_100);
      func_0x0001003a8c94(&uStack_e0);
      ___cxa_guard_release(0x1136ba270);
    }
  }
  return;
}



/* Entry: 1052c3f0c; end: 1052c3fa7;  */

undefined8 FUN_1052c3f0c(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lStack_20;
  undefined2 uStack_18;
  
  if ((bRam0000000113819560 & 1) == 0) {
    iVar4 = 0x13819560;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      FUN_1052c3fa8();
      lStack_20 = lRam0000000113819568;
      if (lRam0000000113819568 != 0) {
        piVar1 = (int *)(lRam0000000113819568 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_18 = 0xff00;
      func_0x0001003ad9a4(0x113819550,&lStack_20);
      func_0x0001003a8c94(&lStack_20);
      ___cxa_guard_release(0x113819560);
    }
  }
  return 0x113819550;
}



/* Entry: 1052c3fa8; end: 1052c3ffb;  */

void FUN_1052c3fa8(void)

{
  int iVar1;
  
  if ((bRam0000000113819570 & 1) == 0) {
    iVar1 = 0x13819570;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(0x113819568,"_djinni_interface_NotificationCenterManagerDelegate");
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x113819570);
      return;
    }
  }
  return;
}



/* Entry: 1052c3ffc; end: 1052c4057;  */

long FUN_1052c3ffc(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_138 [16];
  undefined8 uStack_128;
  undefined2 uStack_120;
  undefined1 auStack_38 [24];
  
  func_0x0001052c41bc();
  FUN_1052bf354(auStack_38);
  func_0x0001052c4218();
  func_0x0001052c4200();
  func_0x0001052c4210();
  func_0x0001052c41f0();
  func_0x0001052c41a4();
  lVar1 = param_2;
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001052c41e4();
    func_0x0001052c4208();
    func_0x0001052c41bc();
    func_0x0001052c4234();
    func_0x0001052c4218();
    func_0x0001052c4200();
    func_0x0001052c4210();
    func_0x0001052c41f0();
    func_0x0001052c41a4();
    lVar1 = param_2;
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x0001052c41e4();
      func_0x0001052c4208();
      lVar1 = param_2;
      func_0x0001052c41bc();
      func_0x0001052c4234();
      func_0x0001052c4218();
      uVar2 = 2;
      func_0x0001052c4200();
      func_0x0001052c4210();
      func_0x0001052c41f0();
      func_0x0001052c41a4();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x0001052c41e4();
        func_0x0001052c4208();
        func_0x0001052c41bc();
        uStack_120 = 5;
        lVar1 = lVar1 + 8;
        uStack_128 = uVar2;
        func_0x0001052c4200(auStack_138,lVar1,3,&uStack_128);
        func_0x0001052c4210();
        func_0x0001052c41f0();
        func_0x0001052c41a4();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x0001052c41e4();
          func_0x0001052c4208();
          func_0x0001052c4228();
          return param_2;
        }
      }
    }
  }
  return lVar1;
}



/* Entry: 1052c4058; end: 1052c40ab;  */

long FUN_1052c4058(long param_1)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_e8 [16];
  undefined8 uStack_d8;
  undefined2 uStack_d0;
  
  func_0x0001052c41bc();
  func_0x0001052c4234();
  func_0x0001052c4218();
  func_0x0001052c4200();
  func_0x0001052c4210();
  func_0x0001052c41f0();
  func_0x0001052c41a4();
  lVar1 = param_1;
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001052c41e4();
    func_0x0001052c4208();
    lVar1 = param_1;
    func_0x0001052c41bc();
    func_0x0001052c4234();
    func_0x0001052c4218();
    uVar2 = 2;
    func_0x0001052c4200();
    func_0x0001052c4210();
    func_0x0001052c41f0();
    func_0x0001052c41a4();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x0001052c41e4();
      func_0x0001052c4208();
      func_0x0001052c41bc();
      uStack_d0 = 5;
      lVar1 = lVar1 + 8;
      uStack_d8 = uVar2;
      func_0x0001052c4200(auStack_e8,lVar1,3,&uStack_d8);
      func_0x0001052c4210();
      func_0x0001052c41f0();
      func_0x0001052c41a4();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x0001052c41e4();
        func_0x0001052c4208();
        func_0x0001052c4228();
        return param_1;
      }
    }
  }
  return lVar1;
}



/* Entry: 1052c40ac; end: 1052c40ff;  */

long FUN_1052c40ac(long param_1)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [16];
  undefined8 uStack_88;
  undefined2 uStack_80;
  
  lVar1 = param_1;
  func_0x0001052c41bc();
  func_0x0001052c4234();
  func_0x0001052c4218();
  uVar2 = 2;
  func_0x0001052c4200();
  func_0x0001052c4210();
  func_0x0001052c41f0();
  func_0x0001052c41a4();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001052c41e4();
    func_0x0001052c4208();
    func_0x0001052c41bc();
    uStack_80 = 5;
    lVar1 = lVar1 + 8;
    uStack_88 = uVar2;
    func_0x0001052c4200(auStack_98,lVar1,3,&uStack_88);
    func_0x0001052c4210();
    func_0x0001052c41f0();
    func_0x0001052c41a4();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x0001052c41e4();
      func_0x0001052c4208();
      func_0x0001052c4228();
      return param_1;
    }
  }
  return lVar1;
}



/* Entry: 1052c4100; end: 1052c4157;  */

void FUN_1052c4100(long param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  undefined2 uStack_30;
  
  func_0x0001052c41bc();
  uStack_30 = 5;
  uStack_38 = param_2;
  func_0x0001052c4200(auStack_48,param_1 + 8,3,&uStack_38);
  func_0x0001052c4210();
  func_0x0001052c41f0();
  func_0x0001052c41a4();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001052c41e4();
  func_0x0001052c4208();
  func_0x0001052c4228();
  return;
}



/* Entry: 1052c4158; end: 1052c4197;  */

void FUN_1052c4158(void)

{
  func_0x0001052c4228();
  return;
}



/* Entry: 1052c4198; end: 1052c423f;  */

undefined8 * FUN_1052c4198(undefined8 *param_1)

{
  undefined4 uStack_24;
  
  *param_1 = &PTR_DAT_1107e7df0;
  __ZNSt3__15mutex4lockEv(0x11328ad68);
  uStack_24 = *(undefined4 *)(param_1[1] + 0x18);
  func_0x000104be7ab4(0x11328ad18,&uStack_24);
  __ZNSt3__15mutex6unlockEv(0x11328ad68);
  func_0x000104be7d74(param_1 + 5);
  func_0x000104be7db4(param_1 + 2);
  func_0x000104be7e54(param_1 + 1);
  return param_1;
}



/* Entry: 1052c4240; end: 1052c46c7;  */

void FUN_1052c4240(long *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined1 uVar4;
  int iVar5;
  code ***pppcVar6;
  undefined **ppuVar7;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  undefined **ppuVar8;
  long lVar9;
  undefined *puVar10;
  code **ppcStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  code **ppcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [8];
  code *pcStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  code ***pppcStack_d0;
  code ***apppcStack_c8 [2];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  code ***pppcStack_98;
  undefined **ppuStack_90;
  code *pcStack_88;
  undefined8 uStack_68;
  
  func_0x0001052c5054();
  uStack_68 = extraout_x8;
  if ((bRam00000001136ba288 & 1) == 0) {
    iVar5 = 0x136ba288;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      FUN_1052c4af0();
      FUN_1052c484c(0);
      FUN_1052c484c(1);
      func_0x00010b9941f8(apppcStack_c8);
      func_0x00010b993b40(&pppcStack_98,apppcStack_c8[0],0x1138195b0);
      if (((ulong)pcStack_88 & 1) == 0) goto LAB_1052c45f8;
      func_0x0001003adcc0(0x1136ba290,&pppcStack_98);
      func_0x0001003b12dc(&pppcStack_98);
      func_0x000104bdc2fc(apppcStack_c8);
      ___cxa_guard_release(0x1136ba288);
    }
  }
  pppcVar6 = (code ***)0x1136ba298;
  func_0x0001003b2110(auStack_f8);
  pcStack_110 = FUN_1052c46c8;
  func_0x0001052c5044();
  if (extraout_x8_00 != 0) {
    do {
      func_0x0001052c4f9c();
    } while (extraout_w10 != 0);
  }
  pcStack_e8 = FUN_1052c46c8;
  uStack_108 = 0;
  uStack_100 = 0;
  func_0x0001052c5074();
  pppcStack_98 = (code ***)FUN_1052c4bf0;
  ppuStack_90 = &PTR_FUN_110875aa0;
  pcStack_88 = FUN_1052c46c8;
  uStack_e0 = 0;
  uStack_d8 = 0;
  func_0x0001052c50c8();
  ppcStack_128 = (code **)pppcVar6;
  (*(code *)*ppuStack_90)(&ppuStack_90);
  do {
    func_0x0001052c5064();
  } while (extraout_w10_00 != 0);
  pppcStack_98 = pppcVar6;
  func_0x0001052c50d0(apppcStack_c8);
  func_0x0001052c50a4();
  pppcVar6 = &ppcStack_128;
  func_0x000104bda3d0();
  func_0x0001052c509c();
  ppcStack_128 = (code **)FUN_1052c4700;
  func_0x0001052c5044();
  if (extraout_x8_01 != 0) {
    do {
      func_0x0001052c4f9c();
    } while (extraout_w10_01 != 0);
  }
  pcStack_e8 = FUN_1052c4700;
  uStack_120 = 0;
  uStack_118 = 0;
  func_0x0001052c5074();
  func_0x0001052c4fe4(FUN_1052c4ca8);
  func_0x0001052c50c8();
  ppcStack_140 = (code **)pppcVar6;
  func_0x0001052c5034();
  do {
    func_0x0001052c5064();
  } while (extraout_w10_02 != 0);
  pppcStack_98 = pppcVar6;
  func_0x0001052c50d0(auStack_b8);
  func_0x0001052c50a4();
  pppcVar6 = &ppcStack_140;
  func_0x000104bda3d0();
  func_0x0001052c509c();
  ppcStack_140 = (code **)FUN_1052c4784;
  func_0x0001052c5044();
  if (extraout_x8_02 != 0) {
    do {
      func_0x0001052c4f9c();
    } while (extraout_w10_03 != 0);
  }
  pcStack_e8 = FUN_1052c4784;
  uStack_138 = 0;
  uStack_130 = 0;
  func_0x0001052c5074();
  func_0x0001052c4fe4(FUN_1052c4d74);
  func_0x0001052c50c8();
  pppcStack_d0 = pppcVar6;
  func_0x0001052c5034();
  do {
    func_0x0001052c5064();
  } while (extraout_w10_04 != 0);
  pppcStack_98 = pppcVar6;
  func_0x0001052c50d0(auStack_a8);
  func_0x0001052c50a4();
  func_0x000104bda3d0(&pppcStack_d0);
  func_0x0001052c509c();
  func_0x000104bdb9bc(auStack_f0,auStack_f8,apppcStack_c8,3);
  lVar9 = 0x20;
  do {
    func_0x00010b9a8d98((long)apppcStack_c8 + lVar9);
    lVar9 = lVar9 + -0x10;
    uVar4 = lVar9 == -0x10;
  } while (!(bool)uVar4);
  func_0x0001006856e8(&uStack_138);
  func_0x0001006856e8(&uStack_120);
  func_0x0001006856e8(&uStack_108);
  func_0x0001003b1f60(auStack_f8);
  ppuVar7 = (undefined **)0x50;
  __Znwm();
  ppuVar8 = ppuVar7 + 1;
  *ppuVar8 = (undefined *)0x0;
  ppuVar7[2] = (undefined *)0x0;
  *ppuVar7 = (undefined *)&PTR_DAT_110875b10;
  pppcVar6 = (code ***)(ppuVar7 + 3);
  func_0x00010b9ace44(pppcVar6,auStack_f0);
  ppuVar7[3] = (undefined *)&PTR_DAT_110875b60;
  lVar9 = param_2[1];
  puVar10 = (undefined *)*param_2;
  ppuVar7[9] = (undefined *)param_2[1];
  ppuVar7[8] = puVar10;
  if (lVar9 != 0) {
    do {
      func_0x0001052c4f9c();
    } while (extraout_w10_05 != 0);
  }
  apppcStack_c8[0] = pppcVar6;
  if ((ppuVar7[5] == (undefined *)0x0) || (uVar4 = *(long *)(ppuVar7[5] + 8) == -1, (bool)uVar4)) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
      if (bVar2) {
        *ppuVar8 = *ppuVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    pppcStack_98 = pppcVar6;
    ppuStack_90 = ppuVar7;
    func_0x0001003a8180(ppuVar7 + 4,&pppcStack_98);
    func_0x0001003a90c4(&pppcStack_98);
    if (ppuVar7[5] != (undefined *)0x0) goto LAB_1052c4534;
  }
  else {
LAB_1052c4534:
    do {
      func_0x0001052c4f9c();
    } while (extraout_w10_06 != 0);
  }
  *param_1 = (long)pppcVar6;
  FUN_1052c4f40(apppcStack_c8);
  func_0x000104bdbf78(auStack_f0);
  func_0x0001052c4f88(uStack_68);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
LAB_1052c45f8:
  func_0x000104bdc2c8();
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1052c4600);
  (*pcVar3)();
}



/* Entry: 1052c46c8; end: 1052c46ff;  */

void FUN_1052c46c8(undefined1 *param_1,undefined8 *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)*param_2;
  (**(code **)(*plVar1 + 0x10))();
  *(undefined2 *)(param_1 + 8) = 7;
  *param_1 = (char)plVar1;
  return;
}



/* Entry: 1052c4700; end: 1052c4783;  */

void FUN_1052c4700(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined8 uStack_38;
  long *plStack_30;
  undefined8 uStack_28;
  
  plVar1 = (long *)*param_2;
  (**(code **)(*plVar1 + 0x18))();
  uStack_40 = 0;
  uStack_38 = 0;
  plStack_30 = plVar1;
  uStack_28 = param_3;
  func_0x0001003adc18(&uStack_40);
  FUN_1052c4b44(auStack_48,&UNK_10dd94194,&uStack_38);
  func_0x00010b9a8f90(param_1,auStack_48);
  func_0x000104bdb38c(auStack_48);
  func_0x0001003adc18(&uStack_38);
  return;
}



/* Entry: 1052c4784; end: 1052c484b;  */

void FUN_1052c4784(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 auStack_40 [2];
  
  uVar1 = param_3;
  func_0x00010b9abfa4(param_3,0);
  func_0x00010b9abfa4(param_3,1);
  plVar2 = (long *)*param_2;
  func_0x00010b9a9588(uVar1);
  func_0x00010b9a9588(param_3);
  (**(code **)(*plVar2 + 0x20))(auStack_40,plVar2,uVar1,param_3);
  func_0x000108b80734(auStack_40[0],&UNK_10dd94198);
  FUN_1052badc8(param_1,auStack_40);
  func_0x0001006856e8(auStack_40);
  return;
}



/* Entry: 1052c484c; end: 1052c4a57;  */

void FUN_1052c484c(ulong param_1)

{
  byte bVar1;
  undefined1 in_ZR;
  int iVar2;
  char *pcVar3;
  undefined1 *puVar4;
  undefined8 extraout_x8;
  long lVar5;
  undefined1 auStack_d8 [16];
  undefined8 uStack_c8;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined1 auStack_a8 [16];
  undefined8 uStack_98;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_68 [16];
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined1 auStack_38 [16];
  undefined8 uStack_28;
  
  func_0x0001052c5054();
  bVar1 = *(byte *)((param_1 & 0xffffffff) + 0x113819578);
  *(undefined1 *)((param_1 & 0xffffffff) + 0x113819578) = 1;
  uStack_28 = extraout_x8;
  if ((bVar1 & 1) != 0) goto LAB_1052c489c;
  if ((bRam00000001138195a8 & 1) == 0) goto LAB_1052c48bc;
  while( true ) {
    func_0x000108b80888(0x113819598);
LAB_1052c489c:
    func_0x0001052c4f88(uStack_28);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
LAB_1052c48bc:
    iVar2 = 0x138195a8;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      FUN_1052c4af0();
      func_0x0001003a83dc(&uStack_98,"isPlatformSafe");
      func_0x000104bef4f0();
      func_0x0001052c50b4(auStack_a8);
      uStack_70 = uStack_98;
      uStack_98 = 0;
      func_0x0001003aef98(auStack_68,auStack_a8);
      func_0x0001003a83dc(&uStack_b0,"data");
      FUN_1052b079c();
      func_0x0001052c50b4(auStack_c0);
      uStack_58 = uStack_b0;
      uStack_b0 = 0;
      func_0x0001003aef98(auStack_50,auStack_c0);
      pcVar3 = "subspan";
      func_0x0001003a83dc(&uStack_c8,"subspan");
      FUN_1052c4a58();
      func_0x000104bef5f8();
      puVar4 = auStack_90;
      func_0x0001003adcc0(puVar4,pcVar3);
      func_0x000104bef5f8();
      func_0x0001003adcc0(auStack_80,puVar4);
      func_0x000104bdbd48(auStack_d8,0x113819580,auStack_90,2);
      uStack_40 = uStack_c8;
      uStack_c8 = 0;
      func_0x0001003aef98(auStack_38,auStack_d8);
      func_0x000104bdbd44(0x113819598,0x1138195b0,1,&uStack_70,3);
      lVar5 = 0x30;
      do {
        func_0x0001003b1c5c(auStack_68 + lVar5 + -8);
        lVar5 = lVar5 + -0x18;
      } while (lVar5 != -0x18);
      func_0x0001052c50ac(auStack_d8);
      lVar5 = 0x18;
      do {
        func_0x0001003adc18(auStack_90 + lVar5);
        lVar5 = lVar5 + -0x10;
        in_ZR = lVar5 == -8;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(&uStack_c8);
      func_0x0001052c50ac(auStack_c0);
      func_0x0001003a8c94(&uStack_b0);
      func_0x0001052c50ac(auStack_a8);
      func_0x0001003a8c94(&uStack_98);
      ___cxa_guard_release(0x1138195a8);
    }
  }
  return;
}



/* Entry: 1052c4a58; end: 1052c4aef;  */

undefined8 FUN_1052c4a58(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lStack_20;
  undefined2 uStack_18;
  
  if ((bRam0000000113819590 & 1) == 0) {
    iVar4 = 0x13819590;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      FUN_1052c4af0();
      lStack_20 = lRam00000001138195b0;
      if (lRam00000001138195b0 != 0) {
        piVar1 = (int *)(lRam00000001138195b0 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_18 = 0xff00;
      func_0x0001003ad9a4(0x113819580,&lStack_20);
      func_0x0001052c5088();
      ___cxa_guard_release(0x113819590);
    }
  }
  return 0x113819580;
}



/* Entry: 1052c4af0; end: 1052c4b43;  */

void FUN_1052c4af0(void)

{
  int iVar1;
  
  if ((bRam00000001138195b8 & 1) == 0) {
    iVar1 = 0x138195b8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(0x1138195b0,"_djinni_interface_DataProvider");
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x1138195b8);
      return;
    }
  }
  return;
}



/* Entry: 1052c4b44; end: 1052c4bef;  */

void FUN_1052c4b44(undefined8 *param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar2 = (undefined8 *)0x30;
  __Znwm();
  uVar1 = *param_2;
  plVar3 = (long *)*param_3;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  uStack_48 = param_3[2];
  uStack_50 = param_3[1];
  *puVar2 = &PTR_DAT_110d7ef28;
  puVar2[1] = 1;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  puVar2[3] = plVar3;
  uStack_58 = 0;
  puVar2[5] = uStack_48;
  puVar2[4] = uStack_50;
  *param_1 = puVar2;
  func_0x0001003adc18(&uStack_58);
  return;
}



/* Entry: 1052c4bf0; end: 1052c4c5f;  */

void FUN_1052c4bf0(undefined8 param_1,long param_2)

{
  (**(code **)(param_2 + 0x10))(param_2 + 0x18,param_1);
  return;
}



/* Entry: 1052c4c60; end: 1052c4ca7;  */

long FUN_1052c4c60(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x0001000df548();
  }
  return param_1 + 0x10;
}



/* Entry: 1052c4ca8; end: 1052c4d57;  */

void FUN_1052c4ca8(void)

{
  func_0x0001052c50e4();
  return;
}



/* Entry: 1052c4d58; end: 1052c4d73;  */

long FUN_1052c4d58(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x0001000df548();
  }
  return param_1 + 0x10;
}


