/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1072d5994; end: 1072d59ab;  */

void FUN_1072d5994(long *param_1,long param_2)

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



/* Entry: 1072d59ac; end: 1072d59f7;  */

long FUN_1072d59ac(long param_1)

{
  func_0x00010028ad98(param_1 + 0x110);
  func_0x0001001148fc(param_1 + 0xd8);
  func_0x0001001148fc(param_1 + 0x98);
  FUN_1072d59f8(param_1 + 0x48);
  func_0x0001001148fc(param_1 + 0x28);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x10);
  return param_1;
}



/* Entry: 1072d59f8; end: 1072d5a17;  */

void FUN_1072d59f8(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  return;
}



/* Entry: 1072d5a18; end: 1072d5a77;  */

long FUN_1072d5a18(long param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)param_2[3];
  if (plVar1 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (plVar1 == param_2) {
    *(long *)(param_1 + 0x18) = param_1;
    (**(code **)(*(long *)param_2[3] + 0x18))((long *)param_2[3],param_1);
  }
  else {
    (**(code **)(*plVar1 + 0x10))();
    *(long **)(param_1 + 0x18) = plVar1;
  }
  return param_1;
}



/* Entry: 1072d5a78; end: 1072d5b8b;  */

long * FUN_1072d5a78(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  int extraout_w10;
  long lVar2;
  
  func_0x0001073af260();
  FUN_10725b034(param_1);
  param_1[2] = (long)param_1;
  plVar1 = (long *)*param_1;
  lVar2 = *plVar1;
  param_1[4] = plVar1[1];
  param_1[3] = lVar2;
  if (plVar1[1] != 0) {
    do {
      func_0x0001072d666c();
    } while (extraout_w10 != 0);
  }
  param_1[5] = 0x1234567811111111;
  lVar2 = *param_2;
  param_1[7] = param_2[1];
  param_1[6] = lVar2;
  *param_2 = 0;
  param_2[1] = 0;
  lVar2 = *param_3;
  param_1[10] = param_3[1];
  param_1[9] = lVar2;
  *(undefined4 *)(param_1 + 8) = 0x87654321;
  *param_3 = 0;
  param_3[1] = 0;
  __ZNSt3__119__shared_mutex_baseC1Ev(param_1 + 0xb);
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x3f800000;
  param_1[0x25] = (long)param_1;
  param_1[0x26] = 0;
  FUN_10726ed14(param_1 + 0x27);
  param_1[0x29] = (long)param_1;
  if (param_1[6] == 0) {
    *(undefined4 *)(param_1 + 5) = 0x22222222;
  }
  return param_1;
}



/* Entry: 1072d5b8c; end: 1072d5be7;  */

void FUN_1072d5b8c(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)*(long *)(param_1 + 0xb8);
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    func_0x0001072aca78(plVar1 + 3);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *(long *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x70);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1);
  return;
}



/* Entry: 1072d5be8; end: 1072d5c0b;  */

undefined8 FUN_1072d5be8(undefined8 param_1)

{
  FUN_1072d5c0c(param_1,0);
  return param_1;
}



/* Entry: 1072d5c0c; end: 1072d5c23;  */

void FUN_1072d5c0c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_1072d5c40(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1072d5c24; end: 1072d5c3f;  */

void FUN_1072d5c24(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_1072d5c40(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072d5c40; end: 1072d5cb3;  */

undefined8 FUN_1072d5c40(long param_1)

{
  undefined8 unaff_x19;
  
  *(undefined4 *)(param_1 + 0x2c) = 0xdeadbeef;
  *(undefined4 *)(param_1 + 0x40) = 0xdeadbeef;
  if (*(long *)(param_1 + 0x138) != 0) {
    func_0x000107250860();
  }
  FUN_1072508a0(param_1 + 0x138);
  FUN_1072508cc(param_1 + 0x138);
  FUN_10725b238(param_1 + 0x128);
  FUN_1072d5b8c(param_1 + 0x58);
  func_0x00010724bd74(param_1 + 0x48);
  func_0x00010724bd50(param_1 + 0x30);
  FUN_10724ae28(param_1 + 0x18);
  func_0x00010724ce4c();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 1072d5cb4; end: 1072d5d7b;  */

long FUN_1072d5cb4(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar6 = (long *)param_1[1];
  if ((plVar6 != (long *)0x0) && (plVar2 = param_1 + 3, *plVar2 != 0)) {
    func_0x000100102e7c();
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      plVar8 = (long *)((ulong)plVar2 & uVar7);
    }
    else {
      plVar8 = plVar2;
      if (plVar6 <= plVar2) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar6;
        }
        plVar8 = (long *)((long)plVar2 - uVar1 * (long)plVar6);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)plVar8 * 8);
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar5[1];
        if (plVar2 != plVar4) break;
        lVar3 = (long)(plVar5 + 2);
        func_0x0001000e107c(lVar3,param_2);
        if ((int)lVar3 != 0) {
          return (long)plVar5;
        }
      }
      if (((ulong)plVar6 & uVar7) == 0) {
        plVar4 = (long *)((ulong)plVar4 & uVar7);
      }
      else if (plVar6 <= plVar4) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar4 / (ulong)plVar6;
        }
        plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar6);
      }
    } while (plVar4 == plVar8);
  }
  return 0;
}



/* Entry: 1072d5d7c; end: 1072d5da3;  */

long FUN_1072d5d7c(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1072d5da4; end: 1072d5daf;  */

void FUN_1072d5da4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099c260;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1072d5db0; end: 1072d5dc3;  */

void FUN_1072d5db0(void)

{
  FUN_1072d5da4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072d5dc4; end: 1072d5dcb;  */

void FUN_1072d5dc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001072d66ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1072d5dcc; end: 1072d5e43;  */

void FUN_1072d5dcc(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x0001072d66c0();
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[2] = param_2[2];
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  FUN_1072d488c(param_1 + 5,param_2 + 5);
  FUN_1072d5a18(unaff_x19 + 0x220,unaff_x20 + 0x220);
  *(undefined4 *)(unaff_x19 + 0x240) = *(undefined4 *)(unaff_x20 + 0x240);
  return;
}



/* Entry: 1072d5e44; end: 1072d5e6f;  */

undefined8 * FUN_1072d5e44(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099c2b0;
  FUN_1072d3e28(param_1 + 1);
  return param_1;
}



/* Entry: 1072d5e70; end: 1072d5e83;  */

void FUN_1072d5e70(void)

{
  FUN_1072d5e44();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072d5e84; end: 1072d5ebb;  */

undefined8 FUN_1072d5e84(undefined8 param_1)

{
  func_0x0001072d6754();
  FUN_1072d6134();
  return param_1;
}



/* Entry: 1072d5ebc; end: 1072d5edf;  */

long FUN_1072d5ebc(long param_1,long param_2)

{
  long extraout_x8;
  int extraout_w10;
  
  param_1 = param_1 + 8;
  func_0x0001072d677c(&PTR_FUN_11099c2b0);
  if (extraout_x8 != 0) {
    do {
      func_0x0001072d666c();
    } while (extraout_w10 != 0);
  }
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x10);
  FUN_1072d4854(param_2 + 0x20,param_1 + 0x18);
  return param_2;
}



/* Entry: 1072d5ee0; end: 1072d60fb;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1072d5ee0(long param_1,long *param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_488;
  long alStack_480 [2];
  long alStack_470 [59];
  undefined1 auStack_298 [40];
  long *plStack_270;
  undefined8 auStack_268 [63];
  undefined1 auStack_70 [32];
  undefined4 uStack_50;
  undefined8 uStack_48;
  
  func_0x0001072d66c0();
  func_0x0001072d6684();
  uStack_48 = extraout_x8;
  func_0x00010726fc00(&plStack_270,param_1 + 8);
  if (plStack_270 != (long *)0x0) {
    func_0x00010726fc3c();
    in_ZR = *plStack_270 == -1;
    if (!(bool)in_ZR) {
      auStack_268[0] = 0;
      plStack_270 = (long *)0x0;
      alStack_470[1] = 0;
      alStack_470[2] = 0;
      FUN_1072508cc(alStack_470 + 1);
      goto LAB_1072d5f64;
    }
    func_0x00010726fc88();
  }
  func_0x0001072d671c();
  auStack_268[0] = 0;
  plStack_270 = (long *)0x0;
LAB_1072d5f64:
  func_0x0001072d671c();
  func_0x00010726fc00(&plStack_270);
  if (plStack_270 == (long *)0x0) {
    func_0x0001072d671c();
  }
  else {
    lVar2 = *plStack_270;
    func_0x0001072d671c();
    in_ZR = lVar2 == -1;
    if (!(bool)in_ZR) {
      lVar2 = *(long *)(unaff_x19 + 0x20);
      param_2 = (long *)(unaff_x19 + 0x30);
      FUN_1072d488c(alStack_470 + 1,param_2);
      plVar1 = (long *)(unaff_x20 + 0x10);
      while (plVar1 = (long *)*plVar1, plVar1 != (long *)0x0) {
        func_0x00010060413c(auStack_298,plVar1 + 2);
        param_2 = plVar1 + 5;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
      }
      lVar2 = *(long *)(lVar2 + 8);
      FUN_10724bb70(alStack_480,lVar2 + 0x18);
      if (alStack_480[0] != 0) {
        uVar3 = *(undefined8 *)(lVar2 + 0x10);
        plStack_270 = *(long **)(unaff_x19 + 0x28);
        FUN_1072d488c(auStack_268,alStack_470 + 1);
        FUN_1072d5a18(auStack_70,unaff_x19 + 0x228);
        uStack_50 = *(undefined4 *)(unaff_x19 + 0x248);
        FUN_1072d6188(alStack_470,uVar3,FUN_1072d3e94,0,&plStack_270);
        lStack_488 = alStack_470[0];
        func_0x0001072d6408(&plStack_270);
        param_2 = &lStack_488;
        func_0x0001073ae140(alStack_480[0],param_2);
        lVar2 = lStack_488;
        lStack_488 = 0;
        if (lVar2 != 0) {
          func_0x0001072d6660();
        }
      }
      func_0x00010724bcd8(alStack_480);
      func_0x00010724b374();
    }
  }
  func_0x0001072d6734();
  func_0x0001072d664c(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  lVar2 = lStack_488;
  lStack_488 = 0;
  if (lVar2 != 0) {
    func_0x0001072d6660();
  }
  func_0x00010724bcd8(alStack_480);
  func_0x00010724b374(alStack_470 + 1);
  func_0x0001072d6734();
  func_0x0001072d6694();
  func_0x0001072d67ec(param_2);
  func_0x0001072d676c();
  return;
}



/* Entry: 1072d60fc; end: 1072d6127;  */

void FUN_1072d60fc(undefined8 param_1,undefined8 param_2)

{
  func_0x0001072d67ec(param_2,param_1,&PTR_DAT_11099c350);
  func_0x0001072d676c();
  return;
}



/* Entry: 1072d6128; end: 1072d6133;  */

undefined ** FUN_1072d6128(void)

{
  return &PTR_DAT_11099c350;
}



/* Entry: 1072d6134; end: 1072d6187;  */

long FUN_1072d6134(long param_1,long param_2)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x0001072d677c(&PTR_FUN_11099c2b0);
  if (extraout_x8 != 0) {
    do {
      func_0x0001072d666c();
    } while (extraout_w10 != 0);
  }
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x10);
  FUN_1072d4854(param_1 + 0x20,param_2 + 0x18);
  return param_1;
}



/* Entry: 1072d6188; end: 1072d622b;  */

undefined8 *
FUN_1072d6188(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 *param_5)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  long lVar4;
  undefined8 auStack_280 [69];
  undefined8 uStack_58;
  
  puVar3 = auStack_280;
  puVar2 = auStack_280;
  func_0x0001072d6684();
  puVar1 = (undefined8 *)0x248;
  uStack_58 = extraout_x8;
  __Znwm();
  FUN_1072d622c(auStack_280,param_5);
  *puVar1 = &PTR_FUN_11099c320;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  FUN_1072d622c(puVar1 + 4);
  *param_1 = puVar1;
  func_0x0001072d6408();
  func_0x0001072d664c(uStack_58);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x0001072d66c0();
  *puVar2 = *puVar3;
  FUN_1072d62a0(puVar2 + 1,puVar3 + 1);
  lVar4 = *(long *)(param_4 + 0x218);
  if (lVar4 == 0) {
    param_5[0x43] = 0;
  }
  else if (lVar4 == param_4 + 0x200) {
    param_5[0x43] = param_5 + 0x40;
    (**(code **)(**(long **)(param_4 + 0x218) + 0x18))();
  }
  else {
    param_5[0x43] = lVar4;
    *(undefined8 *)(param_4 + 0x218) = 0;
  }
  *(undefined4 *)(param_5 + 0x44) = *(undefined4 *)(param_4 + 0x220);
  return param_5;
}



