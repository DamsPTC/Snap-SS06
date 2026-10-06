/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10898623c; end: 10898641b;  */

void FUN_10898623c(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined1 uStack_88;
  long lStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lStack_80 = param_1 + 0x18;
  plStack_78 = (long *)CONCAT71(plStack_78._1_7_,1);
  __ZNSt3__15mutex4lockEv();
  lVar3 = param_1 + 0x58;
  FUN_108986a54(lVar3,param_2);
  if (param_1 + 0x60 != lVar3) {
    lVar1 = lVar3;
    func_0x000107c27be0();
    if (*(long *)(param_1 + 0x58) == lVar3) {
      *(long *)(param_1 + 0x58) = lVar1;
    }
    *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + -1;
    func_0x00010530d618(*(undefined8 *)(param_1 + 0x60),lVar3);
    func_0x000108986970(lVar3 + 0x20);
    __ZdlPv(lVar3);
  }
  func_0x000107c2798c(&lStack_80);
  lStack_90 = param_1 + 0x70;
  uStack_88 = 1;
  __ZNSt3__15mutex4lockEv();
  plVar4 = (long *)(param_1 + 0xb0);
  plVar5 = (long *)*plVar4;
  *plVar4 = (long)&lStack_a0;
  plVar6 = (long *)(param_1 + 0xb8);
  lStack_a0 = *plVar6;
  lStack_98 = *(long *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *plVar6 = 0;
  plVar2 = &lStack_a0;
  if ((lStack_98 == 0) ||
     (*(long **)(lStack_a0 + 0x10) = &lStack_a0, plVar2 = plVar5, *(long *)(param_1 + 0xc0) == 0)) {
    plVar5 = plVar2;
    *plVar4 = (long)plVar6;
    plStack_a8 = plVar5;
  }
  else {
    *(long **)(*plVar6 + 0x10) = plVar6;
    plStack_a8 = plVar5;
  }
  while (plVar5 != &lStack_a0) {
    plVar2 = plVar5 + 5;
    func_0x000107c278d0(plVar2,param_2);
    if (((ulong)plVar2 & 1) == 0) {
      plVar2 = plVar4;
      FUN_108986adc(plVar4,&uStack_68,(int)plVar5[4]);
      if (*plVar2 == 0) {
        lVar3 = 0x40;
        __Znwm();
        uStack_70 = 0;
        lStack_80 = lVar3;
        plStack_78 = plVar6;
        func_0x000107c28748(lVar3 + 0x20,plVar5 + 4);
        uStack_70 = CONCAT71(uStack_70._1_7_,1);
        FUN_108986b28(plVar4,uStack_68,plVar2,lVar3);
        lStack_80 = 0;
        func_0x000108986b7c(&lStack_80);
      }
    }
    func_0x000107c27be0();
  }
  func_0x0001089869c0(&plStack_a8);
  func_0x000108986c14();
  return;
}



/* Entry: 10898641c; end: 10898656b;  */

int FUN_10898641c(long param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined1 uStack_68;
  long *aplStack_60 [2];
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_10898656c(aplStack_60,param_1,param_2);
  if (aplStack_60[0] == (long *)0x0) {
    iVar6 = -1;
  }
  else {
    piVar1 = (int *)(param_1 + 200);
    do {
      iVar6 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    FUN_108988830(aplStack_60[0],iVar6,param_3);
    lStack_70 = param_1 + 0x70;
    uStack_68 = 1;
    __ZNSt3__15mutex4lockEv();
    (**(code **)(*aplStack_60[0] + 0x20))(&uStack_88);
    plVar4 = (long *)(param_1 + 0xb0);
    FUN_108986adc(plVar4,&uStack_38,iVar6);
    if (*plVar4 == 0) {
      lVar5 = 0x40;
      __Znwm();
      lStack_48 = param_1 + 0xb8;
      uStack_40 = 1;
      *(int *)(lVar5 + 0x20) = iVar6;
      *(undefined8 *)(lVar5 + 0x30) = uStack_80;
      *(undefined8 *)(lVar5 + 0x28) = uStack_88;
      *(undefined8 *)(lVar5 + 0x38) = uStack_78;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_78 = 0;
      FUN_108986b28(param_1 + 0xb0,uStack_38,plVar4,lVar5);
      uStack_50 = 0;
      func_0x000108986b7c(&uStack_50);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_88);
    func_0x000108986c14();
  }
  func_0x000108986a2c(aplStack_60);
  return iVar6;
}



/* Entry: 10898656c; end: 1089865e7;  */

void FUN_10898656c(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_40;
  undefined1 uStack_38;
  
  lStack_40 = param_2 + 0x18;
  uStack_38 = 1;
  __ZNSt3__15mutex4lockEv();
  lVar1 = param_2 + 0x58;
  FUN_108986a54(lVar1,param_3);
  if (param_2 + 0x60 == lVar1) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    FUN_108986748(param_1,lVar1 + 0x38);
  }
  func_0x000107c2798c(&lStack_40);
  return;
}



/* Entry: 1089865e8; end: 108986747;  */

void FUN_1089865e8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long alStack_78 [3];
  undefined1 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  lVar2 = param_1 + 0x70;
  uStack_60 = 1;
  lVar1 = lVar2;
  alStack_78[2] = lVar2;
  __ZNSt3__15mutex4lockEv();
  func_0x000108986c24();
  lVar3 = param_1 + 0xb8;
  if (lVar3 == lVar1) {
    alStack_78[0] = 0;
    alStack_78[1] = 0;
  }
  else {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (&lStack_58,lVar1 + 0x28);
  }
  func_0x000107c2798c(alStack_78 + 2);
  if (lVar3 != lVar1) {
    FUN_10898656c(alStack_78,param_1,&lStack_58);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_58);
  if (alStack_78[0] != 0) {
    uStack_50 = CONCAT71(uStack_50._1_7_,1);
    lStack_58 = lVar2;
    __ZNSt3__15mutex4lockEv();
    func_0x000108986c24();
    if (lVar3 != lVar2) {
      lVar3 = lVar2;
      func_0x000107c27be0();
      if (*(long *)(param_1 + 0xb0) == lVar2) {
        *(long *)(param_1 + 0xb0) = lVar3;
      }
      *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xc0) + -1;
      func_0x00010530d618(*(undefined8 *)(param_1 + 0xb8),lVar2);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar2 + 0x28);
      __ZdlPv(lVar2);
    }
    func_0x000107c2798c(&lStack_58);
    FUN_1089888c8(alStack_78[0],param_2);
  }
  func_0x000108986a2c(alStack_78);
  return;
}



/* Entry: 108986748; end: 108986787;  */

void FUN_108986748(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      *param_1 = *param_2;
    }
  }
  return;
}



/* Entry: 108986788; end: 10898678f;  */

