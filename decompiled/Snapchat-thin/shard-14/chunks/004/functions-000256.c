/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b183d6c; end: 10b183d7f;  */

void FUN_10b183d6c(void)

{
  FUN_10b184160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b183d80; end: 10b183d93;  */

void FUN_10b183d80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b183d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b183d94; end: 10b183da7;  */

void FUN_10b183d94(void)

{
  FUN_10b183fbc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b183da8; end: 10b183fbb;  */

long * FUN_10b183da8(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  int extraout_w10;
  long *plVar5;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  long alStack_48 [2];
  undefined1 auStack_38 [8];
  long *plStack_30;
  long lStack_28;
  
  plVar3 = &lStack_b0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  alStack_48[0] = 0;
  alStack_48[1] = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  FUN_10b142160(&lStack_60,param_1 + 8,&uStack_70);
  FUN_10b142188(alStack_48,&lStack_60);
  FUN_10b141ff4(&lStack_60);
  FUN_10b141ff4(&uStack_70);
  func_0x000107c27b48(&plStack_78);
  func_0x000107c27b4c(&lStack_60,plStack_78);
  plVar5 = plStack_78;
  lStack_80 = 0;
  plStack_78 = (long *)0x0;
  plStack_30 = plVar5;
  lStack_88 = 0;
  lStack_98 = alStack_48[0] + 0x48;
  lStack_90 = CONCAT71(lStack_90._1_7_,1);
  __ZNSt3__15mutex4lockEv();
  lVar4 = alStack_48[0];
  FUN_10b146094();
  if ((int)lVar4 == 0) {
    puVar2 = (undefined8 *)0x18;
    __Znwm();
    *puVar2 = &PTR_FUN_110cc18d0;
    plStack_30 = (long *)0x0;
    puVar2[2] = plVar5;
    lVar4 = *(long *)(alStack_48[0] + 0x90);
    *(undefined8 **)(alStack_48[0] + 0x90) = puVar2;
    if (lVar4 != 0) {
      func_0x00010b184d20();
    }
    plVar5 = (long *)0x0;
  }
  else {
    FUN_10b142188(&lStack_88,alStack_48);
  }
  func_0x000107c2798c(&lStack_98);
  if (lStack_88 != 0) {
    lStack_98 = lStack_88;
    lStack_90 = lStack_80;
    if (lStack_80 != 0) {
      do {
        func_0x00010b184c40();
      } while (extraout_w10 != 0);
    }
    FUN_10b183fe8(auStack_38);
    FUN_10b141ff4(&lStack_98);
  }
  uStack_a8 = uStack_58;
  lStack_b0 = lStack_60;
  lStack_60 = 0;
  uStack_58 = 0;
  FUN_10b141ff4(&lStack_88);
  if (plVar5 != (long *)0x0) {
    func_0x00010b184cd4(*(undefined8 *)(*plVar5 + 8));
  }
  func_0x000107c27b58(&lStack_60);
  plVar1 = plStack_78;
  plStack_78 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    func_0x00010b184ca8();
  }
  FUN_10b141ff4(alStack_48);
  func_0x000107c27b58();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    func_0x000107c2798c(&lStack_98);
    FUN_10b141ff4(&lStack_88);
    plStack_30 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      func_0x00010b184cd4(*(undefined8 *)(*plVar5 + 8));
    }
    func_0x000107c27b58(&lStack_60);
    plVar5 = plStack_78;
    plStack_78 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      func_0x00010b184ca8();
    }
    plVar5 = alStack_48;
    FUN_10b141ff4();
    func_0x00010b184ccc();
    *plVar5 = (long)&PTR_DAT_110cc1890;
    FUN_10b141ff4(plVar5 + 1);
    return plVar5;
  }
  return plVar3;
}



/* Entry: 10b183fbc; end: 10b183fe7;  */

undefined8 * FUN_10b183fbc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cc1890;
  FUN_10b141ff4(param_1 + 1);
  return param_1;
}



/* Entry: 10b183fe8; end: 10b1840cf;  */

void FUN_10b183fe8(long param_1,undefined8 param_2,long param_3)