/* Entry: 1072d622c; end: 1072d629f;  */

void FUN_1072d622c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072d66c0();
  *param_1 = *param_2;
  FUN_1072d62a0(param_1 + 1,param_2 + 1);
  lVar1 = *(long *)(unaff_x20 + 0x218);
  if (lVar1 == 0) {
    *(undefined8 *)(unaff_x19 + 0x218) = 0;
  }
  else if (lVar1 == unaff_x20 + 0x200) {
    *(long *)(unaff_x19 + 0x218) = unaff_x19 + 0x200;
    (**(code **)(**(long **)(unaff_x20 + 0x218) + 0x18))();
  }
  else {
    *(long *)(unaff_x19 + 0x218) = lVar1;
    *(undefined8 *)(unaff_x20 + 0x218) = 0;
  }
  *(undefined4 *)(unaff_x19 + 0x220) = *(undefined4 *)(unaff_x20 + 0x220);
  return;
}



/* Entry: 1072d62a0; end: 1072d6393;  */

void FUN_1072d62a0(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x0001072d66c0();
  *param_1 = *param_2;
  func_0x000104c318bc(param_1 + 2,param_2 + 2);
  FUN_1072649c8(unaff_x19 + 0x40,unaff_x20 + 0x40);
  FUN_10724af54(unaff_x19 + 0x80,unaff_x20 + 0x80);
  FUN_10724afdc(unaff_x19 + 0xd0,unaff_x20 + 0xd0);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x118);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x110);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x119);
  *(undefined8 *)(unaff_x19 + 0x121) = *(undefined8 *)(unaff_x20 + 0x121);
  *(undefined8 *)(unaff_x19 + 0x119) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x118) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x110) = uVar1;
  *(undefined1 *)(unaff_x19 + 0x130) = 0;
  *(undefined1 *)(unaff_x19 + 0x148) = 0;
  if (*(char *)(unaff_x20 + 0x148) == '\x01') {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x138);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x130);
    *(undefined8 *)(unaff_x19 + 0x140) = *(undefined8 *)(unaff_x20 + 0x140);
    *(undefined8 *)(unaff_x19 + 0x138) = uVar2;
    *(undefined8 *)(unaff_x19 + 0x130) = uVar1;
    *(undefined8 *)(unaff_x20 + 0x138) = 0;
    *(undefined8 *)(unaff_x20 + 0x140) = 0;
    *(undefined8 *)(unaff_x20 + 0x130) = 0;
    *(undefined1 *)(unaff_x19 + 0x148) = 1;
  }
  uVar1 = *(undefined8 *)(unaff_x20 + 0x150);
  *(undefined8 *)(unaff_x19 + 0x158) = *(undefined8 *)(unaff_x20 + 0x158);
  *(undefined8 *)(unaff_x19 + 0x150) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x150) = 0;
  *(undefined8 *)(unaff_x20 + 0x158) = 0;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x160);
  *(undefined1 *)(unaff_x19 + 0x168) = *(undefined1 *)(unaff_x20 + 0x168);
  *(undefined8 *)(unaff_x19 + 0x160) = uVar1;
  FUN_1072649c8(unaff_x19 + 0x170,unaff_x20 + 0x170);
  *(undefined2 *)(unaff_x19 + 0x1b0) = *(undefined2 *)(unaff_x20 + 0x1b0);
  *(undefined8 *)(unaff_x19 + 0x1c0) = 0;
  *(undefined8 *)(unaff_x19 + 0x1c8) = 0;
  *(undefined8 *)(unaff_x19 + 0x1b8) = 0;
  *(undefined8 *)(unaff_x19 + 0x1b8) = *(undefined8 *)(unaff_x20 + 0x1b8);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x1c0);
  *(undefined8 *)(unaff_x19 + 0x1c8) = *(undefined8 *)(unaff_x20 + 0x1c8);
  *(undefined8 *)(unaff_x19 + 0x1c0) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x1b8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1c0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1c8) = 0;
  func_0x00010028acf0(unaff_x19 + 0x1d0,unaff_x20 + 0x1d0);
  return;
}



/* Entry: 1072d6394; end: 1072d6397;  */

undefined8 * FUN_1072d6394(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099c320;
  func_0x0001072d6408(param_1 + 4);
  return param_1;
}



/* Entry: 1072d6398; end: 1072d63ab;  */

void FUN_1072d6398(void)

{
  FUN_1072d63dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072d63ac; end: 1072d63db;  */

void FUN_1072d63ac(long param_1)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x10);
  plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)*(ulong *)(param_1 + 0x18) >> 1));
  if ((*(ulong *)(param_1 + 0x18) & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
  }
                    /* WARNING: Could not recover jumptable at 0x0001072d63d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (plVar1,*(undefined8 *)(param_1 + 0x20),param_1 + 0x28,param_1 + 0x220,
             *(undefined4 *)(param_1 + 0x240));
  return;
}



/* Entry: 1072d63dc; end: 1072d645f;  */

undefined8 * FUN_1072d63dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099c320;
  func_0x0001072d6408(param_1 + 4);
  return param_1;
}



/* Entry: 1072d6460; end: 1072d6473;  */

void FUN_1072d6460(void)

{
  func_0x0001072d6434();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072d6474; end: 1072d6487;  */

void FUN_1072d6474(long param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(long **)(param_1 + 0x20);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000104bff8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))();
    return;
  }
  func_0x000104bfeb48();
  func_0x0001006124a8();
  if ((bool)in_ZR) {
    uVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return;
    }
    uVar2 = 0x28;
  }
  func_0x000104c01a8c(uVar2);
  return;
}



/* Entry: 1072d6488; end: 1072d649b;  */

void FUN_1072d6488(void)

{
  FUN_1072d6538();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072d649c; end: 1072d64a7;  */

void FUN_1072d649c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001072d66ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1072d64a8; end: 1072d64bb;  */

void FUN_1072d64a8(void)

{
  FUN_1072d650c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072d64bc; end: 1072d650b;  */

void FUN_1072d64bc(long param_1,undefined8 param_2)

{
  undefined1 auStack_a0 [128];
  
  FUN_1072d6b64(auStack_a0,param_2);
  FUN_1072d5930(*(undefined8 *)(param_1 + 0x20),auStack_a0);
  func_0x00010724b340(auStack_a0);
  return;
}



/* Entry: 1072d650c; end: 1072d6537;  */

undefined8 * FUN_1072d650c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11099c410;
  func_0x0001072d52dc(param_1 + 1);
  return param_1;
}



/* Entry: 1072d6538; end: 1072d6543;  */

void FUN_1072d6538(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11099c3c0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1072d6544; end: 1072d658b;  */

void FUN_1072d6544(long param_1)

{
  func_0x0001072d67c4();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1072d658c; end: 1072d658f;  */

void FUN_1072d658c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099c460;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1072d6590; end: 1072d65a3;  */

void FUN_1072d6590(void)

{
  FUN_1072d65f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072d65a4; end: 1072d65af;  */

void FUN_1072d65a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001072d66ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1072d65b0; end: 1072d65c3;  */

void FUN_1072d65b0(void)

{
  FUN_1072d65cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072d65c4; end: 1072d65cb;  */

void FUN_1072d65c4(long param_1)

{
  if (*(long **)(param_1 + 0x20) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000104c01bdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x20) + 0x30))();
    return;
  }
  func_0x000104bfeb48();
  func_0x000104c00420();
  return;
}



/* Entry: 1072d65cc; end: 1072d65f7;  */

undefined8 * FUN_1072d65cc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11099c4b0;
  func_0x0001006393ec(param_1 + 1);
  return param_1;
}



/* Entry: 1072d65f8; end: 1072d6603;  */

void FUN_1072d65f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099c460;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1072d6604; end: 1072d664b;  */

void FUN_1072d6604(long param_1)

{
  func_0x0001072d67c4();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1072d664c; end: 1072d6857;  */

void FUN_1072d664c(void)

{
  return;
}



/* Entry: 1072d6858; end: 1072d6b63;  */

void FUN_1072d6858(undefined8 param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  char cVar5;
  char cVar6;
  byte bVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined1 auStack_1b8 [40];
  undefined1 auStack_190 [24];
  undefined1 uStack_178;
  undefined1 auStack_170 [32];
  undefined1 auStack_150 [24];
  undefined5 uStack_138;
  undefined3 uStack_133;
  undefined5 uStack_130;
  undefined1 uStack_128;
  undefined1 auStack_120 [24];
  undefined1 uStack_108;
  undefined1 auStack_100 [24];
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  char cStack_ac;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined5 uStack_88;
  undefined3 uStack_83;
  undefined5 uStack_80;
  byte bStack_78;
  
  cVar3 = *param_2;
  bVar4 = param_2[1];
  cVar5 = param_2[2];
  cVar6 = param_2[3];
  bVar7 = param_2[200];
  if ((bVar7 & 1) == 0) {
    uStack_a0 = uStack_a0 & 0xffffffffffffff00;
    bStack_78 = 0;
  }
  else {
    FUN_10724ef84(&uStack_e8,param_2 + 0x80);
    uStack_90 = uStack_d8;
    uStack_98 = uStack_e0;
    uStack_a0 = uStack_e8;
    cStack_ac = param_2[0xc4];
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_e8 = 0;
    uStack_b8 = CONCAT31(uStack_b8._1_3_,param_2[0xb8]);
    uVar14 = *(undefined8 *)(param_2 + 0xbc);
    uStack_b4 = (undefined4)uVar14;
    uStack_b0 = (undefined4)((ulong)uVar14 >> 0x20);
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d0 = 0;
    uStack_80 = CONCAT14(cStack_ac,uStack_b0);
    uStack_88 = (undefined5)CONCAT44(uStack_b4,uStack_b8);
    uStack_83 = (undefined3)((ulong)uVar14 >> 8);
    bStack_78 = 1;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_d0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_e8);
  }
  puVar12 = *(undefined8 **)(param_2 + 0x150);
  if (puVar12 == (undefined8 *)0x0) {
    lVar13 = 0;
  }
  else {
    lVar13 = (long)*(char *)((long)puVar12 + 0x17);
    if (lVar13 < 0) {
      lVar13 = puVar12[1];
      puVar12 = (undefined8 *)*puVar12;
    }
  }
  cVar8 = param_2[0x118];
  cVar9 = param_2[0x128];
  uVar11 = *(undefined8 *)(param_2 + 0x110);
  uVar14 = *(undefined8 *)(param_2 + 0x120);
  cVar10 = param_2[0x168];
  FUN_10724ef84(auStack_100,param_2 + 8);
  if (param_2[0x78] == '\x01') {
    FUN_1072d6d84(auStack_120,param_2 + 0x40);
    bVar7 = bStack_78 & 1;
  }
  else {
    auStack_120[0] = 0;
    uStack_108 = 0;
  }
  auStack_150[0] = 0;
  if (bVar7 != 0) {
    uStack_128 = 0;
    auStack_150[0] = 0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_150,&uStack_a0)
    ;
    uStack_138 = uStack_88;
    uStack_133 = uStack_83;
    uStack_130 = uStack_80;
  }
  uStack_128 = bVar7 != 0;
  func_0x00010028af84(auStack_170,param_2 + 0x130);
  if (param_2[0x1a8] == '\x01') {
    FUN_1072d6d84(auStack_190,param_2 + 0x170);
  }
  else {
    auStack_190[0] = 0;
    uStack_178 = 0;
  }
  func_0x00010028b0c8(auStack_1b8,param_2 + 0x1d0);
  iVar1 = 0;
  if (bVar4 - 1 < 3) {
    iVar1 = (bVar4 - 1 & 0xff) + 1;
  }
  iVar2 = 0;
  if ((cVar3 - 1U & 0xf8) == 0) {
    iVar2 = (byte)(cVar3 - 1U) + 1;
  }
  if (cVar9 == '\0') {
    uVar14 = 0;
  }
  if (cVar8 == '\0') {
    uVar11 = 0;
  }
  func_0x0001072d6ddc(param_1,iVar2,iVar1,cVar5,cVar6,auStack_100,auStack_120,auStack_150,uVar11,
                      cVar8,uVar14,cVar9,auStack_170,puVar12,lVar13,0,cVar10);
  func_0x00010028ad98(auStack_1b8);
  func_0x0001001148fc(auStack_190);
  func_0x0001001148fc(auStack_170);
  FUN_1072d59f8(auStack_150);
  func_0x0001001148fc(auStack_120);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_100);
  FUN_1072d59f8(&uStack_a0);
  return;
}