void FUN_108986788(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 108986790; end: 1089867b7;  */

void FUN_108986790(long param_1)

{
  func_0x000108986a2c(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 1089867b8; end: 10898684f;  */

undefined1 * FUN_1089867b8(long *param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  long lStack_28;
  
  puVar2 = auStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = 1;
  FUN_108986850(auStack_40);
  puVar1 = puStack_30;
  *puStack_30 = &PTR_FUN_110aa2160;
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  puStack_30[3] = &PTR_FUN_110aa24d0;
  puStack_30 = (undefined8 *)0x0;
  *param_1 = (long)(puVar1 + 3);
  param_1[1] = (long)puVar1;
  func_0x0001089868cc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  *(undefined8 *)(puVar2 + 8) = uVar4;
  puVar3 = puVar2;
  FUN_108986878();
  *(undefined1 **)(puVar2 + 0x10) = puVar3;
  return puVar2;
}



/* Entry: 108986850; end: 108986877;  */

long FUN_108986850(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_108986878();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 108986878; end: 108986893;  */

void FUN_108986878(undefined8 *param_1,ulong param_2)

{
  if (param_2 >> 0x3b == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 5);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_110aa2160;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108986894; end: 108986897;  */

void FUN_108986894(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aa2160;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108986898; end: 1089868ab;  */

void FUN_108986898(void)

{
  func_0x0001089868bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1089868ac; end: 1089868db;  */

void FUN_1089868ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001089868b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1089868dc; end: 108986a53;  */

long FUN_1089868dc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 108986a54; end: 108986adb;  */

long * FUN_108986a54(long param_1,undefined8 param_2)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  plVar1 = (long *)(param_1 + 8);
  plVar4 = plVar1;
  plVar5 = plVar1;
  while (plVar6 = (long *)*plVar4, plVar6 != (long *)0x0) {
    lVar3 = (long)(plVar6 + 4);
    func_0x000107c27bd4(lVar3,param_2);
    bVar2 = -1 < (char)lVar3;
    lVar3 = 8;
    if (bVar2) {
      lVar3 = 0;
    }
    plVar4 = (long *)((long)plVar6 + lVar3);
    if (bVar2) {
      plVar5 = plVar6;
    }
  }
  if ((plVar1 == plVar5) || (func_0x000107c27bd4(param_2,plVar5 + 4), ((uint)param_2 >> 7 & 1) != 0)
     ) {
    plVar5 = plVar1;
  }
  return plVar5;
}



/* Entry: 108986adc; end: 108986b27;  */

long * FUN_108986adc(long param_1,undefined8 *param_2,int param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 8);
  plVar1 = (long *)(param_1 + 8);
  while (plVar2 = plVar1, plVar3 != (long *)0x0) {
    while (plVar2 = plVar3, (int)plVar2[4] <= param_3) {
      if (param_3 <= (int)plVar2[4]) goto LAB_108986b20;
      plVar1 = plVar2 + 1;
      plVar3 = (long *)*plVar1;
      if ((long *)*plVar1 == (long *)0x0) goto LAB_108986b20;
    }
    plVar1 = plVar2;
    plVar3 = (long *)*plVar2;
  }
LAB_108986b20:
  *param_2 = plVar2;
  return plVar1;
}



/* Entry: 108986b28; end: 108986bbf;  */

void FUN_108986b28(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  func_0x000107c27be4(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 108986bc0; end: 108986c2f;  */

long * FUN_108986bc0(long param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar1 = (long *)(param_1 + 8);
  plVar3 = plVar1;
  plVar4 = plVar1;
  while (plVar5 = (long *)*plVar4, plVar5 != (long *)0x0) {
    lVar2 = 8;
    if (param_2 <= *(int *)(plVar5 + 4)) {
      lVar2 = 0;
    }
    plVar4 = (long *)((long)plVar5 + lVar2);
    if (param_2 <= *(int *)(plVar5 + 4)) {
      plVar3 = plVar5;
    }
  }
  if ((plVar1 == plVar3) || (param_2 < (int)plVar3[4])) {
    plVar3 = plVar1;
  }
  return plVar3;
}



/* Entry: 108986c30; end: 108986daf;  */

undefined8 * FUN_108986c30(int param_1)

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  int unaff_w19;
  undefined1 *unaff_x20;
  long lVar6;
  undefined1 auStack_c8 [32];
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  undefined8 *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 auStack_78 [32];
  undefined1 auStack_58 [32];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  iVar4 = param_1;
  if (((bRam00000001138280f8 & 1) == 0) &&
     (func_0x000108987088(0x1138280f8), iVar4 = unaff_w19, param_1 != 0)) {
    func_0x000108987070();
    func_0x000108987094(0x1138280e0);
    func_0x000108987080();
    ___cxa_guard_release(0x1138280f8);
  }
  iVar3 = iVar4;
  if (((bRam0000000113828118 & 1) == 0) &&
     (func_0x000108987088(0x113828118), iVar3 = unaff_w19, iVar4 != 0)) {
    unaff_x20 = auStack_78;
    func_0x000108987070();
    func_0x0001089870a0(auStack_58,&DAT_10df7ae22);
    FUN_108986e60(0x113828100,auStack_78,2);
    lVar6 = 0x20;
    do {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(unaff_x20 + lVar6);
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != -0x20);
    ___cxa_guard_release(0x113828118);
  }
  bVar1 = iVar3 == 0;
  puVar5 = (undefined8 *)0x113828100;
  if (bVar1) {
    puVar5 = (undefined8 *)0x1138280e0;
  }
  func_0x0001089870ac(uStack_38);
  if (bVar1) {
    return puVar5;
  }
  ___stack_chk_fail();
  lVar6 = 0x20;
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(unaff_x20 + lVar6);
    lVar6 = lVar6 + -0x20;
    uVar2 = lVar6 == -0x20;
  } while (!(bool)uVar2);
  ___cxa_guard_abort();
  func_0x000108987068();
  pcStack_88 = FUN_108986db0;
  uStack_a8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_a0 = unaff_x20;
  puStack_98 = puVar5;
  puStack_90 = &stack0xfffffffffffffff0;
  if ((bRam0000000113828138 & 1) == 0) {
    iVar4 = 0x13828138;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      func_0x0001089870a0(auStack_c8,&DAT_10df7ae22);
      func_0x000108987094(0x113828120);
      func_0x000108987080();
      ___cxa_guard_release();
    }
  }
  func_0x0001089870ac(uStack_a8);
  if ((bool)uVar2) {
    return (undefined8 *)0x113828120;
  }
  ___stack_chk_fail();
  func_0x000108987080();
  puVar5 = (undefined8 *)0x113828138;
  ___cxa_guard_abort();
  func_0x000108987068();
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  FUN_108986e94();
  return puVar5;
}



/* Entry: 108986db0; end: 108986e5f;  */

undefined8 * FUN_108986db0(void)

{
  undefined1 in_ZR;
  int iVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113828138 & 1) == 0) {
    iVar1 = 0x13828138;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001089870a0(auStack_48,&DAT_10df7ae22);
      func_0x000108987094(0x113828120);
      func_0x000108987080();
      ___cxa_guard_release();
    }
  }
  func_0x0001089870ac(uStack_28);
  if ((bool)in_ZR) {
    return (undefined8 *)0x113828120;
  }
  ___stack_chk_fail();
  func_0x000108987080();
  puVar2 = (undefined8 *)0x113828138;
  ___cxa_guard_abort();
  func_0x000108987068();
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  FUN_108986e94();
  return puVar2;
}



/* Entry: 108986e60; end: 108986e93;  */

undefined8 * FUN_108986e60(undefined8 *param_1,long param_2,long param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_108986e94(param_1,param_2,param_2 + param_3 * 0x20,param_3);
  return param_1;
}



/* Entry: 108986e94; end: 108986f13;  */

void FUN_108986e94(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    func_0x000108981020(param_1,param_4);
    FUN_108986f14(param_1,param_2,param_3,param_4);
  }
  uStack_38 = 1;
  FUN_108986ff8(&uStack_40);
  return;
}