{
  code *extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  long lStack_48;
  long alStack_40 [2];
  
  uStack_60 = param_2;
  lStack_58 = param_3;
  if (param_3 != 0) {
    do {
      func_0x00010b184c40();
    } while (extraout_w10 != 0);
    do {
      func_0x00010b184c40();
    } while (extraout_w10_00 != 0);
  }
  uStack_50 = param_2;
  lStack_48 = param_3;
  FUN_10b1462f0(alStack_40,&uStack_50);
  if (alStack_40[0] != 0) {
    func_0x00010b184f58();
    (*extraout_x8)();
  }
  func_0x0001052aad20(alStack_40);
  func_0x00010b184f08();
  FUN_10b141ff4(&uStack_60);
  func_0x000107c27b68(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10b1840d0; end: 10b1840d3;  */

undefined8 * FUN_10b1840d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc18d0;
  func_0x000107c27b70(param_1 + 2);
  return param_1;
}



/* Entry: 10b1840d4; end: 10b1840e7;  */

void FUN_10b1840d4(void)

{
  FUN_10b184134();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1840e8; end: 10b184133;  */

void FUN_10b1840e8(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  undefined1 auStack_30 [16];
  
  func_0x00010b184db4();
  if (param_3 != 0) {
    do {
      func_0x00010b184c40();
    } while (extraout_w10 != 0);
  }
  FUN_10b183fe8(param_1 + 8);
  FUN_10b141ff4(auStack_30);
  return;
}



/* Entry: 10b184134; end: 10b18415f;  */

undefined8 * FUN_10b184134(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc18d0;
  func_0x000107c27b70(param_1 + 2);
  return param_1;
}



/* Entry: 10b184160; end: 10b18416f;  */

void FUN_10b184160(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc1840;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b184170; end: 10b184217;  */

void FUN_10b184170(long param_1)

{
  undefined1 in_ZR;
  undefined1 extraout_w8;
  
  FUN_10b1827f0(**(undefined8 **)(param_1 + 0x50));
  func_0x00010b184e70();
  func_0x00010b184d40();
  *(undefined1 *)(param_1 + 0x58) = extraout_w8;
  func_0x00010b1850a0();
  if ((bool)in_ZR) {
    func_0x00010b184f48();
    func_0x00010b184d74();
    func_0x000107c27b6c();
  }
  else {
    func_0x00010b184cf4();
    func_0x00010b184d74();
    func_0x000104bf33ec();
    func_0x00010b184dac();
  }
  func_0x00010b184da4();
  func_0x00010b184cb4();
  return;
}



/* Entry: 10b184218; end: 10b184237;  */

void FUN_10b184218(void)

{
  func_0x00010b184f20();
  FUN_10b12505c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b184238; end: 10b1844d3;  */

void FUN_10b184238(long param_1)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 extraout_w8;
  code *extraout_x8;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  FUN_10b12d0d0(param_1 + 0x58);
  puVar6 = (undefined8 *)(param_1 + 0x598);
  func_0x000107c27b58(param_1 + 0x58);
  func_0x00010b184ff0();
  FUN_10b124eb8(puVar6);
  func_0x000107c27b58(puVar6);
  uVar4 = *(undefined8 *)(param_1 + 0x5a8);
  FUN_10b1827f0(uVar4);
  puVar1 = (undefined8 *)(param_1 + 0x5b8);
  FUN_10b182920(param_1 + 0x58,uVar4);
  uVar2 = *(char *)(param_1 + 0x2d0) == '\x01';
  if ((bool)uVar2) {
    uVar4 = *(undefined8 *)(param_1 + 0x550);
    FUN_10b202630(&puStack_b0,param_1 + 0x58);
    func_0x00010b1f70f0(puVar6,uVar4,&puStack_b0);
    func_0x00010b184ef0();
    iVar3 = (int)*puVar6;
    func_0x00010b184f58();
    (*extraout_x8)();
    if (iVar3 == 0) {
      (**(code **)(*(long *)*puVar6 + 0x20))(&puStack_b0);
      func_0x00010b185044();
      puVar6 = *(undefined8 **)(param_1 + 0x580);
      puVar6[2] = 0;
      *puVar6 = &PTR_FUN_110cc0868;
      puVar6[1] = 0;
      FUN_10b12394c(param_1 + 0x2d8,param_1 + 0x58);
      *(undefined8 *)(param_1 + 0x590) = uStack_a8;
      *(undefined8 **)(param_1 + 0x588) = puStack_b0;
      puStack_b0 = (undefined8 *)0x0;
      uStack_a8 = 0;
      func_0x00010b184e24(puVar6 + 3);
      func_0x00010b184e90();
      func_0x00010b184f18();
      lVar5 = *(long *)(param_1 + 0x580);
      *(undefined8 *)(param_1 + 0x580) = 0;
      func_0x00010b184f34();
      *(long *)(param_1 + 0x5b8) = lVar5 + 0x18;
      *(long *)(param_1 + 0x5c0) = lVar5;
      uStack_60 = 0;
      uStack_58 = 0;
      FUN_10b169a18(&uStack_60);
      func_0x000107c27d78(&puStack_b0);
      func_0x00010b185024();
      func_0x00010b185050();
      goto LAB_10b1842f0;
    }
    func_0x00010b185024();
  }
  func_0x00010b185050();
  *puVar1 = 0;
  *(undefined8 *)(param_1 + 0x5c0) = 0;
LAB_10b1842f0:
  puVar6 = puVar1;
  FUN_10b168f60(param_1 + 0x38);
  FUN_10b144044(puVar1);
  func_0x00010b184f2c();
  func_0x00010b184d40();
  *(undefined1 *)(param_1 + 0x5c8) = extraout_w8;
  func_0x00010b184cbc();
  if ((bool)uVar2) {
    puStack_b0 = puVar6;
    FUN_10b168e2c(param_1 + 0x10,&puStack_b0);
  }
  else {
    __ZNSt13exception_ptrC1ERKS_(&uStack_60);
    puStack_b0 = &uStack_60;
    FUN_10b1615bc(param_1 + 0x10,&puStack_b0);
    __ZNSt13exception_ptrD1Ev(&uStack_60);
  }
  func_0x00010b184ec0();
  func_0x00010b185034();
  func_0x00010b184cb4();
  return;
}



/* Entry: 10b1844d4; end: 10b184513;  */

void FUN_10b1844d4(long param_1)

{
  if ((*(byte *)(param_1 + 0x5c8) & 1) == 0) {
    func_0x000107c27b58(param_1 + 0x58);
    FUN_10b182964(param_1 + 0x5a8);
  }
  func_0x00010b184ec0();
  func_0x00010b182af0(param_1 + 0x550);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10b184514; end: 10b184627;  */

void FUN_10b184514(long param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined1 extraout_w8;
  long extraout_x8;
  long lVar2;
  int extraout_w10;
  
  FUN_10b12d0d0(param_1 + 0x50);
  func_0x00010b184fc0();
  plVar1 = (long *)(param_1 + 0x78);
  FUN_10b146ae4();
  func_0x00010b184f64();
  *(long **)(param_1 + 0x68) = plVar1;
  lVar2 = *(long *)(extraout_x8 + 8);
  *(long *)(param_1 + 0x70) = lVar2;
  if (lVar2 != 0) {
    do {
      func_0x00010b184c40();
    } while (extraout_w10 != 0);
  }
  if (plVar1 != (long *)0x0) {
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x94);
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x8c);
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x9c);
    (**(code **)(*plVar1 + 0x40))();
  }
  func_0x00010b184e80();
  func_0x00010b184e70();
  func_0x00010b184e0c();
  func_0x00010b184d40();
  *(undefined1 *)(param_1 + 0xa8) = extraout_w8;
  func_0x00010b1850a0();
  if ((bool)in_ZR) {
    func_0x00010b184f48();
    func_0x00010b184d74();
    func_0x000107c27b6c();
  }
  else {
    func_0x00010b184cf4();
    func_0x00010b184d74();
    func_0x000104bf33ec();
    func_0x00010b184dac();
  }
  func_0x00010b184da4();
  func_0x00010b184cb4();
  return;
}



/* Entry: 10b184628; end: 10b184657;  */

void FUN_10b184628(long param_1)

{
  if ((*(byte *)(param_1 + 0xa8) & 1) == 0) {
    func_0x00010b184fc0();
    func_0x00010b184e0c();
  }
  func_0x00010b184da4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10b184658; end: 10b1847cb;  */

void FUN_10b184658(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  long extraout_x8;
  long extraout_x9;
  int extraout_w10;
  int extraout_w11;
  long lVar2;
  undefined8 in_register_00005008;
  long lStack_48;
  
  uVar1 = param_2 + 0x88;
  if (*(char *)(param_2 + 0xa0) == '\0') {
    FUN_10b1435a8(param_2 + 0x60);
    func_0x00010b185058();
    *(undefined8 *)(param_2 + 0x80) = in_register_00005008;
    *(undefined8 *)(param_2 + 0x78) = param_1;
    if (extraout_x8 != 0) {
      do {
        func_0x00010b184c40();
      } while (extraout_w10 != 0);
    }
    func_0x00010b184e1c();
    *(long *)(param_2 + 0x98) = *(long *)(param_2 + 0x78);
    if (*(long *)(param_2 + 0x78) == 0) {
      func_0x00010b184e98();
      goto LAB_10b184680;
    }
    func_0x00010b184e78();
    FUN_10b1479ac();
    if ((uVar1 & 1) == 0) {
      *(undefined1 *)(param_2 + 0xa0) = 1;
      func_0x00010b184d54();
      FUN_10b147a3c();
      if (lStack_48 == 0) {
        return;
      }
      do {
        func_0x00010b184c98();
      } while (extraout_w11 != 0);
      if (extraout_x9 != 0) {
        return;
      }
      func_0x00010b184c30();
      func_0x00010b184d9c();
      return;
    }
  }
  func_0x00010b184ffc();
LAB_10b184680:
  func_0x00010b184f7c();
  lVar2 = *(long *)(param_2 + 0x98);
  func_0x00010b184ed8();
  if (lVar2 != 0) {
    func_0x00010b184f00();
  }
  func_0x00010b184d80();
  func_0x00010b184e58();
  func_0x00010b185064();
  if ((bool)in_ZR) {
    func_0x00010b184d88();
    FUN_10b147d74();
  }
  else {
    func_0x00010b184cdc();
    func_0x00010b184d88();
    FUN_10b147358();
    func_0x00010b184de8();
  }
  func_0x00010b184ed0();
  func_0x00010b184cb4();
  return;
}



/* Entry: 10b1847cc; end: 10b184813;  */

void FUN_10b1847cc(long param_1)

{
  if (*(char *)(param_1 + 0xa0) != '\x02') {
    if (*(char *)(param_1 + 0xa0) == '\x01') {
      func_0x00010b147278(param_1 + 0x88);
      func_0x00010b184d80();
    }
    else {
      func_0x00010b184e1c();
    }
  }
  func_0x00010b184ed0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10b184814; end: 10b18498b;  */

void FUN_10b184814(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  undefined1 extraout_w8;
  long extraout_x8;
  long extraout_x9;
  int extraout_w10;
  int extraout_w11;
  long lVar2;
  undefined8 in_register_00005008;
  long lStack_48;
  
  uVar1 = param_2 + 0x78;
  if (*(char *)(param_2 + 0x90) == '\0') {
    FUN_10b1435a8(param_2 + 0x68);
    func_0x00010b185058();
    *(undefined8 *)(param_2 + 0x60) = in_register_00005008;
    *(undefined8 *)(param_2 + 0x58) = param_1;
    if (extraout_x8 != 0) {
      do {
        func_0x00010b184c40();
      } while (extraout_w10 != 0);
    }
    func_0x00010b184e04();
    *(long *)(param_2 + 0x88) = *(long *)(param_2 + 0x58);
    if (*(long *)(param_2 + 0x58) == 0) {
      *(undefined8 *)(param_2 + 0x68) = 0;
      *(undefined8 *)(param_2 + 0x70) = 0;
      goto LAB_10b18483c;
    }
    func_0x00010b184e78();
    FUN_10b16b9dc();
    if ((uVar1 & 1) == 0) {
      *(undefined1 *)(param_2 + 0x90) = 1;
      func_0x00010b184d54();
      FUN_10b16ba64();
      if (lStack_48 == 0) {
        return;
      }
      do {
        func_0x00010b184c98();
      } while (extraout_w11 != 0);
      if (extraout_x9 != 0) {
        return;
      }
      func_0x00010b184c30();
      func_0x00010b184d9c();
      return;
    }
  }
  func_0x00010b184f70();
LAB_10b18483c:
  func_0x00010b184f90();
  lVar2 = *(long *)(param_2 + 0x88);
  func_0x00010b184e88();
  if (lVar2 != 0) {
    func_0x00010b184ef8();
  }
  func_0x00010b184e48();
  func_0x00010b184e58();
  *(undefined1 *)(param_2 + 0x90) = extraout_w8;
  func_0x00010b184cbc();
  if ((bool)in_ZR) {
    func_0x00010b184d88();
    FUN_10b16c638();
  }
  else {
    func_0x00010b184cdc();
    func_0x00010b184d88();
    FUN_10b16688c();
    func_0x00010b184de8();
  }
  func_0x00010b184eb0();
  func_0x00010b184cb4();
  return;
}



/* Entry: 10b18498c; end: 10b1849d3;  */

void FUN_10b18498c(long param_1)

{
  if (*(char *)(param_1 + 0x90) != '\x02') {
    if (*(char *)(param_1 + 0x90) == '\x01') {
      FUN_10b164e6c(param_1 + 0x78);
      func_0x00010b184e48();
    }
    else {
      func_0x00010b184e04();
    }
  }
  func_0x00010b184eb0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10b1849d4; end: 10b184a7b;  */

void FUN_10b1849d4(void)

{
  undefined1 in_ZR;
  
  FUN_10b1827f0();
  func_0x00010b184f88();
  func_0x00010b184fa4();
  func_0x00010b184d40();
  func_0x00010b185078();
  if ((bool)in_ZR) {
    func_0x00010b184d74();
    FUN_10b179070();
  }
  else {
    func_0x00010b185008();
    func_0x00010b184d74();
    FUN_10b178f08();
    func_0x00010b184dac();
  }
  func_0x00010b184eb8();
  func_0x00010b184cb4();
  return;
}



/* Entry: 10b184a7c; end: 10b184aa7;  */

void FUN_10b184a7c(long param_1)

{
  if ((*(byte *)(param_1 + 0x2d8) & 1) == 0) {
    func_0x00010b184fa4();
  }
  func_0x00010b184eb8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10b184aa8; end: 10b184bf7;  */

void FUN_10b184aa8(long param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 ***pppuVar2;
  undefined1 extraout_w8;
  long extraout_x8;
  long lVar3;
  int extraout_w10;
  undefined8 **ppuStack_38;
  undefined8 uStack_30;
  undefined8 *puStack_28;
  
  FUN_10b12d0d0(param_1 + 0x78);
  func_0x00010b184fc8();
  plVar1 = (long *)(param_1 + 0x88);
  FUN_10b146ae4();
  func_0x00010b184f64();
  *(long **)(param_1 + 0x78) = plVar1;
  lVar3 = *(long *)(extraout_x8 + 8);
  *(long *)(param_1 + 0x80) = lVar3;
  if (lVar3 != 0) {
    do {
      func_0x00010b184c40();
    } while (extraout_w10 != 0);
  }
  if (plVar1 == (long *)0x0) {
    func_0x00010b184d80();
    ppuStack_38 = (undefined8 **)0x0;
    uStack_30 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x10))(&ppuStack_38);
    func_0x00010b184d80();
  }
  pppuVar2 = &ppuStack_38;
  func_0x00010b14222c(param_1 + 0x38);
  func_0x0001052aad20(&ppuStack_38);
  func_0x00010b184e14();
  func_0x00010b184d40();
  *(undefined1 *)(param_1 + 0x98) = extraout_w8;
  func_0x00010b184cbc();
  if ((bool)in_ZR) {
    ppuStack_38 = pppuVar2;
    func_0x00010b184d74();
    FUN_10b142300();
  }
  else {
    __ZNSt13exception_ptrC1ERKS_(&puStack_28);
    ppuStack_38 = &puStack_28;
    func_0x00010b184d74();
    FUN_10b1420d8();
    func_0x00010b185014();
  }
  func_0x00010b184ec8();
  func_0x0001052aacf8(param_1 + 0x68);
  func_0x00010b184cb4();
  return;
}



/* Entry: 10b184bf8; end: 10b184c2f;  */

void FUN_10b184bf8(long param_1)

{
  if ((*(byte *)(param_1 + 0x98) & 1) == 0) {
    func_0x00010b184fc8();
    func_0x00010b184e14();
  }
  func_0x00010b184ec8();
  func_0x0001052aacf8(param_1 + 0x68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10b184c30; end: 10b1850bf;  */

void FUN_10b184c30(void)

{
  long *unaff_x19;
  
                    /* WARNING: Could not recover jumptable at 0x00010b184c3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x19 + 0x10))();
  return;
}



/* Entry: 10b1850c0; end: 10b185117;  */

void FUN_10b1850c0(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined1 auStack_70 [16];
  undefined1 auStack_38 [16];
  undefined8 uStack_28;
  
  func_0x00010b187534();
  uStack_28 = extraout_x8;
  func_0x000107c2b3b8(auStack_38,0x10);
  uVar1 = 0x10;
  func_0x00010bcd2bf8(param_1,auStack_38,0x10);
  func_0x00010b187430(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_10b185164(auStack_70,uVar1);
  FUN_10b185750(extraout_x8_00,auStack_70);
  func_0x00010b187488();
  return;
}



/* Entry: 10b185118; end: 10b185163;  */

void FUN_10b185118(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_30 [16];
  
  FUN_10b185164(auStack_30,param_3);
  FUN_10b185750(param_1,auStack_30);
  func_0x00010b187488();
  return;
}



/* Entry: 10b185164; end: 10b18574f;  */

void FUN_10b185164(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 extraout_x8;
  long lVar10;
  undefined8 extraout_x8_00;
  undefined8 uVar11;
  ulong extraout_x8_01;
  undefined8 extraout_x9;
  undefined8 uVar12;
  long extraout_x9_00;
  long extraout_x9_01;
  ulong extraout_x9_02;
  long extraout_x9_03;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w11_03;
  int extraout_w11_04;
  long extraout_x11;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined1 auStack_a0 [32];
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  
  puVar5 = (undefined8 *)0xd8;
  __Znwm();
  *puVar5 = FUN_10b186f20;
  puVar5[1] = FUN_10b1873c0;
  puVar13 = puVar5 + 2;
  *puVar13 = &PTR_FUN_110cc19e0;
  puVar6 = (undefined8 *)0xb0;
  __Znwm();
  puVar9 = puVar6 + 3;
  *puVar9 = 0;
  puVar7 = puVar5 + 3;
  *puVar7 = puVar9;
  puVar6[1] = 0;
  puVar2 = puVar5 + 0x16;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_110cc1a00;
  puVar6[4] = 0;
  puVar6[5] = 0;
  puVar6[6] = 0x3cb0b1bb;
  puVar6[8] = 0;
  puVar6[7] = 0;
  puVar6[10] = 0;
  puVar6[9] = 0;
  puVar6[0xb] = 0;
  puVar6[0xc] = 0x32aaaba7;
  puVar6[0xe] = 0;
  puVar6[0xd] = 0;
  puVar6[0x10] = 0;
  puVar6[0xf] = 0;
  puVar6[0x12] = 0;
  puVar6[0x11] = 0;
  puVar6[0x14] = 0;
  puVar6[0x13] = 0;
  puVar6[0x15] = 0;
  puVar5[4] = puVar6;
  puVar5[5] = puVar9;
  puVar5[6] = puVar6;
  do {
    func_0x00010b187514();
  } while (extraout_w11 != 0);
  puVar9 = puVar5 + 7;
  *(undefined1 *)puVar9 = 0;
  puVar5[2] = &PTR_FUN_110cc1998;
  *(undefined1 *)(puVar5 + 10) = 0;
  puStack_a8 = puVar6;
  do {
    func_0x00010b187514();
  } while (extraout_w11_00 != 0);
  do {
    func_0x00010b187514();
  } while (extraout_w11_01 != 0);
  *param_1 = extraout_x8;
  param_1[1] = puVar6;
  func_0x00010b187488();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar5 + 0x11,param_2);
  FUN_10b1b9728(puVar2);
  puVar6 = puVar2;
  FUN_10b1270a8();
  if (((ulong)puVar6 & 1) == 0) {
    *(undefined1 *)(puVar5 + 0x1a) = 0;
    puStack_80 = puVar5;
    puStack_78 = puVar2;
    FUN_10b12713c(&uStack_70,puVar2,&puStack_80);
    if (plStack_68 != (long *)0x0) {
      do {
        func_0x00010b187420();
      } while (extraout_w11_03 != 0);
      if (extraout_x9_01 == 0) {
        func_0x00010b1874a0(*(undefined8 *)(*plStack_68 + 0x10));
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
      }
    }
  }
  else {
    FUN_10b113e08(puVar5 + 0x14,puVar2);
    FUN_10b120e24(puVar2);
    func_0x00010b1875bc();
    puVar6 = puVar5 + 0x18;
    FUN_10b113ed8();
    if (((ulong)puVar6 & 1) == 0) {
      *(undefined1 *)(puVar5 + 0x1a) = 1;
      __ZNSt3__115recursive_mutex4lockEv(puVar5[0x18]);
      lVar10 = puVar5[0x18];
      if ((*(byte *)(lVar10 + 0x58) & 1) == 0) {
        puVar2 = *(undefined8 **)(lVar10 + 0x68);
        bVar4 = *(undefined8 **)(lVar10 + 0x70) <= puVar2;
        if (bVar4) {
          lVar15 = *(long *)(lVar10 + 0x60);
          lVar16 = (long)puVar2 - lVar15;
          if ((lVar16 >> 3) + 1U >> 0x3d != 0) {
            func_0x00010552fc6c();
LAB_10b185604:
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10b185608);
            (*pcVar3)();
          }
          func_0x00010b1874f8((long)*(undefined8 **)(lVar10 + 0x70) - lVar15);
          uVar1 = extraout_x9_02;
          if (bVar4) {
            uVar1 = extraout_x8_01;
          }
          if (uVar1 == 0) {
            lVar8 = 0;
          }
          else {
            if (uVar1 >> 0x3d != 0) {
              func_0x000104bd35f4();
              goto LAB_10b185604;
            }
            lVar8 = uVar1 << 3;
            __Znwm();
          }
          puVar2 = (undefined8 *)(lVar8 + lVar16);
          puVar6 = puVar2 + 1;
          *puVar2 = puVar5;
          _memcpy(puVar2 + -extraout_x11,lVar15,lVar16);
          *(undefined8 **)(lVar10 + 0x60) = puVar2 + -extraout_x11;
          *(undefined8 **)(lVar10 + 0x68) = puVar6;
          *(ulong *)(lVar10 + 0x70) = lVar8 + uVar1 * 8;
          if (lVar15 != 0) {
            __ZdlPv(lVar15);
          }
        }
        else {
          puVar6 = puVar2 + 1;
          *puVar2 = puVar5;
        }
        *(undefined8 **)(lVar10 + 0x68) = puVar6;
        func_0x00010b1875c8();
      }
      else {
        func_0x00010b1875c8();
        func_0x00010b1874a0(*puVar5);
      }
    }
    else {
      plVar14 = puVar5 + 0x18;
      FUN_10b113f00();
      lVar15 = *plVar14;
      puVar5[0x16] = lVar15;
      lVar10 = plVar14[1];
      puVar5[0x17] = lVar10;
      if (lVar10 != 0) {
        do {
          func_0x00010b187410();
        } while (extraout_w10 != 0);
      }
      func_0x00010b1874a8();
      plStack_68 = *(long **)(lVar15 + 0x10);
      uStack_70 = *(undefined8 *)(lVar15 + 8);
      if (*(long *)(lVar15 + 0x10) != 0) {
        do {
          func_0x00010b187410();
        } while (extraout_w10_00 != 0);
      }
      puStack_a8 = (undefined8 *)puVar5[0x15];
      puStack_b0 = (undefined8 *)puVar5[0x14];
      if (puVar5[0x15] != 0) {
        do {
          func_0x00010b187410();
        } while (extraout_w10_01 != 0);
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_a0,puVar5 + 0x11);
      func_0x00010b187600();
      puVar5[0xc] = extraout_x9;
      puVar5[0xb] = extraout_x8_00;
      puVar6 = (undefined8 *)0x28;
      __Znwm();
      puVar6[1] = puStack_a8;
      *puVar6 = puStack_b0;
      puStack_b0 = (undefined8 *)0x0;
      puStack_a8 = (undefined8 *)0x0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (puVar6 + 2,auStack_a0);
      puVar5[0xd] = puVar6;
      func_0x00010b18755c(&puStack_80);
      FUN_10b186ea8(puVar9);
      puVar5[8] = puStack_78;
      puVar5[7] = puStack_80;
      puStack_80 = (undefined8 *)0x0;
      puStack_78 = (undefined8 *)0x0;
      *(undefined1 *)(puVar5 + 9) = 1;
      *(undefined1 *)(puVar5 + 10) = 1;
      FUN_10b129584(&puStack_80);
      func_0x00010b1875b0(puVar5[0xc]);
      FUN_10b1859b4(&puStack_b0);
      func_0x000107c2bdf4(&uStack_70);
      func_0x000107c2be20(puVar2);
      func_0x00010b187498();
      func_0x00010b187490();
      func_0x00010b187524();
      if (*(char *)(puVar5 + 9) == '\x01') {
        __ZNSt3__112__get_sp_mutEPKv(puVar7);
        __ZNSt3__18__sp_mut4lockEv();
        puVar2 = (undefined8 *)puVar5[3];
        lVar10 = puVar5[4];
        puVar5[3] = 0;
        puVar5[4] = 0;
        __ZNSt3__18__sp_mut6unlockEv(puVar7);
        puStack_b0 = puVar2;
        puStack_a8 = (undefined8 *)lVar10;
        __ZNSt3__15mutex4lockEv(puVar2 + 9);
        uVar11 = puVar5[7];
        if (*(char *)(puVar2 + 2) == '\x01') {
          uVar12 = puVar5[8];
          *puVar9 = 0;
          puVar5[8] = 0;
          lVar10 = puVar2[1];
          *puVar2 = uVar11;
          puVar2[1] = uVar12;
          puVar5 = puStack_b0;
          if (lVar10 != 0) {
            do {
              func_0x00010b187420();
            } while (extraout_w11_02 != 0);
            puVar5 = puStack_b0;
            if (extraout_x9_00 == 0) {
              func_0x00010b1874c8();
              __ZNSt3__119__shared_weak_count14__release_weakEv(lVar10);
              puVar5 = puStack_b0;
            }
          }
        }
        else {
          *puVar2 = uVar11;
          puVar2[1] = puVar5[8];
          *puVar9 = 0;
          puVar5[8] = 0;
          *(undefined1 *)(puVar2 + 2) = 1;
          puVar5 = puVar2;
        }
        plVar14 = (long *)puVar5[0x12];
        puVar5[0x12] = 0;
        __ZNSt3__15mutex6unlockEv(puVar2 + 9);
        if (plVar14 == (long *)0x0) {
          __ZNSt3__118condition_variable10notify_allEv(puVar5 + 3);
        }
        else {
          (**(code **)(*plVar14 + 0x10))(plVar14,&puStack_b0);
          func_0x00010b1874d8();
        }
        puVar2 = puStack_a8;
        if (puStack_a8 != (undefined8 *)0x0) {
          do {
            func_0x00010b187420();
          } while (extraout_w11_04 != 0);
          if (extraout_x9_03 == 0) {
            func_0x00010b1874c8();
            __ZNSt3__119__shared_weak_count14__release_weakEv(puVar2);
          }
        }
      }
      else {
        __ZNSt13exception_ptrC1ERKS_(&puStack_b0,puVar9);
        FUN_10b186458(puVar13,&puStack_b0);
        func_0x00010b1875a8();
      }
      FUN_10b186550(puVar13);
      func_0x00010b18758c();
    }
  }
  return;
}



/* Entry: 10b185750; end: 10b18587b;  */

void FUN_10b185750(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  int extraout_w10;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_80 [8];
  undefined8 *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined1 uStack_50;
  undefined8 *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  puStack_48 = (undefined8 *)0x0;
  lStack_40 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  FUN_10b186230(&puStack_58,param_2,&uStack_68);
  FUN_10b186288(&puStack_48,&puStack_58);
  func_0x00010b1862c8(&puStack_58);
  func_0x00010b1862c8(&uStack_68);
  puStack_58 = puStack_48 + 9;
  uStack_50 = 1;
  __ZNSt3__15mutex4lockEv();
  puVar1 = puStack_48;
  puStack_78 = puStack_48;
  lStack_70 = lStack_40;
  if (lStack_40 != 0) {
    do {
      FUN_10b187410();
    } while (extraout_w10 != 0);
  }
  while ((*(byte *)(puVar1 + 2) & 1) == 0) {
    uStack_38 = 0;
    lVar3 = puVar1[0x11];
    __ZNSt13exception_ptrD1Ev(&uStack_38);
    if (lVar3 != 0) break;
    __ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE(puVar1 + 3,&puStack_58);
  }
  func_0x00010b1862c8(&puStack_78);
  if (puStack_48[0x11] != 0) {
    __ZNSt13exception_ptrC1ERKS_(auStack_80);
    __ZSt17rethrow_exceptionSt13exception_ptr(auStack_80);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10b185848);
    (*pcVar2)();
  }
  uVar4 = *puStack_48;
  param_1[1] = puStack_48[1];
  *param_1 = uVar4;
  *puStack_48 = 0;
  puStack_48[1] = 0;
  func_0x000107c2798c(&puStack_58);
  func_0x00010b1862c8(&puStack_48);
  return;
}



/* Entry: 10b18587c; end: 10b185913;  */

undefined *** FUN_10b18587c(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined ***pppuVar1;
  undefined ***pppuVar2;
  code **ppcVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined **appuStack_e0 [3];
  code *pcStack_c8;
  undefined1 auStack_c0 [40];
  undefined8 uStack_98;
  code *pcStack_58;
  undefined **ppuStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  pcStack_58 = FUN_10b186cdc;
  ppuStack_50 = &PTR_DAT_110cc1a90;
  ppcVar3 = &pcStack_58;
  puStack_48 = param_1;
  FUN_10b185914(*param_1);
  pppuVar1 = &ppuStack_50;
  (*(code *)*ppuStack_50)();
  func_0x00010b187430(uStack_28);
  if ((bool)in_ZR) {
    return pppuVar1;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_50)(&ppuStack_50);
  func_0x00010b187454();
  pppuVar2 = appuStack_e0;
  pppuVar1 = appuStack_e0;
  func_0x00010b187534();
  uStack_98 = extraout_x8_00;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(appuStack_e0);
  pcStack_c8 = *ppcVar3;
  (**(code **)(ppcVar3[1] + 0x10))(auStack_c0,ppcVar3 + 1);
  FUN_10b186760(extraout_x8,appuStack_e0,&pcStack_c8);
  func_0x00010b1874e8();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010b187430(uStack_98);
  if ((bool)in_ZR) {
    return pppuVar2;
  }
  ___stack_chk_fail();
  func_0x00010b1874e8();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010b187454();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
            ((undefined1 *)((long)pppuVar1 + 0x10));
  func_0x000107c350ac();
  if (pppuVar1 != (undefined ***)0x0) {
    func_0x000107c278a0();
  }
  return pppuVar2;
}



/* Entry: 10b185914; end: 10b1859b3;  */

undefined1 * FUN_10b185914(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  undefined1 auStack_60 [40];
  undefined8 uStack_38;
  
  puVar1 = auStack_80;
  puVar2 = auStack_80;
  func_0x00010b187534(param_2,param_2);
  uStack_38 = extraout_x8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_80);
  uStack_68 = *param_3;
  (**(code **)(param_3[1] + 0x10))(auStack_60,param_3 + 1);
  FUN_10b186760(param_1,auStack_80,&uStack_68);
  func_0x00010b1874e8();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010b187430(uStack_38);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x00010b1874e8();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010b187454();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar2 + 0x10);
  func_0x000107c350ac();
  if (puVar2 != (undefined1 *)0x0) {
    func_0x000107c278a0();
  }
  return puVar1;
}



/* Entry: 10b1859b4; end: 10b1859db;  */

undefined8 FUN_10b1859b4(long param_1)

{
  undefined8 unaff_x19;
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x10);
  func_0x000107c350ac();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b1859dc; end: 10b185b13;  */

undefined8 * FUN_10b1859dc(undefined8 *param_1,long *param_2)

{
  undefined4 uVar1;
  long lVar2;
  int extraout_w10;
  long *plVar3;
  long lVar4;
  undefined1 auStack_90 [16];
  undefined1 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [16];
  
  *param_1 = &PTR_FUN_110cc1910;
  lVar2 = param_2[1];
  lVar4 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = lVar4;
  if (lVar2 != 0) {
    do {
      FUN_10b187410();
    } while (extraout_w10 != 0);
  }
  plVar3 = param_1 + 3;
  *plVar3 = 0;
  param_1[4] = 0;
  lVar2 = *param_2;
  lVar4 = (long)*(char *)(lVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(lVar2 + 8);
  }
  func_0x000107c278b8(auStack_68,&UNK_10f730e45);
  uVar1 = 3;
  if (lVar4 == 0) {
    uVar1 = 4;
  }
  uStack_78 = 0;
  uStack_70 = 0;
  auStack_90[0] = 0;
  uStack_80 = 0;
  FUN_10b4942a4(auStack_50,uVar1,auStack_68,lVar2,&uStack_78,1,1,auStack_90,0);
  FUN_10b114068(plVar3,auStack_50);
  func_0x00010b127f4c(auStack_50);
  func_0x00010b127f28(&uStack_78);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_68);
  if ((long *)*plVar3 != (long *)0x0) {
    (**(code **)(*(long *)*plVar3 + 0x68))();
  }
  return param_1;
}



/* Entry: 10b185b14; end: 10b185e5b;  */

void FUN_10b185b14(undefined8 *param_1,long param_2,undefined8 param_3,undefined1 *param_4,
                  long *param_5)

{
  long lVar1;
  undefined ***pppuVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined1 auStack_6a0 [24];
  undefined1 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  long lStack_670;
  undefined8 uStack_668;
  ulong uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  char cStack_648;
  undefined1 auStack_640 [384];
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  long lStack_4b0;
  undefined8 uStack_4a8;
  ulong uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined1 uStack_488;
  char cStack_438;
  long lStack_248;
  long lStack_240;
  undefined8 uStack_238;
  undefined **ppuStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_210;
  undefined1 auStack_208 [24];
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  long *plStack_1d8;
  undefined8 uStack_1d0;
  undefined4 uStack_1c8;
  undefined1 auStack_1c0 [24];
  undefined1 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined4 uStack_190;
  undefined1 uStack_188;
  undefined1 uStack_e8;
  undefined1 uStack_e0;
  undefined1 uStack_a0;
  undefined1 uStack_98;
  undefined1 uStack_94;
  undefined1 uStack_90;
  undefined1 uStack_8c;
  undefined1 auStack_88 [24];
  undefined4 uStack_70;
  undefined1 auStack_68 [24];
  
  FUN_10b1850c0(auStack_68);
  uVar4 = *(undefined8 *)(param_4 + 8);
  if (param_4[0x10] == '\0') {
    uVar4 = 0;
  }
  FUN_10b13f754(auStack_88,param_3);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_208,auStack_68);
  uStack_1f0 = 0x100000001;
  uStack_1e0 = 0;
  uStack_1e8 = 0;
  plStack_1d8 = (long *)*param_5;
  if (plStack_1d8 != (long *)0x0) {
    (**(code **)(*plStack_1d8 + 0x18))();
  }
  uStack_1d0 = 0;
  uStack_1c8 = uStack_70;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_1c0,auStack_88);
  uStack_1a8 = *param_4;
  uStack_198 = 0;
  uStack_190 = 0;
  uStack_188 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  uStack_210 = 0;
  uStack_220 = 0;
  ppuStack_230 = &PTR_DAT_110ccaac8;
  uStack_228 = 0;
  pppuVar2 = &ppuStack_230;
  uStack_1a0 = uVar4;
  FUN_10b1865ac();
  pppuVar2[2] = (undefined **)0x0;
  lStack_240 = 0;
  lStack_248 = 0;
  uStack_238 = 0;
  plVar3 = &lStack_248;
  FUN_10b17d99c(plVar3,1);
  FUN_10b17da88(&uStack_4c0,plVar3,(lStack_240 - lStack_248) / 0x98,&uStack_238);
  FUN_10b18664c(lStack_4b0,auStack_68,param_5,&ppuStack_230);
  lStack_4b0 = lStack_4b0 + 0x98;
  FUN_10b17d9fc(&lStack_248,&uStack_4c0);
  lVar1 = lStack_240;
  func_0x00010b17de14(&uStack_4c0);
  uVar4 = *(undefined8 *)(param_2 + 8);
  lStack_240 = lVar1;
  func_0x00010b1213e8(auStack_640,auStack_208);
  FUN_10b1f6b98(&uStack_4c0,uVar4,auStack_640,&lStack_248,0);
  func_0x00010b121af0(&uStack_4c0);
  func_0x00010b1213b8(auStack_640);
  if (cStack_438 == '\x01') {
    FUN_10b152260(&uStack_4c0,auStack_68);
    param_1[1] = uStack_4b8;
    *param_1 = uStack_4c0;
    uStack_4c0 = 0;
    uStack_4b8 = 0;
    *(undefined1 *)(param_1 + 8) = 1;
    func_0x00010529fde0(&uStack_4c0);
  }
  else {
    auStack_6a0[0] = 0;
    uStack_688 = 0;
    FUN_10b17aae4(&uStack_680,3,auStack_6a0);
    lStack_4b0 = lStack_670;
    uStack_4b8 = uStack_678;
    uStack_4c0 = uStack_680;
    uStack_678 = 0;
    lStack_670 = 0;
    uStack_680 = 0;
    uStack_4a8 = uStack_668;
    uStack_4a0 = uStack_4a0 & 0xffffffffffffff00;
    uStack_488 = cStack_648 == '\x01';
    if ((bool)uStack_488) {
      uStack_498 = uStack_658;
      uStack_4a0 = uStack_660;
      uStack_490 = uStack_650;
      uStack_658 = 0;
      uStack_650 = 0;
      uStack_660 = 0;
    }
    FUN_10b17e8fc(param_1,&uStack_4c0);
    func_0x0001052a03ac(&uStack_4c0);
    func_0x0001052a03ac(&uStack_680);
    func_0x000107c279a4(auStack_6a0);
  }
  FUN_10b17dec8(&lStack_248);
  FUN_10b24d1ec(&ppuStack_230);
  func_0x00010b1213b8(auStack_208);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_88);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_68);
  return;
}