/* Entry: 1072d6b64; end: 1072d6d83;  */

void FUN_1072d6b64(long param_1,uint *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  char *pcVar3;
  long lVar4;
  undefined8 uVar5;
  char cVar6;
  long lVar7;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *param_2;
  if (3 < uVar1) {
    uVar1 = 0;
  }
  FUN_1072d6f54(param_1,uVar1 & 0xff);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 2);
  if ((char)param_2[0x10] == '\x01') {
    cVar6 = '\x01';
    if (param_2[4] < 6) {
      cVar6 = (char)param_2[4] + '\x01';
    }
    uVar1 = param_2[0xe];
    uVar5 = *(undefined8 *)(param_2 + 0xc);
    if ((byte)uVar1 == 0) {
      uVar5 = 0;
    }
    pcVar3 = (char *)0x30;
    __Znwm();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_60,param_2 + 6)
    ;
    puVar2 = puStack_50;
    *pcVar3 = cVar6;
    *(undefined8 *)(pcVar3 + 0x10) = uStack_58;
    *(undefined8 *)(pcVar3 + 8) = uStack_60;
    uStack_60 = 0;
    uStack_58 = 0;
    puStack_50 = (undefined8 *)0x0;
    *(undefined8 **)(pcVar3 + 0x18) = puVar2;
    *(undefined8 *)(pcVar3 + 0x20) = uVar5;
    *(ulong *)(pcVar3 + 0x28) = (ulong)(byte)uVar1;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_60);
    uStack_60 = 0;
    FUN_1072d6f8c(&uStack_60);
  }
  else {
    pcVar3 = (char *)0x0;
  }
  puStack_70 = (undefined8 *)0x0;
  FUN_10724b300(param_1 + 0x10,pcVar3);
  func_0x00010724b2dc(&puStack_70);
  *(char *)(param_1 + 0x18) = (char)param_2[0x12];
  *(undefined2 *)(param_1 + 0x19) = *(undefined2 *)((long)param_2 + 0x49);
  lVar7 = *(long *)(param_2 + 0x14);
  if (lVar7 == 0) {
    puStack_70 = (undefined8 *)0x0;
    puStack_68 = (undefined8 *)0x0;
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x16);
    func_0x000104c307ec(&uStack_60,1);
    puStack_50[2] = 0;
    *puStack_50 = &PTR_DAT_1107eb210;
    puStack_50[1] = 0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm
              (puStack_50 + 3,lVar7,uVar5);
    puStack_68 = puStack_50;
    puStack_50 = (undefined8 *)0x0;
    puStack_70 = puStack_68 + 3;
    func_0x000104c308b0(&uStack_60);
  }
  func_0x000104c2f98c(param_1 + 0x20,&puStack_70);
  func_0x000104c33970(&puStack_70);
  uVar1 = param_2[0x1a];
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  if ((char)uVar1 == '\0') {
    uVar5 = 0;
  }
  *(undefined8 *)(param_1 + 0x30) = uVar5;
  *(char *)(param_1 + 0x38) = (char)uVar1;
  uVar1 = param_2[0x1e];
  uVar5 = *(undefined8 *)(param_2 + 0x1c);
  if ((char)uVar1 == '\0') {
    uVar5 = 0;
  }
  *(undefined8 *)(param_1 + 0x40) = uVar5;
  *(char *)(param_1 + 0x48) = (char)uVar1;
  lVar4 = param_1 + 0x50;
  func_0x0001002a969c(lVar4,param_2 + 0x20);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  __ZdlPv(lVar7);
  func_0x00010724b340(param_1);
  __Unwind_Resume();
  FUN_1072d6da0();
  *(undefined1 *)(lVar4 + 0x18) = 1;
  return;
}



/* Entry: 1072d6d84; end: 1072d6d9f;  */

void FUN_1072d6d84(long param_1)

{
  FUN_1072d6da0();
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 1072d6da0; end: 1072d6f53;  */

undefined8 FUN_1072d6da0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  func_0x000107264c5c(param_2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm
            (param_1,param_2,uVar1);
  return param_1;
}



/* Entry: 1072d6f54; end: 1072d6f8b;  */

void FUN_1072d6f54(undefined1 *param_1,undefined1 param_2)

{
  *param_1 = param_2;
  param_1[0x38] = 0;
  param_1[0x40] = 0;
  param_1[0x48] = 0;
  param_1[0x50] = 0;
  param_1[0x68] = 0;
  param_1[0x70] = 0;
  param_1[0x74] = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  param_1[0x30] = 0;
  return;
}



/* Entry: 1072d6f8c; end: 1072d6faf;  */

undefined8 FUN_1072d6f8c(undefined8 param_1)

{
  FUN_1072d6fb0(param_1,0);
  return param_1;
}



/* Entry: 1072d6fb0; end: 1072d6fc7;  */

void FUN_1072d6fb0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 1072d6fc8; end: 1072d6ff3;  */

void FUN_1072d6fc8(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_2 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 1072d6ff4; end: 1072d6ffb;  */

void FUN_1072d6ff4(void)

{
  return;
}



/* Entry: 1072d6ffc; end: 1072d7367;  */

void FUN_1072d6ffc(long param_1,undefined ***param_2)

{
  undefined1 (*pauVar1) [16];
  int iVar2;
  code *pcVar3;
  undefined1 uVar4;
  ulong *puVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  undefined8 extraout_x8;
  undefined ***pppuVar8;
  ulong *puVar9;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  ulong *extraout_x8_02;
  ulong *extraout_x8_03;
  undefined8 *extraout_x8_04;
  undefined8 *extraout_x8_05;
  ulong uVar10;
  ulong *puVar11;
  undefined1 (*pauVar12) [16];
  long lVar13;
  undefined1 auVar14 [16];
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined1 auStack_3e0 [40];
  char cStack_3b8;
  undefined ***pppuStack_3b0;
  undefined ***pppuStack_3a8;
  undefined1 auStack_3a0 [32];
  byte bStack_380;
  undefined **ppuStack_378;
  ulong uStack_370;
  ulong uStack_368;
  undefined *puStack_360;
  ulong uStack_358;
  undefined **ppuStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined4 uStack_320;
  undefined1 auStack_308 [64];
  undefined1 auStack_2c8 [56];
  char cStack_290;
  undefined8 uStack_288;
  undefined1 auStack_208 [16];
  undefined **ppuStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined4 auStack_1d8 [2];
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined **ppuStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined **appuStack_180 [8];
  char cStack_140;
  undefined **appuStack_138 [7];
  undefined1 auStack_100 [64];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  char cStack_80;
  undefined8 uStack_78;
  
  lVar13 = param_1;
  func_0x0001072d8eb4();
  ppuStack_1f8 = (undefined **)&UNK_10e52b660;
  uStack_1f0 = 0;
  uStack_1e8 = 0;
  uStack_1e0 = 0;
  uVar10 = *(ulong *)(lVar13 + 0x18);
  uVar4 = (uVar10 & 1) == 0;
  puVar9 = (ulong *)(lVar13 + 0x18);
  if (!(bool)uVar4) {
    puVar9 = (ulong *)(uVar10 + 7);
  }
  uStack_78 = extraout_x8;
  for (lVar13 = (long)*(int *)(lVar13 + 0x20) << 3; lVar13 != 0; lVar13 = lVar13 + -8) {
    uVar10 = *puVar9;
    pppuVar8 = *(undefined ****)(uVar10 + 0x20);
    param_2 = (undefined ***)&PTR_PTR_113234600;
    if (pppuVar8 != (undefined ***)0x0) {
      param_2 = pppuVar8;
    }
    FUN_1072d7c00(&uStack_c0);
    if (cStack_80 == '\x01') {
      func_0x0001072d8e9c(*(undefined8 *)(uVar10 + 0x18),appuStack_138);
      FUN_107268350(auStack_100,&uStack_c0);
      param_2 = appuStack_138;
      func_0x000104c329ec(&ppuStack_1b8);
      cStack_140 = '\x01';
      func_0x000104c32ad0(appuStack_138);
    }
    else {
      ppuStack_1b8 = (undefined **)((ulong)ppuStack_1b8 & 0xffffffffffffff00);
      cStack_140 = '\0';
    }
    FUN_107267ed0(&uStack_c0);
    uVar4 = cStack_140 == '\x01';
    if ((bool)uVar4) {
      func_0x000104c2fe00(appuStack_138,&ppuStack_1b8);
      FUN_107267f10(&ppuStack_1f8,appuStack_138);
      param_2 = appuStack_180;
      func_0x0001072d80fc();
      func_0x0001072d8f28();
    }
    FUN_1072d8140(&ppuStack_1b8);
    puVar9 = puVar9 + 1;
  }
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    auStack_1d8[0] = 6;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    func_0x0001072d8eec();
    func_0x0001072d8e9c(*(undefined8 *)(param_1 + 0x30),&uStack_c0);
    func_0x0001072d8f1c();
    func_0x0001072d8f60();
    FUN_10726924c();
    func_0x0001072d8f00();
  }
  else {
    lVar13 = *(long *)(param_1 + 0x50);
    if (*(int *)(lVar13 + 0x1c) == 2) {
      uStack_1b0 = 0;
      uStack_1a8 = 0;
      ppuStack_1b8 = (undefined **)0x0;
      puVar9 = (ulong *)(*(long *)(lVar13 + 0x10) + 0x10);
      uVar10 = *puVar9;
      uVar4 = (uVar10 & 1) == 0;
      if (!(bool)uVar4) {
        puVar9 = (ulong *)(uVar10 + 7);
      }
      iVar2 = *(int *)(*(long *)(lVar13 + 0x10) + 0x18);
      FUN_107269434(appuStack_138,&ppuStack_1b8);
      for (lVar13 = (long)iVar2 << 3; lVar13 != 0; lVar13 = lVar13 + -8) {
        auVar14 = NEON_ext(*(undefined1 (*) [16])(*puVar9 + 0x10),
                           *(undefined1 (*) [16])(*puVar9 + 0x10),8,1);
        uStack_b8 = auVar14._8_8_;
        uStack_c0 = auVar14._0_8_;
        func_0x000104c31a04(&ppuStack_1b8,&uStack_c0);
        puVar9 = puVar9 + 1;
      }
      func_0x000104c31c5c(appuStack_138);
      param_2 = &ppuStack_1b8;
      FUN_107269434(&uStack_c0);
      auStack_1d8[0] = 5;
      uStack_1c8 = uStack_b8;
      uStack_1d0 = uStack_c0;
      uStack_1c0 = uStack_b0;
      uStack_c0 = 0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      func_0x000104c31c5c();
      func_0x000104c31c5c(&ppuStack_1b8);
    }
    else {
      uVar4 = *(int *)(lVar13 + 0x1c) == 1;
      if ((bool)uVar4) {
        auStack_1d8[0] = 6;
        auVar14 = *(undefined1 (*) [16])(*(long *)(lVar13 + 0x10) + 0x10);
        auVar14 = NEON_ext(auVar14,auVar14,8,1);
        uStack_1c8 = auVar14._8_8_;
        uStack_1d0 = auVar14._0_8_;
      }
      else {
        auStack_1d8[0] = 7;
      }
    }
    func_0x0001072d8eec();
    func_0x0001072d8e9c(*(undefined8 *)(param_1 + 0x30),&uStack_c0);
    func_0x0001072d8f1c();
    func_0x0001072d8f60();
    FUN_1072d8ab4();
    func_0x0001072d8f00();
  }
  FUN_107269394(&ppuStack_1b8);
  func_0x000104c319e0(appuStack_138);
  func_0x000104c2f714(&uStack_c0);
  func_0x000104c335c0(auStack_208);
  func_0x000104c3365c(auStack_1d8);
  pppuVar8 = &ppuStack_1f8;
  func_0x000104c33548();
  func_0x0001072d8e48(uStack_78);
  if (!(bool)uVar4) {
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x000104bd46a0();
      func_0x000104c31c5c(&ppuStack_1b8);
      pppuVar8 = &ppuStack_1f8;
      func_0x000104c33548();
    }
    func_0x0001072d8dc4();
    func_0x0001072d8eb4();
    uStack_288 = extraout_x8_01;
    FUN_1072d786c(extraout_x8_00);
    if (*(int *)pppuVar8 == 5) {
      pppuVar6 = pppuVar8;
      func_0x000104c2d3f8();
      pauVar1 = (undefined1 (*) [16])pppuVar6[1];
      for (pauVar12 = (undefined1 (*) [16])*pppuVar6; pauVar12 != pauVar1; pauVar12 = pauVar12 + 1)
      {
        ppuStack_340 = &PTR_DAT_1109ecf60;
        uStack_338 = 0;
        uStack_320 = 0;
        auVar14 = NEON_ext(*pauVar12,*pauVar12,8,1);
        uStack_328 = auVar14._8_8_;
        uStack_330 = auVar14._0_8_;
        func_0x0001072d8ee4();
        if (*(int *)((long)pppuVar6 + 0x1c) == 2) {
          ppuVar15 = pppuVar6[2];
        }
        else {
          func_0x000107931b1c(pppuVar6);
          *(int *)((long)pppuVar6 + 0x1c) = 2;
          ppuVar15 = pppuVar6[1];
          if (((ulong)ppuVar15 & 1) != 0) {
            func_0x0001072d8e5c();
          }
          func_0x0001072d8228();
          pppuVar6[2] = ppuVar15;
        }
        pppuVar6 = (undefined ***)(ppuVar15 + 2);
        iVar2 = *(int *)(ppuVar15 + 3);
        pppuVar7 = pppuVar6;
        func_0x00010006818c();
        if (iVar2 < (int)pppuVar7) {
          func_0x0001072d8d80();
          param_2 = &ppuStack_340;
          FUN_1072d8b20(*extraout_x8_04);
        }
        else {
          pppuVar7 = pppuVar6;
          func_0x00010563f22c();
          if (((ulong)*pppuVar6 & 1) != 0) {
            func_0x0001072d8e38();
          }
          param_2 = (undefined ***)ppuVar15[4];
          if (param_2 == (undefined ***)0x0) {
            func_0x0001072d8e0c();
            param_2 = (undefined ***)0x0;
          }
          else {
            pppuVar7 = param_2;
            func_0x0001072d8ea4();
          }
          FUN_1072d8b78();
          func_0x0001072d8d80();
          *extraout_x8_05 = pppuVar7;
        }
        pppuVar6 = &ppuStack_340;
        func_0x000107931394();
      }
    }
    else if (*(int *)pppuVar8 == 6) {
      pppuVar6 = pppuVar8;
      func_0x000104c2d3c0();
      ppuVar15 = *pppuVar6;
      ppuVar16 = pppuVar6[1];
      func_0x0001072d8ee4();
      func_0x0001072d8198();
      pppuVar6[2] = ppuVar16;
      func_0x0001072d8ee4();
      func_0x0001072d8198();
      pppuVar6[3] = ppuVar15;
    }
    FUN_10726236c(auStack_2c8,pppuVar8 + 6);
    uVar4 = cStack_290 == '\x01';
    if ((bool)uVar4) {
      FUN_10724ef84(&ppuStack_340,auStack_2c8);
      uVar10 = *(ulong *)(extraout_x8_00 + 8);
      if ((uVar10 & 1) != 0) {
        uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
      }
      param_2 = &ppuStack_340;
      func_0x0001005f70e4(extraout_x8_00 + 0x30,param_2,uVar10);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_340);
    }
    pppuVar6 = pppuVar8 + 4;
    func_0x000104c2db28();
    puVar9 = (ulong *)(extraout_x8_00 + 0x18);
    pppuStack_3b0 = pppuVar6;
    pppuStack_3a8 = param_2;
    do {
      if (pppuStack_3b0 == (undefined ***)0x0) {
        func_0x000107264c5c(pppuVar8 + 0xe);
        func_0x0001072d8e20(extraout_x8_00 + 0x38);
        func_0x000107264c5c(pppuVar8 + 0x15);
        func_0x0001072d8e20(extraout_x8_00 + 0x40);
        func_0x00010724b3d8(auStack_2c8);
        func_0x0001072d8e48(uStack_288);
        if (!(bool)uVar4) {
          ___stack_chk_fail();
          do {
            func_0x000107932ce0(extraout_x8_00);
            func_0x0001072d8e04();
            func_0x000107931394(&ppuStack_340);
          } while( true );
        }
        return;
      }
      FUN_107268714(&ppuStack_340,pppuStack_3a8);
      uStack_368 = 0;
      uStack_370 = 0;
      ppuStack_378 = &PTR_DAT_1109edff0;
      puStack_360 = &DAT_11383d918;
      uStack_358 = 0;
      FUN_10724ef84(auStack_3a0,&ppuStack_340);
      uVar10 = uStack_370;
      if ((uStack_370 & 1) != 0) {
        uVar10 = *(ulong *)(uStack_370 & 0xfffffffffffffffe);
      }
      func_0x0001005f70e4(&puStack_360,auStack_3a0,uVar10);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_3a0);
      FUN_1072d825c(auStack_3a0,auStack_308);
      if (bStack_380 == 1) {
        uStack_368 = uStack_368 | 1;
        if (uStack_358 == 0) {
          uVar10 = uStack_370;
          if ((uStack_370 & 1) != 0) {
            func_0x0001072d8e5c();
          }
          func_0x0001072d8768();
          uStack_358 = uVar10;
          if ((bStack_380 & 1) == 0) {
            func_0x000104bdc2c8();
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1072d77bc);
            (*pcVar3)();
          }
        }
        func_0x000107932968();
        func_0x0001072d88fc(auStack_3e0,0,&ppuStack_378);
        cStack_3b8 = '\x01';
      }
      else {
        cStack_3b8 = '\0';
        auStack_3e0[0] = 0;
      }
      FUN_1072d897c(auStack_3a0);
      func_0x00010793299c(&ppuStack_378);
      func_0x000104c32ad0(&ppuStack_340);
      uVar4 = cStack_3b8 == '\x01';
      if ((bool)uVar4) {
        iVar2 = *(int *)(extraout_x8_00 + 0x20);
        puVar5 = puVar9;
        func_0x00010006818c();
        uVar4 = iVar2 == (int)puVar5;
        if (iVar2 < (int)puVar5) {
          *(int *)(extraout_x8_00 + 0x20) = *(int *)(extraout_x8_00 + 0x20) + 1;
          func_0x0001072d8da4();
          puVar5 = puVar9;
          if (!(bool)uVar4) {
            puVar5 = extraout_x8_02;
          }
          FUN_1072d8924(*puVar5,auStack_3e0);
        }
        else {
          puVar5 = puVar9;
          func_0x00010563f22c();
          if ((*puVar9 & 1) != 0) {
            func_0x0001072d8e38();
          }
          puVar11 = *(ulong **)(extraout_x8_00 + 0x28);
          if (puVar11 == (ulong *)0x0) {
            func_0x0001072d8e0c();
          }
          else {
            func_0x0001072d8ea4();
            puVar5 = puVar11;
          }
          func_0x0001072d88fc();
          *(int *)(extraout_x8_00 + 0x20) = *(int *)(extraout_x8_00 + 0x20) + 1;
          func_0x0001072d8da4();
          puVar11 = puVar9;
          if (!(bool)uVar4) {
            puVar11 = extraout_x8_03;
          }
          *puVar11 = (ulong)puVar5;
        }
      }
      else {
        func_0x000104c302a4(&ppuStack_378,&UNK_10f4093dc,10);
        FUN_1072d78b4(&ppuStack_340,auStack_2c8,&ppuStack_378);
        func_0x000104c2f714(&ppuStack_378);
        func_0x000104c2f714(&ppuStack_340);
      }
      func_0x0001072d899c(auStack_3e0);
      func_0x000104c2de10(&pppuStack_3b0);
    } while( true );
  }
  return;
}