/* Entry: 108986f14; end: 108986f4b;  */

void FUN_108986f14(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  FUN_108986f4c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 108986f4c; end: 108986f5f;  */

void FUN_108986f4c(void)

{
  FUN_108986f60();
  return;
}



/* Entry: 108986f60; end: 108986ff7;  */

long FUN_108986f60(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_48 = 0;
  uStack_60 = param_1;
  lStack_40 = param_4;
  for (; lStack_38 = param_4, param_2 != param_3; param_2 = param_2 + 0x20) {
    FUN_108981144(param_4,param_2);
    param_4 = lStack_38 + 0x20;
  }
  uStack_48 = 1;
  FUN_108981170(&uStack_60);
  return param_4;
}



/* Entry: 108986ff8; end: 108987067;  */

long FUN_108986ff8(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x000108987028(param_1);
  }
  return param_1;
}



/* Entry: 108987068; end: 1089870bf;  */

void FUN_108987068(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 1089870c0; end: 1089871bb;  */

ulong FUN_1089870c0(long *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  
  pcVar2 = (char *)*param_1;
  uVar4 = param_1[1] & 0xffff;
  if (((uVar4 < 4) || (-0x41 < *pcVar2)) || ((pcVar2[1] & 0xf8U) != 200)) {
    pcVar3 = (char *)0x0;
    if (uVar4 != 0) {
      pcVar3 = pcVar2;
    }
    pcVar2 = pcVar3;
    func_0x000108ac8fbc();
    if ((int)pcVar2 == 0) {
LAB_108987168:
      uVar5 = 0;
      uVar4 = 0;
      uVar6 = 0;
      goto LAB_108987170;
    }
    pcVar3 = pcVar3 + 8;
    func_0x000108aa2148(pcVar3);
    uVar5 = (uint)pcVar3;
  }
  else {
    uVar5 = (uint)param_1[1] & 0xffff;
    pcVar3 = pcVar2;
    FUN_1089871bc(pcVar2,uVar5);
    if ((pcVar3 == (char *)0x0) &&
       (pcVar3 = pcVar2, func_0x000108987200(pcVar2,uVar5), pcVar3 == (char *)0x0)) {
      if ((uVar5 < 0xc) ||
         (((cVar1 = pcVar2[1], cVar1 != -0x32 && (cVar1 != -0x33)) && (cVar1 != -0x34)))) {
        func_0x000108987270(pcVar2,uVar5);
        pcVar3 = pcVar2;
        if (pcVar2 == (char *)0x0) goto LAB_108987168;
        goto LAB_10898711c;
      }
      uVar5 = *(uint *)(pcVar2 + 4);
    }
    else {
LAB_10898711c:
      uVar5 = *(uint *)(pcVar3 + 4);
    }
    uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
    uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
  }
  uVar6 = uVar5 & 0xffffff00;
  uVar4 = 0x100000000;
LAB_108987170:
  return uVar4 | (uVar6 | uVar5 & 0xff);
}



/* Entry: 1089871bc; end: 10898729b;  */

uint * FUN_1089871bc(uint *param_1,uint param_2)

{
  uint uVar1;
  
  if ((((param_2 < 0x1c) || (param_1 == (uint *)0x0)) || ((*param_1 & 0xff00) != 0xc800)) ||
     ((uVar1 = *param_1 >> 0x10, uVar1 != 0x600 && ((param_2 < 0x34 || (uVar1 != 0xc00)))))) {
    param_1 = (uint *)0x0;
  }
  return param_1;
}



/* Entry: 10898729c; end: 10898739b;  */

undefined8 *
FUN_10898729c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_44;
  
  uStack_88 = param_6[1];
  uStack_90 = *param_6;
  if (param_6[1] != 0) {
    plVar1 = (long *)(param_6[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_44 = (undefined4)param_5;
  uStack_60 = param_4;
  uStack_58 = param_8;
  uStack_50 = param_7;
  func_0x0001089873b4(&uStack_70,param_2,param_3,&uStack_44,&uStack_50,&uStack_58,&uStack_90,
                      &uStack_60);
  uStack_78 = uStack_68;
  uStack_80 = uStack_70;
  uStack_70 = 0;
  uStack_68 = 0;
  FUN_108987630(&uStack_70);
  func_0x00010897dde0(param_1,3,param_4,param_5,param_6,param_7,param_8,&uStack_80);
  func_0x00010897e37c(&uStack_80);
  FUN_108987658();
  *param_1 = &PTR_FUN_110aa21b0;
  return param_1;
}



/* Entry: 10898739c; end: 10898739f;  */

undefined8 * FUN_10898739c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aa17b0;
  FUN_10897e2fc(param_1 + 10);
  func_0x00010897e37c(param_1 + 8);
  func_0x00010897b3e4(param_1 + 4);
  return param_1;
}



/* Entry: 1089873a0; end: 1089873ef;  */

void FUN_1089873a0(void)

{
  FUN_10897de64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1089873f0; end: 1089874d3;  */

undefined1 *
FUN_1089873f0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_70 [16];
  long lStack_60;
  long lStack_58;
  
  puVar2 = auStack_70;
  puVar3 = auStack_70;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_1089874d4(auStack_70,1);
  FUN_10898752c(lStack_60,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  lVar1 = lStack_60;
  lStack_60 = 0;
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  func_0x000108987620();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x000108987620();
  func_0x000108987668();
  *(undefined8 *)(puVar3 + 8) = param_3;
  puVar2 = puVar3;
  FUN_1089874fc();
  *(undefined1 **)(puVar3 + 0x10) = puVar2;
  return puVar3;
}



/* Entry: 1089874d4; end: 1089874fb;  */

long FUN_1089874d4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_1089874fc();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1089874fc; end: 10898752b;  */

undefined8 * FUN_1089874fc(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x11a7b9611a7b962) {
    puVar1 = (undefined8 *)(param_2 * 0xe8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110aa21f0;
  FUN_108987598(param_1 + 3);
  return param_1;
}



/* Entry: 10898752c; end: 10898756f;  */

undefined8 * FUN_10898752c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110aa21f0;
  FUN_108987598(param_1 + 3);
  return param_1;
}



/* Entry: 108987570; end: 108987573;  */

void FUN_108987570(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aa21f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108987574; end: 108987587;  */

void FUN_108987574(void)

{
  FUN_108987610();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108987588; end: 108987597;  */

void FUN_108987588(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108987590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x40))();
  return;
}



/* Entry: 108987598; end: 10898760f;  */

undefined8
FUN_108987598(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = *param_4;
  uVar5 = *param_5;
  uVar6 = *param_6;
  uStack_28 = param_7[1];
  uStack_30 = *param_7;
  if (param_7[1] != 0) {
    plVar1 = (long *)(param_7[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_108987670(param_1,param_2,param_3,uVar2,uVar5,uVar6,&uStack_30,*param_8);
  FUN_108987658();
  return param_1;
}



/* Entry: 108987610; end: 10898762f;  */

void FUN_108987610(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aa21f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108987630; end: 108987657;  */

long FUN_108987630(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 108987658; end: 10898766f;  */

void FUN_108987658(void)

{
  func_0x00010897c5f4();
  if ((undefined1 *)register0x00000008 != (undefined1 *)0x0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 108987670; end: 108987773;  */

void FUN_108987670(long param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined8 param_8)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long unaff_x19;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar2 = param_6;
  func_0x000108987f5c();
  *(undefined8 *)(param_1 + 0x10) = param_2;
  uVar4 = param_7[1];
  uVar3 = *param_7;
  *param_7 = 0;
  param_7[1] = 0;
  *(undefined ***)(param_1 + 0x18) = &PTR_FUN_110aa29d8;
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  uStack_60 = 0;
  uStack_58 = 0;
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  func_0x00010897b3e4(&uStack_60);
  FUN_108b8149c(param_1 + 0x38,param_4);
  *(undefined8 *)(unaff_x19 + 0x70) = param_5;
  *(undefined8 *)(unaff_x19 + 0x78) = param_6;
  *(undefined8 *)(unaff_x19 + 0x80) = param_8;
  uStack_64 = 0xc;
  FUN_1089806ec(param_3,&uStack_64);
  uVar1 = *param_3;
  *(undefined8 *)(unaff_x19 + 0x90) = 0;
  *(undefined4 *)(unaff_x19 + 0x88) = uVar1;
  FUN_1089a00a0(unaff_x19 + 0x98);
  *(undefined1 *)(unaff_x19 + 200) = 0;
  *(undefined8 *)(unaff_x19 + 0xc0) = 0;
  return;
}



/* Entry: 108987774; end: 1089877bf;  */

void FUN_108987774(void)

{
  long unaff_x19;
  
  func_0x000108987f5c();
  FUN_1089877c0();
  func_0x000108987818();
  func_0x00010894d60c(unaff_x19 + 0xb0);
  FUN_108987f0c(unaff_x19 + 0x90);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(unaff_x19 + 0x40);
  func_0x00010897f638(unaff_x19 + 0x18);
  return;
}



/* Entry: 1089877c0; end: 108987877;  */

void FUN_1089877c0(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 200);
  *(undefined1 *)(param_1 + 200) = 0;
  if ((cVar1 == '\x01') && (*(long *)(param_1 + 0x90) != 0)) {
    FUN_1089800c8(*(undefined8 *)(param_1 + 0x10),0);
                    /* WARNING: Could not recover jumptable at 0x000108987808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x90) + 0xb8))();
    return;
  }
  return;
}



/* Entry: 108987878; end: 108987883;  */

void FUN_108987878(void)

{
  long unaff_x19;
  
  func_0x000108987f5c();
  FUN_1089877c0();
  func_0x000108987818();
  func_0x00010894d60c(unaff_x19 + 0xb0);
  FUN_108987f0c(unaff_x19 + 0x90);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(unaff_x19 + 0x40);
  func_0x00010897f638(unaff_x19 + 0x18);
  return;
}



/* Entry: 108987884; end: 108987897;  */

void FUN_108987884(void)

{
  FUN_108987774();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108987898; end: 10898789f;  */

void FUN_108987898(long param_1)

{
  FUN_108987774(param_1 + -8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1089878a0; end: 108987b4b;  */

void FUN_1089878a0(long param_1)

{
  undefined4 uVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined1 uStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined1 auStack_70 [64];
  
  bVar2 = *(byte *)(param_1 + 200);
  *(undefined1 *)(param_1 + 200) = 1;
  if ((bVar2 & 1) == 0) {
    if (*(long *)(param_1 + 0x90) == 0) {
      FUN_108989ddc(auStack_70,param_1 + 0x38);
      (**(code **)(**(long **)(param_1 + 0x70) + 0x20))(&plStack_80);
      plVar4 = plStack_80;
      plVar3 = *(long **)(param_1 + 0x70);
      (**(code **)(*plVar3 + 0x38))();
      uStack_98 = CONCAT44(uStack_98._4_4_,*(undefined4 *)(param_1 + 0x38));
      uStack_90 = 0;
      uStack_88 = 0;
      (**(code **)(*plVar4 + 0x30))(&plStack_78,plVar4,plVar3,auStack_70,&uStack_98);
      FUN_108981388(&plStack_80);
      (**(code **)(*plStack_78 + 0xa0))(plStack_78,*(undefined4 *)(param_1 + 0x60));
      (**(code **)(*plStack_78 + 0xc0))(plStack_78,0x28);
      plVar4 = *(long **)(param_1 + 0x70);
      (**(code **)(*plVar4 + 0x38))();
      plStack_80 = (long *)CONCAT35(plStack_80._5_3_,0x1010001);
      uVar1 = *(undefined4 *)(param_1 + 0x88);
      uStack_98 = 0;
      plVar3 = *(long **)(param_1 + 0x78);
      (**(code **)(*plVar3 + 0x68))();
      func_0x000108a0db54(&plStack_a0,plVar4,param_1 + 0x18,0,0,&plStack_80,0,5000,uVar1,&uStack_98,
                          plVar3);
      FUN_108987ed8(&uStack_98);
      (**(code **)(*plStack_a0 + 0x40))(plStack_a0,1,1);
      plStack_80 = plStack_78;
      plStack_78 = (long *)0x0;
      (**(code **)(*plStack_a0 + 0x20))
                (plStack_a0,*(undefined4 *)(param_1 + 0x38),auStack_70,&plStack_80);
      plVar4 = plStack_80;
      plStack_80 = (long *)0x0;
      if (plVar4 != (long *)0x0) {
        FUN_108987f38();
      }
      plVar4 = plStack_a0;
      plVar3 = *(long **)(param_1 + 0x78);
      (**(code **)(*plVar3 + 0x68))();
      (**(code **)(*plVar4 + 0x48))(plVar4,plVar3);
      plVar4 = plStack_78;
      plStack_78 = (long *)0x0;
      if (plVar4 != (long *)0x0) {
        FUN_108987f38();
      }
      func_0x0001089f783c(auStack_70);
      plVar4 = plStack_a0;
      plStack_a0 = (long *)0x0;
      lVar5 = *(long *)(param_1 + 0x90);
      *(long **)(param_1 + 0x90) = plVar4;
      if (lVar5 != 0) {
        FUN_108987f38();
        plVar4 = plStack_a0;
        plStack_a0 = (long *)0x0;
        if (plVar4 != (long *)0x0) {
          FUN_108987f38();
        }
      }
    }
    *(undefined8 *)(param_1 + 0x98) = 0;
    if (*(char *)(param_1 + 0xa8) == '\x01') {
      *(undefined1 *)(param_1 + 0xa8) = 0;
    }
    (**(code **)(**(long **)(param_1 + 0x90) + 0xb0))();
    FUN_1089800c8(*(undefined8 *)(param_1 + 0x10),param_1 + 8);
  }
  return;
}



/* Entry: 108987b4c; end: 108987b4f;  */

void FUN_108987b4c(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 200);
  *(undefined1 *)(param_1 + 200) = 0;
  if ((cVar1 == '\x01') && (*(long *)(param_1 + 0x90) != 0)) {
    FUN_1089800c8(*(undefined8 *)(param_1 + 0x10),0);
                    /* WARNING: Could not recover jumptable at 0x000108987808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x90) + 0xb8))();
    return;
  }
  return;
}



/* Entry: 108987b50; end: 108987d2f;  */

void FUN_108987b50(long param_1,undefined4 *param_2)

{
  int iVar1;
  ulong uVar2;
  undefined ***pppuVar3;
  int iVar4;
  undefined ***pppuVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  undefined **ppuStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined1 auStack_98 [8];
  long lStack_90;
  long lStack_88;
  int iStack_78;
  long lStack_60;
  long lStack_58;
  
  pppuVar5 = &ppuStack_c0;
  pppuVar3 = &ppuStack_c0;
  if ((*(char *)(param_1 + 200) == '\x01') && (*(long **)(param_1 + 0x90) != (long *)0x0)) {
    (**(code **)(**(long **)(param_1 + 0x90) + 0x18))(auStack_98);
    if (iStack_78 == 0) {
      *(undefined8 *)(param_1 + 0x98) = 0;
      if (*(char *)(param_1 + 0xa8) == '\x01') {
        *(undefined1 *)(param_1 + 0xa8) = 0;
      }
      *(undefined8 *)(param_1 + 0xc0) = 0;
    }
    else {
      uVar2 = param_1 + 0x98;
      FUN_1089a00f0(uVar2,lStack_88 + lStack_90);
      for (lVar6 = lStack_60; lVar6 != lStack_58; lVar6 = lVar6 + 0x40) {
        if (*(int *)(lVar6 + 4) == *(int *)(param_1 + 0x88)) {
          if (*(long *)(lVar6 + 0x38) == 0) {
            pppuVar5 = (undefined ***)0xffffffffffffffff;
          }
          else {
            ppuStack_c0 = *(undefined ***)(lVar6 + 0x28);
            FUN_1089801c8();
          }
          ppuStack_c0 = (undefined **)0x0;
          if ((long)*(int *)(param_1 + 0x58) != 0) {
            ppuStack_c0 = (undefined **)
                          ((long)((ulong)*(uint *)(lVar6 + 0x14) * 1000000) /
                          (long)*(int *)(param_1 + 0x58));
          }
          FUN_1089801c8();
          iVar4 = *(int *)(lVar6 + 0xc);
          goto LAB_108987c50;
        }
      }
      iVar4 = 0;
      pppuVar3 = (undefined ***)0xffffffff;
      pppuVar5 = (undefined ***)0xffffffffffffffff;
LAB_108987c50:
      iVar1 = 0;
      if (uVar2 >> 0x20 != 0) {
        iVar1 = (int)uVar2 << 3;
      }
      iVar7 = (int)*(undefined8 *)(param_1 + 0xc0);
      iVar8 = (int)((ulong)*(undefined8 *)(param_1 + 0xc0) >> 0x20);
      *(int *)(param_1 + 0xc0) = iStack_78;
      *(int *)(param_1 + 0xc4) = iVar4;
      *param_2 = (int)pppuVar3;
      param_2[1] = iVar1;
      *(char *)(param_2 + 2) = (char)(uVar2 >> 0x20);
      param_2[3] = 0;
      *(undefined ****)(param_2 + 4) = pppuVar5;
      *(ulong *)(param_2 + 6) =
           CONCAT44(-(uint)(iVar8 < iVar4),-(uint)(iVar7 < iStack_78)) &
           CONCAT44(iVar4 - iVar8,iStack_78 - iVar7);
      *(undefined8 *)(param_2 + 8) = 0;
      *(undefined8 *)(param_2 + 10) = 0;
      if ((*(byte *)(param_2 + 0xc) & 1) == 0) {
        *(undefined1 *)(param_2 + 0xc) = 1;
      }
      if ((int)(uVar2 >> 0x20) == 1) {
        FUN_1089a3c0c();
        uStack_b0 = 0;
        uStack_a8 = 0;
        ppuStack_c0 = &PTR_DAT_1107eac58;
        uStack_b8 = 0;
        uStack_a0 = 0x14;
        (**(code **)((long)**pppuVar3 + 0x10))(*pppuVar3,&ppuStack_c0,(long)(iVar1 / 1000));
        func_0x000108987f54();
      }
    }
    func_0x000108987f74();
  }
  return;
}



/* Entry: 108987d30; end: 108987e0b;  */

void FUN_108987d30(undefined8 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined8 uStack_38;
  undefined4 *puStack_30;
  undefined1 uStack_28;
  
  ppuStack_60 = (undefined **)CONCAT44(ppuStack_60._4_4_,0xc);
  FUN_1089806ec(param_2,&ppuStack_60);
  *(undefined4 *)(param_1 + 0x11) = *param_2;
  if (param_1[0x12] != 0) {
    uStack_38 = 0;
    __ZNSt3__16chrono12steady_clock3nowEv();
    uStack_28 = 1;
    puStack_30 = param_2;
    func_0x000108987818(param_1);
    if (*(char *)(param_1 + 0x19) == '\x01') {
      *(undefined1 *)(param_1 + 0x19) = 0;
      (**(code **)*param_1)();
      FUN_1089a3c0c();
      uStack_50 = 0;
      uStack_48 = 0;
      ppuStack_60 = &PTR_DAT_1107eac58;
      uStack_58 = 0;
      uStack_40 = 0x58;
      puVar1 = &uStack_38;
      func_0x000107c28148(puVar1);
      (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,&ppuStack_60,puVar1);
      func_0x000108987f54();
    }
  }
  return;
}



/* Entry: 108987e0c; end: 108987e2b;  */

void FUN_108987e0c(long param_1,undefined8 *param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x90);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000108987e24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1,*param_2,param_2[1]);
    return;
  }
  return;
}



/* Entry: 108987e2c; end: 108987e93;  */

void FUN_108987e2c(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uStack_28;
  
  if ((*(char *)(param_1 + 200) == '\x01') &&
     (plVar1 = *(long **)(param_1 + 0x90), plVar1 != (long *)0x0)) {
    uStack_28 = *param_2;
    *param_2 = 0;
    (**(code **)(*plVar1 + 0xa0))(plVar1,&uStack_28);
    func_0x00010898026c(&uStack_28);
  }
  return;
}



/* Entry: 108987e94; end: 108987eab;  */

void FUN_108987e94(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uStack_28;
  
  if ((*(char *)(param_1 + 0xc0) == '\x01') &&
     (plVar1 = *(long **)(param_1 + 0x88), plVar1 != (long *)0x0)) {
    uStack_28 = *param_2;
    *param_2 = 0;
    (**(code **)(*plVar1 + 0xa0))(plVar1,&uStack_28);
    func_0x00010898026c(&uStack_28);
  }
  return;
}



/* Entry: 108987eac; end: 108987ed7;  */

long * FUN_108987eac(long *param_1)

{
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 108987ed8; end: 108987f0b;  */

long * FUN_108987ed8(long *param_1)

{
  if ((long *)*param_1 != (long *)0x0) {
    (**(code **)(*(long *)*param_1 + 8))();
  }
  return param_1;
}



/* Entry: 108987f0c; end: 108987f37;  */

long * FUN_108987f0c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    FUN_108987f38();
  }
  return param_1;
}



/* Entry: 108987f38; end: 108987f7f;  */

void FUN_108987f38(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108987f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 108987f80; end: 108987ff3;  */

int FUN_108987f80(int param_1)

{
  int iVar1;
  int *piVar2;
  int aiStack_a4 [33];
  
  _memcpy(aiStack_a4,&UNK_10df7af3c,0x84);
  piVar2 = aiStack_a4;
  FUN_108987ff4(piVar2,(long)(param_1 / 1000));
  iVar1 = 0x1c;
  if (*piVar2 != 0 || param_1 < 0xfb) {
    iVar1 = (*piVar2 * 0xff) / 9;
  }
  return iVar1;
}



/* Entry: 108987ff4; end: 108988017;  */

ulong FUN_108987ff4(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_34;
  
  if (0x20 < param_2) {
    uStack_34 = 0xf4edd24;
    func_0x000104c03f28();
    uStack_58 = 0xffffffedffffffea;
    uStack_60 = 0xffffffe5ffffffd3;
    uStack_48 = 0xfffffffbfffffff9;
    uStack_50 = 0xfffffff6fffffff1;
    uStack_40 = 0xfffffffc;
    puVar1 = &UNK_10df7afe4;
    FUN_108988084(&UNK_10df7afe4,&uStack_60,&uStack_34);
    return (ulong)(uint)(((int)((ulong)((long)puVar1 - (long)&uStack_60) >> 2) * 0xff) / 9);
  }
  return param_1 + param_2 * 4;
}



/* Entry: 108988018; end: 108988083;  */

int FUN_108988018(undefined4 param_1)

{
  undefined *puVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_24;
  
  uStack_48 = 0xffffffedffffffea;
  uStack_50 = 0xffffffe5ffffffd3;
  uStack_38 = 0xfffffffbfffffff9;
  uStack_40 = 0xfffffff6fffffff1;
  uStack_30 = 0xfffffffc;
  puVar1 = &UNK_10df7afe4;
  uStack_24 = param_1;
  FUN_108988084(&UNK_10df7afe4,&uStack_50,&uStack_24);
  return ((int)((ulong)((long)puVar1 - (long)&uStack_50) >> 2) * 0xff) / 9;
}



/* Entry: 108988084; end: 1089880bb;  */

void FUN_108988084(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puStack_20;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  puStack_20 = &uStack_11;
  FUN_1089880bc(param_2,param_3,9,&puStack_20,&uStack_12);
  return;
}



/* Entry: 1089880bc; end: 1089880ef;  */

void FUN_1089880bc(int *param_1,int *param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  while (param_3 != 0) {
    uVar2 = param_3 >> 1;
    uVar1 = param_3 + (param_3 >> 1 ^ 0xffffffffffffffff);
    param_3 = uVar2;
    if (param_1[uVar2] <= *param_2) {
      param_3 = uVar1;
      param_1 = param_1 + uVar2 + 1;
    }
  }
  return;
}



/* Entry: 1089880f0; end: 1089882b3;  */

undefined8 * FUN_1089880f0(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  undefined1 auStack_78 [24];
  ulong uStack_60;
  undefined8 uStack_58;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110aa2318;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = *param_2;
  param_1[7] = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  param_1[0xb] = 0x32aaaba7;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0xffffffffffffffff;
  param_1[0x14] = 0x32aaaba7;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1b] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = param_1 + 0x1d;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x24] = 0;
  lVar4 = 0x28;
  __Znwm();
  param_1[0x20] = lVar4;
  param_1[0x21] = lVar4 + 0x28;
  param_1[0x22] = lVar4;
  param_1[0x23] = lVar4;
  *(undefined1 *)(param_1 + 0x25) = 0;
  *(undefined1 *)((long)param_1 + 300) = 0;
  *(undefined1 *)((long)param_1 + 0x134) = 0;
  if ((long *)param_1[6] == (long *)0x0) {
    do {
      uVar3 = uRam000000011372cf68;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372cf68,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        uRam000000011372cf68 = uRam000000011372cf68 + 1;
      }
    } while (cVar1 != '\0');
    uStack_60 = (ulong)uVar3;
    uStack_58 = 0;
    func_0x000107c2793c(&UNK_10f4edd2e);
    func_0x000107c3173c(auStack_78);
  }
  else {
    (**(code **)(*(long *)param_1[6] + 0x10))(auStack_78);
  }
  func_0x000107c27b9c(param_1 + 3,auStack_78);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_78);
  return param_1;
}



/* Entry: 1089882b4; end: 10898831f;  */

undefined8 * FUN_1089882b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aa2318;
  FUN_108988b58(param_1 + 0x20);
  func_0x000108988af8(param_1 + 0x1c);
  __ZNSt3__15mutexD1Ev(param_1 + 0x14);
  __ZNSt3__15mutexD1Ev(param_1 + 0xb);
  FUN_10897c0d0(param_1 + 9);
  FUN_1089493c4(param_1 + 6);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 3);
  func_0x000108986998(param_1 + 1);
  return param_1;
}



/* Entry: 108988320; end: 108988323;  */

undefined8 * FUN_108988320(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aa2318;
  FUN_108988b58(param_1 + 0x20);
  func_0x000108988af8(param_1 + 0x1c);
  __ZNSt3__15mutexD1Ev(param_1 + 0x14);
  __ZNSt3__15mutexD1Ev(param_1 + 0xb);
  FUN_10897c0d0(param_1 + 9);
  FUN_1089493c4(param_1 + 6);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 3);
  func_0x000108986998(param_1 + 1);
  return param_1;
}



/* Entry: 108988324; end: 108988337;  */

void FUN_108988324(void)

{
  FUN_1089882b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108988338; end: 10898834b;  */

void FUN_108988338(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__110346330)
            (param_1,param_2 + 0x18);
  return;
}



/* Entry: 10898834c; end: 10898839b;  */

void FUN_10898834c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  int extraout_w10;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_3[1];
  uVar1 = *param_3;
  if (param_3[1] != 0) {
    do {
      func_0x000108989030();
    } while (extraout_w10 != 0);
  }
  uStack_28 = *(undefined8 *)(param_1 + 0x50);
  uStack_30 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  FUN_10897c0d0(&uStack_30);
  *(undefined8 *)(param_1 + 0xf8) = param_2;
  return;
}



/* Entry: 10898839c; end: 108988453;  */

void FUN_10898839c(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 auStack_40 [2];
  
  plVar1 = *(long **)(param_1 + 0x30);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,*param_2 + 0x18);
  }
  FUN_108988454(param_1,*(undefined4 *)(*param_2 + 8),*(undefined4 *)(*param_2 + 0xc));
  func_0x000108989090(param_1 + 0xa0);
  lVar2 = *(long *)(param_1 + 0xe0);
  while (lVar2 != param_1 + 0xe8) {
    (**(code **)(**(long **)(lVar2 + 0x28) + 0x18))(*(long **)(lVar2 + 0x28),*param_2 + 0x18);
    func_0x000107c27be0();
  }
  func_0x0001089890f0();
  auStack_40[0] = *(undefined8 *)(*param_2 + 8);
  func_0x0001089884a4(param_1,auStack_40);
  return;
}



/* Entry: 108988454; end: 10898858b;  */

void FUN_108988454(long param_1,int param_2,int param_3)

{
  func_0x000108989090(param_1 + 0x58);
  if ((*(int *)(param_1 + 0x98) != param_2) || (*(int *)(param_1 + 0x9c) != param_3)) {
    *(int *)(param_1 + 0x98) = param_2;
    *(int *)(param_1 + 0x9c) = param_3;
  }
  func_0x0001089890f0();
  return;
}



/* Entry: 10898858c; end: 1089886d3;  */

void FUN_10898858c(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  uint uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  long lStack_c4;
  int iStack_bc;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long *plStack_80;
  long lStack_78;
  undefined1 uStack_70;
  
  FUN_108988454(param_1,*(undefined4 *)(*param_2 + 0x78),*(undefined4 *)(*param_2 + 0x7c));
  lStack_78 = param_1 + 0xa0;
  uStack_70 = 1;
  __ZNSt3__15mutex4lockEv();
  lVar9 = *(long *)(param_1 + 0xe0);
  while (lVar9 != param_1 + 0xe8) {
    plVar8 = (long *)*param_2;
    bVar4 = *(byte *)(plVar8 + 8);
    lVar12 = plVar8[0xf];
    iVar5 = *(int *)((long)plVar8 + 0x7c);
    lVar13 = plVar8[0xd];
    lVar6 = plVar8[0xd];
    iVar3 = *(int *)((long)plVar8 + 0x6c);
    lVar7 = plVar8[0xe];
    lVar1 = plVar8[9];
    lVar2 = plVar8[10];
    lVar11 = plVar8[0xb];
    lVar10 = plVar8[0x11];
    (**(code **)(*plVar8 + 0x18))();
    lStack_90 = (long)(int)lVar7 * (long)iVar5;
    lStack_a0 = (long)iVar3 * (long)iVar5;
    lStack_b0 = (long)(int)lVar6 * (long)iVar5;
    uStack_d0 = (uint)bVar4;
    uStack_cc = (undefined4)lVar12;
    uStack_c8 = (undefined4)((ulong)lVar12 >> 0x20);
    lStack_c4 = lVar13;
    iStack_bc = (int)lVar7;
    lStack_b8 = lVar1;
    lStack_a8 = lVar2;
    lStack_98 = lVar11;
    lStack_88 = lVar10;
    plStack_80 = plVar8;
    (**(code **)(**(long **)(lVar9 + 0x28) + 0x10))(*(long **)(lVar9 + 0x28),&uStack_d0);
    func_0x000107c27be0();
  }
  func_0x000107c2798c(&lStack_78);
  uStack_d0 = (uint)*(undefined8 *)(*param_2 + 0x78);
  uStack_cc = (undefined4)((ulong)*(undefined8 *)(*param_2 + 0x78) >> 0x20);
  func_0x0001089884a4(param_1,&uStack_d0);
  return;
}



/* Entry: 1089886d4; end: 10898882f;  */

void FUN_1089886d4(long param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  int extraout_w10_00;
  long *plVar3;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  undefined8 *puStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  plVar3 = *(long **)(param_1 + 0x40);
  uStack_68 = *(undefined8 *)(param_1 + 0x10);
  uStack_70 = *(undefined8 *)(param_1 + 8);
  if (*(long *)(param_1 + 0x10) != 0) {
    do {
      func_0x000108989030();
    } while (extraout_w10 != 0);
  }
  __ZNSt3__16chrono12steady_clock3nowEv();
  lStack_58 = plVar3[0xf];
  lStack_60 = plVar3[0xe];
  if (plVar3[0xf] != 0) {
    do {
      func_0x000108989030();
    } while (extraout_w10_00 != 0);
  }
  __ZNSt3__15mutex4lockEv(plVar3 + 2);
  if ((*(byte *)(plVar3 + 1) & 1) != 0) {
    func_0x00010898912c();
    if (!(bool)in_CY || (bool)in_ZR) {
      FUN_108b851fc(plVar3);
      func_0x00010898912c();
      if (!(bool)in_CY) goto LAB_1089887c8;
    }
    lVar2 = plVar3[0x34];
    plVar3[0x34] = lVar2 + 1;
    puVar1 = (undefined8 *)0x28;
    __Znwm();
    lStack_40 = lStack_58;
    lStack_38 = param_1 + 10000000000;
    *(undefined4 *)(puVar1 + 1) = 0;
    puVar1[2] = lVar2 + 1;
    *puVar1 = &PTR_FUN_110aa23d0;
    puVar1[4] = uStack_68;
    puVar1[3] = uStack_70;
    uStack_70 = 0;
    uStack_68 = 0;
    lStack_58 = 0;
    lStack_48 = lStack_60;
    lStack_60 = 0;
    puStack_50 = puVar1;
    (**(code **)(*plVar3 + 0x10))(plVar3,&puStack_50);
    FUN_10897dd3c(&puStack_50);
  }
LAB_1089887c8:
  __ZNSt3__15mutex6unlockEv(plVar3 + 2);
  func_0x00010897dd64(&lStack_60);
  func_0x000108986998(&uStack_70);
  return;
}



/* Entry: 108988830; end: 1089888af;  */

void FUN_108988830(long param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 uStack_34;
  
  uStack_34 = param_2;
  __ZNSt3__15mutex4lockEv();
  FUN_1089888b0(param_1 + 0xe0,&uStack_34,param_3);
  func_0x000108989060();
  __ZNSt3__15mutex4lockEv();
  *(undefined8 *)(param_1 + 0x98) = 0;
  func_0x000108989060();
  return;
}



/* Entry: 1089888b0; end: 1089888c7;  */

void FUN_1089888b0(void)

{
  FUN_108988b94();
  return;
}



/* Entry: 1089888c8; end: 10898891f;  */

void FUN_1089888c8(long param_1,undefined4 param_2)

{
  undefined4 uStack_24;
  
  uStack_24 = param_2;
  __ZNSt3__15mutex4lockEv();
  func_0x000108988dd4(param_1 + 0xe0,&uStack_24);
  func_0x000108989060();
  return;
}



/* Entry: 108988920; end: 108988947;  */

undefined8 * FUN_108988920(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  
  func_0x00010898910c();
  puVar1 = param_1;
  FUN_108988948();
  func_0x000108989040();
  func_0x000108989100();
  func_0x000108989058();
  func_0x000108989118();
  *puVar1 = extraout_x8;
  FUN_108988988(puVar1 + 1);
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  func_0x0001089890a0();
  param_1[3] = extraout_x8_00;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 108988948; end: 10898894f;  */

void FUN_108988948(undefined8 *param_1)

{
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long unaff_x19;
  
  func_0x000108989118();
  *param_1 = extraout_x8;
  FUN_108988988(param_1 + 1);
  *(undefined8 *)(unaff_x19 + 0x28) = 0;
  *(undefined8 *)(unaff_x19 + 0x30) = 0;
  *(undefined4 *)(unaff_x19 + 0x38) = 0xffffffff;
  func_0x0001089890a0();
  *(undefined8 *)(unaff_x19 + 0x18) = extraout_x8_00;
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
  return;
}



/* Entry: 108988950; end: 108988987;  */

void FUN_108988950(undefined8 *param_1)

{
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long unaff_x19;
  
  func_0x000108989118();
  *param_1 = extraout_x8;
  FUN_108988988(param_1 + 1);
  *(undefined8 *)(unaff_x19 + 0x28) = 0;
  *(undefined8 *)(unaff_x19 + 0x30) = 0;
  *(undefined4 *)(unaff_x19 + 0x38) = 0xffffffff;
  func_0x0001089890a0();
  *(undefined8 *)(unaff_x19 + 0x18) = extraout_x8_00;
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
  return;
}



/* Entry: 108988988; end: 1089889ab;  */

void FUN_108988988(long *param_1)

{
  __ZNSt11logic_errorC2ERKS_();
  *param_1 = (long)(PTR___ZTVSt12length_error_110346b58 + 0x10);
  return;
}



/* Entry: 1089889ac; end: 108988a0f;  */

long FUN_1089889ac(long param_1)

{
  long lVar1;
  
  lVar1 = 0x40;
  __Znwm(0x40);
  FUN_108988a70();
  func_0x00010530126c(lVar1 + 0x18,param_1 + 0x18);
  return lVar1;
}



/* Entry: 108988a10; end: 108988a37;  */

void FUN_108988a10(void)

{
  func_0x00010898910c();
  func_0x000108988a6c();
  func_0x000108989040();
  func_0x000108989100();
  func_0x000108989058();
  FUN_108988acc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108988a38; end: 108988a4b;  */

void FUN_108988a38(void)

{
  FUN_108988acc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108988a4c; end: 108988a6f;  */

long FUN_108988a4c(long param_1)

{
  func_0x0001053010fc(param_1 + 0x10);
  __ZNSt12length_errorD2Ev(param_1);
  return param_1 + -8;
}



/* Entry: 108988a70; end: 108988acb;  */

void FUN_108988a70(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long unaff_x19;
  
  lVar1 = param_2;
  func_0x000108989118();
  *param_1 = extraout_x8;
  FUN_108988988(param_1 + 1,lVar1 + 8);
  func_0x000105301370(param_1 + 3,param_2 + 0x18);
  func_0x0001089890a0();
  *(undefined8 *)(unaff_x19 + 0x18) = extraout_x8_00;
  return;
}



/* Entry: 108988acc; end: 108988b57;  */

long FUN_108988acc(long param_1)

{
  func_0x0001053010fc(param_1 + 0x18);
  __ZNSt12length_errorD2Ev(param_1 + 8);
  return param_1;
}



/* Entry: 108988b58; end: 108988b93;  */

void FUN_108988b58(long *param_1)

{
  long lVar1;
  long lVar2;
  
  for (lVar2 = param_1[4]; lVar2 != 0; lVar2 = lVar2 + -1) {
    lVar1 = param_1[2];
    param_1[2] = lVar1 + 8;
    if (lVar1 + 8 == param_1[1]) {
      param_1[2] = *param_1;
    }
  }
  if (*param_1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108988b94; end: 108988bb3;  */

void FUN_108988b94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_108988bb4(param_1,param_2,param_2,param_3);
  return;
}



/* Entry: 108988bb4; end: 108988c4f;  */

undefined1  [16]
FUN_108988bb4(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long alStack_60 [3];
  undefined8 uStack_48;
  
  plVar2 = param_1;
  FUN_108988c50(param_1,&uStack_48,param_2);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    FUN_108988ca0(alStack_60,param_1,param_3,param_4);
    FUN_108988d00(param_1,uStack_48,plVar2,alStack_60[0]);
    lVar3 = alStack_60[0];
    alStack_60[0] = 0;
    func_0x000108988d54(alStack_60);
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 108988c50; end: 108988c9f;  */

long * FUN_108988c50(long param_1,long *param_2,int *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar1 = (long *)(param_1 + 8);
  plVar2 = plVar1;
  if ((long *)*plVar1 != (long *)0x0) {
    plVar3 = (long *)*plVar1;
    do {
      while (plVar2 = plVar3, (int)plVar3[4] <= *param_3) {
        if (*param_3 <= (int)plVar3[4]) goto LAB_108988c98;
        plVar1 = plVar3 + 1;
        plVar3 = (long *)*plVar1;
        if ((long *)*plVar1 == (long *)0x0) goto LAB_108988c98;
      }
      plVar4 = (long *)*plVar3;
      plVar1 = plVar3;
      plVar3 = plVar4;
    } while (plVar4 != (long *)0x0);
  }
LAB_108988c98:
  *param_2 = (long)plVar2;
  return plVar1;
}



/* Entry: 108988ca0; end: 108988cff;  */

void FUN_108988ca0(long *param_1,long param_2,undefined4 *param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  lVar1 = 0x38;
  __Znwm();
  *param_1 = lVar1;
  param_1[1] = param_2 + 8;
  param_1[2] = 1;
  *(undefined4 *)(lVar1 + 0x20) = *param_3;
  lVar2 = param_4[1];
  uVar3 = *param_4;
  *(undefined8 *)(lVar1 + 0x30) = param_4[1];
  *(undefined8 *)(lVar1 + 0x28) = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000108989030();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 108988d00; end: 108988d77;  */

void FUN_108988d00(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  func_0x000107c27be4(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 108988d78; end: 108988d8f;  */

void FUN_108988d78(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    func_0x0001089890f8();
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 108988d90; end: 108988e87;  */

void FUN_108988d90(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x0001089890f8();
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 108988e88; end: 108988eb3;  */

long FUN_108988e88(undefined8 param_1,int *param_2,long param_3,long param_4)

{
  long lVar1;
  
  for (; param_3 != 0; param_3 = *(long *)(param_3 + lVar1)) {
    lVar1 = 8;
    if (*param_2 <= *(int *)(param_3 + 0x20)) {
      lVar1 = 0;
      param_4 = param_3;
    }
  }
  return param_4;
}



/* Entry: 108988eb4; end: 108988f07;  */

long FUN_108988eb4(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2;
  func_0x000107c27be0();
  if (*param_1 == param_2) {
    *param_1 = lVar1;
  }
  param_1[2] = param_1[2] + -1;
  func_0x00010530d618(param_1[1],param_2);
  return lVar1;
}



/* Entry: 108988f08; end: 108988f33;  */

undefined8 * FUN_108988f08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aa23d0;
  func_0x000108986998(param_1 + 3);
  return param_1;
}



/* Entry: 108988f34; end: 108988f47;  */

void FUN_108988f34(void)

{
  FUN_108988f08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