/* Entry: 10b185e5c; end: 10b18616f;  */

void FUN_10b185e5c(long *param_1,long param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x20;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  char cStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  long lStack_148;
  byte bStack_138;
  undefined8 auStack_130 [3];
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  char cStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_60;
  long lStack_58;
  
  if (*(long *)(param_2 + 0x18) == 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_f8,0x1138398e8)
    ;
    func_0x000105c3d6a8(&uStack_118,&UNK_10f730e5d);
    uStack_d8 = uStack_f0;
    uStack_e0 = uStack_f8;
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_f8 = 0;
    func_0x00010b1875ec();
    if (cStack_100 == '\x01') {
      uStack_b8 = uStack_110;
      uStack_c0 = uStack_118;
      uStack_b0 = uStack_108;
      uStack_110 = 0;
      uStack_108 = 0;
      uStack_118 = 0;
    }
    FUN_10b186170(&lStack_150,&uStack_e0);
    param_1[1] = lStack_148;
    *param_1 = lStack_150;
    lStack_150 = 0;
    lStack_148 = 0;
    FUN_10b186ef8(&lStack_150);
    func_0x00010b1874b0();
    func_0x000107c279a4(&uStack_118);
    puVar1 = &uStack_f8;
  }
  else {
    FUN_10b1850c0(&uStack_e0);
    func_0x000107c27f54(auStack_130,&UNK_10f730e78,&uStack_e0);
    func_0x00010b187568();
    (**(code **)(**(long **)(param_2 + 0x18) + 0x58))
              (&lStack_150,*(long **)(param_2 + 0x18),auStack_130);
    if ((bStack_138 & 1) == 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (&uStack_168,0x1138398e8);
      func_0x000105641abc(&uStack_188,&UNK_10f72f8d0);
      uStack_d8 = uStack_160;
      uStack_e0 = uStack_168;
      uStack_160 = 0;
      uStack_158 = 0;
      uStack_168 = 0;
      func_0x00010b1875ec();
      if (cStack_170 == '\x01') {
        uStack_b8 = uStack_180;
        uStack_c0 = uStack_188;
        uStack_b0 = uStack_178;
        uStack_180 = 0;
        uStack_178 = 0;
        uStack_188 = 0;
      }
      FUN_10b186170(&lStack_60,&uStack_e0);
      param_1[1] = lStack_58;
      *param_1 = lStack_60;
      lStack_60 = 0;
      lStack_58 = 0;
      FUN_10b186ef8(&lStack_60);
      func_0x00010b1874b0();
      func_0x000107c279a4(&uStack_188);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_168);
    }
    else {
      __Znwm(0x100);
      func_0x00010b187544();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (&uStack_e0,auStack_130);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (&lStack_60,&lStack_150);
      uStack_78 = param_3[1];
      uStack_80 = *param_3;
      uStack_70 = param_3[2];
      uStack_88 = *(undefined8 *)(param_2 + 0x20);
      uStack_90 = *(undefined8 *)(param_2 + 0x18);
      if (*(long *)(param_2 + 0x20) != 0) {
        do {
          func_0x00010b187410();
        } while (extraout_w10 != 0);
      }
      uStack_98 = *(undefined8 *)(param_2 + 0x10);
      uStack_a0 = *(undefined8 *)(param_2 + 8);
      if (*(long *)(param_2 + 0x10) != 0) {
        do {
          func_0x00010b187410();
        } while (extraout_w10_00 != 0);
      }
      func_0x00010b1507a8(unaff_x20 + 0x18,&uStack_e0,&lStack_60,&uStack_80,&uStack_90,&uStack_a0);
      FUN_10b151140(&uStack_a0);
      func_0x00010b125864(&uStack_90);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_60);
      func_0x00010b187568();
      *param_1 = unaff_x20 + 0x18;
      param_1[1] = unaff_x20;
      uStack_198 = 0;
      uStack_190 = 0;
      FUN_10b186ef8(&uStack_198);
    }
    func_0x000107c279a4(&lStack_150);
    puVar1 = auStack_130;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar1);
  return;
}