/* Entry: 1072d7368; end: 1072d786b;  */

void FUN_1072d7368(long param_1,undefined ***param_2,undefined ***param_3)

{
  ulong *puVar1;
  undefined1 (*pauVar2) [16];
  int iVar3;
  code *pcVar4;
  undefined1 uVar5;
  ulong *puVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  ulong uVar9;
  undefined8 extraout_x8;
  ulong *extraout_x8_00;
  ulong *extraout_x8_01;
  undefined8 *extraout_x8_02;
  long *extraout_x8_03;
  ulong *puVar10;
  undefined1 (*pauVar11) [16];
  undefined1 auVar12 [16];
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined1 auStack_1d0 [40];
  char cStack_1a8;
  undefined ***pppuStack_1a0;
  undefined ***pppuStack_198;
  undefined1 auStack_190 [32];
  byte bStack_170;
  undefined **ppuStack_168;
  ulong uStack_160;
  ulong uStack_158;
  undefined *puStack_150;
  ulong uStack_148;
  undefined **ppuStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined1 auStack_f8 [64];
  undefined1 auStack_b8 [56];
  char cStack_80;
  undefined8 uStack_78;
  
  func_0x0001072d8eb4();
  uStack_78 = extraout_x8;
  FUN_1072d786c(param_1);
  if (*(int *)param_2 == 5) {
    pppuVar7 = param_2;
    func_0x000104c2d3f8();
    pauVar2 = (undefined1 (*) [16])pppuVar7[1];
    for (pauVar11 = (undefined1 (*) [16])*pppuVar7; pauVar11 != pauVar2; pauVar11 = pauVar11 + 1) {
      ppuStack_130 = &PTR_DAT_1109ecf60;
      uStack_128 = 0;
      uStack_110 = 0;
      auVar12 = NEON_ext(*pauVar11,*pauVar11,8,1);
      uStack_118 = auVar12._8_8_;
      uStack_120 = auVar12._0_8_;
      func_0x0001072d8ee4();
      if (*(int *)((long)pppuVar7 + 0x1c) == 2) {
        ppuVar13 = pppuVar7[2];
      }
      else {
        func_0x000107931b1c(pppuVar7);
        *(int *)((long)pppuVar7 + 0x1c) = 2;
        ppuVar13 = pppuVar7[1];
        if (((ulong)ppuVar13 & 1) != 0) {
          func_0x0001072d8e5c();
        }
        func_0x0001072d8228();
        pppuVar7[2] = ppuVar13;
      }
      pppuVar7 = (undefined ***)(ppuVar13 + 2);
      iVar3 = *(int *)(ppuVar13 + 3);
      pppuVar8 = pppuVar7;
      func_0x00010006818c();
      if (iVar3 < (int)pppuVar8) {
        func_0x0001072d8d80();
        param_3 = &ppuStack_130;
        FUN_1072d8b20(*extraout_x8_02);
      }
      else {
        pppuVar8 = pppuVar7;
        func_0x00010563f22c();
        if (((ulong)*pppuVar7 & 1) != 0) {
          func_0x0001072d8e38();
        }
        param_3 = (undefined ***)ppuVar13[4];
        if (param_3 == (undefined ***)0x0) {
          func_0x0001072d8e0c();
          param_3 = (undefined ***)0x0;
        }
        else {
          pppuVar8 = param_3;
          func_0x0001072d8ea4();
        }
        FUN_1072d8b78();
        func_0x0001072d8d80();
        *extraout_x8_03 = (long)pppuVar8;
      }
      pppuVar7 = &ppuStack_130;
      func_0x000107931394();
    }
  }
  else if (*(int *)param_2 == 6) {
    pppuVar7 = param_2;
    func_0x000104c2d3c0();
    ppuVar13 = *pppuVar7;
    ppuVar14 = pppuVar7[1];
    func_0x0001072d8ee4();
    func_0x0001072d8198();
    pppuVar7[2] = ppuVar14;
    func_0x0001072d8ee4();
    func_0x0001072d8198();
    pppuVar7[3] = ppuVar13;
  }
  FUN_10726236c(auStack_b8,param_2 + 6);
  uVar5 = cStack_80 == '\x01';
  if ((bool)uVar5) {
    FUN_10724ef84(&ppuStack_130,auStack_b8);
    uVar9 = *(ulong *)(param_1 + 8);
    if ((uVar9 & 1) != 0) {
      uVar9 = *(ulong *)(uVar9 & 0xfffffffffffffffe);
    }
    param_3 = &ppuStack_130;
    func_0x0001005f70e4(param_1 + 0x30,param_3,uVar9);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_130);
  }
  pppuVar7 = param_2 + 4;
  func_0x000104c2db28();
  puVar1 = (ulong *)(param_1 + 0x18);
  pppuStack_1a0 = pppuVar7;
  pppuStack_198 = param_3;
  do {
    if (pppuStack_1a0 == (undefined ***)0x0) {
      func_0x000107264c5c(param_2 + 0xe);
      func_0x0001072d8e20(param_1 + 0x38);
      func_0x000107264c5c(param_2 + 0x15);
      func_0x0001072d8e20(param_1 + 0x40);
      func_0x00010724b3d8(auStack_b8);
      func_0x0001072d8e48(uStack_78);
      if ((bool)uVar5) {
        return;
      }
      ___stack_chk_fail();
      do {
        func_0x000107932ce0(param_1);
        func_0x0001072d8e04();
        func_0x000107931394(&ppuStack_130);
      } while( true );
    }
    FUN_107268714(&ppuStack_130,pppuStack_198);
    uStack_158 = 0;
    uStack_160 = 0;
    ppuStack_168 = &PTR_DAT_1109edff0;
    puStack_150 = &DAT_11383d918;
    uStack_148 = 0;
    FUN_10724ef84(auStack_190,&ppuStack_130);
    uVar9 = uStack_160;
    if ((uStack_160 & 1) != 0) {
      uVar9 = *(ulong *)(uStack_160 & 0xfffffffffffffffe);
    }
    func_0x0001005f70e4(&puStack_150,auStack_190,uVar9);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_190);
    FUN_1072d825c(auStack_190,auStack_f8);
    if (bStack_170 == 1) {
      uStack_158 = uStack_158 | 1;
      if (uStack_148 == 0) {
        uVar9 = uStack_160;
        if ((uStack_160 & 1) != 0) {
          func_0x0001072d8e5c();
        }
        func_0x0001072d8768();
        uStack_148 = uVar9;
        if ((bStack_170 & 1) == 0) {
          func_0x000104bdc2c8();
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1072d77bc);
          (*pcVar4)();
        }
      }
      func_0x000107932968();
      func_0x0001072d88fc(auStack_1d0,0,&ppuStack_168);
      cStack_1a8 = '\x01';
    }
    else {
      cStack_1a8 = '\0';
      auStack_1d0[0] = 0;
    }
    FUN_1072d897c(auStack_190);
    func_0x00010793299c(&ppuStack_168);
    func_0x000104c32ad0(&ppuStack_130);
    uVar5 = cStack_1a8 == '\x01';
    if ((bool)uVar5) {
      iVar3 = *(int *)(param_1 + 0x20);
      puVar6 = puVar1;
      func_0x00010006818c();
      uVar5 = iVar3 == (int)puVar6;
      if (iVar3 < (int)puVar6) {
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
        func_0x0001072d8da4();
        puVar6 = puVar1;
        if (!(bool)uVar5) {
          puVar6 = extraout_x8_00;
        }
        FUN_1072d8924(*puVar6,auStack_1d0);
      }
      else {
        puVar6 = puVar1;
        func_0x00010563f22c();
        if ((*puVar1 & 1) != 0) {
          func_0x0001072d8e38();
        }
        puVar10 = *(ulong **)(param_1 + 0x28);
        if (puVar10 == (ulong *)0x0) {
          func_0x0001072d8e0c();
        }
        else {
          func_0x0001072d8ea4();
          puVar6 = puVar10;
        }
        func_0x0001072d88fc();
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
        func_0x0001072d8da4();
        puVar10 = puVar1;
        if (!(bool)uVar5) {
          puVar10 = extraout_x8_01;
        }
        *puVar10 = (ulong)puVar6;
      }
    }
    else {
      func_0x000104c302a4(&ppuStack_168,&UNK_10f4093dc,10);
      FUN_1072d78b4(&ppuStack_130,auStack_b8,&ppuStack_168);
      func_0x000104c2f714(&ppuStack_168);
      func_0x000104c2f714(&ppuStack_130);
    }
    func_0x0001072d899c(auStack_1d0);
    func_0x000104c2de10(&pppuStack_1a0);
  } while( true );
}



/* Entry: 1072d786c; end: 1072d7873;  */

void FUN_1072d786c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109ee220;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = &DAT_11383d918;
  param_1[7] = &DAT_11383d918;
  param_1[8] = &DAT_11383d918;
  param_1[9] = &DAT_11383d918;
  param_1[10] = 0;
  return;
}



/* Entry: 1072d7874; end: 1072d78b3;  */

void FUN_1072d7874(long param_1)

{
  ulong uVar1;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  if (*(long *)(param_1 + 0x50) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001072d8e5c();
    }
    FUN_1072d8160();
    *(ulong *)(param_1 + 0x50) = uVar1;
  }
  return;
}



/* Entry: 1072d78b4; end: 1072d78d3;  */

void FUN_1072d78b4(long param_1,long param_2,long param_3)

{
  long unaff_x19;
  undefined8 unaff_x20;
  
  if (*(char *)(param_2 + 0x38) == '\x01') {
    func_0x0001000d03a8(param_1,param_2);
    func_0x000104c2feb0();
    *(undefined8 *)(unaff_x19 + 0x30) = 0xffffffffffffffff;
    func_0x000104c2fe38();
    *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  }
  else {
    func_0x000104c318ec();
    *(undefined8 *)(param_1 + 0x30) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_3 + 0x30);
  }
  return;
}



/* Entry: 1072d78d4; end: 1072d7bff;  */

void FUN_1072d78d4(undefined8 param_1,long param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined *****pppppuVar3;
  undefined ****ppppuVar4;
  undefined **ppuVar5;
  long *plVar6;
  undefined ****ppppuVar7;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 auStack_268 [56];
  undefined1 auStack_230 [40];
  undefined1 auStack_208 [24];
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined **ppuStack_1d8;
  undefined4 uStack_1d0;
  undefined1 auStack_1c0 [24];
  undefined1 auStack_1a8 [88];
  undefined ****ppppuStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined1 auStack_120 [16];
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  undefined1 uStack_f0;
  undefined1 auStack_e8 [72];
  undefined8 uStack_a0;
  undefined **ppuStack_98;
  
  FUN_1072d7368(auStack_e8);
  func_0x000107264c5c(param_2 + 0xf0);
  puVar2 = &uStack_a0;
  func_0x0001072d8e20();
  bVar1 = *(char *)(param_2 + 0x198) != '\x01';
  if (bVar1) {
    ppppuVar7 = (undefined ****)0x0;
  }
  else {
    func_0x0001072d8eac();
    ppppuVar7 = (undefined ****)puVar2[1];
    func_0x0001072d8eac();
    unaff_d9 = *puVar2;
    func_0x0001072d8eac();
    unaff_d10 = puVar2[3];
    func_0x0001072d8eac();
    unaff_d11 = puVar2[2];
  }
  ppuVar5 = &PTR_PTR_113234958;
  if (ppuStack_98 != (undefined **)0x0) {
    ppuVar5 = ppuStack_98;
  }
  if (*(int *)((long)ppuVar5 + 0x1c) == 1) {
    ppuVar5 = (undefined **)ppuVar5[2];
  }
  else {
    ppuVar5 = &PTR_PTR_113233fe0;
  }
  puVar8 = ppuVar5[2];
  puVar9 = ppuVar5[3];
  auStack_120[0] = 0;
  uStack_f0 = 0;
  if (*(char *)(param_2 + 0x1ac) == '\x01') {
    ppppuStack_150 = (undefined ****)&PTR_DAT_1109ec330;
    puStack_148 = (undefined8 *)0x0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    FUN_10729de0c(auStack_120,&ppppuStack_150);
    func_0x00010793156c(&ppppuStack_150);
    uStack_108 = *(ulong *)(param_2 + 0x1a4) & 0xffffffff;
    uStack_100 = *(ulong *)(param_2 + 0x1a4) >> 0x20;
    uStack_110 = (ulong)*(byte *)(param_2 + 0x1a0);
  }
  FUN_107293594(auStack_1a8,auStack_e8);
  pppppuVar3 = (undefined *****)(param_2 + 0xf0);
  FUN_10724ef84(auStack_1c0);
  plVar6 = *(long **)(*(long *)(param_2 + 0x128) + 0x10);
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  ppuStack_1d8 = (undefined **)0x0;
  uStack_1e0 = 0;
  uStack_1d0 = 0x3f800000;
  for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
    func_0x0001072d8e0c();
    uStack_140 = 0;
    ppppuStack_150 = (undefined ****)pppppuVar3;
    puStack_148 = &uStack_1e0;
    *pppppuVar3 = (undefined ****)0x0;
    pppppuVar3[1] = (undefined ****)0x0;
    FUN_1072d6da0(pppppuVar3 + 2,plVar6 + 2);
    uStack_140 = CONCAT71(uStack_140._1_7_,1);
    ppppuVar4 = (undefined ****)&ppuStack_1d8;
    func_0x000100102e7c(ppppuVar4,pppppuVar3 + 2);
    pppppuVar3[1] = ppppuVar4;
    FUN_1072d8bb4(&uStack_1f0);
    if (((ulong)pppppuVar3 & 1) != 0) {
      ppppuStack_150 = (undefined ****)0x0;
    }
    pppppuVar3 = &ppppuStack_150;
    func_0x000100133b04();
  }
  func_0x00010015bc98(auStack_208,param_2 + 0x138);
  FUN_1072935a0(auStack_230,param_2 + 0x150);
  uStack_130 = CONCAT71(uStack_130._1_7_,!bVar1);
  ppppuStack_150 = ppppuVar7;
  puStack_148 = (undefined8 *)unaff_d9;
  uStack_140 = unaff_d10;
  uStack_138 = unaff_d11;
  FUN_107293b28(auStack_268,auStack_120);
  FUN_1072d89bc((float)(double)puVar8,(float)(double)puVar9,param_1,auStack_1a8,auStack_1c0,
                &uStack_1f0,auStack_208,auStack_230,&ppppuStack_150,auStack_268);
  FUN_107293b94(auStack_268);
  func_0x000107293acc(auStack_230);
  func_0x0001000e30f4(auStack_208);
  func_0x0001005d0538(&uStack_1f0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1c0);
  func_0x000107932ce0(auStack_1a8);
  FUN_107293b94(auStack_120);
  func_0x000107932ce0(auStack_e8);
  return;
}



/* Entry: 1072d7c00; end: 1072d7f0b;  */

undefined4 * FUN_1072d7c00(undefined4 *param_1,long *param_2)