/* Entry: 10b186170; end: 10b186217;  */

void FUN_10b186170(long *param_1,undefined8 *param_2)

{
  long unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  __Znwm(0x100);
  func_0x00010b187544();
  uStack_68 = param_2[1];
  uStack_70 = *param_2;
  uStack_60 = param_2[2];
  uStack_58 = param_2[3];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uStack_50 = uStack_50 & 0xffffffffffffff00;
  uStack_38 = *(char *)(param_2 + 7) == '\x01';
  if ((bool)uStack_38) {
    uStack_48 = param_2[5];
    uStack_50 = param_2[4];
    uStack_40 = param_2[6];
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[4] = 0;
  }
  FUN_10b150824(unaff_x20 + 0x18,&uStack_70);
  func_0x0001052a03ac(&uStack_70);
  *param_1 = unaff_x20 + 0x18;
  param_1[1] = unaff_x20;
  return;
}



/* Entry: 10b186218; end: 10b18621b;  */

undefined8 * FUN_10b186218(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc1910;
  func_0x00010b125864(param_1 + 3);
  func_0x00010b1257f8(param_1 + 1);
  return param_1;
}



/* Entry: 10b18621c; end: 10b18622f;  */

void FUN_10b18621c(void)

{
  FUN_10b186724();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b186230; end: 10b186287;  */

void FUN_10b186230(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = param_2;
  __ZNSt3__112__get_sp_mutEPKv(param_2);
  __ZNSt3__18__sp_mut4lockEv();
  uVar2 = *param_3;
  uVar4 = param_2[1];
  uVar3 = *param_2;
  param_2[1] = param_3[1];
  *param_2 = uVar2;
  param_3[1] = uVar4;
  *param_3 = uVar3;
  __ZNSt3__18__sp_mut6unlockEv(puVar1);
  uVar2 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = uVar2;
  *param_3 = 0;
  param_3[1] = 0;
  return;
}



/* Entry: 10b186288; end: 10b1862ef;  */

undefined8 * FUN_10b186288(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x00010b187488();
  return param_1;
}



/* Entry: 10b1862f0; end: 10b1862f3;  */

undefined8 * FUN_10b1862f0(undefined8 *param_1)

{
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  undefined1 auStack_28 [8];
  
  *param_1 = &PTR_FUN_110cc19e0;
  if (param_1[1] != 0) {
    ppuStack_38 = &PTR_DAT_1107e6938;
    ppuStack_30 = &PTR_DAT_1107e6938;
    func_0x000104bdfe3c(auStack_28,&ppuStack_30);
    FUN_10b186458(param_1,auStack_28);
    __ZNSt13exception_ptrD1Ev(auStack_28);
    __ZNSt9exceptionD2Ev(&ppuStack_30);
    __ZNSt9exceptionD2Ev(&ppuStack_38);
  }
  func_0x00010b1862c8(param_1 + 3);
  func_0x00010b1862c8(param_1 + 1);
  return param_1;
}



/* Entry: 10b1862f4; end: 10b186307;  */

void FUN_10b1862f4(void)

{
  FUN_10b1863b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b186308; end: 10b18630b;  */

undefined8 * FUN_10b186308(undefined8 *param_1)

{
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  undefined1 auStack_28 [8];
  
  *param_1 = &PTR_FUN_110cc19e0;
  if (param_1[1] != 0) {
    ppuStack_38 = &PTR_DAT_1107e6938;
    ppuStack_30 = &PTR_DAT_1107e6938;
    func_0x000104bdfe3c(auStack_28,&ppuStack_30);
    FUN_10b186458(param_1,auStack_28);
    __ZNSt13exception_ptrD1Ev(auStack_28);
    __ZNSt9exceptionD2Ev(&ppuStack_30);
    __ZNSt9exceptionD2Ev(&ppuStack_38);
  }
  func_0x00010b1862c8(param_1 + 3);
  func_0x00010b1862c8(param_1 + 1);
  return param_1;
}



/* Entry: 10b18630c; end: 10b18631f;  */

void FUN_10b18630c(void)

{
  FUN_10b1863b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b186320; end: 10b186323;  */

void FUN_10b186320(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc1a00;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b186324; end: 10b186337;  */

void FUN_10b186324(void)

{
  FUN_10b1863a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b186338; end: 10b18639f;  */

long FUN_10b186338(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  __ZNSt13exception_ptrD1Ev(param_1 + 0xa0);
  __ZNSt3__15mutexD1Ev(param_1 + 0x60);
  lVar2 = param_1 + 0x30;
  __ZNSt3__118condition_variableD1Ev(lVar2);
  if (*(char *)(param_1 + 0x28) == '\x01') {
    if (*(long *)(param_1 + 0x20) != 0) {
      func_0x000107c278a0();
    }
    return param_1 + 0x18;
  }
  return lVar2;
}



/* Entry: 10b1863a0; end: 10b1863af;  */

void FUN_10b1863a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1863b0; end: 10b186457;  */

undefined8 * FUN_10b1863b0(undefined8 *param_1)

{
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  undefined1 auStack_28 [8];
  
  *param_1 = &PTR_FUN_110cc19e0;
  if (param_1[1] != 0) {
    ppuStack_38 = &PTR_DAT_1107e6938;
    ppuStack_30 = &PTR_DAT_1107e6938;
    func_0x000104bdfe3c(auStack_28,&ppuStack_30);
    FUN_10b186458(param_1,auStack_28);
    __ZNSt13exception_ptrD1Ev(auStack_28);
    __ZNSt9exceptionD2Ev(&ppuStack_30);
    __ZNSt9exceptionD2Ev(&ppuStack_38);
  }
  func_0x00010b1862c8(param_1 + 3);
  func_0x00010b1862c8(param_1 + 1);
  return param_1;
}



/* Entry: 10b186458; end: 10b18654f;  */

void FUN_10b186458(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  long alStack_30 [2];
  
  alStack_30[0] = 0;
  alStack_30[1] = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10b186230(auStack_40,param_1 + 8,&uStack_50);
  FUN_10b186288(alStack_30,auStack_40);
  func_0x00010b1862c8(auStack_40);
  func_0x00010b187488();
  lVar1 = alStack_30[0];
  __ZNSt3__15mutex4lockEv(alStack_30[0] + 0x48);
  __ZNSt13exception_ptraSERKS_(alStack_30[0] + 0x88,param_2);
  plVar2 = *(long **)(alStack_30[0] + 0x90);
  *(undefined8 *)(alStack_30[0] + 0x90) = 0;
  __ZNSt3__15mutex6unlockEv(lVar1 + 0x48);
  if (plVar2 == (long *)0x0) {
    __ZNSt3__118condition_variable10notify_allEv(alStack_30[0] + 0x18);
  }
  else {
    (**(code **)(*plVar2 + 0x10))(plVar2,alStack_30);
    func_0x00010b1874a0(*(undefined8 *)(*plVar2 + 8));
  }
  func_0x00010b1862c8(alStack_30);
  return;
}



/* Entry: 10b186550; end: 10b186583;  */

undefined8 * FUN_10b186550(undefined8 *param_1)

{
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  undefined1 auStack_28 [8];
  
  if (*(char *)(param_1 + 8) == '\x01') {
    FUN_10b186584(param_1 + 5);
  }
  *param_1 = &PTR_FUN_110cc19e0;
  if (param_1[1] != 0) {
    ppuStack_38 = &PTR_DAT_1107e6938;
    ppuStack_30 = &PTR_DAT_1107e6938;
    func_0x000104bdfe3c(auStack_28,&ppuStack_30);
    FUN_10b186458(param_1,auStack_28);
    __ZNSt13exception_ptrD1Ev(auStack_28);
    __ZNSt9exceptionD2Ev(&ppuStack_30);
    __ZNSt9exceptionD2Ev(&ppuStack_38);
  }
  func_0x00010b1862c8(param_1 + 3);
  func_0x00010b1862c8(param_1 + 1);
  return param_1;
}



/* Entry: 10b186584; end: 10b1865ab;  */

void FUN_10b186584(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_10b102da8();
  }
  else {
    __ZNSt13exception_ptrD1Ev();
  }
  return;
}



/* Entry: 10b1865ac; end: 10b18664b;  */

void FUN_10b1865ac(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x24) != 2) {
    FUN_10b24d0fc(param_1);
    *(undefined4 *)(param_1 + 0x24) = 2;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    func_0x00010b186600();
    *(ulong *)(param_1 + 0x18) = uVar1;
  }
  return;
}



/* Entry: 10b18664c; end: 10b186707;  */

undefined8
FUN_10b18664c(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  int extraout_w10;
  undefined1 auStack_c0 [48];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [80];
  
  FUN_10b202630(auStack_80);
  uStack_88 = param_3[1];
  uStack_90 = *param_3;
  if (param_3[1] != 0) {
    do {
      FUN_10b187410();
    } while (extraout_w10 != 0);
  }
  FUN_10b186708(auStack_c0,param_4);
  FUN_10b17d524(param_1,auStack_80,&uStack_90,auStack_c0);
  FUN_10b17d950(auStack_c0);
  func_0x000107c27d78(&uStack_90);
  func_0x00010b121e00(auStack_80);
  return param_1;
}



/* Entry: 10b186708; end: 10b186723;  */

void FUN_10b186708(long param_1)

{
  FUN_10b17d944();
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



/* Entry: 10b186724; end: 10b18675f;  */

undefined8 * FUN_10b186724(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc1910;
  func_0x00010b125864(param_1 + 3);
  func_0x00010b1257f8(param_1 + 1);
  return param_1;
}



/* Entry: 10b186760; end: 10b186c4f;  */

void FUN_10b186760(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  int extraout_w10;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined8 *unaff_x28;
  long lVar17;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined1 uStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  
  if ((bRam00000001137f40a0 & 1) == 0) {
    iVar3 = 0x137f40a0;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      puVar9 = (undefined8 *)0x68;
      __Znwm();
      *puVar9 = 0x32aaaba7;
      puVar9[0xb] = 0;
      puVar9[0xc] = 0;
      puVar9[2] = 0;
      puVar9[1] = 0;
      puVar9[4] = 0;
      puVar9[3] = 0;
      puVar9[6] = 0;
      puVar9[5] = 0;
      puVar9[8] = 0;
      puVar9[7] = 0;
      puVar9[10] = 0;
      puVar9[9] = 0;
      *(undefined4 *)(puVar9 + 0xc) = 0x3f800000;
      puRam00000001137f4098 = puVar9;
      ___cxa_guard_release(0x1137f40a0);
    }
  }
  puVar1 = puRam00000001137f4098;
  plVar8 = puRam00000001137f4098 + 8;
  puStack_98 = puRam00000001137f4098;
  uStack_90 = 1;
  __ZNSt3__15mutex4lockEv(puRam00000001137f4098);
  uStack_a8 = 0;
  uStack_a0 = 0;
  puVar9 = puVar1 + 0xb;
  plStack_88 = plVar8;
  func_0x000107c278c4(puVar9,param_2);
  puVar16 = (undefined8 *)puVar1[9];
  if (puVar16 != (undefined8 *)0x0) {
    uVar15 = (long)puVar16 - 1;
    if (((ulong)puVar16 & uVar15) == 0) {
      unaff_x28 = (undefined8 *)(uVar15 & (ulong)puVar9);
    }
    else {
      unaff_x28 = puVar9;
      if (puVar16 <= puVar9) {
        uVar7 = 0;
        if (puVar16 != (undefined8 *)0x0) {
          uVar7 = (ulong)puVar9 / (ulong)puVar16;
        }
        unaff_x28 = (undefined8 *)((long)puVar9 - uVar7 * (long)puVar16);
      }
    }
    plVar14 = *(long **)(*plVar8 + (long)unaff_x28 * 8);
    if (plVar14 != (long *)0x0) {
      do {
        while( true ) {
          plVar14 = (long *)*plVar14;
          if (plVar14 == (long *)0x0) goto LAB_10b186864;
          puVar6 = (undefined8 *)plVar14[1];
          if (puVar6 != puVar9) break;
          plVar4 = plVar14 + 2;
          func_0x000107c278d0(plVar4,param_2);
          if (((ulong)plVar4 & 1) != 0) goto LAB_10b186b20;
        }
        if (((ulong)puVar16 & uVar15) == 0) {
          puVar6 = (undefined8 *)((ulong)puVar6 & uVar15);
        }
        else if (puVar16 <= puVar6) {
          uVar7 = 0;
          if (puVar16 != (undefined8 *)0x0) {
            uVar7 = (ulong)puVar6 / (ulong)puVar16;
          }
          puVar6 = (undefined8 *)((long)puVar6 - uVar7 * (long)puVar16);
        }
      } while (puVar6 == unaff_x28);
    }
  }
LAB_10b186864:
  plVar14 = (long *)0x38;
  __Znwm();
  plVar4 = puVar1 + 10;
  uStack_70 = 0;
  *plVar14 = 0;
  plVar14[1] = (long)puVar9;
  plStack_80 = plVar14;
  plStack_78 = plVar4;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(plVar14 + 2,param_2);
  plVar14[5] = 0;
  plVar14[6] = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_70 = CONCAT71(uStack_70._1_7_,1);
  if ((puVar16 == (undefined8 *)0x0) ||
     (*(float *)(puVar1 + 0xc) * (float)puVar16 < (float)(puVar1[0xb] + 1))) {
    uVar15 = 1;
    if ((undefined8 *)0x2 < puVar16) {
      uVar15 = (ulong)(((ulong)puVar16 & (long)puVar16 - 1U) != 0);
    }
    puVar6 = (undefined8 *)(uVar15 | (long)puVar16 << 1);
    puVar16 = (undefined8 *)(long)((float)(puVar1[0xb] + 1) / *(float *)(puVar1 + 0xc));
    if (puVar6 <= puVar16) {
      puVar6 = puVar16;
    }
    if ((long)puVar6 - 1U == 0) {
      puVar6 = (undefined8 *)0x2;
    }
    else if (((ulong)puVar6 & (long)puVar6 - 1U) != 0) {
      __ZNSt3__112__next_primeEm();
    }
    puVar16 = (undefined8 *)puVar1[9];
    if (puVar16 < puVar6) {
LAB_10b18691c:
      if ((ulong)puVar6 >> 0x3d != 0) {
        func_0x000104bd35f4();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10b186c08);
        (*pcVar2)();
      }
      lVar5 = (long)puVar6 << 3;
      __Znwm(lVar5);
      FUN_10b186c50(plVar8,lVar5);
      puVar1[9] = puVar6;
      lVar5 = puVar1[8];
      for (puVar16 = (undefined8 *)0x0; puVar6 != puVar16;
          puVar16 = (undefined8 *)((long)puVar16 + 1)) {
        *(undefined8 *)(lVar5 + (long)puVar16 * 8) = 0;
      }
      plVar10 = (long *)*plVar4;
      puVar16 = puVar6;
      if (plVar10 != (long *)0x0) {
        puVar12 = (undefined8 *)plVar10[1];
        uVar7 = (long)puVar6 - 1;
        uVar15 = 0;
        if (puVar6 != (undefined8 *)0x0) {
          uVar15 = (ulong)puVar12 / (ulong)puVar6;
        }
        puVar13 = puVar12;
        if (puVar6 <= puVar12) {
          puVar13 = (undefined8 *)((long)puVar12 - uVar15 * (long)puVar6);
        }
        if (((ulong)puVar6 & uVar7) == 0) {
          puVar13 = (undefined8 *)((ulong)puVar12 & uVar7);
        }
        *(long **)(lVar5 + (long)puVar13 * 8) = plVar4;
        while (plVar11 = plVar10, plVar10 = (long *)*plVar11, plVar10 != (long *)0x0) {
          puVar12 = (undefined8 *)plVar10[1];
          if (((ulong)puVar6 & uVar7) == 0) {
            puVar12 = (undefined8 *)((ulong)puVar12 & uVar7);
          }
          else if (puVar6 <= puVar12) {
            uVar15 = 0;
            if (puVar6 != (undefined8 *)0x0) {
              uVar15 = (ulong)puVar12 / (ulong)puVar6;
            }
            puVar12 = (undefined8 *)((long)puVar12 - uVar15 * (long)puVar6);
          }
          if (puVar12 != puVar13) {
            if (*(long *)(lVar5 + (long)puVar12 * 8) == 0) {
              *(long **)(lVar5 + (long)puVar12 * 8) = plVar11;
              puVar13 = puVar12;
            }
            else {
              *plVar11 = *plVar10;
              *plVar10 = **(undefined8 **)(lVar5 + (long)puVar12 * 8);
              **(long **)(lVar5 + (long)puVar12 * 8) = (long)plVar10;
              plVar10 = plVar11;
            }
          }
        }
      }
    }
    else if (puVar6 < puVar16) {
      puVar12 = (undefined8 *)(long)((float)(ulong)puVar1[0xb] / *(float *)(puVar1 + 0xc));
      if ((puVar16 < (undefined8 *)0x3) || (((ulong)puVar16 & (long)puVar16 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if ((undefined8 *)0x1 < puVar12) {
        puVar12 = (undefined8 *)(1L << (-LZCOUNT((long)puVar12 + -1) & 0x3fU));
      }
      if (puVar6 <= puVar12) {
        puVar6 = puVar12;
      }
      if (puVar6 < puVar16) {
        if (puVar6 != (undefined8 *)0x0) goto LAB_10b18691c;
        FUN_10b186c50(plVar8,0);
        puVar1[9] = 0;
        puVar16 = (undefined8 *)0x0;
      }
      else {
        puVar16 = (undefined8 *)puVar1[9];
      }
    }
    if (((ulong)puVar16 & (long)puVar16 - 1U) == 0) {
      unaff_x28 = (undefined8 *)((long)puVar16 - 1U & (ulong)puVar9);
    }
    else {
      unaff_x28 = puVar9;
      if (puVar16 <= puVar9) {
        uVar15 = 0;
        if (puVar16 != (undefined8 *)0x0) {
          uVar15 = (ulong)puVar9 / (ulong)puVar16;
        }
        unaff_x28 = (undefined8 *)((long)puVar9 - uVar15 * (long)puVar16);
      }
    }
  }
  lVar5 = *plVar8;
  plVar8 = *(long **)(lVar5 + (long)unaff_x28 * 8);
  if (plVar8 == (long *)0x0) {
    *plVar14 = *plVar4;
    *plVar4 = (long)plVar14;
    *(long **)(lVar5 + (long)unaff_x28 * 8) = plVar4;
    if (*plVar14 != 0) {
      puVar9 = *(undefined8 **)(*plVar14 + 8);
      if (((ulong)puVar16 & (long)puVar16 - 1U) == 0) {
        puVar9 = (undefined8 *)((ulong)puVar9 & (long)puVar16 - 1U);
      }
      else if (puVar16 <= puVar9) {
        uVar15 = 0;
        if (puVar16 != (undefined8 *)0x0) {
          uVar15 = (ulong)puVar9 / (ulong)puVar16;
        }
        puVar9 = (undefined8 *)((long)puVar9 - uVar15 * (long)puVar16);
      }
      *(long **)(lVar5 + (long)puVar9 * 8) = plVar14;
    }
  }
  else {
    *plVar14 = *plVar8;
    *plVar8 = (long)plVar14;
  }
  plStack_80 = (long *)0x0;
  puVar1[0xb] = puVar1[0xb] + 1;
  func_0x00010b186c68(&plStack_80);
LAB_10b186b20:
  func_0x00010b186cb4(&uStack_a8);
  *param_1 = 0;
  param_1[1] = 0;
  lVar5 = plVar14[6];
  if (lVar5 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar5;
    if ((lVar5 != 0) && (lVar5 = plVar14[5], *param_1 = lVar5, lVar5 != 0)) goto LAB_10b186b90;
  }
  FUN_10b129584(param_1);
  (*(code *)*param_3)(param_1,param_3);
  lVar17 = param_1[1];
  lVar5 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_10b187410();
    } while (extraout_w10 != 0);
  }
  plStack_78 = (long *)plVar14[6];
  plStack_80 = (long *)plVar14[5];
  plVar14[6] = lVar17;
  plVar14[5] = lVar5;
  func_0x00010b186cb4(&plStack_80);
LAB_10b186b90:
  func_0x000107c2798c(&puStack_98);
  return;
}



/* Entry: 10b186c50; end: 10b186c67;  */

void FUN_10b186c50(long *param_1,long param_2)

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



/* Entry: 10b186c68; end: 10b186cdb;  */

long * FUN_10b186c68(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010b186cb4(lVar1 + 0x28);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + 0x10);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 10b186cdc; end: 10b186d2f;  */

void FUN_10b186cdc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x40;
  __Znwm();
  uVar2 = uVar1;
  func_0x00010b1875d8();
  FUN_10b1859dc();
  *param_1 = uVar2;
  param_1[1] = uVar1;
  return;
}



/* Entry: 10b186d30; end: 10b186d33;  */

void FUN_10b186d30(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc1a50;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b186d34; end: 10b186d47;  */

void FUN_10b186d34(void)

{
  func_0x00010b186d50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b186d48; end: 10b186d73;  */

void FUN_10b186d48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b187580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b186d74; end: 10b186e6f;  */

void FUN_10b186d74(undefined8 *param_1,long param_2)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 **ppuVar3;
  undefined8 extraout_x8;
  long lVar4;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined1 auStack_50 [16];
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  ppuVar3 = &puStack_60;
  func_0x00010b187534();
  lVar4 = *(long *)(param_2 + 0x10);
  uStack_38 = extraout_x8;
  FUN_10b126258(auStack_50,1);
  puStack_40[2] = 0;
  *puStack_40 = &PTR_FUN_110cbd8b0;
  puStack_40[1] = 0;
  FUN_10b1f68fc(puStack_40 + 3,lVar4,lVar4 + 0x10);
  puStack_58 = puStack_40;
  puStack_40 = (undefined8 *)0x0;
  puStack_60 = puStack_58 + 3;
  FUN_10b1262e4(auStack_50);
  uVar1 = 0x40;
  __Znwm();
  uVar2 = uVar1;
  func_0x00010b1875d8();
  FUN_10b1859dc();
  *param_1 = uVar2;
  param_1[1] = uVar1;
  func_0x00010b1257f8(&puStack_60);
  func_0x00010b187430(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __ZNSt3__119__shared_weak_countD2Ev(uVar1);
  __ZdlPv();
  func_0x00010b1257f8();
  func_0x00010b187454();
  if (*(long *)((long)ppuVar3 + 8) != 0) {
    FUN_10b1859b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b186e70; end: 10b186e8f;  */

void FUN_10b186e70(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b1859b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b186e90; end: 10b186ea7;  */

void FUN_10b186e90(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b186ea8; end: 10b186ecb;  */

void FUN_10b186ea8(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_10b186584();
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



/* Entry: 10b186ecc; end: 10b186ecf;  */

void FUN_10b186ecc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc1ad0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b186ed0; end: 10b186ee3;  */

void FUN_10b186ed0(void)

{
  func_0x00010b186eec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b186ee4; end: 10b186ef7;  */

void FUN_10b186ee4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b187580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b186ef8; end: 10b186f1f;  */

long FUN_10b186ef8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10b186f20; end: 10b1873bf;  */

void FUN_10b186f20(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 extraout_x8;
  undefined8 uVar8;
  ulong extraout_x8_00;
  undefined8 extraout_x9;
  undefined8 uVar9;
  long extraout_x9_00;
  long extraout_x9_01;
  ulong extraout_x9_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w11;
  int extraout_w11_00;
  long lVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  long lStack_78;
  undefined1 auStack_70 [32];
  
  if (*(char *)(param_1 + 0x1a) == '\0') {
    FUN_10b113e08(param_1 + 0x14,param_1 + 0x16);
    func_0x00010b187570();
    func_0x00010b1875bc();
    puVar5 = param_1 + 0x18;
    FUN_10b113ed8();
    if (((ulong)puVar5 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x1a) = 1;
      uVar8 = param_1[0x18];
      __ZNSt3__115recursive_mutex4lockEv(uVar8);
      lVar7 = param_1[0x18];
      if ((*(byte *)(lVar7 + 0x58) & 1) != 0) {
        __ZNSt3__115recursive_mutex6unlockEv(uVar8);
        func_0x00010b1874a0(*param_1);
        return;
      }
      plVar11 = *(long **)(lVar7 + 0x68);
      bVar4 = *(long **)(lVar7 + 0x70) <= plVar11;
      if (bVar4) {
        lVar10 = *(long *)(lVar7 + 0x60);
        lVar12 = (long)plVar11 - lVar10;
        if ((lVar12 >> 3) + 1U >> 0x3d != 0) {
          func_0x00010552fc6c();
LAB_10b1872a0:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10b1872a4);
          (*pcVar3)();
        }
        func_0x00010b1874f8((long)*(long **)(lVar7 + 0x70) - lVar10);
        uVar1 = extraout_x9_02;
        if (bVar4) {
          uVar1 = extraout_x8_00;
        }
        if (uVar1 == 0) {
          lVar6 = 0;
        }
        else {
          if (uVar1 >> 0x3d != 0) {
            func_0x000104bd35f4();
            goto LAB_10b1872a0;
          }
          lVar6 = uVar1 << 3;
          __Znwm();
        }
        plVar11 = (long *)(lVar6 + lVar12);
        plVar13 = plVar11 + 1;
        *plVar11 = (long)param_1;
        _memcpy(plVar11 + -(lVar12 >> 3),lVar10,lVar12);
        *(long **)(lVar7 + 0x60) = plVar11 + -(lVar12 >> 3);
        *(long **)(lVar7 + 0x68) = plVar13;
        *(ulong *)(lVar7 + 0x70) = lVar6 + uVar1 * 8;
        if (lVar10 != 0) {
          __ZdlPv(lVar10);
        }
      }
      else {
        plVar13 = plVar11 + 1;
        *plVar11 = (long)param_1;
      }
      *(long **)(lVar7 + 0x68) = plVar13;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(uVar8);
      return;
    }
  }
  plVar11 = param_1 + 0x18;
  FUN_10b113f00();
  lVar10 = *plVar11;
  param_1[0x16] = lVar10;
  lVar7 = plVar11[1];
  param_1[0x17] = lVar7;
  if (lVar7 != 0) {
    do {
      func_0x00010b187410();
    } while (extraout_w10 != 0);
  }
  func_0x00010b1874a8();
  uStack_98 = *(undefined8 *)(lVar10 + 0x10);
  uStack_a0 = *(undefined8 *)(lVar10 + 8);
  if (*(long *)(lVar10 + 0x10) != 0) {
    do {
      func_0x00010b187410();
    } while (extraout_w10_00 != 0);
  }
  lStack_78 = param_1[0x15];
  puStack_80 = (undefined8 *)param_1[0x14];
  if (param_1[0x15] != 0) {
    do {
      func_0x00010b187410();
    } while (extraout_w10_01 != 0);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (auStack_70,param_1 + 0x11);
  func_0x00010b187600();
  param_1[0xc] = extraout_x9;
  param_1[0xb] = extraout_x8;
  puVar5 = (undefined8 *)0x28;
  __Znwm();
  puVar5[1] = lStack_78;
  *puVar5 = puStack_80;
  puStack_80 = (undefined8 *)0x0;
  lStack_78 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar5 + 2,auStack_70);
  param_1[0xd] = puVar5;
  func_0x00010b18755c(&uStack_90);
  FUN_10b186ea8(param_1 + 7);
  param_1[8] = uStack_88;
  param_1[7] = uStack_90;
  uStack_90 = 0;
  uStack_88 = 0;
  *(undefined1 *)(param_1 + 9) = 1;
  *(undefined1 *)(param_1 + 10) = 1;
  FUN_10b129584(&uStack_90);
  func_0x00010b187480(*(undefined8 *)param_1[0xc]);
  FUN_10b1859b4(&puStack_80);
  func_0x000107c2bdf4(&uStack_a0);
  func_0x000107c2be20(param_1 + 0x16);
  func_0x00010b187498();
  func_0x00010b187490();
  func_0x00010b187524();
  if (*(char *)(param_1 + 9) == '\x01') {
    puVar5 = param_1 + 3;
    __ZNSt3__112__get_sp_mutEPKv(puVar5);
    __ZNSt3__18__sp_mut4lockEv();
    puVar2 = (undefined8 *)param_1[3];
    lVar7 = param_1[4];
    param_1[3] = 0;
    param_1[4] = 0;
    __ZNSt3__18__sp_mut6unlockEv(puVar5);
    puStack_80 = puVar2;
    lStack_78 = lVar7;
    __ZNSt3__15mutex4lockEv(puVar2 + 9);
    uVar8 = param_1[7];
    if (*(char *)(puVar2 + 2) == '\x01') {
      uVar9 = param_1[8];
      param_1[7] = 0;
      param_1[8] = 0;
      lVar7 = puVar2[1];
      *puVar2 = uVar8;
      puVar2[1] = uVar9;
      puVar5 = puStack_80;
      if (lVar7 != 0) {
        do {
          func_0x00010b187420();
        } while (extraout_w11 != 0);
        puVar5 = puStack_80;
        if (extraout_x9_00 == 0) {
          func_0x00010b187444();
          func_0x00010b1875d0();
          puVar5 = puStack_80;
        }
      }
    }
    else {
      *puVar2 = uVar8;
      puVar2[1] = param_1[8];
      param_1[7] = 0;
      param_1[8] = 0;
      *(undefined1 *)(puVar2 + 2) = 1;
      puVar5 = puVar2;
    }
    plVar11 = (long *)puVar5[0x12];
    puVar5[0x12] = 0;
    __ZNSt3__15mutex6unlockEv(puVar2 + 9);
    if (plVar11 == (long *)0x0) {
      __ZNSt3__118condition_variable10notify_allEv(puVar5 + 3);
    }
    else {
      (**(code **)(*plVar11 + 0x10))(plVar11,&puStack_80);
      func_0x00010b187480(*(undefined8 *)(*plVar11 + 8));
    }
    if (lStack_78 != 0) {
      do {
        func_0x00010b187420();
      } while (extraout_w11_00 != 0);
      if (extraout_x9_01 == 0) {
        func_0x00010b187444();
        func_0x00010b1875d0();
      }
    }
  }
  else {
    __ZNSt13exception_ptrC1ERKS_(&puStack_80,param_1 + 7);
    FUN_10b186458(param_1 + 2,&puStack_80);
    __ZNSt13exception_ptrD1Ev(&puStack_80);
  }
  FUN_10b186550(param_1 + 2);
  func_0x00010b18758c();
  return;
}



/* Entry: 10b1873c0; end: 10b18740f;  */

void FUN_10b1873c0(long param_1)

{
  if (*(char *)(param_1 + 0xd0) != '\x02') {
    if (*(char *)(param_1 + 0xd0) == '\x01') {
      func_0x00010b1874a8();
      func_0x00010b187498();
    }
    else {
      func_0x00010b187570();
    }
    func_0x00010b187490();
  }
  FUN_10b186550(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10b187410; end: 10b187613;  */

void FUN_10b187410(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10b187614; end: 10b187b37;  */

void FUN_10b187614(undefined8 param_1,long *param_2,long param_3,undefined8 *param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  byte bVar4;
  char cVar5;
  undefined1 uVar6;
  bool bVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 extraout_w8;
  long lVar10;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w11;
  int extraout_w11_00;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  long lVar14;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined1 uStack_88;
  byte bStack_80;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  
  puVar8 = (undefined8 *)0x150;
  __Znwm();
  plVar1 = puVar8 + 0x21;
  *puVar8 = FUN_10b188600;
  puVar8[1] = FUN_10b188908;
  lVar14 = param_2[1];
  lVar10 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  puVar12 = puVar8 + 0x1b;
  *puVar12 = *param_4;
  puVar8[0x22] = lVar14;
  *plVar1 = lVar10;
  (**(code **)(param_4[1] + 0x10))(puVar8 + 0x1c,param_4 + 1);
  func_0x000105c40d24(puVar8 + 2);
  func_0x000105c407c0(param_1,puVar8 + 2);
  if (*(char *)(param_3 + 0x78) == '\x01') {
    (**(code **)(*(long *)*plVar1 + 0x20))((long *)*plVar1,param_3);
  }
  FUN_10b16adb8(puVar8 + 0x12,1);
  puVar11 = (undefined8 *)puVar8[0x14];
  lVar10 = puVar8[0x22];
  lStack_b8 = puVar8[0x22];
  lStack_c0 = *plVar1;
  puVar11[2] = 0;
  *puVar11 = &PTR_FUN_110cc0908;
  puVar11[1] = 0;
  if (lVar10 != 0) {
    do {
      FUN_10b188d10();
    } while (extraout_w10 != 0);
  }
  FUN_10b16ae24(puVar11 + 3,&lStack_c0);
  plVar2 = puVar8 + 0x23;
  func_0x0001052aad48(&lStack_c0);
  lVar10 = puVar8[0x14];
  puVar8[0x14] = 0;
  puVar8[0x23] = lVar10 + 0x18;
  puVar8[0x24] = lVar10;
  func_0x00010b16b410(puVar8 + 0x12);
  puStack_f8 = (undefined8 *)0x7fffffffffffffff;
  puStack_100 = (undefined8 *)0x0;
  uStack_68 = puVar8[0x24];
  puStack_70 = (undefined8 *)*plVar2;
  if (puVar8[0x24] != 0) {
    do {
      FUN_10b188d10();
    } while (extraout_w10_00 != 0);
  }
  FUN_10b178114(&lStack_c0);
  puVar11 = puVar8 + 0x25;
  func_0x00010b1423dc(*plVar1 + 0x38,&lStack_c0);
  func_0x0001052aad20(&lStack_c0);
  func_0x0001052aacf8(&puStack_70);
  FUN_10b14b830(puVar11,puVar8[0x23] + 0x18);
  puVar9 = puVar11;
  func_0x000105c417a8();
  if (((ulong)puVar9 & 1) == 0) {
    *(undefined1 *)(puVar8 + 0x29) = 0;
    puStack_100 = puVar8;
    puStack_f8 = puVar11;
    func_0x000105c41834(&lStack_c0,puVar11,&puStack_100);
    if (lStack_b8 == 0) {
      return;
    }
    do {
      func_0x00010b188df0();
      lVar10 = extraout_x9;
    } while (extraout_w11 != 0);
LAB_10b187850:
    if (lVar10 == 0) {
      func_0x00010b188d20();
      func_0x00010b188f18();
    }
  }
  else {
    func_0x000105c40888(puVar8 + 0x12,puVar11);
    func_0x0001052a55c0(puVar11);
    bVar4 = *(byte *)(puVar8 + 0x1a);
    if (bVar4 == 1) {
      lStack_b8 = puVar8[0x13];
      lStack_c0 = puVar8[0x12];
      uStack_b0 = puVar8[0x14];
      uStack_a8 = puVar8[0x15];
      puVar8[0x13] = 0;
      puVar8[0x14] = 0;
      puVar8[0x12] = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      if (*(char *)(puVar8 + 0x19) == '\x01') {
        func_0x00010b188e44(&lStack_c0);
        uStack_88 = extraout_w8;
      }
      func_0x00010b142bac(puVar8 + 7,&lStack_c0);
      func_0x0001052a03ac(&lStack_c0);
      iVar13 = 3;
    }
    else {
      iVar13 = 0;
    }
    func_0x00010b188e6c();
    if ((bVar4 & 1) == 0) {
      FUN_10b16455c(puVar11,*plVar2 + 0x40);
      puVar9 = puVar11;
      FUN_10b16b444();
      if (((ulong)puVar9 & 1) == 0) {
        *(undefined1 *)(puVar8 + 0x29) = 1;
        puStack_100 = puVar8;
        puStack_f8 = puVar11;
        FUN_10b16b4cc(&lStack_c0,puVar11,&puStack_100);
        if (lStack_b8 == 0) {
          return;
        }
        do {
          func_0x00010b188df0();
          lVar10 = extraout_x9_00;
        } while (extraout_w11_00 != 0);
        goto LAB_10b187850;
      }
      FUN_10b159d4c(puVar8 + 0x12,puVar11);
      FUN_10b164598(puVar11);
      (*(code *)*puVar12)(&lStack_c0,puVar8 + 0x12,puVar12);
      bVar4 = bStack_80;
      uVar6 = bStack_80 == 1;
      if ((bool)uVar6) {
        FUN_10b1a21fc(*(undefined8 *)(*plVar1 + 8));
        func_0x00010b188d64();
        if ((bool)uVar6) {
          func_0x00010b188dc0();
        }
        func_0x00010b188e00();
        func_0x00010b188db8();
        iVar13 = 3;
      }
      else {
        iVar13 = 0;
      }
      func_0x00010b188f20();
      if ((bVar4 & 1) == 0) {
        func_0x00010b188f94();
        if (extraout_x9_01 != 0) {
          plVar3 = (long *)(extraout_x9_01 + 8);
          do {
            cVar5 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar7) {
              *plVar3 = *plVar3 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        FUN_10b1a2cd8(&lStack_c0);
        func_0x00010b188ee4();
        bVar7 = bStack_80 == 1;
        if (bVar7) {
          func_0x00010b188d64();
          if (bVar7) {
            func_0x00010b188dc0();
          }
          func_0x00010b188e00();
          func_0x00010b188db8();
          iVar13 = 3;
        }
        else {
          iVar13 = 0;
        }
        func_0x00010b188f20();
        if ((bStack_80 & 1) == 0) {
          func_0x000105c41bc0(puVar8 + 7);
          func_0x00010b188e24();
          iVar13 = 3;
        }
      }
      func_0x00010b188e64();
    }
    FUN_10b16b420(plVar2);
    if (iVar13 == 3) {
      *puVar8 = 0;
      *(undefined1 *)(puVar8 + 0x29) = 2;
      if (*(char *)(puVar8 + 0x10) == '\x01') {
        puStack_70 = puVar8 + 7;
        func_0x000105c4120c(puVar8 + 2,&puStack_70);
      }
      else {
        __ZNSt13exception_ptrC1ERKS_(&uStack_58);
        puStack_70 = &uStack_58;
        func_0x000105c410b8(puVar8 + 2,&puStack_70);
        __ZNSt13exception_ptrD1Ev(&uStack_58);
      }
    }
    func_0x00010b188e90();
    func_0x00010b188eb0();
    FUN_10b1697f8(plVar1);
    func_0x00010b188d30();
  }
  return;
}



/* Entry: 10b187b38; end: 10b187c67;  */

void FUN_10b187b38(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined1 param_6)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 extraout_x8;
  int extraout_w10;
  long *unaff_x19;
  undefined1 uStack_b1;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [19];
  undefined1 uStack_6d;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined1 auStack_60 [40];
  undefined8 uStack_38;
  
  uStack_6c = param_1;
  uStack_6d = param_6;
  func_0x00010b188f80();
  puVar3 = &uStack_6d;
  puVar4 = auStack_80;
  uStack_38 = extraout_x8;
  FUN_10b187c68(&uStack_6c);
  lStack_98 = unaff_x19[1];
  lStack_a0 = *unaff_x19;
  if (unaff_x19[1] != 0) {
    do {
      func_0x00010b188d10();
    } while (extraout_w10 != 0);
  }
  uStack_68 = *param_5;
  (**(code **)(param_5[1] + 0x10))(auStack_60,param_5 + 1);
  puVar2 = &uStack_68;
  FUN_10b187614(auStack_90,&lStack_a0,param_4,puVar2);
  FUN_10b142444(auStack_80,auStack_90);
  puVar1 = auStack_80;
  FUN_10b187c9c(*unaff_x19 + 0x48,puVar1);
  func_0x00010b142b88(auStack_80);
  func_0x0001052a4560(auStack_90);
  func_0x00010b188ea0();
  FUN_10b1697f8(&lStack_a0);
  func_0x00010b188f58(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b142b88(auStack_80);
    func_0x0001052a4560(auStack_90);
    func_0x00010b188ea0();
    FUN_10b1697f8(&lStack_a0);
    FUN_10b1697f8();
    func_0x00010b188de8();
    pcStack_a8 = FUN_10b187c68;
    puStack_b0 = &stack0xfffffffffffffff0;
    FUN_10b188434(&uStack_b1,unaff_x19,puVar1,puVar2,puVar3,puVar4);
    return;
  }
  return;
}



/* Entry: 10b187c68; end: 10b187c9b;  */

void FUN_10b187c68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 uStack_11;
  
  FUN_10b188434(&uStack_11,param_1,param_2,param_3,param_4,param_5);
  return;
}



/* Entry: 10b187c9c; end: 10b187ce3;  */

undefined8 * FUN_10b187c9c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 2) == '\x01') {
    FUN_10b1883a8(param_1);
  }
  else {
    uVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar1;
    *param_2 = 0;
    param_2[1] = 0;
    *(undefined1 *)(param_1 + 2) = 1;
  }
  return param_1;
}



/* Entry: 10b187ce4; end: 10b187d87;  */

void FUN_10b187ce4(undefined8 *param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  
  uStack_58 = param_3[1];
  uStack_60 = *param_3;
  uStack_48 = param_4[1];
  uStack_50 = *param_4;
  if (param_4[1] != 0) {
    do {
      FUN_10b188d10();
    } while (extraout_w10 != 0);
  }
  FUN_10b187d88(auStack_40,param_2 + 0x48,&uStack_60);
  func_0x000107c27b58(auStack_40);
  func_0x0001052aacf8(&uStack_50);
  lVar1 = *(long *)(param_2 + 0x40);
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  param_1[1] = *(undefined8 *)(param_2 + 0x40);
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_10b188d10();
    } while (extraout_w10_00 != 0);
  }
  return;
}



/* Entry: 10b187d88; end: 10b18808b;  */

void FUN_10b187d88(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  undefined1 extraout_w8;
  long lVar7;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  long extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w11;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 *puStack_58;
  
  puVar3 = (undefined8 *)0xb0;
  __Znwm();
  *puVar3 = FUN_10b188ad8;
  puVar3[1] = FUN_10b188cd8;
  uVar9 = *param_3;
  uVar11 = param_3[3];
  uVar10 = param_3[2];
  puVar3[0xb] = param_3[1];
  puVar3[10] = uVar9;
  puVar8 = puVar3 + 0xc;
  puVar3[0xd] = uVar11;
  *puVar8 = uVar10;
  if (param_3[3] != 0) {
    do {
      FUN_10b188d10();
    } while (extraout_w10 != 0);
  }
  FUN_10b124f8c(puVar3 + 2);
  puVar1 = puVar3 + 0xe;
  FUN_10b124f40(param_1,puVar3 + 2);
  lVar7 = param_2[1];
  uVar9 = *param_2;
  puVar3[0x13] = param_2[1];
  puVar3[0x12] = uVar9;
  if (lVar7 != 0) {
    do {
      FUN_10b188d10();
    } while (extraout_w10_00 != 0);
  }
  FUN_10b14a294(puVar1,puVar3 + 0x12);
  puVar4 = puVar1;
  FUN_10b12d174();
  if (((ulong)puVar4 & 1) == 0) {
    *(undefined1 *)(puVar3 + 0x15) = 0;
    puStack_70 = puVar3;
    puStack_68 = puVar1;
    FUN_10b12d1c8(&uStack_90,puVar1,&puStack_70);
    if (lStack_88 != 0) {
      do {
        func_0x00010b188df0();
      } while (extraout_w11 != 0);
      if (extraout_x9 == 0) {
        func_0x00010b188d20();
        func_0x00010b188f18();
      }
    }
  }
  else {
    FUN_10b12d0d0(puVar1);
    func_0x000107c27b58(puVar1);
    FUN_10b14a264(puVar3 + 0x12);
    plVar5 = puVar3 + 0x12;
    FUN_10b14a428();
    if ((*(byte *)(plVar5 + 8) & 1) == 0) {
      (**(code **)(*(long *)*puVar8 + 0x28))((long *)*puVar8,puVar3 + 10);
    }
    else {
      func_0x0001052a46c4();
      uVar9 = puVar3[10];
      lVar7 = *plVar5;
      if (lVar7 == 0) {
        lVar7 = 0;
        lVar6 = 0;
      }
      else {
        func_0x00010b188e74();
        (*extraout_x8)();
        lVar6 = *plVar5;
      }
      plVar2 = (long *)puVar3[0xc];
      if ((long)puVar3[0xb] <= lVar7) {
        lVar7 = puVar3[0xb];
      }
      puVar3[0xe] = uVar9;
      puVar3[0xf] = lVar7;
      if (lVar6 != 0) {
        func_0x00010b188e74();
        (*extraout_x8_00)();
      }
      puVar3[0x14] = lVar6;
      (**(code **)(*plVar2 + 0x10))(plVar2,puVar3 + 0x14);
      lStack_78 = plVar5[1];
      lStack_80 = *plVar5;
      if (plVar5[1] != 0) {
        do {
          FUN_10b188d10();
        } while (extraout_w10_01 != 0);
      }
      puVar3[0x10] = 0;
      puVar3[0x11] = 0;
      uStack_90 = uVar9;
      lStack_88 = lVar7;
      func_0x00010b188e74();
      (*extraout_x8_01)();
      func_0x000107c27d78(&lStack_80);
      func_0x00010b188ec0();
      (**(code **)(*(long *)*puVar8 + 0x20))();
    }
    FUN_10b124fa8(puVar3 + 7);
    func_0x00010b188e1c();
    func_0x00010b188ec8();
    *(undefined1 *)(puVar3 + 0x15) = extraout_w8;
    if (*(char *)(puVar3 + 8) == '\x01') {
      puStack_58 = auStack_60;
      func_0x000107c27b6c(puVar3 + 2,&puStack_58);
    }
    else {
      __ZNSt13exception_ptrC1ERKS_(auStack_60,puVar3 + 7);
      puStack_58 = auStack_60;
      func_0x000104bf33ec(puVar3 + 2,&puStack_58);
      __ZNSt13exception_ptrD1Ev(auStack_60);
    }
    func_0x00010b188e80();
    func_0x0001052aacf8(puVar8);
    func_0x00010b188d30();
  }
  return;
}



/* Entry: 10b18808c; end: 10b18838f;  */

void FUN_10b18808c(undefined8 param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined1 in_ZR;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 ***pppuVar8;
  ulong uVar9;
  int extraout_w10;
  int extraout_w10_00;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 **appuStack_2e8 [79];
  undefined8 *apuStack_70 [2];
  
  puVar5 = (undefined8 *)0x2f0;
  __Znwm();
  *puVar5 = FUN_10b18895c;
  puVar5[1] = FUN_10b188aa0;
  FUN_10b182880(puVar5 + 2);
  FUN_10b1827a4(param_1,puVar5 + 2);
  lVar14 = *(long *)(param_2 + 0x10);
  puVar5[0x59] = *(undefined8 *)(param_2 + 8);
  puVar5[0x5a] = lVar14;
  if (lVar14 != 0) {
    do {
      FUN_10b188d10();
    } while (extraout_w10 != 0);
  }
  plVar1 = puVar5 + 0x5b;
  lVar14 = *(long *)(param_2 + 0x50);
  puVar5[0x5b] = *(undefined8 *)(param_2 + 0x48);
  puVar5[0x5c] = lVar14;
  if (lVar14 != 0) {
    do {
      FUN_10b188d10();
    } while (extraout_w10_00 != 0);
  }
  plVar6 = plVar1;
  FUN_10b14a400();
  if (((ulong)plVar6 & 1) == 0) {
    *(undefined1 *)(puVar5 + 0x5d) = 0;
    uVar11 = puVar5[0x5b];
    __ZNSt3__115recursive_mutex4lockEv(uVar11);
    lVar14 = *plVar1;
    if ((*(byte *)(lVar14 + 0x90) & 1) == 0) {
      puVar3 = *(undefined8 **)(lVar14 + 0xa0);
      if (puVar3 < *(undefined8 **)(lVar14 + 0xa8)) {
        puVar15 = puVar3 + 1;
        *puVar3 = puVar5;
      }
      else {
        lVar12 = *(long *)(lVar14 + 0x98);
        lVar13 = (long)puVar3 - lVar12;
        uVar2 = (lVar13 >> 3) + 1;
        if (uVar2 >> 0x3d != 0) {
          func_0x00010552fc6c();
LAB_10b18830c:
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10b188310);
          (*pcVar4)();
        }
        uVar9 = (long)*(undefined8 **)(lVar14 + 0xa8) - lVar12;
        uVar10 = (long)uVar9 >> 2;
        if (uVar10 <= uVar2) {
          uVar10 = uVar2;
        }
        if (0x7ffffffffffffff7 < uVar9) {
          uVar10 = 0x1fffffffffffffff;
        }
        if (uVar10 == 0) {
          lVar7 = 0;
        }
        else {
          if (uVar10 >> 0x3d != 0) {
            func_0x000104bd35f4();
            goto LAB_10b18830c;
          }
          lVar7 = uVar10 << 3;
          __Znwm();
        }
        puVar3 = (undefined8 *)(lVar7 + lVar13);
        puVar15 = puVar3 + 1;
        *puVar3 = puVar5;
        _memcpy(puVar3 + -(lVar13 >> 3),lVar12,lVar13);
        *(undefined8 **)(lVar14 + 0x98) = puVar3 + -(lVar13 >> 3);
        *(undefined8 **)(lVar14 + 0xa0) = puVar15;
        *(ulong *)(lVar14 + 0xa8) = lVar7 + uVar10 * 8;
        if (lVar12 != 0) {
          __ZdlPv(lVar12);
        }
      }
      *(undefined8 **)(lVar14 + 0xa0) = puVar15;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(uVar11);
      return;
    }
    __ZNSt3__115recursive_mutex6unlockEv(uVar11);
    (*(code *)*puVar5)(puVar5);
  }
  else {
    plVar6 = plVar1;
    FUN_10b14a428();
    func_0x00010b142b88(plVar1);
    if ((*(byte *)(plVar6 + 8) & 1) == 0) {
      func_0x0001052a0760(appuStack_2e8,plVar6);
      func_0x00010b188ef4();
      pppuVar8 = appuStack_2e8;
      FUN_10b1792b4(puVar5 + 7);
      func_0x00010b188e0c();
      func_0x0001052a03ac(appuStack_2e8);
    }
    else {
      FUN_10b1a23e0(appuStack_2e8,puVar5[0x59]);
      func_0x00010b188ef4();
      pppuVar8 = appuStack_2e8;
      func_0x00010b1792e4(puVar5 + 7);
      func_0x00010b188e0c();
      func_0x00010b121af0(appuStack_2e8);
    }
    func_0x00010b188e98();
    func_0x00010b188ec8();
    func_0x00010b188f6c();
    if ((bool)in_ZR) {
      appuStack_2e8[0] = pppuVar8;
      func_0x00010b188f4c();
      FUN_10b179070();
    }
    else {
      __ZNSt13exception_ptrC1ERKS_(apuStack_70);
      appuStack_2e8[0] = apuStack_70;
      func_0x00010b188f4c();
      FUN_10b178f08();
      __ZNSt13exception_ptrD1Ev(apuStack_70);
    }
    func_0x00010b188e88();
    func_0x00010b188d30();
  }
  return;
}



/* Entry: 10b188390; end: 10b188393;  */

undefined8 * FUN_10b188390(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc1b20;
  if (*(char *)(param_1 + 0xb) == '\x01') {
    func_0x00010b142b88(param_1 + 9);
  }
  func_0x0001052aad20(param_1 + 7);
  *param_1 = &PTR_FUN_110cc0ca0;
  FUN_10b1a1ae8(param_1[1],param_1[3]);
  func_0x000107c27c20(param_1 + 4);
  func_0x00010b129c40(param_1 + 1);
  return param_1;
}



/* Entry: 10b188394; end: 10b1883a7;  */

void FUN_10b188394(void)

{
  func_0x00010b1883ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1883a8; end: 10b188433;  */

undefined8 * FUN_10b1883a8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x00010b142b88(&uStack_30);
  return param_1;
}



/* Entry: 10b188434; end: 10b1884eb;  */

undefined1 *
FUN_10b188434(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  long *unaff_x19;
  undefined1 auStack_60 [16];
  long lStack_50;
  undefined8 uStack_48;
  
  puVar2 = auStack_60;
  func_0x00010b188f80();
  uStack_48 = extraout_x8;
  FUN_10b1884ec(auStack_60,1);
  FUN_10b188530(lStack_50,param_2,param_3,param_4,param_5,param_6);
  lVar1 = lStack_50;
  lStack_50 = 0;
  *unaff_x19 = lVar1 + 0x18;
  unaff_x19[1] = lVar1;
  func_0x00010b1885f0();
  func_0x00010b188f58(uStack_48);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010b1885f0(auStack_60);
  __Unwind_Resume();
  *(undefined8 *)(puVar2 + 8) = param_2;
  puVar3 = puVar2;
  FUN_10b188514();
  *(undefined1 **)(puVar2 + 0x10) = puVar3;
  return puVar2;
}



/* Entry: 10b1884ec; end: 10b188513;  */

long FUN_10b1884ec(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10b188514();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10b188514; end: 10b18852f;  */

undefined8 * FUN_10b188514(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 >> 0x39 == 0) {
    puVar1 = (undefined8 *)(param_2 << 7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110cc1b98;
  func_0x00010b188598(param_1 + 3);
  return param_1;
}



/* Entry: 10b188530; end: 10b18856f;  */

undefined8 * FUN_10b188530(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110cc1b98;
  func_0x00010b188598(param_1 + 3);
  return param_1;
}



/* Entry: 10b188570; end: 10b188573;  */

void FUN_10b188570(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc1b98;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b188574; end: 10b188587;  */

void FUN_10b188574(void)

{
  FUN_10b1885e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b188588; end: 10b1885a3;  */

void FUN_10b188588(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b188590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b1885a4; end: 10b1885df;  */

void FUN_10b1885a4(undefined8 *param_1)

{
  undefined1 in_w4;
  
  FUN_10b177fec();
  *param_1 = &PTR_FUN_110cc1b20;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 0xc) = in_w4;
  return;
}



/* Entry: 10b1885e0; end: 10b1885ff;  */

void FUN_10b1885e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc1b98;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b188600; end: 10b188907;  */

void FUN_10b188600(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  undefined1 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined1 extraout_w8;
  long extraout_x9;
  long extraout_x9_00;
  int extraout_w11;
  int iVar8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined1 uStack_98;
  byte bStack_90;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  
  puVar1 = param_1 + 0x25;
  if (*(char *)(param_1 + 0x29) == '\0') {
    func_0x000105c40888(param_1 + 0x12,puVar1);
    func_0x0001052a55c0(puVar1);
    bVar3 = *(byte *)(param_1 + 0x1a);
    if (bVar3 == 1) {
      lStack_c8 = param_1[0x13];
      uStack_d0 = param_1[0x12];
      uStack_c0 = param_1[0x14];
      uStack_b8 = param_1[0x15];
      param_1[0x13] = 0;
      param_1[0x14] = 0;
      param_1[0x12] = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      if (*(char *)(param_1 + 0x19) == '\x01') {
        func_0x00010b188e44(&uStack_d0);
        uStack_98 = extraout_w8;
      }
      func_0x00010b188e00();
      func_0x00010b188db8();
      iVar8 = 3;
    }
    else {
      iVar8 = 0;
    }
    func_0x00010b188e6c();
    if ((bVar3 & 1) != 0) goto LAB_10b1887d4;
    FUN_10b16455c(puVar1,param_1[0x23] + 0x40);
    puVar7 = puVar1;
    FUN_10b16b444();
    if (((ulong)puVar7 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x29) = 1;
      puStack_80 = param_1;
      puStack_78 = puVar1;
      FUN_10b16b4cc(&uStack_d0,puVar1,&puStack_80);
      if (lStack_c8 == 0) {
        return;
      }
      do {
        func_0x00010b188df0();
      } while (extraout_w11 != 0);
      if (extraout_x9_00 != 0) {
        return;
      }
      func_0x00010b188d20();
      func_0x00010b188f18();
      return;
    }
  }
  FUN_10b159d4c(param_1 + 0x12,puVar1);
  FUN_10b164598(puVar1);
  (*(code *)param_1[0x1b])(&uStack_d0,param_1 + 0x12,param_1 + 0x1b);
  bVar3 = bStack_90;
  uVar5 = bStack_90 == 1;
  if ((bool)uVar5) {
    FUN_10b1a21fc(*(undefined8 *)(param_1[0x21] + 8));
    func_0x00010b188d38();
    if ((bool)uVar5) {
      func_0x00010b188d90();
    }
    func_0x00010b188f38();
    func_0x00010b188f44();
    iVar8 = 3;
  }
  else {
    iVar8 = 0;
  }
  func_0x00010b188efc();
  if ((bVar3 & 1) == 0) {
    func_0x00010b188f94();
    if (extraout_x9 != 0) {
      plVar2 = (long *)(extraout_x9 + 8);
      do {
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *plVar2 = *plVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    FUN_10b1a2cd8(&uStack_d0);
    func_0x00010b188ee4();
    bVar6 = bStack_90 == 1;
    if (bVar6) {
      func_0x00010b188d38();
      if (bVar6) {
        func_0x00010b188d90();
      }
      func_0x00010b188f38();
      func_0x00010b188f44();
      iVar8 = 3;
    }
    else {
      iVar8 = 0;
    }
    func_0x00010b188efc();
    if ((bStack_90 & 1) == 0) {
      func_0x000105c41bc0(param_1 + 7);
      func_0x00010b188e24();
      iVar8 = 3;
    }
  }
  func_0x00010b188e64();
LAB_10b1887d4:
  func_0x00010b188f28();
  if (iVar8 == 3) {
    *param_1 = 0;
    *(undefined1 *)(param_1 + 0x29) = 2;
    puStack_38 = param_1 + 7;
    if (*(char *)(param_1 + 0x10) == '\x01') {
      func_0x000105c4120c(param_1 + 2,&puStack_38);
    }
    else {
      __ZNSt13exception_ptrC1ERKS_(&uStack_40);
      puStack_38 = &uStack_40;
      func_0x000105c410b8(param_1 + 2,&puStack_38);
      __ZNSt13exception_ptrD1Ev(&uStack_40);
    }
  }
  func_0x00010b188e90();
  func_0x00010b188ed4();
  FUN_10b1697f8(param_1 + 0x21);
  func_0x00010b188d30();
  return;
}



/* Entry: 10b188908; end: 10b18895b;  */

void FUN_10b188908(long param_1)

{
  if (*(char *)(param_1 + 0x148) != '\x02') {
    if (*(char *)(param_1 + 0x148) == '\x01') {
      FUN_10b164598();
    }
    else {
      func_0x0001052a55c0(param_1 + 0x128);
    }
    func_0x00010b188f28();
  }
  func_0x00010b188e90();
  func_0x00010b188ed4();
  FUN_10b1697f8(param_1 + 0x108);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10b18895c; end: 10b188a9f;  */

void FUN_10b18895c(long param_1)

{
  undefined1 in_ZR;
  undefined1 **ppuVar1;
  undefined1 **ppuVar2;
  long unaff_x21;
  undefined1 *apuStack_2b0 [79];
  undefined1 auStack_38 [8];
  
  ppuVar1 = apuStack_2b0;
  ppuVar2 = apuStack_2b0;
  FUN_10b14a428(param_1 + 0x2d8);
  func_0x00010b188f04();
  if ((*(byte *)(unaff_x21 + 0x40) & 1) == 0) {
    func_0x0001052a0760(apuStack_2b0);
    func_0x00010b188ef4();
    FUN_10b1792b4(param_1 + 0x38);
    func_0x00010b188e0c();
    func_0x00010b188db8();
  }
  else {
    FUN_10b1a23e0(apuStack_2b0,*(undefined8 *)(param_1 + 0x2c8));
    func_0x00010b188ef4();
    func_0x00010b1792e4(param_1 + 0x38);
    func_0x00010b188e0c();
    func_0x00010b121af0(apuStack_2b0);
    ppuVar2 = ppuVar1;
  }
  func_0x00010b188e98();
  func_0x00010b188ec8();
  func_0x00010b188f6c();
  if ((bool)in_ZR) {
    apuStack_2b0[0] = (undefined1 *)ppuVar2;
    FUN_10b179070(param_1 + 0x10,apuStack_2b0);
  }
  else {
    __ZNSt13exception_ptrC1ERKS_(auStack_38);
    apuStack_2b0[0] = auStack_38;
    FUN_10b178f08(param_1 + 0x10,apuStack_2b0);
    __ZNSt13exception_ptrD1Ev(auStack_38);
  }
  func_0x00010b188e88();
  func_0x00010b188d30();
  return;
}



/* Entry: 10b188aa0; end: 10b188ad7;  */

void FUN_10b188aa0(long param_1)

{
  if ((*(byte *)(param_1 + 0x2e8) & 1) == 0) {
    func_0x00010b142b88(param_1 + 0x2d8);
    func_0x00010b129c40(param_1 + 0x2c8);
  }
  func_0x00010b188e88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10b188ad8; end: 10b188cd7;  */

void FUN_10b188ad8(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined1 extraout_w8;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  int extraout_w10;
  undefined8 uVar5;
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [8];
  
  FUN_10b12d0d0(param_1 + 0x70);
  func_0x00010b188f10();
  FUN_10b14a264(param_1 + 0x90);
  plVar2 = (long *)(param_1 + 0x90);
  FUN_10b14a428();
  if ((*(byte *)(plVar2 + 8) & 1) == 0) {
    (**(code **)(**(long **)(param_1 + 0x60) + 0x28))(*(long **)(param_1 + 0x60),param_1 + 0x50);
  }
  else {
    func_0x0001052a46c4();
    uVar5 = *(undefined8 *)(param_1 + 0x50);
    lVar3 = *plVar2;
    if (lVar3 == 0) {
      lVar3 = 0;
      lVar4 = 0;
    }
    else {
      func_0x00010b188e74();
      (*extraout_x8)();
      lVar4 = *plVar2;
    }
    plVar1 = *(long **)(param_1 + 0x60);
    if (*(long *)(param_1 + 0x58) <= lVar3) {
      lVar3 = *(long *)(param_1 + 0x58);
    }
    *(undefined8 *)(param_1 + 0x70) = uVar5;
    *(long *)(param_1 + 0x78) = lVar3;
    if (lVar4 != 0) {
      func_0x00010b188e74();
      (*extraout_x8_00)();
    }
    *(long *)(param_1 + 0xa0) = lVar4;
    (**(code **)(*plVar1 + 0x10))(plVar1,param_1 + 0xa0);
    lStack_50 = plVar2[1];
    lStack_58 = *plVar2;
    if (plVar2[1] != 0) {
      do {
        func_0x00010b188d10();
      } while (extraout_w10 != 0);
    }
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    func_0x00010b188e74();
    (*extraout_x8_01)();
    func_0x000107c27d78(&lStack_58);
    func_0x00010b188ec0();
    (**(code **)(**(long **)(param_1 + 0x60) + 0x20))();
  }
  FUN_10b124fa8(param_1 + 0x38);
  func_0x00010b188e1c();
  func_0x00010b188ec8();
  *(undefined1 *)(param_1 + 0xa8) = extraout_w8;
  if (*(char *)(param_1 + 0x40) == '\x01') {
    func_0x00010b188f4c();
    func_0x000107c27b6c();
  }
  else {
    __ZNSt13exception_ptrC1ERKS_(auStack_48,param_1 + 0x38);
    func_0x00010b188f4c();
    func_0x000104bf33ec();
    __ZNSt13exception_ptrD1Ev(auStack_48);
  }
  func_0x00010b188e80();
  func_0x0001052aacf8(param_1 + 0x60);
  func_0x00010b188d30();
  return;
}



/* Entry: 10b188cd8; end: 10b188d0f;  */

void FUN_10b188cd8(long param_1)

{
  if ((*(byte *)(param_1 + 0xa8) & 1) == 0) {
    func_0x00010b188f10();
    func_0x00010b188e1c();
  }
  func_0x00010b188e80();
  func_0x0001052aacf8(param_1 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}