{
  undefined **ppuVar1;
  ulong uVar2;
  int iVar3;
  code *pcVar4;
  undefined1 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 extraout_x8;
  undefined **ppuVar10;
  long *unaff_x20;
  bool bVar11;
  long unaff_x22;
  undefined4 auStack_190 [4];
  undefined4 auStack_180 [6];
  undefined1 auStack_168 [24];
  undefined1 auStack_150 [56];
  undefined4 auStack_118 [2];
  long lStack_110;
  char cStack_d8;
  undefined4 auStack_a0 [16];
  byte bStack_60;
  undefined8 uStack_58;
  
  puVar7 = auStack_190;
  puVar6 = param_1;
  func_0x0001072d8eb4();
  iVar3 = *(int *)((long)param_2 + 0x1c) + -1;
  uVar5 = iVar3 == 7;
  uStack_58 = extraout_x8;
  switch(iVar3) {
  case 0:
    auStack_118[0] = 6;
    lStack_110 = CONCAT71(lStack_110._1_7_,(char)param_2[2]);
    goto code_r0x0001072d7c98;
  case 1:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_180,param_2[2] & 0xfffffffffffffffc);
    FUN_107268798(auStack_118,auStack_180);
    func_0x0001072d8f30();
    func_0x000104c3323c(auStack_118);
    puVar6 = auStack_180;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    break;
  case 2:
    lStack_110 = param_2[2];
    auStack_118[0] = 5;
    goto code_r0x0001072d7c98;
  case 3:
    lStack_110 = param_2[2];
    auStack_118[0] = 4;
    goto code_r0x0001072d7c98;
  case 4:
    lStack_110 = param_2[2];
    auStack_118[0] = 3;
code_r0x0001072d7c98:
    func_0x0001072d8f30();
    puVar6 = auStack_118;
    func_0x000104c3323c();
    break;
  case 5:
    func_0x000107289330(auStack_a0);
    bVar11 = false;
    uVar5 = *(int *)((long)param_2 + 0x1c) == 6;
    ppuVar1 = (undefined **)param_2[2];
    if (!(bool)uVar5) {
      ppuVar1 = &PTR_PTR_113234648;
    }
    func_0x0001072d8e80(ppuVar1);
    for (; unaff_x22 != 0; unaff_x22 = unaff_x22 + -8) {
      FUN_1072d7c00(auStack_118,*param_2);
      uVar5 = cStack_d8 == '\x01';
      if ((bool)uVar5) {
        FUN_1072d7f0c(auStack_a0,auStack_118);
      }
      else {
        bVar11 = true;
      }
      FUN_107267ed0(auStack_118);
      param_2 = param_2 + 1;
    }
    if (bVar11) {
      *(undefined1 *)param_1 = 0;
      *(undefined1 *)(param_1 + 0x10) = 0;
    }
    else {
      FUN_1072d8034(param_1,auStack_a0);
    }
    puVar6 = auStack_a0;
    func_0x000104c33108();
    break;
  case 6:
    *param_1 = 7;
    *(undefined1 *)(param_1 + 0x10) = 1;
    break;
  case 7:
    FUN_107269c1c();
    bVar11 = false;
    uVar5 = *(int *)((long)param_2 + 0x1c) == 8;
    ppuVar1 = (undefined **)param_2[2];
    if (!(bool)uVar5) {
      ppuVar1 = &PTR_PTR_113234678;
    }
    func_0x0001072d8e80(ppuVar1);
    for (; unaff_x22 != 0; unaff_x22 = unaff_x22 + -8) {
      lVar8 = *param_2;
      ppuVar10 = *(undefined ***)(lVar8 + 0x20);
      ppuVar1 = &PTR_PTR_113234600;
      if (ppuVar10 != (undefined **)0x0) {
        ppuVar1 = ppuVar10;
      }
      FUN_1072d7c00(auStack_a0,ppuVar1);
      uVar5 = bStack_60 == 1;
      if ((bool)uVar5) {
        func_0x0001072d8e9c(*(undefined8 *)(lVar8 + 0x18),auStack_150);
        if ((bStack_60 & 1) == 0) {
          func_0x000104bdc2c8();
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1072d7e98);
          (*pcVar4)();
        }
        FUN_1072d807c(auStack_118,auStack_150,auStack_a0);
        FUN_10729d364(auStack_168,auStack_190,auStack_118);
        FUN_1072684c8(auStack_118);
        func_0x000104c2f714(auStack_150);
      }
      else {
        bVar11 = true;
      }
      puVar7 = auStack_a0;
      FUN_107267ed0();
      param_2 = param_2 + 1;
    }
    if (bVar11) {
      *(undefined1 *)param_1 = 0;
      *(undefined1 *)(param_1 + 0x10) = 0;
      puVar6 = puVar7;
    }
    else {
      FUN_1072d80b8(param_1,auStack_190);
      puVar6 = param_1;
    }
    func_0x0001072d8ed0();
    break;
  default:
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 0x10) = 0;
    param_2 = unaff_x20;
  }
  func_0x0001072d8e48(uStack_58);
  if ((bool)uVar5) {
    return puVar6;
  }
  ___stack_chk_fail();
  func_0x0001072d8ed0();
  func_0x0001072d8dc4();
  func_0x0001072d8e74();
  func_0x000107289354();
  lVar8 = *param_2;
  uVar2 = *(ulong *)(lVar8 + 8);
  if (uVar2 < *(ulong *)(lVar8 + 0x10)) {
    FUN_1072d7f70();
    lVar9 = uVar2 + 0x40;
  }
  else {
    lVar9 = lVar8;
    FUN_1072d7fa4(lVar8,puVar6);
  }
  *(long *)(lVar8 + 8) = lVar9;
  return (undefined4 *)(lVar9 + -0x40);
}



/* Entry: 1072d7f0c; end: 1072d7f6f;  */

long FUN_1072d7f0c(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  
  func_0x0001072d8e74();
  func_0x000107289354();
  lVar2 = *unaff_x20;
  uVar1 = *(ulong *)(lVar2 + 8);
  if (uVar1 < *(ulong *)(lVar2 + 0x10)) {
    FUN_1072d7f70();
    lVar3 = uVar1 + 0x40;
  }
  else {
    lVar3 = lVar2;
    FUN_1072d7fa4();
  }
  *(long *)(lVar2 + 8) = lVar3;
  return lVar3 + -0x40;
}



/* Entry: 1072d7f70; end: 1072d7fa3;  */

void FUN_1072d7f70(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  FUN_107268350(lVar1);
  *(long *)(param_1 + 8) = lVar1 + 0x40;
  return;
}



/* Entry: 1072d7fa4; end: 1072d8033;  */

long FUN_1072d7fa4(undefined8 param_1)

{
  long *unaff_x19;
  long lVar1;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  func_0x0001072d8f74();
  FUN_107289660();
  FUN_107289720(auStack_48,param_1,unaff_x19[1] - *unaff_x19 >> 6,unaff_x19 + 2);
  FUN_107268350(lStack_38);
  lStack_38 = lStack_38 + 0x40;
  FUN_1072896a0();
  lVar1 = unaff_x19[1];
  func_0x000107289820(auStack_48);
  return lVar1;
}



/* Entry: 1072d8034; end: 1072d807b;  */

undefined4 * FUN_1072d8034(undefined4 *param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_107268464(&uStack_30);
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = uStack_28;
  *(undefined8 *)(param_1 + 2) = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x000104c33108(&uStack_30);
  *(undefined1 *)(param_1 + 0x10) = 1;
  return param_1;
}



/* Entry: 1072d807c; end: 1072d80b7;  */

long FUN_1072d807c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000104c318bc();
  FUN_107268350(lVar1 + 0x38,param_3);
  return param_1;
}



/* Entry: 1072d80b8; end: 1072d813f;  */

undefined4 * FUN_1072d80b8(undefined4 *param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_107268400(&uStack_30);
  *param_1 = 1;
  *(undefined8 *)(param_1 + 4) = uStack_28;
  *(undefined8 *)(param_1 + 2) = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x0001072d8ed0();
  *(undefined1 *)(param_1 + 0x10) = 1;
  return param_1;
}



/* Entry: 1072d8140; end: 1072d815f;  */

void FUN_1072d8140(long param_1)

{
  if (*(char *)(param_1 + 0x78) == '\x01') {
    func_0x000104c32ad0();
  }
  return;
}



/* Entry: 1072d8160; end: 1072d825b;  */

void FUN_1072d8160(long param_1)

{
  if (param_1 == 0) {
    func_0x0001072d8f0c();
  }
  else {
    func_0x0001072d8ed8();
  }
  func_0x0001072d8e68(&UNK_1109edf40);
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 1072d825c; end: 1072d8727;  */

void FUN_1072d825c(undefined1 *param_1,undefined4 *param_2)

{
  long lVar1;
  int iVar2;
  code *pcVar3;
  undefined1 uVar4;
  undefined4 *puVar5;
  ulong *puVar6;
  ulong uVar7;
  undefined4 uVar8;
  ulong *extraout_x8;
  ulong *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined *puVar9;
  long lVar10;
  ulong *puVar11;
  ulong *puVar12;
  bool bVar13;
  undefined **ppuStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined4 *puStack_d0;
  undefined4 *puStack_c8;
  undefined1 auStack_c0 [32];
  byte bStack_a0;
  undefined **ppuStack_98;
  ulong uStack_90;
  ulong uStack_88;
  undefined *puStack_80;
  ulong uStack_78;
  
  ppuStack_f0 = &PTR_DAT_1109edaa0;
  puStack_e8 = (undefined *)0x0;
  uStack_d8 = 0;
  switch(*param_2) {
  case 1:
    puVar5 = param_2 + 2;
    func_0x000104c2db28();
    bVar13 = false;
    puStack_d0 = puVar5;
    while (puStack_c8 = param_2, puStack_d0 != (undefined4 *)0x0) {
      uStack_88 = 0;
      uStack_90 = 0;
      ppuStack_98 = &PTR_DAT_1109edaf0;
      puStack_80 = &DAT_11383d918;
      uStack_78 = 0;
      FUN_10724ef84(auStack_c0,param_2);
      uVar7 = uStack_90;
      if ((uStack_90 & 1) != 0) {
        uVar7 = *(ulong *)(uStack_90 & 0xfffffffffffffffe);
      }
      func_0x0001005f70e4(&puStack_80,auStack_c0,uVar7);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c0);
      FUN_1072d825c(auStack_c0,param_2 + 0xe);
      if ((bStack_a0 & 1) == 0) {
        bVar13 = true;
      }
      else {
        uStack_88 = uStack_88 | 1;
        if (uStack_78 == 0) {
          uVar7 = uStack_90;
          if ((uStack_90 & 1) != 0) {
            func_0x0001072d8e5c();
          }
          func_0x0001072d8768();
          uStack_78 = uVar7;
          if ((bStack_a0 & 1) == 0) {
            func_0x000104bdc2c8();
LAB_1072d86ac:
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1072d86b0);
            (*pcVar3)();
          }
        }
        func_0x000107932968();
        if (uStack_d8._4_4_ != 8) {
          func_0x0001072d8dfc();
          uStack_d8 = CONCAT44(8,(undefined4)uStack_d8);
          puVar9 = puStack_e8;
          if (((ulong)puStack_e8 & 1) != 0) {
            func_0x0001072d8e5c();
          }
          func_0x0001072d87a0();
          puStack_e0 = puVar9;
        }
        puVar9 = puStack_e0;
        puVar12 = (ulong *)(puStack_e0 + 0x10);
        iVar2 = *(int *)(puStack_e0 + 0x18);
        puVar6 = puVar12;
        func_0x00010006818c();
        uVar4 = iVar2 == (int)puVar6;
        if (iVar2 < (int)puVar6) {
          *(int *)(puVar9 + 0x18) = *(int *)(puVar9 + 0x18) + 1;
          func_0x0001072d8da4();
          if (!(bool)uVar4) {
            puVar12 = extraout_x8;
          }
          FUN_1072d87d4(*puVar12,&ppuStack_98);
        }
        else {
          puVar6 = puVar12;
          func_0x00010563f22c();
          if ((*puVar12 & 1) != 0) {
            func_0x0001072d8e38();
          }
          puVar11 = *(ulong **)(puVar9 + 0x20);
          if (puVar11 == (ulong *)0x0) {
            func_0x0001072d8e0c();
          }
          else {
            func_0x0001072d8ea4();
            puVar6 = puVar11;
          }
          FUN_1072d882c();
          *(int *)(puVar9 + 0x18) = *(int *)(puVar9 + 0x18) + 1;
          func_0x0001072d8da4();
          if (!(bool)uVar4) {
            puVar12 = extraout_x8_00;
          }
          *puVar12 = (ulong)puVar6;
        }
      }
      FUN_1072d897c(auStack_c0);
      func_0x00010793202c(&ppuStack_98);
      func_0x000104c2de10(&puStack_d0);
      param_2 = puStack_c8;
    }
    goto LAB_1072d85c0;
  case 2:
    FUN_10724ef84(&ppuStack_98,param_2 + 2);
    if (uStack_d8._4_4_ != 2) {
      func_0x0001072d8dfc();
      uStack_d8 = CONCAT44(2,(undefined4)uStack_d8);
      puStack_e0 = &DAT_11383d918;
    }
    puVar9 = puStack_e8;
    if (((ulong)puStack_e8 & 1) != 0) {
      puVar9 = *(undefined **)((ulong)puStack_e8 & 0xfffffffffffffffe);
    }
    func_0x0001005f70e4(&puStack_e0,&ppuStack_98,puVar9);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_98);
    break;
  case 3:
    puVar9 = *(undefined **)(param_2 + 2);
    func_0x0001072d8dfc();
    uStack_d8 = CONCAT44(5,(undefined4)uStack_d8);
    puStack_e0 = puVar9;
    break;
  case 4:
    puVar9 = *(undefined **)(param_2 + 2);
    func_0x0001072d8dfc();
    uVar8 = 4;
    goto code_r0x0001072d84b8;
  case 5:
    puVar9 = *(undefined **)(param_2 + 2);
    func_0x0001072d8dfc();
    uVar8 = 3;
code_r0x0001072d84b8:
    uStack_d8 = CONCAT44(uVar8,(undefined4)uStack_d8);
    puStack_e0 = puVar9;
    break;
  case 6:
    uVar4 = *(undefined1 *)(param_2 + 2);
    func_0x0001072d8dfc();
    uStack_d8 = CONCAT44(1,(undefined4)uStack_d8);
    puStack_e0 = (undefined *)CONCAT71(puStack_e0._1_7_,uVar4);
    break;
  case 7:
    func_0x0001072d8dfc();
    uStack_d8 = CONCAT44(7,(undefined4)uStack_d8);
    puVar9 = puStack_e8;
    if (((ulong)puStack_e8 & 1) != 0) {
      func_0x0001072d8e5c();
    }
    FUN_1072d8728();
    puStack_e0 = puVar9;
    break;
  default:
    bVar13 = false;
    lVar1 = (*(long **)(param_2 + 2))[1];
    for (lVar10 = **(long **)(param_2 + 2); lVar10 != lVar1; lVar10 = lVar10 + 0x40) {
      FUN_1072d825c(&ppuStack_98,lVar10);
      if ((char)uStack_78 == '\x01') {
        if (uStack_d8._4_4_ != 6) {
          func_0x0001072d8dfc();
          uStack_d8 = CONCAT44(6,(undefined4)uStack_d8);
          puVar9 = puStack_e8;
          if (((ulong)puStack_e8 & 1) != 0) {
            func_0x0001072d8e5c();
          }
          FUN_1072d8854();
          puStack_e0 = puVar9;
          if ((uStack_78 & 1) == 0) {
            func_0x000104bdc2c8();
            goto LAB_1072d86ac;
          }
        }
        puVar9 = puStack_e0;
        puVar12 = (ulong *)(puStack_e0 + 0x10);
        iVar2 = *(int *)(puStack_e0 + 0x18);
        puVar6 = puVar12;
        func_0x00010006818c();
        if (iVar2 < (int)puVar6) {
          FUN_1072d8d80();
          FUN_1072d8888(*extraout_x8_01,&ppuStack_98);
        }
        else {
          puVar6 = puVar12;
          func_0x00010563f22c();
          if ((*puVar12 & 1) != 0) {
            func_0x0001072d8e38();
          }
          puVar12 = *(ulong **)(puVar9 + 0x20);
          if (puVar12 == (ulong *)0x0) {
            func_0x0001072d8f0c();
          }
          else {
            func_0x00010b4d80e0(puVar12,0x20);
            puVar6 = puVar12;
          }
          FUN_1072d88e0();
          FUN_1072d8d80();
          *extraout_x8_02 = puVar6;
        }
      }
      else {
        bVar13 = true;
      }
      FUN_1072d897c(&ppuStack_98);
    }
LAB_1072d85c0:
    if (bVar13) {
      uVar4 = 0;
      *param_1 = 0;
      goto LAB_1072d8670;
    }
  }
  func_0x000107932654(param_1,0,&ppuStack_f0);
  uVar4 = 1;
LAB_1072d8670:
  param_1[0x20] = uVar4;
  func_0x0001079326fc(&ppuStack_f0);
  return;
}



/* Entry: 1072d8728; end: 1072d87d3;  */

void FUN_1072d8728(long param_1)

{
  if (param_1 == 0) {
    func_0x0001072d8f14();
  }
  else {
    func_0x00010b4d80e0(param_1,0x18);
  }
  func_0x0001072d8e68(&UNK_1109ed130);
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}



/* Entry: 1072d87d4; end: 1072d882b;  */

void FUN_1072d87d4(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar2;
  ulong extraout_x9;
  long unaff_x19;
  
  func_0x0001072d8f80();
  if (!(bool)in_ZR) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001072d8f54();
      uVar1 = extraout_x8;
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      func_0x0001072d8f48();
      uVar1 = extraout_x8_00;
      uVar2 = extraout_x9;
    }
    if (uVar1 == uVar2) {
      func_0x000107932410();
    }
    else {
      func_0x0001079323e0();
    }
  }
  return;
}



/* Entry: 1072d882c; end: 1072d8853;  */

void FUN_1072d882c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar2;
  ulong extraout_x9;
  long unaff_x19;
  
  *param_1 = &PTR_DAT_1109edaf0;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = &DAT_11383d918;
  param_1[4] = 0;
  func_0x0001072d8f80();
  if (!(bool)in_ZR) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001072d8f54();
      uVar1 = extraout_x8;
    }
    uVar2 = *(ulong *)(param_3 + 8);
    if ((uVar2 & 1) != 0) {
      func_0x0001072d8f48();
      uVar1 = extraout_x8_00;
      uVar2 = extraout_x9;
    }
    if (uVar1 == uVar2) {
      func_0x000107932410();
    }
    else {
      func_0x0001079323e0();
    }
  }
  return;
}



/* Entry: 1072d8854; end: 1072d8887;  */

void FUN_1072d8854(long param_1)

{
  if (param_1 == 0) {
    func_0x0001072d8ef8();
  }
  else {
    func_0x0001072d8e14();
  }
  func_0x0001072d8dcc(&UNK_1109edb30);
  return;
}



/* Entry: 1072d8888; end: 1072d88df;  */

void FUN_1072d8888(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar2;
  ulong extraout_x9;
  long unaff_x19;
  
  func_0x0001072d8f80();
  if (!(bool)in_ZR) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001072d8f54();
      uVar1 = extraout_x8;
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      func_0x0001072d8f48();
      uVar1 = extraout_x8_00;
      uVar2 = extraout_x9;
    }
    if (uVar1 == uVar2) {
      func_0x000107932998();
    }
    else {
      func_0x000107932968();
    }
  }
  return;
}



/* Entry: 1072d88e0; end: 1072d8923;  */

void FUN_1072d88e0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar2;
  ulong extraout_x9;
  long unaff_x19;
  
  *param_1 = &PTR_DAT_1109edaa0;
  param_1[1] = param_2;
  param_1[3] = 0;
  func_0x0001072d8f80();
  if (!(bool)in_ZR) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001072d8f54();
      uVar1 = extraout_x8;
    }
    uVar2 = *(ulong *)(param_3 + 8);
    if ((uVar2 & 1) != 0) {
      func_0x0001072d8f48();
      uVar1 = extraout_x8_00;
      uVar2 = extraout_x9;
    }
    if (uVar1 == uVar2) {
      func_0x000107932998();
    }
    else {
      func_0x000107932968();
    }
  }
  return;
}



/* Entry: 1072d8924; end: 1072d897b;  */

void FUN_1072d8924(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar2;
  ulong extraout_x9;
  long unaff_x19;
  
  func_0x0001072d8f80();
  if (!(bool)in_ZR) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001072d8f54();
      uVar1 = extraout_x8;
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      func_0x0001072d8f48();
      uVar1 = extraout_x8_00;
      uVar2 = extraout_x9;
    }
    if (uVar1 == uVar2) {
      func_0x000107932c04();
    }
    else {
      func_0x000107932bd4();
    }
  }
  return;
}



/* Entry: 1072d897c; end: 1072d89bb;  */

void FUN_1072d897c(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    func_0x0001079326fc();
  }
  return;
}



/* Entry: 1072d89bc; end: 1072d8a8f;  */

long FUN_1072d89bc(undefined4 param_1,undefined4 param_2,long param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 *param_7,undefined8 param_8,
                  undefined8 *param_9,undefined8 param_10)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = param_3;
  FUN_10729dca0();
  uVar3 = param_5[1];
  uVar2 = *param_5;
  *(undefined8 *)(lVar1 + 0x68) = param_5[2];
  *(undefined8 *)(lVar1 + 0x60) = uVar3;
  *(undefined8 *)(lVar1 + 0x58) = uVar2;
  *param_5 = 0;
  param_5[1] = 0;
  param_5[2] = 0;
  FUN_10729dd38(lVar1 + 0x70,param_6);
  *(undefined8 *)(param_3 + 0x98) = 0;
  *(undefined8 *)(param_3 + 0xa0) = 0;
  *(undefined8 *)(param_3 + 0xa8) = 0;
  uVar2 = *param_7;
  *(undefined8 *)(param_3 + 0xa0) = param_7[1];
  *(undefined8 *)(param_3 + 0x98) = uVar2;
  *(undefined8 *)(param_3 + 0xa8) = param_7[2];
  *param_7 = 0;
  param_7[1] = 0;
  param_7[2] = 0;
  func_0x00010729dd84(param_3 + 0xb0,param_8);
  *(undefined4 *)(param_3 + 0xd8) = param_1;
  *(undefined4 *)(param_3 + 0xdc) = param_2;
  uVar3 = param_9[1];
  uVar2 = *param_9;
  uVar5 = param_9[3];
  uVar4 = param_9[2];
  *(undefined8 *)(param_3 + 0x100) = param_9[4];
  *(undefined8 *)(param_3 + 0xe8) = uVar3;
  *(undefined8 *)(param_3 + 0xe0) = uVar2;
  *(undefined8 *)(param_3 + 0xf8) = uVar5;
  *(undefined8 *)(param_3 + 0xf0) = uVar4;
  FUN_10729ddd0(param_3 + 0x108,param_10);
  return param_3;
}



/* Entry: 1072d8a90; end: 1072d8ab3;  */

undefined4 * FUN_1072d8a90(undefined4 *param_1)

{
  *param_1 = 0;
  func_0x000104c318bc(param_1 + 2);
  return param_1;
}



/* Entry: 1072d8ab4; end: 1072d8b1f;  */

long FUN_1072d8ab4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001072693c4();
  FUN_107268400(lVar1 + 0x20,param_3);
  func_0x000107269bac(param_1 + 0x30,param_4);
  return param_1;
}



/* Entry: 1072d8b20; end: 1072d8b77;  */

void FUN_1072d8b20(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar2;
  ulong extraout_x9;
  long unaff_x19;
  
  func_0x0001072d8f80();
  if (!(bool)in_ZR) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001072d8f54();
      uVar1 = extraout_x8;
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      func_0x0001072d8f48();
      uVar1 = extraout_x8_00;
      uVar2 = extraout_x9;
    }
    if (uVar1 == uVar2) {
      func_0x00010793151c();
    }
    else {
      func_0x0001079314ec();
    }
  }
  return;
}



/* Entry: 1072d8b78; end: 1072d8bb3;  */

undefined8 * FUN_1072d8b78(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_DAT_1109ecf60;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_1072d8b20(param_1,param_3);
  return param_1;
}



/* Entry: 1072d8bb4; end: 1072d8d7f;  */

undefined1  [16] FUN_1072d8bb4(long param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *unaff_x19;
  long *unaff_x20;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  undefined1 auVar11 [16];
  
  func_0x0001072d8e74();
  uVar5 = param_1 + 0x18;
  func_0x000100102e7c(uVar5,param_2 + 0x10);
  unaff_x19[1] = uVar5;
  uVar7 = unaff_x20[1];
  if (uVar7 != 0) {
    uVar8 = uVar7 - 1;
    if ((uVar7 & uVar8) == 0) {
      uVar9 = uVar8 & uVar5;
    }
    else {
      uVar9 = uVar5;
      if (uVar7 <= uVar5) {
        uVar9 = 0;
        if (uVar7 != 0) {
          uVar9 = uVar5 / uVar7;
        }
        uVar9 = uVar5 - uVar9 * uVar7;
      }
    }
    plVar10 = *(long **)(*unaff_x20 + uVar9 * 8);
    if (plVar10 != (long *)0x0) {
      do {
        while( true ) {
          plVar10 = (long *)*plVar10;
          if (plVar10 == (long *)0x0) goto LAB_1072d8c70;
          uVar4 = plVar10[1];
          if (uVar4 != uVar5) break;
          plVar2 = plVar10 + 2;
          func_0x0001000e107c(plVar2,unaff_x19 + 2);
          if (((ulong)plVar2 & 1) != 0) {
            uVar3 = 0;
            unaff_x19 = plVar10;
            goto LAB_1072d8d64;
          }
        }
        if ((uVar7 & uVar8) == 0) {
          uVar4 = uVar4 & uVar8;
        }
        else if (uVar7 <= uVar4) {
          uVar1 = 0;
          if (uVar7 != 0) {
            uVar1 = uVar4 / uVar7;
          }
          uVar4 = uVar4 - uVar1 * uVar7;
        }
      } while (uVar4 == uVar9);
    }
  }
LAB_1072d8c70:
  if ((uVar7 == 0) || (*(float *)(unaff_x20 + 4) * (float)uVar7 < (float)(unaff_x20[3] + 1))) {
    func_0x0001072d8de4(uVar7 << 1);
    func_0x0001001338e4();
  }
  uVar5 = unaff_x20[1];
  uVar8 = unaff_x19[1];
  uVar7 = uVar5 - 1;
  if ((uVar5 & uVar7) == 0) {
    uVar8 = uVar7 & uVar8;
  }
  else if (uVar5 <= uVar8) {
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = uVar8 / uVar5;
    }
    uVar8 = uVar8 - uVar9 * uVar5;
  }
  lVar6 = *unaff_x20;
  plVar10 = *(long **)(lVar6 + uVar8 * 8);
  if (plVar10 == (long *)0x0) {
    plVar10 = unaff_x20 + 2;
    *unaff_x19 = *plVar10;
    *plVar10 = (long)unaff_x19;
    *(long **)(lVar6 + uVar8 * 8) = plVar10;
    if (*unaff_x19 != 0) {
      uVar8 = *(ulong *)(*unaff_x19 + 8);
      if ((uVar5 & uVar7) == 0) {
        uVar8 = uVar8 & uVar7;
      }
      else if (uVar5 <= uVar8) {
        uVar7 = 0;
        if (uVar5 != 0) {
          uVar7 = uVar8 / uVar5;
        }
        uVar8 = uVar8 - uVar7 * uVar5;
      }
      *(long **)(lVar6 + uVar8 * 8) = unaff_x19;
    }
  }
  else {
    *unaff_x19 = *plVar10;
    *plVar10 = (long)unaff_x19;
  }
  unaff_x20[3] = unaff_x20[3] + 1;
  uVar3 = 1;
LAB_1072d8d64:
  auVar11._8_8_ = uVar3;
  auVar11._0_8_ = unaff_x19;
  return auVar11;
}



/* Entry: 1072d8d80; end: 1072d8f8b;  */

void FUN_1072d8d80(void)

{
  long unaff_x21;
  
  *(int *)(unaff_x21 + 0x18) = *(int *)(unaff_x21 + 0x18) + 1;
  return;
}



/* Entry: 1072d8f8c; end: 1072d9013;  */

void FUN_1072d8f8c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar4 = 1;
  __Znwm();
  uStack_28 = param_3[1];
  uStack_30 = *param_3;
  if (param_3[1] != 0) {
    plVar1 = (long *)(param_3[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = uVar4;
  func_0x0001072aa114(&uStack_30);
  return;
}



/* Entry: 1072d9014; end: 1072d902b;  */

void FUN_1072d9014(long *param_1,long param_2)

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



/* Entry: 1072d902c; end: 1072d945b;  */

void FUN_1072d902c(undefined1 *param_1,undefined4 *param_2,long param_3)

{
  ulong *puVar1;
  long lVar2;
  int iVar3;
  code *pcVar4;
  undefined1 uVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  ulong *puVar8;
  ulong *extraout_x8;
  ulong *extraout_x8_00;
  ulong *extraout_x8_01;
  ulong uVar9;
  ulong *extraout_x8_02;
  long lVar10;
  bool bVar11;
  undefined **ppuStack_d0;
  ulong uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined4 *puStack_b0;
  long lStack_a8;
  undefined1 auStack_a0 [32];
  byte bStack_80;
  undefined **ppuStack_78;
  ulong uStack_70;
  ulong uStack_68;
  undefined *puStack_60;
  ulong uStack_58;
  
  pppuVar6 = &ppuStack_d0;
  pppuVar7 = &ppuStack_d0;
  ppuStack_d0 = &PTR_DAT_1109ed4b0;
  uStack_c8 = 0;
  uStack_b8 = 0;
  switch(*param_2) {
  case 1:
    FUN_1072d961c();
    param_2 = param_2 + 2;
    func_0x000104c2db28();
    bVar11 = false;
    puVar1 = (ulong *)((long)pppuVar6 + 0x10);
    puStack_b0 = param_2;
    while (lStack_a8 = param_3, puStack_b0 != (undefined4 *)0x0) {
      uStack_68 = 0;
      uStack_70 = 0;
      ppuStack_78 = &PTR_DAT_1109ed500;
      puStack_60 = &DAT_11383d918;
      uStack_58 = 0;
      FUN_10724ef84(auStack_a0,param_3);
      uVar9 = uStack_70;
      if ((uStack_70 & 1) != 0) {
        uVar9 = *(ulong *)(uStack_70 & 0xfffffffffffffffe);
      }
      func_0x0001005f70e4(&puStack_60,auStack_a0,uVar9);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a0);
      FUN_1072d902c(auStack_a0,param_3 + 0x38);
      if ((bStack_80 & 1) == 0) {
        bVar11 = true;
      }
      else {
        uStack_68 = uStack_68 | 1;
        if (uStack_58 == 0) {
          uVar9 = uStack_70;
          if ((uStack_70 & 1) != 0) {
            func_0x0001072d9900();
          }
          func_0x0001072d969c();
          uStack_58 = uVar9;
          if ((bStack_80 & 1) == 0) {
            func_0x000104bdc2c8();
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1072d93e4);
            (*pcVar4)();
          }
        }
        func_0x00010793e5cc();
        iVar3 = *(int *)((long)pppuVar6 + 0x18);
        puVar8 = puVar1;
        func_0x00010006818c();
        uVar5 = iVar3 == (int)puVar8;
        if (iVar3 < (int)puVar8) {
          func_0x0001072d9890();
          puVar8 = puVar1;
          if (!(bool)uVar5) {
            puVar8 = extraout_x8;
          }
          FUN_1072d96e4(*puVar8,&ppuStack_78);
        }
        else {
          func_0x00010563f22c(puVar1);
          uVar9 = *puVar1;
          if ((uVar9 & 1) != 0) {
            *(int *)(uVar9 - 1) = *(int *)(uVar9 - 1) + 1;
          }
          uVar9 = *(ulong *)((long)pppuVar6 + 0x20);
          if (uVar9 == 0) {
            uVar9 = 0x28;
            __Znwm();
          }
          else {
            func_0x00010b4d80e0(uVar9,0x28);
          }
          FUN_1072d9748();
          func_0x0001072d9890();
          puVar8 = puVar1;
          if (!(bool)uVar5) {
            puVar8 = extraout_x8_00;
          }
          *puVar8 = uVar9;
        }
      }
      FUN_1072d9770(auStack_a0);
      func_0x00010793dca0(&ppuStack_78);
      func_0x000104c2de10(&puStack_b0);
      param_3 = lStack_a8;
    }
    goto LAB_1072d9320;
  case 2:
    FUN_10724ef84(&ppuStack_78,param_2 + 2);
    if (uStack_b8._4_4_ != 2) {
      func_0x00010793e1f8(&ppuStack_d0);
      uStack_b8 = CONCAT44(2,(undefined4)uStack_b8);
      puStack_c0 = &DAT_11383d918;
    }
    uVar9 = uStack_c8;
    if ((uStack_c8 & 1) != 0) {
      uVar9 = *(ulong *)(uStack_c8 & 0xfffffffffffffffe);
    }
    func_0x0001005f70e4(&puStack_c0,&ppuStack_78,uVar9);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_78);
    break;
  case 3:
    FUN_1072d95dc(*(undefined8 *)(param_2 + 2),&ppuStack_d0);
    break;
  case 4:
    func_0x0001072d95a4(&ppuStack_d0,*(undefined8 *)(param_2 + 2));
    break;
  case 5:
    func_0x0001072d956c(&ppuStack_d0,*(undefined8 *)(param_2 + 2));
    break;
  case 6:
    func_0x0001072d9534(&ppuStack_d0,*(undefined1 *)(param_2 + 2));
    break;
  case 7:
    func_0x0001072d94a4(&ppuStack_d0);
    break;
  default:
    FUN_1072d9790();
    bVar11 = false;
    lVar2 = (*(long **)(param_2 + 2))[1];
    puVar1 = (ulong *)((long)pppuVar7 + 0x10);
    for (lVar10 = **(long **)(param_2 + 2); lVar10 != lVar2; lVar10 = lVar10 + 0x40) {
      FUN_1072d902c(&ppuStack_78,lVar10);
      if ((char)uStack_58 == '\x01') {
        iVar3 = *(int *)((long)pppuVar7 + 0x18);
        puVar8 = puVar1;
        func_0x00010006818c();
        uVar5 = iVar3 == (int)puVar8;
        if (iVar3 < (int)puVar8) {
          func_0x0001072d9890();
          puVar8 = puVar1;
          if (!(bool)uVar5) {
            puVar8 = extraout_x8_01;
          }
          FUN_1072d9810(*puVar8,&ppuStack_78);
        }
        else {
          func_0x00010563f22c(puVar1);
          uVar9 = *puVar1;
          if ((uVar9 & 1) != 0) {
            *(int *)(uVar9 - 1) = *(int *)(uVar9 - 1) + 1;
          }
          uVar9 = *(ulong *)((long)pppuVar7 + 0x20);
          if (uVar9 == 0) {
            uVar9 = 0x20;
            __Znwm();
          }
          else {
            func_0x00010b4d80e0(uVar9,0x20);
          }
          func_0x0001072d9874();
          func_0x0001072d9890();
          puVar8 = puVar1;
          if (!(bool)uVar5) {
            puVar8 = extraout_x8_02;
          }
          *puVar8 = uVar9;
        }
      }
      else {
        bVar11 = true;
      }
      FUN_1072d9770(&ppuStack_78);
    }
LAB_1072d9320:
    if (bVar11) {
      uVar5 = 0;
      *param_1 = 0;
      goto LAB_1072d93b4;
    }
  }
  func_0x00010793e2b8(param_1,0,&ppuStack_d0);
  uVar5 = 1;
LAB_1072d93b4:
  param_1[0x20] = uVar5;
  func_0x00010793e360(&ppuStack_d0);
  return;
}



/* Entry: 1072d945c; end: 1072d95db;  */

void FUN_1072d945c(undefined1 *param_1,long param_2)

{
  bool bVar1;
  
  bVar1 = *(char *)(param_2 + 0x38) != '\x01';
  if (bVar1) {
    *param_1 = 0;
  }
  else {
    FUN_10725aba0(*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18),
                  *(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28),param_1);
  }
  param_1[0x20] = !bVar1;
  return;
}



/* Entry: 1072d95dc; end: 1072d961b;  */

void FUN_1072d95dc(undefined8 param_1)

{
  int extraout_w8;
  long unaff_x19;
  
  func_0x0001072d98f4();
  if (extraout_w8 != 5) {
    func_0x0001072d98b8();
    *(undefined4 *)(unaff_x19 + 0x1c) = 5;
  }
  *(undefined8 *)(unaff_x19 + 0x10) = param_1;
  return;
}



/* Entry: 1072d961c; end: 1072d96e3;  */

void FUN_1072d961c(void)

{
  ulong uVar1;
  int extraout_w8;
  long unaff_x19;
  
  func_0x0001072d98f4();
  if (extraout_w8 != 8) {
    func_0x0001072d98b8();
    *(undefined4 *)(unaff_x19 + 0x1c) = 8;
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001072d9900();
    }
    func_0x0001072d9664();
    *(ulong *)(unaff_x19 + 0x10) = uVar1;
  }
  return;
}



/* Entry: 1072d96e4; end: 1072d9747;  */

long FUN_1072d96e4(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar1 == uVar2) {
      func_0x00010793e078(param_1);
    }
    else {
      func_0x00010793e048(param_1);
    }
  }
  return param_1;
}



/* Entry: 1072d9748; end: 1072d976f;  */

undefined8 * FUN_1072d9748(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  *param_1 = &PTR_DAT_1109ed500;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = &DAT_11383d918;
  param_1[4] = 0;
  if (param_1 != param_3) {
    uVar1 = param_1[1];
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = param_3[1];
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar1 == uVar2) {
      func_0x00010793e078(param_1);
    }
    else {
      func_0x00010793e048(param_1);
    }
  }
  return param_1;
}



/* Entry: 1072d9770; end: 1072d978f;  */

void FUN_1072d9770(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    func_0x00010793e360();
  }
  return;
}



/* Entry: 1072d9790; end: 1072d980f;  */

void FUN_1072d9790(void)

{
  ulong uVar1;
  int extraout_w8;
  long unaff_x19;
  
  func_0x0001072d98f4();
  if (extraout_w8 != 6) {
    func_0x0001072d98b8();
    *(undefined4 *)(unaff_x19 + 0x1c) = 6;
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001072d9900();
    }
    func_0x0001072d97d8();
    *(ulong *)(unaff_x19 + 0x10) = uVar1;
  }
  return;
}



/* Entry: 1072d9810; end: 1072d9873;  */

long FUN_1072d9810(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar1 == uVar2) {
      func_0x00010793e5fc(param_1);
    }
    else {
      func_0x00010793e5cc(param_1);
    }
  }
  return param_1;
}


